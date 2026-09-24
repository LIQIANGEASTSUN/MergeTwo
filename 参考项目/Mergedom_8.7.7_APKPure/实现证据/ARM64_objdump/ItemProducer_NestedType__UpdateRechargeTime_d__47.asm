
# ItemProducer+_UpdateRechargeTime_d__47 :: System.Void .ctor(System.Int32 <>1__state)
# VA 0x2c0cd48 .. 0x2c0cd70 (next mapped method entry)
 2c0cd48: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0cd4c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0cd50: 2a0103f3     	mov	w19, w1
 2c0cd54: aa1f03e1     	mov	x1, xzr
 2c0cd58: aa0003f4     	mov	x20, x0
 2c0cd5c: 94950b7b     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0cd60: b9001293     	str	w19, [x20, #0x10]
 2c0cd64: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0cd68: f84207fe     	ldr	x30, [sp], #0x20
 2c0cd6c: d65f03c0     	ret

# ItemProducer+_UpdateRechargeTime_d__47 :: System.Void System.IDisposable.Dispose()
# VA 0x2c0d1b0 .. 0x2c0d1b4 (next mapped method entry)
 2c0d1b0: d65f03c0     	ret

# ItemProducer+_UpdateRechargeTime_d__47 :: System.Boolean MoveNext()
# VA 0x2c0d1b4 .. 0x2c0d2c0 (next mapped method entry)
 2c0d1b4: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0d1b8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0d1bc: b001d834     	adrp	x20, 0x6712000
 2c0d1c0: aa0003f3     	mov	x19, x0
 2c0d1c4: 396fa688     	ldrb	w8, [x20, #0xbe9]
 2c0d1c8: 37000128     	tbnz	w8, #0x0, 0x2c0d1ec <__start_il2cpp+0x144bd8>
 2c0d1cc: b001b720     	adrp	x0, 0x62f2000
 2c0d1d0: f940ac00     	ldr	x0, [x0, #0x158]
 2c0d1d4: 97f72703     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0d1d8: f001b720     	adrp	x0, 0x62f4000
 2c0d1dc: f9469000     	ldr	x0, [x0, #0xd20]
 2c0d1e0: 97f72700     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0d1e4: 52800028     	mov	w8, #0x1                // =1
 2c0d1e8: 392fa688     	strb	w8, [x20, #0xbe9]
 2c0d1ec: b9401268     	ldr	w8, [x19, #0x10]
 2c0d1f0: f9401274     	ldr	x20, [x19, #0x20]
 2c0d1f4: 7100051f     	cmp	w8, #0x1
 2c0d1f8: 54000100     	b.eq	0x2c0d218 <__start_il2cpp+0x144c04>
 2c0d1fc: 35000588     	cbnz	w8, 0x2c0d2ac <__start_il2cpp+0x144c98>
 2c0d200: 12800008     	mov	w8, #-0x1               // =-1
 2c0d204: b9001268     	str	w8, [x19, #0x10]
 2c0d208: b40005b4     	cbz	x20, 0x2c0d2bc <__start_il2cpp+0x144ca8>
 2c0d20c: aa1403e0     	mov	x0, x20
 2c0d210: 97ffff70     	bl	0x2c0cfd0 <__start_il2cpp+0x1449bc>
 2c0d214: 14000012     	b	0x2c0d25c <__start_il2cpp+0x144c48>
 2c0d218: 12800008     	mov	w8, #-0x1               // =-1
 2c0d21c: b9001268     	str	w8, [x19, #0x10]
 2c0d220: b40004f4     	cbz	x20, 0x2c0d2bc <__start_il2cpp+0x144ca8>
 2c0d224: aa1403e0     	mov	x0, x20
 2c0d228: 97ffff6a     	bl	0x2c0cfd0 <__start_il2cpp+0x1449bc>
 2c0d22c: b001b728     	adrp	x8, 0x62f2000
 2c0d230: f940ad08     	ldr	x8, [x8, #0x158]
 2c0d234: f9400100     	ldr	x0, [x8]
 2c0d238: b940e408     	ldr	w8, [x0, #0xe4]
 2c0d23c: 35000048     	cbnz	w8, 0x2c0d244 <__start_il2cpp+0x144c30>
 2c0d240: 97f72747     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0d244: aa1f03e0     	mov	x0, xzr
 2c0d248: 94937acf     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0d24c: f9402a81     	ldr	x1, [x20, #0x50]
 2c0d250: aa1f03e2     	mov	x2, xzr
 2c0d254: 949381f5     	bl	0x50eda28 <__start_il2cpp+0x2625414>
 2c0d258: 36000200     	tbz	w0, #0x0, 0x2c0d298 <__start_il2cpp+0x144c84>
 2c0d25c: f001b728     	adrp	x8, 0x62f4000
 2c0d260: f9469108     	ldr	x8, [x8, #0xd20]
 2c0d264: f9400100     	ldr	x0, [x8]
 2c0d268: 97f72784     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0d26c: 1e2e1000     	fmov	s0, #1.00000000
 2c0d270: aa1f03e1     	mov	x1, xzr
 2c0d274: aa0003f4     	mov	x20, x0
 2c0d278: 94bd0305     	bl	0x5b4de8c <__start_il2cpp+0x3085878>
 2c0d27c: f8018e74     	str	x20, [x19, #0x18]!
 2c0d280: aa1303e0     	mov	x0, x19
 2c0d284: aa1403e1     	mov	x1, x20
 2c0d288: 97f726c1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0d28c: 52800020     	mov	w0, #0x1                // =1
 2c0d290: b81f8260     	stur	w0, [x19, #-0x8]
 2c0d294: 14000007     	b	0x2c0d2b0 <__start_il2cpp+0x144c9c>
 2c0d298: f9400288     	ldr	x8, [x20]
 2c0d29c: aa1403e0     	mov	x0, x20
 2c0d2a0: 2a1f03e1     	mov	w1, wzr
 2c0d2a4: a95e8909     	ldp	x9, x2, [x8, #0x1e8]
 2c0d2a8: d63f0120     	blr	x9
 2c0d2ac: 2a1f03e0     	mov	w0, wzr
 2c0d2b0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0d2b4: f84207fe     	ldr	x30, [sp], #0x20
 2c0d2b8: d65f03c0     	ret
 2c0d2bc: 97f72773     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer+_UpdateRechargeTime_d__47 :: System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
# VA 0x2c0d2c0 .. 0x2c0d2c8 (next mapped method entry)
 2c0d2c0: f9400c00     	ldr	x0, [x0, #0x18]
 2c0d2c4: d65f03c0     	ret

# ItemProducer+_UpdateRechargeTime_d__47 :: System.Void System.Collections.IEnumerator.Reset()
# VA 0x2c0d2c8 .. 0x2c0d300 (next mapped method entry)
 2c0d2c8: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0d2cc: 9001b720     	adrp	x0, 0x62f1000
 2c0d2d0: f9413400     	ldr	x0, [x0, #0x268]
 2c0d2d4: 97f726c8     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c0d2d8: 97f72768     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0d2dc: aa1f03e1     	mov	x1, xzr
 2c0d2e0: aa0003f3     	mov	x19, x0
 2c0d2e4: 9494053b     	bl	0x510e7d0 <__start_il2cpp+0x26461bc>
 2c0d2e8: 9001b780     	adrp	x0, 0x62fd000
 2c0d2ec: f9408c00     	ldr	x0, [x0, #0x118]
 2c0d2f0: 97f726c1     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c0d2f4: aa0003e1     	mov	x1, x0
 2c0d2f8: aa1303e0     	mov	x0, x19
 2c0d2fc: 97f72714     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# ItemProducer+_UpdateRechargeTime_d__47 :: System.Object System.Collections.IEnumerator.get_Current()
# VA 0x2c0d300 .. 0x2c0d308 (next mapped method entry)
 2c0d300: f9400c00     	ldr	x0, [x0, #0x18]
 2c0d304: d65f03c0     	ret
