; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 553 MergeEngine.Model.Configuration.LocalMergeItemsConfigurationModel
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x613C1E0 | protected override void HandleDataLoaded(LocalMergeItemsConfig config) { }
; bytes=8 sha256=a2064d6a7a6702d8a27657b94800ca19f0d2eeeb2bf0e096e24157001dfb57d4 status=arm64_complete_bound indexed_start=True
0x0613C1E0: 018c02f8  str x1, [x0, #0x28]!
0x0613C1E4: f8114117  b #0x31809c4

; RVA 0x613C1E8 | public bool IsLocalItem(string itemName) { }
; bytes=156 sha256=6ebc594020f800542213e1d3dfc1058819b339099310289f8b42c7018980adb6 status=arm64_complete_bound indexed_start=True
0x0613C1E8: fe0f1df8  str x30, [sp, #-0x30]!
0x0613C1EC: f65701a9  stp x22, x21, [sp, #0x10]
0x0613C1F0: f44f02a9  stp x20, x19, [sp, #0x20]
0x0613C1F4: 56df0090  adrp x22, #0x7d24000
0x0613C1F8: 95a800d0  adrp x21, #0x764e000
0x0613C1FC: c86a5639  ldrb w8, [x22, #0x59a]
0x0613C200: b57242f9  ldr x21, [x21, #0x4e0]
0x0613C204: f30301aa  mov x19, x1
0x0613C208: f40300aa  mov x20, x0
0x0613C20C: c8000037  tbnz w8, #0, #0x613c224
0x0613C210: 80a800d0  adrp x0, #0x764e000
0x0613C214: 007042f9  ldr x0, [x0, #0x4e0]
0x0613C218: 00124197  bl #0x3180a18
0x0613C21C: 28008052  movz w8, #0x1
0x0613C220: c86a1639  strb w8, [x22, #0x59a]
0x0613C224: a00240f9  ldr x0, [x21]
0x0613C228: 951640f9  ldr x21, [x20, #0x28]
0x0613C22C: 08e040b9  ldr w8, [x0, #0xe0]
0x0613C230: 48000035  cbnz w8, #0x613c238
0x0613C234: 56124197  bl #0x3180b8c
0x0613C238: e00315aa  mov x0, x21
0x0613C23C: e1031faa  mov x1, xzr
0x0613C240: e2031faa  mov x2, xzr
0x0613C244: 4c8a3694  bl #0x6edeb74
0x0613C248: 20010036  tbz w0, #0, #0x613c26c
0x0613C24C: 801640f9  ldr x0, [x20, #0x28]
0x0613C250: 800100b4  cbz x0, #0x613c280
0x0613C254: e10313aa  mov x1, x19
0x0613C258: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613C25C: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613C260: e2031faa  mov x2, xzr
0x0613C264: fe0743f8  ldr x30, [sp], #0x30
0x0613C268: 395b1f14  b #0x6912f4c
0x0613C26C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0613C270: f65741a9  ldp x22, x21, [sp, #0x10]
0x0613C274: e0031f2a  mov w0, wzr
0x0613C278: fe0743f8  ldr x30, [sp], #0x30
0x0613C27C: c0035fd6  ret
0x0613C280: 8b124197  bl #0x3180cac

; RVA 0x613C284 | public ReadOnlyCollection<string> GetLocalItemNames() { }
; bytes=28 sha256=cca694b5aa44420c763eda35af2ef62280387d3e581d3680201c73a6785570f0 status=arm64_complete_bound indexed_start=True
0x0613C284: fe0f1ff8  str x30, [sp, #-0x10]!
0x0613C288: 001440f9  ldr x0, [x0, #0x28]
0x0613C28C: 800000b4  cbz x0, #0x613c29c
0x0613C290: e1031faa  mov x1, xzr
0x0613C294: fe0741f8  ldr x30, [sp], #0x10
0x0613C298: 445b1f14  b #0x6912fa8
0x0613C29C: 84124197  bl #0x3180cac

; RVA 0x613C2A0 | public void .ctor() { }
; bytes=72 sha256=7fbf7568ce11a72815c7acac3e9e0764990cf5778be5457c39a0a0a51fefdf04 status=arm64_complete_bound indexed_start=True
0x0613C2A0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0613C2A4: f44f01a9  stp x20, x19, [sp, #0x10]
0x0613C2A8: 54df0090  adrp x20, #0x7d24000
0x0613C2AC: f5ac00f0  adrp x21, #0x76db000
0x0613C2B0: 886e5639  ldrb w8, [x20, #0x59b]
0x0613C2B4: b5da40f9  ldr x21, [x21, #0x1b0]
0x0613C2B8: f30300aa  mov x19, x0
0x0613C2BC: c8000037  tbnz w8, #0, #0x613c2d4
0x0613C2C0: e0ac00f0  adrp x0, #0x76db000
0x0613C2C4: 00d840f9  ldr x0, [x0, #0x1b0]
0x0613C2C8: d4114197  bl #0x3180a18
0x0613C2CC: 28008052  movz w8, #0x1
0x0613C2D0: 886e1639  strb w8, [x20, #0x59b]
0x0613C2D4: a10240f9  ldr x1, [x21]
0x0613C2D8: e00313aa  mov x0, x19
0x0613C2DC: f44f41a9  ldp x20, x19, [sp, #0x10]
0x0613C2E0: fe57c2a8  ldp x30, x21, [sp], #0x20
0x0613C2E4: f655b117  b #0x4d91abc

