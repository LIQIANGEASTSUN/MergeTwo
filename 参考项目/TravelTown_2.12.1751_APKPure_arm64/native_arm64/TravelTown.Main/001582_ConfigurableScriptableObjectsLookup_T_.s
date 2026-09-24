; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1582 GameCore.Configuration.Definitions.ConfigurableScriptableObjectsLookup<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D9198C | GameCore.Configuration.Definitions.ConfigurableScriptableObjectsLookup<object>$$GetKey
; native signature: System_String_o* GameCore_Configuration_Definitions_ConfigurableScriptableObjectsLookup_object___GetKey (GameCore_Configuration_Definitions_ConfigurableScriptableObjectsLookup_T__o* __this, Il2CppObject* item, const MethodInfo_4D9198C* method);
; bytes=24 sha256=99160979dad5a88d75bd423b17f5fd520cd642ba1221829d80c22be87b0059cb status=arm64_complete_bound indexed_start=True
0x04D9198C: 810000b4  cbz x1, #0x4d9199c
0x04D91990: e00301aa  mov x0, x1
0x04D91994: e1031faa  mov x1, xzr
0x04D91998: de374a14  b #0x601f910
0x04D9199C: fe0f1ff8  str x30, [sp, #-0x10]!
0x04D919A0: c3bc8f97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4D919A4 | GameCore.Configuration.Definitions.ConfigurableScriptableObjectsLookup<object>$$.ctor
; native signature: void GameCore_Configuration_Definitions_ConfigurableScriptableObjectsLookup_object____ctor (GameCore_Configuration_Definitions_ConfigurableScriptableObjectsLookup_T__o* __this, const MethodInfo_4D919A4* method);
; bytes=16 sha256=4dcf3db8ea4fc17ac5e32c374ddcc9e466a837a2daa7e4bce878f725cd82a603 status=arm64_complete_bound indexed_start=True
0x04D919A4: 281040f9  ldr x8, [x1, #0x20]
0x04D919A8: 086140f9  ldr x8, [x8, #0xc0]
0x04D919AC: 010540f9  ldr x1, [x8, #8]
0x04D919B0: 3038d217  b #0x421fa70

