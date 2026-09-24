; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7468 .BucketBubbleDropProbabilityModifier.<>c__DisplayClass14_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x657F8DC | public void .ctor() { }
; bytes=8 sha256=a5ead2d9da8b8bf1a29bd77ca8b5983855f9e1ebb32b804ccb0659d0c63e9410 status=arm64_complete_bound indexed_start=True
0x0657F8DC: e1031faa  mov x1, xzr
0x0657F8E0: 476bc517  b #0x56da5fc

; RVA 0x657FBA0 | internal bool <UpdateBuckets>b__0(BubbleData bubble) { }
; bytes=64 sha256=942054d95fe3d85166381a200e63c429f7312b48c88eb2711285591c54b92d11 status=arm64_complete_bound indexed_start=True
0x0657FBA0: fe0f1ff8  str x30, [sp, #-0x10]!
0x0657FBA4: c10100b4  cbz x1, #0x657fbdc
0x0657FBA8: 080840f9  ldr x8, [x0, #0x10]
0x0657FBAC: 880100b4  cbz x8, #0x657fbdc
0x0657FBB0: 291040b9  ldr w9, [x1, #0x10]
0x0657FBB4: 0a1140b9  ldr w10, [x8, #0x10]
0x0657FBB8: 5f01096b  cmp w10, w9
0x0657FBBC: 6d000054  b.le #0x657fbc8
0x0657FBC0: e0031f2a  mov w0, wzr
0x0657FBC4: 04000014  b #0x657fbd4
0x0657FBC8: 081540b9  ldr w8, [x8, #0x14]
0x0657FBCC: 1f01096b  cmp w8, w9
0x0657FBD0: e0b79f1a  cset w0, ge
0x0657FBD4: fe0741f8  ldr x30, [sp], #0x10
0x0657FBD8: c0035fd6  ret
0x0657FBDC: 34043097  bl #0x3180cac

