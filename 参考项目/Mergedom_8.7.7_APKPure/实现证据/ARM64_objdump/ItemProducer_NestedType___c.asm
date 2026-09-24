
# ItemProducer+__c :: System.Void .cctor()
# VA 0x2c0d080 .. 0x2c0d0e8 (next mapped method entry)
 2c0d080: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0d084: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0d088: b001d833     	adrp	x19, 0x6712000
 2c0d08c: 9001b794     	adrp	x20, 0x62fd000
 2c0d090: 396f9e68     	ldrb	w8, [x19, #0xbe7]
 2c0d094: f9406294     	ldr	x20, [x20, #0xc0]
 2c0d098: 370000c8     	tbnz	w8, #0x0, 0x2c0d0b0 <__start_il2cpp+0x144a9c>
 2c0d09c: 9001b780     	adrp	x0, 0x62fd000
 2c0d0a0: f9406000     	ldr	x0, [x0, #0xc0]
 2c0d0a4: 97f7274f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0d0a8: 52800028     	mov	w8, #0x1                // =1
 2c0d0ac: 392f9e68     	strb	w8, [x19, #0xbe7]
 2c0d0b0: f9400280     	ldr	x0, [x20]
 2c0d0b4: 97f727f1     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0d0b8: aa1f03e1     	mov	x1, xzr
 2c0d0bc: aa0003f3     	mov	x19, x0
 2c0d0c0: 94950aa2     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0d0c4: f9400288     	ldr	x8, [x20]
 2c0d0c8: aa1303e1     	mov	x1, x19
 2c0d0cc: f9405d08     	ldr	x8, [x8, #0xb8]
 2c0d0d0: f9000113     	str	x19, [x8]
 2c0d0d4: f9400288     	ldr	x8, [x20]
 2c0d0d8: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0d0dc: f9405d00     	ldr	x0, [x8, #0xb8]
 2c0d0e0: f84207fe     	ldr	x30, [sp], #0x20
 2c0d0e4: 17f7272a     	b	0x29d6d8c <mono_class_get_checked+0x674>

# ItemProducer+__c :: System.Void .ctor()
# VA 0x2c0d0e8 .. 0x2c0d0f0 (next mapped method entry)
 2c0d0e8: aa1f03e1     	mov	x1, xzr
 2c0d0ec: 14950a97     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemProducer+__c :: System.Single <GetItemToProduce>b__40_0(ItemToProduce a)
# VA 0x2c0d0f0 .. 0x2c0d104 (next mapped method entry)
 2c0d0f0: b4000061     	cbz	x1, 0x2c0d0fc <__start_il2cpp+0x144ae8>
 2c0d0f4: bd401c20     	ldr	s0, [x1, #0x1c]
 2c0d0f8: d65f03c0     	ret
 2c0d0fc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0d100: 97f727e2     	bl	0x29d7088 <mono_class_get_checked+0x970>
