#pragma once

#include "SDK/SDK.hpp"
#include <vector>


namespace Functions {
	static void memcpy_(void* _Dst, void const* _Src, size_t _Size)
	{
		auto csrc = (char*)_Src;
		auto cdest = (char*)_Dst;

		for (int i = 0; i < _Size; i++)
		{
			cdest[i] = csrc[i];
		}
	}

	//Generally just for checking dont call raw
	DWORD GetMemoryProtection(LPVOID address)
	{
		MEMORY_BASIC_INFORMATION memInfo;
		VirtualQuery(address, &memInfo, sizeof(memInfo));
		return memInfo.Protect;
	}

	bool ShouldUsePointer64(void* ptrF) {
		uintptr_t ptr = (uintptr_t)ptrF;
		if (ptr == 0x0 || ptr < 0x10000000 || ptr > 0x7fffffffffff || GetMemoryProtection(reinterpret_cast<LPVOID>(ptr)) == PAGE_NOACCESS) return false;
		return true;
	}

	template<typename T4>

	bool WriteMemW(uintptr_t ptr, T4 const& Value) {
		if (ptr < 0x10000000 || ptr > 0x7fffffffffff) return false;
		DWORD d, ds;
		int val2;
		VirtualProtect((LPVOID)ptr, sizeof(Value), PAGE_EXECUTE_READWRITE, &d);
		*reinterpret_cast<T4*>(ptr) = Value;
		VirtualProtect((LPVOID)ptr, sizeof(Value), d, &ds);
		return true;
	}


	template<typename T3>

	bool ReadMemW(uintptr_t ptr, T3& Value) {
		if (ptr < 0x10000000 || ptr > 0x7fffffffffff || GetMemoryProtection(reinterpret_cast<LPVOID>(ptr)) == PAGE_NOACCESS) return false;
		DWORD d, ds;
		int val2;
		VirtualProtect((LPVOID)ptr, sizeof(Value), PAGE_EXECUTE_READWRITE, &d);
		Value = *reinterpret_cast<T3*>(ptr);
		VirtualProtect((LPVOID)ptr, sizeof(Value), d, &ds);
		return true;
	}

	uintptr_t ChangePointer(uintptr_t ptr, int Index, uintptr_t Value) {

		uintptr_t ptrAddr = ptr + (0x8 * Index);
		uintptr_t* blabla = (uintptr_t*)ptrAddr;
		uintptr_t AddressBefore = *blabla;

		WriteMemW(ptrAddr, Value);

		return AddressBefore;
	}

	std::vector<byte> GetFunctionSig(void* FunctionPtr, size_t sigsize) {
		std::vector<byte> FunctionSig(sigsize);

		if (FunctionSig.size() == sigsize && Functions::ShouldUsePointer64(FunctionPtr)) {

			for (size_t i = 0; i < sigsize; i++)
			{
				auto FunctionAddress = (uintptr_t)(FunctionPtr)+i;
				if (!Functions::ShouldUsePointer64((void*)(FunctionAddress)))break;

				Functions::ReadMemW(FunctionAddress, FunctionSig[i]);
			}

		}
		else
			FunctionSig.empty(); //return empty vector to indicate no data could be read

		return FunctionSig;
	}

	//returns a number from 0-100 indicating how much the sig is the same from the one comparing
	int CompareFunctionSigs(std::vector<byte> source1, std::vector<byte> source2) {
		int procentage = 0;

		size_t sigLength = (source1.size() >= source2.size() ? source1.size() : source2.size());

		for (size_t i = 0; i < sigLength; i++)
		{
			if (source1[i] == source2[i])
				procentage++;
		}

		return ((procentage / sigLength) * 100);
	}

}

namespace Cheat {

	class FPlatformFileManager
	{
		/** Currently used platform file. */
		void* TopmostPlatformFile;

	public:

		/** Constructor. */
		virtual FPlatformFileManager* construct();

		/**
		 * Gets the currently used platform file.
		 *
		 * @return Reference to the currently used platform file.
		 */
		virtual void GetPlatformFile();

		/**
		 * Sets the current platform file.
		 *
		 * @param NewTopmostPlatformFile Platform file to be used.
		 */
		virtual void SetPlatformFile(void* NewTopmostPlatformFile);

		/**
		 * Finds a platform file in the chain of active platform files.
		 *
		 * @param Name of the platform file.
		 * @return Pointer to the active platform file or nullptr if the platform file was not found.
		 */
		virtual void* FindPlatformFile(const wchar_t* Name);

		/**
		 * Creates a new platform file instance.
		 *
		 * @param Name of the platform file to create.
		 * @return Platform file instance of the platform file type was found, nullptr otherwise.
		 */
		virtual void* GetPlatformFile(const wchar_t* Name);

