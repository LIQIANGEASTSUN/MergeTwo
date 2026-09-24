; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25902 .MergeBoardItemsEntityFactory.<>c__DisplayClass11_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A95F90 | public void .ctor() { }
; bytes=8 sha256=b0ab3932e7bc2aaaa360c7ead092eabe7d43a4f92d98860422cd8c8a504326fe status=arm64_complete_bound indexed_start=True
0x06A95F90: e1031faa  mov x1, xzr
0x06A95F94: 9a11b117  b #0x56da5fc

; RVA 0x6A97B14 | internal MergeComponent <CreateBoardItemEntity>b__0() { }
; bytes=180 sha256=68fc1251179f9312aba48ae8749e168e2d3a9c2b20deb947aa9d7cea4c4f8b72 status=arm64_complete_bound indexed_start=True
0x06A97B14: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A97B18: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A97B1C: 939400f0  adrp x19, #0x7d2a000
0x06A97B20: 68626039  ldrb w8, [x19, #0x818]
0x06A97B24: f40300aa  mov x20, x0
0x06A97B28: c8000037  tbnz w8, #0, #0x6a97b40
0x06A97B2C: 205f00f0  adrp x0, #0x767e000
0x06A97B30: 00a442f9  ldr x0, [x0, #0x548]
0x06A97B34: b9a31b97  bl #0x3180a18
0x06A97B38: 28008052  movz w8, #0x1
0x06A97B3C: 68622039  strb w8, [x19, #0x818]
0x06A97B40: 930e40f9  ldr x19, [x20, #0x18]
0x06A97B44: 130400b4  cbz x19, #0x6a97bc4
0x06A97B48: 2a5f00f0  adrp x10, #0x767e000
0x06A97B4C: 680240f9  ldr x8, [x19]
0x06A97B50: 4aa542f9  ldr x10, [x10, #0x548]
0x06A97B54: 940a40f9  ldr x20, [x20, #0x10]
0x06A97B58: 095d4279  ldrh w9, [x8, #0x12e]
0x06A97B5C: 410140f9  ldr x1, [x10]
0x06A97B60: 290100b4  cbz x9, #0x6a97b84
0x06A97B64: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A97B68: 4a210091  add x10, x10, #8
0x06A97B6C: 4b815ff8  ldur x11, [x10, #-8]
0x06A97B70: 7f0101eb  cmp x11, x1
0x06A97B74: 00010054  b.eq #0x6a97b94
0x06A97B78: 290500f1  subs x9, x9, #1
0x06A97B7C: 4a410091  add x10, x10, #0x10
0x06A97B80: 61ffff54  b.ne #0x6a97b6c
0x06A97B84: e2008052  movz w2, #0x7
0x06A97B88: e00313aa  mov x0, x19
0x06A97B8C: e1fb1a97  bl #0x3156b10
0x06A97B90: 05000014  b #0x6a97ba4
0x06A97B94: 490140b9  ldr w9, [x10]
0x06A97B98: 291d0011  add w9, w9, #7
0x06A97B9C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A97BA0: 00e10491  add x0, x8, #0x138
0x06A97BA4: 080440a9  ldp x8, x1, [x0]
0x06A97BA8: e00313aa  mov x0, x19
0x06A97BAC: 00013fd6  blr x8
0x06A97BB0: b40000b4  cbz x20, #0x6a97bc4
0x06A97BB4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A97BB8: e10300aa  mov x1, x0
0x06A97BBC: fe0742f8  ldr x30, [sp], #0x20
0x06A97BC0: fdfdff17  b #0x6a973b4
0x06A97BC4: 3aa41b97  bl #0x3180cac

; RVA 0x6A97BC8 | internal ProducerComponent <CreateBoardItemEntity>b__1() { }
; bytes=56 sha256=f7d3ece0ed9c2b27dc60a2d72dc5f50b5e200a4c0eaa9a03d6cf95fb722a84df status=arm64_complete_bound indexed_start=True
0x06A97BC8: ffc300d1  sub sp, sp, #0x30
0x06A97BCC: fe4f02a9  stp x30, x19, [sp, #0x20]
0x06A97BD0: 090840f9  ldr x9, [x0, #0x10]
0x06A97BD4: 490100b4  cbz x9, #0x6a97bfc
0x06A97BD8: 010c40f9  ldr x1, [x0, #0x18]
0x06A97BDC: f30308aa  mov x19, x8
0x06A97BE0: e8030091  mov x8, sp
0x06A97BE4: eafaff97  bl #0x6a9678c
0x06A97BE8: e10340ad  ldp q1, q0, [sp]
0x06A97BEC: 610200ad  stp q1, q0, [x19]
0x06A97BF0: fe4f42a9  ldp x30, x19, [sp, #0x20]
0x06A97BF4: ffc30091  add sp, sp, #0x30
0x06A97BF8: c0035fd6  ret
0x06A97BFC: 2ca41b97  bl #0x3180cac

; RVA 0x6A97C00 | internal TimeCycleComponent <CreateBoardItemEntity>b__2() { }
; bytes=212 sha256=d6f1810126893cc8c4e270652f94e9ea884bf70c5b3af685dbc71006afc7bb07 status=arm64_complete_bound indexed_start=True
0x06A97C00: ffc301d1  sub sp, sp, #0x70
0x06A97C04: fe5705a9  stp x30, x21, [sp, #0x50]
0x06A97C08: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A97C0C: 949400f0  adrp x20, #0x7d2a000
0x06A97C10: 89666039  ldrb w9, [x20, #0x819]
0x06A97C14: f50300aa  mov x21, x0
0x06A97C18: f30308aa  mov x19, x8
0x06A97C1C: c9000037  tbnz w9, #0, #0x6a97c34
0x06A97C20: 205f00f0  adrp x0, #0x767e000
0x06A97C24: 00a442f9  ldr x0, [x0, #0x548]
0x06A97C28: 7ca31b97  bl #0x3180a18
0x06A97C2C: 28008052  movz w8, #0x1
0x06A97C30: 88662039  strb w8, [x20, #0x819]
0x06A97C34: b40e40f9  ldr x20, [x21, #0x18]
0x06A97C38: d40400b4  cbz x20, #0x6a97cd0
0x06A97C3C: 2a5f00f0  adrp x10, #0x767e000
0x06A97C40: 880240f9  ldr x8, [x20]
0x06A97C44: 4aa542f9  ldr x10, [x10, #0x548]
0x06A97C48: b50a40f9  ldr x21, [x21, #0x10]
0x06A97C4C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A97C50: 410140f9  ldr x1, [x10]
0x06A97C54: 290100b4  cbz x9, #0x6a97c78
0x06A97C58: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A97C5C: 4a210091  add x10, x10, #8
0x06A97C60: 4b815ff8  ldur x11, [x10, #-8]
0x06A97C64: 7f0101eb  cmp x11, x1
0x06A97C68: 00010054  b.eq #0x6a97c88
0x06A97C6C: 290500f1  subs x9, x9, #1
0x06A97C70: 4a410091  add x10, x10, #0x10
0x06A97C74: 61ffff54  b.ne #0x6a97c60
0x06A97C78: e00314aa  mov x0, x20
0x06A97C7C: e2031f2a  mov w2, wzr
0x06A97C80: a4fb1a97  bl #0x3156b10
0x06A97C84: 04000014  b #0x6a97c94
0x06A97C88: 490180b9  ldrsw x9, [x10]
0x06A97C8C: 0811098b  add x8, x8, x9, lsl #4
0x06A97C90: 00e10491  add x0, x8, #0x138
0x06A97C94: 080440a9  ldp x8, x1, [x0]
0x06A97C98: e00314aa  mov x0, x20
0x06A97C9C: 00013fd6  blr x8
0x06A97CA0: 950100b4  cbz x21, #0x6a97cd0
0x06A97CA4: e8030091  mov x8, sp
0x06A97CA8: e10300aa  mov x1, x0
0x06A97CAC: e7fdff97  bl #0x6a97448
0x06A97CB0: e1030091  mov x1, sp
0x06A97CB4: 020a8052  movz w2, #0x50
0x06A97CB8: e00313aa  mov x0, x19
0x06A97CBC: 2ddb1c94  bl #0x71ce970
0x06A97CC0: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A97CC4: fe5745a9  ldp x30, x21, [sp, #0x50]
0x06A97CC8: ffc30191  add sp, sp, #0x70
0x06A97CCC: c0035fd6  ret
0x06A97CD0: f7a31b97  bl #0x3180cac

; RVA 0x6A97CD4 | internal SpawnerComponent <CreateBoardItemEntity>b__3() { }
; bytes=64 sha256=217ee5370e158ef2ac8460377bd48c56fe565d427216bbda863bcba7fd32611a status=arm64_complete_bound indexed_start=True
0x06A97CD4: ffc300d1  sub sp, sp, #0x30
0x06A97CD8: fe4f02a9  stp x30, x19, [sp, #0x20]
0x06A97CDC: 090840f9  ldr x9, [x0, #0x10]
0x06A97CE0: 890100b4  cbz x9, #0x6a97d10
0x06A97CE4: 010c40f9  ldr x1, [x0, #0x18]
0x06A97CE8: f30308aa  mov x19, x8
0x06A97CEC: e8230091  add x8, sp, #8
0x06A97CF0: e8fbff97  bl #0x6a96c90
0x06A97CF4: e80f40f9  ldr x8, [sp, #0x18]
0x06A97CF8: e083c03c  ldur q0, [sp, #8]
0x06A97CFC: 680a00f9  str x8, [x19, #0x10]
0x06A97D00: 6002803d  str q0, [x19]
0x06A97D04: fe4f42a9  ldp x30, x19, [sp, #0x20]
0x06A97D08: ffc30091  add sp, sp, #0x30
0x06A97D0C: c0035fd6  ret
0x06A97D10: e7a31b97  bl #0x3180cac

; RVA 0x6A97D14 | internal TimeCycleComponent <CreateBoardItemEntity>b__4() { }
; bytes=216 sha256=5e42bf03564c3f64dc2cd799c98c78c4e4b2097997e568efcab892d843baadf4 status=arm64_complete_bound indexed_start=True
0x06A97D14: ffc301d1  sub sp, sp, #0x70
0x06A97D18: fe5705a9  stp x30, x21, [sp, #0x50]
0x06A97D1C: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A97D20: 949400f0  adrp x20, #0x7d2a000
0x06A97D24: 896a6039  ldrb w9, [x20, #0x81a]
0x06A97D28: f50300aa  mov x21, x0
0x06A97D2C: f30308aa  mov x19, x8
0x06A97D30: c9000037  tbnz w9, #0, #0x6a97d48
0x06A97D34: 205f00f0  adrp x0, #0x767e000
0x06A97D38: 00a442f9  ldr x0, [x0, #0x548]
0x06A97D3C: 37a31b97  bl #0x3180a18
0x06A97D40: 28008052  movz w8, #0x1
0x06A97D44: 886a2039  strb w8, [x20, #0x81a]
0x06A97D48: b40e40f9  ldr x20, [x21, #0x18]
0x06A97D4C: f40400b4  cbz x20, #0x6a97de8
0x06A97D50: 2a5f00f0  adrp x10, #0x767e000
0x06A97D54: 880240f9  ldr x8, [x20]
0x06A97D58: 4aa542f9  ldr x10, [x10, #0x548]
0x06A97D5C: b50a40f9  ldr x21, [x21, #0x10]
0x06A97D60: 095d4279  ldrh w9, [x8, #0x12e]
0x06A97D64: 410140f9  ldr x1, [x10]
0x06A97D68: 290100b4  cbz x9, #0x6a97d8c
0x06A97D6C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A97D70: 4a210091  add x10, x10, #8
0x06A97D74: 4b815ff8  ldur x11, [x10, #-8]
0x06A97D78: 7f0101eb  cmp x11, x1
0x06A97D7C: 00010054  b.eq #0x6a97d9c
0x06A97D80: 290500f1  subs x9, x9, #1
0x06A97D84: 4a410091  add x10, x10, #0x10
0x06A97D88: 61ffff54  b.ne #0x6a97d74
0x06A97D8C: 22008052  movz w2, #0x1
0x06A97D90: e00314aa  mov x0, x20
0x06A97D94: 5ffb1a97  bl #0x3156b10
0x06A97D98: 05000014  b #0x6a97dac
0x06A97D9C: 490140b9  ldr w9, [x10]
0x06A97DA0: 29050011  add w9, w9, #1
0x06A97DA4: 08d1298b  add x8, x8, w9, sxtw #4
0x06A97DA8: 00e10491  add x0, x8, #0x138
0x06A97DAC: 080440a9  ldp x8, x1, [x0]
0x06A97DB0: e00314aa  mov x0, x20
0x06A97DB4: 00013fd6  blr x8
0x06A97DB8: 950100b4  cbz x21, #0x6a97de8
0x06A97DBC: e8030091  mov x8, sp
0x06A97DC0: e10300aa  mov x1, x0
0x06A97DC4: c6fdff97  bl #0x6a974dc
0x06A97DC8: e1030091  mov x1, sp
0x06A97DCC: 020a8052  movz w2, #0x50
0x06A97DD0: e00313aa  mov x0, x19
0x06A97DD4: e7da1c94  bl #0x71ce970
0x06A97DD8: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A97DDC: fe5745a9  ldp x30, x21, [sp, #0x50]
0x06A97DE0: ffc30191  add sp, sp, #0x70
0x06A97DE4: c0035fd6  ret
0x06A97DE8: b1a31b97  bl #0x3180cac

; RVA 0x6A97DEC | internal ExpendableComponent <CreateBoardItemEntity>b__6() { }
; bytes=68 sha256=3006eb457b3ef4bb0fcce60a92fae0e6c632d35744a369de2ee2ba093c0e42d1 status=arm64_complete_bound indexed_start=True
0x06A97DEC: ff0301d1  sub sp, sp, #0x40
0x06A97DF0: fe4f03a9  stp x30, x19, [sp, #0x30]
0x06A97DF4: e90300aa  mov x9, x0
0x06A97DF8: 000840f9  ldr x0, [x0, #0x10]
0x06A97DFC: 800100b4  cbz x0, #0x6a97e2c
0x06A97E00: 228541a9  ldp x2, x1, [x9, #0x18]
0x06A97E04: f30308aa  mov x19, x8
0x06A97E08: e8030091  mov x8, sp
0x06A97E0C: 4ffcff97  bl #0x6a96f48
0x06A97E10: e18340ad  ldp q1, q0, [sp, #0x10]
0x06A97E14: e203c03d  ldr q2, [sp]
0x06A97E18: 618200ad  stp q1, q0, [x19, #0x10]
0x06A97E1C: 6202803d  str q2, [x19]
0x06A97E20: fe4f43a9  ldp x30, x19, [sp, #0x30]
0x06A97E24: ff030191  add sp, sp, #0x40
0x06A97E28: c0035fd6  ret
0x06A97E2C: a0a31b97  bl #0x3180cac

; RVA 0x6A97E30 | internal ChargeableComponent <CreateBoardItemEntity>b__7() { }
; bytes=28 sha256=638928f8b46bb6f37dc98b09264b91c91534b7cf33840d345bd2a36e41528937 status=arm64_complete_bound indexed_start=True
0x06A97E30: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A97E34: 080840f9  ldr x8, [x0, #0x10]
0x06A97E38: 880000b4  cbz x8, #0x6a97e48
0x06A97E3C: 010c40f9  ldr x1, [x0, #0x18]
0x06A97E40: fe0741f8  ldr x30, [sp], #0x10
0x06A97E44: f9f9ff17  b #0x6a96628
0x06A97E48: 99a31b97  bl #0x3180cac

; RVA 0x6A97E4C | internal TimeLockComponent <CreateBoardItemEntity>b__8() { }
; bytes=68 sha256=73059e51bb284d7480f7aa42a27ecffd9b60e1a1d7197c932193255603c908fc status=arm64_complete_bound indexed_start=True
0x06A97E4C: ff0301d1  sub sp, sp, #0x40
0x06A97E50: fe4f03a9  stp x30, x19, [sp, #0x30]
0x06A97E54: 090840f9  ldr x9, [x0, #0x10]
0x06A97E58: a90100b4  cbz x9, #0x6a97e8c
0x06A97E5C: 010c40f9  ldr x1, [x0, #0x18]
0x06A97E60: f30308aa  mov x19, x8
0x06A97E64: e8230091  add x8, sp, #8
0x06A97E68: c2fdff97  bl #0x6a97570
0x06A97E6C: e81740f9  ldr x8, [sp, #0x28]
0x06A97E70: e083c13c  ldur q0, [sp, #0x18]
0x06A97E74: e183c03c  ldur q1, [sp, #8]
0x06A97E78: 681200f9  str x8, [x19, #0x20]
0x06A97E7C: 610200ad  stp q1, q0, [x19]
0x06A97E80: fe4f43a9  ldp x30, x19, [sp, #0x30]
0x06A97E84: ff030191  add sp, sp, #0x40
0x06A97E88: c0035fd6  ret
0x06A97E8C: 88a31b97  bl #0x3180cac

; RVA 0x6A97E90 | internal ToolSpawningComponent <CreateBoardItemEntity>b__9() { }
; bytes=180 sha256=53e2470dc05f0d5c864010d110f7ea926085c41887a39cef2516087ee0939817 status=arm64_complete_bound indexed_start=True
0x06A97E90: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A97E94: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A97E98: 939400f0  adrp x19, #0x7d2a000
0x06A97E9C: 686e6039  ldrb w8, [x19, #0x81b]
0x06A97EA0: f40300aa  mov x20, x0
0x06A97EA4: c8000037  tbnz w8, #0, #0x6a97ebc
0x06A97EA8: 205f00f0  adrp x0, #0x767e000
0x06A97EAC: 00a442f9  ldr x0, [x0, #0x548]
0x06A97EB0: daa21b97  bl #0x3180a18
0x06A97EB4: 28008052  movz w8, #0x1
0x06A97EB8: 686e2039  strb w8, [x19, #0x81b]
0x06A97EBC: 930e40f9  ldr x19, [x20, #0x18]
0x06A97EC0: 130400b4  cbz x19, #0x6a97f40
0x06A97EC4: 2a5f00f0  adrp x10, #0x767e000
0x06A97EC8: 680240f9  ldr x8, [x19]
0x06A97ECC: 4aa542f9  ldr x10, [x10, #0x548]
0x06A97ED0: 940a40f9  ldr x20, [x20, #0x10]
0x06A97ED4: 095d4279  ldrh w9, [x8, #0x12e]
0x06A97ED8: 410140f9  ldr x1, [x10]
0x06A97EDC: 290100b4  cbz x9, #0x6a97f00
0x06A97EE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A97EE4: 4a210091  add x10, x10, #8
0x06A97EE8: 4b815ff8  ldur x11, [x10, #-8]
0x06A97EEC: 7f0101eb  cmp x11, x1
0x06A97EF0: 00010054  b.eq #0x6a97f10
0x06A97EF4: 290500f1  subs x9, x9, #1
0x06A97EF8: 4a410091  add x10, x10, #0x10
0x06A97EFC: 61ffff54  b.ne #0x6a97ee8
0x06A97F00: 82018052  movz w2, #0xc
0x06A97F04: e00313aa  mov x0, x19
0x06A97F08: 02fb1a97  bl #0x3156b10
0x06A97F0C: 05000014  b #0x6a97f20
0x06A97F10: 490140b9  ldr w9, [x10]
0x06A97F14: 29310011  add w9, w9, #0xc
0x06A97F18: 08d1298b  add x8, x8, w9, sxtw #4
0x06A97F1C: 00e10491  add x0, x8, #0x138
0x06A97F20: 080440a9  ldp x8, x1, [x0]
0x06A97F24: e00313aa  mov x0, x19
0x06A97F28: 00013fd6  blr x8
0x06A97F2C: b40000b4  cbz x20, #0x6a97f40
0x06A97F30: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A97F34: e10300aa  mov x1, x0
0x06A97F38: fe0742f8  ldr x30, [sp], #0x20
0x06A97F3C: 3dfeff17  b #0x6a97830
0x06A97F40: 5ba31b97  bl #0x3180cac

; RVA 0x6A97F44 | internal CollectableComponent <CreateBoardItemEntity>b__10() { }
; bytes=64 sha256=8ac0eeb6cc2d3d7e5a3c1c16b8695051b19bca893d28cd7015141fd65ea73e1d status=arm64_complete_bound indexed_start=True
0x06A97F44: ffc300d1  sub sp, sp, #0x30
0x06A97F48: fe4f02a9  stp x30, x19, [sp, #0x20]
0x06A97F4C: 090840f9  ldr x9, [x0, #0x10]
0x06A97F50: 890100b4  cbz x9, #0x6a97f80
0x06A97F54: 011440f9  ldr x1, [x0, #0x28]
0x06A97F58: f30308aa  mov x19, x8
0x06A97F5C: e8230091  add x8, sp, #8
0x06A97F60: c0fdff97  bl #0x6a97660
0x06A97F64: e80f40f9  ldr x8, [sp, #0x18]
0x06A97F68: e083c03c  ldur q0, [sp, #8]
0x06A97F6C: 680a00f9  str x8, [x19, #0x10]
0x06A97F70: 6002803d  str q0, [x19]
0x06A97F74: fe4f42a9  ldp x30, x19, [sp, #0x20]
0x06A97F78: ffc30091  add sp, sp, #0x30
0x06A97F7C: c0035fd6  ret
0x06A97F80: 4ba31b97  bl #0x3180cac

