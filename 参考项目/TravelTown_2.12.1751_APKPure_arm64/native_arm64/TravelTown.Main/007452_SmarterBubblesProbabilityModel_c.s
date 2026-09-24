; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7452 .SmarterBubblesProbabilityModel.<>c
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657B4EC | private static void .cctor() { }
; bytes=104 sha256=6434fc9e04a16ae1e3de3e23bacb21bda19ff9f83061ec28c02209f7fd72a82f status=arm64_complete_bound indexed_start=True
0x0657B4EC: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657B4F0: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657B4F4: 73bd0090  adrp x19, #0x7d27000
0x0657B4F8: 348c00b0  adrp x20, #0x7700000
0x0657B4FC: 680e5939  ldrb w8, [x19, #0x643]
0x0657B500: 945a42f9  ldr x20, [x20, #0x4b0]
0x0657B504: c8000037  tbnz w8, #0, #0x657b51c
0x0657B508: 208c00b0  adrp x0, #0x7700000
0x0657B50C: 005842f9  ldr x0, [x0, #0x4b0]
0x0657B510: 42153097  bl #0x3180a18
0x0657B514: 28008052  movz w8, #0x1
0x0657B518: 680e1939  strb w8, [x19, #0x643]
0x0657B51C: 800240f9  ldr x0, [x20]
0x0657B520: e0153097  bl #0x3180ca0
0x0657B524: e1031faa  mov x1, xzr
0x0657B528: f30300aa  mov x19, x0
0x0657B52C: 347cc597  bl #0x56da5fc
0x0657B530: 880240f9  ldr x8, [x20]
0x0657B534: e10313aa  mov x1, x19
0x0657B538: 085d40f9  ldr x8, [x8, #0xb8]
0x0657B53C: 130100f9  str x19, [x8]
0x0657B540: 880240f9  ldr x8, [x20]
0x0657B544: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657B548: 005d40f9  ldr x0, [x8, #0xb8]
0x0657B54C: fe0742f8  ldr x30, [sp], #0x20
0x0657B550: 1d153017  b #0x31809c4

; RVA 0x657B554 | public void .ctor() { }
; bytes=8 sha256=2a3d85bd7631dc5f5f305672b6939d8c0d26cb73e21c0bc98409cea0947fe7c0 status=arm64_complete_bound indexed_start=True
0x0657B554: e1031faa  mov x1, xzr
0x0657B558: 297cc517  b #0x56da5fc

; RVA 0x657B55C | internal bool <IsItemAlreadyOnBoard>b__21_0(LockedComponent locked) { }
; bytes=24 sha256=0dec4c8cdb5e71ad54e1014d565177f14de1676864012ca6c6d6daa58919c5d7 status=arm64_complete_bound indexed_start=True
0x0657B55C: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657B560: 810000b4  cbz x1, #0x657b570
0x0657B564: 20c44039  ldrb w0, [x1, #0x31]
0x0657B568: fe0741f8  ldr x30, [sp], #0x10
0x0657B56C: c0035fd6  ret
0x0657B570: cf153097  bl #0x3180cac

; RVA 0x657B574 | internal string <IsItemAlreadyOnBoard>b__21_1(LockedComponent items) { }
; bytes=92 sha256=9d375c37b801b29c5421d86f0d77fb1fd3cf83557ef8a1aa9b5eb7447002eeb5 status=arm64_complete_bound indexed_start=True
0x0657B574: fe0f1ef8  str x30, [sp, #-0x20]!
0x0657B578: f44f01a9  stp x20, x19, [sp, #0x10]
0x0657B57C: 74bd0090  adrp x20, #0x7d27000
0x0657B580: 88125939  ldrb w8, [x20, #0x644]
0x0657B584: f30301aa  mov x19, x1
0x0657B588: c8000037  tbnz w8, #0, #0x657b5a0
0x0657B58C: 00880090  adrp x0, #0x767b000
0x0657B590: 00cc47f9  ldr x0, [x0, #0xf98]
0x0657B594: 21153097  bl #0x3180a18
0x0657B598: 28008052  movz w8, #0x1
0x0657B59C: 88121939  strb w8, [x20, #0x644]
0x0657B5A0: 730100b4  cbz x19, #0x657b5cc
0x0657B5A4: 08880090  adrp x8, #0x767b000
0x0657B5A8: 08cd47f9  ldr x8, [x8, #0xf98]
0x0657B5AC: e00313aa  mov x0, x19
0x0657B5B0: 010140f9  ldr x1, [x8]
0x0657B5B4: 9ac85997  bl #0x3bed81c
0x0657B5B8: a00000b4  cbz x0, #0x657b5cc
0x0657B5BC: 001840f9  ldr x0, [x0, #0x30]
0x0657B5C0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0657B5C4: fe0742f8  ldr x30, [sp], #0x20
0x0657B5C8: c0035fd6  ret
0x0657B5CC: b8153097  bl #0x3180cac

