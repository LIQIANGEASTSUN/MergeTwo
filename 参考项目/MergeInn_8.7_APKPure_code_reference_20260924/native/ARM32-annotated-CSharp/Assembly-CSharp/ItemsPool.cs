// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemsPool : MonoBehaviour // TypeDefIndex: 1223
{

	// Fields
	private const string CONSUMABLE_HIDE = " Consumable HIDE ";
	private const string FINITE_HIDE = " Finite HIDE ";
	private const string CHARGEABLE_HIDE = " Chargeable HIDE ";
	private const string CHARGEABLE_PREDICTABLE_HIDE = " Chargeable Predictable HIDE ";
	private const string AUTOSPAWN_HIDE = " AutoSpawn HIDE ";
	private const string STIMULUS_HIDE = " Stimulus HIDE ";
	private const string MERGING_HIDE = " Merging HIDE ";
	private const string TARGET_BOOSTER_HIDE = " Merging HIDE ";
	private const string BOXED_HIDE = " Boxed HIDE ";
	private const string CONTAINER_HIDE = " Container HIDE ";
	private const string CONTAINER_P_HIDE = " ContainerP HIDE ";
	private const string FINITE_P_HIDE = " FiniteP HIDE ";
	private Quaternion ZERO_QUATERNION; // 0x10
	private Vector3 VECTOR_ONE; // 0x20
	[SerializeField]
	private ItemMerging itemMerging; // 0x2C
	[SerializeField]
	private ItemTargetBooster itemTargetBooster; // 0x30
	[SerializeField]
	private ItemContainer itemContainer; // 0x34
	[SerializeField]
	private ItemContainerPredictable itemContainerPredictable; // 0x38
	[SerializeField]
	private ItemConsumable itemConsumable; // 0x3C
	[SerializeField]
	private ItemChargeableContainer itemChargeableContainer; // 0x40
	[SerializeField]
	private ItemEnergyGenerator itemEnergyGenerator; // 0x44
	[SerializeField]
	private ItemChargeableContainerPredictable itemChargeableContainerPredictable; // 0x48
	[SerializeField]
	private ItemFiniteContainer itemFiniteContainer; // 0x4C
	[SerializeField]
	private ItemFiniteContainerPredictable itemFiniteContainerPredictable; // 0x50
	[SerializeField]
	private ItemRewardsBox itemRewardsBox; // 0x54
	[SerializeField]
	private ItemBoxed itemBoxed; // 0x58
	[SerializeField]
	private ItemStimulusChest itemStimulusChest; // 0x5C
	[SerializeField]
	private ItemAutoSpawnContainer autoSpawnContainer; // 0x60
	[SerializeField]
	private Transform baseContainer; // 0x64
	[SerializeField]
	private int startSimpleItemsInPool; // 0x68
	[SerializeField]
	private int startContainersInPool; // 0x6C
	[SerializeField]
	private int startConsumablesInPool; // 0x70
	[SerializeField]
	private int stimulusInPool; // 0x74
	[SerializeField]
	private int finiteContainersInPool; // 0x78
	[SerializeField]
	private int chargeablePredictableContainersInPool; // 0x7C
	private readonly Queue<IPoolingItem> targetBoosterQueue; // 0x80
	private readonly Queue<IPoolingItem> mergingQueue; // 0x84
	private readonly Queue<IPoolingItem> boxedQueue; // 0x88
	private readonly Queue<IPoolingItem> containersQueue; // 0x8C
	private readonly Queue<IPoolingItem> containersPredictableQueue; // 0x90
	private readonly Queue<IPoolingItem> consumablesQueue; // 0x94
	private readonly Queue<IPoolingItem> stimulusQueue; // 0x98
	private readonly Queue<IPoolingItem> finiteQueue; // 0x9C
	private readonly Queue<IPoolingItem> chargeableQueue; // 0xA0
	private readonly Queue<IPoolingItem> finitePredictableQueue; // 0xA4
	private readonly Queue<IPoolingItem> autoSpawnQueue; // 0xA8
	private readonly Queue<IPoolingItem> energyContainerQueue; // 0xAC
	private readonly Queue<IPoolingItem> chargeablePredictableQueue; // 0xB0

	// Methods

	// RVA: 0x10F6374 Offset: 0x10F6374 VA: 0x10F6374
	public Item GetItem(ItemType itemType, Transform container) {
		/* Disassembly (ARM32, 74 instructions, 0x128 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F6374:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F6378:  10D04DE2     SUB sp, sp, 0x10
		   0x010F637C:  64739FE5     LDR r7, [pc, 0x364]
		   0x010F6380:  0050A0E1     MOV r5, r0
		   0x010F6384:  0240A0E1     MOV r4, r2
		   0x010F6388:  0160A0E1     MOV r6, r1
		   0x010F638C:  07708FE0     ADD r7, pc, r7
		   0x010F6390:  0000D7E5     LDRB r0, [r7]
		   0x010F6394:  000050E3     CMPS r0, r0, 0x0
		   0x010F6398:  3700001A     BNE $+0xe4  // if (!=) goto 0x010F647C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F639C:  48039FE5     LDR r0, [pc, 0x348]
		   0x010F63A0:  00009FE7     LDR r0, [pc, r0]
		   0x010F63A4:  6D93F9EB     BL $-0x19b244
		   0x010F63A8:  40039FE5     LDR r0, [pc, 0x340]
		   0x010F63AC:  00009FE7     LDR r0, [pc, r0]
		   0x010F63B0:  6A93F9EB     BL $-0x19b250
		   0x010F63B4:  38039FE5     LDR r0, [pc, 0x338]
		   0x010F63B8:  00009FE7     LDR r0, [pc, r0]
		   0x010F63BC:  6793F9EB     BL $-0x19b25c
		   0x010F63C0:  30039FE5     LDR r0, [pc, 0x330]
		   0x010F63C4:  00009FE7     LDR r0, [pc, r0]
		   0x010F63C8:  6493F9EB     BL $-0x19b268
		   0x010F63CC:  28039FE5     LDR r0, [pc, 0x328]
		   0x010F63D0:  00009FE7     LDR r0, [pc, r0]
		   0x010F63D4:  6193F9EB     BL $-0x19b274
		   0x010F63D8:  20039FE5     LDR r0, [pc, 0x320]
		   0x010F63DC:  00009FE7     LDR r0, [pc, r0]
		   0x010F63E0:  5E93F9EB     BL $-0x19b280
		   0x010F63E4:  18039FE5     LDR r0, [pc, 0x318]
		   0x010F63E8:  00009FE7     LDR r0, [pc, r0]
		   0x010F63EC:  5B93F9EB     BL $-0x19b28c
		   0x010F63F0:  10039FE5     LDR r0, [pc, 0x310]
		   0x010F63F4:  00009FE7     LDR r0, [pc, r0]
		   0x010F63F8:  5893F9EB     BL $-0x19b298
		   0x010F63FC:  08039FE5     LDR r0, [pc, 0x308]
		   0x010F6400:  00009FE7     LDR r0, [pc, r0]
		   0x010F6404:  5593F9EB     BL $-0x19b2a4
		   0x010F6408:  00039FE5     LDR r0, [pc, 0x300]
		   0x010F640C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6410:  5293F9EB     BL $-0x19b2b0
		   0x010F6414:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x010F6418:  00009FE7     LDR r0, [pc, r0]
		   0x010F641C:  4F93F9EB     BL $-0x19b2bc
		   0x010F6420:  F0029FE5     LDR r0, [pc, 0x2f0]
		   0x010F6424:  00009FE7     LDR r0, [pc, r0]
		   0x010F6428:  4C93F9EB     BL $-0x19b2c8
		   0x010F642C:  E8029FE5     LDR r0, [pc, 0x2e8]
		   0x010F6430:  00009FE7     LDR r0, [pc, r0]
		   0x010F6434:  4993F9EB     BL $-0x19b2d4
		   0x010F6438:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x010F643C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6440:  4693F9EB     BL $-0x19b2e0
		   0x010F6444:  D8029FE5     LDR r0, [pc, 0x2d8]
		   0x010F6448:  00009FE7     LDR r0, [pc, r0]
		   0x010F644C:  4393F9EB     BL $-0x19b2ec
		   0x010F6450:  D0029FE5     LDR r0, [pc, 0x2d0]
		   0x010F6454:  00009FE7     LDR r0, [pc, r0]
		   0x010F6458:  4093F9EB     BL $-0x19b2f8
		   0x010F645C:  C8029FE5     LDR r0, [pc, 0x2c8]
		   0x010F6460:  00009FE7     LDR r0, [pc, r0]
		   0x010F6464:  3D93F9EB     BL $-0x19b304
		   0x010F6468:  C0029FE5     LDR r0, [pc, 0x2c0]
		   0x010F646C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6470:  3A93F9EB     BL $-0x19b310
		   0x010F6474:  0100A0E3     MOV r0, 0x1
		   0x010F6478:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F647C:  0D0056E3     CMPS r0, r6, 0xd
		   0x010F6480:  7800008A     BHI $+0x1e8
		   0x010F6484:  04008FE2     ADR r0, pc, 0x4
		   0x010F6488:  061190E7     LDR r1, [r0, r6, lsl 2]
		   0x010F648C:  01F080E0     ADD pc, r0, r1
		   0x010F6490:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x010F6494:  00010000     ANDEQ r0, r0, r0, lsl 2
		   0x010F6498:  C4000000     ANDEQ r0, r0, r4, asr 1
		*/
	}

	// RVA: 0x10F6928 Offset: 0x10F6928 VA: 0x10F6928
	public void Init() {
		/* Disassembly (ARM32, 176 instructions, 0x2C0 bytes):
		   // CFG: 18 blocks, 22 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F6928:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F692C:  08D04DE2     SUB sp, sp, 0x8
		   0x010F6930:  68529FE5     LDR r5, [pc, 0x268]
		   0x010F6934:  0040A0E1     MOV r4, r0
		   0x010F6938:  05508FE0     ADD r5, pc, r5
		   0x010F693C:  0000D5E5     LDRB r0, [r5]
		   0x010F6940:  000050E3     CMPS r0, r0, 0x0
		   0x010F6944:  1900001A     BNE $+0x6c  // if (!=) goto 0x010F69B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F6948:  54029FE5     LDR r0, [pc, 0x254]
		   0x010F694C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6950:  0292F9EB     BL $-0x19b7f0
		   0x010F6954:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010F6958:  00009FE7     LDR r0, [pc, r0]
		   0x010F695C:  FF91F9EB     BL $-0x19b7fc
		   0x010F6960:  44029FE5     LDR r0, [pc, 0x244]
		   0x010F6964:  00009FE7     LDR r0, [pc, r0]
		   0x010F6968:  FC91F9EB     BL $-0x19b808
		   0x010F696C:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x010F6970:  00009FE7     LDR r0, [pc, r0]
		   0x010F6974:  F991F9EB     BL $-0x19b814
		   0x010F6978:  34029FE5     LDR r0, [pc, 0x234]
		   0x010F697C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6980:  F691F9EB     BL $-0x19b820
		   0x010F6984:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x010F6988:  00009FE7     LDR r0, [pc, r0]
		   0x010F698C:  F391F9EB     BL $-0x19b82c
		   0x010F6990:  24029FE5     LDR r0, [pc, 0x224]
		   0x010F6994:  00009FE7     LDR r0, [pc, r0]
		   0x010F6998:  F091F9EB     BL $-0x19b838
		   0x010F699C:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x010F69A0:  00009FE7     LDR r0, [pc, r0]
		   0x010F69A4:  ED91F9EB     BL $-0x19b844
		   0x010F69A8:  0100A0E3     MOV r0, 0x1
		   0x010F69AC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F69B0:  680094E5     LDR r0, [r4, 0x68]
		   0x010F69B4:  010050E3     CMPS r0, r0, 0x1
		   0x010F69B8:  0B0000BA     BLT $+0x34  // if (<) goto 0x010F69EC
		   // 
		   // ──── Block 3 else (>=) ────────────────────
		   0x010F69BC:  00629FE5     LDR r6, [pc, 0x200]
		   0x010F69C0:  0050A0E3     MOV r5, 0x0
		   0x010F69C4:  06609FE7     LDR r6, [pc, r6]
		   0x010F69C8:  003096E5     LDR r3, [r6]
		   0x010F69CC:  0400A0E1     MOV r0, r4
		   0x010F69D0:  2C2094E5     LDR r2, [r4, 0x2c]
		   0x010F69D4:  841094E5     LDR r1, [r4, 0x84]
		   0x010F69D8:  820000EB     BL $+0x210  // CALL → ItemsPool.CreateItem
		   0x010F69DC:  680094E5     LDR r0, [r4, 0x68]
		   0x010F69E0:  015085E2     ADD r5, r5, 0x1
		   0x010F69E4:  000055E1     CMPS r0, r5, r0
		   0x010F69E8:  F6FFFFBA     BLT $-0x20
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x010F69EC:  6C0094E5     LDR r0, [r4, 0x6c]
		   0x010F69F0:  010050E3     CMPS r0, r0, 0x1
		   0x010F69F4:  0B0000BA     BLT $+0x34  // if (<) goto 0x010F6A28
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x010F69F8:  C8619FE5     LDR r6, [pc, 0x1c8]
		   0x010F69FC:  0050A0E3     MOV r5, 0x0
		   0x010F6A00:  06609FE7     LDR r6, [pc, r6]
		   0x010F6A04:  003096E5     LDR r3, [r6]
		   0x010F6A08:  0400A0E1     MOV r0, r4
		   0x010F6A0C:  342094E5     LDR r2, [r4, 0x34]
		   0x010F6A10:  8C1094E5     LDR r1, [r4, 0x8c]
		   0x010F6A14:  730000EB     BL $+0x1d4  // CALL → ItemsPool.CreateItem
		   0x010F6A18:  6C0094E5     LDR r0, [r4, 0x6c]
		   0x010F6A1C:  015085E2     ADD r5, r5, 0x1
		   0x010F6A20:  000055E1     CMPS r0, r5, r0
		   0x010F6A24:  F6FFFFBA     BLT $-0x20
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x010F6A28:  700094E5     LDR r0, [r4, 0x70]
		   0x010F6A2C:  010050E3     CMPS r0, r0, 0x1
		   0x010F6A30:  0B0000BA     BLT $+0x34  // if (<) goto 0x010F6A64
		   // 
		   // ──── Block 7 else (>=) ────────────────────
		   0x010F6A34:  90619FE5     LDR r6, [pc, 0x190]
		   0x010F6A38:  0050A0E3     MOV r5, 0x0
		   0x010F6A3C:  06609FE7     LDR r6, [pc, r6]
		   0x010F6A40:  003096E5     LDR r3, [r6]
		   0x010F6A44:  0400A0E1     MOV r0, r4
		   0x010F6A48:  3C2094E5     LDR r2, [r4, 0x3c]
		   0x010F6A4C:  941094E5     LDR r1, [r4, 0x94]
		   0x010F6A50:  640000EB     BL $+0x198  // CALL → ItemsPool.CreateItem
		   0x010F6A54:  700094E5     LDR r0, [r4, 0x70]
		   0x010F6A58:  015085E2     ADD r5, r5, 0x1
		   0x010F6A5C:  000055E1     CMPS r0, r5, r0
		   0x010F6A60:  F6FFFFBA     BLT $-0x20
		   // ──── Block 8 (from 2 paths) ──────────────────
		   0x010F6A64:  7C0094E5     LDR r0, [r4, 0x7c]
		   0x010F6A68:  010050E3     CMPS r0, r0, 0x1
		   0x010F6A6C:  0B0000BA     BLT $+0x34  // if (<) goto 0x010F6AA0
		   // 
		   // ──── Block 9 else (>=) ────────────────────
		   0x010F6A70:  58619FE5     LDR r6, [pc, 0x158]
		   0x010F6A74:  0050A0E3     MOV r5, 0x0
		   0x010F6A78:  06609FE7     LDR r6, [pc, r6]
		   0x010F6A7C:  003096E5     LDR r3, [r6]
		   0x010F6A80:  0400A0E1     MOV r0, r4
		   0x010F6A84:  482094E5     LDR r2, [r4, 0x48]
		   0x010F6A88:  B01094E5     LDR r1, [r4, 0xb0]
		   0x010F6A8C:  550000EB     BL $+0x15c  // CALL → ItemsPool.CreateItem
		   0x010F6A90:  7C0094E5     LDR r0, [r4, 0x7c]
		   0x010F6A94:  015085E2     ADD r5, r5, 0x1
		   0x010F6A98:  000055E1     CMPS r0, r5, r0
		   0x010F6A9C:  F6FFFFBA     BLT $-0x20
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010F6AA0:  780094E5     LDR r0, [r4, 0x78]
		   0x010F6AA4:  010050E3     CMPS r0, r0, 0x1
		   0x010F6AA8:  0B0000BA     BLT $+0x34  // if (<) goto 0x010F6ADC
		   // 
		   // ──── Block 11 else (>=) ────────────────────
		   0x010F6AAC:  20619FE5     LDR r6, [pc, 0x120]
		   0x010F6AB0:  0050A0E3     MOV r5, 0x0
		   0x010F6AB4:  06609FE7     LDR r6, [pc, r6]
		   0x010F6AB8:  003096E5     LDR r3, [r6]
		   0x010F6ABC:  0400A0E1     MOV r0, r4
		   0x010F6AC0:  4C2094E5     LDR r2, [r4, 0x4c]
		   0x010F6AC4:  9C1094E5     LDR r1, [r4, 0x9c]
		   0x010F6AC8:  460000EB     BL $+0x120  // CALL → ItemsPool.CreateItem
		   0x010F6ACC:  780094E5     LDR r0, [r4, 0x78]
		   0x010F6AD0:  015085E2     ADD r5, r5, 0x1
		   0x010F6AD4:  000055E1     CMPS r0, r5, r0
		   0x010F6AD8:  F6FFFFBA     BLT $-0x20
		   // ──── Block 12 (from 2 paths) ──────────────────
		   0x010F6ADC:  740094E5     LDR r0, [r4, 0x74]
		   0x010F6AE0:  010050E3     CMPS r0, r0, 0x1
		   0x010F6AE4:  0B0000BA     BLT $+0x34  // if (<) goto 0x010F6B18
		   // 
		   // ──── Block 13 else (>=) ────────────────────
		   0x010F6AE8:  E8609FE5     LDR r6, [pc, 0xe8]
		   0x010F6AEC:  0050A0E3     MOV r5, 0x0
		   0x010F6AF0:  06609FE7     LDR r6, [pc, r6]
		   0x010F6AF4:  003096E5     LDR r3, [r6]
		   0x010F6AF8:  0400A0E1     MOV r0, r4
		   0x010F6AFC:  5C2094E5     LDR r2, [r4, 0x5c]
		   0x010F6B00:  981094E5     LDR r1, [r4, 0x98]
		   0x010F6B04:  370000EB     BL $+0xe4  // CALL → ItemsPool.CreateItem
		   0x010F6B08:  740094E5     LDR r0, [r4, 0x74]
		   0x010F6B0C:  015085E2     ADD r5, r5, 0x1
		   0x010F6B10:  000055E1     CMPS r0, r5, r0
		   0x010F6B14:  F6FFFFBA     BLT $-0x20
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x010F6B18:  BC609FE5     LDR r6, [pc, 0xbc]
		   0x010F6B1C:  0450A0E3     MOV r5, 0x4
		   0x010F6B20:  06609FE7     LDR r6, [pc, r6]
		   0x010F6B24:  003096E5     LDR r3, [r6]
		   0x010F6B28:  0400A0E1     MOV r0, r4
		   0x010F6B2C:  382094E5     LDR r2, [r4, 0x38]
		   0x010F6B30:  901094E5     LDR r1, [r4, 0x90]
		   0x010F6B34:  2B0000EB     BL $+0xb4  // CALL → ItemsPool.CreateItem
		   0x010F6B38:  015055E2     SUBS r5, r5, 0x1
		   0x010F6B3C:  F8FFFF1A     BNE $-0x18
		   // ──── Block 15 else (r5 == r5, 0x1) ────────────────────
		   0x010F6B40:  98609FE5     LDR r6, [pc, 0x98]
		   0x010F6B44:  0450A0E3     MOV r5, 0x4
		   0x010F6B48:  06609FE7     LDR r6, [pc, r6]
		   0x010F6B4C:  003096E5     LDR r3, [r6]
		   0x010F6B50:  0400A0E1     MOV r0, r4
		   0x010F6B54:  502094E5     LDR r2, [r4, 0x50]
		   0x010F6B58:  A41094E5     LDR r1, [r4, 0xa4]
		   0x010F6B5C:  210000EB     BL $+0x8c  // CALL → ItemsPool.CreateItem
		   0x010F6B60:  015055E2     SUBS r5, r5, 0x1
		   0x010F6B64:  F8FFFF1A     BNE $-0x18
		   // ──── Block 16 else (r5 == r5, 0x1) ────────────────────
		   0x010F6B68:  74509FE5     LDR r5, [pc, 0x74]
		   0x010F6B6C:  0400A0E1     MOV r0, r4
		   0x010F6B70:  05509FE7     LDR r5, [pc, r5]
		   0x010F6B74:  302094E5     LDR r2, [r4, 0x30]
		   0x010F6B78:  801094E5     LDR r1, [r4, 0x80]
		   0x010F6B7C:  003095E5     LDR r3, [r5]
		   0x010F6B80:  180000EB     BL $+0x68  // CALL → ItemsPool.CreateItem
		   0x010F6B84:  302094E5     LDR r2, [r4, 0x30]
		   0x010F6B88:  0400A0E1     MOV r0, r4
		   0x010F6B8C:  801094E5     LDR r1, [r4, 0x80]
		   0x010F6B90:  003095E5     LDR r3, [r5]
		   0x010F6B94:  130000EB     BL $+0x54  // CALL → ItemsPool.CreateItem
		   0x010F6B98:  08D08DE2     ADD sp, sp, 0x8
		   0x010F6B9C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F6BA0:  F3531303     TSTSEQ r5, r3, 0xcc000003
		   0x010F6BA4:  582CF802     RSCSEQ r2, r8, 0x5800
		   0x010F6BA8:  502CF802     RSCSEQ r2, r8, 0x5000
		   0x010F6BAC:  4C2CF802     RSCSEQ r2, r8, 0x4c00
		   0x010F6BB0:  4C2CF802     RSCSEQ r2, r8, 0x4c00
		   0x010F6BB4:  442CF802     RSCSEQ r2, r8, 0x4400
		   0x010F6BB8:  3C2CF802     RSCSEQ r2, r8, 0x3c00
		   0x010F6BBC:  342CF802     RSCSEQ r2, r8, 0x3400
		   0x010F6BC0:  2C2CF802     RSCSEQ r2, r8, 0x2c00
		   0x010F6BC4:  042CF802     RSCSEQ r2, r8, 0x400
		   0x010F6BC8:  C02BF802     RSCSEQ r2, r8, 0x30000
		   0x010F6BCC:  682BF802     RSCSEQ r2, r8, 0x1a000
		   0x010F6BD0:  302BF802     RSCSEQ r2, r8, 0xc000
		   0x010F6BD4:  182BF802     RSCSEQ r2, r8, 0x6000
		   0x010F6BD8:  CC2AF802     RSCSEQ r2, r8, 0xcc000
		   0x010F6BDC:  902AF802     RSCSEQ r2, r8, 0x90000
		   0x010F6BE0:  7C2AF802     RSCSEQ r2, r8, 0x7c000
		   0x010F6BE4:  582AF802     RSCSEQ r2, r8, 0x58000
		*/
	}

	// RVA: 0x10F6BE8 Offset: 0x10F6BE8 VA: 0x10F6BE8
	private void CreateItem(Queue<IPoolingItem> queue, ItemMerging itemMerging, string hideLabel) {
		/* Disassembly (ARM32, 103 instructions, 0x19C bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F6BE8:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010F6BEC:  5C419FE5     LDR r4, [pc, 0x15c]
		   0x010F6BF0:  0060A0E1     MOV r6, r0
		   0x010F6BF4:  0390A0E1     MOV sb, r3
		   0x010F6BF8:  0280A0E1     MOV r8, r2
		   0x010F6BFC:  04408FE0     ADD r4, pc, r4
		   0x010F6C00:  0170A0E1     MOV r7, r1
		   0x010F6C04:  0000D4E5     LDRB r0, [r4]
		   0x010F6C08:  000050E3     CMPS r0, r0, 0x0
		   0x010F6C0C:  1300001A     BNE $+0x54  // if (!=) goto 0x010F6C60
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F6C10:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010F6C14:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C18:  5091F9EB     BL $-0x19bab8
		   0x010F6C1C:  34019FE5     LDR r0, [pc, 0x134]
		   0x010F6C20:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C24:  4D91F9EB     BL $-0x19bac4
		   0x010F6C28:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x010F6C2C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C30:  4A91F9EB     BL $-0x19bad0
		   0x010F6C34:  24019FE5     LDR r0, [pc, 0x124]
		   0x010F6C38:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C3C:  4791F9EB     BL $-0x19badc
		   0x010F6C40:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x010F6C44:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C48:  4491F9EB     BL $-0x19bae8
		   0x010F6C4C:  14019FE5     LDR r0, [pc, 0x114]
		   0x010F6C50:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C54:  4191F9EB     BL $-0x19baf4
		   0x010F6C58:  0100A0E3     MOV r0, 0x1
		   0x010F6C5C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F6C60:  04019FE5     LDR r0, [pc, 0x104]
		   0x010F6C64:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C68:  000090E5     LDR r0, [r0]
		   0x010F6C6C:  D491F9EB     BL $-0x19b8a8
		   0x010F6C70:  0010A0E3     MOV r1, 0x0
		   0x010F6C74:  0050A0E1     MOV r5, r0
		   0x010F6C78:  DB797EEB     BL $+0x1f9e774  // CALL → Object..ctor
		   0x010F6C7C:  000055E3     CMPS r0, r5, 0x0
		   0x010F6C80:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6C88
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F6C84:  D191F9EB     BL $-0x19b8b4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F6C88:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010F6C8C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6C90:  644096E5     LDR r4, [r6, 0x64]
		   0x010F6C94:  109085E5     STR sb, [r5, 0x10]
		   0x010F6C98:  000090E5     LDR r0, [r0]
		   0x010F6C9C:  0C7085E5     STR r7, [r5, 0xc]
		   0x010F6CA0:  086085E5     STR r6, [r5, 0x8]
		   0x010F6CA4:  741090E5     LDR r1, [r0, 0x74]
		   0x010F6CA8:  000051E3     CMPS r0, r1, 0x0
		   0x010F6CAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6CB4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F6CB0:  7791F9EB     BL $-0x19ba1c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F6CB4:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010F6CB8:  0410A0E1     MOV r1, r4
		   0x010F6CBC:  00009FE7     LDR r0, [pc, r0]
		   0x010F6CC0:  002090E5     LDR r2, [r0]
		   0x010F6CC4:  0800A0E1     MOV r0, r8
		   0x010F6CC8:  703324EB     BL $+0x90cdc8  // CALL → Object.Instantiate<object>
		   0x010F6CCC:  0040A0E1     MOV r4, r0
		   0x010F6CD0:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010F6CD4:  00009FE7     LDR r0, [pc, r0]
		   0x010F6CD8:  000090E5     LDR r0, [r0]
		   0x010F6CDC:  B891F9EB     BL $-0x19b918
		   0x010F6CE0:  0060A0E1     MOV r6, r0
		   0x010F6CE4:  90009FE5     LDR r0, [pc, 0x90]
		   0x010F6CE8:  0510A0E1     MOV r1, r5
		   0x010F6CEC:  0030A0E3     MOV r3, 0x0
		   0x010F6CF0:  00009FE7     LDR r0, [pc, r0]
		   0x010F6CF4:  002090E5     LDR r2, [r0]
		   0x010F6CF8:  0600A0E1     MOV r0, r6
		   0x010F6CFC:  51BE52EB     BL $+0x14af94c  // CALL → Action<object>..ctor
		   0x010F6D00:  000054E3     CMPS r0, r4, 0x0
		   0x010F6D04:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6D0C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F6D08:  B091F9EB     BL $-0x19b938
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F6D0C:  000094E5     LDR r0, [r4]
		   0x010F6D10:  886084E5     STR r6, [r4, 0x88]
		   0x010F6D14:  C02190E5     LDR r2, [r0, 0x1c0]
		   0x010F6D18:  C41190E5     LDR r1, [r0, 0x1c4]
		   0x010F6D1C:  0400A0E1     MOV r0, r4
		   0x010F6D20:  32FF2FE1     BLX r2  // virtual call: vtable+0x1C0
		   0x010F6D24:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010F6D28:  000055E3     CMPS r0, r5, 0x0
		   0x010F6D2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6D34
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F6D30:  A691F9EB     BL $-0x19b960
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F6D34:  44009FE5     LDR r0, [pc, 0x44]
		   0x010F6D38:  0410A0E1     MOV r1, r4
		   0x010F6D3C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6D40:  002090E5     LDR r2, [r0]
		   0x010F6D44:  0500A0E1     MOV r0, r5
		   0x010F6D48:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010F6D4C:  0B2D36EA     B $+0xd8b434  // TAIL CALL → Queue<object>.Enqueue
		   0x010F6D50:  30511303     TSTSEQ r5, r3, 0xc
		   0x010F6D54:  CC29F802     RSCSEQ r2, r8, 0x330000
		   0x010F6D58:  C429F802     RSCSEQ r2, r8, 0x310000
		   0x010F6D5C:  0CF9F702     RSCSEQ pc, r7, 0x30000
		   0x010F6D60:  B029F802     RSCSEQ r2, r8, 0x2c0000
		   0x010F6D64:  A829F802     RSCSEQ r2, r8, 0x2a0000
		   0x010F6D68:  A029F802     RSCSEQ r2, r8, 0x280000
		   0x010F6D6C:  8C29F802     RSCSEQ r2, r8, 0x230000
		   0x010F6D70:  ACF8F702     RSCSEQ pc, r7, 0xac0000
		   0x010F6D74:  2829F802     RSCSEQ r2, r8, 0xa0000
		   0x010F6D78:  0C29F802     RSCSEQ r2, r8, 0x30000
		   0x010F6D7C:  FC28F802     RSCSEQ r2, r8, 0xfc0000
		   0x010F6D80:  AC28F802     RSCSEQ r2, r8, 0xac0000
		*/
	}

	// RVA: 0x10F6784 Offset: 0x10F6784 VA: 0x10F6784
	private IPoolingItem GetItem(Transform container, Queue<IPoolingItem> queue, ItemMerging itemMerging, string hideLabel) {
		/* Disassembly (ARM32, 105 instructions, 0x1A4 bytes):
		   // CFG: 20 blocks, 20 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F6784:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F6788:  08D04DE2     SUB sp, sp, 0x8
		   0x010F678C:  7C419FE5     LDR r4, [pc, 0x17c]
		   0x010F6790:  0060A0E1     MOV r6, r0
		   0x010F6794:  0370A0E1     MOV r7, r3
		   0x010F6798:  0250A0E1     MOV r5, r2
		   0x010F679C:  04408FE0     ADD r4, pc, r4
		   0x010F67A0:  0180A0E1     MOV r8, r1
		   0x010F67A4:  0000D4E5     LDRB r0, [r4]
		   0x010F67A8:  000050E3     CMPS r0, r0, 0x0
		   0x010F67AC:  0A00001A     BNE $+0x30  // if (!=) goto 0x010F67DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F67B0:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010F67B4:  00009FE7     LDR r0, [pc, r0]
		   0x010F67B8:  6892F9EB     BL $-0x19b658
		   0x010F67BC:  54019FE5     LDR r0, [pc, 0x154]
		   0x010F67C0:  00009FE7     LDR r0, [pc, r0]
		   0x010F67C4:  6592F9EB     BL $-0x19b664
		   0x010F67C8:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010F67CC:  00009FE7     LDR r0, [pc, r0]
		   0x010F67D0:  6292F9EB     BL $-0x19b670
		   0x010F67D4:  0100A0E3     MOV r0, 0x1
		   0x010F67D8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F67DC:  000055E3     CMPS r0, r5, 0x0
		   0x010F67E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F67E8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F67E4:  F992F9EB     BL $-0x19b414
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F67E8:  140095E5     LDR r0, [r5, 0x14]
		   0x010F67EC:  000050E3     CMPS r0, r0, 0x0
		   0x010F67F0:  040000CA     BGT $+0x18  // if (>) goto 0x010F6808
		   // 
		   // ──── Block 5 else (<=) ────────────────────
		   0x010F67F4:  20309DE5     LDR r3, [sp, 0x20]
		   0x010F67F8:  0600A0E1     MOV r0, r6
		   0x010F67FC:  0510A0E1     MOV r1, r5
		   0x010F6800:  0720A0E1     MOV r2, r7
		   0x010F6804:  F70000EB     BL $+0x3e4  // CALL → ItemsPool.CreateItem
		   // ──── Block 6 if (>) ────────────────────
		   0x010F6808:  10019FE5     LDR r0, [pc, 0x110]
		   0x010F680C:  00009FE7     LDR r0, [pc, r0]
		   0x010F6810:  001090E5     LDR r1, [r0]
		   0x010F6814:  0500A0E1     MOV r0, r5
		   0x010F6818:  C52E36EB     BL $+0xd8bb1c  // CALL → Queue<object>.Dequeue
		   0x010F681C:  0050A0E1     MOV r5, r0
		   0x010F6820:  000050E3     CMPS r0, r0, 0x0
		   0x010F6824:  0000001A     BNE $+0x8  // if (!=) goto 0x010F682C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F6828:  E892F9EB     BL $-0x19b458
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F682C:  000095E5     LDR r0, [r5]
		   0x010F6830:  EC709FE5     LDR r7, [pc, 0xec]
		   0x010F6834:  07709FE7     LDR r7, [pc, r7]
		   0x010F6838:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F683C:  001097E5     LDR r1, [r7]
		   0x010F6840:  000052E3     CMPS r0, r2, 0x0
		   0x010F6844:  0700000A     BEQ $+0x24  // if (==) goto 0x010F6868
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010F6848:  583090E5     LDR r3, [r0, 0x58]
		   0x010F684C:  043083E2     ADD r3, r3, 0x4
		   0x010F6850:  044013E5     LDR r4, [r3, -0x4]
		   0x010F6854:  010054E1     CMPS r0, r4, r1
		   0x010F6858:  0600000A     BEQ $+0x20  // if (==) goto 0x010F6878
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010F685C:  012052E2     SUBS r2, r2, 0x1
		   0x010F6860:  083083E2     ADD r3, r3, 0x8
		   0x010F6864:  F9FFFF1A     BNE $-0x14
		   // ──── Block 11 (from 2 paths) ──────────────────
		   0x010F6868:  0500A0E1     MOV r0, r5
		   0x010F686C:  0020A0E3     MOV r2, 0x0
		   0x010F6870:  8481FAEB     BL $-0x15f9e8
		   0x010F6874:  020000EA     B $+0x10  // goto 0x010F6884
		   // ──── Block 12 if (==) ────────────────────
		   0x010F6878:  001093E5     LDR r1, [r3]
		   0x010F687C:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F6880:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 13 ──────────────────────────────
		   0x010F6884:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F6888:  0500A0E1     MOV r0, r5
		   0x010F688C:  0310A0E1     MOV r1, r3
		   0x010F6890:  32FF2FE1     BLX r2
		   0x010F6894:  0010A0E1     MOV r1, r0
		   0x010F6898:  0600A0E1     MOV r0, r6
		   0x010F689C:  0820A0E1     MOV r2, r8
		   0x010F68A0:  390100EB     BL $+0x4ec  // CALL → ItemsPool.ResetTransformState
		   0x010F68A4:  000095E5     LDR r0, [r5]
		   0x010F68A8:  001097E5     LDR r1, [r7]
		   0x010F68AC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F68B0:  000052E3     CMPS r0, r2, 0x0
		   0x010F68B4:  0700000A     BEQ $+0x24  // if (==) goto 0x010F68D8
		   // 
		   // ──── Block 14 else (r2 != r2, 0x1) ────────────────────
		   0x010F68B8:  583090E5     LDR r3, [r0, 0x58]
		   0x010F68BC:  043083E2     ADD r3, r3, 0x4
		   0x010F68C0:  047013E5     LDR r7, [r3, -0x4]
		   0x010F68C4:  010057E1     CMPS r0, r7, r1
		   0x010F68C8:  0600000A     BEQ $+0x20  // if (==) goto 0x010F68E8
		   // 
		   // ──── Block 15 else (r2 != r2, 0x1) ────────────────────
		   0x010F68CC:  012052E2     SUBS r2, r2, 0x1
		   0x010F68D0:  083083E2     ADD r3, r3, 0x8
		   0x010F68D4:  F9FFFF1A     BNE $-0x14
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x010F68D8:  0500A0E1     MOV r0, r5
		   0x010F68DC:  0420A0E3     MOV r2, 0x4
		   0x010F68E0:  6881FAEB     BL $-0x15fa58
		   0x010F68E4:  020000EA     B $+0x10  // goto 0x010F68F4
		   // ──── Block 17 if (r2 == r2, 0x1) ────────────────────
		   0x010F68E8:  001093E5     LDR r1, [r3]
		   0x010F68EC:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F68F0:  E00080E2     ADD r0, r0, 0xe0
		   // ──── Block 18 ──────────────────────────────
		   0x010F68F4:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F68F8:  0500A0E1     MOV r0, r5
		   0x010F68FC:  0310A0E1     MOV r1, r3
		   0x010F6900:  32FF2FE1     BLX r2
		   0x010F6904:  0500A0E1     MOV r0, r5
		   0x010F6908:  08D08DE2     ADD sp, sp, 0x8
		   0x010F690C:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010F6910:  91551303     TSTSEQ r5, r3, 0x24400000
		   0x010F6914:  202EF802     RSCSEQ r2, r8, 0x200
		   0x010F6918:  182EF802     RSCSEQ r2, r8, 0x180
		   0x010F691C:  102EF802     RSCSEQ r2, r8, 0x100
		   0x010F6920:  CC2DF802     RSCSEQ r2, r8, 0x3300
		   0x010F6924:  A02DF802     RSCSEQ r2, r8, 0x2800
		*/
	}

	// RVA: 0x10F6F64 Offset: 0x10F6F64 VA: 0x10F6F64
	private void ReturnToQueue(IPoolingItem item, Queue<IPoolingItem> itemsQueue, string HideLabel) {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F6F64:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F6F68:  D0609FE5     LDR r6, [pc, 0xd0]
		   0x010F6F6C:  0250A0E1     MOV r5, r2
		   0x010F6F70:  0140A0E1     MOV r4, r1
		   0x010F6F74:  06608FE0     ADD r6, pc, r6
		   0x010F6F78:  0000D6E5     LDRB r0, [r6]
		   0x010F6F7C:  000050E3     CMPS r0, r0, 0x0
		   0x010F6F80:  0700001A     BNE $+0x24  // if (!=) goto 0x010F6FA4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F6F84:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010F6F88:  00009FE7     LDR r0, [pc, r0]
		   0x010F6F8C:  7390F9EB     BL $-0x19be2c
		   0x010F6F90:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010F6F94:  00009FE7     LDR r0, [pc, r0]
		   0x010F6F98:  7090F9EB     BL $-0x19be38
		   0x010F6F9C:  0100A0E3     MOV r0, 0x1
		   0x010F6FA0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F6FA4:  000054E3     CMPS r0, r4, 0x0
		   0x010F6FA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6FB0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F6FAC:  0791F9EB     BL $-0x19bbdc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F6FB0:  000094E5     LDR r0, [r4]
		   0x010F6FB4:  90109FE5     LDR r1, [pc, 0x90]
		   0x010F6FB8:  01109FE7     LDR r1, [pc, r1]
		   0x010F6FBC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010F6FC0:  001091E5     LDR r1, [r1]
		   0x010F6FC4:  000052E3     CMPS r0, r2, 0x0
		   0x010F6FC8:  0700000A     BEQ $+0x24  // if (==) goto 0x010F6FEC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010F6FCC:  583090E5     LDR r3, [r0, 0x58]
		   0x010F6FD0:  043083E2     ADD r3, r3, 0x4
		   0x010F6FD4:  046013E5     LDR r6, [r3, -0x4]
		   0x010F6FD8:  010056E1     CMPS r0, r6, r1
		   0x010F6FDC:  0600000A     BEQ $+0x20  // if (==) goto 0x010F6FFC
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010F6FE0:  012052E2     SUBS r2, r2, 0x1
		   0x010F6FE4:  083083E2     ADD r3, r3, 0x8
		   0x010F6FE8:  F9FFFF1A     BNE $-0x14
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x010F6FEC:  0400A0E1     MOV r0, r4
		   0x010F6FF0:  0320A0E3     MOV r2, 0x3
		   0x010F6FF4:  A37FFAEB     BL $-0x16016c
		   0x010F6FF8:  020000EA     B $+0x10  // goto 0x010F7008
		   // ──── Block 8 if (==) ────────────────────
		   0x010F6FFC:  001093E5     LDR r1, [r3]
		   0x010F7000:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010F7004:  D80080E2     ADD r0, r0, 0xd8
		   // ──── Block 9 ──────────────────────────────
		   0x010F7008:  D020C0E1     LDRD r2, r3, [r0]
		   0x010F700C:  0400A0E1     MOV r0, r4
		   0x010F7010:  0310A0E1     MOV r1, r3
		   0x010F7014:  32FF2FE1     BLX r2
		   0x010F7018:  000055E3     CMPS r0, r5, 0x0
		   0x010F701C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F7024
		   // 
		   // ──── Block 10 else (r2 == r2, 0x1) ────────────────────
		   0x010F7020:  EA90F9EB     BL $-0x19bc50
		   // ──── Block 11 if (r2 != r2, 0x1) ────────────────────
		   0x010F7024:  24009FE5     LDR r0, [pc, 0x24]
		   0x010F7028:  0410A0E1     MOV r1, r4
		   0x010F702C:  00009FE7     LDR r0, [pc, r0]
		   0x010F7030:  002090E5     LDR r2, [r0]
		   0x010F7034:  0500A0E1     MOV r0, r5
		   0x010F7038:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010F703C:  4F2C36EA     B $+0xd8b144  // TAIL CALL → Queue<object>.Enqueue
		   0x010F7040:  BA4D1303     TSTSEQ r4, r3, 0x2e80
		   0x010F7044:  4C26F802     RSCSEQ r2, r8, 0x4c00000
		   0x010F7048:  5426F802     RSCSEQ r2, r8, 0x5400000
		   0x010F704C:  1C26F802     RSCSEQ r2, r8, 0x1c00000
		   0x010F7050:  BC25F802     RSCSEQ r2, r8, 0x2f000000
		   0x010F7054:  00F020E3     INVALID
		*/
	}

	// RVA: 0x10F6D8C Offset: 0x10F6D8C VA: 0x10F6D8C
	private void ResetTransformState(Transform cTransform, Transform container) {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 17 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F6D8C:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010F6D90:  18D04DE2     SUB sp, sp, 0x18
		   0x010F6D94:  B4519FE5     LDR r5, [pc, 0x1b4]
		   0x010F6D98:  0080A0E1     MOV r8, r0
		   0x010F6D9C:  0260A0E1     MOV r6, r2
		   0x010F6DA0:  0140A0E1     MOV r4, r1
		   0x010F6DA4:  05508FE0     ADD r5, pc, r5
		   0x010F6DA8:  0000D5E5     LDRB r0, [r5]
		   0x010F6DAC:  000050E3     CMPS r0, r0, 0x0
		   0x010F6DB0:  0700001A     BNE $+0x24  // if (!=) goto 0x010F6DD4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F6DB4:  98019FE5     LDR r0, [pc, 0x198]
		   0x010F6DB8:  00009FE7     LDR r0, [pc, r0]
		   0x010F6DBC:  E790F9EB     BL $-0x19bc5c
		   0x010F6DC0:  90019FE5     LDR r0, [pc, 0x190]
		   0x010F6DC4:  00009FE7     LDR r0, [pc, r0]
		   0x010F6DC8:  E490F9EB     BL $-0x19bc68
		   0x010F6DCC:  0100A0E3     MOV r0, 0x1
		   0x010F6DD0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F6DD4:  80019FE5     LDR r0, [pc, 0x180]
		   0x010F6DD8:  00009FE7     LDR r0, [pc, r0]
		   0x010F6DDC:  000090E5     LDR r0, [r0]
		   0x010F6DE0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F6DE4:  000051E3     CMPS r0, r1, 0x0
		   0x010F6DE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6DF0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F6DEC:  2891F9EB     BL $-0x19bb58
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F6DF0:  0400A0E1     MOV r0, r4
		   0x010F6DF4:  0010A0E3     MOV r1, 0x0
		   0x010F6DF8:  0020A0E3     MOV r2, 0x0
		   0x010F6DFC:  483D12EB     BL $+0x48f528  // CALL → DOTween.IsTweening
		   0x010F6E00:  000050E3     CMPS r0, r0, 0x0
		   0x010F6E04:  0300000A     BEQ $+0x14  // if (==) goto 0x010F6E18
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010F6E08:  0400A0E1     MOV r0, r4
		   0x010F6E0C:  0010A0E3     MOV r1, 0x0
		   0x010F6E10:  0020A0E3     MOV r2, 0x0
		   0x010F6E14:  398312EB     BL $+0x4a0cec  // CALL → ShortcutExtensions.DOKill
		   // ──── Block 6 if (==) ────────────────────
		   0x010F6E18:  000054E3     CMPS r0, r4, 0x0
		   0x010F6E1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6E24
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F6E20:  6A91F9EB     BL $-0x19ba50
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F6E24:  0400A0E1     MOV r0, r4
		   0x010F6E28:  0010A0E3     MOV r1, 0x0
		   0x010F6E2C:  D1043CEB     BL $+0xf0134c  // CALL → sub_1FF8178
		   0x010F6E30:  0050A0E1     MOV r5, r0
		   0x010F6E34:  24019FE5     LDR r0, [pc, 0x124]
		   0x010F6E38:  00009FE7     LDR r0, [pc, r0]
		   0x010F6E3C:  000090E5     LDR r0, [r0]
		   0x010F6E40:  741090E5     LDR r1, [r0, 0x74]
		   0x010F6E44:  000051E3     CMPS r0, r1, 0x0
		   0x010F6E48:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6E50
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F6E4C:  1091F9EB     BL $-0x19bbb8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F6E50:  0500A0E1     MOV r0, r5
		   0x010F6E54:  0610A0E1     MOV r1, r6
		   0x010F6E58:  0020A0E3     MOV r2, 0x0
		   0x010F6E5C:  44B7FCEB     BL $-0xd22e8
		   0x010F6E60:  000050E3     CMPS r0, r0, 0x0
		   0x010F6E64:  0600000A     BEQ $+0x20  // if (==) goto 0x010F6E84
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010F6E68:  000054E3     CMPS r0, r4, 0x0
		   0x010F6E6C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6E74
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010F6E70:  5691F9EB     BL $-0x19baa0
		   // ──── Block 13 if (!=) ────────────────────
		   0x010F6E74:  0400A0E1     MOV r0, r4
		   0x010F6E78:  0610A0E1     MOV r1, r6
		   0x010F6E7C:  0020A0E3     MOV r2, 0x0
		   0x010F6E80:  32043CEB     BL $+0xf010d0  // CALL → sub_1FF7F50
		   // ──── Block 14 if (==) ────────────────────
		   0x010F6E84:  000054E3     CMPS r0, r4, 0x0
		   0x010F6E88:  0000001A     BNE $+0x8  // if (!=) goto 0x010F6E90
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F6E8C:  4F91F9EB     BL $-0x19babc
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F6E90:  0C008DE2     ADD r0, sp, 0xc
		   0x010F6E94:  0410A0E1     MOV r1, r4
		   0x010F6E98:  0020A0E3     MOV r2, 0x0
		   0x010F6E9C:  F2043CEB     BL $+0xf013d0  // CALL → sub_1FF826C
		   0x010F6EA0:  245098E5     LDR r5, [r8, 0x24]
		*/
	}

	// RVA: 0x10F7058 Offset: 0x10F7058 VA: 0x10F7058
	public void .ctor() {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F7058:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F705C:  CC519FE5     LDR r5, [pc, 0x1cc]
		   0x010F7060:  0040A0E1     MOV r4, r0
		   0x010F7064:  05508FE0     ADD r5, pc, r5
		   0x010F7068:  0000D5E5     LDRB r0, [r5]
		   0x010F706C:  000050E3     CMPS r0, r0, 0x0
		   0x010F7070:  0700001A     BNE $+0x24  // if (!=) goto 0x010F7094
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F7074:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x010F7078:  00009FE7     LDR r0, [pc, r0]
		   0x010F707C:  3790F9EB     BL $-0x19bf1c
		   0x010F7080:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x010F7084:  00009FE7     LDR r0, [pc, r0]
		   0x010F7088:  3490F9EB     BL $-0x19bf28
		   0x010F708C:  0100A0E3     MOV r0, 0x1
		   0x010F7090:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F7094:  610F8FE2     ADR r0, pc, 0x184
		   0x010F7098:  9C619FE5     LDR r6, [pc, 0x19c]  // vtable: Object.Equals
		   0x010F709C:  0410A0E3     MOV r1, 0x4
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass50_0 // TypeDefIndex: 1222
{

	// Fields
	public ItemsPool <>4__this; // 0x8
	public Queue<IPoolingItem> queue; // 0xC
	public string hideLabel; // 0x10

	// Methods

	// RVA: 0x10F6D84 Offset: 0x10F6D84 VA: 0x10F6D84
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F6D84:  0010A0E3     MOV r1, 0x0
		   0x010F6D88:  97797EEA     B $+0x1f9e664  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F7244 Offset: 0x10F7244 VA: 0x10F7244
	internal void <CreateItem>b__0(IPoolingItem x) {
		/* Disassembly (ARM32, 13 instructions, 0x34 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F7244:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F7248:  08D04DE2     SUB sp, sp, 0x8
		   0x010F724C:  0C5090E5     LDR r5, [r0, 0xc]
		   0x010F7250:  0140A0E1     MOV r4, r1
		   0x010F7254:  080090E5     LDR r0, [r0, 0x8]
		   0x010F7258:  000050E3     CMPS r0, r0, 0x0
		   0x010F725C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F7264
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F7260:  5A90F9EB     BL $-0x19be90
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F7264:  0410A0E1     MOV r1, r4
		   0x010F7268:  0520A0E1     MOV r2, r5
		   0x010F726C:  3CFFFFEB     BL $-0x308
		   0x010F7270:  08D08DE2     ADD sp, sp, 0x8
		   0x010F7274:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}
