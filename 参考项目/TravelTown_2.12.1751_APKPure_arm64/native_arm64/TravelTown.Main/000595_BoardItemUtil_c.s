; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 595 .BoardItemUtil.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626F4CC | private static void .cctor() { }
; bytes=104 sha256=735e7fe4976d9b28f6e012c843151d4f2c6ab27efffef2221397106e312dbfc0 status=arm64_complete_bound indexed_start=True
0x0626F4CC: fe0f1ef8  str x30, [sp, #-0x20]!
0x0626F4D0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626F4D4: b3d500d0  adrp x19, #0x7d25000
0x0626F4D8: b4a300f0  adrp x20, #0x76e6000
0x0626F4DC: 68665039  ldrb w8, [x19, #0x419]
0x0626F4E0: 947a42f9  ldr x20, [x20, #0x4f0]
0x0626F4E4: c8000037  tbnz w8, #0, #0x626f4fc
0x0626F4E8: a0a300f0  adrp x0, #0x76e6000
0x0626F4EC: 007842f9  ldr x0, [x0, #0x4f0]
0x0626F4F0: 4a453c97  bl #0x3180a18
0x0626F4F4: 28008052  movz w8, #0x1
0x0626F4F8: 68661039  strb w8, [x19, #0x419]
0x0626F4FC: 800240f9  ldr x0, [x20]
0x0626F500: e8453c97  bl #0x3180ca0
0x0626F504: e1031faa  mov x1, xzr
0x0626F508: f30300aa  mov x19, x0
0x0626F50C: 3cacd197  bl #0x56da5fc
0x0626F510: 880240f9  ldr x8, [x20]
0x0626F514: e10313aa  mov x1, x19
0x0626F518: 085d40f9  ldr x8, [x8, #0xb8]
0x0626F51C: 130100f9  str x19, [x8]
0x0626F520: 880240f9  ldr x8, [x20]
0x0626F524: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626F528: 005d40f9  ldr x0, [x8, #0xb8]
0x0626F52C: fe0742f8  ldr x30, [sp], #0x20
0x0626F530: 25453c17  b #0x31809c4

; RVA 0x626F534 | public void .ctor() { }
; bytes=8 sha256=90422749d659a2399b4564825fd1c0db81ee8ede22054c3312c217ff8a562c8e status=arm64_complete_bound indexed_start=True
0x0626F534: e1031faa  mov x1, xzr
0x0626F538: 31acd117  b #0x56da5fc

; RVA 0x626F53C | internal bool <GetPositionItemClosestToInventory>b__1_1(PositionComponent item) { }
; bytes=92 sha256=1368691b6563347eeee30ae5f93d4341dbc31e040ba0782b3615a33d4cbc7c13 status=arm64_complete_bound indexed_start=True
0x0626F53C: fe0f1ef8  str x30, [sp, #-0x20]!
0x0626F540: f44f01a9  stp x20, x19, [sp, #0x10]
0x0626F544: b4d500d0  adrp x20, #0x7d25000
0x0626F548: 886a5039  ldrb w8, [x20, #0x41a]
0x0626F54C: f30301aa  mov x19, x1
0x0626F550: c8000037  tbnz w8, #0, #0x626f568
0x0626F554: a0a300f0  adrp x0, #0x76e6000
0x0626F558: 007c42f9  ldr x0, [x0, #0x4f8]
0x0626F55C: 2f453c97  bl #0x3180a18
0x0626F560: 28008052  movz w8, #0x1
0x0626F564: 886a1039  strb w8, [x20, #0x41a]
0x0626F568: 730100b4  cbz x19, #0x626f594
0x0626F56C: a8a300f0  adrp x8, #0x76e6000
0x0626F570: 087d42f9  ldr x8, [x8, #0x4f8]
0x0626F574: e00313aa  mov x0, x19
0x0626F578: 010140f9  ldr x1, [x8]
0x0626F57C: b8f86597  bl #0x3bed85c
0x0626F580: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0626F584: 1f0000f1  cmp x0, #0
0x0626F588: e0079f1a  cset w0, ne
0x0626F58C: fe0742f8  ldr x30, [sp], #0x20
0x0626F590: c0035fd6  ret
0x0626F594: c6453c97  bl #0x3180cac

