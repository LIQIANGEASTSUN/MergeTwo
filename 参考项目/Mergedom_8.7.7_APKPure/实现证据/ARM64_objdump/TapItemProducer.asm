
# TapItemProducer :: System.Void .ctor()
# VA 0x2c0e6bc .. 0x2c0e6cc (next mapped method entry)
 2c0e6bc: 52800028     	mov	w8, #0x1                // =1
 2c0e6c0: aa1f03e1     	mov	x1, xzr
 2c0e6c4: 39034008     	strb	w8, [x0, #0xd0]
 2c0e6c8: 14950520     	b	0x514fb48 <__start_il2cpp+0x2687534>

# TapItemProducer :: System.Int32 get_dropPlaceDegree()
# VA 0x2c0e7a4 .. 0x2c0e7ac (next mapped method entry)
 2c0e7a4: 52800140     	mov	w0, #0xa                // =10
 2c0e7a8: d65f03c0     	ret

# TapItemProducer :: System.Void OnProduceFailed(Producer+ProduceFailTypes produceFailType)
# VA 0x2c0e7ac .. 0x2c0e868 (next mapped method entry)
 2c0e7ac: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0e7b0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0e7b4: 2a0103f4     	mov	w20, w1
 2c0e7b8: aa0003f3     	mov	x19, x0
 2c0e7bc: 97ffeffe     	bl	0x2c0a7b4 <__start_il2cpp+0x1421a0>
 2c0e7c0: 528000a0     	mov	w0, #0x5                // =5
 2c0e7c4: aa1f03e1     	mov	x1, xzr
 2c0e7c8: 97fc96d3     	bl	0x2b34314 <__start_il2cpp+0x6bd00>
 2c0e7cc: 7100069f     	cmp	w20, #0x1
 2c0e7d0: 540001e0     	b.eq	0x2c0e80c <__start_il2cpp+0x1461f8>
 2c0e7d4: 35000434     	cbnz	w20, 0x2c0e858 <__start_il2cpp+0x146244>
 2c0e7d8: f9403660     	ldr	x0, [x19, #0x68]
 2c0e7dc: b4000440     	cbz	x0, 0x2c0e864 <__start_il2cpp+0x146250>
 2c0e7e0: f9406673     	ldr	x19, [x19, #0xc8]
 2c0e7e4: aa1f03e1     	mov	x1, xzr
 2c0e7e8: 94bcc45d     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0e7ec: b40003c0     	cbz	x0, 0x2c0e864 <__start_il2cpp+0x146250>
 2c0e7f0: aa1f03e1     	mov	x1, xzr
 2c0e7f4: 94bd160f     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c0e7f8: b4000373     	cbz	x19, 0x2c0e864 <__start_il2cpp+0x146250>
 2c0e7fc: 52a84408     	mov	w8, #0x42200000         // =1109393408
 2c0e800: aa1303e0     	mov	x0, x19
 2c0e804: 2a1f03e1     	mov	w1, wzr
 2c0e808: 1400000f     	b	0x2c0e844 <__start_il2cpp+0x146230>
 2c0e80c: 3940d268     	ldrb	w8, [x19, #0x34]
 2c0e810: 34000248     	cbz	w8, 0x2c0e858 <__start_il2cpp+0x146244>
 2c0e814: f9403660     	ldr	x0, [x19, #0x68]
 2c0e818: b4000260     	cbz	x0, 0x2c0e864 <__start_il2cpp+0x146250>
 2c0e81c: f9406673     	ldr	x19, [x19, #0xc8]
 2c0e820: aa1f03e1     	mov	x1, xzr
 2c0e824: 94bcc44e     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0e828: b40001e0     	cbz	x0, 0x2c0e864 <__start_il2cpp+0x146250>
 2c0e82c: aa1f03e1     	mov	x1, xzr
 2c0e830: 94bd1600     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c0e834: b4000193     	cbz	x19, 0x2c0e864 <__start_il2cpp+0x146250>
 2c0e838: 52a84408     	mov	w8, #0x42200000         // =1109393408
 2c0e83c: aa1303e0     	mov	x0, x19
 2c0e840: 52800021     	mov	w1, #0x1                // =1
 2c0e844: 1e270102     	fmov	s2, w8
 2c0e848: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0e84c: aa1f03e2     	mov	x2, xzr
 2c0e850: f84207fe     	ldr	x30, [sp], #0x20
 2c0e854: 140361f5     	b	0x2ce7028 <__start_il2cpp+0x21ea14>
 2c0e858: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0e85c: f84207fe     	ldr	x30, [sp], #0x20
 2c0e860: d65f03c0     	ret
 2c0e864: 97f72209     	bl	0x29d7088 <mono_class_get_checked+0x970>

# TapItemProducer :: System.Void OnProduceSucceed(BaseItem producedItem)
# VA 0x2c0e868 .. 0x2c0e8f4 (next mapped method entry)
 2c0e868: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0e86c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0e870: aa0103f3     	mov	x19, x1
 2c0e874: aa0003f4     	mov	x20, x0
 2c0e878: 97ffeea0     	bl	0x2c0a2f8 <__start_il2cpp+0x141ce4>
 2c0e87c: aa1f03e0     	mov	x0, xzr
 2c0e880: 97fe4a01     	bl	0x2ba1084 <__start_il2cpp+0xd8a70>
 2c0e884: b4000360     	cbz	x0, 0x2c0e8f0 <__start_il2cpp+0x1462dc>
 2c0e888: f9404c00     	ldr	x0, [x0, #0x98]
 2c0e88c: aa1f03e1     	mov	x1, xzr
 2c0e890: 97fe4a10     	bl	0x2ba10d0 <__start_il2cpp+0xd8abc>
 2c0e894: b40002f3     	cbz	x19, 0x2c0e8f0 <__start_il2cpp+0x1462dc>
 2c0e898: b9404668     	ldr	w8, [x19, #0x44]
 2c0e89c: 7100091f     	cmp	w8, #0x2
 2c0e8a0: 540001eb     	b.lt	0x2c0e8dc <__start_il2cpp+0x1462c8>
 2c0e8a4: f9406694     	ldr	x20, [x20, #0xc8]
 2c0e8a8: aa1303e0     	mov	x0, x19
 2c0e8ac: aa1f03e1     	mov	x1, xzr
 2c0e8b0: 94bcc42b     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0e8b4: b40001e0     	cbz	x0, 0x2c0e8f0 <__start_il2cpp+0x1462dc>
 2c0e8b8: aa1f03e1     	mov	x1, xzr
 2c0e8bc: 94bd15dd     	bl	0x5b54030 <__start_il2cpp+0x308ba1c>
 2c0e8c0: b4000194     	cbz	x20, 0x2c0e8f0 <__start_il2cpp+0x1462dc>
 2c0e8c4: 52a84408     	mov	w8, #0x42200000         // =1109393408
 2c0e8c8: aa1403e0     	mov	x0, x20
 2c0e8cc: 528002a1     	mov	w1, #0x15               // =21
 2c0e8d0: 1e270102     	fmov	s2, w8
 2c0e8d4: aa1f03e2     	mov	x2, xzr
 2c0e8d8: 940361d4     	bl	0x2ce7028 <__start_il2cpp+0x21ea14>
 2c0e8dc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0e8e0: 52800080     	mov	w0, #0x4                // =4
 2c0e8e4: aa1f03e1     	mov	x1, xzr
 2c0e8e8: f84207fe     	ldr	x30, [sp], #0x20
 2c0e8ec: 17fc968a     	b	0x2b34314 <__start_il2cpp+0x6bd00>
 2c0e8f0: 97f721e6     	bl	0x29d7088 <mono_class_get_checked+0x970>

# TapItemProducer :: System.Void OnProducerItemTapped()
# VA 0x2c0e8f4 .. 0x2c0e904 (next mapped method entry)
 2c0e8f4: 39434008     	ldrb	w8, [x0, #0xd0]
 2c0e8f8: 34000048     	cbz	w8, 0x2c0e900 <__start_il2cpp+0x1462ec>
 2c0e8fc: 17ffed68     	b	0x2c09e9c <__start_il2cpp+0x141888>
 2c0e900: d65f03c0     	ret
