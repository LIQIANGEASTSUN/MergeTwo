; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 98 .ItemSpawningQueue.<>c__DisplayClass17_2
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5FEAF84 | public void .ctor() { }
; bytes=8 sha256=f48e983da836a9b1528f92446a86bb1c4cbfe19987627d4af26e549b5dbc45c7 status=arm64_complete_bound indexed_start=True
0x05FEAF84: e1031faa  mov x1, xzr
0x05FEAF88: 9dbddb17  b #0x56da5fc

; RVA 0x5FEB010 | internal bool <GetNextItems>b__3(ItemMultiple consumedItem) { }
; bytes=168 sha256=451334a515951efe95545ed224667837d14179d769dadbc8626f14f2eb28e841 status=arm64_complete_bound indexed_start=True
0x05FEB010: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05FEB014: f44f01a9  stp x20, x19, [sp, #0x10]
0x05FEB018: d5e90090  adrp x21, #0x7d23000
0x05FEB01C: a8d25839  ldrb w8, [x21, #0x634]
0x05FEB020: f30301aa  mov x19, x1
0x05FEB024: f40300aa  mov x20, x0
0x05FEB028: 28010037  tbnz w8, #0, #0x5feb04c
0x05FEB02C: 00b700b0  adrp x0, #0x76cc000
0x05FEB030: 00d442f9  ldr x0, [x0, #0x5a8]
0x05FEB034: 79564697  bl #0x3180a18
0x05FEB038: 00b700d0  adrp x0, #0x76cd000
0x05FEB03C: 00b445f9  ldr x0, [x0, #0xb68]
0x05FEB040: 76564697  bl #0x3180a18
0x05FEB044: 28008052  movz w8, #0x1
0x05FEB048: a8d21839  strb w8, [x21, #0x634]
0x05FEB04C: 880a40f9  ldr x8, [x20, #0x10]
0x05FEB050: 280300b4  cbz x8, #0x5feb0b4
0x05FEB054: 001140f9  ldr x0, [x8, #0x20]
0x05FEB058: e00200b4  cbz x0, #0x5feb0b4
0x05FEB05C: 08b700d0  adrp x8, #0x76cd000
0x05FEB060: 08b545f9  ldr x8, [x8, #0xb68]
0x05FEB064: e1031f2a  mov w1, wzr
0x05FEB068: 020140f9  ldr x2, [x8]
0x05FEB06C: 4c648197  bl #0x404419c
0x05FEB070: 200200b4  cbz x0, #0x5feb0b4
0x05FEB074: 080040f9  ldr x8, [x0]
0x05FEB078: 09855ca9  ldp x9, x1, [x8, #0x1c8]
0x05FEB07C: 20013fd6  blr x9
0x05FEB080: b30100b4  cbz x19, #0x5feb0b4
0x05FEB084: 08b700b0  adrp x8, #0x76cc000
0x05FEB088: 08d542f9  ldr x8, [x8, #0x5a8]
0x05FEB08C: f40300aa  mov x20, x0
0x05FEB090: e00313aa  mov x0, x19
0x05FEB094: 010140f9  ldr x1, [x8]
0x05FEB098: 009ece97  bl #0x5392898
0x05FEB09C: e10300aa  mov x1, x0
0x05FEB0A0: e00314aa  mov x0, x20
0x05FEB0A4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05FEB0A8: e2031faa  mov x2, xzr
0x05FEB0AC: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05FEB0B0: f0fdd317  b #0x54ea870
0x05FEB0B4: fe564697  bl #0x3180cac

