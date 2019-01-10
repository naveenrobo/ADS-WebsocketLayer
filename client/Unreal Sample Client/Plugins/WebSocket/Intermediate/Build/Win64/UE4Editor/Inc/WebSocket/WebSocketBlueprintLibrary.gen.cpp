// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebSocket/Public/WebSocketBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketBlueprintLibrary() {}
// Cross Module References
	WEBSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair();
	UPackage* Z_Construct_UPackage__Script_WebSocket();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest2_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest2();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBase_NoRegister();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WEBSOCKET_API UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson();
// End Cross Module References
class UScriptStruct* FWebSocketHeaderPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEBSOCKET_API uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebSocketHeaderPair, Z_Construct_UPackage__Script_WebSocket(), TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWebSocketHeaderPair(FWebSocketHeaderPair::StaticStruct, TEXT("/Script/WebSocket"), TEXT("WebSocketHeaderPair"), false, nullptr, nullptr);
static struct FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair
{
	FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WebSocketHeaderPair")),new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>);
	}
} ScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair;
	struct Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value = { UE4CodeGen_Private::EPropertyClass::Str, "value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWebSocketHeaderPair, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWebSocketHeaderPair, key), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
		nullptr,
		&NewStructOps,
		"WebSocketHeaderPair",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FWebSocketHeaderPair),
		alignof(FWebSocketHeaderPair),
		Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_WebSocket();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_CRC() { return 1312899699U; }
	void UTest::StaticRegisterNativesUTest()
	{
	}
	UClass* Z_Construct_UClass_UTest_NoRegister()
	{
		return UTest::StaticClass();
	}
	struct Z_Construct_UClass_UTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSocketBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Statics::NewProp_mAge_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTest_Statics::NewProp_mAge = { UE4CodeGen_Private::EPropertyClass::Int, "mAge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTest, mAge), METADATA_PARAMS(Z_Construct_UClass_UTest_Statics::NewProp_mAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::NewProp_mAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Statics::NewProp_mName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTest_Statics::NewProp_mName = { UE4CodeGen_Private::EPropertyClass::Str, "mName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTest, mName), METADATA_PARAMS(Z_Construct_UClass_UTest_Statics::NewProp_mName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::NewProp_mName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest_Statics::NewProp_mAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest_Statics::NewProp_mName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTest_Statics::ClassParams = {
		&UTest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest, 2441737805);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest(Z_Construct_UClass_UTest, &UTest::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest);
	void UTest2::StaticRegisterNativesUTest2()
	{
	}
	UClass* Z_Construct_UClass_UTest2_NoRegister()
	{
		return UTest2::StaticClass();
	}
	struct Z_Construct_UClass_UTest2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTest2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSocketBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::NewProp_mTest_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTest2_Statics::NewProp_mTest = { UE4CodeGen_Private::EPropertyClass::Object, "mTest", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTest2, mTest), Z_Construct_UClass_UTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::NewProp_mTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::NewProp_mTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::NewProp_mAge_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTest2_Statics::NewProp_mAge = { UE4CodeGen_Private::EPropertyClass::Int, "mAge", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTest2, mAge), METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::NewProp_mAge_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::NewProp_mAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::NewProp_mName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTest2_Statics::NewProp_mName = { UE4CodeGen_Private::EPropertyClass::Str, "mName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UTest2, mName), METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::NewProp_mName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::NewProp_mName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTest2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest2_Statics::NewProp_mTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest2_Statics::NewProp_mAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest2_Statics::NewProp_mName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTest2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTest2_Statics::ClassParams = {
		&UTest2::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		Z_Construct_UClass_UTest2_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTest2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTest2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest2, 380473385);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest2(Z_Construct_UClass_UTest2, &UTest2::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest2);
	void UWebSocketBlueprintLibrary::StaticRegisterNativesUWebSocketBlueprintLibrary()
	{
		UClass* Class = UWebSocketBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UWebSocketBlueprintLibrary::execConnect },
			{ "ConnectWithHeader", &UWebSocketBlueprintLibrary::execConnectWithHeader },
			{ "GetJsonIntField", &UWebSocketBlueprintLibrary::execGetJsonIntField },
			{ "JsonToObject", &UWebSocketBlueprintLibrary::execJsonToObject },
			{ "ObjectToJson", &UWebSocketBlueprintLibrary::execObjectToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics
	{
		struct WebSocketBlueprintLibrary_eventConnect_Parms
		{
			FString url;
			UWebSocketBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnect_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, "Connect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WebSocketBlueprintLibrary_eventConnect_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics
	{
		struct WebSocketBlueprintLibrary_eventConnectWithHeader_Parms
		{
			FString url;
			TArray<FWebSocketHeaderPair> header;
			UWebSocketBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_header_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms, ReturnValue), Z_Construct_UClass_UWebSocketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header = { UE4CodeGen_Private::EPropertyClass::Array, "header", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms, header), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "header", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWebSocketHeaderPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, "ConnectWithHeader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics
	{
		struct WebSocketBlueprintLibrary_eventGetJsonIntField_Parms
		{
			FString data;
			FString key;
			int32 iValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventGetJsonIntField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_iValue = { UE4CodeGen_Private::EPropertyClass::Int, "iValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, iValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key = { UE4CodeGen_Private::EPropertyClass::Str, "key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Str, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_iValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, "GetJsonIntField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics
	{
		struct WebSocketBlueprintLibrary_eventJsonToObject_Parms
		{
			FString data;
			UClass* StructDefinition;
			bool checkAll;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_checkAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkAll;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StructDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventJsonToObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventJsonToObject_Parms*)Obj)->checkAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll = { UE4CodeGen_Private::EPropertyClass::Bool, "checkAll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WebSocketBlueprintLibrary_eventJsonToObject_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_StructDefinition = { UE4CodeGen_Private::EPropertyClass::Class, "StructDefinition", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventJsonToObject_Parms, StructDefinition), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Str, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventJsonToObject_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_StructDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, "JsonToObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(WebSocketBlueprintLibrary_eventJsonToObject_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics
	{
		struct WebSocketBlueprintLibrary_eventObjectToJson_Parms
		{
			UObject* Object;
			FString data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventObjectToJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WebSocketBlueprintLibrary_eventObjectToJson_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_data = { UE4CodeGen_Private::EPropertyClass::Str, "data", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventObjectToJson_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_Object = { UE4CodeGen_Private::EPropertyClass::Object, "Object", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventObjectToJson_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, "ObjectToJson", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(WebSocketBlueprintLibrary_eventObjectToJson_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister()
	{
		return UWebSocketBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect, "Connect" }, // 3610625273
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader, "ConnectWithHeader" }, // 2716908385
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField, "GetJsonIntField" }, // 443281548
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject, "JsonToObject" }, // 4002774332
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson, "ObjectToJson" }, // 151492882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WebSocketBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::ClassParams = {
		&UWebSocketBlueprintLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBlueprintLibrary, 2911691679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBlueprintLibrary(Z_Construct_UClass_UWebSocketBlueprintLibrary, &UWebSocketBlueprintLibrary::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
