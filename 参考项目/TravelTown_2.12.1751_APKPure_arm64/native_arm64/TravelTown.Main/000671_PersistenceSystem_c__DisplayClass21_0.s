; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 671 .PersistenceSystem.<>c__DisplayClass21_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x628CB04 | public void .ctor() { }
; bytes=8 sha256=c4eaea6549e59124c831fef52dde0317e6796859ef63660cd0d3169afcabc093 status=arm64_complete_bound indexed_start=True
0x0628CB04: e1031faa  mov x1, xzr
0x0628CB08: bd36d117  b #0x56da5fc

; RVA 0x628DFE8 | internal bool <DeserializeEntity>b__0(PersistentComponent persistentComp) { }
; bytes=36 sha256=24036f455c5a844d14a0ff7730f5aaad74c1fbaaf896a6124e3c19d1c696168c status=arm64_complete_bound indexed_start=True
0x0628DFE8: fe0f1ff8  str x30, [sp, #-0x10]!
0x0628DFEC: e10000b4  cbz x1, #0x628e008
0x0628DFF0: 281840f9  ldr x8, [x1, #0x30]
0x0628DFF4: 010840f9  ldr x1, [x0, #0x10]
0x0628DFF8: e2031faa  mov x2, xzr
0x0628DFFC: e00308aa  mov x0, x8
0x0628E000: fe0741f8  ldr x30, [sp], #0x10
0x0628E004: 1b72c917  b #0x54ea870
0x0628E008: 29cb3b97  bl #0x3180cac

