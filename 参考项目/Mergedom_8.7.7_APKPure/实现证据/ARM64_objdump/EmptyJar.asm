
# EmptyJar :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2bf8d38 .. 0x2bf8e3c (next mapped method entry)
 2bf8d38: d10243ff     	sub	sp, sp, #0x90
 2bf8d3c: f9002bfe     	str	x30, [sp, #0x50]
 2bf8d40: a9065ff8     	stp	x24, x23, [sp, #0x60]
 2bf8d44: a90757f6     	stp	x22, x21, [sp, #0x70]
 2bf8d48: a9084ff4     	stp	x20, x19, [sp, #0x80]
 2bf8d4c: d001d8d7     	adrp	x23, 0x6712000
 2bf8d50: 9001b836     	adrp	x22, 0x62fc000
 2bf8d54: aa0103f4     	mov	x20, x1
 2bf8d58: 396d0ee9     	ldrb	w9, [x23, #0xb43]
 2bf8d5c: f943dad6     	ldr	x22, [x22, #0x7b0]
 2bf8d60: aa0003f5     	mov	x21, x0
 2bf8d64: aa0803f3     	mov	x19, x8
 2bf8d68: 37000189     	tbnz	w9, #0x0, 0x2bf8d98 <__start_il2cpp+0x130784>
 2bf8d6c: 9001b820     	adrp	x0, 0x62fc000
 2bf8d70: f942e000     	ldr	x0, [x0, #0x5c0]
 2bf8d74: 97f7781b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8d78: 9001b820     	adrp	x0, 0x62fc000
 2bf8d7c: f943d800     	ldr	x0, [x0, #0x7b0]
 2bf8d80: 97f77818     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8d84: 9001b820     	adrp	x0, 0x62fc000
 2bf8d88: f942e400     	ldr	x0, [x0, #0x5c8]
 2bf8d8c: 97f77815     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8d90: 52800028     	mov	w8, #0x1                // =1
 2bf8d94: 392d0ee8     	strb	w8, [x23, #0xb43]
 2bf8d98: 6f00e400     	movi	v0.2d, #0000000000000000
 2bf8d9c: 9001b838     	adrp	x24, 0x62fc000
 2bf8da0: 910083f7     	add	x23, sp, #0x20
 2bf8da4: b27d02e0     	orr	x0, x23, #0x8
 2bf8da8: aa1f03e1     	mov	x1, xzr
 2bf8dac: ad0103e0     	stp	q0, q0, [sp, #0x20]
 2bf8db0: 3d8013e0     	str	q0, [sp, #0x40]
 2bf8db4: f9001fff     	str	xzr, [sp, #0x38]
 2bf8db8: f942e718     	ldr	x24, [x24, #0x5c8]
 2bf8dbc: a902ffff     	stp	xzr, xzr, [sp, #0x28]
 2bf8dc0: 97f777f3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf8dc4: 910082e0     	add	x0, x23, #0x20
 2bf8dc8: aa1503e1     	mov	x1, x21
 2bf8dcc: f90023f5     	str	x21, [sp, #0x40]
 2bf8dd0: 97f777ef     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf8dd4: 9100a2e0     	add	x0, x23, #0x28
 2bf8dd8: aa1403e1     	mov	x1, x20
 2bf8ddc: f90027f4     	str	x20, [sp, #0x48]
 2bf8de0: 97f777eb     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf8de4: f94002c0     	ldr	x0, [x22]
 2bf8de8: 12800009     	mov	w9, #-0x1               // =-1
 2bf8dec: b90023e9     	str	w9, [sp, #0x20]
 2bf8df0: f9401c08     	ldr	x8, [x0, #0x38]
 2bf8df4: b5000048     	cbnz	x8, 0x2bf8dfc <__start_il2cpp+0x1307e8>
 2bf8df8: 97f854a3     	bl	0x2a0e084 <JNI_OnUnload+0xe234>
 2bf8dfc: 910083e0     	add	x0, sp, #0x20
 2bf8e00: 94000096     	bl	0x2bf9058 <__start_il2cpp+0x130a44>
 2bf8e04: f9400301     	ldr	x1, [x24]
 2bf8e08: 910023e8     	add	x8, sp, #0x8
 2bf8e0c: b27d02e0     	orr	x0, x23, #0x8
 2bf8e10: 97fe8d45     	bl	0x2b9c324 <__start_il2cpp+0xd3d10>
 2bf8e14: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf8e18: f9400fe8     	ldr	x8, [sp, #0x18]
 2bf8e1c: f9402bfe     	ldr	x30, [sp, #0x50]
 2bf8e20: a94757f6     	ldp	x22, x21, [sp, #0x70]
 2bf8e24: 3d800260     	str	q0, [x19]
 2bf8e28: a9465ff8     	ldp	x24, x23, [sp, #0x60]
 2bf8e2c: f9000a68     	str	x8, [x19, #0x10]
 2bf8e30: a9484ff4     	ldp	x20, x19, [sp, #0x80]
 2bf8e34: 910243ff     	add	sp, sp, #0x90
 2bf8e38: d65f03c0     	ret

# EmptyJar :: System.Boolean CanMergeWith(BaseItem otherItem)
# VA 0x2bf8e3c .. 0x2bf8fcc (next mapped method entry)
 2bf8e3c: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2bf8e40: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf8e44: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf8e48: d001d8d5     	adrp	x21, 0x6712000
 2bf8e4c: aa0103f4     	mov	x20, x1
 2bf8e50: aa0003f3     	mov	x19, x0
 2bf8e54: 396d12a8     	ldrb	w8, [x21, #0xb44]
 2bf8e58: 37000248     	tbnz	w8, #0x0, 0x2bf8ea0 <__start_il2cpp+0x13088c>
 2bf8e5c: 9001b820     	adrp	x0, 0x62fc000
 2bf8e60: f9436000     	ldr	x0, [x0, #0x6c0]
 2bf8e64: 97f777df     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8e68: 9001b820     	adrp	x0, 0x62fc000
 2bf8e6c: f9436400     	ldr	x0, [x0, #0x6c8]
 2bf8e70: 97f777dc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8e74: d001b800     	adrp	x0, 0x62fa000
 2bf8e78: f9405000     	ldr	x0, [x0, #0xa0]
 2bf8e7c: 97f777d9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8e80: 9001b820     	adrp	x0, 0x62fc000
 2bf8e84: f943dc00     	ldr	x0, [x0, #0x7b8]
 2bf8e88: 97f777d6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8e8c: 9001b820     	adrp	x0, 0x62fc000
 2bf8e90: f943e000     	ldr	x0, [x0, #0x7c0]
 2bf8e94: 97f777d3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf8e98: 52800028     	mov	w8, #0x1                // =1
 2bf8e9c: 392d12a8     	strb	w8, [x21, #0xb44]
 2bf8ea0: f9402a68     	ldr	x8, [x19, #0x50]
 2bf8ea4: b4000928     	cbz	x8, 0x2bf8fc8 <__start_il2cpp+0x1309b4>
 2bf8ea8: b4000914     	cbz	x20, 0x2bf8fc8 <__start_il2cpp+0x1309b4>
 2bf8eac: f9402a89     	ldr	x9, [x20, #0x50]
 2bf8eb0: b40008c9     	cbz	x9, 0x2bf8fc8 <__start_il2cpp+0x1309b4>
 2bf8eb4: d001b80a     	adrp	x10, 0x62fa000
 2bf8eb8: f940514a     	ldr	x10, [x10, #0xa0]
 2bf8ebc: b9403115     	ldr	w21, [x8, #0x30]
 2bf8ec0: b9403136     	ldr	w22, [x9, #0x30]
 2bf8ec4: f9400140     	ldr	x0, [x10]
 2bf8ec8: b940e40a     	ldr	w10, [x0, #0xe4]
 2bf8ecc: 3500004a     	cbnz	w10, 0x2bf8ed4 <__start_il2cpp+0x1308c0>
 2bf8ed0: 97f77823     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf8ed4: 2a1503e0     	mov	w0, w21
 2bf8ed8: 2a1603e1     	mov	w1, w22
 2bf8edc: 97fff21e     	bl	0x2bf5754 <__start_il2cpp+0x12d140>
 2bf8ee0: 36000600     	tbz	w0, #0x0, 0x2bf8fa0 <__start_il2cpp+0x13098c>
 2bf8ee4: b9404668     	ldr	w8, [x19, #0x44]
 2bf8ee8: b9404689     	ldr	w9, [x20, #0x44]
 2bf8eec: 6b09011f     	cmp	w8, w9
 2bf8ef0: 54000581     	b.ne	0x2bf8fa0 <__start_il2cpp+0x13098c>
 2bf8ef4: f9405e74     	ldr	x20, [x19, #0xb8]
 2bf8ef8: b4000614     	cbz	x20, 0x2bf8fb8 <__start_il2cpp+0x1309a4>
 2bf8efc: 9001b837     	adrp	x23, 0x62fc000
 2bf8f00: f943e2f7     	ldr	x23, [x23, #0x7c0]
 2bf8f04: f94002e0     	ldr	x0, [x23]
 2bf8f08: b940e408     	ldr	w8, [x0, #0xe4]
 2bf8f0c: 35000068     	cbnz	w8, 0x2bf8f18 <__start_il2cpp+0x130904>
 2bf8f10: 97f77813     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf8f14: f94002e0     	ldr	x0, [x23]
 2bf8f18: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf8f1c: f9400515     	ldr	x21, [x8, #0x8]
 2bf8f20: b50002f5     	cbnz	x21, 0x2bf8f7c <__start_il2cpp+0x130968>
 2bf8f24: b940e409     	ldr	w9, [x0, #0xe4]
 2bf8f28: 35000089     	cbnz	w9, 0x2bf8f38 <__start_il2cpp+0x130924>
 2bf8f2c: 97f7780c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf8f30: f94002e8     	ldr	x8, [x23]
 2bf8f34: f9405d08     	ldr	x8, [x8, #0xb8]
 2bf8f38: 9001b829     	adrp	x9, 0x62fc000
 2bf8f3c: f9436529     	ldr	x9, [x9, #0x6c8]
 2bf8f40: f9400116     	ldr	x22, [x8]
 2bf8f44: f9400120     	ldr	x0, [x9]
 2bf8f48: 97f7784c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2bf8f4c: 9001b828     	adrp	x8, 0x62fc000
 2bf8f50: aa1603e1     	mov	x1, x22
 2bf8f54: aa1f03e3     	mov	x3, xzr
 2bf8f58: f943dd08     	ldr	x8, [x8, #0x7b8]
 2bf8f5c: aa0003f5     	mov	x21, x0
 2bf8f60: f9400102     	ldr	x2, [x8]
 2bf8f64: 9482f34a     	bl	0x4cb5c8c <__start_il2cpp+0x21ed678>
 2bf8f68: f94002e8     	ldr	x8, [x23]
 2bf8f6c: aa1503e1     	mov	x1, x21
 2bf8f70: f9405d00     	ldr	x0, [x8, #0xb8]
 2bf8f74: f8008c15     	str	x21, [x0, #0x8]!
 2bf8f78: 97f77785     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bf8f7c: 9001b828     	adrp	x8, 0x62fc000
 2bf8f80: aa1403e0     	mov	x0, x20
 2bf8f84: aa1503e1     	mov	x1, x21
 2bf8f88: f9436108     	ldr	x8, [x8, #0x6c0]
 2bf8f8c: f9400102     	ldr	x2, [x8]
 2bf8f90: 941feeb3     	bl	0x33f4a5c <__start_il2cpp+0x92c448>
 2bf8f94: 36000120     	tbz	w0, #0x0, 0x2bf8fb8 <__start_il2cpp+0x1309a4>
 2bf8f98: 52800028     	mov	w8, #0x1                // =1
 2bf8f9c: 14000002     	b	0x2bf8fa4 <__start_il2cpp+0x130990>
 2bf8fa0: 2a1f03e8     	mov	w8, wzr
 2bf8fa4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf8fa8: 12000100     	and	w0, w8, #0x1
 2bf8fac: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf8fb0: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2bf8fb4: d65f03c0     	ret
 2bf8fb8: aa1303e0     	mov	x0, x19
 2bf8fbc: 97ffe8ee     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf8fc0: 52000008     	eor	w8, w0, #0x1
 2bf8fc4: 17fffff8     	b	0x2bf8fa4 <__start_il2cpp+0x130990>
 2bf8fc8: 97f77830     	bl	0x29d7088 <mono_class_get_checked+0x970>

# EmptyJar :: System.Void .ctor()
# VA 0x2bf8fcc .. 0x2bf8fd0 (next mapped method entry)
 2bf8fcc: 17ffe668     	b	0x2bf296c <__start_il2cpp+0x12a358>
