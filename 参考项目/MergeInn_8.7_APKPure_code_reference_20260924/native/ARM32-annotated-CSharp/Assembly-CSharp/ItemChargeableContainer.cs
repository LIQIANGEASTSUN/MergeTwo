// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemChargeableContainer : ItemMerging, IContainerIsEmpty, IEnergyConsumption, IBoosterSpeedup, IOutOfEnergyTrigger // TypeDefIndex: 1280
{

	// Fields
	public const string CONTAINER_RUNTIME_FILL_DATA = "ProfileStorage_fillData";
	private const float RARE_ITEM_PERCENTAGE_LIMIT = 0.02;
	[SerializeField]
	protected EnergyEffect energyEffect; // 0x8C
	[SerializeField]
	protected SparklesEffect sparklesEffect; // 0x90
	[SerializeField]
	private Image energyImage; // 0x94
	[SerializeField]
	private Sprite energySpriteX1; // 0x98
	[SerializeField]
	private Sprite energySpriteX2; // 0x9C
	[SerializeField]
	private ChargeableContainerFillView fillView; // 0xA0
	[SerializeField]
	protected ChargeableContainerCooldown cooldown; // 0xA4
	private ItemObject[] destructionItems; // 0xA8
	protected ItemObject[] items; // 0xAC
	protected float[] weights; // 0xB0
	private bool destructionDrop; // 0xB4
	private ChargeableContainerDropSystem dropSystem; // 0xB8
	protected IContainerReadyEffect fillEffect; // 0xBC
	[CompilerGenerated]
	private Action<ItemData, Cell> onDestroy; // 0xC0
	[CompilerGenerated]
	private Action<ItemData, Cell> onSpawnItem; // 0xC4
	[CompilerGenerated]
	private ChargeableContainerFillData <fillData>k__BackingField; // 0xC8
	[CompilerGenerated]
	private ChargeData <baseChargeData>k__BackingField; // 0xCC
	[CompilerGenerated]
	private ChargeData <currentChargeData>k__BackingField; // 0xD0
	[CompilerGenerated]
	private Action <containerIsEmpty>k__BackingField; // 0xD4
	[CompilerGenerated]
	private Action<Action> <useContainerWithoutEnergy>k__BackingField; // 0xD8
	[CompilerGenerated]
	private Action <selectEmptyContainerWithoutEnergy>k__BackingField; // 0xDC
	[CompilerGenerated]
	private Action <buttonSpeedUpEnergyTrigger>k__BackingField; // 0xE0

	// Properties
	public int itemsReadyToSpawn { get; }
	public bool cooldownInProgress { get; }
	public int skipPrice { get; }
	public ChargeableContainerFillView fillViewUI { get; }
	public ChargeableContainerFillData fillData { get; set; }
	public ChargeData baseChargeData { get; set; }
	public ChargeData currentChargeData { get; set; }
	public bool hasCapacity { get; }
	public Action containerIsEmpty { get; set; }
	public Action<Action> useContainerWithoutEnergy { get; set; }
	public Action selectEmptyContainerWithoutEnergy { get; set; }
	public Action buttonSpeedUpEnergyTrigger { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x1105270 Offset: 0x1105270 VA: 0x1105270
	public void add_onDestroy(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105270:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01105274:  98409FE5     LDR r4, [pc, 0x98]
		   0x01105278:  0090A0E1     MOV sb, r0
		   0x0110527C:  0180A0E1     MOV r8, r1
		   0x01105280:  04408FE0     ADD r4, pc, r4
		   0x01105284:  0000D4E5     LDRB r0, [r4]
		   0x01105288:  000050E3     CMPS r0, r0, 0x0
		   0x0110528C:  0400001A     BNE $+0x18  // if (!=) goto 0x011052A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105290:  80009FE5     LDR r0, [pc, 0x80]
		   0x01105294:  00009FE7     LDR r0, [pc, r0]
		   0x01105298:  B057F9EB     BL $-0x1aa138
		   0x0110529C:  0100A0E3     MOV r0, 0x1
		   0x011052A0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011052A4:  C000B9E5     LDR r0, [sb, 0xc0]!
		   0x011052A8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x011052AC:  0AA09FE7     LDR r10, [pc, r10]
		   0x011052B0:  0810A0E1     MOV r1, r8
		   0x011052B4:  0020A0E3     MOV r2, 0x0
		   0x011052B8:  0060A0E1     MOV r6, r0
		   0x011052BC:  0070A0E3     MOV r7, 0x0
		   0x011052C0:  9C507EEB     BL $+0x1f94278  // CALL → Delegate.Combine
		   0x011052C4:  000050E3     CMPS r0, r0, 0x0
		   0x011052C8:  0A00000A     BEQ $+0x30  // if (==) goto 0x011052F8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011052CC:  00509AE5     LDR r5, [r10]
		   0x011052D0:  0040A0E1     MOV r4, r0
		   0x011052D4:  0510A0E1     MOV r1, r5
		   0x011052D8:  EE57F9EB     BL $-0x1aa040
		   0x011052DC:  0070A0E1     MOV r7, r0
		   0x011052E0:  000050E3     CMPS r0, r0, 0x0
		   0x011052E4:  0300001A     BNE $+0x14  // if (!=) goto 0x011052F8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011052E8:  0400A0E1     MOV r0, r4
		   0x011052EC:  0510A0E1     MOV r1, r5
		   0x011052F0:  2459F9EB     BL $-0x1a9b68
		   0x011052F4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x011052F8:  0900A0E1     MOV r0, sb
		   0x011052FC:  0710A0E1     MOV r1, r7
		   0x01105300:  0620A0E1     MOV r2, r6
		   0x01105304:  5B44FAEB     BL $-0x16ee8c
		   0x01105308:  060050E1     CMPS r0, r0, r6
		   0x0110530C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01105310:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01105314:  366B1203     TSTSEQ r6, r2, 0xd800
		   0x01105318:  0C3DF702     RSCSEQ r3, r7, 0x300
		   0x0110531C:  F43CF702     RSCSEQ r3, r7, 0xf400
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105320 Offset: 0x1105320 VA: 0x1105320
	public void remove_onDestroy(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105320:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01105324:  98409FE5     LDR r4, [pc, 0x98]
		   0x01105328:  0090A0E1     MOV sb, r0
		   0x0110532C:  0180A0E1     MOV r8, r1
		   0x01105330:  04408FE0     ADD r4, pc, r4
		   0x01105334:  0000D4E5     LDRB r0, [r4]
		   0x01105338:  000050E3     CMPS r0, r0, 0x0
		   0x0110533C:  0400001A     BNE $+0x18  // if (!=) goto 0x01105354
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105340:  80009FE5     LDR r0, [pc, 0x80]
		   0x01105344:  00009FE7     LDR r0, [pc, r0]
		   0x01105348:  8457F9EB     BL $-0x1aa1e8
		   0x0110534C:  0100A0E3     MOV r0, 0x1
		   0x01105350:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105354:  C000B9E5     LDR r0, [sb, 0xc0]!
		   0x01105358:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110535C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01105360:  0810A0E1     MOV r1, r8
		   0x01105364:  0020A0E3     MOV r2, 0x0
		   0x01105368:  0060A0E1     MOV r6, r0
		   0x0110536C:  0070A0E3     MOV r7, 0x0
		   0x01105370:  EE507EEB     BL $+0x1f943c0  // CALL → Delegate.Remove
		   0x01105374:  000050E3     CMPS r0, r0, 0x0
		   0x01105378:  0A00000A     BEQ $+0x30  // if (==) goto 0x011053A8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110537C:  00509AE5     LDR r5, [r10]
		   0x01105380:  0040A0E1     MOV r4, r0
		   0x01105384:  0510A0E1     MOV r1, r5
		   0x01105388:  C257F9EB     BL $-0x1aa0f0
		   0x0110538C:  0070A0E1     MOV r7, r0
		   0x01105390:  000050E3     CMPS r0, r0, 0x0
		   0x01105394:  0300001A     BNE $+0x14  // if (!=) goto 0x011053A8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01105398:  0400A0E1     MOV r0, r4
		   0x0110539C:  0510A0E1     MOV r1, r5
		   0x011053A0:  F858F9EB     BL $-0x1a9c18
		   0x011053A4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x011053A8:  0900A0E1     MOV r0, sb
		   0x011053AC:  0710A0E1     MOV r1, r7
		   0x011053B0:  0620A0E1     MOV r2, r6
		   0x011053B4:  2F44FAEB     BL $-0x16ef3c
		   0x011053B8:  060050E1     CMPS r0, r0, r6
		   0x011053BC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x011053C0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x011053C4:  876A1203     TSTSEQ r6, r2, 0x87000
		   0x011053C8:  5C3CF702     RSCSEQ r3, r7, 0x5c00
		   0x011053CC:  443CF702     RSCSEQ r3, r7, 0x4400
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11053D0 Offset: 0x11053D0 VA: 0x11053D0
	public void add_onSpawnItem(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011053D0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x011053D4:  98409FE5     LDR r4, [pc, 0x98]
		   0x011053D8:  0090A0E1     MOV sb, r0
		   0x011053DC:  0180A0E1     MOV r8, r1
		   0x011053E0:  04408FE0     ADD r4, pc, r4
		   0x011053E4:  0000D4E5     LDRB r0, [r4]
		   0x011053E8:  000050E3     CMPS r0, r0, 0x0
		   0x011053EC:  0400001A     BNE $+0x18  // if (!=) goto 0x01105404
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011053F0:  80009FE5     LDR r0, [pc, 0x80]
		   0x011053F4:  00009FE7     LDR r0, [pc, r0]
		   0x011053F8:  5857F9EB     BL $-0x1aa298
		   0x011053FC:  0100A0E3     MOV r0, 0x1
		   0x01105400:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105404:  C400B9E5     LDR r0, [sb, 0xc4]!
		   0x01105408:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110540C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01105410:  0810A0E1     MOV r1, r8
		   0x01105414:  0020A0E3     MOV r2, 0x0
		   0x01105418:  0060A0E1     MOV r6, r0
		   0x0110541C:  0070A0E3     MOV r7, 0x0
		   0x01105420:  44507EEB     BL $+0x1f94118  // CALL → Delegate.Combine
		   0x01105424:  000050E3     CMPS r0, r0, 0x0
		   0x01105428:  0A00000A     BEQ $+0x30  // if (==) goto 0x01105458
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110542C:  00509AE5     LDR r5, [r10]
		   0x01105430:  0040A0E1     MOV r4, r0
		   0x01105434:  0510A0E1     MOV r1, r5
		   0x01105438:  9657F9EB     BL $-0x1aa1a0
		   0x0110543C:  0070A0E1     MOV r7, r0
		   0x01105440:  000050E3     CMPS r0, r0, 0x0
		   0x01105444:  0300001A     BNE $+0x14  // if (!=) goto 0x01105458
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01105448:  0400A0E1     MOV r0, r4
		   0x0110544C:  0510A0E1     MOV r1, r5
		   0x01105450:  CC58F9EB     BL $-0x1a9cc8
		   0x01105454:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01105458:  0900A0E1     MOV r0, sb
		   0x0110545C:  0710A0E1     MOV r1, r7
		   0x01105460:  0620A0E1     MOV r2, r6
		   0x01105464:  0344FAEB     BL $-0x16efec
		   0x01105468:  060050E1     CMPS r0, r0, r6
		   0x0110546C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01105470:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01105474:  D8691203     TSTSEQ r6, r2, 0x360000
		   0x01105478:  AC3BF702     RSCSEQ r3, r7, 0x2b000
		   0x0110547C:  943BF702     RSCSEQ r3, r7, 0x25000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105480 Offset: 0x1105480 VA: 0x1105480
	public void remove_onSpawnItem(Action<ItemData, Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105480:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01105484:  98409FE5     LDR r4, [pc, 0x98]
		   0x01105488:  0090A0E1     MOV sb, r0
		   0x0110548C:  0180A0E1     MOV r8, r1
		   0x01105490:  04408FE0     ADD r4, pc, r4
		   0x01105494:  0000D4E5     LDRB r0, [r4]
		   0x01105498:  000050E3     CMPS r0, r0, 0x0
		   0x0110549C:  0400001A     BNE $+0x18  // if (!=) goto 0x011054B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011054A0:  80009FE5     LDR r0, [pc, 0x80]
		   0x011054A4:  00009FE7     LDR r0, [pc, r0]
		   0x011054A8:  2C57F9EB     BL $-0x1aa348
		   0x011054AC:  0100A0E3     MOV r0, 0x1
		   0x011054B0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011054B4:  C400B9E5     LDR r0, [sb, 0xc4]!
		   0x011054B8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x011054BC:  0AA09FE7     LDR r10, [pc, r10]
		   0x011054C0:  0810A0E1     MOV r1, r8
		   0x011054C4:  0020A0E3     MOV r2, 0x0
		   0x011054C8:  0060A0E1     MOV r6, r0
		   0x011054CC:  0070A0E3     MOV r7, 0x0
		   0x011054D0:  96507EEB     BL $+0x1f94260  // CALL → Delegate.Remove
		   0x011054D4:  000050E3     CMPS r0, r0, 0x0
		   0x011054D8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01105508
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011054DC:  00509AE5     LDR r5, [r10]
		   0x011054E0:  0040A0E1     MOV r4, r0
		   0x011054E4:  0510A0E1     MOV r1, r5
		   0x011054E8:  6A57F9EB     BL $-0x1aa250
		   0x011054EC:  0070A0E1     MOV r7, r0
		   0x011054F0:  000050E3     CMPS r0, r0, 0x0
		   0x011054F4:  0300001A     BNE $+0x14  // if (!=) goto 0x01105508
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011054F8:  0400A0E1     MOV r0, r4
		   0x011054FC:  0510A0E1     MOV r1, r5
		   0x01105500:  A058F9EB     BL $-0x1a9d78
		   0x01105504:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01105508:  0900A0E1     MOV r0, sb
		   0x0110550C:  0710A0E1     MOV r1, r7
		   0x01105510:  0620A0E1     MOV r2, r6
		   0x01105514:  D743FAEB     BL $-0x16f09c
		   0x01105518:  060050E1     CMPS r0, r0, r6
		   0x0110551C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01105520:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01105524:  29691203     TSTSEQ r6, r2, 0xa4000
		   0x01105528:  FC3AF702     RSCSEQ r3, r7, 0xfc000
		   0x0110552C:  E43AF702     RSCSEQ r3, r7, 0xe4000
		*/
	}

	// RVA: 0x1105530 Offset: 0x1105530 VA: 0x1105530 Slot: 36
	public int get_itemsReadyToSpawn() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105530:  10402DE9     PUSH {r4, lr}
		   0x01105534:  D04090E5     LDR r4, [r0, 0xd0]
		   0x01105538:  000054E3     CMPS r0, r4, 0x0
		   0x0110553C:  0000001A     BNE $+0x8  // if (!=) goto 0x01105544
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105540:  A257F9EB     BL $-0x1aa170
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105544:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01105548:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x110554C Offset: 0x110554C VA: 0x110554C
	public bool get_cooldownInProgress() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110554C:  10402DE9     PUSH {r4, lr}
		   0x01105550:  A44090E5     LDR r4, [r0, 0xa4]
		   0x01105554:  000054E3     CMPS r0, r4, 0x0
		   0x01105558:  0000001A     BNE $+0x8  // if (!=) goto 0x01105560
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110555C:  9B57F9EB     BL $-0x1aa18c
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105560:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x01105564:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1105568 Offset: 0x1105568 VA: 0x1105568
	public int get_skipPrice() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105568:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110556C:  A44090E5     LDR r4, [r0, 0xa4]
		   0x01105570:  000054E3     CMPS r0, r4, 0x0
		   0x01105574:  0000001A     BNE $+0x8  // if (!=) goto 0x0110557C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105578:  9457F9EB     BL $-0x1aa1a8
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110557C:  645094E5     LDR r5, [r4, 0x64]
		   0x01105580:  000055E3     CMPS r0, r5, 0x0
		   0x01105584:  0000001A     BNE $+0x8  // if (!=) goto 0x0110558C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01105588:  9057F9EB     BL $-0x1aa1b8
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110558C:  0C2095E5     LDR r2, [r5, 0xc]
		   0x01105590:  141095E5     LDR r1, [r5, 0x14]
		   0x01105594:  200095E5     LDR r0, [r5, 0x20]
		   0x01105598:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   0x0110559C:  5410A0E3     MOV r1, 0x54
		   0x011055A0:  000050E3     CMPS r0, r0, 0x0
		   0x011055A4:  50100013     MOVNE r1, 0x50
		   0x011055A8:  010094E7     LDR r0, [r4, r1]  // vtable: ItemChargeableContainer.RemoveTweensCorotines
		   0x011055AC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x11055B0 Offset: 0x11055B0 VA: 0x11055B0
	public ChargeableContainerFillView get_fillViewUI() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055B0:  A00090E5     LDR r0, [r0, 0xa0]
		   0x011055B4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11055B8 Offset: 0x11055B8 VA: 0x11055B8
	public ChargeableContainerFillData get_fillData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055B8:  C80090E5     LDR r0, [r0, 0xc8]
		   0x011055BC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11055C0 Offset: 0x11055C0 VA: 0x11055C0
	private void set_fillData(ChargeableContainerFillData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055C0:  C81080E5     STR r1, [r0, 0xc8]
		   0x011055C4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11055C8 Offset: 0x11055C8 VA: 0x11055C8
	public ChargeData get_baseChargeData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055C8:  CC0090E5     LDR r0, [r0, 0xcc]
		   0x011055CC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11055D0 Offset: 0x11055D0 VA: 0x11055D0
	private void set_baseChargeData(ChargeData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055D0:  CC1080E5     STR r1, [r0, 0xcc]
		   0x011055D4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11055D8 Offset: 0x11055D8 VA: 0x11055D8
	public ChargeData get_currentChargeData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055D8:  D00090E5     LDR r0, [r0, 0xd0]
		   0x011055DC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11055E0 Offset: 0x11055E0 VA: 0x11055E0
	private void set_currentChargeData(ChargeData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011055E0:  D01080E5     STR r1, [r0, 0xd0]
		   0x011055E4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11055E8 Offset: 0x11055E8 VA: 0x11055E8 Slot: 35
	public bool get_hasCapacity() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011055E8:  10402DE9     PUSH {r4, lr}
		   0x011055EC:  D04090E5     LDR r4, [r0, 0xd0]
		   0x011055F0:  000054E3     CMPS r0, r4, 0x0
		   0x011055F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011055FC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011055F8:  7457F9EB     BL $-0x1aa228
		   // ──── Block 2 if (!=) ────────────────────
		   0x011055FC:  0C1094E5     LDR r1, [r4, 0xc]
		   0x01105600:  0000A0E3     MOV r0, 0x0
		   0x01105604:  000051E3     CMPS r0, r1, 0x0
		   0x01105608:  010000C3     MOVGT r0, 0x1
		   0x0110560C:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105610 Offset: 0x1105610 VA: 0x1105610 Slot: 33
	public Action get_containerIsEmpty() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105610:  D40090E5     LDR r0, [r0, 0xd4]
		   0x01105614:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105618 Offset: 0x1105618 VA: 0x1105618 Slot: 34
	public void set_containerIsEmpty(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105618:  D41080E5     STR r1, [r0, 0xd4]
		   0x0110561C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105620 Offset: 0x1105620 VA: 0x1105620 Slot: 42
	public Action<Action> get_useContainerWithoutEnergy() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105620:  D80090E5     LDR r0, [r0, 0xd8]
		   0x01105624:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105628 Offset: 0x1105628 VA: 0x1105628 Slot: 43
	public void set_useContainerWithoutEnergy(Action<Action> value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105628:  D81080E5     STR r1, [r0, 0xd8]
		   0x0110562C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105630 Offset: 0x1105630 VA: 0x1105630 Slot: 44
	public Action get_selectEmptyContainerWithoutEnergy() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105630:  DC0090E5     LDR r0, [r0, 0xdc]
		   0x01105634:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105638 Offset: 0x1105638 VA: 0x1105638 Slot: 45
	public void set_selectEmptyContainerWithoutEnergy(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105638:  DC1080E5     STR r1, [r0, 0xdc]
		   0x0110563C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105640 Offset: 0x1105640 VA: 0x1105640 Slot: 46
	public Action get_buttonSpeedUpEnergyTrigger() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105640:  E00090E5     LDR r0, [r0, 0xe0]
		   0x01105644:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1105648 Offset: 0x1105648 VA: 0x1105648 Slot: 47
	public void set_buttonSpeedUpEnergyTrigger(Action value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105648:  E01080E5     STR r1, [r0, 0xe0]
		   0x0110564C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1105650 Offset: 0x1105650 VA: 0x1105650 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105650:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01105654:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x1105D90 Offset: 0x1105D90 VA: 0x1105D90 Slot: 19
	protected override void ReleaseTimers() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105D90:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01105D94:  A46090E5     LDR r6, [r0, 0xa4]
		   0x01105D98:  0040A0E1     MOV r4, r0
		   0x01105D9C:  345090E5     LDR r5, [r0, 0x34]
		   0x01105DA0:  000056E3     CMPS r0, r6, 0x0
		   0x01105DA4:  0000001A     BNE $+0x8  // if (!=) goto 0x01105DAC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105DA8:  8855F9EB     BL $-0x1aa9d8
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105DAC:  0600A0E1     MOV r0, r6
		   0x01105DB0:  0510A0E1     MOV r1, r5
		   0x01105DB4:  87F1FFEB     BL $-0x39dc
		   0x01105DB8:  8C4094E5     LDR r4, [r4, 0x8c]
		   0x01105DBC:  000054E3     CMPS r0, r4, 0x0
		   0x01105DC0:  0000001A     BNE $+0x8  // if (!=) goto 0x01105DC8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01105DC4:  8155F9EB     BL $-0x1aa9f4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01105DC8:  0400A0E1     MOV r0, r4
		   0x01105DCC:  0010A0E3     MOV r1, 0x0
		   0x01105DD0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01105DD4:  E26710EA     B $+0x419f90  // TAIL CALL → EnergyEffect.Hide
		*/
	}

	// RVA: 0x1105A2C Offset: 0x1105A2C VA: 0x1105A2C
	public void SetDataWithoutItemInit(ItemData data) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105A2C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01105A30:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x110632C Offset: 0x110632C VA: 0x110632C
	public bool TryAddFill(string itemCode) {
		/* Disassembly (ARM32, 201 instructions, 0x324 bytes):
		   // CFG: 56 blocks, 55 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110632C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01106330:  FC629FE5     LDR r6, [pc, 0x2fc]
		   0x01106334:  0040A0E1     MOV r4, r0
		   0x01106338:  0150A0E1     MOV r5, r1
		   0x0110633C:  06608FE0     ADD r6, pc, r6
		   0x01106340:  0000D6E5     LDRB r0, [r6]
		   0x01106344:  000050E3     CMPS r0, r0, 0x0
		   0x01106348:  0700001A     BNE $+0x24  // if (!=) goto 0x0110636C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110634C:  E4029FE5     LDR r0, [pc, 0x2e4]
		   0x01106350:  00009FE7     LDR r0, [pc, r0]
		   0x01106354:  8153F9EB     BL $-0x1ab1f4
		   0x01106358:  DC029FE5     LDR r0, [pc, 0x2dc]
		   0x0110635C:  00009FE7     LDR r0, [pc, r0]
		   0x01106360:  7E53F9EB     BL $-0x1ab200
		   0x01106364:  0100A0E3     MOV r0, 0x1
		   0x01106368:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110636C:  0400A0E1     MOV r0, r4
		   0x01106370:  0010A0E3     MOV r1, 0x0
		   0x01106374:  0060A0E3     MOV r6, 0x0
		   0x01106378:  560C00EB     BL $+0x3160  // CALL → Item.get_isItBubble
		   0x0110637C:  000050E3     CMPS r0, r0, 0x0
		   0x01106380:  3800D405     LDRBEQ r0, [r4, 0x38]
		   0x01106384:  00005003     CMPSEQ r0, r0, 0x0
		   0x01106388:  0100000A     BEQ $+0xc  // if (==) goto 0x01106394
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110638C:  0600A0E1     MOV r0, r6
		   0x01106390:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 4 if (==) ────────────────────
		   0x01106394:  0400A0E1     MOV r0, r4
		   0x01106398:  AC0000EB     BL $+0x2b8  // CALL → ItemChargeableContainer.IsFilled
		   0x0110639C:  000050E3     CMPS r0, r0, 0x0
		   0x011063A0:  F9FFFF1A     BNE $-0x14
		   // ──── Block 5 else (==) ────────────────────
		   0x011063A4:  94829FE5     LDR r8, [pc, 0x294]
		   0x011063A8:  0060A0E3     MOV r6, 0x0
		   0x011063AC:  08809FE7     LDR r8, [pc, r8]
		   0x011063B0:  C87094E5     LDR r7, [r4, 0xc8]
		   0x011063B4:  000057E3     CMPS r0, r7, 0x0
		   0x011063B8:  0000001A     BNE $+0x8  // if (!=) goto 0x011063C0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011063BC:  0354F9EB     BL $-0x1aafec
		   // ──── Block 7 if (!=) ────────────────────
		   0x011063C0:  087097E5     LDR r7, [r7, 0x8]
		   0x011063C4:  000057E3     CMPS r0, r7, 0x0
		   0x011063C8:  0000001A     BNE $+0x8  // if (!=) goto 0x011063D0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x011063CC:  FF53F9EB     BL $-0x1aaffc
		   // ──── Block 9 if (!=) ────────────────────
		   0x011063D0:  0C0097E5     LDR r0, [r7, 0xc]
		   0x011063D4:  000056E1     CMPS r0, r6, r0
		   0x011063D8:  2E0000AA     BGE $+0xc0  // if (>=) goto 0x01106498
		   // 
		   // ──── Block 10 else (<) ────────────────────
		   0x011063DC:  C87094E5     LDR r7, [r4, 0xc8]
		   0x011063E0:  000057E3     CMPS r0, r7, 0x0
		   0x011063E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011063EC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x011063E8:  F853F9EB     BL $-0x1ab018
		   // ──── Block 12 if (!=) ────────────────────
		   0x011063EC:  087097E5     LDR r7, [r7, 0x8]
		   0x011063F0:  000057E3     CMPS r0, r7, 0x0
		   0x011063F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011063FC
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x011063F8:  F453F9EB     BL $-0x1ab028
		   // ──── Block 14 if (!=) ────────────────────
		   0x011063FC:  002098E5     LDR r2, [r8]
		   0x01106400:  0700A0E1     MOV r0, r7
		   0x01106404:  0610A0E1     MOV r1, r6
		   0x01106408:  3CB16BEB     BL $+0x1aec4f8  // CALL → List<object>.get_Item
		   0x0110640C:  0070A0E1     MOV r7, r0
		   0x01106410:  000050E3     CMPS r0, r0, 0x0
		   0x01106414:  0000001A     BNE $+0x8  // if (!=) goto 0x0110641C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01106418:  EC53F9EB     BL $-0x1ab048
		   // ──── Block 16 if (!=) ────────────────────
		   0x0110641C:  087097E5     LDR r7, [r7, 0x8]
		   0x01106420:  000057E3     CMPS r0, r7, 0x0
		   0x01106424:  0000001A     BNE $+0x8  // if (!=) goto 0x0110642C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01106428:  E853F9EB     BL $-0x1ab058
		   // ──── Block 18 if (!=) ────────────────────
		   0x0110642C:  080097E5     LDR r0, [r7, 0x8]
		   0x01106430:  0510A0E1     MOV r1, r5
		   0x01106434:  0020A0E3     MOV r2, 0x0
		   0x01106438:  740176EB     BL $+0x1d805d8  // CALL → String.op_Equality
		   0x0110643C:  000050E3     CMPS r0, r0, 0x0
		   0x01106440:  1200000A     BEQ $+0x50  // if (==) goto 0x01106490
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x01106444:  C87094E5     LDR r7, [r4, 0xc8]
		   0x01106448:  000057E3     CMPS r0, r7, 0x0
		   0x0110644C:  0000001A     BNE $+0x8  // if (!=) goto 0x01106454
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x01106450:  DE53F9EB     BL $-0x1ab080
		   // ──── Block 21 if (!=) ────────────────────
		   0x01106454:  087097E5     LDR r7, [r7, 0x8]
		   0x01106458:  000057E3     CMPS r0, r7, 0x0
		   0x0110645C:  0000001A     BNE $+0x8  // if (!=) goto 0x01106464
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x01106460:  DA53F9EB     BL $-0x1ab090
		   // ──── Block 23 if (!=) ────────────────────
		   0x01106464:  002098E5     LDR r2, [r8]
		   0x01106468:  0700A0E1     MOV r0, r7
		   0x0110646C:  0610A0E1     MOV r1, r6
		   0x01106470:  22B16BEB     BL $+0x1aec490  // CALL → List<object>.get_Item
		   0x01106474:  0070A0E1     MOV r7, r0
		   0x01106478:  000050E3     CMPS r0, r0, 0x0
		   0x0110647C:  0000001A     BNE $+0x8  // if (!=) goto 0x01106484
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x01106480:  D253F9EB     BL $-0x1ab0b0
		   // ──── Block 25 if (!=) ────────────────────
		   0x01106484:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01106488:  010050E3     CMPS r0, r0, 0x1
		   0x0110648C:  030000AA     BGE $+0x14  // if (>=) goto 0x011064A0
		   // 
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x01106490:  016086E2     ADD r6, r6, 0x1
		   0x01106494:  C5FFFFEA     B $-0xe4
		   // ──── Block 27 if (>=) ────────────────────
		   0x01106498:  0060A0E3     MOV r6, 0x0
		   0x0110649C:  BAFFFFEA     B $-0x110
		   // ──── Block 28 if (>=) ────────────────────
		   0x011064A0:  847094E5     LDR r7, [r4, 0x84]
		   0x011064A4:  000057E3     CMPS r0, r7, 0x0
		   0x011064A8:  0000001A     BNE $+0x8  // if (!=) goto 0x011064B0
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x011064AC:  C753F9EB     BL $-0x1ab0dc
		   // ──── Block 30 if (!=) ────────────────────
		   0x011064B0:  4C0097E5     LDR r0, [r7, 0x4c]
		   0x011064B4:  0C0050E3     CMPS r0, r0, 0xc
		   0x011064B8:  0700001A     BNE $+0x24  // if (!=) goto 0x011064DC
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x011064BC:  847094E5     LDR r7, [r4, 0x84]
		   0x011064C0:  000057E3     CMPS r0, r7, 0x0
		   0x011064C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011064CC
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x011064C8:  C053F9EB     BL $-0x1ab0f8
		   // ──── Block 33 if (!=) ────────────────────
		   0x011064CC:  141097E5     LDR r1, [r7, 0x14]
		   0x011064D0:  0500A0E1     MOV r0, r5
		   0x011064D4:  0020A0E3     MOV r2, 0x0
		   0x011064D8:  FF5B08EB     BL $+0x217004  // CALL → EventEnergyGeneratorFilled.Send
		   // ──── Block 34 if (!=) ────────────────────
		   0x011064DC:  C85094E5     LDR r5, [r4, 0xc8]
		   0x011064E0:  000055E3     CMPS r0, r5, 0x0
		   0x011064E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011064EC
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x011064E8:  B853F9EB     BL $-0x1ab118
		   // ──── Block 36 if (!=) ────────────────────
		   0x011064EC:  085095E5     LDR r5, [r5, 0x8]
		   0x011064F0:  000055E3     CMPS r0, r5, 0x0
		   0x011064F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011064FC
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x011064F8:  B453F9EB     BL $-0x1ab128
		   // ──── Block 38 if (!=) ────────────────────
		   0x011064FC:  002098E5     LDR r2, [r8]
		   0x01106500:  0500A0E1     MOV r0, r5
		   0x01106504:  0610A0E1     MOV r1, r6
		   0x01106508:  FCB06BEB     BL $+0x1aec3f8  // CALL → List<object>.get_Item
		   0x0110650C:  0050A0E1     MOV r5, r0
		   0x01106510:  000050E3     CMPS r0, r0, 0x0
		   0x01106514:  0000001A     BNE $+0x8  // if (!=) goto 0x0110651C
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x01106518:  AC53F9EB     BL $-0x1ab148
		   // ──── Block 40 if (!=) ────────────────────
		   0x0110651C:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01106520:  010040E2     SUB r0, r0, 0x1
		   0x01106524:  0C0085E5     STR r0, [r5, 0xc]
		   0x01106528:  0400A0E1     MOV r0, r4
		   0x0110652C:  470000EB     BL $+0x124  // CALL → ItemChargeableContainer.IsFilled
		   0x01106530:  000050E3     CMPS r0, r0, 0x0
		   0x01106534:  1500000A     BEQ $+0x5c  // if (==) goto 0x01106590
		   // 
		   // ──── Block 41 else (!=) ────────────────────
		   0x01106538:  C85094E5     LDR r5, [r4, 0xc8]
		   0x0110653C:  000055E3     CMPS r0, r5, 0x0
		   0x01106540:  0000001A     BNE $+0x8  // if (!=) goto 0x01106548
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x01106544:  A153F9EB     BL $-0x1ab174
		   // ──── Block 43 if (!=) ────────────────────
		   0x01106548:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0110654C:  000050E3     CMPS r0, r0, 0x0
		   0x01106550:  2300000A     BEQ $+0x94  // if (==) goto 0x011065E4
		   // 
		   // ──── Block 44 else (!=) ────────────────────
		   0x01106554:  0400A0E1     MOV r0, r4
		   0x01106558:  760000EB     BL $+0x1e0  // CALL → ItemChargeableContainer.SetupCharges
		   0x0110655C:  0400A0E1     MOV r0, r4
		   0x01106560:  920000EB     BL $+0x250  // CALL → ItemChargeableContainer.UpdateSprite
		   0x01106564:  A46094E5     LDR r6, [r4, 0xa4]
		   0x01106568:  345094E5     LDR r5, [r4, 0x34]
		   0x0110656C:  000056E3     CMPS r0, r6, 0x0
		   0x01106570:  0000001A     BNE $+0x8  // if (!=) goto 0x01106578
		   // 
		   // ──── Block 45 else (==) ────────────────────
		   0x01106574:  9553F9EB     BL $-0x1ab1a4
		   // ──── Block 46 if (!=) ────────────────────
		   0x01106578:  0600A0E1     MOV r0, r6
		   0x0110657C:  0510A0E1     MOV r1, r5
		   0x01106580:  98EDFFEB     BL $-0x4998
		   0x01106584:  000050E3     CMPS r0, r0, 0x0
		   0x01106588:  0400A001     MOVEQ r0, r4
		   0x0110658C:  E9FEFF0B     BLEQ $-0x454
		   // ──── Block 47 if (==) ────────────────────
		   0x01106590:  341094E5     LDR r1, [r4, 0x34]
		   0x01106594:  C82094E5     LDR r2, [r4, 0xc8]
		   0x01106598:  370100EB     BL $+0x4e4  // CALL → ItemChargeableContainer.SetFillData
		   0x0110659C:  C86094E5     LDR r6, [r4, 0xc8]
		   0x011065A0:  A05094E5     LDR r5, [r4, 0xa0]
		   0x011065A4:  000056E3     CMPS r0, r6, 0x0
		   0x011065A8:  0000001A     BNE $+0x8  // if (!=) goto 0x011065B0
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x011065AC:  8753F9EB     BL $-0x1ab1dc
		   // ──── Block 49 if (!=) ────────────────────
		   0x011065B0:  0400A0E1     MOV r0, r4
		   0x011065B4:  086096E5     LDR r6, [r6, 0x8]
		   0x011065B8:  240000EB     BL $+0x98  // CALL → ItemChargeableContainer.IsFilled
		   0x011065BC:  0040A0E1     MOV r4, r0
		   0x011065C0:  000055E3     CMPS r0, r5, 0x0
		   0x011065C4:  0000001A     BNE $+0x8  // if (!=) goto 0x011065CC
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x011065C8:  8053F9EB     BL $-0x1ab1f8
		   // ──── Block 51 if (!=) ────────────────────
		   0x011065CC:  0500A0E1     MOV r0, r5
		   0x011065D0:  0610A0E1     MOV r1, r6
		   0x011065D4:  0420A0E1     MOV r2, r4
		   0x011065D8:  6EF9FFEB     BL $-0x1a40
		   0x011065DC:  0160A0E3     MOV r6, 0x1
		   0x011065E0:  69FFFFEA     B $-0x254
		   // ──── Block 52 if (==) ────────────────────
		   0x011065E4:  58509FE5     LDR r5, [pc, 0x58]
		   0x011065E8:  05508FE0     ADD r5, pc, r5
		   0x011065EC:  0000D5E5     LDRB r0, [r5]
		   0x011065F0:  000050E3     CMPS r0, r0, 0x0
		   0x011065F4:  0400001A     BNE $+0x18  // if (!=) goto 0x0110660C
		   // 
		   // ──── Block 53 else (==) ────────────────────
		   0x011065F8:  48009FE5     LDR r0, [pc, 0x48]
		   0x011065FC:  00009FE7     LDR r0, [pc, r0]
		   0x01106600:  D652F9EB     BL $-0x1ab4a0
		   0x01106604:  0100A0E3     MOV r0, 0x1
		   0x01106608:  0000C5E5     STRB r0, [r5]
		   // ──── Block 54 if (!=) ────────────────────
		   0x0110660C:  38009FE5     LDR r0, [pc, 0x38]
		   0x01106610:  00009FE7     LDR r0, [pc, r0]
		   0x01106614:  000090E5     LDR r0, [r0]
		   0x01106618:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110661C:  D020C0E1     LDRD r2, r3, [r0]
		   0x01106620:  0400A0E1     MOV r0, r4
		   0x01106624:  0210A0E1     MOV r1, r2
		   0x01106628:  0320A0E1     MOV r2, r3
		   0x0110662C:  8F0000EB     BL $+0x244  // CALL → ItemChargeableContainer.DestroyItem
		   0x01106630:  E9FFFFEA     B $-0x54
		   0x01106634:  805A1203     TSTSEQ r5, r2, 0x80000
		   0x01106638:  9434F702     RSCSEQ r3, r7, 0x94000000
		   0x0110663C:  E034F702     RSCSEQ r3, r7, 0xe0000000
		   0x01106640:  9034F702     RSCSEQ r3, r7, 0x90000000
		   0x01106644:  4B521203     TSTSEQ r5, r2, 0xb0000004
		   0x01106648:  E407F702     RSCSEQ r0, r7, 0x3900000
		   0x0110664C:  D007F702     RSCSEQ r0, r7, 0x3400000
		*/
	}

	// RVA: 0x1106738 Offset: 0x1106738 VA: 0x1106738
	public void SetupCharges() {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106738:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110673C:  60509FE5     LDR r5, [pc, 0x60]
		   0x01106740:  0040A0E1     MOV r4, r0
		   0x01106744:  05508FE0     ADD r5, pc, r5
		   0x01106748:  0000D5E5     LDRB r0, [r5]
		   0x0110674C:  000050E3     CMPS r0, r0, 0x0
		   0x01106750:  0400001A     BNE $+0x18  // if (!=) goto 0x01106768
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01106754:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x01106758:  00009FE7     LDR r0, [pc, r0]
		   0x0110675C:  7F52F9EB     BL $-0x1ab5fc
		   0x01106760:  0100A0E3     MOV r0, 0x1
		   0x01106764:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01106768:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0110676C:  00009FE7     LDR r0, [pc, r0]
		   0x01106770:  CC5094E5     LDR r5, [r4, 0xcc]
		   0x01106774:  000090E5     LDR r0, [r0]
		   0x01106778:  1153F9EB     BL $-0x1ab3b4
		   0x0110677C:  0510A0E1     MOV r1, r5
		   0x01106780:  0020A0E3     MOV r2, 0x0
		   0x01106784:  0060A0E1     MOV r6, r0
		   0x01106788:  A50800EB     BL $+0x229c  // CALL → ChargeData..ctor
		   0x0110678C:  340094E5     LDR r0, [r4, 0x34]
		   0x01106790:  0610A0E1     MOV r1, r6
		   0x01106794:  D06084E5     STR r6, [r4, 0xd0]
		   0x01106798:  0020A0E3     MOV r2, 0x0
		   0x0110679C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x011067A0:  FB0900EA     B $+0x27f4  // TAIL CALL → ContainerDataStorage.SetContainerCharges
		   0x011067A4:  79561203     TSTSEQ r5, r2, 0x7900000
		   0x011067A8:  3031F702     RSCSEQ r3, r7, 0xc
		   0x011067AC:  1C31F702     RSCSEQ r3, r7, 0x7
		*/
	}

	// RVA: 0x1106BFC Offset: 0x1106BFC VA: 0x1106BFC Slot: 20
	public override void RemoveTweensCorotines() {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106BFC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01106C00:  8C5090E5     LDR r5, [r0, 0x8c]
		   0x01106C04:  0040A0E1     MOV r4, r0
		   0x01106C08:  000055E3     CMPS r0, r5, 0x0
		   0x01106C0C:  0000001A     BNE $+0x8  // if (!=) goto 0x01106C14
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01106C10:  EE51F9EB     BL $-0x1ab840
		   // ──── Block 2 if (!=) ────────────────────
		   0x01106C14:  0500A0E1     MOV r0, r5
		   0x01106C18:  0010A0E3     MOV r1, 0x0
		   0x01106C1C:  506410EB     BL $+0x419148  // CALL → EnergyEffect.Hide
		   0x01106C20:  A44094E5     LDR r4, [r4, 0xa4]
		   0x01106C24:  000054E3     CMPS r0, r4, 0x0
		   0x01106C28:  0000001A     BNE $+0x8  // if (!=) goto 0x01106C30
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01106C2C:  E751F9EB     BL $-0x1ab85c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01106C30:  0400A0E1     MOV r0, r4
		   0x01106C34:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01106C38:  C6EDFFEA     B $-0x48e0
		*/
	}

	// RVA: 0x1106C3C Offset: 0x1106C3C VA: 0x1106C3C Slot: 12
	public override void SetLockedState(bool isLocked) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01106C3C:  10402DE9     PUSH {r4, lr}
		   0x01106C40:  0020A0E3     MOV r2, 0x0
		   0x01106C44:  0040A0E1     MOV r4, r0
		   0x01106C48:  1E1100EB     BL $+0x4480  // CALL → Item.SetLockedState
		   0x01106C4C:  0400A0E1     MOV r0, r4
		   0x01106C50:  1040BDE8     POP {r4, lr}
		   0x01106C54:  37FDFFEA     B $-0xb1c
		*/
	}

	// RVA: 0x1106C58 Offset: 0x1106C58 VA: 0x1106C58 Slot: 11
	public override void SetActiveBubble(bool isActive, int timer, Action createCoin) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01106C58:  10402DE9     PUSH {r4, lr}
		   0x01106C5C:  08D04DE2     SUB sp, sp, 0x8
		   0x01106C60:  0040A0E1     MOV r4, r0
		   0x01106C64:  0000A0E3     MOV r0, 0x0
		   0x01106C68:  00008DE5     STR r0, [sp]
		   0x01106C6C:  0400A0E1     MOV r0, r4
		   0x01106C70:  730F00EB     BL $+0x3dd4  // CALL → Item.SetActiveBubble
		   0x01106C74:  0400A0E1     MOV r0, r4
		   0x01106C78:  08D08DE2     ADD sp, sp, 0x8
		   0x01106C7C:  1040BDE8     POP {r4, lr}
		   0x01106C80:  2CFDFFEA     B $-0xb48
		*/
	}

	// RVA: 0x1106C84 Offset: 0x1106C84 VA: 0x1106C84 Slot: 32
	public override void Hide() {
		/* Disassembly (ARM32, 106 instructions, 0x1A8 bytes):
		   // CFG: 22 blocks, 22 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106C84:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01106C88:  90519FE5     LDR r5, [pc, 0x190]
		   0x01106C8C:  0040A0E1     MOV r4, r0
		   0x01106C90:  05508FE0     ADD r5, pc, r5
		   0x01106C94:  0000D5E5     LDRB r0, [r5]
		   0x01106C98:  000050E3     CMPS r0, r0, 0x0
		   0x01106C9C:  0400001A     BNE $+0x18  // if (!=) goto 0x01106CB4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01106CA0:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x01106CA4:  00009FE7     LDR r0, [pc, r0]
		   0x01106CA8:  2C51F9EB     BL $-0x1abb48
		   0x01106CAC:  0100A0E3     MOV r0, 0x1
		   0x01106CB0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01106CB4:  000094E5     LDR r0, [r4]
		   0x01106CB8:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x01106CBC:  0400A0E1     MOV r0, r4
		   0x01106CC0:  0310A0E1     MOV r1, r3
		   0x01106CC4:  32FF2FE1     BLX r2
		   0x01106CC8:  000050E3     CMPS r0, r0, 0x0
		   0x01106CCC:  0700000A     BEQ $+0x24  // if (==) goto 0x01106CF0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01106CD0:  0400A0E1     MOV r0, r4
		   0x01106CD4:  0010A0E3     MOV r1, 0x0
		   0x01106CD8:  FE0900EB     BL $+0x2800  // CALL → Item.get_isItBubble
		   0x01106CDC:  000050E3     CMPS r0, r0, 0x0
		   0x01106CE0:  0200000A     BEQ $+0x10  // if (==) goto 0x01106CF0
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x01106CE4:  0400A0E1     MOV r0, r4
		   0x01106CE8:  0010A0E3     MOV r1, 0x0
		   0x01106CEC:  3C1000EB     BL $+0x40f8  // CALL → Item.HideBubble
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01106CF0:  A45094E5     LDR r5, [r4, 0xa4]
		   0x01106CF4:  000055E3     CMPS r0, r5, 0x0
		   0x01106CF8:  0000001A     BNE $+0x8  // if (!=) goto 0x01106D00
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01106CFC:  B351F9EB     BL $-0x1ab92c
		   // ──── Block 7 if (!=) ────────────────────
		   0x01106D00:  0500A0E1     MOV r0, r5
		   0x01106D04:  93EDFFEB     BL $-0x49ac
		   0x01106D08:  A05094E5     LDR r5, [r4, 0xa0]
		   0x01106D0C:  0000A0E3     MOV r0, 0x0
		   0x01106D10:  B80084E5     STR r0, [r4, 0xb8]  // vtable: Object.Equals
		   0x01106D14:  000055E3     CMPS r0, r5, 0x0
		   0x01106D18:  0000001A     BNE $+0x8  // if (!=) goto 0x01106D20
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01106D1C:  AB51F9EB     BL $-0x1ab94c
		   // ──── Block 9 if (!=) ────────────────────
		   0x01106D20:  0500A0E1     MOV r0, r5
		   0x01106D24:  0010A0E3     MOV r1, 0x0
		   0x01106D28:  51F8FFEB     BL $-0x1eb4
		   0x01106D2C:  BC5094E5     LDR r5, [r4, 0xbc]
		   0x01106D30:  000055E3     CMPS r0, r5, 0x0
		   0x01106D34:  1900000A     BEQ $+0x6c  // if (==) goto 0x01106DA0
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x01106D38:  00C095E5     LDR ip, [r5]
		   0x01106D3C:  E4109FE5     LDR r1, [pc, 0xe4]
		   0x01106D40:  01109FE7     LDR r1, [pc, r1]
		   0x01106D44:  B62BDCE1     LDRH r2, [ip, 0xb6]
		   0x01106D48:  001091E5     LDR r1, [r1]
		   0x01106D4C:  000052E3     CMPS r0, r2, 0x0
		   0x01106D50:  0700000A     BEQ $+0x24  // if (==) goto 0x01106D74
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x01106D54:  58309CE5     LDR r3, [ip, 0x58]
		   0x01106D58:  043083E2     ADD r3, r3, 0x4
		   0x01106D5C:  040013E5     LDR r0, [r3, -0x4]
		   0x01106D60:  010050E1     CMPS r0, r0, r1
		   0x01106D64:  0600000A     BEQ $+0x20  // if (==) goto 0x01106D84
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x01106D68:  012052E2     SUBS r2, r2, 0x1
		   0x01106D6C:  083083E2     ADD r3, r3, 0x8
		   0x01106D70:  F9FFFF1A     BNE $-0x14
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x01106D74:  0500A0E1     MOV r0, r5
		   0x01106D78:  0220A0E3     MOV r2, 0x2
		   0x01106D7C:  4140FAEB     BL $-0x16fef4
		   0x01106D80:  020000EA     B $+0x10  // goto 0x01106D90
		   // ──── Block 14 if (==) ────────────────────
		   0x01106D84:  000093E5     LDR r0, [r3]
		   0x01106D88:  80018CE0     ADD r0, ip, r0, lsl 3
		   0x01106D8C:  D00080E2     ADD r0, r0, 0xd0
		   // ──── Block 15 ──────────────────────────────
		   0x01106D90:  D020C0E1     LDRD r2, r3, [r0]
		   0x01106D94:  0500A0E1     MOV r0, r5
		   0x01106D98:  0310A0E1     MOV r1, r3
		   0x01106D9C:  32FF2FE1     BLX r2
		   // ──── Block 16 if (==) ────────────────────
		   0x01106DA0:  8C5094E5     LDR r5, [r4, 0x8c]
		   0x01106DA4:  000055E3     CMPS r0, r5, 0x0
		   0x01106DA8:  0000001A     BNE $+0x8  // if (!=) goto 0x01106DB0
		   // 
		   // ──── Block 17 else (r2 == r2, 0x1) ────────────────────
		   0x01106DAC:  8751F9EB     BL $-0x1ab9dc
		   // ──── Block 18 if (r2 != r2, 0x1) ────────────────────
		   0x01106DB0:  0500A0E1     MOV r0, r5
		   0x01106DB4:  0010A0E3     MOV r1, 0x0
		   0x01106DB8:  0060A0E3     MOV r6, 0x0
		   0x01106DBC:  E86310EB     BL $+0x418fa8  // CALL → EnergyEffect.Hide
		   0x01106DC0:  0400A0E1     MOV r0, r4
		   0x01106DC4:  0010A0E3     MOV r1, 0x0
		   0x01106DC8:  0020A0E3     MOV r2, 0x0
		   0x01106DCC:  846084E5     STR r6, [r4, 0x84]
		   0x01106DD0:  C06084E5     STR r6, [r4, 0xc0]
		   0x01106DD4:  C46084E5     STR r6, [r4, 0xc4]
		   0x01106DD8:  861800EB     BL $+0x6220  // CALL → Item.SetEnabled
		   0x01106DDC:  000094E5     LDR r0, [r4]
		   0x01106DE0:  0010A0E3     MOV r1, 0x0
		   0x01106DE4:  D86EC0E1     LDRD r6, r7, [r0, 0xe8]
		   0x01106DE8:  0400A0E1     MOV r0, r4
		   0x01106DEC:  0720A0E1     MOV r2, r7
		   0x01106DF0:  36FF2FE1     BLX r6
		   0x01106DF4:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x01106DF8:  000055E3     CMPS r0, r5, 0x0
		   0x01106DFC:  0000001A     BNE $+0x8  // if (!=) goto 0x01106E04
		   // 
		   // ──── Block 19 else (r2 == r2, 0x1) ────────────────────
		   0x01106E00:  7251F9EB     BL $-0x1aba30
		   // ──── Block 20 if (r2 != r2, 0x1) ────────────────────
		   0x01106E04:  0500A0E1     MOV r0, r5
		   0x01106E08:  0010A0E3     MOV r1, 0x0
		   0x01106E0C:  0020A0E3     MOV r2, 0x0
		   0x01106E10:  69C43BEB     BL $+0xef11ac  // CALL → sub_1FF7FBC
		   0x01106E14:  0000E0E3     MVN r0, r0, 0x0
		   0x01106E18:  340084E5     STR r0, [r4, 0x34]
		   0x01106E1C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01106E20:  2E511203     TSTSEQ r5, r2, 0x8000000b
		   0x01106E24:  F82BF702     RSCSEQ r2, r7, 0x3e000
		   0x01106E28:  5C2BF702     RSCSEQ r2, r7, 0x17000
		*/
	}

	// RVA: 0x1106E2C Offset: 0x1106E2C VA: 0x1106E2C Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 331 instructions, 0x52C bytes):
		   // CFG: 58 blocks, 63 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106E2C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01106E30:  3CD04DE2     SUB sp, sp, 0x3c
		   0x01106E34:  C8549FE5     LDR r5, [pc, 0x4c8]
		   0x01106E38:  0040A0E1     MOV r4, r0
		   0x01106E3C:  03A0A0E1     MOV r10, r3
		   0x01106E40:  0260A0E1     MOV r6, r2
		   0x01106E44:  05508FE0     ADD r5, pc, r5
		   0x01106E48:  0170A0E1     MOV r7, r1
		   0x01106E4C:  0000D5E5     LDRB r0, [r5]
		   0x01106E50:  000050E3     CMPS r0, r0, 0x0
		   0x01106E54:  1900001A     BNE $+0x6c  // if (!=) goto 0x01106EC0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01106E58:  A8049FE5     LDR r0, [pc, 0x4a8]
		   0x01106E5C:  00009FE7     LDR r0, [pc, r0]
		   0x01106E60:  BE50F9EB     BL $-0x1abd00
		   0x01106E64:  A0049FE5     LDR r0, [pc, 0x4a0]
		   0x01106E68:  00009FE7     LDR r0, [pc, r0]
		   0x01106E6C:  BB50F9EB     BL $-0x1abd0c
		   0x01106E70:  98049FE5     LDR r0, [pc, 0x498]
		   0x01106E74:  00009FE7     LDR r0, [pc, r0]
		   0x01106E78:  B850F9EB     BL $-0x1abd18
		   0x01106E7C:  90049FE5     LDR r0, [pc, 0x490]
		   0x01106E80:  00009FE7     LDR r0, [pc, r0]
		   0x01106E84:  B550F9EB     BL $-0x1abd24
		   0x01106E88:  88049FE5     LDR r0, [pc, 0x488]
		   0x01106E8C:  00009FE7     LDR r0, [pc, r0]
		   0x01106E90:  B250F9EB     BL $-0x1abd30
		   0x01106E94:  80049FE5     LDR r0, [pc, 0x480]
		   0x01106E98:  00009FE7     LDR r0, [pc, r0]
		   0x01106E9C:  AF50F9EB     BL $-0x1abd3c
		   0x01106EA0:  78049FE5     LDR r0, [pc, 0x478]
		   0x01106EA4:  00009FE7     LDR r0, [pc, r0]
		   0x01106EA8:  AC50F9EB     BL $-0x1abd48
		   0x01106EAC:  70049FE5     LDR r0, [pc, 0x470]
		   0x01106EB0:  00009FE7     LDR r0, [pc, r0]
		   0x01106EB4:  A950F9EB     BL $-0x1abd54
		   0x01106EB8:  0100A0E3     MOV r0, 0x1
		   0x01106EBC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01106EC0:  0000A0E3     MOV r0, 0x0
		   0x01106EC4:  3150D4E5     LDRB r5, [r4, 0x31]  // vtable: Object.Equals
		   0x01106EC8:  34008DE5     STR r0, [sp, 0x34]
		   0x01106ECC:  0710A0E1     MOV r1, r7
		   0x01106ED0:  30008DE5     STR r0, [sp, 0x30]
		   0x01106ED4:  0620A0E1     MOV r2, r6
		   0x01106ED8:  38008DE5     STR r0, [sp, 0x38]
		   0x01106EDC:  0A30A0E1     MOV r3, r10
		   0x01106EE0:  00008DE5     STR r0, [sp]
		   0x01106EE4:  0400A0E1     MOV r0, r4
		   0x01106EE8:  CD1000EB     BL $+0x433c  // CALL → Item.Select
		   0x01106EEC:  4100D4E5     LDRB r0, [r4, 0x41]
		   0x01106EF0:  000050E3     CMPS r0, r0, 0x0
		   0x01106EF4:  1200000A     BEQ $+0x50  // if (==) goto 0x01106F44
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01106EF8:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x01106EFC:  000050E3     CMPS r0, r0, 0x0
		   0x01106F00:  0F00001A     BNE $+0x44  // if (!=) goto 0x01106F44
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01106F04:  0400A0E1     MOV r0, r4
		   0x01106F08:  0010A0E3     MOV r1, 0x0
		   0x01106F0C:  710900EB     BL $+0x25cc  // CALL → Item.get_isItBubble
		   0x01106F10:  000050E3     CMPS r0, r0, 0x0
		   0x01106F14:  0A00001A     BNE $+0x30  // if (!=) goto 0x01106F44
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01106F18:  0400A0E1     MOV r0, r4
		   0x01106F1C:  CBFDFFEB     BL $-0x8cc
		   0x01106F20:  000050E3     CMPS r0, r0, 0x0
		   0x01106F24:  0600000A     BEQ $+0x20  // if (==) goto 0x01106F44
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01106F28:  A48094E5     LDR r8, [r4, 0xa4]
		   0x01106F2C:  000058E3     CMPS r0, r8, 0x0
		   0x01106F30:  0000001A     BNE $+0x8  // if (!=) goto 0x01106F38
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01106F34:  2551F9EB     BL $-0x1abb64
		   // ──── Block 8 if (!=) ────────────────────
		   0x01106F38:  1C00D8E5     LDRB r0, [r8, 0x1c]
		   0x01106F3C:  000050E3     CMPS r0, r0, 0x0
		   0x01106F40:  0100000A     BEQ $+0xc  // if (==) goto 0x01106F4C
		   // 
		   // ──── Block 9 (from 5 paths) ──────────────────
		   0x01106F44:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01106F48:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 10 if (==) ────────────────────
		   0x01106F4C:  D08094E5     LDR r8, [r4, 0xd0]
		   0x01106F50:  000058E3     CMPS r0, r8, 0x0
		   0x01106F54:  0000001A     BNE $+0x8  // if (!=) goto 0x01106F5C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01106F58:  1C51F9EB     BL $-0x1abb88
		   // ──── Block 12 if (!=) ────────────────────
		   0x01106F5C:  000055E3     CMPS r0, r5, 0x0
		   0x01106F60:  0C1098E5     LDR r1, [r8, 0xc]
		   0x01106F64:  01500013     MOVNE r5, 0x1
		   0x01106F68:  070005E0     AND r0, r5, r7
		   0x01106F6C:  000051E3     CMPS r0, r1, 0x0
		   0x01106F70:  3B0000DA     BLE $+0xf4  // if (<=) goto 0x01107064
		   // 
		   // ──── Block 13 else (>) ────────────────────
		   0x01106F74:  000050E3     CMPS r0, r0, 0x0
		   0x01106F78:  F1FFFF0A     BEQ $-0x34
		   // ──── Block 14 else (!=) ────────────────────
		   0x01106F7C:  0000A0E3     MOV r0, 0x0
		   0x01106F80:  1C0700EB     BL $+0x1c78  // CALL → ContainerDataStorage.get_EnergyConsumptionMode
		   0x01106F84:  0080A0E1     MOV r8, r0
		   0x01106F88:  0400A0E1     MOV r0, r4
		   0x01106F8C:  0810A0E1     MOV r1, r8
		   0x01106F90:  F00000EB     BL $+0x3c8  // CALL → ItemChargeableContainer.GetActivationCostEnergy
		   0x01106F94:  94739FE5     LDR r7, [pc, 0x394]
		   0x01106F98:  0090A0E1     MOV sb, r0
		   0x01106F9C:  07709FE7     LDR r7, [pc, r7]
		   0x01106FA0:  000097E5     LDR r0, [r7]
		   0x01106FA4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01106FA8:  005090E5     LDR r5, [r0]
		   0x01106FAC:  000055E3     CMPS r0, r5, 0x0
		   0x01106FB0:  0000001A     BNE $+0x8  // if (!=) goto 0x01106FB8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01106FB4:  0551F9EB     BL $-0x1abbe4
		   // ──── Block 16 if (!=) ────────────────────
		   0x01106FB8:  205095E5     LDR r5, [r5, 0x20]
		   0x01106FBC:  000055E3     CMPS r0, r5, 0x0
		   0x01106FC0:  0000001A     BNE $+0x8  // if (!=) goto 0x01106FC8
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01106FC4:  0151F9EB     BL $-0x1abbf4
		   // ──── Block 18 if (!=) ────────────────────
		   0x01106FC8:  2000D5E5     LDRB r0, [r5, 0x20]
		   0x01106FCC:  000050E3     CMPS r0, r0, 0x0
		   0x01106FD0:  4000001A     BNE $+0x108  // if (!=) goto 0x011070D8
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x01106FD4:  0000A0E3     MOV r0, 0x0
		   0x01106FD8:  C0CB01EB     BL $+0x72f08  // CALL → ProfileStorage.get_numEnergy
		   0x01106FDC:  090050E1     CMPS r0, r0, sb
		   0x01106FE0:  3C0000AA     BGE $+0xf8  // if (>=) goto 0x011070D8
		   // 
		   // ──── Block 20 else (<) ────────────────────
		   0x01106FE4:  0100A0E3     MOV r0, 0x1
		   0x01106FE8:  0010A0E3     MOV r1, 0x0
		   0x01106FEC:  F0DEFDEB     BL $-0x88438
		   0x01106FF0:  000097E5     LDR r0, [r7]
		   0x01106FF4:  D86094E5     LDR r6, [r4, 0xd8]
		   0x01106FF8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01106FFC:  000056E3     CMPS r0, r6, 0x0
		   0x01107000:  004090E5     LDR r4, [r0]
		   0x01107004:  B100000A     BEQ $+0x2cc  // if (==) goto 0x011072D0
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x01107008:  000054E3     CMPS r0, r4, 0x0
		   0x0110700C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107014
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x01107010:  EE50F9EB     BL $-0x1abc40
		   // ──── Block 23 if (!=) ────────────────────
		   0x01107014:  18039FE5     LDR r0, [pc, 0x318]
		   0x01107018:  00009FE7     LDR r0, [pc, r0]
		   0x0110701C:  1C4094E5     LDR r4, [r4, 0x1c]
		   0x01107020:  000090E5     LDR r0, [r0]
		   0x01107024:  E650F9EB     BL $-0x1abc60
		   0x01107028:  0050A0E1     MOV r5, r0
		   0x0110702C:  04039FE5     LDR r0, [pc, 0x304]
		   0x01107030:  0410A0E1     MOV r1, r4
		   0x01107034:  0030A0E3     MOV r3, 0x0
		   0x01107038:  00009FE7     LDR r0, [pc, r0]
		   0x0110703C:  002090E5     LDR r2, [r0]
		   0x01107040:  0500A0E1     MOV r0, r5
		   0x01107044:  BE987AEB     BL $+0x1ea6300  // CALL → Action..ctor
		   0x01107048:  0C3096E5     LDR r3, [r6, 0xc]
		   0x0110704C:  0510A0E1     MOV r1, r5
		   0x01107050:  142096E5     LDR r2, [r6, 0x14]
		   0x01107054:  200096E5     LDR r0, [r6, 0x20]
		   0x01107058:  3CD08DE2     ADD sp, sp, 0x3c
		   0x0110705C:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01107060:  13FF2FE1     BX r3
		   // ──── Block 24 if (<=) ────────────────────
		   0x01107064:  000050E3     CMPS r0, r0, 0x0
		   0x01107068:  B5FFFF0A     BEQ $-0x124
		   // ──── Block 25 else (!=) ────────────────────
		   0x0110706C:  B4429FE5     LDR r4, [pc, 0x2b4]
		   0x01107070:  04409FE7     LDR r4, [pc, r4]
		   0x01107074:  000094E5     LDR r0, [r4]
		   0x01107078:  741090E5     LDR r1, [r0, 0x74]
		   0x0110707C:  000051E3     CMPS r0, r1, 0x0
		   0x01107080:  0100001A     BNE $+0xc  // if (!=) goto 0x0110708C
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x01107084:  8250F9EB     BL $-0x1abdf0
		   0x01107088:  000094E5     LDR r0, [r4]
		   // ──── Block 27 if (!=) ────────────────────
		   0x0110708C:  98129FE5     LDR r1, [pc, 0x298]
		   0x01107090:  01109FE7     LDR r1, [pc, r1]
		   0x01107094:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01107098:  001091E5     LDR r1, [r1]
		   0x0110709C:  0C4090E5     LDR r4, [r0, 0xc]
		   0x011070A0:  742091E5     LDR r2, [r1, 0x74]
		   0x011070A4:  000052E3     CMPS r0, r2, 0x0
		   0x011070A8:  0100001A     BNE $+0xc  // if (!=) goto 0x011070B4
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x011070AC:  0100A0E1     MOV r0, r1
		   0x011070B0:  7750F9EB     BL $-0x1abe1c
		   // ──── Block 29 if (!=) ────────────────────
		   0x011070B4:  0400A0E1     MOV r0, r4
		   0x011070B8:  FE15A0E3     MOV r1, 0x3f800000
		   0x011070BC:  0020A0E3     MOV r2, 0x0
		   0x011070C0:  675E03EB     BL $+0xd79a4  // CALL → SoundController.PlaySound
		   0x011070C4:  0100A0E3     MOV r0, 0x1
		   0x011070C8:  0010A0E3     MOV r1, 0x0
		   0x011070CC:  3CD08DE2     ADD sp, sp, 0x3c
		   0x011070D0:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011070D4:  B6DEFDEA     B $-0x88520
		   // ──── Block 30 (from 2 paths) ──────────────────
		   0x011070D8:  845094E5     LDR r5, [r4, 0x84]
		   0x011070DC:  000055E3     CMPS r0, r5, 0x0
		   0x011070E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011070E8
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x011070E4:  B950F9EB     BL $-0x1abd14
		   // ──── Block 32 if (!=) ────────────────────
		   0x011070E8:  CC0095E5     LDR r0, [r5, 0xcc]
		   0x011070EC:  020050E3     CMPS r0, r0, 0x2
		   0x011070F0:  0D00000A     BEQ $+0x3c  // if (==) goto 0x0110712C
		   // 
		   // ──── Block 33 else (!=) ────────────────────
		   0x011070F4:  010050E3     CMPS r0, r0, 0x1
		   0x011070F8:  5300001A     BNE $+0x154  // if (!=) goto 0x0110724C
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x011070FC:  107094E5     LDR r7, [r4, 0x10]
		   0x01107100:  B84094E5     LDR r4, [r4, 0xb8]
		   0x01107104:  000054E3     CMPS r0, r4, 0x0
		   0x01107108:  0000001A     BNE $+0x8  // if (!=) goto 0x01107110
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x0110710C:  AF50F9EB     BL $-0x1abd3c
		   // ──── Block 36 if (!=) ────────────────────
		   0x01107110:  0400A0E1     MOV r0, r4
		   0x01107114:  0710A0E1     MOV r1, r7
		   0x01107118:  0620A0E1     MOV r2, r6
		   0x0110711C:  0A30A0E1     MOV r3, r10
		   0x01107120:  F080CDE1     STRD r8, sb, [sp]
		   0x01107124:  77F0FFEB     BL $-0x3e1c
		   0x01107128:  85FFFFEA     B $-0x1e4
		   // ──── Block 37 if (==) ────────────────────
		   0x0110712C:  0010A0E3     MOV r1, 0x0
		   0x01107130:  2B00A0E3     MOV r0, 0x2b
		   0x01107134:  F000CDE1     STRD r0, r1, [sp]
		   0x01107138:  30008DE2     ADD r0, sp, 0x30
		   0x0110713C:  1610A0E3     MOV r1, 0x16
		   0x01107140:  2920A0E3     MOV r2, 0x29
		   0x01107144:  2A30A0E3     MOV r3, 0x2a
		   0x01107148:  925008EB     BL $+0x214250  // CALL → CurrencySinkDataContainer..ctor
		   0x0110714C:  000097E5     LDR r0, [r7]
		   0x01107150:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01107154:  005090E5     LDR r5, [r0]
		   0x01107158:  000055E3     CMPS r0, r5, 0x0
		   0x0110715C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107164
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x01107160:  9A50F9EB     BL $-0x1abd90
		   // ──── Block 39 if (!=) ────────────────────
		   0x01107164:  D0619FE5     LDR r6, [pc, 0x1d0]
		   0x01107168:  1C5095E5     LDR r5, [r5, 0x1c]
		   0x0110716C:  06608FE0     ADD r6, pc, r6
		   0x01107170:  0000D6E5     LDRB r0, [r6]
		   0x01107174:  000050E3     CMPS r0, r0, 0x0
		   0x01107178:  0400001A     BNE $+0x18  // if (!=) goto 0x01107190
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x0110717C:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x01107180:  00009FE7     LDR r0, [pc, r0]
		   0x01107184:  F54FF9EB     BL $-0x1ac024
		   0x01107188:  0100A0E3     MOV r0, 0x1
		   0x0110718C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 41 if (!=) ────────────────────
		   0x01107190:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x01107194:  0010A0E3     MOV r1, 0x0
		   0x01107198:  00009FE7     LDR r0, [pc, r0]
		   0x0110719C:  000090E5     LDR r0, [r0]
		   0x011071A0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011071A4:  080090E5     LDR r0, [r0, 0x8]
		   0x011071A8:  20008DE5     STR r0, [sp, 0x20]
		   0x011071AC:  24008DE2     ADD r0, sp, 0x24
		   0x011071B0:  647900EB     BL $+0x1e598  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x011071B4:  24B08DE2     ADD fp, sp, 0x24
		   0x011071B8:  000055E3     CMPS r0, r5, 0x0
		   0x011071BC:  C80D9BE8     LDM fp, {r3, r6, r7, r8, r10, fp}
		   0x011071C0:  0200001A     BNE $+0x10  // if (!=) goto 0x011071D0
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x011071C4:  1C308DE5     STR r3, [sp, 0x1c]
		   0x011071C8:  8050F9EB     BL $-0x1abdf8
		   0x011071CC:  1C309DE5     LDR r3, [sp, 0x1c]
		   // ──── Block 43 if (!=) ────────────────────
		   0x011071D0:  0000A0E3     MOV r0, 0x0
		   0x011071D4:  C00D8DE8     STM sp, {r6, r7, r8, r10, fp}
		   0x011071D8:  0910A0E1     MOV r1, sb
		   0x011071DC:  14008DE5     STR r0, [sp, 0x14]
		   0x011071E0:  0500A0E1     MOV r0, r5
		   0x011071E4:  20209DE5     LDR r2, [sp, 0x20]
		   0x011071E8:  11B10CEB     BL $+0x32c44c  // CALL → EnergySystem.SpendEnergy
		   0x011071EC:  847094E5     LDR r7, [r4, 0x84]
		   0x011071F0:  B85094E5     LDR r5, [r4, 0xb8]
		   0x011071F4:  000057E3     CMPS r0, r7, 0x0
		   0x011071F8:  0700A0E1     MOV r0, r7
		   0x011071FC:  0300001A     BNE $+0x14  // if (!=) goto 0x01107210
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x01107200:  7250F9EB     BL $-0x1abe30
		   0x01107204:  840094E5     LDR r0, [r4, 0x84]
		   0x01107208:  000050E3     CMPS r0, r0, 0x0
		   0x0110720C:  3B00000A     BEQ $+0xf4  // if (==) goto 0x01107300
		   // 
		   // ──── Block 45 (from 2 paths) ──────────────────
		   0x01107210:  146090E5     LDR r6, [r0, 0x14]
		   0x01107214:  0400A0E1     MOV r0, r4
		   0x01107218:  0010A0E3     MOV r1, 0x0
		   0x0110721C:  547097E5     LDR r7, [r7, 0x54]
		   0x01107220:  21C33BEB     BL $+0xef0c8c  // CALL → sub_1FF7EAC
		   0x01107224:  0040A0E1     MOV r4, r0
		   0x01107228:  000055E3     CMPS r0, r5, 0x0
		   0x0110722C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107234
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x01107230:  6650F9EB     BL $-0x1abe60
		   // ──── Block 47 if (!=) ────────────────────
		   0x01107234:  0500A0E1     MOV r0, r5
		   0x01107238:  0710A0E1     MOV r1, r7
		   0x0110723C:  0620A0E1     MOV r2, r6
		   0x01107240:  0430A0E1     MOV r3, r4
		   0x01107244:  F7F0FFEB     BL $-0x3c1c
		   0x01107248:  1F0000EA     B $+0x84  // goto 0x011072CC
		   // ──── Block 48 if (!=) ────────────────────
		   0x0110724C:  341094E5     LDR r1, [r4, 0x34]
		   0x01107250:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x01107254:  00009FE7     LDR r0, [pc, r0]
		   0x01107258:  24108DE5     STR r1, [sp, 0x24]
		   0x0110725C:  24108DE2     ADD r1, sp, 0x24
		   0x01107260:  240090E5     LDR r0, [r0, 0x24]
		   0x01107264:  0C50F9EB     BL $-0x1abfc8
		   0x01107268:  0010A0E1     MOV r1, r0
		   0x0110726C:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01107270:  0020A0E3     MOV r2, 0x0
		   0x01107274:  00009FE7     LDR r0, [pc, r0]
		   0x01107278:  000090E5     LDR r0, [r0]
		   0x0110727C:  3EFD75EB     BL $+0x1d7f500  // CALL → String.Format
		   0x01107280:  0050A0E1     MOV r5, r0
		   0x01107284:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x01107288:  00009FE7     LDR r0, [pc, r0]
		   0x0110728C:  000090E5     LDR r0, [r0]
		   0x01107290:  4B50F9EB     BL $-0x1abecc
		   0x01107294:  0510A0E1     MOV r1, r5
		   0x01107298:  0020A0E3     MOV r2, 0x0
		   0x0110729C:  0040A0E1     MOV r4, r0
		   0x011072A0:  F75B10EB     BL $+0x416fe4  // CALL → InfoException..ctor
		   0x011072A4:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x011072A8:  00009FE7     LDR r0, [pc, r0]
		   0x011072AC:  000090E5     LDR r0, [r0]
		   0x011072B0:  741090E5     LDR r1, [r0, 0x74]
		   0x011072B4:  000051E3     CMPS r0, r1, 0x0
		   0x011072B8:  0000001A     BNE $+0x8  // if (!=) goto 0x011072C0
		   // 
		   // ──── Block 49 else (==) ────────────────────
		   0x011072BC:  F44FF9EB     BL $-0x1ac028
		   // ──── Block 50 if (!=) ────────────────────
		   0x011072C0:  0400A0E1     MOV r0, r4
		   0x011072C4:  0010A0E3     MOV r1, 0x0
		   0x011072C8:  AFC33BEB     BL $+0xef0ec4  // CALL → sub_1FF818C
		   // ──── Block 51 ──────────────────────────────
		   0x011072CC:  1CFFFFEA     B $-0x388
		   // ──── Block 52 if (==) ────────────────────
		   0x011072D0:  000054E3     CMPS r0, r4, 0x0
		   0x011072D4:  0000001A     BNE $+0x8  // if (!=) goto 0x011072DC
		   // 
		   // ──── Block 53 else (==) ────────────────────
		   0x011072D8:  3C50F9EB     BL $-0x1abf08
		   // ──── Block 54 if (!=) ────────────────────
		   0x011072DC:  1C4094E5     LDR r4, [r4, 0x1c]
		   0x011072E0:  000054E3     CMPS r0, r4, 0x0
		   0x011072E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011072EC
		   // 
		   // ──── Block 55 else (==) ────────────────────
		   0x011072E8:  3850F9EB     BL $-0x1abf18
		   // ──── Block 56 if (!=) ────────────────────
		   0x011072EC:  0400A0E1     MOV r0, r4
		   0x011072F0:  0010A0E3     MOV r1, 0x0
		   0x011072F4:  3CD08DE2     ADD sp, sp, 0x3c
		   0x011072F8:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011072FC:  45AE0CEA     B $+0x32b91c  // TAIL CALL → EnergySystem.EnergyRequest
		   // ──── Block 57 if (==) ────────────────────
		   0x01107300:  3250F9EB     BL $-0x1abf30
		   0x01107304:  7B4F1203     TSTSEQ r4, r2, 0x1ec
		   0x01107308:  68FAF602     RSCSEQ pc, r6, 0x68000
		   0x0110730C:  940DF702     RSCSEQ r0, r7, 0x2500
		   0x01107310:  14F7F602     RSCSEQ pc, r6, 0x500000
		   0x01107314:  282AF702     RSCSEQ r2, r7, 0x28000
		   0x01107318:  4008F702     RSCSEQ r0, r7, 0x400000
		   0x0110731C:  A818F702     RSCSEQ r1, r7, 0xa80000
		   0x01107320:  A018F702     RSCSEQ r1, r7, 0xa00000
		   0x01107324:  FC29F702     RSCSEQ r2, r7, 0x3f0000
		   0x01107328:  D416F702     RSCSEQ r1, r7, 0xd400000
		   0x0110732C:  B016F702     RSCSEQ r1, r7, 0xb000000
		   0x01107330:  600CF702     RSCSEQ r0, r7, 0x6000
		   0x01107334:  ACF8F602     RSCSEQ pc, r6, 0xac0000
		   0x01107338:  7028F702     RSCSEQ r2, r7, 0x700000
		   0x0110733C:  754B1203     TSTSEQ r4, r2, 0x1d400
		   0x01107340:  D021F702     RSCSEQ r2, r7, 0x34
		   0x01107344:  B821F702     RSCSEQ r2, r7, 0x2e
		   0x01107348:  6CF4F602     RSCSEQ pc, r6, 0x6c000000
		   0x0110734C:  3826F702     RSCSEQ r2, r7, 0x3800000
		   0x01107350:  4404F702     RSCSEQ r0, r7, 0x44000000
		   0x01107354:  E0F2F602     RSCSEQ pc, r6, 0xe
		*/
	}

	// RVA: 0x11074C0 Offset: 0x11074C0 VA: 0x11074C0 Slot: 38
	public void OnEnergyConsumptionChanged(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 55 instructions, 0xDC bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011074C0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011074C4:  D0609FE5     LDR r6, [pc, 0xd0]
		   0x011074C8:  0040A0E1     MOV r4, r0
		   0x011074CC:  0150A0E1     MOV r5, r1
		   0x011074D0:  06608FE0     ADD r6, pc, r6
		   0x011074D4:  0000D6E5     LDRB r0, [r6]
		   0x011074D8:  000050E3     CMPS r0, r0, 0x0
		   0x011074DC:  0400001A     BNE $+0x18  // if (!=) goto 0x011074F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011074E0:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x011074E4:  00009FE7     LDR r0, [pc, r0]
		   0x011074E8:  1C4FF9EB     BL $-0x1ac388
		   0x011074EC:  0100A0E3     MOV r0, 0x1
		   0x011074F0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011074F4:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x011074F8:  00009FE7     LDR r0, [pc, r0]
		   0x011074FC:  906094E5     LDR r6, [r4, 0x90]
		   0x01107500:  000090E5     LDR r0, [r0]
		   0x01107504:  741090E5     LDR r1, [r0, 0x74]
		   0x01107508:  000051E3     CMPS r0, r1, 0x0
		   0x0110750C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107514
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01107510:  5F4FF9EB     BL $-0x1ac27c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01107514:  0600A0E1     MOV r0, r6
		   0x01107518:  0010A0E3     MOV r1, 0x0
		   0x0110751C:  0020A0E3     MOV r2, 0x0
		   0x01107520:  5DC23BEB     BL $+0xef097c  // CALL → sub_1FF7E9C
		   0x01107524:  000050E3     CMPS r0, r0, 0x0
		   0x01107528:  7080BD18     POPNE {r4, r5, r6, pc}
		   0x0110752C:  840094E5     LDR r0, [r4, 0x84]
		   0x01107530:  000050E3     CMPS r0, r0, 0x0
		   0x01107534:  1700000A     BEQ $+0x64  // if (==) goto 0x01107598
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01107538:  9000D0E5     LDRB r0, [r0, 0x90]
		   0x0110753C:  906094E5     LDR r6, [r4, 0x90]
		   0x01107540:  000050E3     CMPS r0, r0, 0x0
		   0x01107544:  0050E003     MVNEQ r5, r0, 0x0
		   0x01107548:  000056E3     CMPS r0, r6, 0x0
		   0x0110754C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107554
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01107550:  9E4FF9EB     BL $-0x1ac180
		   // ──── Block 8 if (!=) ────────────────────
		   0x01107554:  0600A0E1     MOV r0, r6
		   0x01107558:  0510A0E1     MOV r1, r5
		   0x0110755C:  0020A0E3     MOV r2, 0x0
		   0x01107560:  A06910EB     BL $+0x41a688  // CALL → SparklesEffect.UpdateSpritesArray
		   0x01107564:  9800A0E3     MOV r0, 0x98
		   0x01107568:  020055E3     CMPS r0, r5, 0x2
		   0x0110756C:  9C000003     MOVEQ r0, 0x9c
		   0x01107570:  005094E7     LDR r5, [r4, r0]  // this.energySpriteX2
		   0x01107574:  944094E5     LDR r4, [r4, 0x94]  // this.energySpriteX2
		   0x01107578:  000054E3     CMPS r0, r4, 0x0
		   0x0110757C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107584
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01107580:  924FF9EB     BL $-0x1ac1b0
		   // ──── Block 10 if (!=) ────────────────────
		   0x01107584:  0400A0E1     MOV r0, r4
		   0x01107588:  0510A0E1     MOV r1, r5
		   0x0110758C:  0020A0E3     MOV r2, 0x0
		   0x01107590:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01107594:  6EC23BEA     B $+0xef09c0
		   // ──── Block 11 if (==) ────────────────────
		   0x01107598:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x1106650 Offset: 0x1106650 VA: 0x1106650
	public bool IsFilled() {
		/* Disassembly (ARM32, 58 instructions, 0xE8 bytes):
		   // CFG: 16 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106650:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01106654:  CC509FE5     LDR r5, [pc, 0xcc]
		   0x01106658:  0040A0E1     MOV r4, r0
		   0x0110665C:  05508FE0     ADD r5, pc, r5
		   0x01106660:  0000D5E5     LDRB r0, [r5]
		   0x01106664:  000050E3     CMPS r0, r0, 0x0
		   0x01106668:  0700001A     BNE $+0x24  // if (!=) goto 0x0110668C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110666C:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01106670:  00009FE7     LDR r0, [pc, r0]
		   0x01106674:  B952F9EB     BL $-0x1ab514
		   0x01106678:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x0110667C:  00009FE7     LDR r0, [pc, r0]
		   0x01106680:  B652F9EB     BL $-0x1ab520
		   0x01106684:  0100A0E3     MOV r0, 0x1
		   0x01106688:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110668C:  A0809FE5     LDR r8, [pc, 0xa0]
		   0x01106690:  0000A0E3     MOV r0, 0x0
		   0x01106694:  08809FE7     LDR r8, [pc, r8]
		   0x01106698:  C86094E5     LDR r6, [r4, 0xc8]  // vtable: Object.Equals
		   0x0110669C:  0050A0E1     MOV r5, r0
		   0x011066A0:  000056E3     CMPS r0, r6, 0x0
		   0x011066A4:  0000001A     BNE $+0x8  // if (!=) goto 0x011066AC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011066A8:  4853F9EB     BL $-0x1ab2d8
		   // ──── Block 4 if (!=) ────────────────────
		   0x011066AC:  086096E5     LDR r6, [r6, 0x8]
		   0x011066B0:  000056E3     CMPS r0, r6, 0x0
		   0x011066B4:  0000001A     BNE $+0x8  // if (!=) goto 0x011066BC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011066B8:  4453F9EB     BL $-0x1ab2e8
		   // ──── Block 6 if (!=) ────────────────────
		   0x011066BC:  0C7096E5     LDR r7, [r6, 0xc]
		   0x011066C0:  070055E1     CMPS r0, r5, r7
		   0x011066C4:  130000AA     BGE $+0x54  // if (>=) goto 0x01106718
		   // 
		   // ──── Block 7 else (<) ────────────────────
		   0x011066C8:  C86094E5     LDR r6, [r4, 0xc8]
		   0x011066CC:  000056E3     CMPS r0, r6, 0x0
		   0x011066D0:  0000001A     BNE $+0x8  // if (!=) goto 0x011066D8
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x011066D4:  3D53F9EB     BL $-0x1ab304
		   // ──── Block 9 if (!=) ────────────────────
		   0x011066D8:  086096E5     LDR r6, [r6, 0x8]
		   0x011066DC:  000056E3     CMPS r0, r6, 0x0
		   0x011066E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011066E8
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x011066E4:  3953F9EB     BL $-0x1ab314
		   // ──── Block 11 if (!=) ────────────────────
		   0x011066E8:  002098E5     LDR r2, [r8]
		   0x011066EC:  0600A0E1     MOV r0, r6
		   0x011066F0:  0510A0E1     MOV r1, r5
		   0x011066F4:  81B06BEB     BL $+0x1aec20c  // CALL → List<object>.get_Item
		   0x011066F8:  0060A0E1     MOV r6, r0
		   0x011066FC:  000050E3     CMPS r0, r0, 0x0
		   0x01106700:  0000001A     BNE $+0x8  // if (!=) goto 0x01106708
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01106704:  3153F9EB     BL $-0x1ab334
		   // ──── Block 13 if (!=) ────────────────────
		   0x01106708:  0C1096E5     LDR r1, [r6, 0xc]
		   0x0110670C:  010085E2     ADD r0, r5, 0x1
		   0x01106710:  000051E3     CMPS r0, r1, 0x0
		   0x01106714:  DFFFFFDA     BLE $-0x7c
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x01106718:  0000A0E3     MOV r0, 0x0
		   0x0110671C:  070055E1     CMPS r0, r5, r7
		   0x01106720:  010000A3     MOVGE r0, 0x1
		   0x01106724:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01106728:  65571203     TSTSEQ r5, r2, 0x1940000
		   0x0110672C:  7431F702     RSCSEQ r3, r7, 0x1d
		   0x01106730:  C031F702     RSCSEQ r3, r7, 0x30
		   0x01106734:  A831F702     RSCSEQ r3, r7, 0x2a
		*/
	}

	// RVA: 0x10F8EA4 Offset: 0x10F8EA4 VA: 0x10F8EA4
	public void Restore() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F8EA4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F8EA8:  A45090E5     LDR r5, [r0, 0xa4]
		   0x010F8EAC:  344090E5     LDR r4, [r0, 0x34]
		   0x010F8EB0:  000055E3     CMPS r0, r5, 0x0
		   0x010F8EB4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F8EBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F8EB8:  4489F9EB     BL $-0x19dae8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F8EBC:  0500A0E1     MOV r0, r5
		   0x010F8EC0:  0410A0E1     MOV r1, r4
		   0x010F8EC4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F8EC8:  A82300EA     B $+0x8ea8  // TAIL CALL → ChargeableContainerCooldown.RestoreTimer
		*/
	}

	// RVA: 0x11075A8 Offset: 0x11075A8 VA: 0x11075A8
	public void Recharge(Action<bool> canRecharge) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011075A8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011075AC:  A46090E5     LDR r6, [r0, 0xa4]
		   0x011075B0:  0140A0E1     MOV r4, r1
		   0x011075B4:  345090E5     LDR r5, [r0, 0x34]
		   0x011075B8:  000056E3     CMPS r0, r6, 0x0
		   0x011075BC:  0000001A     BNE $+0x8  // if (!=) goto 0x011075C4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011075C0:  824FF9EB     BL $-0x1ac1f0
		   // ──── Block 2 if (!=) ────────────────────
		   0x011075C4:  0600A0E1     MOV r0, r6
		   0x011075C8:  0410A0E1     MOV r1, r4
		   0x011075CC:  0520A0E1     MOV r2, r5
		   0x011075D0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x011075D4:  B6EBFFEA     B $-0x5120
		*/
	}

	// RVA: 0x11075D8 Offset: 0x11075D8 VA: 0x11075D8
	public void SetListenerOpenTimerUpdate(Action<int, bool> itemTimerUpdate) {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011075D8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011075DC:  A45090E5     LDR r5, [r0, 0xa4]
		   0x011075E0:  0140A0E1     MOV r4, r1
		   0x011075E4:  000055E3     CMPS r0, r5, 0x0
		   0x011075E8:  0000001A     BNE $+0x8  // if (!=) goto 0x011075F0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011075EC:  774FF9EB     BL $-0x1ac21c
		   // ──── Block 2 if (!=) ────────────────────
		   0x011075F0:  0500A0E1     MOV r0, r5
		   0x011075F4:  0410A0E1     MOV r1, r4
		   0x011075F8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x011075FC:  B7E8FFEA     B $-0x5d1c
		*/
	}

	// RVA: 0x1107600 Offset: 0x1107600 VA: 0x1107600
	public void SetListenerOpenTimerEnd(Action itemTimerEnd) {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107600:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01107604:  A45090E5     LDR r5, [r0, 0xa4]
		   0x01107608:  0140A0E1     MOV r4, r1
		   0x0110760C:  000055E3     CMPS r0, r5, 0x0
		   0x01107610:  0000001A     BNE $+0x8  // if (!=) goto 0x01107618
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01107614:  6D4FF9EB     BL $-0x1ac244
		   // ──── Block 2 if (!=) ────────────────────
		   0x01107618:  0500A0E1     MOV r0, r5
		   0x0110761C:  0410A0E1     MOV r1, r4
		   0x01107620:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01107624:  5DE8FFEA     B $-0x5e84
		*/
	}

	// RVA: 0x1107628 Offset: 0x1107628 VA: 0x1107628
	public void CalculateAndSendOpenTimer() {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107628:  10402DE9     PUSH {r4, lr}
		   0x0110762C:  A44090E5     LDR r4, [r0, 0xa4]
		   0x01107630:  000054E3     CMPS r0, r4, 0x0
		   0x01107634:  0000001A     BNE $+0x8  // if (!=) goto 0x0110763C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01107638:  644FF9EB     BL $-0x1ac268
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110763C:  0400A0E1     MOV r0, r4
		   0x01107640:  1040BDE8     POP {r4, lr}
		   0x01107644:  20EDFFEA     B $-0x4b78
		*/
	}

	// RVA: 0x1107648 Offset: 0x1107648 VA: 0x1107648
	public void RemoveListeners() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107648:  10402DE9     PUSH {r4, lr}
		   0x0110764C:  A44090E5     LDR r4, [r0, 0xa4]
		   0x01107650:  000054E3     CMPS r0, r4, 0x0
		   0x01107654:  0000001A     BNE $+0x8  // if (!=) goto 0x0110765C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01107658:  5C4FF9EB     BL $-0x1ac288
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110765C:  0000A0E3     MOV r0, 0x0
		   0x01107660:  5C0084E5     STR r0, [r4, 0x5c]  // vtable: Object.Equals
		   0x01107664:  140084E5     STR r0, [r4, 0x14]  // vtable: Object.Equals
		   0x01107668:  180084E5     STR r0, [r4, 0x18]  // vtable: Object.Equals
		   0x0110766C:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x1107670 Offset: 0x1107670 VA: 0x1107670 Slot: 39
	public void UpdateAndPauseChargesTimers(float boostSeconds) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107670:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01107674:  A46090E5     LDR r6, [r0, 0xa4]
		   0x01107678:  0140A0E1     MOV r4, r1
		   0x0110767C:  345090E5     LDR r5, [r0, 0x34]
		   0x01107680:  000056E3     CMPS r0, r6, 0x0
		   0x01107684:  0000001A     BNE $+0x8  // if (!=) goto 0x0110768C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01107688:  504FF9EB     BL $-0x1ac2b8
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110768C:  0600A0E1     MOV r0, r6
		   0x01107690:  0510A0E1     MOV r1, r5
		   0x01107694:  0420A0E1     MOV r2, r4
		   0x01107698:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110769C:  3CEAFFEA     B $-0x5708
		*/
	}

	// RVA: 0x11076A0 Offset: 0x11076A0 VA: 0x11076A0 Slot: 40
	public void UnpauseChargeTimers(bool silent = false) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011076A0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011076A4:  A46090E5     LDR r6, [r0, 0xa4]
		   0x011076A8:  0140A0E1     MOV r4, r1
		   0x011076AC:  345090E5     LDR r5, [r0, 0x34]
		   0x011076B0:  000056E3     CMPS r0, r6, 0x0
		   0x011076B4:  0000001A     BNE $+0x8  // if (!=) goto 0x011076BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011076B8:  444FF9EB     BL $-0x1ac2e8
		   // ──── Block 2 if (!=) ────────────────────
		   0x011076BC:  0600A0E1     MOV r0, r6
		   0x011076C0:  0510A0E1     MOV r1, r5
		   0x011076C4:  0420A0E1     MOV r2, r4
		   0x011076C8:  7040BDE8     POP {r4, r5, r6, lr}
		   0x011076CC:  67EAFFEA     B $-0x565c
		*/
	}

	// RVA: 0x11076D0 Offset: 0x11076D0 VA: 0x11076D0 Slot: 41
	public bool CanBoost() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011076D0:  3820D0E5     LDRB r2, [r0, 0x38]
		   0x011076D4:  0010A0E1     MOV r1, r0
		   0x011076D8:  0000A0E3     MOV r0, 0x0
		   0x011076DC:  000052E3     CMPS r0, r2, 0x0
		   0x011076E0:  1EFF2F11     BXNE lr
		   0x011076E4:  10402DE9     PUSH {r4, lr}
		   0x011076E8:  A44091E5     LDR r4, [r1, 0xa4]
		   0x011076EC:  000054E3     CMPS r0, r4, 0x0
		   0x011076F0:  0000001A     BNE $+0x8  // if (!=) goto 0x011076F8
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x011076F4:  354FF9EB     BL $-0x1ac324
		   // ──── Block 3 if (!=) ────────────────────
		   0x011076F8:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x011076FC:  000050E3     CMPS r0, r0, 0x0
		   0x01107700:  01000013     MOVNE r0, 0x1
		   0x01107704:  1040BDE8     POP {r4, lr}
		   0x01107708:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1106138 Offset: 0x1106138 VA: 0x1106138
	private void SetActiveContainerEffects() {
		/* Disassembly (ARM32, 125 instructions, 0x1F4 bytes):
		   // CFG: 36 blocks, 40 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106138:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110613C:  D8519FE5     LDR r5, [pc, 0x1d8]
		   0x01106140:  0060A0E1     MOV r6, r0
		   0x01106144:  05508FE0     ADD r5, pc, r5
		   0x01106148:  0000D5E5     LDRB r0, [r5]
		   0x0110614C:  000050E3     CMPS r0, r0, 0x0
		   0x01106150:  0400001A     BNE $+0x18  // if (!=) goto 0x01106168
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01106154:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x01106158:  00009FE7     LDR r0, [pc, r0]
		   0x0110615C:  FF53F9EB     BL $-0x1aaffc
		   0x01106160:  0100A0E3     MOV r0, 0x1
		   0x01106164:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01106168:  0600A0E1     MOV r0, r6
		   0x0110616C:  370100EB     BL $+0x4e4  // CALL → ItemChargeableContainer.IsFilled
		   0x01106170:  000050E3     CMPS r0, r0, 0x0
		   0x01106174:  1500000A     BEQ $+0x5c  // if (==) goto 0x011061D0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01106178:  D05096E5     LDR r5, [r6, 0xd0]
		   0x0110617C:  000055E3     CMPS r0, r5, 0x0
		   0x01106180:  0000001A     BNE $+0x8  // if (!=) goto 0x01106188
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01106184:  9154F9EB     BL $-0x1aadb4
		   // ──── Block 5 if (!=) ────────────────────
		   0x01106188:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0110618C:  010050E3     CMPS r0, r0, 0x1
		   0x01106190:  0E0000BA     BLT $+0x40  // if (<) goto 0x011061D0
		   // 
		   // ──── Block 6 else (>=) ────────────────────
		   0x01106194:  3800D6E5     LDRB r0, [r6, 0x38]
		   0x01106198:  000050E3     CMPS r0, r0, 0x0
		   0x0110619C:  0B00001A     BNE $+0x34  // if (!=) goto 0x011061D0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x011061A0:  0600A0E1     MOV r0, r6
		   0x011061A4:  0010A0E3     MOV r1, 0x0
		   0x011061A8:  CA0C00EB     BL $+0x3330  // CALL → Item.get_isItBubble
		   0x011061AC:  000050E3     CMPS r0, r0, 0x0
		   0x011061B0:  0600001A     BNE $+0x20  // if (!=) goto 0x011061D0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x011061B4:  A45096E5     LDR r5, [r6, 0xa4]
		   0x011061B8:  000055E3     CMPS r0, r5, 0x0
		   0x011061BC:  0000001A     BNE $+0x8  // if (!=) goto 0x011061C4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x011061C0:  8254F9EB     BL $-0x1aadf0
		   // ──── Block 10 if (!=) ────────────────────
		   0x011061C4:  1C00D5E5     LDRB r0, [r5, 0x1c]
		   0x011061C8:  000050E3     CMPS r0, r0, 0x0
		   0x011061CC:  2500000A     BEQ $+0x9c  // if (==) goto 0x01106268
		   // 
		   // ──── Block 11 (from 5 paths) ──────────────────
		   0x011061D0:  BC5096E5     LDR r5, [r6, 0xbc]
		   0x011061D4:  000055E3     CMPS r0, r5, 0x0
		   0x011061D8:  0000001A     BNE $+0x8  // if (!=) goto 0x011061E0
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x011061DC:  7B54F9EB     BL $-0x1aae0c
		   // ──── Block 13 if (!=) ────────────────────
		   0x011061E0:  000095E5     LDR r0, [r5]
		   0x011061E4:  3C119FE5     LDR r1, [pc, 0x13c]
		   0x011061E8:  01109FE7     LDR r1, [pc, r1]
		   0x011061EC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x011061F0:  001091E5     LDR r1, [r1]
		   0x011061F4:  000052E3     CMPS r0, r2, 0x0
		   0x011061F8:  0700000A     BEQ $+0x24  // if (==) goto 0x0110621C
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x011061FC:  583090E5     LDR r3, [r0, 0x58]
		   0x01106200:  043083E2     ADD r3, r3, 0x4
		   0x01106204:  044013E5     LDR r4, [r3, -0x4]
		   0x01106208:  010054E1     CMPS r0, r4, r1
		   0x0110620C:  0600000A     BEQ $+0x20  // if (==) goto 0x0110622C
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x01106210:  012052E2     SUBS r2, r2, 0x1
		   0x01106214:  083083E2     ADD r3, r3, 0x8
		   0x01106218:  F9FFFF1A     BNE $-0x14
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x0110621C:  0500A0E1     MOV r0, r5
		   0x01106220:  0220A0E3     MOV r2, 0x2
		   0x01106224:  1743FAEB     BL $-0x16f39c
		   0x01106228:  020000EA     B $+0x10  // goto 0x01106238
		   // ──── Block 17 if (==) ────────────────────
		   0x0110622C:  001093E5     LDR r1, [r3]
		   0x01106230:  810180E0     ADD r0, r0, r1, lsl 3
		   0x01106234:  D00080E2     ADD r0, r0, 0xd0
		   // ──── Block 18 ──────────────────────────────
		   0x01106238:  D020C0E1     LDRD r2, r3, [r0]
		   0x0110623C:  0500A0E1     MOV r0, r5
		   0x01106240:  0310A0E1     MOV r1, r3
		   0x01106244:  32FF2FE1     BLX r2
		   0x01106248:  8C4096E5     LDR r4, [r6, 0x8c]
		   0x0110624C:  000054E3     CMPS r0, r4, 0x0
		   0x01106250:  0000001A     BNE $+0x8  // if (!=) goto 0x01106258
		   // 
		   // ──── Block 19 else (r2 == r2, 0x1) ────────────────────
		   0x01106254:  5D54F9EB     BL $-0x1aae84
		   // ──── Block 20 if (r2 != r2, 0x1) ────────────────────
		   0x01106258:  0400A0E1     MOV r0, r4
		   0x0110625C:  0010A0E3     MOV r1, 0x0
		   0x01106260:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01106264:  BE6610EA     B $+0x419b00  // TAIL CALL → EnergyEffect.Hide
		   // ──── Block 21 if (==) ────────────────────
		   0x01106268:  845096E5     LDR r5, [r6, 0x84]
		   0x0110626C:  000055E3     CMPS r0, r5, 0x0
		   0x01106270:  0000001A     BNE $+0x8  // if (!=) goto 0x01106278
		   // 
		   // ──── Block 22 else (r2 == r2, 0x1) ────────────────────
		   0x01106274:  5554F9EB     BL $-0x1aaea4
		   // ──── Block 23 if (r2 != r2, 0x1) ────────────────────
		   0x01106278:  8C0095E5     LDR r0, [r5, 0x8c]
		   0x0110627C:  010050E3     CMPS r0, r0, 0x1
		   0x01106280:  060000BA     BLT $+0x20  // if (<) goto 0x011062A0
		   // 
		   // ──── Block 24 else (r2 >= r2, 0x1) ────────────────────
		   0x01106284:  8C5096E5     LDR r5, [r6, 0x8c]
		   0x01106288:  000055E3     CMPS r0, r5, 0x0
		   0x0110628C:  0000001A     BNE $+0x8  // if (!=) goto 0x01106294
		   // 
		   // ──── Block 25 else (r2 == r2, 0x1) ────────────────────
		   0x01106290:  4E54F9EB     BL $-0x1aaec0
		   // ──── Block 26 if (r2 != r2, 0x1) ────────────────────
		   0x01106294:  0500A0E1     MOV r0, r5
		   0x01106298:  0010A0E3     MOV r1, 0x0
		   0x0110629C:  726610EB     BL $+0x4199d0  // CALL → EnergyEffect.Show
		   // ──── Block 27 if (r2 < r2, 0x1) ────────────────────
		   0x011062A0:  BC4096E5     LDR r4, [r6, 0xbc]
		   0x011062A4:  000054E3     CMPS r0, r4, 0x0
		   0x011062A8:  0000001A     BNE $+0x8  // if (!=) goto 0x011062B0
		   // 
		   // ──── Block 28 else (r2 == r2, 0x1) ────────────────────
		   0x011062AC:  4754F9EB     BL $-0x1aaedc
		   // ──── Block 29 if (r2 != r2, 0x1) ────────────────────
		   0x011062B0:  000094E5     LDR r0, [r4]
		   0x011062B4:  68109FE5     LDR r1, [pc, 0x68]
		   0x011062B8:  01109FE7     LDR r1, [pc, r1]
		   0x011062BC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x011062C0:  001091E5     LDR r1, [r1]
		   0x011062C4:  000052E3     CMPS r0, r2, 0x0
		   0x011062C8:  0700000A     BEQ $+0x24  // if (==) goto 0x011062EC
		   // 
		   // ──── Block 30 else (r2 != r2, 0x1) ────────────────────
		   0x011062CC:  583090E5     LDR r3, [r0, 0x58]
		   0x011062D0:  043083E2     ADD r3, r3, 0x4
		   0x011062D4:  045013E5     LDR r5, [r3, -0x4]
		   0x011062D8:  010055E1     CMPS r0, r5, r1
		   0x011062DC:  0600000A     BEQ $+0x20  // if (==) goto 0x011062FC
		   // 
		   // ──── Block 31 else (r2 != r2, 0x1) ────────────────────
		   0x011062E0:  012052E2     SUBS r2, r2, 0x1
		   0x011062E4:  083083E2     ADD r3, r3, 0x8
		   0x011062E8:  F9FFFF1A     BNE $-0x14
		   // ──── Block 32 (from 2 paths) ──────────────────
		   0x011062EC:  0400A0E1     MOV r0, r4
		   0x011062F0:  0120A0E3     MOV r2, 0x1
		   0x011062F4:  E342FAEB     BL $-0x16f46c
		   0x011062F8:  020000EA     B $+0x10  // goto 0x01106308
		   // ──── Block 33 if (r2 == r2, 0x1) ────────────────────
		   0x011062FC:  001093E5     LDR r1, [r3]
		   0x01106300:  810180E0     ADD r0, r0, r1, lsl 3
		   0x01106304:  C80080E2     ADD r0, r0, 0xc8
		   // ──── Block 34 ──────────────────────────────
		   0x01106308:  D020C0E1     LDRD r2, r3, [r0]
		   0x0110630C:  0400A0E1     MOV r0, r4
		   0x01106310:  0310A0E1     MOV r1, r3
		   0x01106314:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01106318:  12FF2FE1     BX r2
		   0x0110631C:  7E5C1203     TSTSEQ r5, r2, 0x7e00
		   0x01106320:  4437F702     RSCSEQ r3, r7, 0x1100000
		   0x01106324:  E435F702     RSCSEQ r3, r7, 0x39000000
		   0x01106328:  B436F702     RSCSEQ r3, r7, 0xb400000
		*/
	}

	// RVA: 0x110770C Offset: 0x110770C VA: 0x110770C Slot: 48
	protected virtual ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110770C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}

	// RVA: 0x1107960 Offset: 0x1107960 VA: 0x1107960
	protected bool SelectItemDataToSpawn(int i, out ItemData itemDataNew, out bool outRare, EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107960:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01107964:  08D04DE2     SUB sp, sp, 0x8
		   0x01107968:  DC439FE5     LDR r4, [pc, 0x3dc]
		   0x0110796C:  0050A0E1     MOV r5, r0
		   0x01107970:  0370A0E1     MOV r7, r3
		   0x01107974:  02A0A0E1     MOV r10, r2
		   0x01107978:  04408FE0     ADD r4, pc, r4
		   0x0110797C:  0160A0E1     MOV r6, r1
		   0x01107980:  0000D4E5     LDRB r0, [r4]
		   0x01107984:  000050E3     CMPS r0, r0, 0x0
		   0x01107988:  1600001A     BNE $+0x60  // if (!=) goto 0x011079E8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110798C:  BC039FE5     LDR r0, [pc, 0x3bc]
		   0x01107990:  00009FE7     LDR r0, [pc, r0]
		   0x01107994:  F14DF9EB     BL $-0x1ac834
		   0x01107998:  B4039FE5     LDR r0, [pc, 0x3b4]
		   0x0110799C:  00009FE7     LDR r0, [pc, r0]
		   0x011079A0:  EE4DF9EB     BL $-0x1ac840
		   0x011079A4:  AC039FE5     LDR r0, [pc, 0x3ac]
		   0x011079A8:  00009FE7     LDR r0, [pc, r0]
		   0x011079AC:  EB4DF9EB     BL $-0x1ac84c
		   0x011079B0:  A4039FE5     LDR r0, [pc, 0x3a4]
		   0x011079B4:  00009FE7     LDR r0, [pc, r0]
		   0x011079B8:  E84DF9EB     BL $-0x1ac858
		   0x011079BC:  9C039FE5     LDR r0, [pc, 0x39c]
		   0x011079C0:  00009FE7     LDR r0, [pc, r0]
		   0x011079C4:  E54DF9EB     BL $-0x1ac864
		   0x011079C8:  94039FE5     LDR r0, [pc, 0x394]
		   0x011079CC:  00009FE7     LDR r0, [pc, r0]
		   0x011079D0:  E24DF9EB     BL $-0x1ac870
		   0x011079D4:  8C039FE5     LDR r0, [pc, 0x38c]
		   0x011079D8:  00009FE7     LDR r0, [pc, r0]
		   0x011079DC:  DF4DF9EB     BL $-0x1ac87c
		   0x011079E0:  0100A0E3     MOV r0, 0x1
		   0x011079E4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011079E8:  B04095E5     LDR r4, [r5, 0xb0]
		   0x011079EC:  000054E3     CMPS r0, r4, 0x0
		   0x011079F0:  0000001A     BNE $+0x8  // if (!=) goto 0x011079F8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011079F4:  754EF9EB     BL $-0x1ac624
		   // ──── Block 4 if (!=) ────────────────────
		   0x011079F8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x011079FC:  060050E1     CMPS r0, r0, r6
		   0x01107A00:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01107A08
		   // 
		   // ──── Block 5 else (<= (unsigned)) ────────────────────
		   0x01107A04:  724EF9EB     BL $-0x1ac630
		   // ──── Block 6 if (> (unsigned)) ────────────────────
		   0x01107A08:  060184E0     ADD r0, r4, r6, lsl 2
		*/
	}

	// RVA: 0x1107358 Offset: 0x1107358 VA: 0x1107358
	private int GetActivationCostEnergy(EnergyConsumptionMode mode) {
		/* Disassembly (ARM32, 90 instructions, 0x168 bytes):
		   // CFG: 17 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107358:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110735C:  08D04DE2     SUB sp, sp, 0x8
		   0x01107360:  34619FE5     LDR r6, [pc, 0x134]
		   0x01107364:  0040A0E1     MOV r4, r0
		   0x01107368:  0150A0E1     MOV r5, r1
		   0x0110736C:  06608FE0     ADD r6, pc, r6
		   0x01107370:  0000D6E5     LDRB r0, [r6]
		   0x01107374:  000050E3     CMPS r0, r0, 0x0
		   0x01107378:  0D00001A     BNE $+0x3c  // if (!=) goto 0x011073B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110737C:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x01107380:  00009FE7     LDR r0, [pc, r0]
		   0x01107384:  754FF9EB     BL $-0x1ac224
		   0x01107388:  14019FE5     LDR r0, [pc, 0x114]
		   0x0110738C:  00009FE7     LDR r0, [pc, r0]
		   0x01107390:  724FF9EB     BL $-0x1ac230
		   0x01107394:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x01107398:  00009FE7     LDR r0, [pc, r0]
		   0x0110739C:  6F4FF9EB     BL $-0x1ac23c
		   0x011073A0:  04019FE5     LDR r0, [pc, 0x104]
		   0x011073A4:  00009FE7     LDR r0, [pc, r0]
		   0x011073A8:  6C4FF9EB     BL $-0x1ac248
		   0x011073AC:  0100A0E3     MOV r0, 0x1
		   0x011073B0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011073B4:  846094E5     LDR r6, [r4, 0x84]
		   0x011073B8:  000056E3     CMPS r0, r6, 0x0
		   0x011073BC:  0000001A     BNE $+0x8  // if (!=) goto 0x011073C4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011073C0:  0250F9EB     BL $-0x1abff0
		   // ──── Block 4 if (!=) ────────────────────
		   0x011073C4:  9000D6E5     LDRB r0, [r6, 0x90]
		   0x011073C8:  000050E3     CMPS r0, r0, 0x0
		   0x011073CC:  01007513     CMNSNE r0, r5, 0x1
		   0x011073D0:  0600001A     BNE $+0x20  // if (!=) goto 0x011073F0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011073D4:  844094E5     LDR r4, [r4, 0x84]
		   0x011073D8:  000054E3     CMPS r0, r4, 0x0
		   0x011073DC:  0000001A     BNE $+0x8  // if (!=) goto 0x011073E4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x011073E0:  FA4FF9EB     BL $-0x1ac010
		   // ──── Block 7 if (!=) ────────────────────
		   0x011073E4:  8C0094E5     LDR r0, [r4, 0x8c]
		   0x011073E8:  08D08DE2     ADD sp, sp, 0x8
		   0x011073EC:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 8 if (!=) ────────────────────
		   0x011073F0:  020055E3     CMPS r0, r5, 0x2
		   0x011073F4:  2100000A     BEQ $+0x8c  // if (==) goto 0x01107480
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x011073F8:  010055E3     CMPS r0, r5, 0x1
		   0x011073FC:  F4FFFF0A     BEQ $-0x28
		   // ──── Block 10 else (!=) ────────────────────
		   0x01107400:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x01107404:  04108DE2     ADD r1, sp, 0x4
		   0x01107408:  00009FE7     LDR r0, [pc, r0]
		   0x0110740C:  04508DE5     STR r5, [sp, 0x4]
		   0x01107410:  000090E5     LDR r0, [r0]
		   0x01107414:  A04FF9EB     BL $-0x1ac178
		   0x01107418:  0010A0E1     MOV r1, r0
		   0x0110741C:  90009FE5     LDR r0, [pc, 0x90]
		   0x01107420:  0020A0E3     MOV r2, 0x0
		   0x01107424:  00009FE7     LDR r0, [pc, r0]
		   0x01107428:  000090E5     LDR r0, [r0]
		   0x0110742C:  D2FC75EB     BL $+0x1d7f350  // CALL → String.Format
		   0x01107430:  0060A0E1     MOV r6, r0
		   0x01107434:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x01107438:  00009FE7     LDR r0, [pc, r0]
		   0x0110743C:  000090E5     LDR r0, [r0]
		   0x01107440:  DF4FF9EB     BL $-0x1ac07c
		   0x01107444:  0610A0E1     MOV r1, r6
		   0x01107448:  0020A0E3     MOV r2, 0x0
		   0x0110744C:  0050A0E1     MOV r5, r0
		   0x01107450:  8B5B10EB     BL $+0x416e34  // CALL → InfoException..ctor
		   0x01107454:  60009FE5     LDR r0, [pc, 0x60]
		   0x01107458:  00009FE7     LDR r0, [pc, r0]
		   0x0110745C:  000090E5     LDR r0, [r0]
		   0x01107460:  741090E5     LDR r1, [r0, 0x74]
		   0x01107464:  000051E3     CMPS r0, r1, 0x0
		   0x01107468:  0000001A     BNE $+0x8  // if (!=) goto 0x01107470
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110746C:  884FF9EB     BL $-0x1ac1d8
		   // ──── Block 12 if (!=) ────────────────────
		   0x01107470:  0500A0E1     MOV r0, r5
		   0x01107474:  0010A0E3     MOV r1, 0x0
		   0x01107478:  43C33BEB     BL $+0xef0d14  // CALL → sub_1FF818C
		   0x0110747C:  D4FFFFEA     B $-0xa8
		   // ──── Block 13 if (==) ────────────────────
		   0x01107480:  844094E5     LDR r4, [r4, 0x84]
		   0x01107484:  000054E3     CMPS r0, r4, 0x0
		   0x01107488:  0000001A     BNE $+0x8  // if (!=) goto 0x01107490
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0110748C:  CF4FF9EB     BL $-0x1ac0bc
		   // ──── Block 15 if (!=) ────────────────────
		   0x01107490:  8C0094E5     LDR r0, [r4, 0x8c]
		   0x01107494:  8000A0E1     MOV r0, r0, r0, lsl 1
		   0x01107498:  D2FFFFEA     B $-0xb0
		   0x0110749C:  594A1203     TSTSEQ r4, r2, 0x59000
		   0x011074A0:  08F2F602     RSCSEQ pc, r6, 0x80000000
		   0x011074A4:  D024F702     RSCSEQ r2, r7, 0xd0000000
		   0x011074A8:  3403F702     RSCSEQ r0, r7, 0xd0000000
		   0x011074AC:  0C25F702     RSCSEQ r2, r7, 0x3000000
		   0x011074B0:  5424F702     RSCSEQ r2, r7, 0x54000000
		   0x011074B4:  8C24F702     RSCSEQ r2, r7, 0x8c000000
		   0x011074B8:  9402F702     RSCSEQ r0, r7, 0x40000009
		   0x011074BC:  30F1F602     RSCSEQ pc, r6, 0xc
		*/
	}

	// RVA: 0x1107D88 Offset: 0x1107D88 VA: 0x1107D88
	private void ReduceContainerCapacity() {
		/* Disassembly (ARM32, 217 instructions, 0x364 bytes):
		   // CFG: 48 blocks, 50 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01107D88:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01107D8C:  04D04DE2     SUB sp, sp, 0x4
		   0x01107D90:  28439FE5     LDR r4, [pc, 0x328]
		   0x01107D94:  0080A0E1     MOV r8, r0
		   0x01107D98:  04408FE0     ADD r4, pc, r4
		   0x01107D9C:  0000D4E5     LDRB r0, [r4]
		   0x01107DA0:  000050E3     CMPS r0, r0, 0x0
		   0x01107DA4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01107DE0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01107DA8:  14039FE5     LDR r0, [pc, 0x314]
		   0x01107DAC:  00009FE7     LDR r0, [pc, r0]
		   0x01107DB0:  EA4CF9EB     BL $-0x1acc50
		   0x01107DB4:  0C039FE5     LDR r0, [pc, 0x30c]
		   0x01107DB8:  00009FE7     LDR r0, [pc, r0]
		   0x01107DBC:  E74CF9EB     BL $-0x1acc5c
		   0x01107DC0:  04039FE5     LDR r0, [pc, 0x304]
		   0x01107DC4:  00009FE7     LDR r0, [pc, r0]
		   0x01107DC8:  E44CF9EB     BL $-0x1acc68
		   0x01107DCC:  FC029FE5     LDR r0, [pc, 0x2fc]
		   0x01107DD0:  00009FE7     LDR r0, [pc, r0]
		   0x01107DD4:  E14CF9EB     BL $-0x1acc74
		   0x01107DD8:  0100A0E3     MOV r0, 0x1
		   0x01107DDC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01107DE0:  D04098E5     LDR r4, [r8, 0xd0]
		   0x01107DE4:  000054E3     CMPS r0, r4, 0x0
		   0x01107DE8:  0300000A     BEQ $+0x14  // if (==) goto 0x01107DFC
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01107DEC:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01107DF0:  010040E2     SUB r0, r0, 0x1
		   0x01107DF4:  0C0084E5     STR r0, [r4, 0xc]
		   0x01107DF8:  080000EA     B $+0x28  // goto 0x01107E20
		   // ──── Block 4 if (==) ────────────────────
		   0x01107DFC:  734DF9EB     BL $-0x1aca2c
		   0x01107E00:  0C00A0E3     MOV r0, 0xc
		   0x01107E04:  D04098E5     LDR r4, [r8, 0xd0]  // vtable: Item.ToString
		   0x01107E08:  001090E5     LDR r1, [r0]
		   0x01107E0C:  000054E3     CMPS r0, r4, 0x0
		   0x01107E10:  011041E2     SUB r1, r1, 0x1
		   0x01107E14:  001080E5     STR r1, [r0]
		   0x01107E18:  A700000A     BEQ $+0x2a4  // if (==) goto 0x011080BC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01107E1C:  0C0094E5     LDR r0, [r4, 0xc]
		   // ──── Block 6 ──────────────────────────────
		   0x01107E20:  000050E3     CMPS r0, r0, 0x0
		   0x01107E24:  050000DA     BLE $+0x1c  // if (<=) goto 0x01107E40
		   // 
		   // ──── Block 7 else (>) ────────────────────
		   0x01107E28:  340098E5     LDR r0, [r8, 0x34]
		   0x01107E2C:  0020A0E3     MOV r2, 0x0
		   0x01107E30:  D01098E5     LDR r1, [r8, 0xd0]
		   0x01107E34:  04D08DE2     ADD sp, sp, 0x4
		   0x01107E38:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01107E3C:  540400EA     B $+0x1158  // TAIL CALL → ContainerDataStorage.SetContainerCharges
		   // ──── Block 8 if (<=) ────────────────────
		   0x01107E40:  080094E5     LDR r0, [r4, 0x8]
		   0x01107E44:  020050E3     CMPS r0, r0, 0x2
		   0x01107E48:  070000AA     BGE $+0x24  // if (>=) goto 0x01107E6C
		   // 
		   // ──── Block 9 else (<) ────────────────────
		   0x01107E4C:  C84098E5     LDR r4, [r8, 0xc8]
		   0x01107E50:  000054E3     CMPS r0, r4, 0x0
		   0x01107E54:  2400000A     BEQ $+0x98  // if (==) goto 0x01107EEC
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x01107E58:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01107E5C:  010040E2     SUB r0, r0, 0x1
		   0x01107E60:  C00F80E1     ORR r0, r0, r0, asr 31
		   0x01107E64:  0C0084E5     STR r0, [r4, 0xc]
		   0x01107E68:  290000EA     B $+0xac  // goto 0x01107F14
		   // ──── Block 11 if (>=) ────────────────────
		   0x01107E6C:  845098E5     LDR r5, [r8, 0x84]
		   0x01107E70:  010040E2     SUB r0, r0, 0x1
		   0x01107E74:  080084E5     STR r0, [r4, 0x8]
		   0x01107E78:  000055E3     CMPS r0, r5, 0x0
		   0x01107E7C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107E84
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01107E80:  524DF9EB     BL $-0x1acab0
		   // ──── Block 13 if (!=) ────────────────────
		   0x01107E84:  5C7095E5     LDR r7, [r5, 0x5c]
		   0x01107E88:  000057E3     CMPS r0, r7, 0x0
		   0x01107E8C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107E94
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01107E90:  4E4DF9EB     BL $-0x1acac0
		   // ──── Block 15 if (!=) ────────────────────
		   0x01107E94:  A46098E5     LDR r6, [r8, 0xa4]
		   0x01107E98:  345098E5     LDR r5, [r8, 0x34]
		   0x01107E9C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01107EA0:  000056E3     CMPS r0, r6, 0x0
		   0x01107EA4:  0C0084E5     STR r0, [r4, 0xc]
		   0x01107EA8:  0000001A     BNE $+0x8  // if (!=) goto 0x01107EB0
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x01107EAC:  474DF9EB     BL $-0x1acadc
		   // ──── Block 17 if (!=) ────────────────────
		   0x01107EB0:  0600A0E1     MOV r0, r6
		   0x01107EB4:  0510A0E1     MOV r1, r5
		   0x01107EB8:  4AE7FFEB     BL $-0x62d0
		   0x01107EBC:  000050E3     CMPS r0, r0, 0x0
		   0x01107EC0:  D8FFFF0A     BEQ $-0x98
		   // ──── Block 18 else (!=) ────────────────────
		   0x01107EC4:  0800A0E1     MOV r0, r8
		   0x01107EC8:  9AF8FFEB     BL $-0x1d90
		   0x01107ECC:  D40098E5     LDR r0, [r8, 0xd4]
		   0x01107ED0:  000050E3     CMPS r0, r0, 0x0
		   0x01107ED4:  D3FFFF0A     BEQ $-0xac
		   // ──── Block 19 else (!=) ────────────────────
		   0x01107ED8:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01107EDC:  141090E5     LDR r1, [r0, 0x14]
		   0x01107EE0:  200090E5     LDR r0, [r0, 0x20]
		   0x01107EE4:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   0x01107EE8:  CEFFFFEA     B $-0xc0
		   // ──── Block 20 if (==) ────────────────────
		   0x01107EEC:  374DF9EB     BL $-0x1acb1c
		   0x01107EF0:  0C00A0E3     MOV r0, 0xc
		   0x01107EF4:  C84098E5     LDR r4, [r8, 0xc8]  // vtable: Item.ToString
		   0x01107EF8:  001090E5     LDR r1, [r0]
		   0x01107EFC:  000054E3     CMPS r0, r4, 0x0
		   0x01107F00:  011041E2     SUB r1, r1, 0x1
		   0x01107F04:  C11F81E1     ORR r1, r1, r1, asr 31
		   0x01107F08:  001080E5     STR r1, [r0]
		   0x01107F0C:  6A00000A     BEQ $+0x1b0  // if (==) goto 0x011080BC
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x01107F10:  0C0094E5     LDR r0, [r4, 0xc]
		   // ──── Block 22 ──────────────────────────────
		   0x01107F14:  000050E3     CMPS r0, r0, 0x0
		   0x01107F18:  5200000A     BEQ $+0x150  // if (==) goto 0x01108068
		   // 
		   // ──── Block 23 else (!=) ────────────────────
		   0x01107F1C:  B0919FE5     LDR sb, [pc, 0x1b0]
		   0x01107F20:  0050A0E3     MOV r5, 0x0
		   0x01107F24:  09909FE7     LDR sb, [pc, sb]
		   0x01107F28:  A8A19FE5     LDR r10, [pc, 0x1a8]
		   0x01107F2C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01107F30:  A4B19FE5     LDR fp, [pc, 0x1a4]
		   0x01107F34:  0BB09FE7     LDR fp, [pc, fp]
		   0x01107F38:  000054E3     CMPS r0, r4, 0x0
		   0x01107F3C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107F44
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x01107F40:  224DF9EB     BL $-0x1acb70
		   // ──── Block 25 if (!=) ────────────────────
		   0x01107F44:  084094E5     LDR r4, [r4, 0x8]
		   0x01107F48:  000054E3     CMPS r0, r4, 0x0
		   0x01107F4C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107F54
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x01107F50:  1E4DF9EB     BL $-0x1acb80
		   // ──── Block 27 if (!=) ────────────────────
		   0x01107F54:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01107F58:  000055E1     CMPS r0, r5, r0
		   0x01107F5C:  250000AA     BGE $+0x9c  // if (>=) goto 0x01107FF8
		   // 
		   // ──── Block 28 else (<) ────────────────────
		   0x01107F60:  C84098E5     LDR r4, [r8, 0xc8]
		   0x01107F64:  000054E3     CMPS r0, r4, 0x0
		   0x01107F68:  0400A0E1     MOV r0, r4
		   0x01107F6C:  0300001A     BNE $+0x14  // if (!=) goto 0x01107F80
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x01107F70:  164DF9EB     BL $-0x1acba0
		   0x01107F74:  C80098E5     LDR r0, [r8, 0xc8]
		   0x01107F78:  000050E3     CMPS r0, r0, 0x0
		   0x01107F7C:  4E00000A     BEQ $+0x140  // if (==) goto 0x011080BC
		   // 
		   // ──── Block 30 (from 2 paths) ──────────────────
		   0x01107F80:  087090E5     LDR r7, [r0, 0x8]
		   0x01107F84:  086094E5     LDR r6, [r4, 0x8]
		   0x01107F88:  000057E3     CMPS r0, r7, 0x0
		   0x01107F8C:  0000001A     BNE $+0x8  // if (!=) goto 0x01107F94
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x01107F90:  0E4DF9EB     BL $-0x1acbc0
		   // ──── Block 32 if (!=) ────────────────────
		   0x01107F94:  002099E5     LDR r2, [sb]
		   0x01107F98:  0700A0E1     MOV r0, r7
		   0x01107F9C:  0510A0E1     MOV r1, r5
		   0x01107FA0:  56AA6BEB     BL $+0x1aea960  // CALL → List<object>.get_Item
		   0x01107FA4:  0070A0E1     MOV r7, r0
		   0x01107FA8:  000050E3     CMPS r0, r0, 0x0
		   0x01107FAC:  0000001A     BNE $+0x8  // if (!=) goto 0x01107FB4
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x01107FB0:  064DF9EB     BL $-0x1acbe0
		   // ──── Block 34 if (!=) ────────────────────
		   0x01107FB4:  00009AE5     LDR r0, [r10]
		   0x01107FB8:  084097E5     LDR r4, [r7, 0x8]
		   0x01107FBC:  004DF9EB     BL $-0x1acbf8
		   0x01107FC0:  0410A0E1     MOV r1, r4
		   0x01107FC4:  0070A0E1     MOV r7, r0
		   0x01107FC8:  C1F1FFEB     BL $-0x38f4
		   0x01107FCC:  000056E3     CMPS r0, r6, 0x0
		   0x01107FD0:  0000001A     BNE $+0x8  // if (!=) goto 0x01107FD8
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x01107FD4:  FD4CF9EB     BL $-0x1acc04
		   // ──── Block 36 if (!=) ────────────────────
		   0x01107FD8:  00309BE5     LDR r3, [fp]
		   0x01107FDC:  0600A0E1     MOV r0, r6
		   0x01107FE0:  0510A0E1     MOV r1, r5
		   0x01107FE4:  0720A0E1     MOV r2, r7
		   0x01107FE8:  57AA6BEB     BL $+0x1aea964  // CALL → List<object>.set_Item
		   0x01107FEC:  C84098E5     LDR r4, [r8, 0xc8]
		   0x01107FF0:  015085E2     ADD r5, r5, 0x1
		   0x01107FF4:  CFFFFFEA     B $-0xbc
		   // ──── Block 37 if (>=) ────────────────────
		   0x01107FF8:  C84098E5     LDR r4, [r8, 0xc8]
		   0x01107FFC:  A05098E5     LDR r5, [r8, 0xa0]
		   0x01108000:  000054E3     CMPS r0, r4, 0x0
		   0x01108004:  0000001A     BNE $+0x8  // if (!=) goto 0x0110800C
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x01108008:  F04CF9EB     BL $-0x1acc38
		   // ──── Block 39 if (!=) ────────────────────
		   0x0110800C:  086094E5     LDR r6, [r4, 0x8]
		   0x01108010:  000055E3     CMPS r0, r5, 0x0
		   0x01108014:  0000001A     BNE $+0x8  // if (!=) goto 0x0110801C
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x01108018:  EC4CF9EB     BL $-0x1acc48
		   // ──── Block 41 if (!=) ────────────────────
		   0x0110801C:  0500A0E1     MOV r0, r5
		   0x01108020:  0610A0E1     MOV r1, r6
		   0x01108024:  0020A0E3     MOV r2, 0x0
		   0x01108028:  DAF2FFEB     BL $-0x3490
		   0x0110802C:  0800A0E1     MOV r0, r8
		   0x01108030:  40F8FFEB     BL $-0x1ef8
		   0x01108034:  D40098E5     LDR r0, [r8, 0xd4]
		   0x01108038:  000050E3     CMPS r0, r0, 0x0
		   0x0110803C:  0300000A     BEQ $+0x14  // if (==) goto 0x01108050
		   // 
		   // ──── Block 42 else (!=) ────────────────────
		   0x01108040:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01108044:  141090E5     LDR r1, [r0, 0x14]
		   0x01108048:  200090E5     LDR r0, [r0, 0x20]
		   0x0110804C:  32FF2FE1     BLX r2  // virtual call: Item.ToString
		   // ──── Block 43 if (==) ────────────────────
		   0x01108050:  0800A0E1     MOV r0, r8
		   0x01108054:  D5F9FFEB     BL $-0x18a4
		   0x01108058:  341098E5     LDR r1, [r8, 0x34]
		   0x0110805C:  C82098E5     LDR r2, [r8, 0xc8]
		   0x01108060:  85FAFFEB     BL $-0x15e4
		   0x01108064:  6FFFFFEA     B $-0x23c
		   // ──── Block 44 if (==) ────────────────────
		   0x01108068:  70409FE5     LDR r4, [pc, 0x70]
		   0x0110806C:  04408FE0     ADD r4, pc, r4
		   0x01108070:  0000D4E5     LDRB r0, [r4]
		   0x01108074:  000050E3     CMPS r0, r0, 0x0
		   0x01108078:  0400001A     BNE $+0x18  // if (!=) goto 0x01108090
		   // 
		   // ──── Block 45 else (==) ────────────────────
		   0x0110807C:  60009FE5     LDR r0, [pc, 0x60]
		   0x01108080:  00009FE7     LDR r0, [pc, r0]
		   0x01108084:  354CF9EB     BL $-0x1acf24
		   0x01108088:  0100A0E3     MOV r0, 0x1
		   0x0110808C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 46 if (!=) ────────────────────
		   0x01108090:  50009FE5     LDR r0, [pc, 0x50]
		   0x01108094:  00009FE7     LDR r0, [pc, r0]
		   0x01108098:  000090E5     LDR r0, [r0]
		   0x0110809C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011080A0:  D020C0E1     LDRD r2, r3, [r0]
		   0x011080A4:  0800A0E1     MOV r0, r8
		   0x011080A8:  0210A0E1     MOV r1, r2
		   0x011080AC:  0320A0E1     MOV r2, r3
		   0x011080B0:  04D08DE2     ADD sp, sp, 0x4
		   0x011080B4:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011080B8:  ECF9FFEA     B $-0x1848
		   // ──── Block 47 (from 3 paths) ──────────────────
		   0x011080BC:  C34CF9EB     BL $-0x1accec
		   0x011080C0:  2E401203     TSTSEQ r4, r2, 0x2e
		   0x011080C4:  E81AF702     RSCSEQ r1, r7, 0xe8000
		   0x011080C8:  2C1AF702     RSCSEQ r1, r7, 0x2c000
		   0x011080CC:  781AF702     RSCSEQ r1, r7, 0x78000
		   0x011080D0:  FC1AF702     RSCSEQ r1, r7, 0xfc000
		   0x011080D4:  1819F702     RSCSEQ r1, r7, 0x60000
		   0x011080D8:  6819F702     RSCSEQ r1, r7, 0x1a0000
		   0x011080DC:  9819F702     RSCSEQ r1, r7, 0x260000
		   0x011080E0:  C7371203     TSTSEQ r3, r2, 0x31c0000
		   0x011080E4:  60EDF602     RSCSEQ lr, r6, 0x1800
		   0x011080E8:  4CEDF602     RSCSEQ lr, r6, 0x1300
		*/
	}

	// RVA: 0x1106870 Offset: 0x1106870 VA: 0x1106870
	private void DestroyItem(Vector2 delta) {
		/* Disassembly (ARM32, 131 instructions, 0x20C bytes):
		   // CFG: 30 blocks, 30 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106870:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01106874:  1CD04DE2     SUB sp, sp, 0x1c
		   0x01106878:  00A0A0E1     MOV r10, r0
		   0x0110687C:  0000A0E3     MOV r0, 0x0
		   0x01106880:  4100CAE5     STRB r0, [r10, 0x41]  // vtable: Object.Equals
		   0x01106884:  B400DAE5     LDRB r0, [r10, 0xb4]  // vtable: Object.Equals
		   0x01106888:  10709AE5     LDR r7, [r10, 0x10]
		   0x0110688C:  000050E3     CMPS r0, r0, 0x0
		   0x01106890:  2600000A     BEQ $+0xa0  // if (==) goto 0x01106930
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01106894:  0280A0E1     MOV r8, r2
		   0x01106898:  0190A0E1     MOV sb, r1
		   0x0110689C:  000057E3     CMPS r0, r7, 0x0
		   0x011068A0:  0000001A     BNE $+0x8  // if (!=) goto 0x011068A8
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x011068A4:  C952F9EB     BL $-0x1ab4d4
		   // ──── Block 3 if (!=) ────────────────────
		   0x011068A8:  0700A0E1     MOV r0, r7
		   0x011068AC:  0010A0E3     MOV r1, 0x0
		   0x011068B0:  0020A0E3     MOV r2, 0x0
		   0x011068B4:  F118FFEB     BL $-0x39c34
		   0x011068B8:  A8409AE5     LDR r4, [r10, 0xa8]
		   0x011068BC:  000054E3     CMPS r0, r4, 0x0
		   0x011068C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011068C8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011068C4:  C152F9EB     BL $-0x1ab4f4
		   // ──── Block 5 if (!=) ────────────────────
		   0x011068C8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x011068CC:  C0609AE5     LDR r6, [r10, 0xc0]
		   0x011068D0:  000050E3     CMPS r0, r0, 0x0
		   0x011068D4:  2600000A     BEQ $+0xa0  // if (==) goto 0x01106974
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x011068D8:  A8709AE5     LDR r7, [r10, 0xa8]
		   0x011068DC:  000057E3     CMPS r0, r7, 0x0
		   0x011068E0:  0000001A     BNE $+0x8  // if (!=) goto 0x011068E8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x011068E4:  B952F9EB     BL $-0x1ab514
		   // ──── Block 8 if (!=) ────────────────────
		   0x011068E8:  0C1097E5     LDR r1, [r7, 0xc]
		   0x011068EC:  0000A0E3     MOV r0, 0x0
		   0x011068F0:  0020A0E3     MOV r2, 0x0
		   0x011068F4:  9078FCEB     BL $-0xe1db8
		   0x011068F8:  0050A0E1     MOV r5, r0
		   0x011068FC:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01106900:  050050E1     CMPS r0, r0, r5
		   0x01106904:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110690C
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x01106908:  B152F9EB     BL $-0x1ab534
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x0110690C:  050187E0     ADD r0, r7, r5, lsl 2
		   0x01106910:  107090E5     LDR r7, [r0, 0x10]
		   0x01106914:  000057E3     CMPS r0, r7, 0x0
		   0x01106918:  0000001A     BNE $+0x8  // if (!=) goto 0x01106920
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110691C:  AB52F9EB     BL $-0x1ab54c
		   // ──── Block 12 if (!=) ────────────────────
		   0x01106920:  10509AE5     LDR r5, [r10, 0x10]
		   0x01106924:  44409AE5     LDR r4, [r10, 0x44]
		   0x01106928:  18B097E5     LDR fp, [r7, 0x18]
		   0x0110692C:  1B0000EA     B $+0x74  // goto 0x011069A0
		   // ──── Block 13 if (==) ────────────────────
		   0x01106930:  000057E3     CMPS r0, r7, 0x0
		   0x01106934:  0000001A     BNE $+0x8  // if (!=) goto 0x0110693C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01106938:  A452F9EB     BL $-0x1ab568
		   // ──── Block 15 if (!=) ────────────────────
		   0x0110693C:  0700A0E1     MOV r0, r7
		   0x01106940:  0010A0E3     MOV r1, 0x0
		   0x01106944:  0020A0E3     MOV r2, 0x0
		   0x01106948:  CC18FFEB     BL $-0x39cc8
		   0x0110694C:  C0409AE5     LDR r4, [r10, 0xc0]
		   0x01106950:  000054E3     CMPS r0, r4, 0x0
		   0x01106954:  0000001A     BNE $+0x8  // if (!=) goto 0x0110695C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x01106958:  9C52F9EB     BL $-0x1ab588
		   // ──── Block 17 if (!=) ────────────────────
		   0x0110695C:  0C7094E5     LDR r7, [r4, 0xc]
		   0x01106960:  0010A0E3     MOV r1, 0x0
		   0x01106964:  143094E5     LDR r3, [r4, 0x14]
		   0x01106968:  0020A0E3     MOV r2, 0x0
		   0x0110696C:  200094E5     LDR r0, [r4, 0x20]
		   0x01106970:  1E0000EA     B $+0x80  // goto 0x011069F0
		   // ──── Block 18 if (==) ────────────────────
		   0x01106974:  0000A0E3     MOV r0, 0x0
		   0x01106978:  9E0800EB     BL $+0x2280  // CALL → ContainerDataStorage.get_EnergyConsumptionMode
		   0x0110697C:  0010A0E1     MOV r1, r0
		   0x01106980:  00009AE5     LDR r0, [r10]
		   0x01106984:  403290E5     LDR r3, [r0, 0x240]
		   0x01106988:  442290E5     LDR r2, [r0, 0x244]
		   0x0110698C:  0A00A0E1     MOV r0, r10
		   0x01106990:  33FF2FE1     BLX r3  // virtual call: vtable+0x240
		   0x01106994:  00B0A0E1     MOV fp, r0
		   0x01106998:  10509AE5     LDR r5, [r10, 0x10]
		   0x0110699C:  44409AE5     LDR r4, [r10, 0x44]
		   // ──── Block 19 ──────────────────────────────
		   0x011069A0:  000054E3     CMPS r0, r4, 0x0
		   0x011069A4:  0000001A     BNE $+0x8  // if (!=) goto 0x011069AC
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x011069A8:  8852F9EB     BL $-0x1ab5d8
		   // ──── Block 21 if (!=) ────────────────────
		   0x011069AC:  0C7094E5     LDR r7, [r4, 0xc]
		   0x011069B0:  0820A0E1     MOV r2, r8
		   0x011069B4:  200094E5     LDR r0, [r4, 0x20]
		   0x011069B8:  0530A0E1     MOV r3, r5
		   0x011069BC:  141094E5     LDR r1, [r4, 0x14]
		   0x011069C0:  00108DE5     STR r1, [sp]
		   0x011069C4:  0910A0E1     MOV r1, sb
		   0x011069C8:  37FF2FE1     BLX r7  // virtual call: Item.ToString
		   0x011069CC:  0050A0E1     MOV r5, r0
		   0x011069D0:  000056E3     CMPS r0, r6, 0x0
		   0x011069D4:  0000001A     BNE $+0x8  // if (!=) goto 0x011069DC
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x011069D8:  7C52F9EB     BL $-0x1ab608
		   // ──── Block 23 if (!=) ────────────────────
		   0x011069DC:  0C7096E5     LDR r7, [r6, 0xc]
		   0x011069E0:  0B10A0E1     MOV r1, fp
		   0x011069E4:  143096E5     LDR r3, [r6, 0x14]
		   0x011069E8:  0520A0E1     MOV r2, r5
		   0x011069EC:  200096E5     LDR r0, [r6, 0x20]
		   // ──── Block 24 ──────────────────────────────
		   0x011069F0:  37FF2FE1     BLX r7
		   0x011069F4:  0A00A0E1     MOV r0, r10
		   0x011069F8:  0010A0E3     MOV r1, 0x0
		   0x011069FC:  2AC53BEB     BL $+0xef14b0  // CALL → sub_1FF7EAC
		   0x01106A00:  0050A0E1     MOV r5, r0
		   0x01106A04:  000050E3     CMPS r0, r0, 0x0
		   0x01106A08:  0000001A     BNE $+0x8  // if (!=) goto 0x01106A10
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01106A0C:  6F52F9EB     BL $-0x1ab63c
		   // ──── Block 26 if (!=) ────────────────────
		   0x01106A10:  10008DE2     ADD r0, sp, 0x10
		   0x01106A14:  0510A0E1     MOV r1, r5
		   0x01106A18:  0020A0E3     MOV r2, 0x0
		   0x01106A1C:  0080A0E3     MOV r8, 0x0
		   0x01106A20:  DFC53BEB     BL $+0xef1784  // CALL → sub_1FF81A4
		   0x01106A24:  10708DE2     ADD r7, sp, 0x10
		   0x01106A28:  10409AE5     LDR r4, [r10, 0x10]
		   0x01106A2C:  E00097E8     LDM r7, {r5, r6, r7}
		   0x01106A30:  000054E3     CMPS r0, r4, 0x0
		   0x01106A34:  0400A0E1     MOV r0, r4
		   0x01106A38:  0300001A     BNE $+0x14  // if (!=) goto 0x01106A4C
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x01106A3C:  6352F9EB     BL $-0x1ab66c
		   0x01106A40:  10009AE5     LDR r0, [r10, 0x10]
		   0x01106A44:  000050E3     CMPS r0, r0, 0x0
		   0x01106A48:  0A00000A     BEQ $+0x30  // if (==) goto 0x01106A78
		   // 
		   // ──── Block 28 (from 2 paths) ──────────────────
		   0x01106A4C:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x01106A50:  0620A0E1     MOV r2, r6
		   0x01106A54:  1C1094E5     LDR r1, [r4, 0x1c]
		   0x01106A58:  0730A0E1     MOV r3, r7
		   0x01106A5C:  00108DE5     STR r1, [sp]
		   0x01106A60:  0510A0E1     MOV r1, r5
		   0x01106A64:  01018DE9     STMIA sp, {r0, r8}
		   0x01106A68:  0200A0E3     MOV r0, 0x2
		   0x01106A6C:  24E3FFEB     BL $-0x7368
		   0x01106A70:  1CD08DE2     ADD sp, sp, 0x1c
		   0x01106A74:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 29 if (==) ────────────────────
		   0x01106A78:  5452F9EB     BL $-0x1ab6a8
		*/
	}

	// RVA: 0x1105E50 Offset: 0x1105E50 VA: 0x1105E50
	private void InitFillData(ItemData data) {
		/* Disassembly (ARM32, 33 instructions, 0x84 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105E50:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01105E54:  2CD04DE2     SUB sp, sp, 0x2c
		   0x01105E58:  9C529FE5     LDR r5, [pc, 0x29c]
		   0x01105E5C:  0040A0E1     MOV r4, r0
		   0x01105E60:  0160A0E1     MOV r6, r1
		   0x01105E64:  05508FE0     ADD r5, pc, r5
		   0x01105E68:  0000D5E5     LDRB r0, [r5]
		   0x01105E6C:  000050E3     CMPS r0, r0, 0x0
		   0x01105E70:  1600001A     BNE $+0x60  // if (!=) goto 0x01105ED0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105E74:  84029FE5     LDR r0, [pc, 0x284]
		   0x01105E78:  00009FE7     LDR r0, [pc, r0]
		   0x01105E7C:  B754F9EB     BL $-0x1aad1c
		   0x01105E80:  7C029FE5     LDR r0, [pc, 0x27c]
		   0x01105E84:  00009FE7     LDR r0, [pc, r0]
		   0x01105E88:  B454F9EB     BL $-0x1aad28
		   0x01105E8C:  74029FE5     LDR r0, [pc, 0x274]
		   0x01105E90:  00009FE7     LDR r0, [pc, r0]
		   0x01105E94:  B154F9EB     BL $-0x1aad34
		   0x01105E98:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x01105E9C:  00009FE7     LDR r0, [pc, r0]
		   0x01105EA0:  AE54F9EB     BL $-0x1aad40
		   0x01105EA4:  64029FE5     LDR r0, [pc, 0x264]
		   0x01105EA8:  00009FE7     LDR r0, [pc, r0]
		   0x01105EAC:  AB54F9EB     BL $-0x1aad4c
		   0x01105EB0:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x01105EB4:  00009FE7     LDR r0, [pc, r0]
		   0x01105EB8:  A854F9EB     BL $-0x1aad58
		   0x01105EBC:  54029FE5     LDR r0, [pc, 0x254]
		   0x01105EC0:  00009FE7     LDR r0, [pc, r0]
		   0x01105EC4:  A554F9EB     BL $-0x1aad64
		   0x01105EC8:  0100A0E3     MOV r0, 0x1
		   0x01105ECC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105ED0:  341094E5     LDR r1, [r4, 0x34]
		*/
	}

	// RVA: 0x1105DD8 Offset: 0x1105DD8 VA: 0x1105DD8
	private void InitChargeData() {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105DD8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01105DDC:  60509FE5     LDR r5, [pc, 0x60]
		   0x01105DE0:  0040A0E1     MOV r4, r0
		   0x01105DE4:  05508FE0     ADD r5, pc, r5
		   0x01105DE8:  0000D5E5     LDRB r0, [r5]
		   0x01105DEC:  000050E3     CMPS r0, r0, 0x0
		   0x01105DF0:  0400001A     BNE $+0x18  // if (!=) goto 0x01105E08
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105DF4:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x01105DF8:  00009FE7     LDR r0, [pc, r0]
		   0x01105DFC:  D754F9EB     BL $-0x1aac9c
		   0x01105E00:  0100A0E3     MOV r0, 0x1
		   0x01105E04:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105E08:  340094E5     LDR r0, [r4, 0x34]
		   0x01105E0C:  0010A0E3     MOV r1, 0x0
		   0x01105E10:  1A0C00EB     BL $+0x3070  // CALL → ContainerDataStorage.GetContainerCharges
		   0x01105E14:  000050E3     CMPS r0, r0, 0x0
		   0x01105E18:  D00084E5     STR r0, [r4, 0xd0]
		   0x01105E1C:  3088BD18     POPNE {r4, r5, fp, pc}
		   0x01105E20:  24009FE5     LDR r0, [pc, 0x24]
		   0x01105E24:  00009FE7     LDR r0, [pc, r0]
		   0x01105E28:  000090E5     LDR r0, [r0]
		   0x01105E2C:  6455F9EB     BL $-0x1aaa68
		   0x01105E30:  0010A0E3     MOV r1, 0x0
		   0x01105E34:  0050A0E1     MOV r5, r0
		   0x01105E38:  F70A00EB     BL $+0x2be4  // CALL → ChargeData..ctor
		   0x01105E3C:  D05084E5     STR r5, [r4, 0xd0]
		   0x01105E40:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x11067B0 Offset: 0x11067B0 VA: 0x11067B0
	private void UpdateSprite() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011067B0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x011067B4:  A8409FE5     LDR r4, [pc, 0xa8]
		   0x011067B8:  0060A0E1     MOV r6, r0
		   0x011067BC:  04408FE0     ADD r4, pc, r4
		   0x011067C0:  0000D4E5     LDRB r0, [r4]
		   0x011067C4:  000050E3     CMPS r0, r0, 0x0
		   0x011067C8:  0400001A     BNE $+0x18  // if (!=) goto 0x011067E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011067CC:  94009FE5     LDR r0, [pc, 0x94]
		   0x011067D0:  00009FE7     LDR r0, [pc, r0]
		   0x011067D4:  6152F9EB     BL $-0x1ab674
		   0x011067D8:  0100A0E3     MOV r0, 0x1
		   0x011067DC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011067E0:  0600A0E1     MOV r0, r6
		   0x011067E4:  99FFFFEB     BL $-0x194
		   0x011067E8:  0070A0E1     MOV r7, r0
		   0x011067EC:  844096E5     LDR r4, [r6, 0x84]
		   0x011067F0:  74009FE5     LDR r0, [pc, 0x74]
		   0x011067F4:  00009FE7     LDR r0, [pc, r0]
		   0x011067F8:  000090E5     LDR r0, [r0]
		   0x011067FC:  F052F9EB     BL $-0x1ab438
		   0x01106800:  0050A0E1     MOV r5, r0
		   0x01106804:  000096E5     LDR r0, [r6]
		   0x01106808:  0610A0E1     MOV r1, r6
		   0x0110680C:  0030A0E3     MOV r3, 0x0
		   0x01106810:  7C2190E5     LDR r2, [r0, 0x17c]
		   0x01106814:  0500A0E1     MOV r0, r5
		   0x01106818:  8A7F52EB     BL $+0x149fe30  // CALL → Action<object>..ctor
		   0x0110681C:  000057E3     CMPS r0, r7, 0x0
		   0x01106820:  0700000A     BEQ $+0x24  // if (==) goto 0x01106844
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01106824:  000054E3     CMPS r0, r4, 0x0
		   0x01106828:  0000001A     BNE $+0x8  // if (!=) goto 0x01106830
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110682C:  E752F9EB     BL $-0x1ab45c
		   // ──── Block 5 if (!=) ────────────────────
		   0x01106830:  0400A0E1     MOV r0, r4
		   0x01106834:  0510A0E1     MOV r1, r5
		   0x01106838:  0020A0E3     MOV r2, 0x0
		   0x0110683C:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x01106840:  2F3B00EA     B $+0xecc4  // TAIL CALL → ItemData.GetChargedSprite
		   // ──── Block 6 if (==) ────────────────────
		   0x01106844:  000054E3     CMPS r0, r4, 0x0
		   0x01106848:  0000001A     BNE $+0x8  // if (!=) goto 0x01106850
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110684C:  DF52F9EB     BL $-0x1ab47c
		   // ──── Block 8 if (!=) ────────────────────
		   0x01106850:  0400A0E1     MOV r0, r4
		   0x01106854:  0510A0E1     MOV r1, r5
		   0x01106858:  0020A0E3     MOV r2, 0x0
		   0x0110685C:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x01106860:  E40F00EA     B $+0x3f98  // TAIL CALL → ItemData.GetSprite
		   0x01106864:  0D561203     TSTSEQ r5, r2, 0xd00000
		   0x01106868:  0C1DF702     RSCSEQ r1, r7, 0x300
		   0x0110686C:  E81CF702     RSCSEQ r1, r7, 0xe800
		*/
	}

	// RVA: 0x1108200 Offset: 0x1108200 VA: 0x1108200
	private void OnApplicationPause(bool pauseStatus) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108200:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01108204:  000051E3     CMPS r0, r1, 0x0
		   0x01108208:  0000000A     BEQ $+0x8  // if (==) goto 0x01108210
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110820C:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 2 if (==) ────────────────────
		   0x01108210:  0040A0E1     MOV r4, r0
		   0x01108214:  000090E5     LDR r0, [r0]
		   0x01108218:  D02EC0E1     LDRD r2, r3, [r0, 0xe0]
		   0x0110821C:  0400A0E1     MOV r0, r4
		   0x01108220:  0310A0E1     MOV r1, r3
		   0x01108224:  32FF2FE1     BLX r2
		   0x01108228:  000050E3     CMPS r0, r0, 0x0
		   0x0110822C:  3088BD08     POPEQ {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1108254 Offset: 0x1108254 VA: 0x1108254
	private bool IsItCooldownAfterFill() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108254:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01108258:  CC5090E5     LDR r5, [r0, 0xcc]
		   0x0110825C:  0040A0E1     MOV r4, r0
		   0x01108260:  000055E3     CMPS r0, r5, 0x0
		   0x01108264:  0000001A     BNE $+0x8  // if (!=) goto 0x0110826C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108268:  584CF9EB     BL $-0x1ace98
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110826C:  D06094E5     LDR r6, [r4, 0xd0]
		   0x01108270:  085095E5     LDR r5, [r5, 0x8]
		   0x01108274:  000056E3     CMPS r0, r6, 0x0
		   0x01108278:  0000001A     BNE $+0x8  // if (!=) goto 0x01108280
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110827C:  534CF9EB     BL $-0x1aceac
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108280:  081096E5     LDR r1, [r6, 0x8]
		   0x01108284:  0000A0E3     MOV r0, 0x0
		   0x01108288:  010055E1     CMPS r0, r5, r1
		   0x0110828C:  0C00001A     BNE $+0x38  // if (!=) goto 0x011082C4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01108290:  CC5094E5     LDR r5, [r4, 0xcc]
		   0x01108294:  000055E3     CMPS r0, r5, 0x0
		   0x01108298:  0000001A     BNE $+0x8  // if (!=) goto 0x011082A0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110829C:  4B4CF9EB     BL $-0x1acecc
		   // ──── Block 7 if (!=) ────────────────────
		   0x011082A0:  D06094E5     LDR r6, [r4, 0xd0]
		   0x011082A4:  0C4095E5     LDR r4, [r5, 0xc]
		   0x011082A8:  000056E3     CMPS r0, r6, 0x0
		   0x011082AC:  0000001A     BNE $+0x8  // if (!=) goto 0x011082B4
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x011082B0:  464CF9EB     BL $-0x1acee0
		   // ──── Block 9 if (!=) ────────────────────
		   0x011082B4:  0C0096E5     LDR r0, [r6, 0xc]
		   0x011082B8:  000044E0     SUB r0, r4, r0
		   0x011082BC:  100F6FE1     CLZ r0, r0
		   0x011082C0:  A002A0E1     MOV r0, r0, r0, lsr 5
		   // ──── Block 10 if (!=) ────────────────────
		   0x011082C4:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x11080EC Offset: 0x11080EC VA: 0x11080EC
	private ChargeableContainerFillData GetFillData(int id) {
		/* Disassembly (ARM32, 69 instructions, 0x114 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011080EC:  10402DE9     PUSH {r4, lr}
		   0x011080F0:  08D04DE2     SUB sp, sp, 0x8
		   0x011080F4:  E0409FE5     LDR r4, [pc, 0xe0]
		   0x011080F8:  04108DE5     STR r1, [sp, 0x4]
		   0x011080FC:  04408FE0     ADD r4, pc, r4
		   0x01108100:  0000D4E5     LDRB r0, [r4]
		   0x01108104:  000050E3     CMPS r0, r0, 0x0
		   0x01108108:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01108144
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110810C:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01108110:  00009FE7     LDR r0, [pc, r0]
		   0x01108114:  114CF9EB     BL $-0x1acfb4
		   0x01108118:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0110811C:  00009FE7     LDR r0, [pc, r0]
		   0x01108120:  0E4CF9EB     BL $-0x1acfc0
		   0x01108124:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01108128:  00009FE7     LDR r0, [pc, r0]
		   0x0110812C:  0B4CF9EB     BL $-0x1acfcc
		   0x01108130:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01108134:  00009FE7     LDR r0, [pc, r0]
		   0x01108138:  084CF9EB     BL $-0x1acfd8
		   0x0110813C:  0100A0E3     MOV r0, 0x1
		   0x01108140:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108144:  04008DE2     ADD r0, sp, 0x4
		   0x01108148:  0010A0E3     MOV r1, 0x0
		   0x0110814C:  B5F07CEB     BL $+0x1f3c2dc  // CALL → Int32.ToString
		   0x01108150:  0010A0E1     MOV r1, r0
		   0x01108154:  94009FE5     LDR r0, [pc, 0x94]
		   0x01108158:  0020A0E3     MOV r2, 0x0
		   0x0110815C:  00009FE7     LDR r0, [pc, r0]
		   0x01108160:  000090E5     LDR r0, [r0]
		   0x01108164:  750576EB     BL $+0x1d815dc  // CALL → String.Concat
		   0x01108168:  0040A0E1     MOV r4, r0
		   0x0110816C:  80009FE5     LDR r0, [pc, 0x80]
		   0x01108170:  00009FE7     LDR r0, [pc, r0]
		   0x01108174:  000090E5     LDR r0, [r0]
		   0x01108178:  741090E5     LDR r1, [r0, 0x74]
		   0x0110817C:  000051E3     CMPS r0, r1, 0x0
		   0x01108180:  0000001A     BNE $+0x8  // if (!=) goto 0x01108188
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01108184:  424CF9EB     BL $-0x1acef0
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108188:  0400A0E1     MOV r0, r4
		   0x0110818C:  0010A0E3     MOV r1, 0x0
		   0x01108190:  0020A0E3     MOV r2, 0x0
		   0x01108194:  0030A0E3     MOV r3, 0x0
		   0x01108198:  7A06FEEB     BL $-0x7e610
		   0x0110819C:  0040A0E1     MOV r4, r0
		   0x011081A0:  50009FE5     LDR r0, [pc, 0x50]
		   0x011081A4:  00009FE7     LDR r0, [pc, r0]
		   0x011081A8:  000090E5     LDR r0, [r0]
		   0x011081AC:  741090E5     LDR r1, [r0, 0x74]
		   0x011081B0:  000051E3     CMPS r0, r1, 0x0
		   0x011081B4:  0000001A     BNE $+0x8  // if (!=) goto 0x011081BC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011081B8:  354CF9EB     BL $-0x1acf24
		   // ──── Block 6 if (!=) ────────────────────
		   0x011081BC:  38009FE5     LDR r0, [pc, 0x38]
		   0x011081C0:  0110A0E3     MOV r1, 0x1
		   0x011081C4:  00009FE7     LDR r0, [pc, r0]
		   0x011081C8:  002090E5     LDR r2, [r0]
		   0x011081CC:  0400A0E1     MOV r0, r4
		   0x011081D0:  38D922EB     BL $+0x8b64e8  // CALL → JsonUtil.Deserialize<object>
		   0x011081D4:  08D08DE2     ADD sp, sp, 0x8
		   0x011081D8:  1080BDE8     POP {r4, pc}
		   0x011081DC:  CE3C1203     TSTSEQ r3, r2, 0xce00
		   0x011081E0:  28F5F602     RSCSEQ pc, r6, 0xa000000
		   0x011081E4:  B417F702     RSCSEQ r1, r7, 0x2d00000
		   0x011081E8:  18F9F602     RSCSEQ pc, r6, 0x60000
		   0x011081EC:  7017F702     RSCSEQ r1, r7, 0x1c00000
		   0x011081F0:  4817F702     RSCSEQ r1, r7, 0x1200000
		   0x011081F4:  C8F4F602     RSCSEQ pc, r6, 0xc8000000
		   0x011081F8:  9CF8F602     RSCSEQ pc, r6, 0x9c0000
		   0x011081FC:  0C17F702     RSCSEQ r1, r7, 0x300000
		*/
	}

	// RVA: 0x1106A7C Offset: 0x1106A7C VA: 0x1106A7C
	private void SetFillData(int id, ChargeableContainerFillData fillData) {
		/* Disassembly (ARM32, 96 instructions, 0x180 bytes):
		   // CFG: 13 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01106A7C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01106A80:  08D04DE2     SUB sp, sp, 0x8
		   0x01106A84:  44519FE5     LDR r5, [pc, 0x144]
		   0x01106A88:  0240A0E1     MOV r4, r2
		   0x01106A8C:  04108DE5     STR r1, [sp, 0x4]
		   0x01106A90:  05508FE0     ADD r5, pc, r5
		   0x01106A94:  0000D5E5     LDRB r0, [r5]
		   0x01106A98:  000050E3     CMPS r0, r0, 0x0
		   0x01106A9C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01106AD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01106AA0:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x01106AA4:  00009FE7     LDR r0, [pc, r0]
		   0x01106AA8:  AC51F9EB     BL $-0x1ab948
		   0x01106AAC:  24019FE5     LDR r0, [pc, 0x124]
		   0x01106AB0:  00009FE7     LDR r0, [pc, r0]
		   0x01106AB4:  A951F9EB     BL $-0x1ab954
		   0x01106AB8:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x01106ABC:  00009FE7     LDR r0, [pc, r0]
		   0x01106AC0:  A651F9EB     BL $-0x1ab960
		   0x01106AC4:  14019FE5     LDR r0, [pc, 0x114]
		   0x01106AC8:  00009FE7     LDR r0, [pc, r0]
		   0x01106ACC:  A351F9EB     BL $-0x1ab96c
		   0x01106AD0:  0100A0E3     MOV r0, 0x1
		   0x01106AD4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01106AD8:  000054E3     CMPS r0, r4, 0x0
		   0x01106ADC:  2500000A     BEQ $+0x9c  // if (==) goto 0x01106B78
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01106AE0:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x01106AE4:  00009FE7     LDR r0, [pc, r0]
		   0x01106AE8:  000090E5     LDR r0, [r0]
		   0x01106AEC:  741090E5     LDR r1, [r0, 0x74]
		   0x01106AF0:  000051E3     CMPS r0, r1, 0x0
		   0x01106AF4:  0000001A     BNE $+0x8  // if (!=) goto 0x01106AFC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01106AF8:  E551F9EB     BL $-0x1ab864
		   // ──── Block 5 if (!=) ────────────────────
		   0x01106AFC:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x01106B00:  0110A0E3     MOV r1, 0x1
		   0x01106B04:  0020A0E3     MOV r2, 0x0
		   0x01106B08:  00009FE7     LDR r0, [pc, r0]
		   0x01106B0C:  003090E5     LDR r3, [r0]
		   0x01106B10:  0400A0E1     MOV r0, r4
		   0x01106B14:  4DE722EB     BL $+0x8b9d3c  // CALL → JsonUtil.Serialize<object>
		   0x01106B18:  0040A0E1     MOV r4, r0
		   0x01106B1C:  04008DE2     ADD r0, sp, 0x4
		   0x01106B20:  0010A0E3     MOV r1, 0x0
		   0x01106B24:  3FF67CEB     BL $+0x1f3d904  // CALL → Int32.ToString
		   0x01106B28:  0010A0E1     MOV r1, r0
		   0x01106B2C:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01106B30:  0020A0E3     MOV r2, 0x0
		   0x01106B34:  00009FE7     LDR r0, [pc, r0]
		   0x01106B38:  000090E5     LDR r0, [r0]
		   0x01106B3C:  FF0A76EB     BL $+0x1d82c04  // CALL → String.Concat
		   0x01106B40:  0050A0E1     MOV r5, r0
		   0x01106B44:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01106B48:  00009FE7     LDR r0, [pc, r0]
		   0x01106B4C:  000090E5     LDR r0, [r0]
		   0x01106B50:  741090E5     LDR r1, [r0, 0x74]
		   0x01106B54:  000051E3     CMPS r0, r1, 0x0
		   0x01106B58:  0000001A     BNE $+0x8  // if (!=) goto 0x01106B60
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01106B5C:  CC51F9EB     BL $-0x1ab8c8
		   // ──── Block 7 if (!=) ────────────────────
		   0x01106B60:  0500A0E1     MOV r0, r5
		   0x01106B64:  0410A0E1     MOV r1, r4
		   0x01106B68:  0020A0E3     MOV r2, 0x0
		   0x01106B6C:  0030A0E3     MOV r3, 0x0
		   0x01106B70:  E00CFEEB     BL $-0x7cc78
		   0x01106B74:  130000EA     B $+0x54  // goto 0x01106BC8
		   // ──── Block 8 if (==) ────────────────────
		   0x01106B78:  04008DE2     ADD r0, sp, 0x4
		   0x01106B7C:  0010A0E3     MOV r1, 0x0
		   0x01106B80:  28F67CEB     BL $+0x1f3d8a8  // CALL → Int32.ToString
		   0x01106B84:  0010A0E1     MOV r1, r0
		   0x01106B88:  64009FE5     LDR r0, [pc, 0x64]
		   0x01106B8C:  0020A0E3     MOV r2, 0x0
		   0x01106B90:  00009FE7     LDR r0, [pc, r0]
		   0x01106B94:  000090E5     LDR r0, [r0]
		   0x01106B98:  E80A76EB     BL $+0x1d82ba8  // CALL → String.Concat
		   0x01106B9C:  0040A0E1     MOV r4, r0
		   0x01106BA0:  50009FE5     LDR r0, [pc, 0x50]
		   0x01106BA4:  00009FE7     LDR r0, [pc, r0]
		   0x01106BA8:  000090E5     LDR r0, [r0]
		   0x01106BAC:  741090E5     LDR r1, [r0, 0x74]
		   0x01106BB0:  000051E3     CMPS r0, r1, 0x0
		   0x01106BB4:  0000001A     BNE $+0x8  // if (!=) goto 0x01106BBC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01106BB8:  B551F9EB     BL $-0x1ab924
		   // ──── Block 10 if (!=) ────────────────────
		   0x01106BBC:  0400A0E1     MOV r0, r4
		   0x01106BC0:  0010A0E3     MOV r1, 0x0
		   0x01106BC4:  0F51FEEB     BL $-0x6bbbc
		   // ──── Block 11 ──────────────────────────────
		   0x01106BC8:  08D08DE2     ADD sp, sp, 0x8
		   0x01106BCC:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01106BD0:  3B531203     TSTSEQ r5, r2, 0xec000000
		   0x01106BD4:  940BF702     RSCSEQ r0, r7, 0x25000
		   0x01106BD8:  F02DF702     RSCSEQ r2, r7, 0x3c00
		   0x01106BDC:  840FF702     RSCSEQ r0, r7, 0x210
		   0x01106BE0:  DC2DF702     RSCSEQ r2, r7, 0x3700
		   0x01106BE4:  5C0FF702     RSCSEQ r0, r7, 0x170
		   0x01106BE8:  982DF702     RSCSEQ r2, r7, 0x2600
		   0x01106BEC:  702DF702     RSCSEQ r2, r7, 0x1c00
		   0x01106BF0:  F00AF702     RSCSEQ r0, r7, 0xf0000
		   0x01106BF4:  142DF702     RSCSEQ r2, r7, 0x500
		   0x01106BF8:  940AF702     RSCSEQ r0, r7, 0x94000
		*/
	}

	// RVA: 0x11082C8 Offset: 0x11082C8 VA: 0x11082C8
	public static void ResetFillData(int id) {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011082C8:  10402DE9     PUSH {r4, lr}
		   0x011082CC:  08D04DE2     SUB sp, sp, 0x8
		   0x011082D0:  88409FE5     LDR r4, [pc, 0x88]
		   0x011082D4:  04008DE5     STR r0, [sp, 0x4]
		   0x011082D8:  04408FE0     ADD r4, pc, r4
		   0x011082DC:  0010D4E5     LDRB r1, [r4]
		   0x011082E0:  000051E3     CMPS r0, r1, 0x0
		   0x011082E4:  0700001A     BNE $+0x24  // if (!=) goto 0x01108308
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011082E8:  74009FE5     LDR r0, [pc, 0x74]
		   0x011082EC:  00009FE7     LDR r0, [pc, r0]
		   0x011082F0:  9A4BF9EB     BL $-0x1ad190
		   0x011082F4:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x011082F8:  00009FE7     LDR r0, [pc, r0]
		   0x011082FC:  974BF9EB     BL $-0x1ad19c
		   0x01108300:  0100A0E3     MOV r0, 0x1
		   0x01108304:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108308:  04008DE2     ADD r0, sp, 0x4
		   0x0110830C:  0010A0E3     MOV r1, 0x0
		   0x01108310:  44F07CEB     BL $+0x1f3c118  // CALL → Int32.ToString
		   0x01108314:  0010A0E1     MOV r1, r0
		   0x01108318:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x0110831C:  0020A0E3     MOV r2, 0x0
		   0x01108320:  00009FE7     LDR r0, [pc, r0]
		   0x01108324:  000090E5     LDR r0, [r0]
		   0x01108328:  040576EB     BL $+0x1d81418  // CALL → String.Concat
		   0x0110832C:  0040A0E1     MOV r4, r0
		   0x01108330:  38009FE5     LDR r0, [pc, 0x38]
		   0x01108334:  00009FE7     LDR r0, [pc, r0]
		   0x01108338:  000090E5     LDR r0, [r0]
		   0x0110833C:  741090E5     LDR r1, [r0, 0x74]
		   0x01108340:  000051E3     CMPS r0, r1, 0x0
		   0x01108344:  0000001A     BNE $+0x8  // if (!=) goto 0x0110834C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01108348:  D14BF9EB     BL $-0x1ad0b4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110834C:  0400A0E1     MOV r0, r4
		   0x01108350:  0010A0E3     MOV r1, 0x0
		   0x01108354:  2B4BFEEB     BL $-0x6d34c
		   0x01108358:  08D08DE2     ADD sp, sp, 0x8
		   0x0110835C:  1080BDE8     POP {r4, pc}
		   0x01108360:  F43A1203     TSTSEQ r3, r2, 0xf4000
		   0x01108364:  4CF3F602     RSCSEQ pc, r6, 0x30000001
		   0x01108368:  AC15F702     RSCSEQ r1, r7, 0x2b000000
		   0x0110836C:  8415F702     RSCSEQ r1, r7, 0x21000000
		   0x01108370:  04F3F602     RSCSEQ pc, r6, 0x10000000
		*/
	}

	// RVA: 0x1108374 Offset: 0x1108374 VA: 0x1108374
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01108374:  0010A0E3     MOV r1, 0x0
		   0x01108378:  821C00EA     B $+0x7210  // TAIL CALL → ItemMerging..ctor
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110837C Offset: 0x110837C VA: 0x110837C
	private void <SetItemData>b__59_0() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110837C:  10402DE9     PUSH {r4, lr}
		   0x01108380:  E04090E5     LDR r4, [r0, 0xe0]
		   0x01108384:  000054E3     CMPS r0, r4, 0x0
		   0x01108388:  0000001A     BNE $+0x8  // if (!=) goto 0x01108390
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110838C:  0F4CF9EB     BL $-0x1acfbc
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108390:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01108394:  141094E5     LDR r1, [r4, 0x14]
		   0x01108398:  200094E5     LDR r0, [r4, 0x20]
		   0x0110839C:  1040BDE8     POP {r4, lr}
		   0x011083A0:  12FF2FE1     BX r2
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11083A4 Offset: 0x11083A4 VA: 0x11083A4
	private Cell <SetItemData>b__59_1(Vector2 v, Cell c) {
		/* Disassembly (ARM32, 19 instructions, 0x4C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011083A4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x011083A8:  08D04DE2     SUB sp, sp, 0x8
		   0x011083AC:  447090E5     LDR r7, [r0, 0x44]
		   0x011083B0:  0380A0E1     MOV r8, r3
		   0x011083B4:  0250A0E1     MOV r5, r2
		   0x011083B8:  0160A0E1     MOV r6, r1
		   0x011083BC:  000057E3     CMPS r0, r7, 0x0
		   0x011083C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011083C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011083C4:  014CF9EB     BL $-0x1acff4
		   // ──── Block 2 if (!=) ────────────────────
		   0x011083C8:  0C4097E5     LDR r4, [r7, 0xc]
		   0x011083CC:  0520A0E1     MOV r2, r5
		   0x011083D0:  200097E5     LDR r0, [r7, 0x20]
		   0x011083D4:  0830A0E1     MOV r3, r8
		   0x011083D8:  141097E5     LDR r1, [r7, 0x14]
		   0x011083DC:  00108DE5     STR r1, [sp]
		   0x011083E0:  0610A0E1     MOV r1, r6
		   0x011083E4:  34FF2FE1     BLX r4  // virtual call: Item.ToString
		   0x011083E8:  08D08DE2     ADD sp, sp, 0x8
		   0x011083EC:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11083F0 Offset: 0x11083F0 VA: 0x11083F0
	private void <SetItemData>b__59_2(ItemData itemData, Cell cell) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011083F0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x011083F4:  C46090E5     LDR r6, [r0, 0xc4]
		   0x011083F8:  0240A0E1     MOV r4, r2
		   0x011083FC:  0150A0E1     MOV r5, r1
		   0x01108400:  000056E3     CMPS r0, r6, 0x0
		   0x01108404:  0000001A     BNE $+0x8  // if (!=) goto 0x0110840C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108408:  F04BF9EB     BL $-0x1ad038
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110840C:  0CC096E5     LDR ip, [r6, 0xc]
		   0x01108410:  0510A0E1     MOV r1, r5
		   0x01108414:  143096E5     LDR r3, [r6, 0x14]
		   0x01108418:  0420A0E1     MOV r2, r4
		   0x0110841C:  200096E5     LDR r0, [r6, 0x20]
		   0x01108420:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01108424:  1CFF2FE1     BX ip
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass81_0 // TypeDefIndex: 1279
{

	// Fields
	public float weightsSum; // 0x8

	// Methods

	// RVA: 0x1108428 Offset: 0x1108428 VA: 0x1108428
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01108428:  0010A0E3     MOV r1, 0x0
		   0x0110842C:  EE337EEA     B $+0x1f8cfc0  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1108430 Offset: 0x1108430 VA: 0x1108430
	internal void <SelectItemToSpawn>b__0(float w) { }
}
