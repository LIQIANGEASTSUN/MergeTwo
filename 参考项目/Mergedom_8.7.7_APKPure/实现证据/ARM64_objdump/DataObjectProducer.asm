
# DataObjectProducer :: System.Void .ctor(ActiveItemProducerData data)
# VA 0x2e57610 .. 0x2e5767c (next mapped method entry)
 2e57610: f81e0ffe     	str	x30, [sp, #-0x20]!
 2e57614: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2e57618: aa0103f3     	mov	x19, x1
 2e5761c: aa1f03e1     	mov	x1, xzr
 2e57620: aa0003f4     	mov	x20, x0
 2e57624: 948be149     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2e57628: b4000293     	cbz	x19, 0x2e57678 <__start_il2cpp+0x38f064>
 2e5762c: b9401268     	ldr	w8, [x19, #0x10]
 2e57630: 39405269     	ldrb	w9, [x19, #0x14]
 2e57634: aa1403e0     	mov	x0, x20
 2e57638: b9401a6a     	ldr	w10, [x19, #0x18]
 2e5763c: f9401261     	ldr	x1, [x19, #0x20]
 2e57640: b9001288     	str	w8, [x20, #0x10]
 2e57644: 39005289     	strb	w9, [x20, #0x14]
 2e57648: b9001a8a     	str	w10, [x20, #0x18]
 2e5764c: f8020c01     	str	x1, [x0, #0x20]!
 2e57650: 97edfdcf     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e57654: f9401661     	ldr	x1, [x19, #0x28]
 2e57658: f8028e81     	str	x1, [x20, #0x28]!
 2e5765c: aa1403e0     	mov	x0, x20
 2e57660: 97edfdcb     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2e57664: b9403268     	ldr	w8, [x19, #0x30]
 2e57668: b9000a88     	str	w8, [x20, #0x8]
 2e5766c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2e57670: f84207fe     	ldr	x30, [sp], #0x20
 2e57674: d65f03c0     	ret
 2e57678: 97edfe84     	bl	0x29d7088 <mono_class_get_checked+0x970>

# DataObjectProducer :: System.Void .ctor()
# VA 0x2e5a2b4 .. 0x2e5a2bc (next mapped method entry)
 2e5a2b4: aa1f03e1     	mov	x1, xzr
 2e5a2b8: 148bd624     	b	0x514fb48 <__start_il2cpp+0x2687534>

# DataObjectProducer :: System.Int32 get_currentCapacity()
# VA 0x2e5a2bc .. 0x2e5a2c4 (next mapped method entry)
 2e5a2bc: b9401000     	ldr	w0, [x0, #0x10]
 2e5a2c0: d65f03c0     	ret

# DataObjectProducer :: System.Boolean get_isRecharging()
# VA 0x2e5a2c4 .. 0x2e5a2cc (next mapped method entry)
 2e5a2c4: 39405000     	ldrb	w0, [x0, #0x14]
 2e5a2c8: d65f03c0     	ret

# DataObjectProducer :: System.Int32 get_rechargeCount()
# VA 0x2e5a2cc .. 0x2e5a2d4 (next mapped method entry)
 2e5a2cc: b9401800     	ldr	w0, [x0, #0x18]
 2e5a2d0: d65f03c0     	ret

# DataObjectProducer :: System.String get_rechargeStartTime()
# VA 0x2e5a2d4 .. 0x2e5a2dc (next mapped method entry)
 2e5a2d4: f9401000     	ldr	x0, [x0, #0x20]
 2e5a2d8: d65f03c0     	ret

# DataObjectProducer :: System.String get_rechargeEndTime()
# VA 0x2e5a2dc .. 0x2e5a2e4 (next mapped method entry)
 2e5a2dc: f9401400     	ldr	x0, [x0, #0x28]
 2e5a2e0: d65f03c0     	ret

# DataObjectProducer :: System.Int32 get_produceOrderIndex()
# VA 0x2e5a2e4 .. 0x2e5a2ec (next mapped method entry)
 2e5a2e4: b9403000     	ldr	w0, [x0, #0x30]
 2e5a2e8: d65f03c0     	ret
