; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 898 .BoardItemConsumerSystem.<>c__DisplayClass11_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6660E78 | public void .ctor() { }
; bytes=8 sha256=7bb244ba9895d114aa56585424983e279913b6a43c75d0e48769bcc2a31515f6 status=arm64_complete_bound indexed_start=True
0x06660E78: e1031faa  mov x1, xzr
0x06660E7C: e0e5c117  b #0x56da5fc

; RVA 0x66618E8 | internal void <ConsumeItem>b__0() { }
; bytes=52 sha256=4ff3e436272564b0f79b5b4f1c6700b6b2fb09c8c30a79cd07d3f0f1a6941e70 status=arm64_complete_bound indexed_start=True
0x066618E8: fe0f1ff8  str x30, [sp, #-0x10]!
0x066618EC: 080840f9  ldr x8, [x0, #0x10]
0x066618F0: 480100b4  cbz x8, #0x6661918
0x066618F4: 080d40f9  ldr x8, [x8, #0x18]
0x066618F8: c80000b4  cbz x8, #0x6661910
0x066618FC: 020d40f9  ldr x2, [x8, #0x18]
0x06661900: 002140f9  ldr x0, [x8, #0x40]
0x06661904: 011540f9  ldr x1, [x8, #0x28]
0x06661908: fe0741f8  ldr x30, [sp], #0x10
0x0666190C: 40001fd6  br x2
0x06661910: fe0741f8  ldr x30, [sp], #0x10
0x06661914: c0035fd6  ret
0x06661918: e57c2c97  bl #0x3180cac

