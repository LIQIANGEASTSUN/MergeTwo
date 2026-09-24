
# PlayerManager :: System.Int32 get_level()
# VA 0x2bb5cbc .. 0x2bb5d18 (next mapped method entry)
 2bb5cbc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb5cc0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb5cc4: b001daf3     	adrp	x19, 0x6712000
 2bb5cc8: b001ba34     	adrp	x20, 0x62fa000
 2bb5ccc: 3965ce68     	ldrb	w8, [x19, #0x973]
 2bb5cd0: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb5cd4: 370000c8     	tbnz	w8, #0x0, 0x2bb5cec <__start_il2cpp+0xed6d8>
 2bb5cd8: b001ba20     	adrp	x0, 0x62fa000
 2bb5cdc: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb5ce0: 97f88440     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5ce4: 52800028     	mov	w8, #0x1                // =1
 2bb5ce8: 3925ce68     	strb	w8, [x19, #0x973]
 2bb5cec: f9400288     	ldr	x8, [x20]
 2bb5cf0: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb5cf4: f9400108     	ldr	x8, [x8]
 2bb5cf8: b40000e8     	cbz	x8, 0x2bb5d14 <__start_il2cpp+0xed700>
 2bb5cfc: f9401500     	ldr	x0, [x8, #0x28]
 2bb5d00: b40000a0     	cbz	x0, 0x2bb5d14 <__start_il2cpp+0xed700>
 2bb5d04: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb5d08: aa1f03e1     	mov	x1, xzr
 2bb5d0c: f84207fe     	ldr	x30, [sp], #0x20
 2bb5d10: 17fe6ac6     	b	0x2b50828 <__start_il2cpp+0x88214>
 2bb5d14: 97f884dd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Int32 get_energyAmount()
# VA 0x2bb5d18 .. 0x2bb5db4 (next mapped method entry)
 2bb5d18: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb5d1c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb5d20: b001daf3     	adrp	x19, 0x6712000
 2bb5d24: b001ba34     	adrp	x20, 0x62fa000
 2bb5d28: 3965b668     	ldrb	w8, [x19, #0x96d]
 2bb5d2c: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb5d30: 37000188     	tbnz	w8, #0x0, 0x2bb5d60 <__start_il2cpp+0xed74c>
 2bb5d34: 9001ba00     	adrp	x0, 0x62f5000
 2bb5d38: f9479c00     	ldr	x0, [x0, #0xf38]
 2bb5d3c: 97f88429     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5d40: 9001ba00     	adrp	x0, 0x62f5000
 2bb5d44: f947a000     	ldr	x0, [x0, #0xf40]
 2bb5d48: 97f88426     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5d4c: b001ba20     	adrp	x0, 0x62fa000
 2bb5d50: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb5d54: 97f88423     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5d58: 52800028     	mov	w8, #0x1                // =1
 2bb5d5c: 3925b668     	strb	w8, [x19, #0x96d]
 2bb5d60: f9400288     	ldr	x8, [x20]
 2bb5d64: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb5d68: f9400108     	ldr	x8, [x8]
 2bb5d6c: b40001c8     	cbz	x8, 0x2bb5da4 <__start_il2cpp+0xed790>
 2bb5d70: f9401500     	ldr	x0, [x8, #0x28]
 2bb5d74: b40001a0     	cbz	x0, 0x2bb5da8 <__start_il2cpp+0xed794>
 2bb5d78: aa1f03e1     	mov	x1, xzr
 2bb5d7c: 97fe6a9f     	bl	0x2b507f8 <__start_il2cpp+0x881e4>
 2bb5d80: 9001ba08     	adrp	x8, 0x62f5000
 2bb5d84: 2a0003e1     	mov	w1, w0
 2bb5d88: 910023e0     	add	x0, sp, #0x8
 2bb5d8c: f947a108     	ldr	x8, [x8, #0xf40]
 2bb5d90: f90007ff     	str	xzr, [sp, #0x8]
 2bb5d94: f9400102     	ldr	x2, [x8]
 2bb5d98: 9444b3df     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bb5d9c: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb5da0: 14000002     	b	0x2bb5da8 <__start_il2cpp+0xed794>
 2bb5da4: 2a1f03e0     	mov	w0, wzr
 2bb5da8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb5dac: f84207fe     	ldr	x30, [sp], #0x20
 2bb5db0: d65f03c0     	ret

# PlayerManager :: System.Int32 get_goldAmount()
# VA 0x2bb5db4 .. 0x2bb5e50 (next mapped method entry)
 2bb5db4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb5db8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb5dbc: b001daf3     	adrp	x19, 0x6712000
 2bb5dc0: b001ba34     	adrp	x20, 0x62fa000
 2bb5dc4: 39658e68     	ldrb	w8, [x19, #0x963]
 2bb5dc8: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb5dcc: 37000188     	tbnz	w8, #0x0, 0x2bb5dfc <__start_il2cpp+0xed7e8>
 2bb5dd0: 9001ba00     	adrp	x0, 0x62f5000
 2bb5dd4: f9479c00     	ldr	x0, [x0, #0xf38]
 2bb5dd8: 97f88402     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5ddc: 9001ba00     	adrp	x0, 0x62f5000
 2bb5de0: f947a000     	ldr	x0, [x0, #0xf40]
 2bb5de4: 97f883ff     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5de8: b001ba20     	adrp	x0, 0x62fa000
 2bb5dec: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb5df0: 97f883fc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5df4: 52800028     	mov	w8, #0x1                // =1
 2bb5df8: 39258e68     	strb	w8, [x19, #0x963]
 2bb5dfc: f9400288     	ldr	x8, [x20]
 2bb5e00: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb5e04: f9400108     	ldr	x8, [x8]
 2bb5e08: b40001c8     	cbz	x8, 0x2bb5e40 <__start_il2cpp+0xed82c>
 2bb5e0c: f9401500     	ldr	x0, [x8, #0x28]
 2bb5e10: b40001a0     	cbz	x0, 0x2bb5e44 <__start_il2cpp+0xed830>
 2bb5e14: aa1f03e1     	mov	x1, xzr
 2bb5e18: 97fe6a66     	bl	0x2b507b0 <__start_il2cpp+0x8819c>
 2bb5e1c: 9001ba08     	adrp	x8, 0x62f5000
 2bb5e20: 2a0003e1     	mov	w1, w0
 2bb5e24: 910023e0     	add	x0, sp, #0x8
 2bb5e28: f947a108     	ldr	x8, [x8, #0xf40]
 2bb5e2c: f90007ff     	str	xzr, [sp, #0x8]
 2bb5e30: f9400102     	ldr	x2, [x8]
 2bb5e34: 9444b3b8     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bb5e38: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb5e3c: 14000002     	b	0x2bb5e44 <__start_il2cpp+0xed830>
 2bb5e40: 2a1f03e0     	mov	w0, wzr
 2bb5e44: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb5e48: f84207fe     	ldr	x30, [sp], #0x20
 2bb5e4c: d65f03c0     	ret

# PlayerManager :: System.Int32 get_expAmount()
# VA 0x2bb5e50 .. 0x2bb5eac (next mapped method entry)
 2bb5e50: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb5e54: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb5e58: b001daf3     	adrp	x19, 0x6712000
 2bb5e5c: b001ba34     	adrp	x20, 0x62fa000
 2bb5e60: 3965be68     	ldrb	w8, [x19, #0x96f]
 2bb5e64: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb5e68: 370000c8     	tbnz	w8, #0x0, 0x2bb5e80 <__start_il2cpp+0xed86c>
 2bb5e6c: b001ba20     	adrp	x0, 0x62fa000
 2bb5e70: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb5e74: 97f883db     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5e78: 52800028     	mov	w8, #0x1                // =1
 2bb5e7c: 3925be68     	strb	w8, [x19, #0x96f]
 2bb5e80: f9400288     	ldr	x8, [x20]
 2bb5e84: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb5e88: f9400108     	ldr	x8, [x8]
 2bb5e8c: b40000e8     	cbz	x8, 0x2bb5ea8 <__start_il2cpp+0xed894>
 2bb5e90: f9401500     	ldr	x0, [x8, #0x28]
 2bb5e94: b40000a0     	cbz	x0, 0x2bb5ea8 <__start_il2cpp+0xed894>
 2bb5e98: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb5e9c: aa1f03e1     	mov	x1, xzr
 2bb5ea0: f84207fe     	ldr	x30, [sp], #0x20
 2bb5ea4: 17fe6a5b     	b	0x2b50810 <__start_il2cpp+0x881fc>
 2bb5ea8: 97f88478     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Int32 get_starAmount()
# VA 0x2bb5eac .. 0x2bb5f48 (next mapped method entry)
 2bb5eac: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb5eb0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb5eb4: b001daf3     	adrp	x19, 0x6712000
 2bb5eb8: b001ba34     	adrp	x20, 0x62fa000
 2bb5ebc: 3965a668     	ldrb	w8, [x19, #0x969]
 2bb5ec0: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb5ec4: 37000188     	tbnz	w8, #0x0, 0x2bb5ef4 <__start_il2cpp+0xed8e0>
 2bb5ec8: 9001ba00     	adrp	x0, 0x62f5000
 2bb5ecc: f9479c00     	ldr	x0, [x0, #0xf38]
 2bb5ed0: 97f883c4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5ed4: 9001ba00     	adrp	x0, 0x62f5000
 2bb5ed8: f947a000     	ldr	x0, [x0, #0xf40]
 2bb5edc: 97f883c1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5ee0: b001ba20     	adrp	x0, 0x62fa000
 2bb5ee4: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb5ee8: 97f883be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5eec: 52800028     	mov	w8, #0x1                // =1
 2bb5ef0: 3925a668     	strb	w8, [x19, #0x969]
 2bb5ef4: f9400288     	ldr	x8, [x20]
 2bb5ef8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb5efc: f9400108     	ldr	x8, [x8]
 2bb5f00: b40001c8     	cbz	x8, 0x2bb5f38 <__start_il2cpp+0xed924>
 2bb5f04: f9401500     	ldr	x0, [x8, #0x28]
 2bb5f08: b40001a0     	cbz	x0, 0x2bb5f3c <__start_il2cpp+0xed928>
 2bb5f0c: aa1f03e1     	mov	x1, xzr
 2bb5f10: 97fe6a2e     	bl	0x2b507c8 <__start_il2cpp+0x881b4>
 2bb5f14: 9001ba08     	adrp	x8, 0x62f5000
 2bb5f18: 2a0003e1     	mov	w1, w0
 2bb5f1c: 910023e0     	add	x0, sp, #0x8
 2bb5f20: f947a108     	ldr	x8, [x8, #0xf40]
 2bb5f24: f90007ff     	str	xzr, [sp, #0x8]
 2bb5f28: f9400102     	ldr	x2, [x8]
 2bb5f2c: 9444b37a     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bb5f30: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb5f34: 14000002     	b	0x2bb5f3c <__start_il2cpp+0xed928>
 2bb5f38: 2a1f03e0     	mov	w0, wzr
 2bb5f3c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb5f40: f84207fe     	ldr	x30, [sp], #0x20
 2bb5f44: d65f03c0     	ret

# PlayerManager :: System.Int32 get_blueStarAmount()
# VA 0x2bb5f48 .. 0x2bb5fe4 (next mapped method entry)
 2bb5f48: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb5f4c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb5f50: b001daf3     	adrp	x19, 0x6712000
 2bb5f54: b001ba34     	adrp	x20, 0x62fa000
 2bb5f58: 3965ae68     	ldrb	w8, [x19, #0x96b]
 2bb5f5c: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb5f60: 37000188     	tbnz	w8, #0x0, 0x2bb5f90 <__start_il2cpp+0xed97c>
 2bb5f64: 9001ba00     	adrp	x0, 0x62f5000
 2bb5f68: f9479c00     	ldr	x0, [x0, #0xf38]
 2bb5f6c: 97f8839d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5f70: 9001ba00     	adrp	x0, 0x62f5000
 2bb5f74: f947a000     	ldr	x0, [x0, #0xf40]
 2bb5f78: 97f8839a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5f7c: b001ba20     	adrp	x0, 0x62fa000
 2bb5f80: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb5f84: 97f88397     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb5f88: 52800028     	mov	w8, #0x1                // =1
 2bb5f8c: 3925ae68     	strb	w8, [x19, #0x96b]
 2bb5f90: f9400288     	ldr	x8, [x20]
 2bb5f94: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb5f98: f9400108     	ldr	x8, [x8]
 2bb5f9c: b40001c8     	cbz	x8, 0x2bb5fd4 <__start_il2cpp+0xed9c0>
 2bb5fa0: f9401500     	ldr	x0, [x8, #0x28]
 2bb5fa4: b40001a0     	cbz	x0, 0x2bb5fd8 <__start_il2cpp+0xed9c4>
 2bb5fa8: aa1f03e1     	mov	x1, xzr
 2bb5fac: 97fe6a0d     	bl	0x2b507e0 <__start_il2cpp+0x881cc>
 2bb5fb0: 9001ba08     	adrp	x8, 0x62f5000
 2bb5fb4: 2a0003e1     	mov	w1, w0
 2bb5fb8: 910023e0     	add	x0, sp, #0x8
 2bb5fbc: f947a108     	ldr	x8, [x8, #0xf40]
 2bb5fc0: f90007ff     	str	xzr, [sp, #0x8]
 2bb5fc4: f9400102     	ldr	x2, [x8]
 2bb5fc8: 9444b353     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bb5fcc: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb5fd0: 14000002     	b	0x2bb5fd8 <__start_il2cpp+0xed9c4>
 2bb5fd4: 2a1f03e0     	mov	w0, wzr
 2bb5fd8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb5fdc: f84207fe     	ldr	x30, [sp], #0x20
 2bb5fe0: d65f03c0     	ret

# PlayerManager :: System.Void Init(GameData gd, KinoaSDK.Services.KinoaPlayerStateService psService)
# VA 0x2bb5ff0 .. 0x2bb6068 (next mapped method entry)
 2bb5ff0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bb5ff4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bb5ff8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bb5ffc: b001daf6     	adrp	x22, 0x6712000
 2bb6000: 9001ba35     	adrp	x21, 0x62fa000
 2bb6004: aa0203f3     	mov	x19, x2
 2bb6008: 396556c8     	ldrb	w8, [x22, #0x955]
 2bb600c: f944eab5     	ldr	x21, [x21, #0x9d0]
 2bb6010: aa0103f4     	mov	x20, x1
 2bb6014: 370000c8     	tbnz	w8, #0x0, 0x2bb602c <__start_il2cpp+0xeda18>
 2bb6018: 9001ba20     	adrp	x0, 0x62fa000
 2bb601c: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6020: 97f88370     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6024: 52800028     	mov	w8, #0x1                // =1
 2bb6028: 392556c8     	strb	w8, [x22, #0x955]
 2bb602c: f94002a8     	ldr	x8, [x21]
 2bb6030: aa1403e1     	mov	x1, x20
 2bb6034: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6038: f9000114     	str	x20, [x8]
 2bb603c: f94002a8     	ldr	x8, [x21]
 2bb6040: f9405d00     	ldr	x0, [x8, #0xb8]
 2bb6044: 97f88352     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2bb6048: f94002a8     	ldr	x8, [x21]
 2bb604c: aa1303e1     	mov	x1, x19
 2bb6050: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bb6054: f9405d00     	ldr	x0, [x8, #0xb8]
 2bb6058: f8008c13     	str	x19, [x0, #0x8]!
 2bb605c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bb6060: f84307fe     	ldr	x30, [sp], #0x30
 2bb6064: 17f8834a     	b	0x29d6d8c <mono_class_get_checked+0x674>

# PlayerManager :: System.Boolean IsPlayerInitialized()
# VA 0x2bb6068 .. 0x2bb60d8 (next mapped method entry)
 2bb6068: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb606c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6070: 9001daf3     	adrp	x19, 0x6712000
 2bb6074: 9001ba34     	adrp	x20, 0x62fa000
 2bb6078: 39655a68     	ldrb	w8, [x19, #0x956]
 2bb607c: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6080: 370000c8     	tbnz	w8, #0x0, 0x2bb6098 <__start_il2cpp+0xeda84>
 2bb6084: 9001ba20     	adrp	x0, 0x62fa000
 2bb6088: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb608c: 97f88355     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6090: 52800028     	mov	w8, #0x1                // =1
 2bb6094: 39255a68     	strb	w8, [x19, #0x956]
 2bb6098: f9400288     	ldr	x8, [x20]
 2bb609c: f9405d09     	ldr	x9, [x8, #0xb8]
 2bb60a0: f9400128     	ldr	x8, [x9]
 2bb60a4: b4000128     	cbz	x8, 0x2bb60c8 <__start_il2cpp+0xedab4>
 2bb60a8: f9400529     	ldr	x9, [x9, #0x8]
 2bb60ac: b40000e9     	cbz	x9, 0x2bb60c8 <__start_il2cpp+0xedab4>
 2bb60b0: f9401500     	ldr	x0, [x8, #0x28]
 2bb60b4: b40000a0     	cbz	x0, 0x2bb60c8 <__start_il2cpp+0xedab4>
 2bb60b8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb60bc: aa1f03e1     	mov	x1, xzr
 2bb60c0: f84207fe     	ldr	x30, [sp], #0x20
 2bb60c4: 17fe6a11     	b	0x2b50908 <__start_il2cpp+0x882f4>
 2bb60c8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb60cc: 2a1f03e0     	mov	w0, wzr
 2bb60d0: f84207fe     	ldr	x30, [sp], #0x20
 2bb60d4: d65f03c0     	ret

# PlayerManager :: System.DateTime get_passExpiry()
# VA 0x2bb60d8 .. 0x2bb617c (next mapped method entry)
 2bb60d8: d100c3ff     	sub	sp, sp, #0x30
 2bb60dc: f9000bfe     	str	x30, [sp, #0x10]
 2bb60e0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bb60e4: 9001daf3     	adrp	x19, 0x6712000
 2bb60e8: 9001ba34     	adrp	x20, 0x62fa000
 2bb60ec: 39655e68     	ldrb	w8, [x19, #0x957]
 2bb60f0: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb60f4: 37000188     	tbnz	w8, #0x0, 0x2bb6124 <__start_il2cpp+0xedb10>
 2bb60f8: 9001ba20     	adrp	x0, 0x62fa000
 2bb60fc: f944ec00     	ldr	x0, [x0, #0x9d8]
 2bb6100: 97f88338     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6104: f001b9e0     	adrp	x0, 0x62f5000
 2bb6108: f943b000     	ldr	x0, [x0, #0x760]
 2bb610c: 97f88335     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6110: 9001ba20     	adrp	x0, 0x62fa000
 2bb6114: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6118: 97f88332     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb611c: 52800028     	mov	w8, #0x1                // =1
 2bb6120: 39255e68     	strb	w8, [x19, #0x957]
 2bb6124: f9400288     	ldr	x8, [x20]
 2bb6128: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb612c: f9400108     	ldr	x8, [x8]
 2bb6130: b40001c8     	cbz	x8, 0x2bb6168 <__start_il2cpp+0xedb54>
 2bb6134: f9401500     	ldr	x0, [x8, #0x28]
 2bb6138: b40001a0     	cbz	x0, 0x2bb616c <__start_il2cpp+0xedb58>
 2bb613c: aa1f03e1     	mov	x1, xzr
 2bb6140: 97fe6bc6     	bl	0x2b51058 <__start_il2cpp+0x88a44>
 2bb6144: f001b9e8     	adrp	x8, 0x62f5000
 2bb6148: aa0003e1     	mov	x1, x0
 2bb614c: 910003e0     	mov	x0, sp
 2bb6150: f943b108     	ldr	x8, [x8, #0x760]
 2bb6154: a9007fff     	stp	xzr, xzr, [sp]
 2bb6158: f9400102     	ldr	x2, [x8]
 2bb615c: 9444a75a     	bl	0x3cdfec4 <__start_il2cpp+0x12178b0>
 2bb6160: f94007e0     	ldr	x0, [sp, #0x8]
 2bb6164: 14000002     	b	0x2bb616c <__start_il2cpp+0xedb58>
 2bb6168: aa1f03e0     	mov	x0, xzr
 2bb616c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bb6170: f9400bfe     	ldr	x30, [sp, #0x10]
 2bb6174: 9100c3ff     	add	sp, sp, #0x30
 2bb6178: d65f03c0     	ret

# PlayerManager :: System.Void set_passExpiry(System.DateTime value)
# VA 0x2bb617c .. 0x2bb6204 (next mapped method entry)
 2bb617c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6180: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6184: 9001daf5     	adrp	x21, 0x6712000
 2bb6188: 9001ba34     	adrp	x20, 0x62fa000
 2bb618c: aa0003f3     	mov	x19, x0
 2bb6190: 396562a8     	ldrb	w8, [x21, #0x958]
 2bb6194: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6198: 370000c8     	tbnz	w8, #0x0, 0x2bb61b0 <__start_il2cpp+0xedb9c>
 2bb619c: 9001ba20     	adrp	x0, 0x62fa000
 2bb61a0: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb61a4: 97f8830f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb61a8: 52800028     	mov	w8, #0x1                // =1
 2bb61ac: 392562a8     	strb	w8, [x21, #0x958]
 2bb61b0: f9400288     	ldr	x8, [x20]
 2bb61b4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb61b8: f9400108     	ldr	x8, [x8]
 2bb61bc: b4000228     	cbz	x8, 0x2bb6200 <__start_il2cpp+0xedbec>
 2bb61c0: f9401500     	ldr	x0, [x8, #0x28]
 2bb61c4: b40001e0     	cbz	x0, 0x2bb6200 <__start_il2cpp+0xedbec>
 2bb61c8: aa1303e1     	mov	x1, x19
 2bb61cc: aa1f03e2     	mov	x2, xzr
 2bb61d0: 97fe6bd2     	bl	0x2b51118 <__start_il2cpp+0x88b04>
 2bb61d4: f9400288     	ldr	x8, [x20]
 2bb61d8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb61dc: f9400508     	ldr	x8, [x8, #0x8]
 2bb61e0: b4000108     	cbz	x8, 0x2bb6200 <__start_il2cpp+0xedbec>
 2bb61e4: f9401500     	ldr	x0, [x8, #0x28]
 2bb61e8: b40000c0     	cbz	x0, 0x2bb6200 <__start_il2cpp+0xedbec>
 2bb61ec: aa1303e1     	mov	x1, x19
 2bb61f0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb61f4: aa1f03e2     	mov	x2, xzr
 2bb61f8: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb61fc: 1408a1ad     	b	0x2dde8b0 <__start_il2cpp+0x31629c>
 2bb6200: 97f883a2     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.DateTime get_lastDailyRewardReceived()
# VA 0x2bb6204 .. 0x2bb62a8 (next mapped method entry)
 2bb6204: d100c3ff     	sub	sp, sp, #0x30
 2bb6208: f9000bfe     	str	x30, [sp, #0x10]
 2bb620c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bb6210: 9001daf3     	adrp	x19, 0x6712000
 2bb6214: 9001ba34     	adrp	x20, 0x62fa000
 2bb6218: 39656668     	ldrb	w8, [x19, #0x959]
 2bb621c: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6220: 37000188     	tbnz	w8, #0x0, 0x2bb6250 <__start_il2cpp+0xedc3c>
 2bb6224: 9001ba20     	adrp	x0, 0x62fa000
 2bb6228: f944ec00     	ldr	x0, [x0, #0x9d8]
 2bb622c: 97f882ed     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6230: f001b9e0     	adrp	x0, 0x62f5000
 2bb6234: f943b000     	ldr	x0, [x0, #0x760]
 2bb6238: 97f882ea     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb623c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6240: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6244: 97f882e7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6248: 52800028     	mov	w8, #0x1                // =1
 2bb624c: 39256668     	strb	w8, [x19, #0x959]
 2bb6250: f9400288     	ldr	x8, [x20]
 2bb6254: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6258: f9400108     	ldr	x8, [x8]
 2bb625c: b40001c8     	cbz	x8, 0x2bb6294 <__start_il2cpp+0xedc80>
 2bb6260: f9401500     	ldr	x0, [x8, #0x28]
 2bb6264: b40001a0     	cbz	x0, 0x2bb6298 <__start_il2cpp+0xedc84>
 2bb6268: aa1f03e1     	mov	x1, xzr
 2bb626c: 97fe6be5     	bl	0x2b51200 <__start_il2cpp+0x88bec>
 2bb6270: f001b9e8     	adrp	x8, 0x62f5000
 2bb6274: aa0003e1     	mov	x1, x0
 2bb6278: 910003e0     	mov	x0, sp
 2bb627c: f943b108     	ldr	x8, [x8, #0x760]
 2bb6280: a9007fff     	stp	xzr, xzr, [sp]
 2bb6284: f9400102     	ldr	x2, [x8]
 2bb6288: 9444a70f     	bl	0x3cdfec4 <__start_il2cpp+0x12178b0>
 2bb628c: f94007e0     	ldr	x0, [sp, #0x8]
 2bb6290: 14000002     	b	0x2bb6298 <__start_il2cpp+0xedc84>
 2bb6294: aa1f03e0     	mov	x0, xzr
 2bb6298: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bb629c: f9400bfe     	ldr	x30, [sp, #0x10]
 2bb62a0: 9100c3ff     	add	sp, sp, #0x30
 2bb62a4: d65f03c0     	ret

# PlayerManager :: System.Void set_lastDailyRewardReceived(System.DateTime value)
# VA 0x2bb62a8 .. 0x2bb6330 (next mapped method entry)
 2bb62a8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb62ac: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb62b0: 9001daf5     	adrp	x21, 0x6712000
 2bb62b4: 9001ba34     	adrp	x20, 0x62fa000
 2bb62b8: aa0003f3     	mov	x19, x0
 2bb62bc: 39656aa8     	ldrb	w8, [x21, #0x95a]
 2bb62c0: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb62c4: 370000c8     	tbnz	w8, #0x0, 0x2bb62dc <__start_il2cpp+0xedcc8>
 2bb62c8: 9001ba20     	adrp	x0, 0x62fa000
 2bb62cc: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb62d0: 97f882c4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb62d4: 52800028     	mov	w8, #0x1                // =1
 2bb62d8: 39256aa8     	strb	w8, [x21, #0x95a]
 2bb62dc: f9400288     	ldr	x8, [x20]
 2bb62e0: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb62e4: f9400108     	ldr	x8, [x8]
 2bb62e8: b4000228     	cbz	x8, 0x2bb632c <__start_il2cpp+0xedd18>
 2bb62ec: f9401500     	ldr	x0, [x8, #0x28]
 2bb62f0: b40001e0     	cbz	x0, 0x2bb632c <__start_il2cpp+0xedd18>
 2bb62f4: aa1303e1     	mov	x1, x19
 2bb62f8: aa1f03e2     	mov	x2, xzr
 2bb62fc: 97fe6bc7     	bl	0x2b51218 <__start_il2cpp+0x88c04>
 2bb6300: f9400288     	ldr	x8, [x20]
 2bb6304: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6308: f9400508     	ldr	x8, [x8, #0x8]
 2bb630c: b4000108     	cbz	x8, 0x2bb632c <__start_il2cpp+0xedd18>
 2bb6310: f9401500     	ldr	x0, [x8, #0x28]
 2bb6314: b40000c0     	cbz	x0, 0x2bb632c <__start_il2cpp+0xedd18>
 2bb6318: aa1303e1     	mov	x1, x19
 2bb631c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6320: aa1f03e2     	mov	x2, xzr
 2bb6324: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6328: 1408a16a     	b	0x2dde8d0 <__start_il2cpp+0x3162bc>
 2bb632c: 97f88357     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void add_OnOrderSkipChanged(System.Action`1<System.Int32> value)
# VA 0x2bb6330 .. 0x2bb6400 (next mapped method entry)
 2bb6330: f81c0ffe     	str	x30, [sp, #-0x40]!
 2bb6334: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2bb6338: a90257f6     	stp	x22, x21, [sp, #0x20]
 2bb633c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2bb6340: 9001daf4     	adrp	x20, 0x6712000
 2bb6344: 9001ba37     	adrp	x23, 0x62fa000
 2bb6348: aa0003f3     	mov	x19, x0
 2bb634c: 39656e88     	ldrb	w8, [x20, #0x95b]
 2bb6350: f944eaf7     	ldr	x23, [x23, #0x9d0]
 2bb6354: 37000128     	tbnz	w8, #0x0, 0x2bb6378 <__start_il2cpp+0xedd64>
 2bb6358: 9001ba20     	adrp	x0, 0x62fa000
 2bb635c: f943b800     	ldr	x0, [x0, #0x770]
 2bb6360: 97f882a0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6364: 9001ba20     	adrp	x0, 0x62fa000
 2bb6368: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb636c: 97f8829d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6370: 52800028     	mov	w8, #0x1                // =1
 2bb6374: 39256e88     	strb	w8, [x20, #0x95b]
 2bb6378: f94002e8     	ldr	x8, [x23]
 2bb637c: 9001ba38     	adrp	x24, 0x62fa000
 2bb6380: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6384: f943bb18     	ldr	x24, [x24, #0x770]
 2bb6388: f9400914     	ldr	x20, [x8, #0x10]
 2bb638c: aa1403e0     	mov	x0, x20
 2bb6390: aa1303e1     	mov	x1, x19
 2bb6394: aa1f03e2     	mov	x2, xzr
 2bb6398: 949672ff     	bl	0x5152f94 <__start_il2cpp+0x268a980>
 2bb639c: b4000100     	cbz	x0, 0x2bb63bc <__start_il2cpp+0xedda8>
 2bb63a0: f9400316     	ldr	x22, [x24]
 2bb63a4: aa0003f5     	mov	x21, x0
 2bb63a8: aa1603e1     	mov	x1, x22
 2bb63ac: 97f882ed     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2bb63b0: aa0003e1     	mov	x1, x0
 2bb63b4: b5000060     	cbnz	x0, 0x2bb63c0 <__start_il2cpp+0xeddac>
 2bb63b8: 1400000f     	b	0x2bb63f4 <__start_il2cpp+0xedde0>
 2bb63bc: aa1f03e1     	mov	x1, xzr
 2bb63c0: f94002e8     	ldr	x8, [x23]
 2bb63c4: aa1403e2     	mov	x2, x20
 2bb63c8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb63cc: 91004100     	add	x0, x8, #0x10
 2bb63d0: 97f95df7     	bl	0x2a0dbac <JNI_OnUnload+0xdd5c>
 2bb63d4: eb14001f     	cmp	x0, x20
 2bb63d8: aa0003f4     	mov	x20, x0
 2bb63dc: 54fffd81     	b.ne	0x2bb638c <__start_il2cpp+0xedd78>
 2bb63e0: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2bb63e4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2bb63e8: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2bb63ec: f84407fe     	ldr	x30, [sp], #0x40
 2bb63f0: d65f03c0     	ret
 2bb63f4: aa1503e0     	mov	x0, x21
 2bb63f8: aa1603e1     	mov	x1, x22
 2bb63fc: 97f88403     	bl	0x29d7408 <mono_class_get_checked+0xcf0>

# PlayerManager :: System.Void remove_OnOrderSkipChanged(System.Action`1<System.Int32> value)
# VA 0x2bb6400 .. 0x2bb64d0 (next mapped method entry)
 2bb6400: f81c0ffe     	str	x30, [sp, #-0x40]!
 2bb6404: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2bb6408: a90257f6     	stp	x22, x21, [sp, #0x20]
 2bb640c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2bb6410: 9001daf4     	adrp	x20, 0x6712000
 2bb6414: 9001ba37     	adrp	x23, 0x62fa000
 2bb6418: aa0003f3     	mov	x19, x0
 2bb641c: 39657288     	ldrb	w8, [x20, #0x95c]
 2bb6420: f944eaf7     	ldr	x23, [x23, #0x9d0]
 2bb6424: 37000128     	tbnz	w8, #0x0, 0x2bb6448 <__start_il2cpp+0xede34>
 2bb6428: 9001ba20     	adrp	x0, 0x62fa000
 2bb642c: f943b800     	ldr	x0, [x0, #0x770]
 2bb6430: 97f8826c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6434: 9001ba20     	adrp	x0, 0x62fa000
 2bb6438: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb643c: 97f88269     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6440: 52800028     	mov	w8, #0x1                // =1
 2bb6444: 39257288     	strb	w8, [x20, #0x95c]
 2bb6448: f94002e8     	ldr	x8, [x23]
 2bb644c: 9001ba38     	adrp	x24, 0x62fa000
 2bb6450: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6454: f943bb18     	ldr	x24, [x24, #0x770]
 2bb6458: f9400914     	ldr	x20, [x8, #0x10]
 2bb645c: aa1403e0     	mov	x0, x20
 2bb6460: aa1303e1     	mov	x1, x19
 2bb6464: aa1f03e2     	mov	x2, xzr
 2bb6468: 94967346     	bl	0x5153180 <__start_il2cpp+0x268ab6c>
 2bb646c: b4000100     	cbz	x0, 0x2bb648c <__start_il2cpp+0xede78>
 2bb6470: f9400316     	ldr	x22, [x24]
 2bb6474: aa0003f5     	mov	x21, x0
 2bb6478: aa1603e1     	mov	x1, x22
 2bb647c: 97f882b9     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2bb6480: aa0003e1     	mov	x1, x0
 2bb6484: b5000060     	cbnz	x0, 0x2bb6490 <__start_il2cpp+0xede7c>
 2bb6488: 1400000f     	b	0x2bb64c4 <__start_il2cpp+0xedeb0>
 2bb648c: aa1f03e1     	mov	x1, xzr
 2bb6490: f94002e8     	ldr	x8, [x23]
 2bb6494: aa1403e2     	mov	x2, x20
 2bb6498: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb649c: 91004100     	add	x0, x8, #0x10
 2bb64a0: 97f95dc3     	bl	0x2a0dbac <JNI_OnUnload+0xdd5c>
 2bb64a4: eb14001f     	cmp	x0, x20
 2bb64a8: aa0003f4     	mov	x20, x0
 2bb64ac: 54fffd81     	b.ne	0x2bb645c <__start_il2cpp+0xede48>
 2bb64b0: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2bb64b4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2bb64b8: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2bb64bc: f84407fe     	ldr	x30, [sp], #0x40
 2bb64c0: d65f03c0     	ret
 2bb64c4: aa1503e0     	mov	x0, x21
 2bb64c8: aa1603e1     	mov	x1, x22
 2bb64cc: 97f883cf     	bl	0x29d7408 <mono_class_get_checked+0xcf0>

# PlayerManager :: System.Int32 get_OrderSkipCount()
# VA 0x2bb64d0 .. 0x2bb656c (next mapped method entry)
 2bb64d0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb64d4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb64d8: 9001daf3     	adrp	x19, 0x6712000
 2bb64dc: 9001ba34     	adrp	x20, 0x62fa000
 2bb64e0: 39657668     	ldrb	w8, [x19, #0x95d]
 2bb64e4: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb64e8: 37000188     	tbnz	w8, #0x0, 0x2bb6518 <__start_il2cpp+0xedf04>
 2bb64ec: f001b9e0     	adrp	x0, 0x62f5000
 2bb64f0: f9479c00     	ldr	x0, [x0, #0xf38]
 2bb64f4: 97f8823b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb64f8: f001b9e0     	adrp	x0, 0x62f5000
 2bb64fc: f947a000     	ldr	x0, [x0, #0xf40]
 2bb6500: 97f88238     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6504: 9001ba20     	adrp	x0, 0x62fa000
 2bb6508: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb650c: 97f88235     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6510: 52800028     	mov	w8, #0x1                // =1
 2bb6514: 39257668     	strb	w8, [x19, #0x95d]
 2bb6518: f9400288     	ldr	x8, [x20]
 2bb651c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6520: f9400108     	ldr	x8, [x8]
 2bb6524: b40001c8     	cbz	x8, 0x2bb655c <__start_il2cpp+0xedf48>
 2bb6528: f9401500     	ldr	x0, [x8, #0x28]
 2bb652c: b40001a0     	cbz	x0, 0x2bb6560 <__start_il2cpp+0xedf4c>
 2bb6530: aa1f03e1     	mov	x1, xzr
 2bb6534: 97fe6b02     	bl	0x2b5113c <__start_il2cpp+0x88b28>
 2bb6538: f001b9e8     	adrp	x8, 0x62f5000
 2bb653c: 2a0003e1     	mov	w1, w0
 2bb6540: 910023e0     	add	x0, sp, #0x8
 2bb6544: f947a108     	ldr	x8, [x8, #0xf40]
 2bb6548: f90007ff     	str	xzr, [sp, #0x8]
 2bb654c: f9400102     	ldr	x2, [x8]
 2bb6550: 9444b1f1     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bb6554: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb6558: 14000002     	b	0x2bb6560 <__start_il2cpp+0xedf4c>
 2bb655c: 2a1f03e0     	mov	w0, wzr
 2bb6560: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6564: f84207fe     	ldr	x30, [sp], #0x20
 2bb6568: d65f03c0     	ret

# PlayerManager :: System.Void set_OrderSkipCount(System.Int32 value)
# VA 0x2bb656c .. 0x2bb6624 (next mapped method entry)
 2bb656c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6570: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6574: 9001daf5     	adrp	x21, 0x6712000
 2bb6578: 9001ba34     	adrp	x20, 0x62fa000
 2bb657c: 2a0003f3     	mov	w19, w0
 2bb6580: 39657aa8     	ldrb	w8, [x21, #0x95e]
 2bb6584: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6588: 370000c8     	tbnz	w8, #0x0, 0x2bb65a0 <__start_il2cpp+0xedf8c>
 2bb658c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6590: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6594: 97f88213     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6598: 52800028     	mov	w8, #0x1                // =1
 2bb659c: 39257aa8     	strb	w8, [x21, #0x95e]
 2bb65a0: f9400288     	ldr	x8, [x20]
 2bb65a4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb65a8: f9400108     	ldr	x8, [x8]
 2bb65ac: b40003a8     	cbz	x8, 0x2bb6620 <__start_il2cpp+0xee00c>
 2bb65b0: f9401500     	ldr	x0, [x8, #0x28]
 2bb65b4: b4000360     	cbz	x0, 0x2bb6620 <__start_il2cpp+0xee00c>
 2bb65b8: 2a1303e1     	mov	w1, w19
 2bb65bc: aa1f03e2     	mov	x2, xzr
 2bb65c0: 97fe6ae5     	bl	0x2b51154 <__start_il2cpp+0x88b40>
 2bb65c4: f9400288     	ldr	x8, [x20]
 2bb65c8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb65cc: f9400508     	ldr	x8, [x8, #0x8]
 2bb65d0: b4000288     	cbz	x8, 0x2bb6620 <__start_il2cpp+0xee00c>
 2bb65d4: f9401500     	ldr	x0, [x8, #0x28]
 2bb65d8: b4000240     	cbz	x0, 0x2bb6620 <__start_il2cpp+0xee00c>
 2bb65dc: 2a1303e1     	mov	w1, w19
 2bb65e0: aa1f03e2     	mov	x2, xzr
 2bb65e4: 9408a0b9     	bl	0x2dde8c8 <__start_il2cpp+0x3162b4>
 2bb65e8: f9400288     	ldr	x8, [x20]
 2bb65ec: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb65f0: f9400908     	ldr	x8, [x8, #0x10]
 2bb65f4: b4000108     	cbz	x8, 0x2bb6614 <__start_il2cpp+0xee000>
 2bb65f8: 2a1303e1     	mov	w1, w19
 2bb65fc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6600: f9402100     	ldr	x0, [x8, #0x40]
 2bb6604: f9401502     	ldr	x2, [x8, #0x28]
 2bb6608: f9400d03     	ldr	x3, [x8, #0x18]
 2bb660c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6610: d61f0060     	br	x3
 2bb6614: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6618: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb661c: d65f03c0     	ret
 2bb6620: 97f8829a     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.String get_activePass()
# VA 0x2bb6624 .. 0x2bb668c (next mapped method entry)
 2bb6624: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6628: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb662c: 9001daf3     	adrp	x19, 0x6712000
 2bb6630: 9001ba34     	adrp	x20, 0x62fa000
 2bb6634: 39657e68     	ldrb	w8, [x19, #0x95f]
 2bb6638: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb663c: 370000c8     	tbnz	w8, #0x0, 0x2bb6654 <__start_il2cpp+0xee040>
 2bb6640: 9001ba20     	adrp	x0, 0x62fa000
 2bb6644: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6648: 97f881e6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb664c: 52800028     	mov	w8, #0x1                // =1
 2bb6650: 39257e68     	strb	w8, [x19, #0x95f]
 2bb6654: f9400288     	ldr	x8, [x20]
 2bb6658: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb665c: f9400108     	ldr	x8, [x8]
 2bb6660: b40000e8     	cbz	x8, 0x2bb667c <__start_il2cpp+0xee068>
 2bb6664: f9401500     	ldr	x0, [x8, #0x28]
 2bb6668: b40000a0     	cbz	x0, 0x2bb667c <__start_il2cpp+0xee068>
 2bb666c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6670: aa1f03e1     	mov	x1, xzr
 2bb6674: f84207fe     	ldr	x30, [sp], #0x20
 2bb6678: 17fe6ac0     	b	0x2b51178 <__start_il2cpp+0x88b64>
 2bb667c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6680: aa1f03e0     	mov	x0, xzr
 2bb6684: f84207fe     	ldr	x30, [sp], #0x20
 2bb6688: d65f03c0     	ret

# PlayerManager :: System.Void set_activePass(System.String value)
# VA 0x2bb668c .. 0x2bb6714 (next mapped method entry)
 2bb668c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6690: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6694: 9001daf5     	adrp	x21, 0x6712000
 2bb6698: 9001ba34     	adrp	x20, 0x62fa000
 2bb669c: aa0003f3     	mov	x19, x0
 2bb66a0: 396582a8     	ldrb	w8, [x21, #0x960]
 2bb66a4: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb66a8: 370000c8     	tbnz	w8, #0x0, 0x2bb66c0 <__start_il2cpp+0xee0ac>
 2bb66ac: 9001ba20     	adrp	x0, 0x62fa000
 2bb66b0: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb66b4: 97f881cb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb66b8: 52800028     	mov	w8, #0x1                // =1
 2bb66bc: 392582a8     	strb	w8, [x21, #0x960]
 2bb66c0: f9400288     	ldr	x8, [x20]
 2bb66c4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb66c8: f9400108     	ldr	x8, [x8]
 2bb66cc: b4000228     	cbz	x8, 0x2bb6710 <__start_il2cpp+0xee0fc>
 2bb66d0: f9401500     	ldr	x0, [x8, #0x28]
 2bb66d4: b40001e0     	cbz	x0, 0x2bb6710 <__start_il2cpp+0xee0fc>
 2bb66d8: aa1303e1     	mov	x1, x19
 2bb66dc: aa1f03e2     	mov	x2, xzr
 2bb66e0: 97fe6abc     	bl	0x2b511d0 <__start_il2cpp+0x88bbc>
 2bb66e4: f9400288     	ldr	x8, [x20]
 2bb66e8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb66ec: f9400508     	ldr	x8, [x8, #0x8]
 2bb66f0: b4000108     	cbz	x8, 0x2bb6710 <__start_il2cpp+0xee0fc>
 2bb66f4: f9401500     	ldr	x0, [x8, #0x28]
 2bb66f8: b40000c0     	cbz	x0, 0x2bb6710 <__start_il2cpp+0xee0fc>
 2bb66fc: aa1303e1     	mov	x1, x19
 2bb6700: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6704: aa1f03e2     	mov	x2, xzr
 2bb6708: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb670c: 1408a06b     	b	0x2dde8b8 <__start_il2cpp+0x3162a4>
 2bb6710: 97f8825e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Boolean get_isTester()
# VA 0x2bb6714 .. 0x2bb6770 (next mapped method entry)
 2bb6714: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6718: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb671c: 9001daf3     	adrp	x19, 0x6712000
 2bb6720: 9001ba34     	adrp	x20, 0x62fa000
 2bb6724: 39658668     	ldrb	w8, [x19, #0x961]
 2bb6728: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb672c: 370000c8     	tbnz	w8, #0x0, 0x2bb6744 <__start_il2cpp+0xee130>
 2bb6730: 9001ba20     	adrp	x0, 0x62fa000
 2bb6734: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6738: 97f881aa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb673c: 52800028     	mov	w8, #0x1                // =1
 2bb6740: 39258668     	strb	w8, [x19, #0x961]
 2bb6744: f9400288     	ldr	x8, [x20]
 2bb6748: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb674c: f9400108     	ldr	x8, [x8]
 2bb6750: b40000e8     	cbz	x8, 0x2bb676c <__start_il2cpp+0xee158>
 2bb6754: f9401500     	ldr	x0, [x8, #0x28]
 2bb6758: b40000a0     	cbz	x0, 0x2bb676c <__start_il2cpp+0xee158>
 2bb675c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6760: aa1f03e1     	mov	x1, xzr
 2bb6764: f84207fe     	ldr	x30, [sp], #0x20
 2bb6768: 17fe6842     	b	0x2b50870 <__start_il2cpp+0x8825c>
 2bb676c: 97f88247     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_isTester(System.Boolean value)
# VA 0x2bb6770 .. 0x2bb67f8 (next mapped method entry)
 2bb6770: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6774: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6778: 9001daf5     	adrp	x21, 0x6712000
 2bb677c: 9001ba34     	adrp	x20, 0x62fa000
 2bb6780: 2a0003f3     	mov	w19, w0
 2bb6784: 39658aa8     	ldrb	w8, [x21, #0x962]
 2bb6788: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb678c: 370000c8     	tbnz	w8, #0x0, 0x2bb67a4 <__start_il2cpp+0xee190>
 2bb6790: 9001ba20     	adrp	x0, 0x62fa000
 2bb6794: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6798: 97f88192     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb679c: 52800028     	mov	w8, #0x1                // =1
 2bb67a0: 39258aa8     	strb	w8, [x21, #0x962]
 2bb67a4: f9400288     	ldr	x8, [x20]
 2bb67a8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb67ac: f9400108     	ldr	x8, [x8]
 2bb67b0: b4000228     	cbz	x8, 0x2bb67f4 <__start_il2cpp+0xee1e0>
 2bb67b4: f9401500     	ldr	x0, [x8, #0x28]
 2bb67b8: b40001e0     	cbz	x0, 0x2bb67f4 <__start_il2cpp+0xee1e0>
 2bb67bc: 12000261     	and	w1, w19, #0x1
 2bb67c0: aa1f03e2     	mov	x2, xzr
 2bb67c4: 97fe6aaa     	bl	0x2b5126c <__start_il2cpp+0x88c58>
 2bb67c8: f9400288     	ldr	x8, [x20]
 2bb67cc: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb67d0: f9400508     	ldr	x8, [x8, #0x8]
 2bb67d4: b4000108     	cbz	x8, 0x2bb67f4 <__start_il2cpp+0xee1e0>
 2bb67d8: f9401500     	ldr	x0, [x8, #0x28]
 2bb67dc: b40000c0     	cbz	x0, 0x2bb67f4 <__start_il2cpp+0xee1e0>
 2bb67e0: 12000261     	and	w1, w19, #0x1
 2bb67e4: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb67e8: aa1f03e2     	mov	x2, xzr
 2bb67ec: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb67f0: 148bfdda     	b	0x4eb5f58 <__start_il2cpp+0x23ed944>
 2bb67f4: 97f88225     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_goldAmount(System.Int32 value)
# VA 0x2bb67f8 .. 0x2bb6880 (next mapped method entry)
 2bb67f8: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb67fc: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6800: 9001daf5     	adrp	x21, 0x6712000
 2bb6804: 9001ba34     	adrp	x20, 0x62fa000
 2bb6808: 2a0003f3     	mov	w19, w0
 2bb680c: 396592a8     	ldrb	w8, [x21, #0x964]
 2bb6810: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6814: 370000c8     	tbnz	w8, #0x0, 0x2bb682c <__start_il2cpp+0xee218>
 2bb6818: 9001ba20     	adrp	x0, 0x62fa000
 2bb681c: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6820: 97f88170     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6824: 52800028     	mov	w8, #0x1                // =1
 2bb6828: 392592a8     	strb	w8, [x21, #0x964]
 2bb682c: f9400288     	ldr	x8, [x20]
 2bb6830: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6834: f9400108     	ldr	x8, [x8]
 2bb6838: b4000228     	cbz	x8, 0x2bb687c <__start_il2cpp+0xee268>
 2bb683c: f9401500     	ldr	x0, [x8, #0x28]
 2bb6840: b40001e0     	cbz	x0, 0x2bb687c <__start_il2cpp+0xee268>
 2bb6844: 2a1303e1     	mov	w1, w19
 2bb6848: aa1f03e2     	mov	x2, xzr
 2bb684c: 97fe6aac     	bl	0x2b512fc <__start_il2cpp+0x88ce8>
 2bb6850: f9400288     	ldr	x8, [x20]
 2bb6854: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6858: f9400508     	ldr	x8, [x8, #0x8]
 2bb685c: b4000108     	cbz	x8, 0x2bb687c <__start_il2cpp+0xee268>
 2bb6860: f9401500     	ldr	x0, [x8, #0x28]
 2bb6864: b40000c0     	cbz	x0, 0x2bb687c <__start_il2cpp+0xee268>
 2bb6868: 2a1303e1     	mov	w1, w19
 2bb686c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6870: aa1f03e2     	mov	x2, xzr
 2bb6874: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6878: 1408a018     	b	0x2dde8d8 <__start_il2cpp+0x3162c4>
 2bb687c: 97f88203     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Int32 get_finishedOrderCount()
# VA 0x2bb6880 .. 0x2bb68dc (next mapped method entry)
 2bb6880: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6884: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6888: 9001daf3     	adrp	x19, 0x6712000
 2bb688c: 9001ba34     	adrp	x20, 0x62fa000
 2bb6890: 39659668     	ldrb	w8, [x19, #0x965]
 2bb6894: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6898: 370000c8     	tbnz	w8, #0x0, 0x2bb68b0 <__start_il2cpp+0xee29c>
 2bb689c: 9001ba20     	adrp	x0, 0x62fa000
 2bb68a0: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb68a4: 97f8814f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb68a8: 52800028     	mov	w8, #0x1                // =1
 2bb68ac: 39259668     	strb	w8, [x19, #0x965]
 2bb68b0: f9400288     	ldr	x8, [x20]
 2bb68b4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb68b8: f9400108     	ldr	x8, [x8]
 2bb68bc: b40000e8     	cbz	x8, 0x2bb68d8 <__start_il2cpp+0xee2c4>
 2bb68c0: f9401500     	ldr	x0, [x8, #0x28]
 2bb68c4: b40000a0     	cbz	x0, 0x2bb68d8 <__start_il2cpp+0xee2c4>
 2bb68c8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb68cc: aa1f03e1     	mov	x1, xzr
 2bb68d0: f84207fe     	ldr	x30, [sp], #0x20
 2bb68d4: 17fe6801     	b	0x2b508d8 <__start_il2cpp+0x882c4>
 2bb68d8: 97f881ec     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_finishedOrderCount(System.Int32 value)
# VA 0x2bb68dc .. 0x2bb6964 (next mapped method entry)
 2bb68dc: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb68e0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb68e4: 9001daf5     	adrp	x21, 0x6712000
 2bb68e8: 9001ba34     	adrp	x20, 0x62fa000
 2bb68ec: 2a0003f3     	mov	w19, w0
 2bb68f0: 39659aa8     	ldrb	w8, [x21, #0x966]
 2bb68f4: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb68f8: 370000c8     	tbnz	w8, #0x0, 0x2bb6910 <__start_il2cpp+0xee2fc>
 2bb68fc: 9001ba20     	adrp	x0, 0x62fa000
 2bb6900: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6904: 97f88137     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6908: 52800028     	mov	w8, #0x1                // =1
 2bb690c: 39259aa8     	strb	w8, [x21, #0x966]
 2bb6910: f9400288     	ldr	x8, [x20]
 2bb6914: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6918: f9400108     	ldr	x8, [x8]
 2bb691c: b4000228     	cbz	x8, 0x2bb6960 <__start_il2cpp+0xee34c>
 2bb6920: f9401500     	ldr	x0, [x8, #0x28]
 2bb6924: b40001e0     	cbz	x0, 0x2bb6960 <__start_il2cpp+0xee34c>
 2bb6928: 2a1303e1     	mov	w1, w19
 2bb692c: aa1f03e2     	mov	x2, xzr
 2bb6930: 97fe6a7c     	bl	0x2b51320 <__start_il2cpp+0x88d0c>
 2bb6934: f9400288     	ldr	x8, [x20]
 2bb6938: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb693c: f9400508     	ldr	x8, [x8, #0x8]
 2bb6940: b4000108     	cbz	x8, 0x2bb6960 <__start_il2cpp+0xee34c>
 2bb6944: f9401500     	ldr	x0, [x8, #0x28]
 2bb6948: b40000c0     	cbz	x0, 0x2bb6960 <__start_il2cpp+0xee34c>
 2bb694c: 2a1303e1     	mov	w1, w19
 2bb6950: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6954: aa1f03e2     	mov	x2, xzr
 2bb6958: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb695c: 14089fe1     	b	0x2dde8e0 <__start_il2cpp+0x3162cc>
 2bb6960: 97f881ca     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.String get_FTUEVersion()
# VA 0x2bb6964 .. 0x2bb69c0 (next mapped method entry)
 2bb6964: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6968: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb696c: 9001daf3     	adrp	x19, 0x6712000
 2bb6970: 9001ba34     	adrp	x20, 0x62fa000
 2bb6974: 39659e68     	ldrb	w8, [x19, #0x967]
 2bb6978: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb697c: 370000c8     	tbnz	w8, #0x0, 0x2bb6994 <__start_il2cpp+0xee380>
 2bb6980: 9001ba20     	adrp	x0, 0x62fa000
 2bb6984: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6988: 97f88116     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb698c: 52800028     	mov	w8, #0x1                // =1
 2bb6990: 39259e68     	strb	w8, [x19, #0x967]
 2bb6994: f9400288     	ldr	x8, [x20]
 2bb6998: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb699c: f9400108     	ldr	x8, [x8]
 2bb69a0: b40000e8     	cbz	x8, 0x2bb69bc <__start_il2cpp+0xee3a8>
 2bb69a4: f9401500     	ldr	x0, [x8, #0x28]
 2bb69a8: b40000a0     	cbz	x0, 0x2bb69bc <__start_il2cpp+0xee3a8>
 2bb69ac: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb69b0: aa1f03e1     	mov	x1, xzr
 2bb69b4: f84207fe     	ldr	x30, [sp], #0x20
 2bb69b8: 17fe67ce     	b	0x2b508f0 <__start_il2cpp+0x882dc>
 2bb69bc: 97f881b3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_FTUEVersion(System.String value)
# VA 0x2bb69c0 .. 0x2bb6a48 (next mapped method entry)
 2bb69c0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb69c4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb69c8: 9001daf5     	adrp	x21, 0x6712000
 2bb69cc: 9001ba34     	adrp	x20, 0x62fa000
 2bb69d0: aa0003f3     	mov	x19, x0
 2bb69d4: 3965a2a8     	ldrb	w8, [x21, #0x968]
 2bb69d8: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb69dc: 370000c8     	tbnz	w8, #0x0, 0x2bb69f4 <__start_il2cpp+0xee3e0>
 2bb69e0: 9001ba20     	adrp	x0, 0x62fa000
 2bb69e4: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb69e8: 97f880fe     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb69ec: 52800028     	mov	w8, #0x1                // =1
 2bb69f0: 3925a2a8     	strb	w8, [x21, #0x968]
 2bb69f4: f9400288     	ldr	x8, [x20]
 2bb69f8: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb69fc: f9400108     	ldr	x8, [x8]
 2bb6a00: b4000228     	cbz	x8, 0x2bb6a44 <__start_il2cpp+0xee430>
 2bb6a04: f9401500     	ldr	x0, [x8, #0x28]
 2bb6a08: b40001e0     	cbz	x0, 0x2bb6a44 <__start_il2cpp+0xee430>
 2bb6a0c: aa1303e1     	mov	x1, x19
 2bb6a10: aa1f03e2     	mov	x2, xzr
 2bb6a14: 97fe6a0a     	bl	0x2b5123c <__start_il2cpp+0x88c28>
 2bb6a18: f9400288     	ldr	x8, [x20]
 2bb6a1c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6a20: f9400508     	ldr	x8, [x8, #0x8]
 2bb6a24: b4000108     	cbz	x8, 0x2bb6a44 <__start_il2cpp+0xee430>
 2bb6a28: f9401500     	ldr	x0, [x8, #0x28]
 2bb6a2c: b40000c0     	cbz	x0, 0x2bb6a44 <__start_il2cpp+0xee430>
 2bb6a30: aa1303e1     	mov	x1, x19
 2bb6a34: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6a38: aa1f03e2     	mov	x2, xzr
 2bb6a3c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6a40: 14089fe1     	b	0x2dde9c4 <__start_il2cpp+0x3163b0>
 2bb6a44: 97f88191     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_starAmount(System.Int32 value)
# VA 0x2bb6a48 .. 0x2bb6ad0 (next mapped method entry)
 2bb6a48: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6a4c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6a50: 9001daf5     	adrp	x21, 0x6712000
 2bb6a54: 9001ba34     	adrp	x20, 0x62fa000
 2bb6a58: 2a0003f3     	mov	w19, w0
 2bb6a5c: 3965aaa8     	ldrb	w8, [x21, #0x96a]
 2bb6a60: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6a64: 370000c8     	tbnz	w8, #0x0, 0x2bb6a7c <__start_il2cpp+0xee468>
 2bb6a68: 9001ba20     	adrp	x0, 0x62fa000
 2bb6a6c: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6a70: 97f880dc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6a74: 52800028     	mov	w8, #0x1                // =1
 2bb6a78: 3925aaa8     	strb	w8, [x21, #0x96a]
 2bb6a7c: f9400288     	ldr	x8, [x20]
 2bb6a80: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6a84: f9400108     	ldr	x8, [x8]
 2bb6a88: b4000228     	cbz	x8, 0x2bb6acc <__start_il2cpp+0xee4b8>
 2bb6a8c: f9401500     	ldr	x0, [x8, #0x28]
 2bb6a90: b40001e0     	cbz	x0, 0x2bb6acc <__start_il2cpp+0xee4b8>
 2bb6a94: 2a1303e1     	mov	w1, w19
 2bb6a98: aa1f03e2     	mov	x2, xzr
 2bb6a9c: 97fe69fd     	bl	0x2b51290 <__start_il2cpp+0x88c7c>
 2bb6aa0: f9400288     	ldr	x8, [x20]
 2bb6aa4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6aa8: f9400508     	ldr	x8, [x8, #0x8]
 2bb6aac: b4000108     	cbz	x8, 0x2bb6acc <__start_il2cpp+0xee4b8>
 2bb6ab0: f9401500     	ldr	x0, [x8, #0x28]
 2bb6ab4: b40000c0     	cbz	x0, 0x2bb6acc <__start_il2cpp+0xee4b8>
 2bb6ab8: 2a1303e1     	mov	w1, w19
 2bb6abc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6ac0: aa1f03e2     	mov	x2, xzr
 2bb6ac4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6ac8: 14089fb7     	b	0x2dde9a4 <__start_il2cpp+0x316390>
 2bb6acc: 97f8816f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_blueStarAmount(System.Int32 value)
# VA 0x2bb6ad0 .. 0x2bb6b58 (next mapped method entry)
 2bb6ad0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6ad4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6ad8: 9001daf5     	adrp	x21, 0x6712000
 2bb6adc: 9001ba34     	adrp	x20, 0x62fa000
 2bb6ae0: 2a0003f3     	mov	w19, w0
 2bb6ae4: 3965b2a8     	ldrb	w8, [x21, #0x96c]
 2bb6ae8: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6aec: 370000c8     	tbnz	w8, #0x0, 0x2bb6b04 <__start_il2cpp+0xee4f0>
 2bb6af0: 9001ba20     	adrp	x0, 0x62fa000
 2bb6af4: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6af8: 97f880ba     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6afc: 52800028     	mov	w8, #0x1                // =1
 2bb6b00: 3925b2a8     	strb	w8, [x21, #0x96c]
 2bb6b04: f9400288     	ldr	x8, [x20]
 2bb6b08: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6b0c: f9400108     	ldr	x8, [x8]
 2bb6b10: b4000228     	cbz	x8, 0x2bb6b54 <__start_il2cpp+0xee540>
 2bb6b14: f9401500     	ldr	x0, [x8, #0x28]
 2bb6b18: b40001e0     	cbz	x0, 0x2bb6b54 <__start_il2cpp+0xee540>
 2bb6b1c: 2a1303e1     	mov	w1, w19
 2bb6b20: aa1f03e2     	mov	x2, xzr
 2bb6b24: 97fe69e4     	bl	0x2b512b4 <__start_il2cpp+0x88ca0>
 2bb6b28: f9400288     	ldr	x8, [x20]
 2bb6b2c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6b30: f9400508     	ldr	x8, [x8, #0x8]
 2bb6b34: b4000108     	cbz	x8, 0x2bb6b54 <__start_il2cpp+0xee540>
 2bb6b38: f9401500     	ldr	x0, [x8, #0x28]
 2bb6b3c: b40000c0     	cbz	x0, 0x2bb6b54 <__start_il2cpp+0xee540>
 2bb6b40: 2a1303e1     	mov	w1, w19
 2bb6b44: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6b48: aa1f03e2     	mov	x2, xzr
 2bb6b4c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6b50: 14089f97     	b	0x2dde9ac <__start_il2cpp+0x316398>
 2bb6b54: 97f8814d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_energyAmount(System.Int32 value)
# VA 0x2bb6b58 .. 0x2bb6be0 (next mapped method entry)
 2bb6b58: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6b5c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6b60: 9001daf5     	adrp	x21, 0x6712000
 2bb6b64: 9001ba34     	adrp	x20, 0x62fa000
 2bb6b68: 2a0003f3     	mov	w19, w0
 2bb6b6c: 3965baa8     	ldrb	w8, [x21, #0x96e]
 2bb6b70: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6b74: 370000c8     	tbnz	w8, #0x0, 0x2bb6b8c <__start_il2cpp+0xee578>
 2bb6b78: 9001ba20     	adrp	x0, 0x62fa000
 2bb6b7c: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6b80: 97f88098     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6b84: 52800028     	mov	w8, #0x1                // =1
 2bb6b88: 3925baa8     	strb	w8, [x21, #0x96e]
 2bb6b8c: f9400288     	ldr	x8, [x20]
 2bb6b90: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6b94: f9400108     	ldr	x8, [x8]
 2bb6b98: b4000228     	cbz	x8, 0x2bb6bdc <__start_il2cpp+0xee5c8>
 2bb6b9c: f9401500     	ldr	x0, [x8, #0x28]
 2bb6ba0: b40001e0     	cbz	x0, 0x2bb6bdc <__start_il2cpp+0xee5c8>
 2bb6ba4: 2a1303e1     	mov	w1, w19
 2bb6ba8: aa1f03e2     	mov	x2, xzr
 2bb6bac: 97fe69ef     	bl	0x2b51368 <__start_il2cpp+0x88d54>
 2bb6bb0: f9400288     	ldr	x8, [x20]
 2bb6bb4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6bb8: f9400508     	ldr	x8, [x8, #0x8]
 2bb6bbc: b4000108     	cbz	x8, 0x2bb6bdc <__start_il2cpp+0xee5c8>
 2bb6bc0: f9401500     	ldr	x0, [x8, #0x28]
 2bb6bc4: b40000c0     	cbz	x0, 0x2bb6bdc <__start_il2cpp+0xee5c8>
 2bb6bc8: 2a1303e1     	mov	w1, w19
 2bb6bcc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6bd0: aa1f03e2     	mov	x2, xzr
 2bb6bd4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6bd8: 14089f77     	b	0x2dde9b4 <__start_il2cpp+0x3163a0>
 2bb6bdc: 97f8812b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_expAmount(System.Int32 value)
# VA 0x2bb6be0 .. 0x2bb6c68 (next mapped method entry)
 2bb6be0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6be4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6be8: 9001daf5     	adrp	x21, 0x6712000
 2bb6bec: 9001ba34     	adrp	x20, 0x62fa000
 2bb6bf0: 2a0003f3     	mov	w19, w0
 2bb6bf4: 3965c2a8     	ldrb	w8, [x21, #0x970]
 2bb6bf8: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6bfc: 370000c8     	tbnz	w8, #0x0, 0x2bb6c14 <__start_il2cpp+0xee600>
 2bb6c00: 9001ba20     	adrp	x0, 0x62fa000
 2bb6c04: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6c08: 97f88076     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6c0c: 52800028     	mov	w8, #0x1                // =1
 2bb6c10: 3925c2a8     	strb	w8, [x21, #0x970]
 2bb6c14: f9400288     	ldr	x8, [x20]
 2bb6c18: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6c1c: f9400108     	ldr	x8, [x8]
 2bb6c20: b4000228     	cbz	x8, 0x2bb6c64 <__start_il2cpp+0xee650>
 2bb6c24: f9401500     	ldr	x0, [x8, #0x28]
 2bb6c28: b40001e0     	cbz	x0, 0x2bb6c64 <__start_il2cpp+0xee650>
 2bb6c2c: 2a1303e1     	mov	w1, w19
 2bb6c30: aa1f03e2     	mov	x2, xzr
 2bb6c34: 97fe69d6     	bl	0x2b5138c <__start_il2cpp+0x88d78>
 2bb6c38: f9400288     	ldr	x8, [x20]
 2bb6c3c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6c40: f9400508     	ldr	x8, [x8, #0x8]
 2bb6c44: b4000108     	cbz	x8, 0x2bb6c64 <__start_il2cpp+0xee650>
 2bb6c48: f9401500     	ldr	x0, [x8, #0x28]
 2bb6c4c: b40000c0     	cbz	x0, 0x2bb6c64 <__start_il2cpp+0xee650>
 2bb6c50: 2a1303e1     	mov	w1, w19
 2bb6c54: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6c58: aa1f03e2     	mov	x2, xzr
 2bb6c5c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6c60: 14089f57     	b	0x2dde9bc <__start_il2cpp+0x3163a8>
 2bb6c64: 97f88109     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Int32 get_totalMergeCount()
# VA 0x2bb6c68 .. 0x2bb6d04 (next mapped method entry)
 2bb6c68: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6c6c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6c70: 9001daf3     	adrp	x19, 0x6712000
 2bb6c74: 9001ba34     	adrp	x20, 0x62fa000
 2bb6c78: 3965c668     	ldrb	w8, [x19, #0x971]
 2bb6c7c: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6c80: 37000188     	tbnz	w8, #0x0, 0x2bb6cb0 <__start_il2cpp+0xee69c>
 2bb6c84: f001b9e0     	adrp	x0, 0x62f5000
 2bb6c88: f9479c00     	ldr	x0, [x0, #0xf38]
 2bb6c8c: 97f88055     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6c90: f001b9e0     	adrp	x0, 0x62f5000
 2bb6c94: f947a000     	ldr	x0, [x0, #0xf40]
 2bb6c98: 97f88052     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6c9c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6ca0: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6ca4: 97f8804f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6ca8: 52800028     	mov	w8, #0x1                // =1
 2bb6cac: 3925c668     	strb	w8, [x19, #0x971]
 2bb6cb0: f9400288     	ldr	x8, [x20]
 2bb6cb4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6cb8: f9400108     	ldr	x8, [x8]
 2bb6cbc: b40001c8     	cbz	x8, 0x2bb6cf4 <__start_il2cpp+0xee6e0>
 2bb6cc0: f9401500     	ldr	x0, [x8, #0x28]
 2bb6cc4: b40001a0     	cbz	x0, 0x2bb6cf8 <__start_il2cpp+0xee6e4>
 2bb6cc8: aa1f03e1     	mov	x1, xzr
 2bb6ccc: 97fe6713     	bl	0x2b50918 <__start_il2cpp+0x88304>
 2bb6cd0: f001b9e8     	adrp	x8, 0x62f5000
 2bb6cd4: 2a0003e1     	mov	w1, w0
 2bb6cd8: 910023e0     	add	x0, sp, #0x8
 2bb6cdc: f947a108     	ldr	x8, [x8, #0xf40]
 2bb6ce0: f90007ff     	str	xzr, [sp, #0x8]
 2bb6ce4: f9400102     	ldr	x2, [x8]
 2bb6ce8: 9444b00b     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2bb6cec: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb6cf0: 14000002     	b	0x2bb6cf8 <__start_il2cpp+0xee6e4>
 2bb6cf4: 2a1f03e0     	mov	w0, wzr
 2bb6cf8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6cfc: f84207fe     	ldr	x30, [sp], #0x20
 2bb6d00: d65f03c0     	ret

# PlayerManager :: System.Void set_totalMergeCount(System.Int32 value)
# VA 0x2bb6d04 .. 0x2bb6d68 (next mapped method entry)
 2bb6d04: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6d08: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6d0c: 9001daf4     	adrp	x20, 0x6712000
 2bb6d10: 9001ba35     	adrp	x21, 0x62fa000
 2bb6d14: 2a0003f3     	mov	w19, w0
 2bb6d18: 3965ca88     	ldrb	w8, [x20, #0x972]
 2bb6d1c: f944eab5     	ldr	x21, [x21, #0x9d0]
 2bb6d20: 370000c8     	tbnz	w8, #0x0, 0x2bb6d38 <__start_il2cpp+0xee724>
 2bb6d24: 9001ba20     	adrp	x0, 0x62fa000
 2bb6d28: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6d2c: 97f8802d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6d30: 52800028     	mov	w8, #0x1                // =1
 2bb6d34: 3925ca88     	strb	w8, [x20, #0x972]
 2bb6d38: f94002a8     	ldr	x8, [x21]
 2bb6d3c: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6d40: f9400108     	ldr	x8, [x8]
 2bb6d44: b4000108     	cbz	x8, 0x2bb6d64 <__start_il2cpp+0xee750>
 2bb6d48: f9401500     	ldr	x0, [x8, #0x28]
 2bb6d4c: b40000c0     	cbz	x0, 0x2bb6d64 <__start_il2cpp+0xee750>
 2bb6d50: 2a1303e1     	mov	w1, w19
 2bb6d54: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6d58: aa1f03e2     	mov	x2, xzr
 2bb6d5c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6d60: 17fe6979     	b	0x2b51344 <__start_il2cpp+0x88d30>
 2bb6d64: 97f880c9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_level(System.Int32 value)
# VA 0x2bb6d68 .. 0x2bb6df0 (next mapped method entry)
 2bb6d68: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6d6c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6d70: 9001daf5     	adrp	x21, 0x6712000
 2bb6d74: 9001ba34     	adrp	x20, 0x62fa000
 2bb6d78: 2a0003f3     	mov	w19, w0
 2bb6d7c: 3965d2a8     	ldrb	w8, [x21, #0x974]
 2bb6d80: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6d84: 370000c8     	tbnz	w8, #0x0, 0x2bb6d9c <__start_il2cpp+0xee788>
 2bb6d88: 9001ba20     	adrp	x0, 0x62fa000
 2bb6d8c: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6d90: 97f88014     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6d94: 52800028     	mov	w8, #0x1                // =1
 2bb6d98: 3925d2a8     	strb	w8, [x21, #0x974]
 2bb6d9c: f9400288     	ldr	x8, [x20]
 2bb6da0: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6da4: f9400108     	ldr	x8, [x8]
 2bb6da8: b4000228     	cbz	x8, 0x2bb6dec <__start_il2cpp+0xee7d8>
 2bb6dac: f9401500     	ldr	x0, [x8, #0x28]
 2bb6db0: b40001e0     	cbz	x0, 0x2bb6dec <__start_il2cpp+0xee7d8>
 2bb6db4: 2a1303e1     	mov	w1, w19
 2bb6db8: aa1f03e2     	mov	x2, xzr
 2bb6dbc: 97fe697d     	bl	0x2b513b0 <__start_il2cpp+0x88d9c>
 2bb6dc0: f9400288     	ldr	x8, [x20]
 2bb6dc4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6dc8: f9400508     	ldr	x8, [x8, #0x8]
 2bb6dcc: b4000108     	cbz	x8, 0x2bb6dec <__start_il2cpp+0xee7d8>
 2bb6dd0: f9401500     	ldr	x0, [x8, #0x28]
 2bb6dd4: b40000c0     	cbz	x0, 0x2bb6dec <__start_il2cpp+0xee7d8>
 2bb6dd8: 2a1303e1     	mov	w1, w19
 2bb6ddc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6de0: aa1f03e2     	mov	x2, xzr
 2bb6de4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6de8: 148bfca8     	b	0x4eb6088 <__start_il2cpp+0x23eda74>
 2bb6dec: 97f880a7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Boolean get_isLeveledUp()
# VA 0x2bb6df0 .. 0x2bb6e4c (next mapped method entry)
 2bb6df0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6df4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6df8: 9001daf3     	adrp	x19, 0x6712000
 2bb6dfc: 9001ba34     	adrp	x20, 0x62fa000
 2bb6e00: 3965d668     	ldrb	w8, [x19, #0x975]
 2bb6e04: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6e08: 370000c8     	tbnz	w8, #0x0, 0x2bb6e20 <__start_il2cpp+0xee80c>
 2bb6e0c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6e10: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6e14: 97f87ff3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6e18: 52800028     	mov	w8, #0x1                // =1
 2bb6e1c: 3925d668     	strb	w8, [x19, #0x975]
 2bb6e20: f9400288     	ldr	x8, [x20]
 2bb6e24: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6e28: f9400108     	ldr	x8, [x8]
 2bb6e2c: b40000e8     	cbz	x8, 0x2bb6e48 <__start_il2cpp+0xee834>
 2bb6e30: f9401500     	ldr	x0, [x8, #0x28]
 2bb6e34: b40000a0     	cbz	x0, 0x2bb6e48 <__start_il2cpp+0xee834>
 2bb6e38: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6e3c: aa1f03e1     	mov	x1, xzr
 2bb6e40: f84207fe     	ldr	x30, [sp], #0x20
 2bb6e44: 17fe667f     	b	0x2b50840 <__start_il2cpp+0x8822c>
 2bb6e48: 97f88090     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_isLeveledUp(System.Boolean value)
# VA 0x2bb6e4c .. 0x2bb6eb0 (next mapped method entry)
 2bb6e4c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6e50: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6e54: 9001daf4     	adrp	x20, 0x6712000
 2bb6e58: 9001ba35     	adrp	x21, 0x62fa000
 2bb6e5c: 2a0003f3     	mov	w19, w0
 2bb6e60: 3965da88     	ldrb	w8, [x20, #0x976]
 2bb6e64: f944eab5     	ldr	x21, [x21, #0x9d0]
 2bb6e68: 370000c8     	tbnz	w8, #0x0, 0x2bb6e80 <__start_il2cpp+0xee86c>
 2bb6e6c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6e70: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6e74: 97f87fdb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6e78: 52800028     	mov	w8, #0x1                // =1
 2bb6e7c: 3925da88     	strb	w8, [x20, #0x976]
 2bb6e80: f94002a8     	ldr	x8, [x21]
 2bb6e84: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6e88: f9400108     	ldr	x8, [x8]
 2bb6e8c: b4000108     	cbz	x8, 0x2bb6eac <__start_il2cpp+0xee898>
 2bb6e90: f9401500     	ldr	x0, [x8, #0x28]
 2bb6e94: b40000c0     	cbz	x0, 0x2bb6eac <__start_il2cpp+0xee898>
 2bb6e98: 12000261     	and	w1, w19, #0x1
 2bb6e9c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6ea0: aa1f03e2     	mov	x2, xzr
 2bb6ea4: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6ea8: 17fe694b     	b	0x2b513d4 <__start_il2cpp+0x88dc0>
 2bb6eac: 97f88077     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Int32 get_levelUpCount()
# VA 0x2bb6eb0 .. 0x2bb6f0c (next mapped method entry)
 2bb6eb0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6eb4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6eb8: 9001daf3     	adrp	x19, 0x6712000
 2bb6ebc: 9001ba34     	adrp	x20, 0x62fa000
 2bb6ec0: 3965de68     	ldrb	w8, [x19, #0x977]
 2bb6ec4: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6ec8: 370000c8     	tbnz	w8, #0x0, 0x2bb6ee0 <__start_il2cpp+0xee8cc>
 2bb6ecc: 9001ba20     	adrp	x0, 0x62fa000
 2bb6ed0: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6ed4: 97f87fc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6ed8: 52800028     	mov	w8, #0x1                // =1
 2bb6edc: 3925de68     	strb	w8, [x19, #0x977]
 2bb6ee0: f9400288     	ldr	x8, [x20]
 2bb6ee4: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6ee8: f9400108     	ldr	x8, [x8]
 2bb6eec: b40000e8     	cbz	x8, 0x2bb6f08 <__start_il2cpp+0xee8f4>
 2bb6ef0: f9401500     	ldr	x0, [x8, #0x28]
 2bb6ef4: b40000a0     	cbz	x0, 0x2bb6f08 <__start_il2cpp+0xee8f4>
 2bb6ef8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6efc: aa1f03e1     	mov	x1, xzr
 2bb6f00: f84207fe     	ldr	x30, [sp], #0x20
 2bb6f04: 17fe6655     	b	0x2b50858 <__start_il2cpp+0x88244>
 2bb6f08: 97f88060     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void set_levelUpCount(System.Int32 value)
# VA 0x2bb6f0c .. 0x2bb6f70 (next mapped method entry)
 2bb6f0c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb6f10: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6f14: 9001daf4     	adrp	x20, 0x6712000
 2bb6f18: 9001ba35     	adrp	x21, 0x62fa000
 2bb6f1c: 2a0003f3     	mov	w19, w0
 2bb6f20: 3965e288     	ldrb	w8, [x20, #0x978]
 2bb6f24: f944eab5     	ldr	x21, [x21, #0x9d0]
 2bb6f28: 370000c8     	tbnz	w8, #0x0, 0x2bb6f40 <__start_il2cpp+0xee92c>
 2bb6f2c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6f30: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6f34: 97f87fab     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6f38: 52800028     	mov	w8, #0x1                // =1
 2bb6f3c: 3925e288     	strb	w8, [x20, #0x978]
 2bb6f40: f94002a8     	ldr	x8, [x21]
 2bb6f44: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6f48: f9400108     	ldr	x8, [x8]
 2bb6f4c: b4000108     	cbz	x8, 0x2bb6f6c <__start_il2cpp+0xee958>
 2bb6f50: f9401500     	ldr	x0, [x8, #0x28]
 2bb6f54: b40000c0     	cbz	x0, 0x2bb6f6c <__start_il2cpp+0xee958>
 2bb6f58: 2a1303e1     	mov	w1, w19
 2bb6f5c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb6f60: aa1f03e2     	mov	x2, xzr
 2bb6f64: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb6f68: 17fe6924     	b	0x2b513f8 <__start_il2cpp+0x88de4>
 2bb6f6c: 97f88047     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: Almedia.AlmediaLinkStatus get_almediaLinkStatus()
# VA 0x2bb6f70 .. 0x2bb700c (next mapped method entry)
 2bb6f70: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bb6f74: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb6f78: 9001daf3     	adrp	x19, 0x6712000
 2bb6f7c: 9001ba34     	adrp	x20, 0x62fa000
 2bb6f80: 3965e668     	ldrb	w8, [x19, #0x979]
 2bb6f84: f944ea94     	ldr	x20, [x20, #0x9d0]
 2bb6f88: 37000188     	tbnz	w8, #0x0, 0x2bb6fb8 <__start_il2cpp+0xee9a4>
 2bb6f8c: 9001ba20     	adrp	x0, 0x62fa000
 2bb6f90: f944f000     	ldr	x0, [x0, #0x9e0]
 2bb6f94: 97f87f93     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6f98: 9001ba20     	adrp	x0, 0x62fa000
 2bb6f9c: f944f400     	ldr	x0, [x0, #0x9e8]
 2bb6fa0: 97f87f90     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6fa4: 9001ba20     	adrp	x0, 0x62fa000
 2bb6fa8: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb6fac: 97f87f8d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb6fb0: 52800028     	mov	w8, #0x1                // =1
 2bb6fb4: 3925e668     	strb	w8, [x19, #0x979]
 2bb6fb8: f9400288     	ldr	x8, [x20]
 2bb6fbc: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb6fc0: f9400108     	ldr	x8, [x8]
 2bb6fc4: b40001c8     	cbz	x8, 0x2bb6ffc <__start_il2cpp+0xee9e8>
 2bb6fc8: f9401500     	ldr	x0, [x8, #0x28]
 2bb6fcc: b40001a0     	cbz	x0, 0x2bb7000 <__start_il2cpp+0xee9ec>
 2bb6fd0: aa1f03e1     	mov	x1, xzr
 2bb6fd4: 97fe6663     	bl	0x2b50960 <__start_il2cpp+0x8834c>
 2bb6fd8: 9001ba28     	adrp	x8, 0x62fa000
 2bb6fdc: 2a0003e1     	mov	w1, w0
 2bb6fe0: 910023e0     	add	x0, sp, #0x8
 2bb6fe4: f944f508     	ldr	x8, [x8, #0x9e8]
 2bb6fe8: f90007ff     	str	xzr, [sp, #0x8]
 2bb6fec: f9400102     	ldr	x2, [x8]
 2bb6ff0: 9444b02c     	bl	0x3ce30a0 <__start_il2cpp+0x121aa8c>
 2bb6ff4: b9400fe0     	ldr	w0, [sp, #0xc]
 2bb6ff8: 14000002     	b	0x2bb7000 <__start_il2cpp+0xee9ec>
 2bb6ffc: 2a1f03e0     	mov	w0, wzr
 2bb7000: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb7004: f84207fe     	ldr	x30, [sp], #0x20
 2bb7008: d65f03c0     	ret

# PlayerManager :: System.Void set_almediaLinkStatus(Almedia.AlmediaLinkStatus value)
# VA 0x2bb700c .. 0x2bb7070 (next mapped method entry)
 2bb700c: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2bb7010: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bb7014: f001dad4     	adrp	x20, 0x6712000
 2bb7018: f001ba15     	adrp	x21, 0x62fa000
 2bb701c: 2a0003f3     	mov	w19, w0
 2bb7020: 3965ea88     	ldrb	w8, [x20, #0x97a]
 2bb7024: f944eab5     	ldr	x21, [x21, #0x9d0]
 2bb7028: 370000c8     	tbnz	w8, #0x0, 0x2bb7040 <__start_il2cpp+0xeea2c>
 2bb702c: f001ba00     	adrp	x0, 0x62fa000
 2bb7030: f944e800     	ldr	x0, [x0, #0x9d0]
 2bb7034: 97f87f6b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bb7038: 52800028     	mov	w8, #0x1                // =1
 2bb703c: 3925ea88     	strb	w8, [x20, #0x97a]
 2bb7040: f94002a8     	ldr	x8, [x21]
 2bb7044: f9405d08     	ldr	x8, [x8, #0xb8]
 2bb7048: f9400108     	ldr	x8, [x8]
 2bb704c: b4000108     	cbz	x8, 0x2bb706c <__start_il2cpp+0xeea58>
 2bb7050: f9401500     	ldr	x0, [x8, #0x28]
 2bb7054: b40000c0     	cbz	x0, 0x2bb706c <__start_il2cpp+0xeea58>
 2bb7058: 2a1303e1     	mov	w1, w19
 2bb705c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bb7060: aa1f03e2     	mov	x2, xzr
 2bb7064: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2bb7068: 17fe6644     	b	0x2b50978 <__start_il2cpp+0x88364>
 2bb706c: 97f88007     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerManager :: System.Void SetEnergy(System.Int32 val)
# VA 0x2bb7070 .. 0x2bb7074 (next mapped method entry)
 2bb7070: d65f03c0     	ret

# PlayerManager :: System.Void .ctor()
# VA 0x2bb7074 .. 0x2bb707c (next mapped method entry)
 2bb7074: aa1f03e1     	mov	x1, xzr
 2bb7078: 149662b4     	b	0x514fb48 <__start_il2cpp+0x2687534>
