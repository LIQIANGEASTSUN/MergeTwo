// Dll : Assembly-CSharp.dll
// Namespace: 
[CreateAssetMenu(fileName = "BubblesConfig", menuName = "Configs/BubblesConfig", order = 5)]
public class BubblesConfig : ScriptableObject // TypeDefIndex: 1127
{

	// Fields
	private const string BUBBLED_DROPS_FIELD_LIMIT_KEY = "bubbled_drops_field_limit";
	[SerializeField]
	private List<BubbleConfig> items; // 0xC
	private int time; // 0x10
	private int bubbledDropsForRVPriceThreshold; // 0x14
	private bool bubbledDropsForRVEnabled; // 0x18
	private int fieldLimit; // 0x1C
	private readonly Dictionary<string, BubbleConfig> itemsCache; // 0x20
	private readonly Dictionary<string, BubbleConfig> itemsCacheOverride; // 0x24
	private bool dropIsActive; // 0x28
	private BubblesConfig.ConfigGetter configGetter; // 0x2C
	[CompilerGenerated]
	private ConfigItemID <DropItemID>k__BackingField; // 0x30

	// Properties
	public int Timer { get; }
	public int FieldLimit { get; }
	public ConfigItemID DropItemID { get; set; }

	// Methods

	// RVA: 0x10C8688 Offset: 0x10C8688 VA: 0x10C8688
	public int get_Timer() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8688:  100090E5     LDR r0, [r0, 0x10]
		   0x010C868C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C8690 Offset: 0x10C8690 VA: 0x10C8690
	public int get_FieldLimit() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8690:  1C0090E5     LDR r0, [r0, 0x1c]
		   0x010C8694:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10C8698 Offset: 0x10C8698 VA: 0x10C8698
	public ConfigItemID get_DropItemID() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8698:  300090E5     LDR r0, [r0, 0x30]
		   0x010C869C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10C86A0 Offset: 0x10C86A0 VA: 0x10C86A0
	private void set_DropItemID(ConfigItemID value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C86A0:  301080E5     STR r1, [r0, 0x30]
		   0x010C86A4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C86A8 Offset: 0x10C86A8 VA: 0x10C86A8
	public void Init() {
		/* Disassembly (ARM32, 47 instructions, 0xBC bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C86A8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010C86AC:  18D04DE2     SUB sp, sp, 0x18
		   0x010C86B0:  B0429FE5     LDR r4, [pc, 0x2b0]
		   0x010C86B4:  0080A0E1     MOV r8, r0
		   0x010C86B8:  04408FE0     ADD r4, pc, r4
		   0x010C86BC:  0000D4E5     LDRB r0, [r4]
		   0x010C86C0:  000050E3     CMPS r0, r0, 0x0
		   0x010C86C4:  2500001A     BNE $+0x9c  // if (!=) goto 0x010C8760
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C86C8:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x010C86CC:  00009FE7     LDR r0, [pc, r0]
		   0x010C86D0:  A24AFAEB     BL $-0x16d570
		   0x010C86D4:  94029FE5     LDR r0, [pc, 0x294]
		   0x010C86D8:  00009FE7     LDR r0, [pc, r0]
		   0x010C86DC:  9F4AFAEB     BL $-0x16d57c
		   0x010C86E0:  8C029FE5     LDR r0, [pc, 0x28c]
		   0x010C86E4:  00009FE7     LDR r0, [pc, r0]
		   0x010C86E8:  9C4AFAEB     BL $-0x16d588
		   0x010C86EC:  84029FE5     LDR r0, [pc, 0x284]
		   0x010C86F0:  00009FE7     LDR r0, [pc, r0]
		   0x010C86F4:  994AFAEB     BL $-0x16d594
		   0x010C86F8:  7C029FE5     LDR r0, [pc, 0x27c]
		   0x010C86FC:  00009FE7     LDR r0, [pc, r0]
		   0x010C8700:  964AFAEB     BL $-0x16d5a0
		   0x010C8704:  74029FE5     LDR r0, [pc, 0x274]
		   0x010C8708:  00009FE7     LDR r0, [pc, r0]
		   0x010C870C:  934AFAEB     BL $-0x16d5ac
		   0x010C8710:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x010C8714:  00009FE7     LDR r0, [pc, r0]
		   0x010C8718:  904AFAEB     BL $-0x16d5b8
		   0x010C871C:  64029FE5     LDR r0, [pc, 0x264]
		   0x010C8720:  00009FE7     LDR r0, [pc, r0]
		   0x010C8724:  8D4AFAEB     BL $-0x16d5c4
		   0x010C8728:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x010C872C:  00009FE7     LDR r0, [pc, r0]
		   0x010C8730:  8A4AFAEB     BL $-0x16d5d0
		   0x010C8734:  54029FE5     LDR r0, [pc, 0x254]
		   0x010C8738:  00009FE7     LDR r0, [pc, r0]
		   0x010C873C:  874AFAEB     BL $-0x16d5dc
		   0x010C8740:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010C8744:  00009FE7     LDR r0, [pc, r0]
		   0x010C8748:  844AFAEB     BL $-0x16d5e8
		   0x010C874C:  44029FE5     LDR r0, [pc, 0x244]
		   0x010C8750:  00009FE7     LDR r0, [pc, r0]
		   0x010C8754:  814AFAEB     BL $-0x16d5f4
		   0x010C8758:  0100A0E3     MOV r0, 0x1
		   0x010C875C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8760:  204098E5     LDR r4, [r8, 0x20]
		*/
	}

	// RVA: 0x10C8C68 Offset: 0x10C8C68 VA: 0x10C8C68
	public void AppendItems(List<BubbleConfig> itemsList) {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8C68:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010C8C6C:  54609FE5     LDR r6, [pc, 0x54]
		   0x010C8C70:  0050A0E1     MOV r5, r0
		   0x010C8C74:  0140A0E1     MOV r4, r1
		   0x010C8C78:  06608FE0     ADD r6, pc, r6
		   0x010C8C7C:  0000D6E5     LDRB r0, [r6]
		   0x010C8C80:  000050E3     CMPS r0, r0, 0x0
		   0x010C8C84:  0400001A     BNE $+0x18  // if (!=) goto 0x010C8C9C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8C88:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010C8C8C:  00009FE7     LDR r0, [pc, r0]
		   0x010C8C90:  3249FAEB     BL $-0x16db30
		   0x010C8C94:  0100A0E3     MOV r0, 0x1
		   0x010C8C98:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8C9C:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010C8CA0:  000055E3     CMPS r0, r5, 0x0
		   0x010C8CA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8CAC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C8CA8:  C849FAEB     BL $-0x16d8d8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C8CAC:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x010C8CB0:  0410A0E1     MOV r1, r4
		   0x010C8CB4:  00009FE7     LDR r0, [pc, r0]
		   0x010C8CB8:  002090E5     LDR r2, [r0]
		   0x010C8CBC:  0500A0E1     MOV r0, r5
		   0x010C8CC0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010C8CC4:  3CA86CEA     B $+0x1b2a0f8  // TAIL CALL → List<object>.AddRange
		   0x010C8CC8:  712F1603     TSTSEQ r2, r6, 0x1c4
		   0x010C8CCC:  70FFFA02     RSCSEQ pc, r10, 0x1c0
		   0x010C8CD0:  48FFFA02     RSCSEQ pc, r10, 0x120
		*/
	}

	// RVA: 0x10C8CD4 Offset: 0x10C8CD4 VA: 0x10C8CD4
	public void TryAddToItemsCache(BubbleConfig bubbleConfig) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8CD4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010C8CD8:  84609FE5     LDR r6, [pc, 0x84]
		   0x010C8CDC:  0050A0E1     MOV r5, r0
		   0x010C8CE0:  0140A0E1     MOV r4, r1
		   0x010C8CE4:  06608FE0     ADD r6, pc, r6
		   0x010C8CE8:  0000D6E5     LDRB r0, [r6]
		   0x010C8CEC:  000050E3     CMPS r0, r0, 0x0
		   0x010C8CF0:  0400001A     BNE $+0x18  // if (!=) goto 0x010C8D08
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8CF4:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010C8CF8:  00009FE7     LDR r0, [pc, r0]
		   0x010C8CFC:  1749FAEB     BL $-0x16db9c
		   0x010C8D00:  0100A0E3     MOV r0, 0x1
		   0x010C8D04:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8D08:  205095E5     LDR r5, [r5, 0x20]
		   0x010C8D0C:  000054E3     CMPS r0, r4, 0x0
		   0x010C8D10:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8D18
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C8D14:  AD49FAEB     BL $-0x16d944
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C8D18:  086094E5     LDR r6, [r4, 0x8]
		   0x010C8D1C:  000056E3     CMPS r0, r6, 0x0
		   0x010C8D20:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8D28
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010C8D24:  A949FAEB     BL $-0x16d954
		   // ──── Block 6 if (!=) ────────────────────
		   0x010C8D28:  0600A0E1     MOV r0, r6
		   0x010C8D2C:  0010A0E3     MOV r1, 0x0
		   0x010C8D30:  E0B200EB     BL $+0x2cb88  // CALL → ItemObject.GetItemCode
		   0x010C8D34:  0060A0E1     MOV r6, r0
		   0x010C8D38:  000055E3     CMPS r0, r5, 0x0
		   0x010C8D3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8D44
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010C8D40:  A249FAEB     BL $-0x16d970
		   // ──── Block 8 if (!=) ────────────────────
		   0x010C8D44:  20009FE5     LDR r0, [pc, 0x20]
		   0x010C8D48:  0610A0E1     MOV r1, r6
		   0x010C8D4C:  0420A0E1     MOV r2, r4
		   0x010C8D50:  00009FE7     LDR r0, [pc, r0]
		   0x010C8D54:  003090E5     LDR r3, [r0]
		   0x010C8D58:  0500A0E1     MOV r0, r5
		   0x010C8D5C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010C8D60:  2D0155EA     B $+0x15404bc  // TAIL CALL → Dictionary<object, object>.TryAdd
		   0x010C8D64:  062F1603     TSTSEQ r2, r6, 0x18
		   0x010C8D68:  E0FEFA02     RSCSEQ pc, r10, 0xe00
		   0x010C8D6C:  88FEFA02     RSCSEQ pc, r10, 0x880
		*/
	}

