; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25758 Merger.MergeBoard.Systems.ItemUnlockingSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A70964 | public void Tick(TickContext context) { }
; bytes=36 sha256=0e402e103a20cfa96361ab1d456a2e8603cf716599f551b57856110d9b24d95c status=arm64_complete_bound indexed_start=True
0x06A70964: ffc300d1  sub sp, sp, #0x30
0x06A70968: fe1300f9  str x30, [sp, #0x20]
0x06A7096C: 210040ad  ldp q1, q0, [x1]
0x06A70970: e1030091  mov x1, sp
0x06A70974: e10300ad  stp q1, q0, [sp]
0x06A70978: 04000094  bl #0x6a70988
0x06A7097C: fe1340f9  ldr x30, [sp, #0x20]
0x06A70980: ffc30091  add sp, sp, #0x30
0x06A70984: c0035fd6  ret

; RVA 0x6A70988 | private void UnlockOnDemand(TickContext context) { }
; bytes=140 sha256=d91d5e7266da633762caab32b890cdf2760f69ddcd4339c23be325649249ebf2 status=arm64_complete_bound indexed_start=True
0x06A70988: ff8301d1  sub sp, sp, #0x60
0x06A7098C: fe2300f9  str x30, [sp, #0x40]
0x06A70990: f44f05a9  stp x20, x19, [sp, #0x50]
0x06A70994: d49500d0  adrp x20, #0x7d2a000
0x06A70998: 888e5b39  ldrb w8, [x20, #0x6e3]
0x06A7099C: f30301aa  mov x19, x1
0x06A709A0: c8000037  tbnz w8, #0, #0x6a709b8
0x06A709A4: 006600b0  adrp x0, #0x7731000
0x06A709A8: 00d840f9  ldr x0, [x0, #0x1b0]
0x06A709AC: 1b401c97  bl #0x3180a18
0x06A709B0: 28008052  movz w8, #0x1
0x06A709B4: 888e1b39  strb w8, [x20, #0x6e3]
0x06A709B8: ff2700f9  str xzr, [sp, #0x48]
0x06A709BC: 600640f9  ldr x0, [x19, #8]
0x06A709C0: 800200b4  cbz x0, #0x6a70a10
0x06A709C4: 086600b0  adrp x8, #0x7731000
0x06A709C8: 08d940f9  ldr x8, [x8, #0x1b0]
0x06A709CC: e1230191  add x1, sp, #0x48
0x06A709D0: 020140f9  ldr x2, [x8]
0x06A709D4: 93514d97  bl #0x3dc5020
0x06A709D8: 40010036  tbz w0, #0, #0x6a70a00
0x06A709DC: 600640ad  ldp q0, q1, [x19]
0x06A709E0: e82740f9  ldr x8, [sp, #0x48]
0x06A709E4: e00701ad  stp q0, q1, [sp, #0x20]
0x06A709E8: 480100b4  cbz x8, #0x6a70a10
0x06A709EC: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A709F0: 020940f9  ldr x2, [x8, #0x10]
0x06A709F4: e1030091  mov x1, sp
0x06A709F8: e00700ad  stp q0, q1, [sp]
0x06A709FC: 06000094  bl #0x6a70a14
0x06A70A00: f44f45a9  ldp x20, x19, [sp, #0x50]
0x06A70A04: fe2340f9  ldr x30, [sp, #0x40]
0x06A70A08: ff830191  add sp, sp, #0x60
0x06A70A0C: c0035fd6  ret
0x06A70A10: a7401c97  bl #0x3180cac

; RVA 0x6A70A14 | private void UnlockEntities(TickContext context, List<Entity> entities) { }
; bytes=652 sha256=4248ebba090efc3dfe74031174e29d4a23521a4613521e9ab1f232d2918e728b status=arm64_complete_bound indexed_start=True
0x06A70A14: ffc302d1  sub sp, sp, #0xb0
0x06A70A18: fd7b05a9  stp x29, x30, [sp, #0x50]
0x06A70A1C: fc6f06a9  stp x28, x27, [sp, #0x60]
0x06A70A20: fa6707a9  stp x26, x25, [sp, #0x70]
0x06A70A24: f85f08a9  stp x24, x23, [sp, #0x80]
0x06A70A28: f65709a9  stp x22, x21, [sp, #0x90]
0x06A70A2C: f44f0aa9  stp x20, x19, [sp, #0xa0]
0x06A70A30: d59500d0  adrp x21, #0x7d2a000
0x06A70A34: a8925b39  ldrb w8, [x21, #0x6e4]
0x06A70A38: f40302aa  mov x20, x2
0x06A70A3C: f30301aa  mov x19, x1
0x06A70A40: c8030037  tbnz w8, #0, #0x6a70ab8
0x06A70A44: 006600b0  adrp x0, #0x7731000
0x06A70A48: 002441f9  ldr x0, [x0, #0x248]
0x06A70A4C: f33f1c97  bl #0x3180a18
0x06A70A50: 406000d0  adrp x0, #0x767a000
0x06A70A54: 004842f9  ldr x0, [x0, #0x490]
0x06A70A58: f03f1c97  bl #0x3180a18
0x06A70A5C: 406000d0  adrp x0, #0x767a000
0x06A70A60: 009442f9  ldr x0, [x0, #0x528]
0x06A70A64: ed3f1c97  bl #0x3180a18
0x06A70A68: 80620090  adrp x0, #0x76c0000
0x06A70A6C: 00a847f9  ldr x0, [x0, #0xf50]
0x06A70A70: ea3f1c97  bl #0x3180a18
0x06A70A74: 80620090  adrp x0, #0x76c0000
0x06A70A78: 00ac47f9  ldr x0, [x0, #0xf58]
0x06A70A7C: e73f1c97  bl #0x3180a18
0x06A70A80: 80620090  adrp x0, #0x76c0000
0x06A70A84: 00b047f9  ldr x0, [x0, #0xf60]
0x06A70A88: e43f1c97  bl #0x3180a18
0x06A70A8C: 006600b0  adrp x0, #0x7731000
0x06A70A90: 002841f9  ldr x0, [x0, #0x250]
0x06A70A94: e13f1c97  bl #0x3180a18
0x06A70A98: 80620090  adrp x0, #0x76c0000
0x06A70A9C: 00b447f9  ldr x0, [x0, #0xf68]
0x06A70AA0: de3f1c97  bl #0x3180a18
0x06A70AA4: 006600b0  adrp x0, #0x7731000
0x06A70AA8: 002c41f9  ldr x0, [x0, #0x258]
0x06A70AAC: db3f1c97  bl #0x3180a18
0x06A70AB0: 28008052  movz w8, #0x1
0x06A70AB4: a8921b39  strb w8, [x21, #0x6e4]
0x06A70AB8: ff7f03a9  stp xzr, xzr, [sp, #0x30]
0x06A70ABC: ff2300f9  str xzr, [sp, #0x40]
0x06A70AC0: ffa30039  strb wzr, [sp, #0x28]
0x06A70AC4: ff2300b9  str wzr, [sp, #0x20]
0x06A70AC8: 740a00b4  cbz x20, #0x6a70c14
0x06A70ACC: 88620090  adrp x8, #0x76c0000
0x06A70AD0: 08b547f9  ldr x8, [x8, #0xf68]
0x06A70AD4: 98620090  adrp x24, #0x76c0000
0x06A70AD8: 596000d0  adrp x25, #0x767a000
0x06A70ADC: 5a6000d0  adrp x26, #0x767a000
0x06A70AE0: 1b6600b0  adrp x27, #0x7731000
0x06A70AE4: 18af47f9  ldr x24, [x24, #0xf58]
0x06A70AE8: 399742f9  ldr x25, [x25, #0x528]
0x06A70AEC: 5a4b42f9  ldr x26, [x26, #0x490]
0x06A70AF0: 7b2741f9  ldr x27, [x27, #0x248]
0x06A70AF4: 010140f9  ldr x1, [x8]
0x06A70AF8: 1c6600b0  adrp x28, #0x7731000
0x06A70AFC: 1d6600b0  adrp x29, #0x7731000
0x06A70B00: 97620090  adrp x23, #0x76c0000
0x06A70B04: 9c2b41f9  ldr x28, [x28, #0x250]
0x06A70B08: bd2f41f9  ldr x29, [x29, #0x258]
0x06A70B0C: f7aa47f9  ldr x23, [x23, #0xf50]
0x06A70B10: e8230091  add x8, sp, #8
0x06A70B14: e00314aa  mov x0, x20
0x06A70B18: 54515797  bl #0x4045068
0x06A70B1C: e083c03c  ldur q0, [sp, #8]
0x06A70B20: e80f40f9  ldr x8, [sp, #0x18]
0x06A70B24: e00f803d  str q0, [sp, #0x30]
0x06A70B28: e82300f9  str x8, [sp, #0x40]
0x06A70B2C: 010340f9  ldr x1, [x24]
0x06A70B30: e0c30091  add x0, sp, #0x30
0x06A70B34: a0939697  bl #0x50159b4
0x06A70B38: 20050036  tbz w0, #0, #0x6a70bdc
0x06A70B3C: f42340f9  ldr x20, [sp, #0x40]
0x06A70B40: 540600b4  cbz x20, #0x6a70c08
0x06A70B44: 220340f9  ldr x2, [x25]
0x06A70B48: e1a30091  add x1, sp, #0x28
0x06A70B4C: e00314aa  mov x0, x20
0x06A70B50: 48ba4697  bl #0x3c1f470
0x06A70B54: e8a34039  ldrb w8, [sp, #0x28]
0x06A70B58: 1f010071  cmp w8, #0
0x06A70B5C: e8079f1a  cset w8, ne
0x06A70B60: 0800080a  and w8, w0, w8
0x06A70B64: 48fe0736  tbz w8, #0, #0x6a70b2c
0x06A70B68: 420340f9  ldr x2, [x26]
0x06A70B6C: e1830091  add x1, sp, #0x20
0x06A70B70: e00314aa  mov x0, x20
0x06A70B74: dcb54697  bl #0x3c1e2e4
0x06A70B78: a0fd0736  tbz w0, #0, #0x6a70b2c
0x06A70B7C: 620340f9  ldr x2, [x27]
0x06A70B80: ffa30039  strb wzr, [sp, #0x28]
0x06A70B84: e00314aa  mov x0, x20
0x06A70B88: e1031faa  mov x1, xzr
0x06A70B8C: 7fb24697  bl #0x3c1d588
0x06A70B90: 750a40f9  ldr x21, [x19, #0x10]
0x06A70B94: 800340f9  ldr x0, [x28]
0x06A70B98: 42401c97  bl #0x3180ca0
0x06A70B9C: f60300aa  mov x22, x0
0x06A70BA0: e1031faa  mov x1, xzr
0x06A70BA4: 25a80094  bl #0x6a9ac38
0x06A70BA8: 360300b4  cbz x22, #0x6a70c0c
0x06A70BAC: e00316aa  mov x0, x22
0x06A70BB0: 140c01f8  str x20, [x0, #0x10]!
0x06A70BB4: e10314aa  mov x1, x20
0x06A70BB8: 833f1c97  bl #0x31809c4
0x06A70BBC: e82340b9  ldr w8, [sp, #0x20]
0x06A70BC0: c81a00b9  str w8, [x22, #0x18]
0x06A70BC4: 750200b4  cbz x21, #0x6a70c10
0x06A70BC8: a20340f9  ldr x2, [x29]
0x06A70BCC: e00315aa  mov x0, x21
0x06A70BD0: e10316aa  mov x1, x22
0x06A70BD4: 044a4d97  bl #0x3dc33e4
0x06A70BD8: d5ffff17  b #0x6a70b2c
0x06A70BDC: e10240f9  ldr x1, [x23]
0x06A70BE0: e0c30091  add x0, sp, #0x30
0x06A70BE4: 73939697  bl #0x50159b0
0x06A70BE8: f44f4aa9  ldp x20, x19, [sp, #0xa0]
0x06A70BEC: f65749a9  ldp x22, x21, [sp, #0x90]
0x06A70BF0: f85f48a9  ldp x24, x23, [sp, #0x80]
0x06A70BF4: fa6747a9  ldp x26, x25, [sp, #0x70]
0x06A70BF8: fc6f46a9  ldp x28, x27, [sp, #0x60]
0x06A70BFC: fd7b45a9  ldp x29, x30, [sp, #0x50]
0x06A70C00: ffc30291  add sp, sp, #0xb0
0x06A70C04: c0035fd6  ret
0x06A70C08: 29401c97  bl #0x3180cac
0x06A70C0C: 28401c97  bl #0x3180cac
0x06A70C10: 27401c97  bl #0x3180cac
0x06A70C14: 26401c97  bl #0x3180cac
0x06A70C18: 09000014  b #0x6a70c3c
0x06A70C1C: 08000014  b #0x6a70c3c
0x06A70C20: 07000014  b #0x6a70c3c
0x06A70C24: 06000014  b #0x6a70c3c
0x06A70C28: 05000014  b #0x6a70c3c
0x06A70C2C: 04000014  b #0x6a70c3c
0x06A70C30: 03000014  b #0x6a70c3c
0x06A70C34: 02000014  b #0x6a70c3c
0x06A70C38: 01000014  b #0x6a70c3c
0x06A70C3C: f30300aa  mov x19, x0
0x06A70C40: 3f040071  cmp w1, #1
0x06A70C44: 61010054  b.ne #0x6a70c70
0x06A70C48: e00313aa  mov x0, x19
0x06A70C4C: 31771d94  bl #0x71ce910
0x06A70C50: 140040f9  ldr x20, [x0]
0x06A70C54: 33771d94  bl #0x71ce920
0x06A70C58: e10240f9  ldr x1, [x23]
0x06A70C5C: e0c30091  add x0, sp, #0x30
0x06A70C60: 54939697  bl #0x50159b0
0x06A70C64: 34fcffb4  cbz x20, #0x6a70be8
0x06A70C68: e00314aa  mov x0, x20
0x06A70C6C: 0e401c97  bl #0x3180ca4
0x06A70C70: f4031faa  mov x20, xzr
0x06A70C74: 02000014  b #0x6a70c7c
0x06A70C78: f30300aa  mov x19, x0
0x06A70C7C: e10240f9  ldr x1, [x23]
0x06A70C80: e0c30091  add x0, sp, #0x30
0x06A70C84: 4b939697  bl #0x50159b0
0x06A70C88: 740000b5  cbnz x20, #0x6a70c94
0x06A70C8C: e00313aa  mov x0, x19
0x06A70C90: 32d31f97  bl #0x3265958
0x06A70C94: e00314aa  mov x0, x20
0x06A70C98: 03401c97  bl #0x3180ca4
0x06A70C9C: 1e620e97  bl #0x2e09514

; RVA 0x6A70CA0 | public void .ctor() { }
; bytes=8 sha256=7c2df79a8e38e568460c3602b6b072cb3930ad9a22162f45c009e856d4d98ade status=arm64_complete_bound indexed_start=True
0x06A70CA0: e1031faa  mov x1, xzr
0x06A70CA4: 56a6b117  b #0x56da5fc

