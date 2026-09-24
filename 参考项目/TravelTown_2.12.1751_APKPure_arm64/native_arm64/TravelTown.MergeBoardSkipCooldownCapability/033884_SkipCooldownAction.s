; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33884 Merger.MergeBoardSkipCooldownCapability.Data.TickInputActions.SkipCooldownAction
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6A64374 | public ResourceMultiple get_Price() { }
; bytes=8 sha256=dfb556a413c8bda5332942d0202e8d5f1e52f45158aec3676294cf11ad5909cb status=arm64_complete_bound indexed_start=True
0x06A64374: 000840f9  ldr x0, [x0, #0x10]
0x06A64378: c0035fd6  ret

; RVA 0x6A6437C | public void set_Price(ResourceMultiple value) { }
; bytes=8 sha256=deafec6b98f6b55857a28564d768a2328fd4cc43d5be76c4e6265a6f16228d74 status=arm64_complete_bound indexed_start=True
0x06A6437C: 010c01f8  str x1, [x0, #0x10]!
0x06A64380: 91711c17  b #0x31809c4

; RVA 0x6A64384 | public int get_SelectedEntityPosition() { }
; bytes=8 sha256=50abf56e70bf4ffd353b0c6ed3c4e4880c6169bcd84263b80a4680f2ca7fb9ab status=arm64_complete_bound indexed_start=True
0x06A64384: 001840b9  ldr w0, [x0, #0x18]
0x06A64388: c0035fd6  ret

; RVA 0x6A6438C | public void set_SelectedEntityPosition(int value) { }
; bytes=8 sha256=6e9ff5dd14743d62b4c65ceed8cc7444a06b1f6a6df852c7ffa011f059b9080f status=arm64_complete_bound indexed_start=True
0x06A6438C: 011800b9  str w1, [x0, #0x18]
0x06A64390: c0035fd6  ret

; RVA 0x6A62680 | public void .ctor() { }
; bytes=8 sha256=bb96cf571d78ed78e89aabdfe4fb126de7ee433adc90d898465bbfaea3850670 status=arm64_complete_bound indexed_start=True
0x06A62680: e1031faa  mov x1, xzr
0x06A62684: dedfb117  b #0x56da5fc

