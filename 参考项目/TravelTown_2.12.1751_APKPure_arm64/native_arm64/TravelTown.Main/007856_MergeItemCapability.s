; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7856 Merger.Boosters.Declarations.Capabilities.MergeItemCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C9964 | private void set_SerializedSpawnBehaviour(string value) { }
; bytes=152 sha256=4f667e2056b4e2bdd823b1626dcda6c12134bc44e3e093a91e08b03ed656e685 status=arm64_complete_bound indexed_start=True
0x065C9964: fe0f1df8  str x30, [sp, #-0x30]!
0x065C9968: f65701a9  stp x22, x21, [sp, #0x10]
0x065C996C: f44f02a9  stp x20, x19, [sp, #0x20]
0x065C9970: f6ba00d0  adrp x22, #0x7d27000
0x065C9974: 358400d0  adrp x21, #0x764f000
0x065C9978: c8ea6539  ldrb w8, [x22, #0x97a]
0x065C997C: b5ae43f9  ldr x21, [x21, #0x758]
0x065C9980: f40301aa  mov x20, x1
0x065C9984: f30300aa  mov x19, x0
0x065C9988: 28010037  tbnz w8, #0, #0x65c99ac
0x065C998C: c08900d0  adrp x0, #0x7703000
0x065C9990: 00fc43f9  ldr x0, [x0, #0x7f8]
0x065C9994: 21dc2e97  bl #0x3180a18
0x065C9998: 208400d0  adrp x0, #0x764f000
0x065C999C: 00ac43f9  ldr x0, [x0, #0x758]
0x065C99A0: 1edc2e97  bl #0x3180a18
0x065C99A4: 28008052  movz w8, #0x1
0x065C99A8: c8ea2539  strb w8, [x22, #0x97a]
0x065C99AC: a00240f9  ldr x0, [x21]
0x065C99B0: ff0f00b9  str wzr, [sp, #0xc]
0x065C99B4: d58900d0  adrp x21, #0x7703000
0x065C99B8: 08e040b9  ldr w8, [x0, #0xe0]
0x065C99BC: b5fe43f9  ldr x21, [x21, #0x7f8]
0x065C99C0: 48000035  cbnz w8, #0x65c99c8
0x065C99C4: 72dc2e97  bl #0x3180b8c
0x065C99C8: a30240f9  ldr x3, [x21]
0x065C99CC: e2330091  add x2, sp, #0xc
0x065C99D0: 21008052  movz w1, #0x1
0x065C99D4: e00314aa  mov x0, x20
0x065C99D8: 3d655997  bl #0x3c22ecc
0x065C99DC: e80f40b9  ldr w8, [sp, #0xc]
0x065C99E0: 1f000072  tst w0, #1
0x065C99E4: f65741a9  ldp x22, x21, [sp, #0x10]
0x065C99E8: 08119f1a  csel w8, w8, wzr, ne
0x065C99EC: 682200b9  str w8, [x19, #0x20]
0x065C99F0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x065C99F4: fe0743f8  ldr x30, [sp], #0x30
0x065C99F8: c0035fd6  ret

; RVA 0x65C99FC | public void .ctor() { }
; bytes=8 sha256=4765ad9f74674907b30275f9f4cc04b7bb0a2cde680eb7caa25b877f96846067 status=arm64_complete_bound indexed_start=True
0x065C99FC: e1031faa  mov x1, xzr
0x065C9A00: f017e917  b #0x600f9c0

