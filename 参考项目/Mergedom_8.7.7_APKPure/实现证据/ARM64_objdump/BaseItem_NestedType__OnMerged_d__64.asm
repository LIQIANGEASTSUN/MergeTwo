
# BaseItem+_OnMerged_d__64 :: System.Void MoveNext()
# VA 0x2bf5c30 .. 0x2bf5f44 (next mapped method entry)
 2bf5c30: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf5c34: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf5c38: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf5c3c: b001d8f4     	adrp	x20, 0x6712000
 2bf5c40: aa0003f3     	mov	x19, x0
 2bf5c44: 396caa88     	ldrb	w8, [x20, #0xb2a]
 2bf5c48: 37000248     	tbnz	w8, #0x0, 0x2bf5c90 <__start_il2cpp+0x12d67c>
 2bf5c4c: f001b820     	adrp	x0, 0x62fc000
 2bf5c50: f942f000     	ldr	x0, [x0, #0x5e0]
 2bf5c54: 97f78463     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5c58: 9001b820     	adrp	x0, 0x62f9000
 2bf5c5c: f9474800     	ldr	x0, [x0, #0xe90]
 2bf5c60: 97f78460     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5c64: f001b820     	adrp	x0, 0x62fc000
 2bf5c68: f942d400     	ldr	x0, [x0, #0x5a8]
 2bf5c6c: 97f7845d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5c70: b001b820     	adrp	x0, 0x62fa000
 2bf5c74: f9427400     	ldr	x0, [x0, #0x4e8]
 2bf5c78: 97f7845a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5c7c: f001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf5c80: f9478c00     	ldr	x0, [x0, #0xf18]
 2bf5c84: 97f78457     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5c88: 52800028     	mov	w8, #0x1                // =1
 2bf5c8c: 392caa88     	strb	w8, [x20, #0xb2a]
 2bf5c90: f9401274     	ldr	x20, [x19, #0x20]
 2bf5c94: b4000eb4     	cbz	x20, 0x2bf5e68 <__start_il2cpp+0x12d854>
 2bf5c98: f9405e80     	ldr	x0, [x20, #0xb8]
 2bf5c9c: b4000220     	cbz	x0, 0x2bf5ce0 <__start_il2cpp+0x12d6cc>
 2bf5ca0: b001b836     	adrp	x22, 0x62fa000
 2bf5ca4: 2a1f03f5     	mov	w21, wzr
 2bf5ca8: f94276d6     	ldr	x22, [x22, #0x4e8]
 2bf5cac: b9401808     	ldr	w8, [x0, #0x18]
 2bf5cb0: 6b0802bf     	cmp	w21, w8
 2bf5cb4: 5400016a     	b.ge	0x2bf5ce0 <__start_il2cpp+0x12d6cc>
 2bf5cb8: f94002c2     	ldr	x2, [x22]
 2bf5cbc: 2a1503e1     	mov	w1, w21
 2bf5cc0: 943ccba8     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2bf5cc4: b4000d00     	cbz	x0, 0x2bf5e64 <__start_il2cpp+0x12d850>
 2bf5cc8: aa1f03e1     	mov	x1, xzr
 2bf5ccc: 94005c62     	bl	0x2c0ce54 <__start_il2cpp+0x144840>
 2bf5cd0: f9405e80     	ldr	x0, [x20, #0xb8]
 2bf5cd4: 110006b5     	add	w21, w21, #0x1
 2bf5cd8: b5fffea0     	cbnz	x0, 0x2bf5cac <__start_il2cpp+0x12d698>
 2bf5cdc: 97f784eb     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5ce0: aa1403e0     	mov	x0, x20
 2bf5ce4: 97fff8ec     	bl	0x2bf4094 <__start_il2cpp+0x12ba80>
 2bf5ce8: f9403680     	ldr	x0, [x20, #0x68]
 2bf5cec: b4000c00     	cbz	x0, 0x2bf5e6c <__start_il2cpp+0x12d858>
 2bf5cf0: 2a1f03e1     	mov	w1, wzr
 2bf5cf4: aa1f03e2     	mov	x2, xzr
 2bf5cf8: 94bd39a0     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2bf5cfc: aa1403e0     	mov	x0, x20
 2bf5d00: 97fffa36     	bl	0x2bf45d8 <__start_il2cpp+0x12bfc4>
 2bf5d04: 52800080     	mov	w0, #0x4                // =4
 2bf5d08: aa1f03e1     	mov	x1, xzr
 2bf5d0c: 97fcf982     	bl	0x2b34314 <__start_il2cpp+0x6bd00>
 2bf5d10: f001b7c8     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf5d14: f9478d08     	ldr	x8, [x8, #0xf18]
 2bf5d18: f9405695     	ldr	x21, [x20, #0xa8]
 2bf5d1c: f9400100     	ldr	x0, [x8]
 2bf5d20: b940e408     	ldr	w8, [x0, #0xe4]
 2bf5d24: 35000048     	cbnz	w8, 0x2bf5d2c <__start_il2cpp+0x12d718>
 2bf5d28: 97f7848d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf5d2c: aa1503e0     	mov	x0, x21
 2bf5d30: aa1f03e1     	mov	x1, xzr
 2bf5d34: 94bd5244     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2bf5d38: 360000c0     	tbz	w0, #0x0, 0x2bf5d50 <__start_il2cpp+0x12d73c>
 2bf5d3c: f9405680     	ldr	x0, [x20, #0xa8]
 2bf5d40: b40009a0     	cbz	x0, 0x2bf5e74 <__start_il2cpp+0x12d860>
 2bf5d44: 1e201000     	fmov	s0, #2.00000000
 2bf5d48: aa1f03e1     	mov	x1, xzr
 2bf5d4c: 94004db1     	bl	0x2c09410 <__start_il2cpp+0x140dfc>
 2bf5d50: 9001b835     	adrp	x21, 0x62f9000
 2bf5d54: f9474ab5     	ldr	x21, [x21, #0xe90]
 2bf5d58: f94002a0     	ldr	x0, [x21]
 2bf5d5c: b940e408     	ldr	w8, [x0, #0xe4]
 2bf5d60: 35000068     	cbnz	w8, 0x2bf5d6c <__start_il2cpp+0x12d758>
 2bf5d64: 97f7847e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2bf5d68: f94002a0     	ldr	x0, [x21]
 2bf5d6c: f9405c08     	ldr	x8, [x0, #0xb8]
 2bf5d70: f9400908     	ldr	x8, [x8, #0x10]
 2bf5d74: b40007e8     	cbz	x8, 0x2bf5e70 <__start_il2cpp+0x12d85c>
 2bf5d78: f9402100     	ldr	x0, [x8, #0x40]
 2bf5d7c: f9400d09     	ldr	x9, [x8, #0x18]
 2bf5d80: f9401503     	ldr	x3, [x8, #0x28]
 2bf5d84: aa1403e1     	mov	x1, x20
 2bf5d88: aa1f03e2     	mov	x2, xzr
 2bf5d8c: d63f0120     	blr	x9
 2bf5d90: f9400675     	ldr	x21, [x19, #0x8]
 2bf5d94: 12800028     	mov	w8, #-0x2               // =-2
 2bf5d98: b9000268     	str	w8, [x19]
 2bf5d9c: b4000415     	cbz	x21, 0x2bf5e1c <__start_il2cpp+0x12d808>
 2bf5da0: f001b828     	adrp	x8, 0x62fc000
 2bf5da4: f942f108     	ldr	x8, [x8, #0x5e0]
 2bf5da8: f9400108     	ldr	x8, [x8]
 2bf5dac: f9401100     	ldr	x0, [x8, #0x20]
 2bf5db0: 9104d408     	add	x8, x0, #0x135
 2bf5db4: 79400108     	ldrh	w8, [x8]
 2bf5db8: 37000048     	tbnz	w8, #0x0, 0x2bf5dc0 <__start_il2cpp+0x12d7ac>
 2bf5dbc: 97f8609b     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf5dc0: f9406008     	ldr	x8, [x0, #0xc0]
 2bf5dc4: f9400501     	ldr	x1, [x8, #0x8]
 2bf5dc8: 9104d428     	add	x8, x1, #0x135
 2bf5dcc: 79400108     	ldrh	w8, [x8]
 2bf5dd0: 37000088     	tbnz	w8, #0x0, 0x2bf5de0 <__start_il2cpp+0x12d7cc>
 2bf5dd4: aa0103e0     	mov	x0, x1
 2bf5dd8: 97f86094     	bl	0x2a0e028 <JNI_OnUnload+0xe1d8>
 2bf5ddc: aa0003e1     	mov	x1, x0
 2bf5de0: f94002a8     	ldr	x8, [x21]
 2bf5de4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2bf5de8: b4000129     	cbz	x9, 0x2bf5e0c <__start_il2cpp+0x12d7f8>
 2bf5dec: f940590a     	ldr	x10, [x8, #0xb0]
 2bf5df0: 9100214a     	add	x10, x10, #0x8
 2bf5df4: f85f814b     	ldur	x11, [x10, #-0x8]
 2bf5df8: eb01017f     	cmp	x11, x1
 2bf5dfc: 540001e0     	b.eq	0x2bf5e38 <__start_il2cpp+0x12d824>
 2bf5e00: f1000529     	subs	x9, x9, #0x1
 2bf5e04: 9100414a     	add	x10, x10, #0x10
 2bf5e08: 54ffff61     	b.ne	0x2bf5df4 <__start_il2cpp+0x12d7e0>
 2bf5e0c: aa1503e0     	mov	x0, x21
 2bf5e10: 52800042     	mov	w2, #0x2                // =2
 2bf5e14: 97f86154     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2bf5e18: 1400000c     	b	0x2bf5e48 <__start_il2cpp+0x12d834>
 2bf5e1c: f8018e74     	str	x20, [x19, #0x18]!
 2bf5e20: aa1303e0     	mov	x0, x19
 2bf5e24: aa1403e1     	mov	x1, x20
 2bf5e28: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5e2c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf5e30: f84307fe     	ldr	x30, [sp], #0x30
 2bf5e34: 17f783d6     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2bf5e38: b9400149     	ldr	w9, [x10]
 2bf5e3c: 11000929     	add	w9, w9, #0x2
 2bf5e40: 8b29d108     	add	x8, x8, w9, sxtw #4
 2bf5e44: 9104e100     	add	x0, x8, #0x138
 2bf5e48: a9400803     	ldp	x3, x2, [x0]
 2bf5e4c: aa1503e0     	mov	x0, x21
 2bf5e50: aa1403e1     	mov	x1, x20
 2bf5e54: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5e58: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf5e5c: f84307fe     	ldr	x30, [sp], #0x30
 2bf5e60: d61f0060     	br	x3
 2bf5e64: 97f78489     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5e68: 97f78488     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5e6c: 97f78487     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5e70: 97f78486     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5e74: 97f78485     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2bf5e78: 1400000b     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e7c: 1400000a     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e80: 14000009     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e84: 14000008     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e88: 14000007     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e8c: 14000006     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e90: 14000005     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e94: 14000004     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e98: 14000003     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5e9c: 14000002     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5ea0: 14000001     	b	0x2bf5ea4 <__start_il2cpp+0x12d890>
 2bf5ea4: aa0003f4     	mov	x20, x0
 2bf5ea8: 7100043f     	cmp	w1, #0x1
 2bf5eac: 54000461     	b.ne	0x2bf5f38 <__start_il2cpp+0x12d924>
 2bf5eb0: aa1403e0     	mov	x0, x20
 2bf5eb4: 94ccc223     	bl	0x5f26740 <__cxa_begin_catch@plt>
 2bf5eb8: aa0003f4     	mov	x20, x0
 2bf5ebc: f001b7c0     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2bf5ec0: f946f000     	ldr	x0, [x0, #0xde0]
 2bf5ec4: 97f783cc     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf5ec8: f9400288     	ldr	x8, [x20]
 2bf5ecc: f9400101     	ldr	x1, [x8]
 2bf5ed0: 97f78570     	bl	0x29d7490 <mono_class_get_checked+0xd78>
 2bf5ed4: 360001e0     	tbz	w0, #0x0, 0x2bf5f10 <__start_il2cpp+0x12d8fc>
 2bf5ed8: f9400294     	ldr	x20, [x20]
 2bf5edc: 94ccc21d     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf5ee0: 12800028     	mov	w8, #-0x2               // =-2
 2bf5ee4: f001b820     	adrp	x0, 0x62fc000
 2bf5ee8: b8008668     	str	w8, [x19], #0x8
 2bf5eec: f9430000     	ldr	x0, [x0, #0x600]
 2bf5ef0: 97f783c1     	bl	0x29d6df4 <mono_class_get_checked+0x6dc>
 2bf5ef4: aa0003e2     	mov	x2, x0
 2bf5ef8: aa1303e0     	mov	x0, x19
 2bf5efc: aa1403e1     	mov	x1, x20
 2bf5f00: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5f04: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf5f08: f84307fe     	ldr	x30, [sp], #0x30
 2bf5f0c: 17eac4c3     	b	0x26a7218 <.text+0x20b8>
 2bf5f10: 52800100     	mov	w0, #0x8                // =8
 2bf5f14: 94ccc22b     	bl	0x5f267c0 <__cxa_allocate_exception@plt>
 2bf5f18: f9400288     	ldr	x8, [x20]
 2bf5f1c: f9000008     	str	x8, [x0]
 2bf5f20: f00199a1     	adrp	x1, 0x5f2c000 <__system_property_get@plt+0x3410>
 2bf5f24: 91302021     	add	x1, x1, #0xc08
 2bf5f28: aa1f03e2     	mov	x2, xzr
 2bf5f2c: 94ccc229     	bl	0x5f267d0 <__cxa_throw@plt>
 2bf5f30: aa0003f4     	mov	x20, x0
 2bf5f34: 94ccc207     	bl	0x5f26750 <__cxa_end_catch@plt>
 2bf5f38: aa1403e0     	mov	x0, x20
 2bf5f3c: 97fb39e8     	bl	0x2ac46dc <__emutls_get_address+0xfc8>
 2bf5f40: 97eabec3     	bl	0x26a5a4c <.text+0x8ec>

# BaseItem+_OnMerged_d__64 :: System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
# VA 0x2bf5f44 .. 0x2bf5f9c (next mapped method entry)
 2bf5f44: f81d0ffe     	str	x30, [sp, #-0x30]!
 2bf5f48: a90157f6     	stp	x22, x21, [sp, #0x10]
 2bf5f4c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2bf5f50: b001d8f5     	adrp	x21, 0x6712000
 2bf5f54: f001b836     	adrp	x22, 0x62fc000
 2bf5f58: aa0103f3     	mov	x19, x1
 2bf5f5c: 396caea8     	ldrb	w8, [x21, #0xb2b]
 2bf5f60: f94306d6     	ldr	x22, [x22, #0x608]
 2bf5f64: aa0003f4     	mov	x20, x0
 2bf5f68: 370000c8     	tbnz	w8, #0x0, 0x2bf5f80 <__start_il2cpp+0x12d96c>
 2bf5f6c: f001b820     	adrp	x0, 0x62fc000
 2bf5f70: f9430400     	ldr	x0, [x0, #0x608]
 2bf5f74: 97f7839b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2bf5f78: 52800028     	mov	w8, #0x1                // =1
 2bf5f7c: 392caea8     	strb	w8, [x21, #0xb2b]
 2bf5f80: f94002c2     	ldr	x2, [x22]
 2bf5f84: 91002280     	add	x0, x20, #0x8
 2bf5f88: aa1303e1     	mov	x1, x19
 2bf5f8c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2bf5f90: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2bf5f94: f84307fe     	ldr	x30, [sp], #0x30
 2bf5f98: 14663068     	b	0x4582138 <__start_il2cpp+0x1ab9b24>
