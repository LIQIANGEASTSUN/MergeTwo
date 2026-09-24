; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25904 Merger.MergeBoard.Extensions.EntityLockExtension
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A97F84 | public static bool IsBoxed(Entity entity) { }
; bytes=120 sha256=9c74e9f97135fdfb06b28f16da0c9f06412a98e310587d2b2c9ba7a63704ba8f status=arm64_complete_bound indexed_start=True
0x06A97F84: ff0301d1  sub sp, sp, #0x40
0x06A97F88: fe1300f9  str x30, [sp, #0x20]
0x06A97F8C: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A97F90: 949400f0  adrp x20, #0x7d2a000
0x06A97F94: 88726039  ldrb w8, [x20, #0x81c]
0x06A97F98: f30300aa  mov x19, x0
0x06A97F9C: c8000037  tbnz w8, #0, #0x6a97fb4
0x06A97FA0: 005f00f0  adrp x0, #0x767a000
0x06A97FA4: 009042f9  ldr x0, [x0, #0x520]
0x06A97FA8: 9ca21b97  bl #0x3180a18
0x06A97FAC: 28008052  movz w8, #0x1
0x06A97FB0: 88722039  strb w8, [x20, #0x81c]
0x06A97FB4: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A97FB8: ff1b00b9  str wzr, [sp, #0x18]
0x06A97FBC: f30100b4  cbz x19, #0x6a97ff8
0x06A97FC0: 085f00f0  adrp x8, #0x767a000
0x06A97FC4: 089142f9  ldr x8, [x8, #0x520]
0x06A97FC8: e1230091  add x1, sp, #8
0x06A97FCC: e00313aa  mov x0, x19
0x06A97FD0: 020140f9  ldr x2, [x8]
0x06A97FD4: 4d194697  bl #0x3c1e508
0x06A97FD8: e8234039  ldrb w8, [sp, #8]
0x06A97FDC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A97FE0: fe1340f9  ldr x30, [sp, #0x20]
0x06A97FE4: 1f010071  cmp w8, #0
0x06A97FE8: e8079f1a  cset w8, ne
0x06A97FEC: 0000080a  and w0, w0, w8
0x06A97FF0: ff030191  add sp, sp, #0x40
0x06A97FF4: c0035fd6  ret
0x06A97FF8: 2da31b97  bl #0x3180cac

; RVA 0x6A868E4 | public static bool AnyMovementLock(Entity entity) { }
; bytes=180 sha256=a29ca75f79b8a5d53e41fbcf54ed5be166590e0897c98400d44a4ed6f063b01f status=arm64_complete_bound indexed_start=True
0x06A868E4: ff0301d1  sub sp, sp, #0x40
0x06A868E8: fe1300f9  str x30, [sp, #0x20]
0x06A868EC: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A868F0: 34950090  adrp x20, #0x7d2a000
0x06A868F4: 88766039  ldrb w8, [x20, #0x81d]
0x06A868F8: f30300aa  mov x19, x0
0x06A868FC: 28010037  tbnz w8, #0, #0x6a86920
0x06A86900: a05f0090  adrp x0, #0x767a000
0x06A86904: 009042f9  ldr x0, [x0, #0x520]
0x06A86908: 44e81b97  bl #0x3180a18
0x06A8690C: a05f0090  adrp x0, #0x767a000
0x06A86910: 009442f9  ldr x0, [x0, #0x528]
0x06A86914: 41e81b97  bl #0x3180a18
0x06A86918: 28008052  movz w8, #0x1
0x06A8691C: 88762039  strb w8, [x20, #0x81d]
0x06A86920: ffa30039  strb wzr, [sp, #0x28]
0x06A86924: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A86928: ff1b00b9  str wzr, [sp, #0x18]
0x06A8692C: 530300b4  cbz x19, #0x6a86994
0x06A86930: a85f0090  adrp x8, #0x767a000
0x06A86934: 089542f9  ldr x8, [x8, #0x528]
0x06A86938: b45f0090  adrp x20, #0x767a000
0x06A8693C: e1a30091  add x1, sp, #0x28
0x06A86940: e00313aa  mov x0, x19
0x06A86944: 020140f9  ldr x2, [x8]
0x06A86948: 949242f9  ldr x20, [x20, #0x520]
0x06A8694C: c9624697  bl #0x3c1f470
0x06A86950: e8a34039  ldrb w8, [sp, #0x28]
0x06A86954: 820240f9  ldr x2, [x20]
0x06A86958: e1230091  add x1, sp, #8
0x06A8695C: 1f010071  cmp w8, #0
0x06A86960: e8079f1a  cset w8, ne
0x06A86964: 1400080a  and w20, w0, w8
0x06A86968: e00313aa  mov x0, x19
0x06A8696C: e75e4697  bl #0x3c1e508
0x06A86970: e8234039  ldrb w8, [sp, #8]
0x06A86974: fe1340f9  ldr x30, [sp, #0x20]
0x06A86978: 1f010071  cmp w8, #0
0x06A8697C: e8079f1a  cset w8, ne
0x06A86980: 0800080a  and w8, w0, w8
0x06A86984: 8002082a  orr w0, w20, w8
0x06A86988: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A8698C: ff030191  add sp, sp, #0x40
0x06A86990: c0035fd6  ret
0x06A86994: c6e81b97  bl #0x3180cac

; RVA 0x6A97FFC | public static bool OnlyMovementLock(Entity entity) { }
; bytes=184 sha256=e4c9687d3335295ed5097de5ce40e0097ce530d6f6f15f9456ee6be019a88545 status=arm64_complete_bound indexed_start=True
0x06A97FFC: ff0301d1  sub sp, sp, #0x40
0x06A98000: fe1300f9  str x30, [sp, #0x20]
0x06A98004: f44f03a9  stp x20, x19, [sp, #0x30]
0x06A98008: 949400d0  adrp x20, #0x7d2a000
0x06A9800C: 887a6039  ldrb w8, [x20, #0x81e]
0x06A98010: f30300aa  mov x19, x0
0x06A98014: 28010037  tbnz w8, #0, #0x6a98038
0x06A98018: 005f00d0  adrp x0, #0x767a000
0x06A9801C: 009042f9  ldr x0, [x0, #0x520]
0x06A98020: 7ea21b97  bl #0x3180a18
0x06A98024: 005f00d0  adrp x0, #0x767a000
0x06A98028: 009442f9  ldr x0, [x0, #0x528]
0x06A9802C: 7ba21b97  bl #0x3180a18
0x06A98030: 28008052  movz w8, #0x1
0x06A98034: 887a2039  strb w8, [x20, #0x81e]
0x06A98038: ffa30039  strb wzr, [sp, #0x28]
0x06A9803C: ffff00a9  stp xzr, xzr, [sp, #8]
0x06A98040: ff1b00b9  str wzr, [sp, #0x18]
0x06A98044: 730300b4  cbz x19, #0x6a980b0
0x06A98048: 085f00d0  adrp x8, #0x767a000
0x06A9804C: 089542f9  ldr x8, [x8, #0x528]
0x06A98050: 145f00d0  adrp x20, #0x767a000
0x06A98054: e1a30091  add x1, sp, #0x28
0x06A98058: e00313aa  mov x0, x19
0x06A9805C: 020140f9  ldr x2, [x8]
0x06A98060: 949242f9  ldr x20, [x20, #0x520]
0x06A98064: 031d4697  bl #0x3c1f470
0x06A98068: e8a34039  ldrb w8, [sp, #0x28]
0x06A9806C: 820240f9  ldr x2, [x20]
0x06A98070: e1230091  add x1, sp, #8
0x06A98074: 1f010071  cmp w8, #0
0x06A98078: e8079f1a  cset w8, ne
0x06A9807C: 1400080a  and w20, w0, w8
0x06A98080: e00313aa  mov x0, x19
0x06A98084: 21194697  bl #0x3c1e508
0x06A98088: e8234039  ldrb w8, [sp, #8]
0x06A9808C: 09000052  eor w9, w0, #1
0x06A98090: fe1340f9  ldr x30, [sp, #0x20]
0x06A98094: 1f010071  cmp w8, #0
0x06A98098: e8179f1a  cset w8, eq
0x06A9809C: 2801082a  orr w8, w9, w8
0x06A980A0: 8002080a  and w0, w20, w8
0x06A980A4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x06A980A8: ff030191  add sp, sp, #0x40
0x06A980AC: c0035fd6  ret
0x06A980B0: ffa21b97  bl #0x3180cac

; RVA 0x6A980B4 | public static bool FixedPosition(Entity entity) { }
; bytes=104 sha256=3ec9510a814ef499abb01c39e57654b3b0261ca371f945108645bf158a08b08c status=arm64_complete_bound indexed_start=True
0x06A980B4: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A980B8: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A980BC: 949400d0  adrp x20, #0x7d2a000
0x06A980C0: 887e6039  ldrb w8, [x20, #0x81f]
0x06A980C4: f30300aa  mov x19, x0
0x06A980C8: c8000037  tbnz w8, #0, #0x6a980e0
0x06A980CC: c06400d0  adrp x0, #0x7732000
0x06A980D0: 00c042f9  ldr x0, [x0, #0x580]
0x06A980D4: 51a21b97  bl #0x3180a18
0x06A980D8: 28008052  movz w8, #0x1
0x06A980DC: 887e2039  strb w8, [x20, #0x81f]
0x06A980E0: e00313aa  mov x0, x19
0x06A980E4: 00baff97  bl #0x6a868e4
0x06A980E8: 930100b4  cbz x19, #0x6a98118
0x06A980EC: c86400d0  adrp x8, #0x7732000
0x06A980F0: 08c142f9  ldr x8, [x8, #0x580]
0x06A980F4: f403002a  mov w20, w0
0x06A980F8: e00313aa  mov x0, x19
0x06A980FC: 010140f9  ldr x1, [x8]
0x06A98100: 680e4697  bl #0x3c1baa0
0x06A98104: 8802002a  orr w8, w20, w0
0x06A98108: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A9810C: 00010012  and w0, w8, #1
0x06A98110: fe0742f8  ldr x30, [sp], #0x20
0x06A98114: c0035fd6  ret
0x06A98118: e5a21b97  bl #0x3180cac

