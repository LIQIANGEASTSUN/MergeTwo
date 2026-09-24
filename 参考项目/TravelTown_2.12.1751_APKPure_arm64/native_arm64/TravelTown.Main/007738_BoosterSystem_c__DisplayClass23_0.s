; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 7738 .BoosterSystem.<>c__DisplayClass23_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x65BE790 | public void .ctor() { }
; bytes=8 sha256=ab4d0bdfbf75db9e5b32d374d52a7a7579a340ffb61649b06ae767b03dbf4b42 status=arm64_complete_bound indexed_start=True
0x065BE790: e1031faa  mov x1, xzr
0x065BE794: 9a6fc417  b #0x56da5fc

; RVA 0x65BEF10 | internal bool <DeactivateBooster>b__0(RemoteBoosterData booster) { }
; bytes=108 sha256=269d20b852da9157adfce187649ef7e5d6eb7cc4099c1b50616a475718ad29fc status=arm64_complete_bound indexed_start=True
0x065BEF10: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x065BEF14: f44f01a9  stp x20, x19, [sp, #0x10]
0x065BEF18: 55bb00b0  adrp x21, #0x7d27000
0x065BEF1C: a8266439  ldrb w8, [x21, #0x909]
0x065BEF20: f30301aa  mov x19, x1
0x065BEF24: f40300aa  mov x20, x0
0x065BEF28: c8000037  tbnz w8, #0, #0x65bef40
0x065BEF2C: 008600b0  adrp x0, #0x767f000
0x065BEF30: 00e843f9  ldr x0, [x0, #0x7d0]
0x065BEF34: b9062f97  bl #0x3180a18
0x065BEF38: 28008052  movz w8, #0x1
0x065BEF3C: a8262439  strb w8, [x21, #0x909]
0x065BEF40: d30100b4  cbz x19, #0x65bef78
0x065BEF44: 800a40f9  ldr x0, [x20, #0x10]
0x065BEF48: 800100b4  cbz x0, #0x65bef78
0x065BEF4C: 088600b0  adrp x8, #0x767f000
0x065BEF50: 08e943f9  ldr x8, [x8, #0x7d0]
0x065BEF54: 731a40f9  ldr x19, [x19, #0x30]
0x065BEF58: 010140f9  ldr x1, [x8]
0x065BEF5C: 82b49897  bl #0x4bec164
0x065BEF60: e10300aa  mov x1, x0
0x065BEF64: e00313aa  mov x0, x19
0x065BEF68: f44f41a9  ldp x20, x19, [sp, #0x10]
0x065BEF6C: e2031faa  mov x2, xzr
0x065BEF70: fe57c2a8  ldp x30, x21, [sp], #0x20
0x065BEF74: 3faebc17  b #0x54ea870
0x065BEF78: 4d072f97  bl #0x3180cac

; RVA 0x65BEF7C | internal void <DeactivateBooster>b__1() { }
; bytes=32 sha256=327674111502889db4df57b3489af71f968b2e6e25eff59f6ea86afd3bd52536 status=arm64_complete_bound indexed_start=True
0x065BEF7C: fe0f1ff8  str x30, [sp, #-0x10]!
0x065BEF80: 080c40f9  ldr x8, [x0, #0x18]
0x065BEF84: a80000b4  cbz x8, #0x65bef98
0x065BEF88: 010840f9  ldr x1, [x0, #0x10]
0x065BEF8C: e00308aa  mov x0, x8
0x065BEF90: fe0741f8  ldr x30, [sp], #0x10
0x065BEF94: 0ffdff17  b #0x65be3d0
0x065BEF98: 45072f97  bl #0x3180cac

