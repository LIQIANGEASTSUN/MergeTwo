// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemConsumable : ItemMerging // TypeDefIndex: 1303
{

	// Fields
	[SerializeField]
	private FXBoosterExplosion fxBoosterExplosion; // 0x8C
	[CompilerGenerated]
	private Action<Item> onConsumption; // 0x90
	[CompilerGenerated]
	private ConsumableType <consumableType>k__BackingField; // 0x94
	private int consumableValue; // 0x98
	private bool wasConsumed; // 0x9C
	private Tween delayReturnToPoolTween; // 0xA0

	// Properties
	public ConsumableType consumableType { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x110F830 Offset: 0x110F830 VA: 0x110F830
	public void add_onConsumption(Action<Item> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F830:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110F834:  98409FE5     LDR r4, [pc, 0x98]
		   0x0110F838:  0090A0E1     MOV sb, r0
		   0x0110F83C:  0180A0E1     MOV r8, r1
		   0x0110F840:  04408FE0     ADD r4, pc, r4
		   0x0110F844:  0000D4E5     LDRB r0, [r4]
		   0x0110F848:  000050E3     CMPS r0, r0, 0x0
		   0x0110F84C:  0400001A     BNE $+0x18  // if (!=) goto 0x0110F864
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110F850:  80009FE5     LDR r0, [pc, 0x80]
		   0x0110F854:  00009FE7     LDR r0, [pc, r0]
		   0x0110F858:  402EF9EB     BL $-0x1b46f8
		   0x0110F85C:  0100A0E3     MOV r0, 0x1
		   0x0110F860:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110F864:  9000B9E5     LDR r0, [sb, 0x90]!
		   0x0110F868:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110F86C:  0AA09FE7     LDR r10, [pc, r10]
		   0x0110F870:  0810A0E1     MOV r1, r8
		   0x0110F874:  0020A0E3     MOV r2, 0x0
		   0x0110F878:  0060A0E1     MOV r6, r0
		   0x0110F87C:  0070A0E3     MOV r7, 0x0
		   0x0110F880:  2C277EEB     BL $+0x1f89cb8  // CALL → Delegate.Combine
		   0x0110F884:  000050E3     CMPS r0, r0, 0x0
		   0x0110F888:  0A00000A     BEQ $+0x30  // if (==) goto 0x0110F8B8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110F88C:  00509AE5     LDR r5, [r10]
		   0x0110F890:  0040A0E1     MOV r4, r0
		   0x0110F894:  0510A0E1     MOV r1, r5
		   0x0110F898:  7E2EF9EB     BL $-0x1b4600
		   0x0110F89C:  0070A0E1     MOV r7, r0
		   0x0110F8A0:  000050E3     CMPS r0, r0, 0x0
		   0x0110F8A4:  0300001A     BNE $+0x14  // if (!=) goto 0x0110F8B8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110F8A8:  0400A0E1     MOV r0, r4
		   0x0110F8AC:  0510A0E1     MOV r1, r5
		   0x0110F8B0:  B42FF9EB     BL $-0x1b4128
		   0x0110F8B4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0110F8B8:  0900A0E1     MOV r0, sb
		   0x0110F8BC:  0710A0E1     MOV r1, r7
		   0x0110F8C0:  0620A0E1     MOV r2, r6
		   0x0110F8C4:  EB1AFAEB     BL $-0x17944c
		   0x0110F8C8:  060050E1     CMPS r0, r0, r6
		   0x0110F8CC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x0110F8D0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0110F8D4:  CCC51103     TSTSEQ ip, r1, 0x33000000
		   0x0110F8D8:  3896F602     RSCSEQ sb, r6, 0x3800000
		   0x0110F8DC:  2096F602     RSCSEQ sb, r6, 0x2000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110F8E0 Offset: 0x110F8E0 VA: 0x110F8E0
	public void remove_onConsumption(Action<Item> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F8E0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110F8E4:  98409FE5     LDR r4, [pc, 0x98]
		   0x0110F8E8:  0090A0E1     MOV sb, r0
		   0x0110F8EC:  0180A0E1     MOV r8, r1
		   0x0110F8F0:  04408FE0     ADD r4, pc, r4
		   0x0110F8F4:  0000D4E5     LDRB r0, [r4]
		   0x0110F8F8:  000050E3     CMPS r0, r0, 0x0
		   0x0110F8FC:  0400001A     BNE $+0x18  // if (!=) goto 0x0110F914
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110F900:  80009FE5     LDR r0, [pc, 0x80]
		   0x0110F904:  00009FE7     LDR r0, [pc, r0]
		   0x0110F908:  142EF9EB     BL $-0x1b47a8
		   0x0110F90C:  0100A0E3     MOV r0, 0x1
		   0x0110F910:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110F914:  9000B9E5     LDR r0, [sb, 0x90]!
		   0x0110F918:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110F91C:  0AA09FE7     LDR r10, [pc, r10]
		   0x0110F920:  0810A0E1     MOV r1, r8
		   0x0110F924:  0020A0E3     MOV r2, 0x0
		   0x0110F928:  0060A0E1     MOV r6, r0
		   0x0110F92C:  0070A0E3     MOV r7, 0x0
		   0x0110F930:  7E277EEB     BL $+0x1f89e00  // CALL → Delegate.Remove
		   0x0110F934:  000050E3     CMPS r0, r0, 0x0
		   0x0110F938:  0A00000A     BEQ $+0x30  // if (==) goto 0x0110F968
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110F93C:  00509AE5     LDR r5, [r10]
		   0x0110F940:  0040A0E1     MOV r4, r0
		   0x0110F944:  0510A0E1     MOV r1, r5
		   0x0110F948:  522EF9EB     BL $-0x1b46b0
		   0x0110F94C:  0070A0E1     MOV r7, r0
		   0x0110F950:  000050E3     CMPS r0, r0, 0x0
		   0x0110F954:  0300001A     BNE $+0x14  // if (!=) goto 0x0110F968
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110F958:  0400A0E1     MOV r0, r4
		   0x0110F95C:  0510A0E1     MOV r1, r5
		   0x0110F960:  882FF9EB     BL $-0x1b41d8
		   0x0110F964:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0110F968:  0900A0E1     MOV r0, sb
		   0x0110F96C:  0710A0E1     MOV r1, r7
		   0x0110F970:  0620A0E1     MOV r2, r6
		   0x0110F974:  BF1AFAEB     BL $-0x1794fc
		   0x0110F978:  060050E1     CMPS r0, r0, r6
		   0x0110F97C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x0110F980:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0110F984:  1DC51103     TSTSEQ ip, r1, 0x7400000
		   0x0110F988:  8895F602     RSCSEQ sb, r6, 0x22000000
		   0x0110F98C:  7095F602     RSCSEQ sb, r6, 0x1c000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110F990 Offset: 0x110F990 VA: 0x110F990
	public ConsumableType get_consumableType() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F990:  940090E5     LDR r0, [r0, 0x94]
		   0x0110F994:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110F998 Offset: 0x110F998 VA: 0x110F998
	private void set_consumableType(ConsumableType value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110F998:  941080E5     STR r1, [r0, 0x94]
		   0x0110F99C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110F9A0 Offset: 0x110F9A0 VA: 0x110F9A0 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F9A0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110F9A4:  0150A0E1     MOV r5, r1
		   0x0110F9A8:  0040A0E1     MOV r4, r0
		   0x0110F9AC:  03EBFFEB     BL $-0x53ec
		   0x0110F9B0:  000094E5     LDR r0, [r4]
		   0x0110F9B4:  0110A0E3     MOV r1, 0x1
		   0x0110F9B8:  D86EC0E1     LDRD r6, r7, [r0, 0xe8]
		   0x0110F9BC:  0400A0E1     MOV r0, r4
		   0x0110F9C0:  0720A0E1     MOV r2, r7
		   0x0110F9C4:  36FF2FE1     BLX r6
		   0x0110F9C8:  000055E3     CMPS r0, r5, 0x0
		   0x0110F9CC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110F9D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110F9D0:  7E2EF9EB     BL $-0x1b4600
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110F9D4:  D025C5E1     LDRD r2, r3, [r5, 0x50]
		   0x0110F9D8:  0000A0E3     MOV r0, 0x0
		   0x0110F9DC:  9C00C4E5     STRB r0, [r4, 0x9c]  // vtable: Object.Equals
		   0x0110F9E0:  F429C4E1     STRD r2, r3, [r4, 0x94]
		   0x0110F9E4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x110F9E8 Offset: 0x110F9E8 VA: 0x110F9E8 Slot: 8
	public override string GetLocDescription() {
		/* Disassembly (ARM32, 111 instructions, 0x1BC bytes):
		   // CFG: 24 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110F9E8:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110F9EC:  08D04DE2     SUB sp, sp, 0x8
		   0x0110F9F0:  94419FE5     LDR r4, [pc, 0x194]
		   0x0110F9F4:  0060A0E1     MOV r6, r0
		   0x0110F9F8:  04408FE0     ADD r4, pc, r4
		   0x0110F9FC:  0000D4E5     LDRB r0, [r4]
		   0x0110FA00:  000050E3     CMPS r0, r0, 0x0
		   0x0110FA04:  0700001A     BNE $+0x24  // if (!=) goto 0x0110FA28
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110FA08:  80019FE5     LDR r0, [pc, 0x180]
		   0x0110FA0C:  00009FE7     LDR r0, [pc, r0]
		   0x0110FA10:  D22DF9EB     BL $-0x1b48b0
		   0x0110FA14:  78019FE5     LDR r0, [pc, 0x178]
		   0x0110FA18:  00009FE7     LDR r0, [pc, r0]
		   0x0110FA1C:  CF2DF9EB     BL $-0x1b48bc
		   0x0110FA20:  0100A0E3     MOV r0, 0x1
		   0x0110FA24:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110FA28:  0600A0E1     MOV r0, r6
		   0x0110FA2C:  A9E7FFEB     BL $-0x6154
		   0x0110FA30:  0040A0E1     MOV r4, r0
		   0x0110FA34:  000050E3     CMPS r0, r0, 0x0
		   0x0110FA38:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FA40
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110FA3C:  632EF9EB     BL $-0x1b466c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110FA40:  50019FE5     LDR r0, [pc, 0x150]
		   0x0110FA44:  0210A0E3     MOV r1, 0x2
		   0x0110FA48:  00009FE7     LDR r0, [pc, r0]
		   0x0110FA4C:  7C8094E5     LDR r8, [r4, 0x7c]
		   0x0110FA50:  000090E5     LDR r0, [r0]
		   0x0110FA54:  E42DF9EB     BL $-0x1b4868
		   0x0110FA58:  0050A0E1     MOV r5, r0
		   0x0110FA5C:  0600A0E1     MOV r0, r6
		   0x0110FA60:  9CE7FFEB     BL $-0x6188
		   0x0110FA64:  0070A0E1     MOV r7, r0
		   0x0110FA68:  000050E3     CMPS r0, r0, 0x0
		   0x0110FA6C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FA74
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110FA70:  562EF9EB     BL $-0x1b46a0
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110FA74:  0700A0E1     MOV r0, r7
		   0x0110FA78:  DAE8FFEB     BL $-0x5c90
		   0x0110FA7C:  18419FE5     LDR r4, [pc, 0x118]
		   0x0110FA80:  011080E2     ADD r1, r0, 0x1
		   0x0110FA84:  04409FE7     LDR r4, [pc, r4]
		   0x0110FA88:  04108DE5     STR r1, [sp, 0x4]
		   0x0110FA8C:  04108DE2     ADD r1, sp, 0x4
		   0x0110FA90:  240094E5     LDR r0, [r4, 0x24]
		   0x0110FA94:  002EF9EB     BL $-0x1b47f8
		   0x0110FA98:  0070A0E1     MOV r7, r0
		   0x0110FA9C:  000055E3     CMPS r0, r5, 0x0
		   0x0110FAA0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FAA8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110FAA4:  492EF9EB     BL $-0x1b46d4
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110FAA8:  000057E3     CMPS r0, r7, 0x0
		   0x0110FAAC:  0800000A     BEQ $+0x28  // if (==) goto 0x0110FAD4
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x0110FAB0:  000095E5     LDR r0, [r5]
		   0x0110FAB4:  201090E5     LDR r1, [r0, 0x20]
		   0x0110FAB8:  0700A0E1     MOV r0, r7
		   0x0110FABC:  F52DF9EB     BL $-0x1b4824
		   0x0110FAC0:  000050E3     CMPS r0, r0, 0x0
		   0x0110FAC4:  0200001A     BNE $+0x10  // if (!=) goto 0x0110FAD4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110FAC8:  482EF9EB     BL $-0x1b46d8
		   0x0110FACC:  0010A0E3     MOV r1, 0x0
		   0x0110FAD0:  EA2DF9EB     BL $-0x1b4850
		   // ──── Block 11 (from 2 paths) ──────────────────
		   0x0110FAD4:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0110FAD8:  000050E3     CMPS r0, r0, 0x0
		   0x0110FADC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FAE4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0110FAE0:  3B2EF9EB     BL $-0x1b470c
		   // ──── Block 13 if (!=) ────────────────────
		   0x0110FAE4:  0600A0E1     MOV r0, r6
		   0x0110FAE8:  107085E5     STR r7, [r5, 0x10]
		   0x0110FAEC:  79E7FFEB     BL $-0x6214
		   0x0110FAF0:  0060A0E1     MOV r6, r0
		   0x0110FAF4:  000050E3     CMPS r0, r0, 0x0
		   0x0110FAF8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FB00
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0110FAFC:  332EF9EB     BL $-0x1b472c
		   // ──── Block 15 if (!=) ────────────────────
		   0x0110FB00:  240094E5     LDR r0, [r4, 0x24]
		   0x0110FB04:  541096E5     LDR r1, [r6, 0x54]
		   0x0110FB08:  00108DE5     STR r1, [sp]
		   0x0110FB0C:  0D10A0E1     MOV r1, sp
		   0x0110FB10:  E12DF9EB     BL $-0x1b4874
		   0x0110FB14:  0060A0E1     MOV r6, r0
		   0x0110FB18:  000050E3     CMPS r0, r0, 0x0
		   0x0110FB1C:  0800000A     BEQ $+0x28  // if (==) goto 0x0110FB44
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x0110FB20:  000095E5     LDR r0, [r5]
		   0x0110FB24:  201090E5     LDR r1, [r0, 0x20]
		   0x0110FB28:  0600A0E1     MOV r0, r6
		   0x0110FB2C:  D92DF9EB     BL $-0x1b4894
		   0x0110FB30:  000050E3     CMPS r0, r0, 0x0
		   0x0110FB34:  0200001A     BNE $+0x10  // if (!=) goto 0x0110FB44
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0110FB38:  2C2EF9EB     BL $-0x1b4748
		   0x0110FB3C:  0010A0E3     MOV r1, 0x0
		   0x0110FB40:  CE2DF9EB     BL $-0x1b48c0
		   // ──── Block 18 (from 2 paths) ──────────────────
		   0x0110FB44:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0110FB48:  010050E3     CMPS r0, r0, 0x1
		   0x0110FB4C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110FB54
		   // 
		   // ──── Block 19 else (<= (unsigned)) ────────────────────
		   0x0110FB50:  1F2EF9EB     BL $-0x1b477c
		   // ──── Block 20 if (> (unsigned)) ────────────────────
		   0x0110FB54:  146085E5     STR r6, [r5, 0x14]
		   0x0110FB58:  40009FE5     LDR r0, [pc, 0x40]
		   0x0110FB5C:  00009FE7     LDR r0, [pc, r0]
		   0x0110FB60:  000090E5     LDR r0, [r0]
		   0x0110FB64:  741090E5     LDR r1, [r0, 0x74]
		   0x0110FB68:  000051E3     CMPS r0, r1, 0x0
		   0x0110FB6C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FB74
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0110FB70:  C72DF9EB     BL $-0x1b48dc
		   // ──── Block 22 if (!=) ────────────────────
		   0x0110FB74:  0800A0E1     MOV r0, r8
		   0x0110FB78:  0510A0E1     MOV r1, r5
		   0x0110FB7C:  0020A0E3     MOV r2, 0x0
		   0x0110FB80:  72B30FEB     BL $+0x3ecdd0  // CALL → MergeLocalization.GetLocalization
		   0x0110FB84:  08D08DE2     ADD sp, sp, 0x8
		   0x0110FB88:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0110FB8C:  16C41103     TSTSEQ ip, r1, 0x16000000
		   0x0110FB90:  9C8CF602     RSCSEQ r8, r6, 0x9c00
		   0x0110FB94:  D06BF602     RSCSEQ r6, r6, 0x34000
		   0x0110FB98:  A06BF602     RSCSEQ r6, r6, 0x28000
		   0x0110FB9C:  3C6CF602     RSCSEQ r6, r6, 0x3c00
		   0x0110FBA0:  4C8BF602     RSCSEQ r8, r6, 0x13000
		*/
	}

	// RVA: 0x110FBA4 Offset: 0x110FBA4 VA: 0x110FBA4 Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 280 instructions, 0x460 bytes):
		   // CFG: 47 blocks, 46 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110FBA4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110FBA8:  20D04DE2     SUB sp, sp, 0x20
		   0x0110FBAC:  08649FE5     LDR r6, [pc, 0x408]
		   0x0110FBB0:  0040A0E1     MOV r4, r0
		   0x0110FBB4:  0150A0E1     MOV r5, r1
		   0x0110FBB8:  06608FE0     ADD r6, pc, r6
		   0x0110FBBC:  0000D6E5     LDRB r0, [r6]
		   0x0110FBC0:  000050E3     CMPS r0, r0, 0x0
		   0x0110FBC4:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110FBF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110FBC8:  F0039FE5     LDR r0, [pc, 0x3f0]
		   0x0110FBCC:  00009FE7     LDR r0, [pc, r0]
		   0x0110FBD0:  622DF9EB     BL $-0x1b4a70
		   0x0110FBD4:  E8039FE5     LDR r0, [pc, 0x3e8]
		   0x0110FBD8:  00009FE7     LDR r0, [pc, r0]
		   0x0110FBDC:  5F2DF9EB     BL $-0x1b4a7c
		   0x0110FBE0:  E0039FE5     LDR r0, [pc, 0x3e0]
		   0x0110FBE4:  00009FE7     LDR r0, [pc, r0]
		   0x0110FBE8:  5C2DF9EB     BL $-0x1b4a88
		   0x0110FBEC:  0100A0E3     MOV r0, 0x1
		   0x0110FBF0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110FBF4:  9C00D4E5     LDRB r0, [r4, 0x9c]
		   0x0110FBF8:  000050E3     CMPS r0, r0, 0x0
		   0x0110FBFC:  0600001A     BNE $+0x20  // if (!=) goto 0x0110FC1C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110FC00:  0400A0E1     MOV r0, r4
		   0x0110FC04:  0510A0E1     MOV r1, r5
		   0x0110FC08:  3160D4E5     LDRB r6, [r4, 0x31]
		   0x0110FC0C:  89EDFFEB     BL $-0x49d4
		   0x0110FC10:  000056E3     CMPS r0, r6, 0x0
		   0x0110FC14:  00005513     CMPSNE r0, r5, 0x0
		   0x0110FC18:  0100001A     BNE $+0xc  // if (!=) goto 0x0110FC24
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x0110FC1C:  20D08DE2     ADD sp, sp, 0x20
		   0x0110FC20:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110FC24:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x0110FC28:  000050E3     CMPS r0, r0, 0x0
		   0x0110FC2C:  FAFFFF1A     BNE $-0x10
		   // ──── Block 6 else (==) ────────────────────
		   0x0110FC30:  900094E5     LDR r0, [r4, 0x90]
		   0x0110FC34:  0110A0E3     MOV r1, 0x1
		   0x0110FC38:  9C10C4E5     STRB r1, [r4, 0x9c]
		   0x0110FC3C:  000050E3     CMPS r0, r0, 0x0
		   0x0110FC40:  0400000A     BEQ $+0x18  // if (==) goto 0x0110FC58
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0110FC44:  0C3090E5     LDR r3, [r0, 0xc]
		   0x0110FC48:  0410A0E1     MOV r1, r4
		   0x0110FC4C:  142090E5     LDR r2, [r0, 0x14]
		   0x0110FC50:  200090E5     LDR r0, [r0, 0x20]
		   0x0110FC54:  33FF2FE1     BLX r3  // virtual call: Item.ToString
		   // ──── Block 8 if (==) ────────────────────
		   0x0110FC58:  105094E5     LDR r5, [r4, 0x10]
		   0x0110FC5C:  000055E3     CMPS r0, r5, 0x0
		   0x0110FC60:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FC68
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110FC64:  D92DF9EB     BL $-0x1b4894
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110FC68:  0500A0E1     MOV r0, r5
		   0x0110FC6C:  0010A0E3     MOV r1, 0x0
		   0x0110FC70:  0020A0E3     MOV r2, 0x0
		   0x0110FC74:  0070A0E3     MOV r7, 0x0
		   0x0110FC78:  00F4FEEB     BL $-0x42ff8
		   0x0110FC7C:  48539FE5     LDR r5, [pc, 0x348]
		   0x0110FC80:  05508FE0     ADD r5, pc, r5
		   0x0110FC84:  0000D5E5     LDRB r0, [r5]
		   0x0110FC88:  000050E3     CMPS r0, r0, 0x0
		   0x0110FC8C:  0400001A     BNE $+0x18  // if (!=) goto 0x0110FCA4
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110FC90:  38039FE5     LDR r0, [pc, 0x338]
		   0x0110FC94:  00009FE7     LDR r0, [pc, r0]
		   0x0110FC98:  302DF9EB     BL $-0x1b4b38
		   0x0110FC9C:  0100A0E3     MOV r0, 0x1
		   0x0110FCA0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 12 if (!=) ────────────────────
		   0x0110FCA4:  28039FE5     LDR r0, [pc, 0x328]
		   0x0110FCA8:  00009FE7     LDR r0, [pc, r0]
		   0x0110FCAC:  000090E5     LDR r0, [r0]
		   0x0110FCB0:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0110FCB4:  1C039FE5     LDR r0, [pc, 0x31c]
		   0x0110FCB8:  00009FE7     LDR r0, [pc, r0]
		   0x0110FCBC:  086091E5     LDR r6, [r1, 0x8]
		   0x0110FCC0:  000090E5     LDR r0, [r0]
		   0x0110FCC4:  BE2DF9EB     BL $-0x1b4900
		   0x0110FCC8:  0210A0E3     MOV r1, 0x2
		   0x0110FCCC:  0420A0E3     MOV r2, 0x4
		   0x0110FCD0:  0D30A0E3     MOV r3, 0xd
		   0x0110FCD4:  0050A0E1     MOV r5, r0
		   0x0110FCD8:  F060CDE1     STRD r6, r7, [sp]
		   0x0110FCDC:  F12D08EB     BL $+0x20b7cc  // CALL → EnumCurrencySourceDataContainer..ctor
		   0x0110FCE0:  940094E5     LDR r0, [r4, 0x94]
		   0x0110FCE4:  050050E3     CMPS r0, r0, 0x5
		   0x0110FCE8:  A500008A     BHI $+0x29c  // if (> (unsigned)) goto 0x0110FF84
		   // 
		   // ──── Block 13 else (<= (unsigned)) ────────────────────
		   0x0110FCEC:  04108FE2     ADR r1, pc, 0x4
		   0x0110FCF0:  000191E7     LDR r0, [r1, r0, lsl 2]
		   0x0110FCF4:  00F081E0     ADD pc, r1, r0
		   0x0110FCF8:  18000000     ANDEQ r0, r0, r8, lsl r0
		   0x0110FCFC:  D0010000     LDRDEQ r0, r1, [r0], -r0
		   0x0110FD00:  B0000000     STRHEQ r0, [r0], -r0
		   0x0110FD04:  40010000     ANDEQ r0, r0, r0, asr 2
		   0x0110FD08:  64000000     ANDEQ r0, r0, r4, ror 0
		   0x0110FD0C:  6C020000     ANDEQ r0, r0, ip, ror 4
		   0x0110FD10:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x0110FD14:  00009FE7     LDR r0, [pc, r0]
		   0x0110FD18:  000090E5     LDR r0, [r0]
		   0x0110FD1C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110FD20:  005090E5     LDR r5, [r0]
		   0x0110FD24:  000055E3     CMPS r0, r5, 0x0
		   0x0110FD28:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FD30
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0110FD2C:  A72DF9EB     BL $-0x1b495c
		   // ──── Block 15 if (!=) ────────────────────
		   0x0110FD30:  105095E5     LDR r5, [r5, 0x10]
		   0x0110FD34:  984094E5     LDR r4, [r4, 0x98]
		   0x0110FD38:  000055E3     CMPS r0, r5, 0x0
		   0x0110FD3C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FD44
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x0110FD40:  A22DF9EB     BL $-0x1b4970
		   // ──── Block 17 if (!=) ────────────────────
		   0x0110FD44:  0500A0E1     MOV r0, r5
		   0x0110FD48:  0410A0E1     MOV r1, r4
		   0x0110FD4C:  0120A0E3     MOV r2, 0x1
		   0x0110FD50:  0030A0E3     MOV r3, 0x0
		   0x0110FD54:  9203FFEB     BL $-0x3f1b0
		   0x0110FD58:  840000EA     B $+0x218  // goto 0x0110FF70
		   0x0110FD5C:  94029FE5     LDR r0, [pc, 0x294]
		   0x0110FD60:  00009FE7     LDR r0, [pc, r0]
		   0x0110FD64:  000090E5     LDR r0, [r0]
		   0x0110FD68:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110FD6C:  005090E5     LDR r5, [r0]
		   0x0110FD70:  000055E3     CMPS r0, r5, 0x0
		   0x0110FD74:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FD7C
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0110FD78:  942DF9EB     BL $-0x1b49a8
		   // ──── Block 20 if (!=) ────────────────────
		   0x0110FD7C:  245095E5     LDR r5, [r5, 0x24]
		   0x0110FD80:  984094E5     LDR r4, [r4, 0x98]
		   0x0110FD84:  000055E3     CMPS r0, r5, 0x0
		   0x0110FD88:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FD90
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0110FD8C:  8F2DF9EB     BL $-0x1b49bc
		   // ──── Block 22 if (!=) ────────────────────
		   0x0110FD90:  0500A0E1     MOV r0, r5
		   0x0110FD94:  0410A0E1     MOV r1, r4
		   0x0110FD98:  0020A0E3     MOV r2, 0x0
		   0x0110FD9C:  0030A0E3     MOV r3, 0x0
		   0x0110FDA0:  C5A6FFEB     BL $-0x164e4
		   0x0110FDA4:  710000EA     B $+0x1cc  // goto 0x0110FF70
		   0x0110FDA8:  38029FE5     LDR r0, [pc, 0x238]
		   0x0110FDAC:  00009FE7     LDR r0, [pc, r0]
		   0x0110FDB0:  000090E5     LDR r0, [r0]
		   0x0110FDB4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110FDB8:  006090E5     LDR r6, [r0]
		   0x0110FDBC:  000056E3     CMPS r0, r6, 0x0
		   0x0110FDC0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FDC8
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x0110FDC4:  812DF9EB     BL $-0x1b49f4
		   // ──── Block 25 if (!=) ────────────────────
		   0x0110FDC8:  984094E5     LDR r4, [r4, 0x98]
		   0x0110FDCC:  000055E3     CMPS r0, r5, 0x0
		   0x0110FDD0:  146096E5     LDR r6, [r6, 0x14]
		   0x0110FDD4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FDDC
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x0110FDD8:  7C2DF9EB     BL $-0x1b4a08
		   // ──── Block 27 if (!=) ────────────────────
		   0x0110FDDC:  088095E5     LDR r8, [r5, 0x8]
		   0x0110FDE0:  0C7095E5     LDR r7, [r5, 0xc]
		   0x0110FDE4:  860000EB     BL $+0x220  // CALL → ItemConsumable.GetWSMilestone
		   0x0110FDE8:  0050A0E1     MOV r5, r0
		   0x0110FDEC:  000056E3     CMPS r0, r6, 0x0
		   0x0110FDF0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FDF8
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x0110FDF4:  752DF9EB     BL $-0x1b4a24
		   // ──── Block 29 if (!=) ────────────────────
		   0x0110FDF8:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x0110FDFC:  0010A0E3     MOV r1, 0x0
		   0x0110FE00:  0120A0E3     MOV r2, 0x1
		   0x0110FE04:  0730A0E1     MOV r3, r7
		   0x0110FE08:  00009FE7     LDR r0, [pc, r0]
		   0x0110FE0C:  000090E5     LDR r0, [r0]
		   0x0110FE10:  08108DE5     STR r1, [sp, 0x8]
		   0x0110FE14:  05008DE8     STM sp, {r0, r2}
		   0x0110FE18:  0820A0E1     MOV r2, r8
		   0x0110FE1C:  0C008DE5     STR r0, [sp, 0xc]
		   0x0110FE20:  0600A0E1     MOV r0, r6
		   0x0110FE24:  14108DE5     STR r1, [sp, 0x14]
		   0x0110FE28:  0410A0E1     MOV r1, r4
		   0x0110FE2C:  10508DE5     STR r5, [sp, 0x10]
		   0x0110FE30:  527D0CEB     BL $+0x31f550  // CALL → CoinsSystem.AddCoins
		   0x0110FE34:  4D0000EA     B $+0x13c  // goto 0x0110FF70
		   0x0110FE38:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x0110FE3C:  00009FE7     LDR r0, [pc, r0]
		   0x0110FE40:  000090E5     LDR r0, [r0]
		   0x0110FE44:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110FE48:  006090E5     LDR r6, [r0]
		   0x0110FE4C:  000056E3     CMPS r0, r6, 0x0
		   0x0110FE50:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FE58
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x0110FE54:  5D2DF9EB     BL $-0x1b4a84
		   // ──── Block 32 if (!=) ────────────────────
		   0x0110FE58:  984094E5     LDR r4, [r4, 0x98]
		   0x0110FE5C:  000055E3     CMPS r0, r5, 0x0
		   0x0110FE60:  186096E5     LDR r6, [r6, 0x18]
		   0x0110FE64:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FE6C
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x0110FE68:  582DF9EB     BL $-0x1b4a98
		   // ──── Block 34 if (!=) ────────────────────
		   0x0110FE6C:  088095E5     LDR r8, [r5, 0x8]
		   0x0110FE70:  0C7095E5     LDR r7, [r5, 0xc]
		   0x0110FE74:  620000EB     BL $+0x190  // CALL → ItemConsumable.GetWSMilestone
		   0x0110FE78:  0050A0E1     MOV r5, r0
		   0x0110FE7C:  000056E3     CMPS r0, r6, 0x0
		   0x0110FE80:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FE88
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x0110FE84:  512DF9EB     BL $-0x1b4ab4
		   // ──── Block 36 if (!=) ────────────────────
		   0x0110FE88:  64019FE5     LDR r0, [pc, 0x164]
		   0x0110FE8C:  0010A0E3     MOV r1, 0x0
		   0x0110FE90:  0120A0E3     MOV r2, 0x1
		   0x0110FE94:  0730A0E1     MOV r3, r7
		   0x0110FE98:  00009FE7     LDR r0, [pc, r0]
		   0x0110FE9C:  000090E5     LDR r0, [r0]
		   0x0110FEA0:  08108DE5     STR r1, [sp, 0x8]
		   0x0110FEA4:  05008DE8     STM sp, {r0, r2}
		   0x0110FEA8:  0820A0E1     MOV r2, r8
		   0x0110FEAC:  0C008DE5     STR r0, [sp, 0xc]
		   0x0110FEB0:  0600A0E1     MOV r0, r6
		   0x0110FEB4:  14108DE5     STR r1, [sp, 0x14]
		   0x0110FEB8:  0410A0E1     MOV r1, r4
		   0x0110FEBC:  10508DE5     STR r5, [sp, 0x10]
		   0x0110FEC0:  4E950CEB     BL $+0x325540  // CALL → GemsSystem.AddGems
		   0x0110FEC4:  290000EA     B $+0xac  // goto 0x0110FF70
		   0x0110FEC8:  10019FE5     LDR r0, [pc, 0x110]
		   0x0110FECC:  00009FE7     LDR r0, [pc, r0]
		   0x0110FED0:  000090E5     LDR r0, [r0]
		   0x0110FED4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110FED8:  006090E5     LDR r6, [r0]
		   0x0110FEDC:  000056E3     CMPS r0, r6, 0x0
		   0x0110FEE0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FEE8
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x0110FEE4:  392DF9EB     BL $-0x1b4b14
		   // ──── Block 39 if (!=) ────────────────────
		   0x0110FEE8:  984094E5     LDR r4, [r4, 0x98]
		   0x0110FEEC:  000055E3     CMPS r0, r5, 0x0
		   0x0110FEF0:  1C6096E5     LDR r6, [r6, 0x1c]
		   0x0110FEF4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FEFC
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x0110FEF8:  342DF9EB     BL $-0x1b4b28
		   // ──── Block 41 if (!=) ────────────────────
		   0x0110FEFC:  088095E5     LDR r8, [r5, 0x8]
		   0x0110FF00:  0C7095E5     LDR r7, [r5, 0xc]
		   0x0110FF04:  3E0000EB     BL $+0x100  // CALL → ItemConsumable.GetWSMilestone
		   0x0110FF08:  0050A0E1     MOV r5, r0
		   0x0110FF0C:  000056E3     CMPS r0, r6, 0x0
		   0x0110FF10:  0000001A     BNE $+0x8  // if (!=) goto 0x0110FF18
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x0110FF14:  2D2DF9EB     BL $-0x1b4b44
		   // ──── Block 43 if (!=) ────────────────────
		   0x0110FF18:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0110FF1C:  0010A0E3     MOV r1, 0x0
		   0x0110FF20:  0120A0E3     MOV r2, 0x1
		   0x0110FF24:  0730A0E1     MOV r3, r7
		   0x0110FF28:  00009FE7     LDR r0, [pc, r0]
		   0x0110FF2C:  000090E5     LDR r0, [r0]
		   0x0110FF30:  0C108DE5     STR r1, [sp, 0xc]
		   0x0110FF34:  07008DE8     STM sp, {r0, r1, r2}
		   0x0110FF38:  0820A0E1     MOV r2, r8
		   0x0110FF3C:  14008DE5     STR r0, [sp, 0x14]
		   0x0110FF40:  0600A0E1     MOV r0, r6
		   0x0110FF44:  10108DE5     STR r1, [sp, 0x10]
		   0x0110FF48:  1C108DE5     STR r1, [sp, 0x1c]
		   0x0110FF4C:  0410A0E1     MOV r1, r4
		   0x0110FF50:  18508DE5     STR r5, [sp, 0x18]
		   0x0110FF54:  768B0CEB     BL $+0x322de0  // CALL → EnergySystem.AddEnergy
		   0x0110FF58:  0000A0E3     MOV r0, 0x0
		   0x0110FF5C:  A2EAFEEB     BL $-0x45570
		   0x0110FF60:  020000EA     B $+0x10  // goto 0x0110FF70
		   0x0110FF64:  0400A0E1     MOV r0, r4
		   0x0110FF68:  0110A0E3     MOV r1, 0x1
		   0x0110FF6C:  1EEFFFEB     BL $-0x4380
		   // ──── Block 45 ──────────────────────────────
		   0x0110FF70:  0000A0E3     MOV r0, 0x0
		   0x0110FF74:  0010A0E3     MOV r1, 0x0
		   0x0110FF78:  20D08DE2     ADD sp, sp, 0x20
		   0x0110FF7C:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0110FF80:  0BBBFDEA     B $-0x913cc
		   // ──── Block 46 if (> (unsigned)) ────────────────────
		   0x0110FF84:  70009FE5     LDR r0, [pc, 0x70]
		   0x0110FF88:  00009FE7     LDR r0, [pc, r0]
		   0x0110FF8C:  772CF9EB     BL $-0x1b4e1c
		   0x0110FF90:  0B2DF9EB     BL $-0x1b4bcc
		   0x0110FF94:  0010A0E3     MOV r1, 0x0
		   0x0110FF98:  0040A0E1     MOV r4, r0
		   0x0110FF9C:  797D7AEB     BL $+0x1e9f5ec  // CALL → ArgumentOutOfRangeException..ctor
		   0x0110FFA0:  58009FE5     LDR r0, [pc, 0x58]
		   0x0110FFA4:  00009FE7     LDR r0, [pc, r0]
		   0x0110FFA8:  702CF9EB     BL $-0x1b4e38
		   0x0110FFAC:  0010A0E1     MOV r1, r0
		   0x0110FFB0:  0400A0E1     MOV r0, r4
		   0x0110FFB4:  B12CF9EB     BL $-0x1b4d34
		   0x0110FFB8:  522CF9EB     BL $-0x1b4eb0
		   0x0110FFBC:  57C21103     TSTSEQ ip, r1, 0x70000005
		   0x0110FFC0:  3080F602     RSCSEQ r8, r6, 0x30
		   0x0110FFC4:  D88BF602     RSCSEQ r8, r6, 0x36000
		   0x0110FFC8:  5C6EF602     RSCSEQ r6, r6, 0x5c0
		   0x0110FFCC:  61C01103     TSTSEQ ip, r1, 0x61
		   0x0110FFD0:  BC96F602     RSCSEQ sb, r6, 0xbc00000
		   0x0110FFD4:  A896F602     RSCSEQ sb, r6, 0xa800000
		   0x0110FFD8:  F88AF602     RSCSEQ r8, r6, 0xf8000
		   0x0110FFDC:  E87EF602     RSCSEQ r7, r6, 0xe80
		   0x0110FFE0:  307DF602     RSCSEQ r7, r6, 0xc00
		   0x0110FFE4:  186BF602     RSCSEQ r6, r6, 0x6000
		   0x0110FFE8:  507EF602     RSCSEQ r7, r6, 0x500
		   0x0110FFEC:  386CF602     RSCSEQ r6, r6, 0x3800
		   0x0110FFF0:  C07DF602     RSCSEQ r7, r6, 0x3000
		   0x0110FFF4:  A86BF602     RSCSEQ r6, r6, 0x2a000
		   0x0110FFF8:  9C7EF602     RSCSEQ r7, r6, 0x9c0
		   0x0110FFFC:  2C70F602     RSCSEQ r7, r6, 0x2c
		   0x01110000:  EC99F602     RSCSEQ sb, r6, 0x3b0000
		*/
	}

	// RVA: 0x11100B4 Offset: 0x11100B4 VA: 0x11100B4 Slot: 21
	public override void DestroyWithAnim(Vector3 mergePos) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011100B4:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	// RVA: 0x1110774 Offset: 0x1110774 VA: 0x1110774 Slot: 22
	public override void ReturnToPool() {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110774:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01110778:  BC509FE5     LDR r5, [pc, 0xbc]
		   0x0111077C:  0040A0E1     MOV r4, r0
		   0x01110780:  05508FE0     ADD r5, pc, r5
		   0x01110784:  0000D5E5     LDRB r0, [r5]
		   0x01110788:  000050E3     CMPS r0, r0, 0x0
		   0x0111078C:  0400001A     BNE $+0x18  // if (!=) goto 0x011107A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110790:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x01110794:  00009FE7     LDR r0, [pc, r0]
		   0x01110798:  702AF9EB     BL $-0x1b5638
		   0x0111079C:  0100A0E3     MOV r0, 0x1
		   0x011107A0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011107A4:  A00094E5     LDR r0, [r4, 0xa0]
		   0x011107A8:  0010A0E3     MOV r1, 0x0
		   0x011107AC:  5AE611EB     BL $+0x479970  // CALL → TweenExtensions.IsActive
		   0x011107B0:  000050E3     CMPS r0, r0, 0x0
		   0x011107B4:  0300000A     BEQ $+0x14  // if (==) goto 0x011107C8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011107B8:  A00094E5     LDR r0, [r4, 0xa0]
		   0x011107BC:  0010A0E3     MOV r1, 0x0
		   0x011107C0:  0020A0E3     MOV r2, 0x0
		   0x011107C4:  7DDE11EB     BL $+0x4779fc  // CALL → TweenExtensions.Kill
		   // ──── Block 4 if (==) ────────────────────
		   0x011107C8:  74009FE5     LDR r0, [pc, 0x74]
		   0x011107CC:  00009FE7     LDR r0, [pc, r0]
		   0x011107D0:  8C5094E5     LDR r5, [r4, 0x8c]
		   0x011107D4:  000090E5     LDR r0, [r0]
		   0x011107D8:  741090E5     LDR r1, [r0, 0x74]
		   0x011107DC:  000051E3     CMPS r0, r1, 0x0
		   0x011107E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011107E8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011107E4:  AA2AF9EB     BL $-0x1b5550
		   // ──── Block 6 if (!=) ────────────────────
		   0x011107E8:  0500A0E1     MOV r0, r5
		   0x011107EC:  0010A0E3     MOV r1, 0x0
		   0x011107F0:  819E3BEB     BL $+0xee7a0c  // CALL → sub_1FF81FC
		   0x011107F4:  000050E3     CMPS r0, r0, 0x0
		   0x011107F8:  0600000A     BEQ $+0x20  // if (==) goto 0x01110818
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x011107FC:  8C5094E5     LDR r5, [r4, 0x8c]
		   0x01110800:  000055E3     CMPS r0, r5, 0x0
		   0x01110804:  0000001A     BNE $+0x8  // if (!=) goto 0x0111080C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01110808:  F02AF9EB     BL $-0x1b5438
		   // ──── Block 9 if (!=) ────────────────────
		   0x0111080C:  0500A0E1     MOV r0, r5
		   0x01110810:  0010A0E3     MOV r1, 0x0
		   0x01110814:  A3AEFFEB     BL $-0x1456c
		   // ──── Block 10 if (==) ────────────────────
		   0x01110818:  000094E5     LDR r0, [r4]
		   0x0111081C:  0010A0E3     MOV r1, 0x0
		   0x01110820:  283190E5     LDR r3, [r0, 0x128]
		   0x01110824:  2C2190E5     LDR r2, [r0, 0x12c]
		   0x01110828:  0400A0E1     MOV r0, r4
		   0x0111082C:  33FF2FE1     BLX r3  // virtual call: vtable+0x128
		   0x01110830:  0400A0E1     MOV r0, r4
		   0x01110834:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01110838:  BDFAFFEA     B $-0x1504
		   0x0111083C:  91B61103     TSTSEQ fp, r1, 0x9100000
		   0x01110840:  A45DF602     RSCSEQ r5, r6, 0x2900
		   0x01110844:  6C5DF602     RSCSEQ r5, r6, 0x1b00
		*/
	}

	// RVA: 0x1110848 Offset: 0x1110848 VA: 0x1110848 Slot: 31
	public override void Show() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110848:  B7F1FFEA     B $-0x391c
		*/
	}

	// RVA: 0x1110850 Offset: 0x1110850 VA: 0x1110850 Slot: 32
	public override void Hide() {
		/* Disassembly (ARM32, 47 instructions, 0xBC bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110850:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01110854:  0040A0E1     MOV r4, r0
		   0x01110858:  000090E5     LDR r0, [r0]
		   0x0111085C:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x01110860:  0400A0E1     MOV r0, r4
		   0x01110864:  0310A0E1     MOV r1, r3
		   0x01110868:  32FF2FE1     BLX r2
		   0x0111086C:  000050E3     CMPS r0, r0, 0x0
		   0x01110870:  0700000A     BEQ $+0x24  // if (==) goto 0x01110894
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01110874:  845094E5     LDR r5, [r4, 0x84]
		   0x01110878:  000055E3     CMPS r0, r5, 0x0
		   0x0111087C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110884
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x01110880:  D22AF9EB     BL $-0x1b54b0
		   // ──── Block 3 if (!=) ────────────────────
		   0x01110884:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x01110888:  000050E3     CMPS r0, r0, 0x0
		   0x0111088C:  0400A011     MOVNE r0, r4
		   0x01110890:  53E9FF1B     BLNE $-0x5aac
		   // ──── Block 4 if (==) ────────────────────
		   0x01110894:  0400A0E1     MOV r0, r4
		   0x01110898:  05F2FFEB     BL $-0x37e4
		   0x0111089C:  285094E5     LDR r5, [r4, 0x28]
		   0x011108A0:  000055E3     CMPS r0, r5, 0x0
		   0x011108A4:  0000001A     BNE $+0x8  // if (!=) goto 0x011108AC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011108A8:  C82AF9EB     BL $-0x1b54d8
		   // ──── Block 6 if (!=) ────────────────────
		   0x011108AC:  0500A0E1     MOV r0, r5
		   0x011108B0:  0010A0E3     MOV r1, 0x0
		   0x011108B4:  0020A0E3     MOV r2, 0x0
		   0x011108B8:  0060A0E3     MOV r6, 0x0
		   0x011108BC:  BE9D3BEB     BL $+0xee7700  // CALL → sub_1FF7FBC
		   0x011108C0:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x011108C4:  906084E5     STR r6, [r4, 0x90]
		   0x011108C8:  000055E3     CMPS r0, r5, 0x0
		   0x011108CC:  0000001A     BNE $+0x8  // if (!=) goto 0x011108D4
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x011108D0:  BE2AF9EB     BL $-0x1b5500
		   // ──── Block 8 if (!=) ────────────────────
		   0x011108D4:  0500A0E1     MOV r0, r5
		   0x011108D8:  0010A0E3     MOV r1, 0x0
		   0x011108DC:  0020A0E3     MOV r2, 0x0
		   0x011108E0:  B59D3BEB     BL $+0xee76dc  // CALL → sub_1FF7FBC
		   0x011108E4:  000094E5     LDR r0, [r4]
		   0x011108E8:  0010A0E3     MOV r1, 0x0
		   0x011108EC:  EC5090E5     LDR r5, [r0, 0xec]
		   0x011108F0:  E83090E5     LDR r3, [r0, 0xe8]
		   0x011108F4:  0000E0E3     MVN r0, r0, 0x0
		   0x011108F8:  340084E5     STR r0, [r4, 0x34]
		   0x011108FC:  0400A0E1     MOV r0, r4
		   0x01110900:  0520A0E1     MOV r2, r5
		   0x01110904:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01110908:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x11103C0 Offset: 0x11103C0 VA: 0x11103C0
	private void CreateFlyingCurrency(int count) {
		/* Disassembly (ARM32, 237 instructions, 0x3B4 bytes):
		   // CFG: 28 blocks, 25 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011103C0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011103C4:  2CD04DE2     SUB sp, sp, 0x2c
		   0x011103C8:  1C108DE5     STR r1, [sp, 0x1c]
		   0x011103CC:  0050A0E1     MOV r5, r0
		   0x011103D0:  40439FE5     LDR r4, [pc, 0x340]
		   0x011103D4:  04408FE0     ADD r4, pc, r4
		   0x011103D8:  0000D4E5     LDRB r0, [r4]
		   0x011103DC:  000050E3     CMPS r0, r0, 0x0
		   0x011103E0:  1900001A     BNE $+0x6c  // if (!=) goto 0x0111044C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011103E4:  30039FE5     LDR r0, [pc, 0x330]
		   0x011103E8:  00009FE7     LDR r0, [pc, r0]
		   0x011103EC:  5B2BF9EB     BL $-0x1b528c
		   0x011103F0:  28039FE5     LDR r0, [pc, 0x328]
		   0x011103F4:  00009FE7     LDR r0, [pc, r0]
		   0x011103F8:  582BF9EB     BL $-0x1b5298
		   0x011103FC:  20039FE5     LDR r0, [pc, 0x320]
		   0x01110400:  00009FE7     LDR r0, [pc, r0]
		   0x01110404:  552BF9EB     BL $-0x1b52a4
		   0x01110408:  18039FE5     LDR r0, [pc, 0x318]
		   0x0111040C:  00009FE7     LDR r0, [pc, r0]
		   0x01110410:  522BF9EB     BL $-0x1b52b0
		   0x01110414:  10039FE5     LDR r0, [pc, 0x310]
		   0x01110418:  00009FE7     LDR r0, [pc, r0]
		   0x0111041C:  4F2BF9EB     BL $-0x1b52bc
		   0x01110420:  08039FE5     LDR r0, [pc, 0x308]
		   0x01110424:  00009FE7     LDR r0, [pc, r0]
		   0x01110428:  4C2BF9EB     BL $-0x1b52c8
		   0x0111042C:  00039FE5     LDR r0, [pc, 0x300]
		   0x01110430:  00009FE7     LDR r0, [pc, r0]
		   0x01110434:  492BF9EB     BL $-0x1b52d4
		   0x01110438:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x0111043C:  00009FE7     LDR r0, [pc, r0]
		   0x01110440:  462BF9EB     BL $-0x1b52e0
		   0x01110444:  0100A0E3     MOV r0, 0x1
		   0x01110448:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111044C:  E8029FE5     LDR r0, [pc, 0x2e8]
		   0x01110450:  00009FE7     LDR r0, [pc, r0]
		   0x01110454:  000090E5     LDR r0, [r0]
		   0x01110458:  D92BF9EB     BL $-0x1b5094
		   0x0111045C:  0010A0E3     MOV r1, 0x0
		   0x01110460:  0060A0E1     MOV r6, r0
		   0x01110464:  0040A0E3     MOV r4, 0x0
		   0x01110468:  DF137EEB     BL $+0x1f84f84  // CALL → Object..ctor
		   0x0111046C:  000056E3     CMPS r0, r6, 0x0
		   0x01110470:  0000001A     BNE $+0x8  // if (!=) goto 0x01110478
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01110474:  D52BF9EB     BL $-0x1b50a4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01110478:  940095E5     LDR r0, [r5, 0x94]
		   0x0111047C:  084086E5     STR r4, [r6, 0x8]
		   0x01110480:  030050E3     CMPS r0, r0, 0x3
		   0x01110484:  0C4086E5     STR r4, [r6, 0xc]
		   0x01110488:  3B00008A     BHI $+0xf4  // if (> (unsigned)) goto 0x0111057C
		   // 
		   // ──── Block 5 else (<= (unsigned)) ────────────────────
		   0x0111048C:  04108FE2     ADR r1, pc, 0x4
		   0x01110490:  000191E7     LDR r0, [r1, r0, lsl 2]
		   0x01110494:  00F081E0     ADD pc, r1, r0
		   0x01110498:  10000000     ANDEQ r0, r0, r0, lsl r0
		   0x0111049C:  AC000000     ANDEQ r0, r0, ip, lsr 1
		   0x011104A0:  44000000     ANDEQ r0, r0, r4, asr 0
		   0x011104A4:  78000000     ANDEQ r0, r0, r8, ror r0
		   0x011104A8:  90029FE5     LDR r0, [pc, 0x290]
		   0x011104AC:  00009FE7     LDR r0, [pc, r0]
		   0x011104B0:  000090E5     LDR r0, [r0]
		   0x011104B4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011104B8:  004090E5     LDR r4, [r0]
		   0x011104BC:  000054E3     CMPS r0, r4, 0x0
		   0x011104C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011104C8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011104C4:  C12BF9EB     BL $-0x1b50f4
		   // ──── Block 7 if (!=) ────────────────────
		   0x011104C8:  100094E5     LDR r0, [r4, 0x10]
		   0x011104CC:  080086E5     STR r0, [r6, 0x8]
		   0x011104D0:  0000A0E3     MOV r0, 0x0
		   0x011104D4:  5FA601EB     BL $+0x69984  // CALL → ProfileStorage.get_numExp
		   0x011104D8:  250000EA     B $+0x9c  // goto 0x01110574
		   0x011104DC:  60029FE5     LDR r0, [pc, 0x260]
		   0x011104E0:  00009FE7     LDR r0, [pc, r0]
		   0x011104E4:  000090E5     LDR r0, [r0]
		   0x011104E8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011104EC:  004090E5     LDR r4, [r0]
		   0x011104F0:  000054E3     CMPS r0, r4, 0x0
		   0x011104F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011104FC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x011104F8:  B42BF9EB     BL $-0x1b5128
		   // ──── Block 10 if (!=) ────────────────────
		   0x011104FC:  140094E5     LDR r0, [r4, 0x14]
		   0x01110500:  080086E5     STR r0, [r6, 0x8]
		   0x01110504:  0000A0E3     MOV r0, 0x0
		   0x01110508:  3AAA01EB     BL $+0x6a8f0  // CALL → ProfileStorage.get_numCoins
		   0x0111050C:  180000EA     B $+0x68  // goto 0x01110574
		   0x01110510:  30029FE5     LDR r0, [pc, 0x230]
		   0x01110514:  00009FE7     LDR r0, [pc, r0]
		   0x01110518:  000090E5     LDR r0, [r0]
		   0x0111051C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01110520:  004090E5     LDR r4, [r0]
		   0x01110524:  000054E3     CMPS r0, r4, 0x0
		   0x01110528:  0000001A     BNE $+0x8  // if (!=) goto 0x01110530
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0111052C:  A72BF9EB     BL $-0x1b515c
		   // ──── Block 13 if (!=) ────────────────────
		   0x01110530:  180094E5     LDR r0, [r4, 0x18]
		   0x01110534:  080086E5     STR r0, [r6, 0x8]
		   0x01110538:  0000A0E3     MOV r0, 0x0
		   0x0111053C:  48AA01EB     BL $+0x6a928  // CALL → ProfileStorage.get_numGems
		   0x01110540:  0B0000EA     B $+0x34  // goto 0x01110574
		   0x01110544:  00029FE5     LDR r0, [pc, 0x200]
		   0x01110548:  00009FE7     LDR r0, [pc, r0]
		   0x0111054C:  000090E5     LDR r0, [r0]
		   0x01110550:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01110554:  004090E5     LDR r4, [r0]
		   0x01110558:  000054E3     CMPS r0, r4, 0x0
		   0x0111055C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110564
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01110560:  9A2BF9EB     BL $-0x1b5190
		   // ──── Block 16 if (!=) ────────────────────
		   0x01110564:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01110568:  080086E5     STR r0, [r6, 0x8]
		   0x0111056C:  0000A0E3     MOV r0, 0x0
		   0x01110570:  5AA601EB     BL $+0x69970  // CALL → ProfileStorage.get_numEnergy
		   // ──── Block 17 ──────────────────────────────
		   0x01110574:  0040A0E1     MOV r4, r0
		   0x01110578:  0C0086E5     STR r0, [r6, 0xc]
		   // ──── Block 18 if (> (unsigned)) ────────────────────
		   0x0111057C:  981095E5     LDR r1, [r5, 0x98]
		   0x01110580:  C8819FE5     LDR r8, [pc, 0x1c8]
		   0x01110584:  041081E0     ADD r1, r1, r4
		   0x01110588:  08809FE7     LDR r8, [pc, r8]
		   0x0111058C:  0C1086E5     STR r1, [r6, 0xc]
		   0x01110590:  000098E5     LDR r0, [r8]
		   0x01110594:  8A2BF9EB     BL $-0x1b51d0
		   0x01110598:  0040A0E1     MOV r4, r0
		   0x0111059C:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x011105A0:  0610A0E1     MOV r1, r6
		   0x011105A4:  0030A0E3     MOV r3, 0x0
		   0x011105A8:  0090A0E3     MOV sb, 0x0
		   0x011105AC:  00009FE7     LDR r0, [pc, r0]
		   0x011105B0:  002090E5     LDR r2, [r0]
		   0x011105B4:  0400A0E1     MOV r0, r4
		   0x011105B8:  61737AEB     BL $+0x1e9cd8c  // CALL → Action..ctor
		   0x011105BC:  94019FE5     LDR r0, [pc, 0x194]
		   0x011105C0:  00009FE7     LDR r0, [pc, r0]
		   0x011105C4:  000090E5     LDR r0, [r0]
		   0x011105C8:  7D2BF9EB     BL $-0x1b5204
		   0x011105CC:  0410A0E1     MOV r1, r4
		   0x011105D0:  0020A0E3     MOV r2, 0x0
		   0x011105D4:  0070A0E1     MOV r7, r0
		   0x011105D8:  EBBE0FEB     BL $+0x3efbb4  // CALL → OnceInvokedActionCommand..ctor
		   0x011105DC:  78419FE5     LDR r4, [pc, 0x178]
		   0x011105E0:  107086E5     STR r7, [r6, 0x10]
		   0x011105E4:  04408FE0     ADD r4, pc, r4
		   0x011105E8:  0000D4E5     LDRB r0, [r4]
		   0x011105EC:  000050E3     CMPS r0, r0, 0x0
		   0x011105F0:  0400001A     BNE $+0x18  // if (!=) goto 0x01110608
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x011105F4:  64019FE5     LDR r0, [pc, 0x164]
		   0x011105F8:  00009FE7     LDR r0, [pc, r0]
		   0x011105FC:  D72AF9EB     BL $-0x1b549c
		   0x01110600:  0100A0E3     MOV r0, 0x1
		   0x01110604:  0000C4E5     STRB r0, [r4]
		   // ──── Block 20 if (!=) ────────────────────
		   0x01110608:  54019FE5     LDR r0, [pc, 0x154]
		   0x0111060C:  00009FE7     LDR r0, [pc, r0]
		   0x01110610:  000090E5     LDR r0, [r0]
		   0x01110614:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01110618:  48019FE5     LDR r0, [pc, 0x148]
		   0x0111061C:  00009FE7     LDR r0, [pc, r0]
		   0x01110620:  08A091E5     LDR r10, [r1, 0x8]
		   0x01110624:  000090E5     LDR r0, [r0]
		   0x01110628:  652BF9EB     BL $-0x1b5264
		   0x0111062C:  0210A0E3     MOV r1, 0x2
		   0x01110630:  0420A0E3     MOV r2, 0x4
		   0x01110634:  0D30A0E3     MOV r3, 0xd
		   0x01110638:  00A08DE5     STR r10, [sp]
		   0x0111063C:  0040A0E1     MOV r4, r0
		   0x01110640:  04908DE5     STR sb, [sp, 0x4]
		   0x01110644:  972B08EB     BL $+0x20ae64  // CALL → EnumCurrencySourceDataContainer..ctor
		   0x01110648:  0500A0E1     MOV r0, r5
		   0x0111064C:  0010A0E3     MOV r1, 0x0
		   0x01110650:  949095E5     LDR sb, [r5, 0x94]
		   0x01110654:  149E3BEB     BL $+0xee7858  // CALL → sub_1FF7EAC
		   0x01110658:  0050A0E1     MOV r5, r0
		   0x0111065C:  000050E3     CMPS r0, r0, 0x0
		   0x01110660:  0000001A     BNE $+0x8  // if (!=) goto 0x01110668
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x01110664:  592BF9EB     BL $-0x1b5294
		   // ──── Block 22 if (!=) ────────────────────
		   0x01110668:  20008DE2     ADD r0, sp, 0x20
		   0x0111066C:  0510A0E1     MOV r1, r5
		   0x01110670:  0020A0E3     MOV r2, 0x0
		   0x01110674:  CA9E3BEB     BL $+0xee7b30  // CALL → sub_1FF81A4
		   0x01110678:  000098E5     LDR r0, [r8]
		   0x0111067C:  20B09DE5     LDR fp, [sp, 0x20]
		   0x01110680:  24709DE5     LDR r7, [sp, 0x24]
		   0x01110684:  28A09DE5     LDR r10, [sp, 0x28]
		   0x01110688:  4D2BF9EB     BL $-0x1b52c4
		   0x0111068C:  0050A0E1     MOV r5, r0
		   0x01110690:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x01110694:  0610A0E1     MOV r1, r6
		   0x01110698:  0030A0E3     MOV r3, 0x0
		   0x0111069C:  00009FE7     LDR r0, [pc, r0]
		   0x011106A0:  002090E5     LDR r2, [r0]
		   0x011106A4:  0500A0E1     MOV r0, r5
		   0x011106A8:  25737AEB     BL $+0x1e9cc9c  // CALL → Action..ctor
		   0x011106AC:  000054E3     CMPS r0, r4, 0x0
		   0x011106B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011106B8
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x011106B4:  452BF9EB     BL $-0x1b52e4
		   // ──── Block 24 if (!=) ────────────────────
		   0x011106B8:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x011106BC:  00009FE7     LDR r0, [pc, r0]
		   0x011106C0:  084094E5     LDR r4, [r4, 0x8]
		   0x011106C4:  000090E5     LDR r0, [r0]
		   0x011106C8:  741090E5     LDR r1, [r0, 0x74]
		   0x011106CC:  000051E3     CMPS r0, r1, 0x0
		   0x011106D0:  0000001A     BNE $+0x8  // if (!=) goto 0x011106D8
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x011106D4:  EE2AF9EB     BL $-0x1b5440
		   // ──── Block 26 if (!=) ────────────────────
		   0x011106D8:  CD1C0CE3     MOV r1, 0xcccd
		   0x011106DC:  0000A0E3     MOV r0, 0x0
		   0x011106E0:  CC1D43E3     MOVT r1, 0x3dcc
		   0x011106E4:  03008DE8     STM sp, {r0, r1}
		   0x011106E8:  0720A0E1     MOV r2, r7
		   0x011106EC:  1C109DE5     LDR r1, [sp, 0x1c]
		   0x011106F0:  0A30A0E1     MOV r3, r10
		   0x011106F4:  08108DE5     STR r1, [sp, 0x8]
		   0x011106F8:  0B10A0E1     MOV r1, fp
		   0x011106FC:  14008DE5     STR r0, [sp, 0x14]
		   0x01110700:  0900A0E1     MOV r0, sb
		   0x01110704:  0C508DE5     STR r5, [sp, 0xc]
		   0x01110708:  10408DE5     STR r4, [sp, 0x10]
		   0x0111070C:  D6C906EB     BL $+0x1b2760  // CALL → FlyingCurrency.CreateAndFlyCanvas
		   0x01110710:  2CD08DE2     ADD sp, sp, 0x2c
		   0x01110714:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x01110718:  3EBA1103     TSTSEQ fp, r1, 0x3e000
		   0x0111071C:  DC64F602     RSCSEQ r6, r6, 0xdc000000
		   0x01110720:  0878F602     RSCSEQ r7, r6, 0x80000
		   0x01110724:  B083F602     RSCSEQ r8, r6, 0xc0000002
		   0x01110728:  F477F602     RSCSEQ r7, r6, 0x3d00000
		   0x0111072C:  B493F602     RSCSEQ sb, r6, 0xd0000002
		   0x01110730:  7895F602     RSCSEQ sb, r6, 0x1e000000
		   0x01110734:  7095F602     RSCSEQ sb, r6, 0x1c000000
		   0x01110738:  6895F602     RSCSEQ sb, r6, 0x1a000000
		   0x0111073C:  5495F602     RSCSEQ sb, r6, 0x15000000
		   0x01110740:  5077F602     RSCSEQ r7, r6, 0x1400000
		   0x01110744:  1C77F602     RSCSEQ r7, r6, 0x700000
		   0x01110748:  E876F602     RSCSEQ r7, r6, 0xe800000
		   0x0111074C:  B476F602     RSCSEQ r7, r6, 0xb400000
		   0x01110750:  3C63F602     RSCSEQ r6, r6, 0xf0000000
		   0x01110754:  F093F602     RSCSEQ sb, r6, 0xc0000003
		   0x01110758:  0C92F602     RSCSEQ sb, r6, 0xc0000000
		   0x0111075C:  FDB61103     TSTSEQ fp, r1, 0xfd00000
		   0x01110760:  588DF602     RSCSEQ r8, r6, 0x1600
		   0x01110764:  448DF602     RSCSEQ r8, r6, 0x1100
		   0x01110768:  9481F602     RSCSEQ r8, r6, 0x25
		   0x0111076C:  0493F602     RSCSEQ sb, r6, 0x10000000
		   0x01110770:  4475F602     RSCSEQ r7, r6, 0x11000000
		*/
	}

	// RVA: 0x1110004 Offset: 0x1110004 VA: 0x1110004
	private int GetWSMilestone() {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110004:  10402DE9     PUSH {r4, lr}
		   0x01110008:  20D04DE2     SUB sp, sp, 0x20
		   0x0111000C:  94409FE5     LDR r4, [pc, 0x94]
		   0x01110010:  04408FE0     ADD r4, pc, r4
		   0x01110014:  0000D4E5     LDRB r0, [r4]
		   0x01110018:  000050E3     CMPS r0, r0, 0x0
		   0x0111001C:  0400001A     BNE $+0x18  // if (!=) goto 0x01110034
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110020:  84009FE5     LDR r0, [pc, 0x84]
		   0x01110024:  00009FE7     LDR r0, [pc, r0]
		   0x01110028:  4C2CF9EB     BL $-0x1b4ec8
		   0x0111002C:  0100A0E3     MOV r0, 0x1
		   0x01110030:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110034:  0000A0E3     MOV r0, 0x0
		   0x01110038:  0010A0E3     MOV r1, 0x0
		   0x0111003C:  14008DE5     STR r0, [sp, 0x14]
		   0x01110040:  10008DE5     STR r0, [sp, 0x10]
		   0x01110044:  18008DE5     STR r0, [sp, 0x18]
		   0x01110048:  0D00A0E1     MOV r0, sp
		   0x0111004C:  BD5500EB     BL $+0x156fc  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x01110050:  58009FE5     LDR r0, [pc, 0x58]
		   0x01110054:  00009FE7     LDR r0, [pc, r0]
		*/
	}

	// RVA: 0x1110914 Offset: 0x1110914 VA: 0x1110914
	public void .ctor() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110914:  1BFBFFEA     B $-0x138c
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110918 Offset: 0x1110918 VA: 0x1110918
	private void <DestroyWithAnim>b__14_0() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110918:  001090E5     LDR r1, [r0]
		   0x0111091C:  702191E5     LDR r2, [r1, 0x170]
		   0x01110920:  741191E5     LDR r1, [r1, 0x174]
		   0x01110924:  12FF2FE1     BX r2
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110928 Offset: 0x1110928 VA: 0x1110928
	private void <DestroyWithAnim>b__14_1() {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 8 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110928:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0111092C:  20D04DE2     SUB sp, sp, 0x20
		   0x01110930:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x01110934:  0040A0E1     MOV r4, r0
		   0x01110938:  05508FE0     ADD r5, pc, r5
		   0x0111093C:  0000D5E5     LDRB r0, [r5]
		   0x01110940:  000050E3     CMPS r0, r0, 0x0
		   0x01110944:  0400001A     BNE $+0x18  // if (!=) goto 0x0111095C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110948:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x0111094C:  00009FE7     LDR r0, [pc, r0]
		   0x01110950:  022AF9EB     BL $-0x1b57f0
		   0x01110954:  0100A0E3     MOV r0, 0x1
		   0x01110958:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111095C:  0400A0E1     MOV r0, r4
		   0x01110960:  0010A0E3     MOV r1, 0x0
		   0x01110964:  509D3BEB     BL $+0xee7548  // CALL → sub_1FF7EAC
		   0x01110968:  0050A0E1     MOV r5, r0
		   0x0111096C:  000050E3     CMPS r0, r0, 0x0
		   0x01110970:  0000001A     BNE $+0x8  // if (!=) goto 0x01110978
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01110974:  952AF9EB     BL $-0x1b55a4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01110978:  14008DE2     ADD r0, sp, 0x14
		   0x0111097C:  0510A0E1     MOV r1, r5
		   0x01110980:  0020A0E3     MOV r2, 0x0
		   0x01110984:  0080A0E3     MOV r8, 0x0
		   0x01110988:  059E3BEB     BL $+0xee781c  // CALL → sub_1FF81A4
		   0x0111098C:  105094E5     LDR r5, [r4, 0x10]
		   0x01110990:  14909DE5     LDR sb, [sp, 0x14]
		   0x01110994:  18609DE5     LDR r6, [sp, 0x18]
		   0x01110998:  000055E3     CMPS r0, r5, 0x0
		   0x0111099C:  1C709DE5     LDR r7, [sp, 0x1c]
		   0x011109A0:  0500A0E1     MOV r0, r5
		   0x011109A4:  0300001A     BNE $+0x14  // if (!=) goto 0x011109B8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011109A8:  882AF9EB     BL $-0x1b55d8
		   0x011109AC:  100094E5     LDR r0, [r4, 0x10]
		   0x011109B0:  000050E3     CMPS r0, r0, 0x0
		   0x011109B4:  1D00000A     BEQ $+0x7c  // if (==) goto 0x01110A30
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x011109B8:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x011109BC:  0620A0E1     MOV r2, r6
		   0x011109C0:  1C1095E5     LDR r1, [r5, 0x1c]
		   0x011109C4:  0730A0E1     MOV r3, r7
		   0x011109C8:  00108DE5     STR r1, [sp]
		   0x011109CC:  0910A0E1     MOV r1, sb
		   0x011109D0:  01018DE9     STMIA sp, {r0, r8}
		   0x011109D4:  0100A0E3     MOV r0, 0x1
		   0x011109D8:  0C808DE5     STR r8, [sp, 0xc]
		   0x011109DC:  48BBFFEB     BL $-0x112d8
		   0x011109E0:  54009FE5     LDR r0, [pc, 0x54]
		   0x011109E4:  00009FE7     LDR r0, [pc, r0]
		   0x011109E8:  000090E5     LDR r0, [r0]
		   0x011109EC:  742AF9EB     BL $-0x1b5628
		   0x011109F0:  0050A0E1     MOV r5, r0
		   0x011109F4:  000094E5     LDR r0, [r4]
		   0x011109F8:  0410A0E1     MOV r1, r4
		   0x011109FC:  0030A0E3     MOV r3, 0x0
		   0x01110A00:  742190E5     LDR r2, [r0, 0x174]
		   0x01110A04:  0500A0E1     MOV r0, r5
		   0x01110A08:  39C111EB     BL $+0x4704ec  // CALL → TweenCallback..ctor
		   0x01110A0C:  0A070DE3     MOV r0, 0xd70a
		   0x01110A10:  0510A0E1     MOV r1, r5
		   0x01110A14:  230C43E3     MOVT r0, 0x3c23
		   0x01110A18:  0120A0E3     MOV r2, 0x1
		   0x01110A1C:  0030A0E3     MOV r3, 0x0
		   0x01110A20:  98DA11EB     BL $+0x476a68  // CALL → DOVirtual.DelayedCall
		   0x01110A24:  A00084E5     STR r0, [r4, 0xa0]
		   0x01110A28:  20D08DE2     ADD sp, sp, 0x20
		   0x01110A2C:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 7 if (==) ────────────────────
		   0x01110A30:  662AF9EB     BL $-0x1b5660
		   0x01110A34:  DCB41103     TSTSEQ fp, r1, 0xdc000000
		   0x01110A38:  606DF602     RSCSEQ r6, r6, 0x1800
		   0x01110A3C:  C86CF602     RSCSEQ r6, r6, 0xc800
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass18_0 // TypeDefIndex: 1302
{

	// Fields
	public ICurrencySystem system; // 0x8
	public int targetValue; // 0xC
	public OnceInvokedActionCommand endEventHandler; // 0x10

	// Methods

	// RVA: 0x111090C Offset: 0x111090C VA: 0x111090C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111090C:  0010A0E3     MOV r1, 0x0
		   0x01110910:  B5127EEA     B $+0x1f84adc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1110A40 Offset: 0x1110A40 VA: 0x1110A40
	internal void <CreateFlyingCurrency>b__0() {
		/* Disassembly (ARM32, 68 instructions, 0x110 bytes):
		   // CFG: 15 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110A40:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01110A44:  F0409FE5     LDR r4, [pc, 0xf0]
		   0x01110A48:  0050A0E1     MOV r5, r0
		   0x01110A4C:  04408FE0     ADD r4, pc, r4
		   0x01110A50:  0000D4E5     LDRB r0, [r4]
		   0x01110A54:  000050E3     CMPS r0, r0, 0x0
		   0x01110A58:  0700001A     BNE $+0x24  // if (!=) goto 0x01110A7C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110A5C:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x01110A60:  00009FE7     LDR r0, [pc, r0]
		   0x01110A64:  BD29F9EB     BL $-0x1b5904
		   0x01110A68:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x01110A6C:  00009FE7     LDR r0, [pc, r0]
		   0x01110A70:  BA29F9EB     BL $-0x1b5910
		   0x01110A74:  0100A0E3     MOV r0, 0x1
		   0x01110A78:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110A7C:  084095E5     LDR r4, [r5, 0x8]
		   0x01110A80:  000054E3     CMPS r0, r4, 0x0
		   0x01110A84:  1300000A     BEQ $+0x54  // if (==) goto 0x01110AD8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01110A88:  000094E5     LDR r0, [r4]
		   0x01110A8C:  B4109FE5     LDR r1, [pc, 0xb4]
		   0x01110A90:  01109FE7     LDR r1, [pc, r1]
		   0x01110A94:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x01110A98:  0C6095E5     LDR r6, [r5, 0xc]
		   0x01110A9C:  001091E5     LDR r1, [r1]
		   0x01110AA0:  000052E3     CMPS r0, r2, 0x0
		   0x01110AA4:  0700000A     BEQ $+0x24  // if (==) goto 0x01110AC8
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x01110AA8:  583090E5     LDR r3, [r0, 0x58]
		   0x01110AAC:  043083E2     ADD r3, r3, 0x4
		   0x01110AB0:  045013E5     LDR r5, [r3, -0x4]
		   0x01110AB4:  010055E1     CMPS r0, r5, r1
		   0x01110AB8:  1600000A     BEQ $+0x60  // if (==) goto 0x01110B18
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01110ABC:  012052E2     SUBS r2, r2, 0x1
		   0x01110AC0:  083083E2     ADD r3, r3, 0x8
		   0x01110AC4:  F9FFFF1A     BNE $-0x14
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x01110AC8:  0400A0E1     MOV r0, r4
		   0x01110ACC:  0020A0E3     MOV r2, 0x0
		   0x01110AD0:  EC18FAEB     BL $-0x179c48
		   0x01110AD4:  120000EA     B $+0x50  // goto 0x01110B24
		   // ──── Block 7 if (==) ────────────────────
		   0x01110AD8:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01110ADC:  00009FE7     LDR r0, [pc, r0]
		   0x01110AE0:  000090E5     LDR r0, [r0]
		   0x01110AE4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01110AE8:  004090E5     LDR r4, [r0]
		   0x01110AEC:  000054E3     CMPS r0, r4, 0x0
		   0x01110AF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01110AF8
		   // 
		   // ──── Block 8 else (r2 == r2, 0x1) ────────────────────
		   0x01110AF4:  352AF9EB     BL $-0x1b5724
		   // ──── Block 9 if (r2 != r2, 0x1) ────────────────────
		   0x01110AF8:  244094E5     LDR r4, [r4, 0x24]
		   0x01110AFC:  000054E3     CMPS r0, r4, 0x0
		   0x01110B00:  0000001A     BNE $+0x8  // if (!=) goto 0x01110B08
		   // 
		   // ──── Block 10 else (r2 == r2, 0x1) ────────────────────
		   0x01110B04:  312AF9EB     BL $-0x1b5734
		   // ──── Block 11 if (r2 != r2, 0x1) ────────────────────
		   0x01110B08:  0400A0E1     MOV r0, r4
		   0x01110B0C:  0010A0E3     MOV r1, 0x0
		   0x01110B10:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01110B14:  32A3FFEA     B $-0x17330
		   // ──── Block 12 if (==) ────────────────────
		   0x01110B18:  001093E5     LDR r1, [r3]
		   0x01110B1C:  810180E0     ADD r0, r0, r1, lsl 3
		   0x01110B20:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 13 ──────────────────────────────
		   0x01110B24:  280090E8     LDM r0, {r3, r5}
		   0x01110B28:  0400A0E1     MOV r0, r4
		   0x01110B2C:  0610A0E1     MOV r1, r6
		   0x01110B30:  0520A0E1     MOV r2, r5
		   0x01110B34:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01110B38:  13FF2FE1     BX r3
		   0x01110B3C:  C9B31103     TSTSEQ fp, r1, 0x24000003
		   0x01110B40:  9C71F602     RSCSEQ r7, r6, 0x27
		   0x01110B44:  3C8FF602     RSCSEQ r8, r6, 0xf0
		   0x01110B48:  188FF602     RSCSEQ r8, r6, 0x60
		   0x01110B4C:  2071F602     RSCSEQ r7, r6, 0x8
		*/
	}

	// RVA: 0x1110B50 Offset: 0x1110B50 VA: 0x1110B50
	internal void <CreateFlyingCurrency>b__1() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110B50:  10402DE9     PUSH {r4, lr}
		   0x01110B54:  104090E5     LDR r4, [r0, 0x10]
		   0x01110B58:  000054E3     CMPS r0, r4, 0x0
		   0x01110B5C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110B64
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110B60:  1A2AF9EB     BL $-0x1b5790
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110B64:  0400A0E1     MOV r0, r4
		   0x01110B68:  0010A0E3     MOV r1, 0x0
		   0x01110B6C:  1040BDE8     POP {r4, lr}
		   0x01110B70:  8CBD0FEA     B $+0x3ef638  // TAIL CALL → OnceInvokedActionCommand.Execute
		*/
	}
}
