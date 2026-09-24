
# ItemMover :: System.Void Initialize()
# VA 0x2c04bec .. 0x2c04c90 (next mapped method entry)
 2c04bec: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c04bf0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c04bf4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c04bf8: d001d876     	adrp	x22, 0x6712000
 2c04bfc: d001b777     	adrp	x23, 0x62f2000
 2c04c00: 9001b7d4     	adrp	x20, 0x62fc000
 2c04c04: f001b775     	adrp	x21, 0x62f3000
 2c04c08: f943f2f7     	ldr	x23, [x23, #0x7e0]
 2c04c0c: 396e8ac8     	ldrb	w8, [x22, #0xba2]
 2c04c10: f946ee94     	ldr	x20, [x20, #0xdd8]
 2c04c14: f946c6b5     	ldr	x21, [x21, #0xd88]
 2c04c18: aa0003f3     	mov	x19, x0
 2c04c1c: 37000188     	tbnz	w8, #0x0, 0x2c04c4c <__start_il2cpp+0x13c638>
 2c04c20: d001b760     	adrp	x0, 0x62f2000
 2c04c24: f943f000     	ldr	x0, [x0, #0x7e0]
 2c04c28: 97f7486e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04c2c: f001b760     	adrp	x0, 0x62f3000
 2c04c30: f946c400     	ldr	x0, [x0, #0xd88]
 2c04c34: 97f7486b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04c38: 9001b7c0     	adrp	x0, 0x62fc000
 2c04c3c: f946ec00     	ldr	x0, [x0, #0xdd8]
 2c04c40: 97f74868     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04c44: 52800028     	mov	w8, #0x1                // =1
 2c04c48: 392e8ac8     	strb	w8, [x22, #0xba2]
 2c04c4c: f94002e0     	ldr	x0, [x23]
 2c04c50: 97f7490a     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c04c54: f9400282     	ldr	x2, [x20]
 2c04c58: aa1303e1     	mov	x1, x19
 2c04c5c: aa1f03e3     	mov	x3, xzr
 2c04c60: aa0003f4     	mov	x20, x0
 2c04c64: 94917631     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c04c68: f94002a0     	ldr	x0, [x21]
 2c04c6c: b940e408     	ldr	w8, [x0, #0xe4]
 2c04c70: 35000048     	cbnz	w8, 0x2c04c78 <__start_il2cpp+0x13c664>
 2c04c74: 97f748ba     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c04c78: aa1403e0     	mov	x0, x20
 2c04c7c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c04c80: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c04c84: aa1f03e1     	mov	x1, xzr
 2c04c88: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c04c8c: 1408cf97     	b	0x2e38ae8 <__start_il2cpp+0x3704d4>

# ItemMover :: System.Void OnAdShow()
# VA 0x2c04c90 .. 0x2c04ccc (next mapped method entry)
 2c04c90: 3940e408     	ldrb	w8, [x0, #0x39]
 2c04c94: 340001a8     	cbz	w8, 0x2c04cc8 <__start_il2cpp+0x13c6b4>
 2c04c98: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c04c9c: 3940e808     	ldrb	w8, [x0, #0x3a]
 2c04ca0: aa0003f3     	mov	x19, x0
 2c04ca4: 34000068     	cbz	w8, 0x2c04cb0 <__start_il2cpp+0x13c69c>
 2c04ca8: aa1303e0     	mov	x0, x19
 2c04cac: 94000008     	bl	0x2c04ccc <__start_il2cpp+0x13c6b8>
 2c04cb0: f8050e7f     	str	xzr, [x19, #0x50]!
 2c04cb4: aa1303e0     	mov	x0, x19
 2c04cb8: aa1f03e1     	mov	x1, xzr
 2c04cbc: 97f74834     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c04cc0: 781e927f     	sturh	wzr, [x19, #-0x17]
 2c04cc4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c04cc8: d65f03c0     	ret

# ItemMover :: System.Void OnDragEnded()
# VA 0x2c04ccc .. 0x2c05304 (next mapped method entry)
 2c04ccc: 6db923e9     	stp	d9, d8, [sp, #-0x70]!
 2c04cd0: a9017bfd     	stp	x29, x30, [sp, #0x10]
 2c04cd4: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2c04cd8: a90367fa     	stp	x26, x25, [sp, #0x30]
 2c04cdc: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c04ce0: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c04ce4: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c04ce8: d001d874     	adrp	x20, 0x6712000
 2c04cec: aa0003f3     	mov	x19, x0
 2c04cf0: 396ea688     	ldrb	w8, [x20, #0xba9]
 2c04cf4: 370009c8     	tbnz	w8, #0x0, 0x2c04e2c <__start_il2cpp+0x13c818>
 2c04cf8: d001b760     	adrp	x0, 0x62f2000
 2c04cfc: f943f000     	ldr	x0, [x0, #0x7e0]
 2c04d00: 97f74838     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d04: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d08: f946f000     	ldr	x0, [x0, #0xde0]
 2c04d0c: 97f74835     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d10: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d14: f946f400     	ldr	x0, [x0, #0xde8]
 2c04d18: 97f74832     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d1c: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d20: f946f800     	ldr	x0, [x0, #0xdf0]
 2c04d24: 97f7482f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d28: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d2c: f946fc00     	ldr	x0, [x0, #0xdf8]
 2c04d30: 97f7482c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d34: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d38: f9470000     	ldr	x0, [x0, #0xe00]
 2c04d3c: 97f74829     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d40: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d44: f9470400     	ldr	x0, [x0, #0xe08]
 2c04d48: 97f74826     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d4c: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d50: f9470800     	ldr	x0, [x0, #0xe10]
 2c04d54: 97f74823     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d58: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d5c: f9470c00     	ldr	x0, [x0, #0xe18]
 2c04d60: 97f74820     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d64: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d68: f9471000     	ldr	x0, [x0, #0xe20]
 2c04d6c: 97f7481d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d70: b001b7a0     	adrp	x0, 0x62f9000
 2c04d74: f9476c00     	ldr	x0, [x0, #0xed8]
 2c04d78: 97f7481a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d7c: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d80: f9471400     	ldr	x0, [x0, #0xe28]
 2c04d84: 97f74817     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d88: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d8c: f9471800     	ldr	x0, [x0, #0xe30]
 2c04d90: 97f74814     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04d94: 9001b7c0     	adrp	x0, 0x62fc000
 2c04d98: f9471c00     	ldr	x0, [x0, #0xe38]
 2c04d9c: 97f74811     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04da0: 9001b7c0     	adrp	x0, 0x62fc000
 2c04da4: f9472000     	ldr	x0, [x0, #0xe40]
 2c04da8: 97f7480e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04dac: 9001b7c0     	adrp	x0, 0x62fc000
 2c04db0: f9472400     	ldr	x0, [x0, #0xe48]
 2c04db4: 97f7480b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04db8: d001b7a0     	adrp	x0, 0x62fa000
 2c04dbc: f9420c00     	ldr	x0, [x0, #0x418]
 2c04dc0: 97f74808     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04dc4: d001b7a0     	adrp	x0, 0x62fa000
 2c04dc8: f9421000     	ldr	x0, [x0, #0x420]
 2c04dcc: 97f74805     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04dd0: 9001b760     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c04dd4: f9478c00     	ldr	x0, [x0, #0xf18]
 2c04dd8: 97f74802     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04ddc: 9001b7c0     	adrp	x0, 0x62fc000
 2c04de0: f9472800     	ldr	x0, [x0, #0xe50]
 2c04de4: 97f747ff     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04de8: 9001b7c0     	adrp	x0, 0x62fc000
 2c04dec: f9472c00     	ldr	x0, [x0, #0xe58]
 2c04df0: 97f747fc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04df4: 9001b7c0     	adrp	x0, 0x62fc000
 2c04df8: f9473000     	ldr	x0, [x0, #0xe60]
 2c04dfc: 97f747f9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04e00: 9001b7c0     	adrp	x0, 0x62fc000
 2c04e04: f9473400     	ldr	x0, [x0, #0xe68]
 2c04e08: 97f747f6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04e0c: 9001b7c0     	adrp	x0, 0x62fc000
 2c04e10: f9473800     	ldr	x0, [x0, #0xe70]
 2c04e14: 97f747f3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04e18: 9001b7c0     	adrp	x0, 0x62fc000
 2c04e1c: f9473c00     	ldr	x0, [x0, #0xe78]
 2c04e20: 97f747f0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c04e24: 52800028     	mov	w8, #0x1                // =1
 2c04e28: 392ea688     	strb	w8, [x20, #0xba9]
 2c04e2c: f9401a60     	ldr	x0, [x19, #0x30]
 2c04e30: b4000560     	cbz	x0, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c04e34: 9001b7c8     	adrp	x8, 0x62fc000
 2c04e38: aa1f03e1     	mov	x1, xzr
 2c04e3c: f9473108     	ldr	x8, [x8, #0xe60]
 2c04e40: f9400102     	ldr	x2, [x8]
 2c04e44: 94287967     	bl	0x36233e0 <__start_il2cpp+0xb5adcc>
 2c04e48: f9402e60     	ldr	x0, [x19, #0x58]
 2c04e4c: b4000480     	cbz	x0, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c04e50: f9400008     	ldr	x8, [x0]
 2c04e54: a95e8509     	ldp	x9, x1, [x8, #0x1e8]
 2c04e58: d63f0120     	blr	x9
 2c04e5c: f9403674     	ldr	x20, [x19, #0x68]
 2c04e60: b40003f4     	cbz	x20, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c04e64: 9001b7d5     	adrp	x21, 0x62fc000
 2c04e68: 9001b7d9     	adrp	x25, 0x62fc000
 2c04e6c: 9001b7da     	adrp	x26, 0x62fc000
 2c04e70: 9001b7d7     	adrp	x23, 0x62fc000
 2c04e74: 9001b7d8     	adrp	x24, 0x62fc000
 2c04e78: 9001b7dd     	adrp	x29, 0x62fc000
 2c04e7c: 9001b7dc     	adrp	x28, 0x62fc000
 2c04e80: f9472ab5     	ldr	x21, [x21, #0xe50]
 2c04e84: f9473f39     	ldr	x25, [x25, #0xe78]
 2c04e88: f946ff5a     	ldr	x26, [x26, #0xdf8]
 2c04e8c: f94706f7     	ldr	x23, [x23, #0xe08]
 2c04e90: f9472718     	ldr	x24, [x24, #0xe48]
 2c04e94: f9470bbd     	ldr	x29, [x29, #0xe10]
 2c04e98: f947179c     	ldr	x28, [x28, #0xe28]
 2c04e9c: aa1f03f6     	mov	x22, xzr
 2c04ea0: 5280041b     	mov	w27, #0x20              // =32
 2c04ea4: b9401a88     	ldr	w8, [x20, #0x18]
 2c04ea8: eb28c2df     	cmp	x22, w8, sxtw
 2c04eac: 540001aa     	b.ge	0x2c04ee0 <__start_il2cpp+0x13c8cc>
 2c04eb0: eb0802df     	cmp	x22, x8
 2c04eb4: 54002262     	b.hs	0x2c05300 <__start_il2cpp+0x13ccec>
 2c04eb8: 8b160e88     	add	x8, x20, x22, lsl #3
 2c04ebc: 8b1b0280     	add	x0, x20, x27
 2c04ec0: aa1f03e1     	mov	x1, xzr
 2c04ec4: f900111f     	str	xzr, [x8, #0x20]
 2c04ec8: 97f747b1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c04ecc: f9403674     	ldr	x20, [x19, #0x68]
 2c04ed0: 910006d6     	add	x22, x22, #0x1
 2c04ed4: 9100237b     	add	x27, x27, #0x8
 2c04ed8: b5fffe74     	cbnz	x20, 0x2c04ea4 <__start_il2cpp+0x13c890>
 2c04edc: 97f7486b     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c04ee0: f94002a0     	ldr	x0, [x21]
 2c04ee4: 2d48a668     	ldp	s8, s9, [x19, #0x44]
 2c04ee8: b940e408     	ldr	w8, [x0, #0xe4]
 2c04eec: 35000048     	cbnz	w8, 0x2c04ef4 <__start_il2cpp+0x13c8e0>
 2c04ef0: 97f7481b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c04ef4: 1e204100     	fmov	s0, s8
 2c04ef8: 1e204121     	fmov	s1, s9
 2c04efc: aa1403e0     	mov	x0, x20
 2c04f00: aa1f03e1     	mov	x1, xzr
 2c04f04: 94beaf0e     	bl	0x5bb0b3c <__start_il2cpp+0x30e8528>
 2c04f08: 34001660     	cbz	w0, 0x2c051d4 <__start_il2cpp+0x13cbc0>
 2c04f0c: f9400320     	ldr	x0, [x25]
 2c04f10: f9403674     	ldr	x20, [x19, #0x68]
 2c04f14: b940e408     	ldr	w8, [x0, #0xe4]
 2c04f18: 35000068     	cbnz	w8, 0x2c04f24 <__start_il2cpp+0x13c910>
 2c04f1c: 97f74810     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c04f20: f9400320     	ldr	x0, [x25]
 2c04f24: f9405c08     	ldr	x8, [x0, #0xb8]
 2c04f28: f9401515     	ldr	x21, [x8, #0x28]
 2c04f2c: b50002f5     	cbnz	x21, 0x2c04f88 <__start_il2cpp+0x13c974>
 2c04f30: b940e409     	ldr	w9, [x0, #0xe4]
 2c04f34: 35000089     	cbnz	w9, 0x2c04f44 <__start_il2cpp+0x13c930>
 2c04f38: 97f74809     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c04f3c: f9400328     	ldr	x8, [x25]
 2c04f40: f9405d08     	ldr	x8, [x8, #0xb8]
 2c04f44: 9001b7c9     	adrp	x9, 0x62fc000
 2c04f48: f9471129     	ldr	x9, [x9, #0xe20]
 2c04f4c: f9400116     	ldr	x22, [x8]
 2c04f50: f9400120     	ldr	x0, [x9]
 2c04f54: 97f74849     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c04f58: 9001b7c8     	adrp	x8, 0x62fc000
 2c04f5c: aa1603e1     	mov	x1, x22
 2c04f60: aa1f03e3     	mov	x3, xzr
 2c04f64: f9473508     	ldr	x8, [x8, #0xe68]
 2c04f68: aa0003f5     	mov	x21, x0
 2c04f6c: f9400102     	ldr	x2, [x8]
 2c04f70: 9482c8d3     	bl	0x4cb72bc <__start_il2cpp+0x21eeca8>
 2c04f74: f9400328     	ldr	x8, [x25]
 2c04f78: aa1503e1     	mov	x1, x21
 2c04f7c: f9405d00     	ldr	x0, [x8, #0xb8]
 2c04f80: f8028c15     	str	x21, [x0, #0x28]!
 2c04f84: 97f74782     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c04f88: f9400342     	ldr	x2, [x26]
 2c04f8c: aa1403e0     	mov	x0, x20
 2c04f90: aa1503e1     	mov	x1, x21
 2c04f94: 9420db1a     	bl	0x343bbfc <__start_il2cpp+0x9735e8>
 2c04f98: f94002e1     	ldr	x1, [x23]
 2c04f9c: 94211c6b     	bl	0x344c148 <__start_il2cpp+0x983b34>
 2c04fa0: f9400328     	ldr	x8, [x25]
 2c04fa4: aa0003f4     	mov	x20, x0
 2c04fa8: b940e509     	ldr	w9, [x8, #0xe4]
 2c04fac: 35000089     	cbnz	w9, 0x2c04fbc <__start_il2cpp+0x13c9a8>
 2c04fb0: aa0803e0     	mov	x0, x8
 2c04fb4: 97f747ea     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c04fb8: f9400328     	ldr	x8, [x25]
 2c04fbc: f9405d09     	ldr	x9, [x8, #0xb8]
 2c04fc0: f9401935     	ldr	x21, [x9, #0x30]
 2c04fc4: b5000315     	cbnz	x21, 0x2c05024 <__start_il2cpp+0x13ca10>
 2c04fc8: b940e50a     	ldr	w10, [x8, #0xe4]
 2c04fcc: 350000aa     	cbnz	w10, 0x2c04fe0 <__start_il2cpp+0x13c9cc>
 2c04fd0: aa0803e0     	mov	x0, x8
 2c04fd4: 97f747e2     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c04fd8: f9400328     	ldr	x8, [x25]
 2c04fdc: f9405d09     	ldr	x9, [x8, #0xb8]
 2c04fe0: 9001b7c8     	adrp	x8, 0x62fc000
 2c04fe4: f9472d08     	ldr	x8, [x8, #0xe58]
 2c04fe8: f9400136     	ldr	x22, [x9]
 2c04fec: f9400100     	ldr	x0, [x8]
 2c04ff0: 97f74822     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c04ff4: 9001b7c8     	adrp	x8, 0x62fc000
 2c04ff8: aa1603e1     	mov	x1, x22
 2c04ffc: aa1f03e3     	mov	x3, xzr
 2c05000: f9473908     	ldr	x8, [x8, #0xe70]
 2c05004: aa0003f5     	mov	x21, x0
 2c05008: f9400102     	ldr	x2, [x8]
 2c0500c: 9446b840     	bl	0x3db310c <__start_il2cpp+0x12eaaf8>
 2c05010: f9400328     	ldr	x8, [x25]
 2c05014: aa1503e1     	mov	x1, x21
 2c05018: f9405d00     	ldr	x0, [x8, #0xb8]
 2c0501c: f8030c15     	str	x21, [x0, #0x30]!
 2c05020: 97f7475b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c05024: b4fff5d4     	cbz	x20, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c05028: f9400302     	ldr	x2, [x24]
 2c0502c: aa1403e0     	mov	x0, x20
 2c05030: aa1503e1     	mov	x1, x21
 2c05034: 943c9538     	bl	0x3b2a514 <__start_il2cpp+0x1061f00>
 2c05038: f94003a0     	ldr	x0, [x29]
 2c0503c: 97f7480f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05040: f9400382     	ldr	x2, [x28]
 2c05044: aa1303e1     	mov	x1, x19
 2c05048: aa1f03e3     	mov	x3, xzr
 2c0504c: aa0003f5     	mov	x21, x0
 2c05050: 9482c30f     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2c05054: f001b7a8     	adrp	x8, 0x62fc000
 2c05058: aa1403e0     	mov	x0, x20
 2c0505c: aa1503e1     	mov	x1, x21
 2c05060: f946f908     	ldr	x8, [x8, #0xdf0]
 2c05064: f9400102     	ldr	x2, [x8]
 2c05068: 9420c1bb     	bl	0x3435754 <__start_il2cpp+0x96d140>
 2c0506c: f001b7a8     	adrp	x8, 0x62fc000
 2c05070: aa0003f4     	mov	x20, x0
 2c05074: f9470d08     	ldr	x8, [x8, #0xe18]
 2c05078: f9400108     	ldr	x8, [x8]
 2c0507c: aa0803e0     	mov	x0, x8
 2c05080: 97f747fe     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05084: f001b7a8     	adrp	x8, 0x62fc000
 2c05088: aa1303e1     	mov	x1, x19
 2c0508c: aa1f03e3     	mov	x3, xzr
 2c05090: f9471908     	ldr	x8, [x8, #0xe30]
 2c05094: aa0003f5     	mov	x21, x0
 2c05098: f9400102     	ldr	x2, [x8]
 2c0509c: 9482ca79     	bl	0x4cb7a80 <__start_il2cpp+0x21ef46c>
 2c050a0: f001b7a8     	adrp	x8, 0x62fc000
 2c050a4: aa1403e0     	mov	x0, x20
 2c050a8: aa1503e1     	mov	x1, x21
 2c050ac: f9470108     	ldr	x8, [x8, #0xe00]
 2c050b0: f9400102     	ldr	x2, [x8]
 2c050b4: 94210868     	bl	0x3447254 <__start_il2cpp+0x97ec40>
 2c050b8: f94002e1     	ldr	x1, [x23]
 2c050bc: 94211c23     	bl	0x344c148 <__start_il2cpp+0x983b34>
 2c050c0: b4fff0e0     	cbz	x0, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c050c4: b9401808     	ldr	w8, [x0, #0x18]
 2c050c8: 7100051f     	cmp	w8, #0x1
 2c050cc: 5400052b     	b.lt	0x2c05170 <__start_il2cpp+0x13cb5c>
 2c050d0: b001b7a8     	adrp	x8, 0x62fa000
 2c050d4: 2a1f03e1     	mov	w1, wzr
 2c050d8: f9421108     	ldr	x8, [x8, #0x420]
 2c050dc: f9400102     	ldr	x2, [x8]
 2c050e0: 943c8ea0     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c050e4: aa0003f4     	mov	x20, x0
 2c050e8: aa1303e0     	mov	x0, x19
 2c050ec: aa1403e1     	mov	x1, x20
 2c050f0: 94000217     	bl	0x2c0594c <__start_il2cpp+0x13d338>
 2c050f4: f001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c050f8: f9478d08     	ldr	x8, [x8, #0xf18]
 2c050fc: f9400a75     	ldr	x21, [x19, #0x10]
 2c05100: f9400100     	ldr	x0, [x8]
 2c05104: b940e408     	ldr	w8, [x0, #0xe4]
 2c05108: 35000048     	cbnz	w8, 0x2c05110 <__start_il2cpp+0x13cafc>
 2c0510c: 97f74794     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05110: aa1403e0     	mov	x0, x20
 2c05114: aa1f03e1     	mov	x1, xzr
 2c05118: 94bd154b     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0511c: 37000040     	tbnz	w0, #0x0, 0x2c05124 <__start_il2cpp+0x13cb10>
 2c05120: f9402a74     	ldr	x20, [x19, #0x50]
 2c05124: b4ffedd5     	cbz	x21, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c05128: 9001b7aa     	adrp	x10, 0x62f9000
 2c0512c: f94002a8     	ldr	x8, [x21]
 2c05130: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c05134: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c05138: f9400141     	ldr	x1, [x10]
 2c0513c: b4000129     	cbz	x9, 0x2c05160 <__start_il2cpp+0x13cb4c>
 2c05140: f940590a     	ldr	x10, [x8, #0xb0]
 2c05144: 9100214a     	add	x10, x10, #0x8
 2c05148: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0514c: eb01017f     	cmp	x11, x1
 2c05150: 54000560     	b.eq	0x2c051fc <__start_il2cpp+0x13cbe8>
 2c05154: f1000529     	subs	x9, x9, #0x1
 2c05158: 9100414a     	add	x10, x10, #0x10
 2c0515c: 54ffff61     	b.ne	0x2c05148 <__start_il2cpp+0x13cb34>
 2c05160: aa1503e0     	mov	x0, x21
 2c05164: 52800042     	mov	w2, #0x2                // =2
 2c05168: 97f8247f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0516c: 14000028     	b	0x2c0520c <__start_il2cpp+0x13cbf8>
 2c05170: f9403668     	ldr	x8, [x19, #0x68]
 2c05174: b4ffeb48     	cbz	x8, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c05178: b9401909     	ldr	w9, [x8, #0x18]
 2c0517c: 34000c29     	cbz	w9, 0x2c05300 <__start_il2cpp+0x13ccec>
 2c05180: f9401100     	ldr	x0, [x8, #0x20]
 2c05184: b4ffeac0     	cbz	x0, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c05188: f001b7a8     	adrp	x8, 0x62fc000
 2c0518c: f946f508     	ldr	x8, [x8, #0xde8]
 2c05190: f9400101     	ldr	x1, [x8]
 2c05194: 941e6e5f     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2c05198: f001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0519c: aa0003f4     	mov	x20, x0
 2c051a0: f9478d08     	ldr	x8, [x8, #0xf18]
 2c051a4: f9400108     	ldr	x8, [x8]
 2c051a8: b940e509     	ldr	w9, [x8, #0xe4]
 2c051ac: 35000069     	cbnz	w9, 0x2c051b8 <__start_il2cpp+0x13cba4>
 2c051b0: aa0803e0     	mov	x0, x8
 2c051b4: 97f7476a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c051b8: aa1403e0     	mov	x0, x20
 2c051bc: aa1f03e1     	mov	x1, xzr
 2c051c0: 94bd1521     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c051c4: 360003a0     	tbz	w0, #0x0, 0x2c05238 <__start_il2cpp+0x13cc24>
 2c051c8: b4ffe8b4     	cbz	x20, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c051cc: 3941c288     	ldrb	w8, [x20, #0x70]
 2c051d0: 34000448     	cbz	w8, 0x2c05258 <__start_il2cpp+0x13cc44>
 2c051d4: aa1303e0     	mov	x0, x19
 2c051d8: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c051dc: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c051e0: aa1f03e1     	mov	x1, xzr
 2c051e4: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c051e8: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c051ec: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c051f0: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2c051f4: 6cc723e9     	ldp	d9, d8, [sp], #0x70
 2c051f8: 140001d5     	b	0x2c0594c <__start_il2cpp+0x13d338>
 2c051fc: b9400149     	ldr	w9, [x10]
 2c05200: 11000929     	add	w9, w9, #0x2
 2c05204: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c05208: 9104e100     	add	x0, x8, #0x138
 2c0520c: a9400803     	ldp	x3, x2, [x0]
 2c05210: aa1503e0     	mov	x0, x21
 2c05214: aa1403e1     	mov	x1, x20
 2c05218: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c0521c: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c05220: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c05224: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c05228: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c0522c: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2c05230: 6cc723e9     	ldp	d9, d8, [sp], #0x70
 2c05234: d61f0060     	br	x3
 2c05238: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c0523c: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c05240: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c05244: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c05248: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c0524c: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2c05250: 6cc723e9     	ldp	d9, d8, [sp], #0x70
 2c05254: d65f03c0     	ret
 2c05258: f001b7a8     	adrp	x8, 0x62fc000
 2c0525c: aa1403e0     	mov	x0, x20
 2c05260: f946f108     	ldr	x8, [x8, #0xde0]
 2c05264: f9400101     	ldr	x1, [x8]
 2c05268: 941e6e2a     	bl	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2c0526c: b4ffe380     	cbz	x0, 0x2c04edc <__start_il2cpp+0x13c8c8>
 2c05270: aa1f03e1     	mov	x1, xzr
 2c05274: 94032b23     	bl	0x2ccff00 <__start_il2cpp+0x2078ec>
 2c05278: b001b777     	adrp	x23, 0x62f2000
 2c0527c: f943f2f7     	ldr	x23, [x23, #0x7e0]
 2c05280: f9402e75     	ldr	x21, [x19, #0x58]
 2c05284: f94002e0     	ldr	x0, [x23]
 2c05288: 97f7477c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0528c: f001b7a8     	adrp	x8, 0x62fc000
 2c05290: aa1303e1     	mov	x1, x19
 2c05294: aa1f03e3     	mov	x3, xzr
 2c05298: f9471d08     	ldr	x8, [x8, #0xe38]
 2c0529c: aa0003f6     	mov	x22, x0
 2c052a0: f9400102     	ldr	x2, [x8]
 2c052a4: 949174a1     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c052a8: f94002e0     	ldr	x0, [x23]
 2c052ac: 97f74773     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c052b0: f001b7a8     	adrp	x8, 0x62fc000
 2c052b4: aa1303e1     	mov	x1, x19
 2c052b8: aa1f03e3     	mov	x3, xzr
 2c052bc: f9472108     	ldr	x8, [x8, #0xe40]
 2c052c0: aa0003f7     	mov	x23, x0
 2c052c4: f9400102     	ldr	x2, [x8]
 2c052c8: 94917498     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c052cc: aa1403e0     	mov	x0, x20
 2c052d0: aa1503e1     	mov	x1, x21
 2c052d4: aa1603e2     	mov	x2, x22
 2c052d8: aa1703e3     	mov	x3, x23
 2c052dc: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c052e0: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c052e4: aa1f03e4     	mov	x4, xzr
 2c052e8: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c052ec: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c052f0: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c052f4: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2c052f8: 6cc723e9     	ldp	d9, d8, [sp], #0x70
 2c052fc: 140344c4     	b	0x2cd660c <__start_il2cpp+0x20dff8>
 2c05300: 97f74764     	bl	0x29d7090 <mono_class_get_checked+0x978>

# ItemMover :: System.Void ResetInput()
# VA 0x2c05304 .. 0x2c05328 (next mapped method entry)
 2c05304: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c05308: aa0003f3     	mov	x19, x0
 2c0530c: aa1f03e1     	mov	x1, xzr
 2c05310: f8050e7f     	str	xzr, [x19, #0x50]!
 2c05314: aa1303e0     	mov	x0, x19
 2c05318: 97f7469d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0531c: 781e927f     	sturh	wzr, [x19, #-0x17]
 2c05320: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c05324: d65f03c0     	ret

# ItemMover :: System.Void Tick()
# VA 0x2c05328 .. 0x2c05338 (next mapped method entry)
 2c05328: 3940e008     	ldrb	w8, [x0, #0x38]
 2c0532c: 34000048     	cbz	w8, 0x2c05334 <__start_il2cpp+0x13cd20>
 2c05330: 14000002     	b	0x2c05338 <__start_il2cpp+0x13cd24>
 2c05334: d65f03c0     	ret

# ItemMover :: System.Void CheckInput()
# VA 0x2c05338 .. 0x2c053bc (next mapped method entry)
 2c05338: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0533c: aa0003f3     	mov	x19, x0
 2c05340: aa1f03e0     	mov	x0, xzr
 2c05344: 94be73e1     	bl	0x5ba22c8 <__start_il2cpp+0x30d9cb4>
 2c05348: 7100041f     	cmp	w0, #0x1
 2c0534c: 54000060     	b.eq	0x2c05358 <__start_il2cpp+0x13cd44>
 2c05350: aa1303e0     	mov	x0, x19
 2c05354: 94000025     	bl	0x2c053e8 <__start_il2cpp+0x13cdd4>
 2c05358: 3940e668     	ldrb	w8, [x19, #0x39]
 2c0535c: 34000108     	cbz	w8, 0x2c0537c <__start_il2cpp+0x13cd68>
 2c05360: 2a1f03e0     	mov	w0, wzr
 2c05364: aa1f03e1     	mov	x1, xzr
 2c05368: 94be7195     	bl	0x5ba19bc <__start_il2cpp+0x30d93a8>
 2c0536c: 36000160     	tbz	w0, #0x0, 0x2c05398 <__start_il2cpp+0x13cd84>
 2c05370: aa1303e0     	mov	x0, x19
 2c05374: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c05378: 14000340     	b	0x2c06078 <__start_il2cpp+0x13da64>
 2c0537c: 2a1f03e0     	mov	w0, wzr
 2c05380: aa1f03e1     	mov	x1, xzr
 2c05384: 94be719d     	bl	0x5ba19f8 <__start_il2cpp+0x30d93e4>
 2c05388: 36000160     	tbz	w0, #0x0, 0x2c053b4 <__start_il2cpp+0x13cda0>
 2c0538c: aa1303e0     	mov	x0, x19
 2c05390: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c05394: 1400022b     	b	0x2c05c40 <__start_il2cpp+0x13d62c>
 2c05398: 2a1f03e0     	mov	w0, wzr
 2c0539c: aa1f03e1     	mov	x1, xzr
 2c053a0: 94be71a5     	bl	0x5ba1a34 <__start_il2cpp+0x30d9420>
 2c053a4: 36000080     	tbz	w0, #0x0, 0x2c053b4 <__start_il2cpp+0x13cda0>
 2c053a8: aa1303e0     	mov	x0, x19
 2c053ac: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c053b0: 1400000e     	b	0x2c053e8 <__start_il2cpp+0x13cdd4>
 2c053b4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c053b8: d65f03c0     	ret

# ItemMover :: System.Void SetEnable(System.Boolean status)
# VA 0x2c053bc .. 0x2c053e8 (next mapped method entry)
 2c053bc: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c053c0: aa0003f3     	mov	x19, x0
 2c053c4: 36000061     	tbz	w1, #0x0, 0x2c053d0 <__start_il2cpp+0x13cdbc>
 2c053c8: 52800028     	mov	w8, #0x1                // =1
 2c053cc: 14000004     	b	0x2c053dc <__start_il2cpp+0x13cdc8>
 2c053d0: aa1303e0     	mov	x0, x19
 2c053d4: 94000005     	bl	0x2c053e8 <__start_il2cpp+0x13cdd4>
 2c053d8: 2a1f03e8     	mov	w8, wzr
 2c053dc: 3900e268     	strb	w8, [x19, #0x38]
 2c053e0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c053e4: d65f03c0     	ret

# ItemMover :: System.Void OnInputReleased()
# VA 0x2c053e8 .. 0x2c0560c (next mapped method entry)
 2c053e8: d100c3ff     	sub	sp, sp, #0x30
 2c053ec: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c053f0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c053f4: b001d874     	adrp	x20, 0x6712000
 2c053f8: f001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c053fc: aa0003f3     	mov	x19, x0
 2c05400: 396e9a88     	ldrb	w8, [x20, #0xba6]
 2c05404: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c05408: 37000248     	tbnz	w8, #0x0, 0x2c05450 <__start_il2cpp+0x13ce3c>
 2c0540c: f001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05410: f946e800     	ldr	x0, [x0, #0xdd0]
 2c05414: 97f74673     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05418: 9001b7a0     	adrp	x0, 0x62f9000
 2c0541c: f9476c00     	ldr	x0, [x0, #0xed8]
 2c05420: 97f74670     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05424: f001b760     	adrp	x0, 0x62f4000
 2c05428: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0542c: 97f7466d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05430: f001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05434: f9478c00     	ldr	x0, [x0, #0xf18]
 2c05438: 97f7466a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0543c: f001b7a0     	adrp	x0, 0x62fc000
 2c05440: f9474000     	ldr	x0, [x0, #0xe80]
 2c05444: 97f74667     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05448: 52800028     	mov	w8, #0x1                // =1
 2c0544c: 392e9a88     	strb	w8, [x20, #0xba6]
 2c05450: f94002a0     	ldr	x0, [x21]
 2c05454: f9400e74     	ldr	x20, [x19, #0x18]
 2c05458: f90007ff     	str	xzr, [sp, #0x8]
 2c0545c: b940e408     	ldr	w8, [x0, #0xe4]
 2c05460: 35000048     	cbnz	w8, 0x2c05468 <__start_il2cpp+0x13ce54>
 2c05464: 97f746be     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05468: aa1403e0     	mov	x0, x20
 2c0546c: aa1f03e1     	mov	x1, xzr
 2c05470: aa1f03e2     	mov	x2, xzr
 2c05474: 94bd0461     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c05478: 36000300     	tbz	w0, #0x0, 0x2c054d8 <__start_il2cpp+0x13cec4>
 2c0547c: f001b768     	adrp	x8, 0x62f4000
 2c05480: f001b7b3     	adrp	x19, 0x62fc000
 2c05484: f001b754     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05488: f9476d08     	ldr	x8, [x8, #0xed8]
 2c0548c: f9474273     	ldr	x19, [x19, #0xe80]
 2c05490: f946ea94     	ldr	x20, [x20, #0xdd0]
 2c05494: f9400100     	ldr	x0, [x8]
 2c05498: 97f746f8     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0549c: f9400261     	ldr	x1, [x19]
 2c054a0: aa1f03e2     	mov	x2, xzr
 2c054a4: aa1f03e3     	mov	x3, xzr
 2c054a8: aa0003f3     	mov	x19, x0
 2c054ac: 97fcaa9b     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c054b0: f9400280     	ldr	x0, [x20]
 2c054b4: b940e408     	ldr	w8, [x0, #0xe4]
 2c054b8: 35000048     	cbnz	w8, 0x2c054c0 <__start_il2cpp+0x13ceac>
 2c054bc: 97f746a8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c054c0: aa1303e0     	mov	x0, x19
 2c054c4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c054c8: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c054cc: aa1f03e1     	mov	x1, xzr
 2c054d0: 9100c3ff     	add	sp, sp, #0x30
 2c054d4: 14bbc7cd     	b	0x5af7408 <__start_il2cpp+0x302edf4>
 2c054d8: 910023e1     	add	x1, sp, #0x8
 2c054dc: aa1303e0     	mov	x0, x19
 2c054e0: 940004b6     	bl	0x2c067b8 <__start_il2cpp+0x13e1a4>
 2c054e4: 36000080     	tbz	w0, #0x0, 0x2c054f4 <__start_il2cpp+0x13cee0>
 2c054e8: f94007e8     	ldr	x8, [sp, #0x8]
 2c054ec: f8044268     	stur	x8, [x19, #0x44]
 2c054f0: 14000012     	b	0x2c05538 <__start_il2cpp+0x13cf24>
 2c054f4: f94002a0     	ldr	x0, [x21]
 2c054f8: f9402e74     	ldr	x20, [x19, #0x58]
 2c054fc: b940e408     	ldr	w8, [x0, #0xe4]
 2c05500: 35000048     	cbnz	w8, 0x2c05508 <__start_il2cpp+0x13cef4>
 2c05504: 97f74696     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05508: aa1403e0     	mov	x0, x20
 2c0550c: aa1f03e1     	mov	x1, xzr
 2c05510: 94bd144d     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c05514: 36000120     	tbz	w0, #0x0, 0x2c05538 <__start_il2cpp+0x13cf24>
 2c05518: f9402e60     	ldr	x0, [x19, #0x58]
 2c0551c: b4000760     	cbz	x0, 0x2c05608 <__start_il2cpp+0x13cff4>
 2c05520: aa1f03e1     	mov	x1, xzr
 2c05524: 94bce90e     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c05528: b4000700     	cbz	x0, 0x2c05608 <__start_il2cpp+0x13cff4>
 2c0552c: aa1f03e1     	mov	x1, xzr
 2c05530: 94bd3ac0     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c05534: 2d088660     	stp	s0, s1, [x19, #0x44]
 2c05538: 3940ea68     	ldrb	w8, [x19, #0x3a]
 2c0553c: 34000088     	cbz	w8, 0x2c0554c <__start_il2cpp+0x13cf38>
 2c05540: aa1303e0     	mov	x0, x19
 2c05544: 97fffde2     	bl	0x2c04ccc <__start_il2cpp+0x13c6b8>
 2c05548: 14000027     	b	0x2c055e4 <__start_il2cpp+0x13cfd0>
 2c0554c: f94002a0     	ldr	x0, [x21]
 2c05550: f9402a74     	ldr	x20, [x19, #0x50]
 2c05554: b940e408     	ldr	w8, [x0, #0xe4]
 2c05558: 35000048     	cbnz	w8, 0x2c05560 <__start_il2cpp+0x13cf4c>
 2c0555c: 97f74680     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05560: aa1403e0     	mov	x0, x20
 2c05564: aa1f03e1     	mov	x1, xzr
 2c05568: 94bd1437     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0556c: 360003c0     	tbz	w0, #0x0, 0x2c055e4 <__start_il2cpp+0x13cfd0>
 2c05570: f9400a74     	ldr	x20, [x19, #0x10]
 2c05574: b40004b4     	cbz	x20, 0x2c05608 <__start_il2cpp+0x13cff4>
 2c05578: 9001b7aa     	adrp	x10, 0x62f9000
 2c0557c: f9400288     	ldr	x8, [x20]
 2c05580: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c05584: f9402a75     	ldr	x21, [x19, #0x50]
 2c05588: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0558c: f9400141     	ldr	x1, [x10]
 2c05590: b4000129     	cbz	x9, 0x2c055b4 <__start_il2cpp+0x13cfa0>
 2c05594: f940590a     	ldr	x10, [x8, #0xb0]
 2c05598: 9100214a     	add	x10, x10, #0x8
 2c0559c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c055a0: eb01017f     	cmp	x11, x1
 2c055a4: 54000100     	b.eq	0x2c055c4 <__start_il2cpp+0x13cfb0>
 2c055a8: f1000529     	subs	x9, x9, #0x1
 2c055ac: 9100414a     	add	x10, x10, #0x10
 2c055b0: 54ffff61     	b.ne	0x2c0559c <__start_il2cpp+0x13cf88>
 2c055b4: aa1403e0     	mov	x0, x20
 2c055b8: 52800042     	mov	w2, #0x2                // =2
 2c055bc: 97f8236a     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c055c0: 14000005     	b	0x2c055d4 <__start_il2cpp+0x13cfc0>
 2c055c4: b9400149     	ldr	w9, [x10]
 2c055c8: 11000929     	add	w9, w9, #0x2
 2c055cc: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c055d0: 9104e100     	add	x0, x8, #0x138
 2c055d4: a9400808     	ldp	x8, x2, [x0]
 2c055d8: aa1403e0     	mov	x0, x20
 2c055dc: aa1503e1     	mov	x1, x21
 2c055e0: d63f0100     	blr	x8
 2c055e4: f8050e7f     	str	xzr, [x19, #0x50]!
 2c055e8: aa1303e0     	mov	x0, x19
 2c055ec: aa1f03e1     	mov	x1, xzr
 2c055f0: 97f745e7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c055f4: 781e927f     	sturh	wzr, [x19, #-0x17]
 2c055f8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c055fc: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c05600: 9100c3ff     	add	sp, sp, #0x30
 2c05604: d65f03c0     	ret
 2c05608: 97f746a0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void ReleaseItemClosestEmpty()
# VA 0x2c0560c .. 0x2c05934 (next mapped method entry)
 2c0560c: 6dbb23e9     	stp	d9, d8, [sp, #-0x50]!
 2c05610: f9000bfe     	str	x30, [sp, #0x10]
 2c05614: a9025ff8     	stp	x24, x23, [sp, #0x20]
 2c05618: a90357f6     	stp	x22, x21, [sp, #0x30]
 2c0561c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2c05620: b001d874     	adrp	x20, 0x6712000
 2c05624: aa0003f3     	mov	x19, x0
 2c05628: 396e8e88     	ldrb	w8, [x20, #0xba3]
 2c0562c: 370003c8     	tbnz	w8, #0x0, 0x2c056a4 <__start_il2cpp+0x13d090>
 2c05630: f001b7a0     	adrp	x0, 0x62fc000
 2c05634: f9474400     	ldr	x0, [x0, #0xe88]
 2c05638: 97f745ea     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0563c: f001b7a0     	adrp	x0, 0x62fc000
 2c05640: f9474800     	ldr	x0, [x0, #0xe90]
 2c05644: 97f745e7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05648: f001b7a0     	adrp	x0, 0x62fc000
 2c0564c: f9474c00     	ldr	x0, [x0, #0xe98]
 2c05650: 97f745e4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05654: 9001b7a0     	adrp	x0, 0x62f9000
 2c05658: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0565c: 97f745e1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05660: f001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05664: f9478c00     	ldr	x0, [x0, #0xf18]
 2c05668: 97f745de     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0566c: f001b7a0     	adrp	x0, 0x62fc000
 2c05670: f9472800     	ldr	x0, [x0, #0xe50]
 2c05674: 97f745db     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05678: f001b7a0     	adrp	x0, 0x62fc000
 2c0567c: f9475000     	ldr	x0, [x0, #0xea0]
 2c05680: 97f745d8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05684: f001b7a0     	adrp	x0, 0x62fc000
 2c05688: f9473c00     	ldr	x0, [x0, #0xe78]
 2c0568c: 97f745d5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05690: f001b7a0     	adrp	x0, 0x62fc000
 2c05694: f9475400     	ldr	x0, [x0, #0xea8]
 2c05698: 97f745d2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0569c: 52800028     	mov	w8, #0x1                // =1
 2c056a0: 392e8e88     	strb	w8, [x20, #0xba3]
 2c056a4: aa1f03e0     	mov	x0, xzr
 2c056a8: f9000fff     	str	xzr, [sp, #0x18]
 2c056ac: 94be71d1     	bl	0x5ba1df0 <__start_il2cpp+0x30d97dc>
 2c056b0: f9400e60     	ldr	x0, [x19, #0x18]
 2c056b4: b40013e0     	cbz	x0, 0x2c05930 <__start_il2cpp+0x13d31c>
 2c056b8: aa1f03e1     	mov	x1, xzr
 2c056bc: 97fe7b8f     	bl	0x2ba44f8 <__start_il2cpp+0xdbee4>
 2c056c0: f9402e60     	ldr	x0, [x19, #0x58]
 2c056c4: 2d088660     	stp	s0, s1, [x19, #0x44]
 2c056c8: b4001340     	cbz	x0, 0x2c05930 <__start_il2cpp+0x13d31c>
 2c056cc: f9400008     	ldr	x8, [x0]
 2c056d0: f001b7b4     	adrp	x20, 0x62fc000
 2c056d4: f9472a94     	ldr	x20, [x20, #0xe50]
 2c056d8: a95e8509     	ldp	x9, x1, [x8, #0x1e8]
 2c056dc: d63f0120     	blr	x9
 2c056e0: f9400280     	ldr	x0, [x20]
 2c056e4: 2d48a668     	ldp	s8, s9, [x19, #0x44]
 2c056e8: f9403674     	ldr	x20, [x19, #0x68]
 2c056ec: b940e408     	ldr	w8, [x0, #0xe4]
 2c056f0: 35000048     	cbnz	w8, 0x2c056f8 <__start_il2cpp+0x13d0e4>
 2c056f4: 97f7461a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c056f8: 1e204100     	fmov	s0, s8
 2c056fc: 1e204121     	fmov	s1, s9
 2c05700: aa1403e0     	mov	x0, x20
 2c05704: aa1f03e1     	mov	x1, xzr
 2c05708: 94bead0d     	bl	0x5bb0b3c <__start_il2cpp+0x30e8528>
 2c0570c: 340008e0     	cbz	w0, 0x2c05828 <__start_il2cpp+0x13d214>
 2c05710: f001b7b7     	adrp	x23, 0x62fc000
 2c05714: f9473ef7     	ldr	x23, [x23, #0xe78]
 2c05718: f9403674     	ldr	x20, [x19, #0x68]
 2c0571c: f94002e0     	ldr	x0, [x23]
 2c05720: b940e408     	ldr	w8, [x0, #0xe4]
 2c05724: 35000068     	cbnz	w8, 0x2c05730 <__start_il2cpp+0x13d11c>
 2c05728: 97f7460d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0572c: f94002e0     	ldr	x0, [x23]
 2c05730: f9405c08     	ldr	x8, [x0, #0xb8]
 2c05734: f001b7b8     	adrp	x24, 0x62fc000
 2c05738: f9400515     	ldr	x21, [x8, #0x8]
 2c0573c: f9474b18     	ldr	x24, [x24, #0xe90]
 2c05740: b50002f5     	cbnz	x21, 0x2c0579c <__start_il2cpp+0x13d188>
 2c05744: b940e409     	ldr	w9, [x0, #0xe4]
 2c05748: 35000089     	cbnz	w9, 0x2c05758 <__start_il2cpp+0x13d144>
 2c0574c: 97f74604     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05750: f94002e8     	ldr	x8, [x23]
 2c05754: f9405d08     	ldr	x8, [x8, #0xb8]
 2c05758: f001b7a9     	adrp	x9, 0x62fc000
 2c0575c: f9474d29     	ldr	x9, [x9, #0xe98]
 2c05760: f9400116     	ldr	x22, [x8]
 2c05764: f9400120     	ldr	x0, [x9]
 2c05768: 97f74644     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0576c: f001b7a8     	adrp	x8, 0x62fc000
 2c05770: aa1603e1     	mov	x1, x22
 2c05774: aa1f03e3     	mov	x3, xzr
 2c05778: f9475108     	ldr	x8, [x8, #0xea0]
 2c0577c: aa0003f5     	mov	x21, x0
 2c05780: f9400102     	ldr	x2, [x8]
 2c05784: 9482c142     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2c05788: f94002e8     	ldr	x8, [x23]
 2c0578c: aa1503e1     	mov	x1, x21
 2c05790: f9405d00     	ldr	x0, [x8, #0xb8]
 2c05794: f8008c15     	str	x21, [x0, #0x8]!
 2c05798: 97f7457d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0579c: f9400302     	ldr	x2, [x24]
 2c057a0: aa1403e0     	mov	x0, x20
 2c057a4: aa1503e1     	mov	x1, x21
 2c057a8: 9420a5c8     	bl	0x342eec8 <__start_il2cpp+0x9668b4>
 2c057ac: b4000c20     	cbz	x0, 0x2c05930 <__start_il2cpp+0x13d31c>
 2c057b0: f001b7a8     	adrp	x8, 0x62fc000
 2c057b4: 910063e1     	add	x1, sp, #0x18
 2c057b8: f9474508     	ldr	x8, [x8, #0xe88]
 2c057bc: f9400102     	ldr	x2, [x8]
 2c057c0: 941e701b     	bl	0x33a182c <__start_il2cpp+0x8d9218>
 2c057c4: 36000aa0     	tbz	w0, #0x0, 0x2c05918 <__start_il2cpp+0x13d304>
 2c057c8: f9400a74     	ldr	x20, [x19, #0x10]
 2c057cc: b4000b34     	cbz	x20, 0x2c05930 <__start_il2cpp+0x13d31c>
 2c057d0: 9001b7b7     	adrp	x23, 0x62f9000
 2c057d4: f001b7aa     	adrp	x10, 0x62fc000
 2c057d8: f9476ef7     	ldr	x23, [x23, #0xed8]
 2c057dc: f9400288     	ldr	x8, [x20]
 2c057e0: f947554a     	ldr	x10, [x10, #0xea8]
 2c057e4: f9400ff5     	ldr	x21, [sp, #0x18]
 2c057e8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c057ec: f94002e1     	ldr	x1, [x23]
 2c057f0: f9400156     	ldr	x22, [x10]
 2c057f4: b4000129     	cbz	x9, 0x2c05818 <__start_il2cpp+0x13d204>
 2c057f8: f940590a     	ldr	x10, [x8, #0xb0]
 2c057fc: 9100214a     	add	x10, x10, #0x8
 2c05800: f85f814b     	ldur	x11, [x10, #-0x8]
 2c05804: eb01017f     	cmp	x11, x1
 2c05808: 54000180     	b.eq	0x2c05838 <__start_il2cpp+0x13d224>
 2c0580c: f1000529     	subs	x9, x9, #0x1
 2c05810: 9100414a     	add	x10, x10, #0x10
 2c05814: 54ffff61     	b.ne	0x2c05800 <__start_il2cpp+0x13d1ec>
 2c05818: aa1403e0     	mov	x0, x20
 2c0581c: 52800122     	mov	w2, #0x9                // =9
 2c05820: 97f822d1     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c05824: 14000009     	b	0x2c05848 <__start_il2cpp+0x13d234>
 2c05828: aa1303e0     	mov	x0, x19
 2c0582c: aa1f03e1     	mov	x1, xzr
 2c05830: 94000047     	bl	0x2c0594c <__start_il2cpp+0x13d338>
 2c05834: 14000034     	b	0x2c05904 <__start_il2cpp+0x13d2f0>
 2c05838: b9400149     	ldr	w9, [x10]
 2c0583c: 11002529     	add	w9, w9, #0x9
 2c05840: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c05844: 9104e100     	add	x0, x8, #0x138
 2c05848: a9401008     	ldp	x8, x4, [x0]
 2c0584c: aa1403e0     	mov	x0, x20
 2c05850: aa1503e1     	mov	x1, x21
 2c05854: aa1603e2     	mov	x2, x22
 2c05858: 52800143     	mov	w3, #0xa                // =10
 2c0585c: d63f0100     	blr	x8
 2c05860: aa0003f4     	mov	x20, x0
 2c05864: aa1303e0     	mov	x0, x19
 2c05868: aa1403e1     	mov	x1, x20
 2c0586c: 94000038     	bl	0x2c0594c <__start_il2cpp+0x13d338>
 2c05870: f001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05874: f9478d08     	ldr	x8, [x8, #0xf18]
 2c05878: f9400a75     	ldr	x21, [x19, #0x10]
 2c0587c: f9400100     	ldr	x0, [x8]
 2c05880: b940e408     	ldr	w8, [x0, #0xe4]
 2c05884: 35000048     	cbnz	w8, 0x2c0588c <__start_il2cpp+0x13d278>
 2c05888: 97f745b5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0588c: aa1403e0     	mov	x0, x20
 2c05890: aa1f03e1     	mov	x1, xzr
 2c05894: 94bd136c     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c05898: 37000040     	tbnz	w0, #0x0, 0x2c058a0 <__start_il2cpp+0x13d28c>
 2c0589c: f9402a74     	ldr	x20, [x19, #0x50]
 2c058a0: b4000495     	cbz	x21, 0x2c05930 <__start_il2cpp+0x13d31c>
 2c058a4: f94002a8     	ldr	x8, [x21]
 2c058a8: f94002e1     	ldr	x1, [x23]
 2c058ac: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c058b0: b4000129     	cbz	x9, 0x2c058d4 <__start_il2cpp+0x13d2c0>
 2c058b4: f940590a     	ldr	x10, [x8, #0xb0]
 2c058b8: 9100214a     	add	x10, x10, #0x8
 2c058bc: f85f814b     	ldur	x11, [x10, #-0x8]
 2c058c0: eb01017f     	cmp	x11, x1
 2c058c4: 54000100     	b.eq	0x2c058e4 <__start_il2cpp+0x13d2d0>
 2c058c8: f1000529     	subs	x9, x9, #0x1
 2c058cc: 9100414a     	add	x10, x10, #0x10
 2c058d0: 54ffff61     	b.ne	0x2c058bc <__start_il2cpp+0x13d2a8>
 2c058d4: aa1503e0     	mov	x0, x21
 2c058d8: 52800042     	mov	w2, #0x2                // =2
 2c058dc: 97f822a2     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c058e0: 14000005     	b	0x2c058f4 <__start_il2cpp+0x13d2e0>
 2c058e4: b9400149     	ldr	w9, [x10]
 2c058e8: 11000929     	add	w9, w9, #0x2
 2c058ec: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c058f0: 9104e100     	add	x0, x8, #0x138
 2c058f4: a9400808     	ldp	x8, x2, [x0]
 2c058f8: aa1503e0     	mov	x0, x21
 2c058fc: aa1403e1     	mov	x1, x20
 2c05900: d63f0100     	blr	x8
 2c05904: aa1303e0     	mov	x0, x19
 2c05908: aa1f03e1     	mov	x1, xzr
 2c0590c: f8050c1f     	str	xzr, [x0, #0x50]!
 2c05910: 97f7451f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c05914: 7803927f     	sturh	wzr, [x19, #0x39]
 2c05918: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2c0591c: f9400bfe     	ldr	x30, [sp, #0x10]
 2c05920: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2c05924: a9425ff8     	ldp	x24, x23, [sp, #0x20]
 2c05928: 6cc523e9     	ldp	d9, d8, [sp], #0x50
 2c0592c: d65f03c0     	ret
 2c05930: 97f745d6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: UnityEngine.Vector2 GetWorldPositionOfInputPosition(UnityEngine.Vector2 inputPosition)
# VA 0x2c05934 .. 0x2c0594c (next mapped method entry)
 2c05934: f9400c00     	ldr	x0, [x0, #0x18]
 2c05938: b4000060     	cbz	x0, 0x2c05944 <__start_il2cpp+0x13d330>
 2c0593c: aa1f03e1     	mov	x1, xzr
 2c05940: 17fe7aee     	b	0x2ba44f8 <__start_il2cpp+0xdbee4>
 2c05944: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c05948: 97f745d0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void InteractWithBoardSlot(BoardSlot boardSlotToInteract)
# VA 0x2c0594c .. 0x2c05b78 (next mapped method entry)
 2c0594c: fc1d0fe8     	str	d8, [sp, #-0x30]!
 2c05950: f90007fe     	str	x30, [sp, #0x8]
 2c05954: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c05958: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0595c: b001d876     	adrp	x22, 0x6712000
 2c05960: f001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05964: aa0103f4     	mov	x20, x1
 2c05968: 396eaac8     	ldrb	w8, [x22, #0xbaa]
 2c0596c: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c05970: aa0003f3     	mov	x19, x0
 2c05974: 37000128     	tbnz	w8, #0x0, 0x2c05998 <__start_il2cpp+0x13d384>
 2c05978: 9001b7a0     	adrp	x0, 0x62f9000
 2c0597c: f9476c00     	ldr	x0, [x0, #0xed8]
 2c05980: 97f74518     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05984: f001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c05988: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0598c: 97f74515     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05990: 52800028     	mov	w8, #0x1                // =1
 2c05994: 392eaac8     	strb	w8, [x22, #0xbaa]
 2c05998: f94002a0     	ldr	x0, [x21]
 2c0599c: b940e408     	ldr	w8, [x0, #0xe4]
 2c059a0: 35000048     	cbnz	w8, 0x2c059a8 <__start_il2cpp+0x13d394>
 2c059a4: 97f7456e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c059a8: aa1403e0     	mov	x0, x20
 2c059ac: aa1f03e1     	mov	x1, xzr
 2c059b0: aa1f03e2     	mov	x2, xzr
 2c059b4: 94bd0311     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c059b8: 37000200     	tbnz	w0, #0x0, 0x2c059f8 <__start_il2cpp+0x13d3e4>
 2c059bc: f94002a0     	ldr	x0, [x21]
 2c059c0: f9402a75     	ldr	x21, [x19, #0x50]
 2c059c4: b940e408     	ldr	w8, [x0, #0xe4]
 2c059c8: 35000048     	cbnz	w8, 0x2c059d0 <__start_il2cpp+0x13d3bc>
 2c059cc: 97f74564     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c059d0: aa1403e0     	mov	x0, x20
 2c059d4: aa1503e1     	mov	x1, x21
 2c059d8: aa1f03e2     	mov	x2, xzr
 2c059dc: 94bd0307     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c059e0: 370000c0     	tbnz	w0, #0x0, 0x2c059f8 <__start_il2cpp+0x13d3e4>
 2c059e4: b4000c94     	cbz	x20, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c059e8: 3940b288     	ldrb	w8, [x20, #0x2c]
 2c059ec: 34000068     	cbz	w8, 0x2c059f8 <__start_il2cpp+0x13d3e4>
 2c059f0: 3940b688     	ldrb	w8, [x20, #0x2d]
 2c059f4: 34000148     	cbz	w8, 0x2c05a1c <__start_il2cpp+0x13d408>
 2c059f8: d0ff23e8     	adrp	x8, 0x1083000
 2c059fc: a9450662     	ldp	x2, x1, [x19, #0x50]
 2c05a00: bd465100     	ldr	s0, [x8, #0x650]
 2c05a04: aa1303e0     	mov	x0, x19
 2c05a08: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c05a0c: f94007fe     	ldr	x30, [sp, #0x8]
 2c05a10: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c05a14: fc4307e8     	ldr	d8, [sp], #0x30
 2c05a18: 14000376     	b	0x2c067f0 <__start_il2cpp+0x13e1dc>
 2c05a1c: aa1403e0     	mov	x0, x20
 2c05a20: aa1f03e1     	mov	x1, xzr
 2c05a24: 97fe62b9     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2c05a28: 360002c0     	tbz	w0, #0x0, 0x2c05a80 <__start_il2cpp+0x13d46c>
 2c05a2c: f9400a75     	ldr	x21, [x19, #0x10]
 2c05a30: b4000a35     	cbz	x21, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c05a34: 9001b7aa     	adrp	x10, 0x62f9000
 2c05a38: f94002a8     	ldr	x8, [x21]
 2c05a3c: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c05a40: f9402a76     	ldr	x22, [x19, #0x50]
 2c05a44: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c05a48: f9400141     	ldr	x1, [x10]
 2c05a4c: b4000129     	cbz	x9, 0x2c05a70 <__start_il2cpp+0x13d45c>
 2c05a50: f940590a     	ldr	x10, [x8, #0xb0]
 2c05a54: 9100214a     	add	x10, x10, #0x8
 2c05a58: f85f814b     	ldur	x11, [x10, #-0x8]
 2c05a5c: eb01017f     	cmp	x11, x1
 2c05a60: 540006c0     	b.eq	0x2c05b38 <__start_il2cpp+0x13d524>
 2c05a64: f1000529     	subs	x9, x9, #0x1
 2c05a68: 9100414a     	add	x10, x10, #0x10
 2c05a6c: 54ffff61     	b.ne	0x2c05a58 <__start_il2cpp+0x13d444>
 2c05a70: aa1503e0     	mov	x0, x21
 2c05a74: 528000e2     	mov	w2, #0x7                // =7
 2c05a78: 97f8223b     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c05a7c: 14000033     	b	0x2c05b48 <__start_il2cpp+0x13d534>
 2c05a80: f9402e60     	ldr	x0, [x19, #0x58]
 2c05a84: b4000780     	cbz	x0, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c05a88: f9400008     	ldr	x8, [x0]
 2c05a8c: f9401a95     	ldr	x21, [x20, #0x30]
 2c05a90: f9413509     	ldr	x9, [x8, #0x268]
 2c05a94: f9413902     	ldr	x2, [x8, #0x270]
 2c05a98: aa1503e1     	mov	x1, x21
 2c05a9c: d63f0120     	blr	x9
 2c05aa0: 36000160     	tbz	w0, #0x0, 0x2c05acc <__start_il2cpp+0x13d4b8>
 2c05aa4: f9401660     	ldr	x0, [x19, #0x28]
 2c05aa8: b4000660     	cbz	x0, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c05aac: a9450663     	ldp	x3, x1, [x19, #0x50]
 2c05ab0: aa1503e2     	mov	x2, x21
 2c05ab4: aa1403e4     	mov	x4, x20
 2c05ab8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c05abc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c05ac0: f94007fe     	ldr	x30, [sp, #0x8]
 2c05ac4: fc4307e8     	ldr	d8, [sp], #0x30
 2c05ac8: 17fff636     	b	0x2c033a0 <__start_il2cpp+0x13ad8c>
 2c05acc: b4000555     	cbz	x21, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c05ad0: 394102a8     	ldrb	w8, [x21, #0x40]
 2c05ad4: 35fff928     	cbnz	w8, 0x2c059f8 <__start_il2cpp+0x13d3e4>
 2c05ad8: f9402a63     	ldr	x3, [x19, #0x50]
 2c05adc: b40004c3     	cbz	x3, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c05ae0: f9400a62     	ldr	x2, [x19, #0x10]
 2c05ae4: 3900b07f     	strb	wzr, [x3, #0x2c]
 2c05ae8: 3900b29f     	strb	wzr, [x20, #0x2c]
 2c05aec: b4000442     	cbz	x2, 0x2c05b74 <__start_il2cpp+0x13d560>
 2c05af0: 9001b7a8     	adrp	x8, 0x62f9000
 2c05af4: 528000e0     	mov	w0, #0x7                // =7
 2c05af8: aa1403e4     	mov	x4, x20
 2c05afc: f9476d08     	ldr	x8, [x8, #0xed8]
 2c05b00: f9400101     	ldr	x1, [x8]
 2c05b04: 97ea8f75     	bl	0x26a98d8 <.text+0x4778>
 2c05b08: d0ff23e8     	adrp	x8, 0x1083000
 2c05b0c: f9402e61     	ldr	x1, [x19, #0x58]
 2c05b10: aa1303e0     	mov	x0, x19
 2c05b14: bd465108     	ldr	s8, [x8, #0x650]
 2c05b18: aa1403e2     	mov	x2, x20
 2c05b1c: 1e204100     	fmov	s0, s8
 2c05b20: 94000334     	bl	0x2c067f0 <__start_il2cpp+0x13e1dc>
 2c05b24: f9402a62     	ldr	x2, [x19, #0x50]
 2c05b28: aa1303e0     	mov	x0, x19
 2c05b2c: aa1503e1     	mov	x1, x21
 2c05b30: 1e204100     	fmov	s0, s8
 2c05b34: 17ffffb5     	b	0x2c05a08 <__start_il2cpp+0x13d3f4>
 2c05b38: b9400149     	ldr	w9, [x10]
 2c05b3c: 11001d29     	add	w9, w9, #0x7
 2c05b40: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c05b44: 9104e100     	add	x0, x8, #0x138
 2c05b48: a9400c08     	ldp	x8, x3, [x0]
 2c05b4c: aa1503e0     	mov	x0, x21
 2c05b50: aa1603e1     	mov	x1, x22
 2c05b54: aa1403e2     	mov	x2, x20
 2c05b58: d63f0100     	blr	x8
 2c05b5c: d0ff23e8     	adrp	x8, 0x1083000
 2c05b60: f9402e61     	ldr	x1, [x19, #0x58]
 2c05b64: aa1303e0     	mov	x0, x19
 2c05b68: bd465100     	ldr	s0, [x8, #0x650]
 2c05b6c: aa1403e2     	mov	x2, x20
 2c05b70: 17ffffa6     	b	0x2c05a08 <__start_il2cpp+0x13d3f4>
 2c05b74: 97f74545     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void SetDragEnable(System.Boolean status)
# VA 0x2c05b78 .. 0x2c05b80 (next mapped method entry)
 2c05b78: 3900ec01     	strb	w1, [x0, #0x3b]
 2c05b7c: d65f03c0     	ret

# ItemMover :: System.Void OnDestroy()
# VA 0x2c05b80 .. 0x2c05c24 (next mapped method entry)
 2c05b80: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2c05b84: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c05b88: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c05b8c: b001d876     	adrp	x22, 0x6712000
 2c05b90: b001b777     	adrp	x23, 0x62f2000
 2c05b94: f001b7b4     	adrp	x20, 0x62fc000
 2c05b98: d001b775     	adrp	x21, 0x62f3000
 2c05b9c: f943f2f7     	ldr	x23, [x23, #0x7e0]
 2c05ba0: 396e92c8     	ldrb	w8, [x22, #0xba4]
 2c05ba4: f946ee94     	ldr	x20, [x20, #0xdd8]
 2c05ba8: f946c6b5     	ldr	x21, [x21, #0xd88]
 2c05bac: aa0003f3     	mov	x19, x0
 2c05bb0: 37000188     	tbnz	w8, #0x0, 0x2c05be0 <__start_il2cpp+0x13d5cc>
 2c05bb4: b001b760     	adrp	x0, 0x62f2000
 2c05bb8: f943f000     	ldr	x0, [x0, #0x7e0]
 2c05bbc: 97f74489     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05bc0: d001b760     	adrp	x0, 0x62f3000
 2c05bc4: f946c400     	ldr	x0, [x0, #0xd88]
 2c05bc8: 97f74486     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05bcc: f001b7a0     	adrp	x0, 0x62fc000
 2c05bd0: f946ec00     	ldr	x0, [x0, #0xdd8]
 2c05bd4: 97f74483     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05bd8: 52800028     	mov	w8, #0x1                // =1
 2c05bdc: 392e92c8     	strb	w8, [x22, #0xba4]
 2c05be0: f94002e0     	ldr	x0, [x23]
 2c05be4: 97f74525     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05be8: f9400282     	ldr	x2, [x20]
 2c05bec: aa1303e1     	mov	x1, x19
 2c05bf0: aa1f03e3     	mov	x3, xzr
 2c05bf4: aa0003f4     	mov	x20, x0
 2c05bf8: 9491724c     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c05bfc: f94002a0     	ldr	x0, [x21]
 2c05c00: b940e408     	ldr	w8, [x0, #0xe4]
 2c05c04: 35000048     	cbnz	w8, 0x2c05c0c <__start_il2cpp+0x13d5f8>
 2c05c08: 97f744d5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05c0c: aa1403e0     	mov	x0, x20
 2c05c10: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c05c14: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c05c18: aa1f03e1     	mov	x1, xzr
 2c05c1c: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2c05c20: 1408cbe9     	b	0x2e38bc4 <__start_il2cpp+0x3705b0>

# ItemMover :: System.Boolean IsInputExist()
# VA 0x2c05c24 .. 0x2c05c40 (next mapped method entry)
 2c05c24: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c05c28: aa1f03e0     	mov	x0, xzr
 2c05c2c: 94be71a7     	bl	0x5ba22c8 <__start_il2cpp+0x30d9cb4>
 2c05c30: 7100041f     	cmp	w0, #0x1
 2c05c34: 1a9f17e0     	cset	w0, eq
 2c05c38: f84107fe     	ldr	x30, [sp], #0x10
 2c05c3c: d65f03c0     	ret

# ItemMover :: System.Void OnInputDetected()
# VA 0x2c05c40 .. 0x2c06078 (next mapped method entry)
 2c05c40: 6db923e9     	stp	d9, d8, [sp, #-0x70]!
 2c05c44: a9017bfd     	stp	x29, x30, [sp, #0x10]
 2c05c48: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2c05c4c: a90367fa     	stp	x26, x25, [sp, #0x30]
 2c05c50: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c05c54: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c05c58: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c05c5c: b001d874     	adrp	x20, 0x6712000
 2c05c60: aa0003f3     	mov	x19, x0
 2c05c64: 396e9688     	ldrb	w8, [x20, #0xba5]
 2c05c68: 370006c8     	tbnz	w8, #0x0, 0x2c05d40 <__start_il2cpp+0x13d72c>
 2c05c6c: f001b7a0     	adrp	x0, 0x62fc000
 2c05c70: f946f800     	ldr	x0, [x0, #0xdf0]
 2c05c74: 97f7445b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05c78: f001b7a0     	adrp	x0, 0x62fc000
 2c05c7c: f946fc00     	ldr	x0, [x0, #0xdf8]
 2c05c80: 97f74458     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05c84: f001b7a0     	adrp	x0, 0x62fc000
 2c05c88: f9470000     	ldr	x0, [x0, #0xe00]
 2c05c8c: 97f74455     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05c90: f001b7a0     	adrp	x0, 0x62fc000
 2c05c94: f9470400     	ldr	x0, [x0, #0xe08]
 2c05c98: 97f74452     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05c9c: f001b7a0     	adrp	x0, 0x62fc000
 2c05ca0: f9470800     	ldr	x0, [x0, #0xe10]
 2c05ca4: 97f7444f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05ca8: f001b7a0     	adrp	x0, 0x62fc000
 2c05cac: f9470c00     	ldr	x0, [x0, #0xe18]
 2c05cb0: 97f7444c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05cb4: f001b7a0     	adrp	x0, 0x62fc000
 2c05cb8: f9471000     	ldr	x0, [x0, #0xe20]
 2c05cbc: 97f74449     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05cc0: f001b7a0     	adrp	x0, 0x62fc000
 2c05cc4: f9475800     	ldr	x0, [x0, #0xeb0]
 2c05cc8: 97f74446     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05ccc: f001b7a0     	adrp	x0, 0x62fc000
 2c05cd0: f9472400     	ldr	x0, [x0, #0xe48]
 2c05cd4: 97f74443     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05cd8: b001b7a0     	adrp	x0, 0x62fa000
 2c05cdc: f9420c00     	ldr	x0, [x0, #0x418]
 2c05ce0: 97f74440     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05ce4: b001b7a0     	adrp	x0, 0x62fa000
 2c05ce8: f9421000     	ldr	x0, [x0, #0x420]
 2c05cec: 97f7443d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05cf0: f001b7a0     	adrp	x0, 0x62fc000
 2c05cf4: f9472800     	ldr	x0, [x0, #0xe50]
 2c05cf8: 97f7443a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05cfc: f001b7a0     	adrp	x0, 0x62fc000
 2c05d00: f9472c00     	ldr	x0, [x0, #0xe58]
 2c05d04: 97f74437     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05d08: f001b7a0     	adrp	x0, 0x62fc000
 2c05d0c: f9475c00     	ldr	x0, [x0, #0xeb8]
 2c05d10: 97f74434     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05d14: f001b7a0     	adrp	x0, 0x62fc000
 2c05d18: f9476000     	ldr	x0, [x0, #0xec0]
 2c05d1c: 97f74431     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05d20: f001b7a0     	adrp	x0, 0x62fc000
 2c05d24: f9476400     	ldr	x0, [x0, #0xec8]
 2c05d28: 97f7442e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05d2c: f001b7a0     	adrp	x0, 0x62fc000
 2c05d30: f9473c00     	ldr	x0, [x0, #0xe78]
 2c05d34: 97f7442b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c05d38: 52800028     	mov	w8, #0x1                // =1
 2c05d3c: 392e9688     	strb	w8, [x20, #0xba5]
 2c05d40: aa1f03e0     	mov	x0, xzr
 2c05d44: 94be702b     	bl	0x5ba1df0 <__start_il2cpp+0x30d97dc>
 2c05d48: f9400e60     	ldr	x0, [x19, #0x18]
 2c05d4c: b40004a0     	cbz	x0, 0x2c05de0 <__start_il2cpp+0x13d7cc>
 2c05d50: aa1f03e1     	mov	x1, xzr
 2c05d54: 97fe79e9     	bl	0x2ba44f8 <__start_il2cpp+0xdbee4>
 2c05d58: f9403674     	ldr	x20, [x19, #0x68]
 2c05d5c: b4000434     	cbz	x20, 0x2c05de0 <__start_il2cpp+0x13d7cc>
 2c05d60: f001b7b5     	adrp	x21, 0x62fc000
 2c05d64: f001b7bc     	adrp	x28, 0x62fc000
 2c05d68: f001b7b8     	adrp	x24, 0x62fc000
 2c05d6c: f001b7b7     	adrp	x23, 0x62fc000
 2c05d70: f001b7bd     	adrp	x29, 0x62fc000
 2c05d74: f001b7bb     	adrp	x27, 0x62fc000
 2c05d78: f001b7ba     	adrp	x26, 0x62fc000
 2c05d7c: f9472ab5     	ldr	x21, [x21, #0xe50]
 2c05d80: f9473f9c     	ldr	x28, [x28, #0xe78]
 2c05d84: f946ff18     	ldr	x24, [x24, #0xdf8]
 2c05d88: f94706f7     	ldr	x23, [x23, #0xe08]
 2c05d8c: f94727bd     	ldr	x29, [x29, #0xe48]
 2c05d90: f9475b7b     	ldr	x27, [x27, #0xeb0]
 2c05d94: f947035a     	ldr	x26, [x26, #0xe00]
 2c05d98: 1e204008     	fmov	s8, s0
 2c05d9c: 1e204029     	fmov	s9, s1
 2c05da0: aa1f03f6     	mov	x22, xzr
 2c05da4: 52800419     	mov	w25, #0x20              // =32
 2c05da8: b9401a88     	ldr	w8, [x20, #0x18]
 2c05dac: eb28c2df     	cmp	x22, w8, sxtw
 2c05db0: 540001aa     	b.ge	0x2c05de4 <__start_il2cpp+0x13d7d0>
 2c05db4: eb0802df     	cmp	x22, x8
 2c05db8: 540015e2     	b.hs	0x2c06074 <__start_il2cpp+0x13da60>
 2c05dbc: 8b160e88     	add	x8, x20, x22, lsl #3
 2c05dc0: 8b190280     	add	x0, x20, x25
 2c05dc4: aa1f03e1     	mov	x1, xzr
 2c05dc8: f900111f     	str	xzr, [x8, #0x20]
 2c05dcc: 97f743f0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c05dd0: f9403674     	ldr	x20, [x19, #0x68]
 2c05dd4: 910006d6     	add	x22, x22, #0x1
 2c05dd8: 91002339     	add	x25, x25, #0x8
 2c05ddc: b5fffe74     	cbnz	x20, 0x2c05da8 <__start_il2cpp+0x13d794>
 2c05de0: 97f744aa     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c05de4: f94002a0     	ldr	x0, [x21]
 2c05de8: b940e408     	ldr	w8, [x0, #0xe4]
 2c05dec: 35000048     	cbnz	w8, 0x2c05df4 <__start_il2cpp+0x13d7e0>
 2c05df0: 97f7445b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05df4: 1e204100     	fmov	s0, s8
 2c05df8: 1e204121     	fmov	s1, s9
 2c05dfc: aa1403e0     	mov	x0, x20
 2c05e00: aa1f03e1     	mov	x1, xzr
 2c05e04: 94beab4e     	bl	0x5bb0b3c <__start_il2cpp+0x30e8528>
 2c05e08: 34001260     	cbz	w0, 0x2c06054 <__start_il2cpp+0x13da40>
 2c05e0c: f9400380     	ldr	x0, [x28]
 2c05e10: f9403674     	ldr	x20, [x19, #0x68]
 2c05e14: b940e408     	ldr	w8, [x0, #0xe4]
 2c05e18: 35000068     	cbnz	w8, 0x2c05e24 <__start_il2cpp+0x13d810>
 2c05e1c: 97f74450     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05e20: f9400380     	ldr	x0, [x28]
 2c05e24: f9405c08     	ldr	x8, [x0, #0xb8]
 2c05e28: f9400915     	ldr	x21, [x8, #0x10]
 2c05e2c: b50002f5     	cbnz	x21, 0x2c05e88 <__start_il2cpp+0x13d874>
 2c05e30: b940e409     	ldr	w9, [x0, #0xe4]
 2c05e34: 35000089     	cbnz	w9, 0x2c05e44 <__start_il2cpp+0x13d830>
 2c05e38: 97f74449     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05e3c: f9400388     	ldr	x8, [x28]
 2c05e40: f9405d08     	ldr	x8, [x8, #0xb8]
 2c05e44: f001b7a9     	adrp	x9, 0x62fc000
 2c05e48: f9471129     	ldr	x9, [x9, #0xe20]
 2c05e4c: f9400116     	ldr	x22, [x8]
 2c05e50: f9400120     	ldr	x0, [x9]
 2c05e54: 97f74489     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05e58: f001b7a8     	adrp	x8, 0x62fc000
 2c05e5c: aa1603e1     	mov	x1, x22
 2c05e60: aa1f03e3     	mov	x3, xzr
 2c05e64: f9475d08     	ldr	x8, [x8, #0xeb8]
 2c05e68: aa0003f5     	mov	x21, x0
 2c05e6c: f9400102     	ldr	x2, [x8]
 2c05e70: 9482c513     	bl	0x4cb72bc <__start_il2cpp+0x21eeca8>
 2c05e74: f9400388     	ldr	x8, [x28]
 2c05e78: aa1503e1     	mov	x1, x21
 2c05e7c: f9405d00     	ldr	x0, [x8, #0xb8]
 2c05e80: f8010c15     	str	x21, [x0, #0x10]!
 2c05e84: 97f743c2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c05e88: f9400302     	ldr	x2, [x24]
 2c05e8c: aa1403e0     	mov	x0, x20
 2c05e90: aa1503e1     	mov	x1, x21
 2c05e94: 9420d75a     	bl	0x343bbfc <__start_il2cpp+0x9735e8>
 2c05e98: f94002e1     	ldr	x1, [x23]
 2c05e9c: 942118ab     	bl	0x344c148 <__start_il2cpp+0x983b34>
 2c05ea0: f9400388     	ldr	x8, [x28]
 2c05ea4: aa0003f4     	mov	x20, x0
 2c05ea8: b940e509     	ldr	w9, [x8, #0xe4]
 2c05eac: 35000089     	cbnz	w9, 0x2c05ebc <__start_il2cpp+0x13d8a8>
 2c05eb0: aa0803e0     	mov	x0, x8
 2c05eb4: 97f7442a     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05eb8: f9400388     	ldr	x8, [x28]
 2c05ebc: f9405d09     	ldr	x9, [x8, #0xb8]
 2c05ec0: f9400d35     	ldr	x21, [x9, #0x18]
 2c05ec4: b5000315     	cbnz	x21, 0x2c05f24 <__start_il2cpp+0x13d910>
 2c05ec8: b940e50a     	ldr	w10, [x8, #0xe4]
 2c05ecc: 350000aa     	cbnz	w10, 0x2c05ee0 <__start_il2cpp+0x13d8cc>
 2c05ed0: aa0803e0     	mov	x0, x8
 2c05ed4: 97f74422     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05ed8: f9400388     	ldr	x8, [x28]
 2c05edc: f9405d09     	ldr	x9, [x8, #0xb8]
 2c05ee0: f001b7a8     	adrp	x8, 0x62fc000
 2c05ee4: f9472d08     	ldr	x8, [x8, #0xe58]
 2c05ee8: f9400136     	ldr	x22, [x9]
 2c05eec: f9400100     	ldr	x0, [x8]
 2c05ef0: 97f74462     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05ef4: f001b7a8     	adrp	x8, 0x62fc000
 2c05ef8: aa1603e1     	mov	x1, x22
 2c05efc: aa1f03e3     	mov	x3, xzr
 2c05f00: f9476108     	ldr	x8, [x8, #0xec0]
 2c05f04: aa0003f5     	mov	x21, x0
 2c05f08: f9400102     	ldr	x2, [x8]
 2c05f0c: 9446b480     	bl	0x3db310c <__start_il2cpp+0x12eaaf8>
 2c05f10: f9400388     	ldr	x8, [x28]
 2c05f14: aa1503e1     	mov	x1, x21
 2c05f18: f9405d00     	ldr	x0, [x8, #0xb8]
 2c05f1c: f8018c15     	str	x21, [x0, #0x18]!
 2c05f20: 97f7439b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c05f24: b4fff5f4     	cbz	x20, 0x2c05de0 <__start_il2cpp+0x13d7cc>
 2c05f28: f94003a2     	ldr	x2, [x29]
 2c05f2c: aa1403e0     	mov	x0, x20
 2c05f30: aa1503e1     	mov	x1, x21
 2c05f34: 943c9178     	bl	0x3b2a514 <__start_il2cpp+0x1061f00>
 2c05f38: f9400380     	ldr	x0, [x28]
 2c05f3c: b940e408     	ldr	w8, [x0, #0xe4]
 2c05f40: 35000068     	cbnz	w8, 0x2c05f4c <__start_il2cpp+0x13d938>
 2c05f44: 97f74406     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05f48: f9400380     	ldr	x0, [x28]
 2c05f4c: f001b7b8     	adrp	x24, 0x62fc000
 2c05f50: f001b7b9     	adrp	x25, 0x62fc000
 2c05f54: f9470f18     	ldr	x24, [x24, #0xe18]
 2c05f58: f946fb39     	ldr	x25, [x25, #0xdf0]
 2c05f5c: f9405c08     	ldr	x8, [x0, #0xb8]
 2c05f60: f9401115     	ldr	x21, [x8, #0x20]
 2c05f64: b50002f5     	cbnz	x21, 0x2c05fc0 <__start_il2cpp+0x13d9ac>
 2c05f68: b940e409     	ldr	w9, [x0, #0xe4]
 2c05f6c: 35000089     	cbnz	w9, 0x2c05f7c <__start_il2cpp+0x13d968>
 2c05f70: 97f743fb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c05f74: f9400388     	ldr	x8, [x28]
 2c05f78: f9405d08     	ldr	x8, [x8, #0xb8]
 2c05f7c: f001b7a9     	adrp	x9, 0x62fc000
 2c05f80: f9470929     	ldr	x9, [x9, #0xe10]
 2c05f84: f9400116     	ldr	x22, [x8]
 2c05f88: f9400120     	ldr	x0, [x9]
 2c05f8c: 97f7443b     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05f90: f001b7a8     	adrp	x8, 0x62fc000
 2c05f94: aa1603e1     	mov	x1, x22
 2c05f98: aa1f03e3     	mov	x3, xzr
 2c05f9c: f9476508     	ldr	x8, [x8, #0xec8]
 2c05fa0: aa0003f5     	mov	x21, x0
 2c05fa4: f9400102     	ldr	x2, [x8]
 2c05fa8: 9482bf39     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2c05fac: f9400388     	ldr	x8, [x28]
 2c05fb0: aa1503e1     	mov	x1, x21
 2c05fb4: f9405d00     	ldr	x0, [x8, #0xb8]
 2c05fb8: f8020c15     	str	x21, [x0, #0x20]!
 2c05fbc: 97f74374     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c05fc0: f9400322     	ldr	x2, [x25]
 2c05fc4: aa1403e0     	mov	x0, x20
 2c05fc8: aa1503e1     	mov	x1, x21
 2c05fcc: 9420bde2     	bl	0x3435754 <__start_il2cpp+0x96d140>
 2c05fd0: f9400308     	ldr	x8, [x24]
 2c05fd4: aa0003f4     	mov	x20, x0
 2c05fd8: aa0803e0     	mov	x0, x8
 2c05fdc: 97f74427     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c05fe0: f9400362     	ldr	x2, [x27]
 2c05fe4: aa1303e1     	mov	x1, x19
 2c05fe8: aa1f03e3     	mov	x3, xzr
 2c05fec: aa0003f5     	mov	x21, x0
 2c05ff0: 9482c6a4     	bl	0x4cb7a80 <__start_il2cpp+0x21ef46c>
 2c05ff4: f9400342     	ldr	x2, [x26]
 2c05ff8: aa1403e0     	mov	x0, x20
 2c05ffc: aa1503e1     	mov	x1, x21
 2c06000: 94210495     	bl	0x3447254 <__start_il2cpp+0x97ec40>
 2c06004: f94002e1     	ldr	x1, [x23]
 2c06008: 94211850     	bl	0x344c148 <__start_il2cpp+0x983b34>
 2c0600c: b4ffeea0     	cbz	x0, 0x2c05de0 <__start_il2cpp+0x13d7cc>
 2c06010: b9401808     	ldr	w8, [x0, #0x18]
 2c06014: 34000208     	cbz	w8, 0x2c06054 <__start_il2cpp+0x13da40>
 2c06018: 9001b7a8     	adrp	x8, 0x62fa000
 2c0601c: 2a1f03e1     	mov	w1, wzr
 2c06020: f9421108     	ldr	x8, [x8, #0x420]
 2c06024: f9400102     	ldr	x2, [x8]
 2c06028: 943c8ace     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c0602c: b4ffeda0     	cbz	x0, 0x2c05de0 <__start_il2cpp+0x13d7cc>
 2c06030: 3940b008     	ldrb	w8, [x0, #0x2c]
 2c06034: aa0003e1     	mov	x1, x0
 2c06038: 340000e8     	cbz	w8, 0x2c06054 <__start_il2cpp+0x13da40>
 2c0603c: f8050e61     	str	x1, [x19, #0x50]!
 2c06040: aa1303e0     	mov	x0, x19
 2c06044: 2d3da668     	stp	s8, s9, [x19, #-0x14]
 2c06048: 97f74351     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0604c: 52800028     	mov	w8, #0x1                // =1
 2c06050: 381e9268     	sturb	w8, [x19, #-0x17]
 2c06054: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c06058: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c0605c: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c06060: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c06064: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c06068: a9417bfd     	ldp	x29, x30, [sp, #0x10]
 2c0606c: 6cc723e9     	ldp	d9, d8, [sp], #0x70
 2c06070: d65f03c0     	ret
 2c06074: 97f74407     	bl	0x29d7090 <mono_class_get_checked+0x978>

# ItemMover :: System.Void OnInputHold()
# VA 0x2c06078 .. 0x2c06168 (next mapped method entry)
 2c06078: 6dbc2beb     	stp	d11, d10, [sp, #-0x40]!
 2c0607c: 6d0123e9     	stp	d9, d8, [sp, #0x10]
 2c06080: f90013fe     	str	x30, [sp, #0x20]
 2c06084: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c06088: 3940ec08     	ldrb	w8, [x0, #0x3b]
 2c0608c: 34000568     	cbz	w8, 0x2c06138 <__start_il2cpp+0x13db24>
 2c06090: 3940e808     	ldrb	w8, [x0, #0x3a]
 2c06094: aa0003f3     	mov	x19, x0
 2c06098: 340000e8     	cbz	w8, 0x2c060b4 <__start_il2cpp+0x13daa0>
 2c0609c: aa1303e0     	mov	x0, x19
 2c060a0: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c060a4: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2c060a8: f94013fe     	ldr	x30, [sp, #0x20]
 2c060ac: 6cc42beb     	ldp	d11, d10, [sp], #0x40
 2c060b0: 14000132     	b	0x2c06578 <__start_il2cpp+0x13df64>
 2c060b4: aa1f03e0     	mov	x0, xzr
 2c060b8: 94be6f4e     	bl	0x5ba1df0 <__start_il2cpp+0x30d97dc>
 2c060bc: f9400e60     	ldr	x0, [x19, #0x18]
 2c060c0: b4000520     	cbz	x0, 0x2c06164 <__start_il2cpp+0x13db50>
 2c060c4: aa1f03e1     	mov	x1, xzr
 2c060c8: 97fe790c     	bl	0x2ba44f8 <__start_il2cpp+0xdbee4>
 2c060cc: 1e204008     	fmov	s8, s0
 2c060d0: 1e204029     	fmov	s9, s1
 2c060d4: 9001d874     	adrp	x20, 0x6712000
 2c060d8: 2d47ae6a     	ldp	s10, s11, [x19, #0x3c]
 2c060dc: 3970e288     	ldrb	w8, [x20, #0xc38]
 2c060e0: 350000c8     	cbnz	w8, 0x2c060f8 <__start_il2cpp+0x13dae4>
 2c060e4: f001b740     	adrp	x0, 0x62f1000
 2c060e8: f941fc00     	ldr	x0, [x0, #0x3f8]
 2c060ec: 97f7433d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c060f0: 52800028     	mov	w8, #0x1                // =1
 2c060f4: 3930e288     	strb	w8, [x20, #0xc38]
 2c060f8: f001b748     	adrp	x8, 0x62f1000
 2c060fc: f941fd08     	ldr	x8, [x8, #0x3f8]
 2c06100: f9400100     	ldr	x0, [x8]
 2c06104: b940e408     	ldr	w8, [x0, #0xe4]
 2c06108: 35000048     	cbnz	w8, 0x2c06110 <__start_il2cpp+0x13dafc>
 2c0610c: 97f74394     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06110: 1e293960     	fsub	s0, s11, s9
 2c06114: 1e283941     	fsub	s1, s10, s8
 2c06118: b0ff23e8     	adrp	x8, 0x1083000
 2c0611c: 1e210821     	fmul	s1, s1, s1
 2c06120: 1e200800     	fmul	s0, s0, s0
 2c06124: 1e202820     	fadd	s0, s1, s0
 2c06128: bd465101     	ldr	s1, [x8, #0x650]
 2c0612c: 1e21c000     	fsqrt	s0, s0
 2c06130: 1e212000     	fcmp	s0, s1
 2c06134: 540000ca     	b.ge	0x2c0614c <__start_il2cpp+0x13db38>
 2c06138: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0613c: f94013fe     	ldr	x30, [sp, #0x20]
 2c06140: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2c06144: 6cc42beb     	ldp	d11, d10, [sp], #0x40
 2c06148: d65f03c0     	ret
 2c0614c: aa1303e0     	mov	x0, x19
 2c06150: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c06154: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2c06158: f94013fe     	ldr	x30, [sp, #0x20]
 2c0615c: 6cc42beb     	ldp	d11, d10, [sp], #0x40
 2c06160: 14000002     	b	0x2c06168 <__start_il2cpp+0x13db54>
 2c06164: 97f743c9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void OnDragStarting()
# VA 0x2c06168 .. 0x2c06578 (next mapped method entry)
 2c06168: f81c0ffe     	str	x30, [sp, #-0x40]!
 2c0616c: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c06170: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c06174: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c06178: 9001d874     	adrp	x20, 0x6712000
 2c0617c: d001b757     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06180: aa0003f3     	mov	x19, x0
 2c06184: 396e9e88     	ldrb	w8, [x20, #0xba7]
 2c06188: f9478ef7     	ldr	x23, [x23, #0xf18]
 2c0618c: 370002a8     	tbnz	w8, #0x0, 0x2c061e0 <__start_il2cpp+0x13dbcc>
 2c06190: f001b780     	adrp	x0, 0x62f9000
 2c06194: f9476c00     	ldr	x0, [x0, #0xed8]
 2c06198: 97f74312     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0619c: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c061a0: f9478c00     	ldr	x0, [x0, #0xf18]
 2c061a4: 97f7430f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c061a8: d001b7a0     	adrp	x0, 0x62fc000
 2c061ac: f9476800     	ldr	x0, [x0, #0xed0]
 2c061b0: 97f7430c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c061b4: d001b7a0     	adrp	x0, 0x62fc000
 2c061b8: f9476c00     	ldr	x0, [x0, #0xed8]
 2c061bc: 97f74309     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c061c0: d001b7a0     	adrp	x0, 0x62fc000
 2c061c4: f9446800     	ldr	x0, [x0, #0x8d0]
 2c061c8: 97f74306     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c061cc: d001b7a0     	adrp	x0, 0x62fc000
 2c061d0: f9446c00     	ldr	x0, [x0, #0x8d8]
 2c061d4: 97f74303     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c061d8: 52800028     	mov	w8, #0x1                // =1
 2c061dc: 392e9e88     	strb	w8, [x20, #0xba7]
 2c061e0: f94002e0     	ldr	x0, [x23]
 2c061e4: aa1303f5     	mov	x21, x19
 2c061e8: f90007ff     	str	xzr, [sp, #0x8]
 2c061ec: f8450eb4     	ldr	x20, [x21, #0x50]!
 2c061f0: b940e408     	ldr	w8, [x0, #0xe4]
 2c061f4: 35000048     	cbnz	w8, 0x2c061fc <__start_il2cpp+0x13dbe8>
 2c061f8: 97f74359     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c061fc: aa1403e0     	mov	x0, x20
 2c06200: aa1f03e1     	mov	x1, xzr
 2c06204: 94bd1110     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c06208: 360005c0     	tbz	w0, #0x0, 0x2c062c0 <__start_il2cpp+0x13dcac>
 2c0620c: f94002a8     	ldr	x8, [x21]
 2c06210: b4001b28     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06214: f94002e0     	ldr	x0, [x23]
 2c06218: f9401914     	ldr	x20, [x8, #0x30]
 2c0621c: b940e409     	ldr	w9, [x0, #0xe4]
 2c06220: 35000049     	cbnz	w9, 0x2c06228 <__start_il2cpp+0x13dc14>
 2c06224: 97f7434e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06228: aa1403e0     	mov	x0, x20
 2c0622c: aa1f03e1     	mov	x1, xzr
 2c06230: 94bd1105     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c06234: f94002b4     	ldr	x20, [x21]
 2c06238: 360000c0     	tbz	w0, #0x0, 0x2c06250 <__start_il2cpp+0x13dc3c>
 2c0623c: b40019d4     	cbz	x20, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06240: f9401a81     	ldr	x1, [x20, #0x30]
 2c06244: b4001981     	cbz	x1, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06248: 39410028     	ldrb	w8, [x1, #0x40]
 2c0624c: 340004e8     	cbz	w8, 0x2c062e8 <__start_il2cpp+0x13dcd4>
 2c06250: f9400a76     	ldr	x22, [x19, #0x10]
 2c06254: b4001916     	cbz	x22, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06258: f001b78a     	adrp	x10, 0x62f9000
 2c0625c: f94002c8     	ldr	x8, [x22]
 2c06260: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c06264: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c06268: f9400141     	ldr	x1, [x10]
 2c0626c: b4000129     	cbz	x9, 0x2c06290 <__start_il2cpp+0x13dc7c>
 2c06270: f940590a     	ldr	x10, [x8, #0xb0]
 2c06274: 9100214a     	add	x10, x10, #0x8
 2c06278: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0627c: eb01017f     	cmp	x11, x1
 2c06280: 54000100     	b.eq	0x2c062a0 <__start_il2cpp+0x13dc8c>
 2c06284: f1000529     	subs	x9, x9, #0x1
 2c06288: 9100414a     	add	x10, x10, #0x10
 2c0628c: 54ffff61     	b.ne	0x2c06278 <__start_il2cpp+0x13dc64>
 2c06290: aa1603e0     	mov	x0, x22
 2c06294: 52800042     	mov	w2, #0x2                // =2
 2c06298: 97f82033     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0629c: 14000005     	b	0x2c062b0 <__start_il2cpp+0x13dc9c>
 2c062a0: b9400149     	ldr	w9, [x10]
 2c062a4: 11000929     	add	w9, w9, #0x2
 2c062a8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c062ac: 9104e100     	add	x0, x8, #0x138
 2c062b0: a9400808     	ldp	x8, x2, [x0]
 2c062b4: aa1603e0     	mov	x0, x22
 2c062b8: aa1403e1     	mov	x1, x20
 2c062bc: d63f0100     	blr	x8
 2c062c0: aa1503e0     	mov	x0, x21
 2c062c4: aa1f03e1     	mov	x1, xzr
 2c062c8: f9002a7f     	str	xzr, [x19, #0x50]
 2c062cc: 97f742b0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c062d0: 7803927f     	sturh	wzr, [x19, #0x39]
 2c062d4: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c062d8: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c062dc: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c062e0: f84407fe     	ldr	x30, [sp], #0x40
 2c062e4: d65f03c0     	ret
 2c062e8: aa1303f4     	mov	x20, x19
 2c062ec: f8058e81     	str	x1, [x20, #0x58]!
 2c062f0: aa1403e0     	mov	x0, x20
 2c062f4: 97f742a6     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c062f8: f9400280     	ldr	x0, [x20]
 2c062fc: b40013c0     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06300: f9400008     	ldr	x8, [x0]
 2c06304: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2c06308: d63f0120     	blr	x9
 2c0630c: f9401260     	ldr	x0, [x19, #0x20]
 2c06310: b4001320     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06314: f9402e61     	ldr	x1, [x19, #0x58]
 2c06318: aa1f03e2     	mov	x2, xzr
 2c0631c: 9403449e     	bl	0x2cd7594 <__start_il2cpp+0x20ef80>
 2c06320: f9400a76     	ldr	x22, [x19, #0x10]
 2c06324: b4001296     	cbz	x22, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06328: f001b798     	adrp	x24, 0x62f9000
 2c0632c: f94002c8     	ldr	x8, [x22]
 2c06330: f9476f18     	ldr	x24, [x24, #0xed8]
 2c06334: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c06338: f9400301     	ldr	x1, [x24]
 2c0633c: b4000129     	cbz	x9, 0x2c06360 <__start_il2cpp+0x13dd4c>
 2c06340: f940590a     	ldr	x10, [x8, #0xb0]
 2c06344: 9100214a     	add	x10, x10, #0x8
 2c06348: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0634c: eb01017f     	cmp	x11, x1
 2c06350: 54000100     	b.eq	0x2c06370 <__start_il2cpp+0x13dd5c>
 2c06354: f1000529     	subs	x9, x9, #0x1
 2c06358: 9100414a     	add	x10, x10, #0x10
 2c0635c: 54ffff61     	b.ne	0x2c06348 <__start_il2cpp+0x13dd34>
 2c06360: aa1603e0     	mov	x0, x22
 2c06364: 52800162     	mov	w2, #0xb                // =11
 2c06368: 97f81fff     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0636c: 14000005     	b	0x2c06380 <__start_il2cpp+0x13dd6c>
 2c06370: b9400149     	ldr	w9, [x10]
 2c06374: 11002d29     	add	w9, w9, #0xb
 2c06378: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0637c: 9104e100     	add	x0, x8, #0x138
 2c06380: a9400408     	ldp	x8, x1, [x0]
 2c06384: aa1603e0     	mov	x0, x22
 2c06388: d63f0100     	blr	x8
 2c0638c: b4000f40     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06390: aa1f03e1     	mov	x1, xzr
 2c06394: 97fe66df     	bl	0x2b9ff10 <__start_il2cpp+0xd78fc>
 2c06398: f9400a76     	ldr	x22, [x19, #0x10]
 2c0639c: b4000ed6     	cbz	x22, 0x2c06574 <__start_il2cpp+0x13df60>
 2c063a0: f94002c8     	ldr	x8, [x22]
 2c063a4: f9400301     	ldr	x1, [x24]
 2c063a8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c063ac: b4000129     	cbz	x9, 0x2c063d0 <__start_il2cpp+0x13ddbc>
 2c063b0: f940590a     	ldr	x10, [x8, #0xb0]
 2c063b4: 9100214a     	add	x10, x10, #0x8
 2c063b8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c063bc: eb01017f     	cmp	x11, x1
 2c063c0: 54000100     	b.eq	0x2c063e0 <__start_il2cpp+0x13ddcc>
 2c063c4: f1000529     	subs	x9, x9, #0x1
 2c063c8: 9100414a     	add	x10, x10, #0x10
 2c063cc: 54ffff61     	b.ne	0x2c063b8 <__start_il2cpp+0x13dda4>
 2c063d0: aa1603e0     	mov	x0, x22
 2c063d4: 52800062     	mov	w2, #0x3                // =3
 2c063d8: 97f81fe3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c063dc: 14000005     	b	0x2c063f0 <__start_il2cpp+0x13dddc>
 2c063e0: b9400149     	ldr	w9, [x10]
 2c063e4: 11000d29     	add	w9, w9, #0x3
 2c063e8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c063ec: 9104e100     	add	x0, x8, #0x138
 2c063f0: a9400408     	ldp	x8, x1, [x0]
 2c063f4: aa1603e0     	mov	x0, x22
 2c063f8: d63f0100     	blr	x8
 2c063fc: f94002a8     	ldr	x8, [x21]
 2c06400: b4000ba8     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06404: f9400289     	ldr	x9, [x20]
 2c06408: 3900b11f     	strb	wzr, [x8, #0x2c]
 2c0640c: b4000b49     	cbz	x9, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06410: f9403120     	ldr	x0, [x9, #0x60]
 2c06414: b4000b00     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06418: aa1f03e1     	mov	x1, xzr
 2c0641c: 94010853     	bl	0x2c48568 <__start_il2cpp+0x17ff54>
 2c06420: aa1303f6     	mov	x22, x19
 2c06424: aa0003e1     	mov	x1, x0
 2c06428: f8060ec0     	str	x0, [x22, #0x60]!
 2c0642c: aa1603e0     	mov	x0, x22
 2c06430: 97f74257     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c06434: f85f82c8     	ldur	x8, [x22, #-0x8]
 2c06438: b40009e8     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c0643c: d001b7a9     	adrp	x9, 0x62fc000
 2c06440: aa1f03e2     	mov	x2, xzr
 2c06444: f9476d29     	ldr	x9, [x9, #0xed8]
 2c06448: f94002c0     	ldr	x0, [x22]
 2c0644c: f9403115     	ldr	x21, [x8, #0x60]
 2c06450: f9400121     	ldr	x1, [x9]
 2c06454: 948d8a79     	bl	0x4f68e38 <__start_il2cpp+0x24a0824>
 2c06458: b40008f5     	cbz	x21, 0x2c06574 <__start_il2cpp+0x13df60>
 2c0645c: d001b7a8     	adrp	x8, 0x62fc000
 2c06460: d001b7b6     	adrp	x22, 0x62fc000
 2c06464: 7200001f     	tst	w0, #0x1
 2c06468: f9446d08     	ldr	x8, [x8, #0x8d8]
 2c0646c: f9446ad6     	ldr	x22, [x22, #0x8d0]
 2c06470: aa1503e0     	mov	x0, x21
 2c06474: aa1f03e2     	mov	x2, xzr
 2c06478: 9a961108     	csel	x8, x8, x22, ne
 2c0647c: f9400101     	ldr	x1, [x8]
 2c06480: 94010844     	bl	0x2c48590 <__start_il2cpp+0x17ff7c>
 2c06484: f9400288     	ldr	x8, [x20]
 2c06488: b4000768     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c0648c: f9403100     	ldr	x0, [x8, #0x60]
 2c06490: b4000720     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06494: 52800021     	mov	w1, #0x1                // =1
 2c06498: aa1f03e2     	mov	x2, xzr
 2c0649c: 9401081b     	bl	0x2c48508 <__start_il2cpp+0x17fef4>
 2c064a0: f9400288     	ldr	x8, [x20]
 2c064a4: b4000688     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c064a8: f94002e0     	ldr	x0, [x23]
 2c064ac: f9404115     	ldr	x21, [x8, #0x80]
 2c064b0: b940e409     	ldr	w9, [x0, #0xe4]
 2c064b4: 35000049     	cbnz	w9, 0x2c064bc <__start_il2cpp+0x13dea8>
 2c064b8: 97f742a9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c064bc: aa1503e0     	mov	x0, x21
 2c064c0: aa1f03e1     	mov	x1, xzr
 2c064c4: 94bd1060     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c064c8: 36000380     	tbz	w0, #0x0, 0x2c06538 <__start_il2cpp+0x13df24>
 2c064cc: f9400288     	ldr	x8, [x20]
 2c064d0: b4000528     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c064d4: f9404108     	ldr	x8, [x8, #0x80]
 2c064d8: b40004e8     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c064dc: f9401500     	ldr	x0, [x8, #0x28]
 2c064e0: b40004a0     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c064e4: 52800021     	mov	w1, #0x1                // =1
 2c064e8: aa1f03e2     	mov	x2, xzr
 2c064ec: 94c8bab5     	bl	0x5e34fc0 <__start_il2cpp+0x336c9ac>
 2c064f0: f9400288     	ldr	x8, [x20]
 2c064f4: b4000408     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c064f8: f9404108     	ldr	x8, [x8, #0x80]
 2c064fc: b40003c8     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06500: f9401500     	ldr	x0, [x8, #0x28]
 2c06504: b4000380     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06508: f94002c1     	ldr	x1, [x22]
 2c0650c: aa1f03e2     	mov	x2, xzr
 2c06510: 94c8bcde     	bl	0x5e35888 <__start_il2cpp+0x336d274>
 2c06514: f9400288     	ldr	x8, [x20]
 2c06518: b40002e8     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c0651c: f9404108     	ldr	x8, [x8, #0x80]
 2c06520: b40002a8     	cbz	x8, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06524: f9401500     	ldr	x0, [x8, #0x28]
 2c06528: b4000260     	cbz	x0, 0x2c06574 <__start_il2cpp+0x13df60>
 2c0652c: 52800041     	mov	w1, #0x2                // =2
 2c06530: aa1f03e2     	mov	x2, xzr
 2c06534: 94c8bb01     	bl	0x5e35138 <__start_il2cpp+0x336cb24>
 2c06538: f9402e61     	ldr	x1, [x19, #0x58]
 2c0653c: f9401a74     	ldr	x20, [x19, #0x30]
 2c06540: 910023e0     	add	x0, sp, #0x8
 2c06544: f90007e1     	str	x1, [sp, #0x8]
 2c06548: 97f74211     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0654c: b4000154     	cbz	x20, 0x2c06574 <__start_il2cpp+0x13df60>
 2c06550: d001b7a8     	adrp	x8, 0x62fc000
 2c06554: aa1403e0     	mov	x0, x20
 2c06558: f9476908     	ldr	x8, [x8, #0xed0]
 2c0655c: f94007e1     	ldr	x1, [sp, #0x8]
 2c06560: f9400102     	ldr	x2, [x8]
 2c06564: 942873d9     	bl	0x36234c8 <__start_il2cpp+0xb5aeb4>
 2c06568: 52800028     	mov	w8, #0x1                // =1
 2c0656c: 3900ea68     	strb	w8, [x19, #0x3a]
 2c06570: 17ffff59     	b	0x2c062d4 <__start_il2cpp+0x13dcc0>
 2c06574: 97f742c5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void OnDragging()
# VA 0x2c06578 .. 0x2c067b8 (next mapped method entry)
 2c06578: d10183ff     	sub	sp, sp, #0x60
 2c0657c: fd0013ea     	str	d10, [sp, #0x20]
 2c06580: 6d0323e9     	stp	d9, d8, [sp, #0x30]
 2c06584: a90457fe     	stp	x30, x21, [sp, #0x40]
 2c06588: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2c0658c: 9001d875     	adrp	x21, 0x6712000
 2c06590: d001b754     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06594: aa0003f3     	mov	x19, x0
 2c06598: 396ea2a8     	ldrb	w8, [x21, #0xba8]
 2c0659c: f9478e94     	ldr	x20, [x20, #0xf18]
 2c065a0: 37000128     	tbnz	w8, #0x0, 0x2c065c4 <__start_il2cpp+0x13dfb0>
 2c065a4: f001b780     	adrp	x0, 0x62f9000
 2c065a8: f9476c00     	ldr	x0, [x0, #0xed8]
 2c065ac: 97f7420d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c065b0: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c065b4: f9478c00     	ldr	x0, [x0, #0xf18]
 2c065b8: 97f7420a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c065bc: 52800028     	mov	w8, #0x1                // =1
 2c065c0: 392ea2a8     	strb	w8, [x21, #0xba8]
 2c065c4: f9400280     	ldr	x0, [x20]
 2c065c8: f9402e74     	ldr	x20, [x19, #0x58]
 2c065cc: b940e408     	ldr	w8, [x0, #0xe4]
 2c065d0: 35000048     	cbnz	w8, 0x2c065d8 <__start_il2cpp+0x13dfc4>
 2c065d4: 97f74262     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c065d8: aa1403e0     	mov	x0, x20
 2c065dc: aa1f03e1     	mov	x1, xzr
 2c065e0: 94bd1019     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c065e4: 360003a0     	tbz	w0, #0x0, 0x2c06658 <__start_il2cpp+0x13e044>
 2c065e8: aa1f03e0     	mov	x0, xzr
 2c065ec: 94be6e01     	bl	0x5ba1df0 <__start_il2cpp+0x30d97dc>
 2c065f0: f9400e60     	ldr	x0, [x19, #0x18]
 2c065f4: b4000e00     	cbz	x0, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c065f8: aa1f03e1     	mov	x1, xzr
 2c065fc: 97fe77bf     	bl	0x2ba44f8 <__start_il2cpp+0xdbee4>
 2c06600: f9400a74     	ldr	x20, [x19, #0x10]
 2c06604: b4000d94     	cbz	x20, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c06608: f001b795     	adrp	x21, 0x62f9000
 2c0660c: 1e204009     	fmov	s9, s0
 2c06610: 1e204028     	fmov	s8, s1
 2c06614: f9400288     	ldr	x8, [x20]
 2c06618: f9476eb5     	ldr	x21, [x21, #0xed8]
 2c0661c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c06620: f94002a1     	ldr	x1, [x21]
 2c06624: b4000129     	cbz	x9, 0x2c06648 <__start_il2cpp+0x13e034>
 2c06628: f940590a     	ldr	x10, [x8, #0xb0]
 2c0662c: 9100214a     	add	x10, x10, #0x8
 2c06630: f85f814b     	ldur	x11, [x10, #-0x8]
 2c06634: eb01017f     	cmp	x11, x1
 2c06638: 540001c0     	b.eq	0x2c06670 <__start_il2cpp+0x13e05c>
 2c0663c: f1000529     	subs	x9, x9, #0x1
 2c06640: 9100414a     	add	x10, x10, #0x10
 2c06644: 54ffff61     	b.ne	0x2c06630 <__start_il2cpp+0x13e01c>
 2c06648: aa1403e0     	mov	x0, x20
 2c0664c: 528000a2     	mov	w2, #0x5                // =5
 2c06650: 97f81f45     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c06654: 1400000b     	b	0x2c06680 <__start_il2cpp+0x13e06c>
 2c06658: f8050e7f     	str	xzr, [x19, #0x50]!
 2c0665c: aa1303e0     	mov	x0, x19
 2c06660: aa1f03e1     	mov	x1, xzr
 2c06664: 97f741ca     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c06668: 781e927f     	sturh	wzr, [x19, #-0x17]
 2c0666c: 1400004c     	b	0x2c0679c <__start_il2cpp+0x13e188>
 2c06670: b9400149     	ldr	w9, [x10]
 2c06674: 11001529     	add	w9, w9, #0x5
 2c06678: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0667c: 9104e100     	add	x0, x8, #0x138
 2c06680: a9400408     	ldp	x8, x1, [x0]
 2c06684: aa1403e0     	mov	x0, x20
 2c06688: d63f0100     	blr	x8
 2c0668c: f9400a74     	ldr	x20, [x19, #0x10]
 2c06690: b4000934     	cbz	x20, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c06694: 1e20400a     	fmov	s10, s0
 2c06698: f9400288     	ldr	x8, [x20]
 2c0669c: f94002a1     	ldr	x1, [x21]
 2c066a0: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c066a4: b4000129     	cbz	x9, 0x2c066c8 <__start_il2cpp+0x13e0b4>
 2c066a8: f940590a     	ldr	x10, [x8, #0xb0]
 2c066ac: 9100214a     	add	x10, x10, #0x8
 2c066b0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c066b4: eb01017f     	cmp	x11, x1
 2c066b8: 54000100     	b.eq	0x2c066d8 <__start_il2cpp+0x13e0c4>
 2c066bc: f1000529     	subs	x9, x9, #0x1
 2c066c0: 9100414a     	add	x10, x10, #0x10
 2c066c4: 54ffff61     	b.ne	0x2c066b0 <__start_il2cpp+0x13e09c>
 2c066c8: aa1403e0     	mov	x0, x20
 2c066cc: 528000c2     	mov	w2, #0x6                // =6
 2c066d0: 97f81f25     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c066d4: 14000005     	b	0x2c066e8 <__start_il2cpp+0x13e0d4>
 2c066d8: b9400149     	ldr	w9, [x10]
 2c066dc: 11001929     	add	w9, w9, #0x6
 2c066e0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c066e4: 9104e100     	add	x0, x8, #0x138
 2c066e8: a9400408     	ldp	x8, x1, [x0]
 2c066ec: aa1403e0     	mov	x0, x20
 2c066f0: d63f0100     	blr	x8
 2c066f4: 1e202120     	fcmp	s9, s0
 2c066f8: f9402e60     	ldr	x0, [x19, #0x58]
 2c066fc: 1e29cc00     	fcsel	s0, s0, s9, gt
 2c06700: 1e2a2120     	fcmp	s9, s10
 2c06704: 1e204d49     	fcsel	s9, s10, s0, mi
 2c06708: 1e212100     	fcmp	s8, s1
 2c0670c: 1e214d08     	fcsel	s8, s8, s1, mi
 2c06710: b4000520     	cbz	x0, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c06714: aa1f03e1     	mov	x1, xzr
 2c06718: 94bce491     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0671c: b40004c0     	cbz	x0, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c06720: aa1f03e1     	mov	x1, xzr
 2c06724: 94bd3643     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c06728: aa1f03e0     	mov	x0, xzr
 2c0672c: 2d0287e0     	stp	s0, s1, [sp, #0x14]
 2c06730: bd001fe2     	str	s2, [sp, #0x1c]
 2c06734: 2d0123e9     	stp	s9, s8, [sp, #0x8]
 2c06738: b90013ff     	str	wzr, [sp, #0x10]
 2c0673c: 94bd2777     	bl	0x5b50518 <__start_il2cpp+0x3087f04>
 2c06740: b0ff23e8     	adrp	x8, 0x1083000
 2c06744: 1e204002     	fmov	s2, s0
 2c06748: 910053e0     	add	x0, sp, #0x14
 2c0674c: bd478d00     	ldr	s0, [x8, #0x78c]
 2c06750: 52aff008     	mov	w8, #0x7f800000         // =2139095040
 2c06754: 910023e1     	add	x1, sp, #0x8
 2c06758: 1e270101     	fmov	s1, w8
 2c0675c: 9101c262     	add	x2, x19, #0x70
 2c06760: aa1f03e3     	mov	x3, xzr
 2c06764: 94bca8c2     	bl	0x5b30a6c <__start_il2cpp+0x3068458>
 2c06768: f9402e60     	ldr	x0, [x19, #0x58]
 2c0676c: b4000240     	cbz	x0, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c06770: aa1f03e1     	mov	x1, xzr
 2c06774: 1e204008     	fmov	s8, s0
 2c06778: 1e204029     	fmov	s9, s1
 2c0677c: 1e20404a     	fmov	s10, s2
 2c06780: 94bce477     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c06784: b4000180     	cbz	x0, 0x2c067b4 <__start_il2cpp+0x13e1a0>
 2c06788: 1e204100     	fmov	s0, s8
 2c0678c: 1e204121     	fmov	s1, s9
 2c06790: aa1f03e1     	mov	x1, xzr
 2c06794: 1e204142     	fmov	s2, s10
 2c06798: 94bd365d     	bl	0x5b5410c <__start_il2cpp+0x308baf8>
 2c0679c: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2c067a0: fd4013ea     	ldr	d10, [sp, #0x20]
 2c067a4: a94457fe     	ldp	x30, x21, [sp, #0x40]
 2c067a8: 6d4323e9     	ldp	d9, d8, [sp, #0x30]
 2c067ac: 910183ff     	add	sp, sp, #0x60
 2c067b0: d65f03c0     	ret
 2c067b4: 97f74235     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Boolean GetWorldPositionOfInputPosition(out UnityEngine.Vector2 worldPosition)
# VA 0x2c067b8 .. 0x2c067f0 (next mapped method entry)
 2c067b8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c067bc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c067c0: f9400c14     	ldr	x20, [x0, #0x18]
 2c067c4: aa1f03e0     	mov	x0, xzr
 2c067c8: aa0103f3     	mov	x19, x1
 2c067cc: 94be6d89     	bl	0x5ba1df0 <__start_il2cpp+0x30d97dc>
 2c067d0: b40000f4     	cbz	x20, 0x2c067ec <__start_il2cpp+0x13e1d8>
 2c067d4: aa1403e0     	mov	x0, x20
 2c067d8: aa1303e1     	mov	x1, x19
 2c067dc: aa1f03e2     	mov	x2, xzr
 2c067e0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c067e4: f84207fe     	ldr	x30, [sp], #0x20
 2c067e8: 17fe76c0     	b	0x2ba42e8 <__start_il2cpp+0xdbcd4>
 2c067ec: 97f74227     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void MoveItemToBoardSlot(BaseItem item, BoardSlot boardSlot, System.Single duration)
# VA 0x2c067f0 .. 0x2c069a8 (next mapped method entry)
 2c067f0: fc1c0fe8     	str	d8, [sp, #-0x40]!
 2c067f4: a9015ffe     	stp	x30, x23, [sp, #0x10]
 2c067f8: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c067fc: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c06800: 1e204008     	fmov	s8, s0
 2c06804: 9001d873     	adrp	x19, 0x6712000
 2c06808: d001b7b4     	adrp	x20, 0x62fc000
 2c0680c: 396eae68     	ldrb	w8, [x19, #0xbab]
 2c06810: f9477294     	ldr	x20, [x20, #0xee0]
 2c06814: aa0203f6     	mov	x22, x2
 2c06818: aa0103f7     	mov	x23, x1
 2c0681c: aa0003f5     	mov	x21, x0
 2c06820: 37000248     	tbnz	w8, #0x0, 0x2c06868 <__start_il2cpp+0x13e254>
 2c06824: d001b7a0     	adrp	x0, 0x62fc000
 2c06828: f9443800     	ldr	x0, [x0, #0x870]
 2c0682c: 97f7416d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06830: f001b780     	adrp	x0, 0x62f9000
 2c06834: f9474800     	ldr	x0, [x0, #0xe90]
 2c06838: 97f7416a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0683c: f001b740     	adrp	x0, 0x62f1000
 2c06840: f9433c00     	ldr	x0, [x0, #0x678]
 2c06844: 97f74167     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06848: d001b7a0     	adrp	x0, 0x62fc000
 2c0684c: f9477400     	ldr	x0, [x0, #0xee8]
 2c06850: 97f74164     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06854: d001b7a0     	adrp	x0, 0x62fc000
 2c06858: f9477000     	ldr	x0, [x0, #0xee0]
 2c0685c: 97f74161     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06860: 52800028     	mov	w8, #0x1                // =1
 2c06864: 392eae68     	strb	w8, [x19, #0xbab]
 2c06868: f9400280     	ldr	x0, [x20]
 2c0686c: 97f74203     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c06870: aa1f03e1     	mov	x1, xzr
 2c06874: aa0003f4     	mov	x20, x0
 2c06878: 949524b4     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0687c: b4000954     	cbz	x20, 0x2c069a4 <__start_il2cpp+0x13e390>
 2c06880: aa1403f3     	mov	x19, x20
 2c06884: aa1703e1     	mov	x1, x23
 2c06888: f8010e77     	str	x23, [x19, #0x10]!
 2c0688c: aa1303e0     	mov	x0, x19
 2c06890: 97f7413f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c06894: aa1403f7     	mov	x23, x20
 2c06898: aa1603e1     	mov	x1, x22
 2c0689c: f8018ef6     	str	x22, [x23, #0x18]!
 2c068a0: aa1703e0     	mov	x0, x23
 2c068a4: 97f7413a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c068a8: aa1403e0     	mov	x0, x20
 2c068ac: aa1503e1     	mov	x1, x21
 2c068b0: f8020c15     	str	x21, [x0, #0x20]!
 2c068b4: 97f74136     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c068b8: f94002e0     	ldr	x0, [x23]
 2c068bc: b4000740     	cbz	x0, 0x2c069a4 <__start_il2cpp+0x13e390>
 2c068c0: d001b7b5     	adrp	x21, 0x62fc000
 2c068c4: 2a1f03e2     	mov	w2, wzr
 2c068c8: aa1f03e3     	mov	x3, xzr
 2c068cc: f9443ab5     	ldr	x21, [x21, #0x870]
 2c068d0: f9400261     	ldr	x1, [x19]
 2c068d4: 97fe640e     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c068d8: f94002a0     	ldr	x0, [x21]
 2c068dc: 97f741e7     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c068e0: aa1f03e1     	mov	x1, xzr
 2c068e4: aa0003f5     	mov	x21, x0
 2c068e8: 97ffcb21     	bl	0x2bf956c <__start_il2cpp+0x130f58>
 2c068ec: f94002e0     	ldr	x0, [x23]
 2c068f0: b40005a0     	cbz	x0, 0x2c069a4 <__start_il2cpp+0x13e390>
 2c068f4: aa1f03e1     	mov	x1, xzr
 2c068f8: 94bce419     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c068fc: b4000540     	cbz	x0, 0x2c069a4 <__start_il2cpp+0x13e390>
 2c06900: aa1f03e1     	mov	x1, xzr
 2c06904: 94bd35cb     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c06908: b40004f5     	cbz	x21, 0x2c069a4 <__start_il2cpp+0x13e390>
 2c0690c: f001b748     	adrp	x8, 0x62f1000
 2c06910: d001b7b6     	adrp	x22, 0x62fc000
 2c06914: f001b797     	adrp	x23, 0x62f9000
 2c06918: f9433d08     	ldr	x8, [x8, #0x678]
 2c0691c: f94776d6     	ldr	x22, [x22, #0xee8]
 2c06920: bd0012a0     	str	s0, [x21, #0x10]
 2c06924: f9474af7     	ldr	x23, [x23, #0xe90]
 2c06928: 2d028aa1     	stp	s1, s2, [x21, #0x14]
 2c0692c: f9400100     	ldr	x0, [x8]
 2c06930: bd003aa8     	str	s8, [x21, #0x38]
 2c06934: 97f741d1     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c06938: f94002c2     	ldr	x2, [x22]
 2c0693c: aa1403e1     	mov	x1, x20
 2c06940: aa1f03e3     	mov	x3, xzr
 2c06944: aa0003f6     	mov	x22, x0
 2c06948: 940b8d68     	bl	0x2ee9ee8 <__start_il2cpp+0x4218d4>
 2c0694c: aa1503e0     	mov	x0, x21
 2c06950: aa1603e1     	mov	x1, x22
 2c06954: f8028c16     	str	x22, [x0, #0x28]!
 2c06958: 97f7410d     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0695c: f94002e0     	ldr	x0, [x23]
 2c06960: b940e408     	ldr	w8, [x0, #0xe4]
 2c06964: 35000068     	cbnz	w8, 0x2c06970 <__start_il2cpp+0x13e35c>
 2c06968: 97f7417d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0696c: f94002e0     	ldr	x0, [x23]
 2c06970: f9405c08     	ldr	x8, [x0, #0xb8]
 2c06974: f9401108     	ldr	x8, [x8, #0x20]
 2c06978: b4000168     	cbz	x8, 0x2c069a4 <__start_il2cpp+0x13e390>
 2c0697c: f9400261     	ldr	x1, [x19]
 2c06980: aa1503e2     	mov	x2, x21
 2c06984: f9402100     	ldr	x0, [x8, #0x40]
 2c06988: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0698c: f9401503     	ldr	x3, [x8, #0x28]
 2c06990: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c06994: f9400d04     	ldr	x4, [x8, #0x18]
 2c06998: a9415ffe     	ldp	x30, x23, [sp, #0x10]
 2c0699c: fc4407e8     	ldr	d8, [sp], #0x40
 2c069a0: d61f0080     	br	x4
 2c069a4: 97f741b9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void .ctor()
# VA 0x2c069b0 .. 0x2c06a1c (next mapped method entry)
 2c069b0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c069b4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c069b8: 9001d875     	adrp	x21, 0x6712000
 2c069bc: d001b7b4     	adrp	x20, 0x62fc000
 2c069c0: aa0003f3     	mov	x19, x0
 2c069c4: 396eb2a8     	ldrb	w8, [x21, #0xbac]
 2c069c8: f9477a94     	ldr	x20, [x20, #0xef0]
 2c069cc: 370000c8     	tbnz	w8, #0x0, 0x2c069e4 <__start_il2cpp+0x13e3d0>
 2c069d0: d001b7a0     	adrp	x0, 0x62fc000
 2c069d4: f9477800     	ldr	x0, [x0, #0xef0]
 2c069d8: 97f74102     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c069dc: 52800028     	mov	w8, #0x1                // =1
 2c069e0: 392eb2a8     	strb	w8, [x21, #0xbac]
 2c069e4: f9400280     	ldr	x0, [x20]
 2c069e8: 52800028     	mov	w8, #0x1                // =1
 2c069ec: 52800081     	mov	w1, #0x4                // =4
 2c069f0: 3900ee68     	strb	w8, [x19, #0x3b]
 2c069f4: 97f74136     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2c069f8: aa0003e1     	mov	x1, x0
 2c069fc: aa1303e0     	mov	x0, x19
 2c06a00: f8068c01     	str	x1, [x0, #0x68]!
 2c06a04: 97f740e2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c06a08: aa1303e0     	mov	x0, x19
 2c06a0c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06a10: aa1f03e1     	mov	x1, xzr
 2c06a14: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06a18: 1495244c     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemMover :: System.Single <OnInputDetected>b__27_3(BoardSlot slot)
# VA 0x2c06a1c .. 0x2c06ab4 (next mapped method entry)
 2c06a1c: 6dbd2beb     	stp	d11, d10, [sp, #-0x30]!
 2c06a20: 6d0123e9     	stp	d9, d8, [sp, #0x10]
 2c06a24: a9024ffe     	stp	x30, x19, [sp, #0x20]
 2c06a28: b4000441     	cbz	x1, 0x2c06ab0 <__start_il2cpp+0x13e49c>
 2c06a2c: 2d48ac0a     	ldp	s10, s11, [x0, #0x44]
 2c06a30: aa0103e0     	mov	x0, x1
 2c06a34: aa1f03e1     	mov	x1, xzr
 2c06a38: 94bce3c9     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c06a3c: b40003a0     	cbz	x0, 0x2c06ab0 <__start_il2cpp+0x13e49c>
 2c06a40: aa1f03e1     	mov	x1, xzr
 2c06a44: 94bd357b     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c06a48: 1e204008     	fmov	s8, s0
 2c06a4c: 1e204029     	fmov	s9, s1
 2c06a50: 9001d873     	adrp	x19, 0x6712000
 2c06a54: 3970e268     	ldrb	w8, [x19, #0xc38]
 2c06a58: 350000c8     	cbnz	w8, 0x2c06a70 <__start_il2cpp+0x13e45c>
 2c06a5c: f001b740     	adrp	x0, 0x62f1000
 2c06a60: f941fc00     	ldr	x0, [x0, #0x3f8]
 2c06a64: 97f740df     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06a68: 52800028     	mov	w8, #0x1                // =1
 2c06a6c: 3930e268     	strb	w8, [x19, #0xc38]
 2c06a70: f001b748     	adrp	x8, 0x62f1000
 2c06a74: f941fd08     	ldr	x8, [x8, #0x3f8]
 2c06a78: f9400100     	ldr	x0, [x8]
 2c06a7c: b940e408     	ldr	w8, [x0, #0xe4]
 2c06a80: 35000048     	cbnz	w8, 0x2c06a88 <__start_il2cpp+0x13e474>
 2c06a84: 97f74136     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06a88: 1e293960     	fsub	s0, s11, s9
 2c06a8c: 1e283941     	fsub	s1, s10, s8
 2c06a90: a9424ffe     	ldp	x30, x19, [sp, #0x20]
 2c06a94: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2c06a98: 1e210821     	fmul	s1, s1, s1
 2c06a9c: 1e200800     	fmul	s0, s0, s0
 2c06aa0: 1e202820     	fadd	s0, s1, s0
 2c06aa4: 1e21c000     	fsqrt	s0, s0
 2c06aa8: 6cc32beb     	ldp	d11, d10, [sp], #0x30
 2c06aac: d65f03c0     	ret
 2c06ab0: 97f74176     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Boolean <OnDragEnded>b__32_2(BoardSlot slot)
# VA 0x2c06ab4 .. 0x2c06ba0 (next mapped method entry)
 2c06ab4: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c06ab8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c06abc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c06ac0: 9001d875     	adrp	x21, 0x6712000
 2c06ac4: d001b756     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06ac8: aa0103f4     	mov	x20, x1
 2c06acc: 396eb6a8     	ldrb	w8, [x21, #0xbad]
 2c06ad0: f9478ed6     	ldr	x22, [x22, #0xf18]
 2c06ad4: aa0003f3     	mov	x19, x0
 2c06ad8: 370000c8     	tbnz	w8, #0x0, 0x2c06af0 <__start_il2cpp+0x13e4dc>
 2c06adc: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06ae0: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06ae4: 97f740bf     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06ae8: 52800028     	mov	w8, #0x1                // =1
 2c06aec: 392eb6a8     	strb	w8, [x21, #0xbad]
 2c06af0: f94002c0     	ldr	x0, [x22]
 2c06af4: f9402a75     	ldr	x21, [x19, #0x50]
 2c06af8: b940e408     	ldr	w8, [x0, #0xe4]
 2c06afc: 35000048     	cbnz	w8, 0x2c06b04 <__start_il2cpp+0x13e4f0>
 2c06b00: 97f74117     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06b04: aa1403e0     	mov	x0, x20
 2c06b08: aa1503e1     	mov	x1, x21
 2c06b0c: aa1f03e2     	mov	x2, xzr
 2c06b10: 94bcf0b3     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c06b14: 360003a0     	tbz	w0, #0x0, 0x2c06b88 <__start_il2cpp+0x13e574>
 2c06b18: b4000434     	cbz	x20, 0x2c06b9c <__start_il2cpp+0x13e588>
 2c06b1c: f94002c0     	ldr	x0, [x22]
 2c06b20: f9401a95     	ldr	x21, [x20, #0x30]
 2c06b24: b940e408     	ldr	w8, [x0, #0xe4]
 2c06b28: 35000048     	cbnz	w8, 0x2c06b30 <__start_il2cpp+0x13e51c>
 2c06b2c: 97f7410c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06b30: aa1503e0     	mov	x0, x21
 2c06b34: aa1f03e1     	mov	x1, xzr
 2c06b38: aa1f03e2     	mov	x2, xzr
 2c06b3c: 94bcf0a8     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c06b40: 36000240     	tbz	w0, #0x0, 0x2c06b88 <__start_il2cpp+0x13e574>
 2c06b44: f9401a88     	ldr	x8, [x20, #0x30]
 2c06b48: b40002a8     	cbz	x8, 0x2c06b9c <__start_il2cpp+0x13e588>
 2c06b4c: f940290a     	ldr	x10, [x8, #0x50]
 2c06b50: b400026a     	cbz	x10, 0x2c06b9c <__start_il2cpp+0x13e588>
 2c06b54: f9402e69     	ldr	x9, [x19, #0x58]
 2c06b58: b4000229     	cbz	x9, 0x2c06b9c <__start_il2cpp+0x13e588>
 2c06b5c: f940292b     	ldr	x11, [x9, #0x50]
 2c06b60: b40001eb     	cbz	x11, 0x2c06b9c <__start_il2cpp+0x13e588>
 2c06b64: b940314a     	ldr	w10, [x10, #0x30]
 2c06b68: b940316b     	ldr	w11, [x11, #0x30]
 2c06b6c: 6b0b015f     	cmp	w10, w11
 2c06b70: 540000c1     	b.ne	0x2c06b88 <__start_il2cpp+0x13e574>
 2c06b74: b9404508     	ldr	w8, [x8, #0x44]
 2c06b78: b9404529     	ldr	w9, [x9, #0x44]
 2c06b7c: 6b09011f     	cmp	w8, w9
 2c06b80: 1a9f17e0     	cset	w0, eq
 2c06b84: 14000002     	b	0x2c06b8c <__start_il2cpp+0x13e578>
 2c06b88: 2a1f03e0     	mov	w0, wzr
 2c06b8c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c06b90: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c06b94: f84307fe     	ldr	x30, [sp], #0x30
 2c06b98: d65f03c0     	ret
 2c06b9c: 97f7413b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Single <OnDragEnded>b__32_3(BoardSlot slot)
# VA 0x2c06ba0 .. 0x2c06c38 (next mapped method entry)
 2c06ba0: 6dbd2beb     	stp	d11, d10, [sp, #-0x30]!
 2c06ba4: 6d0123e9     	stp	d9, d8, [sp, #0x10]
 2c06ba8: a9024ffe     	stp	x30, x19, [sp, #0x20]
 2c06bac: b4000441     	cbz	x1, 0x2c06c34 <__start_il2cpp+0x13e620>
 2c06bb0: 2d48ac0a     	ldp	s10, s11, [x0, #0x44]
 2c06bb4: aa0103e0     	mov	x0, x1
 2c06bb8: aa1f03e1     	mov	x1, xzr
 2c06bbc: 94bce368     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c06bc0: b40003a0     	cbz	x0, 0x2c06c34 <__start_il2cpp+0x13e620>
 2c06bc4: aa1f03e1     	mov	x1, xzr
 2c06bc8: 94bd351a     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c06bcc: 1e204008     	fmov	s8, s0
 2c06bd0: 1e204029     	fmov	s9, s1
 2c06bd4: 9001d873     	adrp	x19, 0x6712000
 2c06bd8: 3970e268     	ldrb	w8, [x19, #0xc38]
 2c06bdc: 350000c8     	cbnz	w8, 0x2c06bf4 <__start_il2cpp+0x13e5e0>
 2c06be0: f001b740     	adrp	x0, 0x62f1000
 2c06be4: f941fc00     	ldr	x0, [x0, #0x3f8]
 2c06be8: 97f7407e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06bec: 52800028     	mov	w8, #0x1                // =1
 2c06bf0: 3930e268     	strb	w8, [x19, #0xc38]
 2c06bf4: f001b748     	adrp	x8, 0x62f1000
 2c06bf8: f941fd08     	ldr	x8, [x8, #0x3f8]
 2c06bfc: f9400100     	ldr	x0, [x8]
 2c06c00: b940e408     	ldr	w8, [x0, #0xe4]
 2c06c04: 35000048     	cbnz	w8, 0x2c06c0c <__start_il2cpp+0x13e5f8>
 2c06c08: 97f740d5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06c0c: 1e293960     	fsub	s0, s11, s9
 2c06c10: 1e283941     	fsub	s1, s10, s8
 2c06c14: a9424ffe     	ldp	x30, x19, [sp, #0x20]
 2c06c18: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2c06c1c: 1e210821     	fmul	s1, s1, s1
 2c06c20: 1e200800     	fmul	s0, s0, s0
 2c06c24: 1e202820     	fadd	s0, s1, s0
 2c06c28: 1e21c000     	fsqrt	s0, s0
 2c06c2c: 6cc32beb     	ldp	d11, d10, [sp], #0x30
 2c06c30: d65f03c0     	ret
 2c06c34: 97f74115     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover :: System.Void <OnDragEnded>b__32_4()
# VA 0x2c06c38 .. 0x2c06c5c (next mapped method entry)
 2c06c38: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c06c3c: aa0003f3     	mov	x19, x0
 2c06c40: aa1f03e1     	mov	x1, xzr
 2c06c44: f8050e7f     	str	xzr, [x19, #0x50]!
 2c06c48: aa1303e0     	mov	x0, x19
 2c06c4c: 97f74050     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c06c50: 781e927f     	sturh	wzr, [x19, #-0x17]
 2c06c54: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c06c58: d65f03c0     	ret

# ItemMover :: System.Void <OnDragEnded>b__32_5()
# VA 0x2c06c5c .. 0x2c06c64 (next mapped method entry)
 2c06c5c: aa1f03e1     	mov	x1, xzr
 2c06c60: 17fffb3b     	b	0x2c0594c <__start_il2cpp+0x13d338>
