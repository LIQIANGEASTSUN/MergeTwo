; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33620 .ProducerExcitementService.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD885C | private static void .cctor() { }
; bytes=104 sha256=2ab1103bd902536ef428ae42ffadf3b34802eb5e1a19560189b56dfa9fde6477 status=arm64_complete_bound indexed_start=True
0x06AD885C: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD8860: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD8864: 939200d0  adrp x19, #0x7d2a000
0x06AD8868: f4620090  adrp x20, #0x7734000
0x06AD886C: 68926b39  ldrb w8, [x19, #0xae4]
0x06AD8870: 942e42f9  ldr x20, [x20, #0x458]
0x06AD8874: c8000037  tbnz w8, #0, #0x6ad888c
0x06AD8878: e0620090  adrp x0, #0x7734000
0x06AD887C: 002c42f9  ldr x0, [x0, #0x458]
0x06AD8880: 66a01a97  bl #0x3180a18
0x06AD8884: 28008052  movz w8, #0x1
0x06AD8888: 68922b39  strb w8, [x19, #0xae4]
0x06AD888C: 800240f9  ldr x0, [x20]
0x06AD8890: 04a11a97  bl #0x3180ca0
0x06AD8894: e1031faa  mov x1, xzr
0x06AD8898: f30300aa  mov x19, x0
0x06AD889C: 5807b097  bl #0x56da5fc
0x06AD88A0: 880240f9  ldr x8, [x20]
0x06AD88A4: e10313aa  mov x1, x19
0x06AD88A8: 085d40f9  ldr x8, [x8, #0xb8]
0x06AD88AC: 130100f9  str x19, [x8]
0x06AD88B0: 880240f9  ldr x8, [x20]
0x06AD88B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD88B8: 005d40f9  ldr x0, [x8, #0xb8]
0x06AD88BC: fe0742f8  ldr x30, [sp], #0x20
0x06AD88C0: 41a01a17  b #0x31809c4

; RVA 0x6AD88C4 | public void .ctor() { }
; bytes=8 sha256=2e005a24d25179a95ea9964eea1efdcc1cdd906fe864b9e8eea89e2c3f89a430 status=arm64_complete_bound indexed_start=True
0x06AD88C4: e1031faa  mov x1, xzr
0x06AD88C8: 4d07b017  b #0x56da5fc

; RVA 0x6AD88CC | internal string <ConsumeExcitementForProducer>b__27_0(OrderProgress order) { }
; bytes=180 sha256=2e84e3e9f420edd879035748ebe7e5d4130eca86959fccdd79a0aad43c85a727 status=arm64_complete_bound indexed_start=True
0x06AD88CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06AD88D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06AD88D4: 949200d0  adrp x20, #0x7d2a000
0x06AD88D8: 88966b39  ldrb w8, [x20, #0xae5]
0x06AD88DC: f30301aa  mov x19, x1
0x06AD88E0: c8000037  tbnz w8, #0, #0x6ad88f8
0x06AD88E4: 005d00d0  adrp x0, #0x767a000
0x06AD88E8: 00b045f9  ldr x0, [x0, #0xb60]
0x06AD88EC: 4ba01a97  bl #0x3180a18
0x06AD88F0: 28008052  movz w8, #0x1
0x06AD88F4: 88962b39  strb w8, [x20, #0xae5]
0x06AD88F8: 330400b4  cbz x19, #0x6ad897c
0x06AD88FC: 680240f9  ldr x8, [x19]
0x06AD8900: e00313aa  mov x0, x19
0x06AD8904: 09855ba9  ldp x9, x1, [x8, #0x1b8]
0x06AD8908: 20013fd6  blr x9
0x06AD890C: 800300b4  cbz x0, #0x6ad897c
0x06AD8910: 0a5d00d0  adrp x10, #0x767a000
0x06AD8914: 080040f9  ldr x8, [x0]
0x06AD8918: 4ab145f9  ldr x10, [x10, #0xb60]
0x06AD891C: f30300aa  mov x19, x0
0x06AD8920: 095d4279  ldrh w9, [x8, #0x12e]
0x06AD8924: 410140f9  ldr x1, [x10]
0x06AD8928: 290100b4  cbz x9, #0x6ad894c
0x06AD892C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06AD8930: 4a210091  add x10, x10, #8
0x06AD8934: 4b815ff8  ldur x11, [x10, #-8]
0x06AD8938: 7f0101eb  cmp x11, x1
0x06AD893C: 00010054  b.eq #0x6ad895c
0x06AD8940: 290500f1  subs x9, x9, #1
0x06AD8944: 4a410091  add x10, x10, #0x10
0x06AD8948: 61ffff54  b.ne #0x6ad8934
0x06AD894C: e00313aa  mov x0, x19
0x06AD8950: e2031f2a  mov w2, wzr
0x06AD8954: 6ff81997  bl #0x3156b10
0x06AD8958: 04000014  b #0x6ad8968
0x06AD895C: 490180b9  ldrsw x9, [x10]
0x06AD8960: 0811098b  add x8, x8, x9, lsl #4
0x06AD8964: 00e10491  add x0, x8, #0x138
0x06AD8968: 020440a9  ldp x2, x1, [x0]
0x06AD896C: e00313aa  mov x0, x19
0x06AD8970: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06AD8974: fe0742f8  ldr x30, [sp], #0x20
0x06AD8978: 40001fd6  br x2
0x06AD897C: cca01a97  bl #0x3180cac

; RVA 0x6AD8980 | internal void <RegisterCycleEndTimer>b__33_1(Exception _) { }
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x06AD8980: c0035fd6  ret

