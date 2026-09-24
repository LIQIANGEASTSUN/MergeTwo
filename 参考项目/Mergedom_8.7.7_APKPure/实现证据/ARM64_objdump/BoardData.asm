
# BoardData :: BoardData Clone()
# VA 0x2b9d9a0 .. 0x2b9db8c (next mapped method entry)
 2b9d9a0: d101c3ff     	sub	sp, sp, #0x70
 2b9d9a4: a9045ffe     	stp	x30, x23, [sp, #0x40]
 2b9d9a8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2b9d9ac: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2b9d9b0: b001dbb5     	adrp	x21, 0x6712000
 2b9d9b4: 9001baf3     	adrp	x19, 0x62f9000
 2b9d9b8: aa0003f4     	mov	x20, x0
 2b9d9bc: 3962daa8     	ldrb	w8, [x21, #0x8b6]
 2b9d9c0: f9472273     	ldr	x19, [x19, #0xe40]
 2b9d9c4: 370002a8     	tbnz	w8, #0x0, 0x2b9da18 <__start_il2cpp+0xd5404>
 2b9d9c8: 9001bae0     	adrp	x0, 0x62f9000
 2b9d9cc: f9472000     	ldr	x0, [x0, #0xe40]
 2b9d9d0: 97f8e504     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d9d4: 9001bae0     	adrp	x0, 0x62f9000
 2b9d9d8: f9472400     	ldr	x0, [x0, #0xe48]
 2b9d9dc: 97f8e501     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d9e0: 9001bae0     	adrp	x0, 0x62f9000
 2b9d9e4: f9472800     	ldr	x0, [x0, #0xe50]
 2b9d9e8: 97f8e4fe     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d9ec: 9001bae0     	adrp	x0, 0x62f9000
 2b9d9f0: f9472c00     	ldr	x0, [x0, #0xe58]
 2b9d9f4: 97f8e4fb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9d9f8: 9001bae0     	adrp	x0, 0x62f9000
 2b9d9fc: f9473000     	ldr	x0, [x0, #0xe60]
 2b9da00: 97f8e4f8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9da04: 9001bae0     	adrp	x0, 0x62f9000
 2b9da08: f9473400     	ldr	x0, [x0, #0xe68]
 2b9da0c: 97f8e4f5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9da10: 52800028     	mov	w8, #0x1                // =1
 2b9da14: 3922daa8     	strb	w8, [x21, #0x8b6]
 2b9da18: f9400260     	ldr	x0, [x19]
 2b9da1c: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2b9da20: f9001bff     	str	xzr, [sp, #0x30]
 2b9da24: 97f8e595     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9da28: aa0003f3     	mov	x19, x0
 2b9da2c: 94000058     	bl	0x2b9db8c <__start_il2cpp+0xd5578>
 2b9da30: f9400a80     	ldr	x0, [x20, #0x10]
 2b9da34: b40007e0     	cbz	x0, 0x2b9db30 <__start_il2cpp+0xd551c>
 2b9da38: 9001bae8     	adrp	x8, 0x62f9000
 2b9da3c: 9001baf6     	adrp	x22, 0x62f9000
 2b9da40: 9001baf7     	adrp	x23, 0x62f9000
 2b9da44: f9473508     	ldr	x8, [x8, #0xe68]
 2b9da48: 9001baf5     	adrp	x21, 0x62f9000
 2b9da4c: f9472ad6     	ldr	x22, [x22, #0xe50]
 2b9da50: f94732f7     	ldr	x23, [x23, #0xe60]
 2b9da54: f94726b5     	ldr	x21, [x21, #0xe48]
 2b9da58: f9400101     	ldr	x1, [x8]
 2b9da5c: 910023e8     	add	x8, sp, #0x8
 2b9da60: 943e2fd8     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2b9da64: f9400fe8     	ldr	x8, [sp, #0x18]
 2b9da68: 3cc083e0     	ldur	q0, [sp, #0x8]
 2b9da6c: f9001be8     	str	x8, [sp, #0x30]
 2b9da70: 910083e8     	add	x8, sp, #0x20
 2b9da74: 3d800be0     	str	q0, [sp, #0x20]
 2b9da78: a900a3ff     	stp	xzr, x8, [sp, #0x8]
 2b9da7c: f94002c1     	ldr	x1, [x22]
 2b9da80: 910083e0     	add	x0, sp, #0x20
 2b9da84: 947ba385     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2b9da88: 360003c0     	tbz	w0, #0x0, 0x2b9db00 <__start_il2cpp+0xd54ec>
 2b9da8c: b40004f3     	cbz	x19, 0x2b9db28 <__start_il2cpp+0xd5514>
 2b9da90: f9401be0     	ldr	x0, [sp, #0x30]
 2b9da94: b40004c0     	cbz	x0, 0x2b9db2c <__start_il2cpp+0xd5518>
 2b9da98: f9400a74     	ldr	x20, [x19, #0x10]
 2b9da9c: 97ffff23     	bl	0x2b9d728 <__start_il2cpp+0xd5114>
 2b9daa0: aa0003e1     	mov	x1, x0
 2b9daa4: b4000414     	cbz	x20, 0x2b9db24 <__start_il2cpp+0xd5510>
 2b9daa8: b9401e8a     	ldr	w10, [x20, #0x1c]
 2b9daac: f9400a88     	ldr	x8, [x20, #0x10]
 2b9dab0: f94002e9     	ldr	x9, [x23]
 2b9dab4: 1100054a     	add	w10, w10, #0x1
 2b9dab8: b9001e8a     	str	w10, [x20, #0x1c]
 2b9dabc: b4000348     	cbz	x8, 0x2b9db24 <__start_il2cpp+0xd5510>
 2b9dac0: b9801a8a     	ldrsw	x10, [x20, #0x18]
 2b9dac4: b940190b     	ldr	w11, [x8, #0x18]
 2b9dac8: 6b0b015f     	cmp	w10, w11
 2b9dacc: 540000e2     	b.hs	0x2b9dae8 <__start_il2cpp+0xd54d4>
 2b9dad0: 8b0a0d00     	add	x0, x8, x10, lsl #3
 2b9dad4: 11000549     	add	w9, w10, #0x1
 2b9dad8: b9001a89     	str	w9, [x20, #0x18]
 2b9dadc: f8020c01     	str	x1, [x0, #0x20]!
 2b9dae0: 97f8e4ab     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9dae4: 17ffffe6     	b	0x2b9da7c <__start_il2cpp+0xd5468>
 2b9dae8: f9401128     	ldr	x8, [x9, #0x20]
 2b9daec: f9406108     	ldr	x8, [x8, #0xc0]
 2b9daf0: f9403902     	ldr	x2, [x8, #0x70]
 2b9daf4: aa1403e0     	mov	x0, x20
 2b9daf8: 943e2cce     	bl	0x3b28e30 <__start_il2cpp+0x106081c>
 2b9dafc: 17ffffe0     	b	0x2b9da7c <__start_il2cpp+0xd5468>
 2b9db00: f94002a1     	ldr	x1, [x21]
 2b9db04: 910083e0     	add	x0, sp, #0x20
 2b9db08: 947ba363     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2b9db0c: aa1303e0     	mov	x0, x19
 2b9db10: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2b9db14: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2b9db18: a9445ffe     	ldp	x30, x23, [sp, #0x40]
 2b9db1c: 9101c3ff     	add	sp, sp, #0x70
 2b9db20: d65f03c0     	ret
 2b9db24: 97f8e559     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9db28: 97f8e558     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9db2c: 97f8e557     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9db30: 97f8e556     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9db34: 14000004     	b	0x2b9db44 <__start_il2cpp+0xd5530>
 2b9db38: 14000003     	b	0x2b9db44 <__start_il2cpp+0xd5530>
 2b9db3c: 14000002     	b	0x2b9db44 <__start_il2cpp+0xd5530>
 2b9db40: 14000001     	b	0x2b9db44 <__start_il2cpp+0xd5530>
 2b9db44: 7100043f     	cmp	w1, #0x1
 2b9db48: 54000161     	b.ne	0x2b9db74 <__start_il2cpp+0xd5560>
 2b9db4c: 94ce22fd     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2b9db50: f9400014     	ldr	x20, [x0]
 2b9db54: f90007f4     	str	x20, [sp, #0x8]
 2b9db58: 94ce22fe     	bl	0x5f26750 <__cxa_end_catch@plt>
 2b9db5c: f9400be0     	ldr	x0, [sp, #0x10]
 2b9db60: f94002a1     	ldr	x1, [x21]
 2b9db64: 947ba34c     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2b9db68: b4fffd34     	cbz	x20, 0x2b9db0c <__start_il2cpp+0xd54f8>
 2b9db6c: aa1403e0     	mov	x0, x20
 2b9db70: 97f8e544     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2b9db74: aa0003f3     	mov	x19, x0
 2b9db78: 910023e0     	add	x0, sp, #0x8
 2b9db7c: 97ec2a26     	bl	0x26a8414 <.text+0x32b4>
 2b9db80: aa1303e0     	mov	x0, x19
 2b9db84: 97fc9ad6     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2b9db88: 97ec1fb1     	bl	0x26a5a4c <.text+0x8ec>

# BoardData :: System.Void .ctor()
# VA 0x2b9db8c .. 0x2b9dc14 (next mapped method entry)
 2b9db8c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b9db90: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b9db94: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b9db98: b001dbb5     	adrp	x21, 0x6712000
 2b9db9c: 9001baf6     	adrp	x22, 0x62f9000
 2b9dba0: 9001baf4     	adrp	x20, 0x62f9000
 2b9dba4: 3962e2a8     	ldrb	w8, [x21, #0x8b8]
 2b9dba8: f9473ad6     	ldr	x22, [x22, #0xe70]
 2b9dbac: f9473e94     	ldr	x20, [x20, #0xe78]
 2b9dbb0: aa0003f3     	mov	x19, x0
 2b9dbb4: 37000128     	tbnz	w8, #0x0, 0x2b9dbd8 <__start_il2cpp+0xd55c4>
 2b9dbb8: 9001bae0     	adrp	x0, 0x62f9000
 2b9dbbc: f9473c00     	ldr	x0, [x0, #0xe78]
 2b9dbc0: 97f8e488     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dbc4: 9001bae0     	adrp	x0, 0x62f9000
 2b9dbc8: f9473800     	ldr	x0, [x0, #0xe70]
 2b9dbcc: 97f8e485     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dbd0: 52800028     	mov	w8, #0x1                // =1
 2b9dbd4: 3922e2a8     	strb	w8, [x21, #0x8b8]
 2b9dbd8: f94002c0     	ldr	x0, [x22]
 2b9dbdc: 97f8e527     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b9dbe0: f9400281     	ldr	x1, [x20]
 2b9dbe4: aa0003f4     	mov	x20, x0
 2b9dbe8: 943e2a78     	bl	0x3b285c8 <__start_il2cpp+0x105ffb4>
 2b9dbec: aa1303e0     	mov	x0, x19
 2b9dbf0: aa1403e1     	mov	x1, x20
 2b9dbf4: f8010c14     	str	x20, [x0, #0x10]!
 2b9dbf8: 97f8e465     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b9dbfc: aa1303e0     	mov	x0, x19
 2b9dc00: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b9dc04: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b9dc08: aa1f03e1     	mov	x1, xzr
 2b9dc0c: f84307fe     	ldr	x30, [sp], #0x30
 2b9dc10: 1496c7ce     	b	0x514fb48 <__start_il2cpp+0x2687534>

# BoardData :: System.Boolean IsEmpty()
# VA 0x2b9dc14 .. 0x2b9dd80 (next mapped method entry)
 2b9dc14: d10143ff     	sub	sp, sp, #0x50
 2b9dc18: f9001bfe     	str	x30, [sp, #0x30]
 2b9dc1c: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2b9dc20: b001dbb4     	adrp	x20, 0x6712000
 2b9dc24: aa0003f3     	mov	x19, x0
 2b9dc28: 3962de88     	ldrb	w8, [x20, #0x8b7]
 2b9dc2c: 37000248     	tbnz	w8, #0x0, 0x2b9dc74 <__start_il2cpp+0xd5660>
 2b9dc30: 9001bae0     	adrp	x0, 0x62f9000
 2b9dc34: f9474000     	ldr	x0, [x0, #0xe80]
 2b9dc38: 97f8e46a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dc3c: 9001bae0     	adrp	x0, 0x62f9000
 2b9dc40: f9472400     	ldr	x0, [x0, #0xe48]
 2b9dc44: 97f8e467     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dc48: 9001bae0     	adrp	x0, 0x62f9000
 2b9dc4c: f9472800     	ldr	x0, [x0, #0xe50]
 2b9dc50: 97f8e464     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dc54: 9001bae0     	adrp	x0, 0x62f9000
 2b9dc58: f9472c00     	ldr	x0, [x0, #0xe58]
 2b9dc5c: 97f8e461     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dc60: 9001bae0     	adrp	x0, 0x62f9000
 2b9dc64: f9473400     	ldr	x0, [x0, #0xe68]
 2b9dc68: 97f8e45e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b9dc6c: 52800028     	mov	w8, #0x1                // =1
 2b9dc70: 3922de88     	strb	w8, [x20, #0x8b7]
 2b9dc74: f9400a60     	ldr	x0, [x19, #0x10]
 2b9dc78: a901ffff     	stp	xzr, xzr, [sp, #0x18]
 2b9dc7c: f90017ff     	str	xzr, [sp, #0x28]
 2b9dc80: b4000640     	cbz	x0, 0x2b9dd48 <__start_il2cpp+0xd5734>
 2b9dc84: 9001bae8     	adrp	x8, 0x62f9000
 2b9dc88: f9474108     	ldr	x8, [x8, #0xe80]
 2b9dc8c: f9400101     	ldr	x1, [x8]
 2b9dc90: 94214ff1     	bl	0x33f1c54 <__start_il2cpp+0x929640>
 2b9dc94: 360005a0     	tbz	w0, #0x0, 0x2b9dd48 <__start_il2cpp+0xd5734>
 2b9dc98: f9400a60     	ldr	x0, [x19, #0x10]
 2b9dc9c: b4000360     	cbz	x0, 0x2b9dd08 <__start_il2cpp+0xd56f4>
 2b9dca0: 9001bae8     	adrp	x8, 0x62f9000
 2b9dca4: 910063f4     	add	x20, sp, #0x18
 2b9dca8: f9473508     	ldr	x8, [x8, #0xe68]
 2b9dcac: f9400101     	ldr	x1, [x8]
 2b9dcb0: 910063e8     	add	x8, sp, #0x18
 2b9dcb4: 943e2f43     	bl	0x3b299c0 <__start_il2cpp+0x10613ac>
 2b9dcb8: 9001baf3     	adrp	x19, 0x62f9000
 2b9dcbc: f9472a73     	ldr	x19, [x19, #0xe50]
 2b9dcc0: a900d3ff     	stp	xzr, x20, [sp, #0x8]
 2b9dcc4: f9400261     	ldr	x1, [x19]
 2b9dcc8: 910063e0     	add	x0, sp, #0x18
 2b9dccc: 947ba2f3     	bl	0x4a86898 <__start_il2cpp+0x1fbe284>
 2b9dcd0: 360000c0     	tbz	w0, #0x0, 0x2b9dce8 <__start_il2cpp+0xd56d4>
 2b9dcd4: f94017e8     	ldr	x8, [sp, #0x28]
 2b9dcd8: b4000168     	cbz	x8, 0x2b9dd04 <__start_il2cpp+0xd56f0>
 2b9dcdc: b9401508     	ldr	w8, [x8, #0x14]
 2b9dce0: 3100051f     	cmn	w8, #0x1
 2b9dce4: 54ffff00     	b.eq	0x2b9dcc4 <__start_il2cpp+0xd56b0>
 2b9dce8: 9001bae8     	adrp	x8, 0x62f9000
 2b9dcec: 52000013     	eor	w19, w0, #0x1
 2b9dcf0: 910063e0     	add	x0, sp, #0x18
 2b9dcf4: f9472508     	ldr	x8, [x8, #0xe48]
 2b9dcf8: f9400101     	ldr	x1, [x8]
 2b9dcfc: 947ba2e6     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2b9dd00: 14000013     	b	0x2b9dd4c <__start_il2cpp+0xd5738>
 2b9dd04: 97f8e4e1     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9dd08: 97f8e4e0     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2b9dd0c: 14000001     	b	0x2b9dd10 <__start_il2cpp+0xd56fc>
 2b9dd10: aa0003f3     	mov	x19, x0
 2b9dd14: 7100043f     	cmp	w1, #0x1
 2b9dd18: 540002a1     	b.ne	0x2b9dd6c <__start_il2cpp+0xd5758>
 2b9dd1c: aa1303e0     	mov	x0, x19
 2b9dd20: 94ce2288     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2b9dd24: f9400013     	ldr	x19, [x0]
 2b9dd28: f90007f3     	str	x19, [sp, #0x8]
 2b9dd2c: 94ce2289     	bl	0x5f26750 <__cxa_end_catch@plt>
 2b9dd30: 9001bae8     	adrp	x8, 0x62f9000
 2b9dd34: f9472508     	ldr	x8, [x8, #0xe48]
 2b9dd38: f9400be0     	ldr	x0, [sp, #0x10]
 2b9dd3c: f9400101     	ldr	x1, [x8]
 2b9dd40: 947ba2d5     	bl	0x4a86894 <__start_il2cpp+0x1fbe280>
 2b9dd44: b50000f3     	cbnz	x19, 0x2b9dd60 <__start_il2cpp+0xd574c>
 2b9dd48: 52800033     	mov	w19, #0x1               // =1
 2b9dd4c: 12000260     	and	w0, w19, #0x1
 2b9dd50: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2b9dd54: f9401bfe     	ldr	x30, [sp, #0x30]
 2b9dd58: 910143ff     	add	sp, sp, #0x50
 2b9dd5c: d65f03c0     	ret
 2b9dd60: aa1303e0     	mov	x0, x19
 2b9dd64: 97f8e4c7     	bl	0x29d7080 <mono_class_get_checked+0x968>
 2b9dd68: aa0003f3     	mov	x19, x0
 2b9dd6c: 910023e0     	add	x0, sp, #0x8
 2b9dd70: 97ec29a9     	bl	0x26a8414 <.text+0x32b4>
 2b9dd74: aa1303e0     	mov	x0, x19
 2b9dd78: 97fc9a59     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2b9dd7c: 97ec1f34     	bl	0x26a5a4c <.text+0x8ec>
