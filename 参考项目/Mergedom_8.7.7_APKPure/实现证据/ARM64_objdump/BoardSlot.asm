
# BoardSlot :: System.Boolean get_IsEmpty()
# VA 0x2b9e508 .. 0x2b9e568 (next mapped method entry)
 2b9e508: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b9e50c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9e510: 9001dbb5     	adrp	x21, 0x6712000
 2b9e514: d001ba94     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9e518: aa0003f3     	mov	x19, x0
 2b9e51c: 396322a8     	ldrb	w8, [x21, #0x8c8]
 2b9e520: f9478e94     	ldr	x20, [x20, #0xf18]
 2b9e524: 370000c8     	tbnz	w8, #0x0, 0x2b9e53c <__start_il2cpp+0xd5f28>
 2b9e528: d001ba80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9e52c: f9478c00     	ldr	x0, [x0, #0xf18]
 2b9e530: 97f8e22c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9e534: 52800028     	mov	w8, #0x1                // =1
 2b9e538: 392322a8     	strb	w8, [x21, #0x8c8]
 2b9e53c: f9400280     	ldr	x0, [x20]
 2b9e540: f9401a73     	ldr	x19, [x19, #0x30]
 2b9e544: b940e408     	ldr	w8, [x0, #0xe4]
 2b9e548: 35000048     	cbnz	w8, 0x2b9e550 <__start_il2cpp+0xd5f3c>
 2b9e54c: 97f8e284     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9e550: aa1303e0     	mov	x0, x19
 2b9e554: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9e558: aa1f03e1     	mov	x1, xzr
 2b9e55c: aa1f03e2     	mov	x2, xzr
 2b9e560: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b9e564: 14bea025     	b	0x5b465f8 <__start_il2cpp+0x307dfe4>

# BoardSlot :: BaseItem get_Item()
# VA 0x2b9f3d4 .. 0x2b9f3dc (next mapped method entry)
 2b9f3d4: f9401800     	ldr	x0, [x0, #0x30]
 2b9f3d8: d65f03c0     	ret

# BoardSlot :: System.Void set_Item(BaseItem value)
# VA 0x2b9f3dc .. 0x2b9f3e4 (next mapped method entry)
 2b9f3dc: f8030c01     	str	x1, [x0, #0x30]!
 2b9f3e0: 17f8de6b     	b	0x29d6d8c <mono_class_get_checked+0x674>

# BoardSlot :: UnityEngine.Vector2 get_TopPosition()
# VA 0x2b9f3e4 .. 0x2b9f46c (next mapped method entry)
 2b9f3e4: 6dbd23e9     	stp	d9, d8, [sp, #-0x30]!
 2b9f3e8: f9000bfe     	str	x30, [sp, #0x10]
 2b9f3ec: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f3f0: aa1f03e1     	mov	x1, xzr
 2b9f3f4: aa0003f3     	mov	x19, x0
 2b9f3f8: 94be8159     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f3fc: b4000360     	cbz	x0, 0x2b9f468 <__start_il2cpp+0xd6e54>
 2b9f400: aa1f03e1     	mov	x1, xzr
 2b9f404: 94bed30b     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f408: 1e204008     	fmov	s8, s0
 2b9f40c: 1e204029     	fmov	s9, s1
 2b9f410: f001db94     	adrp	x20, 0x6712000
 2b9f414: 39477a88     	ldrb	w8, [x20, #0x1de]
 2b9f418: 350000c8     	cbnz	w8, 0x2b9f430 <__start_il2cpp+0xd6e1c>
 2b9f41c: d001ba80     	adrp	x0, 0x62f1000
 2b9f420: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f424: 97f8de6f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f428: 52800028     	mov	w8, #0x1                // =1
 2b9f42c: 39077a88     	strb	w8, [x20, #0x1de]
 2b9f430: d001ba88     	adrp	x8, 0x62f1000
 2b9f434: f940dd08     	ldr	x8, [x8, #0x1b8]
 2b9f438: bd406262     	ldr	s2, [x19, #0x60]
 2b9f43c: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9f440: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f444: f9400108     	ldr	x8, [x8]
 2b9f448: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f44c: 2d430500     	ldp	s0, s1, [x8, #0x18]
 2b9f450: 1e220800     	fmul	s0, s0, s2
 2b9f454: 1e220821     	fmul	s1, s1, s2
 2b9f458: 1e202900     	fadd	s0, s8, s0
 2b9f45c: 1e212921     	fadd	s1, s9, s1
 2b9f460: 6cc323e9     	ldp	d9, d8, [sp], #0x30
 2b9f464: d65f03c0     	ret
 2b9f468: 97f8df08     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_BottomPosition()
# VA 0x2b9f46c .. 0x2b9f4f4 (next mapped method entry)
 2b9f46c: 6dbd23e9     	stp	d9, d8, [sp, #-0x30]!
 2b9f470: f9000bfe     	str	x30, [sp, #0x10]
 2b9f474: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f478: aa1f03e1     	mov	x1, xzr
 2b9f47c: aa0003f3     	mov	x19, x0
 2b9f480: 94be8137     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f484: b4000360     	cbz	x0, 0x2b9f4f0 <__start_il2cpp+0xd6edc>
 2b9f488: aa1f03e1     	mov	x1, xzr
 2b9f48c: 94bed2e9     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f490: 1e204008     	fmov	s8, s0
 2b9f494: 1e204029     	fmov	s9, s1
 2b9f498: f001db94     	adrp	x20, 0x6712000
 2b9f49c: 39653288     	ldrb	w8, [x20, #0x94c]
 2b9f4a0: 350000c8     	cbnz	w8, 0x2b9f4b8 <__start_il2cpp+0xd6ea4>
 2b9f4a4: d001ba80     	adrp	x0, 0x62f1000
 2b9f4a8: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f4ac: 97f8de4d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f4b0: 52800028     	mov	w8, #0x1                // =1
 2b9f4b4: 39253288     	strb	w8, [x20, #0x94c]
 2b9f4b8: d001ba88     	adrp	x8, 0x62f1000
 2b9f4bc: f940dd08     	ldr	x8, [x8, #0x1b8]
 2b9f4c0: bd406262     	ldr	s2, [x19, #0x60]
 2b9f4c4: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9f4c8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f4cc: f9400108     	ldr	x8, [x8]
 2b9f4d0: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f4d4: 2d448500     	ldp	s0, s1, [x8, #0x24]
 2b9f4d8: 1e220800     	fmul	s0, s0, s2
 2b9f4dc: 1e220821     	fmul	s1, s1, s2
 2b9f4e0: 1e202900     	fadd	s0, s8, s0
 2b9f4e4: 1e212921     	fadd	s1, s9, s1
 2b9f4e8: 6cc323e9     	ldp	d9, d8, [sp], #0x30
 2b9f4ec: d65f03c0     	ret
 2b9f4f0: 97f8dee6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_LeftPosition()
# VA 0x2b9f4f4 .. 0x2b9f57c (next mapped method entry)
 2b9f4f4: 6dbd23e9     	stp	d9, d8, [sp, #-0x30]!
 2b9f4f8: f9000bfe     	str	x30, [sp, #0x10]
 2b9f4fc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f500: aa1f03e1     	mov	x1, xzr
 2b9f504: aa0003f3     	mov	x19, x0
 2b9f508: 94be8115     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f50c: b4000360     	cbz	x0, 0x2b9f578 <__start_il2cpp+0xd6f64>
 2b9f510: aa1f03e1     	mov	x1, xzr
 2b9f514: 94bed2c7     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f518: 1e204008     	fmov	s8, s0
 2b9f51c: 1e204029     	fmov	s9, s1
 2b9f520: f001db94     	adrp	x20, 0x6712000
 2b9f524: 39653688     	ldrb	w8, [x20, #0x94d]
 2b9f528: 350000c8     	cbnz	w8, 0x2b9f540 <__start_il2cpp+0xd6f2c>
 2b9f52c: d001ba80     	adrp	x0, 0x62f1000
 2b9f530: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f534: 97f8de2b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f538: 52800028     	mov	w8, #0x1                // =1
 2b9f53c: 39253688     	strb	w8, [x20, #0x94d]
 2b9f540: d001ba88     	adrp	x8, 0x62f1000
 2b9f544: f940dd08     	ldr	x8, [x8, #0x1b8]
 2b9f548: bd406262     	ldr	s2, [x19, #0x60]
 2b9f54c: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9f550: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f554: f9400108     	ldr	x8, [x8]
 2b9f558: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f55c: 2d460500     	ldp	s0, s1, [x8, #0x30]
 2b9f560: 1e220800     	fmul	s0, s0, s2
 2b9f564: 1e220821     	fmul	s1, s1, s2
 2b9f568: 1e202900     	fadd	s0, s8, s0
 2b9f56c: 1e212921     	fadd	s1, s9, s1
 2b9f570: 6cc323e9     	ldp	d9, d8, [sp], #0x30
 2b9f574: d65f03c0     	ret
 2b9f578: 97f8dec4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_RightPosition()
# VA 0x2b9f57c .. 0x2b9f604 (next mapped method entry)
 2b9f57c: 6dbd23e9     	stp	d9, d8, [sp, #-0x30]!
 2b9f580: f9000bfe     	str	x30, [sp, #0x10]
 2b9f584: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f588: aa1f03e1     	mov	x1, xzr
 2b9f58c: aa0003f3     	mov	x19, x0
 2b9f590: 94be80f3     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f594: b4000360     	cbz	x0, 0x2b9f600 <__start_il2cpp+0xd6fec>
 2b9f598: aa1f03e1     	mov	x1, xzr
 2b9f59c: 94bed2a5     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f5a0: 1e204008     	fmov	s8, s0
 2b9f5a4: 1e204029     	fmov	s9, s1
 2b9f5a8: f001db94     	adrp	x20, 0x6712000
 2b9f5ac: 39477e88     	ldrb	w8, [x20, #0x1df]
 2b9f5b0: 350000c8     	cbnz	w8, 0x2b9f5c8 <__start_il2cpp+0xd6fb4>
 2b9f5b4: d001ba80     	adrp	x0, 0x62f1000
 2b9f5b8: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f5bc: 97f8de09     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f5c0: 52800028     	mov	w8, #0x1                // =1
 2b9f5c4: 39077e88     	strb	w8, [x20, #0x1df]
 2b9f5c8: d001ba88     	adrp	x8, 0x62f1000
 2b9f5cc: f940dd08     	ldr	x8, [x8, #0x1b8]
 2b9f5d0: bd406262     	ldr	s2, [x19, #0x60]
 2b9f5d4: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9f5d8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f5dc: f9400108     	ldr	x8, [x8]
 2b9f5e0: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f5e4: 2d478500     	ldp	s0, s1, [x8, #0x3c]
 2b9f5e8: 1e220800     	fmul	s0, s0, s2
 2b9f5ec: 1e220821     	fmul	s1, s1, s2
 2b9f5f0: 1e202900     	fadd	s0, s8, s0
 2b9f5f4: 1e212921     	fadd	s1, s9, s1
 2b9f5f8: 6cc323e9     	ldp	d9, d8, [sp], #0x30
 2b9f5fc: d65f03c0     	ret
 2b9f600: 97f8dea2     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_TopLeftPosition()
# VA 0x2b9f604 .. 0x2b9f6d8 (next mapped method entry)
 2b9f604: d10143ff     	sub	sp, sp, #0x50
 2b9f608: fd001be8     	str	d8, [sp, #0x30]
 2b9f60c: f9001ffe     	str	x30, [sp, #0x38]
 2b9f610: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2b9f614: aa1f03e1     	mov	x1, xzr
 2b9f618: aa0003f3     	mov	x19, x0
 2b9f61c: 94be80d0     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f620: b40005a0     	cbz	x0, 0x2b9f6d4 <__start_il2cpp+0xd70c0>
 2b9f624: aa1f03e1     	mov	x1, xzr
 2b9f628: 94bed282     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f62c: f001db94     	adrp	x20, 0x6712000
 2b9f630: bd406263     	ldr	s3, [x19, #0x60]
 2b9f634: 39477a88     	ldrb	w8, [x20, #0x1de]
 2b9f638: 35000148     	cbnz	w8, 0x2b9f660 <__start_il2cpp+0xd704c>
 2b9f63c: d001ba80     	adrp	x0, 0x62f1000
 2b9f640: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f644: ad0083e1     	stp	q1, q0, [sp, #0x10]
 2b9f648: 3d8003e3     	str	q3, [sp]
 2b9f64c: 97f8dde5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f650: ad4007e3     	ldp	q3, q1, [sp]
 2b9f654: 52800028     	mov	w8, #0x1                // =1
 2b9f658: 3dc00be0     	ldr	q0, [sp, #0x20]
 2b9f65c: 39077a88     	strb	w8, [x20, #0x1de]
 2b9f660: d001ba93     	adrp	x19, 0x62f1000
 2b9f664: f001db94     	adrp	x20, 0x6712000
 2b9f668: f940de73     	ldr	x19, [x19, #0x1b8]
 2b9f66c: 39653689     	ldrb	w9, [x20, #0x94d]
 2b9f670: f9400268     	ldr	x8, [x19]
 2b9f674: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f678: fd400d08     	ldr	d8, [x8, #0x18]
 2b9f67c: 35000169     	cbnz	w9, 0x2b9f6a8 <__start_il2cpp+0xd7094>
 2b9f680: aa1303e0     	mov	x0, x19
 2b9f684: ad0083e1     	stp	q1, q0, [sp, #0x10]
 2b9f688: 3d8003e3     	str	q3, [sp]
 2b9f68c: 97f8ddd5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f690: f9400268     	ldr	x8, [x19]
 2b9f694: ad4007e3     	ldp	q3, q1, [sp]
 2b9f698: 3dc00be0     	ldr	q0, [sp, #0x20]
 2b9f69c: 52800029     	mov	w9, #0x1                // =1
 2b9f6a0: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f6a4: 39253689     	strb	w9, [x20, #0x94d]
 2b9f6a8: fd401902     	ldr	d2, [x8, #0x30]
 2b9f6ac: 6e0c0420     	mov	v0.s[1], v1.s[0]
 2b9f6b0: f9401ffe     	ldr	x30, [sp, #0x38]
 2b9f6b4: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2b9f6b8: 0e22d502     	fadd	v2.2s, v8.2s, v2.2s
 2b9f6bc: fd401be8     	ldr	d8, [sp, #0x30]
 2b9f6c0: 0f839042     	fmul	v2.2s, v2.2s, v3.s[0]
 2b9f6c4: 0e22d400     	fadd	v0.2s, v0.2s, v2.2s
 2b9f6c8: 5e0c0401     	mov	s1, v0.s[1]
 2b9f6cc: 910143ff     	add	sp, sp, #0x50
 2b9f6d0: d65f03c0     	ret
 2b9f6d4: 97f8de6d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_TopRightPosition()
# VA 0x2b9f6d8 .. 0x2b9f760 (next mapped method entry)
 2b9f6d8: 6dbd23e9     	stp	d9, d8, [sp, #-0x30]!
 2b9f6dc: f9000bfe     	str	x30, [sp, #0x10]
 2b9f6e0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f6e4: aa1f03e1     	mov	x1, xzr
 2b9f6e8: aa0003f3     	mov	x19, x0
 2b9f6ec: 94be809c     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f6f0: b4000360     	cbz	x0, 0x2b9f75c <__start_il2cpp+0xd7148>
 2b9f6f4: aa1f03e1     	mov	x1, xzr
 2b9f6f8: 94bed24e     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f6fc: 1e204008     	fmov	s8, s0
 2b9f700: 1e204029     	fmov	s9, s1
 2b9f704: f001db94     	adrp	x20, 0x6712000
 2b9f708: 39478688     	ldrb	w8, [x20, #0x1e1]
 2b9f70c: 350000c8     	cbnz	w8, 0x2b9f724 <__start_il2cpp+0xd7110>
 2b9f710: d001ba80     	adrp	x0, 0x62f1000
 2b9f714: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f718: 97f8ddb2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f71c: 52800028     	mov	w8, #0x1                // =1
 2b9f720: 39078688     	strb	w8, [x20, #0x1e1]
 2b9f724: d001ba88     	adrp	x8, 0x62f1000
 2b9f728: f940dd08     	ldr	x8, [x8, #0x1b8]
 2b9f72c: bd406262     	ldr	s2, [x19, #0x60]
 2b9f730: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9f734: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f738: f9400108     	ldr	x8, [x8]
 2b9f73c: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f740: 2d418500     	ldp	s0, s1, [x8, #0xc]
 2b9f744: 1e220800     	fmul	s0, s0, s2
 2b9f748: 1e220821     	fmul	s1, s1, s2
 2b9f74c: 1e202900     	fadd	s0, s8, s0
 2b9f750: 1e212921     	fadd	s1, s9, s1
 2b9f754: 6cc323e9     	ldp	d9, d8, [sp], #0x30
 2b9f758: d65f03c0     	ret
 2b9f75c: 97f8de4b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_BottomRightPosition()
# VA 0x2b9f760 .. 0x2b9f834 (next mapped method entry)
 2b9f760: d10143ff     	sub	sp, sp, #0x50
 2b9f764: fd001be8     	str	d8, [sp, #0x30]
 2b9f768: f9001ffe     	str	x30, [sp, #0x38]
 2b9f76c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2b9f770: aa1f03e1     	mov	x1, xzr
 2b9f774: aa0003f3     	mov	x19, x0
 2b9f778: 94be8079     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f77c: b40005a0     	cbz	x0, 0x2b9f830 <__start_il2cpp+0xd721c>
 2b9f780: aa1f03e1     	mov	x1, xzr
 2b9f784: 94bed22b     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f788: f001db94     	adrp	x20, 0x6712000
 2b9f78c: bd406263     	ldr	s3, [x19, #0x60]
 2b9f790: 39653288     	ldrb	w8, [x20, #0x94c]
 2b9f794: 35000148     	cbnz	w8, 0x2b9f7bc <__start_il2cpp+0xd71a8>
 2b9f798: d001ba80     	adrp	x0, 0x62f1000
 2b9f79c: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f7a0: ad0083e1     	stp	q1, q0, [sp, #0x10]
 2b9f7a4: 3d8003e3     	str	q3, [sp]
 2b9f7a8: 97f8dd8e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f7ac: ad4007e3     	ldp	q3, q1, [sp]
 2b9f7b0: 52800028     	mov	w8, #0x1                // =1
 2b9f7b4: 3dc00be0     	ldr	q0, [sp, #0x20]
 2b9f7b8: 39253288     	strb	w8, [x20, #0x94c]
 2b9f7bc: d001ba93     	adrp	x19, 0x62f1000
 2b9f7c0: f001db94     	adrp	x20, 0x6712000
 2b9f7c4: f940de73     	ldr	x19, [x19, #0x1b8]
 2b9f7c8: 39477e89     	ldrb	w9, [x20, #0x1df]
 2b9f7cc: f9400268     	ldr	x8, [x19]
 2b9f7d0: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f7d4: fc424108     	ldur	d8, [x8, #0x24]
 2b9f7d8: 35000169     	cbnz	w9, 0x2b9f804 <__start_il2cpp+0xd71f0>
 2b9f7dc: aa1303e0     	mov	x0, x19
 2b9f7e0: ad0083e1     	stp	q1, q0, [sp, #0x10]
 2b9f7e4: 3d8003e3     	str	q3, [sp]
 2b9f7e8: 97f8dd7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f7ec: f9400268     	ldr	x8, [x19]
 2b9f7f0: ad4007e3     	ldp	q3, q1, [sp]
 2b9f7f4: 3dc00be0     	ldr	q0, [sp, #0x20]
 2b9f7f8: 52800029     	mov	w9, #0x1                // =1
 2b9f7fc: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f800: 39077e89     	strb	w9, [x20, #0x1df]
 2b9f804: fc43c102     	ldur	d2, [x8, #0x3c]
 2b9f808: 6e0c0420     	mov	v0.s[1], v1.s[0]
 2b9f80c: f9401ffe     	ldr	x30, [sp, #0x38]
 2b9f810: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2b9f814: 0e22d502     	fadd	v2.2s, v8.2s, v2.2s
 2b9f818: fd401be8     	ldr	d8, [sp, #0x30]
 2b9f81c: 0f839042     	fmul	v2.2s, v2.2s, v3.s[0]
 2b9f820: 0e22d400     	fadd	v0.2s, v0.2s, v2.2s
 2b9f824: 5e0c0401     	mov	s1, v0.s[1]
 2b9f828: 910143ff     	add	sp, sp, #0x50
 2b9f82c: d65f03c0     	ret
 2b9f830: 97f8de16     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_BottomLeftPosition()
# VA 0x2b9f834 .. 0x2b9f8bc (next mapped method entry)
 2b9f834: 6dbd23e9     	stp	d9, d8, [sp, #-0x30]!
 2b9f838: f9000bfe     	str	x30, [sp, #0x10]
 2b9f83c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f840: aa1f03e1     	mov	x1, xzr
 2b9f844: aa0003f3     	mov	x19, x0
 2b9f848: 94be8045     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f84c: b4000360     	cbz	x0, 0x2b9f8b8 <__start_il2cpp+0xd72a4>
 2b9f850: aa1f03e1     	mov	x1, xzr
 2b9f854: 94bed1f7     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f858: 1e204008     	fmov	s8, s0
 2b9f85c: 1e204029     	fmov	s9, s1
 2b9f860: f001db94     	adrp	x20, 0x6712000
 2b9f864: 39478688     	ldrb	w8, [x20, #0x1e1]
 2b9f868: 350000c8     	cbnz	w8, 0x2b9f880 <__start_il2cpp+0xd726c>
 2b9f86c: d001ba80     	adrp	x0, 0x62f1000
 2b9f870: f940dc00     	ldr	x0, [x0, #0x1b8]
 2b9f874: 97f8dd5b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f878: 52800028     	mov	w8, #0x1                // =1
 2b9f87c: 39078688     	strb	w8, [x20, #0x1e1]
 2b9f880: d001ba88     	adrp	x8, 0x62f1000
 2b9f884: f940dd08     	ldr	x8, [x8, #0x1b8]
 2b9f888: bd406262     	ldr	s2, [x19, #0x60]
 2b9f88c: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9f890: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f894: f9400108     	ldr	x8, [x8]
 2b9f898: f9405d08     	ldr	x8, [x8, #0xb8]
 2b9f89c: 2d418500     	ldp	s0, s1, [x8, #0xc]
 2b9f8a0: 1e220800     	fmul	s0, s0, s2
 2b9f8a4: 1e220821     	fmul	s1, s1, s2
 2b9f8a8: 1e203900     	fsub	s0, s8, s0
 2b9f8ac: 1e213921     	fsub	s1, s9, s1
 2b9f8b0: 6cc323e9     	ldp	d9, d8, [sp], #0x30
 2b9f8b4: d65f03c0     	ret
 2b9f8b8: 97f8ddf4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: UnityEngine.Vector2 get_CenterPosition()
# VA 0x2b9f8bc .. 0x2b9f8dc (next mapped method entry)
 2b9f8bc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b9f8c0: aa1f03e1     	mov	x1, xzr
 2b9f8c4: 94be8026     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f8c8: b4000080     	cbz	x0, 0x2b9f8d8 <__start_il2cpp+0xd72c4>
 2b9f8cc: aa1f03e1     	mov	x1, xzr
 2b9f8d0: f84107fe     	ldr	x30, [sp], #0x10
 2b9f8d4: 14bed1d7     	b	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f8d8: 97f8ddec     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.Void Init(System.Boolean isLocked, BaseItem item)
# VA 0x2b9f8dc .. 0x2b9f90c (next mapped method entry)
 2b9f8dc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b9f8e0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b9f8e4: 2a0103f3     	mov	w19, w1
 2b9f8e8: aa0203e1     	mov	x1, x2
 2b9f8ec: 52800022     	mov	w2, #0x1                // =1
 2b9f8f0: aa0003f4     	mov	x20, x0
 2b9f8f4: 94000006     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2b9f8f8: aa1403e0     	mov	x0, x20
 2b9f8fc: 2a1303e1     	mov	w1, w19
 2b9f900: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b9f904: f84207fe     	ldr	x30, [sp], #0x20
 2b9f908: 14000043     	b	0x2b9fa14 <__start_il2cpp+0xd7400>

# BoardSlot :: System.Void SetItem(BaseItem item, System.Boolean setPosition = True)
# VA 0x2b9f90c .. 0x2b9fa14 (next mapped method entry)
 2b9f90c: a9bd5ffe     	stp	x30, x23, [sp, #-0x30]!
 2b9f910: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9f914: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9f918: f001db95     	adrp	x21, 0x6712000
 2b9f91c: b001ba97     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9f920: 2a0203f4     	mov	w20, w2
 2b9f924: 39632aa8     	ldrb	w8, [x21, #0x8ca]
 2b9f928: f9478ef7     	ldr	x23, [x23, #0xf18]
 2b9f92c: aa0103f6     	mov	x22, x1
 2b9f930: aa0003f3     	mov	x19, x0
 2b9f934: 370000c8     	tbnz	w8, #0x0, 0x2b9f94c <__start_il2cpp+0xd7338>
 2b9f938: b001ba80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9f93c: f9478c00     	ldr	x0, [x0, #0xf18]
 2b9f940: 97f8dd28     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9f944: 52800028     	mov	w8, #0x1                // =1
 2b9f948: 39232aa8     	strb	w8, [x21, #0x8ca]
 2b9f94c: aa1303f5     	mov	x21, x19
 2b9f950: aa1603e1     	mov	x1, x22
 2b9f954: f8030eb6     	str	x22, [x21, #0x30]!
 2b9f958: aa1503e0     	mov	x0, x21
 2b9f95c: 97f8dd0c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9f960: f94002e0     	ldr	x0, [x23]
 2b9f964: f94002b6     	ldr	x22, [x21]
 2b9f968: b940e408     	ldr	w8, [x0, #0xe4]
 2b9f96c: 35000048     	cbnz	w8, 0x2b9f974 <__start_il2cpp+0xd7360>
 2b9f970: 97f8dd7b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9f974: aa1603e0     	mov	x0, x22
 2b9f978: aa1f03e1     	mov	x1, xzr
 2b9f97c: 94beab32     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2b9f980: 36000400     	tbz	w0, #0x0, 0x2b9fa00 <__start_il2cpp+0xd73ec>
 2b9f984: f94002a0     	ldr	x0, [x21]
 2b9f988: b4000440     	cbz	x0, 0x2b9fa10 <__start_il2cpp+0xd73fc>
 2b9f98c: aa1303e1     	mov	x1, x19
 2b9f990: aa1f03e2     	mov	x2, xzr
 2b9f994: 94015182     	bl	0x2bf3f9c <__start_il2cpp+0x12b988>
 2b9f998: 36000354     	tbz	w20, #0x0, 0x2b9fa00 <__start_il2cpp+0xd73ec>
 2b9f99c: f94002a8     	ldr	x8, [x21]
 2b9f9a0: b4000388     	cbz	x8, 0x2b9fa10 <__start_il2cpp+0xd73fc>
 2b9f9a4: f9403100     	ldr	x0, [x8, #0x60]
 2b9f9a8: b4000340     	cbz	x0, 0x2b9fa10 <__start_il2cpp+0xd73fc>
 2b9f9ac: b9402a61     	ldr	w1, [x19, #0x28]
 2b9f9b0: aa1f03e2     	mov	x2, xzr
 2b9f9b4: 9402a2d5     	bl	0x2c48508 <__start_il2cpp+0x17fef4>
 2b9f9b8: f9401a60     	ldr	x0, [x19, #0x30]
 2b9f9bc: b40002a0     	cbz	x0, 0x2b9fa10 <__start_il2cpp+0xd73fc>
 2b9f9c0: aa1f03e1     	mov	x1, xzr
 2b9f9c4: 94be7fe6     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f9c8: aa0003f4     	mov	x20, x0
 2b9f9cc: aa1303e0     	mov	x0, x19
 2b9f9d0: aa1f03e1     	mov	x1, xzr
 2b9f9d4: 94be7fe2     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2b9f9d8: b40001c0     	cbz	x0, 0x2b9fa10 <__start_il2cpp+0xd73fc>
 2b9f9dc: aa1f03e1     	mov	x1, xzr
 2b9f9e0: 94bed194     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2b9f9e4: b4000174     	cbz	x20, 0x2b9fa10 <__start_il2cpp+0xd73fc>
 2b9f9e8: aa1403e0     	mov	x0, x20
 2b9f9ec: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9f9f0: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9f9f4: aa1f03e1     	mov	x1, xzr
 2b9f9f8: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2b9f9fc: 14bed1c4     	b	0x5b5410c <__start_il2cpp+0x308baf8>
 2b9fa00: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9fa04: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9fa08: a8c35ffe     	ldp	x30, x23, [sp], #0x30
 2b9fa0c: d65f03c0     	ret
 2b9fa10: 97f8dd9e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.Void SetLock(System.Boolean status)
# VA 0x2b9fa14 .. 0x2b9fad4 (next mapped method entry)
 2b9fa14: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9fa18: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9fa1c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9fa20: f001db96     	adrp	x22, 0x6712000
 2b9fa24: 2a0103f3     	mov	w19, w1
 2b9fa28: aa0003f4     	mov	x20, x0
 2b9fa2c: 396326c8     	ldrb	w8, [x22, #0x8c9]
 2b9fa30: 12000035     	and	w21, w1, #0x1
 2b9fa34: 370000c8     	tbnz	w8, #0x0, 0x2b9fa4c <__start_il2cpp+0xd7438>
 2b9fa38: b001ba80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9fa3c: f9478c00     	ldr	x0, [x0, #0xf18]
 2b9fa40: 97f8dce8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9fa44: 52800028     	mov	w8, #0x1                // =1
 2b9fa48: 392326c8     	strb	w8, [x22, #0x8c9]
 2b9fa4c: f9401e80     	ldr	x0, [x20, #0x38]
 2b9fa50: 3900b695     	strb	w21, [x20, #0x2d]
 2b9fa54: b40003e0     	cbz	x0, 0x2b9fad0 <__start_il2cpp+0xd74bc>
 2b9fa58: b001ba95     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9fa5c: 12000261     	and	w1, w19, #0x1
 2b9fa60: aa1f03e2     	mov	x2, xzr
 2b9fa64: f9478eb5     	ldr	x21, [x21, #0xf18]
 2b9fa68: 94be9244     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2b9fa6c: f94002a0     	ldr	x0, [x21]
 2b9fa70: f9401a95     	ldr	x21, [x20, #0x30]
 2b9fa74: b940e408     	ldr	w8, [x0, #0xe4]
 2b9fa78: 35000048     	cbnz	w8, 0x2b9fa80 <__start_il2cpp+0xd746c>
 2b9fa7c: 97f8dd38     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9fa80: aa1503e0     	mov	x0, x21
 2b9fa84: aa1f03e1     	mov	x1, xzr
 2b9fa88: 94beaaef     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2b9fa8c: 360001a0     	tbz	w0, #0x0, 0x2b9fac0 <__start_il2cpp+0xd74ac>
 2b9fa90: f9401a80     	ldr	x0, [x20, #0x30]
 2b9fa94: b40001e0     	cbz	x0, 0x2b9fad0 <__start_il2cpp+0xd74bc>
 2b9fa98: aa1f03e1     	mov	x1, xzr
 2b9fa9c: 94be7fe4     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2b9faa0: b4000180     	cbz	x0, 0x2b9fad0 <__start_il2cpp+0xd74bc>
 2b9faa4: 52800028     	mov	w8, #0x1                // =1
 2b9faa8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9faac: 0a330101     	bic	w1, w8, w19
 2b9fab0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9fab4: aa1f03e2     	mov	x2, xzr
 2b9fab8: f84307fe     	ldr	x30, [sp], #0x30
 2b9fabc: 14be922f     	b	0x5b44378 <__start_il2cpp+0x307bd64>
 2b9fac0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9fac4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9fac8: f84307fe     	ldr	x30, [sp], #0x30
 2b9facc: d65f03c0     	ret
 2b9fad0: 97f8dd6e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.Void SetBackground(UnityEngine.Sprite background)
# VA 0x2b9fad4 .. 0x2b9fb68 (next mapped method entry)
 2b9fad4: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9fad8: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9fadc: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9fae0: f001db95     	adrp	x21, 0x6712000
 2b9fae4: b001ba96     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9fae8: aa0103f3     	mov	x19, x1
 2b9faec: 39632ea8     	ldrb	w8, [x21, #0x8cb]
 2b9faf0: f9478ed6     	ldr	x22, [x22, #0xf18]
 2b9faf4: aa0003f4     	mov	x20, x0
 2b9faf8: 370000c8     	tbnz	w8, #0x0, 0x2b9fb10 <__start_il2cpp+0xd74fc>
 2b9fafc: b001ba80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9fb00: f9478c00     	ldr	x0, [x0, #0xf18]
 2b9fb04: 97f8dcb7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9fb08: 52800028     	mov	w8, #0x1                // =1
 2b9fb0c: 39232ea8     	strb	w8, [x21, #0x8cb]
 2b9fb10: f94002c0     	ldr	x0, [x22]
 2b9fb14: b940e408     	ldr	w8, [x0, #0xe4]
 2b9fb18: 35000048     	cbnz	w8, 0x2b9fb20 <__start_il2cpp+0xd750c>
 2b9fb1c: 97f8dd10     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b9fb20: aa1303e0     	mov	x0, x19
 2b9fb24: aa1f03e1     	mov	x1, xzr
 2b9fb28: aa1f03e2     	mov	x2, xzr
 2b9fb2c: 94be9ab3     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2b9fb30: 360000a0     	tbz	w0, #0x0, 0x2b9fb44 <__start_il2cpp+0xd7530>
 2b9fb34: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9fb38: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9fb3c: f84307fe     	ldr	x30, [sp], #0x30
 2b9fb40: d65f03c0     	ret
 2b9fb44: f9402e80     	ldr	x0, [x20, #0x58]
 2b9fb48: b40000e0     	cbz	x0, 0x2b9fb64 <__start_il2cpp+0xd7550>
 2b9fb4c: aa1303e1     	mov	x1, x19
 2b9fb50: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9fb54: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9fb58: aa1f03e2     	mov	x2, xzr
 2b9fb5c: f84307fe     	ldr	x30, [sp], #0x30
 2b9fb60: 14bd3eb5     	b	0x5aef634 <__start_il2cpp+0x3027020>
 2b9fb64: 97f8dd49     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.Boolean IsTappable()
# VA 0x2b9fb68 .. 0x2b9fba8 (next mapped method entry)
 2b9fb68: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b9fb6c: 3940b408     	ldrb	w8, [x0, #0x2d]
 2b9fb70: 35000088     	cbnz	w8, 0x2b9fb80 <__start_il2cpp+0xd756c>
 2b9fb74: aa0003f3     	mov	x19, x0
 2b9fb78: 97fffa64     	bl	0x2b9e508 <__start_il2cpp+0xd5ef4>
 2b9fb7c: 36000080     	tbz	w0, #0x0, 0x2b9fb8c <__start_il2cpp+0xd7578>
 2b9fb80: 2a1f03e0     	mov	w0, wzr
 2b9fb84: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b9fb88: d65f03c0     	ret
 2b9fb8c: f9401a68     	ldr	x8, [x19, #0x30]
 2b9fb90: b40000a8     	cbz	x8, 0x2b9fba4 <__start_il2cpp+0xd7590>
 2b9fb94: 39410108     	ldrb	w8, [x8, #0x40]
 2b9fb98: 7100011f     	cmp	w8, #0x0
 2b9fb9c: 1a9f17e0     	cset	w0, eq
 2b9fba0: 17fffff9     	b	0x2b9fb84 <__start_il2cpp+0xd7570>
 2b9fba4: 97f8dd39     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.Void OnSelected()
# VA 0x2b9fba8 .. 0x2b9fbac (next mapped method entry)
 2b9fba8: d65f03c0     	ret

# BoardSlot :: System.Void Tap()
# VA 0x2b9fbac .. 0x2b9fbcc (next mapped method entry)
 2b9fbac: f9401800     	ldr	x0, [x0, #0x30]
 2b9fbb0: b40000a0     	cbz	x0, 0x2b9fbc4 <__start_il2cpp+0xd75b0>
 2b9fbb4: f9400008     	ldr	x8, [x0]
 2b9fbb8: f9411901     	ldr	x1, [x8, #0x230]
 2b9fbbc: f9411502     	ldr	x2, [x8, #0x228]
 2b9fbc0: d61f0040     	br	x2
 2b9fbc4: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b9fbc8: 97f8dd30     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.String ToString()
# VA 0x2b9fbcc .. 0x2b9fd9c (next mapped method entry)
 2b9fbcc: d10103ff     	sub	sp, sp, #0x40
 2b9fbd0: f9000bfe     	str	x30, [sp, #0x10]
 2b9fbd4: a90257f6     	stp	x22, x21, [sp, #0x20]
 2b9fbd8: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2b9fbdc: f001db93     	adrp	x19, 0x6712000
 2b9fbe0: d001ba95     	adrp	x21, 0x62f1000
 2b9fbe4: aa0003f4     	mov	x20, x0
 2b9fbe8: 39633268     	ldrb	w8, [x19, #0x8cc]
 2b9fbec: f9413eb5     	ldr	x21, [x21, #0x278]
 2b9fbf0: 37000128     	tbnz	w8, #0x0, 0x2b9fc14 <__start_il2cpp+0xd7600>
 2b9fbf4: d001ba80     	adrp	x0, 0x62f1000
 2b9fbf8: f9413c00     	ldr	x0, [x0, #0x278]
 2b9fbfc: 97f8dc79     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9fc00: d001bac0     	adrp	x0, 0x62f9000
 2b9fc04: f947ec00     	ldr	x0, [x0, #0xfd8]
 2b9fc08: 97f8dc76     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9fc0c: 52800028     	mov	w8, #0x1                // =1
 2b9fc10: 39233268     	strb	w8, [x19, #0x8cc]
 2b9fc14: f94002a0     	ldr	x0, [x21]
 2b9fc18: 52800081     	mov	w1, #0x4                // =4
 2b9fc1c: 97f8dcac     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2b9fc20: b001ba96     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b9fc24: aa0003f3     	mov	x19, x0
 2b9fc28: 910073e1     	add	x1, sp, #0x1c
 2b9fc2c: f9470ed6     	ldr	x22, [x22, #0xe18]
 2b9fc30: b9402288     	ldr	w8, [x20, #0x20]
 2b9fc34: f94026c0     	ldr	x0, [x22, #0x48]
 2b9fc38: b9001fe8     	str	w8, [sp, #0x1c]
 2b9fc3c: 97f8dcca     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2b9fc40: b4000ad3     	cbz	x19, 0x2b9fd98 <__start_il2cpp+0xd7784>
 2b9fc44: aa0003f5     	mov	x21, x0
 2b9fc48: b40000c0     	cbz	x0, 0x2b9fc60 <__start_il2cpp+0xd764c>
 2b9fc4c: f9400268     	ldr	x8, [x19]
 2b9fc50: aa1503e0     	mov	x0, x21
 2b9fc54: f9402101     	ldr	x1, [x8, #0x40]
 2b9fc58: 97f8dcc2     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2b9fc5c: b4000980     	cbz	x0, 0x2b9fd8c <__start_il2cpp+0xd7778>
 2b9fc60: b9401a68     	ldr	w8, [x19, #0x18]
 2b9fc64: 34000928     	cbz	w8, 0x2b9fd88 <__start_il2cpp+0xd7774>
 2b9fc68: aa1303e0     	mov	x0, x19
 2b9fc6c: aa1503e1     	mov	x1, x21
 2b9fc70: f8020c15     	str	x21, [x0, #0x20]!
 2b9fc74: 97f8dc46     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9fc78: b9402688     	ldr	w8, [x20, #0x24]
 2b9fc7c: f94026c0     	ldr	x0, [x22, #0x48]
 2b9fc80: 910063e1     	add	x1, sp, #0x18
 2b9fc84: b9001be8     	str	w8, [sp, #0x18]
 2b9fc88: 97f8dcb7     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2b9fc8c: aa0003f5     	mov	x21, x0
 2b9fc90: b40000c0     	cbz	x0, 0x2b9fca8 <__start_il2cpp+0xd7694>
 2b9fc94: f9400268     	ldr	x8, [x19]
 2b9fc98: aa1503e0     	mov	x0, x21
 2b9fc9c: f9402101     	ldr	x1, [x8, #0x40]
 2b9fca0: 97f8dcb0     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2b9fca4: b4000740     	cbz	x0, 0x2b9fd8c <__start_il2cpp+0xd7778>
 2b9fca8: b9401a68     	ldr	w8, [x19, #0x18]
 2b9fcac: 721f791f     	tst	w8, #0xfffffffe
 2b9fcb0: 540006c0     	b.eq	0x2b9fd88 <__start_il2cpp+0xd7774>
 2b9fcb4: aa1303e0     	mov	x0, x19
 2b9fcb8: aa1503e1     	mov	x1, x21
 2b9fcbc: f8028c15     	str	x21, [x0, #0x28]!
 2b9fcc0: 97f8dc33     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9fcc4: 3940b688     	ldrb	w8, [x20, #0x2d]
 2b9fcc8: f94016c0     	ldr	x0, [x22, #0x28]
 2b9fccc: 910033e1     	add	x1, sp, #0xc
 2b9fcd0: 390033e8     	strb	w8, [sp, #0xc]
 2b9fcd4: 97f8dca4     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2b9fcd8: aa0003f5     	mov	x21, x0
 2b9fcdc: b40000c0     	cbz	x0, 0x2b9fcf4 <__start_il2cpp+0xd76e0>
 2b9fce0: f9400268     	ldr	x8, [x19]
 2b9fce4: aa1503e0     	mov	x0, x21
 2b9fce8: f9402101     	ldr	x1, [x8, #0x40]
 2b9fcec: 97f8dc9d     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2b9fcf0: b40004e0     	cbz	x0, 0x2b9fd8c <__start_il2cpp+0xd7778>
 2b9fcf4: b9401a68     	ldr	w8, [x19, #0x18]
 2b9fcf8: 7100091f     	cmp	w8, #0x2
 2b9fcfc: 54000469     	b.ls	0x2b9fd88 <__start_il2cpp+0xd7774>
 2b9fd00: aa1303e0     	mov	x0, x19
 2b9fd04: aa1503e1     	mov	x1, x21
 2b9fd08: f8030c15     	str	x21, [x0, #0x30]!
 2b9fd0c: 97f8dc20     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9fd10: f9401a80     	ldr	x0, [x20, #0x30]
 2b9fd14: b4000420     	cbz	x0, 0x2b9fd98 <__start_il2cpp+0xd7784>
 2b9fd18: f9400008     	ldr	x8, [x0]
 2b9fd1c: a9568509     	ldp	x9, x1, [x8, #0x168]
 2b9fd20: d63f0120     	blr	x9
 2b9fd24: aa0003f4     	mov	x20, x0
 2b9fd28: b40000c0     	cbz	x0, 0x2b9fd40 <__start_il2cpp+0xd772c>
 2b9fd2c: f9400268     	ldr	x8, [x19]
 2b9fd30: aa1403e0     	mov	x0, x20
 2b9fd34: f9402101     	ldr	x1, [x8, #0x40]
 2b9fd38: 97f8dc8a     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2b9fd3c: b4000280     	cbz	x0, 0x2b9fd8c <__start_il2cpp+0xd7778>
 2b9fd40: b9401a68     	ldr	w8, [x19, #0x18]
 2b9fd44: 721e751f     	tst	w8, #0xfffffffc
 2b9fd48: 54000200     	b.eq	0x2b9fd88 <__start_il2cpp+0xd7774>
 2b9fd4c: d001bad5     	adrp	x21, 0x62f9000
 2b9fd50: aa1303e0     	mov	x0, x19
 2b9fd54: aa1403e1     	mov	x1, x20
 2b9fd58: f947eeb5     	ldr	x21, [x21, #0xfd8]
 2b9fd5c: f8038c14     	str	x20, [x0, #0x38]!
 2b9fd60: 97f8dc0b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9fd64: f94002a0     	ldr	x0, [x21]
 2b9fd68: aa1303e1     	mov	x1, x19
 2b9fd6c: aa1f03e2     	mov	x2, xzr
 2b9fd70: 948f5c83     	bl	0x4f76f7c <__start_il2cpp+0x24ae968>
 2b9fd74: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2b9fd78: f9400bfe     	ldr	x30, [sp, #0x10]
 2b9fd7c: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2b9fd80: 910103ff     	add	sp, sp, #0x40
 2b9fd84: d65f03c0     	ret
 2b9fd88: 97f8dcc2     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2b9fd8c: 97f8dcc8     	bl	0x29d70ac <mono_class_get_checked+0x994>
 2b9fd90: aa1f03e1     	mov	x1, xzr
 2b9fd94: 97f8dc6e     	bl	0x29d6f4c <mono_class_get_checked+0x834>
 2b9fd98: 97f8dcbc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# BoardSlot :: System.Void .ctor()
# VA 0x2b9fd9c .. 0x2b9fdb8 (next mapped method entry)
 2b9fd9c: 52802028     	mov	w8, #0x101              // =257
 2b9fda0: aa1f03e1     	mov	x1, xzr
 2b9fda4: 79005808     	strh	w8, [x0, #0x2c]
 2b9fda8: 529999a8     	mov	w8, #0xcccd             // =52429
 2b9fdac: 72a7c988     	movk	w8, #0x3e4c, lsl #16
 2b9fdb0: b9006008     	str	w8, [x0, #0x60]
 2b9fdb4: 14bea09c     	b	0x5b48024 <__start_il2cpp+0x307fa10>
