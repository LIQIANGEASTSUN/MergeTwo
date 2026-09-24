; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1070 MergeEngine.ECS.Components.Items.InteractionComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FCA18 | public bool get_Interacting() { }
; bytes=8 sha256=b5f756a94e2a4fd04c581b81886364460d3cd7c165e6a51d5f3195a9439a10c4 status=arm64_complete_bound indexed_start=True
0x068FCA18: 00c04039  ldrb w0, [x0, #0x30]
0x068FCA1C: c0035fd6  ret

; RVA 0x68FCA20 | public void set_Interacting(bool value) { }
; bytes=12 sha256=a249c3c061ec9da6b813e9f7669c4eee4712ae82443eca5c2d67c54d32999205 status=arm64_complete_bound indexed_start=True
0x068FCA20: 28000012  and w8, w1, #1
0x068FCA24: 08c00039  strb w8, [x0, #0x30]
0x068FCA28: c0035fd6  ret

; RVA 0x68FCA2C | public bool get_TryFinishOrder() { }
; bytes=8 sha256=6a3cb8c4f92b5961effe3a4ee16cd73e98d1d0f94c954c6b45545a35177d46d8 status=arm64_complete_bound indexed_start=True
0x068FCA2C: 00c44039  ldrb w0, [x0, #0x31]
0x068FCA30: c0035fd6  ret

; RVA 0x68FCA34 | public void set_TryFinishOrder(bool value) { }
; bytes=12 sha256=2399f9d12d43e9d2bcf21d8ce2492dc5f3414cbe7d9899b246726f7cfec62d53 status=arm64_complete_bound indexed_start=True
0x068FCA34: 28000012  and w8, w1, #1
0x068FCA38: 08c40039  strb w8, [x0, #0x31]
0x068FCA3C: c0035fd6  ret

; RVA 0x68FCA40 | public bool get_InteractionConsumed() { }
; bytes=8 sha256=c1419eee0ff52e9dba03c5538f1a31a089d36861efdb5b2bfebc9abde36cbe25 status=arm64_complete_bound indexed_start=True
0x068FCA40: 00c84039  ldrb w0, [x0, #0x32]
0x068FCA44: c0035fd6  ret

; RVA 0x68FCA48 | public void set_InteractionConsumed(bool value) { }
; bytes=56 sha256=6100f1608a2c034d3b563bd6b5af401dae7e643961c16216ca3b292134896030 status=arm64_complete_bound indexed_start=True
0x068FCA48: 09c84039  ldrb w9, [x0, #0x32]
0x068FCA4C: 2a000012  and w10, w1, #1
0x068FCA50: 0ac80039  strb w10, [x0, #0x32]
0x068FCA54: 49010035  cbnz w9, #0x68fca7c
0x068FCA58: 21010036  tbz w1, #0, #0x68fca7c
0x068FCA5C: 091440f9  ldr x9, [x0, #0x28]
0x068FCA60: e80300aa  mov x8, x0
0x068FCA64: c90000b4  cbz x9, #0x68fca7c
0x068FCA68: 230d40f9  ldr x3, [x9, #0x18]
0x068FCA6C: 202140f9  ldr x0, [x9, #0x40]
0x068FCA70: 221540f9  ldr x2, [x9, #0x28]
0x068FCA74: e10308aa  mov x1, x8
0x068FCA78: 60001fd6  br x3
0x068FCA7C: c0035fd6  ret

; RVA 0x68FCA80 | public bool get_PlayerNotifiedOfCostNotAffordable() { }
; bytes=8 sha256=ee9b426fde5021c6109a49a5631f999c41c69a207238febc6e91fad8eb29798a status=arm64_complete_bound indexed_start=True
0x068FCA80: 00cc4039  ldrb w0, [x0, #0x33]
0x068FCA84: c0035fd6  ret

; RVA 0x68FCA88 | public void set_PlayerNotifiedOfCostNotAffordable(bool value) { }
; bytes=12 sha256=6f08c2e1a18de44e324c67694cb7158aa6f2934d54330e990ae1c00642ed4bbd status=arm64_complete_bound indexed_start=True
0x068FCA88: 28000012  and w8, w1, #1
0x068FCA8C: 08cc0039  strb w8, [x0, #0x33]
0x068FCA90: c0035fd6  ret

; RVA 0x68FCA94 | public PositionComponent get_PreferredItemToConsume() { }
; bytes=8 sha256=095bb56e13b6dfde16ade0b592279392884c282a7c7810cb58472b839de552de status=arm64_complete_bound indexed_start=True
0x068FCA94: 001c40f9  ldr x0, [x0, #0x38]
0x068FCA98: c0035fd6  ret

; RVA 0x68FCA9C | public void set_PreferredItemToConsume(PositionComponent value) { }
; bytes=8 sha256=07450962e3a4bdfb354570bcde21d25a3777a12e0dc07b8ffd973d1f83498d17 status=arm64_complete_bound indexed_start=True
0x068FCA9C: 018c03f8  str x1, [x0, #0x38]!
0x068FCAA0: c90f2217  b #0x31809c4

; RVA 0x68FCAA4 | public IItemsCombiner.OnItemsCombined get_ItemsConsumedCallback() { }
; bytes=8 sha256=ac1915dbf8ae56825a9e0c79c21190a655d4b32b9c10f299546aad7c9ecadc66 status=arm64_complete_bound indexed_start=True
0x068FCAA4: 002040f9  ldr x0, [x0, #0x40]
0x068FCAA8: c0035fd6  ret

; RVA 0x68FCAAC | public void set_ItemsConsumedCallback(IItemsCombiner.OnItemsCombined value) { }
; bytes=8 sha256=8295100dcf33565b8222f46640a56b9e8847445935d2cdc2593c6bd2cc22b3e3 status=arm64_complete_bound indexed_start=True
0x068FCAAC: 010c04f8  str x1, [x0, #0x40]!
0x068FCAB0: c50f2217  b #0x31809c4

; RVA 0x68FCAB4 | public PlayerResourceEnum get_ResourceToConsume() { }
; bytes=8 sha256=5a3dbf09a4e8bdcceec86da53e57e6eb7ac66ceb50eedbff297fa2d5d118a7be status=arm64_complete_bound indexed_start=True
0x068FCAB4: 004840b9  ldr w0, [x0, #0x48]
0x068FCAB8: c0035fd6  ret

; RVA 0x68FCABC | public int get_ResourceAmountToConsume() { }
; bytes=8 sha256=b3090d71f53a3b0a2c9b382c39b36715d4a10e0e1c6767c5778eaadd82991ead status=arm64_complete_bound indexed_start=True
0x068FCABC: 004c40b9  ldr w0, [x0, #0x4c]
0x068FCAC0: c0035fd6  ret

; RVA 0x68FCAC4 | public void set_ResourceAmountToConsume(int value) { }
; bytes=8 sha256=635d339b267e3e899c701ea89f8cbb063237c8756d68738eb8011fe4bd28af4a status=arm64_complete_bound indexed_start=True
0x068FCAC4: 014c00b9  str w1, [x0, #0x4c]
0x068FCAC8: c0035fd6  ret

; RVA 0x68FCACC | public int get_DefaultResourceAmountToConsume() { }
; bytes=8 sha256=9431bc14d7719f9c67e7b5c65efd289808001eccec851d956c2e10042a676d12 status=arm64_complete_bound indexed_start=True
0x068FCACC: 005040b9  ldr w0, [x0, #0x50]
0x068FCAD0: c0035fd6  ret

; RVA 0x68FCAD4 | public bool get_InteractionCostsResource() { }
; bytes=8 sha256=b1636ea235ffc2d779c1a23a09949d9eb649dc15c0e8815925131acf28ad2abf status=arm64_complete_bound indexed_start=True
0x068FCAD4: 00504139  ldrb w0, [x0, #0x54]
0x068FCAD8: c0035fd6  ret

; RVA 0x68FCADC | public bool get_InteractionCostsItems() { }
; bytes=8 sha256=f9e33b33778fb04b8f4a3abf806d9f11a02d3af379c4887290f4cd9074f1d9e0 status=arm64_complete_bound indexed_start=True
0x068FCADC: 00544139  ldrb w0, [x0, #0x55]
0x068FCAE0: c0035fd6  ret

; RVA 0x68FCAE4 | public ItemMultiple[] get_ItemsToConsume() { }
; bytes=8 sha256=d598436bff3a9dd6f386d52e9d196b4b622d920d9df2d4b374773cddd2c4c4b8 status=arm64_complete_bound indexed_start=True
0x068FCAE4: 002c40f9  ldr x0, [x0, #0x58]
0x068FCAE8: c0035fd6  ret

; RVA 0x68FCAEC | private void set_ItemsToConsume(ItemMultiple[] value) { }
; bytes=8 sha256=5e2bab6b013ce3792a92b3e75c1f6405e5efbacca5b6ce0285eb78be2b96136a status=arm64_complete_bound indexed_start=True
0x068FCAEC: 018c05f8  str x1, [x0, #0x58]!
0x068FCAF0: b50f2217  b #0x31809c4

; RVA 0x68FCAF4 | public ItemMultiple[] get_ConsumedItems() { }
; bytes=8 sha256=dc0647a8f63aacbe9d6b7a7bf9b54950de74e29f82066e71731415b61d501071 status=arm64_complete_bound indexed_start=True
0x068FCAF4: 003040f9  ldr x0, [x0, #0x60]
0x068FCAF8: c0035fd6  ret

; RVA 0x68FCAFC | public void set_ConsumedItems(ItemMultiple[] value) { }
; bytes=8 sha256=cc992e65ebff43b3828c430e907c1f5fb764b3cd8c20e368cf88b582860ce3a9 status=arm64_complete_bound indexed_start=True
0x068FCAFC: 010c06f8  str x1, [x0, #0x60]!
0x068FCB00: b10f2217  b #0x31809c4

; RVA 0x68FCB04 | public int get_TotalInteractions() { }
; bytes=8 sha256=629c044fe32313e0c2fe9ea704532b3f04f9a6b5cc7466f2c50efc28dea73852 status=arm64_complete_bound indexed_start=True
0x068FCB04: 006840b9  ldr w0, [x0, #0x68]
0x068FCB08: c0035fd6  ret

; RVA 0x68FCB0C | public void set_TotalInteractions(int value) { }
; bytes=8 sha256=eca5388e52098c4902ed8abfebd325a6aceb7c8484d552dbca45530f2178d4ac status=arm64_complete_bound indexed_start=True
0x068FCB0C: 016800b9  str w1, [x0, #0x68]
0x068FCB10: c0035fd6  ret

; RVA 0x68FCB14 | public ItemConsumeMode get_ConsumeMode() { }
; bytes=8 sha256=ef9af57306b005b930939eecf51d1ddcafe7711f16362371db77b35488da789f status=arm64_complete_bound indexed_start=True
0x068FCB14: 006c40b9  ldr w0, [x0, #0x6c]
0x068FCB18: c0035fd6  ret

; RVA 0x68FCB1C | public List<Combination> get_Combinations() { }
; bytes=8 sha256=36cc23bb70bc1c1b59cc307e6204dbafdeee922c2168929d194e21890ad85195 status=arm64_complete_bound indexed_start=True
0x068FCB1C: 003840f9  ldr x0, [x0, #0x70]
0x068FCB20: c0035fd6  ret

; RVA 0x68FCB24 | public Dictionary<int, List<Action>> get_CostConsumedCallbacks() { }
; bytes=8 sha256=9f68aa97a5258a1e1fbe41f1226846f8b2e5cde4fa5f5b786f7a74d470a04298 status=arm64_complete_bound indexed_start=True
0x068FCB24: 003c40f9  ldr x0, [x0, #0x78]
0x068FCB28: c0035fd6  ret

; RVA 0x68FCB2C | public HashSet<int> get_InvokedCallbackIds() { }
; bytes=8 sha256=509d712a0d747485a74d3684f00fd4941c9c210d3f084bf792b1b75c5e6c3652 status=arm64_complete_bound indexed_start=True
0x068FCB2C: 004040f9  ldr x0, [x0, #0x80]
0x068FCB30: c0035fd6  ret

; RVA 0x68FCB34 | public static int get_NextCallbackId() { }
; bytes=80 sha256=ecaeae83843821371352816edc2395fec47610cedddcf546d4ca3f98a9dadadc status=arm64_complete_bound indexed_start=True
0x068FCB34: fe0f1ef8  str x30, [sp, #-0x20]!
0x068FCB38: f44f01a9  stp x20, x19, [sp, #0x10]
0x068FCB3C: 73a100b0  adrp x19, #0x7d29000
0x068FCB40: 547100d0  adrp x20, #0x7726000
0x068FCB44: 68a66239  ldrb w8, [x19, #0x8a9]
0x068FCB48: 947a43f9  ldr x20, [x20, #0x6f0]
0x068FCB4C: c8000037  tbnz w8, #0, #0x68fcb64
0x068FCB50: 407100d0  adrp x0, #0x7726000
0x068FCB54: 007843f9  ldr x0, [x0, #0x6f0]
0x068FCB58: b00f2297  bl #0x3180a18
0x068FCB5C: 28008052  movz w8, #0x1
0x068FCB60: 68a62239  strb w8, [x19, #0x8a9]
0x068FCB64: 880240f9  ldr x8, [x20]
0x068FCB68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068FCB6C: 085d40f9  ldr x8, [x8, #0xb8]
0x068FCB70: 090140b9  ldr w9, [x8]
0x068FCB74: 20050011  add w0, w9, #1
0x068FCB78: 000100b9  str w0, [x8]
0x068FCB7C: fe0742f8  ldr x30, [sp], #0x20
0x068FCB80: c0035fd6  ret

; RVA 0x68FCB84 | public bool get_HasInteractionCost() { }
; bytes=48 sha256=8248499bf030f127d69891b9482d74c099030bd3ae6dd54fd5e5dd8f0ac43165 status=arm64_complete_bound indexed_start=True
0x068FCB84: 08544139  ldrb w8, [x0, #0x55]
0x068FCB88: 68000034  cbz w8, #0x68fcb94
0x068FCB8C: 20008052  movz w0, #0x1
0x068FCB90: c0035fd6  ret
0x068FCB94: 08504139  ldrb w8, [x0, #0x54]
0x068FCB98: a8000034  cbz w8, #0x68fcbac
0x068FCB9C: 084c40b9  ldr w8, [x0, #0x4c]
0x068FCBA0: 1f010071  cmp w8, #0
0x068FCBA4: e0d79f1a  cset w0, gt
0x068FCBA8: c0035fd6  ret
0x068FCBAC: e0031f2a  mov w0, wzr
0x068FCBB0: c0035fd6  ret

; RVA 0x68FCBB4 | public void .ctor(InteractionCapability capability, Entity entity) { }
; bytes=452 sha256=08706ccf6ee6c45e302ab6941a166f29b380b59804a45427fb69fa0cd13501e4 status=arm64_complete_bound indexed_start=True
0x068FCBB4: fe6fbba9  stp x30, x27, [sp, #-0x50]!
0x068FCBB8: fa6701a9  stp x26, x25, [sp, #0x10]
0x068FCBBC: f85f02a9  stp x24, x23, [sp, #0x20]
0x068FCBC0: f65703a9  stp x22, x21, [sp, #0x30]
0x068FCBC4: f44f04a9  stp x20, x19, [sp, #0x40]
0x068FCBC8: 7aa100b0  adrp x26, #0x7d29000
0x068FCBCC: 5b7100d0  adrp x27, #0x7726000
0x068FCBD0: 567100d0  adrp x22, #0x7726000
0x068FCBD4: 996a00d0  adrp x25, #0x764e000
0x068FCBD8: 986a00d0  adrp x24, #0x764e000
0x068FCBDC: 577100d0  adrp x23, #0x7726000
0x068FCBE0: 48ab6239  ldrb w8, [x26, #0x8aa]
0x068FCBE4: 7b7f43f9  ldr x27, [x27, #0x6f8]
0x068FCBE8: d68243f9  ldr x22, [x22, #0x700]
0x068FCBEC: 398b44f9  ldr x25, [x25, #0x910]
0x068FCBF0: 188f44f9  ldr x24, [x24, #0x918]
0x068FCBF4: f78643f9  ldr x23, [x23, #0x708]
0x068FCBF8: f50302aa  mov x21, x2
0x068FCBFC: f40301aa  mov x20, x1
0x068FCC00: f30300aa  mov x19, x0
0x068FCC04: 48020037  tbnz w8, #0, #0x68fcc4c
0x068FCC08: 407100d0  adrp x0, #0x7726000
0x068FCC0C: 008443f9  ldr x0, [x0, #0x708]
0x068FCC10: 820f2297  bl #0x3180a18
0x068FCC14: 407100d0  adrp x0, #0x7726000
0x068FCC18: 008043f9  ldr x0, [x0, #0x700]
0x068FCC1C: 7f0f2297  bl #0x3180a18
0x068FCC20: 407100d0  adrp x0, #0x7726000
0x068FCC24: 007c43f9  ldr x0, [x0, #0x6f8]
0x068FCC28: 7c0f2297  bl #0x3180a18
0x068FCC2C: 806a00d0  adrp x0, #0x764e000
0x068FCC30: 008c44f9  ldr x0, [x0, #0x918]
0x068FCC34: 790f2297  bl #0x3180a18
0x068FCC38: 806a00d0  adrp x0, #0x764e000
0x068FCC3C: 008844f9  ldr x0, [x0, #0x910]
0x068FCC40: 760f2297  bl #0x3180a18
0x068FCC44: 28008052  movz w8, #0x1
0x068FCC48: 48ab2239  strb w8, [x26, #0x8aa]
0x068FCC4C: 600340f9  ldr x0, [x27]
0x068FCC50: 14102297  bl #0x3180ca0
0x068FCC54: c10240f9  ldr x1, [x22]
0x068FCC58: f60300aa  mov x22, x0
0x068FCC5C: 40e09497  bl #0x4e34d5c
0x068FCC60: e00313aa  mov x0, x19
0x068FCC64: 168c07f8  str x22, [x0, #0x78]!
0x068FCC68: e10316aa  mov x1, x22
0x068FCC6C: 560f2297  bl #0x31809c4
0x068FCC70: 200340f9  ldr x0, [x25]
0x068FCC74: 0b102297  bl #0x3180ca0
0x068FCC78: 010340f9  ldr x1, [x24]
0x068FCC7C: f60300aa  mov x22, x0
0x068FCC80: 92e9a697  bl #0x52b72c8
0x068FCC84: e00313aa  mov x0, x19
0x068FCC88: 160c08f8  str x22, [x0, #0x80]!
0x068FCC8C: e10316aa  mov x1, x22
0x068FCC90: 4d0f2297  bl #0x31809c4
0x068FCC94: e30240f9  ldr x3, [x23]
0x068FCC98: e00313aa  mov x0, x19
0x068FCC9C: e10314aa  mov x1, x20
0x068FCCA0: e20315aa  mov x2, x21
0x068FCCA4: ad899197  bl #0x4d5f358
0x068FCCA8: 740600b4  cbz x20, #0x68fcd74
0x068FCCAC: 881640b9  ldr w8, [x20, #0x14]
0x068FCCB0: e00313aa  mov x0, x19
0x068FCCB4: 684a00b9  str w8, [x19, #0x48]
0x068FCCB8: 881a40b9  ldr w8, [x20, #0x18]
0x068FCCBC: 68a20929  stp w8, w8, [x19, #0x4c]
0x068FCCC0: 88424039  ldrb w8, [x20, #0x10]
0x068FCCC4: 68520139  strb w8, [x19, #0x54]
0x068FCCC8: 811240f9  ldr x1, [x20, #0x20]
0x068FCCCC: 018c05f8  str x1, [x0, #0x58]!
0x068FCCD0: 3d0f2297  bl #0x31809c4
0x068FCCD4: 88464039  ldrb w8, [x20, #0x11]
0x068FCCD8: e00313aa  mov x0, x19
0x068FCCDC: 68560139  strb w8, [x19, #0x55]
0x068FCCE0: 881e40b9  ldr w8, [x20, #0x1c]
0x068FCCE4: 686e00b9  str w8, [x19, #0x6c]
0x068FCCE8: 811640f9  ldr x1, [x20, #0x28]
0x068FCCEC: 010c07f8  str x1, [x0, #0x70]!
0x068FCCF0: 350f2297  bl #0x31809c4
0x068FCCF4: 881640f9  ldr x8, [x20, #0x28]
0x068FCCF8: 280300b4  cbz x8, #0x68fcd5c
0x068FCCFC: e00314aa  mov x0, x20
0x068FCD00: e1031faa  mov x1, xzr
0x068FCD04: 69ede597  bl #0x62782a8
0x068FCD08: a0000036  tbz w0, #0, #0x68fcd1c
0x068FCD0C: 28008052  movz w8, #0x1
0x068FCD10: 68560139  strb w8, [x19, #0x55]
0x068FCD14: 686e00b9  str w8, [x19, #0x6c]
0x068FCD18: 09000014  b #0x68fcd3c
0x068FCD1C: e00314aa  mov x0, x20
0x068FCD20: e1031faa  mov x1, xzr
0x068FCD24: b7ede597  bl #0x6278400
0x068FCD28: a0010036  tbz w0, #0, #0x68fcd5c
0x068FCD2C: 28008052  movz w8, #0x1
0x068FCD30: 69008052  movz w9, #0x3
0x068FCD34: 68560139  strb w8, [x19, #0x55]
0x068FCD38: 696e00b9  str w9, [x19, #0x6c]
0x068FCD3C: 811640f9  ldr x1, [x20, #0x28]
0x068FCD40: e00313aa  mov x0, x19
0x068FCD44: f44f44a9  ldp x20, x19, [sp, #0x40]
0x068FCD48: f65743a9  ldp x22, x21, [sp, #0x30]
0x068FCD4C: f85f42a9  ldp x24, x23, [sp, #0x20]
0x068FCD50: fa6741a9  ldp x26, x25, [sp, #0x10]
0x068FCD54: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x068FCD58: 08000014  b #0x68fcd78
0x068FCD5C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x068FCD60: f65743a9  ldp x22, x21, [sp, #0x30]
0x068FCD64: f85f42a9  ldp x24, x23, [sp, #0x20]
0x068FCD68: fa6741a9  ldp x26, x25, [sp, #0x10]
0x068FCD6C: fe6fc5a8  ldp x30, x27, [sp], #0x50
0x068FCD70: c0035fd6  ret
0x068FCD74: ce0f2297  bl #0x3180cac

; RVA 0x68FCD78 | private void FillItemsToConsume(List<Combination> combinations) { }
; bytes=524 sha256=fdbc25a513888697e1e77ae8de5582b1655fbcb92b936de6235a3df6495652c8 status=arm64_complete_bound indexed_start=True
0x068FCD78: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x068FCD7C: f85f01a9  stp x24, x23, [sp, #0x10]
0x068FCD80: f65702a9  stp x22, x21, [sp, #0x20]
0x068FCD84: f44f03a9  stp x20, x19, [sp, #0x30]
0x068FCD88: 75a100b0  adrp x21, #0x7d29000
0x068FCD8C: 577100d0  adrp x23, #0x7726000
0x068FCD90: a8ae6239  ldrb w8, [x21, #0x8ab]
0x068FCD94: f78a43f9  ldr x23, [x23, #0x710]
0x068FCD98: f40301aa  mov x20, x1
0x068FCD9C: f30300aa  mov x19, x0
0x068FCDA0: c8030037  tbnz w8, #0, #0x68fce18
0x068FCDA4: 407100d0  adrp x0, #0x7726000
0x068FCDA8: 008c43f9  ldr x0, [x0, #0x718]
0x068FCDAC: 1b0f2297  bl #0x3180a18
0x068FCDB0: 407100d0  adrp x0, #0x7726000
0x068FCDB4: 009043f9  ldr x0, [x0, #0x720]
0x068FCDB8: 180f2297  bl #0x3180a18
0x068FCDBC: a06f00b0  adrp x0, #0x76f1000
0x068FCDC0: 008045f9  ldr x0, [x0, #0xb00]
0x068FCDC4: 150f2297  bl #0x3180a18
0x068FCDC8: 406f00d0  adrp x0, #0x76e6000
0x068FCDCC: 00b843f9  ldr x0, [x0, #0x770]
0x068FCDD0: 120f2297  bl #0x3180a18
0x068FCDD4: 407100d0  adrp x0, #0x7726000
0x068FCDD8: 009443f9  ldr x0, [x0, #0x728]
0x068FCDDC: 0f0f2297  bl #0x3180a18
0x068FCDE0: a06f00b0  adrp x0, #0x76f1000
0x068FCDE4: 008445f9  ldr x0, [x0, #0xb08]
0x068FCDE8: 0c0f2297  bl #0x3180a18
0x068FCDEC: 407100d0  adrp x0, #0x7726000
0x068FCDF0: 009843f9  ldr x0, [x0, #0x730]
0x068FCDF4: 090f2297  bl #0x3180a18
0x068FCDF8: 407100d0  adrp x0, #0x7726000
0x068FCDFC: 009c43f9  ldr x0, [x0, #0x738]
0x068FCE00: 060f2297  bl #0x3180a18
0x068FCE04: 407100d0  adrp x0, #0x7726000
0x068FCE08: 008843f9  ldr x0, [x0, #0x710]
0x068FCE0C: 030f2297  bl #0x3180a18
0x068FCE10: 28008052  movz w8, #0x1
0x068FCE14: a8ae2239  strb w8, [x21, #0x8ab]
0x068FCE18: e00240f9  ldr x0, [x23]
0x068FCE1C: 08e040b9  ldr w8, [x0, #0xe0]
0x068FCE20: 68000035  cbnz w8, #0x68fce2c
0x068FCE24: 5a0f2297  bl #0x3180b8c
0x068FCE28: e00240f9  ldr x0, [x23]
0x068FCE2C: 085c40f9  ldr x8, [x0, #0xb8]
0x068FCE30: 597100d0  adrp x25, #0x7726000
0x068FCE34: 587100d0  adrp x24, #0x7726000
0x068FCE38: 150540f9  ldr x21, [x8, #8]
0x068FCE3C: 399343f9  ldr x25, [x25, #0x720]
0x068FCE40: 188f43f9  ldr x24, [x24, #0x718]
0x068FCE44: f50200b5  cbnz x21, #0x68fcea0
0x068FCE48: 08e040b9  ldr w8, [x0, #0xe0]
0x068FCE4C: 68000035  cbnz w8, #0x68fce58
0x068FCE50: 4f0f2297  bl #0x3180b8c
0x068FCE54: e00240f9  ldr x0, [x23]
0x068FCE58: 497100d0  adrp x9, #0x7726000
0x068FCE5C: 085c40f9  ldr x8, [x0, #0xb8]
0x068FCE60: 299543f9  ldr x9, [x9, #0x728]
0x068FCE64: 160140f9  ldr x22, [x8]
0x068FCE68: 200140f9  ldr x0, [x9]
0x068FCE6C: 8d0f2297  bl #0x3180ca0
0x068FCE70: 487100d0  adrp x8, #0x7726000
0x068FCE74: 089943f9  ldr x8, [x8, #0x730]
0x068FCE78: e10316aa  mov x1, x22
0x068FCE7C: e3031faa  mov x3, xzr
0x068FCE80: f50300aa  mov x21, x0
0x068FCE84: 020140f9  ldr x2, [x8]
0x068FCE88: cc66a597  bl #0x52569b8
0x068FCE8C: e80240f9  ldr x8, [x23]
0x068FCE90: e10315aa  mov x1, x21
0x068FCE94: 005d40f9  ldr x0, [x8, #0xb8]
0x068FCE98: 158c00f8  str x21, [x0, #8]!
0x068FCE9C: ca0e2297  bl #0x31809c4
0x068FCEA0: 220340f9  ldr x2, [x25]
0x068FCEA4: e00314aa  mov x0, x20
0x068FCEA8: e10315aa  mov x1, x21
0x068FCEAC: 7b594d97  bl #0x3c53498
0x068FCEB0: 010340f9  ldr x1, [x24]
0x068FCEB4: e8fd4c97  bl #0x3c3c654
0x068FCEB8: e80240f9  ldr x8, [x23]
0x068FCEBC: f40300aa  mov x20, x0
0x068FCEC0: 09e140b9  ldr w9, [x8, #0xe0]
0x068FCEC4: 89000035  cbnz w9, #0x68fced4
0x068FCEC8: e00308aa  mov x0, x8
0x068FCECC: 300f2297  bl #0x3180b8c
0x068FCED0: e80240f9  ldr x8, [x23]
0x068FCED4: 095d40f9  ldr x9, [x8, #0xb8]
0x068FCED8: b96f00b0  adrp x25, #0x76f1000
0x068FCEDC: 586f00d0  adrp x24, #0x76e6000
0x068FCEE0: 350940f9  ldr x21, [x9, #0x10]
0x068FCEE4: 398345f9  ldr x25, [x25, #0xb00]
0x068FCEE8: 18bb43f9  ldr x24, [x24, #0x770]
0x068FCEEC: 150300b5  cbnz x21, #0x68fcf4c
0x068FCEF0: 09e140b9  ldr w9, [x8, #0xe0]
0x068FCEF4: 89000035  cbnz w9, #0x68fcf04
0x068FCEF8: e00308aa  mov x0, x8
0x068FCEFC: 240f2297  bl #0x3180b8c
0x068FCF00: e80240f9  ldr x8, [x23]
0x068FCF04: a96f00b0  adrp x9, #0x76f1000
0x068FCF08: 085d40f9  ldr x8, [x8, #0xb8]
0x068FCF0C: 298545f9  ldr x9, [x9, #0xb08]
0x068FCF10: 160140f9  ldr x22, [x8]
0x068FCF14: 200140f9  ldr x0, [x9]
0x068FCF18: 620f2297  bl #0x3180ca0
0x068FCF1C: 487100d0  adrp x8, #0x7726000
0x068FCF20: 089d43f9  ldr x8, [x8, #0x738]
0x068FCF24: e10316aa  mov x1, x22
0x068FCF28: e3031faa  mov x3, xzr
0x068FCF2C: f50300aa  mov x21, x0
0x068FCF30: 020140f9  ldr x2, [x8]
0x068FCF34: a166a597  bl #0x52569b8
0x068FCF38: e80240f9  ldr x8, [x23]
0x068FCF3C: e10315aa  mov x1, x21
0x068FCF40: 005d40f9  ldr x0, [x8, #0xb8]
0x068FCF44: 150c01f8  str x21, [x0, #0x10]!
0x068FCF48: 9f0e2297  bl #0x31809c4
0x068FCF4C: 220340f9  ldr x2, [x25]
0x068FCF50: e00314aa  mov x0, x20
0x068FCF54: e10315aa  mov x1, x21
0x068FCF58: cf4e4d97  bl #0x3c50a94
0x068FCF5C: 010340f9  ldr x1, [x24]
0x068FCF60: 5e7a4d97  bl #0x3c5b8d8
0x068FCF64: 608e05f8  str x0, [x19, #0x58]!
0x068FCF68: e10300aa  mov x1, x0
0x068FCF6C: e00313aa  mov x0, x19
0x068FCF70: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068FCF74: f65742a9  ldp x22, x21, [sp, #0x20]
0x068FCF78: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068FCF7C: fe67c4a8  ldp x30, x25, [sp], #0x40
0x068FCF80: 910e2217  b #0x31809c4

; RVA 0x68FCF84 | public void AddCostConsumedCallback(Action callback) { }
; bytes=408 sha256=35a7ac3c6c0b1456a385ac008e288f0257f641eefb80cf94ca8ffb684e9bc872 status=arm64_complete_bound indexed_start=True
0x068FCF84: ffc300d1  sub sp, sp, #0x30
0x068FCF88: fe5701a9  stp x30, x21, [sp, #0x10]
0x068FCF8C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068FCF90: 75a100b0  adrp x21, #0x7d29000
0x068FCF94: a8b26239  ldrb w8, [x21, #0x8ac]
0x068FCF98: f30301aa  mov x19, x1
0x068FCF9C: f40300aa  mov x20, x0
0x068FCFA0: a8020037  tbnz w8, #0, #0x68fcff4
0x068FCFA4: 407100d0  adrp x0, #0x7726000
0x068FCFA8: 00a043f9  ldr x0, [x0, #0x740]
0x068FCFAC: 9b0e2297  bl #0x3180a18
0x068FCFB0: 407100d0  adrp x0, #0x7726000
0x068FCFB4: 00a443f9  ldr x0, [x0, #0x748]
0x068FCFB8: 980e2297  bl #0x3180a18
0x068FCFBC: 806a00d0  adrp x0, #0x764e000
0x068FCFC0: 006044f9  ldr x0, [x0, #0x8c0]
0x068FCFC4: 950e2297  bl #0x3180a18
0x068FCFC8: 606b00d0  adrp x0, #0x766a000
0x068FCFCC: 000843f9  ldr x0, [x0, #0x610]
0x068FCFD0: 920e2297  bl #0x3180a18
0x068FCFD4: 406c0090  adrp x0, #0x7684000
0x068FCFD8: 00a441f9  ldr x0, [x0, #0x348]
0x068FCFDC: 8f0e2297  bl #0x3180a18
0x068FCFE0: 606b00d0  adrp x0, #0x766a000
0x068FCFE4: 002843f9  ldr x0, [x0, #0x650]
0x068FCFE8: 8c0e2297  bl #0x3180a18
0x068FCFEC: 28008052  movz w8, #0x1
0x068FCFF0: a8b22239  strb w8, [x21, #0x8ac]
0x068FCFF4: ff0700f9  str xzr, [sp, #8]
0x068FCFF8: 804240f9  ldr x0, [x20, #0x80]
0x068FCFFC: e00800b4  cbz x0, #0x68fd118
0x068FD000: 886a00b0  adrp x8, #0x764e000
0x068FD004: 086144f9  ldr x8, [x8, #0x8c0]
0x068FD008: 818a40b9  ldr w1, [x20, #0x88]
0x068FD00C: 020140f9  ldr x2, [x8]
0x068FD010: 6beaa697  bl #0x52b79bc
0x068FD014: e0000036  tbz w0, #0, #0x68fd030
0x068FD018: 130800b4  cbz x19, #0x68fd118
0x068FD01C: 680e40f9  ldr x8, [x19, #0x18]
0x068FD020: 602240f9  ldr x0, [x19, #0x40]
0x068FD024: 611640f9  ldr x1, [x19, #0x28]
0x068FD028: 00013fd6  blr x8
0x068FD02C: 37000014  b #0x68fd108
0x068FD030: 803e40f9  ldr x0, [x20, #0x78]
0x068FD034: 200700b4  cbz x0, #0x68fd118
0x068FD038: 487100b0  adrp x8, #0x7726000
0x068FD03C: 818a40b9  ldr w1, [x20, #0x88]
0x068FD040: 08a543f9  ldr x8, [x8, #0x748]
0x068FD044: e2230091  add x2, sp, #8
0x068FD048: 030140f9  ldr x3, [x8]
0x068FD04C: 6fe99497  bl #0x4e37608
0x068FD050: 60020037  tbnz w0, #0, #0x68fd09c
0x068FD054: 686b00b0  adrp x8, #0x766a000
0x068FD058: 082943f9  ldr x8, [x8, #0x650]
0x068FD05C: 000140f9  ldr x0, [x8]
0x068FD060: 100f2297  bl #0x3180ca0
0x068FD064: 286c00f0  adrp x8, #0x7684000
0x068FD068: 08a541f9  ldr x8, [x8, #0x348]
0x068FD06C: f50300aa  mov x21, x0
0x068FD070: 010140f9  ldr x1, [x8]
0x068FD074: f11a5d97  bl #0x4043c38
0x068FD078: f50700f9  str x21, [sp, #8]
0x068FD07C: 803e40f9  ldr x0, [x20, #0x78]
0x068FD080: c00400b4  cbz x0, #0x68fd118
0x068FD084: 487100b0  adrp x8, #0x7726000
0x068FD088: 818a40b9  ldr w1, [x20, #0x88]
0x068FD08C: 08a143f9  ldr x8, [x8, #0x740]
0x068FD090: e20315aa  mov x2, x21
0x068FD094: 030140f9  ldr x3, [x8]
0x068FD098: b0e29497  bl #0x4e35b58
0x068FD09C: e00740f9  ldr x0, [sp, #8]
0x068FD0A0: c00300b4  cbz x0, #0x68fd118
0x068FD0A4: 696b00b0  adrp x9, #0x766a000
0x068FD0A8: 290943f9  ldr x9, [x9, #0x610]
0x068FD0AC: 0a1c40b9  ldr w10, [x0, #0x1c]
0x068FD0B0: 080840f9  ldr x8, [x0, #0x10]
0x068FD0B4: 290140f9  ldr x9, [x9]
0x068FD0B8: 4a050011  add w10, w10, #1
0x068FD0BC: 0a1c00b9  str w10, [x0, #0x1c]
0x068FD0C0: c80200b4  cbz x8, #0x68fd118
0x068FD0C4: 0a1880b9  ldrsw x10, [x0, #0x18]
0x068FD0C8: 0b1940b9  ldr w11, [x8, #0x18]
0x068FD0CC: 5f010b6b  cmp w10, w11
0x068FD0D0: 22010054  b.hs #0x68fd0f4
0x068FD0D4: 49050011  add w9, w10, #1
0x068FD0D8: 080d0a8b  add x8, x8, x10, lsl #3
0x068FD0DC: 091800b9  str w9, [x0, #0x18]
0x068FD0E0: 130d02f8  str x19, [x8, #0x20]!
0x068FD0E4: e00308aa  mov x0, x8
0x068FD0E8: e10313aa  mov x1, x19
0x068FD0EC: 360e2297  bl #0x31809c4
0x068FD0F0: 06000014  b #0x68fd108
0x068FD0F4: 281140f9  ldr x8, [x9, #0x20]
0x068FD0F8: e10313aa  mov x1, x19
0x068FD0FC: 086140f9  ldr x8, [x8, #0xc0]
0x068FD100: 023940f9  ldr x2, [x8, #0x70]
0x068FD104: da1c5d97  bl #0x404446c
0x068FD108: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068FD10C: fe5741a9  ldp x30, x21, [sp, #0x10]
0x068FD110: ffc30091  add sp, sp, #0x30
0x068FD114: c0035fd6  ret
0x068FD118: e50e2297  bl #0x3180cac

; RVA 0x68FD11C | public void TryInvokeCallback(int interactionCallbackId) { }
; bytes=412 sha256=c871ea5b71640dd9ede01d6191115878540b97378eff677508c6d6c590355b01 status=arm64_complete_bound indexed_start=True
0x068FD11C: ff4301d1  sub sp, sp, #0x50
0x068FD120: fe6701a9  stp x30, x25, [sp, #0x10]
0x068FD124: f85f02a9  stp x24, x23, [sp, #0x20]
0x068FD128: f65703a9  stp x22, x21, [sp, #0x30]
0x068FD12C: f44f04a9  stp x20, x19, [sp, #0x40]
0x068FD130: 75a10090  adrp x21, #0x7d29000
0x068FD134: a8b66239  ldrb w8, [x21, #0x8ad]
0x068FD138: f303012a  mov w19, w1
0x068FD13C: f40300aa  mov x20, x0
0x068FD140: 08030037  tbnz w8, #0, #0x68fd1a0
0x068FD144: 406e00d0  adrp x0, #0x76c7000
0x068FD148: 009447f9  ldr x0, [x0, #0xf28]
0x068FD14C: 330e2297  bl #0x3180a18
0x068FD150: 407100b0  adrp x0, #0x7726000
0x068FD154: 00a843f9  ldr x0, [x0, #0x750]
0x068FD158: 300e2297  bl #0x3180a18
0x068FD15C: 407100b0  adrp x0, #0x7726000
0x068FD160: 00a443f9  ldr x0, [x0, #0x748]
0x068FD164: 2d0e2297  bl #0x3180a18
0x068FD168: 806a00b0  adrp x0, #0x764e000
0x068FD16C: 000844f9  ldr x0, [x0, #0x810]
0x068FD170: 2a0e2297  bl #0x3180a18
0x068FD174: 406e00d0  adrp x0, #0x76c7000
0x068FD178: 009847f9  ldr x0, [x0, #0xf30]
0x068FD17C: 270e2297  bl #0x3180a18
0x068FD180: 407100b0  adrp x0, #0x7726000
0x068FD184: 00ac43f9  ldr x0, [x0, #0x758]
0x068FD188: 240e2297  bl #0x3180a18
0x068FD18C: 407100b0  adrp x0, #0x7726000
0x068FD190: 008843f9  ldr x0, [x0, #0x710]
0x068FD194: 210e2297  bl #0x3180a18
0x068FD198: 28008052  movz w8, #0x1
0x068FD19C: a8b62239  strb w8, [x21, #0x8ad]
0x068FD1A0: ff0700f9  str xzr, [sp, #8]
0x068FD1A4: 803e40f9  ldr x0, [x20, #0x78]
0x068FD1A8: 600800b4  cbz x0, #0x68fd2b4
0x068FD1AC: 487100b0  adrp x8, #0x7726000
0x068FD1B0: 08a543f9  ldr x8, [x8, #0x748]
0x068FD1B4: e2230091  add x2, sp, #8
0x068FD1B8: e103132a  mov w1, w19
0x068FD1BC: 030140f9  ldr x3, [x8]
0x068FD1C0: 12e99497  bl #0x4e37608
0x068FD1C4: f50740f9  ldr x21, [sp, #8]
0x068FD1C8: d50500b4  cbz x21, #0x68fd280
0x068FD1CC: 587100b0  adrp x24, #0x7726000
0x068FD1D0: 188b43f9  ldr x24, [x24, #0x710]
0x068FD1D4: 000340f9  ldr x0, [x24]
0x068FD1D8: 08e040b9  ldr w8, [x0, #0xe0]
0x068FD1DC: 68000035  cbnz w8, #0x68fd1e8
0x068FD1E0: 6b0e2297  bl #0x3180b8c
0x068FD1E4: 000340f9  ldr x0, [x24]
0x068FD1E8: 085c40f9  ldr x8, [x0, #0xb8]
0x068FD1EC: 596e00d0  adrp x25, #0x76c7000
0x068FD1F0: 160d40f9  ldr x22, [x8, #0x18]
0x068FD1F4: 399b47f9  ldr x25, [x25, #0xf30]
0x068FD1F8: f60200b5  cbnz x22, #0x68fd254
0x068FD1FC: 08e040b9  ldr w8, [x0, #0xe0]
0x068FD200: 68000035  cbnz w8, #0x68fd20c
0x068FD204: 620e2297  bl #0x3180b8c
0x068FD208: 000340f9  ldr x0, [x24]
0x068FD20C: 496e00d0  adrp x9, #0x76c7000
0x068FD210: 085c40f9  ldr x8, [x0, #0xb8]
0x068FD214: 299547f9  ldr x9, [x9, #0xf28]
0x068FD218: 170140f9  ldr x23, [x8]
0x068FD21C: 200140f9  ldr x0, [x9]
0x068FD220: a00e2297  bl #0x3180ca0
0x068FD224: 487100b0  adrp x8, #0x7726000
0x068FD228: 08ad43f9  ldr x8, [x8, #0x758]
0x068FD22C: e10317aa  mov x1, x23
0x068FD230: e3031faa  mov x3, xzr
0x068FD234: f60300aa  mov x22, x0
0x068FD238: 020140f9  ldr x2, [x8]
0x068FD23C: e693a897  bl #0x53221d4
0x068FD240: 080340f9  ldr x8, [x24]
0x068FD244: e10316aa  mov x1, x22
0x068FD248: 005d40f9  ldr x0, [x8, #0xb8]
0x068FD24C: 168c01f8  str x22, [x0, #0x18]!
0x068FD250: dd0d2297  bl #0x31809c4
0x068FD254: 220340f9  ldr x2, [x25]
0x068FD258: e00315aa  mov x0, x21
0x068FD25C: e10316aa  mov x1, x22
0x068FD260: 541f5d97  bl #0x4044fb0
0x068FD264: 803e40f9  ldr x0, [x20, #0x78]
0x068FD268: 600200b4  cbz x0, #0x68fd2b4
0x068FD26C: 487100b0  adrp x8, #0x7726000
0x068FD270: 08a943f9  ldr x8, [x8, #0x750]
0x068FD274: e103132a  mov w1, w19
0x068FD278: 020140f9  ldr x2, [x8]
0x068FD27C: 59e79497  bl #0x4e36fe0
0x068FD280: 804240f9  ldr x0, [x20, #0x80]
0x068FD284: 800100b4  cbz x0, #0x68fd2b4
0x068FD288: 886a00b0  adrp x8, #0x764e000
0x068FD28C: 080944f9  ldr x8, [x8, #0x810]
0x068FD290: e103132a  mov w1, w19
0x068FD294: 020140f9  ldr x2, [x8]
0x068FD298: 8deca697  bl #0x52b84cc
0x068FD29C: f44f44a9  ldp x20, x19, [sp, #0x40]
0x068FD2A0: f65743a9  ldp x22, x21, [sp, #0x30]
0x068FD2A4: f85f42a9  ldp x24, x23, [sp, #0x20]
0x068FD2A8: fe6741a9  ldp x30, x25, [sp, #0x10]
0x068FD2AC: ff430191  add sp, sp, #0x50
0x068FD2B0: c0035fd6  ret
0x068FD2B4: 7e0e2297  bl #0x3180cac

