; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1321 .Reward.<>c__DisplayClass100_0<T>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F34120 | MergeEngine.Configuration.Definitions.Reward.<>c__DisplayClass100_0<object>$$.ctor
; native signature: void MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0_object____ctor (MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0_T__o* __this, const MethodInfo_3F34120* method);
; bytes=8 sha256=d5d0223a04c5c41ff4327d07c49e39f82346e4d7069f271067e8d25fecb178af status=arm64_complete_bound indexed_start=True
0x03F34120: e1031faa  mov x1, xzr
0x03F34124: 36995e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F34D08 | MergeEngine.Configuration.Definitions.Reward.<>c__DisplayClass100_0<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0___Il2CppFullySharedGenericType____ctor (MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0_T__o* __this, const MethodInfo_3F34D08* method);
; bytes=8 sha256=cd7bb765bb8847e35b5d66afe51b64498d59c30b10a7a17187c866ba5af01e2f status=arm64_complete_bound indexed_start=True
0x03F34D08: e1031faa  mov x1, xzr
0x03F34D0C: 3c965e14  b #0x56da5fc

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F34128 | MergeEngine.Configuration.Definitions.Reward.<>c__DisplayClass100_0<object>$$<Aggregate>b__0
; native signature: bool MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0_object____Aggregate_b__0 (MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0_T__o* __this, Il2CppObject* r, const MethodInfo_3F34128* method);
; bytes=276 sha256=af153c0803948c456f68bc0b39d84bed42694d6078212fe8eba7377551b8320d status=arm64_complete_bound indexed_start=True
0x03F34128: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03F3412C: f44f01a9  stp x20, x19, [sp, #0x10]
0x03F34130: 15ef01f0  adrp x21, #0x7d17000
0x03F34134: a88a7d39  ldrb w8, [x21, #0xf62]
0x03F34138: f40301aa  mov x20, x1
0x03F3413C: f30300aa  mov x19, x0
0x03F34140: c8000037  tbnz w8, #0, #0x3f34158
0x03F34144: e0b901b0  adrp x0, #0x7671000
0x03F34148: 00c443f9  ldr x0, [x0, #0x788]
0x03F3414C: 3332c997  bl #0x3180a18
0x03F34150: 28008052  movz w8, #0x1
0x03F34154: a88a3d39  strb w8, [x21, #0xf62]
0x03F34158: 140700b4  cbz x20, #0x3f34238
0x03F3415C: f5b901b0  adrp x21, #0x7671000
0x03F34160: 880240f9  ldr x8, [x20]
0x03F34164: b5c643f9  ldr x21, [x21, #0x788]
0x03F34168: 095d4279  ldrh w9, [x8, #0x12e]
0x03F3416C: a10240f9  ldr x1, [x21]
0x03F34170: 290100b4  cbz x9, #0x3f34194
0x03F34174: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F34178: 4a210091  add x10, x10, #8
0x03F3417C: 4b815ff8  ldur x11, [x10, #-8]
0x03F34180: 7f0101eb  cmp x11, x1
0x03F34184: 00010054  b.eq #0x3f341a4
0x03F34188: 290500f1  subs x9, x9, #1
0x03F3418C: 4a410091  add x10, x10, #0x10
0x03F34190: 61ffff54  b.ne #0x3f3417c
0x03F34194: e00314aa  mov x0, x20
0x03F34198: e2031f2a  mov w2, wzr
0x03F3419C: 5d8ac897  bl #0x3156b10
0x03F341A0: 04000014  b #0x3f341b0
0x03F341A4: 490180b9  ldrsw x9, [x10]
0x03F341A8: 0811098b  add x8, x8, x9, lsl #4
0x03F341AC: 00e10491  add x0, x8, #0x138
0x03F341B0: 080440a9  ldp x8, x1, [x0]
0x03F341B4: e00314aa  mov x0, x20
0x03F341B8: 00013fd6  blr x8
0x03F341BC: 740a40f9  ldr x20, [x19, #0x10]
0x03F341C0: d40300b4  cbz x20, #0x3f34238
0x03F341C4: 880240f9  ldr x8, [x20]
0x03F341C8: a10240f9  ldr x1, [x21]
0x03F341CC: f30300aa  mov x19, x0
0x03F341D0: 095d4279  ldrh w9, [x8, #0x12e]
0x03F341D4: 290100b4  cbz x9, #0x3f341f8
0x03F341D8: 0a5940f9  ldr x10, [x8, #0xb0]
0x03F341DC: 4a210091  add x10, x10, #8
0x03F341E0: 4b815ff8  ldur x11, [x10, #-8]
0x03F341E4: 7f0101eb  cmp x11, x1
0x03F341E8: 00010054  b.eq #0x3f34208
0x03F341EC: 290500f1  subs x9, x9, #1
0x03F341F0: 4a410091  add x10, x10, #0x10
0x03F341F4: 61ffff54  b.ne #0x3f341e0
0x03F341F8: e00314aa  mov x0, x20
0x03F341FC: e2031f2a  mov w2, wzr
0x03F34200: 448ac897  bl #0x3156b10
0x03F34204: 04000014  b #0x3f34214
0x03F34208: 490180b9  ldrsw x9, [x10]
0x03F3420C: 0811098b  add x8, x8, x9, lsl #4
0x03F34210: 00e10491  add x0, x8, #0x138
0x03F34214: 080440a9  ldp x8, x1, [x0]
0x03F34218: e00314aa  mov x0, x20
0x03F3421C: 00013fd6  blr x8
0x03F34220: e10300aa  mov x1, x0
0x03F34224: e00313aa  mov x0, x19
0x03F34228: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03F3422C: e2031faa  mov x2, xzr
0x03F34230: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03F34234: 8fd95614  b #0x54ea870
0x03F34238: 9d32c997  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3F34D10 | MergeEngine.Configuration.Definitions.Reward.<>c__DisplayClass100_0<__Il2CppFullySharedGenericType>$$<Aggregate>b__0
; native signature: bool MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0___Il2CppFullySharedGenericType____Aggregate_b__0 (MergeEngine_Configuration_Definitions_Reward___c__DisplayClass100_0_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o r, const MethodInfo_3F34D10* method);
; bytes=424 sha256=458a2bd97fbee7b3bcbe337ab58ef52245684c4dc6921d6d03bcb52ca96eed78 status=arm64_complete_bound indexed_start=True
0x03F34D10: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03F34D14: f85f01a9  stp x24, x23, [sp, #0x10]
0x03F34D18: f65702a9  stp x22, x21, [sp, #0x20]
0x03F34D1C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03F34D20: fd030091  mov x29, sp
0x03F34D24: ff8300d1  sub sp, sp, #0x20
0x03F34D28: 58d03bd5  mrs x24, tpidr_el0
0x03F34D2C: 081740f9  ldr x8, [x24, #0x28]
0x03F34D30: f40302aa  mov x20, x2
0x03F34D34: f50301aa  mov x21, x1
0x03F34D38: f30300aa  mov x19, x0
0x03F34D3C: a8831ff8  stur x8, [x29, #-8]
0x03F34D40: a1831ef8  stur x1, [x29, #-0x18]
0x03F34D44: 481040f9  ldr x8, [x2, #0x20]
0x03F34D48: 096140f9  ldr x9, [x8, #0xc0]
0x03F34D4C: 280140f9  ldr x8, [x9]
0x03F34D50: 0ad50491  add x10, x8, #0x135
0x03F34D54: 4a014079  ldrh w10, [x10]
0x03F34D58: 2a010037  tbnz w10, #0, #0x3f34d7c
0x03F34D5C: e00308aa  mov x0, x8
0x03F34D60: af86c897  bl #0x315681c
0x03F34D64: 881240f9  ldr x8, [x20, #0x20]
0x03F34D68: 096140f9  ldr x9, [x8, #0xc0]
0x03F34D6C: 280140f9  ldr x8, [x9]
0x03F34D70: 0ad50491  add x10, x8, #0x135
0x03F34D74: 4a014079  ldrh w10, [x10]
0x03F34D78: 02000014  b #0x3f34d80
0x03F34D7C: e00308aa  mov x0, x8
0x03F34D80: 0bfc40b9  ldr w11, [x0, #0xfc]
0x03F34D84: ec030091  mov x12, sp
0x03F34D88: 6b410011  add w11, w11, #0x10
0x03F34D8C: 6b3d0091  add x11, x11, #0xf
0x03F34D90: 6b717c92  and x11, x11, #0x1fffffff0
0x03F34D94: 97010bcb  sub x23, x12, x11
0x03F34D98: ff020091  mov sp, x23
0x03F34D9C: 2a010037  tbnz w10, #0, #0x3f34dc0
0x03F34DA0: e00308aa  mov x0, x8
0x03F34DA4: 9e86c897  bl #0x315681c
0x03F34DA8: 881240f9  ldr x8, [x20, #0x20]
0x03F34DAC: 096140f9  ldr x9, [x8, #0xc0]
0x03F34DB0: 280140f9  ldr x8, [x9]
0x03F34DB4: 0ad50491  add x10, x8, #0x135
0x03F34DB8: 4a014079  ldrh w10, [x10]
0x03F34DBC: 02000014  b #0x3f34dc4
0x03F34DC0: e00308aa  mov x0, x8
0x03F34DC4: 0bfc40b9  ldr w11, [x0, #0xfc]
0x03F34DC8: ec030091  mov x12, sp
0x03F34DCC: 6b410011  add w11, w11, #0x10
0x03F34DD0: 6b3d0091  add x11, x11, #0xf
0x03F34DD4: 6b717c92  and x11, x11, #0x1fffffff0
0x03F34DD8: 96010bcb  sub x22, x12, x11
0x03F34DDC: df020091  mov sp, x22
0x03F34DE0: ca000037  tbnz w10, #0, #0x3f34df8
0x03F34DE4: e00308aa  mov x0, x8
0x03F34DE8: 8d86c897  bl #0x315681c
0x03F34DEC: 881240f9  ldr x8, [x20, #0x20]
0x03F34DF0: 096140f9  ldr x9, [x8, #0xc0]
0x03F34DF4: e80300aa  mov x8, x0
0x03F34DF8: 2a0540a9  ldp x10, x1, [x9]
0x03F34DFC: a96300d1  sub x9, x29, #0x18
0x03F34E00: a54300d1  sub x5, x29, #0x10
0x03F34E04: e00308aa  mov x0, x8
0x03F34E08: 4a2940b9  ldr w10, [x10, #0x28]
0x03F34E0C: e20317aa  mov x2, x23
0x03F34E10: e4031faa  mov x4, xzr
0x03F34E14: 5f010071  cmp w10, #0
0x03F34E18: a3b2899a  csel x3, x21, x9, lt
0x03F34E1C: dc31c997  bl #0x318158c
0x03F34E20: 881240f9  ldr x8, [x20, #0x20]
0x03F34E24: b5035ff8  ldur x21, [x29, #-0x10]
0x03F34E28: 086140f9  ldr x8, [x8, #0xc0]
0x03F34E2C: 170140f9  ldr x23, [x8]
0x03F34E30: e9d64439  ldrb w9, [x23, #0x135]
0x03F34E34: c9000037  tbnz w9, #0, #0x3f34e4c
0x03F34E38: e00317aa  mov x0, x23
0x03F34E3C: 7886c897  bl #0x315681c
0x03F34E40: 881240f9  ldr x8, [x20, #0x20]
0x03F34E44: f70300aa  mov x23, x0
0x03F34E48: 086140f9  ldr x8, [x8, #0xc0]
0x03F34E4C: 14a540a9  ldp x20, x9, [x8, #8]
0x03F34E50: e00313aa  mov x0, x19
0x03F34E54: 214140f9  ldr x1, [x9, #0x80]
0x03F34E58: f82ec997  bl #0x3180a38
0x03F34E5C: e30300aa  mov x3, x0
0x03F34E60: a54300d1  sub x5, x29, #0x10
0x03F34E64: e00317aa  mov x0, x23
0x03F34E68: e10314aa  mov x1, x20
0x03F34E6C: e20316aa  mov x2, x22
0x03F34E70: e4031faa  mov x4, xzr
0x03F34E74: c631c997  bl #0x318158c
0x03F34E78: a1035ff8  ldur x1, [x29, #-0x10]
0x03F34E7C: e00315aa  mov x0, x21
0x03F34E80: e2031faa  mov x2, xzr
0x03F34E84: 7bd65694  bl #0x54ea870
0x03F34E88: 081740f9  ldr x8, [x24, #0x28]
0x03F34E8C: a9835ff8  ldur x9, [x29, #-8]
0x03F34E90: 1f0109eb  cmp x8, x9
0x03F34E94: 01010054  b.ne #0x3f34eb4
0x03F34E98: 00000012  and w0, w0, #1
0x03F34E9C: bf030091  mov sp, x29
0x03F34EA0: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03F34EA4: f65742a9  ldp x22, x21, [sp, #0x20]
0x03F34EA8: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03F34EAC: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03F34EB0: c0035fd6  ret
0x03F34EB4: b766ca94  bl #0x71ce990

