
# TimeSkipper :: System.Void OnTapped()
# VA 0x2c0ea1c .. 0x2c0eaa8 (next mapped method entry)
 2c0ea1c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0ea20: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0ea24: 9001d834     	adrp	x20, 0x6712000
 2c0ea28: aa0003f3     	mov	x19, x0
 2c0ea2c: 396fc688     	ldrb	w8, [x20, #0xbf1]
 2c0ea30: 370000c8     	tbnz	w8, #0x0, 0x2c0ea48 <__start_il2cpp+0x146434>
 2c0ea34: f001b760     	adrp	x0, 0x62fd000
 2c0ea38: f9409c00     	ldr	x0, [x0, #0x138]
 2c0ea3c: 97f720e9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ea40: 52800028     	mov	w8, #0x1                // =1
 2c0ea44: 392fc688     	strb	w8, [x20, #0xbf1]
 2c0ea48: aa1303e0     	mov	x0, x19
 2c0ea4c: aa1f03e1     	mov	x1, xzr
 2c0ea50: 97ff9249     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c0ea54: 360001e0     	tbz	w0, #0x0, 0x2c0ea90 <__start_il2cpp+0x14647c>
 2c0ea58: f9407674     	ldr	x20, [x19, #0xe8]
 2c0ea5c: aa1303e0     	mov	x0, x19
 2c0ea60: aa1f03e1     	mov	x1, xzr
 2c0ea64: 94bcc3be     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0ea68: b40001e0     	cbz	x0, 0x2c0eaa4 <__start_il2cpp+0x146490>
 2c0ea6c: aa1f03e1     	mov	x1, xzr
 2c0ea70: 94bd1570     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c0ea74: b4000194     	cbz	x20, 0x2c0eaa4 <__start_il2cpp+0x146490>
 2c0ea78: f001b768     	adrp	x8, 0x62fd000
 2c0ea7c: aa1403e0     	mov	x0, x20
 2c0ea80: aa1f03e2     	mov	x2, xzr
 2c0ea84: f9409d08     	ldr	x8, [x8, #0x138]
 2c0ea88: f9400101     	ldr	x1, [x8]
 2c0ea8c: 94036160     	bl	0x2ce700c <__start_il2cpp+0x21e9f8>
 2c0ea90: aa1303e0     	mov	x0, x19
 2c0ea94: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0ea98: aa1f03e1     	mov	x1, xzr
 2c0ea9c: f84207fe     	ldr	x30, [sp], #0x20
 2c0eaa0: 17ff9808     	b	0x2bf4ac0 <__start_il2cpp+0x12c4ac>
 2c0eaa4: 97f72179     	bl	0x29d7088 <mono_class_get_checked+0x970>

# TimeSkipper :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2c0eaa8 .. 0x2c0ebb0 (next mapped method entry)
 2c0eaa8: d10303ff     	sub	sp, sp, #0xc0
 2c0eaac: f90043fe     	str	x30, [sp, #0x80]
 2c0eab0: a9095ff8     	stp	x24, x23, [sp, #0x90]
 2c0eab4: a90a57f6     	stp	x22, x21, [sp, #0xa0]
 2c0eab8: a90b4ff4     	stp	x20, x19, [sp, #0xb0]
 2c0eabc: 9001d837     	adrp	x23, 0x6712000
 2c0eac0: f001b776     	adrp	x22, 0x62fd000
 2c0eac4: aa0103f4     	mov	x20, x1
 2c0eac8: 396fcae9     	ldrb	w9, [x23, #0xbf2]
 2c0eacc: f940a2d6     	ldr	x22, [x22, #0x140]
 2c0ead0: aa0003f5     	mov	x21, x0
 2c0ead4: aa0803f3     	mov	x19, x8
 2c0ead8: 37000189     	tbnz	w9, #0x0, 0x2c0eb08 <__start_il2cpp+0x1464f4>
 2c0eadc: d001b760     	adrp	x0, 0x62fc000
 2c0eae0: f942e000     	ldr	x0, [x0, #0x5c0]
 2c0eae4: 97f720bf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0eae8: f001b760     	adrp	x0, 0x62fd000
 2c0eaec: f940a000     	ldr	x0, [x0, #0x140]
 2c0eaf0: 97f720bc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0eaf4: d001b760     	adrp	x0, 0x62fc000
 2c0eaf8: f942e400     	ldr	x0, [x0, #0x5c8]
 2c0eafc: 97f720b9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0eb00: 52800028     	mov	w8, #0x1                // =1
 2c0eb04: 392fcae8     	strb	w8, [x23, #0xbf2]
 2c0eb08: 6f00e400     	movi	v0.2d, #0000000000000000
 2c0eb0c: d001b778     	adrp	x24, 0x62fc000
 2c0eb10: 910083f7     	add	x23, sp, #0x20
 2c0eb14: b27d02e0     	orr	x0, x23, #0x8
 2c0eb18: aa1f03e1     	mov	x1, xzr
 2c0eb1c: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2c0eb20: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2c0eb24: ad0303e0     	stp	q0, q0, [sp, #0x60]
 2c0eb28: f9001fff     	str	xzr, [sp, #0x38]
 2c0eb2c: f942e718     	ldr	x24, [x24, #0x5c8]
 2c0eb30: a902ffff     	stp	xzr, xzr, [sp, #0x28]
 2c0eb34: 97f72096     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0eb38: 9100a2e0     	add	x0, x23, #0x28
 2c0eb3c: aa1503e1     	mov	x1, x21
 2c0eb40: f90027f5     	str	x21, [sp, #0x48]
 2c0eb44: 97f72092     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0eb48: 910082e0     	add	x0, x23, #0x20
 2c0eb4c: aa1403e1     	mov	x1, x20
 2c0eb50: f90023f4     	str	x20, [sp, #0x40]
 2c0eb54: 97f7208e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0eb58: f94002c0     	ldr	x0, [x22]
 2c0eb5c: 12800009     	mov	w9, #-0x1               // =-1
 2c0eb60: b90023e9     	str	w9, [sp, #0x20]
 2c0eb64: f9401c08     	ldr	x8, [x0, #0x38]
 2c0eb68: b5000048     	cbnz	x8, 0x2c0eb70 <__start_il2cpp+0x14655c>
 2c0eb6c: 97f7fd46     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c0eb70: 910083e0     	add	x0, sp, #0x20
 2c0eb74: 9400028f     	bl	0x2c0f5b0 <__start_il2cpp+0x146f9c>
 2c0eb78: f9400301     	ldr	x1, [x24]
 2c0eb7c: 910023e8     	add	x8, sp, #0x8
 2c0eb80: b27d02e0     	orr	x0, x23, #0x8
 2c0eb84: 97fe35e8     	bl	0x2b9c324 <__start_il2cpp+0xd3d10>
 2c0eb88: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c0eb8c: f9400fe8     	ldr	x8, [sp, #0x18]
 2c0eb90: f94043fe     	ldr	x30, [sp, #0x80]
 2c0eb94: a94a57f6     	ldp	x22, x21, [sp, #0xa0]
 2c0eb98: 3d800260     	str	q0, [x19]
 2c0eb9c: a9495ff8     	ldp	x24, x23, [sp, #0x90]
 2c0eba0: f9000a68     	str	x8, [x19, #0x10]
 2c0eba4: a94b4ff4     	ldp	x20, x19, [sp, #0xb0]
 2c0eba8: 910303ff     	add	sp, sp, #0xc0
 2c0ebac: d65f03c0     	ret

# TimeSkipper :: Cysharp.Threading.Tasks.UniTask AnimateTimersOfItem(BaseItem otherItem)
# VA 0x2c0ebb0 .. 0x2c0ec70 (next mapped method entry)
 2c0ebb0: d101c3ff     	sub	sp, sp, #0x70
 2c0ebb4: f90023fe     	str	x30, [sp, #0x40]
 2c0ebb8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c0ebbc: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c0ebc0: 9001d835     	adrp	x21, 0x6712000
 2c0ebc4: f001b776     	adrp	x22, 0x62fd000
 2c0ebc8: aa0103f3     	mov	x19, x1
 2c0ebcc: 396fcea8     	ldrb	w8, [x21, #0xbf3]
 2c0ebd0: f940a6d6     	ldr	x22, [x22, #0x148]
 2c0ebd4: aa0003f4     	mov	x20, x0
 2c0ebd8: 370000c8     	tbnz	w8, #0x0, 0x2c0ebf0 <__start_il2cpp+0x1465dc>
 2c0ebdc: f001b760     	adrp	x0, 0x62fd000
 2c0ebe0: f940a400     	ldr	x0, [x0, #0x148]
 2c0ebe4: 97f7207f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ebe8: 52800028     	mov	w8, #0x1                // =1
 2c0ebec: 392fcea8     	strb	w8, [x21, #0xbf3]
 2c0ebf0: 6f00e400     	movi	v0.2d, #0000000000000000
 2c0ebf4: 910003f5     	mov	x21, sp
 2c0ebf8: aa1f03e1     	mov	x1, xzr
 2c0ebfc: b27d02a0     	orr	x0, x21, #0x8
 2c0ec00: f9001bff     	str	xzr, [sp, #0x30]
 2c0ec04: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2c0ec08: 3d8003e0     	str	q0, [sp]
 2c0ec0c: 97f72060     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ec10: 910082a0     	add	x0, x21, #0x20
 2c0ec14: aa1403e1     	mov	x1, x20
 2c0ec18: f90013f4     	str	x20, [sp, #0x20]
 2c0ec1c: 97f7205c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ec20: 910062a0     	add	x0, x21, #0x18
 2c0ec24: aa1303e1     	mov	x1, x19
 2c0ec28: f9000ff3     	str	x19, [sp, #0x18]
 2c0ec2c: 97f72058     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ec30: f94002c0     	ldr	x0, [x22]
 2c0ec34: 12800009     	mov	w9, #-0x1               // =-1
 2c0ec38: b90003e9     	str	w9, [sp]
 2c0ec3c: f9401c08     	ldr	x8, [x0, #0x38]
 2c0ec40: b5000048     	cbnz	x8, 0x2c0ec48 <__start_il2cpp+0x146634>
 2c0ec44: 97f7fd10     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c0ec48: 910003e0     	mov	x0, sp
 2c0ec4c: 940000c7     	bl	0x2c0ef68 <__start_il2cpp+0x146954>
 2c0ec50: b27d02a0     	orr	x0, x21, #0x8
 2c0ec54: aa1f03e1     	mov	x1, xzr
 2c0ec58: 97fc6bbc     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c0ec5c: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c0ec60: f94023fe     	ldr	x30, [sp, #0x40]
 2c0ec64: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c0ec68: 9101c3ff     	add	sp, sp, #0x70
 2c0ec6c: d65f03c0     	ret

# TimeSkipper :: System.Boolean CanMergeWith(BaseItem otherItem)
# VA 0x2c0ec70 .. 0x2c0ed88 (next mapped method entry)
 2c0ec70: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0ec74: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0ec78: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0ec7c: 9001d835     	adrp	x21, 0x6712000
 2c0ec80: aa0103f4     	mov	x20, x1
 2c0ec84: aa0003f3     	mov	x19, x0
 2c0ec88: 396fd2a8     	ldrb	w8, [x21, #0xbf4]
 2c0ec8c: 37000128     	tbnz	w8, #0x0, 0x2c0ecb0 <__start_il2cpp+0x14669c>
 2c0ec90: 9001b760     	adrp	x0, 0x62fa000
 2c0ec94: f9405000     	ldr	x0, [x0, #0xa0]
 2c0ec98: 97f72052     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ec9c: d001b760     	adrp	x0, 0x62fc000
 2c0eca0: f9439800     	ldr	x0, [x0, #0x730]
 2c0eca4: 97f7204f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0eca8: 52800028     	mov	w8, #0x1                // =1
 2c0ecac: 392fd2a8     	strb	w8, [x21, #0xbf4]
 2c0ecb0: b40006b4     	cbz	x20, 0x2c0ed84 <__start_il2cpp+0x146770>
 2c0ecb4: f9402a88     	ldr	x8, [x20, #0x50]
 2c0ecb8: b4000668     	cbz	x8, 0x2c0ed84 <__start_il2cpp+0x146770>
 2c0ecbc: f9408260     	ldr	x0, [x19, #0x100]
 2c0ecc0: b4000620     	cbz	x0, 0x2c0ed84 <__start_il2cpp+0x146770>
 2c0ecc4: d001b769     	adrp	x9, 0x62fc000
 2c0ecc8: f9439929     	ldr	x9, [x9, #0x730]
 2c0eccc: b9403101     	ldr	w1, [x8, #0x30]
 2c0ecd0: f9400122     	ldr	x2, [x9]
 2c0ecd4: 943affcf     	bl	0x3acec10 <__start_il2cpp+0x10065fc>
 2c0ecd8: 360000e0     	tbz	w0, #0x0, 0x2c0ecf4 <__start_il2cpp+0x1466e0>
 2c0ecdc: 2a1f03e8     	mov	w8, wzr
 2c0ece0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0ece4: 12000100     	and	w0, w8, #0x1
 2c0ece8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0ecec: f84307fe     	ldr	x30, [sp], #0x30
 2c0ecf0: d65f03c0     	ret
 2c0ecf4: f9402a68     	ldr	x8, [x19, #0x50]
 2c0ecf8: b4000468     	cbz	x8, 0x2c0ed84 <__start_il2cpp+0x146770>
 2c0ecfc: f9402a89     	ldr	x9, [x20, #0x50]
 2c0ed00: b4000429     	cbz	x9, 0x2c0ed84 <__start_il2cpp+0x146770>
 2c0ed04: 9001b76a     	adrp	x10, 0x62fa000
 2c0ed08: f940514a     	ldr	x10, [x10, #0xa0]
 2c0ed0c: b9403115     	ldr	w21, [x8, #0x30]
 2c0ed10: b9403136     	ldr	w22, [x9, #0x30]
 2c0ed14: f9400140     	ldr	x0, [x10]
 2c0ed18: b940e40a     	ldr	w10, [x0, #0xe4]
 2c0ed1c: 3500004a     	cbnz	w10, 0x2c0ed24 <__start_il2cpp+0x146710>
 2c0ed20: 97f7208f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0ed24: 2a1503e0     	mov	w0, w21
 2c0ed28: 2a1603e1     	mov	w1, w22
 2c0ed2c: aa1f03e2     	mov	x2, xzr
 2c0ed30: 97ff9a89     	bl	0x2bf5754 <__start_il2cpp+0x12d140>
 2c0ed34: 36000140     	tbz	w0, #0x0, 0x2c0ed5c <__start_il2cpp+0x146748>
 2c0ed38: b9404668     	ldr	w8, [x19, #0x44]
 2c0ed3c: b9404689     	ldr	w9, [x20, #0x44]
 2c0ed40: 6b09011f     	cmp	w8, w9
 2c0ed44: 54fffcc1     	b.ne	0x2c0ecdc <__start_il2cpp+0x1466c8>
 2c0ed48: aa1303e0     	mov	x0, x19
 2c0ed4c: aa1f03e1     	mov	x1, xzr
 2c0ed50: 97ff9189     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c0ed54: 52000008     	eor	w8, w0, #0x1
 2c0ed58: 17ffffe2     	b	0x2c0ece0 <__start_il2cpp+0x1466cc>
 2c0ed5c: aa1403e0     	mov	x0, x20
 2c0ed60: aa1f03e1     	mov	x1, xzr
 2c0ed64: 97ff9913     	bl	0x2bf51b0 <__start_il2cpp+0x12cb9c>
 2c0ed68: 3607fba0     	tbz	w0, #0x0, 0x2c0ecdc <__start_il2cpp+0x1466c8>
 2c0ed6c: aa1303e0     	mov	x0, x19
 2c0ed70: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0ed74: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0ed78: aa1f03e1     	mov	x1, xzr
 2c0ed7c: f84307fe     	ldr	x30, [sp], #0x30
 2c0ed80: 17ff917d     	b	0x2bf3374 <__start_il2cpp+0x12ad60>
 2c0ed84: 97f720c1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# TimeSkipper :: System.Void .ctor()
# VA 0x2c0ed88 .. 0x2c0ee10 (next mapped method entry)
 2c0ed88: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0ed8c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0ed90: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0ed94: 9001d835     	adrp	x21, 0x6712000
 2c0ed98: f001b716     	adrp	x22, 0x62f1000
 2c0ed9c: f001b714     	adrp	x20, 0x62f1000
 2c0eda0: 396fd6a8     	ldrb	w8, [x21, #0xbf5]
 2c0eda4: f94102d6     	ldr	x22, [x22, #0x200]
 2c0eda8: f940fa94     	ldr	x20, [x20, #0x1f0]
 2c0edac: aa0003f3     	mov	x19, x0
 2c0edb0: 37000128     	tbnz	w8, #0x0, 0x2c0edd4 <__start_il2cpp+0x1467c0>
 2c0edb4: f001b700     	adrp	x0, 0x62f1000
 2c0edb8: f940f800     	ldr	x0, [x0, #0x1f0]
 2c0edbc: 97f72009     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0edc0: f001b700     	adrp	x0, 0x62f1000
 2c0edc4: f9410000     	ldr	x0, [x0, #0x200]
 2c0edc8: 97f72006     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0edcc: 52800028     	mov	w8, #0x1                // =1
 2c0edd0: 392fd6a8     	strb	w8, [x21, #0xbf5]
 2c0edd4: f94002c0     	ldr	x0, [x22]
 2c0edd8: 97f720a8     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0eddc: f9400281     	ldr	x1, [x20]
 2c0ede0: aa0003f4     	mov	x20, x0
 2c0ede4: 943afc87     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2c0ede8: 91040260     	add	x0, x19, #0x100
 2c0edec: aa1403e1     	mov	x1, x20
 2c0edf0: f9008274     	str	x20, [x19, #0x100]
 2c0edf4: 97f71fe6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0edf8: aa1303e0     	mov	x0, x19
 2c0edfc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0ee00: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0ee04: aa1f03e1     	mov	x1, xzr
 2c0ee08: f84307fe     	ldr	x30, [sp], #0x30
 2c0ee0c: 17ff9d4d     	b	0x2bf6340 <__start_il2cpp+0x12dd2c>

# TimeSkipper :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> <>n__0(BaseItem otherItem)
# VA 0x2c0ee10 .. 0x2c0ee44 (next mapped method entry)
 2c0ee10: d100c3ff     	sub	sp, sp, #0x30
 2c0ee14: a9024ffe     	stp	x30, x19, [sp, #0x20]
 2c0ee18: aa0803f3     	mov	x19, x8
 2c0ee1c: 910023e8     	add	x8, sp, #0x8
 2c0ee20: aa1f03e2     	mov	x2, xzr
 2c0ee24: 97ff9d14     	bl	0x2bf6274 <__start_il2cpp+0x12dc60>
 2c0ee28: 3cc083e0     	ldur	q0, [sp, #0x8]
 2c0ee2c: f9400fe8     	ldr	x8, [sp, #0x18]
 2c0ee30: 3d800260     	str	q0, [x19]
 2c0ee34: f9000a68     	str	x8, [x19, #0x10]
 2c0ee38: a9424ffe     	ldp	x30, x19, [sp, #0x20]
 2c0ee3c: 9100c3ff     	add	sp, sp, #0x30
 2c0ee40: d65f03c0     	ret
