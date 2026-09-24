
# ConfigMergeFeverEvent :: System.String GetEventID()
# VA 0x2d5f798 .. 0x2d5f7a0 (next mapped method entry)
 2d5f798: f9400800     	ldr	x0, [x0, #0x10]
 2d5f79c: d65f03c0     	ret

# ConfigMergeFeverEvent :: System.Int32 GetEventDurationHours()
# VA 0x2d5f7a0 .. 0x2d5f7a8 (next mapped method entry)
 2d5f7a0: b9401800     	ldr	w0, [x0, #0x18]
 2d5f7a4: d65f03c0     	ret

# ConfigMergeFeverEvent :: System.DateTime GetStartDateTime()
# VA 0x2d5f7a8 .. 0x2d5f7b0 (next mapped method entry)
 2d5f7a8: f9401001     	ldr	x1, [x0, #0x20]
 2d5f7ac: 14000001     	b	0x2d5f7b0 <__start_il2cpp+0x29719c>

# ConfigMergeFeverEvent :: System.DateTime GetTime(System.String timeStr)
# VA 0x2d5f7b0 .. 0x2d5f908 (next mapped method entry)
 2d5f7b0: f81d0ffe     	str	x30, [sp, #-0x30]!
 2d5f7b4: a90157f6     	stp	x22, x21, [sp, #0x10]
 2d5f7b8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2d5f7bc: 9001cdb5     	adrp	x21, 0x6713000
 2d5f7c0: d001ac94     	adrp	x20, 0x62f1000
 2d5f7c4: aa0103f3     	mov	x19, x1
 2d5f7c8: 395862a8     	ldrb	w8, [x21, #0x618]
 2d5f7cc: f941aa94     	ldr	x20, [x20, #0x350]
 2d5f7d0: 37000248     	tbnz	w8, #0x0, 0x2d5f818 <__start_il2cpp+0x297204>
 2d5f7d4: d001ac80     	adrp	x0, 0x62f1000
 2d5f7d8: f941a800     	ldr	x0, [x0, #0x350]
 2d5f7dc: 97f1dd81     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f7e0: f001ac80     	adrp	x0, 0x62f2000
 2d5f7e4: f940ac00     	ldr	x0, [x0, #0x158]
 2d5f7e8: 97f1dd7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f7ec: b001ac80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2d5f7f0: f946e800     	ldr	x0, [x0, #0xdd0]
 2d5f7f4: 97f1dd7b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f7f8: b001aca0     	adrp	x0, 0x62f4000
 2d5f7fc: f9476c00     	ldr	x0, [x0, #0xed8]
 2d5f800: 97f1dd78     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f804: d001ad20     	adrp	x0, 0x6305000
 2d5f808: f943a000     	ldr	x0, [x0, #0x740]
 2d5f80c: 97f1dd75     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f810: 52800028     	mov	w8, #0x1                // =1
 2d5f814: 391862a8     	strb	w8, [x21, #0x618]
 2d5f818: f9400280     	ldr	x0, [x20]
 2d5f81c: f001ac95     	adrp	x21, 0x62f2000
 2d5f820: b940e408     	ldr	w8, [x0, #0xe4]
 2d5f824: f940aeb5     	ldr	x21, [x21, #0x158]
 2d5f828: f90007ff     	str	xzr, [sp, #0x8]
 2d5f82c: 35000048     	cbnz	w8, 0x2d5f834 <__start_il2cpp+0x297220>
 2d5f830: 97f1ddcb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2d5f834: aa1f03e0     	mov	x0, xzr
 2d5f838: 948cbad2     	bl	0x508e380 <__start_il2cpp+0x25c5d6c>
 2d5f83c: f94002a8     	ldr	x8, [x21]
 2d5f840: aa0003f4     	mov	x20, x0
 2d5f844: b940e509     	ldr	w9, [x8, #0xe4]
 2d5f848: 35000069     	cbnz	w9, 0x2d5f854 <__start_il2cpp+0x297240>
 2d5f84c: aa0803e0     	mov	x0, x8
 2d5f850: 97f1ddc3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2d5f854: 910023e3     	add	x3, sp, #0x8
 2d5f858: aa1303e0     	mov	x0, x19
 2d5f85c: aa1403e1     	mov	x1, x20
 2d5f860: 2a1f03e2     	mov	w2, wzr
 2d5f864: aa1f03e4     	mov	x4, xzr
 2d5f868: 948e368a     	bl	0x50ed290 <__start_il2cpp+0x2624c7c>
 2d5f86c: 36000060     	tbz	w0, #0x0, 0x2d5f878 <__start_il2cpp+0x297264>
 2d5f870: f94007e0     	ldr	x0, [sp, #0x8]
 2d5f874: 14000021     	b	0x2d5f8f8 <__start_il2cpp+0x2972e4>
 2d5f878: d001ad28     	adrp	x8, 0x6305000
 2d5f87c: b001acb4     	adrp	x20, 0x62f4000
 2d5f880: b001ac96     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2d5f884: f943a108     	ldr	x8, [x8, #0x740]
 2d5f888: f9476e94     	ldr	x20, [x20, #0xed8]
 2d5f88c: f946ead6     	ldr	x22, [x22, #0xdd0]
 2d5f890: aa1303e1     	mov	x1, x19
 2d5f894: aa1f03e2     	mov	x2, xzr
 2d5f898: f9400100     	ldr	x0, [x8]
 2d5f89c: 94882541     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2d5f8a0: f9400288     	ldr	x8, [x20]
 2d5f8a4: aa0003f4     	mov	x20, x0
 2d5f8a8: aa0803e0     	mov	x0, x8
 2d5f8ac: 97f1ddf3     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2d5f8b0: aa1403e1     	mov	x1, x20
 2d5f8b4: aa1f03e2     	mov	x2, xzr
 2d5f8b8: aa1f03e3     	mov	x3, xzr
 2d5f8bc: aa0003f3     	mov	x19, x0
 2d5f8c0: 97f74196     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2d5f8c4: f94002c0     	ldr	x0, [x22]
 2d5f8c8: b940e408     	ldr	w8, [x0, #0xe4]
 2d5f8cc: 35000048     	cbnz	w8, 0x2d5f8d4 <__start_il2cpp+0x2972c0>
 2d5f8d0: 97f1dda3     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2d5f8d4: aa1303e0     	mov	x0, x19
 2d5f8d8: aa1f03e1     	mov	x1, xzr
 2d5f8dc: 94b65ecb     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2d5f8e0: f94002a0     	ldr	x0, [x21]
 2d5f8e4: b940e408     	ldr	w8, [x0, #0xe4]
 2d5f8e8: 35000048     	cbnz	w8, 0x2d5f8f0 <__start_il2cpp+0x2972dc>
 2d5f8ec: 97f1dd9c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2d5f8f0: aa1f03e0     	mov	x0, xzr
 2d5f8f4: 948e316e     	bl	0x50ebeac <__start_il2cpp+0x2623898>
 2d5f8f8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2d5f8fc: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2d5f900: f84307fe     	ldr	x30, [sp], #0x30
 2d5f904: d65f03c0     	ret

# ConfigMergeFeverEvent :: System.DateTime GetEndDateTime()
# VA 0x2d5f908 .. 0x2d5f910 (next mapped method entry)
 2d5f908: f9401401     	ldr	x1, [x0, #0x28]
 2d5f90c: 17ffffa9     	b	0x2d5f7b0 <__start_il2cpp+0x29719c>

# ConfigMergeFeverEvent :: System.Int32 GetLevelsCount()
# VA 0x2d5f910 .. 0x2d5f958 (next mapped method entry)
 2d5f910: f81e0ffe     	str	x30, [sp, #-0x20]!
 2d5f914: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2d5f918: 9001cdb4     	adrp	x20, 0x6713000
 2d5f91c: aa0003f3     	mov	x19, x0
 2d5f920: 39585688     	ldrb	w8, [x20, #0x615]
 2d5f924: 370000c8     	tbnz	w8, #0x0, 0x2d5f93c <__start_il2cpp+0x297328>
 2d5f928: d001ad20     	adrp	x0, 0x6305000
 2d5f92c: f9439800     	ldr	x0, [x0, #0x730]
 2d5f930: 97f1dd2c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f934: 52800028     	mov	w8, #0x1                // =1
 2d5f938: 39185688     	strb	w8, [x20, #0x615]
 2d5f93c: f9401e68     	ldr	x8, [x19, #0x38]
 2d5f940: b40000a8     	cbz	x8, 0x2d5f954 <__start_il2cpp+0x297340>
 2d5f944: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2d5f948: b9401900     	ldr	w0, [x8, #0x18]
 2d5f94c: f84207fe     	ldr	x30, [sp], #0x20
 2d5f950: d65f03c0     	ret
 2d5f954: 97f1ddcd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ConfigMergeFeverEvent :: System.Int32 GetLevelRequirement()
# VA 0x2d5f958 .. 0x2d5f960 (next mapped method entry)
 2d5f958: b9403000     	ldr	w0, [x0, #0x30]
 2d5f95c: d65f03c0     	ret

# ConfigMergeFeverEvent :: System.Int32 GetTaskRequirement()
# VA 0x2d5f960 .. 0x2d5f968 (next mapped method entry)
 2d5f960: b9403400     	ldr	w0, [x0, #0x34]
 2d5f964: d65f03c0     	ret

# ConfigMergeFeverEvent :: MergeFever.MergeFeverLevel GetLevel(System.Int32 index)
# VA 0x2d5f968 .. 0x2d5f96c (next mapped method entry)
 2d5f968: 14000001     	b	0x2d5f96c <__start_il2cpp+0x297358>

# ConfigMergeFeverEvent :: MergeFever.MergeFeverLevel GetLevelByIndex(System.Int32 index)
# VA 0x2d5f96c .. 0x2d5fbe0 (next mapped method entry)
 2d5f96c: d10143ff     	sub	sp, sp, #0x50
 2d5f970: a9025ffe     	stp	x30, x23, [sp, #0x20]
 2d5f974: a90357f6     	stp	x22, x21, [sp, #0x30]
 2d5f978: a9044ff4     	stp	x20, x19, [sp, #0x40]
 2d5f97c: 9001cdb4     	adrp	x20, 0x6713000
 2d5f980: 2a0103f3     	mov	w19, w1
 2d5f984: aa0003f5     	mov	x21, x0
 2d5f988: 39586688     	ldrb	w8, [x20, #0x619]
 2d5f98c: b9001fe1     	str	w1, [sp, #0x1c]
 2d5f990: 37000428     	tbnz	w8, #0x0, 0x2d5fa14 <__start_il2cpp+0x297400>
 2d5f994: b001ac80     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2d5f998: f946e800     	ldr	x0, [x0, #0xdd0]
 2d5f99c: 97f1dd11     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9a0: b001aca0     	adrp	x0, 0x62f4000
 2d5f9a4: f9476c00     	ldr	x0, [x0, #0xed8]
 2d5f9a8: 97f1dd0e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9ac: d001ad20     	adrp	x0, 0x6305000
 2d5f9b0: f942d000     	ldr	x0, [x0, #0x5a0]
 2d5f9b4: 97f1dd0b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9b8: d001ad20     	adrp	x0, 0x6305000
 2d5f9bc: f9439800     	ldr	x0, [x0, #0x730]
 2d5f9c0: 97f1dd08     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9c4: d001ad20     	adrp	x0, 0x6305000
 2d5f9c8: f9439c00     	ldr	x0, [x0, #0x738]
 2d5f9cc: 97f1dd05     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9d0: d001ad20     	adrp	x0, 0x6305000
 2d5f9d4: f942cc00     	ldr	x0, [x0, #0x598]
 2d5f9d8: 97f1dd02     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9dc: d001ad20     	adrp	x0, 0x6305000
 2d5f9e0: f943a400     	ldr	x0, [x0, #0x748]
 2d5f9e4: 97f1dcff     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9e8: d001ad20     	adrp	x0, 0x6305000
 2d5f9ec: f943a800     	ldr	x0, [x0, #0x750]
 2d5f9f0: 97f1dcfc     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5f9f4: d001ad20     	adrp	x0, 0x6305000
 2d5f9f8: f943ac00     	ldr	x0, [x0, #0x758]
 2d5f9fc: 97f1dcf9     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5fa00: d001ad20     	adrp	x0, 0x6305000
 2d5fa04: f943b000     	ldr	x0, [x0, #0x760]
 2d5fa08: 97f1dcf6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5fa0c: 52800028     	mov	w8, #0x1                // =1
 2d5fa10: 39186688     	strb	w8, [x20, #0x619]
 2d5fa14: b001acb6     	adrp	x22, 0x62f4000
 2d5fa18: b001ac97     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2d5fa1c: f9476ed6     	ldr	x22, [x22, #0xed8]
 2d5fa20: f9000bff     	str	xzr, [sp, #0x10]
 2d5fa24: f9401ea0     	ldr	x0, [x21, #0x38]
 2d5fa28: f946eaf7     	ldr	x23, [x23, #0xdd0]
 2d5fa2c: f90007ff     	str	xzr, [sp, #0x8]
 2d5fa30: b90007ff     	str	wzr, [sp, #0x4]
 2d5fa34: b4000460     	cbz	x0, 0x2d5fac0 <__start_il2cpp+0x2974ac>
 2d5fa38: b9401808     	ldr	w8, [x0, #0x18]
 2d5fa3c: 34000428     	cbz	w8, 0x2d5fac0 <__start_il2cpp+0x2974ac>
 2d5fa40: 51000501     	sub	w1, w8, #0x1
 2d5fa44: d001ad28     	adrp	x8, 0x6305000
 2d5fa48: f9439d08     	ldr	x8, [x8, #0x738]
 2d5fa4c: 6b13003f     	cmp	w1, w19
 2d5fa50: 540006aa     	b.ge	0x2d5fb24 <__start_il2cpp+0x297510>
 2d5fa54: f9400102     	ldr	x2, [x8]
 2d5fa58: 9436fa57     	bl	0x3b1e3b4 <__start_il2cpp+0x1055da0>
 2d5fa5c: aa0003f3     	mov	x19, x0
 2d5fa60: aa0103f4     	mov	x20, x1
 2d5fa64: 910073e0     	add	x0, sp, #0x1c
 2d5fa68: aa1f03e1     	mov	x1, xzr
 2d5fa6c: 948ea55a     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2d5fa70: f9401ea8     	ldr	x8, [x21, #0x38]
 2d5fa74: b4000b48     	cbz	x8, 0x2d5fbdc <__start_il2cpp+0x2975c8>
 2d5fa78: b9401908     	ldr	w8, [x8, #0x18]
 2d5fa7c: aa0003f5     	mov	x21, x0
 2d5fa80: 910013e0     	add	x0, sp, #0x4
 2d5fa84: aa1f03e1     	mov	x1, xzr
 2d5fa88: b90007e8     	str	w8, [sp, #0x4]
 2d5fa8c: 948ea552     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2d5fa90: d001ad28     	adrp	x8, 0x6305000
 2d5fa94: d001ad29     	adrp	x9, 0x6305000
 2d5fa98: aa0003e3     	mov	x3, x0
 2d5fa9c: f943a908     	ldr	x8, [x8, #0x750]
 2d5faa0: f943b129     	ldr	x9, [x9, #0x760]
 2d5faa4: aa1503e1     	mov	x1, x21
 2d5faa8: aa1f03e4     	mov	x4, xzr
 2d5faac: f9400108     	ldr	x8, [x8]
 2d5fab0: f9400122     	ldr	x2, [x9]
 2d5fab4: aa0803e0     	mov	x0, x8
 2d5fab8: 94885c0f     	bl	0x4f76af4 <__start_il2cpp+0x24ae4e0>
 2d5fabc: 14000031     	b	0x2d5fb80 <__start_il2cpp+0x29756c>
 2d5fac0: d001ad28     	adrp	x8, 0x6305000
 2d5fac4: d001ad33     	adrp	x19, 0x6305000
 2d5fac8: d001ad35     	adrp	x21, 0x6305000
 2d5facc: f942cd08     	ldr	x8, [x8, #0x598]
 2d5fad0: f942d273     	ldr	x19, [x19, #0x5a0]
 2d5fad4: f943aeb5     	ldr	x21, [x21, #0x758]
 2d5fad8: 52800c69     	mov	w9, #0x63               // =99
 2d5fadc: a900ffff     	stp	xzr, xzr, [sp, #0x8]
 2d5fae0: 910023f4     	add	x20, sp, #0x8
 2d5fae4: f9400100     	ldr	x0, [x8]
 2d5fae8: b9000be9     	str	w9, [sp, #0x8]
 2d5faec: 97f1dd63     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2d5faf0: f9400261     	ldr	x1, [x19]
 2d5faf4: aa0003f3     	mov	x19, x0
 2d5faf8: 9437d2a3     	bl	0x3b54584 <__start_il2cpp+0x108bf70>
 2d5fafc: 91002280     	add	x0, x20, #0x8
 2d5fb00: aa1303e1     	mov	x1, x19
 2d5fb04: f9000bf3     	str	x19, [sp, #0x10]
 2d5fb08: 97f1dca1     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2d5fb0c: a940d3f3     	ldp	x19, x20, [sp, #0x8]
 2d5fb10: f94002c0     	ldr	x0, [x22]
 2d5fb14: 97f1dd59     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2d5fb18: f94002a1     	ldr	x1, [x21]
 2d5fb1c: aa0003f5     	mov	x21, x0
 2d5fb20: 1400001e     	b	0x2d5fb98 <__start_il2cpp+0x297584>
 2d5fb24: f9400102     	ldr	x2, [x8]
 2d5fb28: 37f800d3     	tbnz	w19, #0x1f, 0x2d5fb40 <__start_il2cpp+0x29752c>
 2d5fb2c: 2a1303e1     	mov	w1, w19
 2d5fb30: 9436fa21     	bl	0x3b1e3b4 <__start_il2cpp+0x1055da0>
 2d5fb34: aa0003f3     	mov	x19, x0
 2d5fb38: aa0103f4     	mov	x20, x1
 2d5fb3c: 14000021     	b	0x2d5fbc0 <__start_il2cpp+0x2975ac>
 2d5fb40: 9436fa1d     	bl	0x3b1e3b4 <__start_il2cpp+0x1055da0>
 2d5fb44: aa0003f3     	mov	x19, x0
 2d5fb48: aa0103f4     	mov	x20, x1
 2d5fb4c: 910073e0     	add	x0, sp, #0x1c
 2d5fb50: aa1f03e1     	mov	x1, xzr
 2d5fb54: 948ea520     	bl	0x5108fd4 <__start_il2cpp+0x26409c0>
 2d5fb58: d001ad28     	adrp	x8, 0x6305000
 2d5fb5c: d001ad29     	adrp	x9, 0x6305000
 2d5fb60: aa0003e1     	mov	x1, x0
 2d5fb64: f943a908     	ldr	x8, [x8, #0x750]
 2d5fb68: f943a529     	ldr	x9, [x9, #0x748]
 2d5fb6c: aa1f03e3     	mov	x3, xzr
 2d5fb70: f9400108     	ldr	x8, [x8]
 2d5fb74: f9400122     	ldr	x2, [x9]
 2d5fb78: aa0803e0     	mov	x0, x8
 2d5fb7c: 948859fc     	bl	0x4f7636c <__start_il2cpp+0x24add58>
 2d5fb80: f94002c8     	ldr	x8, [x22]
 2d5fb84: aa0003f6     	mov	x22, x0
 2d5fb88: aa0803e0     	mov	x0, x8
 2d5fb8c: 97f1dd3b     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2d5fb90: aa0003f5     	mov	x21, x0
 2d5fb94: aa1603e1     	mov	x1, x22
 2d5fb98: aa1f03e2     	mov	x2, xzr
 2d5fb9c: aa1f03e3     	mov	x3, xzr
 2d5fba0: 97f740de     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2d5fba4: f94002e0     	ldr	x0, [x23]
 2d5fba8: b940e408     	ldr	w8, [x0, #0xe4]
 2d5fbac: 35000048     	cbnz	w8, 0x2d5fbb4 <__start_il2cpp+0x2975a0>
 2d5fbb0: 97f1dceb     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2d5fbb4: aa1503e0     	mov	x0, x21
 2d5fbb8: aa1f03e1     	mov	x1, xzr
 2d5fbbc: 94b65e13     	bl	0x5af7408 <__start_il2cpp+0x302edf4>
 2d5fbc0: aa1303e0     	mov	x0, x19
 2d5fbc4: aa1403e1     	mov	x1, x20
 2d5fbc8: a9444ff4     	ldp	x20, x19, [sp, #0x40]
 2d5fbcc: a94357f6     	ldp	x22, x21, [sp, #0x30]
 2d5fbd0: a9425ffe     	ldp	x30, x23, [sp, #0x20]
 2d5fbd4: 910143ff     	add	sp, sp, #0x50
 2d5fbd8: d65f03c0     	ret
 2d5fbdc: 97f1dd2b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ConfigMergeFeverEvent :: MergeFever.MergeFeverLevel GetLastLevel()
# VA 0x2d5fbe0 .. 0x2d5fc28 (next mapped method entry)
 2d5fbe0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2d5fbe4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2d5fbe8: 9001cdb5     	adrp	x21, 0x6713000
 2d5fbec: d001ad34     	adrp	x20, 0x6305000
 2d5fbf0: aa0003f3     	mov	x19, x0
 2d5fbf4: 39585aa8     	ldrb	w8, [x21, #0x616]
 2d5fbf8: f943b694     	ldr	x20, [x20, #0x768]
 2d5fbfc: 370000c8     	tbnz	w8, #0x0, 0x2d5fc14 <__start_il2cpp+0x297600>
 2d5fc00: d001ad20     	adrp	x0, 0x6305000
 2d5fc04: f943b400     	ldr	x0, [x0, #0x768]
 2d5fc08: 97f1dc76     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5fc0c: 52800028     	mov	w8, #0x1                // =1
 2d5fc10: 39185aa8     	strb	w8, [x21, #0x616]
 2d5fc14: f9401e60     	ldr	x0, [x19, #0x38]
 2d5fc18: f9400281     	ldr	x1, [x20]
 2d5fc1c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2d5fc20: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2d5fc24: 141ee0fa     	b	0x351800c <__start_il2cpp+0xa4f9f8>

# ConfigMergeFeverEvent :: System.Boolean TryGetLevelIndexByMergeCount(System.Int32 mergeCount, out System.Int32 levelIndex)
# VA 0x2d5fc28 .. 0x2d5fce0 (next mapped method entry)
 2d5fc28: f81c0ffe     	str	x30, [sp, #-0x40]!
 2d5fc2c: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2d5fc30: a90257f6     	stp	x22, x21, [sp, #0x20]
 2d5fc34: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2d5fc38: 9001cdb6     	adrp	x22, 0x6713000
 2d5fc3c: aa0203f3     	mov	x19, x2
 2d5fc40: 2a0103f4     	mov	w20, w1
 2d5fc44: 39585ec8     	ldrb	w8, [x22, #0x617]
 2d5fc48: aa0003f5     	mov	x21, x0
 2d5fc4c: 37000128     	tbnz	w8, #0x0, 0x2d5fc70 <__start_il2cpp+0x29765c>
 2d5fc50: d001ad20     	adrp	x0, 0x6305000
 2d5fc54: f9439800     	ldr	x0, [x0, #0x730]
 2d5fc58: 97f1dc62     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5fc5c: d001ad20     	adrp	x0, 0x6305000
 2d5fc60: f9439c00     	ldr	x0, [x0, #0x738]
 2d5fc64: 97f1dc5f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2d5fc68: 52800028     	mov	w8, #0x1                // =1
 2d5fc6c: 39185ec8     	strb	w8, [x22, #0x617]
 2d5fc70: f9401ea0     	ldr	x0, [x21, #0x38]
 2d5fc74: b40001e0     	cbz	x0, 0x2d5fcb0 <__start_il2cpp+0x29769c>
 2d5fc78: d001ad37     	adrp	x23, 0x6305000
 2d5fc7c: 2a1f03f6     	mov	w22, wzr
 2d5fc80: f9439ef7     	ldr	x23, [x23, #0x738]
 2d5fc84: b9401818     	ldr	w24, [x0, #0x18]
 2d5fc88: 6b1802df     	cmp	w22, w24
 2d5fc8c: 5400014a     	b.ge	0x2d5fcb4 <__start_il2cpp+0x2976a0>
 2d5fc90: f94002e2     	ldr	x2, [x23]
 2d5fc94: 2a1603e1     	mov	w1, w22
 2d5fc98: 9436f9c7     	bl	0x3b1e3b4 <__start_il2cpp+0x1055da0>
 2d5fc9c: 6b14001f     	cmp	w0, w20
 2d5fca0: 540000ec     	b.gt	0x2d5fcbc <__start_il2cpp+0x2976a8>
 2d5fca4: f9401ea0     	ldr	x0, [x21, #0x38]
 2d5fca8: 110006d6     	add	w22, w22, #0x1
 2d5fcac: b5fffec0     	cbnz	x0, 0x2d5fc84 <__start_il2cpp+0x297670>
 2d5fcb0: 97f1dcf6     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2d5fcb4: 12800008     	mov	w8, #-0x1               // =-1
 2d5fcb8: 14000002     	b	0x2d5fcc0 <__start_il2cpp+0x2976ac>
 2d5fcbc: 2a1603e8     	mov	w8, w22
 2d5fcc0: 6b1802df     	cmp	w22, w24
 2d5fcc4: b9000268     	str	w8, [x19]
 2d5fcc8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2d5fccc: 1a9fa7e0     	cset	w0, lt
 2d5fcd0: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2d5fcd4: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2d5fcd8: f84407fe     	ldr	x30, [sp], #0x40
 2d5fcdc: d65f03c0     	ret

# ConfigMergeFeverEvent :: System.Void .ctor()
# VA 0x2d5fce0 .. 0x2d5fce8 (next mapped method entry)
 2d5fce0: aa1f03e1     	mov	x1, xzr
 2d5fce4: 148fbf99     	b	0x514fb48 <__start_il2cpp+0x2687534>