	// RVA: 0x10C8D70 Offset: 0x10C8D70 VA: 0x10C8D70
	public BaseBubbleConfig GetConfig(string itemCode) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8D70:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010C8D74:  2C5090E5     LDR r5, [r0, 0x2c]
		   0x010C8D78:  0140A0E1     MOV r4, r1
		   0x010C8D7C:  000055E3     CMPS r0, r5, 0x0
		   0x010C8D80:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8D88
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8D84:  9149FAEB     BL $-0x16d9b4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8D88:  0C3095E5     LDR r3, [r5, 0xc]
		   0x010C8D8C:  0410A0E1     MOV r1, r4
		   0x010C8D90:  142095E5     LDR r2, [r5, 0x14]
		   0x010C8D94:  200095E5     LDR r0, [r5, 0x20]
		   0x010C8D98:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010C8D9C:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10C8DA0 Offset: 0x10C8DA0 VA: 0x10C8DA0
	public void OverrideConfig(string itemCode, BubbleConfig config) {
		/* Disassembly (ARM32, 59 instructions, 0xEC bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8DA0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010C8DA4:  C4709FE5     LDR r7, [pc, 0xc4]
		   0x010C8DA8:  0060A0E1     MOV r6, r0
		   0x010C8DAC:  0250A0E1     MOV r5, r2
		   0x010C8DB0:  0140A0E1     MOV r4, r1
		   0x010C8DB4:  07708FE0     ADD r7, pc, r7
		   0x010C8DB8:  0000D7E5     LDRB r0, [r7]
		   0x010C8DBC:  000050E3     CMPS r0, r0, 0x0
		   0x010C8DC0:  0A00001A     BNE $+0x30  // if (!=) goto 0x010C8DF0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8DC4:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010C8DC8:  00009FE7     LDR r0, [pc, r0]
		   0x010C8DCC:  E348FAEB     BL $-0x16dc6c
		   0x010C8DD0:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010C8DD4:  00009FE7     LDR r0, [pc, r0]
		   0x010C8DD8:  E048FAEB     BL $-0x16dc78
		   0x010C8DDC:  98009FE5     LDR r0, [pc, 0x98]
		   0x010C8DE0:  00009FE7     LDR r0, [pc, r0]
		   0x010C8DE4:  DD48FAEB     BL $-0x16dc84
		   0x010C8DE8:  0100A0E3     MOV r0, 0x1
		   0x010C8DEC:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8DF0:  246096E5     LDR r6, [r6, 0x24]
		   0x010C8DF4:  000056E3     CMPS r0, r6, 0x0
		   0x010C8DF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8E00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C8DFC:  7349FAEB     BL $-0x16da2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C8E00:  78009FE5     LDR r0, [pc, 0x78]
		   0x010C8E04:  0410A0E1     MOV r1, r4
		   0x010C8E08:  0520A0E1     MOV r2, r5
		   0x010C8E0C:  00009FE7     LDR r0, [pc, r0]
		   0x010C8E10:  003090E5     LDR r3, [r0]
		   0x010C8E14:  0600A0E1     MOV r0, r6
		   0x010C8E18:  FF0055EB     BL $+0x1540404  // CALL → Dictionary<object, object>.TryAdd
		   0x010C8E1C:  000050E3     CMPS r0, r0, 0x0
		   0x010C8E20:  0000000A     BEQ $+0x8  // if (==) goto 0x010C8E28
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010C8E24:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 6 if (==) ────────────────────
		   0x010C8E28:  54009FE5     LDR r0, [pc, 0x54]
		   0x010C8E2C:  0410A0E1     MOV r1, r4
		   0x010C8E30:  0020A0E3     MOV r2, 0x0
		   0x010C8E34:  00009FE7     LDR r0, [pc, r0]
		   0x010C8E38:  000090E5     LDR r0, [r0]
		   0x010C8E3C:  3F0277EB     BL $+0x1dc0904  // CALL → String.Concat
		   0x010C8E40:  0040A0E1     MOV r4, r0
		   0x010C8E44:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010C8E48:  00009FE7     LDR r0, [pc, r0]
		   0x010C8E4C:  000090E5     LDR r0, [r0]
		   0x010C8E50:  741090E5     LDR r1, [r0, 0x74]
		   0x010C8E54:  000051E3     CMPS r0, r1, 0x0
		   0x010C8E58:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8E60
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010C8E5C:  0C49FAEB     BL $-0x16dbc8
		   // ──── Block 8 if (!=) ────────────────────
		   0x010C8E60:  0400A0E1     MOV r0, r4
		   0x010C8E64:  0010A0E3     MOV r1, 0x0
		   0x010C8E68:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010C8E6C:  68BC3CEA     B $+0xf2f1a8
		   0x010C8E70:  372E1603     TSTSEQ r2, r6, 0x370
		   0x010C8E74:  C0D7FA02     RSCSEQ sp, r10, 0x3000000
		   0x010C8E78:  04FEFA02     RSCSEQ pc, r10, 0x40
		   0x010C8E7C:  20FEFA02     RSCSEQ pc, r10, 0x200
		   0x010C8E80:  CCFDFA02     RSCSEQ pc, r10, 0x3300
		   0x010C8E84:  CCFDFA02     RSCSEQ pc, r10, 0x3300
		   0x010C8E88:  40D7FA02     RSCSEQ sp, r10, 0x1000000
		*/
	}

