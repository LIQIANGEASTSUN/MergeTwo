; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 601 .CombiningUtil.<>c__DisplayClass2_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6270194 | public void .ctor() { }
; bytes=8 sha256=a9163c0b39e039da0468e34217140e83212200f15d4b3d279d12f36733620703 status=arm64_complete_bound indexed_start=True
0x06270194: e1031faa  mov x1, xzr
0x06270198: 19a9d117  b #0x56da5fc

; RVA 0x62709C0 | internal bool <TryFindSuitableCombination>b__0(MergeItemWeakReference i) { }
; bytes=60 sha256=f20ee14eee630f973c217bf081d7f7e21903766ca62cc6451d4f2e2570a53406 status=arm64_complete_bound indexed_start=True
0x062709C0: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x062709C4: a10100b4  cbz x1, #0x62709f8
0x062709C8: 280040f9  ldr x8, [x1]
0x062709CC: f30300aa  mov x19, x0
0x062709D0: e00301aa  mov x0, x1
0x062709D4: 09a15ca9  ldp x9, x8, [x8, #0x1c8]
0x062709D8: e10308aa  mov x1, x8
0x062709DC: 20013fd6  blr x9
0x062709E0: 680a40f9  ldr x8, [x19, #0x10]
0x062709E4: a80000b4  cbz x8, #0x62709f8
0x062709E8: 011940f9  ldr x1, [x8, #0x30]
0x062709EC: e2031faa  mov x2, xzr
0x062709F0: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x062709F4: 9fe7c917  b #0x54ea870
0x062709F8: ad403c97  bl #0x3180cac

