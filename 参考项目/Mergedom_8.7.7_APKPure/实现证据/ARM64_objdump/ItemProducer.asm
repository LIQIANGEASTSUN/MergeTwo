
# ItemProducer :: System.Void Init(BaseItem producerBaseItem, ItemProducerData itemProducerData, ItemProducerTimer itemProducerTimer, UnityEngine.GameObject energyIcon, System.Boolean startOnInit, ActiveItemProducerData activeItemProducerInitData = null, ParticleSystemController producerParticles = null)
# VA 0x2c098a0 .. 0x2c09e30 (next mapped method entry)
 2c098a0: d101c3ff     	sub	sp, sp, #0x70
 2c098a4: fd000be8     	str	d8, [sp, #0x10]
 2c098a8: f9000ffe     	str	x30, [sp, #0x18]
 2c098ac: a9026ffc     	stp	x28, x27, [sp, #0x20]
 2c098b0: a90367fa     	stp	x26, x25, [sp, #0x30]
 2c098b4: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c098b8: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c098bc: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c098c0: b001d854     	adrp	x20, 0x6712000
 2c098c4: f001b73c     	adrp	x28, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c098c8: aa0703fa     	mov	x26, x7
 2c098cc: 396f5688     	ldrb	w8, [x20, #0xbd5]
 2c098d0: f9478f9c     	ldr	x28, [x28, #0xf18]
 2c098d4: aa0603f9     	mov	x25, x6
 2c098d8: 2a0503f5     	mov	w21, w5
 2c098dc: aa0403f7     	mov	x23, x4
 2c098e0: aa0303fb     	mov	x27, x3
 2c098e4: aa0203f8     	mov	x24, x2
 2c098e8: aa0103f6     	mov	x22, x1
 2c098ec: aa0003f3     	mov	x19, x0
 2c098f0: 370001e8     	tbnz	w8, #0x0, 0x2c0992c <__start_il2cpp+0x141318>
 2c098f4: b001b740     	adrp	x0, 0x62f2000
 2c098f8: f940ac00     	ldr	x0, [x0, #0x158]
 2c098fc: 97f73539     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09900: b001b780     	adrp	x0, 0x62fa000
 2c09904: f9405000     	ldr	x0, [x0, #0xa0]
 2c09908: 97f73536     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0990c: f001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c09910: f9478c00     	ldr	x0, [x0, #0xf18]
 2c09914: 97f73533     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09918: f001b740     	adrp	x0, 0x62f4000
 2c0991c: f940b000     	ldr	x0, [x0, #0x160]
 2c09920: 97f73530     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09924: 52800028     	mov	w8, #0x1                // =1
 2c09928: 392f5688     	strb	w8, [x20, #0xbd5]
 2c0992c: aa1303f4     	mov	x20, x19
 2c09930: aa1b03e1     	mov	x1, x27
 2c09934: a9007fff     	stp	xzr, xzr, [sp]
 2c09938: f8058e9b     	str	x27, [x20, #0x58]!
 2c0993c: aa1403e0     	mov	x0, x20
 2c09940: 97f73513     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c09944: aa1303e0     	mov	x0, x19
 2c09948: aa1a03e1     	mov	x1, x26
 2c0994c: f80c0c1a     	str	x26, [x0, #0xc0]!
 2c09950: 97f7350f     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c09954: f9400380     	ldr	x0, [x28]
 2c09958: f940029a     	ldr	x26, [x20]
 2c0995c: b940e408     	ldr	w8, [x0, #0xe4]
 2c09960: 35000048     	cbnz	w8, 0x2c09968 <__start_il2cpp+0x141354>
 2c09964: 97f7357e     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09968: aa1a03e0     	mov	x0, x26
 2c0996c: aa1f03e1     	mov	x1, xzr
 2c09970: 94bd0335     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c09974: 36000080     	tbz	w0, #0x0, 0x2c09984 <__start_il2cpp+0x141370>
 2c09978: f9400280     	ldr	x0, [x20]
 2c0997c: b4002580     	cbz	x0, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09980: 9400057e     	bl	0x2c0af78 <__start_il2cpp+0x142964>
 2c09984: aa1303fa     	mov	x26, x19
 2c09988: aa1703e1     	mov	x1, x23
 2c0998c: f8060f57     	str	x23, [x26, #0x60]!
 2c09990: aa1a03e0     	mov	x0, x26
 2c09994: 97f734fe     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c09998: f9400380     	ldr	x0, [x28]
 2c0999c: f9400357     	ldr	x23, [x26]
 2c099a0: 3901635f     	strb	wzr, [x26, #0x58]
 2c099a4: b940e408     	ldr	w8, [x0, #0xe4]
 2c099a8: 35000048     	cbnz	w8, 0x2c099b0 <__start_il2cpp+0x14139c>
 2c099ac: 97f7356c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c099b0: aa1703e0     	mov	x0, x23
 2c099b4: aa1f03e1     	mov	x1, xzr
 2c099b8: 94bd0323     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c099bc: 360000c0     	tbz	w0, #0x0, 0x2c099d4 <__start_il2cpp+0x1413c0>
 2c099c0: f9400340     	ldr	x0, [x26]
 2c099c4: b4002340     	cbz	x0, 0x2c09e2c <__start_il2cpp+0x141818>
 2c099c8: 2a1f03e1     	mov	w1, wzr
 2c099cc: aa1f03e2     	mov	x2, xzr
 2c099d0: 94bcea6a     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2c099d4: aa1303f7     	mov	x23, x19
 2c099d8: aa1603e1     	mov	x1, x22
 2c099dc: f8068ef6     	str	x22, [x23, #0x68]!
 2c099e0: aa1703e0     	mov	x0, x23
 2c099e4: 97f734ea     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c099e8: aa1303f6     	mov	x22, x19
 2c099ec: aa1803e1     	mov	x1, x24
 2c099f0: f8040ed8     	str	x24, [x22, #0x40]!
 2c099f4: aa1603e0     	mov	x0, x22
 2c099f8: 97f734e5     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c099fc: b40009d9     	cbz	x25, 0x2c09b34 <__start_il2cpp+0x141520>
 2c09a00: b9401329     	ldr	w9, [x25, #0x10]
 2c09a04: 39405328     	ldrb	w8, [x25, #0x14]
 2c09a08: b9401b2a     	ldr	w10, [x25, #0x18]
 2c09a0c: b9003269     	str	w9, [x19, #0x30]
 2c09a10: 3900d268     	strb	w8, [x19, #0x34]
 2c09a14: b9003a6a     	str	w10, [x19, #0x38]
 2c09a18: 36000095     	tbz	w21, #0x0, 0x2c09a28 <__start_il2cpp+0x141414>
 2c09a1c: aa1303e0     	mov	x0, x19
 2c09a20: 94000560     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c09a24: 3940d268     	ldrb	w8, [x19, #0x34]
 2c09a28: 34000b68     	cbz	w8, 0x2c09b94 <__start_il2cpp+0x141580>
 2c09a2c: b001b75b     	adrp	x27, 0x62f2000
 2c09a30: f940af7b     	ldr	x27, [x27, #0x158]
 2c09a34: f9400360     	ldr	x0, [x27]
 2c09a38: b940e408     	ldr	w8, [x0, #0xe4]
 2c09a3c: 35000048     	cbnz	w8, 0x2c09a44 <__start_il2cpp+0x141430>
 2c09a40: 97f73547     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09a44: aa1f03e0     	mov	x0, xzr
 2c09a48: 949388cf     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c09a4c: aa0003fa     	mov	x26, x0
 2c09a50: f9401320     	ldr	x0, [x25, #0x20]
 2c09a54: aa1f03e1     	mov	x1, xzr
 2c09a58: f90007fa     	str	x26, [sp, #0x8]
 2c09a5c: 9400d6ab     	bl	0x2c3f508 <__start_il2cpp+0x176ef4>
 2c09a60: aa1303f7     	mov	x23, x19
 2c09a64: aa1f03e1     	mov	x1, xzr
 2c09a68: f8048ee0     	str	x0, [x23, #0x48]!
 2c09a6c: f9401720     	ldr	x0, [x25, #0x28]
 2c09a70: 9400d6a6     	bl	0x2c3f508 <__start_il2cpp+0x176ef4>
 2c09a74: f90006e0     	str	x0, [x23, #0x8]
 2c09a78: b4001db8     	cbz	x24, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09a7c: b9402f08     	ldr	w8, [x24, #0x2c]
 2c09a80: aa1703e0     	mov	x0, x23
 2c09a84: aa1f03e1     	mov	x1, xzr
 2c09a88: 1e620100     	scvtf	d0, w8
 2c09a8c: 9493846a     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2c09a90: f9402a68     	ldr	x8, [x19, #0x50]
 2c09a94: aa0003f8     	mov	x24, x0
 2c09a98: aa1f03e2     	mov	x2, xzr
 2c09a9c: aa1803e1     	mov	x1, x24
 2c09aa0: aa0803e0     	mov	x0, x8
 2c09aa4: 94938ffc     	bl	0x50eda94 <__start_il2cpp+0x2625480>
 2c09aa8: 36000040     	tbz	w0, #0x0, 0x2c09ab0 <__start_il2cpp+0x14149c>
 2c09aac: f9002a78     	str	x24, [x19, #0x50]
 2c09ab0: 360016f5     	tbz	w21, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09ab4: aa1303e0     	mov	x0, x19
 2c09ab8: 9400053a     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c09abc: f9400360     	ldr	x0, [x27]
 2c09ac0: f9402a75     	ldr	x21, [x19, #0x50]
 2c09ac4: b940e408     	ldr	w8, [x0, #0xe4]
 2c09ac8: 35000048     	cbnz	w8, 0x2c09ad0 <__start_il2cpp+0x1414bc>
 2c09acc: 97f73524     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09ad0: aa1a03e0     	mov	x0, x26
 2c09ad4: aa1503e1     	mov	x1, x21
 2c09ad8: aa1f03e2     	mov	x2, xzr
 2c09adc: 94938fd3     	bl	0x50eda28 <__start_il2cpp+0x2625414>
 2c09ae0: 36000e20     	tbz	w0, #0x0, 0x2c09ca4 <__start_il2cpp+0x141690>
 2c09ae4: aa1303e0     	mov	x0, x19
 2c09ae8: 940005af     	bl	0x2c0b1a4 <__start_il2cpp+0x142b90>
 2c09aec: f9400380     	ldr	x0, [x28]
 2c09af0: f9402e75     	ldr	x21, [x19, #0x58]
 2c09af4: b940e408     	ldr	w8, [x0, #0xe4]
 2c09af8: 35000048     	cbnz	w8, 0x2c09b00 <__start_il2cpp+0x1414ec>
 2c09afc: 97f73518     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09b00: aa1503e0     	mov	x0, x21
 2c09b04: aa1f03e1     	mov	x1, xzr
 2c09b08: 94bd02cf     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c09b0c: 360000e0     	tbz	w0, #0x0, 0x2c09b28 <__start_il2cpp+0x141514>
 2c09b10: b9403268     	ldr	w8, [x19, #0x30]
 2c09b14: 350000a8     	cbnz	w8, 0x2c09b28 <__start_il2cpp+0x141514>
 2c09b18: f9400280     	ldr	x0, [x20]
 2c09b1c: b4001880     	cbz	x0, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09b20: 2a1f03e1     	mov	w1, wzr
 2c09b24: 940005b0     	bl	0x2c0b1e4 <__start_il2cpp+0x142bd0>
 2c09b28: aa1303e0     	mov	x0, x19
 2c09b2c: 9400051d     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c09b30: 14000097     	b	0x2c09d8c <__start_il2cpp+0x141778>
 2c09b34: b40017d8     	cbz	x24, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09b38: b9401b08     	ldr	w8, [x24, #0x18]
 2c09b3c: b9003268     	str	w8, [x19, #0x30]
 2c09b40: 36001275     	tbz	w21, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09b44: aa1303e0     	mov	x0, x19
 2c09b48: 94000516     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c09b4c: 39409308     	ldrb	w8, [x24, #0x24]
 2c09b50: 340011e8     	cbz	w8, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09b54: aa1303e0     	mov	x0, x19
 2c09b58: 940004d4     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c09b5c: 36001180     	tbz	w0, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09b60: b9403268     	ldr	w8, [x19, #0x30]
 2c09b64: 35001148     	cbnz	w8, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09b68: aa1303e0     	mov	x0, x19
 2c09b6c: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c09b70: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c09b74: 2a1f03e1     	mov	w1, wzr
 2c09b78: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c09b7c: f9400ffe     	ldr	x30, [sp, #0x18]
 2c09b80: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c09b84: fd400be8     	ldr	d8, [sp, #0x10]
 2c09b88: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c09b8c: 9101c3ff     	add	sp, sp, #0x70
 2c09b90: 140005d2     	b	0x2c0b2d8 <__start_il2cpp+0x142cc4>
 2c09b94: f94002e8     	ldr	x8, [x23]
 2c09b98: b40014a8     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09b9c: f9402908     	ldr	x8, [x8, #0x50]
 2c09ba0: b4001468     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09ba4: b001b789     	adrp	x9, 0x62fa000
 2c09ba8: f9405129     	ldr	x9, [x9, #0xa0]
 2c09bac: b9403117     	ldr	w23, [x8, #0x30]
 2c09bb0: f9400120     	ldr	x0, [x9]
 2c09bb4: b940e409     	ldr	w9, [x0, #0xe4]
 2c09bb8: 35000049     	cbnz	w9, 0x2c09bc0 <__start_il2cpp+0x1415ac>
 2c09bbc: 97f734e8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09bc0: aa1f03e0     	mov	x0, xzr
 2c09bc4: 97ffcdb7     	bl	0x2bfd2a0 <__start_il2cpp+0x134c8c>
 2c09bc8: 6b0002ff     	cmp	w23, w0
 2c09bcc: 54000e01     	b.ne	0x2c09d8c <__start_il2cpp+0x141778>
 2c09bd0: aa1303e0     	mov	x0, x19
 2c09bd4: 940004b5     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c09bd8: 36000da0     	tbz	w0, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09bdc: f94002c8     	ldr	x8, [x22]
 2c09be0: b4001268     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09be4: b9403269     	ldr	w9, [x19, #0x30]
 2c09be8: b9401d08     	ldr	w8, [x8, #0x1c]
 2c09bec: 6b08013f     	cmp	w9, w8
 2c09bf0: 54000ce0     	b.eq	0x2c09d8c <__start_il2cpp+0x141778>
 2c09bf4: b001b748     	adrp	x8, 0x62f2000
 2c09bf8: f940ad08     	ldr	x8, [x8, #0x158]
 2c09bfc: f9400100     	ldr	x0, [x8]
 2c09c00: b940e408     	ldr	w8, [x0, #0xe4]
 2c09c04: 35000048     	cbnz	w8, 0x2c09c0c <__start_il2cpp+0x1415f8>
 2c09c08: 97f734d5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09c0c: aa1f03e0     	mov	x0, xzr
 2c09c10: 9493885d     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c09c14: aa0003e8     	mov	x8, x0
 2c09c18: aa1303e0     	mov	x0, x19
 2c09c1c: f8048c08     	str	x8, [x0, #0x48]!
 2c09c20: f85f8008     	ldur	x8, [x0, #-0x8]
 2c09c24: b4001048     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09c28: b9402d08     	ldr	w8, [x8, #0x2c]
 2c09c2c: aa1f03e1     	mov	x1, xzr
 2c09c30: 1e620100     	scvtf	d0, w8
 2c09c34: 94938400     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2c09c38: f9002a60     	str	x0, [x19, #0x50]
 2c09c3c: 36000a95     	tbz	w21, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09c40: aa1303e0     	mov	x0, x19
 2c09c44: 94000558     	bl	0x2c0b1a4 <__start_il2cpp+0x142b90>
 2c09c48: f9400380     	ldr	x0, [x28]
 2c09c4c: f9402e75     	ldr	x21, [x19, #0x58]
 2c09c50: b940e408     	ldr	w8, [x0, #0xe4]
 2c09c54: 35000048     	cbnz	w8, 0x2c09c5c <__start_il2cpp+0x141648>
 2c09c58: 97f734c1     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09c5c: aa1503e0     	mov	x0, x21
 2c09c60: aa1f03e1     	mov	x1, xzr
 2c09c64: 94bd0278     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c09c68: 36000920     	tbz	w0, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09c6c: b9403268     	ldr	w8, [x19, #0x30]
 2c09c70: 350008e8     	cbnz	w8, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09c74: f9400280     	ldr	x0, [x20]
 2c09c78: b4000da0     	cbz	x0, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09c7c: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c09c80: 2a1f03e1     	mov	w1, wzr
 2c09c84: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c09c88: f9400ffe     	ldr	x30, [sp, #0x18]
 2c09c8c: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c09c90: fd400be8     	ldr	d8, [sp, #0x10]
 2c09c94: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c09c98: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c09c9c: 9101c3ff     	add	sp, sp, #0x70
 2c09ca0: 14000551     	b	0x2c0b1e4 <__start_il2cpp+0x142bd0>
 2c09ca4: f9400360     	ldr	x0, [x27]
 2c09ca8: f9402a75     	ldr	x21, [x19, #0x50]
 2c09cac: 3900d27f     	strb	wzr, [x19, #0x34]
 2c09cb0: b940e408     	ldr	w8, [x0, #0xe4]
 2c09cb4: 35000048     	cbnz	w8, 0x2c09cbc <__start_il2cpp+0x1416a8>
 2c09cb8: 97f734a9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09cbc: aa1a03e0     	mov	x0, x26
 2c09cc0: aa1503e1     	mov	x1, x21
 2c09cc4: aa1f03e2     	mov	x2, xzr
 2c09cc8: 94938eef     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2c09ccc: f001b748     	adrp	x8, 0x62f4000
 2c09cd0: f940b108     	ldr	x8, [x8, #0x160]
 2c09cd4: f90003e0     	str	x0, [sp]
 2c09cd8: f9400108     	ldr	x8, [x8]
 2c09cdc: b940e509     	ldr	w9, [x8, #0xe4]
 2c09ce0: 35000069     	cbnz	w9, 0x2c09cec <__start_il2cpp+0x1416d8>
 2c09ce4: aa0803e0     	mov	x0, x8
 2c09ce8: 97f7349d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09cec: 910003e0     	mov	x0, sp
 2c09cf0: aa1f03e1     	mov	x1, xzr
 2c09cf4: 949468a1     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2c09cf8: f94002c8     	ldr	x8, [x22]
 2c09cfc: b4000988     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09d00: 1e604008     	fmov	d8, d0
 2c09d04: d2effe09     	mov	x9, #0x7ff0000000000000 // =9218868437227405312
 2c09d08: 1e78000a     	fcvtzs	w10, d0
 2c09d0c: 9e670120     	fmov	d0, x9
 2c09d10: 52b00009     	mov	w9, #-0x80000000        // =-2147483648
 2c09d14: 1e602100     	fcmp	d8, d0
 2c09d18: 1a8a0129     	csel	w9, w9, w10, eq
 2c09d1c: 29452d0a     	ldp	w10, w11, [x8, #0x28]
 2c09d20: 1acb0d35     	sdiv	w21, w9, w11
 2c09d24: b9403a6b     	ldr	w11, [x19, #0x38]
 2c09d28: 3100055f     	cmn	w10, #0x1
 2c09d2c: 110006a9     	add	w9, w21, #0x1
 2c09d30: 0b0b012b     	add	w11, w9, w11
 2c09d34: b9003a6b     	str	w11, [x19, #0x38]
 2c09d38: 54000080     	b.eq	0x2c09d48 <__start_il2cpp+0x141734>
 2c09d3c: 6b0a017f     	cmp	w11, w10
 2c09d40: 1a8ab16a     	csel	w10, w11, w10, lt
 2c09d44: b9003a6a     	str	w10, [x19, #0x38]
 2c09d48: 2943a908     	ldp	w8, w10, [x8, #0x1c]
 2c09d4c: b940326b     	ldr	w11, [x19, #0x30]
 2c09d50: aa1303e0     	mov	x0, x19
 2c09d54: 1b092d49     	madd	w9, w10, w9, w11
 2c09d58: 6b08013f     	cmp	w9, w8
 2c09d5c: 1a88b128     	csel	w8, w9, w8, lt
 2c09d60: b9003268     	str	w8, [x19, #0x30]
 2c09d64: 9400048f     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c09d68: aa1303e0     	mov	x0, x19
 2c09d6c: 9400044f     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c09d70: 360000e0     	tbz	w0, #0x0, 0x2c09d8c <__start_il2cpp+0x141778>
 2c09d74: f94002c8     	ldr	x8, [x22]
 2c09d78: b40005a8     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09d7c: b9403269     	ldr	w9, [x19, #0x30]
 2c09d80: b9401d0a     	ldr	w10, [x8, #0x1c]
 2c09d84: 6b0a013f     	cmp	w9, w10
 2c09d88: 54000141     	b.ne	0x2c09db0 <__start_il2cpp+0x14179c>
 2c09d8c: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c09d90: f9400ffe     	ldr	x30, [sp, #0x18]
 2c09d94: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c09d98: fd400be8     	ldr	d8, [sp, #0x10]
 2c09d9c: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c09da0: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c09da4: a9426ffc     	ldp	x28, x27, [sp, #0x20]
 2c09da8: 9101c3ff     	add	sp, sp, #0x70
 2c09dac: d65f03c0     	ret
 2c09db0: 34000135     	cbz	w21, 0x2c09dd4 <__start_il2cpp+0x1417c0>
 2c09db4: f9400360     	ldr	x0, [x27]
 2c09db8: b9402d18     	ldr	w24, [x8, #0x2c]
 2c09dbc: b940e409     	ldr	w9, [x0, #0xe4]
 2c09dc0: 35000049     	cbnz	w9, 0x2c09dc8 <__start_il2cpp+0x1417b4>
 2c09dc4: 97f73466     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09dc8: 1b18fea8     	mneg	w8, w21, w24
 2c09dcc: 1e620100     	scvtf	d0, w8
 2c09dd0: 14000006     	b	0x2c09de8 <__start_il2cpp+0x1417d4>
 2c09dd4: f9400360     	ldr	x0, [x27]
 2c09dd8: b940e408     	ldr	w8, [x0, #0xe4]
 2c09ddc: 35000048     	cbnz	w8, 0x2c09de4 <__start_il2cpp+0x1417d0>
 2c09de0: 97f7345f     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09de4: 1e614100     	fneg	d0, d8
 2c09de8: 910023e0     	add	x0, sp, #0x8
 2c09dec: aa1f03e1     	mov	x1, xzr
 2c09df0: 94938391     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2c09df4: f94002c8     	ldr	x8, [x22]
 2c09df8: f90002e0     	str	x0, [x23]
 2c09dfc: b4000188     	cbz	x8, 0x2c09e2c <__start_il2cpp+0x141818>
 2c09e00: f9400360     	ldr	x0, [x27]
 2c09e04: b9402d15     	ldr	w21, [x8, #0x2c]
 2c09e08: b940e409     	ldr	w9, [x0, #0xe4]
 2c09e0c: 35000049     	cbnz	w9, 0x2c09e14 <__start_il2cpp+0x141800>
 2c09e10: 97f73453     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c09e14: 1e6202a0     	scvtf	d0, w21
 2c09e18: aa1703e0     	mov	x0, x23
 2c09e1c: aa1f03e1     	mov	x1, xzr
 2c09e20: 94938385     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2c09e24: f9002a60     	str	x0, [x19, #0x50]
 2c09e28: 17ffff2f     	b	0x2c09ae4 <__start_il2cpp+0x1414d0>
 2c09e2c: 97f73497     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void TryProduce()
# VA 0x2c09e9c .. 0x2c0a2bc (next mapped method entry)
 2c09e9c: f81c0ffe     	str	x30, [sp, #-0x40]!
 2c09ea0: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c09ea4: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c09ea8: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c09eac: b001d854     	adrp	x20, 0x6712000
 2c09eb0: aa0003f3     	mov	x19, x0
 2c09eb4: 396f5a88     	ldrb	w8, [x20, #0xbd6]
 2c09eb8: 370003c8     	tbnz	w8, #0x0, 0x2c09f30 <__start_il2cpp+0x14191c>
 2c09ebc: b001b740     	adrp	x0, 0x62f2000
 2c09ec0: f943f000     	ldr	x0, [x0, #0x7e0]
 2c09ec4: 97f733c7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09ec8: 9001b7a0     	adrp	x0, 0x62fd000
 2c09ecc: f9400000     	ldr	x0, [x0]
 2c09ed0: 97f733c4     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09ed4: f001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c09ed8: f946e800     	ldr	x0, [x0, #0xdd0]
 2c09edc: 97f733c1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09ee0: 9001b780     	adrp	x0, 0x62f9000
 2c09ee4: f9476c00     	ldr	x0, [x0, #0xed8]
 2c09ee8: 97f733be     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09eec: 9001b7a0     	adrp	x0, 0x62fd000
 2c09ef0: f9400400     	ldr	x0, [x0, #0x8]
 2c09ef4: 97f733bb     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09ef8: 9001b7a0     	adrp	x0, 0x62fd000
 2c09efc: f9400800     	ldr	x0, [x0, #0x10]
 2c09f00: 97f733b8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09f04: f001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c09f08: f9478c00     	ldr	x0, [x0, #0xf18]
 2c09f0c: 97f733b5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09f10: 9001b7a0     	adrp	x0, 0x62fd000
 2c09f14: f9400c00     	ldr	x0, [x0, #0x18]
 2c09f18: 97f733b2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09f1c: 9001b7a0     	adrp	x0, 0x62fd000
 2c09f20: f9401000     	ldr	x0, [x0, #0x20]
 2c09f24: 97f733af     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c09f28: 52800028     	mov	w8, #0x1                // =1
 2c09f2c: 392f5a88     	strb	w8, [x20, #0xbd6]
 2c09f30: f9403a68     	ldr	x8, [x19, #0x70]
 2c09f34: 3902ea7f     	strb	wzr, [x19, #0xba]
 2c09f38: b4001c08     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c09f3c: b9402109     	ldr	w9, [x8, #0x20]
 2c09f40: 7100093f     	cmp	w9, #0x2
 2c09f44: 54000061     	b.ne	0x2c09f50 <__start_il2cpp+0x14193c>
 2c09f48: b9407d08     	ldr	w8, [x8, #0x7c]
 2c09f4c: 34000148     	cbz	w8, 0x2c09f74 <__start_il2cpp+0x141960>
 2c09f50: f9400268     	ldr	x8, [x19]
 2c09f54: aa1303e0     	mov	x0, x19
 2c09f58: 52800041     	mov	w1, #0x2                // =2
 2c09f5c: a9578903     	ldp	x3, x2, [x8, #0x178]
 2c09f60: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c09f64: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c09f68: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c09f6c: f84407fe     	ldr	x30, [sp], #0x40
 2c09f70: d61f0060     	br	x3
 2c09f74: f9400268     	ldr	x8, [x19]
 2c09f78: aa1303e0     	mov	x0, x19
 2c09f7c: a95b8509     	ldp	x9, x1, [x8, #0x1b8]
 2c09f80: d63f0120     	blr	x9
 2c09f84: 36000100     	tbz	w0, #0x0, 0x2c09fa4 <__start_il2cpp+0x141990>
 2c09f88: aa1f03e0     	mov	x0, xzr
 2c09f8c: 97feaf63     	bl	0x2bb5d18 <__start_il2cpp+0xed704>
 2c09f90: 350000a0     	cbnz	w0, 0x2c09fa4 <__start_il2cpp+0x141990>
 2c09f94: f9404668     	ldr	x8, [x19, #0x88]
 2c09f98: b4001908     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c09f9c: 39404108     	ldrb	w8, [x8, #0x10]
 2c09fa0: 34001568     	cbz	w8, 0x2c0a24c <__start_il2cpp+0x141c38>
 2c09fa4: f9402268     	ldr	x8, [x19, #0x40]
 2c09fa8: b4001888     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c09fac: f9402508     	ldr	x8, [x8, #0x48]
 2c09fb0: b4001848     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c09fb4: b9401908     	ldr	w8, [x8, #0x18]
 2c09fb8: 34000728     	cbz	w8, 0x2c0a09c <__start_il2cpp+0x141a88>
 2c09fbc: b9403268     	ldr	w8, [x19, #0x30]
 2c09fc0: 340006e8     	cbz	w8, 0x2c0a09c <__start_il2cpp+0x141a88>
 2c09fc4: f9403668     	ldr	x8, [x19, #0x68]
 2c09fc8: b4001788     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c09fcc: f9402909     	ldr	x9, [x8, #0x50]
 2c09fd0: b4001749     	cbz	x9, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c09fd4: f001b737     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c09fd8: 910033e1     	add	x1, sp, #0xc
 2c09fdc: f9470ef7     	ldr	x23, [x23, #0xe18]
 2c09fe0: b9403129     	ldr	w9, [x9, #0x30]
 2c09fe4: f9401274     	ldr	x20, [x19, #0x20]
 2c09fe8: f9402d15     	ldr	x21, [x8, #0x58]
 2c09fec: f94026e0     	ldr	x0, [x23, #0x48]
 2c09ff0: b9000fe9     	str	w9, [sp, #0xc]
 2c09ff4: 97f733dc     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c09ff8: f9403668     	ldr	x8, [x19, #0x68]
 2c09ffc: b40015e8     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a000: aa0003f6     	mov	x22, x0
 2c0a004: b9404508     	ldr	w8, [x8, #0x44]
 2c0a008: f94026e0     	ldr	x0, [x23, #0x48]
 2c0a00c: 910023e1     	add	x1, sp, #0x8
 2c0a010: b9000be8     	str	w8, [sp, #0x8]
 2c0a014: 97f733d4     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0a018: f001b788     	adrp	x8, 0x62fd000
 2c0a01c: aa0003e2     	mov	x2, x0
 2c0a020: aa1603e1     	mov	x1, x22
 2c0a024: f9400d08     	ldr	x8, [x8, #0x18]
 2c0a028: aa1f03e3     	mov	x3, xzr
 2c0a02c: f9400108     	ldr	x8, [x8]
 2c0a030: aa0803e0     	mov	x0, x8
 2c0a034: 948db3b0     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2c0a038: f9400268     	ldr	x8, [x19]
 2c0a03c: aa0003f6     	mov	x22, x0
 2c0a040: aa1303e0     	mov	x0, x19
 2c0a044: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2c0a048: d63f0120     	blr	x9
 2c0a04c: b4001374     	cbz	x20, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a050: f001b778     	adrp	x24, 0x62f9000
 2c0a054: f9400288     	ldr	x8, [x20]
 2c0a058: 2a0003f7     	mov	w23, w0
 2c0a05c: f9476f18     	ldr	x24, [x24, #0xed8]
 2c0a060: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0a064: f9400301     	ldr	x1, [x24]
 2c0a068: b4000129     	cbz	x9, 0x2c0a08c <__start_il2cpp+0x141a78>
 2c0a06c: f940590a     	ldr	x10, [x8, #0xb0]
 2c0a070: 9100214a     	add	x10, x10, #0x8
 2c0a074: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0a078: eb01017f     	cmp	x11, x1
 2c0a07c: 54000180     	b.eq	0x2c0a0ac <__start_il2cpp+0x141a98>
 2c0a080: f1000529     	subs	x9, x9, #0x1
 2c0a084: 9100414a     	add	x10, x10, #0x10
 2c0a088: 54ffff61     	b.ne	0x2c0a074 <__start_il2cpp+0x141a60>
 2c0a08c: aa1403e0     	mov	x0, x20
 2c0a090: 52800122     	mov	w2, #0x9                // =9
 2c0a094: 97f810b4     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0a098: 14000009     	b	0x2c0a0bc <__start_il2cpp+0x141aa8>
 2c0a09c: f9400268     	ldr	x8, [x19]
 2c0a0a0: aa1303e0     	mov	x0, x19
 2c0a0a4: 52800021     	mov	w1, #0x1                // =1
 2c0a0a8: 17ffffad     	b	0x2c09f5c <__start_il2cpp+0x141948>
 2c0a0ac: b9400149     	ldr	w9, [x10]
 2c0a0b0: 11002529     	add	w9, w9, #0x9
 2c0a0b4: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0a0b8: 9104e100     	add	x0, x8, #0x138
 2c0a0bc: a9401008     	ldp	x8, x4, [x0]
 2c0a0c0: aa1403e0     	mov	x0, x20
 2c0a0c4: aa1503e1     	mov	x1, x21
 2c0a0c8: aa1603e2     	mov	x2, x22
 2c0a0cc: 2a1703e3     	mov	w3, w23
 2c0a0d0: d63f0100     	blr	x8
 2c0a0d4: d001b735     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0a0d8: aa0003f4     	mov	x20, x0
 2c0a0dc: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c0a0e0: f94002a8     	ldr	x8, [x21]
 2c0a0e4: b940e509     	ldr	w9, [x8, #0xe4]
 2c0a0e8: 35000069     	cbnz	w9, 0x2c0a0f4 <__start_il2cpp+0x141ae0>
 2c0a0ec: aa0803e0     	mov	x0, x8
 2c0a0f0: 97f7339b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a0f4: aa1403e0     	mov	x0, x20
 2c0a0f8: aa1f03e1     	mov	x1, xzr
 2c0a0fc: 94bd0152     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0a100: 36000920     	tbz	w0, #0x0, 0x2c0a224 <__start_il2cpp+0x141c10>
 2c0a104: b4000db4     	cbz	x20, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a108: 3940b289     	ldrb	w9, [x20, #0x2c]
 2c0a10c: f9400268     	ldr	x8, [x19]
 2c0a110: 340008c9     	cbz	w9, 0x2c0a228 <__start_il2cpp+0x141c14>
 2c0a114: a95f8509     	ldp	x9, x1, [x8, #0x1f8]
 2c0a118: aa1303e0     	mov	x0, x19
 2c0a11c: d63f0120     	blr	x9
 2c0a120: b4000c20     	cbz	x0, 0x2c0a2a4 <__start_il2cpp+0x141c90>
 2c0a124: f9400809     	ldr	x9, [x0, #0x10]
 2c0a128: b4000c89     	cbz	x9, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a12c: f9403668     	ldr	x8, [x19, #0x68]
 2c0a130: b4000c48     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a134: f940226a     	ldr	x10, [x19, #0x40]
 2c0a138: b4000c0a     	cbz	x10, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a13c: b9403121     	ldr	w1, [x9, #0x30]
 2c0a140: b9401802     	ldr	w2, [x0, #0x18]
 2c0a144: aa1303e0     	mov	x0, x19
 2c0a148: f9402d03     	ldr	x3, [x8, #0x58]
 2c0a14c: 39411145     	ldrb	w5, [x10, #0x44]
 2c0a150: aa1403e4     	mov	x4, x20
 2c0a154: 940004b7     	bl	0x2c0b430 <__start_il2cpp+0x142e1c>
 2c0a158: f94002a8     	ldr	x8, [x21]
 2c0a15c: aa0003f4     	mov	x20, x0
 2c0a160: b940e509     	ldr	w9, [x8, #0xe4]
 2c0a164: 35000069     	cbnz	w9, 0x2c0a170 <__start_il2cpp+0x141b5c>
 2c0a168: aa0803e0     	mov	x0, x8
 2c0a16c: 97f7337c     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a170: aa1403e0     	mov	x0, x20
 2c0a174: aa1f03e1     	mov	x1, xzr
 2c0a178: aa1f03e2     	mov	x2, xzr
 2c0a17c: 94bce318     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c0a180: 36000300     	tbz	w0, #0x0, 0x2c0a1e0 <__start_il2cpp+0x141bcc>
 2c0a184: f9401262     	ldr	x2, [x19, #0x20]
 2c0a188: b4000982     	cbz	x2, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a18c: f9400301     	ldr	x1, [x24]
 2c0a190: f9403674     	ldr	x20, [x19, #0x68]
 2c0a194: 528001c0     	mov	w0, #0xe                // =14
 2c0a198: 2a1f03e3     	mov	w3, wzr
 2c0a19c: 97ea7df2     	bl	0x26a9964 <.text+0x4804>
 2c0a1a0: aa0003e1     	mov	x1, x0
 2c0a1a4: aa1403e0     	mov	x0, x20
 2c0a1a8: aa1f03e2     	mov	x2, xzr
 2c0a1ac: 94017df5     	bl	0x2c69980 <__start_il2cpp+0x1a136c>
 2c0a1b0: 36000180     	tbz	w0, #0x0, 0x2c0a1e0 <__start_il2cpp+0x141bcc>
 2c0a1b4: d001b728     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0a1b8: f946e908     	ldr	x8, [x8, #0xdd0]
 2c0a1bc: f9400100     	ldr	x0, [x8]
 2c0a1c0: b940e408     	ldr	w8, [x0, #0xe4]
 2c0a1c4: 35000048     	cbnz	w8, 0x2c0a1cc <__start_il2cpp+0x141bb8>
 2c0a1c8: 97f73365     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a1cc: f001b788     	adrp	x8, 0x62fd000
 2c0a1d0: aa1f03e1     	mov	x1, xzr
 2c0a1d4: f9401108     	ldr	x8, [x8, #0x20]
 2c0a1d8: f9400100     	ldr	x0, [x8]
 2c0a1dc: 94bbc852     	bl	0x5afc324 <__start_il2cpp+0x3033d10>
 2c0a1e0: f9403668     	ldr	x8, [x19, #0x68]
 2c0a1e4: b40006a8     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a1e8: f9402908     	ldr	x8, [x8, #0x50]
 2c0a1ec: b4000668     	cbz	x8, 0x2c0a2b8 <__start_il2cpp+0x141ca4>
 2c0a1f0: f001b789     	adrp	x9, 0x62fd000
 2c0a1f4: f9400129     	ldr	x9, [x9]
 2c0a1f8: b9403114     	ldr	w20, [x8, #0x30]
 2c0a1fc: f9400120     	ldr	x0, [x9]
 2c0a200: b940e409     	ldr	w9, [x0, #0xe4]
 2c0a204: 35000049     	cbnz	w9, 0x2c0a20c <__start_il2cpp+0x141bf8>
 2c0a208: 97f73355     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a20c: 2a1403e0     	mov	w0, w20
 2c0a210: aa1f03e1     	mov	x1, xzr
 2c0a214: 940574fc     	bl	0x2d67604 <__start_il2cpp+0x29eff0>
 2c0a218: aa1303e0     	mov	x0, x19
 2c0a21c: 94000564     	bl	0x2c0b7ac <__start_il2cpp+0x143198>
 2c0a220: 14000006     	b	0x2c0a238 <__start_il2cpp+0x141c24>
 2c0a224: f9400268     	ldr	x8, [x19]
 2c0a228: a9578909     	ldp	x9, x2, [x8, #0x178]
 2c0a22c: aa1303e0     	mov	x0, x19
 2c0a230: 2a1f03e1     	mov	w1, wzr
 2c0a234: d63f0120     	blr	x9
 2c0a238: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0a23c: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c0a240: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c0a244: f84407fe     	ldr	x30, [sp], #0x40
 2c0a248: d65f03c0     	ret
 2c0a24c: 9001b748     	adrp	x8, 0x62f2000
 2c0a250: f943f108     	ldr	x8, [x8, #0x7e0]
 2c0a254: f9403674     	ldr	x20, [x19, #0x68]
 2c0a258: f9400100     	ldr	x0, [x8]
 2c0a25c: 97f73387     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0a260: f001b788     	adrp	x8, 0x62fd000
 2c0a264: aa1303e1     	mov	x1, x19
 2c0a268: aa1f03e3     	mov	x3, xzr
 2c0a26c: f9400508     	ldr	x8, [x8, #0x8]
 2c0a270: aa0003f5     	mov	x21, x0
 2c0a274: f9400102     	ldr	x2, [x8]
 2c0a278: 949160ac     	bl	0x5062528 <__start_il2cpp+0x2599f14>
 2c0a27c: b0ff23c8     	adrp	x8, 0x1083000
 2c0a280: aa1403e0     	mov	x0, x20
 2c0a284: aa1503e1     	mov	x1, x21
 2c0a288: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0a28c: bd462900     	ldr	s0, [x8, #0x628]
 2c0a290: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c0a294: aa1f03e2     	mov	x2, xzr
 2c0a298: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c0a29c: f84407fe     	ldr	x30, [sp], #0x40
 2c0a2a0: 14062728     	b	0x2d93f40 <__start_il2cpp+0x2cb92c>
 2c0a2a4: f9400268     	ldr	x8, [x19]
 2c0a2a8: aa1303e0     	mov	x0, x19
 2c0a2ac: 52800021     	mov	w1, #0x1                // =1
 2c0a2b0: a9578909     	ldp	x9, x2, [x8, #0x178]
 2c0a2b4: 17ffffe0     	b	0x2c0a234 <__start_il2cpp+0x141c20>
 2c0a2b8: 97f73374     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void OnProduceSucceed(BaseItem producedItem)
# VA 0x2c0a2f8 .. 0x2c0a5e8 (next mapped method entry)
 2c0a2f8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0a2fc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0a300: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0a304: 9001d854     	adrp	x20, 0x6712000
 2c0a308: aa0003f3     	mov	x19, x0
 2c0a30c: 396f6688     	ldrb	w8, [x20, #0xbd9]
 2c0a310: 37000308     	tbnz	w8, #0x0, 0x2c0a370 <__start_il2cpp+0x141d5c>
 2c0a314: d001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0a318: f946e800     	ldr	x0, [x0, #0xdd0]
 2c0a31c: 97f732b1     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a320: b001b780     	adrp	x0, 0x62fb000
 2c0a324: f9466400     	ldr	x0, [x0, #0xcc8]
 2c0a328: 97f732ae     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a32c: d001b740     	adrp	x0, 0x62f4000
 2c0a330: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0a334: 97f732ab     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a338: 9001b780     	adrp	x0, 0x62fa000
 2c0a33c: f944c000     	ldr	x0, [x0, #0x980]
 2c0a340: 97f732a8     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a344: 9001b780     	adrp	x0, 0x62fa000
 2c0a348: f944c400     	ldr	x0, [x0, #0x988]
 2c0a34c: 97f732a5     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a350: f001b780     	adrp	x0, 0x62fd000
 2c0a354: f9401400     	ldr	x0, [x0, #0x28]
 2c0a358: 97f732a2     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a35c: f001b780     	adrp	x0, 0x62fd000
 2c0a360: f9401800     	ldr	x0, [x0, #0x30]
 2c0a364: 97f7329f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a368: 52800028     	mov	w8, #0x1                // =1
 2c0a36c: 392f6688     	strb	w8, [x20, #0xbd9]
 2c0a370: b9403268     	ldr	w8, [x19, #0x30]
 2c0a374: 7100011f     	cmp	w8, #0x0
 2c0a378: 540002cc     	b.gt	0x2c0a3d0 <__start_il2cpp+0x141dbc>
 2c0a37c: d001b748     	adrp	x8, 0x62f4000
 2c0a380: f9476d08     	ldr	x8, [x8, #0xed8]
 2c0a384: f9400100     	ldr	x0, [x8]
 2c0a388: 97f7333c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0a38c: f001b788     	adrp	x8, 0x62fd000
 2c0a390: aa1f03e2     	mov	x2, xzr
 2c0a394: aa1f03e3     	mov	x3, xzr
 2c0a398: f9401908     	ldr	x8, [x8, #0x30]
 2c0a39c: aa0003f4     	mov	x20, x0
 2c0a3a0: f9400101     	ldr	x1, [x8]
 2c0a3a4: 97fc96dd     	bl	0x2b2ff18 <__start_il2cpp+0x67904>
 2c0a3a8: d001b728     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0a3ac: f946e908     	ldr	x8, [x8, #0xdd0]
 2c0a3b0: f9400100     	ldr	x0, [x8]
 2c0a3b4: b940e408     	ldr	w8, [x0, #0xe4]
 2c0a3b8: 35000048     	cbnz	w8, 0x2c0a3c0 <__start_il2cpp+0x141dac>
 2c0a3bc: 97f732e8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a3c0: aa1403e0     	mov	x0, x20
 2c0a3c4: aa1f03e1     	mov	x1, xzr
 2c0a3c8: 94bbc96a     	bl	0x5afc970 <__start_il2cpp+0x303435c>
 2c0a3cc: b9403268     	ldr	w8, [x19, #0x30]
 2c0a3d0: 51000508     	sub	w8, w8, #0x1
 2c0a3d4: aa1303e0     	mov	x0, x19
 2c0a3d8: 0aa87d08     	bic	w8, w8, w8, asr #31
 2c0a3dc: b9003268     	str	w8, [x19, #0x30]
 2c0a3e0: 940002f0     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c0a3e4: aa1303e0     	mov	x0, x19
 2c0a3e8: 940002b0     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c0a3ec: 360001a0     	tbz	w0, #0x0, 0x2c0a420 <__start_il2cpp+0x141e0c>
 2c0a3f0: f9402268     	ldr	x8, [x19, #0x40]
 2c0a3f4: b4000f88     	cbz	x8, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a3f8: b9403269     	ldr	w9, [x19, #0x30]
 2c0a3fc: b9401d08     	ldr	w8, [x8, #0x1c]
 2c0a400: 6b08013f     	cmp	w9, w8
 2c0a404: 5400016a     	b.ge	0x2c0a430 <__start_il2cpp+0x141e1c>
 2c0a408: 3940d268     	ldrb	w8, [x19, #0x34]
 2c0a40c: 35000128     	cbnz	w8, 0x2c0a430 <__start_il2cpp+0x141e1c>
 2c0a410: aa1303e0     	mov	x0, x19
 2c0a414: 2a1f03e1     	mov	w1, wzr
 2c0a418: 940003b0     	bl	0x2c0b2d8 <__start_il2cpp+0x142cc4>
 2c0a41c: 14000005     	b	0x2c0a430 <__start_il2cpp+0x141e1c>
 2c0a420: b9403268     	ldr	w8, [x19, #0x30]
 2c0a424: 35000068     	cbnz	w8, 0x2c0a430 <__start_il2cpp+0x141e1c>
 2c0a428: aa1303e0     	mov	x0, x19
 2c0a42c: 940005fc     	bl	0x2c0bc1c <__start_il2cpp+0x143608>
 2c0a430: 3942ea68     	ldrb	w8, [x19, #0xba]
 2c0a434: 35000648     	cbnz	w8, 0x2c0a4fc <__start_il2cpp+0x141ee8>
 2c0a438: f9400268     	ldr	x8, [x19]
 2c0a43c: aa1303e0     	mov	x0, x19
 2c0a440: a95b8509     	ldp	x9, x1, [x8, #0x1b8]
 2c0a444: d63f0120     	blr	x9
 2c0a448: 360000a0     	tbz	w0, #0x0, 0x2c0a45c <__start_il2cpp+0x141e48>
 2c0a44c: f940466a     	ldr	x10, [x19, #0x88]
 2c0a450: b4000caa     	cbz	x10, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a454: 39404148     	ldrb	w8, [x10, #0x10]
 2c0a458: 340005a8     	cbz	w8, 0x2c0a50c <__start_il2cpp+0x141ef8>
 2c0a45c: 3942ea68     	ldrb	w8, [x19, #0xba]
 2c0a460: 350004e8     	cbnz	w8, 0x2c0a4fc <__start_il2cpp+0x141ee8>
 2c0a464: f9400268     	ldr	x8, [x19]
 2c0a468: aa1303e0     	mov	x0, x19
 2c0a46c: a95b8509     	ldp	x9, x1, [x8, #0x1b8]
 2c0a470: d63f0120     	blr	x9
 2c0a474: 36000440     	tbz	w0, #0x0, 0x2c0a4fc <__start_il2cpp+0x141ee8>
 2c0a478: f9404e60     	ldr	x0, [x19, #0x98]
 2c0a47c: b4000b40     	cbz	x0, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a480: 9001b788     	adrp	x8, 0x62fa000
 2c0a484: b2607fe1     	mov	x1, #-0x100000000       // =-4294967296
 2c0a488: f944c108     	ldr	x8, [x8, #0x980]
 2c0a48c: f9400102     	ldr	x2, [x8]
 2c0a490: 94286311     	bl	0x36230d4 <__start_il2cpp+0xb5aac0>
 2c0a494: f940466a     	ldr	x10, [x19, #0x88]
 2c0a498: b4000a6a     	cbz	x10, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a49c: f9404274     	ldr	x20, [x19, #0x80]
 2c0a4a0: b4000a34     	cbz	x20, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a4a4: b001b78b     	adrp	x11, 0x62fb000
 2c0a4a8: f001b78c     	adrp	x12, 0x62fd000
 2c0a4ac: f946656b     	ldr	x11, [x11, #0xcc8]
 2c0a4b0: f9400288     	ldr	x8, [x20]
 2c0a4b4: f940158c     	ldr	x12, [x12, #0x28]
 2c0a4b8: f9403555     	ldr	x21, [x10, #0x68]
 2c0a4bc: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0a4c0: f9400161     	ldr	x1, [x11]
 2c0a4c4: f9400196     	ldr	x22, [x12]
 2c0a4c8: b4000129     	cbz	x9, 0x2c0a4ec <__start_il2cpp+0x141ed8>
 2c0a4cc: f940590a     	ldr	x10, [x8, #0xb0]
 2c0a4d0: 9100214a     	add	x10, x10, #0x8
 2c0a4d4: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0a4d8: eb01017f     	cmp	x11, x1
 2c0a4dc: 540005a0     	b.eq	0x2c0a590 <__start_il2cpp+0x141f7c>
 2c0a4e0: f1000529     	subs	x9, x9, #0x1
 2c0a4e4: 9100414a     	add	x10, x10, #0x10
 2c0a4e8: 54ffff61     	b.ne	0x2c0a4d4 <__start_il2cpp+0x141ec0>
 2c0a4ec: aa1403e0     	mov	x0, x20
 2c0a4f0: 528001a2     	mov	w2, #0xd                // =13
 2c0a4f4: 97f80f9c     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0a4f8: 1400002a     	b	0x2c0a5a0 <__start_il2cpp+0x141f8c>
 2c0a4fc: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0a500: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0a504: f84307fe     	ldr	x30, [sp], #0x30
 2c0a508: d65f03c0     	ret
 2c0a50c: f9404273     	ldr	x19, [x19, #0x80]
 2c0a510: b40006b3     	cbz	x19, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a514: b001b78b     	adrp	x11, 0x62fb000
 2c0a518: f9400268     	ldr	x8, [x19]
 2c0a51c: f946656b     	ldr	x11, [x11, #0xcc8]
 2c0a520: f9403554     	ldr	x20, [x10, #0x68]
 2c0a524: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0a528: f9400161     	ldr	x1, [x11]
 2c0a52c: b4000129     	cbz	x9, 0x2c0a550 <__start_il2cpp+0x141f3c>
 2c0a530: f940590a     	ldr	x10, [x8, #0xb0]
 2c0a534: 9100214a     	add	x10, x10, #0x8
 2c0a538: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0a53c: eb01017f     	cmp	x11, x1
 2c0a540: 54000100     	b.eq	0x2c0a560 <__start_il2cpp+0x141f4c>
 2c0a544: f1000529     	subs	x9, x9, #0x1
 2c0a548: 9100414a     	add	x10, x10, #0x10
 2c0a54c: 54ffff61     	b.ne	0x2c0a538 <__start_il2cpp+0x141f24>
 2c0a550: aa1303e0     	mov	x0, x19
 2c0a554: 52800122     	mov	w2, #0x9                // =9
 2c0a558: 97f80f83     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0a55c: 14000005     	b	0x2c0a570 <__start_il2cpp+0x141f5c>
 2c0a560: b9400149     	ldr	w9, [x10]
 2c0a564: 11002529     	add	w9, w9, #0x9
 2c0a568: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0a56c: 9104e100     	add	x0, x8, #0x138
 2c0a570: a9400c04     	ldp	x4, x3, [x0]
 2c0a574: aa1303e0     	mov	x0, x19
 2c0a578: aa1403e2     	mov	x2, x20
 2c0a57c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0a580: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0a584: 52800021     	mov	w1, #0x1                // =1
 2c0a588: f84307fe     	ldr	x30, [sp], #0x30
 2c0a58c: d61f0080     	br	x4
 2c0a590: b9400149     	ldr	w9, [x10]
 2c0a594: 11003529     	add	w9, w9, #0xd
 2c0a598: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0a59c: 9104e100     	add	x0, x8, #0x138
 2c0a5a0: a9401408     	ldp	x8, x5, [x0]
 2c0a5a4: aa1403e0     	mov	x0, x20
 2c0a5a8: 52800021     	mov	w1, #0x1                // =1
 2c0a5ac: aa1503e2     	mov	x2, x21
 2c0a5b0: aa1603e3     	mov	x3, x22
 2c0a5b4: 52800024     	mov	w4, #0x1                // =1
 2c0a5b8: d63f0100     	blr	x8
 2c0a5bc: f9404e60     	ldr	x0, [x19, #0x98]
 2c0a5c0: b4000120     	cbz	x0, 0x2c0a5e4 <__start_il2cpp+0x141fd0>
 2c0a5c4: 9001b788     	adrp	x8, 0x62fa000
 2c0a5c8: 52800021     	mov	w1, #0x1                // =1
 2c0a5cc: f944c508     	ldr	x8, [x8, #0x988]
 2c0a5d0: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0a5d4: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0a5d8: f9400102     	ldr	x2, [x8]
 2c0a5dc: f84307fe     	ldr	x30, [sp], #0x30
 2c0a5e0: 142864eb     	b	0x362398c <__start_il2cpp+0xb5b378>
 2c0a5e4: 97f732a9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void StopProductionCoroutines()
# VA 0x2c0a640 .. 0x2c0a6a4 (next mapped method entry)
 2c0a640: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c0a644: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0a648: 9001d854     	adrp	x20, 0x6712000
 2c0a64c: 9001b755     	adrp	x21, 0x62f2000
 2c0a650: aa0003f3     	mov	x19, x0
 2c0a654: 396f8e88     	ldrb	w8, [x20, #0xbe3]
 2c0a658: f940aeb5     	ldr	x21, [x21, #0x158]
 2c0a65c: 370000c8     	tbnz	w8, #0x0, 0x2c0a674 <__start_il2cpp+0x142060>
 2c0a660: 9001b740     	adrp	x0, 0x62f2000
 2c0a664: f940ac00     	ldr	x0, [x0, #0x158]
 2c0a668: 97f731de     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a66c: 52800028     	mov	w8, #0x1                // =1
 2c0a670: 392f8e88     	strb	w8, [x20, #0xbe3]
 2c0a674: f94002a0     	ldr	x0, [x21]
 2c0a678: b940e408     	ldr	w8, [x0, #0xe4]
 2c0a67c: 35000048     	cbnz	w8, 0x2c0a684 <__start_il2cpp+0x142070>
 2c0a680: 97f73237     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a684: aa1f03e0     	mov	x0, xzr
 2c0a688: 949385bf     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0a68c: aa0003e8     	mov	x8, x0
 2c0a690: aa1303e0     	mov	x0, x19
 2c0a694: f9005a68     	str	x8, [x19, #0xb0]
 2c0a698: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0a69c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0a6a0: 140007a4     	b	0x2c0c530 <__start_il2cpp+0x143f1c>

# ItemProducer :: System.Void ResumeProductionCoroutines()
# VA 0x2c0a6d0 .. 0x2c0a754 (next mapped method entry)
 2c0a6d0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c0a6d4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0a6d8: 9001d855     	adrp	x21, 0x6712000
 2c0a6dc: 9001b754     	adrp	x20, 0x62f2000
 2c0a6e0: aa0003f3     	mov	x19, x0
 2c0a6e4: 396f92a8     	ldrb	w8, [x21, #0xbe4]
 2c0a6e8: f940ae94     	ldr	x20, [x20, #0x158]
 2c0a6ec: 370000c8     	tbnz	w8, #0x0, 0x2c0a704 <__start_il2cpp+0x1420f0>
 2c0a6f0: 9001b740     	adrp	x0, 0x62f2000
 2c0a6f4: f940ac00     	ldr	x0, [x0, #0x158]
 2c0a6f8: 97f731ba     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a6fc: 52800028     	mov	w8, #0x1                // =1
 2c0a700: 392f92a8     	strb	w8, [x21, #0xbe4]
 2c0a704: f9400280     	ldr	x0, [x20]
 2c0a708: f9402a74     	ldr	x20, [x19, #0x50]
 2c0a70c: b940e408     	ldr	w8, [x0, #0xe4]
 2c0a710: 35000048     	cbnz	w8, 0x2c0a718 <__start_il2cpp+0x142104>
 2c0a714: 97f73212     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a718: aa1f03e0     	mov	x0, xzr
 2c0a71c: 9493859a     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0a720: f9405a61     	ldr	x1, [x19, #0xb0]
 2c0a724: aa1f03e2     	mov	x2, xzr
 2c0a728: 94938c57     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2c0a72c: aa0003e1     	mov	x1, x0
 2c0a730: aa1403e0     	mov	x0, x20
 2c0a734: aa1f03e2     	mov	x2, xzr
 2c0a738: 94938bd5     	bl	0x50ed68c <__start_il2cpp+0x2625078>
 2c0a73c: aa0003e8     	mov	x8, x0
 2c0a740: aa1303e0     	mov	x0, x19
 2c0a744: f9002a68     	str	x8, [x19, #0x50]
 2c0a748: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0a74c: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0a750: 14000295     	b	0x2c0b1a4 <__start_il2cpp+0x142b90>

# ItemProducer :: System.Void OnProduceFailed(Producer+ProduceFailTypes produceFailType)
# VA 0x2c0a7b4 .. 0x2c0a840 (next mapped method entry)
 2c0a7b4: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c0a7b8: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0a7bc: 9001d855     	adrp	x21, 0x6712000
 2c0a7c0: 2a0103f4     	mov	w20, w1
 2c0a7c4: aa0003f3     	mov	x19, x0
 2c0a7c8: 396f62a8     	ldrb	w8, [x21, #0xbd8]
 2c0a7cc: 370000c8     	tbnz	w8, #0x0, 0x2c0a7e4 <__start_il2cpp+0x1421d0>
 2c0a7d0: f001b780     	adrp	x0, 0x62fd000
 2c0a7d4: f9400800     	ldr	x0, [x0, #0x10]
 2c0a7d8: 97f73182     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a7dc: 52800028     	mov	w8, #0x1                // =1
 2c0a7e0: 392f62a8     	strb	w8, [x21, #0xbd8]
 2c0a7e4: 7100069f     	cmp	w20, #0x1
 2c0a7e8: 540000a1     	b.ne	0x2c0a7fc <__start_il2cpp+0x1421e8>
 2c0a7ec: 3940d268     	ldrb	w8, [x19, #0x34]
 2c0a7f0: 35000068     	cbnz	w8, 0x2c0a7fc <__start_il2cpp+0x1421e8>
 2c0a7f4: b9403268     	ldr	w8, [x19, #0x30]
 2c0a7f8: 34000088     	cbz	w8, 0x2c0a808 <__start_il2cpp+0x1421f4>
 2c0a7fc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0a800: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0a804: d65f03c0     	ret
 2c0a808: f9402268     	ldr	x8, [x19, #0x40]
 2c0a80c: b4000188     	cbz	x8, 0x2c0a83c <__start_il2cpp+0x142228>
 2c0a810: f9402508     	ldr	x8, [x8, #0x48]
 2c0a814: b4000148     	cbz	x8, 0x2c0a83c <__start_il2cpp+0x142228>
 2c0a818: b9401908     	ldr	w8, [x8, #0x18]
 2c0a81c: 34000088     	cbz	w8, 0x2c0a82c <__start_il2cpp+0x142218>
 2c0a820: aa1303e0     	mov	x0, x19
 2c0a824: 940001a1     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c0a828: 3707fea0     	tbnz	w0, #0x0, 0x2c0a7fc <__start_il2cpp+0x1421e8>
 2c0a82c: aa1303e0     	mov	x0, x19
 2c0a830: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0a834: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0a838: 140004f9     	b	0x2c0bc1c <__start_il2cpp+0x143608>
 2c0a83c: 97f73213     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void OnRechargeEnded(System.Boolean isSpeedUpUsed = False)
# VA 0x2c0a858 .. 0x2c0aac0 (next mapped method entry)
 2c0a858: d10103ff     	sub	sp, sp, #0x40
 2c0a85c: fd000be8     	str	d8, [sp, #0x10]
 2c0a860: a90257fe     	stp	x30, x21, [sp, #0x20]
 2c0a864: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c0a868: 9001d855     	adrp	x21, 0x6712000
 2c0a86c: 2a0103f4     	mov	w20, w1
 2c0a870: aa0003f3     	mov	x19, x0
 2c0a874: 396f6aa8     	ldrb	w8, [x21, #0xbda]
 2c0a878: 37000188     	tbnz	w8, #0x0, 0x2c0a8a8 <__start_il2cpp+0x142294>
 2c0a87c: 9001b740     	adrp	x0, 0x62f2000
 2c0a880: f940ac00     	ldr	x0, [x0, #0x158]
 2c0a884: 97f73157     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a888: f001b780     	adrp	x0, 0x62fd000
 2c0a88c: f9401c00     	ldr	x0, [x0, #0x38]
 2c0a890: 97f73154     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a894: d001b740     	adrp	x0, 0x62f4000
 2c0a898: f940b000     	ldr	x0, [x0, #0x160]
 2c0a89c: 97f73151     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0a8a0: 52800028     	mov	w8, #0x1                // =1
 2c0a8a4: 392f6aa8     	strb	w8, [x21, #0xbda]
 2c0a8a8: f9403661     	ldr	x1, [x19, #0x68]
 2c0a8ac: 910003e8     	mov	x8, sp
 2c0a8b0: f9404e75     	ldr	x21, [x19, #0x98]
 2c0a8b4: 91002100     	add	x0, x8, #0x8
 2c0a8b8: a9007fff     	stp	xzr, xzr, [sp]
 2c0a8bc: f9000fff     	str	xzr, [sp, #0x18]
 2c0a8c0: f90007e1     	str	x1, [sp, #0x8]
 2c0a8c4: 97f73132     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0a8c8: b4000fb5     	cbz	x21, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0a8cc: f001b788     	adrp	x8, 0x62fd000
 2c0a8d0: aa1503e0     	mov	x0, x21
 2c0a8d4: f9401d08     	ldr	x8, [x8, #0x38]
 2c0a8d8: a9400be1     	ldp	x1, x2, [sp]
 2c0a8dc: f9400103     	ldr	x3, [x8]
 2c0a8e0: 94286320     	bl	0x3623560 <__start_il2cpp+0xb5af4c>
 2c0a8e4: aa1303e0     	mov	x0, x19
 2c0a8e8: 94000712     	bl	0x2c0c530 <__start_il2cpp+0x143f1c>
 2c0a8ec: f9402268     	ldr	x8, [x19, #0x40]
 2c0a8f0: 3900d27f     	strb	wzr, [x19, #0x34]
 2c0a8f4: b4000e48     	cbz	x8, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0a8f8: b9402915     	ldr	w21, [x8, #0x28]
 2c0a8fc: 360003b4     	tbz	w20, #0x0, 0x2c0a970 <__start_il2cpp+0x14235c>
 2c0a900: b9403a69     	ldr	w9, [x19, #0x38]
 2c0a904: b9402108     	ldr	w8, [x8, #0x20]
 2c0a908: aa1303e0     	mov	x0, x19
 2c0a90c: 1100052a     	add	w10, w9, #0x1
 2c0a910: b9003268     	str	w8, [x19, #0x30]
 2c0a914: 6b15015f     	cmp	w10, w21
 2c0a918: 1a89a6aa     	csinc	w10, w21, w9, ge
 2c0a91c: 310006bf     	cmn	w21, #0x1
 2c0a920: 1a891549     	csinc	w9, w10, w9, ne
 2c0a924: b9003a69     	str	w9, [x19, #0x38]
 2c0a928: 9400019e     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c0a92c: f9403660     	ldr	x0, [x19, #0x68]
 2c0a930: b4000c60     	cbz	x0, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0a934: f9400008     	ldr	x8, [x0]
 2c0a938: f9410509     	ldr	x9, [x8, #0x208]
 2c0a93c: f9410901     	ldr	x1, [x8, #0x210]
 2c0a940: d63f0120     	blr	x9
 2c0a944: f9402268     	ldr	x8, [x19, #0x40]
 2c0a948: b4000ba8     	cbz	x8, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0a94c: b9403269     	ldr	w9, [x19, #0x30]
 2c0a950: b9401d08     	ldr	w8, [x8, #0x1c]
 2c0a954: 6b08013f     	cmp	w9, w8
 2c0a958: 54000a80     	b.eq	0x2c0aaa8 <__start_il2cpp+0x142494>
 2c0a95c: aa1303e0     	mov	x0, x19
 2c0a960: 94000152     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c0a964: 36000a20     	tbz	w0, #0x0, 0x2c0aaa8 <__start_il2cpp+0x142494>
 2c0a968: 2a1f03e1     	mov	w1, wzr
 2c0a96c: 1400004d     	b	0x2c0aaa0 <__start_il2cpp+0x14248c>
 2c0a970: 9001b748     	adrp	x8, 0x62f2000
 2c0a974: f940ad08     	ldr	x8, [x8, #0x158]
 2c0a978: f9400100     	ldr	x0, [x8]
 2c0a97c: b940e408     	ldr	w8, [x0, #0xe4]
 2c0a980: 35000048     	cbnz	w8, 0x2c0a988 <__start_il2cpp+0x142374>
 2c0a984: 97f73176     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a988: aa1f03e0     	mov	x0, xzr
 2c0a98c: 949384fe     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0a990: f9402a61     	ldr	x1, [x19, #0x50]
 2c0a994: aa1f03e2     	mov	x2, xzr
 2c0a998: 94938bbb     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2c0a99c: d001b748     	adrp	x8, 0x62f4000
 2c0a9a0: f940b108     	ldr	x8, [x8, #0x160]
 2c0a9a4: f9000fe0     	str	x0, [sp, #0x18]
 2c0a9a8: f9400108     	ldr	x8, [x8]
 2c0a9ac: b940e509     	ldr	w9, [x8, #0xe4]
 2c0a9b0: 35000069     	cbnz	w9, 0x2c0a9bc <__start_il2cpp+0x1423a8>
 2c0a9b4: aa0803e0     	mov	x0, x8
 2c0a9b8: 97f73169     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0a9bc: 910063e0     	add	x0, sp, #0x18
 2c0a9c0: aa1f03e1     	mov	x1, xzr
 2c0a9c4: 9494656d     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2c0a9c8: f9402268     	ldr	x8, [x19, #0x40]
 2c0a9cc: b4000788     	cbz	x8, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0a9d0: 1e604008     	fmov	d8, d0
 2c0a9d4: d2effe09     	mov	x9, #0x7ff0000000000000 // =9218868437227405312
 2c0a9d8: 1e78000a     	fcvtzs	w10, d0
 2c0a9dc: 9e670120     	fmov	d0, x9
 2c0a9e0: b9402d09     	ldr	w9, [x8, #0x2c]
 2c0a9e4: 52b0000b     	mov	w11, #-0x80000000       // =-2147483648
 2c0a9e8: b940326c     	ldr	w12, [x19, #0x30]
 2c0a9ec: aa1303e0     	mov	x0, x19
 2c0a9f0: 1e602100     	fcmp	d8, d0
 2c0a9f4: 1a8a016a     	csel	w10, w11, w10, eq
 2c0a9f8: 1ac90d49     	sdiv	w9, w10, w9
 2c0a9fc: b9403a6a     	ldr	w10, [x19, #0x38]
 2c0aa00: 2943ad08     	ldp	w8, w11, [x8, #0x1c]
 2c0aa04: 11000529     	add	w9, w9, #0x1
 2c0aa08: 1b09316b     	madd	w11, w11, w9, w12
 2c0aa0c: 0b0a0129     	add	w9, w9, w10
 2c0aa10: 6b15013f     	cmp	w9, w21
 2c0aa14: 1a95b12a     	csel	w10, w9, w21, lt
 2c0aa18: 310006bf     	cmn	w21, #0x1
 2c0aa1c: 1a8a0129     	csel	w9, w9, w10, eq
 2c0aa20: 6b08017f     	cmp	w11, w8
 2c0aa24: 1a88b168     	csel	w8, w11, w8, lt
 2c0aa28: b9003a69     	str	w9, [x19, #0x38]
 2c0aa2c: b9003268     	str	w8, [x19, #0x30]
 2c0aa30: 9400015c     	bl	0x2c0afa0 <__start_il2cpp+0x14298c>
 2c0aa34: f9403660     	ldr	x0, [x19, #0x68]
 2c0aa38: b4000420     	cbz	x0, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0aa3c: f9400008     	ldr	x8, [x0]
 2c0aa40: f9410509     	ldr	x9, [x8, #0x208]
 2c0aa44: f9410901     	ldr	x1, [x8, #0x210]
 2c0aa48: d63f0120     	blr	x9
 2c0aa4c: f9402268     	ldr	x8, [x19, #0x40]
 2c0aa50: b4000368     	cbz	x8, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0aa54: b9403269     	ldr	w9, [x19, #0x30]
 2c0aa58: b9401d08     	ldr	w8, [x8, #0x1c]
 2c0aa5c: 6b08013f     	cmp	w9, w8
 2c0aa60: 54000240     	b.eq	0x2c0aaa8 <__start_il2cpp+0x142494>
 2c0aa64: aa1303e0     	mov	x0, x19
 2c0aa68: 94000110     	bl	0x2c0aea8 <__start_il2cpp+0x142894>
 2c0aa6c: 360001e0     	tbz	w0, #0x0, 0x2c0aaa8 <__start_il2cpp+0x142494>
 2c0aa70: f9402268     	ldr	x8, [x19, #0x40]
 2c0aa74: b4000248     	cbz	x8, 0x2c0aabc <__start_il2cpp+0x1424a8>
 2c0aa78: b9402d08     	ldr	w8, [x8, #0x2c]
 2c0aa7c: 1e604100     	fmov	d0, d8
 2c0aa80: 1e620101     	scvtf	d1, w8
 2c0aa84: 94cc6f57     	bl	0x5f267e0 <fmod@plt>
 2c0aa88: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2c0aa8c: 1e780009     	fcvtzs	w9, d0
 2c0aa90: 9e670101     	fmov	d1, x8
 2c0aa94: 52b00008     	mov	w8, #-0x80000000        // =-2147483648
 2c0aa98: 1e612000     	fcmp	d0, d1
 2c0aa9c: 1a890101     	csel	w1, w8, w9, eq
 2c0aaa0: aa1303e0     	mov	x0, x19
 2c0aaa4: 9400020d     	bl	0x2c0b2d8 <__start_il2cpp+0x142cc4>
 2c0aaa8: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0aaac: fd400be8     	ldr	d8, [sp, #0x10]
 2c0aab0: a94257fe     	ldp	x30, x21, [sp, #0x20]
 2c0aab4: 910103ff     	add	sp, sp, #0x40
 2c0aab8: d65f03c0     	ret
 2c0aabc: 97f73173     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void .ctor()
# VA 0x2c0aaf0 .. 0x2c0aaf8 (next mapped method entry)
 2c0aaf0: aa1f03e1     	mov	x1, xzr
 2c0aaf4: 14951415     	b	0x514fb48 <__start_il2cpp+0x2687534>

# ItemProducer :: System.Int32 get_rechargeDurationInSeconds()
# VA 0x2c0ae90 .. 0x2c0aea8 (next mapped method entry)
 2c0ae90: f9402008     	ldr	x8, [x0, #0x40]
 2c0ae94: b4000068     	cbz	x8, 0x2c0aea0 <__start_il2cpp+0x14288c>
 2c0ae98: b9402d00     	ldr	w0, [x8, #0x2c]
 2c0ae9c: d65f03c0     	ret
 2c0aea0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0aea4: 97f73079     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Boolean get_isRechargeable()
# VA 0x2c0aea8 .. 0x2c0af34 (next mapped method entry)
 2c0aea8: f81e0ffe     	str	x30, [sp, #-0x20]!
 2c0aeac: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0aeb0: 9001d854     	adrp	x20, 0x6712000
 2c0aeb4: aa0003f3     	mov	x19, x0
 2c0aeb8: 396f5288     	ldrb	w8, [x20, #0xbd4]
 2c0aebc: 37000188     	tbnz	w8, #0x0, 0x2c0aeec <__start_il2cpp+0x1428d8>
 2c0aec0: f001b740     	adrp	x0, 0x62f5000
 2c0aec4: f9479c00     	ldr	x0, [x0, #0xf38]
 2c0aec8: 97f72fc6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0aecc: f001b740     	adrp	x0, 0x62f5000
 2c0aed0: f947a000     	ldr	x0, [x0, #0xf40]
 2c0aed4: 97f72fc3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0aed8: f001b740     	adrp	x0, 0x62f5000
 2c0aedc: f947a400     	ldr	x0, [x0, #0xf48]
 2c0aee0: 97f72fc0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0aee4: 52800028     	mov	w8, #0x1                // =1
 2c0aee8: 392f5288     	strb	w8, [x20, #0xbd4]
 2c0aeec: f9402268     	ldr	x8, [x19, #0x40]
 2c0aef0: b9403a73     	ldr	w19, [x19, #0x38]
 2c0aef4: b4000128     	cbz	x8, 0x2c0af18 <__start_il2cpp+0x142904>
 2c0aef8: f001b749     	adrp	x9, 0x62f5000
 2c0aefc: 910023e0     	add	x0, sp, #0x8
 2c0af00: f947a129     	ldr	x9, [x9, #0xf40]
 2c0af04: b9402901     	ldr	w1, [x8, #0x28]
 2c0af08: f90007ff     	str	xzr, [sp, #0x8]
 2c0af0c: f9400122     	ldr	x2, [x9]
 2c0af10: 94435f81     	bl	0x3ce2d14 <__start_il2cpp+0x121a700>
 2c0af14: f94007e8     	ldr	x8, [sp, #0x8]
 2c0af18: d360fd09     	lsr	x9, x8, #32
 2c0af1c: f2401d1f     	tst	x8, #0xff
 2c0af20: 7a491260     	ccmp	w19, w9, #0x0, ne
 2c0af24: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0af28: 1a9f07e0     	cset	w0, ne
 2c0af2c: f84207fe     	ldr	x30, [sp], #0x20
 2c0af30: d65f03c0     	ret

# ItemProducer :: System.Boolean get_consumeEnergy()
# VA 0x2c0af34 .. 0x2c0af58 (next mapped method entry)
 2c0af34: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0af38: f9403408     	ldr	x8, [x0, #0x68]
 2c0af3c: b40000c8     	cbz	x8, 0x2c0af54 <__start_il2cpp+0x142940>
 2c0af40: f9402908     	ldr	x8, [x8, #0x50]
 2c0af44: b4000088     	cbz	x8, 0x2c0af54 <__start_il2cpp+0x142940>
 2c0af48: 3940e500     	ldrb	w0, [x8, #0x39]
 2c0af4c: f84107fe     	ldr	x30, [sp], #0x10
 2c0af50: d65f03c0     	ret
 2c0af54: 97f7304d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Boolean get_transformOnDispose()
# VA 0x2c0af58 .. 0x2c0af70 (next mapped method entry)
 2c0af58: f9402008     	ldr	x8, [x0, #0x40]
 2c0af5c: b4000068     	cbz	x8, 0x2c0af68 <__start_il2cpp+0x142954>
 2c0af60: 3940d500     	ldrb	w0, [x8, #0x35]
 2c0af64: d65f03c0     	ret
 2c0af68: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0af6c: 97f73047     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Int32 get_dropPlaceDegree()
# VA 0x2c0af70 .. 0x2c0af78 (next mapped method entry)
 2c0af70: 52800020     	mov	w0, #0x1                // =1
 2c0af74: d65f03c0     	ret

# ItemProducer :: System.Void OnCurrentCapacityChanged()
# VA 0x2c0afa0 .. 0x2c0b1a4 (next mapped method entry)
 2c0afa0: d100c3ff     	sub	sp, sp, #0x30
 2c0afa4: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c0afa8: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0afac: 9001d855     	adrp	x21, 0x6712000
 2c0afb0: d001b734     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0afb4: aa0003f3     	mov	x19, x0
 2c0afb8: 396f7ea8     	ldrb	w8, [x21, #0xbdf]
 2c0afbc: f9478e94     	ldr	x20, [x20, #0xf18]
 2c0afc0: 37000188     	tbnz	w8, #0x0, 0x2c0aff0 <__start_il2cpp+0x1429dc>
 2c0afc4: f001b760     	adrp	x0, 0x62f9000
 2c0afc8: f9474800     	ldr	x0, [x0, #0xe90]
 2c0afcc: 97f72f85     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0afd0: d001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0afd4: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0afd8: 97f72f82     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0afdc: f001b780     	adrp	x0, 0x62fd000
 2c0afe0: f9401c00     	ldr	x0, [x0, #0x38]
 2c0afe4: 97f72f7f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0afe8: 52800028     	mov	w8, #0x1                // =1
 2c0afec: 392f7ea8     	strb	w8, [x21, #0xbdf]
 2c0aff0: f9400280     	ldr	x0, [x20]
 2c0aff4: b9403269     	ldr	w9, [x19, #0x30]
 2c0aff8: f9402e74     	ldr	x20, [x19, #0x58]
 2c0affc: a9007fff     	stp	xzr, xzr, [sp]
 2c0b000: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b004: 340005c9     	cbz	w9, 0x2c0b0bc <__start_il2cpp+0x142aa8>
 2c0b008: 35000048     	cbnz	w8, 0x2c0b010 <__start_il2cpp+0x1429fc>
 2c0b00c: 97f72fd4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b010: aa1403e0     	mov	x0, x20
 2c0b014: aa1f03e1     	mov	x1, xzr
 2c0b018: 94bcfd8b     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0b01c: 36000120     	tbz	w0, #0x0, 0x2c0b040 <__start_il2cpp+0x142a2c>
 2c0b020: f9402e60     	ldr	x0, [x19, #0x58]
 2c0b024: b4000be0     	cbz	x0, 0x2c0b1a0 <__start_il2cpp+0x142b8c>
 2c0b028: aa1f03e1     	mov	x1, xzr
 2c0b02c: 3900e41f     	strb	wzr, [x0, #0x39]
 2c0b030: 94bcd24b     	bl	0x5b3f95c <__start_il2cpp+0x3077348>
 2c0b034: 52800021     	mov	w1, #0x1                // =1
 2c0b038: aa1f03e2     	mov	x2, xzr
 2c0b03c: 940391f1     	bl	0x2cef800 <__start_il2cpp+0x2271ec>
 2c0b040: 3942e668     	ldrb	w8, [x19, #0xb9]
 2c0b044: 35000a68     	cbnz	w8, 0x2c0b190 <__start_il2cpp+0x142b7c>
 2c0b048: d001b774     	adrp	x20, 0x62f9000
 2c0b04c: 52800029     	mov	w9, #0x1                // =1
 2c0b050: f9474a94     	ldr	x20, [x20, #0xe90]
 2c0b054: 3902e669     	strb	w9, [x19, #0xb9]
 2c0b058: f9400280     	ldr	x0, [x20]
 2c0b05c: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b060: 35000068     	cbnz	w8, 0x2c0b06c <__start_il2cpp+0x142a58>
 2c0b064: 97f72fbe     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b068: f9400280     	ldr	x0, [x20]
 2c0b06c: f9405c08     	ldr	x8, [x0, #0xb8]
 2c0b070: f9401908     	ldr	x8, [x8, #0x30]
 2c0b074: b4000968     	cbz	x8, 0x2c0b1a0 <__start_il2cpp+0x142b8c>
 2c0b078: f9403661     	ldr	x1, [x19, #0x68]
 2c0b07c: f9400d09     	ldr	x9, [x8, #0x18]
 2c0b080: aa1f03e2     	mov	x2, xzr
 2c0b084: f9402100     	ldr	x0, [x8, #0x40]
 2c0b088: f9401503     	ldr	x3, [x8, #0x28]
 2c0b08c: d63f0120     	blr	x9
 2c0b090: f9400268     	ldr	x8, [x19]
 2c0b094: aa1303e0     	mov	x0, x19
 2c0b098: a95b8509     	ldp	x9, x1, [x8, #0x1b8]
 2c0b09c: d63f0120     	blr	x9
 2c0b0a0: 36000780     	tbz	w0, #0x0, 0x2c0b190 <__start_il2cpp+0x142b7c>
 2c0b0a4: aa1303e0     	mov	x0, x19
 2c0b0a8: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0b0ac: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c0b0b0: 52800021     	mov	w1, #0x1                // =1
 2c0b0b4: 9100c3ff     	add	sp, sp, #0x30
 2c0b0b8: 140006b9     	b	0x2c0cb9c <__start_il2cpp+0x144588>
 2c0b0bc: 35000048     	cbnz	w8, 0x2c0b0c4 <__start_il2cpp+0x142ab0>
 2c0b0c0: 97f72fa7     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b0c4: aa1403e0     	mov	x0, x20
 2c0b0c8: aa1f03e1     	mov	x1, xzr
 2c0b0cc: 94bcfd5e     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0b0d0: 360002c0     	tbz	w0, #0x0, 0x2c0b128 <__start_il2cpp+0x142b14>
 2c0b0d4: 3940d268     	ldrb	w8, [x19, #0x34]
 2c0b0d8: 34000288     	cbz	w8, 0x2c0b128 <__start_il2cpp+0x142b14>
 2c0b0dc: f9403661     	ldr	x1, [x19, #0x68]
 2c0b0e0: 52800028     	mov	w8, #0x1                // =1
 2c0b0e4: f9404e74     	ldr	x20, [x19, #0x98]
 2c0b0e8: a90007ff     	stp	xzr, x1, [sp]
 2c0b0ec: 390003e8     	strb	w8, [sp]
 2c0b0f0: 910003e8     	mov	x8, sp
 2c0b0f4: 91002100     	add	x0, x8, #0x8
 2c0b0f8: 97f72f25     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b0fc: b4000534     	cbz	x20, 0x2c0b1a0 <__start_il2cpp+0x142b8c>
 2c0b100: d001b788     	adrp	x8, 0x62fd000
 2c0b104: aa1403e0     	mov	x0, x20
 2c0b108: f9401d08     	ldr	x8, [x8, #0x38]
 2c0b10c: a9400be1     	ldp	x1, x2, [sp]
 2c0b110: f9400103     	ldr	x3, [x8]
 2c0b114: 94286113     	bl	0x3623560 <__start_il2cpp+0xb5af4c>
 2c0b118: f9402e60     	ldr	x0, [x19, #0x58]
 2c0b11c: b4000420     	cbz	x0, 0x2c0b1a0 <__start_il2cpp+0x142b8c>
 2c0b120: 52800021     	mov	w1, #0x1                // =1
 2c0b124: 94000030     	bl	0x2c0b1e4 <__start_il2cpp+0x142bd0>
 2c0b128: f9403660     	ldr	x0, [x19, #0x68]
 2c0b12c: b40003a0     	cbz	x0, 0x2c0b1a0 <__start_il2cpp+0x142b8c>
 2c0b130: f9400008     	ldr	x8, [x0]
 2c0b134: f9410d09     	ldr	x9, [x8, #0x218]
 2c0b138: f9411101     	ldr	x1, [x8, #0x220]
 2c0b13c: d63f0120     	blr	x9
 2c0b140: d001b774     	adrp	x20, 0x62f9000
 2c0b144: f9474a94     	ldr	x20, [x20, #0xe90]
 2c0b148: 3902e67f     	strb	wzr, [x19, #0xb9]
 2c0b14c: f9400280     	ldr	x0, [x20]
 2c0b150: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b154: 35000068     	cbnz	w8, 0x2c0b160 <__start_il2cpp+0x142b4c>
 2c0b158: 97f72f81     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b15c: f9400280     	ldr	x0, [x20]
 2c0b160: f9405c08     	ldr	x8, [x0, #0xb8]
 2c0b164: f9403d08     	ldr	x8, [x8, #0x78]
 2c0b168: b40001c8     	cbz	x8, 0x2c0b1a0 <__start_il2cpp+0x142b8c>
 2c0b16c: f9403661     	ldr	x1, [x19, #0x68]
 2c0b170: f9400d09     	ldr	x9, [x8, #0x18]
 2c0b174: aa1f03e2     	mov	x2, xzr
 2c0b178: f9402100     	ldr	x0, [x8, #0x40]
 2c0b17c: f9401503     	ldr	x3, [x8, #0x28]
 2c0b180: d63f0120     	blr	x9
 2c0b184: aa1303e0     	mov	x0, x19
 2c0b188: 2a1f03e1     	mov	w1, wzr
 2c0b18c: 94000684     	bl	0x2c0cb9c <__start_il2cpp+0x144588>
 2c0b190: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0b194: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c0b198: 9100c3ff     	add	sp, sp, #0x30
 2c0b19c: d65f03c0     	ret
 2c0b1a0: 97f72fba     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void StartUpdateRechargeTimeCoroutine()
# VA 0x2c0b1a4 .. 0x2c0b1e4 (next mapped method entry)
 2c0b1a4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0b1a8: 52800028     	mov	w8, #0x1                // =1
 2c0b1ac: aa0003f3     	mov	x19, x0
 2c0b1b0: 3900d008     	strb	w8, [x0, #0x34]
 2c0b1b4: 940006ca     	bl	0x2c0ccdc <__start_il2cpp+0x1446c8>
 2c0b1b8: aa0003e1     	mov	x1, x0
 2c0b1bc: f80a8e60     	str	x0, [x19, #0xa8]!
 2c0b1c0: aa1303e0     	mov	x0, x19
 2c0b1c4: 97f72ef2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0b1c8: f85d0260     	ldur	x0, [x19, #-0x30]
 2c0b1cc: b40000a0     	cbz	x0, 0x2c0b1e0 <__start_il2cpp+0x142bcc>
 2c0b1d0: f9400261     	ldr	x1, [x19]
 2c0b1d4: aa1f03e2     	mov	x2, xzr
 2c0b1d8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0b1dc: 14bcf022     	b	0x5b47264 <__start_il2cpp+0x307ec50>
 2c0b1e0: 97f72faa     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void StartRecharging(System.Int32 secondsToDeductFromPrevRecharge = 0)
# VA 0x2c0b2d8 .. 0x2c0b430 (next mapped method entry)
 2c0b2d8: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0b2dc: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0b2e0: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0b2e4: f001d836     	adrp	x22, 0x6712000
 2c0b2e8: f001b735     	adrp	x21, 0x62f2000
 2c0b2ec: 2a0103f4     	mov	w20, w1
 2c0b2f0: 396f6ec8     	ldrb	w8, [x22, #0xbdb]
 2c0b2f4: f940aeb5     	ldr	x21, [x21, #0x158]
 2c0b2f8: aa0003f3     	mov	x19, x0
 2c0b2fc: 37000128     	tbnz	w8, #0x0, 0x2c0b320 <__start_il2cpp+0x142d0c>
 2c0b300: f001b720     	adrp	x0, 0x62f2000
 2c0b304: f940ac00     	ldr	x0, [x0, #0x158]
 2c0b308: 97f72eb6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b30c: b001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b310: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0b314: 97f72eb3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b318: 52800028     	mov	w8, #0x1                // =1
 2c0b31c: 392f6ec8     	strb	w8, [x22, #0xbdb]
 2c0b320: f94002a0     	ldr	x0, [x21]
 2c0b324: 52800029     	mov	w9, #0x1                // =1
 2c0b328: f90007ff     	str	xzr, [sp, #0x8]
 2c0b32c: 3900d269     	strb	w9, [x19, #0x34]
 2c0b330: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b334: 34000194     	cbz	w20, 0x2c0b364 <__start_il2cpp+0x142d50>
 2c0b338: 35000048     	cbnz	w8, 0x2c0b340 <__start_il2cpp+0x142d2c>
 2c0b33c: 97f72f08     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b340: aa1f03e0     	mov	x0, xzr
 2c0b344: 94938290     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0b348: 4b1403e8     	neg	w8, w20
 2c0b34c: f90007e0     	str	x0, [sp, #0x8]
 2c0b350: 910023e0     	add	x0, sp, #0x8
 2c0b354: 1e620100     	scvtf	d0, w8
 2c0b358: aa1f03e1     	mov	x1, xzr
 2c0b35c: 94937e36     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2c0b360: 14000005     	b	0x2c0b374 <__start_il2cpp+0x142d60>
 2c0b364: 35000048     	cbnz	w8, 0x2c0b36c <__start_il2cpp+0x142d58>
 2c0b368: 97f72efd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b36c: aa1f03e0     	mov	x0, xzr
 2c0b370: 94938285     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0b374: aa1303f4     	mov	x20, x19
 2c0b378: f8048e80     	str	x0, [x20, #0x48]!
 2c0b37c: f85f8288     	ldur	x8, [x20, #-0x8]
 2c0b380: b4000568     	cbz	x8, 0x2c0b42c <__start_il2cpp+0x142e18>
 2c0b384: f94002a0     	ldr	x0, [x21]
 2c0b388: b001b735     	adrp	x21, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b38c: b940e409     	ldr	w9, [x0, #0xe4]
 2c0b390: f9478eb5     	ldr	x21, [x21, #0xf18]
 2c0b394: b9402d16     	ldr	w22, [x8, #0x2c]
 2c0b398: 35000049     	cbnz	w9, 0x2c0b3a0 <__start_il2cpp+0x142d8c>
 2c0b39c: 97f72ef0     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b3a0: 1e6202c0     	scvtf	d0, w22
 2c0b3a4: aa1403e0     	mov	x0, x20
 2c0b3a8: aa1f03e1     	mov	x1, xzr
 2c0b3ac: 94937e22     	bl	0x50eac34 <__start_il2cpp+0x2622620>
 2c0b3b0: f9002a60     	str	x0, [x19, #0x50]
 2c0b3b4: aa1303e0     	mov	x0, x19
 2c0b3b8: 97ffff7b     	bl	0x2c0b1a4 <__start_il2cpp+0x142b90>
 2c0b3bc: f94002a0     	ldr	x0, [x21]
 2c0b3c0: f9402e74     	ldr	x20, [x19, #0x58]
 2c0b3c4: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b3c8: 35000048     	cbnz	w8, 0x2c0b3d0 <__start_il2cpp+0x142dbc>
 2c0b3cc: 97f72ee4     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b3d0: aa1403e0     	mov	x0, x20
 2c0b3d4: aa1f03e1     	mov	x1, xzr
 2c0b3d8: 94bcfc9b     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0b3dc: 36000160     	tbz	w0, #0x0, 0x2c0b408 <__start_il2cpp+0x142df4>
 2c0b3e0: b9403268     	ldr	w8, [x19, #0x30]
 2c0b3e4: 35000128     	cbnz	w8, 0x2c0b408 <__start_il2cpp+0x142df4>
 2c0b3e8: f9402e60     	ldr	x0, [x19, #0x58]
 2c0b3ec: b4000200     	cbz	x0, 0x2c0b42c <__start_il2cpp+0x142e18>
 2c0b3f0: 2f00e400     	movi	d0, #0000000000000000
 2c0b3f4: 9400045f     	bl	0x2c0c570 <__start_il2cpp+0x143f5c>
 2c0b3f8: f9402e60     	ldr	x0, [x19, #0x58]
 2c0b3fc: b4000180     	cbz	x0, 0x2c0b42c <__start_il2cpp+0x142e18>
 2c0b400: 52800021     	mov	w1, #0x1                // =1
 2c0b404: 97ffff78     	bl	0x2c0b1e4 <__start_il2cpp+0x142bd0>
 2c0b408: f9403660     	ldr	x0, [x19, #0x68]
 2c0b40c: b4000100     	cbz	x0, 0x2c0b42c <__start_il2cpp+0x142e18>
 2c0b410: f9400008     	ldr	x8, [x0]
 2c0b414: a95f8509     	ldp	x9, x1, [x8, #0x1f8]
 2c0b418: d63f0120     	blr	x9
 2c0b41c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0b420: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0b424: f84307fe     	ldr	x30, [sp], #0x30
 2c0b428: d65f03c0     	ret
 2c0b42c: 97f72f17     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void TryProduceActivityItem()
# VA 0x2c0b7ac .. 0x2c0bc1c (next mapped method entry)
 2c0b7ac: d101c3ff     	sub	sp, sp, #0x70
 2c0b7b0: 6d0123e9     	stp	d9, d8, [sp, #0x10]
 2c0b7b4: f90013fe     	str	x30, [sp, #0x20]
 2c0b7b8: a90367fa     	stp	x26, x25, [sp, #0x30]
 2c0b7bc: a9045ff8     	stp	x24, x23, [sp, #0x40]
 2c0b7c0: a90557f6     	stp	x22, x21, [sp, #0x50]
 2c0b7c4: a9064ff4     	stp	x20, x19, [sp, #0x60]
 2c0b7c8: f001d834     	adrp	x20, 0x6712000
 2c0b7cc: d001b799     	adrp	x25, 0x62fd000
 2c0b7d0: aa0003f3     	mov	x19, x0
 2c0b7d4: 396f5e88     	ldrb	w8, [x20, #0xbd7]
 2c0b7d8: f9400339     	ldr	x25, [x25]
 2c0b7dc: 37000368     	tbnz	w8, #0x0, 0x2c0b848 <__start_il2cpp+0x143234>
 2c0b7e0: d001b780     	adrp	x0, 0x62fd000
 2c0b7e4: f9400000     	ldr	x0, [x0]
 2c0b7e8: 97f72d7e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b7ec: b001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b7f0: f946e800     	ldr	x0, [x0, #0xdd0]
 2c0b7f4: 97f72d7b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b7f8: d001b760     	adrp	x0, 0x62f9000
 2c0b7fc: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0b800: 97f72d78     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b804: 9001b740     	adrp	x0, 0x62f3000
 2c0b808: f9479000     	ldr	x0, [x0, #0xf20]
 2c0b80c: 97f72d75     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b810: b001b780     	adrp	x0, 0x62fc000
 2c0b814: f945ec00     	ldr	x0, [x0, #0xbd8]
 2c0b818: 97f72d72     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b81c: b001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b820: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0b824: 97f72d6f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b828: d001b780     	adrp	x0, 0x62fd000
 2c0b82c: f9400c00     	ldr	x0, [x0, #0x18]
 2c0b830: 97f72d6c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b834: d001b780     	adrp	x0, 0x62fd000
 2c0b838: f9401000     	ldr	x0, [x0, #0x20]
 2c0b83c: 97f72d69     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0b840: 52800028     	mov	w8, #0x1                // =1
 2c0b844: 392f5e88     	strb	w8, [x20, #0xbd7]
 2c0b848: f9400320     	ldr	x0, [x25]
 2c0b84c: 52800029     	mov	w9, #0x1                // =1
 2c0b850: f90017ff     	str	xzr, [sp, #0x28]
 2c0b854: 3902ea69     	strb	w9, [x19, #0xba]
 2c0b858: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b85c: 35000048     	cbnz	w8, 0x2c0b864 <__start_il2cpp+0x143250>
 2c0b860: 97f72dbf     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b864: aa1f03e0     	mov	x0, xzr
 2c0b868: 9405707f     	bl	0x2d67a64 <__start_il2cpp+0x29f450>
 2c0b86c: 36001c60     	tbz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0b870: b001b738     	adrp	x24, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b874: f9478f18     	ldr	x24, [x24, #0xf18]
 2c0b878: f9403674     	ldr	x20, [x19, #0x68]
 2c0b87c: f9400300     	ldr	x0, [x24]
 2c0b880: b940e408     	ldr	w8, [x0, #0xe4]
 2c0b884: 35000048     	cbnz	w8, 0x2c0b88c <__start_il2cpp+0x143278>
 2c0b888: 97f72db5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b88c: aa1403e0     	mov	x0, x20
 2c0b890: aa1f03e1     	mov	x1, xzr
 2c0b894: aa1f03e2     	mov	x2, xzr
 2c0b898: 94bceb58     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c0b89c: 37001ae0     	tbnz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0b8a0: f9403668     	ldr	x8, [x19, #0x68]
 2c0b8a4: b4001ba8     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0b8a8: f9400300     	ldr	x0, [x24]
 2c0b8ac: f9402914     	ldr	x20, [x8, #0x50]
 2c0b8b0: b940e409     	ldr	w9, [x0, #0xe4]
 2c0b8b4: 35000049     	cbnz	w9, 0x2c0b8bc <__start_il2cpp+0x1432a8>
 2c0b8b8: 97f72da9     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b8bc: aa1403e0     	mov	x0, x20
 2c0b8c0: aa1f03e1     	mov	x1, xzr
 2c0b8c4: aa1f03e2     	mov	x2, xzr
 2c0b8c8: 94bceb4c     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c0b8cc: 37001960     	tbnz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0b8d0: f9403668     	ldr	x8, [x19, #0x68]
 2c0b8d4: b4001a28     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0b8d8: f9400300     	ldr	x0, [x24]
 2c0b8dc: f9402d14     	ldr	x20, [x8, #0x58]
 2c0b8e0: b940e409     	ldr	w9, [x0, #0xe4]
 2c0b8e4: 35000049     	cbnz	w9, 0x2c0b8ec <__start_il2cpp+0x1432d8>
 2c0b8e8: 97f72d9d     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0b8ec: aa1403e0     	mov	x0, x20
 2c0b8f0: aa1f03e1     	mov	x1, xzr
 2c0b8f4: aa1f03e2     	mov	x2, xzr
 2c0b8f8: 94bceb40     	bl	0x5b465f8 <__start_il2cpp+0x307dfe4>
 2c0b8fc: 370017e0     	tbnz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0b900: f9403668     	ldr	x8, [x19, #0x68]
 2c0b904: b40018a8     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0b908: f9402909     	ldr	x9, [x8, #0x50]
 2c0b90c: b4001869     	cbz	x9, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0b910: b001b737     	adrp	x23, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0b914: 910033e1     	add	x1, sp, #0xc
 2c0b918: f9470ef7     	ldr	x23, [x23, #0xe18]
 2c0b91c: b9403129     	ldr	w9, [x9, #0x30]
 2c0b920: f9401274     	ldr	x20, [x19, #0x20]
 2c0b924: f9402d15     	ldr	x21, [x8, #0x58]
 2c0b928: f94026e0     	ldr	x0, [x23, #0x48]
 2c0b92c: b9000fe9     	str	w9, [sp, #0xc]
 2c0b930: 97f72d8d     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0b934: f9403668     	ldr	x8, [x19, #0x68]
 2c0b938: b4001708     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0b93c: aa0003f6     	mov	x22, x0
 2c0b940: b9404508     	ldr	w8, [x8, #0x44]
 2c0b944: f94026e0     	ldr	x0, [x23, #0x48]
 2c0b948: 910023e1     	add	x1, sp, #0x8
 2c0b94c: b9000be8     	str	w8, [sp, #0x8]
 2c0b950: 97f72d85     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0b954: d001b788     	adrp	x8, 0x62fd000
 2c0b958: aa0003e2     	mov	x2, x0
 2c0b95c: aa1603e1     	mov	x1, x22
 2c0b960: f9400d08     	ldr	x8, [x8, #0x18]
 2c0b964: aa1f03e3     	mov	x3, xzr
 2c0b968: f9400108     	ldr	x8, [x8]
 2c0b96c: aa0803e0     	mov	x0, x8
 2c0b970: 948dad61     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2c0b974: f9400268     	ldr	x8, [x19]
 2c0b978: aa0003f6     	mov	x22, x0
 2c0b97c: aa1303e0     	mov	x0, x19
 2c0b980: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2c0b984: d63f0120     	blr	x9
 2c0b988: b4001494     	cbz	x20, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0b98c: d001b77a     	adrp	x26, 0x62f9000
 2c0b990: f9400288     	ldr	x8, [x20]
 2c0b994: 2a0003f7     	mov	w23, w0
 2c0b998: f9476f5a     	ldr	x26, [x26, #0xed8]
 2c0b99c: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0b9a0: f9400341     	ldr	x1, [x26]
 2c0b9a4: b4000129     	cbz	x9, 0x2c0b9c8 <__start_il2cpp+0x1433b4>
 2c0b9a8: f940590a     	ldr	x10, [x8, #0xb0]
 2c0b9ac: 9100214a     	add	x10, x10, #0x8
 2c0b9b0: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0b9b4: eb01017f     	cmp	x11, x1
 2c0b9b8: 54000100     	b.eq	0x2c0b9d8 <__start_il2cpp+0x1433c4>
 2c0b9bc: f1000529     	subs	x9, x9, #0x1
 2c0b9c0: 9100414a     	add	x10, x10, #0x10
 2c0b9c4: 54ffff61     	b.ne	0x2c0b9b0 <__start_il2cpp+0x14339c>
 2c0b9c8: aa1403e0     	mov	x0, x20
 2c0b9cc: 52800122     	mov	w2, #0x9                // =9
 2c0b9d0: 97f80a65     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0b9d4: 14000005     	b	0x2c0b9e8 <__start_il2cpp+0x1433d4>
 2c0b9d8: b9400149     	ldr	w9, [x10]
 2c0b9dc: 11002529     	add	w9, w9, #0x9
 2c0b9e0: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0b9e4: 9104e100     	add	x0, x8, #0x138
 2c0b9e8: a9401008     	ldp	x8, x4, [x0]
 2c0b9ec: aa1403e0     	mov	x0, x20
 2c0b9f0: aa1503e1     	mov	x1, x21
 2c0b9f4: aa1603e2     	mov	x2, x22
 2c0b9f8: 2a1703e3     	mov	w3, w23
 2c0b9fc: d63f0100     	blr	x8
 2c0ba00: f9400308     	ldr	x8, [x24]
 2c0ba04: aa0003f4     	mov	x20, x0
 2c0ba08: b940e509     	ldr	w9, [x8, #0xe4]
 2c0ba0c: 35000069     	cbnz	w9, 0x2c0ba18 <__start_il2cpp+0x143404>
 2c0ba10: aa0803e0     	mov	x0, x8
 2c0ba14: 97f72d52     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0ba18: aa1403e0     	mov	x0, x20
 2c0ba1c: aa1f03e1     	mov	x1, xzr
 2c0ba20: 94bcfb09     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0ba24: 36000b60     	tbz	w0, #0x0, 0x2c0bb90 <__start_il2cpp+0x14357c>
 2c0ba28: b4000f94     	cbz	x20, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0ba2c: 3940b288     	ldrb	w8, [x20, #0x2c]
 2c0ba30: 34000da8     	cbz	w8, 0x2c0bbe4 <__start_il2cpp+0x1435d0>
 2c0ba34: f9403668     	ldr	x8, [x19, #0x68]
 2c0ba38: f90017ff     	str	xzr, [sp, #0x28]
 2c0ba3c: b4000ee8     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0ba40: f9402908     	ldr	x8, [x8, #0x50]
 2c0ba44: b4000ea8     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0ba48: f9400320     	ldr	x0, [x25]
 2c0ba4c: b9403115     	ldr	w21, [x8, #0x30]
 2c0ba50: b940e409     	ldr	w9, [x0, #0xe4]
 2c0ba54: 35000049     	cbnz	w9, 0x2c0ba5c <__start_il2cpp+0x143448>
 2c0ba58: 97f72d41     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0ba5c: 9100a3e1     	add	x1, sp, #0x28
 2c0ba60: 2a1503e0     	mov	w0, w21
 2c0ba64: aa1f03e2     	mov	x2, xzr
 2c0ba68: 94056f7b     	bl	0x2d67854 <__start_il2cpp+0x29f240>
 2c0ba6c: 36000c60     	tbz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0ba70: b001b788     	adrp	x8, 0x62fc000
 2c0ba74: f945ed08     	ldr	x8, [x8, #0xbd8]
 2c0ba78: f9400100     	ldr	x0, [x8]
 2c0ba7c: 97f72d7f     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0ba80: aa1f03e1     	mov	x1, xzr
 2c0ba84: aa0003f5     	mov	x21, x0
 2c0ba88: 97ffc48c     	bl	0x2bfccb8 <__start_il2cpp+0x1346a4>
 2c0ba8c: b4000c75     	cbz	x21, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0ba90: b9402fe9     	ldr	w9, [sp, #0x2c]
 2c0ba94: f9400e62     	ldr	x2, [x19, #0x18]
 2c0ba98: 52a7f008     	mov	w8, #0x3f800000         // =1065353216
 2c0ba9c: 290322a9     	stp	w9, w8, [x21, #0x18]
 2c0baa0: b4000bc2     	cbz	x2, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0baa4: 9001b748     	adrp	x8, 0x62f3000
 2c0baa8: 52800080     	mov	w0, #0x4                // =4
 2c0baac: f9479108     	ldr	x8, [x8, #0xf20]
 2c0bab0: b9402be3     	ldr	w3, [sp, #0x28]
 2c0bab4: f9400101     	ldr	x1, [x8]
 2c0bab8: 97ea7287     	bl	0x26a84d4 <.text+0x3374>
 2c0babc: aa1503f6     	mov	x22, x21
 2c0bac0: aa0003e1     	mov	x1, x0
 2c0bac4: f8010ec0     	str	x0, [x22, #0x10]!
 2c0bac8: aa1603e0     	mov	x0, x22
 2c0bacc: 97f72cb0     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0bad0: f94002c9     	ldr	x9, [x22]
 2c0bad4: b4000a29     	cbz	x9, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bad8: f9403668     	ldr	x8, [x19, #0x68]
 2c0badc: b40009e8     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bae0: f940226a     	ldr	x10, [x19, #0x40]
 2c0bae4: b40009aa     	cbz	x10, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bae8: b9403121     	ldr	w1, [x9, #0x30]
 2c0baec: b9401aa2     	ldr	w2, [x21, #0x18]
 2c0baf0: aa1303e0     	mov	x0, x19
 2c0baf4: f9402d03     	ldr	x3, [x8, #0x58]
 2c0baf8: 39411145     	ldrb	w5, [x10, #0x44]
 2c0bafc: aa1403e4     	mov	x4, x20
 2c0bb00: 97fffe4c     	bl	0x2c0b430 <__start_il2cpp+0x142e1c>
 2c0bb04: f9400308     	ldr	x8, [x24]
 2c0bb08: aa0003f4     	mov	x20, x0
 2c0bb0c: b940e509     	ldr	w9, [x8, #0xe4]
 2c0bb10: 35000069     	cbnz	w9, 0x2c0bb1c <__start_il2cpp+0x143508>
 2c0bb14: aa0803e0     	mov	x0, x8
 2c0bb18: 97f72d11     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0bb1c: aa1403e0     	mov	x0, x20
 2c0bb20: aa1f03e1     	mov	x1, xzr
 2c0bb24: aa1f03e2     	mov	x2, xzr
 2c0bb28: 94bcdcad     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c0bb2c: 36000660     	tbz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0bb30: f9401262     	ldr	x2, [x19, #0x20]
 2c0bb34: b4000722     	cbz	x2, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bb38: f9400341     	ldr	x1, [x26]
 2c0bb3c: f9403673     	ldr	x19, [x19, #0x68]
 2c0bb40: 528001c0     	mov	w0, #0xe                // =14
 2c0bb44: 2a1f03e3     	mov	w3, wzr
 2c0bb48: 97ea7787     	bl	0x26a9964 <.text+0x4804>
 2c0bb4c: aa0003e1     	mov	x1, x0
 2c0bb50: aa1303e0     	mov	x0, x19
 2c0bb54: aa1f03e2     	mov	x2, xzr
 2c0bb58: 9401778a     	bl	0x2c69980 <__start_il2cpp+0x1a136c>
 2c0bb5c: 360004e0     	tbz	w0, #0x0, 0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0bb60: b001b728     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0bb64: f946e908     	ldr	x8, [x8, #0xdd0]
 2c0bb68: f9400100     	ldr	x0, [x8]
 2c0bb6c: b940e408     	ldr	w8, [x0, #0xe4]
 2c0bb70: 35000048     	cbnz	w8, 0x2c0bb78 <__start_il2cpp+0x143564>
 2c0bb74: 97f72cfa     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0bb78: d001b788     	adrp	x8, 0x62fd000
 2c0bb7c: aa1f03e1     	mov	x1, xzr
 2c0bb80: f9401108     	ldr	x8, [x8, #0x20]
 2c0bb84: f9400100     	ldr	x0, [x8]
 2c0bb88: 94bbc1e7     	bl	0x5afc324 <__start_il2cpp+0x3033d10>
 2c0bb8c: 1400001b     	b	0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0bb90: f9403668     	ldr	x8, [x19, #0x68]
 2c0bb94: b4000428     	cbz	x8, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bb98: f9402909     	ldr	x9, [x8, #0x50]
 2c0bb9c: b40003e9     	cbz	x9, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bba0: f9402d00     	ldr	x0, [x8, #0x58]
 2c0bba4: b40003a0     	cbz	x0, 0x2c0bc18 <__start_il2cpp+0x143604>
 2c0bba8: b9403133     	ldr	w19, [x9, #0x30]
 2c0bbac: aa1f03e1     	mov	x1, xzr
 2c0bbb0: 97fe4f43     	bl	0x2b9f8bc <__start_il2cpp+0xd72a8>
 2c0bbb4: 1e204008     	fmov	s8, s0
 2c0bbb8: f9400320     	ldr	x0, [x25]
 2c0bbbc: 1e204029     	fmov	s9, s1
 2c0bbc0: b940e408     	ldr	w8, [x0, #0xe4]
 2c0bbc4: 35000048     	cbnz	w8, 0x2c0bbcc <__start_il2cpp+0x1435b8>
 2c0bbc8: 97f72ce5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0bbcc: 1e204100     	fmov	s0, s8
 2c0bbd0: 1e204121     	fmov	s1, s9
 2c0bbd4: 2a1303e0     	mov	w0, w19
 2c0bbd8: aa1f03e1     	mov	x1, xzr
 2c0bbdc: 94056eea     	bl	0x2d67784 <__start_il2cpp+0x29f170>
 2c0bbe0: 14000006     	b	0x2c0bbf8 <__start_il2cpp+0x1435e4>
 2c0bbe4: f9400268     	ldr	x8, [x19]
 2c0bbe8: aa1303e0     	mov	x0, x19
 2c0bbec: 2a1f03e1     	mov	w1, wzr
 2c0bbf0: a9578909     	ldp	x9, x2, [x8, #0x178]
 2c0bbf4: d63f0120     	blr	x9
 2c0bbf8: a9464ff4     	ldp	x20, x19, [sp, #0x60]
 2c0bbfc: f94013fe     	ldr	x30, [sp, #0x20]
 2c0bc00: a94557f6     	ldp	x22, x21, [sp, #0x50]
 2c0bc04: a9445ff8     	ldp	x24, x23, [sp, #0x40]
 2c0bc08: a94367fa     	ldp	x26, x25, [sp, #0x30]
 2c0bc0c: 6d4123e9     	ldp	d9, d8, [sp, #0x10]
 2c0bc10: 9101c3ff     	add	sp, sp, #0x70
 2c0bc14: d65f03c0     	ret
 2c0bc18: 97f72d1c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void Dispose()
# VA 0x2c0bc1c .. 0x2c0c528 (next mapped method entry)
 2c0bc1c: d10203ff     	sub	sp, sp, #0x80
 2c0bc20: a9036ffe     	stp	x30, x27, [sp, #0x30]
 2c0bc24: a90467fa     	stp	x26, x25, [sp, #0x40]
 2c0bc28: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2c0bc2c: a90657f6     	stp	x22, x21, [sp, #0x60]
 2c0bc30: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2c0bc34: f001d834     	adrp	x20, 0x6712000
 2c0bc38: aa0003f3     	mov	x19, x0
 2c0bc3c: 396f7a88     	ldrb	w8, [x20, #0xbde]
 2c0bc40: 370005a8     	tbnz	w8, #0x0, 0x2c0bcf4 <__start_il2cpp+0x1436e0>
 2c0bc44: d001b760     	adrp	x0, 0x62f9000
 2c0bc48: f9476c00     	ldr	x0, [x0, #0xed8]
 2c0bc4c: 97f72c65     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc50: 9001b740     	adrp	x0, 0x62f3000
 2c0bc54: f9479000     	ldr	x0, [x0, #0xf20]
 2c0bc58: 97f72c62     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc5c: b001b780     	adrp	x0, 0x62fc000
 2c0bc60: f9443800     	ldr	x0, [x0, #0x870]
 2c0bc64: 97f72c5f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc68: d001b760     	adrp	x0, 0x62f9000
 2c0bc6c: f9474800     	ldr	x0, [x0, #0xe90]
 2c0bc70: 97f72c5c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc74: f001b760     	adrp	x0, 0x62fa000
 2c0bc78: f9405000     	ldr	x0, [x0, #0xa0]
 2c0bc7c: 97f72c59     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc80: d001b780     	adrp	x0, 0x62fd000
 2c0bc84: f9403c00     	ldr	x0, [x0, #0x78]
 2c0bc88: 97f72c56     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc8c: b001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0bc90: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0bc94: 97f72c53     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bc98: f001b760     	adrp	x0, 0x62fa000
 2c0bc9c: f9406c00     	ldr	x0, [x0, #0xd8]
 2c0bca0: 97f72c50     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bca4: d001b780     	adrp	x0, 0x62fd000
 2c0bca8: f9403000     	ldr	x0, [x0, #0x60]
 2c0bcac: 97f72c4d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bcb0: f001b760     	adrp	x0, 0x62fa000
 2c0bcb4: f941e000     	ldr	x0, [x0, #0x3c0]
 2c0bcb8: 97f72c4a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bcbc: d001b720     	adrp	x0, 0x62f1000
 2c0bcc0: f9433c00     	ldr	x0, [x0, #0x678]
 2c0bcc4: 97f72c47     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bcc8: d001b780     	adrp	x0, 0x62fd000
 2c0bccc: f9404000     	ldr	x0, [x0, #0x80]
 2c0bcd0: 97f72c44     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bcd4: d001b780     	adrp	x0, 0x62fd000
 2c0bcd8: f9404400     	ldr	x0, [x0, #0x88]
 2c0bcdc: 97f72c41     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bce0: d001b780     	adrp	x0, 0x62fd000
 2c0bce4: f9400c00     	ldr	x0, [x0, #0x18]
 2c0bce8: 97f72c3e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0bcec: 52800028     	mov	w8, #0x1                // =1
 2c0bcf0: 392f7a88     	strb	w8, [x20, #0xbde]
 2c0bcf4: f9400268     	ldr	x8, [x19]
 2c0bcf8: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c0bcfc: aa1303e0     	mov	x0, x19
 2c0bd00: a9017fff     	stp	xzr, xzr, [sp, #0x10]
 2c0bd04: f90007ff     	str	xzr, [sp, #0x8]
 2c0bd08: a9598509     	ldp	x9, x1, [x8, #0x198]
 2c0bd0c: d63f0120     	blr	x9
 2c0bd10: f9402268     	ldr	x8, [x19, #0x40]
 2c0bd14: b4004088     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bd18: 3940d509     	ldrb	w9, [x8, #0x35]
 2c0bd1c: 34003f69     	cbz	w9, 0x2c0c508 <__start_il2cpp+0x143ef4>
 2c0bd20: b001b73b     	adrp	x27, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0bd24: f9478f7b     	ldr	x27, [x27, #0xf18]
 2c0bd28: f9401d14     	ldr	x20, [x8, #0x38]
 2c0bd2c: f9400360     	ldr	x0, [x27]
 2c0bd30: b940e409     	ldr	w9, [x0, #0xe4]
 2c0bd34: 35000049     	cbnz	w9, 0x2c0bd3c <__start_il2cpp+0x143728>
 2c0bd38: 97f72c89     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0bd3c: aa1403e0     	mov	x0, x20
 2c0bd40: aa1f03e1     	mov	x1, xzr
 2c0bd44: 94bcfa40     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0bd48: 360004c0     	tbz	w0, #0x0, 0x2c0bde0 <__start_il2cpp+0x1437cc>
 2c0bd4c: d001b788     	adrp	x8, 0x62fd000
 2c0bd50: f9404508     	ldr	x8, [x8, #0x88]
 2c0bd54: f9400100     	ldr	x0, [x8]
 2c0bd58: 97f72cc8     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0bd5c: aa1f03e1     	mov	x1, xzr
 2c0bd60: aa0003f4     	mov	x20, x0
 2c0bd64: 94950f79     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0bd68: b4003df4     	cbz	x20, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bd6c: aa1403e0     	mov	x0, x20
 2c0bd70: aa1303e1     	mov	x1, x19
 2c0bd74: f8018c13     	str	x19, [x0, #0x18]!
 2c0bd78: 97f72c05     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0bd7c: f9402268     	ldr	x8, [x19, #0x40]
 2c0bd80: b4003d28     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bd84: f9401d0a     	ldr	x10, [x8, #0x38]
 2c0bd88: b4003cea     	cbz	x10, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bd8c: f9400e75     	ldr	x21, [x19, #0x18]
 2c0bd90: b4003cb5     	cbz	x21, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bd94: 9001b75a     	adrp	x26, 0x62f3000
 2c0bd98: f94002a8     	ldr	x8, [x21]
 2c0bd9c: f947935a     	ldr	x26, [x26, #0xf20]
 2c0bda0: b9403156     	ldr	w22, [x10, #0x30]
 2c0bda4: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0bda8: f9400341     	ldr	x1, [x26]
 2c0bdac: b4000129     	cbz	x9, 0x2c0bdd0 <__start_il2cpp+0x1437bc>
 2c0bdb0: f940590a     	ldr	x10, [x8, #0xb0]
 2c0bdb4: 9100214a     	add	x10, x10, #0x8
 2c0bdb8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0bdbc: eb01017f     	cmp	x11, x1
 2c0bdc0: 54000720     	b.eq	0x2c0bea4 <__start_il2cpp+0x143890>
 2c0bdc4: f1000529     	subs	x9, x9, #0x1
 2c0bdc8: 9100414a     	add	x10, x10, #0x10
 2c0bdcc: 54ffff61     	b.ne	0x2c0bdb8 <__start_il2cpp+0x1437a4>
 2c0bdd0: aa1503e0     	mov	x0, x21
 2c0bdd4: 52800022     	mov	w2, #0x1                // =1
 2c0bdd8: 97f80963     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0bddc: 14000036     	b	0x2c0beb4 <__start_il2cpp+0x1438a0>
 2c0bde0: f9403668     	ldr	x8, [x19, #0x68]
 2c0bde4: b4003a08     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bde8: f9402d00     	ldr	x0, [x8, #0x58]
 2c0bdec: b40039c0     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bdf0: aa1f03e1     	mov	x1, xzr
 2c0bdf4: 52800022     	mov	w2, #0x1                // =1
 2c0bdf8: aa1f03e3     	mov	x3, xzr
 2c0bdfc: 97fe4ec4     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0be00: f9403661     	ldr	x1, [x19, #0x68]
 2c0be04: f9404e74     	ldr	x20, [x19, #0x98]
 2c0be08: a900ffff     	stp	xzr, xzr, [sp, #0x8]
 2c0be0c: b40038c1     	cbz	x1, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0be10: f9402828     	ldr	x8, [x1, #0x50]
 2c0be14: b4003888     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0be18: b9403108     	ldr	w8, [x8, #0x30]
 2c0be1c: b9404429     	ldr	w9, [x1, #0x44]
 2c0be20: f9000be1     	str	x1, [sp, #0x10]
 2c0be24: 290127e8     	stp	w8, w9, [sp, #0x8]
 2c0be28: 910023e8     	add	x8, sp, #0x8
 2c0be2c: 91002100     	add	x0, x8, #0x8
 2c0be30: 97f72bd7     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0be34: b4003794     	cbz	x20, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0be38: f001b768     	adrp	x8, 0x62fa000
 2c0be3c: aa1403e0     	mov	x0, x20
 2c0be40: f941e108     	ldr	x8, [x8, #0x3c0]
 2c0be44: a9408be1     	ldp	x1, x2, [sp, #0x8]
 2c0be48: f9400103     	ldr	x3, [x8]
 2c0be4c: 94285e11     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2c0be50: f9400e74     	ldr	x20, [x19, #0x18]
 2c0be54: b4003694     	cbz	x20, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0be58: 9001b74a     	adrp	x10, 0x62f3000
 2c0be5c: f9400288     	ldr	x8, [x20]
 2c0be60: f947914a     	ldr	x10, [x10, #0xf20]
 2c0be64: f9403675     	ldr	x21, [x19, #0x68]
 2c0be68: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0be6c: f9400141     	ldr	x1, [x10]
 2c0be70: b4000129     	cbz	x9, 0x2c0be94 <__start_il2cpp+0x143880>
 2c0be74: f940590a     	ldr	x10, [x8, #0xb0]
 2c0be78: 9100214a     	add	x10, x10, #0x8
 2c0be7c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0be80: eb01017f     	cmp	x11, x1
 2c0be84: 54000ae0     	b.eq	0x2c0bfe0 <__start_il2cpp+0x1439cc>
 2c0be88: f1000529     	subs	x9, x9, #0x1
 2c0be8c: 9100414a     	add	x10, x10, #0x10
 2c0be90: 54ffff61     	b.ne	0x2c0be7c <__start_il2cpp+0x143868>
 2c0be94: aa1403e0     	mov	x0, x20
 2c0be98: 52800062     	mov	w2, #0x3                // =3
 2c0be9c: 97f80932     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0bea0: 14000054     	b	0x2c0bff0 <__start_il2cpp+0x1439dc>
 2c0bea4: b9400149     	ldr	w9, [x10]
 2c0bea8: 11000529     	add	w9, w9, #0x1
 2c0beac: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0beb0: 9104e100     	add	x0, x8, #0x138
 2c0beb4: a9400808     	ldp	x8, x2, [x0]
 2c0beb8: aa1503e0     	mov	x0, x21
 2c0bebc: 2a1603e1     	mov	w1, w22
 2c0bec0: d63f0100     	blr	x8
 2c0bec4: aa1403f5     	mov	x21, x20
 2c0bec8: aa0003e1     	mov	x1, x0
 2c0becc: f8010ea0     	str	x0, [x21, #0x10]!
 2c0bed0: aa1503e0     	mov	x0, x21
 2c0bed4: 97f72bae     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0bed8: f9402268     	ldr	x8, [x19, #0x40]
 2c0bedc: b4003248     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bee0: f94002a0     	ldr	x0, [x21]
 2c0bee4: b4003200     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bee8: f9400009     	ldr	x9, [x0]
 2c0beec: b9404102     	ldr	w2, [x8, #0x40]
 2c0bef0: 2a1f03e1     	mov	w1, wzr
 2c0bef4: a9578d28     	ldp	x8, x3, [x9, #0x178]
 2c0bef8: d63f0100     	blr	x8
 2c0befc: f94002a0     	ldr	x0, [x21]
 2c0bf00: b4003120     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf04: 52800021     	mov	w1, #0x1                // =1
 2c0bf08: aa1f03e2     	mov	x2, xzr
 2c0bf0c: aa1f03e3     	mov	x3, xzr
 2c0bf10: 97ffa071     	bl	0x2bf40d4 <__start_il2cpp+0x12bac0>
 2c0bf14: f94002a8     	ldr	x8, [x21]
 2c0bf18: b4003068     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf1c: f9402908     	ldr	x8, [x8, #0x50]
 2c0bf20: b4003028     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf24: f9403669     	ldr	x9, [x19, #0x68]
 2c0bf28: b4002fe9     	cbz	x9, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf2c: f9402929     	ldr	x9, [x9, #0x50]
 2c0bf30: b4002fa9     	cbz	x9, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf34: f001b76a     	adrp	x10, 0x62fa000
 2c0bf38: f940514a     	ldr	x10, [x10, #0xa0]
 2c0bf3c: b9403116     	ldr	w22, [x8, #0x30]
 2c0bf40: b9403137     	ldr	w23, [x9, #0x30]
 2c0bf44: f9400140     	ldr	x0, [x10]
 2c0bf48: b940e40a     	ldr	w10, [x0, #0xe4]
 2c0bf4c: 3500004a     	cbnz	w10, 0x2c0bf54 <__start_il2cpp+0x143940>
 2c0bf50: 97f72c03     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0bf54: 2a1603e0     	mov	w0, w22
 2c0bf58: 2a1703e1     	mov	w1, w23
 2c0bf5c: aa1f03e2     	mov	x2, xzr
 2c0bf60: 97ffa5fd     	bl	0x2bf5754 <__start_il2cpp+0x12d140>
 2c0bf64: 360000a0     	tbz	w0, #0x0, 0x2c0bf78 <__start_il2cpp+0x143964>
 2c0bf68: f94002a0     	ldr	x0, [x21]
 2c0bf6c: b4002dc0     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf70: aa1f03e1     	mov	x1, xzr
 2c0bf74: 97ffa1ee     	bl	0x2bf472c <__start_il2cpp+0x12c118>
 2c0bf78: f94002a8     	ldr	x8, [x21]
 2c0bf7c: b4002d48     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf80: f940290a     	ldr	x10, [x8, #0x50]
 2c0bf84: b4002d0a     	cbz	x10, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf88: f940226b     	ldr	x11, [x19, #0x40]
 2c0bf8c: b4002ccb     	cbz	x11, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf90: f9400e76     	ldr	x22, [x19, #0x18]
 2c0bf94: b4002c96     	cbz	x22, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0bf98: f94002c8     	ldr	x8, [x22]
 2c0bf9c: b9403157     	ldr	w23, [x10, #0x30]
 2c0bfa0: b9404178     	ldr	w24, [x11, #0x40]
 2c0bfa4: f9400341     	ldr	x1, [x26]
 2c0bfa8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0bfac: b4000129     	cbz	x9, 0x2c0bfd0 <__start_il2cpp+0x1439bc>
 2c0bfb0: f940590a     	ldr	x10, [x8, #0xb0]
 2c0bfb4: 9100214a     	add	x10, x10, #0x8
 2c0bfb8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0bfbc: eb01017f     	cmp	x11, x1
 2c0bfc0: 540005c0     	b.eq	0x2c0c078 <__start_il2cpp+0x143a64>
 2c0bfc4: f1000529     	subs	x9, x9, #0x1
 2c0bfc8: 9100414a     	add	x10, x10, #0x10
 2c0bfcc: 54ffff61     	b.ne	0x2c0bfb8 <__start_il2cpp+0x1439a4>
 2c0bfd0: aa1603e0     	mov	x0, x22
 2c0bfd4: 52800102     	mov	w2, #0x8                // =8
 2c0bfd8: 97f808e3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0bfdc: 1400002b     	b	0x2c0c088 <__start_il2cpp+0x143a74>
 2c0bfe0: b9400149     	ldr	w9, [x10]
 2c0bfe4: 11000d29     	add	w9, w9, #0x3
 2c0bfe8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0bfec: 9104e100     	add	x0, x8, #0x138
 2c0bff0: a9400c08     	ldp	x8, x3, [x0]
 2c0bff4: aa1403e0     	mov	x0, x20
 2c0bff8: aa1503e1     	mov	x1, x21
 2c0bffc: 52800022     	mov	w2, #0x1                // =1
 2c0c000: d63f0100     	blr	x8
 2c0c004: f9401273     	ldr	x19, [x19, #0x20]
 2c0c008: b40028f3     	cbz	x19, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c00c: b001b76a     	adrp	x10, 0x62f9000
 2c0c010: f9400268     	ldr	x8, [x19]
 2c0c014: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c0c018: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0c01c: f9400141     	ldr	x1, [x10]
 2c0c020: b4000129     	cbz	x9, 0x2c0c044 <__start_il2cpp+0x143a30>
 2c0c024: f940590a     	ldr	x10, [x8, #0xb0]
 2c0c028: 9100214a     	add	x10, x10, #0x8
 2c0c02c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0c030: eb01017f     	cmp	x11, x1
 2c0c034: 54000100     	b.eq	0x2c0c054 <__start_il2cpp+0x143a40>
 2c0c038: f1000529     	subs	x9, x9, #0x1
 2c0c03c: 9100414a     	add	x10, x10, #0x10
 2c0c040: 54ffff61     	b.ne	0x2c0c02c <__start_il2cpp+0x143a18>
 2c0c044: aa1303e0     	mov	x0, x19
 2c0c048: 52800042     	mov	w2, #0x2                // =2
 2c0c04c: 97f808c6     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0c050: 14000005     	b	0x2c0c064 <__start_il2cpp+0x143a50>
 2c0c054: b9400149     	ldr	w9, [x10]
 2c0c058: 11000929     	add	w9, w9, #0x2
 2c0c05c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0c060: 9104e100     	add	x0, x8, #0x138
 2c0c064: a9400808     	ldp	x8, x2, [x0]
 2c0c068: aa1303e0     	mov	x0, x19
 2c0c06c: aa1f03e1     	mov	x1, xzr
 2c0c070: d63f0100     	blr	x8
 2c0c074: 14000125     	b	0x2c0c508 <__start_il2cpp+0x143ef4>
 2c0c078: b9400149     	ldr	w9, [x10]
 2c0c07c: 11002129     	add	w9, w9, #0x8
 2c0c080: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0c084: 9104e100     	add	x0, x8, #0x138
 2c0c088: a9400c08     	ldp	x8, x3, [x0]
 2c0c08c: aa1603e0     	mov	x0, x22
 2c0c090: 2a1703e1     	mov	w1, w23
 2c0c094: 2a1803e2     	mov	w2, w24
 2c0c098: d63f0100     	blr	x8
 2c0c09c: f9402268     	ldr	x8, [x19, #0x40]
 2c0c0a0: b4002428     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c0a4: 3940d109     	ldrb	w9, [x8, #0x34]
 2c0c0a8: f9403668     	ldr	x8, [x19, #0x68]
 2c0c0ac: 340007c9     	cbz	w9, 0x2c0c1a4 <__start_il2cpp+0x143b90>
 2c0c0b0: b40023a8     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c0b4: f9402d00     	ldr	x0, [x8, #0x58]
 2c0c0b8: b4002360     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c0bc: aa1f03e1     	mov	x1, xzr
 2c0c0c0: 52800022     	mov	w2, #0x1                // =1
 2c0c0c4: aa1f03e3     	mov	x3, xzr
 2c0c0c8: 97fe4e11     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0c0cc: f9403668     	ldr	x8, [x19, #0x68]
 2c0c0d0: b40022a8     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c0d4: f9402909     	ldr	x9, [x8, #0x50]
 2c0c0d8: b4002269     	cbz	x9, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c0dc: 9001b739     	adrp	x25, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0c0e0: 910013e1     	add	x1, sp, #0x4
 2c0c0e4: f9470f39     	ldr	x25, [x25, #0xe18]
 2c0c0e8: b9403129     	ldr	w9, [x9, #0x30]
 2c0c0ec: f9401276     	ldr	x22, [x19, #0x20]
 2c0c0f0: f9402d17     	ldr	x23, [x8, #0x58]
 2c0c0f4: f9402720     	ldr	x0, [x25, #0x48]
 2c0c0f8: b90007e9     	str	w9, [sp, #0x4]
 2c0c0fc: 97f72b9a     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0c100: f9403668     	ldr	x8, [x19, #0x68]
 2c0c104: b4002108     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c108: aa0003f8     	mov	x24, x0
 2c0c10c: b9404508     	ldr	w8, [x8, #0x44]
 2c0c110: f9402720     	ldr	x0, [x25, #0x48]
 2c0c114: 910003e1     	mov	x1, sp
 2c0c118: b90003e8     	str	w8, [sp]
 2c0c11c: 97f72b92     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0c120: b001b788     	adrp	x8, 0x62fd000
 2c0c124: aa0003e2     	mov	x2, x0
 2c0c128: aa1803e1     	mov	x1, x24
 2c0c12c: f9400d08     	ldr	x8, [x8, #0x18]
 2c0c130: aa1f03e3     	mov	x3, xzr
 2c0c134: f9400108     	ldr	x8, [x8]
 2c0c138: aa0803e0     	mov	x0, x8
 2c0c13c: 948dab6e     	bl	0x4f76ef4 <__start_il2cpp+0x24ae8e0>
 2c0c140: f9400268     	ldr	x8, [x19]
 2c0c144: aa0003f8     	mov	x24, x0
 2c0c148: aa1303e0     	mov	x0, x19
 2c0c14c: a95c8509     	ldp	x9, x1, [x8, #0x1c8]
 2c0c150: d63f0120     	blr	x9
 2c0c154: b4001e96     	cbz	x22, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c158: b001b76a     	adrp	x10, 0x62f9000
 2c0c15c: f94002c8     	ldr	x8, [x22]
 2c0c160: 2a0003f9     	mov	w25, w0
 2c0c164: f9476d4a     	ldr	x10, [x10, #0xed8]
 2c0c168: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0c16c: f9400141     	ldr	x1, [x10]
 2c0c170: b4000129     	cbz	x9, 0x2c0c194 <__start_il2cpp+0x143b80>
 2c0c174: f940590a     	ldr	x10, [x8, #0xb0]
 2c0c178: 9100214a     	add	x10, x10, #0x8
 2c0c17c: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0c180: eb01017f     	cmp	x11, x1
 2c0c184: 54000480     	b.eq	0x2c0c214 <__start_il2cpp+0x143c00>
 2c0c188: f1000529     	subs	x9, x9, #0x1
 2c0c18c: 9100414a     	add	x10, x10, #0x10
 2c0c190: 54ffff61     	b.ne	0x2c0c17c <__start_il2cpp+0x143b68>
 2c0c194: aa1603e0     	mov	x0, x22
 2c0c198: 52800122     	mov	w2, #0x9                // =9
 2c0c19c: 97f80872     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0c1a0: 14000021     	b	0x2c0c224 <__start_il2cpp+0x143c10>
 2c0c1a4: b4001c08     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c1a8: f9402d00     	ldr	x0, [x8, #0x58]
 2c0c1ac: b4001bc0     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c1b0: f94002a1     	ldr	x1, [x21]
 2c0c1b4: 52800022     	mov	w2, #0x1                // =1
 2c0c1b8: aa1f03e3     	mov	x3, xzr
 2c0c1bc: 97fe4dd4     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0c1c0: f94002a1     	ldr	x1, [x21]
 2c0c1c4: f9404e74     	ldr	x20, [x19, #0x98]
 2c0c1c8: 910063e0     	add	x0, sp, #0x18
 2c0c1cc: f9000fe1     	str	x1, [sp, #0x18]
 2c0c1d0: 97f72aef     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c1d4: b4001a94     	cbz	x20, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c1d8: d001b768     	adrp	x8, 0x62fa000
 2c0c1dc: aa1403e0     	mov	x0, x20
 2c0c1e0: f9406d08     	ldr	x8, [x8, #0xd8]
 2c0c1e4: f9400fe1     	ldr	x1, [sp, #0x18]
 2c0c1e8: f9400102     	ldr	x2, [x8]
 2c0c1ec: 94285c4a     	bl	0x3623314 <__start_il2cpp+0xb5ad00>
 2c0c1f0: f94002a0     	ldr	x0, [x21]
 2c0c1f4: b4001980     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c1f8: aa1f03e1     	mov	x1, xzr
 2c0c1fc: 94bcce0c     	bl	0x5b3fa2c <__start_il2cpp+0x3077418>
 2c0c200: b4001920     	cbz	x0, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c204: 52800021     	mov	w1, #0x1                // =1
 2c0c208: aa1f03e2     	mov	x2, xzr
 2c0c20c: 94bce05b     	bl	0x5b44378 <__start_il2cpp+0x307bd64>
 2c0c210: 1400008a     	b	0x2c0c438 <__start_il2cpp+0x143e24>
 2c0c214: b9400149     	ldr	w9, [x10]
 2c0c218: 11002529     	add	w9, w9, #0x9
 2c0c21c: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0c220: 9104e100     	add	x0, x8, #0x138
 2c0c224: a9401008     	ldp	x8, x4, [x0]
 2c0c228: aa1603e0     	mov	x0, x22
 2c0c22c: aa1703e1     	mov	x1, x23
 2c0c230: aa1803e2     	mov	x2, x24
 2c0c234: 2a1903e3     	mov	w3, w25
 2c0c238: d63f0100     	blr	x8
 2c0c23c: f9400368     	ldr	x8, [x27]
 2c0c240: aa0003f6     	mov	x22, x0
 2c0c244: b940e509     	ldr	w9, [x8, #0xe4]
 2c0c248: 35000069     	cbnz	w9, 0x2c0c254 <__start_il2cpp+0x143c40>
 2c0c24c: aa0803e0     	mov	x0, x8
 2c0c250: 97f72b43     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0c254: aa1603e0     	mov	x0, x22
 2c0c258: aa1f03e1     	mov	x1, xzr
 2c0c25c: aa1f03e2     	mov	x2, xzr
 2c0c260: 94bcdadf     	bl	0x5b42ddc <__start_il2cpp+0x307a7c8>
 2c0c264: 37000080     	tbnz	w0, #0x0, 0x2c0c274 <__start_il2cpp+0x143c60>
 2c0c268: f9403668     	ldr	x8, [x19, #0x68]
 2c0c26c: b40015c8     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c270: f9402d16     	ldr	x22, [x8, #0x58]
 2c0c274: b4001596     	cbz	x22, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c278: f94002a1     	ldr	x1, [x21]
 2c0c27c: aa1603e0     	mov	x0, x22
 2c0c280: 2a1f03e2     	mov	w2, wzr
 2c0c284: aa1f03e3     	mov	x3, xzr
 2c0c288: 3900b2df     	strb	wzr, [x22, #0x2c]
 2c0c28c: 97fe4da0     	bl	0x2b9f90c <__start_il2cpp+0xd72f8>
 2c0c290: f94002aa     	ldr	x10, [x21]
 2c0c294: b400148a     	cbz	x10, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c298: f940294b     	ldr	x11, [x10, #0x50]
 2c0c29c: b400144b     	cbz	x11, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c2a0: f9400e77     	ldr	x23, [x19, #0x18]
 2c0c2a4: b4001417     	cbz	x23, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c2a8: f94002e8     	ldr	x8, [x23]
 2c0c2ac: b9403178     	ldr	w24, [x11, #0x30]
 2c0c2b0: b9404559     	ldr	w25, [x10, #0x44]
 2c0c2b4: f9400341     	ldr	x1, [x26]
 2c0c2b8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0c2bc: b4000129     	cbz	x9, 0x2c0c2e0 <__start_il2cpp+0x143ccc>
 2c0c2c0: f940590a     	ldr	x10, [x8, #0xb0]
 2c0c2c4: 9100214a     	add	x10, x10, #0x8
 2c0c2c8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0c2cc: eb01017f     	cmp	x11, x1
 2c0c2d0: 54000100     	b.eq	0x2c0c2f0 <__start_il2cpp+0x143cdc>
 2c0c2d4: f1000529     	subs	x9, x9, #0x1
 2c0c2d8: 9100414a     	add	x10, x10, #0x10
 2c0c2dc: 54ffff61     	b.ne	0x2c0c2c8 <__start_il2cpp+0x143cb4>
 2c0c2e0: aa1703e0     	mov	x0, x23
 2c0c2e4: 52800102     	mov	w2, #0x8                // =8
 2c0c2e8: 97f8081f     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0c2ec: 14000005     	b	0x2c0c300 <__start_il2cpp+0x143cec>
 2c0c2f0: b9400149     	ldr	w9, [x10]
 2c0c2f4: 11002129     	add	w9, w9, #0x8
 2c0c2f8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0c2fc: 9104e100     	add	x0, x8, #0x138
 2c0c300: a9400c08     	ldp	x8, x3, [x0]
 2c0c304: aa1703e0     	mov	x0, x23
 2c0c308: 2a1803e1     	mov	w1, w24
 2c0c30c: 2a1903e2     	mov	w2, w25
 2c0c310: d63f0100     	blr	x8
 2c0c314: f9404e77     	ldr	x23, [x19, #0x98]
 2c0c318: 910083e0     	add	x0, sp, #0x20
 2c0c31c: aa1f03e1     	mov	x1, xzr
 2c0c320: a9027fff     	stp	xzr, xzr, [sp, #0x20]
 2c0c324: 910083f8     	add	x24, sp, #0x20
 2c0c328: 97f72a99     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c32c: f94002a1     	ldr	x1, [x21]
 2c0c330: 91002300     	add	x0, x24, #0x8
 2c0c334: f90017e1     	str	x1, [sp, #0x28]
 2c0c338: 97f72a95     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c33c: b4000f57     	cbz	x23, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c340: b001b788     	adrp	x8, 0x62fd000
 2c0c344: aa1703e0     	mov	x0, x23
 2c0c348: f9403108     	ldr	x8, [x8, #0x60]
 2c0c34c: a9420be1     	ldp	x1, x2, [sp, #0x20]
 2c0c350: f9400103     	ldr	x3, [x8]
 2c0c354: 94285c6e     	bl	0x362350c <__start_il2cpp+0xb5aef8>
 2c0c358: 9001b788     	adrp	x8, 0x62fc000
 2c0c35c: f9443908     	ldr	x8, [x8, #0x870]
 2c0c360: f9400100     	ldr	x0, [x8]
 2c0c364: 97f72b45     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0c368: aa1f03e1     	mov	x1, xzr
 2c0c36c: aa0003f7     	mov	x23, x0
 2c0c370: 97ffb47f     	bl	0x2bf956c <__start_il2cpp+0x130f58>
 2c0c374: b001b739     	adrp	x25, 0x62f1000
 2c0c378: f9433f39     	ldr	x25, [x25, #0x678]
 2c0c37c: f9400320     	ldr	x0, [x25]
 2c0c380: 97f72b3e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0c384: b001b788     	adrp	x8, 0x62fd000
 2c0c388: aa1303e1     	mov	x1, x19
 2c0c38c: aa1f03e3     	mov	x3, xzr
 2c0c390: f9403d08     	ldr	x8, [x8, #0x78]
 2c0c394: aa0003f8     	mov	x24, x0
 2c0c398: f9400102     	ldr	x2, [x8]
 2c0c39c: 940b76d3     	bl	0x2ee9ee8 <__start_il2cpp+0x4218d4>
 2c0c3a0: b4000c37     	cbz	x23, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c3a4: aa1703e0     	mov	x0, x23
 2c0c3a8: aa1803e1     	mov	x1, x24
 2c0c3ac: f8030c18     	str	x24, [x0, #0x30]!
 2c0c3b0: 97f72a77     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c3b4: f9400320     	ldr	x0, [x25]
 2c0c3b8: 97f72b30     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0c3bc: b001b788     	adrp	x8, 0x62fd000
 2c0c3c0: aa1403e1     	mov	x1, x20
 2c0c3c4: aa1f03e3     	mov	x3, xzr
 2c0c3c8: f9404108     	ldr	x8, [x8, #0x80]
 2c0c3cc: aa0003f8     	mov	x24, x0
 2c0c3d0: f9400102     	ldr	x2, [x8]
 2c0c3d4: 940b76c5     	bl	0x2ee9ee8 <__start_il2cpp+0x4218d4>
 2c0c3d8: aa1703e0     	mov	x0, x23
 2c0c3dc: aa1803e1     	mov	x1, x24
 2c0c3e0: f8028c18     	str	x24, [x0, #0x28]!
 2c0c3e4: 97f72a6a     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c3e8: b001b774     	adrp	x20, 0x62f9000
 2c0c3ec: f9474a94     	ldr	x20, [x20, #0xe90]
 2c0c3f0: f9400280     	ldr	x0, [x20]
 2c0c3f4: b940e408     	ldr	w8, [x0, #0xe4]
 2c0c3f8: 35000068     	cbnz	w8, 0x2c0c404 <__start_il2cpp+0x143df0>
 2c0c3fc: 97f72ad8     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0c400: f9400280     	ldr	x0, [x20]
 2c0c404: f9403668     	ldr	x8, [x19, #0x68]
 2c0c408: b40008e8     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c40c: f9405c09     	ldr	x9, [x0, #0xb8]
 2c0c410: f9401529     	ldr	x9, [x9, #0x28]
 2c0c414: b4000889     	cbz	x9, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c418: f94002a1     	ldr	x1, [x21]
 2c0c41c: f9402d03     	ldr	x3, [x8, #0x58]
 2c0c420: aa1603e2     	mov	x2, x22
 2c0c424: f9400d28     	ldr	x8, [x9, #0x18]
 2c0c428: f9402120     	ldr	x0, [x9, #0x40]
 2c0c42c: aa1703e4     	mov	x4, x23
 2c0c430: f9401525     	ldr	x5, [x9, #0x28]
 2c0c434: d63f0100     	blr	x8
 2c0c438: f9403661     	ldr	x1, [x19, #0x68]
 2c0c43c: f9404e74     	ldr	x20, [x19, #0x98]
 2c0c440: a900ffff     	stp	xzr, xzr, [sp, #0x8]
 2c0c444: b4000701     	cbz	x1, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c448: f9402828     	ldr	x8, [x1, #0x50]
 2c0c44c: b40006c8     	cbz	x8, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c450: b9403108     	ldr	w8, [x8, #0x30]
 2c0c454: b9404429     	ldr	w9, [x1, #0x44]
 2c0c458: f9000be1     	str	x1, [sp, #0x10]
 2c0c45c: 290127e8     	stp	w8, w9, [sp, #0x8]
 2c0c460: 910023e8     	add	x8, sp, #0x8
 2c0c464: 91002100     	add	x0, x8, #0x8
 2c0c468: 97f72a49     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c46c: b40005d4     	cbz	x20, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c470: d001b768     	adrp	x8, 0x62fa000
 2c0c474: aa1403e0     	mov	x0, x20
 2c0c478: f941e108     	ldr	x8, [x8, #0x3c0]
 2c0c47c: a9408be1     	ldp	x1, x2, [sp, #0x8]
 2c0c480: f9400103     	ldr	x3, [x8]
 2c0c484: 94285c83     	bl	0x3623690 <__start_il2cpp+0xb5b07c>
 2c0c488: f940226a     	ldr	x10, [x19, #0x40]
 2c0c48c: b40004ca     	cbz	x10, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c490: f9400e74     	ldr	x20, [x19, #0x18]
 2c0c494: b4000494     	cbz	x20, 0x2c0c524 <__start_il2cpp+0x143f10>
 2c0c498: f9400288     	ldr	x8, [x20]
 2c0c49c: f9403673     	ldr	x19, [x19, #0x68]
 2c0c4a0: 3940d155     	ldrb	w21, [x10, #0x34]
 2c0c4a4: f9400341     	ldr	x1, [x26]
 2c0c4a8: 79425d09     	ldrh	w9, [x8, #0x12e]
 2c0c4ac: b4000129     	cbz	x9, 0x2c0c4d0 <__start_il2cpp+0x143ebc>
 2c0c4b0: f940590a     	ldr	x10, [x8, #0xb0]
 2c0c4b4: 9100214a     	add	x10, x10, #0x8
 2c0c4b8: f85f814b     	ldur	x11, [x10, #-0x8]
 2c0c4bc: eb01017f     	cmp	x11, x1
 2c0c4c0: 54000100     	b.eq	0x2c0c4e0 <__start_il2cpp+0x143ecc>
 2c0c4c4: f1000529     	subs	x9, x9, #0x1
 2c0c4c8: 9100414a     	add	x10, x10, #0x10
 2c0c4cc: 54ffff61     	b.ne	0x2c0c4b8 <__start_il2cpp+0x143ea4>
 2c0c4d0: aa1403e0     	mov	x0, x20
 2c0c4d4: 52800062     	mov	w2, #0x3                // =3
 2c0c4d8: 97f807a3     	bl	0x2a0e364 <JNI_OnUnload+0xe514>
 2c0c4dc: 14000005     	b	0x2c0c4f0 <__start_il2cpp+0x143edc>
 2c0c4e0: b9400149     	ldr	w9, [x10]
 2c0c4e4: 11000d29     	add	w9, w9, #0x3
 2c0c4e8: 8b29d108     	add	x8, x8, w9, sxtw #4
 2c0c4ec: 9104e100     	add	x0, x8, #0x138
 2c0c4f0: a9400c08     	ldp	x8, x3, [x0]
 2c0c4f4: 710002bf     	cmp	w21, #0x0
 2c0c4f8: 1a9f07e2     	cset	w2, ne
 2c0c4fc: aa1403e0     	mov	x0, x20
 2c0c500: aa1303e1     	mov	x1, x19
 2c0c504: d63f0100     	blr	x8
 2c0c508: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2c0c50c: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2c0c510: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2c0c514: a94467fa     	ldp	x26, x25, [sp, #0x40]
 2c0c518: a9436ffe     	ldp	x30, x27, [sp, #0x30]
 2c0c51c: 910203ff     	add	sp, sp, #0x80
 2c0c520: d65f03c0     	ret
 2c0c524: 97f72ad9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void OnRechargeFailed()
# VA 0x2c0c52c .. 0x2c0c530 (next mapped method entry)
 2c0c52c: d65f03c0     	ret

# ItemProducer :: System.Void StopUpdateRechargeTimeCoroutine()
# VA 0x2c0c530 .. 0x2c0c570 (next mapped method entry)
 2c0c530: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2c0c534: aa0003f3     	mov	x19, x0
 2c0c538: f84a8e61     	ldr	x1, [x19, #0xa8]!
 2c0c53c: b4000141     	cbz	x1, 0x2c0c564 <__start_il2cpp+0x143f50>
 2c0c540: f9403c00     	ldr	x0, [x0, #0x78]
 2c0c544: b4000140     	cbz	x0, 0x2c0c56c <__start_il2cpp+0x143f58>
 2c0c548: aa1f03e2     	mov	x2, xzr
 2c0c54c: 94bceb92     	bl	0x5b47394 <__start_il2cpp+0x307ed80>
 2c0c550: aa1303e0     	mov	x0, x19
 2c0c554: aa1f03e1     	mov	x1, xzr
 2c0c558: f900027f     	str	xzr, [x19]
 2c0c55c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0c560: 17f72a0b     	b	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c564: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2c0c568: d65f03c0     	ret
 2c0c56c: 97f72ac7     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: ItemToProduce GetItemToProduce()
# VA 0x2c0c594 .. 0x2c0c728 (next mapped method entry)
 2c0c594: a9bc67fe     	stp	x30, x25, [sp, #-0x40]!
 2c0c598: a9015ff8     	stp	x24, x23, [sp, #0x10]
 2c0c59c: a90257f6     	stp	x22, x21, [sp, #0x20]
 2c0c5a0: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2c0c5a4: d001d834     	adrp	x20, 0x6712000
 2c0c5a8: aa0003f3     	mov	x19, x0
 2c0c5ac: 396f7288     	ldrb	w8, [x20, #0xbdc]
 2c0c5b0: 37000308     	tbnz	w8, #0x0, 0x2c0c610 <__start_il2cpp+0x143ffc>
 2c0c5b4: b001b780     	adrp	x0, 0x62fd000
 2c0c5b8: f9404800     	ldr	x0, [x0, #0x90]
 2c0c5bc: 97f72a09     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c5c0: b001b780     	adrp	x0, 0x62fd000
 2c0c5c4: f9404c00     	ldr	x0, [x0, #0x98]
 2c0c5c8: 97f72a06     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c5cc: b001b780     	adrp	x0, 0x62fd000
 2c0c5d0: f9405000     	ldr	x0, [x0, #0xa0]
 2c0c5d4: 97f72a03     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c5d8: b001b780     	adrp	x0, 0x62fd000
 2c0c5dc: f9405400     	ldr	x0, [x0, #0xa8]
 2c0c5e0: 97f72a00     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c5e4: b001b780     	adrp	x0, 0x62fd000
 2c0c5e8: f9405800     	ldr	x0, [x0, #0xb0]
 2c0c5ec: 97f729fd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c5f0: b001b780     	adrp	x0, 0x62fd000
 2c0c5f4: f9405c00     	ldr	x0, [x0, #0xb8]
 2c0c5f8: 97f729fa     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c5fc: b001b780     	adrp	x0, 0x62fd000
 2c0c600: f9406000     	ldr	x0, [x0, #0xc0]
 2c0c604: 97f729f7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c608: 52800028     	mov	w8, #0x1                // =1
 2c0c60c: 392f7288     	strb	w8, [x20, #0xbdc]
 2c0c610: f9402268     	ldr	x8, [x19, #0x40]
 2c0c614: b4000888     	cbz	x8, 0x2c0c724 <__start_il2cpp+0x144110>
 2c0c618: b001b797     	adrp	x23, 0x62fd000
 2c0c61c: f94062f7     	ldr	x23, [x23, #0xc0]
 2c0c620: f9402514     	ldr	x20, [x8, #0x48]
 2c0c624: f94002e0     	ldr	x0, [x23]
 2c0c628: b940e409     	ldr	w9, [x0, #0xe4]
 2c0c62c: 35000069     	cbnz	w9, 0x2c0c638 <__start_il2cpp+0x144024>
 2c0c630: 97f72a4b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0c634: f94002e0     	ldr	x0, [x23]
 2c0c638: f9405c08     	ldr	x8, [x0, #0xb8]
 2c0c63c: b001b799     	adrp	x25, 0x62fd000
 2c0c640: b001b798     	adrp	x24, 0x62fd000
 2c0c644: f9404b39     	ldr	x25, [x25, #0x90]
 2c0c648: f9400515     	ldr	x21, [x8, #0x8]
 2c0c64c: f9404f18     	ldr	x24, [x24, #0x98]
 2c0c650: b50002f5     	cbnz	x21, 0x2c0c6ac <__start_il2cpp+0x144098>
 2c0c654: b940e409     	ldr	w9, [x0, #0xe4]
 2c0c658: 35000089     	cbnz	w9, 0x2c0c668 <__start_il2cpp+0x144054>
 2c0c65c: 97f72a40     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0c660: f94002e8     	ldr	x8, [x23]
 2c0c664: f9405d08     	ldr	x8, [x8, #0xb8]
 2c0c668: b001b789     	adrp	x9, 0x62fd000
 2c0c66c: f9405129     	ldr	x9, [x9, #0xa0]
 2c0c670: f9400116     	ldr	x22, [x8]
 2c0c674: f9400120     	ldr	x0, [x9]
 2c0c678: 97f72a80     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0c67c: b001b788     	adrp	x8, 0x62fd000
 2c0c680: aa1603e1     	mov	x1, x22
 2c0c684: aa1f03e3     	mov	x3, xzr
 2c0c688: f9405d08     	ldr	x8, [x8, #0xb8]
 2c0c68c: aa0003f5     	mov	x21, x0
 2c0c690: f9400102     	ldr	x2, [x8]
 2c0c694: 9482acfb     	bl	0x4cb7a80 <__start_il2cpp+0x21ef46c>
 2c0c698: f94002e8     	ldr	x8, [x23]
 2c0c69c: aa1503e1     	mov	x1, x21
 2c0c6a0: f9405d00     	ldr	x0, [x8, #0xb8]
 2c0c6a4: f8008c15     	str	x21, [x0, #0x8]!
 2c0c6a8: 97f729b9     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c6ac: f9400322     	ldr	x2, [x25]
 2c0c6b0: aa1403e0     	mov	x0, x20
 2c0c6b4: aa1503e1     	mov	x1, x21
 2c0c6b8: 9420be52     	bl	0x343c000 <__start_il2cpp+0x9739ec>
 2c0c6bc: f9400301     	ldr	x1, [x24]
 2c0c6c0: 9420ff22     	bl	0x344c348 <__start_il2cpp+0x983d34>
 2c0c6c4: f9402268     	ldr	x8, [x19, #0x40]
 2c0c6c8: b40002e8     	cbz	x8, 0x2c0c724 <__start_il2cpp+0x144110>
 2c0c6cc: 39411508     	ldrb	w8, [x8, #0x45]
 2c0c6d0: 34000148     	cbz	w8, 0x2c0c6f8 <__start_il2cpp+0x1440e4>
 2c0c6d4: b001b788     	adrp	x8, 0x62fd000
 2c0c6d8: aa1403e1     	mov	x1, x20
 2c0c6dc: f9405908     	ldr	x8, [x8, #0xb0]
 2c0c6e0: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0c6e4: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c0c6e8: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c0c6ec: f9400102     	ldr	x2, [x8]
 2c0c6f0: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2c0c6f4: 1423fce0     	b	0x350ba74 <__start_il2cpp+0xa43460>
 2c0c6f8: b4000174     	cbz	x20, 0x2c0c724 <__start_il2cpp+0x144110>
 2c0c6fc: b001b788     	adrp	x8, 0x62fd000
 2c0c700: aa1403e0     	mov	x0, x20
 2c0c704: 2a1f03e1     	mov	w1, wzr
 2c0c708: f9405508     	ldr	x8, [x8, #0xa8]
 2c0c70c: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2c0c710: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2c0c714: a9415ff8     	ldp	x24, x23, [sp, #0x10]
 2c0c718: f9400102     	ldr	x2, [x8]
 2c0c71c: a8c467fe     	ldp	x30, x25, [sp], #0x40
 2c0c720: 143c7110     	b	0x3b28b60 <__start_il2cpp+0x106054c>
 2c0c724: 97f72a59     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void TestProduce(System.Int32 sampleSize)
# VA 0x2c0c728 .. 0x2c0cb8c (next mapped method entry)
 2c0c728: d10203ff     	sub	sp, sp, #0x80
 2c0c72c: fd000be8     	str	d8, [sp, #0x10]
 2c0c730: a9027bfd     	stp	x29, x30, [sp, #0x20]
 2c0c734: a9036ffc     	stp	x28, x27, [sp, #0x30]
 2c0c738: a90467fa     	stp	x26, x25, [sp, #0x40]
 2c0c73c: a9055ff8     	stp	x24, x23, [sp, #0x50]
 2c0c740: a90657f6     	stp	x22, x21, [sp, #0x60]
 2c0c744: a9074ff4     	stp	x20, x19, [sp, #0x70]
 2c0c748: d001d833     	adrp	x19, 0x6712000
 2c0c74c: aa0003f6     	mov	x22, x0
 2c0c750: b90007e1     	str	w1, [sp, #0x4]
 2c0c754: 396f7668     	ldrb	w8, [x19, #0xbdd]
 2c0c758: 370004e8     	tbnz	w8, #0x0, 0x2c0c7f4 <__start_il2cpp+0x1441e0>
 2c0c75c: b001b780     	adrp	x0, 0x62fd000
 2c0c760: f9406400     	ldr	x0, [x0, #0xc8]
 2c0c764: 97f7299f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c768: b001b780     	adrp	x0, 0x62fd000
 2c0c76c: f9400800     	ldr	x0, [x0, #0x10]
 2c0c770: 97f7299c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c774: b001b780     	adrp	x0, 0x62fd000
 2c0c778: f9405400     	ldr	x0, [x0, #0xa8]
 2c0c77c: 97f72999     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c780: d001b740     	adrp	x0, 0x62f6000
 2c0c784: f9400c00     	ldr	x0, [x0, #0x18]
 2c0c788: 97f72996     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c78c: b001b720     	adrp	x0, 0x62f1000
 2c0c790: f9413c00     	ldr	x0, [x0, #0x278]
 2c0c794: 97f72993     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c798: b001b780     	adrp	x0, 0x62fd000
 2c0c79c: f9406800     	ldr	x0, [x0, #0xd0]
 2c0c7a0: 97f72990     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7a4: b001b720     	adrp	x0, 0x62f1000
 2c0c7a8: f9427000     	ldr	x0, [x0, #0x4e0]
 2c0c7ac: 97f7298d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7b0: b001b780     	adrp	x0, 0x62fd000
 2c0c7b4: f9406c00     	ldr	x0, [x0, #0xd8]
 2c0c7b8: 97f7298a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7bc: b001b780     	adrp	x0, 0x62fd000
 2c0c7c0: f9407000     	ldr	x0, [x0, #0xe0]
 2c0c7c4: 97f72987     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7c8: b001b780     	adrp	x0, 0x62fd000
 2c0c7cc: f9407400     	ldr	x0, [x0, #0xe8]
 2c0c7d0: 97f72984     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7d4: b001b720     	adrp	x0, 0x62f1000
 2c0c7d8: f940d800     	ldr	x0, [x0, #0x1b0]
 2c0c7dc: 97f72981     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7e0: b001b780     	adrp	x0, 0x62fd000
 2c0c7e4: f9407800     	ldr	x0, [x0, #0xf0]
 2c0c7e8: 97f7297e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0c7ec: 52800028     	mov	w8, #0x1                // =1
 2c0c7f0: 392f7668     	strb	w8, [x19, #0xbdd]
 2c0c7f4: f94022c8     	ldr	x8, [x22, #0x40]
 2c0c7f8: b4001c08     	cbz	x8, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c7fc: f9402514     	ldr	x20, [x8, #0x48]
 2c0c800: b94007f3     	ldr	w19, [sp, #0x4]
 2c0c804: b4001bb4     	cbz	x20, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c808: b001b728     	adrp	x8, 0x62f1000
 2c0c80c: f9427108     	ldr	x8, [x8, #0x4e0]
 2c0c810: b9401a81     	ldr	w1, [x20, #0x18]
 2c0c814: f9400100     	ldr	x0, [x8]
 2c0c818: 97f729ad     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2c0c81c: 7100067f     	cmp	w19, #0x1
 2c0c820: aa0003f5     	mov	x21, x0
 2c0c824: 540005cb     	b.lt	0x2c0c8dc <__start_il2cpp+0x1442c8>
 2c0c828: b001b799     	adrp	x25, 0x62fd000
 2c0c82c: b001b79a     	adrp	x26, 0x62fd000
 2c0c830: b001b79b     	adrp	x27, 0x62fd000
 2c0c834: 1e2e1008     	fmov	s8, #1.00000000
 2c0c838: b001b79c     	adrp	x28, 0x62fd000
 2c0c83c: f9407339     	ldr	x25, [x25, #0xe0]
 2c0c840: f9406b5a     	ldr	x26, [x26, #0xd0]
 2c0c844: f9406f7b     	ldr	x27, [x27, #0xd8]
 2c0c848: f940679c     	ldr	x28, [x28, #0xc8]
 2c0c84c: b94007f3     	ldr	w19, [sp, #0x4]
 2c0c850: 910082bd     	add	x29, x21, #0x20
 2c0c854: f9400320     	ldr	x0, [x25]
 2c0c858: 97f72a08     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0c85c: aa1f03e1     	mov	x1, xzr
 2c0c860: aa0003f7     	mov	x23, x0
 2c0c864: 94950cb9     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0c868: f94002c8     	ldr	x8, [x22]
 2c0c86c: aa1603e0     	mov	x0, x22
 2c0c870: a95f8509     	ldp	x9, x1, [x8, #0x1f8]
 2c0c874: d63f0120     	blr	x9
 2c0c878: b4001817     	cbz	x23, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c87c: aa0003e1     	mov	x1, x0
 2c0c880: aa1703e0     	mov	x0, x23
 2c0c884: f8010c01     	str	x1, [x0, #0x10]!
 2c0c888: 97f72941     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c88c: f9400340     	ldr	x0, [x26]
 2c0c890: 97f729fa     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0c894: f9400362     	ldr	x2, [x27]
 2c0c898: aa1703e1     	mov	x1, x23
 2c0c89c: aa1f03e3     	mov	x3, xzr
 2c0c8a0: aa0003f8     	mov	x24, x0
 2c0c8a4: 94469a1a     	bl	0x3db310c <__start_il2cpp+0x12eaaf8>
 2c0c8a8: f9400382     	ldr	x2, [x28]
 2c0c8ac: aa1403e0     	mov	x0, x20
 2c0c8b0: aa1803e1     	mov	x1, x24
 2c0c8b4: 943c7374     	bl	0x3b29684 <__start_il2cpp+0x1061070>
 2c0c8b8: b4001615     	cbz	x21, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c8bc: b9401aa8     	ldr	w8, [x21, #0x18]
 2c0c8c0: 6b08001f     	cmp	w0, w8
 2c0c8c4: 540015c2     	b.hs	0x2c0cb7c <__start_il2cpp+0x144568>
 2c0c8c8: bc60dba0     	ldr	s0, [x29, w0, sxtw #2]
 2c0c8cc: 71000673     	subs	w19, w19, #0x1
 2c0c8d0: 1e282800     	fadd	s0, s0, s8
 2c0c8d4: bc20dba0     	str	s0, [x29, w0, sxtw #2]
 2c0c8d8: 54fffbe1     	b.ne	0x2c0c854 <__start_il2cpp+0x144240>
 2c0c8dc: b001b728     	adrp	x8, 0x62f1000
 2c0c8e0: f940d908     	ldr	x8, [x8, #0x1b0]
 2c0c8e4: b9401a89     	ldr	w9, [x20, #0x18]
 2c0c8e8: f9400116     	ldr	x22, [x8]
 2c0c8ec: 7100053f     	cmp	w9, #0x1
 2c0c8f0: 540011ab     	b.lt	0x2c0cb24 <__start_il2cpp+0x144510>
 2c0c8f4: b001b79b     	adrp	x27, 0x62fd000
 2c0c8f8: b001b79c     	adrp	x28, 0x62fd000
 2c0c8fc: 9001b73d     	adrp	x29, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0c900: f940577b     	ldr	x27, [x27, #0xa8]
 2c0c904: b94007f3     	ldr	w19, [sp, #0x4]
 2c0c908: f9407b9c     	ldr	x28, [x28, #0xf0]
 2c0c90c: f9470fbd     	ldr	x29, [x29, #0xe18]
 2c0c910: aa1f03f7     	mov	x23, xzr
 2c0c914: 910082ba     	add	x26, x21, #0x20
 2c0c918: 1e220268     	scvtf	s8, w19
 2c0c91c: b001b728     	adrp	x8, 0x62f1000
 2c0c920: 528000a1     	mov	w1, #0x5                // =5
 2c0c924: f9413d08     	ldr	x8, [x8, #0x278]
 2c0c928: f9400100     	ldr	x0, [x8]
 2c0c92c: 97f72968     	bl	0x29d6ecc <mono_class_get_checked+0x7b4>
 2c0c930: f9400362     	ldr	x2, [x27]
 2c0c934: aa0003f8     	mov	x24, x0
 2c0c938: aa1403e0     	mov	x0, x20
 2c0c93c: 2a1703e1     	mov	w1, w23
 2c0c940: 943c7088     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c0c944: b40011a0     	cbz	x0, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c948: f9400808     	ldr	x8, [x0, #0x10]
 2c0c94c: b4001168     	cbz	x8, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c950: b4001158     	cbz	x24, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c954: f9401519     	ldr	x25, [x8, #0x28]
 2c0c958: b40000d9     	cbz	x25, 0x2c0c970 <__start_il2cpp+0x14435c>
 2c0c95c: f9400308     	ldr	x8, [x24]
 2c0c960: aa1903e0     	mov	x0, x25
 2c0c964: f9402101     	ldr	x1, [x8, #0x40]
 2c0c968: 97f7297e     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c0c96c: b40010a0     	cbz	x0, 0x2c0cb80 <__start_il2cpp+0x14456c>
 2c0c970: b9401b08     	ldr	w8, [x24, #0x18]
 2c0c974: 34001048     	cbz	w8, 0x2c0cb7c <__start_il2cpp+0x144568>
 2c0c978: aa1803e0     	mov	x0, x24
 2c0c97c: aa1903e1     	mov	x1, x25
 2c0c980: f8020c19     	str	x25, [x0, #0x20]!
 2c0c984: 97f72902     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c988: f9400362     	ldr	x2, [x27]
 2c0c98c: aa1403e0     	mov	x0, x20
 2c0c990: 2a1703e1     	mov	w1, w23
 2c0c994: 943c7073     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c0c998: b4000f00     	cbz	x0, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c99c: b9401808     	ldr	w8, [x0, #0x18]
 2c0c9a0: f94027a0     	ldr	x0, [x29, #0x48]
 2c0c9a4: 910073e1     	add	x1, sp, #0x1c
 2c0c9a8: b9001fe8     	str	w8, [sp, #0x1c]
 2c0c9ac: 97f7296e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0c9b0: aa0003f9     	mov	x25, x0
 2c0c9b4: b40000c0     	cbz	x0, 0x2c0c9cc <__start_il2cpp+0x1443b8>
 2c0c9b8: f9400308     	ldr	x8, [x24]
 2c0c9bc: aa1903e0     	mov	x0, x25
 2c0c9c0: f9402101     	ldr	x1, [x8, #0x40]
 2c0c9c4: 97f72967     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c0c9c8: b4000dc0     	cbz	x0, 0x2c0cb80 <__start_il2cpp+0x14456c>
 2c0c9cc: b9401b08     	ldr	w8, [x24, #0x18]
 2c0c9d0: 721f791f     	tst	w8, #0xfffffffe
 2c0c9d4: 54000d40     	b.eq	0x2c0cb7c <__start_il2cpp+0x144568>
 2c0c9d8: aa1803e0     	mov	x0, x24
 2c0c9dc: aa1903e1     	mov	x1, x25
 2c0c9e0: f8028c19     	str	x25, [x0, #0x28]!
 2c0c9e4: 97f728ea     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0c9e8: f9400362     	ldr	x2, [x27]
 2c0c9ec: aa1403e0     	mov	x0, x20
 2c0c9f0: 2a1703e1     	mov	w1, w23
 2c0c9f4: 943c705b     	bl	0x3b28b60 <__start_il2cpp+0x106054c>
 2c0c9f8: b4000c00     	cbz	x0, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0c9fc: bd401c00     	ldr	s0, [x0, #0x1c]
 2c0ca00: f9403fa0     	ldr	x0, [x29, #0x78]
 2c0ca04: 910063e1     	add	x1, sp, #0x18
 2c0ca08: bd001be0     	str	s0, [sp, #0x18]
 2c0ca0c: 97f72956     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0ca10: aa0003f9     	mov	x25, x0
 2c0ca14: b40000c0     	cbz	x0, 0x2c0ca2c <__start_il2cpp+0x144418>
 2c0ca18: f9400308     	ldr	x8, [x24]
 2c0ca1c: aa1903e0     	mov	x0, x25
 2c0ca20: f9402101     	ldr	x1, [x8, #0x40]
 2c0ca24: 97f7294f     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c0ca28: b4000ac0     	cbz	x0, 0x2c0cb80 <__start_il2cpp+0x14456c>
 2c0ca2c: b9401b08     	ldr	w8, [x24, #0x18]
 2c0ca30: 7100091f     	cmp	w8, #0x2
 2c0ca34: 54000a49     	b.ls	0x2c0cb7c <__start_il2cpp+0x144568>
 2c0ca38: aa1803e0     	mov	x0, x24
 2c0ca3c: aa1903e1     	mov	x1, x25
 2c0ca40: f8030c19     	str	x25, [x0, #0x30]!
 2c0ca44: 97f728d2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0ca48: b4000995     	cbz	x21, 0x2c0cb78 <__start_il2cpp+0x144564>
 2c0ca4c: b9401aa8     	ldr	w8, [x21, #0x18]
 2c0ca50: eb0802ff     	cmp	x23, x8
 2c0ca54: 54000942     	b.hs	0x2c0cb7c <__start_il2cpp+0x144568>
 2c0ca58: bc777b40     	ldr	s0, [x26, x23, lsl #2]
 2c0ca5c: f9403fa0     	ldr	x0, [x29, #0x78]
 2c0ca60: 910033e1     	add	x1, sp, #0xc
 2c0ca64: 1e281800     	fdiv	s0, s0, s8
 2c0ca68: bd000fe0     	str	s0, [sp, #0xc]
 2c0ca6c: 97f7293e     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0ca70: aa0003f9     	mov	x25, x0
 2c0ca74: b40000c0     	cbz	x0, 0x2c0ca8c <__start_il2cpp+0x144478>
 2c0ca78: f9400308     	ldr	x8, [x24]
 2c0ca7c: aa1903e0     	mov	x0, x25
 2c0ca80: f9402101     	ldr	x1, [x8, #0x40]
 2c0ca84: 97f72937     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c0ca88: b40007c0     	cbz	x0, 0x2c0cb80 <__start_il2cpp+0x14456c>
 2c0ca8c: b9401b08     	ldr	w8, [x24, #0x18]
 2c0ca90: 721e751f     	tst	w8, #0xfffffffc
 2c0ca94: 54000740     	b.eq	0x2c0cb7c <__start_il2cpp+0x144568>
 2c0ca98: aa1803e0     	mov	x0, x24
 2c0ca9c: aa1903e1     	mov	x1, x25
 2c0caa0: f8038c19     	str	x25, [x0, #0x38]!
 2c0caa4: 97f728ba     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0caa8: f94027a0     	ldr	x0, [x29, #0x48]
 2c0caac: 910023e1     	add	x1, sp, #0x8
 2c0cab0: b9000bf3     	str	w19, [sp, #0x8]
 2c0cab4: 97f7292c     	bl	0x29d6f64 <mono_class_get_checked+0x84c>
 2c0cab8: aa0003f9     	mov	x25, x0
 2c0cabc: b40000c0     	cbz	x0, 0x2c0cad4 <__start_il2cpp+0x1444c0>
 2c0cac0: f9400308     	ldr	x8, [x24]
 2c0cac4: aa1903e0     	mov	x0, x25
 2c0cac8: f9402101     	ldr	x1, [x8, #0x40]
 2c0cacc: 97f72925     	bl	0x29d6f60 <mono_class_get_checked+0x848>
 2c0cad0: b4000580     	cbz	x0, 0x2c0cb80 <__start_il2cpp+0x14456c>
 2c0cad4: b9401b08     	ldr	w8, [x24, #0x18]
 2c0cad8: 7100111f     	cmp	w8, #0x4
 2c0cadc: 54000509     	b.ls	0x2c0cb7c <__start_il2cpp+0x144568>
 2c0cae0: aa1803e0     	mov	x0, x24
 2c0cae4: aa1903e1     	mov	x1, x25
 2c0cae8: f8040c19     	str	x25, [x0, #0x40]!
 2c0caec: 97f728a8     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0caf0: f9400380     	ldr	x0, [x28]
 2c0caf4: aa1803e1     	mov	x1, x24
 2c0caf8: aa1f03e2     	mov	x2, xzr
 2c0cafc: 948da920     	bl	0x4f76f7c <__start_il2cpp+0x24ae968>
 2c0cb00: aa0003e1     	mov	x1, x0
 2c0cb04: aa1603e0     	mov	x0, x22
 2c0cb08: aa1f03e2     	mov	x2, xzr
 2c0cb0c: 948d70a5     	bl	0x4f68da0 <__start_il2cpp+0x24a078c>
 2c0cb10: b9801a88     	ldrsw	x8, [x20, #0x18]
 2c0cb14: 910006f7     	add	x23, x23, #0x1
 2c0cb18: aa0003f6     	mov	x22, x0
 2c0cb1c: eb0802ff     	cmp	x23, x8
 2c0cb20: 54ffefeb     	b.lt	0x2c0c91c <__start_il2cpp+0x144308>
 2c0cb24: d001b748     	adrp	x8, 0x62f6000
 2c0cb28: b001b793     	adrp	x19, 0x62fd000
 2c0cb2c: f9400d08     	ldr	x8, [x8, #0x18]
 2c0cb30: f9400100     	ldr	x0, [x8]
 2c0cb34: b940e408     	ldr	w8, [x0, #0xe4]
 2c0cb38: f9407673     	ldr	x19, [x19, #0xe8]
 2c0cb3c: 35000048     	cbnz	w8, 0x2c0cb44 <__start_il2cpp+0x144530>
 2c0cb40: 97f72907     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0cb44: f9400260     	ldr	x0, [x19]
 2c0cb48: aa1603e1     	mov	x1, x22
 2c0cb4c: aa1f03e2     	mov	x2, xzr
 2c0cb50: 97fd0476     	bl	0x2b4dd28 <__start_il2cpp+0x85714>
 2c0cb54: a9474ff4     	ldp	x20, x19, [sp, #0x70]
 2c0cb58: fd400be8     	ldr	d8, [sp, #0x10]
 2c0cb5c: a94657f6     	ldp	x22, x21, [sp, #0x60]
 2c0cb60: a9455ff8     	ldp	x24, x23, [sp, #0x50]
 2c0cb64: a94467fa     	ldp	x26, x25, [sp, #0x40]
 2c0cb68: a9436ffc     	ldp	x28, x27, [sp, #0x30]
 2c0cb6c: a9427bfd     	ldp	x29, x30, [sp, #0x20]
 2c0cb70: 910203ff     	add	sp, sp, #0x80
 2c0cb74: d65f03c0     	ret
 2c0cb78: 97f72944     	bl	0x29d7088 <mono_class_get_checked+0x970>
 2c0cb7c: 97f72945     	bl	0x29d7090 <mono_class_get_checked+0x978>
 2c0cb80: 97f7294b     	bl	0x29d70ac <mono_class_get_checked+0x994>
 2c0cb84: aa1f03e1     	mov	x1, xzr
 2c0cb88: 97f728f1     	bl	0x29d6f4c <mono_class_get_checked+0x834>

# ItemProducer :: System.Void SetEnergyIconVisibility(System.Boolean visible)
# VA 0x2c0cb9c .. 0x2c0ccb8 (next mapped method entry)
 2c0cb9c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2c0cba0: a90157f6     	stp	x22, x21, [sp, #0x10]
 2c0cba4: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0cba8: d001d835     	adrp	x21, 0x6712000
 2c0cbac: 9001b736     	adrp	x22, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0cbb0: 2a0103f3     	mov	w19, w1
 2c0cbb4: 396f82a8     	ldrb	w8, [x21, #0xbe0]
 2c0cbb8: f9478ed6     	ldr	x22, [x22, #0xf18]
 2c0cbbc: aa0003f4     	mov	x20, x0
 2c0cbc0: 370000c8     	tbnz	w8, #0x0, 0x2c0cbd8 <__start_il2cpp+0x1445c4>
 2c0cbc4: 9001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0cbc8: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0cbcc: 97f72885     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0cbd0: 52800028     	mov	w8, #0x1                // =1
 2c0cbd4: 392f82a8     	strb	w8, [x21, #0xbe0]
 2c0cbd8: f94002c0     	ldr	x0, [x22]
 2c0cbdc: f9403295     	ldr	x21, [x20, #0x60]
 2c0cbe0: b940e408     	ldr	w8, [x0, #0xe4]
 2c0cbe4: 35000048     	cbnz	w8, 0x2c0cbec <__start_il2cpp+0x1445d8>
 2c0cbe8: 97f728dd     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0cbec: aa1503e0     	mov	x0, x21
 2c0cbf0: aa1f03e1     	mov	x1, xzr
 2c0cbf4: 94bcf694     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0cbf8: 360004c0     	tbz	w0, #0x0, 0x2c0cc90 <__start_il2cpp+0x14467c>
 2c0cbfc: 360001b3     	tbz	w19, #0x0, 0x2c0cc30 <__start_il2cpp+0x14461c>
 2c0cc00: 3942e288     	ldrb	w8, [x20, #0xb8]
 2c0cc04: 35000468     	cbnz	w8, 0x2c0cc90 <__start_il2cpp+0x14467c>
 2c0cc08: f9403280     	ldr	x0, [x20, #0x60]
 2c0cc0c: 52800028     	mov	w8, #0x1                // =1
 2c0cc10: 3902e288     	strb	w8, [x20, #0xb8]
 2c0cc14: b4000500     	cbz	x0, 0x2c0ccb4 <__start_il2cpp+0x1446a0>
 2c0cc18: aa1f03e1     	mov	x1, xzr
 2c0cc1c: 94bcdcb2     	bl	0x5b43ee4 <__start_il2cpp+0x307b8d0>
 2c0cc20: 52800021     	mov	w1, #0x1                // =1
 2c0cc24: aa1f03e2     	mov	x2, xzr
 2c0cc28: 94038aa5     	bl	0x2cef6bc <__start_il2cpp+0x2270a8>
 2c0cc2c: 14000009     	b	0x2c0cc50 <__start_il2cpp+0x14463c>
 2c0cc30: f9403280     	ldr	x0, [x20, #0x60]
 2c0cc34: 3902e29f     	strb	wzr, [x20, #0xb8]
 2c0cc38: b40003e0     	cbz	x0, 0x2c0ccb4 <__start_il2cpp+0x1446a0>
 2c0cc3c: aa1f03e1     	mov	x1, xzr
 2c0cc40: 94bcdca9     	bl	0x5b43ee4 <__start_il2cpp+0x307b8d0>
 2c0cc44: 52800021     	mov	w1, #0x1                // =1
 2c0cc48: aa1f03e2     	mov	x2, xzr
 2c0cc4c: 94038aed     	bl	0x2cef800 <__start_il2cpp+0x2271ec>
 2c0cc50: f94002c0     	ldr	x0, [x22]
 2c0cc54: f9406295     	ldr	x21, [x20, #0xc0]
 2c0cc58: b940e408     	ldr	w8, [x0, #0xe4]
 2c0cc5c: 35000048     	cbnz	w8, 0x2c0cc64 <__start_il2cpp+0x144650>
 2c0cc60: 97f728bf     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0cc64: aa1503e0     	mov	x0, x21
 2c0cc68: aa1f03e1     	mov	x1, xzr
 2c0cc6c: 94bcf676     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0cc70: 36000100     	tbz	w0, #0x0, 0x2c0cc90 <__start_il2cpp+0x14467c>
 2c0cc74: f9406280     	ldr	x0, [x20, #0xc0]
 2c0cc78: 36000153     	tbz	w19, #0x0, 0x2c0cca0 <__start_il2cpp+0x14468c>
 2c0cc7c: b40001c0     	cbz	x0, 0x2c0ccb4 <__start_il2cpp+0x1446a0>
 2c0cc80: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0cc84: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0cc88: f84307fe     	ldr	x30, [sp], #0x30
 2c0cc8c: 17fff1b6     	b	0x2c09364 <__start_il2cpp+0x140d50>
 2c0cc90: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0cc94: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0cc98: f84307fe     	ldr	x30, [sp], #0x30
 2c0cc9c: d65f03c0     	ret
 2c0cca0: b40000a0     	cbz	x0, 0x2c0ccb4 <__start_il2cpp+0x1446a0>
 2c0cca4: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0cca8: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2c0ccac: f84307fe     	ldr	x30, [sp], #0x30
 2c0ccb0: 17fff25f     	b	0x2c0962c <__start_il2cpp+0x141018>
 2c0ccb4: 97f728f5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Collections.IEnumerator UpdateRechargeTime()
# VA 0x2c0ccdc .. 0x2c0cd48 (next mapped method entry)
 2c0ccdc: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c0cce0: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0cce4: d001d834     	adrp	x20, 0x6712000
 2c0cce8: b001b795     	adrp	x21, 0x62fd000
 2c0ccec: aa0003f3     	mov	x19, x0
 2c0ccf0: 396f8688     	ldrb	w8, [x20, #0xbe1]
 2c0ccf4: f9407eb5     	ldr	x21, [x21, #0xf8]
 2c0ccf8: 370000c8     	tbnz	w8, #0x0, 0x2c0cd10 <__start_il2cpp+0x1446fc>
 2c0ccfc: b001b780     	adrp	x0, 0x62fd000
 2c0cd00: f9407c00     	ldr	x0, [x0, #0xf8]
 2c0cd04: 97f72837     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0cd08: 52800028     	mov	w8, #0x1                // =1
 2c0cd0c: 392f8688     	strb	w8, [x20, #0xbe1]
 2c0cd10: f94002a0     	ldr	x0, [x21]
 2c0cd14: 97f728d9     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2c0cd18: aa1f03e1     	mov	x1, xzr
 2c0cd1c: aa0003f4     	mov	x20, x0
 2c0cd20: 94950b8a     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2c0cd24: aa1403e0     	mov	x0, x20
 2c0cd28: aa1303e1     	mov	x1, x19
 2c0cd2c: b900129f     	str	wzr, [x20, #0x10]
 2c0cd30: f8020c13     	str	x19, [x0, #0x20]!
 2c0cd34: 97f72816     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0cd38: aa1403e0     	mov	x0, x20
 2c0cd3c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0cd40: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0cd44: d65f03c0     	ret

# ItemProducer :: System.Int32 GetRemainingTime()
# VA 0x2c0cd70 .. 0x2c0ce38 (next mapped method entry)
 2c0cd70: d100c3ff     	sub	sp, sp, #0x30
 2c0cd74: a90157fe     	stp	x30, x21, [sp, #0x10]
 2c0cd78: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0cd7c: d001d835     	adrp	x21, 0x6712000
 2c0cd80: d001b734     	adrp	x20, 0x62f2000
 2c0cd84: aa0003f3     	mov	x19, x0
 2c0cd88: 396f8aa8     	ldrb	w8, [x21, #0xbe2]
 2c0cd8c: f940ae94     	ldr	x20, [x20, #0x158]
 2c0cd90: 37000128     	tbnz	w8, #0x0, 0x2c0cdb4 <__start_il2cpp+0x1447a0>
 2c0cd94: d001b720     	adrp	x0, 0x62f2000
 2c0cd98: f940ac00     	ldr	x0, [x0, #0x158]
 2c0cd9c: 97f72811     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0cda0: 9001b740     	adrp	x0, 0x62f4000
 2c0cda4: f940b000     	ldr	x0, [x0, #0x160]
 2c0cda8: 97f7280e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0cdac: 52800028     	mov	w8, #0x1                // =1
 2c0cdb0: 392f8aa8     	strb	w8, [x21, #0xbe2]
 2c0cdb4: f9400280     	ldr	x0, [x20]
 2c0cdb8: 9001b754     	adrp	x20, 0x62f4000
 2c0cdbc: b940e408     	ldr	w8, [x0, #0xe4]
 2c0cdc0: f940b294     	ldr	x20, [x20, #0x160]
 2c0cdc4: f90007ff     	str	xzr, [sp, #0x8]
 2c0cdc8: 35000048     	cbnz	w8, 0x2c0cdd0 <__start_il2cpp+0x1447bc>
 2c0cdcc: 97f72864     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0cdd0: aa1f03e0     	mov	x0, xzr
 2c0cdd4: 94937bec     	bl	0x50ebd84 <__start_il2cpp+0x2623770>
 2c0cdd8: f9402a68     	ldr	x8, [x19, #0x50]
 2c0cddc: aa0003e1     	mov	x1, x0
 2c0cde0: aa1f03e2     	mov	x2, xzr
 2c0cde4: aa0803e0     	mov	x0, x8
 2c0cde8: 949382a7     	bl	0x50ed884 <__start_il2cpp+0x2625270>
 2c0cdec: f9400288     	ldr	x8, [x20]
 2c0cdf0: f90007e0     	str	x0, [sp, #0x8]
 2c0cdf4: b940e509     	ldr	w9, [x8, #0xe4]
 2c0cdf8: 35000069     	cbnz	w9, 0x2c0ce04 <__start_il2cpp+0x1447f0>
 2c0cdfc: aa0803e0     	mov	x0, x8
 2c0ce00: 97f72857     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0ce04: 910023e0     	add	x0, sp, #0x8
 2c0ce08: aa1f03e1     	mov	x1, xzr
 2c0ce0c: 94945c5b     	bl	0x5123f78 <__start_il2cpp+0x265b964>
 2c0ce10: d2effe08     	mov	x8, #0x7ff0000000000000 // =9218868437227405312
 2c0ce14: 1e780009     	fcvtzs	w9, d0
 2c0ce18: 9e670101     	fmov	d1, x8
 2c0ce1c: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0ce20: a94157fe     	ldp	x30, x21, [sp, #0x10]
 2c0ce24: 52b00008     	mov	w8, #-0x80000000        // =-2147483648
 2c0ce28: 1e612000     	fcmp	d0, d1
 2c0ce2c: 1a890100     	csel	w0, w8, w9, eq
 2c0ce30: 9100c3ff     	add	sp, sp, #0x30
 2c0ce34: d65f03c0     	ret

# ItemProducer :: System.Void SpeedUpRecharge()
# VA 0x2c0ce38 .. 0x2c0ce54 (next mapped method entry)
 2c0ce38: 3940d008     	ldrb	w8, [x0, #0x34]
 2c0ce3c: 340000a8     	cbz	w8, 0x2c0ce50 <__start_il2cpp+0x14483c>
 2c0ce40: f9400008     	ldr	x8, [x0]
 2c0ce44: 52800021     	mov	w1, #0x1                // =1
 2c0ce48: a95e8903     	ldp	x3, x2, [x8, #0x1e8]
 2c0ce4c: d61f0060     	br	x3
 2c0ce50: d65f03c0     	ret

# ItemProducer :: System.Void Reset()
# VA 0x2c0ce54 .. 0x2c0ce58 (next mapped method entry)
 2c0ce54: 17fffdb7     	b	0x2c0c530 <__start_il2cpp+0x143f1c>

# ItemProducer :: System.Void OnProducerItemTapped()
# VA 0x2c0ce58 .. 0x2c0ce5c (next mapped method entry)
 2c0ce58: d65f03c0     	ret

# ItemProducer :: System.Void <TryProduce>b__33_0()
# VA 0x2c0ce64 .. 0x2c0cfa8 (next mapped method entry)
 2c0ce64: d100c3ff     	sub	sp, sp, #0x30
 2c0ce68: f9000bfe     	str	x30, [sp, #0x10]
 2c0ce6c: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2c0ce70: d001d834     	adrp	x20, 0x6712000
 2c0ce74: aa0003f3     	mov	x19, x0
 2c0ce78: 396f9688     	ldrb	w8, [x20, #0xbe5]
 2c0ce7c: 370001e8     	tbnz	w8, #0x0, 0x2c0ceb8 <__start_il2cpp+0x1448a4>
 2c0ce80: b001b780     	adrp	x0, 0x62fd000
 2c0ce84: f9408000     	ldr	x0, [x0, #0x100]
 2c0ce88: 97f727d6     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ce8c: 9001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0ce90: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0ce94: 97f727d3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ce98: b001b780     	adrp	x0, 0x62fd000
 2c0ce9c: f9408400     	ldr	x0, [x0, #0x108]
 2c0cea0: 97f727d0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0cea4: b001b780     	adrp	x0, 0x62fd000
 2c0cea8: f9408800     	ldr	x0, [x0, #0x110]
 2c0ceac: 97f727cd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0ceb0: 52800028     	mov	w8, #0x1                // =1
 2c0ceb4: 392f9688     	strb	w8, [x20, #0xbe5]
 2c0ceb8: aa1f03e0     	mov	x0, xzr
 2c0cebc: a9007fff     	stp	xzr, xzr, [sp]
 2c0cec0: 97fea7cc     	bl	0x2bb6df0 <__start_il2cpp+0xee7dc>
 2c0cec4: 37000680     	tbnz	w0, #0x0, 0x2c0cf94 <__start_il2cpp+0x144980>
 2c0cec8: f9405260     	ldr	x0, [x19, #0xa0]
 2c0cecc: b40006c0     	cbz	x0, 0x2c0cfa4 <__start_il2cpp+0x144990>
 2c0ced0: aa1f03e1     	mov	x1, xzr
 2c0ced4: 94020b6a     	bl	0x2c8fc7c <__start_il2cpp+0x1c7668>
 2c0ced8: 71000c1f     	cmp	w0, #0x3
 2c0cedc: 540000ac     	b.gt	0x2c0cef0 <__start_il2cpp+0x1448dc>
 2c0cee0: aa1f03e0     	mov	x0, xzr
 2c0cee4: 97fea376     	bl	0x2bb5cbc <__start_il2cpp+0xed6a8>
 2c0cee8: 7100081f     	cmp	w0, #0x2
 2c0ceec: 5400054b     	b.lt	0x2c0cf94 <__start_il2cpp+0x144980>
 2c0cef0: f9404a68     	ldr	x8, [x19, #0x90]
 2c0cef4: b4000588     	cbz	x8, 0x2c0cfa4 <__start_il2cpp+0x144990>
 2c0cef8: 9001b729     	adrp	x9, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0cefc: f9478d29     	ldr	x9, [x9, #0xf18]
 2c0cf00: f9402914     	ldr	x20, [x8, #0x50]
 2c0cf04: f9400120     	ldr	x0, [x9]
 2c0cf08: b940e409     	ldr	w9, [x0, #0xe4]
 2c0cf0c: 35000049     	cbnz	w9, 0x2c0cf14 <__start_il2cpp+0x144900>
 2c0cf10: 97f72813     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0cf14: aa1403e0     	mov	x0, x20
 2c0cf18: aa1f03e1     	mov	x1, xzr
 2c0cf1c: 94bcf5ca     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0cf20: 360001e0     	tbz	w0, #0x0, 0x2c0cf5c <__start_il2cpp+0x144948>
 2c0cf24: b40001d4     	cbz	x20, 0x2c0cf5c <__start_il2cpp+0x144948>
 2c0cf28: b001b788     	adrp	x8, 0x62fd000
 2c0cf2c: f9408108     	ldr	x8, [x8, #0x100]
 2c0cf30: f9400289     	ldr	x9, [x20]
 2c0cf34: f9400108     	ldr	x8, [x8]
 2c0cf38: 3944c12b     	ldrb	w11, [x9, #0x130]
 2c0cf3c: 3944c10a     	ldrb	w10, [x8, #0x130]
 2c0cf40: 6b0a017f     	cmp	w11, w10
 2c0cf44: 540000c3     	b.lo	0x2c0cf5c <__start_il2cpp+0x144948>
 2c0cf48: f9406529     	ldr	x9, [x9, #0xc8]
 2c0cf4c: 8b0a0d29     	add	x9, x9, x10, lsl #3
 2c0cf50: f85f8129     	ldur	x9, [x9, #-0x8]
 2c0cf54: eb08013f     	cmp	x9, x8
 2c0cf58: 540001e0     	b.eq	0x2c0cf94 <__start_il2cpp+0x144980>
 2c0cf5c: b001b788     	adrp	x8, 0x62fd000
 2c0cf60: 910003e0     	mov	x0, sp
 2c0cf64: f9408908     	ldr	x8, [x8, #0x110]
 2c0cf68: f9404e73     	ldr	x19, [x19, #0x98]
 2c0cf6c: f9400101     	ldr	x1, [x8]
 2c0cf70: a9007fe1     	stp	x1, xzr, [sp]
 2c0cf74: 97f72786     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2c0cf78: b4000173     	cbz	x19, 0x2c0cfa4 <__start_il2cpp+0x144990>
 2c0cf7c: b001b788     	adrp	x8, 0x62fd000
 2c0cf80: aa1303e0     	mov	x0, x19
 2c0cf84: f9408508     	ldr	x8, [x8, #0x108]
 2c0cf88: a9400be1     	ldp	x1, x2, [sp]
 2c0cf8c: f9400103     	ldr	x3, [x8]
 2c0cf90: 9428578e     	bl	0x3622dc8 <__start_il2cpp+0xb5a7b4>
 2c0cf94: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2c0cf98: f9400bfe     	ldr	x30, [sp, #0x10]
 2c0cf9c: 9100c3ff     	add	sp, sp, #0x30
 2c0cfa0: d65f03c0     	ret
 2c0cfa4: 97f72839     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void <Dispose>b__42_0()
# VA 0x2c0cfa8 .. 0x2c0cfd0 (next mapped method entry)
 2c0cfa8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2c0cfac: f9400808     	ldr	x8, [x0, #0x10]
 2c0cfb0: b40000e8     	cbz	x8, 0x2c0cfcc <__start_il2cpp+0x1449b8>
 2c0cfb4: f9402500     	ldr	x0, [x8, #0x48]
 2c0cfb8: b40000a0     	cbz	x0, 0x2c0cfcc <__start_il2cpp+0x1449b8>
 2c0cfbc: 52800021     	mov	w1, #0x1                // =1
 2c0cfc0: aa1f03e2     	mov	x2, xzr
 2c0cfc4: f84107fe     	ldr	x30, [sp], #0x10
 2c0cfc8: 1405089f     	b	0x2d4f244 <__start_il2cpp+0x286c30>
 2c0cfcc: 97f7282f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# ItemProducer :: System.Void <UpdateRechargeTime>g__UpdateTimer|47_0()
# VA 0x2c0cfd0 .. 0x2c0d080 (next mapped method entry)
 2c0cfd0: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2c0cfd4: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2c0cfd8: d001d835     	adrp	x21, 0x6712000
 2c0cfdc: 9001b734     	adrp	x20, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0cfe0: aa0003f3     	mov	x19, x0
 2c0cfe4: 396f9aa8     	ldrb	w8, [x21, #0xbe6]
 2c0cfe8: f9478e94     	ldr	x20, [x20, #0xf18]
 2c0cfec: 370000c8     	tbnz	w8, #0x0, 0x2c0d004 <__start_il2cpp+0x1449f0>
 2c0cff0: 9001b720     	adrp	x0, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2c0cff4: f9478c00     	ldr	x0, [x0, #0xf18]
 2c0cff8: 97f7277a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2c0cffc: 52800028     	mov	w8, #0x1                // =1
 2c0d000: 392f9aa8     	strb	w8, [x21, #0xbe6]
 2c0d004: aa1303e0     	mov	x0, x19
 2c0d008: 97ffff5a     	bl	0x2c0cd70 <__start_il2cpp+0x14475c>
 2c0d00c: f9400288     	ldr	x8, [x20]
 2c0d010: f9402e75     	ldr	x21, [x19, #0x58]
 2c0d014: 2a0003f4     	mov	w20, w0
 2c0d018: b940e509     	ldr	w9, [x8, #0xe4]
 2c0d01c: 35000069     	cbnz	w9, 0x2c0d028 <__start_il2cpp+0x144a14>
 2c0d020: aa0803e0     	mov	x0, x8
 2c0d024: 97f727ce     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2c0d028: aa1503e0     	mov	x0, x21
 2c0d02c: aa1f03e1     	mov	x1, xzr
 2c0d030: 94bcf585     	bl	0x5b4a644 <__start_il2cpp+0x3082030>
 2c0d034: 360001e0     	tbz	w0, #0x0, 0x2c0d070 <__start_il2cpp+0x144a5c>
 2c0d038: f9402268     	ldr	x8, [x19, #0x40]
 2c0d03c: b4000208     	cbz	x8, 0x2c0d07c <__start_il2cpp+0x144a68>
 2c0d040: f9402e60     	ldr	x0, [x19, #0x58]
 2c0d044: b40001c0     	cbz	x0, 0x2c0d07c <__start_il2cpp+0x144a68>
 2c0d048: 0ab47e89     	bic	w9, w20, w20, asr #31
 2c0d04c: bd402d00     	ldr	s0, [x8, #0x2c]
 2c0d050: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0d054: 1e220121     	scvtf	s1, w9
 2c0d058: 5e21d800     	scvtf	s0, s0
 2c0d05c: 1e201820     	fdiv	s0, s1, s0
 2c0d060: 1e2e1001     	fmov	s1, #1.00000000
 2c0d064: 1e203820     	fsub	s0, s1, s0
 2c0d068: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0d06c: 17fffd41     	b	0x2c0c570 <__start_il2cpp+0x143f5c>
 2c0d070: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2c0d074: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2c0d078: d65f03c0     	ret
 2c0d07c: 97f72803     	bl	0x29d7088 <mono_class_get_checked+0x970>
