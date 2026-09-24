// Dll : Assembly-CSharp.dll
// Namespace: 
public class GameBoard : MonoBehaviour // TypeDefIndex: 1170
{

	// Fields
	private const float TIME_BETWEEN_MERGE_SUGGESTIONS = 3;
	[SerializeField]
	private Image selection; // 0x10
	[SerializeField]
	private RectTransform canvasRectTransform; // 0x14
	[SerializeField]
	private Camera mainCamera; // 0x18
	[SerializeField]
	private GameBoardConstructor constructor; // 0x1C
	[SerializeField]
	private BoosterHighlighter boosterHighlighter; // 0x20
	private FieldData currentLevel; // 0x24
	private GameState gameState; // 0x28
	private ResourcesPack resourcesPack; // 0x2C
	private bool hasDragging; // 0x30
	[CompilerGenerated]
	private Vector2Int <selectedCellCoordinates>k__BackingField; // 0x34
	private int draggingItemInventoryPos; // 0x3C
	private Item selectedItem; // 0x40
	private Item previousSelectedItem; // 0x44
	private Tween suggestedMergeTween; // 0x48
	private bool inputLocked; // 0x4C
	private MergeSuggestionHelper mergeSuggestionHelper; // 0x50
	public Action<Item> onCellSelected; // 0x54
	public Action<Item, int> moveToInventory; // 0x58
	private WaitForEndOfFrame waitForEndOfFrame; // 0x5C
	private Vector2 halfScreenSize; // 0x60
	[CompilerGenerated]
	private Func<Item, bool> tryAddForSmallInventory; // 0x68
	private Coroutine dragCoroutine; // 0x6C

	// Properties
	public bool dragging { get; set; }
	public Vector2Int selectedCellCoordinates { get; set; }
	public FieldData CurrentLevelObject { get; }
	private object[] cells { get; }

	// Methods

	// RVA: 0x10D1334 Offset: 0x10D1334 VA: 0x10D1334
	public bool get_dragging() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1334:  3000D0E5     LDRB r0, [r0, 0x30]
		   0x010D1338:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D133C Offset: 0x10D133C VA: 0x10D133C
	private void set_dragging(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D133C:  3010C0E5     STRB r1, [r0, 0x30]
		   0x010D1340:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D1344 Offset: 0x10D1344 VA: 0x10D1344
	private void set_selectedCellCoordinates(Vector2Int value) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1344:  0230A0E1     MOV r3, r2
		   0x010D1348:  0120A0E1     MOV r2, r1
		   0x010D134C:  F423C0E1     STRD r2, r3, [r0, 0x34]
		   0x010D1350:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D1354 Offset: 0x10D1354 VA: 0x10D1354
	public Vector2Int get_selectedCellCoordinates() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1354:  D423C1E1     LDRD r2, r3, [r1, 0x34]
		   0x010D1358:  F020C0E1     STRD r2, r3, [r0]
		   0x010D135C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D1360 Offset: 0x10D1360 VA: 0x10D1360
	public FieldData get_CurrentLevelObject() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D1360:  240090E5     LDR r0, [r0, 0x24]
		   0x010D1364:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D1368 Offset: 0x10D1368 VA: 0x10D1368
	private object[] get_cells() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D1368:  10402DE9     PUSH {r4, lr}
		   0x010D136C:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D1370:  000054E3     CMPS r0, r4, 0x0
		   0x010D1374:  0000001A     BNE $+0x8  // if (!=) goto 0x010D137C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D1378:  1428FAEB     BL $-0x175fa8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D137C:  600094E5     LDR r0, [r4, 0x60]
		   0x010D1380:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D1384 Offset: 0x10D1384 VA: 0x10D1384
	public void add_tryAddForSmallInventory(Func<Item, bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D1384:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010D1388:  98409FE5     LDR r4, [pc, 0x98]
		   0x010D138C:  0090A0E1     MOV sb, r0
		   0x010D1390:  0180A0E1     MOV r8, r1
		   0x010D1394:  04408FE0     ADD r4, pc, r4
		   0x010D1398:  0000D4E5     LDRB r0, [r4]
		   0x010D139C:  000050E3     CMPS r0, r0, 0x0
		   0x010D13A0:  0400001A     BNE $+0x18  // if (!=) goto 0x010D13B8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D13A4:  80009FE5     LDR r0, [pc, 0x80]
		   0x010D13A8:  00009FE7     LDR r0, [pc, r0]
		   0x010D13AC:  6B27FAEB     BL $-0x17624c
		   0x010D13B0:  0100A0E3     MOV r0, 0x1
		   0x010D13B4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D13B8:  6800B9E5     LDR r0, [sb, 0x68]!
		   0x010D13BC:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010D13C0:  0AA09FE7     LDR r10, [pc, r10]
		   0x010D13C4:  0810A0E1     MOV r1, r8
		   0x010D13C8:  0020A0E3     MOV r2, 0x0
		   0x010D13CC:  0060A0E1     MOV r6, r0
		   0x010D13D0:  0070A0E3     MOV r7, 0x0
		   0x010D13D4:  57207FEB     BL $+0x1fc8164  // CALL → Delegate.Combine
		   0x010D13D8:  000050E3     CMPS r0, r0, 0x0
		   0x010D13DC:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D140C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D13E0:  00509AE5     LDR r5, [r10]
		   0x010D13E4:  0040A0E1     MOV r4, r0
		   0x010D13E8:  0510A0E1     MOV r1, r5
		   0x010D13EC:  A927FAEB     BL $-0x176154
		   0x010D13F0:  0070A0E1     MOV r7, r0
		   0x010D13F4:  000050E3     CMPS r0, r0, 0x0
		   0x010D13F8:  0300001A     BNE $+0x14  // if (!=) goto 0x010D140C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D13FC:  0400A0E1     MOV r0, r4
		   0x010D1400:  0510A0E1     MOV r1, r5
		   0x010D1404:  DF28FAEB     BL $-0x175c7c
		   0x010D1408:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010D140C:  0900A0E1     MOV r0, sb
		   0x010D1410:  0710A0E1     MOV r1, r7
		   0x010D1414:  0620A0E1     MOV r2, r6
		   0x010D1418:  1614FBEB     BL $-0x13afa0
		   0x010D141C:  060050E1     CMPS r0, r0, r6
		   0x010D1420:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010D1424:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010D1428:  B3A81503     TSTSEQ r10, r5, 0xb30000
		   0x010D142C:  BC7AFA02     RSCSEQ r7, r10, 0xbc000
		   0x010D1430:  A47AFA02     RSCSEQ r7, r10, 0xa4000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D1434 Offset: 0x10D1434 VA: 0x10D1434
	public void remove_tryAddForSmallInventory(Func<Item, bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D1434:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010D1438:  98409FE5     LDR r4, [pc, 0x98]
		   0x010D143C:  0090A0E1     MOV sb, r0
		   0x010D1440:  0180A0E1     MOV r8, r1
		   0x010D1444:  04408FE0     ADD r4, pc, r4
		   0x010D1448:  0000D4E5     LDRB r0, [r4]
		   0x010D144C:  000050E3     CMPS r0, r0, 0x0
		   0x010D1450:  0400001A     BNE $+0x18  // if (!=) goto 0x010D1468
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D1454:  80009FE5     LDR r0, [pc, 0x80]
		   0x010D1458:  00009FE7     LDR r0, [pc, r0]
		   0x010D145C:  3F27FAEB     BL $-0x1762fc
		   0x010D1460:  0100A0E3     MOV r0, 0x1
		   0x010D1464:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D1468:  6800B9E5     LDR r0, [sb, 0x68]!
		   0x010D146C:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010D1470:  0AA09FE7     LDR r10, [pc, r10]
		   0x010D1474:  0810A0E1     MOV r1, r8
		   0x010D1478:  0020A0E3     MOV r2, 0x0
		   0x010D147C:  0060A0E1     MOV r6, r0
		   0x010D1480:  0070A0E3     MOV r7, 0x0
		   0x010D1484:  A9207FEB     BL $+0x1fc82ac  // CALL → Delegate.Remove
		   0x010D1488:  000050E3     CMPS r0, r0, 0x0
		   0x010D148C:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D14BC
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D1490:  00509AE5     LDR r5, [r10]
		   0x010D1494:  0040A0E1     MOV r4, r0
		   0x010D1498:  0510A0E1     MOV r1, r5
		   0x010D149C:  7D27FAEB     BL $-0x176204
		   0x010D14A0:  0070A0E1     MOV r7, r0
		   0x010D14A4:  000050E3     CMPS r0, r0, 0x0
		   0x010D14A8:  0300001A     BNE $+0x14  // if (!=) goto 0x010D14BC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D14AC:  0400A0E1     MOV r0, r4
		   0x010D14B0:  0510A0E1     MOV r1, r5
		   0x010D14B4:  B328FAEB     BL $-0x175d2c
		   0x010D14B8:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010D14BC:  0900A0E1     MOV r0, sb
		   0x010D14C0:  0710A0E1     MOV r1, r7
		   0x010D14C4:  0620A0E1     MOV r2, r6
		   0x010D14C8:  EA13FBEB     BL $-0x13b050
		   0x010D14CC:  060050E1     CMPS r0, r0, r6
		   0x010D14D0:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010D14D4:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010D14D8:  04A81503     TSTSEQ r10, r5, 0x40000
		   0x010D14DC:  0C7AFA02     RSCSEQ r7, r10, 0xc000
		   0x010D14E0:  F479FA02     RSCSEQ r7, r10, 0x3d0000
		*/
	}

	// RVA: 0x10D14E4 Offset: 0x10D14E4 VA: 0x10D14E4
	public void Init(GameState gameState, ReceivedItemsController receivedItemsController, GoalsController goalsController, ResourcesPack resourcesPack, OpenChestRewardsAndShow openChestRewardsAndShow, StarsChest starsChest, Func<RewardsBox.RewardsBoxData> getMainRewardBoxData) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D14E4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D14E8:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10D2088 Offset: 0x10D2088 VA: 0x10D2088
	public void AspectRatioApply() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D2088:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x10D25E0 Offset: 0x10D25E0 VA: 0x10D25E0
	public void LoadLevel(FieldData levelToLoad, string questId, LevelLayout levelLayout) {
		/* Disassembly (ARM32, 59 instructions, 0xEC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D25E0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D25E4:  08D04DE2     SUB sp, sp, 0x8
		   0x010D25E8:  C0609FE5     LDR r6, [pc, 0xc0]
		   0x010D25EC:  0080A0E1     MOV r8, r0
		   0x010D25F0:  0340A0E1     MOV r4, r3
		   0x010D25F4:  0290A0E1     MOV sb, r2
		   0x010D25F8:  06608FE0     ADD r6, pc, r6
		   0x010D25FC:  0150A0E1     MOV r5, r1
		   0x010D2600:  0000D6E5     LDRB r0, [r6]
		   0x010D2604:  000050E3     CMPS r0, r0, 0x0
		   0x010D2608:  0A00001A     BNE $+0x30  // if (!=) goto 0x010D2638
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D260C:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010D2610:  00009FE7     LDR r0, [pc, r0]
		   0x010D2614:  D122FAEB     BL $-0x1774b4
		   0x010D2618:  98009FE5     LDR r0, [pc, 0x98]
		   0x010D261C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2620:  CE22FAEB     BL $-0x1774c0
		   0x010D2624:  90009FE5     LDR r0, [pc, 0x90]
		   0x010D2628:  00009FE7     LDR r0, [pc, r0]
		   0x010D262C:  CB22FAEB     BL $-0x1774cc
		   0x010D2630:  0100A0E3     MOV r0, 0x1
		   0x010D2634:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D2638:  80009FE5     LDR r0, [pc, 0x80]
		   0x010D263C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2640:  000090E5     LDR r0, [r0]
		   0x010D2644:  5E23FAEB     BL $-0x177280
		   0x010D2648:  0010A0E3     MOV r1, 0x0
		   0x010D264C:  0060A0E1     MOV r6, r0
		   0x010D2650:  650B7FEB     BL $+0x1fc2d9c  // CALL → Object..ctor
		   0x010D2654:  000056E3     CMPS r0, r6, 0x0
		   0x010D2658:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2660
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D265C:  5B23FAEB     BL $-0x17728c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D2660:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x010D2664:  00009FE7     LDR r0, [pc, r0]
		   0x010D2668:  F880C6E1     STRD r8, sb, [r6, 0x8]
		   0x010D266C:  000090E5     LDR r0, [r0]
		   0x010D2670:  5323FAEB     BL $-0x1772ac
		   0x010D2674:  0070A0E1     MOV r7, r0
		   0x010D2678:  48009FE5     LDR r0, [pc, 0x48]
		   0x010D267C:  0610A0E1     MOV r1, r6
		   0x010D2680:  0030A0E3     MOV r3, 0x0
		   0x010D2684:  00009FE7     LDR r0, [pc, r0]
		   0x010D2688:  002090E5     LDR r2, [r0]
		   0x010D268C:  0700A0E1     MOV r0, r7
		   0x010D2690:  2B6B7BEB     BL $+0x1edacb4  // CALL → Action..ctor
		   0x010D2694:  0800A0E1     MOV r0, r8
		   0x010D2698:  0510A0E1     MOV r1, r5
		   0x010D269C:  0720A0E1     MOV r2, r7
		   0x010D26A0:  0430A0E1     MOV r3, r4
		   0x010D26A4:  0A0000EB     BL $+0x30  // CALL → GameBoard.LoadLevel
		   0x010D26A8:  08D08DE2     ADD sp, sp, 0x8
		   0x010D26AC:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010D26B0:  52961503     TSTSEQ sb, r5, 0x5200000
		   0x010D26B4:  B442FA02     RSCSEQ r4, r10, 0x4000000b
		   0x010D26B8:  A868FA02     RSCSEQ r6, r10, 0xa80000
		   0x010D26BC:  A068FA02     RSCSEQ r6, r10, 0xa00000
		   0x010D26C0:  8C68FA02     RSCSEQ r6, r10, 0x8c0000
		   0x010D26C4:  6042FA02     RSCSEQ r4, r10, 0x6
		   0x010D26C8:  4068FA02     RSCSEQ r6, r10, 0x400000
		*/
	}

	// RVA: 0x10D280C Offset: 0x10D280C VA: 0x10D280C
	public void LoadLevel(FieldData levelToLoad) {
		/* Disassembly (ARM32, 57 instructions, 0xE4 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D280C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D2810:  08D04DE2     SUB sp, sp, 0x8
		   0x010D2814:  B8409FE5     LDR r4, [pc, 0xb8]
		   0x010D2818:  0060A0E1     MOV r6, r0
		   0x010D281C:  0170A0E1     MOV r7, r1
		   0x010D2820:  04408FE0     ADD r4, pc, r4
		   0x010D2824:  0000D4E5     LDRB r0, [r4]
		   0x010D2828:  000050E3     CMPS r0, r0, 0x0
		   0x010D282C:  0A00001A     BNE $+0x30  // if (!=) goto 0x010D285C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D2830:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010D2834:  00009FE7     LDR r0, [pc, r0]
		   0x010D2838:  4822FAEB     BL $-0x1776d8
		   0x010D283C:  98009FE5     LDR r0, [pc, 0x98]
		   0x010D2840:  00009FE7     LDR r0, [pc, r0]
		   0x010D2844:  4522FAEB     BL $-0x1776e4
		   0x010D2848:  90009FE5     LDR r0, [pc, 0x90]
		   0x010D284C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2850:  4222FAEB     BL $-0x1776f0
		   0x010D2854:  0100A0E3     MOV r0, 0x1
		   0x010D2858:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D285C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010D2860:  00009FE7     LDR r0, [pc, r0]
		   0x010D2864:  000090E5     LDR r0, [r0]
		   0x010D2868:  D522FAEB     BL $-0x1774a4
		   0x010D286C:  0010A0E3     MOV r1, 0x0
		   0x010D2870:  0040A0E1     MOV r4, r0
		   0x010D2874:  DC0A7FEB     BL $+0x1fc2b78  // CALL → Object..ctor
		   0x010D2878:  000054E3     CMPS r0, r4, 0x0
		   0x010D287C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2884
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D2880:  D222FAEB     BL $-0x1774b0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D2884:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x010D2888:  00009FE7     LDR r0, [pc, r0]
		   0x010D288C:  F860C4E1     STRD r6, r7, [r4, 0x8]
		   0x010D2890:  000090E5     LDR r0, [r0]
		   0x010D2894:  CA22FAEB     BL $-0x1774d0
		   0x010D2898:  0050A0E1     MOV r5, r0
		   0x010D289C:  48009FE5     LDR r0, [pc, 0x48]
		   0x010D28A0:  0410A0E1     MOV r1, r4
		   0x010D28A4:  0030A0E3     MOV r3, 0x0
		   0x010D28A8:  00009FE7     LDR r0, [pc, r0]
		   0x010D28AC:  002090E5     LDR r2, [r0]
		   0x010D28B0:  0500A0E1     MOV r0, r5
		   0x010D28B4:  A26A7BEB     BL $+0x1edaa90  // CALL → Action..ctor
		   0x010D28B8:  0600A0E1     MOV r0, r6
		   0x010D28BC:  0710A0E1     MOV r1, r7
		   0x010D28C0:  0520A0E1     MOV r2, r5
		   0x010D28C4:  0030A0E3     MOV r3, 0x0
		   0x010D28C8:  81FFFFEB     BL $-0x1f4
		   0x010D28CC:  08D08DE2     ADD sp, sp, 0x8
		   0x010D28D0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010D28D4:  2B941503     TSTSEQ sb, r5, 0x2b000000
		   0x010D28D8:  9040FA02     RSCSEQ r4, r10, 0x90
		   0x010D28DC:  8C66FA02     RSCSEQ r6, r10, 0x8c00000
		   0x010D28E0:  8466FA02     RSCSEQ r6, r10, 0x8400000
		   0x010D28E4:  7066FA02     RSCSEQ r6, r10, 0x7000000
		   0x010D28E8:  3C40FA02     RSCSEQ r4, r10, 0x3c
		   0x010D28EC:  2466FA02     RSCSEQ r6, r10, 0x2400000
		*/
	}

	// RVA: 0x10D28F8 Offset: 0x10D28F8 VA: 0x10D28F8
	public Item UnlockItem(Item item) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D28F8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D28FC:  0140A0E1     MOV r4, r1
		   0x010D2900:  0050A0E1     MOV r5, r0
		   0x010D2904:  070000EB     BL $+0x24  // CALL → GameBoard.ClearSuggestedMerge
		   0x010D2908:  285095E5     LDR r5, [r5, 0x28]
		   0x010D290C:  000055E3     CMPS r0, r5, 0x0
		   0x010D2910:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2918
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D2914:  AD22FAEB     BL $-0x177544
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D2918:  0500A0E1     MOV r0, r5
		   0x010D291C:  0410A0E1     MOV r1, r4
		   0x010D2920:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010D2924:  0D0000EA     B $+0x3c  // TAIL CALL → GameState.Unlock
		*/
	}

	// RVA: 0x10D2BE4 Offset: 0x10D2BE4 VA: 0x10D2BE4
	public void PlaceItemToInventory(Item item, int pos, bool alreadyCreated) {
		/* Disassembly (ARM32, 174 instructions, 0x2B8 bytes):
		   // CFG: 31 blocks, 29 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D2BE4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D2BE8:  04D04DE2     SUB sp, sp, 0x4
		   0x010D2BEC:  80429FE5     LDR r4, [pc, 0x280]
		   0x010D2BF0:  00A0A0E1     MOV r10, r0
		   0x010D2BF4:  0380A0E1     MOV r8, r3
		   0x010D2BF8:  0290A0E1     MOV sb, r2
		   0x010D2BFC:  04408FE0     ADD r4, pc, r4
		   0x010D2C00:  01B0A0E1     MOV fp, r1
		   0x010D2C04:  0000D4E5     LDRB r0, [r4]
		   0x010D2C08:  000050E3     CMPS r0, r0, 0x0
		   0x010D2C0C:  0A00001A     BNE $+0x30  // if (!=) goto 0x010D2C3C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D2C10:  60029FE5     LDR r0, [pc, 0x260]
		   0x010D2C14:  00009FE7     LDR r0, [pc, r0]
		   0x010D2C18:  5021FAEB     BL $-0x177ab8
		   0x010D2C1C:  58029FE5     LDR r0, [pc, 0x258]
		   0x010D2C20:  00009FE7     LDR r0, [pc, r0]
		   0x010D2C24:  4D21FAEB     BL $-0x177ac4
		   0x010D2C28:  50029FE5     LDR r0, [pc, 0x250]
		   0x010D2C2C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2C30:  4A21FAEB     BL $-0x177ad0
		   0x010D2C34:  0100A0E3     MOV r0, 0x1
		   0x010D2C38:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D2C3C:  00005BE3     CMPS r0, fp, 0x0
		   0x010D2C40:  0600000A     BEQ $+0x20  // if (==) goto 0x010D2C60
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D2C44:  0B00A0E1     MOV r0, fp
		   0x010D2C48:  0010A0E3     MOV r1, 0x0
		   0x010D2C4C:  96943CEB     BL $+0xf25260  // CALL → sub_1FF7EAC
		   0x010D2C50:  0010A0E3     MOV r1, 0x0
		   0x010D2C54:  0020A0E3     MOV r2, 0x0
		   0x010D2C58:  A81313EB     BL $+0x4c4ea8  // CALL → ShortcutExtensions.DOKill
		   0x010D2C5C:  070000EA     B $+0x24  // goto 0x010D2C80
		   // ──── Block 4 if (==) ────────────────────
		   0x010D2C60:  DA21FAEB     BL $-0x177890
		   0x010D2C64:  0000A0E3     MOV r0, 0x0
		   0x010D2C68:  0010A0E3     MOV r1, 0x0
		   0x010D2C6C:  8E943CEB     BL $+0xf25240  // CALL → sub_1FF7EAC
		   0x010D2C70:  0010A0E3     MOV r1, 0x0
		   0x010D2C74:  0020A0E3     MOV r2, 0x0
		   0x010D2C78:  A01313EB     BL $+0x4c4e88  // CALL → ShortcutExtensions.DOKill
		   0x010D2C7C:  D321FAEB     BL $-0x1778ac
		   // ──── Block 5 ──────────────────────────────
		   0x010D2C80:  0B00A0E1     MOV r0, fp
		   0x010D2C84:  0010A0E3     MOV r1, 0x0
		   0x010D2C88:  87943CEB     BL $+0xf25224  // CALL → sub_1FF7EAC
		   0x010D2C8C:  F0419FE5     LDR r4, [pc, 0x1f0]
		   0x010D2C90:  0070A0E1     MOV r7, r0
		   0x010D2C94:  04408FE0     ADD r4, pc, r4
		   0x010D2C98:  0000D4E5     LDRB r0, [r4]
		   0x010D2C9C:  000050E3     CMPS r0, r0, 0x0
		   0x010D2CA0:  0400001A     BNE $+0x18  // if (!=) goto 0x010D2CB8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010D2CA4:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x010D2CA8:  00009FE7     LDR r0, [pc, r0]
		   0x010D2CAC:  2B21FAEB     BL $-0x177b4c
		   0x010D2CB0:  0100A0E3     MOV r0, 0x1
		   0x010D2CB4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 7 if (!=) ────────────────────
		   0x010D2CB8:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x010D2CBC:  000057E3     CMPS r0, r7, 0x0
		   0x010D2CC0:  00009FE7     LDR r0, [pc, r0]
		   0x010D2CC4:  000090E5     LDR r0, [r0]
		   0x010D2CC8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D2CCC:  006090E5     LDR r6, [r0]
		   0x010D2CD0:  045090E5     LDR r5, [r0, 0x4]
		   0x010D2CD4:  084090E5     LDR r4, [r0, 0x8]
		   0x010D2CD8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2CE0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010D2CDC:  BB21FAEB     BL $-0x17790c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010D2CE0:  0000A0E3     MOV r0, 0x0
		   0x010D2CE4:  0610A0E1     MOV r1, r6
		   0x010D2CE8:  00008DE5     STR r0, [sp]
		   0x010D2CEC:  0700A0E1     MOV r0, r7
		   0x010D2CF0:  0520A0E1     MOV r2, r5
		   0x010D2CF4:  0430A0E1     MOV r3, r4
		   0x010D2CF8:  1C953CEB     BL $+0xf25478  // CALL → sub_1FF8170
		   0x010D2CFC:  00005BE3     CMPS r0, fp, 0x0
		   0x010D2D00:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2D08
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D2D04:  B121FAEB     BL $-0x177934
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D2D08:  10009BE5     LDR r0, [fp, 0x10]
		   0x010D2D0C:  000050E3     CMPS r0, r0, 0x0
		   0x010D2D10:  0010A013     MOVNE r1, 0x0
		   0x010D2D14:  D9E7FF1B     BLNE $-0x6094
		   0x010D2D18:  00009BE5     LDR r0, [fp]
		   0x010D2D1C:  0010A0E3     MOV r1, 0x0
		   0x010D2D20:  0020A0E3     MOV r2, 0x0
		   0x010D2D24:  087190E5     LDR r7, [r0, 0x108]
		   0x010D2D28:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010D2D2C:  0B00A0E1     MOV r0, fp
		   0x010D2D30:  37FF2FE1     BLX r7  // virtual call: vtable+0x108
		   0x010D2D34:  28409AE5     LDR r4, [r10, 0x28]
		   0x010D2D38:  000054E3     CMPS r0, r4, 0x0
		   0x010D2D3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2D44
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D2D40:  A221FAEB     BL $-0x177970
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D2D44:  0400A0E1     MOV r0, r4
		   0x010D2D48:  0B10A0E1     MOV r1, fp
		   0x010D2D4C:  0920A0E1     MOV r2, sb
		   0x010D2D50:  510000EB     BL $+0x14c  // CALL → GameState.ItemToInventory
		   0x010D2D54:  54409AE5     LDR r4, [r10, 0x54]
		   0x010D2D58:  000054E3     CMPS r0, r4, 0x0
		   0x010D2D5C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2D64
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D2D60:  9A21FAEB     BL $-0x177990
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D2D64:  0C3094E5     LDR r3, [r4, 0xc]
		   0x010D2D68:  0010A0E3     MOV r1, 0x0
		   0x010D2D6C:  142094E5     LDR r2, [r4, 0x14]
		   0x010D2D70:  200094E5     LDR r0, [r4, 0x20]
		   0x010D2D74:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x010D2D78:  10019FE5     LDR r0, [pc, 0x110]
		   0x010D2D7C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2D80:  40409AE5     LDR r4, [r10, 0x40]
		   0x010D2D84:  000090E5     LDR r0, [r0]
		   0x010D2D88:  741090E5     LDR r1, [r0, 0x74]
		   0x010D2D8C:  000051E3     CMPS r0, r1, 0x0
		   0x010D2D90:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2D98
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D2D94:  3E21FAEB     BL $-0x177b00
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D2D98:  0400A0E1     MOV r0, r4
		   0x010D2D9C:  0010A0E3     MOV r1, 0x0
		   0x010D2DA0:  0020A0E3     MOV r2, 0x0
		   0x010D2DA4:  7247FDEB     BL $-0xae230
		   0x010D2DA8:  000050E3     CMPS r0, r0, 0x0
		   0x010D2DAC:  0500000A     BEQ $+0x1c  // if (==) goto 0x010D2DC8
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x010D2DB0:  40409AE5     LDR r4, [r10, 0x40]
		   0x010D2DB4:  000054E3     CMPS r0, r4, 0x0
		   0x010D2DB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2DC0
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010D2DBC:  8321FAEB     BL $-0x1779ec
		   // ──── Block 21 if (!=) ────────────────────
		   0x010D2DC0:  0000A0E3     MOV r0, 0x0
		   0x010D2DC4:  3100C4E5     STRB r0, [r4, 0x31]  // vtable: Object.Equals
		   // ──── Block 22 if (==) ────────────────────
		   0x010D2DC8:  000058E3     CMPS r0, r8, 0x0
		   0x010D2DCC:  0800001A     BNE $+0x28  // if (!=) goto 0x010D2DF4
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D2DD0:  58009AE5     LDR r0, [r10, 0x58]
		   0x010D2DD4:  000050E3     CMPS r0, r0, 0x0
		   0x010D2DD8:  0500000A     BEQ $+0x1c  // if (==) goto 0x010D2DF4
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x010D2DDC:  0C7090E5     LDR r7, [r0, 0xc]
		   0x010D2DE0:  0B10A0E1     MOV r1, fp
		   0x010D2DE4:  143090E5     LDR r3, [r0, 0x14]
		   0x010D2DE8:  0920A0E1     MOV r2, sb
		   0x010D2DEC:  200090E5     LDR r0, [r0, 0x20]
		   0x010D2DF0:  37FF2FE1     BLX r7  // virtual call: Object.ToString
		   // ──── Block 25 (from 2 paths) ──────────────────
		   0x010D2DF4:  0A00A0E1     MOV r0, r10
		   0x010D2DF8:  0010A0E3     MOV r1, 0x0
		   0x010D2DFC:  850000EB     BL $+0x21c  // CALL → GameBoard.HideSelection
		   0x010D2E00:  00009BE5     LDR r0, [fp]
		   0x010D2E04:  702190E5     LDR r2, [r0, 0x170]
		   0x010D2E08:  741190E5     LDR r1, [r0, 0x174]
		   0x010D2E0C:  0B00A0E1     MOV r0, fp
		   0x010D2E10:  32FF2FE1     BLX r2  // virtual call: vtable+0x170
		   0x010D2E14:  78409FE5     LDR r4, [pc, 0x78]
		   0x010D2E18:  04409FE7     LDR r4, [pc, r4]
		   0x010D2E1C:  000094E5     LDR r0, [r4]
		   0x010D2E20:  741090E5     LDR r1, [r0, 0x74]
		   0x010D2E24:  000051E3     CMPS r0, r1, 0x0
		   0x010D2E28:  0100001A     BNE $+0xc  // if (!=) goto 0x010D2E34
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010D2E2C:  1821FAEB     BL $-0x177b98
		   0x010D2E30:  000094E5     LDR r0, [r4]
		   // ──── Block 27 if (!=) ────────────────────
		   0x010D2E34:  5C109FE5     LDR r1, [pc, 0x5c]
		   0x010D2E38:  01109FE7     LDR r1, [pc, r1]
		   0x010D2E3C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D2E40:  001091E5     LDR r1, [r1]
		   0x010D2E44:  2C4090E5     LDR r4, [r0, 0x2c]
		   0x010D2E48:  742091E5     LDR r2, [r1, 0x74]
		   0x010D2E4C:  000052E3     CMPS r0, r2, 0x0
		   0x010D2E50:  0100001A     BNE $+0xc  // if (!=) goto 0x010D2E5C
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010D2E54:  0100A0E1     MOV r0, r1
		   0x010D2E58:  0D21FAEB     BL $-0x177bc4
		   // ──── Block 29 if (!=) ────────────────────
		   0x010D2E5C:  0400A0E1     MOV r0, r4
		   0x010D2E60:  FE15A0E3     MOV r1, 0x3f800000
		   0x010D2E64:  0020A0E3     MOV r2, 0x0
		   0x010D2E68:  04D08DE2     ADD sp, sp, 0x4
		   0x010D2E6C:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D2E70:  FB2E04EA     B $+0x10bbf4  // TAIL CALL → SoundController.PlaySound
		   0x010D2E74:  50901503     TSTSEQ sb, r5, 0x50
		   0x010D2E78:  2439FA02     RSCSEQ r3, r10, 0x90000
		   0x010D2E7C:  205BFA02     RSCSEQ r5, r10, 0x8000
		   0x010D2E80:  185BFA02     RSCSEQ r5, r10, 0x6000
		   0x010D2E84:  EF8C1503     TSTSEQ r8, r5, 0xef00
		   0x010D2E88:  8847FA02     RSCSEQ r4, r10, 0x2200000
		   0x010D2E8C:  7047FA02     RSCSEQ r4, r10, 0x1c00000
		   0x010D2E90:  BC37FA02     RSCSEQ r3, r10, 0x2f00000
		   0x010D2E94:  2C59FA02     RSCSEQ r5, r10, 0xb0000
		   0x010D2E98:  0859FA02     RSCSEQ r5, r10, 0x20000
		*/
	}

	// RVA: 0x10D31BC Offset: 0x10D31BC VA: 0x10D31BC
	public void UpdateMergeHelper() {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D31BC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D31C0:  90509FE5     LDR r5, [pc, 0x90]
		   0x010D31C4:  0040A0E1     MOV r4, r0
		   0x010D31C8:  05508FE0     ADD r5, pc, r5
		   0x010D31CC:  0000D5E5     LDRB r0, [r5]
		   0x010D31D0:  000050E3     CMPS r0, r0, 0x0
		   0x010D31D4:  0700001A     BNE $+0x24  // if (!=) goto 0x010D31F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D31D8:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010D31DC:  00009FE7     LDR r0, [pc, r0]
		   0x010D31E0:  DE1FFAEB     BL $-0x178080
		   0x010D31E4:  74009FE5     LDR r0, [pc, 0x74]
		   0x010D31E8:  00009FE7     LDR r0, [pc, r0]
		   0x010D31EC:  DB1FFAEB     BL $-0x17808c
		   0x010D31F0:  0100A0E3     MOV r0, 0x1
		   0x010D31F4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D31F8:  480094E5     LDR r0, [r4, 0x48]
		   0x010D31FC:  0010A0E3     MOV r1, 0x0
		   0x010D3200:  0020A0E3     MOV r2, 0x0
		   0x010D3204:  708C10EB     BL $+0x4231c8  // CALL → ExtensionMethods.SafeKill
		   0x010D3208:  54009FE5     LDR r0, [pc, 0x54]
		   0x010D320C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3210:  000090E5     LDR r0, [r0]
		   0x010D3214:  6A20FAEB     BL $-0x177e50
		   0x010D3218:  0050A0E1     MOV r5, r0
		   0x010D321C:  44009FE5     LDR r0, [pc, 0x44]
		   0x010D3220:  0410A0E1     MOV r1, r4
		   0x010D3224:  0030A0E3     MOV r3, 0x0
		   0x010D3228:  00009FE7     LDR r0, [pc, r0]
		   0x010D322C:  002090E5     LDR r2, [r0]
		   0x010D3230:  0500A0E1     MOV r0, r5
		   0x010D3234:  2EB712EB     BL $+0x4adcc0  // CALL → TweenCallback..ctor
		   0x010D3238:  000000E3     MOV r0, 0x0
		   0x010D323C:  0510A0E1     MOV r1, r5
		   0x010D3240:  400044E3     MOVT r0, 0x4040
		   0x010D3244:  0120A0E3     MOV r2, 0x1
		   0x010D3248:  0030A0E3     MOV r3, 0x0
		   0x010D324C:  8DD012EB     BL $+0x4b423c  // CALL → DOVirtual.DelayedCall
		   0x010D3250:  480084E5     STR r0, [r4, 0x48]
		   0x010D3254:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010D3258:  858A1503     TSTSEQ r8, r5, 0x85000
		   0x010D325C:  145DFA02     RSCSEQ r5, r10, 0x500
		   0x010D3260:  C444FA02     RSCSEQ r4, r10, 0xc4000000
		   0x010D3264:  A044FA02     RSCSEQ r4, r10, 0xa0000000
		   0x010D3268:  C85CFA02     RSCSEQ r5, r10, 0xc800
		*/
	}

	// RVA: 0x10D2928 Offset: 0x10D2928 VA: 0x10D2928
	public void ClearSuggestedMerge() {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D2928:  10402DE9     PUSH {r4, lr}
		   0x010D292C:  0040A0E1     MOV r4, r0
		   0x010D2930:  480090E5     LDR r0, [r0, 0x48]
		   0x010D2934:  0010A0E3     MOV r1, 0x0
		   0x010D2938:  0020A0E3     MOV r2, 0x0
		   0x010D293C:  A28E10EB     BL $+0x423a90  // CALL → ExtensionMethods.SafeKill
		   0x010D2940:  504094E5     LDR r4, [r4, 0x50]
		   0x010D2944:  000054E3     CMPS r0, r4, 0x0
		   0x010D2948:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2950
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D294C:  9F22FAEB     BL $-0x17757c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D2950:  0400A0E1     MOV r0, r4
		   0x010D2954:  0010A0E3     MOV r1, 0x0
		   0x010D2958:  1040BDE8     POP {r4, lr}
		   0x010D295C:  773A01EA     B $+0x4e9e4  // TAIL CALL → MergeSuggestionHelper.ClearSuggestedMerge
		*/
	}

	// RVA: 0x10D326C Offset: 0x10D326C VA: 0x10D326C
	public CreateItemResult CreateFromInventory(UIInventoryItem iItem, int dragInvPos, Vector2 initialPos) {
		/* Disassembly (ARM32, 99 instructions, 0x18C bytes):
		   // CFG: 15 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D326C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D3270:  3CD04DE2     SUB sp, sp, 0x3c
		   0x010D3274:  18308DE5     STR r3, [sp, 0x18]
		   0x010D3278:  00A0A0E1     MOV r10, r0
		   0x010D327C:  28469FE5     LDR r4, [pc, 0x628]
		   0x010D3280:  0260A0E1     MOV r6, r2
		   0x010D3284:  0150A0E1     MOV r5, r1
		   0x010D3288:  04408FE0     ADD r4, pc, r4
		   0x010D328C:  0000D4E5     LDRB r0, [r4]
		   0x010D3290:  000050E3     CMPS r0, r0, 0x0
		   0x010D3294:  1600001A     BNE $+0x60  // if (!=) goto 0x010D32F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D3298:  10069FE5     LDR r0, [pc, 0x610]
		   0x010D329C:  00009FE7     LDR r0, [pc, r0]
		   0x010D32A0:  AE1FFAEB     BL $-0x178140
		   0x010D32A4:  08069FE5     LDR r0, [pc, 0x608]
		   0x010D32A8:  00009FE7     LDR r0, [pc, r0]
		   0x010D32AC:  AB1FFAEB     BL $-0x17814c
		   0x010D32B0:  00069FE5     LDR r0, [pc, 0x600]
		   0x010D32B4:  00009FE7     LDR r0, [pc, r0]
		   0x010D32B8:  A81FFAEB     BL $-0x178158
		   0x010D32BC:  F8059FE5     LDR r0, [pc, 0x5f8]
		   0x010D32C0:  00009FE7     LDR r0, [pc, r0]
		   0x010D32C4:  A51FFAEB     BL $-0x178164
		   0x010D32C8:  F0059FE5     LDR r0, [pc, 0x5f0]
		   0x010D32CC:  00009FE7     LDR r0, [pc, r0]
		   0x010D32D0:  A21FFAEB     BL $-0x178170
		   0x010D32D4:  E8059FE5     LDR r0, [pc, 0x5e8]
		   0x010D32D8:  00009FE7     LDR r0, [pc, r0]
		   0x010D32DC:  9F1FFAEB     BL $-0x17817c
		   0x010D32E0:  E0059FE5     LDR r0, [pc, 0x5e0]
		   0x010D32E4:  00009FE7     LDR r0, [pc, r0]
		   0x010D32E8:  9C1FFAEB     BL $-0x178188
		   0x010D32EC:  0100A0E3     MOV r0, 0x1
		   0x010D32F0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D32F4:  1C4095E5     LDR r4, [r5, 0x1c]
		   0x010D32F8:  0000A0E3     MOV r0, 0x0
		   0x010D32FC:  34008DE5     STR r0, [sp, 0x34]
		   0x010D3300:  000054E3     CMPS r0, r4, 0x0
		   0x010D3304:  30008DE5     STR r0, [sp, 0x30]
		   0x010D3308:  38008DE5     STR r0, [sp, 0x38]
		   0x010D330C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3314
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D3310:  2E20FAEB     BL $-0x177f40
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D3314:  604094E5     LDR r4, [r4, 0x60]
		   0x010D3318:  14608DE5     STR r6, [sp, 0x14]
		   0x010D331C:  000054E3     CMPS r0, r4, 0x0
		   0x010D3320:  1C508DE5     STR r5, [sp, 0x1c]
		   0x010D3324:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D3354
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010D3328:  0400A0E1     MOV r0, r4
		   0x010D332C:  0010A0E3     MOV r1, 0x0
		   0x010D3330:  0020A0E3     MOV r2, 0x0
		   0x010D3334:  C7827EEB     BL $+0x1fa0b24  // CALL → Array.GetUpperBound
		   0x010D3338:  00B0A0E1     MOV fp, r0
		   0x010D333C:  0400A0E1     MOV r0, r4
		   0x010D3340:  0110A0E3     MOV r1, 0x1
		   0x010D3344:  0020A0E3     MOV r2, 0x0
		   0x010D3348:  C2827EEB     BL $+0x1fa0b10  // CALL → Array.GetUpperBound
		   0x010D334C:  0060A0E1     MOV r6, r0
		   0x010D3350:  0C0000EA     B $+0x38  // goto 0x010D3388
		   // ──── Block 6 if (==) ────────────────────
		   0x010D3354:  1D20FAEB     BL $-0x177f84
		   0x010D3358:  0000A0E3     MOV r0, 0x0
		   0x010D335C:  0010A0E3     MOV r1, 0x0
		   0x010D3360:  0020A0E3     MOV r2, 0x0
		   0x010D3364:  BB827EEB     BL $+0x1fa0af4  // CALL → Array.GetUpperBound
		   0x010D3368:  00B0A0E1     MOV fp, r0
		   0x010D336C:  1720FAEB     BL $-0x177f9c
		   0x010D3370:  0000A0E3     MOV r0, 0x0
		   0x010D3374:  0110A0E3     MOV r1, 0x1
		   0x010D3378:  0020A0E3     MOV r2, 0x0
		   0x010D337C:  B5827EEB     BL $+0x1fa0adc  // CALL → Array.GetUpperBound
		   0x010D3380:  0060A0E1     MOV r6, r0
		   0x010D3384:  1120FAEB     BL $-0x177fb4
		   // ──── Block 7 ──────────────────────────────
		   0x010D3388:  0400A0E1     MOV r0, r4
		   0x010D338C:  0010A0E3     MOV r1, 0x0
		   0x010D3390:  0020A0E3     MOV r2, 0x0
		   0x010D3394:  0070A0E3     MOV r7, 0x0
		   0x010D3398:  25757EEB     BL $+0x1f9d49c  // CALL → Array.GetLowerBound
		   0x010D339C:  0B0050E1     CMPS r0, r0, fp
		   0x010D33A0:  890000DA     BLE $+0x22c
		   0x010D33A4:  24059FE5     LDR r0, [pc, 0x524]
		   0x010D33A8:  00009FE7     LDR r0, [pc, r0]
		   0x010D33AC:  000090E5     LDR r0, [r0]
		   0x010D33B0:  741090E5     LDR r1, [r0, 0x74]
		   0x010D33B4:  000051E3     CMPS r0, r1, 0x0
		   0x010D33B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D33C0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D33BC:  B41FFAEB     BL $-0x178128
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D33C0:  0700A0E1     MOV r0, r7
		   0x010D33C4:  0010A0E3     MOV r1, 0x0
		   0x010D33C8:  8B933CEB     BL $+0xf24e34  // CALL → sub_1FF81FC
		   0x010D33CC:  14B09DE5     LDR fp, [sp, 0x14]
		   0x010D33D0:  0080A0E1     MOV r8, r0
		   0x010D33D4:  00005BE3     CMPS r0, fp, 0x0
		   0x010D33D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D33E0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D33DC:  FB1FFAEB     BL $-0x17800c
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D33E0:  08409BE5     LDR r4, [fp, 0x8]
		   0x010D33E4:  000054E3     CMPS r0, r4, 0x0
		   0x010D33E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D33F0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D33EC:  F71FFAEB     BL $-0x17801c
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D33F0:  1C109DE5     LDR r1, [sp, 0x1c]
		   0x010D33F4:  0C509BE5     LDR r5, [fp, 0xc]
		*/
	}

	// RVA: 0x10D4218 Offset: 0x10D4218 VA: 0x10D4218
	public void MoveItemInsideInventory(int itemID, int place) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D4218:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D421C:  286090E5     LDR r6, [r0, 0x28]
		   0x010D4220:  0240A0E1     MOV r4, r2
		   0x010D4224:  0150A0E1     MOV r5, r1
		   0x010D4228:  000056E3     CMPS r0, r6, 0x0
		   0x010D422C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4234
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D4230:  661CFAEB     BL $-0x178e60
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4234:  0600A0E1     MOV r0, r6
		   0x010D4238:  0510A0E1     MOV r1, r5
		   0x010D423C:  0420A0E1     MOV r2, r4
		   0x010D4240:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010D4244:  FFFFFFEA     B $+0x4  // TAIL CALL → GameState.MoveItemInsideInventory
		*/
	}

