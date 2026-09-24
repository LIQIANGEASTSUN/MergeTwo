; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1016 MergeEngine.ECS.Components.InventoryItemCountComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F7DD4 | public void add_ItemChanged(Action<IMergeItem> value) { }
; bytes=176 sha256=22a7efea71b290ab1b445af5a162f7d936f8036744d5e959b4a7e75567c8a6b5 status=arm64_complete_bound indexed_start=True
0x068F7DD4: fe0f1cf8  str x30, [sp, #-0x40]!
0x068F7DD8: f85f01a9  stp x24, x23, [sp, #0x10]
0x068F7DDC: f65702a9  stp x22, x21, [sp, #0x20]
0x068F7DE0: f44f03a9  stp x20, x19, [sp, #0x30]
0x068F7DE4: 95a100d0  adrp x21, #0x7d29000
0x068F7DE8: a8326139  ldrb w8, [x21, #0x84c]
0x068F7DEC: f30301aa  mov x19, x1
0x068F7DF0: f40300aa  mov x20, x0
0x068F7DF4: c8000037  tbnz w8, #0, #0x68f7e0c
0x068F7DF8: 206f0090  adrp x0, #0x76db000
0x068F7DFC: 001841f9  ldr x0, [x0, #0x230]
0x068F7E00: 06232297  bl #0x3180a18
0x068F7E04: 28008052  movz w8, #0x1
0x068F7E08: a8322139  strb w8, [x21, #0x84c]
0x068F7E0C: 386f0090  adrp x24, #0x76db000
0x068F7E10: 950e42f8  ldr x21, [x20, #0x20]!
0x068F7E14: 181b41f9  ldr x24, [x24, #0x230]
0x068F7E18: e00315aa  mov x0, x21
0x068F7E1C: e10313aa  mov x1, x19
0x068F7E20: e2031faa  mov x2, xzr
0x068F7E24: 3f97b797  bl #0x56ddb20
0x068F7E28: 000100b4  cbz x0, #0x68f7e48
0x068F7E2C: 170340f9  ldr x23, [x24]
0x068F7E30: f60300aa  mov x22, x0
0x068F7E34: e10317aa  mov x1, x23
0x068F7E38: 56232297  bl #0x3180b90
0x068F7E3C: e10300aa  mov x1, x0
0x068F7E40: 600000b5  cbnz x0, #0x68f7e4c
0x068F7E44: 0d000014  b #0x68f7e78
0x068F7E48: e1031faa  mov x1, xzr
0x068F7E4C: e00314aa  mov x0, x20
0x068F7E50: e20315aa  mov x2, x21
0x068F7E54: bb942397  bl #0x31dd140
0x068F7E58: bf0200eb  cmp x21, x0
0x068F7E5C: f50300aa  mov x21, x0
0x068F7E60: c1fdff54  b.ne #0x68f7e18
0x068F7E64: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068F7E68: f65742a9  ldp x22, x21, [sp, #0x20]
0x068F7E6C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068F7E70: fe0744f8  ldr x30, [sp], #0x40
0x068F7E74: c0035fd6  ret
0x068F7E78: e00316aa  mov x0, x22
0x068F7E7C: e10317aa  mov x1, x23
0x068F7E80: 72242297  bl #0x3181048

; RVA 0x68F7E84 | public void remove_ItemChanged(Action<IMergeItem> value) { }
; bytes=176 sha256=6f35cc62bbe51ae936ee1a2ed1c378a7c8bd16743e8b6007c3f7b309181fe592 status=arm64_complete_bound indexed_start=True
0x068F7E84: fe0f1cf8  str x30, [sp, #-0x40]!
0x068F7E88: f85f01a9  stp x24, x23, [sp, #0x10]
0x068F7E8C: f65702a9  stp x22, x21, [sp, #0x20]
0x068F7E90: f44f03a9  stp x20, x19, [sp, #0x30]
0x068F7E94: 95a100d0  adrp x21, #0x7d29000
0x068F7E98: a8366139  ldrb w8, [x21, #0x84d]
0x068F7E9C: f30301aa  mov x19, x1
0x068F7EA0: f40300aa  mov x20, x0
0x068F7EA4: c8000037  tbnz w8, #0, #0x68f7ebc
0x068F7EA8: 206f0090  adrp x0, #0x76db000
0x068F7EAC: 001841f9  ldr x0, [x0, #0x230]
0x068F7EB0: da222297  bl #0x3180a18
0x068F7EB4: 28008052  movz w8, #0x1
0x068F7EB8: a8362139  strb w8, [x21, #0x84d]
0x068F7EBC: 386f0090  adrp x24, #0x76db000
0x068F7EC0: 950e42f8  ldr x21, [x20, #0x20]!
0x068F7EC4: 181b41f9  ldr x24, [x24, #0x230]
0x068F7EC8: e00315aa  mov x0, x21
0x068F7ECC: e10313aa  mov x1, x19
0x068F7ED0: e2031faa  mov x2, xzr
0x068F7ED4: 9197b797  bl #0x56ddd18
0x068F7ED8: 000100b4  cbz x0, #0x68f7ef8
0x068F7EDC: 170340f9  ldr x23, [x24]
0x068F7EE0: f60300aa  mov x22, x0
0x068F7EE4: e10317aa  mov x1, x23
0x068F7EE8: 2a232297  bl #0x3180b90
0x068F7EEC: e10300aa  mov x1, x0
0x068F7EF0: 600000b5  cbnz x0, #0x68f7efc
0x068F7EF4: 0d000014  b #0x68f7f28
0x068F7EF8: e1031faa  mov x1, xzr
0x068F7EFC: e00314aa  mov x0, x20
0x068F7F00: e20315aa  mov x2, x21
0x068F7F04: 8f942397  bl #0x31dd140
0x068F7F08: bf0200eb  cmp x21, x0
0x068F7F0C: f50300aa  mov x21, x0
0x068F7F10: c1fdff54  b.ne #0x68f7ec8
0x068F7F14: f44f43a9  ldp x20, x19, [sp, #0x30]
0x068F7F18: f65742a9  ldp x22, x21, [sp, #0x20]
0x068F7F1C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x068F7F20: fe0744f8  ldr x30, [sp], #0x40
0x068F7F24: c0035fd6  ret
0x068F7F28: e00316aa  mov x0, x22
0x068F7F2C: e10317aa  mov x1, x23
0x068F7F30: 46242297  bl #0x3181048

; RVA 0x68F7F34 | public void .ctor(Entity entity) { }
; bytes=156 sha256=ea6da656fc7cda0a20b8c8d216a1b1c067dc912bc31f1f8289b380d513259cbe status=arm64_complete_bound indexed_start=True
0x068F7F34: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F7F38: f65701a9  stp x22, x21, [sp, #0x10]
0x068F7F3C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7F40: 96a100d0  adrp x22, #0x7d29000
0x068F7F44: d76f00d0  adrp x23, #0x76f1000
0x068F7F48: d56f00d0  adrp x21, #0x76f1000
0x068F7F4C: c83a6139  ldrb w8, [x22, #0x84e]
0x068F7F50: f7f645f9  ldr x23, [x23, #0xbe8]
0x068F7F54: b5f245f9  ldr x21, [x21, #0xbe0]
0x068F7F58: f30301aa  mov x19, x1
0x068F7F5C: f40300aa  mov x20, x0
0x068F7F60: 28010037  tbnz w8, #0, #0x68f7f84
0x068F7F64: c06f00d0  adrp x0, #0x76f1000
0x068F7F68: 00f045f9  ldr x0, [x0, #0xbe0]
0x068F7F6C: ab222297  bl #0x3180a18
0x068F7F70: c06f00d0  adrp x0, #0x76f1000
0x068F7F74: 00f445f9  ldr x0, [x0, #0xbe8]
0x068F7F78: a8222297  bl #0x3180a18
0x068F7F7C: 28008052  movz w8, #0x1
0x068F7F80: c83a2139  strb w8, [x22, #0x84e]
0x068F7F84: e00240f9  ldr x0, [x23]
0x068F7F88: 46232297  bl #0x3180ca0
0x068F7F8C: a10240f9  ldr x1, [x21]
0x068F7F90: f50300aa  mov x21, x0
0x068F7F94: 1fe69697  bl #0x4eb1810
0x068F7F98: e00314aa  mov x0, x20
0x068F7F9C: 158c02f8  str x21, [x0, #0x28]!
0x068F7FA0: e10315aa  mov x1, x21
0x068F7FA4: 88222297  bl #0x31809c4
0x068F7FA8: e00314aa  mov x0, x20
0x068F7FAC: e1031faa  mov x1, xzr
0x068F7FB0: 9389b797  bl #0x56da5fc
0x068F7FB4: 930e01f8  str x19, [x20, #0x10]!
0x068F7FB8: e00314aa  mov x0, x20
0x068F7FBC: e10313aa  mov x1, x19
0x068F7FC0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F7FC4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7FC8: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F7FCC: 7e222217  b #0x31809c4

; RVA 0x68F7FD0 | public void AddItem(IMergeItem mergeItem) { }
; bytes=272 sha256=70fcf132bcf70c462d8b30163157fe74ed2438d3725ca42ba758acaaf9374f7d status=arm64_complete_bound indexed_start=True
0x068F7FD0: fe0f1df8  str x30, [sp, #-0x30]!
0x068F7FD4: f65701a9  stp x22, x21, [sp, #0x10]
0x068F7FD8: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7FDC: 95a100d0  adrp x21, #0x7d29000
0x068F7FE0: a83e6139  ldrb w8, [x21, #0x84f]
0x068F7FE4: f30301aa  mov x19, x1
0x068F7FE8: f40300aa  mov x20, x0
0x068F7FEC: e8010037  tbnz w8, #0, #0x68f8028
0x068F7FF0: c06f00d0  adrp x0, #0x76f1000
0x068F7FF4: 002846f9  ldr x0, [x0, #0xc50]
0x068F7FF8: 88222297  bl #0x3180a18
0x068F7FFC: c06f00d0  adrp x0, #0x76f1000
0x068F8000: 002c46f9  ldr x0, [x0, #0xc58]
0x068F8004: 85222297  bl #0x3180a18
0x068F8008: c06f00b0  adrp x0, #0x76f1000
0x068F800C: 003046f9  ldr x0, [x0, #0xc60]
0x068F8010: 82222297  bl #0x3180a18
0x068F8014: c06f00b0  adrp x0, #0x76f1000
0x068F8018: 003446f9  ldr x0, [x0, #0xc68]
0x068F801C: 7f222297  bl #0x3180a18
0x068F8020: 28008052  movz w8, #0x1
0x068F8024: a83e2139  strb w8, [x21, #0x84f]
0x068F8028: 801640f9  ldr x0, [x20, #0x28]
0x068F802C: 800500b4  cbz x0, #0x68f80dc
0x068F8030: c86f00b0  adrp x8, #0x76f1000
0x068F8034: 082d46f9  ldr x8, [x8, #0xc58]
0x068F8038: e10313aa  mov x1, x19
0x068F803C: 020140f9  ldr x2, [x8]
0x068F8040: e8e99697  bl #0x4eb27e0
0x068F8044: 20010037  tbnz w0, #0, #0x68f8068
0x068F8048: 801640f9  ldr x0, [x20, #0x28]
0x068F804C: 800400b4  cbz x0, #0x68f80dc
0x068F8050: c86f00b0  adrp x8, #0x76f1000
0x068F8054: 082946f9  ldr x8, [x8, #0xc50]
0x068F8058: e10313aa  mov x1, x19
0x068F805C: e2031f2a  mov w2, wzr
0x068F8060: 030140f9  ldr x3, [x8]
0x068F8064: 62e99697  bl #0x4eb25ec
0x068F8068: 951640f9  ldr x21, [x20, #0x28]
0x068F806C: 950300b4  cbz x21, #0x68f80dc
0x068F8070: c86f00b0  adrp x8, #0x76f1000
0x068F8074: 083146f9  ldr x8, [x8, #0xc60]
0x068F8078: d66f00b0  adrp x22, #0x76f1000
0x068F807C: e00315aa  mov x0, x21
0x068F8080: e10313aa  mov x1, x19
0x068F8084: 020140f9  ldr x2, [x8]
0x068F8088: d63646f9  ldr x22, [x22, #0xc68]
0x068F808C: 38e99697  bl #0x4eb256c
0x068F8090: c30240f9  ldr x3, [x22]
0x068F8094: 02040011  add w2, w0, #1
0x068F8098: e00315aa  mov x0, x21
0x068F809C: e10313aa  mov x1, x19
0x068F80A0: 4ee99697  bl #0x4eb25d8
0x068F80A4: 881240f9  ldr x8, [x20, #0x20]
0x068F80A8: 280100b4  cbz x8, #0x68f80cc
0x068F80AC: 030d40f9  ldr x3, [x8, #0x18]
0x068F80B0: 002140f9  ldr x0, [x8, #0x40]
0x068F80B4: 021540f9  ldr x2, [x8, #0x28]
0x068F80B8: e10313aa  mov x1, x19
0x068F80BC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F80C0: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F80C4: fe0743f8  ldr x30, [sp], #0x30
0x068F80C8: 60001fd6  br x3
0x068F80CC: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F80D0: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F80D4: fe0743f8  ldr x30, [sp], #0x30
0x068F80D8: c0035fd6  ret
0x068F80DC: f4222297  bl #0x3180cac

; RVA 0x68F80FC | public void RemoveItem(IMergeItem mergeItem) { }
; bytes=184 sha256=9d2e77b8b8f4e269f3e021f90b53a632a803e03d2d9fa23e7f9d36f1b8a8f806 status=arm64_complete_bound indexed_start=True
0x068F80FC: fe0f1df8  str x30, [sp, #-0x30]!
0x068F8100: f65701a9  stp x22, x21, [sp, #0x10]
0x068F8104: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F8108: 95a100b0  adrp x21, #0x7d29000
0x068F810C: a8426139  ldrb w8, [x21, #0x850]
0x068F8110: f30301aa  mov x19, x1
0x068F8114: f40300aa  mov x20, x0
0x068F8118: 28010037  tbnz w8, #0, #0x68f813c
0x068F811C: c06f00b0  adrp x0, #0x76f1000
0x068F8120: 003046f9  ldr x0, [x0, #0xc60]
0x068F8124: 3d222297  bl #0x3180a18
0x068F8128: c06f00b0  adrp x0, #0x76f1000
0x068F812C: 003446f9  ldr x0, [x0, #0xc68]
0x068F8130: 3a222297  bl #0x3180a18
0x068F8134: 28008052  movz w8, #0x1
0x068F8138: a8422139  strb w8, [x21, #0x850]
0x068F813C: 951640f9  ldr x21, [x20, #0x28]
0x068F8140: 950300b4  cbz x21, #0x68f81b0
0x068F8144: c86f00b0  adrp x8, #0x76f1000
0x068F8148: 083146f9  ldr x8, [x8, #0xc60]
0x068F814C: d66f00b0  adrp x22, #0x76f1000
0x068F8150: e00315aa  mov x0, x21
0x068F8154: e10313aa  mov x1, x19
0x068F8158: 020140f9  ldr x2, [x8]
0x068F815C: d63646f9  ldr x22, [x22, #0xc68]
0x068F8160: 03e99697  bl #0x4eb256c
0x068F8164: c30240f9  ldr x3, [x22]
0x068F8168: 02040051  sub w2, w0, #1
0x068F816C: e00315aa  mov x0, x21
0x068F8170: e10313aa  mov x1, x19
0x068F8174: 19e99697  bl #0x4eb25d8
0x068F8178: 881240f9  ldr x8, [x20, #0x20]
0x068F817C: 280100b4  cbz x8, #0x68f81a0
0x068F8180: 030d40f9  ldr x3, [x8, #0x18]
0x068F8184: 002140f9  ldr x0, [x8, #0x40]
0x068F8188: 021540f9  ldr x2, [x8, #0x28]
0x068F818C: e10313aa  mov x1, x19
0x068F8190: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F8194: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F8198: fe0743f8  ldr x30, [sp], #0x30
0x068F819C: 60001fd6  br x3
0x068F81A0: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F81A4: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F81A8: fe0743f8  ldr x30, [sp], #0x30
0x068F81AC: c0035fd6  ret
0x068F81B0: bf222297  bl #0x3180cac

; RVA 0x68F81B4 | public int GetItemInInventoryCount(IMergeItem mergeItem) { }
; bytes=112 sha256=f47d45658a8d1c27a09c9623776d74cb44e3f0175f5df874b77914f7573a6a3d status=arm64_complete_bound indexed_start=True
0x068F81B4: ffc300d1  sub sp, sp, #0x30
0x068F81B8: fe5701a9  stp x30, x21, [sp, #0x10]
0x068F81BC: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F81C0: 95a100b0  adrp x21, #0x7d29000
0x068F81C4: a8466139  ldrb w8, [x21, #0x851]
0x068F81C8: f30301aa  mov x19, x1
0x068F81CC: f40300aa  mov x20, x0
0x068F81D0: c8000037  tbnz w8, #0, #0x68f81e8
0x068F81D4: 80700090  adrp x0, #0x7708000
0x068F81D8: 003c40f9  ldr x0, [x0, #0x78]
0x068F81DC: 0f222297  bl #0x3180a18
0x068F81E0: 28008052  movz w8, #0x1
0x068F81E4: a8462139  strb w8, [x21, #0x851]
0x068F81E8: ff0f00b9  str wzr, [sp, #0xc]
0x068F81EC: 801640f9  ldr x0, [x20, #0x28]
0x068F81F0: 800100b4  cbz x0, #0x68f8220
0x068F81F4: 88700090  adrp x8, #0x7708000
0x068F81F8: 083d40f9  ldr x8, [x8, #0x78]
0x068F81FC: e2330091  add x2, sp, #0xc
0x068F8200: e10313aa  mov x1, x19
0x068F8204: 030140f9  ldr x3, [x8]
0x068F8208: b1ef9697  bl #0x4eb40cc
0x068F820C: e00f40b9  ldr w0, [sp, #0xc]
0x068F8210: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F8214: fe5741a9  ldp x30, x21, [sp, #0x10]
0x068F8218: ffc30091  add sp, sp, #0x30
0x068F821C: c0035fd6  ret
0x068F8220: a3222297  bl #0x3180cac

; RVA 0x68F80E0 | private void InvokeChanged(IMergeItem mergeItem) { }
; bytes=28 sha256=d5672020b245f5cfcf949a5fc60681f62b2bf598f36725f8efaf02684719a1c2 status=arm64_complete_bound indexed_start=True
0x068F80E0: 081040f9  ldr x8, [x0, #0x20]
0x068F80E4: a80000b4  cbz x8, #0x68f80f8
0x068F80E8: 030d40f9  ldr x3, [x8, #0x18]
0x068F80EC: 002140f9  ldr x0, [x8, #0x40]
0x068F80F0: 021540f9  ldr x2, [x8, #0x28]
0x068F80F4: 60001fd6  br x3
0x068F80F8: c0035fd6  ret

