; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 95 .ItemSpawningQueue.<>c__DisplayClass16_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FEAD2C | public void .ctor() { }
; bytes=8 sha256=a3d23f737041e85e159394957ffb427b4ee21c5fb592d1a07e6502788e0f2d65 status=arm64_complete_bound indexed_start=True
0x05FEAD2C: e1031faa  mov x1, xzr
0x05FEAD30: 33bedb17  b #0x56da5fc

; RVA 0x5FEAD34 | internal bool <AddCombinationWeightedItems>b__6(WeightedItem produced) { }
; bytes=88 sha256=af619a8c49c7b5ead561792700a8ffff9ba92e63c81440ba1e1c36232c171afa status=arm64_complete_bound indexed_start=True
0x05FEAD34: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x05FEAD38: 810200b4  cbz x1, #0x5fead88
0x05FEAD3C: f30300aa  mov x19, x0
0x05FEAD40: 200c40f9  ldr x0, [x1, #0x18]
0x05FEAD44: 200200b4  cbz x0, #0x5fead88
0x05FEAD48: 080040f9  ldr x8, [x0]
0x05FEAD4C: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x05FEAD50: 20013fd6  blr x9
0x05FEAD54: 680a40f9  ldr x8, [x19, #0x10]
0x05FEAD58: 880100b4  cbz x8, #0x5fead88
0x05FEAD5C: f30300aa  mov x19, x0
0x05FEAD60: 000940f9  ldr x0, [x8, #0x10]
0x05FEAD64: 200100b4  cbz x0, #0x5fead88
0x05FEAD68: 080040f9  ldr x8, [x0]
0x05FEAD6C: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x05FEAD70: 20013fd6  blr x9
0x05FEAD74: e10300aa  mov x1, x0
0x05FEAD78: e00313aa  mov x0, x19
0x05FEAD7C: e2031faa  mov x2, xzr
0x05FEAD80: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x05FEAD84: bbfed317  b #0x54ea870
0x05FEAD88: c9574697  bl #0x3180cac

