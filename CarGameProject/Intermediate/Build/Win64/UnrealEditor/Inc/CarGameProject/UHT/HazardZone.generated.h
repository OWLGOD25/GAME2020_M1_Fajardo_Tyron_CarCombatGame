// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HazardZone.h"

#ifdef CARGAMEPROJECT_HazardZone_generated_h
#error "HazardZone.generated.h already included, missing '#pragma once' in HazardZone.h"
#endif
#define CARGAMEPROJECT_HazardZone_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AHazardZone **************************************************************
#define FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHazardEndOverlap); \
	DECLARE_FUNCTION(execOnHazardBeginOverlap);


CARGAMEPROJECT_API UClass* Z_Construct_UClass_AHazardZone_NoRegister();

#define FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHazardZone(); \
	friend struct Z_Construct_UClass_AHazardZone_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CARGAMEPROJECT_API UClass* Z_Construct_UClass_AHazardZone_NoRegister(); \
public: \
	DECLARE_CLASS2(AHazardZone, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarGameProject"), Z_Construct_UClass_AHazardZone_NoRegister) \
	DECLARE_SERIALIZER(AHazardZone)


#define FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHazardZone(AHazardZone&&) = delete; \
	AHazardZone(const AHazardZone&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHazardZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHazardZone); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHazardZone) \
	NO_API virtual ~AHazardZone();


#define FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_12_PROLOG
#define FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHazardZone;

// ********** End Class AHazardZone ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tyron_Downloads_C___Repo_GAME2020_M1_Fajardo_Tyron_CarCombatGame_CarGameProject_Source_CarGameProject_HazardZone_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