	// RVA: 0x10C8E8C Offset: 0x10C8E8C VA: 0x10C8E8C
	public void RemoveConfig() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8E8C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010C8E90:  4C509FE5     LDR r5, [pc, 0x4c]
		   0x010C8E94:  0040A0E1     MOV r4, r0
		   0x010C8E98:  05508FE0     ADD r5, pc, r5
		   0x010C8E9C:  0000D5E5     LDRB r0, [r5]
		   0x010C8EA0:  000050E3     CMPS r0, r0, 0x0
		   0x010C8EA4:  0400001A     BNE $+0x18  // if (!=) goto 0x010C8EBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8EA8:  38009FE5     LDR r0, [pc, 0x38]
		   0x010C8EAC:  00009FE7     LDR r0, [pc, r0]
		   0x010C8EB0:  AA48FAEB     BL $-0x16dd50
		   0x010C8EB4:  0100A0E3     MOV r0, 0x1
		   0x010C8EB8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8EBC:  244094E5     LDR r4, [r4, 0x24]
		   0x010C8EC0:  000054E3     CMPS r0, r4, 0x0
		   0x010C8EC4:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8ECC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C8EC8:  4049FAEB     BL $-0x16daf8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C8ECC:  18009FE5     LDR r0, [pc, 0x18]
		   0x010C8ED0:  00009FE7     LDR r0, [pc, r0]
		   0x010C8ED4:  001090E5     LDR r1, [r0]
		   0x010C8ED8:  0400A0E1     MOV r0, r4
		   0x010C8EDC:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010C8EE0:  3CF954EA     B $+0x153e4f8  // TAIL CALL → Dictionary<object, object>.Clear
		   0x010C8EE4:  542D1603     TSTSEQ r2, r6, 0x1500
		   0x010C8EE8:  28FDFA02     RSCSEQ pc, r10, 0xa00
		   0x010C8EEC:  04FDFA02     RSCSEQ pc, r10, 0x100
		*/
	}

	// RVA: 0x10C8EF0 Offset: 0x10C8EF0 VA: 0x10C8EF0
	public bool NeedToShowBubbledDropsForRV(int cost) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8EF0:  143090E5     LDR r3, [r0, 0x14]
		   0x010C8EF4:  0020A0E1     MOV r2, r0
		   0x010C8EF8:  0000A0E3     MOV r0, 0x0
		   0x010C8EFC:  010053E1     CMPS r0, r3, r1
		   0x010C8F00:  1EFF2FB1     BXLT lr
		   0x010C8F04:  1800D2E5     LDRB r0, [r2, 0x18]
		   0x010C8F08:  000050E3     CMPS r0, r0, 0x0
		   0x010C8F0C:  01000013     MOVNE r0, 0x1
		   0x010C8F10:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C8F14 Offset: 0x10C8F14 VA: 0x10C8F14
	public bool GiveRewardsForField(FieldGroup fieldGroup) {
		/* Disassembly (ARM32, 71 instructions, 0x11C bytes):
		   // CFG: 15 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8F14:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010C8F18:  10D04DE2     SUB sp, sp, 0x10
		   0x010C8F1C:  F8509FE5     LDR r5, [pc, 0xf8]
		   0x010C8F20:  0040A0E1     MOV r4, r0
		   0x010C8F24:  0C308DE5     STR r3, [sp, 0xc]
		   0x010C8F28:  05508FE0     ADD r5, pc, r5
		   0x010C8F2C:  08208DE5     STR r2, [sp, 0x8]
		   0x010C8F30:  04108DE5     STR r1, [sp, 0x4]
		   0x010C8F34:  0000D5E5     LDRB r0, [r5]
		   0x010C8F38:  000050E3     CMPS r0, r0, 0x0
		   0x010C8F3C:  0700001A     BNE $+0x24  // if (!=) goto 0x010C8F60
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8F40:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010C8F44:  00009FE7     LDR r0, [pc, r0]
		   0x010C8F48:  8448FAEB     BL $-0x16dde8
		   0x010C8F4C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010C8F50:  00009FE7     LDR r0, [pc, r0]
		   0x010C8F54:  8148FAEB     BL $-0x16ddf4
		   0x010C8F58:  0100A0E3     MOV r0, 0x1
		   0x010C8F5C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8F60:  C0709FE5     LDR r7, [pc, 0xc0]
		   0x010C8F64:  07709FE7     LDR r7, [pc, r7]
		   0x010C8F68:  000097E5     LDR r0, [r7]
		   0x010C8F6C:  741090E5     LDR r1, [r0, 0x74]
		   0x010C8F70:  000051E3     CMPS r0, r1, 0x0
		   0x010C8F74:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8F7C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C8F78:  C548FAEB     BL $-0x16dce4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C8F7C:  04008DE2     ADD r0, sp, 0x4
		   0x010C8F80:  0010A0E3     MOV r1, 0x0
		   0x010C8F84:  0050A0E3     MOV r5, 0x0
		   0x010C8F88:  67BE10EB     BL $+0x42f9a4  // CALL → FieldGroup.get_Type
		   0x010C8F8C:  0060A0E1     MOV r6, r0
		   0x010C8F90:  040050E3     CMPS r0, r0, 0x4
		   0x010C8F94:  0000A0E3     MOV r0, 0x0
		   0x010C8F98:  1200001A     BNE $+0x50  // if (!=) goto 0x010C8FE8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010C8F9C:  000097E5     LDR r0, [r7]
		   0x010C8FA0:  741090E5     LDR r1, [r0, 0x74]
		   0x010C8FA4:  000051E3     CMPS r0, r1, 0x0
		   0x010C8FA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8FB0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010C8FAC:  B848FAEB     BL $-0x16dd18
		   // ──── Block 7 if (!=) ────────────────────
		   0x010C8FB0:  04008DE2     ADD r0, sp, 0x4
		   0x010C8FB4:  0010A0E3     MOV r1, 0x0
		   0x010C8FB8:  6E6C10EB     BL $+0x41b1c0  // CALL → FieldGroup.get_Subtype
		   0x010C8FBC:  0070A0E1     MOV r7, r0
		   0x010C8FC0:  64009FE5     LDR r0, [pc, 0x64]
		   0x010C8FC4:  00009FE7     LDR r0, [pc, r0]
		   0x010C8FC8:  000090E5     LDR r0, [r0]
		   0x010C8FCC:  741090E5     LDR r1, [r0, 0x74]
		   0x010C8FD0:  000051E3     CMPS r0, r1, 0x0
		   0x010C8FD4:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8FDC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010C8FD8:  AD48FAEB     BL $-0x16dd44
		   // ──── Block 9 if (!=) ────────────────────
		   0x010C8FDC:  0700A0E1     MOV r0, r7
		   0x010C8FE0:  0010A0E3     MOV r1, 0x0
		   0x010C8FE4:  1BAD01EB     BL $+0x6b474  // CALL → WorkshopConfig.HasBubblesReward
		   // ──── Block 10 if (!=) ────────────────────
		   0x010C8FE8:  2810D4E5     LDRB r1, [r4, 0x28]
		   0x010C8FEC:  000051E3     CMPS r0, r1, 0x0
		   0x010C8FF0:  0600000A     BEQ $+0x20  // if (==) goto 0x010C9010
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010C8FF4:  040056E3     CMPS r0, r6, 0x4
		   0x010C8FF8:  01000013     MOVNE r0, 0x1
		   0x010C8FFC:  000050E3     CMPS r0, r0, 0x0
		   0x010C9000:  0200000A     BEQ $+0x10  // if (==) goto 0x010C9010
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x010C9004:  0000A0E3     MOV r0, 0x0
		   0x010C9008:  0AAA11EB     BL $+0x46a830  // CALL → FTUEBubbles.get_notCompleted
		   0x010C900C:  015020E2     EOR r5, r0, 0x1
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x010C9010:  0500A0E1     MOV r0, r5
		   0x010C9014:  10D08DE2     ADD sp, sp, 0x10
		   0x010C9018:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010C901C:  C52C1603     TSTSEQ r2, r6, 0xc500
		   0x010C9020:  9CF5FA02     RSCSEQ pc, r10, 0x27000000
		   0x010C9024:  4CFBFA02     RSCSEQ pc, r10, 0x13000
		   0x010C9028:  7CF5FA02     RSCSEQ pc, r10, 0x1f000000
		   0x010C902C:  D8FAFA02     RSCSEQ pc, r10, 0xd8000
		*/
	}

	// RVA: 0x10C89D0 Offset: 0x10C89D0 VA: 0x10C89D0
	private void FlexValuesUpdated() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C89D0:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x10C9030 Offset: 0x10C9030 VA: 0x10C9030
	private void ParseItemForDrops() {
		/* Disassembly (ARM32, 213 instructions, 0x354 bytes):
		   // CFG: 36 blocks, 33 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C9030:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010C9034:  EC529FE5     LDR r5, [pc, 0x2ec]
		   0x010C9038:  0040A0E1     MOV r4, r0
		   0x010C903C:  05508FE0     ADD r5, pc, r5
		   0x010C9040:  0000D5E5     LDRB r0, [r5]
		   0x010C9044:  000050E3     CMPS r0, r0, 0x0
		   0x010C9048:  1C00001A     BNE $+0x78  // if (!=) goto 0x010C90C0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C904C:  D8029FE5     LDR r0, [pc, 0x2d8]
		   0x010C9050:  00009FE7     LDR r0, [pc, r0]
		   0x010C9054:  4148FAEB     BL $-0x16def4
		   0x010C9058:  D0029FE5     LDR r0, [pc, 0x2d0]
		   0x010C905C:  00009FE7     LDR r0, [pc, r0]
		   0x010C9060:  3E48FAEB     BL $-0x16df00
		   0x010C9064:  C8029FE5     LDR r0, [pc, 0x2c8]
		   0x010C9068:  00009FE7     LDR r0, [pc, r0]
		   0x010C906C:  3B48FAEB     BL $-0x16df0c
		   0x010C9070:  C0029FE5     LDR r0, [pc, 0x2c0]
		   0x010C9074:  00009FE7     LDR r0, [pc, r0]
		   0x010C9078:  3848FAEB     BL $-0x16df18
		   0x010C907C:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x010C9080:  00009FE7     LDR r0, [pc, r0]
		   0x010C9084:  3548FAEB     BL $-0x16df24
		   0x010C9088:  B0029FE5     LDR r0, [pc, 0x2b0]
		   0x010C908C:  00009FE7     LDR r0, [pc, r0]
		   0x010C9090:  3248FAEB     BL $-0x16df30
		   0x010C9094:  A8029FE5     LDR r0, [pc, 0x2a8]
		   0x010C9098:  00009FE7     LDR r0, [pc, r0]
		   0x010C909C:  2F48FAEB     BL $-0x16df3c
		   0x010C90A0:  A0029FE5     LDR r0, [pc, 0x2a0]
		   0x010C90A4:  00009FE7     LDR r0, [pc, r0]
		   0x010C90A8:  2C48FAEB     BL $-0x16df48
		   0x010C90AC:  98029FE5     LDR r0, [pc, 0x298]
		   0x010C90B0:  00009FE7     LDR r0, [pc, r0]
		   0x010C90B4:  2948FAEB     BL $-0x16df54
		   0x010C90B8:  0100A0E3     MOV r0, 0x1
		   0x010C90BC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C90C0:  88029FE5     LDR r0, [pc, 0x288]
		   0x010C90C4:  00009FE7     LDR r0, [pc, r0]
		   0x010C90C8:  000090E5     LDR r0, [r0]
		   0x010C90CC:  741090E5     LDR r1, [r0, 0x74]
		   0x010C90D0:  000051E3     CMPS r0, r1, 0x0
		   0x010C90D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010C90DC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C90D8:  6D48FAEB     BL $-0x16de44
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C90DC:  70029FE5     LDR r0, [pc, 0x270]
		   0x010C90E0:  0020A0E3     MOV r2, 0x0
		   0x010C90E4:  0030A0E3     MOV r3, 0x0
		   0x010C90E8:  0060A0E3     MOV r6, 0x0
		   0x010C90EC:  00009FE7     LDR r0, [pc, r0]
		   0x010C90F0:  001090E5     LDR r1, [r0]
		   0x010C90F4:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x010C90F8:  00009FE7     LDR r0, [pc, r0]
		   0x010C90FC:  000090E5     LDR r0, [r0]
		   0x010C9100:  9B01FFEB     BL $-0x3f98c
		   0x010C9104:  0010A0E3     MOV r1, 0x0
		   0x010C9108:  0050A0E1     MOV r5, r0
		   0x010C910C:  B93C77EB     BL $+0x1dcf2ec  // CALL → String.IsNullOrEmpty
		   0x010C9110:  000050E3     CMPS r0, r0, 0x0
		   0x010C9114:  0600001A     BNE $+0x20  // if (!=) goto 0x010C9134
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010C9118:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x010C911C:  0020A0E3     MOV r2, 0x0
		   0x010C9120:  00009FE7     LDR r0, [pc, r0]
		   0x010C9124:  001090E5     LDR r1, [r0]
		   0x010C9128:  0500A0E1     MOV r0, r5
		   0x010C912C:  443877EB     BL $+0x1dce118  // CALL → String.op_Inequality
		   0x010C9130:  0060A0E1     MOV r6, r0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010C9134:  000054E3     CMPS r0, r4, 0x0
		   0x010C9138:  0000001A     BNE $+0x8  // if (!=) goto 0x010C9140
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010C913C:  A348FAEB     BL $-0x16dd6c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010C9140:  18029FE5     LDR r0, [pc, 0x218]
		   0x010C9144:  00009FE7     LDR r0, [pc, r0]
		   0x010C9148:  2860C4E5     STRB r6, [r4, 0x28]
		   0x010C914C:  000090E5     LDR r0, [r0]
		   0x010C9150:  741090E5     LDR r1, [r0, 0x74]
		   0x010C9154:  000051E3     CMPS r0, r1, 0x0
		   0x010C9158:  0000001A     BNE $+0x8  // if (!=) goto 0x010C9160
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010C915C:  4C48FAEB     BL $-0x16dec8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010C9160:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x010C9164:  00009FE7     LDR r0, [pc, r0]
		   0x010C9168:  002090E5     LDR r2, [r0]
		   0x010C916C:  0500A0E1     MOV r0, r5
		   0x010C9170:  0110A0E3     MOV r1, 0x1
		   0x010C9174:  4FD523EB     BL $+0x8f5544  // CALL → JsonUtil.Deserialize<object>
		   0x010C9178:  0060A0E1     MOV r6, r0
		   0x010C917C:  000050E3     CMPS r0, r0, 0x0
		   0x010C9180:  300084E5     STR r0, [r4, 0x30]
		   0x010C9184:  0000001A     BNE $+0x8  // if (!=) goto 0x010C918C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010C9188:  9048FAEB     BL $-0x16ddb8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010C918C:  0600A0E1     MOV r0, r6
		   0x010C9190:  0010A0E3     MOV r1, 0x0
		   0x010C9194:  80C300EB     BL $+0x30e08  // CALL → ConfigItemID.Parse
		   0x010C9198:  300094E5     LDR r0, [r4, 0x30]
		   0x010C919C:  000050E3     CMPS r0, r0, 0x0
		   0x010C91A0:  2300000A     BEQ $+0x94  // if (==) goto 0x010C9234
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010C91A4:  0010A0E3     MOV r1, 0x0
		   0x010C91A8:  639700EB     BL $+0x25d94  // CALL → ConfigItemID.GetChainName
		   0x010C91AC:  C4119FE5     LDR r1, [pc, 0x1c4]
		   0x010C91B0:  0020A0E3     MOV r2, 0x0
		   0x010C91B4:  01109FE7     LDR r1, [pc, r1]
		   0x010C91B8:  001091E5     LDR r1, [r1]
		   0x010C91BC:  13F676EB     BL $+0x1dbd854  // CALL → String.op_Equality
		   0x010C91C0:  000050E3     CMPS r0, r0, 0x0
		   0x010C91C4:  0900000A     BEQ $+0x2c  // if (==) goto 0x010C91F0
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010C91C8:  306094E5     LDR r6, [r4, 0x30]
		   0x010C91CC:  000056E3     CMPS r0, r6, 0x0
		   0x010C91D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010C91D8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010C91D4:  7D48FAEB     BL $-0x16de04
		   // ──── Block 16 if (!=) ────────────────────
		   0x010C91D8:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x010C91DC:  0020A0E3     MOV r2, 0x0
		   0x010C91E0:  00009FE7     LDR r0, [pc, r0]
		   0x010C91E4:  001090E5     LDR r1, [r0]
		   0x010C91E8:  0600A0E1     MOV r0, r6
		   0x010C91EC:  A6C300EB     BL $+0x30ea0  // CALL → ConfigItemID.SetChainName
		   // ──── Block 17 if (==) ────────────────────
		   0x010C91F0:  306094E5     LDR r6, [r4, 0x30]
		   0x010C91F4:  000056E3     CMPS r0, r6, 0x0
		   0x010C91F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010C9200
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010C91FC:  7348FAEB     BL $-0x16de2c
		   // ──── Block 19 if (!=) ────────────────────
		   0x010C9200:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010C9204:  000050E3     CMPS r0, r0, 0x0
		   0x010C9208:  0510A0D1     MOVLE r1, r5
		   0x010C920C:  5C0000DB     BLLE $+0x178
		   0x010C9210:  304094E5     LDR r4, [r4, 0x30]
		   0x010C9214:  000054E3     CMPS r0, r4, 0x0
		   0x010C9218:  0000001A     BNE $+0x8  // if (!=) goto 0x010C9220
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010C921C:  6B48FAEB     BL $-0x16de4c
		   // ──── Block 22 if (!=) ────────────────────
		   0x010C9220:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010C9224:  010040E2     SUB r0, r0, 0x1
		   0x010C9228:  C00FC0E1     BIC r0, r0, r0, asr 31
		   0x010C922C:  180084E5     STR r0, [r4, 0x18]
		   0x010C9230:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 23 if (==) ────────────────────
		   0x010C9234:  34019FE5     LDR r0, [pc, 0x134]
		   0x010C9238:  00009FE7     LDR r0, [pc, r0]
		   0x010C923C:  000090E5     LDR r0, [r0]
		   0x010C9240:  5F48FAEB     BL $-0x16de7c
		   0x010C9244:  0060A0E1     MOV r6, r0
		   0x010C9248:  24019FE5     LDR r0, [pc, 0x124]
		   0x010C924C:  0020A0E3     MOV r2, 0x0
		   0x010C9250:  00009FE7     LDR r0, [pc, r0]
		   0x010C9254:  001090E5     LDR r1, [r0]
		   0x010C9258:  0600A0E1     MOV r0, r6
		   0x010C925C:  15C300EB     BL $+0x30c5c  // CALL → ConfigItemID..ctor
		   0x010C9260:  000056E3     CMPS r0, r6, 0x0
		   0x010C9264:  0000001A     BNE $+0x8  // if (!=) goto 0x010C926C
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010C9268:  5848FAEB     BL $-0x16de98
		   // ──── Block 25 if (!=) ────────────────────
		   0x010C926C:  0200A0E3     MOV r0, 0x2
		   0x010C9270:  306084E5     STR r6, [r4, 0x30]
		   0x010C9274:  180086E5     STR r0, [r6, 0x18]
		   0x010C9278:  0510A0E1     MOV r1, r5
		   0x010C927C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010C9280:  3F0000EA     B $+0x104  // TAIL CALL → BubblesConfig.LogParseError
		   0x010C9284:  010000EA     B $+0xc  // goto 0x010C9290
		   0x010C9288:  000000EA     B $+0x8  // goto 0x010C9290
		   0x010C928C:  FFFFFFEA     B $+0x4  // goto 0x010C9290
		   // ──── Block 29 ──────────────────────────────
		   0x010C9290:  010051E3     CMPS r0, r1, 0x1
		   0x010C9294:  2100001A     BNE $+0x8c  // if (!=) goto 0x010C9320
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010C9298:  0A6EFDEB     BL $-0xa47d0
		   0x010C929C:  0060A0E1     MOV r6, r0
		   0x010C92A0:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010C92A4:  00009FE7     LDR r0, [pc, r0]
		   0x010C92A8:  B047FAEB     BL $-0x16e138
		   0x010C92AC:  001096E5     LDR r1, [r6]
		   0x010C92B0:  001091E5     LDR r1, [r1]
		   0x010C92B4:  6149FAEB     BL $-0x16da74
		   0x010C92B8:  000050E3     CMPS r0, r0, 0x0
		   0x010C92BC:  0E00000A     BEQ $+0x40  // if (==) goto 0x010C92FC
		   // 
		   // ──── Block 31 else (!=) ────────────────────
		   0x010C92C0:  006096E5     LDR r6, [r6]
		   0x010C92C4:  336EFDEB     BL $-0xa472c
		   0x010C92C8:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010C92CC:  00009FE7     LDR r0, [pc, r0]
		   0x010C92D0:  A647FAEB     BL $-0x16e160
		   0x010C92D4:  741090E5     LDR r1, [r0, 0x74]
		   0x010C92D8:  000051E3     CMPS r0, r1, 0x0
		   0x010C92DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010C92E4
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x010C92E0:  EB47FAEB     BL $-0x16e04c
		   // ──── Block 33 if (!=) ────────────────────
		   0x010C92E4:  0600A0E1     MOV r0, r6
		   0x010C92E8:  0010A0E3     MOV r1, 0x0
		   0x010C92EC:  A6BB3CEB     BL $+0xf2eea0  // CALL → sub_1FF818C
		   0x010C92F0:  0510A0E1     MOV r1, r5
		   0x010C92F4:  220000EB     BL $+0x90  // CALL → BubblesConfig.LogParseError
		   0x010C92F8:  A6FFFFEA     B $-0x160
		   // ──── Block 34 if (==) ────────────────────
		   0x010C92FC:  0400A0E3     MOV r0, 0x4
		   0x010C9300:  897AFDEB     BL $-0xa15d4
		   0x010C9304:  002096E5     LDR r2, [r6]
		   0x010C9308:  70109FE5     LDR r1, [pc, 0x70]
		   0x010C930C:  002080E5     STR r2, [r0]
		   0x010C9310:  01108FE0     ADD r1, pc, r1
		   0x010C9314:  0020A0E3     MOV r2, 0x0
		   0x010C9318:  877AFDEB     BL $-0xa15dc
		   0x010C931C:  1D6EFDEB     BL $-0xa4784
		   // ──── Block 35 if (!=) ────────────────────
		   0x010C9320:  206EFDEB     BL $-0xa4778
		   0x010C9324:  1E1AEEEB     BL $-0x479780
		   0x010C9328:  B32B1603     TSTSEQ r2, r6, 0x2cc00
		   0x010C932C:  B4FBFA02     RSCSEQ pc, r10, 0x2d000
		   0x010C9330:  44E6FA02     RSCSEQ lr, r10, 0x4400000
		   0x010C9334:  A0FBFA02     RSCSEQ pc, r10, 0x28000
		   0x010C9338:  CCE9FA02     RSCSEQ lr, r10, 0x330000
		   0x010C933C:  8CFBFA02     RSCSEQ pc, r10, 0x23000
		   0x010C9340:  BCE5FA02     RSCSEQ lr, r10, 0x2f000000
		   0x010C9344:  9CD8FA02     RSCSEQ sp, r10, 0x9c0000
		   0x010C9348:  9CD9FA02     RSCSEQ sp, r10, 0x270000
		   0x010C934C:  60FBFA02     RSCSEQ pc, r10, 0x18000
		   0x010C9350:  DCE5FA02     RSCSEQ lr, r10, 0x37000000
		   0x010C9354:  54D9FA02     RSCSEQ sp, r10, 0x150000
		   0x010C9358:  18FBFA02     RSCSEQ pc, r10, 0x6000
		   0x010C935C:  14D8FA02     RSCSEQ sp, r10, 0x140000
		   0x010C9360:  FCE8FA02     RSCSEQ lr, r10, 0xfc0000
		   0x010C9364:  A4FAFA02     RSCSEQ pc, r10, 0xa4000
		   0x010C9368:  48D6FA02     RSCSEQ sp, r10, 0x4800000
		   0x010C936C:  BCD2FA02     RSCSEQ sp, r10, 0xc000000b
		   0x010C9370:  CCF9FA02     RSCSEQ pc, r10, 0x330000
		   0x010C9374:  BCF9FA02     RSCSEQ pc, r10, 0x2f0000
		   0x010C9378:  94E4FA02     RSCSEQ lr, r10, 0x94000000
		   0x010C937C:  2CFAFA02     RSCSEQ pc, r10, 0x2c000
		   0x010C9380:  4CFDE502     RSCEQ pc, r5, 0x1300
		*/
	}

	// RVA: 0x10C9384 Offset: 0x10C9384 VA: 0x10C9384
	private void LogParseError(string json) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C9384:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010C9388:  E8509FE5     LDR r5, [pc, 0xe8]
		   0x010C938C:  0140A0E1     MOV r4, r1
		   0x010C9390:  05508FE0     ADD r5, pc, r5
		   0x010C9394:  0000D5E5     LDRB r0, [r5]
		   0x010C9398:  000050E3     CMPS r0, r0, 0x0
		   0x010C939C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010C93D8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C93A0:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x010C93A4:  00009FE7     LDR r0, [pc, r0]
		   0x010C93A8:  6C47FAEB     BL $-0x16e248
		   0x010C93AC:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010C93B0:  00009FE7     LDR r0, [pc, r0]
		   0x010C93B4:  6947FAEB     BL $-0x16e254
		   0x010C93B8:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x010C93BC:  00009FE7     LDR r0, [pc, r0]
		   0x010C93C0:  6647FAEB     BL $-0x16e260
		   0x010C93C4:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010C93C8:  00009FE7     LDR r0, [pc, r0]
		   0x010C93CC:  6347FAEB     BL $-0x16e26c
		   0x010C93D0:  0100A0E3     MOV r0, 0x1
		   0x010C93D4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C93D8:  0400A0E1     MOV r0, r4
		   0x010C93DC:  0010A0E3     MOV r1, 0x0
		   0x010C93E0:  043C77EB     BL $+0x1dcf018  // CALL → String.IsNullOrEmpty
		   0x010C93E4:  000050E3     CMPS r0, r0, 0x0
		   0x010C93E8:  0000000A     BEQ $+0x8  // if (==) goto 0x010C93F0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010C93EC:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 4 if (==) ────────────────────
		   0x010C93F0:  94009FE5     LDR r0, [pc, 0x94]
		   0x010C93F4:  0020A0E3     MOV r2, 0x0
		   0x010C93F8:  00009FE7     LDR r0, [pc, r0]
		   0x010C93FC:  001090E5     LDR r1, [r0]
		   0x010C9400:  0400A0E1     MOV r0, r4
		   0x010C9404:  81F576EB     BL $+0x1dbd60c  // CALL → String.op_Equality
		   0x010C9408:  000050E3     CMPS r0, r0, 0x0
		   0x010C940C:  3088BD18     POPNE {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10C949C Offset: 0x10C949C VA: 0x10C949C
	private BaseBubbleConfig DefaultConfigGetter(string itemCode) {
		/* Disassembly (ARM32, 47 instructions, 0xBC bytes):
		   // CFG: 9 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C949C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010C94A0:  08D04DE2     SUB sp, sp, 0x8
		   0x010C94A4:  98609FE5     LDR r6, [pc, 0x98]
		   0x010C94A8:  0050A0E1     MOV r5, r0
		   0x010C94AC:  0140A0E1     MOV r4, r1
		   0x010C94B0:  06608FE0     ADD r6, pc, r6
		   0x010C94B4:  0000D6E5     LDRB r0, [r6]
		   0x010C94B8:  000050E3     CMPS r0, r0, 0x0
		   0x010C94BC:  0700001A     BNE $+0x24  // if (!=) goto 0x010C94E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C94C0:  80009FE5     LDR r0, [pc, 0x80]
		   0x010C94C4:  00009FE7     LDR r0, [pc, r0]
		   0x010C94C8:  2447FAEB     BL $-0x16e368
		   0x010C94CC:  78009FE5     LDR r0, [pc, 0x78]
		   0x010C94D0:  00009FE7     LDR r0, [pc, r0]
		   0x010C94D4:  2147FAEB     BL $-0x16e374
		   0x010C94D8:  0100A0E3     MOV r0, 0x1
		   0x010C94DC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C94E0:  246095E5     LDR r6, [r5, 0x24]
		   0x010C94E4:  0000A0E3     MOV r0, 0x0
		   0x010C94E8:  04008DE5     STR r0, [sp, 0x4]
		   0x010C94EC:  000056E3     CMPS r0, r6, 0x0
		   0x010C94F0:  0000001A     BNE $+0x8  // if (!=) goto 0x010C94F8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C94F4:  B547FAEB     BL $-0x16e124
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C94F8:  50009FE5     LDR r0, [pc, 0x50]
		   0x010C94FC:  04208DE2     ADD r2, sp, 0x4
		   0x010C9500:  0410A0E1     MOV r1, r4
		   0x010C9504:  00009FE7     LDR r0, [pc, r0]
		   0x010C9508:  003090E5     LDR r3, [r0]
		   0x010C950C:  0600A0E1     MOV r0, r6
		   0x010C9510:  26FF54EB     BL $+0x153fca0  // CALL → Dictionary<object, object>.TryGetValue
		   0x010C9514:  000050E3     CMPS r0, r0, 0x0
		   0x010C9518:  0100000A     BEQ $+0xc  // if (==) goto 0x010C9524
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010C951C:  04009DE5     LDR r0, [sp, 0x4]
		   0x010C9520:  050000EA     B $+0x1c  // goto 0x010C953C
		   // ──── Block 6 if (==) ────────────────────
		   0x010C9524:  28009FE5     LDR r0, [pc, 0x28]
		   0x010C9528:  0410A0E1     MOV r1, r4
		   0x010C952C:  00009FE7     LDR r0, [pc, r0]
		   0x010C9530:  002090E5     LDR r2, [r0]
		   0x010C9534:  200095E5     LDR r0, [r5, 0x20]
		   0x010C9538:  790221EB     BL $+0x8409ec  // CALL → CollectionExtensions.GetValueOrDefault<object, object>
		   // ──── Block 7 ──────────────────────────────
		   0x010C953C:  08D08DE2     ADD sp, sp, 0x8
		   0x010C9540:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010C9544:  41271603     TSTSEQ r2, r6, 0x1040000
		   0x010C9548:  54F7FA02     RSCSEQ pc, r10, 0x1500000
		   0x010C954C:  4CF7FA02     RSCSEQ pc, r10, 0x1300000
		   0x010C9550:  18F7FA02     RSCSEQ pc, r10, 0x600000
		   0x010C9554:  ECF6FA02     RSCSEQ pc, r10, 0xec00000
		*/
	}

	// RVA: 0x10C9558 Offset: 0x10C9558 VA: 0x10C9558
	private BaseBubbleConfig FTUEBubbleConfigGetter(string itemCode) {
		/* Disassembly (ARM32, 82 instructions, 0x148 bytes):
		   // CFG: 15 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C9558:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010C955C:  18619FE5     LDR r6, [pc, 0x118]
		   0x010C9560:  0050A0E1     MOV r5, r0
		   0x010C9564:  0140A0E1     MOV r4, r1
		   0x010C9568:  06608FE0     ADD r6, pc, r6
		   0x010C956C:  0000D6E5     LDRB r0, [r6]
		   0x010C9570:  000050E3     CMPS r0, r0, 0x0
		   0x010C9574:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010C95B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C9578:  00019FE5     LDR r0, [pc, 0x100]
		   0x010C957C:  00009FE7     LDR r0, [pc, r0]
		   0x010C9580:  F646FAEB     BL $-0x16e420
		   0x010C9584:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x010C9588:  00009FE7     LDR r0, [pc, r0]
		   0x010C958C:  F346FAEB     BL $-0x16e42c
		   0x010C9590:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x010C9594:  00009FE7     LDR r0, [pc, r0]
		   0x010C9598:  F046FAEB     BL $-0x16e438
		   0x010C959C:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x010C95A0:  00009FE7     LDR r0, [pc, r0]
		   0x010C95A4:  ED46FAEB     BL $-0x16e444
		   0x010C95A8:  0100A0E3     MOV r0, 0x1
		   0x010C95AC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C95B0:  D8709FE5     LDR r7, [pc, 0xd8]
		   0x010C95B4:  07709FE7     LDR r7, [pc, r7]
		   0x010C95B8:  000097E5     LDR r0, [r7]
		   0x010C95BC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010C95C0:  086090E5     LDR r6, [r0, 0x8]
		   0x010C95C4:  000056E3     CMPS r0, r6, 0x0
		   0x010C95C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010C95D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C95CC:  7F47FAEB     BL $-0x16e1fc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C95D0:  0600A0E1     MOV r0, r6
		   0x010C95D4:  1110A0E3     MOV r1, 0x11
		   0x010C95D8:  0020A0E3     MOV r2, 0x0
		   0x010C95DC:  31A911EB     BL $+0x46a4cc  // CALL → FTUEBubbles.IsReadyToShow
		   0x010C95E0:  000050E3     CMPS r0, r0, 0x0
		   0x010C95E4:  0800001A     BNE $+0x28  // if (!=) goto 0x010C960C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010C95E8:  000097E5     LDR r0, [r7]
		   0x010C95EC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010C95F0:  086090E5     LDR r6, [r0, 0x8]
		   0x010C95F4:  000056E3     CMPS r0, r6, 0x0
		   0x010C95F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010C9600
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010C95FC:  7347FAEB     BL $-0x16e22c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010C9600:  1C00D6E5     LDRB r0, [r6, 0x1c]
		   0x010C9604:  000050E3     CMPS r0, r0, 0x0
		   0x010C9608:  0A00000A     BEQ $+0x30  // if (==) goto 0x010C9638
		   // 
		   // ──── Block 8 (from 2 paths) ──────────────────
		   0x010C960C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010C9610:  0020A0E3     MOV r2, 0x0
		   0x010C9614:  00009FE7     LDR r0, [pc, r0]
		   0x010C9618:  001090E5     LDR r1, [r0]
		   0x010C961C:  0400A0E1     MOV r0, r4
		   0x010C9620:  FAF476EB     BL $+0x1dbd3f0  // CALL → String.op_Equality
		   0x010C9624:  000050E3     CMPS r0, r0, 0x0
		   0x010C9628:  0200000A     BEQ $+0x10  // if (==) goto 0x010C9638
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010C962C:  64009FE5     LDR r0, [pc, 0x64]
		   0x010C9630:  00009FE7     LDR r0, [pc, r0]
		   0x010C9634:  050000EA     B $+0x1c  // goto 0x010C9650
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010C9638:  0000A0E3     MOV r0, 0x0
		   0x010C963C:  7DA811EB     BL $+0x46a1fc  // CALL → FTUEBubbles.get_notCompleted
		   0x010C9640:  000050E3     CMPS r0, r0, 0x0
		   0x010C9644:  0800000A     BEQ $+0x28  // if (==) goto 0x010C966C
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010C9648:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010C964C:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 12 ──────────────────────────────
		   0x010C9650:  000090E5     LDR r0, [r0]
		   0x010C9654:  5A47FAEB     BL $-0x16e290
		   0x010C9658:  0010A0E3     MOV r1, 0x0
		   0x010C965C:  0040A0E1     MOV r4, r0
		   0x010C9660:  612F7FEB     BL $+0x1fcbd8c  // CALL → Object..ctor
		   0x010C9664:  0400A0E1     MOV r0, r4
		   0x010C9668:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 13 if (==) ────────────────────
		   0x010C966C:  0500A0E1     MOV r0, r5
		   0x010C9670:  0410A0E1     MOV r1, r4
		   0x010C9674:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010C9678:  87FFFFEA     B $-0x1dc
		   0x010C967C:  8A261603     TSTSEQ r2, r6, 0x8a00000
		   0x010C9680:  A4F6FA02     RSCSEQ pc, r10, 0xa400000
		   0x010C9684:  9CF6FA02     RSCSEQ pc, r10, 0x9c00000
		   0x010C9688:  94F6FA02     RSCSEQ pc, r10, 0x9400000
		   0x010C968C:  8CF6FA02     RSCSEQ pc, r10, 0x8c00000
		   0x010C9690:  74F6FA02     RSCSEQ pc, r10, 0x7400000
		   0x010C9694:  18F6FA02     RSCSEQ pc, r10, 0x1800000
		   0x010C9698:  F4F5FA02     RSCSEQ pc, r10, 0x3d000000
		   0x010C969C:  D4F5FA02     RSCSEQ pc, r10, 0x35000000
		*/
	}

	// RVA: 0x10C8C64 Offset: 0x10C8C64 VA: 0x10C8C64
	private void LogDebugStatus() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8C64:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C96B0 Offset: 0x10C96B0 VA: 0x10C96B0
	public void .ctor() {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C96B0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010C96B4:  90509FE5     LDR r5, [pc, 0x90]
		   0x010C96B8:  0040A0E1     MOV r4, r0
		   0x010C96BC:  05508FE0     ADD r5, pc, r5
		   0x010C96C0:  0000D5E5     LDRB r0, [r5]
		   0x010C96C4:  000050E3     CMPS r0, r0, 0x0
		   0x010C96C8:  0700001A     BNE $+0x24  // if (!=) goto 0x010C96EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C96CC:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010C96D0:  00009FE7     LDR r0, [pc, r0]
		   0x010C96D4:  A146FAEB     BL $-0x16e574
		   0x010C96D8:  74009FE5     LDR r0, [pc, 0x74]
		   0x010C96DC:  00009FE7     LDR r0, [pc, r0]
		   0x010C96E0:  9E46FAEB     BL $-0x16e580
		   0x010C96E4:  0100A0E3     MOV r0, 0x1
		   0x010C96E8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C96EC:  64609FE5     LDR r6, [pc, 0x64]
		   0x010C96F0:  0010E0E3     MVN r1, r0, 0x0
		   0x010C96F4:  06609FE7     LDR r6, [pc, r6]
		   0x010C96F8:  1C1084E5     STR r1, [r4, 0x1c]
		   0x010C96FC:  000096E5     LDR r0, [r6]
		   0x010C9700:  2F47FAEB     BL $-0x16e33c
		   0x010C9704:  50709FE5     LDR r7, [pc, 0x50]
		   0x010C9708:  0050A0E1     MOV r5, r0
		   0x010C970C:  07709FE7     LDR r7, [pc, r7]
		   0x010C9710:  001097E5     LDR r1, [r7]
		   0x010C9714:  49F454EB     BL $+0x153d12c  // CALL → Dictionary<object, object>..ctor
		   0x010C9718:  000096E5     LDR r0, [r6]
		   0x010C971C:  205084E5     STR r5, [r4, 0x20]
		   0x010C9720:  2747FAEB     BL $-0x16e35c
		   0x010C9724:  001097E5     LDR r1, [r7]
		   0x010C9728:  0050A0E1     MOV r5, r0
		   0x010C972C:  43F454EB     BL $+0x153d114  // CALL → Dictionary<object, object>..ctor
		   0x010C9730:  0100A0E3     MOV r0, 0x1
		   0x010C9734:  245084E5     STR r5, [r4, 0x24]
		   0x010C9738:  2800C4E5     STRB r0, [r4, 0x28]
		   0x010C973C:  0400A0E1     MOV r0, r4
		   0x010C9740:  0010A0E3     MOV r1, 0x0
		   0x010C9744:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010C9748:  EFB93CEA     B $+0xf2e7c4
		   0x010C974C:  37251603     TSTSEQ r2, r6, 0xdc00000
		   0x010C9750:  60F5FA02     RSCSEQ pc, r10, 0x18000000
		   0x010C9754:  58F5FA02     RSCSEQ pc, r10, 0x16000000
		   0x010C9758:  40F5FA02     RSCSEQ pc, r10, 0x10000000
		   0x010C975C:  24F5FA02     RSCSEQ pc, r10, 0x9000000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
private sealed class ConfigGetter : MulticastDelegate // TypeDefIndex: 1126
{

	// Methods

	// RVA: 0x10C8BB4 Offset: 0x10C8BB4 VA: 0x10C8BB4
	public void .ctor(object object, IntPtr method) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C8BB4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010C8BB8:  0040A0E1     MOV r4, r0
		   0x010C8BBC:  142080E5     STR r2, [r0, 0x14]
		   0x010C8BC0:  040092E5     LDR r0, [r2, 0x4]
		   0x010C8BC4:  0150A0E1     MOV r5, r1
		   0x010C8BC8:  080084E5     STR r0, [r4, 0x8]
		   0x010C8BCC:  0200A0E1     MOV r0, r2
		   0x010C8BD0:  2E60D2E5     LDRB r6, [r2, 0x2e]
		   0x010C8BD4:  101084E5     STR r1, [r4, 0x10]
		   0x010C8BD8:  204084E5     STR r4, [r4, 0x20]
		   0x010C8BDC:  8749FAEB     BL $-0x16d9dc
		   0x010C8BE0:  000050E3     CMPS r0, r0, 0x0
		   0x010C8BE4:  0400000A     BEQ $+0x18  // if (==) goto 0x010C8BFC
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x010C8BE8:  010056E3     CMPS r0, r6, 0x1
		   0x010C8BEC:  0C00001A     BNE $+0x38  // if (!=) goto 0x010C8C24
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x010C8BF0:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x010C8BF4:  00008FE0     ADD r0, pc, r0
		   0x010C8BF8:  100000EA     B $+0x48  // goto 0x010C8C40
		   // ──── Block 3 if (==) ────────────────────
		   0x010C8BFC:  000056E3     CMPS r0, r6, 0x0
		   0x010C8C00:  0C00000A     BEQ $+0x38  // if (==) goto 0x010C8C38
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010C8C04:  000055E3     CMPS r0, r5, 0x0
		   0x010C8C08:  0500001A     BNE $+0x1c  // if (!=) goto 0x010C8C24
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010C8C0C:  48109FE5     LDR r1, [pc, 0x48]
		   0x010C8C10:  0000A0E3     MOV r0, 0x0
		   0x010C8C14:  01108FE0     ADD r1, pc, r1
		   0x010C8C18:  F249FAEB     BL $-0x16d830
		   0x010C8C1C:  0010A0E3     MOV r1, 0x0
		   0x010C8C20:  9649FAEB     BL $-0x16d9a0
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x010C8C24:  080094E5     LDR r0, [r4, 0x8]
		   0x010C8C28:  101094E5     LDR r1, [r4, 0x10]
		   0x010C8C2C:  0C0084E5     STR r0, [r4, 0xc]
		   0x010C8C30:  201084E5     STR r1, [r4, 0x20]
		   0x010C8C34:  020000EA     B $+0x10  // goto 0x010C8C44
		   // ──── Block 7 if (==) ────────────────────
		   0x010C8C38:  18009FE5     LDR r0, [pc, 0x18]
		   0x010C8C3C:  00008FE0     ADD r0, pc, r0
		   // ──── Block 8 ──────────────────────────────
		   0x010C8C40:  0C0084E5     STR r0, [r4, 0xc]
		   // ──── Block 9 ──────────────────────────────
		   0x010C8C44:  14009FE5     LDR r0, [pc, 0x14]
		   0x010C8C48:  00008FE0     ADD r0, pc, r0
		   0x010C8C4C:  1C0084E5     STR r0, [r4, 0x1c]
		   0x010C8C50:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010C8C54:  4889B8FF     CDP2 p9, ;, c8, c8, c8, 2
		   0x010C8C58:  D088B8FF     MRC2 p8, 5, r8, c8, c0, 6
		   0x010C8C5C:  1DB66BFF     MCR2 p6, 3, fp, c11, c13, 0
		   0x010C8C60:  7C88B8FF     MRC2 p8, 5, r8, c8, c12, 3
		*/
	}

	// RVA: 0x10C9760 Offset: 0x10C9760 VA: 0x10C9760 Slot: 13
	public virtual BaseBubbleConfig Invoke(string itemCode) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C9760:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010C9764:  142090E5     LDR r2, [r0, 0x14]
		   0x010C9768:  200090E5     LDR r0, [r0, 0x20]
		   0x010C976C:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10C9770 Offset: 0x10C9770 VA: 0x10C9770 Slot: 14
	public virtual IAsyncResult BeginInvoke(string itemCode, AsyncCallback callback, object object) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C9770:  00482DE9     PUSH {fp, lr}
		   0x010C9774:  08D04DE2     SUB sp, sp, 0x8
		   0x010C9778:  00C0A0E3     MOV ip, 0x0
		   0x010C977C:  02108DE8     STM sp, {r1, ip}
		   0x010C9780:  0D10A0E1     MOV r1, sp
		   0x010C9784:  6046FAEB     BL $-0x16e678
		   0x010C9788:  08D08DE2     ADD sp, sp, 0x8
		   0x010C978C:  0088BDE8     POP {fp, pc}
		*/
	}

	// RVA: 0x10C9790 Offset: 0x10C9790 VA: 0x10C9790 Slot: 15
	public virtual BaseBubbleConfig EndInvoke(IAsyncResult result) {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C9790:  0100A0E1     MOV r0, r1
		   0x010C9794:  0010A0E3     MOV r1, 0x0
		   0x010C9798:  5C46FAEA     B $-0x16e688
		*/
	}
}
