
# TimeData :: System.String ToString()
# VA 0x2c46514 .. 0x2c465a4 (next mapped method entry)
 2c46514: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c46518: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c4651c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c46520: 9001d674     	adrp	x20, 0x6712000
 2c46524: 9001b5d5     	adrp	x21, 0x62fe000
 2c46528: 9001b5d6     	adrp	x22, 0x62fe000
 2c4652c: 39758688     	ldrb	w8, [x20, #0xd61]
 2c46530: f9474eb5     	ldr	x21, [x21, #0xe98]
 2c46534: f94752d6     	ldr	x22, [x22, #0xea0]
 2c46538: aa0003f3     	mov	x19, x0
 2c4653c: 37000128     	tbnz	w8, #0x0, 0x2c46560 <__start_il2cpp+0x17df4c>
 2c46540: 9001b5c0     	adrp	x0, 0x62fe000
 2c46544: f9475000     	ldr	x0, [x0, #0xea0]
 2c46548: 97f64226     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c4654c: 9001b5c0     	adrp	x0, 0x62fe000
 2c46550: f9474c00     	ldr	x0, [x0, #0xe98]
 2c46554: 97f64223     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c46558: 52800028     	mov	w8, #0x1                // =1
 2c4655c: 39358688     	strb	w8, [x20, #0xd61]
 2c46560: aa1303e0     	mov	x0, x19
 2c46564: aa1f03e1     	mov	x1, xzr
 2c46568: 94930ec0     	bl	0x510a068 <__start_il2cpp+0x2641a54>
 2c4656c: aa0003f4     	mov	x20, x0
 2c46570: 91002260     	add	x0, x19, #0x8
 2c46574: aa1f03e1     	mov	x1, xzr
 2c46578: 94930ebc     	bl	0x510a068 <__start_il2cpp+0x2641a54>
 2c4657c: f94002a8     	ldr	x8, [x21]
 2c46580: f94002c2     	ldr	x2, [x22]
 2c46584: aa1403e1     	mov	x1, x20
 2c46588: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c4658c: aa0003e3     	mov	x3, x0
 2c46590: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c46594: aa0803e0     	mov	x0, x8
 2c46598: aa1f03e4     	mov	x4, xzr
 2c4659c: f84307fe     	ldr	x30, [sp], #0x30
 2c465a0: 148cc155     	b	0x4f76af4 <__start_il2cpp+0x24ae4e0>

# TimeData :: TimeData Now()
# VA 0x2c465a4 .. 0x2c465c4 (next mapped method entry)
 2c465a4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c465a8: 94000007     	bl	0x2c465c4 <__start_il2cpp+0x17dfb0>
 2c465ac: aa0003f3     	mov	x19, x0
 2c465b0: 94000021     	bl	0x2c46634 <__start_il2cpp+0x17e020>
 2c465b4: aa0003e1     	mov	x1, x0
 2c465b8: aa1303e0     	mov	x0, x19
 2c465bc: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c465c0: d65f03c0     	ret

# TimeData :: TimeData At(System.Int64 millis)
# VA 0x2c466a4 .. 0x2c466c4 (next mapped method entry)
 2c466a4: d29ef9e8     	mov	x8, #0xf7cf             // =63439
 2c466a8: f2bc6a68     	movk	x8, #0xe353, lsl #16
 2c466ac: f2d374a8     	movk	x8, #0x9ba5, lsl #32
 2c466b0: f2e41888     	movk	x8, #0x20c4, lsl #48
 2c466b4: 9b487c08     	smulh	x8, x0, x8
 2c466b8: 9347fd09     	asr	x9, x8, #7
 2c466bc: 8b48fd21     	add	x1, x9, x8, lsr #63
 2c466c0: d65f03c0     	ret

# TimeData :: TimeData op_Subtraction(TimeData lhs, TimeData rhs)
# VA 0x2c466c4 .. 0x2c466d0 (next mapped method entry)
 2c466c4: cb030021     	sub	x1, x1, x3
 2c466c8: cb020000     	sub	x0, x0, x2
 2c466cc: d65f03c0     	ret
