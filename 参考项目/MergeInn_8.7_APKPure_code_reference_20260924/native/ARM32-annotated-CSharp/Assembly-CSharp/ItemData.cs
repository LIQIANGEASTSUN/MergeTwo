// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ItemData // TypeDefIndex: 1319
{

	// Fields
	public static ResourcesPack resourcesPack; // 0x0
	private static ItemData.PricesConfig[] pricesConfigs; // 0x4
	[JsonIgnore]
	[SerializeField]
	public ChainObject chain; // 0x8
	[JsonIgnore]
	[SerializeField]
	public Sprite lockSprite; // 0xC
	[JsonIgnore]
	[SerializeField]
	public SpriteCollection backgroundAnimation; // 0x10
	[SerializeField]
	public string itemCode; // 0x14
	[SerializeField]
	public int order; // 0x18
	[SerializeField]
	public bool locked; // 0x1C
	[JsonIgnore]
	[SerializeField]
	private ItemData lockedData; // 0x20
	[JsonIgnore]
	[SerializeField]
	private ItemObject lockedObject; // 0x24
	[JsonIgnore]
	[SerializeField]
	public ItemObject boxedItem; // 0x28
	[SerializeField]
	public string mainSpriteName; // 0x2C
	[SerializeField]
	public string chargedSpriteName; // 0x30
	[SerializeField]
	public string backgroundAnimationName; // 0x34
	[SerializeField]
	public List<string> destructionItemsReferences; // 0x38
	[SerializeField]
	public List<ItemData.ItemSerializedReferenceChance> containerItemsReferences; // 0x3C
	[SerializeField]
	public List<string> rewardsItemsReferences; // 0x40
	[SerializeField]
	public List<string> predefinedItemsReferences; // 0x44
	[SerializeField]
	public List<ItemData.ItemSerializedReferenceList> stimulusItemsReferences; // 0x48
	[JsonConverter(25)]
	[SerializeField]
	public ItemType itemType; // 0x4C
	[JsonConverter(25)]
	[SerializeField]
	public ConsumableType consumableType; // 0x50
	[SerializeField]
	public int consumableValue; // 0x54
	[SerializeField]
	public float containerCooldown; // 0x58
	[SerializeField]
	public ChargeData chargeData; // 0x5C
	[SerializeField]
	public bool destrucionDrop; // 0x60
	[JsonIgnore]
	[SerializeField]
	public ItemObject[] destructionItems; // 0x64
	[JsonIgnore]
	[SerializeField]
	public ItemReference[] containerItems; // 0x68
	[JsonIgnore]
	[SerializeField]
	public ItemObject[] rewardsItems; // 0x6C
	[JsonIgnore]
	[SerializeField]
	public ItemObject[] predefinedItems; // 0x70
	[SerializeField]
	public bool isItBubble; // 0x74
	[SerializeField]
	public string title; // 0x78
	[SerializeField]
	public string description; // 0x7C
	[SerializeField]
	public int coinsCost; // 0x80
	[SerializeField]
	public int gemsCost; // 0x84
	[SerializeField]
	public float timeToUnlock; // 0x88
	[SerializeField]
	public int containerActivationEnergy; // 0x8C
	[SerializeField]
	public bool containerEnergyConsumptionMultiplierAllowed; // 0x90
	[SerializeField]
	public int stimulusChestEpisode; // 0x94
	[JsonIgnore]
	[SerializeField]
	public List<ItemReferenceList> stimulusItems; // 0x98
	[JsonIgnore]
	[SerializeField]
	public RemoteSprite remoteSprite; // 0x9C
	[SerializeField]
	public int startEpisode; // 0xA0
	[JsonProperty("difficultyPoints")]
	[SerializeField]
	public float difficultyPoints; // 0xA4
	[JsonProperty("flashSalesPriceGems")]
	[SerializeField]
	public int flashSalesPriceGems; // 0xA8
	[JsonProperty("flashSalesPriceCoins")]
	[SerializeField]
	public int flashSalesPriceCoins; // 0xAC
	[SerializeField]
	public FieldGroup fieldGroup; // 0xB0
	[SerializeField]
	public bool canShowAsSourceContainer; // 0xBC
	[JsonIgnore]
	[SerializeField]
	public RemoteSprite chargedRemoteSprite; // 0xC0
	[SerializeField]
	public List<ItemPack> fillParameters; // 0xC4
	[SerializeField]
	public int numberOfFills; // 0xC8
	[JsonConverter(25)]
	[SerializeField]
	public DropType dropType; // 0xCC
	[JsonConverter(25)]
	[SerializeField]
	public BoosterType boosterType; // 0xD0
	[SerializeField]
	public int boosterTier; // 0xD4
	[SerializeField]
	public ItemPack dropsExp; // 0xD8
	[SerializeField]
	public ItemData.BubbleConfigData bubbleConfigData; // 0xDC
	[SerializeField]
	public ItemData.ItemSpeedUpCostData itemSpeedUpCostData; // 0xE0
	[JsonIgnore]
	private Nullable<int> calculatedCodeHash; // 0xE4

	// Properties
	[JsonIgnore]
	public int Order { get; }
	[JsonIgnore]
	public int ContainerRank { get; }
	[JsonIgnore]
	public bool isLowestTierContainer { get; }
	[Obsolete]
	[JsonIgnore]
	public ChainType OldChainType { get; }
	[JsonIgnore]
	public string ChainName { get; }
	[JsonIgnore]
	public int Hash { get; }
	[JsonIgnore]
	public string code { get; }
	[JsonIgnore]
	public ItemData activeData { get; }

	// Methods

	// RVA: 0x1109DE8 Offset: 0x1109DE8 VA: 0x1109DE8
	public int get_Order() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 10 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109DE8:  10402DE9     PUSH {r4, lr}
		   0x01109DEC:  0040A0E1     MOV r4, r0
		   0x01109DF0:  4C0090E5     LDR r0, [r0, 0x4c]
		   0x01109DF4:  0D0050E3     CMPS r0, r0, 0xd
		   0x01109DF8:  1000008A     BHI $+0x48  // if (> (unsigned)) goto 0x01109E40
		   // 
		   // ──── Block 1 else (<= (unsigned)) ────────────────────
		   0x01109DFC:  050050E3     CMPS r0, r0, 0x5
		   0x01109E00:  0C00000A     BEQ $+0x38  // if (==) goto 0x01109E38
		   // 
		   // ──── Block 2 else (!=) ────────────────────
		   0x01109E04:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x01109E08:  000050E3     CMPS r0, r0, 0x0
		   0x01109E0C:  0700000A     BEQ $+0x24  // if (==) goto 0x01109E30
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01109E10:  244094E5     LDR r4, [r4, 0x24]
		   0x01109E14:  000054E3     CMPS r0, r4, 0x0
		   0x01109E18:  0000001A     BNE $+0x8  // if (!=) goto 0x01109E20
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109E1C:  6B45F9EB     BL $-0x1aea4c
		   // ──── Block 5 if (!=) ────────────────────
		   0x01109E20:  184094E5     LDR r4, [r4, 0x18]
		   0x01109E24:  000054E3     CMPS r0, r4, 0x0
		   0x01109E28:  0000001A     BNE $+0x8  // if (!=) goto 0x01109E30
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01109E2C:  6745F9EB     BL $-0x1aea5c
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01109E30:  180094E5     LDR r0, [r4, 0x18]
		   0x01109E34:  1080BDE8     POP {r4, pc}
		   // ──── Block 8 if (==) ────────────────────
		   0x01109E38:  284094E5     LDR r4, [r4, 0x28]
		   0x01109E3C:  F4FFFFEA     B $-0x28
		   // ──── Block 9 if (> (unsigned)) ────────────────────
		   0x01109E40:  30009FE5     LDR r0, [pc, 0x30]
		   0x01109E44:  00009FE7     LDR r0, [pc, r0]
		   0x01109E48:  C844F9EB     BL $-0x1aecd8
		   0x01109E4C:  5C45F9EB     BL $-0x1aea88
		   0x01109E50:  0010A0E3     MOV r1, 0x0
		   0x01109E54:  0040A0E1     MOV r4, r0
		   0x01109E58:  CA957AEB     BL $+0x1ea5730  // CALL → ArgumentOutOfRangeException..ctor
		   0x01109E5C:  18009FE5     LDR r0, [pc, 0x18]
		   0x01109E60:  00009FE7     LDR r0, [pc, r0]
		   0x01109E64:  C144F9EB     BL $-0x1aecf4
		   0x01109E68:  0010A0E1     MOV r1, r0
		   0x01109E6C:  0400A0E1     MOV r0, r4
		   0x01109E70:  0245F9EB     BL $-0x1aebf0
		   0x01109E74:  A344F9EB     BL $-0x1aed6c
		   0x01109E78:  70D1F602     RSCSEQ sp, r6, 0x1c
		   0x01109E7C:  A8FAF602     RSCSEQ pc, r6, 0xa8000
		*/
	}

	// RVA: 0x1114D80 Offset: 0x1114D80 VA: 0x1114D80
	public int get_ContainerRank() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114D80:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01114D84:  085090E5     LDR r5, [r0, 0x8]
		   0x01114D88:  0040A0E1     MOV r4, r0
		   0x01114D8C:  000055E3     CMPS r0, r5, 0x0
		   0x01114D90:  0000001A     BNE $+0x8  // if (!=) goto 0x01114D98
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114D94:  8D19F9EB     BL $-0x1b99c4
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114D98:  0500A0E1     MOV r0, r5
		   0x01114D9C:  0410A0E1     MOV r1, r4
		   0x01114DA0:  0020A0E3     MOV r2, 0x0
		   0x01114DA4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01114DA8:  B3E2FEEA     B $-0x4752c
		*/
	}

	// RVA: 0x1114DAC Offset: 0x1114DAC VA: 0x1114DAC
	public bool get_isLowestTierContainer() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114DAC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01114DB0:  085090E5     LDR r5, [r0, 0x8]
		   0x01114DB4:  0040A0E1     MOV r4, r0
		   0x01114DB8:  000055E3     CMPS r0, r5, 0x0
		   0x01114DBC:  0000001A     BNE $+0x8  // if (!=) goto 0x01114DC4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114DC0:  8219F9EB     BL $-0x1b99f0
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114DC4:  0500A0E1     MOV r0, r5
		   0x01114DC8:  0410A0E1     MOV r1, r4
		   0x01114DCC:  0020A0E3     MOV r2, 0x0
		   0x01114DD0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01114DD4:  85E3FEEA     B $-0x471e4
		*/
	}

	// RVA: 0x1114DD8 Offset: 0x1114DD8 VA: 0x1114DD8
	public ChainType get_OldChainType() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114DD8:  10402DE9     PUSH {r4, lr}
		   0x01114DDC:  084090E5     LDR r4, [r0, 0x8]
		   0x01114DE0:  000054E3     CMPS r0, r4, 0x0
		   0x01114DE4:  0000001A     BNE $+0x8  // if (!=) goto 0x01114DEC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114DE8:  7819F9EB     BL $-0x1b9a18
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114DEC:  140094E5     LDR r0, [r4, 0x14]
		   0x01114DF0:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1114DF4 Offset: 0x1114DF4 VA: 0x1114DF4
	public string get_ChainName() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114DF4:  10402DE9     PUSH {r4, lr}
		   0x01114DF8:  084090E5     LDR r4, [r0, 0x8]
		   0x01114DFC:  000054E3     CMPS r0, r4, 0x0
		   0x01114E00:  0000001A     BNE $+0x8  // if (!=) goto 0x01114E08
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114E04:  7119F9EB     BL $-0x1b9a34
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114E08:  180094E5     LDR r0, [r4, 0x18]
		   0x01114E0C:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1114E10 Offset: 0x1114E10 VA: 0x1114E10
	public int get_Hash() {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114E10:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01114E14:  B4509FE5     LDR r5, [pc, 0xb4]
		   0x01114E18:  0040A0E1     MOV r4, r0
		   0x01114E1C:  05508FE0     ADD r5, pc, r5
		   0x01114E20:  0000D5E5     LDRB r0, [r5]
		   0x01114E24:  000050E3     CMPS r0, r0, 0x0
		   0x01114E28:  0400001A     BNE $+0x18  // if (!=) goto 0x01114E40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114E2C:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01114E30:  00009FE7     LDR r0, [pc, r0]
		   0x01114E34:  C918F9EB     BL $-0x1b9cd4
		   0x01114E38:  0100A0E3     MOV r0, 0x1
		   0x01114E3C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114E40:  90509FE5     LDR r5, [pc, 0x90]
		   0x01114E44:  05509FE7     LDR r5, [pc, r5]
		   0x01114E48:  000095E5     LDR r0, [r5]
		   0x01114E4C:  741090E5     LDR r1, [r0, 0x74]
		   0x01114E50:  000051E3     CMPS r0, r1, 0x0
		   0x01114E54:  0000001A     BNE $+0x8  // if (!=) goto 0x01114E5C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01114E58:  0D19F9EB     BL $-0x1b9bc4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01114E5C:  78609FE5     LDR r6, [pc, 0x78]
		   0x01114E60:  06608FE0     ADD r6, pc, r6
		   0x01114E64:  0000D6E5     LDRB r0, [r6]
		   0x01114E68:  000050E3     CMPS r0, r0, 0x0
		   0x01114E6C:  0400001A     BNE $+0x18  // if (!=) goto 0x01114E84
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01114E70:  68009FE5     LDR r0, [pc, 0x68]
		   0x01114E74:  00009FE7     LDR r0, [pc, r0]
		   0x01114E78:  B818F9EB     BL $-0x1b9d18
		   0x01114E7C:  0100A0E3     MOV r0, 0x1
		   0x01114E80:  0000C6E5     STRB r0, [r6]
		   // ──── Block 6 if (!=) ────────────────────
		   0x01114E84:  000095E5     LDR r0, [r5]
		   0x01114E88:  741090E5     LDR r1, [r0, 0x74]
		   0x01114E8C:  000051E3     CMPS r0, r1, 0x0
		   0x01114E90:  0100001A     BNE $+0xc  // if (!=) goto 0x01114E9C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01114E94:  FE18F9EB     BL $-0x1b9c00
		   0x01114E98:  000095E5     LDR r0, [r5]
		   // ──── Block 8 if (!=) ────────────────────
		   0x01114E9C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01114EA0:  144094E5     LDR r4, [r4, 0x14]
		   0x01114EA4:  085090E5     LDR r5, [r0, 0x8]
		   0x01114EA8:  000055E3     CMPS r0, r5, 0x0
		   0x01114EAC:  0000001A     BNE $+0x8  // if (!=) goto 0x01114EB4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01114EB0:  4619F9EB     BL $-0x1b9ae0
		   // ──── Block 10 if (!=) ────────────────────
		   0x01114EB4:  000095E5     LDR r0, [r5]
		   0x01114EB8:  0410A0E1     MOV r1, r4
		   0x01114EBC:  203190E5     LDR r3, [r0, 0x120]
		   0x01114EC0:  242190E5     LDR r2, [r0, 0x124]
		   0x01114EC4:  0500A0E1     MOV r0, r5
		   0x01114EC8:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01114ECC:  13FF2FE1     BX r3
		   0x01114ED0:  16701103     TSTSEQ r7, r1, 0x16
		   0x01114ED4:  C84BF602     RSCSEQ r4, r6, 0x32000
		   0x01114ED8:  B44BF602     RSCSEQ r4, r6, 0x2d000
		   0x01114EDC:  1E701103     TSTSEQ r7, r1, 0x1e
		   0x01114EE0:  844BF602     RSCSEQ r4, r6, 0x21000
		*/
	}

	// RVA: 0x1114EE4 Offset: 0x1114EE4 VA: 0x1114EE4
	public bool CompareCodeWithHash(int hash, string confirmation) {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114EE4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01114EE8:  08D04DE2     SUB sp, sp, 0x8
		   0x01114EEC:  EC409FE5     LDR r4, [pc, 0xec]
		   0x01114EF0:  0050A0E1     MOV r5, r0
		   0x01114EF4:  0280A0E1     MOV r8, r2
		   0x01114EF8:  0160A0E1     MOV r6, r1
		   0x01114EFC:  04408FE0     ADD r4, pc, r4
		   0x01114F00:  0000D4E5     LDRB r0, [r4]
		   0x01114F04:  000050E3     CMPS r0, r0, 0x0
		   0x01114F08:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01114F44
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114F0C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01114F10:  00009FE7     LDR r0, [pc, r0]
		   0x01114F14:  9118F9EB     BL $-0x1b9db4
		   0x01114F18:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01114F1C:  00009FE7     LDR r0, [pc, r0]
		   0x01114F20:  8E18F9EB     BL $-0x1b9dc0
		   0x01114F24:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01114F28:  00009FE7     LDR r0, [pc, r0]
		   0x01114F2C:  8B18F9EB     BL $-0x1b9dcc
		   0x01114F30:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01114F34:  00009FE7     LDR r0, [pc, r0]
		   0x01114F38:  8818F9EB     BL $-0x1b9dd8
		   0x01114F3C:  0100A0E3     MOV r0, 0x1
		   0x01114F40:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114F44:  0570A0E1     MOV r7, r5
		   0x01114F48:  E400F7E5     LDRB r0, [r7, 0xe4]!
		   0x01114F4C:  000050E3     CMPS r0, r0, 0x0
		   0x01114F50:  1300001A     BNE $+0x54  // if (!=) goto 0x01114FA4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01114F54:  144095E5     LDR r4, [r5, 0x14]
		   0x01114F58:  000054E3     CMPS r0, r4, 0x0
		   0x01114F5C:  0000001A     BNE $+0x8  // if (!=) goto 0x01114F64
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01114F60:  1A19F9EB     BL $-0x1b9b90
		   // ──── Block 5 if (!=) ────────────────────
		   0x01114F64:  000094E5     LDR r0, [r4]
		   0x01114F68:  D02DC0E1     LDRD r2, r3, [r0, 0xd0]
		   0x01114F6C:  0400A0E1     MOV r0, r4
		   0x01114F70:  0310A0E1     MOV r1, r3
		   0x01114F74:  32FF2FE1     BLX r2
		   0x01114F78:  0010A0E1     MOV r1, r0
		   0x01114F7C:  70009FE5     LDR r0, [pc, 0x70]
		   0x01114F80:  00009FE7     LDR r0, [pc, r0]
		   0x01114F84:  002090E5     LDR r2, [r0]
		   0x01114F88:  0000A0E3     MOV r0, 0x0
		   0x01114F8C:  04008DE5     STR r0, [sp, 0x4]
		   0x01114F90:  00008DE5     STR r0, [sp]
		   0x01114F94:  0D00A0E1     MOV r0, sp
		   0x01114F98:  FE8430EB     BL $+0xc21400  // CALL → Nullable<int>..ctor
		   0x01114F9C:  03009DE8     LDM sp, {r0, r1}
		   0x01114FA0:  F000C7E1     STRD r0, r1, [r7]
		   // ──── Block 6 if (!=) ────────────────────
		   0x01114FA4:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x01114FA8:  00009FE7     LDR r0, [pc, r0]
		   0x01114FAC:  001090E5     LDR r1, [r0]
		   0x01114FB0:  0700A0E1     MOV r0, r7
		   0x01114FB4:  FD8430EB     BL $+0xc213fc  // CALL → Nullable<int>.get_Value
		   0x01114FB8:  0010A0E1     MOV r1, r0
		   0x01114FBC:  0000A0E3     MOV r0, 0x0
		   0x01114FC0:  060051E1     CMPS r0, r1, r6
		   0x01114FC4:  0300001A     BNE $+0x14  // if (!=) goto 0x01114FD8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01114FC8:  140095E5     LDR r0, [r5, 0x14]
		   0x01114FCC:  0810A0E1     MOV r1, r8
		   0x01114FD0:  0020A0E3     MOV r2, 0x0
		   0x01114FD4:  8DC675EB     BL $+0x1d71a3c  // CALL → String.op_Equality
		   // ──── Block 8 if (!=) ────────────────────
		   0x01114FD8:  08D08DE2     ADD sp, sp, 0x8
		   0x01114FDC:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01114FE0:  376F1103     TSTSEQ r6, r1, 0xdc
		   0x01114FE4:  EC1CF602     RSCSEQ r1, r6, 0xec00
		   0x01114FE8:  5016F602     RSCSEQ r1, r6, 0x5000000
		   0x01114FEC:  AC16F602     RSCSEQ r1, r6, 0xac00000
		   0x01114FF0:  2433F602     RSCSEQ r3, r6, 0x90000000
		   0x01114FF4:  EC15F602     RSCSEQ r1, r6, 0x3b000000
		   0x01114FF8:  B032F602     RSCSEQ r3, r6, 0xb
		*/
	}

	// RVA: 0x1114FFC Offset: 0x1114FFC VA: 0x1114FFC
	public void SetChain(ChainObject chain) {
		/* Disassembly (ARM32, 51 instructions, 0xCC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114FFC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01115000:  A4609FE5     LDR r6, [pc, 0xa4]
		   0x01115004:  0040A0E1     MOV r4, r0
		   0x01115008:  0150A0E1     MOV r5, r1
		   0x0111500C:  06608FE0     ADD r6, pc, r6
		   0x01115010:  0000D6E5     LDRB r0, [r6]
		   0x01115014:  000050E3     CMPS r0, r0, 0x0
		   0x01115018:  0A00001A     BNE $+0x30  // if (!=) goto 0x01115048
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111501C:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x01115020:  00009FE7     LDR r0, [pc, r0]
		   0x01115024:  4D18F9EB     BL $-0x1b9ec4
		   0x01115028:  84009FE5     LDR r0, [pc, 0x84]
		   0x0111502C:  00009FE7     LDR r0, [pc, r0]
		   0x01115030:  4A18F9EB     BL $-0x1b9ed0
		   0x01115034:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x01115038:  00009FE7     LDR r0, [pc, r0]
		   0x0111503C:  4718F9EB     BL $-0x1b9edc
		   0x01115040:  0100A0E3     MOV r0, 0x1
		   0x01115044:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115048:  000055E3     CMPS r0, r5, 0x0
		   0x0111504C:  085084E5     STR r5, [r4, 0x8]
		   0x01115050:  0000001A     BNE $+0x8  // if (!=) goto 0x01115058
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01115054:  DD18F9EB     BL $-0x1b9c84
		   // ──── Block 4 if (!=) ────────────────────
		   0x01115058:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x0111505C:  00009FE7     LDR r0, [pc, r0]
		   0x01115060:  285095E5     LDR r5, [r5, 0x28]
		   0x01115064:  000090E5     LDR r0, [r0]
		   0x01115068:  D518F9EB     BL $-0x1b9ca4
		   0x0111506C:  0060A0E1     MOV r6, r0
		   0x01115070:  48009FE5     LDR r0, [pc, 0x48]
		   0x01115074:  0410A0E1     MOV r1, r4
		   0x01115078:  0030A0E3     MOV r3, 0x0
		   0x0111507C:  00009FE7     LDR r0, [pc, r0]
		   0x01115080:  002090E5     LDR r2, [r0]
		   0x01115084:  0600A0E1     MOV r0, r6
		   0x01115088:  7EE332EB     BL $+0xcb8e00  // CALL → Predicate<object>..ctor
		   0x0111508C:  30009FE5     LDR r0, [pc, 0x30]
		   0x01115090:  0610A0E1     MOV r1, r6
		   0x01115094:  00009FE7     LDR r0, [pc, r0]
		   0x01115098:  002090E5     LDR r2, [r0]
		   0x0111509C:  0500A0E1     MOV r0, r5
		   0x011150A0:  9A5928EB     BL $+0xa16670  // CALL → Array.FindIndex<object>
		   0x011150A4:  180084E5     STR r0, [r4, 0x18]
		   0x011150A8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x011150AC:  286E1103     TSTSEQ r6, r1, 0x280
		   0x011150B0:  7C3DF602     RSCSEQ r3, r6, 0x1f00
		   0x011150B4:  D049F602     RSCSEQ r4, r6, 0x340000
		   0x011150B8:  683DF602     RSCSEQ r3, r6, 0x1a00
		   0x011150BC:  443DF602     RSCSEQ r3, r6, 0x1100
		   0x011150C0:  8049F602     RSCSEQ r4, r6, 0x200000
		   0x011150C4:  083DF602     RSCSEQ r3, r6, 0x200
		*/
	}

	// RVA: 0x11150C8 Offset: 0x11150C8 VA: 0x11150C8
	public string get_code() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011150C8:  140090E5     LDR r0, [r0, 0x14]
		   0x011150CC:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110990C Offset: 0x110990C VA: 0x110990C
	public ItemData get_activeData() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110990C:  1C10D0E5     LDRB r1, [r0, 0x1c]
		   0x01109910:  000051E3     CMPS r0, r1, 0x0
		   0x01109914:  1EFF2F01     BXEQ lr
		   0x01109918:  EC2D00EA     B $+0xb7b8  // TAIL CALL → ItemData.GetLockedData
		*/
	}

	// RVA: 0x11151B8 Offset: 0x11151B8 VA: 0x11151B8
	public void SetLockedData(ItemData data) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011151B8:  201080E5     STR r1, [r0, 0x20]
		   0x011151BC:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11151C0 Offset: 0x11151C0 VA: 0x11151C0
	public void SetLockedObject(ItemObject newObject) {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011151C0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011151C4:  0150A0E1     MOV r5, r1
		   0x011151C8:  0040A0E1     MOV r4, r0
		   0x011151CC:  000051E3     CMPS r0, r1, 0x0
		   0x011151D0:  241080E5     STR r1, [r0, 0x24]
		   0x011151D4:  0000001A     BNE $+0x8  // if (!=) goto 0x011151DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011151D8:  7C18F9EB     BL $-0x1b9e08
		   // ──── Block 2 if (!=) ────────────────────
		   0x011151DC:  180095E5     LDR r0, [r5, 0x18]
		   0x011151E0:  200084E5     STR r0, [r4, 0x20]
		   0x011151E4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x11150D0 Offset: 0x11150D0 VA: 0x11150D0
	public ItemData GetLockedData() {
		/* Disassembly (ARM32, 51 instructions, 0xCC bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011150D0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011150D4:  C0509FE5     LDR r5, [pc, 0xc0]
		   0x011150D8:  0040A0E1     MOV r4, r0
		   0x011150DC:  05508FE0     ADD r5, pc, r5
		   0x011150E0:  0000D5E5     LDRB r0, [r5]
		   0x011150E4:  000050E3     CMPS r0, r0, 0x0
		   0x011150E8:  0A00001A     BNE $+0x30  // if (!=) goto 0x01115118
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011150EC:  AC009FE5     LDR r0, [pc, 0xac]
		   0x011150F0:  00009FE7     LDR r0, [pc, r0]
		   0x011150F4:  1918F9EB     BL $-0x1b9f94
		   0x011150F8:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x011150FC:  00009FE7     LDR r0, [pc, r0]
		   0x01115100:  1618F9EB     BL $-0x1b9fa0
		   0x01115104:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x01115108:  00009FE7     LDR r0, [pc, r0]
		   0x0111510C:  1318F9EB     BL $-0x1b9fac
		   0x01115110:  0100A0E3     MOV r0, 0x1
		   0x01115114:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115118:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x0111511C:  000050E3     CMPS r0, r0, 0x0
		   0x01115120:  1400001A     BNE $+0x58  // if (!=) goto 0x01115178
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01115124:  80009FE5     LDR r0, [pc, 0x80]
		   0x01115128:  00009FE7     LDR r0, [pc, r0]
		   0x0111512C:  000090E5     LDR r0, [r0]
		   0x01115130:  A318F9EB     BL $-0x1b9d6c
		   0x01115134:  0050A0E1     MOV r5, r0
		   0x01115138:  70009FE5     LDR r0, [pc, 0x70]
		   0x0111513C:  0020A0E3     MOV r2, 0x0
		   0x01115140:  00009FE7     LDR r0, [pc, r0]
		   0x01115144:  001090E5     LDR r1, [r0]
		   0x01115148:  0500A0E1     MOV r0, r5
		   0x0111514C:  4C2410EB     BL $+0x409138  // CALL → InfoException..ctor
		   0x01115150:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01115154:  00009FE7     LDR r0, [pc, r0]
		   0x01115158:  000090E5     LDR r0, [r0]
		   0x0111515C:  741090E5     LDR r1, [r0, 0x74]
		   0x01115160:  000051E3     CMPS r0, r1, 0x0
		   0x01115164:  0000001A     BNE $+0x8  // if (!=) goto 0x0111516C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01115168:  4918F9EB     BL $-0x1b9ed4
		   // ──── Block 5 if (!=) ────────────────────
		   0x0111516C:  0500A0E1     MOV r0, r5
		   0x01115170:  0010A0E3     MOV r1, 0x0
		   0x01115174:  048C3BEB     BL $+0xee3018  // CALL → sub_1FF818C
		   // ──── Block 6 if (!=) ────────────────────
		   0x01115178:  200094E5     LDR r0, [r4, 0x20]
		   0x0111517C:  000050E3     CMPS r0, r0, 0x0
		   0x01115180:  3088BD18     POPNE {r4, r5, fp, pc}
		   0x01115184:  244094E5     LDR r4, [r4, 0x24]
		   0x01115188:  000054E3     CMPS r0, r4, 0x0
		   0x0111518C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115194
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01115190:  8E18F9EB     BL $-0x1b9dc0
		   // ──── Block 9 if (!=) ────────────────────
		   0x01115194:  180094E5     LDR r0, [r4, 0x18]
		   0x01115198:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x11151E8 Offset: 0x11151E8 VA: 0x11151E8
	public ItemObject GetLockedObject() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011151E8:  240090E5     LDR r0, [r0, 0x24]
		   0x011151EC:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11151F0 Offset: 0x11151F0 VA: 0x11151F0
	public ItemObject GetBoxedItem() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011151F0:  280090E5     LDR r0, [r0, 0x28]
		   0x011151F4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110A7F8 Offset: 0x110A7F8 VA: 0x110A7F8
	public void GetSprite(Action<Sprite> complete) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110A7F8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110A7FC:  88609FE5     LDR r6, [pc, 0x88]
		   0x0110A800:  0050A0E1     MOV r5, r0
		   0x0110A804:  0140A0E1     MOV r4, r1
		   0x0110A808:  06608FE0     ADD r6, pc, r6
		   0x0110A80C:  0000D6E5     LDRB r0, [r6]
		   0x0110A810:  000050E3     CMPS r0, r0, 0x0
		   0x0110A814:  0400001A     BNE $+0x18  // if (!=) goto 0x0110A82C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110A818:  70009FE5     LDR r0, [pc, 0x70]
		   0x0110A81C:  00009FE7     LDR r0, [pc, r0]
		   0x0110A820:  4E42F9EB     BL $-0x1af6c0
		   0x0110A824:  0100A0E3     MOV r0, 0x1
		   0x0110A828:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110A82C:  60009FE5     LDR r0, [pc, 0x60]
		   0x0110A830:  00009FE7     LDR r0, [pc, r0]
		   0x0110A834:  9C6095E5     LDR r6, [r5, 0x9c]
		   0x0110A838:  000090E5     LDR r0, [r0]
		   0x0110A83C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A840:  000051E3     CMPS r0, r1, 0x0
		   0x0110A844:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A84C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110A848:  9142F9EB     BL $-0x1af5b4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110A84C:  0600A0E1     MOV r0, r6
		   0x0110A850:  0010A0E3     MOV r1, 0x0
		   0x0110A854:  0020A0E3     MOV r2, 0x0
		   0x0110A858:  C568FCEB     BL $-0xe5ce4
		   0x0110A85C:  000050E3     CMPS r0, r0, 0x0
		   0x0110A860:  0400000A     BEQ $+0x18  // if (==) goto 0x0110A878
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110A864:  9C1095E5     LDR r1, [r5, 0x9c]
		   0x0110A868:  0500A0E1     MOV r0, r5
		   0x0110A86C:  0420A0E1     MOV r2, r4
		   0x0110A870:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110A874:  5F2A00EA     B $+0xa984  // TAIL CALL → ItemData.GetSpriteAsset
		   // ──── Block 6 if (==) ────────────────────
		   0x0110A878:  2C0095E5     LDR r0, [r5, 0x2c]
		   0x0110A87C:  0410A0E1     MOV r1, r4
		   0x0110A880:  0020A0E3     MOV r2, 0x0
		   0x0110A884:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110A888:  89D70DEA     B $+0x375e2c  // TAIL CALL → AssetDeliveryManager.LoadRemoteSprite
		   0x0110A88C:  2E161203     TSTSEQ r1, r2, 0x2e00000
		   0x0110A890:  1CBDF602     RSCSEQ fp, r6, 0x700
		   0x0110A894:  08BDF602     RSCSEQ fp, r6, 0x200
		*/
	}

	// RVA: 0x1115504 Offset: 0x1115504 VA: 0x1115504
	public void GetChargedSprite(Action<Sprite> complete) {
		/* Disassembly (ARM32, 59 instructions, 0xEC bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115504:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01115508:  D4609FE5     LDR r6, [pc, 0xd4]
		   0x0111550C:  0050A0E1     MOV r5, r0
		   0x01115510:  0140A0E1     MOV r4, r1
		   0x01115514:  06608FE0     ADD r6, pc, r6
		   0x01115518:  0000D6E5     LDRB r0, [r6]
		   0x0111551C:  000050E3     CMPS r0, r0, 0x0
		   0x01115520:  0400001A     BNE $+0x18  // if (!=) goto 0x01115538
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01115524:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01115528:  00009FE7     LDR r0, [pc, r0]
		   0x0111552C:  0B17F9EB     BL $-0x1ba3cc
		   0x01115530:  0100A0E3     MOV r0, 0x1
		   0x01115534:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115538:  AC709FE5     LDR r7, [pc, 0xac]
		   0x0111553C:  07709FE7     LDR r7, [pc, r7]
		   0x01115540:  9C6095E5     LDR r6, [r5, 0x9c]
		   0x01115544:  000097E5     LDR r0, [r7]
		   0x01115548:  741090E5     LDR r1, [r0, 0x74]
		   0x0111554C:  000051E3     CMPS r0, r1, 0x0
		   0x01115550:  0000001A     BNE $+0x8  // if (!=) goto 0x01115558
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01115554:  4E17F9EB     BL $-0x1ba2c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x01115558:  0600A0E1     MOV r0, r6
		   0x0111555C:  0010A0E3     MOV r1, 0x0
		   0x01115560:  0020A0E3     MOV r2, 0x0
		   0x01115564:  823DFCEB     BL $-0xf09f0
		   0x01115568:  000050E3     CMPS r0, r0, 0x0
		   0x0111556C:  1100000A     BEQ $+0x4c  // if (==) goto 0x011155B8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01115570:  000097E5     LDR r0, [r7]
		   0x01115574:  C06095E5     LDR r6, [r5, 0xc0]
		   0x01115578:  741090E5     LDR r1, [r0, 0x74]
		   0x0111557C:  000051E3     CMPS r0, r1, 0x0
		   0x01115580:  0000001A     BNE $+0x8  // if (!=) goto 0x01115588
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01115584:  4217F9EB     BL $-0x1ba2f0
		   // ──── Block 7 if (!=) ────────────────────
		   0x01115588:  0600A0E1     MOV r0, r6
		   0x0111558C:  0010A0E3     MOV r1, 0x0
		   0x01115590:  0020A0E3     MOV r2, 0x0
		   0x01115594:  408A3BEB     BL $+0xee2908  // CALL → sub_1FF7E9C
		   0x01115598:  000050E3     CMPS r0, r0, 0x0
		   0x0111559C:  C010A0E3     MOV r1, 0xc0
		   0x011155A0:  9C100013     MOVNE r1, 0x9c
		   0x011155A4:  0500A0E1     MOV r0, r5
		   0x011155A8:  011095E7     LDR r1, [r5, r1]  // this.remoteSprite
		   0x011155AC:  0420A0E1     MOV r2, r4
		   0x011155B0:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x011155B4:  0FFFFFEA     B $-0x3bc
		   // ──── Block 8 if (==) ────────────────────
		   0x011155B8:  300095E5     LDR r0, [r5, 0x30]
		   0x011155BC:  0010A0E3     MOV r1, 0x0
		   0x011155C0:  8C0B76EB     BL $+0x1d82e38  // CALL → String.IsNullOrEmpty
		   0x011155C4:  3010A0E3     MOV r1, 0x30
		   0x011155C8:  000050E3     CMPS r0, r0, 0x0
		   0x011155CC:  2C100013     MOVNE r1, 0x2c
		   0x011155D0:  0020A0E3     MOV r2, 0x0
		   0x011155D4:  010095E7     LDR r0, [r5, r1]  // this.mainSpriteName
		   0x011155D8:  0410A0E1     MOV r1, r4
		   0x011155DC:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x011155E0:  33AC0DEA     B $+0x36b0d4  // TAIL CALL → AssetDeliveryManager.LoadRemoteSprite
		   0x011155E4:  23691103     TSTSEQ r6, r1, 0x8c000
		   0x011155E8:  1010F602     RSCSEQ r1, r6, 0x10
		   0x011155EC:  FC0FF602     RSCSEQ r0, r6, 0x3f0
		*/
	}

	// RVA: 0x11155F0 Offset: 0x11155F0 VA: 0x11155F0
	public ItemData Clone() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011155F0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x011155F4:  84519FE5     LDR r5, [pc, 0x184]
		   0x011155F8:  0040A0E1     MOV r4, r0
		   0x011155FC:  05508FE0     ADD r5, pc, r5
		   0x01115600:  0000D5E5     LDRB r0, [r5]
		   0x01115604:  000050E3     CMPS r0, r0, 0x0
		   0x01115608:  0400001A     BNE $+0x18  // if (!=) goto 0x01115620
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111560C:  70019FE5     LDR r0, [pc, 0x170]
		   0x01115610:  00009FE7     LDR r0, [pc, r0]
		   0x01115614:  D116F9EB     BL $-0x1ba4b4
		   0x01115618:  0100A0E3     MOV r0, 0x1
		   0x0111561C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115620:  60019FE5     LDR r0, [pc, 0x160]
		   0x01115624:  2C8084E2     ADD r8, r4, 0x2c
		   0x01115628:  00009FE7     LDR r0, [pc, r0]
		   0x0111562C:  000090E5     LDR r0, [r0]
		   0x01115630:  6317F9EB     BL $-0x1ba26c
		   0x01115634:  0050A0E1     MOV r5, r0
		   0x01115638:  530000EB     BL $+0x154  // CALL → ItemData..ctor
		   0x0111563C:  086094E5     LDR r6, [r4, 0x8]
		   0x01115640:  2C9085E2     ADD sb, r5, 0x2c
		   0x01115644:  000055E3     CMPS r0, r5, 0x0
		   0x01115648:  0000001A     BNE $+0x8  // if (!=) goto 0x01115650
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111564C:  5F17F9EB     BL $-0x1ba27c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01115650:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01115654:  20C085E2     ADD ip, r5, 0x20
		   0x01115658:  202094E5     LDR r2, [r4, 0x20]
		   0x0111565C:  0C0085E5     STR r0, [r5, 0xc]
		   0x01115660:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x01115664:  101094E5     LDR r1, [r4, 0x10]
		   0x01115668:  1C70D4E5     LDRB r7, [r4, 0x1c]
		   0x0111566C:  086085E5     STR r6, [r5, 0x8]
		   0x01115670:  243094E5     LDR r3, [r4, 0x24]
		   0x01115674:  286094E5     LDR r6, [r4, 0x28]
		   0x01115678:  4C008CE8     STM ip, {r2, r3, r6}
		   0x0111567C:  4C2085E2     ADD r2, r5, 0x4c
		   0x01115680:  101085E5     STR r1, [r5, 0x10]
		   0x01115684:  1C70C5E5     STRB r7, [r5, 0x1c]
		   0x01115688:  501094E5     LDR r1, [r4, 0x50]
		   0x0111568C:  547094E5     LDR r7, [r4, 0x54]
		   0x01115690:  830082E8     STM r2, {r0, r1, r7}
		   0x01115694:  6420A0E3     MOV r2, 0x64
		   0x01115698:  580094E5     LDR r0, [r4, 0x58]
		   0x0111569C:  580085E5     STR r0, [r5, 0x58]
		   0x011156A0:  5C0094E5     LDR r0, [r4, 0x5c]
		   0x011156A4:  5C0085E5     STR r0, [r5, 0x5c]
		   0x011156A8:  380088E2     ADD r0, r8, 0x38
		   0x011156AC:  6010D4E5     LDRB r1, [r4, 0x60]
		*/
	}

	// RVA: 0x1112E00 Offset: 0x1112E00 VA: 0x1112E00
	public ItemData CloneAsLocked(ItemObject lockedObjectToUse) {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01112E00:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01112E04:  10D04DE2     SUB sp, sp, 0x10
		   0x01112E08:  1C519FE5     LDR r5, [pc, 0x11c]
		   0x01112E0C:  0040A0E1     MOV r4, r0
		   0x01112E10:  0180A0E1     MOV r8, r1
		   0x01112E14:  05508FE0     ADD r5, pc, r5
		   0x01112E18:  0000D5E5     LDRB r0, [r5]
		   0x01112E1C:  000050E3     CMPS r0, r0, 0x0
		   0x01112E20:  0400001A     BNE $+0x18  // if (!=) goto 0x01112E38
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01112E24:  04019FE5     LDR r0, [pc, 0x104]
		   0x01112E28:  00009FE7     LDR r0, [pc, r0]
		   0x01112E2C:  CB20F9EB     BL $-0x1b7ccc
		   0x01112E30:  0100A0E3     MOV r0, 0x1
		   0x01112E34:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01112E38:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01112E3C:  2C9084E2     ADD sb, r4, 0x2c
		   0x01112E40:  00009FE7     LDR r0, [pc, r0]
		   0x01112E44:  000090E5     LDR r0, [r0]
		   0x01112E48:  5D21F9EB     BL $-0x1b7a84
		   0x01112E4C:  0050A0E1     MOV r5, r0
		   0x01112E50:  4D0A00EB     BL $+0x293c  // CALL → ItemData..ctor
		*/
	}

	// RVA: 0x1112CF0 Offset: 0x1112CF0 VA: 0x1112CF0
	public ItemData CloneAsBoxed(ItemObject boxedItemToUse) {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01112CF0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01112CF4:  10D04DE2     SUB sp, sp, 0x10
		   0x01112CF8:  F4509FE5     LDR r5, [pc, 0xf4]
		   0x01112CFC:  0040A0E1     MOV r4, r0
		   0x01112D00:  0180A0E1     MOV r8, r1
		   0x01112D04:  05508FE0     ADD r5, pc, r5
		   0x01112D08:  0000D5E5     LDRB r0, [r5]
		   0x01112D0C:  000050E3     CMPS r0, r0, 0x0
		   0x01112D10:  0400001A     BNE $+0x18  // if (!=) goto 0x01112D28
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01112D14:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x01112D18:  00009FE7     LDR r0, [pc, r0]
		   0x01112D1C:  0F21F9EB     BL $-0x1b7bbc
		   0x01112D20:  0100A0E3     MOV r0, 0x1
		   0x01112D24:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01112D28:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01112D2C:  2C9084E2     ADD sb, r4, 0x2c
		   0x01112D30:  00009FE7     LDR r0, [pc, r0]
		   0x01112D34:  000090E5     LDR r0, [r0]
		   0x01112D38:  A121F9EB     BL $-0x1b7974
		   0x01112D3C:  0050A0E1     MOV r5, r0
		   0x01112D40:  910A00EB     BL $+0x2a4c  // CALL → ItemData..ctor
		*/
	}

	// RVA: 0x1115840 Offset: 0x1115840 VA: 0x1115840
	public bool CompareChainAndOrder(ItemData incomingItemData) {
		/* Disassembly (ARM32, 49 instructions, 0xC4 bytes):
		   // CFG: 15 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115840:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01115844:  0050A0E1     MOV r5, r0
		   0x01115848:  1C00D0E5     LDRB r0, [r0, 0x1c]
		   0x0111584C:  0140A0E1     MOV r4, r1
		   0x01115850:  000050E3     CMPS r0, r0, 0x0
		   0x01115854:  0200000A     BEQ $+0x10  // if (==) goto 0x01115864
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01115858:  0500A0E1     MOV r0, r5
		   0x0111585C:  1BFEFFEB     BL $-0x78c
		   0x01115860:  0050A0E1     MOV r5, r0
		   // ──── Block 2 if (==) ────────────────────
		   0x01115864:  000054E3     CMPS r0, r4, 0x0
		   0x01115868:  0000001A     BNE $+0x8  // if (!=) goto 0x01115870
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111586C:  D716F9EB     BL $-0x1ba49c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01115870:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x01115874:  000050E3     CMPS r0, r0, 0x0
		   0x01115878:  0200000A     BEQ $+0x10  // if (==) goto 0x01115888
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0111587C:  0400A0E1     MOV r0, r4
		   0x01115880:  12FEFFEB     BL $-0x7b0
		   0x01115884:  0040A0E1     MOV r4, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01115888:  000055E3     CMPS r0, r5, 0x0
		   0x0111588C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115894
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01115890:  CE16F9EB     BL $-0x1ba4c0
		   // ──── Block 8 if (!=) ────────────────────
		   0x01115894:  086095E5     LDR r6, [r5, 0x8]
		   0x01115898:  000056E3     CMPS r0, r6, 0x0
		   0x0111589C:  0000001A     BNE $+0x8  // if (!=) goto 0x011158A4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x011158A0:  CA16F9EB     BL $-0x1ba4d0
		   // ──── Block 10 if (!=) ────────────────────
		   0x011158A4:  0500A0E1     MOV r0, r5
		   0x011158A8:  186096E5     LDR r6, [r6, 0x18]
		   0x011158AC:  4DD1FFEB     BL $-0xbac4
		   0x011158B0:  0050A0E1     MOV r5, r0
		   0x011158B4:  000054E3     CMPS r0, r4, 0x0
		   0x011158B8:  0000001A     BNE $+0x8  // if (!=) goto 0x011158C0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x011158BC:  C316F9EB     BL $-0x1ba4ec
		   // ──── Block 12 if (!=) ────────────────────
		   0x011158C0:  087094E5     LDR r7, [r4, 0x8]
		   0x011158C4:  000057E3     CMPS r0, r7, 0x0
		   0x011158C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011158D0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x011158CC:  BF16F9EB     BL $-0x1ba4fc
		   // ──── Block 14 if (!=) ────────────────────
		   0x011158D0:  0400A0E1     MOV r0, r4
		   0x011158D4:  187097E5     LDR r7, [r7, 0x18]
		   0x011158D8:  42D1FFEB     BL $-0xbaf0
		   0x011158DC:  0040A0E1     MOV r4, r0
		   0x011158E0:  0700A0E1     MOV r0, r7
		   0x011158E4:  0610A0E1     MOV r1, r6
		   0x011158E8:  0020A0E3     MOV r2, 0x0
		   0x011158EC:  47C475EB     BL $+0x1d71124  // CALL → String.op_Equality
		   0x011158F0:  051044E0     SUB r1, r4, r5
		   0x011158F4:  111F6FE1     CLZ r1, r1
		   0x011158F8:  A112A0E1     MOV r1, r0, r1, lsr 5
		   0x011158FC:  010000E0     AND r0, r0, r1
		   0x01115900:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1115904 Offset: 0x1115904 VA: 0x1115904
	public int GetCostCoins() {
		/* Disassembly (ARM32, 86 instructions, 0x158 bytes):
		   // CFG: 10 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115904:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01115908:  20519FE5     LDR r5, [pc, 0x120]
		   0x0111590C:  0040A0E1     MOV r4, r0
		   0x01115910:  05508FE0     ADD r5, pc, r5
		   0x01115914:  0000D5E5     LDRB r0, [r5]
		   0x01115918:  000050E3     CMPS r0, r0, 0x0
		   0x0111591C:  1000001A     BNE $+0x48  // if (!=) goto 0x01115964
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01115920:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01115924:  00009FE7     LDR r0, [pc, r0]
		   0x01115928:  0C16F9EB     BL $-0x1ba7c8
		   0x0111592C:  04019FE5     LDR r0, [pc, 0x104]
		   0x01115930:  00009FE7     LDR r0, [pc, r0]
		   0x01115934:  0916F9EB     BL $-0x1ba7d4
		   0x01115938:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x0111593C:  00009FE7     LDR r0, [pc, r0]
		   0x01115940:  0616F9EB     BL $-0x1ba7e0
		   0x01115944:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01115948:  00009FE7     LDR r0, [pc, r0]
		   0x0111594C:  0316F9EB     BL $-0x1ba7ec
		   0x01115950:  EC009FE5     LDR r0, [pc, 0xec]
		   0x01115954:  00009FE7     LDR r0, [pc, r0]
		   0x01115958:  0016F9EB     BL $-0x1ba7f8
		   0x0111595C:  0100A0E3     MOV r0, 0x1
		   0x01115960:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115964:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x01115968:  00009FE7     LDR r0, [pc, r0]
		   0x0111596C:  000090E5     LDR r0, [r0]
		   0x01115970:  9316F9EB     BL $-0x1ba5ac
		   0x01115974:  0010A0E3     MOV r1, 0x0
		   0x01115978:  0050A0E1     MOV r5, r0
		   0x0111597C:  9AFE7DEB     BL $+0x1f7fa70  // CALL → Object..ctor
		   0x01115980:  C4709FE5     LDR r7, [pc, 0xc4]
		   0x01115984:  07709FE7     LDR r7, [pc, r7]
		   0x01115988:  000097E5     LDR r0, [r7]
		   0x0111598C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01115990:  040090E5     LDR r0, [r0, 0x4]
		   0x01115994:  000050E3     CMPS r0, r0, 0x0
		   0x01115998:  2100000A     BEQ $+0x8c  // if (==) goto 0x01115A24
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111599C:  0400A0E1     MOV r0, r4
		   0x011159A0:  2F0000EB     BL $+0xc4  // CALL → ItemData.GetIdKey
		   0x011159A4:  0060A0E1     MOV r6, r0
		   0x011159A8:  000055E3     CMPS r0, r5, 0x0
		   0x011159AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011159B4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011159B0:  8616F9EB     BL $-0x1ba5e0
		   // ──── Block 5 if (!=) ────────────────────
		   0x011159B4:  000097E5     LDR r0, [r7]
		   0x011159B8:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x011159BC:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x011159C0:  00009FE7     LDR r0, [pc, r0]
		   0x011159C4:  047091E5     LDR r7, [r1, 0x4]
		   0x011159C8:  086085E5     STR r6, [r5, 0x8]
		   0x011159CC:  000090E5     LDR r0, [r0]
		   0x011159D0:  7B16F9EB     BL $-0x1ba60c
		   0x011159D4:  0060A0E1     MOV r6, r0
		   0x011159D8:  74009FE5     LDR r0, [pc, 0x74]
		   0x011159DC:  0510A0E1     MOV r1, r5
		   0x011159E0:  0030A0E3     MOV r3, 0x0
		   0x011159E4:  00009FE7     LDR r0, [pc, r0]
		   0x011159E8:  002090E5     LDR r2, [r0]
		   0x011159EC:  0600A0E1     MOV r0, r6
		   0x011159F0:  24E132EB     BL $+0xcb8498  // CALL → Predicate<object>..ctor
		   0x011159F4:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x011159F8:  0610A0E1     MOV r1, r6
		   0x011159FC:  00009FE7     LDR r0, [pc, r0]
		   0x01115A00:  002090E5     LDR r2, [r0]
		   0x01115A04:  0700A0E1     MOV r0, r7
		   0x01115A08:  E35928EB     BL $+0xa16794  // CALL → Array.FindLast<object>
		   0x01115A0C:  000050E3     CMPS r0, r0, 0x0
		   0x01115A10:  0300000A     BEQ $+0x14  // if (==) goto 0x01115A24
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01115A14:  1010B0E5     LDR r1, [r0, 0x10]!
		   0x01115A18:  000051E3     CMPS r0, r1, 0x0
		   0x01115A1C:  80008442     ADDMI r0, r4, 0x80
		   0x01115A20:  000000EA     B $+0x8  // goto 0x01115A28
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01115A24:  800084E2     ADD r0, r4, 0x80
		   // ──── Block 8 ──────────────────────────────
		   0x01115A28:  000090E5     LDR r0, [r0]
		   0x01115A2C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01115A30:  2B651103     TSTSEQ r6, r1, 0xac00000
		   0x01115A34:  F440F602     RSCSEQ r4, r6, 0xf4
		   0x01115A38:  9837F602     RSCSEQ r3, r6, 0x2600000
		   0x01115A3C:  E040F602     RSCSEQ r4, r6, 0xe0
		   0x01115A40:  D840F602     RSCSEQ r4, r6, 0xd8
		   0x01115A44:  D040F602     RSCSEQ r4, r6, 0xd0
		   0x01115A48:  BC40F602     RSCSEQ r4, r6, 0xbc
		   0x01115A4C:  4437F602     RSCSEQ r3, r6, 0x1100000
		   0x01115A50:  5C40F602     RSCSEQ r4, r6, 0x5c
		   0x01115A54:  3C40F602     RSCSEQ r4, r6, 0x3c
		   0x01115A58:  1C40F602     RSCSEQ r4, r6, 0x1c
		*/
	}

	// RVA: 0x1115AE4 Offset: 0x1115AE4 VA: 0x1115AE4
	public int GetCostGems() {
		/* Disassembly (ARM32, 86 instructions, 0x158 bytes):
		   // CFG: 10 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115AE4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01115AE8:  20519FE5     LDR r5, [pc, 0x120]
		   0x01115AEC:  0040A0E1     MOV r4, r0
		   0x01115AF0:  05508FE0     ADD r5, pc, r5
		   0x01115AF4:  0000D5E5     LDRB r0, [r5]
		   0x01115AF8:  000050E3     CMPS r0, r0, 0x0
		   0x01115AFC:  1000001A     BNE $+0x48  // if (!=) goto 0x01115B44
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01115B00:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01115B04:  00009FE7     LDR r0, [pc, r0]
		   0x01115B08:  9415F9EB     BL $-0x1ba9a8
		   0x01115B0C:  04019FE5     LDR r0, [pc, 0x104]
		   0x01115B10:  00009FE7     LDR r0, [pc, r0]
		   0x01115B14:  9115F9EB     BL $-0x1ba9b4
		   0x01115B18:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x01115B1C:  00009FE7     LDR r0, [pc, r0]
		   0x01115B20:  8E15F9EB     BL $-0x1ba9c0
		   0x01115B24:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01115B28:  00009FE7     LDR r0, [pc, r0]
		   0x01115B2C:  8B15F9EB     BL $-0x1ba9cc
		   0x01115B30:  EC009FE5     LDR r0, [pc, 0xec]
		   0x01115B34:  00009FE7     LDR r0, [pc, r0]
		   0x01115B38:  8815F9EB     BL $-0x1ba9d8
		   0x01115B3C:  0100A0E3     MOV r0, 0x1
		   0x01115B40:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115B44:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x01115B48:  00009FE7     LDR r0, [pc, r0]
		   0x01115B4C:  000090E5     LDR r0, [r0]
		   0x01115B50:  1B16F9EB     BL $-0x1ba78c
		   0x01115B54:  0010A0E3     MOV r1, 0x0
		   0x01115B58:  0050A0E1     MOV r5, r0
		   0x01115B5C:  22FE7DEB     BL $+0x1f7f890  // CALL → Object..ctor
		   0x01115B60:  C4709FE5     LDR r7, [pc, 0xc4]
		   0x01115B64:  07709FE7     LDR r7, [pc, r7]
		   0x01115B68:  000097E5     LDR r0, [r7]
		   0x01115B6C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01115B70:  040090E5     LDR r0, [r0, 0x4]
		   0x01115B74:  000050E3     CMPS r0, r0, 0x0
		   0x01115B78:  2100000A     BEQ $+0x8c  // if (==) goto 0x01115C04
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01115B7C:  0400A0E1     MOV r0, r4
		   0x01115B80:  B7FFFFEB     BL $-0x11c
		   0x01115B84:  0060A0E1     MOV r6, r0
		   0x01115B88:  000055E3     CMPS r0, r5, 0x0
		   0x01115B8C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115B94
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01115B90:  0E16F9EB     BL $-0x1ba7c0
		   // ──── Block 5 if (!=) ────────────────────
		   0x01115B94:  000097E5     LDR r0, [r7]
		   0x01115B98:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01115B9C:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x01115BA0:  00009FE7     LDR r0, [pc, r0]
		   0x01115BA4:  047091E5     LDR r7, [r1, 0x4]
		   0x01115BA8:  086085E5     STR r6, [r5, 0x8]
		   0x01115BAC:  000090E5     LDR r0, [r0]
		   0x01115BB0:  0316F9EB     BL $-0x1ba7ec
		   0x01115BB4:  0060A0E1     MOV r6, r0
		   0x01115BB8:  74009FE5     LDR r0, [pc, 0x74]
		   0x01115BBC:  0510A0E1     MOV r1, r5
		   0x01115BC0:  0030A0E3     MOV r3, 0x0
		   0x01115BC4:  00009FE7     LDR r0, [pc, r0]
		   0x01115BC8:  002090E5     LDR r2, [r0]
		   0x01115BCC:  0600A0E1     MOV r0, r6
		   0x01115BD0:  ACE032EB     BL $+0xcb82b8  // CALL → Predicate<object>..ctor
		   0x01115BD4:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01115BD8:  0610A0E1     MOV r1, r6
		   0x01115BDC:  00009FE7     LDR r0, [pc, r0]
		   0x01115BE0:  002090E5     LDR r2, [r0]
		   0x01115BE4:  0700A0E1     MOV r0, r7
		   0x01115BE8:  6B5928EB     BL $+0xa165b4  // CALL → Array.FindLast<object>
		   0x01115BEC:  000050E3     CMPS r0, r0, 0x0
		   0x01115BF0:  0300000A     BEQ $+0x14  // if (==) goto 0x01115C04
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01115BF4:  0C10B0E5     LDR r1, [r0, 0xc]!
		   0x01115BF8:  000051E3     CMPS r0, r1, 0x0
		   0x01115BFC:  84008442     ADDMI r0, r4, 0x84
		   0x01115C00:  000000EA     B $+0x8  // goto 0x01115C08
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01115C04:  840084E2     ADD r0, r4, 0x84
		   // ──── Block 8 ──────────────────────────────
		   0x01115C08:  000090E5     LDR r0, [r0]
		   0x01115C0C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01115C10:  4C631103     TSTSEQ r6, r1, 0x30000001
		   0x01115C14:  143FF602     RSCSEQ r3, r6, 0x50
		   0x01115C18:  B835F602     RSCSEQ r3, r6, 0x2e000000
		   0x01115C1C:  003FF602     RSCSEQ r3, r6, 0x0
		   0x01115C20:  003FF602     RSCSEQ r3, r6, 0x0
		   0x01115C24:  F83EF602     RSCSEQ r3, r6, 0xf80
		   0x01115C28:  E43EF602     RSCSEQ r3, r6, 0xe40
		   0x01115C2C:  6435F602     RSCSEQ r3, r6, 0x19000000
		   0x01115C30:  7C3EF602     RSCSEQ r3, r6, 0x7c0
		   0x01115C34:  643EF602     RSCSEQ r3, r6, 0x640
		   0x01115C38:  3C3EF602     RSCSEQ r3, r6, 0x3c0
		*/
	}

	// RVA: 0x1115A64 Offset: 0x1115A64 VA: 0x1115A64
	public string GetIdKey() {
		/* Disassembly (ARM32, 32 instructions, 0x80 bytes):
		   // CFG: 6 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115A64:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01115A68:  08D04DE2     SUB sp, sp, 0x8
		   0x01115A6C:  0040A0E1     MOV r4, r0
		   0x01115A70:  1C00D0E5     LDRB r0, [r0, 0x1c]
		   0x01115A74:  0010A0E3     MOV r1, 0x0
		   0x01115A78:  000050E3     CMPS r0, r0, 0x0
		   0x01115A7C:  04108DE5     STR r1, [sp, 0x4]
		   0x01115A80:  0400000A     BEQ $+0x18  // if (==) goto 0x01115A98
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01115A84:  0400A0E1     MOV r0, r4
		   0x01115A88:  90FDFFEB     BL $-0x9b8
		   0x01115A8C:  0040A0E1     MOV r4, r0
		   0x01115A90:  000050E3     CMPS r0, r0, 0x0
		   0x01115A94:  1100000A     BEQ $+0x4c  // if (==) goto 0x01115AE0
		   // 
		   // ──── Block 2 (from 2 paths) ──────────────────
		   0x01115A98:  085094E5     LDR r5, [r4, 0x8]
		   0x01115A9C:  000055E3     CMPS r0, r5, 0x0
		   0x01115AA0:  0000001A     BNE $+0x8  // if (!=) goto 0x01115AA8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01115AA4:  4916F9EB     BL $-0x1ba6d4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01115AA8:  0400A0E1     MOV r0, r4
		   0x01115AAC:  185095E5     LDR r5, [r5, 0x18]
		   0x01115AB0:  CCD0FFEB     BL $-0xbcc8
		   0x01115AB4:  010080E2     ADD r0, r0, 0x1
		   0x01115AB8:  04008DE5     STR r0, [sp, 0x4]
		   0x01115ABC:  04008DE2     ADD r0, sp, 0x4
		   0x01115AC0:  0010A0E3     MOV r1, 0x0
		   0x01115AC4:  57BA7CEB     BL $+0x1f2e964  // CALL → Int32.ToString
		   0x01115AC8:  0010A0E1     MOV r1, r0
		   0x01115ACC:  0500A0E1     MOV r0, r5
		   0x01115AD0:  0020A0E3     MOV r2, 0x0
		   0x01115AD4:  19CF75EB     BL $+0x1d73c6c  // CALL → String.Concat
		   0x01115AD8:  08D08DE2     ADD sp, sp, 0x8
		   0x01115ADC:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 5 if (==) ────────────────────
		   0x01115AE0:  3A16F9EB     BL $-0x1ba710
		*/
	}

	// RVA: 0x1115C44 Offset: 0x1115C44 VA: 0x1115C44
	public static void Init() {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 7 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115C44:  10402DE9     PUSH {r4, lr}
		   0x01115C48:  C0409FE5     LDR r4, [pc, 0xc0]
		   0x01115C4C:  04408FE0     ADD r4, pc, r4
		   0x01115C50:  0000D4E5     LDRB r0, [r4]
		   0x01115C54:  000050E3     CMPS r0, r0, 0x0
		   0x01115C58:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01115C94
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01115C5C:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x01115C60:  00009FE7     LDR r0, [pc, r0]
		   0x01115C64:  3D15F9EB     BL $-0x1bab04
		   0x01115C68:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x01115C6C:  00009FE7     LDR r0, [pc, r0]
		   0x01115C70:  3A15F9EB     BL $-0x1bab10
		   0x01115C74:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01115C78:  00009FE7     LDR r0, [pc, r0]
		   0x01115C7C:  3715F9EB     BL $-0x1bab1c
		   0x01115C80:  98009FE5     LDR r0, [pc, 0x98]
		   0x01115C84:  00009FE7     LDR r0, [pc, r0]
		   0x01115C88:  3415F9EB     BL $-0x1bab28
		   0x01115C8C:  0100A0E3     MOV r0, 0x1
		   0x01115C90:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115C94:  88009FE5     LDR r0, [pc, 0x88]
		   0x01115C98:  00009FE7     LDR r0, [pc, r0]
		   0x01115C9C:  000090E5     LDR r0, [r0]
		   0x01115CA0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01115CA4:  040090E5     LDR r0, [r0, 0x4]
		   0x01115CA8:  000050E3     CMPS r0, r0, 0x0
		   0x01115CAC:  1080BD18     POPNE {r4, pc}
		   0x01115CB0:  70009FE5     LDR r0, [pc, 0x70]
		   0x01115CB4:  00009FE7     LDR r0, [pc, r0]
		   0x01115CB8:  000090E5     LDR r0, [r0]
		   0x01115CBC:  C015F9EB     BL $-0x1ba8f8
		   0x01115CC0:  0040A0E1     MOV r4, r0
		   0x01115CC4:  60009FE5     LDR r0, [pc, 0x60]
		   0x01115CC8:  0010A0E3     MOV r1, 0x0
		   0x01115CCC:  0030A0E3     MOV r3, 0x0
		   0x01115CD0:  00009FE7     LDR r0, [pc, r0]
		   0x01115CD4:  002090E5     LDR r2, [r0]
		   0x01115CD8:  0400A0E1     MOV r0, r4
		   0x01115CDC:  985D7AEB     BL $+0x1e97668  // CALL → Action..ctor
		   0x01115CE0:  48009FE5     LDR r0, [pc, 0x48]
		   0x01115CE4:  00009FE7     LDR r0, [pc, r0]
		   0x01115CE8:  000090E5     LDR r0, [r0]
		   0x01115CEC:  741090E5     LDR r1, [r0, 0x74]
		   0x01115CF0:  000051E3     CMPS r0, r1, 0x0
		   0x01115CF4:  0000001A     BNE $+0x8  // if (!=) goto 0x01115CFC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01115CF8:  6515F9EB     BL $-0x1baa64
		   // ──── Block 5 if (!=) ────────────────────
		   0x01115CFC:  0400A0E1     MOV r0, r4
		   0x01115D00:  0010A0E3     MOV r1, 0x0
		   0x01115D04:  1924FEEB     BL $-0x76f94
		   0x01115D08:  1040BDE8     POP {r4, lr}
		   0x01115D0C:  080000EA     B $+0x28  // TAIL CALL → ItemData.FlexValuesUpdated
		   0x01115D10:  F1611103     TSTSEQ r6, r1, 0x4000003c
		   0x01115D14:  640CF602     RSCSEQ r0, r6, 0x6400
		   0x01115D18:  341AF602     RSCSEQ r1, r6, 0x34000
		   0x01115D1C:  B83DF602     RSCSEQ r3, r6, 0x2e00
		   0x01115D20:  4434F602     RSCSEQ r3, r6, 0x44000000
		   0x01115D24:  3034F602     RSCSEQ r3, r6, 0x30000000
		   0x01115D28:  100CF602     RSCSEQ r0, r6, 0x1000
		   0x01115D2C:  603DF602     RSCSEQ r3, r6, 0x1800
		   0x01115D30:  BC19F602     RSCSEQ r1, r6, 0x2f0000
		*/
	}

	// RVA: 0x111600C Offset: 0x111600C VA: 0x111600C
	public void InitInnerItems(ResourcesPack resourcesPack) {
		/* Disassembly (ARM32, 676 instructions, 0xA90 bytes):
		   // CFG: 148 blocks, 149 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111600C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01116010:  0CD04DE2     SUB sp, sp, 0xc
		   0x01116014:  C4499FE5     LDR r4, [pc, 0x9c4]
		   0x01116018:  0090A0E1     MOV sb, r0
		   0x0111601C:  0160A0E1     MOV r6, r1
		   0x01116020:  04408FE0     ADD r4, pc, r4
		   0x01116024:  0000D4E5     LDRB r0, [r4]
		   0x01116028:  000050E3     CMPS r0, r0, 0x0
		   0x0111602C:  3D00001A     BNE $+0xfc  // if (!=) goto 0x01116128
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116030:  AC099FE5     LDR r0, [pc, 0x9ac]
		   0x01116034:  00009FE7     LDR r0, [pc, r0]
		   0x01116038:  4814F9EB     BL $-0x1baed8
		   0x0111603C:  A4099FE5     LDR r0, [pc, 0x9a4]
		   0x01116040:  00009FE7     LDR r0, [pc, r0]
		   0x01116044:  4514F9EB     BL $-0x1baee4
		   0x01116048:  9C099FE5     LDR r0, [pc, 0x99c]
		   0x0111604C:  00009FE7     LDR r0, [pc, r0]
		   0x01116050:  4214F9EB     BL $-0x1baef0
		   0x01116054:  94099FE5     LDR r0, [pc, 0x994]
		   0x01116058:  00009FE7     LDR r0, [pc, r0]
		   0x0111605C:  3F14F9EB     BL $-0x1baefc
		   0x01116060:  8C099FE5     LDR r0, [pc, 0x98c]
		   0x01116064:  00009FE7     LDR r0, [pc, r0]
		   0x01116068:  3C14F9EB     BL $-0x1baf08
		   0x0111606C:  84099FE5     LDR r0, [pc, 0x984]
		   0x01116070:  00009FE7     LDR r0, [pc, r0]
		   0x01116074:  3914F9EB     BL $-0x1baf14
		   0x01116078:  7C099FE5     LDR r0, [pc, 0x97c]
		   0x0111607C:  00009FE7     LDR r0, [pc, r0]
		   0x01116080:  3614F9EB     BL $-0x1baf20
		   0x01116084:  74099FE5     LDR r0, [pc, 0x974]
		   0x01116088:  00009FE7     LDR r0, [pc, r0]
		   0x0111608C:  3314F9EB     BL $-0x1baf2c
		   0x01116090:  6C099FE5     LDR r0, [pc, 0x96c]
		   0x01116094:  00009FE7     LDR r0, [pc, r0]
		   0x01116098:  3014F9EB     BL $-0x1baf38
		   0x0111609C:  64099FE5     LDR r0, [pc, 0x964]
		   0x011160A0:  00009FE7     LDR r0, [pc, r0]
		   0x011160A4:  2D14F9EB     BL $-0x1baf44
		   0x011160A8:  5C099FE5     LDR r0, [pc, 0x95c]
		   0x011160AC:  00009FE7     LDR r0, [pc, r0]
		   0x011160B0:  2A14F9EB     BL $-0x1baf50
		   0x011160B4:  54099FE5     LDR r0, [pc, 0x954]
		   0x011160B8:  00009FE7     LDR r0, [pc, r0]
		   0x011160BC:  2714F9EB     BL $-0x1baf5c
		   0x011160C0:  4C099FE5     LDR r0, [pc, 0x94c]
		   0x011160C4:  00009FE7     LDR r0, [pc, r0]
		   0x011160C8:  2414F9EB     BL $-0x1baf68
		   0x011160CC:  44099FE5     LDR r0, [pc, 0x944]
		   0x011160D0:  00009FE7     LDR r0, [pc, r0]
		   0x011160D4:  2114F9EB     BL $-0x1baf74
		   0x011160D8:  3C099FE5     LDR r0, [pc, 0x93c]
		   0x011160DC:  00009FE7     LDR r0, [pc, r0]
		   0x011160E0:  1E14F9EB     BL $-0x1baf80
		   0x011160E4:  34099FE5     LDR r0, [pc, 0x934]
		   0x011160E8:  00009FE7     LDR r0, [pc, r0]
		   0x011160EC:  1B14F9EB     BL $-0x1baf8c
		   0x011160F0:  2C099FE5     LDR r0, [pc, 0x92c]
		   0x011160F4:  00009FE7     LDR r0, [pc, r0]
		   0x011160F8:  1814F9EB     BL $-0x1baf98
		   0x011160FC:  24099FE5     LDR r0, [pc, 0x924]
		   0x01116100:  00009FE7     LDR r0, [pc, r0]
		   0x01116104:  1514F9EB     BL $-0x1bafa4
		   0x01116108:  1C099FE5     LDR r0, [pc, 0x91c]
		   0x0111610C:  00009FE7     LDR r0, [pc, r0]
		   0x01116110:  1214F9EB     BL $-0x1bafb0
		   0x01116114:  14099FE5     LDR r0, [pc, 0x914]
		   0x01116118:  00009FE7     LDR r0, [pc, r0]
		   0x0111611C:  0F14F9EB     BL $-0x1bafbc
		   0x01116120:  0100A0E3     MOV r0, 0x1
		   0x01116124:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116128:  441099E5     LDR r1, [sb, 0x44]
		   0x0111612C:  000051E3     CMPS r0, r1, 0x0
		   0x01116130:  3700000A     BEQ $+0xe4  // if (==) goto 0x01116214
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116134:  F8089FE5     LDR r0, [pc, 0x8f8]
		   0x01116138:  00009FE7     LDR r0, [pc, r0]
		   0x0111613C:  0C1091E5     LDR r1, [r1, 0xc]
		   0x01116140:  000090E5     LDR r0, [r0]
		   0x01116144:  2814F9EB     BL $-0x1baf58
		   0x01116148:  700089E5     STR r0, [sb, 0x70]
		   0x0111614C:  0040A0E3     MOV r4, 0x0
		   0x01116150:  E0889FE5     LDR r8, [pc, 0x8e0]
		   0x01116154:  08809FE7     LDR r8, [pc, r8]
		   0x01116158:  445099E5     LDR r5, [sb, 0x44]
		   0x0111615C:  000055E3     CMPS r0, r5, 0x0
		   0x01116160:  0000001A     BNE $+0x8  // if (!=) goto 0x01116168
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116164:  9914F9EB     BL $-0x1bad94
		   // ──── Block 5 if (!=) ────────────────────
		   0x01116168:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0111616C:  000054E1     CMPS r0, r4, r0
		   0x01116170:  420000AA     BGE $+0x110  // if (>=) goto 0x01116280
		   // 
		   // ──── Block 6 else (<) ────────────────────
		   0x01116174:  445099E5     LDR r5, [sb, 0x44]
		   0x01116178:  000055E3     CMPS r0, r5, 0x0
		   0x0111617C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116184
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01116180:  9214F9EB     BL $-0x1badb0
		   // ──── Block 8 if (!=) ────────────────────
		   0x01116184:  002098E5     LDR r2, [r8]
		   0x01116188:  0500A0E1     MOV r0, r5
		   0x0111618C:  0410A0E1     MOV r1, r4
		   0x01116190:  DA716BEB     BL $+0x1adc770  // CALL → List<object>.get_Item
		   0x01116194:  0050A0E1     MOV r5, r0
		   0x01116198:  000056E3     CMPS r0, r6, 0x0
		   0x0111619C:  0000001A     BNE $+0x8  // if (!=) goto 0x011161A4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x011161A0:  8A14F9EB     BL $-0x1badd0
		   // ──── Block 10 if (!=) ────────────────────
		   0x011161A4:  0600A0E1     MOV r0, r6
		   0x011161A8:  0510A0E1     MOV r1, r5
		   0x011161AC:  0020A0E3     MOV r2, 0x0
		   0x011161B0:  CCDC01EB     BL $+0x77338  // CALL → ResourcesPack.GetItemObjectByCode
		   0x011161B4:  707099E5     LDR r7, [sb, 0x70]
		   0x011161B8:  0050A0E1     MOV r5, r0
		   0x011161BC:  000057E3     CMPS r0, r7, 0x0
		   0x011161C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011161C8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x011161C4:  8114F9EB     BL $-0x1badf4
		   // ──── Block 12 if (!=) ────────────────────
		   0x011161C8:  000055E3     CMPS r0, r5, 0x0
		   0x011161CC:  0800000A     BEQ $+0x28  // if (==) goto 0x011161F4
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x011161D0:  000097E5     LDR r0, [r7]
		   0x011161D4:  201090E5     LDR r1, [r0, 0x20]
		   0x011161D8:  0500A0E1     MOV r0, r5
		   0x011161DC:  2D14F9EB     BL $-0x1baf44
		   0x011161E0:  000050E3     CMPS r0, r0, 0x0
		   0x011161E4:  0200001A     BNE $+0x10  // if (!=) goto 0x011161F4
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x011161E8:  8014F9EB     BL $-0x1badf8
		   0x011161EC:  0010A0E3     MOV r1, 0x0
		   0x011161F0:  2214F9EB     BL $-0x1baf70
		   // ──── Block 15 (from 2 paths) ──────────────────
		   0x011161F4:  0C0097E5     LDR r0, [r7, 0xc]
		   0x011161F8:  040050E1     CMPS r0, r0, r4
		   0x011161FC:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01116204
		   // 
		   // ──── Block 16 else (<= (unsigned)) ────────────────────
		   0x01116200:  7314F9EB     BL $-0x1bae2c
		   // ──── Block 17 if (> (unsigned)) ────────────────────
		   0x01116204:  040187E0     ADD r0, r7, r4, lsl 2
		   0x01116208:  014084E2     ADD r4, r4, 0x1
		   0x0111620C:  105080E5     STR r5, [r0, 0x10]
		   0x01116210:  D0FFFFEA     B $-0xb8
		   // ──── Block 18 if (==) ────────────────────
		   0x01116214:  20089FE5     LDR r0, [pc, 0x820]
		   0x01116218:  00009FE7     LDR r0, [pc, r0]
		   0x0111621C:  004090E5     LDR r4, [r0]
		   0x01116220:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01116224:  000050E3     CMPS r0, r0, 0x0
		   0x01116228:  0200001A     BNE $+0x10  // if (!=) goto 0x01116238
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0111622C:  0400A0E1     MOV r0, r4
		   0x01116230:  3702FAEB     BL $-0x17f71c
		   0x01116234:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 20 if (!=) ────────────────────
		   0x01116238:  080090E5     LDR r0, [r0, 0x8]
		   0x0111623C:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01116240:  010011E3     TSTS r0, r1, 0x1
		   0x01116244:  0000001A     BNE $+0x8  // if (!=) goto 0x0111624C
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x01116248:  1A02FAEB     BL $-0x17f790
		   // ──── Block 22 if (!=) ────────────────────
		   0x0111624C:  741090E5     LDR r1, [r0, 0x74]
		   0x01116250:  000051E3     CMPS r0, r1, 0x0
		   0x01116254:  0000001A     BNE $+0x8  // if (!=) goto 0x0111625C
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01116258:  0D14F9EB     BL $-0x1bafc4
		   // ──── Block 24 if (!=) ────────────────────
		   0x0111625C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01116260:  080090E5     LDR r0, [r0, 0x8]
		   0x01116264:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01116268:  010011E3     TSTS r0, r1, 0x1
		   0x0111626C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116274
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01116270:  1002FAEB     BL $-0x17f7b8
		   // ──── Block 26 if (!=) ────────────────────
		   0x01116274:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01116278:  000090E5     LDR r0, [r0]
		   0x0111627C:  700089E5     STR r0, [sb, 0x70]
		   // ──── Block 27 if (>=) ────────────────────
		   0x01116280:  381099E5     LDR r1, [sb, 0x38]
		   0x01116284:  000051E3     CMPS r0, r1, 0x0
		   0x01116288:  3700000A     BEQ $+0xe4  // if (==) goto 0x0111636C
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x0111628C:  AC079FE5     LDR r0, [pc, 0x7ac]
		   0x01116290:  00009FE7     LDR r0, [pc, r0]
		   0x01116294:  0C1091E5     LDR r1, [r1, 0xc]
		   0x01116298:  000090E5     LDR r0, [r0]
		   0x0111629C:  D213F9EB     BL $-0x1bb0b0
		   0x011162A0:  640089E5     STR r0, [sb, 0x64]
		   0x011162A4:  0040A0E3     MOV r4, 0x0
		   0x011162A8:  94879FE5     LDR r8, [pc, 0x794]
		   0x011162AC:  08809FE7     LDR r8, [pc, r8]
		   0x011162B0:  385099E5     LDR r5, [sb, 0x38]
		   0x011162B4:  000055E3     CMPS r0, r5, 0x0
		   0x011162B8:  0000001A     BNE $+0x8  // if (!=) goto 0x011162C0
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x011162BC:  4314F9EB     BL $-0x1baeec
		   // ──── Block 30 if (!=) ────────────────────
		   0x011162C0:  0C0095E5     LDR r0, [r5, 0xc]
		   0x011162C4:  000054E1     CMPS r0, r4, r0
		   0x011162C8:  420000AA     BGE $+0x110  // if (>=) goto 0x011163D8
		   // 
		   // ──── Block 31 else (<) ────────────────────
		   0x011162CC:  385099E5     LDR r5, [sb, 0x38]
		   0x011162D0:  000055E3     CMPS r0, r5, 0x0
		   0x011162D4:  0000001A     BNE $+0x8  // if (!=) goto 0x011162DC
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x011162D8:  3C14F9EB     BL $-0x1baf08
		   // ──── Block 33 if (!=) ────────────────────
		   0x011162DC:  002098E5     LDR r2, [r8]
		   0x011162E0:  0500A0E1     MOV r0, r5
		   0x011162E4:  0410A0E1     MOV r1, r4
		   0x011162E8:  84716BEB     BL $+0x1adc618  // CALL → List<object>.get_Item
		   0x011162EC:  0050A0E1     MOV r5, r0
		   0x011162F0:  000056E3     CMPS r0, r6, 0x0
		   0x011162F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011162FC
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x011162F8:  3414F9EB     BL $-0x1baf28
		   // ──── Block 35 if (!=) ────────────────────
		   0x011162FC:  0600A0E1     MOV r0, r6
		   0x01116300:  0510A0E1     MOV r1, r5
		   0x01116304:  0020A0E3     MOV r2, 0x0
		   0x01116308:  76DC01EB     BL $+0x771e0  // CALL → ResourcesPack.GetItemObjectByCode
		   0x0111630C:  647099E5     LDR r7, [sb, 0x64]
		   0x01116310:  0050A0E1     MOV r5, r0
		   0x01116314:  000057E3     CMPS r0, r7, 0x0
		   0x01116318:  0000001A     BNE $+0x8  // if (!=) goto 0x01116320
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x0111631C:  2B14F9EB     BL $-0x1baf4c
		   // ──── Block 37 if (!=) ────────────────────
		   0x01116320:  000055E3     CMPS r0, r5, 0x0
		   0x01116324:  0800000A     BEQ $+0x28  // if (==) goto 0x0111634C
		   // 
		   // ──── Block 38 else (!=) ────────────────────
		   0x01116328:  000097E5     LDR r0, [r7]
		   0x0111632C:  201090E5     LDR r1, [r0, 0x20]
		   0x01116330:  0500A0E1     MOV r0, r5
		   0x01116334:  D713F9EB     BL $-0x1bb09c
		   0x01116338:  000050E3     CMPS r0, r0, 0x0
		   0x0111633C:  0200001A     BNE $+0x10  // if (!=) goto 0x0111634C
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x01116340:  2A14F9EB     BL $-0x1baf50
		   0x01116344:  0010A0E3     MOV r1, 0x0
		   0x01116348:  CC13F9EB     BL $-0x1bb0c8
		   // ──── Block 40 (from 2 paths) ──────────────────
		   0x0111634C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01116350:  040050E1     CMPS r0, r0, r4
		   0x01116354:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0111635C
		   // 
		   // ──── Block 41 else (<= (unsigned)) ────────────────────
		   0x01116358:  1D14F9EB     BL $-0x1baf84
		   // ──── Block 42 if (> (unsigned)) ────────────────────
		   0x0111635C:  040187E0     ADD r0, r7, r4, lsl 2
		   0x01116360:  014084E2     ADD r4, r4, 0x1
		   0x01116364:  105080E5     STR r5, [r0, 0x10]
		   0x01116368:  D0FFFFEA     B $-0xb8
		   // ──── Block 43 if (==) ────────────────────
		   0x0111636C:  D4069FE5     LDR r0, [pc, 0x6d4]
		   0x01116370:  00009FE7     LDR r0, [pc, r0]
		   0x01116374:  004090E5     LDR r4, [r0]
		   0x01116378:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x0111637C:  000050E3     CMPS r0, r0, 0x0
		   0x01116380:  0200001A     BNE $+0x10  // if (!=) goto 0x01116390
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x01116384:  0400A0E1     MOV r0, r4
		   0x01116388:  E101FAEB     BL $-0x17f874
		   0x0111638C:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 45 if (!=) ────────────────────
		   0x01116390:  080090E5     LDR r0, [r0, 0x8]
		   0x01116394:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01116398:  010011E3     TSTS r0, r1, 0x1
		   0x0111639C:  0000001A     BNE $+0x8  // if (!=) goto 0x011163A4
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x011163A0:  C401FAEB     BL $-0x17f8e8
		   // ──── Block 47 if (!=) ────────────────────
		   0x011163A4:  741090E5     LDR r1, [r0, 0x74]
		   0x011163A8:  000051E3     CMPS r0, r1, 0x0
		   0x011163AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011163B4
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x011163B0:  B713F9EB     BL $-0x1bb11c
		   // ──── Block 49 if (!=) ────────────────────
		   0x011163B4:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x011163B8:  080090E5     LDR r0, [r0, 0x8]
		   0x011163BC:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011163C0:  010011E3     TSTS r0, r1, 0x1
		   0x011163C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011163CC
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x011163C8:  BA01FAEB     BL $-0x17f910
		   // ──── Block 51 if (!=) ────────────────────
		   0x011163CC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011163D0:  000090E5     LDR r0, [r0]
		   0x011163D4:  640089E5     STR r0, [sb, 0x64]
		   // ──── Block 52 if (>=) ────────────────────
		   0x011163D8:  401099E5     LDR r1, [sb, 0x40]
		   0x011163DC:  000051E3     CMPS r0, r1, 0x0
		   0x011163E0:  3700000A     BEQ $+0xe4  // if (==) goto 0x011164C4
		   // 
		   // ──── Block 53 else (!=) ────────────────────
		   0x011163E4:  60069FE5     LDR r0, [pc, 0x660]
		   0x011163E8:  00009FE7     LDR r0, [pc, r0]
		   0x011163EC:  0C1091E5     LDR r1, [r1, 0xc]
		   0x011163F0:  000090E5     LDR r0, [r0]
		   0x011163F4:  7C13F9EB     BL $-0x1bb208
		   0x011163F8:  6C0089E5     STR r0, [sb, 0x6c]
		   0x011163FC:  0040A0E3     MOV r4, 0x0
		   0x01116400:  48869FE5     LDR r8, [pc, 0x648]
		   0x01116404:  08809FE7     LDR r8, [pc, r8]
		   0x01116408:  405099E5     LDR r5, [sb, 0x40]
		   0x0111640C:  000055E3     CMPS r0, r5, 0x0
		   0x01116410:  0000001A     BNE $+0x8  // if (!=) goto 0x01116418
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x01116414:  ED13F9EB     BL $-0x1bb044
		   // ──── Block 55 if (!=) ────────────────────
		   0x01116418:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0111641C:  000054E1     CMPS r0, r4, r0
		   0x01116420:  420000AA     BGE $+0x110  // if (>=) goto 0x01116530
		   // 
		   // ──── Block 56 else (<) ────────────────────
		   0x01116424:  405099E5     LDR r5, [sb, 0x40]
		   0x01116428:  000055E3     CMPS r0, r5, 0x0
		   0x0111642C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116434
		   // 
		   // ──── Block 57 else (==) ────────────────────
		   0x01116430:  E613F9EB     BL $-0x1bb060
		   // ──── Block 58 if (!=) ────────────────────
		   0x01116434:  002098E5     LDR r2, [r8]
		   0x01116438:  0500A0E1     MOV r0, r5
		   0x0111643C:  0410A0E1     MOV r1, r4
		   0x01116440:  2E716BEB     BL $+0x1adc4c0  // CALL → List<object>.get_Item
		   0x01116444:  0050A0E1     MOV r5, r0
		   0x01116448:  000056E3     CMPS r0, r6, 0x0
		   0x0111644C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116454
		   // 
		   // ──── Block 59 else (==) ────────────────────
		   0x01116450:  DE13F9EB     BL $-0x1bb080
		   // ──── Block 60 if (!=) ────────────────────
		   0x01116454:  0600A0E1     MOV r0, r6
		   0x01116458:  0510A0E1     MOV r1, r5
		   0x0111645C:  0020A0E3     MOV r2, 0x0
		   0x01116460:  20DC01EB     BL $+0x77088  // CALL → ResourcesPack.GetItemObjectByCode
		   0x01116464:  6C7099E5     LDR r7, [sb, 0x6c]
		   0x01116468:  0050A0E1     MOV r5, r0
		   0x0111646C:  000057E3     CMPS r0, r7, 0x0
		   0x01116470:  0000001A     BNE $+0x8  // if (!=) goto 0x01116478
		   // 
		   // ──── Block 61 else (==) ────────────────────
		   0x01116474:  D513F9EB     BL $-0x1bb0a4
		   // ──── Block 62 if (!=) ────────────────────
		   0x01116478:  000055E3     CMPS r0, r5, 0x0
		   0x0111647C:  0800000A     BEQ $+0x28  // if (==) goto 0x011164A4
		   // 
		   // ──── Block 63 else (!=) ────────────────────
		   0x01116480:  000097E5     LDR r0, [r7]
		   0x01116484:  201090E5     LDR r1, [r0, 0x20]
		   0x01116488:  0500A0E1     MOV r0, r5
		   0x0111648C:  8113F9EB     BL $-0x1bb1f4
		   0x01116490:  000050E3     CMPS r0, r0, 0x0
		   0x01116494:  0200001A     BNE $+0x10  // if (!=) goto 0x011164A4
		   // 
		   // ──── Block 64 else (==) ────────────────────
		   0x01116498:  D413F9EB     BL $-0x1bb0a8
		   0x0111649C:  0010A0E3     MOV r1, 0x0
		   0x011164A0:  7613F9EB     BL $-0x1bb220
		   // ──── Block 65 (from 2 paths) ──────────────────
		   0x011164A4:  0C0097E5     LDR r0, [r7, 0xc]
		   0x011164A8:  040050E1     CMPS r0, r0, r4
		   0x011164AC:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x011164B4
		   // 
		   // ──── Block 66 else (<= (unsigned)) ────────────────────
		   0x011164B0:  C713F9EB     BL $-0x1bb0dc
		   // ──── Block 67 if (> (unsigned)) ────────────────────
		   0x011164B4:  040187E0     ADD r0, r7, r4, lsl 2
		   0x011164B8:  014084E2     ADD r4, r4, 0x1
		   0x011164BC:  105080E5     STR r5, [r0, 0x10]
		   0x011164C0:  D0FFFFEA     B $-0xb8
		   // ──── Block 68 if (==) ────────────────────
		   0x011164C4:  88059FE5     LDR r0, [pc, 0x588]
		   0x011164C8:  00009FE7     LDR r0, [pc, r0]
		   0x011164CC:  004090E5     LDR r4, [r0]
		   0x011164D0:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x011164D4:  000050E3     CMPS r0, r0, 0x0
		   0x011164D8:  0200001A     BNE $+0x10  // if (!=) goto 0x011164E8
		   // 
		   // ──── Block 69 else (==) ────────────────────
		   0x011164DC:  0400A0E1     MOV r0, r4
		   0x011164E0:  8B01FAEB     BL $-0x17f9cc
		   0x011164E4:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 70 if (!=) ────────────────────
		   0x011164E8:  080090E5     LDR r0, [r0, 0x8]
		   0x011164EC:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011164F0:  010011E3     TSTS r0, r1, 0x1
		   0x011164F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011164FC
		   // 
		   // ──── Block 71 else (==) ────────────────────
		   0x011164F8:  6E01FAEB     BL $-0x17fa40
		   // ──── Block 72 if (!=) ────────────────────
		   0x011164FC:  741090E5     LDR r1, [r0, 0x74]
		   0x01116500:  000051E3     CMPS r0, r1, 0x0
		   0x01116504:  0000001A     BNE $+0x8  // if (!=) goto 0x0111650C
		   // 
		   // ──── Block 73 else (==) ────────────────────
		   0x01116508:  6113F9EB     BL $-0x1bb274
		   // ──── Block 74 if (!=) ────────────────────
		   0x0111650C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01116510:  080090E5     LDR r0, [r0, 0x8]
		   0x01116514:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01116518:  010011E3     TSTS r0, r1, 0x1
		   0x0111651C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116524
		   // 
		   // ──── Block 75 else (==) ────────────────────
		   0x01116520:  6401FAEB     BL $-0x17fa68
		   // ──── Block 76 if (!=) ────────────────────
		   0x01116524:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01116528:  000090E5     LDR r0, [r0]
		   0x0111652C:  6C0089E5     STR r0, [sb, 0x6c]
		   // ──── Block 77 if (>=) ────────────────────
		   0x01116530:  3C1099E5     LDR r1, [sb, 0x3c]
		   0x01116534:  04608DE5     STR r6, [sp, 0x4]
		   0x01116538:  000051E3     CMPS r0, r1, 0x0
		   0x0111653C:  4700000A     BEQ $+0x124  // if (==) goto 0x01116660
		   // 
		   // ──── Block 78 else (!=) ────────────────────
		   0x01116540:  10059FE5     LDR r0, [pc, 0x510]
		   0x01116544:  00009FE7     LDR r0, [pc, r0]
		   0x01116548:  0C1091E5     LDR r1, [r1, 0xc]
		   0x0111654C:  000090E5     LDR r0, [r0]
		   0x01116550:  2513F9EB     BL $-0x1bb364
		   0x01116554:  680089E5     STR r0, [sb, 0x68]
		   0x01116558:  00B0A0E3     MOV fp, 0x0
		   0x0111655C:  F8849FE5     LDR r8, [pc, 0x4f8]
		   0x01116560:  08809FE7     LDR r8, [pc, r8]
		   0x01116564:  F4A49FE5     LDR r10, [pc, 0x4f4]
		   0x01116568:  0AA09FE7     LDR r10, [pc, r10]
		   0x0111656C:  3C4099E5     LDR r4, [sb, 0x3c]
		   0x01116570:  000054E3     CMPS r0, r4, 0x0
		   0x01116574:  0000001A     BNE $+0x8  // if (!=) goto 0x0111657C
		   // 
		   // ──── Block 79 else (==) ────────────────────
		   0x01116578:  9413F9EB     BL $-0x1bb1a8
		   // ──── Block 80 if (!=) ────────────────────
		   0x0111657C:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01116580:  00005BE1     CMPS r0, fp, r0
		   0x01116584:  500000AA     BGE $+0x148  // if (>=) goto 0x011166CC
		   // 
		   // ──── Block 81 else (<) ────────────────────
		   0x01116588:  3C5099E5     LDR r5, [sb, 0x3c]
		   0x0111658C:  000055E3     CMPS r0, r5, 0x0
		   0x01116590:  0000001A     BNE $+0x8  // if (!=) goto 0x01116598
		   // 
		   // ──── Block 82 else (==) ────────────────────
		   0x01116594:  8D13F9EB     BL $-0x1bb1c4
		   // ──── Block 83 if (!=) ────────────────────
		   0x01116598:  002098E5     LDR r2, [r8]
		   0x0111659C:  0500A0E1     MOV r0, r5
		   0x011165A0:  0B10A0E1     MOV r1, fp
		   0x011165A4:  D5706BEB     BL $+0x1adc35c  // CALL → List<object>.get_Item
		   0x011165A8:  0060A0E1     MOV r6, r0
		   0x011165AC:  000050E3     CMPS r0, r0, 0x0
		   0x011165B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011165B8
		   // 
		   // ──── Block 84 else (==) ────────────────────
		   0x011165B4:  8513F9EB     BL $-0x1bb1e4
		   // ──── Block 85 if (!=) ────────────────────
		   0x011165B8:  04409DE5     LDR r4, [sp, 0x4]
		   0x011165BC:  085096E5     LDR r5, [r6, 0x8]
		   0x011165C0:  000054E3     CMPS r0, r4, 0x0
		   0x011165C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011165CC
		   // 
		   // ──── Block 86 else (==) ────────────────────
		   0x011165C8:  8013F9EB     BL $-0x1bb1f8
		   // ──── Block 87 if (!=) ────────────────────
		   0x011165CC:  0400A0E1     MOV r0, r4
		   0x011165D0:  0510A0E1     MOV r1, r5
		   0x011165D4:  0020A0E3     MOV r2, 0x0
		   0x011165D8:  C2DB01EB     BL $+0x76f10  // CALL → ResourcesPack.GetItemObjectByCode
		   0x011165DC:  0070A0E1     MOV r7, r0
		   0x011165E0:  00009AE5     LDR r0, [r10]
		   0x011165E4:  684099E5     LDR r4, [sb, 0x68]
		   0x011165E8:  7513F9EB     BL $-0x1bb224
		   0x011165EC:  0010A0E3     MOV r1, 0x0
		   0x011165F0:  0050A0E1     MOV r5, r0
		   0x011165F4:  817CFFEB     BL $-0x20df4
		   0x011165F8:  000055E3     CMPS r0, r5, 0x0
		   0x011165FC:  0000001A     BNE $+0x8  // if (!=) goto 0x01116604
		   // 
		   // ──── Block 88 else (==) ────────────────────
		   0x01116600:  7213F9EB     BL $-0x1bb230
		   // ──── Block 89 if (!=) ────────────────────
		   0x01116604:  087085E5     STR r7, [r5, 0x8]
		   0x01116608:  000054E3     CMPS r0, r4, 0x0
		   0x0111660C:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01116610:  0C0085E5     STR r0, [r5, 0xc]
		   0x01116614:  0000001A     BNE $+0x8  // if (!=) goto 0x0111661C
		   // 
		   // ──── Block 90 else (==) ────────────────────
		   0x01116618:  6C13F9EB     BL $-0x1bb248
		   // ──── Block 91 if (!=) ────────────────────
		   0x0111661C:  000094E5     LDR r0, [r4]
		   0x01116620:  201090E5     LDR r1, [r0, 0x20]
		   0x01116624:  0500A0E1     MOV r0, r5
		   0x01116628:  1A13F9EB     BL $-0x1bb390
		   0x0111662C:  000050E3     CMPS r0, r0, 0x0
		   0x01116630:  0200001A     BNE $+0x10  // if (!=) goto 0x01116640
		   // 
		   // ──── Block 92 else (==) ────────────────────
		   0x01116634:  6D13F9EB     BL $-0x1bb244
		   0x01116638:  0010A0E3     MOV r1, 0x0
		   0x0111663C:  0F13F9EB     BL $-0x1bb3bc
		   // ──── Block 93 if (!=) ────────────────────
		   0x01116640:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01116644:  0B0050E1     CMPS r0, r0, fp
		   0x01116648:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01116650
		   // 
		   // ──── Block 94 else (<= (unsigned)) ────────────────────
		   0x0111664C:  6013F9EB     BL $-0x1bb278
		   // ──── Block 95 if (> (unsigned)) ────────────────────
		   0x01116650:  0B0184E0     ADD r0, r4, fp, lsl 2
		   0x01116654:  01B08BE2     ADD fp, fp, 0x1
		   0x01116658:  105080E5     STR r5, [r0, 0x10]
		   0x0111665C:  C2FFFFEA     B $-0xf0
		   // ──── Block 96 if (==) ────────────────────
		   0x01116660:  FC039FE5     LDR r0, [pc, 0x3fc]
		   0x01116664:  00009FE7     LDR r0, [pc, r0]
		   0x01116668:  004090E5     LDR r4, [r0]
		   0x0111666C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01116670:  000050E3     CMPS r0, r0, 0x0
		   0x01116674:  0200001A     BNE $+0x10  // if (!=) goto 0x01116684
		   // 
		   // ──── Block 97 else (==) ────────────────────
		   0x01116678:  0400A0E1     MOV r0, r4
		   0x0111667C:  2401FAEB     BL $-0x17fb68
		   0x01116680:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 98 if (!=) ────────────────────
		   0x01116684:  080090E5     LDR r0, [r0, 0x8]
		   0x01116688:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x0111668C:  010011E3     TSTS r0, r1, 0x1
		   0x01116690:  0000001A     BNE $+0x8  // if (!=) goto 0x01116698
		   // 
		   // ──── Block 99 else (==) ────────────────────
		   0x01116694:  0701FAEB     BL $-0x17fbdc
		   // ──── Block 100 if (!=) ────────────────────
		   0x01116698:  741090E5     LDR r1, [r0, 0x74]
		   0x0111669C:  000051E3     CMPS r0, r1, 0x0
		   0x011166A0:  0000001A     BNE $+0x8  // if (!=) goto 0x011166A8
		   // 
		   // ──── Block 101 else (==) ────────────────────
		   0x011166A4:  FA12F9EB     BL $-0x1bb410
		   // ──── Block 102 if (!=) ────────────────────
		   0x011166A8:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x011166AC:  080090E5     LDR r0, [r0, 0x8]
		   0x011166B0:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011166B4:  010011E3     TSTS r0, r1, 0x1
		   0x011166B8:  0000001A     BNE $+0x8  // if (!=) goto 0x011166C0
		   // 
		   // ──── Block 103 else (==) ────────────────────
		   0x011166BC:  FD00FAEB     BL $-0x17fc04
		   // ──── Block 104 if (!=) ────────────────────
		   0x011166C0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011166C4:  000090E5     LDR r0, [r0]
		   0x011166C8:  680089E5     STR r0, [sb, 0x68]
		   // ──── Block 105 if (>=) ────────────────────
		   0x011166CC:  481099E5     LDR r1, [sb, 0x48]
		   0x011166D0:  90039FE5     LDR r0, [pc, 0x390]
		   0x011166D4:  000051E3     CMPS r0, r1, 0x0
		   0x011166D8:  00009FE7     LDR r0, [pc, r0]
		   0x011166DC:  B400000A     BEQ $+0x2d8  // if (==) goto 0x011169B4
		   // 
		   // ──── Block 106 else (!=) ────────────────────
		   0x011166E0:  000090E5     LDR r0, [r0]
		   0x011166E4:  0C4091E5     LDR r4, [r1, 0xc]
		   0x011166E8:  3513F9EB     BL $-0x1bb324
		   0x011166EC:  0050A0E1     MOV r5, r0
		   0x011166F0:  74039FE5     LDR r0, [pc, 0x374]
		   0x011166F4:  0410A0E1     MOV r1, r4
		   0x011166F8:  00009FE7     LDR r0, [pc, r0]
		   0x011166FC:  002090E5     LDR r2, [r0]
		   0x01116700:  0500A0E1     MOV r0, r5
		   0x01116704:  446F6BEB     BL $+0x1adbd18  // CALL → List<object>..ctor
		   0x01116708:  0000A0E3     MOV r0, 0x0
		   0x0111670C:  985089E5     STR r5, [sb, 0x98]
		   0x01116710:  08008DE5     STR r0, [sp, 0x8]
		   0x01116714:  04709DE5     LDR r7, [sp, 0x4]
		   0x01116718:  484099E5     LDR r4, [sb, 0x48]
		   0x0111671C:  000054E3     CMPS r0, r4, 0x0
		   0x01116720:  0000001A     BNE $+0x8  // if (!=) goto 0x01116728
		   // 
		   // ──── Block 107 else (==) ────────────────────
		   0x01116724:  2913F9EB     BL $-0x1bb354
		   // ──── Block 108 if (!=) ────────────────────
		   0x01116728:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0111672C:  08609DE5     LDR r6, [sp, 0x8]
		   0x01116730:  000056E1     CMPS r0, r6, r0
		   0x01116734:  A70000AA     BGE $+0x2a4  // if (>=) goto 0x011169D8
		   // 
		   // ──── Block 109 else (<) ────────────────────
		   0x01116738:  484099E5     LDR r4, [sb, 0x48]
		   0x0111673C:  000054E3     CMPS r0, r4, 0x0
		   0x01116740:  0000001A     BNE $+0x8  // if (!=) goto 0x01116748
		   // 
		   // ──── Block 110 else (==) ────────────────────
		   0x01116744:  2113F9EB     BL $-0x1bb374
		   // ──── Block 111 if (!=) ────────────────────
		   0x01116748:  20039FE5     LDR r0, [pc, 0x320]
		   0x0111674C:  0610A0E1     MOV r1, r6
		   0x01116750:  00009FE7     LDR r0, [pc, r0]
		   0x01116754:  002090E5     LDR r2, [r0]
		   0x01116758:  0400A0E1     MOV r0, r4
		   0x0111675C:  67706BEB     BL $+0x1adc1a4  // CALL → List<object>.get_Item
		   0x01116760:  00B0A0E1     MOV fp, r0
		   0x01116764:  984099E5     LDR r4, [sb, 0x98]
		   0x01116768:  04039FE5     LDR r0, [pc, 0x304]
		   0x0111676C:  00009FE7     LDR r0, [pc, r0]
		   0x01116770:  000090E5     LDR r0, [r0]
		   0x01116774:  1213F9EB     BL $-0x1bb3b0
		   0x01116778:  0010A0E3     MOV r1, 0x0
		   0x0111677C:  0050A0E1     MOV r5, r0
		   0x01116780:  577DFFEB     BL $-0x20a9c
		   0x01116784:  000054E3     CMPS r0, r4, 0x0
		   0x01116788:  0000001A     BNE $+0x8  // if (!=) goto 0x01116790
		   // 
		   // ──── Block 112 else (==) ────────────────────
		   0x0111678C:  0F13F9EB     BL $-0x1bb3bc
		   // ──── Block 113 if (!=) ────────────────────
		   0x01116790:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x01116794:  0610A0E1     MOV r1, r6
		   0x01116798:  0520A0E1     MOV r2, r5
		   0x0111679C:  00009FE7     LDR r0, [pc, r0]
		   0x011167A0:  003090E5     LDR r3, [r0]
		   0x011167A4:  0400A0E1     MOV r0, r4
		   0x011167A8:  67706BEB     BL $+0x1adc1a4  // CALL → List<object>.set_Item
		   0x011167AC:  984099E5     LDR r4, [sb, 0x98]
		   0x011167B0:  000054E3     CMPS r0, r4, 0x0
		   0x011167B4:  0000001A     BNE $+0x8  // if (!=) goto 0x011167BC
		   // 
		   // ──── Block 114 else (==) ────────────────────
		   0x011167B8:  0413F9EB     BL $-0x1bb3e8
		   // ──── Block 115 if (!=) ────────────────────
		   0x011167BC:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x011167C0:  0610A0E1     MOV r1, r6
		   0x011167C4:  00009FE7     LDR r0, [pc, r0]
		   0x011167C8:  002090E5     LDR r2, [r0]
		   0x011167CC:  0400A0E1     MOV r0, r4
		   0x011167D0:  4A706BEB     BL $+0x1adc130  // CALL → List<object>.get_Item
		   0x011167D4:  0040A0E1     MOV r4, r0
		   0x011167D8:  00005BE3     CMPS r0, fp, 0x0
		   0x011167DC:  0000001A     BNE $+0x8  // if (!=) goto 0x011167E4
		   // 
		   // ──── Block 116 else (==) ────────────────────
		   0x011167E0:  FA12F9EB     BL $-0x1bb410
		   // ──── Block 117 if (!=) ────────────────────
		   0x011167E4:  08509BE5     LDR r5, [fp, 0x8]
		   0x011167E8:  000055E3     CMPS r0, r5, 0x0
		   0x011167EC:  0000001A     BNE $+0x8  // if (!=) goto 0x011167F4
		   // 
		   // ──── Block 118 else (==) ────────────────────
		   0x011167F0:  F612F9EB     BL $-0x1bb420
		   // ──── Block 119 if (!=) ────────────────────
		   0x011167F4:  84029FE5     LDR r0, [pc, 0x284]
		   0x011167F8:  09A0A0E1     MOV r10, sb
		   0x011167FC:  00009FE7     LDR r0, [pc, r0]
		   0x01116800:  0C6095E5     LDR r6, [r5, 0xc]
		   0x01116804:  000090E5     LDR r0, [r0]
		   0x01116808:  ED12F9EB     BL $-0x1bb444
		   0x0111680C:  0050A0E1     MOV r5, r0
		   0x01116810:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x01116814:  0610A0E1     MOV r1, r6
		   0x01116818:  00009FE7     LDR r0, [pc, r0]
		   0x0111681C:  002090E5     LDR r2, [r0]
		   0x01116820:  0500A0E1     MOV r0, r5
		   0x01116824:  FC6E6BEB     BL $+0x1adbbf8  // CALL → List<object>..ctor
		   0x01116828:  000054E3     CMPS r0, r4, 0x0
		   0x0111682C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116834
		   // 
		   // ──── Block 120 else (==) ────────────────────
		   0x01116830:  E612F9EB     BL $-0x1bb460
		   // ──── Block 121 if (!=) ────────────────────
		   0x01116834:  085084E5     STR r5, [r4, 0x8]
		   0x01116838:  0090A0E3     MOV sb, 0x0
		   0x0111683C:  08409BE5     LDR r4, [fp, 0x8]
		   0x01116840:  000054E3     CMPS r0, r4, 0x0
		   0x01116844:  0000001A     BNE $+0x8  // if (!=) goto 0x0111684C
		   // 
		   // ──── Block 122 else (==) ────────────────────
		   0x01116848:  E012F9EB     BL $-0x1bb478
		   // ──── Block 123 if (!=) ────────────────────
		   0x0111684C:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01116850:  000059E1     CMPS r0, sb, r0
		   0x01116854:  510000AA     BGE $+0x14c  // if (>=) goto 0x011169A0
		   // 
		   // ──── Block 124 else (<) ────────────────────
		   0x01116858:  08509BE5     LDR r5, [fp, 0x8]
		   0x0111685C:  000055E3     CMPS r0, r5, 0x0
		   0x01116860:  0000001A     BNE $+0x8  // if (!=) goto 0x01116868
		   // 
		   // ──── Block 125 else (==) ────────────────────
		   0x01116864:  D912F9EB     BL $-0x1bb494
		   // ──── Block 126 if (!=) ────────────────────
		   0x01116868:  18029FE5     LDR r0, [pc, 0x218]
		   0x0111686C:  0910A0E1     MOV r1, sb
		   0x01116870:  00009FE7     LDR r0, [pc, r0]
		   0x01116874:  002090E5     LDR r2, [r0]
		   0x01116878:  0500A0E1     MOV r0, r5
		   0x0111687C:  1F706BEB     BL $+0x1adc084  // CALL → List<object>.get_Item
		   0x01116880:  0050A0E1     MOV r5, r0
		   0x01116884:  000050E3     CMPS r0, r0, 0x0
		   0x01116888:  0000001A     BNE $+0x8  // if (!=) goto 0x01116890
		   // 
		   // ──── Block 127 else (==) ────────────────────
		   0x0111688C:  CF12F9EB     BL $-0x1bb4bc
		   // ──── Block 128 if (!=) ────────────────────
		   0x01116890:  086095E5     LDR r6, [r5, 0x8]
		   0x01116894:  000057E3     CMPS r0, r7, 0x0
		   0x01116898:  0000001A     BNE $+0x8  // if (!=) goto 0x011168A0
		   // 
		   // ──── Block 129 else (==) ────────────────────
		   0x0111689C:  CB12F9EB     BL $-0x1bb4cc
		   // ──── Block 130 if (!=) ────────────────────
		   0x011168A0:  0700A0E1     MOV r0, r7
		   0x011168A4:  0610A0E1     MOV r1, r6
		   0x011168A8:  0020A0E3     MOV r2, 0x0
		   0x011168AC:  0DDB01EB     BL $+0x76c3c  // CALL → ResourcesPack.GetItemObjectByCode
		   0x011168B0:  98609AE5     LDR r6, [r10, 0x98]
		   0x011168B4:  0080A0E1     MOV r8, r0
		   0x011168B8:  000056E3     CMPS r0, r6, 0x0
		   0x011168BC:  0000001A     BNE $+0x8  // if (!=) goto 0x011168C4
		   // 
		   // ──── Block 131 else (==) ────────────────────
		   0x011168C0:  C212F9EB     BL $-0x1bb4f0
		   // ──── Block 132 if (!=) ────────────────────
		   0x011168C4:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x011168C8:  00009FE7     LDR r0, [pc, r0]
		   0x011168CC:  08109DE5     LDR r1, [sp, 0x8]
		   0x011168D0:  002090E5     LDR r2, [r0]
		   0x011168D4:  0600A0E1     MOV r0, r6
		   0x011168D8:  08706BEB     BL $+0x1adc028  // CALL → List<object>.get_Item
		   0x011168DC:  0060A0E1     MOV r6, r0
		   0x011168E0:  000050E3     CMPS r0, r0, 0x0
		   0x011168E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011168EC
		   // 
		   // ──── Block 133 else (==) ────────────────────
		   0x011168E8:  B812F9EB     BL $-0x1bb518
		   // ──── Block 134 if (!=) ────────────────────
		   0x011168EC:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x011168F0:  00009FE7     LDR r0, [pc, r0]
		   0x011168F4:  086096E5     LDR r6, [r6, 0x8]
		   0x011168F8:  000090E5     LDR r0, [r0]
		   0x011168FC:  B012F9EB     BL $-0x1bb538
		   0x01116900:  0010A0E3     MOV r1, 0x0
		   0x01116904:  0070A0E1     MOV r7, r0
		   0x01116908:  BC7BFFEB     BL $-0x21108
		   0x0111690C:  000057E3     CMPS r0, r7, 0x0
		   0x01116910:  0000001A     BNE $+0x8  // if (!=) goto 0x01116918
		   // 
		   // ──── Block 135 else (==) ────────────────────
		   0x01116914:  AD12F9EB     BL $-0x1bb544
		   // ──── Block 136 if (!=) ────────────────────
		   0x01116918:  088087E5     STR r8, [r7, 0x8]
		   0x0111691C:  000056E3     CMPS r0, r6, 0x0
		   0x01116920:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01116924:  0C0087E5     STR r0, [r7, 0xc]
		   0x01116928:  0000001A     BNE $+0x8  // if (!=) goto 0x01116930
		   // 
		   // ──── Block 137 else (==) ────────────────────
		   0x0111692C:  A712F9EB     BL $-0x1bb55c
		   // ──── Block 138 if (!=) ────────────────────
		   0x01116930:  100096E5     LDR r0, [r6, 0x10]
		   0x01116934:  085096E5     LDR r5, [r6, 0x8]
		   0x01116938:  0C4096E5     LDR r4, [r6, 0xc]
		   0x0111693C:  010080E2     ADD r0, r0, 0x1
		   0x01116940:  4C119FE5     LDR r1, [pc, 0x14c]
		   0x01116944:  000055E3     CMPS r0, r5, 0x0
		   0x01116948:  01109FE7     LDR r1, [pc, r1]
		   0x0111694C:  100086E5     STR r0, [r6, 0x10]
		   0x01116950:  008091E5     LDR r8, [r1]
		   0x01116954:  0000001A     BNE $+0x8  // if (!=) goto 0x0111695C
		   // 
		   // ──── Block 139 else (==) ────────────────────
		   0x01116958:  9C12F9EB     BL $-0x1bb588
		   // ──── Block 140 if (!=) ────────────────────
		   0x0111695C:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01116960:  000054E1     CMPS r0, r4, r0
		   0x01116964:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x0111697C
		   // 
		   // ──── Block 141 else (< (unsigned)) ────────────────────
		   0x01116968:  010084E2     ADD r0, r4, 0x1
		   0x0111696C:  0C0086E5     STR r0, [r6, 0xc]
		   0x01116970:  040185E0     ADD r0, r5, r4, lsl 2
		   0x01116974:  107080E5     STR r7, [r0, 0x10]
		   0x01116978:  050000EA     B $+0x1c  // goto 0x01116994
		   // ──── Block 142 if (>= (unsigned)) ────────────────────
		   0x0111697C:  100098E5     LDR r0, [r8, 0x10]
		   0x01116980:  0710A0E1     MOV r1, r7
		   0x01116984:  600090E5     LDR r0, [r0, 0x60]
		   0x01116988:  382090E5     LDR r2, [r0, 0x38]
		   0x0111698C:  0600A0E1     MOV r0, r6
		   0x01116990:  89706BEB     BL $+0x1adc22c  // CALL → List<object>.AddWithResize
		   // ──── Block 143 ──────────────────────────────
		   0x01116994:  04709DE5     LDR r7, [sp, 0x4]
		   0x01116998:  019089E2     ADD sb, sb, 0x1
		   0x0111699C:  A6FFFFEA     B $-0x160
		   // ──── Block 144 if (>=) ────────────────────
		   0x011169A0:  08009DE5     LDR r0, [sp, 0x8]
		   0x011169A4:  0A90A0E1     MOV sb, r10
		   0x011169A8:  010080E2     ADD r0, r0, 0x1
		   0x011169AC:  08008DE5     STR r0, [sp, 0x8]
		   0x011169B0:  58FFFFEA     B $-0x298
		   // ──── Block 145 if (==) ────────────────────
		   0x011169B4:  000090E5     LDR r0, [r0]
		   0x011169B8:  8112F9EB     BL $-0x1bb5f4
		   0x011169BC:  0040A0E1     MOV r4, r0
		   0x011169C0:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x011169C4:  00009FE7     LDR r0, [pc, r0]
		   0x011169C8:  001090E5     LDR r1, [r0]
		   0x011169CC:  0400A0E1     MOV r0, r4
		   0x011169D0:  766E6BEB     BL $+0x1adb9e0  // CALL → List<object>..ctor
		   0x011169D4:  984089E5     STR r4, [sb, 0x98]
		   // ──── Block 146 if (>=) ────────────────────
		   0x011169D8:  0CD08DE2     ADD sp, sp, 0xc
		   0x011169DC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x011169E0:  1E5E1103     TSTSEQ r5, r1, 0x1e0
		   0x011169E4:  7C39F602     RSCSEQ r3, r6, 0x1f0000
		   0x011169E8:  003AF602     RSCSEQ r3, r6, 0x0
		   0x011169EC:  4038F602     RSCSEQ r3, r6, 0x400000
		   0x011169F0:  EC39F602     RSCSEQ r3, r6, 0x3b0000
		   0x011169F4:  E439F602     RSCSEQ r3, r6, 0x390000
		   0x011169F8:  DC39F602     RSCSEQ r3, r6, 0x370000
		   0x011169FC:  D439F602     RSCSEQ r3, r6, 0x350000
		   0x01116A00:  CC39F602     RSCSEQ r3, r6, 0x330000
		   0x01116A04:  C439F602     RSCSEQ r3, r6, 0x310000
		   0x01116A08:  BC39F602     RSCSEQ r3, r6, 0x2f0000
		   0x01116A0C:  B439F602     RSCSEQ r3, r6, 0x2d0000
		   0x01116A10:  B004F602     RSCSEQ r0, r6, 0xb0000000
		   0x01116A14:  A039F602     RSCSEQ r3, r6, 0x280000
		   0x01116A18:  9428F602     RSCSEQ r2, r6, 0x940000
		   0x01116A1C:  8C39F602     RSCSEQ r3, r6, 0x230000
		   0x01116A20:  8439F602     RSCSEQ r3, r6, 0x210000
		   0x01116A24:  7C39F602     RSCSEQ r3, r6, 0x1f0000
		   0x01116A28:  7439F602     RSCSEQ r3, r6, 0x1d0000
		   0x01116A2C:  6C39F602     RSCSEQ r3, r6, 0x1b0000
		   0x01116A30:  6439F602     RSCSEQ r3, r6, 0x190000
		   0x01116A34:  5437F602     RSCSEQ r3, r6, 0x1500000
		   0x01116A38:  1028F602     RSCSEQ r2, r6, 0x100000
		   0x01116A3C:  9837F602     RSCSEQ r3, r6, 0x2600000
		   0x01116A40:  FC35F602     RSCSEQ r3, r6, 0x3f000000
		   0x01116A44:  B826F602     RSCSEQ r2, r6, 0xb800000
		   0x01116A48:  4036F602     RSCSEQ r3, r6, 0x4000000
		   0x01116A4C:  A434F602     RSCSEQ r3, r6, 0xa4000000
		   0x01116A50:  6025F602     RSCSEQ r2, r6, 0x18000000
		   0x01116A54:  E834F602     RSCSEQ r3, r6, 0xe8000000
		   0x01116A58:  0435F602     RSCSEQ r3, r6, 0x1000000
		   0x01116A5C:  0835F602     RSCSEQ r3, r6, 0x2000000
		   0x01116A60:  E434F602     RSCSEQ r3, r6, 0xe4000000
		   0x01116A64:  DC33F602     RSCSEQ r3, r6, 0x70000003
		   0x01116A68:  A433F602     RSCSEQ r3, r6, 0x90000002
		   0x01116A6C:  6033F602     RSCSEQ r3, r6, 0x80000001
		   0x01116A70:  2033F602     RSCSEQ r3, r6, 0x80000000
		   0x01116A74:  D832F602     RSCSEQ r3, r6, 0x8000000d
		   0x01116A78:  D832F602     RSCSEQ r3, r6, 0x8000000d
		   0x01116A7C:  A832F602     RSCSEQ r3, r6, 0x8000000a
		   0x01116A80:  7C32F602     RSCSEQ r3, r6, 0xc0000007
		   0x01116A84:  4432F602     RSCSEQ r3, r6, 0x40000004
		   0x01116A88:  F831F602     RSCSEQ r3, r6, 0x3e
		   0x01116A8C:  A431F602     RSCSEQ r3, r6, 0x29
		   0x01116A90:  5C31F602     RSCSEQ r3, r6, 0x17
		   0x01116A94:  0831F602     RSCSEQ r3, r6, 0x2
		   0x01116A98:  9030F602     RSCSEQ r3, r6, 0x90
		*/
	}

	// RVA: 0x1115D34 Offset: 0x1115D34 VA: 0x1115D34
	private static void FlexValuesUpdated() {
		/* Disassembly (ARM32, 135 instructions, 0x21C bytes):
		   // CFG: 28 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01115D34:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01115D38:  74429FE5     LDR r4, [pc, 0x274]
		   0x01115D3C:  04408FE0     ADD r4, pc, r4
		   0x01115D40:  0000D4E5     LDRB r0, [r4]
		   0x01115D44:  000050E3     CMPS r0, r0, 0x0
		   0x01115D48:  1600001A     BNE $+0x60  // if (!=) goto 0x01115DA8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01115D4C:  64029FE5     LDR r0, [pc, 0x264]
		   0x01115D50:  00009FE7     LDR r0, [pc, r0]
		   0x01115D54:  0115F9EB     BL $-0x1babf4
		   0x01115D58:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x01115D5C:  00009FE7     LDR r0, [pc, r0]
		   0x01115D60:  FE14F9EB     BL $-0x1bac00
		   0x01115D64:  54029FE5     LDR r0, [pc, 0x254]
		   0x01115D68:  00009FE7     LDR r0, [pc, r0]
		   0x01115D6C:  FB14F9EB     BL $-0x1bac0c
		   0x01115D70:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x01115D74:  00009FE7     LDR r0, [pc, r0]
		   0x01115D78:  F814F9EB     BL $-0x1bac18
		   0x01115D7C:  44029FE5     LDR r0, [pc, 0x244]
		   0x01115D80:  00009FE7     LDR r0, [pc, r0]
		   0x01115D84:  F514F9EB     BL $-0x1bac24
		   0x01115D88:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x01115D8C:  00009FE7     LDR r0, [pc, r0]
		   0x01115D90:  F214F9EB     BL $-0x1bac30
		   0x01115D94:  34029FE5     LDR r0, [pc, 0x234]
		   0x01115D98:  00009FE7     LDR r0, [pc, r0]
		   0x01115D9C:  EF14F9EB     BL $-0x1bac3c
		   0x01115DA0:  0100A0E3     MOV r0, 0x1
		   0x01115DA4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115DA8:  24029FE5     LDR r0, [pc, 0x224]
		   0x01115DAC:  00009FE7     LDR r0, [pc, r0]
		   0x01115DB0:  000090E5     LDR r0, [r0]
		   0x01115DB4:  741090E5     LDR r1, [r0, 0x74]
		   0x01115DB8:  000051E3     CMPS r0, r1, 0x0
		   0x01115DBC:  0000001A     BNE $+0x8  // if (!=) goto 0x01115DC4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01115DC0:  3315F9EB     BL $-0x1bab2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01115DC4:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x01115DC8:  00009FE7     LDR r0, [pc, r0]
		   0x01115DCC:  001090E5     LDR r1, [r0]
		   0x01115DD0:  04029FE5     LDR r0, [pc, 0x204]
		   0x01115DD4:  00009FE7     LDR r0, [pc, r0]
		   0x01115DD8:  000090E5     LDR r0, [r0]
		   0x01115DDC:  0020A0E3     MOV r2, 0x0
		   0x01115DE0:  0030A0E3     MOV r3, 0x0
		   0x01115DE4:  62CEFDEB     BL $-0x8c670
		   0x01115DE8:  0010A0E3     MOV r1, 0x0
		   0x01115DEC:  0040A0E1     MOV r4, r0
		   0x01115DF0:  800976EB     BL $+0x1d82608  // CALL → String.IsNullOrEmpty
		   0x01115DF4:  000050E3     CMPS r0, r0, 0x0
		   0x01115DF8:  1D00000A     BEQ $+0x7c  // if (==) goto 0x01115E74
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01115DFC:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x01115E00:  00009FE7     LDR r0, [pc, r0]
		   0x01115E04:  004090E5     LDR r4, [r0]
		   0x01115E08:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01115E0C:  000050E3     CMPS r0, r0, 0x0
		   0x01115E10:  0200001A     BNE $+0x10  // if (!=) goto 0x01115E20
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01115E14:  0400A0E1     MOV r0, r4
		   0x01115E18:  3D03FAEB     BL $-0x17f304
		   0x01115E1C:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x01115E20:  080090E5     LDR r0, [r0, 0x8]
		   0x01115E24:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01115E28:  010011E3     TSTS r0, r1, 0x1
		   0x01115E2C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115E34
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01115E30:  2003FAEB     BL $-0x17f378
		   // ──── Block 9 if (!=) ────────────────────
		   0x01115E34:  741090E5     LDR r1, [r0, 0x74]
		   0x01115E38:  000051E3     CMPS r0, r1, 0x0
		   0x01115E3C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115E44
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01115E40:  1315F9EB     BL $-0x1babac
		   // ──── Block 11 if (!=) ────────────────────
		   0x01115E44:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01115E48:  080090E5     LDR r0, [r0, 0x8]
		   0x01115E4C:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01115E50:  010011E3     TSTS r0, r1, 0x1
		   0x01115E54:  0000001A     BNE $+0x8  // if (!=) goto 0x01115E5C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01115E58:  1603FAEB     BL $-0x17f3a0
		   // ──── Block 13 if (!=) ────────────────────
		   0x01115E5C:  80119FE5     LDR r1, [pc, 0x180]
		   0x01115E60:  01109FE7     LDR r1, [pc, r1]
		   0x01115E64:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01115E68:  001091E5     LDR r1, [r1]
		   0x01115E6C:  000090E5     LDR r0, [r0]
		   0x01115E70:  0F0000EA     B $+0x44  // goto 0x01115EB4
		   // ──── Block 14 if (==) ────────────────────
		   0x01115E74:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x01115E78:  00009FE7     LDR r0, [pc, r0]
		   0x01115E7C:  000090E5     LDR r0, [r0]
		   0x01115E80:  741090E5     LDR r1, [r0, 0x74]
		   0x01115E84:  000051E3     CMPS r0, r1, 0x0
		   0x01115E88:  0000001A     BNE $+0x8  // if (!=) goto 0x01115E90
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01115E8C:  0015F9EB     BL $-0x1babf8
		   // ──── Block 16 if (!=) ────────────────────
		   0x01115E90:  54019FE5     LDR r0, [pc, 0x154]
		   0x01115E94:  00009FE7     LDR r0, [pc, r0]
		   0x01115E98:  002090E5     LDR r2, [r0]
		   0x01115E9C:  0400A0E1     MOV r0, r4
		   0x01115EA0:  0210A0E3     MOV r1, 0x2
		   0x01115EA4:  03A222EB     BL $+0x8a8814  // CALL → JsonUtil.Deserialize<object>
		   0x01115EA8:  40119FE5     LDR r1, [pc, 0x140]
		   0x01115EAC:  01109FE7     LDR r1, [pc, r1]
		   0x01115EB0:  001091E5     LDR r1, [r1]
		   // ──── Block 17 ──────────────────────────────
		   0x01115EB4:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x01115EB8:  040081E5     STR r0, [r1, 0x4]
		   0x01115EBC:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01115EC0:  030000EA     B $+0x14  // goto 0x01115ED4
		   0x01115EC4:  020000EA     B $+0x10  // goto 0x01115ED4
		   0x01115EC8:  010000EA     B $+0xc  // goto 0x01115ED4
		   0x01115ECC:  000000EA     B $+0x8  // goto 0x01115ED4
		   0x01115ED0:  FFFFFFEA     B $+0x4  // goto 0x01115ED4
		   // ──── Block 23 ──────────────────────────────
		   0x01115ED4:  010051E3     CMPS r0, r1, 0x1
		   0x01115ED8:  3300001A     BNE $+0xd4
		   0x01115EDC:  F93AFCEB     BL $-0xf1414
		   0x01115EE0:  0040A0E1     MOV r4, r0
		   0x01115EE4:  08019FE5     LDR r0, [pc, 0x108]
		   0x01115EE8:  00009FE7     LDR r0, [pc, r0]
		   0x01115EEC:  9F14F9EB     BL $-0x1bad7c
		   0x01115EF0:  001094E5     LDR r1, [r4]
		   0x01115EF4:  001091E5     LDR r1, [r1]
		   0x01115EF8:  5016F9EB     BL $-0x1ba6b8
		   0x01115EFC:  000050E3     CMPS r0, r0, 0x0
		   0x01115F00:  2000000A     BEQ $+0x88
		   0x01115F04:  004094E5     LDR r4, [r4]
		   0x01115F08:  223BFCEB     BL $-0xf1370
		   0x01115F0C:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x01115F10:  00009FE7     LDR r0, [pc, r0]
		   0x01115F14:  9514F9EB     BL $-0x1bada4
		   0x01115F18:  741090E5     LDR r1, [r0, 0x74]
		   0x01115F1C:  000051E3     CMPS r0, r1, 0x0
		   0x01115F20:  0000001A     BNE $+0x8  // if (!=) goto 0x01115F28
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x01115F24:  DA14F9EB     BL $-0x1bac90
		   // ──── Block 27 if (!=) ────────────────────
		   0x01115F28:  0400A0E1     MOV r0, r4
		   0x01115F2C:  0010A0E3     MOV r1, 0x0
		   0x01115F30:  95883BEB     BL $+0xee225c  // CALL → sub_1FF818C
		   0x01115F34:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01115F38:  00009FE7     LDR r0, [pc, r0]
		   0x01115F3C:  8B14F9EB     BL $-0x1badcc
		   0x01115F40:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01115F44:  040090E5     LDR r0, [r0, 0x4]
		   0x01115F48:  000050E3     CMPS r0, r0, 0x0
		   0x01115F4C:  3088BD18     POPNE {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x11151F8 Offset: 0x11151F8 VA: 0x11151F8
	private void GetSpriteAsset(RemoteSprite remoteSpriteForLoad, Action<Sprite> complete) {
		/* Disassembly (ARM32, 195 instructions, 0x30C bytes):
		   // CFG: 29 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011151F8:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x011151FC:  08D04DE2     SUB sp, sp, 0x8
		   0x01115200:  B0529FE5     LDR r5, [pc, 0x2b0]
		   0x01115204:  0060A0E1     MOV r6, r0
		   0x01115208:  0270A0E1     MOV r7, r2
		   0x0111520C:  0180A0E1     MOV r8, r1
		   0x01115210:  05508FE0     ADD r5, pc, r5
		   0x01115214:  0000D5E5     LDRB r0, [r5]
		   0x01115218:  000050E3     CMPS r0, r0, 0x0
		   0x0111521C:  1900001A     BNE $+0x6c  // if (!=) goto 0x01115288
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01115220:  94029FE5     LDR r0, [pc, 0x294]
		   0x01115224:  00009FE7     LDR r0, [pc, r0]
		   0x01115228:  CC17F9EB     BL $-0x1ba0c8
		   0x0111522C:  8C029FE5     LDR r0, [pc, 0x28c]
		   0x01115230:  00009FE7     LDR r0, [pc, r0]
		   0x01115234:  C917F9EB     BL $-0x1ba0d4
		   0x01115238:  84029FE5     LDR r0, [pc, 0x284]
		   0x0111523C:  00009FE7     LDR r0, [pc, r0]
		   0x01115240:  C617F9EB     BL $-0x1ba0e0
		   0x01115244:  7C029FE5     LDR r0, [pc, 0x27c]
		   0x01115248:  00009FE7     LDR r0, [pc, r0]
		   0x0111524C:  C317F9EB     BL $-0x1ba0ec
		   0x01115250:  74029FE5     LDR r0, [pc, 0x274]
		   0x01115254:  00009FE7     LDR r0, [pc, r0]
		   0x01115258:  C017F9EB     BL $-0x1ba0f8
		   0x0111525C:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x01115260:  00009FE7     LDR r0, [pc, r0]
		   0x01115264:  BD17F9EB     BL $-0x1ba104
		   0x01115268:  64029FE5     LDR r0, [pc, 0x264]
		   0x0111526C:  00009FE7     LDR r0, [pc, r0]
		   0x01115270:  BA17F9EB     BL $-0x1ba110
		   0x01115274:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x01115278:  00009FE7     LDR r0, [pc, r0]
		   0x0111527C:  B717F9EB     BL $-0x1ba11c
		   0x01115280:  0100A0E3     MOV r0, 0x1
		   0x01115284:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01115288:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x0111528C:  00009FE7     LDR r0, [pc, r0]
		   0x01115290:  000090E5     LDR r0, [r0]
		   0x01115294:  4A18F9EB     BL $-0x1b9ed0
		   0x01115298:  0010A0E3     MOV r1, 0x0
		   0x0111529C:  0050A0E1     MOV r5, r0
		   0x011152A0:  0040A0E3     MOV r4, 0x0
		   0x011152A4:  50007EEB     BL $+0x1f80148  // CALL → Object..ctor
		   0x011152A8:  000055E3     CMPS r0, r5, 0x0
		   0x011152AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011152B4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011152B0:  4618F9EB     BL $-0x1b9ee0
		   // ──── Block 4 if (!=) ────────────────────
		   0x011152B4:  24029FE5     LDR r0, [pc, 0x224]
		   0x011152B8:  00009FE7     LDR r0, [pc, r0]
		   0x011152BC:  087085E5     STR r7, [r5, 0x8]
		   0x011152C0:  000090E5     LDR r0, [r0]
		   0x011152C4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011152C8:  000090E5     LDR r0, [r0]
		   0x011152CC:  000050E3     CMPS r0, r0, 0x0
		   0x011152D0:  28409015     LDRNE r4, [r0, 0x28]
		   0x011152D4:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x011152D8:  0C4085E5     STR r4, [r5, 0xc]
		   0x011152DC:  050050E3     CMPS r0, r0, 0x5
		   0x011152E0:  0C00001A     BNE $+0x38  // if (!=) goto 0x01115318
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011152E4:  284096E5     LDR r4, [r6, 0x28]
		   0x011152E8:  000054E3     CMPS r0, r4, 0x0
		   0x011152EC:  0000001A     BNE $+0x8  // if (!=) goto 0x011152F4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011152F0:  3618F9EB     BL $-0x1b9f20
		   // ──── Block 7 if (!=) ────────────────────
		   0x011152F4:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x011152F8:  00009FE7     LDR r0, [pc, r0]
		   0x011152FC:  184094E5     LDR r4, [r4, 0x18]
		   0x01115300:  000090E5     LDR r0, [r0]
		   0x01115304:  2E18F9EB     BL $-0x1b9f40
		   0x01115308:  0060A0E1     MOV r6, r0
		   0x0111530C:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x01115310:  00009FE7     LDR r0, [pc, r0]
		   0x01115314:  0E0000EA     B $+0x40  // goto 0x01115354
		   // ──── Block 8 if (!=) ────────────────────
		   0x01115318:  1C00D6E5     LDRB r0, [r6, 0x1c]
		   0x0111531C:  000050E3     CMPS r0, r0, 0x0
		   0x01115320:  1800000A     BEQ $+0x68  // if (==) goto 0x01115388
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x01115324:  244096E5     LDR r4, [r6, 0x24]
		   0x01115328:  000054E3     CMPS r0, r4, 0x0
		   0x0111532C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115334
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01115330:  2618F9EB     BL $-0x1b9f60
		   // ──── Block 11 if (!=) ────────────────────
		   0x01115334:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x01115338:  00009FE7     LDR r0, [pc, r0]
		   0x0111533C:  184094E5     LDR r4, [r4, 0x18]
		   0x01115340:  000090E5     LDR r0, [r0]
		   0x01115344:  1E18F9EB     BL $-0x1b9f80
		   0x01115348:  0060A0E1     MOV r6, r0
		   0x0111534C:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x01115350:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 12 ──────────────────────────────
		   0x01115354:  002090E5     LDR r2, [r0]
		   0x01115358:  0600A0E1     MOV r0, r6
		   0x0111535C:  0510A0E1     MOV r1, r5
		   0x01115360:  0030A0E3     MOV r3, 0x0
		   0x01115364:  B74452EB     BL $+0x14912e4  // CALL → Action<object>..ctor
		   0x01115368:  000054E3     CMPS r0, r4, 0x0
		   0x0111536C:  0000001A     BNE $+0x8  // if (!=) goto 0x01115374
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01115370:  1618F9EB     BL $-0x1b9fa0
		   // ──── Block 14 if (!=) ────────────────────
		   0x01115374:  0400A0E1     MOV r0, r4
		   0x01115378:  0610A0E1     MOV r1, r6
		   0x0111537C:  08D08DE2     ADD sp, sp, 0x8
		   0x01115380:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x01115384:  1BD5FFEA     B $-0xab8c
		   // ──── Block 15 if (==) ────────────────────
		   0x01115388:  64019FE5     LDR r0, [pc, 0x164]
		   0x0111538C:  00009FE7     LDR r0, [pc, r0]
		   0x01115390:  000090E5     LDR r0, [r0]
		   0x01115394:  741090E5     LDR r1, [r0, 0x74]
		   0x01115398:  000051E3     CMPS r0, r1, 0x0
		   0x0111539C:  0000001A     BNE $+0x8  // if (!=) goto 0x011153A4
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x011153A0:  BB17F9EB     BL $-0x1ba10c
		   // ──── Block 17 if (!=) ────────────────────
		   0x011153A4:  0800A0E1     MOV r0, r8
		   0x011153A8:  0010A0E3     MOV r1, 0x0
		   0x011153AC:  928B3BEB     BL $+0xee2e50  // CALL → sub_1FF81FC
		   0x011153B0:  000050E3     CMPS r0, r0, 0x0
		   0x011153B4:  1600000A     BEQ $+0x60  // if (==) goto 0x01115414
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x011153B8:  000058E3     CMPS r0, r8, 0x0
		   0x011153BC:  0000001A     BNE $+0x8  // if (!=) goto 0x011153C4
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x011153C0:  0218F9EB     BL $-0x1b9ff0
		   // ──── Block 20 if (!=) ────────────────────
		   0x011153C4:  000098E5     LDR r0, [r8]
		   0x011153C8:  002190E5     LDR r2, [r0, 0x100]
		   0x011153CC:  041190E5     LDR r1, [r0, 0x104]
		   0x011153D0:  0800A0E1     MOV r0, r8
		   0x011153D4:  32FF2FE1     BLX r2  // virtual call: vtable+0x100
		   0x011153D8:  000050E3     CMPS r0, r0, 0x0
		   0x011153DC:  1600000A     BEQ $+0x60  // if (==) goto 0x0111543C
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x011153E0:  084095E5     LDR r4, [r5, 0x8]
		   0x011153E4:  000054E3     CMPS r0, r4, 0x0
		   0x011153E8:  3000000A     BEQ $+0xc8  // if (==) goto 0x011154B0
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x011153EC:  000098E5     LDR r0, [r8]
		   0x011153F0:  302190E5     LDR r2, [r0, 0x130]
		   0x011153F4:  341190E5     LDR r1, [r0, 0x134]
		   0x011153F8:  0800A0E1     MOV r0, r8
		   0x011153FC:  32FF2FE1     BLX r2  // virtual call: vtable+0x130
		   0x01115400:  0010A0E1     MOV r1, r0
		   0x01115404:  0C3094E5     LDR r3, [r4, 0xc]
		   0x01115408:  142094E5     LDR r2, [r4, 0x14]
		   0x0111540C:  200094E5     LDR r0, [r4, 0x20]
		   0x01115410:  060000EA     B $+0x20  // goto 0x01115430
		   // ──── Block 23 if (==) ────────────────────
		   0x01115414:  080095E5     LDR r0, [r5, 0x8]
		   0x01115418:  000050E3     CMPS r0, r0, 0x0
		   0x0111541C:  2300000A     BEQ $+0x94  // if (==) goto 0x011154B0
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x01115420:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01115424:  142090E5     LDR r2, [r0, 0x14]
		   0x01115428:  200090E5     LDR r0, [r0, 0x20]
		   0x0111542C:  0C1095E5     LDR r1, [r5, 0xc]
		   // ──── Block 25 ──────────────────────────────
		   0x01115430:  08D08DE2     ADD sp, sp, 0x8
		   0x01115434:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x01115438:  13FF2FE1     BX r3
		   // ──── Block 26 if (==) ────────────────────
		   0x0111543C:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01115440:  00009FE7     LDR r0, [pc, r0]
		   0x01115444:  000090E5     LDR r0, [r0]
		   0x01115448:  DD17F9EB     BL $-0x1ba084
		   0x0111544C:  0060A0E1     MOV r6, r0
		   0x01115450:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01115454:  0510A0E1     MOV r1, r5
		   0x01115458:  0030A0E3     MOV r3, 0x0
		   0x0111545C:  0040A0E3     MOV r4, 0x0
		   0x01115460:  00009FE7     LDR r0, [pc, r0]
		   0x01115464:  002090E5     LDR r2, [r0]
		   0x01115468:  0600A0E1     MOV r0, r6
		   0x0111546C:  754452EB     BL $+0x14911dc  // CALL → Action<object>..ctor
		   0x01115470:  88009FE5     LDR r0, [pc, 0x88]
		   0x01115474:  00009FE7     LDR r0, [pc, r0]
		   0x01115478:  002098E5     LDR r2, [r8]
		   0x0111547C:  001090E5     LDR r1, [r0]
		   0x01115480:  BC02D1E1     LDRH r0, [r1, 0x2c]
		   0x01115484:  800182E0     ADD r0, r2, r0, lsl 3
		   0x01115488:  C40090E5     LDR r0, [r0, 0xc4]
		   0x0111548C:  7F17F9EB     BL $-0x1ba1fc
		   0x01115490:  047090E5     LDR r7, [r0, 0x4]
		   0x01115494:  0050A0E1     MOV r5, r0
		   0x01115498:  0800A0E1     MOV r0, r8
		   0x0111549C:  0610A0E1     MOV r1, r6
		   0x011154A0:  0020A0E3     MOV r2, 0x0
		   0x011154A4:  0030A0E3     MOV r3, 0x0
		   0x011154A8:  F040CDE1     STRD r4, r5, [sp]
		   0x011154AC:  37FF2FE1     BLX r7  // virtual call: Object.Finalize
		   // ──── Block 27 (from 2 paths) ──────────────────
		   0x011154B0:  08D08DE2     ADD sp, sp, 0x8
		   0x011154B4:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x011154B8:  306C1103     TSTSEQ r6, r1, 0x3000
		   0x011154BC:  B832F602     RSCSEQ r3, r6, 0x8000000b
		   0x011154C0:  983EF602     RSCSEQ r3, r6, 0x980
		   0x011154C4:  FC12F602     RSCSEQ r1, r6, 0xc000000f
		   0x011154C8:  BC47F602     RSCSEQ r4, r6, 0x2f00000
		   0x011154CC:  B447F602     RSCSEQ r4, r6, 0x2d00000
		   0x011154D0:  AC47F602     RSCSEQ r4, r6, 0x2b00000
		   0x011154D4:  A447F602     RSCSEQ r4, r6, 0x2900000
		   0x011154D8:  9C47F602     RSCSEQ r4, r6, 0x2700000
		   0x011154DC:  8847F602     RSCSEQ r4, r6, 0x2200000
		   0x011154E0:  103EF602     RSCSEQ r3, r6, 0x100
		   0x011154E4:  E431F602     RSCSEQ r3, r6, 0x39
		   0x011154E8:  F846F602     RSCSEQ r4, r6, 0xf800000
		   0x011154EC:  A431F602     RSCSEQ r3, r6, 0x29
		   0x011154F0:  BC46F602     RSCSEQ r4, r6, 0xbc00000
		   0x011154F4:  AC11F602     RSCSEQ r1, r6, 0x2b
		   0x011154F8:  9C30F602     RSCSEQ r3, r6, 0x9c
		   0x011154FC:  B045F602     RSCSEQ r4, r6, 0x2c000000
		   0x01115500:  9045F602     RSCSEQ r4, r6, 0x24000000
		*/
	}

	// RVA: 0x111578C Offset: 0x111578C VA: 0x111578C
	public void .ctor() {
		/* Disassembly (ARM32, 45 instructions, 0xB4 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111578C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01115790:  94509FE5     LDR r5, [pc, 0x94]
		   0x01115794:  0040A0E1     MOV r4, r0
		   0x01115798:  05508FE0     ADD r5, pc, r5
		   0x0111579C:  0000D5E5     LDRB r0, [r5]
		   0x011157A0:  000050E3     CMPS r0, r0, 0x0
		   0x011157A4:  0700001A     BNE $+0x24  // if (!=) goto 0x011157C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011157A8:  80009FE5     LDR r0, [pc, 0x80]
		   0x011157AC:  00009FE7     LDR r0, [pc, r0]
		   0x011157B0:  6A16F9EB     BL $-0x1ba650
		   0x011157B4:  78009FE5     LDR r0, [pc, 0x78]
		   0x011157B8:  00009FE7     LDR r0, [pc, r0]
		   0x011157BC:  6716F9EB     BL $-0x1ba65c
		   0x011157C0:  0100A0E3     MOV r0, 0x1
		   0x011157C4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011157C8:  68009FE5     LDR r0, [pc, 0x68]
		   0x011157CC:  0110A0E3     MOV r1, 0x1
		   0x011157D0:  FE25A0E3     MOV r2, 0x3f800000
		   0x011157D4:  0060E0E3     MVN r6, r0, 0x0
		   0x011157D8:  00009FE7     LDR r0, [pc, r0]
		   0x011157DC:  BC10C4E5     STRB r1, [r4, 0xbc]
		   0x011157E0:  0A10A0E3     MOV r1, 0xa
		   0x011157E4:  A42084E5     STR r2, [r4, 0xa4]
		   0x011157E8:  000090E5     LDR r0, [r0]
		   0x011157EC:  A81084E5     STR r1, [r4, 0xa8]
		   0x011157F0:  AC1084E5     STR r1, [r4, 0xac]
		   0x011157F4:  186084E5     STR r6, [r4, 0x18]
		   0x011157F8:  F116F9EB     BL $-0x1ba434
		   0x011157FC:  0050A0E1     MOV r5, r0
		   0x01115800:  34009FE5     LDR r0, [pc, 0x34]
		   0x01115804:  00009FE7     LDR r0, [pc, r0]
		   0x01115808:  001090E5     LDR r1, [r0]
		   0x0111580C:  0500A0E1     MOV r0, r5
		   0x01115810:  E6726BEB     BL $+0x1adcba0  // CALL → List<object>..ctor
		   0x01115814:  D46084E5     STR r6, [r4, 0xd4]
		   0x01115818:  0400A0E1     MOV r0, r4
		   0x0111581C:  C45084E5     STR r5, [r4, 0xc4]
		   0x01115820:  0010A0E3     MOV r1, 0x0
		   0x01115824:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01115828:  EFFE7DEA     B $+0x1f7fbc4  // TAIL CALL → Object..ctor
		   0x0111582C:  A9661103     TSTSEQ r6, r1, 0xa900000
		   0x01115830:  9832F602     RSCSEQ r3, r6, 0x80000009
		   0x01115834:  9432F602     RSCSEQ r3, r6, 0x40000009
		   0x01115838:  7432F602     RSCSEQ r3, r6, 0x40000007
		   0x0111583C:  4032F602     RSCSEQ r3, r6, 0x4
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1116AA4 Offset: 0x1116AA4 VA: 0x1116AA4
	private bool <SetChain>b__70_0(ItemObject item) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116AA4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01116AA8:  0150A0E1     MOV r5, r1
		   0x01116AAC:  0040A0E1     MOV r4, r0
		   0x01116AB0:  000051E3     CMPS r0, r1, 0x0
		   0x01116AB4:  0000001A     BNE $+0x8  // if (!=) goto 0x01116ABC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116AB8:  4412F9EB     BL $-0x1bb6e8
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116ABC:  180095E5     LDR r0, [r5, 0x18]
		   0x01116AC0:  040040E0     SUB r0, r0, r4
		   0x01116AC4:  100F6FE1     CLZ r0, r0
		   0x01116AC8:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x01116ACC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
public sealed class GetItemSprite : MulticastDelegate // TypeDefIndex: 1310
{

	// Methods

	// RVA: 0x1116AD0 Offset: 0x1116AD0 VA: 0x1116AD0
	public void .ctor(object object, IntPtr method) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116AD0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01116AD4:  0040A0E1     MOV r4, r0
		   0x01116AD8:  142080E5     STR r2, [r0, 0x14]
		   0x01116ADC:  040092E5     LDR r0, [r2, 0x4]
		   0x01116AE0:  0150A0E1     MOV r5, r1
		   0x01116AE4:  080084E5     STR r0, [r4, 0x8]
		   0x01116AE8:  0200A0E1     MOV r0, r2
		   0x01116AEC:  2E60D2E5     LDRB r6, [r2, 0x2e]
		   0x01116AF0:  101084E5     STR r1, [r4, 0x10]
		   0x01116AF4:  204084E5     STR r4, [r4, 0x20]
		   0x01116AF8:  C011F9EB     BL $-0x1bb8f8
		   0x01116AFC:  000050E3     CMPS r0, r0, 0x0
		   0x01116B00:  0400000A     BEQ $+0x18  // if (==) goto 0x01116B18
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01116B04:  010056E3     CMPS r0, r6, 0x1
		   0x01116B08:  0C00001A     BNE $+0x38  // if (!=) goto 0x01116B40
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x01116B0C:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01116B10:  00008FE0     ADD r0, pc, r0
		   0x01116B14:  100000EA     B $+0x48  // goto 0x01116B5C
		   // ──── Block 3 if (==) ────────────────────
		   0x01116B18:  000056E3     CMPS r0, r6, 0x0
		   0x01116B1C:  0C00000A     BEQ $+0x38  // if (==) goto 0x01116B54
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x01116B20:  000055E3     CMPS r0, r5, 0x0
		   0x01116B24:  0500001A     BNE $+0x1c  // if (!=) goto 0x01116B40
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01116B28:  48109FE5     LDR r1, [pc, 0x48]
		   0x01116B2C:  0000A0E3     MOV r0, 0x0
		   0x01116B30:  01108FE0     ADD r1, pc, r1
		   0x01116B34:  2B12F9EB     BL $-0x1bb74c
		   0x01116B38:  0010A0E3     MOV r1, 0x0
		   0x01116B3C:  CF11F9EB     BL $-0x1bb8bc
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x01116B40:  080094E5     LDR r0, [r4, 0x8]
		   0x01116B44:  101094E5     LDR r1, [r4, 0x10]
		   0x01116B48:  0C0084E5     STR r0, [r4, 0xc]
		   0x01116B4C:  201084E5     STR r1, [r4, 0x20]
		   0x01116B50:  020000EA     B $+0x10  // goto 0x01116B60
		   // ──── Block 7 if (==) ────────────────────
		   0x01116B54:  18009FE5     LDR r0, [pc, 0x18]
		   0x01116B58:  00008FE0     ADD r0, pc, r0
		   // ──── Block 8 ──────────────────────────────
		   0x01116B5C:  0C0084E5     STR r0, [r4, 0xc]
		   // ──── Block 9 ──────────────────────────────
		   0x01116B60:  14009FE5     LDR r0, [pc, 0x14]
		   0x01116B64:  00008FE0     ADD r0, pc, r0
		   0x01116B68:  1C0084E5     STR r0, [r4, 0x1c]
		   0x01116B6C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x01116B70:  04BAB3FF     CDP2 p:, ;, c11, c3, c4, 0
		   0x01116B74:  8CB9B3FF     CDP2 p9, ;, c11, c3, c12, 4
		   0x01116B78:  01D766FF     CDP2 p7, 6, c13, c6, c1, 0
		   0x01116B7C:  40B9B3FF     CDP2 p9, ;, c11, c3, c0, 2
		*/
	}

	// RVA: 0x1116B80 Offset: 0x1116B80 VA: 0x1116B80 Slot: 13
	public virtual void Invoke(Action<Sprite> callback) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116B80:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01116B84:  142090E5     LDR r2, [r0, 0x14]
		   0x01116B88:  200090E5     LDR r0, [r0, 0x20]
		   0x01116B8C:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x1116B90 Offset: 0x1116B90 VA: 0x1116B90 Slot: 14
	public virtual IAsyncResult BeginInvoke(Action<Sprite> callback, AsyncCallback __callback, object object) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116B90:  00482DE9     PUSH {fp, lr}
		   0x01116B94:  08D04DE2     SUB sp, sp, 0x8
		   0x01116B98:  00C0A0E3     MOV ip, 0x0
		   0x01116B9C:  02108DE8     STM sp, {r1, ip}
		   0x01116BA0:  0D10A0E1     MOV r1, sp
		   0x01116BA4:  5811F9EB     BL $-0x1bba98
		   0x01116BA8:  08D08DE2     ADD sp, sp, 0x8
		   0x01116BAC:  0088BDE8     POP {fp, pc}
		*/
	}

	// RVA: 0x1116BB0 Offset: 0x1116BB0 VA: 0x1116BB0 Slot: 15
	public virtual void EndInvoke(IAsyncResult result) {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116BB0:  0100A0E1     MOV r0, r1
		   0x01116BB4:  0010A0E3     MOV r1, 0x0
		   0x01116BB8:  5411F9EA     B $-0x1bbaa8
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ItemSpeedUpCostData // TypeDefIndex: 1311
{

	// Fields
	public int containerSpeedUpCost; // 0x8
	public int unlockCost; // 0xC
	public int containerSpeedUpCostEnergy; // 0x10
	public int unlockCostEnergy; // 0x14
	public bool useEnergyAsCurrency; // 0x18

	// Methods

	// RVA: 0x1116BBC Offset: 0x1116BBC VA: 0x1116BBC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116BBC:  0010A0E3     MOV r1, 0x0
		   0x01116BC0:  09FA7DEA     B $+0x1f7e82c  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class BubbleConfigData // TypeDefIndex: 1312
{

	// Fields
	public float chance; // 0x8
	public int costToUnlock; // 0xC
	public bool bubbleDropLimitException; // 0x10

	// Methods

	// RVA: 0x1116BC4 Offset: 0x1116BC4 VA: 0x1116BC4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116BC4:  0010A0E3     MOV r1, 0x0
		   0x01116BC8:  07FA7DEA     B $+0x1f7e824  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class PricesConfig // TypeDefIndex: 1313
{

	// Fields
	[JsonProperty("id")]
	public string id; // 0x8
	[JsonProperty("gems")]
	public int gems; // 0xC
	[JsonProperty("coins")]
	public int coins; // 0x10

	// Methods

	// RVA: 0x1116BCC Offset: 0x1116BCC VA: 0x1116BCC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116BCC:  0010A0E3     MOV r1, 0x0
		   0x01116BD0:  05FA7DEA     B $+0x1f7e81c  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemSerializedReferenceChance // TypeDefIndex: 1314
{

	// Fields
	public string itemCode; // 0x8
	public float chance; // 0xC

	// Methods

	// RVA: 0x1116BD4 Offset: 0x1116BD4 VA: 0x1116BD4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116BD4:  0010A0E3     MOV r1, 0x0
		   0x01116BD8:  03FA7DEA     B $+0x1f7e814  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemSerializedReferenceList // TypeDefIndex: 1315
{

	// Fields
	public List<ItemData.ItemSerializedReferenceChance> items; // 0x8

	// Methods

	// RVA: 0x1116BDC Offset: 0x1116BDC VA: 0x1116BDC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116BDC:  0010A0E3     MOV r1, 0x0
		   0x01116BE0:  01FA7DEA     B $+0x1f7e80c  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass86_0 // TypeDefIndex: 1316
{

	// Fields
	public string id; // 0x8

	// Methods

	// RVA: 0x1115A5C Offset: 0x1115A5C VA: 0x1115A5C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01115A5C:  0010A0E3     MOV r1, 0x0
		   0x01115A60:  61FE7DEA     B $+0x1f7f98c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1116BE4 Offset: 0x1116BE4 VA: 0x1116BE4
	internal bool <GetCostCoins>b__0(ItemData.PricesConfig i) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116BE4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01116BE8:  0140A0E1     MOV r4, r1
		   0x01116BEC:  0050A0E1     MOV r5, r0
		   0x01116BF0:  000051E3     CMPS r0, r1, 0x0
		   0x01116BF4:  0000001A     BNE $+0x8  // if (!=) goto 0x01116BFC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116BF8:  F411F9EB     BL $-0x1bb828
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116BFC:  081095E5     LDR r1, [r5, 0x8]
		   0x01116C00:  0020A0E3     MOV r2, 0x0
		   0x01116C04:  080094E5     LDR r0, [r4, 0x8]
		   0x01116C08:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01116C0C:  7FBF75EA     B $+0x1d6fe04  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass87_0 // TypeDefIndex: 1317
{

	// Fields
	public string id; // 0x8

	// Methods

	// RVA: 0x1115C3C Offset: 0x1115C3C VA: 0x1115C3C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01115C3C:  0010A0E3     MOV r1, 0x0
		   0x01115C40:  E9FD7DEA     B $+0x1f7f7ac  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1116C10 Offset: 0x1116C10 VA: 0x1116C10
	internal bool <GetCostGems>b__0(ItemData.PricesConfig i) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116C10:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01116C14:  0140A0E1     MOV r4, r1
		   0x01116C18:  0050A0E1     MOV r5, r0
		   0x01116C1C:  000051E3     CMPS r0, r1, 0x0
		   0x01116C20:  0000001A     BNE $+0x8  // if (!=) goto 0x01116C28
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116C24:  E911F9EB     BL $-0x1bb854
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116C28:  081095E5     LDR r1, [r5, 0x8]
		   0x01116C2C:  0020A0E3     MOV r2, 0x0
		   0x01116C30:  080094E5     LDR r0, [r4, 0x8]
		   0x01116C34:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01116C38:  74BF75EA     B $+0x1d6fdd8  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass92_0 // TypeDefIndex: 1318
{

	// Fields
	public Action<Sprite> complete; // 0x8
	public Sprite notReadySprite; // 0xC

	// Methods

	// RVA: 0x1116A9C Offset: 0x1116A9C VA: 0x1116A9C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01116A9C:  0010A0E3     MOV r1, 0x0
		   0x01116AA0:  51FA7DEA     B $+0x1f7e94c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1116C3C Offset: 0x1116C3C VA: 0x1116C3C
	internal void <GetSpriteAsset>b__0(Sprite s) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116C3C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01116C40:  84609FE5     LDR r6, [pc, 0x84]
		   0x01116C44:  0050A0E1     MOV r5, r0
		   0x01116C48:  0140A0E1     MOV r4, r1
		   0x01116C4C:  06608FE0     ADD r6, pc, r6
		   0x01116C50:  0000D6E5     LDRB r0, [r6]
		   0x01116C54:  000050E3     CMPS r0, r0, 0x0
		   0x01116C58:  0400001A     BNE $+0x18  // if (!=) goto 0x01116C70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116C5C:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01116C60:  00009FE7     LDR r0, [pc, r0]
		   0x01116C64:  3D11F9EB     BL $-0x1bbb04
		   0x01116C68:  0100A0E3     MOV r0, 0x1
		   0x01116C6C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116C70:  086095E5     LDR r6, [r5, 0x8]
		   0x01116C74:  000056E3     CMPS r0, r6, 0x0
		   0x01116C78:  1200000A     BEQ $+0x50  // if (==) goto 0x01116CC8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116C7C:  50009FE5     LDR r0, [pc, 0x50]
		   0x01116C80:  00009FE7     LDR r0, [pc, r0]
		   0x01116C84:  000090E5     LDR r0, [r0]
		   0x01116C88:  741090E5     LDR r1, [r0, 0x74]
		   0x01116C8C:  000051E3     CMPS r0, r1, 0x0
		   0x01116C90:  0000001A     BNE $+0x8  // if (!=) goto 0x01116C98
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116C94:  7E11F9EB     BL $-0x1bba00
		   // ──── Block 5 if (!=) ────────────────────
		   0x01116C98:  0400A0E1     MOV r0, r4
		   0x01116C9C:  0010A0E3     MOV r1, 0x0
		   0x01116CA0:  0020A0E3     MOV r2, 0x0
		   0x01116CA4:  7C843BEB     BL $+0xee11f8  // CALL → sub_1FF7E9C
		   0x01116CA8:  000050E3     CMPS r0, r0, 0x0
		   0x01116CAC:  0C3096E5     LDR r3, [r6, 0xc]
		   0x01116CB0:  0C409515     LDRNE r4, [r5, 0xc]
		   0x01116CB4:  142096E5     LDR r2, [r6, 0x14]
		   0x01116CB8:  200096E5     LDR r0, [r6, 0x20]
		   0x01116CBC:  0410A0E1     MOV r1, r4
		   0x01116CC0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01116CC4:  13FF2FE1     BX r3
		   // ──── Block 6 if (==) ────────────────────
		   0x01116CC8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x01116CCC:  F6511103     TSTSEQ r5, r1, 0x8000003d
		   0x01116CD0:  D8F8F502     RSCSEQ pc, r5, 0xd80000
		   0x01116CD4:  B8F8F502     RSCSEQ pc, r5, 0xb80000
		*/
	}

	// RVA: 0x1116CD8 Offset: 0x1116CD8 VA: 0x1116CD8
	internal void <GetSpriteAsset>b__1(Sprite s) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116CD8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01116CDC:  84609FE5     LDR r6, [pc, 0x84]
		   0x01116CE0:  0050A0E1     MOV r5, r0
		   0x01116CE4:  0140A0E1     MOV r4, r1
		   0x01116CE8:  06608FE0     ADD r6, pc, r6
		   0x01116CEC:  0000D6E5     LDRB r0, [r6]
		   0x01116CF0:  000050E3     CMPS r0, r0, 0x0
		   0x01116CF4:  0400001A     BNE $+0x18  // if (!=) goto 0x01116D0C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116CF8:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01116CFC:  00009FE7     LDR r0, [pc, r0]
		   0x01116D00:  1611F9EB     BL $-0x1bbba0
		   0x01116D04:  0100A0E3     MOV r0, 0x1
		   0x01116D08:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116D0C:  086095E5     LDR r6, [r5, 0x8]
		   0x01116D10:  000056E3     CMPS r0, r6, 0x0
		   0x01116D14:  1200000A     BEQ $+0x50  // if (==) goto 0x01116D64
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116D18:  50009FE5     LDR r0, [pc, 0x50]
		   0x01116D1C:  00009FE7     LDR r0, [pc, r0]
		   0x01116D20:  000090E5     LDR r0, [r0]
		   0x01116D24:  741090E5     LDR r1, [r0, 0x74]
		   0x01116D28:  000051E3     CMPS r0, r1, 0x0
		   0x01116D2C:  0000001A     BNE $+0x8  // if (!=) goto 0x01116D34
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116D30:  5711F9EB     BL $-0x1bba9c
		   // ──── Block 5 if (!=) ────────────────────
		   0x01116D34:  0400A0E1     MOV r0, r4
		   0x01116D38:  0010A0E3     MOV r1, 0x0
		   0x01116D3C:  0020A0E3     MOV r2, 0x0
		   0x01116D40:  55843BEB     BL $+0xee115c  // CALL → sub_1FF7E9C
		   0x01116D44:  000050E3     CMPS r0, r0, 0x0
		   0x01116D48:  0C3096E5     LDR r3, [r6, 0xc]
		   0x01116D4C:  0C409515     LDRNE r4, [r5, 0xc]
		   0x01116D50:  142096E5     LDR r2, [r6, 0x14]
		   0x01116D54:  200096E5     LDR r0, [r6, 0x20]
		   0x01116D58:  0410A0E1     MOV r1, r4
		   0x01116D5C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01116D60:  13FF2FE1     BX r3
		   // ──── Block 6 if (==) ────────────────────
		   0x01116D64:  7080BDE8     POP {r4, r5, r6, pc}
		   0x01116D68:  5B511103     TSTSEQ r5, r1, 0xc0000016
		   0x01116D6C:  3CF8F502     RSCSEQ pc, r5, 0x3c0000
		   0x01116D70:  1CF8F502     RSCSEQ pc, r5, 0x1c0000
		*/
	}

	// RVA: 0x1116D74 Offset: 0x1116D74 VA: 0x1116D74
	internal void <GetSpriteAsset>b__2(Sprite s) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116D74:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01116D78:  84609FE5     LDR r6, [pc, 0x84]
		   0x01116D7C:  0050A0E1     MOV r5, r0
		   0x01116D80:  0140A0E1     MOV r4, r1
		   0x01116D84:  06608FE0     ADD r6, pc, r6
		   0x01116D88:  0000D6E5     LDRB r0, [r6]
		   0x01116D8C:  000050E3     CMPS r0, r0, 0x0
		   0x01116D90:  0400001A     BNE $+0x18  // if (!=) goto 0x01116DA8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116D94:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01116D98:  00009FE7     LDR r0, [pc, r0]
		   0x01116D9C:  EF10F9EB     BL $-0x1bbc3c
		   0x01116DA0:  0100A0E3     MOV r0, 0x1
		   0x01116DA4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116DA8:  086095E5     LDR r6, [r5, 0x8]
		   0x01116DAC:  000056E3     CMPS r0, r6, 0x0
		   0x01116DB0:  1200000A     BEQ $+0x50  // if (==) goto 0x01116E00
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116DB4:  50009FE5     LDR r0, [pc, 0x50]
		   0x01116DB8:  00009FE7     LDR r0, [pc, r0]
		   0x01116DBC:  000090E5     LDR r0, [r0]
		   0x01116DC0:  741090E5     LDR r1, [r0, 0x74]
		   0x01116DC4:  000051E3     CMPS r0, r1, 0x0
		   0x01116DC8:  0000001A     BNE $+0x8  // if (!=) goto 0x01116DD0
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116DCC:  3011F9EB     BL $-0x1bbb38
		   // ──── Block 5 if (!=) ────────────────────
		   0x01116DD0:  0400A0E1     MOV r0, r4
		   0x01116DD4:  0010A0E3     MOV r1, 0x0
		   0x01116DD8:  0020A0E3     MOV r2, 0x0
		   0x01116DDC:  2E843BEB     BL $+0xee10c0  // CALL → sub_1FF7E9C
		   0x01116DE0:  000050E3     CMPS r0, r0, 0x0
		   0x01116DE4:  0C3096E5     LDR r3, [r6, 0xc]
		   0x01116DE8:  0C409515     LDRNE r4, [r5, 0xc]
		   0x01116DEC:  142096E5     LDR r2, [r6, 0x14]
		   0x01116DF0:  200096E5     LDR r0, [r6, 0x20]
		   0x01116DF4:  0410A0E1     MOV r1, r4
		   0x01116DF8:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01116DFC:  13FF2FE1     BX r3
		   // ──── Block 6 if (==) ────────────────────
		   0x01116E00:  7080BDE8     POP {r4, r5, r6, pc}
		   0x01116E04:  C0501103     TSTSEQ r5, r1, 0xc0
		   0x01116E08:  A0F7F502     RSCSEQ pc, r5, 0x2800000
		   0x01116E0C:  80F7F502     RSCSEQ pc, r5, 0x2000000
		*/
	}
}
