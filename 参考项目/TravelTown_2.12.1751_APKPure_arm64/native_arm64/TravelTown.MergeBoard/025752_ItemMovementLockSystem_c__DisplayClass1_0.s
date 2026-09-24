; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25752 .ItemMovementLockSystem.<>c__DisplayClass1_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6DD74 | public void .ctor() { }
; bytes=8 sha256=06806dcdb2664d5c2dd5272757a7a71b9cc51c246f6a6b9a5a6d0a7640e1c9c0 status=arm64_complete_bound indexed_start=True
0x06A6DD74: e1031faa  mov x1, xzr
0x06A6DD78: 21b2b117  b #0x56da5fc

; RVA 0x6A6DD84 | internal bool <Tick>b__0(ValueTuple<Entity, BoardTilePositionComponent> entity) { }
; bytes=36 sha256=e06229d0921f4f7be9718ff8318f6a37c9e841c560ab3ca467c89411e51d8750 status=arm64_complete_bound indexed_start=True
0x06A6DD84: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A6DD88: 080840f9  ldr x8, [x0, #0x10]
0x06A6DD8C: c80000b4  cbz x8, #0x6a6dda4
0x06A6DD90: 081140b9  ldr w8, [x8, #0x10]
0x06A6DD94: 1f01026b  cmp w8, w2
0x06A6DD98: e0179f1a  cset w0, eq
0x06A6DD9C: fe0741f8  ldr x30, [sp], #0x10
0x06A6DDA0: c0035fd6  ret
0x06A6DDA4: c24b1c97  bl #0x3180cac

; RVA 0x6A6DDA8 | internal bool <Tick>b__1(ValueTuple<Entity, BoardTilePositionComponent> entity) { }
; bytes=36 sha256=025ef38b0d3a7b78a4763bfa3abd8992d0ac4eef667dc6a61eb3e7e7d169ffb0 status=arm64_complete_bound indexed_start=True
0x06A6DDA8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A6DDAC: 080840f9  ldr x8, [x0, #0x10]
0x06A6DDB0: c80000b4  cbz x8, #0x6a6ddc8
0x06A6DDB4: 081540b9  ldr w8, [x8, #0x14]
0x06A6DDB8: 1f01026b  cmp w8, w2
0x06A6DDBC: e0179f1a  cset w0, eq
0x06A6DDC0: fe0741f8  ldr x30, [sp], #0x10
0x06A6DDC4: c0035fd6  ret
0x06A6DDC8: b94b1c97  bl #0x3180cac

; RVA 0x6A6DDCC | internal bool <Tick>b__2(IItemCombinerValidator validator) { }
; bytes=176 sha256=2f43907c597e56af1d5b6b1c1a6320ecd9ac38cbcf64222b142182e670876a61 status=arm64_complete_bound indexed_start=True
0x06A6DDCC: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x06A6DDD0: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A6DDD4: f59500b0  adrp x21, #0x7d2a000
0x06A6DDD8: a8665b39  ldrb w8, [x21, #0x6d9]
0x06A6DDDC: f30301aa  mov x19, x1
0x06A6DDE0: f40300aa  mov x20, x0
0x06A6DDE4: c8000037  tbnz w8, #0, #0x6a6ddfc
0x06A6DDE8: 006600d0  adrp x0, #0x772f000
0x06A6DDEC: 000842f9  ldr x0, [x0, #0x410]
0x06A6DDF0: 0a4b1c97  bl #0x3180a18
0x06A6DDF4: 28008052  movz w8, #0x1
0x06A6DDF8: a8661b39  strb w8, [x21, #0x6d9]
0x06A6DDFC: f30300b4  cbz x19, #0x6a6de78
0x06A6DE00: 0a6600d0  adrp x10, #0x772f000
0x06A6DE04: 680240f9  ldr x8, [x19]
0x06A6DE08: 4a0942f9  ldr x10, [x10, #0x410]
0x06A6DE0C: 950e40f9  ldr x21, [x20, #0x18]
0x06A6DE10: 941640f9  ldr x20, [x20, #0x28]
0x06A6DE14: 095d4279  ldrh w9, [x8, #0x12e]
0x06A6DE18: 410140f9  ldr x1, [x10]
0x06A6DE1C: 290100b4  cbz x9, #0x6a6de40
0x06A6DE20: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A6DE24: 4a210091  add x10, x10, #8
0x06A6DE28: 4b815ff8  ldur x11, [x10, #-8]
0x06A6DE2C: 7f0101eb  cmp x11, x1
0x06A6DE30: 00010054  b.eq #0x6a6de50
0x06A6DE34: 290500f1  subs x9, x9, #1
0x06A6DE38: 4a410091  add x10, x10, #0x10
0x06A6DE3C: 61ffff54  b.ne #0x6a6de28
0x06A6DE40: e00313aa  mov x0, x19
0x06A6DE44: e2031f2a  mov w2, wzr
0x06A6DE48: 32a31b97  bl #0x3156b10
0x06A6DE4C: 04000014  b #0x6a6de5c
0x06A6DE50: 490180b9  ldrsw x9, [x10]
0x06A6DE54: 0811098b  add x8, x8, x9, lsl #4
0x06A6DE58: 00e10491  add x0, x8, #0x138
0x06A6DE5C: 040c40a9  ldp x4, x3, [x0]
0x06A6DE60: e00313aa  mov x0, x19
0x06A6DE64: e20314aa  mov x2, x20
0x06A6DE68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A6DE6C: e10315aa  mov x1, x21
0x06A6DE70: fe57c2a8  ldp x30, x21, [sp], #0x20
0x06A6DE74: 80001fd6  br x4
0x06A6DE78: 8d4b1c97  bl #0x3180cac

