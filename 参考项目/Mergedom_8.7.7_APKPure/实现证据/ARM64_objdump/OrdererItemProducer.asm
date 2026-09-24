
# OrdererItemProducer :: System.Void Init(BaseItem producerBaseItem, ItemProducerData itemProducerData, ItemProducerTimer itemProducerTimer, UnityEngine.GameObject energyIcon, System.Boolean startOnInit, ActiveItemProducerData activeItemProducerInitData, ParticleSystemController producerParticles = null)
# VA 0x2c0e5f4 .. 0x2c0e608 (next mapped method entry)
 2c0e5f4: b4000066     	cbz	x6, 0x2c0e600 <__start_il2cpp+0x145fec>
 2c0e5f8: b94030c8     	ldr	w8, [x6, #0x30]
 2c0e5fc: b900d408     	str	w8, [x0, #0xd4]
 2c0e600: 120000a5     	and	w5, w5, #0x1
 2c0e604: 17ffeca7     	b	0x2c098a0 <__start_il2cpp+0x14128c>

# OrdererItemProducer :: ItemToProduce GetItemToProduce()
# VA 0x2c0e608 .. 0x2c0e6ac (next mapped method entry)
 2c0e608: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0e60c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0e610: 9001d834     	adrp	x20, 0x6712000
 2c0e614: aa0003f3     	mov	x19, x0
 2c0e618: 396fba88     	ldrb	w8, [x20, #0xbee]
 2c0e61c: 37000128     	tbnz	w8, #0x0, 0x2c0e640 <__start_il2cpp+0x14602c>
 2c0e620: f001b760     	adrp	x0, 0x62fd000
 2c0e624: f9400800     	ldr	x0, [x0, #0x10]
 2c0e628: 97f721ee     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e62c: f001b760     	adrp	x0, 0x62fd000
 2c0e630: f9405400     	ldr	x0, [x0, #0xa8]
 2c0e634: 97f721eb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e638: 52800028     	mov	w8, #0x1                // =1
 2c0e63c: 392fba88     	strb	w8, [x20, #0xbee]
 2c0e640: f9402268     	ldr	x8, [x19, #0x40]
 2c0e644: b4000328     	cbz	x8, 0x2c0e6a8 <__start_il2cpp+0x146094>
 2c0e648: f9402500     	ldr	x0, [x8, #0x48]
 2c0e64c: b40002e0     	cbz	x0, 0x2c0e6a8 <__start_il2cpp+0x146094>
 2c0e650: b940d661     	ldr	w1, [x19, #0xd4]
 2c0e654: b9401809     	ldr	w9, [x0, #0x18]
 2c0e658: 6b09003f     	cmp	w1, w9
 2c0e65c: 5400012a     	b.ge	0x2c0e680 <__start_il2cpp+0x14606c>
 2c0e660: f001b768     	adrp	x8, 0x62fd000
 2c0e664: f9405508     	ldr	x8, [x8, #0xa8]
 2c0e668: f9400102     	ldr	x2, [x8]
 2c0e66c: 943c693d     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c0e670: b940d668     	ldr	w8, [x19, #0xd4]
 2c0e674: 11000508     	add	w8, w8, #0x1
 2c0e678: b900d668     	str	w8, [x19, #0xd4]
 2c0e67c: 14000008     	b	0x2c0e69c <__start_il2cpp+0x146088>
 2c0e680: 39411d08     	ldrb	w8, [x8, #0x47]
 2c0e684: 340000a8     	cbz	w8, 0x2c0e698 <__start_il2cpp+0x146084>
 2c0e688: aa1303e0     	mov	x0, x19
 2c0e68c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0e690: f84207fe     	ldr	x30, [sp], #0x20
 2c0e694: 17fff7c0     	b	0x2c0c594 <__start_il2cpp+0x143f80>
 2c0e698: aa1f03e0     	mov	x0, xzr
 2c0e69c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0e6a0: f84207fe     	ldr	x30, [sp], #0x20
 2c0e6a4: d65f03c0     	ret
 2c0e6a8: 97f72278     	bl	0x29d7088 <mono_class_get_checked+0x970>

# OrdererItemProducer :: System.Void .ctor()
# VA 0x2c0e6ac .. 0x2c0e6bc (next mapped method entry)
 2c0e6ac: 52800028     	mov	w8, #0x1                // =1
 2c0e6b0: aa1f03e1     	mov	x1, xzr
 2c0e6b4: 39034008     	strb	w8, [x0, #0xd0]
 2c0e6b8: 14950524     	b	0x514fb48 <__start_il2cpp+0x2687534>
