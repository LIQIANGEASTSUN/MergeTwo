; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 438 .ResourcesConfigurationModel.<>c__DisplayClass24_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x61271A4 | public void .ctor() { }
; bytes=8 sha256=9e2e034e82e739d5138170ddbe4e2ba1ecc6bd6975998220685c1c1d659d6d01 status=arm64_complete_bound indexed_start=True
0x061271A4: e1031faa  mov x1, xzr
0x061271A8: 15cdd617  b #0x56da5fc

; RVA 0x6127388 | internal void <LoadTokenSpriteAsset>b__0(AsyncOperationHandle<Sprite> handle) { }
; bytes=232 sha256=1058c67842b1849fe752e24ddf09ef5b4a539396ed726d2cfe3cdeb63d58fea3 status=arm64_complete_bound indexed_start=True
0x06127388: fe5fbda9  stp x30, x23, [sp, #-0x30]!
0x0612738C: f65701a9  stp x22, x21, [sp, #0x10]
0x06127390: f44f02a9  stp x20, x19, [sp, #0x20]
0x06127394: f6df00b0  adrp x22, #0x7d24000
0x06127398: 97ad00f0  adrp x23, #0x76da000
0x0612739C: 95ad00f0  adrp x21, #0x76da000
0x061273A0: c88a5239  ldrb w8, [x22, #0x4a2]
0x061273A4: f75241f9  ldr x23, [x23, #0x2a0]
0x061273A8: b55641f9  ldr x21, [x21, #0x2a8]
0x061273AC: f40301aa  mov x20, x1
0x061273B0: f30300aa  mov x19, x0
0x061273B4: 88010037  tbnz w8, #0, #0x61273e4
0x061273B8: 80ad00f0  adrp x0, #0x76da000
0x061273BC: 005041f9  ldr x0, [x0, #0x2a0]
0x061273C0: 96654197  bl #0x3180a18
0x061273C4: 80ad00f0  adrp x0, #0x76da000
0x061273C8: 005441f9  ldr x0, [x0, #0x2a8]
0x061273CC: 93654197  bl #0x3180a18
0x061273D0: 80ad00f0  adrp x0, #0x76da000
0x061273D4: 005841f9  ldr x0, [x0, #0x2b0]
0x061273D8: 90654197  bl #0x3180a18
0x061273DC: 28008052  movz w8, #0x1
0x061273E0: c88a1239  strb w8, [x22, #0x4a2]
0x061273E4: e10240f9  ldr x1, [x23]
0x061273E8: e00314aa  mov x0, x20
0x061273EC: 800da797  bl #0x4aea9ec
0x061273F0: a10240f9  ldr x1, [x21]
0x061273F4: f50300aa  mov x21, x0
0x061273F8: e00314aa  mov x0, x20
0x061273FC: 950da797  bl #0x4aeaa50
0x06127400: 1f040071  cmp w0, #1
0x06127404: c1020054  b.ne #0x612745c
0x06127408: 610a40f9  ldr x1, [x19, #0x10]
0x0612740C: e00315aa  mov x0, x21
0x06127410: e2031faa  mov x2, xzr
0x06127414: b365fd97  bl #0x6080ae0
0x06127418: 680e40f9  ldr x8, [x19, #0x18]
0x0612741C: 880200b4  cbz x8, #0x612746c
0x06127420: f40300aa  mov x20, x0
0x06127424: 001940f9  ldr x0, [x8, #0x30]
0x06127428: 200200b4  cbz x0, #0x612746c
0x0612742C: 88ad00f0  adrp x8, #0x76da000
0x06127430: 611240f9  ldr x1, [x19, #0x20]
0x06127434: 085941f9  ldr x8, [x8, #0x2b0]
0x06127438: e20314aa  mov x2, x20
0x0612743C: 030140f9  ldr x3, [x8]
0x06127440: 4aeeb697  bl #0x4ee2d68
0x06127444: e00314aa  mov x0, x20
0x06127448: f44f42a9  ldp x20, x19, [sp, #0x20]
0x0612744C: f65741a9  ldp x22, x21, [sp, #0x10]
0x06127450: e1031faa  mov x1, xzr
0x06127454: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06127458: 0c65fd17  b #0x6080888
0x0612745C: f44f42a9  ldp x20, x19, [sp, #0x20]
0x06127460: f65741a9  ldp x22, x21, [sp, #0x10]
0x06127464: fe5fc3a8  ldp x30, x23, [sp], #0x30
0x06127468: c0035fd6  ret
0x0612746C: 10664197  bl #0x3180cac

