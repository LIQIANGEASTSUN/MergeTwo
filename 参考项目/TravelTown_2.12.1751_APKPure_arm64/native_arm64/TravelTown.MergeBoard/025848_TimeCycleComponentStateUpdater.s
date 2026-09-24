; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25848 Merger.MergeBoard.Logic.State.Updaters.TimeCycleComponentStateUpdater
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A85D48 | protected override void UpdateFromState(ref TimeCycleComponent component, ItemPayloadBase itemState) { }
; bytes=220 sha256=67509131bc1244c06fdcd46f475d1bd67aa444c839a1b3dda51c499b4a96309c status=arm64_complete_bound indexed_start=True
0x06A85D48: e80f1dfc  str d8, [sp, #-0x30]!
0x06A85D4C: fe5701a9  stp x30, x21, [sp, #0x10]
0x06A85D50: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A85D54: 359500b0  adrp x21, #0x7d2a000
0x06A85D58: a85e5e39  ldrb w8, [x21, #0x797]
0x06A85D5C: f40302aa  mov x20, x2
0x06A85D60: f30301aa  mov x19, x1
0x06A85D64: c8000037  tbnz w8, #0, #0x6a85d7c
0x06A85D68: 405e00b0  adrp x0, #0x764e000
0x06A85D6C: 000447f9  ldr x0, [x0, #0xe08]
0x06A85D70: 2aeb1b97  bl #0x3180a18
0x06A85D74: 28008052  movz w8, #0x1
0x06A85D78: a85e1e39  strb w8, [x21, #0x797]
0x06A85D7C: d40400b4  cbz x20, #0x6a85e14
0x06A85D80: 943a40f9  ldr x20, [x20, #0x70]
0x06A85D84: 940400b4  cbz x20, #0x6a85e14
0x06A85D88: 801240fd  ldr d0, [x20, #0x20]
0x06A85D8C: 601200fd  str d0, [x19, #0x20]
0x06A85D90: 881640fd  ldr d8, [x20, #0x28]
0x06A85D94: 681600fd  str d8, [x19, #0x28]
0x06A85D98: 801a40fd  ldr d0, [x20, #0x30]
0x06A85D9C: 601a00fd  str d0, [x19, #0x30]
0x06A85DA0: 883a40b9  ldr w8, [x20, #0x38]
0x06A85DA4: 683a00b9  str w8, [x19, #0x38]
0x06A85DA8: 80c243fc  ldur d0, [x20, #0x3c]
0x06A85DAC: 485e00b0  adrp x8, #0x764e000
0x06A85DB0: 602200fd  str d0, [x19, #0x40]
0x06A85DB4: 080547f9  ldr x8, [x8, #0xe08]
0x06A85DB8: 750a40b9  ldr w21, [x19, #8]
0x06A85DBC: 000140f9  ldr x0, [x8]
0x06A85DC0: 08e040b9  ldr w8, [x0, #0xe0]
0x06A85DC4: 48000035  cbnz w8, #0x6a85dcc
0x06A85DC8: 71eb1b97  bl #0x3180b8c
0x06A85DCC: a102621e  scvtf d1, w21
0x06A85DD0: 001da84e  mov v0.16b, v8.16b
0x06A85DD4: e0031faa  mov x0, xzr
0x06A85DD8: de45b097  bl #0x5697550
0x06A85DDC: 0020681e  fcmp d0, d8
0x06A85DE0: 601600fd  str d0, [x19, #0x28]
0x06A85DE4: 60000054  b.eq #0x6a85df0
0x06A85DE8: 28008052  movz w8, #0x1
0x06A85DEC: 68260139  strb w8, [x19, #0x49]
0x06A85DF0: 28008052  movz w8, #0x1
0x06A85DF4: 68220139  strb w8, [x19, #0x48]
0x06A85DF8: 684640b9  ldr w8, [x19, #0x44]
0x06A85DFC: 89124139  ldrb w9, [x20, #0x44]
0x06A85E00: 1f050071  cmp w8, #1
0x06A85E04: 692a0139  strb w9, [x19, #0x4a]
0x06A85E08: 6b000054  b.lt #0x6a85e14
0x06A85E0C: 48008052  movz w8, #0x2
0x06A85E10: 683e00b9  str w8, [x19, #0x3c]
0x06A85E14: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A85E18: fe5741a9  ldp x30, x21, [sp, #0x10]
0x06A85E1C: e80743fc  ldr d8, [sp], #0x30
0x06A85E20: c0035fd6  ret

; RVA 0x6A85E24 | public void .ctor() { }
; bytes=72 sha256=767a32222a1559b656bd335108244c7893c09ec31d495ce3679b19b9fe15bea3 status=arm64_complete_bound indexed_start=True
0x06A85E24: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A85E28: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A85E2C: 349500b0  adrp x20, #0x7d2a000
0x06A85E30: 75650090  adrp x21, #0x7731000
0x06A85E34: 88625e39  ldrb w8, [x20, #0x798]
0x06A85E38: b57646f9  ldr x21, [x21, #0xce8]
0x06A85E3C: f30300aa  mov x19, x0
0x06A85E40: c8000037  tbnz w8, #0, #0x6a85e58
0x06A85E44: 60650090  adrp x0, #0x7731000
0x06A85E48: 007446f9  ldr x0, [x0, #0xce8]
0x06A85E4C: f3ea1b97  bl #0x3180a18
0x06A85E50: 28008052  movz w8, #0x1
0x06A85E54: 88621e39  strb w8, [x20, #0x798]
0x06A85E58: a10240f9  ldr x1, [x21]
0x06A85E5C: e00313aa  mov x0, x19
0x06A85E60: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A85E64: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A85E68: f9698b17  b #0x4d6064c

