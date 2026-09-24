; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25816 Merger.MergeBoard.Models.ViewportMergeBoardModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A7E1B0 | public IEntitiesHolder get_BoardState() { }
; bytes=8 sha256=6b819324b4a3bc2d390c83c7fe02ea41a1f57ae5d4f2a9b0c9256341a5b8d37f status=arm64_complete_bound indexed_start=True
0x06A7E1B0: 001840f9  ldr x0, [x0, #0x30]
0x06A7E1B4: c0035fd6  ret

; RVA 0x6A7E1B8 | public IEnumerable<Entity> get_Entities() { }
; bytes=160 sha256=9435c09bd9e39331f3b599bce2eb6b754b6ddbe44c8e8ad243a96e3f30419240 status=arm64_complete_bound indexed_start=True
0x06A7E1B8: fe0f1ef8  str x30, [sp, #-0x20]!
0x06A7E1BC: f44f01a9  stp x20, x19, [sp, #0x10]
0x06A7E1C0: 74950090  adrp x20, #0x7d2a000
0x06A7E1C4: 883e5d39  ldrb w8, [x20, #0x74f]
0x06A7E1C8: f30300aa  mov x19, x0
0x06A7E1CC: c8000037  tbnz w8, #0, #0x6a7e1e4
0x06A7E1D0: 006200d0  adrp x0, #0x76c0000
0x06A7E1D4: 00ac44f9  ldr x0, [x0, #0x958]
0x06A7E1D8: 100a1c97  bl #0x3180a18
0x06A7E1DC: 28008052  movz w8, #0x1
0x06A7E1E0: 883e1d39  strb w8, [x20, #0x74f]
0x06A7E1E4: 731a40f9  ldr x19, [x19, #0x30]
0x06A7E1E8: 730300b4  cbz x19, #0x6a7e254
0x06A7E1EC: 0a6200d0  adrp x10, #0x76c0000
0x06A7E1F0: 680240f9  ldr x8, [x19]
0x06A7E1F4: 4aad44f9  ldr x10, [x10, #0x958]
0x06A7E1F8: 095d4279  ldrh w9, [x8, #0x12e]
0x06A7E1FC: 410140f9  ldr x1, [x10]
0x06A7E200: 290100b4  cbz x9, #0x6a7e224
0x06A7E204: 0a5940f9  ldr x10, [x8, #0xb0]
0x06A7E208: 4a210091  add x10, x10, #8
0x06A7E20C: 4b815ff8  ldur x11, [x10, #-8]
0x06A7E210: 7f0101eb  cmp x11, x1
0x06A7E214: 00010054  b.eq #0x6a7e234
0x06A7E218: 290500f1  subs x9, x9, #1
0x06A7E21C: 4a410091  add x10, x10, #0x10
0x06A7E220: 61ffff54  b.ne #0x6a7e20c
0x06A7E224: e00313aa  mov x0, x19
0x06A7E228: e2031f2a  mov w2, wzr
0x06A7E22C: 39621b97  bl #0x3156b10
0x06A7E230: 04000014  b #0x6a7e240
0x06A7E234: 490180b9  ldrsw x9, [x10]
0x06A7E238: 0811098b  add x8, x8, x9, lsl #4
0x06A7E23C: 00e10491  add x0, x8, #0x138
0x06A7E240: 020440a9  ldp x2, x1, [x0]
0x06A7E244: e00313aa  mov x0, x19
0x06A7E248: f44f41a9  ldp x20, x19, [sp, #0x10]
0x06A7E24C: fe0742f8  ldr x30, [sp], #0x20
0x06A7E250: 40001fd6  br x2
0x06A7E254: 960a1c97  bl #0x3180cac

; RVA 0x6A7E258 | public bool get_IsInitialized() { }
; bytes=28 sha256=3df7684fcbba7dbb3646cd432cd141bb7ca278b8bc3092bf5995b05254681fdd status=arm64_complete_bound indexed_start=True
0x06A7E258: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A7E25C: 081440f9  ldr x8, [x0, #0x28]
0x06A7E260: 880000b4  cbz x8, #0x6a7e270
0x06A7E264: 00614039  ldrb w0, [x8, #0x18]
0x06A7E268: fe0741f8  ldr x30, [sp], #0x10
0x06A7E26C: c0035fd6  ret
0x06A7E270: 8f0a1c97  bl #0x3180cac

; RVA 0x6A7E274 | public void set_IsInitialized(bool value) { }
; bytes=32 sha256=0db496ad54bf26f2a22f7dd8edb6b57bea1cbd9bf224f2cef164df8599635052 status=arm64_complete_bound indexed_start=True
0x06A7E274: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A7E278: 081440f9  ldr x8, [x0, #0x28]
0x06A7E27C: a80000b4  cbz x8, #0x6a7e290
0x06A7E280: 29000012  and w9, w1, #1
0x06A7E284: 09610039  strb w9, [x8, #0x18]
0x06A7E288: fe0741f8  ldr x30, [sp], #0x10
0x06A7E28C: c0035fd6  ret
0x06A7E290: 870a1c97  bl #0x3180cac

; RVA 0x6A7E294 | public long get_LastBoardTimeSyncTimestamp() { }
; bytes=28 sha256=3e51331eec37ee26a67757d7bc24588e350352d6005e691af215bd200808222e status=arm64_complete_bound indexed_start=True
0x06A7E294: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A7E298: 081440f9  ldr x8, [x0, #0x28]
0x06A7E29C: 880000b4  cbz x8, #0x6a7e2ac
0x06A7E2A0: 001140f9  ldr x0, [x8, #0x20]
0x06A7E2A4: fe0741f8  ldr x30, [sp], #0x10
0x06A7E2A8: c0035fd6  ret
0x06A7E2AC: 800a1c97  bl #0x3180cac

; RVA 0x6A7E2B0 | public void set_LastBoardTimeSyncTimestamp(long value) { }
; bytes=28 sha256=2b25b0b316301fb242476a099dad15e6e266a35a4e9313532e2925f19fde944b status=arm64_complete_bound indexed_start=True
0x06A7E2B0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A7E2B4: 081440f9  ldr x8, [x0, #0x28]
0x06A7E2B8: 880000b4  cbz x8, #0x6a7e2c8
0x06A7E2BC: 011100f9  str x1, [x8, #0x20]
0x06A7E2C0: fe0741f8  ldr x30, [sp], #0x10
0x06A7E2C4: c0035fd6  ret
0x06A7E2C8: 790a1c97  bl #0x3180cac

; RVA 0x6A7E2CC | public void .ctor(MergeBoardModel outerModel, IActiveTilesModel activeTilesModel) { }
; bytes=160 sha256=634c4bef0cf7b138d978ed76f73d0832e29eb7e68ef4845ff04721cc9bfacf60 status=arm64_complete_bound indexed_start=True
0x06A7E2CC: fe0f1df8  str x30, [sp, #-0x30]!
0x06A7E2D0: f65701a9  stp x22, x21, [sp, #0x10]
0x06A7E2D4: f44f02a9  stp x20, x19, [sp, #0x20]
0x06A7E2D8: 76950090  adrp x22, #0x7d2a000
0x06A7E2DC: c8425d39  ldrb w8, [x22, #0x750]
0x06A7E2E0: f40302aa  mov x20, x2
0x06A7E2E4: f50301aa  mov x21, x1
0x06A7E2E8: f30300aa  mov x19, x0
0x06A7E2EC: c8000037  tbnz w8, #0, #0x6a7e304
0x06A7E2F0: 806500f0  adrp x0, #0x7731000
0x06A7E2F4: 001045f9  ldr x0, [x0, #0xa20]
0x06A7E2F8: c8091c97  bl #0x3180a18
0x06A7E2FC: 28008052  movz w8, #0x1
0x06A7E300: c8421d39  strb w8, [x22, #0x750]
0x06A7E304: e00313aa  mov x0, x19
0x06A7E308: e1031faa  mov x1, xzr
0x06A7E30C: 1337fb97  bl #0x694bf58
0x06A7E310: e00313aa  mov x0, x19
0x06A7E314: 158c02f8  str x21, [x0, #0x28]!
0x06A7E318: e10315aa  mov x1, x21
0x06A7E31C: aa091c97  bl #0x31809c4
0x06A7E320: 550200b4  cbz x21, #0x6a7e368
0x06A7E324: 886500f0  adrp x8, #0x7731000
0x06A7E328: 081145f9  ldr x8, [x8, #0xa20]
0x06A7E32C: b50a40f9  ldr x21, [x21, #0x10]
0x06A7E330: 000140f9  ldr x0, [x8]
0x06A7E334: 5b0a1c97  bl #0x3180ca0
0x06A7E338: e10315aa  mov x1, x21
0x06A7E33C: e20314aa  mov x2, x20
0x06A7E340: e3031faa  mov x3, xzr
0x06A7E344: f60300aa  mov x22, x0
0x06A7E348: f1530094  bl #0x6a9330c
0x06A7E34C: 760e03f8  str x22, [x19, #0x30]!
0x06A7E350: e00313aa  mov x0, x19
0x06A7E354: e10316aa  mov x1, x22
0x06A7E358: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06A7E35C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06A7E360: fe0743f8  ldr x30, [sp], #0x30
0x06A7E364: 98091c17  b #0x31809c4
0x06A7E368: 510a1c97  bl #0x3180cac

; RVA 0x6A7E36C | protected override void DisposeModel() { }
; bytes=28 sha256=6016b1f488be87662800bccc6f1309f747b69088f26a9a1e7997efccff5e53fc status=arm64_complete_bound indexed_start=True
0x06A7E36C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A7E370: 001840f9  ldr x0, [x0, #0x30]
0x06A7E374: 800000b4  cbz x0, #0x6a7e384
0x06A7E378: e1031faa  mov x1, xzr
0x06A7E37C: fe0741f8  ldr x30, [sp], #0x10
0x06A7E380: fb540014  b #0x6a9376c
0x06A7E384: 4a0a1c97  bl #0x3180cac

