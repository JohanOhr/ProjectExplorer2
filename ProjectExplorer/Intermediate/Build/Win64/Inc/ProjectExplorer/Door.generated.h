// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

#ifdef PROJECTEXPLORER_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define PROJECTEXPLORER_Door_generated_h

#define ADoor_EVENTPARMS
#define ADoor_RPC_WRAPPERS
#define ADoor_CALLBACK_WRAPPERS
#define ADoor_INCLASS \
	private: \
	static void StaticRegisterNativesADoor(); \
	friend PROJECTEXPLORER_API class UClass* Z_Construct_UClass_ADoor(); \
	public: \
	DECLARE_CLASS(ADoor, ACharacter, COMPILED_IN_FLAGS(0), 0, ProjectExplorer, NO_API) \
	DECLARE_SERIALIZER(ADoor) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	UObject* _getUObject() const { return const_cast<ADoor*>(this); }


#define ADoor_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const class FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ADoor(const ADoor& InCopy); \
public:


#define ADoor_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ADoor(const ADoor& InCopy); \
public: \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor)


#undef UCLASS_CURRENT_FILE_NAME
#define UCLASS_CURRENT_FILE_NAME ADoor


#undef UCLASS
#undef UINTERFACE
#if UE_BUILD_DOCS
#define UCLASS(...)
#else
#define UCLASS(...) \
ADoor_EVENTPARMS
#endif


#undef GENERATED_UCLASS_BODY
#undef GENERATED_BODY
#undef GENERATED_IINTERFACE_BODY
#define GENERATED_UCLASS_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ADoor_RPC_WRAPPERS \
	ADoor_CALLBACK_WRAPPERS \
	ADoor_INCLASS \
	ADoor_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GENERATED_BODY() \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ADoor_RPC_WRAPPERS \
	ADoor_CALLBACK_WRAPPERS \
	ADoor_INCLASS \
	ADoor_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


