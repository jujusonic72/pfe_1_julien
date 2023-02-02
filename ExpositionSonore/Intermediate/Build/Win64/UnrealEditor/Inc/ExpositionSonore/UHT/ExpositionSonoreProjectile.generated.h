// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExpositionSonoreProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef EXPOSITIONSONORE_ExpositionSonoreProjectile_generated_h
#error "ExpositionSonoreProjectile.generated.h already included, missing '#pragma once' in ExpositionSonoreProjectile.h"
#endif
#define EXPOSITIONSONORE_ExpositionSonoreProjectile_generated_h

#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_SPARSE_DATA
#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_ACCESSORS
#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExpositionSonoreProjectile(); \
	friend struct Z_Construct_UClass_AExpositionSonoreProjectile_Statics; \
public: \
	DECLARE_CLASS(AExpositionSonoreProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExpositionSonore"), NO_API) \
	DECLARE_SERIALIZER(AExpositionSonoreProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAExpositionSonoreProjectile(); \
	friend struct Z_Construct_UClass_AExpositionSonoreProjectile_Statics; \
public: \
	DECLARE_CLASS(AExpositionSonoreProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ExpositionSonore"), NO_API) \
	DECLARE_SERIALIZER(AExpositionSonoreProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExpositionSonoreProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExpositionSonoreProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExpositionSonoreProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExpositionSonoreProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExpositionSonoreProjectile(AExpositionSonoreProjectile&&); \
	NO_API AExpositionSonoreProjectile(const AExpositionSonoreProjectile&); \
public: \
	NO_API virtual ~AExpositionSonoreProjectile();


#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExpositionSonoreProjectile(AExpositionSonoreProjectile&&); \
	NO_API AExpositionSonoreProjectile(const AExpositionSonoreProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExpositionSonoreProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExpositionSonoreProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExpositionSonoreProjectile) \
	NO_API virtual ~AExpositionSonoreProjectile();


#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_12_PROLOG
#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_SPARSE_DATA \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_RPC_WRAPPERS \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_ACCESSORS \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_INCLASS \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_SPARSE_DATA \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_ACCESSORS \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXPOSITIONSONORE_API UClass* StaticClass<class AExpositionSonoreProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jpoir_Desktop_Coll_ge_TP1_Fin_pfe_1_julien_ExpositionSonore_Source_ExpositionSonore_ExpositionSonoreProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
