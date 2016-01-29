// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef RITUAL_RitualCharacter_generated_h
#error "RitualCharacter.generated.h already included, missing '#pragma once' in RitualCharacter.h"
#endif
#define RITUAL_RitualCharacter_generated_h

#define ARitualCharacter_EVENTPARMS
#define ARitualCharacter_RPC_WRAPPERS
#define ARitualCharacter_CALLBACK_WRAPPERS
#define ARitualCharacter_INCLASS \
	private: \
	static void StaticRegisterNativesARitualCharacter(); \
	friend RITUAL_API class UClass* Z_Construct_UClass_ARitualCharacter(); \
	public: \
	DECLARE_CLASS(ARitualCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, Ritual, NO_API) \
	/** Standard constructor, called after all reflected properties have been initialized */    NO_API ARitualCharacter(const class FPostConstructInitializeProperties& PCIP); \
	DECLARE_SERIALIZER(ARitualCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ARitualCharacter


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ARitualCharacter_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
public: \
	ARitualCharacter_RPC_WRAPPERS \
	ARitualCharacter_CALLBACK_WRAPPERS \
	ARitualCharacter_INCLASS \
public:


