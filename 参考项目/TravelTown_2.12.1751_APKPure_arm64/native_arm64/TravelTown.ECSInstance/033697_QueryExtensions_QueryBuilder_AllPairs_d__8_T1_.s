; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 33697 .QueryExtensions.QueryBuilder.<AllPairs>d__8<T1>
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEDC3C | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$.ctor
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType____ctor (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, int32_t __1__state, const MethodInfo_4DEDC3C* method);
; bytes=104 sha256=35ff10ea07824056d81f422dfcf39c24aaa12d3175936c03359e88aa4255ca87 status=arm64_complete_bound indexed_start=True
0x04DEDC3C: fe57bea9  stp x30, x21, [sp, #-0x20]!
0x04DEDC40: f44f01a9  stp x20, x19, [sp, #0x10]
0x04DEDC44: f403012a  mov w20, w1
0x04DEDC48: e1031faa  mov x1, xzr
0x04DEDC4C: f30302aa  mov x19, x2
0x04DEDC50: f50300aa  mov x21, x0
0x04DEDC54: 6ab22394  bl #0x56da5fc
0x04DEDC58: 681240f9  ldr x8, [x19, #0x20]
0x04DEDC5C: e00315aa  mov x0, x21
0x04DEDC60: e203142a  mov w2, w20
0x04DEDC64: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDC68: 080140f9  ldr x8, [x8]
0x04DEDC6C: 014140f9  ldr x1, [x8, #0x80]
0x04DEDC70: a0a68097  bl #0x2e176f0
0x04DEDC74: e0031faa  mov x0, xzr
0x04DEDC78: 14c22394  bl #0x56de4c8
0x04DEDC7C: 681240f9  ldr x8, [x19, #0x20]
0x04DEDC80: f44f41a9  ldp x20, x19, [sp, #0x10]
0x04DEDC84: e203002a  mov w2, w0
0x04DEDC88: e00315aa  mov x0, x21
0x04DEDC8C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDC90: 080140f9  ldr x8, [x8]
0x04DEDC94: 084140f9  ldr x8, [x8, #0x80]
0x04DEDC98: 01010191  add x1, x8, #0x40
0x04DEDC9C: fe57c2a8  ldp x30, x21, [sp], #0x20
0x04DEDCA0: 94a68017  b #0x2e176f0

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEDCA4 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___System_IDisposable_Dispose (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEDCA4* method);
; bytes=4 sha256=110f46b5b35c069160560c6ad6786f647dd44e8760a52a46fc22dbbcd7630b91 status=arm64_complete_bound indexed_start=True
0x04DEDCA4: c0035fd6  ret

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEDCA8 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$MoveNext
; native signature: bool ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___MoveNext (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEDCA8* method);
; bytes=1908 sha256=fef34f2e38ce83064dc393012ac6d171afc91823fb26069cd760776eddc32cb0 status=arm64_complete_bound indexed_start=True
0x04DEDCA8: fd7bbaa9  stp x29, x30, [sp, #-0x60]!
0x04DEDCAC: fc6f01a9  stp x28, x27, [sp, #0x10]
0x04DEDCB0: fa6702a9  stp x26, x25, [sp, #0x20]
0x04DEDCB4: f85f03a9  stp x24, x23, [sp, #0x30]
0x04DEDCB8: f65704a9  stp x22, x21, [sp, #0x40]
0x04DEDCBC: f44f05a9  stp x20, x19, [sp, #0x50]
0x04DEDCC0: fd030091  mov x29, sp
0x04DEDCC4: ff0301d1  sub sp, sp, #0x40
0x04DEDCC8: 48d03bd5  mrs x8, tpidr_el0
0x04DEDCCC: a8831df8  stur x8, [x29, #-0x28]
0x04DEDCD0: 081540f9  ldr x8, [x8, #0x28]
0x04DEDCD4: 757901d0  adrp x21, #0x7d1b000
0x04DEDCD8: f40301aa  mov x20, x1
0x04DEDCDC: f30300aa  mov x19, x0
0x04DEDCE0: a8831ff8  stur x8, [x29, #-8]
0x04DEDCE4: a89a5839  ldrb w8, [x21, #0x626]
0x04DEDCE8: c8000037  tbnz w8, #0, #0x4dedd00
0x04DEDCEC: a0440190  adrp x0, #0x7681000
0x04DEDCF0: 00b840f9  ldr x0, [x0, #0x170]
0x04DEDCF4: 494b8e97  bl #0x3180a18
0x04DEDCF8: 28008052  movz w8, #0x1
0x04DEDCFC: a89a1839  strb w8, [x21, #0x626]
0x04DEDD00: 950e42f8  ldr x21, [x20, #0x20]!
0x04DEDD04: a86240f9  ldr x8, [x21, #0xc0]
0x04DEDD08: 090d40f9  ldr x9, [x8, #0x18]
0x04DEDD0C: 082140f9  ldr x8, [x8, #0x40]
0x04DEDD10: 3afd40b9  ldr w26, [x9, #0xfc]
0x04DEDD14: 0afd40b9  ldr w10, [x8, #0xfc]
0x04DEDD18: e8030091  mov x8, sp
0x04DEDD1C: 493f0091  add x9, x26, #0xf
0x04DEDD20: 29717c92  and x9, x9, #0x1fffffff0
0x04DEDD24: 1b0109cb  sub x27, x8, x9
0x04DEDD28: 7f030091  mov sp, x27
0x04DEDD2C: e8030091  mov x8, sp
0x04DEDD30: 080109cb  sub x8, x8, x9
0x04DEDD34: a8031ef8  stur x8, [x29, #-0x20]
0x04DEDD38: 1f010091  mov sp, x8
0x04DEDD3C: e8030091  mov x8, sp
0x04DEDD40: 080109cb  sub x8, x8, x9
0x04DEDD44: a8ab3ca9  stp x8, x10, [x29, #-0x38]
0x04DEDD48: 1f010091  mov sp, x8
0x04DEDD4C: e8030091  mov x8, sp
0x04DEDD50: 190109cb  sub x25, x8, x9
0x04DEDD54: 3f030091  mov sp, x25
0x04DEDD58: 4a3d0091  add x10, x10, #0xf
0x04DEDD5C: e8030091  mov x8, sp
0x04DEDD60: 4a717c92  and x10, x10, #0x1fffffff0
0x04DEDD64: 16010acb  sub x22, x8, x10
0x04DEDD68: df020091  mov sp, x22
0x04DEDD6C: e8030091  mov x8, sp
0x04DEDD70: 1c0109cb  sub x28, x8, x9
0x04DEDD74: 9f030091  mov sp, x28
0x04DEDD78: e0031caa  mov x0, x28
0x04DEDD7C: e1031f2a  mov w1, wzr
0x04DEDD80: e2031aaa  mov x2, x26
0x04DEDD84: 07838f94  bl #0x71ce9a0
0x04DEDD88: a86240f9  ldr x8, [x21, #0xc0]
0x04DEDD8C: e00313aa  mov x0, x19
0x04DEDD90: 080140f9  ldr x8, [x8]
0x04DEDD94: 014140f9  ldr x1, [x8, #0x80]
0x04DEDD98: 284b8e97  bl #0x3180a38
0x04DEDD9C: 080040b9  ldr w8, [x0]
0x04DEDDA0: 1f050071  cmp w8, #1
0x04DEDDA4: 60040054  b.eq #0x4dede30
0x04DEDDA8: f5031f2a  mov w21, wzr
0x04DEDDAC: a8300035  cbnz w8, #0x4dee3c0
0x04DEDDB0: 880240f9  ldr x8, [x20]
0x04DEDDB4: 02008012  movn w2, #0
0x04DEDDB8: e00313aa  mov x0, x19
0x04DEDDBC: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDDC0: 080140f9  ldr x8, [x8]
0x04DEDDC4: 014140f9  ldr x1, [x8, #0x80]
0x04DEDDC8: 4aa68097  bl #0x2e176f0
0x04DEDDCC: 880240f9  ldr x8, [x20]
0x04DEDDD0: e00313aa  mov x0, x19
0x04DEDDD4: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDDD8: 080140f9  ldr x8, [x8]
0x04DEDDDC: 084140f9  ldr x8, [x8, #0x80]
0x04DEDDE0: 01810191  add x1, x8, #0x60
0x04DEDDE4: 154b8e97  bl #0x3180a38
0x04DEDDE8: a8440190  adrp x8, #0x7681000
0x04DEDDEC: 000040f9  ldr x0, [x0]
0x04DEDDF0: 08b940f9  ldr x8, [x8, #0x170]
0x04DEDDF4: 010140f9  ldr x1, [x8]
0x04DEDDF8: b8b6b997  bl #0x3c5b8d8
0x04DEDDFC: 880240f9  ldr x8, [x20]
0x04DEDE00: e20300aa  mov x2, x0
0x04DEDE04: e00313aa  mov x0, x19
0x04DEDE08: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDE0C: 080140f9  ldr x8, [x8]
0x04DEDE10: 084140f9  ldr x8, [x8, #0x80]
0x04DEDE14: 01810291  add x1, x8, #0xa0
0x04DEDE18: 48a68097  bl #0x2e17738
0x04DEDE1C: 880240f9  ldr x8, [x20]
0x04DEDE20: e00313aa  mov x0, x19
0x04DEDE24: e2031f2a  mov w2, wzr
0x04DEDE28: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDE2C: 29010014  b #0x4dee2d0
0x04DEDE30: 880240f9  ldr x8, [x20]
0x04DEDE34: 02008012  movn w2, #0
0x04DEDE38: e00313aa  mov x0, x19
0x04DEDE3C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDE40: 080140f9  ldr x8, [x8]
0x04DEDE44: 014140f9  ldr x1, [x8, #0x80]
0x04DEDE48: 2aa68097  bl #0x2e176f0
0x04DEDE4C: 08018052  movz w8, #0x8
0x04DEDE50: 6f000014  b #0x4dee00c
0x04DEDE54: 880240f9  ldr x8, [x20]
0x04DEDE58: e00313aa  mov x0, x19
0x04DEDE5C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDE60: 080140f9  ldr x8, [x8]
0x04DEDE64: 084140f9  ldr x8, [x8, #0x80]
0x04DEDE68: 01810291  add x1, x8, #0xa0
0x04DEDE6C: f34a8e97  bl #0x3180a38
0x04DEDE70: 880240f9  ldr x8, [x20]
0x04DEDE74: 150040f9  ldr x21, [x0]
0x04DEDE78: e00313aa  mov x0, x19
0x04DEDE7C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDE80: 080140f9  ldr x8, [x8]
0x04DEDE84: 084140f9  ldr x8, [x8, #0x80]
0x04DEDE88: 01010391  add x1, x8, #0xc0
0x04DEDE8C: eb4a8e97  bl #0x3180a38
0x04DEDE90: 152c00b4  cbz x21, #0x4dee410
0x04DEDE94: 080080b9  ldrsw x8, [x0]
0x04DEDE98: a91a40b9  ldr w9, [x21, #0x18]
0x04DEDE9C: 1f01096b  cmp w8, w9
0x04DEDEA0: a22b0054  b.hs #0x4dee414
0x04DEDEA4: 890240f9  ldr x9, [x20]
0x04DEDEA8: a80e088b  add x8, x21, x8, lsl #3
0x04DEDEAC: 151140f9  ldr x21, [x8, #0x20]
0x04DEDEB0: e00313aa  mov x0, x19
0x04DEDEB4: 296140f9  ldr x9, [x9, #0xc0]
0x04DEDEB8: 290140f9  ldr x9, [x9]
0x04DEDEBC: 294140f9  ldr x9, [x9, #0x80]
0x04DEDEC0: 21810191  add x1, x9, #0x60
0x04DEDEC4: dd4a8e97  bl #0x3180a38
0x04DEDEC8: 080c40f9  ldr x8, [x0, #0x18]
0x04DEDECC: 080200b4  cbz x8, #0x4dedf0c
0x04DEDED0: 880240f9  ldr x8, [x20]
0x04DEDED4: e00313aa  mov x0, x19
0x04DEDED8: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDEDC: 080140f9  ldr x8, [x8]
0x04DEDEE0: 084140f9  ldr x8, [x8, #0x80]
0x04DEDEE4: 01810191  add x1, x8, #0x60
0x04DEDEE8: d44a8e97  bl #0x3180a38
0x04DEDEEC: 080c40f9  ldr x8, [x0, #0x18]
0x04DEDEF0: 082900b4  cbz x8, #0x4dee410
0x04DEDEF4: 090d40f9  ldr x9, [x8, #0x18]
0x04DEDEF8: 002140f9  ldr x0, [x8, #0x40]
0x04DEDEFC: 021540f9  ldr x2, [x8, #0x28]
0x04DEDF00: e10315aa  mov x1, x21
0x04DEDF04: 20013fd6  blr x9
0x04DEDF08: c01c0037  tbnz w0, #0, #0x4dee2a0
0x04DEDF0C: 880240f9  ldr x8, [x20]
0x04DEDF10: e00313aa  mov x0, x19
0x04DEDF14: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDF18: 080140f9  ldr x8, [x8]
0x04DEDF1C: 084140f9  ldr x8, [x8, #0x80]
0x04DEDF20: 01810191  add x1, x8, #0x60
0x04DEDF24: c54a8e97  bl #0x3180a38
0x04DEDF28: 170840f9  ldr x23, [x0, #0x10]
0x04DEDF2C: 372700b4  cbz x23, #0x4dee410
0x04DEDF30: 880240f9  ldr x8, [x20]
0x04DEDF34: e00313aa  mov x0, x19
0x04DEDF38: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDF3C: 090140f9  ldr x9, [x8]
0x04DEDF40: 081140f9  ldr x8, [x8, #0x20]
0x04DEDF44: 294140f9  ldr x9, [x9, #0x80]
0x04DEDF48: 180140f9  ldr x24, [x8]
0x04DEDF4C: 21810391  add x1, x9, #0xe0
0x04DEDF50: ba4a8e97  bl #0x3180a38
0x04DEDF54: 880240f9  ldr x8, [x20]
0x04DEDF58: e20300aa  mov x2, x0
0x04DEDF5C: e00317aa  mov x0, x23
0x04DEDF60: e10315aa  mov x1, x21
0x04DEDF64: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDF68: 031140f9  ldr x3, [x8, #0x20]
0x04DEDF6C: 00033fd6  blr x24
0x04DEDF70: 80190036  tbz w0, #0, #0x4dee2a0
0x04DEDF74: 880240f9  ldr x8, [x20]
0x04DEDF78: e00313aa  mov x0, x19
0x04DEDF7C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDF80: 080140f9  ldr x8, [x8]
0x04DEDF84: 084140f9  ldr x8, [x8, #0x80]
0x04DEDF88: 01810391  add x1, x8, #0xe0
0x04DEDF8C: ab4a8e97  bl #0x3180a38
0x04DEDF90: e10300aa  mov x1, x0
0x04DEDF94: e0031baa  mov x0, x27
0x04DEDF98: e2031aaa  mov x2, x26
0x04DEDF9C: 75828f94  bl #0x71ce970
0x04DEDFA0: 880240f9  ldr x8, [x20]
0x04DEDFA4: e00313aa  mov x0, x19
0x04DEDFA8: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDFAC: 090140f9  ldr x9, [x8]
0x04DEDFB0: 151940f9  ldr x21, [x8, #0x30]
0x04DEDFB4: 284140f9  ldr x8, [x9, #0x80]
0x04DEDFB8: b70240f9  ldr x23, [x21]
0x04DEDFBC: 01810191  add x1, x8, #0x60
0x04DEDFC0: 9e4a8e97  bl #0x3180a38
0x04DEDFC4: 880240f9  ldr x8, [x20]
0x04DEDFC8: e20300aa  mov x2, x0
0x04DEDFCC: 086140f9  ldr x8, [x8, #0xc0]
0x04DEDFD0: 080d40f9  ldr x8, [x8, #0x18]
0x04DEDFD4: 092940b9  ldr w9, [x8, #0x28]
0x04DEDFD8: e8031baa  mov x8, x27
0x04DEDFDC: 4900f837  tbnz w9, #0x1f, #0x4dedfe4
0x04DEDFE0: 680340f9  ldr x8, [x27]
0x04DEDFE4: a8831ef8  stur x8, [x29, #-0x18]
0x04DEDFE8: a80a40f9  ldr x8, [x21, #0x10]
0x04DEDFEC: a36300d1  sub x3, x29, #0x18
0x04DEDFF0: a43300d1  sub x4, x29, #0xc
0x04DEDFF4: e00317aa  mov x0, x23
0x04DEDFF8: e10315aa  mov x1, x21
0x04DEDFFC: 00013fd6  blr x8
0x04DEE000: a8435f38  ldurb w8, [x29, #-0xc]
0x04DEE004: e8140034  cbz w8, #0x4dee2a0
0x04DEE008: c8008052  movz w8, #0x6
0x04DEE00C: 890240f9  ldr x9, [x20]
0x04DEE010: e00313aa  mov x0, x19
0x04DEE014: 296140f9  ldr x9, [x9, #0xc0]
0x04DEE018: 290140f9  ldr x9, [x9]
0x04DEE01C: 294140f9  ldr x9, [x9, #0x80]
0x04DEE020: 2115088b  add x1, x9, x8, lsl #5
0x04DEE024: 854a8e97  bl #0x3180a38
0x04DEE028: 880240f9  ldr x8, [x20]
0x04DEE02C: 090040b9  ldr w9, [x0]
0x04DEE030: e00313aa  mov x0, x19
0x04DEE034: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE038: 22050011  add w2, w9, #1
0x04DEE03C: 080140f9  ldr x8, [x8]
0x04DEE040: 084140f9  ldr x8, [x8, #0x80]
0x04DEE044: 01010491  add x1, x8, #0x100
0x04DEE048: aaa58097  bl #0x2e176f0
0x04DEE04C: 880240f9  ldr x8, [x20]
0x04DEE050: e00313aa  mov x0, x19
0x04DEE054: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE058: 080140f9  ldr x8, [x8]
0x04DEE05C: 084140f9  ldr x8, [x8, #0x80]
0x04DEE060: 01010491  add x1, x8, #0x100
0x04DEE064: 754a8e97  bl #0x3180a38
0x04DEE068: 880240f9  ldr x8, [x20]
0x04DEE06C: 150040b9  ldr w21, [x0]
0x04DEE070: e00313aa  mov x0, x19
0x04DEE074: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE078: 080140f9  ldr x8, [x8]
0x04DEE07C: 084140f9  ldr x8, [x8, #0x80]
0x04DEE080: 01810291  add x1, x8, #0xa0
0x04DEE084: 6d4a8e97  bl #0x3180a38
0x04DEE088: 080040f9  ldr x8, [x0]
0x04DEE08C: 281c00b4  cbz x8, #0x4dee410
0x04DEE090: 890240f9  ldr x9, [x20]
0x04DEE094: 0a1940b9  ldr w10, [x8, #0x18]
0x04DEE098: 296140f9  ldr x9, [x9, #0xc0]
0x04DEE09C: bf020a6b  cmp w21, w10
0x04DEE0A0: 290140f9  ldr x9, [x9]
0x04DEE0A4: 284140f9  ldr x8, [x9, #0x80]
0x04DEE0A8: 0a0f0054  b.ge #0x4dee288
0x04DEE0AC: 01810291  add x1, x8, #0xa0
0x04DEE0B0: e00313aa  mov x0, x19
0x04DEE0B4: 614a8e97  bl #0x3180a38
0x04DEE0B8: 880240f9  ldr x8, [x20]
0x04DEE0BC: 150040f9  ldr x21, [x0]
0x04DEE0C0: e00313aa  mov x0, x19
0x04DEE0C4: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE0C8: 080140f9  ldr x8, [x8]
0x04DEE0CC: 084140f9  ldr x8, [x8, #0x80]
0x04DEE0D0: 01010491  add x1, x8, #0x100
0x04DEE0D4: 594a8e97  bl #0x3180a38
0x04DEE0D8: d51900b4  cbz x21, #0x4dee410
0x04DEE0DC: 080080b9  ldrsw x8, [x0]
0x04DEE0E0: a91a40b9  ldr w9, [x21, #0x18]
0x04DEE0E4: 1f01096b  cmp w8, w9
0x04DEE0E8: 62190054  b.hs #0x4dee414
0x04DEE0EC: 890240f9  ldr x9, [x20]
0x04DEE0F0: a80e088b  add x8, x21, x8, lsl #3
0x04DEE0F4: 151140f9  ldr x21, [x8, #0x20]
0x04DEE0F8: e00313aa  mov x0, x19
0x04DEE0FC: 296140f9  ldr x9, [x9, #0xc0]
0x04DEE100: 290140f9  ldr x9, [x9]
0x04DEE104: 294140f9  ldr x9, [x9, #0x80]
0x04DEE108: 21810191  add x1, x9, #0x60
0x04DEE10C: 4b4a8e97  bl #0x3180a38
0x04DEE110: 080c40f9  ldr x8, [x0, #0x18]
0x04DEE114: 280200b4  cbz x8, #0x4dee158
0x04DEE118: 880240f9  ldr x8, [x20]
0x04DEE11C: e00313aa  mov x0, x19
0x04DEE120: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE124: 080140f9  ldr x8, [x8]
0x04DEE128: 084140f9  ldr x8, [x8, #0x80]
0x04DEE12C: 01810191  add x1, x8, #0x60
0x04DEE130: 424a8e97  bl #0x3180a38
0x04DEE134: 080c40f9  ldr x8, [x0, #0x18]
0x04DEE138: c81600b4  cbz x8, #0x4dee410
0x04DEE13C: 090d40f9  ldr x9, [x8, #0x18]
0x04DEE140: 002140f9  ldr x0, [x8, #0x40]
0x04DEE144: 021540f9  ldr x2, [x8, #0x28]
0x04DEE148: e10315aa  mov x1, x21
0x04DEE14C: 20013fd6  blr x9
0x04DEE150: 08018052  movz w8, #0x8
0x04DEE154: c0f50737  tbnz w0, #0, #0x4dee00c
0x04DEE158: 880240f9  ldr x8, [x20]
0x04DEE15C: e00313aa  mov x0, x19
0x04DEE160: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE164: 080140f9  ldr x8, [x8]
0x04DEE168: 084140f9  ldr x8, [x8, #0x80]
0x04DEE16C: 01810191  add x1, x8, #0x60
0x04DEE170: 324a8e97  bl #0x3180a38
0x04DEE174: 000840f9  ldr x0, [x0, #0x10]
0x04DEE178: c01400b4  cbz x0, #0x4dee410
0x04DEE17C: 880240f9  ldr x8, [x20]
0x04DEE180: e10315aa  mov x1, x21
0x04DEE184: e2031caa  mov x2, x28
0x04DEE188: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE18C: 031140f9  ldr x3, [x8, #0x20]
0x04DEE190: 680040f9  ldr x8, [x3]
0x04DEE194: 00013fd6  blr x8
0x04DEE198: 08018052  movz w8, #0x8
0x04DEE19C: 80f30736  tbz w0, #0, #0x4dee00c
0x04DEE1A0: e0031baa  mov x0, x27
0x04DEE1A4: e1031caa  mov x1, x28
0x04DEE1A8: e2031aaa  mov x2, x26
0x04DEE1AC: f1818f94  bl #0x71ce970
0x04DEE1B0: 880240f9  ldr x8, [x20]
0x04DEE1B4: e00313aa  mov x0, x19
0x04DEE1B8: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE1BC: 090140f9  ldr x9, [x8]
0x04DEE1C0: 151940f9  ldr x21, [x8, #0x30]
0x04DEE1C4: 284140f9  ldr x8, [x9, #0x80]
0x04DEE1C8: b70240f9  ldr x23, [x21]
0x04DEE1CC: 01810191  add x1, x8, #0x60
0x04DEE1D0: 1a4a8e97  bl #0x3180a38
0x04DEE1D4: 880240f9  ldr x8, [x20]
0x04DEE1D8: e20300aa  mov x2, x0
0x04DEE1DC: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE1E0: 080d40f9  ldr x8, [x8, #0x18]
0x04DEE1E4: 092940b9  ldr w9, [x8, #0x28]
0x04DEE1E8: e8031baa  mov x8, x27
0x04DEE1EC: 4900f837  tbnz w9, #0x1f, #0x4dee1f4
0x04DEE1F0: 680340f9  ldr x8, [x27]
0x04DEE1F4: a8831ef8  stur x8, [x29, #-0x18]
0x04DEE1F8: a80a40f9  ldr x8, [x21, #0x10]
0x04DEE1FC: a36300d1  sub x3, x29, #0x18
0x04DEE200: a43300d1  sub x4, x29, #0xc
0x04DEE204: e00317aa  mov x0, x23
0x04DEE208: e10315aa  mov x1, x21
0x04DEE20C: 00013fd6  blr x8
0x04DEE210: a9435f38  ldurb w9, [x29, #-0xc]
0x04DEE214: 08018052  movz w8, #0x8
0x04DEE218: a9efff34  cbz w9, #0x4dee00c
0x04DEE21C: 880240f9  ldr x8, [x20]
0x04DEE220: e00313aa  mov x0, x19
0x04DEE224: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE228: 080140f9  ldr x8, [x8]
0x04DEE22C: 084140f9  ldr x8, [x8, #0x80]
0x04DEE230: 01810391  add x1, x8, #0xe0
0x04DEE234: 014a8e97  bl #0x3180a38
0x04DEE238: e10300aa  mov x1, x0
0x04DEE23C: e0031baa  mov x0, x27
0x04DEE240: e2031aaa  mov x2, x26
0x04DEE244: cb818f94  bl #0x71ce970
0x04DEE248: a0035ef8  ldur x0, [x29, #-0x20]
0x04DEE24C: e1031caa  mov x1, x28
0x04DEE250: e2031aaa  mov x2, x26
0x04DEE254: c7818f94  bl #0x71ce970
0x04DEE258: b7035df8  ldur x23, [x29, #-0x30]
0x04DEE25C: e00316aa  mov x0, x22
0x04DEE260: e1031f2a  mov w1, wzr
0x04DEE264: e20317aa  mov x2, x23
0x04DEE268: ce818f94  bl #0x71ce9a0
0x04DEE26C: 950240f9  ldr x21, [x20]
0x04DEE270: a86240f9  ldr x8, [x21, #0xc0]
0x04DEE274: 090d40f9  ldr x9, [x8, #0x18]
0x04DEE278: 292940b9  ldr w9, [x9, #0x28]
0x04DEE27C: 0906f837  tbnz w9, #0x1f, #0x4dee33c
0x04DEE280: 780340f9  ldr x24, [x27]
0x04DEE284: 37000014  b #0x4dee360
0x04DEE288: 01810391  add x1, x8, #0xe0
0x04DEE28C: e00313aa  mov x0, x19
0x04DEE290: ea498e97  bl #0x3180a38
0x04DEE294: e1031f2a  mov w1, wzr
0x04DEE298: e2031aaa  mov x2, x26
0x04DEE29C: c1818f94  bl #0x71ce9a0
0x04DEE2A0: 880240f9  ldr x8, [x20]
0x04DEE2A4: e00313aa  mov x0, x19
0x04DEE2A8: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE2AC: 080140f9  ldr x8, [x8]
0x04DEE2B0: 084140f9  ldr x8, [x8, #0x80]
0x04DEE2B4: 01010391  add x1, x8, #0xc0
0x04DEE2B8: e0498e97  bl #0x3180a38
0x04DEE2BC: 880240f9  ldr x8, [x20]
0x04DEE2C0: 090040b9  ldr w9, [x0]
0x04DEE2C4: e00313aa  mov x0, x19
0x04DEE2C8: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE2CC: 22050011  add w2, w9, #1
0x04DEE2D0: 080140f9  ldr x8, [x8]
0x04DEE2D4: 084140f9  ldr x8, [x8, #0x80]
0x04DEE2D8: 01010391  add x1, x8, #0xc0
0x04DEE2DC: 05a58097  bl #0x2e176f0
0x04DEE2E0: 880240f9  ldr x8, [x20]
0x04DEE2E4: e00313aa  mov x0, x19
0x04DEE2E8: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE2EC: 080140f9  ldr x8, [x8]
0x04DEE2F0: 084140f9  ldr x8, [x8, #0x80]
0x04DEE2F4: 01010391  add x1, x8, #0xc0
0x04DEE2F8: d0498e97  bl #0x3180a38
0x04DEE2FC: 880240f9  ldr x8, [x20]
0x04DEE300: 150040b9  ldr w21, [x0]
0x04DEE304: e00313aa  mov x0, x19
0x04DEE308: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE30C: 080140f9  ldr x8, [x8]
0x04DEE310: 084140f9  ldr x8, [x8, #0x80]
0x04DEE314: 01810291  add x1, x8, #0xa0
0x04DEE318: c8498e97  bl #0x3180a38
0x04DEE31C: 080040f9  ldr x8, [x0]
0x04DEE320: 880700b4  cbz x8, #0x4dee410
0x04DEE324: 081940b9  ldr w8, [x8, #0x18]
0x04DEE328: 08050051  sub w8, w8, #1
0x04DEE32C: bf02086b  cmp w21, w8
0x04DEE330: 2bd9ff54  b.lt #0x4dede54
0x04DEE334: f5031f2a  mov w21, wzr
0x04DEE338: 22000014  b #0x4dee3c0
0x04DEE33C: b8835cf8  ldur x24, [x29, #-0x38]
0x04DEE340: e1031baa  mov x1, x27
0x04DEE344: e2031aaa  mov x2, x26
0x04DEE348: e00318aa  mov x0, x24
0x04DEE34C: 89818f94  bl #0x71ce970
0x04DEE350: a86240f9  ldr x8, [x21, #0xc0]
0x04DEE354: 090d40f9  ldr x9, [x8, #0x18]
0x04DEE358: 292940b9  ldr w9, [x9, #0x28]
0x04DEE35C: e904f837  tbnz w9, #0x1f, #0x4dee3f8
0x04DEE360: a9035ef8  ldur x9, [x29, #-0x20]
0x04DEE364: 390140f9  ldr x25, [x9]
0x04DEE368: 032540f9  ldr x3, [x8, #0x48]
0x04DEE36C: e00316aa  mov x0, x22
0x04DEE370: e10318aa  mov x1, x24
0x04DEE374: e20319aa  mov x2, x25
0x04DEE378: 5c9ce797  bl #0x47d54e8
0x04DEE37C: 880240f9  ldr x8, [x20]
0x04DEE380: e00313aa  mov x0, x19
0x04DEE384: e20316aa  mov x2, x22
0x04DEE388: e303172a  mov w3, w23
0x04DEE38C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE390: 080140f9  ldr x8, [x8]
0x04DEE394: 084140f9  ldr x8, [x8, #0x80]
0x04DEE398: 01810091  add x1, x8, #0x20
0x04DEE39C: a8498e97  bl #0x3180a3c
0x04DEE3A0: 880240f9  ldr x8, [x20]
0x04DEE3A4: 22008052  movz w2, #0x1
0x04DEE3A8: e00313aa  mov x0, x19
0x04DEE3AC: 35008052  movz w21, #0x1
0x04DEE3B0: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE3B4: 080140f9  ldr x8, [x8]
0x04DEE3B8: 014140f9  ldr x1, [x8, #0x80]
0x04DEE3BC: cda48097  bl #0x2e176f0
0x04DEE3C0: a8835df8  ldur x8, [x29, #-0x28]
0x04DEE3C4: 081540f9  ldr x8, [x8, #0x28]
0x04DEE3C8: a9835ff8  ldur x9, [x29, #-8]
0x04DEE3CC: 1f0109eb  cmp x8, x9
0x04DEE3D0: 41020054  b.ne #0x4dee418
0x04DEE3D4: e003152a  mov w0, w21
0x04DEE3D8: bf030091  mov sp, x29
0x04DEE3DC: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04DEE3E0: f65744a9  ldp x22, x21, [sp, #0x40]
0x04DEE3E4: f85f43a9  ldp x24, x23, [sp, #0x30]
0x04DEE3E8: fa6742a9  ldp x26, x25, [sp, #0x20]
0x04DEE3EC: fc6f41a9  ldp x28, x27, [sp, #0x10]
0x04DEE3F0: fd7bc6a8  ldp x29, x30, [sp], #0x60
0x04DEE3F4: c0035fd6  ret
0x04DEE3F8: a1035ef8  ldur x1, [x29, #-0x20]
0x04DEE3FC: e00319aa  mov x0, x25
0x04DEE400: e2031aaa  mov x2, x26
0x04DEE404: 5b818f94  bl #0x71ce970
0x04DEE408: a86240f9  ldr x8, [x21, #0xc0]
0x04DEE40C: d7ffff17  b #0x4dee368
0x04DEE410: 274a8e97  bl #0x3180cac
0x04DEE414: 284a8e97  bl #0x3180cb4
0x04DEE418: 5e818f94  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEE41C | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerator<(T1,T1)>.get_Current
; native signature: System_ValueTuple_T1__T1__o ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerator__T1_T1___get_Current (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEE41C* method);
; bytes=160 sha256=510b7767d1dc5c550d5ffb9e10154fae695ea7e2830da1441d6e9ac0f9ce2c8a status=arm64_complete_bound indexed_start=True
0x04DEE41C: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04DEE420: f65701a9  stp x22, x21, [sp, #0x10]
0x04DEE424: f44f02a9  stp x20, x19, [sp, #0x20]
0x04DEE428: fd030091  mov x29, sp
0x04DEE42C: ff4300d1  sub sp, sp, #0x10
0x04DEE430: 56d03bd5  mrs x22, tpidr_el0
0x04DEE434: c81640f9  ldr x8, [x22, #0x28]
0x04DEE438: f30301aa  mov x19, x1
0x04DEE43C: a8831ff8  stur x8, [x29, #-8]
0x04DEE440: 481040f9  ldr x8, [x2, #0x20]
0x04DEE444: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE448: 092140f9  ldr x9, [x8, #0x40]
0x04DEE44C: 34fd40b9  ldr w20, [x9, #0xfc]
0x04DEE450: e9030091  mov x9, sp
0x04DEE454: 8a3e0091  add x10, x20, #0xf
0x04DEE458: 4a717c92  and x10, x10, #0x1fffffff0
0x04DEE45C: 35010acb  sub x21, x9, x10
0x04DEE460: bf020091  mov sp, x21
0x04DEE464: 080140f9  ldr x8, [x8]
0x04DEE468: 084140f9  ldr x8, [x8, #0x80]
0x04DEE46C: 01810091  add x1, x8, #0x20
0x04DEE470: 72498e97  bl #0x3180a38
0x04DEE474: e10300aa  mov x1, x0
0x04DEE478: e00315aa  mov x0, x21
0x04DEE47C: e20314aa  mov x2, x20
0x04DEE480: 3c818f94  bl #0x71ce970
0x04DEE484: e00313aa  mov x0, x19
0x04DEE488: e10315aa  mov x1, x21
0x04DEE48C: e20314aa  mov x2, x20
0x04DEE490: 38818f94  bl #0x71ce970
0x04DEE494: c81640f9  ldr x8, [x22, #0x28]
0x04DEE498: a9835ff8  ldur x9, [x29, #-8]
0x04DEE49C: 1f0109eb  cmp x8, x9
0x04DEE4A0: c1000054  b.ne #0x4dee4b8
0x04DEE4A4: bf030091  mov sp, x29
0x04DEE4A8: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04DEE4AC: f65741a9  ldp x22, x21, [sp, #0x10]
0x04DEE4B0: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04DEE4B4: c0035fd6  ret
0x04DEE4B8: 36818f94  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEE4BC | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.Reset
; native signature: void ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___System_Collections_IEnumerator_Reset (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEE4BC* method);
; bytes=52 sha256=893d7229b2bfe1bcae40c021c27d1ab07a9be3b44d62154fc75e290a0f86b182 status=arm64_complete_bound indexed_start=True
0x04DEE4BC: fe0f1ef8  str x30, [sp, #-0x20]!
0x04DEE4C0: f44f01a9  stp x20, x19, [sp, #0x10]
0x04DEE4C4: 004301b0  adrp x0, #0x764f000
0x04DEE4C8: 00d043f9  ldr x0, [x0, #0x7a0]
0x04DEE4CC: f30301aa  mov x19, x1
0x04DEE4D0: 57498e97  bl #0x3180a2c
0x04DEE4D4: f3498e97  bl #0x3180ca0
0x04DEE4D8: e1031faa  mov x1, xzr
0x04DEE4DC: f40300aa  mov x20, x0
0x04DEE4E0: 90a92294  bl #0x5698b20
0x04DEE4E4: e00314aa  mov x0, x20
0x04DEE4E8: e10313aa  mov x1, x19
0x04DEE4EC: a4498e97  bl #0x3180b7c

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEE4F0 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerator.get_Current
; native signature: Il2CppObject* ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___System_Collections_IEnumerator_get_Current (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEE4F0* method);
; bytes=164 sha256=d4e7363df0f8ca90149a1a6515de5f7028e0899f2fc95cee0ff9a84f8ff970ef status=arm64_complete_bound indexed_start=True
0x04DEE4F0: fd7bbda9  stp x29, x30, [sp, #-0x30]!
0x04DEE4F4: f65701a9  stp x22, x21, [sp, #0x10]
0x04DEE4F8: f44f02a9  stp x20, x19, [sp, #0x20]
0x04DEE4FC: fd030091  mov x29, sp
0x04DEE500: ff4300d1  sub sp, sp, #0x10
0x04DEE504: 56d03bd5  mrs x22, tpidr_el0
0x04DEE508: c81640f9  ldr x8, [x22, #0x28]
0x04DEE50C: f30301aa  mov x19, x1
0x04DEE510: a8831ff8  stur x8, [x29, #-8]
0x04DEE514: 281040f9  ldr x8, [x1, #0x20]
0x04DEE518: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE51C: 092140f9  ldr x9, [x8, #0x40]
0x04DEE520: 34fd40b9  ldr w20, [x9, #0xfc]
0x04DEE524: e9030091  mov x9, sp
0x04DEE528: 8a3e0091  add x10, x20, #0xf
0x04DEE52C: 4a717c92  and x10, x10, #0x1fffffff0
0x04DEE530: 35010acb  sub x21, x9, x10
0x04DEE534: bf020091  mov sp, x21
0x04DEE538: 080140f9  ldr x8, [x8]
0x04DEE53C: 084140f9  ldr x8, [x8, #0x80]
0x04DEE540: 01810091  add x1, x8, #0x20
0x04DEE544: 3d498e97  bl #0x3180a38
0x04DEE548: e10300aa  mov x1, x0
0x04DEE54C: e00315aa  mov x0, x21
0x04DEE550: e20314aa  mov x2, x20
0x04DEE554: 07818f94  bl #0x71ce970
0x04DEE558: 681240f9  ldr x8, [x19, #0x20]
0x04DEE55C: e10315aa  mov x1, x21
0x04DEE560: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE564: 002140f9  ldr x0, [x8, #0x40]
0x04DEE568: 8b498e97  bl #0x3180b94
0x04DEE56C: c81640f9  ldr x8, [x22, #0x28]
0x04DEE570: a9835ff8  ldur x9, [x29, #-8]
0x04DEE574: 1f0109eb  cmp x8, x9
0x04DEE578: c1000054  b.ne #0x4dee590
0x04DEE57C: bf030091  mov sp, x29
0x04DEE580: f44f42a9  ldp x20, x19, [sp, #0x20]
0x04DEE584: f65741a9  ldp x22, x21, [sp, #0x10]
0x04DEE588: fd7bc3a8  ldp x29, x30, [sp], #0x30
0x04DEE58C: c0035fd6  ret
0x04DEE590: 00818f94  bl #0x71ce990

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEE594 | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$System.Collections.Generic.IEnumerable<(T1,T1)>.GetEnumerator
; native signature: System_Collections_Generic_IEnumerator_ValueTuple_T1__T1___o* ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___System_Collections_Generic_IEnumerable__T1_T1___GetEnumerator (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEE594* method);
; bytes=296 sha256=b4b3e36bb47c8082a91bc1a695644fe0f893ba2564bb7e13e07143177448a7a0 status=arm64_complete_bound indexed_start=True
0x04DEE594: ff8301d1  sub sp, sp, #0x60
0x04DEE598: fe5704a9  stp x30, x21, [sp, #0x40]
0x04DEE59C: f44f05a9  stp x20, x19, [sp, #0x50]
0x04DEE5A0: 281040f9  ldr x8, [x1, #0x20]
0x04DEE5A4: f30301aa  mov x19, x1
0x04DEE5A8: f40300aa  mov x20, x0
0x04DEE5AC: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE5B0: 080140f9  ldr x8, [x8]
0x04DEE5B4: 014140f9  ldr x1, [x8, #0x80]
0x04DEE5B8: 20498e97  bl #0x3180a38
0x04DEE5BC: 080040b9  ldr w8, [x0]
0x04DEE5C0: 1f090031  cmn w8, #2
0x04DEE5C4: c1020054  b.ne #0x4dee61c
0x04DEE5C8: 681240f9  ldr x8, [x19, #0x20]
0x04DEE5CC: e00314aa  mov x0, x20
0x04DEE5D0: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE5D4: 080140f9  ldr x8, [x8]
0x04DEE5D8: 084140f9  ldr x8, [x8, #0x80]
0x04DEE5DC: 01010191  add x1, x8, #0x40
0x04DEE5E0: 16498e97  bl #0x3180a38
0x04DEE5E4: 150040b9  ldr w21, [x0]
0x04DEE5E8: e0031faa  mov x0, xzr
0x04DEE5EC: b7bf2394  bl #0x56de4c8
0x04DEE5F0: bf02006b  cmp w21, w0
0x04DEE5F4: 41010054  b.ne #0x4dee61c
0x04DEE5F8: 681240f9  ldr x8, [x19, #0x20]
0x04DEE5FC: e00314aa  mov x0, x20
0x04DEE600: e2031f2a  mov w2, wzr
0x04DEE604: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE608: 080140f9  ldr x8, [x8]
0x04DEE60C: 014140f9  ldr x1, [x8, #0x80]
0x04DEE610: 38a48097  bl #0x2e176f0
0x04DEE614: f50314aa  mov x21, x20
0x04DEE618: 0f000014  b #0x4dee654
0x04DEE61C: 681240f9  ldr x8, [x19, #0x20]
0x04DEE620: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE624: 000140f9  ldr x0, [x8]
0x04DEE628: 08d44439  ldrb w8, [x0, #0x135]
0x04DEE62C: 48000037  tbnz w8, #0, #0x4dee634
0x04DEE630: 7ba08d97  bl #0x315681c
0x04DEE634: 9b498e97  bl #0x3180ca0
0x04DEE638: 681240f9  ldr x8, [x19, #0x20]
0x04DEE63C: e1031f2a  mov w1, wzr
0x04DEE640: f50300aa  mov x21, x0
0x04DEE644: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE648: 022940f9  ldr x2, [x8, #0x50]
0x04DEE64C: 480040f9  ldr x8, [x2]
0x04DEE650: 00013fd6  blr x8
0x04DEE654: 681240f9  ldr x8, [x19, #0x20]
0x04DEE658: e00314aa  mov x0, x20
0x04DEE65C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE660: 080140f9  ldr x8, [x8]
0x04DEE664: 084140f9  ldr x8, [x8, #0x80]
0x04DEE668: 01010291  add x1, x8, #0x80
0x04DEE66C: f3488e97  bl #0x3180a38
0x04DEE670: 000440ad  ldp q0, q1, [x0]
0x04DEE674: e00701ad  stp q0, q1, [sp, #0x20]
0x04DEE678: 150200b4  cbz x21, #0x4dee6b8
0x04DEE67C: 681240f9  ldr x8, [x19, #0x20]
0x04DEE680: e00741ad  ldp q0, q1, [sp, #0x20]
0x04DEE684: e2030091  mov x2, sp
0x04DEE688: e00315aa  mov x0, x21
0x04DEE68C: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE690: 080140f9  ldr x8, [x8]
0x04DEE694: 084140f9  ldr x8, [x8, #0x80]
0x04DEE698: e00700ad  stp q0, q1, [sp]
0x04DEE69C: 01810191  add x1, x8, #0x60
0x04DEE6A0: 23488197  bl #0x2e4072c
0x04DEE6A4: e00315aa  mov x0, x21
0x04DEE6A8: f44f45a9  ldp x20, x19, [sp, #0x50]
0x04DEE6AC: fe5744a9  ldp x30, x21, [sp, #0x40]
0x04DEE6B0: ff830191  add sp, sp, #0x60
0x04DEE6B4: c0035fd6  ret
0x04DEE6B8: 7d498e97  bl #0x3180cac

; Generic instantiation from Il2CppDumper script.json | RVA 0x4DEE6BC | ContextualizedECS.Query.QueryExtensions.QueryBuilder.<AllPairs>d__8<__Il2CppFullySharedGenericType>$$System.Collections.IEnumerable.GetEnumerator
; native signature: System_Collections_IEnumerator_o* ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8___Il2CppFullySharedGenericType___System_Collections_IEnumerable_GetEnumerator (ContextualizedECS_Query_QueryExtensions_QueryBuilder__AllPairs_d__8_T1__o* __this, const MethodInfo_4DEE6BC* method);
; bytes=20 sha256=036f789b7f48dbb1c35f8f41eef230459e9f79c21fdf9db6f40068fec8ccb210 status=arm64_complete_bound indexed_start=True
0x04DEE6BC: 281040f9  ldr x8, [x1, #0x20]
0x04DEE6C0: 086140f9  ldr x8, [x8, #0xc0]
0x04DEE6C4: 013140f9  ldr x1, [x8, #0x60]
0x04DEE6C8: 220040f9  ldr x2, [x1]
0x04DEE6CC: 40001fd6  br x2

