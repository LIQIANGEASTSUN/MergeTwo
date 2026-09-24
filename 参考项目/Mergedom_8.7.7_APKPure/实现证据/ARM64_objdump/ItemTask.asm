
# ItemTask :: System.Boolean get_isSpecialTask()
# VA 0x2c1e940 .. 0x2c1e9a4 (next mapped method entry)
 2c1e940: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c1e944: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c1e948: 9001d7b5     	adrp	x21, 0x6712000
 2c1e94c: 9001b6f4     	adrp	x20, 0x62fa000
 2c1e950: aa0003f3     	mov	x19, x0
 2c1e954: 397182a8     	ldrb	w8, [x21, #0xc60]
 2c1e958: f9405294     	ldr	x20, [x20, #0xa0]
 2c1e95c: 370000c8     	tbnz	w8, #0x0, 0x2c1e974 <__start_il2cpp+0x156360>
 2c1e960: 9001b6e0     	adrp	x0, 0x62fa000
 2c1e964: f9405000     	ldr	x0, [x0, #0xa0]
 2c1e968: 97f6e11e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c1e96c: 52800028     	mov	w8, #0x1                // =1
 2c1e970: 393182a8     	strb	w8, [x21, #0xc60]
 2c1e974: f9400280     	ldr	x0, [x20]
 2c1e978: b9402273     	ldr	w19, [x19, #0x20]
 2c1e97c: b940e408     	ldr	w8, [x0, #0xe4]
 2c1e980: 35000048     	cbnz	w8, 0x2c1e988 <__start_il2cpp+0x156374>
 2c1e984: 97f6e176     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c1e988: aa1f03e0     	mov	x0, xzr
 2c1e98c: 97ff7c18     	bl	0x2bfd9ec <__start_il2cpp+0x1353d8>
 2c1e990: 6b00027f     	cmp	w19, w0
 2c1e994: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c1e998: 1a9f17e0     	cset	w0, eq
 2c1e99c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c1e9a0: d65f03c0     	ret

# ItemTask :: System.Void .ctor()
# VA 0x2c1e9a4 .. 0x2c1e9ac (next mapped method entry)
 2c1e9a4: aa1f03e1     	mov	x1, xzr
 2c1e9a8: 1494c468     	b	0x514fb48 <__start_il2cpp+0x2687534>
