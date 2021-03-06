// Automatically generated from JavaScriptCore/runtime/ObjectConstructor.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "JSCBuiltins.h"
#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex objectConstructorTableIndex[67] = {
    { 1, 66 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 16, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 13, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 11, -1 },
    { -1, -1 },
    { -1, -1 },
    { 8, -1 },
    { 19, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, -1 },
    { 15, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, 65 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 9, -1 },
    { -1, -1 },
    { 17, -1 },
    { -1, -1 },
    { 12, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { 14, -1 },
    { 7, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, 64 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { 6, -1 },
    { 18, -1 },
};

static const struct HashTableValue objectConstructorTableValues[20] = {
   { "getPrototypeOf", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetPrototypeOf), (intptr_t)(1) } },
   { "setPrototypeOf", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorSetPrototypeOf), (intptr_t)(2) } },
   { "getOwnPropertyDescriptor", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetOwnPropertyDescriptor), (intptr_t)(2) } },
   { "getOwnPropertyDescriptors", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetOwnPropertyDescriptors), (intptr_t)(1) } },
   { "getOwnPropertyNames", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetOwnPropertyNames), (intptr_t)(1) } },
   { "getOwnPropertySymbols", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorGetOwnPropertySymbols), (intptr_t)(1) } },
   { "keys", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorKeys), (intptr_t)(1) } },
   { "defineProperty", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorDefineProperty), (intptr_t)(3) } },
   { "defineProperties", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorDefineProperties), (intptr_t)(2) } },
   { "create", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorCreate), (intptr_t)(2) } },
   { "seal", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorSeal), (intptr_t)(1) } },
   { "freeze", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorFreeze), (intptr_t)(1) } },
   { "preventExtensions", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorPreventExtensions), (intptr_t)(1) } },
   { "isSealed", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIsSealed), (intptr_t)(1) } },
   { "isFrozen", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIsFrozen), (intptr_t)(1) } },
   { "isExtensible", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIsExtensible), (intptr_t)(1) } },
   { "is", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorIs), (intptr_t)(2) } },
   { "assign", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorAssign), (intptr_t)(2) } },
   { "values", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(objectConstructorValues), (intptr_t)(1) } },
   { "entries", ((DontEnum|Function) & ~Function) | Builtin, NoIntrinsic, { (intptr_t)static_cast<BuiltinGenerator>(objectConstructorEntriesCodeGenerator), (intptr_t)1 } },
};

static const struct HashTable objectConstructorTable =
    { 20, 63, false, objectConstructorTableValues, objectConstructorTableIndex };

} // namespace JSC
