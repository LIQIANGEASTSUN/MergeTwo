; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33300 .BoardQueueModel.<>c__DisplayClass28_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A594A4 | public void .ctor() { }
; bytes=8 sha256=da65575ca7981610b2a7132e29d1eb07c1d348cf2b4e1900289c37e921d79cae status=arm64_complete_bound indexed_start=True
0x06A594A4: e1031faa  mov x1, xzr
0x06A594A8: 5504b217  b #0x56da5fc

; RVA 0x6A59AF0 | internal bool <SyncPendingEnqueuedItem>b__0(QueuedItem pendingItem) { }
; bytes=36 sha256=33b7b4d3ff4f3b39acd15d423a79c273541f2d7ea822e0990a5717e5a51dce7e status=arm64_complete_bound indexed_start=True
0x06A59AF0: fe0f1ff8  str x30, [sp, #-0x10]!
0x06A59AF4: e10000b4  cbz x1, #0x6a59b10
0x06A59AF8: 281040f9  ldr x8, [x1, #0x20]
0x06A59AFC: 010840f9  ldr x1, [x0, #0x10]
0x06A59B00: e2031faa  mov x2, xzr
0x06A59B04: e00308aa  mov x0, x8
0x06A59B08: fe0741f8  ldr x30, [sp], #0x10
0x06A59B0C: 5943aa17  b #0x54ea870
0x06A59B10: 679c1c97  bl #0x3180cac

