// Automatically generated from JavaScriptCore/runtime/JSDataViewPrototype.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex dataViewTableIndex[68] = {
    { -1, -1 },
    { -1, -1 },
    { 18, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { 16, -1 },
    { -1, -1 },
    { 17, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 9, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 0, 66 },
    { -1, -1 },
    { 1, 67 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { -1, -1 },
    { 13, -1 },
    { 2, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, 64 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 12, -1 },
    { 3, 65 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { 11, -1 },
    { -1, -1 },
    { 7, -1 },
    { 8, -1 },
    { 14, -1 },
    { 15, -1 },
};

static const struct HashTableValue dataViewTableValues[19] = {
   { "getInt8", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetInt8), (intptr_t)(1) } },
   { "getUint8", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetUint8), (intptr_t)(1) } },
   { "getInt16", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetInt16), (intptr_t)(1) } },
   { "getUint16", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetUint16), (intptr_t)(1) } },
   { "getInt32", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetInt32), (intptr_t)(1) } },
   { "getUint32", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetUint32), (intptr_t)(1) } },
   { "getFloat32", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetFloat32), (intptr_t)(1) } },
   { "getFloat64", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncGetFloat64), (intptr_t)(1) } },
   { "setInt8", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetInt8), (intptr_t)(2) } },
   { "setUint8", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetUint8), (intptr_t)(2) } },
   { "setInt16", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetInt16), (intptr_t)(2) } },
   { "setUint16", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetUint16), (intptr_t)(2) } },
   { "setInt32", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetInt32), (intptr_t)(2) } },
   { "setUint32", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetUint32), (intptr_t)(2) } },
   { "setFloat32", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetFloat32), (intptr_t)(2) } },
   { "setFloat64", DontEnum|Function, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoFuncSetFloat64), (intptr_t)(2) } },
   { "buffer", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoGetterBuffer), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "byteLength", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoGetterByteLength), (intptr_t)static_cast<NativeFunction>(nullptr) } },
   { "byteOffset", DontEnum|Accessor, NoIntrinsic, { (intptr_t)static_cast<NativeFunction>(dataViewProtoGetterByteOffset), (intptr_t)static_cast<NativeFunction>(nullptr) } },
};

static const struct HashTable dataViewTable =
    { 19, 63, true, dataViewTableValues, dataViewTableIndex };

} // namespace JSC