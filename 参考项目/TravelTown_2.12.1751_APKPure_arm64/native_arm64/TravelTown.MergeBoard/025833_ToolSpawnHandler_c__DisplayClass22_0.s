; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25833 .ToolSpawnHandler.<>c__DisplayClass22_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A84DBC | public void .ctor() { }
; bytes=8 sha256=5e879d31aa7b605e6deea6e2e923d70ac76f213339de7f6469aa37e582db95c1 status=arm64_complete_bound indexed_start=True
0x06A84DBC: e1031faa  mov x1, xzr
0x06A84DC0: 0f56b117  b #0x56da5fc

; RVA 0x6A84DC4 | internal bool <FilterToolLevelsByProgressionOnBoard>b__0(WeightedToolLevel weightedTool) { }
; bytes=76 sha256=f6ab7dd8533ea4df636027a5208deac65cd878ba0cb2755102d329417a77d817 status=arm64_complete_bound indexed_start=True
0x06A84DC4: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06A84DC8: f30300aa  mov x19, x0
0x06A84DCC: 000840f9  ldr x0, [x0, #0x10]
0x06A84DD0: e00100b4  cbz x0, #0x6a84e0c
0x06A84DD4: 21fc60d3  lsr x1, x1, #0x20
0x06A84DD8: e2031faa  mov x2, xzr
0x06A84DDC: 58fdff97  bl #0x6a8433c
0x06A84DE0: 680e40f9  ldr x8, [x19, #0x18]
0x06A84DE4: 480100b4  cbz x8, #0x6a84e0c
0x06A84DE8: 08254229  ldp w8, w9, [x8, #0x10]
0x06A84DEC: 0a0dc91a  sdiv w10, w8, w9
0x06A84DF0: e803084b  neg w8, w8
0x06A84DF4: 4821091b  madd w8, w10, w9, w8
0x06A84DF8: 2801080b  add w8, w9, w8
0x06A84DFC: 1f00086b  cmp w0, w8
0x06A84E00: e0c79f1a  cset w0, le
0x06A84E04: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x06A84E08: c0035fd6  ret
0x06A84E0C: a8ef1b97  bl #0x3180cac

