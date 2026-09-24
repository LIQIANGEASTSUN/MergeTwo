; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1037 MergeEngine.ECS.Components.Player.PlayerProgressionComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68FA0CC | public void .ctor(Entity entity) { }
; bytes=368 sha256=cab5c93e4f051d129755143df49c659b6e80e0c8054b713237958706d5e0c5ca status=arm64_complete_bound indexed_start=True
0x068FA0CC: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x068FA0D0: f85f01a9  stp x24, x23, [sp, #0x10]
0x068FA0D4: f65702a9  stp x22, x21, [sp, #0x20]
0x068FA0D8: f44f03a9  stp x20, x19, [sp, #0x30]
0x068FA0DC: 75a100f0  adrp x21, #0x7d29000
0x068FA0E0: 196c00f0  adrp x25, #0x767d000
0x068FA0E4: 186c00f0  adrp x24, #0x767d000
0x068FA0E8: d76b00d0  adrp x23, #0x7674000
0x068FA0EC: d66b00d0  adrp x22, #0x7674000
0x068FA0F0: a8b66139  ldrb w8, [x21, #0x86d]
0x068FA0F4: 39cf46f9  ldr x25, [x25, #0xd98]
0x068FA0F8: 18cb46f9  ldr x24, [x24, #0xd90]
0x068FA0FC: f77a42f9  ldr x23, [x23, #0x4f0]
0x068FA100: d67e42f9  ldr x22, [x22, #0x4f8]
0x068FA104: f30301aa  mov x19, x1
0x068FA108: f40300aa  mov x20, x0
0x068FA10C: e8010037  tbnz w8, #0, #0x68fa148
0x068FA110: c06b00d0  adrp x0, #0x7674000
0x068FA114: 007c42f9  ldr x0, [x0, #0x4f8]
0x068FA118: 401a2297  bl #0x3180a18
0x068FA11C: 006c00f0  adrp x0, #0x767d000
0x068FA120: 00c846f9  ldr x0, [x0, #0xd90]
0x068FA124: 3d1a2297  bl #0x3180a18
0x068FA128: c06b00d0  adrp x0, #0x7674000
0x068FA12C: 007842f9  ldr x0, [x0, #0x4f0]
0x068FA130: 3a1a2297  bl #0x3180a18
0x068FA134: 006c00f0  adrp x0, #0x767d000
0x068FA138: 00cc46f9  ldr x0, [x0, #0xd98]
0x068FA13C: 371a2297  bl #0x3180a18
0x068FA140: 28008052  movz w8, #0x1
0x068FA144: a8b62139  strb w8, [x21, #0x86d]
0x068FA148: 200340f9  ldr x0, [x25]
0x068FA14C: d51a2297  bl #0x3180ca0
0x068FA150: 010340f9  ldr x1, [x24]
0x068FA154: e003271e  fmov s0, wzr
0x068FA158: f50300aa  mov x21, x0
0x068FA15C: 829e6497  bl #0x4221b64
0x068FA160: e00314aa  mov x0, x20
0x068FA164: 150c02f8  str x21, [x0, #0x20]!
0x068FA168: e10315aa  mov x1, x21
0x068FA16C: 161a2297  bl #0x31809c4
0x068FA170: e00240f9  ldr x0, [x23]
0x068FA174: cb1a2297  bl #0x3180ca0
0x068FA178: c20240f9  ldr x2, [x22]
0x068FA17C: 21008052  movz w1, #0x1
0x068FA180: f50300aa  mov x21, x0
0x068FA184: 869d6497  bl #0x422179c
0x068FA188: e00314aa  mov x0, x20
0x068FA18C: 158c02f8  str x21, [x0, #0x28]!
0x068FA190: e10315aa  mov x1, x21
0x068FA194: 0c1a2297  bl #0x31809c4
0x068FA198: e00240f9  ldr x0, [x23]
0x068FA19C: c11a2297  bl #0x3180ca0
0x068FA1A0: c20240f9  ldr x2, [x22]
0x068FA1A4: 21008052  movz w1, #0x1
0x068FA1A8: f50300aa  mov x21, x0
0x068FA1AC: 7c9d6497  bl #0x422179c
0x068FA1B0: e00314aa  mov x0, x20
0x068FA1B4: 150c03f8  str x21, [x0, #0x30]!
0x068FA1B8: e10315aa  mov x1, x21
0x068FA1BC: 021a2297  bl #0x31809c4
0x068FA1C0: 200340f9  ldr x0, [x25]
0x068FA1C4: b71a2297  bl #0x3180ca0
0x068FA1C8: 010340f9  ldr x1, [x24]
0x068FA1CC: e003271e  fmov s0, wzr
0x068FA1D0: f50300aa  mov x21, x0
0x068FA1D4: 649e6497  bl #0x4221b64
0x068FA1D8: e00314aa  mov x0, x20
0x068FA1DC: 158c03f8  str x21, [x0, #0x38]!
0x068FA1E0: e10315aa  mov x1, x21
0x068FA1E4: f8192297  bl #0x31809c4
0x068FA1E8: e00240f9  ldr x0, [x23]
0x068FA1EC: ad1a2297  bl #0x3180ca0
0x068FA1F0: c20240f9  ldr x2, [x22]
0x068FA1F4: 21008052  movz w1, #0x1
0x068FA1F8: f50300aa  mov x21, x0
0x068FA1FC: 689d6497  bl #0x422179c
0x068FA200: e00314aa  mov x0, x20
0x068FA204: 150c04f8  str x21, [x0, #0x40]!
0x068FA208: e10315aa  mov x1, x21
0x068FA20C: ee192297  bl #0x31809c4
0x068FA210: e00314aa  mov x0, x20
0x068FA214: e1031faa  mov x1, xzr
0x068FA218: f980b797  bl #0x56da5fc
0x068FA21C: 930e01f8  str x19, [x20, #0x10]!
0x068FA220: e00314aa  mov x0, x20
0x068FA224: e10313aa  mov x1, x19
0x068FA228: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068FA22C: f65742a9  ldp x22, x21, [sp, #0x20]
0x068FA230: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068FA234: fe67c4a8  ldp x30, x25, [sp], #0x40
0x068FA238: e3192217  b #0x31809c4

