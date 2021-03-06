// Automatically generated from JavaScriptCore/runtime/RegExpConstructor.cpp using JavaScriptCore/create_hash_table. DO NOT EDIT!

#include "Lookup.h"

namespace JSC {

static const struct CompactHashIndex regExpConstructorTableIndex[65] = {
    { -1, -1 },
    { 8, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 12, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { -1, -1 },
    { 7, -1 },
    { 2, -1 },
    { 9, -1 },
    { 16, -1 },
    { -1, -1 },
    { -1, -1 },
    { 19, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 4, -1 },
    { -1, -1 },
    { -1, -1 },
    { 5, 64 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 17, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 14, -1 },
    { -1, -1 },
    { 11, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 6, -1 },
    { -1, -1 },
    { 15, -1 },
    { -1, -1 },
    { 0, -1 },
    { -1, -1 },
    { 18, -1 },
    { 20, -1 },
    { 13, -1 },
};

static const struct HashTableValue regExpConstructorTableValues[21] = {
   { "input", None, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorInput), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(setRegExpConstructorInput) } },
   { "$_", DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorInput), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(setRegExpConstructorInput) } },
   { "multiline", None, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorMultiline), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(setRegExpConstructorMultiline) } },
   { "$*", DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorMultiline), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(setRegExpConstructorMultiline) } },
   { "lastMatch", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorLastMatch), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$&", DontDelete|ReadOnly|DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorLastMatch), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "lastParen", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorLastParen), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$+", DontDelete|ReadOnly|DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorLastParen), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "leftContext", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorLeftContext), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$`", DontDelete|ReadOnly|DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorLeftContext), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "rightContext", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorRightContext), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$'", DontDelete|ReadOnly|DontEnum, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorRightContext), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$1", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<1>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$2", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<2>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$3", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<3>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$4", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<4>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$5", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<5>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$6", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<6>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$7", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<7>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$8", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<8>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
   { "$9", DontDelete|ReadOnly, NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(regExpConstructorDollar<9>), (intptr_t)static_cast<PutPropertySlot::PutValueFunc>(0) } },
};

static const struct HashTable regExpConstructorTable =
    { 21, 63, true, regExpConstructorTableValues, regExpConstructorTableIndex };

} // namespace JSC
