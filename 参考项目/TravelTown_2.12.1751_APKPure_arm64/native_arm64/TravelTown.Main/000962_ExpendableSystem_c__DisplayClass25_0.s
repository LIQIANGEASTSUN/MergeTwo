; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 962 .ExpendableSystem.<>c__DisplayClass25_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678F5B8 | public void .ctor() { }
; bytes=8 sha256=8ef1170e179dec101268936ca805755cfa04bd598d9ae2f5198372db0636008e status=arm64_complete_bound indexed_start=True
0x0678F5B8: e1031faa  mov x1, xzr
0x0678F5BC: 102cbd17  b #0x56da5fc

; RVA 0x679063C | internal bool <TryTransformItem>b__0(WeightedItemSpawnable i) { }
; bytes=36 sha256=103a8f71439d74a07ecde36c8b4ea7e4d6e08656846851f2228ba309d2d092e8 status=arm64_complete_bound indexed_start=True
0x0679063C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06790640: e10000b4  cbz x1, #0x679065c
0x06790644: 280c40f9  ldr x8, [x1, #0x18]
0x06790648: 010840f9  ldr x1, [x0, #0x10]
0x0679064C: e2031faa  mov x2, xzr
0x06790650: e00308aa  mov x0, x8
0x06790654: fe0741f8  ldr x30, [sp], #0x10
0x06790658: 8668b517  b #0x54ea870
0x0679065C: 94c12797  bl #0x3180cac

; RVA 0x6790660 | internal BoardItemPosition <TryTransformItem>b__1() { }
; bytes=28 sha256=0d0c15150160902b3d4c6bc145d06dbcf91ad88c78627018b59cbf8b5004e608 status=arm64_complete_bound indexed_start=True
0x06790660: fe0f1ff8  str x30, [sp, #-0x10]!
0x06790664: 080c40f9  ldr x8, [x0, #0x18]
0x06790668: 880000b4  cbz x8, #0x6790678
0x0679066C: 001940f9  ldr x0, [x8, #0x30]
0x06790670: fe0741f8  ldr x30, [sp], #0x10
0x06790674: c0035fd6  ret
0x06790678: 8dc12797  bl #0x3180cac

