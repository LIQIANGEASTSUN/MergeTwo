; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 554 MergeEngine.Model.Configuration.MergeConfigurationDependencyInfo
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613C2E8 | public void .ctor() { }
; bytes=220 sha256=841e648644cf478db08da136e16786204e0b953addcd6bb430c6c6fcb2965b3f status=arm64_complete_bound indexed_start=True
0x0613C2E8: fe0f1cf8  str x30, [sp, #-0x40]!
0x0613C2EC: f85f01a9  stp x24, x23, [sp, #0x10]
0x0613C2F0: f65702a9  stp x22, x21, [sp, #0x20]
0x0613C2F4: f44f03a9  stp x20, x19, [sp, #0x30]
0x0613C2F8: 57df0090  adrp x23, #0x7d24000
0x0613C2FC: f8ac00f0  adrp x24, #0x76db000
0x0613C300: f4ac00f0  adrp x20, #0x76db000
0x0613C304: f6ac00f0  adrp x22, #0x76db000
0x0613C308: f5ac00f0  adrp x21, #0x76db000
0x0613C30C: e8725639  ldrb w8, [x23, #0x59c]
0x0613C310: 18df40f9  ldr x24, [x24, #0x1b8]
0x0613C314: 94e240f9  ldr x20, [x20, #0x1c0]
0x0613C318: d6e640f9  ldr x22, [x22, #0x1c8]
0x0613C31C: b5ea40f9  ldr x21, [x21, #0x1d0]
0x0613C320: f30300aa  mov x19, x0
0x0613C324: e8010037  tbnz w8, #0, #0x613c360
0x0613C328: e0ac00f0  adrp x0, #0x76db000
0x0613C32C: 00e040f9  ldr x0, [x0, #0x1c0]
0x0613C330: ba114197  bl #0x3180a18
0x0613C334: e0ac00f0  adrp x0, #0x76db000
0x0613C338: 00e840f9  ldr x0, [x0, #0x1d0]
0x0613C33C: b7114197  bl #0x3180a18
0x0613C340: e0ac00f0  adrp x0, #0x76db000
0x0613C344: 00e440f9  ldr x0, [x0, #0x1c8]
0x0613C348: b4114197  bl #0x3180a18
0x0613C34C: e0ac00f0  adrp x0, #0x76db000
0x0613C350: 00dc40f9  ldr x0, [x0, #0x1b8]
0x0613C354: b1114197  bl #0x3180a18
0x0613C358: 28008052  movz w8, #0x1
0x0613C35C: e8721639  strb w8, [x23, #0x59c]
0x0613C360: 000340f9  ldr x0, [x24]
0x0613C364: 4f124197  bl #0x3180ca0
0x0613C368: 810240f9  ldr x1, [x20]
0x0613C36C: f40300aa  mov x20, x0
0x0613C370: b40ec697  bl #0x52bfe40
0x0613C374: e00313aa  mov x0, x19
0x0613C378: 148c01f8  str x20, [x0, #0x18]!
0x0613C37C: e10314aa  mov x1, x20
0x0613C380: 91114197  bl #0x31809c4
0x0613C384: c00240f9  ldr x0, [x22]
0x0613C388: 46124197  bl #0x3180ca0
0x0613C38C: a10240f9  ldr x1, [x21]
0x0613C390: f40300aa  mov x20, x0
0x0613C394: ab0ec697  bl #0x52bfe40
0x0613C398: e00313aa  mov x0, x19
0x0613C39C: 140c02f8  str x20, [x0, #0x20]!
0x0613C3A0: e10314aa  mov x1, x20
0x0613C3A4: 88114197  bl #0x31809c4
0x0613C3A8: e00313aa  mov x0, x19
0x0613C3AC: f44f43a9  ldp x20, x19, [sp, #0x30]
0x0613C3B0: f65742a9  ldp x22, x21, [sp, #0x20]
0x0613C3B4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x0613C3B8: e1031faa  mov x1, xzr
0x0613C3BC: fe0744f8  ldr x30, [sp], #0x40
0x0613C3C0: 8f78d617  b #0x56da5fc

