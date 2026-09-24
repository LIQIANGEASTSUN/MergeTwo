; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25868 .BoardInteractionOperationDataCreator.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A8D120 | private static void .cctor() { }
; bytes=104 sha256=7fe02cb1e7b6414cfab7fa9ee25781a363b026d8147471753f16156377dfa9a6 status=arm64_complete_bound indexed_start=True
0x06A8D120: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A8D124: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A8D128: f39400b0  adrp x19, #0x7d2a000
0x06A8D12C: 34650090  adrp x20, #0x7731000
0x06A8D130: 680e5f39  ldrb w8, [x19, #0x7c3]
0x06A8D134: 946e47f9  ldr x20, [x20, #0xed8]
0x06A8D138: c8000037  tbnz w8, #0, #0x6a8d150
0x06A8D13C: 20650090  adrp x0, #0x7731000
0x06A8D140: 006c47f9  ldr x0, [x0, #0xed8]
0x06A8D144: 35ce1b97  bl #0x3180a18
0x06A8D148: 28008052  movz w8, #0x1
0x06A8D14C: 680e1f39  strb w8, [x19, #0x7c3]
0x06A8D150: 800240f9  ldr x0, [x20]
0x06A8D154: d3ce1b97  bl #0x3180ca0
0x06A8D158: e1031faa  mov x1, xzr
0x06A8D15C: f30300aa  mov x19, x0
0x06A8D160: 2735b197  bl #0x56da5fc
0x06A8D164: 880240f9  ldr x8, [x20]
0x06A8D168: e10313aa  mov x1, x19
0x06A8D16C: 085d40f9  ldr x8, [x8, #0xb8]
0x06A8D170: 130100f9  str x19, [x8]
0x06A8D174: 880240f9  ldr x8, [x20]
0x06A8D178: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A8D17C: 005d40f9  ldr x0, [x8, #0xb8]
0x06A8D180: fe0742f8  ldr x30, [sp], #0x20
0x06A8D184: 10ce1b17  b #0x31809c4

; RVA 0x6A8D188 | public void .ctor() { }
; bytes=8 sha256=dabaef6a78b3b0aed912fbc88869be247e8d3fe3f52e97956b1cd4a099b8c939 status=arm64_complete_bound indexed_start=True
0x06A8D188: e1031faa  mov x1, xzr
0x06A8D18C: 1c35b117  b #0x56da5fc

; RVA 0x6A8D190 | internal bool <CreateOperationData>b__2_0(ItemSpawnedResult item) { }
; bytes=32 sha256=958eb724bf10c9ba378da1d32b737fca6e770ba572b254628d5de20a40a4ee32 status=arm64_complete_bound indexed_start=True
0x06A8D190: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A8D194: c10000b4  cbz x1, #0x6a8d1ac
0x06A8D198: 282840b9  ldr w8, [x1, #0x28]
0x06A8D19C: 1f090071  cmp w8, #2
0x06A8D1A0: e0279f1a  cset w0, lo
0x06A8D1A4: fe0741f8  ldr x30, [sp], #0x10
0x06A8D1A8: c0035fd6  ret
0x06A8D1AC: c0ce1b97  bl #0x3180cac

