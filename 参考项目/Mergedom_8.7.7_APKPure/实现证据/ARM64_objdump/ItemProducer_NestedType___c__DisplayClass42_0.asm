
# ItemProducer+__c__DisplayClass42_0 :: System.Void .ctor()
# VA 0x2c0cb94 .. 0x2c0cb9c (next mapped method entry)
 2c0cb94: aa1f03e1     	mov	x1, xzr
 2c0cb98: 14950bec     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemProducer+__c__DisplayClass42_0 :: System.Void <Dispose>b__1()
# VA 0x2c0d114 .. 0x2c0d1b0 (next mapped method entry)
 2c0d114: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0d118: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0d11c: b001d834     	adrp	x20, 0x6712000
 2c0d120: aa0003f3     	mov	x19, x0
 2c0d124: 396fa288     	ldrb	w8, [x20, #0xbe8]
 2c0d128: 370000c8     	tbnz	w8, #0x0, 0x2c0d140 <__start_il2cpp+0x144b2c>
 2c0d12c: b001b760     	adrp	x0, 0x62fa000
 2c0d130: f9406c00     	ldr	x0, [x0, #0xd8]
 2c0d134: 97f7272b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0d138: 52800028     	mov	w8, #0x1                // =1
 2c0d13c: 392fa288     	strb	w8, [x20, #0xbe8]
 2c0d140: f9400e68     	ldr	x8, [x19, #0x18]
 2c0d144: f90007ff     	str	xzr, [sp, #0x8]
 2c0d148: b4000328     	cbz	x8, 0x2c0d1ac <__start_il2cpp+0x144b98>
 2c0d14c: f9400908     	ldr	x8, [x8, #0x10]
 2c0d150: b40002e8     	cbz	x8, 0x2c0d1ac <__start_il2cpp+0x144b98>
 2c0d154: f9402500     	ldr	x0, [x8, #0x48]
 2c0d158: b40002a0     	cbz	x0, 0x2c0d1ac <__start_il2cpp+0x144b98>
 2c0d15c: 2a1f03e1     	mov	w1, wzr
 2c0d160: aa1f03e2     	mov	x2, xzr
 2c0d164: 94050838     	bl	0x2d4f244 <__start_il2cpp+0x286c30>
 2c0d168: f9400e68     	ldr	x8, [x19, #0x18]
 2c0d16c: b4000208     	cbz	x8, 0x2c0d1ac <__start_il2cpp+0x144b98>
 2c0d170: f9400a61     	ldr	x1, [x19, #0x10]
 2c0d174: f9404d13     	ldr	x19, [x8, #0x98]
 2c0d178: 910023e0     	add	x0, sp, #0x8
 2c0d17c: f90007e1     	str	x1, [sp, #0x8]
 2c0d180: 97f72703     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0d184: b4000153     	cbz	x19, 0x2c0d1ac <__start_il2cpp+0x144b98>
 2c0d188: b001b768     	adrp	x8, 0x62fa000
 2c0d18c: aa1303e0     	mov	x0, x19
 2c0d190: f9406d08     	ldr	x8, [x8, #0xd8]
 2c0d194: f94007e1     	ldr	x1, [sp, #0x8]
 2c0d198: f9400102     	ldr	x2, [x8]
 2c0d19c: 9428585e     	bl	0x3623314 <__start_il2cpp+0xb5ad00>
 2c0d1a0: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0d1a4: f84207fe     	ldr	x30, [sp], #0x20
 2c0d1a8: d65f03c0     	ret
 2c0d1ac: 97f727b7     	bl	0x29d7088 <mono_class_get_checked+0x970>