		/**
		 * calls Tick on the platform files in the TopmostPlatformFile chain
		 */
		virtual void TickActivePlatformFile();

		/**
		* Performs additional initialization when the new async IO is enabled.
		*/
		virtual void InitializeNewAsyncIO();


		/**
		* Removes the specified file wrapper from the platform file wrapper chain.
		*
		* THIS IS EXTREMELY DANGEROUS AFTER THE ENGINE HAS BEEN INITIALIZED AS WE MAY BE MODIFYING
		* THE WRAPPER CHAIN WHILE THINGS ARE BEING LOADED
		*
		* @param The platform file to remove.
		*/
		virtual void RemovePlatformFile(void* PlatformFileToRemove);

		/**
		* Inserts a new platform file into the platform file wrapper chain.
		* The file is inserted before NewPlatformFile->GetLowerLevel().
		*
		* THIS IS EXTREMELY DANGEROUS AFTER THE ENGINE HAS BEEN INITIALIZED AS WE MAY BE MODIFYING
		* THE WRAPPER CHAIN WHILE THINGS ARE BEING LOADED
		*
		* @param The platform file to insert.
		* @return true if the platform file was inserted.
		*/
		virtual bool InsertPlatformFile(void* NewPlatformFile);
	};

	struct FStaticConstructObjectParameters
	{
		/** The class of the object to create */
		const SDK::UClass* Class;

		/** The object to create this object within (the Outer property for the new object will be set to the value specified here). */
		SDK::UObject* Outer;

		/** The name to give the new object.If no value(NAME_None) is specified, the object will be given a unique name in the form of ClassName_#. */
		SDK::FName Name;

		/** The ObjectFlags to assign to the new object. some flags can affect the behavior of constructing the object. */
		int SetFlags;

		/** The InternalObjectFlags to assign to the new object. some flags can affect the behavior of constructing the object. */
		unsigned int InternalSetFlags;

		/** If true, copy transient from the class defaults instead of the pass in archetype ptr(often these are the same) */
		bool bCopyTransientsFromClassDefaults = false;

		/** If true, Template is guaranteed to be an archetype */
		bool bAssumeTemplateIsArchetype = false;

		/**
		 * If specified, the property values from this object will be copied to the new object, and the new object's ObjectArchetype value will be set to this object.
		 * If nullptr, the class default object is used instead.
		 */
		SDK::UObject* Template = nullptr;

		/** Contains the mappings of instanced objects and components to their templates */
		void* InstanceGraph = nullptr;

		/** Assign an external Package to the created object if non-null */
		SDK::UPackage* ExternalPackage = nullptr;
	};

	class AudioData : public SDK::TArray<int8>
	{
	public:
		AudioData(std::vector<int8> Bytes) {
			TArray(Bytes.size());

			if (Data) {
				std::memcpy(Data, Bytes.data(), (sizeof(int8) * this->MaxElements));
			}
		}

		~AudioData() {

			if (Data)
				delete[] Data;
		}
	};

	typedef SDK::UObject* (__fastcall* fStaticConstructObject_Internal)(FStaticConstructObjectParameters* Params);
	typedef SDK::UObject* (__fastcall* fStaticLoadObject_Internal)(SDK::UClass* Class, SDK::UObject* InOuter_Optional, const wchar_t* NameOfObject, const wchar_t* FileName_Optional, uint32 LoadFlags, SDK::UPackageMap* Sandbox_Needed, bool AllowObjectReconciliation, void* InstancingContext);

	typedef FPlatformFileManager* (__fastcall* fFPlatformFileManager$$Get)();
	typedef void* (__fastcall* fFPakPlatformFile$$FindPlatformFile)(FPlatformFileManager* this_, const wchar_t* FileName);
	typedef bool(__fastcall* fFPakPlatformFile$$Mount)(void* this_, const wchar_t* PakFilename, int32 PakOrder, const wchar_t* MountPoint, bool bLoadIndex);

	static fStaticConstructObject_Internal StaticConstructObject_Internal;
	static fStaticLoadObject_Internal StaticLoadObject_Internal;
	static fFPlatformFileManager$$Get FPlatformFileManager$$Get;
	static fFPakPlatformFile$$FindPlatformFile FPakPlatformFile$$FindPlatformFile;
	static fFPakPlatformFile$$Mount FPakPlatformFile$$Mount;

	static SDK::UConsole* ConstructConsole(SDK::UClass* ConsoleClass, SDK::UObject* outer)
	{
		FStaticConstructObjectParameters params = { ConsoleClass, outer, SDK::FName{0,0}, 0, 0, false, false, nullptr, nullptr, nullptr };

		return reinterpret_cast<SDK::UConsole*>(StaticConstructObject_Internal(&params));
	}

}