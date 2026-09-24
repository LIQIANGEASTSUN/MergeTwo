
# BoardHintItemGroup :: System.Void Clear()
# VA 0x2b9e46c .. 0x2b9e508 (next mapped method entry)
 2b9e46c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9e470: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9e474: 9001dbb4     	adrp	x20, 0x6712000
 2b9e478: aa0003f3     	mov	x19, x0
 2b9e47c: 39631a88     	ldrb	w8, [x20, #0x8c6]
 2b9e480: 370000c8     	tbnz	w8, #0x0, 0x2b9e498 <__start_il2cpp+0xd5e84>
 2b9e484: f001bac0     	adrp	x0, 0x62f9000
 2b9e488: f9477c00     	ldr	x0, [x0, #0xef8]
 2b9e48c: 97f8e255     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e490: 52800028     	mov	w8, #0x1                // =1
 2b9e494: 39231a88     	strb	w8, [x20, #0x8c6]
 2b9e498: f9400a68     	ldr	x8, [x19, #0x10]
 2b9e49c: b4000348     	cbz	x8, 0x2b9e504 <__start_il2cpp+0xd5ef0>
 2b9e4a0: 29432502     	ldp	w2, w9, [x8, #0x18]
 2b9e4a4: 11000529     	add	w9, w9, #0x1
 2b9e4a8: 7100045f     	cmp	w2, #0x1
 2b9e4ac: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2b9e4b0: 540000ab     	b.lt	0x2b9e4c4 <__start_il2cpp+0xd5eb0>
 2b9e4b4: f9400900     	ldr	x0, [x8, #0x10]
 2b9e4b8: 2a1f03e1     	mov	w1, wzr
 2b9e4bc: aa1f03e3     	mov	x3, xzr
 2b9e4c0: 949646c5     	bl	0x512ffd4 <__start_il2cpp+0x26679c0>
 2b9e4c4: f9400e68     	ldr	x8, [x19, #0x18]
 2b9e4c8: b40001e8     	cbz	x8, 0x2b9e504 <__start_il2cpp+0xd5ef0>
 2b9e4cc: 29432502     	ldp	w2, w9, [x8, #0x18]
 2b9e4d0: 11000529     	add	w9, w9, #0x1
 2b9e4d4: 7100045f     	cmp	w2, #0x1
 2b9e4d8: 2903251f     	stp	wzr, w9, [x8, #0x18]
 2b9e4dc: 540000eb     	b.lt	0x2b9e4f8 <__start_il2cpp+0xd5ee4>
 2b9e4e0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9e4e4: 2a1f03e1     	mov	w1, wzr
 2b9e4e8: f9400900     	ldr	x0, [x8, #0x10]
 2b9e4ec: aa1f03e3     	mov	x3, xzr
 2b9e4f0: f84207fe     	ldr	x30, [sp], #0x20
 2b9e4f4: 149646b8     	b	0x512ffd4 <__start_il2cpp+0x26679c0>
 2b9e4f8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9e4fc: f84207fe     	ldr	x30, [sp], #0x20
 2b9e500: d65f03c0     	ret
 2b9e504: 97f8e2e1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintItemGroup :: System.Void .ctor()
# VA 0x2b9e568 .. 0x2b9e614 (next mapped method entry)
 2b9e568: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9e56c: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9e570: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9e574: 9001dbb4     	adrp	x20, 0x6712000
 2b9e578: f001bad6     	adrp	x22, 0x62f9000
 2b9e57c: f001bad5     	adrp	x21, 0x62f9000
 2b9e580: 39631e88     	ldrb	w8, [x20, #0x8c7]
 2b9e584: f94782d6     	ldr	x22, [x22, #0xf00]
 2b9e588: f94786b5     	ldr	x21, [x21, #0xf08]
 2b9e58c: aa0003f3     	mov	x19, x0
 2b9e590: 37000128     	tbnz	w8, #0x0, 0x2b9e5b4 <__start_il2cpp+0xd5fa0>
 2b9e594: f001bac0     	adrp	x0, 0x62f9000
 2b9e598: f9478400     	ldr	x0, [x0, #0xf08]
 2b9e59c: 97f8e211     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e5a0: f001bac0     	adrp	x0, 0x62f9000
 2b9e5a4: f9478000     	ldr	x0, [x0, #0xf00]
 2b9e5a8: 97f8e20e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e5ac: 52800028     	mov	w8, #0x1                // =1
 2b9e5b0: 39231e88     	strb	w8, [x20, #0x8c7]
 2b9e5b4: f94002c0     	ldr	x0, [x22]
 2b9e5b8: 97f8e2b0     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9e5bc: f94002a1     	ldr	x1, [x21]
 2b9e5c0: aa0003f4     	mov	x20, x0
 2b9e5c4: 943e2801     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2b9e5c8: aa1303e0     	mov	x0, x19
 2b9e5cc: aa1403e1     	mov	x1, x20
 2b9e5d0: f8010c14     	str	x20, [x0, #0x10]!
 2b9e5d4: 97f8e1ee     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9e5d8: f94002c0     	ldr	x0, [x22]
 2b9e5dc: 97f8e2a7     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9e5e0: f94002a1     	ldr	x1, [x21]
 2b9e5e4: aa0003f4     	mov	x20, x0
 2b9e5e8: 943e27f8     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2b9e5ec: aa1303e0     	mov	x0, x19
 2b9e5f0: aa1403e1     	mov	x1, x20
 2b9e5f4: f8018c14     	str	x20, [x0, #0x18]!
 2b9e5f8: 97f8e1e5     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9e5fc: aa1303e0     	mov	x0, x19
 2b9e600: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9e604: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9e608: aa1f03e1     	mov	x1, xzr
 2b9e60c: f84307fe     	ldr	x30, [sp], #0x30
 2b9e610: 1496c54e     	b	0x514fb48 <__start_il2cpp+0x2687534>

# BoardHintItemGroup :: System.Boolean HaveAnyLockedCombination()
# VA 0x2b9e84c .. 0x2b9e8b8 (next mapped method entry)
 2b9e84c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9e850: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9e854: 9001dbb4     	adrp	x20, 0x6712000
 2b9e858: aa0003f3     	mov	x19, x0
 2b9e85c: 39631288     	ldrb	w8, [x20, #0x8c4]
 2b9e860: 370000c8     	tbnz	w8, #0x0, 0x2b9e878 <__start_il2cpp+0xd6264>
 2b9e864: f001bac0     	adrp	x0, 0x62f9000
 2b9e868: f9479800     	ldr	x0, [x0, #0xf30]
 2b9e86c: 97f8e15d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e870: 52800028     	mov	w8, #0x1                // =1
 2b9e874: 39231288     	strb	w8, [x20, #0x8c4]
 2b9e878: f9400a68     	ldr	x8, [x19, #0x10]
 2b9e87c: b40001c8     	cbz	x8, 0x2b9e8b4 <__start_il2cpp+0xd62a0>
 2b9e880: b9401908     	ldr	w8, [x8, #0x18]
 2b9e884: 7100051f     	cmp	w8, #0x1
 2b9e888: 540000eb     	b.lt	0x2b9e8a4 <__start_il2cpp+0xd6290>
 2b9e88c: f9400e68     	ldr	x8, [x19, #0x18]
 2b9e890: b4000128     	cbz	x8, 0x2b9e8b4 <__start_il2cpp+0xd62a0>
 2b9e894: b9401908     	ldr	w8, [x8, #0x18]
 2b9e898: 7100011f     	cmp	w8, #0x0
 2b9e89c: 1a9fd7e0     	cset	w0, gt
 2b9e8a0: 14000002     	b	0x2b9e8a8 <__start_il2cpp+0xd6294>
 2b9e8a4: 2a1f03e0     	mov	w0, wzr
 2b9e8a8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9e8ac: f84207fe     	ldr	x30, [sp], #0x20
 2b9e8b0: d65f03c0     	ret
 2b9e8b4: 97f8e1f5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintItemGroup :: System.Boolean HaveAnyUnlockedCombination()
# VA 0x2b9e944 .. 0x2b9e994 (next mapped method entry)
 2b9e944: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9e948: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9e94c: 9001dbb4     	adrp	x20, 0x6712000
 2b9e950: aa0003f3     	mov	x19, x0
 2b9e954: 39631688     	ldrb	w8, [x20, #0x8c5]
 2b9e958: 370000c8     	tbnz	w8, #0x0, 0x2b9e970 <__start_il2cpp+0xd635c>
 2b9e95c: f001bac0     	adrp	x0, 0x62f9000
 2b9e960: f9479800     	ldr	x0, [x0, #0xf30]
 2b9e964: 97f8e11f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e968: 52800028     	mov	w8, #0x1                // =1
 2b9e96c: 39231688     	strb	w8, [x20, #0x8c5]
 2b9e970: f9400e68     	ldr	x8, [x19, #0x18]
 2b9e974: b40000e8     	cbz	x8, 0x2b9e990 <__start_il2cpp+0xd637c>
 2b9e978: b9401908     	ldr	w8, [x8, #0x18]
 2b9e97c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9e980: 7100051f     	cmp	w8, #0x1
 2b9e984: 1a9fd7e0     	cset	w0, gt
 2b9e988: f84207fe     	ldr	x30, [sp], #0x20
 2b9e98c: d65f03c0     	ret
 2b9e990: 97f8e1be     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardHintItemGroup :: System.Boolean HaveAnyCombination()
# VA 0x2b9f39c .. 0x2b9f3c4 (next mapped method entry)
 2b9f39c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b9f3a0: aa0003f3     	mov	x19, x0
 2b9f3a4: 97fffd2a     	bl	0x2b9e84c <__start_il2cpp+0xd6238>
 2b9f3a8: 36000080     	tbz	w0, #0x0, 0x2b9f3b8 <__start_il2cpp+0xd6da4>
 2b9f3ac: 52800020     	mov	w0, #0x1                // =1
 2b9f3b0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b9f3b4: d65f03c0     	ret
 2b9f3b8: aa1303e0     	mov	x0, x19
 2b9f3bc: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b9f3c0: 17fffd61     	b	0x2b9e944 <__start_il2cpp+0xd6330>
