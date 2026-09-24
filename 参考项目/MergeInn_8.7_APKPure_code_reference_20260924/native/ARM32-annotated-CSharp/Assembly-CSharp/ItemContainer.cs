// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemContainer : ItemMerging, IBoosterSpeedup, IContainerIsEmpty, IOutOfEnergyTrigger, IEnergyConsumption // TypeDefIndex: 1308
{

	// Fields
	public const string CONTAINER_PREDEFINED_INDEX = "ProfileStorage_containerPredefinedIndex";
	private const int DEFAULT_CHARGES = 1;
	private const float RARE_ITEM_PERCENTAGE_LIMIT = 0.02;
	[SerializeField]
	protected EnergyEffect energyEffect; // 0x8C
	[SerializeField]
	private FXClockAnimationController clockFX; // 0x90
	[SerializeField]
	protected SparklesEffect sparklesEffect; // 0x94
	[SerializeField]
	private Image energyImage; // 0x98
	[SerializeField]
	private Sprite energySpriteX1; // 0x9C
	[SerializeField]
	private Sprite energySpriteX2; // 0xA0
	[CompilerGenerated]
	private int <speedUpCost>k__BackingField; // 0xA4
	private float cooldown; // 0xA8
	private bool useEnergyForSpeedup; // 0xAC
	protected ItemObject[] items; // 0xB0
	protected ItemObject[] predefinedItems; // 0xB4
	protected float[] weights; // 0xB8
	private readonly WaitForEndOfFrame oneFrame; // 0xBC
	private Coroutine timerCoroutine; // 0xC0
	private DiscountCost dCost; // 0xC4
	private int energyCost; // 0xCC
	private float containerSpeedupCostMultiplierEnergy; // 0xD0
	private float containerSpeedupCostMultiplier; // 0xD4
	private long speedUpFreeThresholdEnergy; // 0xD8
	private Action<bool, int, bool> speedUpCostUpdate; // 0xE0
	[CompilerGenerated]
	private Action<ItemData, Cell> onSpawnItem; // 0xE4
	[CompilerGenerated]
	private ChargeData <baseChargeData>k__BackingField; // 0xE8
	[CompilerGenerated]
	private ChargeData <currentChargeData>k__BackingField; // 0xEC
	[CompilerGenerated]
	private float <rechargeTime>k__BackingField; // 0xF0
	[CompilerGenerated]
	private Action <containerIsEmpty>k__BackingField; // 0xF4
	[CompilerGenerated]
	private Action<Action> <useContainerWithoutEnergy>k__BackingField; // 0xF8
	[CompilerGenerated]
	private Action <selectEmptyContainerWithoutEnergy>k__BackingField; // 0xFC
	[CompilerGenerated]
	private Action <buttonSpeedUpEnergyTrigger>k__BackingField; // 0x100

	// Properties
	public int speedUpCost { get; set; }
	public int itemsReadyToSpawn { get; }
	public ChargeData baseChargeData { get; set; }
	public ChargeData currentChargeData { get; set; }
	public float rechargeTime { get; set; }
	public bool hasCapacity { get; }
	public Action containerIsEmpty { get; set; }
	public Action<Action> useContainerWithoutEnergy { get; set; }
	public Action selectEmptyContainerWithoutEnergy { get; set; }
	public Action buttonSpeedUpEnergyTrigger { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1110B74 Offset: 0x1110B74 VA: 0x1110B74
	public int get_speedUpCost() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110B74:  A40090E5     LDR r0, [r0, 0xa4]
		   0x01110B78:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110B7C Offset: 0x1110B7C VA: 0x1110B7C
	private void set_speedUpCost(int value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110B7C:  A41080E5     STR r1, [r0, 0xa4]
		   0x01110B80:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110B84 Offset: 0x1110B84 VA: 0x1110B84
	public void add_onSpawnItem(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110B84:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01110B88:  98409FE5     LDR r4, [pc, 0x98]
		   0x01110B8C:  0090A0E1     MOV sb, r0
		   0x01110B90:  0180A0E1     MOV r8, r1
		   0x01110B94:  04408FE0     ADD r4, pc, r4
		   0x01110B98:  0000D4E5     LDRB r0, [r4]
		   0x01110B9C:  000050E3     CMPS r0, r0, 0x0
		   0x01110BA0:  0400001A     BNE $+0x18  // if (!=) goto 0x01110BB8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110BA4:  80009FE5     LDR r0, [pc, 0x80]
		   0x01110BA8:  00009FE7     LDR r0, [pc, r0]
		   0x01110BAC:  6B29F9EB     BL $-0x1b5a4c
		   0x01110BB0:  0100A0E3     MOV r0, 0x1
		   0x01110BB4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110BB8:  E400B9E5     LDR r0, [sb, 0xe4]!
		   0x01110BBC:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01110BC0:  0AA09FE7     LDR r10, [pc, r10]
		   0x01110BC4:  0810A0E1     MOV r1, r8
		   0x01110BC8:  0020A0E3     MOV r2, 0x0
		   0x01110BCC:  0060A0E1     MOV r6, r0
		   0x01110BD0:  0070A0E3     MOV r7, 0x0
		   0x01110BD4:  57227EEB     BL $+0x1f88964  // CALL → Delegate.Combine
		   0x01110BD8:  000050E3     CMPS r0, r0, 0x0
		   0x01110BDC:  0A00000A     BEQ $+0x30  // if (==) goto 0x01110C0C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01110BE0:  00509AE5     LDR r5, [r10]
		   0x01110BE4:  0040A0E1     MOV r4, r0
		   0x01110BE8:  0510A0E1     MOV r1, r5
		   0x01110BEC:  A929F9EB     BL $-0x1b5954
		   0x01110BF0:  0070A0E1     MOV r7, r0
		   0x01110BF4:  000050E3     CMPS r0, r0, 0x0
		   0x01110BF8:  0300001A     BNE $+0x14  // if (!=) goto 0x01110C0C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01110BFC:  0400A0E1     MOV r0, r4
		   0x01110C00:  0510A0E1     MOV r1, r5
		   0x01110C04:  DF2AF9EB     BL $-0x1b547c
		   0x01110C08:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01110C0C:  0900A0E1     MOV r0, sb
		   0x01110C10:  0710A0E1     MOV r1, r7
		   0x01110C14:  0620A0E1     MOV r2, r6
		   0x01110C18:  1616FAEB     BL $-0x17a7a0
		   0x01110C1C:  060050E1     CMPS r0, r0, r6
		   0x01110C20:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01110C24:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01110C28:  82B21103     TSTSEQ fp, r1, 0x20000008
		   0x01110C2C:  F883F602     RSCSEQ r8, r6, 0xe0000003
		   0x01110C30:  E083F602     RSCSEQ r8, r6, 0x80000003
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110C34 Offset: 0x1110C34 VA: 0x1110C34
	public void remove_onSpawnItem(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110C34:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01110C38:  98409FE5     LDR r4, [pc, 0x98]
		   0x01110C3C:  0090A0E1     MOV sb, r0
		   0x01110C40:  0180A0E1     MOV r8, r1
		   0x01110C44:  04408FE0     ADD r4, pc, r4
		   0x01110C48:  0000D4E5     LDRB r0, [r4]
		   0x01110C4C:  000050E3     CMPS r0, r0, 0x0
		   0x01110C50:  0400001A     BNE $+0x18  // if (!=) goto 0x01110C68
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110C54:  80009FE5     LDR r0, [pc, 0x80]
		   0x01110C58:  00009FE7     LDR r0, [pc, r0]
		   0x01110C5C:  3F29F9EB     BL $-0x1b5afc
		   0x01110C60:  0100A0E3     MOV r0, 0x1
		   0x01110C64:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110C68:  E400B9E5     LDR r0, [sb, 0xe4]!
		   0x01110C6C:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01110C70:  0AA09FE7     LDR r10, [pc, r10]
		   0x01110C74:  0810A0E1     MOV r1, r8
		   0x01110C78:  0020A0E3     MOV r2, 0x0
		   0x01110C7C:  0060A0E1     MOV r6, r0
		   0x01110C80:  0070A0E3     MOV r7, 0x0
		   0x01110C84:  A9227EEB     BL $+0x1f88aac  // CALL → Delegate.Remove
		   0x01110C88:  000050E3     CMPS r0, r0, 0x0
		   0x01110C8C:  0A00000A     BEQ $+0x30  // if (==) goto 0x01110CBC
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01110C90:  00509AE5     LDR r5, [r10]
		   0x01110C94:  0040A0E1     MOV r4, r0
		   0x01110C98:  0510A0E1     MOV r1, r5
		   0x01110C9C:  7D29F9EB     BL $-0x1b5a04
		   0x01110CA0:  0070A0E1     MOV r7, r0
		   0x01110CA4:  000050E3     CMPS r0, r0, 0x0
		   0x01110CA8:  0300001A     BNE $+0x14  // if (!=) goto 0x01110CBC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01110CAC:  0400A0E1     MOV r0, r4
		   0x01110CB0:  0510A0E1     MOV r1, r5
		   0x01110CB4:  B32AF9EB     BL $-0x1b552c
		   0x01110CB8:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01110CBC:  0900A0E1     MOV r0, sb
		   0x01110CC0:  0710A0E1     MOV r1, r7
		   0x01110CC4:  0620A0E1     MOV r2, r6
		   0x01110CC8:  EA15FAEB     BL $-0x17a850
		   0x01110CCC:  060050E1     CMPS r0, r0, r6
		   0x01110CD0:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01110CD4:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01110CD8:  D3B11103     TSTSEQ fp, r1, 0xc0000034
		   0x01110CDC:  4883F602     RSCSEQ r8, r6, 0x20000001
		   0x01110CE0:  3083F602     RSCSEQ r8, r6, 0xc0000000
		*/
	}

	// RVA: 0x1110CE4 Offset: 0x1110CE4 VA: 0x1110CE4 Slot: 39
	public int get_itemsReadyToSpawn() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110CE4:  10402DE9     PUSH {r4, lr}
		   0x01110CE8:  EC4090E5     LDR r4, [r0, 0xec]
		   0x01110CEC:  000054E3     CMPS r0, r4, 0x0
		   0x01110CF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01110CF8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110CF4:  B529F9EB     BL $-0x1b5924
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110CF8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01110CFC:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D00 Offset: 0x1110D00 VA: 0x1110D00
	public ChargeData get_baseChargeData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D00:  E80090E5     LDR r0, [r0, 0xe8]
		   0x01110D04:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D08 Offset: 0x1110D08 VA: 0x1110D08
	private void set_baseChargeData(ChargeData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D08:  E81080E5     STR r1, [r0, 0xe8]
		   0x01110D0C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D10 Offset: 0x1110D10 VA: 0x1110D10
	public ChargeData get_currentChargeData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D10:  EC0090E5     LDR r0, [r0, 0xec]
		   0x01110D14:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D18 Offset: 0x1110D18 VA: 0x1110D18
	private void set_currentChargeData(ChargeData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D18:  EC1080E5     STR r1, [r0, 0xec]
		   0x01110D1C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D20 Offset: 0x1110D20 VA: 0x1110D20
	public float get_rechargeTime() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D20:  F00090E5     LDR r0, [r0, 0xf0]
		   0x01110D24:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D28 Offset: 0x1110D28 VA: 0x1110D28
	private void set_rechargeTime(float value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D28:  F01080E5     STR r1, [r0, 0xf0]
		   0x01110D2C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1110D30 Offset: 0x1110D30 VA: 0x1110D30 Slot: 38
	public bool get_hasCapacity() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110D30:  10402DE9     PUSH {r4, lr}
		   0x01110D34:  EC4090E5     LDR r4, [r0, 0xec]
		   0x01110D38:  000054E3     CMPS r0, r4, 0x0
		   0x01110D3C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110D44
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110D40:  A229F9EB     BL $-0x1b5970
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110D44:  0C1094E5     LDR r1, [r4, 0xc]
		   0x01110D48:  0000A0E3     MOV r0, 0x0
		   0x01110D4C:  000051E3     CMPS r0, r1, 0x0
		   0x01110D50:  010000C3     MOVGT r0, 0x1
		   0x01110D54:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D58 Offset: 0x1110D58 VA: 0x1110D58 Slot: 36
	public Action get_containerIsEmpty() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D58:  F40090E5     LDR r0, [r0, 0xf4]
		   0x01110D5C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D60 Offset: 0x1110D60 VA: 0x1110D60 Slot: 37
	public void set_containerIsEmpty(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D60:  F41080E5     STR r1, [r0, 0xf4]
		   0x01110D64:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D68 Offset: 0x1110D68 VA: 0x1110D68 Slot: 41
	public Action<Action> get_useContainerWithoutEnergy() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D68:  F80090E5     LDR r0, [r0, 0xf8]
		   0x01110D6C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D70 Offset: 0x1110D70 VA: 0x1110D70 Slot: 42
	public void set_useContainerWithoutEnergy(Action<Action> value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D70:  F81080E5     STR r1, [r0, 0xf8]
		   0x01110D74:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D78 Offset: 0x1110D78 VA: 0x1110D78 Slot: 43
	public Action get_selectEmptyContainerWithoutEnergy() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D78:  FC0090E5     LDR r0, [r0, 0xfc]
		   0x01110D7C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D80 Offset: 0x1110D80 VA: 0x1110D80 Slot: 44
	public void set_selectEmptyContainerWithoutEnergy(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D80:  FC1080E5     STR r1, [r0, 0xfc]
		   0x01110D84:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D88 Offset: 0x1110D88 VA: 0x1110D88 Slot: 45
	public Action get_buttonSpeedUpEnergyTrigger() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D88:  000190E5     LDR r0, [r0, 0x100]
		   0x01110D8C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1110D90 Offset: 0x1110D90 VA: 0x1110D90 Slot: 46
	public void set_buttonSpeedUpEnergyTrigger(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110D90:  001180E5     STR r1, [r0, 0x100]
		   0x01110D94:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1110D98 Offset: 0x1110D98 VA: 0x1110D98
	public static ChargeData CalculateCharge(ItemContainer item1, ItemContainer item2, ChargeData resChargeData) {
		/* Disassembly (ARM32, 128 instructions, 0x200 bytes):
		   // CFG: 29 blocks, 29 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01110D98:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01110D9C:  04D04DE2     SUB sp, sp, 0x4
		   0x01110DA0:  D0419FE5     LDR r4, [pc, 0x1d0]
		   0x01110DA4:  0070A0E1     MOV r7, r0
		   0x01110DA8:  0280A0E1     MOV r8, r2
		   0x01110DAC:  01B0A0E1     MOV fp, r1
		   0x01110DB0:  04408FE0     ADD r4, pc, r4
		   0x01110DB4:  0000D4E5     LDRB r0, [r4]
		   0x01110DB8:  000050E3     CMPS r0, r0, 0x0
		   0x01110DBC:  0A00001A     BNE $+0x30  // if (!=) goto 0x01110DEC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01110DC0:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x01110DC4:  00009FE7     LDR r0, [pc, r0]
		   0x01110DC8:  E428F9EB     BL $-0x1b5c68
		   0x01110DCC:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x01110DD0:  00009FE7     LDR r0, [pc, r0]
		   0x01110DD4:  E128F9EB     BL $-0x1b5c74
		   0x01110DD8:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x01110DDC:  00009FE7     LDR r0, [pc, r0]
		   0x01110DE0:  DE28F9EB     BL $-0x1b5c80
		   0x01110DE4:  0100A0E3     MOV r0, 0x1
		   0x01110DE8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01110DEC:  000058E3     CMPS r0, r8, 0x0
		   0x01110DF0:  4A00000A     BEQ $+0x130  // if (==) goto 0x01110F20
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01110DF4:  0C0098E5     LDR r0, [r8, 0xc]
		   0x01110DF8:  000050E3     CMPS r0, r0, 0x0
		   0x01110DFC:  470000DA     BLE $+0x124  // if (<=) goto 0x01110F20
		   // 
		   // ──── Block 4 else (>) ────────────────────
		   0x01110E00:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x01110E04:  00009FE7     LDR r0, [pc, r0]
		   0x01110E08:  000090E5     LDR r0, [r0]
		   0x01110E0C:  6C29F9EB     BL $-0x1b5a48
		   0x01110E10:  0010A0E3     MOV r1, 0x0
		   0x01110E14:  0050A0E1     MOV r5, r0
		   0x01110E18:  73117EEB     BL $+0x1f845d4  // CALL → Object..ctor
		   0x01110E1C:  000057E3     CMPS r0, r7, 0x0
		   0x01110E20:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E28
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01110E24:  6929F9EB     BL $-0x1b5a54
		   // ──── Block 6 if (!=) ────────────────────
		   0x01110E28:  EC6097E5     LDR r6, [r7, 0xec]
		   0x01110E2C:  000056E3     CMPS r0, r6, 0x0
		   0x01110E30:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E38
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01110E34:  6529F9EB     BL $-0x1b5a64
		   // ──── Block 8 if (!=) ────────────────────
		   0x01110E38:  E84097E5     LDR r4, [r7, 0xe8]
		   0x01110E3C:  08A096E5     LDR r10, [r6, 0x8]
		   0x01110E40:  000054E3     CMPS r0, r4, 0x0
		   0x01110E44:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E4C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01110E48:  6029F9EB     BL $-0x1b5a78
		   // ──── Block 10 if (!=) ────────────────────
		   0x01110E4C:  EC6097E5     LDR r6, [r7, 0xec]
		   0x01110E50:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01110E54:  000056E3     CMPS r0, r6, 0x0
		   0x01110E58:  00008DE5     STR r0, [sp]
		   0x01110E5C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E64
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01110E60:  5A29F9EB     BL $-0x1b5a90
		   // ──── Block 12 if (!=) ────────────────────
		   0x01110E64:  0C6096E5     LDR r6, [r6, 0xc]
		   0x01110E68:  00005BE3     CMPS r0, fp, 0x0
		   0x01110E6C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E74
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01110E70:  5629F9EB     BL $-0x1b5aa0
		   // ──── Block 14 if (!=) ────────────────────
		   0x01110E74:  EC409BE5     LDR r4, [fp, 0xec]
		   0x01110E78:  000054E3     CMPS r0, r4, 0x0
		   0x01110E7C:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E84
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01110E80:  5229F9EB     BL $-0x1b5ab0
		   // ──── Block 16 if (!=) ────────────────────
		   0x01110E84:  01904AE2     SUB sb, r10, 0x1
		   0x01110E88:  E8709BE5     LDR r7, [fp, 0xe8]
		   0x01110E8C:  08A094E5     LDR r10, [r4, 0x8]
		   0x01110E90:  000057E3     CMPS r0, r7, 0x0
		   0x01110E94:  0000001A     BNE $+0x8  // if (!=) goto 0x01110E9C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01110E98:  4C29F9EB     BL $-0x1b5ac8
		   // ──── Block 18 if (!=) ────────────────────
		   0x01110E9C:  00009DE5     LDR r0, [sp]
		   0x01110EA0:  EC409BE5     LDR r4, [fp, 0xec]
		   0x01110EA4:  906929E0     MLA sb, r0, sb, r6
		   0x01110EA8:  0C6097E5     LDR r6, [r7, 0xc]
		   0x01110EAC:  000054E3     CMPS r0, r4, 0x0
		   0x01110EB0:  0000001A     BNE $+0x8  // if (!=) goto 0x01110EB8
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x01110EB4:  4529F9EB     BL $-0x1b5ae4
		   // ──── Block 20 if (!=) ────────────────────
		   0x01110EB8:  01004AE2     SUB r0, r10, 0x1
		   0x01110EBC:  0C1094E5     LDR r1, [r4, 0xc]
		   0x01110EC0:  0C7098E5     LDR r7, [r8, 0xc]
		   0x01110EC4:  961020E0     MLA r0, r6, r0, r1
		   0x01110EC8:  C91FC9E1     BIC r1, sb, sb, asr 31
		   0x01110ECC:  C00FC0E1     BIC r0, r0, r0, asr 31
		   0x01110ED0:  014080E0     ADD r4, r0, r1
		   0x01110ED4:  0710A0E1     MOV r1, r7
		   0x01110ED8:  0400A0E1     MOV r0, r4
		   0x01110EDC:  7D40FCEB     BL $-0xefe04
		   0x01110EE0:  904767E0     MLS r7, r0, r7, r4
		   0x01110EE4:  0060A0E1     MOV r6, r0
		   0x01110EE8:  000055E3     CMPS r0, r5, 0x0
		   0x01110EEC:  0000001A     BNE $+0x8  // if (!=) goto 0x01110EF4
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x01110EF0:  3629F9EB     BL $-0x1b5b20
		   // ──── Block 22 if (!=) ────────────────────
		   0x01110EF4:  000057E3     CMPS r0, r7, 0x0
		   0x01110EF8:  020086E2     ADD r0, r6, 0x2
		   0x01110EFC:  080085E5     STR r0, [r5, 0x8]
		   0x01110F00:  0C7085E5     STR r7, [r5, 0xc]
		   0x01110F04:  1800001A     BNE $+0x68  // if (!=) goto 0x01110F6C
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01110F08:  010086E2     ADD r0, r6, 0x1
		   0x01110F0C:  0C1098E5     LDR r1, [r8, 0xc]
		   0x01110F10:  010050E3     CMPS r0, r0, 0x1
		   0x01110F14:  0100A0D3     MOVLE r0, 0x1
		   0x01110F18:  F800C5E1     STRD r0, r1, [r5, 0x8]
		   0x01110F1C:  120000EA     B $+0x50  // goto 0x01110F6C
		   // ──── Block 24 (from 2 paths) ──────────────────
		   0x01110F20:  60009FE5     LDR r0, [pc, 0x60]
		   0x01110F24:  00009FE7     LDR r0, [pc, r0]
		   0x01110F28:  000090E5     LDR r0, [r0]
		   0x01110F2C:  741090E5     LDR r1, [r0, 0x74]
		   0x01110F30:  000051E3     CMPS r0, r1, 0x0
		   0x01110F34:  0000001A     BNE $+0x8  // if (!=) goto 0x01110F3C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01110F38:  D528F9EB     BL $-0x1b5ca4
		   // ──── Block 26 if (!=) ────────────────────
		   0x01110F3C:  48009FE5     LDR r0, [pc, 0x48]
		   0x01110F40:  0010A0E3     MOV r1, 0x0
		   0x01110F44:  00009FE7     LDR r0, [pc, r0]
		   0x01110F48:  000090E5     LDR r0, [r0]
		   0x01110F4C:  309C3BEB     BL $+0xee70c8  // CALL → sub_1FF8014
		   0x01110F50:  38009FE5     LDR r0, [pc, 0x38]
		   0x01110F54:  00009FE7     LDR r0, [pc, r0]
		   0x01110F58:  000090E5     LDR r0, [r0]
		   0x01110F5C:  1829F9EB     BL $-0x1b5b98
		   0x01110F60:  0010A0E3     MOV r1, 0x0
		   0x01110F64:  0050A0E1     MOV r5, r0
		   0x01110F68:  1F117EEB     BL $+0x1f84484  // CALL → Object..ctor
		   // ──── Block 27 if (!=) ────────────────────
		   0x01110F6C:  0500A0E1     MOV r0, r5
		   0x01110F70:  04D08DE2     ADD sp, sp, 0x4
		   0x01110F74:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x01110F78:  68B01103     TSTSEQ fp, r1, 0x68
		   0x01110F7C:  C48AF602     RSCSEQ r8, r6, 0xc4000
		   0x01110F80:  B857F602     RSCSEQ r5, r6, 0x2e00000
		   0x01110F84:  D08BF602     RSCSEQ r8, r6, 0x34000
		   0x01110F88:  6456F602     RSCSEQ r5, r6, 0x6400000
		   0x01110F8C:  688AF602     RSCSEQ r8, r6, 0x68000
		   0x01110F90:  3489F602     RSCSEQ r8, r6, 0xd0000
		   0x01110F94:  848AF602     RSCSEQ r8, r6, 0x84000
		*/
	}

	// RVA: 0x1110F98 Offset: 0x1110F98 VA: 0x1110F98
	public void SetListenerOnSpeedUpCost(Action<bool, int, bool> speedUpCostUpdate) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110F98:  E01080E5     STR r1, [r0, 0xe0]
		   0x01110F9C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1110FA0 Offset: 0x1110FA0 VA: 0x1110FA0
	public void RemoveSpeedUpListener() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110FA0:  0010A0E3     MOV r1, 0x0
		   0x01110FA4:  E01080E5     STR r1, [r0, 0xe0]
		   0x01110FA8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1110FAC Offset: 0x1110FAC VA: 0x1110FAC Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01110FAC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01110FB0:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x111196C Offset: 0x111196C VA: 0x111196C
	public void SetupCharges(ChargeData newChargeData) {
		/* Disassembly (ARM32, 20 instructions, 0x50 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111196C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01111970:  0040A0E1     MOV r4, r0
		   0x01111974:  340090E5     LDR r0, [r0, 0x34]
		   0x01111978:  0150A0E1     MOV r5, r1
		   0x0111197C:  EC1084E5     STR r1, [r4, 0xec]
		   0x01111980:  83DDFFEB     BL $-0x89ec
		   0x01111984:  000055E3     CMPS r0, r5, 0x0
		   0x01111988:  0000001A     BNE $+0x8  // if (!=) goto 0x01111990
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111198C:  8F26F9EB     BL $-0x1b65bc
		   // ──── Block 2 if (!=) ────────────────────
		   0x01111990:  E86094E5     LDR r6, [r4, 0xe8]
		   0x01111994:  085095E5     LDR r5, [r5, 0x8]
		   0x01111998:  000056E3     CMPS r0, r6, 0x0
		   0x0111199C:  0000001A     BNE $+0x8  // if (!=) goto 0x011119A4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011119A0:  8A26F9EB     BL $-0x1b65d0
		   // ──── Block 4 if (!=) ────────────────────
		   0x011119A4:  080096E5     LDR r0, [r6, 0x8]
		   0x011119A8:  000055E1     CMPS r0, r5, r0
		   0x011119AC:  7080BDB8     POPLT {r4, r5, r6, pc}
		   0x011119B0:  0400A0E1     MOV r0, r4
		   0x011119B4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x011119B8:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemContainer.CancelTimer
		*/
	}

	// RVA: 0x11119F0 Offset: 0x11119F0 VA: 0x11119F0 Slot: 19
	protected override void ReleaseTimers() {
		/* Disassembly (ARM32, 19 instructions, 0x4C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011119F0:  10402DE9     PUSH {r4, lr}
		   0x011119F4:  0040A0E1     MOV r4, r0
		   0x011119F8:  340090E5     LDR r0, [r0, 0x34]
		   0x011119FC:  0010A0E3     MOV r1, 0x0
		   0x01111A00:  EE99FFEB     BL $-0x19840
		   0x01111A04:  340094E5     LDR r0, [r4, 0x34]
		   0x01111A08:  AFDDFFEB     BL $-0x893c
		   0x01111A0C:  C00094E5     LDR r0, [r4, 0xc0]
		   0x01111A10:  000050E3     CMPS r0, r0, 0x0
		   0x01111A14:  0400A011     MOVNE r0, r4
		   0x01111A18:  59F3FF1B     BLNE $-0x3294
		   0x01111A1C:  8C4094E5     LDR r4, [r4, 0x8c]
		   0x01111A20:  000054E3     CMPS r0, r4, 0x0
		   0x01111A24:  0000001A     BNE $+0x8  // if (!=) goto 0x01111A2C
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x01111A28:  6826F9EB     BL $-0x1b6658
		   // ──── Block 3 if (!=) ────────────────────
		   0x01111A2C:  0400A0E1     MOV r0, r4
		   0x01111A30:  0010A0E3     MOV r1, 0x0
		   0x01111A34:  1040BDE8     POP {r4, lr}
		   0x01111A38:  C93810EA     B $+0x40e32c  // TAIL CALL → EnergyEffect.Hide
		*/
	}

	// RVA: 0x110E990 Offset: 0x110E990 VA: 0x110E990 Slot: 20
	public override void RemoveTweensCorotines() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E990:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110E994:  8C5090E5     LDR r5, [r0, 0x8c]
		   0x0110E998:  0040A0E1     MOV r4, r0
		   0x0110E99C:  000055E3     CMPS r0, r5, 0x0
		   0x0110E9A0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E9A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E9A4:  8932F9EB     BL $-0x1b35d4
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E9A8:  0500A0E1     MOV r0, r5
		   0x0110E9AC:  0010A0E3     MOV r1, 0x0
		   0x0110E9B0:  0060A0E3     MOV r6, 0x0
		   0x0110E9B4:  EA4410EB     BL $+0x4113b0  // CALL → EnergyEffect.Hide
		   0x0110E9B8:  C01094E5     LDR r1, [r4, 0xc0]
		   0x0110E9BC:  000051E3     CMPS r0, r1, 0x0
		   0x0110E9C0:  0300000A     BEQ $+0x14  // if (==) goto 0x0110E9D4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110E9C4:  0400A0E1     MOV r0, r4
		   0x0110E9C8:  0020A0E3     MOV r2, 0x0
		   0x0110E9CC:  65A53BEB     BL $+0xee959c  // CALL → sub_1FF7F68
		   0x0110E9D0:  C06084E5     STR r6, [r4, 0xc0]
		   // ──── Block 4 if (==) ────────────────────
		   0x0110E9D4:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x110E26C Offset: 0x110E26C VA: 0x110E26C Slot: 12
	public override void SetLockedState(bool isLocked) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110E26C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110E270:  0140A0E1     MOV r4, r1
		   0x0110E274:  0050A0E1     MOV r5, r0
		   0x0110E278:  92F3FFEB     BL $-0x31b0
		   0x0110E27C:  000095E5     LDR r0, [r5]
		   0x0110E280:  0410A0E1     MOV r1, r4
		   0x0110E284:  403290E5     LDR r3, [r0, 0x240]
		   0x0110E288:  442290E5     LDR r2, [r0, 0x244]
		   0x0110E28C:  0500A0E1     MOV r0, r5
		   0x0110E290:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E294:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x110E2E0 Offset: 0x110E2E0 VA: 0x110E2E0 Slot: 11
	public override void SetActiveBubble(bool isActive, int timer, Action createCoin) {
		/* Disassembly (ARM32, 22 instructions, 0x58 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E2E0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110E2E4:  08D04DE2     SUB sp, sp, 0x8
		   0x0110E2E8:  0150A0E1     MOV r5, r1
		   0x0110E2EC:  0040A0E1     MOV r4, r0
		   0x0110E2F0:  D3F1FFEB     BL $-0x38ac
		   0x0110E2F4:  000094E5     LDR r0, [r4]
		   0x0110E2F8:  0510A0E1     MOV r1, r5
		   0x0110E2FC:  403290E5     LDR r3, [r0, 0x240]
		   0x0110E300:  442290E5     LDR r2, [r0, 0x244]
		   0x0110E304:  0400A0E1     MOV r0, r4
		   0x0110E308:  33FF2FE1     BLX r3  // virtual call: vtable+0x240
		   0x0110E30C:  000055E3     CMPS r0, r5, 0x0
		   0x0110E310:  0100000A     BEQ $+0xc  // if (==) goto 0x0110E31C
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110E314:  08D08DE2     ADD sp, sp, 0x8
		   0x0110E318:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 2 if (==) ────────────────────
		   0x0110E31C:  000094E5     LDR r0, [r4]
		   0x0110E320:  682290E5     LDR r2, [r0, 0x268]
		   0x0110E324:  6C1290E5     LDR r1, [r0, 0x26c]
		   0x0110E328:  0400A0E1     MOV r0, r4
		   0x0110E32C:  08D08DE2     ADD sp, sp, 0x8
		   0x0110E330:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E334:  12FF2FE1     BX r2
		*/
	}

	// RVA: 0x110E878 Offset: 0x110E878 VA: 0x110E878 Slot: 32
	public override void Hide() {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 15 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E878:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110E87C:  0040A0E1     MOV r4, r0
		   0x0110E880:  000090E5     LDR r0, [r0]
		   0x0110E884:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x0110E888:  0400A0E1     MOV r0, r4
		   0x0110E88C:  0310A0E1     MOV r1, r3
		   0x0110E890:  32FF2FE1     BLX r2
		   0x0110E894:  000050E3     CMPS r0, r0, 0x0
		   0x0110E898:  0700000A     BEQ $+0x24  // if (==) goto 0x0110E8BC
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110E89C:  845094E5     LDR r5, [r4, 0x84]
		   0x0110E8A0:  000055E3     CMPS r0, r5, 0x0
		   0x0110E8A4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E8AC
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x0110E8A8:  C832F9EB     BL $-0x1b34d8
		   // ──── Block 3 if (!=) ────────────────────
		   0x0110E8AC:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x0110E8B0:  000050E3     CMPS r0, r0, 0x0
		   0x0110E8B4:  0400A011     MOVNE r0, r4
		   0x0110E8B8:  49F1FF1B     BLNE $-0x3ad4
		   // ──── Block 4 if (==) ────────────────────
		   0x0110E8BC:  C01094E5     LDR r1, [r4, 0xc0]
		   0x0110E8C0:  000051E3     CMPS r0, r1, 0x0
		   0x0110E8C4:  0400000A     BEQ $+0x18  // if (==) goto 0x0110E8DC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110E8C8:  0400A0E1     MOV r0, r4
		   0x0110E8CC:  0020A0E3     MOV r2, 0x0
		   0x0110E8D0:  0050A0E3     MOV r5, 0x0
		   0x0110E8D4:  A3A53BEB     BL $+0xee9694  // CALL → sub_1FF7F68
		   0x0110E8D8:  C05084E5     STR r5, [r4, 0xc0]
		   // ──── Block 6 if (==) ────────────────────
		   0x0110E8DC:  945094E5     LDR r5, [r4, 0x94]
		   0x0110E8E0:  000055E3     CMPS r0, r5, 0x0
		   0x0110E8E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E8EC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110E8E8:  B832F9EB     BL $-0x1b3518
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110E8EC:  0500A0E1     MOV r0, r5
		   0x0110E8F0:  0010A0E3     MOV r1, 0x0
		   0x0110E8F4:  0060A0E3     MOV r6, 0x0
		   0x0110E8F8:  A54C10EB     BL $+0x41329c  // CALL → SparklesEffect.Hide
		   0x0110E8FC:  8C5094E5     LDR r5, [r4, 0x8c]
		   0x0110E900:  000055E3     CMPS r0, r5, 0x0
		   0x0110E904:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E90C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110E908:  B032F9EB     BL $-0x1b3538
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110E90C:  0500A0E1     MOV r0, r5
		   0x0110E910:  0010A0E3     MOV r1, 0x0
		   0x0110E914:  124510EB     BL $+0x411450  // CALL → EnergyEffect.Hide
		   0x0110E918:  905094E5     LDR r5, [r4, 0x90]
		   0x0110E91C:  E06084E5     STR r6, [r4, 0xe0]
		   0x0110E920:  000055E3     CMPS r0, r5, 0x0
		   0x0110E924:  E46084E5     STR r6, [r4, 0xe4]
		   0x0110E928:  846084E5     STR r6, [r4, 0x84]
		   0x0110E92C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E934
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110E930:  A632F9EB     BL $-0x1b3560
		   // ──── Block 12 if (!=) ────────────────────
		   0x0110E934:  0500A0E1     MOV r0, r5
		   0x0110E938:  0010A0E3     MOV r1, 0x0
		   0x0110E93C:  13B9FFEB     BL $-0x11bac
		   0x0110E940:  0400A0E1     MOV r0, r4
		   0x0110E944:  0010A0E3     MOV r1, 0x0
		   0x0110E948:  AAF9FFEB     BL $-0x1950
		   0x0110E94C:  000094E5     LDR r0, [r4]
		   0x0110E950:  0010A0E3     MOV r1, 0x0
		   0x0110E954:  D86EC0E1     LDRD r6, r7, [r0, 0xe8]
		   0x0110E958:  0400A0E1     MOV r0, r4
		   0x0110E95C:  0720A0E1     MOV r2, r7
		   0x0110E960:  36FF2FE1     BLX r6
		   0x0110E964:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x0110E968:  000055E3     CMPS r0, r5, 0x0
		   0x0110E96C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E974
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110E970:  9632F9EB     BL $-0x1b35a0
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110E974:  0500A0E1     MOV r0, r5
		   0x0110E978:  0010A0E3     MOV r1, 0x0
		   0x0110E97C:  0020A0E3     MOV r2, 0x0
		   0x0110E980:  8DA53BEB     BL $+0xee963c  // CALL → sub_1FF7FBC
		   0x0110E984:  0000E0E3     MVN r0, r0, 0x0
		   0x0110E988:  340084E5     STR r0, [r4, 0x34]
		   0x0110E98C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1111A3C Offset: 0x1111A3C VA: 0x1111A3C Slot: 48
	protected virtual void SetActiveContainerEffects(bool isLocked) {
		/* Disassembly (ARM32, 45 instructions, 0xB4 bytes):
		   // CFG: 15 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01111A3C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01111A40:  0040A0E1     MOV r4, r0
		   0x01111A44:  000051E3     CMPS r0, r1, 0x0
		   0x01111A48:  1000000A     BEQ $+0x48  // if (==) goto 0x01111A90
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01111A4C:  945094E5     LDR r5, [r4, 0x94]
		   0x01111A50:  000055E3     CMPS r0, r5, 0x0
		   0x01111A54:  0000001A     BNE $+0x8  // if (!=) goto 0x01111A5C
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x01111A58:  5C26F9EB     BL $-0x1b6688
		   // ──── Block 3 if (!=) ────────────────────
		   0x01111A5C:  0500A0E1     MOV r0, r5
		   0x01111A60:  0010A0E3     MOV r1, 0x0
		   0x01111A64:  4A4010EB     BL $+0x410130  // CALL → SparklesEffect.Hide
		   0x01111A68:  8C5094E5     LDR r5, [r4, 0x8c]
		   0x01111A6C:  000055E3     CMPS r0, r5, 0x0
		   0x01111A70:  0000001A     BNE $+0x8  // if (!=) goto 0x01111A78
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01111A74:  5526F9EB     BL $-0x1b66a4
		   // ──── Block 5 if (!=) ────────────────────
		   0x01111A78:  0500A0E1     MOV r0, r5
		   0x01111A7C:  0010A0E3     MOV r1, 0x0
		   0x01111A80:  B73810EB     BL $+0x40e2e4  // CALL → EnergyEffect.Hide
		   0x01111A84:  0400A0E1     MOV r0, r4
		   0x01111A88:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01111A8C:  3CF3FFEA     B $-0x3308
		   // ──── Block 6 if (==) ────────────────────
		   0x01111A90:  EC5094E5     LDR r5, [r4, 0xec]
		   0x01111A94:  000055E3     CMPS r0, r5, 0x0
		   0x01111A98:  0000001A     BNE $+0x8  // if (!=) goto 0x01111AA0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01111A9C:  4B26F9EB     BL $-0x1b66cc
		   // ──── Block 8 if (!=) ────────────────────
		   0x01111AA0:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01111AA4:  010050E3     CMPS r0, r0, 0x1
		   0x01111AA8:  0D0000BA     BLT $+0x3c  // if (<) goto 0x01111AE4
		   // 
		   // ──── Block 9 else (>=) ────────────────────
		   0x01111AAC:  945094E5     LDR r5, [r4, 0x94]
		   0x01111AB0:  000055E3     CMPS r0, r5, 0x0
		   0x01111AB4:  0000001A     BNE $+0x8  // if (!=) goto 0x01111ABC
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01111AB8:  4426F9EB     BL $-0x1b66e8
		   // ──── Block 11 if (!=) ────────────────────
		   0x01111ABC:  0500A0E1     MOV r0, r5
		   0x01111AC0:  0010A0E3     MOV r1, 0x0
		   0x01111AC4:  F23F10EB     BL $+0x40ffd0  // CALL → SparklesEffect.Show
		   0x01111AC8:  8C5094E5     LDR r5, [r4, 0x8c]
		   0x01111ACC:  000055E3     CMPS r0, r5, 0x0
		   0x01111AD0:  0000001A     BNE $+0x8  // if (!=) goto 0x01111AD8
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01111AD4:  3D26F9EB     BL $-0x1b6704
		   // ──── Block 13 if (!=) ────────────────────
		   0x01111AD8:  0500A0E1     MOV r0, r5
		   0x01111ADC:  0010A0E3     MOV r1, 0x0
		   0x01111AE0:  613810EB     BL $+0x40e18c  // CALL → EnergyEffect.Show
		   // ──── Block 14 if (<) ────────────────────
		   0x01111AE4:  0400A0E1     MOV r0, r4
		   0x01111AE8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01111AEC:  7EFFFFEA     B $-0x200
		*/
	}

	// RVA: 0x1111AF0 Offset: 0x1111AF0 VA: 0x1111AF0 Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 353 instructions, 0x584 bytes):
		   // CFG: 61 blocks, 61 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01111AF0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01111AF4:  3CD04DE2     SUB sp, sp, 0x3c
		   0x01111AF8:  1C659FE5     LDR r6, [pc, 0x51c]
		   0x01111AFC:  0040A0E1     MOV r4, r0
		   0x01111B00:  03B0A0E1     MOV fp, r3
		   0x01111B04:  0280A0E1     MOV r8, r2
		   0x01111B08:  06608FE0     ADD r6, pc, r6
		   0x01111B0C:  0150A0E1     MOV r5, r1
		   0x01111B10:  0000D6E5     LDRB r0, [r6]
		   0x01111B14:  000050E3     CMPS r0, r0, 0x0
		   0x01111B18:  1C00001A     BNE $+0x78  // if (!=) goto 0x01111B90
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01111B1C:  FC049FE5     LDR r0, [pc, 0x4fc]
		   0x01111B20:  00009FE7     LDR r0, [pc, r0]
		   0x01111B24:  8D25F9EB     BL $-0x1b69c4
		   0x01111B28:  F4049FE5     LDR r0, [pc, 0x4f4]
		   0x01111B2C:  00009FE7     LDR r0, [pc, r0]
		   0x01111B30:  8A25F9EB     BL $-0x1b69d0
		   0x01111B34:  EC049FE5     LDR r0, [pc, 0x4ec]
		   0x01111B38:  00009FE7     LDR r0, [pc, r0]
		   0x01111B3C:  8725F9EB     BL $-0x1b69dc
		   0x01111B40:  E4049FE5     LDR r0, [pc, 0x4e4]
		   0x01111B44:  00009FE7     LDR r0, [pc, r0]
		   0x01111B48:  8425F9EB     BL $-0x1b69e8
		   0x01111B4C:  DC049FE5     LDR r0, [pc, 0x4dc]
		   0x01111B50:  00009FE7     LDR r0, [pc, r0]
		   0x01111B54:  8125F9EB     BL $-0x1b69f4
		   0x01111B58:  D4049FE5     LDR r0, [pc, 0x4d4]
		   0x01111B5C:  00009FE7     LDR r0, [pc, r0]
		   0x01111B60:  7E25F9EB     BL $-0x1b6a00
		   0x01111B64:  CC049FE5     LDR r0, [pc, 0x4cc]
		   0x01111B68:  00009FE7     LDR r0, [pc, r0]
		   0x01111B6C:  7B25F9EB     BL $-0x1b6a0c
		   0x01111B70:  C4049FE5     LDR r0, [pc, 0x4c4]
		   0x01111B74:  00009FE7     LDR r0, [pc, r0]
		   0x01111B78:  7825F9EB     BL $-0x1b6a18
		   0x01111B7C:  BC049FE5     LDR r0, [pc, 0x4bc]
		   0x01111B80:  00009FE7     LDR r0, [pc, r0]
		   0x01111B84:  7525F9EB     BL $-0x1b6a24
		   0x01111B88:  0100A0E3     MOV r0, 0x1
		   0x01111B8C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01111B90:  0000A0E3     MOV r0, 0x0
		   0x01111B94:  0510A0E1     MOV r1, r5
		   0x01111B98:  34008DE5     STR r0, [sp, 0x34]
		   0x01111B9C:  30008DE5     STR r0, [sp, 0x30]
		   0x01111BA0:  38008DE5     STR r0, [sp, 0x38]
		   0x01111BA4:  0400A0E1     MOV r0, r4
		   0x01111BA8:  3160D4E5     LDRB r6, [r4, 0x31]
		   0x01111BAC:  A1E5FFEB     BL $-0x6974
		   0x01111BB0:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x01111BB4:  000050E3     CMPS r0, r0, 0x0
		   0x01111BB8:  0600001A     BNE $+0x20  // if (!=) goto 0x01111BD8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01111BBC:  847094E5     LDR r7, [r4, 0x84]
		   0x01111BC0:  000057E3     CMPS r0, r7, 0x0
		   0x01111BC4:  0000001A     BNE $+0x8  // if (!=) goto 0x01111BCC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01111BC8:  0026F9EB     BL $-0x1b67f8
		   // ──── Block 5 if (!=) ────────────────────
		   0x01111BCC:  7400D7E5     LDRB r0, [r7, 0x74]
		   0x01111BD0:  000050E3     CMPS r0, r0, 0x0
		   0x01111BD4:  0100000A     BEQ $+0xc  // if (==) goto 0x01111BE0
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x01111BD8:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01111BDC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 7 if (==) ────────────────────
		   0x01111BE0:  0400A0E1     MOV r0, r4
		   0x01111BE4:  220100EB     BL $+0x490  // CALL → ItemContainer.TriggerFtUe
		   0x01111BE8:  EC7094E5     LDR r7, [r4, 0xec]
		   0x01111BEC:  000057E3     CMPS r0, r7, 0x0
		   0x01111BF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01111BF8
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01111BF4:  F525F9EB     BL $-0x1b6824
		   // ──── Block 9 if (!=) ────────────────────
		   0x01111BF8:  000056E3     CMPS r0, r6, 0x0
		   0x01111BFC:  0C1097E5     LDR r1, [r7, 0xc]
		   0x01111C00:  01600013     MOVNE r6, 0x1
		   0x01111C04:  050006E0     AND r0, r6, r5
		   0x01111C08:  000051E3     CMPS r0, r1, 0x0
		   0x01111C0C:  3A0000DA     BLE $+0xf0  // if (<=) goto 0x01111CFC
		   // 
		   // ──── Block 10 else (>) ────────────────────
		   0x01111C10:  000050E3     CMPS r0, r0, 0x0
		   0x01111C14:  EFFFFF0A     BEQ $-0x3c
		   // ──── Block 11 else (!=) ────────────────────
		   0x01111C18:  F6DBFFEB     BL $-0x9020
		   0x01111C1C:  0090A0E1     MOV sb, r0
		   0x01111C20:  0400A0E1     MOV r0, r4
		   0x01111C24:  0910A0E1     MOV r1, sb
		   0x01111C28:  790100EB     BL $+0x5ec  // CALL → ItemContainer.GetActivationCostEnergy
		   0x01111C2C:  18A49FE5     LDR r10, [pc, 0x418]
		   0x01111C30:  0060A0E1     MOV r6, r0
		   0x01111C34:  0AA09FE7     LDR r10, [pc, r10]
		   0x01111C38:  00009AE5     LDR r0, [r10]
		   0x01111C3C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01111C40:  005090E5     LDR r5, [r0]
		   0x01111C44:  000055E3     CMPS r0, r5, 0x0
		   0x01111C48:  0000001A     BNE $+0x8  // if (!=) goto 0x01111C50
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01111C4C:  DF25F9EB     BL $-0x1b687c
		   // ──── Block 13 if (!=) ────────────────────
		   0x01111C50:  205095E5     LDR r5, [r5, 0x20]
		   0x01111C54:  000055E3     CMPS r0, r5, 0x0
		   0x01111C58:  0000001A     BNE $+0x8  // if (!=) goto 0x01111C60
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01111C5C:  DB25F9EB     BL $-0x1b688c
		   // ──── Block 15 if (!=) ────────────────────
		   0x01111C60:  2000D5E5     LDRB r0, [r5, 0x20]
		   0x01111C64:  000050E3     CMPS r0, r0, 0x0
		   0x01111C68:  4F00001A     BNE $+0x144  // if (!=) goto 0x01111DAC
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x01111C6C:  0000A0E3     MOV r0, 0x0
		   0x01111C70:  9AA001EB     BL $+0x68270  // CALL → ProfileStorage.get_numEnergy
		   0x01111C74:  060050E1     CMPS r0, r0, r6
		   0x01111C78:  4B0000AA     BGE $+0x134  // if (>=) goto 0x01111DAC
		   // 
		   // ──── Block 17 else (<) ────────────────────
		   0x01111C7C:  0100A0E3     MOV r0, 0x1
		   0x01111C80:  0010A0E3     MOV r1, 0x0
		   0x01111C84:  CAB3FDEB     BL $-0x930d0
		   0x01111C88:  00009AE5     LDR r0, [r10]
		   0x01111C8C:  F86094E5     LDR r6, [r4, 0xf8]
		   0x01111C90:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01111C94:  000056E3     CMPS r0, r6, 0x0
		   0x01111C98:  004090E5     LDR r4, [r0]
		   0x01111C9C:  D200000A     BEQ $+0x350  // if (==) goto 0x01111FEC
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x01111CA0:  000054E3     CMPS r0, r4, 0x0
		   0x01111CA4:  0000001A     BNE $+0x8  // if (!=) goto 0x01111CAC
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x01111CA8:  C825F9EB     BL $-0x1b68d8
		   // ──── Block 20 if (!=) ────────────────────
		   0x01111CAC:  9C039FE5     LDR r0, [pc, 0x39c]
		   0x01111CB0:  00009FE7     LDR r0, [pc, r0]
		   0x01111CB4:  1C4094E5     LDR r4, [r4, 0x1c]
		   0x01111CB8:  000090E5     LDR r0, [r0]
		   0x01111CBC:  C025F9EB     BL $-0x1b68f8
		   0x01111CC0:  0050A0E1     MOV r5, r0
		   0x01111CC4:  88039FE5     LDR r0, [pc, 0x388]
		   0x01111CC8:  0410A0E1     MOV r1, r4
		   0x01111CCC:  0030A0E3     MOV r3, 0x0
		   0x01111CD0:  00009FE7     LDR r0, [pc, r0]
		   0x01111CD4:  002090E5     LDR r2, [r0]
		   0x01111CD8:  0500A0E1     MOV r0, r5
		   0x01111CDC:  986D7AEB     BL $+0x1e9b668  // CALL → Action..ctor
		   0x01111CE0:  0C3096E5     LDR r3, [r6, 0xc]
		   0x01111CE4:  0510A0E1     MOV r1, r5
		   0x01111CE8:  142096E5     LDR r2, [r6, 0x14]
		   0x01111CEC:  200096E5     LDR r0, [r6, 0x20]
		   0x01111CF0:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01111CF4:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01111CF8:  13FF2FE1     BX r3
		   // ──── Block 21 if (<=) ────────────────────
		   0x01111CFC:  000050E3     CMPS r0, r0, 0x0
		   0x01111D00:  1800000A     BEQ $+0x68  // if (==) goto 0x01111D68
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x01111D04:  38539FE5     LDR r5, [pc, 0x338]
		   0x01111D08:  05509FE7     LDR r5, [pc, r5]
		   0x01111D0C:  000095E5     LDR r0, [r5]
		   0x01111D10:  741090E5     LDR r1, [r0, 0x74]
		   0x01111D14:  000051E3     CMPS r0, r1, 0x0
		   0x01111D18:  0100001A     BNE $+0xc  // if (!=) goto 0x01111D24
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01111D1C:  5C25F9EB     BL $-0x1b6a88
		   0x01111D20:  000095E5     LDR r0, [r5]
		   // ──── Block 24 if (!=) ────────────────────
		   0x01111D24:  1C139FE5     LDR r1, [pc, 0x31c]
		   0x01111D28:  01109FE7     LDR r1, [pc, r1]
		   0x01111D2C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01111D30:  001091E5     LDR r1, [r1]
		   0x01111D34:  0C5090E5     LDR r5, [r0, 0xc]
		   0x01111D38:  742091E5     LDR r2, [r1, 0x74]
		   0x01111D3C:  000052E3     CMPS r0, r2, 0x0
		   0x01111D40:  0100001A     BNE $+0xc  // if (!=) goto 0x01111D4C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01111D44:  0100A0E1     MOV r0, r1
		   0x01111D48:  5125F9EB     BL $-0x1b6ab4
		   // ──── Block 26 if (!=) ────────────────────
		   0x01111D4C:  0500A0E1     MOV r0, r5
		   0x01111D50:  FE15A0E3     MOV r1, 0x3f800000
		   0x01111D54:  0020A0E3     MOV r2, 0x0
		   0x01111D58:  413303EB     BL $+0xccd0c  // CALL → SoundController.PlaySound
		   0x01111D5C:  0100A0E3     MOV r0, 0x1
		   0x01111D60:  0010A0E3     MOV r1, 0x0
		   0x01111D64:  92B3FDEB     BL $-0x931b0
		   // ──── Block 27 if (==) ────────────────────
		   0x01111D68:  AC00D4E5     LDRB r0, [r4, 0xac]
		   0x01111D6C:  000050E3     CMPS r0, r0, 0x0
		   0x01111D70:  98FFFF0A     BEQ $-0x198
		   // ──── Block 28 else (!=) ────────────────────
		   0x01111D74:  0000A0E3     MOV r0, 0x0
		   0x01111D78:  CC5094E5     LDR r5, [r4, 0xcc]  // vtable: Object.Equals
		   0x01111D7C:  57A001EB     BL $+0x68164  // CALL → ProfileStorage.get_numEnergy
		   0x01111D80:  000055E1     CMPS r0, r5, r0
		   0x01111D84:  93FFFFDA     BLE $-0x1ac
		   // ──── Block 29 else (>) ────────────────────
		   0x01111D88:  FC0094E5     LDR r0, [r4, 0xfc]
		   0x01111D8C:  000050E3     CMPS r0, r0, 0x0
		   0x01111D90:  90FFFF0A     BEQ $-0x1b8
		   // ──── Block 30 else (!=) ────────────────────
		   0x01111D94:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01111D98:  141090E5     LDR r1, [r0, 0x14]
		   0x01111D9C:  200090E5     LDR r0, [r0, 0x20]
		   0x01111DA0:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01111DA4:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01111DA8:  12FF2FE1     BX r2
		   // ──── Block 31 (from 2 paths) ──────────────────
		   0x01111DAC:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x01111DB0:  00009FE7     LDR r0, [pc, r0]
		   0x01111DB4:  000090E5     LDR r0, [r0]
		   0x01111DB8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01111DBC:  005090E5     LDR r5, [r0]
		   0x01111DC0:  000055E3     CMPS r0, r5, 0x0
		   0x01111DC4:  0000001A     BNE $+0x8  // if (!=) goto 0x01111DCC
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x01111DC8:  8025F9EB     BL $-0x1b69f8
		   // ──── Block 33 if (!=) ────────────────────
		   0x01111DCC:  0500A0E1     MOV r0, r5
		   0x01111DD0:  0010A0E3     MOV r1, 0x0
		   0x01111DD4:  654D10EB     BL $+0x41359c  // CALL → FTUEFirstController.isBlockedForContainerSelection
		   0x01111DD8:  000050E3     CMPS r0, r0, 0x0
		   0x01111DDC:  7DFFFF1A     BNE $-0x204
		   // ──── Block 34 else (==) ────────────────────
		   0x01111DE0:  20608DE5     STR r6, [sp, 0x20]
		   0x01111DE4:  446094E5     LDR r6, [r4, 0x44]
		   0x01111DE8:  105094E5     LDR r5, [r4, 0x10]
		   0x01111DEC:  000056E3     CMPS r0, r6, 0x0
		   0x01111DF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01111DF8
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x01111DF4:  7525F9EB     BL $-0x1b6a24
		   // ──── Block 36 if (!=) ────────────────────
		   0x01111DF8:  0C7096E5     LDR r7, [r6, 0xc]
		   0x01111DFC:  0B20A0E1     MOV r2, fp
		   0x01111E00:  200096E5     LDR r0, [r6, 0x20]
		   0x01111E04:  0530A0E1     MOV r3, r5
		   0x01111E08:  141096E5     LDR r1, [r6, 0x14]
		   0x01111E0C:  00108DE5     STR r1, [sp]
		   0x01111E10:  0810A0E1     MOV r1, r8
		   0x01111E14:  37FF2FE1     BLX r7  // virtual call: Item.ToString
		   0x01111E18:  0060A0E1     MOV r6, r0
		   0x01111E1C:  38029FE5     LDR r0, [pc, 0x238]
		   0x01111E20:  00009FE7     LDR r0, [pc, r0]
		   0x01111E24:  000090E5     LDR r0, [r0]
		   0x01111E28:  741090E5     LDR r1, [r0, 0x74]
		   0x01111E2C:  000051E3     CMPS r0, r1, 0x0
		   0x01111E30:  0000001A     BNE $+0x8  // if (!=) goto 0x01111E38
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x01111E34:  1625F9EB     BL $-0x1b6ba0
		   // ──── Block 38 if (!=) ────────────────────
		   0x01111E38:  0600A0E1     MOV r0, r6
		   0x01111E3C:  0010A0E3     MOV r1, 0x0
		   0x01111E40:  ED983BEB     BL $+0xee63bc  // CALL → sub_1FF81FC
		   0x01111E44:  000050E3     CMPS r0, r0, 0x0
		   0x01111E48:  4500000A     BEQ $+0x11c  // if (==) goto 0x01111F64
		   // 
		   // ──── Block 39 else (!=) ────────────────────
		   0x01111E4C:  000094E5     LDR r0, [r4]
		   0x01111E50:  0910A0E1     MOV r1, sb
		   0x01111E54:  483290E5     LDR r3, [r0, 0x248]
		   0x01111E58:  4C2290E5     LDR r2, [r0, 0x24c]
		   0x01111E5C:  0400A0E1     MOV r0, r4
		   0x01111E60:  33FF2FE1     BLX r3  // virtual call: vtable+0x248
		   0x01111E64:  0010A0E1     MOV r1, r0
		   0x01111E68:  E40094E5     LDR r0, [r4, 0xe4]
		   0x01111E6C:  000050E3     CMPS r0, r0, 0x0
		   0x01111E70:  0400000A     BEQ $+0x18  // if (==) goto 0x01111E88
		   // 
		   // ──── Block 40 else (!=) ────────────────────
		   0x01111E74:  0C7090E5     LDR r7, [r0, 0xc]
		   0x01111E78:  0620A0E1     MOV r2, r6
		   0x01111E7C:  143090E5     LDR r3, [r0, 0x14]
		   0x01111E80:  200090E5     LDR r0, [r0, 0x20]
		   0x01111E84:  37FF2FE1     BLX r7  // virtual call: Item.ToString
		   // ──── Block 41 if (==) ────────────────────
		   0x01111E88:  0010A0E3     MOV r1, 0x0
		   0x01111E8C:  2B00A0E3     MOV r0, 0x2b
		   0x01111E90:  F000CDE1     STRD r0, r1, [sp]
		   0x01111E94:  30008DE2     ADD r0, sp, 0x30
		   0x01111E98:  1610A0E3     MOV r1, 0x16
		   0x01111E9C:  2920A0E3     MOV r2, 0x29
		   0x01111EA0:  2A30A0E3     MOV r3, 0x2a
		   0x01111EA4:  3B2508EB     BL $+0x2094f4  // CALL → CurrencySinkDataContainer..ctor
		   0x01111EA8:  00009AE5     LDR r0, [r10]
		   0x01111EAC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01111EB0:  005090E5     LDR r5, [r0]
		   0x01111EB4:  000055E3     CMPS r0, r5, 0x0
		   0x01111EB8:  0000001A     BNE $+0x8  // if (!=) goto 0x01111EC0
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x01111EBC:  4325F9EB     BL $-0x1b6aec
		   // ──── Block 43 if (!=) ────────────────────
		   0x01111EC0:  A0619FE5     LDR r6, [pc, 0x1a0]
		   0x01111EC4:  1C5095E5     LDR r5, [r5, 0x1c]
		   0x01111EC8:  06608FE0     ADD r6, pc, r6
		   0x01111ECC:  0000D6E5     LDRB r0, [r6]
		   0x01111ED0:  000050E3     CMPS r0, r0, 0x0
		   0x01111ED4:  0400001A     BNE $+0x18  // if (!=) goto 0x01111EEC
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x01111ED8:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x01111EDC:  00009FE7     LDR r0, [pc, r0]
		   0x01111EE0:  9E24F9EB     BL $-0x1b6d80
		   0x01111EE4:  0100A0E3     MOV r0, 0x1
		   0x01111EE8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 45 if (!=) ────────────────────
		   0x01111EEC:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x01111EF0:  0010A0E3     MOV r1, 0x0
		   0x01111EF4:  00009FE7     LDR r0, [pc, r0]
		   0x01111EF8:  000090E5     LDR r0, [r0]
		   0x01111EFC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01111F00:  080090E5     LDR r0, [r0, 0x8]
		   0x01111F04:  1C008DE5     STR r0, [sp, 0x1c]
		   0x01111F08:  24008DE2     ADD r0, sp, 0x24
		   0x01111F0C:  0D4E00EB     BL $+0x1383c  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x01111F10:  28908DE2     ADD sb, sp, 0x28
		   0x01111F14:  24B09DE5     LDR fp, [sp, 0x24]
		   0x01111F18:  34809DE5     LDR r8, [sp, 0x34]
		   0x01111F1C:  000055E3     CMPS r0, r5, 0x0
		   0x01111F20:  38A09DE5     LDR r10, [sp, 0x38]
		   0x01111F24:  C00299E8     LDM sb, {r6, r7, sb}
		   0x01111F28:  0000001A     BNE $+0x8  // if (!=) goto 0x01111F30
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x01111F2C:  2725F9EB     BL $-0x1b6b5c
		   // ──── Block 47 if (!=) ────────────────────
		   0x01111F30:  0000A0E3     MOV r0, 0x0
		   0x01111F34:  C0028DE8     STM sp, {r6, r7, sb}
		   0x01111F38:  0B30A0E1     MOV r3, fp
		   0x01111F3C:  14008DE5     STR r0, [sp, 0x14]
		   0x01111F40:  0500A0E1     MOV r0, r5
		   0x01111F44:  0C808DE5     STR r8, [sp, 0xc]
		   0x01111F48:  10A08DE5     STR r10, [sp, 0x10]
		   0x01111F4C:  20109DE5     LDR r1, [sp, 0x20]
		   0x01111F50:  1C209DE5     LDR r2, [sp, 0x1c]
		   0x01111F54:  B6850CEB     BL $+0x3216e0  // CALL → EnergySystem.SpendEnergy
		   0x01111F58:  0400A0E1     MOV r0, r4
		   0x01111F5C:  A7F3FFEB     BL $-0x315c
		   0x01111F60:  1CFFFFEA     B $-0x388
		   // ──── Block 48 if (==) ────────────────────
		   0x01111F64:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01111F68:  00009FE7     LDR r0, [pc, r0]
		   0x01111F6C:  000090E5     LDR r0, [r0]
		   0x01111F70:  741090E5     LDR r1, [r0, 0x74]
		   0x01111F74:  000051E3     CMPS r0, r1, 0x0
		   0x01111F78:  0000001A     BNE $+0x8  // if (!=) goto 0x01111F80
		   // 
		   // ──── Block 49 else (==) ────────────────────
		   0x01111F7C:  C424F9EB     BL $-0x1b6ce8
		   // ──── Block 50 if (!=) ────────────────────
		   0x01111F80:  0000A0E3     MOV r0, 0x0
		   0x01111F84:  E16EFFEB     BL $-0x24474
		   0x01111F88:  0040A0E1     MOV r4, r0
		   0x01111F8C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01111F90:  00009FE7     LDR r0, [pc, r0]
		   0x01111F94:  000090E5     LDR r0, [r0]
		   0x01111F98:  741090E5     LDR r1, [r0, 0x74]
		   0x01111F9C:  000051E3     CMPS r0, r1, 0x0
		   0x01111FA0:  0000001A     BNE $+0x8  // if (!=) goto 0x01111FA8
		   // 
		   // ──── Block 51 else (==) ────────────────────
		   0x01111FA4:  BA24F9EB     BL $-0x1b6d10
		   // ──── Block 52 if (!=) ────────────────────
		   0x01111FA8:  24008DE2     ADD r0, sp, 0x24
		   0x01111FAC:  0010A0E3     MOV r1, 0x0
		   0x01111FB0:  0080A0E3     MOV r8, 0x0
		   0x01111FB4:  EA3CFDEB     BL $-0xb0c50
		   0x01111FB8:  24708DE2     ADD r7, sp, 0x24
		   0x01111FBC:  000054E3     CMPS r0, r4, 0x0
		   0x01111FC0:  E00097E8     LDM r7, {r5, r6, r7}
		   0x01111FC4:  0000001A     BNE $+0x8  // if (!=) goto 0x01111FCC
		   // 
		   // ──── Block 53 else (==) ────────────────────
		   0x01111FC8:  0025F9EB     BL $-0x1b6bf8
		   // ──── Block 54 if (!=) ────────────────────
		   0x01111FCC:  0400A0E1     MOV r0, r4
		   0x01111FD0:  0510A0E1     MOV r1, r5
		   0x01111FD4:  0620A0E1     MOV r2, r6
		   0x01111FD8:  0730A0E1     MOV r3, r7
		   0x01111FDC:  00808DE5     STR r8, [sp]
		   0x01111FE0:  04808DE5     STR r8, [sp, 0x4]
		   0x01111FE4:  7D7209EB     BL $+0x25c9fc  // CALL → UIPoppingAlert.ShowMessage
		   0x01111FE8:  FAFEFFEA     B $-0x410
		   // ──── Block 55 if (==) ────────────────────
		   0x01111FEC:  000054E3     CMPS r0, r4, 0x0
		   0x01111FF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01111FF8
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x01111FF4:  F524F9EB     BL $-0x1b6c24
		   // ──── Block 57 if (!=) ────────────────────
		   0x01111FF8:  1C4094E5     LDR r4, [r4, 0x1c]
		   0x01111FFC:  000054E3     CMPS r0, r4, 0x0
		   0x01112000:  0000001A     BNE $+0x8  // if (!=) goto 0x01112008
		   // 
		   // ──── Block 58 else (==) ────────────────────
		   0x01112004:  F124F9EB     BL $-0x1b6c34
		   // ──── Block 59 if (!=) ────────────────────
		   0x01112008:  0400A0E1     MOV r0, r4
		   0x0111200C:  0010A0E3     MOV r1, 0x0
		   0x01112010:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01112014:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01112018:  FE820CEA     B $+0x320c00  // TAIL CALL → EnergySystem.EnergyRequest
		   0x0111201C:  12A31103     TSTSEQ r10, r1, 0x48000000
		   0x01112020:  A44DF602     RSCSEQ r4, r6, 0x2900
		   0x01112024:  D060F602     RSCSEQ r6, r6, 0xd0
		   0x01112028:  707DF602     RSCSEQ r7, r6, 0x1c00
		   0x0111202C:  9873F602     RSCSEQ r7, r6, 0x60000002
		   0x01112030:  6456F602     RSCSEQ r5, r6, 0x6400000
		   0x01112034:  DC49F602     RSCSEQ r4, r6, 0x370000
		   0x01112038:  D86BF602     RSCSEQ r6, r6, 0x36000
		   0x0111203C:  D06BF602     RSCSEQ r6, r6, 0x34000
		   0x01112040:  E077F602     RSCSEQ r7, r6, 0x3800000
		   0x01112044:  3C6AF602     RSCSEQ r6, r6, 0x3c000
		   0x01112048:  186AF602     RSCSEQ r6, r6, 0x18000
		   0x0111204C:  C85FF602     RSCSEQ r5, r6, 0x320
		   0x01112050:  144CF602     RSCSEQ r4, r6, 0x1400
		   0x01112054:  D87BF602     RSCSEQ r7, r6, 0x36000
		   0x01112058:  2C71F602     RSCSEQ r7, r6, 0xb
		   0x0111205C:  1847F602     RSCSEQ r4, r6, 0x600000
		   0x01112060:  F873F602     RSCSEQ r7, r6, 0xe0000003
		   0x01112064:  2452F602     RSCSEQ r5, r6, 0x40000002
		   0x01112068:  199E1103     TSTSEQ sb, r1, 0x190
		   0x0111206C:  7474F602     RSCSEQ r7, r6, 0x74000000
		   0x01112070:  5C74F602     RSCSEQ r7, r6, 0x5c000000
		*/
	}

	// RVA: 0x111237C Offset: 0x111237C VA: 0x111237C Slot: 47
	public void OnEnergyConsumptionChanged(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 55 instructions, 0xDC bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111237C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01112380:  D0609FE5     LDR r6, [pc, 0xd0]
		   0x01112384:  0040A0E1     MOV r4, r0
		   0x01112388:  0150A0E1     MOV r5, r1
		   0x0111238C:  06608FE0     ADD r6, pc, r6
		   0x01112390:  0000D6E5     LDRB r0, [r6]
		   0x01112394:  000050E3     CMPS r0, r0, 0x0
		   0x01112398:  0400001A     BNE $+0x18  // if (!=) goto 0x011123B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111239C:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x011123A0:  00009FE7     LDR r0, [pc, r0]
		   0x011123A4:  6D23F9EB     BL $-0x1b7244
		   0x011123A8:  0100A0E3     MOV r0, 0x1
		   0x011123AC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011123B0:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x011123B4:  00009FE7     LDR r0, [pc, r0]
		   0x011123B8:  946094E5     LDR r6, [r4, 0x94]
		   0x011123BC:  000090E5     LDR r0, [r0]
		   0x011123C0:  741090E5     LDR r1, [r0, 0x74]
		   0x011123C4:  000051E3     CMPS r0, r1, 0x0
		   0x011123C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011123D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011123CC:  B023F9EB     BL $-0x1b7138
		   // ──── Block 4 if (!=) ────────────────────
		   0x011123D0:  0600A0E1     MOV r0, r6
		   0x011123D4:  0010A0E3     MOV r1, 0x0
		   0x011123D8:  0020A0E3     MOV r2, 0x0
		   0x011123DC:  AE963BEB     BL $+0xee5ac0  // CALL → sub_1FF7E9C
		   0x011123E0:  000050E3     CMPS r0, r0, 0x0
		   0x011123E4:  7080BD18     POPNE {r4, r5, r6, pc}
		   0x011123E8:  840094E5     LDR r0, [r4, 0x84]
		   0x011123EC:  000050E3     CMPS r0, r0, 0x0
		   0x011123F0:  1700000A     BEQ $+0x64  // if (==) goto 0x01112454
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x011123F4:  9000D0E5     LDRB r0, [r0, 0x90]
		   0x011123F8:  946094E5     LDR r6, [r4, 0x94]
		   0x011123FC:  000050E3     CMPS r0, r0, 0x0
		   0x01112400:  0050E003     MVNEQ r5, r0, 0x0
		   0x01112404:  000056E3     CMPS r0, r6, 0x0
		   0x01112408:  0000001A     BNE $+0x8  // if (!=) goto 0x01112410
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111240C:  EF23F9EB     BL $-0x1b703c
		   // ──── Block 8 if (!=) ────────────────────
		   0x01112410:  0600A0E1     MOV r0, r6
		   0x01112414:  0510A0E1     MOV r1, r5
		   0x01112418:  0020A0E3     MOV r2, 0x0
		   0x0111241C:  F13D10EB     BL $+0x40f7cc  // CALL → SparklesEffect.UpdateSpritesArray
		   0x01112420:  9C00A0E3     MOV r0, 0x9c
		   0x01112424:  020055E3     CMPS r0, r5, 0x2
		   0x01112428:  A0000003     MOVEQ r0, 0xa0
		   0x0111242C:  005094E7     LDR r5, [r4, r0]  // this.energySpriteX2
		   0x01112430:  984094E5     LDR r4, [r4, 0x98]  // this.energySpriteX2
		   0x01112434:  000054E3     CMPS r0, r4, 0x0
		   0x01112438:  0000001A     BNE $+0x8  // if (!=) goto 0x01112440
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0111243C:  E323F9EB     BL $-0x1b706c
		   // ──── Block 10 if (!=) ────────────────────
		   0x01112440:  0400A0E1     MOV r0, r4
		   0x01112444:  0510A0E1     MOV r1, r5
		   0x01112448:  0020A0E3     MOV r2, 0x0
		   0x0111244C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01112450:  BF963BEA     B $+0xee5b04
		   // ──── Block 11 if (==) ────────────────────
		   0x01112454:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x1112464 Offset: 0x1112464 VA: 0x1112464 Slot: 49
	protected virtual ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01112464:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}

	// RVA: 0x11128D0 Offset: 0x11128D0 VA: 0x11128D0
	protected bool SelectItemDataToSpawn(int i, out ItemData itemDataNew, out bool outRare, EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011128D0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x011128D4:  08D04DE2     SUB sp, sp, 0x8
		   0x011128D8:  D4439FE5     LDR r4, [pc, 0x3d4]
		   0x011128DC:  0050A0E1     MOV r5, r0
		   0x011128E0:  0370A0E1     MOV r7, r3
		   0x011128E4:  02A0A0E1     MOV r10, r2
		   0x011128E8:  04408FE0     ADD r4, pc, r4
		   0x011128EC:  0160A0E1     MOV r6, r1
		   0x011128F0:  0000D4E5     LDRB r0, [r4]
		   0x011128F4:  000050E3     CMPS r0, r0, 0x0
		   0x011128F8:  1600001A     BNE $+0x60  // if (!=) goto 0x01112958
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011128FC:  B4039FE5     LDR r0, [pc, 0x3b4]
		   0x01112900:  00009FE7     LDR r0, [pc, r0]
		   0x01112904:  1522F9EB     BL $-0x1b77a4
		   0x01112908:  AC039FE5     LDR r0, [pc, 0x3ac]
		   0x0111290C:  00009FE7     LDR r0, [pc, r0]
		   0x01112910:  1222F9EB     BL $-0x1b77b0
		   0x01112914:  A4039FE5     LDR r0, [pc, 0x3a4]
		   0x01112918:  00009FE7     LDR r0, [pc, r0]
		   0x0111291C:  0F22F9EB     BL $-0x1b77bc
		   0x01112920:  9C039FE5     LDR r0, [pc, 0x39c]
		   0x01112924:  00009FE7     LDR r0, [pc, r0]
		   0x01112928:  0C22F9EB     BL $-0x1b77c8
		   0x0111292C:  94039FE5     LDR r0, [pc, 0x394]
		   0x01112930:  00009FE7     LDR r0, [pc, r0]
		   0x01112934:  0922F9EB     BL $-0x1b77d4
		   0x01112938:  8C039FE5     LDR r0, [pc, 0x38c]
		   0x0111293C:  00009FE7     LDR r0, [pc, r0]
		   0x01112940:  0622F9EB     BL $-0x1b77e0
		   0x01112944:  84039FE5     LDR r0, [pc, 0x384]
		   0x01112948:  00009FE7     LDR r0, [pc, r0]
		   0x0111294C:  0322F9EB     BL $-0x1b77ec
		   0x01112950:  0100A0E3     MOV r0, 0x1
		   0x01112954:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01112958:  B84095E5     LDR r4, [r5, 0xb8]
		   0x0111295C:  000054E3     CMPS r0, r4, 0x0
		   0x01112960:  0000001A     BNE $+0x8  // if (!=) goto 0x01112968
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01112964:  9922F9EB     BL $-0x1b7594
		   // ──── Block 4 if (!=) ────────────────────
		   0x01112968:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0111296C:  060050E1     CMPS r0, r0, r6
		   0x01112970:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01112978
		   // 
		   // ──── Block 5 else (<= (unsigned)) ────────────────────
		   0x01112974:  9622F9EB     BL $-0x1b75a0
		   // ──── Block 6 if (> (unsigned)) ────────────────────
		   0x01112978:  060184E0     ADD r0, r4, r6, lsl 2
		*/
	}

	// RVA: 0x1112214 Offset: 0x1112214 VA: 0x1112214
	private int GetActivationCostEnergy(EnergyConsumptionMode mode) {
		/* Disassembly (ARM32, 90 instructions, 0x168 bytes):
		   // CFG: 17 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01112214:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01112218:  08D04DE2     SUB sp, sp, 0x8
		   0x0111221C:  34619FE5     LDR r6, [pc, 0x134]
		   0x01112220:  0040A0E1     MOV r4, r0
		   0x01112224:  0150A0E1     MOV r5, r1
		   0x01112228:  06608FE0     ADD r6, pc, r6
		   0x0111222C:  0000D6E5     LDRB r0, [r6]
		   0x01112230:  000050E3     CMPS r0, r0, 0x0
		   0x01112234:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01112270
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01112238:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x0111223C:  00009FE7     LDR r0, [pc, r0]
		   0x01112240:  C623F9EB     BL $-0x1b70e0
		   0x01112244:  14019FE5     LDR r0, [pc, 0x114]
		   0x01112248:  00009FE7     LDR r0, [pc, r0]
		   0x0111224C:  C323F9EB     BL $-0x1b70ec
		   0x01112250:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01112254:  00009FE7     LDR r0, [pc, r0]
		   0x01112258:  C023F9EB     BL $-0x1b70f8
		   0x0111225C:  04019FE5     LDR r0, [pc, 0x104]
		   0x01112260:  00009FE7     LDR r0, [pc, r0]
		   0x01112264:  BD23F9EB     BL $-0x1b7104
		   0x01112268:  0100A0E3     MOV r0, 0x1
		   0x0111226C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01112270:  846094E5     LDR r6, [r4, 0x84]
		   0x01112274:  000056E3     CMPS r0, r6, 0x0
		   0x01112278:  0000001A     BNE $+0x8  // if (!=) goto 0x01112280
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111227C:  5324F9EB     BL $-0x1b6eac
		   // ──── Block 4 if (!=) ────────────────────
		   0x01112280:  9000D6E5     LDRB r0, [r6, 0x90]
		   0x01112284:  000050E3     CMPS r0, r0, 0x0
		   0x01112288:  01007513     CMNSNE r0, r5, 0x1
		   0x0111228C:  0600001A     BNE $+0x20  // if (!=) goto 0x011122AC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01112290:  844094E5     LDR r4, [r4, 0x84]
		   0x01112294:  000054E3     CMPS r0, r4, 0x0
		   0x01112298:  0000001A     BNE $+0x8  // if (!=) goto 0x011122A0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0111229C:  4B24F9EB     BL $-0x1b6ecc
		   // ──── Block 7 if (!=) ────────────────────
		   0x011122A0:  8C0094E5     LDR r0, [r4, 0x8c]
		   0x011122A4:  08D08DE2     ADD sp, sp, 0x8
		   0x011122A8:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 8 if (!=) ────────────────────
		   0x011122AC:  020055E3     CMPS r0, r5, 0x2
		   0x011122B0:  2100000A     BEQ $+0x8c  // if (==) goto 0x0111233C
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x011122B4:  010055E3     CMPS r0, r5, 0x1
		   0x011122B8:  F4FFFF0A     BEQ $-0x28
		   // ──── Block 10 else (!=) ────────────────────
		   0x011122BC:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x011122C0:  04108DE2     ADD r1, sp, 0x4
		   0x011122C4:  00009FE7     LDR r0, [pc, r0]
		   0x011122C8:  04508DE5     STR r5, [sp, 0x4]
		   0x011122CC:  000090E5     LDR r0, [r0]
		   0x011122D0:  F123F9EB     BL $-0x1b7034
		   0x011122D4:  0010A0E1     MOV r1, r0
		   0x011122D8:  90009FE5     LDR r0, [pc, 0x90]
		   0x011122DC:  0020A0E3     MOV r2, 0x0
		   0x011122E0:  00009FE7     LDR r0, [pc, r0]
		   0x011122E4:  000090E5     LDR r0, [r0]
		   0x011122E8:  23D175EB     BL $+0x1d74494  // CALL → String.Format
		   0x011122EC:  0060A0E1     MOV r6, r0
		   0x011122F0:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x011122F4:  00009FE7     LDR r0, [pc, r0]
		   0x011122F8:  000090E5     LDR r0, [r0]
		   0x011122FC:  3024F9EB     BL $-0x1b6f38
		   0x01112300:  0610A0E1     MOV r1, r6
		   0x01112304:  0020A0E3     MOV r2, 0x0
		   0x01112308:  0050A0E1     MOV r5, r0
		   0x0111230C:  DC2F10EB     BL $+0x40bf78  // CALL → InfoException..ctor
		   0x01112310:  60009FE5     LDR r0, [pc, 0x60]
		   0x01112314:  00009FE7     LDR r0, [pc, r0]
		   0x01112318:  000090E5     LDR r0, [r0]
		   0x0111231C:  741090E5     LDR r1, [r0, 0x74]
		   0x01112320:  000051E3     CMPS r0, r1, 0x0
		   0x01112324:  0000001A     BNE $+0x8  // if (!=) goto 0x0111232C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01112328:  D923F9EB     BL $-0x1b7094
		   // ──── Block 12 if (!=) ────────────────────
		   0x0111232C:  0500A0E1     MOV r0, r5
		   0x01112330:  0010A0E3     MOV r1, 0x0
		   0x01112334:  94973BEB     BL $+0xee5e58  // CALL → sub_1FF818C
		   0x01112338:  D4FFFFEA     B $-0xa8
		   // ──── Block 13 if (==) ────────────────────
		   0x0111233C:  844094E5     LDR r4, [r4, 0x84]
		   0x01112340:  000054E3     CMPS r0, r4, 0x0
		   0x01112344:  0000001A     BNE $+0x8  // if (!=) goto 0x0111234C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01112348:  2024F9EB     BL $-0x1b6f78
		   // ──── Block 15 if (!=) ────────────────────
		   0x0111234C:  8C0094E5     LDR r0, [r4, 0x8c]
		   0x01112350:  8000A0E1     MOV r0, r0, r0, lsl 1
		   0x01112354:  D2FFFFEA     B $-0xb0
		   0x01112358:  F69B1103     TSTSEQ sb, r1, 0x3d800
		   0x0111235C:  4C43F602     RSCSEQ r4, r6, 0x30000001
		   0x01112360:  1476F602     RSCSEQ r7, r6, 0x1400000
		   0x01112364:  7854F602     RSCSEQ r5, r6, 0x78000000
		   0x01112368:  5076F602     RSCSEQ r7, r6, 0x5000000
		   0x0111236C:  9875F602     RSCSEQ r7, r6, 0x26000000
		   0x01112370:  D075F602     RSCSEQ r7, r6, 0x34000000
		   0x01112374:  D853F602     RSCSEQ r5, r6, 0x60000003
		   0x01112378:  7442F602     RSCSEQ r4, r6, 0x40000007
		*/
	}

	// RVA: 0x1112074 Offset: 0x1112074 VA: 0x1112074
	private void TriggerFtUe() {
		/* Disassembly (ARM32, 104 instructions, 0x1A0 bytes):
		   // CFG: 22 blocks, 21 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01112074:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01112078:  0CD04DE2     SUB sp, sp, 0xc
		   0x0111207C:  74519FE5     LDR r5, [pc, 0x174]
		   0x01112080:  0040A0E1     MOV r4, r0
		   0x01112084:  05508FE0     ADD r5, pc, r5
		   0x01112088:  0000D5E5     LDRB r0, [r5]
		   0x0111208C:  000050E3     CMPS r0, r0, 0x0
		   0x01112090:  0A00001A     BNE $+0x30  // if (!=) goto 0x011120C0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01112094:  60019FE5     LDR r0, [pc, 0x160]
		   0x01112098:  00009FE7     LDR r0, [pc, r0]
		   0x0111209C:  2F24F9EB     BL $-0x1b6f3c
		   0x011120A0:  58019FE5     LDR r0, [pc, 0x158]
		   0x011120A4:  00009FE7     LDR r0, [pc, r0]
		   0x011120A8:  2C24F9EB     BL $-0x1b6f48
		   0x011120AC:  50019FE5     LDR r0, [pc, 0x150]
		   0x011120B0:  00009FE7     LDR r0, [pc, r0]
		   0x011120B4:  2924F9EB     BL $-0x1b6f54
		   0x011120B8:  0100A0E3     MOV r0, 0x1
		   0x011120BC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011120C0:  845094E5     LDR r5, [r4, 0x84]
		   0x011120C4:  000055E3     CMPS r0, r5, 0x0
		   0x011120C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011120D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011120CC:  BF24F9EB     BL $-0x1b6cfc
		   // ──── Block 4 if (!=) ────────────────────
		   0x011120D0:  0500A0E1     MOV r0, r5
		   0x011120D4:  43DFFFEB     BL $-0x82ec
		   0x011120D8:  050050E3     CMPS r0, r0, 0x5
		   0x011120DC:  1A0000AA     BGE $+0x70  // if (>=) goto 0x0111214C
		   // 
		   // ──── Block 5 else (<) ────────────────────
		   0x011120E0:  24019FE5     LDR r0, [pc, 0x124]
		   0x011120E4:  00009FE7     LDR r0, [pc, r0]
		   0x011120E8:  000090E5     LDR r0, [r0]
		   0x011120EC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011120F0:  045090E5     LDR r5, [r0, 0x4]
		   0x011120F4:  000055E3     CMPS r0, r5, 0x0
		   0x011120F8:  0000001A     BNE $+0x8  // if (!=) goto 0x01112100
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011120FC:  B324F9EB     BL $-0x1b6d2c
		   // ──── Block 7 if (!=) ────────────────────
		   0x01112100:  0500A0E1     MOV r0, r5
		   0x01112104:  0410A0E1     MOV r1, r4
		   0x01112108:  0020A0E3     MOV r2, 0x0
		   0x0111210C:  0030A0E3     MOV r3, 0x0
		   0x01112110:  AD6F10EB     BL $+0x41bebc  // CALL → FTUEMergeFridges.TryCallTrigger
		   0x01112114:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01112118:  00009FE7     LDR r0, [pc, r0]
		   0x0111211C:  000090E5     LDR r0, [r0]
		   0x01112120:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01112124:  045090E5     LDR r5, [r0, 0x4]
		   0x01112128:  000055E3     CMPS r0, r5, 0x0
		   0x0111212C:  0000001A     BNE $+0x8  // if (!=) goto 0x01112134
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01112130:  A624F9EB     BL $-0x1b6d60
		   // ──── Block 9 if (!=) ────────────────────
		   0x01112134:  0500A0E1     MOV r0, r5
		   0x01112138:  0410A0E1     MOV r1, r4
		   0x0111213C:  0020A0E3     MOV r2, 0x0
		   0x01112140:  0CD08DE2     ADD sp, sp, 0xc
		   0x01112144:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01112148:  30A110EA     B $+0x4284c8  // TAIL CALL → FTUEMergeFridgesV2.TryComplete
		   // ──── Block 10 if (>=) ────────────────────
		   0x0111214C:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01112150:  00009FE7     LDR r0, [pc, r0]
		   0x01112154:  000090E5     LDR r0, [r0]
		   0x01112158:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0111215C:  840094E5     LDR r0, [r4, 0x84]
		   0x01112160:  08B091E5     LDR fp, [r1, 0x8]
		   0x01112164:  000050E3     CMPS r0, r0, 0x0
		   0x01112168:  0100000A     BEQ $+0xc  // if (==) goto 0x01112174
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x0111216C:  4CA090E5     LDR r10, [r0, 0x4c]
		   0x01112170:  070000EA     B $+0x24  // goto 0x01112194
		   // ──── Block 12 if (==) ────────────────────
		   0x01112174:  9524F9EB     BL $-0x1b6da4
		   0x01112178:  4C00A0E3     MOV r0, 0x4c
		   0x0111217C:  00A090E5     LDR r10, [r0]
		   0x01112180:  840094E5     LDR r0, [r4, 0x84]  // vtable: ItemContainer.ReleaseTimers
		   0x01112184:  000050E3     CMPS r0, r0, 0x0
		   0x01112188:  0100001A     BNE $+0xc  // if (!=) goto 0x01112194
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0111218C:  8F24F9EB     BL $-0x1b6dbc
		   0x01112190:  0000A0E3     MOV r0, 0x0
		   // ──── Block 14 if (!=) ────────────────────
		   0x01112194:  13DFFFEB     BL $-0x83ac
		   0x01112198:  EC5094E5     LDR r5, [r4, 0xec]
		   0x0111219C:  0070A0E1     MOV r7, r0
		   0x011121A0:  000055E3     CMPS r0, r5, 0x0
		   0x011121A4:  0000001A     BNE $+0x8  // if (!=) goto 0x011121AC
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x011121A8:  8824F9EB     BL $-0x1b6dd8
		   // ──── Block 16 if (!=) ────────────────────
		   0x011121AC:  106094E5     LDR r6, [r4, 0x10]
		   0x011121B0:  0C4095E5     LDR r4, [r5, 0xc]
		   0x011121B4:  000056E3     CMPS r0, r6, 0x0
		   0x011121B8:  0000001A     BNE $+0x8  // if (!=) goto 0x011121C0
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x011121BC:  8324F9EB     BL $-0x1b6dec
		   // ──── Block 18 if (!=) ────────────────────
		   0x011121C0:  D481C6E1     LDRD r8, sb, [r6, 0x14]
		   0x011121C4:  00005BE3     CMPS r0, fp, 0x0
		   0x011121C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011121D0
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x011121CC:  7F24F9EB     BL $-0x1b6dfc
		   // ──── Block 20 if (!=) ────────────────────
		   0x011121D0:  0000A0E3     MOV r0, 0x0
		   0x011121D4:  0A10A0E1     MOV r1, r10
		   0x011121D8:  08008DE5     STR r0, [sp, 0x8]
		   0x011121DC:  0B00A0E1     MOV r0, fp
		   0x011121E0:  0720A0E1     MOV r2, r7
		   0x011121E4:  0430A0E1     MOV r3, r4
		   0x011121E8:  00038DE8     STM sp, {r8, sb}
		   0x011121EC:  448010EB     BL $+0x420118  // CALL → FTUESpeedUp.TriggerFTUE
		   0x011121F0:  0CD08DE2     ADD sp, sp, 0xc
		   0x011121F4:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x011121F8:  9B9D1103     TSTSEQ sb, r1, 0x26c0
		   0x011121FC:  8871F602     RSCSEQ r7, r6, 0x22
		   0x01112200:  886EF602     RSCSEQ r6, r6, 0x880
		   0x01112204:  0879F602     RSCSEQ r7, r6, 0x20000
		   0x01112208:  6878F602     RSCSEQ r7, r6, 0x680000
		   0x0111220C:  486EF602     RSCSEQ r6, r6, 0x480
		   0x01112210:  0871F602     RSCSEQ r7, r6, 0x2
		*/
	}

	// RVA: 0x110EE00 Offset: 0x110EE00 VA: 0x110EE00
	protected void ReduceContainerCapacity() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 6 blocks, 3 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110EE00:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110EE04:  EC1090E5     LDR r1, [r0, 0xec]
		   0x0110EE08:  0040A0E1     MOV r4, r0
		   0x0110EE0C:  000051E3     CMPS r0, r1, 0x0
		   0x0110EE10:  0300000A     BEQ $+0x14  // if (==) goto 0x0110EE24
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110EE14:  0C0091E5     LDR r0, [r1, 0xc]
		   0x0110EE18:  010040E2     SUB r0, r0, 0x1
		   0x0110EE1C:  0C0081E5     STR r0, [r1, 0xc]
		   0x0110EE20:  080000EA     B $+0x28  // goto 0x0110EE48
		   // ──── Block 2 if (==) ────────────────────
		   0x0110EE24:  6931F9EB     BL $-0x1b3a54
		   0x0110EE28:  0C00A0E3     MOV r0, 0xc
		   0x0110EE2C:  EC1094E5     LDR r1, [r4, 0xec]  // vtable: Item.ToString
		   0x0110EE30:  002090E5     LDR r2, [r0]
		   0x0110EE34:  000051E3     CMPS r0, r1, 0x0
		   0x0110EE38:  012042E2     SUB r2, r2, 0x1
		   0x0110EE3C:  002080E5     STR r2, [r0]
		   0x0110EE40:  3C00000A     BEQ $+0xf8
		   0x0110EE44:  0C0091E5     LDR r0, [r1, 0xc]
		   // ──── Block 4 ──────────────────────────────
		   0x0110EE48:  000050E3     CMPS r0, r0, 0x0
		   0x0110EE4C:  360000CA     BGT $+0xe0
		   0x0110EE50:  080091E5     LDR r0, [r1, 0x8]
		   0x0110EE54:  010040E2     SUB r0, r0, 0x1
		   0x0110EE58:  080081E5     STR r0, [r1, 0x8]
		   0x0110EE5C:  000050E3     CMPS r0, r0, 0x0
		   0x0110EE60:  1D0000CA     BGT $+0x7c
		*/
	}

	// RVA: 0x1112F38 Offset: 0x1112F38 VA: 0x1112F38 Slot: 9
	public override void SetCell(Cell newCell, bool forcePositionChange = false) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01112F38:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		*/
	}

	// RVA: 0x11118EC Offset: 0x11118EC VA: 0x11118EC
	private void TryToStartChargeTimer() {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011118EC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011118F0:  0040A0E1     MOV r4, r0
		   0x011118F4:  C00090E5     LDR r0, [r0, 0xc0]
		   0x011118F8:  000050E3     CMPS r0, r0, 0x0
		   0x011118FC:  1500001A     BNE $+0x5c  // if (!=) goto 0x01111958
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01111900:  EC5094E5     LDR r5, [r4, 0xec]
		   0x01111904:  000055E3     CMPS r0, r5, 0x0
		   0x01111908:  0000001A     BNE $+0x8  // if (!=) goto 0x01111910
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x0111190C:  AF26F9EB     BL $-0x1b653c
		   // ──── Block 3 if (!=) ────────────────────
		   0x01111910:  E86094E5     LDR r6, [r4, 0xe8]
		   0x01111914:  085095E5     LDR r5, [r5, 0x8]
		   0x01111918:  000056E3     CMPS r0, r6, 0x0
		   0x0111191C:  0000001A     BNE $+0x8  // if (!=) goto 0x01111924
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01111920:  AA26F9EB     BL $-0x1b6550
		   // ──── Block 5 if (!=) ────────────────────
		   0x01111924:  080096E5     LDR r0, [r6, 0x8]
		   0x01111928:  000055E1     CMPS r0, r5, r0
		   0x0111192C:  090000AA     BGE $+0x2c  // if (>=) goto 0x01111958
		   // 
		   // ──── Block 6 else (<) ────────────────────
		   0x01111930:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x01111934:  000050E3     CMPS r0, r0, 0x0
		   0x01111938:  7080BD18     POPNE {r4, r5, r6, pc}
		   0x0111193C:  845094E5     LDR r5, [r4, 0x84]
		   0x01111940:  000055E3     CMPS r0, r5, 0x0
		   0x01111944:  0000001A     BNE $+0x8  // if (!=) goto 0x0111194C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01111948:  A026F9EB     BL $-0x1b6578
		   // ──── Block 9 if (!=) ────────────────────
		   0x0111194C:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x01111950:  000050E3     CMPS r0, r0, 0x0
		   0x01111954:  0000000A     BEQ $+0x8
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x01111958:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x110E60C Offset: 0x110E60C VA: 0x110E60C Slot: 50
	protected virtual void ShowTimerIndicator() {
		/* Disassembly (ARM32, 34 instructions, 0x88 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E60C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110E610:  8C5090E5     LDR r5, [r0, 0x8c]
		   0x0110E614:  0040A0E1     MOV r4, r0
		   0x0110E618:  000055E3     CMPS r0, r5, 0x0
		   0x0110E61C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E624
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E620:  6A33F9EB     BL $-0x1b3250
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E624:  0500A0E1     MOV r0, r5
		   0x0110E628:  0010A0E3     MOV r1, 0x0
		   0x0110E62C:  CC4510EB     BL $+0x411738  // CALL → EnergyEffect.Hide
		   0x0110E630:  945094E5     LDR r5, [r4, 0x94]
		   0x0110E634:  000055E3     CMPS r0, r5, 0x0
		   0x0110E638:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E640
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110E63C:  6333F9EB     BL $-0x1b326c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110E640:  0500A0E1     MOV r0, r5
		   0x0110E644:  0010A0E3     MOV r1, 0x0
		   0x0110E648:  514D10EB     BL $+0x41354c  // CALL → SparklesEffect.Hide
		   0x0110E64C:  905094E5     LDR r5, [r4, 0x90]
		   0x0110E650:  000055E3     CMPS r0, r5, 0x0
		   0x0110E654:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E65C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110E658:  5C33F9EB     BL $-0x1b3288
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110E65C:  0500A0E1     MOV r0, r5
		   0x0110E660:  0110A0E3     MOV r1, 0x1
		   0x0110E664:  0020A0E3     MOV r2, 0x0
		   0x0110E668:  20B9FFEB     BL $-0x11b78
		   0x0110E66C:  000050E3     CMPS r0, r0, 0x0
		   0x0110E670:  3088BD18     POPNE {r4, r5, fp, pc}
		   0x0110E674:  904094E5     LDR r4, [r4, 0x90]
		   0x0110E678:  000054E3     CMPS r0, r4, 0x0
		   0x0110E67C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E684
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110E680:  5233F9EB     BL $-0x1b32b0
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110E684:  0400A0E1     MOV r0, r4
		   0x0110E688:  0010A0E3     MOV r1, 0x0
		   0x0110E68C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E690:  81B9FFEA     B $-0x119f4
		*/
	}

	// RVA: 0x11130EC Offset: 0x11130EC VA: 0x11130EC
	public void Recharge(Action<bool> rechargeAction) {
		/* Disassembly (ARM32, 192 instructions, 0x300 bytes):
		   // CFG: 23 blocks, 21 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011130EC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011130F0:  4CD04DE2     SUB sp, sp, 0x4c
		   0x011130F4:  B4429FE5     LDR r4, [pc, 0x2b4]
		   0x011130F8:  0050A0E1     MOV r5, r0
		   0x011130FC:  0160A0E1     MOV r6, r1
		   0x01113100:  04408FE0     ADD r4, pc, r4
		   0x01113104:  0000D4E5     LDRB r0, [r4]
		   0x01113108:  000050E3     CMPS r0, r0, 0x0
		   0x0111310C:  1000001A     BNE $+0x48  // if (!=) goto 0x01113154
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01113110:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x01113114:  00009FE7     LDR r0, [pc, r0]
		   0x01113118:  1020F9EB     BL $-0x1b7fb8
		   0x0111311C:  94029FE5     LDR r0, [pc, 0x294]
		   0x01113120:  00009FE7     LDR r0, [pc, r0]
		   0x01113124:  0D20F9EB     BL $-0x1b7fc4
		   0x01113128:  8C029FE5     LDR r0, [pc, 0x28c]
		   0x0111312C:  00009FE7     LDR r0, [pc, r0]
		   0x01113130:  0A20F9EB     BL $-0x1b7fd0
		   0x01113134:  84029FE5     LDR r0, [pc, 0x284]
		   0x01113138:  00009FE7     LDR r0, [pc, r0]
		   0x0111313C:  0720F9EB     BL $-0x1b7fdc
		   0x01113140:  7C029FE5     LDR r0, [pc, 0x27c]
		   0x01113144:  00009FE7     LDR r0, [pc, r0]
		   0x01113148:  0420F9EB     BL $-0x1b7fe8
		   0x0111314C:  0100A0E3     MOV r0, 0x1
		   0x01113150:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01113154:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x01113158:  0010A0E3     MOV r1, 0x0
		   0x0111315C:  00009FE7     LDR r0, [pc, r0]
		   0x01113160:  44108DE5     STR r1, [sp, 0x44]
		   0x01113164:  40108DE5     STR r1, [sp, 0x40]
		   0x01113168:  000090E5     LDR r0, [r0]
		   0x0111316C:  48108DE5     STR r1, [sp, 0x48]
		   0x01113170:  34108DE5     STR r1, [sp, 0x34]
		   0x01113174:  30108DE5     STR r1, [sp, 0x30]
		   0x01113178:  38108DE5     STR r1, [sp, 0x38]
		   0x0111317C:  9020F9EB     BL $-0x1b7db8
		   0x01113180:  0010A0E3     MOV r1, 0x0
		   0x01113184:  0040A0E1     MOV r4, r0
		   0x01113188:  97087EEB     BL $+0x1f82264  // CALL → Object..ctor
		   0x0111318C:  000054E3     CMPS r0, r4, 0x0
		   0x01113190:  0000001A     BNE $+0x8  // if (!=) goto 0x01113198
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01113194:  8D20F9EB     BL $-0x1b7dc4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01113198:  AC00D5E5     LDRB r0, [r5, 0xac]
		   0x0111319C:  0C5084E5     STR r5, [r4, 0xc]
		   0x011131A0:  000050E3     CMPS r0, r0, 0x0
		   0x011131A4:  086084E5     STR r6, [r4, 0x8]
		   0x011131A8:  1100000A     BEQ $+0x4c  // if (==) goto 0x011131F4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x011131AC:  0000A0E3     MOV r0, 0x0
		   0x011131B0:  0070A0E3     MOV r7, 0x0
		   0x011131B4:  499B01EB     BL $+0x66d2c  // CALL → ProfileStorage.get_numEnergy
		   0x011131B8:  CC1095E5     LDR r1, [r5, 0xcc]
		   0x011131BC:  010050E1     CMPS r0, r0, r1
		   0x011131C0:  3C0000AA     BGE $+0xf8  // if (>=) goto 0x011132B8
		   // 
		   // ──── Block 6 else (<) ────────────────────
		   0x011131C4:  000195E5     LDR r0, [r5, 0x100]
		   0x011131C8:  000050E3     CMPS r0, r0, 0x0
		   0x011131CC:  0300000A     BEQ $+0x14  // if (==) goto 0x011131E0
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x011131D0:  0C2090E5     LDR r2, [r0, 0xc]
		   0x011131D4:  141090E5     LDR r1, [r0, 0x14]
		   0x011131D8:  200090E5     LDR r0, [r0, 0x20]
		   0x011131DC:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   // ──── Block 8 if (==) ────────────────────
		   0x011131E0:  0400A0E1     MOV r0, r4
		   0x011131E4:  0010A0E3     MOV r1, 0x0
		   0x011131E8:  4CD08DE2     ADD sp, sp, 0x4c
		   0x011131EC:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011131F0:  7F0000EA     B $+0x204  // TAIL CALL → <>c__DisplayClass82_0.<Recharge>g__Spend|0
		   // ──── Block 9 if (==) ────────────────────
		   0x011131F4:  0010A0E3     MOV r1, 0x0
		   0x011131F8:  1900A0E3     MOV r0, 0x19
		   0x011131FC:  F000CDE1     STRD r0, r1, [sp]
		   0x01113200:  30008DE2     ADD r0, sp, 0x30
		   0x01113204:  0210A0E3     MOV r1, 0x2
		   0x01113208:  0320A0E3     MOV r2, 0x3
		   0x0111320C:  0C30A0E3     MOV r3, 0xc
		   0x01113210:  602008EB     BL $+0x208188  // CALL → CurrencySinkDataContainer..ctor
		   0x01113214:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x01113218:  00009FE7     LDR r0, [pc, r0]
		   0x0111321C:  000090E5     LDR r0, [r0]
		   0x01113220:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01113224:  006090E5     LDR r6, [r0]
		   0x01113228:  000056E3     CMPS r0, r6, 0x0
		   0x0111322C:  0000001A     BNE $+0x8  // if (!=) goto 0x01113234
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01113230:  6620F9EB     BL $-0x1b7e60
		   // ──── Block 11 if (!=) ────────────────────
		   0x01113234:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x01113238:  00009FE7     LDR r0, [pc, r0]
		   0x0111323C:  C48095E5     LDR r8, [r5, 0xc4]
		   0x01113240:  C8B095E5     LDR fp, [r5, 0xc8]
		   0x01113244:  000090E5     LDR r0, [r0]
		   0x01113248:  185096E5     LDR r5, [r6, 0x18]
		   0x0111324C:  5C20F9EB     BL $-0x1b7e88
		   0x01113250:  0060A0E1     MOV r6, r0
		   0x01113254:  88019FE5     LDR r0, [pc, 0x188]
		   0x01113258:  0410A0E1     MOV r1, r4
		   0x0111325C:  0030A0E3     MOV r3, 0x0
		   0x01113260:  0090A0E3     MOV sb, 0x0
		   0x01113264:  00009FE7     LDR r0, [pc, r0]
		   0x01113268:  002090E5     LDR r2, [r0]
		   0x0111326C:  0600A0E1     MOV r0, r6
		   0x01113270:  A93B52EB     BL $+0x148eeac  // CALL → Action<bool>..ctor
		   0x01113274:  30A08DE2     ADD r10, sp, 0x30
		   0x01113278:  000055E3     CMPS r0, r5, 0x0
		   0x0111327C:  90049AE8     LDM r10, {r4, r7, r10}
		   0x01113280:  0000001A     BNE $+0x8  // if (!=) goto 0x01113288
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01113284:  5120F9EB     BL $-0x1b7eb4
		   // ──── Block 13 if (!=) ────────────────────
		   0x01113288:  58019FE5     LDR r0, [pc, 0x158]
		   0x0111328C:  0810A0E1     MOV r1, r8
		   0x01113290:  0B20A0E1     MOV r2, fp
		   0x01113294:  0630A0E1     MOV r3, r6
		   0x01113298:  00009FE7     LDR r0, [pc, r0]
		   0x0111329C:  000090E5     LDR r0, [r0]
		   0x011132A0:  10908DE5     STR sb, [sp, 0x10]
		   0x011132A4:  91048DE8     STM sp, {r0, r4, r7, r10}
		   0x011132A8:  0500A0E1     MOV r0, r5
		   0x011132AC:  14908DE5     STR sb, [sp, 0x14]
		   0x011132B0:  F7880CEB     BL $+0x3223e4  // CALL → GemsSystem.SpendGems
		   0x011132B4:  3B0000EA     B $+0xf4  // goto 0x011133A8
		   // ──── Block 14 if (>=) ────────────────────
		   0x011132B8:  40008DE2     ADD r0, sp, 0x40
		   0x011132BC:  1960A0E3     MOV r6, 0x19
		   0x011132C0:  1510A0E3     MOV r1, 0x15
		   0x011132C4:  0320A0E3     MOV r2, 0x3
		   0x011132C8:  0C30A0E3     MOV r3, 0xc
		   0x011132CC:  F060CDE1     STRD r6, r7, [sp]
		   0x011132D0:  302008EB     BL $+0x2080c8  // CALL → CurrencySinkDataContainer..ctor
		   0x011132D4:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x011132D8:  00009FE7     LDR r0, [pc, r0]
		   0x011132DC:  000090E5     LDR r0, [r0]
		   0x011132E0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011132E4:  006090E5     LDR r6, [r0]
		   0x011132E8:  000056E3     CMPS r0, r6, 0x0
		   0x011132EC:  0000001A     BNE $+0x8  // if (!=) goto 0x011132F4
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x011132F0:  3620F9EB     BL $-0x1b7f20
		   // ──── Block 16 if (!=) ────────────────────
		   0x011132F4:  D4709FE5     LDR r7, [pc, 0xd4]
		   0x011132F8:  CC0095E5     LDR r0, [r5, 0xcc]
		   0x011132FC:  07708FE0     ADD r7, pc, r7
		   0x01113300:  20008DE5     STR r0, [sp, 0x20]
		   0x01113304:  1C6096E5     LDR r6, [r6, 0x1c]
		   0x01113308:  0000D7E5     LDRB r0, [r7]
		   0x0111330C:  000050E3     CMPS r0, r0, 0x0
		   0x01113310:  0400001A     BNE $+0x18  // if (!=) goto 0x01113328
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01113314:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01113318:  00009FE7     LDR r0, [pc, r0]
		   0x0111331C:  8F1FF9EB     BL $-0x1b81bc
		   0x01113320:  0100A0E3     MOV r0, 0x1
		   0x01113324:  0000C7E5     STRB r0, [r7]
		   // ──── Block 18 if (!=) ────────────────────
		   0x01113328:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x0111332C:  0010A0E3     MOV r1, 0x0
		   0x01113330:  00009FE7     LDR r0, [pc, r0]
		   0x01113334:  000090E5     LDR r0, [r0]
		   0x01113338:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111333C:  080090E5     LDR r0, [r0, 0x8]
		   0x01113340:  1C008DE5     STR r0, [sp, 0x1c]
		   0x01113344:  24008DE2     ADD r0, sp, 0x24
		   0x01113348:  FE4800EB     BL $+0x12400  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x0111334C:  24B09DE5     LDR fp, [sp, 0x24]
		   0x01113350:  000056E3     CMPS r0, r6, 0x0
		   0x01113354:  28709DE5     LDR r7, [sp, 0x28]
		   0x01113358:  2C509DE5     LDR r5, [sp, 0x2c]
		   0x0111335C:  40909DE5     LDR sb, [sp, 0x40]
		   0x01113360:  44809DE5     LDR r8, [sp, 0x44]
		   0x01113364:  48A09DE5     LDR r10, [sp, 0x48]
		   0x01113368:  0000001A     BNE $+0x8  // if (!=) goto 0x01113370
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0111336C:  1720F9EB     BL $-0x1b7f9c
		   // ──── Block 20 if (!=) ────────────────────
		   0x01113370:  0000A0E3     MOV r0, 0x0
		   0x01113374:  00708DE5     STR r7, [sp]
		   0x01113378:  14008DE5     STR r0, [sp, 0x14]
		   0x0111337C:  0600A0E1     MOV r0, r6
		   0x01113380:  20028DE9     STMIA sp, {r5, sb}
		   0x01113384:  0B30A0E1     MOV r3, fp
		   0x01113388:  0C808DE5     STR r8, [sp, 0xc]
		   0x0111338C:  10A08DE5     STR r10, [sp, 0x10]
		   0x01113390:  20109DE5     LDR r1, [sp, 0x20]
		   0x01113394:  1C209DE5     LDR r2, [sp, 0x1c]
		   0x01113398:  A5800CEB     BL $+0x32029c  // CALL → EnergySystem.SpendEnergy
		   0x0111339C:  0400A0E1     MOV r0, r4
		   0x011133A0:  0110A0E3     MOV r1, 0x1
		   0x011133A4:  120000EB     BL $+0x50  // CALL → <>c__DisplayClass82_0.<Recharge>g__Spend|0
		   // ──── Block 21 ──────────────────────────────
		   0x011133A8:  4CD08DE2     ADD sp, sp, 0x4c
		   0x011133AC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x011133B0:  218D1103     TSTSEQ r8, r1, 0x840
		   0x011133B4:  8446F602     RSCSEQ r4, r6, 0x8400000
		   0x011133B8:  DC4AF602     RSCSEQ r4, r6, 0xdc000
		   0x011133BC:  9C68F602     RSCSEQ r6, r6, 0x9c0000
		   0x011133C0:  9468F602     RSCSEQ r6, r6, 0x940000
		   0x011133C4:  8C68F602     RSCSEQ r6, r6, 0x8c0000
		   0x011133C8:  7068F602     RSCSEQ r6, r6, 0x700000
		   0x011133CC:  2449F602     RSCSEQ r4, r6, 0x90000
		   0x011133D0:  E5891103     TSTSEQ r8, r1, 0x394000
		   0x011133D4:  3860F602     RSCSEQ r6, r6, 0x38
		   0x011133D8:  2060F602     RSCSEQ r6, r6, 0x20
		   0x011133DC:  E449F602     RSCSEQ r4, r6, 0x390000
		   0x011133E0:  6045F602     RSCSEQ r4, r6, 0x18000000
		   0x011133E4:  6467F602     RSCSEQ r6, r6, 0x1900000
		   0x011133E8:  3867F602     RSCSEQ r6, r6, 0xe00000
		*/
	}

	// RVA: 0x111364C Offset: 0x111364C VA: 0x111364C
	public void RechargeForFree() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111364C:  00482DE9     PUSH {fp, lr}
		   0x01113650:  08D04DE2     SUB sp, sp, 0x8
		   0x01113654:  0010A0E3     MOV r1, 0x0
		   0x01113658:  0020A0E3     MOV r2, 0x0
		   0x0111365C:  0030A0E3     MOV r3, 0x0
		   0x01113660:  F01080E5     STR r1, [r0, 0xf0]
		   0x01113664:  010000EB     BL $+0xc  // CALL → ItemContainer.StartRechargeAnimation
		   0x01113668:  08D08DE2     ADD sp, sp, 0x8
		   0x0111366C:  0088BDE8     POP {fp, pc}
		*/
	}

	// RVA: 0x1113788 Offset: 0x1113788 VA: 0x1113788
	public void SpeedUp(float boostSeconds) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01113788:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111378C:  10D04DE2     SUB sp, sp, 0x10
		*/
	}

	// RVA: 0x110D9F0 Offset: 0x110D9F0 VA: 0x110D9F0 Slot: 51
	public virtual void Restore() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D9F0:  0C0F00EA     B $+0x3c38  // TAIL CALL → ItemContainer.RestoreTimer
		*/
	}

	// RVA: 0x1113670 Offset: 0x1113670 VA: 0x1113670
	private void StartRechargeAnimation(float time, Action onAnimationEnd, bool silent = false) {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01113670:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01113674:  10D04DE2     SUB sp, sp, 0x10
		   0x01113678:  EC609FE5     LDR r6, [pc, 0xec]
		   0x0111367C:  0040A0E1     MOV r4, r0
		   0x01113680:  0390A0E1     MOV sb, r3
		   0x01113684:  0270A0E1     MOV r7, r2
		   0x01113688:  06608FE0     ADD r6, pc, r6
		   0x0111368C:  0180A0E1     MOV r8, r1
		   0x01113690:  0000D6E5     LDRB r0, [r6]
		   0x01113694:  000050E3     CMPS r0, r0, 0x0
		   0x01113698:  0A00001A     BNE $+0x30  // if (!=) goto 0x011136C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111369C:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x011136A0:  00009FE7     LDR r0, [pc, r0]
		   0x011136A4:  AD1EF9EB     BL $-0x1b8544
		   0x011136A8:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x011136AC:  00009FE7     LDR r0, [pc, r0]
		   0x011136B0:  AA1EF9EB     BL $-0x1b8550
		   0x011136B4:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x011136B8:  00009FE7     LDR r0, [pc, r0]
		   0x011136BC:  A71EF9EB     BL $-0x1b855c
		   0x011136C0:  0100A0E3     MOV r0, 0x1
		   0x011136C4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011136C8:  AC009FE5     LDR r0, [pc, 0xac]
		   0x011136CC:  00009FE7     LDR r0, [pc, r0]
		   0x011136D0:  000090E5     LDR r0, [r0]
		   0x011136D4:  3A1FF9EB     BL $-0x1b8310
		   0x011136D8:  0010A0E3     MOV r1, 0x0
		   0x011136DC:  0060A0E1     MOV r6, r0
		   0x011136E0:  41077EEB     BL $+0x1f81d0c  // CALL → Object..ctor
		   0x011136E4:  000056E3     CMPS r0, r6, 0x0
		   0x011136E8:  0000001A     BNE $+0x8  // if (!=) goto 0x011136F0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011136EC:  371FF9EB     BL $-0x1b831c
		   // ──── Block 4 if (!=) ────────────────────
		   0x011136F0:  0400A0E1     MOV r0, r4
		   0x011136F4:  0110A0E3     MOV r1, 0x1
		   0x011136F8:  084086E5     STR r4, [r6, 0x8]
		   0x011136FC:  0C7086E5     STR r7, [r6, 0xc]
		   0x01113700:  39E1FFEB     BL $-0x7b14
		   0x01113704:  907094E5     LDR r7, [r4, 0x90]
		   0x01113708:  70009FE5     LDR r0, [pc, 0x70]
		   0x0111370C:  00009FE7     LDR r0, [pc, r0]
		   0x01113710:  000090E5     LDR r0, [r0]
		   0x01113714:  2A1FF9EB     BL $-0x1b8350
		   0x01113718:  0040A0E1     MOV r4, r0
		   0x0111371C:  60009FE5     LDR r0, [pc, 0x60]
		   0x01113720:  0610A0E1     MOV r1, r6
		   0x01113724:  0030A0E3     MOV r3, 0x0
		   0x01113728:  0050A0E3     MOV r5, 0x0
		   0x0111372C:  00009FE7     LDR r0, [pc, r0]
		   0x01113730:  002090E5     LDR r2, [r0]
		   0x01113734:  0400A0E1     MOV r0, r4
		   0x01113738:  01677AEB     BL $+0x1e99c0c  // CALL → Action..ctor
		   0x0111373C:  000057E3     CMPS r0, r7, 0x0
		   0x01113740:  0000001A     BNE $+0x8  // if (!=) goto 0x01113748
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01113744:  211FF9EB     BL $-0x1b8374
		   // ──── Block 6 if (!=) ────────────────────
		   0x01113748:  0700A0E1     MOV r0, r7
		   0x0111374C:  0810A0E1     MOV r1, r8
		   0x01113750:  0020A0E3     MOV r2, 0x0
		   0x01113754:  0030A0E3     MOV r3, 0x0
		   0x01113758:  10028DE8     STM sp, {r4, sb}
		   0x0111375C:  08508DE5     STR r5, [sp, 0x8]
		   0x01113760:  CDA6FFEB     BL $-0x164c4
		   0x01113764:  10D08DE2     ADD sp, sp, 0x10
		   0x01113768:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x0111376C:  9A871103     TSTSEQ r8, r1, 0x2680000
		   0x01113770:  2432F602     RSCSEQ r3, r6, 0x40000002
		   0x01113774:  2863F602     RSCSEQ r6, r6, 0xa0000000
		   0x01113778:  2063F602     RSCSEQ r6, r6, 0x80000000
		   0x0111377C:  0C63F602     RSCSEQ r6, r6, 0x30000000
		   0x01113780:  B831F602     RSCSEQ r3, r6, 0x2e
		   0x01113784:  A862F602     RSCSEQ r6, r6, 0x8000000a
		*/
	}

	// RVA: 0x1113880 Offset: 0x1113880 VA: 0x1113880
	private void Awake() {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01113880:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01113884:  CC509FE5     LDR r5, [pc, 0xcc]
		   0x01113888:  0040A0E1     MOV r4, r0
		   0x0111388C:  05508FE0     ADD r5, pc, r5
		   0x01113890:  0000D5E5     LDRB r0, [r5]
		   0x01113894:  000050E3     CMPS r0, r0, 0x0
		   0x01113898:  0D00001A     BNE $+0x3c  // if (!=) goto 0x011138D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111389C:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x011138A0:  00009FE7     LDR r0, [pc, r0]
		   0x011138A4:  2D1EF9EB     BL $-0x1b8744
		   0x011138A8:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x011138AC:  00009FE7     LDR r0, [pc, r0]
		   0x011138B0:  2A1EF9EB     BL $-0x1b8750
		   0x011138B4:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x011138B8:  00009FE7     LDR r0, [pc, r0]
		   0x011138BC:  271EF9EB     BL $-0x1b875c
		   0x011138C0:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x011138C4:  00009FE7     LDR r0, [pc, r0]
		   0x011138C8:  241EF9EB     BL $-0x1b8768
		   0x011138CC:  0100A0E3     MOV r0, 0x1
		   0x011138D0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011138D4:  90509FE5     LDR r5, [pc, 0x90]
		   0x011138D8:  05509FE7     LDR r5, [pc, r5]
		   0x011138DC:  000095E5     LDR r0, [r5]
		   0x011138E0:  741090E5     LDR r1, [r0, 0x74]
		   0x011138E4:  000051E3     CMPS r0, r1, 0x0
		   0x011138E8:  0100001A     BNE $+0xc  // if (!=) goto 0x011138F4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011138EC:  681EF9EB     BL $-0x1b8658
		   0x011138F0:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x011138F4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x011138F8:  70009FE5     LDR r0, [pc, 0x70]
		   0x011138FC:  00009FE7     LDR r0, [pc, r0]
		   0x01113900:  105091E5     LDR r5, [r1, 0x10]
		   0x01113904:  000090E5     LDR r0, [r0]
		   0x01113908:  AD1EF9EB     BL $-0x1b8544
		   0x0111390C:  0060A0E1     MOV r6, r0
		   0x01113910:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01113914:  0410A0E1     MOV r1, r4
		   0x01113918:  0030A0E3     MOV r3, 0x0
		   0x0111391C:  00009FE7     LDR r0, [pc, r0]
		   0x01113920:  002090E5     LDR r2, [r0]
		   0x01113924:  0600A0E1     MOV r0, r6
		   0x01113928:  85667AEB     BL $+0x1e99a1c  // CALL → Action..ctor
		   0x0111392C:  000055E3     CMPS r0, r5, 0x0
		   0x01113930:  0000001A     BNE $+0x8  // if (!=) goto 0x01113938
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01113934:  A51EF9EB     BL $-0x1b8564
		   // ──── Block 6 if (!=) ────────────────────
		   0x01113938:  38009FE5     LDR r0, [pc, 0x38]
		   0x0111393C:  0610A0E1     MOV r1, r6
		   0x01113940:  0020A0E3     MOV r2, 0x0
		   0x01113944:  00009FE7     LDR r0, [pc, r0]
		   0x01113948:  003090E5     LDR r3, [r0]
		   0x0111394C:  0500A0E1     MOV r0, r5
		   0x01113950:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01113954:  3A345FEA     B $+0x17cd0f0  // TAIL CALL → UnityEventsHelper.EventList<object>.Add
		   0x01113958:  97851103     TSTSEQ r8, r1, 0x25c00000
		   0x0111395C:  2430F602     RSCSEQ r3, r6, 0x24
		   0x01113960:  3441F602     RSCSEQ r4, r6, 0xd
		   0x01113964:  2461F602     RSCSEQ r6, r6, 0x9
		   0x01113968:  6C3DF602     RSCSEQ r3, r6, 0x1b00
		   0x0111396C:  583DF602     RSCSEQ r3, r6, 0x1600
		   0x01113970:  C82FF602     RSCSEQ r2, r6, 0x320
		   0x01113974:  C060F602     RSCSEQ r6, r6, 0xc0
		   0x01113978:  9C40F602     RSCSEQ r4, r6, 0x9c
		*/
	}

	// RVA: 0x111397C Offset: 0x111397C VA: 0x111397C
	private void OnDestroy() {
		/* Disassembly (ARM32, 62 instructions, 0xF8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111397C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01113980:  C8509FE5     LDR r5, [pc, 0xc8]
		   0x01113984:  0040A0E1     MOV r4, r0
		   0x01113988:  05508FE0     ADD r5, pc, r5
		   0x0111398C:  0000D5E5     LDRB r0, [r5]
		   0x01113990:  000050E3     CMPS r0, r0, 0x0
		   0x01113994:  0D00001A     BNE $+0x3c  // if (!=) goto 0x011139D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01113998:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x0111399C:  00009FE7     LDR r0, [pc, r0]
		   0x011139A0:  EE1DF9EB     BL $-0x1b8840
		   0x011139A4:  AC009FE5     LDR r0, [pc, 0xac]
		   0x011139A8:  00009FE7     LDR r0, [pc, r0]
		   0x011139AC:  EB1DF9EB     BL $-0x1b884c
		   0x011139B0:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x011139B4:  00009FE7     LDR r0, [pc, r0]
		   0x011139B8:  E81DF9EB     BL $-0x1b8858
		   0x011139BC:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x011139C0:  00009FE7     LDR r0, [pc, r0]
		   0x011139C4:  E51DF9EB     BL $-0x1b8864
		   0x011139C8:  0100A0E3     MOV r0, 0x1
		   0x011139CC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011139D0:  8C509FE5     LDR r5, [pc, 0x8c]
		   0x011139D4:  05509FE7     LDR r5, [pc, r5]
		   0x011139D8:  000095E5     LDR r0, [r5]
		   0x011139DC:  741090E5     LDR r1, [r0, 0x74]
		   0x011139E0:  000051E3     CMPS r0, r1, 0x0
		   0x011139E4:  0100001A     BNE $+0xc  // if (!=) goto 0x011139F0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011139E8:  291EF9EB     BL $-0x1b8754
		   0x011139EC:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x011139F0:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x011139F4:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x011139F8:  00009FE7     LDR r0, [pc, r0]
		   0x011139FC:  105091E5     LDR r5, [r1, 0x10]
		   0x01113A00:  000090E5     LDR r0, [r0]
		   0x01113A04:  6E1EF9EB     BL $-0x1b8640
		   0x01113A08:  0060A0E1     MOV r6, r0
		   0x01113A0C:  58009FE5     LDR r0, [pc, 0x58]
		   0x01113A10:  0410A0E1     MOV r1, r4
		   0x01113A14:  0030A0E3     MOV r3, 0x0
		   0x01113A18:  00009FE7     LDR r0, [pc, r0]
		   0x01113A1C:  002090E5     LDR r2, [r0]
		   0x01113A20:  0600A0E1     MOV r0, r6
		   0x01113A24:  46667AEB     BL $+0x1e99920  // CALL → Action..ctor
		   0x01113A28:  000055E3     CMPS r0, r5, 0x0
		   0x01113A2C:  0000001A     BNE $+0x8  // if (!=) goto 0x01113A34
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01113A30:  661EF9EB     BL $-0x1b8660
		   // ──── Block 6 if (!=) ────────────────────
		   0x01113A34:  34009FE5     LDR r0, [pc, 0x34]
		   0x01113A38:  0610A0E1     MOV r1, r6
		   0x01113A3C:  00009FE7     LDR r0, [pc, r0]
		   0x01113A40:  002090E5     LDR r2, [r0]
		   0x01113A44:  0500A0E1     MOV r0, r5
		   0x01113A48:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01113A4C:  44345FEA     B $+0x17cd118  // TAIL CALL → UnityEventsHelper.EventList<object>.Remove
		   0x01113A50:  9C841103     TSTSEQ r8, r1, 0x9c000000
		   0x01113A54:  282FF602     RSCSEQ r2, r6, 0xa0
		   0x01113A58:  C054F602     RSCSEQ r5, r6, 0xc0000000
		   0x01113A5C:  2860F602     RSCSEQ r6, r6, 0x28
		   0x01113A60:  703CF602     RSCSEQ r3, r6, 0x7000
		   0x01113A64:  5C3CF602     RSCSEQ r3, r6, 0x5c00
		   0x01113A68:  CC2EF602     RSCSEQ r2, r6, 0xcc0
		   0x01113A6C:  C45FF602     RSCSEQ r5, r6, 0x310
		   0x01113A70:  2C54F602     RSCSEQ r5, r6, 0x2c000000
		*/
	}

	// RVA: 0x1113A74 Offset: 0x1113A74 VA: 0x1113A74
	private void OnUnpause() {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01113A74:  10402DE9     PUSH {r4, lr}
		   0x01113A78:  0040A0E1     MOV r4, r0
		   0x01113A7C:  000090E5     LDR r0, [r0]
		   0x01113A80:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x01113A84:  0400A0E1     MOV r0, r4
		   0x01113A88:  0310A0E1     MOV r1, r3
		   0x01113A8C:  32FF2FE1     BLX r2
		   0x01113A90:  000050E3     CMPS r0, r0, 0x0
		   0x01113A94:  1080BD08     POPEQ {r4, pc}
		   0x01113A98:  0400A0E1     MOV r0, r4
		   0x01113A9C:  1040BDE8     POP {r4, lr}
		   0x01113AA0:  E0F6FFEA     B $-0x2478
		*/
	}

	// RVA: 0x110EDE4 Offset: 0x110EDE4 VA: 0x110EDE4
	protected void OnSpawnItem(ItemData itemData, Cell cell) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110EDE4:  E40090E5     LDR r0, [r0, 0xe4]
		   0x0110EDE8:  000050E3     CMPS r0, r0, 0x0
		   0x0110EDEC:  1EFF2F01     BXEQ lr
		   0x0110EDF0:  0CC090E5     LDR ip, [r0, 0xc]
		   0x0110EDF4:  143090E5     LDR r3, [r0, 0x14]
		   0x0110EDF8:  200090E5     LDR r0, [r0, 0x20]
		   0x0110EDFC:  1CFF2FE1     BX ip
		*/
	}

	// RVA: 0x1111628 Offset: 0x1111628 VA: 0x1111628
	private void RestoreTimer() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01111628:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x11119BC Offset: 0x11119BC VA: 0x11119BC
	private void CancelTimer() {
		/* Disassembly (ARM32, 13 instructions, 0x34 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011119BC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011119C0:  0040A0E1     MOV r4, r0
		   0x011119C4:  340090E5     LDR r0, [r0, 0x34]
		   0x011119C8:  0010A0E3     MOV r1, 0x0
		   0x011119CC:  0050A0E3     MOV r5, 0x0
		   0x011119D0:  FA99FFEB     BL $-0x19810
		   0x011119D4:  C00094E5     LDR r0, [r4, 0xc0]
		   0x011119D8:  000050E3     CMPS r0, r0, 0x0
		   0x011119DC:  0200000A     BEQ $+0x10  // if (==) goto 0x011119EC
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x011119E0:  0400A0E1     MOV r0, r4
		   0x011119E4:  66F3FFEB     BL $-0x3260
		   0x011119E8:  C05084E5     STR r5, [r4, 0xc0]
		   // ──── Block 2 if (==) ────────────────────
		   0x011119EC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1113AA4 Offset: 0x1113AA4 VA: 0x1113AA4
	private void AddCharges(int count) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01113AA4:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x1113E14 Offset: 0x1113E14 VA: 0x1113E14
	private IEnumerator StartCapacityTimer(float startTime) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01113E14:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x1113EAC Offset: 0x1113EAC VA: 0x1113EAC
	public void CalculateAndSendSpeedupCost(float timeLeft) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01113EAC:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		*/
	}

	// RVA: 0x110E5A4 Offset: 0x110E5A4 VA: 0x110E5A4 Slot: 52
	protected virtual void ReadyToSpawn() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E5A4:  10402DE9     PUSH {r4, lr}
		   0x0110E5A8:  0040A0E1     MOV r4, r0
		   0x0110E5AC:  000090E5     LDR r0, [r0]
		   0x0110E5B0:  682290E5     LDR r2, [r0, 0x268]
		   0x0110E5B4:  6C1290E5     LDR r1, [r0, 0x26c]
		   0x0110E5B8:  0400A0E1     MOV r0, r4
		   0x0110E5BC:  32FF2FE1     BLX r2  // virtual call: vtable+0x268
		   0x0110E5C0:  944094E5     LDR r4, [r4, 0x94]
		   0x0110E5C4:  000054E3     CMPS r0, r4, 0x0
		   0x0110E5C8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E5D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E5CC:  7F33F9EB     BL $-0x1b31fc
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E5D0:  0400A0E1     MOV r0, r4
		   0x0110E5D4:  0010A0E3     MOV r1, 0x0
		   0x0110E5D8:  1040BDE8     POP {r4, lr}
		   0x0110E5DC:  2C4D10EA     B $+0x4134b8  // TAIL CALL → SparklesEffect.Show
		*/
	}

	// RVA: 0x1113070 Offset: 0x1113070 VA: 0x1113070
	private void StartCapacityTimerCoroutine(float cooldown) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01113070:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01113074:  0040A0E1     MOV r4, r0
		   0x01113078:  3800D0E5     LDRB r0, [r0, 0x38]
		   0x0111307C:  000050E3     CMPS r0, r0, 0x0
		   0x01113080:  0000000A     BEQ $+0x8  // if (==) goto 0x01113088
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01113084:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 2 if (==) ────────────────────
		   0x01113088:  846094E5     LDR r6, [r4, 0x84]
		   0x0111308C:  0150A0E1     MOV r5, r1
		   0x01113090:  000056E3     CMPS r0, r6, 0x0
		   0x01113094:  0000001A     BNE $+0x8  // if (!=) goto 0x0111309C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01113098:  CC20F9EB     BL $-0x1b7cc8
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111309C:  7400D6E5     LDRB r0, [r6, 0x74]
		   0x011130A0:  000050E3     CMPS r0, r0, 0x0
		   0x011130A4:  7080BD18     POPNE {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x110E784 Offset: 0x110E784 VA: 0x110E784
	protected void StopTimerCoroutine() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 8 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E784:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110E788:  C01090E5     LDR r1, [r0, 0xc0]
		   0x0110E78C:  0040A0E1     MOV r4, r0
		   0x0110E790:  000051E3     CMPS r0, r1, 0x0
		   0x0110E794:  0400000A     BEQ $+0x18  // if (==) goto 0x0110E7AC
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110E798:  0400A0E1     MOV r0, r4
		   0x0110E79C:  0020A0E3     MOV r2, 0x0
		   0x0110E7A0:  0050A0E3     MOV r5, 0x0
		   0x0110E7A4:  EFA53BEB     BL $+0xee97c4  // CALL → sub_1FF7F68
		   0x0110E7A8:  C05084E5     STR r5, [r4, 0xc0]
		   // ──── Block 2 if (==) ────────────────────
		   0x0110E7AC:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x0110E7B0:  000050E3     CMPS r0, r0, 0x0
		   0x0110E7B4:  0600001A     BNE $+0x20  // if (!=) goto 0x0110E7D4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110E7B8:  845094E5     LDR r5, [r4, 0x84]
		   0x0110E7BC:  000055E3     CMPS r0, r5, 0x0
		   0x0110E7C0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E7C8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110E7C4:  0133F9EB     BL $-0x1b33f4
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110E7C8:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x0110E7CC:  000050E3     CMPS r0, r0, 0x0
		   0x0110E7D0:  0300000A     BEQ $+0x14  // if (==) goto 0x0110E7E4
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x0110E7D4:  340094E5     LDR r0, [r4, 0x34]
		   0x0110E7D8:  0010A0E3     MOV r1, 0x0
		   0x0110E7DC:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E7E0:  76A6FFEA     B $-0x16620
		   // ──── Block 7 if (==) ────────────────────
		   0x0110E7E4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x11140D4 Offset: 0x11140D4 VA: 0x11140D4 Slot: 53
	protected virtual void StartEnergyAnimation() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011140D4:  10402DE9     PUSH {r4, lr}
		   0x011140D8:  8C4090E5     LDR r4, [r0, 0x8c]
		   0x011140DC:  000054E3     CMPS r0, r4, 0x0
		   0x011140E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011140E8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011140E4:  B91CF9EB     BL $-0x1b8d14
		   // ──── Block 2 if (!=) ────────────────────
		   0x011140E8:  0400A0E1     MOV r0, r4
		   0x011140EC:  0010A0E3     MOV r1, 0x0
		   0x011140F0:  1040BDE8     POP {r4, lr}
		   0x011140F4:  DC2E10EA     B $+0x40bb78  // TAIL CALL → EnergyEffect.Show
		*/
	}

	// RVA: 0x11140F8 Offset: 0x11140F8 VA: 0x11140F8 Slot: 33
	public void UpdateAndPauseChargesTimers(float boostSeconds) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011140F8:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x1114180 Offset: 0x1114180 VA: 0x1114180 Slot: 34
	public void UnpauseChargeTimers(bool silent = false) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01114180:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x111429C Offset: 0x111429C VA: 0x111429C Slot: 35
	public bool CanBoost() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111429C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011142A0:  EC5090E5     LDR r5, [r0, 0xec]
		   0x011142A4:  0040A0E1     MOV r4, r0
		   0x011142A8:  000055E3     CMPS r0, r5, 0x0
		   0x011142AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011142B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011142B0:  461CF9EB     BL $-0x1b8ee0
		   // ──── Block 2 if (!=) ────────────────────
		   0x011142B4:  E86094E5     LDR r6, [r4, 0xe8]
		   0x011142B8:  085095E5     LDR r5, [r5, 0x8]
		   0x011142BC:  000056E3     CMPS r0, r6, 0x0
		   0x011142C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011142C8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011142C4:  411CF9EB     BL $-0x1b8ef4
		   // ──── Block 4 if (!=) ────────────────────
		   0x011142C8:  081096E5     LDR r1, [r6, 0x8]
		   0x011142CC:  0000A0E3     MOV r0, 0x0
		   0x011142D0:  010055E1     CMPS r0, r5, r1
		   0x011142D4:  3800D4B5     LDRBLT r0, [r4, 0x38]
		   0x011142D8:  100F6FB1     CLZLT r0, r0
		   0x011142DC:  A002A0B1     MOVLT r0, r0, r0, lsr 5
		   0x011142E0:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x11142E4 Offset: 0x11142E4 VA: 0x11142E4
	private void OnDisable() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011142E4:  10402DE9     PUSH {r4, lr}
		   0x011142E8:  C01090E5     LDR r1, [r0, 0xc0]
		   0x011142EC:  0040A0E1     MOV r4, r0
		   0x011142F0:  000051E3     CMPS r0, r1, 0x0
		   0x011142F4:  0200000A     BEQ $+0x10  // if (==) goto 0x01114304
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x011142F8:  0400A0E1     MOV r0, r4
		   0x011142FC:  0020A0E3     MOV r2, 0x0
		   0x01114300:  188F3BEB     BL $+0xee3c68  // CALL → sub_1FF7F68
		   // ──── Block 2 if (==) ────────────────────
		   0x01114304:  0000A0E3     MOV r0, 0x0
		   0x01114308:  C00084E5     STR r0, [r4, 0xc0]  // vtable: Object.Equals
		   0x0111430C:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1112764 Offset: 0x1112764 VA: 0x1112764
	protected int GetContainerPredefinedIndex(int containerId) {
		/* Disassembly (ARM32, 45 instructions, 0xB4 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01112764:  10402DE9     PUSH {r4, lr}
		   0x01112768:  08D04DE2     SUB sp, sp, 0x8
		   0x0111276C:  90409FE5     LDR r4, [pc, 0x90]
		   0x01112770:  04108DE5     STR r1, [sp, 0x4]
		   0x01112774:  04408FE0     ADD r4, pc, r4
		   0x01112778:  0000D4E5     LDRB r0, [r4]
		   0x0111277C:  000050E3     CMPS r0, r0, 0x0
		   0x01112780:  0700001A     BNE $+0x24  // if (!=) goto 0x011127A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01112784:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x01112788:  00009FE7     LDR r0, [pc, r0]
		   0x0111278C:  7322F9EB     BL $-0x1b762c
		   0x01112790:  74009FE5     LDR r0, [pc, 0x74]
		   0x01112794:  00009FE7     LDR r0, [pc, r0]
		   0x01112798:  7022F9EB     BL $-0x1b7638
		   0x0111279C:  0100A0E3     MOV r0, 0x1
		   0x011127A0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011127A4:  04008DE2     ADD r0, sp, 0x4
		   0x011127A8:  0010A0E3     MOV r1, 0x0
		   0x011127AC:  1DC77CEB     BL $+0x1f31c7c  // CALL → Int32.ToString
		   0x011127B0:  0010A0E1     MOV r1, r0
		   0x011127B4:  54009FE5     LDR r0, [pc, 0x54]
		   0x011127B8:  0020A0E3     MOV r2, 0x0
		   0x011127BC:  00009FE7     LDR r0, [pc, r0]
		   0x011127C0:  000090E5     LDR r0, [r0]
		   0x011127C4:  DDDB75EB     BL $+0x1d76f7c  // CALL → String.Concat
		   0x011127C8:  0040A0E1     MOV r4, r0
		   0x011127CC:  40009FE5     LDR r0, [pc, 0x40]
		   0x011127D0:  00009FE7     LDR r0, [pc, r0]
		   0x011127D4:  000090E5     LDR r0, [r0]
		   0x011127D8:  741090E5     LDR r1, [r0, 0x74]
		   0x011127DC:  000051E3     CMPS r0, r1, 0x0
		   0x011127E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011127E8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011127E4:  AA22F9EB     BL $-0x1b7550
		   // ──── Block 4 if (!=) ────────────────────
		   0x011127E8:  0400A0E1     MOV r0, r4
		   0x011127EC:  0010A0E3     MOV r1, 0x0
		   0x011127F0:  0020A0E3     MOV r2, 0x0
		   0x011127F4:  0030A0E3     MOV r3, 0x0
		   0x011127F8:  DDC7FDEB     BL $-0x8e084
		   0x011127FC:  08D08DE2     ADD sp, sp, 0x8
		   0x01112800:  1080BDE8     POP {r4, pc}
		   0x01112804:  B5961103     TSTSEQ sb, r1, 0xb500000
		   0x01112808:  B04EF602     RSCSEQ r4, r6, 0xb00
		   0x0111280C:  3072F602     RSCSEQ r7, r6, 0x3
		   0x01112810:  0872F602     RSCSEQ r7, r6, 0x80000000
		   0x01112814:  684EF602     RSCSEQ r4, r6, 0x680
		*/
	}

	// RVA: 0x1112818 Offset: 0x1112818 VA: 0x1112818
	protected void SetContainerPredefinedIndex(int containerId, int value) {
		/* Disassembly (ARM32, 46 instructions, 0xB8 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01112818:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111281C:  08D04DE2     SUB sp, sp, 0x8
		   0x01112820:  94509FE5     LDR r5, [pc, 0x94]
		   0x01112824:  0240A0E1     MOV r4, r2
		   0x01112828:  04108DE5     STR r1, [sp, 0x4]
		   0x0111282C:  05508FE0     ADD r5, pc, r5
		   0x01112830:  0000D5E5     LDRB r0, [r5]
		   0x01112834:  000050E3     CMPS r0, r0, 0x0
		   0x01112838:  0700001A     BNE $+0x24  // if (!=) goto 0x0111285C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111283C:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x01112840:  00009FE7     LDR r0, [pc, r0]
		   0x01112844:  4522F9EB     BL $-0x1b76e4
		   0x01112848:  74009FE5     LDR r0, [pc, 0x74]
		   0x0111284C:  00009FE7     LDR r0, [pc, r0]
		   0x01112850:  4222F9EB     BL $-0x1b76f0
		   0x01112854:  0100A0E3     MOV r0, 0x1
		   0x01112858:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111285C:  04008DE2     ADD r0, sp, 0x4
		   0x01112860:  0010A0E3     MOV r1, 0x0
		   0x01112864:  EFC67CEB     BL $+0x1f31bc4  // CALL → Int32.ToString
		   0x01112868:  0010A0E1     MOV r1, r0
		   0x0111286C:  54009FE5     LDR r0, [pc, 0x54]
		   0x01112870:  0020A0E3     MOV r2, 0x0
		   0x01112874:  00009FE7     LDR r0, [pc, r0]
		   0x01112878:  000090E5     LDR r0, [r0]
		   0x0111287C:  AFDB75EB     BL $+0x1d76ec4  // CALL → String.Concat
		   0x01112880:  0050A0E1     MOV r5, r0
		   0x01112884:  40009FE5     LDR r0, [pc, 0x40]
		   0x01112888:  00009FE7     LDR r0, [pc, r0]
		   0x0111288C:  000090E5     LDR r0, [r0]
		   0x01112890:  741090E5     LDR r1, [r0, 0x74]
		   0x01112894:  000051E3     CMPS r0, r1, 0x0
		   0x01112898:  0000001A     BNE $+0x8  // if (!=) goto 0x011128A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111289C:  7C22F9EB     BL $-0x1b7608
		   // ──── Block 4 if (!=) ────────────────────
		   0x011128A0:  0500A0E1     MOV r0, r5
		   0x011128A4:  0410A0E1     MOV r1, r4
		   0x011128A8:  0020A0E3     MOV r2, 0x0
		   0x011128AC:  0030A0E3     MOV r3, 0x0
		   0x011128B0:  94C8FDEB     BL $-0x8dda8
		   0x011128B4:  08D08DE2     ADD sp, sp, 0x8
		   0x011128B8:  3088BDE8     POP {r4, r5, fp, pc}
		   0x011128BC:  FE951103     TSTSEQ sb, r1, 0x3f800000
		   0x011128C0:  F84DF602     RSCSEQ r4, r6, 0x3e00
		   0x011128C4:  7871F602     RSCSEQ r7, r6, 0x1e
		   0x011128C8:  5071F602     RSCSEQ r7, r6, 0x14
		   0x011128CC:  B04DF602     RSCSEQ r4, r6, 0x2c00
		*/
	}

	// RVA: 0x1114310 Offset: 0x1114310 VA: 0x1114310
	public static void ResetContainerPredefinedIndex(int containerId) {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114310:  10402DE9     PUSH {r4, lr}
		   0x01114314:  08D04DE2     SUB sp, sp, 0x8
		   0x01114318:  88409FE5     LDR r4, [pc, 0x88]
		   0x0111431C:  04008DE5     STR r0, [sp, 0x4]
		   0x01114320:  04408FE0     ADD r4, pc, r4
		   0x01114324:  0010D4E5     LDRB r1, [r4]
		   0x01114328:  000051E3     CMPS r0, r1, 0x0
		   0x0111432C:  0700001A     BNE $+0x24  // if (!=) goto 0x01114350
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114330:  74009FE5     LDR r0, [pc, 0x74]
		   0x01114334:  00009FE7     LDR r0, [pc, r0]
		   0x01114338:  881BF9EB     BL $-0x1b91d8
		   0x0111433C:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01114340:  00009FE7     LDR r0, [pc, r0]
		   0x01114344:  851BF9EB     BL $-0x1b91e4
		   0x01114348:  0100A0E3     MOV r0, 0x1
		   0x0111434C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114350:  04008DE2     ADD r0, sp, 0x4
		   0x01114354:  0010A0E3     MOV r1, 0x0
		   0x01114358:  32C07CEB     BL $+0x1f300d0  // CALL → Int32.ToString
		   0x0111435C:  0010A0E1     MOV r1, r0
		   0x01114360:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x01114364:  0020A0E3     MOV r2, 0x0
		   0x01114368:  00009FE7     LDR r0, [pc, r0]
		   0x0111436C:  000090E5     LDR r0, [r0]
		   0x01114370:  F2D475EB     BL $+0x1d753d0  // CALL → String.Concat
		   0x01114374:  0040A0E1     MOV r4, r0
		   0x01114378:  38009FE5     LDR r0, [pc, 0x38]
		   0x0111437C:  00009FE7     LDR r0, [pc, r0]
		   0x01114380:  000090E5     LDR r0, [r0]
		   0x01114384:  741090E5     LDR r1, [r0, 0x74]
		   0x01114388:  000051E3     CMPS r0, r1, 0x0
		   0x0111438C:  0000001A     BNE $+0x8  // if (!=) goto 0x01114394
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01114390:  BF1BF9EB     BL $-0x1b90fc
		   // ──── Block 4 if (!=) ────────────────────
		   0x01114394:  0400A0E1     MOV r0, r4
		   0x01114398:  0010A0E3     MOV r1, 0x0
		   0x0111439C:  191BFEEB     BL $-0x79394
		   0x011143A0:  08D08DE2     ADD sp, sp, 0x8
		   0x011143A4:  1080BDE8     POP {r4, pc}
		   0x011143A8:  0B7B1103     TSTSEQ r7, r1, 0x2c00
		   0x011143AC:  0433F602     RSCSEQ r3, r6, 0x10000000
		   0x011143B0:  8456F602     RSCSEQ r5, r6, 0x8400000
		   0x011143B4:  5C56F602     RSCSEQ r5, r6, 0x5c00000
		   0x011143B8:  BC32F602     RSCSEQ r3, r6, 0xc000000b
		*/
	}

	// RVA: 0x110EB78 Offset: 0x110EB78 VA: 0x110EB78
	public void .ctor() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110EB78:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110EB7C:  50509FE5     LDR r5, [pc, 0x50]
		   0x0110EB80:  0040A0E1     MOV r4, r0
		   0x0110EB84:  05508FE0     ADD r5, pc, r5
		   0x0110EB88:  0000D5E5     LDRB r0, [r5]
		   0x0110EB8C:  000050E3     CMPS r0, r0, 0x0
		   0x0110EB90:  0400001A     BNE $+0x18  // if (!=) goto 0x0110EBA8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110EB94:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0110EB98:  00009FE7     LDR r0, [pc, r0]
		   0x0110EB9C:  6F31F9EB     BL $-0x1b3a3c
		   0x0110EBA0:  0100A0E3     MOV r0, 0x1
		   0x0110EBA4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110EBA8:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x0110EBAC:  00009FE7     LDR r0, [pc, r0]
		   0x0110EBB0:  000090E5     LDR r0, [r0]
		   0x0110EBB4:  0232F9EB     BL $-0x1b37f0
		   0x0110EBB8:  0010A0E3     MOV r1, 0x0
		   0x0110EBBC:  0050A0E1     MOV r5, r0
		   0x0110EBC0:  65A53BEB     BL $+0xee959c  // CALL → sub_1FF815C
		   0x0110EBC4:  BC5084E5     STR r5, [r4, 0xbc]
		   0x0110EBC8:  0400A0E1     MOV r0, r4
		   0x0110EBCC:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110EBD0:  6C0200EA     B $+0x9b8  // TAIL CALL → ItemMerging..ctor
		   0x0110EBD4:  A8D21103     TSTSEQ sp, r1, 0x8000000a
		   0x0110EBD8:  DC88F602     RSCSEQ r8, r6, 0xdc0000
		   0x0110EBDC:  C888F602     RSCSEQ r8, r6, 0xc80000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass74_0 // TypeDefIndex: 1304
{

	// Fields
	public float weightsSum; // 0x8

	// Methods

	// RVA: 0x111275C Offset: 0x111275C VA: 0x111275C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111275C:  0010A0E3     MOV r1, 0x0
		   0x01112760:  210B7EEA     B $+0x1f82c8c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11143BC Offset: 0x11143BC VA: 0x11143BC
	internal void <SelectItemToSpawn>b__0(float w) { }
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass82_0 // TypeDefIndex: 1305
{

	// Fields
	public Action<bool> rechargeAction; // 0x8
	public ItemContainer <>4__this; // 0xC

	// Methods

	// RVA: 0x11133EC Offset: 0x11133EC VA: 0x11133EC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011133EC:  0010A0E3     MOV r1, 0x0
		   0x011133F0:  FD077EEA     B $+0x1f81ffc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11133F4 Offset: 0x11133F4 VA: 0x11133F4
	internal void <Recharge>g__Spend|0(bool result) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011133F4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011133F8:  04D04DE2     SUB sp, sp, 0x4
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass86_0 // TypeDefIndex: 1306
{

	// Fields
	public ItemContainer <>4__this; // 0x8
	public Action onAnimationEnd; // 0xC

	// Methods

	// RVA: 0x1113878 Offset: 0x1113878 VA: 0x1113878
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01113878:  0010A0E3     MOV r1, 0x0
		   0x0111387C:  DA067EEA     B $+0x1f81b70  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11143D0 Offset: 0x11143D0 VA: 0x11143D0
	internal void <StartRechargeAnimation>b__0() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011143D0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011143D4:  085090E5     LDR r5, [r0, 0x8]
		   0x011143D8:  0040A0E1     MOV r4, r0
		   0x011143DC:  000055E3     CMPS r0, r5, 0x0
		   0x011143E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011143E8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011143E4:  F91BF9EB     BL $-0x1b9014
		   // ──── Block 2 if (!=) ────────────────────
		   0x011143E8:  0500A0E1     MOV r0, r5
		   0x011143EC:  0010A0E3     MOV r1, 0x0
		   0x011143F0:  FDDDFFEB     BL $-0x8804
		   0x011143F4:  0C0094E5     LDR r0, [r4, 0xc]
		   0x011143F8:  000050E3     CMPS r0, r0, 0x0
		   0x011143FC:  0400000A     BEQ $+0x18  // if (==) goto 0x01114414
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01114400:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01114404:  141090E5     LDR r1, [r0, 0x14]
		   0x01114408:  200090E5     LDR r0, [r0, 0x20]
		   0x0111440C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01114410:  12FF2FE1     BX r2
		   // ──── Block 4 if (==) ────────────────────
		   0x01114414:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <StartCapacityTimer>d__94 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1307
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public ItemContainer <>4__this; // 0x10
	public float startTime; // 0x14

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x1113E90 Offset: 0x1113E90 VA: 0x1113E90
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01113E90:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01113E94:  0140A0E1     MOV r4, r1
		   0x01113E98:  0010A0E3     MOV r1, 0x0
		   0x01113E9C:  0050A0E1     MOV r5, r0
		   0x01113EA0:  51057EEB     BL $+0x1f8154c  // CALL → Object..ctor
		   0x01113EA4:  084085E5     STR r4, [r5, 0x8]
		   0x01113EA8:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1114418 Offset: 0x1114418 VA: 0x1114418 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01114418:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x111441C Offset: 0x111441C VA: 0x111441C Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111441C:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1114920 Offset: 0x1114920 VA: 0x1114920 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01114920:  0C0090E5     LDR r0, [r0, 0xc]
		   0x01114924:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1114928 Offset: 0x1114928 VA: 0x1114928 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01114928:  10402DE9     PUSH {r4, lr}
		   0x0111492C:  30009FE5     LDR r0, [pc, 0x30]
		   0x01114930:  00009FE7     LDR r0, [pc, r0]
		   0x01114934:  0D1AF9EB     BL $-0x1b97c4
		   0x01114938:  A11AF9EB     BL $-0x1b9574
		   0x0111493C:  0010A0E3     MOV r1, 0x0
		   0x01114940:  0040A0E1     MOV r4, r0
		   0x01114944:  6AD87CEB     BL $+0x1f361b0  // CALL → NotSupportedException..ctor
		   0x01114948:  18009FE5     LDR r0, [pc, 0x18]
		   0x0111494C:  00009FE7     LDR r0, [pc, r0]
		   0x01114950:  061AF9EB     BL $-0x1b97e0
		   0x01114954:  0010A0E1     MOV r1, r0
		   0x01114958:  0400A0E1     MOV r0, r4
		   0x0111495C:  471AF9EB     BL $-0x1b96dc
		   0x01114960:  E819F9EB     BL $-0x1b9858
		   0x01114964:  AC21F602     RSCSEQ r2, r6, 0x2b
		   0x01114968:  A850F602     RSCSEQ r5, r6, 0xa8
		*/
	}

	[DebuggerHidden]
	// RVA: 0x111496C Offset: 0x111496C VA: 0x111496C Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111496C:  0C0090E5     LDR r0, [r0, 0xc]
		   0x01114970:  1EFF2FE1     BX lr
		*/
	}
}
