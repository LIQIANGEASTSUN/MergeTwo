; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 975 .ToolsRequiredByBuildingsHelper.BuildingUpgradeToBoostData
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6798A70 | public int CompareTo(ToolsRequiredByBuildingsHelper.BuildingUpgradeToBoostData other) { }
; bytes=64 sha256=297fbfcbf8f3e805439a7f33e67dc180d0ac644120fa8efe0f99ea39b8b10498 status=arm64_complete_bound indexed_start=True
0x06798A70: fe0f1ff8  str x30, [sp, #-0x10]!
0x06798A74: c10100b4  cbz x1, #0x6798aac
0x06798A78: 08600091  add x8, x0, #0x18
0x06798A7C: 0a0140b9  ldr w10, [x8]
0x06798A80: 291840b9  ldr w9, [x1, #0x18]
0x06798A84: 5f01096b  cmp w10, w9
0x06798A88: 81000054  b.ne #0x6798a98
0x06798A8C: 211c40b9  ldr w1, [x1, #0x1c]
0x06798A90: 00700091  add x0, x0, #0x1c
0x06798A94: 03000014  b #0x6798aa0
0x06798A98: e00308aa  mov x0, x8
0x06798A9C: e103092a  mov w1, w9
0x06798AA0: e2031faa  mov x2, xzr
0x06798AA4: fe0741f8  ldr x30, [sp], #0x10
0x06798AA8: feebbb17  b #0x5693aa0
0x06798AAC: 80a02797  bl #0x3180cac

; RVA 0x67986E8 | public void .ctor() { }
; bytes=8 sha256=ea5a877ce636ac91ffd3ac5d32cb88b3def1b7eb8219ffeb9466b27dcb38b87d status=arm64_complete_bound indexed_start=True
0x067986E8: e1031faa  mov x1, xzr
0x067986EC: c407bd17  b #0x56da5fc

