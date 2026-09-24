; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 440 MergeEngine.Model.RandomNumberModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6127470 | public Random get_Random() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06127470: 000840f9  ldr x0, [x0, #0x10]
0x06127474: c0035fd6  ret

; RVA 0x6127478 | public int NextInt() { }
; bytes=40 sha256=be5c7040d0a54fe5c637f7385a1bfeca38d3a54fec5ab58fdbde612ff5806738 status=arm64_complete_bound indexed_start=True
0x06127478: fe0f1ff8  str x30, [sp, #-0x10]!
0x0612747C: 000840f9  ldr x0, [x0, #0x10]
0x06127480: e00000b4  cbz x0, #0x612749c
0x06127484: 080040f9  ldr x8, [x0]
0x06127488: 0200b012  movn w2, #0x8000, lsl #16
0x0612748C: e1031f2a  mov w1, wzr
0x06127490: 048d59a9  ldp x4, x3, [x8, #0x198]
0x06127494: fe0741f8  ldr x30, [sp], #0x10
0x06127498: 80001fd6  br x4
0x0612749C: 04664197  bl #0x3180cac

; RVA 0x61274C0 | public void SetSeed(int seed) { }
; bytes=112 sha256=eeffef972a75f09157168a69ceb617449230a179e59ba8776e1c83c4a26249c5 status=arm64_complete_bound indexed_start=True
0x061274C0: fe0f1df8  str x30, [sp, #-0x30]!
0x061274C4: f65701a9  stp x22, x21, [sp, #0x10]
0x061274C8: f44f02a9  stp x20, x19, [sp, #0x20]
0x061274CC: f5df00b0  adrp x21, #0x7d24000
0x061274D0: 76a90090  adrp x22, #0x7653000
0x061274D4: a88e5239  ldrb w8, [x21, #0x4a3]
0x061274D8: d6da42f9  ldr x22, [x22, #0x5b0]
0x061274DC: f403012a  mov w20, w1
0x061274E0: f30300aa  mov x19, x0
0x061274E4: c8000037  tbnz w8, #0, #0x61274fc
0x061274E8: 60a90090  adrp x0, #0x7653000
0x061274EC: 00d842f9  ldr x0, [x0, #0x5b0]
0x061274F0: 4a654197  bl #0x3180a18
0x061274F4: 28008052  movz w8, #0x1
0x061274F8: a88e1239  strb w8, [x21, #0x4a3]
0x061274FC: c00240f9  ldr x0, [x22]
0x06127500: e8654197  bl #0x3180ca0
0x06127504: e103142a  mov w1, w20
0x06127508: e2031faa  mov x2, xzr
0x0612750C: f50300aa  mov x21, x0
0x06127510: 62ffd597  bl #0x56a7298
0x06127514: 750e01f8  str x21, [x19, #0x10]!
0x06127518: e00313aa  mov x0, x19
0x0612751C: e10315aa  mov x1, x21
0x06127520: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06127524: f65741a9  ldp x22, x21, [sp, #0x10]
0x06127528: fe0743f8  ldr x30, [sp], #0x30
0x0612752C: 26654117  b #0x31809c4

; RVA 0x61274A0 | public int Range(int min, int max) { }
; bytes=32 sha256=78899a4d8e1d5effe711fe914405dcd1ec7b3e6f498823b8061224cc508dd0bc status=arm64_complete_bound indexed_start=True
0x061274A0: fe0f1ff8  str x30, [sp, #-0x10]!
0x061274A4: 000840f9  ldr x0, [x0, #0x10]
0x061274A8: a00000b4  cbz x0, #0x61274bc
0x061274AC: 080040f9  ldr x8, [x0]
0x061274B0: 048d59a9  ldp x4, x3, [x8, #0x198]
0x061274B4: fe0741f8  ldr x30, [sp], #0x10
0x061274B8: 80001fd6  br x4
0x061274BC: fc654197  bl #0x3180cac

; RVA 0x6127530 | public int Range(int max) { }
; bytes=32 sha256=5228d54c19d4908a92bbeffc8ee1d319afa0c054a19fba85a5bd03952ad77695 status=arm64_complete_bound indexed_start=True
0x06127530: fe0f1ff8  str x30, [sp, #-0x10]!
0x06127534: 000840f9  ldr x0, [x0, #0x10]
0x06127538: a00000b4  cbz x0, #0x612754c
0x0612753C: 080040f9  ldr x8, [x0]
0x06127540: 03895aa9  ldp x3, x2, [x8, #0x1a8]
0x06127544: fe0741f8  ldr x30, [sp], #0x10
0x06127548: 60001fd6  br x3
0x0612754C: d8654197  bl #0x3180cac

; RVA 0x6127550 | public double NextDouble() { }
; bytes=32 sha256=9b1d90f2f571b46a0f45a36fe3d9f5542fcffecaf1440b067f60afcba14e2766 status=arm64_complete_bound indexed_start=True
0x06127550: fe0f1ff8  str x30, [sp, #-0x10]!
0x06127554: 000840f9  ldr x0, [x0, #0x10]
0x06127558: a00000b4  cbz x0, #0x612756c
0x0612755C: 080040f9  ldr x8, [x0]
0x06127560: 02855ba9  ldp x2, x1, [x8, #0x1b8]
0x06127564: fe0741f8  ldr x30, [sp], #0x10
0x06127568: 40001fd6  br x2
0x0612756C: d0654197  bl #0x3180cac

; RVA 0x6127570 | private void Zenject.IInitializable.Initialize() { }
; bytes=124 sha256=1ab971d121ec889f49bbfb0f955a3bc91806a8e9e8b192c64aa701f5b3a7ed6c status=arm64_complete_bound indexed_start=True
0x06127570: ffc300d1  sub sp, sp, #0x30
0x06127574: fe5701a9  stp x30, x21, [sp, #0x10]
0x06127578: f44f02a9  stp x20, x19, [sp, #0x20]
0x0612757C: f4df00b0  adrp x20, #0x7d24000
0x06127580: 35a900f0  adrp x21, #0x764e000
0x06127584: 88925239  ldrb w8, [x20, #0x4a4]
0x06127588: b52a43f9  ldr x21, [x21, #0x650]
0x0612758C: f30300aa  mov x19, x0
0x06127590: c8000037  tbnz w8, #0, #0x61275a8
0x06127594: 20a900f0  adrp x0, #0x764e000
0x06127598: 002843f9  ldr x0, [x0, #0x650]
0x0612759C: 1f654197  bl #0x3180a18
0x061275A0: 28008052  movz w8, #0x1
0x061275A4: 88921239  strb w8, [x20, #0x4a4]
0x061275A8: a00240f9  ldr x0, [x21]
0x061275AC: 08e040b9  ldr w8, [x0, #0xe0]
0x061275B0: 48000035  cbnz w8, #0x61275b8
0x061275B4: 76654197  bl #0x3180b8c
0x061275B8: e0031faa  mov x0, xzr
0x061275BC: e23cd597  bl #0x5676944
0x061275C0: e00700f9  str x0, [sp, #8]
0x061275C4: e0230091  add x0, sp, #8
0x061275C8: e1031faa  mov x1, xzr
0x061275CC: fe34d597  bl #0x56749c4
0x061275D0: 013c0012  and w1, w0, #0xffff
0x061275D4: e00313aa  mov x0, x19
0x061275D8: baffff97  bl #0x61274c0
0x061275DC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x061275E0: fe5741a9  ldp x30, x21, [sp, #0x10]
0x061275E4: ffc30091  add sp, sp, #0x30
0x061275E8: c0035fd6  ret

; RVA 0x61275EC | public void .ctor() { }
; bytes=8 sha256=e59bccd5170355d5a7d8bbd7002ae47917f5d657a96b442fbba0e60eacceba4e status=arm64_complete_bound indexed_start=True
0x061275EC: e1031faa  mov x1, xzr
0x061275F0: 03ccd617  b #0x56da5fc

