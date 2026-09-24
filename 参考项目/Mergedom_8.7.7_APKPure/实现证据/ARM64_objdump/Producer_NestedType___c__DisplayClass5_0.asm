
# Producer+__c__DisplayClass5_0 :: System.Void .ctor()
# VA 0x2c0e6cc .. 0x2c0e6d4 (next mapped method entry)
 2c0e6cc: aa1f03e1     	mov	x1, xzr
 2c0e6d0: 1495051e     	b	0x514fb48 <__start_il2cpp+0x2687534>

# Producer+__c__DisplayClass5_0 :: System.Void <Produce>b__0()
# VA 0x2c0e6d8 .. 0x2c0e708 (next mapped method entry)
 2c0e6d8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0e6dc: f9400808     	ldr	x8, [x0, #0x10]
 2c0e6e0: b4000128     	cbz	x8, 0x2c0e704 <__start_il2cpp+0x1460f0>
 2c0e6e4: f9400908     	ldr	x8, [x8, #0x10]
 2c0e6e8: b40000e8     	cbz	x8, 0x2c0e704 <__start_il2cpp+0x1460f0>
 2c0e6ec: f9402500     	ldr	x0, [x8, #0x48]
 2c0e6f0: b40000a0     	cbz	x0, 0x2c0e704 <__start_il2cpp+0x1460f0>
 2c0e6f4: 52800021     	mov	w1, #0x1                // =1
 2c0e6f8: aa1f03e2     	mov	x2, xzr
 2c0e6fc: f84107fe     	ldr	x30, [sp], #0x10
 2c0e700: 140502d1     	b	0x2d4f244 <__start_il2cpp+0x286c30>
 2c0e704: 97f72261     	bl	0x29d7088 <mono_class_get_checked+0x970>

# Producer+__c__DisplayClass5_0 :: System.Void <Produce>b__1()
# VA 0x2c0e708 .. 0x2c0e7a4 (next mapped method entry)
 2c0e708: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0e70c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0e710: 9001d834     	adrp	x20, 0x6712000
 2c0e714: aa0003f3     	mov	x19, x0
 2c0e718: 396fc288     	ldrb	w8, [x20, #0xbf0]
 2c0e71c: 370000c8     	tbnz	w8, #0x0, 0x2c0e734 <__start_il2cpp+0x146120>
 2c0e720: 9001b760     	adrp	x0, 0x62fa000
 2c0e724: f9406c00     	ldr	x0, [x0, #0xd8]
 2c0e728: 97f721ae     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0e72c: 52800028     	mov	w8, #0x1                // =1
 2c0e730: 392fc288     	strb	w8, [x20, #0xbf0]
 2c0e734: f9400a68     	ldr	x8, [x19, #0x10]
 2c0e738: f90007ff     	str	xzr, [sp, #0x8]
 2c0e73c: b4000328     	cbz	x8, 0x2c0e7a0 <__start_il2cpp+0x14618c>
 2c0e740: f9400908     	ldr	x8, [x8, #0x10]
 2c0e744: b40002e8     	cbz	x8, 0x2c0e7a0 <__start_il2cpp+0x14618c>
 2c0e748: f9402500     	ldr	x0, [x8, #0x48]
 2c0e74c: b40002a0     	cbz	x0, 0x2c0e7a0 <__start_il2cpp+0x14618c>
 2c0e750: 2a1f03e1     	mov	w1, wzr
 2c0e754: aa1f03e2     	mov	x2, xzr
 2c0e758: 940502bb     	bl	0x2d4f244 <__start_il2cpp+0x286c30>
 2c0e75c: f9400a68     	ldr	x8, [x19, #0x10]
 2c0e760: b4000208     	cbz	x8, 0x2c0e7a0 <__start_il2cpp+0x14618c>
 2c0e764: f9400e61     	ldr	x1, [x19, #0x18]
 2c0e768: f9401513     	ldr	x19, [x8, #0x28]
 2c0e76c: 910023e0     	add	x0, sp, #0x8
 2c0e770: f90007e1     	str	x1, [sp, #0x8]
 2c0e774: 97f72186     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0e778: b4000153     	cbz	x19, 0x2c0e7a0 <__start_il2cpp+0x14618c>
 2c0e77c: 9001b768     	adrp	x8, 0x62fa000
 2c0e780: aa1303e0     	mov	x0, x19
 2c0e784: f9406d08     	ldr	x8, [x8, #0xd8]
 2c0e788: f94007e1     	ldr	x1, [sp, #0x8]
 2c0e78c: f9400102     	ldr	x2, [x8]
 2c0e790: 942852e1     	bl	0x3623314 <__start_il2cpp+0xb5ad00>
 2c0e794: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0e798: f84207fe     	ldr	x30, [sp], #0x20
 2c0e79c: d65f03c0     	ret
 2c0e7a0: 97f7223a     	bl	0x29d7088 <mono_class_get_checked+0x970>
