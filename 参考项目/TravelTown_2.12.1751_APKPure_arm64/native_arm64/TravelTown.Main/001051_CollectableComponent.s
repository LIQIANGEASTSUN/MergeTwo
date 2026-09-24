; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1051 MergeEngine.ECS.Components.Items.CollectableComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FBA0C | public bool get_Collected() { }
; bytes=8 sha256=d2625c08dab8a7ed6a0ec29ef5e0b21222fe8c8aa1243088ffebd3218ae29cdc status=arm64_complete_bound indexed_start=True
0x068FBA0C: 00a04039  ldrb w0, [x0, #0x28]
0x068FBA10: c0035fd6  ret

; RVA 0x68FBA14 | public void set_Collected(bool value) { }
; bytes=12 sha256=43c2f4e1e6978384929aa893c7dbe539967ae11cb60a8af67ffd5877069acd5c status=arm64_complete_bound indexed_start=True
0x068FBA14: 28000012  and w8, w1, #1
0x068FBA18: 08a00039  strb w8, [x0, #0x28]
0x068FBA1C: c0035fd6  ret

; RVA 0x68FBA20 | public PlayerResourceEnum get_Resource() { }
; bytes=8 sha256=0471b33ab0983b843889248d4e9bd2f02e4d575679dc5668cc0ef6ea9dd367b5 status=arm64_complete_bound indexed_start=True
0x068FBA20: 002c40b9  ldr w0, [x0, #0x2c]
0x068FBA24: c0035fd6  ret

; RVA 0x68FBA28 | public int get_Amount() { }
; bytes=8 sha256=615cc4d4d19713a7b9ea6b3843c274d040126c740088a3e2d95ffe19ba04c269 status=arm64_complete_bound indexed_start=True
0x068FBA28: 003040b9  ldr w0, [x0, #0x30]
0x068FBA2C: c0035fd6  ret

; RVA 0x68FBA30 | public void set_Amount(int value) { }
; bytes=8 sha256=cf12beb067ccf5c6df7e40da315453fc1f32701c58dd6675efbcc48d42b6ae96 status=arm64_complete_bound indexed_start=True
0x068FBA30: 013000b9  str w1, [x0, #0x30]
0x068FBA34: c0035fd6  ret

; RVA 0x68FBA38 | public bool get_CollectWhenDroppedOnInventory() { }
; bytes=8 sha256=3b00dbfe0e7baa06f400a59db8fa929c7a491ea3ae9e7d990cf39851847f7e7d status=arm64_complete_bound indexed_start=True
0x068FBA38: 00d04039  ldrb w0, [x0, #0x34]
0x068FBA3C: c0035fd6  ret

; RVA 0x68FBA40 | public ClientAsset[] get_Assets() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068FBA40: 001c40f9  ldr x0, [x0, #0x38]
0x068FBA44: c0035fd6  ret

; RVA 0x68FBA48 | public AfterCollectAnimation get_AfterCollectAnimation() { }
; bytes=8 sha256=2794764ead4f4e46816d67d9f7faad262cb54d7a0b7a39d555c30024db08d1e8 status=arm64_complete_bound indexed_start=True
0x068FBA48: 004040b9  ldr w0, [x0, #0x40]
0x068FBA4C: c0035fd6  ret

; RVA 0x68FBA50 | public bool get_IsATool() { }
; bytes=92 sha256=b1404d35de2d54dd9ea1050535a93bef110bbb022e93c060b4f685ebe888e8b8 status=arm64_complete_bound indexed_start=True
0x068FBA50: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068FBA54: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBA58: 75a100d0  adrp x21, #0x7d29000
0x068FBA5C: 346e0090  adrp x20, #0x76bf000
0x068FBA60: a8366239  ldrb w8, [x21, #0x88d]
0x068FBA64: 944644f9  ldr x20, [x20, #0x888]
0x068FBA68: f30300aa  mov x19, x0
0x068FBA6C: c8000037  tbnz w8, #0, #0x68fba84
0x068FBA70: 206e0090  adrp x0, #0x76bf000
0x068FBA74: 004444f9  ldr x0, [x0, #0x888]
0x068FBA78: e8132297  bl #0x3180a18
0x068FBA7C: 28008052  movz w8, #0x1
0x068FBA80: a8362239  strb w8, [x21, #0x88d]
0x068FBA84: 800240f9  ldr x0, [x20]
0x068FBA88: 732e40b9  ldr w19, [x19, #0x2c]
0x068FBA8C: 08e040b9  ldr w8, [x0, #0xe0]
0x068FBA90: 48000035  cbnz w8, #0x68fba98
0x068FBA94: 3e142297  bl #0x3180b8c
0x068FBA98: e003132a  mov w0, w19
0x068FBA9C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBAA0: e1031faa  mov x1, xzr
0x068FBAA4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068FBAA8: 46a6e017  b #0x61253c0

; RVA 0x68FBAAC | public bool get_RequiresDoubleTap() { }
; bytes=4 sha256=788f1512f26f87f558ccda89030f23036527961be061f31e047ad5b93b8aafe2 status=arm64_complete_bound indexed_start=True
0x068FBAAC: 01000014  b #0x68fbab0

; RVA 0x68FBAB0 | public bool get_IsCollectableItem() { }
; bytes=80 sha256=d0426bddd22b66db199e1c777fc049203b675eb1aa386fda6c031990d1f67369 status=arm64_complete_bound indexed_start=True
0x068FBAB0: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBAB4: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBAB8: 74a100d0  adrp x20, #0x7d29000
0x068FBABC: 883a6239  ldrb w8, [x20, #0x88e]
0x068FBAC0: f30300aa  mov x19, x0
0x068FBAC4: c8000037  tbnz w8, #0, #0x68fbadc
0x068FBAC8: 407100f0  adrp x0, #0x7726000
0x068FBACC: 002843f9  ldr x0, [x0, #0x650]
0x068FBAD0: d2132297  bl #0x3180a18
0x068FBAD4: 28008052  movz w8, #0x1
0x068FBAD8: 883a2239  strb w8, [x20, #0x88e]
0x068FBADC: 681240f9  ldr x8, [x19, #0x20]
0x068FBAE0: e80000b4  cbz x8, #0x68fbafc
0x068FBAE4: 081140f9  ldr x8, [x8, #0x20]
0x068FBAE8: a80000b4  cbz x8, #0x68fbafc
0x068FBAEC: 00414039  ldrb w0, [x8, #0x10]
0x068FBAF0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBAF4: fe0742f8  ldr x30, [sp], #0x20
0x068FBAF8: c0035fd6  ret
0x068FBAFC: 6c142297  bl #0x3180cac

; RVA 0x68FBB00 | public bool get_IsCollectableItemWithResource() { }
; bytes=112 sha256=6205e2e795e683b201d51d18a6cc606d00cde8295f02cb04f87d981cd11cbbaa status=arm64_complete_bound indexed_start=True
0x068FBB00: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBB04: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBB08: 74a100d0  adrp x20, #0x7d29000
0x068FBB0C: 883e6239  ldrb w8, [x20, #0x88f]
0x068FBB10: f30300aa  mov x19, x0
0x068FBB14: c8000037  tbnz w8, #0, #0x68fbb2c
0x068FBB18: 407100f0  adrp x0, #0x7726000
0x068FBB1C: 002843f9  ldr x0, [x0, #0x650]
0x068FBB20: be132297  bl #0x3180a18
0x068FBB24: 28008052  movz w8, #0x1
0x068FBB28: 883e2239  strb w8, [x20, #0x88f]
0x068FBB2C: 681240f9  ldr x8, [x19, #0x20]
0x068FBB30: e80100b4  cbz x8, #0x68fbb6c
0x068FBB34: 081140f9  ldr x8, [x8, #0x20]
0x068FBB38: a80100b4  cbz x8, #0x68fbb6c
0x068FBB3C: 09414039  ldrb w9, [x8, #0x10]
0x068FBB40: e9000034  cbz w9, #0x68fbb5c
0x068FBB44: 000d40f9  ldr x0, [x8, #0x18]
0x068FBB48: a00000b4  cbz x0, #0x68fbb5c
0x068FBB4C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBB50: e1031faa  mov x1, xzr
0x068FBB54: fe0742f8  ldr x30, [sp], #0x20
0x068FBB58: 28be0414  b #0x6a2b3f8
0x068FBB5C: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBB60: e0031f2a  mov w0, wzr
0x068FBB64: fe0742f8  ldr x30, [sp], #0x20
0x068FBB68: c0035fd6  ret
0x068FBB6C: 50142297  bl #0x3180cac

; RVA 0x68FBB70 | public bool get_ShouldCollectableItemFly() { }
; bytes=116 sha256=6fddf123ee3f46442b5707b84f0be1e193736a67246a788c25cc0bb692ee5462 status=arm64_complete_bound indexed_start=True
0x068FBB70: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBB74: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBB78: 74a100d0  adrp x20, #0x7d29000
0x068FBB7C: 88426239  ldrb w8, [x20, #0x890]
0x068FBB80: f30300aa  mov x19, x0
0x068FBB84: c8000037  tbnz w8, #0, #0x68fbb9c
0x068FBB88: 407100f0  adrp x0, #0x7726000
0x068FBB8C: 002843f9  ldr x0, [x0, #0x650]
0x068FBB90: a2132297  bl #0x3180a18
0x068FBB94: 28008052  movz w8, #0x1
0x068FBB98: 88422239  strb w8, [x20, #0x890]
0x068FBB9C: e00313aa  mov x0, x19
0x068FBBA0: c4ffff97  bl #0x68fbab0
0x068FBBA4: 60010036  tbz w0, #0, #0x68fbbd0
0x068FBBA8: 681240f9  ldr x8, [x19, #0x20]
0x068FBBAC: a80100b4  cbz x8, #0x68fbbe0
0x068FBBB0: 081140f9  ldr x8, [x8, #0x20]
0x068FBBB4: 680100b4  cbz x8, #0x68fbbe0
0x068FBBB8: 000d40f9  ldr x0, [x8, #0x18]
0x068FBBBC: a00000b4  cbz x0, #0x68fbbd0
0x068FBBC0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBBC4: e1031faa  mov x1, xzr
0x068FBBC8: fe0742f8  ldr x30, [sp], #0x20
0x068FBBCC: 0bbe0414  b #0x6a2b3f8
0x068FBBD0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBBD4: e0031f2a  mov w0, wzr
0x068FBBD8: fe0742f8  ldr x30, [sp], #0x20
0x068FBBDC: c0035fd6  ret
0x068FBBE0: 33142297  bl #0x3180cac

; RVA 0x68FBBE4 | public Reward get_CollectableReward() { }
; bytes=80 sha256=db7f489ccd909aed51bef41e5e454d0edaa935e2504f3b980ffbed9d1fae7d1a status=arm64_complete_bound indexed_start=True
0x068FBBE4: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBBE8: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBBEC: 74a100d0  adrp x20, #0x7d29000
0x068FBBF0: 88466239  ldrb w8, [x20, #0x891]
0x068FBBF4: f30300aa  mov x19, x0
0x068FBBF8: c8000037  tbnz w8, #0, #0x68fbc10
0x068FBBFC: 407100f0  adrp x0, #0x7726000
0x068FBC00: 002843f9  ldr x0, [x0, #0x650]
0x068FBC04: 85132297  bl #0x3180a18
0x068FBC08: 28008052  movz w8, #0x1
0x068FBC0C: 88462239  strb w8, [x20, #0x891]
0x068FBC10: 681240f9  ldr x8, [x19, #0x20]
0x068FBC14: e80000b4  cbz x8, #0x68fbc30
0x068FBC18: 081140f9  ldr x8, [x8, #0x20]
0x068FBC1C: a80000b4  cbz x8, #0x68fbc30
0x068FBC20: 000d40f9  ldr x0, [x8, #0x18]
0x068FBC24: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBC28: fe0742f8  ldr x30, [sp], #0x20
0x068FBC2C: c0035fd6  ret
0x068FBC30: 1f142297  bl #0x3180cac

; RVA 0x68FBC34 | public bool get_IsImmediateReward() { }
; bytes=88 sha256=7d222ca100ac8b57ef15af20ccb1de4bcffcaf0a84fa66e9f77491c252d66c02 status=arm64_complete_bound indexed_start=True
0x068FBC34: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBC38: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBC3C: 74a100d0  adrp x20, #0x7d29000
0x068FBC40: 884a6239  ldrb w8, [x20, #0x892]
0x068FBC44: f30300aa  mov x19, x0
0x068FBC48: c8000037  tbnz w8, #0, #0x68fbc60
0x068FBC4C: 407100f0  adrp x0, #0x7726000
0x068FBC50: 002843f9  ldr x0, [x0, #0x650]
0x068FBC54: 71132297  bl #0x3180a18
0x068FBC58: 28008052  movz w8, #0x1
0x068FBC5C: 884a2239  strb w8, [x20, #0x892]
0x068FBC60: 681240f9  ldr x8, [x19, #0x20]
0x068FBC64: 280100b4  cbz x8, #0x68fbc88
0x068FBC68: 081140f9  ldr x8, [x8, #0x20]
0x068FBC6C: e80000b4  cbz x8, #0x68fbc88
0x068FBC70: 081540b9  ldr w8, [x8, #0x14]
0x068FBC74: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBC78: 1f010071  cmp w8, #0
0x068FBC7C: e0079f1a  cset w0, ne
0x068FBC80: fe0742f8  ldr x30, [sp], #0x20
0x068FBC84: c0035fd6  ret
0x068FBC88: 09142297  bl #0x3180cac

; RVA 0x68FBC8C | public bool get_IsPlaygroundPoints() { }
; bytes=88 sha256=b2e520e37a02adc1683fd2170561453c6c6d98ee4bcf48f8ee73a39a4ca1e7e7 status=arm64_complete_bound indexed_start=True
0x068FBC8C: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FBC90: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FBC94: 74a100d0  adrp x20, #0x7d29000
0x068FBC98: 884e6239  ldrb w8, [x20, #0x893]
0x068FBC9C: f30300aa  mov x19, x0
0x068FBCA0: c8000037  tbnz w8, #0, #0x68fbcb8
0x068FBCA4: 407100f0  adrp x0, #0x7726000
0x068FBCA8: 002843f9  ldr x0, [x0, #0x650]
0x068FBCAC: 5b132297  bl #0x3180a18
0x068FBCB0: 28008052  movz w8, #0x1
0x068FBCB4: 884e2239  strb w8, [x20, #0x893]
0x068FBCB8: 681240f9  ldr x8, [x19, #0x20]
0x068FBCBC: 280100b4  cbz x8, #0x68fbce0
0x068FBCC0: 081140f9  ldr x8, [x8, #0x20]
0x068FBCC4: e80000b4  cbz x8, #0x68fbce0
0x068FBCC8: 081540b9  ldr w8, [x8, #0x14]
0x068FBCCC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FBCD0: 1f090071  cmp w8, #2
0x068FBCD4: e0179f1a  cset w0, eq
0x068FBCD8: fe0742f8  ldr x30, [sp], #0x20
0x068FBCDC: c0035fd6  ret
0x068FBCE0: f3132297  bl #0x3180cac

; RVA 0x68FBCE4 | public bool get_ShouldRemoveFromBoard() { }
; bytes=8 sha256=52546c3f5a38886eb64ae30b8638274f49e1d29b236fb8eddd6bba8cb576c4fa status=arm64_complete_bound indexed_start=True
0x068FBCE4: 00104139  ldrb w0, [x0, #0x44]
0x068FBCE8: c0035fd6  ret

; RVA 0x68FBCEC | public void set_ShouldRemoveFromBoard(bool value) { }
; bytes=12 sha256=9943911d86e147bc24fa20c1e36ec7211a3044e90237cfcf0dc968d45bc593c8 status=arm64_complete_bound indexed_start=True
0x068FBCEC: 28000012  and w8, w1, #1
0x068FBCF0: 08100139  strb w8, [x0, #0x44]
0x068FBCF4: c0035fd6  ret

; RVA 0x68FBCF8 | public void .ctor(CollectableItemCapability capability, Entity entity) { }
; bytes=176 sha256=0d1704e5786cc2365134da33d208fd42d68a256b878bffd451605fc01a99ebde status=arm64_complete_bound indexed_start=True
0x068FBCF8: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068FBCFC: f65701a9  stp x22, x21, [sp, #0x10]
0x068FBD00: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FBD04: 76a100d0  adrp x22, #0x7d29000
0x068FBD08: 577100f0  adrp x23, #0x7726000
0x068FBD0C: c8526239  ldrb w8, [x22, #0x894]
0x068FBD10: f72e43f9  ldr x23, [x23, #0x658]
0x068FBD14: f50302aa  mov x21, x2
0x068FBD18: f40301aa  mov x20, x1
0x068FBD1C: f30300aa  mov x19, x0
0x068FBD20: c8000037  tbnz w8, #0, #0x68fbd38
0x068FBD24: 407100f0  adrp x0, #0x7726000
0x068FBD28: 002c43f9  ldr x0, [x0, #0x658]
0x068FBD2C: 3b132297  bl #0x3180a18
0x068FBD30: 28008052  movz w8, #0x1
0x068FBD34: c8522239  strb w8, [x22, #0x894]
0x068FBD38: e30240f9  ldr x3, [x23]
0x068FBD3C: e00313aa  mov x0, x19
0x068FBD40: e10314aa  mov x1, x20
0x068FBD44: e20315aa  mov x2, x21
0x068FBD48: 848d9197  bl #0x4d5f358
0x068FBD4C: d40200b4  cbz x20, #0x68fbda4
0x068FBD50: 880e40f9  ldr x8, [x20, #0x18]
0x068FBD54: 880200b4  cbz x8, #0x68fbda4
0x068FBD58: 004141fc  ldur d0, [x8, #0x14]
0x068FBD5C: 60c202fc  stur d0, [x19, #0x2c]
0x068FBD60: 08714039  ldrb w8, [x8, #0x1c]
0x068FBD64: 68d20039  strb w8, [x19, #0x34]
0x068FBD68: 881240f9  ldr x8, [x20, #0x20]
0x068FBD6C: c80100b4  cbz x8, #0x68fbda4
0x068FBD70: 011140f9  ldr x1, [x8, #0x20]
0x068FBD74: e00313aa  mov x0, x19
0x068FBD78: 018c03f8  str x1, [x0, #0x38]!
0x068FBD7C: 12132297  bl #0x31809c4
0x068FBD80: 801240f9  ldr x0, [x20, #0x20]
0x068FBD84: 000100b4  cbz x0, #0x68fbda4
0x068FBD88: e1031faa  mov x1, xzr
0x068FBD8C: 0a50dc97  bl #0x600fdb4
0x068FBD90: 604200b9  str w0, [x19, #0x40]
0x068FBD94: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FBD98: f65741a9  ldp x22, x21, [sp, #0x10]
0x068FBD9C: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068FBDA0: c0035fd6  ret
0x068FBDA4: c2132297  bl #0x3180cac

