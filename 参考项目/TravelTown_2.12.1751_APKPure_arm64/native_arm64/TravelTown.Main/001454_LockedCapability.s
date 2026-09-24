; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1454 MergeEngine.Configuration.Capabilities.LockedCapability
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x60117A8 | public void .ctor() { }
; bytes=36 sha256=c419066354b312d565b433fdecb75a0a4017c6c48abfc557d2a523fce218ccce status=arm64_complete_bound indexed_start=True
0x060117A8: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x060117AC: e1031faa  mov x1, xzr
0x060117B0: f30300aa  mov x19, x0
0x060117B4: 9223db97  bl #0x56da5fc
0x060117B8: 7f620039  strb wzr, [x19, #0x18]
0x060117BC: 7f220079  strh wzr, [x19, #0x10]
0x060117C0: 7f1600b9  str wzr, [x19, #0x14]
0x060117C4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x060117C8: c0035fd6  ret

; RVA 0x60117CC | public void .ctor(bool locked, bool boxed, int lockedByLevel, bool bubbled, UnboxingType unboxingType, int interactionAmount, PlayerResourceEnum interactionResource = 1) { }
; bytes=108 sha256=c82d966188c30cd45fe75c899766a3944beff126977de78f5880ce8f9aa5775b status=arm64_complete_bound indexed_start=True
0x060117CC: fe0f1bf8  str x30, [sp, #-0x50]!
0x060117D0: fa6701a9  stp x26, x25, [sp, #0x10]
0x060117D4: f85f02a9  stp x24, x23, [sp, #0x20]
0x060117D8: f65703a9  stp x22, x21, [sp, #0x30]
0x060117DC: f44f04a9  stp x20, x19, [sp, #0x40]
0x060117E0: 38000012  and w24, w1, #1
0x060117E4: e1031faa  mov x1, xzr
0x060117E8: f303072a  mov w19, w7
0x060117EC: f403062a  mov w20, w6
0x060117F0: f503052a  mov w21, w5
0x060117F4: f603032a  mov w22, w3
0x060117F8: f70300aa  mov x23, x0
0x060117FC: 59000012  and w25, w2, #1
0x06011800: 9a000012  and w26, w4, #1
0x06011804: 7e23db97  bl #0x56da5fc
0x06011808: f8420039  strb w24, [x23, #0x10]
0x0601180C: f9460039  strb w25, [x23, #0x11]
0x06011810: f61600b9  str w22, [x23, #0x14]
0x06011814: fa620039  strb w26, [x23, #0x18]
0x06011818: f5d20329  stp w21, w20, [x23, #0x1c]
0x0601181C: f32600b9  str w19, [x23, #0x24]
0x06011820: f44f44a9  ldp x20, x19, [sp, #0x40]
0x06011824: f65743a9  ldp x22, x21, [sp, #0x30]
0x06011828: f85f42a9  ldp x24, x23, [sp, #0x20]
0x0601182C: fa6741a9  ldp x26, x25, [sp, #0x10]
0x06011830: fe0745f8  ldr x30, [sp], #0x50
0x06011834: c0035fd6  ret

