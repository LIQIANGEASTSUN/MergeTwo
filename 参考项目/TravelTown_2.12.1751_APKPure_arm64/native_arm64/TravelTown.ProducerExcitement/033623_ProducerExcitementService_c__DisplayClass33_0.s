; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33623 .ProducerExcitementService.<>c__DisplayClass33_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6AD85A0 | public void .ctor() { }
; bytes=8 sha256=5f4a2663ff7110e3f1833f4882b2e118d8365dc1ddb2b9d8ef830c566b7b7cf3 status=arm64_complete_bound indexed_start=True
0x06AD85A0: e1031faa  mov x1, xzr
0x06AD85A4: 1608b017  b #0x56da5fc

; RVA 0x6AD89F8 | internal void <RegisterCycleEndTimer>b__0(string _) { }
; bytes=32 sha256=5e686897ebcf5fff9bf59f337b058731c5a2ee7f91ef341ef6cfc1efc8ad2146 status=arm64_complete_bound indexed_start=True
0x06AD89F8: fe0f1ff8  str x30, [sp, #-0x10]!
0x06AD89FC: 080840f9  ldr x8, [x0, #0x10]
0x06AD8A00: a80000b4  cbz x8, #0x6ad8a14
0x06AD8A04: 010c40f9  ldr x1, [x0, #0x18]
0x06AD8A08: e00308aa  mov x0, x8
0x06AD8A0C: fe0741f8  ldr x30, [sp], #0x10
0x06AD8A10: e6feff17  b #0x6ad85a8
0x06AD8A14: a6a01a97  bl #0x3180cac