	// RVA: 0x10D428C Offset: 0x10D428C VA: 0x10D428C
	public void StartGame() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D428C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D4290:  A8509FE5     LDR r5, [pc, 0xa8]
		   0x010D4294:  0040A0E1     MOV r4, r0
		   0x010D4298:  05508FE0     ADD r5, pc, r5
		   0x010D429C:  0000D5E5     LDRB r0, [r5]
		   0x010D42A0:  000050E3     CMPS r0, r0, 0x0
		   0x010D42A4:  0400001A     BNE $+0x18  // if (!=) goto 0x010D42BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D42A8:  94009FE5     LDR r0, [pc, 0x94]
		   0x010D42AC:  00009FE7     LDR r0, [pc, r0]
		   0x010D42B0:  AA1BFAEB     BL $-0x179150
		   0x010D42B4:  0100A0E3     MOV r0, 0x1
		   0x010D42B8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D42BC:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x010D42C0:  000055E3     CMPS r0, r5, 0x0
		   0x010D42C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D42CC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D42C8:  401CFAEB     BL $-0x178ef8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D42CC:  0500A0E1     MOV r0, r5
		   0x010D42D0:  E30100EB     BL $+0x794  // CALL → GameBoardConstructor.Show
		   0x010D42D4:  0400A0E1     MOV r0, r4
		   0x010D42D8:  0010A0E3     MOV r1, 0x0
		   0x010D42DC:  0050A0E3     MOV r5, 0x0
		   0x010D42E0:  4CFBFFEB     BL $-0x12c8
		   0x010D42E4:  546094E5     LDR r6, [r4, 0x54]
		   0x010D42E8:  000056E3     CMPS r0, r6, 0x0
		   0x010D42EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D42F4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D42F0:  361CFAEB     BL $-0x178f20
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D42F4:  0C3096E5     LDR r3, [r6, 0xc]
		   0x010D42F8:  0010A0E3     MOV r1, 0x0
		   0x010D42FC:  142096E5     LDR r2, [r6, 0x14]
		   0x010D4300:  200096E5     LDR r0, [r6, 0x20]
		   0x010D4304:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x010D4308:  0400A0E1     MOV r0, r4
		   0x010D430C:  445084E5     STR r5, [r4, 0x44]
		   0x010D4310:  A9FBFFEB     BL $-0x1154
		   0x010D4314:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010D4318:  00009FE7     LDR r0, [pc, r0]
		   0x010D431C:  000090E5     LDR r0, [r0]
		   0x010D4320:  741090E5     LDR r1, [r0, 0x74]
		   0x010D4324:  000051E3     CMPS r0, r1, 0x0
		   0x010D4328:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4330
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D432C:  D81BFAEB     BL $-0x179098
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D4330:  0400A0E1     MOV r0, r4
		   0x010D4334:  0010A0E3     MOV r1, 0x0
		   0x010D4338:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010D433C:  B4FE02EA     B $+0xbfad8  // TAIL CALL → ScreensTracker.Activate
		   0x010D4340:  B7791503     TSTSEQ r7, r5, 0x2dc000
		   0x010D4344:  543AFA02     RSCSEQ r3, r10, 0x54000
		   0x010D4348:  E839FA02     RSCSEQ r3, r10, 0x3a0000
		*/
	}

	// RVA: 0x10D43AC Offset: 0x10D43AC VA: 0x10D43AC
	public void SetActiveCells(Vector2Int[] cellPositions) {
		/* Disassembly (ARM32, 141 instructions, 0x234 bytes):
		   // CFG: 40 blocks, 41 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D43AC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D43B0:  04D04DE2     SUB sp, sp, 0x4
		   0x010D43B4:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D43B8:  01A0A0E1     MOV r10, r1
		   0x010D43BC:  0050A0E1     MOV r5, r0
		   0x010D43C0:  000054E3     CMPS r0, r4, 0x0
		   0x010D43C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D43CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D43C8:  001CFAEB     BL $-0x178ff8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D43CC:  606094E5     LDR r6, [r4, 0x60]
		   0x010D43D0:  00508DE5     STR r5, [sp]
		   0x010D43D4:  000056E3     CMPS r0, r6, 0x0
		   0x010D43D8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D4408
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D43DC:  0600A0E1     MOV r0, r6
		   0x010D43E0:  0010A0E3     MOV r1, 0x0
		   0x010D43E4:  0020A0E3     MOV r2, 0x0
		   0x010D43E8:  9A7E7EEB     BL $+0x1f9fa70  // CALL → Array.GetUpperBound
		   0x010D43EC:  0090A0E1     MOV sb, r0
		   0x010D43F0:  0600A0E1     MOV r0, r6
		   0x010D43F4:  0110A0E3     MOV r1, 0x1
		   0x010D43F8:  0020A0E3     MOV r2, 0x0
		   0x010D43FC:  957E7EEB     BL $+0x1f9fa5c  // CALL → Array.GetUpperBound
		   0x010D4400:  00B0A0E1     MOV fp, r0
		   0x010D4404:  0C0000EA     B $+0x38  // goto 0x010D443C
		   // ──── Block 4 if (==) ────────────────────
		   0x010D4408:  F01BFAEB     BL $-0x179038
		   0x010D440C:  0000A0E3     MOV r0, 0x0
		   0x010D4410:  0010A0E3     MOV r1, 0x0
		   0x010D4414:  0020A0E3     MOV r2, 0x0
		   0x010D4418:  8E7E7EEB     BL $+0x1f9fa40  // CALL → Array.GetUpperBound
		   0x010D441C:  0090A0E1     MOV sb, r0
		   0x010D4420:  EA1BFAEB     BL $-0x179050
		   0x010D4424:  0000A0E3     MOV r0, 0x0
		   0x010D4428:  0110A0E3     MOV r1, 0x1
		   0x010D442C:  0020A0E3     MOV r2, 0x0
		   0x010D4430:  887E7EEB     BL $+0x1f9fa28  // CALL → Array.GetUpperBound
		   0x010D4434:  00B0A0E1     MOV fp, r0
		   0x010D4438:  E41BFAEB     BL $-0x179068
		   // ──── Block 5 ──────────────────────────────
		   0x010D443C:  0600A0E1     MOV r0, r6
		   0x010D4440:  0010A0E3     MOV r1, 0x0
		   0x010D4444:  0020A0E3     MOV r2, 0x0
		   0x010D4448:  0080A0E3     MOV r8, 0x0
		   0x010D444C:  F8707EEB     BL $+0x1f9c3e8  // CALL → Array.GetLowerBound
		   0x010D4450:  090050E1     CMPS r0, r0, sb
		   0x010D4454:  2D0000CA     BGT $+0xbc  // if (>) goto 0x010D4510
		   // 
		   // ──── Block 6 else (<=) ────────────────────
		   0x010D4458:  0050A0E1     MOV r5, r0
		   0x010D445C:  000056E3     CMPS r0, r6, 0x0
		   0x010D4460:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4468
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D4464:  D91BFAEB     BL $-0x179094
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D4468:  0600A0E1     MOV r0, r6
		   0x010D446C:  0110A0E3     MOV r1, 0x1
		   0x010D4470:  0020A0E3     MOV r2, 0x0
		   0x010D4474:  EE707EEB     BL $+0x1f9c3c0  // CALL → Array.GetLowerBound
		   0x010D4478:  0B0050E1     CMPS r0, r0, fp
		   0x010D447C:  200000CA     BGT $+0x88  // if (>) goto 0x010D4504
		   // 
		   // ──── Block 9 else (<=) ────────────────────
		   0x010D4480:  0040A0E1     MOV r4, r0
		   0x010D4484:  000056E3     CMPS r0, r6, 0x0
		   0x010D4488:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4490
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D448C:  CF1BFAEB     BL $-0x1790bc
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D4490:  080096E5     LDR r0, [r6, 0x8]
		   0x010D4494:  001090E5     LDR r1, [r0]
		   0x010D4498:  050051E1     CMPS r0, r1, r5
		   0x010D449C:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D44A8
		   // 
		   // ──── Block 12 else (<= (unsigned)) ────────────────────
		   0x010D44A0:  CB1BFAEB     BL $-0x1790cc
		   0x010D44A4:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 13 if (> (unsigned)) ────────────────────
		   0x010D44A8:  087090E5     LDR r7, [r0, 0x8]
		   0x010D44AC:  040057E1     CMPS r0, r7, r4
		   0x010D44B0:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D44B8
		   // 
		   // ──── Block 14 else (<= (unsigned)) ────────────────────
		   0x010D44B4:  C61BFAEB     BL $-0x1790e0
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x010D44B8:  954720E0     MLA r0, r5, r7, r4
		   0x010D44BC:  000186E0     ADD r0, r6, r0, lsl 2
		   0x010D44C0:  100090E5     LDR r0, [r0, 0x10]
		   0x010D44C4:  000050E3     CMPS r0, r0, 0x0
		   0x010D44C8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D44F8
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x010D44CC:  107090E5     LDR r7, [r0, 0x10]
		   0x010D44D0:  3880C0E5     STRB r8, [r0, 0x38]
		   0x010D44D4:  000057E3     CMPS r0, r7, 0x0
		   0x010D44D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D44E0
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D44DC:  BB1BFAEB     BL $-0x17910c
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D44E0:  000097E5     LDR r0, [r7]
		   0x010D44E4:  0010A0E3     MOV r1, 0x0
		   0x010D44E8:  883190E5     LDR r3, [r0, 0x188]
		   0x010D44EC:  8C2190E5     LDR r2, [r0, 0x18c]
		   0x010D44F0:  0700A0E1     MOV r0, r7
		   0x010D44F4:  33FF2FE1     BLX r3  // virtual call: vtable+0x188
		   // ──── Block 19 if (==) ────────────────────
		   0x010D44F8:  014084E2     ADD r4, r4, 0x1
		   0x010D44FC:  0B0054E1     CMPS r0, r4, fp
		   0x010D4500:  DFFFFFDA     BLE $-0x7c
		   // ──── Block 20 (from 2 paths) ──────────────────
		   0x010D4504:  015085E2     ADD r5, r5, 0x1
		   0x010D4508:  090055E1     CMPS r0, r5, sb
		   0x010D450C:  D2FFFFDA     BLE $-0xb0
		   // ──── Block 21 (from 2 paths) ──────────────────
		   0x010D4510:  10508AE2     ADD r5, r10, 0x10
		   0x010D4514:  00909DE5     LDR sb, [sp]
		   0x010D4518:  00005AE3     CMPS r0, r10, 0x0
		   0x010D451C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4524
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010D4520:  AA1BFAEB     BL $-0x179150
		   // ──── Block 23 if (!=) ────────────────────
		   0x010D4524:  0C009AE5     LDR r0, [r10, 0xc]
		   0x010D4528:  000058E1     CMPS r0, r8, r0
		   0x010D452C:  290000AA     BGE $+0xac  // if (>=) goto 0x010D45D8
		   // 
		   // ──── Block 24 else (<) ────────────────────
		   0x010D4530:  080050E1     CMPS r0, r0, r8
		   0x010D4534:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D453C
		   // 
		   // ──── Block 25 else (<= (unsigned)) ────────────────────
		   0x010D4538:  A51BFAEB     BL $-0x179164
		   // ──── Block 26 if (> (unsigned)) ────────────────────
		   0x010D453C:  1C6099E5     LDR r6, [sb, 0x1c]
		   0x010D4540:  900095E8     LDM r5, {r4, r7}
		   0x010D4544:  000056E3     CMPS r0, r6, 0x0
		   0x010D4548:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4550
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010D454C:  9F1BFAEB     BL $-0x17917c
		   // ──── Block 28 if (!=) ────────────────────
		   0x010D4550:  606096E5     LDR r6, [r6, 0x60]
		   0x010D4554:  000056E3     CMPS r0, r6, 0x0
		   0x010D4558:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4560
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010D455C:  9B1BFAEB     BL $-0x17918c
		   // ──── Block 30 if (!=) ────────────────────
		   0x010D4560:  080096E5     LDR r0, [r6, 0x8]
		   0x010D4564:  001090E5     LDR r1, [r0]
		   0x010D4568:  040051E1     CMPS r0, r1, r4
		   0x010D456C:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D4578
		   // 
		   // ──── Block 31 else (<= (unsigned)) ────────────────────
		   0x010D4570:  971BFAEB     BL $-0x17919c
		   0x010D4574:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 32 if (> (unsigned)) ────────────────────
		   0x010D4578:  08B090E5     LDR fp, [r0, 0x8]
		   0x010D457C:  07005BE1     CMPS r0, fp, r7
		   0x010D4580:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D4588
		   // 
		   // ──── Block 33 else (<= (unsigned)) ────────────────────
		   0x010D4584:  921BFAEB     BL $-0x1791b0
		   // ──── Block 34 if (> (unsigned)) ────────────────────
		   0x010D4588:  9B7420E0     MLA r0, fp, r4, r7
		   0x010D458C:  000186E0     ADD r0, r6, r0, lsl 2
		   0x010D4590:  100090E5     LDR r0, [r0, 0x10]
		   0x010D4594:  000050E3     CMPS r0, r0, 0x0
		   0x010D4598:  0B00000A     BEQ $+0x34  // if (==) goto 0x010D45CC
		   // 
		   // ──── Block 35 else (!=) ────────────────────
		   0x010D459C:  104090E5     LDR r4, [r0, 0x10]
		   0x010D45A0:  0110A0E3     MOV r1, 0x1
		   0x010D45A4:  3810C0E5     STRB r1, [r0, 0x38]
		   0x010D45A8:  000054E3     CMPS r0, r4, 0x0
		   0x010D45AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D45B4
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010D45B0:  861BFAEB     BL $-0x1791e0
		   // ──── Block 37 if (!=) ────────────────────
		   0x010D45B4:  000094E5     LDR r0, [r4]
		   0x010D45B8:  0110A0E3     MOV r1, 0x1
		   0x010D45BC:  883190E5     LDR r3, [r0, 0x188]
		   0x010D45C0:  8C2190E5     LDR r2, [r0, 0x18c]
		   0x010D45C4:  0400A0E1     MOV r0, r4
		   0x010D45C8:  33FF2FE1     BLX r3  // virtual call: vtable+0x188
		   // ──── Block 38 if (==) ────────────────────
		   0x010D45CC:  085085E2     ADD r5, r5, 0x8
		   0x010D45D0:  018088E2     ADD r8, r8, 0x1
		   0x010D45D4:  CFFFFFEA     B $-0xbc
		   // ──── Block 39 if (>=) ────────────────────
		   0x010D45D8:  04D08DE2     ADD sp, sp, 0x4
		   0x010D45DC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		*/
	}

	// RVA: 0x10D45E0 Offset: 0x10D45E0 VA: 0x10D45E0
	public void SetSelectableCells(Vector2Int[] cellPositions) {
		/* Disassembly (ARM32, 119 instructions, 0x1DC bytes):
		   // CFG: 32 blocks, 33 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D45E0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D45E4:  04D04DE2     SUB sp, sp, 0x4
		   0x010D45E8:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D45EC:  01A0A0E1     MOV r10, r1
		   0x010D45F0:  0050A0E1     MOV r5, r0
		   0x010D45F4:  000054E3     CMPS r0, r4, 0x0
		   0x010D45F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4600
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D45FC:  731BFAEB     BL $-0x17922c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4600:  606094E5     LDR r6, [r4, 0x60]
		   0x010D4604:  00508DE5     STR r5, [sp]
		   0x010D4608:  000056E3     CMPS r0, r6, 0x0
		   0x010D460C:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D463C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D4610:  0600A0E1     MOV r0, r6
		   0x010D4614:  0010A0E3     MOV r1, 0x0
		   0x010D4618:  0020A0E3     MOV r2, 0x0
		   0x010D461C:  0D7E7EEB     BL $+0x1f9f83c  // CALL → Array.GetUpperBound
		   0x010D4620:  0090A0E1     MOV sb, r0
		   0x010D4624:  0600A0E1     MOV r0, r6
		   0x010D4628:  0110A0E3     MOV r1, 0x1
		   0x010D462C:  0020A0E3     MOV r2, 0x0
		   0x010D4630:  087E7EEB     BL $+0x1f9f828  // CALL → Array.GetUpperBound
		   0x010D4634:  0070A0E1     MOV r7, r0
		   0x010D4638:  0C0000EA     B $+0x38  // goto 0x010D4670
		   // ──── Block 4 if (==) ────────────────────
		   0x010D463C:  631BFAEB     BL $-0x17926c
		   0x010D4640:  0000A0E3     MOV r0, 0x0
		   0x010D4644:  0010A0E3     MOV r1, 0x0
		   0x010D4648:  0020A0E3     MOV r2, 0x0
		   0x010D464C:  017E7EEB     BL $+0x1f9f80c  // CALL → Array.GetUpperBound
		   0x010D4650:  0090A0E1     MOV sb, r0
		   0x010D4654:  5D1BFAEB     BL $-0x179284
		   0x010D4658:  0000A0E3     MOV r0, 0x0
		   0x010D465C:  0110A0E3     MOV r1, 0x1
		   0x010D4660:  0020A0E3     MOV r2, 0x0
		   0x010D4664:  FB7D7EEB     BL $+0x1f9f7f4  // CALL → Array.GetUpperBound
		   0x010D4668:  0070A0E1     MOV r7, r0
		   0x010D466C:  571BFAEB     BL $-0x17929c
		   // ──── Block 5 ──────────────────────────────
		   0x010D4670:  0600A0E1     MOV r0, r6
		   0x010D4674:  0010A0E3     MOV r1, 0x0
		   0x010D4678:  0020A0E3     MOV r2, 0x0
		   0x010D467C:  00B0A0E3     MOV fp, 0x0
		   0x010D4680:  6B707EEB     BL $+0x1f9c1b4  // CALL → Array.GetLowerBound
		   0x010D4684:  090050E1     CMPS r0, r0, sb
		   0x010D4688:  220000CA     BGT $+0x90  // if (>) goto 0x010D4718
		   // 
		   // ──── Block 6 else (<=) ────────────────────
		   0x010D468C:  0050A0E1     MOV r5, r0
		   0x010D4690:  000056E3     CMPS r0, r6, 0x0
		   0x010D4694:  0000001A     BNE $+0x8  // if (!=) goto 0x010D469C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D4698:  4C1BFAEB     BL $-0x1792c8
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D469C:  0600A0E1     MOV r0, r6
		   0x010D46A0:  0110A0E3     MOV r1, 0x1
		   0x010D46A4:  0020A0E3     MOV r2, 0x0
		   0x010D46A8:  61707EEB     BL $+0x1f9c18c  // CALL → Array.GetLowerBound
		   0x010D46AC:  070050E1     CMPS r0, r0, r7
		   0x010D46B0:  150000CA     BGT $+0x5c  // if (>) goto 0x010D470C
		   // 
		   // ──── Block 9 else (<=) ────────────────────
		   0x010D46B4:  0040A0E1     MOV r4, r0
		   0x010D46B8:  000056E3     CMPS r0, r6, 0x0
		   0x010D46BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D46C4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D46C0:  421BFAEB     BL $-0x1792f0
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D46C4:  080096E5     LDR r0, [r6, 0x8]
		   0x010D46C8:  001090E5     LDR r1, [r0]
		   0x010D46CC:  050051E1     CMPS r0, r1, r5
		   0x010D46D0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D46DC
		   // 
		   // ──── Block 12 else (<= (unsigned)) ────────────────────
		   0x010D46D4:  3E1BFAEB     BL $-0x179300
		   0x010D46D8:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 13 if (> (unsigned)) ────────────────────
		   0x010D46DC:  088090E5     LDR r8, [r0, 0x8]
		   0x010D46E0:  040058E1     CMPS r0, r8, r4
		   0x010D46E4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D46EC
		   // 
		   // ──── Block 14 else (<= (unsigned)) ────────────────────
		   0x010D46E8:  391BFAEB     BL $-0x179314
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x010D46EC:  954820E0     MLA r0, r5, r8, r4
		   0x010D46F0:  014084E2     ADD r4, r4, 0x1
		   0x010D46F4:  000186E0     ADD r0, r6, r0, lsl 2
		   0x010D46F8:  100090E5     LDR r0, [r0, 0x10]
		   0x010D46FC:  000050E3     CMPS r0, r0, 0x0
		   0x010D4700:  39B0C015     STRBNE fp, [r0, 0x39]
		   0x010D4704:  070054E1     CMPS r0, r4, r7
		   0x010D4708:  EAFFFFDA     BLE $-0x50
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x010D470C:  015085E2     ADD r5, r5, 0x1
		   0x010D4710:  090055E1     CMPS r0, r5, sb
		   0x010D4714:  DDFFFFDA     BLE $-0x84
		   // ──── Block 17 (from 2 paths) ──────────────────
		   0x010D4718:  10408AE2     ADD r4, r10, 0x10
		   0x010D471C:  00909DE5     LDR sb, [sp]
		   0x010D4720:  00005AE3     CMPS r0, r10, 0x0
		   0x010D4724:  0000001A     BNE $+0x8  // if (!=) goto 0x010D472C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D4728:  281BFAEB     BL $-0x179358
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D472C:  0C009AE5     LDR r0, [r10, 0xc]
		   0x010D4730:  00005BE1     CMPS r0, fp, r0
		   0x010D4734:  1E0000AA     BGE $+0x80  // if (>=) goto 0x010D47B4
		   // 
		   // ──── Block 20 else (<) ────────────────────
		   0x010D4738:  0B0050E1     CMPS r0, r0, fp
		   0x010D473C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D4744
		   // 
		   // ──── Block 21 else (<= (unsigned)) ────────────────────
		   0x010D4740:  231BFAEB     BL $-0x17936c
		   // ──── Block 22 if (> (unsigned)) ────────────────────
		   0x010D4744:  1C5099E5     LDR r5, [sb, 0x1c]
		   0x010D4748:  D060C4E1     LDRD r6, r7, [r4]
		   0x010D474C:  000055E3     CMPS r0, r5, 0x0
		   0x010D4750:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4758
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D4754:  1D1BFAEB     BL $-0x179384
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D4758:  605095E5     LDR r5, [r5, 0x60]
		   0x010D475C:  000055E3     CMPS r0, r5, 0x0
		   0x010D4760:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4768
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010D4764:  191BFAEB     BL $-0x179394
		   // ──── Block 26 if (!=) ────────────────────
		   0x010D4768:  080095E5     LDR r0, [r5, 0x8]
		   0x010D476C:  001090E5     LDR r1, [r0]
		   0x010D4770:  060051E1     CMPS r0, r1, r6
		   0x010D4774:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D4780
		   // 
		   // ──── Block 27 else (<= (unsigned)) ────────────────────
		   0x010D4778:  151BFAEB     BL $-0x1793a4
		   0x010D477C:  080095E5     LDR r0, [r5, 0x8]
		   // ──── Block 28 if (> (unsigned)) ────────────────────
		   0x010D4780:  088090E5     LDR r8, [r0, 0x8]
		   0x010D4784:  070058E1     CMPS r0, r8, r7
		   0x010D4788:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D4790
		   // 
		   // ──── Block 29 else (<= (unsigned)) ────────────────────
		   0x010D478C:  101BFAEB     BL $-0x1793b8
		   // ──── Block 30 if (> (unsigned)) ────────────────────
		   0x010D4790:  987620E0     MLA r0, r8, r6, r7
		   0x010D4794:  084084E2     ADD r4, r4, 0x8
		   0x010D4798:  01B08BE2     ADD fp, fp, 0x1
		   0x010D479C:  000185E0     ADD r0, r5, r0, lsl 2
		   0x010D47A0:  100090E5     LDR r0, [r0, 0x10]
		   0x010D47A4:  000050E3     CMPS r0, r0, 0x0
		   0x010D47A8:  0110A013     MOVNE r1, 0x1
		   0x010D47AC:  3910C015     STRBNE r1, [r0, 0x39]
		   0x010D47B0:  DAFFFFEA     B $-0x90
		   // ──── Block 31 if (>=) ────────────────────
		   0x010D47B4:  04D08DE2     ADD sp, sp, 0x4
		   0x010D47B8:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		*/
	}

	// RVA: 0x10D47BC Offset: 0x10D47BC VA: 0x10D47BC
	public void UnlockAllCells() {
		/* Disassembly (ARM32, 89 instructions, 0x164 bytes):
		   // CFG: 22 blocks, 23 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D47BC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D47C0:  04D04DE2     SUB sp, sp, 0x4
		   0x010D47C4:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D47C8:  000054E3     CMPS r0, r4, 0x0
		   0x010D47CC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D47D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D47D0:  FE1AFAEB     BL $-0x179400
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D47D4:  60B094E5     LDR fp, [r4, 0x60]
		   0x010D47D8:  00005BE3     CMPS r0, fp, 0x0
		   0x010D47DC:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D480C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D47E0:  0B00A0E1     MOV r0, fp
		   0x010D47E4:  0010A0E3     MOV r1, 0x0
		   0x010D47E8:  0020A0E3     MOV r2, 0x0
		   0x010D47EC:  997D7EEB     BL $+0x1f9f66c  // CALL → Array.GetUpperBound
		   0x010D47F0:  0080A0E1     MOV r8, r0
		   0x010D47F4:  0B00A0E1     MOV r0, fp
		   0x010D47F8:  0110A0E3     MOV r1, 0x1
		   0x010D47FC:  0020A0E3     MOV r2, 0x0
		   0x010D4800:  947D7EEB     BL $+0x1f9f658  // CALL → Array.GetUpperBound
		   0x010D4804:  0090A0E1     MOV sb, r0
		   0x010D4808:  0C0000EA     B $+0x38  // goto 0x010D4840
		   // ──── Block 4 if (==) ────────────────────
		   0x010D480C:  EF1AFAEB     BL $-0x17943c
		   0x010D4810:  0000A0E3     MOV r0, 0x0
		   0x010D4814:  0010A0E3     MOV r1, 0x0
		   0x010D4818:  0020A0E3     MOV r2, 0x0
		   0x010D481C:  8D7D7EEB     BL $+0x1f9f63c  // CALL → Array.GetUpperBound
		   0x010D4820:  0080A0E1     MOV r8, r0
		   0x010D4824:  E91AFAEB     BL $-0x179454
		   0x010D4828:  0000A0E3     MOV r0, 0x0
		   0x010D482C:  0110A0E3     MOV r1, 0x1
		   0x010D4830:  0020A0E3     MOV r2, 0x0
		   0x010D4834:  877D7EEB     BL $+0x1f9f624  // CALL → Array.GetUpperBound
		   0x010D4838:  0090A0E1     MOV sb, r0
		   0x010D483C:  E31AFAEB     BL $-0x17946c
		   // ──── Block 5 ──────────────────────────────
		   0x010D4840:  0B00A0E1     MOV r0, fp
		   0x010D4844:  0010A0E3     MOV r1, 0x0
		   0x010D4848:  0020A0E3     MOV r2, 0x0
		   0x010D484C:  F86F7EEB     BL $+0x1f9bfe8  // CALL → Array.GetLowerBound
		   0x010D4850:  080050E1     CMPS r0, r0, r8
		   0x010D4854:  2F0000CA     BGT $+0xc4  // if (>) goto 0x010D4918
		   // 
		   // ──── Block 6 else (<=) ────────────────────
		   0x010D4858:  0070A0E1     MOV r7, r0
		   0x010D485C:  01A0A0E3     MOV r10, 0x1
		   0x010D4860:  00005BE3     CMPS r0, fp, 0x0
		   0x010D4864:  0000001A     BNE $+0x8  // if (!=) goto 0x010D486C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D4868:  D81AFAEB     BL $-0x179498
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D486C:  0B00A0E1     MOV r0, fp
		   0x010D4870:  0110A0E3     MOV r1, 0x1
		   0x010D4874:  0020A0E3     MOV r2, 0x0
		   0x010D4878:  ED6F7EEB     BL $+0x1f9bfbc  // CALL → Array.GetLowerBound
		   0x010D487C:  090050E1     CMPS r0, r0, sb
		   0x010D4880:  210000CA     BGT $+0x8c  // if (>) goto 0x010D490C
		   // 
		   // ──── Block 9 else (<=) ────────────────────
		   0x010D4884:  0050A0E1     MOV r5, r0
		   0x010D4888:  00005BE3     CMPS r0, fp, 0x0
		   0x010D488C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4894
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D4890:  CE1AFAEB     BL $-0x1794c0
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D4894:  08009BE5     LDR r0, [fp, 0x8]
		   0x010D4898:  001090E5     LDR r1, [r0]
		   0x010D489C:  070051E1     CMPS r0, r1, r7
		   0x010D48A0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D48AC
		   // 
		   // ──── Block 12 else (<= (unsigned)) ────────────────────
		   0x010D48A4:  CA1AFAEB     BL $-0x1794d0
		   0x010D48A8:  08009BE5     LDR r0, [fp, 0x8]
		   // ──── Block 13 if (> (unsigned)) ────────────────────
		   0x010D48AC:  084090E5     LDR r4, [r0, 0x8]
		   0x010D48B0:  050054E1     CMPS r0, r4, r5
		   0x010D48B4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D48BC
		   // 
		   // ──── Block 14 else (<= (unsigned)) ────────────────────
		   0x010D48B8:  C51AFAEB     BL $-0x1794e4
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x010D48BC:  975420E0     MLA r0, r7, r4, r5
		   0x010D48C0:  00018BE0     ADD r0, fp, r0, lsl 2
		   0x010D48C4:  104090E5     LDR r4, [r0, 0x10]
		   0x010D48C8:  000054E3     CMPS r0, r4, 0x0
		   0x010D48CC:  0B00000A     BEQ $+0x34  // if (==) goto 0x010D4900
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x010D48D0:  106094E5     LDR r6, [r4, 0x10]
		   0x010D48D4:  38A0C4E5     STRB r10, [r4, 0x38]
		   0x010D48D8:  000056E3     CMPS r0, r6, 0x0
		   0x010D48DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D48E4
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D48E0:  BA1AFAEB     BL $-0x179510
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D48E4:  000096E5     LDR r0, [r6]
		   0x010D48E8:  0110A0E3     MOV r1, 0x1
		   0x010D48EC:  883190E5     LDR r3, [r0, 0x188]
		   0x010D48F0:  8C2190E5     LDR r2, [r0, 0x18c]
		   0x010D48F4:  0600A0E1     MOV r0, r6
		   0x010D48F8:  33FF2FE1     BLX r3  // virtual call: vtable+0x188
		   0x010D48FC:  39A0C4E5     STRB r10, [r4, 0x39]
		   // ──── Block 19 if (==) ────────────────────
		   0x010D4900:  015085E2     ADD r5, r5, 0x1
		   0x010D4904:  090055E1     CMPS r0, r5, sb
		   0x010D4908:  DEFFFFDA     BLE $-0x80
		   // ──── Block 20 (from 2 paths) ──────────────────
		   0x010D490C:  017087E2     ADD r7, r7, 0x1
		   0x010D4910:  080057E1     CMPS r0, r7, r8
		   0x010D4914:  D1FFFFDA     BLE $-0xb4
		   // ──── Block 21 (from 2 paths) ──────────────────
		   0x010D4918:  04D08DE2     ADD sp, sp, 0x4
		   0x010D491C:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		*/
	}

	// RVA: 0x10D4920 Offset: 0x10D4920 VA: 0x10D4920
	public Transform GetCellScreen(Vector2Int cellPos) {
		/* Disassembly (ARM32, 81 instructions, 0x144 bytes):
		   // CFG: 26 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D4920:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010D4924:  2C719FE5     LDR r7, [pc, 0x12c]
		   0x010D4928:  0080A0E1     MOV r8, r0
		   0x010D492C:  0240A0E1     MOV r4, r2
		   0x010D4930:  0150A0E1     MOV r5, r1
		   0x010D4934:  07708FE0     ADD r7, pc, r7
		   0x010D4938:  0000D7E5     LDRB r0, [r7]
		   0x010D493C:  000050E3     CMPS r0, r0, 0x0
		   0x010D4940:  0400001A     BNE $+0x18  // if (!=) goto 0x010D4958
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D4944:  10019FE5     LDR r0, [pc, 0x110]
		   0x010D4948:  00009FE7     LDR r0, [pc, r0]
		   0x010D494C:  031AFAEB     BL $-0x1797ec
		   0x010D4950:  0100A0E3     MOV r0, 0x1
		   0x010D4954:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4958:  1C7098E5     LDR r7, [r8, 0x1c]
		   0x010D495C:  000057E3     CMPS r0, r7, 0x0
		   0x010D4960:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4968
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D4964:  991AFAEB     BL $-0x179594
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D4968:  607097E5     LDR r7, [r7, 0x60]
		   0x010D496C:  000057E3     CMPS r0, r7, 0x0
		   0x010D4970:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4978
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D4974:  951AFAEB     BL $-0x1795a4
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D4978:  080097E5     LDR r0, [r7, 0x8]
		   0x010D497C:  001090E5     LDR r1, [r0]
		   0x010D4980:  050051E1     CMPS r0, r1, r5
		   0x010D4984:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D4990
		   // 
		   // ──── Block 7 else (<= (unsigned)) ────────────────────
		   0x010D4988:  911AFAEB     BL $-0x1795b4
		   0x010D498C:  080097E5     LDR r0, [r7, 0x8]
		   // ──── Block 8 if (> (unsigned)) ────────────────────
		   0x010D4990:  086090E5     LDR r6, [r0, 0x8]
		   0x010D4994:  040056E1     CMPS r0, r6, r4
		   0x010D4998:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D49A0
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x010D499C:  8C1AFAEB     BL $-0x1795c8
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x010D49A0:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010D49A4:  964521E0     MLA r1, r6, r5, r4
		   0x010D49A8:  00009FE7     LDR r0, [pc, r0]
		   0x010D49AC:  000090E5     LDR r0, [r0]
		   0x010D49B0:  011187E0     ADD r1, r7, r1, lsl 2
		   0x010D49B4:  107091E5     LDR r7, [r1, 0x10]
		   0x010D49B8:  742090E5     LDR r2, [r0, 0x74]
		   0x010D49BC:  000052E3     CMPS r0, r2, 0x0
		   0x010D49C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D49C8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D49C4:  321AFAEB     BL $-0x179730
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D49C8:  0700A0E1     MOV r0, r7
		   0x010D49CC:  0010A0E3     MOV r1, 0x0
		   0x010D49D0:  0020A0E3     MOV r2, 0x0
		   0x010D49D4:  308D3CEB     BL $+0xf234c8  // CALL → sub_1FF7E9C
		   0x010D49D8:  000050E3     CMPS r0, r0, 0x0
		   0x010D49DC:  0100000A     BEQ $+0xc  // if (==) goto 0x010D49E8
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010D49E0:  0000A0E3     MOV r0, 0x0
		   0x010D49E4:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 14 if (==) ────────────────────
		   0x010D49E8:  1C6098E5     LDR r6, [r8, 0x1c]
		   0x010D49EC:  000056E3     CMPS r0, r6, 0x0
		   0x010D49F0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D49F8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D49F4:  751AFAEB     BL $-0x179624
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D49F8:  606096E5     LDR r6, [r6, 0x60]
		   0x010D49FC:  000056E3     CMPS r0, r6, 0x0
		   0x010D4A00:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4A08
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D4A04:  711AFAEB     BL $-0x179634
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D4A08:  080096E5     LDR r0, [r6, 0x8]
		   0x010D4A0C:  001090E5     LDR r1, [r0]
		   0x010D4A10:  050051E1     CMPS r0, r1, r5
		   0x010D4A14:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D4A20
		   // 
		   // ──── Block 19 else (<= (unsigned)) ────────────────────
		   0x010D4A18:  6D1AFAEB     BL $-0x179644
		   0x010D4A1C:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 20 if (> (unsigned)) ────────────────────
		   0x010D4A20:  087090E5     LDR r7, [r0, 0x8]
		   0x010D4A24:  040057E1     CMPS r0, r7, r4
		   0x010D4A28:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D4A30
		   // 
		   // ──── Block 21 else (<= (unsigned)) ────────────────────
		   0x010D4A2C:  681AFAEB     BL $-0x179658
		   // ──── Block 22 if (> (unsigned)) ────────────────────
		   0x010D4A30:  974520E0     MLA r0, r7, r5, r4
		   0x010D4A34:  000186E0     ADD r0, r6, r0, lsl 2
		   0x010D4A38:  104090E5     LDR r4, [r0, 0x10]
		   0x010D4A3C:  000054E3     CMPS r0, r4, 0x0
		   0x010D4A40:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4A48
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D4A44:  611AFAEB     BL $-0x179674
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D4A48:  0400A0E1     MOV r0, r4
		   0x010D4A4C:  0010A0E3     MOV r1, 0x0
		   0x010D4A50:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x010D4A54:  148D3CEA     B $+0xf23458
		   0x010D4A58:  1C731503     TSTSEQ r7, r5, 0x70000000
		   0x010D4A5C:  F01BFA02     RSCSEQ r1, r10, 0x3c000
		   0x010D4A60:  901BFA02     RSCSEQ r1, r10, 0x24000
		*/
	}

	// RVA: 0x10D434C Offset: 0x10D434C VA: 0x10D434C
	private void FieldShowAnimation() {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D434C:  10402DE9     PUSH {r4, lr}
		   0x010D4350:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D4354:  000054E3     CMPS r0, r4, 0x0
		   0x010D4358:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4360
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D435C:  1B1CFAEB     BL $-0x178f8c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4360:  0400A0E1     MOV r0, r4
		   0x010D4364:  1040BDE8     POP {r4, lr}
		   0x010D4368:  BD0100EA     B $+0x6fc  // TAIL CALL → GameBoardConstructor.Show
		*/
	}

	// RVA: 0x10D4D28 Offset: 0x10D4D28 VA: 0x10D4D28
	public void HideField(Action onHide) {
		/* Disassembly (ARM32, 147 instructions, 0x24C bytes):
		   // CFG: 36 blocks, 37 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D4D28:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D4D2C:  0CD04DE2     SUB sp, sp, 0xc
		   0x010D4D30:  04108DE5     STR r1, [sp, 0x4]
		   0x010D4D34:  0050A0E1     MOV r5, r0
		   0x010D4D38:  20429FE5     LDR r4, [pc, 0x220]
		   0x010D4D3C:  04408FE0     ADD r4, pc, r4
		   0x010D4D40:  0000D4E5     LDRB r0, [r4]
		   0x010D4D44:  000050E3     CMPS r0, r0, 0x0
		   0x010D4D48:  0700001A     BNE $+0x24  // if (!=) goto 0x010D4D6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D4D4C:  10029FE5     LDR r0, [pc, 0x210]
		   0x010D4D50:  00009FE7     LDR r0, [pc, r0]
		   0x010D4D54:  0119FAEB     BL $-0x179bf4
		   0x010D4D58:  08029FE5     LDR r0, [pc, 0x208]
		   0x010D4D5C:  00009FE7     LDR r0, [pc, r0]
		   0x010D4D60:  FE18FAEB     BL $-0x179c00
		   0x010D4D64:  0100A0E3     MOV r0, 0x1
		   0x010D4D68:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4D6C:  1C4095E5     LDR r4, [r5, 0x1c]
		   0x010D4D70:  08508DE5     STR r5, [sp, 0x8]
		   0x010D4D74:  000054E3     CMPS r0, r4, 0x0
		   0x010D4D78:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4D80
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D4D7C:  9319FAEB     BL $-0x1799ac
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D4D80:  606094E5     LDR r6, [r4, 0x60]
		   0x010D4D84:  000056E3     CMPS r0, r6, 0x0
		   0x010D4D88:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D4DB8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010D4D8C:  0600A0E1     MOV r0, r6
		   0x010D4D90:  0010A0E3     MOV r1, 0x0
		   0x010D4D94:  0020A0E3     MOV r2, 0x0
		   0x010D4D98:  2E7C7EEB     BL $+0x1f9f0c0  // CALL → Array.GetUpperBound
		   0x010D4D9C:  00A0A0E1     MOV r10, r0
		   0x010D4DA0:  0600A0E1     MOV r0, r6
		   0x010D4DA4:  0110A0E3     MOV r1, 0x1
		   0x010D4DA8:  0020A0E3     MOV r2, 0x0
		   0x010D4DAC:  297C7EEB     BL $+0x1f9f0ac  // CALL → Array.GetUpperBound
		   0x010D4DB0:  00B0A0E1     MOV fp, r0
		   0x010D4DB4:  0C0000EA     B $+0x38  // goto 0x010D4DEC
		   // ──── Block 6 if (==) ────────────────────
		   0x010D4DB8:  8419FAEB     BL $-0x1799e8
		   0x010D4DBC:  0000A0E3     MOV r0, 0x0
		   0x010D4DC0:  0010A0E3     MOV r1, 0x0
		   0x010D4DC4:  0020A0E3     MOV r2, 0x0
		   0x010D4DC8:  227C7EEB     BL $+0x1f9f090  // CALL → Array.GetUpperBound
		   0x010D4DCC:  00A0A0E1     MOV r10, r0
		   0x010D4DD0:  7E19FAEB     BL $-0x179a00
		   0x010D4DD4:  0000A0E3     MOV r0, 0x0
		   0x010D4DD8:  0110A0E3     MOV r1, 0x1
		   0x010D4DDC:  0020A0E3     MOV r2, 0x0
		   0x010D4DE0:  1C7C7EEB     BL $+0x1f9f078  // CALL → Array.GetUpperBound
		   0x010D4DE4:  00B0A0E1     MOV fp, r0
		   0x010D4DE8:  7819FAEB     BL $-0x179a18
		   // ──── Block 7 ──────────────────────────────
		   0x010D4DEC:  0600A0E1     MOV r0, r6
		   0x010D4DF0:  0010A0E3     MOV r1, 0x0
		   0x010D4DF4:  0020A0E3     MOV r2, 0x0
		   0x010D4DF8:  8D6E7EEB     BL $+0x1f9ba3c  // CALL → Array.GetLowerBound
		   0x010D4DFC:  0A0050E1     CMPS r0, r0, r10
		   0x010D4E00:  420000CA     BGT $+0x110  // if (>) goto 0x010D4F10
		   // 
		   // ──── Block 8 else (<=) ────────────────────
		   0x010D4E04:  60919FE5     LDR sb, [pc, 0x160]
		   0x010D4E08:  0040A0E1     MOV r4, r0
		   0x010D4E0C:  09909FE7     LDR sb, [pc, sb]
		   0x010D4E10:  000056E3     CMPS r0, r6, 0x0
		   0x010D4E14:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4E1C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D4E18:  6C19FAEB     BL $-0x179a48
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D4E1C:  0600A0E1     MOV r0, r6
		   0x010D4E20:  0110A0E3     MOV r1, 0x1
		   0x010D4E24:  0020A0E3     MOV r2, 0x0
		   0x010D4E28:  816E7EEB     BL $+0x1f9ba0c  // CALL → Array.GetLowerBound
		   0x010D4E2C:  0B0050E1     CMPS r0, r0, fp
		   0x010D4E30:  330000CA     BGT $+0xd4  // if (>) goto 0x010D4F04
		   // 
		   // ──── Block 11 else (<=) ────────────────────
		   0x010D4E34:  0070A0E1     MOV r7, r0
		   0x010D4E38:  000056E3     CMPS r0, r6, 0x0
		   0x010D4E3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4E44
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D4E40:  6219FAEB     BL $-0x179a70
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D4E44:  080096E5     LDR r0, [r6, 0x8]
		   0x010D4E48:  001090E5     LDR r1, [r0]
		   0x010D4E4C:  040051E1     CMPS r0, r1, r4
		   0x010D4E50:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D4E5C
		   // 
		   // ──── Block 14 else (<= (unsigned)) ────────────────────
		   0x010D4E54:  5E19FAEB     BL $-0x179a80
		   0x010D4E58:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x010D4E5C:  085090E5     LDR r5, [r0, 0x8]
		   0x010D4E60:  070055E1     CMPS r0, r5, r7
		   0x010D4E64:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D4E6C
		   // 
		   // ──── Block 16 else (<= (unsigned)) ────────────────────
		   0x010D4E68:  5919FAEB     BL $-0x179a94
		   // ──── Block 17 if (> (unsigned)) ────────────────────
		   0x010D4E6C:  947521E0     MLA r1, r4, r5, r7
		   0x010D4E70:  000099E5     LDR r0, [sb]
		   0x010D4E74:  742090E5     LDR r2, [r0, 0x74]
		   0x010D4E78:  000052E3     CMPS r0, r2, 0x0
		   0x010D4E7C:  011186E0     ADD r1, r6, r1, lsl 2
		   0x010D4E80:  105091E5     LDR r5, [r1, 0x10]
		   0x010D4E84:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4E8C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D4E88:  0119FAEB     BL $-0x179bf4
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D4E8C:  0500A0E1     MOV r0, r5
		   0x010D4E90:  0010A0E3     MOV r1, 0x0
		   0x010D4E94:  D88C3CEB     BL $+0xf23368  // CALL → sub_1FF81FC
		   0x010D4E98:  000050E3     CMPS r0, r0, 0x0
		   0x010D4E9C:  1500000A     BEQ $+0x5c  // if (==) goto 0x010D4EF8
		   // 
		   // ──── Block 20 else (!=) ────────────────────
		   0x010D4EA0:  000055E3     CMPS r0, r5, 0x0
		   0x010D4EA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4EAC
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010D4EA8:  4819FAEB     BL $-0x179ad8
		   // ──── Block 22 if (!=) ────────────────────
		   0x010D4EAC:  000099E5     LDR r0, [sb]
		   0x010D4EB0:  248095E5     LDR r8, [r5, 0x24]
		   0x010D4EB4:  741090E5     LDR r1, [r0, 0x74]
		   0x010D4EB8:  000051E3     CMPS r0, r1, 0x0
		   0x010D4EBC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4EC4
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D4EC0:  F318FAEB     BL $-0x179c2c
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D4EC4:  0800A0E1     MOV r0, r8
		   0x010D4EC8:  0010A0E3     MOV r1, 0x0
		   0x010D4ECC:  CA8C3CEB     BL $+0xf23330  // CALL → sub_1FF81FC
		   0x010D4ED0:  000050E3     CMPS r0, r0, 0x0
		   0x010D4ED4:  0700000A     BEQ $+0x24  // if (==) goto 0x010D4EF8
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x010D4ED8:  245095E5     LDR r5, [r5, 0x24]
		   0x010D4EDC:  000055E3     CMPS r0, r5, 0x0
		   0x010D4EE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4EE8
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010D4EE4:  3919FAEB     BL $-0x179b14
		   // ──── Block 27 if (!=) ────────────────────
		   0x010D4EE8:  0500A0E1     MOV r0, r5
		   0x010D4EEC:  0010A0E3     MOV r1, 0x0
		   0x010D4EF0:  0020A0E3     MOV r2, 0x0
		   0x010D4EF4:  3CDB00EB     BL $+0x36cf8  // CALL → Item.Pop
		   // ──── Block 28 (from 2 paths) ──────────────────
		   0x010D4EF8:  017087E2     ADD r7, r7, 0x1
		   0x010D4EFC:  0B0057E1     CMPS r0, r7, fp
		   0x010D4F00:  CCFFFFDA     BLE $-0xc8
		   // ──── Block 29 (from 2 paths) ──────────────────
		   0x010D4F04:  014084E2     ADD r4, r4, 0x1
		   0x010D4F08:  0A0054E1     CMPS r0, r4, r10
		   0x010D4F0C:  BFFFFFDA     BLE $-0xfc
		   // ──── Block 30 (from 2 paths) ──────────────────
		   0x010D4F10:  08509DE5     LDR r5, [sp, 0x8]
		   0x010D4F14:  1C4095E5     LDR r4, [r5, 0x1c]
		   0x010D4F18:  000054E3     CMPS r0, r4, 0x0
		   0x010D4F1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4F24
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010D4F20:  2A19FAEB     BL $-0x179b50
		   // ──── Block 32 if (!=) ────────────────────
		   0x010D4F24:  04109DE5     LDR r1, [sp, 0x4]
		   0x010D4F28:  0400A0E1     MOV r0, r4
		   0x010D4F2C:  100000EB     BL $+0x48  // CALL → GameBoardConstructor.Hide
		   0x010D4F30:  38009FE5     LDR r0, [pc, 0x38]
		   0x010D4F34:  00009FE7     LDR r0, [pc, r0]
		   0x010D4F38:  000090E5     LDR r0, [r0]
		   0x010D4F3C:  741090E5     LDR r1, [r0, 0x74]
		   0x010D4F40:  000051E3     CMPS r0, r1, 0x0
		   0x010D4F44:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4F4C
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010D4F48:  D118FAEB     BL $-0x179cb4
		   // ──── Block 34 if (!=) ────────────────────
		   0x010D4F4C:  0500A0E1     MOV r0, r5
		   0x010D4F50:  0010A0E3     MOV r1, 0x0
		   0x010D4F54:  0CD08DE2     ADD sp, sp, 0xc
		   0x010D4F58:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D4F5C:  3EFD02EA     B $+0xbf500  // TAIL CALL → ScreensTracker.Deactivate
		   0x010D4F60:  156F1503     TSTSEQ r6, r5, 0x54
		   0x010D4F64:  E817FA02     RSCSEQ r1, r10, 0x3a00000
		   0x010D4F68:  A42FFA02     RSCSEQ r2, r10, 0x290
		   0x010D4F6C:  2C17FA02     RSCSEQ r1, r10, 0xb00000
		   0x010D4F70:  CC2DFA02     RSCSEQ r2, r10, 0x3300
		*/
	}

	// RVA: 0x10D52F4 Offset: 0x10D52F4 VA: 0x10D52F4
	public void SetInputLock(bool isLocked, bool fromTransparentPopup, bool skipKillTweens = false) {
		/* Disassembly (ARM32, 243 instructions, 0x3CC bytes):
		   // CFG: 59 blocks, 60 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D52F4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D52F8:  24D04DE2     SUB sp, sp, 0x24
		   0x010D52FC:  14308DE5     STR r3, [sp, 0x14]
		   0x010D5300:  0040A0E1     MOV r4, r0
		   0x010D5304:  A0539FE5     LDR r5, [pc, 0x3a0]
		   0x010D5308:  02B0A0E1     MOV fp, r2
		   0x010D530C:  0170A0E1     MOV r7, r1
		   0x010D5310:  05508FE0     ADD r5, pc, r5
		   0x010D5314:  0000D5E5     LDRB r0, [r5]
		   0x010D5318:  000050E3     CMPS r0, r0, 0x0
		   0x010D531C:  0700001A     BNE $+0x24  // if (!=) goto 0x010D5340
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D5320:  88039FE5     LDR r0, [pc, 0x388]
		   0x010D5324:  00009FE7     LDR r0, [pc, r0]
		   0x010D5328:  8C17FAEB     BL $-0x17a1c8
		   0x010D532C:  80039FE5     LDR r0, [pc, 0x380]
		   0x010D5330:  00009FE7     LDR r0, [pc, r0]
		   0x010D5334:  8917FAEB     BL $-0x17a1d4
		   0x010D5338:  0100A0E3     MOV r0, 0x1
		   0x010D533C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D5340:  3000D4E5     LDRB r0, [r4, 0x30]
		   0x010D5344:  000050E3     CMPS r0, r0, 0x0
		   0x010D5348:  00005713     CMPSNE r0, r7, 0x0
		   0x010D534C:  1E00001A     BNE $+0x80  // if (!=) goto 0x010D53CC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D5350:  00005BE3     CMPS r0, fp, 0x0
		   0x010D5354:  0C408DE5     STR r4, [sp, 0xc]
		   0x010D5358:  08708DE5     STR r7, [sp, 0x8]
		   0x010D535C:  6900001A     BNE $+0x1ac  // if (!=) goto 0x010D5508
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D5360:  0C009DE5     LDR r0, [sp, 0xc]
		   0x010D5364:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D5368:  000054E3     CMPS r0, r4, 0x0
		   0x010D536C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5374
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D5370:  1618FAEB     BL $-0x179fa0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D5374:  600094E5     LDR r0, [r4, 0x60]
		   0x010D5378:  000050E3     CMPS r0, r0, 0x0
		   0x010D537C:  6100000A     BEQ $+0x18c  // if (==) goto 0x010D5508
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010D5380:  0C009DE5     LDR r0, [sp, 0xc]
		   0x010D5384:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D5388:  000054E3     CMPS r0, r4, 0x0
		   0x010D538C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5394
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010D5390:  0E18FAEB     BL $-0x179fc0
		   // ──── Block 9 if (!=) ────────────────────
		   0x010D5394:  607094E5     LDR r7, [r4, 0x60]
		   0x010D5398:  000057E3     CMPS r0, r7, 0x0
		   0x010D539C:  4600000A     BEQ $+0x120  // if (==) goto 0x010D54BC
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010D53A0:  0700A0E1     MOV r0, r7
		   0x010D53A4:  0010A0E3     MOV r1, 0x0
		   0x010D53A8:  0020A0E3     MOV r2, 0x0
		   0x010D53AC:  A97A7EEB     BL $+0x1f9eaac  // CALL → Array.GetUpperBound
		   0x010D53B0:  0040A0E1     MOV r4, r0
		   0x010D53B4:  0700A0E1     MOV r0, r7
		   0x010D53B8:  0110A0E3     MOV r1, 0x1
		   0x010D53BC:  0020A0E3     MOV r2, 0x0
		   0x010D53C0:  A47A7EEB     BL $+0x1f9ea98  // CALL → Array.GetUpperBound
		   0x010D53C4:  00A0A0E1     MOV r10, r0
		   0x010D53C8:  480000EA     B $+0x128  // goto 0x010D54F0
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D53CC:  3C2094E5     LDR r2, [r4, 0x3c]
		   0x010D53D0:  405094E5     LDR r5, [r4, 0x40]
		   0x010D53D4:  000052E3     CMPS r0, r2, 0x0
		   0x010D53D8:  0400004A     BMI $+0x18  // if (< 0) goto 0x010D53F0
		   // 
		   // ──── Block 12 else (< 0) ────────────────────
		   0x010D53DC:  0400A0E1     MOV r0, r4
		   0x010D53E0:  0510A0E1     MOV r1, r5
		   0x010D53E4:  0030A0E3     MOV r3, 0x0
		   0x010D53E8:  FDF5FFEB     BL $-0x2804
		   0x010D53EC:  260000EA     B $+0xa0  // goto 0x010D548C
		   // ──── Block 13 if (< 0) ────────────────────
		   0x010D53F0:  000055E3     CMPS r0, r5, 0x0
		   0x010D53F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D53FC
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010D53F8:  F417FAEB     BL $-0x17a028
		   // ──── Block 15 if (!=) ────────────────────
		   0x010D53FC:  0500A0E1     MOV r0, r5
		   0x010D5400:  0010A0E3     MOV r1, 0x0
		   0x010D5404:  A88A3CEB     BL $+0xf22aa8  // CALL → sub_1FF7EAC
		   0x010D5408:  405094E5     LDR r5, [r4, 0x40]
		   0x010D540C:  0080A0E1     MOV r8, r0
		   0x010D5410:  000055E3     CMPS r0, r5, 0x0
		   0x010D5414:  0000001A     BNE $+0x8  // if (!=) goto 0x010D541C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010D5418:  EC17FAEB     BL $-0x17a048
		   // ──── Block 17 if (!=) ────────────────────
		   0x010D541C:  105095E5     LDR r5, [r5, 0x10]
		   0x010D5420:  000055E3     CMPS r0, r5, 0x0
		   0x010D5424:  0000001A     BNE $+0x8  // if (!=) goto 0x010D542C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D5428:  E817FAEB     BL $-0x17a058
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D542C:  0500A0E1     MOV r0, r5
		   0x010D5430:  0010A0E3     MOV r1, 0x0
		   0x010D5434:  9C8A3CEB     BL $+0xf22a78  // CALL → sub_1FF7EAC
		   0x010D5438:  0060A0E1     MOV r6, r0
		   0x010D543C:  000050E3     CMPS r0, r0, 0x0
		   0x010D5440:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5448
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010D5444:  E117FAEB     BL $-0x17a074
		   // ──── Block 21 if (!=) ────────────────────
		   0x010D5448:  18008DE2     ADD r0, sp, 0x18
		   0x010D544C:  0610A0E1     MOV r1, r6
		   0x010D5450:  0020A0E3     MOV r2, 0x0
		   0x010D5454:  0090A0E3     MOV sb, 0x0
		   0x010D5458:  518B3CEB     BL $+0xf22d4c  // CALL → sub_1FF81A4
		   0x010D545C:  18609DE5     LDR r6, [sp, 0x18]
		   0x010D5460:  000058E3     CMPS r0, r8, 0x0
		   0x010D5464:  1CA09DE5     LDR r10, [sp, 0x1c]
		   0x010D5468:  20509DE5     LDR r5, [sp, 0x20]
		   0x010D546C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5474
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010D5470:  D617FAEB     BL $-0x17a0a0
		   // ──── Block 23 if (!=) ────────────────────
		   0x010D5474:  0800A0E1     MOV r0, r8
		   0x010D5478:  0610A0E1     MOV r1, r6
		   0x010D547C:  0A20A0E1     MOV r2, r10
		   0x010D5480:  0530A0E1     MOV r3, r5
		   0x010D5484:  00908DE5     STR sb, [sp]
		   0x010D5488:  648B3CEB     BL $+0xf22d98  // CALL → sub_1FF8220
		   // ──── Block 24 ──────────────────────────────
		   0x010D548C:  6C1094E5     LDR r1, [r4, 0x6c]
		   0x010D5490:  0050A0E3     MOV r5, 0x0
		   0x010D5494:  0000E0E3     MVN r0, r0, 0x0
		   0x010D5498:  3050C4E5     STRB r5, [r4, 0x30]
		   0x010D549C:  000051E3     CMPS r0, r1, 0x0
		   0x010D54A0:  3C0084E5     STR r0, [r4, 0x3c]
		   0x010D54A4:  A9FFFF0A     BEQ $-0x154
		   // ──── Block 25 else (!=) ────────────────────
		   0x010D54A8:  0400A0E1     MOV r0, r4
		   0x010D54AC:  0020A0E3     MOV r2, 0x0
		   0x010D54B0:  AC8A3CEB     BL $+0xf22ab8  // CALL → sub_1FF7F68
		   0x010D54B4:  6C5084E5     STR r5, [r4, 0x6c]
		   0x010D54B8:  A4FFFFEA     B $-0x168
		   // ──── Block 26 if (==) ────────────────────
		   0x010D54BC:  C317FAEB     BL $-0x17a0ec
		   0x010D54C0:  0000A0E3     MOV r0, 0x0
		   0x010D54C4:  0010A0E3     MOV r1, 0x0
		   0x010D54C8:  0020A0E3     MOV r2, 0x0
		   0x010D54CC:  617A7EEB     BL $+0x1f9e98c  // CALL → Array.GetUpperBound
		   0x010D54D0:  0040A0E1     MOV r4, r0
		   0x010D54D4:  BD17FAEB     BL $-0x17a104
		   0x010D54D8:  0000A0E3     MOV r0, 0x0
		   0x010D54DC:  0110A0E3     MOV r1, 0x1
		   0x010D54E0:  0020A0E3     MOV r2, 0x0
		   0x010D54E4:  5B7A7EEB     BL $+0x1f9e974  // CALL → Array.GetUpperBound
		   0x010D54E8:  00A0A0E1     MOV r10, r0
		   0x010D54EC:  B717FAEB     BL $-0x17a11c
		   // ──── Block 27 ──────────────────────────────
		   0x010D54F0:  0700A0E1     MOV r0, r7
		   0x010D54F4:  0010A0E3     MOV r1, 0x0
		   0x010D54F8:  0020A0E3     MOV r2, 0x0
		   0x010D54FC:  CC6C7EEB     BL $+0x1f9b338  // CALL → Array.GetLowerBound
		   0x010D5500:  040050E1     CMPS r0, r0, r4
		   0x010D5504:  040000DA     BLE $+0x18  // if (<=) goto 0x010D551C
		   // 
		   // ──── Block 28 (from 3 paths) ──────────────────
		   0x010D5508:  0C109DE5     LDR r1, [sp, 0xc]
		   0x010D550C:  08009DE5     LDR r0, [sp, 0x8]
		   0x010D5510:  4C00C1E5     STRB r0, [r1, 0x4c]
		   0x010D5514:  24D08DE2     ADD sp, sp, 0x24
		   0x010D5518:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 29 if (<=) ────────────────────
		   0x010D551C:  94B19FE5     LDR fp, [pc, 0x194]
		   0x010D5520:  0050A0E1     MOV r5, r0
		   0x010D5524:  0BB09FE7     LDR fp, [pc, fp]
		   0x010D5528:  10408DE5     STR r4, [sp, 0x10]
		   0x010D552C:  000057E3     CMPS r0, r7, 0x0
		   0x010D5530:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5538
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010D5534:  A517FAEB     BL $-0x17a164
		   // ──── Block 31 if (!=) ────────────────────
		   0x010D5538:  0700A0E1     MOV r0, r7
		   0x010D553C:  0110A0E3     MOV r1, 0x1
		   0x010D5540:  0020A0E3     MOV r2, 0x0
		   0x010D5544:  BA6C7EEB     BL $+0x1f9b2f0  // CALL → Array.GetLowerBound
		   0x010D5548:  0A0050E1     CMPS r0, r0, r10
		   0x010D554C:  040000DA     BLE $+0x18  // if (<=) goto 0x010D5564
		   // 
		   // ──── Block 32 else (>) ────────────────────
		   0x010D5550:  10409DE5     LDR r4, [sp, 0x10]
		   0x010D5554:  015085E2     ADD r5, r5, 0x1
		   0x010D5558:  040055E1     CMPS r0, r5, r4
		   0x010D555C:  F2FFFFDA     BLE $-0x30
		   // ──── Block 33 else (>) ────────────────────
		   0x010D5560:  E8FFFFEA     B $-0x58
		   // ──── Block 34 if (<=) ────────────────────
		   0x010D5564:  0040A0E1     MOV r4, r0
		   0x010D5568:  000057E3     CMPS r0, r7, 0x0
		   0x010D556C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5574
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010D5570:  9617FAEB     BL $-0x17a1a0
		   // ──── Block 36 if (!=) ────────────────────
		   0x010D5574:  080097E5     LDR r0, [r7, 0x8]
		   0x010D5578:  001090E5     LDR r1, [r0]
		   0x010D557C:  050051E1     CMPS r0, r1, r5
		   0x010D5580:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D558C
		   // 
		   // ──── Block 37 else (<= (unsigned)) ────────────────────
		   0x010D5584:  9217FAEB     BL $-0x17a1b0
		   0x010D5588:  080097E5     LDR r0, [r7, 0x8]
		   // ──── Block 38 if (> (unsigned)) ────────────────────
		   0x010D558C:  086090E5     LDR r6, [r0, 0x8]
		   0x010D5590:  040056E1     CMPS r0, r6, r4
		   0x010D5594:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D559C
		   // 
		   // ──── Block 39 else (<= (unsigned)) ────────────────────
		   0x010D5598:  8D17FAEB     BL $-0x17a1c4
		   // ──── Block 40 if (> (unsigned)) ────────────────────
		   0x010D559C:  954621E0     MLA r1, r5, r6, r4
		   0x010D55A0:  00009BE5     LDR r0, [fp]
		   0x010D55A4:  742090E5     LDR r2, [r0, 0x74]
		   0x010D55A8:  000052E3     CMPS r0, r2, 0x0
		   0x010D55AC:  011187E0     ADD r1, r7, r1, lsl 2
		   0x010D55B0:  108091E5     LDR r8, [r1, 0x10]
		   0x010D55B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D55BC
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010D55B8:  3517FAEB     BL $-0x17a324
		   // ──── Block 42 if (!=) ────────────────────
		   0x010D55BC:  0800A0E1     MOV r0, r8
		   0x010D55C0:  0010A0E3     MOV r1, 0x0
		   0x010D55C4:  0C8B3CEB     BL $+0xf22c38  // CALL → sub_1FF81FC
		   0x010D55C8:  000050E3     CMPS r0, r0, 0x0
		   0x010D55CC:  0700000A     BEQ $+0x24  // if (==) goto 0x010D55F0
		   // 
		   // ──── Block 43 else (!=) ────────────────────
		   0x010D55D0:  000058E3     CMPS r0, r8, 0x0
		   0x010D55D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D55DC
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x010D55D8:  7C17FAEB     BL $-0x17a208
		   // ──── Block 45 if (!=) ────────────────────
		   0x010D55DC:  2800D8E5     LDRB r0, [r8, 0x28]
		   0x010D55E0:  000050E3     CMPS r0, r0, 0x0
		   0x010D55E4:  14009D05     LDREQ r0, [sp, 0x14]
		   0x010D55E8:  00005003     CMPSEQ r0, r0, 0x0
		   0x010D55EC:  0300000A     BEQ $+0x14  // if (==) goto 0x010D5600
		   // 
		   // ──── Block 46 (from 2 paths) ──────────────────
		   0x010D55F0:  014084E2     ADD r4, r4, 0x1
		   0x010D55F4:  0A0054E1     CMPS r0, r4, r10
		   0x010D55F8:  DAFFFFDA     BLE $-0x90
		   // ──── Block 47 else (>) ────────────────────
		   0x010D55FC:  D3FFFFEA     B $-0xac
		   // ──── Block 48 if (==) ────────────────────
		   0x010D5600:  246098E5     LDR r6, [r8, 0x24]
		   0x010D5604:  000056E3     CMPS r0, r6, 0x0
		   0x010D5608:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5610
		   // 
		   // ──── Block 49 else (==) ────────────────────
		   0x010D560C:  6F17FAEB     BL $-0x17a23c
		   // ──── Block 50 if (!=) ────────────────────
		   0x010D5610:  0600A0E1     MOV r0, r6
		   0x010D5614:  0010A0E3     MOV r1, 0x0
		   0x010D5618:  238A3CEB     BL $+0xf22894  // CALL → sub_1FF7EAC
		   0x010D561C:  0090A0E1     MOV sb, r0
		   0x010D5620:  94009FE5     LDR r0, [pc, 0x94]
		   0x010D5624:  00009FE7     LDR r0, [pc, r0]
		   0x010D5628:  000090E5     LDR r0, [r0]
		   0x010D562C:  741090E5     LDR r1, [r0, 0x74]
		   0x010D5630:  000051E3     CMPS r0, r1, 0x0
		   0x010D5634:  0000001A     BNE $+0x8  // if (!=) goto 0x010D563C
		   // 
		   // ──── Block 51 else (==) ────────────────────
		   0x010D5638:  1517FAEB     BL $-0x17a3a4
		   // ──── Block 52 if (!=) ────────────────────
		   0x010D563C:  0900A0E1     MOV r0, sb
		   0x010D5640:  0010A0E3     MOV r1, 0x0
		   0x010D5644:  0020A0E3     MOV r2, 0x0
		   0x010D5648:  35C312EB     BL $+0x4b0cdc  // CALL → DOTween.IsTweening
		   0x010D564C:  000050E3     CMPS r0, r0, 0x0
		   0x010D5650:  E6FFFF0A     BEQ $-0x60
		   // ──── Block 53 else (!=) ────────────────────
		   0x010D5654:  246098E5     LDR r6, [r8, 0x24]
		   0x010D5658:  000056E3     CMPS r0, r6, 0x0
		   0x010D565C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5664
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x010D5660:  5A17FAEB     BL $-0x17a290
		   // ──── Block 55 if (!=) ────────────────────
		   0x010D5664:  0600A0E1     MOV r0, r6
		   0x010D5668:  0010A0E3     MOV r1, 0x0
		   0x010D566C:  0E8A3CEB     BL $+0xf22840  // CALL → sub_1FF7EAC
		   0x010D5670:  0110A0E3     MOV r1, 0x1
		   0x010D5674:  0020A0E3     MOV r2, 0x0
		   0x010D5678:  200913EB     BL $+0x4c2488  // CALL → ShortcutExtensions.DOKill
		   0x010D567C:  246098E5     LDR r6, [r8, 0x24]
		   0x010D5680:  000056E3     CMPS r0, r6, 0x0
		   0x010D5684:  0000001A     BNE $+0x8  // if (!=) goto 0x010D568C
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x010D5688:  5017FAEB     BL $-0x17a2b8
		   // ──── Block 57 if (!=) ────────────────────
		   0x010D568C:  000096E5     LDR r0, [r6]
		   0x010D5690:  0810A0E1     MOV r1, r8
		   0x010D5694:  0120A0E3     MOV r2, 0x1
		   0x010D5698:  08C190E5     LDR ip, [r0, 0x108]
		   0x010D569C:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010D56A0:  0600A0E1     MOV r0, r6
		   0x010D56A4:  3CFF2FE1     BLX ip
		   0x010D56A8:  D0FFFFEA     B $-0xb8
		   0x010D56AC:  42691503     TSTSEQ r6, r5, 0x108000
		   0x010D56B0:  EC23FA02     RSCSEQ r2, r10, 0xb0000003
		   0x010D56B4:  0812FA02     RSCSEQ r1, r10, 0x80000000
		   0x010D56B8:  1410FA02     RSCSEQ r1, r10, 0x14
		   0x010D56BC:  EC20FA02     RSCSEQ r2, r10, 0xec
		*/
	}

	// RVA: 0x10D56EC Offset: 0x10D56EC VA: 0x10D56EC
	public void UnselectCurrentItem(Item itemToCheck) {
		/* Disassembly (ARM32, 103 instructions, 0x19C bytes):
		   // CFG: 28 blocks, 30 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D56EC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D56F0:  84619FE5     LDR r6, [pc, 0x184]
		   0x010D56F4:  0040A0E1     MOV r4, r0
		   0x010D56F8:  0150A0E1     MOV r5, r1
		   0x010D56FC:  06608FE0     ADD r6, pc, r6
		   0x010D5700:  0000D6E5     LDRB r0, [r6]
		   0x010D5704:  000050E3     CMPS r0, r0, 0x0
		   0x010D5708:  0400001A     BNE $+0x18  // if (!=) goto 0x010D5720
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D570C:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010D5710:  00009FE7     LDR r0, [pc, r0]
		   0x010D5714:  9116FAEB     BL $-0x17a5b4
		   0x010D5718:  0100A0E3     MOV r0, 0x1
		   0x010D571C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D5720:  5C719FE5     LDR r7, [pc, 0x15c]
		   0x010D5724:  07709FE7     LDR r7, [pc, r7]
		   0x010D5728:  446094E5     LDR r6, [r4, 0x44]
		   0x010D572C:  000097E5     LDR r0, [r7]
		   0x010D5730:  741090E5     LDR r1, [r0, 0x74]
		   0x010D5734:  000051E3     CMPS r0, r1, 0x0
		   0x010D5738:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5740
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D573C:  D416FAEB     BL $-0x17a4a8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D5740:  0600A0E1     MOV r0, r6
		   0x010D5744:  0010A0E3     MOV r1, 0x0
		   0x010D5748:  0020A0E3     MOV r2, 0x0
		   0x010D574C:  083DFDEB     BL $-0xb0bd8
		   0x010D5750:  000050E3     CMPS r0, r0, 0x0
		   0x010D5754:  1D00000A     BEQ $+0x7c  // if (==) goto 0x010D57D0
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010D5758:  000097E5     LDR r0, [r7]
		   0x010D575C:  741090E5     LDR r1, [r0, 0x74]
		   0x010D5760:  000051E3     CMPS r0, r1, 0x0
		   0x010D5764:  0000001A     BNE $+0x8  // if (!=) goto 0x010D576C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010D5768:  C916FAEB     BL $-0x17a4d4
		   // ──── Block 7 if (!=) ────────────────────
		   0x010D576C:  0500A0E1     MOV r0, r5
		   0x010D5770:  0010A0E3     MOV r1, 0x0
		   0x010D5774:  0020A0E3     MOV r2, 0x0
		   0x010D5778:  C7893CEB     BL $+0xf22724  // CALL → sub_1FF7E9C
		   0x010D577C:  000050E3     CMPS r0, r0, 0x0
		   0x010D5780:  0B00001A     BNE $+0x34  // if (!=) goto 0x010D57B4
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010D5784:  000097E5     LDR r0, [r7]
		   0x010D5788:  446094E5     LDR r6, [r4, 0x44]
		   0x010D578C:  741090E5     LDR r1, [r0, 0x74]
		   0x010D5790:  000051E3     CMPS r0, r1, 0x0
		   0x010D5794:  0000001A     BNE $+0x8  // if (!=) goto 0x010D579C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D5798:  BD16FAEB     BL $-0x17a504
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D579C:  0500A0E1     MOV r0, r5
		   0x010D57A0:  0610A0E1     MOV r1, r6
		   0x010D57A4:  0020A0E3     MOV r2, 0x0
		   0x010D57A8:  BB893CEB     BL $+0xf226f4  // CALL → sub_1FF7E9C
		   0x010D57AC:  000050E3     CMPS r0, r0, 0x0
		   0x010D57B0:  0600000A     BEQ $+0x20  // if (==) goto 0x010D57D0
		   // 
		   // ──── Block 11 (from 2 paths) ──────────────────
		   0x010D57B4:  446094E5     LDR r6, [r4, 0x44]
		   0x010D57B8:  000056E3     CMPS r0, r6, 0x0
		   0x010D57BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D57C4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D57C0:  0217FAEB     BL $-0x17a3f0
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D57C4:  0000A0E3     MOV r0, 0x0
		   0x010D57C8:  440084E5     STR r0, [r4, 0x44]  // vtable: Object.Equals
		   0x010D57CC:  3100C6E5     STRB r0, [r6, 0x31]  // vtable: Object.Equals
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x010D57D0:  000097E5     LDR r0, [r7]
		   0x010D57D4:  406094E5     LDR r6, [r4, 0x40]
		   0x010D57D8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D57DC:  000051E3     CMPS r0, r1, 0x0
		   0x010D57E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D57E8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D57E4:  AA16FAEB     BL $-0x17a550
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D57E8:  0600A0E1     MOV r0, r6
		   0x010D57EC:  0010A0E3     MOV r1, 0x0
		   0x010D57F0:  0020A0E3     MOV r2, 0x0
		   0x010D57F4:  DE3CFDEB     BL $-0xb0c80
		   0x010D57F8:  000050E3     CMPS r0, r0, 0x0
		   0x010D57FC:  1D00000A     BEQ $+0x7c  // if (==) goto 0x010D5878
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x010D5800:  000097E5     LDR r0, [r7]
		   0x010D5804:  741090E5     LDR r1, [r0, 0x74]
		   0x010D5808:  000051E3     CMPS r0, r1, 0x0
		   0x010D580C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5814
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D5810:  9F16FAEB     BL $-0x17a57c
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D5814:  0500A0E1     MOV r0, r5
		   0x010D5818:  0010A0E3     MOV r1, 0x0
		   0x010D581C:  0020A0E3     MOV r2, 0x0
		   0x010D5820:  9D893CEB     BL $+0xf2267c  // CALL → sub_1FF7E9C
		   0x010D5824:  000050E3     CMPS r0, r0, 0x0
		   0x010D5828:  0B00001A     BNE $+0x34  // if (!=) goto 0x010D585C
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010D582C:  000097E5     LDR r0, [r7]
		   0x010D5830:  406094E5     LDR r6, [r4, 0x40]
		   0x010D5834:  741090E5     LDR r1, [r0, 0x74]
		   0x010D5838:  000051E3     CMPS r0, r1, 0x0
		   0x010D583C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5844
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010D5840:  9316FAEB     BL $-0x17a5ac
		   // ──── Block 22 if (!=) ────────────────────
		   0x010D5844:  0500A0E1     MOV r0, r5
		   0x010D5848:  0610A0E1     MOV r1, r6
		   0x010D584C:  0020A0E3     MOV r2, 0x0
		   0x010D5850:  91893CEB     BL $+0xf2264c  // CALL → sub_1FF7E9C
		   0x010D5854:  000050E3     CMPS r0, r0, 0x0
		   0x010D5858:  0600000A     BEQ $+0x20  // if (==) goto 0x010D5878
		   // 
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x010D585C:  405094E5     LDR r5, [r4, 0x40]
		   0x010D5860:  000055E3     CMPS r0, r5, 0x0
		   0x010D5864:  0000001A     BNE $+0x8  // if (!=) goto 0x010D586C
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010D5868:  D816FAEB     BL $-0x17a498
		   // ──── Block 25 if (!=) ────────────────────
		   0x010D586C:  0000A0E3     MOV r0, 0x0
		   0x010D5870:  400084E5     STR r0, [r4, 0x40]  // vtable: Object.Equals
		   0x010D5874:  3100C5E5     STRB r0, [r5, 0x31]  // vtable: Object.Equals
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x010D5878:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010D587C:  57651503     TSTSEQ r6, r5, 0x15c00000
		   0x010D5880:  280EFA02     RSCSEQ r0, r10, 0x280
		   0x010D5884:  140EFA02     RSCSEQ r0, r10, 0x140
		*/
	}

	// RVA: 0x10D5888 Offset: 0x10D5888 VA: 0x10D5888
	public void BreakDrag() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D5888:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D588C:  6C1090E5     LDR r1, [r0, 0x6c]
		   0x010D5890:  0050A0E3     MOV r5, 0x0
		   0x010D5894:  3050C0E5     STRB r5, [r0, 0x30]
		   0x010D5898:  000051E3     CMPS r0, r1, 0x0
		   0x010D589C:  0300000A     BEQ $+0x14  // if (==) goto 0x010D58B0
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x010D58A0:  0020A0E3     MOV r2, 0x0
		   0x010D58A4:  0040A0E1     MOV r4, r0
		   0x010D58A8:  AE893CEB     BL $+0xf226c0  // CALL → sub_1FF7F68
		   0x010D58AC:  6C5084E5     STR r5, [r4, 0x6c]
		   // ──── Block 2 if (==) ────────────────────
		   0x010D58B0:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10D417C Offset: 0x10D417C VA: 0x10D417C
	public void SelectCell(Cell cell) {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D417C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D4180:  0150A0E1     MOV r5, r1
		   0x010D4184:  0040A0E1     MOV r4, r0
		   0x010D4188:  C90500EB     BL $+0x172c  // CALL → GameBoard.ShowSelection
		   0x010D418C:  0400A0E1     MOV r0, r4
		   0x010D4190:  0510A0E1     MOV r1, r5
		   0x010D4194:  740000EB     BL $+0x1d8  // CALL → GameBoard.ShowItemInfo
		   0x010D4198:  000055E3     CMPS r0, r5, 0x0
		   0x010D419C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D41A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D41A0:  8A1CFAEB     BL $-0x178dd0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D41A4:  240095E5     LDR r0, [r5, 0x24]
		   0x010D41A8:  400084E5     STR r0, [r4, 0x40]
		   0x010D41AC:  D401C5E1     LDRD r0, r1, [r5, 0x14]
		   0x010D41B0:  F403C4E1     STRD r0, r1, [r4, 0x34]
		   0x010D41B4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10D5C0C Offset: 0x10D5C0C VA: 0x10D5C0C
	public void FakeSelect(Cell cell) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D5C0C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D5C10:  0140A0E1     MOV r4, r1
		   0x010D5C14:  0050A0E1     MOV r5, r0
		   0x010D5C18:  25FFFFEB     BL $-0x364
		   0x010D5C1C:  0500A0E1     MOV r0, r5
		   0x010D5C20:  0410A0E1     MOV r1, r4
		   0x010D5C24:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010D5C28:  CFF9FFEA     B $-0x18bc
		*/
	}

	// RVA: 0x10D26D4 Offset: 0x10D26D4 VA: 0x10D26D4
	private void LoadLevel(FieldData levelToLoad, Action LoadField, LevelLayout levelLayout) {
		/* Disassembly (ARM32, 78 instructions, 0x138 bytes):
		   // CFG: 24 blocks, 25 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D26D4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010D26D8:  08D04DE2     SUB sp, sp, 0x8
		   0x010D26DC:  0370A0E1     MOV r7, r3
		   0x010D26E0:  0280A0E1     MOV r8, r2
		   0x010D26E4:  0140A0E1     MOV r4, r1
		   0x010D26E8:  0050A0E1     MOV r5, r0
		   0x010D26EC:  000053E3     CMPS r0, r3, 0x0
		   0x010D26F0:  0500001A     BNE $+0x1c  // if (!=) goto 0x010D270C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D26F4:  000054E3     CMPS r0, r4, 0x0
		   0x010D26F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2700
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x010D26FC:  3323FAEB     BL $-0x17732c
		   // ──── Block 3 if (!=) ────────────────────
		   0x010D2700:  0400A0E1     MOV r0, r4
		   0x010D2704:  C9FAFFEB     BL $-0x14d4
		   0x010D2708:  0070A0E1     MOV r7, r0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D270C:  0500A0E1     MOV r0, r5
		   0x010D2710:  840000EB     BL $+0x218  // CALL → GameBoard.ClearSuggestedMerge
		   0x010D2714:  1C6095E5     LDR r6, [r5, 0x1c]
		   0x010D2718:  244085E5     STR r4, [r5, 0x24]
		   0x010D271C:  000056E3     CMPS r0, r6, 0x0
		   0x010D2720:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2728
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D2724:  2923FAEB     BL $-0x177354
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D2728:  0600A0E1     MOV r0, r6
		   0x010D272C:  0710A0E1     MOV r1, r7
		   0x010D2730:  3D0D00EB     BL $+0x34fc  // CALL → GameBoardConstructor.LoadLevel
		   0x010D2734:  1C7095E5     LDR r7, [r5, 0x1c]
		   0x010D2738:  286095E5     LDR r6, [r5, 0x28]
		   0x010D273C:  000057E3     CMPS r0, r7, 0x0
		   0x010D2740:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2748
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D2744:  2123FAEB     BL $-0x177374
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D2748:  607097E5     LDR r7, [r7, 0x60]
		   0x010D274C:  000056E3     CMPS r0, r6, 0x0
		   0x010D2750:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2758
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D2754:  1D23FAEB     BL $-0x177384
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D2758:  000058E3     CMPS r0, r8, 0x0
		   0x010D275C:  407086E5     STR r7, [r6, 0x40]
		   0x010D2760:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2768
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D2764:  1923FAEB     BL $-0x177394
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D2768:  0C2098E5     LDR r2, [r8, 0xc]
		   0x010D276C:  141098E5     LDR r1, [r8, 0x14]
		   0x010D2770:  200098E5     LDR r0, [r8, 0x20]
		   0x010D2774:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x010D2778:  286095E5     LDR r6, [r5, 0x28]
		   0x010D277C:  000056E3     CMPS r0, r6, 0x0
		   0x010D2780:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2788
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D2784:  1123FAEB     BL $-0x1773b4
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D2788:  3C7096E5     LDR r7, [r6, 0x3c]
		   0x010D278C:  000057E3     CMPS r0, r7, 0x0
		   0x010D2790:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2798
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D2794:  0D23FAEB     BL $-0x1773c4
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D2798:  0700A0E1     MOV r0, r7
		   0x010D279C:  0010A0E3     MOV r1, 0x0
		   0x010D27A0:  0060A0E3     MOV r6, 0x0
		   0x010D27A4:  DF9901EB     BL $+0x66784  // CALL → GameStateSave.get_isEmpty
		   0x010D27A8:  000050E3     CMPS r0, r0, 0x0
		   0x010D27AC:  1400000A     BEQ $+0x58  // if (==) goto 0x010D2804
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x010D27B0:  000054E3     CMPS r0, r4, 0x0
		   0x010D27B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D27BC
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D27B8:  0423FAEB     BL $-0x1773e8
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D27BC:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010D27C0:  000056E1     CMPS r0, r6, r0
		   0x010D27C4:  0E0000AA     BGE $+0x40  // if (>=) goto 0x010D2804
		   // 
		   // ──── Block 20 else (<) ────────────────────
		   0x010D27C8:  080094E5     LDR r0, [r4, 0x8]
		   0x010D27CC:  010050E3     CMPS r0, r0, 0x1
		   0x010D27D0:  090000BA     BLT $+0x2c  // if (<) goto 0x010D27FC
		   // 
		   // ──── Block 21 else (>=) ────────────────────
		   0x010D27D4:  0070A0E3     MOV r7, 0x0
		   0x010D27D8:  0500A0E1     MOV r0, r5
		   0x010D27DC:  0710A0E1     MOV r1, r7
		   0x010D27E0:  0620A0E1     MOV r2, r6
		   0x010D27E4:  0430A0E1     MOV r3, r4
		   0x010D27E8:  4D1100EB     BL $+0x453c  // CALL → GameBoard.CreateItemFromLevel
		   0x010D27EC:  080094E5     LDR r0, [r4, 0x8]
		   0x010D27F0:  017087E2     ADD r7, r7, 0x1
		   0x010D27F4:  000057E1     CMPS r0, r7, r0
		   0x010D27F8:  F6FFFFBA     BLT $-0x20
		   // ──── Block 22 (from 2 paths) ──────────────────
		   0x010D27FC:  016086E2     ADD r6, r6, 0x1
		   0x010D2800:  EAFFFFEA     B $-0x50
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x010D2804:  08D08DE2     ADD sp, sp, 0x8
		   0x010D2808:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		*/
	}

	// RVA: 0x10D6F84 Offset: 0x10D6F84 VA: 0x10D6F84
	private void OnPointerDownToCell(Cell clickedCell) {
		/* Disassembly (ARM32, 172 instructions, 0x2B0 bytes):
		   // CFG: 41 blocks, 46 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D6F84:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D6F88:  80629FE5     LDR r6, [pc, 0x280]
		   0x010D6F8C:  0040A0E1     MOV r4, r0
		   0x010D6F90:  0150A0E1     MOV r5, r1
		   0x010D6F94:  06608FE0     ADD r6, pc, r6
		   0x010D6F98:  0000D6E5     LDRB r0, [r6]
		   0x010D6F9C:  000050E3     CMPS r0, r0, 0x0
		   0x010D6FA0:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010D6FDC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D6FA4:  68029FE5     LDR r0, [pc, 0x268]
		   0x010D6FA8:  00009FE7     LDR r0, [pc, r0]
		   0x010D6FAC:  6B10FAEB     BL $-0x17be4c
		   0x010D6FB0:  60029FE5     LDR r0, [pc, 0x260]
		   0x010D6FB4:  00009FE7     LDR r0, [pc, r0]
		   0x010D6FB8:  6810FAEB     BL $-0x17be58
		   0x010D6FBC:  58029FE5     LDR r0, [pc, 0x258]
		   0x010D6FC0:  00009FE7     LDR r0, [pc, r0]
		   0x010D6FC4:  6510FAEB     BL $-0x17be64
		   0x010D6FC8:  50029FE5     LDR r0, [pc, 0x250]
		   0x010D6FCC:  00009FE7     LDR r0, [pc, r0]
		   0x010D6FD0:  6210FAEB     BL $-0x17be70
		   0x010D6FD4:  0100A0E3     MOV r0, 0x1
		   0x010D6FD8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D6FDC:  4C00D4E5     LDRB r0, [r4, 0x4c]
		   0x010D6FE0:  000050E3     CMPS r0, r0, 0x0
		   0x010D6FE4:  8300001A     BNE $+0x214  // if (!=) goto 0x010D71F8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D6FE8:  34929FE5     LDR sb, [pc, 0x234]
		   0x010D6FEC:  09909FE7     LDR sb, [pc, sb]
		   0x010D6FF0:  406094E5     LDR r6, [r4, 0x40]
		   0x010D6FF4:  000099E5     LDR r0, [sb]
		   0x010D6FF8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D6FFC:  000051E3     CMPS r0, r1, 0x0
		   0x010D7000:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7008
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D7004:  A210FAEB     BL $-0x17bd70
		   // ──── Block 5 if (!=) ────────────────────
		   0x010D7008:  0600A0E1     MOV r0, r6
		   0x010D700C:  0010A0E3     MOV r1, 0x0
		   0x010D7010:  0070A0E3     MOV r7, 0x0
		   0x010D7014:  78843CEB     BL $+0xf211e8  // CALL → sub_1FF81FC
		   0x010D7018:  000050E3     CMPS r0, r0, 0x0
		   0x010D701C:  7500001A     BNE $+0x1dc  // if (!=) goto 0x010D71F8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010D7020:  000099E5     LDR r0, [sb]
		   0x010D7024:  3070C4E5     STRB r7, [r4, 0x30]
		   0x010D7028:  741090E5     LDR r1, [r0, 0x74]
		   0x010D702C:  000051E3     CMPS r0, r1, 0x0
		   0x010D7030:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7038
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D7034:  9610FAEB     BL $-0x17bda0
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D7038:  0500A0E1     MOV r0, r5
		   0x010D703C:  0010A0E3     MOV r1, 0x0
		   0x010D7040:  0020A0E3     MOV r2, 0x0
		   0x010D7044:  CA36FDEB     BL $-0xb24d0
		   0x010D7048:  000050E3     CMPS r0, r0, 0x0
		   0x010D704C:  0600000A     BEQ $+0x20  // if (==) goto 0x010D706C
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010D7050:  000055E3     CMPS r0, r5, 0x0
		   0x010D7054:  0000001A     BNE $+0x8  // if (!=) goto 0x010D705C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D7058:  DC10FAEB     BL $-0x17bc88
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D705C:  0500A0E1     MOV r0, r5
		   0x010D7060:  72D8FFEB     BL $-0x9e30
		   0x010D7064:  000050E3     CMPS r0, r0, 0x0
		   0x010D7068:  6200000A     BEQ $+0x190  // if (==) goto 0x010D71F8
		   // 
		   // ──── Block 12 (from 2 paths) ──────────────────
		   0x010D706C:  000099E5     LDR r0, [sb]
		   0x010D7070:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7074:  000051E3     CMPS r0, r1, 0x0
		   0x010D7078:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7080
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D707C:  8410FAEB     BL $-0x17bde8
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D7080:  0500A0E1     MOV r0, r5
		   0x010D7084:  0010A0E3     MOV r1, 0x0
		   0x010D7088:  5B843CEB     BL $+0xf21174  // CALL → sub_1FF81FC
		   0x010D708C:  000050E3     CMPS r0, r0, 0x0
		   0x010D7090:  3900000A     BEQ $+0xec  // if (==) goto 0x010D717C
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x010D7094:  000055E3     CMPS r0, r5, 0x0
		   0x010D7098:  0000001A     BNE $+0x8  // if (!=) goto 0x010D70A0
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010D709C:  CB10FAEB     BL $-0x17bccc
		   // ──── Block 17 if (!=) ────────────────────
		   0x010D70A0:  2800D5E5     LDRB r0, [r5, 0x28]
		   0x010D70A4:  000050E3     CMPS r0, r0, 0x0
		   0x010D70A8:  3300001A     BNE $+0xd4  // if (!=) goto 0x010D717C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D70AC:  000099E5     LDR r0, [sb]
		   0x010D70B0:  248095E5     LDR r8, [r5, 0x24]
		   0x010D70B4:  446094E5     LDR r6, [r4, 0x44]
		   0x010D70B8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D70BC:  000051E3     CMPS r0, r1, 0x0
		   0x010D70C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D70C8
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010D70C4:  7210FAEB     BL $-0x17be30
		   // ──── Block 20 if (!=) ────────────────────
		   0x010D70C8:  0600A0E1     MOV r0, r6
		   0x010D70CC:  0810A0E1     MOV r1, r8
		   0x010D70D0:  0020A0E3     MOV r2, 0x0
		   0x010D70D4:  A636FDEB     BL $-0xb2560
		   0x010D70D8:  000050E3     CMPS r0, r0, 0x0
		   0x010D70DC:  1B00000A     BEQ $+0x74  // if (==) goto 0x010D7150
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010D70E0:  0400A0E1     MOV r0, r4
		   0x010D70E4:  0010A0E3     MOV r1, 0x0
		   0x010D70E8:  7FF9FFEB     BL $-0x19fc
		   0x010D70EC:  34619FE5     LDR r6, [pc, 0x134]
		   0x010D70F0:  06609FE7     LDR r6, [pc, r6]
		   0x010D70F4:  000096E5     LDR r0, [r6]
		   0x010D70F8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D70FC:  000051E3     CMPS r0, r1, 0x0
		   0x010D7100:  0100001A     BNE $+0xc  // if (!=) goto 0x010D710C
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010D7104:  6210FAEB     BL $-0x17be70
		   0x010D7108:  000096E5     LDR r0, [r6]
		   // ──── Block 23 if (!=) ────────────────────
		   0x010D710C:  18119FE5     LDR r1, [pc, 0x118]
		   0x010D7110:  01109FE7     LDR r1, [pc, r1]
		   0x010D7114:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D7118:  001091E5     LDR r1, [r1]
		   0x010D711C:  246090E5     LDR r6, [r0, 0x24]
		   0x010D7120:  742091E5     LDR r2, [r1, 0x74]
		   0x010D7124:  000052E3     CMPS r0, r2, 0x0
		   0x010D7128:  0100001A     BNE $+0xc  // if (!=) goto 0x010D7134
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010D712C:  0100A0E1     MOV r0, r1
		   0x010D7130:  5710FAEB     BL $-0x17be9c
		   // ──── Block 25 if (!=) ────────────────────
		   0x010D7134:  0600A0E1     MOV r0, r6
		   0x010D7138:  FE15A0E3     MOV r1, 0x3f800000
		   0x010D713C:  0020A0E3     MOV r2, 0x0
		   0x010D7140:  471E04EB     BL $+0x107924  // CALL → SoundController.PlaySound
		   0x010D7144:  0400A0E1     MOV r0, r4
		   0x010D7148:  0510A0E1     MOV r1, r5
		   0x010D714C:  86F4FFEB     BL $-0x2de0
		   // ──── Block 26 if (==) ────────────────────
		   0x010D7150:  245095E5     LDR r5, [r5, 0x24]
		   0x010D7154:  405084E5     STR r5, [r4, 0x40]
		   0x010D7158:  000055E3     CMPS r0, r5, 0x0
		   0x010D715C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7164
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010D7160:  9A10FAEB     BL $-0x17bd90
		   // ──── Block 28 if (!=) ────────────────────
		   0x010D7164:  0500A0E1     MOV r0, r5
		   0x010D7168:  0010A0E3     MOV r1, 0x0
		   0x010D716C:  4E833CEB     BL $+0xf20d40  // CALL → sub_1FF7EAC
		   0x010D7170:  0110A0E3     MOV r1, 0x1
		   0x010D7174:  0020A0E3     MOV r2, 0x0
		   0x010D7178:  600213EB     BL $+0x4c0988  // CALL → ShortcutExtensions.DOKill
		   // ──── Block 29 (from 2 paths) ──────────────────
		   0x010D717C:  000099E5     LDR r0, [sb]
		   0x010D7180:  405094E5     LDR r5, [r4, 0x40]
		   0x010D7184:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7188:  000051E3     CMPS r0, r1, 0x0
		   0x010D718C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7194
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010D7190:  3F10FAEB     BL $-0x17befc
		   // ──── Block 31 if (!=) ────────────────────
		   0x010D7194:  0500A0E1     MOV r0, r5
		   0x010D7198:  0010A0E3     MOV r1, 0x0
		   0x010D719C:  16843CEB     BL $+0xf21060  // CALL → sub_1FF81FC
		   0x010D71A0:  000050E3     CMPS r0, r0, 0x0
		   0x010D71A4:  1300000A     BEQ $+0x54  // if (==) goto 0x010D71F8
		   // 
		   // ──── Block 32 else (!=) ────────────────────
		   0x010D71A8:  405094E5     LDR r5, [r4, 0x40]
		   0x010D71AC:  000055E3     CMPS r0, r5, 0x0
		   0x010D71B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D71B8
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010D71B4:  8510FAEB     BL $-0x17bde4
		   // ──── Block 34 if (!=) ────────────────────
		   0x010D71B8:  3800D5E5     LDRB r0, [r5, 0x38]
		   0x010D71BC:  000050E3     CMPS r0, r0, 0x0
		   0x010D71C0:  0C00001A     BNE $+0x38  // if (!=) goto 0x010D71F8
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010D71C4:  64009FE5     LDR r0, [pc, 0x64]
		   0x010D71C8:  00009FE7     LDR r0, [pc, r0]
		   0x010D71CC:  000090E5     LDR r0, [r0]
		   0x010D71D0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D71D4:  005090E5     LDR r5, [r0]
		   0x010D71D8:  000055E3     CMPS r0, r5, 0x0
		   0x010D71DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D71E4
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010D71E0:  7A10FAEB     BL $-0x17be10
		   // ──── Block 37 if (!=) ────────────────────
		   0x010D71E4:  0500A0E1     MOV r0, r5
		   0x010D71E8:  0010A0E3     MOV r1, 0x0
		   0x010D71EC:  B23811EB     BL $+0x44e2d0  // CALL → FTUEFirstController.isBlockedForOnPointerDownToCell
		   0x010D71F0:  000050E3     CMPS r0, r0, 0x0
		   0x010D71F4:  0000000A     BEQ $+0x8  // if (==) goto 0x010D71FC
		   // 
		   // ──── Block 38 (from 6 paths) ──────────────────
		   0x010D71F8:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 39 if (==) ────────────────────
		   0x010D71FC:  0400A0E1     MOV r0, r4
		   0x010D7200:  BCF2FFEB     BL $-0x3508
		   0x010D7204:  0400A0E1     MOV r0, r4
		   0x010D7208:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D720C:  C5EDFFEA     B $-0x48e4
		   0x010D7210:  C04C1503     TSTSEQ r4, r5, 0xc000
		   0x010D7214:  341FFA02     RSCSEQ r1, r10, 0xd0
		   0x010D7218:  84F5F902     RSCSEQ pc, sb, 0x21000000
		   0x010D721C:  8017FA02     RSCSEQ r1, r10, 0x2000000
		   0x010D7220:  7817FA02     RSCSEQ r1, r10, 0x1e00000
		   0x010D7224:  4CF5F902     RSCSEQ pc, sb, 0x13000000
		   0x010D7228:  5416FA02     RSCSEQ r1, r10, 0x5400000
		   0x010D722C:  3016FA02     RSCSEQ r1, r10, 0x3000000
		   0x010D7230:  141DFA02     RSCSEQ r1, r10, 0x500
		*/
	}

	// RVA: 0x10D3CF8 Offset: 0x10D3CF8 VA: 0x10D3CF8
	private void StartDraggingProcess() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D3CF8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D3CFC:  6C1090E5     LDR r1, [r0, 0x6c]
		   0x010D3D00:  0040A0E1     MOV r4, r0
		   0x010D3D04:  000051E3     CMPS r0, r1, 0x0
		   0x010D3D08:  0400000A     BEQ $+0x18  // if (==) goto 0x010D3D20
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x010D3D0C:  0400A0E1     MOV r0, r4
		   0x010D3D10:  0020A0E3     MOV r2, 0x0
		   0x010D3D14:  0050A0E3     MOV r5, 0x0
		   0x010D3D18:  92903CEB     BL $+0xf24250  // CALL → sub_1FF7F68
		   0x010D3D1C:  6C5084E5     STR r5, [r4, 0x6c]
		   // ──── Block 2 if (==) ────────────────────
		   0x010D3D20:  0400A0E1     MOV r0, r4
		   0x010D3D24:  420D00EB     BL $+0x3510  // CALL → GameBoard.OnDrag
		   0x010D3D28:  0010A0E1     MOV r1, r0
		   0x010D3D2C:  0400A0E1     MOV r0, r4
		   0x010D3D30:  0020A0E3     MOV r2, 0x0
		   0x010D3D34:  8C903CEB     BL $+0xf24238  // CALL → sub_1FF7F6C
		   0x010D3D38:  405094E5     LDR r5, [r4, 0x40]
		   0x010D3D3C:  6C0084E5     STR r0, [r4, 0x6c]
		   0x010D3D40:  000055E3     CMPS r0, r5, 0x0
		   0x010D3D44:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3D4C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D3D48:  A01DFAEB     BL $-0x178978
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D3D4C:  0500A0E1     MOV r0, r5
		   0x010D3D50:  0010A0E3     MOV r1, 0x0
		   0x010D3D54:  2EE400EB     BL $+0x390c0  // CALL → Item.TryToHideBackgroundAnimation
		   0x010D3D58:  DC61C4E1     LDRD r6, r7, [r4, 0x1c]
		   0x010D3D5C:  000056E3     CMPS r0, r6, 0x0
		   0x010D3D60:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3D68
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D3D64:  991DFAEB     BL $-0x178994
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D3D68:  404094E5     LDR r4, [r4, 0x40]
		   0x010D3D6C:  000057E3     CMPS r0, r7, 0x0
		   0x010D3D70:  605096E5     LDR r5, [r6, 0x60]
		   0x010D3D74:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3D7C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D3D78:  941DFAEB     BL $-0x1789a8
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D3D7C:  0700A0E1     MOV r0, r7
		   0x010D3D80:  0510A0E1     MOV r1, r5
		   0x010D3D84:  0420A0E1     MOV r2, r4
		   0x010D3D88:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010D3D8C:  D5CFFFEA     B $-0xc0a4
		*/
	}

	// RVA: 0x10D56C0 Offset: 0x10D56C0 VA: 0x10D56C0
	private void StopDraggingProcess() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D56C0:  6C1090E5     LDR r1, [r0, 0x6c]
		   0x010D56C4:  000051E3     CMPS r0, r1, 0x0
		   0x010D56C8:  1EFF2F01     BXEQ lr
		   0x010D56CC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D56D0:  0020A0E3     MOV r2, 0x0
		   0x010D56D4:  0040A0E1     MOV r4, r0
		   0x010D56D8:  0050A0E3     MOV r5, 0x0
		   0x010D56DC:  218A3CEB     BL $+0xf2288c  // CALL → sub_1FF7F68
		   0x010D56E0:  6C5084E5     STR r5, [r4, 0x6c]
		   0x010D56E4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010D56E8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D72A0 Offset: 0x10D72A0 VA: 0x10D72A0
	private void OnApplicationPaused() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D72A0:  0010A0E3     MOV r1, 0x0
		   0x010D72A4:  0120A0E3     MOV r2, 0x1
		   0x010D72A8:  FFFFFFEA     B $+0x4  // TAIL CALL → GameBoard.OnPointerUp
		*/
	}

	// RVA: 0x10D7980 Offset: 0x10D7980 VA: 0x10D7980
	private void OnDestroy() {
		/* Disassembly (ARM32, 62 instructions, 0xF8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D7980:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D7984:  C8509FE5     LDR r5, [pc, 0xc8]
		   0x010D7988:  0040A0E1     MOV r4, r0
		   0x010D798C:  05508FE0     ADD r5, pc, r5
		   0x010D7990:  0000D5E5     LDRB r0, [r5]
		   0x010D7994:  000050E3     CMPS r0, r0, 0x0
		   0x010D7998:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010D79D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D799C:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010D79A0:  00009FE7     LDR r0, [pc, r0]
		   0x010D79A4:  ED0DFAEB     BL $-0x17c844
		   0x010D79A8:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010D79AC:  00009FE7     LDR r0, [pc, r0]
		   0x010D79B0:  EA0DFAEB     BL $-0x17c850
		   0x010D79B4:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x010D79B8:  00009FE7     LDR r0, [pc, r0]
		   0x010D79BC:  E70DFAEB     BL $-0x17c85c
		   0x010D79C0:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010D79C4:  00009FE7     LDR r0, [pc, r0]
		   0x010D79C8:  E40DFAEB     BL $-0x17c868
		   0x010D79CC:  0100A0E3     MOV r0, 0x1
		   0x010D79D0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D79D4:  8C509FE5     LDR r5, [pc, 0x8c]
		   0x010D79D8:  05509FE7     LDR r5, [pc, r5]
		   0x010D79DC:  000095E5     LDR r0, [r5]
		   0x010D79E0:  741090E5     LDR r1, [r0, 0x74]
		   0x010D79E4:  000051E3     CMPS r0, r1, 0x0
		   0x010D79E8:  0100001A     BNE $+0xc  // if (!=) goto 0x010D79F4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D79EC:  280EFAEB     BL $-0x17c758
		   0x010D79F0:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D79F4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010D79F8:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010D79FC:  00009FE7     LDR r0, [pc, r0]
		   0x010D7A00:  0C5091E5     LDR r5, [r1, 0xc]
		   0x010D7A04:  000090E5     LDR r0, [r0]
		   0x010D7A08:  6D0EFAEB     BL $-0x17c644
		   0x010D7A0C:  0060A0E1     MOV r6, r0
		   0x010D7A10:  58009FE5     LDR r0, [pc, 0x58]
		   0x010D7A14:  0410A0E1     MOV r1, r4
		   0x010D7A18:  0030A0E3     MOV r3, 0x0
		   0x010D7A1C:  00009FE7     LDR r0, [pc, r0]
		   0x010D7A20:  002090E5     LDR r2, [r0]
		   0x010D7A24:  0600A0E1     MOV r0, r6
		   0x010D7A28:  45567BEB     BL $+0x1ed591c  // CALL → Action..ctor
		   0x010D7A2C:  000055E3     CMPS r0, r5, 0x0
		   0x010D7A30:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7A38
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D7A34:  650EFAEB     BL $-0x17c664
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D7A38:  34009FE5     LDR r0, [pc, 0x34]
		   0x010D7A3C:  0610A0E1     MOV r1, r6
		   0x010D7A40:  00009FE7     LDR r0, [pc, r0]
		   0x010D7A44:  002090E5     LDR r2, [r0]
		   0x010D7A48:  0500A0E1     MOV r0, r5
		   0x010D7A4C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010D7A50:  432460EA     B $+0x1809114  // TAIL CALL → UnityEventsHelper.EventList<object>.Remove
		   0x010D7A54:  C9421503     TSTSEQ r4, r5, 0x9000000c
		   0x010D7A58:  24EFF902     RSCSEQ lr, sb, 0x90
		   0x010D7A5C:  BC14FA02     RSCSEQ r1, r10, 0xbc000000
		   0x010D7A60:  B814FA02     RSCSEQ r1, r10, 0xb8000000
		   0x010D7A64:  6CFCF902     RSCSEQ pc, sb, 0x6c00
		   0x010D7A68:  58FCF902     RSCSEQ pc, sb, 0x5800
		   0x010D7A6C:  C8EEF902     RSCSEQ lr, sb, 0xc80
		   0x010D7A70:  5414FA02     RSCSEQ r1, r10, 0x54000000
		   0x010D7A74:  2814FA02     RSCSEQ r1, r10, 0x28000000
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x10D7234 Offset: 0x10D7234 VA: 0x10D7234
	private IEnumerator OnDrag() {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D7234:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D7238:  54509FE5     LDR r5, [pc, 0x54]
		   0x010D723C:  0040A0E1     MOV r4, r0
		   0x010D7240:  05508FE0     ADD r5, pc, r5
		   0x010D7244:  0000D5E5     LDRB r0, [r5]
		   0x010D7248:  000050E3     CMPS r0, r0, 0x0
		   0x010D724C:  0400001A     BNE $+0x18  // if (!=) goto 0x010D7264
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D7250:  40009FE5     LDR r0, [pc, 0x40]
		   0x010D7254:  00009FE7     LDR r0, [pc, r0]
		   0x010D7258:  C00FFAEB     BL $-0x17c0f8
		   0x010D725C:  0100A0E3     MOV r0, 0x1
		   0x010D7260:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D7264:  30009FE5     LDR r0, [pc, 0x30]
		   0x010D7268:  00009FE7     LDR r0, [pc, r0]
		   0x010D726C:  000090E5     LDR r0, [r0]
		   0x010D7270:  5310FAEB     BL $-0x17beac
		   0x010D7274:  0010A0E3     MOV r1, 0x0
		   0x010D7278:  0050A0E1     MOV r5, r0
		   0x010D727C:  0060A0E3     MOV r6, 0x0
		   0x010D7280:  59F87EEB     BL $+0x1fbe16c  // CALL → Object..ctor
		   0x010D7284:  0500A0E1     MOV r0, r5
		   0x010D7288:  104085E5     STR r4, [r5, 0x10]
		   0x010D728C:  086085E5     STR r6, [r5, 0x8]
		   0x010D7290:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010D7294:  164A1503     TSTSEQ r4, r5, 0x16000
		   0x010D7298:  241DFA02     RSCSEQ r1, r10, 0x900
		   0x010D729C:  101DFA02     RSCSEQ r1, r10, 0x400
		*/
	}

	// RVA: 0x10D7A94 Offset: 0x10D7A94 VA: 0x10D7A94
	public void PointerUp(Cell pointerUpCell) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D7A94:  0020A0E3     MOV r2, 0x0
		   0x010D7A98:  03FEFFEA     B $-0x7ec
		*/
	}

	// RVA: 0x10D72AC Offset: 0x10D72AC VA: 0x10D72AC
	private void OnPointerUp(Cell pointerUpCell, bool pauseBreak) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D72AC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}

	// RVA: 0x10D3018 Offset: 0x10D3018 VA: 0x10D3018
	public void HideSelection(bool resetItem = false) {
		/* Disassembly (ARM32, 105 instructions, 0x1A4 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D3018:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D301C:  6C619FE5     LDR r6, [pc, 0x16c]
		   0x010D3020:  0040A0E1     MOV r4, r0
		   0x010D3024:  0150A0E1     MOV r5, r1
		   0x010D3028:  06608FE0     ADD r6, pc, r6
		   0x010D302C:  0000D6E5     LDRB r0, [r6]
		   0x010D3030:  000050E3     CMPS r0, r0, 0x0
		   0x010D3034:  1000001A     BNE $+0x48  // if (!=) goto 0x010D307C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D3038:  54019FE5     LDR r0, [pc, 0x154]
		   0x010D303C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3040:  4620FAEB     BL $-0x177ee0
		   0x010D3044:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010D3048:  00009FE7     LDR r0, [pc, r0]
		   0x010D304C:  4320FAEB     BL $-0x177eec
		   0x010D3050:  44019FE5     LDR r0, [pc, 0x144]
		   0x010D3054:  00009FE7     LDR r0, [pc, r0]
		   0x010D3058:  4020FAEB     BL $-0x177ef8
		   0x010D305C:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010D3060:  00009FE7     LDR r0, [pc, r0]
		   0x010D3064:  3D20FAEB     BL $-0x177f04
		   0x010D3068:  34019FE5     LDR r0, [pc, 0x134]
		   0x010D306C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3070:  3A20FAEB     BL $-0x177f10
		   0x010D3074:  0100A0E3     MOV r0, 0x1
		   0x010D3078:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D307C:  000055E3     CMPS r0, r5, 0x0
		   0x010D3080:  0400000A     BEQ $+0x18  // if (==) goto 0x010D3098
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D3084:  0060A0E3     MOV r6, 0x0
		   0x010D3088:  000054E3     CMPS r0, r4, 0x0
		   0x010D308C:  0200001A     BNE $+0x10  // if (!=) goto 0x010D309C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D3090:  CE20FAEB     BL $-0x177cc0
		   0x010D3094:  000000EA     B $+0x8  // goto 0x010D309C
		   // ──── Block 5 if (==) ────────────────────
		   0x010D3098:  406094E5     LDR r6, [r4, 0x40]
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D309C:  04019FE5     LDR r0, [pc, 0x104]
		   0x010D30A0:  00009FE7     LDR r0, [pc, r0]
		   0x010D30A4:  445094E5     LDR r5, [r4, 0x44]
		   0x010D30A8:  406084E5     STR r6, [r4, 0x40]
		   0x010D30AC:  000090E5     LDR r0, [r0]
		   0x010D30B0:  741090E5     LDR r1, [r0, 0x74]
		   0x010D30B4:  000051E3     CMPS r0, r1, 0x0
		   0x010D30B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D30C0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D30BC:  7420FAEB     BL $-0x177e28
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D30C0:  0500A0E1     MOV r0, r5
		   0x010D30C4:  0010A0E3     MOV r1, 0x0
		   0x010D30C8:  0060A0E3     MOV r6, 0x0
		   0x010D30CC:  4A943CEB     BL $+0xf25130  // CALL → sub_1FF81FC
		   0x010D30D0:  000050E3     CMPS r0, r0, 0x0
		   0x010D30D4:  100094E5     LDR r0, [r4, 0x10]
		   0x010D30D8:  44609405     LDREQ r6, [r4, 0x44]
		   0x010D30DC:  0010A0E3     MOV r1, 0x0
		   0x010D30E0:  0020A0E3     MOV r2, 0x0
		   0x010D30E4:  446084E5     STR r6, [r4, 0x44]
		   0x010D30E8:  841213EB     BL $+0x4c4a18  // CALL → ShortcutExtensions.DOKill
		   0x010D30EC:  105094E5     LDR r5, [r4, 0x10]
		   0x010D30F0:  000055E3     CMPS r0, r5, 0x0
		   0x010D30F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D30FC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D30F8:  B420FAEB     BL $-0x177d28
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D30FC:  0500A0E1     MOV r0, r5
		   0x010D3100:  0010A0E3     MOV r1, 0x0
		   0x010D3104:  68933CEB     BL $+0xf24da8  // CALL → sub_1FF7EAC
		   0x010D3108:  0010A0E3     MOV r1, 0x0
		   0x010D310C:  0020A0E3     MOV r2, 0x0
		   0x010D3110:  7A1213EB     BL $+0x4c49f0  // CALL → ShortcutExtensions.DOKill
		   0x010D3114:  100094E5     LDR r0, [r4, 0x10]
		   0x010D3118:  9A2909E3     MOV r2, 0x999a
		   0x010D311C:  992E43E3     MOVT r2, 0x3e99
		   0x010D3120:  0010A0E3     MOV r1, 0x0
		   0x010D3124:  0030A0E3     MOV r3, 0x0
		   0x010D3128:  623313EB     BL $+0x4ccd90  // CALL → DOTweenModuleUI.DOFade
		   0x010D312C:  78109FE5     LDR r1, [pc, 0x78]
		   0x010D3130:  01109FE7     LDR r1, [pc, r1]
		   0x010D3134:  002091E5     LDR r2, [r1]
		   0x010D3138:  1510A0E3     MOV r1, 0x15
		   0x010D313C:  D98E28EB     BL $+0xa23b6c  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x010D3140:  0050A0E1     MOV r5, r0
		   0x010D3144:  64009FE5     LDR r0, [pc, 0x64]
		   0x010D3148:  00009FE7     LDR r0, [pc, r0]
		   0x010D314C:  000090E5     LDR r0, [r0]
		   0x010D3150:  9B20FAEB     BL $-0x177d8c
		   0x010D3154:  0060A0E1     MOV r6, r0
		   0x010D3158:  54009FE5     LDR r0, [pc, 0x54]
		   0x010D315C:  0410A0E1     MOV r1, r4
		   0x010D3160:  0030A0E3     MOV r3, 0x0
		   0x010D3164:  00009FE7     LDR r0, [pc, r0]
		   0x010D3168:  002090E5     LDR r2, [r0]
		   0x010D316C:  0600A0E1     MOV r0, r6
		   0x010D3170:  5FB712EB     BL $+0x4add84  // CALL → TweenCallback..ctor
		   0x010D3174:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010D3178:  0610A0E1     MOV r1, r6
		   0x010D317C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3180:  002090E5     LDR r2, [r0]
		   0x010D3184:  0500A0E1     MOV r0, r5
		   0x010D3188:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010D318C:  148D28EA     B $+0xa23458  // TAIL CALL → TweenSettingsExtensions.OnComplete<object>
		   0x010D3190:  308C1503     TSTSEQ r8, r5, 0x3000
		   0x010D3194:  B05EFA02     RSCSEQ r5, r10, 0xb00
		   0x010D3198:  F034FA02     RSCSEQ r3, r10, 0xf0000000
		   0x010D319C:  5846FA02     RSCSEQ r4, r10, 0x5800000
		   0x010D31A0:  F055FA02     RSCSEQ r5, r10, 0x3c000000
		   0x010D31A4:  3056FA02     RSCSEQ r5, r10, 0x3000000
		   0x010D31A8:  9834FA02     RSCSEQ r3, r10, 0x98000000
		   0x010D31AC:  6C55FA02     RSCSEQ r5, r10, 0x1b000000
		   0x010D31B0:  6445FA02     RSCSEQ r4, r10, 0x19000000
		   0x010D31B4:  885DFA02     RSCSEQ r5, r10, 0x2200
		   0x010D31B8:  D454FA02     RSCSEQ r5, r10, 0xd4000000
		*/
	}

	// RVA: 0x10D86BC Offset: 0x10D86BC VA: 0x10D86BC
	public object[] GetCells() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D86BC:  10402DE9     PUSH {r4, lr}
		   0x010D86C0:  1C4090E5     LDR r4, [r0, 0x1c]
		   0x010D86C4:  000054E3     CMPS r0, r4, 0x0
		   0x010D86C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D86D0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D86CC:  3F0BFAEB     BL $-0x17d2fc
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D86D0:  600094E5     LDR r0, [r4, 0x60]
		   0x010D86D4:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10D436C Offset: 0x10D436C VA: 0x10D436C
	private void ShowItemInfo(Cell clickedCell) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D436C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D4370:  0040A0E1     MOV r4, r0
		   0x010D4374:  000051E3     CMPS r0, r1, 0x0
		   0x010D4378:  546094E5     LDR r6, [r4, 0x54]
		   0x010D437C:  24509115     LDRNE r5, [r1, 0x24]
		   0x010D4380:  0050A003     MOVEQ r5, 0x0
		   0x010D4384:  000056E3     CMPS r0, r6, 0x0
		   0x010D4388:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4390
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D438C:  0F1CFAEB     BL $-0x178fbc
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4390:  0C3096E5     LDR r3, [r6, 0xc]
		   0x010D4394:  0510A0E1     MOV r1, r5
		   0x010D4398:  142096E5     LDR r2, [r6, 0x14]
		   0x010D439C:  200096E5     LDR r0, [r6, 0x20]
		   0x010D43A0:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x010D43A4:  445084E5     STR r5, [r4, 0x44]
		   0x010D43A8:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x10D58B4 Offset: 0x10D58B4 VA: 0x10D58B4
	private void ShowSelection(Cell targetCell) {
		/* Disassembly (ARM32, 214 instructions, 0x358 bytes):
		   // CFG: 38 blocks, 36 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D58B4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D58B8:  14D04DE2     SUB sp, sp, 0x14
		   0x010D58BC:  20439FE5     LDR r4, [pc, 0x320]
		   0x010D58C0:  0090A0E1     MOV sb, r0
		   0x010D58C4:  0180A0E1     MOV r8, r1
		   0x010D58C8:  04408FE0     ADD r4, pc, r4
		   0x010D58CC:  0000D4E5     LDRB r0, [r4]
		   0x010D58D0:  000050E3     CMPS r0, r0, 0x0
		   0x010D58D4:  0700001A     BNE $+0x24  // if (!=) goto 0x010D58F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D58D8:  08039FE5     LDR r0, [pc, 0x308]
		   0x010D58DC:  00009FE7     LDR r0, [pc, r0]
		   0x010D58E0:  1E16FAEB     BL $-0x17a780
		   0x010D58E4:  00039FE5     LDR r0, [pc, 0x300]
		   0x010D58E8:  00009FE7     LDR r0, [pc, r0]
		   0x010D58EC:  1B16FAEB     BL $-0x17a78c
		   0x010D58F0:  0100A0E3     MOV r0, 0x1
		   0x010D58F4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D58F8:  104099E5     LDR r4, [sb, 0x10]
		   0x010D58FC:  000054E3     CMPS r0, r4, 0x0
		   0x010D5900:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5908
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D5904:  B116FAEB     BL $-0x17a534
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D5908:  0400A0E1     MOV r0, r4
		   0x010D590C:  0110A0E3     MOV r1, 0x1
		   0x010D5910:  0020A0E3     MOV r2, 0x0
		   0x010D5914:  00A0A0E3     MOV r10, 0x0
		   0x010D5918:  A7893CEB     BL $+0xf226a4  // CALL → sub_1FF7FBC
		   0x010D591C:  106099E5     LDR r6, [sb, 0x10]
		   0x010D5920:  000056E3     CMPS r0, r6, 0x0
		   0x010D5924:  0000001A     BNE $+0x8  // if (!=) goto 0x010D592C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D5928:  A816FAEB     BL $-0x17a558
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D592C:  000096E5     LDR r0, [r6]
		   0x010D5930:  FE15A0E3     MOV r1, 0x3f800000
		   0x010D5934:  FE25A0E3     MOV r2, 0x3f800000
		   0x010D5938:  FE35A0E3     MOV r3, 0x3f800000
		   0x010D593C:  787190E5     LDR r7, [r0, 0x178]
		   0x010D5940:  7CB190E5     LDR fp, [r0, 0x17c]
		   0x010D5944:  0600A0E1     MOV r0, r6
		   0x010D5948:  F0A0CDE1     STRD r10, fp, [sp]
		   0x010D594C:  37FF2FE1     BLX r7  // virtual call: vtable+0x178
		   0x010D5950:  100099E5     LDR r0, [sb, 0x10]
		   0x010D5954:  0010A0E3     MOV r1, 0x0
		   0x010D5958:  0020A0E3     MOV r2, 0x0
		   0x010D595C:  670813EB     BL $+0x4c21a4  // CALL → ShortcutExtensions.DOKill
		   0x010D5960:  104099E5     LDR r4, [sb, 0x10]
		   0x010D5964:  000054E3     CMPS r0, r4, 0x0
		   0x010D5968:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5970
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D596C:  9716FAEB     BL $-0x17a59c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D5970:  0400A0E1     MOV r0, r4
		   0x010D5974:  0010A0E3     MOV r1, 0x0
		   0x010D5978:  4B893CEB     BL $+0xf22534  // CALL → sub_1FF7EAC
		   0x010D597C:  0010A0E3     MOV r1, 0x0
		   0x010D5980:  0020A0E3     MOV r2, 0x0
		   0x010D5984:  5D0813EB     BL $+0x4c217c  // CALL → ShortcutExtensions.DOKill
		   0x010D5988:  100099E5     LDR r0, [sb, 0x10]
		   0x010D598C:  CD2C0CE3     MOV r2, 0xcccd
		   0x010D5990:  4C2E43E3     MOVT r2, 0x3e4c
		   0x010D5994:  FE15A0E3     MOV r1, 0x3f800000
		   0x010D5998:  0030A0E3     MOV r3, 0x0
		   0x010D599C:  452913EB     BL $+0x4ca51c  // CALL → DOTweenModuleUI.DOFade
		   0x010D59A0:  48129FE5     LDR r1, [pc, 0x248]
		   0x010D59A4:  01109FE7     LDR r1, [pc, r1]
		   0x010D59A8:  002091E5     LDR r2, [r1]
		   0x010D59AC:  1110A0E3     MOV r1, 0x11
		   0x010D59B0:  BC8428EB     BL $+0xa212f8  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x010D59B4:  104099E5     LDR r4, [sb, 0x10]
		   0x010D59B8:  000054E3     CMPS r0, r4, 0x0
		   0x010D59BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D59C4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D59C0:  8216FAEB     BL $-0x17a5f0
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D59C4:  0400A0E1     MOV r0, r4
		   0x010D59C8:  0010A0E3     MOV r1, 0x0
		   0x010D59CC:  36893CEB     BL $+0xf224e0  // CALL → sub_1FF7EAC
		   0x010D59D0:  1C429FE5     LDR r4, [pc, 0x21c]
		   0x010D59D4:  0060A0E1     MOV r6, r0
		   0x010D59D8:  04408FE0     ADD r4, pc, r4
		   0x010D59DC:  0000D4E5     LDRB r0, [r4]
		   0x010D59E0:  000050E3     CMPS r0, r0, 0x0
		   0x010D59E4:  0400001A     BNE $+0x18  // if (!=) goto 0x010D59FC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D59E8:  08029FE5     LDR r0, [pc, 0x208]
		   0x010D59EC:  00009FE7     LDR r0, [pc, r0]
		   0x010D59F0:  DA15FAEB     BL $-0x17a890
		   0x010D59F4:  0100A0E3     MOV r0, 0x1
		   0x010D59F8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D59FC:  F8A19FE5     LDR r10, [pc, 0x1f8]
		   0x010D5A00:  000056E3     CMPS r0, r6, 0x0
		   0x010D5A04:  0AA09FE7     LDR r10, [pc, r10]
		   0x010D5A08:  00009AE5     LDR r0, [r10]
		   0x010D5A0C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D5A10:  007090E5     LDR r7, [r0]
		   0x010D5A14:  045090E5     LDR r5, [r0, 0x4]
		   0x010D5A18:  084090E5     LDR r4, [r0, 0x8]
		   0x010D5A1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5A24
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D5A20:  6A16FAEB     BL $-0x17a650
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D5A24:  0000A0E3     MOV r0, 0x0
		   0x010D5A28:  0710A0E1     MOV r1, r7
		   0x010D5A2C:  00008DE5     STR r0, [sp]
		   0x010D5A30:  0600A0E1     MOV r0, r6
		   0x010D5A34:  0520A0E1     MOV r2, r5
		   0x010D5A38:  0430A0E1     MOV r3, r4
		   0x010D5A3C:  CB893CEB     BL $+0xf22734  // CALL → sub_1FF8170
		   0x010D5A40:  104099E5     LDR r4, [sb, 0x10]
		   0x010D5A44:  000054E3     CMPS r0, r4, 0x0
		   0x010D5A48:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5A50
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D5A4C:  5F16FAEB     BL $-0x17a67c
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D5A50:  0400A0E1     MOV r0, r4
		   0x010D5A54:  0010A0E3     MOV r1, 0x0
		   0x010D5A58:  0050A0E3     MOV r5, 0x0
		   0x010D5A5C:  12893CEB     BL $+0xf22450  // CALL → sub_1FF7EAC
		   0x010D5A60:  98419FE5     LDR r4, [pc, 0x198]
		   0x010D5A64:  0060A0E1     MOV r6, r0
		   0x010D5A68:  04408FE0     ADD r4, pc, r4
		   0x010D5A6C:  0000D4E5     LDRB r0, [r4]
		   0x010D5A70:  000050E3     CMPS r0, r0, 0x0
		   0x010D5A74:  0400001A     BNE $+0x18  // if (!=) goto 0x010D5A8C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D5A78:  84019FE5     LDR r0, [pc, 0x184]
		   0x010D5A7C:  00009FE7     LDR r0, [pc, r0]
		   0x010D5A80:  B615FAEB     BL $-0x17a920
		   0x010D5A84:  0100A0E3     MOV r0, 0x1
		   0x010D5A88:  0000C4E5     STRB r0, [r4]
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D5A8C:  00009AE5     LDR r0, [r10]
		   0x010D5A90:  3F44A0E3     MOV r4, 0x3f000000
		   0x010D5A94:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D5A98:  0C3080E2     ADD r3, r0, 0xc
		   0x010D5A9C:  0600A0E1     MOV r0, r6
		   0x010D5AA0:  0E0093E8     LDM r3, {r1, r2, r3}
		   0x010D5AA4:  F040CDE1     STRD r4, r5, [sp]
		   0x010D5AA8:  85F212EB     BL $+0x4bca1c  // CALL → ShortcutExtensions.DOScale
		   0x010D5AAC:  54119FE5     LDR r1, [pc, 0x154]
		   0x010D5AB0:  01109FE7     LDR r1, [pc, r1]
		   0x010D5AB4:  002091E5     LDR r2, [r1]
		   0x010D5AB8:  1B10A0E3     MOV r1, 0x1b
		   0x010D5ABC:  798428EB     BL $+0xa211ec  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x010D5AC0:  104099E5     LDR r4, [sb, 0x10]
		   0x010D5AC4:  000054E3     CMPS r0, r4, 0x0
		   0x010D5AC8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5AD0
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010D5ACC:  3F16FAEB     BL $-0x17a6fc
		   // ──── Block 20 if (!=) ────────────────────
		   0x010D5AD0:  0400A0E1     MOV r0, r4
		   0x010D5AD4:  0010A0E3     MOV r1, 0x0
		   0x010D5AD8:  F3883CEB     BL $+0xf223d4  // CALL → sub_1FF7EAC
		   0x010D5ADC:  0060A0E1     MOV r6, r0
		   0x010D5AE0:  000058E3     CMPS r0, r8, 0x0
		   0x010D5AE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5AEC
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010D5AE8:  3816FAEB     BL $-0x17a718
		   // ──── Block 22 if (!=) ────────────────────
		   0x010D5AEC:  0800A0E1     MOV r0, r8
		   0x010D5AF0:  0010A0E3     MOV r1, 0x0
		   0x010D5AF4:  EC883CEB     BL $+0xf223b8  // CALL → sub_1FF7EAC
		   0x010D5AF8:  0040A0E1     MOV r4, r0
		   0x010D5AFC:  000050E3     CMPS r0, r0, 0x0
		   0x010D5B00:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5B08
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D5B04:  3116FAEB     BL $-0x17a734
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D5B08:  08008DE2     ADD r0, sp, 0x8
		   0x010D5B0C:  0410A0E1     MOV r1, r4
		   0x010D5B10:  0020A0E3     MOV r2, 0x0
		   0x010D5B14:  0080A0E3     MOV r8, 0x0
		   0x010D5B18:  A1893CEB     BL $+0xf2268c  // CALL → sub_1FF81A4
		   0x010D5B1C:  08708DE2     ADD r7, sp, 0x8
		   0x010D5B20:  000056E3     CMPS r0, r6, 0x0
		   0x010D5B24:  B00097E8     LDM r7, {r4, r5, r7}
		   0x010D5B28:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5B30
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010D5B2C:  2716FAEB     BL $-0x17a75c
		   // ──── Block 26 if (!=) ────────────────────
		   0x010D5B30:  0600A0E1     MOV r0, r6
		   0x010D5B34:  0410A0E1     MOV r1, r4
		   0x010D5B38:  0520A0E1     MOV r2, r5
		   0x010D5B3C:  0730A0E1     MOV r3, r7
		   0x010D5B40:  00808DE5     STR r8, [sp]
		   0x010D5B44:  B5893CEB     BL $+0xf226dc  // CALL → sub_1FF8220
		   0x010D5B48:  104099E5     LDR r4, [sb, 0x10]
		   0x010D5B4C:  000054E3     CMPS r0, r4, 0x0
		   0x010D5B50:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5B58
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010D5B54:  1D16FAEB     BL $-0x17a784
		   // ──── Block 28 if (!=) ────────────────────
		   0x010D5B58:  0400A0E1     MOV r0, r4
		   0x010D5B5C:  0010A0E3     MOV r1, 0x0
		   0x010D5B60:  D1883CEB     BL $+0xf2234c  // CALL → sub_1FF7EAC
		   0x010D5B64:  104099E5     LDR r4, [sb, 0x10]
		   0x010D5B68:  0050A0E1     MOV r5, r0
		   0x010D5B6C:  000054E3     CMPS r0, r4, 0x0
		   0x010D5B70:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5B78
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010D5B74:  1516FAEB     BL $-0x17a7a4
		   // ──── Block 30 if (!=) ────────────────────
		   0x010D5B78:  0400A0E1     MOV r0, r4
		   0x010D5B7C:  0010A0E3     MOV r1, 0x0
		   0x010D5B80:  C9883CEB     BL $+0xf2232c  // CALL → sub_1FF7EAC
		   0x010D5B84:  0040A0E1     MOV r4, r0
		   0x010D5B88:  000050E3     CMPS r0, r0, 0x0
		   0x010D5B8C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5B94
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010D5B90:  0E16FAEB     BL $-0x17a7c0
		   // ──── Block 32 if (!=) ────────────────────
		   0x010D5B94:  0400A0E1     MOV r0, r4
		   0x010D5B98:  0010A0E3     MOV r1, 0x0
		   0x010D5B9C:  75893CEB     BL $+0xf225dc  // CALL → sub_1FF8178
		   0x010D5BA0:  0040A0E1     MOV r4, r0
		   0x010D5BA4:  000050E3     CMPS r0, r0, 0x0
		   0x010D5BA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5BB0
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010D5BAC:  0716FAEB     BL $-0x17a7dc
		   // ──── Block 34 if (!=) ────────────────────
		   0x010D5BB0:  0400A0E1     MOV r0, r4
		   0x010D5BB4:  0010A0E3     MOV r1, 0x0
		   0x010D5BB8:  E2883CEB     BL $+0xf22390  // CALL → sub_1FF7F48
		   0x010D5BBC:  0040A0E1     MOV r4, r0
		   0x010D5BC0:  000055E3     CMPS r0, r5, 0x0
		   0x010D5BC4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D5BCC
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010D5BC8:  0016FAEB     BL $-0x17a7f8
		   // ──── Block 36 if (!=) ────────────────────
		   0x010D5BCC:  0500A0E1     MOV r0, r5
		   0x010D5BD0:  0410A0E1     MOV r1, r4
		   0x010D5BD4:  0020A0E3     MOV r2, 0x0
		   0x010D5BD8:  9F893CEB     BL $+0xf22684  // CALL → sub_1FF825C
		   0x010D5BDC:  14D08DE2     ADD sp, sp, 0x14
		   0x010D5BE0:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010D5BE4:  91631503     TSTSEQ r6, r5, 0x44000002
		   0x010D5BE8:  C02DFA02     RSCSEQ r2, r10, 0x3000
		   0x010D5BEC:  B022FA02     RSCSEQ r2, r10, 0xb
		   0x010D5BF0:  F82CFA02     RSCSEQ r2, r10, 0xf800
		   0x010D5BF4:  AB5F1503     TSTSEQ r5, r5, 0x2ac
		   0x010D5BF8:  441AFA02     RSCSEQ r1, r10, 0x44000
		   0x010D5BFC:  2C1AFA02     RSCSEQ r1, r10, 0x2c000
		   0x010D5C00:  4B611503     TSTSEQ r6, r5, 0xc0000012
		   0x010D5C04:  B419FA02     RSCSEQ r1, r10, 0x2d0000
		   0x010D5C08:  E820FA02     RSCSEQ r2, r10, 0xe8
		*/
	}

	// RVA: 0x10D6D24 Offset: 0x10D6D24 VA: 0x10D6D24
	private void CreateItemFromLevel(int x, int y, FieldData levelToLoad) {
		/* Disassembly (ARM32, 152 instructions, 0x260 bytes):
		   // CFG: 42 blocks, 43 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D6D24:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D6D28:  34D04DE2     SUB sp, sp, 0x34
		   0x010D6D2C:  0370A0E1     MOV r7, r3
		   0x010D6D30:  02B0A0E1     MOV fp, r2
		   0x010D6D34:  01A0A0E1     MOV r10, r1
		   0x010D6D38:  0050A0E1     MOV r5, r0
		   0x010D6D3C:  000053E3     CMPS r0, r3, 0x0
		   0x010D6D40:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6D48
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D6D44:  A111FAEB     BL $-0x17b974
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D6D48:  1C6095E5     LDR r6, [r5, 0x1c]
		   0x010D6D4C:  1C4097E5     LDR r4, [r7, 0x1c]
		   0x010D6D50:  000056E3     CMPS r0, r6, 0x0
		   0x010D6D54:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6D5C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D6D58:  9C11FAEB     BL $-0x17b988
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D6D5C:  647096E5     LDR r7, [r6, 0x64]
		   0x010D6D60:  000057E3     CMPS r0, r7, 0x0
		   0x010D6D64:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6D6C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D6D68:  9811FAEB     BL $-0x17b998
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D6D6C:  0700A0E1     MOV r0, r7
		   0x010D6D70:  0010A0E3     MOV r1, 0x0
		   0x010D6D74:  EE7E0DEB     BL $+0x35fbc0  // CALL → LevelLayout.get_width
		   0x010D6D78:  90AB27E0     MLA r7, r0, fp, r10
		   0x010D6D7C:  000054E3     CMPS r0, r4, 0x0
		   0x010D6D80:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6D88
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D6D84:  9111FAEB     BL $-0x17b9b4
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D6D88:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010D6D8C:  070050E1     CMPS r0, r0, r7
		   0x010D6D90:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D6D98
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x010D6D94:  8E11FAEB     BL $-0x17b9c0
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x010D6D98:  070184E0     ADD r0, r4, r7, lsl 2
		   0x010D6D9C:  104090E5     LDR r4, [r0, 0x10]
		   0x010D6DA0:  000054E3     CMPS r0, r4, 0x0
		   0x010D6DA4:  0400000A     BEQ $+0x18  // if (==) goto 0x010D6DBC
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010D6DA8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010D6DAC:  000050E3     CMPS r0, r0, 0x0
		   0x010D6DB0:  08709015     LDRNE r7, [r0, 0x8]
		   0x010D6DB4:  00005713     CMPSNE r0, r7, 0x0
		   0x010D6DB8:  0100001A     BNE $+0xc  // if (!=) goto 0x010D6DC4
		   // 
		   // ──── Block 12 (from 2 paths) ──────────────────
		   0x010D6DBC:  34D08DE2     ADD sp, sp, 0x34
		   0x010D6DC0:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D6DC4:  0800D4E5     LDRB r0, [r4, 0x8]
		   0x010D6DC8:  000050E3     CMPS r0, r0, 0x0
		   0x010D6DCC:  FAFFFF1A     BNE $-0x10
		   // ──── Block 14 else (==) ────────────────────
		   0x010D6DD0:  2C8095E5     LDR r8, [r5, 0x2c]
		   0x010D6DD4:  000058E3     CMPS r0, r8, 0x0
		   0x010D6DD8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6DE0
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D6DDC:  7B11FAEB     BL $-0x17ba0c
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D6DE0:  0800A0E1     MOV r0, r8
		   0x010D6DE4:  0710A0E1     MOV r1, r7
		   0x010D6DE8:  0020A0E3     MOV r2, 0x0
		   0x010D6DEC:  F9DB02EB     BL $+0xb6fec  // CALL → ResourcesPack.GetChainNameByItemCode
		   0x010D6DF0:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010D6DF4:  0080A0E1     MOV r8, r0
		   0x010D6DF8:  2C7095E5     LDR r7, [r5, 0x2c]
		   0x010D6DFC:  000056E3     CMPS r0, r6, 0x0
		   0x010D6E00:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6E08
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D6E04:  7111FAEB     BL $-0x17ba34
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D6E08:  089096E5     LDR sb, [r6, 0x8]
		   0x010D6E0C:  000057E3     CMPS r0, r7, 0x0
		   0x010D6E10:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6E18
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010D6E14:  6D11FAEB     BL $-0x17ba44
		   // ──── Block 20 if (!=) ────────────────────
		   0x010D6E18:  0700A0E1     MOV r0, r7
		   0x010D6E1C:  0910A0E1     MOV r1, sb
		   0x010D6E20:  0020A0E3     MOV r2, 0x0
		   0x010D6E24:  23DC02EB     BL $+0xb7094  // CALL → ResourcesPack.GetChainOrderByItemCode
		   0x010D6E28:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010D6E2C:  0090A0E1     MOV sb, r0
		   0x010D6E30:  2C6095E5     LDR r6, [r5, 0x2c]
		   0x010D6E34:  000057E3     CMPS r0, r7, 0x0
		   0x010D6E38:  0700A0E1     MOV r0, r7
		   0x010D6E3C:  0300001A     BNE $+0x14  // if (!=) goto 0x010D6E50
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010D6E40:  6211FAEB     BL $-0x17ba70
		   0x010D6E44:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010D6E48:  000050E3     CMPS r0, r0, 0x0
		   0x010D6E4C:  4B00000A     BEQ $+0x134  // if (==) goto 0x010D6F80
		   // 
		   // ──── Block 22 (from 2 paths) ──────────────────
		   0x010D6E50:  0D40D0E5     LDRB r4, [r0, 0xd]
		   0x010D6E54:  000056E3     CMPS r0, r6, 0x0
		   0x010D6E58:  0C70D7E5     LDRB r7, [r7, 0xc]
		   0x010D6E5C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6E64
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D6E60:  5A11FAEB     BL $-0x17ba90
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D6E64:  140F6FE1     CLZ r0, r4
		   0x010D6E68:  000057E3     CMPS r0, r7, 0x0
		   0x010D6E6C:  01700013     MOVNE r7, 0x1
		   0x010D6E70:  0010A0E3     MOV r1, 0x0
		   0x010D6E74:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010D6E78:  0920A0E1     MOV r2, sb
		   0x010D6E7C:  F000CDE1     STRD r0, r1, [sp]
		   0x010D6E80:  0600A0E1     MOV r0, r6
		   0x010D6E84:  0810A0E1     MOV r1, r8
		   0x010D6E88:  0730A0E1     MOV r3, r7
		   0x010D6E8C:  4AE302EB     BL $+0xb8d30  // CALL → ResourcesPack.GetItemObject
		   0x010D6E90:  288095E5     LDR r8, [r5, 0x28]
		   0x010D6E94:  0070A0E1     MOV r7, r0
		   0x010D6E98:  000050E3     CMPS r0, r0, 0x0
		   0x010D6E9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6EA4
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010D6EA0:  4A11FAEB     BL $-0x17bad0
		   // ──── Block 26 if (!=) ────────────────────
		   0x010D6EA4:  189097E5     LDR sb, [r7, 0x18]
		   0x010D6EA8:  000059E3     CMPS r0, sb, 0x0
		   0x010D6EAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6EB4
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010D6EB0:  4611FAEB     BL $-0x17bae0
		   // ──── Block 28 if (!=) ────────────────────
		   0x010D6EB4:  1C4095E5     LDR r4, [r5, 0x1c]
		   0x010D6EB8:  1C70D9E5     LDRB r7, [sb, 0x1c]
		   0x010D6EBC:  000054E3     CMPS r0, r4, 0x0
		   0x010D6EC0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6EC8
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010D6EC4:  4111FAEB     BL $-0x17baf4
		   // ──── Block 30 if (!=) ────────────────────
		   0x010D6EC8:  604094E5     LDR r4, [r4, 0x60]
		   0x010D6ECC:  000054E3     CMPS r0, r4, 0x0
		   0x010D6ED0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6ED8
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010D6ED4:  3D11FAEB     BL $-0x17bb04
		   // ──── Block 32 if (!=) ────────────────────
		   0x010D6ED8:  080094E5     LDR r0, [r4, 0x8]
		   0x010D6EDC:  001090E5     LDR r1, [r0]
		   0x010D6EE0:  0A0051E1     CMPS r0, r1, r10
		   0x010D6EE4:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010D6EF0
		   // 
		   // ──── Block 33 else (<= (unsigned)) ────────────────────
		   0x010D6EE8:  3911FAEB     BL $-0x17bb14
		   0x010D6EEC:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 34 if (> (unsigned)) ────────────────────
		   0x010D6EF0:  086090E5     LDR r6, [r0, 0x8]
		   0x010D6EF4:  0B0056E1     CMPS r0, r6, fp
		   0x010D6EF8:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010D6F00
		   // 
		   // ──── Block 35 else (<= (unsigned)) ────────────────────
		   0x010D6EFC:  3411FAEB     BL $-0x17bb28
		   // ──── Block 36 if (> (unsigned)) ────────────────────
		   0x010D6F00:  96BA20E0     MLA r0, r6, r10, fp
		   0x010D6F04:  1C5095E5     LDR r5, [r5, 0x1c]
		   0x010D6F08:  000055E3     CMPS r0, r5, 0x0
		   0x010D6F0C:  000184E0     ADD r0, r4, r0, lsl 2
		   0x010D6F10:  104090E5     LDR r4, [r0, 0x10]
		   0x010D6F14:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6F1C
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x010D6F18:  2C11FAEB     BL $-0x17bb48
		   // ──── Block 38 if (!=) ────────────────────
		   0x010D6F1C:  2C5095E5     LDR r5, [r5, 0x2c]
		   0x010D6F20:  000058E3     CMPS r0, r8, 0x0
		   0x010D6F24:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6F2C
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010D6F28:  2811FAEB     BL $-0x17bb58
		   // ──── Block 40 if (!=) ────────────────────
		   0x010D6F2C:  000057E3     CMPS r0, r7, 0x0
		   0x010D6F30:  0000A0E3     MOV r0, 0x0
		   0x010D6F34:  0010E0E3     MVN r1, r0, 0x0
		   0x010D6F38:  0120A0E3     MOV r2, 0x1
		   0x010D6F3C:  01700013     MOVNE r7, 0x1
		   0x010D6F40:  14208DE5     STR r2, [sp, 0x14]
		   0x010D6F44:  20008DE5     STR r0, [sp, 0x20]
		   0x010D6F48:  0720A0E1     MOV r2, r7
		   0x010D6F4C:  24108DE5     STR r1, [sp, 0x24]
		   0x010D6F50:  0430A0E1     MOV r3, r4
		   0x010D6F54:  18108DE5     STR r1, [sp, 0x18]
		   0x010D6F58:  0910A0E1     MOV r1, sb
		   0x010D6F5C:  28008DE5     STR r0, [sp, 0x28]
		   0x010D6F60:  21008DE8     STM sp, {r0, r5}
		   0x010D6F64:  08008DE5     STR r0, [sp, 0x8]
		   0x010D6F68:  0C008DE5     STR r0, [sp, 0xc]
		   0x010D6F6C:  10008DE5     STR r0, [sp, 0x10]
		   0x010D6F70:  1C008DE5     STR r0, [sp, 0x1c]
		   0x010D6F74:  0800A0E1     MOV r0, r8
		   0x010D6F78:  E20500EB     BL $+0x1790  // CALL → GameState.AddItem
		   0x010D6F7C:  8EFFFFEA     B $-0x1c0
		   // ──── Block 41 if (==) ────────────────────
		   0x010D6F80:  1211FAEB     BL $-0x17bbb0
		*/
	}

	// RVA: 0x10D9F40 Offset: 0x10D9F40 VA: 0x10D9F40
	private void OnDisable() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D9F40:  0010A0E3     MOV r1, 0x0
		   0x010D9F44:  3010C0E5     STRB r1, [r0, 0x30]
		   0x010D9F48:  6C1080E5     STR r1, [r0, 0x6c]
		   0x010D9F4C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D9F50 Offset: 0x10D9F50 VA: 0x10D9F50
	public void .ctor() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D9F50:  0010E0E3     MVN r1, r0, 0x0
		   0x010D9F54:  3C1080E5     STR r1, [r0, 0x3c]
		   0x010D9F58:  0010A0E3     MOV r1, 0x0
		   0x010D9F5C:  D1773CEA     B $+0xf1df4c
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D9F60 Offset: 0x10D9F60 VA: 0x10D9F60
	private void <Init>b__34_0() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D9F60:  480090E5     LDR r0, [r0, 0x48]
		   0x010D9F64:  0010A0E3     MOV r1, 0x0
		   0x010D9F68:  0020A0E3     MOV r2, 0x0
		   0x010D9F6C:  167110EA     B $+0x41c460  // TAIL CALL → ExtensionMethods.SafeKill
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D9F70 Offset: 0x10D9F70 VA: 0x10D9F70
	private void <Init>b__34_1() {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D9F70:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D9F74:  0110A0E3     MOV r1, 0x1
		   0x010D9F78:  0040A0E1     MOV r4, r0
		   0x010D9F7C:  25E4FFEB     BL $-0x6f64
		   0x010D9F80:  545094E5     LDR r5, [r4, 0x54]
		   0x010D9F84:  000055E3     CMPS r0, r5, 0x0
		   0x010D9F88:  0000001A     BNE $+0x8  // if (!=) goto 0x010D9F90
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D9F8C:  0F05FAEB     BL $-0x17ebbc
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D9F90:  0C3095E5     LDR r3, [r5, 0xc]
		   0x010D9F94:  0010A0E3     MOV r1, 0x0
		   0x010D9F98:  142095E5     LDR r2, [r5, 0x14]
		   0x010D9F9C:  200095E5     LDR r0, [r5, 0x20]
		   0x010D9FA0:  0050A0E3     MOV r5, 0x0
		   0x010D9FA4:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x010D9FA8:  445084E5     STR r5, [r4, 0x44]
		   0x010D9FAC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D9FB0 Offset: 0x10D9FB0 VA: 0x10D9FB0
	private void <UpdateMergeHelper>b__40_0() {
		/* Disassembly (ARM32, 42 instructions, 0xA8 bytes):
		   // CFG: 11 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D9FB0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D9FB4:  90509FE5     LDR r5, [pc, 0x90]
		   0x010D9FB8:  0040A0E1     MOV r4, r0
		   0x010D9FBC:  05508FE0     ADD r5, pc, r5
		   0x010D9FC0:  0000D5E5     LDRB r0, [r5]
		   0x010D9FC4:  000050E3     CMPS r0, r0, 0x0
		   0x010D9FC8:  0400001A     BNE $+0x18  // if (!=) goto 0x010D9FE0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D9FCC:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010D9FD0:  00009FE7     LDR r0, [pc, r0]
		   0x010D9FD4:  6104FAEB     BL $-0x17ee74
		   0x010D9FD8:  0100A0E3     MOV r0, 0x1
		   0x010D9FDC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D9FE0:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010D9FE4:  00009FE7     LDR r0, [pc, r0]
		   0x010D9FE8:  000090E5     LDR r0, [r0]
		   0x010D9FEC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D9FF0:  005090E5     LDR r5, [r0]
		   0x010D9FF4:  000055E3     CMPS r0, r5, 0x0
		   0x010D9FF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA000
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D9FFC:  F304FAEB     BL $-0x17ec2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DA000:  0500A0E1     MOV r0, r5
		   0x010DA004:  0010A0E3     MOV r1, 0x0
		   0x010DA008:  632B11EB     BL $+0x44ad94  // CALL → FTUEFirstController.get_ftueIsCompleted
		   0x010DA00C:  000050E3     CMPS r0, r0, 0x0
		   0x010DA010:  3088BD08     POPEQ {r4, r5, fp, pc}
		   0x010DA014:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x010DA018:  504094E5     LDR r4, [r4, 0x50]
		   0x010DA01C:  000055E3     CMPS r0, r5, 0x0
		   0x010DA020:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA028
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010DA024:  E904FAEB     BL $-0x17ec54
		   // ──── Block 7 if (!=) ────────────────────
		   0x010DA028:  605095E5     LDR r5, [r5, 0x60]
		   0x010DA02C:  000054E3     CMPS r0, r4, 0x0
		   0x010DA030:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA038
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010DA034:  E504FAEB     BL $-0x17ec64
		   // ──── Block 9 if (!=) ────────────────────
		   0x010DA038:  0400A0E1     MOV r0, r4
		   0x010DA03C:  0510A0E1     MOV r1, r5
		   0x010DA040:  0020A0E3     MOV r2, 0x0
		   0x010DA044:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010DA048:  AA1A01EA     B $+0x46ab0  // TAIL CALL → MergeSuggestionHelper.HighlightRandomMerge
		   0x010DA04C:  9E1C1503     TSTSEQ r1, r5, 0x9e00
		   0x010DA050:  0CEFF902     RSCSEQ lr, sb, 0x30
		   0x010DA054:  F8EEF902     RSCSEQ lr, sb, 0xf80
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D7A9C Offset: 0x10D7A9C VA: 0x10D7A9C
	private void <OnPointerUp>g__CompleteDrag|65_0(ref GameBoard.<>c__DisplayClass65_0 ) {
		/* Disassembly (ARM32, 137 instructions, 0x224 bytes):
		   // CFG: 29 blocks, 32 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D7A9C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D7AA0:  F4619FE5     LDR r6, [pc, 0x1f4]
		   0x010D7AA4:  0040A0E1     MOV r4, r0
		   0x010D7AA8:  0150A0E1     MOV r5, r1
		   0x010D7AAC:  06608FE0     ADD r6, pc, r6
		   0x010D7AB0:  0000D6E5     LDRB r0, [r6]
		   0x010D7AB4:  000050E3     CMPS r0, r0, 0x0
		   0x010D7AB8:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010D7AF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D7ABC:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x010D7AC0:  00009FE7     LDR r0, [pc, r0]
		   0x010D7AC4:  A50DFAEB     BL $-0x17c964
		   0x010D7AC8:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x010D7ACC:  00009FE7     LDR r0, [pc, r0]
		   0x010D7AD0:  A20DFAEB     BL $-0x17c970
		   0x010D7AD4:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x010D7AD8:  00009FE7     LDR r0, [pc, r0]
		   0x010D7ADC:  9F0DFAEB     BL $-0x17c97c
		   0x010D7AE0:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x010D7AE4:  00009FE7     LDR r0, [pc, r0]
		   0x010D7AE8:  9C0DFAEB     BL $-0x17c988
		   0x010D7AEC:  0100A0E3     MOV r0, 0x1
		   0x010D7AF0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D7AF4:  3000D4E5     LDRB r0, [r4, 0x30]
		   0x010D7AF8:  000050E3     CMPS r0, r0, 0x0
		   0x010D7AFC:  5300001A     BNE $+0x154  // if (!=) goto 0x010D7C50
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D7B00:  A8719FE5     LDR r7, [pc, 0x1a8]
		   0x010D7B04:  07709FE7     LDR r7, [pc, r7]
		   0x010D7B08:  406094E5     LDR r6, [r4, 0x40]
		   0x010D7B0C:  000097E5     LDR r0, [r7]
		   0x010D7B10:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7B14:  000051E3     CMPS r0, r1, 0x0
		   0x010D7B18:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7B20
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D7B1C:  DC0DFAEB     BL $-0x17c888
		   // ──── Block 5 if (!=) ────────────────────
		   0x010D7B20:  0600A0E1     MOV r0, r6
		   0x010D7B24:  0010A0E3     MOV r1, 0x0
		   0x010D7B28:  0020A0E3     MOV r2, 0x0
		   0x010D7B2C:  1034FDEB     BL $-0xb2fb8
		   0x010D7B30:  000050E3     CMPS r0, r0, 0x0
		   0x010D7B34:  4500000A     BEQ $+0x11c  // if (==) goto 0x010D7C50
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010D7B38:  406094E5     LDR r6, [r4, 0x40]
		   0x010D7B3C:  000056E3     CMPS r0, r6, 0x0
		   0x010D7B40:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7B48
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D7B44:  210EFAEB     BL $-0x17c774
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D7B48:  000097E5     LDR r0, [r7]
		   0x010D7B4C:  106096E5     LDR r6, [r6, 0x10]
		   0x010D7B50:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7B54:  000051E3     CMPS r0, r1, 0x0
		   0x010D7B58:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7B60
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D7B5C:  CC0DFAEB     BL $-0x17c8c8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D7B60:  0600A0E1     MOV r0, r6
		   0x010D7B64:  0010A0E3     MOV r1, 0x0
		   0x010D7B68:  0020A0E3     MOV r2, 0x0
		   0x010D7B6C:  0034FDEB     BL $-0xb2ff8
		   0x010D7B70:  000050E3     CMPS r0, r0, 0x0
		   0x010D7B74:  3500000A     BEQ $+0xdc  // if (==) goto 0x010D7C50
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010D7B78:  000097E5     LDR r0, [r7]
		   0x010D7B7C:  046095E5     LDR r6, [r5, 0x4]
		   0x010D7B80:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7B84:  000051E3     CMPS r0, r1, 0x0
		   0x010D7B88:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7B90
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D7B8C:  C00DFAEB     BL $-0x17c8f8
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D7B90:  0600A0E1     MOV r0, r6
		   0x010D7B94:  0010A0E3     MOV r1, 0x0
		   0x010D7B98:  0020A0E3     MOV r2, 0x0
		   0x010D7B9C:  F433FDEB     BL $-0xb3028
		   0x010D7BA0:  000050E3     CMPS r0, r0, 0x0
		   0x010D7BA4:  2900000A     BEQ $+0xac  // if (==) goto 0x010D7C50
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010D7BA8:  406094E5     LDR r6, [r4, 0x40]
		   0x010D7BAC:  000056E3     CMPS r0, r6, 0x0
		   0x010D7BB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7BB8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D7BB4:  050EFAEB     BL $-0x17c7e4
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D7BB8:  000097E5     LDR r0, [r7]
		   0x010D7BBC:  045095E5     LDR r5, [r5, 0x4]
		   0x010D7BC0:  106096E5     LDR r6, [r6, 0x10]
		   0x010D7BC4:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7BC8:  000051E3     CMPS r0, r1, 0x0
		   0x010D7BCC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7BD4
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D7BD0:  AF0DFAEB     BL $-0x17c93c
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D7BD4:  0600A0E1     MOV r0, r6
		   0x010D7BD8:  0510A0E1     MOV r1, r5
		   0x010D7BDC:  0020A0E3     MOV r2, 0x0
		   0x010D7BE0:  E333FDEB     BL $-0xb306c
		   0x010D7BE4:  000050E3     CMPS r0, r0, 0x0
		   0x010D7BE8:  1800000A     BEQ $+0x68  // if (==) goto 0x010D7C50
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x010D7BEC:  0400A0E1     MOV r0, r4
		   0x010D7BF0:  370200EB     BL $+0x8e4  // CALL → GameBoard.<OnPointerUp>g__TryToPutBack|65_3
		   0x010D7BF4:  000050E3     CMPS r0, r0, 0x0
		   0x010D7BF8:  1400001A     BNE $+0x58  // if (!=) goto 0x010D7C50
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010D7BFC:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010D7C00:  00009FE7     LDR r0, [pc, r0]
		   0x010D7C04:  000090E5     LDR r0, [r0]
		   0x010D7C08:  ED0DFAEB     BL $-0x17c844
		   0x010D7C0C:  0050A0E1     MOV r5, r0
		   0x010D7C10:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010D7C14:  0020A0E3     MOV r2, 0x0
		   0x010D7C18:  00009FE7     LDR r0, [pc, r0]
		   0x010D7C1C:  001090E5     LDR r1, [r0]
		   0x010D7C20:  0500A0E1     MOV r0, r5
		   0x010D7C24:  04C57EEB     BL $+0x1fb1418  // CALL → Exception..ctor
		   0x010D7C28:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x010D7C2C:  00009FE7     LDR r0, [pc, r0]
		   0x010D7C30:  000090E5     LDR r0, [r0]
		   0x010D7C34:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7C38:  000051E3     CMPS r0, r1, 0x0
		   0x010D7C3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7C44
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010D7C40:  930DFAEB     BL $-0x17c9ac
		   // ──── Block 22 if (!=) ────────────────────
		   0x010D7C44:  0500A0E1     MOV r0, r5
		   0x010D7C48:  0010A0E3     MOV r1, 0x0
		   0x010D7C4C:  4E813CEB     BL $+0xf20540  // CALL → sub_1FF818C
		   // ──── Block 23 (from 6 paths) ──────────────────
		   0x010D7C50:  400094E5     LDR r0, [r4, 0x40]
		   0x010D7C54:  0060A0E3     MOV r6, 0x0
		   0x010D7C58:  0010E0E3     MVN r1, r0, 0x0
		   0x010D7C5C:  3060C4E5     STRB r6, [r4, 0x30]
		   0x010D7C60:  000050E3     CMPS r0, r0, 0x0
		   0x010D7C64:  3C1084E5     STR r1, [r4, 0x3c]
		   0x010D7C68:  0100000A     BEQ $+0xc  // if (==) goto 0x010D7C74
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x010D7C6C:  0010A0E3     MOV r1, 0x0
		   0x010D7C70:  E4D300EB     BL $+0x34f98  // CALL → Item.TryToStartBackgroundAnimation
		   // ──── Block 25 if (==) ────────────────────
		   0x010D7C74:  205094E5     LDR r5, [r4, 0x20]
		   0x010D7C78:  406084E5     STR r6, [r4, 0x40]
		   0x010D7C7C:  000055E3     CMPS r0, r5, 0x0
		   0x010D7C80:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7C88
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010D7C84:  D10DFAEB     BL $-0x17c8b4
		   // ──── Block 27 if (!=) ────────────────────
		   0x010D7C88:  0500A0E1     MOV r0, r5
		   0x010D7C8C:  AEC0FFEB     BL $-0xfd40
		   0x010D7C90:  0400A0E1     MOV r0, r4
		   0x010D7C94:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010D7C98:  47EDFFEA     B $-0x4adc
		   0x010D7C9C:  AF411503     TSTSEQ r4, r5, 0xc000002b
		   0x010D7CA0:  C8EAF902     RSCSEQ lr, sb, 0xc8000
		   0x010D7CA4:  20EEF902     RSCSEQ lr, sb, 0x200
		   0x010D7CA8:  60EAF902     RSCSEQ lr, sb, 0x60000
		   0x010D7CAC:  A414FA02     RSCSEQ r1, r10, 0xa4000000
		   0x010D7CB0:  34EAF902     RSCSEQ lr, sb, 0x34000
		   0x010D7CB4:  ECECF902     RSCSEQ lr, sb, 0xec00
		   0x010D7CB8:  7013FA02     RSCSEQ r1, r10, 0xc0000001
		   0x010D7CBC:  5CE9F902     RSCSEQ lr, sb, 0x170000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D7CC0 Offset: 0x10D7CC0 VA: 0x10D7CC0
	private void <OnPointerUp>g__InventoryInteraction|65_1(ref GameBoard.<>c__DisplayClass65_0 ) {
		/* Disassembly (ARM32, 153 instructions, 0x264 bytes):
		   // CFG: 26 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D7CC0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D7CC4:  1C629FE5     LDR r6, [pc, 0x21c]
		   0x010D7CC8:  0040A0E1     MOV r4, r0
		   0x010D7CCC:  0150A0E1     MOV r5, r1
		   0x010D7CD0:  06608FE0     ADD r6, pc, r6
		   0x010D7CD4:  0000D6E5     LDRB r0, [r6]
		   0x010D7CD8:  000050E3     CMPS r0, r0, 0x0
		   0x010D7CDC:  1300001A     BNE $+0x54  // if (!=) goto 0x010D7D30
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D7CE0:  04029FE5     LDR r0, [pc, 0x204]
		   0x010D7CE4:  00009FE7     LDR r0, [pc, r0]
		   0x010D7CE8:  1C0DFAEB     BL $-0x17cb88
		   0x010D7CEC:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x010D7CF0:  00009FE7     LDR r0, [pc, r0]
		   0x010D7CF4:  190DFAEB     BL $-0x17cb94
		   0x010D7CF8:  F4019FE5     LDR r0, [pc, 0x1f4]
		   0x010D7CFC:  00009FE7     LDR r0, [pc, r0]
		   0x010D7D00:  160DFAEB     BL $-0x17cba0
		   0x010D7D04:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x010D7D08:  00009FE7     LDR r0, [pc, r0]
		   0x010D7D0C:  130DFAEB     BL $-0x17cbac
		   0x010D7D10:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x010D7D14:  00009FE7     LDR r0, [pc, r0]
		   0x010D7D18:  100DFAEB     BL $-0x17cbb8
		   0x010D7D1C:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x010D7D20:  00009FE7     LDR r0, [pc, r0]
		   0x010D7D24:  0D0DFAEB     BL $-0x17cbc4
		   0x010D7D28:  0100A0E3     MOV r0, 0x1
		   0x010D7D2C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D7D30:  406094E5     LDR r6, [r4, 0x40]
		   0x010D7D34:  000056E3     CMPS r0, r6, 0x0
		   0x010D7D38:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7D40
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D7D3C:  A30DFAEB     BL $-0x17c96c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D7D40:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x010D7D44:  00009FE7     LDR r0, [pc, r0]
		   0x010D7D48:  107096E5     LDR r7, [r6, 0x10]
		   0x010D7D4C:  000090E5     LDR r0, [r0]
		   0x010D7D50:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7D54:  000051E3     CMPS r0, r1, 0x0
		   0x010D7D58:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7D60
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D7D5C:  4C0DFAEB     BL $-0x17cac8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D7D60:  0700A0E1     MOV r0, r7
		   0x010D7D64:  0010A0E3     MOV r1, 0x0
		   0x010D7D68:  23813CEB     BL $+0xf20494  // CALL → sub_1FF81FC
		   0x010D7D6C:  000050E3     CMPS r0, r0, 0x0
		   0x010D7D70:  3700000A     BEQ $+0xe4  // if (==) goto 0x010D7E54
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010D7D74:  687094E5     LDR r7, [r4, 0x68]
		   0x010D7D78:  000057E3     CMPS r0, r7, 0x0
		   0x010D7D7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7D84
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010D7D80:  920DFAEB     BL $-0x17c9b0
		   // ──── Block 9 if (!=) ────────────────────
		   0x010D7D84:  0C3097E5     LDR r3, [r7, 0xc]
		   0x010D7D88:  0610A0E1     MOV r1, r6
		   0x010D7D8C:  142097E5     LDR r2, [r7, 0x14]
		   0x010D7D90:  200097E5     LDR r0, [r7, 0x20]
		   0x010D7D94:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x010D7D98:  000050E3     CMPS r0, r0, 0x0
		   0x010D7D9C:  2800001A     BNE $+0xa8  // if (!=) goto 0x010D7E44
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D7DA0:  0400A0E1     MOV r0, r4
		   0x010D7DA4:  CA0100EB     BL $+0x730  // CALL → GameBoard.<OnPointerUp>g__TryToPutBack|65_3
		   0x010D7DA8:  000050E3     CMPS r0, r0, 0x0
		   0x010D7DAC:  1400001A     BNE $+0x58  // if (!=) goto 0x010D7E04
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D7DB0:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010D7DB4:  00009FE7     LDR r0, [pc, r0]
		   0x010D7DB8:  000090E5     LDR r0, [r0]
		   0x010D7DBC:  800DFAEB     BL $-0x17c9f8
		   0x010D7DC0:  0070A0E1     MOV r7, r0
		   0x010D7DC4:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010D7DC8:  0020A0E3     MOV r2, 0x0
		   0x010D7DCC:  00009FE7     LDR r0, [pc, r0]
		   0x010D7DD0:  001090E5     LDR r1, [r0]
		   0x010D7DD4:  0700A0E1     MOV r0, r7
		   0x010D7DD8:  BA2D11EB     BL $+0x44b6f0  // CALL → StrException..ctor
		   0x010D7DDC:  38019FE5     LDR r0, [pc, 0x138]
		   0x010D7DE0:  00009FE7     LDR r0, [pc, r0]
		   0x010D7DE4:  000090E5     LDR r0, [r0]
		   0x010D7DE8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7DEC:  000051E3     CMPS r0, r1, 0x0
		   0x010D7DF0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7DF8
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D7DF4:  260DFAEB     BL $-0x17cb60
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D7DF8:  0700A0E1     MOV r0, r7
		   0x010D7DFC:  0010A0E3     MOV r1, 0x0
		   0x010D7E00:  E1803CEB     BL $+0xf2038c  // CALL → sub_1FF818C
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D7E04:  14019FE5     LDR r0, [pc, 0x114]
		   0x010D7E08:  00009FE7     LDR r0, [pc, r0]
		   0x010D7E0C:  001096E5     LDR r1, [r6]
		   0x010D7E10:  000090E5     LDR r0, [r0]
		   0x010D7E14:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010D7E18:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010D7E1C:  020053E1     CMPS r0, r3, r2
		   0x010D7E20:  0700003A     BLO $+0x24  // if (< (unsigned)) goto 0x010D7E44
		   // 
		   // ──── Block 15 else (>= (unsigned)) ────────────────────
		   0x010D7E24:  641091E5     LDR r1, [r1, 0x64]
		   0x010D7E28:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010D7E2C:  041011E5     LDR r1, [r1, -0x4]
		   0x010D7E30:  000051E1     CMPS r0, r1, r0
		   0x010D7E34:  0200001A     BNE $+0x10  // if (!=) goto 0x010D7E44
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010D7E38:  0600A0E1     MOV r0, r6
		   0x010D7E3C:  0010A0E3     MOV r1, 0x0
		   0x010D7E40:  0D0301EB     BL $+0x40c3c  // CALL → ItemFiniteContainer.TryShowOpeningHint
		   // ──── Block 17 (from 3 paths) ──────────────────
		   0x010D7E44:  0400A0E1     MOV r0, r4
		   0x010D7E48:  0510A0E1     MOV r1, r5
		   0x010D7E4C:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010D7E50:  11FFFFEA     B $-0x3b4
		   // ──── Block 18 if (==) ────────────────────
		   0x010D7E54:  0400A0E1     MOV r0, r4
		   0x010D7E58:  0510A0E1     MOV r1, r5
		   0x010D7E5C:  0EFFFFEB     BL $-0x3c0
		   0x010D7E60:  684094E5     LDR r4, [r4, 0x68]
		   0x010D7E64:  000054E3     CMPS r0, r4, 0x0
		   0x010D7E68:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7E70
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010D7E6C:  570DFAEB     BL $-0x17ca9c
		   // ──── Block 20 if (!=) ────────────────────
		   0x010D7E70:  0C3094E5     LDR r3, [r4, 0xc]
		   0x010D7E74:  0610A0E1     MOV r1, r6
		   0x010D7E78:  142094E5     LDR r2, [r4, 0x14]
		   0x010D7E7C:  200094E5     LDR r0, [r4, 0x20]
		   0x010D7E80:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x010D7E84:  000050E3     CMPS r0, r0, 0x0
		   0x010D7E88:  0000000A     BEQ $+0x8  // if (==) goto 0x010D7E90
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010D7E8C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 22 if (==) ────────────────────
		   0x010D7E90:  70009FE5     LDR r0, [pc, 0x70]
		   0x010D7E94:  00009FE7     LDR r0, [pc, r0]
		   0x010D7E98:  000090E5     LDR r0, [r0]
		   0x010D7E9C:  480DFAEB     BL $-0x17cad8
		   0x010D7EA0:  0040A0E1     MOV r4, r0
		   0x010D7EA4:  60009FE5     LDR r0, [pc, 0x60]
		   0x010D7EA8:  0020A0E3     MOV r2, 0x0
		   0x010D7EAC:  00009FE7     LDR r0, [pc, r0]
		   0x010D7EB0:  001090E5     LDR r1, [r0]
		   0x010D7EB4:  0400A0E1     MOV r0, r4
		   0x010D7EB8:  822D11EB     BL $+0x44b610  // CALL → StrException..ctor
		   0x010D7EBC:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010D7EC0:  00009FE7     LDR r0, [pc, r0]
		   0x010D7EC4:  000090E5     LDR r0, [r0]
		   0x010D7EC8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D7ECC:  000051E3     CMPS r0, r1, 0x0
		   0x010D7ED0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D7ED8
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D7ED4:  EE0CFAEB     BL $-0x17cc40
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D7ED8:  0400A0E1     MOV r0, r4
		   0x010D7EDC:  0010A0E3     MOV r1, 0x0
		   0x010D7EE0:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010D7EE4:  A8803CEA     B $+0xf202a8
		   0x010D7EE8:  8C3F1503     TSTSEQ r3, r5, 0x230
		   0x010D7EEC:  A4E8F902     RSCSEQ lr, sb, 0xa40000
		   0x010D7EF0:  0412FA02     RSCSEQ r1, r10, 0x40000000
		   0x010D7EF4:  3CE8F902     RSCSEQ lr, sb, 0x3c0000
		   0x010D7EF8:  7412FA02     RSCSEQ r1, r10, 0x40000007
		   0x010D7EFC:  7812FA02     RSCSEQ r1, r10, 0x80000007
		   0x010D7F00:  7012FA02     RSCSEQ r1, r10, 0x7
		   0x010D7F04:  F4E7F902     RSCSEQ lr, sb, 0x3d00000
		   0x010D7F08:  E810FA02     RSCSEQ r1, r10, 0xe8
		   0x010D7F0C:  E010FA02     RSCSEQ r1, r10, 0xe0
		   0x010D7F10:  C8E6F902     RSCSEQ lr, sb, 0xc800000
		   0x010D7F14:  C811FA02     RSCSEQ r1, r10, 0x32
		   0x010D7F18:  C411FA02     RSCSEQ r1, r10, 0x31
		   0x010D7F1C:  A8E7F902     RSCSEQ lr, sb, 0x2a00000
		   0x010D7F20:  EC10FA02     RSCSEQ r1, r10, 0xec
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D7F24 Offset: 0x10D7F24 VA: 0x10D7F24
	private void <OnPointerUp>g__FieldInteraction|65_2(Cell cell, ref GameBoard.<>c__DisplayClass65_0 ) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D7F24:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D7F28:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D84D4 Offset: 0x10D84D4 VA: 0x10D84D4
	private bool <OnPointerUp>g__TryToPutBack|65_3(ref GameBoard.<>c__DisplayClass65_0 ) {
		/* Disassembly (ARM32, 122 instructions, 0x1E8 bytes):
		   // CFG: 21 blocks, 19 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D84D4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D84D8:  A8419FE5     LDR r4, [pc, 0x1a8]
		   0x010D84DC:  0050A0E1     MOV r5, r0
		   0x010D84E0:  04408FE0     ADD r4, pc, r4
		   0x010D84E4:  0000D4E5     LDRB r0, [r4]
		   0x010D84E8:  000050E3     CMPS r0, r0, 0x0
		   0x010D84EC:  1300001A     BNE $+0x54  // if (!=) goto 0x010D8540
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D84F0:  94019FE5     LDR r0, [pc, 0x194]
		   0x010D84F4:  00009FE7     LDR r0, [pc, r0]
		   0x010D84F8:  180BFAEB     BL $-0x17d398
		   0x010D84FC:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x010D8500:  00009FE7     LDR r0, [pc, r0]
		   0x010D8504:  150BFAEB     BL $-0x17d3a4
		   0x010D8508:  84019FE5     LDR r0, [pc, 0x184]
		   0x010D850C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8510:  120BFAEB     BL $-0x17d3b0
		   0x010D8514:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010D8518:  00009FE7     LDR r0, [pc, r0]
		   0x010D851C:  0F0BFAEB     BL $-0x17d3bc
		   0x010D8520:  74019FE5     LDR r0, [pc, 0x174]
		   0x010D8524:  00009FE7     LDR r0, [pc, r0]
		   0x010D8528:  0C0BFAEB     BL $-0x17d3c8
		   0x010D852C:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010D8530:  00009FE7     LDR r0, [pc, r0]
		   0x010D8534:  090BFAEB     BL $-0x17d3d4
		   0x010D8538:  0100A0E3     MOV r0, 0x1
		   0x010D853C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D8540:  404095E5     LDR r4, [r5, 0x40]
		   0x010D8544:  000054E3     CMPS r0, r4, 0x0
		   0x010D8548:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8550
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D854C:  9F0BFAEB     BL $-0x17d17c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D8550:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010D8554:  00009FE7     LDR r0, [pc, r0]
		   0x010D8558:  104094E5     LDR r4, [r4, 0x10]
		   0x010D855C:  000090E5     LDR r0, [r0]
		   0x010D8560:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8564:  000051E3     CMPS r0, r1, 0x0
		   0x010D8568:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8570
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D856C:  480BFAEB     BL $-0x17d2d8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D8570:  0400A0E1     MOV r0, r4
		   0x010D8574:  0010A0E3     MOV r1, 0x0
		   0x010D8578:  1F7F3CEB     BL $+0xf1fc84  // CALL → sub_1FF81FC
		   0x010D857C:  0070A0E1     MOV r7, r0
		   0x010D8580:  000050E3     CMPS r0, r0, 0x0
		   0x010D8584:  2800000A     BEQ $+0xa8  // if (==) goto 0x010D862C
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010D8588:  406095E5     LDR r6, [r5, 0x40]
		   0x010D858C:  000056E3     CMPS r0, r6, 0x0
		   0x010D8590:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8598
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010D8594:  8D0BFAEB     BL $-0x17d1c4
		   // ──── Block 9 if (!=) ────────────────────
		   0x010D8598:  000096E5     LDR r0, [r6]
		   0x010D859C:  0020A0E3     MOV r2, 0x0
		   0x010D85A0:  101096E5     LDR r1, [r6, 0x10]
		   0x010D85A4:  484190E5     LDR r4, [r0, 0x148]
		   0x010D85A8:  4C3190E5     LDR r3, [r0, 0x14c]
		   0x010D85AC:  0600A0E1     MOV r0, r6
		   0x010D85B0:  34FF2FE1     BLX r4  // virtual call: vtable+0x148
		   0x010D85B4:  406095E5     LDR r6, [r5, 0x40]
		   0x010D85B8:  000056E3     CMPS r0, r6, 0x0
		   0x010D85BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D85C4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010D85C0:  820BFAEB     BL $-0x17d1f0
		   // ──── Block 11 if (!=) ────────────────────
		   0x010D85C4:  101096E5     LDR r1, [r6, 0x10]
		   0x010D85C8:  0500A0E1     MOV r0, r5
		   0x010D85CC:  EAEEFFEB     BL $-0x4450
		   0x010D85D0:  D0509FE5     LDR r5, [pc, 0xd0]
		   0x010D85D4:  05509FE7     LDR r5, [pc, r5]
		   0x010D85D8:  000095E5     LDR r0, [r5]
		   0x010D85DC:  741090E5     LDR r1, [r0, 0x74]
		   0x010D85E0:  000051E3     CMPS r0, r1, 0x0
		   0x010D85E4:  0100001A     BNE $+0xc  // if (!=) goto 0x010D85F0
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D85E8:  290BFAEB     BL $-0x17d354
		   0x010D85EC:  000095E5     LDR r0, [r5]
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D85F0:  B4109FE5     LDR r1, [pc, 0xb4]
		   0x010D85F4:  01109FE7     LDR r1, [pc, r1]
		   0x010D85F8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D85FC:  001091E5     LDR r1, [r1]
		   0x010D8600:  2C5090E5     LDR r5, [r0, 0x2c]
		   0x010D8604:  742091E5     LDR r2, [r1, 0x74]
		   0x010D8608:  000052E3     CMPS r0, r2, 0x0
		   0x010D860C:  0100001A     BNE $+0xc  // if (!=) goto 0x010D8618
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010D8610:  0100A0E1     MOV r0, r1
		   0x010D8614:  1E0BFAEB     BL $-0x17d380
		   // ──── Block 15 if (!=) ────────────────────
		   0x010D8618:  0500A0E1     MOV r0, r5
		   0x010D861C:  FE15A0E3     MOV r1, 0x3f800000
		   0x010D8620:  0020A0E3     MOV r2, 0x0
		   0x010D8624:  0E1904EB     BL $+0x106440  // CALL → SoundController.PlaySound
		   0x010D8628:  140000EA     B $+0x58  // goto 0x010D8680
		   // ──── Block 16 if (==) ────────────────────
		   0x010D862C:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010D8630:  00009FE7     LDR r0, [pc, r0]
		   0x010D8634:  000090E5     LDR r0, [r0]
		   0x010D8638:  610BFAEB     BL $-0x17d274
		   0x010D863C:  0050A0E1     MOV r5, r0
		   0x010D8640:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010D8644:  0020A0E3     MOV r2, 0x0
		   0x010D8648:  00009FE7     LDR r0, [pc, r0]
		   0x010D864C:  001090E5     LDR r1, [r0]
		   0x010D8650:  0500A0E1     MOV r0, r5
		   0x010D8654:  9B2B11EB     BL $+0x44ae74  // CALL → StrException..ctor
		   0x010D8658:  58009FE5     LDR r0, [pc, 0x58]
		   0x010D865C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8660:  000090E5     LDR r0, [r0]
		   0x010D8664:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8668:  000051E3     CMPS r0, r1, 0x0
		   0x010D866C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8674
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D8670:  070BFAEB     BL $-0x17d3dc
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D8674:  0500A0E1     MOV r0, r5
		   0x010D8678:  0010A0E3     MOV r1, 0x0
		   0x010D867C:  C27E3CEB     BL $+0xf1fb10  // CALL → sub_1FF818C
		   // ──── Block 19 ──────────────────────────────
		   0x010D8680:  0700A0E1     MOV r0, r7
		   0x010D8684:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010D8688:  7E371503     TSTSEQ r3, r5, 0x1f80000
		   0x010D868C:  94E0F902     RSCSEQ lr, sb, 0x94
		   0x010D8690:  38E0F902     RSCSEQ lr, sb, 0x38
		   0x010D8694:  3402FA02     RSCSEQ r0, r10, 0x40000003
		   0x010D8698:  640AFA02     RSCSEQ r0, r10, 0x64000
		   0x010D869C:  2002FA02     RSCSEQ r0, r10, 0x2
		   0x010D86A0:  6C0AFA02     RSCSEQ r0, r10, 0x6c000
		   0x010D86A4:  E4DFF902     RSCSEQ sp, sb, 0x390
		   0x010D86A8:  7001FA02     RSCSEQ r0, r10, 0x1c
		   0x010D86AC:  4C01FA02     RSCSEQ r0, r10, 0x13
		   0x010D86B0:  4C09FA02     RSCSEQ r0, r10, 0x130000
		   0x010D86B4:  5409FA02     RSCSEQ r0, r10, 0x150000
		   0x010D86B8:  2CDFF902     RSCSEQ sp, sb, 0xb0
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DA058 Offset: 0x10DA058 VA: 0x10DA058
	private void <HideSelection>b__66_0() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA058:  10402DE9     PUSH {r4, lr}
		   0x010DA05C:  104090E5     LDR r4, [r0, 0x10]
		   0x010DA060:  000054E3     CMPS r0, r4, 0x0
		   0x010DA064:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA06C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA068:  D804FAEB     BL $-0x17ec98
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA06C:  0400A0E1     MOV r0, r4
		   0x010DA070:  0010A0E3     MOV r1, 0x0
		   0x010DA074:  0020A0E3     MOV r2, 0x0
		   0x010DA078:  1040BDE8     POP {r4, lr}
		   0x010DA07C:  CE773CEA     B $+0xf1df40
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass36_0 // TypeDefIndex: 1166
{

	// Fields
	public GameBoard <>4__this; // 0x8
	public string questId; // 0xC

	// Methods

	// RVA: 0x10D26CC Offset: 0x10D26CC VA: 0x10D26CC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D26CC:  0010A0E3     MOV r1, 0x0
		   0x010D26D0:  450B7FEA     B $+0x1fc2d1c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10DA080 Offset: 0x10DA080 VA: 0x10DA080
	internal void <LoadLevel>b__0() {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA080:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010DA084:  085090E5     LDR r5, [r0, 0x8]
		   0x010DA088:  0040A0E1     MOV r4, r0
		   0x010DA08C:  000055E3     CMPS r0, r5, 0x0
		   0x010DA090:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA098
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA094:  CD04FAEB     BL $-0x17ecc4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA098:  285095E5     LDR r5, [r5, 0x28]
		   0x010DA09C:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010DA0A0:  000055E3     CMPS r0, r5, 0x0
		   0x010DA0A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA0AC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DA0A8:  C804FAEB     BL $-0x17ecd8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DA0AC:  0500A0E1     MOV r0, r5
		   0x010DA0B0:  0410A0E1     MOV r1, r4
		   0x010DA0B4:  0020A0E3     MOV r2, 0x0
		   0x010DA0B8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010DA0BC:  FFFFFFEA     B $+0x4  // TAIL CALL → GameState.SetGameStateAndLoadField
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass37_0 // TypeDefIndex: 1167
{

	// Fields
	public GameBoard <>4__this; // 0x8
	public FieldData levelToLoad; // 0xC

	// Methods

	// RVA: 0x10D28F0 Offset: 0x10D28F0 VA: 0x10D28F0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D28F0:  0010A0E3     MOV r1, 0x0
		   0x010D28F4:  BC0A7FEA     B $+0x1fc2af8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10DA288 Offset: 0x10DA288 VA: 0x10DA288
	internal void <LoadLevel>b__0() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA288:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010DA28C:  08D04DE2     SUB sp, sp, 0x8
		   0x010DA290:  085090E5     LDR r5, [r0, 0x8]
		   0x010DA294:  0040A0E1     MOV r4, r0
		   0x010DA298:  000055E3     CMPS r0, r5, 0x0
		   0x010DA29C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA2A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA2A0:  4A04FAEB     BL $-0x17eed0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA2A4:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010DA2A8:  284095E5     LDR r4, [r5, 0x28]
		   0x010DA2AC:  000057E3     CMPS r0, r7, 0x0
		   0x010DA2B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA2B8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DA2B4:  4504FAEB     BL $-0x17eee4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DA2B8:  107087E2     ADD r7, r7, 0x10
		   0x010DA2BC:  000054E3     CMPS r0, r4, 0x0
		   0x010DA2C0:  E00097E8     LDM r7, {r5, r6, r7}
		   0x010DA2C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA2CC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DA2C8:  4004FAEB     BL $-0x17eef8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DA2CC:  0400A0E1     MOV r0, r4
		   0x010DA2D0:  0510A0E1     MOV r1, r5
		   0x010DA2D4:  0620A0E1     MOV r2, r6
		   0x010DA2D8:  0730A0E1     MOV r3, r7
		   0x010DA2DC:  010000EB     BL $+0xc  // CALL → GameState.SetGameStateAndLoadSeasonField
		   0x010DA2E0:  08D08DE2     ADD sp, sp, 0x8
		   0x010DA2E4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private struct <>c__DisplayClass65_0 // TypeDefIndex: 1168
{

	// Fields
	public GameBoard <>4__this; // 0x0
	public Cell pointerUpCell; // 0x4
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <OnDrag>d__63 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1169
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public GameBoard <>4__this; // 0x10
	private Vector2 <dragStartPos>5__2; // 0x14

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x10D7A78 Offset: 0x10D7A78 VA: 0x10D7A78
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D7A78:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010D7A7C:  0140A0E1     MOV r4, r1
		   0x010D7A80:  0010A0E3     MOV r1, 0x0
		   0x010D7A84:  0050A0E1     MOV r5, r0
		   0x010D7A88:  57F67EEB     BL $+0x1fbd964  // CALL → Object..ctor
		   0x010D7A8C:  084085E5     STR r4, [r5, 0x8]
		   0x010D7A90:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10DA414 Offset: 0x10DA414 VA: 0x10DA414 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA414:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10DA418 Offset: 0x10DA418 VA: 0x10DA418 Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA418:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DA41C:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10DA77C Offset: 0x10DA77C VA: 0x10DA77C Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA77C:  0C0090E5     LDR r0, [r0, 0xc]
		   0x010DA780:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10DA784 Offset: 0x10DA784 VA: 0x10DA784 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA784:  10402DE9     PUSH {r4, lr}
		   0x010DA788:  30009FE5     LDR r0, [pc, 0x30]
		   0x010DA78C:  00009FE7     LDR r0, [pc, r0]
		   0x010DA790:  7602FAEB     BL $-0x17f620
		   0x010DA794:  0A03FAEB     BL $-0x17f3d0
		   0x010DA798:  0010A0E3     MOV r1, 0x0
		   0x010DA79C:  0040A0E1     MOV r4, r0
		   0x010DA7A0:  D3C07DEB     BL $+0x1f70354  // CALL → NotSupportedException..ctor
		   0x010DA7A4:  18009FE5     LDR r0, [pc, 0x18]
		   0x010DA7A8:  00009FE7     LDR r0, [pc, r0]
		   0x010DA7AC:  6F02FAEB     BL $-0x17f63c
		   0x010DA7B0:  0010A0E1     MOV r1, r0
		   0x010DA7B4:  0400A0E1     MOV r0, r4
		   0x010DA7B8:  B002FAEB     BL $-0x17f538
		   0x010DA7BC:  5102FAEB     BL $-0x17f6b4
		   0x010DA7C0:  50C3F902     RSCSEQ ip, sb, 0x40000001
		   0x010DA7C4:  7CE8F902     RSCSEQ lr, sb, 0x7c0000
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10DA7C8 Offset: 0x10DA7C8 VA: 0x10DA7C8 Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA7C8:  0C0090E5     LDR r0, [r0, 0xc]
		   0x010DA7CC:  1EFF2FE1     BX lr
		*/
	}
}
