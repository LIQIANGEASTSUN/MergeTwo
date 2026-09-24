
# ChainBreaker :: System.Void OnTapped()
# VA 0x2bf6d60 .. 0x2bf6de4 (next mapped method entry)
 2bf6d60: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf6d64: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf6d68: 9001d8f4     	adrp	x20, 0x6712000
 2bf6d6c: aa0003f3     	mov	x19, x0
 2bf6d70: 396cca88     	ldrb	w8, [x20, #0xb32]
 2bf6d74: 370000c8     	tbnz	w8, #0x0, 0x2bf6d8c <__start_il2cpp+0x12e778>
 2bf6d78: d001b820     	adrp	x0, 0x62fc000
 2bf6d7c: f9439000     	ldr	x0, [x0, #0x720]
 2bf6d80: 97f78018     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6d84: 52800028     	mov	w8, #0x1                // =1
 2bf6d88: 392cca88     	strb	w8, [x20, #0xb32]
 2bf6d8c: aa1303e0     	mov	x0, x19
 2bf6d90: 97fff179     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf6d94: 360001e0     	tbz	w0, #0x0, 0x2bf6dd0 <__start_il2cpp+0x12e7bc>
 2bf6d98: f9407674     	ldr	x20, [x19, #0xe8]
 2bf6d9c: aa1303e0     	mov	x0, x19
 2bf6da0: aa1f03e1     	mov	x1, xzr
 2bf6da4: 94bd22ee     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2bf6da8: b40001c0     	cbz	x0, 0x2bf6de0 <__start_il2cpp+0x12e7cc>
 2bf6dac: aa1f03e1     	mov	x1, xzr
 2bf6db0: 94bd74a0     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2bf6db4: b4000174     	cbz	x20, 0x2bf6de0 <__start_il2cpp+0x12e7cc>
 2bf6db8: d001b828     	adrp	x8, 0x62fc000
 2bf6dbc: aa1403e0     	mov	x0, x20
 2bf6dc0: aa1f03e2     	mov	x2, xzr
 2bf6dc4: f9439108     	ldr	x8, [x8, #0x720]
 2bf6dc8: f9400101     	ldr	x1, [x8]
 2bf6dcc: 9403c090     	bl	0x2ce700c <__start_il2cpp+0x21e9f8>
 2bf6dd0: aa1303e0     	mov	x0, x19
 2bf6dd4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6dd8: f84207fe     	ldr	x30, [sp], #0x20
 2bf6ddc: 17fff739     	b	0x2bf4ac0 <__start_il2cpp+0x12c4ac>
 2bf6de0: 97f780aa     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ChainBreaker :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2bf6de4 .. 0x2bf6eec (next mapped method entry)
 2bf6de4: d102c3ff     	sub	sp, sp, #0xb0
 2bf6de8: f9003bfe     	str	x30, [sp, #0x70]
 2bf6dec: a9085ff8     	stp	x24, x23, [sp, #0x80]
 2bf6df0: a90957f6     	stp	x22, x21, [sp, #0x90]
 2bf6df4: a90a4ff4     	stp	x20, x19, [sp, #0xa0]
 2bf6df8: 9001d8f7     	adrp	x23, 0x6712000
 2bf6dfc: d001b836     	adrp	x22, 0x62fc000
 2bf6e00: aa0103f4     	mov	x20, x1
 2bf6e04: 396ccee9     	ldrb	w9, [x23, #0xb33]
 2bf6e08: f94396d6     	ldr	x22, [x22, #0x728]
 2bf6e0c: aa0003f5     	mov	x21, x0
 2bf6e10: aa0803f3     	mov	x19, x8
 2bf6e14: 37000189     	tbnz	w9, #0x0, 0x2bf6e44 <__start_il2cpp+0x12e830>
 2bf6e18: d001b820     	adrp	x0, 0x62fc000
 2bf6e1c: f942e000     	ldr	x0, [x0, #0x5c0]
 2bf6e20: 97f77ff0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6e24: d001b820     	adrp	x0, 0x62fc000
 2bf6e28: f9439400     	ldr	x0, [x0, #0x728]
 2bf6e2c: 97f77fed     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6e30: d001b820     	adrp	x0, 0x62fc000
 2bf6e34: f942e400     	ldr	x0, [x0, #0x5c8]
 2bf6e38: 97f77fea     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6e3c: 52800028     	mov	w8, #0x1                // =1
 2bf6e40: 392ccee8     	strb	w8, [x23, #0xb33]
 2bf6e44: 6f00e400     	movi	v0.2d, #0000000000000000
 2bf6e48: f90033ff     	str	xzr, [sp, #0x60]
 2bf6e4c: d001b838     	adrp	x24, 0x62fc000
 2bf6e50: 910083f7     	add	x23, sp, #0x20
 2bf6e54: aa1f03e1     	mov	x1, xzr
 2bf6e58: b27d02e0     	orr	x0, x23, #0x8
 2bf6e5c: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2bf6e60: ad0203e0     	stp	q0, q0, [sp, #0x40]
 2bf6e64: f9001fff     	str	xzr, [sp, #0x38]
 2bf6e68: f942e718     	ldr	x24, [x24, #0x5c8]
 2bf6e6c: a902ffff     	stp	xzr, xzr, [sp, #0x28]
 2bf6e70: 97f77fc7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6e74: 9100a2e0     	add	x0, x23, #0x28
 2bf6e78: aa1503e1     	mov	x1, x21
 2bf6e7c: f90027f5     	str	x21, [sp, #0x48]
 2bf6e80: 97f77fc3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6e84: 910082e0     	add	x0, x23, #0x20
 2bf6e88: aa1403e1     	mov	x1, x20
 2bf6e8c: f90023f4     	str	x20, [sp, #0x40]
 2bf6e90: 97f77fbf     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf6e94: f94002c0     	ldr	x0, [x22]
 2bf6e98: 12800009     	mov	w9, #-0x1               // =-1
 2bf6e9c: b90023e9     	str	w9, [sp, #0x20]
 2bf6ea0: f9401c08     	ldr	x8, [x0, #0x38]
 2bf6ea4: b5000048     	cbnz	x8, 0x2bf6eac <__start_il2cpp+0x12e898>
 2bf6ea8: 97f85c77     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2bf6eac: 910083e0     	add	x0, sp, #0x20
 2bf6eb0: 94000081     	bl	0x2bf70b4 <__start_il2cpp+0x12eaa0>
 2bf6eb4: f9400301     	ldr	x1, [x24]
 2bf6eb8: 910023e8     	add	x8, sp, #0x8
 2bf6ebc: b27d02e0     	orr	x0, x23, #0x8
 2bf6ec0: 97fe9519     	bl	0x2b9c324 <__start_il2cpp+0xd3d10>
 2bf6ec4: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf6ec8: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf6ecc: f9403bfe     	ldr	x30, [sp, #0x70]
 2bf6ed0: a94957f6     	ldp	x22, x21, [sp, #0x90]
 2bf6ed4: 3d800260     	str	q0, [x19]
 2bf6ed8: a9485ff8     	ldp	x24, x23, [sp, #0x80]
 2bf6edc: f9000a68     	str	x8, [x19, #0x10]
 2bf6ee0: a94a4ff4     	ldp	x20, x19, [sp, #0xa0]
 2bf6ee4: 9102c3ff     	add	sp, sp, #0xb0
 2bf6ee8: d65f03c0     	ret

# ChainBreaker :: System.Boolean CanMergeWith(BaseItem otherItem)
# VA 0x2bf6eec .. 0x2bf6ff0 (next mapped method entry)
 2bf6eec: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf6ef0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf6ef4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf6ef8: 9001d8f5     	adrp	x21, 0x6712000
 2bf6efc: aa0103f3     	mov	x19, x1
 2bf6f00: aa0003f4     	mov	x20, x0
 2bf6f04: 396cd2a8     	ldrb	w8, [x21, #0xb34]
 2bf6f08: 37000128     	tbnz	w8, #0x0, 0x2bf6f2c <__start_il2cpp+0x12e918>
 2bf6f0c: 9001b820     	adrp	x0, 0x62fa000
 2bf6f10: f9405000     	ldr	x0, [x0, #0xa0]
 2bf6f14: 97f77fb3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6f18: d001b820     	adrp	x0, 0x62fc000
 2bf6f1c: f9439800     	ldr	x0, [x0, #0x730]
 2bf6f20: 97f77fb0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6f24: 52800028     	mov	w8, #0x1                // =1
 2bf6f28: 392cd2a8     	strb	w8, [x21, #0xb34]
 2bf6f2c: b4000613     	cbz	x19, 0x2bf6fec <__start_il2cpp+0x12e9d8>
 2bf6f30: f9402a68     	ldr	x8, [x19, #0x50]
 2bf6f34: b40005c8     	cbz	x8, 0x2bf6fec <__start_il2cpp+0x12e9d8>
 2bf6f38: f9407a80     	ldr	x0, [x20, #0xf0]
 2bf6f3c: b4000580     	cbz	x0, 0x2bf6fec <__start_il2cpp+0x12e9d8>
 2bf6f40: d001b829     	adrp	x9, 0x62fc000
 2bf6f44: f9439929     	ldr	x9, [x9, #0x730]
 2bf6f48: b9403101     	ldr	w1, [x8, #0x30]
 2bf6f4c: f9400122     	ldr	x2, [x9]
 2bf6f50: 943b5f30     	bl	0x3acec10 <__start_il2cpp+0x10065fc>
 2bf6f54: 360000e0     	tbz	w0, #0x0, 0x2bf6f70 <__start_il2cpp+0x12e95c>
 2bf6f58: 2a1f03e8     	mov	w8, wzr
 2bf6f5c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf6f60: 12000100     	and	w0, w8, #0x1
 2bf6f64: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf6f68: f84307fe     	ldr	x30, [sp], #0x30
 2bf6f6c: d65f03c0     	ret
 2bf6f70: f9402a88     	ldr	x8, [x20, #0x50]
 2bf6f74: b40003c8     	cbz	x8, 0x2bf6fec <__start_il2cpp+0x12e9d8>
 2bf6f78: f9402a69     	ldr	x9, [x19, #0x50]
 2bf6f7c: b4000389     	cbz	x9, 0x2bf6fec <__start_il2cpp+0x12e9d8>
 2bf6f80: 9001b82a     	adrp	x10, 0x62fa000
 2bf6f84: f940514a     	ldr	x10, [x10, #0xa0]
 2bf6f88: b9403115     	ldr	w21, [x8, #0x30]
 2bf6f8c: b9403136     	ldr	w22, [x9, #0x30]
 2bf6f90: f9400140     	ldr	x0, [x10]
 2bf6f94: b940e40a     	ldr	w10, [x0, #0xe4]
 2bf6f98: 3500004a     	cbnz	w10, 0x2bf6fa0 <__start_il2cpp+0x12e98c>
 2bf6f9c: 97f77ff0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6fa0: 2a1503e0     	mov	w0, w21
 2bf6fa4: 2a1603e1     	mov	w1, w22
 2bf6fa8: 97fff9eb     	bl	0x2bf5754 <__start_il2cpp+0x12d140>
 2bf6fac: 36000120     	tbz	w0, #0x0, 0x2bf6fd0 <__start_il2cpp+0x12e9bc>
 2bf6fb0: b9404688     	ldr	w8, [x20, #0x44]
 2bf6fb4: b9404669     	ldr	w9, [x19, #0x44]
 2bf6fb8: 6b09011f     	cmp	w8, w9
 2bf6fbc: 54fffce1     	b.ne	0x2bf6f58 <__start_il2cpp+0x12e944>
 2bf6fc0: aa1403e0     	mov	x0, x20
 2bf6fc4: 97fff0ec     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf6fc8: 52000008     	eor	w8, w0, #0x1
 2bf6fcc: 17ffffe4     	b	0x2bf6f5c <__start_il2cpp+0x12e948>
 2bf6fd0: aa1403e0     	mov	x0, x20
 2bf6fd4: 97fff0e8     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf6fd8: 3607fc00     	tbz	w0, #0x0, 0x2bf6f58 <__start_il2cpp+0x12e944>
 2bf6fdc: 39410268     	ldrb	w8, [x19, #0x40]
 2bf6fe0: 7100011f     	cmp	w8, #0x0
 2bf6fe4: 1a9f07e8     	cset	w8, ne
 2bf6fe8: 17ffffdd     	b	0x2bf6f5c <__start_il2cpp+0x12e948>
 2bf6fec: 97f78027     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ChainBreaker :: System.Void .ctor()
# VA 0x2bf6ff0 .. 0x2bf7074 (next mapped method entry)
 2bf6ff0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf6ff4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf6ff8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf6ffc: 9001d8f5     	adrp	x21, 0x6712000
 2bf7000: d001b7d6     	adrp	x22, 0x62f1000
 2bf7004: d001b7d4     	adrp	x20, 0x62f1000
 2bf7008: 396cd6a8     	ldrb	w8, [x21, #0xb35]
 2bf700c: f94102d6     	ldr	x22, [x22, #0x200]
 2bf7010: f940fa94     	ldr	x20, [x20, #0x1f0]
 2bf7014: aa0003f3     	mov	x19, x0
 2bf7018: 37000128     	tbnz	w8, #0x0, 0x2bf703c <__start_il2cpp+0x12ea28>
 2bf701c: d001b7c0     	adrp	x0, 0x62f1000
 2bf7020: f940f800     	ldr	x0, [x0, #0x1f0]
 2bf7024: 97f77f6f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7028: d001b7c0     	adrp	x0, 0x62f1000
 2bf702c: f9410000     	ldr	x0, [x0, #0x200]
 2bf7030: 97f77f6c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf7034: 52800028     	mov	w8, #0x1                // =1
 2bf7038: 392cd6a8     	strb	w8, [x21, #0xb35]
 2bf703c: f94002c0     	ldr	x0, [x22]
 2bf7040: 97f7800e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf7044: f9400281     	ldr	x1, [x20]
 2bf7048: aa0003f4     	mov	x20, x0
 2bf704c: 943b5bed     	bl	0x3ace000 <__start_il2cpp+0x10059ec>
 2bf7050: aa1303e0     	mov	x0, x19
 2bf7054: aa1403e1     	mov	x1, x20
 2bf7058: f80f0c14     	str	x20, [x0, #0xf0]!
 2bf705c: 97f77f4c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf7060: aa1303e0     	mov	x0, x19
 2bf7064: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf7068: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf706c: f84307fe     	ldr	x30, [sp], #0x30
 2bf7070: 17ffee3f     	b	0x2bf296c <__start_il2cpp+0x12a358>

# ChainBreaker :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> <>n__0(BaseItem otherItem)
# VA 0x2bf7074 .. 0x2bf70b4 (next mapped method entry)
 2bf7074: d10103ff     	sub	sp, sp, #0x40
 2bf7078: f90013fe     	str	x30, [sp, #0x20]
 2bf707c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2bf7080: aa0003f3     	mov	x19, x0
 2bf7084: aa0803f4     	mov	x20, x8
 2bf7088: 97fffc8b     	bl	0x2bf62b4 <__start_il2cpp+0x12dca0>
 2bf708c: 910023e8     	add	x8, sp, #0x8
 2bf7090: aa1303e0     	mov	x0, x19
 2bf7094: 97fff0ec     	bl	0x2bf3444 <__start_il2cpp+0x12ae30>
 2bf7098: a941fbe8     	ldp	x8, x30, [sp, #0x18]
 2bf709c: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf70a0: 3d800280     	str	q0, [x20]
 2bf70a4: f9000a88     	str	x8, [x20, #0x10]
 2bf70a8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2bf70ac: 910103ff     	add	sp, sp, #0x40
 2bf70b0: d65f03c0     	ret
