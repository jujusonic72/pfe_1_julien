// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExpositionSonore/ExpositionSonoreGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpositionSonoreGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	EXPOSITIONSONORE_API UClass* Z_Construct_UClass_AExpositionSonoreGameMode();
	EXPOSITIONSONORE_API UClass* Z_Construct_UClass_AExpositionSonoreGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ExpositionSonore();
// End Cross Module References
	void AExpositionSonoreGameMode::StaticRegisterNativesAExpositionSonoreGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExpositionSonoreGameMode);
	UClass* Z_Construct_UClass_AExpositionSonoreGameMode_NoRegister()
	{
		return AExpositionSonoreGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExpositionSonoreGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExpositionSonoreGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ExpositionSonore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExpositionSonoreGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ExpositionSonoreGameMode.h" },
		{ "ModuleRelativePath", "ExpositionSonoreGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExpositionSonoreGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExpositionSonoreGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExpositionSonoreGameMode_Statics::ClassParams = {
		&AExpositionSonoreGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExpositionSonoreGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExpositionSonoreGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExpositionSonoreGameMode()
	{
		if (!Z_Registration_Info_UClass_AExpositionSonoreGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExpositionSonoreGameMode.OuterSingleton, Z_Construct_UClass_AExpositionSonoreGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExpositionSonoreGameMode.OuterSingleton;
	}
	template<> EXPOSITIONSONORE_API UClass* StaticClass<AExpositionSonoreGameMode>()
	{
		return AExpositionSonoreGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExpositionSonoreGameMode);
	AExpositionSonoreGameMode::~AExpositionSonoreGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExpositionSonoreGameMode, AExpositionSonoreGameMode::StaticClass, TEXT("AExpositionSonoreGameMode"), &Z_Registration_Info_UClass_AExpositionSonoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExpositionSonoreGameMode), 2667889699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreGameMode_h_1342137874(TEXT("/Script/ExpositionSonore"),
		Z_CompiledInDeferFile_FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
