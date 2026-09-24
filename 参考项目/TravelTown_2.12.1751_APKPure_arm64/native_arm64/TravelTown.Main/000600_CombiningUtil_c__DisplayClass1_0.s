; Capstone 4 disassembly of Travel Town 2.12.1751 libil2cpp.so
; TypeDefIndex 600 .CombiningUtil.<>c__DisplayClass1_0
; Boundaries: next address in Il2CppDumper script.json; these bounds are inferred.

; RVA 0x626FF30 | public void .ctor() { }
; bytes=8 sha256=519189ba006f7a560d89a326067d4445eb3a52caa0e85708b39e2d149bfaefd6 status=arm64_complete_bound indexed_start=True
0x0626FF30: e1031faa  mov x1, xzr
0x0626FF34: b2a9d117  b #0x56da5fc

; RVA 0x6270984 | internal bool <RemoveConsumedItems>b__0(MergeItemWeakReference i) { }
; bytes=60 sha256=bf93fbe0bacc6868cb2ae44d9cfdee3d5dcd7872fcc846b2792bec0a9ff53743 status=arm64_complete_bound indexed_start=True
0x06270984: fe4fbfa9  stp x30, x19, [sp, #-0x10]!
0x06270988: a10100b4  cbz x1, #0x62709bc
0x0627098C: 280040f9  ldr x8, [x1]
0x06270990: f30300aa  mov x19, x0
0x06270994: e00301aa  mov x0, x1
0x06270998: 09a15ca9  ldp x9, x8, [x8, #0x1c8]
0x0627099C: e10308aa  mov x1, x8
0x062709A0: 20013fd6  blr x9
0x062709A4: 680a40f9  ldr x8, [x19, #0x10]
0x062709A8: a80000b4  cbz x8, #0x62709bc
0x062709AC: 010940f9  ldr x1, [x8, #0x10]
0x062709B0: e2031faa  mov x2, xzr
0x062709B4: fe4fc1a8  ldp x30, x19, [sp], #0x10
0x062709B8: aee7c917  b #0x54ea870
0x062709BC: bc403c97  bl #0x3180cac

