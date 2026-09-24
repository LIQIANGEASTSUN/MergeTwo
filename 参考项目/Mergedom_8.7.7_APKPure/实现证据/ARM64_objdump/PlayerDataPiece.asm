
# PlayerDataPiece :: System.Int32 get_goldAmount()
# VA 0x2b507b0 .. 0x2b507c8 (next mapped method entry)
 2b507b0: f9401408     	ldr	x8, [x0, #0x28]
 2b507b4: b4000068     	cbz	x8, 0x2b507c0 <__start_il2cpp+0x881ac>
 2b507b8: b9402900     	ldr	w0, [x8, #0x28]
 2b507bc: d65f03c0     	ret
 2b507c0: 2a1f03e0     	mov	w0, wzr
 2b507c4: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_starAmount()
# VA 0x2b507c8 .. 0x2b507e0 (next mapped method entry)
 2b507c8: f9401408     	ldr	x8, [x0, #0x28]
 2b507cc: b4000068     	cbz	x8, 0x2b507d8 <__start_il2cpp+0x881c4>
 2b507d0: b9402d00     	ldr	w0, [x8, #0x2c]
 2b507d4: d65f03c0     	ret
 2b507d8: 2a1f03e0     	mov	w0, wzr
 2b507dc: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_blueStarAmount()
# VA 0x2b507e0 .. 0x2b507f8 (next mapped method entry)
 2b507e0: f9401408     	ldr	x8, [x0, #0x28]
 2b507e4: b4000068     	cbz	x8, 0x2b507f0 <__start_il2cpp+0x881dc>
 2b507e8: b9403100     	ldr	w0, [x8, #0x30]
 2b507ec: d65f03c0     	ret
 2b507f0: 2a1f03e0     	mov	w0, wzr
 2b507f4: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_energyAmount()
# VA 0x2b507f8 .. 0x2b50810 (next mapped method entry)
 2b507f8: f9401408     	ldr	x8, [x0, #0x28]
 2b507fc: b4000068     	cbz	x8, 0x2b50808 <__start_il2cpp+0x881f4>
 2b50800: b9401500     	ldr	w0, [x8, #0x14]
 2b50804: d65f03c0     	ret
 2b50808: 2a1f03e0     	mov	w0, wzr
 2b5080c: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_expAmount()
# VA 0x2b50810 .. 0x2b50828 (next mapped method entry)
 2b50810: f9401408     	ldr	x8, [x0, #0x28]
 2b50814: b4000068     	cbz	x8, 0x2b50820 <__start_il2cpp+0x8820c>
 2b50818: b9401900     	ldr	w0, [x8, #0x18]
 2b5081c: d65f03c0     	ret
 2b50820: 2a1f03e0     	mov	w0, wzr
 2b50824: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_level()
# VA 0x2b50828 .. 0x2b50840 (next mapped method entry)
 2b50828: f9401408     	ldr	x8, [x0, #0x28]
 2b5082c: b4000068     	cbz	x8, 0x2b50838 <__start_il2cpp+0x88224>
 2b50830: b9401100     	ldr	w0, [x8, #0x10]
 2b50834: d65f03c0     	ret
 2b50838: 2a1f03e0     	mov	w0, wzr
 2b5083c: d65f03c0     	ret

# PlayerDataPiece :: System.Boolean get_isLeveledUp()
# VA 0x2b50840 .. 0x2b50858 (next mapped method entry)
 2b50840: f9401408     	ldr	x8, [x0, #0x28]
 2b50844: b4000068     	cbz	x8, 0x2b50850 <__start_il2cpp+0x8823c>
 2b50848: 39407100     	ldrb	w0, [x8, #0x1c]
 2b5084c: d65f03c0     	ret
 2b50850: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50854: 97fa1a0d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Int32 get_levelUpCount()
# VA 0x2b50858 .. 0x2b50870 (next mapped method entry)
 2b50858: f9401408     	ldr	x8, [x0, #0x28]
 2b5085c: b4000068     	cbz	x8, 0x2b50868 <__start_il2cpp+0x88254>
 2b50860: b9402500     	ldr	w0, [x8, #0x24]
 2b50864: d65f03c0     	ret
 2b50868: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b5086c: 97fa1a07     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Boolean get_isTester()
# VA 0x2b50870 .. 0x2b50890 (next mapped method entry)
 2b50870: f9401408     	ldr	x8, [x0, #0x28]
 2b50874: b40000a8     	cbz	x8, 0x2b50888 <__start_il2cpp+0x88274>
 2b50878: 39411108     	ldrb	w8, [x8, #0x44]
 2b5087c: 7100011f     	cmp	w8, #0x0
 2b50880: 1a9f07e0     	cset	w0, ne
 2b50884: d65f03c0     	ret
 2b50888: 2a1f03e0     	mov	w0, wzr
 2b5088c: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_forceUpdateCounter()
# VA 0x2b50890 .. 0x2b508a8 (next mapped method entry)
 2b50890: f9401408     	ldr	x8, [x0, #0x28]
 2b50894: b4000068     	cbz	x8, 0x2b508a0 <__start_il2cpp+0x8828c>
 2b50898: b9403d00     	ldr	w0, [x8, #0x3c]
 2b5089c: d65f03c0     	ret
 2b508a0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b508a4: 97fa19f9     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Int32 get_purchaseBalance()
# VA 0x2b508a8 .. 0x2b508c0 (next mapped method entry)
 2b508a8: f9401408     	ldr	x8, [x0, #0x28]
 2b508ac: b4000068     	cbz	x8, 0x2b508b8 <__start_il2cpp+0x882a4>
 2b508b0: b9402100     	ldr	w0, [x8, #0x20]
 2b508b4: d65f03c0     	ret
 2b508b8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b508bc: 97fa19f3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Boolean get_isFTUEDone()
# VA 0x2b508c0 .. 0x2b508d8 (next mapped method entry)
 2b508c0: f9401408     	ldr	x8, [x0, #0x28]
 2b508c4: b4000068     	cbz	x8, 0x2b508d0 <__start_il2cpp+0x882bc>
 2b508c8: 3940d100     	ldrb	w0, [x8, #0x34]
 2b508cc: d65f03c0     	ret
 2b508d0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b508d4: 97fa19ed     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Int32 get_finishedOrderCount()
# VA 0x2b508d8 .. 0x2b508f0 (next mapped method entry)
 2b508d8: f9401408     	ldr	x8, [x0, #0x28]
 2b508dc: b4000068     	cbz	x8, 0x2b508e8 <__start_il2cpp+0x882d4>
 2b508e0: b9404100     	ldr	w0, [x8, #0x40]
 2b508e4: d65f03c0     	ret
 2b508e8: 2a1f03e0     	mov	w0, wzr
 2b508ec: d65f03c0     	ret

# PlayerDataPiece :: System.String get_FTUEVerion()
# VA 0x2b508f0 .. 0x2b50908 (next mapped method entry)
 2b508f0: f9401408     	ldr	x8, [x0, #0x28]
 2b508f4: b4000068     	cbz	x8, 0x2b50900 <__start_il2cpp+0x882ec>
 2b508f8: f9402900     	ldr	x0, [x8, #0x50]
 2b508fc: d65f03c0     	ret
 2b50900: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50904: 97fa19e1     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Boolean get_IsPlayerInitialized()
# VA 0x2b50908 .. 0x2b50918 (next mapped method entry)
 2b50908: f9401408     	ldr	x8, [x0, #0x28]
 2b5090c: f100011f     	cmp	x8, #0x0
 2b50910: 1a9f07e0     	cset	w0, ne
 2b50914: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_totalMergeCount()
# VA 0x2b50918 .. 0x2b50930 (next mapped method entry)
 2b50918: f9401408     	ldr	x8, [x0, #0x28]
 2b5091c: b4000068     	cbz	x8, 0x2b50928 <__start_il2cpp+0x88314>
 2b50920: b9403900     	ldr	w0, [x8, #0x38]
 2b50924: d65f03c0     	ret
 2b50928: 2a1f03e0     	mov	w0, wzr
 2b5092c: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_DeliveriesScore3D()
# VA 0x2b50930 .. 0x2b50948 (next mapped method entry)
 2b50930: f9401408     	ldr	x8, [x0, #0x28]
 2b50934: b4000068     	cbz	x8, 0x2b50940 <__start_il2cpp+0x8832c>
 2b50938: b9408900     	ldr	w0, [x8, #0x88]
 2b5093c: d65f03c0     	ret
 2b50940: 2a1f03e0     	mov	w0, wzr
 2b50944: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_DeliveriesScore7D()
# VA 0x2b50948 .. 0x2b50960 (next mapped method entry)
 2b50948: f9401408     	ldr	x8, [x0, #0x28]
 2b5094c: b4000068     	cbz	x8, 0x2b50958 <__start_il2cpp+0x88344>
 2b50950: b9408d00     	ldr	w0, [x8, #0x8c]
 2b50954: d65f03c0     	ret
 2b50958: 2a1f03e0     	mov	w0, wzr
 2b5095c: d65f03c0     	ret

# PlayerDataPiece :: Almedia.AlmediaLinkStatus get_almediaLinkStatus()
# VA 0x2b50960 .. 0x2b50978 (next mapped method entry)
 2b50960: f9401408     	ldr	x8, [x0, #0x28]
 2b50964: b4000068     	cbz	x8, 0x2b50970 <__start_il2cpp+0x8835c>
 2b50968: b9409100     	ldr	w0, [x8, #0x90]
 2b5096c: d65f03c0     	ret
 2b50970: 2a1f03e0     	mov	w0, wzr
 2b50974: d65f03c0     	ret

# PlayerDataPiece :: System.Void set_almediaLinkStatus(Almedia.AlmediaLinkStatus value)
# VA 0x2b50978 .. 0x2b5099c (next mapped method entry)
 2b50978: f9401409     	ldr	x9, [x0, #0x28]
 2b5097c: b40000c9     	cbz	x9, 0x2b50994 <__start_il2cpp+0x88380>
 2b50980: 2a0103e8     	mov	w8, w1
 2b50984: 52800021     	mov	w1, #0x1                // =1
 2b50988: aa1f03e2     	mov	x2, xzr
 2b5098c: b9009128     	str	w8, [x9, #0x90]
 2b50990: 140e406d     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50994: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b50998: 97fa19bc     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.String get_lastDrainedEpisode()
# VA 0x2b5099c .. 0x2b509c8 (next mapped method entry)
 2b5099c: f9401408     	ldr	x8, [x0, #0x28]
 2b509a0: b4000088     	cbz	x8, 0x2b509b0 <__start_il2cpp+0x8839c>
 2b509a4: f9404d00     	ldr	x0, [x8, #0x98]
 2b509a8: b4000040     	cbz	x0, 0x2b509b0 <__start_il2cpp+0x8839c>
 2b509ac: d65f03c0     	ret
 2b509b0: 9001bd08     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b509b4: f9470d08     	ldr	x8, [x8, #0xe18]
 2b509b8: f9404908     	ldr	x8, [x8, #0x90]
 2b509bc: f9405d08     	ldr	x8, [x8, #0xb8]
 2b509c0: f9400100     	ldr	x0, [x8]
 2b509c4: d65f03c0     	ret

# PlayerDataPiece :: System.String get_pendingDrainEpisode()
# VA 0x2b509c8 .. 0x2b509f4 (next mapped method entry)
 2b509c8: f9401408     	ldr	x8, [x0, #0x28]
 2b509cc: b4000088     	cbz	x8, 0x2b509dc <__start_il2cpp+0x883c8>
 2b509d0: f9405100     	ldr	x0, [x8, #0xa0]
 2b509d4: b4000040     	cbz	x0, 0x2b509dc <__start_il2cpp+0x883c8>
 2b509d8: d65f03c0     	ret
 2b509dc: 9001bd08     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b509e0: f9470d08     	ldr	x8, [x8, #0xe18]
 2b509e4: f9404908     	ldr	x8, [x8, #0x90]
 2b509e8: f9405d08     	ldr	x8, [x8, #0xb8]
 2b509ec: f9400100     	ldr	x0, [x8]
 2b509f0: d65f03c0     	ret

# PlayerDataPiece :: System.String get_pendingAckEpisode()
# VA 0x2b509f4 .. 0x2b50a20 (next mapped method entry)
 2b509f4: f9401408     	ldr	x8, [x0, #0x28]
 2b509f8: b4000088     	cbz	x8, 0x2b50a08 <__start_il2cpp+0x883f4>
 2b509fc: f9405500     	ldr	x0, [x8, #0xa8]
 2b50a00: b4000040     	cbz	x0, 0x2b50a08 <__start_il2cpp+0x883f4>
 2b50a04: d65f03c0     	ret
 2b50a08: 9001bd08     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b50a0c: f9470d08     	ldr	x8, [x8, #0xe18]
 2b50a10: f9404908     	ldr	x8, [x8, #0x90]
 2b50a14: f9405d08     	ldr	x8, [x8, #0xb8]
 2b50a18: f9400100     	ldr	x0, [x8]
 2b50a1c: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_lastDrainStars()
# VA 0x2b50a20 .. 0x2b50a38 (next mapped method entry)
 2b50a20: f9401408     	ldr	x8, [x0, #0x28]
 2b50a24: b4000068     	cbz	x8, 0x2b50a30 <__start_il2cpp+0x8841c>
 2b50a28: b940b100     	ldr	w0, [x8, #0xb0]
 2b50a2c: d65f03c0     	ret
 2b50a30: 2a1f03e0     	mov	w0, wzr
 2b50a34: d65f03c0     	ret

# PlayerDataPiece :: System.Int32 get_lastDrainGold()
# VA 0x2b50a38 .. 0x2b50a50 (next mapped method entry)
 2b50a38: f9401408     	ldr	x8, [x0, #0x28]
 2b50a3c: b4000068     	cbz	x8, 0x2b50a48 <__start_il2cpp+0x88434>
 2b50a40: b940b500     	ldr	w0, [x8, #0xb4]
 2b50a44: d65f03c0     	ret
 2b50a48: 2a1f03e0     	mov	w0, wzr
 2b50a4c: d65f03c0     	ret

# PlayerDataPiece :: System.Boolean get_lastDrainGrantDone()
# VA 0x2b50a50 .. 0x2b50a70 (next mapped method entry)
 2b50a50: f9401408     	ldr	x8, [x0, #0x28]
 2b50a54: b40000a8     	cbz	x8, 0x2b50a68 <__start_il2cpp+0x88454>
 2b50a58: 3942e108     	ldrb	w8, [x8, #0xb8]
 2b50a5c: 7100011f     	cmp	w8, #0x0
 2b50a60: 1a9f07e0     	cset	w0, ne
 2b50a64: d65f03c0     	ret
 2b50a68: 2a1f03e0     	mov	w0, wzr
 2b50a6c: d65f03c0     	ret

# PlayerDataPiece :: System.String get_lastSeenLastRoom()
# VA 0x2b50a70 .. 0x2b50a9c (next mapped method entry)
 2b50a70: f9401408     	ldr	x8, [x0, #0x28]
 2b50a74: b4000088     	cbz	x8, 0x2b50a84 <__start_il2cpp+0x88470>
 2b50a78: f9406100     	ldr	x0, [x8, #0xc0]
 2b50a7c: b4000040     	cbz	x0, 0x2b50a84 <__start_il2cpp+0x88470>
 2b50a80: d65f03c0     	ret
 2b50a84: 9001bd08     	adrp	x8, 0x62f0000 <_ZTVN10__cxxabiv129__pointer_to_member_type_infoE+0x1fe8>
 2b50a88: f9470d08     	ldr	x8, [x8, #0xe18]
 2b50a8c: f9404908     	ldr	x8, [x8, #0x90]
 2b50a90: f9405d08     	ldr	x8, [x8, #0xb8]
 2b50a94: f9400100     	ldr	x0, [x8]
 2b50a98: d65f03c0     	ret

# PlayerDataPiece :: System.Boolean get_starDrainerMigrated()
# VA 0x2b50a9c .. 0x2b50abc (next mapped method entry)
 2b50a9c: f9401408     	ldr	x8, [x0, #0x28]
 2b50aa0: b40000a8     	cbz	x8, 0x2b50ab4 <__start_il2cpp+0x884a0>
 2b50aa4: 39432108     	ldrb	w8, [x8, #0xc8]
 2b50aa8: 7100011f     	cmp	w8, #0x0
 2b50aac: 1a9f07e0     	cset	w0, ne
 2b50ab0: d65f03c0     	ret
 2b50ab4: 2a1f03e0     	mov	w0, wzr
 2b50ab8: d65f03c0     	ret

# PlayerDataPiece :: System.Void SetPendingDrainEpisode(System.String episodeKey)
# VA 0x2b50abc .. 0x2b50af0 (next mapped method entry)
 2b50abc: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50ac0: aa0003f3     	mov	x19, x0
 2b50ac4: f9401400     	ldr	x0, [x0, #0x28]
 2b50ac8: b4000100     	cbz	x0, 0x2b50ae8 <__start_il2cpp+0x884d4>
 2b50acc: f80a0c01     	str	x1, [x0, #0xa0]!
 2b50ad0: 97fa18af     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50ad4: aa1303e0     	mov	x0, x19
 2b50ad8: 52800021     	mov	w1, #0x1                // =1
 2b50adc: aa1f03e2     	mov	x2, xzr
 2b50ae0: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50ae4: 140e4018     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50ae8: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50aec: d65f03c0     	ret

# PlayerDataPiece :: System.Void SetPendingAckEpisode(System.String episodeKey)
# VA 0x2b50af0 .. 0x2b50b24 (next mapped method entry)
 2b50af0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50af4: aa0003f3     	mov	x19, x0
 2b50af8: f9401400     	ldr	x0, [x0, #0x28]
 2b50afc: b4000100     	cbz	x0, 0x2b50b1c <__start_il2cpp+0x88508>
 2b50b00: f80a8c01     	str	x1, [x0, #0xa8]!
 2b50b04: 97fa18a2     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50b08: aa1303e0     	mov	x0, x19
 2b50b0c: 52800021     	mov	w1, #0x1                // =1
 2b50b10: aa1f03e2     	mov	x2, xzr
 2b50b14: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50b18: 140e400b     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50b1c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50b20: d65f03c0     	ret

# PlayerDataPiece :: System.Void SetLastSeenLastRoom(System.String episodeKey)
# VA 0x2b50b24 .. 0x2b50b58 (next mapped method entry)
 2b50b24: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50b28: aa0003f3     	mov	x19, x0
 2b50b2c: f9401400     	ldr	x0, [x0, #0x28]
 2b50b30: b4000100     	cbz	x0, 0x2b50b50 <__start_il2cpp+0x8853c>
 2b50b34: f80c0c01     	str	x1, [x0, #0xc0]!
 2b50b38: 97fa1895     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50b3c: aa1303e0     	mov	x0, x19
 2b50b40: 52800021     	mov	w1, #0x1                // =1
 2b50b44: aa1f03e2     	mov	x2, xzr
 2b50b48: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50b4c: 140e3ffe     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50b50: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50b54: d65f03c0     	ret

# PlayerDataPiece :: System.Void ResetDrainerStateForMigration()
# VA 0x2b50b58 .. 0x2b50be8 (next mapped method entry)
 2b50b58: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50b5c: aa0003f3     	mov	x19, x0
 2b50b60: f9401400     	ldr	x0, [x0, #0x28]
 2b50b64: b40003c0     	cbz	x0, 0x2b50bdc <__start_il2cpp+0x885c8>
 2b50b68: aa1f03e1     	mov	x1, xzr
 2b50b6c: f80a0c1f     	str	xzr, [x0, #0xa0]!
 2b50b70: 97fa1887     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50b74: f9401660     	ldr	x0, [x19, #0x28]
 2b50b78: b4000360     	cbz	x0, 0x2b50be4 <__start_il2cpp+0x885d0>
 2b50b7c: aa1f03e1     	mov	x1, xzr
 2b50b80: f80a8c1f     	str	xzr, [x0, #0xa8]!
 2b50b84: 97fa1882     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50b88: f9401660     	ldr	x0, [x19, #0x28]
 2b50b8c: b40002c0     	cbz	x0, 0x2b50be4 <__start_il2cpp+0x885d0>
 2b50b90: aa1f03e1     	mov	x1, xzr
 2b50b94: f8098c1f     	str	xzr, [x0, #0x98]!
 2b50b98: f9000c1f     	str	xzr, [x0, #0x18]
 2b50b9c: 3900801f     	strb	wzr, [x0, #0x20]
 2b50ba0: 97fa187b     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50ba4: f9401660     	ldr	x0, [x19, #0x28]
 2b50ba8: b40001e0     	cbz	x0, 0x2b50be4 <__start_il2cpp+0x885d0>
 2b50bac: aa1f03e1     	mov	x1, xzr
 2b50bb0: f80c0c1f     	str	xzr, [x0, #0xc0]!
 2b50bb4: 97fa1876     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50bb8: f9401668     	ldr	x8, [x19, #0x28]
 2b50bbc: b4000148     	cbz	x8, 0x2b50be4 <__start_il2cpp+0x885d0>
 2b50bc0: 52800029     	mov	w9, #0x1                // =1
 2b50bc4: aa1303e0     	mov	x0, x19
 2b50bc8: 52800021     	mov	w1, #0x1                // =1
 2b50bcc: aa1f03e2     	mov	x2, xzr
 2b50bd0: 39032109     	strb	w9, [x8, #0xc8]
 2b50bd4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50bd8: 140e3fdb     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50bdc: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50be0: d65f03c0     	ret
 2b50be4: 97fa1929     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void DebugSetLastDrainedEpisode(System.String episodeKey)
# VA 0x2b50be8 .. 0x2b50c1c (next mapped method entry)
 2b50be8: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50bec: aa0003f3     	mov	x19, x0
 2b50bf0: f9401400     	ldr	x0, [x0, #0x28]
 2b50bf4: b4000100     	cbz	x0, 0x2b50c14 <__start_il2cpp+0x88600>
 2b50bf8: f8098c01     	str	x1, [x0, #0x98]!
 2b50bfc: 97fa1864     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50c00: aa1303e0     	mov	x0, x19
 2b50c04: 52800021     	mov	w1, #0x1                // =1
 2b50c08: aa1f03e2     	mov	x2, xzr
 2b50c0c: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50c10: 140e3fcd     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50c14: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50c18: d65f03c0     	ret

# PlayerDataPiece :: System.Void MarkDrainCommitted(System.String episodeKey, System.Int32 starsBefore, System.Int32 goldGranted)
# VA 0x2b50c1c .. 0x2b50c94 (next mapped method entry)
 2b50c1c: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b50c20: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b50c24: aa0003f3     	mov	x19, x0
 2b50c28: f9401400     	ldr	x0, [x0, #0x28]
 2b50c2c: b40002c0     	cbz	x0, 0x2b50c84 <__start_il2cpp+0x88670>
 2b50c30: aa0103f4     	mov	x20, x1
 2b50c34: f80a8c01     	str	x1, [x0, #0xa8]!
 2b50c38: 29010c02     	stp	w2, w3, [x0, #0x8]
 2b50c3c: 3900401f     	strb	wzr, [x0, #0x10]
 2b50c40: 97fa1853     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50c44: f9401660     	ldr	x0, [x19, #0x28]
 2b50c48: b4000240     	cbz	x0, 0x2b50c90 <__start_il2cpp+0x8867c>
 2b50c4c: aa1f03e1     	mov	x1, xzr
 2b50c50: f80a0c1f     	str	xzr, [x0, #0xa0]!
 2b50c54: 97fa184e     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50c58: f9401660     	ldr	x0, [x19, #0x28]
 2b50c5c: b40001a0     	cbz	x0, 0x2b50c90 <__start_il2cpp+0x8867c>
 2b50c60: aa1403e1     	mov	x1, x20
 2b50c64: f8098c14     	str	x20, [x0, #0x98]!
 2b50c68: 97fa1849     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50c6c: aa1303e0     	mov	x0, x19
 2b50c70: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b50c74: 52800021     	mov	w1, #0x1                // =1
 2b50c78: aa1f03e2     	mov	x2, xzr
 2b50c7c: f84207fe     	ldr	x30, [sp], #0x20
 2b50c80: 140e3fb1     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50c84: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b50c88: f84207fe     	ldr	x30, [sp], #0x20
 2b50c8c: d65f03c0     	ret
 2b50c90: 97fa18fe     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void MarkDrainGrantDone()
# VA 0x2b50c94 .. 0x2b50cb4 (next mapped method entry)
 2b50c94: f9401408     	ldr	x8, [x0, #0x28]
 2b50c98: b40000c8     	cbz	x8, 0x2b50cb0 <__start_il2cpp+0x8869c>
 2b50c9c: 52800029     	mov	w9, #0x1                // =1
 2b50ca0: 52800021     	mov	w1, #0x1                // =1
 2b50ca4: aa1f03e2     	mov	x2, xzr
 2b50ca8: 3902e109     	strb	w9, [x8, #0xb8]
 2b50cac: 140e3fa6     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50cb0: d65f03c0     	ret

# PlayerDataPiece :: System.Void ClearDrainAck()
# VA 0x2b50cb4 .. 0x2b50d00 (next mapped method entry)
 2b50cb4: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b50cb8: aa0003f3     	mov	x19, x0
 2b50cbc: f9401400     	ldr	x0, [x0, #0x28]
 2b50cc0: b40001a0     	cbz	x0, 0x2b50cf4 <__start_il2cpp+0x886e0>
 2b50cc4: aa1f03e1     	mov	x1, xzr
 2b50cc8: f80a8c1f     	str	xzr, [x0, #0xa8]!
 2b50ccc: 97fa1830     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b50cd0: f9401668     	ldr	x8, [x19, #0x28]
 2b50cd4: b4000148     	cbz	x8, 0x2b50cfc <__start_il2cpp+0x886e8>
 2b50cd8: aa1f03e2     	mov	x2, xzr
 2b50cdc: 3902e11f     	strb	wzr, [x8, #0xb8]
 2b50ce0: aa1303e0     	mov	x0, x19
 2b50ce4: 52800021     	mov	w1, #0x1                // =1
 2b50ce8: f900591f     	str	xzr, [x8, #0xb0]
 2b50cec: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50cf0: 140e3f95     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50cf4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b50cf8: d65f03c0     	ret
 2b50cfc: 97fa18e3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void AddAdTimestamp(System.DateTime timestamp)
# VA 0x2b50d00 .. 0x2b50e1c (next mapped method entry)
 2b50d00: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b50d04: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b50d08: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b50d0c: d001de15     	adrp	x21, 0x6712000
 2b50d10: aa0103f4     	mov	x20, x1
 2b50d14: aa0003f3     	mov	x19, x0
 2b50d18: 39595aa8     	ldrb	w8, [x21, #0x656]
 2b50d1c: 370000c8     	tbnz	w8, #0x0, 0x2b50d34 <__start_il2cpp+0x88720>
 2b50d20: d001bd20     	adrp	x0, 0x62f6000
 2b50d24: f9414400     	ldr	x0, [x0, #0x288]
 2b50d28: 97fa182e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50d2c: 52800028     	mov	w8, #0x1                // =1
 2b50d30: 39195aa8     	strb	w8, [x21, #0x656]
 2b50d34: f9401668     	ldr	x8, [x19, #0x28]
 2b50d38: b4000288     	cbz	x8, 0x2b50d88 <__start_il2cpp+0x88774>
 2b50d3c: f9404100     	ldr	x0, [x8, #0x80]
 2b50d40: b40006c0     	cbz	x0, 0x2b50e18 <__start_il2cpp+0x88804>
 2b50d44: d001bd29     	adrp	x9, 0x62f6000
 2b50d48: f9414529     	ldr	x9, [x9, #0x288]
 2b50d4c: b9401c0a     	ldr	w10, [x0, #0x1c]
 2b50d50: f9400808     	ldr	x8, [x0, #0x10]
 2b50d54: f9400129     	ldr	x9, [x9]
 2b50d58: 1100054a     	add	w10, w10, #0x1
 2b50d5c: b9001c0a     	str	w10, [x0, #0x1c]
 2b50d60: b40005c8     	cbz	x8, 0x2b50e18 <__start_il2cpp+0x88804>
 2b50d64: b980180a     	ldrsw	x10, [x0, #0x18]
 2b50d68: b940190b     	ldr	w11, [x8, #0x18]
 2b50d6c: 6b0b015f     	cmp	w10, w11
 2b50d70: 54000142     	b.hs	0x2b50d98 <__start_il2cpp+0x88784>
 2b50d74: 8b0a0d08     	add	x8, x8, x10, lsl #3
 2b50d78: 11000549     	add	w9, w10, #0x1
 2b50d7c: b9001809     	str	w9, [x0, #0x18]
 2b50d80: f9001114     	str	x20, [x8, #0x20]
 2b50d84: 1400000a     	b	0x2b50dac <__start_il2cpp+0x88798>
 2b50d88: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b50d8c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b50d90: f84307fe     	ldr	x30, [sp], #0x30
 2b50d94: d65f03c0     	ret
 2b50d98: f9401128     	ldr	x8, [x9, #0x20]
 2b50d9c: aa1403e1     	mov	x1, x20
 2b50da0: f9406108     	ldr	x8, [x8, #0xc0]
 2b50da4: f9403902     	ldr	x2, [x8, #0x70]
 2b50da8: 943d4cc2     	bl	0x3aa40b0 <__start_il2cpp+0xfdba9c>
 2b50dac: f9401668     	ldr	x8, [x19, #0x28]
 2b50db0: b4000348     	cbz	x8, 0x2b50e18 <__start_il2cpp+0x88804>
 2b50db4: f9404100     	ldr	x0, [x8, #0x80]
 2b50db8: aa1403e1     	mov	x1, x20
 2b50dbc: 94000018     	bl	0x2b50e1c <__start_il2cpp+0x88808>
 2b50dc0: f9401676     	ldr	x22, [x19, #0x28]
 2b50dc4: b40002b6     	cbz	x22, 0x2b50e18 <__start_il2cpp+0x88804>
 2b50dc8: f94042c0     	ldr	x0, [x22, #0x80]
 2b50dcc: aa1403e1     	mov	x1, x20
 2b50dd0: 52800062     	mov	w2, #0x3                // =3
 2b50dd4: 94000056     	bl	0x2b50f2c <__start_il2cpp+0x88918>
 2b50dd8: f9401675     	ldr	x21, [x19, #0x28]
 2b50ddc: b9008ac0     	str	w0, [x22, #0x88]
 2b50de0: b40001d5     	cbz	x21, 0x2b50e18 <__start_il2cpp+0x88804>
 2b50de4: f94042a0     	ldr	x0, [x21, #0x80]
 2b50de8: aa1403e1     	mov	x1, x20
 2b50dec: 528000e2     	mov	w2, #0x7                // =7
 2b50df0: 9400004f     	bl	0x2b50f2c <__start_il2cpp+0x88918>
 2b50df4: 2a0003e8     	mov	w8, w0
 2b50df8: aa1303e0     	mov	x0, x19
 2b50dfc: 52800021     	mov	w1, #0x1                // =1
 2b50e00: b9008ea8     	str	w8, [x21, #0x8c]
 2b50e04: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b50e08: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b50e0c: aa1f03e2     	mov	x2, xzr
 2b50e10: f84307fe     	ldr	x30, [sp], #0x30
 2b50e14: 140e3f4c     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b50e18: 97fa189c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void PruneOldTimestamps(System.Collections.Generic.List`1<System.DateTime> timestamps, System.DateTime currentTime)
# VA 0x2b50e1c .. 0x2b50f2c (next mapped method entry)
 2b50e1c: f81d0ffe     	str	x30, [sp, #-0x30]!
 2b50e20: a90157f6     	stp	x22, x21, [sp, #0x10]
 2b50e24: a9024ff4     	stp	x20, x19, [sp, #0x20]
 2b50e28: d001de14     	adrp	x20, 0x6712000
 2b50e2c: d001bd36     	adrp	x22, 0x62f6000
 2b50e30: d001bd15     	adrp	x21, 0x62f2000
 2b50e34: 39596288     	ldrb	w8, [x20, #0x658]
 2b50e38: f9414ad6     	ldr	x22, [x22, #0x290]
 2b50e3c: f940aeb5     	ldr	x21, [x21, #0x158]
 2b50e40: aa0003f3     	mov	x19, x0
 2b50e44: f90007e1     	str	x1, [sp, #0x8]
 2b50e48: 37000248     	tbnz	w8, #0x0, 0x2b50e90 <__start_il2cpp+0x8887c>
 2b50e4c: d001bd00     	adrp	x0, 0x62f2000
 2b50e50: f940ac00     	ldr	x0, [x0, #0x158]
 2b50e54: 97fa17e3     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50e58: d001bd20     	adrp	x0, 0x62f6000
 2b50e5c: f9414c00     	ldr	x0, [x0, #0x298]
 2b50e60: 97fa17e0     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50e64: d001bd20     	adrp	x0, 0x62f6000
 2b50e68: f9415000     	ldr	x0, [x0, #0x2a0]
 2b50e6c: 97fa17dd     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50e70: d001bd20     	adrp	x0, 0x62f6000
 2b50e74: f9415400     	ldr	x0, [x0, #0x2a8]
 2b50e78: 97fa17da     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50e7c: d001bd20     	adrp	x0, 0x62f6000
 2b50e80: f9414800     	ldr	x0, [x0, #0x290]
 2b50e84: 97fa17d7     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50e88: 52800028     	mov	w8, #0x1                // =1
 2b50e8c: 39196288     	strb	w8, [x20, #0x658]
 2b50e90: f94002c0     	ldr	x0, [x22]
 2b50e94: 97fa1879     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b50e98: aa1f03e1     	mov	x1, xzr
 2b50e9c: aa0003f4     	mov	x20, x0
 2b50ea0: 9497fb2a     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b50ea4: f94002a0     	ldr	x0, [x21]
 2b50ea8: b940e408     	ldr	w8, [x0, #0xe4]
 2b50eac: 35000048     	cbnz	w8, 0x2b50eb4 <__start_il2cpp+0x888a0>
 2b50eb0: 97fa182b     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b50eb4: 1e77d000     	fmov	d0, #-30.00000000
 2b50eb8: 910023e0     	add	x0, sp, #0x8
 2b50ebc: aa1f03e1     	mov	x1, xzr
 2b50ec0: 94966593     	bl	0x50ea50c <__start_il2cpp+0x2621ef8>
 2b50ec4: b4000334     	cbz	x20, 0x2b50f28 <__start_il2cpp+0x88914>
 2b50ec8: d001bd28     	adrp	x8, 0x62f6000
 2b50ecc: d001bd35     	adrp	x21, 0x62f6000
 2b50ed0: f9415108     	ldr	x8, [x8, #0x2a0]
 2b50ed4: f94156b5     	ldr	x21, [x21, #0x2a8]
 2b50ed8: f9000a80     	str	x0, [x20, #0x10]
 2b50edc: f9400108     	ldr	x8, [x8]
 2b50ee0: aa0803e0     	mov	x0, x8
 2b50ee4: 97fa1865     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b50ee8: f94002a2     	ldr	x2, [x21]
 2b50eec: aa1403e1     	mov	x1, x20
 2b50ef0: aa1f03e3     	mov	x3, xzr
 2b50ef4: aa0003f5     	mov	x21, x0
 2b50ef8: 9449809b     	bl	0x3db1164 <__start_il2cpp+0x12e8b50>
 2b50efc: b4000173     	cbz	x19, 0x2b50f28 <__start_il2cpp+0x88914>
 2b50f00: d001bd28     	adrp	x8, 0x62f6000
 2b50f04: aa1303e0     	mov	x0, x19
 2b50f08: aa1503e1     	mov	x1, x21
 2b50f0c: f9414d08     	ldr	x8, [x8, #0x298]
 2b50f10: f9400102     	ldr	x2, [x8]
 2b50f14: 943d5213     	bl	0x3aa5760 <__start_il2cpp+0xfdd14c>
 2b50f18: a9424ff4     	ldp	x20, x19, [sp, #0x20]
 2b50f1c: a94157f6     	ldp	x22, x21, [sp, #0x10]
 2b50f20: f84307fe     	ldr	x30, [sp], #0x30
 2b50f24: d65f03c0     	ret
 2b50f28: 97fa1858     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Int32 CountWithinDays(System.Collections.Generic.List`1<System.DateTime> timestamps, System.DateTime currentTime, System.Int32 days)
# VA 0x2b50f2c .. 0x2b51048 (next mapped method entry)
 2b50f2c: d10103ff     	sub	sp, sp, #0x40
 2b50f30: a9015ffe     	stp	x30, x23, [sp, #0x10]
 2b50f34: a90257f6     	stp	x22, x21, [sp, #0x20]
 2b50f38: a9034ff4     	stp	x20, x19, [sp, #0x30]
 2b50f3c: d001de15     	adrp	x21, 0x6712000
 2b50f40: d001bd37     	adrp	x23, 0x62f6000
 2b50f44: d001bd16     	adrp	x22, 0x62f2000
 2b50f48: 39595ea8     	ldrb	w8, [x21, #0x657]
 2b50f4c: f9415af7     	ldr	x23, [x23, #0x2b0]
 2b50f50: f940aed6     	ldr	x22, [x22, #0x158]
 2b50f54: 2a0203f4     	mov	w20, w2
 2b50f58: aa0003f3     	mov	x19, x0
 2b50f5c: f90007e1     	str	x1, [sp, #0x8]
 2b50f60: 37000248     	tbnz	w8, #0x0, 0x2b50fa8 <__start_il2cpp+0x88994>
 2b50f64: d001bd00     	adrp	x0, 0x62f2000
 2b50f68: f940ac00     	ldr	x0, [x0, #0x158]
 2b50f6c: 97fa179d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50f70: d001bd20     	adrp	x0, 0x62f6000
 2b50f74: f9415c00     	ldr	x0, [x0, #0x2b8]
 2b50f78: 97fa179a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50f7c: d001bd20     	adrp	x0, 0x62f6000
 2b50f80: f9416000     	ldr	x0, [x0, #0x2c0]
 2b50f84: 97fa1797     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50f88: d001bd20     	adrp	x0, 0x62f6000
 2b50f8c: f9416400     	ldr	x0, [x0, #0x2c8]
 2b50f90: 97fa1794     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50f94: d001bd20     	adrp	x0, 0x62f6000
 2b50f98: f9415800     	ldr	x0, [x0, #0x2b0]
 2b50f9c: 97fa1791     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b50fa0: 52800028     	mov	w8, #0x1                // =1
 2b50fa4: 39195ea8     	strb	w8, [x21, #0x657]
 2b50fa8: f94002e0     	ldr	x0, [x23]
 2b50fac: 97fa1833     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b50fb0: aa1f03e1     	mov	x1, xzr
 2b50fb4: aa0003f5     	mov	x21, x0
 2b50fb8: 9497fae4     	bl	0x514fb48 <__start_il2cpp+0x2687534>
 2b50fbc: f94002c0     	ldr	x0, [x22]
 2b50fc0: b940e408     	ldr	w8, [x0, #0xe4]
 2b50fc4: 35000048     	cbnz	w8, 0x2b50fcc <__start_il2cpp+0x889b8>
 2b50fc8: 97fa17e5     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b50fcc: 4b1403e8     	neg	w8, w20
 2b50fd0: 910023e0     	add	x0, sp, #0x8
 2b50fd4: aa1f03e1     	mov	x1, xzr
 2b50fd8: 1e620100     	scvtf	d0, w8
 2b50fdc: 9496654c     	bl	0x50ea50c <__start_il2cpp+0x2621ef8>
 2b50fe0: b4000335     	cbz	x21, 0x2b51044 <__start_il2cpp+0x88a30>
 2b50fe4: d001bd28     	adrp	x8, 0x62f6000
 2b50fe8: d001bd34     	adrp	x20, 0x62f6000
 2b50fec: d001bd36     	adrp	x22, 0x62f6000
 2b50ff0: f9416108     	ldr	x8, [x8, #0x2c0]
 2b50ff4: f9416694     	ldr	x20, [x20, #0x2c8]
 2b50ff8: f9415ed6     	ldr	x22, [x22, #0x2b8]
 2b50ffc: f9000aa0     	str	x0, [x21, #0x10]
 2b51000: f9400108     	ldr	x8, [x8]
 2b51004: aa0803e0     	mov	x0, x8
 2b51008: 97fa181c     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b5100c: f9400282     	ldr	x2, [x20]
 2b51010: aa1503e1     	mov	x1, x21
 2b51014: aa1f03e3     	mov	x3, xzr
 2b51018: aa0003f4     	mov	x20, x0
 2b5101c: 94857f14     	bl	0x4cb0c6c <__start_il2cpp+0x21e8658>
 2b51020: f94002c2     	ldr	x2, [x22]
 2b51024: aa1303e0     	mov	x0, x19
 2b51028: aa1403e1     	mov	x1, x20
 2b5102c: 94236909     	bl	0x342b450 <__start_il2cpp+0x962e3c>
 2b51030: a9434ff4     	ldp	x20, x19, [sp, #0x30]
 2b51034: a94257f6     	ldp	x22, x21, [sp, #0x20]
 2b51038: a9415ffe     	ldp	x30, x23, [sp, #0x10]
 2b5103c: 910103ff     	add	sp, sp, #0x40
 2b51040: d65f03c0     	ret
 2b51044: 97fa1811     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.DateTime get_passExpiry()
# VA 0x2b51058 .. 0x2b51118 (next mapped method entry)
 2b51058: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b5105c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b51060: b001de14     	adrp	x20, 0x6712000
 2b51064: aa0003f3     	mov	x19, x0
 2b51068: 39596688     	ldrb	w8, [x20, #0x659]
 2b5106c: 37000128     	tbnz	w8, #0x0, 0x2b51090 <__start_il2cpp+0x88a7c>
 2b51070: b001bd00     	adrp	x0, 0x62f2000
 2b51074: f940ac00     	ldr	x0, [x0, #0x158]
 2b51078: 97fa175a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5107c: 9001bd00     	adrp	x0, 0x62f1000
 2b51080: f940d800     	ldr	x0, [x0, #0x1b0]
 2b51084: 97fa1757     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51088: 52800028     	mov	w8, #0x1                // =1
 2b5108c: 39196688     	strb	w8, [x20, #0x659]
 2b51090: f9401668     	ldr	x8, [x19, #0x28]
 2b51094: b4000228     	cbz	x8, 0x2b510d8 <__start_il2cpp+0x88ac4>
 2b51098: b001bd09     	adrp	x9, 0x62f2000
 2b5109c: f940ad29     	ldr	x9, [x9, #0x158]
 2b510a0: f9403114     	ldr	x20, [x8, #0x60]
 2b510a4: f9400120     	ldr	x0, [x9]
 2b510a8: b940e409     	ldr	w9, [x0, #0xe4]
 2b510ac: 35000049     	cbnz	w9, 0x2b510b4 <__start_il2cpp+0x88aa0>
 2b510b0: 97fa17ab     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b510b4: aa1403e0     	mov	x0, x20
 2b510b8: aa1f03e1     	mov	x1, xzr
 2b510bc: aa1f03e2     	mov	x2, xzr
 2b510c0: 94967225     	bl	0x50ed954 <__start_il2cpp+0x2625340>
 2b510c4: f9401668     	ldr	x8, [x19, #0x28]
 2b510c8: 36000100     	tbz	w0, #0x0, 0x2b510e8 <__start_il2cpp+0x88ad4>
 2b510cc: b4000248     	cbz	x8, 0x2b51114 <__start_il2cpp+0x88b00>
 2b510d0: f9403100     	ldr	x0, [x8, #0x60]
 2b510d4: 14000002     	b	0x2b510dc <__start_il2cpp+0x88ac8>
 2b510d8: aa1f03e0     	mov	x0, xzr
 2b510dc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b510e0: f84207fe     	ldr	x30, [sp], #0x20
 2b510e4: d65f03c0     	ret
 2b510e8: b4000168     	cbz	x8, 0x2b51114 <__start_il2cpp+0x88b00>
 2b510ec: 9001bd09     	adrp	x9, 0x62f1000
 2b510f0: aa1f03e1     	mov	x1, xzr
 2b510f4: f940d929     	ldr	x9, [x9, #0x1b0]
 2b510f8: f9402d08     	ldr	x8, [x8, #0x58]
 2b510fc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b51100: f9400129     	ldr	x9, [x9]
 2b51104: f100011f     	cmp	x8, #0x0
 2b51108: 9a880120     	csel	x0, x9, x8, eq
 2b5110c: f84207fe     	ldr	x30, [sp], #0x20
 2b51110: 1403b8fe     	b	0x2c3f508 <__start_il2cpp+0x176ef4>
 2b51114: 97fa17dd     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void set_passExpiry(System.DateTime value)
# VA 0x2b51118 .. 0x2b5113c (next mapped method entry)
 2b51118: f9401409     	ldr	x9, [x0, #0x28]
 2b5111c: b40000c9     	cbz	x9, 0x2b51134 <__start_il2cpp+0x88b20>
 2b51120: aa0103e8     	mov	x8, x1
 2b51124: 52800021     	mov	w1, #0x1                // =1
 2b51128: aa1f03e2     	mov	x2, xzr
 2b5112c: f9003128     	str	x8, [x9, #0x60]
 2b51130: 140e3e85     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51134: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51138: 97fa17d4     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Int32 get_OrderSkipCount()
# VA 0x2b5113c .. 0x2b51154 (next mapped method entry)
 2b5113c: f9401408     	ldr	x8, [x0, #0x28]
 2b51140: b4000068     	cbz	x8, 0x2b5114c <__start_il2cpp+0x88b38>
 2b51144: b9407100     	ldr	w0, [x8, #0x70]
 2b51148: d65f03c0     	ret
 2b5114c: 2a1f03e0     	mov	w0, wzr
 2b51150: d65f03c0     	ret

# PlayerDataPiece :: System.Void set_OrderSkipCount(System.Int32 value)
# VA 0x2b51154 .. 0x2b51178 (next mapped method entry)
 2b51154: f9401409     	ldr	x9, [x0, #0x28]
 2b51158: b40000c9     	cbz	x9, 0x2b51170 <__start_il2cpp+0x88b5c>
 2b5115c: 2a0103e8     	mov	w8, w1
 2b51160: 52800021     	mov	w1, #0x1                // =1
 2b51164: aa1f03e2     	mov	x2, xzr
 2b51168: b9007128     	str	w8, [x9, #0x70]
 2b5116c: 140e3e76     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51170: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51174: 97fa17c5     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.String get_activePass()
# VA 0x2b51178 .. 0x2b511d0 (next mapped method entry)
 2b51178: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b5117c: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b51180: b001de14     	adrp	x20, 0x6712000
 2b51184: aa0003f3     	mov	x19, x0
 2b51188: 39596a88     	ldrb	w8, [x20, #0x65a]
 2b5118c: 370000c8     	tbnz	w8, #0x0, 0x2b511a4 <__start_il2cpp+0x88b90>
 2b51190: 9001bd00     	adrp	x0, 0x62f1000
 2b51194: f940d800     	ldr	x0, [x0, #0x1b0]
 2b51198: 97fa1712     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5119c: 52800028     	mov	w8, #0x1                // =1
 2b511a0: 39196a88     	strb	w8, [x20, #0x65a]
 2b511a4: 9001bd08     	adrp	x8, 0x62f1000
 2b511a8: f9401669     	ldr	x9, [x19, #0x28]
 2b511ac: f940d908     	ldr	x8, [x8, #0x1b0]
 2b511b0: b4000049     	cbz	x9, 0x2b511b8 <__start_il2cpp+0x88ba4>
 2b511b4: f9403529     	ldr	x9, [x9, #0x68]
 2b511b8: f9400108     	ldr	x8, [x8]
 2b511bc: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b511c0: f100013f     	cmp	x9, #0x0
 2b511c4: 9a890100     	csel	x0, x8, x9, eq
 2b511c8: f84207fe     	ldr	x30, [sp], #0x20
 2b511cc: d65f03c0     	ret

# PlayerDataPiece :: System.Void set_activePass(System.String value)
# VA 0x2b511d0 .. 0x2b51200 (next mapped method entry)
 2b511d0: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b511d4: aa0003f3     	mov	x19, x0
 2b511d8: f9401400     	ldr	x0, [x0, #0x28]
 2b511dc: b4000100     	cbz	x0, 0x2b511fc <__start_il2cpp+0x88be8>
 2b511e0: f8068c01     	str	x1, [x0, #0x68]!
 2b511e4: 97fa16ea     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b511e8: aa1303e0     	mov	x0, x19
 2b511ec: 52800021     	mov	w1, #0x1                // =1
 2b511f0: aa1f03e2     	mov	x2, xzr
 2b511f4: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b511f8: 140e3e53     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b511fc: 97fa17a3     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.DateTime get_lastDailyRewardReceived()
# VA 0x2b51200 .. 0x2b51218 (next mapped method entry)
 2b51200: f9401408     	ldr	x8, [x0, #0x28]
 2b51204: b4000068     	cbz	x8, 0x2b51210 <__start_il2cpp+0x88bfc>
 2b51208: f9403d00     	ldr	x0, [x8, #0x78]
 2b5120c: d65f03c0     	ret
 2b51210: aa1f03e0     	mov	x0, xzr
 2b51214: d65f03c0     	ret

# PlayerDataPiece :: System.Void set_lastDailyRewardReceived(System.DateTime value)
# VA 0x2b51218 .. 0x2b5123c (next mapped method entry)
 2b51218: f9401409     	ldr	x9, [x0, #0x28]
 2b5121c: b40000c9     	cbz	x9, 0x2b51234 <__start_il2cpp+0x88c20>
 2b51220: aa0103e8     	mov	x8, x1
 2b51224: 52800021     	mov	w1, #0x1                // =1
 2b51228: aa1f03e2     	mov	x2, xzr
 2b5122c: f9003d28     	str	x8, [x9, #0x78]
 2b51230: 140e3e45     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51234: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51238: 97fa1794     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetFTUEVerion(System.String ftueVerion)
# VA 0x2b5123c .. 0x2b5126c (next mapped method entry)
 2b5123c: a9bf4ffe     	stp	x30, x19, [sp, #-0x10]!
 2b51240: aa0003f3     	mov	x19, x0
 2b51244: f9401400     	ldr	x0, [x0, #0x28]
 2b51248: b4000100     	cbz	x0, 0x2b51268 <__start_il2cpp+0x88c54>
 2b5124c: f8050c01     	str	x1, [x0, #0x50]!
 2b51250: 97fa16cf     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b51254: aa1303e0     	mov	x0, x19
 2b51258: 52800021     	mov	w1, #0x1                // =1
 2b5125c: aa1f03e2     	mov	x2, xzr
 2b51260: a8c14ffe     	ldp	x30, x19, [sp], #0x10
 2b51264: 140e3e38     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51268: 97fa1788     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetIsTester(System.Boolean tester)
# VA 0x2b5126c .. 0x2b51290 (next mapped method entry)
 2b5126c: f9401408     	ldr	x8, [x0, #0x28]
 2b51270: b40000c8     	cbz	x8, 0x2b51288 <__start_il2cpp+0x88c74>
 2b51274: 12000029     	and	w9, w1, #0x1
 2b51278: 52800021     	mov	w1, #0x1                // =1
 2b5127c: aa1f03e2     	mov	x2, xzr
 2b51280: 39011109     	strb	w9, [x8, #0x44]
 2b51284: 140e3e30     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51288: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b5128c: 97fa177f     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetStarAmount(System.Int32 amount)
# VA 0x2b51290 .. 0x2b512b4 (next mapped method entry)
 2b51290: f9401409     	ldr	x9, [x0, #0x28]
 2b51294: b40000c9     	cbz	x9, 0x2b512ac <__start_il2cpp+0x88c98>
 2b51298: 2a0103e8     	mov	w8, w1
 2b5129c: 52800021     	mov	w1, #0x1                // =1
 2b512a0: aa1f03e2     	mov	x2, xzr
 2b512a4: b9002d28     	str	w8, [x9, #0x2c]
 2b512a8: 140e3e27     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b512ac: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b512b0: 97fa1776     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetBlueStarAmount(System.Int32 amount)
# VA 0x2b512b4 .. 0x2b512d8 (next mapped method entry)
 2b512b4: f9401409     	ldr	x9, [x0, #0x28]
 2b512b8: b40000c9     	cbz	x9, 0x2b512d0 <__start_il2cpp+0x88cbc>
 2b512bc: 2a0103e8     	mov	w8, w1
 2b512c0: 52800021     	mov	w1, #0x1                // =1
 2b512c4: aa1f03e2     	mov	x2, xzr
 2b512c8: b9003128     	str	w8, [x9, #0x30]
 2b512cc: 140e3e1e     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b512d0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b512d4: 97fa176d     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetIsFTUEDone(System.Boolean isdone)
# VA 0x2b512d8 .. 0x2b512fc (next mapped method entry)
 2b512d8: f9401408     	ldr	x8, [x0, #0x28]
 2b512dc: b40000c8     	cbz	x8, 0x2b512f4 <__start_il2cpp+0x88ce0>
 2b512e0: 12000029     	and	w9, w1, #0x1
 2b512e4: 52800021     	mov	w1, #0x1                // =1
 2b512e8: aa1f03e2     	mov	x2, xzr
 2b512ec: 3900d109     	strb	w9, [x8, #0x34]
 2b512f0: 140e3e15     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b512f4: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b512f8: 97fa1764     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetGoldAmount(System.Int32 amount)
# VA 0x2b512fc .. 0x2b51320 (next mapped method entry)
 2b512fc: f9401409     	ldr	x9, [x0, #0x28]
 2b51300: b40000c9     	cbz	x9, 0x2b51318 <__start_il2cpp+0x88d04>
 2b51304: 2a0103e8     	mov	w8, w1
 2b51308: 52800021     	mov	w1, #0x1                // =1
 2b5130c: aa1f03e2     	mov	x2, xzr
 2b51310: b9002928     	str	w8, [x9, #0x28]
 2b51314: 140e3e0c     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51318: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b5131c: 97fa175b     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetFinishedOrderCount(System.Int32 amount)
# VA 0x2b51320 .. 0x2b51344 (next mapped method entry)
 2b51320: f9401409     	ldr	x9, [x0, #0x28]
 2b51324: b40000c9     	cbz	x9, 0x2b5133c <__start_il2cpp+0x88d28>
 2b51328: 2a0103e8     	mov	w8, w1
 2b5132c: 52800021     	mov	w1, #0x1                // =1
 2b51330: aa1f03e2     	mov	x2, xzr
 2b51334: b9004128     	str	w8, [x9, #0x40]
 2b51338: 140e3e03     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b5133c: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51340: 97fa1752     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetTotalMergeCount(System.Int32 count)
# VA 0x2b51344 .. 0x2b51368 (next mapped method entry)
 2b51344: f9401409     	ldr	x9, [x0, #0x28]
 2b51348: b40000c9     	cbz	x9, 0x2b51360 <__start_il2cpp+0x88d4c>
 2b5134c: 2a0103e8     	mov	w8, w1
 2b51350: 52800021     	mov	w1, #0x1                // =1
 2b51354: aa1f03e2     	mov	x2, xzr
 2b51358: b9003928     	str	w8, [x9, #0x38]
 2b5135c: 140e3dfa     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51360: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51364: 97fa1749     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetEnergyAmount(System.Int32 amount)
# VA 0x2b51368 .. 0x2b5138c (next mapped method entry)
 2b51368: f9401408     	ldr	x8, [x0, #0x28]
 2b5136c: b40000c8     	cbz	x8, 0x2b51384 <__start_il2cpp+0x88d70>
 2b51370: 0aa17c29     	bic	w9, w1, w1, asr #31
 2b51374: 52800021     	mov	w1, #0x1                // =1
 2b51378: aa1f03e2     	mov	x2, xzr
 2b5137c: b9001509     	str	w9, [x8, #0x14]
 2b51380: 140e3df1     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51384: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51388: 97fa1740     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetExpAmount(System.Int32 amount)
# VA 0x2b5138c .. 0x2b513b0 (next mapped method entry)
 2b5138c: f9401409     	ldr	x9, [x0, #0x28]
 2b51390: b40000c9     	cbz	x9, 0x2b513a8 <__start_il2cpp+0x88d94>
 2b51394: 2a0103e8     	mov	w8, w1
 2b51398: 52800021     	mov	w1, #0x1                // =1
 2b5139c: aa1f03e2     	mov	x2, xzr
 2b513a0: b9001928     	str	w8, [x9, #0x18]
 2b513a4: 140e3de8     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b513a8: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b513ac: 97fa1737     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetLevel(System.Int32 amount)
# VA 0x2b513b0 .. 0x2b513d4 (next mapped method entry)
 2b513b0: f9401409     	ldr	x9, [x0, #0x28]
 2b513b4: b40000c9     	cbz	x9, 0x2b513cc <__start_il2cpp+0x88db8>
 2b513b8: 2a0103e8     	mov	w8, w1
 2b513bc: 52800021     	mov	w1, #0x1                // =1
 2b513c0: aa1f03e2     	mov	x2, xzr
 2b513c4: b9001128     	str	w8, [x9, #0x10]
 2b513c8: 140e3ddf     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b513cc: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b513d0: 97fa172e     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetIsLeveledUp(System.Boolean leveledUp)
# VA 0x2b513d4 .. 0x2b513f8 (next mapped method entry)
 2b513d4: f9401408     	ldr	x8, [x0, #0x28]
 2b513d8: b40000c8     	cbz	x8, 0x2b513f0 <__start_il2cpp+0x88ddc>
 2b513dc: 12000029     	and	w9, w1, #0x1
 2b513e0: 52800021     	mov	w1, #0x1                // =1
 2b513e4: aa1f03e2     	mov	x2, xzr
 2b513e8: 39007109     	strb	w9, [x8, #0x1c]
 2b513ec: 140e3dd6     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b513f0: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b513f4: 97fa1725     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetLevelUpCount(System.Int32 count)
# VA 0x2b513f8 .. 0x2b5141c (next mapped method entry)
 2b513f8: f9401409     	ldr	x9, [x0, #0x28]
 2b513fc: b40000c9     	cbz	x9, 0x2b51414 <__start_il2cpp+0x88e00>
 2b51400: 2a0103e8     	mov	w8, w1
 2b51404: 52800021     	mov	w1, #0x1                // =1
 2b51408: aa1f03e2     	mov	x2, xzr
 2b5140c: b9002528     	str	w8, [x9, #0x24]
 2b51410: 140e3dcd     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51414: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b51418: 97fa171c     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void SetPurchaseBalance(System.Int32 balance)
# VA 0x2b5141c .. 0x2b51440 (next mapped method entry)
 2b5141c: f9401409     	ldr	x9, [x0, #0x28]
 2b51420: b40000c9     	cbz	x9, 0x2b51438 <__start_il2cpp+0x88e24>
 2b51424: 2a0103e8     	mov	w8, w1
 2b51428: 52800021     	mov	w1, #0x1                // =1
 2b5142c: aa1f03e2     	mov	x2, xzr
 2b51430: b9002128     	str	w8, [x9, #0x20]
 2b51434: 140e3dc4     	b	0x2ee0b44 <__start_il2cpp+0x418530>
 2b51438: f81f0ffe     	str	x30, [sp, #-0x10]!
 2b5143c: 97fa1713     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.String GetKey()
# VA 0x2b51440 .. 0x2b51480 (next mapped method entry)
 2b51440: f81e0ffe     	str	x30, [sp, #-0x20]!
 2b51444: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b51448: b001de13     	adrp	x19, 0x6712000
 2b5144c: b001bd34     	adrp	x20, 0x62f6000
 2b51450: 39596e68     	ldrb	w8, [x19, #0x65b]
 2b51454: f9416a94     	ldr	x20, [x20, #0x2d0]
 2b51458: 370000c8     	tbnz	w8, #0x0, 0x2b51470 <__start_il2cpp+0x88e5c>
 2b5145c: b001bd20     	adrp	x0, 0x62f6000
 2b51460: f9416800     	ldr	x0, [x0, #0x2d0]
 2b51464: 97fa165f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51468: 52800028     	mov	w8, #0x1                // =1
 2b5146c: 39196e68     	strb	w8, [x19, #0x65b]
 2b51470: f9400280     	ldr	x0, [x20]
 2b51474: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b51478: f84207fe     	ldr	x30, [sp], #0x20
 2b5147c: d65f03c0     	ret

# PlayerDataPiece :: System.Boolean TryDeserializeFromLocal(System.Boolean createInitialValuesIfNotExist = False)
# VA 0x2b51480 .. 0x2b5172c (next mapped method entry)
 2b51480: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b51484: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b51488: b001de15     	adrp	x21, 0x6712000
 2b5148c: d001bd14     	adrp	x20, 0x62f3000
 2b51490: aa0003f3     	mov	x19, x0
 2b51494: 395972a8     	ldrb	w8, [x21, #0x65c]
 2b51498: f946b694     	ldr	x20, [x20, #0xd68]
 2b5149c: 37000548     	tbnz	w8, #0x0, 0x2b51544 <__start_il2cpp+0x88f30>
 2b514a0: b001bd20     	adrp	x0, 0x62f6000
 2b514a4: f9416c00     	ldr	x0, [x0, #0x2d8]
 2b514a8: 97fa164e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514ac: b001bd20     	adrp	x0, 0x62f6000
 2b514b0: f9417000     	ldr	x0, [x0, #0x2e0]
 2b514b4: 97fa164b     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514b8: d001bd00     	adrp	x0, 0x62f3000
 2b514bc: f946b400     	ldr	x0, [x0, #0xd68]
 2b514c0: 97fa1648     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514c4: b001bd20     	adrp	x0, 0x62f6000
 2b514c8: f9417400     	ldr	x0, [x0, #0x2e8]
 2b514cc: 97fa1645     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514d0: b001bd20     	adrp	x0, 0x62f6000
 2b514d4: f9417800     	ldr	x0, [x0, #0x2f0]
 2b514d8: 97fa1642     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514dc: b001bd20     	adrp	x0, 0x62f6000
 2b514e0: f9417c00     	ldr	x0, [x0, #0x2f8]
 2b514e4: 97fa163f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514e8: b001bd20     	adrp	x0, 0x62f6000
 2b514ec: f9418000     	ldr	x0, [x0, #0x300]
 2b514f0: 97fa163c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b514f4: b001bd20     	adrp	x0, 0x62f6000
 2b514f8: f9418400     	ldr	x0, [x0, #0x308]
 2b514fc: 97fa1639     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51500: b001bd20     	adrp	x0, 0x62f6000
 2b51504: f9418800     	ldr	x0, [x0, #0x310]
 2b51508: 97fa1636     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5150c: b001bd20     	adrp	x0, 0x62f6000
 2b51510: f9418c00     	ldr	x0, [x0, #0x318]
 2b51514: 97fa1633     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51518: b001bd20     	adrp	x0, 0x62f6000
 2b5151c: f9419000     	ldr	x0, [x0, #0x320]
 2b51520: 97fa1630     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51524: b001bd20     	adrp	x0, 0x62f6000
 2b51528: f9419400     	ldr	x0, [x0, #0x328]
 2b5152c: 97fa162d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51530: b001bd20     	adrp	x0, 0x62f6000
 2b51534: f9419800     	ldr	x0, [x0, #0x330]
 2b51538: 97fa162a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5153c: 52800028     	mov	w8, #0x1                // =1
 2b51540: 391972a8     	strb	w8, [x21, #0x65c]
 2b51544: f9400280     	ldr	x0, [x20]
 2b51548: b001bd35     	adrp	x21, 0x62f6000
 2b5154c: b940e408     	ldr	w8, [x0, #0xe4]
 2b51550: f94176b5     	ldr	x21, [x21, #0x2e8]
 2b51554: 35000048     	cbnz	w8, 0x2b5155c <__start_il2cpp+0x88f48>
 2b51558: 97fa1681     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b5155c: f94002a0     	ldr	x0, [x21]
 2b51560: aa1f03e1     	mov	x1, xzr
 2b51564: 97ff72d8     	bl	0x2b2e0c4 <__start_il2cpp+0x65ab0>
 2b51568: 36000220     	tbz	w0, #0x0, 0x2b515ac <__start_il2cpp+0x88f98>
 2b5156c: f9400280     	ldr	x0, [x20]
 2b51570: b001bd34     	adrp	x20, 0x62f6000
 2b51574: b940e408     	ldr	w8, [x0, #0xe4]
 2b51578: f9417294     	ldr	x20, [x20, #0x2e0]
 2b5157c: 35000048     	cbnz	w8, 0x2b51584 <__start_il2cpp+0x88f70>
 2b51580: 97fa1677     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b51584: f94002a0     	ldr	x0, [x21]
 2b51588: f9400283     	ldr	x3, [x20]
 2b5158c: 2a1f03e1     	mov	w1, wzr
 2b51590: 2a1f03e2     	mov	w2, wzr
 2b51594: 9421c8a7     	bl	0x33c3830 <__start_il2cpp+0x8fb21c>
 2b51598: aa0003e1     	mov	x1, x0
 2b5159c: f8028e60     	str	x0, [x19, #0x28]!
 2b515a0: aa1303e0     	mov	x0, x19
 2b515a4: 97fa15fa     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b515a8: 1400005c     	b	0x2b51718 <__start_il2cpp+0x89104>
 2b515ac: b001bd28     	adrp	x8, 0x62f6000
 2b515b0: b001bd35     	adrp	x21, 0x62f6000
 2b515b4: f9416d08     	ldr	x8, [x8, #0x2d8]
 2b515b8: f9419ab5     	ldr	x21, [x21, #0x330]
 2b515bc: f9400100     	ldr	x0, [x8]
 2b515c0: 97fa16ae     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b515c4: aa1f03e1     	mov	x1, xzr
 2b515c8: aa0003f4     	mov	x20, x0
 2b515cc: 940c2316     	bl	0x2e5a224 <__start_il2cpp+0x391c10>
 2b515d0: f94002a0     	ldr	x0, [x21]
 2b515d4: 52800c81     	mov	w1, #0x64               // =100
 2b515d8: aa1f03e2     	mov	x2, xzr
 2b515dc: 94bf9761     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b515e0: b4000a54     	cbz	x20, 0x2b51728 <__start_il2cpp+0x89114>
 2b515e4: b001bd28     	adrp	x8, 0x62f6000
 2b515e8: 2a1f03e1     	mov	w1, wzr
 2b515ec: aa1f03e2     	mov	x2, xzr
 2b515f0: f9418108     	ldr	x8, [x8, #0x300]
 2b515f4: b9001680     	str	w0, [x20, #0x14]
 2b515f8: f9400108     	ldr	x8, [x8]
 2b515fc: aa0803e0     	mov	x0, x8
 2b51600: 94bf9758     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b51604: b001bd28     	adrp	x8, 0x62f6000
 2b51608: 52800021     	mov	w1, #0x1                // =1
 2b5160c: aa1f03e2     	mov	x2, xzr
 2b51610: f9417908     	ldr	x8, [x8, #0x2f0]
 2b51614: b9001a80     	str	w0, [x20, #0x18]
 2b51618: f9400108     	ldr	x8, [x8]
 2b5161c: aa0803e0     	mov	x0, x8
 2b51620: 94bf9750     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b51624: b001bd28     	adrp	x8, 0x62f6000
 2b51628: 2a1f03e1     	mov	w1, wzr
 2b5162c: aa1f03e2     	mov	x2, xzr
 2b51630: f9419108     	ldr	x8, [x8, #0x320]
 2b51634: b9001280     	str	w0, [x20, #0x10]
 2b51638: f9400108     	ldr	x8, [x8]
 2b5163c: aa0803e0     	mov	x0, x8
 2b51640: 94bf9748     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b51644: b001bd28     	adrp	x8, 0x62f6000
 2b51648: 7100041f     	cmp	w0, #0x1
 2b5164c: 2a1f03e1     	mov	w1, wzr
 2b51650: f9418908     	ldr	x8, [x8, #0x310]
 2b51654: 1a9f17e9     	cset	w9, eq
 2b51658: aa1f03e2     	mov	x2, xzr
 2b5165c: 39007289     	strb	w9, [x20, #0x1c]
 2b51660: f9400100     	ldr	x0, [x8]
 2b51664: 94bf973f     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b51668: b001bd28     	adrp	x8, 0x62f6000
 2b5166c: 2a1f03e1     	mov	w1, wzr
 2b51670: aa1f03e2     	mov	x2, xzr
 2b51674: f9418d08     	ldr	x8, [x8, #0x318]
 2b51678: b9002680     	str	w0, [x20, #0x24]
 2b5167c: f9400108     	ldr	x8, [x8]
 2b51680: aa0803e0     	mov	x0, x8
 2b51684: 94bf9737     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b51688: b001bd28     	adrp	x8, 0x62f6000
 2b5168c: 2a1f03e1     	mov	w1, wzr
 2b51690: aa1f03e2     	mov	x2, xzr
 2b51694: f9419508     	ldr	x8, [x8, #0x328]
 2b51698: b9002280     	str	w0, [x20, #0x20]
 2b5169c: f9400108     	ldr	x8, [x8]
 2b516a0: aa0803e0     	mov	x0, x8
 2b516a4: 94bf972f     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b516a8: b001bd28     	adrp	x8, 0x62f6000
 2b516ac: 2a1f03e1     	mov	w1, wzr
 2b516b0: aa1f03e2     	mov	x2, xzr
 2b516b4: f9418508     	ldr	x8, [x8, #0x308]
 2b516b8: b9002e80     	str	w0, [x20, #0x2c]
 2b516bc: f9400108     	ldr	x8, [x8]
 2b516c0: aa0803e0     	mov	x0, x8
 2b516c4: 94bf9727     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b516c8: b001bd28     	adrp	x8, 0x62f6000
 2b516cc: 5280fa01     	mov	w1, #0x7d0              // =2000
 2b516d0: aa1f03e2     	mov	x2, xzr
 2b516d4: f9417d08     	ldr	x8, [x8, #0x2f8]
 2b516d8: b9003280     	str	w0, [x20, #0x30]
 2b516dc: f9400108     	ldr	x8, [x8]
 2b516e0: aa0803e0     	mov	x0, x8
 2b516e4: 94bf971f     	bl	0x5b37360 <__start_il2cpp+0x306ed4c>
 2b516e8: aa1303e8     	mov	x8, x19
 2b516ec: b9002a80     	str	w0, [x20, #0x28]
 2b516f0: aa1403e1     	mov	x1, x20
 2b516f4: f8028d14     	str	x20, [x8, #0x28]!
 2b516f8: aa0803e0     	mov	x0, x8
 2b516fc: 3901129f     	strb	wzr, [x20, #0x44]
 2b51700: 97fa15a3     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b51704: f9400268     	ldr	x8, [x19]
 2b51708: aa1303e0     	mov	x0, x19
 2b5170c: f9412d09     	ldr	x9, [x8, #0x258]
 2b51710: f9413101     	ldr	x1, [x8, #0x260]
 2b51714: d63f0120     	blr	x9
 2b51718: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b5171c: 52800020     	mov	w0, #0x1                // =1
 2b51720: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b51724: d65f03c0     	ret
 2b51728: 97fa1658     	bl	0x29d7088 <mono_class_get_checked+0x970>

# PlayerDataPiece :: System.Void DeleteLocalData()
# VA 0x2b5172c .. 0x2b51910 (next mapped method entry)
 2b5172c: a9ba7bfd     	stp	x29, x30, [sp, #-0x60]!
 2b51730: a9016ffc     	stp	x28, x27, [sp, #0x10]
 2b51734: a90267fa     	stp	x26, x25, [sp, #0x20]
 2b51738: a9035ff8     	stp	x24, x23, [sp, #0x30]
 2b5173c: a90457f6     	stp	x22, x21, [sp, #0x40]
 2b51740: a9054ff4     	stp	x20, x19, [sp, #0x50]
 2b51744: b001de16     	adrp	x22, 0x6712000
 2b51748: b001bd34     	adrp	x20, 0x62f6000
 2b5174c: aa0003f3     	mov	x19, x0
 2b51750: 395976c8     	ldrb	w8, [x22, #0x65d]
 2b51754: f9416e94     	ldr	x20, [x20, #0x2d8]
 2b51758: 370004e8     	tbnz	w8, #0x0, 0x2b517f4 <__start_il2cpp+0x891e0>
 2b5175c: b001bd20     	adrp	x0, 0x62f6000
 2b51760: f9416c00     	ldr	x0, [x0, #0x2d8]
 2b51764: 97fa159f     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51768: d001bd00     	adrp	x0, 0x62f3000
 2b5176c: f946b400     	ldr	x0, [x0, #0xd68]
 2b51770: 97fa159c     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51774: b001bd20     	adrp	x0, 0x62f6000
 2b51778: f9417400     	ldr	x0, [x0, #0x2e8]
 2b5177c: 97fa1599     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51780: b001bd20     	adrp	x0, 0x62f6000
 2b51784: f9417800     	ldr	x0, [x0, #0x2f0]
 2b51788: 97fa1596     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5178c: b001bd20     	adrp	x0, 0x62f6000
 2b51790: f9417c00     	ldr	x0, [x0, #0x2f8]
 2b51794: 97fa1593     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51798: b001bd20     	adrp	x0, 0x62f6000
 2b5179c: f9418000     	ldr	x0, [x0, #0x300]
 2b517a0: 97fa1590     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517a4: b001bd20     	adrp	x0, 0x62f6000
 2b517a8: f9418400     	ldr	x0, [x0, #0x308]
 2b517ac: 97fa158d     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517b0: b001bd20     	adrp	x0, 0x62f6000
 2b517b4: f9418800     	ldr	x0, [x0, #0x310]
 2b517b8: 97fa158a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517bc: b001bd20     	adrp	x0, 0x62f6000
 2b517c0: f9418c00     	ldr	x0, [x0, #0x318]
 2b517c4: 97fa1587     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517c8: b001bd20     	adrp	x0, 0x62f6000
 2b517cc: f9419000     	ldr	x0, [x0, #0x320]
 2b517d0: 97fa1584     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517d4: b001bd20     	adrp	x0, 0x62f6000
 2b517d8: f9419400     	ldr	x0, [x0, #0x328]
 2b517dc: 97fa1581     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517e0: b001bd20     	adrp	x0, 0x62f6000
 2b517e4: f9419800     	ldr	x0, [x0, #0x330]
 2b517e8: 97fa157e     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b517ec: 52800028     	mov	w8, #0x1                // =1
 2b517f0: 391976c8     	strb	w8, [x22, #0x65d]
 2b517f4: b001bd36     	adrp	x22, 0x62f6000
 2b517f8: b001bd35     	adrp	x21, 0x62f6000
 2b517fc: b001bd3d     	adrp	x29, 0x62f6000
 2b51800: b001bd3c     	adrp	x28, 0x62f6000
 2b51804: b001bd3b     	adrp	x27, 0x62f6000
 2b51808: b001bd3a     	adrp	x26, 0x62f6000
 2b5180c: b001bd39     	adrp	x25, 0x62f6000
 2b51810: b001bd38     	adrp	x24, 0x62f6000
 2b51814: b001bd37     	adrp	x23, 0x62f6000
 2b51818: f94176d6     	ldr	x22, [x22, #0x2e8]
 2b5181c: f9419ab5     	ldr	x21, [x21, #0x330]
 2b51820: f94183bd     	ldr	x29, [x29, #0x300]
 2b51824: f9417b9c     	ldr	x28, [x28, #0x2f0]
 2b51828: f941937b     	ldr	x27, [x27, #0x320]
 2b5182c: f9418b5a     	ldr	x26, [x26, #0x310]
 2b51830: f9418f39     	ldr	x25, [x25, #0x318]
 2b51834: f9417f18     	ldr	x24, [x24, #0x2f8]
 2b51838: f94196f7     	ldr	x23, [x23, #0x328]
 2b5183c: f9400280     	ldr	x0, [x20]
 2b51840: 97fa160e     	bl	0x29d7078 <mono_class_get_checked+0x960>
 2b51844: aa1f03e1     	mov	x1, xzr
 2b51848: aa0003f4     	mov	x20, x0
 2b5184c: 940c2276     	bl	0x2e5a224 <__start_il2cpp+0x391c10>
 2b51850: f8028e74     	str	x20, [x19, #0x28]!
 2b51854: aa1303e0     	mov	x0, x19
 2b51858: aa1403e1     	mov	x1, x20
 2b5185c: 97fa154c     	bl	0x29d6d8c <mono_class_get_checked+0x674>
 2b51860: d001bd08     	adrp	x8, 0x62f3000
 2b51864: f946b508     	ldr	x8, [x8, #0xd68]
 2b51868: f9400100     	ldr	x0, [x8]
 2b5186c: b940e408     	ldr	w8, [x0, #0xe4]
 2b51870: 35000048     	cbnz	w8, 0x2b51878 <__start_il2cpp+0x89264>
 2b51874: 97fa15ba     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b51878: f94002c0     	ldr	x0, [x22]
 2b5187c: aa1f03e1     	mov	x1, xzr
 2b51880: 97ff7257     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b51884: f94002a0     	ldr	x0, [x21]
 2b51888: aa1f03e1     	mov	x1, xzr
 2b5188c: 97ff7254     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b51890: f94003a0     	ldr	x0, [x29]
 2b51894: aa1f03e1     	mov	x1, xzr
 2b51898: 97ff7251     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b5189c: f9400380     	ldr	x0, [x28]
 2b518a0: aa1f03e1     	mov	x1, xzr
 2b518a4: 97ff724e     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b518a8: f9400360     	ldr	x0, [x27]
 2b518ac: aa1f03e1     	mov	x1, xzr
 2b518b0: 97ff724b     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b518b4: f9400340     	ldr	x0, [x26]
 2b518b8: aa1f03e1     	mov	x1, xzr
 2b518bc: 97ff7248     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b518c0: f9400320     	ldr	x0, [x25]
 2b518c4: aa1f03e1     	mov	x1, xzr
 2b518c8: 97ff7245     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b518cc: f9400300     	ldr	x0, [x24]
 2b518d0: aa1f03e1     	mov	x1, xzr
 2b518d4: 97ff7242     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b518d8: f94002e0     	ldr	x0, [x23]
 2b518dc: aa1f03e1     	mov	x1, xzr
 2b518e0: 97ff723f     	bl	0x2b2e1dc <__start_il2cpp+0x65bc8>
 2b518e4: b001bd28     	adrp	x8, 0x62f6000
 2b518e8: aa1f03e1     	mov	x1, xzr
 2b518ec: f9418508     	ldr	x8, [x8, #0x308]
 2b518f0: a9454ff4     	ldp	x20, x19, [sp, #0x50]
 2b518f4: a94457f6     	ldp	x22, x21, [sp, #0x40]
 2b518f8: a9435ff8     	ldp	x24, x23, [sp, #0x30]
 2b518fc: f9400100     	ldr	x0, [x8]
 2b51900: a94267fa     	ldp	x26, x25, [sp, #0x20]
 2b51904: a9416ffc     	ldp	x28, x27, [sp, #0x10]
 2b51908: a8c67bfd     	ldp	x29, x30, [sp], #0x60
 2b5190c: 17ff7234     	b	0x2b2e1dc <__start_il2cpp+0x65bc8>

# PlayerDataPiece :: System.Void SerializeToLocal()
# VA 0x2b51910 .. 0x2b5199c (next mapped method entry)
 2b51910: a9be57fe     	stp	x30, x21, [sp, #-0x20]!
 2b51914: a9014ff4     	stp	x20, x19, [sp, #0x10]
 2b51918: b001de15     	adrp	x21, 0x6712000
 2b5191c: d001bd14     	adrp	x20, 0x62f3000
 2b51920: aa0003f3     	mov	x19, x0
 2b51924: 39597aa8     	ldrb	w8, [x21, #0x65e]
 2b51928: f946b694     	ldr	x20, [x20, #0xd68]
 2b5192c: 37000188     	tbnz	w8, #0x0, 0x2b5195c <__start_il2cpp+0x89348>
 2b51930: b001bd20     	adrp	x0, 0x62f6000
 2b51934: f9419c00     	ldr	x0, [x0, #0x338]
 2b51938: 97fa152a     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b5193c: d001bd00     	adrp	x0, 0x62f3000
 2b51940: f946b400     	ldr	x0, [x0, #0xd68]
 2b51944: 97fa1527     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51948: b001bd20     	adrp	x0, 0x62f6000
 2b5194c: f9417400     	ldr	x0, [x0, #0x2e8]
 2b51950: 97fa1524     	bl	0x29d6de0 <mono_class_get_checked+0x6c8>
 2b51954: 52800028     	mov	w8, #0x1                // =1
 2b51958: 39197aa8     	strb	w8, [x21, #0x65e]
 2b5195c: f9400280     	ldr	x0, [x20]
 2b51960: b001bd34     	adrp	x20, 0x62f6000
 2b51964: b001bd35     	adrp	x21, 0x62f6000
 2b51968: f9417694     	ldr	x20, [x20, #0x2e8]
 2b5196c: b940e408     	ldr	w8, [x0, #0xe4]
 2b51970: f9419eb5     	ldr	x21, [x21, #0x338]
 2b51974: f9401673     	ldr	x19, [x19, #0x28]
 2b51978: 35000048     	cbnz	w8, 0x2b51980 <__start_il2cpp+0x8936c>
 2b5197c: 97fa1578     	bl	0x29d6f5c <mono_class_get_checked+0x844>
 2b51980: f9400280     	ldr	x0, [x20]
 2b51984: aa1303e1     	mov	x1, x19
 2b51988: f94002a3     	ldr	x3, [x21]
 2b5198c: a9414ff4     	ldp	x20, x19, [sp, #0x10]
 2b51990: 2a1f03e2     	mov	w2, wzr
 2b51994: a8c257fe     	ldp	x30, x21, [sp], #0x20
 2b51998: 1421c8b9     	b	0x33c3c7c <__start_il2cpp+0x8fb668>

# PlayerDataPiece :: System.Void .ctor()
# VA 0x2b5199c .. 0x2b519a4 (next mapped method entry)
 2b5199c: aa1f03e1     	mov	x1, xzr
 2b519a0: 140e3ed5     	b	0x2ee14f4 <__start_il2cpp+0x418ee0>
