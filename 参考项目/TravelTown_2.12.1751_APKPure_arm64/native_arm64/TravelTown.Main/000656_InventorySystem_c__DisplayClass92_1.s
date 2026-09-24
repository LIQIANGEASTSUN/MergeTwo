; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 656 .InventorySystem.<>c__DisplayClass92_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x62887CC | public void .ctor() { }
; bytes=8 sha256=ae0e7d1bb6b21649dd08894c6c97682585ddd8608489090a402e5fe4ecd23bec status=arm64_complete_bound indexed_start=True
0x062887CC: e1031faa  mov x1, xzr
0x062887D0: 8b47d117  b #0x56da5fc

; RVA 0x628A9A0 | internal bool <SortBackendSlotsToConfig>b__1(Tuple<IMergeItem, int> tuple) { }
; bytes=192 sha256=2bc38d9208562d5baa0bd42b546ec2cf9bbd0bcfd1db0fc76d21d0a32911c4d1 status=arm64_complete_bound indexed_start=True
0x0628A9A0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0628A9A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0628A9A8: d5d400f0  adrp x21, #0x7d25000
0x0628A9AC: a8ea5339  ldrb w8, [x21, #0x4fa]
0x0628A9B0: f40301aa  mov x20, x1
0x0628A9B4: f30300aa  mov x19, x0
0x0628A9B8: 28010037  tbnz w8, #0, #0x628a9dc
0x0628A9BC: 609f00f0  adrp x0, #0x7679000
0x0628A9C0: 001044f9  ldr x0, [x0, #0x820]
0x0628A9C4: 15d83b97  bl #0x3180a18
0x0628A9C8: e0a200b0  adrp x0, #0x76e7000
0x0628A9CC: 009042f9  ldr x0, [x0, #0x520]
0x0628A9D0: 12d83b97  bl #0x3180a18
0x0628A9D4: 28008052  movz w8, #0x1
0x0628A9D8: a8ea1339  strb w8, [x21, #0x4fa]
0x0628A9DC: 140400b4  cbz x20, #0x628aa5c
0x0628A9E0: 940a40f9  ldr x20, [x20, #0x10]
0x0628A9E4: d40300b4  cbz x20, #0x628aa5c
0x0628A9E8: 6a9f00f0  adrp x10, #0x7679000
0x0628A9EC: 880240f9  ldr x8, [x20]
0x0628A9F0: 4a1144f9  ldr x10, [x10, #0x820]
0x0628A9F4: 095d4279  ldrh w9, [x8, #0x12e]
0x0628A9F8: 410140f9  ldr x1, [x10]
0x0628A9FC: 290100b4  cbz x9, #0x628aa20
0x0628AA00: 0a5940f9  ldr x10, [x8, #0xb0]
0x0628AA04: 4a210091  add x10, x10, #8
0x0628AA08: 4b815ff8  ldur x11, [x10, #-8]
0x0628AA0C: 7f0101eb  cmp x11, x1
0x0628AA10: 00010054  b.eq #0x628aa30
0x0628AA14: 290500f1  subs x9, x9, #1
0x0628AA18: 4a410091  add x10, x10, #0x10
0x0628AA1C: 61ffff54  b.ne #0x628aa08
0x0628AA20: e00314aa  mov x0, x20
0x0628AA24: e2031f2a  mov w2, wzr
0x0628AA28: 3a303b97  bl #0x3156b10
0x0628AA2C: 04000014  b #0x628aa3c
0x0628AA30: 490180b9  ldrsw x9, [x10]
0x0628AA34: 0811098b  add x8, x8, x9, lsl #4
0x0628AA38: 00e10491  add x0, x8, #0x138
0x0628AA3C: 080440a9  ldp x8, x1, [x0]
0x0628AA40: e00314aa  mov x0, x20
0x0628AA44: 00013fd6  blr x8
0x0628AA48: 610a40f9  ldr x1, [x19, #0x10]
0x0628AA4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0628AA50: e2031faa  mov x2, xzr
0x0628AA54: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0628AA58: 867fc917  b #0x54ea870
0x0628AA5C: 94d83b97  bl #0x3180cac

