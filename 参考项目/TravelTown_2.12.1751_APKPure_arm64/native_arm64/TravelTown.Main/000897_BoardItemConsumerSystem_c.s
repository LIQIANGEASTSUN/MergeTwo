; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 897 .BoardItemConsumerSystem.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6661810 | private static void .cctor() { }
; bytes=104 sha256=84f2e98a0cf5ec9c36d0c335e6087fd238b02191a62c29ff1c55498b6de19aa1 status=arm64_complete_bound indexed_start=True
0x06661810: fe0f1ef8  str x30, [sp, #-0x20]!
0x06661814: f44f01a9  stp x20, x19, [sp, #0x10]
0x06661818: 33b600f0  adrp x19, #0x7d28000
0x0666181C: 348500d0  adrp x20, #0x7707000
0x06661820: 685a4239  ldrb w8, [x19, #0x96]
0x06661824: 946a45f9  ldr x20, [x20, #0xad0]
0x06661828: c8000037  tbnz w8, #0, #0x6661840
0x0666182C: 208500d0  adrp x0, #0x7707000
0x06661830: 006845f9  ldr x0, [x0, #0xad0]
0x06661834: 797c2c97  bl #0x3180a18
0x06661838: 28008052  movz w8, #0x1
0x0666183C: 685a0239  strb w8, [x19, #0x96]
0x06661840: 800240f9  ldr x0, [x20]
0x06661844: 177d2c97  bl #0x3180ca0
0x06661848: e1031faa  mov x1, xzr
0x0666184C: f30300aa  mov x19, x0
0x06661850: 6be3c197  bl #0x56da5fc
0x06661854: 880240f9  ldr x8, [x20]
0x06661858: e10313aa  mov x1, x19
0x0666185C: 085d40f9  ldr x8, [x8, #0xb8]
0x06661860: 130100f9  str x19, [x8]
0x06661864: 880240f9  ldr x8, [x20]
0x06661868: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0666186C: 005d40f9  ldr x0, [x8, #0xb8]
0x06661870: fe0742f8  ldr x30, [sp], #0x20
0x06661874: 547c2c17  b #0x31809c4

; RVA 0x6661878 | public void .ctor() { }
; bytes=8 sha256=43269d97233d55944be2b3f0a3d60da38d868ae4f8608bdff0fb61e988580733 status=arm64_complete_bound indexed_start=True
0x06661878: e1031faa  mov x1, xzr
0x0666187C: 60e3c117  b #0x56da5fc

; RVA 0x6661880 | internal bool <GetTaskConsumeItems>b__7_1(IdComponent id) { }
; bytes=104 sha256=6df0f81c3b74c789929c96a2c83c5e142dac94b1a2966eb337dff6e586405a65 status=arm64_complete_bound indexed_start=True
0x06661880: fe0f1ef8  str x30, [sp, #-0x20]!
0x06661884: f44f01a9  stp x20, x19, [sp, #0x10]
0x06661888: 34b600f0  adrp x20, #0x7d28000
0x0666188C: 885e4239  ldrb w8, [x20, #0x97]
0x06661890: f30301aa  mov x19, x1
0x06661894: c8000037  tbnz w8, #0, #0x66618ac
0x06661898: e08000b0  adrp x0, #0x767e000
0x0666189C: 001c43f9  ldr x0, [x0, #0x638]
0x066618A0: 5e7c2c97  bl #0x3180a18
0x066618A4: 28008052  movz w8, #0x1
0x066618A8: 885e0239  strb w8, [x20, #0x97]
0x066618AC: d30100b4  cbz x19, #0x66618e4
0x066618B0: e88000b0  adrp x8, #0x767e000
0x066618B4: 081d43f9  ldr x8, [x8, #0x638]
0x066618B8: e00313aa  mov x0, x19
0x066618BC: 010140f9  ldr x1, [x8]
0x066618C0: d72f5697  bl #0x3bed81c
0x066618C4: 000100b4  cbz x0, #0x66618e4
0x066618C8: e1031faa  mov x1, xzr
0x066618CC: 926f0a94  bl #0x68fd714
0x066618D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x066618D4: e803202a  mvn w8, w0
0x066618D8: 00010012  and w0, w8, #1
0x066618DC: fe0742f8  ldr x30, [sp], #0x20
0x066618E0: c0035fd6  ret
0x066618E4: f27c2c97  bl #0x3180cac

