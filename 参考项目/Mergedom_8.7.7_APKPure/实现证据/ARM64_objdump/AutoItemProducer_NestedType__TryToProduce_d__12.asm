
# AutoItemProducer+_TryToProduce_d__12 :: System.Void .ctor(System.Int32 <>1__state)
# VA 0x2c0aac0 .. 0x2c0aae8 (next mapped method entry)
 2c0aac0: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0aac4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0aac8: 2a0103f3     	mov	w19, w1
 2c0aacc: aa1f03e1     	mov	x1, xzr
 2c0aad0: aa0003f4     	mov	x20, x0
 2c0aad4: 9495141d     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0aad8: b9001293     	str	w19, [x20, #0x10]
 2c0aadc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0aae0: f84207fe     	ldr	x30, [sp], #0x20
 2c0aae4: d65f03c0     	ret

# AutoItemProducer+_TryToProduce_d__12 :: System.Void System.IDisposable.Dispose()
# VA 0x2c0aaf8 .. 0x2c0aafc (next mapped method entry)
 2c0aaf8: d65f03c0     	ret

# AutoItemProducer+_TryToProduce_d__12 :: System.Boolean MoveNext()
# VA 0x2c0aafc .. 0x2c0abac (next mapped method entry)
 2c0aafc: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0ab00: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0ab04: 9001d854     	adrp	x20, 0x6712000
 2c0ab08: aa0003f3     	mov	x19, x0
 2c0ab0c: 396f4688     	ldrb	w8, [x20, #0xbd1]
 2c0ab10: 370000c8     	tbnz	w8, #0x0, 0x2c0ab28 <__start_il2cpp+0x142514>
 2c0ab14: d001b740     	adrp	x0, 0x62f4000
 2c0ab18: f9469000     	ldr	x0, [x0, #0xd20]
 2c0ab1c: 97f730b1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ab20: 52800028     	mov	w8, #0x1                // =1
 2c0ab24: 392f4688     	strb	w8, [x20, #0xbd1]
 2c0ab28: b9401268     	ldr	w8, [x19, #0x10]
 2c0ab2c: 7100051f     	cmp	w8, #0x1
 2c0ab30: 540000a0     	b.eq	0x2c0ab44 <__start_il2cpp+0x142530>
 2c0ab34: 35000328     	cbnz	w8, 0x2c0ab98 <__start_il2cpp+0x142584>
 2c0ab38: 12800008     	mov	w8, #-0x1               // =-1
 2c0ab3c: b9001268     	str	w8, [x19, #0x10]
 2c0ab40: 14000006     	b	0x2c0ab58 <__start_il2cpp+0x142544>
 2c0ab44: f9401260     	ldr	x0, [x19, #0x20]
 2c0ab48: 12800008     	mov	w8, #-0x1               // =-1
 2c0ab4c: b9001268     	str	w8, [x19, #0x10]
 2c0ab50: b40002c0     	cbz	x0, 0x2c0aba8 <__start_il2cpp+0x142594>
 2c0ab54: 97fffcd2     	bl	0x2c09e9c <__start_il2cpp+0x141888>
 2c0ab58: d001b748     	adrp	x8, 0x62f4000
 2c0ab5c: f9469108     	ldr	x8, [x8, #0xd20]
 2c0ab60: f9400100     	ldr	x0, [x8]
 2c0ab64: 97f73145     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0ab68: b0ff23c8     	adrp	x8, 0x1083000
 2c0ab6c: aa1f03e1     	mov	x1, xzr
 2c0ab70: aa0003f4     	mov	x20, x0
 2c0ab74: bd475d00     	ldr	s0, [x8, #0x75c]
 2c0ab78: 94bd0cc5     	bl	0x5b4de8c <__start_il2cpp+0x3085878>
 2c0ab7c: f8018e74     	str	x20, [x19, #0x18]!
 2c0ab80: aa1303e0     	mov	x0, x19
 2c0ab84: aa1403e1     	mov	x1, x20
 2c0ab88: 97f73081     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ab8c: 52800020     	mov	w0, #0x1                // =1
 2c0ab90: b81f8260     	stur	w0, [x19, #-0x8]
 2c0ab94: 14000002     	b	0x2c0ab9c <__start_il2cpp+0x142588>
 2c0ab98: 2a1f03e0     	mov	w0, wzr
 2c0ab9c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0aba0: f84207fe     	ldr	x30, [sp], #0x20
 2c0aba4: d65f03c0     	ret
 2c0aba8: 97f73138     	bl	0x29d7088 <mono_class_get_checked+0x970>

# AutoItemProducer+_TryToProduce_d__12 :: System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
# VA 0x2c0abac .. 0x2c0abb4 (next mapped method entry)
 2c0abac: f9400c00     	ldr	x0, [x0, #0x18]
 2c0abb0: d65f03c0     	ret

# AutoItemProducer+_TryToProduce_d__12 :: System.Void System.Collections.IEnumerator.Reset()
# VA 0x2c0abb4 .. 0x2c0abec (next mapped method entry)
 2c0abb4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0abb8: f001b720     	adrp	x0, 0x62f1000
 2c0abbc: f9413400     	ldr	x0, [x0, #0x268]
 2c0abc0: 97f7308d     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c0abc4: 97f7312d     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0abc8: aa1f03e1     	mov	x1, xzr
 2c0abcc: aa0003f3     	mov	x19, x0
 2c0abd0: 94940f00     	bl	0x510e7d0 <__start_il2cpp+0x26461bc>
 2c0abd4: f001b780     	adrp	x0, 0x62fd000
 2c0abd8: f9402000     	ldr	x0, [x0, #0x40]
 2c0abdc: 97f73086     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2c0abe0: aa0003e1     	mov	x1, x0
 2c0abe4: aa1303e0     	mov	x0, x19
 2c0abe8: 97f730d9     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# AutoItemProducer+_TryToProduce_d__12 :: System.Object System.Collections.IEnumerator.get_Current()
# VA 0x2c0abec .. 0x2c0abf4 (next mapped method entry)
 2c0abec: f9400c00     	ldr	x0, [x0, #0x18]
 2c0abf0: d65f03c0     	ret
