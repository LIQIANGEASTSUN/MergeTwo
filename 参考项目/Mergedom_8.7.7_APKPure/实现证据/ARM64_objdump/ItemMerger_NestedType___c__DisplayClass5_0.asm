
# ItemMerger+__c__DisplayClass5_0 :: System.Void .ctor()
# VA 0x2c038fc .. 0x2c03904 (next mapped method entry)
 2c038fc: aa1f03e1     	mov	x1, xzr
 2c03900: 14953092     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemMerger+__c__DisplayClass5_0 :: System.Boolean <Merge>b__0(System.Int32 item)
# VA 0x2c03904 .. 0x2c03930 (next mapped method entry)
 2c03904: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c03908: f9400808     	ldr	x8, [x0, #0x10]
 2c0390c: b4000108     	cbz	x8, 0x2c0392c <__start_il2cpp+0x13b318>
 2c03910: f9402908     	ldr	x8, [x8, #0x50]
 2c03914: b40000c8     	cbz	x8, 0x2c0392c <__start_il2cpp+0x13b318>
 2c03918: b9403108     	ldr	w8, [x8, #0x30]
 2c0391c: 6b01011f     	cmp	w8, w1
 2c03920: 1a9f07e0     	cset	w0, ne
 2c03924: f84107fe     	ldr	x30, [sp], #0x10
 2c03928: d65f03c0     	ret
 2c0392c: 97f74dd7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemMerger+__c__DisplayClass5_0 :: System.Boolean <Merge>b__1(System.Int32 item)
# VA 0x2c03930 .. 0x2c0395c (next mapped method entry)
 2c03930: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c03934: f9400808     	ldr	x8, [x0, #0x10]
 2c03938: b4000108     	cbz	x8, 0x2c03958 <__start_il2cpp+0x13b344>
 2c0393c: f9402908     	ldr	x8, [x8, #0x50]
 2c03940: b40000c8     	cbz	x8, 0x2c03958 <__start_il2cpp+0x13b344>
 2c03944: b9403108     	ldr	w8, [x8, #0x30]
 2c03948: 6b01011f     	cmp	w8, w1
 2c0394c: 1a9f07e0     	cset	w0, ne
 2c03950: f84107fe     	ldr	x30, [sp], #0x10
 2c03954: d65f03c0     	ret
 2c03958: 97f74dcc     	bl	0x29d7088 <mono_class_get_checked+0x970>
