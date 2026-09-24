; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 1008 MergeEngine.ECS.Components.CounterComponent
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x68F707C | public void .ctor(Entity entity) { }
; bytes=156 sha256=a69667801e08e0d29c1d587ab869a1dd8b6f3c6cc725be371266794304324b02 status=arm64_complete_bound indexed_start=True
0x068F707C: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x068F7080: f65701a9  stp x22, x21, [sp, #0x10]
0x068F7084: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7088: 96a100d0  adrp x22, #0x7d29000
0x068F708C: 376c00f0  adrp x23, #0x767e000
0x068F7090: 356c00f0  adrp x21, #0x767e000
0x068F7094: c8f66039  ldrb w8, [x22, #0x83d]
0x068F7098: f7e645f9  ldr x23, [x23, #0xbc8]
0x068F709C: b5da45f9  ldr x21, [x21, #0xbb0]
0x068F70A0: f30301aa  mov x19, x1
0x068F70A4: f40300aa  mov x20, x0
0x068F70A8: 28010037  tbnz w8, #0, #0x68f70cc
0x068F70AC: 206c00f0  adrp x0, #0x767e000
0x068F70B0: 00d845f9  ldr x0, [x0, #0xbb0]
0x068F70B4: 59262297  bl #0x3180a18
0x068F70B8: 206c00f0  adrp x0, #0x767e000
0x068F70BC: 00e445f9  ldr x0, [x0, #0xbc8]
0x068F70C0: 56262297  bl #0x3180a18
0x068F70C4: 28008052  movz w8, #0x1
0x068F70C8: c8f62039  strb w8, [x22, #0x83d]
0x068F70CC: e00240f9  ldr x0, [x23]
0x068F70D0: f4262297  bl #0x3180ca0
0x068F70D4: a10240f9  ldr x1, [x21]
0x068F70D8: f50300aa  mov x21, x0
0x068F70DC: 13cf9497  bl #0x4e2ad28
0x068F70E0: e00314aa  mov x0, x20
0x068F70E4: 150c02f8  str x21, [x0, #0x20]!
0x068F70E8: e10315aa  mov x1, x21
0x068F70EC: 36262297  bl #0x31809c4
0x068F70F0: e00314aa  mov x0, x20
0x068F70F4: e1031faa  mov x1, xzr
0x068F70F8: 418db797  bl #0x56da5fc
0x068F70FC: 930e01f8  str x19, [x20, #0x10]!
0x068F7100: e00314aa  mov x0, x20
0x068F7104: e10313aa  mov x1, x19
0x068F7108: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F710C: f65741a9  ldp x22, x21, [sp, #0x10]
0x068F7110: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x068F7114: 2c262217  b #0x31809c4

; RVA 0x68F7148 | public void Increment(int id = 0) { }
; bytes=284 sha256=5c53cb9904f230dc2c69c2f8db0c469ce1a79e8464af46df5d25f64efbb23524 status=arm64_complete_bound indexed_start=True
0x068F7148: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x068F714C: f44f01a9  stp x20, x19, [sp, #0x10]
0x068F7150: 95a100d0  adrp x21, #0x7d29000
0x068F7154: a8fa6039  ldrb w8, [x21, #0x83e]
0x068F7158: f303012a  mov w19, w1
0x068F715C: f40300aa  mov x20, x0
0x068F7160: 48020037  tbnz w8, #0, #0x68f71a8
0x068F7164: 607100f0  adrp x0, #0x7726000
0x068F7168: 00c441f9  ldr x0, [x0, #0x388]
0x068F716C: 2b262297  bl #0x3180a18
0x068F7170: 206c00f0  adrp x0, #0x767e000
0x068F7174: 00d845f9  ldr x0, [x0, #0xbb0]
0x068F7178: 28262297  bl #0x3180a18
0x068F717C: 206c00b0  adrp x0, #0x767c000
0x068F7180: 002c41f9  ldr x0, [x0, #0x258]
0x068F7184: 25262297  bl #0x3180a18
0x068F7188: 006c00f0  adrp x0, #0x767a000
0x068F718C: 000046f9  ldr x0, [x0, #0xc00]
0x068F7190: 22262297  bl #0x3180a18
0x068F7194: 206c00f0  adrp x0, #0x767e000
0x068F7198: 00e445f9  ldr x0, [x0, #0xbc8]
0x068F719C: 1f262297  bl #0x3180a18
0x068F71A0: 28008052  movz w8, #0x1
0x068F71A4: a8fa2039  strb w8, [x21, #0x83e]
0x068F71A8: 800e42f8  ldr x0, [x20, #0x20]!
0x068F71AC: 000200b5  cbnz x0, #0x68f71ec
0x068F71B0: 286c00f0  adrp x8, #0x767e000
0x068F71B4: 08e545f9  ldr x8, [x8, #0xbc8]
0x068F71B8: 000140f9  ldr x0, [x8]
0x068F71BC: b9262297  bl #0x3180ca0
0x068F71C0: 286c00f0  adrp x8, #0x767e000
0x068F71C4: 08d945f9  ldr x8, [x8, #0xbb0]
0x068F71C8: f50300aa  mov x21, x0
0x068F71CC: 010140f9  ldr x1, [x8]
0x068F71D0: d6ce9497  bl #0x4e2ad28
0x068F71D4: e00314aa  mov x0, x20
0x068F71D8: e10315aa  mov x1, x21
0x068F71DC: 950200f9  str x21, [x20]
0x068F71E0: f9252297  bl #0x31809c4
0x068F71E4: 800240f9  ldr x0, [x20]
0x068F71E8: c00300b4  cbz x0, #0x68f7260
0x068F71EC: 687100f0  adrp x8, #0x7726000
0x068F71F0: 08c541f9  ldr x8, [x8, #0x388]
0x068F71F4: 156c00f0  adrp x21, #0x767a000
0x068F71F8: e103132a  mov w1, w19
0x068F71FC: 020140f9  ldr x2, [x8]
0x068F7200: b50246f9  ldr x21, [x21, #0xc00]
0x068F7204: bdd29497  bl #0x4e2bcf8
0x068F7208: e0000037  tbnz w0, #0, #0x68f7224
0x068F720C: 800240f9  ldr x0, [x20]
0x068F7210: 800200b4  cbz x0, #0x68f7260
0x068F7214: a30240f9  ldr x3, [x21]
0x068F7218: e103132a  mov w1, w19
0x068F721C: e2031f2a  mov w2, wzr
0x068F7220: 36d29497  bl #0x4e2baf8
0x068F7224: 940240f9  ldr x20, [x20]
0x068F7228: d40100b4  cbz x20, #0x68f7260
0x068F722C: 286c00b0  adrp x8, #0x767c000
0x068F7230: 082d41f9  ldr x8, [x8, #0x258]
0x068F7234: e00314aa  mov x0, x20
0x068F7238: e103132a  mov w1, w19
0x068F723C: 020140f9  ldr x2, [x8]
0x068F7240: 0cd29497  bl #0x4e2ba70
0x068F7244: a30240f9  ldr x3, [x21]
0x068F7248: 02040011  add w2, w0, #1
0x068F724C: e00314aa  mov x0, x20
0x068F7250: e103132a  mov w1, w19
0x068F7254: f44f41a9  ldp x20, x19, [sp, #0x10]
0x068F7258: fe57c2a8  ldp x30, x21, [sp], #0x20
0x068F725C: 27d29417  b #0x4e2baf8
0x068F7260: 93262297  bl #0x3180cac

; RVA 0x68F7264 | public int GetCounter(int id = 0) { }
; bytes=116 sha256=f4bd89a52f9a5931b669112057f44284d08e5286cbd5efd26ed4567e5bbdbb64 status=arm64_complete_bound indexed_start=True
0x068F7264: ffc300d1  sub sp, sp, #0x30
0x068F7268: fe5701a9  stp x30, x21, [sp, #0x10]
0x068F726C: f44f02a9  stp x20, x19, [sp, #0x20]
0x068F7270: 95a100d0  adrp x21, #0x7d29000
0x068F7274: a8fe6039  ldrb w8, [x21, #0x83f]
0x068F7278: f303012a  mov w19, w1
0x068F727C: f40300aa  mov x20, x0
0x068F7280: c8000037  tbnz w8, #0, #0x68f7298
0x068F7284: 206c00f0  adrp x0, #0x767e000
0x068F7288: 00e845f9  ldr x0, [x0, #0xbd0]
0x068F728C: e3252297  bl #0x3180a18
0x068F7290: 28008052  movz w8, #0x1
0x068F7294: a8fe2039  strb w8, [x21, #0x83f]
0x068F7298: ff0f00b9  str wzr, [sp, #0xc]
0x068F729C: 801240f9  ldr x0, [x20, #0x20]
0x068F72A0: 400100b4  cbz x0, #0x68f72c8
0x068F72A4: 286c00f0  adrp x8, #0x767e000
0x068F72A8: 08e945f9  ldr x8, [x8, #0xbd0]
0x068F72AC: e2330091  add x2, sp, #0xc
0x068F72B0: e103132a  mov w1, w19
0x068F72B4: 030140f9  ldr x3, [x8]
0x068F72B8: 79d89497  bl #0x4e2d49c
0x068F72BC: e80f40b9  ldr w8, [sp, #0xc]
0x068F72C0: 1f000072  tst w0, #1
0x068F72C4: 00119f1a  csel w0, w8, wzr, ne
0x068F72C8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x068F72CC: fe5741a9  ldp x30, x21, [sp, #0x10]
0x068F72D0: ffc30091  add sp, sp, #0x30
0x068F72D4: c0035fd6  ret

