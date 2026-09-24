; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25725 Merger.MergeBoard.Utils.SpawningItemsUtils
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A4E898 | public static ItemSpawnable GetItemToSpawn(Entity entity, SpawnerComponent spawnerComponent, TimeCycleComponent timeCycleComponent, InteractionComponent interactionComponent) { }
; bytes=320 sha256=dc561fe16669dd245513d37ce8115a3804d39280c8663ebba3a2c77cc32366d6 status=arm64_complete_bound indexed_start=True
0x06A4E898: ffc304d1  sub sp, sp, #0x130
0x06A4E89C: fd7b00f9  str x29, [sp, #0xf0]
0x06A4E8A0: fe5f10a9  stp x30, x23, [sp, #0x100]
0x06A4E8A4: f65711a9  stp x22, x21, [sp, #0x110]
0x06A4E8A8: f44f12a9  stp x20, x19, [sp, #0x120]
0x06A4E8AC: f7960090  adrp x23, #0x7d2a000
0x06A4E8B0: e8aa5639  ldrb w8, [x23, #0x5aa]
0x06A4E8B4: f30303aa  mov x19, x3
0x06A4E8B8: f60302aa  mov x22, x2
0x06A4E8BC: f40301aa  mov x20, x1
0x06A4E8C0: f50300aa  mov x21, x0
0x06A4E8C4: 28010037  tbnz w8, #0, #0x6a4e8e8
0x06A4E8C8: 006700b0  adrp x0, #0x772f000
0x06A4E8CC: 009847f9  ldr x0, [x0, #0xf30]
0x06A4E8D0: 52c81c97  bl #0x3180a18
0x06A4E8D4: 006700b0  adrp x0, #0x772f000
0x06A4E8D8: 009c47f9  ldr x0, [x0, #0xf38]
0x06A4E8DC: 4fc81c97  bl #0x3180a18
0x06A4E8E0: 28008052  movz w8, #0x1
0x06A4E8E4: e8aa1639  strb w8, [x23, #0x5aa]
0x06A4E8E8: 800240f9  ldr x0, [x20]
0x06A4E8EC: 400700b4  cbz x0, #0x6a4e9d4
0x06A4E8F0: e1031faa  mov x1, xzr
0x06A4E8F4: 1b68d697  bl #0x5fe8960
0x06A4E8F8: 20050037  tbnz w0, #0, #0x6a4e99c
0x06A4E8FC: c84240b9  ldr w8, [x22, #0x40]
0x06A4E900: df3a00b9  str wzr, [x22, #0x38]
0x06A4E904: 08050011  add w8, w8, #1
0x06A4E908: c84200b9  str w8, [x22, #0x40]
0x06A4E90C: 800240f9  ldr x0, [x20]
0x06A4E910: 200600b4  cbz x0, #0x6a4e9d4
0x06A4E914: 890a40b9  ldr w9, [x20, #8]
0x06A4E918: 620a40f9  ldr x2, [x19, #0x10]
0x06A4E91C: e3031faa  mov x3, xzr
0x06A4E920: 2101080b  add w1, w9, w8
0x06A4E924: 7868d697  bl #0x5fe8b04
0x06A4E928: e0430191  add x0, sp, #0x50
0x06A4E92C: 020a8052  movz w2, #0x50
0x06A4E930: e10316aa  mov x1, x22
0x06A4E934: 0f001e94  bl #0x71ce970
0x06A4E938: f50400b4  cbz x21, #0x6a4e9d4
0x06A4E93C: 086700b0  adrp x8, #0x772f000
0x06A4E940: 089d47f9  ldr x8, [x8, #0xf38]
0x06A4E944: e0830291  add x0, sp, #0xa0
0x06A4E948: e1430191  add x1, sp, #0x50
0x06A4E94C: 020a8052  movz w2, #0x50
0x06A4E950: 160140f9  ldr x22, [x8]
0x06A4E954: 07001e94  bl #0x71ce970
0x06A4E958: e1830291  add x1, sp, #0xa0
0x06A4E95C: e00315aa  mov x0, x21
0x06A4E960: e20316aa  mov x2, x22
0x06A4E964: d93c4797  bl #0x3c1dcc8
0x06A4E968: 8002c03d  ldr q0, [x20]
0x06A4E96C: 096700b0  adrp x9, #0x772f000
0x06A4E970: 880a40f9  ldr x8, [x20, #0x10]
0x06A4E974: 299947f9  ldr x9, [x9, #0xf30]
0x06A4E978: e00f803d  str q0, [sp, #0x30]
0x06A4E97C: e00fc03d  ldr q0, [sp, #0x30]
0x06A4E980: e1830291  add x1, sp, #0xa0
0x06A4E984: 220140f9  ldr x2, [x9]
0x06A4E988: e00315aa  mov x0, x21
0x06A4E98C: e82300f9  str x8, [sp, #0x40]
0x06A4E990: e02b803d  str q0, [sp, #0xa0]
0x06A4E994: e85b00f9  str x8, [sp, #0xb0]
0x06A4E998: 633c4797  bl #0x3c1db24
0x06A4E99C: 681240f9  ldr x8, [x19, #0x20]
0x06A4E9A0: 610240ad  ldp q1, q0, [x19]
0x06A4E9A4: 800240f9  ldr x0, [x20]
0x06A4E9A8: e1030091  mov x1, sp
0x06A4E9AC: e2031faa  mov x2, xzr
0x06A4E9B0: e81300f9  str x8, [sp, #0x20]
0x06A4E9B4: e10300ad  stp q1, q0, [sp]
0x06A4E9B8: 08000094  bl #0x6a4e9d8
0x06A4E9BC: f44f52a9  ldp x20, x19, [sp, #0x120]
0x06A4E9C0: f65751a9  ldp x22, x21, [sp, #0x110]
0x06A4E9C4: fe5f50a9  ldp x30, x23, [sp, #0x100]
0x06A4E9C8: fd7b40f9  ldr x29, [sp, #0xf0]
0x06A4E9CC: ffc30491  add sp, sp, #0x130
0x06A4E9D0: c0035fd6  ret
0x06A4E9D4: b6c81c97  bl #0x3180cac

; RVA 0x6A4EBA8 | public static ItemSpawnable GetItemToProduce(Entity entity, ProducerComponent producerComponent, TimeCycleComponent timeCycleComponent, InteractionComponent interactionComponent, IMergingConfigurationModel mergingConfigurationModel, IPowerBoostDataProvider powerBoostDataProvider) { }
; bytes=644 sha256=de8c54dc13c5e97cf66e2ea2b9c16d44e6ae3fdb0571cc4b6475ae1fd624601e status=arm64_complete_bound indexed_start=True
0x06A4EBA8: ff4305d1  sub sp, sp, #0x150
0x06A4EBAC: fd7b00f9  str x29, [sp, #0xf0]
0x06A4EBB0: fe6f10a9  stp x30, x27, [sp, #0x100]
0x06A4EBB4: fa6711a9  stp x26, x25, [sp, #0x110]
0x06A4EBB8: f85f12a9  stp x24, x23, [sp, #0x120]
0x06A4EBBC: f65713a9  stp x22, x21, [sp, #0x130]
0x06A4EBC0: f44f14a9  stp x20, x19, [sp, #0x140]
0x06A4EBC4: f9960090  adrp x25, #0x7d2a000
0x06A4EBC8: 28af5639  ldrb w8, [x25, #0x5ab]
0x06A4EBCC: f30305aa  mov x19, x5
0x06A4EBD0: f40304aa  mov x20, x4
0x06A4EBD4: f70303aa  mov x23, x3
0x06A4EBD8: f80302aa  mov x24, x2
0x06A4EBDC: f50301aa  mov x21, x1
0x06A4EBE0: f60300aa  mov x22, x0
0x06A4EBE4: 68030037  tbnz w8, #0, #0x6a4ec50
0x06A4EBE8: 006700b0  adrp x0, #0x772f000
0x06A4EBEC: 00ac47f9  ldr x0, [x0, #0xf58]
0x06A4EBF0: 8ac71c97  bl #0x3180a18
0x06A4EBF4: 006700b0  adrp x0, #0x772f000
0x06A4EBF8: 009c47f9  ldr x0, [x0, #0xf38]
0x06A4EBFC: 87c71c97  bl #0x3180a18
0x06A4EC00: 60610090  adrp x0, #0x767a000
0x06A4EC04: 007c42f9  ldr x0, [x0, #0x4f8]
0x06A4EC08: 84c71c97  bl #0x3180a18
0x06A4EC0C: 60610090  adrp x0, #0x767a000
0x06A4EC10: 008042f9  ldr x0, [x0, #0x500]
0x06A4EC14: 81c71c97  bl #0x3180a18
0x06A4EC18: c0640090  adrp x0, #0x76e6000
0x06A4EC1C: 009446f9  ldr x0, [x0, #0xd28]
0x06A4EC20: 7ec71c97  bl #0x3180a18
0x06A4EC24: 60610090  adrp x0, #0x767a000
0x06A4EC28: 008442f9  ldr x0, [x0, #0x508]
0x06A4EC2C: 7bc71c97  bl #0x3180a18
0x06A4EC30: 006700b0  adrp x0, #0x772f000
0x06A4EC34: 00b047f9  ldr x0, [x0, #0xf60]
0x06A4EC38: 78c71c97  bl #0x3180a18
0x06A4EC3C: 006700b0  adrp x0, #0x772f000
0x06A4EC40: 00b447f9  ldr x0, [x0, #0xf68]
0x06A4EC44: 75c71c97  bl #0x3180a18
0x06A4EC48: 28008052  movz w8, #0x1
0x06A4EC4C: 28af1639  strb w8, [x25, #0x5ab]
0x06A4EC50: ff7f00f9  str xzr, [sp, #0xf8]
0x06A4EC54: a00240f9  ldr x0, [x21]
0x06A4EC58: 800e00b4  cbz x0, #0x6a4ee28
0x06A4EC5C: e1031faa  mov x1, xzr
0x06A4EC60: 4067d697  bl #0x5fe8960
0x06A4EC64: 60000036  tbz w0, #0, #0x6a4ec70
0x06A4EC68: f60400b5  cbnz x22, #0x6a4ed04
0x06A4EC6C: 6f000014  b #0x6a4ee28
0x06A4EC70: 084340b9  ldr w8, [x24, #0x40]
0x06A4EC74: 1f3b00b9  str wzr, [x24, #0x38]
0x06A4EC78: 08050011  add w8, w8, #1
0x06A4EC7C: 084300b9  str w8, [x24, #0x40]
0x06A4EC80: a00240f9  ldr x0, [x21]
0x06A4EC84: 200d00b4  cbz x0, #0x6a4ee28
0x06A4EC88: a90a40b9  ldr w9, [x21, #8]
0x06A4EC8C: e20a40f9  ldr x2, [x23, #0x10]
0x06A4EC90: e3031faa  mov x3, xzr
0x06A4EC94: 2101080b  add w1, w9, w8
0x06A4EC98: 9b67d697  bl #0x5fe8b04
0x06A4EC9C: e0430191  add x0, sp, #0x50
0x06A4ECA0: 020a8052  movz w2, #0x50
0x06A4ECA4: e10318aa  mov x1, x24
0x06A4ECA8: 32ff1d94  bl #0x71ce970
0x06A4ECAC: f60b00b4  cbz x22, #0x6a4ee28
0x06A4ECB0: 086700b0  adrp x8, #0x772f000
0x06A4ECB4: 089d47f9  ldr x8, [x8, #0xf38]
0x06A4ECB8: e0830291  add x0, sp, #0xa0
0x06A4ECBC: e1430191  add x1, sp, #0x50
0x06A4ECC0: 020a8052  movz w2, #0x50
0x06A4ECC4: 180140f9  ldr x24, [x8]
0x06A4ECC8: 2aff1d94  bl #0x71ce970
0x06A4ECCC: e1830291  add x1, sp, #0xa0
0x06A4ECD0: e00316aa  mov x0, x22
0x06A4ECD4: e20318aa  mov x2, x24
0x06A4ECD8: fc3b4797  bl #0x3c1dcc8
0x06A4ECDC: a10240ad  ldp q1, q0, [x21]
0x06A4ECE0: 086700b0  adrp x8, #0x772f000
0x06A4ECE4: 08ad47f9  ldr x8, [x8, #0xf58]
0x06A4ECE8: e1830291  add x1, sp, #0xa0
0x06A4ECEC: e18301ad  stp q1, q0, [sp, #0x30]
0x06A4ECF0: e08741ad  ldp q0, q1, [sp, #0x30]
0x06A4ECF4: 020140f9  ldr x2, [x8]
0x06A4ECF8: e00316aa  mov x0, x22
0x06A4ECFC: e00705ad  stp q0, q1, [sp, #0xa0]
0x06A4ED00: 223b4797  bl #0x3c1d988
0x06A4ED04: 68610090  adrp x8, #0x767a000
0x06A4ED08: 087d42f9  ldr x8, [x8, #0x4f8]
0x06A4ED0C: e1e30391  add x1, sp, #0xf8
0x06A4ED10: e00316aa  mov x0, x22
0x06A4ED14: 020140f9  ldr x2, [x8]
0x06A4ED18: e73f4797  bl #0x3c1ecb4
0x06A4ED1C: c0050036  tbz w0, #0, #0x6a4edd4
0x06A4ED20: 1b6700b0  adrp x27, #0x772f000
0x06A4ED24: 7bb747f9  ldr x27, [x27, #0xf68]
0x06A4ED28: f87f40f9  ldr x24, [sp, #0xf8]
0x06A4ED2C: 600340f9  ldr x0, [x27]
0x06A4ED30: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4ED34: 68000035  cbnz w8, #0x6a4ed40
0x06A4ED38: 95c71c97  bl #0x3180b8c
0x06A4ED3C: 600340f9  ldr x0, [x27]
0x06A4ED40: 085c40f9  ldr x8, [x0, #0xb8]
0x06A4ED44: 190540f9  ldr x25, [x8, #8]
0x06A4ED48: f90200b5  cbnz x25, #0x6a4eda4
0x06A4ED4C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4ED50: 68000035  cbnz w8, #0x6a4ed5c
0x06A4ED54: 8ec71c97  bl #0x3180b8c
0x06A4ED58: 600340f9  ldr x0, [x27]
0x06A4ED5C: 69610090  adrp x9, #0x767a000
0x06A4ED60: 085c40f9  ldr x8, [x0, #0xb8]
0x06A4ED64: 298542f9  ldr x9, [x9, #0x508]
0x06A4ED68: 1a0140f9  ldr x26, [x8]
0x06A4ED6C: 200140f9  ldr x0, [x9]
0x06A4ED70: ccc71c97  bl #0x3180ca0
0x06A4ED74: 086700b0  adrp x8, #0x772f000
0x06A4ED78: 08b147f9  ldr x8, [x8, #0xf60]
0x06A4ED7C: e1031aaa  mov x1, x26
0x06A4ED80: e3031faa  mov x3, xzr
0x06A4ED84: f90300aa  mov x25, x0
0x06A4ED88: 020140f9  ldr x2, [x8]
0x06A4ED8C: 0b1fa097  bl #0x52569b8
0x06A4ED90: 680340f9  ldr x8, [x27]
0x06A4ED94: e10319aa  mov x1, x25
0x06A4ED98: 005d40f9  ldr x0, [x8, #0xb8]
0x06A4ED9C: 198c00f8  str x25, [x0, #8]!
0x06A4EDA0: 09c71c97  bl #0x31809c4
0x06A4EDA4: 68610090  adrp x8, #0x767a000
0x06A4EDA8: 088142f9  ldr x8, [x8, #0x500]
0x06A4EDAC: e00318aa  mov x0, x24
0x06A4EDB0: e10319aa  mov x1, x25
0x06A4EDB4: 020140f9  ldr x2, [x8]
0x06A4EDB8: 37074897  bl #0x3c50a94
0x06A4EDBC: c8640090  adrp x8, #0x76e6000
0x06A4EDC0: 089546f9  ldr x8, [x8, #0xd28]
0x06A4EDC4: 010140f9  ldr x1, [x8]
0x06A4EDC8: 82444897  bl #0x3c5ffd0
0x06A4EDCC: e20300aa  mov x2, x0
0x06A4EDD0: 02000014  b #0x6a4edd8
0x06A4EDD4: e2031faa  mov x2, xzr
0x06A4EDD8: e81240f9  ldr x8, [x23, #0x20]
0x06A4EDDC: e10240ad  ldp q1, q0, [x23]
0x06A4EDE0: a00240f9  ldr x0, [x21]
0x06A4EDE4: e1030091  mov x1, sp
0x06A4EDE8: e81300f9  str x8, [sp, #0x20]
0x06A4EDEC: e10300ad  stp q1, q0, [sp]
0x06A4EDF0: fafeff97  bl #0x6a4e9d8
0x06A4EDF4: a20a40f9  ldr x2, [x21, #0x10]
0x06A4EDF8: e10316aa  mov x1, x22
0x06A4EDFC: e30314aa  mov x3, x20
0x06A4EE00: e40313aa  mov x4, x19
0x06A4EE04: 0a000094  bl #0x6a4ee2c
0x06A4EE08: f44f54a9  ldp x20, x19, [sp, #0x140]
0x06A4EE0C: f65753a9  ldp x22, x21, [sp, #0x130]
0x06A4EE10: f85f52a9  ldp x24, x23, [sp, #0x120]
0x06A4EE14: fa6751a9  ldp x26, x25, [sp, #0x110]
0x06A4EE18: fe6f50a9  ldp x30, x27, [sp, #0x100]
0x06A4EE1C: fd7b40f9  ldr x29, [sp, #0xf0]
0x06A4EE20: ff430591  add sp, sp, #0x150
0x06A4EE24: c0035fd6  ret
0x06A4EE28: a1c71c97  bl #0x3180cac

; RVA 0x6A4E9D8 | private static ItemSpawnable GetItemFromQueue(ItemSpawningQueue itemsQueue, InteractionComponent interactionComponent, List<ItemPayloadBase> consumedItems) { }
; bytes=464 sha256=705ca5d922294082dfbb29d7e78a8c8076e87b8490678afaddfbe982e856644a status=arm64_complete_bound indexed_start=True
0x06A4E9D8: fe0f1df8  str x30, [sp, #-0x30]!
0x06A4E9DC: f65701a9  stp x22, x21, [sp, #0x10]
0x06A4E9E0: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A4E9E4: f6960090  adrp x22, #0x7d2a000
0x06A4E9E8: c8b25639  ldrb w8, [x22, #0x5ac]
0x06A4E9EC: f30302aa  mov x19, x2
0x06A4E9F0: f50301aa  mov x21, x1
0x06A4E9F4: f40300aa  mov x20, x0
0x06A4E9F8: 88010037  tbnz w8, #0, #0x6a4ea28
0x06A4E9FC: 00600090  adrp x0, #0x764e000
0x06A4EA00: 00cc42f9  ldr x0, [x0, #0x598]
0x06A4EA04: 05c81c97  bl #0x3180a18
0x06A4EA08: c06400b0  adrp x0, #0x76e7000
0x06A4EA0C: 00e042f9  ldr x0, [x0, #0x5c0]
0x06A4EA10: 02c81c97  bl #0x3180a18
0x06A4EA14: 006700b0  adrp x0, #0x772f000
0x06A4EA18: 00a047f9  ldr x0, [x0, #0xf40]
0x06A4EA1C: ffc71c97  bl #0x3180a18
0x06A4EA20: 28008052  movz w8, #0x1
0x06A4EA24: c8b21639  strb w8, [x22, #0x5ac]
0x06A4EA28: d40200b4  cbz x20, #0x6a4ea80
0x06A4EA2C: c86400b0  adrp x8, #0x76e7000
0x06A4EA30: 08e142f9  ldr x8, [x8, #0x5c0]
0x06A4EA34: 000140f9  ldr x0, [x8]
0x06A4EA38: e1031f2a  mov w1, wzr
0x06A4EA3C: 30c81c97  bl #0x3180afc
0x06A4EA40: e10300aa  mov x1, x0
0x06A4EA44: a20a40f9  ldr x2, [x21, #0x10]
0x06A4EA48: e00314aa  mov x0, x20
0x06A4EA4C: e30313aa  mov x3, x19
0x06A4EA50: e4031faa  mov x4, xzr
0x06A4EA54: 686cd697  bl #0x5fe9bf4
0x06A4EA58: f30300aa  mov x19, x0
0x06A4EA5C: 800200b4  cbz x0, #0x6a4eaac
0x06A4EA60: 600a40f9  ldr x0, [x19, #0x10]
0x06A4EA64: 600200b4  cbz x0, #0x6a4eab0
0x06A4EA68: 080040f9  ldr x8, [x0]
0x06A4EA6C: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A4EA70: 20013fd6  blr x9
0x06A4EA74: 1f0000f1  cmp x0, #0
0x06A4EA78: e003939a  csel x0, xzr, x19, eq
0x06A4EA7C: 0d000014  b #0x6a4eab0
0x06A4EA80: 08600090  adrp x8, #0x764e000
0x06A4EA84: 08cd42f9  ldr x8, [x8, #0x598]
0x06A4EA88: 000140f9  ldr x0, [x8]
0x06A4EA8C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4EA90: 48000035  cbnz w8, #0x6a4ea98
0x06A4EA94: 3ec81c97  bl #0x3180b8c
0x06A4EA98: 086700b0  adrp x8, #0x772f000
0x06A4EA9C: 08a147f9  ldr x8, [x8, #0xf40]
0x06A4EAA0: 000140f9  ldr x0, [x8]
0x06A4EAA4: e1031faa  mov x1, xzr
0x06A4EAA8: 746d1194  bl #0x6eaa078
0x06A4EAAC: e0031faa  mov x0, xzr
0x06A4EAB0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A4EAB4: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A4EAB8: fe0743f8  ldr x30, [sp], #0x30
0x06A4EABC: c0035fd6  ret
0x06A4EAC0: 02000014  b #0x6a4eac8
0x06A4EAC4: 01000014  b #0x6a4eac8
0x06A4EAC8: f30300aa  mov x19, x0
0x06A4EACC: 3f040071  cmp w1, #1
0x06A4EAD0: 61060054  b.ne #0x6a4eb9c
0x06A4EAD4: e00313aa  mov x0, x19
0x06A4EAD8: 8eff1d94  bl #0x71ce910
0x06A4EADC: f30300aa  mov x19, x0
0x06A4EAE0: 00600090  adrp x0, #0x764e000
0x06A4EAE4: 006c42f9  ldr x0, [x0, #0x4d8]
0x06A4EAE8: d1c71c97  bl #0x3180a2c
0x06A4EAEC: 680240f9  ldr x8, [x19]
0x06A4EAF0: 010140f9  ldr x1, [x8]
0x06A4EAF4: 79c91c97  bl #0x31810d8
0x06A4EAF8: c0030036  tbz w0, #0, #0x6a4eb70
0x06A4EAFC: 730240f9  ldr x19, [x19]
0x06A4EB00: 88ff1d94  bl #0x71ce920
0x06A4EB04: 730400b4  cbz x19, #0x6a4eb90
0x06A4EB08: 680240f9  ldr x8, [x19]
0x06A4EB0C: e00313aa  mov x0, x19
0x06A4EB10: 098558a9  ldp x9, x1, [x8, #0x188]
0x06A4EB14: 20013fd6  blr x9
0x06A4EB18: f30300aa  mov x19, x0
0x06A4EB1C: 006700b0  adrp x0, #0x772f000
0x06A4EB20: 00a447f9  ldr x0, [x0, #0xf48]
0x06A4EB24: c2c71c97  bl #0x3180a2c
0x06A4EB28: f40300aa  mov x20, x0
0x06A4EB2C: 006700b0  adrp x0, #0x772f000
0x06A4EB30: 00a847f9  ldr x0, [x0, #0xf50]
0x06A4EB34: bec71c97  bl #0x3180a2c
0x06A4EB38: e20300aa  mov x2, x0
0x06A4EB3C: e00314aa  mov x0, x20
0x06A4EB40: e10313aa  mov x1, x19
0x06A4EB44: e3031faa  mov x3, xzr
0x06A4EB48: 7ca2aa97  bl #0x54f7538
0x06A4EB4C: f30300aa  mov x19, x0
0x06A4EB50: 00600090  adrp x0, #0x764e000
0x06A4EB54: 00cc42f9  ldr x0, [x0, #0x598]
0x06A4EB58: b5c71c97  bl #0x3180a2c
0x06A4EB5C: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4EB60: 48000035  cbnz w8, #0x6a4eb68
0x06A4EB64: 0ac81c97  bl #0x3180b8c
0x06A4EB68: e00313aa  mov x0, x19
0x06A4EB6C: ceffff17  b #0x6a4eaa4
0x06A4EB70: 00018052  movz w0, #0x8
0x06A4EB74: 6fff1d94  bl #0x71ce930
0x06A4EB78: 680240f9  ldr x8, [x19]
0x06A4EB7C: 080000f9  str x8, [x0]
0x06A4EB80: 213c00d0  adrp x1, #0x71d4000
0x06A4EB84: 21a03491  add x1, x1, #0xd28
0x06A4EB88: e2031faa  mov x2, xzr
0x06A4EB8C: 6dff1d94  bl #0x71ce940
0x06A4EB90: 47c81c97  bl #0x3180cac
0x06A4EB94: f30300aa  mov x19, x0
0x06A4EB98: 62ff1d94  bl #0x71ce920
0x06A4EB9C: e00313aa  mov x0, x19
0x06A4EBA0: 6e5b2097  bl #0x3265958
0x06A4EBA4: 5cea0e97  bl #0x2e09514

; RVA 0x6A4F57C | public static void DecrementItemsToProduce(ref TimeCycleComponent timeCycle, Entity entity) { }
; bytes=172 sha256=b96498f04f9c044d033dd19929dbf85790979e0e4afbc9083fa0bc3a2e8e7be3 status=arm64_complete_bound indexed_start=True
0x06A4F57C: ff0303d1  sub sp, sp, #0xc0
0x06A4F580: fe570aa9  stp x30, x21, [sp, #0xa0]
0x06A4F584: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x06A4F588: d59600f0  adrp x21, #0x7d2a000
0x06A4F58C: a8b65639  ldrb w8, [x21, #0x5ad]
0x06A4F590: f30301aa  mov x19, x1
0x06A4F594: f40300aa  mov x20, x0
0x06A4F598: c8000037  tbnz w8, #0, #0x6a4f5b0
0x06A4F59C: 00670090  adrp x0, #0x772f000
0x06A4F5A0: 009c47f9  ldr x0, [x0, #0xf38]
0x06A4F5A4: 1dc51c97  bl #0x3180a18
0x06A4F5A8: 28008052  movz w8, #0x1
0x06A4F5AC: a8b61639  strb w8, [x21, #0x5ad]
0x06A4F5B0: 883640b9  ldr w8, [x20, #0x34]
0x06A4F5B4: 08050071  subs w8, w8, #1
0x06A4F5B8: eb020054  b.lt #0x6a4f614
0x06A4F5BC: 893a40b9  ldr w9, [x20, #0x38]
0x06A4F5C0: 8a4640b9  ldr w10, [x20, #0x44]
0x06A4F5C4: e0030091  mov x0, sp
0x06A4F5C8: 020a8052  movz w2, #0x50
0x06A4F5CC: 29050011  add w9, w9, #1
0x06A4F5D0: 4a050011  add w10, w10, #1
0x06A4F5D4: e10314aa  mov x1, x20
0x06A4F5D8: 88a60629  stp w8, w9, [x20, #0x34]
0x06A4F5DC: 8a4600b9  str w10, [x20, #0x44]
0x06A4F5E0: e4fc1d94  bl #0x71ce970
0x06A4F5E4: 130200b4  cbz x19, #0x6a4f624
0x06A4F5E8: 08670090  adrp x8, #0x772f000
0x06A4F5EC: 089d47f9  ldr x8, [x8, #0xf38]
0x06A4F5F0: e0430191  add x0, sp, #0x50
0x06A4F5F4: e1030091  mov x1, sp
0x06A4F5F8: 020a8052  movz w2, #0x50
0x06A4F5FC: 140140f9  ldr x20, [x8]
0x06A4F600: dcfc1d94  bl #0x71ce970
0x06A4F604: e1430191  add x1, sp, #0x50
0x06A4F608: e00313aa  mov x0, x19
0x06A4F60C: e20314aa  mov x2, x20
0x06A4F610: ae394797  bl #0x3c1dcc8
0x06A4F614: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x06A4F618: fe574aa9  ldp x30, x21, [sp, #0xa0]
0x06A4F61C: ff030391  add sp, sp, #0xc0
0x06A4F620: c0035fd6  ret
0x06A4F624: a2c51c97  bl #0x3180cac

; RVA 0x6A4EE2C | private static ItemSpawnable TryReplaceWithBoosted(ItemSpawnable itemToProduce, Entity entity, ItemsSpawningCapability itemsSpawningCapability, IMergingConfigurationModel mergingConfigurationModel, IPowerBoostDataProvider powerBoostDataProvider) { }
; bytes=1872 sha256=cb2ee131e73b453fea94048f44b0847027e511bb70150867818e21656431f321 status=arm64_complete_bound indexed_start=True
0x06A4EE2C: ff4302d1  sub sp, sp, #0x90
0x06A4EE30: fe1b00f9  str x30, [sp, #0x30]
0x06A4EE34: fc6f04a9  stp x28, x27, [sp, #0x40]
0x06A4EE38: fa6705a9  stp x26, x25, [sp, #0x50]
0x06A4EE3C: f85f06a9  stp x24, x23, [sp, #0x60]
0x06A4EE40: f65707a9  stp x22, x21, [sp, #0x70]
0x06A4EE44: f44f08a9  stp x20, x19, [sp, #0x80]
0x06A4EE48: f8960090  adrp x24, #0x7d2a000
0x06A4EE4C: 08bb5639  ldrb w8, [x24, #0x5ae]
0x06A4EE50: f50304aa  mov x21, x4
0x06A4EE54: f30303aa  mov x19, x3
0x06A4EE58: f60302aa  mov x22, x2
0x06A4EE5C: f70301aa  mov x23, x1
0x06A4EE60: f40300aa  mov x20, x0
0x06A4EE64: 28070037  tbnz w8, #0, #0x6a4ef48
0x06A4EE68: 60610090  adrp x0, #0x767a000
0x06A4EE6C: 004442f9  ldr x0, [x0, #0x488]
0x06A4EE70: eac61c97  bl #0x3180a18
0x06A4EE74: 206100d0  adrp x0, #0x7674000
0x06A4EE78: 002445f9  ldr x0, [x0, #0xa48]
0x06A4EE7C: e7c61c97  bl #0x3180a18
0x06A4EE80: 80610090  adrp x0, #0x767e000
0x06A4EE84: 008c42f9  ldr x0, [x0, #0x518]
0x06A4EE88: e4c61c97  bl #0x3180a18
0x06A4EE8C: 80610090  adrp x0, #0x767e000
0x06A4EE90: 009042f9  ldr x0, [x0, #0x520]
0x06A4EE94: e1c61c97  bl #0x3180a18
0x06A4EE98: 00600090  adrp x0, #0x764e000
0x06A4EE9C: 002c45f9  ldr x0, [x0, #0xa58]
0x06A4EEA0: dec61c97  bl #0x3180a18
0x06A4EEA4: 80610090  adrp x0, #0x767e000
0x06A4EEA8: 009442f9  ldr x0, [x0, #0x528]
0x06A4EEAC: dbc61c97  bl #0x3180a18
0x06A4EEB0: 80610090  adrp x0, #0x767e000
0x06A4EEB4: 009842f9  ldr x0, [x0, #0x530]
0x06A4EEB8: d8c61c97  bl #0x3180a18
0x06A4EEBC: 80610090  adrp x0, #0x767e000
0x06A4EEC0: 009c42f9  ldr x0, [x0, #0x538]
0x06A4EEC4: d5c61c97  bl #0x3180a18
0x06A4EEC8: 80610090  adrp x0, #0x767e000
0x06A4EECC: 00a042f9  ldr x0, [x0, #0x540]
0x06A4EED0: d2c61c97  bl #0x3180a18
0x06A4EED4: 60610090  adrp x0, #0x767a000
0x06A4EED8: 004c42f9  ldr x0, [x0, #0x498]
0x06A4EEDC: cfc61c97  bl #0x3180a18
0x06A4EEE0: 60610090  adrp x0, #0x767a000
0x06A4EEE4: 00c842f9  ldr x0, [x0, #0x590]
0x06A4EEE8: ccc61c97  bl #0x3180a18
0x06A4EEEC: 406100f0  adrp x0, #0x7679000
0x06A4EEF0: 001044f9  ldr x0, [x0, #0x820]
0x06A4EEF4: c9c61c97  bl #0x3180a18
0x06A4EEF8: 80610090  adrp x0, #0x767e000
0x06A4EEFC: 007442f9  ldr x0, [x0, #0x4e8]
0x06A4EF00: c6c61c97  bl #0x3180a18
0x06A4EF04: 80610090  adrp x0, #0x767e000
0x06A4EF08: 007842f9  ldr x0, [x0, #0x4f0]
0x06A4EF0C: c3c61c97  bl #0x3180a18
0x06A4EF10: 006700b0  adrp x0, #0x772f000
0x06A4EF14: 00b847f9  ldr x0, [x0, #0xf70]
0x06A4EF18: c0c61c97  bl #0x3180a18
0x06A4EF1C: 006700b0  adrp x0, #0x772f000
0x06A4EF20: 00bc47f9  ldr x0, [x0, #0xf78]
0x06A4EF24: bdc61c97  bl #0x3180a18
0x06A4EF28: 006700b0  adrp x0, #0x772f000
0x06A4EF2C: 00b447f9  ldr x0, [x0, #0xf68]
0x06A4EF30: bac61c97  bl #0x3180a18
0x06A4EF34: 80610090  adrp x0, #0x767e000
0x06A4EF38: 00a842f9  ldr x0, [x0, #0x550]
0x06A4EF3C: b7c61c97  bl #0x3180a18
0x06A4EF40: 28008052  movz w8, #0x1
0x06A4EF44: 08bb1639  strb w8, [x24, #0x5ae]
0x06A4EF48: 973100b4  cbz x23, #0x6a4f578
0x06A4EF4C: 68610090  adrp x8, #0x767a000
0x06A4EF50: 084542f9  ldr x8, [x8, #0x488]
0x06A4EF54: e00317aa  mov x0, x23
0x06A4EF58: 010140f9  ldr x1, [x8]
0x06A4EF5C: e8030091  mov x8, sp
0x06A4EF60: bc304797  bl #0x3c1b250
0x06A4EF64: b53000b4  cbz x21, #0x6a4f578
0x06A4EF68: 7a610090  adrp x26, #0x767a000
0x06A4EF6C: a80240f9  ldr x8, [x21]
0x06A4EF70: 5acb42f9  ldr x26, [x26, #0x590]
0x06A4EF74: f70340f9  ldr x23, [sp]
0x06A4EF78: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4EF7C: 410340f9  ldr x1, [x26]
0x06A4EF80: 290100b4  cbz x9, #0x6a4efa4
0x06A4EF84: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4EF88: 4a210091  add x10, x10, #8
0x06A4EF8C: 4b815ff8  ldur x11, [x10, #-8]
0x06A4EF90: 7f0101eb  cmp x11, x1
0x06A4EF94: 00010054  b.eq #0x6a4efb4
0x06A4EF98: 290500f1  subs x9, x9, #1
0x06A4EF9C: 4a410091  add x10, x10, #0x10
0x06A4EFA0: 61ffff54  b.ne #0x6a4ef8c
0x06A4EFA4: e00315aa  mov x0, x21
0x06A4EFA8: e2031f2a  mov w2, wzr
0x06A4EFAC: d91e1c97  bl #0x3156b10
0x06A4EFB0: 04000014  b #0x6a4efc0
0x06A4EFB4: 490180b9  ldrsw x9, [x10]
0x06A4EFB8: 0811098b  add x8, x8, x9, lsl #4
0x06A4EFBC: 00e10491  add x0, x8, #0x138
0x06A4EFC0: 080440a9  ldp x8, x1, [x0]
0x06A4EFC4: e00315aa  mov x0, x21
0x06A4EFC8: 00013fd6  blr x8
0x06A4EFCC: c01d0036  tbz w0, #0, #0x6a4f384
0x06A4EFD0: a80240f9  ldr x8, [x21]
0x06A4EFD4: 410340f9  ldr x1, [x26]
0x06A4EFD8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4EFDC: 290100b4  cbz x9, #0x6a4f000
0x06A4EFE0: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4EFE4: 4a210091  add x10, x10, #8
0x06A4EFE8: 4b815ff8  ldur x11, [x10, #-8]
0x06A4EFEC: 7f0101eb  cmp x11, x1
0x06A4EFF0: 00010054  b.eq #0x6a4f010
0x06A4EFF4: 290500f1  subs x9, x9, #1
0x06A4EFF8: 4a410091  add x10, x10, #0x10
0x06A4EFFC: 61ffff54  b.ne #0x6a4efe8
0x06A4F000: 22008052  movz w2, #0x1
0x06A4F004: e00315aa  mov x0, x21
0x06A4F008: c21e1c97  bl #0x3156b10
0x06A4F00C: 05000014  b #0x6a4f020
0x06A4F010: 490140b9  ldr w9, [x10]
0x06A4F014: 29050011  add w9, w9, #1
0x06A4F018: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4F01C: 00e10491  add x0, x8, #0x138
0x06A4F020: 080440a9  ldp x8, x1, [x0]
0x06A4F024: e00315aa  mov x0, x21
0x06A4F028: 00013fd6  blr x8
0x06A4F02C: c01a0036  tbz w0, #0, #0x6a4f384
0x06A4F030: a80240f9  ldr x8, [x21]
0x06A4F034: 410340f9  ldr x1, [x26]
0x06A4F038: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4F03C: 290100b4  cbz x9, #0x6a4f060
0x06A4F040: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4F044: 4a210091  add x10, x10, #8
0x06A4F048: 4b815ff8  ldur x11, [x10, #-8]
0x06A4F04C: 7f0101eb  cmp x11, x1
0x06A4F050: 00010054  b.eq #0x6a4f070
0x06A4F054: 290500f1  subs x9, x9, #1
0x06A4F058: 4a410091  add x10, x10, #0x10
0x06A4F05C: 61ffff54  b.ne #0x6a4f048
0x06A4F060: a2008052  movz w2, #0x5
0x06A4F064: e00315aa  mov x0, x21
0x06A4F068: aa1e1c97  bl #0x3156b10
0x06A4F06C: 05000014  b #0x6a4f080
0x06A4F070: 490140b9  ldr w9, [x10]
0x06A4F074: 29150011  add w9, w9, #5
0x06A4F078: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4F07C: 00e10491  add x0, x8, #0x138
0x06A4F080: 080840a9  ldp x8, x2, [x0]
0x06A4F084: e00315aa  mov x0, x21
0x06A4F088: e10317aa  mov x1, x23
0x06A4F08C: 00013fd6  blr x8
0x06A4F090: a0170036  tbz w0, #0, #0x6a4f384
0x06A4F094: 362700b4  cbz x22, #0x6a4f578
0x06A4F098: 1b670090  adrp x27, #0x772f000
0x06A4F09C: 7bb747f9  ldr x27, [x27, #0xf68]
0x06A4F0A0: d72e40f9  ldr x23, [x22, #0x58]
0x06A4F0A4: 600340f9  ldr x0, [x27]
0x06A4F0A8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4F0AC: 68000035  cbnz w8, #0x6a4f0b8
0x06A4F0B0: b7c61c97  bl #0x3180b8c
0x06A4F0B4: 600340f9  ldr x0, [x27]
0x06A4F0B8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A4F0BC: 180940f9  ldr x24, [x8, #0x10]
0x06A4F0C0: f80200b5  cbnz x24, #0x6a4f11c
0x06A4F0C4: 08e040b9  ldr w8, [x0, #0xe0]
0x06A4F0C8: 68000035  cbnz w8, #0x6a4f0d4
0x06A4F0CC: b0c61c97  bl #0x3180b8c
0x06A4F0D0: 600340f9  ldr x0, [x27]
0x06A4F0D4: 696100f0  adrp x9, #0x767e000
0x06A4F0D8: 085c40f9  ldr x8, [x0, #0xb8]
0x06A4F0DC: 299d42f9  ldr x9, [x9, #0x538]
0x06A4F0E0: 190140f9  ldr x25, [x8]
0x06A4F0E4: 200140f9  ldr x0, [x9]
0x06A4F0E8: eec61c97  bl #0x3180ca0
0x06A4F0EC: 08670090  adrp x8, #0x772f000
0x06A4F0F0: 08b947f9  ldr x8, [x8, #0xf70]
0x06A4F0F4: e10319aa  mov x1, x25
0x06A4F0F8: e3031faa  mov x3, xzr
0x06A4F0FC: f80300aa  mov x24, x0
0x06A4F100: 020140f9  ldr x2, [x8]
0x06A4F104: 2d1ea097  bl #0x52569b8
0x06A4F108: 680340f9  ldr x8, [x27]
0x06A4F10C: e10318aa  mov x1, x24
0x06A4F110: 005d40f9  ldr x0, [x8, #0xb8]
0x06A4F114: 180c01f8  str x24, [x0, #0x10]!
0x06A4F118: 2bc61c97  bl #0x31809c4
0x06A4F11C: 686100f0  adrp x8, #0x767e000
0x06A4F120: 088d42f9  ldr x8, [x8, #0x518]
0x06A4F124: e00317aa  mov x0, x23
0x06A4F128: e10318aa  mov x1, x24
0x06A4F12C: 020140f9  ldr x2, [x8]
0x06A4F130: 59064897  bl #0x3c50a94
0x06A4F134: 680340f9  ldr x8, [x27]
0x06A4F138: d72a40f9  ldr x23, [x22, #0x50]
0x06A4F13C: f60300aa  mov x22, x0
0x06A4F140: 09e140b9  ldr w9, [x8, #0xe0]
0x06A4F144: 89000035  cbnz w9, #0x6a4f154
0x06A4F148: e00308aa  mov x0, x8
0x06A4F14C: 90c61c97  bl #0x3180b8c
0x06A4F150: 680340f9  ldr x8, [x27]
0x06A4F154: 095d40f9  ldr x9, [x8, #0xb8]
0x06A4F158: 380d40f9  ldr x24, [x9, #0x18]
0x06A4F15C: 180300b5  cbnz x24, #0x6a4f1bc
0x06A4F160: 09e140b9  ldr w9, [x8, #0xe0]
0x06A4F164: 89000035  cbnz w9, #0x6a4f174
0x06A4F168: e00308aa  mov x0, x8
0x06A4F16C: 88c61c97  bl #0x3180b8c
0x06A4F170: 680340f9  ldr x8, [x27]
0x06A4F174: 696100f0  adrp x9, #0x767e000
0x06A4F178: 085d40f9  ldr x8, [x8, #0xb8]
0x06A4F17C: 29a142f9  ldr x9, [x9, #0x540]
0x06A4F180: 190140f9  ldr x25, [x8]
0x06A4F184: 200140f9  ldr x0, [x9]
0x06A4F188: c6c61c97  bl #0x3180ca0
0x06A4F18C: 08670090  adrp x8, #0x772f000
0x06A4F190: 08bd47f9  ldr x8, [x8, #0xf78]
0x06A4F194: e10319aa  mov x1, x25
0x06A4F198: e3031faa  mov x3, xzr
0x06A4F19C: f80300aa  mov x24, x0
0x06A4F1A0: 020140f9  ldr x2, [x8]
0x06A4F1A4: 051ea097  bl #0x52569b8
0x06A4F1A8: 680340f9  ldr x8, [x27]
0x06A4F1AC: e10318aa  mov x1, x24
0x06A4F1B0: 005d40f9  ldr x0, [x8, #0xb8]
0x06A4F1B4: 188c01f8  str x24, [x0, #0x18]!
0x06A4F1B8: 03c61c97  bl #0x31809c4
0x06A4F1BC: 686100f0  adrp x8, #0x767e000
0x06A4F1C0: 089142f9  ldr x8, [x8, #0x520]
0x06A4F1C4: e00317aa  mov x0, x23
0x06A4F1C8: e10318aa  mov x1, x24
0x06A4F1CC: 020140f9  ldr x2, [x8]
0x06A4F1D0: 31064897  bl #0x3c50a94
0x06A4F1D4: 686100f0  adrp x8, #0x767e000
0x06A4F1D8: 089542f9  ldr x8, [x8, #0x528]
0x06A4F1DC: e10300aa  mov x1, x0
0x06A4F1E0: e00316aa  mov x0, x22
0x06A4F1E4: 020140f9  ldr x2, [x8]
0x06A4F1E8: ad444897  bl #0x3c6049c
0x06A4F1EC: 286100b0  adrp x8, #0x7674000
0x06A4F1F0: 082545f9  ldr x8, [x8, #0xa48]
0x06A4F1F4: 010140f9  ldr x1, [x8]
0x06A4F1F8: 17b54797  bl #0x3c3c654
0x06A4F1FC: e85f00f0  adrp x8, #0x764e000
0x06A4F200: 082d45f9  ldr x8, [x8, #0xa58]
0x06A4F204: 010140f9  ldr x1, [x8]
0x06A4F208: 72434897  bl #0x3c5ffd0
0x06A4F20C: 741b00b4  cbz x20, #0x6a4f578
0x06A4F210: f60300aa  mov x22, x0
0x06A4F214: 800a40f9  ldr x0, [x20, #0x10]
0x06A4F218: 001b00b4  cbz x0, #0x6a4f578
0x06A4F21C: 080040f9  ldr x8, [x0]
0x06A4F220: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x06A4F224: 20013fd6  blr x9
0x06A4F228: a80240f9  ldr x8, [x21]
0x06A4F22C: 410340f9  ldr x1, [x26]
0x06A4F230: f70300aa  mov x23, x0
0x06A4F234: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4F238: 290100b4  cbz x9, #0x6a4f25c
0x06A4F23C: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4F240: 4a210091  add x10, x10, #8
0x06A4F244: 4b815ff8  ldur x11, [x10, #-8]
0x06A4F248: 7f0101eb  cmp x11, x1
0x06A4F24C: 00010054  b.eq #0x6a4f26c
0x06A4F250: 290500f1  subs x9, x9, #1
0x06A4F254: 4a410091  add x10, x10, #0x10
0x06A4F258: 61ffff54  b.ne #0x6a4f244
0x06A4F25C: 42008052  movz w2, #0x2
0x06A4F260: e00315aa  mov x0, x21
0x06A4F264: 2b1e1c97  bl #0x3156b10
0x06A4F268: 05000014  b #0x6a4f27c
0x06A4F26C: 490140b9  ldr w9, [x10]
0x06A4F270: 29090011  add w9, w9, #2
0x06A4F274: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4F278: 00e10491  add x0, x8, #0x138
0x06A4F27C: 080440a9  ldp x8, x1, [x0]
0x06A4F280: e00315aa  mov x0, x21
0x06A4F284: 00013fd6  blr x8
0x06A4F288: 931700b4  cbz x19, #0x6a4f578
0x06A4F28C: 5b6100f0  adrp x27, #0x767a000
0x06A4F290: 680240f9  ldr x8, [x19]
0x06A4F294: 7b4f42f9  ldr x27, [x27, #0x498]
0x06A4F298: f503002a  mov w21, w0
0x06A4F29C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4F2A0: 610340f9  ldr x1, [x27]
0x06A4F2A4: 290100b4  cbz x9, #0x6a4f2c8
0x06A4F2A8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4F2AC: 4a210091  add x10, x10, #8
0x06A4F2B0: 4b815ff8  ldur x11, [x10, #-8]
0x06A4F2B4: 7f0101eb  cmp x11, x1
0x06A4F2B8: 00010054  b.eq #0x6a4f2d8
0x06A4F2BC: 290500f1  subs x9, x9, #1
0x06A4F2C0: 4a410091  add x10, x10, #0x10
0x06A4F2C4: 61ffff54  b.ne #0x6a4f2b0
0x06A4F2C8: e2018052  movz w2, #0xf
0x06A4F2CC: e00313aa  mov x0, x19
0x06A4F2D0: 101e1c97  bl #0x3156b10
0x06A4F2D4: 05000014  b #0x6a4f2e8
0x06A4F2D8: 490140b9  ldr w9, [x10]
0x06A4F2DC: 293d0011  add w9, w9, #0xf
0x06A4F2E0: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4F2E4: 00e10491  add x0, x8, #0x138
0x06A4F2E8: 080c40a9  ldp x8, x3, [x0]
0x06A4F2EC: e00313aa  mov x0, x19
0x06A4F2F0: e10317aa  mov x1, x23
0x06A4F2F4: e203152a  mov w2, w21
0x06A4F2F8: 00013fd6  blr x8
0x06A4F2FC: 400400b4  cbz x0, #0x6a4f384
0x06A4F300: 696100f0  adrp x9, #0x767e000
0x06A4F304: 299942f9  ldr x9, [x9, #0x530]
0x06A4F308: f80300aa  mov x24, x0
0x06A4F30C: 880240f9  ldr x8, [x20]
0x06A4F310: 200140f9  ldr x0, [x9]
0x06A4F314: 09c14439  ldrb w9, [x8, #0x130]
0x06A4F318: 0ac04439  ldrb w10, [x0, #0x130]
0x06A4F31C: 3f010a6b  cmp w9, w10
0x06A4F320: c3000054  b.lo #0x6a4f338
0x06A4F324: 0b6540f9  ldr x11, [x8, #0xc8]
0x06A4F328: 6a0d0a8b  add x10, x11, x10, lsl #3
0x06A4F32C: 4a815ff8  ldur x10, [x10, #-8]
0x06A4F330: 5f0100eb  cmp x10, x0
0x06A4F334: c0030054  b.eq #0x6a4f3ac
0x06A4F338: 6a6100f0  adrp x10, #0x767e000
0x06A4F33C: 4aa942f9  ldr x10, [x10, #0x550]
0x06A4F340: 400140f9  ldr x0, [x10]
0x06A4F344: 0ac04439  ldrb w10, [x0, #0x130]
0x06A4F348: 3f010a6b  cmp w9, w10
0x06A4F34C: c3000054  b.lo #0x6a4f364
0x06A4F350: 086540f9  ldr x8, [x8, #0xc8]
0x06A4F354: 080d0a8b  add x8, x8, x10, lsl #3
0x06A4F358: 08815ff8  ldur x8, [x8, #-8]
0x06A4F35C: 1f0100eb  cmp x8, x0
0x06A4F360: 60030054  b.eq #0x6a4f3cc
0x06A4F364: 686100f0  adrp x8, #0x767e000
0x06A4F368: 087542f9  ldr x8, [x8, #0x4e8]
0x06A4F36C: 000140f9  ldr x0, [x8]
0x06A4F370: 4cc61c97  bl #0x3180ca0
0x06A4F374: e1031faa  mov x1, xzr
0x06A4F378: f50300aa  mov x21, x0
0x06A4F37C: ca69ff97  bl #0x6a29aa4
0x06A4F380: 1e000014  b #0x6a4f3f8
0x06A4F384: f50314aa  mov x21, x20
0x06A4F388: e00315aa  mov x0, x21
0x06A4F38C: f44f48a9  ldp x20, x19, [sp, #0x80]
0x06A4F390: f65747a9  ldp x22, x21, [sp, #0x70]
0x06A4F394: f85f46a9  ldp x24, x23, [sp, #0x60]
0x06A4F398: fa6745a9  ldp x26, x25, [sp, #0x50]
0x06A4F39C: fc6f44a9  ldp x28, x27, [sp, #0x40]
0x06A4F3A0: fe1b40f9  ldr x30, [sp, #0x30]
0x06A4F3A4: ff430291  add sp, sp, #0x90
0x06A4F3A8: c0035fd6  ret
0x06A4F3AC: 3dc61c97  bl #0x3180ca0
0x06A4F3B0: e1031faa  mov x1, xzr
0x06A4F3B4: f50300aa  mov x21, x0
0x06A4F3B8: b769ff97  bl #0x6a29a94
0x06A4F3BC: f50d00b4  cbz x21, #0x6a4f578
0x06A4F3C0: 882640b9  ldr w8, [x20, #0x24]
0x06A4F3C4: a82600b9  str w8, [x21, #0x24]
0x06A4F3C8: 0c000014  b #0x6a4f3f8
0x06A4F3CC: 35c61c97  bl #0x3180ca0
0x06A4F3D0: e1031faa  mov x1, xzr
0x06A4F3D4: f50300aa  mov x21, x0
0x06A4F3D8: ab69ff97  bl #0x6a29a84
0x06A4F3DC: f50c00b4  cbz x21, #0x6a4f578
0x06A4F3E0: 882640b9  ldr w8, [x20, #0x24]
0x06A4F3E4: a82600b9  str w8, [x21, #0x24]
0x06A4F3E8: 88a24039  ldrb w8, [x20, #0x28]
0x06A4F3EC: a8a20039  strb w8, [x21, #0x28]
0x06A4F3F0: 88a64039  ldrb w8, [x20, #0x29]
0x06A4F3F4: a8a60039  strb w8, [x21, #0x29]
0x06A4F3F8: 5c6100d0  adrp x28, #0x7679000
0x06A4F3FC: 080340f9  ldr x8, [x24]
0x06A4F400: 9c1344f9  ldr x28, [x28, #0x820]
0x06A4F404: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4F408: 810340f9  ldr x1, [x28]
0x06A4F40C: 290100b4  cbz x9, #0x6a4f430
0x06A4F410: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4F414: 4a210091  add x10, x10, #8
0x06A4F418: 4b815ff8  ldur x11, [x10, #-8]
0x06A4F41C: 7f0101eb  cmp x11, x1
0x06A4F420: 00010054  b.eq #0x6a4f440
0x06A4F424: 290500f1  subs x9, x9, #1
0x06A4F428: 4a410091  add x10, x10, #0x10
0x06A4F42C: 61ffff54  b.ne #0x6a4f418
0x06A4F430: e00318aa  mov x0, x24
0x06A4F434: e2031f2a  mov w2, wzr
0x06A4F438: b61d1c97  bl #0x3156b10
0x06A4F43C: 04000014  b #0x6a4f44c
0x06A4F440: 490180b9  ldrsw x9, [x10]
0x06A4F444: 0811098b  add x8, x8, x9, lsl #4
0x06A4F448: 00e10491  add x0, x8, #0x138
0x06A4F44C: 080440a9  ldp x8, x1, [x0]
0x06A4F450: e00318aa  mov x0, x24
0x06A4F454: 00013fd6  blr x8
0x06A4F458: 686100f0  adrp x8, #0x767e000
0x06A4F45C: 087942f9  ldr x8, [x8, #0x4f0]
0x06A4F460: fa0300aa  mov x26, x0
0x06A4F464: 080140f9  ldr x8, [x8]
0x06A4F468: e00308aa  mov x0, x8
0x06A4F46C: 0dc61c97  bl #0x3180ca0
0x06A4F470: e1031aaa  mov x1, x26
0x06A4F474: e2031faa  mov x2, xzr
0x06A4F478: f90300aa  mov x25, x0
0x06A4F47C: a7d4d697  bl #0x6004718
0x06A4F480: d50700b4  cbz x21, #0x6a4f578
0x06A4F484: fa0315aa  mov x26, x21
0x06A4F488: 590f01f8  str x25, [x26, #0x10]!
0x06A4F48C: e0031aaa  mov x0, x26
0x06A4F490: e10319aa  mov x1, x25
0x06A4F494: 4cc51c97  bl #0x31809c4
0x06A4F498: 88864039  ldrb w8, [x20, #0x21]
0x06A4F49C: 48470039  strb w8, [x26, #0x11]
0x06A4F4A0: 88824039  ldrb w8, [x20, #0x20]
0x06A4F4A4: 48430039  strb w8, [x26, #0x10]
0x06A4F4A8: 080340f9  ldr x8, [x24]
0x06A4F4AC: 810340f9  ldr x1, [x28]
0x06A4F4B0: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4F4B4: 290100b4  cbz x9, #0x6a4f4d8
0x06A4F4B8: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4F4BC: 4a210091  add x10, x10, #8
0x06A4F4C0: 4b815ff8  ldur x11, [x10, #-8]
0x06A4F4C4: 7f0101eb  cmp x11, x1
0x06A4F4C8: 00010054  b.eq #0x6a4f4e8
0x06A4F4CC: 290500f1  subs x9, x9, #1
0x06A4F4D0: 4a410091  add x10, x10, #0x10
0x06A4F4D4: 61ffff54  b.ne #0x6a4f4c0
0x06A4F4D8: e00318aa  mov x0, x24
0x06A4F4DC: e2031f2a  mov w2, wzr
0x06A4F4E0: 8c1d1c97  bl #0x3156b10
0x06A4F4E4: 04000014  b #0x6a4f4f4
0x06A4F4E8: 490180b9  ldrsw x9, [x10]
0x06A4F4EC: 0811098b  add x8, x8, x9, lsl #4
0x06A4F4F0: 00e10491  add x0, x8, #0x138
0x06A4F4F4: 080440a9  ldp x8, x1, [x0]
0x06A4F4F8: e00318aa  mov x0, x24
0x06A4F4FC: 00013fd6  blr x8
0x06A4F500: 680240f9  ldr x8, [x19]
0x06A4F504: 610340f9  ldr x1, [x27]
0x06A4F508: f40300aa  mov x20, x0
0x06A4F50C: 095d4279  ldrh w9, [x8, #0x12e]
0x06A4F510: 290100b4  cbz x9, #0x6a4f534
0x06A4F514: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A4F518: 4a210091  add x10, x10, #8
0x06A4F51C: 4b815ff8  ldur x11, [x10, #-8]
0x06A4F520: 7f0101eb  cmp x11, x1
0x06A4F524: 00010054  b.eq #0x6a4f544
0x06A4F528: 290500f1  subs x9, x9, #1
0x06A4F52C: 4a410091  add x10, x10, #0x10
0x06A4F530: 61ffff54  b.ne #0x6a4f51c
0x06A4F534: 22048052  movz w2, #0x21
0x06A4F538: e00313aa  mov x0, x19
0x06A4F53C: 751d1c97  bl #0x3156b10
0x06A4F540: 05000014  b #0x6a4f554
0x06A4F544: 490140b9  ldr w9, [x10]
0x06A4F548: 29850011  add w9, w9, #0x21
0x06A4F54C: 08d1298b  add x8, x8, w9, sxtw #4
0x06A4F550: 00e10491  add x0, x8, #0x138
0x06A4F554: 081040a9  ldp x8, x4, [x0]
0x06A4F558: e00313aa  mov x0, x19
0x06A4F55C: e10316aa  mov x1, x22
0x06A4F560: e20314aa  mov x2, x20
0x06A4F564: e30317aa  mov x3, x23
0x06A4F568: 00013fd6  blr x8
0x06A4F56C: 08000012  and w8, w0, #1
0x06A4F570: a88a0039  strb w8, [x21, #0x22]
0x06A4F574: 85ffff17  b #0x6a4f388
0x06A4F578: cdc51c97  bl #0x3180cac

