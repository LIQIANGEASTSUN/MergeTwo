; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25843 Merger.MergeBoard.Logic.State.Updaters.IdComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A855D8 | protected override void UpdateFromState(ref IdComponent component, ItemPayloadBase itemState) { }
; bytes=424 sha256=292e476689a34a28c0bd5c92d300bfd59dd726112859c70ebcf5e1d04c257dce status=arm64_complete_bound indexed_start=True
0x06A855D8: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x06A855DC: f85f01a9  stp x24, x23, [sp, #0x10]
0x06A855E0: f65702a9  stp x22, x21, [sp, #0x20]
0x06A855E4: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A855E8: 359500b0  adrp x21, #0x7d2a000
0x06A855EC: a83a5e39  ldrb w8, [x21, #0x78e]
0x06A855F0: f30302aa  mov x19, x2
0x06A855F4: f40301aa  mov x20, x1
0x06A855F8: e8010037  tbnz w8, #0, #0x6a85634
0x06A855FC: 405e00d0  adrp x0, #0x764f000
0x06A85600: 00ac43f9  ldr x0, [x0, #0x758]
0x06A85604: 05ed1b97  bl #0x3180a18
0x06A85608: e0630090  adrp x0, #0x7701000
0x06A8560C: 00f046f9  ldr x0, [x0, #0xde0]
0x06A85610: 02ed1b97  bl #0x3180a18
0x06A85614: a05f00b0  adrp x0, #0x767a000
0x06A85618: 005042f9  ldr x0, [x0, #0x4a0]
0x06A8561C: ffec1b97  bl #0x3180a18
0x06A85620: 405e00b0  adrp x0, #0x764e000
0x06A85624: 00ac42f9  ldr x0, [x0, #0x558]
0x06A85628: fcec1b97  bl #0x3180a18
0x06A8562C: 28008052  movz w8, #0x1
0x06A85630: a83a1e39  strb w8, [x21, #0x78e]
0x06A85634: 930900b4  cbz x19, #0x6a85764
0x06A85638: 610a40f9  ldr x1, [x19, #0x10]
0x06A8563C: f7630090  adrp x23, #0x7701000
0x06A85640: 585e00b0  adrp x24, #0x764e000
0x06A85644: f7f246f9  ldr x23, [x23, #0xde0]
0x06A85648: 18af42f9  ldr x24, [x24, #0x558]
0x06A8564C: e00314aa  mov x0, x20
0x06A85650: 810200f9  str x1, [x20]
0x06A85654: dcec1b97  bl #0x31809c4
0x06A85658: 600e40f9  ldr x0, [x19, #0x18]
0x06A8565C: e1031faa  mov x1, xzr
0x06A85660: 13c9a997  bl #0x54f7aac
0x06A85664: a0000037  tbnz w0, #0, #0x6a85678
0x06A85668: 610e40f9  ldr x1, [x19, #0x18]
0x06A8566C: e00314aa  mov x0, x20
0x06A85670: 018c00f8  str x1, [x0, #8]!
0x06A85674: d4ec1b97  bl #0x31809c4
0x06A85678: 000340f9  ldr x0, [x24]
0x06A8567C: 595e00d0  adrp x25, #0x764f000
0x06A85680: f50240f9  ldr x21, [x23]
0x06A85684: 08e040b9  ldr w8, [x0, #0xe0]
0x06A85688: 39af43f9  ldr x25, [x25, #0x758]
0x06A8568C: 48000035  cbnz w8, #0x6a85694
0x06A85690: 3fed1b97  bl #0x3180b8c
0x06A85694: e00315aa  mov x0, x21
0x06A85698: e1031faa  mov x1, xzr
0x06A8569C: ca7eb097  bl #0x56a51c4
0x06A856A0: 280340f9  ldr x8, [x25]
0x06A856A4: 751240f9  ldr x21, [x19, #0x20]
0x06A856A8: f60300aa  mov x22, x0
0x06A856AC: 09e140b9  ldr w9, [x8, #0xe0]
0x06A856B0: 69000035  cbnz w9, #0x6a856bc
0x06A856B4: e00308aa  mov x0, x8
0x06A856B8: 35ed1b97  bl #0x3180b8c
0x06A856BC: e00316aa  mov x0, x22
0x06A856C0: e10315aa  mov x1, x21
0x06A856C4: e2031faa  mov x2, xzr
0x06A856C8: 591eb197  bl #0x56cd02c
0x06A856CC: 00040036  tbz w0, #0, #0x6a8574c
0x06A856D0: 000340f9  ldr x0, [x24]
0x06A856D4: f50240f9  ldr x21, [x23]
0x06A856D8: 08e040b9  ldr w8, [x0, #0xe0]
0x06A856DC: 48000035  cbnz w8, #0x6a856e4
0x06A856E0: 2bed1b97  bl #0x3180b8c
0x06A856E4: e00315aa  mov x0, x21
0x06A856E8: e1031faa  mov x1, xzr
0x06A856EC: b67eb097  bl #0x56a51c4
0x06A856F0: 280340f9  ldr x8, [x25]
0x06A856F4: 751240f9  ldr x21, [x19, #0x20]
0x06A856F8: f60300aa  mov x22, x0
0x06A856FC: 09e140b9  ldr w9, [x8, #0xe0]
0x06A85700: 69000035  cbnz w9, #0x6a8570c
0x06A85704: e00308aa  mov x0, x8
0x06A85708: 21ed1b97  bl #0x3180b8c
0x06A8570C: e00316aa  mov x0, x22
0x06A85710: e10315aa  mov x1, x21
0x06A85714: e2031faa  mov x2, xzr
0x06A85718: 2515b197  bl #0x56cabac
0x06A8571C: e00200b4  cbz x0, #0x6a85778
0x06A85720: a85f00b0  adrp x8, #0x767a000
0x06A85724: 085142f9  ldr x8, [x8, #0x4a0]
0x06A85728: 090040f9  ldr x9, [x0]
0x06A8572C: 010140f9  ldr x1, [x8]
0x06A85730: 282140f9  ldr x8, [x9, #0x40]
0x06A85734: 292040f9  ldr x9, [x1, #0x40]
0x06A85738: 1f0109eb  cmp x8, x9
0x06A8573C: 01020054  b.ne #0x6a8577c
0x06A85740: 16ed1b97  bl #0x3180b98
0x06A85744: 080040b9  ldr w8, [x0]
0x06A85748: 02000014  b #0x6a85750
0x06A8574C: 28008052  movz w8, #0x1
0x06A85750: 882200b9  str w8, [x20, #0x20]
0x06A85754: 6082c23c  ldur q0, [x19, #0x28]
0x06A85758: 8006803d  str q0, [x20, #0x10]
0x06A8575C: 681e40f9  ldr x8, [x19, #0x38]
0x06A85760: 881600f9  str x8, [x20, #0x28]
0x06A85764: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A85768: f65742a9  ldp x22, x21, [sp, #0x20]
0x06A8576C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x06A85770: fe67c4a8  ldp x30, x25, [sp], #0x40
0x06A85774: c0035fd6  ret
0x06A85778: 4ded1b97  bl #0x3180cac
0x06A8577C: 33ee1b97  bl #0x3181048

; RVA 0x6A85780 | public void .ctor() { }
; bytes=72 sha256=26bd8fd186ffac658061ff70d50e1f070cae33f2b1c39ffaa1687350f7dd16be status=arm64_complete_bound indexed_start=True
0x06A85780: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85784: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85788: 349500b0  adrp x20, #0x7d2a000
0x06A8578C: 75650090  adrp x21, #0x7731000
0x06A85790: 883e5e39  ldrb w8, [x20, #0x78f]
0x06A85794: b55a46f9  ldr x21, [x21, #0xcb0]
0x06A85798: f30300aa  mov x19, x0
0x06A8579C: c8000037  tbnz w8, #0, #0x6a857b4
0x06A857A0: 60650090  adrp x0, #0x7731000
0x06A857A4: 005846f9  ldr x0, [x0, #0xcb0]
0x06A857A8: 9cec1b97  bl #0x3180a18
0x06A857AC: 28008052  movz w8, #0x1
0x06A857B0: 883e1e39  strb w8, [x20, #0x78f]
0x06A857B4: a10240f9  ldr x1, [x21]
0x06A857B8: e00313aa  mov x0, x19
0x06A857BC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A857C0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A857C4: f96a8b17  b #0x4d603a8

