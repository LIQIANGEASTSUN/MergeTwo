
# TimeSkipper+__c :: System.Void .cctor()
# VA 0x2c0ee44 .. 0x2c0eeac (next mapped method entry)
 2c0ee44: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0ee48: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0ee4c: 9001d833     	adrp	x19, 0x6712000
 2c0ee50: f001b774     	adrp	x20, 0x62fd000
 2c0ee54: 396fda68     	ldrb	w8, [x19, #0xbf6]
 2c0ee58: f940aa94     	ldr	x20, [x20, #0x150]
 2c0ee5c: 370000c8     	tbnz	w8, #0x0, 0x2c0ee74 <__start_il2cpp+0x146860>
 2c0ee60: f001b760     	adrp	x0, 0x62fd000
 2c0ee64: f940a800     	ldr	x0, [x0, #0x150]
 2c0ee68: 97f71fde     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ee6c: 52800028     	mov	w8, #0x1                // =1
 2c0ee70: 392fda68     	strb	w8, [x19, #0xbf6]
 2c0ee74: f9400280     	ldr	x0, [x20]
 2c0ee78: 97f72080     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0ee7c: aa1f03e1     	mov	x1, xzr
 2c0ee80: aa0003f3     	mov	x19, x0
 2c0ee84: 94950331     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0ee88: f9400288     	ldr	x8, [x20]
 2c0ee8c: aa1303e1     	mov	x1, x19
 2c0ee90: f9405d08     	ldr	x8, [x8, #0xb8]
 2c0ee94: f9000113     	str	x19, [x8]
 2c0ee98: f9400288     	ldr	x8, [x20]
 2c0ee9c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0eea0: f9405d00     	ldr	x0, [x8, #0xb8]
 2c0eea4: f84207fe     	ldr	x30, [sp], #0x20
 2c0eea8: 17f71fb9     	b	0x29d6d8c <mono_class_get_checked+0x674>

# TimeSkipper+__c :: System.Void .ctor()
# VA 0x2c0eeac .. 0x2c0eeb4 (next mapped method entry)
 2c0eeac: aa1f03e1     	mov	x1, xzr
 2c0eeb0: 14950326     	b	0x514fb48 <__start_il2cpp+0x2687534>

# TimeSkipper+__c :: ActiveItemProducerData <OnMerged>b__6_0(ItemProducer producer)
# VA 0x2c0eeb4 .. 0x2c0ef68 (next mapped method entry)
 2c0eeb4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c0eeb8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0eebc: 9001d834     	adrp	x20, 0x6712000
 2c0eec0: f001b755     	adrp	x21, 0x62f9000
 2c0eec4: aa0103f3     	mov	x19, x1
 2c0eec8: 396fde88     	ldrb	w8, [x20, #0xbf7]
 2c0eecc: f946feb5     	ldr	x21, [x21, #0xdf8]
 2c0eed0: 370000c8     	tbnz	w8, #0x0, 0x2c0eee8 <__start_il2cpp+0x1468d4>
 2c0eed4: f001b740     	adrp	x0, 0x62f9000
 2c0eed8: f946fc00     	ldr	x0, [x0, #0xdf8]
 2c0eedc: 97f71fc1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0eee0: 52800028     	mov	w8, #0x1                // =1
 2c0eee4: 392fde88     	strb	w8, [x20, #0xbf7]
 2c0eee8: f94002a0     	ldr	x0, [x21]
 2c0eeec: 97f72063     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0eef0: aa1f03e1     	mov	x1, xzr
 2c0eef4: aa0003f4     	mov	x20, x0
 2c0eef8: 97fe3877     	bl	0x2b9d0d4 <__start_il2cpp+0xd4ac0>
 2c0eefc: b4000353     	cbz	x19, 0x2c0ef64 <__start_il2cpp+0x146950>
 2c0ef00: b4000334     	cbz	x20, 0x2c0ef64 <__start_il2cpp+0x146950>
 2c0ef04: b9403268     	ldr	w8, [x19, #0x30]
 2c0ef08: 3940d269     	ldrb	w9, [x19, #0x34]
 2c0ef0c: aa1f03e1     	mov	x1, xzr
 2c0ef10: b9403a6a     	ldr	w10, [x19, #0x38]
 2c0ef14: b9001288     	str	w8, [x20, #0x10]
 2c0ef18: 39005289     	strb	w9, [x20, #0x14]
 2c0ef1c: b9001a8a     	str	w10, [x20, #0x18]
 2c0ef20: f9402660     	ldr	x0, [x19, #0x48]
 2c0ef24: 9400c11c     	bl	0x2c3f394 <__start_il2cpp+0x176d80>
 2c0ef28: aa0003e1     	mov	x1, x0
 2c0ef2c: aa1403e0     	mov	x0, x20
 2c0ef30: f8020c01     	str	x1, [x0, #0x20]!
 2c0ef34: 97f71f96     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ef38: f9402a60     	ldr	x0, [x19, #0x50]
 2c0ef3c: aa1f03e1     	mov	x1, xzr
 2c0ef40: 9400c115     	bl	0x2c3f394 <__start_il2cpp+0x176d80>
 2c0ef44: aa0003e1     	mov	x1, x0
 2c0ef48: aa1403e0     	mov	x0, x20
 2c0ef4c: f8028c01     	str	x1, [x0, #0x28]!
 2c0ef50: 97f71f8f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ef54: aa1403e0     	mov	x0, x20
 2c0ef58: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0ef5c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0ef60: d65f03c0     	ret
 2c0ef64: 97f72049     	bl	0x29d7088 <mono_class_get_checked+0x970>
