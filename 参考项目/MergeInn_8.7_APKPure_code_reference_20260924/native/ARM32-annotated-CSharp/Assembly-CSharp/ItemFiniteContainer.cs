// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemFiniteContainer : ItemMerging, IBoosterSpeedup, IContainerIsEmpty, IOutOfEnergyTrigger, IEnergyConsumption // TypeDefIndex: 1324
{

	// Fields
	private Vector3 VECTOR3_ZERO; // 0x8C
	[CompilerGenerated]
	private Action<ItemData, Cell> onDestroy; // 0x98
	[CompilerGenerated]
	private Action<ItemData, Cell> dropItem; // 0x9C
	[CompilerGenerated]
	private Func<string, bool> checkIfOpeningIsLimited; // 0xA0
	[SerializeField]
	protected EnergyEffect energyEffect; // 0xA4
	[SerializeField]
	private FXClockAnimationController clockFX; // 0xA8
	[SerializeField]
	private SparklesEffect sparklesEffect; // 0xAC
	[SerializeField]
	private Image energyImage; // 0xB0
	[SerializeField]
	private Sprite energySpriteX1; // 0xB4
	[SerializeField]
	private Sprite energySpriteX2; // 0xB8
	private ChargeData baseChargeData; // 0xBC
	private ChargeData currentChargeData; // 0xC0
	protected ItemObject[] items; // 0xC4
	private ItemObject[] destructionItems; // 0xC8
	protected float[] weights; // 0xCC
	private bool destructionDrop; // 0xD0
	private Tween scaleTween; // 0xD4
	private Sequence reminderTween; // 0xD8
	private DiscountCost openGemsDCost; // 0xDC
	private int openEnergyCost; // 0xE4
	private bool unlockPriceIsEnergy; // 0xE8
	private int maxUnlockPrice; // 0xEC
	private Coroutine timerCoroutine; // 0xF0
	private readonly WaitForEndOfFrame oneFrame; // 0xF4
	private Action onOpenTimerEnd; // 0xF8
	private Action<int, bool> onOpenTimerUpdate; // 0xFC
	[CompilerGenerated]
	private Action <containerIsEmpty>k__BackingField; // 0x100
	[CompilerGenerated]
	private Action<Action> <useContainerWithoutEnergy>k__BackingField; // 0x104
	[CompilerGenerated]
	private Action <buttonSpeedUpEnergyTrigger>k__BackingField; // 0x108
	[CompilerGenerated]
	private Action <selectEmptyContainerWithoutEnergy>k__BackingField; // 0x10C
	[CompilerGenerated]
	private float <currentTimeToOpen>k__BackingField; // 0x110
	[CompilerGenerated]
	private float <timeToUnlock>k__BackingField; // 0x114
	[CompilerGenerated]
	private bool <openInProgress>k__BackingField; // 0x118
	private Action openCallback; // 0x11C
	private Action refreshContainersAnimation; // 0x120
	private float containerSpeedupCostMultiplier; // 0x124
	private long containerSpeedupFreeThresholdEnergy; // 0x128

	// Properties
	public Action containerIsEmpty { get; set; }
	public Action<Action> useContainerWithoutEnergy { get; set; }
	public Action buttonSpeedUpEnergyTrigger { get; set; }
	public Action selectEmptyContainerWithoutEnergy { get; set; }
	public float currentTimeToOpen { get; set; }
	public float timeToUnlock { get; set; }
	public bool hasCapacity { get; }
	public int itemsReadyToSpawn { get; }
	public bool openInProgress { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1116E10 Offset: 0x1116E10 VA: 0x1116E10
	public void add_onDestroy(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116E10:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01116E14:  98409FE5     LDR r4, [pc, 0x98]
		   0x01116E18:  0090A0E1     MOV sb, r0
		   0x01116E1C:  0180A0E1     MOV r8, r1
		   0x01116E20:  04408FE0     ADD r4, pc, r4
		   0x01116E24:  0000D4E5     LDRB r0, [r4]
		   0x01116E28:  000050E3     CMPS r0, r0, 0x0
		   0x01116E2C:  0400001A     BNE $+0x18  // if (!=) goto 0x01116E44
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116E30:  80009FE5     LDR r0, [pc, 0x80]
		   0x01116E34:  00009FE7     LDR r0, [pc, r0]
		   0x01116E38:  C810F9EB     BL $-0x1bbcd8
		   0x01116E3C:  0100A0E3     MOV r0, 0x1
		   0x01116E40:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116E44:  9800B9E5     LDR r0, [sb, 0x98]!
		   0x01116E48:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01116E4C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01116E50:  0810A0E1     MOV r1, r8
		   0x01116E54:  0020A0E3     MOV r2, 0x0
		   0x01116E58:  0060A0E1     MOV r6, r0
		   0x01116E5C:  0070A0E3     MOV r7, 0x0
		   0x01116E60:  B4097EEB     BL $+0x1f826d8  // CALL → Delegate.Combine
		   0x01116E64:  000050E3     CMPS r0, r0, 0x0
		   0x01116E68:  0A00000A     BEQ $+0x30  // if (==) goto 0x01116E98
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116E6C:  00509AE5     LDR r5, [r10]
		   0x01116E70:  0040A0E1     MOV r4, r0
		   0x01116E74:  0510A0E1     MOV r1, r5
		   0x01116E78:  0611F9EB     BL $-0x1bbbe0
		   0x01116E7C:  0070A0E1     MOV r7, r0
		   0x01116E80:  000050E3     CMPS r0, r0, 0x0
		   0x01116E84:  0300001A     BNE $+0x14  // if (!=) goto 0x01116E98
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116E88:  0400A0E1     MOV r0, r4
		   0x01116E8C:  0510A0E1     MOV r1, r5
		   0x01116E90:  3C12F9EB     BL $-0x1bb708
		   0x01116E94:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01116E98:  0900A0E1     MOV r0, sb
		   0x01116E9C:  0710A0E1     MOV r1, r7
		   0x01116EA0:  0620A0E1     MOV r2, r6
		   0x01116EA4:  73FDF9EB     BL $-0x180a2c
		   0x01116EA8:  060050E1     CMPS r0, r0, r6
		   0x01116EAC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01116EB0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01116EB4:  25501103     TSTSEQ r5, r1, 0x25
		   0x01116EB8:  6C21F602     RSCSEQ r2, r6, 0x1b
		   0x01116EBC:  5421F602     RSCSEQ r2, r6, 0x15
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1116EC0 Offset: 0x1116EC0 VA: 0x1116EC0
	public void remove_onDestroy(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116EC0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01116EC4:  98409FE5     LDR r4, [pc, 0x98]
		   0x01116EC8:  0090A0E1     MOV sb, r0
		   0x01116ECC:  0180A0E1     MOV r8, r1
		   0x01116ED0:  04408FE0     ADD r4, pc, r4
		   0x01116ED4:  0000D4E5     LDRB r0, [r4]
		   0x01116ED8:  000050E3     CMPS r0, r0, 0x0
		   0x01116EDC:  0400001A     BNE $+0x18  // if (!=) goto 0x01116EF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116EE0:  80009FE5     LDR r0, [pc, 0x80]
		   0x01116EE4:  00009FE7     LDR r0, [pc, r0]
		   0x01116EE8:  9C10F9EB     BL $-0x1bbd88
		   0x01116EEC:  0100A0E3     MOV r0, 0x1
		   0x01116EF0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116EF4:  9800B9E5     LDR r0, [sb, 0x98]!
		   0x01116EF8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01116EFC:  0AA09FE7     LDR r10, [pc, r10]
		   0x01116F00:  0810A0E1     MOV r1, r8
		   0x01116F04:  0020A0E3     MOV r2, 0x0
		   0x01116F08:  0060A0E1     MOV r6, r0
		   0x01116F0C:  0070A0E3     MOV r7, 0x0
		   0x01116F10:  060A7EEB     BL $+0x1f82820  // CALL → Delegate.Remove
		   0x01116F14:  000050E3     CMPS r0, r0, 0x0
		   0x01116F18:  0A00000A     BEQ $+0x30  // if (==) goto 0x01116F48
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116F1C:  00509AE5     LDR r5, [r10]
		   0x01116F20:  0040A0E1     MOV r4, r0
		   0x01116F24:  0510A0E1     MOV r1, r5
		   0x01116F28:  DA10F9EB     BL $-0x1bbc90
		   0x01116F2C:  0070A0E1     MOV r7, r0
		   0x01116F30:  000050E3     CMPS r0, r0, 0x0
		   0x01116F34:  0300001A     BNE $+0x14  // if (!=) goto 0x01116F48
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116F38:  0400A0E1     MOV r0, r4
		   0x01116F3C:  0510A0E1     MOV r1, r5
		   0x01116F40:  1012F9EB     BL $-0x1bb7b8
		   0x01116F44:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01116F48:  0900A0E1     MOV r0, sb
		   0x01116F4C:  0710A0E1     MOV r1, r7
		   0x01116F50:  0620A0E1     MOV r2, r6
		   0x01116F54:  47FDF9EB     BL $-0x180adc
		   0x01116F58:  060050E1     CMPS r0, r0, r6
		   0x01116F5C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01116F60:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01116F64:  764F1103     TSTSEQ r4, r1, 0x1d8
		   0x01116F68:  BC20F602     RSCSEQ r2, r6, 0xbc
		   0x01116F6C:  A420F602     RSCSEQ r2, r6, 0xa4
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1116F70 Offset: 0x1116F70 VA: 0x1116F70
	public void add_dropItem(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01116F70:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01116F74:  98409FE5     LDR r4, [pc, 0x98]
		   0x01116F78:  0090A0E1     MOV sb, r0
		   0x01116F7C:  0180A0E1     MOV r8, r1
		   0x01116F80:  04408FE0     ADD r4, pc, r4
		   0x01116F84:  0000D4E5     LDRB r0, [r4]
		   0x01116F88:  000050E3     CMPS r0, r0, 0x0
		   0x01116F8C:  0400001A     BNE $+0x18  // if (!=) goto 0x01116FA4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01116F90:  80009FE5     LDR r0, [pc, 0x80]
		   0x01116F94:  00009FE7     LDR r0, [pc, r0]
		   0x01116F98:  7010F9EB     BL $-0x1bbe38
		   0x01116F9C:  0100A0E3     MOV r0, 0x1
		   0x01116FA0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01116FA4:  9C00B9E5     LDR r0, [sb, 0x9c]!
		   0x01116FA8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01116FAC:  0AA09FE7     LDR r10, [pc, r10]
		   0x01116FB0:  0810A0E1     MOV r1, r8
		   0x01116FB4:  0020A0E3     MOV r2, 0x0
		   0x01116FB8:  0060A0E1     MOV r6, r0
		   0x01116FBC:  0070A0E3     MOV r7, 0x0
		   0x01116FC0:  5C097EEB     BL $+0x1f82578  // CALL → Delegate.Combine
		   0x01116FC4:  000050E3     CMPS r0, r0, 0x0
		   0x01116FC8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01116FF8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01116FCC:  00509AE5     LDR r5, [r10]
		   0x01116FD0:  0040A0E1     MOV r4, r0
		   0x01116FD4:  0510A0E1     MOV r1, r5
		   0x01116FD8:  AE10F9EB     BL $-0x1bbd40
		   0x01116FDC:  0070A0E1     MOV r7, r0
		   0x01116FE0:  000050E3     CMPS r0, r0, 0x0
		   0x01116FE4:  0300001A     BNE $+0x14  // if (!=) goto 0x01116FF8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01116FE8:  0400A0E1     MOV r0, r4
		   0x01116FEC:  0510A0E1     MOV r1, r5
		   0x01116FF0:  E411F9EB     BL $-0x1bb868
		   0x01116FF4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01116FF8:  0900A0E1     MOV r0, sb
		   0x01116FFC:  0710A0E1     MOV r1, r7
		   0x01117000:  0620A0E1     MOV r2, r6
		   0x01117004:  1BFDF9EB     BL $-0x180b8c
		   0x01117008:  060050E1     CMPS r0, r0, r6
		   0x0111700C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01117010:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01117014:  C74E1103     TSTSEQ r4, r1, 0xc70
		   0x01117018:  0C20F602     RSCSEQ r2, r6, 0xc
		   0x0111701C:  F41FF602     RSCSEQ r1, r6, 0x3d0
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117020 Offset: 0x1117020 VA: 0x1117020
	public void remove_dropItem(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117020:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01117024:  98409FE5     LDR r4, [pc, 0x98]
		   0x01117028:  0090A0E1     MOV sb, r0
		   0x0111702C:  0180A0E1     MOV r8, r1
		   0x01117030:  04408FE0     ADD r4, pc, r4
		   0x01117034:  0000D4E5     LDRB r0, [r4]
		   0x01117038:  000050E3     CMPS r0, r0, 0x0
		   0x0111703C:  0400001A     BNE $+0x18  // if (!=) goto 0x01117054
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01117040:  80009FE5     LDR r0, [pc, 0x80]
		   0x01117044:  00009FE7     LDR r0, [pc, r0]
		   0x01117048:  4410F9EB     BL $-0x1bbee8
		   0x0111704C:  0100A0E3     MOV r0, 0x1
		   0x01117050:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01117054:  9C00B9E5     LDR r0, [sb, 0x9c]!
		   0x01117058:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0111705C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01117060:  0810A0E1     MOV r1, r8
		   0x01117064:  0020A0E3     MOV r2, 0x0
		   0x01117068:  0060A0E1     MOV r6, r0
		   0x0111706C:  0070A0E3     MOV r7, 0x0
		   0x01117070:  AE097EEB     BL $+0x1f826c0  // CALL → Delegate.Remove
		   0x01117074:  000050E3     CMPS r0, r0, 0x0
		   0x01117078:  0A00000A     BEQ $+0x30  // if (==) goto 0x011170A8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111707C:  00509AE5     LDR r5, [r10]
		   0x01117080:  0040A0E1     MOV r4, r0
		   0x01117084:  0510A0E1     MOV r1, r5
		   0x01117088:  8210F9EB     BL $-0x1bbdf0
		   0x0111708C:  0070A0E1     MOV r7, r0
		   0x01117090:  000050E3     CMPS r0, r0, 0x0
		   0x01117094:  0300001A     BNE $+0x14  // if (!=) goto 0x011170A8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01117098:  0400A0E1     MOV r0, r4
		   0x0111709C:  0510A0E1     MOV r1, r5
		   0x011170A0:  B811F9EB     BL $-0x1bb918
		   0x011170A4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x011170A8:  0900A0E1     MOV r0, sb
		   0x011170AC:  0710A0E1     MOV r1, r7
		   0x011170B0:  0620A0E1     MOV r2, r6
		   0x011170B4:  EFFCF9EB     BL $-0x180c3c
		   0x011170B8:  060050E1     CMPS r0, r0, r6
		   0x011170BC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x011170C0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x011170C4:  184E1103     TSTSEQ r4, r1, 0x180
		   0x011170C8:  5C1FF602     RSCSEQ r1, r6, 0x170
		   0x011170CC:  441FF602     RSCSEQ r1, r6, 0x110
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11170D0 Offset: 0x11170D0 VA: 0x11170D0
	public void add_checkIfOpeningIsLimited(Func<string, bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011170D0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x011170D4:  98409FE5     LDR r4, [pc, 0x98]
		   0x011170D8:  0090A0E1     MOV sb, r0
		   0x011170DC:  0180A0E1     MOV r8, r1
		   0x011170E0:  04408FE0     ADD r4, pc, r4
		   0x011170E4:  0000D4E5     LDRB r0, [r4]
		   0x011170E8:  000050E3     CMPS r0, r0, 0x0
		   0x011170EC:  0400001A     BNE $+0x18  // if (!=) goto 0x01117104
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011170F0:  80009FE5     LDR r0, [pc, 0x80]
		   0x011170F4:  00009FE7     LDR r0, [pc, r0]
		   0x011170F8:  1810F9EB     BL $-0x1bbf98
		   0x011170FC:  0100A0E3     MOV r0, 0x1
		   0x01117100:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01117104:  A000B9E5     LDR r0, [sb, 0xa0]!
		   0x01117108:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0111710C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01117110:  0810A0E1     MOV r1, r8
		   0x01117114:  0020A0E3     MOV r2, 0x0
		   0x01117118:  0060A0E1     MOV r6, r0
		   0x0111711C:  0070A0E3     MOV r7, 0x0
		   0x01117120:  04097EEB     BL $+0x1f82418  // CALL → Delegate.Combine
		   0x01117124:  000050E3     CMPS r0, r0, 0x0
		   0x01117128:  0A00000A     BEQ $+0x30  // if (==) goto 0x01117158
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111712C:  00509AE5     LDR r5, [r10]
		   0x01117130:  0040A0E1     MOV r4, r0
		   0x01117134:  0510A0E1     MOV r1, r5
		   0x01117138:  5610F9EB     BL $-0x1bbea0
		   0x0111713C:  0070A0E1     MOV r7, r0
		   0x01117140:  000050E3     CMPS r0, r0, 0x0
		   0x01117144:  0300001A     BNE $+0x14  // if (!=) goto 0x01117158
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01117148:  0400A0E1     MOV r0, r4
		   0x0111714C:  0510A0E1     MOV r1, r5
		   0x01117150:  8C11F9EB     BL $-0x1bb9c8
		   0x01117154:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01117158:  0900A0E1     MOV r0, sb
		   0x0111715C:  0710A0E1     MOV r1, r7
		   0x01117160:  0620A0E1     MOV r2, r6
		   0x01117164:  C3FCF9EB     BL $-0x180cec
		   0x01117168:  060050E1     CMPS r0, r0, r6
		   0x0111716C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01117170:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01117174:  694D1103     TSTSEQ r4, r1, 0x1a40
		   0x01117178:  70F4F502     RSCSEQ pc, r5, 0x70000000
		   0x0111717C:  58F4F502     RSCSEQ pc, r5, 0x58000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117180 Offset: 0x1117180 VA: 0x1117180
	public void remove_checkIfOpeningIsLimited(Func<string, bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117180:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01117184:  98409FE5     LDR r4, [pc, 0x98]
		   0x01117188:  0090A0E1     MOV sb, r0
		   0x0111718C:  0180A0E1     MOV r8, r1
		   0x01117190:  04408FE0     ADD r4, pc, r4
		   0x01117194:  0000D4E5     LDRB r0, [r4]
		   0x01117198:  000050E3     CMPS r0, r0, 0x0
		   0x0111719C:  0400001A     BNE $+0x18  // if (!=) goto 0x011171B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011171A0:  80009FE5     LDR r0, [pc, 0x80]
		   0x011171A4:  00009FE7     LDR r0, [pc, r0]
		   0x011171A8:  EC0FF9EB     BL $-0x1bc048
		   0x011171AC:  0100A0E3     MOV r0, 0x1
		   0x011171B0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011171B4:  A000B9E5     LDR r0, [sb, 0xa0]!
		   0x011171B8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x011171BC:  0AA09FE7     LDR r10, [pc, r10]
		   0x011171C0:  0810A0E1     MOV r1, r8
		   0x011171C4:  0020A0E3     MOV r2, 0x0
		   0x011171C8:  0060A0E1     MOV r6, r0
		   0x011171CC:  0070A0E3     MOV r7, 0x0
		   0x011171D0:  56097EEB     BL $+0x1f82560  // CALL → Delegate.Remove
		   0x011171D4:  000050E3     CMPS r0, r0, 0x0
		   0x011171D8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01117208
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011171DC:  00509AE5     LDR r5, [r10]
		   0x011171E0:  0040A0E1     MOV r4, r0
		   0x011171E4:  0510A0E1     MOV r1, r5
		   0x011171E8:  2A10F9EB     BL $-0x1bbf50
		   0x011171EC:  0070A0E1     MOV r7, r0
		   0x011171F0:  000050E3     CMPS r0, r0, 0x0
		   0x011171F4:  0300001A     BNE $+0x14  // if (!=) goto 0x01117208
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011171F8:  0400A0E1     MOV r0, r4
		   0x011171FC:  0510A0E1     MOV r1, r5
		   0x01117200:  6011F9EB     BL $-0x1bba78
		   0x01117204:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01117208:  0900A0E1     MOV r0, sb
		   0x0111720C:  0710A0E1     MOV r1, r7
		   0x01117210:  0620A0E1     MOV r2, r6
		   0x01117214:  97FCF9EB     BL $-0x180d9c
		   0x01117218:  060050E1     CMPS r0, r0, r6
		   0x0111721C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01117220:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01117224:  BA4C1103     TSTSEQ r4, r1, 0xba00
		   0x01117228:  C0F3F502     RSCSEQ pc, r5, 0x3
		   0x0111722C:  A8F3F502     RSCSEQ pc, r5, 0xa0000002
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117230 Offset: 0x1117230 VA: 0x1117230 Slot: 36
	public Action get_containerIsEmpty() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117230:  000190E5     LDR r0, [r0, 0x100]
		   0x01117234:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117238 Offset: 0x1117238 VA: 0x1117238 Slot: 37
	public void set_containerIsEmpty(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117238:  001180E5     STR r1, [r0, 0x100]
		   0x0111723C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117240 Offset: 0x1117240 VA: 0x1117240 Slot: 41
	public Action<Action> get_useContainerWithoutEnergy() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117240:  040190E5     LDR r0, [r0, 0x104]
		   0x01117244:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117248 Offset: 0x1117248 VA: 0x1117248 Slot: 42
	public void set_useContainerWithoutEnergy(Action<Action> value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117248:  041180E5     STR r1, [r0, 0x104]
		   0x0111724C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117250 Offset: 0x1117250 VA: 0x1117250 Slot: 45
	public Action get_buttonSpeedUpEnergyTrigger() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117250:  080190E5     LDR r0, [r0, 0x108]
		   0x01117254:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117258 Offset: 0x1117258 VA: 0x1117258 Slot: 46
	public void set_buttonSpeedUpEnergyTrigger(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117258:  081180E5     STR r1, [r0, 0x108]
		   0x0111725C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117260 Offset: 0x1117260 VA: 0x1117260 Slot: 43
	public Action get_selectEmptyContainerWithoutEnergy() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117260:  0C0190E5     LDR r0, [r0, 0x10c]
		   0x01117264:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117268 Offset: 0x1117268 VA: 0x1117268 Slot: 44
	public void set_selectEmptyContainerWithoutEnergy(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117268:  0C1180E5     STR r1, [r0, 0x10c]
		   0x0111726C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117270 Offset: 0x1117270 VA: 0x1117270
	public float get_currentTimeToOpen() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117270:  100190E5     LDR r0, [r0, 0x110]
		   0x01117274:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117278 Offset: 0x1117278 VA: 0x1117278
	private void set_currentTimeToOpen(float value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117278:  101180E5     STR r1, [r0, 0x110]
		   0x0111727C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117280 Offset: 0x1117280 VA: 0x1117280
	public float get_timeToUnlock() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117280:  140190E5     LDR r0, [r0, 0x114]
		   0x01117284:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1117288 Offset: 0x1117288 VA: 0x1117288
	private void set_timeToUnlock(float value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117288:  141180E5     STR r1, [r0, 0x114]
		   0x0111728C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1117290 Offset: 0x1117290 VA: 0x1117290 Slot: 38
	public bool get_hasCapacity() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117290:  10402DE9     PUSH {r4, lr}
		   0x01117294:  C04090E5     LDR r4, [r0, 0xc0]
		   0x01117298:  000054E3     CMPS r0, r4, 0x0
		   0x0111729C:  0000001A     BNE $+0x8  // if (!=) goto 0x011172A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011172A0:  4A10F9EB     BL $-0x1bbed0
		   // ──── Block 2 if (!=) ────────────────────
		   0x011172A4:  0C1094E5     LDR r1, [r4, 0xc]
		   0x011172A8:  0000A0E3     MOV r0, 0x0
		   0x011172AC:  000051E3     CMPS r0, r1, 0x0
		   0x011172B0:  010000C3     MOVGT r0, 0x1
		   0x011172B4:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x11172B8 Offset: 0x11172B8 VA: 0x11172B8 Slot: 39
	public int get_itemsReadyToSpawn() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011172B8:  10402DE9     PUSH {r4, lr}
		   0x011172BC:  C04090E5     LDR r4, [r0, 0xc0]
		   0x011172C0:  000054E3     CMPS r0, r4, 0x0
		   0x011172C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011172CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011172C8:  4010F9EB     BL $-0x1bbef8
		   // ──── Block 2 if (!=) ────────────────────
		   0x011172CC:  0C0094E5     LDR r0, [r4, 0xc]
		   0x011172D0:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11172D4 Offset: 0x11172D4 VA: 0x11172D4
	public bool get_openInProgress() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011172D4:  1801D0E5     LDRB r0, [r0, 0x118]
		   0x011172D8:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11172DC Offset: 0x11172DC VA: 0x11172DC
	private void set_openInProgress(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011172DC:  1811C0E5     STRB r1, [r0, 0x118]
		   0x011172E0:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11172E4 Offset: 0x11172E4 VA: 0x11172E4
	public void SetAnimationCallBack(Action refreshContainersAnimation) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011172E4:  201180E5     STR r1, [r0, 0x120]
		   0x011172E8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11172EC Offset: 0x11172EC VA: 0x11172EC
	public void SetListenerSelectCallback(Action callback) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011172EC:  1C1180E5     STR r1, [r0, 0x11c]
		   0x011172F0:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11172F4 Offset: 0x11172F4 VA: 0x11172F4
	public void SetListenerOpenTimerEnd(Action onOpenTimerEnd) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011172F4:  F81080E5     STR r1, [r0, 0xf8]
		   0x011172F8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11172FC Offset: 0x11172FC VA: 0x11172FC
	public void SetListenerOpenTimerUpdate(Action<int, bool> onOpenTimerUpdate) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011172FC:  FC1080E5     STR r1, [r0, 0xfc]
		   0x01117300:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1117304 Offset: 0x1117304 VA: 0x1117304
	public void RemoveListeners() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117304:  0010A0E3     MOV r1, 0x0
		   0x01117308:  F81080E5     STR r1, [r0, 0xf8]
		   0x0111730C:  FC1080E5     STR r1, [r0, 0xfc]
		   0x01117310:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1117314 Offset: 0x1117314 VA: 0x1117314 Slot: 19
	protected override void ReleaseTimers() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117314:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01117318:  0040A0E1     MOV r4, r0
		   0x0111731C:  340090E5     LDR r0, [r0, 0x34]
		   0x01117320:  0010A0E3     MOV r1, 0x0
		   0x01117324:  A583FFEB     BL $-0x1f164
		   0x01117328:  340094E5     LDR r0, [r4, 0x34]
		   0x0111732C:  0010A0E3     MOV r1, 0x0
		   0x01117330:  17C7FFEB     BL $-0xe39c
		   0x01117334:  A45094E5     LDR r5, [r4, 0xa4]
		   0x01117338:  000055E3     CMPS r0, r5, 0x0
		   0x0111733C:  0000001A     BNE $+0x8  // if (!=) goto 0x01117344
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01117340:  2210F9EB     BL $-0x1bbf70
		   // ──── Block 2 if (!=) ────────────────────
		   0x01117344:  0500A0E1     MOV r0, r5
		   0x01117348:  0010A0E3     MOV r1, 0x0
		   0x0111734C:  0060A0E3     MOV r6, 0x0
		   0x01117350:  832210EB     BL $+0x408a14  // CALL → EnergyEffect.Hide
		   0x01117354:  F01094E5     LDR r1, [r4, 0xf0]
		   0x01117358:  000051E3     CMPS r0, r1, 0x0
		   0x0111735C:  0300000A     BEQ $+0x14  // if (==) goto 0x01117370
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01117360:  0400A0E1     MOV r0, r4
		   0x01117364:  0020A0E3     MOV r2, 0x0
		   0x01117368:  FE823BEB     BL $+0xee0c00  // CALL → sub_1FF7F68
		   0x0111736C:  F06084E5     STR r6, [r4, 0xf0]
		   // ──── Block 4 if (==) ────────────────────
		   0x01117370:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x11173A0 Offset: 0x11173A0 VA: 0x11173A0 Slot: 20
	public override void RemoveTweensCorotines() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011173A0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011173A4:  A45090E5     LDR r5, [r0, 0xa4]
		   0x011173A8:  0040A0E1     MOV r4, r0
		   0x011173AC:  000055E3     CMPS r0, r5, 0x0
		   0x011173B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011173B8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011173B4:  0510F9EB     BL $-0x1bbfe4
		   // ──── Block 2 if (!=) ────────────────────
		   0x011173B8:  0500A0E1     MOV r0, r5
		   0x011173BC:  0010A0E3     MOV r1, 0x0
		   0x011173C0:  0060A0E3     MOV r6, 0x0
		   0x011173C4:  662210EB     BL $+0x4089a0  // CALL → EnergyEffect.Hide
		   0x011173C8:  F01094E5     LDR r1, [r4, 0xf0]
		   0x011173CC:  000051E3     CMPS r0, r1, 0x0
		   0x011173D0:  0300000A     BEQ $+0x14  // if (==) goto 0x011173E4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011173D4:  0400A0E1     MOV r0, r4
		   0x011173D8:  0020A0E3     MOV r2, 0x0
		   0x011173DC:  E1823BEB     BL $+0xee0b8c  // CALL → sub_1FF7F68
		   0x011173E0:  F06084E5     STR r6, [r4, 0xf0]
		   // ──── Block 4 if (==) ────────────────────
		   0x011173E4:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x11173E8 Offset: 0x11173E8 VA: 0x11173E8 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011173E8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011173EC:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x11179E4 Offset: 0x11179E4 VA: 0x11179E4
	public void RefreshOpenAnimation() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011179E4:  10402DE9     PUSH {r4, lr}
		   0x011179E8:  0040A0E1     MOV r4, r0
		   0x011179EC:  D80090E5     LDR r0, [r0, 0xd8]
		   0x011179F0:  0010A0E3     MOV r1, 0x0
		   0x011179F4:  0020A0E3     MOV r2, 0x0
		   0x011179F8:  737A0FEB     BL $+0x3de9d4  // CALL → ExtensionMethods.SafeKill
		   0x011179FC:  0400A0E1     MOV r0, r4
		   0x01117A00:  1040BDE8     POP {r4, lr}
		   0x01117A04:  030000EA     B $+0x14  // TAIL CALL → ItemFiniteContainer.TryReminderAnimation
		*/
	}

	// RVA: 0x1117A18 Offset: 0x1117A18 VA: 0x1117A18
	public void TryReminderAnimation() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117A18:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01117A1C:  10D04DE2     SUB sp, sp, 0x10
		   0x01117A20:  40529FE5     LDR r5, [pc, 0x240]
		   0x01117A24:  0040A0E1     MOV r4, r0
		   0x01117A28:  05508FE0     ADD r5, pc, r5
		   0x01117A2C:  0000D5E5     LDRB r0, [r5]
		   0x01117A30:  000050E3     CMPS r0, r0, 0x0
		   0x01117A34:  1000001A     BNE $+0x48
		   0x01117A38:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x01117A3C:  00009FE7     LDR r0, [pc, r0]
		   0x01117A40:  C60DF9EB     BL $-0x1bc8e0
		   0x01117A44:  24029FE5     LDR r0, [pc, 0x224]
		   0x01117A48:  00009FE7     LDR r0, [pc, r0]
		   0x01117A4C:  C30DF9EB     BL $-0x1bc8ec
		   0x01117A50:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x01117A54:  00009FE7     LDR r0, [pc, r0]
		   0x01117A58:  C00DF9EB     BL $-0x1bc8f8
		   0x01117A5C:  14029FE5     LDR r0, [pc, 0x214]
		   0x01117A60:  00009FE7     LDR r0, [pc, r0]
		   0x01117A64:  BD0DF9EB     BL $-0x1bc904
		   0x01117A68:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x01117A6C:  00009FE7     LDR r0, [pc, r0]
		   0x01117A70:  BA0DF9EB     BL $-0x1bc910
		   0x01117A74:  0100A0E3     MOV r0, 0x1
		   0x01117A78:  0000C5E5     STRB r0, [r5]
		*/
	}

	// RVA: 0x1117CA0 Offset: 0x1117CA0 VA: 0x1117CA0 Slot: 12
	public override void SetLockedState(bool isLocked) {
		/* Disassembly (ARM32, 6 instructions, 0x18 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117CA0:  10402DE9     PUSH {r4, lr}
		   0x01117CA4:  0040A0E1     MOV r4, r0
		   0x01117CA8:  06CDFFEB     BL $-0xcbe0
		   0x01117CAC:  0400A0E1     MOV r0, r4
		   0x01117CB0:  1040BDE8     POP {r4, lr}
		   0x01117CB4:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemFiniteContainer.TryToShowEnergyIcon
		*/
	}

	// RVA: 0x1117E68 Offset: 0x1117E68 VA: 0x1117E68 Slot: 11
	public override void SetActiveBubble(bool isActive, int timer, Action createCoin) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117E68:  10402DE9     PUSH {r4, lr}
		   0x01117E6C:  08D04DE2     SUB sp, sp, 0x8
		   0x01117E70:  0040A0E1     MOV r4, r0
		   0x01117E74:  F2CAFFEB     BL $-0xd430
		   0x01117E78:  0400A0E1     MOV r0, r4
		   0x01117E7C:  08D08DE2     ADD sp, sp, 0x8
		   0x01117E80:  1040BDE8     POP {r4, lr}
		   0x01117E84:  8BFFFFEA     B $-0x1cc
		*/
	}

	// RVA: 0x1117E88 Offset: 0x1117E88 VA: 0x1117E88 Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 67 instructions, 0x10C bytes):
		   // CFG: 10 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117E88:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01117E8C:  44D04DE2     SUB sp, sp, 0x44
		   0x01117E90:  AC779FE5     LDR r7, [pc, 0x7ac]
		   0x01117E94:  0040A0E1     MOV r4, r0
		   0x01117E98:  03A0A0E1     MOV r10, r3
		   0x01117E9C:  02B0A0E1     MOV fp, r2
		   0x01117EA0:  07708FE0     ADD r7, pc, r7
		   0x01117EA4:  0150A0E1     MOV r5, r1
		   0x01117EA8:  0000D7E5     LDRB r0, [r7]
		   0x01117EAC:  000050E3     CMPS r0, r0, 0x0
		   0x01117EB0:  1300001A     BNE $+0x54  // if (!=) goto 0x01117F04
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01117EB4:  8C079FE5     LDR r0, [pc, 0x78c]
		   0x01117EB8:  00009FE7     LDR r0, [pc, r0]
		   0x01117EBC:  A70CF9EB     BL $-0x1bcd5c
		   0x01117EC0:  84079FE5     LDR r0, [pc, 0x784]
		   0x01117EC4:  00009FE7     LDR r0, [pc, r0]
		   0x01117EC8:  A40CF9EB     BL $-0x1bcd68
		   0x01117ECC:  7C079FE5     LDR r0, [pc, 0x77c]
		   0x01117ED0:  00009FE7     LDR r0, [pc, r0]
		   0x01117ED4:  A10CF9EB     BL $-0x1bcd74
		   0x01117ED8:  74079FE5     LDR r0, [pc, 0x774]
		   0x01117EDC:  00009FE7     LDR r0, [pc, r0]
		   0x01117EE0:  9E0CF9EB     BL $-0x1bcd80
		   0x01117EE4:  6C079FE5     LDR r0, [pc, 0x76c]
		   0x01117EE8:  00009FE7     LDR r0, [pc, r0]
		   0x01117EEC:  9B0CF9EB     BL $-0x1bcd8c
		   0x01117EF0:  64079FE5     LDR r0, [pc, 0x764]
		   0x01117EF4:  00009FE7     LDR r0, [pc, r0]
		   0x01117EF8:  980CF9EB     BL $-0x1bcd98
		   0x01117EFC:  0100A0E3     MOV r0, 0x1
		   0x01117F00:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01117F04:  0000A0E3     MOV r0, 0x0
		   0x01117F08:  0510A0E1     MOV r1, r5
		   0x01117F0C:  3C008DE5     STR r0, [sp, 0x3c]
		   0x01117F10:  38008DE5     STR r0, [sp, 0x38]
		   0x01117F14:  40008DE5     STR r0, [sp, 0x40]
		   0x01117F18:  0400A0E1     MOV r0, r4
		   0x01117F1C:  3170D4E5     LDRB r7, [r4, 0x31]
		   0x01117F20:  C4CCFFEB     BL $-0xcce8
		   0x01117F24:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x01117F28:  000050E3     CMPS r0, r0, 0x0
		   0x01117F2C:  0600001A     BNE $+0x20  // if (!=) goto 0x01117F4C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01117F30:  846094E5     LDR r6, [r4, 0x84]
		   0x01117F34:  000056E3     CMPS r0, r6, 0x0
		   0x01117F38:  0000001A     BNE $+0x8  // if (!=) goto 0x01117F40
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01117F3C:  230DF9EB     BL $-0x1bcb6c
		   // ──── Block 5 if (!=) ────────────────────
		   0x01117F40:  7400D6E5     LDRB r0, [r6, 0x74]
		   0x01117F44:  000050E3     CMPS r0, r0, 0x0
		   0x01117F48:  0100000A     BEQ $+0xc  // if (==) goto 0x01117F54
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x01117F4C:  44D08DE2     ADD sp, sp, 0x44
		   0x01117F50:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 7 if (==) ────────────────────
		   0x01117F54:  27C3FFEB     BL $-0xf35c
		   0x01117F58:  0090A0E1     MOV sb, r0
		   0x01117F5C:  0400A0E1     MOV r0, r4
		   0x01117F60:  0910A0E1     MOV r1, sb
		   0x01117F64:  CA0100EB     BL $+0x730  // CALL → ItemFiniteContainer.GetActivationCostEnergy
		   0x01117F68:  000057E3     CMPS r0, r7, 0x0
		   0x01117F6C:  00005513     CMPSNE r0, r5, 0x0
		   0x01117F70:  1500001A     BNE $+0x5c
		   0x01117F74:  E800D4E5     LDRB r0, [r4, 0xe8]
		   0x01117F78:  000050E3     CMPS r0, r0, 0x0
		   0x01117F7C:  F2FFFF0A     BEQ $-0x30
		   // ──── Block 9 else (!=) ────────────────────
		   0x01117F80:  0000A0E3     MOV r0, 0x0
		   0x01117F84:  E45094E5     LDR r5, [r4, 0xe4]  // vtable: Object.Equals
		   0x01117F88:  D48701EB     BL $+0x61f58  // CALL → ProfileStorage.get_numEnergy
		   0x01117F8C:  000055E1     CMPS r0, r5, r0
		   0x01117F90:  EDFFFFDA     BLE $-0x44
		*/
	}

	// RVA: 0x1118A7C Offset: 0x1118A7C VA: 0x1118A7C
	public void TryShowOpeningHint() {
		/* Disassembly (ARM32, 76 instructions, 0x130 bytes):
		   // CFG: 18 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01118A7C:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01118A80:  18D04DE2     SUB sp, sp, 0x18
		   0x01118A84:  0C519FE5     LDR r5, [pc, 0x10c]
		   0x01118A88:  0040A0E1     MOV r4, r0
		   0x01118A8C:  05508FE0     ADD r5, pc, r5
		   0x01118A90:  0000D5E5     LDRB r0, [r5]
		   0x01118A94:  000050E3     CMPS r0, r0, 0x0
		   0x01118A98:  0400001A     BNE $+0x18  // if (!=) goto 0x01118AB0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01118A9C:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x01118AA0:  00009FE7     LDR r0, [pc, r0]
		   0x01118AA4:  AD09F9EB     BL $-0x1bd944
		   0x01118AA8:  0100A0E3     MOV r0, 0x1
		   0x01118AAC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01118AB0:  1801D4E5     LDRB r0, [r4, 0x118]
		   0x01118AB4:  000050E3     CMPS r0, r0, 0x0
		   0x01118AB8:  3400000A     BEQ $+0xd8  // if (==) goto 0x01118B90
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01118ABC:  DC509FE5     LDR r5, [pc, 0xdc]
		   0x01118AC0:  05509FE7     LDR r5, [pc, r5]
		   0x01118AC4:  000095E5     LDR r0, [r5]
		   0x01118AC8:  741090E5     LDR r1, [r0, 0x74]
		   0x01118ACC:  000051E3     CMPS r0, r1, 0x0
		   0x01118AD0:  0000001A     BNE $+0x8  // if (!=) goto 0x01118AD8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01118AD4:  EE09F9EB     BL $-0x1bd840
		   // ──── Block 5 if (!=) ────────────────────
		   0x01118AD8:  C4609FE5     LDR r6, [pc, 0xc4]
		   0x01118ADC:  06608FE0     ADD r6, pc, r6
		   0x01118AE0:  0000D6E5     LDRB r0, [r6]
		   0x01118AE4:  000050E3     CMPS r0, r0, 0x0
		   0x01118AE8:  0400001A     BNE $+0x18  // if (!=) goto 0x01118B00
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01118AEC:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01118AF0:  00009FE7     LDR r0, [pc, r0]
		   0x01118AF4:  9909F9EB     BL $-0x1bd994
		   0x01118AF8:  0100A0E3     MOV r0, 0x1
		   0x01118AFC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 7 if (!=) ────────────────────
		   0x01118B00:  000095E5     LDR r0, [r5]
		   0x01118B04:  741090E5     LDR r1, [r0, 0x74]
		   0x01118B08:  000051E3     CMPS r0, r1, 0x0
		   0x01118B0C:  0100001A     BNE $+0xc  // if (!=) goto 0x01118B18
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01118B10:  DF09F9EB     BL $-0x1bd87c
		   0x01118B14:  000095E5     LDR r0, [r5]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01118B18:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01118B1C:  105094E5     LDR r5, [r4, 0x10]
		   0x01118B20:  044090E5     LDR r4, [r0, 0x4]
		   0x01118B24:  000055E3     CMPS r0, r5, 0x0
		   0x01118B28:  0000001A     BNE $+0x8  // if (!=) goto 0x01118B30
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01118B2C:  270AF9EB     BL $-0x1bd75c
		   // ──── Block 11 if (!=) ────────────────────
		   0x01118B30:  0500A0E1     MOV r0, r5
		   0x01118B34:  0010A0E3     MOV r1, 0x0
		   0x01118B38:  DB7C3BEB     BL $+0xedf374  // CALL → sub_1FF7EAC
		   0x01118B3C:  0050A0E1     MOV r5, r0
		   0x01118B40:  000050E3     CMPS r0, r0, 0x0
		   0x01118B44:  0000001A     BNE $+0x8  // if (!=) goto 0x01118B4C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01118B48:  200AF9EB     BL $-0x1bd778
		   // ──── Block 13 if (!=) ────────────────────
		   0x01118B4C:  0C008DE2     ADD r0, sp, 0xc
		   0x01118B50:  0510A0E1     MOV r1, r5
		   0x01118B54:  0020A0E3     MOV r2, 0x0
		   0x01118B58:  0090A0E3     MOV sb, 0x0
		   0x01118B5C:  907D3BEB     BL $+0xedf648  // CALL → sub_1FF81A4
		   0x01118B60:  0C708DE2     ADD r7, sp, 0xc
		   0x01118B64:  000054E3     CMPS r0, r4, 0x0
		   0x01118B68:  E00097E8     LDM r7, {r5, r6, r7}
		   0x01118B6C:  0000001A     BNE $+0x8  // if (!=) goto 0x01118B74
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01118B70:  160AF9EB     BL $-0x1bd7a0
		   // ──── Block 15 if (!=) ────────────────────
		   0x01118B74:  2180A0E3     MOV r8, 0x21
		   0x01118B78:  0400A0E1     MOV r0, r4
		   0x01118B7C:  0510A0E1     MOV r1, r5
		   0x01118B80:  0620A0E1     MOV r2, r6
		   0x01118B84:  0730A0E1     MOV r3, r7
		   0x01118B88:  F080CDE1     STRD r8, sb, [sp]
		   0x01118B8C:  F68609EB     BL $+0x261be0  // CALL → UIPoppingAlert.ShowMessageForItemOnField
		   // ──── Block 16 if (==) ────────────────────
		   0x01118B90:  18D08DE2     ADD sp, sp, 0x18
		   0x01118B94:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x01118B98:  C2331103     TSTSEQ r3, r1, 0x8000003
		   0x01118B9C:  C008F602     RSCSEQ r0, r6, 0xc00000
		   0x01118BA0:  A008F602     RSCSEQ r0, r6, 0xa00000
		   0x01118BA4:  06321103     TSTSEQ r3, r1, 0x60000000
		   0x01118BA8:  7008F602     RSCSEQ r0, r6, 0x700000
		*/
	}

	// RVA: 0x1117A08 Offset: 0x1117A08 VA: 0x1117A08
	public void StopShaking() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01117A08:  D80090E5     LDR r0, [r0, 0xd8]
		   0x01117A0C:  0010A0E3     MOV r1, 0x0
		   0x01117A10:  0020A0E3     MOV r2, 0x0
		   0x01117A14:  6C7A0FEA     B $+0x3de9b8  // TAIL CALL → ExtensionMethods.SafeKill
		*/
	}

	// RVA: 0x1118834 Offset: 0x1118834 VA: 0x1118834
	public bool TryOpenChest() {
		/* Disassembly (ARM32, 146 instructions, 0x248 bytes):
		   // CFG: 29 blocks, 29 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01118834:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01118838:  18D04DE2     SUB sp, sp, 0x18
		   0x0111883C:  1C529FE5     LDR r5, [pc, 0x21c]
		   0x01118840:  0040A0E1     MOV r4, r0
		   0x01118844:  05508FE0     ADD r5, pc, r5
		   0x01118848:  0000D5E5     LDRB r0, [r5]
		   0x0111884C:  000050E3     CMPS r0, r0, 0x0
		   0x01118850:  0700001A     BNE $+0x24  // if (!=) goto 0x01118874
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01118854:  08029FE5     LDR r0, [pc, 0x208]
		   0x01118858:  00009FE7     LDR r0, [pc, r0]
		   0x0111885C:  3F0AF9EB     BL $-0x1bd6fc
		   0x01118860:  00029FE5     LDR r0, [pc, 0x200]
		   0x01118864:  00009FE7     LDR r0, [pc, r0]
		   0x01118868:  3C0AF9EB     BL $-0x1bd708
		   0x0111886C:  0100A0E3     MOV r0, 0x1
		   0x01118870:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01118874:  1801D4E5     LDRB r0, [r4, 0x118]
		   0x01118878:  0090A0E3     MOV sb, 0x0
		   0x0111887C:  000050E3     CMPS r0, r0, 0x0
		   0x01118880:  7300001A     BNE $+0x1d4  // if (!=) goto 0x01118A54
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01118884:  845094E5     LDR r5, [r4, 0x84]
		   0x01118888:  A06094E5     LDR r6, [r4, 0xa0]
		   0x0111888C:  000055E3     CMPS r0, r5, 0x0
		   0x01118890:  0000001A     BNE $+0x8  // if (!=) goto 0x01118898
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01118894:  CD0AF9EB     BL $-0x1bd4c4
		   // ──── Block 5 if (!=) ────────────────────
		   0x01118898:  145095E5     LDR r5, [r5, 0x14]
		   0x0111889C:  000056E3     CMPS r0, r6, 0x0
		   0x011188A0:  0000001A     BNE $+0x8  // if (!=) goto 0x011188A8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011188A4:  C90AF9EB     BL $-0x1bd4d4
		   // ──── Block 7 if (!=) ────────────────────
		   0x011188A8:  0C3096E5     LDR r3, [r6, 0xc]
		   0x011188AC:  0510A0E1     MOV r1, r5
		   0x011188B0:  142096E5     LDR r2, [r6, 0x14]
		   0x011188B4:  200096E5     LDR r0, [r6, 0x20]
		   0x011188B8:  33FF2FE1     BLX r3  // virtual call: Item.ToString
		   0x011188BC:  000050E3     CMPS r0, r0, 0x0
		   0x011188C0:  3100000A     BEQ $+0xcc  // if (==) goto 0x0111898C
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x011188C4:  A0519FE5     LDR r5, [pc, 0x1a0]
		   0x011188C8:  05509FE7     LDR r5, [pc, r5]
		   0x011188CC:  000095E5     LDR r0, [r5]
		   0x011188D0:  741090E5     LDR r1, [r0, 0x74]
		   0x011188D4:  000051E3     CMPS r0, r1, 0x0
		   0x011188D8:  0000001A     BNE $+0x8  // if (!=) goto 0x011188E0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x011188DC:  6C0AF9EB     BL $-0x1bd648
		   // ──── Block 10 if (!=) ────────────────────
		   0x011188E0:  88619FE5     LDR r6, [pc, 0x188]
		   0x011188E4:  06608FE0     ADD r6, pc, r6
		   0x011188E8:  0000D6E5     LDRB r0, [r6]
		   0x011188EC:  000050E3     CMPS r0, r0, 0x0
		   0x011188F0:  0400001A     BNE $+0x18  // if (!=) goto 0x01118908
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x011188F4:  78019FE5     LDR r0, [pc, 0x178]
		   0x011188F8:  00009FE7     LDR r0, [pc, r0]
		   0x011188FC:  170AF9EB     BL $-0x1bd79c
		   0x01118900:  0100A0E3     MOV r0, 0x1
		   0x01118904:  0000C6E5     STRB r0, [r6]
		   // ──── Block 12 if (!=) ────────────────────
		   0x01118908:  000095E5     LDR r0, [r5]
		   0x0111890C:  741090E5     LDR r1, [r0, 0x74]
		   0x01118910:  000051E3     CMPS r0, r1, 0x0
		   0x01118914:  0100001A     BNE $+0xc  // if (!=) goto 0x01118920
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01118918:  5D0AF9EB     BL $-0x1bd684
		   0x0111891C:  000095E5     LDR r0, [r5]
		   // ──── Block 14 if (!=) ────────────────────
		   0x01118920:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01118924:  0010A0E3     MOV r1, 0x0
		   0x01118928:  045090E5     LDR r5, [r0, 0x4]
		   0x0111892C:  0400A0E1     MOV r0, r4
		   0x01118930:  5D7D3BEB     BL $+0xedf57c  // CALL → sub_1FF7EAC
		   0x01118934:  0040A0E1     MOV r4, r0
		   0x01118938:  000050E3     CMPS r0, r0, 0x0
		   0x0111893C:  0000001A     BNE $+0x8  // if (!=) goto 0x01118944
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01118940:  A20AF9EB     BL $-0x1bd570
		   // ──── Block 16 if (!=) ────────────────────
		   0x01118944:  0C008DE2     ADD r0, sp, 0xc
		   0x01118948:  0410A0E1     MOV r1, r4
		   0x0111894C:  0020A0E3     MOV r2, 0x0
		   0x01118950:  0090A0E3     MOV sb, 0x0
		   0x01118954:  127E3BEB     BL $+0xedf850  // CALL → sub_1FF81A4
		   0x01118958:  0C708DE2     ADD r7, sp, 0xc
		   0x0111895C:  000055E3     CMPS r0, r5, 0x0
		   0x01118960:  D00097E8     LDM r7, {r4, r6, r7}
		   0x01118964:  0000001A     BNE $+0x8  // if (!=) goto 0x0111896C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01118968:  980AF9EB     BL $-0x1bd598
		   // ──── Block 18 if (!=) ────────────────────
		   0x0111896C:  2280A0E3     MOV r8, 0x22
		   0x01118970:  0500A0E1     MOV r0, r5
		   0x01118974:  0410A0E1     MOV r1, r4
		   0x01118978:  0620A0E1     MOV r2, r6
		   0x0111897C:  0730A0E1     MOV r3, r7
		   0x01118980:  F080CDE1     STRD r8, sb, [sp]
		   0x01118984:  788709EB     BL $+0x261de8  // CALL → UIPoppingAlert.ShowMessageForItemOnField
		   0x01118988:  310000EA     B $+0xcc  // goto 0x01118A54
		   // ──── Block 19 if (==) ────────────────────
		   0x0111898C:  F01094E5     LDR r1, [r4, 0xf0]
		   0x01118990:  000051E3     CMPS r0, r1, 0x0
		   0x01118994:  0400000A     BEQ $+0x18  // if (==) goto 0x011189AC
		   // 
		   // ──── Block 20 else (!=) ────────────────────
		   0x01118998:  0400A0E1     MOV r0, r4
		   0x0111899C:  0020A0E3     MOV r2, 0x0
		   0x011189A0:  0050A0E3     MOV r5, 0x0
		   0x011189A4:  6F7D3BEB     BL $+0xedf5c4  // CALL → sub_1FF7F68
		   0x011189A8:  F05084E5     STR r5, [r4, 0xf0]
		   // ──── Block 21 if (==) ────────────────────
		   0x011189AC:  141194E5     LDR r1, [r4, 0x114]
		   0x011189B0:  0400A0E1     MOV r0, r4
		   0x011189B4:  7C0000EB     BL $+0x1f8  // CALL → ItemFiniteContainer.StartOpenTimer
		   0x011189B8:  0010A0E1     MOV r1, r0
		   0x011189BC:  0400A0E1     MOV r0, r4
		   0x011189C0:  0020A0E3     MOV r2, 0x0
		   0x011189C4:  0060A0E3     MOV r6, 0x0
		   0x011189C8:  677D3BEB     BL $+0xedf5a4  // CALL → sub_1FF7F6C
		   0x011189CC:  0110A0E3     MOV r1, 0x1
		   0x011189D0:  F00084E5     STR r0, [r4, 0xf0]
		   0x011189D4:  0400A0E1     MOV r0, r4
		   0x011189D8:  1811C4E5     STRB r1, [r4, 0x118]
		   0x011189DC:  910000EB     BL $+0x24c  // CALL → ItemFiniteContainer.ResetMainIconTransform
		   0x011189E0:  1C0194E5     LDR r0, [r4, 0x11c]
		   0x011189E4:  000050E3     CMPS r0, r0, 0x0
		   0x011189E8:  0300000A     BEQ $+0x14  // if (==) goto 0x011189FC
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x011189EC:  0C2090E5     LDR r2, [r0, 0xc]
		   0x011189F0:  141090E5     LDR r1, [r0, 0x14]
		   0x011189F4:  200090E5     LDR r0, [r0, 0x20]
		   0x011189F8:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   // ──── Block 23 if (==) ────────────────────
		   0x011189FC:  74009FE5     LDR r0, [pc, 0x74]
		   0x01118A00:  00009FE7     LDR r0, [pc, r0]
		   0x01118A04:  1C6184E5     STR r6, [r4, 0x11c]
		   0x01118A08:  000090E5     LDR r0, [r0]
		   0x01118A0C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01118A10:  045090E5     LDR r5, [r0, 0x4]
		   0x01118A14:  000055E3     CMPS r0, r5, 0x0
		   0x01118A18:  0000001A     BNE $+0x8  // if (!=) goto 0x01118A20
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x01118A1C:  6B0AF9EB     BL $-0x1bd64c
		   // ──── Block 25 if (!=) ────────────────────
		   0x01118A20:  000095E5     LDR r0, [r5]
		   0x01118A24:  D02FC0E1     LDRD r2, r3, [r0, 0xf0]
		   0x01118A28:  0500A0E1     MOV r0, r5
		   0x01118A2C:  0310A0E1     MOV r1, r3
		   0x01118A30:  32FF2FE1     BLX r2
		   0x01118A34:  200194E5     LDR r0, [r4, 0x120]
		   0x01118A38:  0190A0E3     MOV sb, 0x1
		   0x01118A3C:  000050E3     CMPS r0, r0, 0x0
		   0x01118A40:  0300000A     BEQ $+0x14  // if (==) goto 0x01118A54
		   // 
		   // ──── Block 26 else (!=) ────────────────────
		   0x01118A44:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01118A48:  141090E5     LDR r1, [r0, 0x14]
		   0x01118A4C:  200090E5     LDR r0, [r0, 0x20]
		   0x01118A50:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   // ──── Block 27 (from 2 paths) ──────────────────
		   0x01118A54:  0900A0E1     MOV r0, sb
		   0x01118A58:  18D08DE2     ADD sp, sp, 0x18
		   0x01118A5C:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x01118A60:  0B361103     TSTSEQ r3, r1, 0xb00000
		   0x01118A64:  4C07F602     RSCSEQ r0, r6, 0x1300000
		   0x01118A68:  FC0AF602     RSCSEQ r0, r6, 0xfc000
		   0x01118A6C:  980AF602     RSCSEQ r0, r6, 0x98000
		   0x01118A70:  FE331103     TSTSEQ r3, r1, 0xf8000003
		   0x01118A74:  680AF602     RSCSEQ r0, r6, 0x68000
		   0x01118A78:  A405F602     RSCSEQ r0, r6, 0x29000000
		*/
	}

	// RVA: 0x1118CB0 Offset: 0x1118CB0 VA: 0x1118CB0
	public void Restore() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01118CB0:  02FBFFEA     B $-0x13f0
		*/
	}

	// RVA: 0x1118CB4 Offset: 0x1118CB4 VA: 0x1118CB4
	public void SpeedUp(float boostSeconds) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01118CB4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01118CB8:  10D04DE2     SUB sp, sp, 0x10
		   0x01118CBC:  0150A0E1     MOV r5, r1
		   0x01118CC0:  0110A0E3     MOV r1, 0x1
		   0x01118CC4:  0040A0E1     MOV r4, r0
		   0x01118CC8:  0160A0E3     MOV r6, 0x1
		   0x01118CCC:  C6CBFFEB     BL $-0xd0e0
		*/
	}

	// RVA: 0x1118EE0 Offset: 0x1118EE0 VA: 0x1118EE0
	public void Recharge(Action<bool> canRecharge) {
		/* Disassembly (ARM32, 241 instructions, 0x3C4 bytes):
		   // CFG: 33 blocks, 31 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01118EE0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01118EE4:  4CD04DE2     SUB sp, sp, 0x4c
		   0x01118EE8:  68439FE5     LDR r4, [pc, 0x368]
		   0x01118EEC:  0050A0E1     MOV r5, r0
		   0x01118EF0:  0160A0E1     MOV r6, r1
		   0x01118EF4:  04408FE0     ADD r4, pc, r4
		   0x01118EF8:  0000D4E5     LDRB r0, [r4]
		   0x01118EFC:  000050E3     CMPS r0, r0, 0x0
		   0x01118F00:  1600001A     BNE $+0x60  // if (!=) goto 0x01118F60
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01118F04:  50039FE5     LDR r0, [pc, 0x350]
		   0x01118F08:  00009FE7     LDR r0, [pc, r0]
		   0x01118F0C:  9308F9EB     BL $-0x1bddac
		   0x01118F10:  48039FE5     LDR r0, [pc, 0x348]
		   0x01118F14:  00009FE7     LDR r0, [pc, r0]
		   0x01118F18:  9008F9EB     BL $-0x1bddb8
		   0x01118F1C:  40039FE5     LDR r0, [pc, 0x340]
		   0x01118F20:  00009FE7     LDR r0, [pc, r0]
		   0x01118F24:  8D08F9EB     BL $-0x1bddc4
		   0x01118F28:  38039FE5     LDR r0, [pc, 0x338]
		   0x01118F2C:  00009FE7     LDR r0, [pc, r0]
		   0x01118F30:  8A08F9EB     BL $-0x1bddd0
		   0x01118F34:  30039FE5     LDR r0, [pc, 0x330]
		   0x01118F38:  00009FE7     LDR r0, [pc, r0]
		   0x01118F3C:  8708F9EB     BL $-0x1bdddc
		   0x01118F40:  28039FE5     LDR r0, [pc, 0x328]
		   0x01118F44:  00009FE7     LDR r0, [pc, r0]
		   0x01118F48:  8408F9EB     BL $-0x1bdde8
		   0x01118F4C:  20039FE5     LDR r0, [pc, 0x320]
		   0x01118F50:  00009FE7     LDR r0, [pc, r0]
		   0x01118F54:  8108F9EB     BL $-0x1bddf4
		   0x01118F58:  0100A0E3     MOV r0, 0x1
		   0x01118F5C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01118F60:  10039FE5     LDR r0, [pc, 0x310]
		   0x01118F64:  0010A0E3     MOV r1, 0x0
		   0x01118F68:  00009FE7     LDR r0, [pc, r0]
		   0x01118F6C:  44108DE5     STR r1, [sp, 0x44]
		   0x01118F70:  40108DE5     STR r1, [sp, 0x40]
		   0x01118F74:  000090E5     LDR r0, [r0]
		   0x01118F78:  48108DE5     STR r1, [sp, 0x48]
		   0x01118F7C:  34108DE5     STR r1, [sp, 0x34]
		   0x01118F80:  30108DE5     STR r1, [sp, 0x30]
		   0x01118F84:  38108DE5     STR r1, [sp, 0x38]
		   0x01118F88:  0D09F9EB     BL $-0x1bdbc4
		   0x01118F8C:  0010A0E3     MOV r1, 0x0
		   0x01118F90:  0040A0E1     MOV r4, r0
		   0x01118F94:  14F17DEB     BL $+0x1f7c458  // CALL → Object..ctor
		   0x01118F98:  000054E3     CMPS r0, r4, 0x0
		   0x01118F9C:  0000001A     BNE $+0x8  // if (!=) goto 0x01118FA4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01118FA0:  0A09F9EB     BL $-0x1bdbd0
		   // ──── Block 4 if (!=) ────────────────────
		   0x01118FA4:  E800D5E5     LDRB r0, [r5, 0xe8]
		   0x01118FA8:  0C5084E5     STR r5, [r4, 0xc]
		   0x01118FAC:  000050E3     CMPS r0, r0, 0x0
		   0x01118FB0:  086084E5     STR r6, [r4, 0x8]
		   0x01118FB4:  1100000A     BEQ $+0x4c  // if (==) goto 0x01119000
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01118FB8:  0000A0E3     MOV r0, 0x0
		   0x01118FBC:  0070A0E3     MOV r7, 0x0
		   0x01118FC0:  C68301EB     BL $+0x60f20  // CALL → ProfileStorage.get_numEnergy
		   0x01118FC4:  E41095E5     LDR r1, [r5, 0xe4]
		   0x01118FC8:  010050E1     CMPS r0, r0, r1
		   0x01118FCC:  630000AA     BGE $+0x194  // if (>=) goto 0x01119160
		   // 
		   // ──── Block 6 else (<) ────────────────────
		   0x01118FD0:  080195E5     LDR r0, [r5, 0x108]
		   0x01118FD4:  000050E3     CMPS r0, r0, 0x0
		   0x01118FD8:  0300000A     BEQ $+0x14  // if (==) goto 0x01118FEC
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x01118FDC:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01118FE0:  141090E5     LDR r1, [r0, 0x14]
		   0x01118FE4:  200090E5     LDR r0, [r0, 0x20]
		   0x01118FE8:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   // ──── Block 8 if (==) ────────────────────
		   0x01118FEC:  0400A0E1     MOV r0, r4
		   0x01118FF0:  0010A0E3     MOV r1, 0x0
		   0x01118FF4:  4CD08DE2     ADD sp, sp, 0x4c
		   0x01118FF8:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01118FFC:  AA0000EA     B $+0x2b0  // TAIL CALL → <>c__DisplayClass86_0.<Recharge>g__Spend|0
		   // ──── Block 9 if (==) ────────────────────
		   0x01119000:  0010A0E3     MOV r1, 0x0
		   0x01119004:  1A00A0E3     MOV r0, 0x1a
		   0x01119008:  F000CDE1     STRD r0, r1, [sp]
		   0x0111900C:  30008DE2     ADD r0, sp, 0x30
		   0x01119010:  0210A0E3     MOV r1, 0x2
		   0x01119014:  0420A0E3     MOV r2, 0x4
		   0x01119018:  0D30A0E3     MOV r3, 0xd
		   0x0111901C:  DD0808EB     BL $+0x20237c  // CALL → CurrencySinkDataContainer..ctor
		   0x01119020:  64029FE5     LDR r0, [pc, 0x264]
		   0x01119024:  00009FE7     LDR r0, [pc, r0]
		   0x01119028:  000090E5     LDR r0, [r0]
		   0x0111902C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01119030:  006090E5     LDR r6, [r0]
		   0x01119034:  000056E3     CMPS r0, r6, 0x0
		   0x01119038:  0000001A     BNE $+0x8  // if (!=) goto 0x01119040
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0111903C:  E308F9EB     BL $-0x1bdc6c
		   // ──── Block 11 if (!=) ────────────────────
		   0x01119040:  48029FE5     LDR r0, [pc, 0x248]
		   0x01119044:  00009FE7     LDR r0, [pc, r0]
		   0x01119048:  E01095E5     LDR r1, [r5, 0xe0]
		   0x0111904C:  DC8095E5     LDR r8, [r5, 0xdc]
		   0x01119050:  000090E5     LDR r0, [r0]
		   0x01119054:  20108DE5     STR r1, [sp, 0x20]
		   0x01119058:  18A096E5     LDR r10, [r6, 0x18]
		   0x0111905C:  D808F9EB     BL $-0x1bdc98
		   0x01119060:  00B0A0E1     MOV fp, r0
		   0x01119064:  28029FE5     LDR r0, [pc, 0x228]
		   0x01119068:  0410A0E1     MOV r1, r4
		   0x0111906C:  0030A0E3     MOV r3, 0x0
		   0x01119070:  00009FE7     LDR r0, [pc, r0]
		   0x01119074:  002090E5     LDR r2, [r0]
		   0x01119078:  0B00A0E1     MOV r0, fp
		   0x0111907C:  262452EB     BL $+0x14890a0  // CALL → Action<bool>..ctor
		   0x01119080:  10029FE5     LDR r0, [pc, 0x210]
		   0x01119084:  00009FE7     LDR r0, [pc, r0]
		   0x01119088:  004090E5     LDR r4, [r0]
		   0x0111908C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01119090:  000050E3     CMPS r0, r0, 0x0
		   0x01119094:  0200001A     BNE $+0x10  // if (!=) goto 0x011190A4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01119098:  0400A0E1     MOV r0, r4
		   0x0111909C:  9CF6F9EB     BL $-0x182588
		   0x011190A0:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 13 if (!=) ────────────────────
		   0x011190A4:  080090E5     LDR r0, [r0, 0x8]
		   0x011190A8:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011190AC:  010011E3     TSTS r0, r1, 0x1
		   0x011190B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011190B8
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x011190B4:  7FF6F9EB     BL $-0x1825fc
		   // ──── Block 15 if (!=) ────────────────────
		   0x011190B8:  741090E5     LDR r1, [r0, 0x74]
		   0x011190BC:  000051E3     CMPS r0, r1, 0x0
		   0x011190C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011190C8
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x011190C4:  7208F9EB     BL $-0x1bde30
		   // ──── Block 17 if (!=) ────────────────────
		   0x011190C8:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x011190CC:  080090E5     LDR r0, [r0, 0x8]
		   0x011190D0:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011190D4:  010011E3     TSTS r0, r1, 0x1
		   0x011190D8:  0000001A     BNE $+0x8  // if (!=) goto 0x011190E0
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x011190DC:  75F6F9EB     BL $-0x182624
		   // ──── Block 19 if (!=) ────────────────────
		   0x011190E0:  B4119FE5     LDR r1, [pc, 0x1b4]
		   0x011190E4:  01109FE7     LDR r1, [pc, r1]
		   0x011190E8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011190EC:  001091E5     LDR r1, [r1]
		   0x011190F0:  004090E5     LDR r4, [r0]
		   0x011190F4:  742091E5     LDR r2, [r1, 0x74]
		   0x011190F8:  000052E3     CMPS r0, r2, 0x0
		   0x011190FC:  0100001A     BNE $+0xc  // if (!=) goto 0x01119108
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x01119100:  0100A0E1     MOV r0, r1
		   0x01119104:  6208F9EB     BL $-0x1bde70
		   // ──── Block 21 if (!=) ────────────────────
		   0x01119108:  90019FE5     LDR r0, [pc, 0x190]
		   0x0111910C:  0410A0E1     MOV r1, r4
		   0x01119110:  0020A0E3     MOV r2, 0x0
		   0x01119114:  0070A0E3     MOV r7, 0x0
		   0x01119118:  00009FE7     LDR r0, [pc, r0]
		   0x0111911C:  000090E5     LDR r0, [r0]
		   0x01119120:  0A8E0FEB     BL $+0x3e3830  // CALL → MergeLocalization.GetLocalization
		   0x01119124:  30908DE2     ADD sb, sp, 0x30
		   0x01119128:  0040A0E1     MOV r4, r0
		   0x0111912C:  00005AE3     CMPS r0, r10, 0x0
		   0x01119130:  600299E8     LDM sb, {r5, r6, sb}
		   0x01119134:  0000001A     BNE $+0x8  // if (!=) goto 0x0111913C
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x01119138:  A408F9EB     BL $-0x1bdd68
		   // ──── Block 23 if (!=) ────────────────────
		   0x0111913C:  70028DE8     STM sp, {r4, r5, r6, sb}
		   0x01119140:  0A00A0E1     MOV r0, r10
		   0x01119144:  0810A0E1     MOV r1, r8
		   0x01119148:  10708DE5     STR r7, [sp, 0x10]
		   0x0111914C:  0B30A0E1     MOV r3, fp
		   0x01119150:  14708DE5     STR r7, [sp, 0x14]
		   0x01119154:  20209DE5     LDR r2, [sp, 0x20]
		   0x01119158:  4D710CEB     BL $+0x31c53c  // CALL → GemsSystem.SpendGems
		   0x0111915C:  3B0000EA     B $+0xf4  // goto 0x01119250
		   // ──── Block 24 if (>=) ────────────────────
		   0x01119160:  40008DE2     ADD r0, sp, 0x40
		   0x01119164:  1960A0E3     MOV r6, 0x19
		   0x01119168:  1510A0E3     MOV r1, 0x15
		   0x0111916C:  0320A0E3     MOV r2, 0x3
		   0x01119170:  0C30A0E3     MOV r3, 0xc
		   0x01119174:  F060CDE1     STRD r6, r7, [sp]
		   0x01119178:  860808EB     BL $+0x202220  // CALL → CurrencySinkDataContainer..ctor
		   0x0111917C:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x01119180:  00009FE7     LDR r0, [pc, r0]
		   0x01119184:  000090E5     LDR r0, [r0]
		   0x01119188:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111918C:  006090E5     LDR r6, [r0]
		   0x01119190:  000056E3     CMPS r0, r6, 0x0
		   0x01119194:  0000001A     BNE $+0x8  // if (!=) goto 0x0111919C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01119198:  8C08F9EB     BL $-0x1bddc8
		   // ──── Block 26 if (!=) ────────────────────
		   0x0111919C:  DC709FE5     LDR r7, [pc, 0xdc]
		   0x011191A0:  E40095E5     LDR r0, [r5, 0xe4]
		   0x011191A4:  07708FE0     ADD r7, pc, r7
		   0x011191A8:  20008DE5     STR r0, [sp, 0x20]
		   0x011191AC:  1C6096E5     LDR r6, [r6, 0x1c]
		   0x011191B0:  0000D7E5     LDRB r0, [r7]
		   0x011191B4:  000050E3     CMPS r0, r0, 0x0
		   0x011191B8:  0400001A     BNE $+0x18  // if (!=) goto 0x011191D0
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x011191BC:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x011191C0:  00009FE7     LDR r0, [pc, r0]
		   0x011191C4:  E507F9EB     BL $-0x1be064
		   0x011191C8:  0100A0E3     MOV r0, 0x1
		   0x011191CC:  0000C7E5     STRB r0, [r7]
		   // ──── Block 28 if (!=) ────────────────────
		   0x011191D0:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x011191D4:  0010A0E3     MOV r1, 0x0
		   0x011191D8:  00009FE7     LDR r0, [pc, r0]
		   0x011191DC:  000090E5     LDR r0, [r0]
		   0x011191E0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011191E4:  080090E5     LDR r0, [r0, 0x8]
		   0x011191E8:  1C008DE5     STR r0, [sp, 0x1c]
		   0x011191EC:  24008DE2     ADD r0, sp, 0x24
		   0x011191F0:  543100EB     BL $+0xc558  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x011191F4:  24B09DE5     LDR fp, [sp, 0x24]
		   0x011191F8:  000056E3     CMPS r0, r6, 0x0
		   0x011191FC:  28709DE5     LDR r7, [sp, 0x28]
		   0x01119200:  2C509DE5     LDR r5, [sp, 0x2c]
		   0x01119204:  40909DE5     LDR sb, [sp, 0x40]
		   0x01119208:  44809DE5     LDR r8, [sp, 0x44]
		   0x0111920C:  48A09DE5     LDR r10, [sp, 0x48]
		   0x01119210:  0000001A     BNE $+0x8  // if (!=) goto 0x01119218
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x01119214:  6D08F9EB     BL $-0x1bde44
		   // ──── Block 30 if (!=) ────────────────────
		   0x01119218:  0000A0E3     MOV r0, 0x0
		   0x0111921C:  00708DE5     STR r7, [sp]
		   0x01119220:  14008DE5     STR r0, [sp, 0x14]
		   0x01119224:  0600A0E1     MOV r0, r6
		   0x01119228:  20028DE9     STMIA sp, {r5, sb}
		   0x0111922C:  0B30A0E1     MOV r3, fp
		   0x01119230:  0C808DE5     STR r8, [sp, 0xc]
		   0x01119234:  10A08DE5     STR r10, [sp, 0x10]
		   0x01119238:  20109DE5     LDR r1, [sp, 0x20]
		   0x0111923C:  1C209DE5     LDR r2, [sp, 0x1c]
		   0x01119240:  FB680CEB     BL $+0x31a3f4  // CALL → EnergySystem.SpendEnergy
		   0x01119244:  0400A0E1     MOV r0, r4
		   0x01119248:  0110A0E3     MOV r1, 0x1
		   0x0111924C:  160000EB     BL $+0x60  // CALL → <>c__DisplayClass86_0.<Recharge>g__Spend|0
		   // ──── Block 31 ──────────────────────────────
		   0x01119250:  4CD08DE2     ADD sp, sp, 0x4c
		   0x01119254:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x01119258:  5C2F1103     TSTSEQ r2, r1, 0x170
		   0x0111925C:  90E8F502     RSCSEQ lr, r5, 0x900000
		   0x01119260:  8CD6F502     RSCSEQ sp, r5, 0x8c00000
		   0x01119264:  DCECF502     RSCSEQ lr, r5, 0xdc00
		   0x01119268:  7CF7F502     RSCSEQ pc, r5, 0x1f00000
		   0x0111926C:  540BF602     RSCSEQ r0, r6, 0x15000
		   0x01119270:  4C0BF602     RSCSEQ r0, r6, 0x13000
		   0x01119274:  6008F602     RSCSEQ r0, r6, 0x600000
		   0x01119278:  280BF602     RSCSEQ r0, r6, 0xa000
		   0x0111927C:  7CEAF502     RSCSEQ lr, r5, 0x7c000
		   0x01119280:  3D2B1103     TSTSEQ r2, r1, 0xf400
		   0x01119284:  9001F602     RSCSEQ r0, r6, 0x24
		   0x01119288:  7801F602     RSCSEQ r0, r6, 0x1e
		   0x0111928C:  D8EBF502     RSCSEQ lr, r5, 0x36000
		   0x01119290:  54E7F502     RSCSEQ lr, r5, 0x1500000
		   0x01119294:  1C0AF602     RSCSEQ r0, r6, 0x1c000
		   0x01119298:  1CD5F502     RSCSEQ sp, r5, 0x7000000
		   0x0111929C:  C4F5F502     RSCSEQ pc, r5, 0x31000000
		   0x011192A0:  9806F602     RSCSEQ r0, r6, 0x9800000
		*/
	}

	// RVA: 0x1119550 Offset: 0x1119550 VA: 0x1119550 Slot: 47
	public void OnEnergyConsumptionChanged(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 33 instructions, 0x84 bytes):
		   // CFG: 7 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01119550:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01119554:  CC609FE5     LDR r6, [pc, 0xcc]
		   0x01119558:  0040A0E1     MOV r4, r0
		   0x0111955C:  0150A0E1     MOV r5, r1
		   0x01119560:  06608FE0     ADD r6, pc, r6
		   0x01119564:  0000D6E5     LDRB r0, [r6]
		   0x01119568:  000050E3     CMPS r0, r0, 0x0
		   0x0111956C:  0400001A     BNE $+0x18  // if (!=) goto 0x01119584
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01119570:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01119574:  00009FE7     LDR r0, [pc, r0]
		   0x01119578:  F806F9EB     BL $-0x1be418
		   0x0111957C:  0100A0E3     MOV r0, 0x1
		   0x01119580:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01119584:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01119588:  00009FE7     LDR r0, [pc, r0]
		   0x0111958C:  AC6094E5     LDR r6, [r4, 0xac]
		   0x01119590:  000090E5     LDR r0, [r0]
		   0x01119594:  741090E5     LDR r1, [r0, 0x74]
		   0x01119598:  000051E3     CMPS r0, r1, 0x0
		   0x0111959C:  0000001A     BNE $+0x8  // if (!=) goto 0x011195A4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011195A0:  3B07F9EB     BL $-0x1be30c
		   // ──── Block 4 if (!=) ────────────────────
		   0x011195A4:  0600A0E1     MOV r0, r6
		   0x011195A8:  0010A0E3     MOV r1, 0x0
		   0x011195AC:  0020A0E3     MOV r2, 0x0
		   0x011195B0:  397A3BEB     BL $+0xede8ec  // CALL → sub_1FF7E9C
		   0x011195B4:  000050E3     CMPS r0, r0, 0x0
		   0x011195B8:  7080BD18     POPNE {r4, r5, r6, pc}
		   0x011195BC:  840094E5     LDR r0, [r4, 0x84]
		   0x011195C0:  000050E3     CMPS r0, r0, 0x0
		   0x011195C4:  9000D015     LDRBNE r0, [r0, 0x90]
		   0x011195C8:  00005013     CMPSNE r0, r0, 0x0
		   0x011195CC:  0000001A     BNE $+0x8
		   0x011195D0:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x1118694 Offset: 0x1118694 VA: 0x1118694
	private int GetActivationCostEnergy(EnergyConsumptionMode mode) {
		/* Disassembly (ARM32, 104 instructions, 0x1A0 bytes):
		   // CFG: 26 blocks, 25 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01118694:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01118698:  08D04DE2     SUB sp, sp, 0x8
		   0x0111869C:  6C619FE5     LDR r6, [pc, 0x16c]
		   0x011186A0:  0040A0E1     MOV r4, r0
		   0x011186A4:  0150A0E1     MOV r5, r1
		   0x011186A8:  06608FE0     ADD r6, pc, r6
		   0x011186AC:  0000D6E5     LDRB r0, [r6]
		   0x011186B0:  000050E3     CMPS r0, r0, 0x0
		   0x011186B4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x011186F0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011186B8:  54019FE5     LDR r0, [pc, 0x154]
		   0x011186BC:  00009FE7     LDR r0, [pc, r0]
		   0x011186C0:  A60AF9EB     BL $-0x1bd560
		   0x011186C4:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x011186C8:  00009FE7     LDR r0, [pc, r0]
		   0x011186CC:  A30AF9EB     BL $-0x1bd56c
		   0x011186D0:  44019FE5     LDR r0, [pc, 0x144]
		   0x011186D4:  00009FE7     LDR r0, [pc, r0]
		   0x011186D8:  A00AF9EB     BL $-0x1bd578
		   0x011186DC:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x011186E0:  00009FE7     LDR r0, [pc, r0]
		   0x011186E4:  9D0AF9EB     BL $-0x1bd584
		   0x011186E8:  0100A0E3     MOV r0, 0x1
		   0x011186EC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011186F0:  847094E5     LDR r7, [r4, 0x84]
		   0x011186F4:  000057E3     CMPS r0, r7, 0x0
		   0x011186F8:  0760A0E1     MOV r6, r7
		   0x011186FC:  0100001A     BNE $+0xc  // if (!=) goto 0x01118708
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01118700:  320BF9EB     BL $-0x1bd330
		   0x01118704:  846094E5     LDR r6, [r4, 0x84]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01118708:  8C0097E5     LDR r0, [r7, 0x8c]
		   0x0111870C:  010050E3     CMPS r0, r0, 0x1
		   0x01118710:  310000BA     BLT $+0xcc  // if (<) goto 0x011187DC
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x01118714:  000056E3     CMPS r0, r6, 0x0
		   0x01118718:  0000001A     BNE $+0x8  // if (!=) goto 0x01118720
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0111871C:  2B0BF9EB     BL $-0x1bd34c
		   // ──── Block 7 if (!=) ────────────────────
		   0x01118720:  9000D6E5     LDRB r0, [r6, 0x90]
		   0x01118724:  000050E3     CMPS r0, r0, 0x0
		   0x01118728:  2A00000A     BEQ $+0xb0  // if (==) goto 0x011187D8
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0111872C:  010075E3     CMNS r0, r5, 0x1
		   0x01118730:  2200000A     BEQ $+0x90  // if (==) goto 0x011187C0
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x01118734:  020055E3     CMPS r0, r5, 0x2
		   0x01118738:  2D00000A     BEQ $+0xbc  // if (==) goto 0x011187F4
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x0111873C:  010055E3     CMPS r0, r5, 0x1
		   0x01118740:  1E00000A     BEQ $+0x80  // if (==) goto 0x011187C0
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x01118744:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01118748:  04108DE2     ADD r1, sp, 0x4
		   0x0111874C:  00009FE7     LDR r0, [pc, r0]
		   0x01118750:  04508DE5     STR r5, [sp, 0x4]
		   0x01118754:  000090E5     LDR r0, [r0]
		   0x01118758:  CF0AF9EB     BL $-0x1bd4bc
		   0x0111875C:  0010A0E1     MOV r1, r0
		   0x01118760:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01118764:  0020A0E3     MOV r2, 0x0
		   0x01118768:  00009FE7     LDR r0, [pc, r0]
		   0x0111876C:  000090E5     LDR r0, [r0]
		   0x01118770:  01B875EB     BL $+0x1d6e00c  // CALL → String.Format
		   0x01118774:  0060A0E1     MOV r6, r0
		   0x01118778:  AC009FE5     LDR r0, [pc, 0xac]
		   0x0111877C:  00009FE7     LDR r0, [pc, r0]
		   0x01118780:  000090E5     LDR r0, [r0]
		   0x01118784:  0E0BF9EB     BL $-0x1bd3c0
		   0x01118788:  0610A0E1     MOV r1, r6
		   0x0111878C:  0020A0E3     MOV r2, 0x0
		   0x01118790:  0050A0E1     MOV r5, r0
		   0x01118794:  BA1610EB     BL $+0x405af0  // CALL → InfoException..ctor
		   0x01118798:  90009FE5     LDR r0, [pc, 0x90]
		   0x0111879C:  00009FE7     LDR r0, [pc, r0]
		   0x011187A0:  000090E5     LDR r0, [r0]
		   0x011187A4:  741090E5     LDR r1, [r0, 0x74]
		   0x011187A8:  000051E3     CMPS r0, r1, 0x0
		   0x011187AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011187B4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x011187B0:  B70AF9EB     BL $-0x1bd51c
		   // ──── Block 13 if (!=) ────────────────────
		   0x011187B4:  0500A0E1     MOV r0, r5
		   0x011187B8:  0010A0E3     MOV r1, 0x0
		   0x011187BC:  727E3BEB     BL $+0xedf9d0  // CALL → sub_1FF818C
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x011187C0:  844094E5     LDR r4, [r4, 0x84]
		   0x011187C4:  000054E3     CMPS r0, r4, 0x0
		   0x011187C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011187D0
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x011187CC:  FF0AF9EB     BL $-0x1bd3fc
		   // ──── Block 16 if (!=) ────────────────────
		   0x011187D0:  8C0094E5     LDR r0, [r4, 0x8c]
		   0x011187D4:  040000EA     B $+0x18  // goto 0x011187EC
		   // ──── Block 17 if (==) ────────────────────
		   0x011187D8:  846094E5     LDR r6, [r4, 0x84]
		   // ──── Block 18 if (<) ────────────────────
		   0x011187DC:  000056E3     CMPS r0, r6, 0x0
		   0x011187E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011187E8
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x011187E4:  F90AF9EB     BL $-0x1bd414
		   // ──── Block 20 if (!=) ────────────────────
		   0x011187E8:  8C0096E5     LDR r0, [r6, 0x8c]
		   // ──── Block 21 ──────────────────────────────
		   0x011187EC:  08D08DE2     ADD sp, sp, 0x8
		   0x011187F0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 22 if (==) ────────────────────
		   0x011187F4:  844094E5     LDR r4, [r4, 0x84]
		   0x011187F8:  000054E3     CMPS r0, r4, 0x0
		   0x011187FC:  0000001A     BNE $+0x8  // if (!=) goto 0x01118804
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01118800:  F20AF9EB     BL $-0x1bd430
		   // ──── Block 24 if (!=) ────────────────────
		   0x01118804:  8C0094E5     LDR r0, [r4, 0x8c]
		   0x01118808:  8000A0E1     MOV r0, r0, r0, lsl 1
		   0x0111880C:  F6FFFFEA     B $-0x20
		   0x01118810:  AA371103     TSTSEQ r3, r1, 0x2a80000
		   0x01118814:  CCDEF502     RSCSEQ sp, r5, 0xcc0
		   0x01118818:  9411F602     RSCSEQ r1, r6, 0x25
		   0x0111881C:  F8EFF502     RSCSEQ lr, r5, 0x3e0
		   0x01118820:  D011F602     RSCSEQ r1, r6, 0x34
		   0x01118824:  1011F602     RSCSEQ r1, r6, 0x4
		   0x01118828:  4811F602     RSCSEQ r1, r6, 0x12
		   0x0111882C:  50EFF502     RSCSEQ lr, r5, 0x140
		   0x01118830:  ECDDF502     RSCSEQ sp, r5, 0x3b00
		*/
	}

	// RVA: 0x1119634 Offset: 0x1119634 VA: 0x1119634 Slot: 48
	protected virtual ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01119634:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	// RVA: 0x1117374 Offset: 0x1117374 VA: 0x1117374
	private void StopTimerCoroutine() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117374:  F01090E5     LDR r1, [r0, 0xf0]
		   0x01117378:  000051E3     CMPS r0, r1, 0x0
		   0x0111737C:  1EFF2F01     BXEQ lr
		   0x01117380:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01117384:  0020A0E3     MOV r2, 0x0
		   0x01117388:  0040A0E1     MOV r4, r0
		   0x0111738C:  0050A0E3     MOV r5, 0x0
		   0x01117390:  F4823BEB     BL $+0xee0bd8  // CALL → sub_1FF7F68
		   0x01117394:  F05084E5     STR r5, [r4, 0xf0]
		   0x01117398:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111739C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1117CB8 Offset: 0x1117CB8 VA: 0x1117CB8
	private void TryToShowEnergyIcon() {
		/* Disassembly (ARM32, 81 instructions, 0x144 bytes):
		   // CFG: 26 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117CB8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01117CBC:  98519FE5     LDR r5, [pc, 0x198]
		   0x01117CC0:  0040A0E1     MOV r4, r0
		   0x01117CC4:  05508FE0     ADD r5, pc, r5
		   0x01117CC8:  0000D5E5     LDRB r0, [r5]
		   0x01117CCC:  000050E3     CMPS r0, r0, 0x0
		   0x01117CD0:  0400001A     BNE $+0x18  // if (!=) goto 0x01117CE8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01117CD4:  84019FE5     LDR r0, [pc, 0x184]
		   0x01117CD8:  00009FE7     LDR r0, [pc, r0]
		   0x01117CDC:  1F0DF9EB     BL $-0x1bcb7c
		   0x01117CE0:  0100A0E3     MOV r0, 0x1
		   0x01117CE4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01117CE8:  845094E5     LDR r5, [r4, 0x84]
		   0x01117CEC:  000055E3     CMPS r0, r5, 0x0
		   0x01117CF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01117CF8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01117CF4:  B50DF9EB     BL $-0x1bc924
		   // ──── Block 4 if (!=) ────────────────────
		   0x01117CF8:  8C0095E5     LDR r0, [r5, 0x8c]
		   0x01117CFC:  010050E3     CMPS r0, r0, 0x1
		   0x01117D00:  080000BA     BLT $+0x28  // if (<) goto 0x01117D28
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x01117D04:  845094E5     LDR r5, [r4, 0x84]
		   0x01117D08:  000055E3     CMPS r0, r5, 0x0
		   0x01117D0C:  0000001A     BNE $+0x8  // if (!=) goto 0x01117D14
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01117D10:  AE0DF9EB     BL $-0x1bc940
		   // ──── Block 7 if (!=) ────────────────────
		   0x01117D14:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x01117D18:  000050E3     CMPS r0, r0, 0x0
		   0x01117D1C:  3800D405     LDRBEQ r0, [r4, 0x38]
		   0x01117D20:  00005003     CMPSEQ r0, r0, 0x0
		   0x01117D24:  4000000A     BEQ $+0x108
		   // ──── Block 8 if (<) ────────────────────
		   0x01117D28:  0000A0E3     MOV r0, 0x0
		   0x01117D2C:  6B8801EB     BL $+0x621b4  // CALL → ProfileStorage.get_numEnergy
		   0x01117D30:  846094E5     LDR r6, [r4, 0x84]
		   0x01117D34:  0050A0E1     MOV r5, r0
		   0x01117D38:  000056E3     CMPS r0, r6, 0x0
		   0x01117D3C:  0000001A     BNE $+0x8  // if (!=) goto 0x01117D44
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01117D40:  A20DF9EB     BL $-0x1bc970
		   // ──── Block 10 if (!=) ────────────────────
		   0x01117D44:  8C0096E5     LDR r0, [r6, 0x8c]
		   0x01117D48:  000055E1     CMPS r0, r5, r0
		   0x01117D4C:  0E0000AA     BGE $+0x40  // if (>=) goto 0x01117D8C
		   // 
		   // ──── Block 11 else (<) ────────────────────
		   0x01117D50:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01117D54:  00009FE7     LDR r0, [pc, r0]
		   0x01117D58:  000090E5     LDR r0, [r0]
		   0x01117D5C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01117D60:  005090E5     LDR r5, [r0]
		   0x01117D64:  000055E3     CMPS r0, r5, 0x0
		   0x01117D68:  0000001A     BNE $+0x8  // if (!=) goto 0x01117D70
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01117D6C:  970DF9EB     BL $-0x1bc99c
		   // ──── Block 13 if (!=) ────────────────────
		   0x01117D70:  205095E5     LDR r5, [r5, 0x20]
		   0x01117D74:  000055E3     CMPS r0, r5, 0x0
		   0x01117D78:  0000001A     BNE $+0x8  // if (!=) goto 0x01117D80
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01117D7C:  930DF9EB     BL $-0x1bc9ac
		   // ──── Block 15 if (!=) ────────────────────
		   0x01117D80:  2000D5E5     LDRB r0, [r5, 0x20]
		   0x01117D84:  000050E3     CMPS r0, r0, 0x0
		   0x01117D88:  0800000A     BEQ $+0x28  // if (==) goto 0x01117DB0
		   // 
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x01117D8C:  845094E5     LDR r5, [r4, 0x84]
		   0x01117D90:  000055E3     CMPS r0, r5, 0x0
		   0x01117D94:  0000001A     BNE $+0x8  // if (!=) goto 0x01117D9C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01117D98:  8C0DF9EB     BL $-0x1bc9c8
		   // ──── Block 18 if (!=) ────────────────────
		   0x01117D9C:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x01117DA0:  000050E3     CMPS r0, r0, 0x0
		   0x01117DA4:  3800D405     LDRBEQ r0, [r4, 0x38]
		   0x01117DA8:  00005003     CMPSEQ r0, r0, 0x0
		   0x01117DAC:  1200000A     BEQ $+0x50
		   // ──── Block 19 if (==) ────────────────────
		   0x01117DB0:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x01117DB4:  000050E3     CMPS r0, r0, 0x0
		   0x01117DB8:  0E00000A     BEQ $+0x40  // if (==) goto 0x01117DF8
		   // 
		   // ──── Block 20 else (!=) ────────────────────
		   0x01117DBC:  AC5094E5     LDR r5, [r4, 0xac]
		   0x01117DC0:  000055E3     CMPS r0, r5, 0x0
		   0x01117DC4:  0000001A     BNE $+0x8  // if (!=) goto 0x01117DCC
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x01117DC8:  800DF9EB     BL $-0x1bc9f8
		   // ──── Block 22 if (!=) ────────────────────
		   0x01117DCC:  0500A0E1     MOV r0, r5
		   0x01117DD0:  0010A0E3     MOV r1, 0x0
		   0x01117DD4:  6E2710EB     BL $+0x409dc0  // CALL → SparklesEffect.Hide
		   0x01117DD8:  A44094E5     LDR r4, [r4, 0xa4]
		   0x01117DDC:  000054E3     CMPS r0, r4, 0x0
		   0x01117DE0:  0000001A     BNE $+0x8  // if (!=) goto 0x01117DE8
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01117DE4:  790DF9EB     BL $-0x1bca14
		   // ──── Block 24 if (!=) ────────────────────
		   0x01117DE8:  0400A0E1     MOV r0, r4
		   0x01117DEC:  0010A0E3     MOV r1, 0x0
		   0x01117DF0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01117DF4:  DA1F10EA     B $+0x407f70  // TAIL CALL → EnergyEffect.Hide
		   // ──── Block 25 if (==) ────────────────────
		   0x01117DF8:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x1117898 Offset: 0x1117898 VA: 0x1117898
	private void StartEnergyAnimation() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01117898:  10402DE9     PUSH {r4, lr}
		   0x0111789C:  A44090E5     LDR r4, [r0, 0xa4]
		   0x011178A0:  000054E3     CMPS r0, r4, 0x0
		   0x011178A4:  0000001A     BNE $+0x8  // if (!=) goto 0x011178AC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011178A8:  C80EF9EB     BL $-0x1bc4d8
		   // ──── Block 2 if (!=) ────────────────────
		   0x011178AC:  0400A0E1     MOV r0, r4
		   0x011178B0:  0010A0E3     MOV r1, 0x0
		   0x011178B4:  1040BDE8     POP {r4, lr}
		   0x011178B8:  EB2010EA     B $+0x4083b4  // TAIL CALL → EnergyEffect.Show
		   0x011178BC:  00F020E3     INVALID
		*/
	}

	// RVA: 0x1119B5C Offset: 0x1119B5C VA: 0x1119B5C
	private void Awake() {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01119B5C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01119B60:  CC509FE5     LDR r5, [pc, 0xcc]
		   0x01119B64:  0040A0E1     MOV r4, r0
		   0x01119B68:  05508FE0     ADD r5, pc, r5
		   0x01119B6C:  0000D5E5     LDRB r0, [r5]
		   0x01119B70:  000050E3     CMPS r0, r0, 0x0
		   0x01119B74:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01119BB0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01119B78:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01119B7C:  00009FE7     LDR r0, [pc, r0]
		   0x01119B80:  7605F9EB     BL $-0x1bea20
		   0x01119B84:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x01119B88:  00009FE7     LDR r0, [pc, r0]
		   0x01119B8C:  7305F9EB     BL $-0x1bea2c
		   0x01119B90:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x01119B94:  00009FE7     LDR r0, [pc, r0]
		   0x01119B98:  7005F9EB     BL $-0x1bea38
		   0x01119B9C:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01119BA0:  00009FE7     LDR r0, [pc, r0]
		   0x01119BA4:  6D05F9EB     BL $-0x1bea44
		   0x01119BA8:  0100A0E3     MOV r0, 0x1
		   0x01119BAC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01119BB0:  90509FE5     LDR r5, [pc, 0x90]
		   0x01119BB4:  05509FE7     LDR r5, [pc, r5]
		   0x01119BB8:  000095E5     LDR r0, [r5]
		   0x01119BBC:  741090E5     LDR r1, [r0, 0x74]
		   0x01119BC0:  000051E3     CMPS r0, r1, 0x0
		   0x01119BC4:  0100001A     BNE $+0xc  // if (!=) goto 0x01119BD0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01119BC8:  B105F9EB     BL $-0x1be934
		   0x01119BCC:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01119BD0:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01119BD4:  70009FE5     LDR r0, [pc, 0x70]
		   0x01119BD8:  00009FE7     LDR r0, [pc, r0]
		   0x01119BDC:  105091E5     LDR r5, [r1, 0x10]
		   0x01119BE0:  000090E5     LDR r0, [r0]
		   0x01119BE4:  F605F9EB     BL $-0x1be820
		   0x01119BE8:  0060A0E1     MOV r6, r0
		   0x01119BEC:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01119BF0:  0410A0E1     MOV r1, r4
		   0x01119BF4:  0030A0E3     MOV r3, 0x0
		   0x01119BF8:  00009FE7     LDR r0, [pc, r0]
		   0x01119BFC:  002090E5     LDR r2, [r0]
		   0x01119C00:  0600A0E1     MOV r0, r6
		   0x01119C04:  CE4D7AEB     BL $+0x1e93740  // CALL → Action..ctor
		   0x01119C08:  000055E3     CMPS r0, r5, 0x0
		   0x01119C0C:  0000001A     BNE $+0x8  // if (!=) goto 0x01119C14
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01119C10:  EE05F9EB     BL $-0x1be840
		   // ──── Block 6 if (!=) ────────────────────
		   0x01119C14:  38009FE5     LDR r0, [pc, 0x38]
		   0x01119C18:  0610A0E1     MOV r1, r6
		   0x01119C1C:  0020A0E3     MOV r2, 0x0
		   0x01119C20:  00009FE7     LDR r0, [pc, r0]
		   0x01119C24:  003090E5     LDR r3, [r0]
		   0x01119C28:  0500A0E1     MOV r0, r5
		   0x01119C2C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01119C30:  831B5FEA     B $+0x17c6e14  // TAIL CALL → UnityEventsHelper.EventList<object>.Add
		   0x01119C34:  ED221103     TSTSEQ r2, r1, 0xd000000e
		   0x01119C38:  48CDF502     RSCSEQ ip, r5, 0x1200
		   0x01119C3C:  58DEF502     RSCSEQ sp, r5, 0x580
		   0x01119C40:  08FFF502     RSCSEQ pc, r5, 0x20
		   0x01119C44:  90DAF502     RSCSEQ sp, r5, 0x90000
		   0x01119C48:  7CDAF502     RSCSEQ sp, r5, 0x7c000
		   0x01119C4C:  ECCCF502     RSCSEQ ip, r5, 0xec00
		   0x01119C50:  A4FEF502     RSCSEQ pc, r5, 0xa40
		   0x01119C54:  C0DDF502     RSCSEQ sp, r5, 0x3000
		*/
	}

	// RVA: 0x1119C58 Offset: 0x1119C58 VA: 0x1119C58
	private void OnDestroy() {
		/* Disassembly (ARM32, 62 instructions, 0xF8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01119C58:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01119C5C:  C8509FE5     LDR r5, [pc, 0xc8]
		   0x01119C60:  0040A0E1     MOV r4, r0
		   0x01119C64:  05508FE0     ADD r5, pc, r5
		   0x01119C68:  0000D5E5     LDRB r0, [r5]
		   0x01119C6C:  000050E3     CMPS r0, r0, 0x0
		   0x01119C70:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01119CAC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01119C74:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01119C78:  00009FE7     LDR r0, [pc, r0]
		   0x01119C7C:  3705F9EB     BL $-0x1beb1c
		   0x01119C80:  AC009FE5     LDR r0, [pc, 0xac]
		   0x01119C84:  00009FE7     LDR r0, [pc, r0]
		   0x01119C88:  3405F9EB     BL $-0x1beb28
		   0x01119C8C:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01119C90:  00009FE7     LDR r0, [pc, r0]
		   0x01119C94:  3105F9EB     BL $-0x1beb34
		   0x01119C98:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x01119C9C:  00009FE7     LDR r0, [pc, r0]
		   0x01119CA0:  2E05F9EB     BL $-0x1beb40
		   0x01119CA4:  0100A0E3     MOV r0, 0x1
		   0x01119CA8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01119CAC:  8C509FE5     LDR r5, [pc, 0x8c]
		   0x01119CB0:  05509FE7     LDR r5, [pc, r5]
		   0x01119CB4:  000095E5     LDR r0, [r5]
		   0x01119CB8:  741090E5     LDR r1, [r0, 0x74]
		   0x01119CBC:  000051E3     CMPS r0, r1, 0x0
		   0x01119CC0:  0100001A     BNE $+0xc  // if (!=) goto 0x01119CCC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01119CC4:  7205F9EB     BL $-0x1bea30
		   0x01119CC8:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01119CCC:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01119CD0:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01119CD4:  00009FE7     LDR r0, [pc, r0]
		   0x01119CD8:  105091E5     LDR r5, [r1, 0x10]
		   0x01119CDC:  000090E5     LDR r0, [r0]
		   0x01119CE0:  B705F9EB     BL $-0x1be91c
		   0x01119CE4:  0060A0E1     MOV r6, r0
		   0x01119CE8:  58009FE5     LDR r0, [pc, 0x58]
		   0x01119CEC:  0410A0E1     MOV r1, r4
		   0x01119CF0:  0030A0E3     MOV r3, 0x0
		   0x01119CF4:  00009FE7     LDR r0, [pc, r0]
		   0x01119CF8:  002090E5     LDR r2, [r0]
		   0x01119CFC:  0600A0E1     MOV r0, r6
		   0x01119D00:  8F4D7AEB     BL $+0x1e93644  // CALL → Action..ctor
		   0x01119D04:  000055E3     CMPS r0, r5, 0x0
		   0x01119D08:  0000001A     BNE $+0x8  // if (!=) goto 0x01119D10
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01119D0C:  AF05F9EB     BL $-0x1be93c
		   // ──── Block 6 if (!=) ────────────────────
		   0x01119D10:  34009FE5     LDR r0, [pc, 0x34]
		   0x01119D14:  0610A0E1     MOV r1, r6
		   0x01119D18:  00009FE7     LDR r0, [pc, r0]
		   0x01119D1C:  002090E5     LDR r2, [r0]
		   0x01119D20:  0500A0E1     MOV r0, r5
		   0x01119D24:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01119D28:  8D1B5FEA     B $+0x17c6e3c  // TAIL CALL → UnityEventsHelper.EventList<object>.Remove
		   0x01119D2C:  F2211103     TSTSEQ r2, r1, 0x8000003c
		   0x01119D30:  4CCCF502     RSCSEQ ip, r5, 0x4c00
		   0x01119D34:  E4F1F502     RSCSEQ pc, r5, 0x39
		   0x01119D38:  0CFEF502     RSCSEQ pc, r5, 0xc0
		   0x01119D3C:  94D9F502     RSCSEQ sp, r5, 0x250000
		   0x01119D40:  80D9F502     RSCSEQ sp, r5, 0x200000
		   0x01119D44:  F0CBF502     RSCSEQ ip, r5, 0x3c000
		   0x01119D48:  A8FDF502     RSCSEQ pc, r5, 0x2a00
		   0x01119D4C:  50F1F502     RSCSEQ pc, r5, 0x14
		*/
	}

	// RVA: 0x1119D50 Offset: 0x1119D50 VA: 0x1119D50
	private void OnUnpause() {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01119D50:  10402DE9     PUSH {r4, lr}
		   0x01119D54:  0040A0E1     MOV r4, r0
		   0x01119D58:  000090E5     LDR r0, [r0]
		   0x01119D5C:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x01119D60:  0400A0E1     MOV r0, r4
		   0x01119D64:  0310A0E1     MOV r1, r3
		   0x01119D68:  32FF2FE1     BLX r2
		   0x01119D6C:  000050E3     CMPS r0, r0, 0x0
		   0x01119D70:  1080BD08     POPEQ {r4, pc}
		   0x01119D74:  0400A0E1     MOV r0, r4
		   0x01119D78:  1040BDE8     POP {r4, lr}
		   0x01119D7C:  CFF6FFEA     B $-0x24bc
		*/
	}

	// RVA: 0x11178C0 Offset: 0x11178C0 VA: 0x11178C0
	private void RestoreTimer() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011178C0:  70432DE9     PUSH {r4, r5, r6, r8, sb, lr}
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x1118BAC Offset: 0x1118BAC VA: 0x1118BAC
	private IEnumerator StartOpenTimer(float startTime) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01118BAC:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x1119E50 Offset: 0x1119E50 VA: 0x1119E50
	public void CalculateAndSendOpenTimer() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01119E50:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x111A044 Offset: 0x111A044 VA: 0x111A044
	private void TryShowSparkles() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111A044:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0111A048:  A8509FE5     LDR r5, [pc, 0xa8]
		   0x0111A04C:  0040A0E1     MOV r4, r0
		   0x0111A050:  05508FE0     ADD r5, pc, r5
		   0x0111A054:  0000D5E5     LDRB r0, [r5]
		   0x0111A058:  000050E3     CMPS r0, r0, 0x0
		   0x0111A05C:  0400001A     BNE $+0x18  // if (!=) goto 0x0111A074
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111A060:  94009FE5     LDR r0, [pc, 0x94]
		   0x0111A064:  00009FE7     LDR r0, [pc, r0]
		   0x0111A068:  3C04F9EB     BL $-0x1bef08
		   0x0111A06C:  0100A0E3     MOV r0, 0x1
		   0x0111A070:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111A074:  84009FE5     LDR r0, [pc, 0x84]
		   0x0111A078:  00009FE7     LDR r0, [pc, r0]
		   0x0111A07C:  000090E5     LDR r0, [r0]
		   0x0111A080:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111A084:  005090E5     LDR r5, [r0]
		   0x0111A088:  000055E3     CMPS r0, r5, 0x0
		   0x0111A08C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A094
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111A090:  CE04F9EB     BL $-0x1becc0
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111A094:  205095E5     LDR r5, [r5, 0x20]
		   0x0111A098:  000055E3     CMPS r0, r5, 0x0
		   0x0111A09C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A0A4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111A0A0:  CA04F9EB     BL $-0x1becd0
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111A0A4:  2000D5E5     LDRB r0, [r5, 0x20]
		   0x0111A0A8:  000050E3     CMPS r0, r0, 0x0
		   0x0111A0AC:  0900001A     BNE $+0x2c  // if (!=) goto 0x0111A0D8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111A0B0:  0000A0E3     MOV r0, 0x0
		   0x0111A0B4:  897F01EB     BL $+0x5fe2c  // CALL → ProfileStorage.get_numEnergy
		   0x0111A0B8:  846094E5     LDR r6, [r4, 0x84]
		   0x0111A0BC:  0050A0E1     MOV r5, r0
		   0x0111A0C0:  000056E3     CMPS r0, r6, 0x0
		   0x0111A0C4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A0CC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0111A0C8:  C004F9EB     BL $-0x1becf8
		   // ──── Block 9 if (!=) ────────────────────
		   0x0111A0CC:  8C0096E5     LDR r0, [r6, 0x8c]
		   0x0111A0D0:  000055E1     CMPS r0, r5, r0
		   0x0111A0D4:  7080BDB8     POPLT {r4, r5, r6, pc}
		   // ──── Block 10 if (!=) ────────────────────
		   0x0111A0D8:  AC4094E5     LDR r4, [r4, 0xac]
		   0x0111A0DC:  000054E3     CMPS r0, r4, 0x0
		   0x0111A0E0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A0E8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0111A0E4:  B904F9EB     BL $-0x1bed14
		   // ──── Block 12 if (!=) ────────────────────
		   0x0111A0E8:  0400A0E1     MOV r0, r4
		   0x0111A0EC:  0010A0E3     MOV r1, 0x0
		   0x0111A0F0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0111A0F4:  661E10EA     B $+0x4079a0  // TAIL CALL → SparklesEffect.Show
		   0x0111A0F8:  091E1103     TSTSEQ r1, r1, 0x90
		   0x0111A0FC:  98DBF502     RSCSEQ sp, r5, 0x26000
		   0x0111A100:  84DBF502     RSCSEQ sp, r5, 0x21000
		*/
	}

	// RVA: 0x1119D80 Offset: 0x1119D80 VA: 0x1119D80
	private void TimerEndHandler() {
		/* Disassembly (ARM32, 45 instructions, 0xB4 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01119D80:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01119D84:  0040A0E1     MOV r4, r0
		   0x01119D88:  F80090E5     LDR r0, [r0, 0xf8]
		   0x01119D8C:  000050E3     CMPS r0, r0, 0x0
		   0x01119D90:  0300000A     BEQ $+0x14  // if (==) goto 0x01119DA4
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01119D94:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01119D98:  141090E5     LDR r1, [r0, 0x14]
		   0x01119D9C:  200090E5     LDR r0, [r0, 0x20]
		   0x01119DA0:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   // ──── Block 2 if (==) ────────────────────
		   0x01119DA4:  A85094E5     LDR r5, [r4, 0xa8]
		   0x01119DA8:  000055E3     CMPS r0, r5, 0x0
		   0x01119DAC:  0000001A     BNE $+0x8  // if (!=) goto 0x01119DB4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01119DB0:  8605F9EB     BL $-0x1be9e0
		   // ──── Block 4 if (!=) ────────────────────
		   0x01119DB4:  0500A0E1     MOV r0, r5
		   0x01119DB8:  0010A0E3     MOV r1, 0x0
		   0x01119DBC:  758CFFEB     BL $-0x1ce24
		   0x01119DC0:  845094E5     LDR r5, [r4, 0x84]
		   0x01119DC4:  000055E3     CMPS r0, r5, 0x0
		   0x01119DC8:  0000001A     BNE $+0x8  // if (!=) goto 0x01119DD0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01119DCC:  7F05F9EB     BL $-0x1be9fc
		   // ──── Block 6 if (!=) ────────────────────
		   0x01119DD0:  8C0095E5     LDR r0, [r5, 0x8c]
		   0x01119DD4:  010050E3     CMPS r0, r0, 0x1
		   0x01119DD8:  080000BA     BLT $+0x28  // if (<) goto 0x01119E00
		   // 
		   // ──── Block 7 else (>=) ────────────────────
		   0x01119DDC:  0400A0E1     MOV r0, r4
		   0x01119DE0:  B4F7FFEB     BL $-0x2128
		   0x01119DE4:  A45094E5     LDR r5, [r4, 0xa4]
		   0x01119DE8:  000055E3     CMPS r0, r5, 0x0
		   0x01119DEC:  0000001A     BNE $+0x8  // if (!=) goto 0x01119DF4
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01119DF0:  7605F9EB     BL $-0x1bea20
		   // ──── Block 9 if (!=) ────────────────────
		   0x01119DF4:  0500A0E1     MOV r0, r5
		   0x01119DF8:  0010A0E3     MOV r1, 0x0
		   0x01119DFC:  9A1710EB     BL $+0x405e70  // CALL → EnergyEffect.Show
		   // ──── Block 10 if (<) ────────────────────
		   0x01119E00:  0000A0E3     MOV r0, 0x0
		   0x01119E04:  1801C4E5     STRB r0, [r4, 0x118]  // vtable: Object.Equals
		   0x01119E08:  0400A0E1     MOV r0, r4
		   0x01119E0C:  8C0000EB     BL $+0x238  // CALL → ItemFiniteContainer.TryShowSparkles
		   0x01119E10:  200194E5     LDR r0, [r4, 0x120]
		   0x01119E14:  000050E3     CMPS r0, r0, 0x0
		   0x01119E18:  0400000A     BEQ $+0x18  // if (==) goto 0x01119E30
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x01119E1C:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01119E20:  141090E5     LDR r1, [r0, 0x14]
		   0x01119E24:  200090E5     LDR r0, [r0, 0x20]
		   0x01119E28:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01119E2C:  12FF2FE1     BX r2
		   // ──── Block 12 if (==) ────────────────────
		   0x01119E30:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1118DC8 Offset: 0x1118DC8 VA: 0x1118DC8
	private void StartClockAnimation(float time, Action onAnimationEnd, bool silent = false) {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01118DC8:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01118DCC:  10D04DE2     SUB sp, sp, 0x10
		   0x01118DD0:  EC609FE5     LDR r6, [pc, 0xec]
		   0x01118DD4:  0040A0E1     MOV r4, r0
		   0x01118DD8:  0390A0E1     MOV sb, r3
		   0x01118DDC:  0270A0E1     MOV r7, r2
		   0x01118DE0:  06608FE0     ADD r6, pc, r6
		   0x01118DE4:  0180A0E1     MOV r8, r1
		   0x01118DE8:  0000D6E5     LDRB r0, [r6]
		   0x01118DEC:  000050E3     CMPS r0, r0, 0x0
		   0x01118DF0:  0A00001A     BNE $+0x30  // if (!=) goto 0x01118E20
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01118DF4:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01118DF8:  00009FE7     LDR r0, [pc, r0]
		   0x01118DFC:  D708F9EB     BL $-0x1bdc9c
		   0x01118E00:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x01118E04:  00009FE7     LDR r0, [pc, r0]
		   0x01118E08:  D408F9EB     BL $-0x1bdca8
		   0x01118E0C:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01118E10:  00009FE7     LDR r0, [pc, r0]
		   0x01118E14:  D108F9EB     BL $-0x1bdcb4
		   0x01118E18:  0100A0E3     MOV r0, 0x1
		   0x01118E1C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01118E20:  AC009FE5     LDR r0, [pc, 0xac]
		   0x01118E24:  00009FE7     LDR r0, [pc, r0]
		   0x01118E28:  000090E5     LDR r0, [r0]
		   0x01118E2C:  6409F9EB     BL $-0x1bda68
		   0x01118E30:  0010A0E3     MOV r1, 0x0
		   0x01118E34:  0060A0E1     MOV r6, r0
		   0x01118E38:  6BF17DEB     BL $+0x1f7c5b4  // CALL → Object..ctor
		   0x01118E3C:  000056E3     CMPS r0, r6, 0x0
		   0x01118E40:  0000001A     BNE $+0x8  // if (!=) goto 0x01118E48
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01118E44:  6109F9EB     BL $-0x1bda74
		   // ──── Block 4 if (!=) ────────────────────
		   0x01118E48:  0400A0E1     MOV r0, r4
		   0x01118E4C:  0110A0E3     MOV r1, 0x1
		   0x01118E50:  084086E5     STR r4, [r6, 0x8]
		   0x01118E54:  0C7086E5     STR r7, [r6, 0xc]
		   0x01118E58:  63CBFFEB     BL $-0xd26c
		   0x01118E5C:  A87094E5     LDR r7, [r4, 0xa8]
		   0x01118E60:  70009FE5     LDR r0, [pc, 0x70]
		   0x01118E64:  00009FE7     LDR r0, [pc, r0]
		   0x01118E68:  000090E5     LDR r0, [r0]
		   0x01118E6C:  5409F9EB     BL $-0x1bdaa8
		   0x01118E70:  0040A0E1     MOV r4, r0
		   0x01118E74:  60009FE5     LDR r0, [pc, 0x60]
		   0x01118E78:  0610A0E1     MOV r1, r6
		   0x01118E7C:  0030A0E3     MOV r3, 0x0
		   0x01118E80:  0050A0E3     MOV r5, 0x0
		   0x01118E84:  00009FE7     LDR r0, [pc, r0]
		   0x01118E88:  002090E5     LDR r2, [r0]
		   0x01118E8C:  0400A0E1     MOV r0, r4
		   0x01118E90:  2B517AEB     BL $+0x1e944b4  // CALL → Action..ctor
		   0x01118E94:  000057E3     CMPS r0, r7, 0x0
		   0x01118E98:  0000001A     BNE $+0x8  // if (!=) goto 0x01118EA0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01118E9C:  4B09F9EB     BL $-0x1bdacc
		   // ──── Block 6 if (!=) ────────────────────
		   0x01118EA0:  0700A0E1     MOV r0, r7
		   0x01118EA4:  0810A0E1     MOV r1, r8
		   0x01118EA8:  0020A0E3     MOV r2, 0x0
		   0x01118EAC:  0030A0E3     MOV r3, 0x0
		   0x01118EB0:  10028DE8     STM sp, {r4, sb}
		   0x01118EB4:  08508DE5     STR r5, [sp, 0x8]
		   0x01118EB8:  F790FFEB     BL $-0x1bc1c
		   0x01118EBC:  10D08DE2     ADD sp, sp, 0x10
		   0x01118EC0:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x01118EC4:  7A301103     TSTSEQ r3, r1, 0x7a
		   0x01118EC8:  CCDAF502     RSCSEQ sp, r5, 0xcc000
		   0x01118ECC:  800CF602     RSCSEQ r0, r6, 0x8000
		   0x01118ED0:  780CF602     RSCSEQ r0, r6, 0x7800
		   0x01118ED4:  640CF602     RSCSEQ r0, r6, 0x6400
		   0x01118ED8:  60DAF502     RSCSEQ sp, r5, 0x60000
		   0x01118EDC:  000CF602     RSCSEQ r0, r6, 0x0
		*/
	}

	// RVA: 0x111A10C Offset: 0x111A10C VA: 0x111A10C Slot: 32
	public override void Hide() {
		/* Disassembly (ARM32, 55 instructions, 0xDC bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111A10C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0111A110:  0040A0E1     MOV r4, r0
		   0x0111A114:  330000EB     BL $+0xd4  // CALL → ItemMerging.Hide
		   0x0111A118:  A85094E5     LDR r5, [r4, 0xa8]
		   0x0111A11C:  0000A0E3     MOV r0, 0x0
		   0x0111A120:  A00084E5     STR r0, [r4, 0xa0]  // vtable: Object.Equals
		   0x0111A124:  000055E3     CMPS r0, r5, 0x0
		   0x0111A128:  1C0184E5     STR r0, [r4, 0x11c]
		   0x0111A12C:  200184E5     STR r0, [r4, 0x120]
		   0x0111A130:  F80084E5     STR r0, [r4, 0xf8]
		   0x0111A134:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A13C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111A138:  A404F9EB     BL $-0x1bed68
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111A13C:  0500A0E1     MOV r0, r5
		   0x0111A140:  0010A0E3     MOV r1, 0x0
		   0x0111A144:  0060A0E3     MOV r6, 0x0
		   0x0111A148:  108BFFEB     BL $-0x1d3b8
		   0x0111A14C:  F01094E5     LDR r1, [r4, 0xf0]
		   0x0111A150:  000051E3     CMPS r0, r1, 0x0
		   0x0111A154:  0300000A     BEQ $+0x14  // if (==) goto 0x0111A168
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111A158:  0400A0E1     MOV r0, r4
		   0x0111A15C:  0020A0E3     MOV r2, 0x0
		   0x0111A160:  80773BEB     BL $+0xedde08  // CALL → sub_1FF7F68
		   0x0111A164:  F06084E5     STR r6, [r4, 0xf0]
		   // ──── Block 4 if (==) ────────────────────
		   0x0111A168:  AC5094E5     LDR r5, [r4, 0xac]
		   0x0111A16C:  F86084E5     STR r6, [r4, 0xf8]
		   0x0111A170:  000055E3     CMPS r0, r5, 0x0
		   0x0111A174:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A17C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111A178:  9404F9EB     BL $-0x1beda8
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111A17C:  0500A0E1     MOV r0, r5
		   0x0111A180:  0010A0E3     MOV r1, 0x0
		   0x0111A184:  0060A0E3     MOV r6, 0x0
		   0x0111A188:  811E10EB     BL $+0x407a0c  // CALL → SparklesEffect.Hide
		   0x0111A18C:  A45094E5     LDR r5, [r4, 0xa4]
		   0x0111A190:  000055E3     CMPS r0, r5, 0x0
		   0x0111A194:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A19C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111A198:  8C04F9EB     BL $-0x1bedc8
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111A19C:  0500A0E1     MOV r0, r5
		   0x0111A1A0:  0010A0E3     MOV r1, 0x0
		   0x0111A1A4:  EE1610EB     BL $+0x405bc0  // CALL → EnergyEffect.Hide
		   0x0111A1A8:  D40094E5     LDR r0, [r4, 0xd4]
		   0x0111A1AC:  0010A0E3     MOV r1, 0x0
		   0x0111A1B0:  0020A0E3     MOV r2, 0x0
		   0x0111A1B4:  F86084E5     STR r6, [r4, 0xf8]
		   0x0111A1B8:  FC6084E5     STR r6, [r4, 0xfc]
		   0x0111A1BC:  986084E5     STR r6, [r4, 0x98]
		   0x0111A1C0:  9C6084E5     STR r6, [r4, 0x9c]
		   0x0111A1C4:  846084E5     STR r6, [r4, 0x84]
		   0x0111A1C8:  7F700FEB     BL $+0x3dc204  // CALL → ExtensionMethods.SafeKill
		   0x0111A1CC:  D80094E5     LDR r0, [r4, 0xd8]
		   0x0111A1D0:  0010A0E3     MOV r1, 0x0
		   0x0111A1D4:  0020A0E3     MOV r2, 0x0
		   0x0111A1D8:  7B700FEB     BL $+0x3dc1f4  // CALL → ExtensionMethods.SafeKill
		   0x0111A1DC:  0400A0E1     MOV r0, r4
		   0x0111A1E0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0111A1E4:  8FFAFFEA     B $-0x15bc
		*/
	}

	// RVA: 0x111A248 Offset: 0x111A248 VA: 0x111A248
	public void TryToHideClock() { }

	// RVA: 0x1118C28 Offset: 0x1118C28 VA: 0x1118C28
	private void ResetMainIconTransform() {
		/* Disassembly (ARM32, 34 instructions, 0x88 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01118C28:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01118C2C:  08D04DE2     SUB sp, sp, 0x8
		   0x01118C30:  0040A0E1     MOV r4, r0
		   0x01118C34:  38C3FFEB     BL $-0xf318
		   0x01118C38:  8C8084E2     ADD r8, r4, 0x8c
		   0x01118C3C:  0050A0E1     MOV r5, r0
		   0x01118C40:  000050E3     CMPS r0, r0, 0x0
		   0x01118C44:  C00198E8     LDM r8, {r6, r7, r8}
		   0x01118C48:  0000001A     BNE $+0x8  // if (!=) goto 0x01118C50
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01118C4C:  DF09F9EB     BL $-0x1bd87c
		   // ──── Block 2 if (!=) ────────────────────
		   0x01118C50:  0090A0E3     MOV sb, 0x0
		   0x01118C54:  0500A0E1     MOV r0, r5
		   0x01118C58:  0610A0E1     MOV r1, r6
		   0x01118C5C:  0720A0E1     MOV r2, r7
		   0x01118C60:  0830A0E1     MOV r3, r8
		   0x01118C64:  00908DE5     STR sb, [sp]
		   0x01118C68:  3E7D3BEB     BL $+0xedf500  // CALL → sub_1FF8168
		   0x01118C6C:  0400A0E1     MOV r0, r4
		   0x01118C70:  29C3FFEB     BL $-0xf354
		   0x01118C74:  8C6094E5     LDR r6, [r4, 0x8c]
		   0x01118C78:  0050A0E1     MOV r5, r0
		   0x01118C7C:  907094E5     LDR r7, [r4, 0x90]
		   0x01118C80:  000050E3     CMPS r0, r0, 0x0
		   0x01118C84:  944094E5     LDR r4, [r4, 0x94]
		   0x01118C88:  0000001A     BNE $+0x8  // if (!=) goto 0x01118C90
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01118C8C:  CF09F9EB     BL $-0x1bd8bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x01118C90:  0500A0E1     MOV r0, r5
		   0x01118C94:  0610A0E1     MOV r1, r6
		   0x01118C98:  0720A0E1     MOV r2, r7
		   0x01118C9C:  0430A0E1     MOV r3, r4
		   0x01118CA0:  00908DE5     STR sb, [sp]
		   0x01118CA4:  857D3BEB     BL $+0xedf61c  // CALL → sub_1FF82C0
		   0x01118CA8:  08D08DE2     ADD sp, sp, 0x8
		   0x01118CAC:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		*/
	}

	// RVA: 0x111A27C Offset: 0x111A27C VA: 0x111A27C Slot: 33
	public void UpdateAndPauseChargesTimers(float boostSeconds) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A27C:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x111A31C Offset: 0x111A31C VA: 0x111A31C Slot: 34
	public void UnpauseChargeTimers(bool silent) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A31C:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x111A438 Offset: 0x111A438 VA: 0x111A438 Slot: 35
	public bool CanBoost() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A438:  1811D0E5     LDRB r1, [r0, 0x118]
		   0x0111A43C:  000051E3     CMPS r0, r1, 0x0
		   0x0111A440:  0000A003     MOVEQ r0, 0x0
		   0x0111A444:  1EFF2F01     BXEQ lr
		*/
	}

	// RVA: 0x111A460 Offset: 0x111A460 VA: 0x111A460
	private void OnDisable() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A460:  0010A0E3     MOV r1, 0x0
		   0x0111A464:  F01080E5     STR r1, [r0, 0xf0]
		   0x0111A468:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x111A46C Offset: 0x111A46C VA: 0x111A46C
	public void .ctor() {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111A46C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111A470:  60509FE5     LDR r5, [pc, 0x60]
		   0x0111A474:  0040A0E1     MOV r4, r0
		   0x0111A478:  05508FE0     ADD r5, pc, r5
		   0x0111A47C:  0000D5E5     LDRB r0, [r5]
		   0x0111A480:  000050E3     CMPS r0, r0, 0x0
		   0x0111A484:  0400001A     BNE $+0x18  // if (!=) goto 0x0111A49C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111A488:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x0111A48C:  00009FE7     LDR r0, [pc, r0]
		   0x0111A490:  3203F9EB     BL $-0x1bf330
		   0x0111A494:  0100A0E3     MOV r0, 0x1
		   0x0111A498:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111A49C:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0111A4A0:  0010A0E3     MOV r1, 0x0
		   0x0111A4A4:  00009FE7     LDR r0, [pc, r0]
		   0x0111A4A8:  8C1084E5     STR r1, [r4, 0x8c]
		   0x0111A4AC:  901084E5     STR r1, [r4, 0x90]
		   0x0111A4B0:  000090E5     LDR r0, [r0]
		   0x0111A4B4:  941084E5     STR r1, [r4, 0x94]
		   0x0111A4B8:  C103F9EB     BL $-0x1bf0f4
		   0x0111A4BC:  0010A0E3     MOV r1, 0x0
		   0x0111A4C0:  0050A0E1     MOV r5, r0
		   0x0111A4C4:  24773BEB     BL $+0xeddc98  // CALL → sub_1FF815C
		   0x0111A4C8:  F45084E5     STR r5, [r4, 0xf4]
		   0x0111A4CC:  0400A0E1     MOV r0, r4
		   0x0111A4D0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111A4D4:  2BD4FFEA     B $-0xaf4c
		   0x0111A4D8:  E4191103     TSTSEQ r1, r1, 0x390000
		   0x0111A4DC:  E8CFF502     RSCSEQ ip, r5, 0x3a0
		   0x0111A4E0:  D0CFF502     RSCSEQ ip, r5, 0x340
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass101_0 // TypeDefIndex: 1320
{

	// Fields
	public ItemFiniteContainer <>4__this; // 0x8
	public Action onAnimationEnd; // 0xC

	// Methods

	// RVA: 0x111A104 Offset: 0x111A104 VA: 0x111A104
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A104:  0010A0E3     MOV r1, 0x0
		   0x0111A108:  B7EC7DEA     B $+0x1f7b2e4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x111A4E4 Offset: 0x111A4E4 VA: 0x111A4E4
	internal void <StartClockAnimation>b__0() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111A4E4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111A4E8:  085090E5     LDR r5, [r0, 0x8]
		   0x0111A4EC:  0040A0E1     MOV r4, r0
		   0x0111A4F0:  000055E3     CMPS r0, r5, 0x0
		   0x0111A4F4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111A4FC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111A4F8:  B403F9EB     BL $-0x1bf128
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111A4FC:  0500A0E1     MOV r0, r5
		   0x0111A500:  0010A0E3     MOV r1, 0x0
		   0x0111A504:  B8C5FFEB     BL $-0xe918
		   0x0111A508:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0111A50C:  000050E3     CMPS r0, r0, 0x0
		   0x0111A510:  0400000A     BEQ $+0x18  // if (==) goto 0x0111A528
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0111A514:  0C2090E5     LDR r2, [r0, 0xc]
		   0x0111A518:  141090E5     LDR r1, [r0, 0x14]
		   0x0111A51C:  200090E5     LDR r0, [r0, 0x20]
		   0x0111A520:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0111A524:  12FF2FE1     BX r2
		   // ──── Block 4 if (==) ────────────────────
		   0x0111A528:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass86_0 // TypeDefIndex: 1321
{

	// Fields
	public Action<bool> canRecharge; // 0x8
	public ItemFiniteContainer <>4__this; // 0xC

	// Methods

	// RVA: 0x11192A4 Offset: 0x11192A4 VA: 0x11192A4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011192A4:  0010A0E3     MOV r1, 0x0
		   0x011192A8:  4FF07DEA     B $+0x1f7c144  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11192AC Offset: 0x11192AC VA: 0x11192AC
	internal void <Recharge>g__Spend|0(bool result) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011192AC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011192B0:  04D04DE2     SUB sp, sp, 0x4
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass89_0 // TypeDefIndex: 1322
{

	// Fields
	public float weightsSum; // 0x8

	// Methods

	// RVA: 0x1119B54 Offset: 0x1119B54 VA: 0x1119B54
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01119B54:  0010A0E3     MOV r1, 0x0
		   0x01119B58:  23EE7DEA     B $+0x1f7b894  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x111A52C Offset: 0x111A52C VA: 0x111A52C
	internal void <SelectItemToSpawn>b__0(float w) { }
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <StartOpenTimer>d__97 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1323
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public ItemFiniteContainer <>4__this; // 0x10
	public float startTime; // 0x14

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x1119E34 Offset: 0x1119E34 VA: 0x1119E34
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01119E34:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01119E38:  0140A0E1     MOV r4, r1
		   0x01119E3C:  0010A0E3     MOV r1, 0x0
		   0x01119E40:  0050A0E1     MOV r5, r0
		   0x01119E44:  68ED7DEB     BL $+0x1f7b5a8  // CALL → Object..ctor
		   0x01119E48:  084085E5     STR r4, [r5, 0x8]
		   0x01119E4C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x111A540 Offset: 0x111A540 VA: 0x111A540 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A540:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x111A544 Offset: 0x111A544 VA: 0x111A544 Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111A544:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x111ABCC Offset: 0x111ABCC VA: 0x111ABCC Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111ABCC:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0111ABD0:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x111ABD4 Offset: 0x111ABD4 VA: 0x111ABD4 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111ABD4:  10402DE9     PUSH {r4, lr}
		   0x0111ABD8:  30009FE5     LDR r0, [pc, 0x30]
		   0x0111ABDC:  00009FE7     LDR r0, [pc, r0]
		   0x0111ABE0:  6201F9EB     BL $-0x1bfa70
		   0x0111ABE4:  F601F9EB     BL $-0x1bf820
		   0x0111ABE8:  0010A0E3     MOV r1, 0x0
		   0x0111ABEC:  0040A0E1     MOV r4, r0
		   0x0111ABF0:  BFBF7CEB     BL $+0x1f2ff04  // CALL → NotSupportedException..ctor
		   0x0111ABF4:  18009FE5     LDR r0, [pc, 0x18]
		   0x0111ABF8:  00009FE7     LDR r0, [pc, r0]
		   0x0111ABFC:  5B01F9EB     BL $-0x1bfa8c
		   0x0111AC00:  0010A0E1     MOV r1, r0
		   0x0111AC04:  0400A0E1     MOV r0, r4
		   0x0111AC08:  9C01F9EB     BL $-0x1bf988
		   0x0111AC0C:  3D01F9EB     BL $-0x1bfb04
		   0x0111AC10:  00BFF502     RSCSEQ fp, r5, 0x0
		   0x0111AC14:  B4EEF502     RSCSEQ lr, r5, 0xb40
		*/
	}

	[DebuggerHidden]
	// RVA: 0x111AC18 Offset: 0x111AC18 VA: 0x111AC18 Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111AC18:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0111AC1C:  1EFF2FE1     BX lr
		*/
	}
}
