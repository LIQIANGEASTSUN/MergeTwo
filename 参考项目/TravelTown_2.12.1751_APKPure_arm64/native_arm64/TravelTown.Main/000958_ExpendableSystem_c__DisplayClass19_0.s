; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 958 .ExpendableSystem.<>c__DisplayClass19_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678E360 | public void .ctor() { }
; bytes=8 sha256=8330b57e346b35ea4b17c2973560a9bc1caa93544a22780d947f33fea17a8c10 status=arm64_complete_bound indexed_start=True
0x0678E360: e1031faa  mov x1, xzr
0x0678E364: a630bd17  b #0x56da5fc

; RVA 0x6790468 | internal BoardItemPosition <TrySpawnItems>b__0() { }
; bytes=52 sha256=6e4fd41b68d530263a71f5ea13a84ab8057cbc3db7b1018280a4c6b21dfe34f2 status=arm64_complete_bound indexed_start=True
0x06790468: fe0f1ff8  str x30, [sp, #-0x10]!
0x0679046C: 090840f9  ldr x9, [x0, #0x10]
0x06790470: 490100b4  cbz x9, #0x6790498
0x06790474: 080c40f9  ldr x8, [x0, #0x18]
0x06790478: 080100b4  cbz x8, #0x6790498
0x0679047C: 202d40f9  ldr x0, [x9, #0x58]
0x06790480: c00000b4  cbz x0, #0x6790498
0x06790484: 011940f9  ldr x1, [x8, #0x30]
0x06790488: e2031faa  mov x2, xzr
0x0679048C: e3031faa  mov x3, xzr
0x06790490: fe0741f8  ldr x30, [sp], #0x10
0x06790494: f665fb17  b #0x6669c6c
0x06790498: 05c22797  bl #0x3180cac

