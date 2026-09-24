
# ItemMover+__c :: System.Void .cctor()
# VA 0x2c06c64 .. 0x2c06ccc (next mapped method entry)
 2c06c64: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c06c68: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06c6c: 9001d873     	adrp	x19, 0x6712000
 2c06c70: d001b7b4     	adrp	x20, 0x62fc000
 2c06c74: 396eba68     	ldrb	w8, [x19, #0xbae]
 2c06c78: f9473e94     	ldr	x20, [x20, #0xe78]
 2c06c7c: 370000c8     	tbnz	w8, #0x0, 0x2c06c94 <__start_il2cpp+0x13e680>
 2c06c80: d001b7a0     	adrp	x0, 0x62fc000
 2c06c84: f9473c00     	ldr	x0, [x0, #0xe78]
 2c06c88: 97f74056     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06c8c: 52800028     	mov	w8, #0x1                // =1
 2c06c90: 392eba68     	strb	w8, [x19, #0xbae]
 2c06c94: f9400280     	ldr	x0, [x20]
 2c06c98: 97f740f8     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c06c9c: aa1f03e1     	mov	x1, xzr
 2c06ca0: aa0003f3     	mov	x19, x0
 2c06ca4: 949523a9     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c06ca8: f9400288     	ldr	x8, [x20]
 2c06cac: aa1303e1     	mov	x1, x19
 2c06cb0: f9405d08     	ldr	x8, [x8, #0xb8]
 2c06cb4: f9000113     	str	x19, [x8]
 2c06cb8: f9400288     	ldr	x8, [x20]
 2c06cbc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06cc0: f9405d00     	ldr	x0, [x8, #0xb8]
 2c06cc4: f84207fe     	ldr	x30, [sp], #0x20
 2c06cc8: 17f74031     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ItemMover+__c :: System.Void .ctor()
# VA 0x2c06ccc .. 0x2c06cd4 (next mapped method entry)
 2c06ccc: aa1f03e1     	mov	x1, xzr
 2c06cd0: 1495239e     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemMover+__c :: System.Boolean <ReleaseItemClosestEmpty>b__22_0(UnityEngine.Collider2D a)
# VA 0x2c06cd4 .. 0x2c06d34 (next mapped method entry)
 2c06cd4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c06cd8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06cdc: 9001d874     	adrp	x20, 0x6712000
 2c06ce0: aa0103f3     	mov	x19, x1
 2c06ce4: 396ebe88     	ldrb	w8, [x20, #0xbaf]
 2c06ce8: 370000c8     	tbnz	w8, #0x0, 0x2c06d00 <__start_il2cpp+0x13e6ec>
 2c06cec: d001b7a0     	adrp	x0, 0x62fc000
 2c06cf0: f9474400     	ldr	x0, [x0, #0xe88]
 2c06cf4: 97f7403b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06cf8: 52800028     	mov	w8, #0x1                // =1
 2c06cfc: 392ebe88     	strb	w8, [x20, #0xbaf]
 2c06d00: f90007ff     	str	xzr, [sp, #0x8]
 2c06d04: b4000173     	cbz	x19, 0x2c06d30 <__start_il2cpp+0x13e71c>
 2c06d08: d001b7a8     	adrp	x8, 0x62fc000
 2c06d0c: 910023e1     	add	x1, sp, #0x8
 2c06d10: aa1303e0     	mov	x0, x19
 2c06d14: f9474508     	ldr	x8, [x8, #0xe88]
 2c06d18: f9400102     	ldr	x2, [x8]
 2c06d1c: 941e6ac4     	bl	0x33a182c <__start_il2cpp+0x8d9218>
 2c06d20: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06d24: 12000000     	and	w0, w0, #0x1
 2c06d28: f84207fe     	ldr	x30, [sp], #0x20
 2c06d2c: d65f03c0     	ret
 2c06d30: 97f740d6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover+__c :: BoardSlot <OnInputDetected>b__27_0(UnityEngine.Collider2D hitCollider)
# VA 0x2c06d34 .. 0x2c06dcc (next mapped method entry)
 2c06d34: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c06d38: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06d3c: 9001d874     	adrp	x20, 0x6712000
 2c06d40: d001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06d44: aa0103f3     	mov	x19, x1
 2c06d48: 396ec288     	ldrb	w8, [x20, #0xbb0]
 2c06d4c: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c06d50: 37000128     	tbnz	w8, #0x0, 0x2c06d74 <__start_il2cpp+0x13e760>
 2c06d54: d001b7a0     	adrp	x0, 0x62fc000
 2c06d58: f9477c00     	ldr	x0, [x0, #0xef8]
 2c06d5c: 97f74021     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06d60: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06d64: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06d68: 97f7401e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06d6c: 52800028     	mov	w8, #0x1                // =1
 2c06d70: 392ec288     	strb	w8, [x20, #0xbb0]
 2c06d74: f94002a0     	ldr	x0, [x21]
 2c06d78: b940e408     	ldr	w8, [x0, #0xe4]
 2c06d7c: 35000048     	cbnz	w8, 0x2c06d84 <__start_il2cpp+0x13e770>
 2c06d80: 97f74077     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06d84: aa1303e0     	mov	x0, x19
 2c06d88: aa1f03e1     	mov	x1, xzr
 2c06d8c: aa1f03e2     	mov	x2, xzr
 2c06d90: 94bcf013     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c06d94: 36000120     	tbz	w0, #0x0, 0x2c06db8 <__start_il2cpp+0x13e7a4>
 2c06d98: b4000193     	cbz	x19, 0x2c06dc8 <__start_il2cpp+0x13e7b4>
 2c06d9c: d001b7a8     	adrp	x8, 0x62fc000
 2c06da0: aa1303e0     	mov	x0, x19
 2c06da4: f9477d08     	ldr	x8, [x8, #0xef8]
 2c06da8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06dac: f9400101     	ldr	x1, [x8]
 2c06db0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06db4: 141e6757     	b	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2c06db8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06dbc: aa1f03e0     	mov	x0, xzr
 2c06dc0: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06dc4: d65f03c0     	ret
 2c06dc8: 97f740b0     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover+__c :: System.Boolean <OnInputDetected>b__27_1(BoardSlot slot)
# VA 0x2c06dcc .. 0x2c06e28 (next mapped method entry)
 2c06dcc: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c06dd0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06dd4: 9001d874     	adrp	x20, 0x6712000
 2c06dd8: d001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06ddc: aa0103f3     	mov	x19, x1
 2c06de0: 396ec688     	ldrb	w8, [x20, #0xbb1]
 2c06de4: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c06de8: 370000c8     	tbnz	w8, #0x0, 0x2c06e00 <__start_il2cpp+0x13e7ec>
 2c06dec: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06df0: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06df4: 97f73ffb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06df8: 52800028     	mov	w8, #0x1                // =1
 2c06dfc: 392ec688     	strb	w8, [x20, #0xbb1]
 2c06e00: f94002a0     	ldr	x0, [x21]
 2c06e04: b940e408     	ldr	w8, [x0, #0xe4]
 2c06e08: 35000048     	cbnz	w8, 0x2c06e10 <__start_il2cpp+0x13e7fc>
 2c06e0c: 97f74054     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06e10: aa1303e0     	mov	x0, x19
 2c06e14: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06e18: aa1f03e1     	mov	x1, xzr
 2c06e1c: aa1f03e2     	mov	x2, xzr
 2c06e20: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06e24: 14bcfdf5     	b	0x5b465f8 <__start_il2cpp+0x307dfe4>

# ItemMover+__c :: System.Boolean <OnInputDetected>b__27_2(BoardSlot slot)
# VA 0x2c06e28 .. 0x2c06e90 (next mapped method entry)
 2c06e28: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c06e2c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06e30: 9001d874     	adrp	x20, 0x6712000
 2c06e34: aa0103f3     	mov	x19, x1
 2c06e38: 396eca88     	ldrb	w8, [x20, #0xbb2]
 2c06e3c: 370000c8     	tbnz	w8, #0x0, 0x2c06e54 <__start_il2cpp+0x13e840>
 2c06e40: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06e44: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06e48: 97f73fe6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06e4c: 52800028     	mov	w8, #0x1                // =1
 2c06e50: 392eca88     	strb	w8, [x20, #0xbb2]
 2c06e54: b40001d3     	cbz	x19, 0x2c06e8c <__start_il2cpp+0x13e878>
 2c06e58: d001b748     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06e5c: f9478d08     	ldr	x8, [x8, #0xf18]
 2c06e60: f9401a73     	ldr	x19, [x19, #0x30]
 2c06e64: f9400100     	ldr	x0, [x8]
 2c06e68: b940e408     	ldr	w8, [x0, #0xe4]
 2c06e6c: 35000048     	cbnz	w8, 0x2c06e74 <__start_il2cpp+0x13e860>
 2c06e70: 97f7403b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06e74: aa1303e0     	mov	x0, x19
 2c06e78: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06e7c: aa1f03e1     	mov	x1, xzr
 2c06e80: aa1f03e2     	mov	x2, xzr
 2c06e84: f84207fe     	ldr	x30, [sp], #0x20
 2c06e88: 14bcefd5     	b	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c06e8c: 97f7407f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover+__c :: BoardSlot <OnDragEnded>b__32_0(UnityEngine.Collider2D hitCollider)
# VA 0x2c06e90 .. 0x2c06f28 (next mapped method entry)
 2c06e90: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c06e94: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06e98: 9001d874     	adrp	x20, 0x6712000
 2c06e9c: d001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06ea0: aa0103f3     	mov	x19, x1
 2c06ea4: 396ece88     	ldrb	w8, [x20, #0xbb3]
 2c06ea8: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c06eac: 37000128     	tbnz	w8, #0x0, 0x2c06ed0 <__start_il2cpp+0x13e8bc>
 2c06eb0: d001b7a0     	adrp	x0, 0x62fc000
 2c06eb4: f9477c00     	ldr	x0, [x0, #0xef8]
 2c06eb8: 97f73fca     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06ebc: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06ec0: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06ec4: 97f73fc7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06ec8: 52800028     	mov	w8, #0x1                // =1
 2c06ecc: 392ece88     	strb	w8, [x20, #0xbb3]
 2c06ed0: f94002a0     	ldr	x0, [x21]
 2c06ed4: b940e408     	ldr	w8, [x0, #0xe4]
 2c06ed8: 35000048     	cbnz	w8, 0x2c06ee0 <__start_il2cpp+0x13e8cc>
 2c06edc: 97f74020     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06ee0: aa1303e0     	mov	x0, x19
 2c06ee4: aa1f03e1     	mov	x1, xzr
 2c06ee8: aa1f03e2     	mov	x2, xzr
 2c06eec: 94bcefbc     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c06ef0: 36000120     	tbz	w0, #0x0, 0x2c06f14 <__start_il2cpp+0x13e900>
 2c06ef4: b4000193     	cbz	x19, 0x2c06f24 <__start_il2cpp+0x13e910>
 2c06ef8: d001b7a8     	adrp	x8, 0x62fc000
 2c06efc: aa1303e0     	mov	x0, x19
 2c06f00: f9477d08     	ldr	x8, [x8, #0xef8]
 2c06f04: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06f08: f9400101     	ldr	x1, [x8]
 2c06f0c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06f10: 141e6700     	b	0x33a0b10 <__start_il2cpp+0x8d84fc>
 2c06f14: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06f18: aa1f03e0     	mov	x0, xzr
 2c06f1c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06f20: d65f03c0     	ret
 2c06f24: 97f74059     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMover+__c :: System.Boolean <OnDragEnded>b__32_1(BoardSlot slot)
# VA 0x2c06f28 .. 0x2c06f84 (next mapped method entry)
 2c06f28: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c06f2c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c06f30: 9001d874     	adrp	x20, 0x6712000
 2c06f34: d001b755     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06f38: aa0103f3     	mov	x19, x1
 2c06f3c: 396ed288     	ldrb	w8, [x20, #0xbb4]
 2c06f40: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c06f44: 370000c8     	tbnz	w8, #0x0, 0x2c06f5c <__start_il2cpp+0x13e948>
 2c06f48: d001b740     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c06f4c: f9478c00     	ldr	x0, [x0, #0xf18]
 2c06f50: 97f73fa4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c06f54: 52800028     	mov	w8, #0x1                // =1
 2c06f58: 392ed288     	strb	w8, [x20, #0xbb4]
 2c06f5c: f94002a0     	ldr	x0, [x21]
 2c06f60: b940e408     	ldr	w8, [x0, #0xe4]
 2c06f64: 35000048     	cbnz	w8, 0x2c06f6c <__start_il2cpp+0x13e958>
 2c06f68: 97f73ffd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c06f6c: aa1303e0     	mov	x0, x19
 2c06f70: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c06f74: aa1f03e1     	mov	x1, xzr
 2c06f78: aa1f03e2     	mov	x2, xzr
 2c06f7c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c06f80: 14bcfd9e     	b	0x5b465f8 <__start_il2cpp+0x307dfe4>
