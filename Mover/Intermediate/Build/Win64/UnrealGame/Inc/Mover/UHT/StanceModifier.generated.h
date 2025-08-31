// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultMovementSet/MovementModifiers/StanceModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVER_StanceModifier_generated_h
#error "StanceModifier.generated.h already included, missing '#pragma once' in StanceModifier.h"
#endif
#define MOVER_StanceModifier_generated_h

#define FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStanceModifier_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMovementModifierBase Super;


template<> MOVER_API UScriptStruct* StaticStruct<struct FStanceModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mover_Source_Mover_Public_DefaultMovementSet_MovementModifiers_StanceModifier_h


#define FOREACH_ENUM_ESTANCEMODE(op) \
	op(EStanceMode::Invalid) \
	op(EStanceMode::Crouch) \
	op(EStanceMode::Prone) 

enum class EStanceMode : uint8;
template<> struct TIsUEnumClass<EStanceMode> { enum { Value = true }; };
template<> MOVER_API UEnum* StaticEnum<EStanceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
