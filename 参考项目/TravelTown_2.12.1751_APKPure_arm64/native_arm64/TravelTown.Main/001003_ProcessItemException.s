; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1003 MergeEngine.ECS.Systems.Items.Exceptions.ProcessItemException
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x67A3210 | public void .ctor(string id, Exception e) { }
; bytes=136 sha256=b1ee07a8be3e6a3bfe6c961990872cbad00f98d76c41364d9596ae274a9cb034 status=arm64_complete_bound indexed_start=True
0x067A3210: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x067A3214: f65701a9  stp x22, x21, [sp, #0x10]
0x067A3218: f44f02a9  stp x20, x19, [sp, #0x20]
0x067A321C: 36ac00b0  adrp x22, #0x7d28000
0x067A3220: 577500f0  adrp x23, #0x764e000
0x067A3224: c8d67739  ldrb w8, [x22, #0xdf5]
0x067A3228: f76e42f9  ldr x23, [x23, #0x4d8]
0x067A322C: f30302aa  mov x19, x2
0x067A3230: f50301aa  mov x21, x1
0x067A3234: f40300aa  mov x20, x0
0x067A3238: c8000037  tbnz w8, #0, #0x67a3250
0x067A323C: 407500f0  adrp x0, #0x764e000
0x067A3240: 006c42f9  ldr x0, [x0, #0x4d8]
0x067A3244: f5752797  bl #0x3180a18
0x067A3248: 28008052  movz w8, #0x1
0x067A324C: c8d63739  strb w8, [x22, #0xdf5]
0x067A3250: e00240f9  ldr x0, [x23]
0x067A3254: 08e040b9  ldr w8, [x0, #0xe0]
0x067A3258: 48000035  cbnz w8, #0x67a3260
0x067A325C: 4c762797  bl #0x3180b8c
0x067A3260: e00314aa  mov x0, x20
0x067A3264: e1031faa  mov x1, xzr
0x067A3268: bdaebc97  bl #0x56ced5c
0x067A326C: e00314aa  mov x0, x20
0x067A3270: 150c09f8  str x21, [x0, #0x90]!
0x067A3274: e10315aa  mov x1, x21
0x067A3278: d3752797  bl #0x31809c4
0x067A327C: 938e09f8  str x19, [x20, #0x98]!
0x067A3280: e00314aa  mov x0, x20
0x067A3284: e10313aa  mov x1, x19
0x067A3288: f44f42a9  ldp x20, x19, [sp, #0x20]
0x067A328C: f65741a9  ldp x22, x21, [sp, #0x10]
0x067A3290: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x067A3294: cc752717  b #0x31809c4

; RVA 0x67A3298 | public override string get_Message() { }
; bytes=136 sha256=0d93f3aef8d57c04ccaf62dbaae557bf2f2fda56375f004aaff619c24cca67a8 status=arm64_complete_bound indexed_start=True
0x067A3298: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x067A329C: f44f01a9  stp x20, x19, [sp, #0x10]
0x067A32A0: 34ac00b0  adrp x20, #0x7d28000
0x067A32A4: 88da7739  ldrb w8, [x20, #0xdf6]
0x067A32A8: f30300aa  mov x19, x0
0x067A32AC: 28010037  tbnz w8, #0, #0x67a32d0
0x067A32B0: 607b00b0  adrp x0, #0x7710000
0x067A32B4: 009845f9  ldr x0, [x0, #0xb30]
0x067A32B8: d8752797  bl #0x3180a18
0x067A32BC: 607b00b0  adrp x0, #0x7710000
0x067A32C0: 009c45f9  ldr x0, [x0, #0xb38]
0x067A32C4: d5752797  bl #0x3180a18
0x067A32C8: 28008052  movz w8, #0x1
0x067A32CC: 88da3739  strb w8, [x20, #0xdf6]
0x067A32D0: 604e40f9  ldr x0, [x19, #0x98]
0x067A32D4: 400200b4  cbz x0, #0x67a331c
0x067A32D8: 080040f9  ldr x8, [x0]
0x067A32DC: 747b00b0  adrp x20, #0x7710000
0x067A32E0: 757b00b0  adrp x21, #0x7710000
0x067A32E4: 734a40f9  ldr x19, [x19, #0x90]
0x067A32E8: 098558a9  ldp x9, x1, [x8, #0x188]
0x067A32EC: 949e45f9  ldr x20, [x20, #0xb38]
0x067A32F0: b59a45f9  ldr x21, [x21, #0xb30]
0x067A32F4: 20013fd6  blr x9
0x067A32F8: 880240f9  ldr x8, [x20]
0x067A32FC: a20240f9  ldr x2, [x21]
0x067A3300: e10313aa  mov x1, x19
0x067A3304: f44f41a9  ldp x20, x19, [sp, #0x10]
0x067A3308: e30300aa  mov x3, x0
0x067A330C: e00308aa  mov x0, x8
0x067A3310: e4031faa  mov x4, xzr
0x067A3314: fe57c2a8  ldp x30, x21, [sp], #0x20
0x067A3318: ed51b517  b #0x54f7acc
0x067A331C: 64762797  bl #0x3180cac

; RVA 0x67A3320 | public override string get_StackTrace() { }
; bytes=32 sha256=4318c0dc2ce7328d9bf3abf70606dacc11d8eced2b3212c3143c2efe6bffb69f status=arm64_complete_bound indexed_start=True
0x067A3320: fe0f1ff8  str x30, [sp, #-0x10]!
0x067A3324: 004c40f9  ldr x0, [x0, #0x98]
0x067A3328: a00000b4  cbz x0, #0x67a333c
0x067A332C: 080040f9  ldr x8, [x0]
0x067A3330: 02855da9  ldp x2, x1, [x8, #0x1d8]
0x067A3334: fe0741f8  ldr x30, [sp], #0x10
0x067A3338: 40001fd6  br x2
0x067A333C: 5c762797  bl #0x3180cac

