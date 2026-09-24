; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 891 .BoardIdleHintSystem.<>c__DisplayClass52_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x665A738 | public void .ctor() { }
; bytes=8 sha256=a797e45c58f565903096883b1eb02dfe8752439f1cfc9e476ef2b07d690a8e3b status=arm64_complete_bound indexed_start=True
0x0665A738: e1031faa  mov x1, xzr
0x0665A73C: b0ffc117  b #0x56da5fc

; RVA 0x665B3E4 | internal void <TryShowProducerHint>b__0() { }
; bytes=32 sha256=c2a2ace82e6e06ba563d4b93d5bc479e063eb0674f962da519f09bedcb8a282c status=arm64_complete_bound indexed_start=True
0x0665B3E4: fe0f1ff8  str x30, [sp, #-0x10]!
0x0665B3E8: 080840f9  ldr x8, [x0, #0x10]
0x0665B3EC: a80000b4  cbz x8, #0x665b400
0x0665B3F0: 010c40f9  ldr x1, [x0, #0x18]
0x0665B3F4: e00308aa  mov x0, x8
0x0665B3F8: fe0741f8  ldr x30, [sp], #0x10
0x0665B3FC: 83feff17  b #0x665ae08
0x0665B400: 2b962c97  bl #0x3180cac

