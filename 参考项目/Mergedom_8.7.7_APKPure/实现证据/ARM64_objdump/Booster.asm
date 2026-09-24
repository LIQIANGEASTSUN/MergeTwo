
# Booster :: System.Void OnItemPlacedToBoard(System.Boolean willPlayParticle = False)
# VA 0x2bf61dc .. 0x2bf6274 (next mapped method entry)
 2bf61dc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf61e0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf61e4: 9001d8f4     	adrp	x20, 0x6712000
 2bf61e8: aa0003f3     	mov	x19, x0
 2bf61ec: 396cb688     	ldrb	w8, [x20, #0xb2d]
 2bf61f0: 370000c8     	tbnz	w8, #0x0, 0x2bf6208 <__start_il2cpp+0x12dbf4>
 2bf61f4: f001b800     	adrp	x0, 0x62f9000
 2bf61f8: f9474800     	ldr	x0, [x0, #0xe90]
 2bf61fc: 97f782f9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf6200: 52800028     	mov	w8, #0x1                // =1
 2bf6204: 392cb688     	strb	w8, [x20, #0xb2d]
 2bf6208: 39436268     	ldrb	w8, [x19, #0xd8]
 2bf620c: 350002c8     	cbnz	w8, 0x2bf6264 <__start_il2cpp+0x12dc50>
 2bf6210: aa1303e0     	mov	x0, x19
 2bf6214: 97fff458     	bl	0x2bf3374 <__start_il2cpp+0x12ad60>
 2bf6218: 36000260     	tbz	w0, #0x0, 0x2bf6264 <__start_il2cpp+0x12dc50>
 2bf621c: f001b814     	adrp	x20, 0x62f9000
 2bf6220: f9474a94     	ldr	x20, [x20, #0xe90]
 2bf6224: f9400280     	ldr	x0, [x20]
 2bf6228: b940e408     	ldr	w8, [x0, #0xe4]
 2bf622c: 35000068     	cbnz	w8, 0x2bf6238 <__start_il2cpp+0x12dc24>
 2bf6230: 97f7834b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6234: f9400280     	ldr	x0, [x20]
 2bf6238: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf623c: f9401908     	ldr	x8, [x8, #0x30]
 2bf6240: b4000188     	cbz	x8, 0x2bf6270 <__start_il2cpp+0x12dc5c>
 2bf6244: f9400d09     	ldr	x9, [x8, #0x18]
 2bf6248: f9402100     	ldr	x0, [x8, #0x40]
 2bf624c: aa1303e1     	mov	x1, x19
 2bf6250: f9401503     	ldr	x3, [x8, #0x28]
 2bf6254: aa1f03e2     	mov	x2, xzr
 2bf6258: d63f0120     	blr	x9
 2bf625c: 52800028     	mov	w8, #0x1                // =1
 2bf6260: 39036268     	strb	w8, [x19, #0xd8]
 2bf6264: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6268: f84207fe     	ldr	x30, [sp], #0x20
 2bf626c: d65f03c0     	ret
 2bf6270: 97f78386     	bl	0x29d7088 <mono_class_get_checked+0x970>

# Booster :: Cysharp.Threading.Tasks.UniTask`1<BaseItem> OnMerged(BaseItem otherItem = null)
# VA 0x2bf6274 .. 0x2bf62b4 (next mapped method entry)
 2bf6274: d10103ff     	sub	sp, sp, #0x40
 2bf6278: f90013fe     	str	x30, [sp, #0x20]
 2bf627c: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2bf6280: aa0003f3     	mov	x19, x0
 2bf6284: aa0803f4     	mov	x20, x8
 2bf6288: 9400000b     	bl	0x2bf62b4 <__start_il2cpp+0x12dca0>
 2bf628c: 910023e8     	add	x8, sp, #0x8
 2bf6290: aa1303e0     	mov	x0, x19
 2bf6294: 97fff46c     	bl	0x2bf3444 <__start_il2cpp+0x12ae30>
 2bf6298: a941fbe8     	ldp	x8, x30, [sp, #0x18]
 2bf629c: 3cc083e0     	ldur	q0, [sp, #0x8]
 2bf62a0: 3d800280     	str	q0, [x20]
 2bf62a4: f9000a88     	str	x8, [x20, #0x10]
 2bf62a8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2bf62ac: 910103ff     	add	sp, sp, #0x40
 2bf62b0: d65f03c0     	ret

# Booster :: System.Void ResetProduceHint()
# VA 0x2bf62b4 .. 0x2bf6340 (next mapped method entry)
 2bf62b4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2bf62b8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2bf62bc: 9001d8f4     	adrp	x20, 0x6712000
 2bf62c0: aa0003f3     	mov	x19, x0
 2bf62c4: 396cba88     	ldrb	w8, [x20, #0xb2e]
 2bf62c8: 370000c8     	tbnz	w8, #0x0, 0x2bf62e0 <__start_il2cpp+0x12dccc>
 2bf62cc: f001b800     	adrp	x0, 0x62f9000
 2bf62d0: f9474800     	ldr	x0, [x0, #0xe90]
 2bf62d4: 97f782c3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf62d8: 52800028     	mov	w8, #0x1                // =1
 2bf62dc: 392cba88     	strb	w8, [x20, #0xb2e]
 2bf62e0: 39436268     	ldrb	w8, [x19, #0xd8]
 2bf62e4: 34000268     	cbz	w8, 0x2bf6330 <__start_il2cpp+0x12dd1c>
 2bf62e8: f001b814     	adrp	x20, 0x62f9000
 2bf62ec: f9474a94     	ldr	x20, [x20, #0xe90]
 2bf62f0: f9400280     	ldr	x0, [x20]
 2bf62f4: b940e408     	ldr	w8, [x0, #0xe4]
 2bf62f8: 35000068     	cbnz	w8, 0x2bf6304 <__start_il2cpp+0x12dcf0>
 2bf62fc: 97f78318     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf6300: f9400280     	ldr	x0, [x20]
 2bf6304: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf6308: f9403d08     	ldr	x8, [x8, #0x78]
 2bf630c: b4000188     	cbz	x8, 0x2bf633c <__start_il2cpp+0x12dd28>
 2bf6310: aa1303e1     	mov	x1, x19
 2bf6314: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6318: f9402100     	ldr	x0, [x8, #0x40]
 2bf631c: f9401503     	ldr	x3, [x8, #0x28]
 2bf6320: aa1f03e2     	mov	x2, xzr
 2bf6324: f9400d04     	ldr	x4, [x8, #0x18]
 2bf6328: f84207fe     	ldr	x30, [sp], #0x20
 2bf632c: d61f0080     	br	x4
 2bf6330: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2bf6334: f84207fe     	ldr	x30, [sp], #0x20
 2bf6338: d65f03c0     	ret
 2bf633c: 97f78353     	bl	0x29d7088 <mono_class_get_checked+0x970>

# Booster :: System.Void .ctor()
# VA 0x2bf6340 .. 0x2bf6344 (next mapped method entry)
 2bf6340: 17fff18b     	b	0x2bf296c <__start_il2cpp+0x12a358>
