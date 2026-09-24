; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 614 .HintUtil.<>c__DisplayClass10_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6274E34 | public void .ctor() { }
; bytes=8 sha256=1ebc71f8a8efa55cda91d5b428099033cde7c13d7a123a1a589516688f992fc9 status=arm64_complete_bound indexed_start=True
0x06274E34: e1031faa  mov x1, xzr
0x06274E38: f195d117  b #0x56da5fc

; RVA 0x6277024 | internal void <GetLowestLevelBasicItem>b__2(IdComponent item) { }
; bytes=228 sha256=d6095d773cfd98699442190d4f15d943168a15c92fde576c2cc203165c3510ae status=arm64_complete_bound indexed_start=True
0x06277024: fe0f1df8  str x30, [sp, #-0x30]!
0x06277028: f65701a9  stp x22, x21, [sp, #0x10]
0x0627702C: f44f02a9  stp x20, x19, [sp, #0x20]
0x06277030: 75d500d0  adrp x21, #0x7d25000
0x06277034: a85e5139  ldrb w8, [x21, #0x457]
0x06277038: f30301aa  mov x19, x1
0x0627703C: f40300aa  mov x20, x0
0x06277040: c8000037  tbnz w8, #0, #0x6277058
0x06277044: 00a000f0  adrp x0, #0x767a000
0x06277048: 004c42f9  ldr x0, [x0, #0x498]
0x0627704C: 73263c97  bl #0x3180a18
0x06277050: 28008052  movz w8, #0x1
0x06277054: a85e1139  strb w8, [x21, #0x457]
0x06277058: 730500b4  cbz x19, #0x6277104
0x0627705C: 950a40f9  ldr x21, [x20, #0x10]
0x06277060: 350500b4  cbz x21, #0x6277104
0x06277064: 0aa000f0  adrp x10, #0x767a000
0x06277068: a80240f9  ldr x8, [x21]
0x0627706C: 4a4d42f9  ldr x10, [x10, #0x498]
0x06277070: 761a40f9  ldr x22, [x19, #0x30]
0x06277074: 095d4279  ldrh w9, [x8, #0x12e]
0x06277078: 410140f9  ldr x1, [x10]
0x0627707C: 290100b4  cbz x9, #0x62770a0
0x06277080: 0a5940f9  ldr x10, [x8, #0xb0]
0x06277084: 4a210091  add x10, x10, #8
0x06277088: 4b815ff8  ldur x11, [x10, #-8]
0x0627708C: 7f0101eb  cmp x11, x1
0x06277090: 00010054  b.eq #0x62770b0
0x06277094: 290500f1  subs x9, x9, #1
0x06277098: 4a410091  add x10, x10, #0x10
0x0627709C: 61ffff54  b.ne #0x6277088
0x062770A0: 22038052  movz w2, #0x19
0x062770A4: e00315aa  mov x0, x21
0x062770A8: 9a7e3b97  bl #0x3156b10
0x062770AC: 05000014  b #0x62770c0
0x062770B0: 490140b9  ldr w9, [x10]
0x062770B4: 29650011  add w9, w9, #0x19
0x062770B8: 08d1298b  add x8, x8, w9, sxtw #4
0x062770BC: 00e10491  add x0, x8, #0x138
0x062770C0: 080840a9  ldp x8, x2, [x0]
0x062770C4: e00315aa  mov x0, x21
0x062770C8: e10316aa  mov x1, x22
0x062770CC: 00013fd6  blr x8
0x062770D0: 881a40b9  ldr w8, [x20, #0x18]
0x062770D4: 1f00086b  cmp w0, w8
0x062770D8: ea000054  b.ge #0x62770f4
0x062770DC: 930e02f8  str x19, [x20, #0x20]!
0x062770E0: f503002a  mov w21, w0
0x062770E4: e00314aa  mov x0, x20
0x062770E8: e10313aa  mov x1, x19
0x062770EC: 36263c97  bl #0x31809c4
0x062770F0: 95821fb8  stur w21, [x20, #-8]
0x062770F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x062770F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x062770FC: fe0743f8  ldr x30, [sp], #0x30
0x06277100: c0035fd6  ret
0x06277104: ea263c97  bl #0x3180cac

