; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33877 Merger.MergeBoardSkipCooldownCapability.Logic.TimeCycleSkipCooldownStrategy
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A62D1C | public bool IsOnCooldown(Entity entity) { }
; bytes=152 sha256=a29238faa9e8f3b286071d966a9f3b41fb1ee9fc92b6e7970d4e4d139014a4a1 status=arm64_complete_bound indexed_start=True
0x06A62D1C: ffc301d1  sub sp, sp, #0x70
0x06A62D20: fe2b00f9  str x30, [sp, #0x50]
0x06A62D24: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A62D28: 54960090  adrp x20, #0x7d2a000
0x06A62D2C: 88165a39  ldrb w8, [x20, #0x685]
0x06A62D30: f30301aa  mov x19, x1
0x06A62D34: c8000037  tbnz w8, #0, #0x6a62d4c
0x06A62D38: c0600090  adrp x0, #0x767a000
0x06A62D3C: 00a442f9  ldr x0, [x0, #0x548]
0x06A62D40: 36771c97  bl #0x3180a18
0x06A62D44: 28008052  movz w8, #0x1
0x06A62D48: 88161a39  strb w8, [x20, #0x685]
0x06A62D4C: 00e4006f  movi v0.2d, #0000000000000000
0x06A62D50: e08301ad  stp q0, q0, [sp, #0x30]
0x06A62D54: e08300ad  stp q0, q0, [sp, #0x10]
0x06A62D58: e003803d  str q0, [sp]
0x06A62D5C: b30200b4  cbz x19, #0x6a62db0
0x06A62D60: c8600090  adrp x8, #0x767a000
0x06A62D64: 08a542f9  ldr x8, [x8, #0x548]
0x06A62D68: e1030091  mov x1, sp
0x06A62D6C: e00313aa  mov x0, x19
0x06A62D70: 020140f9  ldr x2, [x8]
0x06A62D74: a4f34697  bl #0x3c1fc04
0x06A62D78: 60000036  tbz w0, #0, #0x6a62d84
0x06A62D7C: e83740b9  ldr w8, [sp, #0x34]
0x06A62D80: e8000034  cbz w8, #0x6a62d9c
0x06A62D84: e8031f2a  mov w8, wzr
0x06A62D88: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A62D8C: fe2b40f9  ldr x30, [sp, #0x50]
0x06A62D90: 00010012  and w0, w8, #1
0x06A62D94: ffc30191  add sp, sp, #0x70
0x06A62D98: c0035fd6  ret
0x06A62D9C: e0030091  mov x0, sp
0x06A62DA0: e1031faa  mov x1, xzr
0x06A62DA4: b5e50094  bl #0x6a9c478
0x06A62DA8: 08000052  eor w8, w0, #1
0x06A62DAC: f7ffff17  b #0x6a62d88
0x06A62DB0: bf771c97  bl #0x3180cac

; RVA 0x6A639A4 | public double GetTimeLeft(Entity entity) { }
; bytes=132 sha256=35f7638290d0e735e3c38fd8781c4fd06431010a6a5ba16d08f59fb681b1a7d6 status=arm64_complete_bound indexed_start=True
0x06A639A4: ffc301d1  sub sp, sp, #0x70
0x06A639A8: fe2b00f9  str x30, [sp, #0x50]
0x06A639AC: f44f06a9  stp x20, x19, [sp, #0x60]
0x06A639B0: 349600f0  adrp x20, #0x7d2a000
0x06A639B4: 881a5a39  ldrb w8, [x20, #0x686]
0x06A639B8: f30301aa  mov x19, x1
0x06A639BC: c8000037  tbnz w8, #0, #0x6a639d4
0x06A639C0: a06000f0  adrp x0, #0x767a000
0x06A639C4: 00a442f9  ldr x0, [x0, #0x548]
0x06A639C8: 14741c97  bl #0x3180a18
0x06A639CC: 28008052  movz w8, #0x1
0x06A639D0: 881a1a39  strb w8, [x20, #0x686]
0x06A639D4: 00e4006f  movi v0.2d, #0000000000000000
0x06A639D8: e08301ad  stp q0, q0, [sp, #0x30]
0x06A639DC: e08300ad  stp q0, q0, [sp, #0x10]
0x06A639E0: e003803d  str q0, [sp]
0x06A639E4: 130200b4  cbz x19, #0x6a63a24
0x06A639E8: a86000f0  adrp x8, #0x767a000
0x06A639EC: 08a542f9  ldr x8, [x8, #0x548]
0x06A639F0: e1030091  mov x1, sp
0x06A639F4: e00313aa  mov x0, x19
0x06A639F8: 020140f9  ldr x2, [x8]
0x06A639FC: 82f04697  bl #0x3c1fc04
0x06A63A00: e003679e  fmov d0, xzr
0x06A63A04: 80000036  tbz w0, #0, #0x6a63a14
0x06A63A08: e0030091  mov x0, sp
0x06A63A0C: e1031faa  mov x1, xzr
0x06A63A10: a3e20094  bl #0x6a9c49c
0x06A63A14: f44f46a9  ldp x20, x19, [sp, #0x60]
0x06A63A18: fe2b40f9  ldr x30, [sp, #0x50]
0x06A63A1C: ffc30191  add sp, sp, #0x70
0x06A63A20: c0035fd6  ret
0x06A63A24: a2741c97  bl #0x3180cac

; RVA 0x6A63A28 | public void .ctor() { }
; bytes=8 sha256=93e35046007ceba17e15a62e9396fff6c249ba78bcef18d053aab94d6131b583 status=arm64_complete_bound indexed_start=True
0x06A63A28: e1031faa  mov x1, xzr
0x06A63A2C: f4dab117  b #0x56da5fc

