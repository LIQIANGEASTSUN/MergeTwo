; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 11086 Framework.Core.Services.Backend.Data.Payload.TimerItemData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6930F44 | public bool get_ShouldIgnore() { }
; bytes=8 sha256=6770a96f4998ce8df43beb8e497cf1a56ff280479bbf45eeb6d10b8b1fe08600 status=arm64_complete_bound indexed_start=True
0x06930F44: 00e04039  ldrb w0, [x0, #0x38]
0x06930F48: c0035fd6  ret

; RVA 0x6930F4C | public void set_ShouldIgnore(bool value) { }
; bytes=12 sha256=ad4db97ee2c8b47615142569a0603a73f36cb9cd1a44e165cf1c86be0bdb34a9 status=arm64_complete_bound indexed_start=True
0x06930F4C: 28000012  and w8, w1, #1
0x06930F50: 08e00039  strb w8, [x0, #0x38]
0x06930F54: c0035fd6  ret

; RVA 0x6930F58 | public void .ctor() { }
; bytes=8 sha256=ca789b2487156083a82c77f498bd7d5c2e0ec515dc9ffc568bc2aa56a11b1a91 status=arm64_complete_bound indexed_start=True
0x06930F58: e1031faa  mov x1, xzr
0x06930F5C: a8a5b617  b #0x56da5fc

