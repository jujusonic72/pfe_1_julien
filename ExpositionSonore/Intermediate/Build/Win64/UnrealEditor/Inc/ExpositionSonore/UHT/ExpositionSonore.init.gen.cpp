// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpositionSonore_init() {}
	EXPOSITIONSONORE_API UFunction* Z_Construct_UDelegateFunction_ExpositionSonore_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ExpositionSonore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ExpositionSonore()
	{
		if (!Z_Registration_Info_UPackage__Script_ExpositionSonore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ExpositionSonore_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ExpositionSonore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x80DE3B1B,
				0xA437F424,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ExpositionSonore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ExpositionSonore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ExpositionSonore(Z_Construct_UPackage__Script_ExpositionSonore, TEXT("/Script/ExpositionSonore"), Z_Registration_Info_UPackage__Script_ExpositionSonore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x80DE3B1B, 0xA437F424));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
