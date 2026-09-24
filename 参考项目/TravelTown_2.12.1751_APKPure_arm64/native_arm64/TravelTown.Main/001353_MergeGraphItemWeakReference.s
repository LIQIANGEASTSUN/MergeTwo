; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1353 MergeEngine.Configuration.Definitions.WeakReferences.References.MergeGraphItemWeakReference
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x6004920 | public void .ctor(string uniqueId) { }
; bytes=88 sha256=64af3316e4f2e660c0a61d74b65c9998f16317839b145065c9f1a3868c2310e0 status=arm64_complete_bound indexed_start=True
0x06004920: fe0f1df8  str x30, [sp, #-0x30]!
0x06004924: f65701a9  stp x22, x21, [sp, #0x10]
0x06004928: f44f02a9  stp x20, x19, [sp, #0x20]
0x0600492C: f5e800f0  adrp x21, #0x7d23000
0x06004930: 56b600d0  adrp x22, #0x76ce000
0x06004934: a8ca5c39  ldrb w8, [x21, #0x732]
0x06004938: d6aa46f9  ldr x22, [x22, #0xd50]
0x0600493C: f30301aa  mov x19, x1
0x06004940: f40300aa  mov x20, x0
0x06004944: c8000037  tbnz w8, #0, #0x600495c
0x06004948: 40b600d0  adrp x0, #0x76ce000
0x0600494C: 00a846f9  ldr x0, [x0, #0xd50]
0x06004950: 32f04597  bl #0x3180a18
0x06004954: 28008052  movz w8, #0x1
0x06004958: a8ca1c39  strb w8, [x21, #0x732]
0x0600495C: c20240f9  ldr x2, [x22]
0x06004960: e00314aa  mov x0, x20
0x06004964: e10313aa  mov x1, x19
0x06004968: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0600496C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06004970: fe0743f8  ldr x30, [sp], #0x30
0x06004974: f3f5a417  b #0x4942140

; RVA 0x6004978 | public void .ctor() { }
; bytes=72 sha256=0a4ce778246f16f436e49dc961ce6b7d2aaf479d59240e7e06d0921adb6f4b08 status=arm64_complete_bound indexed_start=True
0x06004978: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x0600497C: f44f01a9  stp x20, x19, [sp, #0x10]
0x06004980: f4e800f0  adrp x20, #0x7d23000
0x06004984: 55b600d0  adrp x21, #0x76ce000
0x06004988: 88ce5c39  ldrb w8, [x20, #0x733]
0x0600498C: b5ae46f9  ldr x21, [x21, #0xd58]
0x06004990: f30300aa  mov x19, x0
0x06004994: c8000037  tbnz w8, #0, #0x60049ac
0x06004998: 40b600d0  adrp x0, #0x76ce000
0x0600499C: 00ac46f9  ldr x0, [x0, #0xd58]
0x060049A0: 1ef04597  bl #0x3180a18
0x060049A4: 28008052  movz w8, #0x1
0x060049A8: 88ce1c39  strb w8, [x20, #0x733]
0x060049AC: a10240f9  ldr x1, [x21]
0x060049B0: e00313aa  mov x0, x19
0x060049B4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x060049B8: fe57c2a8  ldp x30, x21, [sp], #0x20
0x060049BC: edf5a417  b #0x4942170

; RVA 0x60049C0 | public override bool get_IsKeyEmpty() { }
; bytes=12 sha256=92499447ba6f99119889ddff753e09ef2a4370845a0d014820f74f0a49cb981a status=arm64_complete_bound indexed_start=True
0x060049C0: 000840f9  ldr x0, [x0, #0x10]
0x060049C4: e1031faa  mov x1, xzr
0x060049C8: 39ccd317  b #0x54f7aac

