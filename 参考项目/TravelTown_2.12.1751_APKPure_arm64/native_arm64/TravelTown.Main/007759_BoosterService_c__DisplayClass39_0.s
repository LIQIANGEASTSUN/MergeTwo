; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7759 .BoosterService.<>c__DisplayClass39_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65C2A30 | public void .ctor() { }
; bytes=8 sha256=45b27118b67da9c5474383f178703e7509fffbbcddd3ccde7c2cf7fdfc9f38df status=arm64_complete_bound indexed_start=True
0x065C2A30: e1031faa  mov x1, xzr
0x065C2A34: f25ec417  b #0x56da5fc

; RVA 0x65C4B68 | internal bool <UpdateRemoteBoosterFromResponse>b__0(RemoteBoosterData b) { }
; bytes=40 sha256=1fb2f02e7c58bb9e7932bf5349480f2a4cac9ea95fd0e4cafb4f6cf5477b724c status=arm64_complete_bound indexed_start=True
0x065C4B68: fe0f1ff8  str x30, [sp, #-0x10]!
0x065C4B6C: 010100b4  cbz x1, #0x65c4b8c
0x065C4B70: 080840f9  ldr x8, [x0, #0x10]
0x065C4B74: c80000b4  cbz x8, #0x65c4b8c
0x065C4B78: 201840f9  ldr x0, [x1, #0x30]
0x065C4B7C: 011940f9  ldr x1, [x8, #0x30]
0x065C4B80: e2031faa  mov x2, xzr
0x065C4B84: fe0741f8  ldr x30, [sp], #0x10
0x065C4B88: 3a97bc17  b #0x54ea870
0x065C4B8C: 48f02e97  bl #0x3180cac

; RVA 0x65C4B90 | internal bool <UpdateRemoteBoosterFromResponse>b__1(BoosterIdComponent component) { }
; bytes=104 sha256=579d8bdbd16a18af77d3f97efc5062dc107d7b94e3a24c3e729e41a685a6e351 status=arm64_complete_bound indexed_start=True
0x065C4B90: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065C4B94: f44f01a9  stp x20, x19, [sp, #0x10]
0x065C4B98: 15bb00f0  adrp x21, #0x7d27000
0x065C4B9C: a8f66439  ldrb w8, [x21, #0x93d]
0x065C4BA0: f40301aa  mov x20, x1
0x065C4BA4: f30300aa  mov x19, x0
0x065C4BA8: c8000037  tbnz w8, #0, #0x65c4bc0
0x065C4BAC: c08500f0  adrp x0, #0x767f000
0x065C4BB0: 00e843f9  ldr x0, [x0, #0x7d0]
0x065C4BB4: 99ef2e97  bl #0x3180a18
0x065C4BB8: 28008052  movz w8, #0x1
0x065C4BBC: a8f62439  strb w8, [x21, #0x93d]
0x065C4BC0: b40100b4  cbz x20, #0x65c4bf4
0x065C4BC4: c88500f0  adrp x8, #0x767f000
0x065C4BC8: 08e943f9  ldr x8, [x8, #0x7d0]
0x065C4BCC: e00314aa  mov x0, x20
0x065C4BD0: 010140f9  ldr x1, [x8]
0x065C4BD4: 649d9897  bl #0x4bec164
0x065C4BD8: 680a40f9  ldr x8, [x19, #0x10]
0x065C4BDC: c80000b4  cbz x8, #0x65c4bf4
0x065C4BE0: 011940f9  ldr x1, [x8, #0x30]
0x065C4BE4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065C4BE8: e2031faa  mov x2, xzr
0x065C4BEC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065C4BF0: 2097bc17  b #0x54ea870
0x065C4BF4: 2ef02e97  bl #0x3180cac

