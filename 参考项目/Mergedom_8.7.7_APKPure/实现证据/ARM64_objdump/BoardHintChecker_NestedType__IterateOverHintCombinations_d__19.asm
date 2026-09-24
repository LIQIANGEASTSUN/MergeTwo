
# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Void .ctor(System.Int32 <>1__state)
# VA 0x2b9e614 .. 0x2b9e63c (next mapped method entry)
 2b9e614: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9e618: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9e61c: 2a0103f3     	mov	w19, w1
 2b9e620: aa1f03e1     	mov	x1, xzr
 2b9e624: aa0003f4     	mov	x20, x0
 2b9e628: 9496c548     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b9e62c: b9001293     	str	w19, [x20, #0x10]
 2b9e630: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9e634: f84207fe     	ldr	x30, [sp], #0x20
 2b9e638: d65f03c0     	ret

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Void System.IDisposable.Dispose()
# VA 0x2b9e994 .. 0x2b9ea60 (next mapped method entry)
 2b9e994: d100c3ff     	sub	sp, sp, #0x30
 2b9e998: a9024ffe     	stp	x30, x19, [sp, #0x20]
 2b9e99c: b9401008     	ldr	w8, [x0, #0x10]
 2b9e9a0: f9000fe0     	str	x0, [sp, #0x18]
 2b9e9a4: 11001509     	add	w9, w8, #0x5
 2b9e9a8: 7100213f     	cmp	w9, #0x8
 2b9e9ac: 54000288     	b.hi	0x2b9e9fc <__start_il2cpp+0xd63e8>
 2b9e9b0: 5280002a     	mov	w10, #0x1               // =1
 2b9e9b4: 1ac92149     	lsl	w9, w10, w9
 2b9e9b8: 528010ca     	mov	w10, #0x86              // =134
 2b9e9bc: 6a0a013f     	tst	w9, w10
 2b9e9c0: 54000160     	b.eq	0x2b9e9ec <__start_il2cpp+0xd63d8>
 2b9e9c4: 910063e9     	add	x9, sp, #0x18
 2b9e9c8: 7100091f     	cmp	w8, #0x2
 2b9e9cc: a900a7ff     	stp	xzr, x9, [sp, #0x8]
 2b9e9d0: 54000060     	b.eq	0x2b9e9dc <__start_il2cpp+0xd63c8>
 2b9e9d4: 3100111f     	cmn	w8, #0x4
 2b9e9d8: 54000041     	b.ne	0x2b9e9e0 <__start_il2cpp+0xd63cc>
 2b9e9dc: 94000222     	bl	0x2b9f264 <__start_il2cpp+0xd6c50>
 2b9e9e0: f9400fe0     	ldr	x0, [sp, #0x18]
 2b9e9e4: 94000234     	bl	0x2b9f2b4 <__start_il2cpp+0xd6ca0>
 2b9e9e8: 14000005     	b	0x2b9e9fc <__start_il2cpp+0xd63e8>
 2b9e9ec: 52802028     	mov	w8, #0x101              // =257
 2b9e9f0: 6a08013f     	tst	w9, w8
 2b9e9f4: 54000040     	b.eq	0x2b9e9fc <__start_il2cpp+0xd63e8>
 2b9e9f8: 94000243     	bl	0x2b9f304 <__start_il2cpp+0xd6cf0>
 2b9e9fc: a9424ffe     	ldp	x30, x19, [sp, #0x20]
 2b9ea00: 9100c3ff     	add	sp, sp, #0x30
 2b9ea04: d65f03c0     	ret
 2b9ea08: 7100043f     	cmp	w1, #0x1
 2b9ea0c: aa0003f3     	mov	x19, x0
 2b9ea10: 540001e1     	b.ne	0x2b9ea4c <__start_il2cpp+0xd6438>
 2b9ea14: aa1303e0     	mov	x0, x19
 2b9ea18: 94ce1f4a     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2b9ea1c: f9400013     	ldr	x19, [x0]
 2b9ea20: f90007f3     	str	x19, [sp, #0x8]
 2b9ea24: 94ce1f4b     	bl	0x5f26750 <__cxa_end_catch@plt>
 2b9ea28: f9400be8     	ldr	x8, [sp, #0x10]
 2b9ea2c: f9400100     	ldr	x0, [x8]
 2b9ea30: 94000221     	bl	0x2b9f2b4 <__start_il2cpp+0xd6ca0>
 2b9ea34: b5000073     	cbnz	x19, 0x2b9ea40 <__start_il2cpp+0xd642c>
 2b9ea38: f9400fe0     	ldr	x0, [sp, #0x18]
 2b9ea3c: 17ffffef     	b	0x2b9e9f8 <__start_il2cpp+0xd63e4>
 2b9ea40: aa1303e0     	mov	x0, x19
 2b9ea44: 97f8e18f     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2b9ea48: aa0003f3     	mov	x19, x0
 2b9ea4c: 910023e0     	add	x0, sp, #0x8
 2b9ea50: 97ec2689     	bl	0x26a8474 <.text+0x3314>
 2b9ea54: aa1303e0     	mov	x0, x19
 2b9ea58: 97fc9721     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2b9ea5c: 97ec1bfc     	bl	0x26a5a4c <.text+0x8ec>

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Boolean MoveNext()
# VA 0x2b9ea60 .. 0x2b9f264 (next mapped method entry)
 2b9ea60: d10303ff     	sub	sp, sp, #0xc0
 2b9ea64: fd002be8     	str	d8, [sp, #0x50]
 2b9ea68: a9067bfd     	stp	x29, x30, [sp, #0x60]
 2b9ea6c: a9076ffc     	stp	x28, x27, [sp, #0x70]
 2b9ea70: a90867fa     	stp	x26, x25, [sp, #0x80]
 2b9ea74: a9095ff8     	stp	x24, x23, [sp, #0x90]
 2b9ea78: a90a57f6     	stp	x22, x21, [sp, #0xa0]
 2b9ea7c: a90b4ff4     	stp	x20, x19, [sp, #0xb0]
 2b9ea80: 9001dbb3     	adrp	x19, 0x6712000
 2b9ea84: aa0003f4     	mov	x20, x0
 2b9ea88: f9002fe0     	str	x0, [sp, #0x58]
 2b9ea8c: 39630268     	ldrb	w8, [x19, #0x8c0]
 2b9ea90: 37000788     	tbnz	w8, #0x0, 0x2b9eb80 <__start_il2cpp+0xd656c>
 2b9ea94: f001bac0     	adrp	x0, 0x62f9000
 2b9ea98: f9479c00     	ldr	x0, [x0, #0xf38]
 2b9ea9c: 97f8e0d1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eaa0: f001bac0     	adrp	x0, 0x62f9000
 2b9eaa4: f947a000     	ldr	x0, [x0, #0xf40]
 2b9eaa8: 97f8e0ce     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eaac: f001bac0     	adrp	x0, 0x62f9000
 2b9eab0: f947a400     	ldr	x0, [x0, #0xf48]
 2b9eab4: 97f8e0cb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eab8: f001bac0     	adrp	x0, 0x62f9000
 2b9eabc: f947a800     	ldr	x0, [x0, #0xf50]
 2b9eac0: 97f8e0c8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eac4: f001bac0     	adrp	x0, 0x62f9000
 2b9eac8: f947ac00     	ldr	x0, [x0, #0xf58]
 2b9eacc: 97f8e0c5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9ead0: f001bac0     	adrp	x0, 0x62f9000
 2b9ead4: f947b000     	ldr	x0, [x0, #0xf60]
 2b9ead8: 97f8e0c2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eadc: f001bac0     	adrp	x0, 0x62f9000
 2b9eae0: f947b400     	ldr	x0, [x0, #0xf68]
 2b9eae4: 97f8e0bf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eae8: f001bac0     	adrp	x0, 0x62f9000
 2b9eaec: f947b800     	ldr	x0, [x0, #0xf70]
 2b9eaf0: 97f8e0bc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eaf4: f001bac0     	adrp	x0, 0x62f9000
 2b9eaf8: f947bc00     	ldr	x0, [x0, #0xf78]
 2b9eafc: 97f8e0b9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb00: f001bac0     	adrp	x0, 0x62f9000
 2b9eb04: f947c000     	ldr	x0, [x0, #0xf80]
 2b9eb08: 97f8e0b6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb0c: f001bac0     	adrp	x0, 0x62f9000
 2b9eb10: f947c400     	ldr	x0, [x0, #0xf88]
 2b9eb14: 97f8e0b3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb18: f001bac0     	adrp	x0, 0x62f9000
 2b9eb1c: f947c800     	ldr	x0, [x0, #0xf90]
 2b9eb20: 97f8e0b0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb24: f001bac0     	adrp	x0, 0x62f9000
 2b9eb28: f9477000     	ldr	x0, [x0, #0xee0]
 2b9eb2c: 97f8e0ad     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb30: f001bac0     	adrp	x0, 0x62f9000
 2b9eb34: f947cc00     	ldr	x0, [x0, #0xf98]
 2b9eb38: 97f8e0aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb3c: f001bac0     	adrp	x0, 0x62f9000
 2b9eb40: f947d000     	ldr	x0, [x0, #0xfa0]
 2b9eb44: 97f8e0a7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb48: f001bac0     	adrp	x0, 0x62f9000
 2b9eb4c: f947d400     	ldr	x0, [x0, #0xfa8]
 2b9eb50: 97f8e0a4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb54: f001bac0     	adrp	x0, 0x62f9000
 2b9eb58: f947d800     	ldr	x0, [x0, #0xfb0]
 2b9eb5c: 97f8e0a1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb60: f001bac0     	adrp	x0, 0x62f9000
 2b9eb64: f947dc00     	ldr	x0, [x0, #0xfb8]
 2b9eb68: 97f8e09e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb6c: b001baa0     	adrp	x0, 0x62f3000
 2b9eb70: f9460c00     	ldr	x0, [x0, #0xc18]
 2b9eb74: 97f8e09b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9eb78: 52800028     	mov	w8, #0x1                // =1
 2b9eb7c: 39230268     	strb	w8, [x19, #0x8c0]
 2b9eb80: f001bad6     	adrp	x22, 0x62f9000
 2b9eb84: f001bad7     	adrp	x23, 0x62f9000
 2b9eb88: f001bad8     	adrp	x24, 0x62f9000
 2b9eb8c: f001bad9     	adrp	x25, 0x62f9000
 2b9eb90: f947bed6     	ldr	x22, [x22, #0xf78]
 2b9eb94: f947baf7     	ldr	x23, [x23, #0xf70]
 2b9eb98: f947af18     	ldr	x24, [x24, #0xf58]
 2b9eb9c: f947d339     	ldr	x25, [x25, #0xfa0]
 2b9eba0: b9401288     	ldr	w8, [x20, #0x10]
 2b9eba4: f001bada     	adrp	x26, 0x62f9000
 2b9eba8: 2a1f03e0     	mov	w0, wzr
 2b9ebac: 910163e9     	add	x9, sp, #0x58
 2b9ebb0: f947cf5a     	ldr	x26, [x26, #0xf98]
 2b9ebb4: f9401293     	ldr	x19, [x20, #0x20]
 2b9ebb8: 7100051f     	cmp	w8, #0x1
 2b9ebbc: a90427ff     	stp	xzr, x9, [sp, #0x40]
 2b9ebc0: 5400088c     	b.gt	0x2b9ecd0 <__start_il2cpp+0xd66bc>
 2b9ebc4: 340009c8     	cbz	w8, 0x2b9ecfc <__start_il2cpp+0xd66e8>
 2b9ebc8: 7100051f     	cmp	w8, #0x1
 2b9ebcc: 540012a1     	b.ne	0x2b9ee20 <__start_il2cpp+0xd680c>
 2b9ebd0: 12800008     	mov	w8, #-0x1               // =-1
 2b9ebd4: b9001288     	str	w8, [x20, #0x10]
 2b9ebd8: b4000ed3     	cbz	x19, 0x2b9edb0 <__start_il2cpp+0xd679c>
 2b9ebdc: aa1303e0     	mov	x0, x19
 2b9ebe0: 97fffd05     	bl	0x2b9dff4 <__start_il2cpp+0xd59e0>
 2b9ebe4: f001badb     	adrp	x27, 0x62f9000
 2b9ebe8: f947cb7b     	ldr	x27, [x27, #0xf90]
 2b9ebec: f9402674     	ldr	x20, [x19, #0x48]
 2b9ebf0: f9400360     	ldr	x0, [x27]
 2b9ebf4: 97f8e121     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9ebf8: f001bac8     	adrp	x8, 0x62f9000
 2b9ebfc: aa0003f5     	mov	x21, x0
 2b9ec00: f9479d08     	ldr	x8, [x8, #0xf38]
 2b9ec04: f9400102     	ldr	x2, [x8]
 2b9ec08: aa1303e1     	mov	x1, x19
 2b9ec0c: aa1f03e3     	mov	x3, xzr
 2b9ec10: 94842fe2     	bl	0x4caab98 <__start_il2cpp+0x21e2584>
 2b9ec14: f001badc     	adrp	x28, 0x62f9000
 2b9ec18: f947b79c     	ldr	x28, [x28, #0xf68]
 2b9ec1c: f9400382     	ldr	x2, [x28]
 2b9ec20: aa1403e0     	mov	x0, x20
 2b9ec24: aa1503e1     	mov	x1, x21
 2b9ec28: 9422b78a     	bl	0x344ca50 <__start_il2cpp+0x98443c>
 2b9ec2c: f001badd     	adrp	x29, 0x62f9000
 2b9ec30: f947b3bd     	ldr	x29, [x29, #0xf60]
 2b9ec34: f94003a1     	ldr	x1, [x29]
 2b9ec38: 9422b344     	bl	0x344b948 <__start_il2cpp+0x983334>
 2b9ec3c: aa0003e1     	mov	x1, x0
 2b9ec40: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9ec44: f8028c01     	str	x1, [x0, #0x28]!
 2b9ec48: 97f8e051     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9ec4c: f9402674     	ldr	x20, [x19, #0x48]
 2b9ec50: f9400360     	ldr	x0, [x27]
 2b9ec54: 97f8e109     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9ec58: f001bac8     	adrp	x8, 0x62f9000
 2b9ec5c: aa0003f5     	mov	x21, x0
 2b9ec60: f947a108     	ldr	x8, [x8, #0xf40]
 2b9ec64: f9400102     	ldr	x2, [x8]
 2b9ec68: aa1303e1     	mov	x1, x19
 2b9ec6c: aa1f03e3     	mov	x3, xzr
 2b9ec70: 94842fca     	bl	0x4caab98 <__start_il2cpp+0x21e2584>
 2b9ec74: f9400382     	ldr	x2, [x28]
 2b9ec78: aa1403e0     	mov	x0, x20
 2b9ec7c: aa1503e1     	mov	x1, x21
 2b9ec80: 9422b774     	bl	0x344ca50 <__start_il2cpp+0x98443c>
 2b9ec84: f94003a1     	ldr	x1, [x29]
 2b9ec88: 9422b330     	bl	0x344b948 <__start_il2cpp+0x983334>
 2b9ec8c: aa0003e1     	mov	x1, x0
 2b9ec90: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9ec94: f8030c01     	str	x1, [x0, #0x30]!
 2b9ec98: 97f8e03d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9ec9c: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9eca0: f9401500     	ldr	x0, [x8, #0x28]
 2b9eca4: b4000900     	cbz	x0, 0x2b9edc4 <__start_il2cpp+0xd67b0>
 2b9eca8: f9401908     	ldr	x8, [x8, #0x30]
 2b9ecac: b40008e8     	cbz	x8, 0x2b9edc8 <__start_il2cpp+0xd67b4>
 2b9ecb0: b9401809     	ldr	w9, [x0, #0x18]
 2b9ecb4: b9401908     	ldr	w8, [x8, #0x18]
 2b9ecb8: 0b090108     	add	w8, w8, w9
 2b9ecbc: 7100011f     	cmp	w8, #0x0
 2b9ecc0: 540005ad     	b.le	0x2b9ed74 <__start_il2cpp+0xd6760>
 2b9ecc4: 52800048     	mov	w8, #0x2                // =2
 2b9ecc8: b9004268     	str	w8, [x19, #0x40]
 2b9eccc: 14000060     	b	0x2b9ee4c <__start_il2cpp+0xd6838>
 2b9ecd0: 7100091f     	cmp	w8, #0x2
 2b9ecd4: 54000420     	b.eq	0x2b9ed58 <__start_il2cpp+0xd6744>
 2b9ecd8: 71000d1f     	cmp	w8, #0x3
 2b9ecdc: 54000a21     	b.ne	0x2b9ee20 <__start_il2cpp+0xd680c>
 2b9ece0: 12800088     	mov	w8, #-0x5               // =-5
 2b9ece4: b9001288     	str	w8, [x20, #0x10]
 2b9ece8: b4000673     	cbz	x19, 0x2b9edb4 <__start_il2cpp+0xd67a0>
 2b9ecec: aa1303e0     	mov	x0, x19
 2b9ecf0: 97fffc71     	bl	0x2b9deb4 <__start_il2cpp+0xd58a0>
 2b9ecf4: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ecf8: 140000b4     	b	0x2b9efc8 <__start_il2cpp+0xd69b4>
 2b9ecfc: 12800008     	mov	w8, #-0x1               // =-1
 2b9ed00: b9001288     	str	w8, [x20, #0x10]
 2b9ed04: b40005b3     	cbz	x19, 0x2b9edb8 <__start_il2cpp+0xd67a4>
 2b9ed08: f9401a60     	ldr	x0, [x19, #0x30]
 2b9ed0c: b40005a0     	cbz	x0, 0x2b9edc0 <__start_il2cpp+0xd67ac>
 2b9ed10: aa1f03e1     	mov	x1, xzr
 2b9ed14: 9401dafa     	bl	0x2c158fc <__start_il2cpp+0x14d2e8>
 2b9ed18: b001baa8     	adrp	x8, 0x62f3000
 2b9ed1c: 52800029     	mov	w9, #0x1                // =1
 2b9ed20: f9460d08     	ldr	x8, [x8, #0xc18]
 2b9ed24: b9004269     	str	w9, [x19, #0x40]
 2b9ed28: f9400100     	ldr	x0, [x8]
 2b9ed2c: 97f8e0d3     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9ed30: 1e211000     	fmov	s0, #3.00000000
 2b9ed34: aa1f03e1     	mov	x1, xzr
 2b9ed38: aa0003f3     	mov	x19, x0
 2b9ed3c: 94bebc15     	bl	0x5b4dd90 <__start_il2cpp+0x308577c>
 2b9ed40: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9ed44: f8018c13     	str	x19, [x0, #0x18]!
 2b9ed48: aa1303e1     	mov	x1, x19
 2b9ed4c: 97f8e010     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9ed50: 52800028     	mov	w8, #0x1                // =1
 2b9ed54: 14000030     	b	0x2b9ee14 <__start_il2cpp+0xd6800>
 2b9ed58: 12800068     	mov	w8, #-0x4               // =-4
 2b9ed5c: b9001288     	str	w8, [x20, #0x10]
 2b9ed60: b40002f3     	cbz	x19, 0x2b9edbc <__start_il2cpp+0xd67a8>
 2b9ed64: aa1303e0     	mov	x0, x19
 2b9ed68: 97fffc53     	bl	0x2b9deb4 <__start_il2cpp+0xd58a0>
 2b9ed6c: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ed70: 14000070     	b	0x2b9ef30 <__start_il2cpp+0xd691c>
 2b9ed74: f9401a60     	ldr	x0, [x19, #0x30]
 2b9ed78: b40002a0     	cbz	x0, 0x2b9edcc <__start_il2cpp+0xd67b8>
 2b9ed7c: aa1f03e1     	mov	x1, xzr
 2b9ed80: 9401d75f     	bl	0x2c14afc <__start_il2cpp+0x14c4e8>
 2b9ed84: f9400a60     	ldr	x0, [x19, #0x10]
 2b9ed88: 52800068     	mov	w8, #0x3                // =3
 2b9ed8c: b9004268     	str	w8, [x19, #0x40]
 2b9ed90: b4000200     	cbz	x0, 0x2b9edd0 <__start_il2cpp+0xd67bc>
 2b9ed94: f001bac8     	adrp	x8, 0x62f9000
 2b9ed98: f947dd08     	ldr	x8, [x8, #0xfb8]
 2b9ed9c: f9400102     	ldr	x2, [x8]
 2b9eda0: aa1f03e1     	mov	x1, xzr
 2b9eda4: 942a12c7     	bl	0x36238c0 <__start_il2cpp+0xb5b2ac>
 2b9eda8: 2a1f03e0     	mov	w0, wzr
 2b9edac: 1400001d     	b	0x2b9ee20 <__start_il2cpp+0xd680c>
 2b9edb0: 97f8e0b6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edb4: 97f8e0b5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edb8: 97f8e0b4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edbc: 97f8e0b3     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edc0: 97f8e0b2     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edc4: 97f8e0b1     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edc8: 97f8e0b0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edcc: 97f8e0af     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edd0: 97f8e0ae     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9edd4: 1400010f     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9edd8: 1400010e     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9eddc: 1400010d     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ede0: 1400010c     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ede4: 1400010b     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ede8: 1400010a     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9edec: 14000109     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9edf0: 14000108     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9edf4: 14000107     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9edf8: 14000106     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9edfc: 14000105     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ee00: 14000104     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ee04: 14000103     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ee08: 14000102     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ee0c: 14000101     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ee10: 14000100     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9ee14: f9402fe9     	ldr	x9, [sp, #0x58]
 2b9ee18: 52800020     	mov	w0, #0x1                // =1
 2b9ee1c: b9001128     	str	w8, [x9, #0x10]
 2b9ee20: f94023f3     	ldr	x19, [sp, #0x40]
 2b9ee24: b50020b3     	cbnz	x19, 0x2b9f238 <__start_il2cpp+0xd6c24>
 2b9ee28: a94b4ff4     	ldp	x20, x19, [sp, #0xb0]
 2b9ee2c: fd402be8     	ldr	d8, [sp, #0x50]
 2b9ee30: a94a57f6     	ldp	x22, x21, [sp, #0xa0]
 2b9ee34: a9495ff8     	ldp	x24, x23, [sp, #0x90]
 2b9ee38: a94867fa     	ldp	x26, x25, [sp, #0x80]
 2b9ee3c: a9476ffc     	ldp	x28, x27, [sp, #0x70]
 2b9ee40: a9467bfd     	ldp	x29, x30, [sp, #0x60]
 2b9ee44: 910303ff     	add	sp, sp, #0xc0
 2b9ee48: d65f03c0     	ret
 2b9ee4c: f9400301     	ldr	x1, [x24]
 2b9ee50: 941fe1db     	bl	0x33975bc <__start_il2cpp+0x8cefa8>
 2b9ee54: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ee58: f9401500     	ldr	x0, [x8, #0x28]
 2b9ee5c: b4000200     	cbz	x0, 0x2b9ee9c <__start_il2cpp+0xd6888>
 2b9ee60: f9400321     	ldr	x1, [x25]
 2b9ee64: 910003e8     	mov	x8, sp
 2b9ee68: 943a2180     	bl	0x3a27468 <__start_il2cpp+0xf5ee54>
 2b9ee6c: ad4007e0     	ldp	q0, q1, [sp]
 2b9ee70: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ee74: ad0107e0     	stp	q0, q1, [sp, #0x20]
 2b9ee78: 3c838100     	stur	q0, [x8, #0x38]
 2b9ee7c: 3c848101     	stur	q1, [x8, #0x48]
 2b9ee80: 9100e100     	add	x0, x8, #0x38
 2b9ee84: aa1f03e1     	mov	x1, xzr
 2b9ee88: 97f8dfc1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9ee8c: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ee90: 12800049     	mov	w9, #-0x3               // =-3
 2b9ee94: b9001109     	str	w9, [x8, #0x10]
 2b9ee98: 14000006     	b	0x2b9eeb0 <__start_il2cpp+0xd689c>
 2b9ee9c: 97f8e07b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9eea0: 140000dc     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9eea4: 140000db     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9eea8: 140000da     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9eeac: 140000d9     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9eeb0: f94002c1     	ldr	x1, [x22]
 2b9eeb4: 9100e100     	add	x0, x8, #0x38
 2b9eeb8: 947b0f78     	bl	0x4a62c98 <__start_il2cpp+0x1f9a684>
 2b9eebc: 2a0003e8     	mov	w8, w0
 2b9eec0: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9eec4: 36000508     	tbz	w8, #0x0, 0x2b9ef64 <__start_il2cpp+0xd6950>
 2b9eec8: 3cc48000     	ldur	q0, [x0, #0x48]
 2b9eecc: 3c858000     	stur	q0, [x0, #0x58]
 2b9eed0: 91018000     	add	x0, x0, #0x60
 2b9eed4: aa1f03e1     	mov	x1, xzr
 2b9eed8: 97f8dfad     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9eedc: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9eee0: f9403108     	ldr	x8, [x8, #0x60]
 2b9eee4: b4001408     	cbz	x8, 0x2b9f164 <__start_il2cpp+0xd6b50>
 2b9eee8: f9400900     	ldr	x0, [x8, #0x10]
 2b9eeec: b40013e0     	cbz	x0, 0x2b9f168 <__start_il2cpp+0xd6b54>
 2b9eef0: f9400341     	ldr	x1, [x26]
 2b9eef4: 910003e8     	mov	x8, sp
 2b9eef8: 943e2ab2     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2b9eefc: 3dc003e0     	ldr	q0, [sp]
 2b9ef00: f9400be8     	ldr	x8, [sp, #0x10]
 2b9ef04: f9402fe9     	ldr	x9, [sp, #0x58]
 2b9ef08: 3d800be0     	str	q0, [sp, #0x20]
 2b9ef0c: f9001be8     	str	x8, [sp, #0x30]
 2b9ef10: 3c868120     	stur	q0, [x9, #0x68]
 2b9ef14: f9003d28     	str	x8, [x9, #0x78]
 2b9ef18: 9101a120     	add	x0, x9, #0x68
 2b9ef1c: aa1f03e1     	mov	x1, xzr
 2b9ef20: 97f8df9b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9ef24: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ef28: 12800069     	mov	w9, #-0x4               // =-4
 2b9ef2c: b9001109     	str	w9, [x8, #0x10]
 2b9ef30: f94002e1     	ldr	x1, [x23]
 2b9ef34: 9101a100     	add	x0, x8, #0x68
 2b9ef38: 947b9e58     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2b9ef3c: 2a0003e8     	mov	w8, w0
 2b9ef40: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9ef44: 37000c68     	tbnz	w8, #0x0, 0x2b9f0d0 <__start_il2cpp+0xd6abc>
 2b9ef48: 940000c7     	bl	0x2b9f264 <__start_il2cpp+0xd6c50>
 2b9ef4c: 6f00e400     	movi	v0.2d, #0000000000000000
 2b9ef50: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ef54: f9003d1f     	str	xzr, [x8, #0x78]
 2b9ef58: 3c858100     	stur	q0, [x8, #0x58]
 2b9ef5c: 3c868100     	stur	q0, [x8, #0x68]
 2b9ef60: 17ffffd4     	b	0x2b9eeb0 <__start_il2cpp+0xd689c>
 2b9ef64: 940000d4     	bl	0x2b9f2b4 <__start_il2cpp+0xd6ca0>
 2b9ef68: 6f00e400     	movi	v0.2d, #0000000000000000
 2b9ef6c: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ef70: f9400301     	ldr	x1, [x24]
 2b9ef74: f9401900     	ldr	x0, [x8, #0x30]
 2b9ef78: 3c838100     	stur	q0, [x8, #0x38]
 2b9ef7c: 3c848100     	stur	q0, [x8, #0x48]
 2b9ef80: 941fe18f     	bl	0x33975bc <__start_il2cpp+0x8cefa8>
 2b9ef84: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9ef88: f9401900     	ldr	x0, [x8, #0x30]
 2b9ef8c: b4000ea0     	cbz	x0, 0x2b9f160 <__start_il2cpp+0xd6b4c>
 2b9ef90: f9400321     	ldr	x1, [x25]
 2b9ef94: 910003e8     	mov	x8, sp
 2b9ef98: 943a2134     	bl	0x3a27468 <__start_il2cpp+0xf5ee54>
 2b9ef9c: ad4007e0     	ldp	q0, q1, [sp]
 2b9efa0: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9efa4: ad0107e0     	stp	q0, q1, [sp, #0x20]
 2b9efa8: 3c838100     	stur	q0, [x8, #0x38]
 2b9efac: 3c848101     	stur	q1, [x8, #0x48]
 2b9efb0: 9100e100     	add	x0, x8, #0x38
 2b9efb4: aa1f03e1     	mov	x1, xzr
 2b9efb8: 97f8df75     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9efbc: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9efc0: 12800089     	mov	w9, #-0x5               // =-5
 2b9efc4: b9001109     	str	w9, [x8, #0x10]
 2b9efc8: f94002c1     	ldr	x1, [x22]
 2b9efcc: 9100e100     	add	x0, x8, #0x38
 2b9efd0: 947b0f32     	bl	0x4a62c98 <__start_il2cpp+0x1f9a684>
 2b9efd4: 2a0003e8     	mov	w8, w0
 2b9efd8: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9efdc: 37000108     	tbnz	w8, #0x0, 0x2b9effc <__start_il2cpp+0xd69e8>
 2b9efe0: 940000c9     	bl	0x2b9f304 <__start_il2cpp+0xd6cf0>
 2b9efe4: 6f00e400     	movi	v0.2d, #0000000000000000
 2b9efe8: f9402fe8     	ldr	x8, [sp, #0x58]
 2b9efec: f9401500     	ldr	x0, [x8, #0x28]
 2b9eff0: 3c838100     	stur	q0, [x8, #0x38]
 2b9eff4: 3c848100     	stur	q0, [x8, #0x48]
 2b9eff8: 17ffff95     	b	0x2b9ee4c <__start_il2cpp+0xd6838>
 2b9effc: f9402815     	ldr	x21, [x0, #0x50]
 2b9f000: b4000b75     	cbz	x21, 0x2b9f16c <__start_il2cpp+0xd6b58>
 2b9f004: d001bac8     	adrp	x8, 0x62f9000
 2b9f008: f947a908     	ldr	x8, [x8, #0xf50]
 2b9f00c: f9400ea0     	ldr	x0, [x21, #0x18]
 2b9f010: f9400101     	ldr	x1, [x8]
 2b9f014: 941fe1c1     	bl	0x3397718 <__start_il2cpp+0x8cf104>
 2b9f018: f9400ea0     	ldr	x0, [x21, #0x18]
 2b9f01c: b4000ac0     	cbz	x0, 0x2b9f174 <__start_il2cpp+0xd6b60>
 2b9f020: d001bad6     	adrp	x22, 0x62f9000
 2b9f024: f947dad6     	ldr	x22, [x22, #0xfb0]
 2b9f028: f94002c2     	ldr	x2, [x22]
 2b9f02c: 2a1f03e1     	mov	w1, wzr
 2b9f030: 943e26cc     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2b9f034: aa0003f4     	mov	x20, x0
 2b9f038: f9400ea0     	ldr	x0, [x21, #0x18]
 2b9f03c: b4000a00     	cbz	x0, 0x2b9f17c <__start_il2cpp+0xd6b68>
 2b9f040: f94002c2     	ldr	x2, [x22]
 2b9f044: 52800021     	mov	w1, #0x1                // =1
 2b9f048: 943e26c6     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2b9f04c: b40009f3     	cbz	x19, 0x2b9f188 <__start_il2cpp+0xd6b74>
 2b9f050: aa0003e2     	mov	x2, x0
 2b9f054: aa1303e0     	mov	x0, x19
 2b9f058: aa1403e1     	mov	x1, x20
 2b9f05c: 97fffd78     	bl	0x2b9e63c <__start_il2cpp+0xd6028>
 2b9f060: f9400ea0     	ldr	x0, [x21, #0x18]
 2b9f064: b4000940     	cbz	x0, 0x2b9f18c <__start_il2cpp+0xd6b78>
 2b9f068: f94002c2     	ldr	x2, [x22]
 2b9f06c: 2a1f03e1     	mov	w1, wzr
 2b9f070: 943e26bc     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2b9f074: b40008e0     	cbz	x0, 0x2b9f190 <__start_il2cpp+0xd6b7c>
 2b9f078: f9404c08     	ldr	x8, [x0, #0x98]
 2b9f07c: b40008c8     	cbz	x8, 0x2b9f194 <__start_il2cpp+0xd6b80>
 2b9f080: f9401500     	ldr	x0, [x8, #0x28]
 2b9f084: 52800021     	mov	w1, #0x1                // =1
 2b9f088: aa1f03e2     	mov	x2, xzr
 2b9f08c: 940d4a9a     	bl	0x2ef1af4 <__start_il2cpp+0x4294e0>
 2b9f090: 9001baa8     	adrp	x8, 0x62f3000
 2b9f094: 1e204008     	fmov	s8, s0
 2b9f098: f9460d08     	ldr	x8, [x8, #0xc18]
 2b9f09c: f9400100     	ldr	x0, [x8]
 2b9f0a0: 97f8dff6     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9f0a4: 1e2e1000     	fmov	s0, #1.00000000
 2b9f0a8: aa0003f3     	mov	x19, x0
 2b9f0ac: 1e202900     	fadd	s0, s8, s0
 2b9f0b0: aa1f03e1     	mov	x1, xzr
 2b9f0b4: 94bebb37     	bl	0x5b4dd90 <__start_il2cpp+0x308577c>
 2b9f0b8: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9f0bc: f8018c13     	str	x19, [x0, #0x18]!
 2b9f0c0: aa1303e1     	mov	x1, x19
 2b9f0c4: 97f8df32     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9f0c8: 52800068     	mov	w8, #0x3                // =3
 2b9f0cc: 17ffff52     	b	0x2b9ee14 <__start_il2cpp+0xd6800>
 2b9f0d0: f9403008     	ldr	x8, [x0, #0x60]
 2b9f0d4: b40004e8     	cbz	x8, 0x2b9f170 <__start_il2cpp+0xd6b5c>
 2b9f0d8: d001bac9     	adrp	x9, 0x62f9000
 2b9f0dc: f947a529     	ldr	x9, [x9, #0xf48]
 2b9f0e0: f9403c14     	ldr	x20, [x0, #0x78]
 2b9f0e4: f9400d00     	ldr	x0, [x8, #0x18]
 2b9f0e8: f9400121     	ldr	x1, [x9]
 2b9f0ec: 941fdffa     	bl	0x33970d4 <__start_il2cpp+0x8ceac0>
 2b9f0f0: b4000453     	cbz	x19, 0x2b9f178 <__start_il2cpp+0xd6b64>
 2b9f0f4: aa0003e2     	mov	x2, x0
 2b9f0f8: aa1303e0     	mov	x0, x19
 2b9f0fc: aa1403e1     	mov	x1, x20
 2b9f100: 97fffd4f     	bl	0x2b9e63c <__start_il2cpp+0xd6028>
 2b9f104: b40003f4     	cbz	x20, 0x2b9f180 <__start_il2cpp+0xd6b6c>
 2b9f108: f9404e88     	ldr	x8, [x20, #0x98]
 2b9f10c: b40003c8     	cbz	x8, 0x2b9f184 <__start_il2cpp+0xd6b70>
 2b9f110: f9401500     	ldr	x0, [x8, #0x28]
 2b9f114: 52800021     	mov	w1, #0x1                // =1
 2b9f118: aa1f03e2     	mov	x2, xzr
 2b9f11c: 940d4a76     	bl	0x2ef1af4 <__start_il2cpp+0x4294e0>
 2b9f120: 9001baa8     	adrp	x8, 0x62f3000
 2b9f124: 1e204008     	fmov	s8, s0
 2b9f128: f9460d08     	ldr	x8, [x8, #0xc18]
 2b9f12c: f9400100     	ldr	x0, [x8]
 2b9f130: 97f8dfd2     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9f134: 1e2e1000     	fmov	s0, #1.00000000
 2b9f138: aa0003f3     	mov	x19, x0
 2b9f13c: 1e202900     	fadd	s0, s8, s0
 2b9f140: aa1f03e1     	mov	x1, xzr
 2b9f144: 94bebb13     	bl	0x5b4dd90 <__start_il2cpp+0x308577c>
 2b9f148: f9402fe0     	ldr	x0, [sp, #0x58]
 2b9f14c: f8018c13     	str	x19, [x0, #0x18]!
 2b9f150: aa1303e1     	mov	x1, x19
 2b9f154: 97f8df0e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9f158: 52800048     	mov	w8, #0x2                // =2
 2b9f15c: 17ffff2e     	b	0x2b9ee14 <__start_il2cpp+0xd6800>
 2b9f160: 97f8dfca     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f164: 97f8dfc9     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f168: 97f8dfc8     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f16c: 97f8dfc7     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f170: 97f8dfc6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f174: 97f8dfc5     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f178: 97f8dfc4     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f17c: 97f8dfc3     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f180: 97f8dfc2     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f184: 97f8dfc1     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f188: 97f8dfc0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f18c: 97f8dfbf     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f190: 97f8dfbe     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f194: 97f8dfbd     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9f198: 1400001e     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f19c: 1400001d     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1a0: 1400001c     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1a4: 1400001b     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1a8: 1400001a     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1ac: 14000019     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1b0: 14000018     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1b4: 14000017     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1b8: 14000016     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1bc: 14000015     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1c0: 14000014     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1c4: 14000013     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1c8: 14000012     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1cc: 14000011     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1d0: 14000010     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1d4: 1400000f     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1d8: 1400000e     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1dc: 1400000d     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1e0: 1400000c     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1e4: 1400000b     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1e8: 1400000a     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1ec: 14000009     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1f0: 14000008     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1f4: 14000007     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1f8: 14000006     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f1fc: 14000005     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f200: 14000004     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f204: 14000003     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f208: 14000002     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f20c: 14000001     	b	0x2b9f210 <__start_il2cpp+0xd6bfc>
 2b9f210: aa0003f3     	mov	x19, x0
 2b9f214: 7100043f     	cmp	w1, #0x1
 2b9f218: 540001c1     	b.ne	0x2b9f250 <__start_il2cpp+0xd6c3c>
 2b9f21c: aa1303e0     	mov	x0, x19
 2b9f220: 94ce1d48     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2b9f224: f9400013     	ldr	x19, [x0]
 2b9f228: f90023f3     	str	x19, [sp, #0x40]
 2b9f22c: 94ce1d49     	bl	0x5f26750 <__cxa_end_catch@plt>
 2b9f230: 2a1f03e0     	mov	w0, wzr
 2b9f234: b4ffdfb3     	cbz	x19, 0x2b9ee28 <__start_il2cpp+0xd6814>
 2b9f238: 910103e8     	add	x8, sp, #0x40
 2b9f23c: 91002100     	add	x0, x8, #0x8
 2b9f240: 97ec259e     	bl	0x26a88b8 <.text+0x3758>
 2b9f244: aa1303e0     	mov	x0, x19
 2b9f248: 97f8df8e     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2b9f24c: aa0003f3     	mov	x19, x0
 2b9f250: 910103e0     	add	x0, sp, #0x40
 2b9f254: 97ec2492     	bl	0x26a849c <.text+0x333c>
 2b9f258: aa1303e0     	mov	x0, x19
 2b9f25c: 97fc9520     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2b9f260: 97ec19fb     	bl	0x26a5a4c <.text+0x8ec>

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Void <>m__Finally2()
# VA 0x2b9f264 .. 0x2b9f2b4 (next mapped method entry)
 2b9f264: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9f268: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9f26c: f001db95     	adrp	x21, 0x6712000
 2b9f270: d001bad4     	adrp	x20, 0x62f9000
 2b9f274: aa0003f3     	mov	x19, x0
 2b9f278: 39630aa8     	ldrb	w8, [x21, #0x8c2]
 2b9f27c: f947e294     	ldr	x20, [x20, #0xfc0]
 2b9f280: 370000c8     	tbnz	w8, #0x0, 0x2b9f298 <__start_il2cpp+0xd6c84>
 2b9f284: d001bac0     	adrp	x0, 0x62f9000
 2b9f288: f947e000     	ldr	x0, [x0, #0xfc0]
 2b9f28c: 97f8ded5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f290: 52800028     	mov	w8, #0x1                // =1
 2b9f294: 39230aa8     	strb	w8, [x21, #0x8c2]
 2b9f298: 12800048     	mov	w8, #-0x3               // =-3
 2b9f29c: f9400281     	ldr	x1, [x20]
 2b9f2a0: 9101a260     	add	x0, x19, #0x68
 2b9f2a4: b9001268     	str	w8, [x19, #0x10]
 2b9f2a8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9f2ac: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9f2b0: 147b9d79     	b	0x4a86894 <__start_il2cpp+0x1fbe280>

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Void <>m__Finally1()
# VA 0x2b9f2b4 .. 0x2b9f304 (next mapped method entry)
 2b9f2b4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9f2b8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9f2bc: f001db95     	adrp	x21, 0x6712000
 2b9f2c0: d001bad4     	adrp	x20, 0x62f9000
 2b9f2c4: aa0003f3     	mov	x19, x0
 2b9f2c8: 396306a8     	ldrb	w8, [x21, #0x8c1]
 2b9f2cc: f947e694     	ldr	x20, [x20, #0xfc8]
 2b9f2d0: 370000c8     	tbnz	w8, #0x0, 0x2b9f2e8 <__start_il2cpp+0xd6cd4>
 2b9f2d4: d001bac0     	adrp	x0, 0x62f9000
 2b9f2d8: f947e400     	ldr	x0, [x0, #0xfc8]
 2b9f2dc: 97f8dec1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f2e0: 52800028     	mov	w8, #0x1                // =1
 2b9f2e4: 392306a8     	strb	w8, [x21, #0x8c1]
 2b9f2e8: 12800008     	mov	w8, #-0x1               // =-1
 2b9f2ec: f9400281     	ldr	x1, [x20]
 2b9f2f0: 9100e260     	add	x0, x19, #0x38
 2b9f2f4: b9001268     	str	w8, [x19, #0x10]
 2b9f2f8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9f2fc: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9f300: 147b0e65     	b	0x4a62c94 <__start_il2cpp+0x1f9a680>

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Void <>m__Finally3()
# VA 0x2b9f304 .. 0x2b9f354 (next mapped method entry)
 2b9f304: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9f308: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9f30c: f001db95     	adrp	x21, 0x6712000
 2b9f310: d001bad4     	adrp	x20, 0x62f9000
 2b9f314: aa0003f3     	mov	x19, x0
 2b9f318: 39630ea8     	ldrb	w8, [x21, #0x8c3]
 2b9f31c: f947e694     	ldr	x20, [x20, #0xfc8]
 2b9f320: 370000c8     	tbnz	w8, #0x0, 0x2b9f338 <__start_il2cpp+0xd6d24>
 2b9f324: d001bac0     	adrp	x0, 0x62f9000
 2b9f328: f947e400     	ldr	x0, [x0, #0xfc8]
 2b9f32c: 97f8dead     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f330: 52800028     	mov	w8, #0x1                // =1
 2b9f334: 39230ea8     	strb	w8, [x21, #0x8c3]
 2b9f338: 12800008     	mov	w8, #-0x1               // =-1
 2b9f33c: f9400281     	ldr	x1, [x20]
 2b9f340: 9100e260     	add	x0, x19, #0x38
 2b9f344: b9001268     	str	w8, [x19, #0x10]
 2b9f348: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9f34c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9f350: 147b0e51     	b	0x4a62c94 <__start_il2cpp+0x1f9a680>

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
# VA 0x2b9f354 .. 0x2b9f35c (next mapped method entry)
 2b9f354: f9400c00     	ldr	x0, [x0, #0x18]
 2b9f358: d65f03c0     	ret

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Void System.Collections.IEnumerator.Reset()
# VA 0x2b9f35c .. 0x2b9f394 (next mapped method entry)
 2b9f35c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b9f360: d001ba80     	adrp	x0, 0x62f1000
 2b9f364: f9413400     	ldr	x0, [x0, #0x268]
 2b9f368: 97f8dea3     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2b9f36c: 97f8df43     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9f370: aa1f03e1     	mov	x1, xzr
 2b9f374: aa0003f3     	mov	x19, x0
 2b9f378: 9495bd16     	bl	0x510e7d0 <__start_il2cpp+0x26461bc>
 2b9f37c: d001bac0     	adrp	x0, 0x62f9000
 2b9f380: f947e800     	ldr	x0, [x0, #0xfd0]
 2b9f384: 97f8de9c     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2b9f388: aa0003e1     	mov	x1, x0
 2b9f38c: aa1303e0     	mov	x0, x19
 2b9f390: 97f8deef     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# BoardHintChecker+_IterateOverHintCombinations_d__19 :: System.Object System.Collections.IEnumerator.get_Current()
# VA 0x2b9f394 .. 0x2b9f39c (next mapped method entry)
 2b9f394: f9400c00     	ldr	x0, [x0, #0x18]
 2b9f398: d65f03c0     	ret
