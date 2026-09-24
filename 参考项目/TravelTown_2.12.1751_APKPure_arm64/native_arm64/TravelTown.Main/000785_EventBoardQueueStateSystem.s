; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 785 MergeEngine.ECS.Systems.State.Board.Event.EventBoardQueueStateSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x64EAD9C | protected override bool ShouldLoadStateForDomain() { }
; bytes=112 sha256=df84e75b57b26582504ff8d818f9d520c2fbca07328cb24b7c4babf79b015249 status=arm64_complete_bound indexed_start=True
0x064EAD9C: fe0f1ef8  str x30, [sp, #-0x20]!
0x064EADA0: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EADA4: f4c100b0  adrp x20, #0x7d27000
0x064EADA8: 883a4139  ldrb w8, [x20, #0x4e]
0x064EADAC: f30300aa  mov x19, x0
0x064EADB0: c8000037  tbnz w8, #0, #0x64eadc8
0x064EADB4: 808c0090  adrp x0, #0x767a000
0x064EADB8: 000443f9  ldr x0, [x0, #0x608]
0x064EADBC: 17573297  bl #0x3180a18
0x064EADC0: 28008052  movz w8, #0x1
0x064EADC4: 883a0139  strb w8, [x20, #0x4e]
0x064EADC8: 602a40f9  ldr x0, [x19, #0x50]
0x064EADCC: e00100b4  cbz x0, #0x64eae08
0x064EADD0: e1031faa  mov x1, xzr
0x064EADD4: fb5afa97  bl #0x63819c0
0x064EADD8: a00000b4  cbz x0, #0x64eadec
0x064EADDC: 001040f9  ldr x0, [x0, #0x20]
0x064EADE0: 600000b4  cbz x0, #0x64eadec
0x064EADE4: e1031faa  mov x1, xzr
0x064EADE8: 2320fa97  bl #0x6372e74
0x064EADEC: e1031faa  mov x1, xzr
0x064EADF0: 2f33c097  bl #0x54f7aac
0x064EADF4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EADF8: e803202a  mvn w8, w0
0x064EADFC: 00010012  and w0, w8, #1
0x064EAE00: fe0742f8  ldr x30, [sp], #0x20
0x064EAE04: c0035fd6  ret
0x064EAE08: a9573297  bl #0x3180cac

; RVA 0x64EAE0C | protected override void LoadState(EventBoardQueueBackendState boardQueueBackendState) { }
; bytes=212 sha256=ce4be114bfecdc891e647f423dd91098242e298aca5f54d460a3665c8c81288e status=arm64_complete_bound indexed_start=True
0x064EAE0C: fe0f1df8  str x30, [sp, #-0x30]!
0x064EAE10: f65701a9  stp x22, x21, [sp, #0x10]
0x064EAE14: f44f02a9  stp x20, x19, [sp, #0x20]
0x064EAE18: f5c100b0  adrp x21, #0x7d27000
0x064EAE1C: 969000b0  adrp x22, #0x76fb000
0x064EAE20: a83e4139  ldrb w8, [x21, #0x4f]
0x064EAE24: d64a45f9  ldr x22, [x22, #0xa90]
0x064EAE28: f30301aa  mov x19, x1
0x064EAE2C: f40300aa  mov x20, x0
0x064EAE30: 28010037  tbnz w8, #0, #0x64eae54
0x064EAE34: 809000b0  adrp x0, #0x76fb000
0x064EAE38: 004845f9  ldr x0, [x0, #0xa90]
0x064EAE3C: f7563297  bl #0x3180a18
0x064EAE40: 808f00d0  adrp x0, #0x76dc000
0x064EAE44: 003c46f9  ldr x0, [x0, #0xc78]
0x064EAE48: f4563297  bl #0x3180a18
0x064EAE4C: 28008052  movz w8, #0x1
0x064EAE50: a83e0139  strb w8, [x21, #0x4f]
0x064EAE54: c20240f9  ldr x2, [x22]
0x064EAE58: e00314aa  mov x0, x20
0x064EAE5C: e10313aa  mov x1, x19
0x064EAE60: c3be9c97  bl #0x4c1a96c
0x064EAE64: 943e40f9  ldr x20, [x20, #0x78]
0x064EAE68: b40300b4  cbz x20, #0x64eaedc
0x064EAE6C: 8a8f00d0  adrp x10, #0x76dc000
0x064EAE70: 880240f9  ldr x8, [x20]
0x064EAE74: 4a3d46f9  ldr x10, [x10, #0xc78]
0x064EAE78: 095d4279  ldrh w9, [x8, #0x12e]
0x064EAE7C: 410140f9  ldr x1, [x10]
0x064EAE80: 290100b4  cbz x9, #0x64eaea4
0x064EAE84: 0a5940f9  ldr x10, [x8, #0xb0]
0x064EAE88: 4a210091  add x10, x10, #8
0x064EAE8C: 4b815ff8  ldur x11, [x10, #-8]
0x064EAE90: 7f0101eb  cmp x11, x1
0x064EAE94: 00010054  b.eq #0x64eaeb4
0x064EAE98: 290500f1  subs x9, x9, #1
0x064EAE9C: 4a410091  add x10, x10, #0x10
0x064EAEA0: 61ffff54  b.ne #0x64eae8c
0x064EAEA4: e00314aa  mov x0, x20
0x064EAEA8: e2031f2a  mov w2, wzr
0x064EAEAC: 19af3197  bl #0x3156b10
0x064EAEB0: 04000014  b #0x64eaec0
0x064EAEB4: 490180b9  ldrsw x9, [x10]
0x064EAEB8: 0811098b  add x8, x8, x9, lsl #4
0x064EAEBC: 00e10491  add x0, x8, #0x138
0x064EAEC0: 030840a9  ldp x3, x2, [x0]
0x064EAEC4: e00314aa  mov x0, x20
0x064EAEC8: e10313aa  mov x1, x19
0x064EAECC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x064EAED0: f65741a9  ldp x22, x21, [sp, #0x10]
0x064EAED4: fe0743f8  ldr x30, [sp], #0x30
0x064EAED8: 60001fd6  br x3
0x064EAEDC: 74573297  bl #0x3180cac

; RVA 0x64EAEE0 | public void .ctor() { }
; bytes=72 sha256=29b5ab1d5ef7cc68c38f04dc4767d0a66f15804df23d24ddc3a10f3c24e2052f status=arm64_complete_bound indexed_start=True
0x064EAEE0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x064EAEE4: f44f01a9  stp x20, x19, [sp, #0x10]
0x064EAEE8: f4c100b0  adrp x20, #0x7d27000
0x064EAEEC: 959000b0  adrp x21, #0x76fb000
0x064EAEF0: 88424139  ldrb w8, [x20, #0x50]
0x064EAEF4: b54e45f9  ldr x21, [x21, #0xa98]
0x064EAEF8: f30300aa  mov x19, x0
0x064EAEFC: c8000037  tbnz w8, #0, #0x64eaf14
0x064EAF00: 809000b0  adrp x0, #0x76fb000
0x064EAF04: 004c45f9  ldr x0, [x0, #0xa98]
0x064EAF08: c4563297  bl #0x3180a18
0x064EAF0C: 28008052  movz w8, #0x1
0x064EAF10: 88420139  strb w8, [x20, #0x50]
0x064EAF14: a10240f9  ldr x1, [x21]
0x064EAF18: e00313aa  mov x0, x19
0x064EAF1C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x064EAF20: fe57c2a8  ldp x30, x21, [sp], #0x20
0x064EAF24: 36c09c17  b #0x4c1affc

