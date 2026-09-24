// Dll : Assembly-CSharp.dll
// Namespace: 
[CreateAssetMenu]
public class ItemObject : ScriptableObject // TypeDefIndex: 1215
{

	// Fields
	[SerializeField]
	private ItemData itemData; // 0xC
	private string itemCode; // 0x10
	private string itemCodeWithParams; // 0x14
	[CompilerGenerated]
	private ItemData <currentItemData>k__BackingField; // 0x18

	// Properties
	public bool isLocked { get; }
	public ItemData activeData { get; }
	public ItemData currentItemData { get; set; }
	public bool isBoxed { get; }

	// Methods

	// RVA: 0x10F5810 Offset: 0x10F5810 VA: 0x10F5810
	public bool get_isLocked() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F5810:  10402DE9     PUSH {r4, lr}
		   0x010F5814:  184090E5     LDR r4, [r0, 0x18]
		   0x010F5818:  000054E3     CMPS r0, r4, 0x0
		   0x010F581C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5824
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F5820:  EA96F9EB     BL $-0x19a450
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5824:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x010F5828:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10F0608 Offset: 0x10F0608 VA: 0x10F0608
	public ItemData get_activeData() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F0608:  10402DE9     PUSH {r4, lr}
		   0x010F060C:  184090E5     LDR r4, [r0, 0x18]
		   0x010F0610:  000054E3     CMPS r0, r4, 0x0
		   0x010F0614:  0000001A     BNE $+0x8  // if (!=) goto 0x010F061C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F0618:  6CABF9EB     BL $-0x195248
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F061C:  0400A0E1     MOV r0, r4
		   0x010F0620:  0010A0E3     MOV r1, 0x0
		   0x010F0624:  1040BDE8     POP {r4, lr}
		   0x010F0628:  B76400EA     B $+0x192e4  // TAIL CALL → ItemData.get_activeData
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10F582C Offset: 0x10F582C VA: 0x10F582C
	public ItemData get_currentItemData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F582C:  180090E5     LDR r0, [r0, 0x18]
		   0x010F5830:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10F5834 Offset: 0x10F5834 VA: 0x10F5834
	private void set_currentItemData(ItemData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F5834:  181080E5     STR r1, [r0, 0x18]
		   0x010F5838:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10F583C Offset: 0x10F583C VA: 0x10F583C
	public bool get_isBoxed() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F583C:  10402DE9     PUSH {r4, lr}
		   0x010F5840:  184090E5     LDR r4, [r0, 0x18]
		   0x010F5844:  000054E3     CMPS r0, r4, 0x0
		   0x010F5848:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5850
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F584C:  DF96F9EB     BL $-0x19a47c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5850:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010F5854:  050040E2     SUB r0, r0, 0x5
		   0x010F5858:  100F6FE1     CLZ r0, r0
		   0x010F585C:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010F5860:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10F5864 Offset: 0x10F5864 VA: 0x10F5864
	public void OverrideItemData(ItemData newItemData) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F5864:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F5868:  0150A0E1     MOV r5, r1
		   0x010F586C:  0040A0E1     MOV r4, r0
		   0x010F5870:  000051E3     CMPS r0, r1, 0x0
		   0x010F5874:  181080E5     STR r1, [r0, 0x18]
		   0x010F5878:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5880
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F587C:  D396F9EB     BL $-0x19a4ac
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5880:  141095E5     LDR r1, [r5, 0x14]
		   0x010F5884:  0400A0E1     MOV r0, r4
		   0x010F5888:  0020A0E3     MOV r2, 0x0
		   0x010F588C:  580A3CEB     BL $+0xf02968  // CALL → sub_1FF81F4
		   0x010F5890:  185094E5     LDR r5, [r4, 0x18]
		   0x010F5894:  000055E3     CMPS r0, r5, 0x0
		   0x010F5898:  0000001A     BNE $+0x8  // if (!=) goto 0x010F58A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F589C:  CB96F9EB     BL $-0x19a4cc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F58A0:  140095E5     LDR r0, [r5, 0x14]
		   0x010F58A4:  100084E5     STR r0, [r4, 0x10]
		   0x010F58A8:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10F58AC Offset: 0x10F58AC VA: 0x10F58AC
	public void ResetItemData() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F58AC:  0C1090E5     LDR r1, [r0, 0xc]
		   0x010F58B0:  181080E5     STR r1, [r0, 0x18]
		   0x010F58B4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10F58B8 Offset: 0x10F58B8 VA: 0x10F58B8
	public string GetItemCode() {
		/* Disassembly (ARM32, 116 instructions, 0x1D0 bytes):
		   // CFG: 24 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F58B8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F58BC:  CC519FE5     LDR r5, [pc, 0x1cc]
		   0x010F58C0:  0040A0E1     MOV r4, r0
		   0x010F58C4:  05508FE0     ADD r5, pc, r5
		   0x010F58C8:  0000D5E5     LDRB r0, [r5]
		   0x010F58CC:  000050E3     CMPS r0, r0, 0x0
		   0x010F58D0:  1000001A     BNE $+0x48  // if (!=) goto 0x010F5918
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F58D4:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x010F58D8:  00009FE7     LDR r0, [pc, r0]
		   0x010F58DC:  1F96F9EB     BL $-0x19a77c
		   0x010F58E0:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x010F58E4:  00009FE7     LDR r0, [pc, r0]
		   0x010F58E8:  1C96F9EB     BL $-0x19a788
		   0x010F58EC:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x010F58F0:  00009FE7     LDR r0, [pc, r0]
		   0x010F58F4:  1996F9EB     BL $-0x19a794
		   0x010F58F8:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x010F58FC:  00009FE7     LDR r0, [pc, r0]
		   0x010F5900:  1696F9EB     BL $-0x19a7a0
		   0x010F5904:  98019FE5     LDR r0, [pc, 0x198]
		   0x010F5908:  00009FE7     LDR r0, [pc, r0]
		   0x010F590C:  1396F9EB     BL $-0x19a7ac
		   0x010F5910:  0100A0E3     MOV r0, 0x1
		   0x010F5914:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5918:  180094E5     LDR r0, [r4, 0x18]
		   0x010F591C:  000050E3     CMPS r0, r0, 0x0
		   0x010F5920:  1700001A     BNE $+0x64  // if (!=) goto 0x010F5984
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F5924:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010F5928:  00009FE7     LDR r0, [pc, r0]
		   0x010F592C:  000090E5     LDR r0, [r0]
		   0x010F5930:  A396F9EB     BL $-0x19a56c
		   0x010F5934:  0050A0E1     MOV r5, r0
		   0x010F5938:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010F593C:  0020A0E3     MOV r2, 0x0
		   0x010F5940:  00009FE7     LDR r0, [pc, r0]
		   0x010F5944:  001090E5     LDR r1, [r0]
		   0x010F5948:  0500A0E1     MOV r0, r5
		   0x010F594C:  4CA210EB     BL $+0x428938  // CALL → InfoException..ctor
		   0x010F5950:  58019FE5     LDR r0, [pc, 0x158]
		   0x010F5954:  00009FE7     LDR r0, [pc, r0]
		   0x010F5958:  000090E5     LDR r0, [r0]
		   0x010F595C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F5960:  000051E3     CMPS r0, r1, 0x0
		   0x010F5964:  0000001A     BNE $+0x8  // if (!=) goto 0x010F596C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F5968:  4996F9EB     BL $-0x19a6d4
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F596C:  0500A0E1     MOV r0, r5
		   0x010F5970:  0010A0E3     MOV r1, 0x0
		   0x010F5974:  040A3CEB     BL $+0xf02818  // CALL → sub_1FF818C
		   0x010F5978:  180094E5     LDR r0, [r4, 0x18]
		   0x010F597C:  000050E3     CMPS r0, r0, 0x0
		   0x010F5980:  0400000A     BEQ $+0x18  // if (==) goto 0x010F5998
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x010F5984:  140090E5     LDR r0, [r0, 0x14]
		   0x010F5988:  0010A0E3     MOV r1, 0x0
		   0x010F598C:  998A76EB     BL $+0x1da2a6c  // CALL → String.IsNullOrEmpty
		   0x010F5990:  000050E3     CMPS r0, r0, 0x0
		   0x010F5994:  3500000A     BEQ $+0xdc  // if (==) goto 0x010F5A70
		   // 
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x010F5998:  100094E5     LDR r0, [r4, 0x10]
		   0x010F599C:  0010A0E3     MOV r1, 0x0
		   0x010F59A0:  948A76EB     BL $+0x1da2a58  // CALL → String.IsNullOrEmpty
		   0x010F59A4:  000050E3     CMPS r0, r0, 0x0
		   0x010F59A8:  3600000A     BEQ $+0xe0
		   0x010F59AC:  0400A0E1     MOV r0, r4
		   0x010F59B0:  0010A0E3     MOV r1, 0x0
		   0x010F59B4:  0F0A3CEB     BL $+0xf02844  // CALL → sub_1FF81F8
		   0x010F59B8:  0050A0E1     MOV r5, r0
		   0x010F59BC:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x010F59C0:  0110A0E3     MOV r1, 0x1
		   0x010F59C4:  00009FE7     LDR r0, [pc, r0]
		   0x010F59C8:  000090E5     LDR r0, [r0]
		   0x010F59CC:  0696F9EB     BL $-0x19a7e0
		   0x010F59D0:  0060A0E1     MOV r6, r0
		   0x010F59D4:  000050E3     CMPS r0, r0, 0x0
		   0x010F59D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F59E0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F59DC:  7B96F9EB     BL $-0x19a60c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F59E0:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F59E4:  00009FE7     LDR r0, [pc, r0]
		   0x010F59E8:  007090E5     LDR r7, [r0]
		   0x010F59EC:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010F59F0:  000050E3     CMPS r0, r0, 0x0
		   0x010F59F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F59FC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F59F8:  7596F9EB     BL $-0x19a624
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F59FC:  000055E3     CMPS r0, r5, 0x0
		   0x010F5A00:  107086E5     STR r7, [r6, 0x10]
		   0x010F5A04:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5A0C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F5A08:  7096F9EB     BL $-0x19a638
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F5A0C:  0500A0E1     MOV r0, r5
		   0x010F5A10:  0610A0E1     MOV r1, r6
		   0x010F5A14:  0120A0E3     MOV r2, 0x1
		   0x010F5A18:  0030A0E3     MOV r3, 0x0
		   0x010F5A1C:  479C76EB     BL $+0x1da7124  // CALL → String.Split
		   0x010F5A20:  0050A0E1     MOV r5, r0
		   0x010F5A24:  000050E3     CMPS r0, r0, 0x0
		   0x010F5A28:  0100001A     BNE $+0xc  // if (!=) goto 0x010F5A34
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F5A2C:  6796F9EB     BL $-0x19a65c
		   0x010F5A30:  6696F9EB     BL $-0x19a660
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F5A34:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010F5A38:  016040E2     SUB r6, r0, 0x1
		   0x010F5A3C:  000050E3     CMPS r0, r0, 0x0
		   0x010F5A40:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5A48
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F5A44:  6296F9EB     BL $-0x19a670
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F5A48:  060185E0     ADD r0, r5, r6, lsl 2
		   0x010F5A4C:  105090E5     LDR r5, [r0, 0x10]
		   0x010F5A50:  000055E3     CMPS r0, r5, 0x0
		   0x010F5A54:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5A5C
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010F5A58:  5C96F9EB     BL $-0x19a688
		   // ──── Block 20 if (!=) ────────────────────
		   0x010F5A5C:  0500A0E1     MOV r0, r5
		   0x010F5A60:  0010A0E3     MOV r1, 0x0
		   0x010F5A64:  BE9F76EB     BL $+0x1da7f00  // CALL → String.ToLower
		   0x010F5A68:  100084E5     STR r0, [r4, 0x10]
		   0x010F5A6C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 21 if (==) ────────────────────
		   0x010F5A70:  184094E5     LDR r4, [r4, 0x18]
		   0x010F5A74:  000054E3     CMPS r0, r4, 0x0
		   0x010F5A78:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5A80
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010F5A7C:  5396F9EB     BL $-0x19a6ac
		   // ──── Block 23 if (!=) ────────────────────
		   0x010F5A80:  140094E5     LDR r0, [r4, 0x14]
		   0x010F5A84:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x10F5ABC Offset: 0x10F5ABC VA: 0x10F5ABC
	public string GetItemCodeWithExtraParams() {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F5ABC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F5AC0:  D4509FE5     LDR r5, [pc, 0xd4]
		   0x010F5AC4:  0040A0E1     MOV r4, r0
		   0x010F5AC8:  05508FE0     ADD r5, pc, r5
		   0x010F5ACC:  0000D5E5     LDRB r0, [r5]
		   0x010F5AD0:  000050E3     CMPS r0, r0, 0x0
		   0x010F5AD4:  0700001A     BNE $+0x24  // if (!=) goto 0x010F5AF8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F5AD8:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010F5ADC:  00009FE7     LDR r0, [pc, r0]
		   0x010F5AE0:  9E95F9EB     BL $-0x19a980
		   0x010F5AE4:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010F5AE8:  00009FE7     LDR r0, [pc, r0]
		   0x010F5AEC:  9B95F9EB     BL $-0x19a98c
		   0x010F5AF0:  0100A0E3     MOV r0, 0x1
		   0x010F5AF4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5AF8:  140094E5     LDR r0, [r4, 0x14]
		   0x010F5AFC:  0010A0E3     MOV r1, 0x0
		   0x010F5B00:  3C8A76EB     BL $+0x1da28f8  // CALL → String.IsNullOrEmpty
		   0x010F5B04:  000050E3     CMPS r0, r0, 0x0
		   0x010F5B08:  0C00000A     BEQ $+0x38  // if (==) goto 0x010F5B40
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F5B0C:  185094E5     LDR r5, [r4, 0x18]
		   0x010F5B10:  000055E3     CMPS r0, r5, 0x0
		   0x010F5B14:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5B1C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F5B18:  2C96F9EB     BL $-0x19a748
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F5B1C:  1C00D5E5     LDRB r0, [r5, 0x1c]
		   0x010F5B20:  000050E3     CMPS r0, r0, 0x0
		   0x010F5B24:  0700000A     BEQ $+0x24  // if (==) goto 0x010F5B48
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010F5B28:  0400A0E1     MOV r0, r4
		   0x010F5B2C:  61FFFFEB     BL $-0x274
		   0x010F5B30:  0010A0E1     MOV r1, r0
		   0x010F5B34:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010F5B38:  00009FE7     LDR r0, [pc, r0]
		   0x010F5B3C:  0D0000EA     B $+0x3c  // goto 0x010F5B78
		   // ──── Block 7 if (==) ────────────────────
		   0x010F5B40:  141094E5     LDR r1, [r4, 0x14]
		   0x010F5B44:  100000EA     B $+0x48  // goto 0x010F5B8C
		   // ──── Block 8 if (==) ────────────────────
		   0x010F5B48:  185094E5     LDR r5, [r4, 0x18]
		   0x010F5B4C:  000055E3     CMPS r0, r5, 0x0
		   0x010F5B50:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5B58
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F5B54:  1D96F9EB     BL $-0x19a784
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F5B58:  0400A0E1     MOV r0, r4
		   0x010F5B5C:  4C5095E5     LDR r5, [r5, 0x4c]
		   0x010F5B60:  54FFFFEB     BL $-0x2a8
		   0x010F5B64:  0010A0E1     MOV r1, r0
		   0x010F5B68:  050055E3     CMPS r0, r5, 0x5
		   0x010F5B6C:  0800001A     BNE $+0x28  // if (!=) goto 0x010F5B94
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F5B70:  34009FE5     LDR r0, [pc, 0x34]
		   0x010F5B74:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 12 ──────────────────────────────
		   0x010F5B78:  000090E5     LDR r0, [r0]
		   0x010F5B7C:  0020A0E3     MOV r2, 0x0
		   0x010F5B80:  EE4E76EB     BL $+0x1d93bc0  // CALL → String.Concat
		   0x010F5B84:  0010A0E1     MOV r1, r0
		   0x010F5B88:  140084E5     STR r0, [r4, 0x14]
		   // ──── Block 13 ──────────────────────────────
		   0x010F5B8C:  0100A0E1     MOV r0, r1
		   0x010F5B90:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F5B94:  141084E5     STR r1, [r4, 0x14]
		   0x010F5B98:  FBFFFFEA     B $-0xc
		   0x010F5B9C:  58621303     TSTSEQ r6, r3, 0x80000005
		   0x010F5BA0:  AC3AF802     RSCSEQ r3, r8, 0xac000
		   0x010F5BA4:  A43AF802     RSCSEQ r3, r8, 0xa4000
		   0x010F5BA8:  543AF802     RSCSEQ r3, r8, 0x54000
		   0x010F5BAC:  143AF802     RSCSEQ r3, r8, 0x14000
		*/
	}

	// RVA: 0x10F5BB0 Offset: 0x10F5BB0 VA: 0x10F5BB0
	public ItemObject CloneAsLocked() {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F5BB0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F5BB4:  78509FE5     LDR r5, [pc, 0x78]
		   0x010F5BB8:  0040A0E1     MOV r4, r0
		   0x010F5BBC:  05508FE0     ADD r5, pc, r5
		   0x010F5BC0:  0000D5E5     LDRB r0, [r5]
		   0x010F5BC4:  000050E3     CMPS r0, r0, 0x0
		   0x010F5BC8:  0400001A     BNE $+0x18  // if (!=) goto 0x010F5BE0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F5BCC:  64009FE5     LDR r0, [pc, 0x64]
		   0x010F5BD0:  00009FE7     LDR r0, [pc, r0]
		   0x010F5BD4:  6195F9EB     BL $-0x19aa74
		   0x010F5BD8:  0100A0E3     MOV r0, 0x1
		   0x010F5BDC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5BE0:  54009FE5     LDR r0, [pc, 0x54]
		   0x010F5BE4:  00009FE7     LDR r0, [pc, r0]
		   0x010F5BE8:  000090E5     LDR r0, [r0]
		   0x010F5BEC:  DB6027EB     BL $+0x9d8374  // CALL → ScriptableObject.CreateInstance<object>
		   0x010F5BF0:  186094E5     LDR r6, [r4, 0x18]
		   0x010F5BF4:  0050A0E1     MOV r5, r0
		   0x010F5BF8:  000056E3     CMPS r0, r6, 0x0
		   0x010F5BFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5C04
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F5C00:  F295F9EB     BL $-0x19a830
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F5C04:  0600A0E1     MOV r0, r6
		   0x010F5C08:  0410A0E1     MOV r1, r4
		   0x010F5C0C:  0020A0E3     MOV r2, 0x0
		   0x010F5C10:  7A7400EB     BL $+0x1d1f0  // CALL → ItemData.CloneAsLocked
		   0x010F5C14:  0040A0E1     MOV r4, r0
		   0x010F5C18:  000055E3     CMPS r0, r5, 0x0
		   0x010F5C1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5C24
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F5C20:  EA95F9EB     BL $-0x19a850
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F5C24:  0500A0E1     MOV r0, r5
		   0x010F5C28:  184085E5     STR r4, [r5, 0x18]
		   0x010F5C2C:  0C4085E5     STR r4, [r5, 0xc]
		   0x010F5C30:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F5C34:  65611303     TSTSEQ r6, r3, 0x40000019
		   0x010F5C38:  C039F802     RSCSEQ r3, r8, 0x300000
		   0x010F5C3C:  AC39F802     RSCSEQ r3, r8, 0x2b0000
		*/
	}

	// RVA: 0x10F5C40 Offset: 0x10F5C40 VA: 0x10F5C40
	public ItemObject CloneAsBoxed() {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F5C40:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F5C44:  78509FE5     LDR r5, [pc, 0x78]
		   0x010F5C48:  0040A0E1     MOV r4, r0
		   0x010F5C4C:  05508FE0     ADD r5, pc, r5
		   0x010F5C50:  0000D5E5     LDRB r0, [r5]
		   0x010F5C54:  000050E3     CMPS r0, r0, 0x0
		   0x010F5C58:  0400001A     BNE $+0x18  // if (!=) goto 0x010F5C70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F5C5C:  64009FE5     LDR r0, [pc, 0x64]
		   0x010F5C60:  00009FE7     LDR r0, [pc, r0]
		   0x010F5C64:  3D95F9EB     BL $-0x19ab04
		   0x010F5C68:  0100A0E3     MOV r0, 0x1
		   0x010F5C6C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F5C70:  54009FE5     LDR r0, [pc, 0x54]
		   0x010F5C74:  00009FE7     LDR r0, [pc, r0]
		   0x010F5C78:  000090E5     LDR r0, [r0]
		   0x010F5C7C:  B76027EB     BL $+0x9d82e4  // CALL → ScriptableObject.CreateInstance<object>
		   0x010F5C80:  186094E5     LDR r6, [r4, 0x18]
		   0x010F5C84:  0050A0E1     MOV r5, r0
		   0x010F5C88:  000056E3     CMPS r0, r6, 0x0
		   0x010F5C8C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5C94
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F5C90:  CE95F9EB     BL $-0x19a8c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F5C94:  0600A0E1     MOV r0, r6
		   0x010F5C98:  0410A0E1     MOV r1, r4
		   0x010F5C9C:  0020A0E3     MOV r2, 0x0
		   0x010F5CA0:  127400EB     BL $+0x1d050  // CALL → ItemData.CloneAsBoxed
		   0x010F5CA4:  0040A0E1     MOV r4, r0
		   0x010F5CA8:  000055E3     CMPS r0, r5, 0x0
		   0x010F5CAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F5CB4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F5CB0:  C695F9EB     BL $-0x19a8e0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F5CB4:  0500A0E1     MOV r0, r5
		   0x010F5CB8:  184085E5     STR r4, [r5, 0x18]
		   0x010F5CBC:  0C4085E5     STR r4, [r5, 0xc]
		   0x010F5CC0:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F5CC4:  D6601303     TSTSEQ r6, r3, 0xd6
		   0x010F5CC8:  3039F802     RSCSEQ r3, r8, 0xc0000
		   0x010F5CCC:  1C39F802     RSCSEQ r3, r8, 0x70000
		*/
	}

	// RVA: 0x10F5CD0 Offset: 0x10F5CD0 VA: 0x10F5CD0
	private void OnEnable() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F5CD0:  0C1090E5     LDR r1, [r0, 0xc]
		   0x010F5CD4:  181080E5     STR r1, [r0, 0x18]
		   0x010F5CD8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10F5CDC Offset: 0x10F5CDC VA: 0x10F5CDC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F5CDC:  0010A0E3     MOV r1, 0x0
		   0x010F5CE0:  89083CEA     B $+0xf0222c
		*/
	}
}
