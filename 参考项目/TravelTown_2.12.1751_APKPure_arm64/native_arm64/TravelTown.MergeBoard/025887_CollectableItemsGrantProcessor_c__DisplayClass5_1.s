; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25887 .CollectableItemsGrantProcessor.<>c__DisplayClass5_1
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A91DE0 | public void .ctor() { }
; bytes=8 sha256=0d07dc4899a1880b30b316e376b53828b12edc5d9301c8b1fee26ffe49fccbb7 status=arm64_complete_bound indexed_start=True
0x06A91DE0: e1031faa  mov x1, xzr
0x06A91DE4: 0622b117  b #0x56da5fc

; RVA 0x6A926AC | internal void <Process>b__1() { }
; bytes=136 sha256=f131a1f39683b0c25ea4161cc26b6d668357994cc512a1ddb4ae906a9e66c1b5 status=arm64_complete_bound indexed_start=True
0x06A926AC: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A926B0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A926B4: d4940090  adrp x20, #0x7d2a000
0x06A926B8: 88d25f39  ldrb w8, [x20, #0x7f4]
0x06A926BC: f30300aa  mov x19, x0
0x06A926C0: c8000037  tbnz w8, #0, #0x6a926d8
0x06A926C4: 00650090  adrp x0, #0x7732000
0x06A926C8: 004c41f9  ldr x0, [x0, #0x298]
0x06A926CC: d3b81b97  bl #0x3180a18
0x06A926D0: 28008052  movz w8, #0x1
0x06A926D4: 88d21f39  strb w8, [x20, #0x7f4]
0x06A926D8: ff0700f9  str xzr, [sp, #8]
0x06A926DC: 680e40f9  ldr x8, [x19, #0x18]
0x06A926E0: 880200b4  cbz x8, #0x6a92730
0x06A926E4: 080d40f9  ldr x8, [x8, #0x18]
0x06A926E8: 480200b4  cbz x8, #0x6a92730
0x06A926EC: 002540f9  ldr x0, [x8, #0x48]
0x06A926F0: 000200b4  cbz x0, #0x6a92730
0x06A926F4: 08650090  adrp x8, #0x7732000
0x06A926F8: 084d41f9  ldr x8, [x8, #0x298]
0x06A926FC: 610a40f9  ldr x1, [x19, #0x10]
0x06A92700: e2230091  add x2, sp, #8
0x06A92704: 030140f9  ldr x3, [x8]
0x06A92708: a0479197  bl #0x4ee4588
0x06A9270C: e80740f9  ldr x8, [sp, #8]
0x06A92710: a80000b4  cbz x8, #0x6a92724
0x06A92714: 090d40f9  ldr x9, [x8, #0x18]
0x06A92718: 002140f9  ldr x0, [x8, #0x40]
0x06A9271C: 011540f9  ldr x1, [x8, #0x28]
0x06A92720: 20013fd6  blr x9
0x06A92724: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A92728: fe0742f8  ldr x30, [sp], #0x20
0x06A9272C: c0035fd6  ret
0x06A92730: 5fb91b97  bl #0x3180cac

