; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11061 Framework.Core.Services.Backend.Data.ClientMessageNotification
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x69309A0 | public string GenerateUuid() { }
; bytes=120 sha256=452a1bbe5f536140affebb6a04555fa291c08fa8c5b4484847fc9ef68afdefb2 status=arm64_complete_bound indexed_start=True
0x069309A0: ffc300d1  sub sp, sp, #0x30
0x069309A4: fe5701a9  stp x30, x21, [sp, #0x10]
0x069309A8: f44f02a9  stp x20, x19, [sp, #0x20]
0x069309AC: d59f00b0  adrp x21, #0x7d29000
0x069309B0: 146f00b0  adrp x20, #0x7711000
0x069309B4: a86a6c39  ldrb w8, [x21, #0xb1a]
0x069309B8: 94de46f9  ldr x20, [x20, #0xdb8]
0x069309BC: f30300aa  mov x19, x0
0x069309C0: c8000037  tbnz w8, #0, #0x69309d8
0x069309C4: 006f00b0  adrp x0, #0x7711000
0x069309C8: 00dc46f9  ldr x0, [x0, #0xdb8]
0x069309CC: 13402197  bl #0x3180a18
0x069309D0: 28008052  movz w8, #0x1
0x069309D4: a86a2c39  strb w8, [x21, #0xb1a]
0x069309D8: e0031faa  mov x0, xzr
0x069309DC: 3376b597  bl #0x568e2a8
0x069309E0: e00700a9  stp x0, x1, [sp]
0x069309E4: e0030091  mov x0, sp
0x069309E8: e1031faa  mov x1, xzr
0x069309EC: 947eb597  bl #0x569043c
0x069309F0: 810240f9  ldr x1, [x20]
0x069309F4: f40300aa  mov x20, x0
0x069309F8: e00313aa  mov x0, x19
0x069309FC: e20314aa  mov x2, x20
0x06930A00: 06000094  bl #0x6930a18
0x06930A04: e00314aa  mov x0, x20
0x06930A08: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06930A0C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06930A10: ffc30091  add sp, sp, #0x30
0x06930A14: c0035fd6  ret

; RVA 0x6930AD4 | public ClientMessageNotification Clone() { }
; bytes=284 sha256=aeb2b04618ae860d569044f2eb80f4b4a1e31001cc2061f014e2ec565a7365bb status=arm64_complete_bound indexed_start=True
0x06930AD4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06930AD8: f65701a9  stp x22, x21, [sp, #0x10]
0x06930ADC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06930AE0: d49f00b0  adrp x20, #0x7d29000
0x06930AE4: 886e6c39  ldrb w8, [x20, #0xb1b]
0x06930AE8: f30300aa  mov x19, x0
0x06930AEC: e8010037  tbnz w8, #0, #0x6930b28
0x06930AF0: e06c00d0  adrp x0, #0x76ce000
0x06930AF4: 00c442f9  ldr x0, [x0, #0x588]
0x06930AF8: c83f2197  bl #0x3180a18
0x06930AFC: 406a0090  adrp x0, #0x7678000
0x06930B00: 004445f9  ldr x0, [x0, #0xa88]
0x06930B04: c53f2197  bl #0x3180a18
0x06930B08: 406900d0  adrp x0, #0x765a000
0x06930B0C: 00ac44f9  ldr x0, [x0, #0x958]
0x06930B10: c23f2197  bl #0x3180a18
0x06930B14: 00690090  adrp x0, #0x7650000
0x06930B18: 001c44f9  ldr x0, [x0, #0x838]
0x06930B1C: bf3f2197  bl #0x3180a18
0x06930B20: 28008052  movz w8, #0x1
0x06930B24: 886e2c39  strb w8, [x20, #0xb1b]
0x06930B28: e00313aa  mov x0, x19
0x06930B2C: e1031faa  mov x1, xzr
0x06930B30: c9c7b697  bl #0x56e2a54
0x06930B34: c00500b4  cbz x0, #0x6930bec
0x06930B38: e96c00d0  adrp x9, #0x76ce000
0x06930B3C: 29c542f9  ldr x9, [x9, #0x588]
0x06930B40: 080040f9  ldr x8, [x0]
0x06930B44: f30300aa  mov x19, x0
0x06930B48: 210140f9  ldr x1, [x9]
0x06930B4C: 0ac14439  ldrb w10, [x8, #0x130]
0x06930B50: 29c04439  ldrb w9, [x1, #0x130]
0x06930B54: 5f01096b  cmp w10, w9
0x06930B58: 63040054  b.lo #0x6930be4
0x06930B5C: 086540f9  ldr x8, [x8, #0xc8]
0x06930B60: 080d098b  add x8, x8, x9, lsl #3
0x06930B64: 08815ff8  ldur x8, [x8, #-8]
0x06930B68: 1f0101eb  cmp x8, x1
0x06930B6C: c1030054  b.ne #0x6930be4
0x06930B70: f40313aa  mov x20, x19
0x06930B74: 17690090  adrp x23, #0x7650000
0x06930B78: 566a0090  adrp x22, #0x7678000
0x06930B7C: 958e42f8  ldr x21, [x20, #0x28]!
0x06930B80: f71e44f9  ldr x23, [x23, #0x838]
0x06930B84: d64645f9  ldr x22, [x22, #0xa88]
0x06930B88: 150100b5  cbnz x21, #0x6930ba8
0x06930B8C: e00240f9  ldr x0, [x23]
0x06930B90: 44402197  bl #0x3180ca0
0x06930B94: 486900d0  adrp x8, #0x765a000
0x06930B98: 08ad44f9  ldr x8, [x8, #0x958]
0x06930B9C: f50300aa  mov x21, x0
0x06930BA0: 010140f9  ldr x1, [x8]
0x06930BA4: 00c59697  bl #0x4ee1fa4
0x06930BA8: e00240f9  ldr x0, [x23]
0x06930BAC: 3d402197  bl #0x3180ca0
0x06930BB0: c20240f9  ldr x2, [x22]
0x06930BB4: e10315aa  mov x1, x21
0x06930BB8: f60300aa  mov x22, x0
0x06930BBC: 32c59697  bl #0x4ee2084
0x06930BC0: e00314aa  mov x0, x20
0x06930BC4: e10316aa  mov x1, x22
0x06930BC8: 761600f9  str x22, [x19, #0x28]
0x06930BCC: 7e3f2197  bl #0x31809c4
0x06930BD0: e00313aa  mov x0, x19
0x06930BD4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06930BD8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06930BDC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06930BE0: c0035fd6  ret
0x06930BE4: e00313aa  mov x0, x19
0x06930BE8: 18412197  bl #0x3181048
0x06930BEC: 30402197  bl #0x3180cac

; RVA 0x6930A18 | public void AddMetaData(string key, string value) { }
; bytes=188 sha256=d57c59bc7cf5d52f75656c0172ce822c59b28f523e3d5d358850b7cc3a3c9304 status=arm64_complete_bound indexed_start=True
0x06930A18: fe0f1df8  str x30, [sp, #-0x30]!
0x06930A1C: f65701a9  stp x22, x21, [sp, #0x10]
0x06930A20: f44f02a9  stp x20, x19, [sp, #0x20]
0x06930A24: d69f00b0  adrp x22, #0x7d29000
0x06930A28: c8726c39  ldrb w8, [x22, #0xb1c]
0x06930A2C: f30302aa  mov x19, x2
0x06930A30: f40301aa  mov x20, x1
0x06930A34: f50300aa  mov x21, x0
0x06930A38: 88010037  tbnz w8, #0, #0x6930a68
0x06930A3C: 406900d0  adrp x0, #0x765a000
0x06930A40: 00ac44f9  ldr x0, [x0, #0x958]
0x06930A44: f53f2197  bl #0x3180a18
0x06930A48: 00690090  adrp x0, #0x7650000
0x06930A4C: 006846f9  ldr x0, [x0, #0xcd0]
0x06930A50: f23f2197  bl #0x3180a18
0x06930A54: 00690090  adrp x0, #0x7650000
0x06930A58: 001c44f9  ldr x0, [x0, #0x838]
0x06930A5C: ef3f2197  bl #0x3180a18
0x06930A60: 28008052  movz w8, #0x1
0x06930A64: c8722c39  strb w8, [x22, #0xb1c]
0x06930A68: a08e42f8  ldr x0, [x21, #0x28]!
0x06930A6C: 000200b5  cbnz x0, #0x6930aac
0x06930A70: 08690090  adrp x8, #0x7650000
0x06930A74: 081d44f9  ldr x8, [x8, #0x838]
0x06930A78: 000140f9  ldr x0, [x8]
0x06930A7C: 89402197  bl #0x3180ca0
0x06930A80: 486900d0  adrp x8, #0x765a000
0x06930A84: 08ad44f9  ldr x8, [x8, #0x958]
0x06930A88: f60300aa  mov x22, x0
0x06930A8C: 010140f9  ldr x1, [x8]
0x06930A90: 45c59697  bl #0x4ee1fa4
0x06930A94: e00315aa  mov x0, x21
0x06930A98: e10316aa  mov x1, x22
0x06930A9C: b60200f9  str x22, [x21]
0x06930AA0: c93f2197  bl #0x31809c4
0x06930AA4: a00240f9  ldr x0, [x21]
0x06930AA8: 400100b4  cbz x0, #0x6930ad0
0x06930AAC: 08690090  adrp x8, #0x7650000
0x06930AB0: 086946f9  ldr x8, [x8, #0xcd0]
0x06930AB4: e10314aa  mov x1, x20
0x06930AB8: e20313aa  mov x2, x19
0x06930ABC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06930AC0: 030140f9  ldr x3, [x8]
0x06930AC4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06930AC8: fe0743f8  ldr x30, [sp], #0x30
0x06930ACC: a7c89617  b #0x4ee2d68
0x06930AD0: 77402197  bl #0x3180cac

; RVA 0x6930BF0 | public bool GetMetaData(string key, out string value) { }
; bytes=104 sha256=3e53abd52c0a9ccb1e8ba58139951f2fc6720003c745d42d7bdc5fe04b0eeab9 status=arm64_complete_bound indexed_start=True
0x06930BF0: fe0f1df8  str x30, [sp, #-0x30]!
0x06930BF4: f65701a9  stp x22, x21, [sp, #0x10]
0x06930BF8: f44f02a9  stp x20, x19, [sp, #0x20]
0x06930BFC: d69f00b0  adrp x22, #0x7d29000
0x06930C00: c8766c39  ldrb w8, [x22, #0xb1d]
0x06930C04: f30302aa  mov x19, x2
0x06930C08: f40301aa  mov x20, x1
0x06930C0C: f50300aa  mov x21, x0
0x06930C10: c8000037  tbnz w8, #0, #0x6930c28
0x06930C14: 00690090  adrp x0, #0x7650000
0x06930C18: 002843f9  ldr x0, [x0, #0x650]
0x06930C1C: 7f3f2197  bl #0x3180a18
0x06930C20: 28008052  movz w8, #0x1
0x06930C24: c8762c39  strb w8, [x22, #0xb1d]
0x06930C28: a01640f9  ldr x0, [x21, #0x28]
0x06930C2C: 400100b4  cbz x0, #0x6930c54
0x06930C30: 08690090  adrp x8, #0x7650000
0x06930C34: 082943f9  ldr x8, [x8, #0x650]
0x06930C38: e10314aa  mov x1, x20
0x06930C3C: e20313aa  mov x2, x19
0x06930C40: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06930C44: 030140f9  ldr x3, [x8]
0x06930C48: f65741a9  ldp x22, x21, [sp, #0x10]
0x06930C4C: fe0743f8  ldr x30, [sp], #0x30
0x06930C50: 18cf9617  b #0x4ee48b0
0x06930C54: 16402197  bl #0x3180cac

; RVA 0x6930C58 | public void .ctor() { }
; bytes=136 sha256=43abbd0f25872c9dc9736b713878d1b92e0e57585040e3be33bf5dfc15ad4617 status=arm64_complete_bound indexed_start=True
0x06930C58: fe0f1df8  str x30, [sp, #-0x30]!
0x06930C5C: f65701a9  stp x22, x21, [sp, #0x10]
0x06930C60: f44f02a9  stp x20, x19, [sp, #0x20]
0x06930C64: d59f00b0  adrp x21, #0x7d29000
0x06930C68: 16690090  adrp x22, #0x7650000
0x06930C6C: 546900d0  adrp x20, #0x765a000
0x06930C70: a87a6c39  ldrb w8, [x21, #0xb1e]
0x06930C74: d61e44f9  ldr x22, [x22, #0x838]
0x06930C78: 94ae44f9  ldr x20, [x20, #0x958]
0x06930C7C: f30300aa  mov x19, x0
0x06930C80: 28010037  tbnz w8, #0, #0x6930ca4
0x06930C84: 406900d0  adrp x0, #0x765a000
0x06930C88: 00ac44f9  ldr x0, [x0, #0x958]
0x06930C8C: 633f2197  bl #0x3180a18
0x06930C90: 00690090  adrp x0, #0x7650000
0x06930C94: 001c44f9  ldr x0, [x0, #0x838]
0x06930C98: 603f2197  bl #0x3180a18
0x06930C9C: 28008052  movz w8, #0x1
0x06930CA0: a87a2c39  strb w8, [x21, #0xb1e]
0x06930CA4: c00240f9  ldr x0, [x22]
0x06930CA8: fe3f2197  bl #0x3180ca0
0x06930CAC: 810240f9  ldr x1, [x20]
0x06930CB0: f40300aa  mov x20, x0
0x06930CB4: bcc49697  bl #0x4ee1fa4
0x06930CB8: e00313aa  mov x0, x19
0x06930CBC: 148c02f8  str x20, [x0, #0x28]!
0x06930CC0: e10314aa  mov x1, x20
0x06930CC4: 403f2197  bl #0x31809c4
0x06930CC8: e00313aa  mov x0, x19
0x06930CCC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06930CD0: f65741a9  ldp x22, x21, [sp, #0x10]
0x06930CD4: e1031faa  mov x1, xzr
0x06930CD8: fe0743f8  ldr x30, [sp], #0x30
0x06930CDC: 48a6b617  b #0x56da5fc

