; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 920 .ChargableSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x666C640 | private static void .cctor() { }
; bytes=104 sha256=84eca1dc8c90953efa72f4a038e36f03f947388f0a1433b2323d721dfee9e4ba status=arm64_complete_bound indexed_start=True
0x0666C640: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666C644: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C648: f3b50090  adrp x19, #0x7d28000
0x0666C64C: d48400f0  adrp x20, #0x7707000
0x0666C650: 68da4339  ldrb w8, [x19, #0xf6]
0x0666C654: 94de47f9  ldr x20, [x20, #0xfb8]
0x0666C658: c8000037  tbnz w8, #0, #0x666c670
0x0666C65C: c08400f0  adrp x0, #0x7707000
0x0666C660: 00dc47f9  ldr x0, [x0, #0xfb8]
0x0666C664: ed502c97  bl #0x3180a18
0x0666C668: 28008052  movz w8, #0x1
0x0666C66C: 68da0339  strb w8, [x19, #0xf6]
0x0666C670: 800240f9  ldr x0, [x20]
0x0666C674: 8b512c97  bl #0x3180ca0
0x0666C678: e1031faa  mov x1, xzr
0x0666C67C: f30300aa  mov x19, x0
0x0666C680: dfb7c197  bl #0x56da5fc
0x0666C684: 880240f9  ldr x8, [x20]
0x0666C688: e10313aa  mov x1, x19
0x0666C68C: 085d40f9  ldr x8, [x8, #0xb8]
0x0666C690: 130100f9  str x19, [x8]
0x0666C694: 880240f9  ldr x8, [x20]
0x0666C698: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C69C: 005d40f9  ldr x0, [x8, #0xb8]
0x0666C6A0: fe0742f8  ldr x30, [sp], #0x20
0x0666C6A4: c8502c17  b #0x31809c4

; RVA 0x666C6A8 | public void .ctor() { }
; bytes=8 sha256=9119b965d421abf9b34183f844946cce2c31c6088161fcd3fd6ba43a431a3278 status=arm64_complete_bound indexed_start=True
0x0666C6A8: e1031faa  mov x1, xzr
0x0666C6AC: d4b7c117  b #0x56da5fc

; RVA 0x666C6B0 | internal bool <OnWillProcessComponents>b__10_0(ChargableComponent chargable) { }
; bytes=92 sha256=0558a0090226e83a4835c37751edfcc63dc5308c33a353d15a1710fd9fbb139f status=arm64_complete_bound indexed_start=True
0x0666C6B0: fe0f1ef8  str x30, [sp, #-0x20]!
0x0666C6B4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0666C6B8: f4b50090  adrp x20, #0x7d28000
0x0666C6BC: 88de4339  ldrb w8, [x20, #0xf7]
0x0666C6C0: f30301aa  mov x19, x1
0x0666C6C4: c8000037  tbnz w8, #0, #0x666c6dc
0x0666C6C8: c08300d0  adrp x0, #0x76e6000
0x0666C6CC: 00b043f9  ldr x0, [x0, #0x760]
0x0666C6D0: d2502c97  bl #0x3180a18
0x0666C6D4: 28008052  movz w8, #0x1
0x0666C6D8: 88de0339  strb w8, [x20, #0xf7]
0x0666C6DC: 730100b4  cbz x19, #0x666c708
0x0666C6E0: c88300d0  adrp x8, #0x76e6000
0x0666C6E4: 08b143f9  ldr x8, [x8, #0x760]
0x0666C6E8: e00313aa  mov x0, x19
0x0666C6EC: 010140f9  ldr x1, [x8]
0x0666C6F0: 4b045697  bl #0x3bed81c
0x0666C6F4: a00000b4  cbz x0, #0x666c708
0x0666C6F8: 00c04039  ldrb w0, [x0, #0x30]
0x0666C6FC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666C700: fe0742f8  ldr x30, [sp], #0x20
0x0666C704: c0035fd6  ret
0x0666C708: 69512c97  bl #0x3180cac

