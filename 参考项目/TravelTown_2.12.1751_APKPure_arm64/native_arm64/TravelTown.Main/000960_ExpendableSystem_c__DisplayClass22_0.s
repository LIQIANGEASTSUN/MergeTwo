; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 960 .ExpendableSystem.<>c__DisplayClass22_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x678EB2C | public void .ctor() { }
; bytes=8 sha256=a1267468a50fb62419e38e774ede2f830891957e2853f3f25ba68fcdd47e1ec4 status=arm64_complete_bound indexed_start=True
0x0678EB2C: e1031faa  mov x1, xzr
0x0678EB30: b32ebd17  b #0x56da5fc

; RVA 0x679054C | internal bool <SpawnItems>b__1(WeightedItemSpawnable i) { }
; bytes=36 sha256=f347873c64a40bed4311868ce507c15ab782b34ec15828aeafe6a6134c82f915 status=arm64_complete_bound indexed_start=True
0x0679054C: fe0f1ff8  str x30, [sp, #-0x10]!
0x06790550: e10000b4  cbz x1, #0x679056c
0x06790554: 280c40f9  ldr x8, [x1, #0x18]
0x06790558: 010840f9  ldr x1, [x0, #0x10]
0x0679055C: e2031faa  mov x2, xzr
0x06790560: e00308aa  mov x0, x8
0x06790564: fe0741f8  ldr x30, [sp], #0x10
0x06790568: c268b517  b #0x54ea870
0x0679056C: d0c12797  bl #0x3180cac

