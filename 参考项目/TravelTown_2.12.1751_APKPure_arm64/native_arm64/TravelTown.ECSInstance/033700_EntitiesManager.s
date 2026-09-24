; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33700 ContextualizedECS.Context.EntitiesManager
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x5F15E14 | public void add_EntityAdded(Action<Entity> value) { }
; bytes=176 sha256=99c39e2b86f10bec5b7a4cb6cf56955ca6c621cf70333808b9b49c007e6ae15a status=arm64_complete_bound indexed_start=True
0x05F15E14: fe0f1cf8  str x30, [sp, #-0x40]!
0x05F15E18: f85f01a9  stp x24, x23, [sp, #0x10]
0x05F15E1C: f65702a9  stp x22, x21, [sp, #0x20]
0x05F15E20: f44f03a9  stp x20, x19, [sp, #0x30]
0x05F15E24: 75f000b0  adrp x21, #0x7d22000
0x05F15E28: a87e7139  ldrb w8, [x21, #0xc5f]
0x05F15E2C: f30301aa  mov x19, x1
0x05F15E30: f40300aa  mov x20, x0
0x05F15E34: c8000037  tbnz w8, #0, #0x5f15e4c
0x05F15E38: 60bd00d0  adrp x0, #0x76c3000
0x05F15E3C: 00a845f9  ldr x0, [x0, #0xb50]
0x05F15E40: f6aa4997  bl #0x3180a18
0x05F15E44: 28008052  movz w8, #0x1
0x05F15E48: a87e3139  strb w8, [x21, #0xc5f]
0x05F15E4C: 78bd00d0  adrp x24, #0x76c3000
0x05F15E50: 950e41f8  ldr x21, [x20, #0x10]!
0x05F15E54: 18ab45f9  ldr x24, [x24, #0xb50]
0x05F15E58: e00315aa  mov x0, x21
0x05F15E5C: e10313aa  mov x1, x19
0x05F15E60: e2031faa  mov x2, xzr
0x05F15E64: 2f1fdf97  bl #0x56ddb20
0x05F15E68: 000100b4  cbz x0, #0x5f15e88
0x05F15E6C: 170340f9  ldr x23, [x24]
0x05F15E70: f60300aa  mov x22, x0
0x05F15E74: e10317aa  mov x1, x23
0x05F15E78: 46ab4997  bl #0x3180b90
0x05F15E7C: e10300aa  mov x1, x0
0x05F15E80: 600000b5  cbnz x0, #0x5f15e8c
0x05F15E84: 0d000014  b #0x5f15eb8
0x05F15E88: e1031faa  mov x1, xzr
0x05F15E8C: e00314aa  mov x0, x20
0x05F15E90: e20315aa  mov x2, x21
0x05F15E94: ab1c4b97  bl #0x31dd140
0x05F15E98: bf0200eb  cmp x21, x0
0x05F15E9C: f50300aa  mov x21, x0
0x05F15EA0: c1fdff54  b.ne #0x5f15e58
0x05F15EA4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05F15EA8: f65742a9  ldp x22, x21, [sp, #0x20]
0x05F15EAC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05F15EB0: fe0744f8  ldr x30, [sp], #0x40
0x05F15EB4: c0035fd6  ret
0x05F15EB8: e00316aa  mov x0, x22
0x05F15EBC: e10317aa  mov x1, x23
0x05F15EC0: 62ac4997  bl #0x3181048

; RVA 0x5F15EC4 | public void remove_EntityAdded(Action<Entity> value) { }
; bytes=176 sha256=6900c51382dffa9e00908ee3d30cf74076c2d1cc3e13ed4e17aeb8985e8c3e96 status=arm64_complete_bound indexed_start=True
0x05F15EC4: fe0f1cf8  str x30, [sp, #-0x40]!
0x05F15EC8: f85f01a9  stp x24, x23, [sp, #0x10]
0x05F15ECC: f65702a9  stp x22, x21, [sp, #0x20]
0x05F15ED0: f44f03a9  stp x20, x19, [sp, #0x30]
0x05F15ED4: 75f000b0  adrp x21, #0x7d22000
0x05F15ED8: a8827139  ldrb w8, [x21, #0xc60]
0x05F15EDC: f30301aa  mov x19, x1
0x05F15EE0: f40300aa  mov x20, x0
0x05F15EE4: c8000037  tbnz w8, #0, #0x5f15efc
0x05F15EE8: 60bd00d0  adrp x0, #0x76c3000
0x05F15EEC: 00a845f9  ldr x0, [x0, #0xb50]
0x05F15EF0: caaa4997  bl #0x3180a18
0x05F15EF4: 28008052  movz w8, #0x1
0x05F15EF8: a8823139  strb w8, [x21, #0xc60]
0x05F15EFC: 78bd00d0  adrp x24, #0x76c3000
0x05F15F00: 950e41f8  ldr x21, [x20, #0x10]!
0x05F15F04: 18ab45f9  ldr x24, [x24, #0xb50]
0x05F15F08: e00315aa  mov x0, x21
0x05F15F0C: e10313aa  mov x1, x19
0x05F15F10: e2031faa  mov x2, xzr
0x05F15F14: 811fdf97  bl #0x56ddd18
0x05F15F18: 000100b4  cbz x0, #0x5f15f38
0x05F15F1C: 170340f9  ldr x23, [x24]
0x05F15F20: f60300aa  mov x22, x0
0x05F15F24: e10317aa  mov x1, x23
0x05F15F28: 1aab4997  bl #0x3180b90
0x05F15F2C: e10300aa  mov x1, x0
0x05F15F30: 600000b5  cbnz x0, #0x5f15f3c
0x05F15F34: 0d000014  b #0x5f15f68
0x05F15F38: e1031faa  mov x1, xzr
0x05F15F3C: e00314aa  mov x0, x20
0x05F15F40: e20315aa  mov x2, x21
0x05F15F44: 7f1c4b97  bl #0x31dd140
0x05F15F48: bf0200eb  cmp x21, x0
0x05F15F4C: f50300aa  mov x21, x0
0x05F15F50: c1fdff54  b.ne #0x5f15f08
0x05F15F54: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05F15F58: f65742a9  ldp x22, x21, [sp, #0x20]
0x05F15F5C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05F15F60: fe0744f8  ldr x30, [sp], #0x40
0x05F15F64: c0035fd6  ret
0x05F15F68: e00316aa  mov x0, x22
0x05F15F6C: e10317aa  mov x1, x23
0x05F15F70: 36ac4997  bl #0x3181048

; RVA 0x5F15F74 | public void add_EntityRemoved(Action<Entity> value) { }
; bytes=176 sha256=82d9edd442d7a312ff3c9b808578463d9b82903ab54cb03761ed8daf6b8d3945 status=arm64_complete_bound indexed_start=True
0x05F15F74: fe0f1cf8  str x30, [sp, #-0x40]!
0x05F15F78: f85f01a9  stp x24, x23, [sp, #0x10]
0x05F15F7C: f65702a9  stp x22, x21, [sp, #0x20]
0x05F15F80: f44f03a9  stp x20, x19, [sp, #0x30]
0x05F15F84: 75f000b0  adrp x21, #0x7d22000
0x05F15F88: a8867139  ldrb w8, [x21, #0xc61]
0x05F15F8C: f30301aa  mov x19, x1
0x05F15F90: f40300aa  mov x20, x0
0x05F15F94: c8000037  tbnz w8, #0, #0x5f15fac
0x05F15F98: 60bd00d0  adrp x0, #0x76c3000
0x05F15F9C: 00a845f9  ldr x0, [x0, #0xb50]
0x05F15FA0: 9eaa4997  bl #0x3180a18
0x05F15FA4: 28008052  movz w8, #0x1
0x05F15FA8: a8863139  strb w8, [x21, #0xc61]
0x05F15FAC: 78bd00d0  adrp x24, #0x76c3000
0x05F15FB0: 958e41f8  ldr x21, [x20, #0x18]!
0x05F15FB4: 18ab45f9  ldr x24, [x24, #0xb50]
0x05F15FB8: e00315aa  mov x0, x21
0x05F15FBC: e10313aa  mov x1, x19
0x05F15FC0: e2031faa  mov x2, xzr
0x05F15FC4: d71edf97  bl #0x56ddb20
0x05F15FC8: 000100b4  cbz x0, #0x5f15fe8
0x05F15FCC: 170340f9  ldr x23, [x24]
0x05F15FD0: f60300aa  mov x22, x0
0x05F15FD4: e10317aa  mov x1, x23
0x05F15FD8: eeaa4997  bl #0x3180b90
0x05F15FDC: e10300aa  mov x1, x0
0x05F15FE0: 600000b5  cbnz x0, #0x5f15fec
0x05F15FE4: 0d000014  b #0x5f16018
0x05F15FE8: e1031faa  mov x1, xzr
0x05F15FEC: e00314aa  mov x0, x20
0x05F15FF0: e20315aa  mov x2, x21
0x05F15FF4: 531c4b97  bl #0x31dd140
0x05F15FF8: bf0200eb  cmp x21, x0
0x05F15FFC: f50300aa  mov x21, x0
0x05F16000: c1fdff54  b.ne #0x5f15fb8
0x05F16004: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05F16008: f65742a9  ldp x22, x21, [sp, #0x20]
0x05F1600C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05F16010: fe0744f8  ldr x30, [sp], #0x40
0x05F16014: c0035fd6  ret
0x05F16018: e00316aa  mov x0, x22
0x05F1601C: e10317aa  mov x1, x23
0x05F16020: 0aac4997  bl #0x3181048

; RVA 0x5F16024 | public void remove_EntityRemoved(Action<Entity> value) { }
; bytes=176 sha256=4894f387deb7a76df5d2f7c0ae2845734f5f309bef6770b335cb5a98fced81b7 status=arm64_complete_bound indexed_start=True
0x05F16024: fe0f1cf8  str x30, [sp, #-0x40]!
0x05F16028: f85f01a9  stp x24, x23, [sp, #0x10]
0x05F1602C: f65702a9  stp x22, x21, [sp, #0x20]
0x05F16030: f44f03a9  stp x20, x19, [sp, #0x30]
0x05F16034: 75f00090  adrp x21, #0x7d22000
0x05F16038: a88a7139  ldrb w8, [x21, #0xc62]
0x05F1603C: f30301aa  mov x19, x1
0x05F16040: f40300aa  mov x20, x0
0x05F16044: c8000037  tbnz w8, #0, #0x5f1605c
0x05F16048: 60bd00b0  adrp x0, #0x76c3000
0x05F1604C: 00a845f9  ldr x0, [x0, #0xb50]
0x05F16050: 72aa4997  bl #0x3180a18
0x05F16054: 28008052  movz w8, #0x1
0x05F16058: a88a3139  strb w8, [x21, #0xc62]
0x05F1605C: 78bd00b0  adrp x24, #0x76c3000
0x05F16060: 958e41f8  ldr x21, [x20, #0x18]!
0x05F16064: 18ab45f9  ldr x24, [x24, #0xb50]
0x05F16068: e00315aa  mov x0, x21
0x05F1606C: e10313aa  mov x1, x19
0x05F16070: e2031faa  mov x2, xzr
0x05F16074: 291fdf97  bl #0x56ddd18
0x05F16078: 000100b4  cbz x0, #0x5f16098
0x05F1607C: 170340f9  ldr x23, [x24]
0x05F16080: f60300aa  mov x22, x0
0x05F16084: e10317aa  mov x1, x23
0x05F16088: c2aa4997  bl #0x3180b90
0x05F1608C: e10300aa  mov x1, x0
0x05F16090: 600000b5  cbnz x0, #0x5f1609c
0x05F16094: 0d000014  b #0x5f160c8
0x05F16098: e1031faa  mov x1, xzr
0x05F1609C: e00314aa  mov x0, x20
0x05F160A0: e20315aa  mov x2, x21
0x05F160A4: 271c4b97  bl #0x31dd140
0x05F160A8: bf0200eb  cmp x21, x0
0x05F160AC: f50300aa  mov x21, x0
0x05F160B0: c1fdff54  b.ne #0x5f16068
0x05F160B4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x05F160B8: f65742a9  ldp x22, x21, [sp, #0x20]
0x05F160BC: f85f41a9  ldp x24, x23, [sp, #0x10]
0x05F160C0: fe0744f8  ldr x30, [sp], #0x40
0x05F160C4: c0035fd6  ret
0x05F160C8: e00316aa  mov x0, x22
0x05F160CC: e10317aa  mov x1, x23
0x05F160D0: deab4997  bl #0x3181048

; RVA 0x5F160D4 | public void add_EntitiesCleared(Action value) { }
; bytes=156 sha256=abfa0a35cd76581f4114ba111e81ab5a7601c0fc18dafd1e29721d6aa632baf3 status=arm64_complete_bound indexed_start=True
0x05F160D4: fe0f1df8  str x30, [sp, #-0x30]!
0x05F160D8: f65701a9  stp x22, x21, [sp, #0x10]
0x05F160DC: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F160E0: 75f00090  adrp x21, #0x7d22000
0x05F160E4: a88e7139  ldrb w8, [x21, #0xc63]
0x05F160E8: f30301aa  mov x19, x1
0x05F160EC: f40300aa  mov x20, x0
0x05F160F0: c8000037  tbnz w8, #0, #0x5f16108
0x05F160F4: c0b90090  adrp x0, #0x764e000
0x05F160F8: 00ac43f9  ldr x0, [x0, #0x758]
0x05F160FC: 47aa4997  bl #0x3180a18
0x05F16100: 28008052  movz w8, #0x1
0x05F16104: a88e3139  strb w8, [x21, #0xc63]
0x05F16108: d6b90090  adrp x22, #0x764e000
0x05F1610C: 950e42f8  ldr x21, [x20, #0x20]!
0x05F16110: d6ae43f9  ldr x22, [x22, #0x758]
0x05F16114: e00315aa  mov x0, x21
0x05F16118: e10313aa  mov x1, x19
0x05F1611C: e2031faa  mov x2, xzr
0x05F16120: 801edf97  bl #0x56ddb20
0x05F16124: e80300aa  mov x8, x0
0x05F16128: a00000b4  cbz x0, #0x5f1613c
0x05F1612C: c10240f9  ldr x1, [x22]
0x05F16130: 090140f9  ldr x9, [x8]
0x05F16134: 3f0101eb  cmp x9, x1
0x05F16138: 81010054  b.ne #0x5f16168
0x05F1613C: e00314aa  mov x0, x20
0x05F16140: e10308aa  mov x1, x8
0x05F16144: e20315aa  mov x2, x21
0x05F16148: fe1b4b97  bl #0x31dd140
0x05F1614C: bf0200eb  cmp x21, x0
0x05F16150: f50300aa  mov x21, x0
0x05F16154: 01feff54  b.ne #0x5f16114
0x05F16158: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F1615C: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F16160: fe0743f8  ldr x30, [sp], #0x30
0x05F16164: c0035fd6  ret
0x05F16168: e00308aa  mov x0, x8
0x05F1616C: b7ab4997  bl #0x3181048

; RVA 0x5F16170 | public void remove_EntitiesCleared(Action value) { }
; bytes=156 sha256=a2776d2108960db89fbd57b099fdc5cb77429c64bedade64218af71208073b89 status=arm64_complete_bound indexed_start=True
0x05F16170: fe0f1df8  str x30, [sp, #-0x30]!
0x05F16174: f65701a9  stp x22, x21, [sp, #0x10]
0x05F16178: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F1617C: 75f00090  adrp x21, #0x7d22000
0x05F16180: a8927139  ldrb w8, [x21, #0xc64]
0x05F16184: f30301aa  mov x19, x1
0x05F16188: f40300aa  mov x20, x0
0x05F1618C: c8000037  tbnz w8, #0, #0x5f161a4
0x05F16190: c0b90090  adrp x0, #0x764e000
0x05F16194: 00ac43f9  ldr x0, [x0, #0x758]
0x05F16198: 20aa4997  bl #0x3180a18
0x05F1619C: 28008052  movz w8, #0x1
0x05F161A0: a8923139  strb w8, [x21, #0xc64]
0x05F161A4: d6b90090  adrp x22, #0x764e000
0x05F161A8: 950e42f8  ldr x21, [x20, #0x20]!
0x05F161AC: d6ae43f9  ldr x22, [x22, #0x758]
0x05F161B0: e00315aa  mov x0, x21
0x05F161B4: e10313aa  mov x1, x19
0x05F161B8: e2031faa  mov x2, xzr
0x05F161BC: d71edf97  bl #0x56ddd18
0x05F161C0: e80300aa  mov x8, x0
0x05F161C4: a00000b4  cbz x0, #0x5f161d8
0x05F161C8: c10240f9  ldr x1, [x22]
0x05F161CC: 090140f9  ldr x9, [x8]
0x05F161D0: 3f0101eb  cmp x9, x1
0x05F161D4: 81010054  b.ne #0x5f16204
0x05F161D8: e00314aa  mov x0, x20
0x05F161DC: e10308aa  mov x1, x8
0x05F161E0: e20315aa  mov x2, x21
0x05F161E4: d71b4b97  bl #0x31dd140
0x05F161E8: bf0200eb  cmp x21, x0
0x05F161EC: f50300aa  mov x21, x0
0x05F161F0: 01feff54  b.ne #0x5f161b0
0x05F161F4: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F161F8: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F161FC: fe0743f8  ldr x30, [sp], #0x30
0x05F16200: c0035fd6  ret
0x05F16204: e00308aa  mov x0, x8
0x05F16208: 90ab4997  bl #0x3181048

; RVA 0x5F1620C | public IEnumerable<Entity> get_Entities() { }
; bytes=8 sha256=c0b9896d6c3d8aacf384c0d0cf5d897e84f621efe31cc89c980be348eb9c6614 status=arm64_complete_bound indexed_start=True
0x05F1620C: 001440f9  ldr x0, [x0, #0x28]
0x05F16210: c0035fd6  ret

; RVA 0x5F16214 | public Entity AddEntity(Entity entity) { }
; bytes=204 sha256=ec6666021bfa2c1d33cfa1ee261465c6a54c9967e98043c0eea17fa98c71f9f0 status=arm64_complete_bound indexed_start=True
0x05F16214: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05F16218: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F1621C: 75f00090  adrp x21, #0x7d22000
0x05F16220: a8967139  ldrb w8, [x21, #0xc65]
0x05F16224: f30301aa  mov x19, x1
0x05F16228: f40300aa  mov x20, x0
0x05F1622C: c8000037  tbnz w8, #0, #0x5f16244
0x05F16230: 60bd00b0  adrp x0, #0x76c3000
0x05F16234: 00ac45f9  ldr x0, [x0, #0xb58]
0x05F16238: f8a94997  bl #0x3180a18
0x05F1623C: 28008052  movz w8, #0x1
0x05F16240: a8963139  strb w8, [x21, #0xc65]
0x05F16244: 801640f9  ldr x0, [x20, #0x28]
0x05F16248: a00400b4  cbz x0, #0x5f162dc
0x05F1624C: 69bd00b0  adrp x9, #0x76c3000
0x05F16250: 29ad45f9  ldr x9, [x9, #0xb58]
0x05F16254: 0a1c40b9  ldr w10, [x0, #0x1c]
0x05F16258: 080840f9  ldr x8, [x0, #0x10]
0x05F1625C: 290140f9  ldr x9, [x9]
0x05F16260: 4a050011  add w10, w10, #1
0x05F16264: 0a1c00b9  str w10, [x0, #0x1c]
0x05F16268: a80300b4  cbz x8, #0x5f162dc
0x05F1626C: 0a1880b9  ldrsw x10, [x0, #0x18]
0x05F16270: 0b1940b9  ldr w11, [x8, #0x18]
0x05F16274: 5f010b6b  cmp w10, w11
0x05F16278: 22010054  b.hs #0x5f1629c
0x05F1627C: 49050011  add w9, w10, #1
0x05F16280: 080d0a8b  add x8, x8, x10, lsl #3
0x05F16284: 091800b9  str w9, [x0, #0x18]
0x05F16288: 130d02f8  str x19, [x8, #0x20]!
0x05F1628C: e00308aa  mov x0, x8
0x05F16290: e10313aa  mov x1, x19
0x05F16294: cca94997  bl #0x31809c4
0x05F16298: 06000014  b #0x5f162b0
0x05F1629C: 281140f9  ldr x8, [x9, #0x20]
0x05F162A0: e10313aa  mov x1, x19
0x05F162A4: 086140f9  ldr x8, [x8, #0xc0]
0x05F162A8: 023940f9  ldr x2, [x8, #0x70]
0x05F162AC: 70b88497  bl #0x404446c
0x05F162B0: 880a40f9  ldr x8, [x20, #0x10]
0x05F162B4: c80000b4  cbz x8, #0x5f162cc
0x05F162B8: 090d40f9  ldr x9, [x8, #0x18]
0x05F162BC: 002140f9  ldr x0, [x8, #0x40]
0x05F162C0: 021540f9  ldr x2, [x8, #0x28]
0x05F162C4: e10313aa  mov x1, x19
0x05F162C8: 20013fd6  blr x9
0x05F162CC: e00313aa  mov x0, x19
0x05F162D0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F162D4: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F162D8: c0035fd6  ret
0x05F162DC: 74aa4997  bl #0x3180cac

; RVA 0x5F162E0 | public bool RemoveEntity(Entity entity) { }
; bytes=136 sha256=a459d15721ee4648f2d7bcb9a87043a5a3557aa212f1db128e962366fc8cdd1d status=arm64_complete_bound indexed_start=True
0x05F162E0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x05F162E4: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F162E8: 75f00090  adrp x21, #0x7d22000
0x05F162EC: a89a7139  ldrb w8, [x21, #0xc66]
0x05F162F0: f30301aa  mov x19, x1
0x05F162F4: f40300aa  mov x20, x0
0x05F162F8: c8000037  tbnz w8, #0, #0x5f16310
0x05F162FC: 60bd00b0  adrp x0, #0x76c3000
0x05F16300: 00b045f9  ldr x0, [x0, #0xb60]
0x05F16304: c5a94997  bl #0x3180a18
0x05F16308: 28008052  movz w8, #0x1
0x05F1630C: a89a3139  strb w8, [x21, #0xc66]
0x05F16310: 801640f9  ldr x0, [x20, #0x28]
0x05F16314: 800200b4  cbz x0, #0x5f16364
0x05F16318: 68bd00b0  adrp x8, #0x76c3000
0x05F1631C: 08b145f9  ldr x8, [x8, #0xb60]
0x05F16320: e10313aa  mov x1, x19
0x05F16324: 020140f9  ldr x2, [x8]
0x05F16328: f4bd8497  bl #0x4045af8
0x05F1632C: 40010036  tbz w0, #0, #0x5f16354
0x05F16330: 880e40f9  ldr x8, [x20, #0x18]
0x05F16334: c80000b4  cbz x8, #0x5f1634c
0x05F16338: 090d40f9  ldr x9, [x8, #0x18]
0x05F1633C: 002140f9  ldr x0, [x8, #0x40]
0x05F16340: 021540f9  ldr x2, [x8, #0x28]
0x05F16344: e10313aa  mov x1, x19
0x05F16348: 20013fd6  blr x9
0x05F1634C: 20008052  movz w0, #0x1
0x05F16350: 02000014  b #0x5f16358
0x05F16354: e0031f2a  mov w0, wzr
0x05F16358: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F1635C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x05F16360: c0035fd6  ret
0x05F16364: 52aa4997  bl #0x3180cac

; RVA 0x5F16368 | public void ClearEntities() { }
; bytes=136 sha256=19a83e09a9346c0dae45981e4cd191e08546701f8e68ff535cd9b70a07969ee8 status=arm64_complete_bound indexed_start=True
0x05F16368: fe0f1ef8  str x30, [sp, #-0x20]!
0x05F1636C: f44f01a9  stp x20, x19, [sp, #0x10]
0x05F16370: 74f00090  adrp x20, #0x7d22000
0x05F16374: 889e7139  ldrb w8, [x20, #0xc67]
0x05F16378: f30300aa  mov x19, x0
0x05F1637C: c8000037  tbnz w8, #0, #0x5f16394
0x05F16380: 60bd00b0  adrp x0, #0x76c3000
0x05F16384: 00b445f9  ldr x0, [x0, #0xb68]
0x05F16388: a4a94997  bl #0x3180a18
0x05F1638C: 28008052  movz w8, #0x1
0x05F16390: 889e3139  strb w8, [x20, #0xc67]
0x05F16394: 681640f9  ldr x8, [x19, #0x28]
0x05F16398: a80200b4  cbz x8, #0x5f163ec
0x05F1639C: 02254329  ldp w2, w9, [x8, #0x18]
0x05F163A0: 29050011  add w9, w9, #1
0x05F163A4: 5f040071  cmp w2, #1
0x05F163A8: 1f250329  stp wzr, w9, [x8, #0x18]
0x05F163AC: ab000054  b.lt #0x5f163c0
0x05F163B0: 000940f9  ldr x0, [x8, #0x10]
0x05F163B4: e1031f2a  mov w1, wzr
0x05F163B8: e3031faa  mov x3, xzr
0x05F163BC: 308ede97  bl #0x56b9c7c
0x05F163C0: 681240f9  ldr x8, [x19, #0x20]
0x05F163C4: e80000b4  cbz x8, #0x5f163e0
0x05F163C8: 020d40f9  ldr x2, [x8, #0x18]
0x05F163CC: 002140f9  ldr x0, [x8, #0x40]
0x05F163D0: 011540f9  ldr x1, [x8, #0x28]
0x05F163D4: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F163D8: fe0742f8  ldr x30, [sp], #0x20
0x05F163DC: 40001fd6  br x2
0x05F163E0: f44f41a9  ldp x20, x19, [sp, #0x10]
0x05F163E4: fe0742f8  ldr x30, [sp], #0x20
0x05F163E8: c0035fd6  ret
0x05F163EC: 30aa4997  bl #0x3180cac

; RVA 0x5F163F0 | public void .ctor() { }
; bytes=136 sha256=a3e2cc606e01d6413527c3ec74b018869bc9f0bcaf2b9abc2b4637924a746d40 status=arm64_complete_bound indexed_start=True
0x05F163F0: fe0f1df8  str x30, [sp, #-0x30]!
0x05F163F4: f65701a9  stp x22, x21, [sp, #0x10]
0x05F163F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x05F163FC: 75f00090  adrp x21, #0x7d22000
0x05F16400: 56bd00d0  adrp x22, #0x76c0000
0x05F16404: 74bd00b0  adrp x20, #0x76c3000
0x05F16408: a8a27139  ldrb w8, [x21, #0xc68]
0x05F1640C: d69e47f9  ldr x22, [x22, #0xf38]
0x05F16410: 94ba45f9  ldr x20, [x20, #0xb70]
0x05F16414: f30300aa  mov x19, x0
0x05F16418: 28010037  tbnz w8, #0, #0x5f1643c
0x05F1641C: 60bd00b0  adrp x0, #0x76c3000
0x05F16420: 00b845f9  ldr x0, [x0, #0xb70]
0x05F16424: 7da94997  bl #0x3180a18
0x05F16428: 40bd00d0  adrp x0, #0x76c0000
0x05F1642C: 009c47f9  ldr x0, [x0, #0xf38]
0x05F16430: 7aa94997  bl #0x3180a18
0x05F16434: 28008052  movz w8, #0x1
0x05F16438: a8a23139  strb w8, [x21, #0xc68]
0x05F1643C: c00240f9  ldr x0, [x22]
0x05F16440: 18aa4997  bl #0x3180ca0
0x05F16444: 810240f9  ldr x1, [x20]
0x05F16448: f40300aa  mov x20, x0
0x05F1644C: fbb58497  bl #0x4043c38
0x05F16450: e00313aa  mov x0, x19
0x05F16454: 148c02f8  str x20, [x0, #0x28]!
0x05F16458: e10314aa  mov x1, x20
0x05F1645C: 5aa94997  bl #0x31809c4
0x05F16460: e00313aa  mov x0, x19
0x05F16464: f44f42a9  ldp x20, x19, [sp, #0x20]
0x05F16468: f65741a9  ldp x22, x21, [sp, #0x10]
0x05F1646C: e1031faa  mov x1, xzr
0x05F16470: fe0743f8  ldr x30, [sp], #0x30
0x05F16474: 6210df17  b #0x56da5fc

