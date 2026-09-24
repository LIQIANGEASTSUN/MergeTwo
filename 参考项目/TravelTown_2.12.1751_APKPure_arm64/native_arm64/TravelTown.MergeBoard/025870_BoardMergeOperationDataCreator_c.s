; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25870 .BoardMergeOperationDataCreator.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8DAE0 | private static void .cctor() { }
; bytes=104 sha256=be3813c23b50259b6536326f9865d8b225714d29f083828a4b769c2412017c6b status=arm64_complete_bound indexed_start=True
0x06A8DAE0: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8DAE4: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8DAE8: f39400b0  adrp x19, #0x7d2a000
0x06A8DAEC: 34650090  adrp x20, #0x7731000
0x06A8DAF0: 681a5f39  ldrb w8, [x19, #0x7c6]
0x06A8DAF4: 947647f9  ldr x20, [x20, #0xee8]
0x06A8DAF8: c8000037  tbnz w8, #0, #0x6a8db10
0x06A8DAFC: 20650090  adrp x0, #0x7731000
0x06A8DB00: 007447f9  ldr x0, [x0, #0xee8]
0x06A8DB04: c5cb1b97  bl #0x3180a18
0x06A8DB08: 28008052  movz w8, #0x1
0x06A8DB0C: 681a1f39  strb w8, [x19, #0x7c6]
0x06A8DB10: 800240f9  ldr x0, [x20]
0x06A8DB14: 63cc1b97  bl #0x3180ca0
0x06A8DB18: e1031faa  mov x1, xzr
0x06A8DB1C: f30300aa  mov x19, x0
0x06A8DB20: b732b197  bl #0x56da5fc
0x06A8DB24: 880240f9  ldr x8, [x20]
0x06A8DB28: e10313aa  mov x1, x19
0x06A8DB2C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A8DB30: 130100f9  str x19, [x8]
0x06A8DB34: 880240f9  ldr x8, [x20]
0x06A8DB38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8DB3C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A8DB40: fe0742f8  ldr x30, [sp], #0x20
0x06A8DB44: a0cb1b17  b #0x31809c4

; RVA 0x6A8DB48 | public void .ctor() { }
; bytes=8 sha256=0b9cf5584b1b1aff878087b90afc470488c9f6d4e4a274932aa89da35cd591c3 status=arm64_complete_bound indexed_start=True
0x06A8DB48: e1031faa  mov x1, xzr
0x06A8DB4C: ac32b117  b #0x56da5fc

; RVA 0x6A8DB50 | internal bool <CreateOperationData>b__2_0(ItemSpawnedResult item) { }
; bytes=32 sha256=86dfdd18120bdf8586155adb57dc9c7481c3bec37eebbcb1b2a8a1cdf9d37d56 status=arm64_complete_bound indexed_start=True
0x06A8DB50: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A8DB54: c10000b4  cbz x1, #0x6a8db6c
0x06A8DB58: 282840b9  ldr w8, [x1, #0x28]
0x06A8DB5C: 1f110071  cmp w8, #4
0x06A8DB60: e0179f1a  cset w0, eq
0x06A8DB64: fe0741f8  ldr x30, [sp], #0x10
0x06A8DB68: c0035fd6  ret
0x06A8DB6C: 50cc1b97  bl #0x3180cac

