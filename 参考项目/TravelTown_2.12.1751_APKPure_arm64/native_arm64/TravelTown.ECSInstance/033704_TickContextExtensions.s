; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33704 ContextualizedECS.Context.TickContextExtensions
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC61EC | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__o target, const MethodInfo_3DC61EC* method);
; bytes=324 sha256=50970cd4ea1369f1a71cccec53ec999d3706d1c35aa866cc458d43f6c5572aeb status=arm64_complete_bound indexed_start=True
0x03DC61EC: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC61F0: fb0b00f9  str x27, [sp, #0x10]
0x03DC61F4: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC61F8: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC61FC: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC6200: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC6204: fd030091  mov x29, sp
0x03DC6208: ff4300d1  sub sp, sp, #0x10
0x03DC620C: 5ad03bd5  mrs x26, tpidr_el0
0x03DC6210: 481740f9  ldr x8, [x26, #0x28]
0x03DC6214: f30301aa  mov x19, x1
0x03DC6218: f50300aa  mov x21, x0
0x03DC621C: a8831ff8  stur x8, [x29, #-8]
0x03DC6220: 3b1c40f9  ldr x27, [x1, #0x38]
0x03DC6224: 9b0000b5  cbnz x27, #0x3dc6234
0x03DC6228: e00313aa  mov x0, x19
0x03DC622C: 9341ce97  bl #0x3156878
0x03DC6230: 7b1e40f9  ldr x27, [x19, #0x38]
0x03DC6234: 682740a9  ldp x8, x9, [x27]
0x03DC6238: 38fd40b9  ldr w24, [x9, #0xfc]
0x03DC623C: 17fd40b9  ldr w23, [x8, #0xfc]
0x03DC6240: e8030091  mov x8, sp
0x03DC6244: 093f0091  add x9, x24, #0xf
0x03DC6248: 29717c92  and x9, x9, #0x1fffffff0
0x03DC624C: 140109cb  sub x20, x8, x9
0x03DC6250: 9f020091  mov sp, x20
0x03DC6254: e93e0091  add x9, x23, #0xf
0x03DC6258: e8030091  mov x8, sp
0x03DC625C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6260: 160109cb  sub x22, x8, x9
0x03DC6264: df020091  mov sp, x22
0x03DC6268: e8030091  mov x8, sp
0x03DC626C: 190109cb  sub x25, x8, x9
0x03DC6270: 3f030091  mov sp, x25
0x03DC6274: e00316aa  mov x0, x22
0x03DC6278: e10315aa  mov x1, x21
0x03DC627C: e20317aa  mov x2, x23
0x03DC6280: bc21d094  bl #0x71ce970
0x03DC6284: 680340f9  ldr x8, [x27]
0x03DC6288: e00316aa  mov x0, x22
0x03DC628C: 014140f9  ldr x1, [x8, #0x80]
0x03DC6290: eae9ce97  bl #0x3180a38
0x03DC6294: 160040f9  ldr x22, [x0]
0x03DC6298: e00319aa  mov x0, x25
0x03DC629C: e10315aa  mov x1, x21
0x03DC62A0: e20317aa  mov x2, x23
0x03DC62A4: b321d094  bl #0x71ce970
0x03DC62A8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC62AC: e00319aa  mov x0, x25
0x03DC62B0: 080140f9  ldr x8, [x8]
0x03DC62B4: 084140f9  ldr x8, [x8, #0x80]
0x03DC62B8: 01810091  add x1, x8, #0x20
0x03DC62BC: dfe9ce97  bl #0x3180a38
0x03DC62C0: e10300aa  mov x1, x0
0x03DC62C4: e00314aa  mov x0, x20
0x03DC62C8: e20318aa  mov x2, x24
0x03DC62CC: a921d094  bl #0x71ce970
0x03DC62D0: d60200b4  cbz x22, #0x3dc6328
0x03DC62D4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC62D8: a34300d1  sub x3, x29, #0x10
0x03DC62DC: e20316aa  mov x2, x22
0x03DC62E0: e40314aa  mov x4, x20
0x03DC62E4: 010940f9  ldr x1, [x8, #0x10]
0x03DC62E8: 200040f9  ldr x0, [x1]
0x03DC62EC: b4031ff8  stur x20, [x29, #-0x10]
0x03DC62F0: 280840f9  ldr x8, [x1, #0x10]
0x03DC62F4: 00013fd6  blr x8
0x03DC62F8: 481740f9  ldr x8, [x26, #0x28]
0x03DC62FC: a9835ff8  ldur x9, [x29, #-8]
0x03DC6300: 1f0109eb  cmp x8, x9
0x03DC6304: 41010054  b.ne #0x3dc632c
0x03DC6308: bf030091  mov sp, x29
0x03DC630C: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC6310: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC6314: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC6318: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC631C: fb0b40f9  ldr x27, [sp, #0x10]
0x03DC6320: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC6324: c0035fd6  ret
0x03DC6328: 61eace97  bl #0x3180cac
0x03DC632C: 9921d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6330 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<BoardTilePositionComponent, TimeCycleComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_BoardTilePositionComponent__TimeCycleComponent_ (System_ValueTuple_Entity__T1__T2__o target, const MethodInfo_3DC6330* method);
; bytes=172 sha256=86fb9cf33e45a3f4b28c3980d07e80a29eec887764d8429b89d15f0f11f4b4ae status=arm64_complete_bound indexed_start=True
0x03DC6330: ffc304d1  sub sp, sp, #0x130
0x03DC6334: fd7b10a9  stp x29, x30, [sp, #0x100]
0x03DC6338: f65711a9  stp x22, x21, [sp, #0x110]
0x03DC633C: f44f12a9  stp x20, x19, [sp, #0x120]
0x03DC6340: 281c40f9  ldr x8, [x1, #0x38]
0x03DC6344: f30301aa  mov x19, x1
0x03DC6348: f50300aa  mov x21, x0
0x03DC634C: 680000b5  cbnz x8, #0x3dc6358
0x03DC6350: e00313aa  mov x0, x19
0x03DC6354: 4941ce97  bl #0x3156878
0x03DC6358: a00240f9  ldr x0, [x21]
0x03DC635C: e00300b4  cbz x0, #0x3dc63d8
0x03DC6360: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6364: a10a40b9  ldr w1, [x21, #8]
0x03DC6368: 020940f9  ldr x2, [x8, #0x10]
0x03DC636C: ab58f997  bl #0x3c1c618
0x03DC6370: b40240f9  ldr x20, [x21]
0x03DC6374: e0430191  add x0, sp, #0x50
0x03DC6378: 020c8052  movz w2, #0x60
0x03DC637C: e10315aa  mov x1, x21
0x03DC6380: f6430191  add x22, sp, #0x50
0x03DC6384: 7b21d094  bl #0x71ce970
0x03DC6388: c1420091  add x1, x22, #0x10
0x03DC638C: e0030091  mov x0, sp
0x03DC6390: 020a8052  movz w2, #0x50
0x03DC6394: 7721d094  bl #0x71ce970
0x03DC6398: 140200b4  cbz x20, #0x3dc63d8
0x03DC639C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC63A0: e0c30291  add x0, sp, #0xb0
0x03DC63A4: e1030091  mov x1, sp
0x03DC63A8: 020a8052  movz w2, #0x50
0x03DC63AC: 131140f9  ldr x19, [x8, #0x20]
0x03DC63B0: 7021d094  bl #0x71ce970
0x03DC63B4: e1c30291  add x1, sp, #0xb0
0x03DC63B8: e00314aa  mov x0, x20
0x03DC63BC: e20313aa  mov x2, x19
0x03DC63C0: 425ef997  bl #0x3c1dcc8
0x03DC63C4: f44f52a9  ldp x20, x19, [sp, #0x120]
0x03DC63C8: f65751a9  ldp x22, x21, [sp, #0x110]
0x03DC63CC: fd7b50a9  ldp x29, x30, [sp, #0x100]
0x03DC63D0: ffc30491  add sp, sp, #0x130
0x03DC63D4: c0035fd6  ret
0x03DC63D8: 35eace97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC63DC | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<BoardTilePositionComponent, TimeLockComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_BoardTilePositionComponent__TimeLockComponent_ (System_ValueTuple_Entity__T1__T2__o target, const MethodInfo_3DC63DC* method);
; bytes=156 sha256=b5209002cbdb6453171d5388e3c9b11d2d00798b482911ea7d68833e3e448353 status=arm64_complete_bound indexed_start=True
0x03DC63DC: ff0303d1  sub sp, sp, #0xc0
0x03DC63E0: fe5300f9  str x30, [sp, #0xa0]
0x03DC63E4: f44f0ba9  stp x20, x19, [sp, #0xb0]
0x03DC63E8: 281c40f9  ldr x8, [x1, #0x38]
0x03DC63EC: f30301aa  mov x19, x1
0x03DC63F0: f40300aa  mov x20, x0
0x03DC63F4: 680000b5  cbnz x8, #0x3dc6400
0x03DC63F8: e00313aa  mov x0, x19
0x03DC63FC: 1f41ce97  bl #0x3156878
0x03DC6400: 800240f9  ldr x0, [x20]
0x03DC6404: 800300b4  cbz x0, #0x3dc6474
0x03DC6408: 681e40f9  ldr x8, [x19, #0x38]
0x03DC640C: 810a40b9  ldr w1, [x20, #8]
0x03DC6410: 020940f9  ldr x2, [x8, #0x10]
0x03DC6414: 8158f997  bl #0x3c1c618
0x03DC6418: 828240ad  ldp q2, q0, [x20, #0x10]
0x03DC641C: 881a40f9  ldr x8, [x20, #0x30]
0x03DC6420: 8102c03d  ldr q1, [x20]
0x03DC6424: 800240f9  ldr x0, [x20]
0x03DC6428: e20302ad  stp q2, q0, [sp, #0x40]
0x03DC642C: e00b42ad  ldp q0, q2, [sp, #0x40]
0x03DC6430: e83300f9  str x8, [sp, #0x60]
0x03DC6434: e10f803d  str q1, [sp, #0x30]
0x03DC6438: e81300f9  str x8, [sp, #0x20]
0x03DC643C: e00b00ad  stp q0, q2, [sp]
0x03DC6440: a00100b4  cbz x0, #0x3dc6474
0x03DC6444: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6448: e00740ad  ldp q0, q1, [sp]
0x03DC644C: e91340f9  ldr x9, [sp, #0x20]
0x03DC6450: e1c30191  add x1, sp, #0x70
0x03DC6454: 021140f9  ldr x2, [x8, #0x20]
0x03DC6458: e08703ad  stp q0, q1, [sp, #0x70]
0x03DC645C: e94b00f9  str x9, [sp, #0x90]
0x03DC6460: ec5ef997  bl #0x3c1e010
0x03DC6464: f44f4ba9  ldp x20, x19, [sp, #0xb0]
0x03DC6468: fe5340f9  ldr x30, [sp, #0xa0]
0x03DC646C: ff030391  add sp, sp, #0xc0
0x03DC6470: c0035fd6  ret
0x03DC6474: 0eeace97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6478 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__o target, const MethodInfo_3DC6478* method);
; bytes=524 sha256=2f6d5da510d43563e684b793533381dbeb0af42da7cdd12649077624d815f434 status=arm64_complete_bound indexed_start=True
0x03DC6478: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC647C: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC6480: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC6484: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC6488: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC648C: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC6490: fd030091  mov x29, sp
0x03DC6494: ffc300d1  sub sp, sp, #0x30
0x03DC6498: 48d03bd5  mrs x8, tpidr_el0
0x03DC649C: a8831df8  stur x8, [x29, #-0x28]
0x03DC64A0: 081540f9  ldr x8, [x8, #0x28]
0x03DC64A4: f30301aa  mov x19, x1
0x03DC64A8: f50300aa  mov x21, x0
0x03DC64AC: a8831ff8  stur x8, [x29, #-8]
0x03DC64B0: 341c40f9  ldr x20, [x1, #0x38]
0x03DC64B4: 940000b5  cbnz x20, #0x3dc64c4
0x03DC64B8: e00313aa  mov x0, x19
0x03DC64BC: ef40ce97  bl #0x3156878
0x03DC64C0: 741e40f9  ldr x20, [x19, #0x38]
0x03DC64C4: 882640a9  ldp x8, x9, [x20]
0x03DC64C8: 8a0e40f9  ldr x10, [x20, #0x18]
0x03DC64CC: 3bfd40b9  ldr w27, [x9, #0xfc]
0x03DC64D0: 17fd40b9  ldr w23, [x8, #0xfc]
0x03DC64D4: 4afd40b9  ldr w10, [x10, #0xfc]
0x03DC64D8: e8030091  mov x8, sp
0x03DC64DC: 693f0091  add x9, x27, #0xf
0x03DC64E0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC64E4: 180109cb  sub x24, x8, x9
0x03DC64E8: 1f030091  mov sp, x24
0x03DC64EC: 493d0091  add x9, x10, #0xf
0x03DC64F0: e8030091  mov x8, sp
0x03DC64F4: 29717c92  and x9, x9, #0x1fffffff0
0x03DC64F8: 080109cb  sub x8, x8, x9
0x03DC64FC: aa233ea9  stp x10, x8, [x29, #-0x20]
0x03DC6500: 1f010091  mov sp, x8
0x03DC6504: e93e0091  add x9, x23, #0xf
0x03DC6508: e8030091  mov x8, sp
0x03DC650C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6510: 1c0109cb  sub x28, x8, x9
0x03DC6514: 9f030091  mov sp, x28
0x03DC6518: e8030091  mov x8, sp
0x03DC651C: 160109cb  sub x22, x8, x9
0x03DC6520: df020091  mov sp, x22
0x03DC6524: e8030091  mov x8, sp
0x03DC6528: 1a0109cb  sub x26, x8, x9
0x03DC652C: 5f030091  mov sp, x26
0x03DC6530: e8030091  mov x8, sp
0x03DC6534: 190109cb  sub x25, x8, x9
0x03DC6538: 3f030091  mov sp, x25
0x03DC653C: e0031caa  mov x0, x28
0x03DC6540: e10315aa  mov x1, x21
0x03DC6544: e20317aa  mov x2, x23
0x03DC6548: 0a21d094  bl #0x71ce970
0x03DC654C: 880240f9  ldr x8, [x20]
0x03DC6550: e0031caa  mov x0, x28
0x03DC6554: 014140f9  ldr x1, [x8, #0x80]
0x03DC6558: 38e9ce97  bl #0x3180a38
0x03DC655C: 1c0040f9  ldr x28, [x0]
0x03DC6560: e00316aa  mov x0, x22
0x03DC6564: e10315aa  mov x1, x21
0x03DC6568: e20317aa  mov x2, x23
0x03DC656C: 0121d094  bl #0x71ce970
0x03DC6570: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6574: e00316aa  mov x0, x22
0x03DC6578: 080140f9  ldr x8, [x8]
0x03DC657C: 084140f9  ldr x8, [x8, #0x80]
0x03DC6580: 01810091  add x1, x8, #0x20
0x03DC6584: 2de9ce97  bl #0x3180a38
0x03DC6588: e10300aa  mov x1, x0
0x03DC658C: e00318aa  mov x0, x24
0x03DC6590: e2031baa  mov x2, x27
0x03DC6594: f720d094  bl #0x71ce970
0x03DC6598: 3c0700b4  cbz x28, #0x3dc667c
0x03DC659C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC65A0: a34300d1  sub x3, x29, #0x10
0x03DC65A4: e2031caa  mov x2, x28
0x03DC65A8: e40318aa  mov x4, x24
0x03DC65AC: 010940f9  ldr x1, [x8, #0x10]
0x03DC65B0: 200040f9  ldr x0, [x1]
0x03DC65B4: b8031ff8  stur x24, [x29, #-0x10]
0x03DC65B8: 280840f9  ldr x8, [x1, #0x10]
0x03DC65BC: 00013fd6  blr x8
0x03DC65C0: e0031aaa  mov x0, x26
0x03DC65C4: e10315aa  mov x1, x21
0x03DC65C8: e20317aa  mov x2, x23
0x03DC65CC: e920d094  bl #0x71ce970
0x03DC65D0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC65D4: e0031aaa  mov x0, x26
0x03DC65D8: 080140f9  ldr x8, [x8]
0x03DC65DC: 014140f9  ldr x1, [x8, #0x80]
0x03DC65E0: 16e9ce97  bl #0x3180a38
0x03DC65E4: 180040f9  ldr x24, [x0]
0x03DC65E8: e00319aa  mov x0, x25
0x03DC65EC: e10315aa  mov x1, x21
0x03DC65F0: e20317aa  mov x2, x23
0x03DC65F4: df20d094  bl #0x71ce970
0x03DC65F8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC65FC: e00319aa  mov x0, x25
0x03DC6600: 080140f9  ldr x8, [x8]
0x03DC6604: 084140f9  ldr x8, [x8, #0x80]
0x03DC6608: 01010191  add x1, x8, #0x40
0x03DC660C: 0be9ce97  bl #0x3180a38
0x03DC6610: a2537ea9  ldp x2, x20, [x29, #-0x20]
0x03DC6614: e10300aa  mov x1, x0
0x03DC6618: e00314aa  mov x0, x20
0x03DC661C: d520d094  bl #0x71ce970
0x03DC6620: f80200b4  cbz x24, #0x3dc667c
0x03DC6624: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6628: a34300d1  sub x3, x29, #0x10
0x03DC662C: e20318aa  mov x2, x24
0x03DC6630: e40314aa  mov x4, x20
0x03DC6634: 011140f9  ldr x1, [x8, #0x20]
0x03DC6638: 200040f9  ldr x0, [x1]
0x03DC663C: b4031ff8  stur x20, [x29, #-0x10]
0x03DC6640: 280840f9  ldr x8, [x1, #0x10]
0x03DC6644: 00013fd6  blr x8
0x03DC6648: a8835df8  ldur x8, [x29, #-0x28]
0x03DC664C: 081540f9  ldr x8, [x8, #0x28]
0x03DC6650: a9835ff8  ldur x9, [x29, #-8]
0x03DC6654: 1f0109eb  cmp x8, x9
0x03DC6658: 41010054  b.ne #0x3dc6680
0x03DC665C: bf030091  mov sp, x29
0x03DC6660: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC6664: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC6668: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC666C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC6670: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC6674: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC6678: c0035fd6  ret
0x03DC667C: 8ce9ce97  bl #0x3180cac
0x03DC6680: c420d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6684 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__T3__o target, const MethodInfo_3DC6684* method);
; bytes=736 sha256=08f2eda645da2e8a85b9a364ac1ac1c7b4bc0f2bc13481fed73076a843f6b942 status=arm64_complete_bound indexed_start=True
0x03DC6684: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC6688: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC668C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC6690: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC6694: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC6698: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC669C: fd030091  mov x29, sp
0x03DC66A0: ff4301d1  sub sp, sp, #0x50
0x03DC66A4: 48d03bd5  mrs x8, tpidr_el0
0x03DC66A8: a8831bf8  stur x8, [x29, #-0x48]
0x03DC66AC: 081540f9  ldr x8, [x8, #0x28]
0x03DC66B0: f30301aa  mov x19, x1
0x03DC66B4: f40300aa  mov x20, x0
0x03DC66B8: a8831ff8  stur x8, [x29, #-8]
0x03DC66BC: 391c40f9  ldr x25, [x1, #0x38]
0x03DC66C0: 990000b5  cbnz x25, #0x3dc66d0
0x03DC66C4: e00313aa  mov x0, x19
0x03DC66C8: 6c40ce97  bl #0x3156878
0x03DC66CC: 791e40f9  ldr x25, [x19, #0x38]
0x03DC66D0: 282740a9  ldp x8, x9, [x25]
0x03DC66D4: 2a0f40f9  ldr x10, [x25, #0x18]
0x03DC66D8: 2b1740f9  ldr x11, [x25, #0x28]
0x03DC66DC: 29fd40b9  ldr w9, [x9, #0xfc]
0x03DC66E0: 17fd40b9  ldr w23, [x8, #0xfc]
0x03DC66E4: 4cfd40b9  ldr w12, [x10, #0xfc]
0x03DC66E8: 6afd40b9  ldr w10, [x11, #0xfc]
0x03DC66EC: a9831ef8  stur x9, [x29, #-0x18]
0x03DC66F0: 293d0091  add x9, x9, #0xf
0x03DC66F4: e8030091  mov x8, sp
0x03DC66F8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC66FC: 1c0109cb  sub x28, x8, x9
0x03DC6700: 9f030091  mov sp, x28
0x03DC6704: 893d0091  add x9, x12, #0xf
0x03DC6708: e8030091  mov x8, sp
0x03DC670C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6710: 180109cb  sub x24, x8, x9
0x03DC6714: aab33da9  stp x10, x12, [x29, #-0x28]
0x03DC6718: 1f030091  mov sp, x24
0x03DC671C: 493d0091  add x9, x10, #0xf
0x03DC6720: e8030091  mov x8, sp
0x03DC6724: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6728: 080109cb  sub x8, x8, x9
0x03DC672C: a8031df8  stur x8, [x29, #-0x30]
0x03DC6730: 1f010091  mov sp, x8
0x03DC6734: e93e0091  add x9, x23, #0xf
0x03DC6738: e8030091  mov x8, sp
0x03DC673C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6740: 1a0109cb  sub x26, x8, x9
0x03DC6744: 5f030091  mov sp, x26
0x03DC6748: e8030091  mov x8, sp
0x03DC674C: 1b0109cb  sub x27, x8, x9
0x03DC6750: 7f030091  mov sp, x27
0x03DC6754: e8030091  mov x8, sp
0x03DC6758: 160109cb  sub x22, x8, x9
0x03DC675C: df020091  mov sp, x22
0x03DC6760: e8030091  mov x8, sp
0x03DC6764: 150109cb  sub x21, x8, x9
0x03DC6768: bf020091  mov sp, x21
0x03DC676C: e8030091  mov x8, sp
0x03DC6770: 080109cb  sub x8, x8, x9
0x03DC6774: a8031cf8  stur x8, [x29, #-0x40]
0x03DC6778: 1f010091  mov sp, x8
0x03DC677C: e8030091  mov x8, sp
0x03DC6780: 080109cb  sub x8, x8, x9
0x03DC6784: a8831cf8  stur x8, [x29, #-0x38]
0x03DC6788: 1f010091  mov sp, x8
0x03DC678C: e0031aaa  mov x0, x26
0x03DC6790: e10314aa  mov x1, x20
0x03DC6794: e20317aa  mov x2, x23
0x03DC6798: 7620d094  bl #0x71ce970
0x03DC679C: 280340f9  ldr x8, [x25]
0x03DC67A0: e0031aaa  mov x0, x26
0x03DC67A4: 014140f9  ldr x1, [x8, #0x80]
0x03DC67A8: a4e8ce97  bl #0x3180a38
0x03DC67AC: 1a0040f9  ldr x26, [x0]
0x03DC67B0: e0031baa  mov x0, x27
0x03DC67B4: e10314aa  mov x1, x20
0x03DC67B8: e20317aa  mov x2, x23
0x03DC67BC: 6d20d094  bl #0x71ce970
0x03DC67C0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC67C4: e0031baa  mov x0, x27
0x03DC67C8: 080140f9  ldr x8, [x8]
0x03DC67CC: 084140f9  ldr x8, [x8, #0x80]
0x03DC67D0: 01810091  add x1, x8, #0x20
0x03DC67D4: 99e8ce97  bl #0x3180a38
0x03DC67D8: a2835ef8  ldur x2, [x29, #-0x18]
0x03DC67DC: e10300aa  mov x1, x0
0x03DC67E0: e0031caa  mov x0, x28
0x03DC67E4: 6320d094  bl #0x71ce970
0x03DC67E8: ba0b00b4  cbz x26, #0x3dc695c
0x03DC67EC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC67F0: a34300d1  sub x3, x29, #0x10
0x03DC67F4: e2031aaa  mov x2, x26
0x03DC67F8: e4031caa  mov x4, x28
0x03DC67FC: 010940f9  ldr x1, [x8, #0x10]
0x03DC6800: 200040f9  ldr x0, [x1]
0x03DC6804: bc031ff8  stur x28, [x29, #-0x10]
0x03DC6808: 280840f9  ldr x8, [x1, #0x10]
0x03DC680C: 00013fd6  blr x8
0x03DC6810: e00316aa  mov x0, x22
0x03DC6814: e10314aa  mov x1, x20
0x03DC6818: e20317aa  mov x2, x23
0x03DC681C: 5520d094  bl #0x71ce970
0x03DC6820: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6824: e00316aa  mov x0, x22
0x03DC6828: 080140f9  ldr x8, [x8]
0x03DC682C: 014140f9  ldr x1, [x8, #0x80]
0x03DC6830: 82e8ce97  bl #0x3180a38
0x03DC6834: 160040f9  ldr x22, [x0]
0x03DC6838: e00315aa  mov x0, x21
0x03DC683C: e10314aa  mov x1, x20
0x03DC6840: e20317aa  mov x2, x23
0x03DC6844: 4b20d094  bl #0x71ce970
0x03DC6848: 681e40f9  ldr x8, [x19, #0x38]
0x03DC684C: e00315aa  mov x0, x21
0x03DC6850: 080140f9  ldr x8, [x8]
0x03DC6854: 084140f9  ldr x8, [x8, #0x80]
0x03DC6858: 01010191  add x1, x8, #0x40
0x03DC685C: 77e8ce97  bl #0x3180a38
0x03DC6860: a2035ef8  ldur x2, [x29, #-0x20]
0x03DC6864: e10300aa  mov x1, x0
0x03DC6868: e00318aa  mov x0, x24
0x03DC686C: 4120d094  bl #0x71ce970
0x03DC6870: 760700b4  cbz x22, #0x3dc695c
0x03DC6874: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6878: a34300d1  sub x3, x29, #0x10
0x03DC687C: e20316aa  mov x2, x22
0x03DC6880: e40318aa  mov x4, x24
0x03DC6884: 011140f9  ldr x1, [x8, #0x20]
0x03DC6888: 200040f9  ldr x0, [x1]
0x03DC688C: b8031ff8  stur x24, [x29, #-0x10]
0x03DC6890: 280840f9  ldr x8, [x1, #0x10]
0x03DC6894: 00013fd6  blr x8
0x03DC6898: b5035cf8  ldur x21, [x29, #-0x40]
0x03DC689C: e10314aa  mov x1, x20
0x03DC68A0: e20317aa  mov x2, x23
0x03DC68A4: e00315aa  mov x0, x21
0x03DC68A8: 3220d094  bl #0x71ce970
0x03DC68AC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC68B0: e00315aa  mov x0, x21
0x03DC68B4: 080140f9  ldr x8, [x8]
0x03DC68B8: 014140f9  ldr x1, [x8, #0x80]
0x03DC68BC: 5fe8ce97  bl #0x3180a38
0x03DC68C0: b6835cf8  ldur x22, [x29, #-0x38]
0x03DC68C4: 150040f9  ldr x21, [x0]
0x03DC68C8: e10314aa  mov x1, x20
0x03DC68CC: e20317aa  mov x2, x23
0x03DC68D0: e00316aa  mov x0, x22
0x03DC68D4: 2720d094  bl #0x71ce970
0x03DC68D8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC68DC: e00316aa  mov x0, x22
0x03DC68E0: 080140f9  ldr x8, [x8]
0x03DC68E4: 084140f9  ldr x8, [x8, #0x80]
0x03DC68E8: 01810191  add x1, x8, #0x60
0x03DC68EC: 53e8ce97  bl #0x3180a38
0x03DC68F0: b40b7da9  ldp x20, x2, [x29, #-0x30]
0x03DC68F4: e10300aa  mov x1, x0
0x03DC68F8: e00314aa  mov x0, x20
0x03DC68FC: 1d20d094  bl #0x71ce970
0x03DC6900: f50200b4  cbz x21, #0x3dc695c
0x03DC6904: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6908: a34300d1  sub x3, x29, #0x10
0x03DC690C: e20315aa  mov x2, x21
0x03DC6910: e40314aa  mov x4, x20
0x03DC6914: 011940f9  ldr x1, [x8, #0x30]
0x03DC6918: 200040f9  ldr x0, [x1]
0x03DC691C: b4031ff8  stur x20, [x29, #-0x10]
0x03DC6920: 280840f9  ldr x8, [x1, #0x10]
0x03DC6924: 00013fd6  blr x8
0x03DC6928: a8835bf8  ldur x8, [x29, #-0x48]
0x03DC692C: 081540f9  ldr x8, [x8, #0x28]
0x03DC6930: a9835ff8  ldur x9, [x29, #-8]
0x03DC6934: 1f0109eb  cmp x8, x9
0x03DC6938: 41010054  b.ne #0x3dc6960
0x03DC693C: bf030091  mov sp, x29
0x03DC6940: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC6944: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC6948: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC694C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC6950: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC6954: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC6958: c0035fd6  ret
0x03DC695C: d4e8ce97  bl #0x3180cac
0x03DC6960: 0c20d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6964 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<BoardTilePositionComponent, ToolSpawningComponent, PendingInteractionComponent, InteractionComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_BoardTilePositionComponent__ToolSpawningComponent__PendingInteractionComponent__InteractionComponent_ (System_ValueTuple_Entity__T1__T2__T3__T4__o target, const MethodInfo_3DC6964* method);
; bytes=208 sha256=7b6315dda8a9028dd8b2ea39edbcc208d91aa3d5441d0ce6b3d6a7bd393f4d83 status=arm64_complete_bound indexed_start=True
0x03DC6964: ff4303d1  sub sp, sp, #0xd0
0x03DC6968: fe570ba9  stp x30, x21, [sp, #0xb0]
0x03DC696C: f44f0ca9  stp x20, x19, [sp, #0xc0]
0x03DC6970: 281c40f9  ldr x8, [x1, #0x38]
0x03DC6974: f30301aa  mov x19, x1
0x03DC6978: f40300aa  mov x20, x0
0x03DC697C: 680000b5  cbnz x8, #0x3dc6988
0x03DC6980: e00313aa  mov x0, x19
0x03DC6984: bd3fce97  bl #0x3156878
0x03DC6988: 800240f9  ldr x0, [x20]
0x03DC698C: 200500b4  cbz x0, #0x3dc6a30
0x03DC6990: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6994: 810a40b9  ldr w1, [x20, #8]
0x03DC6998: 020940f9  ldr x2, [x8, #0x10]
0x03DC699C: 1f57f997  bl #0x3c1c618
0x03DC69A0: 800240f9  ldr x0, [x20]
0x03DC69A4: 600400b4  cbz x0, #0x3dc6a30
0x03DC69A8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC69AC: 810a41a9  ldp x1, x2, [x20, #0x10]
0x03DC69B0: 031140f9  ldr x3, [x8, #0x20]
0x03DC69B4: ce5df997  bl #0x3c1e0ec
0x03DC69B8: 800240f9  ldr x0, [x20]
0x03DC69BC: a00300b4  cbz x0, #0x3dc6a30
0x03DC69C0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC69C4: 810a42a9  ldp x1, x2, [x20, #0x20]
0x03DC69C8: 031940f9  ldr x3, [x8, #0x30]
0x03DC69CC: 885bf997  bl #0x3c1d7ec
0x03DC69D0: 950240f9  ldr x21, [x20]
0x03DC69D4: e0a30091  add x0, sp, #0x28
0x03DC69D8: 020b8052  movz w2, #0x58
0x03DC69DC: e10314aa  mov x1, x20
0x03DC69E0: e41fd094  bl #0x71ce970
0x03DC69E4: e083c53c  ldur q0, [sp, #0x58]
0x03DC69E8: e183c63c  ldur q1, [sp, #0x68]
0x03DC69EC: e83f40f9  ldr x8, [sp, #0x78]
0x03DC69F0: e00700ad  stp q0, q1, [sp]
0x03DC69F4: e81300f9  str x8, [sp, #0x20]
0x03DC69F8: d50100b4  cbz x21, #0x3dc6a30
0x03DC69FC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6A00: e00740ad  ldp q0, q1, [sp]
0x03DC6A04: e91340f9  ldr x9, [sp, #0x20]
0x03DC6A08: e1030291  add x1, sp, #0x80
0x03DC6A0C: 022140f9  ldr x2, [x8, #0x40]
0x03DC6A10: e00315aa  mov x0, x21
0x03DC6A14: e00704ad  stp q0, q1, [sp, #0x80]
0x03DC6A18: e95300f9  str x9, [sp, #0xa0]
0x03DC6A1C: d959f997  bl #0x3c1d180
0x03DC6A20: f44f4ca9  ldp x20, x19, [sp, #0xc0]
0x03DC6A24: fe574ba9  ldp x30, x21, [sp, #0xb0]
0x03DC6A28: ff430391  add sp, sp, #0xd0
0x03DC6A2C: c0035fd6  ret
0x03DC6A30: 9fe8ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6A34 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__T3__T4__o target, const MethodInfo_3DC6A34* method);
; bytes=944 sha256=3373cab716b23b0cb47d80e85faed8b5a4a010709726cabf6411d3ac70494335 status=arm64_complete_bound indexed_start=True
0x03DC6A34: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC6A38: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC6A3C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC6A40: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC6A44: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC6A48: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC6A4C: fd030091  mov x29, sp
0x03DC6A50: ffc301d1  sub sp, sp, #0x70
0x03DC6A54: 48d03bd5  mrs x8, tpidr_el0
0x03DC6A58: a88319f8  stur x8, [x29, #-0x68]
0x03DC6A5C: 081540f9  ldr x8, [x8, #0x28]
0x03DC6A60: f30301aa  mov x19, x1
0x03DC6A64: f40300aa  mov x20, x0
0x03DC6A68: a8831ff8  stur x8, [x29, #-8]
0x03DC6A6C: 351c40f9  ldr x21, [x1, #0x38]
0x03DC6A70: 950000b5  cbnz x21, #0x3dc6a80
0x03DC6A74: e00313aa  mov x0, x19
0x03DC6A78: 803fce97  bl #0x3156878
0x03DC6A7C: 751e40f9  ldr x21, [x19, #0x38]
0x03DC6A80: a82640a9  ldp x8, x9, [x21]
0x03DC6A84: aa0e40f9  ldr x10, [x21, #0x18]
0x03DC6A88: ab1640f9  ldr x11, [x21, #0x28]
0x03DC6A8C: ac1e40f9  ldr x12, [x21, #0x38]
0x03DC6A90: 29fd40b9  ldr w9, [x9, #0xfc]
0x03DC6A94: 17fd40b9  ldr w23, [x8, #0xfc]
0x03DC6A98: 4dfd40b9  ldr w13, [x10, #0xfc]
0x03DC6A9C: 6bfd40b9  ldr w11, [x11, #0xfc]
0x03DC6AA0: a9831ef8  stur x9, [x29, #-0x18]
0x03DC6AA4: 8afd40b9  ldr w10, [x12, #0xfc]
0x03DC6AA8: 293d0091  add x9, x9, #0xf
0x03DC6AAC: e8030091  mov x8, sp
0x03DC6AB0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6AB4: 160109cb  sub x22, x8, x9
0x03DC6AB8: df020091  mov sp, x22
0x03DC6ABC: a93d0091  add x9, x13, #0xf
0x03DC6AC0: e8030091  mov x8, sp
0x03DC6AC4: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6AC8: 1c0109cb  sub x28, x8, x9
0x03DC6ACC: 9f030091  mov sp, x28
0x03DC6AD0: 693d0091  add x9, x11, #0xf
0x03DC6AD4: e8030091  mov x8, sp
0x03DC6AD8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6ADC: 080109cb  sub x8, x8, x9
0x03DC6AE0: ab031df8  stur x11, [x29, #-0x30]
0x03DC6AE4: a8b73da9  stp x8, x13, [x29, #-0x28]
0x03DC6AE8: 1f010091  mov sp, x8
0x03DC6AEC: 493d0091  add x9, x10, #0xf
0x03DC6AF0: e8030091  mov x8, sp
0x03DC6AF4: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6AF8: 080109cb  sub x8, x8, x9
0x03DC6AFC: a82b3ba9  stp x8, x10, [x29, #-0x50]
0x03DC6B00: 1f010091  mov sp, x8
0x03DC6B04: e93e0091  add x9, x23, #0xf
0x03DC6B08: e8030091  mov x8, sp
0x03DC6B0C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC6B10: 190109cb  sub x25, x8, x9
0x03DC6B14: 3f030091  mov sp, x25
0x03DC6B18: e8030091  mov x8, sp
0x03DC6B1C: 1b0109cb  sub x27, x8, x9
0x03DC6B20: 7f030091  mov sp, x27
0x03DC6B24: e8030091  mov x8, sp
0x03DC6B28: 180109cb  sub x24, x8, x9
0x03DC6B2C: 1f030091  mov sp, x24
0x03DC6B30: e8030091  mov x8, sp
0x03DC6B34: 1a0109cb  sub x26, x8, x9
0x03DC6B38: 5f030091  mov sp, x26
0x03DC6B3C: e8030091  mov x8, sp
0x03DC6B40: 080109cb  sub x8, x8, x9
0x03DC6B44: a8031cf8  stur x8, [x29, #-0x40]
0x03DC6B48: 1f010091  mov sp, x8
0x03DC6B4C: e8030091  mov x8, sp
0x03DC6B50: 080109cb  sub x8, x8, x9
0x03DC6B54: a8831cf8  stur x8, [x29, #-0x38]
0x03DC6B58: 1f010091  mov sp, x8
0x03DC6B5C: e8030091  mov x8, sp
0x03DC6B60: 080109cb  sub x8, x8, x9
0x03DC6B64: a8031af8  stur x8, [x29, #-0x60]
0x03DC6B68: 1f010091  mov sp, x8
0x03DC6B6C: e8030091  mov x8, sp
0x03DC6B70: 080109cb  sub x8, x8, x9
0x03DC6B74: a8831af8  stur x8, [x29, #-0x58]
0x03DC6B78: 1f010091  mov sp, x8
0x03DC6B7C: e00319aa  mov x0, x25
0x03DC6B80: e10314aa  mov x1, x20
0x03DC6B84: e20317aa  mov x2, x23
0x03DC6B88: 7a1fd094  bl #0x71ce970
0x03DC6B8C: a80240f9  ldr x8, [x21]
0x03DC6B90: e00319aa  mov x0, x25
0x03DC6B94: 014140f9  ldr x1, [x8, #0x80]
0x03DC6B98: a8e7ce97  bl #0x3180a38
0x03DC6B9C: 190040f9  ldr x25, [x0]
0x03DC6BA0: e0031baa  mov x0, x27
0x03DC6BA4: e10314aa  mov x1, x20
0x03DC6BA8: e20317aa  mov x2, x23
0x03DC6BAC: 711fd094  bl #0x71ce970
0x03DC6BB0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6BB4: e0031baa  mov x0, x27
0x03DC6BB8: 080140f9  ldr x8, [x8]
0x03DC6BBC: 084140f9  ldr x8, [x8, #0x80]
0x03DC6BC0: 01810091  add x1, x8, #0x20
0x03DC6BC4: 9de7ce97  bl #0x3180a38
0x03DC6BC8: a2835ef8  ldur x2, [x29, #-0x18]
0x03DC6BCC: e10300aa  mov x1, x0
0x03DC6BD0: e00316aa  mov x0, x22
0x03DC6BD4: 671fd094  bl #0x71ce970
0x03DC6BD8: 391000b4  cbz x25, #0x3dc6ddc
0x03DC6BDC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6BE0: a34300d1  sub x3, x29, #0x10
0x03DC6BE4: e20319aa  mov x2, x25
0x03DC6BE8: e40316aa  mov x4, x22
0x03DC6BEC: 010940f9  ldr x1, [x8, #0x10]
0x03DC6BF0: 200040f9  ldr x0, [x1]
0x03DC6BF4: b6031ff8  stur x22, [x29, #-0x10]
0x03DC6BF8: 280840f9  ldr x8, [x1, #0x10]
0x03DC6BFC: 00013fd6  blr x8
0x03DC6C00: e00318aa  mov x0, x24
0x03DC6C04: e10314aa  mov x1, x20
0x03DC6C08: e20317aa  mov x2, x23
0x03DC6C0C: 591fd094  bl #0x71ce970
0x03DC6C10: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6C14: e00318aa  mov x0, x24
0x03DC6C18: 080140f9  ldr x8, [x8]
0x03DC6C1C: 014140f9  ldr x1, [x8, #0x80]
0x03DC6C20: 86e7ce97  bl #0x3180a38
0x03DC6C24: 160040f9  ldr x22, [x0]
0x03DC6C28: e0031aaa  mov x0, x26
0x03DC6C2C: e10314aa  mov x1, x20
0x03DC6C30: e20317aa  mov x2, x23
0x03DC6C34: 4f1fd094  bl #0x71ce970
0x03DC6C38: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6C3C: e0031aaa  mov x0, x26
0x03DC6C40: 080140f9  ldr x8, [x8]
0x03DC6C44: 084140f9  ldr x8, [x8, #0x80]
0x03DC6C48: 01010191  add x1, x8, #0x40
0x03DC6C4C: 7be7ce97  bl #0x3180a38
0x03DC6C50: a2035ef8  ldur x2, [x29, #-0x20]
0x03DC6C54: e10300aa  mov x1, x0
0x03DC6C58: e0031caa  mov x0, x28
0x03DC6C5C: 451fd094  bl #0x71ce970
0x03DC6C60: f60b00b4  cbz x22, #0x3dc6ddc
0x03DC6C64: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6C68: a34300d1  sub x3, x29, #0x10
0x03DC6C6C: e20316aa  mov x2, x22
0x03DC6C70: e4031caa  mov x4, x28
0x03DC6C74: 011140f9  ldr x1, [x8, #0x20]
0x03DC6C78: 200040f9  ldr x0, [x1]
0x03DC6C7C: bc031ff8  stur x28, [x29, #-0x10]
0x03DC6C80: 280840f9  ldr x8, [x1, #0x10]
0x03DC6C84: 00013fd6  blr x8
0x03DC6C88: b5035cf8  ldur x21, [x29, #-0x40]
0x03DC6C8C: e10314aa  mov x1, x20
0x03DC6C90: e20317aa  mov x2, x23
0x03DC6C94: e00315aa  mov x0, x21
0x03DC6C98: 361fd094  bl #0x71ce970
0x03DC6C9C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6CA0: e00315aa  mov x0, x21
0x03DC6CA4: 080140f9  ldr x8, [x8]
0x03DC6CA8: 014140f9  ldr x1, [x8, #0x80]
0x03DC6CAC: 63e7ce97  bl #0x3180a38
0x03DC6CB0: b6835cf8  ldur x22, [x29, #-0x38]
0x03DC6CB4: 150040f9  ldr x21, [x0]
0x03DC6CB8: e10314aa  mov x1, x20
0x03DC6CBC: e20317aa  mov x2, x23
0x03DC6CC0: e00316aa  mov x0, x22
0x03DC6CC4: 2b1fd094  bl #0x71ce970
0x03DC6CC8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6CCC: e00316aa  mov x0, x22
0x03DC6CD0: 080140f9  ldr x8, [x8]
0x03DC6CD4: 084140f9  ldr x8, [x8, #0x80]
0x03DC6CD8: 01810191  add x1, x8, #0x60
0x03DC6CDC: 57e7ce97  bl #0x3180a38
0x03DC6CE0: a25b7da9  ldp x2, x22, [x29, #-0x30]
0x03DC6CE4: e10300aa  mov x1, x0
0x03DC6CE8: e00316aa  mov x0, x22
0x03DC6CEC: 211fd094  bl #0x71ce970
0x03DC6CF0: 750700b4  cbz x21, #0x3dc6ddc
0x03DC6CF4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6CF8: a34300d1  sub x3, x29, #0x10
0x03DC6CFC: e20315aa  mov x2, x21
0x03DC6D00: e40316aa  mov x4, x22
0x03DC6D04: 011940f9  ldr x1, [x8, #0x30]
0x03DC6D08: 200040f9  ldr x0, [x1]
0x03DC6D0C: b6031ff8  stur x22, [x29, #-0x10]
0x03DC6D10: 280840f9  ldr x8, [x1, #0x10]
0x03DC6D14: 00013fd6  blr x8
0x03DC6D18: b5035af8  ldur x21, [x29, #-0x60]
0x03DC6D1C: e10314aa  mov x1, x20
0x03DC6D20: e20317aa  mov x2, x23
0x03DC6D24: e00315aa  mov x0, x21
0x03DC6D28: 121fd094  bl #0x71ce970
0x03DC6D2C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6D30: e00315aa  mov x0, x21
0x03DC6D34: 080140f9  ldr x8, [x8]
0x03DC6D38: 014140f9  ldr x1, [x8, #0x80]
0x03DC6D3C: 3fe7ce97  bl #0x3180a38
0x03DC6D40: b6835af8  ldur x22, [x29, #-0x58]
0x03DC6D44: 150040f9  ldr x21, [x0]
0x03DC6D48: e10314aa  mov x1, x20
0x03DC6D4C: e20317aa  mov x2, x23
0x03DC6D50: e00316aa  mov x0, x22
0x03DC6D54: 071fd094  bl #0x71ce970
0x03DC6D58: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6D5C: e00316aa  mov x0, x22
0x03DC6D60: 080140f9  ldr x8, [x8]
0x03DC6D64: 084140f9  ldr x8, [x8, #0x80]
0x03DC6D68: 01010291  add x1, x8, #0x80
0x03DC6D6C: 33e7ce97  bl #0x3180a38
0x03DC6D70: b40b7ba9  ldp x20, x2, [x29, #-0x50]
0x03DC6D74: e10300aa  mov x1, x0
0x03DC6D78: e00314aa  mov x0, x20
0x03DC6D7C: fd1ed094  bl #0x71ce970
0x03DC6D80: f50200b4  cbz x21, #0x3dc6ddc
0x03DC6D84: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6D88: a34300d1  sub x3, x29, #0x10
0x03DC6D8C: e20315aa  mov x2, x21
0x03DC6D90: e40314aa  mov x4, x20
0x03DC6D94: 012140f9  ldr x1, [x8, #0x40]
0x03DC6D98: 200040f9  ldr x0, [x1]
0x03DC6D9C: b4031ff8  stur x20, [x29, #-0x10]
0x03DC6DA0: 280840f9  ldr x8, [x1, #0x10]
0x03DC6DA4: 00013fd6  blr x8
0x03DC6DA8: a88359f8  ldur x8, [x29, #-0x68]
0x03DC6DAC: 081540f9  ldr x8, [x8, #0x28]
0x03DC6DB0: a9835ff8  ldur x9, [x29, #-8]
0x03DC6DB4: 1f0109eb  cmp x8, x9
0x03DC6DB8: 41010054  b.ne #0x3dc6de0
0x03DC6DBC: bf030091  mov sp, x29
0x03DC6DC0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC6DC4: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC6DC8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC6DCC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC6DD0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC6DD4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC6DD8: c0035fd6  ret
0x03DC6DDC: b4e7ce97  bl #0x3180cac
0x03DC6DE0: ec1ed094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6DE4 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<BoardTilePositionComponent, CollectableComponent, IdComponent, PendingInteractionComponent, InteractionComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_BoardTilePositionComponent__CollectableComponent__IdComponent__PendingInteractionComponent__InteractionComponent_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__o target, const MethodInfo_3DC6DE4* method);
; bytes=356 sha256=f45a0f32b6b2bdab896f172874546f6ba7dea87d0148dbb8242ad21896e68569 status=arm64_complete_bound indexed_start=True
0x03DC6DE4: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03DC6DE8: f65701a9  stp x22, x21, [sp, #0x10]
0x03DC6DEC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC6DF0: ff8309d1  sub sp, sp, #0x260
0x03DC6DF4: 281c40f9  ldr x8, [x1, #0x38]
0x03DC6DF8: f30301aa  mov x19, x1
0x03DC6DFC: f40300aa  mov x20, x0
0x03DC6E00: 680000b5  cbnz x8, #0x3dc6e0c
0x03DC6E04: e00313aa  mov x0, x19
0x03DC6E08: 9c3ece97  bl #0x3156878
0x03DC6E0C: 800240f9  ldr x0, [x20]
0x03DC6E10: a00900b4  cbz x0, #0x3dc6f44
0x03DC6E14: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6E18: 810a40b9  ldr w1, [x20, #8]
0x03DC6E1C: 020940f9  ldr x2, [x8, #0x10]
0x03DC6E20: fe55f997  bl #0x3c1c618
0x03DC6E24: 950240f9  ldr x21, [x20]
0x03DC6E28: e0830691  add x0, sp, #0x1a0
0x03DC6E2C: 02128052  movz w2, #0x90
0x03DC6E30: e10314aa  mov x1, x20
0x03DC6E34: cf1ed094  bl #0x71ce970
0x03DC6E38: e06fc03d  ldr q0, [sp, #0x1b0]
0x03DC6E3C: e8e340f9  ldr x8, [sp, #0x1c0]
0x03DC6E40: e063803d  str q0, [sp, #0x180]
0x03DC6E44: e8cb00f9  str x8, [sp, #0x190]
0x03DC6E48: f50700b4  cbz x21, #0x3dc6f44
0x03DC6E4C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6E50: e063c03d  ldr q0, [sp, #0x180]
0x03DC6E54: e9cb40f9  ldr x9, [sp, #0x190]
0x03DC6E58: e1c30391  add x1, sp, #0xf0
0x03DC6E5C: 021140f9  ldr x2, [x8, #0x20]
0x03DC6E60: e00315aa  mov x0, x21
0x03DC6E64: f6c30091  add x22, sp, #0x30
0x03DC6E68: e03f803d  str q0, [sp, #0xf0]
0x03DC6E6C: e98300f9  str x9, [sp, #0x100]
0x03DC6E70: b756f997  bl #0x3c1c94c
0x03DC6E74: 950240f9  ldr x21, [x20]
0x03DC6E78: e0c30391  add x0, sp, #0xf0
0x03DC6E7C: 02128052  movz w2, #0x90
0x03DC6E80: e10314aa  mov x1, x20
0x03DC6E84: bb1ed094  bl #0x71ce970
0x03DC6E88: e8e70091  add x8, sp, #0x39
0x03DC6E8C: c082ce3c  ldur q0, [x22, #0xe8]
0x03DC6E90: c182cf3c  ldur q1, [x22, #0xf8]
0x03DC6E94: 02f1cf3c  ldur q2, [x8, #0xff]
0x03DC6E98: e00706ad  stp q0, q1, [sp, #0xc0]
0x03DC6E9C: e23b803d  str q2, [sp, #0xe0]
0x03DC6EA0: 350500b4  cbz x21, #0x3dc6f44
0x03DC6EA4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6EA8: e00746ad  ldp q0, q1, [sp, #0xc0]
0x03DC6EAC: e23bc03d  ldr q2, [sp, #0xe0]
0x03DC6EB0: e1c30091  add x1, sp, #0x30
0x03DC6EB4: 021940f9  ldr x2, [x8, #0x30]
0x03DC6EB8: e00315aa  mov x0, x21
0x03DC6EBC: e08701ad  stp q0, q1, [sp, #0x30]
0x03DC6EC0: e217803d  str q2, [sp, #0x50]
0x03DC6EC4: 4158f997  bl #0x3c1cfc8
0x03DC6EC8: 800240f9  ldr x0, [x20]
0x03DC6ECC: c00300b4  cbz x0, #0x3dc6f44
0x03DC6ED0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6ED4: 818a45a9  ldp x1, x2, [x20, #0x58]
0x03DC6ED8: 032140f9  ldr x3, [x8, #0x40]
0x03DC6EDC: 445af997  bl #0x3c1d7ec
0x03DC6EE0: 950240f9  ldr x21, [x20]
0x03DC6EE4: e0c30091  add x0, sp, #0x30
0x03DC6EE8: 02128052  movz w2, #0x90
0x03DC6EEC: e10314aa  mov x1, x20
0x03DC6EF0: a01ed094  bl #0x71ce970
0x03DC6EF4: c082c63c  ldur q0, [x22, #0x68]
0x03DC6EF8: c182c73c  ldur q1, [x22, #0x78]
0x03DC6EFC: e85f40f9  ldr x8, [sp, #0xb8]
0x03DC6F00: e00700ad  stp q0, q1, [sp]
0x03DC6F04: e81300f9  str x8, [sp, #0x20]
0x03DC6F08: f50100b4  cbz x21, #0x3dc6f44
0x03DC6F0C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6F10: e00740ad  ldp q0, q1, [sp]
0x03DC6F14: e91340f9  ldr x9, [sp, #0x20]
0x03DC6F18: e1c30891  add x1, sp, #0x230
0x03DC6F1C: 022940f9  ldr x2, [x8, #0x50]
0x03DC6F20: e00315aa  mov x0, x21
0x03DC6F24: e08711ad  stp q0, q1, [sp, #0x230]
0x03DC6F28: e92b01f9  str x9, [sp, #0x250]
0x03DC6F2C: 9558f997  bl #0x3c1d180
0x03DC6F30: ff830991  add sp, sp, #0x260
0x03DC6F34: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC6F38: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DC6F3C: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03DC6F40: c0035fd6  ret
0x03DC6F44: 5ae7ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC6F48 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<ChargeableComponent, ExpendableComponent, BoardTilePositionComponent, IdComponent, PendingInteractionComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_ChargeableComponent__ExpendableComponent__BoardTilePositionComponent__IdComponent__PendingInteractionComponent_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__o target, const MethodInfo_3DC6F48* method);
; bytes=300 sha256=8b9faba677839f6117abe0ca06571adcf546c02f088b37bf3277410dcfc90956 status=arm64_complete_bound indexed_start=True
0x03DC6F48: ff8307d1  sub sp, sp, #0x1e0
0x03DC6F4C: fd7b1ba9  stp x29, x30, [sp, #0x1b0]
0x03DC6F50: f6571ca9  stp x22, x21, [sp, #0x1c0]
0x03DC6F54: f44f1da9  stp x20, x19, [sp, #0x1d0]
0x03DC6F58: 281c40f9  ldr x8, [x1, #0x38]
0x03DC6F5C: f30301aa  mov x19, x1
0x03DC6F60: f40300aa  mov x20, x0
0x03DC6F64: 680000b5  cbnz x8, #0x3dc6f70
0x03DC6F68: e00313aa  mov x0, x19
0x03DC6F6C: 433ece97  bl #0x3156878
0x03DC6F70: 800240f9  ldr x0, [x20]
0x03DC6F74: e00700b4  cbz x0, #0x3dc7070
0x03DC6F78: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6F7C: 810640f9  ldr x1, [x20, #8]
0x03DC6F80: f6c30091  add x22, sp, #0x30
0x03DC6F84: 020940f9  ldr x2, [x8, #0x10]
0x03DC6F88: 3f56f997  bl #0x3c1c884
0x03DC6F8C: 950240f9  ldr x21, [x20]
0x03DC6F90: e0e30391  add x0, sp, #0xf8
0x03DC6F94: 02118052  movz w2, #0x88
0x03DC6F98: e10314aa  mov x1, x20
0x03DC6F9C: 751ed094  bl #0x71ce970
0x03DC6FA0: c082cd3c  ldur q0, [x22, #0xd8]
0x03DC6FA4: c182ce3c  ldur q1, [x22, #0xe8]
0x03DC6FA8: c282cf3c  ldur q2, [x22, #0xf8]
0x03DC6FAC: e00706ad  stp q0, q1, [sp, #0xc0]
0x03DC6FB0: e23b803d  str q2, [sp, #0xe0]
0x03DC6FB4: f50500b4  cbz x21, #0x3dc7070
0x03DC6FB8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6FBC: e00746ad  ldp q0, q1, [sp, #0xc0]
0x03DC6FC0: e23bc03d  ldr q2, [sp, #0xe0]
0x03DC6FC4: e1c30091  add x1, sp, #0x30
0x03DC6FC8: 021140f9  ldr x2, [x8, #0x20]
0x03DC6FCC: e00315aa  mov x0, x21
0x03DC6FD0: e08701ad  stp q0, q1, [sp, #0x30]
0x03DC6FD4: e217803d  str q2, [sp, #0x50]
0x03DC6FD8: 6157f997  bl #0x3c1cd5c
0x03DC6FDC: 800240f9  ldr x0, [x20]
0x03DC6FE0: 800400b4  cbz x0, #0x3dc7070
0x03DC6FE4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC6FE8: 814240b9  ldr w1, [x20, #0x40]
0x03DC6FEC: 021940f9  ldr x2, [x8, #0x30]
0x03DC6FF0: 8a55f997  bl #0x3c1c618
0x03DC6FF4: 950240f9  ldr x21, [x20]
0x03DC6FF8: e0c30091  add x0, sp, #0x30
0x03DC6FFC: 02118052  movz w2, #0x88
0x03DC7000: e10314aa  mov x1, x20
0x03DC7004: 5b1ed094  bl #0x71ce970
0x03DC7008: e083c73c  ldur q0, [sp, #0x78]
0x03DC700C: c182c53c  ldur q1, [x22, #0x58]
0x03DC7010: c282c63c  ldur q2, [x22, #0x68]
0x03DC7014: e00700ad  stp q0, q1, [sp]
0x03DC7018: e20b803d  str q2, [sp, #0x20]
0x03DC701C: b50200b4  cbz x21, #0x3dc7070
0x03DC7020: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7024: e00740ad  ldp q0, q1, [sp]
0x03DC7028: e20bc03d  ldr q2, [sp, #0x20]
0x03DC702C: e1030691  add x1, sp, #0x180
0x03DC7030: 022140f9  ldr x2, [x8, #0x40]
0x03DC7034: e00315aa  mov x0, x21
0x03DC7038: e0070cad  stp q0, q1, [sp, #0x180]
0x03DC703C: e26b803d  str q2, [sp, #0x1a0]
0x03DC7040: e257f997  bl #0x3c1cfc8
0x03DC7044: 800240f9  ldr x0, [x20]
0x03DC7048: 400100b4  cbz x0, #0x3dc7070
0x03DC704C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7050: 818a47a9  ldp x1, x2, [x20, #0x78]
0x03DC7054: 032940f9  ldr x3, [x8, #0x50]
0x03DC7058: e559f997  bl #0x3c1d7ec
0x03DC705C: f44f5da9  ldp x20, x19, [sp, #0x1d0]
0x03DC7060: f6575ca9  ldp x22, x21, [sp, #0x1c0]
0x03DC7064: fd7b5ba9  ldp x29, x30, [sp, #0x1b0]
0x03DC7068: ff830791  add sp, sp, #0x1e0
0x03DC706C: c0035fd6  ret
0x03DC7070: 0fe7ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC7074 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__o target, const MethodInfo_3DC7074* method);
; bytes=1152 sha256=f42bb0ad4241ba5e8d4c895d82cc418d851675d00633d0770bef2b8847ba5baa status=arm64_complete_bound indexed_start=True
0x03DC7074: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC7078: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC707C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC7080: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC7084: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC7088: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC708C: fd030091  mov x29, sp
0x03DC7090: ff4302d1  sub sp, sp, #0x90
0x03DC7094: 48d03bd5  mrs x8, tpidr_el0
0x03DC7098: a88317f8  stur x8, [x29, #-0x88]
0x03DC709C: 081540f9  ldr x8, [x8, #0x28]
0x03DC70A0: f30301aa  mov x19, x1
0x03DC70A4: f40300aa  mov x20, x0
0x03DC70A8: a8831ff8  stur x8, [x29, #-8]
0x03DC70AC: 3a1c40f9  ldr x26, [x1, #0x38]
0x03DC70B0: 9a0000b5  cbnz x26, #0x3dc70c0
0x03DC70B4: e00313aa  mov x0, x19
0x03DC70B8: f03dce97  bl #0x3156878
0x03DC70BC: 7a1e40f9  ldr x26, [x19, #0x38]
0x03DC70C0: 482740a9  ldp x8, x9, [x26]
0x03DC70C4: 4a0f40f9  ldr x10, [x26, #0x18]
0x03DC70C8: 4b1740f9  ldr x11, [x26, #0x28]
0x03DC70CC: 4c1f40f9  ldr x12, [x26, #0x38]
0x03DC70D0: 4d2740f9  ldr x13, [x26, #0x48]
0x03DC70D4: 29fd40b9  ldr w9, [x9, #0xfc]
0x03DC70D8: 17fd40b9  ldr w23, [x8, #0xfc]
0x03DC70DC: 4ffd40b9  ldr w15, [x10, #0xfc]
0x03DC70E0: 6efd40b9  ldr w14, [x11, #0xfc]
0x03DC70E4: a9831ef8  stur x9, [x29, #-0x18]
0x03DC70E8: 8bfd40b9  ldr w11, [x12, #0xfc]
0x03DC70EC: aafd40b9  ldr w10, [x13, #0xfc]
0x03DC70F0: 293d0091  add x9, x9, #0xf
0x03DC70F4: e8030091  mov x8, sp
0x03DC70F8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC70FC: 190109cb  sub x25, x8, x9
0x03DC7100: 3f030091  mov sp, x25
0x03DC7104: e93d0091  add x9, x15, #0xf
0x03DC7108: e8030091  mov x8, sp
0x03DC710C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7110: 160109cb  sub x22, x8, x9
0x03DC7114: df020091  mov sp, x22
0x03DC7118: c93d0091  add x9, x14, #0xf
0x03DC711C: e8030091  mov x8, sp
0x03DC7120: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7124: 080109cb  sub x8, x8, x9
0x03DC7128: ae031df8  stur x14, [x29, #-0x30]
0x03DC712C: a8bf3da9  stp x8, x15, [x29, #-0x28]
0x03DC7130: 1f010091  mov sp, x8
0x03DC7134: 693d0091  add x9, x11, #0xf
0x03DC7138: e8030091  mov x8, sp
0x03DC713C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7140: 080109cb  sub x8, x8, x9
0x03DC7144: a82f3ba9  stp x8, x11, [x29, #-0x50]
0x03DC7148: 1f010091  mov sp, x8
0x03DC714C: 493d0091  add x9, x10, #0xf
0x03DC7150: e8030091  mov x8, sp
0x03DC7154: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7158: 080109cb  sub x8, x8, x9
0x03DC715C: a82b39a9  stp x8, x10, [x29, #-0x70]
0x03DC7160: 1f010091  mov sp, x8
0x03DC7164: e93e0091  add x9, x23, #0xf
0x03DC7168: e8030091  mov x8, sp
0x03DC716C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7170: 1b0109cb  sub x27, x8, x9
0x03DC7174: 7f030091  mov sp, x27
0x03DC7178: e8030091  mov x8, sp
0x03DC717C: 180109cb  sub x24, x8, x9
0x03DC7180: 1f030091  mov sp, x24
0x03DC7184: e8030091  mov x8, sp
0x03DC7188: 1c0109cb  sub x28, x8, x9
0x03DC718C: 9f030091  mov sp, x28
0x03DC7190: e8030091  mov x8, sp
0x03DC7194: 150109cb  sub x21, x8, x9
0x03DC7198: bf020091  mov sp, x21
0x03DC719C: e8030091  mov x8, sp
0x03DC71A0: 080109cb  sub x8, x8, x9
0x03DC71A4: a8031cf8  stur x8, [x29, #-0x40]
0x03DC71A8: 1f010091  mov sp, x8
0x03DC71AC: e8030091  mov x8, sp
0x03DC71B0: 080109cb  sub x8, x8, x9
0x03DC71B4: a8831cf8  stur x8, [x29, #-0x38]
0x03DC71B8: 1f010091  mov sp, x8
0x03DC71BC: e8030091  mov x8, sp
0x03DC71C0: 080109cb  sub x8, x8, x9
0x03DC71C4: a8031af8  stur x8, [x29, #-0x60]
0x03DC71C8: 1f010091  mov sp, x8
0x03DC71CC: e8030091  mov x8, sp
0x03DC71D0: 080109cb  sub x8, x8, x9
0x03DC71D4: a8831af8  stur x8, [x29, #-0x58]
0x03DC71D8: 1f010091  mov sp, x8
0x03DC71DC: e8030091  mov x8, sp
0x03DC71E0: 080109cb  sub x8, x8, x9
0x03DC71E4: a80318f8  stur x8, [x29, #-0x80]
0x03DC71E8: 1f010091  mov sp, x8
0x03DC71EC: e8030091  mov x8, sp
0x03DC71F0: 080109cb  sub x8, x8, x9
0x03DC71F4: a88318f8  stur x8, [x29, #-0x78]
0x03DC71F8: 1f010091  mov sp, x8
0x03DC71FC: e0031baa  mov x0, x27
0x03DC7200: e10314aa  mov x1, x20
0x03DC7204: e20317aa  mov x2, x23
0x03DC7208: da1dd094  bl #0x71ce970
0x03DC720C: 480340f9  ldr x8, [x26]
0x03DC7210: e0031baa  mov x0, x27
0x03DC7214: 014140f9  ldr x1, [x8, #0x80]
0x03DC7218: 08e6ce97  bl #0x3180a38
0x03DC721C: 1b0040f9  ldr x27, [x0]
0x03DC7220: e00318aa  mov x0, x24
0x03DC7224: e10314aa  mov x1, x20
0x03DC7228: e20317aa  mov x2, x23
0x03DC722C: d11dd094  bl #0x71ce970
0x03DC7230: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7234: e00318aa  mov x0, x24
0x03DC7238: 080140f9  ldr x8, [x8]
0x03DC723C: 084140f9  ldr x8, [x8, #0x80]
0x03DC7240: 01810091  add x1, x8, #0x20
0x03DC7244: fde5ce97  bl #0x3180a38
0x03DC7248: a2835ef8  ldur x2, [x29, #-0x18]
0x03DC724C: e10300aa  mov x1, x0
0x03DC7250: e00319aa  mov x0, x25
0x03DC7254: c71dd094  bl #0x71ce970
0x03DC7258: bb1400b4  cbz x27, #0x3dc74ec
0x03DC725C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7260: a34300d1  sub x3, x29, #0x10
0x03DC7264: e2031baa  mov x2, x27
0x03DC7268: e40319aa  mov x4, x25
0x03DC726C: 010940f9  ldr x1, [x8, #0x10]
0x03DC7270: 200040f9  ldr x0, [x1]
0x03DC7274: b9031ff8  stur x25, [x29, #-0x10]
0x03DC7278: 280840f9  ldr x8, [x1, #0x10]
0x03DC727C: 00013fd6  blr x8
0x03DC7280: e0031caa  mov x0, x28
0x03DC7284: e10314aa  mov x1, x20
0x03DC7288: e20317aa  mov x2, x23
0x03DC728C: b91dd094  bl #0x71ce970
0x03DC7290: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7294: e0031caa  mov x0, x28
0x03DC7298: 080140f9  ldr x8, [x8]
0x03DC729C: 014140f9  ldr x1, [x8, #0x80]
0x03DC72A0: e6e5ce97  bl #0x3180a38
0x03DC72A4: 180040f9  ldr x24, [x0]
0x03DC72A8: e00315aa  mov x0, x21
0x03DC72AC: e10314aa  mov x1, x20
0x03DC72B0: e20317aa  mov x2, x23
0x03DC72B4: af1dd094  bl #0x71ce970
0x03DC72B8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC72BC: e00315aa  mov x0, x21
0x03DC72C0: 080140f9  ldr x8, [x8]
0x03DC72C4: 084140f9  ldr x8, [x8, #0x80]
0x03DC72C8: 01010191  add x1, x8, #0x40
0x03DC72CC: dbe5ce97  bl #0x3180a38
0x03DC72D0: a2035ef8  ldur x2, [x29, #-0x20]
0x03DC72D4: e10300aa  mov x1, x0
0x03DC72D8: e00316aa  mov x0, x22
0x03DC72DC: a51dd094  bl #0x71ce970
0x03DC72E0: 781000b4  cbz x24, #0x3dc74ec
0x03DC72E4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC72E8: a34300d1  sub x3, x29, #0x10
0x03DC72EC: e20318aa  mov x2, x24
0x03DC72F0: e40316aa  mov x4, x22
0x03DC72F4: 011140f9  ldr x1, [x8, #0x20]
0x03DC72F8: 200040f9  ldr x0, [x1]
0x03DC72FC: b6031ff8  stur x22, [x29, #-0x10]
0x03DC7300: 280840f9  ldr x8, [x1, #0x10]
0x03DC7304: 00013fd6  blr x8
0x03DC7308: b5035cf8  ldur x21, [x29, #-0x40]
0x03DC730C: e10314aa  mov x1, x20
0x03DC7310: e20317aa  mov x2, x23
0x03DC7314: e00315aa  mov x0, x21
0x03DC7318: 961dd094  bl #0x71ce970
0x03DC731C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7320: e00315aa  mov x0, x21
0x03DC7324: 080140f9  ldr x8, [x8]
0x03DC7328: 014140f9  ldr x1, [x8, #0x80]
0x03DC732C: c3e5ce97  bl #0x3180a38
0x03DC7330: b6835cf8  ldur x22, [x29, #-0x38]
0x03DC7334: 150040f9  ldr x21, [x0]
0x03DC7338: e10314aa  mov x1, x20
0x03DC733C: e20317aa  mov x2, x23
0x03DC7340: e00316aa  mov x0, x22
0x03DC7344: 8b1dd094  bl #0x71ce970
0x03DC7348: 681e40f9  ldr x8, [x19, #0x38]
0x03DC734C: e00316aa  mov x0, x22
0x03DC7350: 080140f9  ldr x8, [x8]
0x03DC7354: 084140f9  ldr x8, [x8, #0x80]
0x03DC7358: 01810191  add x1, x8, #0x60
0x03DC735C: b7e5ce97  bl #0x3180a38
0x03DC7360: a25b7da9  ldp x2, x22, [x29, #-0x30]
0x03DC7364: e10300aa  mov x1, x0
0x03DC7368: e00316aa  mov x0, x22
0x03DC736C: 811dd094  bl #0x71ce970
0x03DC7370: f50b00b4  cbz x21, #0x3dc74ec
0x03DC7374: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7378: a34300d1  sub x3, x29, #0x10
0x03DC737C: e20315aa  mov x2, x21
0x03DC7380: e40316aa  mov x4, x22
0x03DC7384: 011940f9  ldr x1, [x8, #0x30]
0x03DC7388: 200040f9  ldr x0, [x1]
0x03DC738C: b6031ff8  stur x22, [x29, #-0x10]
0x03DC7390: 280840f9  ldr x8, [x1, #0x10]
0x03DC7394: 00013fd6  blr x8
0x03DC7398: b5035af8  ldur x21, [x29, #-0x60]
0x03DC739C: e10314aa  mov x1, x20
0x03DC73A0: e20317aa  mov x2, x23
0x03DC73A4: e00315aa  mov x0, x21
0x03DC73A8: 721dd094  bl #0x71ce970
0x03DC73AC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC73B0: e00315aa  mov x0, x21
0x03DC73B4: 080140f9  ldr x8, [x8]
0x03DC73B8: 014140f9  ldr x1, [x8, #0x80]
0x03DC73BC: 9fe5ce97  bl #0x3180a38
0x03DC73C0: b6835af8  ldur x22, [x29, #-0x58]
0x03DC73C4: 150040f9  ldr x21, [x0]
0x03DC73C8: e10314aa  mov x1, x20
0x03DC73CC: e20317aa  mov x2, x23
0x03DC73D0: e00316aa  mov x0, x22
0x03DC73D4: 671dd094  bl #0x71ce970
0x03DC73D8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC73DC: e00316aa  mov x0, x22
0x03DC73E0: 080140f9  ldr x8, [x8]
0x03DC73E4: 084140f9  ldr x8, [x8, #0x80]
0x03DC73E8: 01010291  add x1, x8, #0x80
0x03DC73EC: 93e5ce97  bl #0x3180a38
0x03DC73F0: b60b7ba9  ldp x22, x2, [x29, #-0x50]
0x03DC73F4: e10300aa  mov x1, x0
0x03DC73F8: e00316aa  mov x0, x22
0x03DC73FC: 5d1dd094  bl #0x71ce970
0x03DC7400: 750700b4  cbz x21, #0x3dc74ec
0x03DC7404: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7408: a34300d1  sub x3, x29, #0x10
0x03DC740C: e20315aa  mov x2, x21
0x03DC7410: e40316aa  mov x4, x22
0x03DC7414: 012140f9  ldr x1, [x8, #0x40]
0x03DC7418: 200040f9  ldr x0, [x1]
0x03DC741C: b6031ff8  stur x22, [x29, #-0x10]
0x03DC7420: 280840f9  ldr x8, [x1, #0x10]
0x03DC7424: 00013fd6  blr x8
0x03DC7428: b50358f8  ldur x21, [x29, #-0x80]
0x03DC742C: e10314aa  mov x1, x20
0x03DC7430: e20317aa  mov x2, x23
0x03DC7434: e00315aa  mov x0, x21
0x03DC7438: 4e1dd094  bl #0x71ce970
0x03DC743C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7440: e00315aa  mov x0, x21
0x03DC7444: 080140f9  ldr x8, [x8]
0x03DC7448: 014140f9  ldr x1, [x8, #0x80]
0x03DC744C: 7be5ce97  bl #0x3180a38
0x03DC7450: b68358f8  ldur x22, [x29, #-0x78]
0x03DC7454: 150040f9  ldr x21, [x0]
0x03DC7458: e10314aa  mov x1, x20
0x03DC745C: e20317aa  mov x2, x23
0x03DC7460: e00316aa  mov x0, x22
0x03DC7464: 431dd094  bl #0x71ce970
0x03DC7468: 681e40f9  ldr x8, [x19, #0x38]
0x03DC746C: e00316aa  mov x0, x22
0x03DC7470: 080140f9  ldr x8, [x8]
0x03DC7474: 084140f9  ldr x8, [x8, #0x80]
0x03DC7478: 01810291  add x1, x8, #0xa0
0x03DC747C: 6fe5ce97  bl #0x3180a38
0x03DC7480: b40b79a9  ldp x20, x2, [x29, #-0x70]
0x03DC7484: e10300aa  mov x1, x0
0x03DC7488: e00314aa  mov x0, x20
0x03DC748C: 391dd094  bl #0x71ce970
0x03DC7490: f50200b4  cbz x21, #0x3dc74ec
0x03DC7494: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7498: a34300d1  sub x3, x29, #0x10
0x03DC749C: e20315aa  mov x2, x21
0x03DC74A0: e40314aa  mov x4, x20
0x03DC74A4: 012940f9  ldr x1, [x8, #0x50]
0x03DC74A8: 200040f9  ldr x0, [x1]
0x03DC74AC: b4031ff8  stur x20, [x29, #-0x10]
0x03DC74B0: 280840f9  ldr x8, [x1, #0x10]
0x03DC74B4: 00013fd6  blr x8
0x03DC74B8: a88357f8  ldur x8, [x29, #-0x88]
0x03DC74BC: 081540f9  ldr x8, [x8, #0x28]
0x03DC74C0: a9835ff8  ldur x9, [x29, #-8]
0x03DC74C4: 1f0109eb  cmp x8, x9
0x03DC74C8: 41010054  b.ne #0x3dc74f0
0x03DC74CC: bf030091  mov sp, x29
0x03DC74D0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC74D4: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC74D8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC74DC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC74E0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC74E4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC74E8: c0035fd6  ret
0x03DC74EC: f0e5ce97  bl #0x3180cac
0x03DC74F0: 281dd094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC74F4 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<BoardTilePositionComponent, FeedingCombinationComponent, IdComponent, InteractionComponent, ProducerComponent, TimeCycleComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_BoardTilePositionComponent__FeedingCombinationComponent__IdComponent__InteractionComponent__ProducerComponent__TimeCycleComponent_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__o target, const MethodInfo_3DC74F4* method);
; bytes=424 sha256=1592fb99413233bc947a713f56139139fb139c4d664c8052f8f203fa2f9df753 status=arm64_complete_bound indexed_start=True
0x03DC74F4: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x03DC74F8: f65701a9  stp x22, x21, [sp, #0x10]
0x03DC74FC: f44f02a9  stp x20, x19, [sp, #0x20]
0x03DC7500: ff8312d1  sub sp, sp, #0x4a0
0x03DC7504: 281c40f9  ldr x8, [x1, #0x38]
0x03DC7508: f30301aa  mov x19, x1
0x03DC750C: f40300aa  mov x20, x0
0x03DC7510: 680000b5  cbnz x8, #0x3dc751c
0x03DC7514: e00313aa  mov x0, x19
0x03DC7518: d83cce97  bl #0x3156878
0x03DC751C: 800240f9  ldr x0, [x20]
0x03DC7520: c00b00b4  cbz x0, #0x3dc7698
0x03DC7524: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7528: 810a40b9  ldr w1, [x20, #8]
0x03DC752C: 020940f9  ldr x2, [x8, #0x10]
0x03DC7530: 3a54f997  bl #0x3c1c618
0x03DC7534: 800240f9  ldr x0, [x20]
0x03DC7538: 000b00b4  cbz x0, #0x3dc7698
0x03DC753C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7540: 810a40f9  ldr x1, [x20, #0x10]
0x03DC7544: f6c30d91  add x22, sp, #0x370
0x03DC7548: 021140f9  ldr x2, [x8, #0x20]
0x03DC754C: 3b56f997  bl #0x3c1ce38
0x03DC7550: 950240f9  ldr x21, [x20]
0x03DC7554: e0c30d91  add x0, sp, #0x370
0x03DC7558: 021c8052  movz w2, #0xe0
0x03DC755C: e10314aa  mov x1, x20
0x03DC7560: 041dd094  bl #0x71ce970
0x03DC7564: c082c13c  ldur q0, [x22, #0x18]
0x03DC7568: c182c23c  ldur q1, [x22, #0x28]
0x03DC756C: c282c33c  ldur q2, [x22, #0x38]
0x03DC7570: e0071aad  stp q0, q1, [sp, #0x340]
0x03DC7574: e2db803d  str q2, [sp, #0x360]
0x03DC7578: 150900b4  cbz x21, #0x3dc7698
0x03DC757C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7580: e0075aad  ldp q0, q1, [sp, #0x340]
0x03DC7584: e2dbc03d  ldr q2, [sp, #0x360]
0x03DC7588: e1830991  add x1, sp, #0x260
0x03DC758C: 021940f9  ldr x2, [x8, #0x30]
0x03DC7590: e00315aa  mov x0, x21
0x03DC7594: f6830991  add x22, sp, #0x260
0x03DC7598: e00713ad  stp q0, q1, [sp, #0x260]
0x03DC759C: e2a3803d  str q2, [sp, #0x280]
0x03DC75A0: 8a56f997  bl #0x3c1cfc8
0x03DC75A4: 950240f9  ldr x21, [x20]
0x03DC75A8: e0830991  add x0, sp, #0x260
0x03DC75AC: 021c8052  movz w2, #0xe0
0x03DC75B0: e10314aa  mov x1, x20
0x03DC75B4: ef1cd094  bl #0x71ce970
0x03DC75B8: c082c43c  ldur q0, [x22, #0x48]
0x03DC75BC: c182c53c  ldur q1, [x22, #0x58]
0x03DC75C0: e86741f9  ldr x8, [sp, #0x2c8]
0x03DC75C4: e08711ad  stp q0, q1, [sp, #0x230]
0x03DC75C8: e82b01f9  str x8, [sp, #0x250]
0x03DC75CC: 750600b4  cbz x21, #0x3dc7698
0x03DC75D0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC75D4: e08751ad  ldp q0, q1, [sp, #0x230]
0x03DC75D8: e92b41f9  ldr x9, [sp, #0x250]
0x03DC75DC: e1430591  add x1, sp, #0x150
0x03DC75E0: 022140f9  ldr x2, [x8, #0x40]
0x03DC75E4: e00315aa  mov x0, x21
0x03DC75E8: e0870aad  stp q0, q1, [sp, #0x150]
0x03DC75EC: e9bb00f9  str x9, [sp, #0x170]
0x03DC75F0: e456f997  bl #0x3c1d180
0x03DC75F4: 950240f9  ldr x21, [x20]
0x03DC75F8: e0430591  add x0, sp, #0x150
0x03DC75FC: 021c8052  movz w2, #0xe0
0x03DC7600: e10314aa  mov x1, x20
0x03DC7604: db1cd094  bl #0x71ce970
0x03DC7608: e0074ead  ldp q0, q1, [sp, #0x1c0]
0x03DC760C: e08709ad  stp q0, q1, [sp, #0x130]
0x03DC7610: 550400b4  cbz x21, #0x3dc7698
0x03DC7614: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7618: e08749ad  ldp q0, q1, [sp, #0x130]
0x03DC761C: e1430191  add x1, sp, #0x50
0x03DC7620: e00315aa  mov x0, x21
0x03DC7624: 022940f9  ldr x2, [x8, #0x50]
0x03DC7628: e08702ad  stp q0, q1, [sp, #0x50]
0x03DC762C: f6430191  add x22, sp, #0x50
0x03DC7630: d658f997  bl #0x3c1d988
0x03DC7634: 950240f9  ldr x21, [x20]
0x03DC7638: e0430191  add x0, sp, #0x50
0x03DC763C: 021c8052  movz w2, #0xe0
0x03DC7640: e10314aa  mov x1, x20
0x03DC7644: cb1cd094  bl #0x71ce970
0x03DC7648: c1420291  add x1, x22, #0x90
0x03DC764C: e0030091  mov x0, sp
0x03DC7650: 020a8052  movz w2, #0x50
0x03DC7654: c71cd094  bl #0x71ce970
0x03DC7658: 150200b4  cbz x21, #0x3dc7698
0x03DC765C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7660: e0431191  add x0, sp, #0x450
0x03DC7664: e1030091  mov x1, sp
0x03DC7668: 020a8052  movz w2, #0x50
0x03DC766C: 133140f9  ldr x19, [x8, #0x60]
0x03DC7670: c01cd094  bl #0x71ce970
0x03DC7674: e1431191  add x1, sp, #0x450
0x03DC7678: e00315aa  mov x0, x21
0x03DC767C: e20313aa  mov x2, x19
0x03DC7680: 9259f997  bl #0x3c1dcc8
0x03DC7684: ff831291  add sp, sp, #0x4a0
0x03DC7688: f44f42a9  ldp x20, x19, [sp, #0x20]
0x03DC768C: f65741a9  ldp x22, x21, [sp, #0x10]
0x03DC7690: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x03DC7694: c0035fd6  ret
0x03DC7698: 85e5ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC769C | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__o target, const MethodInfo_3DC769C* method);
; bytes=1368 sha256=de1198ec55f1e495f9183f4ba2e0749e7dc3792be06e3fb7d89bfccb0ee90ecc status=arm64_complete_bound indexed_start=True
0x03DC769C: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC76A0: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC76A4: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC76A8: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC76AC: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC76B0: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC76B4: fd030091  mov x29, sp
0x03DC76B8: ffc302d1  sub sp, sp, #0xb0
0x03DC76BC: 48d03bd5  mrs x8, tpidr_el0
0x03DC76C0: a80315f8  stur x8, [x29, #-0xb0]
0x03DC76C4: 081540f9  ldr x8, [x8, #0x28]
0x03DC76C8: f30301aa  mov x19, x1
0x03DC76CC: f40300aa  mov x20, x0
0x03DC76D0: a8031ff8  stur x8, [x29, #-0x10]
0x03DC76D4: 3b1c40f9  ldr x27, [x1, #0x38]
0x03DC76D8: 9b0000b5  cbnz x27, #0x3dc76e8
0x03DC76DC: e00313aa  mov x0, x19
0x03DC76E0: 663cce97  bl #0x3156878
0x03DC76E4: 7b1e40f9  ldr x27, [x19, #0x38]
0x03DC76E8: 682740a9  ldp x8, x9, [x27]
0x03DC76EC: 6a0f40f9  ldr x10, [x27, #0x18]
0x03DC76F0: 6b1740f9  ldr x11, [x27, #0x28]
0x03DC76F4: 6c1f40f9  ldr x12, [x27, #0x38]
0x03DC76F8: 6d2740f9  ldr x13, [x27, #0x48]
0x03DC76FC: 6e2f40f9  ldr x14, [x27, #0x58]
0x03DC7700: 29fd40b9  ldr w9, [x9, #0xfc]
0x03DC7704: 16fd40b9  ldr w22, [x8, #0xfc]
0x03DC7708: 50fd40b9  ldr w16, [x10, #0xfc]
0x03DC770C: 6ffd40b9  ldr w15, [x11, #0xfc]
0x03DC7710: a9031ef8  stur x9, [x29, #-0x20]
0x03DC7714: 8cfd40b9  ldr w12, [x12, #0xfc]
0x03DC7718: abfd40b9  ldr w11, [x13, #0xfc]
0x03DC771C: cafd40b9  ldr w10, [x14, #0xfc]
0x03DC7720: 293d0091  add x9, x9, #0xf
0x03DC7724: e8030091  mov x8, sp
0x03DC7728: 29717c92  and x9, x9, #0x1fffffff0
0x03DC772C: 1c0109cb  sub x28, x8, x9
0x03DC7730: 9f030091  mov sp, x28
0x03DC7734: 093e0091  add x9, x16, #0xf
0x03DC7738: e8030091  mov x8, sp
0x03DC773C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7740: 190109cb  sub x25, x8, x9
0x03DC7744: 3f030091  mov sp, x25
0x03DC7748: e93d0091  add x9, x15, #0xf
0x03DC774C: e8030091  mov x8, sp
0x03DC7750: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7754: 080109cb  sub x8, x8, x9
0x03DC7758: af831cf8  stur x15, [x29, #-0x38]
0x03DC775C: a8433da9  stp x8, x16, [x29, #-0x30]
0x03DC7760: 1f010091  mov sp, x8
0x03DC7764: 893d0091  add x9, x12, #0xf
0x03DC7768: e8030091  mov x8, sp
0x03DC776C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7770: 080109cb  sub x8, x8, x9
0x03DC7774: a8333aa9  stp x8, x12, [x29, #-0x60]
0x03DC7778: 1f010091  mov sp, x8
0x03DC777C: 693d0091  add x9, x11, #0xf
0x03DC7780: e8030091  mov x8, sp
0x03DC7784: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7788: 080109cb  sub x8, x8, x9
0x03DC778C: ab8318f8  stur x11, [x29, #-0x78]
0x03DC7790: a8031bf8  stur x8, [x29, #-0x50]
0x03DC7794: 1f010091  mov sp, x8
0x03DC7798: 493d0091  add x9, x10, #0xf
0x03DC779C: e8030091  mov x8, sp
0x03DC77A0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC77A4: 080109cb  sub x8, x8, x9
0x03DC77A8: a8ab36a9  stp x8, x10, [x29, #-0x98]
0x03DC77AC: 1f010091  mov sp, x8
0x03DC77B0: c93e0091  add x9, x22, #0xf
0x03DC77B4: e8030091  mov x8, sp
0x03DC77B8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC77BC: 180109cb  sub x24, x8, x9
0x03DC77C0: 1f030091  mov sp, x24
0x03DC77C4: e8030091  mov x8, sp
0x03DC77C8: 1a0109cb  sub x26, x8, x9
0x03DC77CC: 5f030091  mov sp, x26
0x03DC77D0: e8030091  mov x8, sp
0x03DC77D4: 170109cb  sub x23, x8, x9
0x03DC77D8: ff020091  mov sp, x23
0x03DC77DC: e8030091  mov x8, sp
0x03DC77E0: 150109cb  sub x21, x8, x9
0x03DC77E4: bf020091  mov sp, x21
0x03DC77E8: e8030091  mov x8, sp
0x03DC77EC: 080109cb  sub x8, x8, x9
0x03DC77F0: a8831bf8  stur x8, [x29, #-0x48]
0x03DC77F4: 1f010091  mov sp, x8
0x03DC77F8: e8030091  mov x8, sp
0x03DC77FC: 080109cb  sub x8, x8, x9
0x03DC7800: a8031cf8  stur x8, [x29, #-0x40]
0x03DC7804: 1f010091  mov sp, x8
0x03DC7808: e8030091  mov x8, sp
0x03DC780C: 080109cb  sub x8, x8, x9
0x03DC7810: a80319f8  stur x8, [x29, #-0x70]
0x03DC7814: 1f010091  mov sp, x8
0x03DC7818: e8030091  mov x8, sp
0x03DC781C: 080109cb  sub x8, x8, x9
0x03DC7820: a88319f8  stur x8, [x29, #-0x68]
0x03DC7824: 1f010091  mov sp, x8
0x03DC7828: e8030091  mov x8, sp
0x03DC782C: 080109cb  sub x8, x8, x9
0x03DC7830: a88317f8  stur x8, [x29, #-0x88]
0x03DC7834: 1f010091  mov sp, x8
0x03DC7838: e8030091  mov x8, sp
0x03DC783C: 080109cb  sub x8, x8, x9
0x03DC7840: a80318f8  stur x8, [x29, #-0x80]
0x03DC7844: 1f010091  mov sp, x8
0x03DC7848: e8030091  mov x8, sp
0x03DC784C: 080109cb  sub x8, x8, x9
0x03DC7850: a88315f8  stur x8, [x29, #-0xa8]
0x03DC7854: 1f010091  mov sp, x8
0x03DC7858: e8030091  mov x8, sp
0x03DC785C: 080109cb  sub x8, x8, x9
0x03DC7860: a80316f8  stur x8, [x29, #-0xa0]
0x03DC7864: 1f010091  mov sp, x8
0x03DC7868: e00318aa  mov x0, x24
0x03DC786C: e10314aa  mov x1, x20
0x03DC7870: e20316aa  mov x2, x22
0x03DC7874: 3f1cd094  bl #0x71ce970
0x03DC7878: 680340f9  ldr x8, [x27]
0x03DC787C: e00318aa  mov x0, x24
0x03DC7880: 014140f9  ldr x1, [x8, #0x80]
0x03DC7884: 6de4ce97  bl #0x3180a38
0x03DC7888: 180040f9  ldr x24, [x0]
0x03DC788C: e0031aaa  mov x0, x26
0x03DC7890: e10314aa  mov x1, x20
0x03DC7894: e20316aa  mov x2, x22
0x03DC7898: 361cd094  bl #0x71ce970
0x03DC789C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC78A0: e0031aaa  mov x0, x26
0x03DC78A4: 080140f9  ldr x8, [x8]
0x03DC78A8: 084140f9  ldr x8, [x8, #0x80]
0x03DC78AC: 01810091  add x1, x8, #0x20
0x03DC78B0: 62e4ce97  bl #0x3180a38
0x03DC78B4: a2035ef8  ldur x2, [x29, #-0x20]
0x03DC78B8: e10300aa  mov x1, x0
0x03DC78BC: e0031caa  mov x0, x28
0x03DC78C0: 2c1cd094  bl #0x71ce970
0x03DC78C4: 581900b4  cbz x24, #0x3dc7bec
0x03DC78C8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC78CC: a36300d1  sub x3, x29, #0x18
0x03DC78D0: e20318aa  mov x2, x24
0x03DC78D4: e4031caa  mov x4, x28
0x03DC78D8: 010940f9  ldr x1, [x8, #0x10]
0x03DC78DC: 200040f9  ldr x0, [x1]
0x03DC78E0: bc831ef8  stur x28, [x29, #-0x18]
0x03DC78E4: 280840f9  ldr x8, [x1, #0x10]
0x03DC78E8: 00013fd6  blr x8
0x03DC78EC: e00317aa  mov x0, x23
0x03DC78F0: e10314aa  mov x1, x20
0x03DC78F4: e20316aa  mov x2, x22
0x03DC78F8: 1e1cd094  bl #0x71ce970
0x03DC78FC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7900: e00317aa  mov x0, x23
0x03DC7904: 080140f9  ldr x8, [x8]
0x03DC7908: 014140f9  ldr x1, [x8, #0x80]
0x03DC790C: 4be4ce97  bl #0x3180a38
0x03DC7910: 170040f9  ldr x23, [x0]
0x03DC7914: e00315aa  mov x0, x21
0x03DC7918: e10314aa  mov x1, x20
0x03DC791C: e20316aa  mov x2, x22
0x03DC7920: 141cd094  bl #0x71ce970
0x03DC7924: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7928: e00315aa  mov x0, x21
0x03DC792C: 080140f9  ldr x8, [x8]
0x03DC7930: 084140f9  ldr x8, [x8, #0x80]
0x03DC7934: 01010191  add x1, x8, #0x40
0x03DC7938: 40e4ce97  bl #0x3180a38
0x03DC793C: a2835df8  ldur x2, [x29, #-0x28]
0x03DC7940: e10300aa  mov x1, x0
0x03DC7944: e00319aa  mov x0, x25
0x03DC7948: 0a1cd094  bl #0x71ce970
0x03DC794C: 171500b4  cbz x23, #0x3dc7bec
0x03DC7950: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7954: a36300d1  sub x3, x29, #0x18
0x03DC7958: e20317aa  mov x2, x23
0x03DC795C: e40319aa  mov x4, x25
0x03DC7960: 011140f9  ldr x1, [x8, #0x20]
0x03DC7964: 200040f9  ldr x0, [x1]
0x03DC7968: b9831ef8  stur x25, [x29, #-0x18]
0x03DC796C: 280840f9  ldr x8, [x1, #0x10]
0x03DC7970: 00013fd6  blr x8
0x03DC7974: b5835bf8  ldur x21, [x29, #-0x48]
0x03DC7978: e10314aa  mov x1, x20
0x03DC797C: e20316aa  mov x2, x22
0x03DC7980: e00315aa  mov x0, x21
0x03DC7984: fb1bd094  bl #0x71ce970
0x03DC7988: 681e40f9  ldr x8, [x19, #0x38]
0x03DC798C: e00315aa  mov x0, x21
0x03DC7990: 080140f9  ldr x8, [x8]
0x03DC7994: 014140f9  ldr x1, [x8, #0x80]
0x03DC7998: 28e4ce97  bl #0x3180a38
0x03DC799C: b7035cf8  ldur x23, [x29, #-0x40]
0x03DC79A0: 150040f9  ldr x21, [x0]
0x03DC79A4: e10314aa  mov x1, x20
0x03DC79A8: e20316aa  mov x2, x22
0x03DC79AC: e00317aa  mov x0, x23
0x03DC79B0: f01bd094  bl #0x71ce970
0x03DC79B4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC79B8: e00317aa  mov x0, x23
0x03DC79BC: 080140f9  ldr x8, [x8]
0x03DC79C0: 084140f9  ldr x8, [x8, #0x80]
0x03DC79C4: 01810191  add x1, x8, #0x60
0x03DC79C8: 1ce4ce97  bl #0x3180a38
0x03DC79CC: a2df7ca9  ldp x2, x23, [x29, #-0x38]
0x03DC79D0: e10300aa  mov x1, x0
0x03DC79D4: e00317aa  mov x0, x23
0x03DC79D8: e61bd094  bl #0x71ce970
0x03DC79DC: 951000b4  cbz x21, #0x3dc7bec
0x03DC79E0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC79E4: a36300d1  sub x3, x29, #0x18
0x03DC79E8: e20315aa  mov x2, x21
0x03DC79EC: e40317aa  mov x4, x23
0x03DC79F0: 011940f9  ldr x1, [x8, #0x30]
0x03DC79F4: 200040f9  ldr x0, [x1]
0x03DC79F8: b7831ef8  stur x23, [x29, #-0x18]
0x03DC79FC: 280840f9  ldr x8, [x1, #0x10]
0x03DC7A00: 00013fd6  blr x8
0x03DC7A04: b50359f8  ldur x21, [x29, #-0x70]
0x03DC7A08: e10314aa  mov x1, x20
0x03DC7A0C: e20316aa  mov x2, x22
0x03DC7A10: e00315aa  mov x0, x21
0x03DC7A14: d71bd094  bl #0x71ce970
0x03DC7A18: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7A1C: e00315aa  mov x0, x21
0x03DC7A20: 080140f9  ldr x8, [x8]
0x03DC7A24: 014140f9  ldr x1, [x8, #0x80]
0x03DC7A28: 04e4ce97  bl #0x3180a38
0x03DC7A2C: b78359f8  ldur x23, [x29, #-0x68]
0x03DC7A30: 150040f9  ldr x21, [x0]
0x03DC7A34: e10314aa  mov x1, x20
0x03DC7A38: e20316aa  mov x2, x22
0x03DC7A3C: e00317aa  mov x0, x23
0x03DC7A40: cc1bd094  bl #0x71ce970
0x03DC7A44: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7A48: e00317aa  mov x0, x23
0x03DC7A4C: 080140f9  ldr x8, [x8]
0x03DC7A50: 084140f9  ldr x8, [x8, #0x80]
0x03DC7A54: 01010291  add x1, x8, #0x80
0x03DC7A58: f8e3ce97  bl #0x3180a38
0x03DC7A5C: b80b7aa9  ldp x24, x2, [x29, #-0x60]
0x03DC7A60: e10300aa  mov x1, x0
0x03DC7A64: e00318aa  mov x0, x24
0x03DC7A68: c21bd094  bl #0x71ce970
0x03DC7A6C: b7035bf8  ldur x23, [x29, #-0x50]
0x03DC7A70: f50b00b4  cbz x21, #0x3dc7bec
0x03DC7A74: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7A78: a36300d1  sub x3, x29, #0x18
0x03DC7A7C: e20315aa  mov x2, x21
0x03DC7A80: e40318aa  mov x4, x24
0x03DC7A84: 012140f9  ldr x1, [x8, #0x40]
0x03DC7A88: 200040f9  ldr x0, [x1]
0x03DC7A8C: b8831ef8  stur x24, [x29, #-0x18]
0x03DC7A90: 280840f9  ldr x8, [x1, #0x10]
0x03DC7A94: 00013fd6  blr x8
0x03DC7A98: b58357f8  ldur x21, [x29, #-0x88]
0x03DC7A9C: e10314aa  mov x1, x20
0x03DC7AA0: e20316aa  mov x2, x22
0x03DC7AA4: e00315aa  mov x0, x21
0x03DC7AA8: b21bd094  bl #0x71ce970
0x03DC7AAC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7AB0: e00315aa  mov x0, x21
0x03DC7AB4: 080140f9  ldr x8, [x8]
0x03DC7AB8: 014140f9  ldr x1, [x8, #0x80]
0x03DC7ABC: dfe3ce97  bl #0x3180a38
0x03DC7AC0: b80358f8  ldur x24, [x29, #-0x80]
0x03DC7AC4: 150040f9  ldr x21, [x0]
0x03DC7AC8: e10314aa  mov x1, x20
0x03DC7ACC: e20316aa  mov x2, x22
0x03DC7AD0: e00318aa  mov x0, x24
0x03DC7AD4: a71bd094  bl #0x71ce970
0x03DC7AD8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7ADC: e00318aa  mov x0, x24
0x03DC7AE0: 080140f9  ldr x8, [x8]
0x03DC7AE4: 084140f9  ldr x8, [x8, #0x80]
0x03DC7AE8: 01810291  add x1, x8, #0xa0
0x03DC7AEC: d3e3ce97  bl #0x3180a38
0x03DC7AF0: a28358f8  ldur x2, [x29, #-0x78]
0x03DC7AF4: e10300aa  mov x1, x0
0x03DC7AF8: e00317aa  mov x0, x23
0x03DC7AFC: 9d1bd094  bl #0x71ce970
0x03DC7B00: 750700b4  cbz x21, #0x3dc7bec
0x03DC7B04: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7B08: a36300d1  sub x3, x29, #0x18
0x03DC7B0C: e20315aa  mov x2, x21
0x03DC7B10: e40317aa  mov x4, x23
0x03DC7B14: 012940f9  ldr x1, [x8, #0x50]
0x03DC7B18: 200040f9  ldr x0, [x1]
0x03DC7B1C: b7831ef8  stur x23, [x29, #-0x18]
0x03DC7B20: 280840f9  ldr x8, [x1, #0x10]
0x03DC7B24: 00013fd6  blr x8
0x03DC7B28: b58355f8  ldur x21, [x29, #-0xa8]
0x03DC7B2C: e10314aa  mov x1, x20
0x03DC7B30: e20316aa  mov x2, x22
0x03DC7B34: e00315aa  mov x0, x21
0x03DC7B38: 8e1bd094  bl #0x71ce970
0x03DC7B3C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7B40: e00315aa  mov x0, x21
0x03DC7B44: 080140f9  ldr x8, [x8]
0x03DC7B48: 014140f9  ldr x1, [x8, #0x80]
0x03DC7B4C: bbe3ce97  bl #0x3180a38
0x03DC7B50: b70356f8  ldur x23, [x29, #-0xa0]
0x03DC7B54: 150040f9  ldr x21, [x0]
0x03DC7B58: e10314aa  mov x1, x20
0x03DC7B5C: e20316aa  mov x2, x22
0x03DC7B60: e00317aa  mov x0, x23
0x03DC7B64: 831bd094  bl #0x71ce970
0x03DC7B68: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7B6C: e00317aa  mov x0, x23
0x03DC7B70: 080140f9  ldr x8, [x8]
0x03DC7B74: 084140f9  ldr x8, [x8, #0x80]
0x03DC7B78: 01010391  add x1, x8, #0xc0
0x03DC7B7C: afe3ce97  bl #0x3180a38
0x03DC7B80: b48b76a9  ldp x20, x2, [x29, #-0x98]
0x03DC7B84: e10300aa  mov x1, x0
0x03DC7B88: e00314aa  mov x0, x20
0x03DC7B8C: 791bd094  bl #0x71ce970
0x03DC7B90: f50200b4  cbz x21, #0x3dc7bec
0x03DC7B94: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7B98: a36300d1  sub x3, x29, #0x18
0x03DC7B9C: e20315aa  mov x2, x21
0x03DC7BA0: e40314aa  mov x4, x20
0x03DC7BA4: 013140f9  ldr x1, [x8, #0x60]
0x03DC7BA8: 200040f9  ldr x0, [x1]
0x03DC7BAC: b4831ef8  stur x20, [x29, #-0x18]
0x03DC7BB0: 280840f9  ldr x8, [x1, #0x10]
0x03DC7BB4: 00013fd6  blr x8
0x03DC7BB8: a80355f8  ldur x8, [x29, #-0xb0]
0x03DC7BBC: 081540f9  ldr x8, [x8, #0x28]
0x03DC7BC0: a9035ff8  ldur x9, [x29, #-0x10]
0x03DC7BC4: 1f0109eb  cmp x8, x9
0x03DC7BC8: 41010054  b.ne #0x3dc7bf0
0x03DC7BCC: bf030091  mov sp, x29
0x03DC7BD0: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC7BD4: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC7BD8: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC7BDC: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC7BE0: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC7BE4: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC7BE8: c0035fd6  ret
0x03DC7BEC: 30e4ce97  bl #0x3180cac
0x03DC7BF0: 681bd094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC7BF4 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__ValueTuple_T7___o target, const MethodInfo_3DC7BF4* method);
; bytes=1648 sha256=1f2a3b63dcd0b4e4f5fed51f80bbc32bdecec714bf16a07fe8d213afbe3cf2d3 status=arm64_complete_bound indexed_start=True
0x03DC7BF4: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC7BF8: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC7BFC: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC7C00: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC7C04: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC7C08: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC7C0C: fd030091  mov x29, sp
0x03DC7C10: ff8303d1  sub sp, sp, #0xe0
0x03DC7C14: 48d03bd5  mrs x8, tpidr_el0
0x03DC7C18: a80312f8  stur x8, [x29, #-0xe0]
0x03DC7C1C: 081540f9  ldr x8, [x8, #0x28]
0x03DC7C20: f30301aa  mov x19, x1
0x03DC7C24: f40300aa  mov x20, x0
0x03DC7C28: a8031ff8  stur x8, [x29, #-0x10]
0x03DC7C2C: 371c40f9  ldr x23, [x1, #0x38]
0x03DC7C30: 970000b5  cbnz x23, #0x3dc7c40
0x03DC7C34: e00313aa  mov x0, x19
0x03DC7C38: 103bce97  bl #0x3156878
0x03DC7C3C: 771e40f9  ldr x23, [x19, #0x38]
0x03DC7C40: e82640a9  ldp x8, x9, [x23]
0x03DC7C44: ea0e40f9  ldr x10, [x23, #0x18]
0x03DC7C48: eb1640f9  ldr x11, [x23, #0x28]
0x03DC7C4C: ec1e40f9  ldr x12, [x23, #0x38]
0x03DC7C50: ed2640f9  ldr x13, [x23, #0x48]
0x03DC7C54: ee2e40f9  ldr x14, [x23, #0x58]
0x03DC7C58: efc246a9  ldp x15, x16, [x23, #0x68]
0x03DC7C5C: 29fd40b9  ldr w9, [x9, #0xfc]
0x03DC7C60: 18fd40b9  ldr w24, [x8, #0xfc]
0x03DC7C64: 41fd40b9  ldr w1, [x10, #0xfc]
0x03DC7C68: 60fd40b9  ldr w0, [x11, #0xfc]
0x03DC7C6C: a9031ef8  stur x9, [x29, #-0x20]
0x03DC7C70: 91fd40b9  ldr w17, [x12, #0xfc]
0x03DC7C74: adfd40b9  ldr w13, [x13, #0xfc]
0x03DC7C78: ccfd40b9  ldr w12, [x14, #0xfc]
0x03DC7C7C: ebfd40b9  ldr w11, [x15, #0xfc]
0x03DC7C80: 0afe40b9  ldr w10, [x16, #0xfc]
0x03DC7C84: 293d0091  add x9, x9, #0xf
0x03DC7C88: e8030091  mov x8, sp
0x03DC7C8C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7C90: 1b0109cb  sub x27, x8, x9
0x03DC7C94: 7f030091  mov sp, x27
0x03DC7C98: 293c0091  add x9, x1, #0xf
0x03DC7C9C: e8030091  mov x8, sp
0x03DC7CA0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7CA4: 080109cb  sub x8, x8, x9
0x03DC7CA8: a1233da9  stp x1, x8, [x29, #-0x30]
0x03DC7CAC: 1f010091  mov sp, x8
0x03DC7CB0: 093c0091  add x9, x0, #0xf
0x03DC7CB4: e8030091  mov x8, sp
0x03DC7CB8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7CBC: 080109cb  sub x8, x8, x9
0x03DC7CC0: a0233ca9  stp x0, x8, [x29, #-0x40]
0x03DC7CC4: 1f010091  mov sp, x8
0x03DC7CC8: 293e0091  add x9, x17, #0xf
0x03DC7CCC: e8030091  mov x8, sp
0x03DC7CD0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7CD4: 080109cb  sub x8, x8, x9
0x03DC7CD8: a8c739a9  stp x8, x17, [x29, #-0x68]
0x03DC7CDC: 1f010091  mov sp, x8
0x03DC7CE0: a93d0091  add x9, x13, #0xf
0x03DC7CE4: e8030091  mov x8, sp
0x03DC7CE8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7CEC: 080109cb  sub x8, x8, x9
0x03DC7CF0: ad0318f8  stur x13, [x29, #-0x80]
0x03DC7CF4: a8831af8  stur x8, [x29, #-0x58]
0x03DC7CF8: 1f010091  mov sp, x8
0x03DC7CFC: 893d0091  add x9, x12, #0xf
0x03DC7D00: e8030091  mov x8, sp
0x03DC7D04: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7D08: 080109cb  sub x8, x8, x9
0x03DC7D0C: ac8316f8  stur x12, [x29, #-0x98]
0x03DC7D10: a8031bf8  stur x8, [x29, #-0x50]
0x03DC7D14: 1f010091  mov sp, x8
0x03DC7D18: 493d0091  add x9, x10, #0xf
0x03DC7D1C: e8030091  mov x8, sp
0x03DC7D20: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7D24: 080109cb  sub x8, x8, x9
0x03DC7D28: abab34a9  stp x11, x10, [x29, #-0xb8]
0x03DC7D2C: a80314f8  stur x8, [x29, #-0xc0]
0x03DC7D30: 1f010091  mov sp, x8
0x03DC7D34: 693d0091  add x9, x11, #0xf
0x03DC7D38: e8030091  mov x8, sp
0x03DC7D3C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC7D40: 080109cb  sub x8, x8, x9
0x03DC7D44: a88313f8  stur x8, [x29, #-0xc8]
0x03DC7D48: 1f010091  mov sp, x8
0x03DC7D4C: 083f0091  add x8, x24, #0xf
0x03DC7D50: e9030091  mov x9, sp
0x03DC7D54: 08717c92  and x8, x8, #0x1fffffff0
0x03DC7D58: 360108cb  sub x22, x9, x8
0x03DC7D5C: df020091  mov sp, x22
0x03DC7D60: e9030091  mov x9, sp
0x03DC7D64: 3a0108cb  sub x26, x9, x8
0x03DC7D68: 5f030091  mov sp, x26
0x03DC7D6C: e9030091  mov x9, sp
0x03DC7D70: 350108cb  sub x21, x9, x8
0x03DC7D74: bf020091  mov sp, x21
0x03DC7D78: e9030091  mov x9, sp
0x03DC7D7C: 3c0108cb  sub x28, x9, x8
0x03DC7D80: 9f030091  mov sp, x28
0x03DC7D84: e9030091  mov x9, sp
0x03DC7D88: 390108cb  sub x25, x9, x8
0x03DC7D8C: 3f030091  mov sp, x25
0x03DC7D90: e9030091  mov x9, sp
0x03DC7D94: 290108cb  sub x9, x9, x8
0x03DC7D98: a9831bf8  stur x9, [x29, #-0x48]
0x03DC7D9C: 3f010091  mov sp, x9
0x03DC7DA0: e9030091  mov x9, sp
0x03DC7DA4: 290108cb  sub x9, x9, x8
0x03DC7DA8: a98318f8  stur x9, [x29, #-0x78]
0x03DC7DAC: 3f010091  mov sp, x9
0x03DC7DB0: e9030091  mov x9, sp
0x03DC7DB4: 290108cb  sub x9, x9, x8
0x03DC7DB8: a90319f8  stur x9, [x29, #-0x70]
0x03DC7DBC: 3f010091  mov sp, x9
0x03DC7DC0: e9030091  mov x9, sp
0x03DC7DC4: 290108cb  sub x9, x9, x8
0x03DC7DC8: a90317f8  stur x9, [x29, #-0x90]
0x03DC7DCC: 3f010091  mov sp, x9
0x03DC7DD0: e9030091  mov x9, sp
0x03DC7DD4: 290108cb  sub x9, x9, x8
0x03DC7DD8: a98317f8  stur x9, [x29, #-0x88]
0x03DC7DDC: 3f010091  mov sp, x9
0x03DC7DE0: e9030091  mov x9, sp
0x03DC7DE4: 290108cb  sub x9, x9, x8
0x03DC7DE8: a98315f8  stur x9, [x29, #-0xa8]
0x03DC7DEC: 3f010091  mov sp, x9
0x03DC7DF0: e9030091  mov x9, sp
0x03DC7DF4: 290108cb  sub x9, x9, x8
0x03DC7DF8: a90316f8  stur x9, [x29, #-0xa0]
0x03DC7DFC: 3f010091  mov sp, x9
0x03DC7E00: e9030091  mov x9, sp
0x03DC7E04: 290108cb  sub x9, x9, x8
0x03DC7E08: a98312f8  stur x9, [x29, #-0xd8]
0x03DC7E0C: 3f010091  mov sp, x9
0x03DC7E10: e9030091  mov x9, sp
0x03DC7E14: 280108cb  sub x8, x9, x8
0x03DC7E18: a80313f8  stur x8, [x29, #-0xd0]
0x03DC7E1C: 1f010091  mov sp, x8
0x03DC7E20: e00316aa  mov x0, x22
0x03DC7E24: e10314aa  mov x1, x20
0x03DC7E28: e20318aa  mov x2, x24
0x03DC7E2C: d11ad094  bl #0x71ce970
0x03DC7E30: e80240f9  ldr x8, [x23]
0x03DC7E34: e00316aa  mov x0, x22
0x03DC7E38: 014140f9  ldr x1, [x8, #0x80]
0x03DC7E3C: ffe2ce97  bl #0x3180a38
0x03DC7E40: 160040f9  ldr x22, [x0]
0x03DC7E44: e0031aaa  mov x0, x26
0x03DC7E48: e10314aa  mov x1, x20
0x03DC7E4C: e20318aa  mov x2, x24
0x03DC7E50: c81ad094  bl #0x71ce970
0x03DC7E54: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7E58: e0031aaa  mov x0, x26
0x03DC7E5C: 080140f9  ldr x8, [x8]
0x03DC7E60: 084140f9  ldr x8, [x8, #0x80]
0x03DC7E64: 01810091  add x1, x8, #0x20
0x03DC7E68: f4e2ce97  bl #0x3180a38
0x03DC7E6C: a2035ef8  ldur x2, [x29, #-0x20]
0x03DC7E70: e10300aa  mov x1, x0
0x03DC7E74: e0031baa  mov x0, x27
0x03DC7E78: be1ad094  bl #0x71ce970
0x03DC7E7C: 161f00b4  cbz x22, #0x3dc825c
0x03DC7E80: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7E84: a36300d1  sub x3, x29, #0x18
0x03DC7E88: e20316aa  mov x2, x22
0x03DC7E8C: e4031baa  mov x4, x27
0x03DC7E90: 010940f9  ldr x1, [x8, #0x10]
0x03DC7E94: 200040f9  ldr x0, [x1]
0x03DC7E98: bb831ef8  stur x27, [x29, #-0x18]
0x03DC7E9C: 280840f9  ldr x8, [x1, #0x10]
0x03DC7EA0: 00013fd6  blr x8
0x03DC7EA4: e00315aa  mov x0, x21
0x03DC7EA8: e10314aa  mov x1, x20
0x03DC7EAC: e20318aa  mov x2, x24
0x03DC7EB0: b01ad094  bl #0x71ce970
0x03DC7EB4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7EB8: e00315aa  mov x0, x21
0x03DC7EBC: 080140f9  ldr x8, [x8]
0x03DC7EC0: 014140f9  ldr x1, [x8, #0x80]
0x03DC7EC4: dde2ce97  bl #0x3180a38
0x03DC7EC8: 150040f9  ldr x21, [x0]
0x03DC7ECC: e0031caa  mov x0, x28
0x03DC7ED0: e10314aa  mov x1, x20
0x03DC7ED4: e20318aa  mov x2, x24
0x03DC7ED8: a61ad094  bl #0x71ce970
0x03DC7EDC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7EE0: e0031caa  mov x0, x28
0x03DC7EE4: 080140f9  ldr x8, [x8]
0x03DC7EE8: 084140f9  ldr x8, [x8, #0x80]
0x03DC7EEC: 01010191  add x1, x8, #0x40
0x03DC7EF0: d2e2ce97  bl #0x3180a38
0x03DC7EF4: a25b7da9  ldp x2, x22, [x29, #-0x30]
0x03DC7EF8: e10300aa  mov x1, x0
0x03DC7EFC: e00316aa  mov x0, x22
0x03DC7F00: 9c1ad094  bl #0x71ce970
0x03DC7F04: d51a00b4  cbz x21, #0x3dc825c
0x03DC7F08: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7F0C: a36300d1  sub x3, x29, #0x18
0x03DC7F10: e20315aa  mov x2, x21
0x03DC7F14: e40316aa  mov x4, x22
0x03DC7F18: 011140f9  ldr x1, [x8, #0x20]
0x03DC7F1C: 200040f9  ldr x0, [x1]
0x03DC7F20: b6831ef8  stur x22, [x29, #-0x18]
0x03DC7F24: 280840f9  ldr x8, [x1, #0x10]
0x03DC7F28: 00013fd6  blr x8
0x03DC7F2C: e00319aa  mov x0, x25
0x03DC7F30: e10314aa  mov x1, x20
0x03DC7F34: e20318aa  mov x2, x24
0x03DC7F38: 8e1ad094  bl #0x71ce970
0x03DC7F3C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7F40: e00319aa  mov x0, x25
0x03DC7F44: 080140f9  ldr x8, [x8]
0x03DC7F48: 014140f9  ldr x1, [x8, #0x80]
0x03DC7F4C: bbe2ce97  bl #0x3180a38
0x03DC7F50: b6835bf8  ldur x22, [x29, #-0x48]
0x03DC7F54: 150040f9  ldr x21, [x0]
0x03DC7F58: e10314aa  mov x1, x20
0x03DC7F5C: e20318aa  mov x2, x24
0x03DC7F60: e00316aa  mov x0, x22
0x03DC7F64: 831ad094  bl #0x71ce970
0x03DC7F68: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7F6C: e00316aa  mov x0, x22
0x03DC7F70: 080140f9  ldr x8, [x8]
0x03DC7F74: 084140f9  ldr x8, [x8, #0x80]
0x03DC7F78: 01810191  add x1, x8, #0x60
0x03DC7F7C: afe2ce97  bl #0x3180a38
0x03DC7F80: a25b7ca9  ldp x2, x22, [x29, #-0x40]
0x03DC7F84: e10300aa  mov x1, x0
0x03DC7F88: e00316aa  mov x0, x22
0x03DC7F8C: 791ad094  bl #0x71ce970
0x03DC7F90: 751600b4  cbz x21, #0x3dc825c
0x03DC7F94: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7F98: a36300d1  sub x3, x29, #0x18
0x03DC7F9C: e20315aa  mov x2, x21
0x03DC7FA0: e40316aa  mov x4, x22
0x03DC7FA4: 011940f9  ldr x1, [x8, #0x30]
0x03DC7FA8: 200040f9  ldr x0, [x1]
0x03DC7FAC: b6831ef8  stur x22, [x29, #-0x18]
0x03DC7FB0: 280840f9  ldr x8, [x1, #0x10]
0x03DC7FB4: 00013fd6  blr x8
0x03DC7FB8: b58358f8  ldur x21, [x29, #-0x78]
0x03DC7FBC: e10314aa  mov x1, x20
0x03DC7FC0: e20318aa  mov x2, x24
0x03DC7FC4: e00315aa  mov x0, x21
0x03DC7FC8: 6a1ad094  bl #0x71ce970
0x03DC7FCC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7FD0: e00315aa  mov x0, x21
0x03DC7FD4: 080140f9  ldr x8, [x8]
0x03DC7FD8: 014140f9  ldr x1, [x8, #0x80]
0x03DC7FDC: 97e2ce97  bl #0x3180a38
0x03DC7FE0: b60359f8  ldur x22, [x29, #-0x70]
0x03DC7FE4: 150040f9  ldr x21, [x0]
0x03DC7FE8: e10314aa  mov x1, x20
0x03DC7FEC: e20318aa  mov x2, x24
0x03DC7FF0: e00316aa  mov x0, x22
0x03DC7FF4: 5f1ad094  bl #0x71ce970
0x03DC7FF8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC7FFC: e00316aa  mov x0, x22
0x03DC8000: 080140f9  ldr x8, [x8]
0x03DC8004: 084140f9  ldr x8, [x8, #0x80]
0x03DC8008: 01010291  add x1, x8, #0x80
0x03DC800C: 8be2ce97  bl #0x3180a38
0x03DC8010: b98b79a9  ldp x25, x2, [x29, #-0x68]
0x03DC8014: e10300aa  mov x1, x0
0x03DC8018: e00319aa  mov x0, x25
0x03DC801C: 551ad094  bl #0x71ce970
0x03DC8020: b7db7aa9  ldp x23, x22, [x29, #-0x58]
0x03DC8024: d51100b4  cbz x21, #0x3dc825c
0x03DC8028: 681e40f9  ldr x8, [x19, #0x38]
0x03DC802C: a36300d1  sub x3, x29, #0x18
0x03DC8030: e20315aa  mov x2, x21
0x03DC8034: e40319aa  mov x4, x25
0x03DC8038: 012140f9  ldr x1, [x8, #0x40]
0x03DC803C: 200040f9  ldr x0, [x1]
0x03DC8040: b9831ef8  stur x25, [x29, #-0x18]
0x03DC8044: 280840f9  ldr x8, [x1, #0x10]
0x03DC8048: 00013fd6  blr x8
0x03DC804C: b50357f8  ldur x21, [x29, #-0x90]
0x03DC8050: e10314aa  mov x1, x20
0x03DC8054: e20318aa  mov x2, x24
0x03DC8058: e00315aa  mov x0, x21
0x03DC805C: 451ad094  bl #0x71ce970
0x03DC8060: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8064: e00315aa  mov x0, x21
0x03DC8068: 080140f9  ldr x8, [x8]
0x03DC806C: 014140f9  ldr x1, [x8, #0x80]
0x03DC8070: 72e2ce97  bl #0x3180a38
0x03DC8074: b98357f8  ldur x25, [x29, #-0x88]
0x03DC8078: 150040f9  ldr x21, [x0]
0x03DC807C: e10314aa  mov x1, x20
0x03DC8080: e20318aa  mov x2, x24
0x03DC8084: e00319aa  mov x0, x25
0x03DC8088: 3a1ad094  bl #0x71ce970
0x03DC808C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8090: e00319aa  mov x0, x25
0x03DC8094: 080140f9  ldr x8, [x8]
0x03DC8098: 084140f9  ldr x8, [x8, #0x80]
0x03DC809C: 01810291  add x1, x8, #0xa0
0x03DC80A0: 66e2ce97  bl #0x3180a38
0x03DC80A4: a20358f8  ldur x2, [x29, #-0x80]
0x03DC80A8: e10300aa  mov x1, x0
0x03DC80AC: e00317aa  mov x0, x23
0x03DC80B0: 301ad094  bl #0x71ce970
0x03DC80B4: 550d00b4  cbz x21, #0x3dc825c
0x03DC80B8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC80BC: a36300d1  sub x3, x29, #0x18
0x03DC80C0: e20315aa  mov x2, x21
0x03DC80C4: e40317aa  mov x4, x23
0x03DC80C8: 012940f9  ldr x1, [x8, #0x50]
0x03DC80CC: 200040f9  ldr x0, [x1]
0x03DC80D0: b7831ef8  stur x23, [x29, #-0x18]
0x03DC80D4: 280840f9  ldr x8, [x1, #0x10]
0x03DC80D8: 00013fd6  blr x8
0x03DC80DC: b58355f8  ldur x21, [x29, #-0xa8]
0x03DC80E0: e10314aa  mov x1, x20
0x03DC80E4: e20318aa  mov x2, x24
0x03DC80E8: e00315aa  mov x0, x21
0x03DC80EC: 211ad094  bl #0x71ce970
0x03DC80F0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC80F4: e00315aa  mov x0, x21
0x03DC80F8: 080140f9  ldr x8, [x8]
0x03DC80FC: 014140f9  ldr x1, [x8, #0x80]
0x03DC8100: 4ee2ce97  bl #0x3180a38
0x03DC8104: b70356f8  ldur x23, [x29, #-0xa0]
0x03DC8108: 150040f9  ldr x21, [x0]
0x03DC810C: e10314aa  mov x1, x20
0x03DC8110: e20318aa  mov x2, x24
0x03DC8114: e00317aa  mov x0, x23
0x03DC8118: 161ad094  bl #0x71ce970
0x03DC811C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8120: e00317aa  mov x0, x23
0x03DC8124: 080140f9  ldr x8, [x8]
0x03DC8128: 084140f9  ldr x8, [x8, #0x80]
0x03DC812C: 01010391  add x1, x8, #0xc0
0x03DC8130: 42e2ce97  bl #0x3180a38
0x03DC8134: a28356f8  ldur x2, [x29, #-0x98]
0x03DC8138: e10300aa  mov x1, x0
0x03DC813C: e00316aa  mov x0, x22
0x03DC8140: 0c1ad094  bl #0x71ce970
0x03DC8144: d50800b4  cbz x21, #0x3dc825c
0x03DC8148: 681e40f9  ldr x8, [x19, #0x38]
0x03DC814C: a36300d1  sub x3, x29, #0x18
0x03DC8150: e20315aa  mov x2, x21
0x03DC8154: e40316aa  mov x4, x22
0x03DC8158: 013140f9  ldr x1, [x8, #0x60]
0x03DC815C: 200040f9  ldr x0, [x1]
0x03DC8160: b6831ef8  stur x22, [x29, #-0x18]
0x03DC8164: 280840f9  ldr x8, [x1, #0x10]
0x03DC8168: 00013fd6  blr x8
0x03DC816C: b58352f8  ldur x21, [x29, #-0xd8]
0x03DC8170: e10314aa  mov x1, x20
0x03DC8174: e20318aa  mov x2, x24
0x03DC8178: e00315aa  mov x0, x21
0x03DC817C: fd19d094  bl #0x71ce970
0x03DC8180: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8184: e00315aa  mov x0, x21
0x03DC8188: 080140f9  ldr x8, [x8]
0x03DC818C: 014140f9  ldr x1, [x8, #0x80]
0x03DC8190: 2ae2ce97  bl #0x3180a38
0x03DC8194: b60353f8  ldur x22, [x29, #-0xd0]
0x03DC8198: 150040f9  ldr x21, [x0]
0x03DC819C: e10314aa  mov x1, x20
0x03DC81A0: e20318aa  mov x2, x24
0x03DC81A4: e00316aa  mov x0, x22
0x03DC81A8: f219d094  bl #0x71ce970
0x03DC81AC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC81B0: e00316aa  mov x0, x22
0x03DC81B4: 080140f9  ldr x8, [x8]
0x03DC81B8: 084140f9  ldr x8, [x8, #0x80]
0x03DC81BC: 01810391  add x1, x8, #0xe0
0x03DC81C0: 1ee2ce97  bl #0x3180a38
0x03DC81C4: b48353f8  ldur x20, [x29, #-0xc8]
0x03DC81C8: a28354f8  ldur x2, [x29, #-0xb8]
0x03DC81CC: e10300aa  mov x1, x0
0x03DC81D0: e00314aa  mov x0, x20
0x03DC81D4: e719d094  bl #0x71ce970
0x03DC81D8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC81DC: e00314aa  mov x0, x20
0x03DC81E0: 083540f9  ldr x8, [x8, #0x68]
0x03DC81E4: 014140f9  ldr x1, [x8, #0x80]
0x03DC81E8: 14e2ce97  bl #0x3180a38
0x03DC81EC: b40354f8  ldur x20, [x29, #-0xc0]
0x03DC81F0: a20355f8  ldur x2, [x29, #-0xb0]
0x03DC81F4: e10300aa  mov x1, x0
0x03DC81F8: e00314aa  mov x0, x20
0x03DC81FC: dd19d094  bl #0x71ce970
0x03DC8200: f50200b4  cbz x21, #0x3dc825c
0x03DC8204: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8208: a36300d1  sub x3, x29, #0x18
0x03DC820C: e20315aa  mov x2, x21
0x03DC8210: e40314aa  mov x4, x20
0x03DC8214: 013d40f9  ldr x1, [x8, #0x78]
0x03DC8218: 200040f9  ldr x0, [x1]
0x03DC821C: b4831ef8  stur x20, [x29, #-0x18]
0x03DC8220: 280840f9  ldr x8, [x1, #0x10]
0x03DC8224: 00013fd6  blr x8
0x03DC8228: a80352f8  ldur x8, [x29, #-0xe0]
0x03DC822C: 081540f9  ldr x8, [x8, #0x28]
0x03DC8230: a9035ff8  ldur x9, [x29, #-0x10]
0x03DC8234: 1f0109eb  cmp x8, x9
0x03DC8238: 41010054  b.ne #0x3dc8260
0x03DC823C: bf030091  mov sp, x29
0x03DC8240: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC8244: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC8248: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC824C: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC8250: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC8254: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC8258: c0035fd6  ret
0x03DC825C: 94e2ce97  bl #0x3180cac
0x03DC8260: cc19d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC8264 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType_ (System_ValueTuple_Entity__T1__T2__T3__T4__T5__T6__ValueTuple_T7__T8___o target, const MethodInfo_3DC8264* method);
; bytes=1932 sha256=bccd1790d2a64058badb473e24cc3caf65f626052724871ebbab19994fa36be1 status=arm64_complete_bound indexed_start=True
0x03DC8264: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC8268: fc6f01a9  stp x28, x27, [sp, #0x10]
0x03DC826C: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC8270: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC8274: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC8278: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC827C: fd030091  mov x29, sp
0x03DC8280: ff4304d1  sub sp, sp, #0x110
0x03DC8284: 48d03bd5  mrs x8, tpidr_el0
0x03DC8288: a92300d1  sub x9, x29, #8
0x03DC828C: 280110f8  stur x8, [x9, #-0x100]
0x03DC8290: 081540f9  ldr x8, [x8, #0x28]
0x03DC8294: f30301aa  mov x19, x1
0x03DC8298: f40300aa  mov x20, x0
0x03DC829C: a8031ff8  stur x8, [x29, #-0x10]
0x03DC82A0: 3a1c40f9  ldr x26, [x1, #0x38]
0x03DC82A4: 9a0000b5  cbnz x26, #0x3dc82b4
0x03DC82A8: e00313aa  mov x0, x19
0x03DC82AC: 7339ce97  bl #0x3156878
0x03DC82B0: 7a1e40f9  ldr x26, [x19, #0x38]
0x03DC82B4: 482740a9  ldp x8, x9, [x26]
0x03DC82B8: 4a0f40f9  ldr x10, [x26, #0x18]
0x03DC82BC: 4b1740f9  ldr x11, [x26, #0x28]
0x03DC82C0: 4c1f40f9  ldr x12, [x26, #0x38]
0x03DC82C4: 4d2740f9  ldr x13, [x26, #0x48]
0x03DC82C8: 4e2f40f9  ldr x14, [x26, #0x58]
0x03DC82CC: 4fc346a9  ldp x15, x16, [x26, #0x68]
0x03DC82D0: 514340f9  ldr x17, [x26, #0x80]
0x03DC82D4: 29fd40b9  ldr w9, [x9, #0xfc]
0x03DC82D8: 17fd40b9  ldr w23, [x8, #0xfc]
0x03DC82DC: 43fd40b9  ldr w3, [x10, #0xfc]
0x03DC82E0: 62fd40b9  ldr w2, [x11, #0xfc]
0x03DC82E4: a9031ef8  stur x9, [x29, #-0x20]
0x03DC82E8: 81fd40b9  ldr w1, [x12, #0xfc]
0x03DC82EC: a0fd40b9  ldr w0, [x13, #0xfc]
0x03DC82F0: cdfd40b9  ldr w13, [x14, #0xfc]
0x03DC82F4: ebfd40b9  ldr w11, [x15, #0xfc]
0x03DC82F8: 0cfe40b9  ldr w12, [x16, #0xfc]
0x03DC82FC: 2afe40b9  ldr w10, [x17, #0xfc]
0x03DC8300: 293d0091  add x9, x9, #0xf
0x03DC8304: e8030091  mov x8, sp
0x03DC8308: 29717c92  and x9, x9, #0x1fffffff0
0x03DC830C: 180109cb  sub x24, x8, x9
0x03DC8310: 1f030091  mov sp, x24
0x03DC8314: 693c0091  add x9, x3, #0xf
0x03DC8318: e8030091  mov x8, sp
0x03DC831C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC8320: 080109cb  sub x8, x8, x9
0x03DC8324: a3233da9  stp x3, x8, [x29, #-0x30]
0x03DC8328: 1f010091  mov sp, x8
0x03DC832C: 493c0091  add x9, x2, #0xf
0x03DC8330: e8030091  mov x8, sp
0x03DC8334: 29717c92  and x9, x9, #0x1fffffff0
0x03DC8338: 080109cb  sub x8, x8, x9
0x03DC833C: a2233aa9  stp x2, x8, [x29, #-0x60]
0x03DC8340: 1f010091  mov sp, x8
0x03DC8344: 293c0091  add x9, x1, #0xf
0x03DC8348: e8030091  mov x8, sp
0x03DC834C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC8350: 080109cb  sub x8, x8, x9
0x03DC8354: a18318f8  stur x1, [x29, #-0x78]
0x03DC8358: a8031bf8  stur x8, [x29, #-0x50]
0x03DC835C: 1f010091  mov sp, x8
0x03DC8360: 093c0091  add x9, x0, #0xf
0x03DC8364: e8030091  mov x8, sp
0x03DC8368: 29717c92  and x9, x9, #0x1fffffff0
0x03DC836C: 080109cb  sub x8, x8, x9
0x03DC8370: a00317f8  stur x0, [x29, #-0x90]
0x03DC8374: a8831bf8  stur x8, [x29, #-0x48]
0x03DC8378: 1f010091  mov sp, x8
0x03DC837C: a93d0091  add x9, x13, #0xf
0x03DC8380: e8030091  mov x8, sp
0x03DC8384: 29717c92  and x9, x9, #0x1fffffff0
0x03DC8388: 080109cb  sub x8, x8, x9
0x03DC838C: ad8315f8  stur x13, [x29, #-0xa8]
0x03DC8390: a8031cf8  stur x8, [x29, #-0x40]
0x03DC8394: 1f010091  mov sp, x8
0x03DC8398: 893d0091  add x9, x12, #0xf
0x03DC839C: e8030091  mov x8, sp
0x03DC83A0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC83A4: 080109cb  sub x8, x8, x9
0x03DC83A8: a8831cf8  stur x8, [x29, #-0x38]
0x03DC83AC: 1f010091  mov sp, x8
0x03DC83B0: 493d0091  add x9, x10, #0xf
0x03DC83B4: e8030091  mov x8, sp
0x03DC83B8: 29717c92  and x9, x9, #0x1fffffff0
0x03DC83BC: 080109cb  sub x8, x8, x9
0x03DC83C0: a8ab31a9  stp x8, x10, [x29, #-0xe8]
0x03DC83C4: 1f010091  mov sp, x8
0x03DC83C8: 693d0091  add x9, x11, #0xf
0x03DC83CC: e8030091  mov x8, sp
0x03DC83D0: 29717c92  and x9, x9, #0x1fffffff0
0x03DC83D4: 080109cb  sub x8, x8, x9
0x03DC83D8: ab0319f8  stur x11, [x29, #-0x70]
0x03DC83DC: a8b333a9  stp x8, x12, [x29, #-0xc8]
0x03DC83E0: 1f010091  mov sp, x8
0x03DC83E4: e8030091  mov x8, sp
0x03DC83E8: 080109cb  sub x8, x8, x9
0x03DC83EC: a80311f8  stur x8, [x29, #-0xf0]
0x03DC83F0: 1f010091  mov sp, x8
0x03DC83F4: e83e0091  add x8, x23, #0xf
0x03DC83F8: e9030091  mov x9, sp
0x03DC83FC: 08717c92  and x8, x8, #0x1fffffff0
0x03DC8400: 360108cb  sub x22, x9, x8
0x03DC8404: df020091  mov sp, x22
0x03DC8408: e9030091  mov x9, sp
0x03DC840C: 390108cb  sub x25, x9, x8
0x03DC8410: 3f030091  mov sp, x25
0x03DC8414: e9030091  mov x9, sp
0x03DC8418: 3c0108cb  sub x28, x9, x8
0x03DC841C: 9f030091  mov sp, x28
0x03DC8420: e9030091  mov x9, sp
0x03DC8424: 3b0108cb  sub x27, x9, x8
0x03DC8428: 7f030091  mov sp, x27
0x03DC842C: e9030091  mov x9, sp
0x03DC8430: 350108cb  sub x21, x9, x8
0x03DC8434: bf020091  mov sp, x21
0x03DC8438: e9030091  mov x9, sp
0x03DC843C: 290108cb  sub x9, x9, x8
0x03DC8440: a98319f8  stur x9, [x29, #-0x68]
0x03DC8444: 3f010091  mov sp, x9
0x03DC8448: e9030091  mov x9, sp
0x03DC844C: 290108cb  sub x9, x9, x8
0x03DC8450: a98317f8  stur x9, [x29, #-0x88]
0x03DC8454: 3f010091  mov sp, x9
0x03DC8458: e9030091  mov x9, sp
0x03DC845C: 290108cb  sub x9, x9, x8
0x03DC8460: a90318f8  stur x9, [x29, #-0x80]
0x03DC8464: 3f010091  mov sp, x9
0x03DC8468: e9030091  mov x9, sp
0x03DC846C: 290108cb  sub x9, x9, x8
0x03DC8470: a90316f8  stur x9, [x29, #-0xa0]
0x03DC8474: 3f010091  mov sp, x9
0x03DC8478: e9030091  mov x9, sp
0x03DC847C: 290108cb  sub x9, x9, x8
0x03DC8480: a98316f8  stur x9, [x29, #-0x98]
0x03DC8484: 3f010091  mov sp, x9
0x03DC8488: e9030091  mov x9, sp
0x03DC848C: 290108cb  sub x9, x9, x8
0x03DC8490: a98314f8  stur x9, [x29, #-0xb8]
0x03DC8494: 3f010091  mov sp, x9
0x03DC8498: e9030091  mov x9, sp
0x03DC849C: 290108cb  sub x9, x9, x8
0x03DC84A0: a90315f8  stur x9, [x29, #-0xb0]
0x03DC84A4: 3f010091  mov sp, x9
0x03DC84A8: e9030091  mov x9, sp
0x03DC84AC: 290108cb  sub x9, x9, x8
0x03DC84B0: a98312f8  stur x9, [x29, #-0xd8]
0x03DC84B4: 3f010091  mov sp, x9
0x03DC84B8: e9030091  mov x9, sp
0x03DC84BC: 290108cb  sub x9, x9, x8
0x03DC84C0: a90313f8  stur x9, [x29, #-0xd0]
0x03DC84C4: 3f010091  mov sp, x9
0x03DC84C8: e9030091  mov x9, sp
0x03DC84CC: 290108cb  sub x9, x9, x8
0x03DC84D0: a90310f8  stur x9, [x29, #-0x100]
0x03DC84D4: 3f010091  mov sp, x9
0x03DC84D8: e9030091  mov x9, sp
0x03DC84DC: 280108cb  sub x8, x9, x8
0x03DC84E0: a88310f8  stur x8, [x29, #-0xf8]
0x03DC84E4: 1f010091  mov sp, x8
0x03DC84E8: e00316aa  mov x0, x22
0x03DC84EC: e10314aa  mov x1, x20
0x03DC84F0: e20317aa  mov x2, x23
0x03DC84F4: 1f19d094  bl #0x71ce970
0x03DC84F8: 480340f9  ldr x8, [x26]
0x03DC84FC: e00316aa  mov x0, x22
0x03DC8500: 014140f9  ldr x1, [x8, #0x80]
0x03DC8504: 4de1ce97  bl #0x3180a38
0x03DC8508: 160040f9  ldr x22, [x0]
0x03DC850C: e00319aa  mov x0, x25
0x03DC8510: e10314aa  mov x1, x20
0x03DC8514: e20317aa  mov x2, x23
0x03DC8518: 1619d094  bl #0x71ce970
0x03DC851C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8520: e00319aa  mov x0, x25
0x03DC8524: 080140f9  ldr x8, [x8]
0x03DC8528: 084140f9  ldr x8, [x8, #0x80]
0x03DC852C: 01810091  add x1, x8, #0x20
0x03DC8530: 42e1ce97  bl #0x3180a38
0x03DC8534: a2035ef8  ldur x2, [x29, #-0x20]
0x03DC8538: e10300aa  mov x1, x0
0x03DC853C: e00318aa  mov x0, x24
0x03DC8540: 0c19d094  bl #0x71ce970
0x03DC8544: 362500b4  cbz x22, #0x3dc89e8
0x03DC8548: 681e40f9  ldr x8, [x19, #0x38]
0x03DC854C: a36300d1  sub x3, x29, #0x18
0x03DC8550: e20316aa  mov x2, x22
0x03DC8554: e40318aa  mov x4, x24
0x03DC8558: 010940f9  ldr x1, [x8, #0x10]
0x03DC855C: 200040f9  ldr x0, [x1]
0x03DC8560: b8831ef8  stur x24, [x29, #-0x18]
0x03DC8564: 280840f9  ldr x8, [x1, #0x10]
0x03DC8568: 00013fd6  blr x8
0x03DC856C: e0031caa  mov x0, x28
0x03DC8570: e10314aa  mov x1, x20
0x03DC8574: e20317aa  mov x2, x23
0x03DC8578: fe18d094  bl #0x71ce970
0x03DC857C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8580: e0031caa  mov x0, x28
0x03DC8584: 080140f9  ldr x8, [x8]
0x03DC8588: 014140f9  ldr x1, [x8, #0x80]
0x03DC858C: 2be1ce97  bl #0x3180a38
0x03DC8590: 160040f9  ldr x22, [x0]
0x03DC8594: e0031baa  mov x0, x27
0x03DC8598: e10314aa  mov x1, x20
0x03DC859C: e20317aa  mov x2, x23
0x03DC85A0: f418d094  bl #0x71ce970
0x03DC85A4: 681e40f9  ldr x8, [x19, #0x38]
0x03DC85A8: e0031baa  mov x0, x27
0x03DC85AC: 080140f9  ldr x8, [x8]
0x03DC85B0: 084140f9  ldr x8, [x8, #0x80]
0x03DC85B4: 01010191  add x1, x8, #0x40
0x03DC85B8: 20e1ce97  bl #0x3180a38
0x03DC85BC: a2637da9  ldp x2, x24, [x29, #-0x30]
0x03DC85C0: e10300aa  mov x1, x0
0x03DC85C4: e00318aa  mov x0, x24
0x03DC85C8: ea18d094  bl #0x71ce970
0x03DC85CC: f62000b4  cbz x22, #0x3dc89e8
0x03DC85D0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC85D4: a36300d1  sub x3, x29, #0x18
0x03DC85D8: e20316aa  mov x2, x22
0x03DC85DC: e40318aa  mov x4, x24
0x03DC85E0: 011140f9  ldr x1, [x8, #0x20]
0x03DC85E4: 200040f9  ldr x0, [x1]
0x03DC85E8: b8831ef8  stur x24, [x29, #-0x18]
0x03DC85EC: 280840f9  ldr x8, [x1, #0x10]
0x03DC85F0: 00013fd6  blr x8
0x03DC85F4: e00315aa  mov x0, x21
0x03DC85F8: e10314aa  mov x1, x20
0x03DC85FC: e20317aa  mov x2, x23
0x03DC8600: dc18d094  bl #0x71ce970
0x03DC8604: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8608: e00315aa  mov x0, x21
0x03DC860C: 080140f9  ldr x8, [x8]
0x03DC8610: 014140f9  ldr x1, [x8, #0x80]
0x03DC8614: 09e1ce97  bl #0x3180a38
0x03DC8618: b68359f8  ldur x22, [x29, #-0x68]
0x03DC861C: 150040f9  ldr x21, [x0]
0x03DC8620: e10314aa  mov x1, x20
0x03DC8624: e20317aa  mov x2, x23
0x03DC8628: e00316aa  mov x0, x22
0x03DC862C: d118d094  bl #0x71ce970
0x03DC8630: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8634: e00316aa  mov x0, x22
0x03DC8638: 080140f9  ldr x8, [x8]
0x03DC863C: 084140f9  ldr x8, [x8, #0x80]
0x03DC8640: 01810191  add x1, x8, #0x60
0x03DC8644: fde0ce97  bl #0x3180a38
0x03DC8648: a25b7aa9  ldp x2, x22, [x29, #-0x60]
0x03DC864C: e10300aa  mov x1, x0
0x03DC8650: e00316aa  mov x0, x22
0x03DC8654: c718d094  bl #0x71ce970
0x03DC8658: b9637ca9  ldp x25, x24, [x29, #-0x40]
0x03DC865C: bb6b7ba9  ldp x27, x26, [x29, #-0x50]
0x03DC8660: 551c00b4  cbz x21, #0x3dc89e8
0x03DC8664: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8668: a36300d1  sub x3, x29, #0x18
0x03DC866C: e20315aa  mov x2, x21
0x03DC8670: e40316aa  mov x4, x22
0x03DC8674: 011940f9  ldr x1, [x8, #0x30]
0x03DC8678: 200040f9  ldr x0, [x1]
0x03DC867C: b6831ef8  stur x22, [x29, #-0x18]
0x03DC8680: 280840f9  ldr x8, [x1, #0x10]
0x03DC8684: 00013fd6  blr x8
0x03DC8688: b58357f8  ldur x21, [x29, #-0x88]
0x03DC868C: e10314aa  mov x1, x20
0x03DC8690: e20317aa  mov x2, x23
0x03DC8694: e00315aa  mov x0, x21
0x03DC8698: b618d094  bl #0x71ce970
0x03DC869C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC86A0: e00315aa  mov x0, x21
0x03DC86A4: 080140f9  ldr x8, [x8]
0x03DC86A8: 014140f9  ldr x1, [x8, #0x80]
0x03DC86AC: e3e0ce97  bl #0x3180a38
0x03DC86B0: b60358f8  ldur x22, [x29, #-0x80]
0x03DC86B4: 150040f9  ldr x21, [x0]
0x03DC86B8: e10314aa  mov x1, x20
0x03DC86BC: e20317aa  mov x2, x23
0x03DC86C0: e00316aa  mov x0, x22
0x03DC86C4: ab18d094  bl #0x71ce970
0x03DC86C8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC86CC: e00316aa  mov x0, x22
0x03DC86D0: 080140f9  ldr x8, [x8]
0x03DC86D4: 084140f9  ldr x8, [x8, #0x80]
0x03DC86D8: 01010291  add x1, x8, #0x80
0x03DC86DC: d7e0ce97  bl #0x3180a38
0x03DC86E0: a28358f8  ldur x2, [x29, #-0x78]
0x03DC86E4: e10300aa  mov x1, x0
0x03DC86E8: e0031baa  mov x0, x27
0x03DC86EC: a118d094  bl #0x71ce970
0x03DC86F0: b60359f8  ldur x22, [x29, #-0x70]
0x03DC86F4: b51700b4  cbz x21, #0x3dc89e8
0x03DC86F8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC86FC: a36300d1  sub x3, x29, #0x18
0x03DC8700: e20315aa  mov x2, x21
0x03DC8704: e4031baa  mov x4, x27
0x03DC8708: 012140f9  ldr x1, [x8, #0x40]
0x03DC870C: 200040f9  ldr x0, [x1]
0x03DC8710: bb831ef8  stur x27, [x29, #-0x18]
0x03DC8714: 280840f9  ldr x8, [x1, #0x10]
0x03DC8718: 00013fd6  blr x8
0x03DC871C: b50356f8  ldur x21, [x29, #-0xa0]
0x03DC8720: e10314aa  mov x1, x20
0x03DC8724: e20317aa  mov x2, x23
0x03DC8728: e00315aa  mov x0, x21
0x03DC872C: 9118d094  bl #0x71ce970
0x03DC8730: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8734: e00315aa  mov x0, x21
0x03DC8738: 080140f9  ldr x8, [x8]
0x03DC873C: 014140f9  ldr x1, [x8, #0x80]
0x03DC8740: bee0ce97  bl #0x3180a38
0x03DC8744: bb8356f8  ldur x27, [x29, #-0x98]
0x03DC8748: 150040f9  ldr x21, [x0]
0x03DC874C: e10314aa  mov x1, x20
0x03DC8750: e20317aa  mov x2, x23
0x03DC8754: e0031baa  mov x0, x27
0x03DC8758: 8618d094  bl #0x71ce970
0x03DC875C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8760: e0031baa  mov x0, x27
0x03DC8764: 080140f9  ldr x8, [x8]
0x03DC8768: 084140f9  ldr x8, [x8, #0x80]
0x03DC876C: 01810291  add x1, x8, #0xa0
0x03DC8770: b2e0ce97  bl #0x3180a38
0x03DC8774: a20357f8  ldur x2, [x29, #-0x90]
0x03DC8778: e10300aa  mov x1, x0
0x03DC877C: e0031aaa  mov x0, x26
0x03DC8780: 7c18d094  bl #0x71ce970
0x03DC8784: 351300b4  cbz x21, #0x3dc89e8
0x03DC8788: 681e40f9  ldr x8, [x19, #0x38]
0x03DC878C: a36300d1  sub x3, x29, #0x18
0x03DC8790: e20315aa  mov x2, x21
0x03DC8794: e4031aaa  mov x4, x26
0x03DC8798: 012940f9  ldr x1, [x8, #0x50]
0x03DC879C: 200040f9  ldr x0, [x1]
0x03DC87A0: ba831ef8  stur x26, [x29, #-0x18]
0x03DC87A4: 280840f9  ldr x8, [x1, #0x10]
0x03DC87A8: 00013fd6  blr x8
0x03DC87AC: b58354f8  ldur x21, [x29, #-0xb8]
0x03DC87B0: e10314aa  mov x1, x20
0x03DC87B4: e20317aa  mov x2, x23
0x03DC87B8: e00315aa  mov x0, x21
0x03DC87BC: 6d18d094  bl #0x71ce970
0x03DC87C0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC87C4: e00315aa  mov x0, x21
0x03DC87C8: 080140f9  ldr x8, [x8]
0x03DC87CC: 014140f9  ldr x1, [x8, #0x80]
0x03DC87D0: 9ae0ce97  bl #0x3180a38
0x03DC87D4: ba0355f8  ldur x26, [x29, #-0xb0]
0x03DC87D8: 150040f9  ldr x21, [x0]
0x03DC87DC: e10314aa  mov x1, x20
0x03DC87E0: e20317aa  mov x2, x23
0x03DC87E4: e0031aaa  mov x0, x26
0x03DC87E8: 6218d094  bl #0x71ce970
0x03DC87EC: 681e40f9  ldr x8, [x19, #0x38]
0x03DC87F0: e0031aaa  mov x0, x26
0x03DC87F4: 080140f9  ldr x8, [x8]
0x03DC87F8: 084140f9  ldr x8, [x8, #0x80]
0x03DC87FC: 01010391  add x1, x8, #0xc0
0x03DC8800: 8ee0ce97  bl #0x3180a38
0x03DC8804: a28355f8  ldur x2, [x29, #-0xa8]
0x03DC8808: e10300aa  mov x1, x0
0x03DC880C: e00319aa  mov x0, x25
0x03DC8810: 5818d094  bl #0x71ce970
0x03DC8814: b50e00b4  cbz x21, #0x3dc89e8
0x03DC8818: 681e40f9  ldr x8, [x19, #0x38]
0x03DC881C: a36300d1  sub x3, x29, #0x18
0x03DC8820: e20315aa  mov x2, x21
0x03DC8824: e40319aa  mov x4, x25
0x03DC8828: 013140f9  ldr x1, [x8, #0x60]
0x03DC882C: 200040f9  ldr x0, [x1]
0x03DC8830: b9831ef8  stur x25, [x29, #-0x18]
0x03DC8834: 280840f9  ldr x8, [x1, #0x10]
0x03DC8838: 00013fd6  blr x8
0x03DC883C: b58352f8  ldur x21, [x29, #-0xd8]
0x03DC8840: e10314aa  mov x1, x20
0x03DC8844: e20317aa  mov x2, x23
0x03DC8848: e00315aa  mov x0, x21
0x03DC884C: 4918d094  bl #0x71ce970
0x03DC8850: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8854: e00315aa  mov x0, x21
0x03DC8858: 080140f9  ldr x8, [x8]
0x03DC885C: 014140f9  ldr x1, [x8, #0x80]
0x03DC8860: 76e0ce97  bl #0x3180a38
0x03DC8864: b90353f8  ldur x25, [x29, #-0xd0]
0x03DC8868: 150040f9  ldr x21, [x0]
0x03DC886C: e10314aa  mov x1, x20
0x03DC8870: e20317aa  mov x2, x23
0x03DC8874: e00319aa  mov x0, x25
0x03DC8878: 3e18d094  bl #0x71ce970
0x03DC887C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8880: e00319aa  mov x0, x25
0x03DC8884: 080140f9  ldr x8, [x8]
0x03DC8888: 084140f9  ldr x8, [x8, #0x80]
0x03DC888C: 01810391  add x1, x8, #0xe0
0x03DC8890: 6ae0ce97  bl #0x3180a38
0x03DC8894: b98353f8  ldur x25, [x29, #-0xc8]
0x03DC8898: e10300aa  mov x1, x0
0x03DC889C: e20316aa  mov x2, x22
0x03DC88A0: e00319aa  mov x0, x25
0x03DC88A4: 3318d094  bl #0x71ce970
0x03DC88A8: 681e40f9  ldr x8, [x19, #0x38]
0x03DC88AC: e00319aa  mov x0, x25
0x03DC88B0: 083540f9  ldr x8, [x8, #0x68]
0x03DC88B4: 014140f9  ldr x1, [x8, #0x80]
0x03DC88B8: 60e0ce97  bl #0x3180a38
0x03DC88BC: a20354f8  ldur x2, [x29, #-0xc0]
0x03DC88C0: e10300aa  mov x1, x0
0x03DC88C4: e00318aa  mov x0, x24
0x03DC88C8: 2a18d094  bl #0x71ce970
0x03DC88CC: f50800b4  cbz x21, #0x3dc89e8
0x03DC88D0: 681e40f9  ldr x8, [x19, #0x38]
0x03DC88D4: a36300d1  sub x3, x29, #0x18
0x03DC88D8: e20315aa  mov x2, x21
0x03DC88DC: e40318aa  mov x4, x24
0x03DC88E0: 013d40f9  ldr x1, [x8, #0x78]
0x03DC88E4: 200040f9  ldr x0, [x1]
0x03DC88E8: b8831ef8  stur x24, [x29, #-0x18]
0x03DC88EC: 280840f9  ldr x8, [x1, #0x10]
0x03DC88F0: 00013fd6  blr x8
0x03DC88F4: b50350f8  ldur x21, [x29, #-0x100]
0x03DC88F8: e10314aa  mov x1, x20
0x03DC88FC: e20317aa  mov x2, x23
0x03DC8900: e00315aa  mov x0, x21
0x03DC8904: 1b18d094  bl #0x71ce970
0x03DC8908: 681e40f9  ldr x8, [x19, #0x38]
0x03DC890C: e00315aa  mov x0, x21
0x03DC8910: 080140f9  ldr x8, [x8]
0x03DC8914: 014140f9  ldr x1, [x8, #0x80]
0x03DC8918: 48e0ce97  bl #0x3180a38
0x03DC891C: b88350f8  ldur x24, [x29, #-0xf8]
0x03DC8920: 150040f9  ldr x21, [x0]
0x03DC8924: e10314aa  mov x1, x20
0x03DC8928: e20317aa  mov x2, x23
0x03DC892C: e00318aa  mov x0, x24
0x03DC8930: 1018d094  bl #0x71ce970
0x03DC8934: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8938: e00318aa  mov x0, x24
0x03DC893C: 080140f9  ldr x8, [x8]
0x03DC8940: 084140f9  ldr x8, [x8, #0x80]
0x03DC8944: 01810391  add x1, x8, #0xe0
0x03DC8948: 3ce0ce97  bl #0x3180a38
0x03DC894C: b40351f8  ldur x20, [x29, #-0xf0]
0x03DC8950: e10300aa  mov x1, x0
0x03DC8954: e20316aa  mov x2, x22
0x03DC8958: e00314aa  mov x0, x20
0x03DC895C: 0518d094  bl #0x71ce970
0x03DC8960: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8964: e00314aa  mov x0, x20
0x03DC8968: 083540f9  ldr x8, [x8, #0x68]
0x03DC896C: 084140f9  ldr x8, [x8, #0x80]
0x03DC8970: 01810091  add x1, x8, #0x20
0x03DC8974: 31e0ce97  bl #0x3180a38
0x03DC8978: b48b71a9  ldp x20, x2, [x29, #-0xe8]
0x03DC897C: e10300aa  mov x1, x0
0x03DC8980: e00314aa  mov x0, x20
0x03DC8984: fb17d094  bl #0x71ce970
0x03DC8988: 150300b4  cbz x21, #0x3dc89e8
0x03DC898C: 681e40f9  ldr x8, [x19, #0x38]
0x03DC8990: a36300d1  sub x3, x29, #0x18
0x03DC8994: e20315aa  mov x2, x21
0x03DC8998: e40314aa  mov x4, x20
0x03DC899C: 014540f9  ldr x1, [x8, #0x88]
0x03DC89A0: 200040f9  ldr x0, [x1]
0x03DC89A4: b4831ef8  stur x20, [x29, #-0x18]
0x03DC89A8: 280840f9  ldr x8, [x1, #0x10]
0x03DC89AC: 00013fd6  blr x8
0x03DC89B0: a82300d1  sub x8, x29, #8
0x03DC89B4: 080150f8  ldur x8, [x8, #-0x100]
0x03DC89B8: 081540f9  ldr x8, [x8, #0x28]
0x03DC89BC: a9035ff8  ldur x9, [x29, #-0x10]
0x03DC89C0: 1f0109eb  cmp x8, x9
0x03DC89C4: 41010054  b.ne #0x3dc89ec
0x03DC89C8: bf030091  mov sp, x29
0x03DC89CC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC89D0: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC89D4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC89D8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC89DC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x03DC89E0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC89E4: c0035fd6  ret
0x03DC89E8: b1e0ce97  bl #0x3180cac
0x03DC89EC: e917d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC89F0 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<FeedingCombinationComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_FeedingCombinationComponent_ (Merger_MergeBoard_Components_FeedingCombinationComponent_o comp, ContextualizedECS_Entity_o* entity, const MethodInfo_3DC89F0* method);
; bytes=72 sha256=f7f1084a0230bd656459561003db18dd22236f7a8ea79f14ff8c5559184cef01 status=arm64_complete_bound indexed_start=True
0x03DC89F0: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x03DC89F4: f44f01a9  stp x20, x19, [sp, #0x10]
0x03DC89F8: 481c40f9  ldr x8, [x2, #0x38]
0x03DC89FC: f40302aa  mov x20, x2
0x03DC8A00: f30301aa  mov x19, x1
0x03DC8A04: f50300aa  mov x21, x0
0x03DC8A08: 680000b5  cbnz x8, #0x3dc8a14
0x03DC8A0C: e00314aa  mov x0, x20
0x03DC8A10: 9a37ce97  bl #0x3156878
0x03DC8A14: 130100b4  cbz x19, #0x3dc8a34
0x03DC8A18: 881e40f9  ldr x8, [x20, #0x38]
0x03DC8A1C: e00313aa  mov x0, x19
0x03DC8A20: f44f41a9  ldp x20, x19, [sp, #0x10]
0x03DC8A24: e10315aa  mov x1, x21
0x03DC8A28: 020540f9  ldr x2, [x8, #8]
0x03DC8A2C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x03DC8A30: 0251f917  b #0x3c1ce38
0x03DC8A34: 9ee0ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC8A38 | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<TimeLockComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges_TimeLockComponent_ (Merger_MergeBoard_Components_TimeLockComponent_o comp, ContextualizedECS_Entity_o* entity, const MethodInfo_3DC8A38* method);
; bytes=116 sha256=021e94b9f4968f99585eb544ffde74db327910cc3e25b7ca65a81706c6e2b278 status=arm64_complete_bound indexed_start=True
0x03DC8A38: ff0302d1  sub sp, sp, #0x80
0x03DC8A3C: fe5706a9  stp x30, x21, [sp, #0x60]
0x03DC8A40: f44f07a9  stp x20, x19, [sp, #0x70]
0x03DC8A44: 481c40f9  ldr x8, [x2, #0x38]
0x03DC8A48: f40302aa  mov x20, x2
0x03DC8A4C: f30301aa  mov x19, x1
0x03DC8A50: f50300aa  mov x21, x0
0x03DC8A54: 680000b5  cbnz x8, #0x3dc8a60
0x03DC8A58: e00314aa  mov x0, x20
0x03DC8A5C: 8737ce97  bl #0x3156878
0x03DC8A60: a81240f9  ldr x8, [x21, #0x20]
0x03DC8A64: a10240ad  ldp q1, q0, [x21]
0x03DC8A68: e81300f9  str x8, [sp, #0x20]
0x03DC8A6C: e10300ad  stp q1, q0, [sp]
0x03DC8A70: d30100b4  cbz x19, #0x3dc8aa8
0x03DC8A74: 881e40f9  ldr x8, [x20, #0x38]
0x03DC8A78: e00740ad  ldp q0, q1, [sp]
0x03DC8A7C: e91340f9  ldr x9, [sp, #0x20]
0x03DC8A80: e1c30091  add x1, sp, #0x30
0x03DC8A84: 020540f9  ldr x2, [x8, #8]
0x03DC8A88: e00313aa  mov x0, x19
0x03DC8A8C: e08701ad  stp q0, q1, [sp, #0x30]
0x03DC8A90: e92b00f9  str x9, [sp, #0x50]
0x03DC8A94: 5f55f997  bl #0x3c1e010
0x03DC8A98: f44f47a9  ldp x20, x19, [sp, #0x70]
0x03DC8A9C: fe5746a9  ldp x30, x21, [sp, #0x60]
0x03DC8AA0: ff030291  add sp, sp, #0x80
0x03DC8AA4: c0035fd6  ret
0x03DC8AA8: 81e0ce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC8AAC | ContextualizedECS.Context.TickContextExtensions$$SaveChanges<__Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__SaveChanges___Il2CppFullySharedGenericStructType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o comp, ContextualizedECS_Entity_o* entity, const MethodInfo_3DC8AAC* method);
; bytes=192 sha256=40d8737e7faab06b5deedb9bf39821d736ca6a7d79378fd7be9d7c91793458a5 status=arm64_complete_bound indexed_start=True
0x03DC8AAC: fd7bbca9  stp x29, x30, [sp, #-0x40]!
0x03DC8AB0: f70b00f9  str x23, [sp, #0x10]
0x03DC8AB4: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC8AB8: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC8ABC: fd030091  mov x29, sp
0x03DC8AC0: ff4300d1  sub sp, sp, #0x10
0x03DC8AC4: 56d03bd5  mrs x22, tpidr_el0
0x03DC8AC8: c81640f9  ldr x8, [x22, #0x28]
0x03DC8ACC: f30301aa  mov x19, x1
0x03DC8AD0: f40300aa  mov x20, x0
0x03DC8AD4: a8831ff8  stur x8, [x29, #-8]
0x03DC8AD8: 571c40f9  ldr x23, [x2, #0x38]
0x03DC8ADC: b70000b5  cbnz x23, #0x3dc8af0
0x03DC8AE0: e00302aa  mov x0, x2
0x03DC8AE4: f50302aa  mov x21, x2
0x03DC8AE8: 6437ce97  bl #0x3156878
0x03DC8AEC: b71e40f9  ldr x23, [x21, #0x38]
0x03DC8AF0: e80240f9  ldr x8, [x23]
0x03DC8AF4: 02fd40b9  ldr w2, [x8, #0xfc]
0x03DC8AF8: e8030091  mov x8, sp
0x03DC8AFC: 493c0091  add x9, x2, #0xf
0x03DC8B00: 29717c92  and x9, x9, #0x1fffffff0
0x03DC8B04: 150109cb  sub x21, x8, x9
0x03DC8B08: bf020091  mov sp, x21
0x03DC8B0C: e00315aa  mov x0, x21
0x03DC8B10: e10314aa  mov x1, x20
0x03DC8B14: 9717d094  bl #0x71ce970
0x03DC8B18: 730200b4  cbz x19, #0x3dc8b64
0x03DC8B1C: e10640f9  ldr x1, [x23, #8]
0x03DC8B20: a34300d1  sub x3, x29, #0x10
0x03DC8B24: e20313aa  mov x2, x19
0x03DC8B28: e40315aa  mov x4, x21
0x03DC8B2C: 200040f9  ldr x0, [x1]
0x03DC8B30: b5031ff8  stur x21, [x29, #-0x10]
0x03DC8B34: 280840f9  ldr x8, [x1, #0x10]
0x03DC8B38: 00013fd6  blr x8
0x03DC8B3C: c81640f9  ldr x8, [x22, #0x28]
0x03DC8B40: a9835ff8  ldur x9, [x29, #-8]
0x03DC8B44: 1f0109eb  cmp x8, x9
0x03DC8B48: 01010054  b.ne #0x3dc8b68
0x03DC8B4C: bf030091  mov sp, x29
0x03DC8B50: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC8B54: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC8B58: f70b40f9  ldr x23, [sp, #0x10]
0x03DC8B5C: fd7bc4a8  ldp x29, x30, [sp], #0x40
0x03DC8B60: c0035fd6  ret
0x03DC8B64: 52e0ce97  bl #0x3180cac
0x03DC8B68: 8a17d094  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5378 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<BornComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_BornComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_BornComponent_o component, const MethodInfo_3DC5378* method);
; bytes=396 sha256=5a95f4a2e2d89d7023164e6f420bf99ba7d25f28b976f27a64e3f4d33ed5d2cd status=arm64_complete_bound indexed_start=True
0x03DC5378: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC537C: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC5380: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC5384: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC5388: 681c40f9  ldr x8, [x3, #0x38]
0x03DC538C: f50303aa  mov x21, x3
0x03DC5390: f30302aa  mov x19, x2
0x03DC5394: f40301aa  mov x20, x1
0x03DC5398: f60300aa  mov x22, x0
0x03DC539C: 480300b5  cbnz x8, #0x3dc5404
0x03DC53A0: a0c501d0  adrp x0, #0x767b000
0x03DC53A4: 00a843f9  ldr x0, [x0, #0x750]
0x03DC53A8: 9cedce97  bl #0x3180a18
0x03DC53AC: a0c501d0  adrp x0, #0x767b000
0x03DC53B0: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC53B4: 99edce97  bl #0x3180a18
0x03DC53B8: a0c501d0  adrp x0, #0x767b000
0x03DC53BC: 00b043f9  ldr x0, [x0, #0x760]
0x03DC53C0: 96edce97  bl #0x3180a18
0x03DC53C4: 40c50190  adrp x0, #0x766d000
0x03DC53C8: 00b844f9  ldr x0, [x0, #0x970]
0x03DC53CC: 93edce97  bl #0x3180a18
0x03DC53D0: 40c50190  adrp x0, #0x766d000
0x03DC53D4: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC53D8: 90edce97  bl #0x3180a18
0x03DC53DC: 40c50190  adrp x0, #0x766d000
0x03DC53E0: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC53E4: 8dedce97  bl #0x3180a18
0x03DC53E8: 40c401b0  adrp x0, #0x764e000
0x03DC53EC: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC53F0: 8aedce97  bl #0x3180a18
0x03DC53F4: a81e40f9  ldr x8, [x21, #0x38]
0x03DC53F8: 680000b5  cbnz x8, #0x3dc5404
0x03DC53FC: e00315aa  mov x0, x21
0x03DC5400: 1e45ce97  bl #0x3156878
0x03DC5404: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5408: c00700b4  cbz x0, #0x3dc5500
0x03DC540C: a8c501d0  adrp x8, #0x767b000
0x03DC5410: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC5414: e10314aa  mov x1, x20
0x03DC5418: 020140f9  ldr x2, [x8]
0x03DC541C: d5764494  bl #0x4ee2f70
0x03DC5420: 60020037  tbnz w0, #0, #0x3dc546c
0x03DC5424: 48c50190  adrp x8, #0x766d000
0x03DC5428: d70e40f9  ldr x23, [x22, #0x18]
0x03DC542C: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC5430: 000140f9  ldr x0, [x8]
0x03DC5434: 1beece97  bl #0x3180ca0
0x03DC5438: 48c50190  adrp x8, #0x766d000
0x03DC543C: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC5440: f80300aa  mov x24, x0
0x03DC5444: 010140f9  ldr x1, [x8]
0x03DC5448: 7eea5394  bl #0x52bfe40
0x03DC544C: b70500b4  cbz x23, #0x3dc5500
0x03DC5450: a8c501d0  adrp x8, #0x767b000
0x03DC5454: 08a943f9  ldr x8, [x8, #0x750]
0x03DC5458: e00317aa  mov x0, x23
0x03DC545C: e10314aa  mov x1, x20
0x03DC5460: e20318aa  mov x2, x24
0x03DC5464: 030140f9  ldr x3, [x8]
0x03DC5468: 45764494  bl #0x4ee2d7c
0x03DC546C: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5470: 800400b4  cbz x0, #0x3dc5500
0x03DC5474: a8c501d0  adrp x8, #0x767b000
0x03DC5478: 08b143f9  ldr x8, [x8, #0x760]
0x03DC547C: e10314aa  mov x1, x20
0x03DC5480: 020140f9  ldr x2, [x8]
0x03DC5484: 1e764494  bl #0x4ee2cfc
0x03DC5488: 48c401b0  adrp x8, #0x764e000
0x03DC548C: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC5490: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5494: f60300aa  mov x22, x0
0x03DC5498: 080140f9  ldr x8, [x8]
0x03DC549C: 370140f9  ldr x23, [x9]
0x03DC54A0: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC54A4: 6a000035  cbnz w10, #0x3dc54b0
0x03DC54A8: e00308aa  mov x0, x8
0x03DC54AC: b8edce97  bl #0x3180b8c
0x03DC54B0: e00317aa  mov x0, x23
0x03DC54B4: e1031faa  mov x1, xzr
0x03DC54B8: 437f6394  bl #0x56a51c4
0x03DC54BC: 360200b4  cbz x22, #0x3dc5500
0x03DC54C0: 48c50190  adrp x8, #0x766d000
0x03DC54C4: 08b944f9  ldr x8, [x8, #0x970]
0x03DC54C8: e10300aa  mov x1, x0
0x03DC54CC: e00316aa  mov x0, x22
0x03DC54D0: 020140f9  ldr x2, [x8]
0x03DC54D4: d4ee5394  bl #0x52c1024
0x03DC54D8: 540100b4  cbz x20, #0x3dc5500
0x03DC54DC: a81e40f9  ldr x8, [x21, #0x38]
0x03DC54E0: e00314aa  mov x0, x20
0x03DC54E4: e10313aa  mov x1, x19
0x03DC54E8: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC54EC: 020940f9  ldr x2, [x8, #0x10]
0x03DC54F0: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC54F4: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC54F8: fe0744f8  ldr x30, [sp], #0x40
0x03DC54FC: 795cf917  b #0x3c1c6e0
0x03DC5500: ebedce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5504 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<ConfirmedItemsCombinationComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_ConfirmedItemsCombinationComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_ConfirmedItemsCombinationComponent_o component, const MethodInfo_3DC5504* method);
; bytes=396 sha256=8a6513da9f19873b4f03f03dad4b2b012c5bc335bddbfda08648ab80dde23abe status=arm64_complete_bound indexed_start=True
0x03DC5504: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC5508: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC550C: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC5510: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC5514: 681c40f9  ldr x8, [x3, #0x38]
0x03DC5518: f50303aa  mov x21, x3
0x03DC551C: f40302aa  mov x20, x2
0x03DC5520: f30301aa  mov x19, x1
0x03DC5524: f60300aa  mov x22, x0
0x03DC5528: 480300b5  cbnz x8, #0x3dc5590
0x03DC552C: a0c501d0  adrp x0, #0x767b000
0x03DC5530: 00a843f9  ldr x0, [x0, #0x750]
0x03DC5534: 39edce97  bl #0x3180a18
0x03DC5538: a0c501d0  adrp x0, #0x767b000
0x03DC553C: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC5540: 36edce97  bl #0x3180a18
0x03DC5544: a0c501d0  adrp x0, #0x767b000
0x03DC5548: 00b043f9  ldr x0, [x0, #0x760]
0x03DC554C: 33edce97  bl #0x3180a18
0x03DC5550: 40c50190  adrp x0, #0x766d000
0x03DC5554: 00b844f9  ldr x0, [x0, #0x970]
0x03DC5558: 30edce97  bl #0x3180a18
0x03DC555C: 40c50190  adrp x0, #0x766d000
0x03DC5560: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC5564: 2dedce97  bl #0x3180a18
0x03DC5568: 40c50190  adrp x0, #0x766d000
0x03DC556C: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC5570: 2aedce97  bl #0x3180a18
0x03DC5574: 40c401b0  adrp x0, #0x764e000
0x03DC5578: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC557C: 27edce97  bl #0x3180a18
0x03DC5580: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5584: 680000b5  cbnz x8, #0x3dc5590
0x03DC5588: e00315aa  mov x0, x21
0x03DC558C: bb44ce97  bl #0x3156878
0x03DC5590: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5594: c00700b4  cbz x0, #0x3dc568c
0x03DC5598: a8c501d0  adrp x8, #0x767b000
0x03DC559C: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC55A0: e10313aa  mov x1, x19
0x03DC55A4: 020140f9  ldr x2, [x8]
0x03DC55A8: 72764494  bl #0x4ee2f70
0x03DC55AC: 60020037  tbnz w0, #0, #0x3dc55f8
0x03DC55B0: 48c50190  adrp x8, #0x766d000
0x03DC55B4: d70e40f9  ldr x23, [x22, #0x18]
0x03DC55B8: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC55BC: 000140f9  ldr x0, [x8]
0x03DC55C0: b8edce97  bl #0x3180ca0
0x03DC55C4: 48c50190  adrp x8, #0x766d000
0x03DC55C8: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC55CC: f80300aa  mov x24, x0
0x03DC55D0: 010140f9  ldr x1, [x8]
0x03DC55D4: 1bea5394  bl #0x52bfe40
0x03DC55D8: b70500b4  cbz x23, #0x3dc568c
0x03DC55DC: a8c501d0  adrp x8, #0x767b000
0x03DC55E0: 08a943f9  ldr x8, [x8, #0x750]
0x03DC55E4: e00317aa  mov x0, x23
0x03DC55E8: e10313aa  mov x1, x19
0x03DC55EC: e20318aa  mov x2, x24
0x03DC55F0: 030140f9  ldr x3, [x8]
0x03DC55F4: e2754494  bl #0x4ee2d7c
0x03DC55F8: c00e40f9  ldr x0, [x22, #0x18]
0x03DC55FC: 800400b4  cbz x0, #0x3dc568c
0x03DC5600: a8c501d0  adrp x8, #0x767b000
0x03DC5604: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5608: e10313aa  mov x1, x19
0x03DC560C: 020140f9  ldr x2, [x8]
0x03DC5610: bb754494  bl #0x4ee2cfc
0x03DC5614: 48c401b0  adrp x8, #0x764e000
0x03DC5618: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC561C: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5620: f60300aa  mov x22, x0
0x03DC5624: 080140f9  ldr x8, [x8]
0x03DC5628: 370140f9  ldr x23, [x9]
0x03DC562C: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC5630: 6a000035  cbnz w10, #0x3dc563c
0x03DC5634: e00308aa  mov x0, x8
0x03DC5638: 55edce97  bl #0x3180b8c
0x03DC563C: e00317aa  mov x0, x23
0x03DC5640: e1031faa  mov x1, xzr
0x03DC5644: e07e6394  bl #0x56a51c4
0x03DC5648: 360200b4  cbz x22, #0x3dc568c
0x03DC564C: 48c50190  adrp x8, #0x766d000
0x03DC5650: 08b944f9  ldr x8, [x8, #0x970]
0x03DC5654: e10300aa  mov x1, x0
0x03DC5658: e00316aa  mov x0, x22
0x03DC565C: 020140f9  ldr x2, [x8]
0x03DC5660: 71ee5394  bl #0x52c1024
0x03DC5664: 530100b4  cbz x19, #0x3dc568c
0x03DC5668: a81e40f9  ldr x8, [x21, #0x38]
0x03DC566C: 817e4092  and x1, x20, #0xffffffff
0x03DC5670: e00313aa  mov x0, x19
0x03DC5674: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5678: 020940f9  ldr x2, [x8, #0x10]
0x03DC567C: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC5680: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC5684: fe0744f8  ldr x30, [sp], #0x40
0x03DC5688: e85cf917  b #0x3c1ca28
0x03DC568C: 88edce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5690 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<ItemMergedComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_ItemMergedComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_ItemMergedComponent_o component, const MethodInfo_3DC5690* method);
; bytes=396 sha256=27b11f7e77a0cc62643093f70d399409675683457347fc59d7c901143fed5032 status=arm64_complete_bound indexed_start=True
0x03DC5690: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC5694: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC5698: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC569C: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC56A0: 681c40f9  ldr x8, [x3, #0x38]
0x03DC56A4: f50303aa  mov x21, x3
0x03DC56A8: f40302aa  mov x20, x2
0x03DC56AC: f30301aa  mov x19, x1
0x03DC56B0: f60300aa  mov x22, x0
0x03DC56B4: 480300b5  cbnz x8, #0x3dc571c
0x03DC56B8: a0c501d0  adrp x0, #0x767b000
0x03DC56BC: 00a843f9  ldr x0, [x0, #0x750]
0x03DC56C0: d6ecce97  bl #0x3180a18
0x03DC56C4: a0c501d0  adrp x0, #0x767b000
0x03DC56C8: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC56CC: d3ecce97  bl #0x3180a18
0x03DC56D0: a0c501d0  adrp x0, #0x767b000
0x03DC56D4: 00b043f9  ldr x0, [x0, #0x760]
0x03DC56D8: d0ecce97  bl #0x3180a18
0x03DC56DC: 40c50190  adrp x0, #0x766d000
0x03DC56E0: 00b844f9  ldr x0, [x0, #0x970]
0x03DC56E4: cdecce97  bl #0x3180a18
0x03DC56E8: 40c50190  adrp x0, #0x766d000
0x03DC56EC: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC56F0: caecce97  bl #0x3180a18
0x03DC56F4: 40c50190  adrp x0, #0x766d000
0x03DC56F8: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC56FC: c7ecce97  bl #0x3180a18
0x03DC5700: 40c401b0  adrp x0, #0x764e000
0x03DC5704: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC5708: c4ecce97  bl #0x3180a18
0x03DC570C: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5710: 680000b5  cbnz x8, #0x3dc571c
0x03DC5714: e00315aa  mov x0, x21
0x03DC5718: 5844ce97  bl #0x3156878
0x03DC571C: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5720: c00700b4  cbz x0, #0x3dc5818
0x03DC5724: a8c501d0  adrp x8, #0x767b000
0x03DC5728: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC572C: e10313aa  mov x1, x19
0x03DC5730: 020140f9  ldr x2, [x8]
0x03DC5734: 0f764494  bl #0x4ee2f70
0x03DC5738: 60020037  tbnz w0, #0, #0x3dc5784
0x03DC573C: 48c50190  adrp x8, #0x766d000
0x03DC5740: d70e40f9  ldr x23, [x22, #0x18]
0x03DC5744: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC5748: 000140f9  ldr x0, [x8]
0x03DC574C: 55edce97  bl #0x3180ca0
0x03DC5750: 48c50190  adrp x8, #0x766d000
0x03DC5754: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC5758: f80300aa  mov x24, x0
0x03DC575C: 010140f9  ldr x1, [x8]
0x03DC5760: b8e95394  bl #0x52bfe40
0x03DC5764: b70500b4  cbz x23, #0x3dc5818
0x03DC5768: a8c501d0  adrp x8, #0x767b000
0x03DC576C: 08a943f9  ldr x8, [x8, #0x750]
0x03DC5770: e00317aa  mov x0, x23
0x03DC5774: e10313aa  mov x1, x19
0x03DC5778: e20318aa  mov x2, x24
0x03DC577C: 030140f9  ldr x3, [x8]
0x03DC5780: 7f754494  bl #0x4ee2d7c
0x03DC5784: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5788: 800400b4  cbz x0, #0x3dc5818
0x03DC578C: a8c501d0  adrp x8, #0x767b000
0x03DC5790: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5794: e10313aa  mov x1, x19
0x03DC5798: 020140f9  ldr x2, [x8]
0x03DC579C: 58754494  bl #0x4ee2cfc
0x03DC57A0: 48c401b0  adrp x8, #0x764e000
0x03DC57A4: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC57A8: a91e40f9  ldr x9, [x21, #0x38]
0x03DC57AC: f60300aa  mov x22, x0
0x03DC57B0: 080140f9  ldr x8, [x8]
0x03DC57B4: 370140f9  ldr x23, [x9]
0x03DC57B8: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC57BC: 6a000035  cbnz w10, #0x3dc57c8
0x03DC57C0: e00308aa  mov x0, x8
0x03DC57C4: f2ecce97  bl #0x3180b8c
0x03DC57C8: e00317aa  mov x0, x23
0x03DC57CC: e1031faa  mov x1, xzr
0x03DC57D0: 7d7e6394  bl #0x56a51c4
0x03DC57D4: 360200b4  cbz x22, #0x3dc5818
0x03DC57D8: 48c50190  adrp x8, #0x766d000
0x03DC57DC: 08b944f9  ldr x8, [x8, #0x970]
0x03DC57E0: e10300aa  mov x1, x0
0x03DC57E4: e00316aa  mov x0, x22
0x03DC57E8: 020140f9  ldr x2, [x8]
0x03DC57EC: 0eee5394  bl #0x52c1024
0x03DC57F0: 530100b4  cbz x19, #0x3dc5818
0x03DC57F4: a81e40f9  ldr x8, [x21, #0x38]
0x03DC57F8: 811e4092  and x1, x20, #0xff
0x03DC57FC: e00313aa  mov x0, x19
0x03DC5800: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5804: 020940f9  ldr x2, [x8, #0x10]
0x03DC5808: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC580C: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC5810: fe0744f8  ldr x30, [sp], #0x40
0x03DC5814: c75ef917  b #0x3c1d330
0x03DC5818: 25edce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC581C | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<ItemMovedComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_ItemMovedComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_ItemMovedComponent_o component, const MethodInfo_3DC581C* method);
; bytes=396 sha256=837a29a5892b217a3ecd7811b64ac66ee031b460850b136e2a3e302b9b815157 status=arm64_complete_bound indexed_start=True
0x03DC581C: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC5820: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC5824: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC5828: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC582C: 681c40f9  ldr x8, [x3, #0x38]
0x03DC5830: f50303aa  mov x21, x3
0x03DC5834: f30302aa  mov x19, x2
0x03DC5838: f40301aa  mov x20, x1
0x03DC583C: f60300aa  mov x22, x0
0x03DC5840: 480300b5  cbnz x8, #0x3dc58a8
0x03DC5844: a0c501d0  adrp x0, #0x767b000
0x03DC5848: 00a843f9  ldr x0, [x0, #0x750]
0x03DC584C: 73ecce97  bl #0x3180a18
0x03DC5850: a0c501d0  adrp x0, #0x767b000
0x03DC5854: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC5858: 70ecce97  bl #0x3180a18
0x03DC585C: a0c501d0  adrp x0, #0x767b000
0x03DC5860: 00b043f9  ldr x0, [x0, #0x760]
0x03DC5864: 6decce97  bl #0x3180a18
0x03DC5868: 40c50190  adrp x0, #0x766d000
0x03DC586C: 00b844f9  ldr x0, [x0, #0x970]
0x03DC5870: 6aecce97  bl #0x3180a18
0x03DC5874: 40c50190  adrp x0, #0x766d000
0x03DC5878: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC587C: 67ecce97  bl #0x3180a18
0x03DC5880: 40c50190  adrp x0, #0x766d000
0x03DC5884: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC5888: 64ecce97  bl #0x3180a18
0x03DC588C: 40c401b0  adrp x0, #0x764e000
0x03DC5890: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC5894: 61ecce97  bl #0x3180a18
0x03DC5898: a81e40f9  ldr x8, [x21, #0x38]
0x03DC589C: 680000b5  cbnz x8, #0x3dc58a8
0x03DC58A0: e00315aa  mov x0, x21
0x03DC58A4: f543ce97  bl #0x3156878
0x03DC58A8: c00e40f9  ldr x0, [x22, #0x18]
0x03DC58AC: c00700b4  cbz x0, #0x3dc59a4
0x03DC58B0: a8c501d0  adrp x8, #0x767b000
0x03DC58B4: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC58B8: e10314aa  mov x1, x20
0x03DC58BC: 020140f9  ldr x2, [x8]
0x03DC58C0: ac754494  bl #0x4ee2f70
0x03DC58C4: 60020037  tbnz w0, #0, #0x3dc5910
0x03DC58C8: 48c50190  adrp x8, #0x766d000
0x03DC58CC: d70e40f9  ldr x23, [x22, #0x18]
0x03DC58D0: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC58D4: 000140f9  ldr x0, [x8]
0x03DC58D8: f2ecce97  bl #0x3180ca0
0x03DC58DC: 48c50190  adrp x8, #0x766d000
0x03DC58E0: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC58E4: f80300aa  mov x24, x0
0x03DC58E8: 010140f9  ldr x1, [x8]
0x03DC58EC: 55e95394  bl #0x52bfe40
0x03DC58F0: b70500b4  cbz x23, #0x3dc59a4
0x03DC58F4: a8c501d0  adrp x8, #0x767b000
0x03DC58F8: 08a943f9  ldr x8, [x8, #0x750]
0x03DC58FC: e00317aa  mov x0, x23
0x03DC5900: e10314aa  mov x1, x20
0x03DC5904: e20318aa  mov x2, x24
0x03DC5908: 030140f9  ldr x3, [x8]
0x03DC590C: 1c754494  bl #0x4ee2d7c
0x03DC5910: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5914: 800400b4  cbz x0, #0x3dc59a4
0x03DC5918: a8c501d0  adrp x8, #0x767b000
0x03DC591C: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5920: e10314aa  mov x1, x20
0x03DC5924: 020140f9  ldr x2, [x8]
0x03DC5928: f5744494  bl #0x4ee2cfc
0x03DC592C: 48c401b0  adrp x8, #0x764e000
0x03DC5930: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC5934: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5938: f60300aa  mov x22, x0
0x03DC593C: 080140f9  ldr x8, [x8]
0x03DC5940: 370140f9  ldr x23, [x9]
0x03DC5944: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC5948: 6a000035  cbnz w10, #0x3dc5954
0x03DC594C: e00308aa  mov x0, x8
0x03DC5950: 8fecce97  bl #0x3180b8c
0x03DC5954: e00317aa  mov x0, x23
0x03DC5958: e1031faa  mov x1, xzr
0x03DC595C: 1a7e6394  bl #0x56a51c4
0x03DC5960: 360200b4  cbz x22, #0x3dc59a4
0x03DC5964: 48c50190  adrp x8, #0x766d000
0x03DC5968: 08b944f9  ldr x8, [x8, #0x970]
0x03DC596C: e10300aa  mov x1, x0
0x03DC5970: e00316aa  mov x0, x22
0x03DC5974: 020140f9  ldr x2, [x8]
0x03DC5978: abed5394  bl #0x52c1024
0x03DC597C: 540100b4  cbz x20, #0x3dc59a4
0x03DC5980: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5984: e00314aa  mov x0, x20
0x03DC5988: e10313aa  mov x1, x19
0x03DC598C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5990: 020940f9  ldr x2, [x8, #0x10]
0x03DC5994: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC5998: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC599C: fe0744f8  ldr x30, [sp], #0x40
0x03DC59A0: 965ef917  b #0x3c1d3f8
0x03DC59A4: c2ecce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC59A8 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<ItemUnboxedComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_ItemUnboxedComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_ItemUnboxedComponent_o component, const MethodInfo_3DC59A8* method);
; bytes=396 sha256=8626d490a838bbd6d63da3fbd3ce85b3942e7e8c11497c6454f4ed074b4ff685 status=arm64_complete_bound indexed_start=True
0x03DC59A8: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC59AC: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC59B0: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC59B4: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC59B8: 681c40f9  ldr x8, [x3, #0x38]
0x03DC59BC: f50303aa  mov x21, x3
0x03DC59C0: f40302aa  mov x20, x2
0x03DC59C4: f30301aa  mov x19, x1
0x03DC59C8: f60300aa  mov x22, x0
0x03DC59CC: 480300b5  cbnz x8, #0x3dc5a34
0x03DC59D0: a0c501d0  adrp x0, #0x767b000
0x03DC59D4: 00a843f9  ldr x0, [x0, #0x750]
0x03DC59D8: 10ecce97  bl #0x3180a18
0x03DC59DC: a0c501d0  adrp x0, #0x767b000
0x03DC59E0: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC59E4: 0decce97  bl #0x3180a18
0x03DC59E8: a0c501d0  adrp x0, #0x767b000
0x03DC59EC: 00b043f9  ldr x0, [x0, #0x760]
0x03DC59F0: 0aecce97  bl #0x3180a18
0x03DC59F4: 40c50190  adrp x0, #0x766d000
0x03DC59F8: 00b844f9  ldr x0, [x0, #0x970]
0x03DC59FC: 07ecce97  bl #0x3180a18
0x03DC5A00: 40c50190  adrp x0, #0x766d000
0x03DC5A04: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC5A08: 04ecce97  bl #0x3180a18
0x03DC5A0C: 40c50190  adrp x0, #0x766d000
0x03DC5A10: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC5A14: 01ecce97  bl #0x3180a18
0x03DC5A18: 40c401b0  adrp x0, #0x764e000
0x03DC5A1C: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC5A20: feebce97  bl #0x3180a18
0x03DC5A24: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5A28: 680000b5  cbnz x8, #0x3dc5a34
0x03DC5A2C: e00315aa  mov x0, x21
0x03DC5A30: 9243ce97  bl #0x3156878
0x03DC5A34: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5A38: c00700b4  cbz x0, #0x3dc5b30
0x03DC5A3C: a8c501d0  adrp x8, #0x767b000
0x03DC5A40: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC5A44: e10313aa  mov x1, x19
0x03DC5A48: 020140f9  ldr x2, [x8]
0x03DC5A4C: 49754494  bl #0x4ee2f70
0x03DC5A50: 60020037  tbnz w0, #0, #0x3dc5a9c
0x03DC5A54: 48c50190  adrp x8, #0x766d000
0x03DC5A58: d70e40f9  ldr x23, [x22, #0x18]
0x03DC5A5C: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC5A60: 000140f9  ldr x0, [x8]
0x03DC5A64: 8fecce97  bl #0x3180ca0
0x03DC5A68: 48c50190  adrp x8, #0x766d000
0x03DC5A6C: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC5A70: f80300aa  mov x24, x0
0x03DC5A74: 010140f9  ldr x1, [x8]
0x03DC5A78: f2e85394  bl #0x52bfe40
0x03DC5A7C: b70500b4  cbz x23, #0x3dc5b30
0x03DC5A80: a8c501d0  adrp x8, #0x767b000
0x03DC5A84: 08a943f9  ldr x8, [x8, #0x750]
0x03DC5A88: e00317aa  mov x0, x23
0x03DC5A8C: e10313aa  mov x1, x19
0x03DC5A90: e20318aa  mov x2, x24
0x03DC5A94: 030140f9  ldr x3, [x8]
0x03DC5A98: b9744494  bl #0x4ee2d7c
0x03DC5A9C: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5AA0: 800400b4  cbz x0, #0x3dc5b30
0x03DC5AA4: a8c501d0  adrp x8, #0x767b000
0x03DC5AA8: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5AAC: e10313aa  mov x1, x19
0x03DC5AB0: 020140f9  ldr x2, [x8]
0x03DC5AB4: 92744494  bl #0x4ee2cfc
0x03DC5AB8: 48c401b0  adrp x8, #0x764e000
0x03DC5ABC: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC5AC0: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5AC4: f60300aa  mov x22, x0
0x03DC5AC8: 080140f9  ldr x8, [x8]
0x03DC5ACC: 370140f9  ldr x23, [x9]
0x03DC5AD0: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC5AD4: 6a000035  cbnz w10, #0x3dc5ae0
0x03DC5AD8: e00308aa  mov x0, x8
0x03DC5ADC: 2cecce97  bl #0x3180b8c
0x03DC5AE0: e00317aa  mov x0, x23
0x03DC5AE4: e1031faa  mov x1, xzr
0x03DC5AE8: b77d6394  bl #0x56a51c4
0x03DC5AEC: 360200b4  cbz x22, #0x3dc5b30
0x03DC5AF0: 48c50190  adrp x8, #0x766d000
0x03DC5AF4: 08b944f9  ldr x8, [x8, #0x970]
0x03DC5AF8: e10300aa  mov x1, x0
0x03DC5AFC: e00316aa  mov x0, x22
0x03DC5B00: 020140f9  ldr x2, [x8]
0x03DC5B04: 48ed5394  bl #0x52c1024
0x03DC5B08: 530100b4  cbz x19, #0x3dc5b30
0x03DC5B0C: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5B10: 811e4092  and x1, x20, #0xff
0x03DC5B14: e00313aa  mov x0, x19
0x03DC5B18: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5B1C: 020940f9  ldr x2, [x8, #0x10]
0x03DC5B20: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC5B24: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC5B28: fe0744f8  ldr x30, [sp], #0x40
0x03DC5B2C: 655ef917  b #0x3c1d4c0
0x03DC5B30: 5fecce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5B34 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<MoveBlockComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_MoveBlockComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_MoveBlockComponent_o component, const MethodInfo_3DC5B34* method);
; bytes=396 sha256=027570247236dd6fb12eae1eec52d786842e5ac7330c548610dab0e26bb0d4d4 status=arm64_complete_bound indexed_start=True
0x03DC5B34: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC5B38: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC5B3C: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC5B40: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC5B44: 681c40f9  ldr x8, [x3, #0x38]
0x03DC5B48: f50303aa  mov x21, x3
0x03DC5B4C: f40302aa  mov x20, x2
0x03DC5B50: f30301aa  mov x19, x1
0x03DC5B54: f60300aa  mov x22, x0
0x03DC5B58: 480300b5  cbnz x8, #0x3dc5bc0
0x03DC5B5C: a0c501d0  adrp x0, #0x767b000
0x03DC5B60: 00a843f9  ldr x0, [x0, #0x750]
0x03DC5B64: adebce97  bl #0x3180a18
0x03DC5B68: a0c501d0  adrp x0, #0x767b000
0x03DC5B6C: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC5B70: aaebce97  bl #0x3180a18
0x03DC5B74: a0c501d0  adrp x0, #0x767b000
0x03DC5B78: 00b043f9  ldr x0, [x0, #0x760]
0x03DC5B7C: a7ebce97  bl #0x3180a18
0x03DC5B80: 40c50190  adrp x0, #0x766d000
0x03DC5B84: 00b844f9  ldr x0, [x0, #0x970]
0x03DC5B88: a4ebce97  bl #0x3180a18
0x03DC5B8C: 40c50190  adrp x0, #0x766d000
0x03DC5B90: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC5B94: a1ebce97  bl #0x3180a18
0x03DC5B98: 40c50190  adrp x0, #0x766d000
0x03DC5B9C: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC5BA0: 9eebce97  bl #0x3180a18
0x03DC5BA4: 40c401b0  adrp x0, #0x764e000
0x03DC5BA8: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC5BAC: 9bebce97  bl #0x3180a18
0x03DC5BB0: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5BB4: 680000b5  cbnz x8, #0x3dc5bc0
0x03DC5BB8: e00315aa  mov x0, x21
0x03DC5BBC: 2f43ce97  bl #0x3156878
0x03DC5BC0: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5BC4: c00700b4  cbz x0, #0x3dc5cbc
0x03DC5BC8: a8c501d0  adrp x8, #0x767b000
0x03DC5BCC: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC5BD0: e10313aa  mov x1, x19
0x03DC5BD4: 020140f9  ldr x2, [x8]
0x03DC5BD8: e6744494  bl #0x4ee2f70
0x03DC5BDC: 60020037  tbnz w0, #0, #0x3dc5c28
0x03DC5BE0: 48c50190  adrp x8, #0x766d000
0x03DC5BE4: d70e40f9  ldr x23, [x22, #0x18]
0x03DC5BE8: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC5BEC: 000140f9  ldr x0, [x8]
0x03DC5BF0: 2cecce97  bl #0x3180ca0
0x03DC5BF4: 48c50190  adrp x8, #0x766d000
0x03DC5BF8: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC5BFC: f80300aa  mov x24, x0
0x03DC5C00: 010140f9  ldr x1, [x8]
0x03DC5C04: 8fe85394  bl #0x52bfe40
0x03DC5C08: b70500b4  cbz x23, #0x3dc5cbc
0x03DC5C0C: a8c501d0  adrp x8, #0x767b000
0x03DC5C10: 08a943f9  ldr x8, [x8, #0x750]
0x03DC5C14: e00317aa  mov x0, x23
0x03DC5C18: e10313aa  mov x1, x19
0x03DC5C1C: e20318aa  mov x2, x24
0x03DC5C20: 030140f9  ldr x3, [x8]
0x03DC5C24: 56744494  bl #0x4ee2d7c
0x03DC5C28: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5C2C: 800400b4  cbz x0, #0x3dc5cbc
0x03DC5C30: a8c501d0  adrp x8, #0x767b000
0x03DC5C34: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5C38: e10313aa  mov x1, x19
0x03DC5C3C: 020140f9  ldr x2, [x8]
0x03DC5C40: 2f744494  bl #0x4ee2cfc
0x03DC5C44: 48c401b0  adrp x8, #0x764e000
0x03DC5C48: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC5C4C: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5C50: f60300aa  mov x22, x0
0x03DC5C54: 080140f9  ldr x8, [x8]
0x03DC5C58: 370140f9  ldr x23, [x9]
0x03DC5C5C: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC5C60: 6a000035  cbnz w10, #0x3dc5c6c
0x03DC5C64: e00308aa  mov x0, x8
0x03DC5C68: c9ebce97  bl #0x3180b8c
0x03DC5C6C: e00317aa  mov x0, x23
0x03DC5C70: e1031faa  mov x1, xzr
0x03DC5C74: 547d6394  bl #0x56a51c4
0x03DC5C78: 360200b4  cbz x22, #0x3dc5cbc
0x03DC5C7C: 48c50190  adrp x8, #0x766d000
0x03DC5C80: 08b944f9  ldr x8, [x8, #0x970]
0x03DC5C84: e10300aa  mov x1, x0
0x03DC5C88: e00316aa  mov x0, x22
0x03DC5C8C: 020140f9  ldr x2, [x8]
0x03DC5C90: e5ec5394  bl #0x52c1024
0x03DC5C94: 530100b4  cbz x19, #0x3dc5cbc
0x03DC5C98: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5C9C: 811e4092  and x1, x20, #0xff
0x03DC5CA0: e00313aa  mov x0, x19
0x03DC5CA4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5CA8: 020940f9  ldr x2, [x8, #0x10]
0x03DC5CAC: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC5CB0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC5CB4: fe0744f8  ldr x30, [sp], #0x40
0x03DC5CB8: 9b5ef917  b #0x3c1d724
0x03DC5CBC: fcebce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5CC0 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<PendingInteractionComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_PendingInteractionComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_PendingInteractionComponent_o component, const MethodInfo_3DC5CC0* method);
; bytes=404 sha256=2b160e6b00ebc0e714decefe622f7f6c68e8d40ae6bb71f6c6eeb3912ab8f582 status=arm64_complete_bound indexed_start=True
0x03DC5CC0: fe67bca9  stp x30, x25, [sp, #-0x40]!
0x03DC5CC4: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC5CC8: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC5CCC: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC5CD0: 881c40f9  ldr x8, [x4, #0x38]
0x03DC5CD4: f50304aa  mov x21, x4
0x03DC5CD8: f30303aa  mov x19, x3
0x03DC5CDC: f40302aa  mov x20, x2
0x03DC5CE0: f60301aa  mov x22, x1
0x03DC5CE4: f70300aa  mov x23, x0
0x03DC5CE8: 480300b5  cbnz x8, #0x3dc5d50
0x03DC5CEC: a0c501d0  adrp x0, #0x767b000
0x03DC5CF0: 00a843f9  ldr x0, [x0, #0x750]
0x03DC5CF4: 49ebce97  bl #0x3180a18
0x03DC5CF8: a0c501d0  adrp x0, #0x767b000
0x03DC5CFC: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC5D00: 46ebce97  bl #0x3180a18
0x03DC5D04: a0c501d0  adrp x0, #0x767b000
0x03DC5D08: 00b043f9  ldr x0, [x0, #0x760]
0x03DC5D0C: 43ebce97  bl #0x3180a18
0x03DC5D10: 40c50190  adrp x0, #0x766d000
0x03DC5D14: 00b844f9  ldr x0, [x0, #0x970]
0x03DC5D18: 40ebce97  bl #0x3180a18
0x03DC5D1C: 40c50190  adrp x0, #0x766d000
0x03DC5D20: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC5D24: 3debce97  bl #0x3180a18
0x03DC5D28: 40c50190  adrp x0, #0x766d000
0x03DC5D2C: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC5D30: 3aebce97  bl #0x3180a18
0x03DC5D34: 40c401b0  adrp x0, #0x764e000
0x03DC5D38: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC5D3C: 37ebce97  bl #0x3180a18
0x03DC5D40: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5D44: 680000b5  cbnz x8, #0x3dc5d50
0x03DC5D48: e00315aa  mov x0, x21
0x03DC5D4C: cb42ce97  bl #0x3156878
0x03DC5D50: e00e40f9  ldr x0, [x23, #0x18]
0x03DC5D54: e00700b4  cbz x0, #0x3dc5e50
0x03DC5D58: a8c501d0  adrp x8, #0x767b000
0x03DC5D5C: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC5D60: e10316aa  mov x1, x22
0x03DC5D64: 020140f9  ldr x2, [x8]
0x03DC5D68: 82744494  bl #0x4ee2f70
0x03DC5D6C: 60020037  tbnz w0, #0, #0x3dc5db8
0x03DC5D70: 48c50190  adrp x8, #0x766d000
0x03DC5D74: f80e40f9  ldr x24, [x23, #0x18]
0x03DC5D78: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC5D7C: 000140f9  ldr x0, [x8]
0x03DC5D80: c8ebce97  bl #0x3180ca0
0x03DC5D84: 48c50190  adrp x8, #0x766d000
0x03DC5D88: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC5D8C: f90300aa  mov x25, x0
0x03DC5D90: 010140f9  ldr x1, [x8]
0x03DC5D94: 2be85394  bl #0x52bfe40
0x03DC5D98: d80500b4  cbz x24, #0x3dc5e50
0x03DC5D9C: a8c501d0  adrp x8, #0x767b000
0x03DC5DA0: 08a943f9  ldr x8, [x8, #0x750]
0x03DC5DA4: e00318aa  mov x0, x24
0x03DC5DA8: e10316aa  mov x1, x22
0x03DC5DAC: e20319aa  mov x2, x25
0x03DC5DB0: 030140f9  ldr x3, [x8]
0x03DC5DB4: f2734494  bl #0x4ee2d7c
0x03DC5DB8: e00e40f9  ldr x0, [x23, #0x18]
0x03DC5DBC: a00400b4  cbz x0, #0x3dc5e50
0x03DC5DC0: a8c501d0  adrp x8, #0x767b000
0x03DC5DC4: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5DC8: e10316aa  mov x1, x22
0x03DC5DCC: 020140f9  ldr x2, [x8]
0x03DC5DD0: cb734494  bl #0x4ee2cfc
0x03DC5DD4: 48c401b0  adrp x8, #0x764e000
0x03DC5DD8: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC5DDC: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5DE0: f70300aa  mov x23, x0
0x03DC5DE4: 080140f9  ldr x8, [x8]
0x03DC5DE8: 380140f9  ldr x24, [x9]
0x03DC5DEC: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC5DF0: 6a000035  cbnz w10, #0x3dc5dfc
0x03DC5DF4: e00308aa  mov x0, x8
0x03DC5DF8: 65ebce97  bl #0x3180b8c
0x03DC5DFC: e00318aa  mov x0, x24
0x03DC5E00: e1031faa  mov x1, xzr
0x03DC5E04: f07c6394  bl #0x56a51c4
0x03DC5E08: 570200b4  cbz x23, #0x3dc5e50
0x03DC5E0C: 48c50190  adrp x8, #0x766d000
0x03DC5E10: 08b944f9  ldr x8, [x8, #0x970]
0x03DC5E14: e10300aa  mov x1, x0
0x03DC5E18: e00317aa  mov x0, x23
0x03DC5E1C: 020140f9  ldr x2, [x8]
0x03DC5E20: 81ec5394  bl #0x52c1024
0x03DC5E24: 760100b4  cbz x22, #0x3dc5e50
0x03DC5E28: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5E2C: e00316aa  mov x0, x22
0x03DC5E30: e10314aa  mov x1, x20
0x03DC5E34: e20313aa  mov x2, x19
0x03DC5E38: 030940f9  ldr x3, [x8, #0x10]
0x03DC5E3C: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5E40: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC5E44: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC5E48: fe67c4a8  ldp x30, x25, [sp], #0x40
0x03DC5E4C: 685ef917  b #0x3c1d7ec
0x03DC5E50: 97ebce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5E54 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<ResourceConsumedComponent>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent_ResourceConsumedComponent_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Merger_MergeBoard_Components_ResourceConsumedComponent_o component, const MethodInfo_3DC5E54* method);
; bytes=396 sha256=421b30dd56c71e2d30d04379cca382ae4a4dfa363390df793e7078a5db0a0735 status=arm64_complete_bound indexed_start=True
0x03DC5E54: fe0f1cf8  str x30, [sp, #-0x40]!
0x03DC5E58: f85f01a9  stp x24, x23, [sp, #0x10]
0x03DC5E5C: f65702a9  stp x22, x21, [sp, #0x20]
0x03DC5E60: f44f03a9  stp x20, x19, [sp, #0x30]
0x03DC5E64: 681c40f9  ldr x8, [x3, #0x38]
0x03DC5E68: f50303aa  mov x21, x3
0x03DC5E6C: f40302aa  mov x20, x2
0x03DC5E70: f30301aa  mov x19, x1
0x03DC5E74: f60300aa  mov x22, x0
0x03DC5E78: 480300b5  cbnz x8, #0x3dc5ee0
0x03DC5E7C: a0c501d0  adrp x0, #0x767b000
0x03DC5E80: 00a843f9  ldr x0, [x0, #0x750]
0x03DC5E84: e5eace97  bl #0x3180a18
0x03DC5E88: a0c501d0  adrp x0, #0x767b000
0x03DC5E8C: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC5E90: e2eace97  bl #0x3180a18
0x03DC5E94: a0c501d0  adrp x0, #0x767b000
0x03DC5E98: 00b043f9  ldr x0, [x0, #0x760]
0x03DC5E9C: dfeace97  bl #0x3180a18
0x03DC5EA0: 40c50190  adrp x0, #0x766d000
0x03DC5EA4: 00b844f9  ldr x0, [x0, #0x970]
0x03DC5EA8: dceace97  bl #0x3180a18
0x03DC5EAC: 40c50190  adrp x0, #0x766d000
0x03DC5EB0: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC5EB4: d9eace97  bl #0x3180a18
0x03DC5EB8: 40c50190  adrp x0, #0x766d000
0x03DC5EBC: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC5EC0: d6eace97  bl #0x3180a18
0x03DC5EC4: 40c401b0  adrp x0, #0x764e000
0x03DC5EC8: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC5ECC: d3eace97  bl #0x3180a18
0x03DC5ED0: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5ED4: 680000b5  cbnz x8, #0x3dc5ee0
0x03DC5ED8: e00315aa  mov x0, x21
0x03DC5EDC: 6742ce97  bl #0x3156878
0x03DC5EE0: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5EE4: c00700b4  cbz x0, #0x3dc5fdc
0x03DC5EE8: a8c501d0  adrp x8, #0x767b000
0x03DC5EEC: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC5EF0: e10313aa  mov x1, x19
0x03DC5EF4: 020140f9  ldr x2, [x8]
0x03DC5EF8: 1e744494  bl #0x4ee2f70
0x03DC5EFC: 60020037  tbnz w0, #0, #0x3dc5f48
0x03DC5F00: 48c50190  adrp x8, #0x766d000
0x03DC5F04: d70e40f9  ldr x23, [x22, #0x18]
0x03DC5F08: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC5F0C: 000140f9  ldr x0, [x8]
0x03DC5F10: 64ebce97  bl #0x3180ca0
0x03DC5F14: 48c50190  adrp x8, #0x766d000
0x03DC5F18: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC5F1C: f80300aa  mov x24, x0
0x03DC5F20: 010140f9  ldr x1, [x8]
0x03DC5F24: c7e75394  bl #0x52bfe40
0x03DC5F28: b70500b4  cbz x23, #0x3dc5fdc
0x03DC5F2C: a8c501d0  adrp x8, #0x767b000
0x03DC5F30: 08a943f9  ldr x8, [x8, #0x750]
0x03DC5F34: e00317aa  mov x0, x23
0x03DC5F38: e10313aa  mov x1, x19
0x03DC5F3C: e20318aa  mov x2, x24
0x03DC5F40: 030140f9  ldr x3, [x8]
0x03DC5F44: 8e734494  bl #0x4ee2d7c
0x03DC5F48: c00e40f9  ldr x0, [x22, #0x18]
0x03DC5F4C: 800400b4  cbz x0, #0x3dc5fdc
0x03DC5F50: a8c501d0  adrp x8, #0x767b000
0x03DC5F54: 08b143f9  ldr x8, [x8, #0x760]
0x03DC5F58: e10313aa  mov x1, x19
0x03DC5F5C: 020140f9  ldr x2, [x8]
0x03DC5F60: 67734494  bl #0x4ee2cfc
0x03DC5F64: 48c401b0  adrp x8, #0x764e000
0x03DC5F68: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC5F6C: a91e40f9  ldr x9, [x21, #0x38]
0x03DC5F70: f60300aa  mov x22, x0
0x03DC5F74: 080140f9  ldr x8, [x8]
0x03DC5F78: 370140f9  ldr x23, [x9]
0x03DC5F7C: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC5F80: 6a000035  cbnz w10, #0x3dc5f8c
0x03DC5F84: e00308aa  mov x0, x8
0x03DC5F88: 01ebce97  bl #0x3180b8c
0x03DC5F8C: e00317aa  mov x0, x23
0x03DC5F90: e1031faa  mov x1, xzr
0x03DC5F94: 8c7c6394  bl #0x56a51c4
0x03DC5F98: 360200b4  cbz x22, #0x3dc5fdc
0x03DC5F9C: 48c50190  adrp x8, #0x766d000
0x03DC5FA0: 08b944f9  ldr x8, [x8, #0x970]
0x03DC5FA4: e10300aa  mov x1, x0
0x03DC5FA8: e00316aa  mov x0, x22
0x03DC5FAC: 020140f9  ldr x2, [x8]
0x03DC5FB0: 1dec5394  bl #0x52c1024
0x03DC5FB4: 530100b4  cbz x19, #0x3dc5fdc
0x03DC5FB8: a81e40f9  ldr x8, [x21, #0x38]
0x03DC5FBC: 811e4092  and x1, x20, #0xff
0x03DC5FC0: e00313aa  mov x0, x19
0x03DC5FC4: f44f43a9  ldp x20, x19, [sp, #0x30]
0x03DC5FC8: 020940f9  ldr x2, [x8, #0x10]
0x03DC5FCC: f65742a9  ldp x22, x21, [sp, #0x20]
0x03DC5FD0: f85f41a9  ldp x24, x23, [sp, #0x10]
0x03DC5FD4: fe0744f8  ldr x30, [sp], #0x40
0x03DC5FD8: a15ef917  b #0x3c1da5c
0x03DC5FDC: 34ebce97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x3DC5FE0 | ContextualizedECS.Context.TickContextExtensions$$AddTempComponent<__Il2CppFullySharedGenericStructType>
; native signature: void ContextualizedECS_Context_TickContextExtensions__AddTempComponent___Il2CppFullySharedGenericStructType_ (ContextualizedECS_Context_TickContext_o context, ContextualizedECS_Entity_o* entity, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o component, const MethodInfo_3DC5FE0* method);
; bytes=524 sha256=c3b003ade19af20c21d626881852509f51556e147b9f83078358829f9bc8a141 status=arm64_complete_bound indexed_start=True
0x03DC5FE0: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x03DC5FE4: fb0b00f9  str x27, [sp, #0x10]
0x03DC5FE8: fa6702a9  stp x26, x25, [sp, #0x20]
0x03DC5FEC: f85f03a9  stp x24, x23, [sp, #0x30]
0x03DC5FF0: f65704a9  stp x22, x21, [sp, #0x40]
0x03DC5FF4: f44f05a9  stp x20, x19, [sp, #0x50]
0x03DC5FF8: fd030091  mov x29, sp
0x03DC5FFC: ff4300d1  sub sp, sp, #0x10
0x03DC6000: 5bd03bd5  mrs x27, tpidr_el0
0x03DC6004: 681740f9  ldr x8, [x27, #0x28]
0x03DC6008: f40303aa  mov x20, x3
0x03DC600C: f50302aa  mov x21, x2
0x03DC6010: f30301aa  mov x19, x1
0x03DC6014: a8831ff8  stur x8, [x29, #-8]
0x03DC6018: 681c40f9  ldr x8, [x3, #0x38]
0x03DC601C: f70300aa  mov x23, x0
0x03DC6020: 680300b5  cbnz x8, #0x3dc608c
0x03DC6024: a0c501b0  adrp x0, #0x767b000
0x03DC6028: 00a843f9  ldr x0, [x0, #0x750]
0x03DC602C: 7beace97  bl #0x3180a18
0x03DC6030: a0c501b0  adrp x0, #0x767b000
0x03DC6034: 00ac43f9  ldr x0, [x0, #0x758]
0x03DC6038: 78eace97  bl #0x3180a18
0x03DC603C: a0c501b0  adrp x0, #0x767b000
0x03DC6040: 00b043f9  ldr x0, [x0, #0x760]
0x03DC6044: 75eace97  bl #0x3180a18
0x03DC6048: 20c501f0  adrp x0, #0x766d000
0x03DC604C: 00b844f9  ldr x0, [x0, #0x970]
0x03DC6050: 72eace97  bl #0x3180a18
0x03DC6054: 20c501f0  adrp x0, #0x766d000
0x03DC6058: 007043f9  ldr x0, [x0, #0x6e0]
0x03DC605C: 6feace97  bl #0x3180a18
0x03DC6060: 20c501f0  adrp x0, #0x766d000
0x03DC6064: 006c43f9  ldr x0, [x0, #0x6d8]
0x03DC6068: 6ceace97  bl #0x3180a18
0x03DC606C: 40c40190  adrp x0, #0x764e000
0x03DC6070: 00ac42f9  ldr x0, [x0, #0x558]
0x03DC6074: 69eace97  bl #0x3180a18
0x03DC6078: 881e40f9  ldr x8, [x20, #0x38]
0x03DC607C: 880000b5  cbnz x8, #0x3dc608c
0x03DC6080: e00314aa  mov x0, x20
0x03DC6084: fd41ce97  bl #0x3156878
0x03DC6088: 881e40f9  ldr x8, [x20, #0x38]
0x03DC608C: 080540f9  ldr x8, [x8, #8]
0x03DC6090: 18fd40b9  ldr w24, [x8, #0xfc]
0x03DC6094: e8030091  mov x8, sp
0x03DC6098: 093f0091  add x9, x24, #0xf
0x03DC609C: 29717c92  and x9, x9, #0x1fffffff0
0x03DC60A0: 160109cb  sub x22, x8, x9
0x03DC60A4: df020091  mov sp, x22
0x03DC60A8: e00e40f9  ldr x0, [x23, #0x18]
0x03DC60AC: c00900b4  cbz x0, #0x3dc61e4
0x03DC60B0: a8c501b0  adrp x8, #0x767b000
0x03DC60B4: 08ad43f9  ldr x8, [x8, #0x758]
0x03DC60B8: e10313aa  mov x1, x19
0x03DC60BC: 020140f9  ldr x2, [x8]
0x03DC60C0: ac734494  bl #0x4ee2f70
0x03DC60C4: 60020037  tbnz w0, #0, #0x3dc6110
0x03DC60C8: 28c501f0  adrp x8, #0x766d000
0x03DC60CC: f90e40f9  ldr x25, [x23, #0x18]
0x03DC60D0: 086d43f9  ldr x8, [x8, #0x6d8]
0x03DC60D4: 000140f9  ldr x0, [x8]
0x03DC60D8: f2eace97  bl #0x3180ca0
0x03DC60DC: 28c501f0  adrp x8, #0x766d000
0x03DC60E0: 087143f9  ldr x8, [x8, #0x6e0]
0x03DC60E4: fa0300aa  mov x26, x0
0x03DC60E8: 010140f9  ldr x1, [x8]
0x03DC60EC: 55e75394  bl #0x52bfe40
0x03DC60F0: b90700b4  cbz x25, #0x3dc61e4
0x03DC60F4: a8c501b0  adrp x8, #0x767b000
0x03DC60F8: 08a943f9  ldr x8, [x8, #0x750]
0x03DC60FC: e00319aa  mov x0, x25
0x03DC6100: e10313aa  mov x1, x19
0x03DC6104: e2031aaa  mov x2, x26
0x03DC6108: 030140f9  ldr x3, [x8]
0x03DC610C: 1c734494  bl #0x4ee2d7c
0x03DC6110: e00e40f9  ldr x0, [x23, #0x18]
0x03DC6114: 800600b4  cbz x0, #0x3dc61e4
0x03DC6118: a8c501b0  adrp x8, #0x767b000
0x03DC611C: 08b143f9  ldr x8, [x8, #0x760]
0x03DC6120: e10313aa  mov x1, x19
0x03DC6124: 020140f9  ldr x2, [x8]
0x03DC6128: f5724494  bl #0x4ee2cfc
0x03DC612C: 48c40190  adrp x8, #0x764e000
0x03DC6130: 08ad42f9  ldr x8, [x8, #0x558]
0x03DC6134: 891e40f9  ldr x9, [x20, #0x38]
0x03DC6138: f70300aa  mov x23, x0
0x03DC613C: 080140f9  ldr x8, [x8]
0x03DC6140: 390140f9  ldr x25, [x9]
0x03DC6144: 0ae140b9  ldr w10, [x8, #0xe0]
0x03DC6148: 6a000035  cbnz w10, #0x3dc6154
0x03DC614C: e00308aa  mov x0, x8
0x03DC6150: 8feace97  bl #0x3180b8c
0x03DC6154: e00319aa  mov x0, x25
0x03DC6158: e1031faa  mov x1, xzr
0x03DC615C: 1a7c6394  bl #0x56a51c4
0x03DC6160: 370400b4  cbz x23, #0x3dc61e4
0x03DC6164: 28c501f0  adrp x8, #0x766d000
0x03DC6168: 08b944f9  ldr x8, [x8, #0x970]
0x03DC616C: e10300aa  mov x1, x0
0x03DC6170: e00317aa  mov x0, x23
0x03DC6174: 020140f9  ldr x2, [x8]
0x03DC6178: abeb5394  bl #0x52c1024
0x03DC617C: e00316aa  mov x0, x22
0x03DC6180: e10315aa  mov x1, x21
0x03DC6184: e20318aa  mov x2, x24
0x03DC6188: fa21d094  bl #0x71ce970
0x03DC618C: d30200b4  cbz x19, #0x3dc61e4
0x03DC6190: 881e40f9  ldr x8, [x20, #0x38]
0x03DC6194: a34300d1  sub x3, x29, #0x10
0x03DC6198: e20313aa  mov x2, x19
0x03DC619C: e40316aa  mov x4, x22
0x03DC61A0: 010940f9  ldr x1, [x8, #0x10]
0x03DC61A4: 200040f9  ldr x0, [x1]
0x03DC61A8: b6031ff8  stur x22, [x29, #-0x10]
0x03DC61AC: 280840f9  ldr x8, [x1, #0x10]
0x03DC61B0: 00013fd6  blr x8
0x03DC61B4: 681740f9  ldr x8, [x27, #0x28]
0x03DC61B8: a9835ff8  ldur x9, [x29, #-8]
0x03DC61BC: 1f0109eb  cmp x8, x9
0x03DC61C0: 41010054  b.ne #0x3dc61e8
0x03DC61C4: bf030091  mov sp, x29
0x03DC61C8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x03DC61CC: f65744a9  ldp x22, x21, [sp, #0x40]
0x03DC61D0: f85f43a9  ldp x24, x23, [sp, #0x30]
0x03DC61D4: fa6742a9  ldp x26, x25, [sp, #0x20]
0x03DC61D8: fb0b40f9  ldr x27, [sp, #0x10]
0x03DC61DC: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x03DC61E0: c0035fd6  ret
0x03DC61E4: b2eace97  bl #0x3180cac
0x03DC61E8: ea21d094  bl #0x71ce990

