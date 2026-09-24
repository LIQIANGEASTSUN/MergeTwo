; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 25750 .ItemDiscoverySystem.<>c__DisplayClass8_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A6D654 | public void .ctor() { }
; bytes=8 sha256=e574aa2abd2abbe2c96dbb7fcffbdac99c096851efb5c1b635d9215051535d0f status=arm64_complete_bound indexed_start=True
0x06A6D654: e1031faa  mov x1, xzr
0x06A6D658: e9b3b117  b #0x56da5fc

; RVA 0x6A6D94C | internal void <OnItemSpawnerDiscovered>b__0(IMergeItem item) { }
; bytes=64 sha256=e8c4aa4987b118c3716315cd8a76c9b14d39c1122b345304a5df2d0c3e1d22d1 status=arm64_complete_bound indexed_start=True
0x06A6D94C: ff4301d1  sub sp, sp, #0x50
0x06A6D950: fe2300f9  str x30, [sp, #0x40]
0x06A6D954: e80300aa  mov x8, x0
0x06A6D958: 000840f9  ldr x0, [x0, #0x10]
0x06A6D95C: 0081c23c  ldur q0, [x8, #0x28]
0x06A6D960: 0181c13c  ldur q1, [x8, #0x18]
0x06A6D964: e10301ad  stp q1, q0, [sp, #0x20]
0x06A6D968: 000100b4  cbz x0, #0x6a6d988
0x06A6D96C: e00741ad  ldp q0, q1, [sp, #0x20]
0x06A6D970: e2030091  mov x2, sp
0x06A6D974: e00700ad  stp q0, q1, [sp]
0x06A6D978: 6afeff97  bl #0x6a6d320
0x06A6D97C: fe2340f9  ldr x30, [sp, #0x40]
0x06A6D980: ff430191  add sp, sp, #0x50
0x06A6D984: c0035fd6  ret
0x06A6D988: c94c1c97  bl #0x3180cac

