; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 123 MergeEngine.Util.WeightedItemUtil
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E36A2C | MergeEngine.Util.WeightedItemUtil$$GenerateWeightedItemList<object, object>
; native signature: MergeEngine_Util_WeightedItemList_TItem__o* MergeEngine_Util_WeightedItemUtil__GenerateWeightedItemList_object__object_ (System_Collections_Generic_IList_TItemData__o* items, System_Func_TItemData__int__o* getWeightFunc, System_Func_TItemData__TItem__o* getItemFunc, const MethodInfo_3E36A2C* method);
; bytes=1116 sha256=b0cb4cb4b57c35da06c2cea93c09b70b45e5f154dbf227c9663ac41cc5d801c4 status=arm64_complete_bound indexed_start=True
0x03E36A2C: fe0f1af8  str x30, [sp, #-0x60]!
0x03E36A30: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03E36A34: fa6702a9  stp x26, x25, [sp, #0x20]
0x03E36A38: f85f03a9  stp x24, x23, [sp, #0x30]
0x03E36A3C: f65704a9  stp x22, x21, [sp, #0x40]
0x03E36A40: f44f05a9  stp x20, x19, [sp, #0x50]
0x03E36A44: 681c40f9  ldr x8, [x3, #0x38]
0x03E36A48: f50303aa  mov x21, x3
0x03E36A4C: f60302aa  mov x22, x2
0x03E36A50: f30301aa  mov x19, x1
0x03E36A54: f40300aa  mov x20, x0
0x03E36A58: 880100b5  cbnz x8, #0x3e36a88
0x03E36A5C: c0c00190  adrp x0, #0x764e000
0x03E36A60: 006444f9  ldr x0, [x0, #0x8c8]
0x03E36A64: ed27cd97  bl #0x3180a18
0x03E36A68: c0c00190  adrp x0, #0x764e000
0x03E36A6C: 007044f9  ldr x0, [x0, #0x8e0]
0x03E36A70: ea27cd97  bl #0x3180a18
0x03E36A74: a81e40f9  ldr x8, [x21, #0x38]
0x03E36A78: 880000b5  cbnz x8, #0x3e36a88
0x03E36A7C: e00315aa  mov x0, x21
0x03E36A80: 7e7fcc97  bl #0x3156878
0x03E36A84: a81e40f9  ldr x8, [x21, #0x38]
0x03E36A88: 000140f9  ldr x0, [x8]
0x03E36A8C: 08d44439  ldrb w8, [x0, #0x135]
0x03E36A90: 48000037  tbnz w8, #0, #0x3e36a98
0x03E36A94: 627fcc97  bl #0x315681c
0x03E36A98: 8228cd97  bl #0x3180ca0
0x03E36A9C: a81e40f9  ldr x8, [x21, #0x38]
0x03E36AA0: f80300aa  mov x24, x0
0x03E36AA4: 010540f9  ldr x1, [x8, #8]
0x03E36AA8: fdf00394  bl #0x3f32e9c
0x03E36AAC: 381800b4  cbz x24, #0x3e36db0
0x03E36AB0: f70318aa  mov x23, x24
0x03E36AB4: f30e01f8  str x19, [x23, #0x10]!
0x03E36AB8: e00317aa  mov x0, x23
0x03E36ABC: e10313aa  mov x1, x19
0x03E36AC0: c127cd97  bl #0x31809c4
0x03E36AC4: a81e40f9  ldr x8, [x21, #0x38]
0x03E36AC8: 001540f9  ldr x0, [x8, #0x28]
0x03E36ACC: 08d44439  ldrb w8, [x0, #0x135]
0x03E36AD0: 48000037  tbnz w8, #0, #0x3e36ad8
0x03E36AD4: 527fcc97  bl #0x315681c
0x03E36AD8: 7228cd97  bl #0x3180ca0
0x03E36ADC: a81e40f9  ldr x8, [x21, #0x38]
0x03E36AE0: e10318aa  mov x1, x24
0x03E36AE4: f30300aa  mov x19, x0
0x03E36AE8: 021140f9  ldr x2, [x8, #0x20]
0x03E36AEC: 031940f9  ldr x3, [x8, #0x30]
0x03E36AF0: 0b6e3c94  bl #0x4d5231c
0x03E36AF4: a81e40f9  ldr x8, [x21, #0x38]
0x03E36AF8: e00314aa  mov x0, x20
0x03E36AFC: e10313aa  mov x1, x19
0x03E36B00: 021d40f9  ldr x2, [x8, #0x38]
0x03E36B04: 316afb97  bl #0x3d113c8
0x03E36B08: a81e40f9  ldr x8, [x21, #0x38]
0x03E36B0C: 002140f9  ldr x0, [x8, #0x40]
0x03E36B10: 08d44439  ldrb w8, [x0, #0x135]
0x03E36B14: 48000037  tbnz w8, #0, #0x3e36b1c
0x03E36B18: 417fcc97  bl #0x315681c
0x03E36B1C: 6128cd97  bl #0x3180ca0
0x03E36B20: a81e40f9  ldr x8, [x21, #0x38]
0x03E36B24: f30300aa  mov x19, x0
0x03E36B28: 012540f9  ldr x1, [x8, #0x48]
0x03E36B2C: f6382c94  bl #0x4944f04
0x03E36B30: 141400b4  cbz x20, #0x3e36db0
0x03E36B34: a81e40f9  ldr x8, [x21, #0x38]
0x03E36B38: 012940f9  ldr x1, [x8, #0x50]
0x03E36B3C: 28d44439  ldrb w8, [x1, #0x135]
0x03E36B40: 88000037  tbnz w8, #0, #0x3e36b50
0x03E36B44: e00301aa  mov x0, x1
0x03E36B48: 357fcc97  bl #0x315681c
0x03E36B4C: e10300aa  mov x1, x0
0x03E36B50: 880240f9  ldr x8, [x20]
0x03E36B54: 095d4279  ldrh w9, [x8, #0x12e]
0x03E36B58: 290100b4  cbz x9, #0x3e36b7c
0x03E36B5C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E36B60: 4a210091  add x10, x10, #8
0x03E36B64: 4b815ff8  ldur x11, [x10, #-8]
0x03E36B68: 7f0101eb  cmp x11, x1
0x03E36B6C: 00010054  b.eq #0x3e36b8c
0x03E36B70: 290500f1  subs x9, x9, #1
0x03E36B74: 4a410091  add x10, x10, #0x10
0x03E36B78: 61ffff54  b.ne #0x3e36b64
0x03E36B7C: e00314aa  mov x0, x20
0x03E36B80: e2031f2a  mov w2, wzr
0x03E36B84: e37fcc97  bl #0x3156b10
0x03E36B88: 04000014  b #0x3e36b98
0x03E36B8C: 490180b9  ldrsw x9, [x10]
0x03E36B90: 0811098b  add x8, x8, x9, lsl #4
0x03E36B94: 00e10491  add x0, x8, #0x138
0x03E36B98: 080440a9  ldp x8, x1, [x0]
0x03E36B9C: e00314aa  mov x0, x20
0x03E36BA0: 00013fd6  blr x8
0x03E36BA4: f40300aa  mov x20, x0
0x03E36BA8: 601000b4  cbz x0, #0x3e36db4
0x03E36BAC: dcc00190  adrp x28, #0x764e000
0x03E36BB0: 9c7344f9  ldr x28, [x28, #0x8e0]
0x03E36BB4: f8031f2a  mov w24, wzr
0x03E36BB8: 880240f9  ldr x8, [x20]
0x03E36BBC: 810340f9  ldr x1, [x28]
0x03E36BC0: 095d4279  ldrh w9, [x8, #0x12e]
0x03E36BC4: 290100b4  cbz x9, #0x3e36be8
0x03E36BC8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E36BCC: 4a210091  add x10, x10, #8
0x03E36BD0: 4b815ff8  ldur x11, [x10, #-8]
0x03E36BD4: 7f0101eb  cmp x11, x1
0x03E36BD8: 00010054  b.eq #0x3e36bf8
0x03E36BDC: 290500f1  subs x9, x9, #1
0x03E36BE0: 4a410091  add x10, x10, #0x10
0x03E36BE4: 61ffff54  b.ne #0x3e36bd0
0x03E36BE8: e00314aa  mov x0, x20
0x03E36BEC: e2031f2a  mov w2, wzr
0x03E36BF0: c87fcc97  bl #0x3156b10
0x03E36BF4: 04000014  b #0x3e36c04
0x03E36BF8: 490180b9  ldrsw x9, [x10]
0x03E36BFC: 0811098b  add x8, x8, x9, lsl #4
0x03E36C00: 00e10491  add x0, x8, #0x138
0x03E36C04: 080440a9  ldp x8, x1, [x0]
0x03E36C08: e00314aa  mov x0, x20
0x03E36C0C: 00013fd6  blr x8
0x03E36C10: 40080036  tbz w0, #0, #0x3e36d18
0x03E36C14: a81e40f9  ldr x8, [x21, #0x38]
0x03E36C18: 013140f9  ldr x1, [x8, #0x60]
0x03E36C1C: 28d44439  ldrb w8, [x1, #0x135]
0x03E36C20: 88000037  tbnz w8, #0, #0x3e36c30
0x03E36C24: e00301aa  mov x0, x1
0x03E36C28: fd7ecc97  bl #0x315681c
0x03E36C2C: e10300aa  mov x1, x0
0x03E36C30: 880240f9  ldr x8, [x20]
0x03E36C34: 095d4279  ldrh w9, [x8, #0x12e]
0x03E36C38: 290100b4  cbz x9, #0x3e36c5c
0x03E36C3C: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E36C40: 4a210091  add x10, x10, #8
0x03E36C44: 4b815ff8  ldur x11, [x10, #-8]
0x03E36C48: 7f0101eb  cmp x11, x1
0x03E36C4C: 00010054  b.eq #0x3e36c6c
0x03E36C50: 290500f1  subs x9, x9, #1
0x03E36C54: 4a410091  add x10, x10, #0x10
0x03E36C58: 61ffff54  b.ne #0x3e36c44
0x03E36C5C: e00314aa  mov x0, x20
0x03E36C60: e2031f2a  mov w2, wzr
0x03E36C64: ab7fcc97  bl #0x3156b10
0x03E36C68: 04000014  b #0x3e36c78
0x03E36C6C: 490180b9  ldrsw x9, [x10]
0x03E36C70: 0811098b  add x8, x8, x9, lsl #4
0x03E36C74: 00e10491  add x0, x8, #0x138
0x03E36C78: 080440a9  ldp x8, x1, [x0]
0x03E36C7C: e00314aa  mov x0, x20
0x03E36C80: 00013fd6  blr x8
0x03E36C84: e80240f9  ldr x8, [x23]
0x03E36C88: 080900b4  cbz x8, #0x3e36da8
0x03E36C8C: fa0300aa  mov x26, x0
0x03E36C90: 002140f9  ldr x0, [x8, #0x40]
0x03E36C94: 090d40f9  ldr x9, [x8, #0x18]
0x03E36C98: 021540f9  ldr x2, [x8, #0x28]
0x03E36C9C: e1031aaa  mov x1, x26
0x03E36CA0: 20013fd6  blr x9
0x03E36CA4: 560800b4  cbz x22, #0x3e36dac
0x03E36CA8: f903002a  mov w25, w0
0x03E36CAC: c02240f9  ldr x0, [x22, #0x40]
0x03E36CB0: c80e40f9  ldr x8, [x22, #0x18]
0x03E36CB4: c21640f9  ldr x2, [x22, #0x28]
0x03E36CB8: e1031aaa  mov x1, x26
0x03E36CBC: 00013fd6  blr x8
0x03E36CC0: a81e40f9  ldr x8, [x21, #0x38]
0x03E36CC4: fa0300aa  mov x26, x0
0x03E36CC8: 004d40f9  ldr x0, [x8, #0x98]
0x03E36CCC: 08d44439  ldrb w8, [x0, #0x135]
0x03E36CD0: 48000037  tbnz w8, #0, #0x3e36cd8
0x03E36CD4: d27ecc97  bl #0x315681c
0x03E36CD8: f227cd97  bl #0x3180ca0
0x03E36CDC: a81e40f9  ldr x8, [x21, #0x38]
0x03E36CE0: fb0300aa  mov x27, x0
0x03E36CE4: 3803180b  add w24, w25, w24
0x03E36CE8: 045140f9  ldr x4, [x8, #0xa0]
0x03E36CEC: e1031aaa  mov x1, x26
0x03E36CF0: e203192a  mov w2, w25
0x03E36CF4: e303182a  mov w3, w24
0x03E36CF8: fb392c94  bl #0x49454e4
0x03E36CFC: 530500b4  cbz x19, #0x3e36da4
0x03E36D00: a81e40f9  ldr x8, [x21, #0x38]
0x03E36D04: 025540f9  ldr x2, [x8, #0xa8]
0x03E36D08: e00313aa  mov x0, x19
0x03E36D0C: e1031baa  mov x1, x27
0x03E36D10: 03382c94  bl #0x4944d1c
0x03E36D14: a9ffff17  b #0x3e36bb8
0x03E36D18: f5031faa  mov x21, xzr
0x03E36D1C: 340300b4  cbz x20, #0x3e36d80
0x03E36D20: cac00190  adrp x10, #0x764e000
0x03E36D24: 880240f9  ldr x8, [x20]
0x03E36D28: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E36D2C: 095d4279  ldrh w9, [x8, #0x12e]
0x03E36D30: 410140f9  ldr x1, [x10]
0x03E36D34: 290100b4  cbz x9, #0x3e36d58
0x03E36D38: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E36D3C: 4a210091  add x10, x10, #8
0x03E36D40: 4b815ff8  ldur x11, [x10, #-8]
0x03E36D44: 7f0101eb  cmp x11, x1
0x03E36D48: 00010054  b.eq #0x3e36d68
0x03E36D4C: 290500f1  subs x9, x9, #1
0x03E36D50: 4a410091  add x10, x10, #0x10
0x03E36D54: 61ffff54  b.ne #0x3e36d40
0x03E36D58: e00314aa  mov x0, x20
0x03E36D5C: e2031f2a  mov w2, wzr
0x03E36D60: 6c7fcc97  bl #0x3156b10
0x03E36D64: 04000014  b #0x3e36d74
0x03E36D68: 490180b9  ldrsw x9, [x10]
0x03E36D6C: 0811098b  add x8, x8, x9, lsl #4
0x03E36D70: 00e10491  add x0, x8, #0x138
0x03E36D74: 080440a9  ldp x8, x1, [x0]
0x03E36D78: e00314aa  mov x0, x20
0x03E36D7C: 00013fd6  blr x8
0x03E36D80: d50100b5  cbnz x21, #0x3e36db8
0x03E36D84: e00313aa  mov x0, x19
0x03E36D88: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03E36D8C: f65744a9  ldp x22, x21, [sp, #0x40]
0x03E36D90: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03E36D94: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03E36D98: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03E36D9C: fe0746f8  ldr x30, [sp], #0x60
0x03E36DA0: c0035fd6  ret
0x03E36DA4: c227cd97  bl #0x3180cac
0x03E36DA8: c127cd97  bl #0x3180cac
0x03E36DAC: c027cd97  bl #0x3180cac
0x03E36DB0: bf27cd97  bl #0x3180cac
0x03E36DB4: be27cd97  bl #0x3180cac
0x03E36DB8: e00315aa  mov x0, x21
0x03E36DBC: ba27cd97  bl #0x3180ca4
0x03E36DC0: 08000014  b #0x3e36de0
0x03E36DC4: 07000014  b #0x3e36de0
0x03E36DC8: 06000014  b #0x3e36de0
0x03E36DCC: 05000014  b #0x3e36de0
0x03E36DD0: 04000014  b #0x3e36de0
0x03E36DD4: 03000014  b #0x3e36de0
0x03E36DD8: 02000014  b #0x3e36de0
0x03E36DDC: 01000014  b #0x3e36de0
0x03E36DE0: f60300aa  mov x22, x0
0x03E36DE4: 3f040071  cmp w1, #1
0x03E36DE8: c1000054  b.ne #0x3e36e00
0x03E36DEC: e00316aa  mov x0, x22
0x03E36DF0: c85ece94  bl #0x71ce910
0x03E36DF4: 150040f9  ldr x21, [x0]
0x03E36DF8: ca5ece94  bl #0x71ce920
0x03E36DFC: c8ffff17  b #0x3e36d1c
0x03E36E00: f5031faa  mov x21, xzr
0x03E36E04: 02000014  b #0x3e36e0c
0x03E36E08: f60300aa  mov x22, x0
0x03E36E0C: 340300b4  cbz x20, #0x3e36e70
0x03E36E10: cac00190  adrp x10, #0x764e000
0x03E36E14: 880240f9  ldr x8, [x20]
0x03E36E18: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E36E1C: 095d4279  ldrh w9, [x8, #0x12e]
0x03E36E20: 410140f9  ldr x1, [x10]
0x03E36E24: 290100b4  cbz x9, #0x3e36e48
0x03E36E28: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E36E2C: 4a210091  add x10, x10, #8
0x03E36E30: 4b815ff8  ldur x11, [x10, #-8]
0x03E36E34: 7f0101eb  cmp x11, x1
0x03E36E38: 00010054  b.eq #0x3e36e58
0x03E36E3C: 290500f1  subs x9, x9, #1
0x03E36E40: 4a410091  add x10, x10, #0x10
0x03E36E44: 61ffff54  b.ne #0x3e36e30
0x03E36E48: e00314aa  mov x0, x20
0x03E36E4C: e2031f2a  mov w2, wzr
0x03E36E50: 307fcc97  bl #0x3156b10
0x03E36E54: 04000014  b #0x3e36e64
0x03E36E58: 490180b9  ldrsw x9, [x10]
0x03E36E5C: 0811098b  add x8, x8, x9, lsl #4
0x03E36E60: 00e10491  add x0, x8, #0x138
0x03E36E64: 080440a9  ldp x8, x1, [x0]
0x03E36E68: e00314aa  mov x0, x20
0x03E36E6C: 00013fd6  blr x8
0x03E36E70: 750000b5  cbnz x21, #0x3e36e7c
0x03E36E74: e00316aa  mov x0, x22
0x03E36E78: b8bad097  bl #0x3265958
0x03E36E7C: e00315aa  mov x0, x21
0x03E36E80: 8927cd97  bl #0x3180ca4
0x03E36E84: a449bf97  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E36E88 | MergeEngine.Util.WeightedItemUtil$$GenerateWeightedItemList<WeightedTool, Int32Enum>
; native signature: MergeEngine_Util_WeightedItemList_TItem__o* MergeEngine_Util_WeightedItemUtil__GenerateWeightedItemList_WeightedTool__Int32Enum_ (System_Collections_Generic_IList_TItemData__o* items, System_Func_TItemData__int__o* getWeightFunc, System_Func_TItemData__TItem__o* getItemFunc, const MethodInfo_3E36E88* method);
; bytes=1116 sha256=99960175fe38011eb7ee38606710b684be62753f6308bbf310e5af18d8c0b101 status=arm64_complete_bound indexed_start=True
0x03E36E88: fe0f1af8  str x30, [sp, #-0x60]!
0x03E36E8C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03E36E90: fa6702a9  stp x26, x25, [sp, #0x20]
0x03E36E94: f85f03a9  stp x24, x23, [sp, #0x30]
0x03E36E98: f65704a9  stp x22, x21, [sp, #0x40]
0x03E36E9C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03E36EA0: 681c40f9  ldr x8, [x3, #0x38]
0x03E36EA4: f50303aa  mov x21, x3
0x03E36EA8: f60302aa  mov x22, x2
0x03E36EAC: f30301aa  mov x19, x1
0x03E36EB0: f40300aa  mov x20, x0
0x03E36EB4: 880100b5  cbnz x8, #0x3e36ee4
0x03E36EB8: c0c00190  adrp x0, #0x764e000
0x03E36EBC: 006444f9  ldr x0, [x0, #0x8c8]
0x03E36EC0: d626cd97  bl #0x3180a18
0x03E36EC4: c0c00190  adrp x0, #0x764e000
0x03E36EC8: 007044f9  ldr x0, [x0, #0x8e0]
0x03E36ECC: d326cd97  bl #0x3180a18
0x03E36ED0: a81e40f9  ldr x8, [x21, #0x38]
0x03E36ED4: 880000b5  cbnz x8, #0x3e36ee4
0x03E36ED8: e00315aa  mov x0, x21
0x03E36EDC: 677ecc97  bl #0x3156878
0x03E36EE0: a81e40f9  ldr x8, [x21, #0x38]
0x03E36EE4: 000140f9  ldr x0, [x8]
0x03E36EE8: 08d44439  ldrb w8, [x0, #0x135]
0x03E36EEC: 48000037  tbnz w8, #0, #0x3e36ef4
0x03E36EF0: 4b7ecc97  bl #0x315681c
0x03E36EF4: 6b27cd97  bl #0x3180ca0
0x03E36EF8: a81e40f9  ldr x8, [x21, #0x38]
0x03E36EFC: f80300aa  mov x24, x0
0x03E36F00: 010540f9  ldr x1, [x8, #8]
0x03E36F04: 13f00394  bl #0x3f32f50
0x03E36F08: 381800b4  cbz x24, #0x3e3720c
0x03E36F0C: f70318aa  mov x23, x24
0x03E36F10: f30e01f8  str x19, [x23, #0x10]!
0x03E36F14: e00317aa  mov x0, x23
0x03E36F18: e10313aa  mov x1, x19
0x03E36F1C: aa26cd97  bl #0x31809c4
0x03E36F20: a81e40f9  ldr x8, [x21, #0x38]
0x03E36F24: 001540f9  ldr x0, [x8, #0x28]
0x03E36F28: 08d44439  ldrb w8, [x0, #0x135]
0x03E36F2C: 48000037  tbnz w8, #0, #0x3e36f34
0x03E36F30: 3b7ecc97  bl #0x315681c
0x03E36F34: 5b27cd97  bl #0x3180ca0
0x03E36F38: a81e40f9  ldr x8, [x21, #0x38]
0x03E36F3C: e10318aa  mov x1, x24
0x03E36F40: f30300aa  mov x19, x0
0x03E36F44: 021140f9  ldr x2, [x8, #0x20]
0x03E36F48: 031940f9  ldr x3, [x8, #0x30]
0x03E36F4C: b6783c94  bl #0x4d55224
0x03E36F50: a81e40f9  ldr x8, [x21, #0x38]
0x03E36F54: e00314aa  mov x0, x20
0x03E36F58: e10313aa  mov x1, x19
0x03E36F5C: 021d40f9  ldr x2, [x8, #0x38]
0x03E36F60: bd69fb97  bl #0x3d11654
0x03E36F64: a81e40f9  ldr x8, [x21, #0x38]
0x03E36F68: 002140f9  ldr x0, [x8, #0x40]
0x03E36F6C: 08d44439  ldrb w8, [x0, #0x135]
0x03E36F70: 48000037  tbnz w8, #0, #0x3e36f78
0x03E36F74: 2a7ecc97  bl #0x315681c
0x03E36F78: 4a27cd97  bl #0x3180ca0
0x03E36F7C: a81e40f9  ldr x8, [x21, #0x38]
0x03E36F80: f30300aa  mov x19, x0
0x03E36F84: 012540f9  ldr x1, [x8, #0x48]
0x03E36F88: e6362c94  bl #0x4944b20
0x03E36F8C: 141400b4  cbz x20, #0x3e3720c
0x03E36F90: a81e40f9  ldr x8, [x21, #0x38]
0x03E36F94: 012940f9  ldr x1, [x8, #0x50]
0x03E36F98: 28d44439  ldrb w8, [x1, #0x135]
0x03E36F9C: 88000037  tbnz w8, #0, #0x3e36fac
0x03E36FA0: e00301aa  mov x0, x1
0x03E36FA4: 1e7ecc97  bl #0x315681c
0x03E36FA8: e10300aa  mov x1, x0
0x03E36FAC: 880240f9  ldr x8, [x20]
0x03E36FB0: 095d4279  ldrh w9, [x8, #0x12e]
0x03E36FB4: 290100b4  cbz x9, #0x3e36fd8
0x03E36FB8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E36FBC: 4a210091  add x10, x10, #8
0x03E36FC0: 4b815ff8  ldur x11, [x10, #-8]
0x03E36FC4: 7f0101eb  cmp x11, x1
0x03E36FC8: 00010054  b.eq #0x3e36fe8
0x03E36FCC: 290500f1  subs x9, x9, #1
0x03E36FD0: 4a410091  add x10, x10, #0x10
0x03E36FD4: 61ffff54  b.ne #0x3e36fc0
0x03E36FD8: e00314aa  mov x0, x20
0x03E36FDC: e2031f2a  mov w2, wzr
0x03E36FE0: cc7ecc97  bl #0x3156b10
0x03E36FE4: 04000014  b #0x3e36ff4
0x03E36FE8: 490180b9  ldrsw x9, [x10]
0x03E36FEC: 0811098b  add x8, x8, x9, lsl #4
0x03E36FF0: 00e10491  add x0, x8, #0x138
0x03E36FF4: 080440a9  ldp x8, x1, [x0]
0x03E36FF8: e00314aa  mov x0, x20
0x03E36FFC: 00013fd6  blr x8
0x03E37000: f40300aa  mov x20, x0
0x03E37004: 601000b4  cbz x0, #0x3e37210
0x03E37008: bcc001f0  adrp x28, #0x764e000
0x03E3700C: 9c7344f9  ldr x28, [x28, #0x8e0]
0x03E37010: f8031f2a  mov w24, wzr
0x03E37014: 880240f9  ldr x8, [x20]
0x03E37018: 810340f9  ldr x1, [x28]
0x03E3701C: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37020: 290100b4  cbz x9, #0x3e37044
0x03E37024: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37028: 4a210091  add x10, x10, #8
0x03E3702C: 4b815ff8  ldur x11, [x10, #-8]
0x03E37030: 7f0101eb  cmp x11, x1
0x03E37034: 00010054  b.eq #0x3e37054
0x03E37038: 290500f1  subs x9, x9, #1
0x03E3703C: 4a410091  add x10, x10, #0x10
0x03E37040: 61ffff54  b.ne #0x3e3702c
0x03E37044: e00314aa  mov x0, x20
0x03E37048: e2031f2a  mov w2, wzr
0x03E3704C: b17ecc97  bl #0x3156b10
0x03E37050: 04000014  b #0x3e37060
0x03E37054: 490180b9  ldrsw x9, [x10]
0x03E37058: 0811098b  add x8, x8, x9, lsl #4
0x03E3705C: 00e10491  add x0, x8, #0x138
0x03E37060: 080440a9  ldp x8, x1, [x0]
0x03E37064: e00314aa  mov x0, x20
0x03E37068: 00013fd6  blr x8
0x03E3706C: 40080036  tbz w0, #0, #0x3e37174
0x03E37070: a81e40f9  ldr x8, [x21, #0x38]
0x03E37074: 013140f9  ldr x1, [x8, #0x60]
0x03E37078: 28d44439  ldrb w8, [x1, #0x135]
0x03E3707C: 88000037  tbnz w8, #0, #0x3e3708c
0x03E37080: e00301aa  mov x0, x1
0x03E37084: e67dcc97  bl #0x315681c
0x03E37088: e10300aa  mov x1, x0
0x03E3708C: 880240f9  ldr x8, [x20]
0x03E37090: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37094: 290100b4  cbz x9, #0x3e370b8
0x03E37098: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E3709C: 4a210091  add x10, x10, #8
0x03E370A0: 4b815ff8  ldur x11, [x10, #-8]
0x03E370A4: 7f0101eb  cmp x11, x1
0x03E370A8: 00010054  b.eq #0x3e370c8
0x03E370AC: 290500f1  subs x9, x9, #1
0x03E370B0: 4a410091  add x10, x10, #0x10
0x03E370B4: 61ffff54  b.ne #0x3e370a0
0x03E370B8: e00314aa  mov x0, x20
0x03E370BC: e2031f2a  mov w2, wzr
0x03E370C0: 947ecc97  bl #0x3156b10
0x03E370C4: 04000014  b #0x3e370d4
0x03E370C8: 490180b9  ldrsw x9, [x10]
0x03E370CC: 0811098b  add x8, x8, x9, lsl #4
0x03E370D0: 00e10491  add x0, x8, #0x138
0x03E370D4: 080440a9  ldp x8, x1, [x0]
0x03E370D8: e00314aa  mov x0, x20
0x03E370DC: 00013fd6  blr x8
0x03E370E0: e80240f9  ldr x8, [x23]
0x03E370E4: 080900b4  cbz x8, #0x3e37204
0x03E370E8: fa0300aa  mov x26, x0
0x03E370EC: 002140f9  ldr x0, [x8, #0x40]
0x03E370F0: 090d40f9  ldr x9, [x8, #0x18]
0x03E370F4: 021540f9  ldr x2, [x8, #0x28]
0x03E370F8: e1031aaa  mov x1, x26
0x03E370FC: 20013fd6  blr x9
0x03E37100: 560800b4  cbz x22, #0x3e37208
0x03E37104: f903002a  mov w25, w0
0x03E37108: c02240f9  ldr x0, [x22, #0x40]
0x03E3710C: c80e40f9  ldr x8, [x22, #0x18]
0x03E37110: c21640f9  ldr x2, [x22, #0x28]
0x03E37114: e1031aaa  mov x1, x26
0x03E37118: 00013fd6  blr x8
0x03E3711C: a81e40f9  ldr x8, [x21, #0x38]
0x03E37120: fa03002a  mov w26, w0
0x03E37124: 004d40f9  ldr x0, [x8, #0x98]
0x03E37128: 08d44439  ldrb w8, [x0, #0x135]
0x03E3712C: 48000037  tbnz w8, #0, #0x3e37134
0x03E37130: bb7dcc97  bl #0x315681c
0x03E37134: db26cd97  bl #0x3180ca0
0x03E37138: a81e40f9  ldr x8, [x21, #0x38]
0x03E3713C: fb0300aa  mov x27, x0
0x03E37140: 3803180b  add w24, w25, w24
0x03E37144: 045140f9  ldr x4, [x8, #0xa0]
0x03E37148: e1031a2a  mov w1, w26
0x03E3714C: e203192a  mov w2, w25
0x03E37150: e303182a  mov w3, w24
0x03E37154: cf382c94  bl #0x4945490
0x03E37158: 530500b4  cbz x19, #0x3e37200
0x03E3715C: a81e40f9  ldr x8, [x21, #0x38]
0x03E37160: 025540f9  ldr x2, [x8, #0xa8]
0x03E37164: e00313aa  mov x0, x19
0x03E37168: e1031baa  mov x1, x27
0x03E3716C: f3352c94  bl #0x4944938
0x03E37170: a9ffff17  b #0x3e37014
0x03E37174: f5031faa  mov x21, xzr
0x03E37178: 340300b4  cbz x20, #0x3e371dc
0x03E3717C: aac001f0  adrp x10, #0x764e000
0x03E37180: 880240f9  ldr x8, [x20]
0x03E37184: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E37188: 095d4279  ldrh w9, [x8, #0x12e]
0x03E3718C: 410140f9  ldr x1, [x10]
0x03E37190: 290100b4  cbz x9, #0x3e371b4
0x03E37194: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37198: 4a210091  add x10, x10, #8
0x03E3719C: 4b815ff8  ldur x11, [x10, #-8]
0x03E371A0: 7f0101eb  cmp x11, x1
0x03E371A4: 00010054  b.eq #0x3e371c4
0x03E371A8: 290500f1  subs x9, x9, #1
0x03E371AC: 4a410091  add x10, x10, #0x10
0x03E371B0: 61ffff54  b.ne #0x3e3719c
0x03E371B4: e00314aa  mov x0, x20
0x03E371B8: e2031f2a  mov w2, wzr
0x03E371BC: 557ecc97  bl #0x3156b10
0x03E371C0: 04000014  b #0x3e371d0
0x03E371C4: 490180b9  ldrsw x9, [x10]
0x03E371C8: 0811098b  add x8, x8, x9, lsl #4
0x03E371CC: 00e10491  add x0, x8, #0x138
0x03E371D0: 080440a9  ldp x8, x1, [x0]
0x03E371D4: e00314aa  mov x0, x20
0x03E371D8: 00013fd6  blr x8
0x03E371DC: d50100b5  cbnz x21, #0x3e37214
0x03E371E0: e00313aa  mov x0, x19
0x03E371E4: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03E371E8: f65744a9  ldp x22, x21, [sp, #0x40]
0x03E371EC: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03E371F0: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03E371F4: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03E371F8: fe0746f8  ldr x30, [sp], #0x60
0x03E371FC: c0035fd6  ret
0x03E37200: ab26cd97  bl #0x3180cac
0x03E37204: aa26cd97  bl #0x3180cac
0x03E37208: a926cd97  bl #0x3180cac
0x03E3720C: a826cd97  bl #0x3180cac
0x03E37210: a726cd97  bl #0x3180cac
0x03E37214: e00315aa  mov x0, x21
0x03E37218: a326cd97  bl #0x3180ca4
0x03E3721C: 08000014  b #0x3e3723c
0x03E37220: 07000014  b #0x3e3723c
0x03E37224: 06000014  b #0x3e3723c
0x03E37228: 05000014  b #0x3e3723c
0x03E3722C: 04000014  b #0x3e3723c
0x03E37230: 03000014  b #0x3e3723c
0x03E37234: 02000014  b #0x3e3723c
0x03E37238: 01000014  b #0x3e3723c
0x03E3723C: f60300aa  mov x22, x0
0x03E37240: 3f040071  cmp w1, #1
0x03E37244: c1000054  b.ne #0x3e3725c
0x03E37248: e00316aa  mov x0, x22
0x03E3724C: b15dce94  bl #0x71ce910
0x03E37250: 150040f9  ldr x21, [x0]
0x03E37254: b35dce94  bl #0x71ce920
0x03E37258: c8ffff17  b #0x3e37178
0x03E3725C: f5031faa  mov x21, xzr
0x03E37260: 02000014  b #0x3e37268
0x03E37264: f60300aa  mov x22, x0
0x03E37268: 340300b4  cbz x20, #0x3e372cc
0x03E3726C: aac001f0  adrp x10, #0x764e000
0x03E37270: 880240f9  ldr x8, [x20]
0x03E37274: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E37278: 095d4279  ldrh w9, [x8, #0x12e]
0x03E3727C: 410140f9  ldr x1, [x10]
0x03E37280: 290100b4  cbz x9, #0x3e372a4
0x03E37284: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37288: 4a210091  add x10, x10, #8
0x03E3728C: 4b815ff8  ldur x11, [x10, #-8]
0x03E37290: 7f0101eb  cmp x11, x1
0x03E37294: 00010054  b.eq #0x3e372b4
0x03E37298: 290500f1  subs x9, x9, #1
0x03E3729C: 4a410091  add x10, x10, #0x10
0x03E372A0: 61ffff54  b.ne #0x3e3728c
0x03E372A4: e00314aa  mov x0, x20
0x03E372A8: e2031f2a  mov w2, wzr
0x03E372AC: 197ecc97  bl #0x3156b10
0x03E372B0: 04000014  b #0x3e372c0
0x03E372B4: 490180b9  ldrsw x9, [x10]
0x03E372B8: 0811098b  add x8, x8, x9, lsl #4
0x03E372BC: 00e10491  add x0, x8, #0x138
0x03E372C0: 080440a9  ldp x8, x1, [x0]
0x03E372C4: e00314aa  mov x0, x20
0x03E372C8: 00013fd6  blr x8
0x03E372CC: 750000b5  cbnz x21, #0x3e372d8
0x03E372D0: e00316aa  mov x0, x22
0x03E372D4: a1b9d097  bl #0x3265958
0x03E372D8: e00315aa  mov x0, x21
0x03E372DC: 7226cd97  bl #0x3180ca4
0x03E372E0: 8d48bf97  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E372E4 | MergeEngine.Util.WeightedItemUtil$$GenerateWeightedItemList<WeightedToolLevel, int>
; native signature: MergeEngine_Util_WeightedItemList_TItem__o* MergeEngine_Util_WeightedItemUtil__GenerateWeightedItemList_WeightedToolLevel__int_ (System_Collections_Generic_IList_TItemData__o* items, System_Func_TItemData__int__o* getWeightFunc, System_Func_TItemData__TItem__o* getItemFunc, const MethodInfo_3E372E4* method);
; bytes=1116 sha256=5041851d29dd2a8de511c357a06e3ff1620ebbdf99ff4b73048e9a5453c59106 status=arm64_complete_bound indexed_start=True
0x03E372E4: fe0f1af8  str x30, [sp, #-0x60]!
0x03E372E8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03E372EC: fa6702a9  stp x26, x25, [sp, #0x20]
0x03E372F0: f85f03a9  stp x24, x23, [sp, #0x30]
0x03E372F4: f65704a9  stp x22, x21, [sp, #0x40]
0x03E372F8: f44f05a9  stp x20, x19, [sp, #0x50]
0x03E372FC: 681c40f9  ldr x8, [x3, #0x38]
0x03E37300: f50303aa  mov x21, x3
0x03E37304: f60302aa  mov x22, x2
0x03E37308: f30301aa  mov x19, x1
0x03E3730C: f40300aa  mov x20, x0
0x03E37310: 880100b5  cbnz x8, #0x3e37340
0x03E37314: a0c001f0  adrp x0, #0x764e000
0x03E37318: 006444f9  ldr x0, [x0, #0x8c8]
0x03E3731C: bf25cd97  bl #0x3180a18
0x03E37320: a0c001f0  adrp x0, #0x764e000
0x03E37324: 007044f9  ldr x0, [x0, #0x8e0]
0x03E37328: bc25cd97  bl #0x3180a18
0x03E3732C: a81e40f9  ldr x8, [x21, #0x38]
0x03E37330: 880000b5  cbnz x8, #0x3e37340
0x03E37334: e00315aa  mov x0, x21
0x03E37338: 507dcc97  bl #0x3156878
0x03E3733C: a81e40f9  ldr x8, [x21, #0x38]
0x03E37340: 000140f9  ldr x0, [x8]
0x03E37344: 08d44439  ldrb w8, [x0, #0x135]
0x03E37348: 48000037  tbnz w8, #0, #0x3e37350
0x03E3734C: 347dcc97  bl #0x315681c
0x03E37350: 5426cd97  bl #0x3180ca0
0x03E37354: a81e40f9  ldr x8, [x21, #0x38]
0x03E37358: f80300aa  mov x24, x0
0x03E3735C: 010540f9  ldr x1, [x8, #8]
0x03E37360: 17ef0394  bl #0x3f32fbc
0x03E37364: 381800b4  cbz x24, #0x3e37668
0x03E37368: f70318aa  mov x23, x24
0x03E3736C: f30e01f8  str x19, [x23, #0x10]!
0x03E37370: e00317aa  mov x0, x23
0x03E37374: e10313aa  mov x1, x19
0x03E37378: 9325cd97  bl #0x31809c4
0x03E3737C: a81e40f9  ldr x8, [x21, #0x38]
0x03E37380: 001540f9  ldr x0, [x8, #0x28]
0x03E37384: 08d44439  ldrb w8, [x0, #0x135]
0x03E37388: 48000037  tbnz w8, #0, #0x3e37390
0x03E3738C: 247dcc97  bl #0x315681c
0x03E37390: 4426cd97  bl #0x3180ca0
0x03E37394: a81e40f9  ldr x8, [x21, #0x38]
0x03E37398: e10318aa  mov x1, x24
0x03E3739C: f30300aa  mov x19, x0
0x03E373A0: 021140f9  ldr x2, [x8, #0x20]
0x03E373A4: 031940f9  ldr x3, [x8, #0x30]
0x03E373A8: cc773c94  bl #0x4d552d8
0x03E373AC: a81e40f9  ldr x8, [x21, #0x38]
0x03E373B0: e00314aa  mov x0, x20
0x03E373B4: e10313aa  mov x1, x19
0x03E373B8: 021d40f9  ldr x2, [x8, #0x38]
0x03E373BC: 4969fb97  bl #0x3d118e0
0x03E373C0: a81e40f9  ldr x8, [x21, #0x38]
0x03E373C4: 002140f9  ldr x0, [x8, #0x40]
0x03E373C8: 08d44439  ldrb w8, [x0, #0x135]
0x03E373CC: 48000037  tbnz w8, #0, #0x3e373d4
0x03E373D0: 137dcc97  bl #0x315681c
0x03E373D4: 3326cd97  bl #0x3180ca0
0x03E373D8: a81e40f9  ldr x8, [x21, #0x38]
0x03E373DC: f30300aa  mov x19, x0
0x03E373E0: 012540f9  ldr x1, [x8, #0x48]
0x03E373E4: d6342c94  bl #0x494473c
0x03E373E8: 141400b4  cbz x20, #0x3e37668
0x03E373EC: a81e40f9  ldr x8, [x21, #0x38]
0x03E373F0: 012940f9  ldr x1, [x8, #0x50]
0x03E373F4: 28d44439  ldrb w8, [x1, #0x135]
0x03E373F8: 88000037  tbnz w8, #0, #0x3e37408
0x03E373FC: e00301aa  mov x0, x1
0x03E37400: 077dcc97  bl #0x315681c
0x03E37404: e10300aa  mov x1, x0
0x03E37408: 880240f9  ldr x8, [x20]
0x03E3740C: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37410: 290100b4  cbz x9, #0x3e37434
0x03E37414: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37418: 4a210091  add x10, x10, #8
0x03E3741C: 4b815ff8  ldur x11, [x10, #-8]
0x03E37420: 7f0101eb  cmp x11, x1
0x03E37424: 00010054  b.eq #0x3e37444
0x03E37428: 290500f1  subs x9, x9, #1
0x03E3742C: 4a410091  add x10, x10, #0x10
0x03E37430: 61ffff54  b.ne #0x3e3741c
0x03E37434: e00314aa  mov x0, x20
0x03E37438: e2031f2a  mov w2, wzr
0x03E3743C: b57dcc97  bl #0x3156b10
0x03E37440: 04000014  b #0x3e37450
0x03E37444: 490180b9  ldrsw x9, [x10]
0x03E37448: 0811098b  add x8, x8, x9, lsl #4
0x03E3744C: 00e10491  add x0, x8, #0x138
0x03E37450: 080440a9  ldp x8, x1, [x0]
0x03E37454: e00314aa  mov x0, x20
0x03E37458: 00013fd6  blr x8
0x03E3745C: f40300aa  mov x20, x0
0x03E37460: 601000b4  cbz x0, #0x3e3766c
0x03E37464: bcc001f0  adrp x28, #0x764e000
0x03E37468: 9c7344f9  ldr x28, [x28, #0x8e0]
0x03E3746C: f8031f2a  mov w24, wzr
0x03E37470: 880240f9  ldr x8, [x20]
0x03E37474: 810340f9  ldr x1, [x28]
0x03E37478: 095d4279  ldrh w9, [x8, #0x12e]
0x03E3747C: 290100b4  cbz x9, #0x3e374a0
0x03E37480: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37484: 4a210091  add x10, x10, #8
0x03E37488: 4b815ff8  ldur x11, [x10, #-8]
0x03E3748C: 7f0101eb  cmp x11, x1
0x03E37490: 00010054  b.eq #0x3e374b0
0x03E37494: 290500f1  subs x9, x9, #1
0x03E37498: 4a410091  add x10, x10, #0x10
0x03E3749C: 61ffff54  b.ne #0x3e37488
0x03E374A0: e00314aa  mov x0, x20
0x03E374A4: e2031f2a  mov w2, wzr
0x03E374A8: 9a7dcc97  bl #0x3156b10
0x03E374AC: 04000014  b #0x3e374bc
0x03E374B0: 490180b9  ldrsw x9, [x10]
0x03E374B4: 0811098b  add x8, x8, x9, lsl #4
0x03E374B8: 00e10491  add x0, x8, #0x138
0x03E374BC: 080440a9  ldp x8, x1, [x0]
0x03E374C0: e00314aa  mov x0, x20
0x03E374C4: 00013fd6  blr x8
0x03E374C8: 40080036  tbz w0, #0, #0x3e375d0
0x03E374CC: a81e40f9  ldr x8, [x21, #0x38]
0x03E374D0: 013140f9  ldr x1, [x8, #0x60]
0x03E374D4: 28d44439  ldrb w8, [x1, #0x135]
0x03E374D8: 88000037  tbnz w8, #0, #0x3e374e8
0x03E374DC: e00301aa  mov x0, x1
0x03E374E0: cf7ccc97  bl #0x315681c
0x03E374E4: e10300aa  mov x1, x0
0x03E374E8: 880240f9  ldr x8, [x20]
0x03E374EC: 095d4279  ldrh w9, [x8, #0x12e]
0x03E374F0: 290100b4  cbz x9, #0x3e37514
0x03E374F4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E374F8: 4a210091  add x10, x10, #8
0x03E374FC: 4b815ff8  ldur x11, [x10, #-8]
0x03E37500: 7f0101eb  cmp x11, x1
0x03E37504: 00010054  b.eq #0x3e37524
0x03E37508: 290500f1  subs x9, x9, #1
0x03E3750C: 4a410091  add x10, x10, #0x10
0x03E37510: 61ffff54  b.ne #0x3e374fc
0x03E37514: e00314aa  mov x0, x20
0x03E37518: e2031f2a  mov w2, wzr
0x03E3751C: 7d7dcc97  bl #0x3156b10
0x03E37520: 04000014  b #0x3e37530
0x03E37524: 490180b9  ldrsw x9, [x10]
0x03E37528: 0811098b  add x8, x8, x9, lsl #4
0x03E3752C: 00e10491  add x0, x8, #0x138
0x03E37530: 080440a9  ldp x8, x1, [x0]
0x03E37534: e00314aa  mov x0, x20
0x03E37538: 00013fd6  blr x8
0x03E3753C: e80240f9  ldr x8, [x23]
0x03E37540: 080900b4  cbz x8, #0x3e37660
0x03E37544: fa0300aa  mov x26, x0
0x03E37548: 002140f9  ldr x0, [x8, #0x40]
0x03E3754C: 090d40f9  ldr x9, [x8, #0x18]
0x03E37550: 021540f9  ldr x2, [x8, #0x28]
0x03E37554: e1031aaa  mov x1, x26
0x03E37558: 20013fd6  blr x9
0x03E3755C: 560800b4  cbz x22, #0x3e37664
0x03E37560: f903002a  mov w25, w0
0x03E37564: c02240f9  ldr x0, [x22, #0x40]
0x03E37568: c80e40f9  ldr x8, [x22, #0x18]
0x03E3756C: c21640f9  ldr x2, [x22, #0x28]
0x03E37570: e1031aaa  mov x1, x26
0x03E37574: 00013fd6  blr x8
0x03E37578: a81e40f9  ldr x8, [x21, #0x38]
0x03E3757C: fa03002a  mov w26, w0
0x03E37580: 004d40f9  ldr x0, [x8, #0x98]
0x03E37584: 08d44439  ldrb w8, [x0, #0x135]
0x03E37588: 48000037  tbnz w8, #0, #0x3e37590
0x03E3758C: a47ccc97  bl #0x315681c
0x03E37590: c425cd97  bl #0x3180ca0
0x03E37594: a81e40f9  ldr x8, [x21, #0x38]
0x03E37598: fb0300aa  mov x27, x0
0x03E3759C: 3803180b  add w24, w25, w24
0x03E375A0: 045140f9  ldr x4, [x8, #0xa0]
0x03E375A4: e1031a2a  mov w1, w26
0x03E375A8: e203192a  mov w2, w25
0x03E375AC: e303182a  mov w3, w24
0x03E375B0: a3372c94  bl #0x494543c
0x03E375B4: 530500b4  cbz x19, #0x3e3765c
0x03E375B8: a81e40f9  ldr x8, [x21, #0x38]
0x03E375BC: 025540f9  ldr x2, [x8, #0xa8]
0x03E375C0: e00313aa  mov x0, x19
0x03E375C4: e1031baa  mov x1, x27
0x03E375C8: e3332c94  bl #0x4944554
0x03E375CC: a9ffff17  b #0x3e37470
0x03E375D0: f5031faa  mov x21, xzr
0x03E375D4: 340300b4  cbz x20, #0x3e37638
0x03E375D8: aac001f0  adrp x10, #0x764e000
0x03E375DC: 880240f9  ldr x8, [x20]
0x03E375E0: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E375E4: 095d4279  ldrh w9, [x8, #0x12e]
0x03E375E8: 410140f9  ldr x1, [x10]
0x03E375EC: 290100b4  cbz x9, #0x3e37610
0x03E375F0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E375F4: 4a210091  add x10, x10, #8
0x03E375F8: 4b815ff8  ldur x11, [x10, #-8]
0x03E375FC: 7f0101eb  cmp x11, x1
0x03E37600: 00010054  b.eq #0x3e37620
0x03E37604: 290500f1  subs x9, x9, #1
0x03E37608: 4a410091  add x10, x10, #0x10
0x03E3760C: 61ffff54  b.ne #0x3e375f8
0x03E37610: e00314aa  mov x0, x20
0x03E37614: e2031f2a  mov w2, wzr
0x03E37618: 3e7dcc97  bl #0x3156b10
0x03E3761C: 04000014  b #0x3e3762c
0x03E37620: 490180b9  ldrsw x9, [x10]
0x03E37624: 0811098b  add x8, x8, x9, lsl #4
0x03E37628: 00e10491  add x0, x8, #0x138
0x03E3762C: 080440a9  ldp x8, x1, [x0]
0x03E37630: e00314aa  mov x0, x20
0x03E37634: 00013fd6  blr x8
0x03E37638: d50100b5  cbnz x21, #0x3e37670
0x03E3763C: e00313aa  mov x0, x19
0x03E37640: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03E37644: f65744a9  ldp x22, x21, [sp, #0x40]
0x03E37648: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03E3764C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03E37650: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03E37654: fe0746f8  ldr x30, [sp], #0x60
0x03E37658: c0035fd6  ret
0x03E3765C: 9425cd97  bl #0x3180cac
0x03E37660: 9325cd97  bl #0x3180cac
0x03E37664: 9225cd97  bl #0x3180cac
0x03E37668: 9125cd97  bl #0x3180cac
0x03E3766C: 9025cd97  bl #0x3180cac
0x03E37670: e00315aa  mov x0, x21
0x03E37674: 8c25cd97  bl #0x3180ca4
0x03E37678: 08000014  b #0x3e37698
0x03E3767C: 07000014  b #0x3e37698
0x03E37680: 06000014  b #0x3e37698
0x03E37684: 05000014  b #0x3e37698
0x03E37688: 04000014  b #0x3e37698
0x03E3768C: 03000014  b #0x3e37698
0x03E37690: 02000014  b #0x3e37698
0x03E37694: 01000014  b #0x3e37698
0x03E37698: f60300aa  mov x22, x0
0x03E3769C: 3f040071  cmp w1, #1
0x03E376A0: c1000054  b.ne #0x3e376b8
0x03E376A4: e00316aa  mov x0, x22
0x03E376A8: 9a5cce94  bl #0x71ce910
0x03E376AC: 150040f9  ldr x21, [x0]
0x03E376B0: 9c5cce94  bl #0x71ce920
0x03E376B4: c8ffff17  b #0x3e375d4
0x03E376B8: f5031faa  mov x21, xzr
0x03E376BC: 02000014  b #0x3e376c4
0x03E376C0: f60300aa  mov x22, x0
0x03E376C4: 340300b4  cbz x20, #0x3e37728
0x03E376C8: aac001f0  adrp x10, #0x764e000
0x03E376CC: 880240f9  ldr x8, [x20]
0x03E376D0: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E376D4: 095d4279  ldrh w9, [x8, #0x12e]
0x03E376D8: 410140f9  ldr x1, [x10]
0x03E376DC: 290100b4  cbz x9, #0x3e37700
0x03E376E0: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E376E4: 4a210091  add x10, x10, #8
0x03E376E8: 4b815ff8  ldur x11, [x10, #-8]
0x03E376EC: 7f0101eb  cmp x11, x1
0x03E376F0: 00010054  b.eq #0x3e37710
0x03E376F4: 290500f1  subs x9, x9, #1
0x03E376F8: 4a410091  add x10, x10, #0x10
0x03E376FC: 61ffff54  b.ne #0x3e376e8
0x03E37700: e00314aa  mov x0, x20
0x03E37704: e2031f2a  mov w2, wzr
0x03E37708: 027dcc97  bl #0x3156b10
0x03E3770C: 04000014  b #0x3e3771c
0x03E37710: 490180b9  ldrsw x9, [x10]
0x03E37714: 0811098b  add x8, x8, x9, lsl #4
0x03E37718: 00e10491  add x0, x8, #0x138
0x03E3771C: 080440a9  ldp x8, x1, [x0]
0x03E37720: e00314aa  mov x0, x20
0x03E37724: 00013fd6  blr x8
0x03E37728: 750000b5  cbnz x21, #0x3e37734
0x03E3772C: e00316aa  mov x0, x22
0x03E37730: 8ab8d097  bl #0x3265958
0x03E37734: e00315aa  mov x0, x21
0x03E37738: 5b25cd97  bl #0x3180ca4
0x03E3773C: 7647bf97  bl #0x2e09514

; Generic instantiation from Il2CppDumper script.json | RVA 0x3E37740 | MergeEngine.Util.WeightedItemUtil$$GenerateWeightedItemList<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
; native signature: MergeEngine_Util_WeightedItemList_TItem__o* MergeEngine_Util_WeightedItemUtil__GenerateWeightedItemList___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_TItemData__o* items, System_Func_TItemData__int__o* getWeightFunc, System_Func_TItemData__TItem__o* getItemFunc, const MethodInfo_3E37740* method);
; bytes=1588 sha256=8cc29814e4122b3a10e9082a66ad40e545165c3f96299794eaac939fb5b223ce status=arm64_complete_bound indexed_start=True
0x03E37740: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03E37744: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03E37748: fa6702a9  stp x26, x25, [sp, #0x20]
0x03E3774C: f85f03a9  stp x24, x23, [sp, #0x30]
0x03E37750: f65704a9  stp x22, x21, [sp, #0x40]
0x03E37754: f44f05a9  stp x20, x19, [sp, #0x50]
0x03E37758: fd030091  mov x29, sp
0x03E3775C: ffc301d1  sub sp, sp, #0x70
0x03E37760: a2831cf8  stur x2, [x29, #-0x38]
0x03E37764: 48d03bd5  mrs x8, tpidr_el0
0x03E37768: a80319f8  stur x8, [x29, #-0x70]
0x03E3776C: 081540f9  ldr x8, [x8, #0x28]
0x03E37770: f40303aa  mov x20, x3
0x03E37774: f60301aa  mov x22, x1
0x03E37778: f70300aa  mov x23, x0
0x03E3777C: a8831ff8  stur x8, [x29, #-8]
0x03E37780: 781c40f9  ldr x24, [x3, #0x38]
0x03E37784: 980100b5  cbnz x24, #0x3e377b4
0x03E37788: a0c001f0  adrp x0, #0x764e000
0x03E3778C: 006444f9  ldr x0, [x0, #0x8c8]
0x03E37790: a224cd97  bl #0x3180a18
0x03E37794: a0c001f0  adrp x0, #0x764e000
0x03E37798: 007044f9  ldr x0, [x0, #0x8e0]
0x03E3779C: 9f24cd97  bl #0x3180a18
0x03E377A0: 981e40f9  ldr x24, [x20, #0x38]
0x03E377A4: 980000b5  cbnz x24, #0x3e377b4
0x03E377A8: e00314aa  mov x0, x20
0x03E377AC: 337ccc97  bl #0x3156878
0x03E377B0: 981e40f9  ldr x24, [x20, #0x38]
0x03E377B4: 083b40f9  ldr x8, [x24, #0x70]
0x03E377B8: 094b40f9  ldr x9, [x24, #0x90]
0x03E377BC: 02fd40b9  ldr w2, [x8, #0xfc]
0x03E377C0: 3bfd40b9  ldr w27, [x9, #0xfc]
0x03E377C4: e8030091  mov x8, sp
0x03E377C8: 493c0091  add x9, x2, #0xf
0x03E377CC: 29717c92  and x9, x9, #0x1fffffff0
0x03E377D0: 150109cb  sub x21, x8, x9
0x03E377D4: bf020091  mov sp, x21
0x03E377D8: e8030091  mov x8, sp
0x03E377DC: 080109cb  sub x8, x8, x9
0x03E377E0: a8831bf8  stur x8, [x29, #-0x48]
0x03E377E4: 1f010091  mov sp, x8
0x03E377E8: e8030091  mov x8, sp
0x03E377EC: 080109cb  sub x8, x8, x9
0x03E377F0: a8831af8  stur x8, [x29, #-0x58]
0x03E377F4: 1f010091  mov sp, x8
0x03E377F8: 6a3f0091  add x10, x27, #0xf
0x03E377FC: e8030091  mov x8, sp
0x03E37800: 5a717c92  and x26, x10, #0x1fffffff0
0x03E37804: 1c011acb  sub x28, x8, x26
0x03E37808: 9f030091  mov sp, x28
0x03E3780C: e8030091  mov x8, sp
0x03E37810: 19011acb  sub x25, x8, x26
0x03E37814: 3f030091  mov sp, x25
0x03E37818: e8030091  mov x8, sp
0x03E3781C: 130109cb  sub x19, x8, x9
0x03E37820: 7f020091  mov sp, x19
0x03E37824: e00313aa  mov x0, x19
0x03E37828: e1031f2a  mov w1, wzr
0x03E3782C: a2031df8  stur x2, [x29, #-0x30]
0x03E37830: 5c5cce94  bl #0x71ce9a0
0x03E37834: e8030091  mov x8, sp
0x03E37838: 00011acb  sub x0, x8, x26
0x03E3783C: 1f000091  mov sp, x0
0x03E37840: e1031f2a  mov w1, wzr
0x03E37844: e2031baa  mov x2, x27
0x03E37848: a0ef39a9  stp x0, x27, [x29, #-0x68]
0x03E3784C: 555cce94  bl #0x71ce9a0
0x03E37850: 000340f9  ldr x0, [x24]
0x03E37854: 08d44439  ldrb w8, [x0, #0x135]
0x03E37858: 48000037  tbnz w8, #0, #0x3e37860
0x03E3785C: f07bcc97  bl #0x315681c
0x03E37860: 1025cd97  bl #0x3180ca0
0x03E37864: 881e40f9  ldr x8, [x20, #0x38]
0x03E37868: f80300aa  mov x24, x0
0x03E3786C: 010540f9  ldr x1, [x8, #8]
0x03E37870: 280040f9  ldr x8, [x1]
0x03E37874: 00013fd6  blr x8
0x03E37878: 182100b4  cbz x24, #0x3e37c98
0x03E3787C: e00318aa  mov x0, x24
0x03E37880: 160c01f8  str x22, [x0, #0x10]!
0x03E37884: e10316aa  mov x1, x22
0x03E37888: a0031bf8  stur x0, [x29, #-0x50]
0x03E3788C: 4e24cd97  bl #0x31809c4
0x03E37890: 881e40f9  ldr x8, [x20, #0x38]
0x03E37894: 001540f9  ldr x0, [x8, #0x28]
0x03E37898: 08d44439  ldrb w8, [x0, #0x135]
0x03E3789C: 48000037  tbnz w8, #0, #0x3e378a4
0x03E378A0: df7bcc97  bl #0x315681c
0x03E378A4: ff24cd97  bl #0x3180ca0
0x03E378A8: 881e40f9  ldr x8, [x20, #0x38]
0x03E378AC: e10318aa  mov x1, x24
0x03E378B0: f60300aa  mov x22, x0
0x03E378B4: 031940f9  ldr x3, [x8, #0x30]
0x03E378B8: 021140f9  ldr x2, [x8, #0x20]
0x03E378BC: 690040f9  ldr x9, [x3]
0x03E378C0: 20013fd6  blr x9
0x03E378C4: 881e40f9  ldr x8, [x20, #0x38]
0x03E378C8: e00317aa  mov x0, x23
0x03E378CC: e10316aa  mov x1, x22
0x03E378D0: 021d40f9  ldr x2, [x8, #0x38]
0x03E378D4: 480040f9  ldr x8, [x2]
0x03E378D8: 00013fd6  blr x8
0x03E378DC: 881e40f9  ldr x8, [x20, #0x38]
0x03E378E0: 002140f9  ldr x0, [x8, #0x40]
0x03E378E4: 08d44439  ldrb w8, [x0, #0x135]
0x03E378E8: 48000037  tbnz w8, #0, #0x3e378f0
0x03E378EC: cc7bcc97  bl #0x315681c
0x03E378F0: ec24cd97  bl #0x3180ca0
0x03E378F4: 881e40f9  ldr x8, [x20, #0x38]
0x03E378F8: f60300aa  mov x22, x0
0x03E378FC: 012540f9  ldr x1, [x8, #0x48]
0x03E37900: 280040f9  ldr x8, [x1]
0x03E37904: 00013fd6  blr x8
0x03E37908: 971c00b4  cbz x23, #0x3e37c98
0x03E3790C: 881e40f9  ldr x8, [x20, #0x38]
0x03E37910: 012940f9  ldr x1, [x8, #0x50]
0x03E37914: 28d44439  ldrb w8, [x1, #0x135]
0x03E37918: 88000037  tbnz w8, #0, #0x3e37928
0x03E3791C: e00301aa  mov x0, x1
0x03E37920: bf7bcc97  bl #0x315681c
0x03E37924: e10300aa  mov x1, x0
0x03E37928: e80240f9  ldr x8, [x23]
0x03E3792C: b6031cf8  stur x22, [x29, #-0x40]
0x03E37930: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37934: 290100b4  cbz x9, #0x3e37958
0x03E37938: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E3793C: 4a210091  add x10, x10, #8
0x03E37940: 4b815ff8  ldur x11, [x10, #-8]
0x03E37944: 7f0101eb  cmp x11, x1
0x03E37948: 00010054  b.eq #0x3e37968
0x03E3794C: 290500f1  subs x9, x9, #1
0x03E37950: 4a410091  add x10, x10, #0x10
0x03E37954: 61ffff54  b.ne #0x3e37940
0x03E37958: e00317aa  mov x0, x23
0x03E3795C: e2031f2a  mov w2, wzr
0x03E37960: 6c7ccc97  bl #0x3156b10
0x03E37964: 04000014  b #0x3e37974
0x03E37968: 490180b9  ldrsw x9, [x10]
0x03E3796C: 0811098b  add x8, x8, x9, lsl #4
0x03E37970: 00e10491  add x0, x8, #0x138
0x03E37974: 080440a9  ldp x8, x1, [x0]
0x03E37978: e00317aa  mov x0, x23
0x03E3797C: 00013fd6  blr x8
0x03E37980: f60300aa  mov x22, x0
0x03E37984: c01800b4  cbz x0, #0x3e37c9c
0x03E37988: fa031f2a  mov w26, wzr
0x03E3798C: c80240f9  ldr x8, [x22]
0x03E37990: aac001f0  adrp x10, #0x764e000
0x03E37994: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37998: 4a7144f9  ldr x10, [x10, #0x8e0]
0x03E3799C: 410140f9  ldr x1, [x10]
0x03E379A0: 290100b4  cbz x9, #0x3e379c4
0x03E379A4: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E379A8: 4a210091  add x10, x10, #8
0x03E379AC: 4b815ff8  ldur x11, [x10, #-8]
0x03E379B0: 7f0101eb  cmp x11, x1
0x03E379B4: 00010054  b.eq #0x3e379d4
0x03E379B8: 290500f1  subs x9, x9, #1
0x03E379BC: 4a410091  add x10, x10, #0x10
0x03E379C0: 61ffff54  b.ne #0x3e379ac
0x03E379C4: e00316aa  mov x0, x22
0x03E379C8: e2031f2a  mov w2, wzr
0x03E379CC: 517ccc97  bl #0x3156b10
0x03E379D0: 04000014  b #0x3e379e0
0x03E379D4: 490180b9  ldrsw x9, [x10]
0x03E379D8: 0811098b  add x8, x8, x9, lsl #4
0x03E379DC: 00e10491  add x0, x8, #0x138
0x03E379E0: 080440a9  ldp x8, x1, [x0]
0x03E379E4: e00316aa  mov x0, x22
0x03E379E8: 00013fd6  blr x8
0x03E379EC: e00f0036  tbz w0, #0, #0x3e37be8
0x03E379F0: 881e40f9  ldr x8, [x20, #0x38]
0x03E379F4: 013140f9  ldr x1, [x8, #0x60]
0x03E379F8: 28d44439  ldrb w8, [x1, #0x135]
0x03E379FC: 88000037  tbnz w8, #0, #0x3e37a0c
0x03E37A00: e00301aa  mov x0, x1
0x03E37A04: 867bcc97  bl #0x315681c
0x03E37A08: e10300aa  mov x1, x0
0x03E37A0C: c80240f9  ldr x8, [x22]
0x03E37A10: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37A14: 290100b4  cbz x9, #0x3e37a38
0x03E37A18: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37A1C: 4a210091  add x10, x10, #8
0x03E37A20: 4b815ff8  ldur x11, [x10, #-8]
0x03E37A24: 7f0101eb  cmp x11, x1
0x03E37A28: 00010054  b.eq #0x3e37a48
0x03E37A2C: 290500f1  subs x9, x9, #1
0x03E37A30: 4a410091  add x10, x10, #0x10
0x03E37A34: 61ffff54  b.ne #0x3e37a20
0x03E37A38: e00316aa  mov x0, x22
0x03E37A3C: e2031f2a  mov w2, wzr
0x03E37A40: 347ccc97  bl #0x3156b10
0x03E37A44: 04000014  b #0x3e37a54
0x03E37A48: 490180b9  ldrsw x9, [x10]
0x03E37A4C: 0811098b  add x8, x8, x9, lsl #4
0x03E37A50: 00e10491  add x0, x8, #0x138
0x03E37A54: b5831df8  stur x21, [x29, #-0x28]
0x03E37A58: 010440f9  ldr x1, [x0, #8]
0x03E37A5C: 20a040a9  ldp x0, x8, [x1, #8]
0x03E37A60: a3a300d1  sub x3, x29, #0x28
0x03E37A64: e20316aa  mov x2, x22
0x03E37A68: e40315aa  mov x4, x21
0x03E37A6C: 00013fd6  blr x8
0x03E37A70: b7035df8  ldur x23, [x29, #-0x30]
0x03E37A74: e00313aa  mov x0, x19
0x03E37A78: e10315aa  mov x1, x21
0x03E37A7C: e20317aa  mov x2, x23
0x03E37A80: bc5bce94  bl #0x71ce970
0x03E37A84: a86f7ba9  ldp x8, x27, [x29, #-0x50]
0x03E37A88: e10313aa  mov x1, x19
0x03E37A8C: e20317aa  mov x2, x23
0x03E37A90: 180140f9  ldr x24, [x8]
0x03E37A94: e0031baa  mov x0, x27
0x03E37A98: b65bce94  bl #0x71ce970
0x03E37A9C: b80f00b4  cbz x24, #0x3e37c90
0x03E37AA0: 881e40f9  ldr x8, [x20, #0x38]
0x03E37AA4: 093940f9  ldr x9, [x8, #0x70]
0x03E37AA8: 2a2940b9  ldr w10, [x9, #0x28]
0x03E37AAC: e9031baa  mov x9, x27
0x03E37AB0: 4a00f837  tbnz w10, #0x1f, #0x3e37ab8
0x03E37AB4: 690340f9  ldr x9, [x27]
0x03E37AB8: 013d40f9  ldr x1, [x8, #0x78]
0x03E37ABC: 200040f9  ldr x0, [x1]
0x03E37AC0: a9831df8  stur x9, [x29, #-0x28]
0x03E37AC4: 280840f9  ldr x8, [x1, #0x10]
0x03E37AC8: a3a300d1  sub x3, x29, #0x28
0x03E37ACC: a43300d1  sub x4, x29, #0xc
0x03E37AD0: e20318aa  mov x2, x24
0x03E37AD4: 00013fd6  blr x8
0x03E37AD8: b8835af8  ldur x24, [x29, #-0x58]
0x03E37ADC: a2035df8  ldur x2, [x29, #-0x30]
0x03E37AE0: bb435fb8  ldur w27, [x29, #-0xc]
0x03E37AE4: e10313aa  mov x1, x19
0x03E37AE8: e00318aa  mov x0, x24
0x03E37AEC: a15bce94  bl #0x71ce970
0x03E37AF0: a8835cf8  ldur x8, [x29, #-0x38]
0x03E37AF4: 080d00b4  cbz x8, #0x3e37c94
0x03E37AF8: 881e40f9  ldr x8, [x20, #0x38]
0x03E37AFC: 093940f9  ldr x9, [x8, #0x70]
0x03E37B00: 2a2940b9  ldr w10, [x9, #0x28]
0x03E37B04: e90318aa  mov x9, x24
0x03E37B08: 4a00f837  tbnz w10, #0x1f, #0x3e37b10
0x03E37B0C: 090340f9  ldr x9, [x24]
0x03E37B10: 014540f9  ldr x1, [x8, #0x88]
0x03E37B14: f70315aa  mov x23, x21
0x03E37B18: 200040f9  ldr x0, [x1]
0x03E37B1C: a9f33da9  stp x9, x28, [x29, #-0x28]
0x03E37B20: 280840f9  ldr x8, [x1, #0x10]
0x03E37B24: a2835cf8  ldur x2, [x29, #-0x38]
0x03E37B28: a3a300d1  sub x3, x29, #0x28
0x03E37B2C: e4031caa  mov x4, x28
0x03E37B30: 00013fd6  blr x8
0x03E37B34: b5e379a9  ldp x21, x24, [x29, #-0x68]
0x03E37B38: e1031caa  mov x1, x28
0x03E37B3C: e00315aa  mov x0, x21
0x03E37B40: e20318aa  mov x2, x24
0x03E37B44: 8b5bce94  bl #0x71ce970
0x03E37B48: e00319aa  mov x0, x25
0x03E37B4C: e10315aa  mov x1, x21
0x03E37B50: e20318aa  mov x2, x24
0x03E37B54: 875bce94  bl #0x71ce970
0x03E37B58: 881e40f9  ldr x8, [x20, #0x38]
0x03E37B5C: 004d40f9  ldr x0, [x8, #0x98]
0x03E37B60: 08d44439  ldrb w8, [x0, #0x135]
0x03E37B64: 48000037  tbnz w8, #0, #0x3e37b6c
0x03E37B68: 2d7bcc97  bl #0x315681c
0x03E37B6C: f50317aa  mov x21, x23
0x03E37B70: 4c24cd97  bl #0x3180ca0
0x03E37B74: 891e40f9  ldr x9, [x20, #0x38]
0x03E37B78: f80300aa  mov x24, x0
0x03E37B7C: 284940f9  ldr x8, [x9, #0x90]
0x03E37B80: 0a2940b9  ldr w10, [x8, #0x28]
0x03E37B84: e80319aa  mov x8, x25
0x03E37B88: 4a00f837  tbnz w10, #0x1f, #0x3e37b90
0x03E37B8C: 280340f9  ldr x8, [x25]
0x03E37B90: 215140f9  ldr x1, [x9, #0xa0]
0x03E37B94: 7a031a0b  add w26, w27, w26
0x03E37B98: 200040f9  ldr x0, [x1]
0x03E37B9C: a8831df8  stur x8, [x29, #-0x28]
0x03E37BA0: a83300d1  sub x8, x29, #0xc
0x03E37BA4: a8031ef8  stur x8, [x29, #-0x20]
0x03E37BA8: a84300d1  sub x8, x29, #0x10
0x03E37BAC: ba6f3e29  stp w26, w27, [x29, #-0x10]
0x03E37BB0: a8831ef8  stur x8, [x29, #-0x18]
0x03E37BB4: 280840f9  ldr x8, [x1, #0x10]
0x03E37BB8: a3a300d1  sub x3, x29, #0x28
0x03E37BBC: a44300d1  sub x4, x29, #0x10
0x03E37BC0: e20318aa  mov x2, x24
0x03E37BC4: 00013fd6  blr x8
0x03E37BC8: a0035cf8  ldur x0, [x29, #-0x40]
0x03E37BCC: 000600b4  cbz x0, #0x3e37c8c
0x03E37BD0: 881e40f9  ldr x8, [x20, #0x38]
0x03E37BD4: 025540f9  ldr x2, [x8, #0xa8]
0x03E37BD8: 480040f9  ldr x8, [x2]
0x03E37BDC: e10318aa  mov x1, x24
0x03E37BE0: 00013fd6  blr x8
0x03E37BE4: 6affff17  b #0x3e3798c
0x03E37BE8: f3031faa  mov x19, xzr
0x03E37BEC: 360300b4  cbz x22, #0x3e37c50
0x03E37BF0: aac001f0  adrp x10, #0x764e000
0x03E37BF4: c80240f9  ldr x8, [x22]
0x03E37BF8: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E37BFC: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37C00: 410140f9  ldr x1, [x10]
0x03E37C04: 290100b4  cbz x9, #0x3e37c28
0x03E37C08: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37C0C: 4a210091  add x10, x10, #8
0x03E37C10: 4b815ff8  ldur x11, [x10, #-8]
0x03E37C14: 7f0101eb  cmp x11, x1
0x03E37C18: 00010054  b.eq #0x3e37c38
0x03E37C1C: 290500f1  subs x9, x9, #1
0x03E37C20: 4a410091  add x10, x10, #0x10
0x03E37C24: 61ffff54  b.ne #0x3e37c10
0x03E37C28: e00316aa  mov x0, x22
0x03E37C2C: e2031f2a  mov w2, wzr
0x03E37C30: b87bcc97  bl #0x3156b10
0x03E37C34: 04000014  b #0x3e37c44
0x03E37C38: 490180b9  ldrsw x9, [x10]
0x03E37C3C: 0811098b  add x8, x8, x9, lsl #4
0x03E37C40: 00e10491  add x0, x8, #0x138
0x03E37C44: 080440a9  ldp x8, x1, [x0]
0x03E37C48: e00316aa  mov x0, x22
0x03E37C4C: 00013fd6  blr x8
0x03E37C50: 930200b5  cbnz x19, #0x3e37ca0
0x03E37C54: a80359f8  ldur x8, [x29, #-0x70]
0x03E37C58: 081540f9  ldr x8, [x8, #0x28]
0x03E37C5C: a9835ff8  ldur x9, [x29, #-8]
0x03E37C60: a0035cf8  ldur x0, [x29, #-0x40]
0x03E37C64: 1f0109eb  cmp x8, x9
0x03E37C68: 01020054  b.ne #0x3e37ca8
0x03E37C6C: bf030091  mov sp, x29
0x03E37C70: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03E37C74: f65744a9  ldp x22, x21, [sp, #0x40]
0x03E37C78: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03E37C7C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03E37C80: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03E37C84: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03E37C88: c0035fd6  ret
0x03E37C8C: 0824cd97  bl #0x3180cac
0x03E37C90: 0724cd97  bl #0x3180cac
0x03E37C94: 0624cd97  bl #0x3180cac
0x03E37C98: 0524cd97  bl #0x3180cac
0x03E37C9C: 0424cd97  bl #0x3180cac
0x03E37CA0: e00313aa  mov x0, x19
0x03E37CA4: 0024cd97  bl #0x3180ca4
0x03E37CA8: 3a5bce94  bl #0x71ce990
0x03E37CAC: 08000014  b #0x3e37ccc
0x03E37CB0: 07000014  b #0x3e37ccc
0x03E37CB4: 06000014  b #0x3e37ccc
0x03E37CB8: 05000014  b #0x3e37ccc
0x03E37CBC: 04000014  b #0x3e37ccc
0x03E37CC0: 03000014  b #0x3e37ccc
0x03E37CC4: 02000014  b #0x3e37ccc
0x03E37CC8: 01000014  b #0x3e37ccc
0x03E37CCC: f40300aa  mov x20, x0
0x03E37CD0: 3f040071  cmp w1, #1
0x03E37CD4: c1000054  b.ne #0x3e37cec
0x03E37CD8: e00314aa  mov x0, x20
0x03E37CDC: 0d5bce94  bl #0x71ce910
0x03E37CE0: 130040f9  ldr x19, [x0]
0x03E37CE4: 0f5bce94  bl #0x71ce920
0x03E37CE8: c1ffff17  b #0x3e37bec
0x03E37CEC: f3031faa  mov x19, xzr
0x03E37CF0: 02000014  b #0x3e37cf8
0x03E37CF4: f40300aa  mov x20, x0
0x03E37CF8: 360300b4  cbz x22, #0x3e37d5c
0x03E37CFC: aac001f0  adrp x10, #0x764e000
0x03E37D00: c80240f9  ldr x8, [x22]
0x03E37D04: 4a6544f9  ldr x10, [x10, #0x8c8]
0x03E37D08: 095d4279  ldrh w9, [x8, #0x12e]
0x03E37D0C: 410140f9  ldr x1, [x10]
0x03E37D10: 290100b4  cbz x9, #0x3e37d34
0x03E37D14: 0a5940f9  ldr x10, [x8, #0xb0]
0x03E37D18: 4a210091  add x10, x10, #8
0x03E37D1C: 4b815ff8  ldur x11, [x10, #-8]
0x03E37D20: 7f0101eb  cmp x11, x1
0x03E37D24: 00010054  b.eq #0x3e37d44
0x03E37D28: 290500f1  subs x9, x9, #1
0x03E37D2C: 4a410091  add x10, x10, #0x10
0x03E37D30: 61ffff54  b.ne #0x3e37d1c
0x03E37D34: e00316aa  mov x0, x22
0x03E37D38: e2031f2a  mov w2, wzr
0x03E37D3C: 757bcc97  bl #0x3156b10
0x03E37D40: 04000014  b #0x3e37d50
0x03E37D44: 490180b9  ldrsw x9, [x10]
0x03E37D48: 0811098b  add x8, x8, x9, lsl #4
0x03E37D4C: 00e10491  add x0, x8, #0x138
0x03E37D50: 080440a9  ldp x8, x1, [x0]
0x03E37D54: e00316aa  mov x0, x22
0x03E37D58: 00013fd6  blr x8
0x03E37D5C: 730000b5  cbnz x19, #0x3e37d68
0x03E37D60: e00314aa  mov x0, x20
0x03E37D64: fdb6d097  bl #0x3265958
0x03E37D68: e00313aa  mov x0, x19
0x03E37D6C: ce23cd97  bl #0x3180ca4
0x03E37D70: e945bf97  bl #0x2e09514

