; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 972 MergeEngine.ECS.Systems.Items.TimeLimitedPostActivationSystem
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6795AFC | private long get_CurrentServerTimeMS() { }
; bytes=160 sha256=03e0d397646cc511bfd1e75eb0bdad5a2f818cda451d0bb7664f0b4cc800fd78 status=arm64_complete_bound indexed_start=True
0x06795AFC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06795B00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06795B04: 94ac00f0  adrp x20, #0x7d28000
0x06795B08: 88167639  ldrb w8, [x20, #0xd85]
0x06795B0C: f30300aa  mov x19, x0
0x06795B10: c8000037  tbnz w8, #0, #0x6795b28
0x06795B14: e07600d0  adrp x0, #0x7673000
0x06795B18: 006c46f9  ldr x0, [x0, #0xcd8]
0x06795B1C: bfab2797  bl #0x3180a18
0x06795B20: 28008052  movz w8, #0x1
0x06795B24: 88163639  strb w8, [x20, #0xd85]
0x06795B28: 732e40f9  ldr x19, [x19, #0x58]
0x06795B2C: 730300b4  cbz x19, #0x6795b98
0x06795B30: ea7600d0  adrp x10, #0x7673000
0x06795B34: 680240f9  ldr x8, [x19]
0x06795B38: 4a6d46f9  ldr x10, [x10, #0xcd8]
0x06795B3C: 095d4279  ldrh w9, [x8, #0x12e]
0x06795B40: 410140f9  ldr x1, [x10]
0x06795B44: 290100b4  cbz x9, #0x6795b68
0x06795B48: 0a5940f9  ldr x10, [x8, #0xb0]
0x06795B4C: 4a210091  add x10, x10, #8
0x06795B50: 4b815ff8  ldur x11, [x10, #-8]
0x06795B54: 7f0101eb  cmp x11, x1
0x06795B58: 00010054  b.eq #0x6795b78
0x06795B5C: 290500f1  subs x9, x9, #1
0x06795B60: 4a410091  add x10, x10, #0x10
0x06795B64: 61ffff54  b.ne #0x6795b50
0x06795B68: e00313aa  mov x0, x19
0x06795B6C: e2031f2a  mov w2, wzr
0x06795B70: e8032797  bl #0x3156b10
0x06795B74: 04000014  b #0x6795b84
0x06795B78: 490180b9  ldrsw x9, [x10]
0x06795B7C: 0811098b  add x8, x8, x9, lsl #4
0x06795B80: 00e10491  add x0, x8, #0x138
0x06795B84: 020440a9  ldp x2, x1, [x0]
0x06795B88: e00313aa  mov x0, x19
0x06795B8C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06795B90: fe0742f8  ldr x30, [sp], #0x20
0x06795B94: 40001fd6  br x2
0x06795B98: 45ac2797  bl #0x3180cac

; RVA 0x6795B9C | public override SystemPriorities get_Priority() { }
; bytes=8 sha256=f2a41acf67c1de0eee5443c8fa2e53019a2650b802e011084b07064fdddf8e82 status=arm64_complete_bound indexed_start=True
0x06795B9C: 40018052  movz w0, #0xa
0x06795BA0: c0035fd6  ret

; RVA 0x6795BA4 | protected override void ProcessComponent(TimeLimitedActivationComponent component) { }
; bytes=600 sha256=afe03ca0c44f15b6b02d70cf5ab95633ef4171648de34c1f7b2a5858cf65baa1 status=arm64_complete_bound indexed_start=True
0x06795BA4: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x06795BA8: f65701a9  stp x22, x21, [sp, #0x10]
0x06795BAC: f44f02a9  stp x20, x19, [sp, #0x20]
0x06795BB0: 95ac00f0  adrp x21, #0x7d28000
0x06795BB4: a81a7639  ldrb w8, [x21, #0xd86]
0x06795BB8: f40301aa  mov x20, x1
0x06795BBC: f30300aa  mov x19, x0
0x06795BC0: c8030037  tbnz w8, #0, #0x6795c38
0x06795BC4: 407b00f0  adrp x0, #0x7700000
0x06795BC8: 002845f9  ldr x0, [x0, #0xa50]
0x06795BCC: 93ab2797  bl #0x3180a18
0x06795BD0: 807a00b0  adrp x0, #0x76e6000
0x06795BD4: 00b846f9  ldr x0, [x0, #0xd70]
0x06795BD8: 90ab2797  bl #0x3180a18
0x06795BDC: 007a00d0  adrp x0, #0x76d7000
0x06795BE0: 00dc42f9  ldr x0, [x0, #0x5b8]
0x06795BE4: 8dab2797  bl #0x3180a18
0x06795BE8: 807a00d0  adrp x0, #0x76e7000
0x06795BEC: 00d440f9  ldr x0, [x0, #0x1a8]
0x06795BF0: 8aab2797  bl #0x3180a18
0x06795BF4: 207700b0  adrp x0, #0x767a000
0x06795BF8: 00ac44f9  ldr x0, [x0, #0x958]
0x06795BFC: 87ab2797  bl #0x3180a18
0x06795C00: 607b00b0  adrp x0, #0x7702000
0x06795C04: 006047f9  ldr x0, [x0, #0xec0]
0x06795C08: 84ab2797  bl #0x3180a18
0x06795C0C: 407b00f0  adrp x0, #0x7700000
0x06795C10: 004045f9  ldr x0, [x0, #0xa80]
0x06795C14: 81ab2797  bl #0x3180a18
0x06795C18: c07b00f0  adrp x0, #0x7710000
0x06795C1C: 00e042f9  ldr x0, [x0, #0x5c0]
0x06795C20: 7eab2797  bl #0x3180a18
0x06795C24: 407b00f0  adrp x0, #0x7700000
0x06795C28: 005c45f9  ldr x0, [x0, #0xab8]
0x06795C2C: 7bab2797  bl #0x3180a18
0x06795C30: 28008052  movz w8, #0x1
0x06795C34: a81a3639  strb w8, [x21, #0xd86]
0x06795C38: 140e00b4  cbz x20, #0x6795df8
0x06795C3C: 887a00d0  adrp x8, #0x76e7000
0x06795C40: 08d540f9  ldr x8, [x8, #0x1a8]
0x06795C44: e00314aa  mov x0, x20
0x06795C48: 010140f9  ldr x1, [x8]
0x06795C4C: f45e5197  bl #0x3bed81c
0x06795C50: a00b00b4  cbz x0, #0x6795dc4
0x06795C54: 08c44039  ldrb w8, [x0, #0x31]
0x06795C58: f50300aa  mov x21, x0
0x06795C5C: 080b0034  cbz w8, #0x6795dbc
0x06795C60: 28008052  movz w8, #0x1
0x06795C64: a8620079  strh w8, [x21, #0x30]
0x06795C68: 087a00d0  adrp x8, #0x76d7000
0x06795C6C: 08dd42f9  ldr x8, [x8, #0x5b8]
0x06795C70: e00314aa  mov x0, x20
0x06795C74: 010140f9  ldr x1, [x8]
0x06795C78: e95e5197  bl #0x3bed81c
0x06795C7C: 682640f9  ldr x8, [x19, #0x48]
0x06795C80: c80b00b4  cbz x8, #0x6795df8
0x06795C84: e10300aa  mov x1, x0
0x06795C88: e00308aa  mov x0, x8
0x06795C8C: e2031faa  mov x2, xzr
0x06795C90: e31cfb97  bl #0x665d01c
0x06795C94: a8024139  ldrb w8, [x21, #0x40]
0x06795C98: f60300aa  mov x22, x0
0x06795C9C: a8000034  cbz w8, #0x6795cb0
0x06795CA0: a01640fd  ldr d0, [x21, #0x28]
0x06795CA4: a11e40fd  ldr d1, [x21, #0x38]
0x06795CA8: 0020611e  fcmp d0, d1
0x06795CAC: 21020054  b.ne #0x6795cf0
0x06795CB0: 487b00f0  adrp x8, #0x7700000
0x06795CB4: 751640f9  ldr x21, [x19, #0x28]
0x06795CB8: 082945f9  ldr x8, [x8, #0xa50]
0x06795CBC: 000140f9  ldr x0, [x8]
0x06795CC0: f8ab2797  bl #0x3180ca0
0x06795CC4: e10316aa  mov x1, x22
0x06795CC8: e2031faa  mov x2, xzr
0x06795CCC: f70300aa  mov x23, x0
0x06795CD0: c053ff97  bl #0x676abd0
0x06795CD4: 350900b4  cbz x21, #0x6795df8
0x06795CD8: 487b00f0  adrp x8, #0x7700000
0x06795CDC: 084145f9  ldr x8, [x8, #0xa80]
0x06795CE0: e00315aa  mov x0, x21
0x06795CE4: e10317aa  mov x1, x23
0x06795CE8: 020140f9  ldr x2, [x8]
0x06795CEC: 203c5897  bl #0x3da4d6c
0x06795CF0: 887a00b0  adrp x8, #0x76e6000
0x06795CF4: 08b946f9  ldr x8, [x8, #0xd70]
0x06795CF8: e00314aa  mov x0, x20
0x06795CFC: 010140f9  ldr x1, [x8]
0x06795D00: c75e5197  bl #0x3bed81c
0x06795D04: 000600b4  cbz x0, #0x6795dc4
0x06795D08: 082c40f9  ldr x8, [x0, #0x58]
0x06795D0C: 680700b4  cbz x8, #0x6795df8
0x06795D10: 091540b9  ldr w9, [x8, #0x14]
0x06795D14: 3f090071  cmp w9, #2
0x06795D18: 61050054  b.ne #0x6795dc4
0x06795D1C: 151180b9  ldrsw x21, [x8, #0x10]
0x06795D20: 487b00f0  adrp x8, #0x7700000
0x06795D24: c97b00f0  adrp x9, #0x7710000
0x06795D28: 940a40f9  ldr x20, [x20, #0x10]
0x06795D2C: 085d45f9  ldr x8, [x8, #0xab8]
0x06795D30: 29e142f9  ldr x9, [x9, #0x5c0]
0x06795D34: 21008052  movz w1, #0x1
0x06795D38: e003152a  mov w0, w21
0x06795D3C: 020140f9  ldr x2, [x8]
0x06795D40: 230140f9  ldr x3, [x9]
0x06795D44: e4031faa  mov x4, xzr
0x06795D48: 37fbff97  bl #0x6794a24
0x06795D4C: 740500b4  cbz x20, #0x6795df8
0x06795D50: 287700b0  adrp x8, #0x767a000
0x06795D54: 08ad44f9  ldr x8, [x8, #0x958]
0x06795D58: f60300aa  mov x22, x0
0x06795D5C: e00314aa  mov x0, x20
0x06795D60: 010140f9  ldr x1, [x8]
0x06795D64: 082c5297  bl #0x3c20d84
0x06795D68: 800400b4  cbz x0, #0x6795df8
0x06795D6C: 081440f9  ldr x8, [x0, #0x28]
0x06795D70: f40300aa  mov x20, x0
0x06795D74: 880200b5  cbnz x8, #0x6795dc4
0x06795D78: 960e04f8  str x22, [x20, #0x40]!
0x06795D7C: e00314aa  mov x0, x20
0x06795D80: e10316aa  mov x1, x22
0x06795D84: 10ab2797  bl #0x31809c4
0x06795D88: e00313aa  mov x0, x19
0x06795D8C: 95021ef8  stur x21, [x20, #-0x20]
0x06795D90: 5bffff97  bl #0x6795afc
0x06795D94: 087d8052  movz w8, #0x3e8
0x06795D98: a87e081b  mul w8, w21, w8
0x06795D9C: 08c0288b  add x8, x0, w8, sxtw
0x06795DA0: e00313aa  mov x0, x19
0x06795DA4: 88821ef8  stur x8, [x20, #-0x18]
0x06795DA8: 55ffff97  bl #0x6795afc
0x06795DAC: 28008052  movz w8, #0x1
0x06795DB0: 80021ff8  stur x0, [x20, #-0x10]
0x06795DB4: 884a0039  strb w8, [x20, #0x12]
0x06795DB8: 03000014  b #0x6795dc4
0x06795DBC: a8c24039  ldrb w8, [x21, #0x30]
0x06795DC0: a8000034  cbz w8, #0x6795dd4
0x06795DC4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06795DC8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06795DCC: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06795DD0: c0035fd6  ret
0x06795DD4: 800a40f9  ldr x0, [x20, #0x10]
0x06795DD8: 000100b4  cbz x0, #0x6795df8
0x06795DDC: 687b00b0  adrp x8, #0x7702000
0x06795DE0: 086147f9  ldr x8, [x8, #0xec0]
0x06795DE4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06795DE8: f65741a9  ldp x22, x21, [sp, #0x10]
0x06795DEC: 010140f9  ldr x1, [x8]
0x06795DF0: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06795DF4: 432e5217  b #0x3c21700
0x06795DF8: adab2797  bl #0x3180cac

; RVA 0x6795DFC | public void .ctor() { }
; bytes=72 sha256=6f89f7c80c2725c8b6676283ce0f9d40aea945e99a7a058dfba37dae0312b161 status=arm64_complete_bound indexed_start=True
0x06795DFC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06795E00: f44f01a9  stp x20, x19, [sp, #0x10]
0x06795E04: 94ac00f0  adrp x20, #0x7d28000
0x06795E08: d57b00f0  adrp x21, #0x7710000
0x06795E0C: 881e7639  ldrb w8, [x20, #0xd87]
0x06795E10: b5ea42f9  ldr x21, [x21, #0x5d0]
0x06795E14: f30300aa  mov x19, x0
0x06795E18: c8000037  tbnz w8, #0, #0x6795e30
0x06795E1C: c07b00f0  adrp x0, #0x7710000
0x06795E20: 00e842f9  ldr x0, [x0, #0x5d0]
0x06795E24: fdaa2797  bl #0x3180a18
0x06795E28: 28008052  movz w8, #0x1
0x06795E2C: 881e3639  strb w8, [x20, #0xd87]
0x06795E30: a10240f9  ldr x1, [x21]
0x06795E34: e00313aa  mov x0, x19
0x06795E38: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06795E3C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06795E40: 3c5a9117  b #0x4bec730

