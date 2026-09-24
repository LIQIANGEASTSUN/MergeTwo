
# MathUtils :: Cysharp.Threading.Tasks.UniTask AxisSeparatedMovementStartOffset(UnityEngine.Transform tr, UnityEngine.Vector3 fromPos, UnityEngine.Vector3 toPos, System.Single speedA, System.Single speedB, System.Single offset, System.Action`1<System.Single> preCallback = null, System.Action onPeakCallback = null)
# VA 0x2c38548 .. 0x2c3867c (next mapped method entry)
 2c38548: d103c3ff     	sub	sp, sp, #0xf0
 2c3854c: 6d083bef     	stp	d15, d14, [sp, #0x80]
 2c38550: 6d0933ed     	stp	d13, d12, [sp, #0x90]
 2c38554: 6d0a2beb     	stp	d11, d10, [sp, #0xa0]
 2c38558: 6d0b23e9     	stp	d9, d8, [sp, #0xb0]
 2c3855c: a90c5ffe     	stp	x30, x23, [sp, #0xc0]
 2c38560: a90d57f6     	stp	x22, x21, [sp, #0xd0]
 2c38564: a90e4ff4     	stp	x20, x19, [sp, #0xe0]
 2c38568: 1e2040e9     	fmov	s9, s7
 2c3856c: 1e2040aa     	fmov	s10, s5
 2c38570: bd000fe6     	str	s6, [sp, #0xc]
 2c38574: 1e20408b     	fmov	s11, s4
 2c38578: 1e20406c     	fmov	s12, s3
 2c3857c: d001d6d7     	adrp	x23, 0x6712000
 2c38580: 1e20404d     	fmov	s13, s2
 2c38584: 1e20402e     	fmov	s14, s1
 2c38588: d001b636     	adrp	x22, 0x62fe000
 2c3858c: 1e20400f     	fmov	s15, s0
 2c38590: 39754ae8     	ldrb	w8, [x23, #0xd52]
 2c38594: bd40f3e8     	ldr	s8, [sp, #0xf0]
 2c38598: f941aad6     	ldr	x22, [x22, #0x350]
 2c3859c: aa0203f3     	mov	x19, x2
 2c385a0: aa0103f4     	mov	x20, x1
 2c385a4: aa0003f5     	mov	x21, x0
 2c385a8: 370000c8     	tbnz	w8, #0x0, 0x2c385c0 <__start_il2cpp+0x16ffac>
 2c385ac: d001b620     	adrp	x0, 0x62fe000
 2c385b0: f941a800     	ldr	x0, [x0, #0x350]
 2c385b4: 97f67a0b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c385b8: 52800028     	mov	w8, #0x1                // =1
 2c385bc: 39354ae8     	strb	w8, [x23, #0xd52]
 2c385c0: 6f00e400     	movi	v0.2d, #0000000000000000
 2c385c4: 910043f7     	add	x23, sp, #0x10
 2c385c8: aa1f03e1     	mov	x1, xzr
 2c385cc: b27d02e0     	orr	x0, x23, #0x8
 2c385d0: f9003bff     	str	xzr, [sp, #0x70]
 2c385d4: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2c385d8: ad0183e0     	stp	q0, q0, [sp, #0x30]
 2c385dc: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c385e0: 97f679eb     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c385e4: 910122e0     	add	x0, x23, #0x48
 2c385e8: aa1503e1     	mov	x1, x21
 2c385ec: f9002ff5     	str	x21, [sp, #0x58]
 2c385f0: 97f679e7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c385f4: bd400fe0     	ldr	s0, [sp, #0xc]
 2c385f8: 910102e0     	add	x0, x23, #0x40
 2c385fc: aa1403e1     	mov	x1, x20
 2c38600: 2d063bef     	stp	s15, s14, [sp, #0x30]
 2c38604: 2d0733ed     	stp	s13, s12, [sp, #0x38]
 2c38608: 2d082beb     	stp	s11, s10, [sp, #0x40]
 2c3860c: bd004be9     	str	s9, [sp, #0x48]
 2c38610: 2d0503e8     	stp	s8, s0, [sp, #0x28]
 2c38614: f9002bf4     	str	x20, [sp, #0x50]
 2c38618: 97f679dd     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c3861c: 910142e0     	add	x0, x23, #0x50
 2c38620: aa1303e1     	mov	x1, x19
 2c38624: f90033f3     	str	x19, [sp, #0x60]
 2c38628: 97f679d9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c3862c: f94002c0     	ldr	x0, [x22]
 2c38630: 12800009     	mov	w9, #-0x1               // =-1
 2c38634: b90013e9     	str	w9, [sp, #0x10]
 2c38638: f9401c08     	ldr	x8, [x0, #0x38]
 2c3863c: b5000048     	cbnz	x8, 0x2c38644 <__start_il2cpp+0x170030>
 2c38640: 97f75691     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c38644: 910043e0     	add	x0, sp, #0x10
 2c38648: 94003210     	bl	0x2c44e88 <__start_il2cpp+0x17c874>
 2c3864c: b27d02e0     	orr	x0, x23, #0x8
 2c38650: aa1f03e1     	mov	x1, xzr
 2c38654: 97fbc53d     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c38658: a94e4ff4     	ldp	x20, x19, [sp, #0xe0]
 2c3865c: a94d57f6     	ldp	x22, x21, [sp, #0xd0]
 2c38660: a94c5ffe     	ldp	x30, x23, [sp, #0xc0]
 2c38664: 6d4b23e9     	ldp	d9, d8, [sp, #0xb0]
 2c38668: 6d4a2beb     	ldp	d11, d10, [sp, #0xa0]
 2c3866c: 6d4933ed     	ldp	d13, d12, [sp, #0x90]
 2c38670: 6d483bef     	ldp	d15, d14, [sp, #0x80]
 2c38674: 9103c3ff     	add	sp, sp, #0xf0
 2c38678: d65f03c0     	ret

# MathUtils :: System.Boolean LineLineIntersection(out UnityEngine.Vector3 intersection, UnityEngine.Vector3 linePoint1, UnityEngine.Vector3 lineVec1, UnityEngine.Vector3 linePoint2, UnityEngine.Vector3 lineVec2)
# VA 0x2c43cd8 .. 0x2c43e14 (next mapped method entry)
 2c43cd8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c43cdc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c43ce0: 2d46c3e6     	ldp	s6, s16, [sp, #0x34]
 2c43ce4: 90ff2208     	adrp	x8, 0x1083000
 2c43ce8: bd4033e7     	ldr	s7, [sp, #0x30]
 2c43cec: 2d4457f4     	ldp	s20, s21, [sp, #0x20]
 2c43cf0: aa0003f3     	mov	x19, x0
 2c43cf4: 1e300891     	fmul	s17, s4, s16
 2c43cf8: 1e2608b2     	fmul	s18, s5, s6
 2c43cfc: 1e2708b3     	fmul	s19, s5, s7
 2c43d00: 1e300876     	fmul	s22, s3, s16
 2c43d04: 1e203a94     	fsub	s20, s20, s0
 2c43d08: 1e213ab5     	fsub	s21, s21, s1
 2c43d0c: 1e270897     	fmul	s23, s4, s7
 2c43d10: 1e323a31     	fsub	s17, s17, s18
 2c43d14: 1e363a72     	fsub	s18, s19, s22
 2c43d18: 1e260873     	fmul	s19, s3, s6
 2c43d1c: bd402bf6     	ldr	s22, [sp, #0x28]
 2c43d20: 1e223ad6     	fsub	s22, s22, s2
 2c43d24: 1e373a73     	fsub	s19, s19, s23
 2c43d28: 1e310a97     	fmul	s23, s20, s17
 2c43d2c: 1e320ab8     	fmul	s24, s21, s18
 2c43d30: 1e382af7     	fadd	s23, s23, s24
 2c43d34: 1e330ad8     	fmul	s24, s22, s19
 2c43d38: 1e372b17     	fadd	s23, s24, s23
 2c43d3c: bd47f118     	ldr	s24, [x8, #0x7f0]
 2c43d40: 1e20c2f7     	fabs	s23, s23
 2c43d44: 1e3822e0     	fcmp	s23, s24
 2c43d48: 540003e5     	b.pl	0x2c43dc4 <__start_il2cpp+0x17b7b0>
 2c43d4c: 1e310a37     	fmul	s23, s17, s17
 2c43d50: 1e320a59     	fmul	s25, s18, s18
 2c43d54: 1e392af7     	fadd	s23, s23, s25
 2c43d58: 1e330a79     	fmul	s25, s19, s19
 2c43d5c: 1e372b37     	fadd	s23, s25, s23
 2c43d60: 1e3822e0     	fcmp	s23, s24
 2c43d64: 5400030d     	b.le	0x2c43dc4 <__start_il2cpp+0x17b7b0>
 2c43d68: 1e300ab8     	fmul	s24, s21, s16
 2c43d6c: 1e260ad9     	fmul	s25, s22, s6
 2c43d70: 52800020     	mov	w0, #0x1                // =1
 2c43d74: 1e270ad6     	fmul	s22, s22, s7
 2c43d78: 1e300a90     	fmul	s16, s20, s16
 2c43d7c: 1e260a86     	fmul	s6, s20, s6
 2c43d80: 1e270aa7     	fmul	s7, s21, s7
 2c43d84: 1e393b14     	fsub	s20, s24, s25
 2c43d88: 1e303ad0     	fsub	s16, s22, s16
 2c43d8c: 1e2738c6     	fsub	s6, s6, s7
 2c43d90: 1e310a87     	fmul	s7, s20, s17
 2c43d94: 1e320a10     	fmul	s16, s16, s18
 2c43d98: 1e3308c6     	fmul	s6, s6, s19
 2c43d9c: 1e3028e7     	fadd	s7, s7, s16
 2c43da0: 1e2728c6     	fadd	s6, s6, s7
 2c43da4: 1e3718c6     	fdiv	s6, s6, s23
 2c43da8: 1e260863     	fmul	s3, s3, s6
 2c43dac: 1e260884     	fmul	s4, s4, s6
 2c43db0: 1e2608a5     	fmul	s5, s5, s6
 2c43db4: 1e232800     	fadd	s0, s0, s3
 2c43db8: 1e242823     	fadd	s3, s1, s4
 2c43dbc: 1e252841     	fadd	s1, s2, s5
 2c43dc0: 14000010     	b	0x2c43e00 <__start_il2cpp+0x17b7ec>
 2c43dc4: f001d674     	adrp	x20, 0x6712000
 2c43dc8: 39476688     	ldrb	w8, [x20, #0x1d9]
 2c43dcc: 350000c8     	cbnz	w8, 0x2c43de4 <__start_il2cpp+0x17b7d0>
 2c43dd0: d001b560     	adrp	x0, 0x62f1000
 2c43dd4: f940dc00     	ldr	x0, [x0, #0x1b8]
 2c43dd8: 97f64c02     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43ddc: 52800028     	mov	w8, #0x1                // =1
 2c43de0: 39076688     	strb	w8, [x20, #0x1d9]
 2c43de4: d001b568     	adrp	x8, 0x62f1000
 2c43de8: 2a1f03e0     	mov	w0, wzr
 2c43dec: f940dd08     	ldr	x8, [x8, #0x1b8]
 2c43df0: f9400108     	ldr	x8, [x8]
 2c43df4: f9405d08     	ldr	x8, [x8, #0xb8]
 2c43df8: 2d400d00     	ldp	s0, s3, [x8]
 2c43dfc: bd400901     	ldr	s1, [x8, #0x8]
 2c43e00: 2d000e60     	stp	s0, s3, [x19]
 2c43e04: bd000a61     	str	s1, [x19, #0x8]
 2c43e08: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c43e0c: f84207fe     	ldr	x30, [sp], #0x20
 2c43e10: d65f03c0     	ret

# MathUtils :: DG.Tweening.Core.DOGetter`1<System.Single> HorizontalGetter(UnityEngine.Transform transform)
# VA 0x2c43e14 .. 0x2c43ed0 (next mapped method entry)
 2c43e14: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c43e18: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c43e1c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c43e20: f001d674     	adrp	x20, 0x6712000
 2c43e24: f001b5d5     	adrp	x21, 0x62fe000
 2c43e28: aa0003f3     	mov	x19, x0
 2c43e2c: 39753288     	ldrb	w8, [x20, #0xd4c]
 2c43e30: f946deb5     	ldr	x21, [x21, #0xdb8]
 2c43e34: 37000188     	tbnz	w8, #0x0, 0x2c43e64 <__start_il2cpp+0x17b850>
 2c43e38: d001b560     	adrp	x0, 0x62f1000
 2c43e3c: f942ac00     	ldr	x0, [x0, #0x558]
 2c43e40: 97f64be8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43e44: f001b5c0     	adrp	x0, 0x62fe000
 2c43e48: f946e000     	ldr	x0, [x0, #0xdc0]
 2c43e4c: 97f64be5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43e50: f001b5c0     	adrp	x0, 0x62fe000
 2c43e54: f946dc00     	ldr	x0, [x0, #0xdb8]
 2c43e58: 97f64be2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43e5c: 52800028     	mov	w8, #0x1                // =1
 2c43e60: 39353288     	strb	w8, [x20, #0xd4c]
 2c43e64: f94002a0     	ldr	x0, [x21]
 2c43e68: 97f64c84     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c43e6c: aa1f03e1     	mov	x1, xzr
 2c43e70: aa0003f4     	mov	x20, x0
 2c43e74: 94942f35     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c43e78: b40002b4     	cbz	x20, 0x2c43ecc <__start_il2cpp+0x17b8b8>
 2c43e7c: d001b575     	adrp	x21, 0x62f1000
 2c43e80: f001b5d6     	adrp	x22, 0x62fe000
 2c43e84: aa1403e0     	mov	x0, x20
 2c43e88: f942aeb5     	ldr	x21, [x21, #0x558]
 2c43e8c: f946e2d6     	ldr	x22, [x22, #0xdc0]
 2c43e90: aa1303e1     	mov	x1, x19
 2c43e94: f8010c13     	str	x19, [x0, #0x10]!
 2c43e98: 97f64bbd     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c43e9c: f94002a0     	ldr	x0, [x21]
 2c43ea0: 97f64c76     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c43ea4: f94002c2     	ldr	x2, [x22]
 2c43ea8: aa1403e1     	mov	x1, x20
 2c43eac: aa1f03e3     	mov	x3, xzr
 2c43eb0: aa0003f3     	mov	x19, x0
 2c43eb4: 946ff0ad     	bl	0x4840168 <__start_il2cpp+0x1d77b54>
 2c43eb8: aa1303e0     	mov	x0, x19
 2c43ebc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c43ec0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c43ec4: f84307fe     	ldr	x30, [sp], #0x30
 2c43ec8: d65f03c0     	ret
 2c43ecc: 97f64c6f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MathUtils :: DG.Tweening.Core.DOSetter`1<System.Single> HorizontalSetter(UnityEngine.Transform transform)
# VA 0x2c43ed8 .. 0x2c43f94 (next mapped method entry)
 2c43ed8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c43edc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c43ee0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c43ee4: f001d674     	adrp	x20, 0x6712000
 2c43ee8: f001b5d5     	adrp	x21, 0x62fe000
 2c43eec: aa0003f3     	mov	x19, x0
 2c43ef0: 39753688     	ldrb	w8, [x20, #0xd4d]
 2c43ef4: f946e6b5     	ldr	x21, [x21, #0xdc8]
 2c43ef8: 37000188     	tbnz	w8, #0x0, 0x2c43f28 <__start_il2cpp+0x17b914>
 2c43efc: d001b560     	adrp	x0, 0x62f1000
 2c43f00: f942b000     	ldr	x0, [x0, #0x560]
 2c43f04: 97f64bb7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43f08: f001b5c0     	adrp	x0, 0x62fe000
 2c43f0c: f946e800     	ldr	x0, [x0, #0xdd0]
 2c43f10: 97f64bb4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43f14: f001b5c0     	adrp	x0, 0x62fe000
 2c43f18: f946e400     	ldr	x0, [x0, #0xdc8]
 2c43f1c: 97f64bb1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43f20: 52800028     	mov	w8, #0x1                // =1
 2c43f24: 39353688     	strb	w8, [x20, #0xd4d]
 2c43f28: f94002a0     	ldr	x0, [x21]
 2c43f2c: 97f64c53     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c43f30: aa1f03e1     	mov	x1, xzr
 2c43f34: aa0003f4     	mov	x20, x0
 2c43f38: 94942f04     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c43f3c: b40002b4     	cbz	x20, 0x2c43f90 <__start_il2cpp+0x17b97c>
 2c43f40: d001b575     	adrp	x21, 0x62f1000
 2c43f44: f001b5d6     	adrp	x22, 0x62fe000
 2c43f48: aa1403e0     	mov	x0, x20
 2c43f4c: f942b2b5     	ldr	x21, [x21, #0x560]
 2c43f50: f946ead6     	ldr	x22, [x22, #0xdd0]
 2c43f54: aa1303e1     	mov	x1, x19
 2c43f58: f8010c13     	str	x19, [x0, #0x10]!
 2c43f5c: 97f64b8c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c43f60: f94002a0     	ldr	x0, [x21]
 2c43f64: 97f64c45     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c43f68: f94002c2     	ldr	x2, [x22]
 2c43f6c: aa1403e1     	mov	x1, x20
 2c43f70: aa1f03e3     	mov	x3, xzr
 2c43f74: aa0003f3     	mov	x19, x0
 2c43f78: 946ff4c7     	bl	0x4841294 <__start_il2cpp+0x1d78c80>
 2c43f7c: aa1303e0     	mov	x0, x19
 2c43f80: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c43f84: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c43f88: f84307fe     	ldr	x30, [sp], #0x30
 2c43f8c: d65f03c0     	ret
 2c43f90: 97f64c3e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MathUtils :: DG.Tweening.Core.DOGetter`1<System.Single> VerticalGetter(UnityEngine.Transform transform)
# VA 0x2c43f9c .. 0x2c44058 (next mapped method entry)
 2c43f9c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c43fa0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c43fa4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c43fa8: f001d674     	adrp	x20, 0x6712000
 2c43fac: f001b5d5     	adrp	x21, 0x62fe000
 2c43fb0: aa0003f3     	mov	x19, x0
 2c43fb4: 39753a88     	ldrb	w8, [x20, #0xd4e]
 2c43fb8: f946eeb5     	ldr	x21, [x21, #0xdd8]
 2c43fbc: 37000188     	tbnz	w8, #0x0, 0x2c43fec <__start_il2cpp+0x17b9d8>
 2c43fc0: d001b560     	adrp	x0, 0x62f1000
 2c43fc4: f942ac00     	ldr	x0, [x0, #0x558]
 2c43fc8: 97f64b86     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43fcc: f001b5c0     	adrp	x0, 0x62fe000
 2c43fd0: f946f000     	ldr	x0, [x0, #0xde0]
 2c43fd4: 97f64b83     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43fd8: f001b5c0     	adrp	x0, 0x62fe000
 2c43fdc: f946ec00     	ldr	x0, [x0, #0xdd8]
 2c43fe0: 97f64b80     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c43fe4: 52800028     	mov	w8, #0x1                // =1
 2c43fe8: 39353a88     	strb	w8, [x20, #0xd4e]
 2c43fec: f94002a0     	ldr	x0, [x21]
 2c43ff0: 97f64c22     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c43ff4: aa1f03e1     	mov	x1, xzr
 2c43ff8: aa0003f4     	mov	x20, x0
 2c43ffc: 94942ed3     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c44000: b40002b4     	cbz	x20, 0x2c44054 <__start_il2cpp+0x17ba40>
 2c44004: b001b575     	adrp	x21, 0x62f1000
 2c44008: d001b5d6     	adrp	x22, 0x62fe000
 2c4400c: aa1403e0     	mov	x0, x20
 2c44010: f942aeb5     	ldr	x21, [x21, #0x558]
 2c44014: f946f2d6     	ldr	x22, [x22, #0xde0]
 2c44018: aa1303e1     	mov	x1, x19
 2c4401c: f8010c13     	str	x19, [x0, #0x10]!
 2c44020: 97f64b5b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c44024: f94002a0     	ldr	x0, [x21]
 2c44028: 97f64c14     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c4402c: f94002c2     	ldr	x2, [x22]
 2c44030: aa1403e1     	mov	x1, x20
 2c44034: aa1f03e3     	mov	x3, xzr
 2c44038: aa0003f3     	mov	x19, x0
 2c4403c: 946ff04b     	bl	0x4840168 <__start_il2cpp+0x1d77b54>
 2c44040: aa1303e0     	mov	x0, x19
 2c44044: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c44048: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c4404c: f84307fe     	ldr	x30, [sp], #0x30
 2c44050: d65f03c0     	ret
 2c44054: 97f64c0d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MathUtils :: DG.Tweening.Core.DOSetter`1<System.Single> VerticalSetter(UnityEngine.Transform transform)
# VA 0x2c44060 .. 0x2c4411c (next mapped method entry)
 2c44060: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c44064: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c44068: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c4406c: d001d674     	adrp	x20, 0x6712000
 2c44070: d001b5d5     	adrp	x21, 0x62fe000
 2c44074: aa0003f3     	mov	x19, x0
 2c44078: 39753e88     	ldrb	w8, [x20, #0xd4f]
 2c4407c: f946f6b5     	ldr	x21, [x21, #0xde8]
 2c44080: 37000188     	tbnz	w8, #0x0, 0x2c440b0 <__start_il2cpp+0x17ba9c>
 2c44084: b001b560     	adrp	x0, 0x62f1000
 2c44088: f942b000     	ldr	x0, [x0, #0x560]
 2c4408c: 97f64b55     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c44090: d001b5c0     	adrp	x0, 0x62fe000
 2c44094: f946f800     	ldr	x0, [x0, #0xdf0]
 2c44098: 97f64b52     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c4409c: d001b5c0     	adrp	x0, 0x62fe000
 2c440a0: f946f400     	ldr	x0, [x0, #0xde8]
 2c440a4: 97f64b4f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c440a8: 52800028     	mov	w8, #0x1                // =1
 2c440ac: 39353e88     	strb	w8, [x20, #0xd4f]
 2c440b0: f94002a0     	ldr	x0, [x21]
 2c440b4: 97f64bf1     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c440b8: aa1f03e1     	mov	x1, xzr
 2c440bc: aa0003f4     	mov	x20, x0
 2c440c0: 94942ea2     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c440c4: b40002b4     	cbz	x20, 0x2c44118 <__start_il2cpp+0x17bb04>
 2c440c8: b001b575     	adrp	x21, 0x62f1000
 2c440cc: d001b5d6     	adrp	x22, 0x62fe000
 2c440d0: aa1403e0     	mov	x0, x20
 2c440d4: f942b2b5     	ldr	x21, [x21, #0x560]
 2c440d8: f946fad6     	ldr	x22, [x22, #0xdf0]
 2c440dc: aa1303e1     	mov	x1, x19
 2c440e0: f8010c13     	str	x19, [x0, #0x10]!
 2c440e4: 97f64b2a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c440e8: f94002a0     	ldr	x0, [x21]
 2c440ec: 97f64be3     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c440f0: f94002c2     	ldr	x2, [x22]
 2c440f4: aa1403e1     	mov	x1, x20
 2c440f8: aa1f03e3     	mov	x3, xzr
 2c440fc: aa0003f3     	mov	x19, x0
 2c44100: 946ff465     	bl	0x4841294 <__start_il2cpp+0x1d78c80>
 2c44104: aa1303e0     	mov	x0, x19
 2c44108: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c4410c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c44110: f84307fe     	ldr	x30, [sp], #0x30
 2c44114: d65f03c0     	ret
 2c44118: 97f64bdc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MathUtils :: System.Boolean RngPicker(System.Collections.Generic.List`1<System.Int32> probabilities, System.Action`2<System.Int32, System.Object[]> onPicked, System.Object[] parameters)
# VA 0x2c44124 .. 0x2c44220 (next mapped method entry)
 2c44124: f81b0ffe     	str	x30, [sp, #-0x50]!
 2c44128: a90167fa     	stp	x26, x25, [sp, #0x10]
 2c4412c: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2c44130: a90357f6     	stp	x22, x21, [sp, #0x30]
 2c44134: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2c44138: d001d676     	adrp	x22, 0x6712000
 2c4413c: aa0203f3     	mov	x19, x2
 2c44140: aa0103f4     	mov	x20, x1
 2c44144: 397542c8     	ldrb	w8, [x22, #0xd50]
 2c44148: aa0003f5     	mov	x21, x0
 2c4414c: 37000128     	tbnz	w8, #0x0, 0x2c44170 <__start_il2cpp+0x17bb5c>
 2c44150: b001b580     	adrp	x0, 0x62f5000
 2c44154: f940f400     	ldr	x0, [x0, #0x1e8]
 2c44158: 97f64b22     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c4415c: b001b580     	adrp	x0, 0x62f5000
 2c44160: f940f800     	ldr	x0, [x0, #0x1f0]
 2c44164: 97f64b1f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c44168: 52800028     	mov	w8, #0x1                // =1
 2c4416c: 393542c8     	strb	w8, [x22, #0xd50]
 2c44170: b4000575     	cbz	x21, 0x2c4421c <__start_il2cpp+0x17bc08>
 2c44174: b9401ab8     	ldr	w24, [x21, #0x18]
 2c44178: 7100071f     	cmp	w24, #0x1
 2c4417c: 5400040b     	b.lt	0x2c441fc <__start_il2cpp+0x17bbe8>
 2c44180: 2a1f03e0     	mov	w0, wzr
 2c44184: 52800c81     	mov	w1, #0x64               // =100
 2c44188: aa1f03e2     	mov	x2, xzr
 2c4418c: 94bbd0a9     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 2c44190: b9401aa8     	ldr	w8, [x21, #0x18]
 2c44194: 7100051f     	cmp	w8, #0x1
 2c44198: 5400032b     	b.lt	0x2c441fc <__start_il2cpp+0x17bbe8>
 2c4419c: b001b59a     	adrp	x26, 0x62f5000
 2c441a0: 2a0003f7     	mov	w23, w0
 2c441a4: 2a1f03f9     	mov	w25, wzr
 2c441a8: f940fb5a     	ldr	x26, [x26, #0x1f0]
 2c441ac: 2a1f03f6     	mov	w22, wzr
 2c441b0: f9400342     	ldr	x2, [x26]
 2c441b4: aa1503e0     	mov	x0, x21
 2c441b8: 2a1603e1     	mov	w1, w22
 2c441bc: 943a28f7     	bl	0x3ace598 <__start_il2cpp+0x1005f84>
 2c441c0: 0b190019     	add	w25, w0, w25
 2c441c4: 6b1902ff     	cmp	w23, w25
 2c441c8: 540000cb     	b.lt	0x2c441e0 <__start_il2cpp+0x17bbcc>
 2c441cc: b9401aa8     	ldr	w8, [x21, #0x18]
 2c441d0: 110006d6     	add	w22, w22, #0x1
 2c441d4: 6b0802df     	cmp	w22, w8
 2c441d8: 54fffecb     	b.lt	0x2c441b0 <__start_il2cpp+0x17bb9c>
 2c441dc: 14000008     	b	0x2c441fc <__start_il2cpp+0x17bbe8>
 2c441e0: b40000f4     	cbz	x20, 0x2c441fc <__start_il2cpp+0x17bbe8>
 2c441e4: f9400e88     	ldr	x8, [x20, #0x18]
 2c441e8: f9402280     	ldr	x0, [x20, #0x40]
 2c441ec: 2a1603e1     	mov	w1, w22
 2c441f0: f9401683     	ldr	x3, [x20, #0x28]
 2c441f4: aa1303e2     	mov	x2, x19
 2c441f8: d63f0100     	blr	x8
 2c441fc: 7100031f     	cmp	w24, #0x0
 2c44200: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2c44204: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2c44208: 1a9fd7e0     	cset	w0, gt
 2c4420c: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2c44210: a94167fa     	ldp	x26, x25, [sp, #0x10]
 2c44214: f84507fe     	ldr	x30, [sp], #0x50
 2c44218: d65f03c0     	ret
 2c4421c: 97f64b9b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# MathUtils :: Cysharp.Threading.Tasks.UniTask AxisSeparatedMovementEndOffset(UnityEngine.Transform tr, UnityEngine.Vector3 fromPos, UnityEngine.Vector3 toPos, System.Single speedA, System.Single speedB, System.Single offset, System.Action`1<System.Single> preCallback = null, System.Action onPeakCallback = null, System.Int32 startDelay = 0, System.Action onComplete = null)
# VA 0x2c44220 .. 0x2c44380 (next mapped method entry)
 2c44220: d10403ff     	sub	sp, sp, #0x100
 2c44224: 6d073bef     	stp	d15, d14, [sp, #0x70]
 2c44228: 6d0833ed     	stp	d13, d12, [sp, #0x80]
 2c4422c: 6d092beb     	stp	d11, d10, [sp, #0x90]
 2c44230: 6d0a23e9     	stp	d9, d8, [sp, #0xa0]
 2c44234: f9005bfd     	str	x29, [sp, #0xb0]
 2c44238: a90c67fe     	stp	x30, x25, [sp, #0xc0]
 2c4423c: a90d5ff8     	stp	x24, x23, [sp, #0xd0]
 2c44240: a90e57f6     	stp	x22, x21, [sp, #0xe0]
 2c44244: a90f4ff4     	stp	x20, x19, [sp, #0xf0]
 2c44248: 1e2040ca     	fmov	s10, s6
 2c4424c: 1e2040a9     	fmov	s9, s5
 2c44250: bd00bfe7     	str	s7, [sp, #0xbc]
 2c44254: 1e20408b     	fmov	s11, s4
 2c44258: 1e20406d     	fmov	s13, s3
 2c4425c: d001d679     	adrp	x25, 0x6712000
 2c44260: 1e20404c     	fmov	s12, s2
 2c44264: 1e20402e     	fmov	s14, s1
 2c44268: d001b5d8     	adrp	x24, 0x62fe000
 2c4426c: 1e20400f     	fmov	s15, s0
 2c44270: 39754728     	ldrb	w8, [x25, #0xd51]
 2c44274: bd4103e8     	ldr	s8, [sp, #0x100]
 2c44278: f946ff18     	ldr	x24, [x24, #0xdf8]
 2c4427c: aa0403f3     	mov	x19, x4
 2c44280: 2a0303f4     	mov	w20, w3
 2c44284: aa0203f5     	mov	x21, x2
 2c44288: aa0103f6     	mov	x22, x1
 2c4428c: aa0003f7     	mov	x23, x0
 2c44290: 370000c8     	tbnz	w8, #0x0, 0x2c442a8 <__start_il2cpp+0x17bc94>
 2c44294: d001b5c0     	adrp	x0, 0x62fe000
 2c44298: f946fc00     	ldr	x0, [x0, #0xdf8]
 2c4429c: 97f64ad1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c442a0: 52800028     	mov	w8, #0x1                // =1
 2c442a4: 39354728     	strb	w8, [x25, #0xd51]
 2c442a8: 6f00e400     	movi	v0.2d, #0000000000000000
 2c442ac: 910003f9     	mov	x25, sp
 2c442b0: aa1f03e1     	mov	x1, xzr
 2c442b4: b27d0320     	orr	x0, x25, #0x8
 2c442b8: ad0083e0     	stp	q0, q0, [sp, #0x10]
 2c442bc: ad0183e0     	stp	q0, q0, [sp, #0x30]
 2c442c0: ad0283e0     	stp	q0, q0, [sp, #0x50]
 2c442c4: 3d8003e0     	str	q0, [sp]
 2c442c8: 97f64ab1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c442cc: 91012320     	add	x0, x25, #0x48
 2c442d0: aa1703e1     	mov	x1, x23
 2c442d4: f90027f7     	str	x23, [sp, #0x48]
 2c442d8: 97f64aad     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c442dc: bd40bfe0     	ldr	s0, [sp, #0xbc]
 2c442e0: 91010320     	add	x0, x25, #0x40
 2c442e4: aa1603e1     	mov	x1, x22
 2c442e8: 2d05bbef     	stp	s15, s14, [sp, #0x2c]
 2c442ec: 2d03afed     	stp	s13, s11, [sp, #0x1c]
 2c442f0: 2d06abec     	stp	s12, s10, [sp, #0x34]
 2c442f4: bd003fe0     	str	s0, [sp, #0x3c]
 2c442f8: 2d04a3e9     	stp	s9, s8, [sp, #0x24]
 2c442fc: f90023f6     	str	x22, [sp, #0x40]
 2c44300: 97f64aa3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c44304: 91014320     	add	x0, x25, #0x50
 2c44308: aa1503e1     	mov	x1, x21
 2c4430c: f9002bf5     	str	x21, [sp, #0x50]
 2c44310: 97f64a9f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c44314: 91016320     	add	x0, x25, #0x58
 2c44318: aa1303e1     	mov	x1, x19
 2c4431c: b9001bf4     	str	w20, [sp, #0x18]
 2c44320: f9002ff3     	str	x19, [sp, #0x58]
 2c44324: 97f64a9a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c44328: f9400300     	ldr	x0, [x24]
 2c4432c: 12800009     	mov	w9, #-0x1               // =-1
 2c44330: b90003e9     	str	w9, [sp]
 2c44334: f9401c08     	ldr	x8, [x0, #0x38]
 2c44338: b5000048     	cbnz	x8, 0x2c44340 <__start_il2cpp+0x17bd2c>
 2c4433c: 97f72752     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2c44340: 910003e0     	mov	x0, sp
 2c44344: 94000056     	bl	0x2c4449c <__start_il2cpp+0x17be88>
 2c44348: b27d0320     	orr	x0, x25, #0x8
 2c4434c: aa1f03e1     	mov	x1, xzr
 2c44350: 97fb95fe     	bl	0x2b29b48 <__start_il2cpp+0x61534>
 2c44354: a94f4ff4     	ldp	x20, x19, [sp, #0xf0]
 2c44358: f9405bfd     	ldr	x29, [sp, #0xb0]
 2c4435c: a94e57f6     	ldp	x22, x21, [sp, #0xe0]
 2c44360: a94d5ff8     	ldp	x24, x23, [sp, #0xd0]
 2c44364: a94c67fe     	ldp	x30, x25, [sp, #0xc0]
 2c44368: 6d4a23e9     	ldp	d9, d8, [sp, #0xa0]
 2c4436c: 6d492beb     	ldp	d11, d10, [sp, #0x90]
 2c44370: 6d4833ed     	ldp	d13, d12, [sp, #0x80]
 2c44374: 6d473bef     	ldp	d15, d14, [sp, #0x70]
 2c44378: 910403ff     	add	sp, sp, #0x100
 2c4437c: d65f03c0     	ret

# MathUtils :: System.Single Clamp(ref System.Single number, System.Single min, System.Single max)
# VA 0x2c44380 .. 0x2c4439c (next mapped method entry)
 2c44380: bd400002     	ldr	s2, [x0]
 2c44384: 1e212040     	fcmp	s2, s1
 2c44388: 1e22cc21     	fcsel	s1, s1, s2, gt
 2c4438c: 1e202040     	fcmp	s2, s0
 2c44390: 1e214c00     	fcsel	s0, s0, s1, mi
 2c44394: bd000000     	str	s0, [x0]
 2c44398: d65f03c0     	ret

# MathUtils :: System.Int32 Clamp(ref System.Int32 number, System.Int32 min, System.Int32 max)
# VA 0x2c4439c .. 0x2c443bc (next mapped method entry)
 2c4439c: b9400009     	ldr	w9, [x0]
 2c443a0: aa0003e8     	mov	x8, x0
 2c443a4: 6b02013f     	cmp	w9, w2
 2c443a8: 1a82b12a     	csel	w10, w9, w2, lt
 2c443ac: 6b01013f     	cmp	w9, w1
 2c443b0: 1a8ab020     	csel	w0, w1, w10, lt
 2c443b4: b9000100     	str	w0, [x8]
 2c443b8: d65f03c0     	ret

# MathUtils :: System.Single Normalize(ref System.Single number)
# VA 0x2c443bc .. 0x2c443e0 (next mapped method entry)
 2c443bc: 1e2e1000     	fmov	s0, #1.00000000
 2c443c0: bd400001     	ldr	s1, [x0]
 2c443c4: 2f00e402     	movi	d2, #0000000000000000
 2c443c8: 1e202020     	fcmp	s1, s0
 2c443cc: 1e21cc00     	fcsel	s0, s0, s1, gt
 2c443d0: 1e202028     	fcmp	s1, #0.0
 2c443d4: 1e204c40     	fcsel	s0, s2, s0, mi
 2c443d8: bd000000     	str	s0, [x0]
 2c443dc: d65f03c0     	ret

# MathUtils :: T RngPicker(System.Collections.Generic.List`1<System.Single> probabilities, System.Collections.Generic.List`1<T> items)
# VA 0x350ba74 .. 0x350bd78 (next mapped method entry)
 350ba74: fc1b0fea     	str	d10, [sp, #-0x50]!
 350ba78: 6d0123e9     	stp	d9, d8, [sp, #0x10]
 350ba7c: a9025ffe     	stp	x30, x23, [sp, #0x20]
 350ba80: a90357f6     	stp	x22, x21, [sp, #0x30]
 350ba84: a9044ff4     	stp	x20, x19, [sp, #0x40]
 350ba88: f9401c48     	ldr	x8, [x2, #0x38]
 350ba8c: aa0203f4     	mov	x20, x2
 350ba90: aa0103f3     	mov	x19, x1
 350ba94: aa0003f5     	mov	x21, x0
 350ba98: b5000168     	cbnz	x8, 0x350bac4 <__start_il2cpp+0xa434b0>
 350ba9c: b0016fc0     	adrp	x0, 0x6304000
 350baa0: f9425c00     	ldr	x0, [x0, #0x4b8]
 350baa4: 97d32ccf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 350baa8: 90016f80     	adrp	x0, 0x62fb000
 350baac: f942d000     	ldr	x0, [x0, #0x5a0]
 350bab0: 97d32ccc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 350bab4: f9401e88     	ldr	x8, [x20, #0x38]
 350bab8: b5000068     	cbnz	x8, 0x350bac4 <__start_il2cpp+0xa434b0>
 350babc: aa1403e0     	mov	x0, x20
 350bac0: 97d40971     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 350bac4: b4000615     	cbz	x21, 0x350bb84 <__start_il2cpp+0xa43570>
 350bac8: b9401aa8     	ldr	w8, [x21, #0x18]
 350bacc: 7100051f     	cmp	w8, #0x1
 350bad0: 5400036b     	b.lt	0x350bb3c <__start_il2cpp+0xa43528>
 350bad4: 2a1f03e0     	mov	w0, wzr
 350bad8: 52800c81     	mov	w1, #0x64               // =100
 350badc: aa1f03e2     	mov	x2, xzr
 350bae0: 9498b254     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 350bae4: b9401aa8     	ldr	w8, [x21, #0x18]
 350bae8: 7100051f     	cmp	w8, #0x1
 350baec: 5400028b     	b.lt	0x350bb3c <__start_il2cpp+0xa43528>
 350baf0: 1e220008     	scvtf	s8, w0
 350baf4: 2f00e409     	movi	d9, #0000000000000000
 350baf8: 52a85908     	mov	w8, #0x42c80000         // =1120403456
 350bafc: 90016f97     	adrp	x23, 0x62fb000
 350bb00: 1e27010a     	fmov	s10, w8
 350bb04: 2a1f03f6     	mov	w22, wzr
 350bb08: f942d2f7     	ldr	x23, [x23, #0x5a0]
 350bb0c: f94002e2     	ldr	x2, [x23]
 350bb10: aa1503e0     	mov	x0, x21
 350bb14: 2a1603e1     	mov	w1, w22
 350bb18: 94196ff5     	bl	0x3b67aec <__start_il2cpp+0x109f4d8>
 350bb1c: 1e2a0800     	fmul	s0, s0, s10
 350bb20: 1e202929     	fadd	s9, s9, s0
 350bb24: 1e282120     	fcmp	s9, s8
 350bb28: 54000188     	b.hi	0x350bb58 <__start_il2cpp+0xa43544>
 350bb2c: b9401aa8     	ldr	w8, [x21, #0x18]
 350bb30: 110006d6     	add	w22, w22, #0x1
 350bb34: 6b0802df     	cmp	w22, w8
 350bb38: 54fffeab     	b.lt	0x350bb0c <__start_il2cpp+0xa434f8>
 350bb3c: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 350bb40: aa1f03e0     	mov	x0, xzr
 350bb44: a94357f6     	ldp	x22, x21, [sp, #0x30]
 350bb48: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 350bb4c: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 350bb50: fc4507ea     	ldr	d10, [sp], #0x50
 350bb54: d65f03c0     	ret
 350bb58: b4000173     	cbz	x19, 0x350bb84 <__start_il2cpp+0xa43570>
 350bb5c: f9401e88     	ldr	x8, [x20, #0x38]
 350bb60: aa1303e0     	mov	x0, x19
 350bb64: 2a1603e1     	mov	w1, w22
 350bb68: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 350bb6c: a94357f6     	ldp	x22, x21, [sp, #0x30]
 350bb70: f9400902     	ldr	x2, [x8, #0x10]
 350bb74: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 350bb78: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 350bb7c: fc4507ea     	ldr	d10, [sp], #0x50
 350bb80: 141873f8     	b	0x3b28b60 <__start_il2cpp+0x106054c>
 350bb84: 97d32d41     	bl	0x29d7088 <mono_class_get_checked+0x970>
 350bb88: fc190fea     	str	d10, [sp, #-0x70]!
 350bb8c: 6d00a3e9     	stp	d9, d8, [sp, #0x8]
 350bb90: a901fbfd     	stp	x29, x30, [sp, #0x18]
 350bb94: f90017fb     	str	x27, [sp, #0x28]
 350bb98: a90367fa     	stp	x26, x25, [sp, #0x30]
 350bb9c: a9045ff8     	stp	x24, x23, [sp, #0x40]
 350bba0: a90557f6     	stp	x22, x21, [sp, #0x50]
 350bba4: a9064ff4     	stp	x20, x19, [sp, #0x60]
 350bba8: 910063fd     	add	x29, sp, #0x18
 350bbac: d10083ff     	sub	sp, sp, #0x20
 350bbb0: d53bd05a     	mrs	x26, TPIDR_EL0
 350bbb4: aa0303f6     	mov	x22, x3
 350bbb8: aa0203f3     	mov	x19, x2
 350bbbc: f9401748     	ldr	x8, [x26, #0x28]
 350bbc0: aa0103f5     	mov	x21, x1
 350bbc4: aa0003f7     	mov	x23, x0
 350bbc8: f81e03a8     	stur	x8, [x29, #-0x20]
 350bbcc: f9401c68     	ldr	x8, [x3, #0x38]
 350bbd0: b5000188     	cbnz	x8, 0x350bc00 <__start_il2cpp+0xa435ec>
 350bbd4: b0016fc0     	adrp	x0, 0x6304000
 350bbd8: f9425c00     	ldr	x0, [x0, #0x4b8]
 350bbdc: 97d32c81     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 350bbe0: 90016f80     	adrp	x0, 0x62fb000
 350bbe4: f942d000     	ldr	x0, [x0, #0x5a0]
 350bbe8: 97d32c7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 350bbec: f9401ec8     	ldr	x8, [x22, #0x38]
 350bbf0: b5000088     	cbnz	x8, 0x350bc00 <__start_il2cpp+0xa435ec>
 350bbf4: aa1603e0     	mov	x0, x22
 350bbf8: 97d40923     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 350bbfc: f9401ec8     	ldr	x8, [x22, #0x38]
 350bc00: f9400108     	ldr	x8, [x8]
 350bc04: b940fd14     	ldr	w20, [x8, #0xfc]
 350bc08: 910003e8     	mov	x8, sp
 350bc0c: 91003e89     	add	x9, x20, #0xf
 350bc10: 927c7129     	and	x9, x9, #0x1fffffff0
 350bc14: cb090118     	sub	x24, x8, x9
 350bc18: 9100031f     	mov	sp, x24
 350bc1c: b4000a37     	cbz	x23, 0x350bd60 <__start_il2cpp+0xa4374c>
 350bc20: b9401ae8     	ldr	w8, [x23, #0x18]
 350bc24: 7100011f     	cmp	w8, #0x0
 350bc28: 5400036d     	b.le	0x350bc94 <__start_il2cpp+0xa43680>
 350bc2c: 2a1f03e0     	mov	w0, wzr
 350bc30: 52800c81     	mov	w1, #0x64               // =100
 350bc34: aa1f03e2     	mov	x2, xzr
 350bc38: 9498b1fe     	bl	0x5b38430 <__start_il2cpp+0x306fe1c>
 350bc3c: b9401ae8     	ldr	w8, [x23, #0x18]
 350bc40: 7100051f     	cmp	w8, #0x1
 350bc44: 5400028b     	b.lt	0x350bc94 <__start_il2cpp+0xa43680>
 350bc48: 1e220008     	scvtf	s8, w0
 350bc4c: 2f00e409     	movi	d9, #0000000000000000
 350bc50: 52a85908     	mov	w8, #0x42c80000         // =1120403456
 350bc54: 90016f9b     	adrp	x27, 0x62fb000
 350bc58: 1e27010a     	fmov	s10, w8
 350bc5c: 2a1f03f9     	mov	w25, wzr
 350bc60: f942d37b     	ldr	x27, [x27, #0x5a0]
 350bc64: f9400362     	ldr	x2, [x27]
 350bc68: aa1703e0     	mov	x0, x23
 350bc6c: 2a1903e1     	mov	w1, w25
 350bc70: 94196f9f     	bl	0x3b67aec <__start_il2cpp+0x109f4d8>
 350bc74: 1e2a0800     	fmul	s0, s0, s10
 350bc78: 1e202929     	fadd	s9, s9, s0
 350bc7c: 1e282120     	fcmp	s9, s8
 350bc80: 54000348     	b.hi	0x350bce8 <__start_il2cpp+0xa436d4>
 350bc84: b9401ae8     	ldr	w8, [x23, #0x18]
 350bc88: 11000739     	add	w25, w25, #0x1
 350bc8c: 6b08033f     	cmp	w25, w8
 350bc90: 54fffeab     	b.lt	0x350bc64 <__start_il2cpp+0xa43650>
 350bc94: aa1803e0     	mov	x0, x24
 350bc98: 2a1f03e1     	mov	w1, wzr
 350bc9c: aa1403e2     	mov	x2, x20
 350bca0: 94a86aa0     	bl	0x5f26720 <__register_atfork@plt+0x30>
 350bca4: f9401748     	ldr	x8, [x26, #0x28]
 350bca8: f85e03a9     	ldur	x9, [x29, #-0x20]
 350bcac: eb09011f     	cmp	x8, x9
 350bcb0: 54000621     	b.ne	0x350bd74 <__start_il2cpp+0xa43760>
 350bcb4: aa1303e0     	mov	x0, x19
 350bcb8: 2a1f03e1     	mov	w1, wzr
 350bcbc: aa1403e2     	mov	x2, x20
 350bcc0: d10063bf     	sub	sp, x29, #0x18
 350bcc4: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 350bcc8: f94017fb     	ldr	x27, [sp, #0x28]
 350bccc: a94557f6     	ldp	x22, x21, [sp, #0x50]
 350bcd0: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 350bcd4: a94367fa     	ldp	x26, x25, [sp, #0x30]
 350bcd8: a941fbfd     	ldp	x29, x30, [sp, #0x18]
 350bcdc: 6d40a3e9     	ldp	d9, d8, [sp, #0x8]
 350bce0: fc4707ea     	ldr	d10, [sp], #0x70
 350bce4: 14a86a8f     	b	0x5f26720 <__register_atfork@plt+0x30>
 350bce8: b40003d5     	cbz	x21, 0x350bd60 <__start_il2cpp+0xa4374c>
 350bcec: f9401ec8     	ldr	x8, [x22, #0x38]
 350bcf0: d100e3a3     	sub	x3, x29, #0x38
 350bcf4: aa1503e2     	mov	x2, x21
 350bcf8: aa1803e4     	mov	x4, x24
 350bcfc: b81dc3b9     	stur	w25, [x29, #-0x24]
 350bd00: f9400901     	ldr	x1, [x8, #0x10]
 350bd04: d10093a8     	sub	x8, x29, #0x24
 350bd08: f9400020     	ldr	x0, [x1]
 350bd0c: f9400829     	ldr	x9, [x1, #0x10]
 350bd10: a93ce3a8     	stp	x8, x24, [x29, #-0x38]
 350bd14: d63f0120     	blr	x9
 350bd18: aa1303e0     	mov	x0, x19
 350bd1c: aa1803e1     	mov	x1, x24
 350bd20: aa1403e2     	mov	x2, x20
 350bd24: 94a86a77     	bl	0x5f26700 <__register_atfork@plt+0x10>
 350bd28: f9401748     	ldr	x8, [x26, #0x28]
 350bd2c: f85e03a9     	ldur	x9, [x29, #-0x20]
 350bd30: eb09011f     	cmp	x8, x9
 350bd34: 54000201     	b.ne	0x350bd74 <__start_il2cpp+0xa43760>
 350bd38: d10063bf     	sub	sp, x29, #0x18
 350bd3c: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 350bd40: f94017fb     	ldr	x27, [sp, #0x28]
 350bd44: a94557f6     	ldp	x22, x21, [sp, #0x50]
 350bd48: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 350bd4c: a94367fa     	ldp	x26, x25, [sp, #0x30]
 350bd50: a941fbfd     	ldp	x29, x30, [sp, #0x18]
 350bd54: 6d40a3e9     	ldp	d9, d8, [sp, #0x8]
 350bd58: fc4707ea     	ldr	d10, [sp], #0x70
 350bd5c: d65f03c0     	ret
 350bd60: f9401748     	ldr	x8, [x26, #0x28]
 350bd64: f85e03a9     	ldur	x9, [x29, #-0x20]
 350bd68: eb09011f     	cmp	x8, x9
 350bd6c: 54000041     	b.ne	0x350bd74 <__start_il2cpp+0xa43760>
 350bd70: 97d32cc6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 350bd74: 94a86a6f     	bl	0x5f26730 <__stack_chk_fail@plt>
