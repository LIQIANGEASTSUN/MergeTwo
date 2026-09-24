// Dll : Assembly-CSharp.dll
// Namespace: 
public class GameState : MonoBehaviour // TypeDefIndex: 1203
{

	// Fields
	public const int MIN_ID = 100;
	public const int MAX_ID = 1000000;
	public const string HAS_USER_FINISHED_ALL_CONTENT_ID = "has_user_finished_all_current_content";
	public Action<List<ItemDataSave>> InventoryUpdated; // 0x10
	[CompilerGenerated]
	private Action<Item> itemAdded; // 0x14
	[CompilerGenerated]
	private Action<int> CompleteLevelEvent; // 0x18
	[CompilerGenerated]
	private Action<bool> CompleteSeasonEvent; // 0x1C
	[CompilerGenerated]
	private Action OnInitialized; // 0x20
	[CompilerGenerated]
	private Action<List<IBoosterSpeedup>, object[], Vector2Int, float> OnFieldSpeedupBoosterStarted; // 0x24
	[CompilerGenerated]
	private Action merge; // 0x28
	private bool initialized; // 0x2C
	[SerializeField]
	private BubblesConfig bubblesConfig; // 0x30
	[SerializeField]
	private ItemsPool itemsPool; // 0x34
	[SerializeField]
	private List<ChainObject> chains; // 0x38
	private GameStateSave gameStateSave; // 0x3C
	private object[] cells; // 0x40
	private Transform bottomContainer; // 0x44
	private Transform topContainer; // 0x48
	private Action resetInfoWindow; // 0x4C
	private readonly List<ItemObject> allItems; // 0x50
	private readonly List<Item> fieldItems; // 0x54
	private static Seasons progressionConfig; // 0x0
	private ReceivedItemsController receivedItemsController; // 0x58
	private ResourcesPack resourcesPack; // 0x5C
	private GoalsController goalsController; // 0x60
	private StarsChest starsChest; // 0x64
	private LimitedChestOpening LimitedChestOpening; // 0x68
	[CompilerGenerated]
	private Season <selectedSeason>k__BackingField; // 0x6C
	private static ConditionalNotificationChest conditionalNotificationChest; // 0x4
	private static ConditionalNotificationChestMissed conditionalNotificationChestMissed; // 0x8
	private static ConditionalNotificationField conditionalNotificationField; // 0xC
	private QuestData questDataCurrent; // 0x70
	private OpenChestRewardsAndShow openChestRewardsAndShow; // 0x74
	private readonly MergeCounter mergeCounter; // 0x78
	private Action<Cell> fakeSelectInfoWindow; // 0x7C
	private Func<RewardsBox.RewardsBoxData> getMainRewardsBoxData; // 0x80
	private static int[] levels; // 0x10

	// Properties
	public static int currentEpisodeIndex { get; }
	public Level CurrentLevel { get; }
	public Episodes CurrentEpisode { get; }
	public int CurrentEpisodeIdx { get; }
	public Episodes episodeNext { get; }
	public List<Goal> CurrentGoals { get; }
	public bool seasonsUnlocked { get; }
	public Season currentSeason { get; }
	public Season selectedSeason { get; set; }
	public bool isEmpty { get; }

	// Methods

	// RVA: 0x10C4C38 Offset: 0x10C4C38 VA: 0x10C4C38
	public static int get_currentEpisodeIndex() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C4C38:  10402DE9     PUSH {r4, lr}
		   0x010C4C3C:  50409FE5     LDR r4, [pc, 0x50]
		   0x010C4C40:  04408FE0     ADD r4, pc, r4
		   0x010C4C44:  0000D4E5     LDRB r0, [r4]
		   0x010C4C48:  000050E3     CMPS r0, r0, 0x0
		   0x010C4C4C:  0400001A     BNE $+0x18  // if (!=) goto 0x010C4C64
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C4C50:  40009FE5     LDR r0, [pc, 0x40]
		   0x010C4C54:  00009FE7     LDR r0, [pc, r0]
		   0x010C4C58:  4059FAEB     BL $-0x169af8
		   0x010C4C5C:  0100A0E3     MOV r0, 0x1
		   0x010C4C60:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C4C64:  30009FE5     LDR r0, [pc, 0x30]
		   0x010C4C68:  00009FE7     LDR r0, [pc, r0]
		   0x010C4C6C:  000090E5     LDR r0, [r0]
		   0x010C4C70:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010C4C74:  004090E5     LDR r4, [r0]
		   0x010C4C78:  000054E3     CMPS r0, r4, 0x0
		   0x010C4C7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010C4C84
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C4C80:  D259FAEB     BL $-0x1698b0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C4C84:  0400A0E1     MOV r0, r4
		   0x010C4C88:  0010A0E3     MOV r1, 0x0
		   0x010C4C8C:  1040BDE8     POP {r4, lr}
		   0x010C4C90:  A75A03EA     B $+0xd6aa4  // TAIL CALL → Seasons.get_CurrentEpisodeIdx
		   0x010C4C94:  2B701603     TSTSEQ r7, r6, 0x2b
		   0x010C4C98:  F03EFB02     RSCSEQ r3, fp, 0xf00
		   0x010C4C9C:  DC3EFB02     RSCSEQ r3, fp, 0xdc0
		*/
	}

	// RVA: 0x10DB35C Offset: 0x10DB35C VA: 0x10DB35C
	public Level get_CurrentLevel() {
		/* Disassembly (ARM32, 33 instructions, 0x84 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB35C:  10402DE9     PUSH {r4, lr}
		   0x010DB360:  6C409FE5     LDR r4, [pc, 0x6c]
		   0x010DB364:  04408FE0     ADD r4, pc, r4
		   0x010DB368:  0000D4E5     LDRB r0, [r4]
		   0x010DB36C:  000050E3     CMPS r0, r0, 0x0
		   0x010DB370:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB388
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB374:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x010DB378:  00009FE7     LDR r0, [pc, r0]
		   0x010DB37C:  77FFF9EB     BL $-0x18021c
		   0x010DB380:  0100A0E3     MOV r0, 0x1
		   0x010DB384:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB388:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010DB38C:  00009FE7     LDR r0, [pc, r0]
		   0x010DB390:  000090E5     LDR r0, [r0]
		   0x010DB394:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB398:  004090E5     LDR r4, [r0]
		   0x010DB39C:  000054E3     CMPS r0, r4, 0x0
		   0x010DB3A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB3A8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB3A4:  0900FAEB     BL $-0x17ffd4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB3A8:  0400A0E1     MOV r0, r4
		   0x010DB3AC:  0010A0E3     MOV r1, 0x0
		   0x010DB3B0:  96FF02EB     BL $+0xbfe60  // CALL → Seasons.get_CurrentEpisode
		   0x010DB3B4:  0040A0E1     MOV r4, r0
		   0x010DB3B8:  000050E3     CMPS r0, r0, 0x0
		   0x010DB3BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB3C4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DB3C0:  0200FAEB     BL $-0x17fff0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DB3C4:  0400A0E1     MOV r0, r4
		   0x010DB3C8:  0010A0E3     MOV r1, 0x0
		   0x010DB3CC:  1040BDE8     POP {r4, lr}
		   0x010DB3D0:  21E910EA     B $+0x43a48c  // TAIL CALL → Episodes.get_CurrentLevel
		   0x010DB3D4:  08091503     TSTSEQ r0, r5, 0x20000
		   0x010DB3D8:  CCD7F902     RSCSEQ sp, sb, 0x3300000
		   0x010DB3DC:  B8D7F902     RSCSEQ sp, sb, 0x2e00000
		*/
	}

	// RVA: 0x10DB3E0 Offset: 0x10DB3E0 VA: 0x10DB3E0
	public Episodes get_CurrentEpisode() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB3E0:  10402DE9     PUSH {r4, lr}
		   0x010DB3E4:  50409FE5     LDR r4, [pc, 0x50]
		   0x010DB3E8:  04408FE0     ADD r4, pc, r4
		   0x010DB3EC:  0000D4E5     LDRB r0, [r4]
		   0x010DB3F0:  000050E3     CMPS r0, r0, 0x0
		   0x010DB3F4:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB40C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB3F8:  40009FE5     LDR r0, [pc, 0x40]
		   0x010DB3FC:  00009FE7     LDR r0, [pc, r0]
		   0x010DB400:  56FFF9EB     BL $-0x1802a0
		   0x010DB404:  0100A0E3     MOV r0, 0x1
		   0x010DB408:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB40C:  30009FE5     LDR r0, [pc, 0x30]
		   0x010DB410:  00009FE7     LDR r0, [pc, r0]
		   0x010DB414:  000090E5     LDR r0, [r0]
		   0x010DB418:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB41C:  004090E5     LDR r4, [r0]
		   0x010DB420:  000054E3     CMPS r0, r4, 0x0
		   0x010DB424:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB42C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB428:  E8FFF9EB     BL $-0x180058
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB42C:  0400A0E1     MOV r0, r4
		   0x010DB430:  0010A0E3     MOV r1, 0x0
		   0x010DB434:  1040BDE8     POP {r4, lr}
		   0x010DB438:  74FF02EA     B $+0xbfdd8  // TAIL CALL → Seasons.get_CurrentEpisode
		   0x010DB43C:  85081503     TSTSEQ r0, r5, 0x850000
		   0x010DB440:  48D7F902     RSCSEQ sp, sb, 0x1200000
		   0x010DB444:  34D7F902     RSCSEQ sp, sb, 0xd00000
		*/
	}

	// RVA: 0x10DB448 Offset: 0x10DB448 VA: 0x10DB448
	public int get_CurrentEpisodeIdx() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB448:  10402DE9     PUSH {r4, lr}
		   0x010DB44C:  50409FE5     LDR r4, [pc, 0x50]
		   0x010DB450:  04408FE0     ADD r4, pc, r4
		   0x010DB454:  0000D4E5     LDRB r0, [r4]
		   0x010DB458:  000050E3     CMPS r0, r0, 0x0
		   0x010DB45C:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB474
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB460:  40009FE5     LDR r0, [pc, 0x40]
		   0x010DB464:  00009FE7     LDR r0, [pc, r0]
		   0x010DB468:  3CFFF9EB     BL $-0x180308
		   0x010DB46C:  0100A0E3     MOV r0, 0x1
		   0x010DB470:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB474:  30009FE5     LDR r0, [pc, 0x30]
		   0x010DB478:  00009FE7     LDR r0, [pc, r0]
		   0x010DB47C:  000090E5     LDR r0, [r0]
		   0x010DB480:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB484:  004090E5     LDR r4, [r0]
		   0x010DB488:  000054E3     CMPS r0, r4, 0x0
		   0x010DB48C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB494
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB490:  CEFFF9EB     BL $-0x1800c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB494:  0400A0E1     MOV r0, r4
		   0x010DB498:  0010A0E3     MOV r1, 0x0
		   0x010DB49C:  1040BDE8     POP {r4, lr}
		   0x010DB4A0:  A30003EA     B $+0xc0294  // TAIL CALL → Seasons.get_CurrentEpisodeIdx
		   0x010DB4A4:  1E081503     TSTSEQ r0, r5, 0x1e0000
		   0x010DB4A8:  E0D6F902     RSCSEQ sp, sb, 0xe000000
		   0x010DB4AC:  CCD6F902     RSCSEQ sp, sb, 0xcc00000
		*/
	}

	// RVA: 0x10DB4B0 Offset: 0x10DB4B0 VA: 0x10DB4B0
	public Episodes get_episodeNext() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB4B0:  10402DE9     PUSH {r4, lr}
		   0x010DB4B4:  50409FE5     LDR r4, [pc, 0x50]
		   0x010DB4B8:  04408FE0     ADD r4, pc, r4
		   0x010DB4BC:  0000D4E5     LDRB r0, [r4]
		   0x010DB4C0:  000050E3     CMPS r0, r0, 0x0
		   0x010DB4C4:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB4DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB4C8:  40009FE5     LDR r0, [pc, 0x40]
		   0x010DB4CC:  00009FE7     LDR r0, [pc, r0]
		   0x010DB4D0:  22FFF9EB     BL $-0x180370
		   0x010DB4D4:  0100A0E3     MOV r0, 0x1
		   0x010DB4D8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB4DC:  30009FE5     LDR r0, [pc, 0x30]
		   0x010DB4E0:  00009FE7     LDR r0, [pc, r0]
		   0x010DB4E4:  000090E5     LDR r0, [r0]
		   0x010DB4E8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB4EC:  004090E5     LDR r4, [r0]
		   0x010DB4F0:  000054E3     CMPS r0, r4, 0x0
		   0x010DB4F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB4FC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB4F8:  B4FFF9EB     BL $-0x180128
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB4FC:  0400A0E1     MOV r0, r4
		   0x010DB500:  0010A0E3     MOV r1, 0x0
		   0x010DB504:  1040BDE8     POP {r4, lr}
		   0x010DB508:  4F0503EA     B $+0xc1544  // TAIL CALL → Seasons.get_nextEpisode
		   0x010DB50C:  B7071503     TSTSEQ r0, r5, 0x2dc0000
		   0x010DB510:  78D6F902     RSCSEQ sp, sb, 0x7800000
		   0x010DB514:  64D6F902     RSCSEQ sp, sb, 0x6400000
		*/
	}

	// RVA: 0x10DB518 Offset: 0x10DB518 VA: 0x10DB518
	public List<Goal> get_CurrentGoals() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DB518:  FFFFFFEA     B $+0x4  // TAIL CALL → GameState.GetGoals
		*/
	}

	// RVA: 0x10DB5DC Offset: 0x10DB5DC VA: 0x10DB5DC
	public bool get_seasonsUnlocked() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB5DC:  10402DE9     PUSH {r4, lr}
		   0x010DB5E0:  50409FE5     LDR r4, [pc, 0x50]
		   0x010DB5E4:  04408FE0     ADD r4, pc, r4
		   0x010DB5E8:  0000D4E5     LDRB r0, [r4]
		   0x010DB5EC:  000050E3     CMPS r0, r0, 0x0
		   0x010DB5F0:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB608
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB5F4:  40009FE5     LDR r0, [pc, 0x40]
		   0x010DB5F8:  00009FE7     LDR r0, [pc, r0]
		   0x010DB5FC:  D7FEF9EB     BL $-0x18049c
		   0x010DB600:  0100A0E3     MOV r0, 0x1
		   0x010DB604:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB608:  30009FE5     LDR r0, [pc, 0x30]
		   0x010DB60C:  00009FE7     LDR r0, [pc, r0]
		   0x010DB610:  000090E5     LDR r0, [r0]
		   0x010DB614:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB618:  004090E5     LDR r4, [r0]
		   0x010DB61C:  000054E3     CMPS r0, r4, 0x0
		   0x010DB620:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB628
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB624:  69FFF9EB     BL $-0x180254
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB628:  0400A0E1     MOV r0, r4
		   0x010DB62C:  0010A0E3     MOV r1, 0x0
		   0x010DB630:  1040BDE8     POP {r4, lr}
		   0x010DB634:  6A0803EA     B $+0xc21b0  // TAIL CALL → Seasons.SeasonOneCompleted
		   0x010DB638:  8C061503     TSTSEQ r0, r5, 0x8c00000
		   0x010DB63C:  4CD5F902     RSCSEQ sp, sb, 0x13000000
		   0x010DB640:  38D5F902     RSCSEQ sp, sb, 0xe000000
		*/
	}

	// RVA: 0x10DB644 Offset: 0x10DB644 VA: 0x10DB644
	public Season get_currentSeason() {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB644:  10402DE9     PUSH {r4, lr}
		   0x010DB648:  50409FE5     LDR r4, [pc, 0x50]
		   0x010DB64C:  04408FE0     ADD r4, pc, r4
		   0x010DB650:  0000D4E5     LDRB r0, [r4]
		   0x010DB654:  000050E3     CMPS r0, r0, 0x0
		   0x010DB658:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB670
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB65C:  40009FE5     LDR r0, [pc, 0x40]
		   0x010DB660:  00009FE7     LDR r0, [pc, r0]
		   0x010DB664:  BDFEF9EB     BL $-0x180504
		   0x010DB668:  0100A0E3     MOV r0, 0x1
		   0x010DB66C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB670:  30009FE5     LDR r0, [pc, 0x30]
		   0x010DB674:  00009FE7     LDR r0, [pc, r0]
		   0x010DB678:  000090E5     LDR r0, [r0]
		   0x010DB67C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB680:  004090E5     LDR r4, [r0]
		   0x010DB684:  000054E3     CMPS r0, r4, 0x0
		   0x010DB688:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB690
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB68C:  4FFFF9EB     BL $-0x1802bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB690:  0400A0E1     MOV r0, r4
		   0x010DB694:  0010A0E3     MOV r1, 0x0
		   0x010DB698:  1040BDE8     POP {r4, lr}
		   0x010DB69C:  A90303EA     B $+0xc0eac  // TAIL CALL → Seasons.get_CurrentSeason
		   0x010DB6A0:  25061503     TSTSEQ r0, r5, 0x2500000
		   0x010DB6A4:  E4D4F902     RSCSEQ sp, sb, 0xe4000000
		   0x010DB6A8:  D0D4F902     RSCSEQ sp, sb, 0xd0000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DB6AC Offset: 0x10DB6AC VA: 0x10DB6AC
	public void add_itemAdded(Action<Item> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB6AC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DB6B0:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DB6B4:  0090A0E1     MOV sb, r0
		   0x010DB6B8:  0180A0E1     MOV r8, r1
		   0x010DB6BC:  04408FE0     ADD r4, pc, r4
		   0x010DB6C0:  0000D4E5     LDRB r0, [r4]
		   0x010DB6C4:  000050E3     CMPS r0, r0, 0x0
		   0x010DB6C8:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB6E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB6CC:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DB6D0:  00009FE7     LDR r0, [pc, r0]
		   0x010DB6D4:  A1FEF9EB     BL $-0x180574
		   0x010DB6D8:  0100A0E3     MOV r0, 0x1
		   0x010DB6DC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB6E0:  1400B9E5     LDR r0, [sb, 0x14]!
		   0x010DB6E4:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DB6E8:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DB6EC:  0810A0E1     MOV r1, r8
		   0x010DB6F0:  0020A0E3     MOV r2, 0x0
		   0x010DB6F4:  0060A0E1     MOV r6, r0
		   0x010DB6F8:  0070A0E3     MOV r7, 0x0
		   0x010DB6FC:  8DF77EEB     BL $+0x1fbde3c  // CALL → Delegate.Combine
		   0x010DB700:  000050E3     CMPS r0, r0, 0x0
		   0x010DB704:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DB734
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DB708:  00509AE5     LDR r5, [r10]
		   0x010DB70C:  0040A0E1     MOV r4, r0
		   0x010DB710:  0510A0E1     MOV r1, r5
		   0x010DB714:  DFFEF9EB     BL $-0x18047c
		   0x010DB718:  0070A0E1     MOV r7, r0
		   0x010DB71C:  000050E3     CMPS r0, r0, 0x0
		   0x010DB720:  0300001A     BNE $+0x14  // if (!=) goto 0x010DB734
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DB724:  0400A0E1     MOV r0, r4
		   0x010DB728:  0510A0E1     MOV r1, r5
		   0x010DB72C:  1500FAEB     BL $-0x17ffa4
		   0x010DB730:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DB734:  0900A0E1     MOV r0, sb
		   0x010DB738:  0710A0E1     MOV r1, r7
		   0x010DB73C:  0620A0E1     MOV r2, r6
		   0x010DB740:  4CEBFAEB     BL $-0x1452c8
		   0x010DB744:  060050E1     CMPS r0, r0, r6
		   0x010DB748:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DB74C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DB750:  B6051503     TSTSEQ r0, r5, 0x2d800000
		   0x010DB754:  BCD7F902     RSCSEQ sp, sb, 0x2f00000
		   0x010DB758:  A4D7F902     RSCSEQ sp, sb, 0x2900000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DB75C Offset: 0x10DB75C VA: 0x10DB75C
	public void remove_itemAdded(Action<Item> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB75C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DB760:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DB764:  0090A0E1     MOV sb, r0
		   0x010DB768:  0180A0E1     MOV r8, r1
		   0x010DB76C:  04408FE0     ADD r4, pc, r4
		   0x010DB770:  0000D4E5     LDRB r0, [r4]
		   0x010DB774:  000050E3     CMPS r0, r0, 0x0
		   0x010DB778:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB790
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB77C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DB780:  00009FE7     LDR r0, [pc, r0]
		   0x010DB784:  75FEF9EB     BL $-0x180624
		   0x010DB788:  0100A0E3     MOV r0, 0x1
		   0x010DB78C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB790:  1400B9E5     LDR r0, [sb, 0x14]!
		   0x010DB794:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DB798:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DB79C:  0810A0E1     MOV r1, r8
		   0x010DB7A0:  0020A0E3     MOV r2, 0x0
		   0x010DB7A4:  0060A0E1     MOV r6, r0
		   0x010DB7A8:  0070A0E3     MOV r7, 0x0
		   0x010DB7AC:  DFF77EEB     BL $+0x1fbdf84  // CALL → Delegate.Remove
		   0x010DB7B0:  000050E3     CMPS r0, r0, 0x0
		   0x010DB7B4:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DB7E4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DB7B8:  00509AE5     LDR r5, [r10]
		   0x010DB7BC:  0040A0E1     MOV r4, r0
		   0x010DB7C0:  0510A0E1     MOV r1, r5
		   0x010DB7C4:  B3FEF9EB     BL $-0x18052c
		   0x010DB7C8:  0070A0E1     MOV r7, r0
		   0x010DB7CC:  000050E3     CMPS r0, r0, 0x0
		   0x010DB7D0:  0300001A     BNE $+0x14  // if (!=) goto 0x010DB7E4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DB7D4:  0400A0E1     MOV r0, r4
		   0x010DB7D8:  0510A0E1     MOV r1, r5
		   0x010DB7DC:  E9FFF9EB     BL $-0x180054
		   0x010DB7E0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DB7E4:  0900A0E1     MOV r0, sb
		   0x010DB7E8:  0710A0E1     MOV r1, r7
		   0x010DB7EC:  0620A0E1     MOV r2, r6
		   0x010DB7F0:  20EBFAEB     BL $-0x145378
		   0x010DB7F4:  060050E1     CMPS r0, r0, r6
		   0x010DB7F8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DB7FC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DB800:  07051503     TSTSEQ r0, r5, 0x1c00000
		   0x010DB804:  0CD7F902     RSCSEQ sp, sb, 0x300000
		   0x010DB808:  F4D6F902     RSCSEQ sp, sb, 0xf400000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DB80C Offset: 0x10DB80C VA: 0x10DB80C
	public void add_CompleteLevelEvent(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB80C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DB810:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DB814:  0090A0E1     MOV sb, r0
		   0x010DB818:  0180A0E1     MOV r8, r1
		   0x010DB81C:  04408FE0     ADD r4, pc, r4
		   0x010DB820:  0000D4E5     LDRB r0, [r4]
		   0x010DB824:  000050E3     CMPS r0, r0, 0x0
		   0x010DB828:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB840
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB82C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DB830:  00009FE7     LDR r0, [pc, r0]
		   0x010DB834:  49FEF9EB     BL $-0x1806d4
		   0x010DB838:  0100A0E3     MOV r0, 0x1
		   0x010DB83C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB840:  1800B9E5     LDR r0, [sb, 0x18]!
		   0x010DB844:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DB848:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DB84C:  0810A0E1     MOV r1, r8
		   0x010DB850:  0020A0E3     MOV r2, 0x0
		   0x010DB854:  0060A0E1     MOV r6, r0
		   0x010DB858:  0070A0E3     MOV r7, 0x0
		   0x010DB85C:  35F77EEB     BL $+0x1fbdcdc  // CALL → Delegate.Combine
		   0x010DB860:  000050E3     CMPS r0, r0, 0x0
		   0x010DB864:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DB894
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DB868:  00509AE5     LDR r5, [r10]
		   0x010DB86C:  0040A0E1     MOV r4, r0
		   0x010DB870:  0510A0E1     MOV r1, r5
		   0x010DB874:  87FEF9EB     BL $-0x1805dc
		   0x010DB878:  0070A0E1     MOV r7, r0
		   0x010DB87C:  000050E3     CMPS r0, r0, 0x0
		   0x010DB880:  0300001A     BNE $+0x14  // if (!=) goto 0x010DB894
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DB884:  0400A0E1     MOV r0, r4
		   0x010DB888:  0510A0E1     MOV r1, r5
		   0x010DB88C:  BDFFF9EB     BL $-0x180104
		   0x010DB890:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DB894:  0900A0E1     MOV r0, sb
		   0x010DB898:  0710A0E1     MOV r1, r7
		   0x010DB89C:  0620A0E1     MOV r2, r6
		   0x010DB8A0:  F4EAFAEB     BL $-0x145428
		   0x010DB8A4:  060050E1     CMPS r0, r0, r6
		   0x010DB8A8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DB8AC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DB8B0:  58041503     TSTSEQ r0, r5, 0x58000000
		   0x010DB8B4:  B4C3F902     RSCSEQ ip, sb, 0xd0000002
		   0x010DB8B8:  9CC3F902     RSCSEQ ip, sb, 0x70000002
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DB8BC Offset: 0x10DB8BC VA: 0x10DB8BC
	public void remove_CompleteLevelEvent(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB8BC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DB8C0:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DB8C4:  0090A0E1     MOV sb, r0
		   0x010DB8C8:  0180A0E1     MOV r8, r1
		   0x010DB8CC:  04408FE0     ADD r4, pc, r4
		   0x010DB8D0:  0000D4E5     LDRB r0, [r4]
		   0x010DB8D4:  000050E3     CMPS r0, r0, 0x0
		   0x010DB8D8:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB8F0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB8DC:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DB8E0:  00009FE7     LDR r0, [pc, r0]
		   0x010DB8E4:  1DFEF9EB     BL $-0x180784
		   0x010DB8E8:  0100A0E3     MOV r0, 0x1
		   0x010DB8EC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB8F0:  1800B9E5     LDR r0, [sb, 0x18]!
		   0x010DB8F4:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DB8F8:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DB8FC:  0810A0E1     MOV r1, r8
		   0x010DB900:  0020A0E3     MOV r2, 0x0
		   0x010DB904:  0060A0E1     MOV r6, r0
		   0x010DB908:  0070A0E3     MOV r7, 0x0
		   0x010DB90C:  87F77EEB     BL $+0x1fbde24  // CALL → Delegate.Remove
		   0x010DB910:  000050E3     CMPS r0, r0, 0x0
		   0x010DB914:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DB944
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DB918:  00509AE5     LDR r5, [r10]
		   0x010DB91C:  0040A0E1     MOV r4, r0
		   0x010DB920:  0510A0E1     MOV r1, r5
		   0x010DB924:  5BFEF9EB     BL $-0x18068c
		   0x010DB928:  0070A0E1     MOV r7, r0
		   0x010DB92C:  000050E3     CMPS r0, r0, 0x0
		   0x010DB930:  0300001A     BNE $+0x14  // if (!=) goto 0x010DB944
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DB934:  0400A0E1     MOV r0, r4
		   0x010DB938:  0510A0E1     MOV r1, r5
		   0x010DB93C:  91FFF9EB     BL $-0x1801b4
		   0x010DB940:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DB944:  0900A0E1     MOV r0, sb
		   0x010DB948:  0710A0E1     MOV r1, r7
		   0x010DB94C:  0620A0E1     MOV r2, r6
		   0x010DB950:  C8EAFAEB     BL $-0x1454d8
		   0x010DB954:  060050E1     CMPS r0, r0, r6
		   0x010DB958:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DB95C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DB960:  A9031503     TSTSEQ r0, r5, 0xa4000002
		   0x010DB964:  04C3F902     RSCSEQ ip, sb, 0x10000000
		   0x010DB968:  ECC2F902     RSCSEQ ip, sb, 0xc000000e
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DB96C Offset: 0x10DB96C VA: 0x10DB96C
	public void add_CompleteSeasonEvent(Action<bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB96C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DB970:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DB974:  0090A0E1     MOV sb, r0
		   0x010DB978:  0180A0E1     MOV r8, r1
		   0x010DB97C:  04408FE0     ADD r4, pc, r4
		   0x010DB980:  0000D4E5     LDRB r0, [r4]
		   0x010DB984:  000050E3     CMPS r0, r0, 0x0
		   0x010DB988:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB9A0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB98C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DB990:  00009FE7     LDR r0, [pc, r0]
		   0x010DB994:  F1FDF9EB     BL $-0x180834
		   0x010DB998:  0100A0E3     MOV r0, 0x1
		   0x010DB99C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB9A0:  1C00B9E5     LDR r0, [sb, 0x1c]!
		   0x010DB9A4:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DB9A8:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DB9AC:  0810A0E1     MOV r1, r8
		   0x010DB9B0:  0020A0E3     MOV r2, 0x0
		   0x010DB9B4:  0060A0E1     MOV r6, r0
		   0x010DB9B8:  0070A0E3     MOV r7, 0x0
		   0x010DB9BC:  DDF67EEB     BL $+0x1fbdb7c  // CALL → Delegate.Combine
		   0x010DB9C0:  000050E3     CMPS r0, r0, 0x0
		   0x010DB9C4:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DB9F4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DB9C8:  00509AE5     LDR r5, [r10]
		   0x010DB9CC:  0040A0E1     MOV r4, r0
		   0x010DB9D0:  0510A0E1     MOV r1, r5
		   0x010DB9D4:  2FFEF9EB     BL $-0x18073c
		   0x010DB9D8:  0070A0E1     MOV r7, r0
		   0x010DB9DC:  000050E3     CMPS r0, r0, 0x0
		   0x010DB9E0:  0300001A     BNE $+0x14  // if (!=) goto 0x010DB9F4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DB9E4:  0400A0E1     MOV r0, r4
		   0x010DB9E8:  0510A0E1     MOV r1, r5
		   0x010DB9EC:  65FFF9EB     BL $-0x180264
		   0x010DB9F0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DB9F4:  0900A0E1     MOV r0, sb
		   0x010DB9F8:  0710A0E1     MOV r1, r7
		   0x010DB9FC:  0620A0E1     MOV r2, r6
		   0x010DBA00:  9CEAFAEB     BL $-0x145588
		   0x010DBA04:  060050E1     CMPS r0, r0, r6
		   0x010DBA08:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DBA0C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DBA10:  FA021503     TSTSEQ r0, r5, 0xa000000f
		   0x010DBA14:  08BEF902     RSCSEQ fp, sb, 0x80
		   0x010DBA18:  F0BDF902     RSCSEQ fp, sb, 0x3c00
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBA1C Offset: 0x10DBA1C VA: 0x10DBA1C
	public void remove_CompleteSeasonEvent(Action<bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBA1C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DBA20:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DBA24:  0090A0E1     MOV sb, r0
		   0x010DBA28:  0180A0E1     MOV r8, r1
		   0x010DBA2C:  04408FE0     ADD r4, pc, r4
		   0x010DBA30:  0000D4E5     LDRB r0, [r4]
		   0x010DBA34:  000050E3     CMPS r0, r0, 0x0
		   0x010DBA38:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBA50
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBA3C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DBA40:  00009FE7     LDR r0, [pc, r0]
		   0x010DBA44:  C5FDF9EB     BL $-0x1808e4
		   0x010DBA48:  0100A0E3     MOV r0, 0x1
		   0x010DBA4C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBA50:  1C00B9E5     LDR r0, [sb, 0x1c]!
		   0x010DBA54:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DBA58:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DBA5C:  0810A0E1     MOV r1, r8
		   0x010DBA60:  0020A0E3     MOV r2, 0x0
		   0x010DBA64:  0060A0E1     MOV r6, r0
		   0x010DBA68:  0070A0E3     MOV r7, 0x0
		   0x010DBA6C:  2FF77EEB     BL $+0x1fbdcc4  // CALL → Delegate.Remove
		   0x010DBA70:  000050E3     CMPS r0, r0, 0x0
		   0x010DBA74:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DBAA4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBA78:  00509AE5     LDR r5, [r10]
		   0x010DBA7C:  0040A0E1     MOV r4, r0
		   0x010DBA80:  0510A0E1     MOV r1, r5
		   0x010DBA84:  03FEF9EB     BL $-0x1807ec
		   0x010DBA88:  0070A0E1     MOV r7, r0
		   0x010DBA8C:  000050E3     CMPS r0, r0, 0x0
		   0x010DBA90:  0300001A     BNE $+0x14  // if (!=) goto 0x010DBAA4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DBA94:  0400A0E1     MOV r0, r4
		   0x010DBA98:  0510A0E1     MOV r1, r5
		   0x010DBA9C:  39FFF9EB     BL $-0x180314
		   0x010DBAA0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DBAA4:  0900A0E1     MOV r0, sb
		   0x010DBAA8:  0710A0E1     MOV r1, r7
		   0x010DBAAC:  0620A0E1     MOV r2, r6
		   0x010DBAB0:  70EAFAEB     BL $-0x145638
		   0x010DBAB4:  060050E1     CMPS r0, r0, r6
		   0x010DBAB8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DBABC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DBAC0:  4B021503     TSTSEQ r0, r5, 0xb0000004
		   0x010DBAC4:  58BDF902     RSCSEQ fp, sb, 0x1600
		   0x010DBAC8:  40BDF902     RSCSEQ fp, sb, 0x1000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBACC Offset: 0x10DBACC VA: 0x10DBACC
	public void add_OnInitialized(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBACC:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010DBAD0:  88609FE5     LDR r6, [pc, 0x88]
		   0x010DBAD4:  0050A0E1     MOV r5, r0
		   0x010DBAD8:  0140A0E1     MOV r4, r1
		   0x010DBADC:  06608FE0     ADD r6, pc, r6
		   0x010DBAE0:  0000D6E5     LDRB r0, [r6]
		   0x010DBAE4:  000050E3     CMPS r0, r0, 0x0
		   0x010DBAE8:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBB00
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBAEC:  70009FE5     LDR r0, [pc, 0x70]
		   0x010DBAF0:  00009FE7     LDR r0, [pc, r0]
		   0x010DBAF4:  99FDF9EB     BL $-0x180994
		   0x010DBAF8:  0100A0E3     MOV r0, 0x1
		   0x010DBAFC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBB00:  2000B5E5     LDR r0, [r5, 0x20]!
		   0x010DBB04:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x010DBB08:  08809FE7     LDR r8, [pc, r8]
		   0x010DBB0C:  0410A0E1     MOV r1, r4
		   0x010DBB10:  0020A0E3     MOV r2, 0x0
		   0x010DBB14:  0060A0E1     MOV r6, r0
		   0x010DBB18:  0070A0E3     MOV r7, 0x0
		   0x010DBB1C:  85F67EEB     BL $+0x1fbda1c  // CALL → Delegate.Combine
		   0x010DBB20:  000050E3     CMPS r0, r0, 0x0
		   0x010DBB24:  0600000A     BEQ $+0x20  // if (==) goto 0x010DBB44
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBB28:  001098E5     LDR r1, [r8]
		   0x010DBB2C:  002090E5     LDR r2, [r0]
		   0x010DBB30:  010052E1     CMPS r0, r2, r1
		   0x010DBB34:  0100000A     BEQ $+0xc  // if (==) goto 0x010DBB40
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010DBB38:  12FFF9EB     BL $-0x1803b0
		   0x010DBB3C:  000000EA     B $+0x8  // goto 0x010DBB44
		   // ──── Block 5 if (==) ────────────────────
		   0x010DBB40:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x010DBB44:  0500A0E1     MOV r0, r5
		   0x010DBB48:  0710A0E1     MOV r1, r7
		   0x010DBB4C:  0620A0E1     MOV r2, r6
		   0x010DBB50:  48EAFAEB     BL $-0x1456d8
		   0x010DBB54:  060050E1     CMPS r0, r0, r6
		   0x010DBB58:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x010DBB5C:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010DBB60:  9C011503     TSTSEQ r0, r5, 0x27
		   0x010DBB64:  D4ADF902     RSCSEQ r10, sb, 0x3500
		   0x010DBB68:  BCADF902     RSCSEQ r10, sb, 0x2f00
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBB6C Offset: 0x10DBB6C VA: 0x10DBB6C
	public void remove_OnInitialized(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBB6C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010DBB70:  88609FE5     LDR r6, [pc, 0x88]
		   0x010DBB74:  0050A0E1     MOV r5, r0
		   0x010DBB78:  0140A0E1     MOV r4, r1
		   0x010DBB7C:  06608FE0     ADD r6, pc, r6
		   0x010DBB80:  0000D6E5     LDRB r0, [r6]
		   0x010DBB84:  000050E3     CMPS r0, r0, 0x0
		   0x010DBB88:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBBA0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBB8C:  70009FE5     LDR r0, [pc, 0x70]
		   0x010DBB90:  00009FE7     LDR r0, [pc, r0]
		   0x010DBB94:  71FDF9EB     BL $-0x180a34
		   0x010DBB98:  0100A0E3     MOV r0, 0x1
		   0x010DBB9C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBBA0:  2000B5E5     LDR r0, [r5, 0x20]!
		   0x010DBBA4:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x010DBBA8:  08809FE7     LDR r8, [pc, r8]
		   0x010DBBAC:  0410A0E1     MOV r1, r4
		   0x010DBBB0:  0020A0E3     MOV r2, 0x0
		   0x010DBBB4:  0060A0E1     MOV r6, r0
		   0x010DBBB8:  0070A0E3     MOV r7, 0x0
		   0x010DBBBC:  DBF67EEB     BL $+0x1fbdb74  // CALL → Delegate.Remove
		   0x010DBBC0:  000050E3     CMPS r0, r0, 0x0
		   0x010DBBC4:  0600000A     BEQ $+0x20  // if (==) goto 0x010DBBE4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBBC8:  001098E5     LDR r1, [r8]
		   0x010DBBCC:  002090E5     LDR r2, [r0]
		   0x010DBBD0:  010052E1     CMPS r0, r2, r1
		   0x010DBBD4:  0100000A     BEQ $+0xc  // if (==) goto 0x010DBBE0
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010DBBD8:  EAFEF9EB     BL $-0x180450
		   0x010DBBDC:  000000EA     B $+0x8  // goto 0x010DBBE4
		   // ──── Block 5 if (==) ────────────────────
		   0x010DBBE0:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x010DBBE4:  0500A0E1     MOV r0, r5
		   0x010DBBE8:  0710A0E1     MOV r1, r7
		   0x010DBBEC:  0620A0E1     MOV r2, r6
		   0x010DBBF0:  20EAFAEB     BL $-0x145778
		   0x010DBBF4:  060050E1     CMPS r0, r0, r6
		   0x010DBBF8:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x010DBBFC:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010DBC00:  FD001503     TSTSEQ r0, r5, 0xfd
		   0x010DBC04:  34ADF902     RSCSEQ r10, sb, 0xd00
		   0x010DBC08:  1CADF902     RSCSEQ r10, sb, 0x700
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBC0C Offset: 0x10DBC0C VA: 0x10DBC0C
	public void add_OnFieldSpeedupBoosterStarted(Action<List<IBoosterSpeedup>, object[], Vector2Int, float> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBC0C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DBC10:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DBC14:  0090A0E1     MOV sb, r0
		   0x010DBC18:  0180A0E1     MOV r8, r1
		   0x010DBC1C:  04408FE0     ADD r4, pc, r4
		   0x010DBC20:  0000D4E5     LDRB r0, [r4]
		   0x010DBC24:  000050E3     CMPS r0, r0, 0x0
		   0x010DBC28:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBC40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBC2C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DBC30:  00009FE7     LDR r0, [pc, r0]
		   0x010DBC34:  49FDF9EB     BL $-0x180ad4
		   0x010DBC38:  0100A0E3     MOV r0, 0x1
		   0x010DBC3C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBC40:  2400B9E5     LDR r0, [sb, 0x24]!
		   0x010DBC44:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DBC48:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DBC4C:  0810A0E1     MOV r1, r8
		   0x010DBC50:  0020A0E3     MOV r2, 0x0
		   0x010DBC54:  0060A0E1     MOV r6, r0
		   0x010DBC58:  0070A0E3     MOV r7, 0x0
		   0x010DBC5C:  35F67EEB     BL $+0x1fbd8dc  // CALL → Delegate.Combine
		   0x010DBC60:  000050E3     CMPS r0, r0, 0x0
		   0x010DBC64:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DBC94
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBC68:  00509AE5     LDR r5, [r10]
		   0x010DBC6C:  0040A0E1     MOV r4, r0
		   0x010DBC70:  0510A0E1     MOV r1, r5
		   0x010DBC74:  87FDF9EB     BL $-0x1809dc
		   0x010DBC78:  0070A0E1     MOV r7, r0
		   0x010DBC7C:  000050E3     CMPS r0, r0, 0x0
		   0x010DBC80:  0300001A     BNE $+0x14  // if (!=) goto 0x010DBC94
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DBC84:  0400A0E1     MOV r0, r4
		   0x010DBC88:  0510A0E1     MOV r1, r5
		   0x010DBC8C:  BDFEF9EB     BL $-0x180504
		   0x010DBC90:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DBC94:  0900A0E1     MOV r0, sb
		   0x010DBC98:  0710A0E1     MOV r1, r7
		   0x010DBC9C:  0620A0E1     MOV r2, r6
		   0x010DBCA0:  F4E9FAEB     BL $-0x145828
		   0x010DBCA4:  060050E1     CMPS r0, r0, r6
		   0x010DBCA8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DBCAC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DBCB0:  5E001503     TSTSEQ r0, r5, 0x5e
		   0x010DBCB4:  00D4F902     RSCSEQ sp, sb, 0x0
		   0x010DBCB8:  E8D3F902     RSCSEQ sp, sb, 0xa0000003
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBCBC Offset: 0x10DBCBC VA: 0x10DBCBC
	public void remove_OnFieldSpeedupBoosterStarted(Action<List<IBoosterSpeedup>, object[], Vector2Int, float> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBCBC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DBCC0:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DBCC4:  0090A0E1     MOV sb, r0
		   0x010DBCC8:  0180A0E1     MOV r8, r1
		   0x010DBCCC:  04408FE0     ADD r4, pc, r4
		   0x010DBCD0:  0000D4E5     LDRB r0, [r4]
		   0x010DBCD4:  000050E3     CMPS r0, r0, 0x0
		   0x010DBCD8:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBCF0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBCDC:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DBCE0:  00009FE7     LDR r0, [pc, r0]
		   0x010DBCE4:  1DFDF9EB     BL $-0x180b84
		   0x010DBCE8:  0100A0E3     MOV r0, 0x1
		   0x010DBCEC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBCF0:  2400B9E5     LDR r0, [sb, 0x24]!
		   0x010DBCF4:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DBCF8:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DBCFC:  0810A0E1     MOV r1, r8
		   0x010DBD00:  0020A0E3     MOV r2, 0x0
		   0x010DBD04:  0060A0E1     MOV r6, r0
		   0x010DBD08:  0070A0E3     MOV r7, 0x0
		   0x010DBD0C:  87F67EEB     BL $+0x1fbda24  // CALL → Delegate.Remove
		   0x010DBD10:  000050E3     CMPS r0, r0, 0x0
		   0x010DBD14:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DBD44
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBD18:  00509AE5     LDR r5, [r10]
		   0x010DBD1C:  0040A0E1     MOV r4, r0
		   0x010DBD20:  0510A0E1     MOV r1, r5
		   0x010DBD24:  5BFDF9EB     BL $-0x180a8c
		   0x010DBD28:  0070A0E1     MOV r7, r0
		   0x010DBD2C:  000050E3     CMPS r0, r0, 0x0
		   0x010DBD30:  0300001A     BNE $+0x14  // if (!=) goto 0x010DBD44
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DBD34:  0400A0E1     MOV r0, r4
		   0x010DBD38:  0510A0E1     MOV r1, r5
		   0x010DBD3C:  91FEF9EB     BL $-0x1805b4
		   0x010DBD40:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DBD44:  0900A0E1     MOV r0, sb
		   0x010DBD48:  0710A0E1     MOV r1, r7
		   0x010DBD4C:  0620A0E1     MOV r2, r6
		   0x010DBD50:  C8E9FAEB     BL $-0x1458d8
		   0x010DBD54:  060050E1     CMPS r0, r0, r6
		   0x010DBD58:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DBD5C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DBD60:  AFFF1403     TSTSEQ pc, r4, 0x2bc
		   0x010DBD64:  50D3F902     RSCSEQ sp, sb, 0x40000001
		   0x010DBD68:  38D3F902     RSCSEQ sp, sb, 0xe0000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBD6C Offset: 0x10DBD6C VA: 0x10DBD6C
	public void add_merge(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBD6C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010DBD70:  88609FE5     LDR r6, [pc, 0x88]
		   0x010DBD74:  0050A0E1     MOV r5, r0
		   0x010DBD78:  0140A0E1     MOV r4, r1
		   0x010DBD7C:  06608FE0     ADD r6, pc, r6
		   0x010DBD80:  0000D6E5     LDRB r0, [r6]
		   0x010DBD84:  000050E3     CMPS r0, r0, 0x0
		   0x010DBD88:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBDA0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBD8C:  70009FE5     LDR r0, [pc, 0x70]
		   0x010DBD90:  00009FE7     LDR r0, [pc, r0]
		   0x010DBD94:  F1FCF9EB     BL $-0x180c34
		   0x010DBD98:  0100A0E3     MOV r0, 0x1
		   0x010DBD9C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBDA0:  2800B5E5     LDR r0, [r5, 0x28]!
		   0x010DBDA4:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x010DBDA8:  08809FE7     LDR r8, [pc, r8]
		   0x010DBDAC:  0410A0E1     MOV r1, r4
		   0x010DBDB0:  0020A0E3     MOV r2, 0x0
		   0x010DBDB4:  0060A0E1     MOV r6, r0
		   0x010DBDB8:  0070A0E3     MOV r7, 0x0
		   0x010DBDBC:  DDF57EEB     BL $+0x1fbd77c  // CALL → Delegate.Combine
		   0x010DBDC0:  000050E3     CMPS r0, r0, 0x0
		   0x010DBDC4:  0600000A     BEQ $+0x20  // if (==) goto 0x010DBDE4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBDC8:  001098E5     LDR r1, [r8]
		   0x010DBDCC:  002090E5     LDR r2, [r0]
		   0x010DBDD0:  010052E1     CMPS r0, r2, r1
		   0x010DBDD4:  0100000A     BEQ $+0xc  // if (==) goto 0x010DBDE0
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010DBDD8:  6AFEF9EB     BL $-0x180650
		   0x010DBDDC:  000000EA     B $+0x8  // goto 0x010DBDE4
		   // ──── Block 5 if (==) ────────────────────
		   0x010DBDE0:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x010DBDE4:  0500A0E1     MOV r0, r5
		   0x010DBDE8:  0710A0E1     MOV r1, r7
		   0x010DBDEC:  0620A0E1     MOV r2, r6
		   0x010DBDF0:  A0E9FAEB     BL $-0x145978
		   0x010DBDF4:  060050E1     CMPS r0, r0, r6
		   0x010DBDF8:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x010DBDFC:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010DBE00:  00FF1403     TSTSEQ pc, r4, 0x0
		   0x010DBE04:  34ABF902     RSCSEQ r10, sb, 0xd000
		   0x010DBE08:  1CABF902     RSCSEQ r10, sb, 0x7000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBE0C Offset: 0x10DBE0C VA: 0x10DBE0C
	public void remove_merge(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBE0C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010DBE10:  88609FE5     LDR r6, [pc, 0x88]
		   0x010DBE14:  0050A0E1     MOV r5, r0
		   0x010DBE18:  0140A0E1     MOV r4, r1
		   0x010DBE1C:  06608FE0     ADD r6, pc, r6
		   0x010DBE20:  0000D6E5     LDRB r0, [r6]
		   0x010DBE24:  000050E3     CMPS r0, r0, 0x0
		   0x010DBE28:  0400001A     BNE $+0x18  // if (!=) goto 0x010DBE40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBE2C:  70009FE5     LDR r0, [pc, 0x70]
		   0x010DBE30:  00009FE7     LDR r0, [pc, r0]
		   0x010DBE34:  C9FCF9EB     BL $-0x180cd4
		   0x010DBE38:  0100A0E3     MOV r0, 0x1
		   0x010DBE3C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBE40:  2800B5E5     LDR r0, [r5, 0x28]!
		   0x010DBE44:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x010DBE48:  08809FE7     LDR r8, [pc, r8]
		   0x010DBE4C:  0410A0E1     MOV r1, r4
		   0x010DBE50:  0020A0E3     MOV r2, 0x0
		   0x010DBE54:  0060A0E1     MOV r6, r0
		   0x010DBE58:  0070A0E3     MOV r7, 0x0
		   0x010DBE5C:  33F67EEB     BL $+0x1fbd8d4  // CALL → Delegate.Remove
		   0x010DBE60:  000050E3     CMPS r0, r0, 0x0
		   0x010DBE64:  0600000A     BEQ $+0x20  // if (==) goto 0x010DBE84
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DBE68:  001098E5     LDR r1, [r8]
		   0x010DBE6C:  002090E5     LDR r2, [r0]
		   0x010DBE70:  010052E1     CMPS r0, r2, r1
		   0x010DBE74:  0100000A     BEQ $+0xc  // if (==) goto 0x010DBE80
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010DBE78:  42FEF9EB     BL $-0x1806f0
		   0x010DBE7C:  000000EA     B $+0x8  // goto 0x010DBE84
		   // ──── Block 5 if (==) ────────────────────
		   0x010DBE80:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x010DBE84:  0500A0E1     MOV r0, r5
		   0x010DBE88:  0710A0E1     MOV r1, r7
		   0x010DBE8C:  0620A0E1     MOV r2, r6
		   0x010DBE90:  78E9FAEB     BL $-0x145a18
		   0x010DBE94:  060050E1     CMPS r0, r0, r6
		   0x010DBE98:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x010DBE9C:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010DBEA0:  61FE1403     TSTSEQ pc, r4, 0x610
		   0x010DBEA4:  94AAF902     RSCSEQ r10, sb, 0x94000
		   0x010DBEA8:  7CAAF902     RSCSEQ r10, sb, 0x7c000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBEAC Offset: 0x10DBEAC VA: 0x10DBEAC
	public Season get_selectedSeason() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DBEAC:  6C0090E5     LDR r0, [r0, 0x6c]
		   0x010DBEB0:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DBEB4 Offset: 0x10DBEB4 VA: 0x10DBEB4
	private void set_selectedSeason(Season value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DBEB4:  6C1080E5     STR r1, [r0, 0x6c]
		   0x010DBEB8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D6D00 Offset: 0x10D6D00 VA: 0x10D6D00
	public bool get_isEmpty() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D6D00:  10402DE9     PUSH {r4, lr}
		   0x010D6D04:  3C4090E5     LDR r4, [r0, 0x3c]
		   0x010D6D08:  000054E3     CMPS r0, r4, 0x0
		   0x010D6D0C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D6D14
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D6D10:  AE11FAEB     BL $-0x17b940
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D6D14:  0400A0E1     MOV r0, r4
		   0x010D6D18:  0010A0E3     MOV r1, 0x0
		   0x010D6D1C:  1040BDE8     POP {r4, lr}
		   0x010D6D20:  808801EA     B $+0x62208  // TAIL CALL → GameStateSave.get_isEmpty
		*/
	}

	// RVA: 0x10DBEBC Offset: 0x10DBEBC VA: 0x10DBEBC
	public bool HasNextLevel() {
		/* Disassembly (ARM32, 75 instructions, 0x12C bytes):
		   // CFG: 19 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBEBC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010DBEC0:  20419FE5     LDR r4, [pc, 0x120]
		   0x010DBEC4:  04408FE0     ADD r4, pc, r4
		   0x010DBEC8:  0000D4E5     LDRB r0, [r4]
		   0x010DBECC:  000050E3     CMPS r0, r0, 0x0
		   0x010DBED0:  0700001A     BNE $+0x24  // if (!=) goto 0x010DBEF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DBED4:  10019FE5     LDR r0, [pc, 0x110]
		   0x010DBED8:  00009FE7     LDR r0, [pc, r0]
		   0x010DBEDC:  9FFCF9EB     BL $-0x180d7c
		   0x010DBEE0:  08019FE5     LDR r0, [pc, 0x108]
		   0x010DBEE4:  00009FE7     LDR r0, [pc, r0]
		   0x010DBEE8:  9CFCF9EB     BL $-0x180d88
		   0x010DBEEC:  0100A0E3     MOV r0, 0x1
		   0x010DBEF0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DBEF4:  F8509FE5     LDR r5, [pc, 0xf8]
		   0x010DBEF8:  05509FE7     LDR r5, [pc, r5]
		   0x010DBEFC:  000095E5     LDR r0, [r5]
		   0x010DBF00:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DBF04:  004090E5     LDR r4, [r0]
		   0x010DBF08:  000054E3     CMPS r0, r4, 0x0
		   0x010DBF0C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBF14
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DBF10:  2EFDF9EB     BL $-0x180b40
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DBF14:  0400A0E1     MOV r0, r4
		   0x010DBF18:  0010A0E3     MOV r1, 0x0
		   0x010DBF1C:  CA0203EB     BL $+0xc0b30  // CALL → Seasons.get_nextEpisode
		   0x010DBF20:  000050E3     CMPS r0, r0, 0x0
		   0x010DBF24:  0700000A     BEQ $+0x24  // if (==) goto 0x010DBF48
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010DBF28:  184090E5     LDR r4, [r0, 0x18]
		   0x010DBF2C:  000054E3     CMPS r0, r4, 0x0
		   0x010DBF30:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBF38
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010DBF34:  25FDF9EB     BL $-0x180b64
		   // ──── Block 7 if (!=) ────────────────────
		   0x010DBF38:  0C1094E5     LDR r1, [r4, 0xc]
		   0x010DBF3C:  0100A0E3     MOV r0, 0x1
		   0x010DBF40:  000051E3     CMPS r0, r1, 0x0
		   0x010DBF44:  3088BDC8     POPGT {r4, r5, fp, pc}
		   // ──── Block 8 if (==) ────────────────────
		   0x010DBF48:  000095E5     LDR r0, [r5]
		   0x010DBF4C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DBF50:  004090E5     LDR r4, [r0]
		   0x010DBF54:  000054E3     CMPS r0, r4, 0x0
		   0x010DBF58:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBF60
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010DBF5C:  1BFDF9EB     BL $-0x180b8c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010DBF60:  0400A0E1     MOV r0, r4
		   0x010DBF64:  0010A0E3     MOV r1, 0x0
		   0x010DBF68:  A8FC02EB     BL $+0xbf2a8  // CALL → Seasons.get_CurrentEpisode
		   0x010DBF6C:  0040A0E1     MOV r4, r0
		   0x010DBF70:  000050E3     CMPS r0, r0, 0x0
		   0x010DBF74:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBF7C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010DBF78:  14FDF9EB     BL $-0x180ba8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010DBF7C:  0400A0E1     MOV r0, r4
		   0x010DBF80:  0010A0E3     MOV r1, 0x0
		   0x010DBF84:  7FE610EB     BL $+0x439a04  // CALL → Episodes.get_CurrentLevelIdx
		   0x010DBF88:  0040A0E1     MOV r4, r0
		   0x010DBF8C:  000095E5     LDR r0, [r5]
		   0x010DBF90:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DBF94:  005090E5     LDR r5, [r0]
		   0x010DBF98:  000055E3     CMPS r0, r5, 0x0
		   0x010DBF9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBFA4
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010DBFA0:  0AFDF9EB     BL $-0x180bd0
		   // ──── Block 14 if (!=) ────────────────────
		   0x010DBFA4:  0500A0E1     MOV r0, r5
		   0x010DBFA8:  0010A0E3     MOV r1, 0x0
		   0x010DBFAC:  97FC02EB     BL $+0xbf264  // CALL → Seasons.get_CurrentEpisode
		   0x010DBFB0:  0050A0E1     MOV r5, r0
		   0x010DBFB4:  000050E3     CMPS r0, r0, 0x0
		   0x010DBFB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBFC0
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010DBFBC:  03FDF9EB     BL $-0x180bec
		   // ──── Block 16 if (!=) ────────────────────
		   0x010DBFC0:  185095E5     LDR r5, [r5, 0x18]
		   0x010DBFC4:  000055E3     CMPS r0, r5, 0x0
		   0x010DBFC8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DBFD0
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010DBFCC:  FFFCF9EB     BL $-0x180bfc
		   // ──── Block 18 if (!=) ────────────────────
		   0x010DBFD0:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010DBFD4:  011040E2     SUB r1, r0, 0x1
		   0x010DBFD8:  0000A0E3     MOV r0, 0x0
		   0x010DBFDC:  010054E1     CMPS r0, r4, r1
		   0x010DBFE0:  010000B3     MOVLT r0, 0x1
		   0x010DBFE4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10DBFF8 Offset: 0x10DBFF8 VA: 0x10DBFF8
	public void SetupSeasonsConfig(SeasonsConfig config, ResourcesPack resourcesPack) {
		/* Disassembly (ARM32, 543 instructions, 0x87C bytes):
		   // CFG: 95 blocks, 96 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DBFF8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DBFFC:  14D04DE2     SUB sp, sp, 0x14
		   0x010DC000:  AC479FE5     LDR r4, [pc, 0x7ac]
		   0x010DC004:  00A0A0E1     MOV r10, r0
		   0x010DC008:  0280A0E1     MOV r8, r2
		   0x010DC00C:  0190A0E1     MOV sb, r1
		   0x010DC010:  04408FE0     ADD r4, pc, r4
		   0x010DC014:  0000D4E5     LDRB r0, [r4]
		   0x010DC018:  000050E3     CMPS r0, r0, 0x0
		   0x010DC01C:  4300001A     BNE $+0x114  // if (!=) goto 0x010DC130
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DC020:  90079FE5     LDR r0, [pc, 0x790]
		   0x010DC024:  00009FE7     LDR r0, [pc, r0]
		   0x010DC028:  4CFCF9EB     BL $-0x180ec8
		   0x010DC02C:  88079FE5     LDR r0, [pc, 0x788]
		   0x010DC030:  00009FE7     LDR r0, [pc, r0]
		   0x010DC034:  49FCF9EB     BL $-0x180ed4
		   0x010DC038:  80079FE5     LDR r0, [pc, 0x780]
		   0x010DC03C:  00009FE7     LDR r0, [pc, r0]
		   0x010DC040:  46FCF9EB     BL $-0x180ee0
		   0x010DC044:  78079FE5     LDR r0, [pc, 0x778]
		   0x010DC048:  00009FE7     LDR r0, [pc, r0]
		   0x010DC04C:  43FCF9EB     BL $-0x180eec
		   0x010DC050:  70079FE5     LDR r0, [pc, 0x770]
		   0x010DC054:  00009FE7     LDR r0, [pc, r0]
		   0x010DC058:  40FCF9EB     BL $-0x180ef8
		   0x010DC05C:  68079FE5     LDR r0, [pc, 0x768]
		   0x010DC060:  00009FE7     LDR r0, [pc, r0]
		   0x010DC064:  3DFCF9EB     BL $-0x180f04
		   0x010DC068:  60079FE5     LDR r0, [pc, 0x760]
		   0x010DC06C:  00009FE7     LDR r0, [pc, r0]
		   0x010DC070:  3AFCF9EB     BL $-0x180f10
		   0x010DC074:  58079FE5     LDR r0, [pc, 0x758]
		   0x010DC078:  00009FE7     LDR r0, [pc, r0]
		   0x010DC07C:  37FCF9EB     BL $-0x180f1c
		   0x010DC080:  50079FE5     LDR r0, [pc, 0x750]
		   0x010DC084:  00009FE7     LDR r0, [pc, r0]
		   0x010DC088:  34FCF9EB     BL $-0x180f28
		   0x010DC08C:  48079FE5     LDR r0, [pc, 0x748]
		   0x010DC090:  00009FE7     LDR r0, [pc, r0]
		   0x010DC094:  31FCF9EB     BL $-0x180f34
		   0x010DC098:  40079FE5     LDR r0, [pc, 0x740]
		   0x010DC09C:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0A0:  2EFCF9EB     BL $-0x180f40
		   0x010DC0A4:  38079FE5     LDR r0, [pc, 0x738]
		   0x010DC0A8:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0AC:  2BFCF9EB     BL $-0x180f4c
		   0x010DC0B0:  30079FE5     LDR r0, [pc, 0x730]
		   0x010DC0B4:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0B8:  28FCF9EB     BL $-0x180f58
		   0x010DC0BC:  28079FE5     LDR r0, [pc, 0x728]
		   0x010DC0C0:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0C4:  25FCF9EB     BL $-0x180f64
		   0x010DC0C8:  20079FE5     LDR r0, [pc, 0x720]
		   0x010DC0CC:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0D0:  22FCF9EB     BL $-0x180f70
		   0x010DC0D4:  18079FE5     LDR r0, [pc, 0x718]
		   0x010DC0D8:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0DC:  1FFCF9EB     BL $-0x180f7c
		   0x010DC0E0:  10079FE5     LDR r0, [pc, 0x710]
		   0x010DC0E4:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0E8:  1CFCF9EB     BL $-0x180f88
		   0x010DC0EC:  08079FE5     LDR r0, [pc, 0x708]
		   0x010DC0F0:  00009FE7     LDR r0, [pc, r0]
		   0x010DC0F4:  19FCF9EB     BL $-0x180f94
		   0x010DC0F8:  00079FE5     LDR r0, [pc, 0x700]
		   0x010DC0FC:  00009FE7     LDR r0, [pc, r0]
		   0x010DC100:  16FCF9EB     BL $-0x180fa0
		   0x010DC104:  F8069FE5     LDR r0, [pc, 0x6f8]
		   0x010DC108:  00009FE7     LDR r0, [pc, r0]
		   0x010DC10C:  13FCF9EB     BL $-0x180fac
		   0x010DC110:  F0069FE5     LDR r0, [pc, 0x6f0]
		   0x010DC114:  00009FE7     LDR r0, [pc, r0]
		   0x010DC118:  10FCF9EB     BL $-0x180fb8
		   0x010DC11C:  E8069FE5     LDR r0, [pc, 0x6e8]
		   0x010DC120:  00009FE7     LDR r0, [pc, r0]
		   0x010DC124:  0DFCF9EB     BL $-0x180fc4
		   0x010DC128:  0100A0E3     MOV r0, 0x1
		   0x010DC12C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DC130:  D8469FE5     LDR r4, [pc, 0x6d8]
		   0x010DC134:  0070A0E3     MOV r7, 0x0
		   0x010DC138:  04409FE7     LDR r4, [pc, r4]
		   0x010DC13C:  10708DE5     STR r7, [sp, 0x10]
		   0x010DC140:  0C708DE5     STR r7, [sp, 0xc]
		   0x010DC144:  000094E5     LDR r0, [r4]
		   0x010DC148:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010DC14C:  042091E5     LDR r2, [r1, 0x4]
		   0x010DC150:  000052E3     CMPS r0, r2, 0x0
		   0x010DC154:  2200001A     BNE $+0x90  // if (!=) goto 0x010DC1E4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DC158:  B4569FE5     LDR r5, [pc, 0x6b4]
		   0x010DC15C:  05509FE7     LDR r5, [pc, r5]
		   0x010DC160:  000095E5     LDR r0, [r5]
		   0x010DC164:  96FCF9EB     BL $-0x180da0
		   0x010DC168:  00B0A0E1     MOV fp, r0
		   0x010DC16C:  A4069FE5     LDR r0, [pc, 0x6a4]
		   0x010DC170:  0A10A0E1     MOV r1, r10
		   0x010DC174:  0030A0E3     MOV r3, 0x0
		   0x010DC178:  00009FE7     LDR r0, [pc, r0]
		   0x010DC17C:  002090E5     LDR r2, [r0]
		   0x010DC180:  0B00A0E1     MOV r0, fp
		   0x010DC184:  772802EB     BL $+0x8a1e4  // CALL → GetItemDataSaves..ctor
		   0x010DC188:  000095E5     LDR r0, [r5]
		   0x010DC18C:  8CFCF9EB     BL $-0x180dc8
		   0x010DC190:  0060A0E1     MOV r6, r0
		   0x010DC194:  80069FE5     LDR r0, [pc, 0x680]
		   0x010DC198:  0A10A0E1     MOV r1, r10
		   0x010DC19C:  0030A0E3     MOV r3, 0x0
		   0x010DC1A0:  00009FE7     LDR r0, [pc, r0]
		   0x010DC1A4:  002090E5     LDR r2, [r0]
		   0x010DC1A8:  0600A0E1     MOV r0, r6
		   0x010DC1AC:  6D2802EB     BL $+0x8a1bc  // CALL → GetItemDataSaves..ctor
		   0x010DC1B0:  68069FE5     LDR r0, [pc, 0x668]
		   0x010DC1B4:  00009FE7     LDR r0, [pc, r0]
		   0x010DC1B8:  000090E5     LDR r0, [r0]
		   0x010DC1BC:  80FCF9EB     BL $-0x180df8
		   0x010DC1C0:  0B10A0E1     MOV r1, fp
		   0x010DC1C4:  0620A0E1     MOV r2, r6
		   0x010DC1C8:  0830A0E1     MOV r3, r8
		   0x010DC1CC:  0050A0E1     MOV r5, r0
		   0x010DC1D0:  00708DE5     STR r7, [sp]
		   0x010DC1D4:  9A2802EB     BL $+0x8a270  // CALL → ConditionalNotificationChest..ctor
		   0x010DC1D8:  000094E5     LDR r0, [r4]
		   0x010DC1DC:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010DC1E0:  045081E5     STR r5, [r1, 0x4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DC1E4:  082091E5     LDR r2, [r1, 0x8]
		   0x010DC1E8:  000052E3     CMPS r0, r2, 0x0
		   0x010DC1EC:  2300001A     BNE $+0x94  // if (!=) goto 0x010DC280
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DC1F0:  2C569FE5     LDR r5, [pc, 0x62c]
		   0x010DC1F4:  05509FE7     LDR r5, [pc, r5]
		   0x010DC1F8:  000095E5     LDR r0, [r5]
		   0x010DC1FC:  70FCF9EB     BL $-0x180e38
		   0x010DC200:  0070A0E1     MOV r7, r0
		   0x010DC204:  1C069FE5     LDR r0, [pc, 0x61c]
		   0x010DC208:  0A10A0E1     MOV r1, r10
		   0x010DC20C:  0030A0E3     MOV r3, 0x0
		   0x010DC210:  00B0A0E3     MOV fp, 0x0
		   0x010DC214:  00009FE7     LDR r0, [pc, r0]
		   0x010DC218:  002090E5     LDR r2, [r0]
		   0x010DC21C:  0700A0E1     MOV r0, r7
		   0x010DC220:  502802EB     BL $+0x8a148  // CALL → GetItemDataSaves..ctor
		   0x010DC224:  000095E5     LDR r0, [r5]
		   0x010DC228:  65FCF9EB     BL $-0x180e64
		   0x010DC22C:  0050A0E1     MOV r5, r0
		   0x010DC230:  F4059FE5     LDR r0, [pc, 0x5f4]
		   0x010DC234:  0A10A0E1     MOV r1, r10
		   0x010DC238:  0030A0E3     MOV r3, 0x0
		   0x010DC23C:  00009FE7     LDR r0, [pc, r0]
		   0x010DC240:  002090E5     LDR r2, [r0]
		   0x010DC244:  0500A0E1     MOV r0, r5
		   0x010DC248:  462802EB     BL $+0x8a120  // CALL → GetItemDataSaves..ctor
		   0x010DC24C:  DC059FE5     LDR r0, [pc, 0x5dc]
		   0x010DC250:  00009FE7     LDR r0, [pc, r0]
		   0x010DC254:  000090E5     LDR r0, [r0]
		   0x010DC258:  59FCF9EB     BL $-0x180e94
		   0x010DC25C:  0710A0E1     MOV r1, r7
		   0x010DC260:  0520A0E1     MOV r2, r5
		   0x010DC264:  0830A0E1     MOV r3, r8
		   0x010DC268:  0060A0E1     MOV r6, r0
		   0x010DC26C:  00B08DE5     STR fp, [sp]
		   0x010DC270:  372A02EB     BL $+0x8a8e4  // CALL → ConditionalNotificationChestMissed..ctor
		   0x010DC274:  000094E5     LDR r0, [r4]
		   0x010DC278:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010DC27C:  086081E5     STR r6, [r1, 0x8]
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DC280:  0C1091E5     LDR r1, [r1, 0xc]
		   0x010DC284:  000051E3     CMPS r0, r1, 0x0
		   0x010DC288:  1400001A     BNE $+0x58  // if (!=) goto 0x010DC2E0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010DC28C:  54609AE5     LDR r6, [r10, 0x54]
		   0x010DC290:  000056E3     CMPS r0, r6, 0x0
		   0x010DC294:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC29C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010DC298:  4CFCF9EB     BL $-0x180ec8
		   // ──── Block 9 if (!=) ────────────────────
		   0x010DC29C:  90059FE5     LDR r0, [pc, 0x590]
		   0x010DC2A0:  00009FE7     LDR r0, [pc, r0]
		   0x010DC2A4:  001090E5     LDR r1, [r0]
		   0x010DC2A8:  0600A0E1     MOV r0, r6
		   0x010DC2AC:  C95A6CEB     BL $+0x1b16b2c  // CALL → List<object>.AsReadOnly
		   0x010DC2B0:  0050A0E1     MOV r5, r0
		   0x010DC2B4:  7C059FE5     LDR r0, [pc, 0x57c]
		   0x010DC2B8:  00009FE7     LDR r0, [pc, r0]
		   0x010DC2BC:  000090E5     LDR r0, [r0]
		   0x010DC2C0:  3FFCF9EB     BL $-0x180efc
		   0x010DC2C4:  0510A0E1     MOV r1, r5
		   0x010DC2C8:  0020A0E3     MOV r2, 0x0
		   0x010DC2CC:  0060A0E1     MOV r6, r0
		   0x010DC2D0:  002C02EB     BL $+0x8b008  // CALL → ConditionalNotificationField..ctor
		   0x010DC2D4:  000094E5     LDR r0, [r4]
		   0x010DC2D8:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010DC2DC:  0C6081E5     STR r6, [r1, 0xc]
		   // ──── Block 10 if (!=) ────────────────────
		   0x010DC2E0:  000059E3     CMPS r0, sb, 0x0
		   0x010DC2E4:  0100001A     BNE $+0xc  // if (!=) goto 0x010DC2F0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010DC2E8:  38FCF9EB     BL $-0x180f18
		   0x010DC2EC:  000094E5     LDR r0, [r4]
		   // ──── Block 12 if (!=) ────────────────────
		   0x010DC2F0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DC2F4:  101099E5     LDR r1, [sb, 0x10]
		   0x010DC2F8:  001080E5     STR r1, [r0]
		   0x010DC2FC:  000094E5     LDR r0, [r4]
		   0x010DC300:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DC304:  005090E5     LDR r5, [r0]
		   0x010DC308:  000055E3     CMPS r0, r5, 0x0
		   0x010DC30C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC314
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010DC310:  2EFCF9EB     BL $-0x180f40
		   // ──── Block 14 if (!=) ────────────────────
		   0x010DC314:  0500A0E1     MOV r0, r5
		   0x010DC318:  0010A0E3     MOV r1, 0x0
		   0x010DC31C:  890003EB     BL $+0xc022c  // CALL → Seasons.get_CurrentSeason
		   0x010DC320:  001094E5     LDR r1, [r4]
		   0x010DC324:  6C008AE5     STR r0, [r10, 0x6c]
		   0x010DC328:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x010DC32C:  001091E5     LDR r1, [r1]
		   0x010DC330:  0100A0E1     MOV r0, r1
		   0x010DC334:  0010A0E3     MOV r1, 0x0
		   0x010DC338:  D3E202EB     BL $+0xb8b54  // CALL → SeasonsProgressionGuard.IsProfileAheadOfConfig
		   0x010DC33C:  000050E3     CMPS r0, r0, 0x0
		   0x010DC340:  1900000A     BEQ $+0x6c  // if (==) goto 0x010DC3AC
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x010DC344:  000094E5     LDR r0, [r4]
		   0x010DC348:  0010A0E3     MOV r1, 0x0
		   0x010DC34C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DC350:  000090E5     LDR r0, [r0]
		   0x010DC354:  45E302EB     BL $+0xb8d1c  // CALL → SeasonsProgressionGuard.BuildMismatchMessage
		   0x010DC358:  0050A0E1     MOV r5, r0
		   0x010DC35C:  D8049FE5     LDR r0, [pc, 0x4d8]
		   0x010DC360:  00009FE7     LDR r0, [pc, r0]
		   0x010DC364:  000090E5     LDR r0, [r0]
		   0x010DC368:  15FCF9EB     BL $-0x180fa4
		   0x010DC36C:  0510A0E1     MOV r1, r5
		   0x010DC370:  0020A0E3     MOV r2, 0x0
		   0x010DC374:  0040A0E1     MOV r4, r0
		   0x010DC378:  C10711EB     BL $+0x441f0c  // CALL → InfoException..ctor
		   0x010DC37C:  BC049FE5     LDR r0, [pc, 0x4bc]
		   0x010DC380:  00009FE7     LDR r0, [pc, r0]
		   0x010DC384:  000090E5     LDR r0, [r0]
		   0x010DC388:  741090E5     LDR r1, [r0, 0x74]
		   0x010DC38C:  000051E3     CMPS r0, r1, 0x0
		   0x010DC390:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC398
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010DC394:  BEFBF9EB     BL $-0x181100
		   // ──── Block 17 if (!=) ────────────────────
		   0x010DC398:  0400A0E1     MOV r0, r4
		   0x010DC39C:  0010A0E3     MOV r1, 0x0
		   0x010DC3A0:  14D08DE2     ADD sp, sp, 0x14
		   0x010DC3A4:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DC3A8:  776F3CEA     B $+0xf1bde4
		   // ──── Block 18 if (==) ────────────────────
		   0x010DC3AC:  0000A0E3     MOV r0, 0x0
		   0x010DC3B0:  EC7602EB     BL $+0x9dbb8  // CALL → ProfileStorage.get_numLevels
		   0x010DC3B4:  010050E3     CMPS r0, r0, 0x1
		   0x010DC3B8:  130000CA     BGT $+0x54  // if (>) goto 0x010DC40C
		   // 
		   // ──── Block 19 else (<=) ────────────────────
		   0x010DC3BC:  80049FE5     LDR r0, [pc, 0x480]
		   0x010DC3C0:  00009FE7     LDR r0, [pc, r0]
		   0x010DC3C4:  000090E5     LDR r0, [r0]
		   0x010DC3C8:  0010A0E3     MOV r1, 0x0
		   0x010DC3CC:  B6BC0AEB     BL $+0x2af2e0  // CALL → ObsoleteDataCleaner.DisableCleaning
		   0x010DC3D0:  70049FE5     LDR r0, [pc, 0x470]
		   0x010DC3D4:  00009FE7     LDR r0, [pc, r0]
		   0x010DC3D8:  000090E5     LDR r0, [r0]
		   0x010DC3DC:  0010A0E3     MOV r1, 0x0
		   0x010DC3E0:  B1BC0AEB     BL $+0x2af2cc  // CALL → ObsoleteDataCleaner.DisableCleaning
		   0x010DC3E4:  60049FE5     LDR r0, [pc, 0x460]
		   0x010DC3E8:  00009FE7     LDR r0, [pc, r0]
		   0x010DC3EC:  000090E5     LDR r0, [r0]
		   0x010DC3F0:  0010A0E3     MOV r1, 0x0
		   0x010DC3F4:  ACBC0AEB     BL $+0x2af2b8  // CALL → ObsoleteDataCleaner.DisableCleaning
		   0x010DC3F8:  50049FE5     LDR r0, [pc, 0x450]
		   0x010DC3FC:  00009FE7     LDR r0, [pc, r0]
		   0x010DC400:  000090E5     LDR r0, [r0]
		   0x010DC404:  0010A0E3     MOV r1, 0x0
		   0x010DC408:  A7BC0AEB     BL $+0x2af2a4  // CALL → ObsoleteDataCleaner.DisableCleaning
		   // ──── Block 20 if (>) ────────────────────
		   0x010DC40C:  40949FE5     LDR sb, [pc, 0x440]
		   0x010DC410:  10808DE2     ADD r8, sp, 0x10
		   0x010DC414:  0060A0E3     MOV r6, 0x0
		   0x010DC418:  09909FE7     LDR sb, [pc, sb]
		   0x010DC41C:  34A49FE5     LDR r10, [pc, 0x434]
		   0x010DC420:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DC424:  30B49FE5     LDR fp, [pc, 0x430]
		   0x010DC428:  0BB09FE7     LDR fp, [pc, fp]
		   0x010DC42C:  000094E5     LDR r0, [r4]
		   0x010DC430:  10608DE5     STR r6, [sp, 0x10]
		   0x010DC434:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DC438:  005090E5     LDR r5, [r0]
		   0x010DC43C:  000055E3     CMPS r0, r5, 0x0
		   0x010DC440:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC448
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010DC444:  E1FBF9EB     BL $-0x181074
		   // ──── Block 22 if (!=) ────────────────────
		   0x010DC448:  085095E5     LDR r5, [r5, 0x8]
		   0x010DC44C:  000055E3     CMPS r0, r5, 0x0
		   0x010DC450:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC458
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010DC454:  DDFBF9EB     BL $-0x181084
		   // ──── Block 24 if (!=) ────────────────────
		   0x010DC458:  000095E5     LDR r0, [r5]
		   0x010DC45C:  001099E5     LDR r1, [sb]
		   0x010DC460:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010DC464:  000052E3     CMPS r0, r2, 0x0
		   0x010DC468:  0700000A     BEQ $+0x24  // if (==) goto 0x010DC48C
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x010DC46C:  583090E5     LDR r3, [r0, 0x58]
		   0x010DC470:  043083E2     ADD r3, r3, 0x4
		   0x010DC474:  047013E5     LDR r7, [r3, -0x4]
		   0x010DC478:  010057E1     CMPS r0, r7, r1
		   0x010DC47C:  0600000A     BEQ $+0x20  // if (==) goto 0x010DC49C
		   // 
		   // ──── Block 26 else (!=) ────────────────────
		   0x010DC480:  012052E2     SUBS r2, r2, 0x1
		   0x010DC484:  083083E2     ADD r3, r3, 0x8
		   0x010DC488:  F9FFFF1A     BNE $-0x14
		   // ──── Block 27 (from 2 paths) ──────────────────
		   0x010DC48C:  0500A0E1     MOV r0, r5
		   0x010DC490:  0020A0E3     MOV r2, 0x0
		   0x010DC494:  7BEAFAEB     BL $-0x14560c
		   0x010DC498:  020000EA     B $+0x10  // goto 0x010DC4A8
		   // ──── Block 28 if (==) ────────────────────
		   0x010DC49C:  001093E5     LDR r1, [r3]
		   0x010DC4A0:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010DC4A4:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 29 ──────────────────────────────
		   0x010DC4A8:  D020C0E1     LDRD r2, r3, [r0]
		   0x010DC4AC:  0500A0E1     MOV r0, r5
		   0x010DC4B0:  0310A0E1     MOV r1, r3
		   0x010DC4B4:  32FF2FE1     BLX r2
		   0x010DC4B8:  000056E1     CMPS r0, r6, r0
		   0x010DC4BC:  790000AA     BGE $+0x1ec  // if (>=) goto 0x010DC6A8
		   // 
		   // ──── Block 30 else (r2 < r2, 0x1) ────────────────────
		   0x010DC4C0:  000094E5     LDR r0, [r4]
		   0x010DC4C4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DC4C8:  006090E5     LDR r6, [r0]
		   0x010DC4CC:  000056E3     CMPS r0, r6, 0x0
		   0x010DC4D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC4D8
		   // 
		   // ──── Block 31 else (r2 == r2, 0x1) ────────────────────
		   0x010DC4D4:  BDFBF9EB     BL $-0x181104
		   // ──── Block 32 if (r2 != r2, 0x1) ────────────────────
		   0x010DC4D8:  086096E5     LDR r6, [r6, 0x8]
		   0x010DC4DC:  10509DE5     LDR r5, [sp, 0x10]
		   0x010DC4E0:  000056E3     CMPS r0, r6, 0x0
		   0x010DC4E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC4EC
		   // 
		   // ──── Block 33 else (r2 == r2, 0x1) ────────────────────
		   0x010DC4E8:  B8FBF9EB     BL $-0x181118
		   // ──── Block 34 if (r2 != r2, 0x1) ────────────────────
		   0x010DC4EC:  000096E5     LDR r0, [r6]
		   0x010DC4F0:  68139FE5     LDR r1, [pc, 0x368]
		   0x010DC4F4:  01109FE7     LDR r1, [pc, r1]
		   0x010DC4F8:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010DC4FC:  001091E5     LDR r1, [r1]
		   0x010DC500:  000052E3     CMPS r0, r2, 0x0
		   0x010DC504:  0700000A     BEQ $+0x24  // if (==) goto 0x010DC528
		   // 
		   // ──── Block 35 else (r2 != r2, 0x1) ────────────────────
		   0x010DC508:  583090E5     LDR r3, [r0, 0x58]
		   0x010DC50C:  043083E2     ADD r3, r3, 0x4
		   0x010DC510:  047013E5     LDR r7, [r3, -0x4]
		   0x010DC514:  010057E1     CMPS r0, r7, r1
		   0x010DC518:  0600000A     BEQ $+0x20  // if (==) goto 0x010DC538
		   // 
		   // ──── Block 36 else (r2 != r2, 0x1) ────────────────────
		   0x010DC51C:  012052E2     SUBS r2, r2, 0x1
		   0x010DC520:  083083E2     ADD r3, r3, 0x8
		   0x010DC524:  F9FFFF1A     BNE $-0x14
		   // ──── Block 37 (from 2 paths) ──────────────────
		   0x010DC528:  0600A0E1     MOV r0, r6
		   0x010DC52C:  0020A0E3     MOV r2, 0x0
		   0x010DC530:  54EAFAEB     BL $-0x1456a8
		   0x010DC534:  020000EA     B $+0x10  // goto 0x010DC544
		   // ──── Block 38 if (r2 == r2, 0x1) ────────────────────
		   0x010DC538:  001093E5     LDR r1, [r3]
		   0x010DC53C:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010DC540:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 39 ──────────────────────────────
		   0x010DC544:  880090E8     LDM r0, {r3, r7}
		   0x010DC548:  0600A0E1     MOV r0, r6
		   0x010DC54C:  0510A0E1     MOV r1, r5
		   0x010DC550:  0720A0E1     MOV r2, r7
		   0x010DC554:  33FF2FE1     BLX r3
		   0x010DC558:  0060A0E1     MOV r6, r0
		   0x010DC55C:  0800A0E1     MOV r0, r8
		   0x010DC560:  0010A0E3     MOV r1, 0x0
		   0x010DC564:  AF9F7DEB     BL $+0x1f67ec4  // CALL → Int32.ToString
		   0x010DC568:  0010A0E1     MOV r1, r0
		   0x010DC56C:  F0029FE5     LDR r0, [pc, 0x2f0]
		   0x010DC570:  00009FE7     LDR r0, [pc, r0]
		   0x010DC574:  000090E5     LDR r0, [r0]
		   0x010DC578:  0020A0E3     MOV r2, 0x0
		   0x010DC57C:  6FB476EB     BL $+0x1dad1c4  // CALL → String.Concat
		   0x010DC580:  0050A0E1     MOV r5, r0
		   0x010DC584:  000056E3     CMPS r0, r6, 0x0
		   0x010DC588:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC590
		   // 
		   // ──── Block 40 else (r2 == r2, 0x1) ────────────────────
		   0x010DC58C:  8FFBF9EB     BL $-0x1811bc
		   // ──── Block 41 if (r2 != r2, 0x1) ────────────────────
		   0x010DC590:  307096E5     LDR r7, [r6, 0x30]
		   0x010DC594:  000057E3     CMPS r0, r7, 0x0
		   0x010DC598:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC5A0
		   // 
		   // ──── Block 42 else (r2 == r2, 0x1) ────────────────────
		   0x010DC59C:  8BFBF9EB     BL $-0x1811cc
		   // ──── Block 43 if (r2 != r2, 0x1) ────────────────────
		   0x010DC5A0:  087097E5     LDR r7, [r7, 0x8]
		   0x010DC5A4:  000057E3     CMPS r0, r7, 0x0
		   0x010DC5A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC5B0
		   // 
		   // ──── Block 44 else (r2 == r2, 0x1) ────────────────────
		   0x010DC5AC:  87FBF9EB     BL $-0x1811dc
		   // ──── Block 45 if (r2 != r2, 0x1) ────────────────────
		   0x010DC5B0:  00209AE5     LDR r2, [r10]
		   0x010DC5B4:  0700A0E1     MOV r0, r7
		   0x010DC5B8:  0010A0E3     MOV r1, 0x0
		   0x010DC5BC:  CF586CEB     BL $+0x1b16344  // CALL → List<object>.get_Item
		   0x010DC5C0:  0070A0E1     MOV r7, r0
		   0x010DC5C4:  000050E3     CMPS r0, r0, 0x0
		   0x010DC5C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC5D0
		   // 
		   // ──── Block 46 else (r2 == r2, 0x1) ────────────────────
		   0x010DC5CC:  7FFBF9EB     BL $-0x1811fc
		   // ──── Block 47 if (r2 != r2, 0x1) ────────────────────
		   0x010DC5D0:  187097E5     LDR r7, [r7, 0x18]
		   0x010DC5D4:  000057E3     CMPS r0, r7, 0x0
		   0x010DC5D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC5E0
		   // 
		   // ──── Block 48 else (r2 == r2, 0x1) ────────────────────
		   0x010DC5DC:  7BFBF9EB     BL $-0x18120c
		   // ──── Block 49 if (r2 != r2, 0x1) ────────────────────
		   0x010DC5E0:  00209BE5     LDR r2, [fp]
		   0x010DC5E4:  0700A0E1     MOV r0, r7
		   0x010DC5E8:  0010A0E3     MOV r1, 0x0
		   0x010DC5EC:  C3586CEB     BL $+0x1b16314  // CALL → List<object>.get_Item
		   0x010DC5F0:  0070A0E1     MOV r7, r0
		   0x010DC5F4:  000050E3     CMPS r0, r0, 0x0
		   0x010DC5F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC600
		   // 
		   // ──── Block 50 else (r2 == r2, 0x1) ────────────────────
		   0x010DC5FC:  73FBF9EB     BL $-0x18122c
		   // ──── Block 51 if (r2 != r2, 0x1) ────────────────────
		   0x010DC600:  0700A0E1     MOV r0, r7
		   0x010DC604:  0010A0E3     MOV r1, 0x0
		   0x010DC608:  06E810EB     BL $+0x43a020  // CALL → Level.get_Completed
		   0x010DC60C:  000050E3     CMPS r0, r0, 0x0
		   0x010DC610:  1B00000A     BEQ $+0x74  // if (==) goto 0x010DC684
		   // 
		   // ──── Block 52 else (r2 != r2, 0x1) ────────────────────
		   0x010DC614:  306096E5     LDR r6, [r6, 0x30]
		   0x010DC618:  000056E3     CMPS r0, r6, 0x0
		   0x010DC61C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC624
		   // 
		   // ──── Block 53 else (r2 == r2, 0x1) ────────────────────
		   0x010DC620:  6AFBF9EB     BL $-0x181250
		   // ──── Block 54 if (r2 != r2, 0x1) ────────────────────
		   0x010DC624:  086096E5     LDR r6, [r6, 0x8]
		   0x010DC628:  000056E3     CMPS r0, r6, 0x0
		   0x010DC62C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC634
		   // 
		   // ──── Block 55 else (r2 == r2, 0x1) ────────────────────
		   0x010DC630:  66FBF9EB     BL $-0x181260
		   // ──── Block 56 if (r2 != r2, 0x1) ────────────────────
		   0x010DC634:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010DC638:  00209AE5     LDR r2, [r10]
		   0x010DC63C:  011040E2     SUB r1, r0, 0x1
		   0x010DC640:  0600A0E1     MOV r0, r6
		   0x010DC644:  AD586CEB     BL $+0x1b162bc  // CALL → List<object>.get_Item
		   0x010DC648:  0060A0E1     MOV r6, r0
		   0x010DC64C:  000050E3     CMPS r0, r0, 0x0
		   0x010DC650:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC658
		   // 
		   // ──── Block 57 else (r2 == r2, 0x1) ────────────────────
		   0x010DC654:  5DFBF9EB     BL $-0x181284
		   // ──── Block 58 if (r2 != r2, 0x1) ────────────────────
		   0x010DC658:  0600A0E1     MOV r0, r6
		   0x010DC65C:  0010A0E3     MOV r1, 0x0
		   0x010DC660:  F8E410EB     BL $+0x4393e8  // CALL → Episodes.get_Completed
		   0x010DC664:  000050E3     CMPS r0, r0, 0x0
		   0x010DC668:  0800000A     BEQ $+0x28  // if (==) goto 0x010DC690
		   // 
		   // ──── Block 59 else (r2 != r2, 0x1) ────────────────────
		   0x010DC66C:  0500A0E1     MOV r0, r5
		   0x010DC670:  0010A0E3     MOV r1, 0x0
		   0x010DC674:  35BC0AEB     BL $+0x2af0dc  // CALL → ObsoleteDataCleaner.CleanupRequired
		   0x010DC678:  000050E3     CMPS r0, r0, 0x0
		   0x010DC67C:  0300000A     BEQ $+0x14  // if (==) goto 0x010DC690
		   // 
		   // ──── Block 60 else (r2 != r2, 0x1) ────────────────────
		   0x010DC680:  050000EA     B $+0x1c  // goto 0x010DC69C
		   // ──── Block 61 if (r2 == r2, 0x1) ────────────────────
		   0x010DC684:  0500A0E1     MOV r0, r5
		   0x010DC688:  0010A0E3     MOV r1, 0x0
		   0x010DC68C:  06BC0AEB     BL $+0x2af020  // CALL → ObsoleteDataCleaner.DisableCleaning
		   // ──── Block 62 (from 2 paths) ──────────────────
		   0x010DC690:  10009DE5     LDR r0, [sp, 0x10]
		   0x010DC694:  016080E2     ADD r6, r0, 0x1
		   0x010DC698:  63FFFFEA     B $-0x26c
		   // ──── Block 63 ──────────────────────────────
		   0x010DC69C:  0500A0E1     MOV r0, r5
		   0x010DC6A0:  0010A0E3     MOV r1, 0x0
		   0x010DC6A4:  FFBB0AEB     BL $+0x2af004  // CALL → ObsoleteDataCleaner.StartCleaning
		   // ──── Block 64 if (r2 >= r2, 0x1) ────────────────────
		   0x010DC6A8:  14D08DE2     ADD sp, sp, 0x14
		   0x010DC6AC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010DC6B0:  150000EA     B $+0x5c  // goto 0x010DC70C
		   0x010DC6B4:  140000EA     B $+0x58  // goto 0x010DC70C
		   0x010DC6B8:  130000EA     B $+0x54  // goto 0x010DC70C
		   0x010DC6BC:  120000EA     B $+0x50  // goto 0x010DC70C
		   0x010DC6C0:  110000EA     B $+0x4c  // goto 0x010DC70C
		   0x010DC6C4:  100000EA     B $+0x48  // goto 0x010DC70C
		   0x010DC6C8:  0F0000EA     B $+0x44  // goto 0x010DC70C
		   0x010DC6CC:  0E0000EA     B $+0x40  // goto 0x010DC70C
		   0x010DC6D0:  0D0000EA     B $+0x3c  // goto 0x010DC70C
		   0x010DC6D4:  0C0000EA     B $+0x38  // goto 0x010DC70C
		   0x010DC6D8:  0B0000EA     B $+0x34  // goto 0x010DC70C
		   0x010DC6DC:  0A0000EA     B $+0x30  // goto 0x010DC70C
		   0x010DC6E0:  090000EA     B $+0x2c  // goto 0x010DC70C
		   0x010DC6E4:  080000EA     B $+0x28  // goto 0x010DC70C
		   0x010DC6E8:  070000EA     B $+0x24  // goto 0x010DC70C
		   0x010DC6EC:  060000EA     B $+0x20  // goto 0x010DC70C
		   0x010DC6F0:  050000EA     B $+0x1c  // goto 0x010DC70C
		   0x010DC6F4:  040000EA     B $+0x18  // goto 0x010DC70C
		   0x010DC6F8:  030000EA     B $+0x14  // goto 0x010DC70C
		   0x010DC6FC:  020000EA     B $+0x10  // goto 0x010DC70C
		   0x010DC700:  010000EA     B $+0xc  // goto 0x010DC70C
		   0x010DC704:  000000EA     B $+0x8  // goto 0x010DC70C
		   0x010DC708:  FFFFFFEA     B $+0x4  // goto 0x010DC70C
		   // ──── Block 88 ──────────────────────────────
		   0x010DC70C:  010051E3     CMPS r0, r1, 0x1
		   0x010DC710:  2500001A     BNE $+0x9c  // if (!=) goto 0x010DC7AC
		   // 
		   // ──── Block 89 else (r2 == r2, 0x1) ────────────────────
		   0x010DC714:  EB20FDEB     BL $-0xb7c4c
		   0x010DC718:  0040A0E1     MOV r4, r0
		   0x010DC71C:  44019FE5     LDR r0, [pc, 0x144]
		   0x010DC720:  00009FE7     LDR r0, [pc, r0]
		   0x010DC724:  91FAF9EB     BL $-0x1815b4
		   0x010DC728:  001094E5     LDR r1, [r4]
		   0x010DC72C:  001091E5     LDR r1, [r1]
		   0x010DC730:  42FCF9EB     BL $-0x180ef0
		   0x010DC734:  000050E3     CMPS r0, r0, 0x0
		   0x010DC738:  1200000A     BEQ $+0x50  // if (==) goto 0x010DC788
		   // 
		   // ──── Block 90 else (r2 != r2, 0x1) ────────────────────
		   0x010DC73C:  0C509DE5     LDR r5, [sp, 0xc]
		   0x010DC740:  08008DE2     ADD r0, sp, 0x8
		   0x010DC744:  004094E5     LDR r4, [r4]
		   0x010DC748:  054180E7     STR r4, [r0, r5, lsl 2]
		   0x010DC74C:  010085E2     ADD r0, r5, 0x1
		   0x010DC750:  0C008DE5     STR r0, [sp, 0xc]
		   0x010DC754:  0F21FDEB     BL $-0xb7bbc
		   0x010DC758:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x010DC75C:  00009FE7     LDR r0, [pc, r0]
		   0x010DC760:  82FAF9EB     BL $-0x1815f0
		   0x010DC764:  741090E5     LDR r1, [r0, 0x74]
		   0x010DC768:  000051E3     CMPS r0, r1, 0x0
		   0x010DC76C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC774
		   // 
		   // ──── Block 91 else (r2 == r2, 0x1) ────────────────────
		   0x010DC770:  C7FAF9EB     BL $-0x1814dc
		   // ──── Block 92 if (r2 != r2, 0x1) ────────────────────
		   0x010DC774:  0400A0E1     MOV r0, r4
		   0x010DC778:  0010A0E3     MOV r1, 0x0
		   0x010DC77C:  826E3CEB     BL $+0xf1ba10  // CALL → sub_1FF818C
		   0x010DC780:  0C508DE5     STR r5, [sp, 0xc]
		   0x010DC784:  C7FFFFEA     B $-0xdc
		   // ──── Block 93 if (r2 == r2, 0x1) ────────────────────
		   0x010DC788:  0400A0E3     MOV r0, 0x4
		   0x010DC78C:  662DFDEB     BL $-0xb4a60
		   0x010DC790:  002094E5     LDR r2, [r4]
		   0x010DC794:  D4109FE5     LDR r1, [pc, 0xd4]
		   0x010DC798:  002080E5     STR r2, [r0]
		   0x010DC79C:  01108FE0     ADD r1, pc, r1
		   0x010DC7A0:  0020A0E3     MOV r2, 0x0
		   0x010DC7A4:  642DFDEB     BL $-0xb4a68
		   0x010DC7A8:  FA20FDEB     BL $-0xb7c10
		   // ──── Block 94 if (r2 != r2, 0x1) ────────────────────
		   0x010DC7AC:  FD20FDEB     BL $-0xb7c04
		   0x010DC7B0:  FBCCEDEB     BL $-0x48cc0c
		   0x010DC7B4:  6FFC1403     TSTSEQ pc, r4, 0x6f00
		   0x010DC7B8:  14D0F902     RSCSEQ sp, sb, 0x14
		   0x010DC7BC:  0CD0F902     RSCSEQ sp, sb, 0xc
		   0x010DC7C0:  04D0F902     RSCSEQ sp, sb, 0x4
		   0x010DC7C4:  40A5F902     RSCSEQ r10, sb, 0x10000000
		   0x010DC7C8:  F0CFF902     RSCSEQ ip, sb, 0x3c0
		   0x010DC7CC:  E8CFF902     RSCSEQ ip, sb, 0x3a0
		   0x010DC7D0:  E0CFF902     RSCSEQ ip, sb, 0x380
		   0x010DC7D4:  D8CFF902     RSCSEQ ip, sb, 0x360
		   0x010DC7D8:  C0CAF902     RSCSEQ ip, sb, 0xc0000
		   0x010DC7DC:  C4CFF902     RSCSEQ ip, sb, 0x310
		   0x010DC7E0:  BCCFF902     RSCSEQ ip, sb, 0x2f0
		   0x010DC7E4:  B4CFF902     RSCSEQ ip, sb, 0x2d0
		   0x010DC7E8:  18B6F902     RSCSEQ fp, sb, 0x1800000
		   0x010DC7EC:  A0CFF902     RSCSEQ ip, sb, 0x280
		   0x010DC7F0:  98CFF902     RSCSEQ ip, sb, 0x260
		   0x010DC7F4:  90CFF902     RSCSEQ ip, sb, 0x240
		   0x010DC7F8:  88CFF902     RSCSEQ ip, sb, 0x220
		   0x010DC7FC:  80CFF902     RSCSEQ ip, sb, 0x200
		   0x010DC800:  A8B0F902     RSCSEQ fp, sb, 0xa8
		   0x010DC804:  6CCFF902     RSCSEQ ip, sb, 0x1b0
		   0x010DC808:  64CFF902     RSCSEQ ip, sb, 0x190
		   0x010DC80C:  5CCFF902     RSCSEQ ip, sb, 0x170
		   0x010DC810:  0CCAF902     RSCSEQ ip, sb, 0xc000
		   0x010DC814:  F8CEF902     RSCSEQ ip, sb, 0xf80
		   0x010DC818:  CCCEF902     RSCSEQ ip, sb, 0xcc0
		   0x010DC81C:  A8CEF902     RSCSEQ ip, sb, 0xa80
		   0x010DC820:  88CEF902     RSCSEQ ip, sb, 0x880
		   0x010DC824:  60CEF902     RSCSEQ ip, sb, 0x600
		   0x010DC828:  38CEF902     RSCSEQ ip, sb, 0x380
		   0x010DC82C:  14CEF902     RSCSEQ ip, sb, 0x140
		   0x010DC830:  E8CDF902     RSCSEQ ip, sb, 0x3a00
		   0x010DC834:  C0CDF902     RSCSEQ ip, sb, 0x3000
		   0x010DC838:  88CDF902     RSCSEQ ip, sb, 0x2200
		   0x010DC83C:  6CB3F902     RSCSEQ fp, sb, 0xb0000001
		   0x010DC840:  08A2F902     RSCSEQ r10, sb, 0x80000000
		   0x010DC844:  B8CCF902     RSCSEQ ip, sb, 0xb800
		   0x010DC848:  9CCCF902     RSCSEQ ip, sb, 0x9c00
		   0x010DC84C:  8CCCF902     RSCSEQ ip, sb, 0x8c00
		   0x010DC850:  80CCF902     RSCSEQ ip, sb, 0x8000
		   0x010DC854:  40CCF902     RSCSEQ ip, sb, 0x4000
		   0x010DC858:  48CCF902     RSCSEQ ip, sb, 0x4800
		   0x010DC85C:  44CCF902     RSCSEQ ip, sb, 0x4400
		   0x010DC860:  68CBF902     RSCSEQ ip, sb, 0x1a000
		   0x010DC864:  34ACF902     RSCSEQ r10, sb, 0x3400
		   0x010DC868:  CCA1F902     RSCSEQ r10, sb, 0x33
		   0x010DC86C:  2C9EF902     RSCSEQ sb, sb, 0x2c0
		   0x010DC870:  C0C8E402     RSCEQ ip, r4, 0xc00000
		*/
	}

	// RVA: 0x10DC874 Offset: 0x10DC874 VA: 0x10DC874
	public void SelectSeason(Season season) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DC874:  6C1080E5     STR r1, [r0, 0x6c]
		   0x010DC878:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10D1A9C Offset: 0x10D1A9C VA: 0x10D1A9C
	public void Setup(Transform container, Transform topContainer, Action resetInfoWindow, ItemObject[] items, ReceivedItemsController receivedItemsController, ChainObject[] chainsArray, ResourcesPack resourcesPack, GoalsController goalsController, OpenChestRewardsAndShow openChestRewardsAndShow, StarsChest starsChest, Action<Cell> fakeSelectInfoWindow, Func<RewardsBox.RewardsBoxData> getMainRewardsBoxData) {
		/* Disassembly (ARM32, 379 instructions, 0x5EC bytes):
		   // CFG: 28 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D1A9C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D1AA0:  0CD04DE2     SUB sp, sp, 0xc
		   0x010D1AA4:  04308DE5     STR r3, [sp, 0x4]
		   0x010D1AA8:  48708DE2     ADD r7, sp, 0x48
		   0x010D1AAC:  28859FE5     LDR r8, [pc, 0x528]
		   0x010D1AB0:  0040A0E1     MOV r4, r0
		   0x010D1AB4:  44609DE5     LDR r6, [sp, 0x44]
		   0x010D1AB8:  0290A0E1     MOV sb, r2
		   0x010D1ABC:  08808FE0     ADD r8, pc, r8
		   0x010D1AC0:  40309DE5     LDR r3, [sp, 0x40]
		   0x010D1AC4:  3C509DE5     LDR r5, [sp, 0x3c]
		   0x010D1AC8:  01A0A0E1     MOV r10, r1
		   0x010D1ACC:  0000D8E5     LDRB r0, [r8]
		   0x010D1AD0:  860097E8     LDM r7, {r1, r2, r7}
		   0x010D1AD4:  000050E3     CMPS r0, r0, 0x0
		   0x010D1AD8:  4600001A     BNE $+0x120  // if (!=) goto 0x010D1BF8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D1ADC:  FC049FE5     LDR r0, [pc, 0x4fc]
		   0x010D1AE0:  02B0A0E1     MOV fp, r2
		   0x010D1AE4:  0670A0E1     MOV r7, r6
		   0x010D1AE8:  00009FE7     LDR r0, [pc, r0]
		   0x010D1AEC:  9B25FAEB     BL $-0x17698c
		   0x010D1AF0:  EC049FE5     LDR r0, [pc, 0x4ec]
		   0x010D1AF4:  00009FE7     LDR r0, [pc, r0]
		   0x010D1AF8:  9825FAEB     BL $-0x176998
		   0x010D1AFC:  E4049FE5     LDR r0, [pc, 0x4e4]
		   0x010D1B00:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B04:  9525FAEB     BL $-0x1769a4
		   0x010D1B08:  DC049FE5     LDR r0, [pc, 0x4dc]
		   0x010D1B0C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B10:  9225FAEB     BL $-0x1769b0
		   0x010D1B14:  D4049FE5     LDR r0, [pc, 0x4d4]
		   0x010D1B18:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B1C:  8F25FAEB     BL $-0x1769bc
		   0x010D1B20:  CC049FE5     LDR r0, [pc, 0x4cc]
		   0x010D1B24:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B28:  8C25FAEB     BL $-0x1769c8
		   0x010D1B2C:  C4049FE5     LDR r0, [pc, 0x4c4]
		   0x010D1B30:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B34:  8925FAEB     BL $-0x1769d4
		   0x010D1B38:  BC049FE5     LDR r0, [pc, 0x4bc]
		   0x010D1B3C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B40:  8625FAEB     BL $-0x1769e0
		   0x010D1B44:  B4049FE5     LDR r0, [pc, 0x4b4]
		   0x010D1B48:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B4C:  8325FAEB     BL $-0x1769ec
		   0x010D1B50:  AC049FE5     LDR r0, [pc, 0x4ac]
		   0x010D1B54:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B58:  8025FAEB     BL $-0x1769f8
		   0x010D1B5C:  A4049FE5     LDR r0, [pc, 0x4a4]
		   0x010D1B60:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B64:  7D25FAEB     BL $-0x176a04
		   0x010D1B68:  9C049FE5     LDR r0, [pc, 0x49c]
		   0x010D1B6C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B70:  7A25FAEB     BL $-0x176a10
		   0x010D1B74:  94049FE5     LDR r0, [pc, 0x494]
		   0x010D1B78:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B7C:  7725FAEB     BL $-0x176a1c
		   0x010D1B80:  8C049FE5     LDR r0, [pc, 0x48c]
		   0x010D1B84:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B88:  7425FAEB     BL $-0x176a28
		   0x010D1B8C:  84049FE5     LDR r0, [pc, 0x484]
		   0x010D1B90:  00009FE7     LDR r0, [pc, r0]
		   0x010D1B94:  7125FAEB     BL $-0x176a34
		   0x010D1B98:  7C049FE5     LDR r0, [pc, 0x47c]
		   0x010D1B9C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1BA0:  6E25FAEB     BL $-0x176a40
		   0x010D1BA4:  74049FE5     LDR r0, [pc, 0x474]
		   0x010D1BA8:  00009FE7     LDR r0, [pc, r0]
		   0x010D1BAC:  6B25FAEB     BL $-0x176a4c
		   0x010D1BB0:  6C049FE5     LDR r0, [pc, 0x46c]
		   0x010D1BB4:  00009FE7     LDR r0, [pc, r0]
		   0x010D1BB8:  6825FAEB     BL $-0x176a58
		   0x010D1BBC:  64049FE5     LDR r0, [pc, 0x464]
		   0x010D1BC0:  00009FE7     LDR r0, [pc, r0]
		   0x010D1BC4:  6525FAEB     BL $-0x176a64
		   0x010D1BC8:  5C049FE5     LDR r0, [pc, 0x45c]
		   0x010D1BCC:  00009FE7     LDR r0, [pc, r0]
		   0x010D1BD0:  6225FAEB     BL $-0x176a70
		   0x010D1BD4:  54049FE5     LDR r0, [pc, 0x454]
		   0x010D1BD8:  00009FE7     LDR r0, [pc, r0]
		   0x010D1BDC:  5F25FAEB     BL $-0x176a7c
		   0x010D1BE0:  40309DE5     LDR r3, [sp, 0x40]
		   0x010D1BE4:  0100A0E3     MOV r0, 0x1
		   0x010D1BE8:  50709DE5     LDR r7, [sp, 0x50]
		   0x010D1BEC:  0B20A0E1     MOV r2, fp
		   0x010D1BF0:  48109DE5     LDR r1, [sp, 0x48]
		   0x010D1BF4:  0000C8E5     STRB r0, [r8]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D1BF8:  34049FE5     LDR r0, [pc, 0x434]
		   0x010D1BFC:  38B09DE5     LDR fp, [sp, 0x38]
		   0x010D1C00:  34809DE5     LDR r8, [sp, 0x34]
		   0x010D1C04:  00009FE7     LDR r0, [pc, r0]
		   0x010D1C08:  641084E5     STR r1, [r4, 0x64]
		   0x010D1C0C:  0010A0E3     MOV r1, 0x0
		   0x010D1C10:  7C2084E5     STR r2, [r4, 0x7c]
		   0x010D1C14:  000090E5     LDR r0, [r0]
		   0x010D1C18:  807084E5     STR r7, [r4, 0x80]
		   0x010D1C1C:  746084E5     STR r6, [r4, 0x74]
		   0x010D1C20:  5C5084E5     STR r5, [r4, 0x5c]
		   0x010D1C24:  603084E5     STR r3, [r4, 0x60]
		   0x010D1C28:  08108DE5     STR r1, [sp, 0x8]
		   0x010D1C2C:  E425FAEB     BL $-0x176868
		   0x010D1C30:  0060A0E1     MOV r6, r0
		   0x010D1C34:  FC039FE5     LDR r0, [pc, 0x3fc]
		   0x010D1C38:  0410A0E1     MOV r1, r4
		   0x010D1C3C:  0030A0E3     MOV r3, 0x0
		   0x010D1C40:  00009FE7     LDR r0, [pc, r0]
		   0x010D1C44:  002090E5     LDR r2, [r0]
		   0x010D1C48:  0600A0E1     MOV r0, r6
		   0x010D1C4C:  5E6161EB     BL $+0x1858580  // CALL → Func<object>..ctor
		   0x010D1C50:  E4039FE5     LDR r0, [pc, 0x3e4]
		   0x010D1C54:  00009FE7     LDR r0, [pc, r0]
		   0x010D1C58:  000090E5     LDR r0, [r0]
		   0x010D1C5C:  D825FAEB     BL $-0x176898
		   0x010D1C60:  0610A0E1     MOV r1, r6
		   0x010D1C64:  0020A0E3     MOV r2, 0x0
		   0x010D1C68:  0050A0E1     MOV r5, r0
		   0x010D1C6C:  B33801EB     BL $+0x4e2d4  // CALL → LimitedChestOpening..ctor
		   0x010D1C70:  347094E5     LDR r7, [r4, 0x34]
		   0x010D1C74:  685084E5     STR r5, [r4, 0x68]
		   0x010D1C78:  000057E3     CMPS r0, r7, 0x0
		   0x010D1C7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1C84
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D1C80:  D225FAEB     BL $-0x1768b0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D1C84:  0700A0E1     MOV r0, r7
		   0x010D1C88:  0010A0E3     MOV r1, 0x0
		   0x010D1C8C:  30609DE5     LDR r6, [sp, 0x30]
		   0x010D1C90:  249300EB     BL $+0x24c98  // CALL → ItemsPool.Init
		   0x010D1C94:  A4039FE5     LDR r0, [pc, 0x3a4]
		   0x010D1C98:  00009FE7     LDR r0, [pc, r0]
		   0x010D1C9C:  000090E5     LDR r0, [r0]
		   0x010D1CA0:  C725FAEB     BL $-0x1768dc
		   0x010D1CA4:  0050A0E1     MOV r5, r0
		   0x010D1CA8:  94039FE5     LDR r0, [pc, 0x394]
		   0x010D1CAC:  0B10A0E1     MOV r1, fp
		   0x010D1CB0:  00009FE7     LDR r0, [pc, r0]
		   0x010D1CB4:  002090E5     LDR r2, [r0]
		   0x010D1CB8:  0500A0E1     MOV r0, r5
		   0x010D1CBC:  04826CEB     BL $+0x1b20818  // CALL → List<object>..ctor
		   0x010D1CC0:  385084E5     STR r5, [r4, 0x38]
		   0x010D1CC4:  505094E5     LDR r5, [r4, 0x50]
		   0x010D1CC8:  04009DE5     LDR r0, [sp, 0x4]
		   0x010D1CCC:  000055E3     CMPS r0, r5, 0x0
		   0x010D1CD0:  588084E5     STR r8, [r4, 0x58]
		   0x010D1CD4:  44A084E5     STR r10, [r4, 0x44]
		   0x010D1CD8:  489084E5     STR sb, [r4, 0x48]
		   0x010D1CDC:  4C0084E5     STR r0, [r4, 0x4c]
		   0x010D1CE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1CE8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D1CE4:  B925FAEB     BL $-0x176914
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D1CE8:  58039FE5     LDR r0, [pc, 0x358]
		   0x010D1CEC:  0610A0E1     MOV r1, r6
		   0x010D1CF0:  00009FE7     LDR r0, [pc, r0]
		   0x010D1CF4:  002090E5     LDR r2, [r0]
		   0x010D1CF8:  0500A0E1     MOV r0, r5
		   0x010D1CFC:  2E846CEB     BL $+0x1b210c0  // CALL → List<object>.AddRange
		   0x010D1D00:  6C5094E5     LDR r5, [r4, 0x6c]
		   0x010D1D04:  000055E3     CMPS r0, r5, 0x0
		   0x010D1D08:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1D10
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D1D0C:  AF25FAEB     BL $-0x17693c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D1D10:  2C5095E5     LDR r5, [r5, 0x2c]
		   0x010D1D14:  000055E3     CMPS r0, r5, 0x0
		   0x010D1D18:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1D20
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D1D1C:  AB25FAEB     BL $-0x17694c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D1D20:  24039FE5     LDR r0, [pc, 0x324]
		   0x010D1D24:  105085E2     ADD r5, r5, 0x10
		   0x010D1D28:  00009FE7     LDR r0, [pc, r0]
		   0x010D1D2C:  000090E5     LDR r0, [r0]
		   0x010D1D30:  741090E5     LDR r1, [r0, 0x74]
		   0x010D1D34:  000051E3     CMPS r0, r1, 0x0
		   0x010D1D38:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1D40
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D1D3C:  5425FAEB     BL $-0x176aa8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D1D40:  0500A0E1     MOV r0, r5
		   0x010D1D44:  0010A0E3     MOV r1, 0x0
		   0x010D1D48:  769E10EB     BL $+0x4279e0  // CALL → FieldGroup.ToString
		   0x010D1D4C:  0060A0E1     MOV r6, r0
		   0x010D1D50:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x010D1D54:  00009FE7     LDR r0, [pc, r0]
		   0x010D1D58:  000090E5     LDR r0, [r0]
		   0x010D1D5C:  9825FAEB     BL $-0x176998
		   0x010D1D60:  0610A0E1     MOV r1, r6
		   0x010D1D64:  0020A0E3     MOV r2, 0x0
		   0x010D1D68:  0050A0E1     MOV r5, r0
		   0x010D1D6C:  914801EB     BL $+0x5224c  // CALL → GameStateSave..ctor
		   0x010D1D70:  000055E3     CMPS r0, r5, 0x0
		   0x010D1D74:  3C5084E5     STR r5, [r4, 0x3c]
		   0x010D1D78:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1D80
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D1D7C:  9325FAEB     BL $-0x1769ac
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D1D80:  0500A0E1     MOV r0, r5
		   0x010D1D84:  0010A0E3     MOV r1, 0x0
		   0x010D1D88:  BB4801EB     BL $+0x522f4  // CALL → GameStateSave.Load
		   0x010D1D8C:  BA2A00EB     BL $+0xaaf0  // CALL → GameState.WaitForSendAppStart
		   0x010D1D90:  0010A0E1     MOV r1, r0
		   0x010D1D94:  0400A0E1     MOV r0, r4
		   0x010D1D98:  0020A0E3     MOV r2, 0x0
		   0x010D1D9C:  72983CEB     BL $+0xf261d0  // CALL → sub_1FF7F6C
		   0x010D1DA0:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x010D1DA4:  00009FE7     LDR r0, [pc, r0]
		   0x010D1DA8:  000090E5     LDR r0, [r0]
		   0x010D1DAC:  8425FAEB     BL $-0x1769e8
		   0x010D1DB0:  0050A0E1     MOV r5, r0
		   0x010D1DB4:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x010D1DB8:  0410A0E1     MOV r1, r4
		   0x010D1DBC:  0030A0E3     MOV r3, 0x0
		   0x010D1DC0:  00009FE7     LDR r0, [pc, r0]
		   0x010D1DC4:  002090E5     LDR r2, [r0]
		   0x010D1DC8:  0500A0E1     MOV r0, r5
		   0x010D1DCC:  4F4B53EB     BL $+0x14d2d44  // CALL → Action<Int32Enum>..ctor
		   0x010D1DD0:  0500A0E1     MOV r0, r5
		   0x010D1DD4:  0010A0E3     MOV r1, 0x0
		   0x010D1DD8:  1CDB00EB     BL $+0x36c78  // CALL → ContainerDataStorage.add_onEnergyConsumptionModeChanged
		   0x010D1DDC:  78929FE5     LDR sb, [pc, 0x278]
		   0x010D1DE0:  0120A0E3     MOV r2, 0x1
		   0x010D1DE4:  09909FE7     LDR sb, [pc, sb]
		   0x010D1DE8:  2C20C4E5     STRB r2, [r4, 0x2c]
		   0x010D1DEC:  000099E5     LDR r0, [sb]
		   0x010D1DF0:  741090E5     LDR r1, [r0, 0x74]
		   0x010D1DF4:  000051E3     CMPS r0, r1, 0x0
		   0x010D1DF8:  0100001A     BNE $+0xc  // if (!=) goto 0x010D1E04
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010D1DFC:  2425FAEB     BL $-0x176b68
		   0x010D1E00:  000099E5     LDR r0, [sb]
		   // ──── Block 16 if (!=) ────────────────────
		   0x010D1E04:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010D1E08:  50829FE5     LDR r8, [pc, 0x250]
		   0x010D1E0C:  08809FE7     LDR r8, [pc, r8]
		   0x010D1E10:  105091E5     LDR r5, [r1, 0x10]
		   0x010D1E14:  000098E5     LDR r0, [r8]
		   0x010D1E18:  6925FAEB     BL $-0x176a54
		   0x010D1E1C:  40729FE5     LDR r7, [pc, 0x240]
		   0x010D1E20:  0410A0E1     MOV r1, r4
		   0x010D1E24:  0030A0E3     MOV r3, 0x0
		   0x010D1E28:  0060A0E1     MOV r6, r0
		   0x010D1E2C:  07709FE7     LDR r7, [pc, r7]
		   0x010D1E30:  002097E5     LDR r2, [r7]
		   0x010D1E34:  426D7BEB     BL $+0x1edb510  // CALL → Action..ctor
		   0x010D1E38:  000055E3     CMPS r0, r5, 0x0
		   0x010D1E3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1E44
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010D1E40:  6225FAEB     BL $-0x176a70
		   // ──── Block 18 if (!=) ────────────────────
		   0x010D1E44:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x010D1E48:  0610A0E1     MOV r1, r6
		   0x010D1E4C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1E50:  002090E5     LDR r2, [r0]
		   0x010D1E54:  0500A0E1     MOV r0, r5
		   0x010D1E58:  413B60EB     BL $+0x180ed0c  // CALL → UnityEventsHelper.EventList<object>.Remove
		   0x010D1E5C:  000099E5     LDR r0, [sb]
		   0x010D1E60:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010D1E64:  000098E5     LDR r0, [r8]
		   0x010D1E68:  105091E5     LDR r5, [r1, 0x10]
		   0x010D1E6C:  5425FAEB     BL $-0x176aa8
		   0x010D1E70:  002097E5     LDR r2, [r7]
		   0x010D1E74:  0410A0E1     MOV r1, r4
		   0x010D1E78:  0030A0E3     MOV r3, 0x0
		   0x010D1E7C:  0060A0E1     MOV r6, r0
		   0x010D1E80:  2F6D7BEB     BL $+0x1edb4c4  // CALL → Action..ctor
		   0x010D1E84:  000055E3     CMPS r0, r5, 0x0
		   0x010D1E88:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1E90
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010D1E8C:  4F25FAEB     BL $-0x176abc
		   // ──── Block 20 if (!=) ────────────────────
		   0x010D1E90:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x010D1E94:  0610A0E1     MOV r1, r6
		   0x010D1E98:  0020A0E3     MOV r2, 0x0
		   0x010D1E9C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1EA0:  003090E5     LDR r3, [r0]
		   0x010D1EA4:  0500A0E1     MOV r0, r5
		   0x010D1EA8:  E53A60EB     BL $+0x180eb9c  // CALL → UnityEventsHelper.EventList<object>.Add
		   0x010D1EAC:  BC519FE5     LDR r5, [pc, 0x1bc]
		   0x010D1EB0:  0010A0E3     MOV r1, 0x0
		   0x010D1EB4:  05509FE7     LDR r5, [pc, r5]
		   0x010D1EB8:  000095E5     LDR r0, [r5]
		   0x010D1EBC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D1EC0:  000090E5     LDR r0, [r0]
		   0x010D1EC4:  9B4411EB     BL $+0x451274  // CALL → EnergyCounter.Init
		   0x010D1EC8:  000095E5     LDR r0, [r5]
		   0x010D1ECC:  785094E5     LDR r5, [r4, 0x78]
		   0x010D1ED0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D1ED4:  000055E3     CMPS r0, r5, 0x0
		   0x010D1ED8:  006090E5     LDR r6, [r0]
		   0x010D1EDC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1EE4
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010D1EE0:  3A25FAEB     BL $-0x176b10
		   // ──── Block 22 if (!=) ────────────────────
		   0x010D1EE4:  0500A0E1     MOV r0, r5
		   0x010D1EE8:  0610A0E1     MOV r1, r6
		   0x010D1EEC:  0420A0E1     MOV r2, r4
		   0x010D1EF0:  0030A0E3     MOV r3, 0x0
		   0x010D1EF4:  9F4702EB     BL $+0x91e84  // CALL → MergeCounter.Init
		   0x010D1EF8:  0000A0E3     MOV r0, 0x0
		   0x010D1EFC:  19A002EB     BL $+0xa806c  // CALL → ProfileStorage.get_numLevels
		   0x010D1F00:  08008DE5     STR r0, [sp, 0x8]
		   0x010D1F04:  08008DE2     ADD r0, sp, 0x8
		   0x010D1F08:  0010A0E3     MOV r1, 0x0
		   0x010D1F0C:  45C97DEB     BL $+0x1f7251c  // CALL → Int32.ToString
		   0x010D1F10:  0050A0E1     MOV r5, r0
		   0x010D1F14:  58019FE5     LDR r0, [pc, 0x158]
		   0x010D1F18:  00009FE7     LDR r0, [pc, r0]
		   0x010D1F1C:  000090E5     LDR r0, [r0]
		   0x010D1F20:  741090E5     LDR r1, [r0, 0x74]
		   0x010D1F24:  000051E3     CMPS r0, r1, 0x0
		   0x010D1F28:  0000001A     BNE $+0x8  // if (!=) goto 0x010D1F30
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010D1F2C:  D824FAEB     BL $-0x176c98
		   // ──── Block 24 if (!=) ────────────────────
		   0x010D1F30:  40019FE5     LDR r0, [pc, 0x140]
		   0x010D1F34:  0510A0E1     MOV r1, r5
		   0x010D1F38:  0020A0E3     MOV r2, 0x0
		   0x010D1F3C:  00009FE7     LDR r0, [pc, r0]
		   0x010D1F40:  000090E5     LDR r0, [r0]
		   0x010D1F44:  17FE0EEB     BL $+0x3bf864  // CALL → Analytics.AddParameter
		   0x010D1F48:  200094E5     LDR r0, [r4, 0x20]
		   0x010D1F4C:  000050E3     CMPS r0, r0, 0x0
		   0x010D1F50:  0300000A     BEQ $+0x14  // if (==) goto 0x010D1F64
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x010D1F54:  0C2090E5     LDR r2, [r0, 0xc]
		   0x010D1F58:  141090E5     LDR r1, [r0, 0x14]
		   0x010D1F5C:  200090E5     LDR r0, [r0, 0x20]
		   0x010D1F60:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 26 if (==) ────────────────────
		   0x010D1F64:  10019FE5     LDR r0, [pc, 0x110]
		   0x010D1F68:  00009FE7     LDR r0, [pc, r0]
		   0x010D1F6C:  000090E5     LDR r0, [r0]
		   0x010D1F70:  1325FAEB     BL $-0x176bac
		   0x010D1F74:  0050A0E1     MOV r5, r0
		   0x010D1F78:  00019FE5     LDR r0, [pc, 0x100]
		   0x010D1F7C:  0410A0E1     MOV r1, r4
		   0x010D1F80:  0030A0E3     MOV r3, 0x0
		   0x010D1F84:  00009FE7     LDR r0, [pc, r0]
		   0x010D1F88:  002090E5     LDR r2, [r0]
		   0x010D1F8C:  0500A0E1     MOV r0, r5
		   0x010D1F90:  AC5153EB     BL $+0x14d46b8  // CALL → Action<object>..ctor
		   0x010D1F94:  0400A0E1     MOV r0, r4
		   0x010D1F98:  0510A0E1     MOV r1, r5
		   0x010D1F9C:  C22500EB     BL $+0x9710  // CALL → GameState.add_itemAdded
		   0x010D1FA0:  000098E5     LDR r0, [r8]
		   0x010D1FA4:  0625FAEB     BL $-0x176be0
		   0x010D1FA8:  0050A0E1     MOV r5, r0
		   0x010D1FAC:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010D1FB0:  0410A0E1     MOV r1, r4
		   0x010D1FB4:  0030A0E3     MOV r3, 0x0
		   0x010D1FB8:  00009FE7     LDR r0, [pc, r0]
		   0x010D1FBC:  002090E5     LDR r2, [r0]
		   0x010D1FC0:  0500A0E1     MOV r0, r5
		   0x010D1FC4:  DE6C7BEB     BL $+0x1edb380  // CALL → Action..ctor
		   0x010D1FC8:  0500A0E1     MOV r0, r5
		   0x010D1FCC:  0010A0E3     MOV r1, 0x0
		   0x010D1FD0:  20B800EB     BL $+0x2e088  // CALL → GameScreensTranslator.add_onFieldShow
		   0x010D1FD4:  0CD08DE2     ADD sp, sp, 0xc
		   0x010D1FD8:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010D1FDC:  C4A11503     TSTSEQ r10, r5, 0x31
		   0x010D1FE0:  A073FA02     RSCSEQ r7, r10, 0x80000002
		   0x010D1FE4:  9873FA02     RSCSEQ r7, r10, 0x60000002
		   0x010D1FE8:  C44DFA02     RSCSEQ r4, r10, 0x3100
		   0x010D1FEC:  285BFA02     RSCSEQ r5, r10, 0xa000
		   0x010D1FF0:  C85EFA02     RSCSEQ r5, r10, 0xc80
		   0x010D1FF4:  4473FA02     RSCSEQ r7, r10, 0x10000001
		   0x010D1FF8:  B069FA02     RSCSEQ r6, r10, 0x2c0000
		   0x010D1FFC:  5473FA02     RSCSEQ r7, r10, 0x50000001
		   0x010D2000:  5C71FA02     RSCSEQ r7, r10, 0x17
		   0x010D2004:  4073FA02     RSCSEQ r7, r10, 0x1
		   0x010D2008:  3873FA02     RSCSEQ r7, r10, 0xe0000000
		   0x010D200C:  3073FA02     RSCSEQ r7, r10, 0xc0000000
		   0x010D2010:  2873FA02     RSCSEQ r7, r10, 0xa0000000
		   0x010D2014:  2073FA02     RSCSEQ r7, r10, 0x80000000
		   0x010D2018:  B46FFA02     RSCSEQ r6, r10, 0x2d0
		   0x010D201C:  0C73FA02     RSCSEQ r7, r10, 0x30000000
		   0x010D2020:  0473FA02     RSCSEQ r7, r10, 0x10000000
		   0x010D2024:  FC72FA02     RSCSEQ r7, r10, 0xc000000f
		   0x010D2028:  F472FA02     RSCSEQ r7, r10, 0x4000000f
		   0x010D202C:  645AFA02     RSCSEQ r5, r10, 0x64000
		   0x010D2030:  E072FA02     RSCSEQ r7, r10, 0xe
		   0x010D2034:  8C72FA02     RSCSEQ r7, r10, 0xc0000008
		   0x010D2038:  5872FA02     RSCSEQ r7, r10, 0x80000005
		   0x010D203C:  5472FA02     RSCSEQ r7, r10, 0x40000005
		   0x010D2040:  1C72FA02     RSCSEQ r7, r10, 0xc0000001
		   0x010D2044:  0072FA02     RSCSEQ r7, r10, 0x0
		   0x010D2048:  BC71FA02     RSCSEQ r7, r10, 0x2f
		   0x010D204C:  B867FA02     RSCSEQ r6, r10, 0x2e00000
		   0x010D2050:  506FFA02     RSCSEQ r6, r10, 0x140
		   0x010D2054:  E470FA02     RSCSEQ r7, r10, 0xe4
		   0x010D2058:  E470FA02     RSCSEQ r7, r10, 0xe4
		   0x010D205C:  4C58FA02     RSCSEQ r5, r10, 0x4c0000
		   0x010D2060:  B84AFA02     RSCSEQ r4, r10, 0xb8000
		   0x010D2064:  7070FA02     RSCSEQ r7, r10, 0x70
		   0x010D2068:  1C70FA02     RSCSEQ r7, r10, 0x1c
		   0x010D206C:  445BFA02     RSCSEQ r5, r10, 0x11000
		   0x010D2070:  906CFA02     RSCSEQ r6, r10, 0x9000
		   0x010D2074:  1C57FA02     RSCSEQ r5, r10, 0x700000
		   0x010D2078:  7C6FFA02     RSCSEQ r6, r10, 0x1f0
		   0x010D207C:  246FFA02     RSCSEQ r6, r10, 0x90
		   0x010D2080:  1C6FFA02     RSCSEQ r6, r10, 0x70
		   0x010D2084:  DC6EFA02     RSCSEQ r6, r10, 0xdc0
		*/
	}

	// RVA: 0x10DC8DC Offset: 0x10DC8DC VA: 0x10DC8DC
	public void FtueStorageCheck() {
		/* Disassembly (ARM32, 134 instructions, 0x218 bytes):
		   // CFG: 24 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DC8DC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010DC8E0:  D8419FE5     LDR r4, [pc, 0x1d8]
		   0x010DC8E4:  0090A0E1     MOV sb, r0
		   0x010DC8E8:  04408FE0     ADD r4, pc, r4
		   0x010DC8EC:  0000D4E5     LDRB r0, [r4]
		   0x010DC8F0:  000050E3     CMPS r0, r0, 0x0
		   0x010DC8F4:  1600001A     BNE $+0x60  // if (!=) goto 0x010DC954
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DC8F8:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x010DC8FC:  00009FE7     LDR r0, [pc, r0]
		   0x010DC900:  16FAF9EB     BL $-0x1817a0
		   0x010DC904:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x010DC908:  00009FE7     LDR r0, [pc, r0]
		   0x010DC90C:  13FAF9EB     BL $-0x1817ac
		   0x010DC910:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x010DC914:  00009FE7     LDR r0, [pc, r0]
		   0x010DC918:  10FAF9EB     BL $-0x1817b8
		   0x010DC91C:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x010DC920:  00009FE7     LDR r0, [pc, r0]
		   0x010DC924:  0DFAF9EB     BL $-0x1817c4
		   0x010DC928:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x010DC92C:  00009FE7     LDR r0, [pc, r0]
		   0x010DC930:  0AFAF9EB     BL $-0x1817d0
		   0x010DC934:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x010DC938:  00009FE7     LDR r0, [pc, r0]
		   0x010DC93C:  07FAF9EB     BL $-0x1817dc
		   0x010DC940:  94019FE5     LDR r0, [pc, 0x194]
		   0x010DC944:  00009FE7     LDR r0, [pc, r0]
		   0x010DC948:  04FAF9EB     BL $-0x1817e8
		   0x010DC94C:  0100A0E3     MOV r0, 0x1
		   0x010DC950:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DC954:  84819FE5     LDR r8, [pc, 0x184]
		   0x010DC958:  08809FE7     LDR r8, [pc, r8]
		   0x010DC95C:  000098E5     LDR r0, [r8]
		   0x010DC960:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DC964:  085090E5     LDR r5, [r0, 0x8]
		   0x010DC968:  000055E3     CMPS r0, r5, 0x0
		   0x010DC96C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DC974
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DC970:  96FAF9EB     BL $-0x1815a0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DC974:  0500A0E1     MOV r0, r5
		   0x010DC978:  0F10A0E3     MOV r1, 0xf
		   0x010DC97C:  0020A0E3     MOV r2, 0x0
		   0x010DC980:  958311EB     BL $+0x460e5c  // CALL → FTUEStorage.IsReadyToShow
		   0x010DC984:  000050E3     CMPS r0, r0, 0x0
		   0x010DC988:  4B00000A     BEQ $+0x134  // if (==) goto 0x010DCABC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010DC98C:  50419FE5     LDR r4, [pc, 0x150]
		   0x010DC990:  04409FE7     LDR r4, [pc, r4]
		   0x010DC994:  405099E5     LDR r5, [sb, 0x40]
		   0x010DC998:  000094E5     LDR r0, [r4]
		   0x010DC99C:  741090E5     LDR r1, [r0, 0x74]
		   0x010DC9A0:  000051E3     CMPS r0, r1, 0x0
		   0x010DC9A4:  0100001A     BNE $+0xc  // if (!=) goto 0x010DC9B0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010DC9A8:  39FAF9EB     BL $-0x181714
		   0x010DC9AC:  000094E5     LDR r0, [r4]
		   // ──── Block 7 if (!=) ────────────────────
		   0x010DC9B0:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010DC9B4:  046091E5     LDR r6, [r1, 0x4]
		   0x010DC9B8:  000056E3     CMPS r0, r6, 0x0
		   0x010DC9BC:  1500001A     BNE $+0x5c  // if (!=) goto 0x010DCA18
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010DC9C0:  742090E5     LDR r2, [r0, 0x74]
		   0x010DC9C4:  000052E3     CMPS r0, r2, 0x0
		   0x010DC9C8:  0200001A     BNE $+0x10  // if (!=) goto 0x010DC9D8
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010DC9CC:  30FAF9EB     BL $-0x181738
		   0x010DC9D0:  000094E5     LDR r0, [r4]
		   0x010DC9D4:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 10 if (!=) ────────────────────
		   0x010DC9D8:  08019FE5     LDR r0, [pc, 0x108]
		   0x010DC9DC:  00009FE7     LDR r0, [pc, r0]
		   0x010DC9E0:  007091E5     LDR r7, [r1]
		   0x010DC9E4:  000090E5     LDR r0, [r0]
		   0x010DC9E8:  75FAF9EB     BL $-0x181624
		   0x010DC9EC:  0060A0E1     MOV r6, r0
		   0x010DC9F0:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x010DC9F4:  0710A0E1     MOV r1, r7
		   0x010DC9F8:  0030A0E3     MOV r3, 0x0
		   0x010DC9FC:  00009FE7     LDR r0, [pc, r0]
		   0x010DCA00:  002090E5     LDR r2, [r0]
		   0x010DCA04:  0600A0E1     MOV r0, r6
		   0x010DCA08:  095D61EB     BL $+0x185742c  // CALL → Func<object, bool>..ctor
		   0x010DCA0C:  000094E5     LDR r0, [r4]
		   0x010DCA10:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DCA14:  046080E5     STR r6, [r0, 0x4]
		   // ──── Block 11 if (!=) ────────────────────
		   0x010DCA18:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010DCA1C:  0610A0E1     MOV r1, r6
		   0x010DCA20:  00009FE7     LDR r0, [pc, r0]
		   0x010DCA24:  002090E5     LDR r2, [r0]
		   0x010DCA28:  0500A0E1     MOV r0, r5
		   0x010DCA2C:  1A5A22EB     BL $+0x896870  // CALL → ExtensionMethods.FindAllElements<object>
		   0x010DCA30:  0050A0E1     MOV r5, r0
		   0x010DCA34:  000050E3     CMPS r0, r0, 0x0
		   0x010DCA38:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCA40
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010DCA3C:  63FAF9EB     BL $-0x18166c
		   // ──── Block 13 if (!=) ────────────────────
		   0x010DCA40:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010DCA44:  000050E3     CMPS r0, r0, 0x0
		   0x010DCA48:  1B00001A     BNE $+0x74  // if (!=) goto 0x010DCABC
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010DCA4C:  3C5099E5     LDR r5, [sb, 0x3c]
		   0x010DCA50:  000055E3     CMPS r0, r5, 0x0
		   0x010DCA54:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCA5C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010DCA58:  5CFAF9EB     BL $-0x181688
		   // ──── Block 16 if (!=) ────────────────────
		   0x010DCA5C:  0500A0E1     MOV r0, r5
		   0x010DCA60:  0010A0E3     MOV r1, 0x0
		   0x010DCA64:  081F01EB     BL $+0x47c28  // CALL → GameStateSave.get_Inventory
		   0x010DCA68:  0050A0E1     MOV r5, r0
		   0x010DCA6C:  000050E3     CMPS r0, r0, 0x0
		   0x010DCA70:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCA78
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010DCA74:  55FAF9EB     BL $-0x1816a4
		   // ──── Block 18 if (!=) ────────────────────
		   0x010DCA78:  0000A0E3     MOV r0, 0x0
		   0x010DCA7C:  0C4095E5     LDR r4, [r5, 0xc]  // vtable: Object.Equals
		   0x010DCA80:  217802EB     BL $+0x9e08c  // CALL → ProfileStorage.get_inventoryCapacity
		   0x010DCA84:  000054E1     CMPS r0, r4, r0
		   0x010DCA88:  0B0000AA     BGE $+0x34  // if (>=) goto 0x010DCABC
		   // 
		   // ──── Block 19 else (<) ────────────────────
		   0x010DCA8C:  000098E5     LDR r0, [r8]
		   0x010DCA90:  404099E5     LDR r4, [sb, 0x40]
		   0x010DCA94:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DCA98:  085090E5     LDR r5, [r0, 0x8]
		   0x010DCA9C:  000055E3     CMPS r0, r5, 0x0
		   0x010DCAA0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCAA8
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010DCAA4:  49FAF9EB     BL $-0x1816d4
		   // ──── Block 21 if (!=) ────────────────────
		   0x010DCAA8:  0500A0E1     MOV r0, r5
		   0x010DCAAC:  0410A0E1     MOV r1, r4
		   0x010DCAB0:  0020A0E3     MOV r2, 0x0
		   0x010DCAB4:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010DCAB8:  DC8311EA     B $+0x460f78  // TAIL CALL → FTUEStorage.Init
		   // ──── Block 22 (from 3 paths) ──────────────────
		   0x010DCABC:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010DCAC0:  99F31403     TSTSEQ pc, r4, 0x64000002
		   0x010DCAC4:  88C7F902     RSCSEQ ip, sb, 0x2200000
		   0x010DCAC8:  DCC5F902     RSCSEQ ip, sb, 0x37000000
		   0x010DCACC:  74C7F902     RSCSEQ ip, sb, 0x1d00000
		   0x010DCAD0:  6CC7F902     RSCSEQ ip, sb, 0x1b00000
		   0x010DCAD4:  64C7F902     RSCSEQ ip, sb, 0x1900000
		   0x010DCAD8:  5CC7F902     RSCSEQ ip, sb, 0x1700000
		   0x010DCADC:  C0C6F902     RSCSEQ ip, sb, 0xc000000
		   0x010DCAE0:  8CC5F902     RSCSEQ ip, sb, 0x23000000
		   0x010DCAE4:  74C6F902     RSCSEQ ip, sb, 0x7400000
		   0x010DCAE8:  ACC6F902     RSCSEQ ip, sb, 0xac00000
		   0x010DCAEC:  98C6F902     RSCSEQ ip, sb, 0x9800000
		   0x010DCAF0:  64C6F902     RSCSEQ ip, sb, 0x6400000
		*/
	}

	// RVA: 0x10DCAF4 Offset: 0x10DCAF4 VA: 0x10DCAF4
	private void OnUnpause() {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DCAF4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010DCAF8:  18D04DE2     SUB sp, sp, 0x18
		   0x010DCAFC:  34519FE5     LDR r5, [pc, 0x134]
		   0x010DCB00:  0040A0E1     MOV r4, r0
		   0x010DCB04:  05508FE0     ADD r5, pc, r5
		   0x010DCB08:  0000D5E5     LDRB r0, [r5]
		   0x010DCB0C:  000050E3     CMPS r0, r0, 0x0
		   0x010DCB10:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010DCB4C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DCB14:  20019FE5     LDR r0, [pc, 0x120]
		   0x010DCB18:  00009FE7     LDR r0, [pc, r0]
		   0x010DCB1C:  8FF9F9EB     BL $-0x1819bc
		   0x010DCB20:  18019FE5     LDR r0, [pc, 0x118]
		   0x010DCB24:  00009FE7     LDR r0, [pc, r0]
		   0x010DCB28:  8CF9F9EB     BL $-0x1819c8
		   0x010DCB2C:  10019FE5     LDR r0, [pc, 0x110]
		   0x010DCB30:  00009FE7     LDR r0, [pc, r0]
		   0x010DCB34:  89F9F9EB     BL $-0x1819d4
		   0x010DCB38:  08019FE5     LDR r0, [pc, 0x108]
		   0x010DCB3C:  00009FE7     LDR r0, [pc, r0]
		   0x010DCB40:  86F9F9EB     BL $-0x1819e0
		   0x010DCB44:  0100A0E3     MOV r0, 0x1
		   0x010DCB48:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DCB4C:  545094E5     LDR r5, [r4, 0x54]
		*/
	}

	// RVA: 0x10DCC5C Offset: 0x10DCC5C VA: 0x10DCC5C
	public List<ItemObject> GetAllItemsObjects() {
		/* Disassembly (ARM32, 73 instructions, 0x124 bytes):
		   // CFG: 9 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DCC5C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010DCC60:  EC509FE5     LDR r5, [pc, 0xec]
		   0x010DCC64:  0040A0E1     MOV r4, r0
		   0x010DCC68:  05508FE0     ADD r5, pc, r5
		   0x010DCC6C:  0000D5E5     LDRB r0, [r5]
		   0x010DCC70:  000050E3     CMPS r0, r0, 0x0
		   0x010DCC74:  1000001A     BNE $+0x48  // if (!=) goto 0x010DCCBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DCC78:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010DCC7C:  00009FE7     LDR r0, [pc, r0]
		   0x010DCC80:  36F9F9EB     BL $-0x181b20
		   0x010DCC84:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010DCC88:  00009FE7     LDR r0, [pc, r0]
		   0x010DCC8C:  33F9F9EB     BL $-0x181b2c
		   0x010DCC90:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010DCC94:  00009FE7     LDR r0, [pc, r0]
		   0x010DCC98:  30F9F9EB     BL $-0x181b38
		   0x010DCC9C:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010DCCA0:  00009FE7     LDR r0, [pc, r0]
		   0x010DCCA4:  2DF9F9EB     BL $-0x181b44
		   0x010DCCA8:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010DCCAC:  00009FE7     LDR r0, [pc, r0]
		   0x010DCCB0:  2AF9F9EB     BL $-0x181b50
		   0x010DCCB4:  0100A0E3     MOV r0, 0x1
		   0x010DCCB8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DCCBC:  2C00D4E5     LDRB r0, [r4, 0x2c]
		   0x010DCCC0:  000050E3     CMPS r0, r0, 0x0
		   0x010DCCC4:  0100000A     BEQ $+0xc  // if (==) goto 0x010DCCD0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DCCC8:  504094E5     LDR r4, [r4, 0x50]
		   0x010DCCCC:  1E0000EA     B $+0x80  // goto 0x010DCD4C
		   // ──── Block 4 if (==) ────────────────────
		   0x010DCCD0:  94009FE5     LDR r0, [pc, 0x94]
		   0x010DCCD4:  00009FE7     LDR r0, [pc, r0]
		   0x010DCCD8:  000090E5     LDR r0, [r0]
		   0x010DCCDC:  B8F9F9EB     BL $-0x181918
		   0x010DCCE0:  0040A0E1     MOV r4, r0
		   0x010DCCE4:  84009FE5     LDR r0, [pc, 0x84]
		   0x010DCCE8:  0020A0E3     MOV r2, 0x0
		   0x010DCCEC:  00009FE7     LDR r0, [pc, r0]
		   0x010DCCF0:  001090E5     LDR r1, [r0]
		   0x010DCCF4:  0400A0E1     MOV r0, r4
		   0x010DCCF8:  CFB07EEB     BL $+0x1fac344  // CALL → Exception..ctor
		   0x010DCCFC:  70009FE5     LDR r0, [pc, 0x70]
		   0x010DCD00:  00009FE7     LDR r0, [pc, r0]
		   0x010DCD04:  000090E5     LDR r0, [r0]
		   0x010DCD08:  741090E5     LDR r1, [r0, 0x74]
		   0x010DCD0C:  000051E3     CMPS r0, r1, 0x0
		   0x010DCD10:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCD18
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DCD14:  5EF9F9EB     BL $-0x181a80
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DCD18:  0400A0E1     MOV r0, r4
		   0x010DCD1C:  0010A0E3     MOV r1, 0x0
		   0x010DCD20:  196D3CEB     BL $+0xf1b46c  // CALL → sub_1FF818C
		   0x010DCD24:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010DCD28:  00009FE7     LDR r0, [pc, r0]
		   0x010DCD2C:  000090E5     LDR r0, [r0]
		   0x010DCD30:  A3F9F9EB     BL $-0x18196c
		   0x010DCD34:  0040A0E1     MOV r4, r0
		   0x010DCD38:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010DCD3C:  00009FE7     LDR r0, [pc, r0]
		   0x010DCD40:  001090E5     LDR r1, [r0]
		   0x010DCD44:  0400A0E1     MOV r0, r4
		   0x010DCD48:  98556CEB     BL $+0x1b15668  // CALL → List<object>..ctor
		   // ──── Block 7 ──────────────────────────────
		   0x010DCD4C:  0400A0E1     MOV r0, r4
		   0x010DCD50:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010DCD54:  1BF01403     TSTSEQ pc, r4, 0x1b
		   0x010DCD58:  0C99F902     RSCSEQ sb, sb, 0x30000
		   0x010DCD5C:  649CF902     RSCSEQ sb, sb, 0x6400
		   0x010DCD60:  DCBFF902     RSCSEQ fp, sb, 0x370
		   0x010DCD64:  D4BFF902     RSCSEQ fp, sb, 0x350
		   0x010DCD68:  FCC3F902     RSCSEQ ip, sb, 0xf0000003
		   0x010DCD6C:  189CF902     RSCSEQ sb, sb, 0x1800
		   0x010DCD70:  BCC3F902     RSCSEQ ip, sb, 0xf0000002
		   0x010DCD74:  8898F902     RSCSEQ sb, sb, 0x880000
		   0x010DCD78:  4CBFF902     RSCSEQ fp, sb, 0x130
		   0x010DCD7C:  34BFF902     RSCSEQ fp, sb, 0xd0
		*/
	}

	// RVA: 0x10DCD80 Offset: 0x10DCD80 VA: 0x10DCD80
	public Item GetSimilarUnchargedItem(Item item) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DCD80:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010DCD84:  D4609FE5     LDR r6, [pc, 0xd4]
		   0x010DCD88:  0050A0E1     MOV r5, r0
		   0x010DCD8C:  0140A0E1     MOV r4, r1
		   0x010DCD90:  06608FE0     ADD r6, pc, r6
		   0x010DCD94:  0000D6E5     LDRB r0, [r6]
		   0x010DCD98:  000050E3     CMPS r0, r0, 0x0
		   0x010DCD9C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010DCDD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DCDA0:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010DCDA4:  00009FE7     LDR r0, [pc, r0]
		   0x010DCDA8:  ECF8F9EB     BL $-0x181c48
		   0x010DCDAC:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010DCDB0:  00009FE7     LDR r0, [pc, r0]
		   0x010DCDB4:  E9F8F9EB     BL $-0x181c54
		   0x010DCDB8:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010DCDBC:  00009FE7     LDR r0, [pc, r0]
		   0x010DCDC0:  E6F8F9EB     BL $-0x181c60
		   0x010DCDC4:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x010DCDC8:  00009FE7     LDR r0, [pc, r0]
		   0x010DCDCC:  E3F8F9EB     BL $-0x181c6c
		   0x010DCDD0:  0100A0E3     MOV r0, 0x1
		   0x010DCDD4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DCDD8:  94009FE5     LDR r0, [pc, 0x94]
		   0x010DCDDC:  00009FE7     LDR r0, [pc, r0]
		   0x010DCDE0:  000090E5     LDR r0, [r0]
		   0x010DCDE4:  76F9F9EB     BL $-0x181a20
		   0x010DCDE8:  0010A0E3     MOV r1, 0x0
		   0x010DCDEC:  0060A0E1     MOV r6, r0
		   0x010DCDF0:  4D4A00EB     BL $+0x1293c  // CALL → <>c__DisplayClass76_0..ctor
		   0x010DCDF4:  000056E3     CMPS r0, r6, 0x0
		   0x010DCDF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCE00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DCDFC:  73F9F9EB     BL $-0x181a2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DCE00:  70009FE5     LDR r0, [pc, 0x70]
		   0x010DCE04:  00009FE7     LDR r0, [pc, r0]
		   0x010DCE08:  545095E5     LDR r5, [r5, 0x54]
		   0x010DCE0C:  084086E5     STR r4, [r6, 0x8]
		   0x010DCE10:  000090E5     LDR r0, [r0]
		   0x010DCE14:  6AF9F9EB     BL $-0x181a50
		   0x010DCE18:  0040A0E1     MOV r4, r0
		   0x010DCE1C:  58009FE5     LDR r0, [pc, 0x58]
		   0x010DCE20:  0610A0E1     MOV r1, r6
		   0x010DCE24:  0030A0E3     MOV r3, 0x0
		   0x010DCE28:  00009FE7     LDR r0, [pc, r0]
		   0x010DCE2C:  002090E5     LDR r2, [r0]
		   0x010DCE30:  0400A0E1     MOV r0, r4
		   0x010DCE34:  13C433EB     BL $+0xcf1054  // CALL → Predicate<object>..ctor
		   0x010DCE38:  000055E3     CMPS r0, r5, 0x0
		   0x010DCE3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DCE44
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DCE40:  62F9F9EB     BL $-0x181a70
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DCE44:  34009FE5     LDR r0, [pc, 0x34]
		   0x010DCE48:  0410A0E1     MOV r1, r4
		   0x010DCE4C:  00009FE7     LDR r0, [pc, r0]
		   0x010DCE50:  002090E5     LDR r2, [r0]
		   0x010DCE54:  0500A0E1     MOV r0, r5
		   0x010DCE58:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010DCE5C:  09596CEA     B $+0x1b1642c  // TAIL CALL → List<object>.Find
		   0x010DCE60:  F4EE1403     TSTSEQ lr, r4, 0xf40
		   0x010DCE64:  08C3F902     RSCSEQ ip, sb, 0x20000000
		   0x010DCE68:  00C3F902     RSCSEQ ip, sb, 0x0
		   0x010DCE6C:  F8C2F902     RSCSEQ ip, sb, 0x8000000f
		   0x010DCE70:  F0C2F902     RSCSEQ ip, sb, 0xf
		   0x010DCE74:  DCC2F902     RSCSEQ ip, sb, 0xc000000d
		   0x010DCE78:  ACC2F902     RSCSEQ ip, sb, 0xc000000a
		   0x010DCE7C:  8CC2F902     RSCSEQ ip, sb, 0xc0000008
		   0x010DCE80:  60C2F902     RSCSEQ ip, sb, 0x6
		*/
	}

	// RVA: 0x10DCE84 Offset: 0x10DCE84 VA: 0x10DCE84
	public void SetCells(object[] newCells) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DCE84:  401080E5     STR r1, [r0, 0x40]
		   0x010DCE88:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10DCE8C Offset: 0x10DCE8C VA: 0x10DCE8C
	public void SetBubblesPauseState(bool paused) {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DCE8C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010DCE90:  20D04DE2     SUB sp, sp, 0x20
		   0x010DCE94:  D0419FE5     LDR r4, [pc, 0x1d0]
		   0x010DCE98:  0050A0E1     MOV r5, r0
		   0x010DCE9C:  0180A0E1     MOV r8, r1
		   0x010DCEA0:  04408FE0     ADD r4, pc, r4
		   0x010DCEA4:  0000D4E5     LDRB r0, [r4]
		   0x010DCEA8:  000050E3     CMPS r0, r0, 0x0
		   0x010DCEAC:  1000001A     BNE $+0x48  // if (!=) goto 0x010DCEF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DCEB0:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x010DCEB4:  00009FE7     LDR r0, [pc, r0]
		   0x010DCEB8:  A8F8F9EB     BL $-0x181d58
		   0x010DCEBC:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x010DCEC0:  00009FE7     LDR r0, [pc, r0]
		   0x010DCEC4:  A5F8F9EB     BL $-0x181d64
		   0x010DCEC8:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x010DCECC:  00009FE7     LDR r0, [pc, r0]
		   0x010DCED0:  A2F8F9EB     BL $-0x181d70
		   0x010DCED4:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x010DCED8:  00009FE7     LDR r0, [pc, r0]
		   0x010DCEDC:  9FF8F9EB     BL $-0x181d7c
		   0x010DCEE0:  98019FE5     LDR r0, [pc, 0x198]
		   0x010DCEE4:  00009FE7     LDR r0, [pc, r0]
		   0x010DCEE8:  9CF8F9EB     BL $-0x181d88
		   0x010DCEEC:  0100A0E3     MOV r0, 0x1
		   0x010DCEF0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DCEF4:  546095E5     LDR r6, [r5, 0x54]
		*/
	}

	// RVA: 0x10DA0C0 Offset: 0x10DA0C0 VA: 0x10DA0C0
	public GameStateSave SetGameStateAndLoadField(string questId, Action RemoveWrongItems) {
		/* Disassembly (ARM32, 114 instructions, 0x1C8 bytes):
		   // CFG: 20 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA0C0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010DA0C4:  98719FE5     LDR r7, [pc, 0x198]
		   0x010DA0C8:  0040A0E1     MOV r4, r0
		   0x010DA0CC:  0260A0E1     MOV r6, r2
		   0x010DA0D0:  0150A0E1     MOV r5, r1
		   0x010DA0D4:  07708FE0     ADD r7, pc, r7
		   0x010DA0D8:  0000D7E5     LDRB r0, [r7]
		   0x010DA0DC:  000050E3     CMPS r0, r0, 0x0
		   0x010DA0E0:  0400001A     BNE $+0x18  // if (!=) goto 0x010DA0F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA0E4:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010DA0E8:  00009FE7     LDR r0, [pc, r0]
		   0x010DA0EC:  1B04FAEB     BL $-0x17ef8c
		   0x010DA0F0:  0100A0E3     MOV r0, 0x1
		   0x010DA0F4:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA0F8:  0400A0E1     MOV r0, r4
		   0x010DA0FC:  5E1C00EB     BL $+0x7180  // CALL → GameState.DestroyItemsFromField
		   0x010DA100:  64719FE5     LDR r7, [pc, 0x164]
		   0x010DA104:  07708FE0     ADD r7, pc, r7
		   0x010DA108:  0000D7E5     LDRB r0, [r7]
		   0x010DA10C:  000050E3     CMPS r0, r0, 0x0
		   0x010DA110:  0400001A     BNE $+0x18  // if (!=) goto 0x010DA128
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DA114:  54019FE5     LDR r0, [pc, 0x154]
		   0x010DA118:  00009FE7     LDR r0, [pc, r0]
		   0x010DA11C:  0F04FAEB     BL $-0x17efbc
		   0x010DA120:  0100A0E3     MOV r0, 0x1
		   0x010DA124:  0000C7E5     STRB r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DA128:  44019FE5     LDR r0, [pc, 0x144]
		   0x010DA12C:  00009FE7     LDR r0, [pc, r0]
		   0x010DA130:  000090E5     LDR r0, [r0]
		   0x010DA134:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DA138:  005080E5     STR r5, [r0]
		   0x010DA13C:  34019FE5     LDR r0, [pc, 0x134]
		   0x010DA140:  00009FE7     LDR r0, [pc, r0]
		   0x010DA144:  000090E5     LDR r0, [r0]
		   0x010DA148:  9D04FAEB     BL $-0x17ed84
		   0x010DA14C:  0510A0E1     MOV r1, r5
		   0x010DA150:  0020A0E3     MOV r2, 0x0
		   0x010DA154:  0070A0E1     MOV r7, r0
		   0x010DA158:  962701EB     BL $+0x49e60  // CALL → GameStateSave..ctor
		   0x010DA15C:  000057E3     CMPS r0, r7, 0x0
		   0x010DA160:  3C7084E5     STR r7, [r4, 0x3c]
		   0x010DA164:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA16C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DA168:  9804FAEB     BL $-0x17ed98
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DA16C:  0700A0E1     MOV r0, r7
		   0x010DA170:  0010A0E3     MOV r1, 0x0
		   0x010DA174:  C02701EB     BL $+0x49f08  // CALL → GameStateSave.Load
		   0x010DA178:  3C7094E5     LDR r7, [r4, 0x3c]
		   0x010DA17C:  000057E3     CMPS r0, r7, 0x0
		   0x010DA180:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA188
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010DA184:  9104FAEB     BL $-0x17edb4
		   // ──── Block 8 if (!=) ────────────────────
		   0x010DA188:  0700A0E1     MOV r0, r7
		   0x010DA18C:  0010A0E3     MOV r1, 0x0
		   0x010DA190:  647B01EB     BL $+0x5ed98  // CALL → GameStateSave.get_isEmpty
		   0x010DA194:  000050E3     CMPS r0, r0, 0x0
		   0x010DA198:  0800001A     BNE $+0x28  // if (!=) goto 0x010DA1C0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010DA19C:  000056E3     CMPS r0, r6, 0x0
		   0x010DA1A0:  0300000A     BEQ $+0x14  // if (==) goto 0x010DA1B4
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010DA1A4:  0C2096E5     LDR r2, [r6, 0xc]
		   0x010DA1A8:  141096E5     LDR r1, [r6, 0x14]
		   0x010DA1AC:  200096E5     LDR r0, [r6, 0x20]
		   0x010DA1B0:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 11 if (==) ────────────────────
		   0x010DA1B4:  3C1094E5     LDR r1, [r4, 0x3c]
		   0x010DA1B8:  0400A0E1     MOV r0, r4
		   0x010DA1BC:  B60B00EB     BL $+0x2ee0  // CALL → GameState.CreateField
		   // ──── Block 12 if (!=) ────────────────────
		   0x010DA1C0:  0500A0E1     MOV r0, r5
		   0x010DA1C4:  0010A0E3     MOV r1, 0x0
		   0x010DA1C8:  36C50AEB     BL $+0x2b14e0  // CALL → ObsoleteDataCleaner.StartCleaning
		   0x010DA1CC:  3C0094E5     LDR r0, [r4, 0x3c]
		   0x010DA1D0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010DA1D4:  010051E3     CMPS r0, r1, 0x1
		   0x010DA1D8:  1F00001A     BNE $+0x84  // if (!=) goto 0x010DA25C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010DA1DC:  392AFDEB     BL $-0xb5714
		   0x010DA1E0:  0050A0E1     MOV r5, r0
		   0x010DA1E4:  90009FE5     LDR r0, [pc, 0x90]
		   0x010DA1E8:  00009FE7     LDR r0, [pc, r0]
		   0x010DA1EC:  DF03FAEB     BL $-0x17f07c
		   0x010DA1F0:  001095E5     LDR r1, [r5]
		   0x010DA1F4:  001091E5     LDR r1, [r1]
		   0x010DA1F8:  9005FAEB     BL $-0x17e9b8
		   0x010DA1FC:  000050E3     CMPS r0, r0, 0x0
		   0x010DA200:  0C00000A     BEQ $+0x38  // if (==) goto 0x010DA238
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x010DA204:  005095E5     LDR r5, [r5]
		   0x010DA208:  622AFDEB     BL $-0xb5670
		   0x010DA20C:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010DA210:  00009FE7     LDR r0, [pc, r0]
		   0x010DA214:  D503FAEB     BL $-0x17f0a4
		   0x010DA218:  741090E5     LDR r1, [r0, 0x74]
		   0x010DA21C:  000051E3     CMPS r0, r1, 0x0
		   0x010DA220:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA228
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010DA224:  1A04FAEB     BL $-0x17ef90
		   // ──── Block 17 if (!=) ────────────────────
		   0x010DA228:  0500A0E1     MOV r0, r5
		   0x010DA22C:  0010A0E3     MOV r1, 0x0
		   0x010DA230:  D5773CEB     BL $+0xf1df5c  // CALL → sub_1FF818C
		   0x010DA234:  E4FFFFEA     B $-0x68
		   // ──── Block 18 if (==) ────────────────────
		   0x010DA238:  0400A0E3     MOV r0, 0x4
		   0x010DA23C:  BA36FDEB     BL $-0xb2510
		   0x010DA240:  002095E5     LDR r2, [r5]
		   0x010DA244:  38109FE5     LDR r1, [pc, 0x38]
		   0x010DA248:  002080E5     STR r2, [r0]
		   0x010DA24C:  01108FE0     ADD r1, pc, r1
		   0x010DA250:  0020A0E3     MOV r2, 0x0
		   0x010DA254:  B836FDEB     BL $-0xb2518
		   0x010DA258:  4E2AFDEB     BL $-0xb56c0
		   // ──── Block 19 if (!=) ────────────────────
		   0x010DA25C:  512AFDEB     BL $-0xb56b4
		   0x010DA260:  4FD6EDEB     BL $-0x48a6bc
		   0x010DA264:  B21B1503     TSTSEQ r1, r5, 0x2c800
		   0x010DA268:  BCEBF902     RSCSEQ lr, sb, 0x2f000
		   0x010DA26C:  DA1B1503     TSTSEQ r1, r5, 0x36800
		   0x010DA270:  FCEEF902     RSCSEQ lr, sb, 0xfc0
		   0x010DA274:  E8EEF902     RSCSEQ lr, sb, 0xe80
		   0x010DA278:  64EBF902     RSCSEQ lr, sb, 0x19000
		   0x010DA27C:  04C7F902     RSCSEQ ip, sb, 0x100000
		   0x010DA280:  78C3F902     RSCSEQ ip, sb, 0xe0000001
		   0x010DA284:  10EEE402     RSCEQ lr, r4, 0x100
		*/
	}

	// RVA: 0x10DA2E8 Offset: 0x10DA2E8 VA: 0x10DA2E8
	public GameStateSave SetGameStateAndLoadSeasonField(FieldGroup fieldGroup) {
		/* Disassembly (ARM32, 75 instructions, 0x12C bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA2E8:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010DA2EC:  FC609FE5     LDR r6, [pc, 0xfc]
		   0x010DA2F0:  0040A0E1     MOV r4, r0
		   0x010DA2F4:  0390A0E1     MOV sb, r3
		   0x010DA2F8:  0280A0E1     MOV r8, r2
		   0x010DA2FC:  06608FE0     ADD r6, pc, r6
		   0x010DA300:  0150A0E1     MOV r5, r1
		   0x010DA304:  0000D6E5     LDRB r0, [r6]
		   0x010DA308:  000050E3     CMPS r0, r0, 0x0
		   0x010DA30C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010DA348
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA310:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010DA314:  00009FE7     LDR r0, [pc, r0]
		   0x010DA318:  9003FAEB     BL $-0x17f1b8
		   0x010DA31C:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x010DA320:  00009FE7     LDR r0, [pc, r0]
		   0x010DA324:  8D03FAEB     BL $-0x17f1c4
		   0x010DA328:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010DA32C:  00009FE7     LDR r0, [pc, r0]
		   0x010DA330:  8A03FAEB     BL $-0x17f1d0
		   0x010DA334:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x010DA338:  00009FE7     LDR r0, [pc, r0]
		   0x010DA33C:  8703FAEB     BL $-0x17f1dc
		   0x010DA340:  0100A0E3     MOV r0, 0x1
		   0x010DA344:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA348:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010DA34C:  00009FE7     LDR r0, [pc, r0]
		   0x010DA350:  000090E5     LDR r0, [r0]
		   0x010DA354:  1A04FAEB     BL $-0x17ef90
		   0x010DA358:  0010A0E3     MOV r1, 0x0
		   0x010DA35C:  0060A0E1     MOV r6, r0
		   0x010DA360:  6F5500EB     BL $+0x155c4  // CALL → <>c__DisplayClass80_0..ctor
		   0x010DA364:  000056E3     CMPS r0, r6, 0x0
		   0x010DA368:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA370
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DA36C:  1704FAEB     BL $-0x17ef9c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DA370:  90009FE5     LDR r0, [pc, 0x90]
		   0x010DA374:  0670A0E1     MOV r7, r6
		   0x010DA378:  00009FE7     LDR r0, [pc, r0]
		   0x010DA37C:  0C50A7E5     STR r5, [r7, 0xc]!
		   0x010DA380:  000090E5     LDR r0, [r0]
		   0x010DA384:  F480C7E1     STRD r8, sb, [r7, 0x4]
		   0x010DA388:  044007E5     STR r4, [r7, -0x4]
		   0x010DA38C:  741090E5     LDR r1, [r0, 0x74]
		   0x010DA390:  000051E3     CMPS r0, r1, 0x0
		   0x010DA394:  0000001A     BNE $+0x8  // if (!=) goto 0x010DA39C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DA398:  BD03FAEB     BL $-0x17f104
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DA39C:  0700A0E1     MOV r0, r7
		   0x010DA3A0:  0010A0E3     MOV r1, 0x0
		   0x010DA3A4:  DF7C10EB     BL $+0x41f384  // CALL → FieldGroup.ToString
		   0x010DA3A8:  0050A0E1     MOV r5, r0
		   0x010DA3AC:  58009FE5     LDR r0, [pc, 0x58]
		   0x010DA3B0:  00009FE7     LDR r0, [pc, r0]
		   0x010DA3B4:  000090E5     LDR r0, [r0]
		   0x010DA3B8:  0104FAEB     BL $-0x17eff4
		   0x010DA3BC:  0070A0E1     MOV r7, r0
		   0x010DA3C0:  48009FE5     LDR r0, [pc, 0x48]
		   0x010DA3C4:  0610A0E1     MOV r1, r6
		   0x010DA3C8:  0030A0E3     MOV r3, 0x0
		   0x010DA3CC:  00009FE7     LDR r0, [pc, r0]
		   0x010DA3D0:  002090E5     LDR r2, [r0]
		   0x010DA3D4:  0700A0E1     MOV r0, r7
		   0x010DA3D8:  D94B7BEB     BL $+0x1ed2f6c  // CALL → Action..ctor
		   0x010DA3DC:  0400A0E1     MOV r0, r4
		   0x010DA3E0:  0510A0E1     MOV r1, r5
		   0x010DA3E4:  0720A0E1     MOV r2, r7
		   0x010DA3E8:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010DA3EC:  33FFFFEA     B $-0x32c
		   0x010DA3F0:  8B191503     TSTSEQ r1, r5, 0x22c000
		   0x010DA3F4:  B0C5F902     RSCSEQ ip, sb, 0x2c000000
		   0x010DA3F8:  C0E1F902     RSCSEQ lr, sb, 0x30
		   0x010DA3FC:  ECECF902     RSCSEQ lr, sb, 0xec00
		   0x010DA400:  E4ECF902     RSCSEQ lr, sb, 0xe400
		   0x010DA404:  D0ECF902     RSCSEQ lr, sb, 0xd000
		   0x010DA408:  68E1F902     RSCSEQ lr, sb, 0x1a
		   0x010DA40C:  14C5F902     RSCSEQ ip, sb, 0x5000000
		   0x010DA410:  4CECF902     RSCSEQ lr, sb, 0x4c00
		*/
	}

	// RVA: 0x10DE020 Offset: 0x10DE020 VA: 0x10DE020
	public Item[] InitInventory() {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DE020:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DE024:  5CD04DE2     SUB sp, sp, 0x5c
		   0x010DE028:  34008DE5     STR r0, [sp, 0x34]
		   0x010DE02C:  68479FE5     LDR r4, [pc, 0x768]
		   0x010DE030:  04408FE0     ADD r4, pc, r4
		   0x010DE034:  0000D4E5     LDRB r0, [r4]
		   0x010DE038:  000050E3     CMPS r0, r0, 0x0
		   0x010DE03C:  3700001A     BNE $+0xe4  // if (!=) goto 0x010DE120
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DE040:  58079FE5     LDR r0, [pc, 0x758]
		   0x010DE044:  00009FE7     LDR r0, [pc, r0]
		   0x010DE048:  44F4F9EB     BL $-0x182ee8
		   0x010DE04C:  50079FE5     LDR r0, [pc, 0x750]
		   0x010DE050:  00009FE7     LDR r0, [pc, r0]
		   0x010DE054:  41F4F9EB     BL $-0x182ef4
		   0x010DE058:  48079FE5     LDR r0, [pc, 0x748]
		   0x010DE05C:  00009FE7     LDR r0, [pc, r0]
		   0x010DE060:  3EF4F9EB     BL $-0x182f00
		   0x010DE064:  40079FE5     LDR r0, [pc, 0x740]
		   0x010DE068:  00009FE7     LDR r0, [pc, r0]
		   0x010DE06C:  3BF4F9EB     BL $-0x182f0c
		   0x010DE070:  38079FE5     LDR r0, [pc, 0x738]
		   0x010DE074:  00009FE7     LDR r0, [pc, r0]
		   0x010DE078:  38F4F9EB     BL $-0x182f18
		   0x010DE07C:  30079FE5     LDR r0, [pc, 0x730]
		   0x010DE080:  00009FE7     LDR r0, [pc, r0]
		   0x010DE084:  35F4F9EB     BL $-0x182f24
		   0x010DE088:  28079FE5     LDR r0, [pc, 0x728]
		   0x010DE08C:  00009FE7     LDR r0, [pc, r0]
		   0x010DE090:  32F4F9EB     BL $-0x182f30
		   0x010DE094:  20079FE5     LDR r0, [pc, 0x720]
		   0x010DE098:  00009FE7     LDR r0, [pc, r0]
		   0x010DE09C:  2FF4F9EB     BL $-0x182f3c
		   0x010DE0A0:  18079FE5     LDR r0, [pc, 0x718]
		   0x010DE0A4:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0A8:  2CF4F9EB     BL $-0x182f48
		   0x010DE0AC:  10079FE5     LDR r0, [pc, 0x710]
		   0x010DE0B0:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0B4:  29F4F9EB     BL $-0x182f54
		   0x010DE0B8:  08079FE5     LDR r0, [pc, 0x708]
		   0x010DE0BC:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0C0:  26F4F9EB     BL $-0x182f60
		   0x010DE0C4:  00079FE5     LDR r0, [pc, 0x700]
		   0x010DE0C8:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0CC:  23F4F9EB     BL $-0x182f6c
		   0x010DE0D0:  F8069FE5     LDR r0, [pc, 0x6f8]
		   0x010DE0D4:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0D8:  20F4F9EB     BL $-0x182f78
		   0x010DE0DC:  F0069FE5     LDR r0, [pc, 0x6f0]
		   0x010DE0E0:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0E4:  1DF4F9EB     BL $-0x182f84
		   0x010DE0E8:  E8069FE5     LDR r0, [pc, 0x6e8]
		   0x010DE0EC:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0F0:  1AF4F9EB     BL $-0x182f90
		   0x010DE0F4:  E0069FE5     LDR r0, [pc, 0x6e0]
		   0x010DE0F8:  00009FE7     LDR r0, [pc, r0]
		   0x010DE0FC:  17F4F9EB     BL $-0x182f9c
		   0x010DE100:  D8069FE5     LDR r0, [pc, 0x6d8]
		   0x010DE104:  00009FE7     LDR r0, [pc, r0]
		   0x010DE108:  14F4F9EB     BL $-0x182fa8
		   0x010DE10C:  D0069FE5     LDR r0, [pc, 0x6d0]
		   0x010DE110:  00009FE7     LDR r0, [pc, r0]
		   0x010DE114:  11F4F9EB     BL $-0x182fb4
		   0x010DE118:  0100A0E3     MOV r0, 0x1
		   0x010DE11C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DE120:  34009DE5     LDR r0, [sp, 0x34]
		*/
	}

	// RVA: 0x10DE8E0 Offset: 0x10DE8E0 VA: 0x10DE8E0
	public List<ItemData> GetSourceContainers(ItemData goalItemObject) {
		/* Disassembly (ARM32, 144 instructions, 0x240 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DE8E0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DE8E4:  4CD04DE2     SUB sp, sp, 0x4c
		   0x010DE8E8:  846E9FE5     LDR r6, [pc, 0xe84]
		   0x010DE8EC:  00A0A0E1     MOV r10, r0
		   0x010DE8F0:  0140A0E1     MOV r4, r1
		   0x010DE8F4:  06608FE0     ADD r6, pc, r6
		   0x010DE8F8:  0000D6E5     LDRB r0, [r6]
		   0x010DE8FC:  000050E3     CMPS r0, r0, 0x0
		   0x010DE900:  8500001A     BNE $+0x21c  // if (!=) goto 0x010DEB1C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DE904:  6C0E9FE5     LDR r0, [pc, 0xe6c]
		   0x010DE908:  00009FE7     LDR r0, [pc, r0]
		   0x010DE90C:  13F2F9EB     BL $-0x1837ac
		   0x010DE910:  640E9FE5     LDR r0, [pc, 0xe64]
		   0x010DE914:  00009FE7     LDR r0, [pc, r0]
		   0x010DE918:  10F2F9EB     BL $-0x1837b8
		   0x010DE91C:  5C0E9FE5     LDR r0, [pc, 0xe5c]
		   0x010DE920:  00009FE7     LDR r0, [pc, r0]
		   0x010DE924:  0DF2F9EB     BL $-0x1837c4
		   0x010DE928:  540E9FE5     LDR r0, [pc, 0xe54]
		   0x010DE92C:  00009FE7     LDR r0, [pc, r0]
		   0x010DE930:  0AF2F9EB     BL $-0x1837d0
		   0x010DE934:  4C0E9FE5     LDR r0, [pc, 0xe4c]
		   0x010DE938:  00009FE7     LDR r0, [pc, r0]
		   0x010DE93C:  07F2F9EB     BL $-0x1837dc
		   0x010DE940:  440E9FE5     LDR r0, [pc, 0xe44]
		   0x010DE944:  00009FE7     LDR r0, [pc, r0]
		   0x010DE948:  04F2F9EB     BL $-0x1837e8
		   0x010DE94C:  3C0E9FE5     LDR r0, [pc, 0xe3c]
		   0x010DE950:  00009FE7     LDR r0, [pc, r0]
		   0x010DE954:  01F2F9EB     BL $-0x1837f4
		   0x010DE958:  340E9FE5     LDR r0, [pc, 0xe34]
		   0x010DE95C:  00009FE7     LDR r0, [pc, r0]
		   0x010DE960:  FEF1F9EB     BL $-0x183800
		   0x010DE964:  2C0E9FE5     LDR r0, [pc, 0xe2c]
		   0x010DE968:  00009FE7     LDR r0, [pc, r0]
		   0x010DE96C:  FBF1F9EB     BL $-0x18380c
		   0x010DE970:  240E9FE5     LDR r0, [pc, 0xe24]
		   0x010DE974:  00009FE7     LDR r0, [pc, r0]
		   0x010DE978:  F8F1F9EB     BL $-0x183818
		   0x010DE97C:  1C0E9FE5     LDR r0, [pc, 0xe1c]
		   0x010DE980:  00009FE7     LDR r0, [pc, r0]
		   0x010DE984:  F5F1F9EB     BL $-0x183824
		   0x010DE988:  140E9FE5     LDR r0, [pc, 0xe14]
		   0x010DE98C:  00009FE7     LDR r0, [pc, r0]
		   0x010DE990:  F2F1F9EB     BL $-0x183830
		   0x010DE994:  0C0E9FE5     LDR r0, [pc, 0xe0c]
		   0x010DE998:  00009FE7     LDR r0, [pc, r0]
		   0x010DE99C:  EFF1F9EB     BL $-0x18383c
		   0x010DE9A0:  040E9FE5     LDR r0, [pc, 0xe04]
		   0x010DE9A4:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9A8:  ECF1F9EB     BL $-0x183848
		   0x010DE9AC:  FC0D9FE5     LDR r0, [pc, 0xdfc]
		   0x010DE9B0:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9B4:  E9F1F9EB     BL $-0x183854
		   0x010DE9B8:  F40D9FE5     LDR r0, [pc, 0xdf4]
		   0x010DE9BC:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9C0:  E6F1F9EB     BL $-0x183860
		   0x010DE9C4:  EC0D9FE5     LDR r0, [pc, 0xdec]
		   0x010DE9C8:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9CC:  E3F1F9EB     BL $-0x18386c
		   0x010DE9D0:  E40D9FE5     LDR r0, [pc, 0xde4]
		   0x010DE9D4:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9D8:  E0F1F9EB     BL $-0x183878
		   0x010DE9DC:  DC0D9FE5     LDR r0, [pc, 0xddc]
		   0x010DE9E0:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9E4:  DDF1F9EB     BL $-0x183884
		   0x010DE9E8:  D40D9FE5     LDR r0, [pc, 0xdd4]
		   0x010DE9EC:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9F0:  DAF1F9EB     BL $-0x183890
		   0x010DE9F4:  CC0D9FE5     LDR r0, [pc, 0xdcc]
		   0x010DE9F8:  00009FE7     LDR r0, [pc, r0]
		   0x010DE9FC:  D7F1F9EB     BL $-0x18389c
		   0x010DEA00:  C40D9FE5     LDR r0, [pc, 0xdc4]
		   0x010DEA04:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA08:  D4F1F9EB     BL $-0x1838a8
		   0x010DEA0C:  BC0D9FE5     LDR r0, [pc, 0xdbc]
		   0x010DEA10:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA14:  D1F1F9EB     BL $-0x1838b4
		   0x010DEA18:  B40D9FE5     LDR r0, [pc, 0xdb4]
		   0x010DEA1C:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA20:  CEF1F9EB     BL $-0x1838c0
		   0x010DEA24:  AC0D9FE5     LDR r0, [pc, 0xdac]
		   0x010DEA28:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA2C:  CBF1F9EB     BL $-0x1838cc
		   0x010DEA30:  A40D9FE5     LDR r0, [pc, 0xda4]
		   0x010DEA34:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA38:  C8F1F9EB     BL $-0x1838d8
		   0x010DEA3C:  9C0D9FE5     LDR r0, [pc, 0xd9c]
		   0x010DEA40:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA44:  C5F1F9EB     BL $-0x1838e4
		   0x010DEA48:  940D9FE5     LDR r0, [pc, 0xd94]
		   0x010DEA4C:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA50:  C2F1F9EB     BL $-0x1838f0
		   0x010DEA54:  8C0D9FE5     LDR r0, [pc, 0xd8c]
		   0x010DEA58:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA5C:  BFF1F9EB     BL $-0x1838fc
		   0x010DEA60:  840D9FE5     LDR r0, [pc, 0xd84]
		   0x010DEA64:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA68:  BCF1F9EB     BL $-0x183908
		   0x010DEA6C:  7C0D9FE5     LDR r0, [pc, 0xd7c]
		   0x010DEA70:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA74:  B9F1F9EB     BL $-0x183914
		   0x010DEA78:  740D9FE5     LDR r0, [pc, 0xd74]
		   0x010DEA7C:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA80:  B6F1F9EB     BL $-0x183920
		   0x010DEA84:  6C0D9FE5     LDR r0, [pc, 0xd6c]
		   0x010DEA88:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA8C:  B3F1F9EB     BL $-0x18392c
		   0x010DEA90:  640D9FE5     LDR r0, [pc, 0xd64]
		   0x010DEA94:  00009FE7     LDR r0, [pc, r0]
		   0x010DEA98:  B0F1F9EB     BL $-0x183938
		   0x010DEA9C:  5C0D9FE5     LDR r0, [pc, 0xd5c]
		   0x010DEAA0:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAA4:  ADF1F9EB     BL $-0x183944
		   0x010DEAA8:  540D9FE5     LDR r0, [pc, 0xd54]
		   0x010DEAAC:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAB0:  AAF1F9EB     BL $-0x183950
		   0x010DEAB4:  4C0D9FE5     LDR r0, [pc, 0xd4c]
		   0x010DEAB8:  00009FE7     LDR r0, [pc, r0]
		   0x010DEABC:  A7F1F9EB     BL $-0x18395c
		   0x010DEAC0:  440D9FE5     LDR r0, [pc, 0xd44]
		   0x010DEAC4:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAC8:  A4F1F9EB     BL $-0x183968
		   0x010DEACC:  3C0D9FE5     LDR r0, [pc, 0xd3c]
		   0x010DEAD0:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAD4:  A1F1F9EB     BL $-0x183974
		   0x010DEAD8:  340D9FE5     LDR r0, [pc, 0xd34]
		   0x010DEADC:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAE0:  9EF1F9EB     BL $-0x183980
		   0x010DEAE4:  2C0D9FE5     LDR r0, [pc, 0xd2c]
		   0x010DEAE8:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAEC:  9BF1F9EB     BL $-0x18398c
		   0x010DEAF0:  240D9FE5     LDR r0, [pc, 0xd24]
		   0x010DEAF4:  00009FE7     LDR r0, [pc, r0]
		   0x010DEAF8:  98F1F9EB     BL $-0x183998
		   0x010DEAFC:  1C0D9FE5     LDR r0, [pc, 0xd1c]
		   0x010DEB00:  00009FE7     LDR r0, [pc, r0]
		   0x010DEB04:  95F1F9EB     BL $-0x1839a4
		   0x010DEB08:  140D9FE5     LDR r0, [pc, 0xd14]
		   0x010DEB0C:  00009FE7     LDR r0, [pc, r0]
		   0x010DEB10:  92F1F9EB     BL $-0x1839b0
		   0x010DEB14:  0100A0E3     MOV r0, 0x1
		   0x010DEB18:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DEB1C:  040D9FE5     LDR r0, [pc, 0xd04]
		*/
	}

	// RVA: 0x10DE840 Offset: 0x10DE840 VA: 0x10DE840
	private void ResetItemSave(ItemDataSave itemDataSave) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 11 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DE840:  10402DE9     PUSH {r4, lr}
		   0x010DE844:  0140A0E1     MOV r4, r1
		   0x010DE848:  000051E3     CMPS r0, r1, 0x0
		   0x010DE84C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DE854
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DE850:  DEF2F9EB     BL $-0x183480
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DE854:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010DE858:  0D0050E3     CMPS r0, r0, 0xd
		   0x010DE85C:  1E00008A     BHI $+0x80  // if (> (unsigned)) goto 0x010DE8DC
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x010DE860:  0110A0E3     MOV r1, 0x1
		   0x010DE864:  0D2BA0E3     MOV r2, 0x3400
		   0x010DE868:  110012E1     TSTS r0, r2, r1, lsl r0
		   0x010DE86C:  0900001A     BNE $+0x2c  // if (!=) goto 0x010DE898
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DE870:  022100E3     MOV r2, 0x102
		   0x010DE874:  110012E1     TSTS r0, r2, r1, lsl r0
		   0x010DE878:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010DE8B4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DE87C:  822FA0E3     MOV r2, 0x208
		   0x010DE880:  110012E1     TSTS r0, r2, r1, lsl r0
		   0x010DE884:  1080BD08     POPEQ {r4, pc}
		   0x010DE888:  080094E5     LDR r0, [r4, 0x8]
		   0x010DE88C:  0010A0E3     MOV r1, 0x0
		   0x010DE890:  0DAA00EB     BL $+0x2a83c  // CALL → ContainerDataStorage.RemoveContainerChargeData
		   0x010DE894:  0C0000EA     B $+0x38  // goto 0x010DE8CC
		   // ──── Block 7 if (!=) ────────────────────
		   0x010DE898:  080094E5     LDR r0, [r4, 0x8]
		   0x010DE89C:  0010A0E3     MOV r1, 0x0
		   0x010DE8A0:  09AA00EB     BL $+0x2a82c  // CALL → ContainerDataStorage.RemoveContainerChargeData
		   0x010DE8A4:  080094E5     LDR r0, [r4, 0x8]
		   0x010DE8A8:  0010A0E3     MOV r1, 0x0
		   0x010DE8AC:  1040BDE8     POP {r4, lr}
		   0x010DE8B0:  84A600EA     B $+0x29a18  // TAIL CALL → ItemChargeableContainer.ResetFillData
		   // ──── Block 8 if (!=) ────────────────────
		   0x010DE8B4:  080094E5     LDR r0, [r4, 0x8]
		   0x010DE8B8:  0010A0E3     MOV r1, 0x0
		   0x010DE8BC:  02AA00EB     BL $+0x2a810  // CALL → ContainerDataStorage.RemoveContainerChargeData
		   0x010DE8C0:  080094E5     LDR r0, [r4, 0x8]
		   0x010DE8C4:  0010A0E3     MOV r1, 0x0
		   0x010DE8C8:  90D600EB     BL $+0x35a48  // CALL → ItemContainer.ResetContainerPredefinedIndex
		   // ──── Block 9 ──────────────────────────────
		   0x010DE8CC:  080094E5     LDR r0, [r4, 0x8]
		   0x010DE8D0:  0010A0E3     MOV r1, 0x0
		   0x010DE8D4:  1040BDE8     POP {r4, lr}
		   0x010DE8D8:  386600EA     B $+0x198e8  // TAIL CALL → TimerManager.CancelTimer
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x010DE8DC:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10DFD84 Offset: 0x10DFD84 VA: 0x10DFD84
	private void UpdateContainersEnergyConsumptionMode(EnergyConsumptionMode mode) {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DFD84:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DFD88:  1CD04DE2     SUB sp, sp, 0x1c
		   0x010DFD8C:  B0419FE5     LDR r4, [pc, 0x1b0]
		   0x010DFD90:  0050A0E1     MOV r5, r0
		   0x010DFD94:  0180A0E1     MOV r8, r1
		   0x010DFD98:  04408FE0     ADD r4, pc, r4
		   0x010DFD9C:  0000D4E5     LDRB r0, [r4]
		   0x010DFDA0:  000050E3     CMPS r0, r0, 0x0
		   0x010DFDA4:  1000001A     BNE $+0x48  // if (!=) goto 0x010DFDEC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DFDA8:  98019FE5     LDR r0, [pc, 0x198]
		   0x010DFDAC:  00009FE7     LDR r0, [pc, r0]
		   0x010DFDB0:  EAECF9EB     BL $-0x184c50
		   0x010DFDB4:  90019FE5     LDR r0, [pc, 0x190]
		   0x010DFDB8:  00009FE7     LDR r0, [pc, r0]
		   0x010DFDBC:  E7ECF9EB     BL $-0x184c5c
		   0x010DFDC0:  88019FE5     LDR r0, [pc, 0x188]
		   0x010DFDC4:  00009FE7     LDR r0, [pc, r0]
		   0x010DFDC8:  E4ECF9EB     BL $-0x184c68
		   0x010DFDCC:  80019FE5     LDR r0, [pc, 0x180]
		   0x010DFDD0:  00009FE7     LDR r0, [pc, r0]
		   0x010DFDD4:  E1ECF9EB     BL $-0x184c74
		   0x010DFDD8:  78019FE5     LDR r0, [pc, 0x178]
		   0x010DFDDC:  00009FE7     LDR r0, [pc, r0]
		   0x010DFDE0:  DEECF9EB     BL $-0x184c80
		   0x010DFDE4:  0100A0E3     MOV r0, 0x1
		   0x010DFDE8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DFDEC:  546095E5     LDR r6, [r5, 0x54]
		*/
	}

	// RVA: 0x10DFF70 Offset: 0x10DFF70 VA: 0x10DFF70
	private void RemoveWrongItems(FieldGroup fieldGroup) {
		/* Disassembly (ARM32, 83 instructions, 0x14C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DFF70:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DFF74:  3CD04DE2     SUB sp, sp, 0x3c
		   0x010DFF78:  C8459FE5     LDR r4, [pc, 0x5c8]
		   0x010DFF7C:  00A0A0E1     MOV r10, r0
		   0x010DFF80:  38308DE5     STR r3, [sp, 0x38]
		   0x010DFF84:  04408FE0     ADD r4, pc, r4
		   0x010DFF88:  34208DE5     STR r2, [sp, 0x34]
		   0x010DFF8C:  30108DE5     STR r1, [sp, 0x30]
		   0x010DFF90:  0000D4E5     LDRB r0, [r4]
		   0x010DFF94:  000050E3     CMPS r0, r0, 0x0
		   0x010DFF98:  4600001A     BNE $+0x120  // if (!=) goto 0x010E00B8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DFF9C:  A8059FE5     LDR r0, [pc, 0x5a8]
		   0x010DFFA0:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFA4:  6DECF9EB     BL $-0x184e44
		   0x010DFFA8:  A0059FE5     LDR r0, [pc, 0x5a0]
		   0x010DFFAC:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFB0:  6AECF9EB     BL $-0x184e50
		   0x010DFFB4:  98059FE5     LDR r0, [pc, 0x598]
		   0x010DFFB8:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFBC:  67ECF9EB     BL $-0x184e5c
		   0x010DFFC0:  90059FE5     LDR r0, [pc, 0x590]
		   0x010DFFC4:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFC8:  64ECF9EB     BL $-0x184e68
		   0x010DFFCC:  88059FE5     LDR r0, [pc, 0x588]
		   0x010DFFD0:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFD4:  61ECF9EB     BL $-0x184e74
		   0x010DFFD8:  80059FE5     LDR r0, [pc, 0x580]
		   0x010DFFDC:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFE0:  5EECF9EB     BL $-0x184e80
		   0x010DFFE4:  78059FE5     LDR r0, [pc, 0x578]
		   0x010DFFE8:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFEC:  5BECF9EB     BL $-0x184e8c
		   0x010DFFF0:  70059FE5     LDR r0, [pc, 0x570]
		   0x010DFFF4:  00009FE7     LDR r0, [pc, r0]
		   0x010DFFF8:  58ECF9EB     BL $-0x184e98
		   0x010DFFFC:  68059FE5     LDR r0, [pc, 0x568]
		   0x010E0000:  00009FE7     LDR r0, [pc, r0]
		   0x010E0004:  55ECF9EB     BL $-0x184ea4
		   0x010E0008:  60059FE5     LDR r0, [pc, 0x560]
		   0x010E000C:  00009FE7     LDR r0, [pc, r0]
		   0x010E0010:  52ECF9EB     BL $-0x184eb0
		   0x010E0014:  58059FE5     LDR r0, [pc, 0x558]
		   0x010E0018:  00009FE7     LDR r0, [pc, r0]
		   0x010E001C:  4FECF9EB     BL $-0x184ebc
		   0x010E0020:  50059FE5     LDR r0, [pc, 0x550]
		   0x010E0024:  00009FE7     LDR r0, [pc, r0]
		   0x010E0028:  4CECF9EB     BL $-0x184ec8
		   0x010E002C:  48059FE5     LDR r0, [pc, 0x548]
		   0x010E0030:  00009FE7     LDR r0, [pc, r0]
		   0x010E0034:  49ECF9EB     BL $-0x184ed4
		   0x010E0038:  40059FE5     LDR r0, [pc, 0x540]
		   0x010E003C:  00009FE7     LDR r0, [pc, r0]
		   0x010E0040:  46ECF9EB     BL $-0x184ee0
		   0x010E0044:  38059FE5     LDR r0, [pc, 0x538]
		   0x010E0048:  00009FE7     LDR r0, [pc, r0]
		   0x010E004C:  43ECF9EB     BL $-0x184eec
		   0x010E0050:  30059FE5     LDR r0, [pc, 0x530]
		   0x010E0054:  00009FE7     LDR r0, [pc, r0]
		   0x010E0058:  40ECF9EB     BL $-0x184ef8
		   0x010E005C:  28059FE5     LDR r0, [pc, 0x528]
		   0x010E0060:  00009FE7     LDR r0, [pc, r0]
		   0x010E0064:  3DECF9EB     BL $-0x184f04
		   0x010E0068:  20059FE5     LDR r0, [pc, 0x520]
		   0x010E006C:  00009FE7     LDR r0, [pc, r0]
		   0x010E0070:  3AECF9EB     BL $-0x184f10
		   0x010E0074:  18059FE5     LDR r0, [pc, 0x518]
		   0x010E0078:  00009FE7     LDR r0, [pc, r0]
		   0x010E007C:  37ECF9EB     BL $-0x184f1c
		   0x010E0080:  10059FE5     LDR r0, [pc, 0x510]
		   0x010E0084:  00009FE7     LDR r0, [pc, r0]
		   0x010E0088:  34ECF9EB     BL $-0x184f28
		   0x010E008C:  08059FE5     LDR r0, [pc, 0x508]
		   0x010E0090:  00009FE7     LDR r0, [pc, r0]
		   0x010E0094:  31ECF9EB     BL $-0x184f34
		   0x010E0098:  00059FE5     LDR r0, [pc, 0x500]
		   0x010E009C:  00009FE7     LDR r0, [pc, r0]
		   0x010E00A0:  2EECF9EB     BL $-0x184f40
		   0x010E00A4:  F8049FE5     LDR r0, [pc, 0x4f8]
		   0x010E00A8:  00009FE7     LDR r0, [pc, r0]
		   0x010E00AC:  2BECF9EB     BL $-0x184f4c
		   0x010E00B0:  0100A0E3     MOV r0, 0x1
		   0x010E00B4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E00B8:  E8049FE5     LDR r0, [pc, 0x4e8]
		*/
	}

	// RVA: 0x10DD09C Offset: 0x10DD09C VA: 0x10DD09C
	private void CreateField(GameStateSave gameSave) {
		/* Disassembly (ARM32, 423 instructions, 0x69C bytes):
		   // CFG: 84 blocks, 83 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DD09C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DD0A0:  2CD04DE2     SUB sp, sp, 0x2c
		   0x010DD0A4:  5C4E9FE5     LDR r4, [pc, 0xe5c]
		   0x010DD0A8:  0080A0E1     MOV r8, r0
		   0x010DD0AC:  01B0A0E1     MOV fp, r1
		   0x010DD0B0:  04408FE0     ADD r4, pc, r4
		   0x010DD0B4:  0000D4E5     LDRB r0, [r4]
		   0x010DD0B8:  000050E3     CMPS r0, r0, 0x0
		   0x010DD0BC:  5500001A     BNE $+0x15c  // if (!=) goto 0x010DD218
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DD0C0:  440E9FE5     LDR r0, [pc, 0xe44]
		   0x010DD0C4:  00009FE7     LDR r0, [pc, r0]
		   0x010DD0C8:  24F8F9EB     BL $-0x181f68
		   0x010DD0CC:  3C0E9FE5     LDR r0, [pc, 0xe3c]
		   0x010DD0D0:  00009FE7     LDR r0, [pc, r0]
		   0x010DD0D4:  21F8F9EB     BL $-0x181f74
		   0x010DD0D8:  340E9FE5     LDR r0, [pc, 0xe34]
		   0x010DD0DC:  00009FE7     LDR r0, [pc, r0]
		   0x010DD0E0:  1EF8F9EB     BL $-0x181f80
		   0x010DD0E4:  2C0E9FE5     LDR r0, [pc, 0xe2c]
		   0x010DD0E8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD0EC:  1BF8F9EB     BL $-0x181f8c
		   0x010DD0F0:  240E9FE5     LDR r0, [pc, 0xe24]
		   0x010DD0F4:  00009FE7     LDR r0, [pc, r0]
		   0x010DD0F8:  18F8F9EB     BL $-0x181f98
		   0x010DD0FC:  1C0E9FE5     LDR r0, [pc, 0xe1c]
		   0x010DD100:  00009FE7     LDR r0, [pc, r0]
		   0x010DD104:  15F8F9EB     BL $-0x181fa4
		   0x010DD108:  140E9FE5     LDR r0, [pc, 0xe14]
		   0x010DD10C:  00009FE7     LDR r0, [pc, r0]
		   0x010DD110:  12F8F9EB     BL $-0x181fb0
		   0x010DD114:  0C0E9FE5     LDR r0, [pc, 0xe0c]
		   0x010DD118:  00009FE7     LDR r0, [pc, r0]
		   0x010DD11C:  0FF8F9EB     BL $-0x181fbc
		   0x010DD120:  040E9FE5     LDR r0, [pc, 0xe04]
		   0x010DD124:  00009FE7     LDR r0, [pc, r0]
		   0x010DD128:  0CF8F9EB     BL $-0x181fc8
		   0x010DD12C:  FC0D9FE5     LDR r0, [pc, 0xdfc]
		   0x010DD130:  00009FE7     LDR r0, [pc, r0]
		   0x010DD134:  09F8F9EB     BL $-0x181fd4
		   0x010DD138:  F40D9FE5     LDR r0, [pc, 0xdf4]
		   0x010DD13C:  00009FE7     LDR r0, [pc, r0]
		   0x010DD140:  06F8F9EB     BL $-0x181fe0
		   0x010DD144:  EC0D9FE5     LDR r0, [pc, 0xdec]
		   0x010DD148:  00009FE7     LDR r0, [pc, r0]
		   0x010DD14C:  03F8F9EB     BL $-0x181fec
		   0x010DD150:  E40D9FE5     LDR r0, [pc, 0xde4]
		   0x010DD154:  00009FE7     LDR r0, [pc, r0]
		   0x010DD158:  00F8F9EB     BL $-0x181ff8
		   0x010DD15C:  DC0D9FE5     LDR r0, [pc, 0xddc]
		   0x010DD160:  00009FE7     LDR r0, [pc, r0]
		   0x010DD164:  FDF7F9EB     BL $-0x182004
		   0x010DD168:  D40D9FE5     LDR r0, [pc, 0xdd4]
		   0x010DD16C:  00009FE7     LDR r0, [pc, r0]
		   0x010DD170:  FAF7F9EB     BL $-0x182010
		   0x010DD174:  CC0D9FE5     LDR r0, [pc, 0xdcc]
		   0x010DD178:  00009FE7     LDR r0, [pc, r0]
		   0x010DD17C:  F7F7F9EB     BL $-0x18201c
		   0x010DD180:  C40D9FE5     LDR r0, [pc, 0xdc4]
		   0x010DD184:  00009FE7     LDR r0, [pc, r0]
		   0x010DD188:  F4F7F9EB     BL $-0x182028
		   0x010DD18C:  BC0D9FE5     LDR r0, [pc, 0xdbc]
		   0x010DD190:  00009FE7     LDR r0, [pc, r0]
		   0x010DD194:  F1F7F9EB     BL $-0x182034
		   0x010DD198:  B40D9FE5     LDR r0, [pc, 0xdb4]
		   0x010DD19C:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1A0:  EEF7F9EB     BL $-0x182040
		   0x010DD1A4:  AC0D9FE5     LDR r0, [pc, 0xdac]
		   0x010DD1A8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1AC:  EBF7F9EB     BL $-0x18204c
		   0x010DD1B0:  A40D9FE5     LDR r0, [pc, 0xda4]
		   0x010DD1B4:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1B8:  E8F7F9EB     BL $-0x182058
		   0x010DD1BC:  9C0D9FE5     LDR r0, [pc, 0xd9c]
		   0x010DD1C0:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1C4:  E5F7F9EB     BL $-0x182064
		   0x010DD1C8:  940D9FE5     LDR r0, [pc, 0xd94]
		   0x010DD1CC:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1D0:  E2F7F9EB     BL $-0x182070
		   0x010DD1D4:  8C0D9FE5     LDR r0, [pc, 0xd8c]
		   0x010DD1D8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1DC:  DFF7F9EB     BL $-0x18207c
		   0x010DD1E0:  840D9FE5     LDR r0, [pc, 0xd84]
		   0x010DD1E4:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1E8:  DCF7F9EB     BL $-0x182088
		   0x010DD1EC:  7C0D9FE5     LDR r0, [pc, 0xd7c]
		   0x010DD1F0:  00009FE7     LDR r0, [pc, r0]
		   0x010DD1F4:  D9F7F9EB     BL $-0x182094
		   0x010DD1F8:  740D9FE5     LDR r0, [pc, 0xd74]
		   0x010DD1FC:  00009FE7     LDR r0, [pc, r0]
		   0x010DD200:  D6F7F9EB     BL $-0x1820a0
		   0x010DD204:  6C0D9FE5     LDR r0, [pc, 0xd6c]
		   0x010DD208:  00009FE7     LDR r0, [pc, r0]
		   0x010DD20C:  D3F7F9EB     BL $-0x1820ac
		   0x010DD210:  0100A0E3     MOV r0, 0x1
		   0x010DD214:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DD218:  0000A0E3     MOV r0, 0x0
		   0x010DD21C:  0B10A0E1     MOV r1, fp
		   0x010DD220:  24008DE5     STR r0, [sp, 0x24]
		   0x010DD224:  20008DE5     STR r0, [sp, 0x20]
		   0x010DD228:  F60C00EB     BL $+0x33e0  // CALL → GameState.ItemsDuplicateCheck
		   0x010DD22C:  00005BE3     CMPS r0, fp, 0x0
		   0x010DD230:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD238
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DD234:  65F8F9EB     BL $-0x181e64
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DD238:  3C7D9FE5     LDR r7, [pc, 0xd3c]
		   0x010DD23C:  07709FE7     LDR r7, [pc, r7]
		   0x010DD240:  0C409BE5     LDR r4, [fp, 0xc]
		   0x010DD244:  000097E5     LDR r0, [r7]
		   0x010DD248:  741090E5     LDR r1, [r0, 0x74]
		   0x010DD24C:  000051E3     CMPS r0, r1, 0x0
		   0x010DD250:  0100001A     BNE $+0xc  // if (!=) goto 0x010DD25C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DD254:  0EF8F9EB     BL $-0x181fc0
		   0x010DD258:  000097E5     LDR r0, [r7]
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DD25C:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010DD260:  105091E5     LDR r5, [r1, 0x10]
		   0x010DD264:  000055E3     CMPS r0, r5, 0x0
		   0x010DD268:  1500001A     BNE $+0x5c  // if (!=) goto 0x010DD2C4
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010DD26C:  742090E5     LDR r2, [r0, 0x74]
		   0x010DD270:  000052E3     CMPS r0, r2, 0x0
		   0x010DD274:  0200001A     BNE $+0x10  // if (!=) goto 0x010DD284
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010DD278:  05F8F9EB     BL $-0x181fe4
		   0x010DD27C:  000097E5     LDR r0, [r7]
		   0x010DD280:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 9 if (!=) ────────────────────
		   0x010DD284:  F40C9FE5     LDR r0, [pc, 0xcf4]
		   0x010DD288:  00009FE7     LDR r0, [pc, r0]
		   0x010DD28C:  006091E5     LDR r6, [r1]
		   0x010DD290:  000090E5     LDR r0, [r0]
		   0x010DD294:  4AF8F9EB     BL $-0x181ed0
		   0x010DD298:  0050A0E1     MOV r5, r0
		   0x010DD29C:  E00C9FE5     LDR r0, [pc, 0xce0]
		   0x010DD2A0:  0610A0E1     MOV r1, r6
		   0x010DD2A4:  0030A0E3     MOV r3, 0x0
		   0x010DD2A8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD2AC:  002090E5     LDR r2, [r0]
		   0x010DD2B0:  0500A0E1     MOV r0, r5
		   0x010DD2B4:  57E14FEB     BL $+0x13f8564  // CALL → Comparison<object>..ctor
		   0x010DD2B8:  000097E5     LDR r0, [r7]
		   0x010DD2BC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DD2C0:  105080E5     STR r5, [r0, 0x10]
		   // ──── Block 10 if (!=) ────────────────────
		   0x010DD2C4:  000054E3     CMPS r0, r4, 0x0
		   0x010DD2C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD2D0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010DD2CC:  3FF8F9EB     BL $-0x181efc
		   // ──── Block 12 if (!=) ────────────────────
		   0x010DD2D0:  B00C9FE5     LDR r0, [pc, 0xcb0]
		   0x010DD2D4:  0510A0E1     MOV r1, r5
		   0x010DD2D8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD2DC:  002090E5     LDR r2, [r0]
		   0x010DD2E0:  0400A0E1     MOV r0, r4
		   0x010DD2E4:  605D6CEB     BL $+0x1b17588  // CALL → List<object>.Sort
		   0x010DD2E8:  404098E5     LDR r4, [r8, 0x40]
		   0x010DD2EC:  14808DE5     STR r8, [sp, 0x14]
		   0x010DD2F0:  000054E3     CMPS r0, r4, 0x0
		   0x010DD2F4:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DD324
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010DD2F8:  0400A0E1     MOV r0, r4
		   0x010DD2FC:  0010A0E3     MOV r1, 0x0
		   0x010DD300:  0020A0E3     MOV r2, 0x0
		   0x010DD304:  D35A7EEB     BL $+0x1f96b54  // CALL → Array.GetUpperBound
		   0x010DD308:  0080A0E1     MOV r8, r0
		   0x010DD30C:  0400A0E1     MOV r0, r4
		   0x010DD310:  0110A0E3     MOV r1, 0x1
		   0x010DD314:  0020A0E3     MOV r2, 0x0
		   0x010DD318:  CE5A7EEB     BL $+0x1f96b40  // CALL → Array.GetUpperBound
		   0x010DD31C:  00A0A0E1     MOV r10, r0
		   0x010DD320:  0C0000EA     B $+0x38  // goto 0x010DD358
		   // ──── Block 14 if (==) ────────────────────
		   0x010DD324:  29F8F9EB     BL $-0x181f54
		   0x010DD328:  0000A0E3     MOV r0, 0x0
		   0x010DD32C:  0010A0E3     MOV r1, 0x0
		   0x010DD330:  0020A0E3     MOV r2, 0x0
		   0x010DD334:  C75A7EEB     BL $+0x1f96b24  // CALL → Array.GetUpperBound
		   0x010DD338:  0080A0E1     MOV r8, r0
		   0x010DD33C:  23F8F9EB     BL $-0x181f6c
		   0x010DD340:  0000A0E3     MOV r0, 0x0
		   0x010DD344:  0110A0E3     MOV r1, 0x1
		   0x010DD348:  0020A0E3     MOV r2, 0x0
		   0x010DD34C:  C15A7EEB     BL $+0x1f96b0c  // CALL → Array.GetUpperBound
		   0x010DD350:  00A0A0E1     MOV r10, r0
		   0x010DD354:  1DF8F9EB     BL $-0x181f84
		   // ──── Block 15 ──────────────────────────────
		   0x010DD358:  0400A0E1     MOV r0, r4
		   0x010DD35C:  0010A0E3     MOV r1, 0x0
		   0x010DD360:  0020A0E3     MOV r2, 0x0
		   0x010DD364:  324D7EEB     BL $+0x1f934d0  // CALL → Array.GetLowerBound
		   0x010DD368:  080050E1     CMPS r0, r0, r8
		   0x010DD36C:  10B08DE5     STR fp, [sp, 0x10]
		   0x010DD370:  430000CA     BGT $+0x114  // if (>) goto 0x010DD484
		   // 
		   // ──── Block 16 else (<=) ────────────────────
		   0x010DD374:  10BC9FE5     LDR fp, [pc, 0xc10]
		   0x010DD378:  0090A0E1     MOV sb, r0
		   0x010DD37C:  0BB09FE7     LDR fp, [pc, fp]
		   0x010DD380:  000054E3     CMPS r0, r4, 0x0
		   0x010DD384:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD38C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010DD388:  10F8F9EB     BL $-0x181fb8
		   // ──── Block 18 if (!=) ────────────────────
		   0x010DD38C:  0400A0E1     MOV r0, r4
		   0x010DD390:  0110A0E3     MOV r1, 0x1
		   0x010DD394:  0020A0E3     MOV r2, 0x0
		   0x010DD398:  254D7EEB     BL $+0x1f9349c  // CALL → Array.GetLowerBound
		   0x010DD39C:  0A0050E1     CMPS r0, r0, r10
		   0x010DD3A0:  300000CA     BGT $+0xc8  // if (>) goto 0x010DD468
		   // 
		   // ──── Block 19 else (<=) ────────────────────
		   0x010DD3A4:  0060A0E1     MOV r6, r0
		   0x010DD3A8:  000054E3     CMPS r0, r4, 0x0
		   0x010DD3AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD3B4
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010DD3B0:  06F8F9EB     BL $-0x181fe0
		   // ──── Block 21 if (!=) ────────────────────
		   0x010DD3B4:  080094E5     LDR r0, [r4, 0x8]
		   0x010DD3B8:  001090E5     LDR r1, [r0]
		   0x010DD3BC:  090051E1     CMPS r0, r1, sb
		   0x010DD3C0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010DD3CC
		   // 
		   // ──── Block 22 else (<= (unsigned)) ────────────────────
		   0x010DD3C4:  02F8F9EB     BL $-0x181ff0
		   0x010DD3C8:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 23 if (> (unsigned)) ────────────────────
		   0x010DD3CC:  085090E5     LDR r5, [r0, 0x8]
		   0x010DD3D0:  060055E1     CMPS r0, r5, r6
		   0x010DD3D4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010DD3DC
		   // 
		   // ──── Block 24 else (<= (unsigned)) ────────────────────
		   0x010DD3D8:  FDF7F9EB     BL $-0x182004
		   // ──── Block 25 if (> (unsigned)) ────────────────────
		   0x010DD3DC:  996521E0     MLA r1, sb, r5, r6
		   0x010DD3E0:  00009BE5     LDR r0, [fp]
		   0x010DD3E4:  742090E5     LDR r2, [r0, 0x74]
		   0x010DD3E8:  000052E3     CMPS r0, r2, 0x0
		   0x010DD3EC:  011184E0     ADD r1, r4, r1, lsl 2
		   0x010DD3F0:  107091E5     LDR r7, [r1, 0x10]
		   0x010DD3F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD3FC
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010DD3F8:  A5F7F9EB     BL $-0x182164
		   // ──── Block 27 if (!=) ────────────────────
		   0x010DD3FC:  0700A0E1     MOV r0, r7
		   0x010DD400:  0010A0E3     MOV r1, 0x0
		   0x010DD404:  0020A0E3     MOV r2, 0x0
		   0x010DD408:  D91DFDEB     BL $-0xb8894
		   0x010DD40C:  000050E3     CMPS r0, r0, 0x0
		   0x010DD410:  1100000A     BEQ $+0x4c  // if (==) goto 0x010DD45C
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x010DD414:  000057E3     CMPS r0, r7, 0x0
		   0x010DD418:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD420
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010DD41C:  EBF7F9EB     BL $-0x18204c
		   // ──── Block 30 if (!=) ────────────────────
		   0x010DD420:  2800D7E5     LDRB r0, [r7, 0x28]
		   0x010DD424:  000050E3     CMPS r0, r0, 0x0
		   0x010DD428:  0800001A     BNE $+0x28  // if (!=) goto 0x010DD450
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010DD42C:  245097E5     LDR r5, [r7, 0x24]
		   0x010DD430:  000055E3     CMPS r0, r5, 0x0
		   0x010DD434:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD43C
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x010DD438:  E4F7F9EB     BL $-0x182068
		   // ──── Block 33 if (!=) ────────────────────
		   0x010DD43C:  000095E5     LDR r0, [r5]
		   0x010DD440:  702190E5     LDR r2, [r0, 0x170]
		   0x010DD444:  741190E5     LDR r1, [r0, 0x174]
		   0x010DD448:  0500A0E1     MOV r0, r5
		   0x010DD44C:  32FF2FE1     BLX r2  // virtual call: vtable+0x170
		   // ──── Block 34 if (!=) ────────────────────
		   0x010DD450:  0700A0E1     MOV r0, r7
		   0x010DD454:  0010A0E3     MOV r1, 0x0
		   0x010DD458:  08BEFFEB     BL $-0x107d8
		   // ──── Block 35 if (==) ────────────────────
		   0x010DD45C:  016086E2     ADD r6, r6, 0x1
		   0x010DD460:  0A0056E1     CMPS r0, r6, r10
		   0x010DD464:  CFFFFFDA     BLE $-0xbc
		   // ──── Block 36 (from 2 paths) ──────────────────
		   0x010DD468:  019089E2     ADD sb, sb, 0x1
		   0x010DD46C:  080059E1     CMPS r0, sb, r8
		   0x010DD470:  C2FFFFDA     BLE $-0xf0
		   // ──── Block 37 else (>) ────────────────────
		   0x010DD474:  10B09DE5     LDR fp, [sp, 0x10]
		   0x010DD478:  00005BE3     CMPS r0, fp, 0x0
		   0x010DD47C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD484
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x010DD480:  D2F7F9EB     BL $-0x1820b0
		   // ──── Block 39 (from 2 paths) ──────────────────
		   0x010DD484:  0C409BE5     LDR r4, [fp, 0xc]
		   0x010DD488:  000054E3     CMPS r0, r4, 0x0
		   0x010DD48C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD494
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x010DD490:  CEF7F9EB     BL $-0x1820c0
		   // ──── Block 41 if (!=) ────────────────────
		   0x010DD494:  0C9094E5     LDR sb, [r4, 0xc]
		   0x010DD498:  14A09DE5     LDR r10, [sp, 0x14]
		   0x010DD49C:  010059E2     SUBS r0, sb, 0x1
		   0x010DD4A0:  9502004A     BMI $+0xa5c
		   0x010DD4A4:  E40A9FE5     LDR r0, [pc, 0xae4]
		   0x010DD4A8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD4AC:  000090E5     LDR r0, [r0]
		   0x010DD4B0:  C3F7F9EB     BL $-0x1820ec
		   0x010DD4B4:  0010A0E3     MOV r1, 0x0
		   0x010DD4B8:  0080A0E1     MOV r8, r0
		   0x010DD4BC:  E64900EB     BL $+0x127a0  // CALL → <>c__DisplayClass86_0..ctor
		   0x010DD4C0:  0C409BE5     LDR r4, [fp, 0xc]
		   0x010DD4C4:  000054E3     CMPS r0, r4, 0x0
		   0x010DD4C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD4D0
		   // 
		   // ──── Block 43 else (r0 == sb, 0x1) ────────────────────
		   0x010DD4CC:  BFF7F9EB     BL $-0x1820fc
		   // ──── Block 44 if (r0 != sb, 0x1) ────────────────────
		   0x010DD4D0:  BC0A9FE5     LDR r0, [pc, 0xabc]
		   0x010DD4D4:  019049E2     SUB sb, sb, 0x1
		   0x010DD4D8:  0910A0E1     MOV r1, sb
		   0x010DD4DC:  00009FE7     LDR r0, [pc, r0]
		   0x010DD4E0:  002090E5     LDR r2, [r0]
		   0x010DD4E4:  0400A0E1     MOV r0, r4
		   0x010DD4E8:  04556CEB     BL $+0x1b15418  // CALL → List<object>.get_Item
		   0x010DD4EC:  0050A0E1     MOV r5, r0
		   0x010DD4F0:  000058E3     CMPS r0, r8, 0x0
		   0x010DD4F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD4FC
		   // 
		   // ──── Block 45 else (r0 == sb, 0x1) ────────────────────
		   0x010DD4F8:  B4F7F9EB     BL $-0x182128
		   // ──── Block 46 if (r0 != sb, 0x1) ────────────────────
		   0x010DD4FC:  000055E3     CMPS r0, r5, 0x0
		   0x010DD500:  085088E5     STR r5, [r8, 0x8]
		   0x010DD504:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD50C
		   // 
		   // ──── Block 47 else (r0 == sb, 0x1) ────────────────────
		   0x010DD508:  B0F7F9EB     BL $-0x182138
		   // ──── Block 48 if (r0 != sb, 0x1) ────────────────────
		   0x010DD50C:  840A9FE5     LDR r0, [pc, 0xa84]
		   0x010DD510:  00009FE7     LDR r0, [pc, r0]
		   0x010DD514:  38409AE5     LDR r4, [r10, 0x38]
		   0x010DD518:  1C6095E5     LDR r6, [r5, 0x1c]
		   0x010DD51C:  000090E5     LDR r0, [r0]
		   0x010DD520:  A7F7F9EB     BL $-0x18215c
		   0x010DD524:  0050A0E1     MOV r5, r0
		   0x010DD528:  050056E3     CMPS r0, r6, 0x5
		   0x010DD52C:  2200001A     BNE $+0x90  // if (!=) goto 0x010DD5BC
		   // 
		   // ──── Block 49 else (r0 == sb, 0x1) ────────────────────
		   0x010DD530:  640A9FE5     LDR r0, [pc, 0xa64]
		   0x010DD534:  0810A0E1     MOV r1, r8
		   0x010DD538:  0030A0E3     MOV r3, 0x0
		   0x010DD53C:  00009FE7     LDR r0, [pc, r0]
		   0x010DD540:  002090E5     LDR r2, [r0]
		   0x010DD544:  0500A0E1     MOV r0, r5
		   0x010DD548:  4EC233EB     BL $+0xcf0940  // CALL → Predicate<object>..ctor
		   0x010DD54C:  000054E3     CMPS r0, r4, 0x0
		   0x010DD550:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD558
		   // 
		   // ──── Block 50 else (r0 == sb, 0x1) ────────────────────
		   0x010DD554:  9DF7F9EB     BL $-0x182184
		   // ──── Block 51 if (r0 != sb, 0x1) ────────────────────
		   0x010DD558:  400A9FE5     LDR r0, [pc, 0xa40]
		   0x010DD55C:  0510A0E1     MOV r1, r5
		   0x010DD560:  00009FE7     LDR r0, [pc, r0]
		   0x010DD564:  002090E5     LDR r2, [r0]
		   0x010DD568:  0400A0E1     MOV r0, r4
		   0x010DD56C:  45576CEB     BL $+0x1b15d1c  // CALL → List<object>.Find
		   0x010DD570:  0040A0E1     MOV r4, r0
		   0x010DD574:  000050E3     CMPS r0, r0, 0x0
		   0x010DD578:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD580
		   // 
		   // ──── Block 52 else (r0 == sb, 0x1) ────────────────────
		   0x010DD57C:  93F7F9EB     BL $-0x1821ac
		   // ──── Block 53 if (r0 != sb, 0x1) ────────────────────
		   0x010DD580:  085098E5     LDR r5, [r8, 0x8]
		   0x010DD584:  284094E5     LDR r4, [r4, 0x28]
		   0x010DD588:  000055E3     CMPS r0, r5, 0x0
		   0x010DD58C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD594
		   // 
		   // ──── Block 54 else (r0 == sb, 0x1) ────────────────────
		   0x010DD590:  8EF7F9EB     BL $-0x1821c0
		   // ──── Block 55 if (r0 != sb, 0x1) ────────────────────
		   0x010DD594:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010DD598:  000054E3     CMPS r0, r4, 0x0
		   0x010DD59C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD5A4
		   // 
		   // ──── Block 56 else (r0 == sb, 0x1) ────────────────────
		   0x010DD5A0:  8AF7F9EB     BL $-0x1821d0
		   // ──── Block 57 if (r0 != sb, 0x1) ────────────────────
		   0x010DD5A4:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010DD5A8:  000050E3     CMPS r0, r0, 0x0
		   0x010DD5AC:  2500000A     BEQ $+0x9c  // if (==) goto 0x010DD648
		   // 
		   // ──── Block 58 else (r0 != sb, 0x1) ────────────────────
		   0x010DD5B0:  107094E5     LDR r7, [r4, 0x10]
		   0x010DD5B4:  010040E2     SUB r0, r0, 0x1
		   0x010DD5B8:  300000EA     B $+0xc8  // goto 0x010DD680
		   // ──── Block 59 if (r0 != sb, 0x1) ────────────────────
		   0x010DD5BC:  E8099FE5     LDR r0, [pc, 0x9e8]
		   0x010DD5C0:  0810A0E1     MOV r1, r8
		   0x010DD5C4:  0030A0E3     MOV r3, 0x0
		   0x010DD5C8:  00009FE7     LDR r0, [pc, r0]
		   0x010DD5CC:  002090E5     LDR r2, [r0]
		   0x010DD5D0:  0500A0E1     MOV r0, r5
		   0x010DD5D4:  2BC233EB     BL $+0xcf08b4  // CALL → Predicate<object>..ctor
		   0x010DD5D8:  000054E3     CMPS r0, r4, 0x0
		   0x010DD5DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD5E4
		   // 
		   // ──── Block 60 else (r0 == sb, 0x1) ────────────────────
		   0x010DD5E0:  7AF7F9EB     BL $-0x182210
		   // ──── Block 61 if (r0 != sb, 0x1) ────────────────────
		   0x010DD5E4:  C4099FE5     LDR r0, [pc, 0x9c4]
		   0x010DD5E8:  0510A0E1     MOV r1, r5
		   0x010DD5EC:  00009FE7     LDR r0, [pc, r0]
		   0x010DD5F0:  002090E5     LDR r2, [r0]
		   0x010DD5F4:  0400A0E1     MOV r0, r4
		   0x010DD5F8:  22576CEB     BL $+0x1b15c90  // CALL → List<object>.Find
		   0x010DD5FC:  0040A0E1     MOV r4, r0
		   0x010DD600:  000050E3     CMPS r0, r0, 0x0
		   0x010DD604:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD60C
		   // 
		   // ──── Block 62 else (r0 == sb, 0x1) ────────────────────
		   0x010DD608:  70F7F9EB     BL $-0x182238
		   // ──── Block 63 if (r0 != sb, 0x1) ────────────────────
		   0x010DD60C:  085098E5     LDR r5, [r8, 0x8]
		   0x010DD610:  284094E5     LDR r4, [r4, 0x28]
		   0x010DD614:  000055E3     CMPS r0, r5, 0x0
		   0x010DD618:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD620
		   // 
		   // ──── Block 64 else (r0 == sb, 0x1) ────────────────────
		   0x010DD61C:  6BF7F9EB     BL $-0x18224c
		   // ──── Block 65 if (r0 != sb, 0x1) ────────────────────
		   0x010DD620:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010DD624:  000054E3     CMPS r0, r4, 0x0
		   0x010DD628:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD630
		   // 
		   // ──── Block 66 else (r0 == sb, 0x1) ────────────────────
		   0x010DD62C:  67F7F9EB     BL $-0x18225c
		   // ──── Block 67 if (r0 != sb, 0x1) ────────────────────
		   0x010DD630:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010DD634:  000050E3     CMPS r0, r0, 0x0
		   0x010DD638:  0800000A     BEQ $+0x28  // if (==) goto 0x010DD660
		   // 
		   // ──── Block 68 else (r0 != sb, 0x1) ────────────────────
		   0x010DD63C:  107094E5     LDR r7, [r4, 0x10]
		   0x010DD640:  010040E2     SUB r0, r0, 0x1
		   0x010DD644:  420000EA     B $+0x110
		   // ──── Block 69 if (r0 == sb, 0x1) ────────────────────
		   0x010DD648:  61F7F9EB     BL $-0x182274
		   0x010DD64C:  DC60C4E1     LDRD r6, r7, [r4, 0xc]
		   0x010DD650:  000056E3     CMPS r0, r6, 0x0
		   0x010DD654:  0700000A     BEQ $+0x24  // if (==) goto 0x010DD678
		   // 
		   // ──── Block 70 else (r0 != sb, 0x1) ────────────────────
		   0x010DD658:  010046E2     SUB r0, r6, 0x1
		   0x010DD65C:  070000EA     B $+0x24  // goto 0x010DD680
		   // ──── Block 71 if (r0 == sb, 0x1) ────────────────────
		   0x010DD660:  5BF7F9EB     BL $-0x18228c
		   0x010DD664:  DC60C4E1     LDRD r6, r7, [r4, 0xc]
		   0x010DD668:  000056E3     CMPS r0, r6, 0x0
		   0x010DD66C:  3600000A     BEQ $+0xe0
		   0x010DD670:  010046E2     SUB r0, r6, 0x1
		   0x010DD674:  360000EA     B $+0xe0
		   // ──── Block 73 if (r0 == sb, 0x1) ────────────────────
		   0x010DD678:  55F7F9EB     BL $-0x1822a4
		   0x010DD67C:  0000E0E3     MVN r0, r0, 0x0
		   // ──── Block 74 ──────────────────────────────
		   0x010DD680:  1C199FE5     LDR r1, [pc, 0x91c]
		   0x010DD684:  000184E0     ADD r0, r4, r0, lsl 2
		   0x010DD688:  0720A0E1     MOV r2, r7
		   0x010DD68C:  01109FE7     LDR r1, [pc, r1]
		   0x010DD690:  103090E5     LDR r3, [r0, 0x10]
		   0x010DD694:  0400A0E1     MOV r0, r4
		   0x010DD698:  001091E5     LDR r1, [r1]
		   0x010DD69C:  00108DE5     STR r1, [sp]
		   0x010DD6A0:  0510A0E1     MOV r1, r5
		   0x010DD6A4:  D71E1FEB     BL $+0x7c7b64  // CALL → ArrayExtensions.GetByIndexOrDefault<object>
		   0x010DD6A8:  0050A0E1     MOV r5, r0
		   0x010DD6AC:  F4089FE5     LDR r0, [pc, 0x8f4]
		   0x010DD6B0:  00009FE7     LDR r0, [pc, r0]
		   0x010DD6B4:  000090E5     LDR r0, [r0]
		   0x010DD6B8:  41F7F9EB     BL $-0x1822f4
		   0x010DD6BC:  0010A0E3     MOV r1, 0x0
		   0x010DD6C0:  0040A0E1     MOV r4, r0
		   0x010DD6C4:  30E000EB     BL $+0x380c8  // CALL → ItemData..ctor
		   0x010DD6C8:  086098E5     LDR r6, [r8, 0x8]
		   0x010DD6CC:  000056E3     CMPS r0, r6, 0x0
		   0x010DD6D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD6D8
		   // 
		   // ──── Block 75 else (r0 == sb, 0x1) ────────────────────
		   0x010DD6D4:  3DF7F9EB     BL $-0x182304
		   // ──── Block 76 if (r0 != sb, 0x1) ────────────────────
		   0x010DD6D8:  1C6096E5     LDR r6, [r6, 0x1c]
		   0x010DD6DC:  000054E3     CMPS r0, r4, 0x0
		   0x010DD6E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD6E8
		   // 
		   // ──── Block 77 else (r0 == sb, 0x1) ────────────────────
		   0x010DD6E4:  39F7F9EB     BL $-0x182314
		   // ──── Block 78 if (r0 != sb, 0x1) ────────────────────
		   0x010DD6E8:  000055E3     CMPS r0, r5, 0x0
		   0x010DD6EC:  285084E5     STR r5, [r4, 0x28]
		   0x010DD6F0:  4C6084E5     STR r6, [r4, 0x4c]
		   0x010DD6F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010DD6FC
		   // 
		   // ──── Block 79 else (r0 == sb, 0x1) ────────────────────
		   0x010DD6F8:  34F7F9EB     BL $-0x182328
		   // ──── Block 80 if (r0 != sb, 0x1) ────────────────────
		   0x010DD6FC:  180095E5     LDR r0, [r5, 0x18]
		   0x010DD700:  000050E3     CMPS r0, r0, 0x0
		   0x010DD704:  0200000A     BEQ $+0x10  // if (==) goto 0x010DD714
		   // 
		   // ──── Block 81 else (r0 != sb, 0x1) ────────────────────
		   0x010DD708:  081090E5     LDR r1, [r0, 0x8]
		   0x010DD70C:  081084E5     STR r1, [r4, 0x8]
		   0x010DD710:  080000EA     B $+0x28
		   // ──── Block 82 if (r0 == sb, 0x1) ────────────────────
		   0x010DD714:  2DF7F9EB     BL $-0x182344
		   0x010DD718:  180095E5     LDR r0, [r5, 0x18]
		   0x010DD71C:  0810A0E3     MOV r1, 0x8
		   0x010DD720:  001091E5     LDR r1, [r1]
		   0x010DD724:  000050E3     CMPS r0, r0, 0x0
		   0x010DD728:  081084E5     STR r1, [r4, 0x8]
		   0x010DD72C:  0100001A     BNE $+0xc
		   0x010DD730:  26F7F9EB     BL $-0x182360
		   0x010DD734:  0000A0E3     MOV r0, 0x0
		*/
	}

	// RVA: 0x10DF900 Offset: 0x10DF900 VA: 0x10DF900
	private List<ItemData> GetItemSource(ItemData goalItemObject) {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DF900:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DF904:  74D04DE2     SUB sp, sp, 0x74
		   0x010DF908:  F8439FE5     LDR r4, [pc, 0x3f8]
		   0x010DF90C:  00A0A0E1     MOV r10, r0
		   0x010DF910:  0170A0E1     MOV r7, r1
		   0x010DF914:  04408FE0     ADD r4, pc, r4
		   0x010DF918:  0000D4E5     LDRB r0, [r4]
		   0x010DF91C:  000050E3     CMPS r0, r0, 0x0
		   0x010DF920:  2E00001A     BNE $+0xc0  // if (!=) goto 0x010DF9E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DF924:  E0039FE5     LDR r0, [pc, 0x3e0]
		   0x010DF928:  00009FE7     LDR r0, [pc, r0]
		   0x010DF92C:  0BEEF9EB     BL $-0x1847cc
		   0x010DF930:  D8039FE5     LDR r0, [pc, 0x3d8]
		   0x010DF934:  00009FE7     LDR r0, [pc, r0]
		   0x010DF938:  08EEF9EB     BL $-0x1847d8
		   0x010DF93C:  D0039FE5     LDR r0, [pc, 0x3d0]
		   0x010DF940:  00009FE7     LDR r0, [pc, r0]
		   0x010DF944:  05EEF9EB     BL $-0x1847e4
		   0x010DF948:  C8039FE5     LDR r0, [pc, 0x3c8]
		   0x010DF94C:  00009FE7     LDR r0, [pc, r0]
		   0x010DF950:  02EEF9EB     BL $-0x1847f0
		   0x010DF954:  C0039FE5     LDR r0, [pc, 0x3c0]
		   0x010DF958:  00009FE7     LDR r0, [pc, r0]
		   0x010DF95C:  FFEDF9EB     BL $-0x1847fc
		   0x010DF960:  B8039FE5     LDR r0, [pc, 0x3b8]
		   0x010DF964:  00009FE7     LDR r0, [pc, r0]
		   0x010DF968:  FCEDF9EB     BL $-0x184808
		   0x010DF96C:  B0039FE5     LDR r0, [pc, 0x3b0]
		   0x010DF970:  00009FE7     LDR r0, [pc, r0]
		   0x010DF974:  F9EDF9EB     BL $-0x184814
		   0x010DF978:  A8039FE5     LDR r0, [pc, 0x3a8]
		   0x010DF97C:  00009FE7     LDR r0, [pc, r0]
		   0x010DF980:  F6EDF9EB     BL $-0x184820
		   0x010DF984:  A0039FE5     LDR r0, [pc, 0x3a0]
		   0x010DF988:  00009FE7     LDR r0, [pc, r0]
		   0x010DF98C:  F3EDF9EB     BL $-0x18482c
		   0x010DF990:  98039FE5     LDR r0, [pc, 0x398]
		   0x010DF994:  00009FE7     LDR r0, [pc, r0]
		   0x010DF998:  F0EDF9EB     BL $-0x184838
		   0x010DF99C:  90039FE5     LDR r0, [pc, 0x390]
		   0x010DF9A0:  00009FE7     LDR r0, [pc, r0]
		   0x010DF9A4:  EDEDF9EB     BL $-0x184844
		   0x010DF9A8:  88039FE5     LDR r0, [pc, 0x388]
		   0x010DF9AC:  00009FE7     LDR r0, [pc, r0]
		   0x010DF9B0:  EAEDF9EB     BL $-0x184850
		   0x010DF9B4:  80039FE5     LDR r0, [pc, 0x380]
		   0x010DF9B8:  00009FE7     LDR r0, [pc, r0]
		   0x010DF9BC:  E7EDF9EB     BL $-0x18485c
		   0x010DF9C0:  78039FE5     LDR r0, [pc, 0x378]
		   0x010DF9C4:  00009FE7     LDR r0, [pc, r0]
		   0x010DF9C8:  E4EDF9EB     BL $-0x184868
		   0x010DF9CC:  70039FE5     LDR r0, [pc, 0x370]
		   0x010DF9D0:  00009FE7     LDR r0, [pc, r0]
		   0x010DF9D4:  E1EDF9EB     BL $-0x184874
		   0x010DF9D8:  0100A0E3     MOV r0, 0x1
		   0x010DF9DC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DF9E0:  20008DE2     ADD r0, sp, 0x20
		   0x010DF9E4:  5010A0E3     MOV r1, 0x50
		   0x010DF9E8:  4709FDEB     BL $-0xbdadc
		   0x010DF9EC:  54039FE5     LDR r0, [pc, 0x354]
		*/
	}

	// RVA: 0x10E0BA4 Offset: 0x10E0BA4 VA: 0x10E0BA4
	public void RemoveBubbleByID(int id) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E0BA4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010E0BA8:  3C5090E5     LDR r5, [r0, 0x3c]
		   0x010E0BAC:  0140A0E1     MOV r4, r1
		   0x010E0BB0:  000055E3     CMPS r0, r5, 0x0
		   0x010E0BB4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0BBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E0BB8:  04EAF9EB     BL $-0x1857e8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E0BBC:  0500A0E1     MOV r0, r5
		   0x010E0BC0:  0410A0E1     MOV r1, r4
		   0x010E0BC4:  0020A0E3     MOV r2, 0x0
		   0x010E0BC8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010E0BCC:  936101EA     B $+0x58654  // TAIL CALL → GameStateSave.RemoveBubbleByID
		*/
	}

	// RVA: 0x10E0BD0 Offset: 0x10E0BD0 VA: 0x10E0BD0
	public ItemDataSave RemoveItemDataWithCopy(Item item) {
		/* Disassembly (ARM32, 72 instructions, 0x120 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E0BD0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010E0BD4:  F8609FE5     LDR r6, [pc, 0xf8]
		   0x010E0BD8:  0050A0E1     MOV r5, r0
		   0x010E0BDC:  0140A0E1     MOV r4, r1
		   0x010E0BE0:  06608FE0     ADD r6, pc, r6
		   0x010E0BE4:  0000D6E5     LDRB r0, [r6]
		   0x010E0BE8:  000050E3     CMPS r0, r0, 0x0
		   0x010E0BEC:  0A00001A     BNE $+0x30  // if (!=) goto 0x010E0C1C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E0BF0:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010E0BF4:  00009FE7     LDR r0, [pc, r0]
		   0x010E0BF8:  58E9F9EB     BL $-0x185a98
		   0x010E0BFC:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010E0C00:  00009FE7     LDR r0, [pc, r0]
		   0x010E0C04:  55E9F9EB     BL $-0x185aa4
		   0x010E0C08:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010E0C0C:  00009FE7     LDR r0, [pc, r0]
		   0x010E0C10:  52E9F9EB     BL $-0x185ab0
		   0x010E0C14:  0100A0E3     MOV r0, 0x1
		   0x010E0C18:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E0C1C:  546095E5     LDR r6, [r5, 0x54]
		   0x010E0C20:  000056E3     CMPS r0, r6, 0x0
		   0x010E0C24:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0C2C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E0C28:  E8E9F9EB     BL $-0x185858
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E0C2C:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010E0C30:  0410A0E1     MOV r1, r4
		   0x010E0C34:  00009FE7     LDR r0, [pc, r0]
		   0x010E0C38:  002090E5     LDR r2, [r0]
		   0x010E0C3C:  0600A0E1     MOV r0, r6
		   0x010E0C40:  C5486CEB     BL $+0x1b1231c  // CALL → List<object>.Contains
		   0x010E0C44:  000050E3     CMPS r0, r0, 0x0
		   0x010E0C48:  0900000A     BEQ $+0x2c  // if (==) goto 0x010E0C74
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010E0C4C:  546095E5     LDR r6, [r5, 0x54]
		   0x010E0C50:  000056E3     CMPS r0, r6, 0x0
		   0x010E0C54:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0C5C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E0C58:  DCE9F9EB     BL $-0x185888
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E0C5C:  84009FE5     LDR r0, [pc, 0x84]
		   0x010E0C60:  0410A0E1     MOV r1, r4
		   0x010E0C64:  00009FE7     LDR r0, [pc, r0]
		   0x010E0C68:  002090E5     LDR r2, [r0]
		   0x010E0C6C:  0600A0E1     MOV r0, r6
		   0x010E0C70:  8D4D6CEB     BL $+0x1b1363c  // CALL → List<object>.Remove
		   // ──── Block 8 if (==) ────────────────────
		   0x010E0C74:  70009FE5     LDR r0, [pc, 0x70]
		   0x010E0C78:  00009FE7     LDR r0, [pc, r0]
		   0x010E0C7C:  000090E5     LDR r0, [r0]
		   0x010E0C80:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E0C84:  006090E5     LDR r6, [r0]
		   0x010E0C88:  000056E3     CMPS r0, r6, 0x0
		   0x010E0C8C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0C94
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E0C90:  CEE9F9EB     BL $-0x1858c0
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E0C94:  0600A0E1     MOV r0, r6
		   0x010E0C98:  0010A0E3     MOV r1, 0x0
		   0x010E0C9C:  9A4211EB     BL $+0x450a70  // CALL → FTUERewardsBox.FieldCellFreed
		   0x010E0CA0:  3C5095E5     LDR r5, [r5, 0x3c]
		   0x010E0CA4:  000054E3     CMPS r0, r4, 0x0
		   0x010E0CA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0CB0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E0CAC:  C7E9F9EB     BL $-0x1858dc
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E0CB0:  344094E5     LDR r4, [r4, 0x34]
		   0x010E0CB4:  000055E3     CMPS r0, r5, 0x0
		   0x010E0CB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0CC0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E0CBC:  C3E9F9EB     BL $-0x1858ec
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E0CC0:  0500A0E1     MOV r0, r5
		   0x010E0CC4:  0410A0E1     MOV r1, r4
		   0x010E0CC8:  0020A0E3     MOV r2, 0x0
		   0x010E0CCC:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010E0CD0:  2C6501EA     B $+0x594b8  // TAIL CALL → GameStateSave.RemoveItemDataByID
		   0x010E0CD4:  AEB01403     TSTSEQ fp, r4, 0xae
		   0x010E0CD8:  EC82F902     RSCSEQ r8, sb, 0xc000000e
		   0x010E0CDC:  DC85F902     RSCSEQ r8, sb, 0x37000000
		   0x010E0CE0:  DC82F902     RSCSEQ r8, sb, 0xc000000d
		   0x010E0CE4:  A885F902     RSCSEQ r8, sb, 0x2a000000
		   0x010E0CE8:  8482F902     RSCSEQ r8, sb, 0x40000008
		   0x010E0CEC:  6882F902     RSCSEQ r8, sb, 0x80000006
		*/
	}

	// RVA: 0x10E0CF0 Offset: 0x10E0CF0 VA: 0x10E0CF0
	private void Unboxing(Cell cell) {
		/* Disassembly (ARM32, 262 instructions, 0x418 bytes):
		   // CFG: 42 blocks, 40 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E0CF0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E0CF4:  30D04DE2     SUB sp, sp, 0x30
		   0x010E0CF8:  B0539FE5     LDR r5, [pc, 0x3b0]
		   0x010E0CFC:  0080A0E1     MOV r8, r0
		   0x010E0D00:  0140A0E1     MOV r4, r1
		   0x010E0D04:  05508FE0     ADD r5, pc, r5
		   0x010E0D08:  0000D5E5     LDRB r0, [r5]
		   0x010E0D0C:  000050E3     CMPS r0, r0, 0x0
		   0x010E0D10:  1900001A     BNE $+0x6c  // if (!=) goto 0x010E0D7C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E0D14:  98039FE5     LDR r0, [pc, 0x398]
		   0x010E0D18:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D1C:  0FE9F9EB     BL $-0x185bbc
		   0x010E0D20:  90039FE5     LDR r0, [pc, 0x390]
		   0x010E0D24:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D28:  0CE9F9EB     BL $-0x185bc8
		   0x010E0D2C:  88039FE5     LDR r0, [pc, 0x388]
		   0x010E0D30:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D34:  09E9F9EB     BL $-0x185bd4
		   0x010E0D38:  80039FE5     LDR r0, [pc, 0x380]
		   0x010E0D3C:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D40:  06E9F9EB     BL $-0x185be0
		   0x010E0D44:  78039FE5     LDR r0, [pc, 0x378]
		   0x010E0D48:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D4C:  03E9F9EB     BL $-0x185bec
		   0x010E0D50:  70039FE5     LDR r0, [pc, 0x370]
		   0x010E0D54:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D58:  00E9F9EB     BL $-0x185bf8
		   0x010E0D5C:  68039FE5     LDR r0, [pc, 0x368]
		   0x010E0D60:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D64:  FDE8F9EB     BL $-0x185c04
		   0x010E0D68:  60039FE5     LDR r0, [pc, 0x360]
		   0x010E0D6C:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D70:  FAE8F9EB     BL $-0x185c10
		   0x010E0D74:  0100A0E3     MOV r0, 0x1
		   0x010E0D78:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E0D7C:  50039FE5     LDR r0, [pc, 0x350]
		   0x010E0D80:  00009FE7     LDR r0, [pc, r0]
		   0x010E0D84:  000090E5     LDR r0, [r0]
		   0x010E0D88:  8DE9F9EB     BL $-0x1859c4
		   0x010E0D8C:  0010A0E3     MOV r1, 0x0
		   0x010E0D90:  0060A0E1     MOV r6, r0
		   0x010E0D94:  643E00EB     BL $+0xf998  // CALL → <>c__DisplayClass90_0..ctor
		   0x010E0D98:  38539FE5     LDR r5, [pc, 0x338]
		   0x010E0D9C:  05509FE7     LDR r5, [pc, r5]
		   0x010E0DA0:  000095E5     LDR r0, [r5]
		   0x010E0DA4:  741090E5     LDR r1, [r0, 0x74]
		   0x010E0DA8:  000051E3     CMPS r0, r1, 0x0
		   0x010E0DAC:  0100001A     BNE $+0xc  // if (!=) goto 0x010E0DB8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E0DB0:  37E9F9EB     BL $-0x185b1c
		   0x010E0DB4:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E0DB8:  1C139FE5     LDR r1, [pc, 0x31c]
		   0x010E0DBC:  01109FE7     LDR r1, [pc, r1]
		   0x010E0DC0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E0DC4:  001091E5     LDR r1, [r1]
		   0x010E0DC8:  305090E5     LDR r5, [r0, 0x30]
		   0x010E0DCC:  742091E5     LDR r2, [r1, 0x74]
		   0x010E0DD0:  000052E3     CMPS r0, r2, 0x0
		   0x010E0DD4:  0100001A     BNE $+0xc  // if (!=) goto 0x010E0DE0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E0DD8:  0100A0E1     MOV r0, r1
		   0x010E0DDC:  2CE9F9EB     BL $-0x185b48
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E0DE0:  0500A0E1     MOV r0, r5
		   0x010E0DE4:  FE15A0E3     MOV r1, 0x3f800000
		   0x010E0DE8:  0020A0E3     MOV r2, 0x0
		   0x010E0DEC:  1CF703EB     BL $+0xfdc78  // CALL → SoundController.PlaySound
		   0x010E0DF0:  000054E3     CMPS r0, r4, 0x0
		   0x010E0DF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0DFC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E0DF8:  74E9F9EB     BL $-0x185a28
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E0DFC:  245094E5     LDR r5, [r4, 0x24]
		   0x010E0E00:  000055E3     CMPS r0, r5, 0x0
		   0x010E0E04:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0E0C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E0E08:  70E9F9EB     BL $-0x185a38
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E0E0C:  845095E5     LDR r5, [r5, 0x84]
		   0x010E0E10:  000055E3     CMPS r0, r5, 0x0
		   0x010E0E14:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0E1C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E0E18:  6CE9F9EB     BL $-0x185a48
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E0E1C:  285095E5     LDR r5, [r5, 0x28]
		   0x010E0E20:  000055E3     CMPS r0, r5, 0x0
		   0x010E0E24:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0E2C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E0E28:  68E9F9EB     BL $-0x185a58
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E0E2C:  185095E5     LDR r5, [r5, 0x18]
		   0x010E0E30:  000056E3     CMPS r0, r6, 0x0
		   0x010E0E34:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0E3C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E0E38:  64E9F9EB     BL $-0x185a68
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E0E3C:  241094E5     LDR r1, [r4, 0x24]
		   0x010E0E40:  0000A0E3     MOV r0, 0x0
		   0x010E0E44:  085086E5     STR r5, [r6, 0x8]  // vtable: Object.Equals
		   0x010E0E48:  0020A0E3     MOV r2, 0x0
		   0x010E0E4C:  00008DE5     STR r0, [sp]
		   0x010E0E50:  0030A0E3     MOV r3, 0x0
		   0x010E0E54:  04008DE5     STR r0, [sp, 0x4]
		   0x010E0E58:  08008DE5     STR r0, [sp, 0x8]
		   0x010E0E5C:  0800A0E1     MOV r0, r8
		   0x010E0E60:  A80000EB     BL $+0x2a8  // CALL → GameState.RemoveItem
		   0x010E0E64:  0400A0E1     MOV r0, r4
		   0x010E0E68:  0010A0E3     MOV r1, 0x0
		   0x010E0E6C:  83AFFFEB     BL $-0x141ec
		   0x010E0E70:  387098E5     LDR r7, [r8, 0x38]
		   0x010E0E74:  64029FE5     LDR r0, [pc, 0x264]
		   0x010E0E78:  00009FE7     LDR r0, [pc, r0]
		   0x010E0E7C:  000090E5     LDR r0, [r0]
		   0x010E0E80:  4FE9F9EB     BL $-0x185abc
		   0x010E0E84:  0050A0E1     MOV r5, r0
		   0x010E0E88:  54029FE5     LDR r0, [pc, 0x254]
		   0x010E0E8C:  0610A0E1     MOV r1, r6
		   0x010E0E90:  0030A0E3     MOV r3, 0x0
		   0x010E0E94:  00009FE7     LDR r0, [pc, r0]
		   0x010E0E98:  002090E5     LDR r2, [r0]
		   0x010E0E9C:  0500A0E1     MOV r0, r5
		   0x010E0EA0:  F8B333EB     BL $+0xcecfe8  // CALL → Predicate<object>..ctor
		   0x010E0EA4:  000057E3     CMPS r0, r7, 0x0
		   0x010E0EA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0EB0
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E0EAC:  47E9F9EB     BL $-0x185adc
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E0EB0:  30029FE5     LDR r0, [pc, 0x230]
		   0x010E0EB4:  0510A0E1     MOV r1, r5
		   0x010E0EB8:  00009FE7     LDR r0, [pc, r0]
		   0x010E0EBC:  002090E5     LDR r2, [r0]
		   0x010E0EC0:  0700A0E1     MOV r0, r7
		   0x010E0EC4:  EF486CEB     BL $+0x1b123c4  // CALL → List<object>.Find
		   0x010E0EC8:  0070A0E1     MOV r7, r0
		   0x010E0ECC:  000050E3     CMPS r0, r0, 0x0
		   0x010E0ED0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0ED8
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E0ED4:  3DE9F9EB     BL $-0x185b04
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E0ED8:  085096E5     LDR r5, [r6, 0x8]
		   0x010E0EDC:  286097E5     LDR r6, [r7, 0x28]
		   0x010E0EE0:  000055E3     CMPS r0, r5, 0x0
		   0x010E0EE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0EEC
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010E0EE8:  38E9F9EB     BL $-0x185b18
		   // ──── Block 22 if (!=) ────────────────────
		   0x010E0EEC:  0500A0E1     MOV r0, r5
		   0x010E0EF0:  0010A0E3     MOV r1, 0x0
		   0x010E0EF4:  BBA300EB     BL $+0x28ef4  // CALL → ItemData.get_Order
		   0x010E0EF8:  0050A0E1     MOV r5, r0
		   0x010E0EFC:  000056E3     CMPS r0, r6, 0x0
		   0x010E0F00:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0F08
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010E0F04:  31E9F9EB     BL $-0x185b34
		   // ──── Block 24 if (!=) ────────────────────
		   0x010E0F08:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010E0F0C:  050050E1     CMPS r0, r0, r5
		   0x010E0F10:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010E0F18
		   // 
		   // ──── Block 25 else (<= (unsigned)) ────────────────────
		   0x010E0F14:  2EE9F9EB     BL $-0x185b40
		   // ──── Block 26 if (> (unsigned)) ────────────────────
		   0x010E0F18:  050186E0     ADD r0, r6, r5, lsl 2
		   0x010E0F1C:  105090E5     LDR r5, [r0, 0x10]
		   0x010E0F20:  000055E3     CMPS r0, r5, 0x0
		   0x010E0F24:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0F2C
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010E0F28:  28E9F9EB     BL $-0x185b58
		   // ──── Block 28 if (!=) ────────────────────
		   0x010E0F2C:  186095E5     LDR r6, [r5, 0x18]
		   0x010E0F30:  000056E3     CMPS r0, r6, 0x0
		   0x010E0F34:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0F3C
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010E0F38:  24E9F9EB     BL $-0x185b68
		   // ──── Block 30 if (!=) ────────────────────
		   0x010E0F3C:  440098E5     LDR r0, [r8, 0x44]
		   0x010E0F40:  0010A0E3     MOV r1, 0x0
		   0x010E0F44:  0020E0E3     MVN r2, r0, 0x0
		   0x010E0F48:  0130A0E3     MOV r3, 0x1
		   0x010E0F4C:  206086E5     STR r6, [r6, 0x20]
		   0x010E0F50:  03008DE9     STMIA sp, {r0, r1}
		   0x010E0F54:  0800A0E1     MOV r0, r8
		   0x010E0F58:  20108DE5     STR r1, [sp, 0x20]
		   0x010E0F5C:  24208DE5     STR r2, [sp, 0x24]
		   0x010E0F60:  18208DE5     STR r2, [sp, 0x18]
		   0x010E0F64:  0120A0E3     MOV r2, 0x1
		   0x010E0F68:  28108DE5     STR r1, [sp, 0x28]
		   0x010E0F6C:  00308DE5     STR r3, [sp]
		   0x010E0F70:  14308DE5     STR r3, [sp, 0x14]
		   0x010E0F74:  0430A0E1     MOV r3, r4
		   0x010E0F78:  0C108DE5     STR r1, [sp, 0xc]
		   0x010E0F7C:  10108DE5     STR r1, [sp, 0x10]
		   0x010E0F80:  1C108DE5     STR r1, [sp, 0x1c]
		   0x010E0F84:  0610A0E1     MOV r1, r6
		   0x010E0F88:  DEDDFFEB     BL $-0x8880
		   0x010E0F8C:  0040A0E1     MOV r4, r0
		   0x010E0F90:  000050E3     CMPS r0, r0, 0x0
		   0x010E0F94:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0F9C
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010E0F98:  0CE9F9EB     BL $-0x185bc8
		   // ──── Block 32 if (!=) ────────────────────
		   0x010E0F9C:  0400A0E1     MOV r0, r4
		   0x010E0FA0:  0010A0E3     MOV r1, 0x0
		   0x010E0FA4:  C05B3CEB     BL $+0xf16f08  // CALL → sub_1FF7EAC
		   0x010E0FA8:  3C619FE5     LDR r6, [pc, 0x13c]
		   0x010E0FAC:  0050A0E1     MOV r5, r0
		   0x010E0FB0:  06608FE0     ADD r6, pc, r6
		   0x010E0FB4:  0000D6E5     LDRB r0, [r6]
		   0x010E0FB8:  000050E3     CMPS r0, r0, 0x0
		   0x010E0FBC:  0400001A     BNE $+0x18  // if (!=) goto 0x010E0FD4
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010E0FC0:  28019FE5     LDR r0, [pc, 0x128]
		   0x010E0FC4:  00009FE7     LDR r0, [pc, r0]
		   0x010E0FC8:  64E8F9EB     BL $-0x185e68
		   0x010E0FCC:  0100A0E3     MOV r0, 0x1
		   0x010E0FD0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 34 if (!=) ────────────────────
		   0x010E0FD4:  18919FE5     LDR sb, [pc, 0x118]
		   0x010E0FD8:  000055E3     CMPS r0, r5, 0x0
		   0x010E0FDC:  09909FE7     LDR sb, [pc, sb]
		   0x010E0FE0:  000099E5     LDR r0, [sb]
		   0x010E0FE4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E0FE8:  C00190E8     LDM r0, {r6, r7, r8}
		   0x010E0FEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0FF4
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010E0FF0:  F6E8F9EB     BL $-0x185c20
		   // ──── Block 36 if (!=) ────────────────────
		   0x010E0FF4:  0000A0E3     MOV r0, 0x0
		   0x010E0FF8:  0610A0E1     MOV r1, r6
		   0x010E0FFC:  00008DE5     STR r0, [sp]
		   0x010E1000:  0500A0E1     MOV r0, r5
		   0x010E1004:  0720A0E1     MOV r2, r7
		   0x010E1008:  0830A0E1     MOV r3, r8
		   0x010E100C:  575C3CEB     BL $+0xf17164  // CALL → sub_1FF8170
		   0x010E1010:  000054E3     CMPS r0, r4, 0x0
		   0x010E1014:  0000001A     BNE $+0x8  // if (!=) goto 0x010E101C
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x010E1018:  ECE8F9EB     BL $-0x185c48
		   // ──── Block 38 if (!=) ────────────────────
		   0x010E101C:  0400A0E1     MOV r0, r4
		   0x010E1020:  0010A0E3     MOV r1, 0x0
		   0x010E1024:  0050A0E3     MOV r5, 0x0
		   0x010E1028:  9F5B3CEB     BL $+0xf16e84  // CALL → sub_1FF7EAC
		   0x010E102C:  C4609FE5     LDR r6, [pc, 0xc4]
		   0x010E1030:  0040A0E1     MOV r4, r0
		   0x010E1034:  06608FE0     ADD r6, pc, r6
		   0x010E1038:  0000D6E5     LDRB r0, [r6]
		   0x010E103C:  000050E3     CMPS r0, r0, 0x0
		   0x010E1040:  0400001A     BNE $+0x18  // if (!=) goto 0x010E1058
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010E1044:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010E1048:  00009FE7     LDR r0, [pc, r0]
		   0x010E104C:  43E8F9EB     BL $-0x185eec
		   0x010E1050:  0100A0E3     MOV r0, 0x1
		   0x010E1054:  0000C6E5     STRB r0, [r6]
		   // ──── Block 40 if (!=) ────────────────────
		   0x010E1058:  000099E5     LDR r0, [sb]
		   0x010E105C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E1060:  0C3080E2     ADD r3, r0, 0xc
		   0x010E1064:  CD0C0CE3     MOV r0, 0xcccd
		   0x010E1068:  CC0E43E3     MOVT r0, 0x3ecc
		   0x010E106C:  0E0093E8     LDM r3, {r1, r2, r3}
		   0x010E1070:  21008DE8     STM sp, {r0, r5}
		   0x010E1074:  0400A0E1     MOV r0, r4
		   0x010E1078:  11C512EB     BL $+0x4b144c  // CALL → ShortcutExtensions.DOScale
		   0x010E107C:  7C109FE5     LDR r1, [pc, 0x7c]
		   0x010E1080:  01109FE7     LDR r1, [pc, r1]
		   0x010E1084:  002091E5     LDR r2, [r1]
		   0x010E1088:  1B10A0E3     MOV r1, 0x1b
		   0x010E108C:  055728EB     BL $+0xa15c1c  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x010E1090:  6C109FE5     LDR r1, [pc, 0x6c]
		   0x010E1094:  01109FE7     LDR r1, [pc, r1]
		   0x010E1098:  002091E5     LDR r2, [r1]
		   0x010E109C:  331303E3     MOV r1, 0x3333
		   0x010E10A0:  331F43E3     MOVT r1, 0x3f33
		   0x010E10A4:  30D08DE2     ADD sp, sp, 0x30
		   0x010E10A8:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E10AC:  655628EA     B $+0xa1599c  // TAIL CALL → TweenSettingsExtensions.SetDelay<object>
		   0x010E10B0:  8BAF1403     TSTSEQ r10, r4, 0x22c
		   0x010E10B4:  B882F902     RSCSEQ r8, sb, 0x8000000b
		   0x010E10B8:  B082F902     RSCSEQ r8, sb, 0xb
		   0x010E10BC:  107AF902     RSCSEQ r7, sb, 0x10000
		   0x010E10C0:  087AF902     RSCSEQ r7, sb, 0x8000
		   0x010E10C4:  4C79F902     RSCSEQ r7, sb, 0x130000
		   0x010E10C8:  446EF902     RSCSEQ r6, sb, 0x440
		   0x010E10CC:  8084F902     RSCSEQ r8, sb, 0x80000000
		   0x010E10D0:  7884F902     RSCSEQ r8, sb, 0x78000000
		   0x010E10D4:  6484F902     RSCSEQ r8, sb, 0x64000000
		   0x010E10D8:  A879F902     RSCSEQ r7, sb, 0x2a0000
		   0x010E10DC:  8479F902     RSCSEQ r7, sb, 0x210000
		   0x010E10E0:  5C81F902     RSCSEQ r8, sb, 0x17
		   0x010E10E4:  4C83F902     RSCSEQ r8, sb, 0x30000001
		   0x010E10E8:  1881F902     RSCSEQ r8, sb, 0x6
		   0x010E10EC:  D3A91403     TSTSEQ r10, r4, 0x34c000
		   0x010E10F0:  6C64F902     RSCSEQ r6, sb, 0x6c000000
		   0x010E10F4:  5464F902     RSCSEQ r6, sb, 0x54000000
		   0x010E10F8:  7FAB1403     TSTSEQ r10, r4, 0x1fc00
		   0x010E10FC:  E863F902     RSCSEQ r6, sb, 0xa0000003
		   0x010E1100:  186BF902     RSCSEQ r6, sb, 0x6000
		   0x010E1104:  0076F902     RSCSEQ r7, sb, 0x0
		*/
	}

	// RVA: 0x10DD098 Offset: 0x10DD098 VA: 0x10DD098
	public void ReturnToPoolFieldsItems() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DD098:  771000EA     B $+0x41e4  // TAIL CALL → GameState.DestroyItemsFromField
		*/
	}

	// RVA: 0x10E1638 Offset: 0x10E1638 VA: 0x10E1638
	public Item UndoItem(ItemDataSave dataSave, ItemData itemData, Cell cell) {
		/* Disassembly (ARM32, 64 instructions, 0x100 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E1638:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E163C:  30D04DE2     SUB sp, sp, 0x30
		   0x010E1640:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x010E1644:  0060A0E1     MOV r6, r0
		   0x010E1648:  0380A0E1     MOV r8, r3
		   0x010E164C:  0290A0E1     MOV sb, r2
		   0x010E1650:  04408FE0     ADD r4, pc, r4
		   0x010E1654:  0170A0E1     MOV r7, r1
		   0x010E1658:  0000D4E5     LDRB r0, [r4]
		   0x010E165C:  000050E3     CMPS r0, r0, 0x0
		   0x010E1660:  0400001A     BNE $+0x18  // if (!=) goto 0x010E1678
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E1664:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x010E1668:  00009FE7     LDR r0, [pc, r0]
		   0x010E166C:  BBE6F9EB     BL $-0x18650c
		   0x010E1670:  0100A0E3     MOV r0, 0x1
		   0x010E1674:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E1678:  3C4096E5     LDR r4, [r6, 0x3c]
		   0x010E167C:  000054E3     CMPS r0, r4, 0x0
		   0x010E1680:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1688
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E1684:  51E7F9EB     BL $-0x1862b4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E1688:  0400A0E1     MOV r0, r4
		   0x010E168C:  0710A0E1     MOV r1, r7
		   0x010E1690:  0020A0E3     MOV r2, 0x0
		   0x010E1694:  0050A0E3     MOV r5, 0x0
		   0x010E1698:  136301EB     BL $+0x58c54  // CALL → GameStateSave.SetItemData
		   0x010E169C:  444096E5     LDR r4, [r6, 0x44]
		   0x010E16A0:  000057E3     CMPS r0, r7, 0x0
		   0x010E16A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E16AC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E16A8:  48E7F9EB     BL $-0x1862d8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E16AC:  341097E5     LDR r1, [r7, 0x34]
		   0x010E16B0:  0020A0E3     MOV r2, 0x0
		   0x010E16B4:  080097E5     LDR r0, [r7, 0x8]
		   0x010E16B8:  0830A0E1     MOV r3, r8
		   0x010E16BC:  24108DE5     STR r1, [sp, 0x24]
		   0x010E16C0:  0110A0E3     MOV r1, 0x1
		   0x010E16C4:  32008DE8     STM sp, {r1, r4, r5}
		   0x010E16C8:  0910A0E1     MOV r1, sb
		   0x010E16CC:  18008DE5     STR r0, [sp, 0x18]
		   0x010E16D0:  0600A0E1     MOV r0, r6
		   0x010E16D4:  20508DE5     STR r5, [sp, 0x20]
		   0x010E16D8:  28508DE5     STR r5, [sp, 0x28]
		   0x010E16DC:  0C508DE5     STR r5, [sp, 0xc]
		   0x010E16E0:  10508DE5     STR r5, [sp, 0x10]
		   0x010E16E4:  14508DE5     STR r5, [sp, 0x14]
		   0x010E16E8:  1C508DE5     STR r5, [sp, 0x1c]
		   0x010E16EC:  05DCFFEB     BL $-0x8fe4
		   0x010E16F0:  0040A0E1     MOV r4, r0
		   0x010E16F4:  38009FE5     LDR r0, [pc, 0x38]
		   0x010E16F8:  00009FE7     LDR r0, [pc, r0]
		   0x010E16FC:  000090E5     LDR r0, [r0]
		   0x010E1700:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E1704:  005090E5     LDR r5, [r0]
		   0x010E1708:  000055E3     CMPS r0, r5, 0x0
		   0x010E170C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1714
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E1710:  2EE7F9EB     BL $-0x186340
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E1714:  0500A0E1     MOV r0, r5
		   0x010E1718:  0010A0E3     MOV r1, 0x0
		   0x010E171C:  CB3F11EB     BL $+0x44ff34  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   0x010E1720:  0400A0E1     MOV r0, r4
		   0x010E1724:  30D08DE2     ADD sp, sp, 0x30
		   0x010E1728:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010E172C:  40A61403     TSTSEQ r10, r4, 0x4000000
		   0x010E1730:  7878F902     RSCSEQ r7, sb, 0x780000
		   0x010E1734:  E877F902     RSCSEQ r7, sb, 0x3a00000
		*/
	}

	// RVA: 0x10D38F4 Offset: 0x10D38F4 VA: 0x10D38F4
	public ItemDataSave GetInventoryItemSave(int id) {
		/* Disassembly (ARM32, 72 instructions, 0x120 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D38F4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D38F8:  F0609FE5     LDR r6, [pc, 0xf0]
		   0x010D38FC:  0050A0E1     MOV r5, r0
		   0x010D3900:  0140A0E1     MOV r4, r1
		   0x010D3904:  06608FE0     ADD r6, pc, r6
		   0x010D3908:  0000D6E5     LDRB r0, [r6]
		   0x010D390C:  000050E3     CMPS r0, r0, 0x0
		   0x010D3910:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010D394C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D3914:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010D3918:  00009FE7     LDR r0, [pc, r0]
		   0x010D391C:  0F1EFAEB     BL $-0x1787bc
		   0x010D3920:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010D3924:  00009FE7     LDR r0, [pc, r0]
		   0x010D3928:  0C1EFAEB     BL $-0x1787c8
		   0x010D392C:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010D3930:  00009FE7     LDR r0, [pc, r0]
		   0x010D3934:  091EFAEB     BL $-0x1787d4
		   0x010D3938:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010D393C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3940:  061EFAEB     BL $-0x1787e0
		   0x010D3944:  0100A0E3     MOV r0, 0x1
		   0x010D3948:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D394C:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010D3950:  00009FE7     LDR r0, [pc, r0]
		   0x010D3954:  000090E5     LDR r0, [r0]
		   0x010D3958:  991EFAEB     BL $-0x178594
		   0x010D395C:  0010A0E3     MOV r1, 0x0
		   0x010D3960:  0060A0E1     MOV r6, r0
		   0x010D3964:  867300EB     BL $+0x1ce20  // CALL → <>c__DisplayClass93_0..ctor
		   0x010D3968:  000056E3     CMPS r0, r6, 0x0
		   0x010D396C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3974
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D3970:  961EFAEB     BL $-0x1785a0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D3974:  3C5095E5     LDR r5, [r5, 0x3c]
		   0x010D3978:  084086E5     STR r4, [r6, 0x8]
		   0x010D397C:  000055E3     CMPS r0, r5, 0x0
		   0x010D3980:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3988
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D3984:  911EFAEB     BL $-0x1785b4
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D3988:  0500A0E1     MOV r0, r5
		   0x010D398C:  0010A0E3     MOV r1, 0x0
		   0x010D3990:  3D4301EB     BL $+0x50cfc  // CALL → GameStateSave.get_Inventory
		   0x010D3994:  0040A0E1     MOV r4, r0
		   0x010D3998:  68009FE5     LDR r0, [pc, 0x68]
		   0x010D399C:  00009FE7     LDR r0, [pc, r0]
		   0x010D39A0:  000090E5     LDR r0, [r0]
		   0x010D39A4:  861EFAEB     BL $-0x1785e0
		   0x010D39A8:  0050A0E1     MOV r5, r0
		   0x010D39AC:  58009FE5     LDR r0, [pc, 0x58]
		   0x010D39B0:  0610A0E1     MOV r1, r6
		   0x010D39B4:  0030A0E3     MOV r3, 0x0
		   0x010D39B8:  00009FE7     LDR r0, [pc, r0]
		   0x010D39BC:  002090E5     LDR r2, [r0]
		   0x010D39C0:  0500A0E1     MOV r0, r5
		   0x010D39C4:  2FE933EB     BL $+0xcfa4c4  // CALL → Predicate<object>..ctor
		   0x010D39C8:  000054E3     CMPS r0, r4, 0x0
		   0x010D39CC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D39D4
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D39D0:  7E1EFAEB     BL $-0x178600
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D39D4:  34009FE5     LDR r0, [pc, 0x34]
		   0x010D39D8:  0510A0E1     MOV r1, r5
		   0x010D39DC:  00009FE7     LDR r0, [pc, r0]
		   0x010D39E0:  002090E5     LDR r2, [r0]
		   0x010D39E4:  0400A0E1     MOV r0, r4
		   0x010D39E8:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010D39EC:  257E6CEA     B $+0x1b1f89c  // TAIL CALL → List<object>.Find
		   0x010D39F0:  8D831503     TSTSEQ r8, r5, 0x34000002
		   0x010D39F4:  E855FA02     RSCSEQ r5, r10, 0x3a000000
		   0x010D39F8:  E055FA02     RSCSEQ r5, r10, 0x38000000
		   0x010D39FC:  D855FA02     RSCSEQ r5, r10, 0x36000000
		   0x010D3A00:  D055FA02     RSCSEQ r5, r10, 0x34000000
		   0x010D3A04:  BC55FA02     RSCSEQ r5, r10, 0x2f000000
		   0x010D3A08:  6855FA02     RSCSEQ r5, r10, 0x1a000000
		   0x010D3A0C:  5055FA02     RSCSEQ r5, r10, 0x14000000
		   0x010D3A10:  2455FA02     RSCSEQ r5, r10, 0x9000000
		*/
	}

	// RVA: 0x10D3A14 Offset: 0x10D3A14 VA: 0x10D3A14
	public Item GetItemFromInventory(UIInventoryItem iItem) {
		/* Disassembly (ARM32, 122 instructions, 0x1E8 bytes):
		   // CFG: 21 blocks, 19 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D3A14:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D3A18:  30D04DE2     SUB sp, sp, 0x30
		   0x010D3A1C:  B4419FE5     LDR r4, [pc, 0x1b4]
		   0x010D3A20:  0050A0E1     MOV r5, r0
		   0x010D3A24:  0160A0E1     MOV r6, r1
		   0x010D3A28:  04408FE0     ADD r4, pc, r4
		   0x010D3A2C:  0000D4E5     LDRB r0, [r4]
		   0x010D3A30:  000050E3     CMPS r0, r0, 0x0
		   0x010D3A34:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010D3A70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D3A38:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x010D3A3C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3A40:  C61DFAEB     BL $-0x1788e0
		   0x010D3A44:  94019FE5     LDR r0, [pc, 0x194]
		   0x010D3A48:  00009FE7     LDR r0, [pc, r0]
		   0x010D3A4C:  C31DFAEB     BL $-0x1788ec
		   0x010D3A50:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x010D3A54:  00009FE7     LDR r0, [pc, r0]
		   0x010D3A58:  C01DFAEB     BL $-0x1788f8
		   0x010D3A5C:  84019FE5     LDR r0, [pc, 0x184]
		   0x010D3A60:  00009FE7     LDR r0, [pc, r0]
		   0x010D3A64:  BD1DFAEB     BL $-0x178904
		   0x010D3A68:  0100A0E3     MOV r0, 0x1
		   0x010D3A6C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D3A70:  74019FE5     LDR r0, [pc, 0x174]
		   0x010D3A74:  00009FE7     LDR r0, [pc, r0]
		   0x010D3A78:  000090E5     LDR r0, [r0]
		   0x010D3A7C:  501EFAEB     BL $-0x1786b8
		   0x010D3A80:  0010A0E3     MOV r1, 0x0
		   0x010D3A84:  0040A0E1     MOV r4, r0
		   0x010D3A88:  4B7300EB     BL $+0x1cd34  // CALL → <>c__DisplayClass94_0..ctor
		   0x010D3A8C:  000056E3     CMPS r0, r6, 0x0
		   0x010D3A90:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3A98
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D3A94:  4D1EFAEB     BL $-0x1786c4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D3A98:  D880C6E1     LDRD r8, sb, [r6, 0x8]
		   0x010D3A9C:  0500A0E1     MOV r0, r5
		   0x010D3AA0:  0910A0E1     MOV r1, sb
		   0x010D3AA4:  487095E5     LDR r7, [r5, 0x48]
		   0x010D3AA8:  91FFFFEB     BL $-0x1b4
		   0x010D3AAC:  0060A0E1     MOV r6, r0
		   0x010D3AB0:  000050E3     CMPS r0, r0, 0x0
		   0x010D3AB4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3ABC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D3AB8:  441EFAEB     BL $-0x1786e8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D3ABC:  340096E5     LDR r0, [r6, 0x34]
		   0x010D3AC0:  0010A0E3     MOV r1, 0x0
		   0x010D3AC4:  24008DE5     STR r0, [sp, 0x24]
		   0x010D3AC8:  0100A0E3     MOV r0, 0x1
		   0x010D3ACC:  81008DE8     STM sp, {r0, r7}
		   0x010D3AD0:  0500A0E1     MOV r0, r5
		   0x010D3AD4:  0020A0E3     MOV r2, 0x0
		   0x010D3AD8:  20108DE5     STR r1, [sp, 0x20]
		   0x010D3ADC:  0030A0E3     MOV r3, 0x0
		   0x010D3AE0:  28108DE5     STR r1, [sp, 0x28]
		   0x010D3AE4:  08108DE5     STR r1, [sp, 0x8]
		   0x010D3AE8:  0C108DE5     STR r1, [sp, 0xc]
		   0x010D3AEC:  10108DE5     STR r1, [sp, 0x10]
		   0x010D3AF0:  14108DE5     STR r1, [sp, 0x14]
		   0x010D3AF4:  1C108DE5     STR r1, [sp, 0x1c]
		   0x010D3AF8:  0810A0E1     MOV r1, r8
		   0x010D3AFC:  18908DE5     STR sb, [sp, 0x18]
		   0x010D3B00:  001300EB     BL $+0x4c08  // CALL → GameState.AddItem
		   0x010D3B04:  0060A0E1     MOV r6, r0
		   0x010D3B08:  000054E3     CMPS r0, r4, 0x0
		   0x010D3B0C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3B14
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D3B10:  2E1EFAEB     BL $-0x178740
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D3B14:  607095E5     LDR r7, [r5, 0x60]
		   0x010D3B18:  086084E5     STR r6, [r4, 0x8]
		   0x010D3B1C:  000057E3     CMPS r0, r7, 0x0
		   0x010D3B20:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3B28
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D3B24:  291EFAEB     BL $-0x178754
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D3B28:  140097E5     LDR r0, [r7, 0x14]
		   0x010D3B2C:  000050E3     CMPS r0, r0, 0x0
		   0x010D3B30:  1B00000A     BEQ $+0x74  // if (==) goto 0x010D3BA4
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010D3B34:  605095E5     LDR r5, [r5, 0x60]
		   0x010D3B38:  000055E3     CMPS r0, r5, 0x0
		   0x010D3B3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3B44
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D3B40:  221EFAEB     BL $-0x178770
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D3B44:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x010D3B48:  00009FE7     LDR r0, [pc, r0]
		   0x010D3B4C:  145095E5     LDR r5, [r5, 0x14]
		   0x010D3B50:  000090E5     LDR r0, [r0]
		   0x010D3B54:  1A1EFAEB     BL $-0x178790
		   0x010D3B58:  0070A0E1     MOV r7, r0
		   0x010D3B5C:  90009FE5     LDR r0, [pc, 0x90]
		   0x010D3B60:  0410A0E1     MOV r1, r4
		   0x010D3B64:  0030A0E3     MOV r3, 0x0
		   0x010D3B68:  00009FE7     LDR r0, [pc, r0]
		   0x010D3B6C:  002090E5     LDR r2, [r0]
		   0x010D3B70:  0700A0E1     MOV r0, r7
		   0x010D3B74:  C3E833EB     BL $+0xcfa314  // CALL → Predicate<object>..ctor
		   0x010D3B78:  000055E3     CMPS r0, r5, 0x0
		   0x010D3B7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3B84
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010D3B80:  121EFAEB     BL $-0x1787b0
		   // ──── Block 15 if (!=) ────────────────────
		   0x010D3B84:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010D3B88:  0710A0E1     MOV r1, r7
		   0x010D3B8C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3B90:  002090E5     LDR r2, [r0]
		   0x010D3B94:  0500A0E1     MOV r0, r5
		   0x010D3B98:  AF7D6CEB     BL $+0x1b1f6c4  // CALL → List<object>.Exists
		   0x010D3B9C:  0050A0E1     MOV r5, r0
		   0x010D3BA0:  000000EA     B $+0x8  // goto 0x010D3BA8
		   // ──── Block 16 if (==) ────────────────────
		   0x010D3BA4:  0050A0E3     MOV r5, 0x0
		   // ──── Block 17 ──────────────────────────────
		   0x010D3BA8:  000056E3     CMPS r0, r6, 0x0
		   0x010D3BAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3BB4
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D3BB0:  061EFAEB     BL $-0x1787e0
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D3BB4:  000096E5     LDR r0, [r6]
		   0x010D3BB8:  0510A0E1     MOV r1, r5
		   0x010D3BBC:  283190E5     LDR r3, [r0, 0x128]
		   0x010D3BC0:  2C2190E5     LDR r2, [r0, 0x12c]
		   0x010D3BC4:  0600A0E1     MOV r0, r6
		   0x010D3BC8:  33FF2FE1     BLX r3  // virtual call: vtable+0x128
		   0x010D3BCC:  080094E5     LDR r0, [r4, 0x8]
		   0x010D3BD0:  30D08DE2     ADD sp, sp, 0x30
		   0x010D3BD4:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010D3BD8:  6A821503     TSTSEQ r8, r5, 0xa0000006
		   0x010D3BDC:  D454FA02     RSCSEQ r5, r10, 0xd4000000
		   0x010D3BE0:  CC54FA02     RSCSEQ r5, r10, 0xcc000000
		   0x010D3BE4:  C454FA02     RSCSEQ r5, r10, 0xc4000000
		   0x010D3BE8:  BC54FA02     RSCSEQ r5, r10, 0xbc000000
		   0x010D3BEC:  A854FA02     RSCSEQ r5, r10, 0xa8000000
		   0x010D3BF0:  CC53FA02     RSCSEQ r5, r10, 0x30000003
		   0x010D3BF4:  B053FA02     RSCSEQ r5, r10, 0xc0000002
		   0x010D3BF8:  8453FA02     RSCSEQ r5, r10, 0x10000002
		*/
	}

	// RVA: 0x10E1738 Offset: 0x10E1738 VA: 0x10E1738
	private ItemData GetActualItemData(ItemData parsedItem) {
		/* Disassembly (ARM32, 57 instructions, 0xE4 bytes):
		   // CFG: 18 blocks, 17 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E1738:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010E173C:  0140A0E1     MOV r4, r1
		   0x010E1740:  000051E3     CMPS r0, r1, 0x0
		   0x010E1744:  0000001A     BNE $+0x8  // if (!=) goto 0x010E174C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E1748:  20E7F9EB     BL $-0x186378
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E174C:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E1750:  050050E3     CMPS r0, r0, 0x5
		   0x010E1754:  1300001A     BNE $+0x54  // if (!=) goto 0x010E17A8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E1758:  285094E5     LDR r5, [r4, 0x28]
		   0x010E175C:  000055E3     CMPS r0, r5, 0x0
		   0x010E1760:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1768
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010E1764:  19E7F9EB     BL $-0x186394
		   // ──── Block 5 if (!=) ────────────────────
		   0x010E1768:  185095E5     LDR r5, [r5, 0x18]
		   0x010E176C:  000055E3     CMPS r0, r5, 0x0
		   0x010E1770:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1778
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E1774:  15E7F9EB     BL $-0x1863a4
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E1778:  0500A0E1     MOV r0, r5
		   0x010E177C:  0010A0E3     MOV r1, 0x0
		   0x010E1780:  9ACF00EB     BL $+0x33e70  // CALL → ItemData.Clone
		   0x010E1784:  284094E5     LDR r4, [r4, 0x28]
		   0x010E1788:  0050A0E1     MOV r5, r0
		   0x010E178C:  000050E3     CMPS r0, r0, 0x0
		   0x010E1790:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1798
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E1794:  0DE7F9EB     BL $-0x1863c4
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E1798:  0500A0E3     MOV r0, 0x5
		   0x010E179C:  284085E5     STR r4, [r5, 0x28]
		   0x010E17A0:  4C0085E5     STR r0, [r5, 0x4c]
		   0x010E17A4:  160000EA     B $+0x60  // goto 0x010E1804
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E17A8:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x010E17AC:  000050E3     CMPS r0, r0, 0x0
		   0x010E17B0:  1500000A     BEQ $+0x5c  // if (==) goto 0x010E180C
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010E17B4:  0400A0E1     MOV r0, r4
		   0x010E17B8:  0010A0E3     MOV r1, 0x0
		   0x010E17BC:  43CE00EB     BL $+0x33914  // CALL → ItemData.GetLockedData
		   0x010E17C0:  0040A0E1     MOV r4, r0
		   0x010E17C4:  000050E3     CMPS r0, r0, 0x0
		   0x010E17C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E17D0
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E17CC:  FFE6F9EB     BL $-0x1863fc
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E17D0:  0400A0E1     MOV r0, r4
		   0x010E17D4:  0010A0E3     MOV r1, 0x0
		   0x010E17D8:  84CF00EB     BL $+0x33e18  // CALL → ItemData.Clone
		   0x010E17DC:  0050A0E1     MOV r5, r0
		   0x010E17E0:  000050E3     CMPS r0, r0, 0x0
		   0x010E17E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E17EC
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E17E8:  F8E6F9EB     BL $-0x186418
		   // ──── Block 15 if (!=) ────────────────────
		   0x010E17EC:  0100A0E3     MOV r0, 0x1
		   0x010E17F0:  0010A0E3     MOV r1, 0x0
		   0x010E17F4:  1C00C5E5     STRB r0, [r5, 0x1c]
		   0x010E17F8:  0500A0E1     MOV r0, r5
		   0x010E17FC:  7BCF00EB     BL $+0x33df4  // CALL → ItemData.Clone
		   0x010E1800:  200085E5     STR r0, [r5, 0x20]
		   // ──── Block 16 ──────────────────────────────
		   0x010E1804:  0500A0E1     MOV r0, r5
		   0x010E1808:  3088BDE8     POP {r4, r5, fp, pc}
		   // ──── Block 17 if (==) ────────────────────
		   0x010E180C:  0400A0E1     MOV r0, r4
		   0x010E1810:  0010A0E3     MOV r1, 0x0
		   0x010E1814:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010E1818:  74CF00EA     B $+0x33dd8  // TAIL CALL → ItemData.Clone
		*/
	}

	// RVA: 0x10D8708 Offset: 0x10D8708 VA: 0x10D8708
	public Item AddItem(ItemData itemData, bool isLocked, Cell targetCell, bool runtime, Transform container, Nullable<Vector2> sourcePos, bool newObject = true, int id = -1, bool isFtue = false, bool isItBubble = false, int episode = -1, bool createdByMerge = false) {
		/* Disassembly (ARM32, 478 instructions, 0x778 bytes):
		   // CFG: 92 blocks, 93 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D8708:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D870C:  54D04DE2     SUB sp, sp, 0x54
		   0x010D8710:  D45E9FE5     LDR r5, [pc, 0xed4]
		   0x010D8714:  0080A0E1     MOV r8, r0
		   0x010D8718:  0390A0E1     MOV sb, r3
		   0x010D871C:  0270A0E1     MOV r7, r2
		   0x010D8720:  05508FE0     ADD r5, pc, r5
		   0x010D8724:  0140A0E1     MOV r4, r1
		   0x010D8728:  0000D5E5     LDRB r0, [r5]
		   0x010D872C:  000050E3     CMPS r0, r0, 0x0
		   0x010D8730:  7600001A     BNE $+0x1e0  // if (!=) goto 0x010D8910
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D8734:  B40E9FE5     LDR r0, [pc, 0xeb4]
		   0x010D8738:  00009FE7     LDR r0, [pc, r0]
		   0x010D873C:  870AFAEB     BL $-0x17d5dc
		   0x010D8740:  AC0E9FE5     LDR r0, [pc, 0xeac]
		   0x010D8744:  00009FE7     LDR r0, [pc, r0]
		   0x010D8748:  840AFAEB     BL $-0x17d5e8
		   0x010D874C:  A40E9FE5     LDR r0, [pc, 0xea4]
		   0x010D8750:  00009FE7     LDR r0, [pc, r0]
		   0x010D8754:  810AFAEB     BL $-0x17d5f4
		   0x010D8758:  9C0E9FE5     LDR r0, [pc, 0xe9c]
		   0x010D875C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8760:  7E0AFAEB     BL $-0x17d600
		   0x010D8764:  940E9FE5     LDR r0, [pc, 0xe94]
		   0x010D8768:  00009FE7     LDR r0, [pc, r0]
		   0x010D876C:  7B0AFAEB     BL $-0x17d60c
		   0x010D8770:  8C0E9FE5     LDR r0, [pc, 0xe8c]
		   0x010D8774:  00009FE7     LDR r0, [pc, r0]
		   0x010D8778:  780AFAEB     BL $-0x17d618
		   0x010D877C:  840E9FE5     LDR r0, [pc, 0xe84]
		   0x010D8780:  00009FE7     LDR r0, [pc, r0]
		   0x010D8784:  750AFAEB     BL $-0x17d624
		   0x010D8788:  7C0E9FE5     LDR r0, [pc, 0xe7c]
		   0x010D878C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8790:  720AFAEB     BL $-0x17d630
		   0x010D8794:  740E9FE5     LDR r0, [pc, 0xe74]
		   0x010D8798:  00009FE7     LDR r0, [pc, r0]
		   0x010D879C:  6F0AFAEB     BL $-0x17d63c
		   0x010D87A0:  6C0E9FE5     LDR r0, [pc, 0xe6c]
		   0x010D87A4:  00009FE7     LDR r0, [pc, r0]
		   0x010D87A8:  6C0AFAEB     BL $-0x17d648
		   0x010D87AC:  640E9FE5     LDR r0, [pc, 0xe64]
		   0x010D87B0:  00009FE7     LDR r0, [pc, r0]
		   0x010D87B4:  690AFAEB     BL $-0x17d654
		   0x010D87B8:  5C0E9FE5     LDR r0, [pc, 0xe5c]
		   0x010D87BC:  00009FE7     LDR r0, [pc, r0]
		   0x010D87C0:  660AFAEB     BL $-0x17d660
		   0x010D87C4:  FC0F9FE5     LDR r0, [pc, 0xffc]
		   0x010D87C8:  00009FE7     LDR r0, [pc, r0]
		   0x010D87CC:  630AFAEB     BL $-0x17d66c
		   0x010D87D0:  F40F9FE5     LDR r0, [pc, 0xff4]
		   0x010D87D4:  00009FE7     LDR r0, [pc, r0]
		   0x010D87D8:  600AFAEB     BL $-0x17d678
		   0x010D87DC:  EC0F9FE5     LDR r0, [pc, 0xfec]
		   0x010D87E0:  00009FE7     LDR r0, [pc, r0]
		   0x010D87E4:  5D0AFAEB     BL $-0x17d684
		   0x010D87E8:  E40F9FE5     LDR r0, [pc, 0xfe4]
		   0x010D87EC:  00009FE7     LDR r0, [pc, r0]
		   0x010D87F0:  5A0AFAEB     BL $-0x17d690
		   0x010D87F4:  DC0F9FE5     LDR r0, [pc, 0xfdc]
		   0x010D87F8:  00009FE7     LDR r0, [pc, r0]
		   0x010D87FC:  570AFAEB     BL $-0x17d69c
		   0x010D8800:  D40F9FE5     LDR r0, [pc, 0xfd4]
		   0x010D8804:  00009FE7     LDR r0, [pc, r0]
		   0x010D8808:  540AFAEB     BL $-0x17d6a8
		   0x010D880C:  CC0F9FE5     LDR r0, [pc, 0xfcc]
		   0x010D8810:  00009FE7     LDR r0, [pc, r0]
		   0x010D8814:  510AFAEB     BL $-0x17d6b4
		   0x010D8818:  C40F9FE5     LDR r0, [pc, 0xfc4]
		   0x010D881C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8820:  4E0AFAEB     BL $-0x17d6c0
		   0x010D8824:  BC0F9FE5     LDR r0, [pc, 0xfbc]
		   0x010D8828:  00009FE7     LDR r0, [pc, r0]
		   0x010D882C:  4B0AFAEB     BL $-0x17d6cc
		   0x010D8830:  B40F9FE5     LDR r0, [pc, 0xfb4]
		   0x010D8834:  00009FE7     LDR r0, [pc, r0]
		   0x010D8838:  480AFAEB     BL $-0x17d6d8
		   0x010D883C:  AC0F9FE5     LDR r0, [pc, 0xfac]
		   0x010D8840:  00009FE7     LDR r0, [pc, r0]
		   0x010D8844:  450AFAEB     BL $-0x17d6e4
		   0x010D8848:  A40F9FE5     LDR r0, [pc, 0xfa4]
		   0x010D884C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8850:  420AFAEB     BL $-0x17d6f0
		   0x010D8854:  9C0F9FE5     LDR r0, [pc, 0xf9c]
		   0x010D8858:  00009FE7     LDR r0, [pc, r0]
		   0x010D885C:  3F0AFAEB     BL $-0x17d6fc
		   0x010D8860:  940F9FE5     LDR r0, [pc, 0xf94]
		   0x010D8864:  00009FE7     LDR r0, [pc, r0]
		   0x010D8868:  3C0AFAEB     BL $-0x17d708
		   0x010D886C:  8C0F9FE5     LDR r0, [pc, 0xf8c]
		   0x010D8870:  00009FE7     LDR r0, [pc, r0]
		   0x010D8874:  390AFAEB     BL $-0x17d714
		   0x010D8878:  840F9FE5     LDR r0, [pc, 0xf84]
		   0x010D887C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8880:  360AFAEB     BL $-0x17d720
		   0x010D8884:  7C0F9FE5     LDR r0, [pc, 0xf7c]
		   0x010D8888:  00009FE7     LDR r0, [pc, r0]
		   0x010D888C:  330AFAEB     BL $-0x17d72c
		   0x010D8890:  740F9FE5     LDR r0, [pc, 0xf74]
		   0x010D8894:  00009FE7     LDR r0, [pc, r0]
		   0x010D8898:  300AFAEB     BL $-0x17d738
		   0x010D889C:  6C0F9FE5     LDR r0, [pc, 0xf6c]
		   0x010D88A0:  00009FE7     LDR r0, [pc, r0]
		   0x010D88A4:  2D0AFAEB     BL $-0x17d744
		   0x010D88A8:  640F9FE5     LDR r0, [pc, 0xf64]
		   0x010D88AC:  00009FE7     LDR r0, [pc, r0]
		   0x010D88B0:  2A0AFAEB     BL $-0x17d750
		   0x010D88B4:  5C0F9FE5     LDR r0, [pc, 0xf5c]
		   0x010D88B8:  00009FE7     LDR r0, [pc, r0]
		   0x010D88BC:  270AFAEB     BL $-0x17d75c
		   0x010D88C0:  540F9FE5     LDR r0, [pc, 0xf54]
		   0x010D88C4:  00009FE7     LDR r0, [pc, r0]
		   0x010D88C8:  240AFAEB     BL $-0x17d768
		   0x010D88CC:  F80F9FE5     LDR r0, [pc, 0xff8]
		   0x010D88D0:  00009FE7     LDR r0, [pc, r0]
		   0x010D88D4:  210AFAEB     BL $-0x17d774
		   0x010D88D8:  F00F9FE5     LDR r0, [pc, 0xff0]
		   0x010D88DC:  00009FE7     LDR r0, [pc, r0]
		   0x010D88E0:  1E0AFAEB     BL $-0x17d780
		   0x010D88E4:  E80F9FE5     LDR r0, [pc, 0xfe8]
		   0x010D88E8:  00009FE7     LDR r0, [pc, r0]
		   0x010D88EC:  1B0AFAEB     BL $-0x17d78c
		   0x010D88F0:  E00F9FE5     LDR r0, [pc, 0xfe0]
		   0x010D88F4:  00009FE7     LDR r0, [pc, r0]
		   0x010D88F8:  180AFAEB     BL $-0x17d798
		   0x010D88FC:  D80F9FE5     LDR r0, [pc, 0xfd8]
		   0x010D8900:  00009FE7     LDR r0, [pc, r0]
		   0x010D8904:  150AFAEB     BL $-0x17d7a4
		   0x010D8908:  0100A0E3     MOV r0, 0x1
		   0x010D890C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D8910:  C80F9FE5     LDR r0, [pc, 0xfc8]
		   0x010D8914:  7C509DE5     LDR r5, [sp, 0x7c]
		   0x010D8918:  00009FE7     LDR r0, [pc, r0]
		   0x010D891C:  000090E5     LDR r0, [r0]
		   0x010D8920:  A70AFAEB     BL $-0x17d55c
		   0x010D8924:  0010A0E3     MOV r1, 0x0
		   0x010D8928:  00B0A0E1     MOV fp, r0
		   0x010D892C:  516000EB     BL $+0x1814c  // CALL → <>c__DisplayClass96_0..ctor
		   0x010D8930:  00005BE3     CMPS r0, fp, 0x0
		   0x010D8934:  0000001A     BNE $+0x8  // if (!=) goto 0x010D893C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D8938:  A40AFAEB     BL $-0x17d568
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D893C:  000054E3     CMPS r0, r4, 0x0
		   0x010D8940:  0C808BE5     STR r8, [fp, 0xc]
		   0x010D8944:  10508BE5     STR r5, [fp, 0x10]
		   0x010D8948:  2900000A     BEQ $+0xac  // if (==) goto 0x010D89F4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010D894C:  8C009DE5     LDR r0, [sp, 0x8c]
		   0x010D8950:  000050E3     CMPS r0, r0, 0x0
		   0x010D8954:  0D00000A     BEQ $+0x3c  // if (==) goto 0x010D8990
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010D8958:  840F9FE5     LDR r0, [pc, 0xf84]
		   0x010D895C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8960:  000090E5     LDR r0, [r0]
		   0x010D8964:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8968:  000051E3     CMPS r0, r1, 0x0
		   0x010D896C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8974
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D8970:  470AFAEB     BL $-0x17d6dc
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D8974:  0900A0E1     MOV r0, sb
		   0x010D8978:  0010A0E3     MOV r1, 0x0
		   0x010D897C:  0020A0E3     MOV r2, 0x0
		   0x010D8980:  0060A0E3     MOV r6, 0x0
		   0x010D8984:  447D3CEB     BL $+0xf1f518  // CALL → sub_1FF7E9C
		   0x010D8988:  000050E3     CMPS r0, r0, 0x0
		   0x010D898C:  4405001A     BNE $+0x1518
		   // ──── Block 9 if (==) ────────────────────
		   0x010D8990:  0400A0E1     MOV r0, r4
		   0x010D8994:  0010A0E3     MOV r1, 0x0
		   0x010D8998:  14F300EB     BL $+0x3cc58  // CALL → ItemData.Clone
		   0x010D899C:  00A0A0E1     MOV r10, r0
		   0x010D89A0:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x010D89A4:  000050E3     CMPS r0, r0, 0x0
		   0x010D89A8:  1900000A     BEQ $+0x6c  // if (==) goto 0x010D8A14
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010D89AC:  0400A0E1     MOV r0, r4
		   0x010D89B0:  0010A0E3     MOV r1, 0x0
		   0x010D89B4:  C5F100EB     BL $+0x3c71c  // CALL → ItemData.GetLockedData
		   0x010D89B8:  000050E3     CMPS r0, r0, 0x0
		   0x010D89BC:  1A00000A     BEQ $+0x70  // if (==) goto 0x010D8A2C
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010D89C0:  0400A0E1     MOV r0, r4
		   0x010D89C4:  0010A0E3     MOV r1, 0x0
		   0x010D89C8:  C0F100EB     BL $+0x3c708  // CALL → ItemData.GetLockedData
		   0x010D89CC:  0040A0E1     MOV r4, r0
		   0x010D89D0:  00005AE3     CMPS r0, r10, 0x0
		   0x010D89D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D89DC
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D89D8:  7C0AFAEB     BL $-0x17d608
		   // ──── Block 13 if (!=) ────────────────────
		   0x010D89DC:  20408AE5     STR r4, [r10, 0x20]
		   0x010D89E0:  0000A0E3     MOV r0, 0x0
		   0x010D89E4:  38708DE5     STR r7, [sp, 0x38]
		   0x010D89E8:  44008DE5     STR r0, [sp, 0x44]
		   0x010D89EC:  344098E5     LDR r4, [r8, 0x34]  // vtable: Object.Equals
		   0x010D89F0:  270000EA     B $+0xa4  // goto 0x010D8A94
		   // ──── Block 14 if (==) ────────────────────
		   0x010D89F4:  B80F9FE5     LDR r0, [pc, 0xfb8]
		   0x010D89F8:  00009FE7     LDR r0, [pc, r0]
		   0x010D89FC:  000090E5     LDR r0, [r0]
		   0x010D8A00:  6F0AFAEB     BL $-0x17d63c
		   0x010D8A04:  0040A0E1     MOV r4, r0
		   0x010D8A08:  A80F9FE5     LDR r0, [pc, 0xfa8]
		   0x010D8A0C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8A10:  0C0000EA     B $+0x38  // goto 0x010D8A48
		   // ──── Block 15 if (==) ────────────────────
		   0x010D8A14:  344098E5     LDR r4, [r8, 0x34]
		   0x010D8A18:  00005AE3     CMPS r0, r10, 0x0
		   0x010D8A1C:  38708DE5     STR r7, [sp, 0x38]
		   0x010D8A20:  1800000A     BEQ $+0x68  // if (==) goto 0x010D8A88
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x010D8A24:  0000A0E3     MOV r0, 0x0
		   0x010D8A28:  180000EA     B $+0x68  // goto 0x010D8A90
		   // ──── Block 17 if (==) ────────────────────
		   0x010D8A2C:  880F9FE5     LDR r0, [pc, 0xf88]
		   0x010D8A30:  00009FE7     LDR r0, [pc, r0]
		   0x010D8A34:  000090E5     LDR r0, [r0]
		   0x010D8A38:  610AFAEB     BL $-0x17d674
		   0x010D8A3C:  0040A0E1     MOV r4, r0
		   0x010D8A40:  780F9FE5     LDR r0, [pc, 0xf78]
		   0x010D8A44:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 18 ──────────────────────────────
		   0x010D8A48:  001090E5     LDR r1, [r0]
		   0x010D8A4C:  0400A0E1     MOV r0, r4
		   0x010D8A50:  0020A0E3     MOV r2, 0x0
		   0x010D8A54:  0060A0E3     MOV r6, 0x0
		   0x010D8A58:  77C17EEB     BL $+0x1fb05e4  // CALL → Exception..ctor
		   0x010D8A5C:  F40F9FE5     LDR r0, [pc, 0xff4]
		   0x010D8A60:  00009FE7     LDR r0, [pc, r0]
		   0x010D8A64:  000090E5     LDR r0, [r0]
		   0x010D8A68:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8A6C:  000051E3     CMPS r0, r1, 0x0
		   0x010D8A70:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8A78
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010D8A74:  060AFAEB     BL $-0x17d7e0
		   // ──── Block 20 if (!=) ────────────────────
		   0x010D8A78:  0400A0E1     MOV r0, r4
		   0x010D8A7C:  0010A0E3     MOV r1, 0x0
		   0x010D8A80:  C17D3CEB     BL $+0xf1f70c  // CALL → sub_1FF818C
		   0x010D8A84:  060500EA     B $+0x1420
		   // ──── Block 21 if (==) ────────────────────
		   0x010D8A88:  500AFAEB     BL $-0x17d6b8
		   0x010D8A8C:  0100A0E3     MOV r0, 0x1
		   // ──── Block 22 ──────────────────────────────
		   0x010D8A90:  44008DE5     STR r0, [sp, 0x44]
		   // ──── Block 23 ──────────────────────────────
		   0x010D8A94:  0A00A0E1     MOV r0, r10
		   0x010D8A98:  0010A0E3     MOV r1, 0x0
		   0x010D8A9C:  9AC300EB     BL $+0x30e70  // CALL → ItemData.get_activeData
		   0x010D8AA0:  0070A0E1     MOV r7, r0
		   0x010D8AA4:  000050E3     CMPS r0, r0, 0x0
		   0x010D8AA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8AB0
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010D8AAC:  470AFAEB     BL $-0x17d6dc
		   // ──── Block 25 if (!=) ────────────────────
		   0x010D8AB0:  10609BE5     LDR r6, [fp, 0x10]
		   0x010D8AB4:  000054E3     CMPS r0, r4, 0x0
		   0x010D8AB8:  4C7097E5     LDR r7, [r7, 0x4c]
		   0x010D8ABC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8AC4
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010D8AC0:  420AFAEB     BL $-0x17d6f0
		   // ──── Block 27 if (!=) ────────────────────
		   0x010D8AC4:  0400A0E1     MOV r0, r4
		   0x010D8AC8:  0710A0E1     MOV r1, r7
		   0x010D8ACC:  0620A0E1     MOV r2, r6
		   0x010D8AD0:  0030A0E3     MOV r3, 0x0
		   0x010D8AD4:  267600EB     BL $+0x1d8a0  // CALL → ItemsPool.GetItem
		   0x010D8AD8:  0040A0E1     MOV r4, r0
		   0x010D8ADC:  000050E3     CMPS r0, r0, 0x0
		   0x010D8AE0:  08008BE5     STR r0, [fp, 0x8]
		   0x010D8AE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8AEC
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010D8AE8:  380AFAEB     BL $-0x17d718
		   // ──── Block 29 if (!=) ────────────────────
		   0x010D8AEC:  000094E5     LDR r0, [r4]
		   0x010D8AF0:  0910A0E1     MOV r1, sb
		   0x010D8AF4:  0120A0E3     MOV r2, 0x1
		   0x010D8AF8:  087190E5     LDR r7, [r0, 0x108]
		   0x010D8AFC:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010D8B00:  0400A0E1     MOV r0, r4
		   0x010D8B04:  37FF2FE1     BLX r7  // virtual call: vtable+0x108
		   0x010D8B08:  08409BE5     LDR r4, [fp, 0x8]
		   0x010D8B0C:  E80F9FE5     LDR r0, [pc, 0xfe8]
		   0x010D8B10:  00009FE7     LDR r0, [pc, r0]
		   0x010D8B14:  000090E5     LDR r0, [r0]
		   0x010D8B18:  290AFAEB     BL $-0x17d754
		   0x010D8B1C:  0060A0E1     MOV r6, r0
		   0x010D8B20:  D80F9FE5     LDR r0, [pc, 0xfd8]
		   0x010D8B24:  0810A0E1     MOV r1, r8
		   0x010D8B28:  0030A0E3     MOV r3, 0x0
		   0x010D8B2C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8B30:  002090E5     LDR r2, [r0]
		   0x010D8B34:  0600A0E1     MOV r0, r6
		   0x010D8B38:  CC8C61EB     BL $+0x1863338  // CALL → Func<Vector2, object, object>..ctor
		   0x010D8B3C:  000054E3     CMPS r0, r4, 0x0
		   0x010D8B40:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8B48
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010D8B44:  210AFAEB     BL $-0x17d774
		   // ──── Block 31 if (!=) ────────────────────
		   0x010D8B48:  0400A0E1     MOV r0, r4
		   0x010D8B4C:  0610A0E1     MOV r1, r6
		   0x010D8B50:  0020A0E3     MOV r2, 0x0
		   0x010D8B54:  B8CE00EB     BL $+0x33ae8  // CALL → Item.SetupGetFreeCellDelegate
		   0x010D8B58:  08409BE5     LDR r4, [fp, 0x8]
		   0x010D8B5C:  D00F9FE5     LDR r0, [pc, 0xfd0]
		   0x010D8B60:  00009FE7     LDR r0, [pc, r0]
		   0x010D8B64:  000090E5     LDR r0, [r0]
		   0x010D8B68:  150AFAEB     BL $-0x17d7a4
		   0x010D8B6C:  0060A0E1     MOV r6, r0
		   0x010D8B70:  C00F9FE5     LDR r0, [pc, 0xfc0]
		   0x010D8B74:  0810A0E1     MOV r1, r8
		   0x010D8B78:  0030A0E3     MOV r3, 0x0
		   0x010D8B7C:  00009FE7     LDR r0, [pc, r0]
		   0x010D8B80:  002090E5     LDR r2, [r0]
		   0x010D8B84:  0600A0E1     MOV r0, r6
		   0x010D8B88:  766F61EB     BL $+0x185bde0  // CALL → Func<object, object>..ctor
		   0x010D8B8C:  44709DE5     LDR r7, [sp, 0x44]
		   0x010D8B90:  000054E3     CMPS r0, r4, 0x0
		   0x010D8B94:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8B9C
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x010D8B98:  0C0AFAEB     BL $-0x17d7c8
		   // ──── Block 33 if (!=) ────────────────────
		   0x010D8B9C:  0400A0E1     MOV r0, r4
		   0x010D8BA0:  0610A0E1     MOV r1, r6
		   0x010D8BA4:  0020A0E3     MOV r2, 0x0
		   0x010D8BA8:  A1CE00EB     BL $+0x33a8c  // CALL → Item.SetupGetFreeCellAroundDelegate
		   0x010D8BAC:  880F9FE5     LDR r0, [pc, 0xf88]
		   0x010D8BB0:  00009FE7     LDR r0, [pc, r0]
		   0x010D8BB4:  000090E5     LDR r0, [r0]
		   0x010D8BB8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8BBC:  000051E3     CMPS r0, r1, 0x0
		   0x010D8BC0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8BC8
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x010D8BC4:  B209FAEB     BL $-0x17d930
		   // ──── Block 35 if (!=) ────────────────────
		   0x010D8BC8:  0900A0E1     MOV r0, sb
		   0x010D8BCC:  0010A0E3     MOV r1, 0x0
		   0x010D8BD0:  897D3CEB     BL $+0xf1f62c  // CALL → sub_1FF81FC
		   0x010D8BD4:  000050E3     CMPS r0, r0, 0x0
		   0x010D8BD8:  40808DE5     STR r8, [sp, 0x40]
		   0x010D8BDC:  2700000A     BEQ $+0xa4  // if (==) goto 0x010D8C80
		   // 
		   // ──── Block 36 else (!=) ────────────────────
		   0x010D8BE0:  08409BE5     LDR r4, [fp, 0x8]
		   0x010D8BE4:  000059E3     CMPS r0, sb, 0x0
		   0x010D8BE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8BF0
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x010D8BEC:  F709FAEB     BL $-0x17d81c
		   // ──── Block 38 if (!=) ────────────────────
		   0x010D8BF0:  0900A0E1     MOV r0, sb
		   0x010D8BF4:  0410A0E1     MOV r1, r4
		   0x010D8BF8:  20D0FFEB     BL $-0xbf78
		   0x010D8BFC:  40009DE5     LDR r0, [sp, 0x40]
		   0x010D8C00:  08809BE5     LDR r8, [fp, 0x8]
		   0x010D8C04:  546090E5     LDR r6, [r0, 0x54]
		   0x010D8C08:  000056E3     CMPS r0, r6, 0x0
		   0x010D8C0C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8C14
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010D8C10:  EE09FAEB     BL $-0x17d840
		   // ──── Block 40 if (!=) ────────────────────
		   0x010D8C14:  100096E5     LDR r0, [r6, 0x10]
		   0x010D8C18:  085096E5     LDR r5, [r6, 0x8]
		   0x010D8C1C:  0C7096E5     LDR r7, [r6, 0xc]
		   0x010D8C20:  010080E2     ADD r0, r0, 0x1
		   0x010D8C24:  D01F9FE5     LDR r1, [pc, 0xfd0]
		   0x010D8C28:  000055E3     CMPS r0, r5, 0x0
		   0x010D8C2C:  01109FE7     LDR r1, [pc, r1]
		   0x010D8C30:  100086E5     STR r0, [r6, 0x10]
		   0x010D8C34:  004091E5     LDR r4, [r1]
		   0x010D8C38:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8C40
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010D8C3C:  E309FAEB     BL $-0x17d86c
		   // ──── Block 42 if (!=) ────────────────────
		   0x010D8C40:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010D8C44:  000057E1     CMPS r0, r7, r0
		   0x010D8C48:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x010D8C60
		   // 
		   // ──── Block 43 else (< (unsigned)) ────────────────────
		   0x010D8C4C:  010087E2     ADD r0, r7, 0x1
		   0x010D8C50:  0C0086E5     STR r0, [r6, 0xc]
		   0x010D8C54:  070185E0     ADD r0, r5, r7, lsl 2
		   0x010D8C58:  108080E5     STR r8, [r0, 0x10]
		   0x010D8C5C:  050000EA     B $+0x1c  // goto 0x010D8C78
		   // ──── Block 44 if (>= (unsigned)) ────────────────────
		   0x010D8C60:  100094E5     LDR r0, [r4, 0x10]
		   0x010D8C64:  0810A0E1     MOV r1, r8
		   0x010D8C68:  600090E5     LDR r0, [r0, 0x60]
		   0x010D8C6C:  382090E5     LDR r2, [r0, 0x38]
		   0x010D8C70:  0600A0E1     MOV r0, r6
		   0x010D8C74:  D0676CEB     BL $+0x1b19f48  // CALL → List<object>.AddWithResize
		   // ──── Block 45 ──────────────────────────────
		   0x010D8C78:  40809DE5     LDR r8, [sp, 0x40]
		   0x010D8C7C:  44709DE5     LDR r7, [sp, 0x44]
		   // ──── Block 46 if (==) ────────────────────
		   0x010D8C80:  0A10A0E1     MOV r1, r10
		   0x010D8C84:  3C908DE5     STR sb, [sp, 0x3c]
		   0x010D8C88:  AA2200EB     BL $+0x8ab0  // CALL → GameState.GetActualItemData
		   0x010D8C8C:  0040A0E1     MOV r4, r0
		   0x010D8C90:  D80F9FE5     LDR r0, [pc, 0xfd8]
		   0x010D8C94:  00009FE7     LDR r0, [pc, r0]
		   0x010D8C98:  000090E5     LDR r0, [r0]
		   0x010D8C9C:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8CA0:  000051E3     CMPS r0, r1, 0x0
		   0x010D8CA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8CAC
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x010D8CA8:  7909FAEB     BL $-0x17da14
		   // ──── Block 48 if (!=) ────────────────────
		   0x010D8CAC:  0000A0E3     MOV r0, 0x0
		   0x010D8CB0:  0090A0E3     MOV sb, 0x0
		   0x010D8CB4:  667D3CEB     BL $+0xf1f5a0  // CALL → sub_1FF8254
		   0x010D8CB8:  000050E3     CMPS r0, r0, 0x0
		   0x010D8CBC:  1E00000A     BEQ $+0x80  // if (==) goto 0x010D8D3C
		   // 
		   // ──── Block 49 else (!=) ────────────────────
		   0x010D8CC0:  08609BE5     LDR r6, [fp, 0x8]
		   0x010D8CC4:  000054E3     CMPS r0, r4, 0x0
		   0x010D8CC8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8CD0
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x010D8CCC:  BF09FAEB     BL $-0x17d8fc
		   // ──── Block 51 if (!=) ────────────────────
		   0x010D8CD0:  44009DE5     LDR r0, [sp, 0x44]
		   0x010D8CD4:  787094E5     LDR r7, [r4, 0x78]
		   0x010D8CD8:  000050E3     CMPS r0, r0, 0x0
		   0x010D8CDC:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8CE4
		   // 
		   // ──── Block 52 else (!=) ────────────────────
		   0x010D8CE0:  BA09FAEB     BL $-0x17d910
		   // ──── Block 53 if (==) ────────────────────
		   0x010D8CE4:  4C009AE5     LDR r0, [r10, 0x4c]
		   0x010D8CE8:  0090A0E3     MOV sb, 0x0
		   0x010D8CEC:  801F9FE5     LDR r1, [pc, 0xf80]
		   0x010D8CF0:  050050E3     CMPS r0, r0, 0x5
		   0x010D8CF4:  0700A0E1     MOV r0, r7
		   0x010D8CF8:  01109FE7     LDR r1, [pc, r1]
		   0x010D8CFC:  742F9FE5     LDR r2, [pc, 0xf74]
		   0x010D8D00:  02209FE7     LDR r2, [pc, r2]
		   0x010D8D04:  0120A001     MOVEQ r2, r1
		   0x010D8D08:  001092E5     LDR r1, [r2]
		   0x010D8D0C:  0020A0E3     MOV r2, 0x0
		   0x010D8D10:  8AC276EB     BL $+0x1db0a30  // CALL → String.Concat
		   0x010D8D14:  0070A0E1     MOV r7, r0
		   0x010D8D18:  000056E3     CMPS r0, r6, 0x0
		   0x010D8D1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8D24
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x010D8D20:  AA09FAEB     BL $-0x17d950
		   // ──── Block 55 if (!=) ────────────────────
		   0x010D8D24:  0600A0E1     MOV r0, r6
		   0x010D8D28:  0710A0E1     MOV r1, r7
		   0x010D8D2C:  0020A0E3     MOV r2, 0x0
		   0x010D8D30:  2F7D3CEB     BL $+0xf1f4c4  // CALL → sub_1FF81F4
		   0x010D8D34:  44709DE5     LDR r7, [sp, 0x44]
		   0x010D8D38:  030000EA     B $+0x14  // goto 0x010D8D4C
		   // ──── Block 56 if (==) ────────────────────
		   0x010D8D3C:  000054E3     CMPS r0, r4, 0x0
		   0x010D8D40:  0100001A     BNE $+0xc  // if (!=) goto 0x010D8D4C
		   // 
		   // ──── Block 57 else (==) ────────────────────
		   0x010D8D44:  A109FAEB     BL $-0x17d974
		   0x010D8D48:  0190A0E3     MOV sb, 0x1
		   // ──── Block 58 if (!=) ────────────────────
		   0x010D8D4C:  0C5094E5     LDR r5, [r4, 0xc]
		   0x010D8D50:  000057E3     CMPS r0, r7, 0x0
		   0x010D8D54:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8D5C
		   // 
		   // ──── Block 59 else (!=) ────────────────────
		   0x010D8D58:  9C09FAEB     BL $-0x17d988
		   // ──── Block 60 if (==) ────────────────────
		   0x010D8D5C:  000059E3     CMPS r0, sb, 0x0
		   0x010D8D60:  0C508AE5     STR r5, [r10, 0xc]
		   0x010D8D64:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8D6C
		   // 
		   // ──── Block 61 else (!=) ────────────────────
		   0x010D8D68:  9809FAEB     BL $-0x17d998
		   // ──── Block 62 if (==) ────────────────────
		   0x010D8D6C:  785094E5     LDR r5, [r4, 0x78]
		   0x010D8D70:  000057E3     CMPS r0, r7, 0x0
		   0x010D8D74:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8D7C
		   // 
		   // ──── Block 63 else (!=) ────────────────────
		   0x010D8D78:  9409FAEB     BL $-0x17d9a8
		   // ──── Block 64 if (==) ────────────────────
		   0x010D8D7C:  000059E3     CMPS r0, sb, 0x0
		   0x010D8D80:  78508AE5     STR r5, [r10, 0x78]
		   0x010D8D84:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8D8C
		   // 
		   // ──── Block 65 else (!=) ────────────────────
		   0x010D8D88:  9009FAEB     BL $-0x17d9b8
		   // ──── Block 66 if (==) ────────────────────
		   0x010D8D8C:  5C5094E5     LDR r5, [r4, 0x5c]
		   0x010D8D90:  000057E3     CMPS r0, r7, 0x0
		   0x010D8D94:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8D9C
		   // 
		   // ──── Block 67 else (!=) ────────────────────
		   0x010D8D98:  8C09FAEB     BL $-0x17d9c8
		   // ──── Block 68 if (==) ────────────────────
		   0x010D8D9C:  000059E3     CMPS r0, sb, 0x0
		   0x010D8DA0:  5C508AE5     STR r5, [r10, 0x5c]
		   0x010D8DA4:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8DAC
		   // 
		   // ──── Block 69 else (!=) ────────────────────
		   0x010D8DA8:  8809FAEB     BL $-0x17d9d8
		   // ──── Block 70 if (==) ────────────────────
		   0x010D8DAC:  7C5094E5     LDR r5, [r4, 0x7c]
		   0x010D8DB0:  000057E3     CMPS r0, r7, 0x0
		   0x010D8DB4:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8DBC
		   // 
		   // ──── Block 71 else (!=) ────────────────────
		   0x010D8DB8:  8409FAEB     BL $-0x17d9e8
		   // ──── Block 72 if (==) ────────────────────
		   0x010D8DBC:  000059E3     CMPS r0, sb, 0x0
		   0x010D8DC0:  7C508AE5     STR r5, [r10, 0x7c]
		   0x010D8DC4:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8DCC
		   // 
		   // ──── Block 73 else (!=) ────────────────────
		   0x010D8DC8:  8009FAEB     BL $-0x17d9f8
		   // ──── Block 74 if (==) ────────────────────
		   0x010D8DCC:  9C609DE5     LDR r6, [sp, 0x9c]
		   0x010D8DD0:  000057E3     CMPS r0, r7, 0x0
		   0x010D8DD4:  845094E5     LDR r5, [r4, 0x84]
		   0x010D8DD8:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8DE0
		   // 
		   // ──── Block 75 else (!=) ────────────────────
		   0x010D8DDC:  7B09FAEB     BL $-0x17da0c
		   // ──── Block 76 if (==) ────────────────────
		   0x010D8DE0:  010076E3     CMNS r0, r6, 0x1
		   0x010D8DE4:  84508AE5     STR r5, [r10, 0x84]
		   0x010D8DE8:  0100001A     BNE $+0xc  // if (!=) goto 0x010D8DF4
		   // 
		   // ──── Block 77 else (==) ────────────────────
		   0x010D8DEC:  950900EB     BL $+0x265c  // CALL → GameState.get_CurrentEpisodeIdx
		   0x010D8DF0:  0060A0E1     MOV r6, r0
		   // ──── Block 78 if (!=) ────────────────────
		   0x010D8DF4:  000059E3     CMPS r0, sb, 0x0
		   0x010D8DF8:  94608AE5     STR r6, [r10, 0x94]
		   0x010D8DFC:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8E04
		   // 
		   // ──── Block 79 else (!=) ────────────────────
		   0x010D8E00:  7209FAEB     BL $-0x17da30
		   // ──── Block 80 if (==) ────────────────────
		   0x010D8E04:  2C0F9FE5     LDR r0, [pc, 0xf2c]
		   0x010D8E08:  00009FE7     LDR r0, [pc, r0]
		   0x010D8E0C:  9C6094E5     LDR r6, [r4, 0x9c]
		   0x010D8E10:  000090E5     LDR r0, [r0]
		   0x010D8E14:  741090E5     LDR r1, [r0, 0x74]
		   0x010D8E18:  000051E3     CMPS r0, r1, 0x0
		   0x010D8E1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D8E24
		   // 
		   // ──── Block 81 else (==) ────────────────────
		   0x010D8E20:  1B09FAEB     BL $-0x17db8c
		   // ──── Block 82 if (!=) ────────────────────
		   0x010D8E24:  0600A0E1     MOV r0, r6
		   0x010D8E28:  0010A0E3     MOV r1, 0x0
		   0x010D8E2C:  0020A0E3     MOV r2, 0x0
		   0x010D8E30:  197C3CEB     BL $+0xf1f06c  // CALL → sub_1FF7E9C
		   0x010D8E34:  000050E3     CMPS r0, r0, 0x0
		   0x010D8E38:  0500000A     BEQ $+0x1c  // if (==) goto 0x010D8E54
		   // 
		   // ──── Block 83 else (!=) ────────────────────
		   0x010D8E3C:  000057E3     CMPS r0, r7, 0x0
		   0x010D8E40:  0000000A     BEQ $+0x8  // if (==) goto 0x010D8E48
		   // 
		   // ──── Block 84 else (!=) ────────────────────
		   0x010D8E44:  6109FAEB     BL $-0x17da74
		   // ──── Block 85 if (==) ────────────────────
		   0x010D8E48:  000059E3     CMPS r0, sb, 0x0
		   0x010D8E4C:  0500001A     BNE $+0x1c  // if (!=) goto 0x010D8E68
		   // 
		   // ──── Block 86 else (==) ────────────────────
		   0x010D8E50:  080000EA     B $+0x28  // goto 0x010D8E78
		   // ──── Block 87 if (==) ────────────────────
		   0x010D8E54:  000059E3     CMPS r0, sb, 0x0
		   0x010D8E58:  0400000A     BEQ $+0x18  // if (==) goto 0x010D8E70
		   // 
		   // ──── Block 88 else (!=) ────────────────────
		   0x010D8E5C:  5B09FAEB     BL $-0x17da8c
		   0x010D8E60:  9C0094E5     LDR r0, [r4, 0x9c]
		   0x010D8E64:  9C008AE5     STR r0, [r10, 0x9c]
		   // ──── Block 89 if (!=) ────────────────────
		   0x010D8E68:  5809FAEB     BL $-0x17da98
		   0x010D8E6C:  010000EA     B $+0xc  // goto 0x010D8E78
		   // ──── Block 90 if (==) ────────────────────
		   0x010D8E70:  9C0094E5     LDR r0, [r4, 0x9c]
		   0x010D8E74:  9C008AE5     STR r0, [r10, 0x9c]
		   // ──── Block 91 ──────────────────────────────
		   0x010D8E78:  94609DE5     LDR r6, [sp, 0x94]
		   0x010D8E7C:  000057E3     CMPS r0, r7, 0x0
		*/
	}

	// RVA: 0x10E2020 Offset: 0x10E2020 VA: 0x10E2020
	private void RechargeAllFieldContainers(Vector2Int startCell, int boostSeconds, float animationDelay) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010E2020:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E2024:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10E2470 Offset: 0x10E2470 VA: 0x10E2470
	public bool ItIsHighestLevelContainerOrPart(ItemData itemData) {
		/* Disassembly (ARM32, 425 instructions, 0x6A4 bytes):
		   // CFG: 68 blocks, 71 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E2470:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E2474:  04D04DE2     SUB sp, sp, 0x4
		   0x010E2478:  F0459FE5     LDR r4, [pc, 0x5f0]
		   0x010E247C:  0090A0E1     MOV sb, r0
		   0x010E2480:  0160A0E1     MOV r6, r1
		   0x010E2484:  04408FE0     ADD r4, pc, r4
		   0x010E2488:  0000D4E5     LDRB r0, [r4]
		   0x010E248C:  000050E3     CMPS r0, r0, 0x0
		   0x010E2490:  3D00001A     BNE $+0xfc  // if (!=) goto 0x010E258C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E2494:  D8059FE5     LDR r0, [pc, 0x5d8]
		   0x010E2498:  00009FE7     LDR r0, [pc, r0]
		   0x010E249C:  2FE3F9EB     BL $-0x18733c
		   0x010E24A0:  D0059FE5     LDR r0, [pc, 0x5d0]
		   0x010E24A4:  00009FE7     LDR r0, [pc, r0]
		   0x010E24A8:  2CE3F9EB     BL $-0x187348
		   0x010E24AC:  C8059FE5     LDR r0, [pc, 0x5c8]
		   0x010E24B0:  00009FE7     LDR r0, [pc, r0]
		   0x010E24B4:  29E3F9EB     BL $-0x187354
		   0x010E24B8:  C0059FE5     LDR r0, [pc, 0x5c0]
		   0x010E24BC:  00009FE7     LDR r0, [pc, r0]
		   0x010E24C0:  26E3F9EB     BL $-0x187360
		   0x010E24C4:  B8059FE5     LDR r0, [pc, 0x5b8]
		   0x010E24C8:  00009FE7     LDR r0, [pc, r0]
		   0x010E24CC:  23E3F9EB     BL $-0x18736c
		   0x010E24D0:  B0059FE5     LDR r0, [pc, 0x5b0]
		   0x010E24D4:  00009FE7     LDR r0, [pc, r0]
		   0x010E24D8:  20E3F9EB     BL $-0x187378
		   0x010E24DC:  A8059FE5     LDR r0, [pc, 0x5a8]
		   0x010E24E0:  00009FE7     LDR r0, [pc, r0]
		   0x010E24E4:  1DE3F9EB     BL $-0x187384
		   0x010E24E8:  A0059FE5     LDR r0, [pc, 0x5a0]
		   0x010E24EC:  00009FE7     LDR r0, [pc, r0]
		   0x010E24F0:  1AE3F9EB     BL $-0x187390
		   0x010E24F4:  98059FE5     LDR r0, [pc, 0x598]
		   0x010E24F8:  00009FE7     LDR r0, [pc, r0]
		   0x010E24FC:  17E3F9EB     BL $-0x18739c
		   0x010E2500:  90059FE5     LDR r0, [pc, 0x590]
		   0x010E2504:  00009FE7     LDR r0, [pc, r0]
		   0x010E2508:  14E3F9EB     BL $-0x1873a8
		   0x010E250C:  88059FE5     LDR r0, [pc, 0x588]
		   0x010E2510:  00009FE7     LDR r0, [pc, r0]
		   0x010E2514:  11E3F9EB     BL $-0x1873b4
		   0x010E2518:  80059FE5     LDR r0, [pc, 0x580]
		   0x010E251C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2520:  0EE3F9EB     BL $-0x1873c0
		   0x010E2524:  78059FE5     LDR r0, [pc, 0x578]
		   0x010E2528:  00009FE7     LDR r0, [pc, r0]
		   0x010E252C:  0BE3F9EB     BL $-0x1873cc
		   0x010E2530:  70059FE5     LDR r0, [pc, 0x570]
		   0x010E2534:  00009FE7     LDR r0, [pc, r0]
		   0x010E2538:  08E3F9EB     BL $-0x1873d8
		   0x010E253C:  68059FE5     LDR r0, [pc, 0x568]
		   0x010E2540:  00009FE7     LDR r0, [pc, r0]
		   0x010E2544:  05E3F9EB     BL $-0x1873e4
		   0x010E2548:  60059FE5     LDR r0, [pc, 0x560]
		   0x010E254C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2550:  02E3F9EB     BL $-0x1873f0
		   0x010E2554:  58059FE5     LDR r0, [pc, 0x558]
		   0x010E2558:  00009FE7     LDR r0, [pc, r0]
		   0x010E255C:  FFE2F9EB     BL $-0x1873fc
		   0x010E2560:  50059FE5     LDR r0, [pc, 0x550]
		   0x010E2564:  00009FE7     LDR r0, [pc, r0]
		   0x010E2568:  FCE2F9EB     BL $-0x187408
		   0x010E256C:  48059FE5     LDR r0, [pc, 0x548]
		   0x010E2570:  00009FE7     LDR r0, [pc, r0]
		   0x010E2574:  F9E2F9EB     BL $-0x187414
		   0x010E2578:  40059FE5     LDR r0, [pc, 0x540]
		   0x010E257C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2580:  F6E2F9EB     BL $-0x187420
		   0x010E2584:  0100A0E3     MOV r0, 0x1
		   0x010E2588:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E258C:  30059FE5     LDR r0, [pc, 0x530]
		   0x010E2590:  00009FE7     LDR r0, [pc, r0]
		   0x010E2594:  000090E5     LDR r0, [r0]
		   0x010E2598:  89E3F9EB     BL $-0x1871d4
		   0x010E259C:  0010A0E3     MOV r1, 0x0
		   0x010E25A0:  0050A0E1     MOV r5, r0
		   0x010E25A4:  084000EB     BL $+0x10028  // CALL → <>c__DisplayClass98_0..ctor
		   0x010E25A8:  000055E3     CMPS r0, r5, 0x0
		   0x010E25AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E25B4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E25B0:  86E3F9EB     BL $-0x1871e0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E25B4:  000056E3     CMPS r0, r6, 0x0
		   0x010E25B8:  086085E5     STR r6, [r5, 0x8]
		   0x010E25BC:  DB00000A     BEQ $+0x374  // if (==) goto 0x010E2930
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010E25C0:  00859FE5     LDR r8, [pc, 0x500]
		   0x010E25C4:  08809FE7     LDR r8, [pc, r8]
		   0x010E25C8:  084096E5     LDR r4, [r6, 0x8]
		   0x010E25CC:  000098E5     LDR r0, [r8]
		   0x010E25D0:  741090E5     LDR r1, [r0, 0x74]
		   0x010E25D4:  000051E3     CMPS r0, r1, 0x0
		   0x010E25D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E25E0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E25DC:  2CE3F9EB     BL $-0x187348
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E25E0:  0400A0E1     MOV r0, r4
		   0x010E25E4:  0010A0E3     MOV r1, 0x0
		   0x010E25E8:  0020A0E3     MOV r2, 0x0
		   0x010E25EC:  2A563CEB     BL $+0xf158b0  // CALL → sub_1FF7E9C
		   0x010E25F0:  000050E3     CMPS r0, r0, 0x0
		   0x010E25F4:  CD00001A     BNE $+0x33c  // if (!=) goto 0x010E2930
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E25F8:  084095E5     LDR r4, [r5, 0x8]
		   0x010E25FC:  000054E3     CMPS r0, r4, 0x0
		   0x010E2600:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2608
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E2604:  71E3F9EB     BL $-0x187234
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E2608:  084094E5     LDR r4, [r4, 0x8]
		   0x010E260C:  000054E3     CMPS r0, r4, 0x0
		   0x010E2610:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2618
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E2614:  6DE3F9EB     BL $-0x187244
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E2618:  280094E5     LDR r0, [r4, 0x28]
		   0x010E261C:  000050E3     CMPS r0, r0, 0x0
		   0x010E2620:  C200000A     BEQ $+0x310  // if (==) goto 0x010E2930
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010E2624:  084095E5     LDR r4, [r5, 0x8]
		   0x010E2628:  000054E3     CMPS r0, r4, 0x0
		   0x010E262C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2634
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E2630:  66E3F9EB     BL $-0x187260
		   // ──── Block 15 if (!=) ────────────────────
		   0x010E2634:  084094E5     LDR r4, [r4, 0x8]
		   0x010E2638:  000054E3     CMPS r0, r4, 0x0
		   0x010E263C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2644
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010E2640:  62E3F9EB     BL $-0x187270
		   // ──── Block 17 if (!=) ────────────────────
		   0x010E2644:  8CA49FE5     LDR r10, [pc, 0x48c]
		   0x010E2648:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E264C:  286094E5     LDR r6, [r4, 0x28]
		   0x010E2650:  00009AE5     LDR r0, [r10]
		   0x010E2654:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2658:  000051E3     CMPS r0, r1, 0x0
		   0x010E265C:  0100001A     BNE $+0xc  // if (!=) goto 0x010E2668
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010E2660:  0BE3F9EB     BL $-0x1873cc
		   0x010E2664:  00009AE5     LDR r0, [r10]
		   // ──── Block 19 if (!=) ────────────────────
		   0x010E2668:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010E266C:  187091E5     LDR r7, [r1, 0x18]
		   0x010E2670:  000057E3     CMPS r0, r7, 0x0
		   0x010E2674:  1500001A     BNE $+0x5c  // if (!=) goto 0x010E26D0
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010E2678:  742090E5     LDR r2, [r0, 0x74]
		   0x010E267C:  000052E3     CMPS r0, r2, 0x0
		   0x010E2680:  0200001A     BNE $+0x10  // if (!=) goto 0x010E2690
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010E2684:  02E3F9EB     BL $-0x1873f0
		   0x010E2688:  00009AE5     LDR r0, [r10]
		   0x010E268C:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 22 if (!=) ────────────────────
		   0x010E2690:  44049FE5     LDR r0, [pc, 0x444]
		   0x010E2694:  00009FE7     LDR r0, [pc, r0]
		   0x010E2698:  004091E5     LDR r4, [r1]
		   0x010E269C:  000090E5     LDR r0, [r0]
		   0x010E26A0:  47E3F9EB     BL $-0x1872dc
		   0x010E26A4:  0070A0E1     MOV r7, r0
		   0x010E26A8:  30049FE5     LDR r0, [pc, 0x430]
		   0x010E26AC:  0410A0E1     MOV r1, r4
		   0x010E26B0:  0030A0E3     MOV r3, 0x0
		   0x010E26B4:  00009FE7     LDR r0, [pc, r0]
		   0x010E26B8:  002090E5     LDR r2, [r0]
		   0x010E26BC:  0700A0E1     MOV r0, r7
		   0x010E26C0:  F0AD33EB     BL $+0xceb7c8  // CALL → Predicate<object>..ctor
		   0x010E26C4:  00009AE5     LDR r0, [r10]
		   0x010E26C8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E26CC:  187080E5     STR r7, [r0, 0x18]
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E26D0:  0C049FE5     LDR r0, [pc, 0x40c]
		   0x010E26D4:  0710A0E1     MOV r1, r7
		   0x010E26D8:  00009FE7     LDR r0, [pc, r0]
		   0x010E26DC:  002090E5     LDR r2, [r0]
		   0x010E26E0:  0600A0E1     MOV r0, r6
		   0x010E26E4:  A62129EB     BL $+0xa486a0  // CALL → Array.Find<object>
		   0x010E26E8:  0040A0E1     MOV r4, r0
		   0x010E26EC:  000098E5     LDR r0, [r8]
		   0x010E26F0:  741090E5     LDR r1, [r0, 0x74]
		   0x010E26F4:  000051E3     CMPS r0, r1, 0x0
		   0x010E26F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2700
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010E26FC:  E4E2F9EB     BL $-0x187468
		   // ──── Block 25 if (!=) ────────────────────
		   0x010E2700:  0400A0E1     MOV r0, r4
		   0x010E2704:  0010A0E3     MOV r1, 0x0
		   0x010E2708:  0020A0E3     MOV r2, 0x0
		   0x010E270C:  0060A0E3     MOV r6, 0x0
		   0x010E2710:  E1553CEB     BL $+0xf1578c  // CALL → sub_1FF7E9C
		   0x010E2714:  000050E3     CMPS r0, r0, 0x0
		   0x010E2718:  9A00001A     BNE $+0x270  // if (!=) goto 0x010E2988
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010E271C:  084095E5     LDR r4, [r5, 0x8]
		   0x010E2720:  000054E3     CMPS r0, r4, 0x0
		   0x010E2724:  0000001A     BNE $+0x8  // if (!=) goto 0x010E272C
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010E2728:  28E3F9EB     BL $-0x187358
		   // ──── Block 28 if (!=) ────────────────────
		   0x010E272C:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E2730:  010050E3     CMPS r0, r0, 0x1
		   0x010E2734:  0600000A     BEQ $+0x20  // if (==) goto 0x010E2754
		   // 
		   // ──── Block 29 else (!=) ────────────────────
		   0x010E2738:  084095E5     LDR r4, [r5, 0x8]
		   0x010E273C:  000054E3     CMPS r0, r4, 0x0
		   0x010E2740:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2748
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010E2744:  21E3F9EB     BL $-0x187374
		   // ──── Block 31 if (!=) ────────────────────
		   0x010E2748:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E274C:  080050E3     CMPS r0, r0, 0x8
		   0x010E2750:  8F00001A     BNE $+0x244  // if (!=) goto 0x010E2994
		   // 
		   // ──── Block 32 (from 2 paths) ──────────────────
		   0x010E2754:  3C4099E5     LDR r4, [sb, 0x3c]
		   0x010E2758:  000054E3     CMPS r0, r4, 0x0
		   0x010E275C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2764
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010E2760:  1AE3F9EB     BL $-0x187390
		   // ──── Block 34 if (!=) ────────────────────
		   0x010E2764:  0400A0E1     MOV r0, r4
		   0x010E2768:  0010A0E3     MOV r1, 0x0
		   0x010E276C:  C60701EB     BL $+0x41f20  // CALL → GameStateSave.get_Inventory
		   0x010E2770:  70A39FE5     LDR r10, [pc, 0x370]
		   0x010E2774:  0060A0E1     MOV r6, r0
		   0x010E2778:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E277C:  00009AE5     LDR r0, [r10]
		   0x010E2780:  0FE3F9EB     BL $-0x1873bc
		   0x010E2784:  0070A0E1     MOV r7, r0
		   0x010E2788:  5C039FE5     LDR r0, [pc, 0x35c]
		   0x010E278C:  0510A0E1     MOV r1, r5
		   0x010E2790:  0030A0E3     MOV r3, 0x0
		   0x010E2794:  00009FE7     LDR r0, [pc, r0]
		   0x010E2798:  002090E5     LDR r2, [r0]
		   0x010E279C:  0700A0E1     MOV r0, r7
		   0x010E27A0:  B8AD33EB     BL $+0xceb6e8  // CALL → Predicate<object>..ctor
		   0x010E27A4:  000056E3     CMPS r0, r6, 0x0
		   0x010E27A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E27B0
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010E27AC:  07E3F9EB     BL $-0x1873dc
		   // ──── Block 36 if (!=) ────────────────────
		   0x010E27B0:  38B39FE5     LDR fp, [pc, 0x338]
		   0x010E27B4:  0600A0E1     MOV r0, r6
		   0x010E27B8:  0710A0E1     MOV r1, r7
		   0x010E27BC:  0BB09FE7     LDR fp, [pc, fp]
		   0x010E27C0:  00209BE5     LDR r2, [fp]
		   0x010E27C4:  A4426CEB     BL $+0x1b10a98  // CALL → List<object>.Exists
		   0x010E27C8:  3C4099E5     LDR r4, [sb, 0x3c]
		   0x010E27CC:  0080A0E1     MOV r8, r0
		   0x010E27D0:  000054E3     CMPS r0, r4, 0x0
		   0x010E27D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E27DC
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x010E27D8:  FCE2F9EB     BL $-0x187408
		   // ──── Block 38 if (!=) ────────────────────
		   0x010E27DC:  00009AE5     LDR r0, [r10]
		   0x010E27E0:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010E27E4:  F6E2F9EB     BL $-0x187420
		   0x010E27E8:  0040A0E1     MOV r4, r0
		   0x010E27EC:  00039FE5     LDR r0, [pc, 0x300]
		   0x010E27F0:  0510A0E1     MOV r1, r5
		   0x010E27F4:  0030A0E3     MOV r3, 0x0
		   0x010E27F8:  0060A0E3     MOV r6, 0x0
		   0x010E27FC:  00009FE7     LDR r0, [pc, r0]
		   0x010E2800:  002090E5     LDR r2, [r0]
		   0x010E2804:  0400A0E1     MOV r0, r4
		   0x010E2808:  9EAD33EB     BL $+0xceb680  // CALL → Predicate<object>..ctor
		   0x010E280C:  000057E3     CMPS r0, r7, 0x0
		   0x010E2810:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2818
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010E2814:  EDE2F9EB     BL $-0x187444
		   // ──── Block 40 if (!=) ────────────────────
		   0x010E2818:  00209BE5     LDR r2, [fp]
		   0x010E281C:  0700A0E1     MOV r0, r7
		   0x010E2820:  0410A0E1     MOV r1, r4
		   0x010E2824:  8C426CEB     BL $+0x1b10a38  // CALL → List<object>.Exists
		   0x010E2828:  000098E1     ORRS r0, r8, r0
		   0x010E282C:  5500001A     BNE $+0x15c  // if (!=) goto 0x010E2988
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010E2830:  3C4099E5     LDR r4, [sb, 0x3c]
		   0x010E2834:  000054E3     CMPS r0, r4, 0x0
		   0x010E2838:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2840
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x010E283C:  E3E2F9EB     BL $-0x18746c
		   // ──── Block 43 if (!=) ────────────────────
		   0x010E2840:  0400A0E1     MOV r0, r4
		   0x010E2844:  0010A0E3     MOV r1, 0x0
		   0x010E2848:  8F0701EB     BL $+0x41e44  // CALL → GameStateSave.get_Inventory
		   0x010E284C:  0060A0E1     MOV r6, r0
		   0x010E2850:  00009AE5     LDR r0, [r10]
		   0x010E2854:  DAE2F9EB     BL $-0x187490
		   0x010E2858:  0070A0E1     MOV r7, r0
		   0x010E285C:  94029FE5     LDR r0, [pc, 0x294]
		   0x010E2860:  0510A0E1     MOV r1, r5
		   0x010E2864:  0030A0E3     MOV r3, 0x0
		   0x010E2868:  00009FE7     LDR r0, [pc, r0]
		   0x010E286C:  002090E5     LDR r2, [r0]
		   0x010E2870:  0700A0E1     MOV r0, r7
		   0x010E2874:  83AD33EB     BL $+0xceb614  // CALL → Predicate<object>..ctor
		   0x010E2878:  000056E3     CMPS r0, r6, 0x0
		   0x010E287C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2884
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x010E2880:  D2E2F9EB     BL $-0x1874b0
		   // ──── Block 45 if (!=) ────────────────────
		   0x010E2884:  70829FE5     LDR r8, [pc, 0x270]
		   0x010E2888:  0600A0E1     MOV r0, r6
		   0x010E288C:  0710A0E1     MOV r1, r7
		   0x010E2890:  08809FE7     LDR r8, [pc, r8]
		   0x010E2894:  002098E5     LDR r2, [r8]
		   0x010E2898:  AD426CEB     BL $+0x1b10abc  // CALL → List<object>.FindAll
		   0x010E289C:  0040A0E1     MOV r4, r0
		   0x010E28A0:  000050E3     CMPS r0, r0, 0x0
		   0x010E28A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E28AC
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x010E28A8:  C8E2F9EB     BL $-0x1874d8
		   // ──── Block 47 if (!=) ────────────────────
		   0x010E28AC:  3C6099E5     LDR r6, [sb, 0x3c]
		   0x010E28B0:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010E28B4:  000056E3     CMPS r0, r6, 0x0
		   0x010E28B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E28C0
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x010E28BC:  C3E2F9EB     BL $-0x1874ec
		   // ──── Block 49 if (!=) ────────────────────
		   0x010E28C0:  00009AE5     LDR r0, [r10]
		   0x010E28C4:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010E28C8:  BDE2F9EB     BL $-0x187504
		   0x010E28CC:  0060A0E1     MOV r6, r0
		   0x010E28D0:  28029FE5     LDR r0, [pc, 0x228]
		   0x010E28D4:  0510A0E1     MOV r1, r5
		   0x010E28D8:  0030A0E3     MOV r3, 0x0
		   0x010E28DC:  00009FE7     LDR r0, [pc, r0]
		   0x010E28E0:  002090E5     LDR r2, [r0]
		   0x010E28E4:  0600A0E1     MOV r0, r6
		   0x010E28E8:  66AD33EB     BL $+0xceb5a0  // CALL → Predicate<object>..ctor
		   0x010E28EC:  000054E3     CMPS r0, r4, 0x0
		   0x010E28F0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E28F8
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x010E28F4:  B5E2F9EB     BL $-0x187524
		   // ──── Block 51 if (!=) ────────────────────
		   0x010E28F8:  002098E5     LDR r2, [r8]
		   0x010E28FC:  0400A0E1     MOV r0, r4
		   0x010E2900:  0610A0E1     MOV r1, r6
		   0x010E2904:  92426CEB     BL $+0x1b10a50  // CALL → List<object>.FindAll
		   0x010E2908:  0040A0E1     MOV r4, r0
		   0x010E290C:  000050E3     CMPS r0, r0, 0x0
		   0x010E2910:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2918
		   // 
		   // ──── Block 52 else (==) ────────────────────
		   0x010E2914:  ADE2F9EB     BL $-0x187544
		   // ──── Block 53 if (!=) ────────────────────
		   0x010E2918:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010E291C:  0060A0E3     MOV r6, 0x0
		   0x010E2920:  070080E0     ADD r0, r0, r7
		   0x010E2924:  020050E3     CMPS r0, r0, 0x2
		   0x010E2928:  016000B3     MOVLT r6, 0x1
		   0x010E292C:  150000EA     B $+0x5c  // goto 0x010E2988
		   // ──── Block 54 (from 3 paths) ──────────────────
		   0x010E2930:  94019FE5     LDR r0, [pc, 0x194]
		   0x010E2934:  00009FE7     LDR r0, [pc, r0]
		   0x010E2938:  000090E5     LDR r0, [r0]
		   0x010E293C:  A0E2F9EB     BL $-0x187578
		   0x010E2940:  0040A0E1     MOV r4, r0
		   0x010E2944:  84019FE5     LDR r0, [pc, 0x184]
		   0x010E2948:  0020A0E3     MOV r2, 0x0
		   0x010E294C:  0060A0E3     MOV r6, 0x0
		   0x010E2950:  00009FE7     LDR r0, [pc, r0]
		   0x010E2954:  001090E5     LDR r1, [r0]
		   0x010E2958:  0400A0E1     MOV r0, r4
		   0x010E295C:  B6997EEB     BL $+0x1fa66e0  // CALL → Exception..ctor
		   0x010E2960:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010E2964:  00009FE7     LDR r0, [pc, r0]
		   0x010E2968:  000090E5     LDR r0, [r0]
		   0x010E296C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2970:  000051E3     CMPS r0, r1, 0x0
		   0x010E2974:  0000001A     BNE $+0x8  // if (!=) goto 0x010E297C
		   // 
		   // ──── Block 55 else (==) ────────────────────
		   0x010E2978:  45E2F9EB     BL $-0x1876e4
		   // ──── Block 56 if (!=) ────────────────────
		   0x010E297C:  0400A0E1     MOV r0, r4
		   0x010E2980:  0010A0E3     MOV r1, 0x0
		   0x010E2984:  00563CEB     BL $+0xf15808  // CALL → sub_1FF818C
		   // ──── Block 57 (from 2 paths) ──────────────────
		   0x010E2988:  0600A0E1     MOV r0, r6
		   0x010E298C:  04D08DE2     ADD sp, sp, 0x4
		   0x010E2990:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 58 if (!=) ────────────────────
		   0x010E2994:  3C4099E5     LDR r4, [sb, 0x3c]
		   0x010E2998:  000054E3     CMPS r0, r4, 0x0
		   0x010E299C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E29A4
		   // 
		   // ──── Block 59 else (==) ────────────────────
		   0x010E29A0:  8AE2F9EB     BL $-0x1875d0
		   // ──── Block 60 if (!=) ────────────────────
		   0x010E29A4:  0400A0E1     MOV r0, r4
		   0x010E29A8:  0010A0E3     MOV r1, 0x0
		   0x010E29AC:  360701EB     BL $+0x41ce0  // CALL → GameStateSave.get_Inventory
		   0x010E29B0:  4C419FE5     LDR r4, [pc, 0x14c]
		   0x010E29B4:  0060A0E1     MOV r6, r0
		   0x010E29B8:  04409FE7     LDR r4, [pc, r4]
		   0x010E29BC:  000094E5     LDR r0, [r4]
		   0x010E29C0:  7FE2F9EB     BL $-0x1875fc
		   0x010E29C4:  0070A0E1     MOV r7, r0
		   0x010E29C8:  38019FE5     LDR r0, [pc, 0x138]
		   0x010E29CC:  0510A0E1     MOV r1, r5
		   0x010E29D0:  0030A0E3     MOV r3, 0x0
		   0x010E29D4:  00009FE7     LDR r0, [pc, r0]
		   0x010E29D8:  002090E5     LDR r2, [r0]
		   0x010E29DC:  0700A0E1     MOV r0, r7
		   0x010E29E0:  28AD33EB     BL $+0xceb4a8  // CALL → Predicate<object>..ctor
		   0x010E29E4:  000056E3     CMPS r0, r6, 0x0
		   0x010E29E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E29F0
		   // 
		   // ──── Block 61 else (==) ────────────────────
		   0x010E29EC:  77E2F9EB     BL $-0x18761c
		   // ──── Block 62 if (!=) ────────────────────
		   0x010E29F0:  14819FE5     LDR r8, [pc, 0x114]
		   0x010E29F4:  0600A0E1     MOV r0, r6
		   0x010E29F8:  0710A0E1     MOV r1, r7
		   0x010E29FC:  08809FE7     LDR r8, [pc, r8]
		   0x010E2A00:  002098E5     LDR r2, [r8]
		   0x010E2A04:  B4426CEB     BL $+0x1b10ad8  // CALL → List<object>.FindIndex
		   0x010E2A08:  3C7099E5     LDR r7, [sb, 0x3c]
		   0x010E2A0C:  0060A0E1     MOV r6, r0
		   0x010E2A10:  000057E3     CMPS r0, r7, 0x0
		   0x010E2A14:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2A1C
		   // 
		   // ──── Block 63 else (==) ────────────────────
		   0x010E2A18:  6CE2F9EB     BL $-0x187648
		   // ──── Block 64 if (!=) ────────────────────
		   0x010E2A1C:  000094E5     LDR r0, [r4]
		   0x010E2A20:  0C4097E5     LDR r4, [r7, 0xc]
		   0x010E2A24:  66E2F9EB     BL $-0x187660
		   0x010E2A28:  0070A0E1     MOV r7, r0
		   0x010E2A2C:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010E2A30:  0510A0E1     MOV r1, r5
		   0x010E2A34:  0030A0E3     MOV r3, 0x0
		   0x010E2A38:  00009FE7     LDR r0, [pc, r0]
		   0x010E2A3C:  002090E5     LDR r2, [r0]
		   0x010E2A40:  0700A0E1     MOV r0, r7
		   0x010E2A44:  0FAD33EB     BL $+0xceb444  // CALL → Predicate<object>..ctor
		   0x010E2A48:  000054E3     CMPS r0, r4, 0x0
		   0x010E2A4C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2A54
		   // 
		   // ──── Block 65 else (==) ────────────────────
		   0x010E2A50:  5EE2F9EB     BL $-0x187680
		   // ──── Block 66 if (!=) ────────────────────
		   0x010E2A54:  002098E5     LDR r2, [r8]
		   0x010E2A58:  0400A0E1     MOV r0, r4
		   0x010E2A5C:  0710A0E1     MOV r1, r7
		   0x010E2A60:  9D426CEB     BL $+0x1b10a7c  // CALL → List<object>.FindIndex
		   0x010E2A64:  060000E0     AND r0, r0, r6
		   0x010E2A68:  A06FA0E1     MOV r6, r0, r0, lsr 31
		   0x010E2A6C:  C5FFFFEA     B $-0xe4
		   0x010E2A70:  11981403     TSTSEQ sb, r4, 0x110000
		   0x010E2A74:  B86DF902     RSCSEQ r6, sb, 0x2e00
		   0x010E2A78:  E440F902     RSCSEQ r4, sb, 0xe4
		   0x010E2A7C:  3C44F902     RSCSEQ r4, sb, 0x3c000000
		   0x010E2A80:  986DF902     RSCSEQ r6, sb, 0x2600
		   0x010E2A84:  906DF902     RSCSEQ r6, sb, 0x2400
		   0x010E2A88:  246DF902     RSCSEQ r6, sb, 0x900
		   0x010E2A8C:  B06BF902     RSCSEQ r6, sb, 0x2c000
		   0x010E2A90:  4C40F902     RSCSEQ r4, sb, 0x4c
		   0x010E2A94:  A868F902     RSCSEQ r6, sb, 0xa80000
		   0x010E2A98:  006AF902     RSCSEQ r6, sb, 0x0
		   0x010E2A9C:  4C6DF902     RSCSEQ r6, sb, 0x1300
		   0x010E2AA0:  446DF902     RSCSEQ r6, sb, 0x1100
		   0x010E2AA4:  3C6DF902     RSCSEQ r6, sb, 0xf00
		   0x010E2AA8:  346DF902     RSCSEQ r6, sb, 0xd00
		   0x010E2AAC:  2C6DF902     RSCSEQ r6, sb, 0xb00
		   0x010E2AB0:  246DF902     RSCSEQ r6, sb, 0x900
		   0x010E2AB4:  1C6DF902     RSCSEQ r6, sb, 0x700
		   0x010E2AB8:  146DF902     RSCSEQ r6, sb, 0x500
		   0x010E2ABC:  946AF902     RSCSEQ r6, sb, 0x94000
		   0x010E2AC0:  006DF902     RSCSEQ r6, sb, 0x0
		   0x010E2AC4:  E86CF902     RSCSEQ r6, sb, 0xe800
		   0x010E2AC8:  743FF902     RSCSEQ r3, sb, 0x1d0
		   0x010E2ACC:  B83FF902     RSCSEQ r3, sb, 0x2e0
		   0x010E2AD0:  2C69F902     RSCSEQ r6, sb, 0xb0000
		   0x010E2AD4:  243CF902     RSCSEQ r3, sb, 0x2400
		   0x010E2AD8:  BC69F902     RSCSEQ r6, sb, 0x2f0000
		   0x010E2ADC:  0C67F902     RSCSEQ r6, sb, 0x300000
		   0x010E2AE0:  A86BF902     RSCSEQ r6, sb, 0x2a000
		   0x010E2AE4:  786BF902     RSCSEQ r6, sb, 0x1e000
		   0x010E2AE8:  8C67F902     RSCSEQ r6, sb, 0x2300000
		   0x010E2AEC:  CC6AF902     RSCSEQ r6, sb, 0xcc000
		   0x010E2AF0:  986AF902     RSCSEQ r6, sb, 0x98000
		   0x010E2AF4:  686AF902     RSCSEQ r6, sb, 0x68000
		   0x010E2AF8:  006AF902     RSCSEQ r6, sb, 0x0
		   0x010E2AFC:  C869F902     RSCSEQ r6, sb, 0x320000
		   0x010E2B00:  9069F902     RSCSEQ r6, sb, 0x240000
		   0x010E2B04:  4C65F902     RSCSEQ r6, sb, 0x13000000
		   0x010E2B08:  9C68F902     RSCSEQ r6, sb, 0x9c0000
		   0x010E2B0C:  FC67F902     RSCSEQ r6, sb, 0x3f00000
		   0x010E2B10:  3C68F902     RSCSEQ r6, sb, 0x3c0000
		*/
	}

	// RVA: 0x10D2960 Offset: 0x10D2960 VA: 0x10D2960
	public Item Unlock(Item item) {
		/* Disassembly (ARM32, 161 instructions, 0x284 bytes):
		   // CFG: 23 blocks, 21 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D2960:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010D2964:  30D04DE2     SUB sp, sp, 0x30
		   0x010D2968:  44429FE5     LDR r4, [pc, 0x244]
		   0x010D296C:  0080A0E1     MOV r8, r0
		   0x010D2970:  0150A0E1     MOV r5, r1
		   0x010D2974:  04408FE0     ADD r4, pc, r4
		   0x010D2978:  0000D4E5     LDRB r0, [r4]
		   0x010D297C:  000050E3     CMPS r0, r0, 0x0
		   0x010D2980:  1000001A     BNE $+0x48  // if (!=) goto 0x010D29C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D2984:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x010D2988:  00009FE7     LDR r0, [pc, r0]
		   0x010D298C:  F321FAEB     BL $-0x17782c
		   0x010D2990:  24029FE5     LDR r0, [pc, 0x224]
		   0x010D2994:  00009FE7     LDR r0, [pc, r0]
		   0x010D2998:  F021FAEB     BL $-0x177838
		   0x010D299C:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x010D29A0:  00009FE7     LDR r0, [pc, r0]
		   0x010D29A4:  ED21FAEB     BL $-0x177844
		   0x010D29A8:  14029FE5     LDR r0, [pc, 0x214]
		   0x010D29AC:  00009FE7     LDR r0, [pc, r0]
		   0x010D29B0:  EA21FAEB     BL $-0x177850
		   0x010D29B4:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x010D29B8:  00009FE7     LDR r0, [pc, r0]
		   0x010D29BC:  E721FAEB     BL $-0x17785c
		   0x010D29C0:  0100A0E3     MOV r0, 0x1
		   0x010D29C4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D29C8:  000055E3     CMPS r0, r5, 0x0
		   0x010D29CC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D29D4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D29D0:  7E22FAEB     BL $-0x177600
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D29D4:  3800D5E5     LDRB r0, [r5, 0x38]
		   0x010D29D8:  000050E3     CMPS r0, r0, 0x0
		   0x010D29DC:  1B00001A     BNE $+0x74  // if (!=) goto 0x010D2A50
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D29E0:  0500A0E1     MOV r0, r5
		   0x010D29E4:  0010A0E3     MOV r1, 0x0
		   0x010D29E8:  38DC00EB     BL $+0x370e8  // CALL → Item.GetItemCode
		   0x010D29EC:  0010A0E1     MOV r1, r0
		   0x010D29F0:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x010D29F4:  0020A0E3     MOV r2, 0x0
		   0x010D29F8:  00009FE7     LDR r0, [pc, r0]
		   0x010D29FC:  000090E5     LDR r0, [r0]
		   0x010D2A00:  4EDB76EB     BL $+0x1db6d40  // CALL → String.Concat
		   0x010D2A04:  0040A0E1     MOV r4, r0
		   0x010D2A08:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x010D2A0C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2A10:  000090E5     LDR r0, [r0]
		   0x010D2A14:  6A22FAEB     BL $-0x177650
		   0x010D2A18:  0410A0E1     MOV r1, r4
		   0x010D2A1C:  0020A0E3     MOV r2, 0x0
		   0x010D2A20:  0060A0E1     MOV r6, r0
		   0x010D2A24:  162E11EB     BL $+0x44b860  // CALL → InfoException..ctor
		   0x010D2A28:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x010D2A2C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2A30:  000090E5     LDR r0, [r0]
		   0x010D2A34:  741090E5     LDR r1, [r0, 0x74]
		   0x010D2A38:  000051E3     CMPS r0, r1, 0x0
		   0x010D2A3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2A44
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010D2A40:  1322FAEB     BL $-0x1777ac
		   // ──── Block 7 if (!=) ────────────────────
		   0x010D2A44:  0600A0E1     MOV r0, r6
		   0x010D2A48:  0010A0E3     MOV r1, 0x0
		   0x010D2A4C:  CE953CEB     BL $+0xf25740  // CALL → sub_1FF818C
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D2A50:  0500A0E1     MOV r0, r5
		   0x010D2A54:  0010A0E3     MOV r1, 0x0
		   0x010D2A58:  9EDB00EB     BL $+0x36e80  // CALL → Item.get_activeData
		   0x010D2A5C:  0070A0E1     MOV r7, r0
		   0x010D2A60:  000050E3     CMPS r0, r0, 0x0
		   0x010D2A64:  0100000A     BEQ $+0xc  // if (==) goto 0x010D2A70
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010D2A68:  106095E5     LDR r6, [r5, 0x10]
		   0x010D2A6C:  160000EA     B $+0x60  // goto 0x010D2ACC
		   // ──── Block 10 if (==) ────────────────────
		   0x010D2A70:  60019FE5     LDR r0, [pc, 0x160]
		   0x010D2A74:  00009FE7     LDR r0, [pc, r0]
		   0x010D2A78:  000090E5     LDR r0, [r0]
		   0x010D2A7C:  5022FAEB     BL $-0x1776b8
		   0x010D2A80:  0060A0E1     MOV r6, r0
		   0x010D2A84:  50019FE5     LDR r0, [pc, 0x150]
		   0x010D2A88:  0020A0E3     MOV r2, 0x0
		   0x010D2A8C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2A90:  001090E5     LDR r1, [r0]
		   0x010D2A94:  0600A0E1     MOV r0, r6
		   0x010D2A98:  67D97EEB     BL $+0x1fb65a4  // CALL → Exception..ctor
		   0x010D2A9C:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010D2AA0:  00009FE7     LDR r0, [pc, r0]
		   0x010D2AA4:  000090E5     LDR r0, [r0]
		   0x010D2AA8:  741090E5     LDR r1, [r0, 0x74]
		   0x010D2AAC:  000051E3     CMPS r0, r1, 0x0
		   0x010D2AB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2AB8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D2AB4:  F621FAEB     BL $-0x177820
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D2AB8:  0600A0E1     MOV r0, r6
		   0x010D2ABC:  0010A0E3     MOV r1, 0x0
		   0x010D2AC0:  B1953CEB     BL $+0xf256cc  // CALL → sub_1FF818C
		   0x010D2AC4:  106095E5     LDR r6, [r5, 0x10]
		   0x010D2AC8:  4022FAEB     BL $-0x1776f8
		   // ──── Block 13 ──────────────────────────────
		   0x010D2ACC:  0700A0E1     MOV r0, r7
		   0x010D2AD0:  0010A0E3     MOV r1, 0x0
		   0x010D2AD4:  084097E5     LDR r4, [r7, 0x8]
		   0x010D2AD8:  C2DC00EB     BL $+0x37310  // CALL → ItemData.get_Order
		   0x010D2ADC:  0070A0E1     MOV r7, r0
		   0x010D2AE0:  000054E3     CMPS r0, r4, 0x0
		   0x010D2AE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2AEC
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010D2AE8:  3822FAEB     BL $-0x177718
		   // ──── Block 15 if (!=) ────────────────────
		   0x010D2AEC:  0400A0E1     MOV r0, r4
		   0x010D2AF0:  0710A0E1     MOV r1, r7
		   0x010D2AF4:  4AEBFFEB     BL $-0x52d0
		   0x010D2AF8:  0040A0E1     MOV r4, r0
		   0x010D2AFC:  000050E3     CMPS r0, r0, 0x0
		   0x010D2B00:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2B08
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010D2B04:  3122FAEB     BL $-0x177734
		   // ──── Block 17 if (!=) ────────────────────
		   0x010D2B08:  0000A0E3     MOV r0, 0x0
		   0x010D2B0C:  187094E5     LDR r7, [r4, 0x18]  // vtable: Object.Equals
		   0x010D2B10:  00008DE5     STR r0, [sp]
		   0x010D2B14:  0510A0E1     MOV r1, r5
		   0x010D2B18:  04008DE5     STR r0, [sp, 0x4]
		   0x010D2B1C:  0020A0E3     MOV r2, 0x0
		   0x010D2B20:  08008DE5     STR r0, [sp, 0x8]
		   0x010D2B24:  0800A0E1     MOV r0, r8
		   0x010D2B28:  0030A0E3     MOV r3, 0x0
		   0x010D2B2C:  753900EB     BL $+0xe5dc  // CALL → GameState.RemoveItem
		   0x010D2B30:  0800A0E1     MOV r0, r8
		   0x010D2B34:  0610A0E1     MOV r1, r6
		   0x010D2B38:  F53F00EB     BL $+0xffdc  // CALL → GameState.TryUnboxing
		   0x010D2B3C:  000056E3     CMPS r0, r6, 0x0
		   0x010D2B40:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2B48
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010D2B44:  2122FAEB     BL $-0x177774
		   // ──── Block 19 if (!=) ────────────────────
		   0x010D2B48:  0600A0E1     MOV r0, r6
		   0x010D2B4C:  0010A0E3     MOV r1, 0x0
		   0x010D2B50:  0040A0E3     MOV r4, 0x0
		   0x010D2B54:  49E8FFEB     BL $-0x5ed4
		   0x010D2B58:  000057E3     CMPS r0, r7, 0x0
		   0x010D2B5C:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2B64
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010D2B60:  1A22FAEB     BL $-0x177790
		   // ──── Block 21 if (!=) ────────────────────
		   0x010D2B64:  1C20D7E5     LDRB r2, [r7, 0x1c]
		   0x010D2B68:  0010E0E3     MVN r1, r0, 0x0
		   0x010D2B6C:  440098E5     LDR r0, [r8, 0x44]
		   0x010D2B70:  0130A0E3     MOV r3, 0x1
		   0x010D2B74:  24108DE5     STR r1, [sp, 0x24]
		   0x010D2B78:  11008DE9     STMIA sp, {r0, r4}
		   0x010D2B7C:  0800A0E1     MOV r0, r8
		   0x010D2B80:  18108DE5     STR r1, [sp, 0x18]
		   0x010D2B84:  0710A0E1     MOV r1, r7
		   0x010D2B88:  00308DE5     STR r3, [sp]
		   0x010D2B8C:  14308DE5     STR r3, [sp, 0x14]
		   0x010D2B90:  0630A0E1     MOV r3, r6
		   0x010D2B94:  20408DE5     STR r4, [sp, 0x20]
		   0x010D2B98:  28408DE5     STR r4, [sp, 0x28]
		   0x010D2B9C:  0C408DE5     STR r4, [sp, 0xc]
		   0x010D2BA0:  10408DE5     STR r4, [sp, 0x10]
		   0x010D2BA4:  1C408DE5     STR r4, [sp, 0x1c]
		   0x010D2BA8:  D61600EB     BL $+0x5b60  // CALL → GameState.AddItem
		   0x010D2BAC:  30D08DE2     ADD sp, sp, 0x30
		   0x010D2BB0:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010D2BB4:  22931503     TSTSEQ sb, r5, 0x88000000
		   0x010D2BB8:  003CFA02     RSCSEQ r3, r10, 0x0
		   0x010D2BBC:  583FFA02     RSCSEQ r3, r10, 0x160
		   0x010D2BC0:  2C4DFA02     RSCSEQ r4, r10, 0xb00
		   0x010D2BC4:  2865FA02     RSCSEQ r6, r10, 0xa000000
		   0x010D2BC8:  2065FA02     RSCSEQ r6, r10, 0x8000000
		   0x010D2BCC:  E064FA02     RSCSEQ r6, r10, 0xe0000000
		   0x010D2BD0:  C04CFA02     RSCSEQ r4, r10, 0xc000
		   0x010D2BD4:  5C3BFA02     RSCSEQ r3, r10, 0x17000
		   0x010D2BD8:  783EFA02     RSCSEQ r3, r10, 0x780
		   0x010D2BDC:  4864FA02     RSCSEQ r6, r10, 0x48000000
		   0x010D2BE0:  E83AFA02     RSCSEQ r3, r10, 0xe8000
		*/
	}

	// RVA: 0x10D41B8 Offset: 0x10D41B8 VA: 0x10D41B8
	public bool ForceUpdateCoordinates(Item item) {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D41B8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010D41BC:  08D04DE2     SUB sp, sp, 0x8
		   0x010D41C0:  3C5090E5     LDR r5, [r0, 0x3c]
		   0x010D41C4:  0140A0E1     MOV r4, r1
		   0x010D41C8:  000051E3     CMPS r0, r1, 0x0
		   0x010D41CC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D41D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D41D0:  7E1CFAEB     BL $-0x178e00
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D41D4:  106094E5     LDR r6, [r4, 0x10]
		   0x010D41D8:  000056E3     CMPS r0, r6, 0x0
		   0x010D41DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D41E4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D41E0:  7A1CFAEB     BL $-0x178e10
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D41E4:  D461C6E1     LDRD r6, r7, [r6, 0x14]
		   0x010D41E8:  000055E3     CMPS r0, r5, 0x0
		   0x010D41EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D41F4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D41F0:  761CFAEB     BL $-0x178e20
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D41F4:  0000A0E3     MOV r0, 0x0
		   0x010D41F8:  0410A0E1     MOV r1, r4
		   0x010D41FC:  00008DE5     STR r0, [sp]
		   0x010D4200:  0500A0E1     MOV r0, r5
		   0x010D4204:  0620A0E1     MOV r2, r6
		   0x010D4208:  0730A0E1     MOV r3, r7
		   0x010D420C:  8E9401EB     BL $+0x65240  // CALL → GameStateSave.UpdateCoordinates
		   0x010D4210:  08D08DE2     ADD sp, sp, 0x8
		   0x010D4214:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x10D3D90 Offset: 0x10D3D90 VA: 0x10D3D90
	public bool TryMerge(Cell targetCell, Item draggedItem) {
		/* Disassembly (ARM32, 251 instructions, 0x3EC bytes):
		   // CFG: 48 blocks, 52 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D3D90:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D3D94:  84739FE5     LDR r7, [pc, 0x384]
		   0x010D3D98:  0080A0E1     MOV r8, r0
		   0x010D3D9C:  0250A0E1     MOV r5, r2
		   0x010D3DA0:  0160A0E1     MOV r6, r1
		   0x010D3DA4:  07708FE0     ADD r7, pc, r7
		   0x010D3DA8:  0000D7E5     LDRB r0, [r7]
		   0x010D3DAC:  000050E3     CMPS r0, r0, 0x0
		   0x010D3DB0:  2200001A     BNE $+0x90  // if (!=) goto 0x010D3E40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D3DB4:  68039FE5     LDR r0, [pc, 0x368]
		   0x010D3DB8:  00009FE7     LDR r0, [pc, r0]
		   0x010D3DBC:  E71CFAEB     BL $-0x178c5c
		   0x010D3DC0:  60039FE5     LDR r0, [pc, 0x360]
		   0x010D3DC4:  00009FE7     LDR r0, [pc, r0]
		   0x010D3DC8:  E41CFAEB     BL $-0x178c68
		   0x010D3DCC:  58039FE5     LDR r0, [pc, 0x358]
		   0x010D3DD0:  00009FE7     LDR r0, [pc, r0]
		   0x010D3DD4:  E11CFAEB     BL $-0x178c74
		   0x010D3DD8:  50039FE5     LDR r0, [pc, 0x350]
		   0x010D3DDC:  00009FE7     LDR r0, [pc, r0]
		   0x010D3DE0:  DE1CFAEB     BL $-0x178c80
		   0x010D3DE4:  48039FE5     LDR r0, [pc, 0x348]
		   0x010D3DE8:  00009FE7     LDR r0, [pc, r0]
		   0x010D3DEC:  DB1CFAEB     BL $-0x178c8c
		   0x010D3DF0:  40039FE5     LDR r0, [pc, 0x340]
		   0x010D3DF4:  00009FE7     LDR r0, [pc, r0]
		   0x010D3DF8:  D81CFAEB     BL $-0x178c98
		   0x010D3DFC:  38039FE5     LDR r0, [pc, 0x338]
		   0x010D3E00:  00009FE7     LDR r0, [pc, r0]
		   0x010D3E04:  D51CFAEB     BL $-0x178ca4
		   0x010D3E08:  30039FE5     LDR r0, [pc, 0x330]
		   0x010D3E0C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3E10:  D21CFAEB     BL $-0x178cb0
		   0x010D3E14:  28039FE5     LDR r0, [pc, 0x328]
		   0x010D3E18:  00009FE7     LDR r0, [pc, r0]
		   0x010D3E1C:  CF1CFAEB     BL $-0x178cbc
		   0x010D3E20:  20039FE5     LDR r0, [pc, 0x320]
		   0x010D3E24:  00009FE7     LDR r0, [pc, r0]
		   0x010D3E28:  CC1CFAEB     BL $-0x178cc8
		   0x010D3E2C:  18039FE5     LDR r0, [pc, 0x318]
		   0x010D3E30:  00009FE7     LDR r0, [pc, r0]
		   0x010D3E34:  C91CFAEB     BL $-0x178cd4
		   0x010D3E38:  0100A0E3     MOV r0, 0x1
		   0x010D3E3C:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D3E40:  08439FE5     LDR r4, [pc, 0x308]
		   0x010D3E44:  04409FE7     LDR r4, [pc, r4]
		   0x010D3E48:  000094E5     LDR r0, [r4]
		   0x010D3E4C:  741090E5     LDR r1, [r0, 0x74]
		   0x010D3E50:  000051E3     CMPS r0, r1, 0x0
		   0x010D3E54:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3E5C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D3E58:  0D1DFAEB     BL $-0x178bc4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D3E5C:  0600A0E1     MOV r0, r6
		   0x010D3E60:  0010A0E3     MOV r1, 0x0
		   0x010D3E64:  0020A0E3     MOV r2, 0x0
		   0x010D3E68:  0B903CEB     BL $+0xf24034  // CALL → sub_1FF7E9C
		   0x010D3E6C:  000050E3     CMPS r0, r0, 0x0
		   0x010D3E70:  2200001A     BNE $+0x90  // if (!=) goto 0x010D3F00
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D3E74:  000094E5     LDR r0, [r4]
		   0x010D3E78:  741090E5     LDR r1, [r0, 0x74]
		   0x010D3E7C:  000051E3     CMPS r0, r1, 0x0
		   0x010D3E80:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3E88
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010D3E84:  021DFAEB     BL $-0x178bf0
		   // ──── Block 7 if (!=) ────────────────────
		   0x010D3E88:  0500A0E1     MOV r0, r5
		   0x010D3E8C:  0010A0E3     MOV r1, 0x0
		   0x010D3E90:  0020A0E3     MOV r2, 0x0
		   0x010D3E94:  00903CEB     BL $+0xf24008  // CALL → sub_1FF7E9C
		   0x010D3E98:  000050E3     CMPS r0, r0, 0x0
		   0x010D3E9C:  1700001A     BNE $+0x64  // if (!=) goto 0x010D3F00
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010D3EA0:  000056E3     CMPS r0, r6, 0x0
		   0x010D3EA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3EAC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D3EA8:  481DFAEB     BL $-0x178ad8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D3EAC:  2800D6E5     LDRB r0, [r6, 0x28]
		   0x010D3EB0:  000050E3     CMPS r0, r0, 0x0
		   0x010D3EB4:  0300000A     BEQ $+0x14  // if (==) goto 0x010D3EC8
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010D3EB8:  000055E3     CMPS r0, r5, 0x0
		   0x010D3EBC:  0C00001A     BNE $+0x38  // if (!=) goto 0x010D3EF4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010D3EC0:  421DFAEB     BL $-0x178af0
		   0x010D3EC4:  0A0000EA     B $+0x30  // goto 0x010D3EF4
		   // ──── Block 13 if (==) ────────────────────
		   0x010D3EC8:  244096E5     LDR r4, [r6, 0x24]
		   0x010D3ECC:  000054E3     CMPS r0, r4, 0x0
		   0x010D3ED0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3ED8
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010D3ED4:  3D1DFAEB     BL $-0x178b04
		   // ──── Block 15 if (!=) ────────────────────
		   0x010D3ED8:  344094E5     LDR r4, [r4, 0x34]
		   0x010D3EDC:  000055E3     CMPS r0, r5, 0x0
		   0x010D3EE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3EE8
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010D3EE4:  391DFAEB     BL $-0x178b14
		   // ──── Block 17 if (!=) ────────────────────
		   0x010D3EE8:  340095E5     LDR r0, [r5, 0x34]
		   0x010D3EEC:  000054E1     CMPS r0, r4, r0
		   0x010D3EF0:  0200000A     BEQ $+0x10  // if (==) goto 0x010D3F00
		   // 
		   // ──── Block 18 (from 2 paths) ──────────────────
		   0x010D3EF4:  3800D5E5     LDRB r0, [r5, 0x38]
		   0x010D3EF8:  000050E3     CMPS r0, r0, 0x0
		   0x010D3EFC:  4400000A     BEQ $+0x118  // if (==) goto 0x010D4014
		   // 
		   // ──── Block 19 (from 4 paths) ──────────────────
		   0x010D3F00:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010D3F04:  00009FE7     LDR r0, [pc, r0]
		   0x010D3F08:  000090E5     LDR r0, [r0]
		   0x010D3F0C:  2C1DFAEB     BL $-0x178b48
		   0x010D3F10:  0010A0E3     MOV r1, 0x0
		   0x010D3F14:  0050A0E1     MOV r5, r0
		   0x010D3F18:  9F6B00EB     BL $+0x1ae84  // CALL → <>c__DisplayClass101_0..ctor
		   0x010D3F1C:  000055E3     CMPS r0, r5, 0x0
		   0x010D3F20:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3F28
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010D3F24:  291DFAEB     BL $-0x178b54
		   // ──── Block 21 if (!=) ────────────────────
		   0x010D3F28:  28029FE5     LDR r0, [pc, 0x228]
		   0x010D3F2C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3F30:  3C6098E5     LDR r6, [r8, 0x3c]
		   0x010D3F34:  000090E5     LDR r0, [r0]
		   0x010D3F38:  000056E3     CMPS r0, r6, 0x0
		   0x010D3F3C:  080085E5     STR r0, [r5, 0x8]
		   0x010D3F40:  0C0085E5     STR r0, [r5, 0xc]
		   0x010D3F44:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3F4C
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010D3F48:  201DFAEB     BL $-0x178b78
		   // ──── Block 23 if (!=) ────────────────────
		   0x010D3F4C:  0600A0E1     MOV r0, r6
		   0x010D3F50:  0010A0E3     MOV r1, 0x0
		   0x010D3F54:  CC4101EB     BL $+0x50738  // CALL → GameStateSave.get_Inventory
		   0x010D3F58:  FC419FE5     LDR r4, [pc, 0x1fc]
		   0x010D3F5C:  0060A0E1     MOV r6, r0
		   0x010D3F60:  04409FE7     LDR r4, [pc, r4]
		   0x010D3F64:  000094E5     LDR r0, [r4]
		   0x010D3F68:  151DFAEB     BL $-0x178ba4
		   0x010D3F6C:  0070A0E1     MOV r7, r0
		   0x010D3F70:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x010D3F74:  0510A0E1     MOV r1, r5
		   0x010D3F78:  0030A0E3     MOV r3, 0x0
		   0x010D3F7C:  00009FE7     LDR r0, [pc, r0]
		   0x010D3F80:  002090E5     LDR r2, [r0]
		   0x010D3F84:  0700A0E1     MOV r0, r7
		   0x010D3F88:  AE4953EB     BL $+0x14d26c0  // CALL → Action<object>..ctor
		   0x010D3F8C:  000056E3     CMPS r0, r6, 0x0
		   0x010D3F90:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3F98
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010D3F94:  0D1DFAEB     BL $-0x178bc4
		   // ──── Block 25 if (!=) ────────────────────
		   0x010D3F98:  C4919FE5     LDR sb, [pc, 0x1c4]
		   0x010D3F9C:  0600A0E1     MOV r0, r6
		   0x010D3FA0:  0710A0E1     MOV r1, r7
		   0x010D3FA4:  09909FE7     LDR sb, [pc, sb]
		   0x010D3FA8:  002099E5     LDR r2, [sb]
		   0x010D3FAC:  F97D6CEB     BL $+0x1b1f7ec  // CALL → List<object>.ForEach
		   0x010D3FB0:  3C6098E5     LDR r6, [r8, 0x3c]
		   0x010D3FB4:  000056E3     CMPS r0, r6, 0x0
		   0x010D3FB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3FC0
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010D3FBC:  031DFAEB     BL $-0x178bec
		   // ──── Block 27 if (!=) ────────────────────
		   0x010D3FC0:  000094E5     LDR r0, [r4]
		   0x010D3FC4:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010D3FC8:  FD1CFAEB     BL $-0x178c04
		   0x010D3FCC:  0060A0E1     MOV r6, r0
		   0x010D3FD0:  90019FE5     LDR r0, [pc, 0x190]
		   0x010D3FD4:  0510A0E1     MOV r1, r5
		   0x010D3FD8:  0030A0E3     MOV r3, 0x0
		   0x010D3FDC:  0070A0E3     MOV r7, 0x0
		   0x010D3FE0:  00009FE7     LDR r0, [pc, r0]
		   0x010D3FE4:  002090E5     LDR r2, [r0]
		   0x010D3FE8:  0600A0E1     MOV r0, r6
		   0x010D3FEC:  954953EB     BL $+0x14d265c  // CALL → Action<object>..ctor
		   0x010D3FF0:  000054E3     CMPS r0, r4, 0x0
		   0x010D3FF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3FFC
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010D3FF8:  F41CFAEB     BL $-0x178c28
		   // ──── Block 29 if (!=) ────────────────────
		   0x010D3FFC:  002099E5     LDR r2, [sb]
		   0x010D4000:  0400A0E1     MOV r0, r4
		   0x010D4004:  0610A0E1     MOV r1, r6
		   0x010D4008:  E27D6CEB     BL $+0x1b1f790  // CALL → List<object>.ForEach
		   0x010D400C:  0700A0E1     MOV r0, r7
		   0x010D4010:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 30 if (==) ────────────────────
		   0x010D4014:  2800D6E5     LDRB r0, [r6, 0x28]
		   0x010D4018:  000050E3     CMPS r0, r0, 0x0
		   0x010D401C:  0A00001A     BNE $+0x30  // if (!=) goto 0x010D404C
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010D4020:  244096E5     LDR r4, [r6, 0x24]
		   0x010D4024:  000054E3     CMPS r0, r4, 0x0
		   0x010D4028:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4030
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x010D402C:  E71CFAEB     BL $-0x178c5c
		   // ──── Block 33 if (!=) ────────────────────
		   0x010D4030:  844094E5     LDR r4, [r4, 0x84]
		   0x010D4034:  000054E3     CMPS r0, r4, 0x0
		   0x010D4038:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4040
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x010D403C:  E31CFAEB     BL $-0x178c6c
		   // ──── Block 35 if (!=) ────────────────────
		   0x010D4040:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010D4044:  050050E3     CMPS r0, r0, 0x5
		   0x010D4048:  ACFFFF0A     BEQ $-0x148
		   // ──── Block 36 (from 2 paths) ──────────────────
		   0x010D404C:  0800A0E1     MOV r0, r8
		   0x010D4050:  0610A0E1     MOV r1, r6
		   0x010D4054:  0520A0E1     MOV r2, r5
		   0x010D4058:  093B00EB     BL $+0xec2c  // CALL → GameState.Place
		   0x010D405C:  0170A0E3     MOV r7, 0x1
		   0x010D4060:  000050E3     CMPS r0, r0, 0x0
		   0x010D4064:  E8FFFF1A     BNE $-0x58
		   // ──── Block 37 else (==) ────────────────────
		   0x010D4068:  0800A0E1     MOV r0, r8
		   0x010D406C:  0610A0E1     MOV r1, r6
		   0x010D4070:  0520A0E1     MOV r2, r5
		   0x010D4074:  923B00EB     BL $+0xee50  // CALL → GameState.Merge
		   0x010D4078:  000050E3     CMPS r0, r0, 0x0
		   0x010D407C:  2200000A     BEQ $+0x90  // if (==) goto 0x010D410C
		   // 
		   // ──── Block 38 else (!=) ────────────────────
		   0x010D4080:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x010D4084:  00009FE7     LDR r0, [pc, r0]
		   0x010D4088:  000090E5     LDR r0, [r0]
		   0x010D408C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D4090:  044090E5     LDR r4, [r0, 0x4]
		   0x010D4094:  000054E3     CMPS r0, r4, 0x0
		   0x010D4098:  0000001A     BNE $+0x8  // if (!=) goto 0x010D40A0
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010D409C:  CB1CFAEB     BL $-0x178ccc
		   // ──── Block 40 if (!=) ────────────────────
		   0x010D40A0:  0400A0E1     MOV r0, r4
		   0x010D40A4:  0010A0E3     MOV r1, 0x0
		   0x010D40A8:  9A6811EB     BL $+0x45a270  // CALL → FTUEMergeFridges.CheckAfterMerge
		   0x010D40AC:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010D40B0:  00009FE7     LDR r0, [pc, r0]
		   0x010D40B4:  000090E5     LDR r0, [r0]
		   0x010D40B8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D40BC:  004090E5     LDR r4, [r0]
		   0x010D40C0:  000054E3     CMPS r0, r4, 0x0
		   0x010D40C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010D40CC
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010D40C8:  C01CFAEB     BL $-0x178cf8
		   // ──── Block 42 if (!=) ────────────────────
		   0x010D40CC:  0C0194E5     LDR r0, [r4, 0x10c]
		   0x010D40D0:  000050E3     CMPS r0, r0, 0x0
		   0x010D40D4:  CCFFFF1A     BNE $-0xc8
		   // ──── Block 43 else (==) ────────────────────
		   0x010D40D8:  94009FE5     LDR r0, [pc, 0x94]
		   0x010D40DC:  00009FE7     LDR r0, [pc, r0]
		   0x010D40E0:  000090E5     LDR r0, [r0]
		   0x010D40E4:  741090E5     LDR r1, [r0, 0x74]
		   0x010D40E8:  000051E3     CMPS r0, r1, 0x0
		   0x010D40EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D40F4
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x010D40F0:  671CFAEB     BL $-0x178e5c
		   // ──── Block 45 if (!=) ────────────────────
		   0x010D40F4:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010D40F8:  0010A0E3     MOV r1, 0x0
		   0x010D40FC:  00009FE7     LDR r0, [pc, r0]
		   0x010D4100:  000090E5     LDR r0, [r0]
		   0x010D4104:  F8A901EB     BL $+0x6a7e8  // CALL → InterruptiveAdsManager.TryShow
		   0x010D4108:  BFFFFFEA     B $-0xfc
		   // ──── Block 46 if (==) ────────────────────
		   0x010D410C:  0800A0E1     MOV r0, r8
		   0x010D4110:  0610A0E1     MOV r1, r6
		   0x010D4114:  0520A0E1     MOV r2, r5
		   0x010D4118:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D411C:  563D00EA     B $+0xf560  // TAIL CALL → GameState.Swap
		   0x010D4120:  F37E1503     TSTSEQ r7, r5, 0xf30
		   0x010D4124:  6C51FA02     RSCSEQ r5, r10, 0x1b
		   0x010D4128:  6451FA02     RSCSEQ r5, r10, 0x19
		   0x010D412C:  5C51FA02     RSCSEQ r5, r10, 0x17
		   0x010D4130:  0C42FA02     RSCSEQ r4, r10, 0xc0000000
		   0x010D4134:  4851FA02     RSCSEQ r5, r10, 0x12
		   0x010D4138:  4427FA02     RSCSEQ r2, r10, 0x1100000
		   0x010D413C:  3451FA02     RSCSEQ r5, r10, 0xd
		   0x010D4140:  2C51FA02     RSCSEQ r5, r10, 0xb
		   0x010D4144:  2451FA02     RSCSEQ r5, r10, 0x9
		   0x010D4148:  1C51FA02     RSCSEQ r5, r10, 0x7
		   0x010D414C:  102CFA02     RSCSEQ r2, r10, 0x1000
		   0x010D4150:  F426FA02     RSCSEQ r2, r10, 0xf400000
		   0x010D4154:  3850FA02     RSCSEQ r5, r10, 0x38
		   0x010D4158:  142BFA02     RSCSEQ r2, r10, 0x5000
		   0x010D415C:  C44FFA02     RSCSEQ r4, r10, 0x310
		   0x010D4160:  B84FFA02     RSCSEQ r4, r10, 0x2e0
		   0x010D4164:  8C4FFA02     RSCSEQ r4, r10, 0x230
		   0x010D4168:  584FFA02     RSCSEQ r4, r10, 0x160
		   0x010D416C:  A84EFA02     RSCSEQ r4, r10, 0xa80
		   0x010D4170:  784EFA02     RSCSEQ r4, r10, 0x780
		   0x010D4174:  0C3FFA02     RSCSEQ r3, r10, 0x30
		   0x010D4178:  444EFA02     RSCSEQ r4, r10, 0x440
		*/
	}

	// RVA: 0x10E2C84 Offset: 0x10E2C84 VA: 0x10E2C84
	private bool Place(Cell targetCell, Item draggedItem) {
		/* Disassembly (ARM32, 144 instructions, 0x240 bytes):
		   // CFG: 29 blocks, 30 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E2C84:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E2C88:  10429FE5     LDR r4, [pc, 0x210]
		   0x010E2C8C:  0080A0E1     MOV r8, r0
		   0x010E2C90:  0250A0E1     MOV r5, r2
		   0x010E2C94:  0190A0E1     MOV sb, r1
		   0x010E2C98:  04408FE0     ADD r4, pc, r4
		   0x010E2C9C:  0000D4E5     LDRB r0, [r4]
		   0x010E2CA0:  000050E3     CMPS r0, r0, 0x0
		   0x010E2CA4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E2CE0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E2CA8:  F4019FE5     LDR r0, [pc, 0x1f4]
		   0x010E2CAC:  00009FE7     LDR r0, [pc, r0]
		   0x010E2CB0:  2AE1F9EB     BL $-0x187b50
		   0x010E2CB4:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x010E2CB8:  00009FE7     LDR r0, [pc, r0]
		   0x010E2CBC:  27E1F9EB     BL $-0x187b5c
		   0x010E2CC0:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x010E2CC4:  00009FE7     LDR r0, [pc, r0]
		   0x010E2CC8:  24E1F9EB     BL $-0x187b68
		   0x010E2CCC:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x010E2CD0:  00009FE7     LDR r0, [pc, r0]
		   0x010E2CD4:  21E1F9EB     BL $-0x187b74
		   0x010E2CD8:  0100A0E3     MOV r0, 0x1
		   0x010E2CDC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E2CE0:  000055E3     CMPS r0, r5, 0x0
		   0x010E2CE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2CEC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E2CE8:  B8E1F9EB     BL $-0x187918
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E2CEC:  0500A0E1     MOV r0, r5
		   0x010E2CF0:  0010A0E3     MOV r1, 0x0
		   0x010E2CF4:  0070A0E3     MOV r7, 0x0
		   0x010E2CF8:  C2A700EB     BL $+0x29f10  // CALL → Item.TryToStartBackgroundAnimation
		   0x010E2CFC:  B0419FE5     LDR r4, [pc, 0x1b0]
		   0x010E2D00:  04409FE7     LDR r4, [pc, r4]
		   0x010E2D04:  000094E5     LDR r0, [r4]
		   0x010E2D08:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2D0C:  000051E3     CMPS r0, r1, 0x0
		   0x010E2D10:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2D18
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E2D14:  5EE1F9EB     BL $-0x187a80
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E2D18:  0500A0E1     MOV r0, r5
		   0x010E2D1C:  0010A0E3     MOV r1, 0x0
		   0x010E2D20:  0020A0E3     MOV r2, 0x0
		   0x010E2D24:  5C543CEB     BL $+0xf15178  // CALL → sub_1FF7E9C
		   0x010E2D28:  000050E3     CMPS r0, r0, 0x0
		   0x010E2D2C:  5900001A     BNE $+0x16c  // if (!=) goto 0x010E2E98
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E2D30:  000059E3     CMPS r0, sb, 0x0
		   0x010E2D34:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2D3C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E2D38:  A4E1F9EB     BL $-0x187968
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E2D3C:  2800D9E5     LDRB r0, [sb, 0x28]
		   0x010E2D40:  000050E3     CMPS r0, r0, 0x0
		   0x010E2D44:  5300000A     BEQ $+0x154  // if (==) goto 0x010E2E98
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010E2D48:  68019FE5     LDR r0, [pc, 0x168]
		   0x010E2D4C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2D50:  000090E5     LDR r0, [r0]
		   0x010E2D54:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E2D58:  006090E5     LDR r6, [r0]
		   0x010E2D5C:  000056E3     CMPS r0, r6, 0x0
		   0x010E2D60:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2D68
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E2D64:  99E1F9EB     BL $-0x187994
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E2D68:  0600A0E1     MOV r0, r6
		   0x010E2D6C:  0010A0E3     MOV r1, 0x0
		   0x010E2D70:  0070A0E3     MOV r7, 0x0
		   0x010E2D74:  A70911EB     BL $+0x4426a4  // CALL → FTUEFirstController.isBlockedForPlaceItem
		   0x010E2D78:  000050E3     CMPS r0, r0, 0x0
		   0x010E2D7C:  4500001A     BNE $+0x11c  // if (!=) goto 0x010E2E98
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E2D80:  000055E3     CMPS r0, r5, 0x0
		   0x010E2D84:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2D8C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E2D88:  90E1F9EB     BL $-0x1879b8
		   // ──── Block 15 if (!=) ────────────────────
		   0x010E2D8C:  000094E5     LDR r0, [r4]
		   0x010E2D90:  106095E5     LDR r6, [r5, 0x10]
		   0x010E2D94:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2D98:  000051E3     CMPS r0, r1, 0x0
		   0x010E2D9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2DA4
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010E2DA0:  3BE1F9EB     BL $-0x187b0c
		   // ──── Block 17 if (!=) ────────────────────
		   0x010E2DA4:  0600A0E1     MOV r0, r6
		   0x010E2DA8:  0010A0E3     MOV r1, 0x0
		   0x010E2DAC:  0070A0E3     MOV r7, 0x0
		   0x010E2DB0:  11553CEB     BL $+0xf1544c  // CALL → sub_1FF81FC
		   0x010E2DB4:  000050E3     CMPS r0, r0, 0x0
		   0x010E2DB8:  0600000A     BEQ $+0x20  // if (==) goto 0x010E2DD8
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x010E2DBC:  106095E5     LDR r6, [r5, 0x10]
		   0x010E2DC0:  000056E3     CMPS r0, r6, 0x0
		   0x010E2DC4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2DCC
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E2DC8:  80E1F9EB     BL $-0x1879f8
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E2DCC:  0600A0E1     MOV r0, r6
		   0x010E2DD0:  0010A0E3     MOV r1, 0x0
		   0x010E2DD4:  A9A7FFEB     BL $-0x16154
		   // ──── Block 21 if (==) ────────────────────
		   0x010E2DD8:  000095E5     LDR r0, [r5]
		   0x010E2DDC:  0910A0E1     MOV r1, sb
		   0x010E2DE0:  0020A0E3     MOV r2, 0x0
		   0x010E2DE4:  086190E5     LDR r6, [r0, 0x108]
		   0x010E2DE8:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010E2DEC:  0500A0E1     MOV r0, r5
		   0x010E2DF0:  36FF2FE1     BLX r6  // virtual call: vtable+0x108
		   0x010E2DF4:  0900A0E1     MOV r0, sb
		   0x010E2DF8:  0510A0E1     MOV r1, r5
		   0x010E2DFC:  9FA7FFEB     BL $-0x1617c
		   0x010E2E00:  0800A0E1     MOV r0, r8
		   0x010E2E04:  0510A0E1     MOV r1, r5
		   0x010E2E08:  EAC4FFEB     BL $-0xec50
		   0x010E2E0C:  000050E3     CMPS r0, r0, 0x0
		   0x010E2E10:  2000000A     BEQ $+0x88  // if (==) goto 0x010E2E98
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x010E2E14:  000095E5     LDR r0, [r5]
		   0x010E2E18:  0910A0E1     MOV r1, sb
		   0x010E2E1C:  0020A0E3     MOV r2, 0x0
		   0x010E2E20:  487190E5     LDR r7, [r0, 0x148]
		   0x010E2E24:  4C3190E5     LDR r3, [r0, 0x14c]
		   0x010E2E28:  0500A0E1     MOV r0, r5
		   0x010E2E2C:  37FF2FE1     BLX r7  // virtual call: vtable+0x148
		   0x010E2E30:  84409FE5     LDR r4, [pc, 0x84]
		   0x010E2E34:  04409FE7     LDR r4, [pc, r4]
		   0x010E2E38:  000094E5     LDR r0, [r4]
		   0x010E2E3C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2E40:  000051E3     CMPS r0, r1, 0x0
		   0x010E2E44:  0100001A     BNE $+0xc  // if (!=) goto 0x010E2E50
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010E2E48:  11E1F9EB     BL $-0x187bb4
		   0x010E2E4C:  000094E5     LDR r0, [r4]
		   // ──── Block 24 if (!=) ────────────────────
		   0x010E2E50:  68109FE5     LDR r1, [pc, 0x68]
		   0x010E2E54:  01109FE7     LDR r1, [pc, r1]
		   0x010E2E58:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E2E5C:  001091E5     LDR r1, [r1]
		   0x010E2E60:  2C4090E5     LDR r4, [r0, 0x2c]
		   0x010E2E64:  742091E5     LDR r2, [r1, 0x74]
		   0x010E2E68:  000052E3     CMPS r0, r2, 0x0
		   0x010E2E6C:  0100001A     BNE $+0xc  // if (!=) goto 0x010E2E78
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010E2E70:  0100A0E1     MOV r0, r1
		   0x010E2E74:  06E1F9EB     BL $-0x187be0
		   // ──── Block 26 if (!=) ────────────────────
		   0x010E2E78:  0400A0E1     MOV r0, r4
		   0x010E2E7C:  FE15A0E3     MOV r1, 0x3f800000
		   0x010E2E80:  0020A0E3     MOV r2, 0x0
		   0x010E2E84:  F6EE03EB     BL $+0xfbbe0  // CALL → SoundController.PlaySound
		   0x010E2E88:  0500A0E3     MOV r0, 0x5
		   0x010E2E8C:  0010A0E3     MOV r1, 0x0
		   0x010E2E90:  476FFEEB     BL $-0x642dc
		   0x010E2E94:  0170A0E3     MOV r7, 0x1
		   // ──── Block 27 (from 4 paths) ──────────────────
		   0x010E2E98:  0700A0E1     MOV r0, r7
		   0x010E2E9C:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010E2EA0:  00901403     TSTSEQ sb, r4, 0x0
		   0x010E2EA4:  3062F902     RSCSEQ r6, sb, 0x3
		   0x010E2EA8:  8038F902     RSCSEQ r3, sb, 0x800000
		   0x010E2EAC:  7C5AF902     RSCSEQ r5, sb, 0x7c000
		   0x010E2EB0:  745AF902     RSCSEQ r5, sb, 0x74000
		   0x010E2EB4:  3838F902     RSCSEQ r3, sb, 0x380000
		   0x010E2EB8:  9061F902     RSCSEQ r6, sb, 0x24
		   0x010E2EBC:  1059F902     RSCSEQ r5, sb, 0x40000
		   0x010E2EC0:  EC58F902     RSCSEQ r5, sb, 0xec0000
		*/
	}

	// RVA: 0x10E391C Offset: 0x10E391C VA: 0x10E391C
	private void TryToSpawnBubble(ItemData itemData, Vector3 pos, Cell cell) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010E391C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E3920:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10E3D98 Offset: 0x10E3D98 VA: 0x10E3D98
	public BaseBubbleConfig GetBubbleConfig(string itemCode) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E3D98:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010E3D9C:  305090E5     LDR r5, [r0, 0x30]
		   0x010E3DA0:  0140A0E1     MOV r4, r1
		   0x010E3DA4:  000055E3     CMPS r0, r5, 0x0
		   0x010E3DA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3DB0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E3DAC:  87DDF9EB     BL $-0x1889dc
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E3DB0:  2C5095E5     LDR r5, [r5, 0x2c]
		   0x010E3DB4:  000055E3     CMPS r0, r5, 0x0
		   0x010E3DB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3DC0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E3DBC:  83DDF9EB     BL $-0x1889ec
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E3DC0:  0C3095E5     LDR r3, [r5, 0xc]
		   0x010E3DC4:  0410A0E1     MOV r1, r4
		   0x010E3DC8:  142095E5     LDR r2, [r5, 0x14]
		   0x010E3DCC:  200095E5     LDR r0, [r5, 0x20]
		   0x010E3DD0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010E3DD4:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10E3DD8 Offset: 0x10E3DD8 VA: 0x10E3DD8
	public void DropRewardsItem(RewardItemData data, Cell cell, Vector2 sourceAnimationPosition) {
		/* Disassembly (ARM32, 217 instructions, 0x364 bytes):
		   // CFG: 32 blocks, 30 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E3DD8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E3DDC:  44D04DE2     SUB sp, sp, 0x44
		   0x010E3DE0:  34208DE5     STR r2, [sp, 0x34]
		   0x010E3DE4:  00A0A0E1     MOV r10, r0
		   0x010E3DE8:  F8529FE5     LDR r5, [pc, 0x2f8]
		   0x010E3DEC:  0390A0E1     MOV sb, r3
		   0x010E3DF0:  0140A0E1     MOV r4, r1
		   0x010E3DF4:  05508FE0     ADD r5, pc, r5
		   0x010E3DF8:  0000D5E5     LDRB r0, [r5]
		   0x010E3DFC:  000050E3     CMPS r0, r0, 0x0
		   0x010E3E00:  1F00001A     BNE $+0x84  // if (!=) goto 0x010E3E84
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E3E04:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x010E3E08:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E0C:  D3DCF9EB     BL $-0x188cac
		   0x010E3E10:  D8029FE5     LDR r0, [pc, 0x2d8]
		   0x010E3E14:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E18:  D0DCF9EB     BL $-0x188cb8
		   0x010E3E1C:  D0029FE5     LDR r0, [pc, 0x2d0]
		   0x010E3E20:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E24:  CDDCF9EB     BL $-0x188cc4
		   0x010E3E28:  C8029FE5     LDR r0, [pc, 0x2c8]
		   0x010E3E2C:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E30:  CADCF9EB     BL $-0x188cd0
		   0x010E3E34:  C0029FE5     LDR r0, [pc, 0x2c0]
		   0x010E3E38:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E3C:  C7DCF9EB     BL $-0x188cdc
		   0x010E3E40:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x010E3E44:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E48:  C4DCF9EB     BL $-0x188ce8
		   0x010E3E4C:  B0029FE5     LDR r0, [pc, 0x2b0]
		   0x010E3E50:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E54:  C1DCF9EB     BL $-0x188cf4
		   0x010E3E58:  A8029FE5     LDR r0, [pc, 0x2a8]
		   0x010E3E5C:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E60:  BEDCF9EB     BL $-0x188d00
		   0x010E3E64:  A0029FE5     LDR r0, [pc, 0x2a0]
		   0x010E3E68:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E6C:  BBDCF9EB     BL $-0x188d0c
		   0x010E3E70:  98029FE5     LDR r0, [pc, 0x298]
		   0x010E3E74:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E78:  B8DCF9EB     BL $-0x188d18
		   0x010E3E7C:  0100A0E3     MOV r0, 0x1
		   0x010E3E80:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E3E84:  88029FE5     LDR r0, [pc, 0x288]
		   0x010E3E88:  00009FE7     LDR r0, [pc, r0]
		   0x010E3E8C:  000090E5     LDR r0, [r0]
		   0x010E3E90:  4BDDF9EB     BL $-0x188acc
		   0x010E3E94:  0010A0E3     MOV r1, 0x0
		   0x010E3E98:  0070A0E1     MOV r7, r0
		   0x010E3E9C:  002C00EB     BL $+0xb008  // CALL → <>c__DisplayClass105_0..ctor
		   0x010E3EA0:  000057E3     CMPS r0, r7, 0x0
		   0x010E3EA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3EAC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E3EA8:  48DDF9EB     BL $-0x188ad8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E3EAC:  64029FE5     LDR r0, [pc, 0x264]
		   0x010E3EB0:  00009FE7     LDR r0, [pc, r0]
		   0x010E3EB4:  38609AE5     LDR r6, [r10, 0x38]
		   0x010E3EB8:  084087E5     STR r4, [r7, 0x8]
		   0x010E3EBC:  000090E5     LDR r0, [r0]
		   0x010E3EC0:  3FDDF9EB     BL $-0x188afc
		   0x010E3EC4:  0040A0E1     MOV r4, r0
		   0x010E3EC8:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010E3ECC:  0710A0E1     MOV r1, r7
		   0x010E3ED0:  0030A0E3     MOV r3, 0x0
		   0x010E3ED4:  00009FE7     LDR r0, [pc, r0]
		   0x010E3ED8:  002090E5     LDR r2, [r0]
		   0x010E3EDC:  0400A0E1     MOV r0, r4
		   0x010E3EE0:  E8A733EB     BL $+0xce9fa8  // CALL → Predicate<object>..ctor
		   0x010E3EE4:  000056E3     CMPS r0, r6, 0x0
		   0x010E3EE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3EF0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E3EEC:  37DDF9EB     BL $-0x188b1c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E3EF0:  28029FE5     LDR r0, [pc, 0x228]
		   0x010E3EF4:  0410A0E1     MOV r1, r4
		   0x010E3EF8:  00009FE7     LDR r0, [pc, r0]
		   0x010E3EFC:  002090E5     LDR r2, [r0]
		   0x010E3F00:  0600A0E1     MOV r0, r6
		   0x010E3F04:  DF3C6CEB     BL $+0x1b0f384  // CALL → List<object>.Find
		   0x010E3F08:  0040A0E1     MOV r4, r0
		   0x010E3F0C:  000050E3     CMPS r0, r0, 0x0
		   0x010E3F10:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3F18
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E3F14:  2DDDF9EB     BL $-0x188b44
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E3F18:  285094E5     LDR r5, [r4, 0x28]
		   0x010E3F1C:  000055E3     CMPS r0, r5, 0x0
		   0x010E3F20:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3F28
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E3F24:  29DDF9EB     BL $-0x188b54
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E3F28:  084097E5     LDR r4, [r7, 0x8]
		   0x010E3F2C:  000054E3     CMPS r0, r4, 0x0
		   0x010E3F30:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3F38
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E3F34:  25DDF9EB     BL $-0x188b64
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E3F38:  100094E5     LDR r0, [r4, 0x10]
		   0x010E3F3C:  0C1095E5     LDR r1, [r5, 0xc]
		   0x010E3F40:  000051E1     CMPS r0, r1, r0
		   0x010E3F44:  140000AA     BGE $+0x58  // if (>=) goto 0x010E3F9C
		   // 
		   // ──── Block 13 else (<) ────────────────────
		   0x010E3F48:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x010E3F4C:  00009FE7     LDR r0, [pc, r0]
		   0x010E3F50:  000090E5     LDR r0, [r0]
		   0x010E3F54:  1ADDF9EB     BL $-0x188b90
		   0x010E3F58:  0040A0E1     MOV r4, r0
		   0x010E3F5C:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x010E3F60:  0020A0E3     MOV r2, 0x0
		   0x010E3F64:  00009FE7     LDR r0, [pc, r0]
		   0x010E3F68:  001090E5     LDR r1, [r0]
		   0x010E3F6C:  0400A0E1     MOV r0, r4
		   0x010E3F70:  31947EEB     BL $+0x1fa50cc  // CALL → Exception..ctor
		   0x010E3F74:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x010E3F78:  00009FE7     LDR r0, [pc, r0]
		   0x010E3F7C:  000090E5     LDR r0, [r0]
		   0x010E3F80:  741090E5     LDR r1, [r0, 0x74]
		   0x010E3F84:  000051E3     CMPS r0, r1, 0x0
		   0x010E3F88:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3F90
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E3F8C:  C0DCF9EB     BL $-0x188cf8
		   // ──── Block 15 if (!=) ────────────────────
		   0x010E3F90:  0400A0E1     MOV r0, r4
		   0x010E3F94:  0010A0E3     MOV r1, 0x0
		   0x010E3F98:  7B503CEB     BL $+0xf141f4  // CALL → sub_1FF818C
		   // ──── Block 16 if (>=) ────────────────────
		   0x010E3F9C:  084097E5     LDR r4, [r7, 0x8]
		   0x010E3FA0:  000054E3     CMPS r0, r4, 0x0
		   0x010E3FA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3FAC
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E3FA8:  08DDF9EB     BL $-0x188bd8
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E3FAC:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010E3FB0:  101094E5     LDR r1, [r4, 0x10]
		   0x010E3FB4:  014040E2     SUB r4, r0, 0x1
		   0x010E3FB8:  040051E1     CMPS r0, r1, r4
		   0x010E3FBC:  0140A0B1     MOVLT r4, r1
		   0x010E3FC0:  040050E1     CMPS r0, r0, r4
		   0x010E3FC4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010E3FCC
		   // 
		   // ──── Block 19 else (<= (unsigned)) ────────────────────
		   0x010E3FC8:  01DDF9EB     BL $-0x188bf4
		   // ──── Block 20 if (> (unsigned)) ────────────────────
		   0x010E3FCC:  040185E0     ADD r0, r5, r4, lsl 2
		   0x010E3FD0:  104090E5     LDR r4, [r0, 0x10]
		   0x010E3FD4:  000054E3     CMPS r0, r4, 0x0
		   0x010E3FD8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3FE0
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010E3FDC:  FBDCF9EB     BL $-0x188c0c
		   // ──── Block 22 if (!=) ────────────────────
		   0x010E3FE0:  184094E5     LDR r4, [r4, 0x18]
		   0x010E3FE4:  68B09DE5     LDR fp, [sp, 0x68]
		   0x010E3FE8:  000054E3     CMPS r0, r4, 0x0
		   0x010E3FEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3FF4
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010E3FF0:  F6DCF9EB     BL $-0x188c20
		   // ──── Block 24 if (!=) ────────────────────
		   0x010E3FF4:  34019FE5     LDR r0, [pc, 0x134]
		   0x010E3FF8:  0050A0E3     MOV r5, 0x0
		   0x010E3FFC:  0910A0E1     MOV r1, sb
		   0x010E4000:  0B20A0E1     MOV r2, fp
		   0x010E4004:  00009FE7     LDR r0, [pc, r0]
		   0x010E4008:  48809AE5     LDR r8, [r10, 0x48]
		   0x010E400C:  1C60D4E5     LDRB r6, [r4, 0x1c]
		   0x010E4010:  003090E5     LDR r3, [r0]
		   0x010E4014:  38008DE2     ADD r0, sp, 0x38
		   0x010E4018:  3C508DE5     STR r5, [sp, 0x3c]
		   0x010E401C:  38508DE5     STR r5, [sp, 0x38]
		   0x010E4020:  40508DE5     STR r5, [sp, 0x40]
		   0x010E4024:  F15931EB     BL $+0xc567cc  // CALL → Nullable<Vector2>..ctor
		   0x010E4028:  087097E5     LDR r7, [r7, 0x8]
		   0x010E402C:  000057E3     CMPS r0, r7, 0x0
		   0x010E4030:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4038
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010E4034:  E5DCF9EB     BL $-0x188c64
		   // ──── Block 26 if (!=) ────────────────────
		   0x010E4038:  38208DE2     ADD r2, sp, 0x38
		   0x010E403C:  143097E5     LDR r3, [r7, 0x14]
		   0x010E4040:  24308DE5     STR r3, [sp, 0x24]
		   0x010E4044:  0030E0E3     MVN r3, r0, 0x0
		   0x010E4048:  070092E8     LDM r2, {r0, r1, r2}
		   0x010E404C:  000056E3     CMPS r0, r6, 0x0
		   0x010E4050:  08C08DE2     ADD ip, sp, 0x8
		   0x010E4054:  18308DE5     STR r3, [sp, 0x18]
		   0x010E4058:  01600013     MOVNE r6, 0x1
		   0x010E405C:  34309DE5     LDR r3, [sp, 0x34]
		   0x010E4060:  0170A0E3     MOV r7, 0x1
		   0x010E4064:  87008CE8     STM ip, {r0, r1, r2, r7}
		   0x010E4068:  0A00A0E1     MOV r0, r10
		   0x010E406C:  0410A0E1     MOV r1, r4
		   0x010E4070:  0620A0E1     MOV r2, r6
		   0x010E4074:  20508DE5     STR r5, [sp, 0x20]
		   0x010E4078:  28508DE5     STR r5, [sp, 0x28]
		   0x010E407C:  80018DE8     STM sp, {r7, r8}
		   0x010E4080:  1C508DE5     STR r5, [sp, 0x1c]
		   0x010E4084:  9FD1FFEB     BL $-0xb97c
		   0x010E4088:  A4409FE5     LDR r4, [pc, 0xa4]
		   0x010E408C:  04409FE7     LDR r4, [pc, r4]
		   0x010E4090:  000094E5     LDR r0, [r4]
		   0x010E4094:  741090E5     LDR r1, [r0, 0x74]
		   0x010E4098:  000051E3     CMPS r0, r1, 0x0
		   0x010E409C:  0100001A     BNE $+0xc  // if (!=) goto 0x010E40A8
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010E40A0:  7BDCF9EB     BL $-0x188e0c
		   0x010E40A4:  000094E5     LDR r0, [r4]
		   // ──── Block 28 if (!=) ────────────────────
		   0x010E40A8:  88109FE5     LDR r1, [pc, 0x88]
		   0x010E40AC:  01109FE7     LDR r1, [pc, r1]
		   0x010E40B0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E40B4:  001091E5     LDR r1, [r1]
		   0x010E40B8:  384090E5     LDR r4, [r0, 0x38]
		   0x010E40BC:  742091E5     LDR r2, [r1, 0x74]
		   0x010E40C0:  000052E3     CMPS r0, r2, 0x0
		   0x010E40C4:  0100001A     BNE $+0xc  // if (!=) goto 0x010E40D0
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010E40C8:  0100A0E1     MOV r0, r1
		   0x010E40CC:  70DCF9EB     BL $-0x188e38
		   // ──── Block 30 if (!=) ────────────────────
		   0x010E40D0:  0400A0E1     MOV r0, r4
		   0x010E40D4:  FE15A0E3     MOV r1, 0x3f800000
		   0x010E40D8:  0020A0E3     MOV r2, 0x0
		   0x010E40DC:  60EA03EB     BL $+0xfa988  // CALL → SoundController.PlaySound
		   0x010E40E0:  44D08DE2     ADD sp, sp, 0x44
		   0x010E40E4:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010E40E8:  A67E1403     TSTSEQ r7, r4, 0xa60
		   0x010E40EC:  8027F902     RSCSEQ r2, sb, 0x2000000
		   0x010E40F0:  D82AF902     RSCSEQ r2, sb, 0xd8000
		   0x010E40F4:  B051F902     RSCSEQ r5, sb, 0x2c
		   0x010E40F8:  CC50F902     RSCSEQ r5, sb, 0xcc
		   0x010E40FC:  9C51F902     RSCSEQ r5, sb, 0x27
		   0x010E4100:  FC48F902     RSCSEQ r4, sb, 0xfc0000
		   0x010E4104:  F448F902     RSCSEQ r4, sb, 0xf40000
		   0x010E4108:  3454F902     RSCSEQ r5, sb, 0x34000000
		   0x010E410C:  2C54F902     RSCSEQ r5, sb, 0x2c000000
		   0x010E4110:  2454F902     RSCSEQ r5, sb, 0x24000000
		   0x010E4114:  0C54F902     RSCSEQ r5, sb, 0xc000000
		   0x010E4118:  2451F902     RSCSEQ r5, sb, 0x9
		   0x010E411C:  BC53F902     RSCSEQ r5, sb, 0xf0000002
		   0x010E4120:  D850F902     RSCSEQ r5, sb, 0xd8
		   0x010E4124:  A029F902     RSCSEQ r2, sb, 0x280000
		   0x010E4128:  3453F902     RSCSEQ r5, sb, 0xd0000000
		   0x010E412C:  1026F902     RSCSEQ r2, sb, 0x1000000
		   0x010E4130:  F44EF902     RSCSEQ r4, sb, 0xf40
		   0x010E4134:  B846F902     RSCSEQ r4, sb, 0xb800000
		   0x010E4138:  9446F902     RSCSEQ r4, sb, 0x9400000
		*/
	}

	// RVA: 0x10E413C Offset: 0x10E413C VA: 0x10E413C
	public Cell GetFreeCell() {
		/* Disassembly (ARM32, 81 instructions, 0x144 bytes):
		   // CFG: 18 blocks, 17 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E413C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010E4140:  08D04DE2     SUB sp, sp, 0x8
		   0x010E4144:  1C519FE5     LDR r5, [pc, 0x11c]
		   0x010E4148:  0040A0E1     MOV r4, r0
		   0x010E414C:  05508FE0     ADD r5, pc, r5
		   0x010E4150:  0000D5E5     LDRB r0, [r5]
		   0x010E4154:  000050E3     CMPS r0, r0, 0x0
		   0x010E4158:  0400001A     BNE $+0x18  // if (!=) goto 0x010E4170
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E415C:  08019FE5     LDR r0, [pc, 0x108]
		   0x010E4160:  00009FE7     LDR r0, [pc, r0]
		   0x010E4164:  FDDBF9EB     BL $-0x189004
		   0x010E4168:  0100A0E3     MOV r0, 0x1
		   0x010E416C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E4170:  406094E5     LDR r6, [r4, 0x40]
		   0x010E4174:  000056E3     CMPS r0, r6, 0x0
		   0x010E4178:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4180
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E417C:  93DCF9EB     BL $-0x188dac
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E4180:  0600A0E1     MOV r0, r6
		   0x010E4184:  0010A0E3     MOV r1, 0x0
		   0x010E4188:  0020A0E3     MOV r2, 0x0
		   0x010E418C:  0050A0E3     MOV r5, 0x0
		   0x010E4190:  6B377EEB     BL $+0x1f8ddb4  // CALL → Array.GetLength
		   0x010E4194:  010050E3     CMPS r0, r0, 0x1
		   0x010E4198:  0E0000BA     BLT $+0x40  // if (<) goto 0x010E41D8
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x010E419C:  406094E5     LDR r6, [r4, 0x40]
		   0x010E41A0:  000056E3     CMPS r0, r6, 0x0
		   0x010E41A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E41AC
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E41A8:  88DCF9EB     BL $-0x188dd8
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E41AC:  0600A0E1     MOV r0, r6
		   0x010E41B0:  0110A0E3     MOV r1, 0x1
		   0x010E41B4:  0020A0E3     MOV r2, 0x0
		   0x010E41B8:  0050A0E3     MOV r5, 0x0
		   0x010E41BC:  60377EEB     BL $+0x1f8dd88  // CALL → Array.GetLength
		   0x010E41C0:  010050E3     CMPS r0, r0, 0x1
		   0x010E41C4:  030000BA     BLT $+0x14  // if (<) goto 0x010E41D8
		   // 
		   // ──── Block 8 else (>=) ────────────────────
		   0x010E41C8:  401094E5     LDR r1, [r4, 0x40]
		   0x010E41CC:  0400A0E1     MOV r0, r4
		   0x010E41D0:  2A0000EB     BL $+0xb0  // CALL → GameState.GetFirstNotNullCell
		   0x010E41D4:  0050A0E1     MOV r5, r0
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x010E41D8:  90009FE5     LDR r0, [pc, 0x90]
		   0x010E41DC:  00009FE7     LDR r0, [pc, r0]
		   0x010E41E0:  000090E5     LDR r0, [r0]
		   0x010E41E4:  741090E5     LDR r1, [r0, 0x74]
		   0x010E41E8:  000051E3     CMPS r0, r1, 0x0
		   0x010E41EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E41F4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E41F0:  27DCF9EB     BL $-0x188f5c
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E41F4:  0500A0E1     MOV r0, r5
		   0x010E41F8:  0010A0E3     MOV r1, 0x0
		   0x010E41FC:  FE4F3CEB     BL $+0xf14000  // CALL → sub_1FF81FC
		   0x010E4200:  000050E3     CMPS r0, r0, 0x0
		   0x010E4204:  1400000A     BEQ $+0x58  // if (==) goto 0x010E425C
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x010E4208:  64609FE5     LDR r6, [pc, 0x64]
		   0x010E420C:  06608FE0     ADD r6, pc, r6
		   0x010E4210:  0000D6E5     LDRB r0, [r6]
		   0x010E4214:  000050E3     CMPS r0, r0, 0x0
		   0x010E4218:  0400001A     BNE $+0x18  // if (!=) goto 0x010E4230
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E421C:  54009FE5     LDR r0, [pc, 0x54]
		   0x010E4220:  00009FE7     LDR r0, [pc, r0]
		   0x010E4224:  CDDBF9EB     BL $-0x1890c4
		   0x010E4228:  0100A0E3     MOV r0, 0x1
		   0x010E422C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E4230:  44009FE5     LDR r0, [pc, 0x44]
		   0x010E4234:  00009FE7     LDR r0, [pc, r0]
		   0x010E4238:  000090E5     LDR r0, [r0]
		   0x010E423C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E4240:  D020C0E1     LDRD r2, r3, [r0]
		   0x010E4244:  0400A0E1     MOV r0, r4
		   0x010E4248:  0210A0E1     MOV r1, r2
		   0x010E424C:  0320A0E1     MOV r2, r3
		   0x010E4250:  0530A0E1     MOV r3, r5
		   0x010E4254:  FCF0FFEB     BL $-0x3c08
		   0x010E4258:  000000EA     B $+0x8  // goto 0x010E4260
		   // ──── Block 15 if (==) ────────────────────
		   0x010E425C:  0000A0E3     MOV r0, 0x0
		   // ──── Block 16 ──────────────────────────────
		   0x010E4260:  08D08DE2     ADD sp, sp, 0x8
		   0x010E4264:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010E4268:  4F7B1403     TSTSEQ r7, r4, 0x13c00
		   0x010E426C:  D823F902     RSCSEQ r2, sb, 0x60000003
		   0x010E4270:  5C23F902     RSCSEQ r2, sb, 0x70000001
		   0x010E4274:  27761403     TSTSEQ r7, r4, 0x2700000
		   0x010E4278:  C02BF902     RSCSEQ r2, sb, 0x30000
		   0x010E427C:  AC2BF902     RSCSEQ r2, sb, 0x2b000
		*/
	}

	// RVA: 0x10E43F4 Offset: 0x10E43F4 VA: 0x10E43F4
	public void TryRemoveItemsForFTUEEnergyContainer() {
		/* Disassembly (ARM32, 59 instructions, 0xEC bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E43F4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E43F8:  2CD04DE2     SUB sp, sp, 0x2c
		   0x010E43FC:  44449FE5     LDR r4, [pc, 0x444]
		   0x010E4400:  0090A0E1     MOV sb, r0
		   0x010E4404:  04408FE0     ADD r4, pc, r4
		   0x010E4408:  0000D4E5     LDRB r0, [r4]
		   0x010E440C:  000050E3     CMPS r0, r0, 0x0
		   0x010E4410:  3100001A     BNE $+0xcc  // if (!=) goto 0x010E44DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E4414:  30049FE5     LDR r0, [pc, 0x430]
		   0x010E4418:  00009FE7     LDR r0, [pc, r0]
		   0x010E441C:  4FDBF9EB     BL $-0x1892bc
		   0x010E4420:  28049FE5     LDR r0, [pc, 0x428]
		   0x010E4424:  00009FE7     LDR r0, [pc, r0]
		   0x010E4428:  4CDBF9EB     BL $-0x1892c8
		   0x010E442C:  20049FE5     LDR r0, [pc, 0x420]
		   0x010E4430:  00009FE7     LDR r0, [pc, r0]
		   0x010E4434:  49DBF9EB     BL $-0x1892d4
		   0x010E4438:  18049FE5     LDR r0, [pc, 0x418]
		   0x010E443C:  00009FE7     LDR r0, [pc, r0]
		   0x010E4440:  46DBF9EB     BL $-0x1892e0
		   0x010E4444:  10049FE5     LDR r0, [pc, 0x410]
		   0x010E4448:  00009FE7     LDR r0, [pc, r0]
		   0x010E444C:  43DBF9EB     BL $-0x1892ec
		   0x010E4450:  08049FE5     LDR r0, [pc, 0x408]
		   0x010E4454:  00009FE7     LDR r0, [pc, r0]
		   0x010E4458:  40DBF9EB     BL $-0x1892f8
		   0x010E445C:  00049FE5     LDR r0, [pc, 0x400]
		   0x010E4460:  00009FE7     LDR r0, [pc, r0]
		   0x010E4464:  3DDBF9EB     BL $-0x189304
		   0x010E4468:  F8039FE5     LDR r0, [pc, 0x3f8]
		   0x010E446C:  00009FE7     LDR r0, [pc, r0]
		   0x010E4470:  3ADBF9EB     BL $-0x189310
		   0x010E4474:  F0039FE5     LDR r0, [pc, 0x3f0]
		   0x010E4478:  00009FE7     LDR r0, [pc, r0]
		   0x010E447C:  37DBF9EB     BL $-0x18931c
		   0x010E4480:  E8039FE5     LDR r0, [pc, 0x3e8]
		   0x010E4484:  00009FE7     LDR r0, [pc, r0]
		   0x010E4488:  34DBF9EB     BL $-0x189328
		   0x010E448C:  E0039FE5     LDR r0, [pc, 0x3e0]
		   0x010E4490:  00009FE7     LDR r0, [pc, r0]
		   0x010E4494:  31DBF9EB     BL $-0x189334
		   0x010E4498:  D8039FE5     LDR r0, [pc, 0x3d8]
		   0x010E449C:  00009FE7     LDR r0, [pc, r0]
		   0x010E44A0:  2EDBF9EB     BL $-0x189340
		   0x010E44A4:  D0039FE5     LDR r0, [pc, 0x3d0]
		   0x010E44A8:  00009FE7     LDR r0, [pc, r0]
		   0x010E44AC:  2BDBF9EB     BL $-0x18934c
		   0x010E44B0:  C8039FE5     LDR r0, [pc, 0x3c8]
		   0x010E44B4:  00009FE7     LDR r0, [pc, r0]
		   0x010E44B8:  28DBF9EB     BL $-0x189358
		   0x010E44BC:  C0039FE5     LDR r0, [pc, 0x3c0]
		   0x010E44C0:  00009FE7     LDR r0, [pc, r0]
		   0x010E44C4:  25DBF9EB     BL $-0x189364
		   0x010E44C8:  B8039FE5     LDR r0, [pc, 0x3b8]
		   0x010E44CC:  00009FE7     LDR r0, [pc, r0]
		   0x010E44D0:  22DBF9EB     BL $-0x189370
		   0x010E44D4:  0100A0E3     MOV r0, 0x1
		   0x010E44D8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E44DC:  A8439FE5     LDR r4, [pc, 0x3a8]
		*/
	}

	// RVA: 0x10E4280 Offset: 0x10E4280 VA: 0x10E4280
	private Cell GetFirstNotNullCell(object[] targetCells) {
		/* Disassembly (ARM32, 93 instructions, 0x174 bytes):
		   // CFG: 27 blocks, 27 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E4280:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E4284:  5C519FE5     LDR r5, [pc, 0x15c]
		   0x010E4288:  0060A0E1     MOV r6, r0
		   0x010E428C:  0140A0E1     MOV r4, r1
		   0x010E4290:  05508FE0     ADD r5, pc, r5
		   0x010E4294:  0000D5E5     LDRB r0, [r5]
		   0x010E4298:  000050E3     CMPS r0, r0, 0x0
		   0x010E429C:  0400001A     BNE $+0x18  // if (!=) goto 0x010E42B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E42A0:  44019FE5     LDR r0, [pc, 0x144]
		   0x010E42A4:  00009FE7     LDR r0, [pc, r0]
		   0x010E42A8:  ACDBF9EB     BL $-0x189148
		   0x010E42AC:  0100A0E3     MOV r0, 0x1
		   0x010E42B0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E42B4:  405096E5     LDR r5, [r6, 0x40]
		   0x010E42B8:  000055E3     CMPS r0, r5, 0x0
		   0x010E42BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E42C4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E42C0:  42DCF9EB     BL $-0x188ef0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E42C4:  0500A0E1     MOV r0, r5
		   0x010E42C8:  0010A0E3     MOV r1, 0x0
		   0x010E42CC:  0020A0E3     MOV r2, 0x0
		   0x010E42D0:  0070A0E3     MOV r7, 0x0
		   0x010E42D4:  1A377EEB     BL $+0x1f8dc70  // CALL → Array.GetLength
		   0x010E42D8:  406096E5     LDR r6, [r6, 0x40]
		   0x010E42DC:  0080A0E1     MOV r8, r0
		   0x010E42E0:  000056E3     CMPS r0, r6, 0x0
		   0x010E42E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E42EC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E42E8:  38DCF9EB     BL $-0x188f18
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E42EC:  0600A0E1     MOV r0, r6
		   0x010E42F0:  0110A0E3     MOV r1, 0x1
		   0x010E42F4:  0020A0E3     MOV r2, 0x0
		   0x010E42F8:  11377EEB     BL $+0x1f8dc4c  // CALL → Array.GetLength
		   0x010E42FC:  010058E3     CMPS r0, r8, 0x1
		   0x010E4300:  360000BA     BLT $+0xe0  // if (<) goto 0x010E43E0
		   // 
		   // ──── Block 7 else (>=) ────────────────────
		   0x010E4304:  E4A09FE5     LDR r10, [pc, 0xe4]
		   0x010E4308:  0090A0E1     MOV sb, r0
		   0x010E430C:  0050A0E3     MOV r5, 0x0
		   0x010E4310:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E4314:  010059E3     CMPS r0, sb, 0x1
		   0x010E4318:  1E0000BA     BLT $+0x80  // if (<) goto 0x010E4398
		   // 
		   // ──── Block 8 else (>=) ────────────────────
		   0x010E431C:  0060A0E3     MOV r6, 0x0
		   0x010E4320:  000054E3     CMPS r0, r4, 0x0
		   0x010E4324:  0000001A     BNE $+0x8  // if (!=) goto 0x010E432C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E4328:  28DCF9EB     BL $-0x188f58
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E432C:  080094E5     LDR r0, [r4, 0x8]
		   0x010E4330:  001090E5     LDR r1, [r0]
		   0x010E4334:  060051E1     CMPS r0, r1, r6
		   0x010E4338:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010E4344
		   // 
		   // ──── Block 11 else (<= (unsigned)) ────────────────────
		   0x010E433C:  24DCF9EB     BL $-0x188f68
		   0x010E4340:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 12 if (> (unsigned)) ────────────────────
		   0x010E4344:  087090E5     LDR r7, [r0, 0x8]
		   0x010E4348:  050057E1     CMPS r0, r7, r5
		   0x010E434C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010E4354
		   // 
		   // ──── Block 13 else (<= (unsigned)) ────────────────────
		   0x010E4350:  1FDCF9EB     BL $-0x188f7c
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x010E4354:  975621E0     MLA r1, r7, r6, r5
		   0x010E4358:  00009AE5     LDR r0, [r10]
		   0x010E435C:  742090E5     LDR r2, [r0, 0x74]
		   0x010E4360:  000052E3     CMPS r0, r2, 0x0
		   0x010E4364:  011184E0     ADD r1, r4, r1, lsl 2
		   0x010E4368:  107091E5     LDR r7, [r1, 0x10]
		   0x010E436C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4374
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E4370:  C7DBF9EB     BL $-0x1890dc
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E4374:  0700A0E1     MOV r0, r7
		   0x010E4378:  0010A0E3     MOV r1, 0x0
		   0x010E437C:  0020A0E3     MOV r2, 0x0
		   0x010E4380:  FB01FDEB     BL $-0xbf80c
		   0x010E4384:  000050E3     CMPS r0, r0, 0x0
		   0x010E4388:  0700001A     BNE $+0x24  // if (!=) goto 0x010E43AC
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E438C:  016086E2     ADD r6, r6, 0x1
		   0x010E4390:  060059E1     CMPS r0, sb, r6
		   0x010E4394:  E1FFFF1A     BNE $-0x74
		   // ──── Block 18 (from 2 paths) ──────────────────
		   0x010E4398:  015085E2     ADD r5, r5, 0x1
		   0x010E439C:  080055E1     CMPS r0, r5, r8
		   0x010E43A0:  DBFFFF1A     BNE $-0x8c
		   // ──── Block 19 else (==) ────────────────────
		   0x010E43A4:  0070A0E3     MOV r7, 0x0
		   0x010E43A8:  0C0000EA     B $+0x38  // goto 0x010E43E0
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E43AC:  080094E5     LDR r0, [r4, 0x8]
		   0x010E43B0:  001090E5     LDR r1, [r0]
		   0x010E43B4:  060051E1     CMPS r0, r1, r6
		   0x010E43B8:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010E43C4
		   // 
		   // ──── Block 21 else (<= (unsigned)) ────────────────────
		   0x010E43BC:  04DCF9EB     BL $-0x188fe8
		   0x010E43C0:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 22 if (> (unsigned)) ────────────────────
		   0x010E43C4:  087090E5     LDR r7, [r0, 0x8]
		   0x010E43C8:  050057E1     CMPS r0, r7, r5
		   0x010E43CC:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010E43D4
		   // 
		   // ──── Block 23 else (<= (unsigned)) ────────────────────
		   0x010E43D0:  FFDBF9EB     BL $-0x188ffc
		   // ──── Block 24 if (> (unsigned)) ────────────────────
		   0x010E43D4:  975620E0     MLA r0, r7, r6, r5
		   0x010E43D8:  000184E0     ADD r0, r4, r0, lsl 2
		   0x010E43DC:  107090E5     LDR r7, [r0, 0x10]
		   // ──── Block 25 if (<) ────────────────────
		   0x010E43E0:  0700A0E1     MOV r0, r7
		   0x010E43E4:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010E43E8:  0D7A1403     TSTSEQ r7, r4, 0xd000
		   0x010E43EC:  9422F902     RSCSEQ r2, sb, 0x40000009
		   0x010E43F0:  2822F902     RSCSEQ r2, sb, 0x80000002
		*/
	}

	// RVA: 0x10E48CC Offset: 0x10E48CC VA: 0x10E48CC
	private bool HasFreeCell() {
		/* Disassembly (ARM32, 118 instructions, 0x1D8 bytes):
		   // CFG: 30 blocks, 33 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E48CC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E48D0:  C0519FE5     LDR r5, [pc, 0x1c0]
		   0x010E48D4:  0040A0E1     MOV r4, r0
		   0x010E48D8:  05508FE0     ADD r5, pc, r5
		   0x010E48DC:  0000D5E5     LDRB r0, [r5]
		   0x010E48E0:  000050E3     CMPS r0, r0, 0x0
		   0x010E48E4:  0400001A     BNE $+0x18  // if (!=) goto 0x010E48FC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E48E8:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x010E48EC:  00009FE7     LDR r0, [pc, r0]
		   0x010E48F0:  1ADAF9EB     BL $-0x189790
		   0x010E48F4:  0100A0E3     MOV r0, 0x1
		   0x010E48F8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E48FC:  404094E5     LDR r4, [r4, 0x40]
		   0x010E4900:  000054E3     CMPS r0, r4, 0x0
		   0x010E4904:  0A00000A     BEQ $+0x30  // if (==) goto 0x010E4934
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E4908:  0400A0E1     MOV r0, r4
		   0x010E490C:  0010A0E3     MOV r1, 0x0
		   0x010E4910:  0020A0E3     MOV r2, 0x0
		   0x010E4914:  4F3D7EEB     BL $+0x1f8f544  // CALL → Array.GetUpperBound
		   0x010E4918:  0080A0E1     MOV r8, r0
		   0x010E491C:  0400A0E1     MOV r0, r4
		   0x010E4920:  0110A0E3     MOV r1, 0x1
		   0x010E4924:  0020A0E3     MOV r2, 0x0
		   0x010E4928:  4A3D7EEB     BL $+0x1f8f530  // CALL → Array.GetUpperBound
		   0x010E492C:  0090A0E1     MOV sb, r0
		   0x010E4930:  0C0000EA     B $+0x38  // goto 0x010E4968
		   // ──── Block 4 if (==) ────────────────────
		   0x010E4934:  A5DAF9EB     BL $-0x189564
		   0x010E4938:  0000A0E3     MOV r0, 0x0
		   0x010E493C:  0010A0E3     MOV r1, 0x0
		   0x010E4940:  0020A0E3     MOV r2, 0x0
		   0x010E4944:  433D7EEB     BL $+0x1f8f514  // CALL → Array.GetUpperBound
		   0x010E4948:  0080A0E1     MOV r8, r0
		   0x010E494C:  9FDAF9EB     BL $-0x18957c
		   0x010E4950:  0000A0E3     MOV r0, 0x0
		   0x010E4954:  0110A0E3     MOV r1, 0x1
		   0x010E4958:  0020A0E3     MOV r2, 0x0
		   0x010E495C:  3D3D7EEB     BL $+0x1f8f4fc  // CALL → Array.GetUpperBound
		   0x010E4960:  0090A0E1     MOV sb, r0
		   0x010E4964:  99DAF9EB     BL $-0x189594
		   // ──── Block 5 ──────────────────────────────
		   0x010E4968:  0400A0E1     MOV r0, r4
		   0x010E496C:  0010A0E3     MOV r1, 0x0
		   0x010E4970:  0020A0E3     MOV r2, 0x0
		   0x010E4974:  0050A0E3     MOV r5, 0x0
		   0x010E4978:  AD2F7EEB     BL $+0x1f8bebc  // CALL → Array.GetLowerBound
		   0x010E497C:  080050E1     CMPS r0, r0, r8
		   0x010E4980:  420000CA     BGT $+0x110  // if (>) goto 0x010E4A90
		   // 
		   // ──── Block 6 else (<=) ────────────────────
		   0x010E4984:  14A19FE5     LDR r10, [pc, 0x114]
		   0x010E4988:  0070A0E1     MOV r7, r0
		   0x010E498C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E4990:  000054E3     CMPS r0, r4, 0x0
		   0x010E4994:  0000001A     BNE $+0x8  // if (!=) goto 0x010E499C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E4998:  8CDAF9EB     BL $-0x1895c8
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E499C:  0400A0E1     MOV r0, r4
		   0x010E49A0:  0110A0E3     MOV r1, 0x1
		   0x010E49A4:  0020A0E3     MOV r2, 0x0
		   0x010E49A8:  A12F7EEB     BL $+0x1f8be8c  // CALL → Array.GetLowerBound
		   0x010E49AC:  090050E1     CMPS r0, r0, sb
		   0x010E49B0:  300000CA     BGT $+0xc8  // if (>) goto 0x010E4A78
		   // 
		   // ──── Block 9 else (<=) ────────────────────
		   0x010E49B4:  0050A0E1     MOV r5, r0
		   0x010E49B8:  000054E3     CMPS r0, r4, 0x0
		   0x010E49BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E49C4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E49C0:  82DAF9EB     BL $-0x1895f0
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E49C4:  080094E5     LDR r0, [r4, 0x8]
		   0x010E49C8:  001090E5     LDR r1, [r0]
		   0x010E49CC:  070051E1     CMPS r0, r1, r7
		   0x010E49D0:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010E49DC
		   // 
		   // ──── Block 12 else (<= (unsigned)) ────────────────────
		   0x010E49D4:  7EDAF9EB     BL $-0x189600
		   0x010E49D8:  080094E5     LDR r0, [r4, 0x8]
		   // ──── Block 13 if (> (unsigned)) ────────────────────
		   0x010E49DC:  086090E5     LDR r6, [r0, 0x8]
		   0x010E49E0:  050056E1     CMPS r0, r6, r5
		   0x010E49E4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010E49EC
		   // 
		   // ──── Block 14 else (<= (unsigned)) ────────────────────
		   0x010E49E8:  79DAF9EB     BL $-0x189614
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x010E49EC:  975621E0     MLA r1, r7, r6, r5
		   0x010E49F0:  00009AE5     LDR r0, [r10]
		   0x010E49F4:  742090E5     LDR r2, [r0, 0x74]
		   0x010E49F8:  000052E3     CMPS r0, r2, 0x0
		   0x010E49FC:  011184E0     ADD r1, r4, r1, lsl 2
		   0x010E4A00:  106091E5     LDR r6, [r1, 0x10]
		   0x010E4A04:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4A0C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010E4A08:  21DAF9EB     BL $-0x189774
		   // ──── Block 17 if (!=) ────────────────────
		   0x010E4A0C:  0600A0E1     MOV r0, r6
		   0x010E4A10:  0010A0E3     MOV r1, 0x0
		   0x010E4A14:  0020A0E3     MOV r2, 0x0
		   0x010E4A18:  1F4D3CEB     BL $+0xf13484  // CALL → sub_1FF7E9C
		   0x010E4A1C:  000050E3     CMPS r0, r0, 0x0
		   0x010E4A20:  1100001A     BNE $+0x4c  // if (!=) goto 0x010E4A6C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010E4A24:  000056E3     CMPS r0, r6, 0x0
		   0x010E4A28:  0500000A     BEQ $+0x1c  // if (==) goto 0x010E4A44
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x010E4A2C:  0600A0E1     MOV r0, r6
		   0x010E4A30:  0010A0E3     MOV r1, 0x0
		   0x010E4A34:  664D3CEB     BL $+0xf135a0  // CALL → sub_1FF7FD4
		   0x010E4A38:  000050E3     CMPS r0, r0, 0x0
		   0x010E4A3C:  0700001A     BNE $+0x24  // if (!=) goto 0x010E4A60
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010E4A40:  090000EA     B $+0x2c  // goto 0x010E4A6C
		   // ──── Block 21 if (==) ────────────────────
		   0x010E4A44:  61DAF9EB     BL $-0x189674
		   0x010E4A48:  0000A0E3     MOV r0, 0x0
		   0x010E4A4C:  0010A0E3     MOV r1, 0x0
		   0x010E4A50:  5F4D3CEB     BL $+0xf13584  // CALL → sub_1FF7FD4
		   0x010E4A54:  000050E3     CMPS r0, r0, 0x0
		   0x010E4A58:  0300000A     BEQ $+0x14  // if (==) goto 0x010E4A6C
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x010E4A5C:  5BDAF9EB     BL $-0x18968c
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E4A60:  2800D6E5     LDRB r0, [r6, 0x28]
		   0x010E4A64:  000050E3     CMPS r0, r0, 0x0
		   0x010E4A68:  0700001A     BNE $+0x24  // if (!=) goto 0x010E4A8C
		   // 
		   // ──── Block 24 (from 3 paths) ──────────────────
		   0x010E4A6C:  015085E2     ADD r5, r5, 0x1
		   0x010E4A70:  090055E1     CMPS r0, r5, sb
		   0x010E4A74:  CFFFFFDA     BLE $-0xbc
		   // ──── Block 25 (from 2 paths) ──────────────────
		   0x010E4A78:  017087E2     ADD r7, r7, 0x1
		   0x010E4A7C:  080057E1     CMPS r0, r7, r8
		   0x010E4A80:  C2FFFFDA     BLE $-0xf0
		   // ──── Block 26 else (>) ────────────────────
		   0x010E4A84:  0050A0E3     MOV r5, 0x0
		   0x010E4A88:  000000EA     B $+0x8  // goto 0x010E4A90
		   // ──── Block 27 if (!=) ────────────────────
		   0x010E4A8C:  0150A0E3     MOV r5, 0x1
		   // ──── Block 28 if (>) ────────────────────
		   0x010E4A90:  0500A0E1     MOV r0, r5
		   0x010E4A94:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010E4A98:  C6731403     TSTSEQ r7, r4, 0x18000003
		   0x010E4A9C:  4C1CF902     RSCSEQ r1, sb, 0x4c00
		   0x010E4AA0:  AC1BF902     RSCSEQ r1, sb, 0x2b000
		*/
	}

	// RVA: 0x10E4AA4 Offset: 0x10E4AA4 VA: 0x10E4AA4
	private Cell GetCellByPos(Vector2Int pos) {
		/* Disassembly (ARM32, 112 instructions, 0x1C0 bytes):
		   // CFG: 26 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E4AA4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E4AA8:  04D04DE2     SUB sp, sp, 0x4
		   0x010E4AAC:  A4519FE5     LDR r5, [pc, 0x1a4]
		   0x010E4AB0:  0040A0E1     MOV r4, r0
		   0x010E4AB4:  0290A0E1     MOV sb, r2
		   0x010E4AB8:  01A0A0E1     MOV r10, r1
		   0x010E4ABC:  05508FE0     ADD r5, pc, r5
		   0x010E4AC0:  0000D5E5     LDRB r0, [r5]
		   0x010E4AC4:  000050E3     CMPS r0, r0, 0x0
		   0x010E4AC8:  0400001A     BNE $+0x18  // if (!=) goto 0x010E4AE0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E4ACC:  88019FE5     LDR r0, [pc, 0x188]
		   0x010E4AD0:  00009FE7     LDR r0, [pc, r0]
		   0x010E4AD4:  A1D9F9EB     BL $-0x189974
		   0x010E4AD8:  0100A0E3     MOV r0, 0x1
		   0x010E4ADC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E4AE0:  406094E5     LDR r6, [r4, 0x40]
		   0x010E4AE4:  000056E3     CMPS r0, r6, 0x0
		   0x010E4AE8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010E4B18
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E4AEC:  0600A0E1     MOV r0, r6
		   0x010E4AF0:  0010A0E3     MOV r1, 0x0
		   0x010E4AF4:  0020A0E3     MOV r2, 0x0
		   0x010E4AF8:  D63C7EEB     BL $+0x1f8f360  // CALL → Array.GetUpperBound
		   0x010E4AFC:  0050A0E1     MOV r5, r0
		   0x010E4B00:  0600A0E1     MOV r0, r6
		   0x010E4B04:  0110A0E3     MOV r1, 0x1
		   0x010E4B08:  0020A0E3     MOV r2, 0x0
		   0x010E4B0C:  D13C7EEB     BL $+0x1f8f34c  // CALL → Array.GetUpperBound
		   0x010E4B10:  00B0A0E1     MOV fp, r0
		   0x010E4B14:  0C0000EA     B $+0x38  // goto 0x010E4B4C
		   // ──── Block 4 if (==) ────────────────────
		   0x010E4B18:  2CDAF9EB     BL $-0x189748
		   0x010E4B1C:  0000A0E3     MOV r0, 0x0
		   0x010E4B20:  0010A0E3     MOV r1, 0x0
		   0x010E4B24:  0020A0E3     MOV r2, 0x0
		   0x010E4B28:  CA3C7EEB     BL $+0x1f8f330  // CALL → Array.GetUpperBound
		   0x010E4B2C:  0050A0E1     MOV r5, r0
		   0x010E4B30:  26DAF9EB     BL $-0x189760
		   0x010E4B34:  0000A0E3     MOV r0, 0x0
		   0x010E4B38:  0110A0E3     MOV r1, 0x1
		   0x010E4B3C:  0020A0E3     MOV r2, 0x0
		   0x010E4B40:  C43C7EEB     BL $+0x1f8f318  // CALL → Array.GetUpperBound
		   0x010E4B44:  00B0A0E1     MOV fp, r0
		   0x010E4B48:  20DAF9EB     BL $-0x189778
		   // ──── Block 5 ──────────────────────────────
		   0x010E4B4C:  0600A0E1     MOV r0, r6
		   0x010E4B50:  0010A0E3     MOV r1, 0x0
		   0x010E4B54:  0020A0E3     MOV r2, 0x0
		   0x010E4B58:  0070A0E3     MOV r7, 0x0
		   0x010E4B5C:  342F7EEB     BL $+0x1f8bcd8  // CALL → Array.GetLowerBound
		   0x010E4B60:  050050E1     CMPS r0, r0, r5
		   0x010E4B64:  00508DE5     STR r5, [sp]
		   0x010E4B68:  020000DA     BLE $+0x10  // if (<=) goto 0x010E4B78
		   // 
		   // ──── Block 6 else (>) ────────────────────
		   0x010E4B6C:  0700A0E1     MOV r0, r7
		   0x010E4B70:  04D08DE2     ADD sp, sp, 0x4
		   0x010E4B74:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 7 if (<=) ────────────────────
		   0x010E4B78:  E0809FE5     LDR r8, [pc, 0xe0]
		   0x010E4B7C:  0040A0E1     MOV r4, r0
		   0x010E4B80:  08809FE7     LDR r8, [pc, r8]
		   0x010E4B84:  000056E3     CMPS r0, r6, 0x0
		   0x010E4B88:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4B90
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E4B8C:  0FDAF9EB     BL $-0x1897bc
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E4B90:  0600A0E1     MOV r0, r6
		   0x010E4B94:  0110A0E3     MOV r1, 0x1
		   0x010E4B98:  0020A0E3     MOV r2, 0x0
		   0x010E4B9C:  242F7EEB     BL $+0x1f8bc98  // CALL → Array.GetLowerBound
		   0x010E4BA0:  0B0050E1     CMPS r0, r0, fp
		   0x010E4BA4:  250000CA     BGT $+0x9c  // if (>) goto 0x010E4C40
		   // 
		   // ──── Block 10 else (<=) ────────────────────
		   0x010E4BA8:  0050A0E1     MOV r5, r0
		   0x010E4BAC:  000056E3     CMPS r0, r6, 0x0
		   0x010E4BB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4BB8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E4BB4:  05DAF9EB     BL $-0x1897e4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E4BB8:  080096E5     LDR r0, [r6, 0x8]
		   0x010E4BBC:  001090E5     LDR r1, [r0]
		   0x010E4BC0:  040051E1     CMPS r0, r1, r4
		   0x010E4BC4:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010E4BD0
		   // 
		   // ──── Block 13 else (<= (unsigned)) ────────────────────
		   0x010E4BC8:  01DAF9EB     BL $-0x1897f4
		   0x010E4BCC:  080096E5     LDR r0, [r6, 0x8]
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x010E4BD0:  087090E5     LDR r7, [r0, 0x8]
		   0x010E4BD4:  050057E1     CMPS r0, r7, r5
		   0x010E4BD8:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010E4BE0
		   // 
		   // ──── Block 15 else (<= (unsigned)) ────────────────────
		   0x010E4BDC:  FCD9F9EB     BL $-0x189808
		   // ──── Block 16 if (> (unsigned)) ────────────────────
		   0x010E4BE0:  945721E0     MLA r1, r4, r7, r5
		   0x010E4BE4:  000098E5     LDR r0, [r8]
		   0x010E4BE8:  742090E5     LDR r2, [r0, 0x74]
		   0x010E4BEC:  000052E3     CMPS r0, r2, 0x0
		   0x010E4BF0:  011186E0     ADD r1, r6, r1, lsl 2
		   0x010E4BF4:  107091E5     LDR r7, [r1, 0x10]
		   0x010E4BF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4C00
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E4BFC:  A4D9F9EB     BL $-0x189968
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E4C00:  0700A0E1     MOV r0, r7
		   0x010E4C04:  0010A0E3     MOV r1, 0x0
		   0x010E4C08:  7B4D3CEB     BL $+0xf135f4  // CALL → sub_1FF81FC
		   0x010E4C0C:  000050E3     CMPS r0, r0, 0x0
		   0x010E4C10:  0700000A     BEQ $+0x24  // if (==) goto 0x010E4C34
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x010E4C14:  000057E3     CMPS r0, r7, 0x0
		   0x010E4C18:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4C20
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010E4C1C:  EBD9F9EB     BL $-0x18984c
		   // ──── Block 21 if (!=) ────────────────────
		   0x010E4C20:  140097E5     LDR r0, [r7, 0x14]
		   0x010E4C24:  00005AE1     CMPS r0, r10, r0
		   0x010E4C28:  18009705     LDREQ r0, [r7, 0x18]
		   0x010E4C2C:  00005901     CMPSEQ r0, sb, r0
		   0x010E4C30:  CDFFFF0A     BEQ $-0xc4
		   // ──── Block 22 (from 2 paths) ──────────────────
		   0x010E4C34:  015085E2     ADD r5, r5, 0x1
		   0x010E4C38:  0B0055E1     CMPS r0, r5, fp
		   0x010E4C3C:  DAFFFFDA     BLE $-0x90
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x010E4C40:  00009DE5     LDR r0, [sp]
		   0x010E4C44:  014084E2     ADD r4, r4, 0x1
		   0x010E4C48:  000054E1     CMPS r0, r4, r0
		   0x010E4C4C:  CCFFFFDA     BLE $-0xc8
		   // ──── Block 24 else (>) ────────────────────
		   0x010E4C50:  0070A0E3     MOV r7, 0x0
		   0x010E4C54:  C4FFFFEA     B $-0xe8
		   0x010E4C58:  E3711403     TSTSEQ r7, r4, 0xc0000038
		   0x010E4C5C:  681AF902     RSCSEQ r1, sb, 0x68000
		   0x010E4C60:  B819F902     RSCSEQ r1, sb, 0x2e0000
		*/
	}

	// RVA: 0x10E4C64 Offset: 0x10E4C64 VA: 0x10E4C64
	private Cell FindFreeAroundCell(Cell cell) {
		/* Disassembly (ARM32, 82 instructions, 0x148 bytes):
		   // CFG: 21 blocks, 21 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E4C64:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E4C68:  04D04DE2     SUB sp, sp, 0x4
		   0x010E4C6C:  2C419FE5     LDR r4, [pc, 0x12c]
		   0x010E4C70:  0090A0E1     MOV sb, r0
		   0x010E4C74:  01A0A0E1     MOV r10, r1
		   0x010E4C78:  04408FE0     ADD r4, pc, r4
		   0x010E4C7C:  0000D4E5     LDRB r0, [r4]
		   0x010E4C80:  000050E3     CMPS r0, r0, 0x0
		   0x010E4C84:  0400001A     BNE $+0x18  // if (!=) goto 0x010E4C9C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E4C88:  14019FE5     LDR r0, [pc, 0x114]
		   0x010E4C8C:  00009FE7     LDR r0, [pc, r0]
		   0x010E4C90:  32D9F9EB     BL $-0x189b30
		   0x010E4C94:  0100A0E3     MOV r0, 0x1
		   0x010E4C98:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E4C9C:  04819FE5     LDR r8, [pc, 0x104]
		   0x010E4CA0:  08809FE7     LDR r8, [pc, r8]
		   0x010E4CA4:  000098E5     LDR r0, [r8]
		   0x010E4CA8:  741090E5     LDR r1, [r0, 0x74]
		   0x010E4CAC:  000051E3     CMPS r0, r1, 0x0
		   0x010E4CB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4CB8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E4CB4:  76D9F9EB     BL $-0x189a20
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E4CB8:  0A00A0E1     MOV r0, r10
		   0x010E4CBC:  0010A0E3     MOV r1, 0x0
		   0x010E4CC0:  0020A0E3     MOV r2, 0x0
		   0x010E4CC4:  0060A0E3     MOV r6, 0x0
		   0x010E4CC8:  734C3CEB     BL $+0xf131d4  // CALL → sub_1FF7E9C
		   0x010E4CCC:  000050E3     CMPS r0, r0, 0x0
		   0x010E4CD0:  0200000A     BEQ $+0x10  // if (==) goto 0x010E4CE0
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010E4CD4:  0600A0E1     MOV r0, r6
		   0x010E4CD8:  04D08DE2     ADD sp, sp, 0x4
		   0x010E4CDC:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 6 if (==) ────────────────────
		   0x010E4CE0:  14B08AE2     ADD fp, r10, 0x14
		   0x010E4CE4:  0040E0E3     MVN r4, r0, 0x0
		   0x010E4CE8:  0050E0E3     MVN r5, r0, 0x0
		   0x010E4CEC:  040095E1     ORRS r0, r5, r4
		   0x010E4CF0:  2200000A     BEQ $+0x90  // if (==) goto 0x010E4D80
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010E4CF4:  00005AE3     CMPS r0, r10, 0x0
		   0x010E4CF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4D00
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E4CFC:  B3D9F9EB     BL $-0x18992c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E4D00:  09009BE8     LDM fp, {r0, r3}
		   0x010E4D04:  032085E0     ADD r2, r5, r3
		   0x010E4D08:  001084E0     ADD r1, r4, r0
		   0x010E4D0C:  0900A0E1     MOV r0, sb
		   0x010E4D10:  63FFFFEB     BL $-0x26c
		   0x010E4D14:  0060A0E1     MOV r6, r0
		   0x010E4D18:  000098E5     LDR r0, [r8]
		   0x010E4D1C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E4D20:  000051E3     CMPS r0, r1, 0x0
		   0x010E4D24:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4D2C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E4D28:  59D9F9EB     BL $-0x189a94
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E4D2C:  0600A0E1     MOV r0, r6
		   0x010E4D30:  0010A0E3     MOV r1, 0x0
		   0x010E4D34:  0020A0E3     MOV r2, 0x0
		   0x010E4D38:  8DFFFCEB     BL $-0xc01c4
		   0x010E4D3C:  000050E3     CMPS r0, r0, 0x0
		   0x010E4D40:  0E00000A     BEQ $+0x40  // if (==) goto 0x010E4D80
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x010E4D44:  000056E3     CMPS r0, r6, 0x0
		   0x010E4D48:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4D50
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E4D4C:  9FD9F9EB     BL $-0x18997c
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E4D50:  000098E5     LDR r0, [r8]
		   0x010E4D54:  247096E5     LDR r7, [r6, 0x24]
		   0x010E4D58:  741090E5     LDR r1, [r0, 0x74]
		   0x010E4D5C:  000051E3     CMPS r0, r1, 0x0
		   0x010E4D60:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4D68
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E4D64:  4AD9F9EB     BL $-0x189ad0
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E4D68:  0700A0E1     MOV r0, r7
		   0x010E4D6C:  0010A0E3     MOV r1, 0x0
		   0x010E4D70:  0020A0E3     MOV r2, 0x0
		   0x010E4D74:  484C3CEB     BL $+0xf13128  // CALL → sub_1FF7E9C
		   0x010E4D78:  000050E3     CMPS r0, r0, 0x0
		   0x010E4D7C:  D4FFFF1A     BNE $-0xa8
		   // ──── Block 17 (from 3 paths) ──────────────────
		   0x010E4D80:  015085E2     ADD r5, r5, 0x1
		   0x010E4D84:  020055E3     CMPS r0, r5, 0x2
		   0x010E4D88:  D7FFFF1A     BNE $-0x9c
		   // ──── Block 18 else (==) ────────────────────
		   0x010E4D8C:  014084E2     ADD r4, r4, 0x1
		   0x010E4D90:  020054E3     CMPS r0, r4, 0x2
		   0x010E4D94:  D3FFFF1A     BNE $-0xac
		   // ──── Block 19 else (==) ────────────────────
		   0x010E4D98:  0060A0E3     MOV r6, 0x0
		   0x010E4D9C:  CCFFFFEA     B $-0xc8
		   0x010E4DA0:  28701403     TSTSEQ r7, r4, 0x28
		   0x010E4DA4:  AC18F902     RSCSEQ r1, sb, 0xac0000
		   0x010E4DA8:  9818F902     RSCSEQ r1, sb, 0x980000
		*/
	}

	// RVA: 0x10E064C Offset: 0x10E064C VA: 0x10E064C
	private Cell FindNearestFreeCell(Vector2 delta, Cell cell) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010E064C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E0650:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10E2B14 Offset: 0x10E2B14 VA: 0x10E2B14
	private void TryUnboxing(Cell mergedCell) {
		/* Disassembly (ARM32, 92 instructions, 0x170 bytes):
		   // CFG: 20 blocks, 20 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E2B14:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E2B18:  04D04DE2     SUB sp, sp, 0x4
		   0x010E2B1C:  00108DE5     STR r1, [sp]
		   0x010E2B20:  00A0A0E1     MOV r10, r0
		   0x010E2B24:  44419FE5     LDR r4, [pc, 0x144]
		   0x010E2B28:  04408FE0     ADD r4, pc, r4
		   0x010E2B2C:  0000D4E5     LDRB r0, [r4]
		   0x010E2B30:  000050E3     CMPS r0, r0, 0x0
		   0x010E2B34:  0400001A     BNE $+0x18  // if (!=) goto 0x010E2B4C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E2B38:  34019FE5     LDR r0, [pc, 0x134]
		   0x010E2B3C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2B40:  86E1F9EB     BL $-0x1879e0
		   0x010E2B44:  0100A0E3     MOV r0, 0x1
		   0x010E2B48:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E2B4C:  00009DE5     LDR r0, [sp]
		   0x010E2B50:  00B0E0E3     MVN fp, r0, 0x0
		   0x010E2B54:  1C519FE5     LDR r5, [pc, 0x11c]
		   0x010E2B58:  1C619FE5     LDR r6, [pc, 0x11c]
		   0x010E2B5C:  149080E2     ADD sb, r0, 0x14
		   0x010E2B60:  05508FE0     ADD r5, pc, r5
		   0x010E2B64:  06609FE7     LDR r6, [pc, r6]
		   0x010E2B68:  00005BE3     CMPS r0, fp, 0x0
		   0x010E2B6C:  0B40A0E1     MOV r4, fp
		   0x010E2B70:  00406B42     RSBMI r4, fp, 0x0
		   0x010E2B74:  0080E0E3     MVN r8, r0, 0x0
		   0x010E2B78:  0000D5E5     LDRB r0, [r5]
		   0x010E2B7C:  000050E3     CMPS r0, r0, 0x0
		   0x010E2B80:  0300001A     BNE $+0x14  // if (!=) goto 0x010E2B94
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E2B84:  0600A0E1     MOV r0, r6
		   0x010E2B88:  74E1F9EB     BL $-0x187a28
		   0x010E2B8C:  0100A0E3     MOV r0, 0x1
		   0x010E2B90:  0000C5E5     STRB r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E2B94:  000096E5     LDR r0, [r6]
		   0x010E2B98:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2B9C:  000051E3     CMPS r0, r1, 0x0
		   0x010E2BA0:  0700001A     BNE $+0x24  // if (!=) goto 0x010E2BC4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E2BA4:  BAE1F9EB     BL $-0x187910
		   0x010E2BA8:  0000D5E5     LDRB r0, [r5]
		   0x010E2BAC:  000050E3     CMPS r0, r0, 0x0
		   0x010E2BB0:  0300001A     BNE $+0x14  // if (!=) goto 0x010E2BC4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E2BB4:  0600A0E1     MOV r0, r6
		   0x010E2BB8:  68E1F9EB     BL $-0x187a58
		   0x010E2BBC:  0100A0E3     MOV r0, 0x1
		   0x010E2BC0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x010E2BC4:  000096E5     LDR r0, [r6]
		   0x010E2BC8:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2BCC:  000051E3     CMPS r0, r1, 0x0
		   0x010E2BD0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2BD8
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E2BD4:  AEE1F9EB     BL $-0x187940
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E2BD8:  000058E3     CMPS r0, r8, 0x0
		   0x010E2BDC:  0800A0E1     MOV r0, r8
		   0x010E2BE0:  00006842     RSBMI r0, r8, 0x0
		   0x010E2BE4:  000054E1     CMPS r0, r4, r0
		   0x010E2BE8:  1800000A     BEQ $+0x68  // if (==) goto 0x010E2C50
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010E2BEC:  00009DE5     LDR r0, [sp]
		   0x010E2BF0:  000050E3     CMPS r0, r0, 0x0
		   0x010E2BF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2BFC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E2BF8:  F4E1F9EB     BL $-0x187828
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E2BFC:  090099E8     LDM sb, {r0, r3}
		   0x010E2C00:  032088E0     ADD r2, r8, r3
		   0x010E2C04:  00108BE0     ADD r1, fp, r0
		   0x010E2C08:  0A00A0E1     MOV r0, r10
		   0x010E2C0C:  660800EB     BL $+0x21a0  // CALL → GameState.HasBoxedItemByCoordinates
		   0x010E2C10:  0070A0E1     MOV r7, r0
		   0x010E2C14:  64009FE5     LDR r0, [pc, 0x64]
		   0x010E2C18:  00009FE7     LDR r0, [pc, r0]
		   0x010E2C1C:  000090E5     LDR r0, [r0]
		   0x010E2C20:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2C24:  000051E3     CMPS r0, r1, 0x0
		   0x010E2C28:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2C30
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E2C2C:  98E1F9EB     BL $-0x187998
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E2C30:  0700A0E1     MOV r0, r7
		   0x010E2C34:  0010A0E3     MOV r1, 0x0
		   0x010E2C38:  6F553CEB     BL $+0xf155c4  // CALL → sub_1FF81FC
		   0x010E2C3C:  000050E3     CMPS r0, r0, 0x0
		   0x010E2C40:  0200000A     BEQ $+0x10  // if (==) goto 0x010E2C50
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x010E2C44:  0A00A0E1     MOV r0, r10
		   0x010E2C48:  0710A0E1     MOV r1, r7
		   0x010E2C4C:  27F8FFEB     BL $-0x1f5c
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x010E2C50:  018088E2     ADD r8, r8, 0x1
		   0x010E2C54:  020058E3     CMPS r0, r8, 0x2
		   0x010E2C58:  C6FFFF1A     BNE $-0xe0
		   // ──── Block 17 else (==) ────────────────────
		   0x010E2C5C:  01B08BE2     ADD fp, fp, 0x1
		   0x010E2C60:  02005BE3     CMPS r0, fp, 0x2
		   0x010E2C64:  BFFFFF1A     BNE $-0xfc
		   // ──── Block 18 else (==) ────────────────────
		   0x010E2C68:  04D08DE2     ADD sp, sp, 0x4
		   0x010E2C6C:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010E2C70:  7A911403     TSTSEQ sb, r4, 0x8000001e
		   0x010E2C74:  FC39F902     RSCSEQ r3, sb, 0x3f0000
		   0x010E2C78:  80911403     TSTSEQ sb, r4, 0x20
		   0x010E2C7C:  A053F902     RSCSEQ r5, sb, 0x80000002
		   0x010E2C80:  2039F902     RSCSEQ r3, sb, 0x80000
		*/
	}

	// RVA: 0x10E4DAC Offset: 0x10E4DAC VA: 0x10E4DAC
	private Cell HasBoxedItemByCoordinates(Vector2Int coords) {
		/* Disassembly (ARM32, 114 instructions, 0x1C8 bytes):
		   // CFG: 29 blocks, 31 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E4DAC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E4DB0:  A8419FE5     LDR r4, [pc, 0x1a8]
		   0x010E4DB4:  0070A0E1     MOV r7, r0
		   0x010E4DB8:  0290A0E1     MOV sb, r2
		   0x010E4DBC:  0160A0E1     MOV r6, r1
		   0x010E4DC0:  04408FE0     ADD r4, pc, r4
		   0x010E4DC4:  0000D4E5     LDRB r0, [r4]
		   0x010E4DC8:  000050E3     CMPS r0, r0, 0x0
		   0x010E4DCC:  0700001A     BNE $+0x24  // if (!=) goto 0x010E4DF0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E4DD0:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x010E4DD4:  00009FE7     LDR r0, [pc, r0]
		   0x010E4DD8:  E0D8F9EB     BL $-0x189c78
		   0x010E4DDC:  84019FE5     LDR r0, [pc, 0x184]
		   0x010E4DE0:  00009FE7     LDR r0, [pc, r0]
		   0x010E4DE4:  DDD8F9EB     BL $-0x189c84
		   0x010E4DE8:  0100A0E3     MOV r0, 0x1
		   0x010E4DEC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E4DF0:  404097E5     LDR r4, [r7, 0x40]
		   0x010E4DF4:  000054E3     CMPS r0, r4, 0x0
		   0x010E4DF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4E00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E4DFC:  73D9F9EB     BL $-0x189a2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E4E00:  0400A0E1     MOV r0, r4
		   0x010E4E04:  0010A0E3     MOV r1, 0x0
		   0x010E4E08:  0020A0E3     MOV r2, 0x0
		   0x010E4E0C:  0080A0E3     MOV r8, 0x0
		   0x010E4E10:  4B347EEB     BL $+0x1f8d134  // CALL → Array.GetLength
		   0x010E4E14:  405097E5     LDR r5, [r7, 0x40]
		   0x010E4E18:  0040A0E1     MOV r4, r0
		   0x010E4E1C:  000055E3     CMPS r0, r5, 0x0
		   0x010E4E20:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4E28
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E4E24:  69D9F9EB     BL $-0x189a54
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E4E28:  0500A0E1     MOV r0, r5
		   0x010E4E2C:  0110A0E3     MOV r1, 0x1
		   0x010E4E30:  0020A0E3     MOV r2, 0x0
		   0x010E4E34:  42347EEB     BL $+0x1f8d110  // CALL → Array.GetLength
		   0x010E4E38:  000056E3     CMPS r0, r6, 0x0
		   0x010E4E3C:  00005953     CMPSPL r0, sb, 0x0
		   0x010E4E40:  4400004A     BMI $+0x118  // if (< 0) goto 0x010E4F58
		   // 
		   // ──── Block 7 else (< 0) ────────────────────
		   0x010E4E44:  040056E1     CMPS r0, r6, r4
		   0x010E4E48:  000059B1     CMPSLT r0, sb, r0
		   0x010E4E4C:  410000AA     BGE $+0x10c  // if (>=) goto 0x010E4F58
		   // 
		   // ──── Block 8 else (<) ────────────────────
		   0x010E4E50:  404097E5     LDR r4, [r7, 0x40]
		   0x010E4E54:  000054E3     CMPS r0, r4, 0x0
		   0x010E4E58:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4E60
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E4E5C:  5BD9F9EB     BL $-0x189a8c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E4E60:  0400A0E1     MOV r0, r4
		   0x010E4E64:  0610A0E1     MOV r1, r6
		   0x010E4E68:  0920A0E1     MOV r2, sb
		   0x010E4E6C:  0030A0E3     MOV r3, 0x0
		   0x010E4E70:  0080A0E3     MOV r8, 0x0
		   0x010E4E74:  8C347EEB     BL $+0x1f8d238  // CALL → Array.GetValue
		   0x010E4E78:  000050E3     CMPS r0, r0, 0x0
		   0x010E4E7C:  0D00000A     BEQ $+0x3c  // if (==) goto 0x010E4EB8
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010E4E80:  E4109FE5     LDR r1, [pc, 0xe4]
		   0x010E4E84:  01109FE7     LDR r1, [pc, r1]
		   0x010E4E88:  002090E5     LDR r2, [r0]
		   0x010E4E8C:  001091E5     LDR r1, [r1]
		   0x010E4E90:  B870D2E5     LDRB r7, [r2, 0xb8]
		   0x010E4E94:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E4E98:  030057E1     CMPS r0, r7, r3
		   0x010E4E9C:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E4EB8
		   // 
		   // ──── Block 12 else (>= (unsigned)) ────────────────────
		   0x010E4EA0:  642092E5     LDR r2, [r2, 0x64]
		   0x010E4EA4:  032182E0     ADD r2, r2, r3, lsl 2
		   0x010E4EA8:  042012E5     LDR r2, [r2, -0x4]
		   0x010E4EAC:  010052E1     CMPS r0, r2, r1
		   0x010E4EB0:  0000A013     MOVNE r0, 0x0
		   0x010E4EB4:  0080A0E1     MOV r8, r0
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x010E4EB8:  B0409FE5     LDR r4, [pc, 0xb0]
		   0x010E4EBC:  04409FE7     LDR r4, [pc, r4]
		   0x010E4EC0:  000094E5     LDR r0, [r4]
		   0x010E4EC4:  741090E5     LDR r1, [r0, 0x74]
		   0x010E4EC8:  000051E3     CMPS r0, r1, 0x0
		   0x010E4ECC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4ED4
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E4ED0:  EFD8F9EB     BL $-0x189c3c
		   // ──── Block 15 if (!=) ────────────────────
		   0x010E4ED4:  0800A0E1     MOV r0, r8
		   0x010E4ED8:  0010A0E3     MOV r1, 0x0
		   0x010E4EDC:  0020A0E3     MOV r2, 0x0
		   0x010E4EE0:  23FFFCEB     BL $-0xc036c
		   0x010E4EE4:  000050E3     CMPS r0, r0, 0x0
		   0x010E4EE8:  1900000A     BEQ $+0x6c  // if (==) goto 0x010E4F54
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x010E4EEC:  000058E3     CMPS r0, r8, 0x0
		   0x010E4EF0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4EF8
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E4EF4:  35D9F9EB     BL $-0x189b24
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E4EF8:  000094E5     LDR r0, [r4]
		   0x010E4EFC:  244098E5     LDR r4, [r8, 0x24]
		   0x010E4F00:  741090E5     LDR r1, [r0, 0x74]
		   0x010E4F04:  000051E3     CMPS r0, r1, 0x0
		   0x010E4F08:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4F10
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E4F0C:  E0D8F9EB     BL $-0x189c78
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E4F10:  0400A0E1     MOV r0, r4
		   0x010E4F14:  0010A0E3     MOV r1, 0x0
		   0x010E4F18:  B74C3CEB     BL $+0xf132e4  // CALL → sub_1FF81FC
		   0x010E4F1C:  000050E3     CMPS r0, r0, 0x0
		   0x010E4F20:  0B00000A     BEQ $+0x34  // if (==) goto 0x010E4F54
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010E4F24:  244098E5     LDR r4, [r8, 0x24]
		   0x010E4F28:  000054E3     CMPS r0, r4, 0x0
		   0x010E4F2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4F34
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E4F30:  26D9F9EB     BL $-0x189b60
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E4F34:  844094E5     LDR r4, [r4, 0x84]
		   0x010E4F38:  000054E3     CMPS r0, r4, 0x0
		   0x010E4F3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4F44
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010E4F40:  22D9F9EB     BL $-0x189b70
		   // ──── Block 25 if (!=) ────────────────────
		   0x010E4F44:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E4F48:  050050E3     CMPS r0, r0, 0x5
		   0x010E4F4C:  0080A013     MOVNE r8, 0x0
		   0x010E4F50:  000000EA     B $+0x8  // goto 0x010E4F58
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x010E4F54:  0080A0E3     MOV r8, 0x0
		   // ──── Block 27 (from 2 paths) ──────────────────
		   0x010E4F58:  0800A0E1     MOV r0, r8
		   0x010E4F5C:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010E4F60:  E36E1403     TSTSEQ r6, r4, 0xe30
		   0x010E4F64:  F444F902     RSCSEQ r4, sb, 0xf4000000
		   0x010E4F68:  5817F902     RSCSEQ r1, sb, 0x1600000
		   0x010E4F6C:  4444F902     RSCSEQ r4, sb, 0x44000000
		   0x010E4F70:  7C16F902     RSCSEQ r1, sb, 0x7c00000
		*/
	}

	// RVA: 0x10E4F74 Offset: 0x10E4F74 VA: 0x10E4F74
	private void MergeWithAnimation(Item targetItem, Item draggedItem, Item newItem) {
		/* Disassembly (ARM32, 33 instructions, 0x84 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E4F74:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E4F78:  24D04DE2     SUB sp, sp, 0x24
		   0x010E4F7C:  D8409FE5     LDR r4, [pc, 0xd8]
		   0x010E4F80:  00B0A0E1     MOV fp, r0
		   0x010E4F84:  0380A0E1     MOV r8, r3
		   0x010E4F88:  0290A0E1     MOV sb, r2
		   0x010E4F8C:  04408FE0     ADD r4, pc, r4
		   0x010E4F90:  0150A0E1     MOV r5, r1
		   0x010E4F94:  0000D4E5     LDRB r0, [r4]
		   0x010E4F98:  000050E3     CMPS r0, r0, 0x0
		   0x010E4F9C:  0400001A     BNE $+0x18  // if (!=) goto 0x010E4FB4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E4FA0:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010E4FA4:  00009FE7     LDR r0, [pc, r0]
		   0x010E4FA8:  6CD8F9EB     BL $-0x189e48
		   0x010E4FAC:  0100A0E3     MOV r0, 0x1
		   0x010E4FB0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E4FB4:  000055E3     CMPS r0, r5, 0x0
		   0x010E4FB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4FC0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E4FBC:  03D9F9EB     BL $-0x189bec
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E4FC0:  0500A0E1     MOV r0, r5
		   0x010E4FC4:  0010A0E3     MOV r1, 0x0
		   0x010E4FC8:  00A0A0E3     MOV r10, 0x0
		   0x010E4FCC:  B64B3CEB     BL $+0xf12ee0  // CALL → sub_1FF7EAC
		   0x010E4FD0:  0040A0E1     MOV r4, r0
		   0x010E4FD4:  000050E3     CMPS r0, r0, 0x0
		   0x010E4FD8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E4FE0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E4FDC:  FBD8F9EB     BL $-0x189c0c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E4FE0:  10608DE2     ADD r6, sp, 0x10
		   0x010E4FE4:  0410A0E1     MOV r1, r4
		   0x010E4FE8:  0020A0E3     MOV r2, 0x0
		   0x010E4FEC:  0600A0E1     MOV r0, r6
		   0x010E4FF0:  6B4C3CEB     BL $+0xf131b4  // CALL → sub_1FF81A4
		   0x010E4FF4:  10308DE2     ADD r3, sp, 0x10
		*/
	}

	// RVA: 0x10E5068 Offset: 0x10E5068 VA: 0x10E5068
	private void MergeWithAnimation(Item targetItem, Item newItem) {
		/* Disassembly (ARM32, 161 instructions, 0x284 bytes):
		   // CFG: 20 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E5068:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E506C:  10D04DE2     SUB sp, sp, 0x10
		   0x010E5070:  38429FE5     LDR r4, [pc, 0x238]
		   0x010E5074:  0080A0E1     MOV r8, r0
		   0x010E5078:  0290A0E1     MOV sb, r2
		   0x010E507C:  0160A0E1     MOV r6, r1
		   0x010E5080:  04408FE0     ADD r4, pc, r4
		   0x010E5084:  0000D4E5     LDRB r0, [r4]
		   0x010E5088:  000050E3     CMPS r0, r0, 0x0
		   0x010E508C:  0A00001A     BNE $+0x30  // if (!=) goto 0x010E50BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E5090:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x010E5094:  00009FE7     LDR r0, [pc, r0]
		   0x010E5098:  30D8F9EB     BL $-0x189f38
		   0x010E509C:  14029FE5     LDR r0, [pc, 0x214]
		   0x010E50A0:  00009FE7     LDR r0, [pc, r0]
		   0x010E50A4:  2DD8F9EB     BL $-0x189f44
		   0x010E50A8:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x010E50AC:  00009FE7     LDR r0, [pc, r0]
		   0x010E50B0:  2AD8F9EB     BL $-0x189f50
		   0x010E50B4:  0100A0E3     MOV r0, 0x1
		   0x010E50B8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E50BC:  0000A0E3     MOV r0, 0x0
		   0x010E50C0:  0610A0E1     MOV r1, r6
		   0x010E50C4:  00008DE5     STR r0, [sp]
		   0x010E50C8:  0020A0E3     MOV r2, 0x0
		   0x010E50CC:  04008DE5     STR r0, [sp, 0x4]
		   0x010E50D0:  0030A0E3     MOV r3, 0x0
		   0x010E50D4:  08008DE5     STR r0, [sp, 0x8]
		   0x010E50D8:  0800A0E1     MOV r0, r8
		   0x010E50DC:  09F0FFEB     BL $-0x3fd4
		   0x010E50E0:  000059E3     CMPS r0, sb, 0x0
		   0x010E50E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E50EC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E50E8:  B8D8F9EB     BL $-0x189d18
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E50EC:  0900A0E1     MOV r0, sb
		   0x010E50F0:  0010A0E3     MOV r1, 0x0
		   0x010E50F4:  6C4B3CEB     BL $+0xf12db8  // CALL → sub_1FF7EAC
		   0x010E50F8:  C0419FE5     LDR r4, [pc, 0x1c0]
		   0x010E50FC:  0060A0E1     MOV r6, r0
		   0x010E5100:  04408FE0     ADD r4, pc, r4
		   0x010E5104:  0000D4E5     LDRB r0, [r4]
		   0x010E5108:  000050E3     CMPS r0, r0, 0x0
		   0x010E510C:  0400001A     BNE $+0x18  // if (!=) goto 0x010E5124
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E5110:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x010E5114:  00009FE7     LDR r0, [pc, r0]
		   0x010E5118:  10D8F9EB     BL $-0x189fb8
		   0x010E511C:  0100A0E3     MOV r0, 0x1
		   0x010E5120:  0000C4E5     STRB r0, [r4]
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E5124:  9CA19FE5     LDR r10, [pc, 0x19c]
		   0x010E5128:  000056E3     CMPS r0, r6, 0x0
		   0x010E512C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E5130:  00009AE5     LDR r0, [r10]
		   0x010E5134:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E5138:  007090E5     LDR r7, [r0]
		   0x010E513C:  300090E9     LDMIA r0, {r4, r5}
		   0x010E5140:  0000001A     BNE $+0x8  // if (!=) goto 0x010E5148
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E5144:  A1D8F9EB     BL $-0x189d74
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E5148:  0000A0E3     MOV r0, 0x0
		   0x010E514C:  0710A0E1     MOV r1, r7
		   0x010E5150:  00008DE5     STR r0, [sp]
		   0x010E5154:  0600A0E1     MOV r0, r6
		   0x010E5158:  0420A0E1     MOV r2, r4
		   0x010E515C:  0530A0E1     MOV r3, r5
		   0x010E5160:  024C3CEB     BL $+0xf13010  // CALL → sub_1FF8170
		   0x010E5164:  60419FE5     LDR r4, [pc, 0x160]
		   0x010E5168:  04408FE0     ADD r4, pc, r4
		   0x010E516C:  0000D4E5     LDRB r0, [r4]
		   0x010E5170:  000050E3     CMPS r0, r0, 0x0
		   0x010E5174:  0400001A     BNE $+0x18  // if (!=) goto 0x010E518C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E5178:  50019FE5     LDR r0, [pc, 0x150]
		   0x010E517C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5180:  F6D7F9EB     BL $-0x18a020
		   0x010E5184:  0100A0E3     MOV r0, 0x1
		   0x010E5188:  0000C4E5     STRB r0, [r4]
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E518C:  40019FE5     LDR r0, [pc, 0x140]
		   0x010E5190:  000059E3     CMPS r0, sb, 0x0
		   0x010E5194:  00009FE7     LDR r0, [pc, r0]
		   0x010E5198:  000090E5     LDR r0, [r0]
		   0x010E519C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E51A0:  D040C0E1     LDRD r4, r5, [r0]
		   0x010E51A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E51AC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E51A8:  88D8F9EB     BL $-0x189dd8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E51AC:  000099E5     LDR r0, [sb]
		   0x010E51B0:  0010A0E3     MOV r1, 0x0
		   0x010E51B4:  0420A0E1     MOV r2, r4
		   0x010E51B8:  0530A0E1     MOV r3, r5
		   0x010E51BC:  0070A0E3     MOV r7, 0x0
		   0x010E51C0:  306190E5     LDR r6, [r0, 0x130]
		   0x010E51C4:  340190E5     LDR r0, [r0, 0x134]
		   0x010E51C8:  00008DE5     STR r0, [sp]
		   0x010E51CC:  0900A0E1     MOV r0, sb
		   0x010E51D0:  36FF2FE1     BLX r6  // virtual call: vtable+0x130
		   0x010E51D4:  0900A0E1     MOV r0, sb
		   0x010E51D8:  0010A0E3     MOV r1, 0x0
		   0x010E51DC:  324B3CEB     BL $+0xf12cd0  // CALL → sub_1FF7EAC
		   0x010E51E0:  F0409FE5     LDR r4, [pc, 0xf0]
		   0x010E51E4:  0050A0E1     MOV r5, r0
		   0x010E51E8:  04408FE0     ADD r4, pc, r4
		   0x010E51EC:  0000D4E5     LDRB r0, [r4]
		   0x010E51F0:  000050E3     CMPS r0, r0, 0x0
		   0x010E51F4:  0400001A     BNE $+0x18  // if (!=) goto 0x010E520C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E51F8:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010E51FC:  00009FE7     LDR r0, [pc, r0]
		   0x010E5200:  D6D7F9EB     BL $-0x18a0a0
		   0x010E5204:  0100A0E3     MOV r0, 0x1
		   0x010E5208:  0000C4E5     STRB r0, [r4]
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E520C:  00009AE5     LDR r0, [r10]
		   0x010E5210:  CD6C0CE3     MOV r6, 0xcccd
		   0x010E5214:  CC6E43E3     MOVT r6, 0x3ecc
		   0x010E5218:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E521C:  0C3080E2     ADD r3, r0, 0xc
		   0x010E5220:  0500A0E1     MOV r0, r5
		   0x010E5224:  0E0093E8     LDM r3, {r1, r2, r3}
		   0x010E5228:  F060CDE1     STRD r6, r7, [sp]
		   0x010E522C:  A4B412EB     BL $+0x4ad298  // CALL → ShortcutExtensions.DOScale
		   0x010E5230:  A8109FE5     LDR r1, [pc, 0xa8]
		   0x010E5234:  01109FE7     LDR r1, [pc, r1]
		   0x010E5238:  002091E5     LDR r2, [r1]
		   0x010E523C:  1B10A0E3     MOV r1, 0x1b
		   0x010E5240:  984628EB     BL $+0xa11a68  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x010E5244:  98109FE5     LDR r1, [pc, 0x98]
		   0x010E5248:  01109FE7     LDR r1, [pc, r1]
		   0x010E524C:  002091E5     LDR r2, [r1]
		   0x010E5250:  CD1C0CE3     MOV r1, 0xcccd
		   0x010E5254:  CC1D43E3     MOVT r1, 0x3dcc
		   0x010E5258:  FA4528EB     BL $+0xa117f0  // CALL → TweenSettingsExtensions.SetDelay<object>
		   0x010E525C:  604098E5     LDR r4, [r8, 0x60]
		   0x010E5260:  000054E3     CMPS r0, r4, 0x0
		   0x010E5264:  0000001A     BNE $+0x8  // if (!=) goto 0x010E526C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E5268:  58D8F9EB     BL $-0x189e98
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E526C:  0400A0E1     MOV r0, r4
		   0x010E5270:  0010A0E3     MOV r1, 0x0
		   0x010E5274:  0020A0E3     MOV r2, 0x0
		   0x010E5278:  8B2F00EB     BL $+0xbe34  // CALL → GoalsController.UpdateGoals
		   0x010E527C:  64009FE5     LDR r0, [pc, 0x64]
		   0x010E5280:  00009FE7     LDR r0, [pc, r0]
		   0x010E5284:  000090E5     LDR r0, [r0]
		   0x010E5288:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E528C:  004090E5     LDR r4, [r0]
		   0x010E5290:  000054E3     CMPS r0, r4, 0x0
		   0x010E5294:  0000001A     BNE $+0x8  // if (!=) goto 0x010E529C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E5298:  4CD8F9EB     BL $-0x189ec8
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E529C:  0400A0E1     MOV r0, r4
		   0x010E52A0:  0010A0E3     MOV r1, 0x0
		   0x010E52A4:  10D08DE2     ADD sp, sp, 0x10
		   0x010E52A8:  F047BDE8     POP {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E52AC:  163111EA     B $+0x44c460  // TAIL CALL → FTUERewardsBox.FieldCellFreed
		   0x010E52B0:  256C1403     TSTSEQ r6, r4, 0x2500
		   0x010E52B4:  4C3EF902     RSCSEQ r3, sb, 0x4c0
		   0x010E52B8:  F435F902     RSCSEQ r3, sb, 0x3d000000
		   0x010E52BC:  EC2AF902     RSCSEQ r2, sb, 0xec000
		   0x010E52C0:  83681403     TSTSEQ r6, r4, 0x830000
		   0x010E52C4:  1C23F902     RSCSEQ r2, sb, 0x70000000
		   0x010E52C8:  0423F902     RSCSEQ r2, sb, 0x10000000
		   0x010E52CC:  CB661403     TSTSEQ r6, r4, 0xcb00000
		   0x010E52D0:  641CF902     RSCSEQ r1, sb, 0x6400
		   0x010E52D4:  4C1CF902     RSCSEQ r1, sb, 0x4c00
		   0x010E52D8:  CB691403     TSTSEQ r6, r4, 0x32c000
		   0x010E52DC:  3422F902     RSCSEQ r2, sb, 0x40000003
		   0x010E52E0:  6429F902     RSCSEQ r2, sb, 0x190000
		   0x010E52E4:  4C34F902     RSCSEQ r3, sb, 0x4c000000
		   0x010E52E8:  603CF902     RSCSEQ r3, sb, 0x6000
		*/
	}

	// RVA: 0x10E367C Offset: 0x10E367C VA: 0x10E367C
	private bool Swap(Cell targetCell, Item originItem) {
		/* Disassembly (ARM32, 168 instructions, 0x2A0 bytes):
		   // CFG: 32 blocks, 34 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E367C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E3680:  78429FE5     LDR r4, [pc, 0x278]
		   0x010E3684:  0090A0E1     MOV sb, r0
		   0x010E3688:  0250A0E1     MOV r5, r2
		   0x010E368C:  01A0A0E1     MOV r10, r1
		   0x010E3690:  04408FE0     ADD r4, pc, r4
		   0x010E3694:  0000D4E5     LDRB r0, [r4]
		   0x010E3698:  000050E3     CMPS r0, r0, 0x0
		   0x010E369C:  0A00001A     BNE $+0x30  // if (!=) goto 0x010E36CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E36A0:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x010E36A4:  00009FE7     LDR r0, [pc, r0]
		   0x010E36A8:  ACDEF9EB     BL $-0x188548
		   0x010E36AC:  54029FE5     LDR r0, [pc, 0x254]
		   0x010E36B0:  00009FE7     LDR r0, [pc, r0]
		   0x010E36B4:  A9DEF9EB     BL $-0x188554
		   0x010E36B8:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010E36BC:  00009FE7     LDR r0, [pc, r0]
		   0x010E36C0:  A6DEF9EB     BL $-0x188560
		   0x010E36C4:  0100A0E3     MOV r0, 0x1
		   0x010E36C8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E36CC:  3C629FE5     LDR r6, [pc, 0x23c]
		   0x010E36D0:  06609FE7     LDR r6, [pc, r6]
		   0x010E36D4:  000096E5     LDR r0, [r6]
		   0x010E36D8:  741090E5     LDR r1, [r0, 0x74]
		   0x010E36DC:  000051E3     CMPS r0, r1, 0x0
		   0x010E36E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E36E8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E36E4:  EADEF9EB     BL $-0x188450
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E36E8:  0500A0E1     MOV r0, r5
		   0x010E36EC:  0010A0E3     MOV r1, 0x0
		   0x010E36F0:  0020A0E3     MOV r2, 0x0
		   0x010E36F4:  0070A0E3     MOV r7, 0x0
		   0x010E36F8:  E7513CEB     BL $+0xf147a4  // CALL → sub_1FF7E9C
		   0x010E36FC:  000050E3     CMPS r0, r0, 0x0
		   0x010E3700:  7C00001A     BNE $+0x1f8  // if (!=) goto 0x010E38F8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E3704:  000055E3     CMPS r0, r5, 0x0
		   0x010E3708:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3710
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E370C:  2FDFF9EB     BL $-0x18833c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E3710:  000096E5     LDR r0, [r6]
		   0x010E3714:  104095E5     LDR r4, [r5, 0x10]
		   0x010E3718:  741090E5     LDR r1, [r0, 0x74]
		   0x010E371C:  000051E3     CMPS r0, r1, 0x0
		   0x010E3720:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3728
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E3724:  DADEF9EB     BL $-0x188490
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E3728:  0400A0E1     MOV r0, r4
		   0x010E372C:  0010A0E3     MOV r1, 0x0
		   0x010E3730:  0020A0E3     MOV r2, 0x0
		   0x010E3734:  0070A0E3     MOV r7, 0x0
		   0x010E3738:  D7513CEB     BL $+0xf14764  // CALL → sub_1FF7E9C
		   0x010E373C:  000050E3     CMPS r0, r0, 0x0
		   0x010E3740:  6C00001A     BNE $+0x1b8  // if (!=) goto 0x010E38F8
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E3744:  000096E5     LDR r0, [r6]
		   0x010E3748:  741090E5     LDR r1, [r0, 0x74]
		   0x010E374C:  000051E3     CMPS r0, r1, 0x0
		   0x010E3750:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3758
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E3754:  CEDEF9EB     BL $-0x1884c0
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E3758:  0A00A0E1     MOV r0, r10
		   0x010E375C:  0010A0E3     MOV r1, 0x0
		   0x010E3760:  0020A0E3     MOV r2, 0x0
		   0x010E3764:  0070A0E3     MOV r7, 0x0
		   0x010E3768:  CB513CEB     BL $+0xf14734  // CALL → sub_1FF7E9C
		   0x010E376C:  000050E3     CMPS r0, r0, 0x0
		   0x010E3770:  6000001A     BNE $+0x188  // if (!=) goto 0x010E38F8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E3774:  00005AE3     CMPS r0, r10, 0x0
		   0x010E3778:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3780
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E377C:  13DFF9EB     BL $-0x1883ac
		   // ──── Block 15 if (!=) ────────────────────
		   0x010E3780:  000096E5     LDR r0, [r6]
		   0x010E3784:  24409AE5     LDR r4, [r10, 0x24]
		   0x010E3788:  741090E5     LDR r1, [r0, 0x74]
		   0x010E378C:  000051E3     CMPS r0, r1, 0x0
		   0x010E3790:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3798
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010E3794:  BEDEF9EB     BL $-0x188500
		   // ──── Block 17 if (!=) ────────────────────
		   0x010E3798:  0400A0E1     MOV r0, r4
		   0x010E379C:  0010A0E3     MOV r1, 0x0
		   0x010E37A0:  0020A0E3     MOV r2, 0x0
		   0x010E37A4:  0070A0E3     MOV r7, 0x0
		   0x010E37A8:  BB513CEB     BL $+0xf146f4  // CALL → sub_1FF7E9C
		   0x010E37AC:  000050E3     CMPS r0, r0, 0x0
		   0x010E37B0:  5000001A     BNE $+0x148  // if (!=) goto 0x010E38F8
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010E37B4:  24409AE5     LDR r4, [r10, 0x24]
		   0x010E37B8:  000054E3     CMPS r0, r4, 0x0
		   0x010E37BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E37C4
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E37C0:  02DFF9EB     BL $-0x1883f0
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E37C4:  0400A0E1     MOV r0, r4
		   0x010E37C8:  0010A0E3     MOV r1, 0x0
		   0x010E37CC:  0070A0E3     MOV r7, 0x0
		   0x010E37D0:  299700EB     BL $+0x25cac  // CALL → Item.get_interactable
		   0x010E37D4:  000050E3     CMPS r0, r0, 0x0
		   0x010E37D8:  4600000A     BEQ $+0x120  // if (==) goto 0x010E38F8
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010E37DC:  000095E5     LDR r0, [r5]
		   0x010E37E0:  0A10A0E1     MOV r1, r10
		   0x010E37E4:  0020A0E3     MOV r2, 0x0
		   0x010E37E8:  108095E5     LDR r8, [r5, 0x10]
		   0x010E37EC:  24709AE5     LDR r7, [r10, 0x24]
		   0x010E37F0:  086190E5     LDR r6, [r0, 0x108]
		   0x010E37F4:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010E37F8:  0500A0E1     MOV r0, r5
		   0x010E37FC:  36FF2FE1     BLX r6  // virtual call: vtable+0x108
		   0x010E3800:  0A00A0E1     MOV r0, r10
		   0x010E3804:  0510A0E1     MOV r1, r5
		   0x010E3808:  1CA5FFEB     BL $-0x16b88
		   0x010E380C:  000095E5     LDR r0, [r5]
		   0x010E3810:  0A10A0E1     MOV r1, r10
		   0x010E3814:  0020A0E3     MOV r2, 0x0
		   0x010E3818:  486190E5     LDR r6, [r0, 0x148]
		   0x010E381C:  4C3190E5     LDR r3, [r0, 0x14c]
		   0x010E3820:  0500A0E1     MOV r0, r5
		   0x010E3824:  36FF2FE1     BLX r6  // virtual call: vtable+0x148
		   0x010E3828:  000057E3     CMPS r0, r7, 0x0
		   0x010E382C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3834
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E3830:  E6DEF9EB     BL $-0x188460
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E3834:  000097E5     LDR r0, [r7]
		   0x010E3838:  0810A0E1     MOV r1, r8
		   0x010E383C:  0020A0E3     MOV r2, 0x0
		   0x010E3840:  086190E5     LDR r6, [r0, 0x108]
		   0x010E3844:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010E3848:  0700A0E1     MOV r0, r7
		   0x010E384C:  36FF2FE1     BLX r6  // virtual call: vtable+0x108
		   0x010E3850:  000058E3     CMPS r0, r8, 0x0
		   0x010E3854:  0000001A     BNE $+0x8  // if (!=) goto 0x010E385C
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010E3858:  DCDEF9EB     BL $-0x188488
		   // ──── Block 25 if (!=) ────────────────────
		   0x010E385C:  0800A0E1     MOV r0, r8
		   0x010E3860:  0710A0E1     MOV r1, r7
		   0x010E3864:  05A5FFEB     BL $-0x16be4
		   0x010E3868:  000097E5     LDR r0, [r7]
		   0x010E386C:  0810A0E1     MOV r1, r8
		   0x010E3870:  0020A0E3     MOV r2, 0x0
		   0x010E3874:  486190E5     LDR r6, [r0, 0x148]
		   0x010E3878:  4C3190E5     LDR r3, [r0, 0x14c]
		   0x010E387C:  0700A0E1     MOV r0, r7
		   0x010E3880:  36FF2FE1     BLX r6  // virtual call: vtable+0x148
		   0x010E3884:  0900A0E1     MOV r0, sb
		   0x010E3888:  0510A0E1     MOV r1, r5
		   0x010E388C:  49C2FFEB     BL $-0xf6d4
		   0x010E3890:  0900A0E1     MOV r0, sb
		   0x010E3894:  0710A0E1     MOV r1, r7
		   0x010E3898:  46C2FFEB     BL $-0xf6e0
		   0x010E389C:  70409FE5     LDR r4, [pc, 0x70]
		   0x010E38A0:  04409FE7     LDR r4, [pc, r4]
		   0x010E38A4:  000094E5     LDR r0, [r4]
		   0x010E38A8:  741090E5     LDR r1, [r0, 0x74]
		   0x010E38AC:  000051E3     CMPS r0, r1, 0x0
		   0x010E38B0:  0100001A     BNE $+0xc  // if (!=) goto 0x010E38BC
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010E38B4:  76DEF9EB     BL $-0x188620
		   0x010E38B8:  000094E5     LDR r0, [r4]
		   // ──── Block 27 if (!=) ────────────────────
		   0x010E38BC:  54109FE5     LDR r1, [pc, 0x54]
		   0x010E38C0:  01109FE7     LDR r1, [pc, r1]
		   0x010E38C4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E38C8:  001091E5     LDR r1, [r1]
		   0x010E38CC:  2C4090E5     LDR r4, [r0, 0x2c]
		   0x010E38D0:  742091E5     LDR r2, [r1, 0x74]
		   0x010E38D4:  000052E3     CMPS r0, r2, 0x0
		   0x010E38D8:  0100001A     BNE $+0xc  // if (!=) goto 0x010E38E4
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010E38DC:  0100A0E1     MOV r0, r1
		   0x010E38E0:  6BDEF9EB     BL $-0x18864c
		   // ──── Block 29 if (!=) ────────────────────
		   0x010E38E4:  0400A0E1     MOV r0, r4
		   0x010E38E8:  FE15A0E3     MOV r1, 0x3f800000
		   0x010E38EC:  0020A0E3     MOV r2, 0x0
		   0x010E38F0:  5BEC03EB     BL $+0xfb174  // CALL → SoundController.PlaySound
		   0x010E38F4:  0170A0E3     MOV r7, 0x1
		   // ──── Block 30 (from 5 paths) ──────────────────
		   0x010E38F8:  0700A0E1     MOV r0, r7
		   0x010E38FC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010E3900:  16861403     TSTSEQ r8, r4, 0x1600000
		   0x010E3904:  942EF902     RSCSEQ r2, sb, 0x940
		   0x010E3908:  9050F902     RSCSEQ r5, sb, 0x90
		   0x010E390C:  8850F902     RSCSEQ r5, sb, 0x88
		   0x010E3910:  682EF902     RSCSEQ r2, sb, 0x680
		   0x010E3914:  A44EF902     RSCSEQ r4, sb, 0xa40
		   0x010E3918:  804EF902     RSCSEQ r4, sb, 0x800
		*/
	}

	// RVA: 0x10E52EC Offset: 0x10E52EC VA: 0x10E52EC
	private void RemoveID(int id) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E52EC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010E52F0:  3C5090E5     LDR r5, [r0, 0x3c]
		   0x010E52F4:  0140A0E1     MOV r4, r1
		   0x010E52F8:  000055E3     CMPS r0, r5, 0x0
		   0x010E52FC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E5304
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E5300:  32D8F9EB     BL $-0x189f30
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E5304:  0500A0E1     MOV r0, r5
		   0x010E5308:  0410A0E1     MOV r1, r4
		   0x010E530C:  0020A0E3     MOV r2, 0x0
		   0x010E5310:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010E5314:  7F5101EA     B $+0x54604  // TAIL CALL → GameStateSave.RemoveByID
		*/
	}

	// RVA: 0x10E1108 Offset: 0x10E1108 VA: 0x10E1108
	private void RemoveItem(Item item, Nullable<Vector3> mergePos, bool skipAnimation = false) {
		/* Disassembly (ARM32, 93 instructions, 0x174 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E1108:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E110C:  14D04DE2     SUB sp, sp, 0x14
		   0x010E1110:  04308DE5     STR r3, [sp, 0x4]
		   0x010E1114:  0060A0E1     MOV r6, r0
		   0x010E1118:  48519FE5     LDR r5, [pc, 0x148]
		   0x010E111C:  02B0A0E1     MOV fp, r2
		   0x010E1120:  3C909DE5     LDR sb, [sp, 0x3c]
		   0x010E1124:  0140A0E1     MOV r4, r1
		   0x010E1128:  05508FE0     ADD r5, pc, r5
		   0x010E112C:  38A09DE5     LDR r10, [sp, 0x38]
		   0x010E1130:  40809DE5     LDR r8, [sp, 0x40]
		   0x010E1134:  0000D5E5     LDRB r0, [r5]
		   0x010E1138:  000050E3     CMPS r0, r0, 0x0
		   0x010E113C:  0A00001A     BNE $+0x30  // if (!=) goto 0x010E116C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E1140:  24019FE5     LDR r0, [pc, 0x124]
		   0x010E1144:  00009FE7     LDR r0, [pc, r0]
		   0x010E1148:  04E8F9EB     BL $-0x185fe8
		   0x010E114C:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x010E1150:  00009FE7     LDR r0, [pc, r0]
		   0x010E1154:  01E8F9EB     BL $-0x185ff4
		   0x010E1158:  14019FE5     LDR r0, [pc, 0x114]
		   0x010E115C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1160:  FEE7F9EB     BL $-0x186000
		   0x010E1164:  0100A0E3     MOV r0, 0x1
		   0x010E1168:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E116C:  000054E3     CMPS r0, r4, 0x0
		   0x010E1170:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1178
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E1174:  95E8F9EB     BL $-0x185da4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E1178:  000094E5     LDR r0, [r4]
		   0x010E117C:  502190E5     LDR r2, [r0, 0x150]
		   0x010E1180:  541190E5     LDR r1, [r0, 0x154]
		   0x010E1184:  0400A0E1     MOV r0, r4
		   0x010E1188:  32FF2FE1     BLX r2  // virtual call: vtable+0x150
		   0x010E118C:  3C5096E5     LDR r5, [r6, 0x3c]
		   0x010E1190:  347094E5     LDR r7, [r4, 0x34]
		   0x010E1194:  000055E3     CMPS r0, r5, 0x0
		   0x010E1198:  0000001A     BNE $+0x8  // if (!=) goto 0x010E11A0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E119C:  8BE8F9EB     BL $-0x185dcc
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E11A0:  0500A0E1     MOV r0, r5
		   0x010E11A4:  0710A0E1     MOV r1, r7
		   0x010E11A8:  0020A0E3     MOV r2, 0x0
		   0x010E11AC:  D96101EB     BL $+0x5876c  // CALL → GameStateSave.RemoveByID
		   0x010E11B0:  545096E5     LDR r5, [r6, 0x54]
		   0x010E11B4:  000055E3     CMPS r0, r5, 0x0
		   0x010E11B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E11C0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E11BC:  83E8F9EB     BL $-0x185dec
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E11C0:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010E11C4:  0410A0E1     MOV r1, r4
		   0x010E11C8:  00009FE7     LDR r0, [pc, r0]
		   0x010E11CC:  002090E5     LDR r2, [r0]
		   0x010E11D0:  0500A0E1     MOV r0, r5
		   0x010E11D4:  344C6CEB     BL $+0x1b130d8  // CALL → List<object>.Remove
		   0x010E11D8:  000058E3     CMPS r0, r8, 0x0
		   0x010E11DC:  0600000A     BEQ $+0x20  // if (==) goto 0x010E11FC
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010E11E0:  000094E5     LDR r0, [r4]
		   0x010E11E4:  702190E5     LDR r2, [r0, 0x170]
		   0x010E11E8:  741190E5     LDR r1, [r0, 0x174]
		   0x010E11EC:  0400A0E1     MOV r0, r4
		   0x010E11F0:  14D08DE2     ADD sp, sp, 0x14
		   0x010E11F4:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E11F8:  12FF2FE1     BX r2
		   // ──── Block 10 if (==) ────────────────────
		   0x010E11FC:  04109DE5     LDR r1, [sp, 0x4]
		   0x010E1200:  FF001BE3     TSTS r0, fp, 0xff
		   0x010E1204:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E1240
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E1208:  0400A0E1     MOV r0, r4
		   0x010E120C:  0010A0E3     MOV r1, 0x0
		   0x010E1210:  255B3CEB     BL $+0xf16c9c  // CALL → sub_1FF7EAC
		   0x010E1214:  0050A0E1     MOV r5, r0
		   0x010E1218:  000050E3     CMPS r0, r0, 0x0
		   0x010E121C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1224
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E1220:  6AE8F9EB     BL $-0x185e50
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E1224:  08008DE2     ADD r0, sp, 0x8
		   0x010E1228:  0510A0E1     MOV r1, r5
		   0x010E122C:  0020A0E3     MOV r2, 0x0
		   0x010E1230:  DB5B3CEB     BL $+0xf16f74  // CALL → sub_1FF81A4
		   0x010E1234:  08109DE5     LDR r1, [sp, 0x8]
		   0x010E1238:  0CA09DE5     LDR r10, [sp, 0xc]
		   0x010E123C:  10909DE5     LDR sb, [sp, 0x10]
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E1240:  000094E5     LDR r0, [r4]
		   0x010E1244:  0A20A0E1     MOV r2, r10
		   0x010E1248:  0930A0E1     MOV r3, sb
		   0x010E124C:  687190E5     LDR r7, [r0, 0x168]
		   0x010E1250:  6C0190E5     LDR r0, [r0, 0x16c]
		   0x010E1254:  00008DE5     STR r0, [sp]
		   0x010E1258:  0400A0E1     MOV r0, r4
		   0x010E125C:  37FF2FE1     BLX r7  // virtual call: vtable+0x168
		   0x010E1260:  14D08DE2     ADD sp, sp, 0x14
		   0x010E1264:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010E1268:  7FAB1403     TSTSEQ r10, r4, 0x1fc00
		   0x010E126C:  A47DF902     RSCSEQ r7, sb, 0x2900
		   0x010E1270:  9880F902     RSCSEQ r8, sb, 0x98
		   0x010E1274:  9080F902     RSCSEQ r8, sb, 0x90
		   0x010E1278:  207DF902     RSCSEQ r7, sb, 0x800
		*/
	}

	// RVA: 0x10E127C Offset: 0x10E127C VA: 0x10E127C
	private void DestroyItemsFromField() {
		/* Disassembly (ARM32, 32 instructions, 0x80 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E127C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E1280:  24D04DE2     SUB sp, sp, 0x24
		   0x010E1284:  74439FE5     LDR r4, [pc, 0x374]
		   0x010E1288:  0080A0E1     MOV r8, r0
		   0x010E128C:  04408FE0     ADD r4, pc, r4
		   0x010E1290:  0000D4E5     LDRB r0, [r4]
		   0x010E1294:  000050E3     CMPS r0, r0, 0x0
		   0x010E1298:  1600001A     BNE $+0x60  // if (!=) goto 0x010E12F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E129C:  60039FE5     LDR r0, [pc, 0x360]
		   0x010E12A0:  00009FE7     LDR r0, [pc, r0]
		   0x010E12A4:  ADE7F9EB     BL $-0x186144
		   0x010E12A8:  58039FE5     LDR r0, [pc, 0x358]
		   0x010E12AC:  00009FE7     LDR r0, [pc, r0]
		   0x010E12B0:  AAE7F9EB     BL $-0x186150
		   0x010E12B4:  50039FE5     LDR r0, [pc, 0x350]
		   0x010E12B8:  00009FE7     LDR r0, [pc, r0]
		   0x010E12BC:  A7E7F9EB     BL $-0x18615c
		   0x010E12C0:  48039FE5     LDR r0, [pc, 0x348]
		   0x010E12C4:  00009FE7     LDR r0, [pc, r0]
		   0x010E12C8:  A4E7F9EB     BL $-0x186168
		   0x010E12CC:  40039FE5     LDR r0, [pc, 0x340]
		   0x010E12D0:  00009FE7     LDR r0, [pc, r0]
		   0x010E12D4:  A1E7F9EB     BL $-0x186174
		   0x010E12D8:  38039FE5     LDR r0, [pc, 0x338]
		   0x010E12DC:  00009FE7     LDR r0, [pc, r0]
		   0x010E12E0:  9EE7F9EB     BL $-0x186180
		   0x010E12E4:  30039FE5     LDR r0, [pc, 0x330]
		   0x010E12E8:  00009FE7     LDR r0, [pc, r0]
		   0x010E12EC:  9BE7F9EB     BL $-0x18618c
		   0x010E12F0:  0100A0E3     MOV r0, 0x1
		   0x010E12F4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E12F8:  544098E5     LDR r4, [r8, 0x54]
		*/
	}

	// RVA: 0x10D2E9C Offset: 0x10D2E9C VA: 0x10D2E9C
	public void ItemToInventory(Item item, int place) {
		/* Disassembly (ARM32, 95 instructions, 0x17C bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D2E9C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010D2EA0:  08D04DE2     SUB sp, sp, 0x8
		   0x010D2EA4:  48619FE5     LDR r6, [pc, 0x148]
		   0x010D2EA8:  0050A0E1     MOV r5, r0
		   0x010D2EAC:  0280A0E1     MOV r8, r2
		   0x010D2EB0:  0140A0E1     MOV r4, r1
		   0x010D2EB4:  06608FE0     ADD r6, pc, r6
		   0x010D2EB8:  0000D6E5     LDRB r0, [r6]
		   0x010D2EBC:  000050E3     CMPS r0, r0, 0x0
		   0x010D2EC0:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010D2EFC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D2EC4:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x010D2EC8:  00009FE7     LDR r0, [pc, r0]
		   0x010D2ECC:  A320FAEB     BL $-0x177d6c
		   0x010D2ED0:  24019FE5     LDR r0, [pc, 0x124]
		   0x010D2ED4:  00009FE7     LDR r0, [pc, r0]
		   0x010D2ED8:  A020FAEB     BL $-0x177d78
		   0x010D2EDC:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x010D2EE0:  00009FE7     LDR r0, [pc, r0]
		   0x010D2EE4:  9D20FAEB     BL $-0x177d84
		   0x010D2EE8:  14019FE5     LDR r0, [pc, 0x114]
		   0x010D2EEC:  00009FE7     LDR r0, [pc, r0]
		   0x010D2EF0:  9A20FAEB     BL $-0x177d90
		   0x010D2EF4:  0100A0E3     MOV r0, 0x1
		   0x010D2EF8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D2EFC:  04019FE5     LDR r0, [pc, 0x104]
		   0x010D2F00:  00009FE7     LDR r0, [pc, r0]
		   0x010D2F04:  000090E5     LDR r0, [r0]
		   0x010D2F08:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D2F0C:  006090E5     LDR r6, [r0]
		   0x010D2F10:  000056E3     CMPS r0, r6, 0x0
		   0x010D2F14:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2F1C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D2F18:  2C21FAEB     BL $-0x177b48
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D2F1C:  0600A0E1     MOV r0, r6
		   0x010D2F20:  0010A0E3     MOV r1, 0x0
		   0x010D2F24:  005011EB     BL $+0x454008  // CALL → FTUEFirstController.TryCallAfterMoveItemToInventory
		   0x010D2F28:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010D2F2C:  00009FE7     LDR r0, [pc, r0]
		   0x010D2F30:  000090E5     LDR r0, [r0]
		   0x010D2F34:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D2F38:  086090E5     LDR r6, [r0, 0x8]
		   0x010D2F3C:  000056E3     CMPS r0, r6, 0x0
		   0x010D2F40:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2F48
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D2F44:  2121FAEB     BL $-0x177b74
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D2F48:  000096E5     LDR r0, [r6]
		   0x010D2F4C:  D02FC0E1     LDRD r2, r3, [r0, 0xf0]
		   0x010D2F50:  0600A0E1     MOV r0, r6
		   0x010D2F54:  0310A0E1     MOV r1, r3
		   0x010D2F58:  32FF2FE1     BLX r2
		   0x010D2F5C:  3C7095E5     LDR r7, [r5, 0x3c]
		   0x010D2F60:  000054E3     CMPS r0, r4, 0x0
		   0x010D2F64:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2F6C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D2F68:  1821FAEB     BL $-0x177b98
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D2F6C:  346094E5     LDR r6, [r4, 0x34]
		   0x010D2F70:  000057E3     CMPS r0, r7, 0x0
		   0x010D2F74:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2F7C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D2F78:  1421FAEB     BL $-0x177ba8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D2F7C:  0000A0E3     MOV r0, 0x0
		   0x010D2F80:  0610A0E1     MOV r1, r6
		   0x010D2F84:  00008DE5     STR r0, [sp]
		   0x010D2F88:  0700A0E1     MOV r0, r7
		   0x010D2F8C:  0820A0E1     MOV r2, r8
		   0x010D2F90:  0130A0E3     MOV r3, 0x1
		   0x010D2F94:  E29A01EB     BL $+0x66b90  // CALL → GameStateSave.MoveToInventoryByID
		   0x010D2F98:  545095E5     LDR r5, [r5, 0x54]
		   0x010D2F9C:  000055E3     CMPS r0, r5, 0x0
		   0x010D2FA0:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2FA8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010D2FA4:  0921FAEB     BL $-0x177bd4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010D2FA8:  60009FE5     LDR r0, [pc, 0x60]
		   0x010D2FAC:  0410A0E1     MOV r1, r4
		   0x010D2FB0:  00009FE7     LDR r0, [pc, r0]
		   0x010D2FB4:  002090E5     LDR r2, [r0]
		   0x010D2FB8:  0500A0E1     MOV r0, r5
		   0x010D2FBC:  BA846CEB     BL $+0x1b212f0  // CALL → List<object>.Remove
		   0x010D2FC0:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010D2FC4:  00009FE7     LDR r0, [pc, r0]
		   0x010D2FC8:  000090E5     LDR r0, [r0]
		   0x010D2FCC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010D2FD0:  004090E5     LDR r4, [r0]
		   0x010D2FD4:  000054E3     CMPS r0, r4, 0x0
		   0x010D2FD8:  0000001A     BNE $+0x8  // if (!=) goto 0x010D2FE0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010D2FDC:  FB20FAEB     BL $-0x177c0c
		   // ──── Block 14 if (!=) ────────────────────
		   0x010D2FE0:  0400A0E1     MOV r0, r4
		   0x010D2FE4:  0010A0E3     MOV r1, 0x0
		   0x010D2FE8:  08D08DE2     ADD sp, sp, 0x8
		   0x010D2FEC:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x010D2FF0:  C57911EA     B $+0x45e71c  // TAIL CALL → FTUERewardsBox.FieldCellFreed
		   0x010D2FF4:  F58D1503     TSTSEQ r8, r5, 0x3d40
		   0x010D2FF8:  1460FA02     RSCSEQ r6, r10, 0x14
		   0x010D2FFC:  0C60FA02     RSCSEQ r6, r10, 0xc
		   0x010D3000:  0460FA02     RSCSEQ r6, r10, 0x4
		   0x010D3004:  FC5FFA02     RSCSEQ r5, r10, 0x3f0
		   0x010D3008:  DC5FFA02     RSCSEQ r5, r10, 0x370
		   0x010D300C:  B85FFA02     RSCSEQ r5, r10, 0x2e0
		   0x010D3010:  385FFA02     RSCSEQ r5, r10, 0xe0
		   0x010D3014:  1C5FFA02     RSCSEQ r5, r10, 0x70
		*/
	}

	// RVA: 0x10D3BFC Offset: 0x10D3BFC VA: 0x10D3BFC
	public void ItemFromInventory(Item item) {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 15 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D3BFC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D3C00:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x010D3C04:  0080A0E1     MOV r8, r0
		   0x010D3C08:  0150A0E1     MOV r5, r1
		   0x010D3C0C:  04408FE0     ADD r4, pc, r4
		   0x010D3C10:  0000D4E5     LDRB r0, [r4]
		   0x010D3C14:  000050E3     CMPS r0, r0, 0x0
		   0x010D3C18:  0400001A     BNE $+0x18  // if (!=) goto 0x010D3C30
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D3C1C:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010D3C20:  00009FE7     LDR r0, [pc, r0]
		   0x010D3C24:  4D1DFAEB     BL $-0x178ac4
		   0x010D3C28:  0100A0E3     MOV r0, 0x1
		   0x010D3C2C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D3C30:  3C6098E5     LDR r6, [r8, 0x3c]
		   0x010D3C34:  000055E3     CMPS r0, r5, 0x0
		   0x010D3C38:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3C40
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010D3C3C:  E31DFAEB     BL $-0x17886c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010D3C40:  347095E5     LDR r7, [r5, 0x34]
		   0x010D3C44:  000056E3     CMPS r0, r6, 0x0
		   0x010D3C48:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3C50
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010D3C4C:  DF1DFAEB     BL $-0x17887c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010D3C50:  0600A0E1     MOV r0, r6
		   0x010D3C54:  0710A0E1     MOV r1, r7
		   0x010D3C58:  0020A0E3     MOV r2, 0x0
		   0x010D3C5C:  A09801EB     BL $+0x66288  // CALL → GameStateSave.MoveFromInventoryByID
		   0x010D3C60:  546098E5     LDR r6, [r8, 0x54]
		   0x010D3C64:  000056E3     CMPS r0, r6, 0x0
		   0x010D3C68:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3C70
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010D3C6C:  D71DFAEB     BL $-0x17889c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010D3C70:  100096E5     LDR r0, [r6, 0x10]
		   0x010D3C74:  087096E5     LDR r7, [r6, 0x8]
		   0x010D3C78:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010D3C7C:  010080E2     ADD r0, r0, 0x1
		   0x010D3C80:  6C109FE5     LDR r1, [pc, 0x6c]
		   0x010D3C84:  000057E3     CMPS r0, r7, 0x0
		   0x010D3C88:  01109FE7     LDR r1, [pc, r1]
		   0x010D3C8C:  100086E5     STR r0, [r6, 0x10]
		   0x010D3C90:  009091E5     LDR sb, [r1]
		   0x010D3C94:  0000001A     BNE $+0x8  // if (!=) goto 0x010D3C9C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010D3C98:  CC1DFAEB     BL $-0x1788c8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010D3C9C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010D3CA0:  000054E1     CMPS r0, r4, r0
		   0x010D3CA4:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x010D3CBC
		   // 
		   // ──── Block 11 else (< (unsigned)) ────────────────────
		   0x010D3CA8:  010084E2     ADD r0, r4, 0x1
		   0x010D3CAC:  0C0086E5     STR r0, [r6, 0xc]
		   0x010D3CB0:  040187E0     ADD r0, r7, r4, lsl 2
		   0x010D3CB4:  105080E5     STR r5, [r0, 0x10]
		   0x010D3CB8:  050000EA     B $+0x1c  // goto 0x010D3CD4
		   // ──── Block 12 if (>= (unsigned)) ────────────────────
		   0x010D3CBC:  100099E5     LDR r0, [sb, 0x10]
		   0x010D3CC0:  0510A0E1     MOV r1, r5
		   0x010D3CC4:  600090E5     LDR r0, [r0, 0x60]
		   0x010D3CC8:  382090E5     LDR r2, [r0, 0x38]
		   0x010D3CCC:  0600A0E1     MOV r0, r6
		   0x010D3CD0:  B97B6CEB     BL $+0x1b1eeec  // CALL → List<object>.AddWithResize
		   // ──── Block 13 ──────────────────────────────
		   0x010D3CD4:  0000A0E3     MOV r0, 0x0
		   0x010D3CD8:  C6D300EB     BL $+0x34f20  // CALL → ContainerDataStorage.get_EnergyConsumptionMode
		   0x010D3CDC:  0010A0E1     MOV r1, r0
		   0x010D3CE0:  0800A0E1     MOV r0, r8
		   0x010D3CE4:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010D3CE8:  253000EA     B $+0xc09c  // TAIL CALL → GameState.UpdateContainersEnergyConsumptionMode
		   0x010D3CEC:  9E801503     TSTSEQ r8, r5, 0x9e
		   0x010D3CF0:  0053FA02     RSCSEQ r5, r10, 0x0
		   0x010D3CF4:  9852FA02     RSCSEQ r5, r10, 0x80000009
		*/
	}

	// RVA: 0x10D4248 Offset: 0x10D4248 VA: 0x10D4248
	public void MoveItemInsideInventory(int itemID, int place) {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D4248:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D424C:  08D04DE2     SUB sp, sp, 0x8
		   0x010D4250:  3C6090E5     LDR r6, [r0, 0x3c]
		   0x010D4254:  0240A0E1     MOV r4, r2
		   0x010D4258:  0150A0E1     MOV r5, r1
		   0x010D425C:  000056E3     CMPS r0, r6, 0x0
		   0x010D4260:  0000001A     BNE $+0x8  // if (!=) goto 0x010D4268
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D4264:  591CFAEB     BL $-0x178e94
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D4268:  0000A0E3     MOV r0, 0x0
		   0x010D426C:  0510A0E1     MOV r1, r5
		   0x010D4270:  00008DE5     STR r0, [sp]
		   0x010D4274:  0600A0E1     MOV r0, r6
		   0x010D4278:  0420A0E1     MOV r2, r4
		   0x010D427C:  0030A0E3     MOV r3, 0x0
		   0x010D4280:  279601EB     BL $+0x658a4  // CALL → GameStateSave.MoveToInventoryByID
		   0x010D4284:  08D08DE2     ADD sp, sp, 0x8
		   0x010D4288:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x10E5318 Offset: 0x10E5318 VA: 0x10E5318
	public ItemData[] ConvertItemsFromConfig(ConfigItemID[] items) {
		/* Disassembly (ARM32, 79 instructions, 0x13C bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E5318:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010E531C:  0C619FE5     LDR r6, [pc, 0x10c]
		   0x010E5320:  0050A0E1     MOV r5, r0
		   0x010E5324:  0140A0E1     MOV r4, r1
		   0x010E5328:  06608FE0     ADD r6, pc, r6
		   0x010E532C:  0000D6E5     LDRB r0, [r6]
		   0x010E5330:  000050E3     CMPS r0, r0, 0x0
		   0x010E5334:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E5370
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E5338:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x010E533C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5340:  86D7F9EB     BL $-0x18a1e0
		   0x010E5344:  EC009FE5     LDR r0, [pc, 0xec]
		   0x010E5348:  00009FE7     LDR r0, [pc, r0]
		   0x010E534C:  83D7F9EB     BL $-0x18a1ec
		   0x010E5350:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x010E5354:  00009FE7     LDR r0, [pc, r0]
		   0x010E5358:  80D7F9EB     BL $-0x18a1f8
		   0x010E535C:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010E5360:  00009FE7     LDR r0, [pc, r0]
		   0x010E5364:  7DD7F9EB     BL $-0x18a204
		   0x010E5368:  0100A0E3     MOV r0, 0x1
		   0x010E536C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E5370:  000054E3     CMPS r0, r4, 0x0
		   0x010E5374:  1200000A     BEQ $+0x50  // if (==) goto 0x010E53C4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E5378:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010E537C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5380:  000090E5     LDR r0, [r0]
		   0x010E5384:  0ED8F9EB     BL $-0x189fc0
		   0x010E5388:  0060A0E1     MOV r6, r0
		   0x010E538C:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010E5390:  0510A0E1     MOV r1, r5
		   0x010E5394:  0030A0E3     MOV r3, 0x0
		   0x010E5398:  00009FE7     LDR r0, [pc, r0]
		   0x010E539C:  002090E5     LDR r2, [r0]
		   0x010E53A0:  0600A0E1     MOV r0, r6
		   0x010E53A4:  BDA350EB     BL $+0x1428efc  // CALL → Converter<object, object>..ctor
		   0x010E53A8:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010E53AC:  0610A0E1     MOV r1, r6
		   0x010E53B0:  00009FE7     LDR r0, [pc, r0]
		   0x010E53B4:  002090E5     LDR r2, [r0]
		   0x010E53B8:  0400A0E1     MOV r0, r4
		   0x010E53BC:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010E53C0:  8D0729EA     B $+0xa41e3c  // TAIL CALL → Array.ConvertAll<object, object>
		   // ──── Block 4 if (==) ────────────────────
		   0x010E53C4:  78009FE5     LDR r0, [pc, 0x78]
		   0x010E53C8:  00009FE7     LDR r0, [pc, r0]
		   0x010E53CC:  004090E5     LDR r4, [r0]
		   0x010E53D0:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010E53D4:  000050E3     CMPS r0, r0, 0x0
		   0x010E53D8:  0200001A     BNE $+0x10  // if (!=) goto 0x010E53E8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E53DC:  0400A0E1     MOV r0, r4
		   0x010E53E0:  CBC5FAEB     BL $-0x14e8cc
		   0x010E53E4:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E53E8:  080090E5     LDR r0, [r0, 0x8]
		   0x010E53EC:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x010E53F0:  010011E3     TSTS r0, r1, 0x1
		   0x010E53F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E53FC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E53F8:  AEC5FAEB     BL $-0x14e940
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E53FC:  741090E5     LDR r1, [r0, 0x74]
		   0x010E5400:  000051E3     CMPS r0, r1, 0x0
		   0x010E5404:  0000001A     BNE $+0x8  // if (!=) goto 0x010E540C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E5408:  A1D7F9EB     BL $-0x18a174
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E540C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010E5410:  080090E5     LDR r0, [r0, 0x8]
		   0x010E5414:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x010E5418:  010011E3     TSTS r0, r1, 0x1
		   0x010E541C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E5424
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E5420:  A4C5FAEB     BL $-0x14e968
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E5424:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E5428:  000090E5     LDR r0, [r0]
		   0x010E542C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010E5430:  83691403     TSTSEQ r6, r4, 0x20c000
		   0x010E5434:  943FF902     RSCSEQ r3, sb, 0x250
		   0x010E5438:  8C3FF902     RSCSEQ r3, sb, 0x230
		   0x010E543C:  843FF902     RSCSEQ r3, sb, 0x210
		   0x010E5440:  7C3FF902     RSCSEQ r3, sb, 0x1f0
		   0x010E5444:  0C3FF902     RSCSEQ r3, sb, 0x30
		   0x010E5448:  5C3FF902     RSCSEQ r3, sb, 0x170
		   0x010E544C:  443FF902     RSCSEQ r3, sb, 0x110
		   0x010E5450:  203FF902     RSCSEQ r3, sb, 0x80
		*/
	}

	// RVA: 0x10E5454 Offset: 0x10E5454 VA: 0x10E5454
	private void RemoveItemsFromGoal(Goal goal) {
		/* Disassembly (ARM32, 71 instructions, 0x11C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E5454:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E5458:  54D04DE2     SUB sp, sp, 0x54
		   0x010E545C:  2C008DE5     STR r0, [sp, 0x2c]
		   0x010E5460:  0140A0E1     MOV r4, r1
		   0x010E5464:  E4579FE5     LDR r5, [pc, 0x7e4]
		   0x010E5468:  05508FE0     ADD r5, pc, r5
		   0x010E546C:  0000D5E5     LDRB r0, [r5]
		   0x010E5470:  000050E3     CMPS r0, r0, 0x0
		   0x010E5474:  3D00001A     BNE $+0xfc
		   0x010E5478:  D4079FE5     LDR r0, [pc, 0x7d4]
		   0x010E547C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5480:  36D7F9EB     BL $-0x18a320
		   0x010E5484:  CC079FE5     LDR r0, [pc, 0x7cc]
		   0x010E5488:  00009FE7     LDR r0, [pc, r0]
		   0x010E548C:  33D7F9EB     BL $-0x18a32c
		   0x010E5490:  C4079FE5     LDR r0, [pc, 0x7c4]
		   0x010E5494:  00009FE7     LDR r0, [pc, r0]
		   0x010E5498:  30D7F9EB     BL $-0x18a338
		   0x010E549C:  BC079FE5     LDR r0, [pc, 0x7bc]
		   0x010E54A0:  00009FE7     LDR r0, [pc, r0]
		   0x010E54A4:  2DD7F9EB     BL $-0x18a344
		   0x010E54A8:  B4079FE5     LDR r0, [pc, 0x7b4]
		   0x010E54AC:  00009FE7     LDR r0, [pc, r0]
		   0x010E54B0:  2AD7F9EB     BL $-0x18a350
		   0x010E54B4:  AC079FE5     LDR r0, [pc, 0x7ac]
		   0x010E54B8:  00009FE7     LDR r0, [pc, r0]
		   0x010E54BC:  27D7F9EB     BL $-0x18a35c
		   0x010E54C0:  A4079FE5     LDR r0, [pc, 0x7a4]
		   0x010E54C4:  00009FE7     LDR r0, [pc, r0]
		   0x010E54C8:  24D7F9EB     BL $-0x18a368
		   0x010E54CC:  9C079FE5     LDR r0, [pc, 0x79c]
		   0x010E54D0:  00009FE7     LDR r0, [pc, r0]
		   0x010E54D4:  21D7F9EB     BL $-0x18a374
		   0x010E54D8:  94079FE5     LDR r0, [pc, 0x794]
		   0x010E54DC:  00009FE7     LDR r0, [pc, r0]
		   0x010E54E0:  1ED7F9EB     BL $-0x18a380
		   0x010E54E4:  8C079FE5     LDR r0, [pc, 0x78c]
		   0x010E54E8:  00009FE7     LDR r0, [pc, r0]
		   0x010E54EC:  1BD7F9EB     BL $-0x18a38c
		   0x010E54F0:  84079FE5     LDR r0, [pc, 0x784]
		   0x010E54F4:  00009FE7     LDR r0, [pc, r0]
		   0x010E54F8:  18D7F9EB     BL $-0x18a398
		   0x010E54FC:  7C079FE5     LDR r0, [pc, 0x77c]
		   0x010E5500:  00009FE7     LDR r0, [pc, r0]
		   0x010E5504:  15D7F9EB     BL $-0x18a3a4
		   0x010E5508:  74079FE5     LDR r0, [pc, 0x774]
		   0x010E550C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5510:  12D7F9EB     BL $-0x18a3b0
		   0x010E5514:  6C079FE5     LDR r0, [pc, 0x76c]
		   0x010E5518:  00009FE7     LDR r0, [pc, r0]
		   0x010E551C:  0FD7F9EB     BL $-0x18a3bc
		   0x010E5520:  64079FE5     LDR r0, [pc, 0x764]
		   0x010E5524:  00009FE7     LDR r0, [pc, r0]
		   0x010E5528:  0CD7F9EB     BL $-0x18a3c8
		   0x010E552C:  5C079FE5     LDR r0, [pc, 0x75c]
		   0x010E5530:  00009FE7     LDR r0, [pc, r0]
		   0x010E5534:  09D7F9EB     BL $-0x18a3d4
		   0x010E5538:  54079FE5     LDR r0, [pc, 0x754]
		   0x010E553C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5540:  06D7F9EB     BL $-0x18a3e0
		   0x010E5544:  4C079FE5     LDR r0, [pc, 0x74c]
		   0x010E5548:  00009FE7     LDR r0, [pc, r0]
		   0x010E554C:  03D7F9EB     BL $-0x18a3ec
		   0x010E5550:  44079FE5     LDR r0, [pc, 0x744]
		   0x010E5554:  00009FE7     LDR r0, [pc, r0]
		   0x010E5558:  00D7F9EB     BL $-0x18a3f8
		   0x010E555C:  3C079FE5     LDR r0, [pc, 0x73c]
		   0x010E5560:  00009FE7     LDR r0, [pc, r0]
		   0x010E5564:  FDD6F9EB     BL $-0x18a404
		   0x010E5568:  0100A0E3     MOV r0, 0x1
		   0x010E556C:  0000C5E5     STRB r0, [r5]
		*/
	}

	// RVA: 0x10E5CF8 Offset: 0x10E5CF8 VA: 0x10E5CF8
	private void GetRewardsAfterCompleteGoal(Goal goal, bool givingStars) {
		/* Disassembly (ARM32, 52 instructions, 0xD0 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E5CF8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E5CFC:  54D04DE2     SUB sp, sp, 0x54
		   0x010E5D00:  24008DE5     STR r0, [sp, 0x24]
		   0x010E5D04:  0260A0E1     MOV r6, r2
		   0x010E5D08:  A4499FE5     LDR r4, [pc, 0x9a4]
		   0x010E5D0C:  0170A0E1     MOV r7, r1
		   0x010E5D10:  04408FE0     ADD r4, pc, r4
		   0x010E5D14:  0000D4E5     LDRB r0, [r4]
		   0x010E5D18:  000050E3     CMPS r0, r0, 0x0
		   0x010E5D1C:  2800001A     BNE $+0xa8  // if (!=) goto 0x010E5DC4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E5D20:  90099FE5     LDR r0, [pc, 0x990]
		   0x010E5D24:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D28:  0CD5F9EB     BL $-0x18abc8
		   0x010E5D2C:  88099FE5     LDR r0, [pc, 0x988]
		   0x010E5D30:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D34:  09D5F9EB     BL $-0x18abd4
		   0x010E5D38:  80099FE5     LDR r0, [pc, 0x980]
		   0x010E5D3C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D40:  06D5F9EB     BL $-0x18abe0
		   0x010E5D44:  78099FE5     LDR r0, [pc, 0x978]
		   0x010E5D48:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D4C:  03D5F9EB     BL $-0x18abec
		   0x010E5D50:  70099FE5     LDR r0, [pc, 0x970]
		   0x010E5D54:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D58:  00D5F9EB     BL $-0x18abf8
		   0x010E5D5C:  68099FE5     LDR r0, [pc, 0x968]
		   0x010E5D60:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D64:  FDD4F9EB     BL $-0x18ac04
		   0x010E5D68:  60099FE5     LDR r0, [pc, 0x960]
		   0x010E5D6C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D70:  FAD4F9EB     BL $-0x18ac10
		   0x010E5D74:  58099FE5     LDR r0, [pc, 0x958]
		   0x010E5D78:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D7C:  F7D4F9EB     BL $-0x18ac1c
		   0x010E5D80:  50099FE5     LDR r0, [pc, 0x950]
		   0x010E5D84:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D88:  F4D4F9EB     BL $-0x18ac28
		   0x010E5D8C:  48099FE5     LDR r0, [pc, 0x948]
		   0x010E5D90:  00009FE7     LDR r0, [pc, r0]
		   0x010E5D94:  F1D4F9EB     BL $-0x18ac34
		   0x010E5D98:  40099FE5     LDR r0, [pc, 0x940]
		   0x010E5D9C:  00009FE7     LDR r0, [pc, r0]
		   0x010E5DA0:  EED4F9EB     BL $-0x18ac40
		   0x010E5DA4:  38099FE5     LDR r0, [pc, 0x938]
		   0x010E5DA8:  00009FE7     LDR r0, [pc, r0]
		   0x010E5DAC:  EBD4F9EB     BL $-0x18ac4c
		   0x010E5DB0:  30099FE5     LDR r0, [pc, 0x930]
		   0x010E5DB4:  00009FE7     LDR r0, [pc, r0]
		   0x010E5DB8:  E8D4F9EB     BL $-0x18ac58
		   0x010E5DBC:  0100A0E3     MOV r0, 0x1
		   0x010E5DC0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E5DC4:  0000A0E3     MOV r0, 0x0
		*/
	}

	// RVA: 0x10E675C Offset: 0x10E675C VA: 0x10E675C
	public void CompleteGoal(Goal goal, bool givingStars) {
		/* Disassembly (ARM32, 119 instructions, 0x1DC bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E675C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010E6760:  08D04DE2     SUB sp, sp, 0x8
		   0x010E6764:  A0719FE5     LDR r7, [pc, 0x1a0]
		   0x010E6768:  0060A0E1     MOV r6, r0
		   0x010E676C:  0250A0E1     MOV r5, r2
		   0x010E6770:  0140A0E1     MOV r4, r1
		   0x010E6774:  07708FE0     ADD r7, pc, r7
		   0x010E6778:  0000D7E5     LDRB r0, [r7]
		   0x010E677C:  000050E3     CMPS r0, r0, 0x0
		   0x010E6780:  1000001A     BNE $+0x48  // if (!=) goto 0x010E67C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E6784:  84019FE5     LDR r0, [pc, 0x184]
		   0x010E6788:  00009FE7     LDR r0, [pc, r0]
		   0x010E678C:  73D2F9EB     BL $-0x18b62c
		   0x010E6790:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010E6794:  00009FE7     LDR r0, [pc, r0]
		   0x010E6798:  70D2F9EB     BL $-0x18b638
		   0x010E679C:  74019FE5     LDR r0, [pc, 0x174]
		   0x010E67A0:  00009FE7     LDR r0, [pc, r0]
		   0x010E67A4:  6DD2F9EB     BL $-0x18b644
		   0x010E67A8:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010E67AC:  00009FE7     LDR r0, [pc, r0]
		   0x010E67B0:  6AD2F9EB     BL $-0x18b650
		   0x010E67B4:  64019FE5     LDR r0, [pc, 0x164]
		   0x010E67B8:  00009FE7     LDR r0, [pc, r0]
		   0x010E67BC:  67D2F9EB     BL $-0x18b65c
		   0x010E67C0:  0100A0E3     MOV r0, 0x1
		   0x010E67C4:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E67C8:  000054E3     CMPS r0, r4, 0x0
		   0x010E67CC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E67D4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E67D0:  FED2F9EB     BL $-0x18b400
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E67D4:  0400A0E1     MOV r0, r4
		   0x010E67D8:  0110A0E3     MOV r1, 0x1
		   0x010E67DC:  0020A0E3     MOV r2, 0x0
		   0x010E67E0:  4F3100EB     BL $+0xc544  // CALL → Goal.set_Completed
		   0x010E67E4:  0600A0E1     MOV r0, r6
		   0x010E67E8:  0410A0E1     MOV r1, r4
		   0x010E67EC:  18FBFFEB     BL $-0x1398
		   0x010E67F0:  0600A0E1     MOV r0, r6
		   0x010E67F4:  0410A0E1     MOV r1, r4
		   0x010E67F8:  0520A0E1     MOV r2, r5
		   0x010E67FC:  3DFDFFEB     BL $-0xb04
		   0x010E6800:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x010E6804:  00009FE7     LDR r0, [pc, r0]
		   0x010E6808:  000090E5     LDR r0, [r0]
		   0x010E680C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E6810:  000051E3     CMPS r0, r1, 0x0
		   0x010E6814:  0000001A     BNE $+0x8  // if (!=) goto 0x010E681C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E6818:  9DD2F9EB     BL $-0x18b584
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E681C:  0000A0E3     MOV r0, 0x0
		   0x010E6820:  898802EB     BL $+0xa222c  // CALL → RemoteSavesManager.Save
		   0x010E6824:  FC609FE5     LDR r6, [pc, 0xfc]
		   0x010E6828:  06609FE7     LDR r6, [pc, r6]
		   0x010E682C:  000096E5     LDR r0, [r6]
		   0x010E6830:  741090E5     LDR r1, [r0, 0x74]
		   0x010E6834:  000051E3     CMPS r0, r1, 0x0
		   0x010E6838:  0100001A     BNE $+0xc  // if (!=) goto 0x010E6844
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E683C:  94D2F9EB     BL $-0x18b5a8
		   0x010E6840:  000096E5     LDR r0, [r6]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E6844:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E6848:  085090E5     LDR r5, [r0, 0x8]
		   0x010E684C:  000055E3     CMPS r0, r5, 0x0
		   0x010E6850:  0000001A     BNE $+0x8  // if (!=) goto 0x010E6858
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E6854:  DDD2F9EB     BL $-0x18b484
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E6858:  0C2095E5     LDR r2, [r5, 0xc]
		   0x010E685C:  141095E5     LDR r1, [r5, 0x14]
		   0x010E6860:  200095E5     LDR r0, [r5, 0x20]
		   0x010E6864:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x010E6868:  0050A0E1     MOV r5, r0
		   0x010E686C:  000096E5     LDR r0, [r6]
		   0x010E6870:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E6874:  0C6090E5     LDR r6, [r0, 0xc]
		   0x010E6878:  000056E3     CMPS r0, r6, 0x0
		   0x010E687C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E6884
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E6880:  D2D2F9EB     BL $-0x18b4b0
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E6884:  0C2096E5     LDR r2, [r6, 0xc]
		   0x010E6888:  141096E5     LDR r1, [r6, 0x14]
		   0x010E688C:  200096E5     LDR r0, [r6, 0x20]
		   0x010E6890:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x010E6894:  0060A0E1     MOV r6, r0
		   0x010E6898:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x010E689C:  00009FE7     LDR r0, [pc, r0]
		   0x010E68A0:  000090E5     LDR r0, [r0]
		   0x010E68A4:  C6D2F9EB     BL $-0x18b4e0
		   0x010E68A8:  0070A0E1     MOV r7, r0
		   0x010E68AC:  0000A0E3     MOV r0, 0x0
		   0x010E68B0:  00008DE5     STR r0, [sp]
		   0x010E68B4:  0700A0E1     MOV r0, r7
		   0x010E68B8:  0510A0E1     MOV r1, r5
		   0x010E68BC:  0620A0E1     MOV r2, r6
		   0x010E68C0:  0430A0E1     MOV r3, r4
		   0x010E68C4:  BAEF08EB     BL $+0x23bef0  // CALL → EventOrderCompleted..ctor
		   0x010E68C8:  0700A0E1     MOV r0, r7
		   0x010E68CC:  0010A0E3     MOV r1, 0x0
		   0x010E68D0:  99B00EEB     BL $+0x3ac26c  // CALL → Analytics.SendEvent
		   0x010E68D4:  54009FE5     LDR r0, [pc, 0x54]
		   0x010E68D8:  00009FE7     LDR r0, [pc, r0]
		   0x010E68DC:  000090E5     LDR r0, [r0]
		   0x010E68E0:  741090E5     LDR r1, [r0, 0x74]
		   0x010E68E4:  000051E3     CMPS r0, r1, 0x0
		   0x010E68E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E68F0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E68EC:  68D2F9EB     BL $-0x18b658
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E68F0:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010E68F4:  0010A0E3     MOV r1, 0x0
		   0x010E68F8:  00009FE7     LDR r0, [pc, r0]
		   0x010E68FC:  000090E5     LDR r0, [r0]
		   0x010E6900:  08D08DE2     ADD sp, sp, 0x8
		   0x010E6904:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010E6908:  F75F01EA     B $+0x57fe4  // TAIL CALL → InterruptiveAdsManager.TryShow
		   0x010E690C:  3A551403     TSTSEQ r5, r4, 0xe800000
		   0x010E6910:  AC0EF902     RSCSEQ r0, sb, 0xac0
		   0x010E6914:  782BF902     RSCSEQ r2, sb, 0x1e000
		   0x010E6918:  4818F902     RSCSEQ r1, sb, 0x480000
		   0x010E691C:  642BF902     RSCSEQ r2, sb, 0x19000
		   0x010E6920:  5C2BF902     RSCSEQ r2, sb, 0x17000
		   0x010E6924:  0C2BF902     RSCSEQ r2, sb, 0x3000
		   0x010E6928:  0C0EF902     RSCSEQ r0, sb, 0xc0
		   0x010E692C:  702AF902     RSCSEQ r2, sb, 0x70000
		   0x010E6930:  1017F902     RSCSEQ r1, sb, 0x400000
		   0x010E6934:  1C2AF902     RSCSEQ r2, sb, 0x1c000
		*/
	}

	// RVA: 0x10E6938 Offset: 0x10E6938 VA: 0x10E6938
	public void SetGoalsCheck(List<GoalTarget> resTargets) {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E6938:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010E693C:  44609FE5     LDR r6, [pc, 0x44]
		   0x010E6940:  0050A0E1     MOV r5, r0
		   0x010E6944:  0140A0E1     MOV r4, r1
		   0x010E6948:  06608FE0     ADD r6, pc, r6
		   0x010E694C:  0000D6E5     LDRB r0, [r6]
		   0x010E6950:  000050E3     CMPS r0, r0, 0x0
		   0x010E6954:  0400001A     BNE $+0x18  // if (!=) goto 0x010E696C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E6958:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010E695C:  00009FE7     LDR r0, [pc, r0]
		   0x010E6960:  FED1F9EB     BL $-0x18b800
		   0x010E6964:  0100A0E3     MOV r0, 0x1
		   0x010E6968:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E696C:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x010E6970:  00009FE7     LDR r0, [pc, r0]
		   0x010E6974:  541095E5     LDR r1, [r5, 0x54]
		   0x010E6978:  002090E5     LDR r2, [r0]
		   0x010E697C:  0400A0E1     MOV r0, r4
		   0x010E6980:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010E6984:  020000EA     B $+0x10  // TAIL CALL → GameState.<SetGoalsCheck>g__CheckForItemList|128_1
		   0x010E6988:  67531403     TSTSEQ r5, r4, 0x9c000001
		   0x010E698C:  BC29F902     RSCSEQ r2, sb, 0x2f0000
		   0x010E6990:  A829F902     RSCSEQ r2, sb, 0x2a0000
		*/
	}

	// RVA: 0x10E6C80 Offset: 0x10E6C80 VA: 0x10E6C80
	public Episodes CompleteLevel(bool doubleReward) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010E6C80:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E6C84:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10E7A34 Offset: 0x10E7A34 VA: 0x10E7A34
	private static void RateUsDialogCheckForShow(int completedLevel) {
		/* Disassembly (ARM32, 185 instructions, 0x2E4 bytes):
		   // CFG: 28 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E7A34:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010E7A38:  80529FE5     LDR r5, [pc, 0x280]
		   0x010E7A3C:  0040A0E1     MOV r4, r0
		   0x010E7A40:  05508FE0     ADD r5, pc, r5
		   0x010E7A44:  0000D5E5     LDRB r0, [r5]
		   0x010E7A48:  000050E3     CMPS r0, r0, 0x0
		   0x010E7A4C:  1C00001A     BNE $+0x78  // if (!=) goto 0x010E7AC4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E7A50:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x010E7A54:  00009FE7     LDR r0, [pc, r0]
		   0x010E7A58:  C0CDF9EB     BL $-0x18c8f8
		   0x010E7A5C:  64029FE5     LDR r0, [pc, 0x264]
		   0x010E7A60:  00009FE7     LDR r0, [pc, r0]
		   0x010E7A64:  BDCDF9EB     BL $-0x18c904
		   0x010E7A68:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x010E7A6C:  00009FE7     LDR r0, [pc, r0]
		   0x010E7A70:  BACDF9EB     BL $-0x18c910
		   0x010E7A74:  54029FE5     LDR r0, [pc, 0x254]
		   0x010E7A78:  00009FE7     LDR r0, [pc, r0]
		   0x010E7A7C:  B7CDF9EB     BL $-0x18c91c
		   0x010E7A80:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010E7A84:  00009FE7     LDR r0, [pc, r0]
		   0x010E7A88:  B4CDF9EB     BL $-0x18c928
		   0x010E7A8C:  44029FE5     LDR r0, [pc, 0x244]
		   0x010E7A90:  00009FE7     LDR r0, [pc, r0]
		   0x010E7A94:  B1CDF9EB     BL $-0x18c934
		   0x010E7A98:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x010E7A9C:  00009FE7     LDR r0, [pc, r0]
		   0x010E7AA0:  AECDF9EB     BL $-0x18c940
		   0x010E7AA4:  34029FE5     LDR r0, [pc, 0x234]
		   0x010E7AA8:  00009FE7     LDR r0, [pc, r0]
		   0x010E7AAC:  ABCDF9EB     BL $-0x18c94c
		   0x010E7AB0:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x010E7AB4:  00009FE7     LDR r0, [pc, r0]
		   0x010E7AB8:  A8CDF9EB     BL $-0x18c958
		   0x010E7ABC:  0100A0E3     MOV r0, 0x1
		   0x010E7AC0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E7AC4:  1C729FE5     LDR r7, [pc, 0x21c]
		   0x010E7AC8:  07709FE7     LDR r7, [pc, r7]
		   0x010E7ACC:  000097E5     LDR r0, [r7]
		   0x010E7AD0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E7AD4:  100090E5     LDR r0, [r0, 0x10]
		   0x010E7AD8:  000050E3     CMPS r0, r0, 0x0
		   0x010E7ADC:  3F00001A     BNE $+0x104  // if (!=) goto 0x010E7BE0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E7AE0:  04029FE5     LDR r0, [pc, 0x204]
		   0x010E7AE4:  00009FE7     LDR r0, [pc, r0]
		   0x010E7AE8:  000090E5     LDR r0, [r0]
		   0x010E7AEC:  741090E5     LDR r1, [r0, 0x74]
		   0x010E7AF0:  000051E3     CMPS r0, r1, 0x0
		   0x010E7AF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7AFC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010E7AF8:  E5CDF9EB     BL $-0x18c864
		   // ──── Block 5 if (!=) ────────────────────
		   0x010E7AFC:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x010E7B00:  00009FE7     LDR r0, [pc, r0]
		   0x010E7B04:  001090E5     LDR r1, [r0]
		   0x010E7B08:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x010E7B0C:  00009FE7     LDR r0, [pc, r0]
		   0x010E7B10:  000090E5     LDR r0, [r0]
		   0x010E7B14:  0020A0E3     MOV r2, 0x0
		   0x010E7B18:  0030A0E3     MOV r3, 0x0
		   0x010E7B1C:  1487FEEB     BL $-0x5e3a8
		   0x010E7B20:  0050A0E1     MOV r5, r0
		   0x010E7B24:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x010E7B28:  00009FE7     LDR r0, [pc, r0]
		   0x010E7B2C:  000090E5     LDR r0, [r0]
		   0x010E7B30:  0110A0E3     MOV r1, 0x1
		   0x010E7B34:  ACCDF9EB     BL $-0x18c948
		   0x010E7B38:  0060A0E1     MOV r6, r0
		   0x010E7B3C:  000050E3     CMPS r0, r0, 0x0
		   0x010E7B40:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7B48
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E7B44:  21CEF9EB     BL $-0x18c774
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E7B48:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010E7B4C:  000050E3     CMPS r0, r0, 0x0
		   0x010E7B50:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7B58
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E7B54:  1ECEF9EB     BL $-0x18c780
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E7B58:  3B00A0E3     MOV r0, 0x3b
		   0x010E7B5C:  000055E3     CMPS r0, r5, 0x0
		   0x010E7B60:  B001C6E1     STRH r0, [r6, 0x10]
		   0x010E7B64:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7B6C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E7B68:  18CEF9EB     BL $-0x18c798
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E7B6C:  0500A0E1     MOV r0, r5
		   0x010E7B70:  0610A0E1     MOV r1, r6
		   0x010E7B74:  0120A0E3     MOV r2, 0x1
		   0x010E7B78:  0030A0E3     MOV r3, 0x0
		   0x010E7B7C:  12D176EB     BL $+0x1db4450  // CALL → String.Split
		   0x010E7B80:  0050A0E1     MOV r5, r0
		   0x010E7B84:  70019FE5     LDR r0, [pc, 0x170]
		   0x010E7B88:  00009FE7     LDR r0, [pc, r0]
		   0x010E7B8C:  000090E5     LDR r0, [r0]
		   0x010E7B90:  0BCEF9EB     BL $-0x18c7cc
		   0x010E7B94:  0060A0E1     MOV r6, r0
		   0x010E7B98:  60019FE5     LDR r0, [pc, 0x160]
		   0x010E7B9C:  00009FE7     LDR r0, [pc, r0]
		   0x010E7BA0:  002090E5     LDR r2, [r0]
		   0x010E7BA4:  0600A0E1     MOV r0, r6
		   0x010E7BA8:  0010A0E3     MOV r1, 0x0
		   0x010E7BAC:  0030A0E3     MOV r3, 0x0
		   0x010E7BB0:  1C9950EB     BL $+0x1426478  // CALL → Converter<object, int>..ctor
		   0x010E7BB4:  48019FE5     LDR r0, [pc, 0x148]
		   0x010E7BB8:  00009FE7     LDR r0, [pc, r0]
		   0x010E7BBC:  002090E5     LDR r2, [r0]
		   0x010E7BC0:  0500A0E1     MOV r0, r5
		   0x010E7BC4:  0610A0E1     MOV r1, r6
		   0x010E7BC8:  3CFD28EB     BL $+0xa3f4f8  // CALL → Array.ConvertAll<object, int>
		   0x010E7BCC:  001097E5     LDR r1, [r7]
		   0x010E7BD0:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x010E7BD4:  100081E5     STR r0, [r1, 0x10]
		   0x010E7BD8:  000050E3     CMPS r0, r0, 0x0
		   0x010E7BDC:  0900000A     BEQ $+0x2c  // if (==) goto 0x010E7C08
		   // 
		   // ──── Block 12 (from 2 paths) ──────────────────
		   0x010E7BE0:  28119FE5     LDR r1, [pc, 0x128]
		   0x010E7BE4:  01109FE7     LDR r1, [pc, r1]
		   0x010E7BE8:  002091E5     LDR r2, [r1]
		   0x010E7BEC:  0410A0E1     MOV r1, r4
		   0x010E7BF0:  9D162CEB     BL $+0xb05a7c  // CALL → Array.IndexOf<int>
		   0x010E7BF4:  000050E3     CMPS r0, r0, 0x0
		   0x010E7BF8:  0200004A     BMI $+0x10  // if (< 0) goto 0x010E7C08
		   // 
		   // ──── Block 13 else (< 0) ────────────────────
		   0x010E7BFC:  0000A0E3     MOV r0, 0x0
		   0x010E7C00:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010E7C04:  2785FEEA     B $-0x5eb5c
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x010E7C08:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010E7C0C:  040000EA     B $+0x18  // goto 0x010E7C24
		   0x010E7C10:  030000EA     B $+0x14  // goto 0x010E7C24
		   0x010E7C14:  020000EA     B $+0x10  // goto 0x010E7C24
		   0x010E7C18:  010000EA     B $+0xc  // goto 0x010E7C24
		   0x010E7C1C:  000000EA     B $+0x8  // goto 0x010E7C24
		   0x010E7C20:  FFFFFFEA     B $+0x4  // goto 0x010E7C24
		   // ──── Block 21 ──────────────────────────────
		   0x010E7C24:  010051E3     CMPS r0, r1, 0x1
		   0x010E7C28:  2200001A     BNE $+0x90  // if (!=) goto 0x010E7CB8
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E7C2C:  A5F3FCEB     BL $-0xc3164
		   0x010E7C30:  0050A0E1     MOV r5, r0
		   0x010E7C34:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010E7C38:  00009FE7     LDR r0, [pc, r0]
		   0x010E7C3C:  4BCDF9EB     BL $-0x18cacc
		   0x010E7C40:  001095E5     LDR r1, [r5]
		   0x010E7C44:  001091E5     LDR r1, [r1]
		   0x010E7C48:  FCCEF9EB     BL $-0x18c408
		   0x010E7C4C:  000050E3     CMPS r0, r0, 0x0
		   0x010E7C50:  0F00000A     BEQ $+0x44  // if (==) goto 0x010E7C94
		   // 
		   // ──── Block 23 else (!=) ────────────────────
		   0x010E7C54:  005095E5     LDR r5, [r5]
		   0x010E7C58:  CEF3FCEB     BL $-0xc30c0
		   0x010E7C5C:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010E7C60:  00009FE7     LDR r0, [pc, r0]
		   0x010E7C64:  41CDF9EB     BL $-0x18caf4
		   0x010E7C68:  741090E5     LDR r1, [r0, 0x74]
		   0x010E7C6C:  000051E3     CMPS r0, r1, 0x0
		   0x010E7C70:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7C78
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010E7C74:  86CDF9EB     BL $-0x18c9e0
		   // ──── Block 25 if (!=) ────────────────────
		   0x010E7C78:  0500A0E1     MOV r0, r5
		   0x010E7C7C:  0010A0E3     MOV r1, 0x0
		   0x010E7C80:  41413CEB     BL $+0xf1050c  // CALL → sub_1FF818C
		   0x010E7C84:  000097E5     LDR r0, [r7]
		   0x010E7C88:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E7C8C:  100090E5     LDR r0, [r0, 0x10]
		   0x010E7C90:  D0FFFFEA     B $-0xb8
		   // ──── Block 26 if (==) ────────────────────
		   0x010E7C94:  0400A0E3     MOV r0, 0x4
		   0x010E7C98:  2300FDEB     BL $-0xbff6c
		   0x010E7C9C:  002095E5     LDR r2, [r5]
		   0x010E7CA0:  6C109FE5     LDR r1, [pc, 0x6c]
		   0x010E7CA4:  002080E5     STR r2, [r0]
		   0x010E7CA8:  01108FE0     ADD r1, pc, r1
		   0x010E7CAC:  0020A0E3     MOV r2, 0x0
		   0x010E7CB0:  2100FDEB     BL $-0xbff74
		   0x010E7CB4:  B7F3FCEB     BL $-0xc311c
		   // ──── Block 27 if (!=) ────────────────────
		   0x010E7CB8:  BAF3FCEB     BL $-0xc3110
		   0x010E7CBC:  B89FEDEB     BL $-0x498118
		   0x010E7CC0:  71421403     TSTSEQ r4, r4, 0x10000007
		   0x010E7CC4:  E818F902     RSCSEQ r1, sb, 0xe80000
		   0x010E7CC8:  E018F902     RSCSEQ r1, sb, 0xe00000
		   0x010E7CCC:  F402F902     RSCSEQ r0, sb, 0x4000000f
		   0x010E7CD0:  CC18F902     RSCSEQ r1, sb, 0xcc0000
		   0x010E7CD4:  1CFCF802     RSCSEQ pc, r8, 0x1c00
		   0x010E7CD8:  B410F902     RSCSEQ r1, sb, 0xb4
		   0x010E7CDC:  AC18F902     RSCSEQ r1, sb, 0xac0000
		   0x010E7CE0:  98EFF802     RSCSEQ lr, r8, 0x260
		   0x010E7CE4:  9818F902     RSCSEQ r1, sb, 0x980000
		   0x010E7CE8:  7C10F902     RSCSEQ r1, sb, 0x7c
		   0x010E7CEC:  BCFBF802     RSCSEQ pc, r8, 0x2f000
		   0x010E7CF0:  40EFF802     RSCSEQ lr, r8, 0x100
		   0x010E7CF4:  4018F902     RSCSEQ r1, sb, 0x400000
		   0x010E7CF8:  3802F902     RSCSEQ r0, sb, 0x80000003
		   0x010E7CFC:  BC17F902     RSCSEQ r1, sb, 0x2f00000
		   0x010E7D00:  AC17F902     RSCSEQ r1, sb, 0x2b00000
		   0x010E7D04:  8417F902     RSCSEQ r1, sb, 0x2100000
		   0x010E7D08:  B4ECF802     RSCSEQ lr, r8, 0xb400
		   0x010E7D0C:  28E9F802     RSCSEQ lr, r8, 0xa0000
		   0x010E7D10:  5C17F902     RSCSEQ r1, sb, 0x1700000
		   0x010E7D14:  B413E402     RSCEQ r1, r4, 0xd0000002
		*/
	}

	// RVA: 0x10E7D18 Offset: 0x10E7D18 VA: 0x10E7D18
	public int CountInAllSavedData(ItemData item) {
		/* Disassembly (ARM32, 50 instructions, 0xC8 bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E7D18:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010E7D1C:  B0609FE5     LDR r6, [pc, 0xb0]
		   0x010E7D20:  0050A0E1     MOV r5, r0
		   0x010E7D24:  0140A0E1     MOV r4, r1
		   0x010E7D28:  06608FE0     ADD r6, pc, r6
		   0x010E7D2C:  0000D6E5     LDRB r0, [r6]
		   0x010E7D30:  000050E3     CMPS r0, r0, 0x0
		   0x010E7D34:  0400001A     BNE $+0x18  // if (!=) goto 0x010E7D4C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E7D38:  98009FE5     LDR r0, [pc, 0x98]
		   0x010E7D3C:  00009FE7     LDR r0, [pc, r0]
		   0x010E7D40:  06CDF9EB     BL $-0x18cbe0
		   0x010E7D44:  0100A0E3     MOV r0, 0x1
		   0x010E7D48:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E7D4C:  88009FE5     LDR r0, [pc, 0x88]
		   0x010E7D50:  00009FE7     LDR r0, [pc, r0]
		   0x010E7D54:  3C6095E5     LDR r6, [r5, 0x3c]
		   0x010E7D58:  000090E5     LDR r0, [r0]
		   0x010E7D5C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E7D60:  080090E5     LDR r0, [r0, 0x8]
		   0x010E7D64:  000050E3     CMPS r0, r0, 0x0
		   0x010E7D68:  0600000A     BEQ $+0x20  // if (==) goto 0x010E7D88
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E7D6C:  000056E3     CMPS r0, r6, 0x0
		   0x010E7D70:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7D78
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010E7D74:  95CDF9EB     BL $-0x18c9a4
		   // ──── Block 5 if (!=) ────────────────────
		   0x010E7D78:  0C1096E5     LDR r1, [r6, 0xc]
		   0x010E7D7C:  0420A0E1     MOV r2, r4
		   0x010E7D80:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010E7D84:  150000EA     B $+0x5c  // TAIL CALL → GameState.CountInSavedData
		   // ──── Block 6 if (==) ────────────────────
		   0x010E7D88:  000056E3     CMPS r0, r6, 0x0
		   0x010E7D8C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7D94
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E7D90:  8ECDF9EB     BL $-0x18c9c0
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E7D94:  0C1096E5     LDR r1, [r6, 0xc]
		   0x010E7D98:  0420A0E1     MOV r2, r4
		   0x010E7D9C:  0F0000EB     BL $+0x44  // CALL → GameState.CountInSavedData
		   0x010E7DA0:  3C5095E5     LDR r5, [r5, 0x3c]
		   0x010E7DA4:  0060A0E1     MOV r6, r0
		   0x010E7DA8:  000055E3     CMPS r0, r5, 0x0
		   0x010E7DAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E7DB4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E7DB0:  86CDF9EB     BL $-0x18c9e0
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E7DB4:  0500A0E1     MOV r0, r5
		   0x010E7DB8:  0010A0E3     MOV r1, 0x0
		   0x010E7DBC:  32F200EB     BL $+0x3c8d0  // CALL → GameStateSave.get_Inventory
		   0x010E7DC0:  0010A0E1     MOV r1, r0
		   0x010E7DC4:  0420A0E1     MOV r2, r4
		   0x010E7DC8:  040000EB     BL $+0x18  // CALL → GameState.CountInSavedData
		   0x010E7DCC:  060080E0     ADD r0, r0, r6
		   0x010E7DD0:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010E7DD4:  B93F1403     TSTSEQ r3, r4, 0x2e4
		   0x010E7DD8:  1416F902     RSCSEQ r1, sb, 0x1400000
		   0x010E7DDC:  0016F902     RSCSEQ r1, sb, 0x0
		*/
	}

	// RVA: 0x10E7FCC Offset: 0x10E7FCC VA: 0x10E7FCC
	private List<ItemDataSave> GetRewardBoxItems() {
		/* Disassembly (ARM32, 66 instructions, 0x108 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E7FCC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010E7FD0:  D8509FE5     LDR r5, [pc, 0xd8]
		   0x010E7FD4:  0040A0E1     MOV r4, r0
		   0x010E7FD8:  05508FE0     ADD r5, pc, r5
		   0x010E7FDC:  0000D5E5     LDRB r0, [r5]
		   0x010E7FE0:  000050E3     CMPS r0, r0, 0x0
		   0x010E7FE4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E8020
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E7FE8:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x010E7FEC:  00009FE7     LDR r0, [pc, r0]
		   0x010E7FF0:  5ACCF9EB     BL $-0x18ce90
		   0x010E7FF4:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010E7FF8:  00009FE7     LDR r0, [pc, r0]
		   0x010E7FFC:  57CCF9EB     BL $-0x18ce9c
		   0x010E8000:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010E8004:  00009FE7     LDR r0, [pc, r0]
		   0x010E8008:  54CCF9EB     BL $-0x18cea8
		   0x010E800C:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010E8010:  00009FE7     LDR r0, [pc, r0]
		   0x010E8014:  51CCF9EB     BL $-0x18ceb4
		   0x010E8018:  0100A0E3     MOV r0, 0x1
		   0x010E801C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E8020:  805094E5     LDR r5, [r4, 0x80]
		   0x010E8024:  000055E3     CMPS r0, r5, 0x0
		   0x010E8028:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8030
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E802C:  E7CCF9EB     BL $-0x18cc5c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E8030:  0C2095E5     LDR r2, [r5, 0xc]
		   0x010E8034:  141095E5     LDR r1, [r5, 0x14]
		   0x010E8038:  200095E5     LDR r0, [r5, 0x20]
		   0x010E803C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x010E8040:  0050A0E1     MOV r5, r0
		   0x010E8044:  000050E3     CMPS r0, r0, 0x0
		   0x010E8048:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8050
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E804C:  DFCCF9EB     BL $-0x18cc7c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E8050:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010E8054:  00009FE7     LDR r0, [pc, r0]
		   0x010E8058:  085095E5     LDR r5, [r5, 0x8]
		   0x010E805C:  000090E5     LDR r0, [r0]
		   0x010E8060:  D7CCF9EB     BL $-0x18cc9c
		   0x010E8064:  0060A0E1     MOV r6, r0
		   0x010E8068:  58009FE5     LDR r0, [pc, 0x58]
		   0x010E806C:  0410A0E1     MOV r1, r4
		   0x010E8070:  0030A0E3     MOV r3, 0x0
		   0x010E8074:  00009FE7     LDR r0, [pc, r0]
		   0x010E8078:  002090E5     LDR r2, [r0]
		   0x010E807C:  0600A0E1     MOV r0, r6
		   0x010E8080:  383261EB     BL $+0x184c8e8  // CALL → Func<object, object>..ctor
		   0x010E8084:  40009FE5     LDR r0, [pc, 0x40]
		   0x010E8088:  0610A0E1     MOV r1, r6
		   0x010E808C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8090:  002090E5     LDR r2, [r0]
		   0x010E8094:  0500A0E1     MOV r0, r5
		   0x010E8098:  BAAE21EB     BL $+0x86baf0  // CALL → Enumerable.Select<object, object>
		   0x010E809C:  2C109FE5     LDR r1, [pc, 0x2c]
		   0x010E80A0:  01109FE7     LDR r1, [pc, r1]
		   0x010E80A4:  001091E5     LDR r1, [r1]
		   0x010E80A8:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010E80AC:  A7E121EA     B $+0x8786a4  // TAIL CALL → Enumerable.ToList<object>
		   0x010E80B0:  DA3C1403     TSTSEQ r3, r4, 0xda00
		   0x010E80B4:  6813F902     RSCSEQ r1, sb, 0xa0000001
		   0x010E80B8:  B411F902     RSCSEQ r1, sb, 0x2d
		   0x010E80BC:  5413F902     RSCSEQ r1, sb, 0x50000001
		   0x010E80C0:  4C13F902     RSCSEQ r1, sb, 0x30000001
		   0x010E80C4:  0413F902     RSCSEQ r1, sb, 0x10000000
		   0x010E80C8:  E812F902     RSCSEQ r1, sb, 0x8000000e
		   0x010E80CC:  C812F902     RSCSEQ r1, sb, 0x8000000c
		   0x010E80D0:  0C11F902     RSCSEQ r1, sb, 0x3
		*/
	}

	// RVA: 0x10E7DE0 Offset: 0x10E7DE0 VA: 0x10E7DE0
	private int CountInSavedData(List<ItemDataSave> savedData, ItemData item) {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E7DE0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E7DE4:  20D04DE2     SUB sp, sp, 0x20
		   0x010E7DE8:  B8619FE5     LDR r6, [pc, 0x1b8]
		   0x010E7DEC:  0250A0E1     MOV r5, r2
		   0x010E7DF0:  0140A0E1     MOV r4, r1
		   0x010E7DF4:  06608FE0     ADD r6, pc, r6
		   0x010E7DF8:  0000D6E5     LDRB r0, [r6]
		   0x010E7DFC:  000050E3     CMPS r0, r0, 0x0
		   0x010E7E00:  0D00001A     BNE $+0x3c
		   0x010E7E04:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x010E7E08:  00009FE7     LDR r0, [pc, r0]
		   0x010E7E0C:  D3CCF9EB     BL $-0x18ccac
		   0x010E7E10:  98019FE5     LDR r0, [pc, 0x198]
		   0x010E7E14:  00009FE7     LDR r0, [pc, r0]
		   0x010E7E18:  D0CCF9EB     BL $-0x18ccb8
		   0x010E7E1C:  90019FE5     LDR r0, [pc, 0x190]
		   0x010E7E20:  00009FE7     LDR r0, [pc, r0]
		   0x010E7E24:  CDCCF9EB     BL $-0x18ccc4
		   0x010E7E28:  88019FE5     LDR r0, [pc, 0x188]
		   0x010E7E2C:  00009FE7     LDR r0, [pc, r0]
		   0x010E7E30:  CACCF9EB     BL $-0x18ccd0
		   0x010E7E34:  0100A0E3     MOV r0, 0x1
		   0x010E7E38:  0000C6E5     STRB r0, [r6]
		*/
	}

	// RVA: 0x10E2EC4 Offset: 0x10E2EC4 VA: 0x10E2EC4
	private bool Merge(Cell targetCell, Item originItem) {
		/* Disassembly (ARM32, 166 instructions, 0x298 bytes):
		   // CFG: 32 blocks, 29 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E2EC4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E2EC8:  54D04DE2     SUB sp, sp, 0x54
		   0x010E2ECC:  54479FE5     LDR r4, [pc, 0x754]
		   0x010E2ED0:  00A0A0E1     MOV r10, r0
		   0x010E2ED4:  0250A0E1     MOV r5, r2
		   0x010E2ED8:  0190A0E1     MOV sb, r1
		   0x010E2EDC:  04408FE0     ADD r4, pc, r4
		   0x010E2EE0:  0000D4E5     LDRB r0, [r4]
		   0x010E2EE4:  000050E3     CMPS r0, r0, 0x0
		   0x010E2EE8:  1F00001A     BNE $+0x84  // if (!=) goto 0x010E2F6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E2EEC:  38079FE5     LDR r0, [pc, 0x738]
		   0x010E2EF0:  00009FE7     LDR r0, [pc, r0]
		   0x010E2EF4:  99E0F9EB     BL $-0x187d94
		   0x010E2EF8:  30079FE5     LDR r0, [pc, 0x730]
		   0x010E2EFC:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F00:  96E0F9EB     BL $-0x187da0
		   0x010E2F04:  28079FE5     LDR r0, [pc, 0x728]
		   0x010E2F08:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F0C:  93E0F9EB     BL $-0x187dac
		   0x010E2F10:  20079FE5     LDR r0, [pc, 0x720]
		   0x010E2F14:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F18:  90E0F9EB     BL $-0x187db8
		   0x010E2F1C:  18079FE5     LDR r0, [pc, 0x718]
		   0x010E2F20:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F24:  8DE0F9EB     BL $-0x187dc4
		   0x010E2F28:  10079FE5     LDR r0, [pc, 0x710]
		   0x010E2F2C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F30:  8AE0F9EB     BL $-0x187dd0
		   0x010E2F34:  08079FE5     LDR r0, [pc, 0x708]
		   0x010E2F38:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F3C:  87E0F9EB     BL $-0x187ddc
		   0x010E2F40:  00079FE5     LDR r0, [pc, 0x700]
		   0x010E2F44:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F48:  84E0F9EB     BL $-0x187de8
		   0x010E2F4C:  F8069FE5     LDR r0, [pc, 0x6f8]
		   0x010E2F50:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F54:  81E0F9EB     BL $-0x187df4
		   0x010E2F58:  F0069FE5     LDR r0, [pc, 0x6f0]
		   0x010E2F5C:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F60:  7EE0F9EB     BL $-0x187e00
		   0x010E2F64:  0100A0E3     MOV r0, 0x1
		   0x010E2F68:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E2F6C:  0000A0E3     MOV r0, 0x0
		   0x010E2F70:  000059E3     CMPS r0, sb, 0x0
		   0x010E2F74:  50008DE5     STR r0, [sp, 0x50]
		   0x010E2F78:  4C008DE5     STR r0, [sp, 0x4c]
		   0x010E2F7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2F84
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E2F80:  12E1F9EB     BL $-0x187bb0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E2F84:  C8069FE5     LDR r0, [pc, 0x6c8]
		   0x010E2F88:  00009FE7     LDR r0, [pc, r0]
		   0x010E2F8C:  247099E5     LDR r7, [sb, 0x24]
		   0x010E2F90:  000090E5     LDR r0, [r0]
		   0x010E2F94:  741090E5     LDR r1, [r0, 0x74]
		   0x010E2F98:  000051E3     CMPS r0, r1, 0x0
		   0x010E2F9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2FA4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E2FA0:  BBE0F9EB     BL $-0x187d0c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E2FA4:  0700A0E1     MOV r0, r7
		   0x010E2FA8:  0010A0E3     MOV r1, 0x0
		   0x010E2FAC:  0020A0E3     MOV r2, 0x0
		   0x010E2FB0:  0040A0E3     MOV r4, 0x0
		   0x010E2FB4:  B8533CEB     BL $+0xf14ee8  // CALL → sub_1FF7E9C
		   0x010E2FB8:  000050E3     CMPS r0, r0, 0x0
		   0x010E2FBC:  9501001A     BNE $+0x65c
		   0x010E2FC0:  000055E3     CMPS r0, r5, 0x0
		   0x010E2FC4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2FCC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E2FC8:  00E1F9EB     BL $-0x187bf8
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E2FCC:  84B095E5     LDR fp, [r5, 0x84]
		   0x010E2FD0:  000057E3     CMPS r0, r7, 0x0
		   0x010E2FD4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2FDC
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E2FD8:  FCE0F9EB     BL $-0x187c08
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E2FDC:  0700A0E1     MOV r0, r7
		   0x010E2FE0:  0010A0E3     MOV r1, 0x0
		   0x010E2FE4:  0040A0E3     MOV r4, 0x0
		   0x010E2FE8:  3A9A00EB     BL $+0x268f0  // CALL → Item.get_activeData
		   0x010E2FEC:  0060A0E1     MOV r6, r0
		   0x010E2FF0:  000050E3     CMPS r0, r0, 0x0
		   0x010E2FF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E2FFC
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E2FF8:  F4E0F9EB     BL $-0x187c28
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E2FFC:  7400D6E5     LDRB r0, [r6, 0x74]
		   0x010E3000:  000050E3     CMPS r0, r0, 0x0
		   0x010E3004:  8301001A     BNE $+0x614
		   0x010E3008:  00005BE3     CMPS r0, fp, 0x0
		   0x010E300C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3014
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E3010:  EEE0F9EB     BL $-0x187c40
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E3014:  7400DBE5     LDRB r0, [fp, 0x74]
		   0x010E3018:  000050E3     CMPS r0, r0, 0x0
		   0x010E301C:  7D01001A     BNE $+0x5fc
		   0x010E3020:  30069FE5     LDR r0, [pc, 0x630]
		   0x010E3024:  00009FE7     LDR r0, [pc, r0]
		   0x010E3028:  000090E5     LDR r0, [r0]
		   0x010E302C:  E4E0F9EB     BL $-0x187c68
		   0x010E3030:  0010A0E3     MOV r1, 0x0
		   0x010E3034:  0040A0E1     MOV r4, r0
		   0x010E3038:  D3C900EB     BL $+0x32754  // CALL → ItemData..ctor
		   0x010E303C:  4C009BE5     LDR r0, [fp, 0x4c]
		   0x010E3040:  4C708DE5     STR r7, [sp, 0x4c]
		   0x010E3044:  0B0050E3     CMPS r0, r0, 0xb
		   0x010E3048:  50408DE5     STR r4, [sp, 0x50]
		   0x010E304C:  0700001A     BNE $+0x24  // if (!=) goto 0x010E3070
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010E3050:  4C008DE2     ADD r0, sp, 0x4c
		   0x010E3054:  50308DE2     ADD r3, sp, 0x50
		   0x010E3058:  00008DE5     STR r0, [sp]
		   0x010E305C:  0A00A0E1     MOV r0, r10
		   0x010E3060:  0510A0E1     MOV r1, r5
		   0x010E3064:  0720A0E1     MOV r2, r7
		   0x010E3068:  191400EB     BL $+0x506c  // CALL → GameState.TryApplyBooster
		   0x010E306C:  0D0000EA     B $+0x3c  // goto 0x010E30A8
		   // ──── Block 19 if (!=) ────────────────────
		   0x010E3070:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x010E3074:  0D0050E3     CMPS r0, r0, 0xd
		   0x010E3078:  0C00008A     BHI $+0x38  // if (> (unsigned)) goto 0x010E30B0
		   // 
		   // ──── Block 20 else (<= (unsigned)) ────────────────────
		   0x010E307C:  0110A0E3     MOV r1, 0x1
		   0x010E3080:  0D2BA0E3     MOV r2, 0x3400
		   0x010E3084:  110012E1     TSTS r0, r2, r1, lsl r0
		   0x010E3088:  0800000A     BEQ $+0x28  // if (==) goto 0x010E30B0
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010E308C:  4C008DE2     ADD r0, sp, 0x4c
		   0x010E3090:  50308DE2     ADD r3, sp, 0x50
		   0x010E3094:  00008DE5     STR r0, [sp]
		   0x010E3098:  0A00A0E1     MOV r0, r10
		   0x010E309C:  0510A0E1     MOV r1, r5
		   0x010E30A0:  0720A0E1     MOV r2, r7
		   0x010E30A4:  151500EB     BL $+0x545c  // CALL → GameState.TryMergeChargeableContainer
		   // ──── Block 22 ──────────────────────────────
		   0x010E30A8:  000050E3     CMPS r0, r0, 0x0
		   0x010E30AC:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E30E8
		   // 
		   // ──── Block 23 (from 3 paths) ──────────────────
		   0x010E30B0:  4C008DE2     ADD r0, sp, 0x4c
		   0x010E30B4:  50108DE2     ADD r1, sp, 0x50
		   0x010E30B8:  08108DE5     STR r1, [sp, 0x8]
		   0x010E30BC:  0910A0E1     MOV r1, sb
		   0x010E30C0:  0C008DE5     STR r0, [sp, 0xc]
		   0x010E30C4:  0A00A0E1     MOV r0, r10
		   0x010E30C8:  0520A0E1     MOV r2, r5
		   0x010E30CC:  0730A0E1     MOV r3, r7
		   0x010E30D0:  00B08DE5     STR fp, [sp]
		   0x010E30D4:  04608DE5     STR r6, [sp, 0x4]
		   0x010E30D8:  6F1500EB     BL $+0x55c4  // CALL → GameState.TryMergeRegularItem
		   0x010E30DC:  0040A0E3     MOV r4, 0x0
		   0x010E30E0:  000050E3     CMPS r0, r0, 0x0
		   0x010E30E4:  4B01000A     BEQ $+0x534
		   // ──── Block 24 if (!=) ────────────────────
		   0x010E30E8:  844095E5     LDR r4, [r5, 0x84]
		   0x010E30EC:  000054E3     CMPS r0, r4, 0x0
		   0x010E30F0:  0400A0E1     MOV r0, r4
		   0x010E30F4:  0300001A     BNE $+0x14  // if (!=) goto 0x010E3108
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010E30F8:  B4E0F9EB     BL $-0x187d28
		   0x010E30FC:  840095E5     LDR r0, [r5, 0x84]
		   0x010E3100:  000050E3     CMPS r0, r0, 0x0
		   0x010E3104:  4601000A     BEQ $+0x520
		   // ──── Block 26 if (!=) ────────────────────
		   0x010E3108:  4C8094E5     LDR r8, [r4, 0x4c]
		   0x010E310C:  D00090E5     LDR r0, [r0, 0xd0]
		   0x010E3110:  0B0058E3     CMPS r0, r8, 0xb
		   0x010E3114:  03005003     CMPSEQ r0, r0, 0x3
		   0x010E3118:  2700000A     BEQ $+0xa4
		   0x010E311C:  000057E3     CMPS r0, r7, 0x0
		   0x010E3120:  18008DE5     STR r0, [sp, 0x18]
		   0x010E3124:  0000001A     BNE $+0x8  // if (!=) goto 0x010E312C
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010E3128:  A8E0F9EB     BL $-0x187d58
		   // ──── Block 29 if (!=) ────────────────────
		   0x010E312C:  844097E5     LDR r4, [r7, 0x84]
		   0x010E3130:  1C808DE5     STR r8, [sp, 0x1c]
		   0x010E3134:  000054E3     CMPS r0, r4, 0x0
		   0x010E3138:  20A08DE5     STR r10, [sp, 0x20]
		   0x010E313C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E3144
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010E3140:  A2E0F9EB     BL $-0x187d70
		   // ──── Block 31 if (!=) ────────────────────
		   0x010E3144:  0400A0E1     MOV r0, r4
		   0x010E3148:  0010A0E3     MOV r1, 0x0
		   0x010E314C:  0080A0E3     MOV r8, 0x0
		   0x010E3150:  249B00EB     BL $+0x26c98  // CALL → ItemData.get_Order
		   0x010E3154:  0010A0E1     MOV r1, r0
		   0x010E3158:  28008DE2     ADD r0, sp, 0x28
		*/
	}

	// RVA: 0x10E869C Offset: 0x10E869C VA: 0x10E869C
	private bool TryMergeRegularItem(Cell targetCell, Item originItem, Item targetItem, ItemData originItemData, ItemData targetItemData, ref ItemData resultItemData, ref Item resultItem) {
		/* Disassembly (ARM32, 150 instructions, 0x258 bytes):
		   // CFG: 33 blocks, 31 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E869C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E86A0:  1CD04DE2     SUB sp, sp, 0x1c
		   0x010E86A4:  18308DE5     STR r3, [sp, 0x18]
		   0x010E86A8:  00A0A0E1     MOV r10, r0
		   0x010E86AC:  14108DE5     STR r1, [sp, 0x14]
		   0x010E86B0:  02B0A0E1     MOV fp, r2
		   0x010E86B4:  14529FE5     LDR r5, [pc, 0x214]
		   0x010E86B8:  44409DE5     LDR r4, [sp, 0x44]
		   0x010E86BC:  05508FE0     ADD r5, pc, r5
		   0x010E86C0:  0000D5E5     LDRB r0, [r5]
		   0x010E86C4:  000050E3     CMPS r0, r0, 0x0
		   0x010E86C8:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E8704
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E86CC:  00029FE5     LDR r0, [pc, 0x200]
		   0x010E86D0:  00009FE7     LDR r0, [pc, r0]
		   0x010E86D4:  A1CAF9EB     BL $-0x18d574
		   0x010E86D8:  F8019FE5     LDR r0, [pc, 0x1f8]
		   0x010E86DC:  00009FE7     LDR r0, [pc, r0]
		   0x010E86E0:  9ECAF9EB     BL $-0x18d580
		   0x010E86E4:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x010E86E8:  00009FE7     LDR r0, [pc, r0]
		   0x010E86EC:  9BCAF9EB     BL $-0x18d58c
		   0x010E86F0:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x010E86F4:  00009FE7     LDR r0, [pc, r0]
		   0x010E86F8:  98CAF9EB     BL $-0x18d598
		   0x010E86FC:  0100A0E3     MOV r0, 0x1
		   0x010E8700:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E8704:  40709DE5     LDR r7, [sp, 0x40]
		   0x010E8708:  000054E3     CMPS r0, r4, 0x0
		   0x010E870C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8714
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E8710:  2ECBF9EB     BL $-0x18d340
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E8714:  0400A0E1     MOV r0, r4
		   0x010E8718:  0010A0E3     MOV r1, 0x0
		   0x010E871C:  B18500EB     BL $+0x216cc  // CALL → ItemData.get_Order
		   0x010E8720:  0060A0E1     MOV r6, r0
		   0x010E8724:  000057E3     CMPS r0, r7, 0x0
		   0x010E8728:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8730
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E872C:  27CBF9EB     BL $-0x18d35c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E8730:  0700A0E1     MOV r0, r7
		   0x010E8734:  0010A0E3     MOV r1, 0x0
		   0x010E8738:  AA8500EB     BL $+0x216b0  // CALL → ItemData.get_Order
		   0x010E873C:  0050A0E1     MOV r5, r0
		   0x010E8740:  000054E3     CMPS r0, r4, 0x0
		   0x010E8744:  0000001A     BNE $+0x8  // if (!=) goto 0x010E874C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E8748:  20CBF9EB     BL $-0x18d378
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E874C:  088094E5     LDR r8, [r4, 0x8]
		   0x010E8750:  000057E3     CMPS r0, r7, 0x0
		   0x010E8754:  0000001A     BNE $+0x8  // if (!=) goto 0x010E875C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E8758:  1CCBF9EB     BL $-0x18d388
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E875C:  80919FE5     LDR sb, [pc, 0x180]
		   0x010E8760:  09909FE7     LDR sb, [pc, sb]
		   0x010E8764:  087097E5     LDR r7, [r7, 0x8]
		   0x010E8768:  000099E5     LDR r0, [sb]
		   0x010E876C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E8770:  000051E3     CMPS r0, r1, 0x0
		   0x010E8774:  0000001A     BNE $+0x8  // if (!=) goto 0x010E877C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E8778:  C5CAF9EB     BL $-0x18d4e4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E877C:  0800A0E1     MOV r0, r8
		   0x010E8780:  0710A0E1     MOV r1, r7
		   0x010E8784:  0020A0E3     MOV r2, 0x0
		   0x010E8788:  F9F0FCEB     BL $-0xc3c14
		   0x010E878C:  000050E3     CMPS r0, r0, 0x0
		   0x010E8790:  05005601     CMPSEQ r0, r6, r5
		   0x010E8794:  0200000A     BEQ $+0x10  // if (==) goto 0x010E87A4
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010E8798:  0000A0E3     MOV r0, 0x0
		   0x010E879C:  1CD08DE2     ADD sp, sp, 0x1c
		   0x010E87A0:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 14 if (==) ────────────────────
		   0x010E87A4:  084094E5     LDR r4, [r4, 0x8]
		   0x010E87A8:  000054E3     CMPS r0, r4, 0x0
		   0x010E87AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E87B4
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E87B0:  06CBF9EB     BL $-0x18d3e0
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E87B4:  284094E5     LDR r4, [r4, 0x28]
		   0x010E87B8:  000054E3     CMPS r0, r4, 0x0
		   0x010E87BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E87C4
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E87C0:  02CBF9EB     BL $-0x18d3f0
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E87C4:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010E87C8:  010040E2     SUB r0, r0, 0x1
		   0x010E87CC:  060050E1     CMPS r0, r0, r6
		   0x010E87D0:  F0FFFFDA     BLE $-0x38
		   // ──── Block 19 else (>) ────────────────────
		   0x010E87D4:  00005BE3     CMPS r0, fp, 0x0
		   0x010E87D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E87E0
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010E87DC:  FBCAF9EB     BL $-0x18d40c
		   // ──── Block 21 if (!=) ────────────────────
		   0x010E87E0:  84509BE5     LDR r5, [fp, 0x84]
		   0x010E87E4:  000055E3     CMPS r0, r5, 0x0
		   0x010E87E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E87F0
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E87EC:  F7CAF9EB     BL $-0x18d41c
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E87F0:  0500A0E1     MOV r0, r5
		   0x010E87F4:  0010A0E3     MOV r1, 0x0
		   0x010E87F8:  084095E5     LDR r4, [r5, 0x8]
		   0x010E87FC:  798500EB     BL $+0x215ec  // CALL → ItemData.get_Order
		   0x010E8800:  0050A0E1     MOV r5, r0
		   0x010E8804:  000054E3     CMPS r0, r4, 0x0
		   0x010E8808:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8810
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010E880C:  EFCAF9EB     BL $-0x18d43c
		   // ──── Block 25 if (!=) ────────────────────
		   0x010E8810:  011085E2     ADD r1, r5, 0x1
		   0x010E8814:  0400A0E1     MOV r0, r4
		   0x010E8818:  0194FFEB     BL $-0x1aff4
		   0x010E881C:  0040A0E1     MOV r4, r0
		   0x010E8820:  000099E5     LDR r0, [sb]
		   0x010E8824:  741090E5     LDR r1, [r0, 0x74]
		   0x010E8828:  000051E3     CMPS r0, r1, 0x0
		   0x010E882C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8834
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010E8830:  97CAF9EB     BL $-0x18d59c
		   // ──── Block 27 if (!=) ────────────────────
		   0x010E8834:  0400A0E1     MOV r0, r4
		   0x010E8838:  0010A0E3     MOV r1, 0x0
		   0x010E883C:  0020A0E3     MOV r2, 0x0
		   0x010E8840:  953D3CEB     BL $+0xf0f65c  // CALL → sub_1FF7E9C
		   0x010E8844:  000050E3     CMPS r0, r0, 0x0
		   0x010E8848:  1500000A     BEQ $+0x5c  // if (==) goto 0x010E88A4
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x010E884C:  94009FE5     LDR r0, [pc, 0x94]
		   0x010E8850:  00009FE7     LDR r0, [pc, r0]
		   0x010E8854:  000090E5     LDR r0, [r0]
		   0x010E8858:  D9CAF9EB     BL $-0x18d494
		   0x010E885C:  0040A0E1     MOV r4, r0
		   0x010E8860:  84009FE5     LDR r0, [pc, 0x84]
		   0x010E8864:  0020A0E3     MOV r2, 0x0
		   0x010E8868:  00009FE7     LDR r0, [pc, r0]
		   0x010E886C:  001090E5     LDR r1, [r0]
		   0x010E8870:  0400A0E1     MOV r0, r4
		   0x010E8874:  F0817EEB     BL $+0x1fa07c8  // CALL → Exception..ctor
		   0x010E8878:  70009FE5     LDR r0, [pc, 0x70]
		   0x010E887C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8880:  000090E5     LDR r0, [r0]
		   0x010E8884:  741090E5     LDR r1, [r0, 0x74]
		   0x010E8888:  000051E3     CMPS r0, r1, 0x0
		   0x010E888C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8894
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010E8890:  7FCAF9EB     BL $-0x18d5fc
		   // ──── Block 30 if (!=) ────────────────────
		   0x010E8894:  0400A0E1     MOV r0, r4
		   0x010E8898:  0010A0E3     MOV r1, 0x0
		   0x010E889C:  873D3CEB     BL $+0xf0f624  // CALL → sub_1FF7EC0
		   0x010E88A0:  BCFFFFEA     B $-0x108
		   // ──── Block 31 if (==) ────────────────────
		   0x010E88A4:  48109DE5     LDR r1, [sp, 0x48]
		   0x010E88A8:  0B20A0E1     MOV r2, fp
		   0x010E88AC:  04108DE5     STR r1, [sp, 0x4]
		   0x010E88B0:  14109DE5     LDR r1, [sp, 0x14]
		   0x010E88B4:  18309DE5     LDR r3, [sp, 0x18]
		   0x010E88B8:  4C009DE5     LDR r0, [sp, 0x4c]
		   0x010E88BC:  08008DE5     STR r0, [sp, 0x8]
		   0x010E88C0:  0A00A0E1     MOV r0, r10
		   0x010E88C4:  00408DE5     STR r4, [sp]
		   0x010E88C8:  D10000EB     BL $+0x34c  // CALL → GameState.MergeTwoItems
		   0x010E88CC:  B2FFFFEA     B $-0x130
		   0x010E88D0:  F9351403     TSTSEQ r3, r4, 0x3e400000
		   0x010E88D4:  B8DEF802     RSCSEQ sp, r8, 0xb80
		   0x010E88D8:  10E2F802     RSCSEQ lr, r8, 0x1
		   0x010E88DC:  50DEF802     RSCSEQ sp, r8, 0x500
		   0x010E88E0:  700CF902     RSCSEQ r0, sb, 0x7000
		   0x010E88E4:  D8DDF802     RSCSEQ sp, r8, 0x3600
		   0x010E88E8:  9CE0F802     RSCSEQ lr, r8, 0x9c
		   0x010E88EC:  FC0AF902     RSCSEQ r0, sb, 0xfc000
		   0x010E88F0:  0CDDF802     RSCSEQ sp, r8, 0x300
		*/
	}

	// RVA: 0x10E8500 Offset: 0x10E8500 VA: 0x10E8500
	private bool TryMergeChargeableContainer(Item originItem, Item targetItem, ref ItemData resultItemData, ref Item resultItem) {
		/* Disassembly (ARM32, 103 instructions, 0x19C bytes):
		   // CFG: 26 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E8500:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E8504:  7C519FE5     LDR r5, [pc, 0x17c]
		   0x010E8508:  0080A0E1     MOV r8, r0
		   0x010E850C:  0390A0E1     MOV sb, r3
		   0x010E8510:  0270A0E1     MOV r7, r2
		   0x010E8514:  05508FE0     ADD r5, pc, r5
		   0x010E8518:  0140A0E1     MOV r4, r1
		   0x010E851C:  0000D5E5     LDRB r0, [r5]
		   0x010E8520:  000050E3     CMPS r0, r0, 0x0
		   0x010E8524:  0700001A     BNE $+0x24  // if (!=) goto 0x010E8548
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E8528:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010E852C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8530:  0ACBF9EB     BL $-0x18d3d0
		   0x010E8534:  54019FE5     LDR r0, [pc, 0x154]
		   0x010E8538:  00009FE7     LDR r0, [pc, r0]
		   0x010E853C:  07CBF9EB     BL $-0x18d3dc
		   0x010E8540:  0100A0E3     MOV r0, 0x1
		   0x010E8544:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E8548:  0050A0E3     MOV r5, 0x0
		   0x010E854C:  000057E3     CMPS r0, r7, 0x0
		   0x010E8550:  0D00000A     BEQ $+0x3c  // if (==) goto 0x010E858C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E8554:  38019FE5     LDR r0, [pc, 0x138]
		   0x010E8558:  00009FE7     LDR r0, [pc, r0]
		   0x010E855C:  001097E5     LDR r1, [r7]
		   0x010E8560:  000090E5     LDR r0, [r0]
		   0x010E8564:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E8568:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E856C:  020053E1     CMPS r0, r3, r2
		   0x010E8570:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E858C
		   // 
		   // ──── Block 4 else (>= (unsigned)) ────────────────────
		   0x010E8574:  641091E5     LDR r1, [r1, 0x64]
		   0x010E8578:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E857C:  041011E5     LDR r1, [r1, -0x4]
		   0x010E8580:  000051E1     CMPS r0, r1, r0
		   0x010E8584:  0070A013     MOVNE r7, 0x0
		   0x010E8588:  0750A0E1     MOV r5, r7
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010E858C:  04A19FE5     LDR r10, [pc, 0x104]
		   0x010E8590:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E8594:  00009AE5     LDR r0, [r10]
		   0x010E8598:  741090E5     LDR r1, [r0, 0x74]
		   0x010E859C:  000051E3     CMPS r0, r1, 0x0
		   0x010E85A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E85A8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E85A4:  3ACBF9EB     BL $-0x18d310
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E85A8:  0500A0E1     MOV r0, r5
		   0x010E85AC:  0010A0E3     MOV r1, 0x0
		   0x010E85B0:  0070A0E3     MOV r7, 0x0
		   0x010E85B4:  103F3CEB     BL $+0xf0fc48  // CALL → sub_1FF81FC
		   0x010E85B8:  000050E3     CMPS r0, r0, 0x0
		   0x010E85BC:  2F00000A     BEQ $+0xc4  // if (==) goto 0x010E8680
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x010E85C0:  000054E3     CMPS r0, r4, 0x0
		   0x010E85C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E85CC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E85C8:  80CBF9EB     BL $-0x18d1f8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E85CC:  846094E5     LDR r6, [r4, 0x84]
		   0x010E85D0:  000056E3     CMPS r0, r6, 0x0
		   0x010E85D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E85DC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E85D8:  7CCBF9EB     BL $-0x18d208
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E85DC:  146096E5     LDR r6, [r6, 0x14]
		   0x010E85E0:  000055E3     CMPS r0, r5, 0x0
		   0x010E85E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E85EC
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E85E8:  78CBF9EB     BL $-0x18d218
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E85EC:  0500A0E1     MOV r0, r5
		   0x010E85F0:  0610A0E1     MOV r1, r6
		   0x010E85F4:  0020A0E3     MOV r2, 0x0
		   0x010E85F8:  0070A0E3     MOV r7, 0x0
		   0x010E85FC:  4A7700EB     BL $+0x1dd30  // CALL → ItemChargeableContainer.TryAddFill
		   0x010E8600:  000050E3     CMPS r0, r0, 0x0
		   0x010E8604:  1D00000A     BEQ $+0x7c  // if (==) goto 0x010E8680
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x010E8608:  00009AE5     LDR r0, [r10]
		   0x010E860C:  107094E5     LDR r7, [r4, 0x10]
		   0x010E8610:  741090E5     LDR r1, [r0, 0x74]
		   0x010E8614:  000051E3     CMPS r0, r1, 0x0
		   0x010E8618:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8620
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010E861C:  1CCBF9EB     BL $-0x18d388
		   // ──── Block 17 if (!=) ────────────────────
		   0x010E8620:  0700A0E1     MOV r0, r7
		   0x010E8624:  0010A0E3     MOV r1, 0x0
		   0x010E8628:  F33E3CEB     BL $+0xf0fbd4  // CALL → sub_1FF81FC
		   0x010E862C:  000050E3     CMPS r0, r0, 0x0
		   0x010E8630:  0600000A     BEQ $+0x20  // if (==) goto 0x010E8650
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x010E8634:  106094E5     LDR r6, [r4, 0x10]
		   0x010E8638:  000056E3     CMPS r0, r6, 0x0
		   0x010E863C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8644
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E8640:  62CBF9EB     BL $-0x18d270
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E8644:  0600A0E1     MOV r0, r6
		   0x010E8648:  0010A0E3     MOV r1, 0x0
		   0x010E864C:  8B91FFEB     BL $-0x1b9cc
		   // ──── Block 21 if (==) ────────────────────
		   0x010E8650:  20609DE5     LDR r6, [sp, 0x20]
		   0x010E8654:  000055E3     CMPS r0, r5, 0x0
		   0x010E8658:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8660
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E865C:  5BCBF9EB     BL $-0x18d28c
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E8660:  840095E5     LDR r0, [r5, 0x84]
		   0x010E8664:  0410A0E1     MOV r1, r4
		   0x010E8668:  000089E5     STR r0, [sb]
		   0x010E866C:  0800A0E1     MOV r0, r8
		   0x010E8670:  0520A0E1     MOV r2, r5
		   0x010E8674:  005086E5     STR r5, [r6]
		   0x010E8678:  7AF2FFEB     BL $-0x3610
		   0x010E867C:  0170A0E3     MOV r7, 0x1
		   // ──── Block 24 (from 2 paths) ──────────────────
		   0x010E8680:  0700A0E1     MOV r0, r7
		   0x010E8684:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010E8688:  A2371403     TSTSEQ r3, r4, 0x2880000
		   0x010E868C:  940AF902     RSCSEQ r0, sb, 0x94000
		   0x010E8690:  00E0F802     RSCSEQ lr, r8, 0x0
		   0x010E8694:  680AF902     RSCSEQ r0, sb, 0x68000
		   0x010E8698:  A8DFF802     RSCSEQ sp, r8, 0x2a0
		*/
	}

	// RVA: 0x10E91E0 Offset: 0x10E91E0 VA: 0x10E91E0
	private bool CanMerge2ChargeableContainers(Item originItem, Item targetItem) {
		/* Disassembly (ARM32, 335 instructions, 0x53C bytes):
		   // CFG: 75 blocks, 82 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E91E0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E91E4:  18D04DE2     SUB sp, sp, 0x18
		   0x010E91E8:  D4449FE5     LDR r4, [pc, 0x4d4]
		   0x010E91EC:  0080A0E1     MOV r8, r0
		   0x010E91F0:  0270A0E1     MOV r7, r2
		   0x010E91F4:  0150A0E1     MOV r5, r1
		   0x010E91F8:  04408FE0     ADD r4, pc, r4
		   0x010E91FC:  0000D4E5     LDRB r0, [r4]
		   0x010E9200:  000050E3     CMPS r0, r0, 0x0
		   0x010E9204:  1C00001A     BNE $+0x78  // if (!=) goto 0x010E927C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E9208:  B8049FE5     LDR r0, [pc, 0x4b8]
		   0x010E920C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9210:  D2C7F9EB     BL $-0x18e0b0
		   0x010E9214:  B0049FE5     LDR r0, [pc, 0x4b0]
		   0x010E9218:  00009FE7     LDR r0, [pc, r0]
		   0x010E921C:  CFC7F9EB     BL $-0x18e0bc
		   0x010E9220:  A8049FE5     LDR r0, [pc, 0x4a8]
		   0x010E9224:  00009FE7     LDR r0, [pc, r0]
		   0x010E9228:  CCC7F9EB     BL $-0x18e0c8
		   0x010E922C:  A0049FE5     LDR r0, [pc, 0x4a0]
		   0x010E9230:  00009FE7     LDR r0, [pc, r0]
		   0x010E9234:  C9C7F9EB     BL $-0x18e0d4
		   0x010E9238:  98049FE5     LDR r0, [pc, 0x498]
		   0x010E923C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9240:  C6C7F9EB     BL $-0x18e0e0
		   0x010E9244:  90049FE5     LDR r0, [pc, 0x490]
		   0x010E9248:  00009FE7     LDR r0, [pc, r0]
		   0x010E924C:  C3C7F9EB     BL $-0x18e0ec
		   0x010E9250:  88049FE5     LDR r0, [pc, 0x488]
		   0x010E9254:  00009FE7     LDR r0, [pc, r0]
		   0x010E9258:  C0C7F9EB     BL $-0x18e0f8
		   0x010E925C:  80049FE5     LDR r0, [pc, 0x480]
		   0x010E9260:  00009FE7     LDR r0, [pc, r0]
		   0x010E9264:  BDC7F9EB     BL $-0x18e104
		   0x010E9268:  78049FE5     LDR r0, [pc, 0x478]
		   0x010E926C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9270:  BAC7F9EB     BL $-0x18e110
		   0x010E9274:  0100A0E3     MOV r0, 0x1
		   0x010E9278:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E927C:  68049FE5     LDR r0, [pc, 0x468]
		   0x010E9280:  0040A0E3     MOV r4, 0x0
		   0x010E9284:  000055E3     CMPS r0, r5, 0x0
		   0x010E9288:  0060A0E3     MOV r6, 0x0
		   0x010E928C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9290:  000090E5     LDR r0, [r0]
		   0x010E9294:  0A00000A     BEQ $+0x30  // if (==) goto 0x010E92C4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E9298:  001095E5     LDR r1, [r5]
		   0x010E929C:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E92A0:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E92A4:  020053E1     CMPS r0, r3, r2
		   0x010E92A8:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E92C4
		   // 
		   // ──── Block 4 else (>= (unsigned)) ────────────────────
		   0x010E92AC:  641091E5     LDR r1, [r1, 0x64]
		   0x010E92B0:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E92B4:  041011E5     LDR r1, [r1, -0x4]
		   0x010E92B8:  000051E1     CMPS r0, r1, r0
		   0x010E92BC:  0050A013     MOVNE r5, 0x0
		   0x010E92C0:  0560A0E1     MOV r6, r5
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010E92C4:  000057E3     CMPS r0, r7, 0x0
		   0x010E92C8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010E92F8
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010E92CC:  001097E5     LDR r1, [r7]
		   0x010E92D0:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E92D4:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E92D8:  020053E1     CMPS r0, r3, r2
		   0x010E92DC:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E92F8
		   // 
		   // ──── Block 7 else (>= (unsigned)) ────────────────────
		   0x010E92E0:  641091E5     LDR r1, [r1, 0x64]
		   0x010E92E4:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E92E8:  041011E5     LDR r1, [r1, -0x4]
		   0x010E92EC:  000051E1     CMPS r0, r1, r0
		   0x010E92F0:  0070A013     MOVNE r7, 0x0
		   0x010E92F4:  0740A0E1     MOV r4, r7
		   // ──── Block 8 (from 2 paths) ──────────────────
		   0x010E92F8:  F0739FE5     LDR r7, [pc, 0x3f0]
		   0x010E92FC:  07709FE7     LDR r7, [pc, r7]
		   0x010E9300:  000097E5     LDR r0, [r7]
		   0x010E9304:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9308:  000051E3     CMPS r0, r1, 0x0
		   0x010E930C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9314
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E9310:  DFC7F9EB     BL $-0x18e07c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E9314:  0600A0E1     MOV r0, r6
		   0x010E9318:  0010A0E3     MOV r1, 0x0
		   0x010E931C:  B63B3CEB     BL $+0xf0eee0  // CALL → sub_1FF81FC
		   0x010E9320:  000050E3     CMPS r0, r0, 0x0
		   0x010E9324:  2100000A     BEQ $+0x8c  // if (==) goto 0x010E93B0
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010E9328:  000097E5     LDR r0, [r7]
		   0x010E932C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9330:  000051E3     CMPS r0, r1, 0x0
		   0x010E9334:  0000001A     BNE $+0x8  // if (!=) goto 0x010E933C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E9338:  D5C7F9EB     BL $-0x18e0a4
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E933C:  0400A0E1     MOV r0, r4
		   0x010E9340:  0010A0E3     MOV r1, 0x0
		   0x010E9344:  AC3B3CEB     BL $+0xf0eeb8  // CALL → sub_1FF81FC
		   0x010E9348:  000050E3     CMPS r0, r0, 0x0
		   0x010E934C:  1700000A     BEQ $+0x64  // if (==) goto 0x010E93B0
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010E9350:  000056E3     CMPS r0, r6, 0x0
		   0x010E9354:  0000001A     BNE $+0x8  // if (!=) goto 0x010E935C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E9358:  1CC8F9EB     BL $-0x18df88
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E935C:  C85096E5     LDR r5, [r6, 0xc8]
		   0x010E9360:  000055E3     CMPS r0, r5, 0x0
		   0x010E9364:  0000001A     BNE $+0x8  // if (!=) goto 0x010E936C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E9368:  18C8F9EB     BL $-0x18df98
		   // ──── Block 18 if (!=) ────────────────────
		   0x010E936C:  0500A0E1     MOV r0, r5
		   0x010E9370:  0010A0E3     MOV r1, 0x0
		   0x010E9374:  376A00EB     BL $+0x1a8e4  // CALL → ChargeableContainerFillData.IsFullyFilled
		   0x010E9378:  000050E3     CMPS r0, r0, 0x0
		   0x010E937C:  0B00001A     BNE $+0x34  // if (!=) goto 0x010E93B0
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E9380:  000054E3     CMPS r0, r4, 0x0
		   0x010E9384:  0000001A     BNE $+0x8  // if (!=) goto 0x010E938C
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010E9388:  10C8F9EB     BL $-0x18dfb8
		   // ──── Block 21 if (!=) ────────────────────
		   0x010E938C:  C85094E5     LDR r5, [r4, 0xc8]
		   0x010E9390:  000055E3     CMPS r0, r5, 0x0
		   0x010E9394:  0000001A     BNE $+0x8  // if (!=) goto 0x010E939C
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E9398:  0CC8F9EB     BL $-0x18dfc8
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E939C:  0500A0E1     MOV r0, r5
		   0x010E93A0:  0010A0E3     MOV r1, 0x0
		   0x010E93A4:  2B6A00EB     BL $+0x1a8b4  // CALL → ChargeableContainerFillData.IsFullyFilled
		   0x010E93A8:  000050E3     CMPS r0, r0, 0x0
		   0x010E93AC:  6100000A     BEQ $+0x18c  // if (==) goto 0x010E9538
		   // 
		   // ──── Block 24 (from 4 paths) ──────────────────
		   0x010E93B0:  000097E5     LDR r0, [r7]
		   0x010E93B4:  741090E5     LDR r1, [r0, 0x74]
		   0x010E93B8:  000051E3     CMPS r0, r1, 0x0
		   0x010E93BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E93C4
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010E93C0:  B3C7F9EB     BL $-0x18e12c
		   // ──── Block 26 if (!=) ────────────────────
		   0x010E93C4:  0600A0E1     MOV r0, r6
		   0x010E93C8:  0010A0E3     MOV r1, 0x0
		   0x010E93CC:  8A3B3CEB     BL $+0xf0ee30  // CALL → sub_1FF81FC
		   0x010E93D0:  000050E3     CMPS r0, r0, 0x0
		   0x010E93D4:  0B00000A     BEQ $+0x34  // if (==) goto 0x010E9408
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x010E93D8:  000056E3     CMPS r0, r6, 0x0
		   0x010E93DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E93E4
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010E93E0:  FAC7F9EB     BL $-0x18e010
		   // ──── Block 29 if (!=) ────────────────────
		   0x010E93E4:  C85096E5     LDR r5, [r6, 0xc8]
		   0x010E93E8:  000055E3     CMPS r0, r5, 0x0
		   0x010E93EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E93F4
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010E93F0:  F6C7F9EB     BL $-0x18e020
		   // ──── Block 31 if (!=) ────────────────────
		   0x010E93F4:  0500A0E1     MOV r0, r5
		   0x010E93F8:  0010A0E3     MOV r1, 0x0
		   0x010E93FC:  156A00EB     BL $+0x1a85c  // CALL → ChargeableContainerFillData.IsFullyFilled
		   0x010E9400:  000050E3     CMPS r0, r0, 0x0
		   0x010E9404:  1700001A     BNE $+0x64  // if (!=) goto 0x010E9468
		   // 
		   // ──── Block 32 (from 2 paths) ──────────────────
		   0x010E9408:  000097E5     LDR r0, [r7]
		   0x010E940C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9410:  000051E3     CMPS r0, r1, 0x0
		   0x010E9414:  0000001A     BNE $+0x8  // if (!=) goto 0x010E941C
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010E9418:  9DC7F9EB     BL $-0x18e184
		   // ──── Block 34 if (!=) ────────────────────
		   0x010E941C:  0400A0E1     MOV r0, r4
		   0x010E9420:  0010A0E3     MOV r1, 0x0
		   0x010E9424:  0090A0E3     MOV sb, 0x0
		   0x010E9428:  733B3CEB     BL $+0xf0edd4  // CALL → sub_1FF81FC
		   0x010E942C:  000050E3     CMPS r0, r0, 0x0
		   0x010E9430:  3D00000A     BEQ $+0xfc  // if (==) goto 0x010E952C
		   // 
		   // ──── Block 35 else (!=) ────────────────────
		   0x010E9434:  000054E3     CMPS r0, r4, 0x0
		   0x010E9438:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9440
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010E943C:  E3C7F9EB     BL $-0x18e06c
		   // ──── Block 37 if (!=) ────────────────────
		   0x010E9440:  C84094E5     LDR r4, [r4, 0xc8]
		   0x010E9444:  000054E3     CMPS r0, r4, 0x0
		   0x010E9448:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9450
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x010E944C:  DFC7F9EB     BL $-0x18e07c
		   // ──── Block 39 if (!=) ────────────────────
		   0x010E9450:  0400A0E1     MOV r0, r4
		   0x010E9454:  0010A0E3     MOV r1, 0x0
		   0x010E9458:  0090A0E3     MOV sb, 0x0
		   0x010E945C:  FD6900EB     BL $+0x1a7fc  // CALL → ChargeableContainerFillData.IsFullyFilled
		   0x010E9460:  000050E3     CMPS r0, r0, 0x0
		   0x010E9464:  3000000A     BEQ $+0xc8  // if (==) goto 0x010E952C
		   // 
		   // ──── Block 40 (from 2 paths) ──────────────────
		   0x010E9468:  84429FE5     LDR r4, [pc, 0x284]
		   0x010E946C:  04409FE7     LDR r4, [pc, r4]
		   0x010E9470:  000094E5     LDR r0, [r4]
		   0x010E9474:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9478:  000051E3     CMPS r0, r1, 0x0
		   0x010E947C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9484
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010E9480:  83C7F9EB     BL $-0x18e1ec
		   // ──── Block 42 if (!=) ────────────────────
		   0x010E9484:  6C529FE5     LDR r5, [pc, 0x26c]
		   0x010E9488:  05508FE0     ADD r5, pc, r5
		   0x010E948C:  0000D5E5     LDRB r0, [r5]
		   0x010E9490:  000050E3     CMPS r0, r0, 0x0
		   0x010E9494:  0400001A     BNE $+0x18  // if (!=) goto 0x010E94AC
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x010E9498:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x010E949C:  00009FE7     LDR r0, [pc, r0]
		   0x010E94A0:  2EC7F9EB     BL $-0x18e340
		   0x010E94A4:  0100A0E3     MOV r0, 0x1
		   0x010E94A8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 44 if (!=) ────────────────────
		   0x010E94AC:  000094E5     LDR r0, [r4]
		   0x010E94B0:  741090E5     LDR r1, [r0, 0x74]
		   0x010E94B4:  000051E3     CMPS r0, r1, 0x0
		   0x010E94B8:  0100001A     BNE $+0xc  // if (!=) goto 0x010E94C4
		   // 
		   // ──── Block 45 else (==) ────────────────────
		   0x010E94BC:  74C7F9EB     BL $-0x18e228
		   0x010E94C0:  000094E5     LDR r0, [r4]
		   // ──── Block 46 if (!=) ────────────────────
		   0x010E94C4:  34129FE5     LDR r1, [pc, 0x234]
		   0x010E94C8:  01109FE7     LDR r1, [pc, r1]
		   0x010E94CC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E94D0:  001091E5     LDR r1, [r1]
		   0x010E94D4:  044090E5     LDR r4, [r0, 0x4]
		   0x010E94D8:  742091E5     LDR r2, [r1, 0x74]
		   0x010E94DC:  000052E3     CMPS r0, r2, 0x0
		   0x010E94E0:  0100001A     BNE $+0xc  // if (!=) goto 0x010E94EC
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x010E94E4:  0100A0E1     MOV r0, r1
		   0x010E94E8:  69C7F9EB     BL $-0x18e254
		   // ──── Block 48 if (!=) ────────────────────
		   0x010E94EC:  0C008DE2     ADD r0, sp, 0xc
		   0x010E94F0:  0010A0E3     MOV r1, 0x0
		   0x010E94F4:  0090A0E3     MOV sb, 0x0
		   0x010E94F8:  99DFFDEB     BL $-0x88194
		   0x010E94FC:  0C708DE2     ADD r7, sp, 0xc
		   0x010E9500:  000054E3     CMPS r0, r4, 0x0
		   0x010E9504:  E00097E8     LDM r7, {r5, r6, r7}
		   0x010E9508:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9510
		   // 
		   // ──── Block 49 else (==) ────────────────────
		   0x010E950C:  AFC7F9EB     BL $-0x18e13c
		   // ──── Block 50 if (!=) ────────────────────
		   0x010E9510:  2380A0E3     MOV r8, 0x23
		   0x010E9514:  F080CDE1     STRD r8, sb, [sp]
		   0x010E9518:  0400A0E1     MOV r0, r4
		   0x010E951C:  0510A0E1     MOV r1, r5
		   0x010E9520:  0620A0E1     MOV r2, r6
		   0x010E9524:  0730A0E1     MOV r3, r7
		   0x010E9528:  2C150AEB     BL $+0x2854b8  // CALL → UIPoppingAlert.ShowMessage
		   // ──── Block 51 (from 2 paths) ──────────────────
		   0x010E952C:  0900A0E1     MOV r0, sb
		   0x010E9530:  18D08DE2     ADD sp, sp, 0x18
		   0x010E9534:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 52 if (==) ────────────────────
		   0x010E9538:  C4919FE5     LDR sb, [pc, 0x1c4]
		   0x010E953C:  09909FE7     LDR sb, [pc, sb]
		   0x010E9540:  405098E5     LDR r5, [r8, 0x40]
		   0x010E9544:  000099E5     LDR r0, [sb]
		   0x010E9548:  741090E5     LDR r1, [r0, 0x74]
		   0x010E954C:  000051E3     CMPS r0, r1, 0x0
		   0x010E9550:  0100001A     BNE $+0xc  // if (!=) goto 0x010E955C
		   // 
		   // ──── Block 53 else (==) ────────────────────
		   0x010E9554:  4EC7F9EB     BL $-0x18e2c0
		   0x010E9558:  000099E5     LDR r0, [sb]
		   // ──── Block 54 if (!=) ────────────────────
		   0x010E955C:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010E9560:  2C7091E5     LDR r7, [r1, 0x2c]
		   0x010E9564:  000057E3     CMPS r0, r7, 0x0
		   0x010E9568:  1500001A     BNE $+0x5c  // if (!=) goto 0x010E95C4
		   // 
		   // ──── Block 55 else (==) ────────────────────
		   0x010E956C:  742090E5     LDR r2, [r0, 0x74]
		   0x010E9570:  000052E3     CMPS r0, r2, 0x0
		   0x010E9574:  0200001A     BNE $+0x10  // if (!=) goto 0x010E9584
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x010E9578:  45C7F9EB     BL $-0x18e2e4
		   0x010E957C:  000099E5     LDR r0, [sb]
		   0x010E9580:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 57 if (!=) ────────────────────
		   0x010E9584:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x010E9588:  00009FE7     LDR r0, [pc, r0]
		   0x010E958C:  008091E5     LDR r8, [r1]
		   0x010E9590:  000090E5     LDR r0, [r0]
		   0x010E9594:  8AC7F9EB     BL $-0x18e1d0
		   0x010E9598:  0070A0E1     MOV r7, r0
		   0x010E959C:  68019FE5     LDR r0, [pc, 0x168]
		   0x010E95A0:  0810A0E1     MOV r1, r8
		   0x010E95A4:  0030A0E3     MOV r3, 0x0
		   0x010E95A8:  00009FE7     LDR r0, [pc, r0]
		   0x010E95AC:  002090E5     LDR r2, [r0]
		   0x010E95B0:  0700A0E1     MOV r0, r7
		   0x010E95B4:  1E2A61EB     BL $+0x184a880  // CALL → Func<object, bool>..ctor
		   0x010E95B8:  000099E5     LDR r0, [sb]
		   0x010E95BC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E95C0:  2C7080E5     STR r7, [r0, 0x2c]
		   // ──── Block 58 if (!=) ────────────────────
		   0x010E95C4:  44019FE5     LDR r0, [pc, 0x144]
		   0x010E95C8:  0710A0E1     MOV r1, r7
		   0x010E95CC:  00009FE7     LDR r0, [pc, r0]
		   0x010E95D0:  002090E5     LDR r2, [r0]
		   0x010E95D4:  0500A0E1     MOV r0, r5
		   0x010E95D8:  2F2722EB     BL $+0x889cc4  // CALL → ExtensionMethods.FindAllElements<object>
		   0x010E95DC:  0070A0E1     MOV r7, r0
		   0x010E95E0:  000050E3     CMPS r0, r0, 0x0
		   0x010E95E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E95EC
		   // 
		   // ──── Block 59 else (==) ────────────────────
		   0x010E95E8:  78C7F9EB     BL $-0x18e218
		   // ──── Block 60 if (!=) ────────────────────
		   0x010E95EC:  C85096E5     LDR r5, [r6, 0xc8]
		   0x010E95F0:  0C6097E5     LDR r6, [r7, 0xc]
		   0x010E95F4:  000055E3     CMPS r0, r5, 0x0
		   0x010E95F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9600
		   // 
		   // ──── Block 61 else (==) ────────────────────
		   0x010E95FC:  73C7F9EB     BL $-0x18e22c
		   // ──── Block 62 if (!=) ────────────────────
		   0x010E9600:  0500A0E1     MOV r0, r5
		   0x010E9604:  0010A0E3     MOV r1, 0x0
		   0x010E9608:  E96900EB     BL $+0x1a7ac  // CALL → ChargeableContainerFillData.GetNumberOfFilledItems
		   0x010E960C:  C84094E5     LDR r4, [r4, 0xc8]
		   0x010E9610:  0050A0E1     MOV r5, r0
		   0x010E9614:  000054E3     CMPS r0, r4, 0x0
		   0x010E9618:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9620
		   // 
		   // ──── Block 63 else (==) ────────────────────
		   0x010E961C:  6BC7F9EB     BL $-0x18e24c
		   // ──── Block 64 if (!=) ────────────────────
		   0x010E9620:  0400A0E1     MOV r0, r4
		   0x010E9624:  0010A0E3     MOV r1, 0x0
		   0x010E9628:  E16900EB     BL $+0x1a78c  // CALL → ChargeableContainerFillData.GetNumberOfFilledItems
		   0x010E962C:  051080E0     ADD r1, r0, r5
		   0x010E9630:  0190A0E3     MOV sb, 0x1
		   0x010E9634:  010056E1     CMPS r0, r6, r1
		   0x010E9638:  BBFFFFAA     BGE $-0x10c
		   // ──── Block 65 else (<) ────────────────────
		   0x010E963C:  000055E3     CMPS r0, r5, 0x0
		   0x010E9640:  020000CA     BGT $+0x10  // if (>) goto 0x010E9650
		   // 
		   // ──── Block 66 else (<=) ────────────────────
		   0x010E9644:  010050E3     CMPS r0, r0, 0x1
		   0x010E9648:  0090A0E3     MOV sb, 0x0
		   0x010E964C:  B6FFFFBA     BLT $-0x120
		   // ──── Block 67 (from 2 paths) ──────────────────
		   0x010E9650:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010E9654:  00009FE7     LDR r0, [pc, r0]
		   0x010E9658:  000090E5     LDR r0, [r0]
		   0x010E965C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9660:  000051E3     CMPS r0, r1, 0x0
		   0x010E9664:  0000001A     BNE $+0x8  // if (!=) goto 0x010E966C
		   // 
		   // ──── Block 68 else (==) ────────────────────
		   0x010E9668:  09C7F9EB     BL $-0x18e3d4
		   // ──── Block 69 if (!=) ────────────────────
		   0x010E966C:  0000A0E3     MOV r0, 0x0
		   0x010E9670:  261100EB     BL $+0x44a0  // CALL → sub_10EDB10
		   0x010E9674:  0040A0E1     MOV r4, r0
		   0x010E9678:  98009FE5     LDR r0, [pc, 0x98]
		   0x010E967C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9680:  000090E5     LDR r0, [r0]
		   0x010E9684:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9688:  000051E3     CMPS r0, r1, 0x0
		   0x010E968C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9694
		   // 
		   // ──── Block 70 else (==) ────────────────────
		   0x010E9690:  FFC6F9EB     BL $-0x18e3fc
		   // ──── Block 71 if (!=) ────────────────────
		   0x010E9694:  0C008DE2     ADD r0, sp, 0xc
		   0x010E9698:  0010A0E3     MOV r1, 0x0
		   0x010E969C:  0090A0E3     MOV sb, 0x0
		   0x010E96A0:  2FDFFDEB     BL $-0x8833c
		   0x010E96A4:  0C708DE2     ADD r7, sp, 0xc
		   0x010E96A8:  000054E3     CMPS r0, r4, 0x0
		   0x010E96AC:  E00097E8     LDM r7, {r5, r6, r7}
		   0x010E96B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E96B8
		   // 
		   // ──── Block 72 else (==) ────────────────────
		   0x010E96B4:  45C7F9EB     BL $-0x18e2e4
		   // ──── Block 73 if (!=) ────────────────────
		   0x010E96B8:  00908DE5     STR sb, [sp]
		   0x010E96BC:  04908DE5     STR sb, [sp, 0x4]
		   0x010E96C0:  94FFFFEA     B $-0x1a8
		   0x010E96C4:  BF2A1403     TSTSEQ r2, r4, 0xbf000
		   0x010E96C8:  78FEF802     RSCSEQ pc, r8, 0x780
		   0x010E96CC:  70FEF802     RSCSEQ pc, r8, 0x700
		   0x010E96D0:  90DFF802     RSCSEQ sp, r8, 0x240
		   0x010E96D4:  90FDF802     RSCSEQ pc, r8, 0x2400
		   0x010E96D8:  50FEF802     RSCSEQ pc, r8, 0x500
		   0x010E96DC:  F0D2F802     RSCSEQ sp, r8, 0xf
		   0x010E96E0:  1801F902     RSCSEQ r0, sb, 0x6
		   0x010E96E4:  A4FDF802     RSCSEQ pc, r8, 0x2900
		   0x010E96E8:  F400F902     RSCSEQ r0, sb, 0xf4
		   0x010E96EC:  34FDF802     RSCSEQ pc, r8, 0xd00
		   0x010E96F0:  3CD2F802     RSCSEQ sp, r8, 0xc0000003
		   0x010E96F4:  F4FEF802     RSCSEQ pc, r8, 0xf40
		   0x010E96F8:  5A281403     TSTSEQ r2, r4, 0x5a0000
		   0x010E96FC:  C4FEF802     RSCSEQ pc, r8, 0xc40
		   0x010E9700:  ECDCF802     RSCSEQ sp, r8, 0xec00
		   0x010E9704:  C8FAF802     RSCSEQ pc, r8, 0xc8000
		   0x010E9708:  00FBF802     RSCSEQ pc, r8, 0x0
		   0x010E970C:  C4FDF802     RSCSEQ pc, r8, 0x3100
		   0x010E9710:  B8FAF802     RSCSEQ pc, r8, 0xb8000
		   0x010E9714:  0CFDF802     RSCSEQ pc, r8, 0x300
		   0x010E9718:  38DBF802     RSCSEQ sp, r8, 0xe000
		*/
	}

	// RVA: 0x10E88F4 Offset: 0x10E88F4 VA: 0x10E88F4
	private void TryDropExp(Cell targetCell, ItemPack originItemDropsExpData, ItemPack targetItemDropsExpData) {
		/* Disassembly (ARM32, 200 instructions, 0x320 bytes):
		   // CFG: 34 blocks, 35 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E88F4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E88F8:  44D04DE2     SUB sp, sp, 0x44
		   0x010E88FC:  E4729FE5     LDR r7, [pc, 0x2e4]
		   0x010E8900:  0080A0E1     MOV r8, r0
		   0x010E8904:  0340A0E1     MOV r4, r3
		   0x010E8908:  0250A0E1     MOV r5, r2
		   0x010E890C:  07708FE0     ADD r7, pc, r7
		   0x010E8910:  0160A0E1     MOV r6, r1
		   0x010E8914:  0000D7E5     LDRB r0, [r7]
		   0x010E8918:  000050E3     CMPS r0, r0, 0x0
		   0x010E891C:  1000001A     BNE $+0x48  // if (!=) goto 0x010E8964
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E8920:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x010E8924:  00009FE7     LDR r0, [pc, r0]
		   0x010E8928:  0CCAF9EB     BL $-0x18d7c8
		   0x010E892C:  BC029FE5     LDR r0, [pc, 0x2bc]
		   0x010E8930:  00009FE7     LDR r0, [pc, r0]
		   0x010E8934:  09CAF9EB     BL $-0x18d7d4
		   0x010E8938:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x010E893C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8940:  06CAF9EB     BL $-0x18d7e0
		   0x010E8944:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x010E8948:  00009FE7     LDR r0, [pc, r0]
		   0x010E894C:  03CAF9EB     BL $-0x18d7ec
		   0x010E8950:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x010E8954:  00009FE7     LDR r0, [pc, r0]
		   0x010E8958:  00CAF9EB     BL $-0x18d7f8
		   0x010E895C:  0100A0E3     MOV r0, 0x1
		   0x010E8960:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E8964:  000056E3     CMPS r0, r6, 0x0
		   0x010E8968:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8970
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E896C:  97CAF9EB     BL $-0x18d59c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E8970:  0600A0E1     MOV r0, r6
		   0x010E8974:  0010A0E3     MOV r1, 0x0
		   0x010E8978:  4B3D3CEB     BL $+0xf0f534  // CALL → sub_1FF7EAC
		   0x010E897C:  0070A0E1     MOV r7, r0
		   0x010E8980:  000050E3     CMPS r0, r0, 0x0
		   0x010E8984:  0000001A     BNE $+0x8  // if (!=) goto 0x010E898C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E8988:  90CAF9EB     BL $-0x18d5b8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E898C:  38008DE2     ADD r0, sp, 0x38
		   0x010E8990:  0710A0E1     MOV r1, r7
		   0x010E8994:  0020A0E3     MOV r2, 0x0
		   0x010E8998:  013E3CEB     BL $+0xf0f80c  // CALL → sub_1FF81A4
		   0x010E899C:  38A09DE5     LDR r10, [sp, 0x38]
		   0x010E89A0:  0800A0E1     MOV r0, r8
		   0x010E89A4:  3CB09DE5     LDR fp, [sp, 0x3c]
		   0x010E89A8:  0630A0E1     MOV r3, r6
		   0x010E89AC:  0A10A0E1     MOV r1, r10
		   0x010E89B0:  0B20A0E1     MOV r2, fp
		   0x010E89B4:  24DFFFEB     BL $-0x8368
		   0x010E89B8:  40729FE5     LDR r7, [pc, 0x240]
		   0x010E89BC:  0090A0E1     MOV sb, r0
		   0x010E89C0:  07709FE7     LDR r7, [pc, r7]
		   0x010E89C4:  000097E5     LDR r0, [r7]
		   0x010E89C8:  741090E5     LDR r1, [r0, 0x74]
		   0x010E89CC:  000051E3     CMPS r0, r1, 0x0
		   0x010E89D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E89D8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E89D4:  2ECAF9EB     BL $-0x18d740
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E89D8:  0900A0E1     MOV r0, sb
		   0x010E89DC:  0010A0E3     MOV r1, 0x0
		   0x010E89E0:  0020A0E3     MOV r2, 0x0
		   0x010E89E4:  0060A0E3     MOV r6, 0x0
		   0x010E89E8:  2B3D3CEB     BL $+0xf0f4b4  // CALL → sub_1FF7E9C
		   0x010E89EC:  000050E3     CMPS r0, r0, 0x0
		   0x010E89F0:  0C00000A     BEQ $+0x38  // if (==) goto 0x010E8A28
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010E89F4:  08029FE5     LDR r0, [pc, 0x208]
		   0x010E89F8:  00009FE7     LDR r0, [pc, r0]
		   0x010E89FC:  000090E5     LDR r0, [r0]
		   0x010E8A00:  741090E5     LDR r1, [r0, 0x74]
		   0x010E8A04:  000051E3     CMPS r0, r1, 0x0
		   0x010E8A08:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8A10
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E8A0C:  20CAF9EB     BL $-0x18d778
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E8A10:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x010E8A14:  0010A0E3     MOV r1, 0x0
		   0x010E8A18:  00009FE7     LDR r0, [pc, r0]
		   0x010E8A1C:  000090E5     LDR r0, [r0]
		   0x010E8A20:  773D3CEB     BL $+0xf0f5e4  // CALL → sub_1FF8004
		   0x010E8A24:  6D0000EA     B $+0x1bc  // goto 0x010E8BE0
		   // ──── Block 12 if (==) ────────────────────
		   0x010E8A28:  000055E3     CMPS r0, r5, 0x0
		   0x010E8A2C:  0900000A     BEQ $+0x2c  // if (==) goto 0x010E8A58
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010E8A30:  080095E5     LDR r0, [r5, 0x8]
		   0x010E8A34:  0010A0E3     MOV r1, 0x0
		   0x010E8A38:  0060A0E3     MOV r6, 0x0
		   0x010E8A3C:  6DBE76EB     BL $+0x1daf9bc  // CALL → String.IsNullOrEmpty
		   0x010E8A40:  000050E3     CMPS r0, r0, 0x0
		   0x010E8A44:  0300001A     BNE $+0x14  // if (!=) goto 0x010E8A58
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010E8A48:  0500A0E1     MOV r0, r5
		   0x010E8A4C:  0010A0E3     MOV r1, 0x0
		   0x010E8A50:  0E0910EB     BL $+0x402440  // CALL → ItemPack.GetItemObject
		   0x010E8A54:  0060A0E1     MOV r6, r0
		   // ──── Block 15 (from 2 paths) ──────────────────
		   0x010E8A58:  000054E3     CMPS r0, r4, 0x0
		   0x010E8A5C:  0A00000A     BEQ $+0x30  // if (==) goto 0x010E8A8C
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x010E8A60:  080094E5     LDR r0, [r4, 0x8]
		   0x010E8A64:  0010A0E3     MOV r1, 0x0
		   0x010E8A68:  0050A0E3     MOV r5, 0x0
		   0x010E8A6C:  61BE76EB     BL $+0x1daf98c  // CALL → String.IsNullOrEmpty
		   0x010E8A70:  000050E3     CMPS r0, r0, 0x0
		   0x010E8A74:  0500001A     BNE $+0x1c  // if (!=) goto 0x010E8A90
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010E8A78:  0400A0E1     MOV r0, r4
		   0x010E8A7C:  0010A0E3     MOV r1, 0x0
		   0x010E8A80:  020910EB     BL $+0x402410  // CALL → ItemPack.GetItemObject
		   0x010E8A84:  0050A0E1     MOV r5, r0
		   0x010E8A88:  000000EA     B $+0x8  // goto 0x010E8A90
		   // ──── Block 18 if (==) ────────────────────
		   0x010E8A8C:  0050A0E3     MOV r5, 0x0
		   // ──── Block 19 if (!=) ────────────────────
		   0x010E8A90:  000097E5     LDR r0, [r7]
		   0x010E8A94:  741090E5     LDR r1, [r0, 0x74]
		   0x010E8A98:  000051E3     CMPS r0, r1, 0x0
		   0x010E8A9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8AA4
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010E8AA0:  FBC9F9EB     BL $-0x18d80c
		   // ──── Block 21 if (!=) ────────────────────
		   0x010E8AA4:  0600A0E1     MOV r0, r6
		   0x010E8AA8:  0010A0E3     MOV r1, 0x0
		   0x010E8AAC:  0020A0E3     MOV r2, 0x0
		   0x010E8AB0:  F93C3CEB     BL $+0xf0f3ec  // CALL → sub_1FF7E9C
		   0x010E8AB4:  0010A0E1     MOV r1, r0
		   0x010E8AB8:  000097E5     LDR r0, [r7]
		   0x010E8ABC:  000051E3     CMPS r0, r1, 0x0
		   0x010E8AC0:  0650A001     MOVEQ r5, r6
		   0x010E8AC4:  742090E5     LDR r2, [r0, 0x74]
		   0x010E8AC8:  000052E3     CMPS r0, r2, 0x0
		   0x010E8ACC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8AD4
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E8AD0:  EFC9F9EB     BL $-0x18d83c
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E8AD4:  0500A0E1     MOV r0, r5
		   0x010E8AD8:  0010A0E3     MOV r1, 0x0
		   0x010E8ADC:  0020A0E3     MOV r2, 0x0
		   0x010E8AE0:  ED3C3CEB     BL $+0xf0f3bc  // CALL → sub_1FF7E9C
		   0x010E8AE4:  000050E3     CMPS r0, r0, 0x0
		   0x010E8AE8:  3C00001A     BNE $+0xf8  // if (!=) goto 0x010E8BE0
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010E8AEC:  000055E3     CMPS r0, r5, 0x0
		   0x010E8AF0:  0400000A     BEQ $+0x18  // if (==) goto 0x010E8B08
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x010E8AF4:  0500A0E1     MOV r0, r5
		   0x010E8AF8:  0010A0E3     MOV r1, 0x0
		   0x010E8AFC:  C11E00EB     BL $+0x7b0c  // CALL → ItemObject.get_activeData
		   0x010E8B00:  34008DE5     STR r0, [sp, 0x34]
		   0x010E8B04:  050000EA     B $+0x1c  // goto 0x010E8B20
		   // ──── Block 26 if (==) ────────────────────
		   0x010E8B08:  30CAF9EB     BL $-0x18d738
		   0x010E8B0C:  0000A0E3     MOV r0, 0x0
		   0x010E8B10:  0010A0E3     MOV r1, 0x0
		   0x010E8B14:  BB1E00EB     BL $+0x7af4  // CALL → ItemObject.get_activeData
		   0x010E8B18:  34008DE5     STR r0, [sp, 0x34]
		   0x010E8B1C:  2BCAF9EB     BL $-0x18d74c
		   // ──── Block 27 ──────────────────────────────
		   0x010E8B20:  0500A0E1     MOV r0, r5
		   0x010E8B24:  0010A0E3     MOV r1, 0x0
		   0x010E8B28:  0060A0E3     MOV r6, 0x0
		   0x010E8B2C:  B51E00EB     BL $+0x7adc  // CALL → ItemObject.get_activeData
		   0x010E8B30:  0050A0E1     MOV r5, r0
		   0x010E8B34:  000050E3     CMPS r0, r0, 0x0
		   0x010E8B38:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8B40
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010E8B3C:  23CAF9EB     BL $-0x18d76c
		   // ──── Block 29 if (!=) ────────────────────
		   0x010E8B40:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x010E8B44:  0A10A0E1     MOV r1, r10
		   0x010E8B48:  0B20A0E1     MOV r2, fp
		   0x010E8B4C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8B50:  1C50D5E5     LDRB r5, [r5, 0x1c]
		   0x010E8B54:  447098E5     LDR r7, [r8, 0x44]
		   0x010E8B58:  003090E5     LDR r3, [r0]
		   0x010E8B5C:  38008DE2     ADD r0, sp, 0x38
		   0x010E8B60:  3C608DE5     STR r6, [sp, 0x3c]
		   0x010E8B64:  38608DE5     STR r6, [sp, 0x38]
		   0x010E8B68:  40608DE5     STR r6, [sp, 0x40]
		   0x010E8B6C:  1F4731EB     BL $+0xc51c84  // CALL → Nullable<Vector2>..ctor
		   0x010E8B70:  38208DE2     ADD r2, sp, 0x38
		   0x010E8B74:  08C08DE2     ADD ip, sp, 0x8
		   0x010E8B78:  0140A0E3     MOV r4, 0x1
		   0x010E8B7C:  0030E0E3     MVN r3, r0, 0x0
		   0x010E8B80:  070092E8     LDM r2, {r0, r1, r2}
		   0x010E8B84:  24308DE5     STR r3, [sp, 0x24]
		   0x010E8B88:  17008CE8     STM ip, {r0, r1, r2, r4}
		   0x010E8B8C:  0800A0E1     MOV r0, r8
		   0x010E8B90:  0520A0E1     MOV r2, r5
		   0x010E8B94:  34109DE5     LDR r1, [sp, 0x34]
		   0x010E8B98:  18308DE5     STR r3, [sp, 0x18]
		   0x010E8B9C:  0930A0E1     MOV r3, sb
		   0x010E8BA0:  20608DE5     STR r6, [sp, 0x20]
		   0x010E8BA4:  28608DE5     STR r6, [sp, 0x28]
		   0x010E8BA8:  90008DE8     STM sp, {r4, r7}
		   0x010E8BAC:  1C608DE5     STR r6, [sp, 0x1c]
		   0x010E8BB0:  D4BEFFEB     BL $-0x104a8
		   0x010E8BB4:  54009FE5     LDR r0, [pc, 0x54]
		   0x010E8BB8:  00009FE7     LDR r0, [pc, r0]
		   0x010E8BBC:  000090E5     LDR r0, [r0]
		   0x010E8BC0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E8BC4:  004090E5     LDR r4, [r0]
		   0x010E8BC8:  000054E3     CMPS r0, r4, 0x0
		   0x010E8BCC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8BD4
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010E8BD0:  FEC9F9EB     BL $-0x18d800
		   // ──── Block 31 if (!=) ────────────────────
		   0x010E8BD4:  0400A0E1     MOV r0, r4
		   0x010E8BD8:  0010A0E3     MOV r1, 0x0
		   0x010E8BDC:  9B2211EB     BL $+0x448a74  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   // ──── Block 32 if (!=) ────────────────────
		   0x010E8BE0:  44D08DE2     ADD sp, sp, 0x44
		   0x010E8BE4:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010E8BE8:  AC331403     TSTSEQ r3, r4, 0xb0000002
		   0x010E8BEC:  64DCF802     RSCSEQ sp, r8, 0x6400
		   0x010E8BF0:  B005F902     RSCSEQ r0, sb, 0x2c000000
		   0x010E8BF4:  BC05F902     RSCSEQ r0, sb, 0x2f000000
		   0x010E8BF8:  F0DBF802     RSCSEQ sp, r8, 0x3c000
		   0x010E8BFC:  140AF902     RSCSEQ r0, sb, 0x14000
		   0x010E8C00:  78DBF802     RSCSEQ sp, r8, 0x1e000
		   0x010E8C04:  90DBF802     RSCSEQ sp, r8, 0x24000
		   0x010E8C08:  5009F902     RSCSEQ r0, sb, 0x140000
		   0x010E8C0C:  AC03F902     RSCSEQ r0, sb, 0xb0000002
		   0x010E8C10:  2803F902     RSCSEQ r0, sb, 0xa0000000
		*/
	}

	// RVA: 0x10E80D4 Offset: 0x10E80D4 VA: 0x10E80D4
	private bool TryApplyBooster(Item originItem, Item targetItem, ref ItemData resultItemData, ref Item resultItem) {
		/* Disassembly (ARM32, 74 instructions, 0x128 bytes):
		   // CFG: 15 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E80D4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E80D8:  24D04DE2     SUB sp, sp, 0x24
		   0x010E80DC:  F0439FE5     LDR r4, [pc, 0x3f0]
		   0x010E80E0:  0080A0E1     MOV r8, r0
		   0x010E80E4:  03A0A0E1     MOV r10, r3
		   0x010E80E8:  0290A0E1     MOV sb, r2
		   0x010E80EC:  04408FE0     ADD r4, pc, r4
		   0x010E80F0:  0150A0E1     MOV r5, r1
		   0x010E80F4:  0000D4E5     LDRB r0, [r4]
		   0x010E80F8:  000050E3     CMPS r0, r0, 0x0
		   0x010E80FC:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010E8138
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E8100:  D0039FE5     LDR r0, [pc, 0x3d0]
		   0x010E8104:  00009FE7     LDR r0, [pc, r0]
		   0x010E8108:  14CCF9EB     BL $-0x18cfa8
		   0x010E810C:  C8039FE5     LDR r0, [pc, 0x3c8]
		   0x010E8110:  00009FE7     LDR r0, [pc, r0]
		   0x010E8114:  11CCF9EB     BL $-0x18cfb4
		   0x010E8118:  C0039FE5     LDR r0, [pc, 0x3c0]
		   0x010E811C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8120:  0ECCF9EB     BL $-0x18cfc0
		   0x010E8124:  B8039FE5     LDR r0, [pc, 0x3b8]
		   0x010E8128:  00009FE7     LDR r0, [pc, r0]
		   0x010E812C:  0BCCF9EB     BL $-0x18cfcc
		   0x010E8130:  0100A0E3     MOV r0, 0x1
		   0x010E8134:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E8138:  0070A0E3     MOV r7, 0x0
		   0x010E813C:  000055E3     CMPS r0, r5, 0x0
		   0x010E8140:  0D00000A     BEQ $+0x3c  // if (==) goto 0x010E817C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010E8144:  9C039FE5     LDR r0, [pc, 0x39c]
		   0x010E8148:  00009FE7     LDR r0, [pc, r0]
		   0x010E814C:  001095E5     LDR r1, [r5]
		   0x010E8150:  000090E5     LDR r0, [r0]
		   0x010E8154:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E8158:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E815C:  020053E1     CMPS r0, r3, r2
		   0x010E8160:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E817C
		   // 
		   // ──── Block 4 else (>= (unsigned)) ────────────────────
		   0x010E8164:  641091E5     LDR r1, [r1, 0x64]
		   0x010E8168:  0570A0E1     MOV r7, r5
		   0x010E816C:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E8170:  041011E5     LDR r1, [r1, -0x4]
		   0x010E8174:  000051E1     CMPS r0, r1, r0
		   0x010E8178:  0070A013     MOVNE r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010E817C:  68B39FE5     LDR fp, [pc, 0x368]
		   0x010E8180:  0BB09FE7     LDR fp, [pc, fp]
		   0x010E8184:  00009BE5     LDR r0, [fp]
		   0x010E8188:  741090E5     LDR r1, [r0, 0x74]
		   0x010E818C:  000051E3     CMPS r0, r1, 0x0
		   0x010E8190:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8198
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E8194:  3ECCF9EB     BL $-0x18cf00
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E8198:  0700A0E1     MOV r0, r7
		   0x010E819C:  0010A0E3     MOV r1, 0x0
		   0x010E81A0:  0060A0E3     MOV r6, 0x0
		   0x010E81A4:  14403CEB     BL $+0xf10058  // CALL → sub_1FF81FC
		   0x010E81A8:  000050E3     CMPS r0, r0, 0x0
		   0x010E81AC:  C500000A     BEQ $+0x31c
		   0x010E81B0:  000057E3     CMPS r0, r7, 0x0
		   0x010E81B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E81BC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E81B8:  84CCF9EB     BL $-0x18cde8
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E81BC:  000097E5     LDR r0, [r7]
		   0x010E81C0:  0910A0E1     MOV r1, sb
		   0x010E81C4:  C83190E5     LDR r3, [r0, 0x1c8]
		   0x010E81C8:  CC2190E5     LDR r2, [r0, 0x1cc]
		   0x010E81CC:  0700A0E1     MOV r0, r7
		   0x010E81D0:  33FF2FE1     BLX r3  // virtual call: vtable+0x1C8
		   0x010E81D4:  000050E3     CMPS r0, r0, 0x0
		   0x010E81D8:  BA00000A     BEQ $+0x2f0
		   0x010E81DC:  000059E3     CMPS r0, sb, 0x0
		   0x010E81E0:  14A08DE5     STR r10, [sp, 0x14]
		   0x010E81E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E81EC
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E81E8:  78CCF9EB     BL $-0x18ce18
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E81EC:  10A099E5     LDR r10, [sb, 0x10]
		   0x010E81F0:  00005AE3     CMPS r0, r10, 0x0
		   0x010E81F4:  0000001A     BNE $+0x8
		   0x010E81F8:  74CCF9EB     BL $-0x18ce28
		*/
	}

	// RVA: 0x10E8C14 Offset: 0x10E8C14 VA: 0x10E8C14
	private bool MergeTwoItems(Cell targetCell, Item originItem, Item targetItem, ItemObject resultItemObject, out ItemData resultItemData, out Item resultItem) {
		/* Disassembly (ARM32, 371 instructions, 0x5CC bytes):
		   // CFG: 76 blocks, 86 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E8C14:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E8C18:  44D04DE2     SUB sp, sp, 0x44
		   0x010E8C1C:  38108DE5     STR r1, [sp, 0x38]
		   0x010E8C20:  0070A0E1     MOV r7, r0
		   0x010E8C24:  74459FE5     LDR r4, [pc, 0x574]
		   0x010E8C28:  0380A0E1     MOV r8, r3
		   0x010E8C2C:  02B0A0E1     MOV fp, r2
		   0x010E8C30:  04408FE0     ADD r4, pc, r4
		   0x010E8C34:  0000D4E5     LDRB r0, [r4]
		   0x010E8C38:  000050E3     CMPS r0, r0, 0x0
		   0x010E8C3C:  1600001A     BNE $+0x60  // if (!=) goto 0x010E8C9C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E8C40:  5C059FE5     LDR r0, [pc, 0x55c]
		   0x010E8C44:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C48:  44C9F9EB     BL $-0x18dae8
		   0x010E8C4C:  54059FE5     LDR r0, [pc, 0x554]
		   0x010E8C50:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C54:  41C9F9EB     BL $-0x18daf4
		   0x010E8C58:  4C059FE5     LDR r0, [pc, 0x54c]
		   0x010E8C5C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C60:  3EC9F9EB     BL $-0x18db00
		   0x010E8C64:  44059FE5     LDR r0, [pc, 0x544]
		   0x010E8C68:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C6C:  3BC9F9EB     BL $-0x18db0c
		   0x010E8C70:  3C059FE5     LDR r0, [pc, 0x53c]
		   0x010E8C74:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C78:  38C9F9EB     BL $-0x18db18
		   0x010E8C7C:  34059FE5     LDR r0, [pc, 0x534]
		   0x010E8C80:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C84:  35C9F9EB     BL $-0x18db24
		   0x010E8C88:  2C059FE5     LDR r0, [pc, 0x52c]
		   0x010E8C8C:  00009FE7     LDR r0, [pc, r0]
		   0x010E8C90:  32C9F9EB     BL $-0x18db30
		   0x010E8C94:  0100A0E3     MOV r0, 0x1
		   0x010E8C98:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E8C9C:  0700A0E1     MOV r0, r7
		   0x010E8CA0:  0B10A0E1     MOV r1, fp
		   0x010E8CA4:  0820A0E1     MOV r2, r8
		   0x010E8CA8:  4C0100EB     BL $+0x538  // CALL → GameState.CanMerge2ChargeableContainers
		   0x010E8CAC:  0C459FE5     LDR r4, [pc, 0x50c]
		   0x010E8CB0:  00A0A0E1     MOV r10, r0
		   0x010E8CB4:  04409FE7     LDR r4, [pc, r4]
		   0x010E8CB8:  000094E5     LDR r0, [r4]
		   0x010E8CBC:  C0C9F9EB     BL $-0x18d8f8
		   0x010E8CC0:  FC549FE5     LDR r5, [pc, 0x4fc]
		   0x010E8CC4:  05509FE7     LDR r5, [pc, r5]
		   0x010E8CC8:  40008DE5     STR r0, [sp, 0x40]
		   0x010E8CCC:  001095E5     LDR r1, [r5]
		   0x010E8CD0:  B6256CEB     BL $+0x1b096e0  // CALL → List<object>..ctor
		   0x010E8CD4:  000094E5     LDR r0, [r4]
		   0x010E8CD8:  B9C9F9EB     BL $-0x18d914
		   0x010E8CDC:  001095E5     LDR r1, [r5]
		   0x010E8CE0:  3C008DE5     STR r0, [sp, 0x3c]
		   0x010E8CE4:  B1256CEB     BL $+0x1b096cc  // CALL → List<object>..ctor
		   0x010E8CE8:  000058E3     CMPS r0, r8, 0x0
		   0x010E8CEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8CF4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E8CF0:  B6C9F9EB     BL $-0x18d920
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E8CF4:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8CF8:  000054E3     CMPS r0, r4, 0x0
		   0x010E8CFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8D04
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E8D00:  B2C9F9EB     BL $-0x18d930
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E8D04:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8D08:  70909DE5     LDR sb, [sp, 0x70]
		   0x010E8D0C:  6C509DE5     LDR r5, [sp, 0x6c]
		   0x010E8D10:  0A0050E3     CMPS r0, r0, 0xa
		   0x010E8D14:  0600000A     BEQ $+0x20  // if (==) goto 0x010E8D34
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010E8D18:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8D1C:  000054E3     CMPS r0, r4, 0x0
		   0x010E8D20:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8D28
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010E8D24:  A9C9F9EB     BL $-0x18d954
		   // ──── Block 9 if (!=) ────────────────────
		   0x010E8D28:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8D2C:  0C0050E3     CMPS r0, r0, 0xc
		   0x010E8D30:  0901001A     BNE $+0x42c  // if (!=) goto 0x010E915C
		   // 
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010E8D34:  00005AE3     CMPS r0, r10, 0x0
		   0x010E8D38:  1001000A     BEQ $+0x448  // if (==) goto 0x010E9180
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010E8D3C:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8D40:  000054E3     CMPS r0, r4, 0x0
		   0x010E8D44:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8D4C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E8D48:  A0C9F9EB     BL $-0x18d978
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E8D4C:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8D50:  0A0050E3     CMPS r0, r0, 0xa
		   0x010E8D54:  0D00000A     BEQ $+0x3c  // if (==) goto 0x010E8D90
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010E8D58:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8D5C:  000054E3     CMPS r0, r4, 0x0
		   0x010E8D60:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8D68
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E8D64:  99C9F9EB     BL $-0x18d994
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E8D68:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8D6C:  0C0050E3     CMPS r0, r0, 0xc
		   0x010E8D70:  0600000A     BEQ $+0x20  // if (==) goto 0x010E8D90
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x010E8D74:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8D78:  000054E3     CMPS r0, r4, 0x0
		   0x010E8D7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8D84
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010E8D80:  92C9F9EB     BL $-0x18d9b0
		   // ──── Block 19 if (!=) ────────────────────
		   0x010E8D84:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8D88:  0D0050E3     CMPS r0, r0, 0xd
		   0x010E8D8C:  3E00001A     BNE $+0x100  // if (!=) goto 0x010E8E8C
		   // 
		   // ──── Block 20 (from 3 paths) ──────────────────
		   0x010E8D90:  00005BE3     CMPS r0, fp, 0x0
		   0x010E8D94:  0001000A     BEQ $+0x408  // if (==) goto 0x010E919C
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010E8D98:  28549FE5     LDR r5, [pc, 0x428]
		   0x010E8D9C:  05509FE7     LDR r5, [pc, r5]
		   0x010E8DA0:  00109BE5     LDR r1, [fp]
		   0x010E8DA4:  000095E5     LDR r0, [r5]
		   0x010E8DA8:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E8DAC:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E8DB0:  020053E1     CMPS r0, r3, r2
		   0x010E8DB4:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x010E8DCC
		   // 
		   // ──── Block 22 else (>= (unsigned)) ────────────────────
		   0x010E8DB8:  641091E5     LDR r1, [r1, 0x64]
		   0x010E8DBC:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E8DC0:  041011E5     LDR r1, [r1, -0x4]
		   0x010E8DC4:  000051E1     CMPS r0, r1, r0
		   0x010E8DC8:  0600000A     BEQ $+0x20  // if (==) goto 0x010E8DE8
		   // 
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x010E8DCC:  7FC9F9EB     BL $-0x18d9fc
		   0x010E8DD0:  000095E5     LDR r0, [r5]
		   0x010E8DD4:  00109BE5     LDR r1, [fp]
		   0x010E8DD8:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E8DDC:  641091E5     LDR r1, [r1, 0x64]
		   0x010E8DE0:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E8DE4:  041011E5     LDR r1, [r1, -0x4]
		   // ──── Block 24 if (==) ────────────────────
		   0x010E8DE8:  C820A0E3     MOV r2, 0xc8
		   0x010E8DEC:  000051E1     CMPS r0, r1, r0
		   0x010E8DF0:  C8208B02     ADDEQ r2, fp, 0xc8
		   0x010E8DF4:  004092E5     LDR r4, [r2]
		   0x010E8DF8:  000054E3     CMPS r0, r4, 0x0
		   0x010E8DFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8E04
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010E8E00:  72C9F9EB     BL $-0x18da30
		   // ──── Block 26 if (!=) ────────────────────
		   0x010E8E04:  0400A0E1     MOV r0, r4
		   0x010E8E08:  0010A0E3     MOV r1, 0x0
		   0x010E8E0C:  2C6C00EB     BL $+0x1b0b8  // CALL → ChargeableContainerFillData.GetAllFilledItems
		   0x010E8E10:  40008DE5     STR r0, [sp, 0x40]
		   0x010E8E14:  000095E5     LDR r0, [r5]
		   0x010E8E18:  001098E5     LDR r1, [r8]
		   0x010E8E1C:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E8E20:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010E8E24:  020053E1     CMPS r0, r3, r2
		   0x010E8E28:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x010E8E40
		   // 
		   // ──── Block 27 else (>= (unsigned)) ────────────────────
		   0x010E8E2C:  641091E5     LDR r1, [r1, 0x64]
		   0x010E8E30:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E8E34:  041011E5     LDR r1, [r1, -0x4]
		   0x010E8E38:  000051E1     CMPS r0, r1, r0
		   0x010E8E3C:  0600000A     BEQ $+0x20  // if (==) goto 0x010E8E5C
		   // 
		   // ──── Block 28 (from 2 paths) ──────────────────
		   0x010E8E40:  62C9F9EB     BL $-0x18da70
		   0x010E8E44:  000095E5     LDR r0, [r5]
		   0x010E8E48:  001098E5     LDR r1, [r8]
		   0x010E8E4C:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010E8E50:  641091E5     LDR r1, [r1, 0x64]
		   0x010E8E54:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010E8E58:  041011E5     LDR r1, [r1, -0x4]
		   // ──── Block 29 if (==) ────────────────────
		   0x010E8E5C:  C820A0E3     MOV r2, 0xc8
		   0x010E8E60:  000051E1     CMPS r0, r1, r0
		   0x010E8E64:  C8208802     ADDEQ r2, r8, 0xc8
		   0x010E8E68:  6C509DE5     LDR r5, [sp, 0x6c]
		   0x010E8E6C:  004092E5     LDR r4, [r2]
		   0x010E8E70:  000054E3     CMPS r0, r4, 0x0
		   0x010E8E74:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8E7C
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010E8E78:  54C9F9EB     BL $-0x18daa8
		   // ──── Block 31 if (!=) ────────────────────
		   0x010E8E7C:  0400A0E1     MOV r0, r4
		   0x010E8E80:  0010A0E3     MOV r1, 0x0
		   0x010E8E84:  0E6C00EB     BL $+0x1b040  // CALL → ChargeableContainerFillData.GetAllFilledItems
		   0x010E8E88:  3C008DE5     STR r0, [sp, 0x3c]
		   // ──── Block 32 if (!=) ────────────────────
		   0x010E8E8C:  68409DE5     LDR r4, [sp, 0x68]
		   0x010E8E90:  000054E3     CMPS r0, r4, 0x0
		   0x010E8E94:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8E9C
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010E8E98:  4CC9F9EB     BL $-0x18dac8
		   // ──── Block 34 if (!=) ────────────────────
		   0x010E8E9C:  38609DE5     LDR r6, [sp, 0x38]
		   0x010E8EA0:  180094E5     LDR r0, [r4, 0x18]
		   0x010E8EA4:  0540A0E1     MOV r4, r5
		   0x010E8EA8:  000056E3     CMPS r0, r6, 0x0
		   0x010E8EAC:  000085E5     STR r0, [r5]
		   0x010E8EB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8EB8
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x010E8EB4:  45C9F9EB     BL $-0x18dae4
		   // ──── Block 36 if (!=) ────────────────────
		   0x010E8EB8:  0600A0E1     MOV r0, r6
		   0x010E8EBC:  0010A0E3     MOV r1, 0x0
		   0x010E8EC0:  0050A0E3     MOV r5, 0x0
		   0x010E8EC4:  6D8FFFEB     BL $-0x1c244
		   0x010E8EC8:  004094E5     LDR r4, [r4]
		   0x010E8ECC:  000054E3     CMPS r0, r4, 0x0
		   0x010E8ED0:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8ED8
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x010E8ED4:  3DC9F9EB     BL $-0x18db04
		   // ──── Block 38 if (!=) ────────────────────
		   0x010E8ED8:  440097E5     LDR r0, [r7, 0x44]
		   0x010E8EDC:  0110A0E3     MOV r1, 0x1
		   0x010E8EE0:  1C20D4E5     LDRB r2, [r4, 0x1c]
		   0x010E8EE4:  0030E0E3     MVN r3, r0, 0x0
		   0x010E8EE8:  21008DE9     STMIA sp, {r0, r5}
		   0x010E8EEC:  14008DE2     ADD r0, sp, 0x14
		   0x010E8EF0:  2A0080E8     STM r0, {r1, r3, r5}
		   0x010E8EF4:  0700A0E1     MOV r0, r7
		   0x010E8EF8:  24308DE5     STR r3, [sp, 0x24]
		   0x010E8EFC:  0630A0E1     MOV r3, r6
		   0x010E8F00:  28108DE5     STR r1, [sp, 0x28]
		   0x010E8F04:  00108DE5     STR r1, [sp]
		   0x010E8F08:  0410A0E1     MOV r1, r4
		   0x010E8F0C:  20508DE5     STR r5, [sp, 0x20]
		   0x010E8F10:  0C508DE5     STR r5, [sp, 0xc]
		   0x010E8F14:  10508DE5     STR r5, [sp, 0x10]
		   0x010E8F18:  0650A0E1     MOV r5, r6
		   0x010E8F1C:  F9BDFFEB     BL $-0x10814
		   0x010E8F20:  000089E5     STR r0, [sb]
		   0x010E8F24:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8F28:  000054E3     CMPS r0, r4, 0x0
		   0x010E8F2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8F34
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x010E8F30:  26C9F9EB     BL $-0x18db60
		   // ──── Block 40 if (!=) ────────────────────
		   0x010E8F34:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8F38:  010050E3     CMPS r0, r0, 0x1
		   0x010E8F3C:  0600000A     BEQ $+0x20  // if (==) goto 0x010E8F5C
		   // 
		   // ──── Block 41 else (!=) ────────────────────
		   0x010E8F40:  844098E5     LDR r4, [r8, 0x84]
		   0x010E8F44:  000054E3     CMPS r0, r4, 0x0
		   0x010E8F48:  0000001A     BNE $+0x8  // if (!=) goto 0x010E8F50
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x010E8F4C:  1FC9F9EB     BL $-0x18db7c
		   // ──── Block 43 if (!=) ────────────────────
		   0x010E8F50:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E8F54:  080050E3     CMPS r0, r0, 0x8
		   0x010E8F58:  5500001A     BNE $+0x15c  // if (!=) goto 0x010E90B4
		   // 
		   // ──── Block 44 (from 2 paths) ──────────────────
		   0x010E8F5C:  68629FE5     LDR r6, [pc, 0x268]
		   0x010E8F60:  0040A0E3     MOV r4, 0x0
		   0x010E8F64:  06609FE7     LDR r6, [pc, r6]
		   0x010E8F68:  000098E5     LDR r0, [r8]
		   0x010E8F6C:  001096E5     LDR r1, [r6]
		   0x010E8F70:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x010E8F74:  B820D1E5     LDRB r2, [r1, 0xb8]
		   0x010E8F78:  020053E1     CMPS r0, r3, r2
		   0x010E8F7C:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E8F98
		   // 
		   // ──── Block 45 else (>= (unsigned)) ────────────────────
		   0x010E8F80:  640090E5     LDR r0, [r0, 0x64]
		   0x010E8F84:  0840A0E1     MOV r4, r8
		   0x010E8F88:  020180E0     ADD r0, r0, r2, lsl 2
		   0x010E8F8C:  040010E5     LDR r0, [r0, -0x4]
		   0x010E8F90:  010050E1     CMPS r0, r0, r1
		   0x010E8F94:  0040A013     MOVNE r4, 0x0
		   // ──── Block 46 if (< (unsigned)) ────────────────────
		   0x010E8F98:  6C009DE5     LDR r0, [sp, 0x6c]
		   0x010E8F9C:  30A08DE5     STR r10, [sp, 0x30]
		   0x010E8FA0:  009099E5     LDR sb, [sb]
		   0x010E8FA4:  00A090E5     LDR r10, [r0]
		   0x010E8FA8:  00005AE3     CMPS r0, r10, 0x0
		   0x010E8FAC:  0100001A     BNE $+0xc  // if (!=) goto 0x010E8FB8
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x010E8FB0:  06C9F9EB     BL $-0x18dbe0
		   0x010E8FB4:  001096E5     LDR r1, [r6]
		   // ──── Block 48 if (!=) ────────────────────
		   0x010E8FB8:  5C209AE5     LDR r2, [r10, 0x5c]
		   0x010E8FBC:  0000A0E3     MOV r0, 0x0
		   0x010E8FC0:  00005BE3     CMPS r0, fp, 0x0
		   0x010E8FC4:  34708DE5     STR r7, [sp, 0x34]
		   0x010E8FC8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010E8FF8
		   // 
		   // ──── Block 49 else (!=) ────────────────────
		   0x010E8FCC:  00309BE5     LDR r3, [fp]
		   0x010E8FD0:  B860D1E5     LDRB r6, [r1, 0xb8]
		   0x010E8FD4:  B870D3E5     LDRB r7, [r3, 0xb8]
		   0x010E8FD8:  060057E1     CMPS r0, r7, r6
		   0x010E8FDC:  0500003A     BLO $+0x1c  // if (< (unsigned)) goto 0x010E8FF8
		   // 
		   // ──── Block 50 else (>= (unsigned)) ────────────────────
		   0x010E8FE0:  640093E5     LDR r0, [r3, 0x64]
		   0x010E8FE4:  060180E0     ADD r0, r0, r6, lsl 2
		   0x010E8FE8:  040010E5     LDR r0, [r0, -0x4]
		   0x010E8FEC:  010050E1     CMPS r0, r0, r1
		   0x010E8FF0:  0B00A0E1     MOV r0, fp
		   0x010E8FF4:  0000A013     MOVNE r0, 0x0
		   // ──── Block 51 (from 2 paths) ──────────────────
		   0x010E8FF8:  0410A0E1     MOV r1, r4
		   0x010E8FFC:  0030A0E3     MOV r3, 0x0
		   0x010E9000:  649F00EB     BL $+0x27d98  // CALL → ItemContainer.CalculateCharge
		   0x010E9004:  000059E3     CMPS r0, sb, 0x0
		   0x010E9008:  1000000A     BEQ $+0x48  // if (==) goto 0x010E9050
		   // 
		   // ──── Block 52 else (!=) ────────────────────
		   0x010E900C:  0010A0E1     MOV r1, r0
		   0x010E9010:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x010E9014:  00009FE7     LDR r0, [pc, r0]
		   0x010E9018:  002099E5     LDR r2, [sb]
		   0x010E901C:  000090E5     LDR r0, [r0]
		   0x010E9020:  B870D2E5     LDRB r7, [r2, 0xb8]
		   0x010E9024:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x010E9028:  030057E1     CMPS r0, r7, r3
		   0x010E902C:  0700003A     BLO $+0x24  // if (< (unsigned)) goto 0x010E9050
		   // 
		   // ──── Block 53 else (>= (unsigned)) ────────────────────
		   0x010E9030:  642092E5     LDR r2, [r2, 0x64]
		   0x010E9034:  032182E0     ADD r2, r2, r3, lsl 2
		   0x010E9038:  042012E5     LDR r2, [r2, -0x4]
		   0x010E903C:  000052E1     CMPS r0, r2, r0
		   0x010E9040:  0200001A     BNE $+0x10  // if (!=) goto 0x010E9050
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x010E9044:  0900A0E1     MOV r0, sb
		   0x010E9048:  0020A0E3     MOV r2, 0x0
		   0x010E904C:  46A200EB     BL $+0x28920  // CALL → ItemContainer.SetupCharges
		   // ──── Block 55 (from 3 paths) ──────────────────
		   0x010E9050:  7C419FE5     LDR r4, [pc, 0x17c]
		   0x010E9054:  04409FE7     LDR r4, [pc, r4]
		   0x010E9058:  000094E5     LDR r0, [r4]
		   0x010E905C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E9060:  000051E3     CMPS r0, r1, 0x0
		   0x010E9064:  0100001A     BNE $+0xc  // if (!=) goto 0x010E9070
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x010E9068:  89C8F9EB     BL $-0x18ddd4
		   0x010E906C:  000094E5     LDR r0, [r4]
		   // ──── Block 57 if (!=) ────────────────────
		   0x010E9070:  34709DE5     LDR r7, [sp, 0x34]
		   0x010E9074:  30A09DE5     LDR r10, [sp, 0x30]
		   0x010E9078:  58119FE5     LDR r1, [pc, 0x158]
		   0x010E907C:  01109FE7     LDR r1, [pc, r1]
		   0x010E9080:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E9084:  001091E5     LDR r1, [r1]
		   0x010E9088:  684090E5     LDR r4, [r0, 0x68]
		   0x010E908C:  742091E5     LDR r2, [r1, 0x74]
		   0x010E9090:  000052E3     CMPS r0, r2, 0x0
		   0x010E9094:  0100001A     BNE $+0xc  // if (!=) goto 0x010E90A0
		   // 
		   // ──── Block 58 else (==) ────────────────────
		   0x010E9098:  0100A0E1     MOV r0, r1
		   0x010E909C:  7CC8F9EB     BL $-0x18de08
		   // ──── Block 59 if (!=) ────────────────────
		   0x010E90A0:  0400A0E1     MOV r0, r4
		   0x010E90A4:  FE15A0E3     MOV r1, 0x3f800000
		   0x010E90A8:  0020A0E3     MOV r2, 0x0
		   0x010E90AC:  6CD603EB     BL $+0xf59b8  // CALL → SoundController.PlaySound
		   0x010E90B0:  70909DE5     LDR sb, [sp, 0x70]
		   // ──── Block 60 if (!=) ────────────────────
		   0x010E90B4:  00005BE3     CMPS r0, fp, 0x0
		   0x010E90B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E90C0
		   // 
		   // ──── Block 61 else (==) ────────────────────
		   0x010E90BC:  C3C8F9EB     BL $-0x18dcec
		   // ──── Block 62 if (!=) ────────────────────
		   0x010E90C0:  14019FE5     LDR r0, [pc, 0x114]
		   0x010E90C4:  00009FE7     LDR r0, [pc, r0]
		   0x010E90C8:  10409BE5     LDR r4, [fp, 0x10]
		   0x010E90CC:  000090E5     LDR r0, [r0]
		   0x010E90D0:  741090E5     LDR r1, [r0, 0x74]
		   0x010E90D4:  000051E3     CMPS r0, r1, 0x0
		   0x010E90D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E90E0
		   // 
		   // ──── Block 63 else (==) ────────────────────
		   0x010E90DC:  6CC8F9EB     BL $-0x18de48
		   // ──── Block 64 if (!=) ────────────────────
		   0x010E90E0:  0400A0E1     MOV r0, r4
		   0x010E90E4:  0010A0E3     MOV r1, 0x0
		   0x010E90E8:  433C3CEB     BL $+0xf0f114  // CALL → sub_1FF81FC
		   0x010E90EC:  000050E3     CMPS r0, r0, 0x0
		   0x010E90F0:  0600000A     BEQ $+0x20  // if (==) goto 0x010E9110
		   // 
		   // ──── Block 65 else (!=) ────────────────────
		   0x010E90F4:  10409BE5     LDR r4, [fp, 0x10]
		   0x010E90F8:  000054E3     CMPS r0, r4, 0x0
		   0x010E90FC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E9104
		   // 
		   // ──── Block 66 else (==) ────────────────────
		   0x010E9100:  B2C8F9EB     BL $-0x18dd30
		   // ──── Block 67 if (!=) ────────────────────
		   0x010E9104:  0400A0E1     MOV r0, r4
		   0x010E9108:  0010A0E3     MOV r1, 0x0
		   0x010E910C:  DB8EFFEB     BL $-0x1c48c
		   // ──── Block 68 if (==) ────────────────────
		   0x010E9110:  003099E5     LDR r3, [sb]
		   0x010E9114:  0700A0E1     MOV r0, r7
		   0x010E9118:  0810A0E1     MOV r1, r8
		   0x010E911C:  0B20A0E1     MOV r2, fp
		   0x010E9120:  93EFFFEB     BL $-0x41ac
		   0x010E9124:  0140A0E3     MOV r4, 0x1
		   0x010E9128:  00005AE3     CMPS r0, r10, 0x0
		   0x010E912C:  1700000A     BEQ $+0x64  // if (==) goto 0x010E9190
		   // 
		   // ──── Block 69 else (!=) ────────────────────
		   0x010E9130:  40309DE5     LDR r3, [sp, 0x40]
		   0x010E9134:  0700A0E1     MOV r0, r7
		   0x010E9138:  0510A0E1     MOV r1, r5
		   0x010E913C:  0820A0E1     MOV r2, r8
		   0x010E9140:  FD0200EB     BL $+0xbfc  // CALL → GameState.DropFilledItems
		   0x010E9144:  3C309DE5     LDR r3, [sp, 0x3c]
		   0x010E9148:  0700A0E1     MOV r0, r7
		   0x010E914C:  0510A0E1     MOV r1, r5
		   0x010E9150:  0820A0E1     MOV r2, r8
		   0x010E9154:  F80200EB     BL $+0xbe8  // CALL → GameState.DropFilledItems
		   0x010E9158:  0C0000EA     B $+0x38  // goto 0x010E9190
		   // ──── Block 70 if (!=) ────────────────────
		   0x010E915C:  844098E5     LDR r4, [r8, 0x84]
		   0x010E9160:  000054E3     CMPS r0, r4, 0x0
		   0x010E9164:  0000001A     BNE $+0x8  // if (!=) goto 0x010E916C
		   // 
		   // ──── Block 71 else (==) ────────────────────
		   0x010E9168:  98C8F9EB     BL $-0x18dd98
		   // ──── Block 72 if (!=) ────────────────────
		   0x010E916C:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010E9170:  0D0050E2     SUBS r0, r0, 0xd
		   0x010E9174:  01000013     MOVNE r0, 0x1
		   0x010E9178:  0A0090E1     ORRS r0, r0, r10
		   0x010E917C:  EEFEFF1A     BNE $-0x440
		   // ──── Block 73 (from 2 paths) ──────────────────
		   0x010E9180:  840098E5     LDR r0, [r8, 0x84]
		   0x010E9184:  0040A0E3     MOV r4, 0x0
		   0x010E9188:  000085E5     STR r0, [r5]
		   0x010E918C:  008089E5     STR r8, [sb]
		   // ──── Block 74 if (==) ────────────────────
		   0x010E9190:  0400A0E1     MOV r0, r4
		   0x010E9194:  44D08DE2     ADD sp, sp, 0x44
		   0x010E9198:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 75 if (==) ────────────────────
		   0x010E919C:  8BC8F9EB     BL $-0x18ddcc
		   0x010E91A0:  8A301403     TSTSEQ r3, r4, 0x8a
		   0x010E91A4:  7C03F902     RSCSEQ r0, sb, 0xf0000001
		   0x010E91A8:  7803F902     RSCSEQ r0, sb, 0xe0000001
		   0x010E91AC:  E8FDF802     RSCSEQ pc, r8, 0x3a00
		   0x010E91B0:  E4FDF802     RSCSEQ pc, r8, 0x3900
		   0x010E91B4:  C4D8F802     RSCSEQ sp, r8, 0xc40000
		   0x010E91B8:  C0FAF802     RSCSEQ pc, r8, 0xc0000
		   0x010E91BC:  B8FAF802     RSCSEQ pc, r8, 0xb8000
		   0x010E91C0:  98FDF802     RSCSEQ pc, r8, 0x2600
		   0x010E91C4:  80FDF802     RSCSEQ pc, r8, 0x2000
		   0x010E91C8:  2402F902     RSCSEQ r0, sb, 0x40000002
		   0x010E91CC:  6400F902     RSCSEQ r0, sb, 0x64
		   0x010E91D0:  B4FFF802     RSCSEQ pc, r8, 0x2d0
		   0x010E91D4:  F0F6F802     RSCSEQ pc, r8, 0xf000000
		   0x010E91D8:  C4F6F802     RSCSEQ pc, r8, 0xc400000
		   0x010E91DC:  74D4F802     RSCSEQ sp, r8, 0x74000000
		*/
	}

	// RVA: 0x10E9D3C Offset: 0x10E9D3C VA: 0x10E9D3C
	private void DropFilledItems(Cell targetCell, Item targetItem, List<ItemPack> filledItems) {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E9D3C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E9D40:  6CD04DE2     SUB sp, sp, 0x6c
		   0x010E9D44:  CC829FE5     LDR r8, [pc, 0x2cc]
		   0x010E9D48:  0050A0E1     MOV r5, r0
		   0x010E9D4C:  0370A0E1     MOV r7, r3
		   0x010E9D50:  0260A0E1     MOV r6, r2
		   0x010E9D54:  08808FE0     ADD r8, pc, r8
		   0x010E9D58:  0190A0E1     MOV sb, r1
		   0x010E9D5C:  0000D8E5     LDRB r0, [r8]
		   0x010E9D60:  000050E3     CMPS r0, r0, 0x0
		   0x010E9D64:  1000001A     BNE $+0x48
		   0x010E9D68:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x010E9D6C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9D70:  FAC4F9EB     BL $-0x18ec10
		   0x010E9D74:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x010E9D78:  00009FE7     LDR r0, [pc, r0]
		   0x010E9D7C:  F7C4F9EB     BL $-0x18ec1c
		   0x010E9D80:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x010E9D84:  00009FE7     LDR r0, [pc, r0]
		   0x010E9D88:  F4C4F9EB     BL $-0x18ec28
		   0x010E9D8C:  94029FE5     LDR r0, [pc, 0x294]
		   0x010E9D90:  00009FE7     LDR r0, [pc, r0]
		   0x010E9D94:  F1C4F9EB     BL $-0x18ec34
		   0x010E9D98:  8C029FE5     LDR r0, [pc, 0x28c]
		   0x010E9D9C:  00009FE7     LDR r0, [pc, r0]
		   0x010E9DA0:  EEC4F9EB     BL $-0x18ec40
		   0x010E9DA4:  0100A0E3     MOV r0, 0x1
		   0x010E9DA8:  0000C8E5     STRB r0, [r8]
		*/
	}

	// RVA: 0x10E9ACC Offset: 0x10E9ACC VA: 0x10E9ACC
	private void ApplySpeedUpBooster(Item originItem, Item targetItem) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010E9ACC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E9AD0:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10E971C Offset: 0x10E971C VA: 0x10E971C
	private void DividedItems(Item originItem, Item targetItem, ItemObject resultItemObject, out ItemData resultItemData, out Item resultItem1) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010E971C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E9720:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10EA044 Offset: 0x10EA044 VA: 0x10EA044
	public void CheckForFtue() {
		/* Disassembly (ARM32, 6 instructions, 0x18 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EA044:  10402DE9     PUSH {r4, lr}
		   0x010EA048:  0040A0E1     MOV r4, r0
		   0x010EA04C:  020000EB     BL $+0x10  // CALL → GameState.CheckForChestUnlockFtue
		   0x010EA050:  0400A0E1     MOV r0, r4
		   0x010EA054:  1040BDE8     POP {r4, lr}
		   0x010EA058:  1BDFFFEA     B $-0x838c
		*/
	}

	// RVA: 0x10EA05C Offset: 0x10EA05C VA: 0x10EA05C
	private void CheckForChestUnlockFtue() {
		/* Disassembly (ARM32, 140 instructions, 0x230 bytes):
		   // CFG: 25 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EA05C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010EA060:  E8519FE5     LDR r5, [pc, 0x1e8]
		   0x010EA064:  0040A0E1     MOV r4, r0
		   0x010EA068:  05508FE0     ADD r5, pc, r5
		   0x010EA06C:  0000D5E5     LDRB r0, [r5]
		   0x010EA070:  000050E3     CMPS r0, r0, 0x0
		   0x010EA074:  1600001A     BNE $+0x60  // if (!=) goto 0x010EA0D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EA078:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x010EA07C:  00009FE7     LDR r0, [pc, r0]
		   0x010EA080:  36C4F9EB     BL $-0x18ef20
		   0x010EA084:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x010EA088:  00009FE7     LDR r0, [pc, r0]
		   0x010EA08C:  33C4F9EB     BL $-0x18ef2c
		   0x010EA090:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x010EA094:  00009FE7     LDR r0, [pc, r0]
		   0x010EA098:  30C4F9EB     BL $-0x18ef38
		   0x010EA09C:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x010EA0A0:  00009FE7     LDR r0, [pc, r0]
		   0x010EA0A4:  2DC4F9EB     BL $-0x18ef44
		   0x010EA0A8:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x010EA0AC:  00009FE7     LDR r0, [pc, r0]
		   0x010EA0B0:  2AC4F9EB     BL $-0x18ef50
		   0x010EA0B4:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x010EA0B8:  00009FE7     LDR r0, [pc, r0]
		   0x010EA0BC:  27C4F9EB     BL $-0x18ef5c
		   0x010EA0C0:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x010EA0C4:  00009FE7     LDR r0, [pc, r0]
		   0x010EA0C8:  24C4F9EB     BL $-0x18ef68
		   0x010EA0CC:  0100A0E3     MOV r0, 0x1
		   0x010EA0D0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EA0D4:  0000A0E3     MOV r0, 0x0
		   0x010EA0D8:  1AFA10EB     BL $+0x43e870  // CALL → FTUEChestUnlock.get_NotCompleted
		   0x010EA0DC:  000050E3     CMPS r0, r0, 0x0
		   0x010EA0E0:  5900000A     BEQ $+0x16c  // if (==) goto 0x010EA24C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010EA0E4:  84719FE5     LDR r7, [pc, 0x184]
		   0x010EA0E8:  07709FE7     LDR r7, [pc, r7]
		   0x010EA0EC:  544094E5     LDR r4, [r4, 0x54]
		   0x010EA0F0:  000097E5     LDR r0, [r7]
		   0x010EA0F4:  741090E5     LDR r1, [r0, 0x74]
		   0x010EA0F8:  000051E3     CMPS r0, r1, 0x0
		   0x010EA0FC:  0100001A     BNE $+0xc  // if (!=) goto 0x010EA108
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010EA100:  63C4F9EB     BL $-0x18ee6c
		   0x010EA104:  000097E5     LDR r0, [r7]
		   // ──── Block 5 if (!=) ────────────────────
		   0x010EA108:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010EA10C:  305091E5     LDR r5, [r1, 0x30]
		   0x010EA110:  000055E3     CMPS r0, r5, 0x0
		   0x010EA114:  1500001A     BNE $+0x5c  // if (!=) goto 0x010EA170
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EA118:  742090E5     LDR r2, [r0, 0x74]
		   0x010EA11C:  000052E3     CMPS r0, r2, 0x0
		   0x010EA120:  0200001A     BNE $+0x10  // if (!=) goto 0x010EA130
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EA124:  5AC4F9EB     BL $-0x18ee90
		   0x010EA128:  000097E5     LDR r0, [r7]
		   0x010EA12C:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EA130:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010EA134:  00009FE7     LDR r0, [pc, r0]
		   0x010EA138:  006091E5     LDR r6, [r1]
		   0x010EA13C:  000090E5     LDR r0, [r0]
		   0x010EA140:  9FC4F9EB     BL $-0x18ed7c
		   0x010EA144:  0050A0E1     MOV r5, r0
		   0x010EA148:  28019FE5     LDR r0, [pc, 0x128]
		   0x010EA14C:  0610A0E1     MOV r1, r6
		   0x010EA150:  0030A0E3     MOV r3, 0x0
		   0x010EA154:  00009FE7     LDR r0, [pc, r0]
		   0x010EA158:  002090E5     LDR r2, [r0]
		   0x010EA15C:  0500A0E1     MOV r0, r5
		   0x010EA160:  488F33EB     BL $+0xce3d28  // CALL → Predicate<object>..ctor
		   0x010EA164:  000097E5     LDR r0, [r7]
		   0x010EA168:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EA16C:  305080E5     STR r5, [r0, 0x30]
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EA170:  000054E3     CMPS r0, r4, 0x0
		   0x010EA174:  0000001A     BNE $+0x8  // if (!=) goto 0x010EA17C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EA178:  94C4F9EB     BL $-0x18eda8
		   // ──── Block 11 if (!=) ────────────────────
		   0x010EA17C:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x010EA180:  0510A0E1     MOV r1, r5
		   0x010EA184:  00009FE7     LDR r0, [pc, r0]
		   0x010EA188:  002090E5     LDR r2, [r0]
		   0x010EA18C:  0400A0E1     MOV r0, r4
		   0x010EA190:  3C246CEB     BL $+0x1b090f8  // CALL → List<object>.Find
		   0x010EA194:  0040A0E1     MOV r4, r0
		   0x010EA198:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010EA19C:  00009FE7     LDR r0, [pc, r0]
		   0x010EA1A0:  000090E5     LDR r0, [r0]
		   0x010EA1A4:  741090E5     LDR r1, [r0, 0x74]
		   0x010EA1A8:  000051E3     CMPS r0, r1, 0x0
		   0x010EA1AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EA1B4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010EA1B0:  37C4F9EB     BL $-0x18ef1c
		   // ──── Block 13 if (!=) ────────────────────
		   0x010EA1B4:  0400A0E1     MOV r0, r4
		   0x010EA1B8:  0010A0E3     MOV r1, 0x0
		   0x010EA1BC:  0020A0E3     MOV r2, 0x0
		   0x010EA1C0:  6BEAFCEB     BL $-0xc564c
		   0x010EA1C4:  000050E3     CMPS r0, r0, 0x0
		   0x010EA1C8:  1F00000A     BEQ $+0x84  // if (==) goto 0x010EA24C
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010EA1CC:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010EA1D0:  000054E3     CMPS r0, r4, 0x0
		   0x010EA1D4:  00009FE7     LDR r0, [pc, r0]
		   0x010EA1D8:  000090E5     LDR r0, [r0]
		   0x010EA1DC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EA1E0:  045090E5     LDR r5, [r0, 0x4]
		   0x010EA1E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EA1EC
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EA1E8:  78C4F9EB     BL $-0x18ee18
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EA1EC:  104094E5     LDR r4, [r4, 0x10]
		   0x010EA1F0:  000054E3     CMPS r0, r4, 0x0
		   0x010EA1F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EA1FC
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010EA1F8:  74C4F9EB     BL $-0x18ee28
		   // ──── Block 18 if (!=) ────────────────────
		   0x010EA1FC:  D461C4E1     LDRD r6, r7, [r4, 0x14]
		   0x010EA200:  000055E3     CMPS r0, r5, 0x0
		   0x010EA204:  0000001A     BNE $+0x8  // if (!=) goto 0x010EA20C
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010EA208:  70C4F9EB     BL $-0x18ee38
		   // ──── Block 20 if (!=) ────────────────────
		   0x010EA20C:  0500A0E1     MOV r0, r5
		   0x010EA210:  0610A0E1     MOV r1, r6
		   0x010EA214:  0720A0E1     MOV r2, r7
		   0x010EA218:  0030A0E3     MOV r3, 0x0
		   0x010EA21C:  E2FA10EB     BL $+0x43eb90  // CALL → FTUEChestUnlock.SetChestPosition
		   0x010EA220:  60009FE5     LDR r0, [pc, 0x60]
		   0x010EA224:  00009FE7     LDR r0, [pc, r0]
		   0x010EA228:  000090E5     LDR r0, [r0]
		   0x010EA22C:  741090E5     LDR r1, [r0, 0x74]
		   0x010EA230:  000051E3     CMPS r0, r1, 0x0
		   0x010EA234:  0000001A     BNE $+0x8  // if (!=) goto 0x010EA23C
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010EA238:  15C4F9EB     BL $-0x18efa4
		   // ──── Block 22 if (!=) ────────────────────
		   0x010EA23C:  0500A0E3     MOV r0, 0x5
		   0x010EA240:  0010A0E3     MOV r1, 0x0
		   0x010EA244:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010EA248:  F74C09EA     B $+0x2533e4  // TAIL CALL → ModalWindowsPriorityManager.CallTrigger
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x010EA24C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010EA250:  561C1403     TSTSEQ r1, r4, 0x5600
		   0x010EA254:  28EFF802     RSCSEQ lr, r8, 0xa0
		   0x010EA258:  24F0F802     RSCSEQ pc, r8, 0x24
		   0x010EA25C:  30E7F802     RSCSEQ lr, r8, 0xc00000
		   0x010EA260:  98C4F802     RSCSEQ ip, r8, 0x98000000
		   0x010EA264:  04F0F802     RSCSEQ pc, r8, 0x4
		   0x010EA268:  B8F2F802     RSCSEQ pc, r8, 0x8000000b
		   0x010EA26C:  40EFF802     RSCSEQ lr, r8, 0x100
		   0x010EA270:  1CEFF802     RSCSEQ lr, r8, 0x70
		   0x010EA274:  7CEFF802     RSCSEQ lr, r8, 0x1f0
		   0x010EA278:  1CF2F802     RSCSEQ pc, r8, 0xc0000001
		   0x010EA27C:  28EFF802     RSCSEQ lr, r8, 0xa0
		   0x010EA280:  9CC3F802     RSCSEQ ip, r8, 0x70000002
		   0x010EA284:  D0EDF802     RSCSEQ lr, r8, 0x3400
		   0x010EA288:  A0E5F802     RSCSEQ lr, r8, 0x28000000
		*/
	}

	// RVA: 0x10E1CCC Offset: 0x10E1CCC VA: 0x10E1CCC
	private void CheckForMergeFridgesFtues() {
		/* Disassembly (ARM32, 213 instructions, 0x354 bytes):
		   // CFG: 34 blocks, 34 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E1CCC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E1CD0:  F8529FE5     LDR r5, [pc, 0x2f8]
		   0x010E1CD4:  0040A0E1     MOV r4, r0
		   0x010E1CD8:  05508FE0     ADD r5, pc, r5
		   0x010E1CDC:  0000D5E5     LDRB r0, [r5]
		   0x010E1CE0:  000050E3     CMPS r0, r0, 0x0
		   0x010E1CE4:  1C00001A     BNE $+0x78  // if (!=) goto 0x010E1D5C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E1CE8:  E4029FE5     LDR r0, [pc, 0x2e4]
		   0x010E1CEC:  00009FE7     LDR r0, [pc, r0]
		   0x010E1CF0:  1AE5F9EB     BL $-0x186b90
		   0x010E1CF4:  DC029FE5     LDR r0, [pc, 0x2dc]
		   0x010E1CF8:  00009FE7     LDR r0, [pc, r0]
		   0x010E1CFC:  17E5F9EB     BL $-0x186b9c
		   0x010E1D00:  D4029FE5     LDR r0, [pc, 0x2d4]
		   0x010E1D04:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D08:  14E5F9EB     BL $-0x186ba8
		   0x010E1D0C:  CC029FE5     LDR r0, [pc, 0x2cc]
		   0x010E1D10:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D14:  11E5F9EB     BL $-0x186bb4
		   0x010E1D18:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x010E1D1C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D20:  0EE5F9EB     BL $-0x186bc0
		   0x010E1D24:  BC029FE5     LDR r0, [pc, 0x2bc]
		   0x010E1D28:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D2C:  0BE5F9EB     BL $-0x186bcc
		   0x010E1D30:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x010E1D34:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D38:  08E5F9EB     BL $-0x186bd8
		   0x010E1D3C:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x010E1D40:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D44:  05E5F9EB     BL $-0x186be4
		   0x010E1D48:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x010E1D4C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1D50:  02E5F9EB     BL $-0x186bf0
		   0x010E1D54:  0100A0E3     MOV r0, 0x1
		   0x010E1D58:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E1D5C:  94829FE5     LDR r8, [pc, 0x294]
		   0x010E1D60:  08809FE7     LDR r8, [pc, r8]
		   0x010E1D64:  544094E5     LDR r4, [r4, 0x54]
		   0x010E1D68:  000098E5     LDR r0, [r8]
		   0x010E1D6C:  741090E5     LDR r1, [r0, 0x74]
		   0x010E1D70:  000051E3     CMPS r0, r1, 0x0
		   0x010E1D74:  0100001A     BNE $+0xc  // if (!=) goto 0x010E1D80
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E1D78:  45E5F9EB     BL $-0x186ae4
		   0x010E1D7C:  000098E5     LDR r0, [r8]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E1D80:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010E1D84:  345091E5     LDR r5, [r1, 0x34]
		   0x010E1D88:  000055E3     CMPS r0, r5, 0x0
		   0x010E1D8C:  1500001A     BNE $+0x5c  // if (!=) goto 0x010E1DE8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E1D90:  742090E5     LDR r2, [r0, 0x74]
		   0x010E1D94:  000052E3     CMPS r0, r2, 0x0
		   0x010E1D98:  0200001A     BNE $+0x10  // if (!=) goto 0x010E1DA8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010E1D9C:  3CE5F9EB     BL $-0x186b08
		   0x010E1DA0:  000098E5     LDR r0, [r8]
		   0x010E1DA4:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x010E1DA8:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010E1DAC:  00009FE7     LDR r0, [pc, r0]
		   0x010E1DB0:  006091E5     LDR r6, [r1]
		   0x010E1DB4:  000090E5     LDR r0, [r0]
		   0x010E1DB8:  81E5F9EB     BL $-0x1869f4
		   0x010E1DBC:  0050A0E1     MOV r5, r0
		   0x010E1DC0:  38029FE5     LDR r0, [pc, 0x238]
		   0x010E1DC4:  0610A0E1     MOV r1, r6
		   0x010E1DC8:  0030A0E3     MOV r3, 0x0
		   0x010E1DCC:  00009FE7     LDR r0, [pc, r0]
		   0x010E1DD0:  002090E5     LDR r2, [r0]
		   0x010E1DD4:  0500A0E1     MOV r0, r5
		   0x010E1DD8:  2AB033EB     BL $+0xcec0b0  // CALL → Predicate<object>..ctor
		   0x010E1DDC:  000098E5     LDR r0, [r8]
		   0x010E1DE0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E1DE4:  345080E5     STR r5, [r0, 0x34]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E1DE8:  000054E3     CMPS r0, r4, 0x0
		   0x010E1DEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1DF4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E1DF0:  76E5F9EB     BL $-0x186a20
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E1DF4:  08929FE5     LDR sb, [pc, 0x208]
		   0x010E1DF8:  0400A0E1     MOV r0, r4
		   0x010E1DFC:  0510A0E1     MOV r1, r5
		   0x010E1E00:  09909FE7     LDR sb, [pc, sb]
		   0x010E1E04:  002099E5     LDR r2, [sb]
		   0x010E1E08:  51456CEB     BL $+0x1b1154c  // CALL → List<object>.FindAll
		   0x010E1E0C:  0040A0E1     MOV r4, r0
		   0x010E1E10:  0000A0E3     MOV r0, 0x0
		   0x010E1E14:  FB5F11EB     BL $+0x457ff4  // CALL → FTUEMergeFridgesV2.get_NotCompleted
		   0x010E1E18:  000050E3     CMPS r0, r0, 0x0
		   0x010E1E1C:  1E00000A     BEQ $+0x80  // if (==) goto 0x010E1E9C
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010E1E20:  000054E3     CMPS r0, r4, 0x0
		   0x010E1E24:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1E2C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E1E28:  68E5F9EB     BL $-0x186a58
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E1E2C:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010E1E30:  020050E3     CMPS r0, r0, 0x2
		   0x010E1E34:  180000BA     BLT $+0x68  // if (<) goto 0x010E1E9C
		   // 
		   // ──── Block 14 else (>=) ────────────────────
		   0x010E1E38:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x010E1E3C:  0010A0E3     MOV r1, 0x0
		   0x010E1E40:  00009FE7     LDR r0, [pc, r0]
		   0x010E1E44:  000090E5     LDR r0, [r0]
		   0x010E1E48:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E1E4C:  B8719FE5     LDR r7, [pc, 0x1b8]
		   0x010E1E50:  07709FE7     LDR r7, [pc, r7]
		   0x010E1E54:  045090E5     LDR r5, [r0, 0x4]
		   0x010E1E58:  0400A0E1     MOV r0, r4
		   0x010E1E5C:  002097E5     LDR r2, [r7]
		   0x010E1E60:  A6426CEB     BL $+0x1b10aa0  // CALL → List<object>.get_Item
		   0x010E1E64:  002097E5     LDR r2, [r7]
		   0x010E1E68:  0060A0E1     MOV r6, r0
		   0x010E1E6C:  0400A0E1     MOV r0, r4
		   0x010E1E70:  0110A0E3     MOV r1, 0x1
		   0x010E1E74:  A1426CEB     BL $+0x1b10a8c  // CALL → List<object>.get_Item
		   0x010E1E78:  0070A0E1     MOV r7, r0
		   0x010E1E7C:  000055E3     CMPS r0, r5, 0x0
		   0x010E1E80:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1E88
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010E1E84:  51E5F9EB     BL $-0x186ab4
		   // ──── Block 16 if (!=) ────────────────────
		   0x010E1E88:  0500A0E1     MOV r0, r5
		   0x010E1E8C:  0610A0E1     MOV r1, r6
		   0x010E1E90:  0720A0E1     MOV r2, r7
		   0x010E1E94:  0030A0E3     MOV r3, 0x0
		   0x010E1E98:  4E6111EB     BL $+0x458540  // CALL → FTUEMergeFridgesV2.TryCallTrigger
		   // ──── Block 17 (from 2 paths) ──────────────────
		   0x010E1E9C:  0000A0E3     MOV r0, 0x0
		   0x010E1EA0:  292F11EB     BL $+0x44bcac  // CALL → FTUEMergeFridges.get_NotCompleted
		   0x010E1EA4:  000050E3     CMPS r0, r0, 0x0
		   0x010E1EA8:  4700000A     BEQ $+0x124  // if (==) goto 0x010E1FCC
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x010E1EAC:  000098E5     LDR r0, [r8]
		   0x010E1EB0:  741090E5     LDR r1, [r0, 0x74]
		   0x010E1EB4:  000051E3     CMPS r0, r1, 0x0
		   0x010E1EB8:  0100001A     BNE $+0xc  // if (!=) goto 0x010E1EC4
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010E1EBC:  F4E4F9EB     BL $-0x186c28
		   0x010E1EC0:  000098E5     LDR r0, [r8]
		   // ──── Block 20 if (!=) ────────────────────
		   0x010E1EC4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010E1EC8:  385091E5     LDR r5, [r1, 0x38]
		   0x010E1ECC:  000055E3     CMPS r0, r5, 0x0
		   0x010E1ED0:  1500001A     BNE $+0x5c  // if (!=) goto 0x010E1F2C
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010E1ED4:  742090E5     LDR r2, [r0, 0x74]
		   0x010E1ED8:  000052E3     CMPS r0, r2, 0x0
		   0x010E1EDC:  0200001A     BNE $+0x10  // if (!=) goto 0x010E1EEC
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010E1EE0:  EBE4F9EB     BL $-0x186c4c
		   0x010E1EE4:  000098E5     LDR r0, [r8]
		   0x010E1EE8:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 23 if (!=) ────────────────────
		   0x010E1EEC:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x010E1EF0:  00009FE7     LDR r0, [pc, r0]
		   0x010E1EF4:  006091E5     LDR r6, [r1]
		   0x010E1EF8:  000090E5     LDR r0, [r0]
		   0x010E1EFC:  30E5F9EB     BL $-0x186b38
		   0x010E1F00:  0050A0E1     MOV r5, r0
		   0x010E1F04:  08019FE5     LDR r0, [pc, 0x108]
		   0x010E1F08:  0610A0E1     MOV r1, r6
		   0x010E1F0C:  0030A0E3     MOV r3, 0x0
		   0x010E1F10:  00009FE7     LDR r0, [pc, r0]
		   0x010E1F14:  002090E5     LDR r2, [r0]
		   0x010E1F18:  0500A0E1     MOV r0, r5
		   0x010E1F1C:  D9AF33EB     BL $+0xcebf6c  // CALL → Predicate<object>..ctor
		   0x010E1F20:  000098E5     LDR r0, [r8]
		   0x010E1F24:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E1F28:  385080E5     STR r5, [r0, 0x38]
		   // ──── Block 24 if (!=) ────────────────────
		   0x010E1F2C:  000054E3     CMPS r0, r4, 0x0
		   0x010E1F30:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1F38
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010E1F34:  25E5F9EB     BL $-0x186b64
		   // ──── Block 26 if (!=) ────────────────────
		   0x010E1F38:  002099E5     LDR r2, [sb]
		   0x010E1F3C:  0400A0E1     MOV r0, r4
		   0x010E1F40:  0510A0E1     MOV r1, r5
		   0x010E1F44:  02456CEB     BL $+0x1b11410  // CALL → List<object>.FindAll
		   0x010E1F48:  0040A0E1     MOV r4, r0
		   0x010E1F4C:  000050E3     CMPS r0, r0, 0x0
		   0x010E1F50:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1F58
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010E1F54:  1DE5F9EB     BL $-0x186b84
		   // ──── Block 28 if (!=) ────────────────────
		   0x010E1F58:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010E1F5C:  020050E3     CMPS r0, r0, 0x2
		   0x010E1F60:  190000BA     BLT $+0x6c  // if (<) goto 0x010E1FCC
		   // 
		   // ──── Block 29 else (>=) ────────────────────
		   0x010E1F64:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010E1F68:  0010A0E3     MOV r1, 0x0
		   0x010E1F6C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1F70:  000090E5     LDR r0, [r0]
		   0x010E1F74:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010E1F78:  9C709FE5     LDR r7, [pc, 0x9c]
		   0x010E1F7C:  07709FE7     LDR r7, [pc, r7]
		   0x010E1F80:  045090E5     LDR r5, [r0, 0x4]
		   0x010E1F84:  0400A0E1     MOV r0, r4
		   0x010E1F88:  002097E5     LDR r2, [r7]
		   0x010E1F8C:  5B426CEB     BL $+0x1b10974  // CALL → List<object>.get_Item
		   0x010E1F90:  002097E5     LDR r2, [r7]
		   0x010E1F94:  0060A0E1     MOV r6, r0
		   0x010E1F98:  0400A0E1     MOV r0, r4
		   0x010E1F9C:  0110A0E3     MOV r1, 0x1
		   0x010E1FA0:  56426CEB     BL $+0x1b10960  // CALL → List<object>.get_Item
		   0x010E1FA4:  0040A0E1     MOV r4, r0
		   0x010E1FA8:  000055E3     CMPS r0, r5, 0x0
		   0x010E1FAC:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1FB4
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010E1FB0:  06E5F9EB     BL $-0x186be0
		   // ──── Block 31 if (!=) ────────────────────
		   0x010E1FB4:  0500A0E1     MOV r0, r5
		   0x010E1FB8:  0610A0E1     MOV r1, r6
		   0x010E1FBC:  0420A0E1     MOV r2, r4
		   0x010E1FC0:  0030A0E3     MOV r3, 0x0
		   0x010E1FC4:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E1FC8:  FF2F11EA     B $+0x44c004  // TAIL CALL → FTUEMergeFridges.TryCallTrigger
		   // ──── Block 32 (from 2 paths) ──────────────────
		   0x010E1FCC:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010E1FD0:  E79F1403     TSTSEQ sb, r4, 0x39c
		   0x010E1FD4:  3475F902     RSCSEQ r7, sb, 0xd000000
		   0x010E1FD8:  3472F902     RSCSEQ r7, sb, 0x40000003
		   0x010E1FDC:  2075F902     RSCSEQ r7, sb, 0x8000000
		   0x010E1FE0:  1875F902     RSCSEQ r7, sb, 0x6000000
		   0x010E1FE4:  1075F902     RSCSEQ r7, sb, 0x4000000
		   0x010E1FE8:  8873F902     RSCSEQ r7, sb, 0x20000002
		   0x010E1FEC:  FC74F902     RSCSEQ r7, sb, 0xfc000000
		   0x010E1FF0:  F474F902     RSCSEQ r7, sb, 0xf4000000
		   0x010E1FF4:  B872F902     RSCSEQ r7, sb, 0x8000000b
		   0x010E1FF8:  A472F902     RSCSEQ r7, sb, 0x4000000a
		   0x010E1FFC:  0473F902     RSCSEQ r7, sb, 0x10000000
		   0x010E2000:  6474F902     RSCSEQ r7, sb, 0x64000000
		   0x010E2004:  2474F902     RSCSEQ r7, sb, 0x24000000
		   0x010E2008:  E073F902     RSCSEQ r7, sb, 0x80000003
		   0x010E200C:  DC73F902     RSCSEQ r7, sb, 0x70000003
		   0x010E2010:  C071F902     RSCSEQ r7, sb, 0x30
		   0x010E2014:  2473F902     RSCSEQ r7, sb, 0x90000000
		   0x010E2018:  C06FF902     RSCSEQ r6, sb, 0x300
		   0x010E201C:  B072F902     RSCSEQ r7, sb, 0xb
		*/
	}

	// RVA: 0x10EA28C Offset: 0x10EA28C VA: 0x10EA28C
	public int SjItemsValueOnField(string chainName) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EA28C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}

	// RVA: 0x10EA5AC Offset: 0x10EA5AC VA: 0x10EA5AC
	public int FlashSaleItemValueStored(string chainType) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EA5AC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	// RVA: 0x10DB51C Offset: 0x10DB51C VA: 0x10DB51C
	public List<Goal> GetGoals() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB51C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010DB520:  A8509FE5     LDR r5, [pc, 0xa8]
		   0x010DB524:  0040A0E1     MOV r4, r0
		   0x010DB528:  05508FE0     ADD r5, pc, r5
		   0x010DB52C:  0000D5E5     LDRB r0, [r5]
		   0x010DB530:  000050E3     CMPS r0, r0, 0x0
		   0x010DB534:  0400001A     BNE $+0x18  // if (!=) goto 0x010DB54C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB538:  94009FE5     LDR r0, [pc, 0x94]
		   0x010DB53C:  00009FE7     LDR r0, [pc, r0]
		   0x010DB540:  06FFF9EB     BL $-0x1803e0
		   0x010DB544:  0100A0E3     MOV r0, 0x1
		   0x010DB548:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB54C:  84009FE5     LDR r0, [pc, 0x84]
		   0x010DB550:  00009FE7     LDR r0, [pc, r0]
		   0x010DB554:  6C6094E5     LDR r6, [r4, 0x6c]
		   0x010DB558:  000090E5     LDR r0, [r0]
		   0x010DB55C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010DB560:  005090E5     LDR r5, [r0]
		   0x010DB564:  000055E3     CMPS r0, r5, 0x0
		   0x010DB568:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB570
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB56C:  97FFF9EB     BL $-0x18019c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB570:  0500A0E1     MOV r0, r5
		   0x010DB574:  0010A0E3     MOV r1, 0x0
		   0x010DB578:  F20303EB     BL $+0xc0fd0  // CALL → Seasons.get_CurrentSeason
		   0x010DB57C:  000056E1     CMPS r0, r6, r0
		   0x010DB580:  0B00000A     BEQ $+0x34  // if (==) goto 0x010DB5B4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010DB584:  6C4094E5     LDR r4, [r4, 0x6c]
		   0x010DB588:  000054E3     CMPS r0, r4, 0x0
		   0x010DB58C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB594
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010DB590:  8EFFF9EB     BL $-0x1801c0
		   // ──── Block 7 if (!=) ────────────────────
		   0x010DB594:  184094E5     LDR r4, [r4, 0x18]
		   0x010DB598:  000054E3     CMPS r0, r4, 0x0
		   0x010DB59C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB5A4
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010DB5A0:  8AFFF9EB     BL $-0x1801d0
		   // ──── Block 9 if (!=) ────────────────────
		   0x010DB5A4:  0400A0E1     MOV r0, r4
		   0x010DB5A8:  0010A0E3     MOV r1, 0x0
		   0x010DB5AC:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010DB5B0:  4A5110EA     B $+0x414530  // TAIL CALL → ChallengesConfig.get_Goals
		   // ──── Block 10 if (==) ────────────────────
		   0x010DB5B4:  68FFFFEB     BL $-0x258
		   0x010DB5B8:  0040A0E1     MOV r4, r0
		   0x010DB5BC:  000050E3     CMPS r0, r0, 0x0
		   0x010DB5C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB5C8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010DB5C4:  81FFF9EB     BL $-0x1801f4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010DB5C8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010DB5CC:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010DB5D0:  9A071503     TSTSEQ r0, r5, 0x2680000
		   0x010DB5D4:  08D6F902     RSCSEQ sp, sb, 0x800000
		   0x010DB5D8:  F4D5F902     RSCSEQ sp, sb, 0x3d000000
		*/
	}

	// RVA: 0x10EA8EC Offset: 0x10EA8EC VA: 0x10EA8EC
	public List<Goal> GetCurrentLevelGoalsProgress(bool checkRewardBox) {
		/* Disassembly (ARM32, 56 instructions, 0xE0 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EA8EC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EA8F0:  44D04DE2     SUB sp, sp, 0x44
		   0x010EA8F4:  80649FE5     LDR r6, [pc, 0x480]
		   0x010EA8F8:  0050A0E1     MOV r5, r0
		   0x010EA8FC:  0140A0E1     MOV r4, r1
		   0x010EA900:  06608FE0     ADD r6, pc, r6
		   0x010EA904:  0000D6E5     LDRB r0, [r6]
		   0x010EA908:  000050E3     CMPS r0, r0, 0x0
		   0x010EA90C:  2E00001A     BNE $+0xc0
		   0x010EA910:  68049FE5     LDR r0, [pc, 0x468]
		   0x010EA914:  00009FE7     LDR r0, [pc, r0]
		   0x010EA918:  10C2F9EB     BL $-0x18f7b8
		   0x010EA91C:  60049FE5     LDR r0, [pc, 0x460]
		   0x010EA920:  00009FE7     LDR r0, [pc, r0]
		   0x010EA924:  0DC2F9EB     BL $-0x18f7c4
		   0x010EA928:  58049FE5     LDR r0, [pc, 0x458]
		   0x010EA92C:  00009FE7     LDR r0, [pc, r0]
		   0x010EA930:  0AC2F9EB     BL $-0x18f7d0
		   0x010EA934:  50049FE5     LDR r0, [pc, 0x450]
		   0x010EA938:  00009FE7     LDR r0, [pc, r0]
		   0x010EA93C:  07C2F9EB     BL $-0x18f7dc
		   0x010EA940:  48049FE5     LDR r0, [pc, 0x448]
		   0x010EA944:  00009FE7     LDR r0, [pc, r0]
		   0x010EA948:  04C2F9EB     BL $-0x18f7e8
		   0x010EA94C:  40049FE5     LDR r0, [pc, 0x440]
		   0x010EA950:  00009FE7     LDR r0, [pc, r0]
		   0x010EA954:  01C2F9EB     BL $-0x18f7f4
		   0x010EA958:  38049FE5     LDR r0, [pc, 0x438]
		   0x010EA95C:  00009FE7     LDR r0, [pc, r0]
		   0x010EA960:  FEC1F9EB     BL $-0x18f800
		   0x010EA964:  30049FE5     LDR r0, [pc, 0x430]
		   0x010EA968:  00009FE7     LDR r0, [pc, r0]
		   0x010EA96C:  FBC1F9EB     BL $-0x18f80c
		   0x010EA970:  28049FE5     LDR r0, [pc, 0x428]
		   0x010EA974:  00009FE7     LDR r0, [pc, r0]
		   0x010EA978:  F8C1F9EB     BL $-0x18f818
		   0x010EA97C:  20049FE5     LDR r0, [pc, 0x420]
		   0x010EA980:  00009FE7     LDR r0, [pc, r0]
		   0x010EA984:  F5C1F9EB     BL $-0x18f824
		   0x010EA988:  18049FE5     LDR r0, [pc, 0x418]
		   0x010EA98C:  00009FE7     LDR r0, [pc, r0]
		   0x010EA990:  F2C1F9EB     BL $-0x18f830
		   0x010EA994:  10049FE5     LDR r0, [pc, 0x410]
		   0x010EA998:  00009FE7     LDR r0, [pc, r0]
		   0x010EA99C:  EFC1F9EB     BL $-0x18f83c
		   0x010EA9A0:  08049FE5     LDR r0, [pc, 0x408]
		   0x010EA9A4:  00009FE7     LDR r0, [pc, r0]
		   0x010EA9A8:  ECC1F9EB     BL $-0x18f848
		   0x010EA9AC:  00049FE5     LDR r0, [pc, 0x400]
		   0x010EA9B0:  00009FE7     LDR r0, [pc, r0]
		   0x010EA9B4:  E9C1F9EB     BL $-0x18f854
		   0x010EA9B8:  F8039FE5     LDR r0, [pc, 0x3f8]
		   0x010EA9BC:  00009FE7     LDR r0, [pc, r0]
		   0x010EA9C0:  E6C1F9EB     BL $-0x18f860
		   0x010EA9C4:  0100A0E3     MOV r0, 0x1
		   0x010EA9C8:  0000C6E5     STRB r0, [r6]
		*/
	}

	// RVA: 0x10EADF0 Offset: 0x10EADF0 VA: 0x10EADF0
	public List<Goal> GetNextLevelGoals() {
		/* Disassembly (ARM32, 93 instructions, 0x174 bytes):
		   // CFG: 21 blocks, 19 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EADF0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EADF4:  48419FE5     LDR r4, [pc, 0x148]
		   0x010EADF8:  04408FE0     ADD r4, pc, r4
		   0x010EADFC:  0000D4E5     LDRB r0, [r4]
		   0x010EAE00:  000050E3     CMPS r0, r0, 0x0
		   0x010EAE04:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010EAE40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EAE08:  38019FE5     LDR r0, [pc, 0x138]
		   0x010EAE0C:  00009FE7     LDR r0, [pc, r0]
		   0x010EAE10:  D2C0F9EB     BL $-0x18fcb0
		   0x010EAE14:  30019FE5     LDR r0, [pc, 0x130]
		   0x010EAE18:  00009FE7     LDR r0, [pc, r0]
		   0x010EAE1C:  CFC0F9EB     BL $-0x18fcbc
		   0x010EAE20:  28019FE5     LDR r0, [pc, 0x128]
		   0x010EAE24:  00009FE7     LDR r0, [pc, r0]
		   0x010EAE28:  CCC0F9EB     BL $-0x18fcc8
		   0x010EAE2C:  20019FE5     LDR r0, [pc, 0x120]
		   0x010EAE30:  00009FE7     LDR r0, [pc, r0]
		   0x010EAE34:  C9C0F9EB     BL $-0x18fcd4
		   0x010EAE38:  0100A0E3     MOV r0, 0x1
		   0x010EAE3C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EAE40:  1DC4FFEB     BL $-0xef84
		   0x010EAE44:  000050E3     CMPS r0, r0, 0x0
		   0x010EAE48:  3100000A     BEQ $+0xcc  // if (==) goto 0x010EAF14
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010EAE4C:  63C1FFEB     BL $-0xfa6c
		   0x010EAE50:  0040A0E1     MOV r4, r0
		   0x010EAE54:  000050E3     CMPS r0, r0, 0x0
		   0x010EAE58:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAE60
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010EAE5C:  5BC1F9EB     BL $-0x18fa8c
		   // ──── Block 5 if (!=) ────────────────────
		   0x010EAE60:  184094E5     LDR r4, [r4, 0x18]
		   0x010EAE64:  000054E3     CMPS r0, r4, 0x0
		   0x010EAE68:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAE70
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EAE6C:  57C1F9EB     BL $-0x18fa9c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EAE70:  0C5094E5     LDR r5, [r4, 0xc]
		   0x010EAE74:  59C1FFEB     BL $-0xfa94
		   0x010EAE78:  0040A0E1     MOV r4, r0
		   0x010EAE7C:  000050E3     CMPS r0, r0, 0x0
		   0x010EAE80:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAE88
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EAE84:  51C1F9EB     BL $-0x18fab4
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EAE88:  0400A0E1     MOV r0, r4
		   0x010EAE8C:  0010A0E3     MOV r1, 0x0
		   0x010EAE90:  BCAA10EB     BL $+0x42aaf8  // CALL → Episodes.get_CurrentLevelIdx
		   0x010EAE94:  014080E2     ADD r4, r0, 0x1
		   0x010EAE98:  010045E2     SUB r0, r5, 0x1
		   0x010EAE9C:  040050E1     CMPS r0, r0, r4
		   0x010EAEA0:  0040A0B1     MOVLT r4, r0
		   0x010EAEA4:  4DC1FFEB     BL $-0xfac4
		   0x010EAEA8:  0050A0E1     MOV r5, r0
		   0x010EAEAC:  000050E3     CMPS r0, r0, 0x0
		   0x010EAEB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAEB8
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EAEB4:  45C1F9EB     BL $-0x18fae4
		   // ──── Block 11 if (!=) ────────────────────
		   0x010EAEB8:  185095E5     LDR r5, [r5, 0x18]
		   0x010EAEBC:  000055E3     CMPS r0, r5, 0x0
		   0x010EAEC0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAEC8
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010EAEC4:  41C1F9EB     BL $-0x18faf4
		   // ──── Block 13 if (!=) ────────────────────
		   0x010EAEC8:  88009FE5     LDR r0, [pc, 0x88]
		   0x010EAECC:  0410A0E1     MOV r1, r4
		   0x010EAED0:  00009FE7     LDR r0, [pc, r0]
		   0x010EAED4:  002090E5     LDR r2, [r0]
		   0x010EAED8:  0500A0E1     MOV r0, r5
		   0x010EAEDC:  871E6CEB     BL $+0x1b07a24  // CALL → List<object>.get_Item
		   0x010EAEE0:  0040A0E1     MOV r4, r0
		   0x010EAEE4:  000050E3     CMPS r0, r0, 0x0
		   0x010EAEE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAEF0
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010EAEEC:  37C1F9EB     BL $-0x18fb1c
		   // ──── Block 15 if (!=) ────────────────────
		   0x010EAEF0:  0400A0E1     MOV r0, r4
		   0x010EAEF4:  0010A0E3     MOV r1, 0x0
		   0x010EAEF8:  2BAE10EB     BL $+0x42b8b4  // CALL → Level.Clone
		   0x010EAEFC:  0040A0E1     MOV r4, r0
		   0x010EAF00:  000050E3     CMPS r0, r0, 0x0
		   0x010EAF04:  0000001A     BNE $+0x8  // if (!=) goto 0x010EAF0C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010EAF08:  30C1F9EB     BL $-0x18fb38
		   // ──── Block 17 if (!=) ────────────────────
		   0x010EAF0C:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010EAF10:  090000EA     B $+0x2c  // goto 0x010EAF3C
		   // ──── Block 18 if (==) ────────────────────
		   0x010EAF14:  40009FE5     LDR r0, [pc, 0x40]
		   0x010EAF18:  00009FE7     LDR r0, [pc, r0]
		   0x010EAF1C:  000090E5     LDR r0, [r0]
		   0x010EAF20:  27C1F9EB     BL $-0x18fb5c
		   0x010EAF24:  0040A0E1     MOV r4, r0
		   0x010EAF28:  30009FE5     LDR r0, [pc, 0x30]
		   0x010EAF2C:  00009FE7     LDR r0, [pc, r0]
		   0x010EAF30:  001090E5     LDR r1, [r0]
		   0x010EAF34:  0400A0E1     MOV r0, r4
		   0x010EAF38:  1C1D6CEB     BL $+0x1b07478  // CALL → List<object>..ctor
		   // ──── Block 19 ──────────────────────────────
		   0x010EAF3C:  0400A0E1     MOV r0, r4
		   0x010EAF40:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010EAF44:  CC0E1403     TSTSEQ r0, r4, 0xcc0
		   0x010EAF48:  28DAF802     RSCSEQ sp, r8, 0x28000
		   0x010EAF4C:  1CE2F802     RSCSEQ lr, r8, 0xc0000001
		   0x010EAF50:  48E2F802     RSCSEQ lr, r8, 0x80000004
		   0x010EAF54:  08DAF802     RSCSEQ sp, r8, 0x8000
		   0x010EAF58:  9CE1F802     RSCSEQ lr, r8, 0x27
		   0x010EAF5C:  20D9F802     RSCSEQ sp, r8, 0x80000
		   0x010EAF60:  08D9F802     RSCSEQ sp, r8, 0x20000
		*/
	}

	// RVA: 0x10EAF64 Offset: 0x10EAF64 VA: 0x10EAF64
	public List<Goal> GetNextLevelGoalsProgressFlashSale(bool checkRewardBox) {
		/* Disassembly (ARM32, 84 instructions, 0x150 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EAF64:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EAF68:  4CD04DE2     SUB sp, sp, 0x4c
		   0x010EAF6C:  08108DE5     STR r1, [sp, 0x8]
		   0x010EAF70:  0C008DE5     STR r0, [sp, 0xc]
		   0x010EAF74:  B4489FE5     LDR r4, [pc, 0x8b4]
		   0x010EAF78:  04408FE0     ADD r4, pc, r4
		   0x010EAF7C:  0000D4E5     LDRB r0, [r4]
		   0x010EAF80:  000050E3     CMPS r0, r0, 0x0
		   0x010EAF84:  4900001A     BNE $+0x12c  // if (!=) goto 0x010EB0B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EAF88:  A4089FE5     LDR r0, [pc, 0x8a4]
		   0x010EAF8C:  00009FE7     LDR r0, [pc, r0]
		   0x010EAF90:  72C0F9EB     BL $-0x18fe30
		   0x010EAF94:  9C089FE5     LDR r0, [pc, 0x89c]
		   0x010EAF98:  00009FE7     LDR r0, [pc, r0]
		   0x010EAF9C:  6FC0F9EB     BL $-0x18fe3c
		   0x010EAFA0:  94089FE5     LDR r0, [pc, 0x894]
		   0x010EAFA4:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFA8:  6CC0F9EB     BL $-0x18fe48
		   0x010EAFAC:  8C089FE5     LDR r0, [pc, 0x88c]
		   0x010EAFB0:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFB4:  69C0F9EB     BL $-0x18fe54
		   0x010EAFB8:  84089FE5     LDR r0, [pc, 0x884]
		   0x010EAFBC:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFC0:  66C0F9EB     BL $-0x18fe60
		   0x010EAFC4:  7C089FE5     LDR r0, [pc, 0x87c]
		   0x010EAFC8:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFCC:  63C0F9EB     BL $-0x18fe6c
		   0x010EAFD0:  74089FE5     LDR r0, [pc, 0x874]
		   0x010EAFD4:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFD8:  60C0F9EB     BL $-0x18fe78
		   0x010EAFDC:  6C089FE5     LDR r0, [pc, 0x86c]
		   0x010EAFE0:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFE4:  5DC0F9EB     BL $-0x18fe84
		   0x010EAFE8:  64089FE5     LDR r0, [pc, 0x864]
		   0x010EAFEC:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFF0:  5AC0F9EB     BL $-0x18fe90
		   0x010EAFF4:  5C089FE5     LDR r0, [pc, 0x85c]
		   0x010EAFF8:  00009FE7     LDR r0, [pc, r0]
		   0x010EAFFC:  57C0F9EB     BL $-0x18fe9c
		   0x010EB000:  54089FE5     LDR r0, [pc, 0x854]
		   0x010EB004:  00009FE7     LDR r0, [pc, r0]
		   0x010EB008:  54C0F9EB     BL $-0x18fea8
		   0x010EB00C:  4C089FE5     LDR r0, [pc, 0x84c]
		   0x010EB010:  00009FE7     LDR r0, [pc, r0]
		   0x010EB014:  51C0F9EB     BL $-0x18feb4
		   0x010EB018:  44089FE5     LDR r0, [pc, 0x844]
		   0x010EB01C:  00009FE7     LDR r0, [pc, r0]
		   0x010EB020:  4EC0F9EB     BL $-0x18fec0
		   0x010EB024:  3C089FE5     LDR r0, [pc, 0x83c]
		   0x010EB028:  00009FE7     LDR r0, [pc, r0]
		   0x010EB02C:  4BC0F9EB     BL $-0x18fecc
		   0x010EB030:  34089FE5     LDR r0, [pc, 0x834]
		   0x010EB034:  00009FE7     LDR r0, [pc, r0]
		   0x010EB038:  48C0F9EB     BL $-0x18fed8
		   0x010EB03C:  2C089FE5     LDR r0, [pc, 0x82c]
		   0x010EB040:  00009FE7     LDR r0, [pc, r0]
		   0x010EB044:  45C0F9EB     BL $-0x18fee4
		   0x010EB048:  24089FE5     LDR r0, [pc, 0x824]
		   0x010EB04C:  00009FE7     LDR r0, [pc, r0]
		   0x010EB050:  42C0F9EB     BL $-0x18fef0
		   0x010EB054:  1C089FE5     LDR r0, [pc, 0x81c]
		   0x010EB058:  00009FE7     LDR r0, [pc, r0]
		   0x010EB05C:  3FC0F9EB     BL $-0x18fefc
		   0x010EB060:  14089FE5     LDR r0, [pc, 0x814]
		   0x010EB064:  00009FE7     LDR r0, [pc, r0]
		   0x010EB068:  3CC0F9EB     BL $-0x18ff08
		   0x010EB06C:  0C089FE5     LDR r0, [pc, 0x80c]
		   0x010EB070:  00009FE7     LDR r0, [pc, r0]
		   0x010EB074:  39C0F9EB     BL $-0x18ff14
		   0x010EB078:  04089FE5     LDR r0, [pc, 0x804]
		   0x010EB07C:  00009FE7     LDR r0, [pc, r0]
		   0x010EB080:  36C0F9EB     BL $-0x18ff20
		   0x010EB084:  FC079FE5     LDR r0, [pc, 0x7fc]
		   0x010EB088:  00009FE7     LDR r0, [pc, r0]
		   0x010EB08C:  33C0F9EB     BL $-0x18ff2c
		   0x010EB090:  F4079FE5     LDR r0, [pc, 0x7f4]
		   0x010EB094:  00009FE7     LDR r0, [pc, r0]
		   0x010EB098:  30C0F9EB     BL $-0x18ff38
		   0x010EB09C:  EC079FE5     LDR r0, [pc, 0x7ec]
		   0x010EB0A0:  00009FE7     LDR r0, [pc, r0]
		   0x010EB0A4:  2DC0F9EB     BL $-0x18ff44
		   0x010EB0A8:  0100A0E3     MOV r0, 0x1
		   0x010EB0AC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EB0B0:  DC879FE5     LDR r8, [pc, 0x7dc]
		*/
	}

	// RVA: 0x10E181C Offset: 0x10E181C VA: 0x10E181C
	private int GetUnicID() {
		/* Disassembly (ARM32, 111 instructions, 0x1BC bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E181C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E1820:  04D04DE2     SUB sp, sp, 0x4
		   0x010E1824:  80519FE5     LDR r5, [pc, 0x180]
		   0x010E1828:  0040A0E1     MOV r4, r0
		   0x010E182C:  05508FE0     ADD r5, pc, r5
		   0x010E1830:  0000D5E5     LDRB r0, [r5]
		   0x010E1834:  000050E3     CMPS r0, r0, 0x0
		   0x010E1838:  1000001A     BNE $+0x48  // if (!=) goto 0x010E1880
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E183C:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010E1840:  00009FE7     LDR r0, [pc, r0]
		   0x010E1844:  45E6F9EB     BL $-0x1866e4
		   0x010E1848:  64019FE5     LDR r0, [pc, 0x164]
		   0x010E184C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1850:  42E6F9EB     BL $-0x1866f0
		   0x010E1854:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010E1858:  00009FE7     LDR r0, [pc, r0]
		   0x010E185C:  3FE6F9EB     BL $-0x1866fc
		   0x010E1860:  54019FE5     LDR r0, [pc, 0x154]
		   0x010E1864:  00009FE7     LDR r0, [pc, r0]
		   0x010E1868:  3CE6F9EB     BL $-0x186708
		   0x010E186C:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010E1870:  00009FE7     LDR r0, [pc, r0]
		   0x010E1874:  39E6F9EB     BL $-0x186714
		   0x010E1878:  0100A0E3     MOV r0, 0x1
		   0x010E187C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E1880:  3CA19FE5     LDR r10, [pc, 0x13c]
		   0x010E1884:  408204E3     MOV r8, 0x4240
		   0x010E1888:  0F8040E3     MOVT r8, 0xf
		   0x010E188C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010E1890:  30B19FE5     LDR fp, [pc, 0x130]
		   0x010E1894:  0BB09FE7     LDR fp, [pc, fp]
		   0x010E1898:  2C919FE5     LDR sb, [pc, 0x12c]
		   0x010E189C:  09909FE7     LDR sb, [pc, sb]
		   0x010E18A0:  28019FE5     LDR r0, [pc, 0x128]
		   0x010E18A4:  00009FE7     LDR r0, [pc, r0]
		   0x010E18A8:  000090E5     LDR r0, [r0]
		   0x010E18AC:  C4E6F9EB     BL $-0x1864e8
		   0x010E18B0:  0010A0E3     MOV r1, 0x0
		   0x010E18B4:  0060A0E1     MOV r6, r0
		   0x010E18B8:  553600EB     BL $+0xd95c  // CALL → <>c__DisplayClass154_0..ctor
		   0x010E18BC:  6400A0E3     MOV r0, 0x64
		   0x010E18C0:  0810A0E1     MOV r1, r8
		   0x010E18C4:  0020A0E3     MOV r2, 0x0
		   0x010E18C8:  9B0CFDEB     BL $-0xbcd8c
		   0x010E18CC:  0050A0E1     MOV r5, r0
		   0x010E18D0:  000056E3     CMPS r0, r6, 0x0
		   0x010E18D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E18DC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E18D8:  BCE6F9EB     BL $-0x186508
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E18DC:  3C7094E5     LDR r7, [r4, 0x3c]
		   0x010E18E0:  085086E5     STR r5, [r6, 0x8]
		   0x010E18E4:  000057E3     CMPS r0, r7, 0x0
		   0x010E18E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E18F0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E18EC:  B7E6F9EB     BL $-0x18651c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E18F0:  00009AE5     LDR r0, [r10]
		   0x010E18F4:  0C7097E5     LDR r7, [r7, 0xc]
		   0x010E18F8:  B1E6F9EB     BL $-0x186534
		   0x010E18FC:  00209BE5     LDR r2, [fp]
		   0x010E1900:  0610A0E1     MOV r1, r6
		   0x010E1904:  0030A0E3     MOV r3, 0x0
		   0x010E1908:  0050A0E1     MOV r5, r0
		   0x010E190C:  5DB133EB     BL $+0xcec57c  // CALL → Predicate<object>..ctor
		   0x010E1910:  000057E3     CMPS r0, r7, 0x0
		   0x010E1914:  0000001A     BNE $+0x8  // if (!=) goto 0x010E191C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E1918:  ACE6F9EB     BL $-0x186548
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E191C:  002099E5     LDR r2, [sb]
		   0x010E1920:  0700A0E1     MOV r0, r7
		   0x010E1924:  0510A0E1     MOV r1, r5
		   0x010E1928:  EB466CEB     BL $+0x1b11bb4  // CALL → List<object>.FindIndex
		   0x010E192C:  010070E3     CMNS r0, r0, 0x1
		   0x010E1930:  DAFFFF1A     BNE $-0x90
		   // ──── Block 9 else (==) ────────────────────
		   0x010E1934:  3C5094E5     LDR r5, [r4, 0x3c]
		   0x010E1938:  000055E3     CMPS r0, r5, 0x0
		   0x010E193C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1944
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010E1940:  A2E6F9EB     BL $-0x186570
		   // ──── Block 11 if (!=) ────────────────────
		   0x010E1944:  0500A0E1     MOV r0, r5
		   0x010E1948:  0010A0E3     MOV r1, 0x0
		   0x010E194C:  4E0B01EB     BL $+0x42d40  // CALL → GameStateSave.get_Inventory
		   0x010E1950:  0070A0E1     MOV r7, r0
		   0x010E1954:  00009AE5     LDR r0, [r10]
		   0x010E1958:  99E6F9EB     BL $-0x186594
		   0x010E195C:  0050A0E1     MOV r5, r0
		   0x010E1960:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010E1964:  0610A0E1     MOV r1, r6
		   0x010E1968:  0030A0E3     MOV r3, 0x0
		   0x010E196C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1970:  002090E5     LDR r2, [r0]
		   0x010E1974:  0500A0E1     MOV r0, r5
		   0x010E1978:  42B133EB     BL $+0xcec510  // CALL → Predicate<object>..ctor
		   0x010E197C:  000057E3     CMPS r0, r7, 0x0
		   0x010E1980:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1988
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010E1984:  91E6F9EB     BL $-0x1865b4
		   // ──── Block 13 if (!=) ────────────────────
		   0x010E1988:  002099E5     LDR r2, [sb]
		   0x010E198C:  0700A0E1     MOV r0, r7
		   0x010E1990:  0510A0E1     MOV r1, r5
		   0x010E1994:  D0466CEB     BL $+0x1b11b48  // CALL → List<object>.FindIndex
		   0x010E1998:  010070E3     CMNS r0, r0, 0x1
		   0x010E199C:  BFFFFF1A     BNE $-0xfc
		   // ──── Block 14 else (==) ────────────────────
		   0x010E19A0:  080096E5     LDR r0, [r6, 0x8]
		   0x010E19A4:  04D08DE2     ADD sp, sp, 0x4
		   0x010E19A8:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010E19AC:  9AA41403     TSTSEQ r10, r4, 0x9a000000
		   0x010E19B0:  B879F902     RSCSEQ r7, sb, 0x2e0000
		   0x010E19B4:  B876F902     RSCSEQ r7, sb, 0xb800000
		   0x010E19B8:  A479F902     RSCSEQ r7, sb, 0x290000
		   0x010E19BC:  9C79F902     RSCSEQ r7, sb, 0x270000
		   0x010E19C0:  9479F902     RSCSEQ r7, sb, 0x250000
		   0x010E19C4:  7876F902     RSCSEQ r7, sb, 0x7800000
		   0x010E19C8:  6879F902     RSCSEQ r7, sb, 0x1a0000
		   0x010E19CC:  5C79F902     RSCSEQ r7, sb, 0x170000
		   0x010E19D0:  6079F902     RSCSEQ r7, sb, 0x180000
		   0x010E19D4:  9478F902     RSCSEQ r7, sb, 0x940000
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x10DC87C Offset: 0x10DC87C VA: 0x10DC87C
	private IEnumerator WaitForSendAppStart() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DC87C:  10402DE9     PUSH {r4, lr}
		   0x010DC880:  48409FE5     LDR r4, [pc, 0x48]
		   0x010DC884:  04408FE0     ADD r4, pc, r4
		   0x010DC888:  0000D4E5     LDRB r0, [r4]
		   0x010DC88C:  000050E3     CMPS r0, r0, 0x0
		   0x010DC890:  0400001A     BNE $+0x18  // if (!=) goto 0x010DC8A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DC894:  38009FE5     LDR r0, [pc, 0x38]
		   0x010DC898:  00009FE7     LDR r0, [pc, r0]
		   0x010DC89C:  2FFAF9EB     BL $-0x18173c
		   0x010DC8A0:  0100A0E3     MOV r0, 0x1
		   0x010DC8A4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DC8A8:  28009FE5     LDR r0, [pc, 0x28]
		   0x010DC8AC:  00009FE7     LDR r0, [pc, r0]
		   0x010DC8B0:  000090E5     LDR r0, [r0]
		   0x010DC8B4:  C2FAF9EB     BL $-0x1814f0
		   0x010DC8B8:  0010A0E3     MOV r1, 0x0
		   0x010DC8BC:  0020A0E3     MOV r2, 0x0
		   0x010DC8C0:  0040A0E1     MOV r4, r0
		   0x010DC8C4:  2C5800EB     BL $+0x160b8  // CALL → <WaitForSendAppStart>d__155..ctor
		   0x010DC8C8:  0400A0E1     MOV r0, r4
		   0x010DC8CC:  1080BDE8     POP {r4, pc}
		   0x010DC8D0:  43F41403     TSTSEQ pc, r4, 0x43000000
		   0x010DC8D4:  E8C7F902     RSCSEQ ip, sb, 0x3a00000
		   0x010DC8D8:  D4C7F902     RSCSEQ ip, sb, 0x3500000
		*/
	}

	// RVA: 0x10E19D8 Offset: 0x10E19D8 VA: 0x10E19D8
	private void SetupFiniteContainer(bool runtime, Transform container, Item item, ItemFiniteContainer newItem) {
		/* Disassembly (ARM32, 143 instructions, 0x23C bytes):
		   // CFG: 17 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E19D8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010E19DC:  9C529FE5     LDR r5, [pc, 0x29c]
		   0x010E19E0:  00A0A0E1     MOV r10, r0
		   0x010E19E4:  20709DE5     LDR r7, [sp, 0x20]
		   0x010E19E8:  0390A0E1     MOV sb, r3
		   0x010E19EC:  05508FE0     ADD r5, pc, r5
		   0x010E19F0:  0240A0E1     MOV r4, r2
		   0x010E19F4:  0180A0E1     MOV r8, r1
		   0x010E19F8:  0000D5E5     LDRB r0, [r5]
		   0x010E19FC:  000050E3     CMPS r0, r0, 0x0
		   0x010E1A00:  1C00001A     BNE $+0x78  // if (!=) goto 0x010E1A78
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E1A04:  78029FE5     LDR r0, [pc, 0x278]
		   0x010E1A08:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A0C:  D3E5F9EB     BL $-0x1868ac
		   0x010E1A10:  70029FE5     LDR r0, [pc, 0x270]
		   0x010E1A14:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A18:  D0E5F9EB     BL $-0x1868b8
		   0x010E1A1C:  68029FE5     LDR r0, [pc, 0x268]
		   0x010E1A20:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A24:  CDE5F9EB     BL $-0x1868c4
		   0x010E1A28:  60029FE5     LDR r0, [pc, 0x260]
		   0x010E1A2C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A30:  CAE5F9EB     BL $-0x1868d0
		   0x010E1A34:  58029FE5     LDR r0, [pc, 0x258]
		   0x010E1A38:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A3C:  C7E5F9EB     BL $-0x1868dc
		   0x010E1A40:  50029FE5     LDR r0, [pc, 0x250]
		   0x010E1A44:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A48:  C4E5F9EB     BL $-0x1868e8
		   0x010E1A4C:  48029FE5     LDR r0, [pc, 0x248]
		   0x010E1A50:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A54:  C1E5F9EB     BL $-0x1868f4
		   0x010E1A58:  40029FE5     LDR r0, [pc, 0x240]
		   0x010E1A5C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A60:  BEE5F9EB     BL $-0x186900
		   0x010E1A64:  38029FE5     LDR r0, [pc, 0x238]
		   0x010E1A68:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A6C:  BBE5F9EB     BL $-0x18690c
		   0x010E1A70:  0100A0E3     MOV r0, 0x1
		   0x010E1A74:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E1A78:  28029FE5     LDR r0, [pc, 0x228]
		   0x010E1A7C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1A80:  000090E5     LDR r0, [r0]
		   0x010E1A84:  4EE6F9EB     BL $-0x1866c0
		   0x010E1A88:  0010A0E3     MOV r1, 0x0
		   0x010E1A8C:  0060A0E1     MOV r6, r0
		   0x010E1A90:  F93500EB     BL $+0xd7ec  // CALL → <>c__DisplayClass156_0..ctor
		   0x010E1A94:  000056E3     CMPS r0, r6, 0x0
		   0x010E1A98:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1AA0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010E1A9C:  4BE6F9EB     BL $-0x1866cc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010E1AA0:  04529FE5     LDR r5, [pc, 0x204]
		   0x010E1AA4:  05509FE7     LDR r5, [pc, r5]
		   0x010E1AA8:  08A086E5     STR r10, [r6, 0x8]
		   0x010E1AAC:  0C4086E5     STR r4, [r6, 0xc]
		   0x010E1AB0:  000095E5     LDR r0, [r5]
		   0x010E1AB4:  109086E5     STR sb, [r6, 0x10]
		   0x010E1AB8:  147086E5     STR r7, [r6, 0x14]
		   0x010E1ABC:  40E6F9EB     BL $-0x1866f8
		   0x010E1AC0:  0040A0E1     MOV r4, r0
		   0x010E1AC4:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x010E1AC8:  0610A0E1     MOV r1, r6
		   0x010E1ACC:  0030A0E3     MOV r3, 0x0
		   0x010E1AD0:  00009FE7     LDR r0, [pc, r0]
		   0x010E1AD4:  002090E5     LDR r2, [r0]
		   0x010E1AD8:  0400A0E1     MOV r0, r4
		   0x010E1ADC:  6CCD56EB     BL $+0x15b35b8  // CALL → Action<object, object>..ctor
		   0x010E1AE0:  000057E3     CMPS r0, r7, 0x0
		   0x010E1AE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1AEC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010E1AE8:  38E6F9EB     BL $-0x186718
		   // ──── Block 6 if (!=) ────────────────────
		   0x010E1AEC:  0700A0E1     MOV r0, r7
		   0x010E1AF0:  0410A0E1     MOV r1, r4
		   0x010E1AF4:  0020A0E3     MOV r2, 0x0
		   0x010E1AF8:  1CD500EB     BL $+0x35478  // CALL → ItemFiniteContainer.add_dropItem
		   0x010E1AFC:  000095E5     LDR r0, [r5]
		   0x010E1B00:  144096E5     LDR r4, [r6, 0x14]
		   0x010E1B04:  2EE6F9EB     BL $-0x186740
		   0x010E1B08:  0070A0E1     MOV r7, r0
		   0x010E1B0C:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x010E1B10:  0610A0E1     MOV r1, r6
		   0x010E1B14:  0030A0E3     MOV r3, 0x0
		   0x010E1B18:  00009FE7     LDR r0, [pc, r0]
		   0x010E1B1C:  002090E5     LDR r2, [r0]
		   0x010E1B20:  0700A0E1     MOV r0, r7
		   0x010E1B24:  5ACD56EB     BL $+0x15b3570  // CALL → Action<object, object>..ctor
		   0x010E1B28:  000054E3     CMPS r0, r4, 0x0
		   0x010E1B2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1B34
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010E1B30:  26E6F9EB     BL $-0x186760
		   // ──── Block 8 if (!=) ────────────────────
		   0x010E1B34:  0400A0E1     MOV r0, r4
		   0x010E1B38:  0710A0E1     MOV r1, r7
		   0x010E1B3C:  0020A0E3     MOV r2, 0x0
		   0x010E1B40:  B2D400EB     BL $+0x352d0  // CALL → ItemFiniteContainer.add_onDestroy
		   0x010E1B44:  144096E5     LDR r4, [r6, 0x14]
		   0x010E1B48:  68509AE5     LDR r5, [r10, 0x68]
		   0x010E1B4C:  64019FE5     LDR r0, [pc, 0x164]
		   0x010E1B50:  00009FE7     LDR r0, [pc, r0]
		   0x010E1B54:  000090E5     LDR r0, [r0]
		   0x010E1B58:  19E6F9EB     BL $-0x186794
		   0x010E1B5C:  0070A0E1     MOV r7, r0
		   0x010E1B60:  54019FE5     LDR r0, [pc, 0x154]
		   0x010E1B64:  0510A0E1     MOV r1, r5
		   0x010E1B68:  0030A0E3     MOV r3, 0x0
		   0x010E1B6C:  00009FE7     LDR r0, [pc, r0]
		   0x010E1B70:  002090E5     LDR r2, [r0]
		   0x010E1B74:  0700A0E1     MOV r0, r7
		   0x010E1B78:  AD4861EB     BL $+0x18522bc  // CALL → Func<object, bool>..ctor
		   0x010E1B7C:  000054E3     CMPS r0, r4, 0x0
		   0x010E1B80:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1B88
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010E1B84:  11E6F9EB     BL $-0x1867b4
		   // ──── Block 10 if (!=) ────────────────────
		   0x010E1B88:  0400A0E1     MOV r0, r4
		   0x010E1B8C:  0710A0E1     MOV r1, r7
		   0x010E1B90:  0020A0E3     MOV r2, 0x0
		   0x010E1B94:  4DD500EB     BL $+0x3553c  // CALL → ItemFiniteContainer.add_checkIfOpeningIsLimited
		   0x010E1B98:  147096E5     LDR r7, [r6, 0x14]
		   0x010E1B9C:  68509AE5     LDR r5, [r10, 0x68]
		   0x010E1BA0:  18019FE5     LDR r0, [pc, 0x118]
		   0x010E1BA4:  00009FE7     LDR r0, [pc, r0]
		   0x010E1BA8:  000090E5     LDR r0, [r0]
		   0x010E1BAC:  04E6F9EB     BL $-0x1867e8
		   0x010E1BB0:  0040A0E1     MOV r4, r0
		   0x010E1BB4:  08019FE5     LDR r0, [pc, 0x108]
		   0x010E1BB8:  0510A0E1     MOV r1, r5
		   0x010E1BBC:  0030A0E3     MOV r3, 0x0
		   0x010E1BC0:  00009FE7     LDR r0, [pc, r0]
		   0x010E1BC4:  002090E5     LDR r2, [r0]
		   0x010E1BC8:  0400A0E1     MOV r0, r4
		   0x010E1BCC:  DC2D7BEB     BL $+0x1ecb778  // CALL → Action..ctor
		   0x010E1BD0:  000057E3     CMPS r0, r7, 0x0
		   0x010E1BD4:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1BDC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010E1BD8:  FCE5F9EB     BL $-0x186808
		   // ──── Block 12 if (!=) ────────────────────
		   0x010E1BDC:  68509AE5     LDR r5, [r10, 0x68]
		   0x010E1BE0:  204187E5     STR r4, [r7, 0x120]
		   0x010E1BE4:  000055E3     CMPS r0, r5, 0x0
		   0x010E1BE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010E1BF0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010E1BEC:  F7E5F9EB     BL $-0x18681c
		   // ──── Block 14 if (!=) ────────────────────
		   0x010E1BF0:  0500A0E1     MOV r0, r5
		   0x010E1BF4:  0010A0E3     MOV r1, 0x0
		   0x010E1BF8:  08FA00EB     BL $+0x3e828  // CALL → LimitedChestOpening.RefreshOpenAnimation
		   0x010E1BFC:  000058E3     CMPS r0, r8, 0x0
		   0x010E1C00:  1000000A     BEQ $+0x48
		   0x010E1C04:  144096E5     LDR r4, [r6, 0x14]
		   0x010E1C08:  000054E3     CMPS r0, r4, 0x0
		   0x010E1C0C:  0000001A     BNE $+0x8
		   0x010E1C10:  EEE5F9EB     BL $-0x186840
		*/
	}

	// RVA: 0x10EB8E8 Offset: 0x10EB8E8 VA: 0x10EB8E8
	public string GetProgressionSnapshot() {
		/* Disassembly (ARM32, 55 instructions, 0xDC bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EB8E8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EB8EC:  4CD04DE2     SUB sp, sp, 0x4c
		   0x010EB8F0:  E8459FE5     LDR r4, [pc, 0x5e8]
		   0x010EB8F4:  04408FE0     ADD r4, pc, r4
		   0x010EB8F8:  0000D4E5     LDRB r0, [r4]
		   0x010EB8FC:  000050E3     CMPS r0, r0, 0x0
		   0x010EB900:  2E00001A     BNE $+0xc0  // if (!=) goto 0x010EB9C0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EB904:  D8059FE5     LDR r0, [pc, 0x5d8]
		   0x010EB908:  00009FE7     LDR r0, [pc, r0]
		   0x010EB90C:  13BEF9EB     BL $-0x1907ac
		   0x010EB910:  D0059FE5     LDR r0, [pc, 0x5d0]
		   0x010EB914:  00009FE7     LDR r0, [pc, r0]
		   0x010EB918:  10BEF9EB     BL $-0x1907b8
		   0x010EB91C:  C8059FE5     LDR r0, [pc, 0x5c8]
		   0x010EB920:  00009FE7     LDR r0, [pc, r0]
		   0x010EB924:  0DBEF9EB     BL $-0x1907c4
		   0x010EB928:  C0059FE5     LDR r0, [pc, 0x5c0]
		   0x010EB92C:  00009FE7     LDR r0, [pc, r0]
		   0x010EB930:  0ABEF9EB     BL $-0x1907d0
		   0x010EB934:  B8059FE5     LDR r0, [pc, 0x5b8]
		   0x010EB938:  00009FE7     LDR r0, [pc, r0]
		   0x010EB93C:  07BEF9EB     BL $-0x1907dc
		   0x010EB940:  B0059FE5     LDR r0, [pc, 0x5b0]
		   0x010EB944:  00009FE7     LDR r0, [pc, r0]
		   0x010EB948:  04BEF9EB     BL $-0x1907e8
		   0x010EB94C:  A8059FE5     LDR r0, [pc, 0x5a8]
		   0x010EB950:  00009FE7     LDR r0, [pc, r0]
		   0x010EB954:  01BEF9EB     BL $-0x1907f4
		   0x010EB958:  A0059FE5     LDR r0, [pc, 0x5a0]
		   0x010EB95C:  00009FE7     LDR r0, [pc, r0]
		   0x010EB960:  FEBDF9EB     BL $-0x190800
		   0x010EB964:  98059FE5     LDR r0, [pc, 0x598]
		   0x010EB968:  00009FE7     LDR r0, [pc, r0]
		   0x010EB96C:  FBBDF9EB     BL $-0x19080c
		   0x010EB970:  90059FE5     LDR r0, [pc, 0x590]
		   0x010EB974:  00009FE7     LDR r0, [pc, r0]
		   0x010EB978:  F8BDF9EB     BL $-0x190818
		   0x010EB97C:  88059FE5     LDR r0, [pc, 0x588]
		   0x010EB980:  00009FE7     LDR r0, [pc, r0]
		   0x010EB984:  F5BDF9EB     BL $-0x190824
		   0x010EB988:  80059FE5     LDR r0, [pc, 0x580]
		   0x010EB98C:  00009FE7     LDR r0, [pc, r0]
		   0x010EB990:  F2BDF9EB     BL $-0x190830
		   0x010EB994:  78059FE5     LDR r0, [pc, 0x578]
		   0x010EB998:  00009FE7     LDR r0, [pc, r0]
		   0x010EB99C:  EFBDF9EB     BL $-0x19083c
		   0x010EB9A0:  70059FE5     LDR r0, [pc, 0x570]
		   0x010EB9A4:  00009FE7     LDR r0, [pc, r0]
		   0x010EB9A8:  ECBDF9EB     BL $-0x190848
		   0x010EB9AC:  68059FE5     LDR r0, [pc, 0x568]
		   0x010EB9B0:  00009FE7     LDR r0, [pc, r0]
		   0x010EB9B4:  E9BDF9EB     BL $-0x190854
		   0x010EB9B8:  0100A0E3     MOV r0, 0x1
		   0x010EB9BC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EB9C0:  58059FE5     LDR r0, [pc, 0x558]
		*/
	}

	// RVA: 0x10EBF58 Offset: 0x10EBF58 VA: 0x10EBF58
	public void Init() {
		/* Disassembly (ARM32, 76 instructions, 0x130 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EBF58:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EBF5C:  F4509FE5     LDR r5, [pc, 0xf4]
		   0x010EBF60:  0040A0E1     MOV r4, r0
		   0x010EBF64:  05508FE0     ADD r5, pc, r5
		   0x010EBF68:  0000D5E5     LDRB r0, [r5]
		   0x010EBF6C:  000050E3     CMPS r0, r0, 0x0
		   0x010EBF70:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010EBFAC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EBF74:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010EBF78:  00009FE7     LDR r0, [pc, r0]
		   0x010EBF7C:  77BCF9EB     BL $-0x190e1c
		   0x010EBF80:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010EBF84:  00009FE7     LDR r0, [pc, r0]
		   0x010EBF88:  74BCF9EB     BL $-0x190e28
		   0x010EBF8C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010EBF90:  00009FE7     LDR r0, [pc, r0]
		   0x010EBF94:  71BCF9EB     BL $-0x190e34
		   0x010EBF98:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010EBF9C:  00009FE7     LDR r0, [pc, r0]
		   0x010EBFA0:  6EBCF9EB     BL $-0x190e40
		   0x010EBFA4:  0100A0E3     MOV r0, 0x1
		   0x010EBFA8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EBFAC:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010EBFB0:  00009FE7     LDR r0, [pc, r0]
		   0x010EBFB4:  000090E5     LDR r0, [r0]
		   0x010EBFB8:  01BDF9EB     BL $-0x190bf4
		   0x010EBFBC:  0050A0E1     MOV r5, r0
		   0x010EBFC0:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010EBFC4:  0410A0E1     MOV r1, r4
		   0x010EBFC8:  0030A0E3     MOV r3, 0x0
		   0x010EBFCC:  00009FE7     LDR r0, [pc, r0]
		   0x010EBFD0:  002090E5     LDR r2, [r0]
		   0x010EBFD4:  0500A0E1     MOV r0, r5
		   0x010EBFD8:  EBF660EB     BL $+0x183dbb4  // CALL → Func<int>..ctor
		   0x010EBFDC:  90609FE5     LDR r6, [pc, 0x90]
		   0x010EBFE0:  06608FE0     ADD r6, pc, r6
		   0x010EBFE4:  0000D6E5     LDRB r0, [r6]
		   0x010EBFE8:  000050E3     CMPS r0, r0, 0x0
		   0x010EBFEC:  0400001A     BNE $+0x18  // if (!=) goto 0x010EC004
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EBFF0:  80009FE5     LDR r0, [pc, 0x80]
		   0x010EBFF4:  00009FE7     LDR r0, [pc, r0]
		   0x010EBFF8:  58BCF9EB     BL $-0x190e98
		   0x010EBFFC:  0100A0E3     MOV r0, 0x1
		   0x010EC000:  0000C6E5     STRB r0, [r6]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EC004:  70009FE5     LDR r0, [pc, 0x70]
		   0x010EC008:  00009FE7     LDR r0, [pc, r0]
		   0x010EC00C:  000090E5     LDR r0, [r0]
		   0x010EC010:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010EC014:  64009FE5     LDR r0, [pc, 0x64]
		   0x010EC018:  00009FE7     LDR r0, [pc, r0]
		   0x010EC01C:  085081E5     STR r5, [r1, 0x8]
		   0x010EC020:  000090E5     LDR r0, [r0]
		   0x010EC024:  E6BCF9EB     BL $-0x190c60
		   0x010EC028:  0050A0E1     MOV r5, r0
		   0x010EC02C:  50009FE5     LDR r0, [pc, 0x50]
		   0x010EC030:  0410A0E1     MOV r1, r4
		   0x010EC034:  0030A0E3     MOV r3, 0x0
		   0x010EC038:  00009FE7     LDR r0, [pc, r0]
		   0x010EC03C:  002090E5     LDR r2, [r0]
		   0x010EC040:  0500A0E1     MOV r0, r5
		   0x010EC044:  7FE952EB     BL $+0x14ba604  // CALL → Action<object>..ctor
		   0x010EC048:  0500A0E1     MOV r0, r5
		   0x010EC04C:  0010A0E3     MOV r1, 0x0
		   0x010EC050:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EC054:  B9E400EA     B $+0x392ec  // TAIL CALL → GameplayInterfaceManager.add_onCurrentActivityChanged
		   0x010EC058:  66FD1303     TSTSEQ pc, r3, 0x1980
		   0x010EC05C:  70D4F802     RSCSEQ sp, r8, 0x70000000
		   0x010EC060:  68D4F802     RSCSEQ sp, r8, 0x68000000
		   0x010EC064:  60D4F802     RSCSEQ sp, r8, 0x60000000
		   0x010EC068:  58D4F802     RSCSEQ sp, r8, 0x58000000
		   0x010EC06C:  3CD4F802     RSCSEQ sp, r8, 0x3c000000
		   0x010EC070:  28D4F802     RSCSEQ sp, r8, 0x28000000
		   0x010EC074:  03FD1303     TSTSEQ pc, r3, 0xc0
		   0x010EC078:  04D4F802     RSCSEQ sp, r8, 0x4000000
		   0x010EC07C:  F0D3F802     RSCSEQ sp, r8, 0xc0000003
		   0x010EC080:  D0D3F802     RSCSEQ sp, r8, 0x40000003
		   0x010EC084:  B8D3F802     RSCSEQ sp, r8, 0xe0000002
		*/
	}

	// RVA: 0x10EC088 Offset: 0x10EC088 VA: 0x10EC088
	private void OnDestroy() {
		/* Disassembly (ARM32, 112 instructions, 0x1C0 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EC088:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EC08C:  70519FE5     LDR r5, [pc, 0x170]
		   0x010EC090:  0040A0E1     MOV r4, r0
		   0x010EC094:  05508FE0     ADD r5, pc, r5
		   0x010EC098:  0000D5E5     LDRB r0, [r5]
		   0x010EC09C:  000050E3     CMPS r0, r0, 0x0
		   0x010EC0A0:  1900001A     BNE $+0x6c  // if (!=) goto 0x010EC10C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EC0A4:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010EC0A8:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0AC:  2BBCF9EB     BL $-0x190f4c
		   0x010EC0B0:  54019FE5     LDR r0, [pc, 0x154]
		   0x010EC0B4:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0B8:  28BCF9EB     BL $-0x190f58
		   0x010EC0BC:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010EC0C0:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0C4:  25BCF9EB     BL $-0x190f64
		   0x010EC0C8:  44019FE5     LDR r0, [pc, 0x144]
		   0x010EC0CC:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0D0:  22BCF9EB     BL $-0x190f70
		   0x010EC0D4:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010EC0D8:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0DC:  1FBCF9EB     BL $-0x190f7c
		   0x010EC0E0:  34019FE5     LDR r0, [pc, 0x134]
		   0x010EC0E4:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0E8:  1CBCF9EB     BL $-0x190f88
		   0x010EC0EC:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x010EC0F0:  00009FE7     LDR r0, [pc, r0]
		   0x010EC0F4:  19BCF9EB     BL $-0x190f94
		   0x010EC0F8:  24019FE5     LDR r0, [pc, 0x124]
		   0x010EC0FC:  00009FE7     LDR r0, [pc, r0]
		   0x010EC100:  16BCF9EB     BL $-0x190fa0
		   0x010EC104:  0100A0E3     MOV r0, 0x1
		   0x010EC108:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EC10C:  14019FE5     LDR r0, [pc, 0x114]
		   0x010EC110:  00009FE7     LDR r0, [pc, r0]
		   0x010EC114:  000090E5     LDR r0, [r0]
		   0x010EC118:  A9BCF9EB     BL $-0x190d54
		   0x010EC11C:  0050A0E1     MOV r5, r0
		   0x010EC120:  04019FE5     LDR r0, [pc, 0x104]
		   0x010EC124:  0410A0E1     MOV r1, r4
		   0x010EC128:  0030A0E3     MOV r3, 0x0
		   0x010EC12C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC130:  002090E5     LDR r2, [r0]
		   0x010EC134:  0500A0E1     MOV r0, r5
		   0x010EC138:  42E952EB     BL $+0x14ba510  // CALL → Action<object>..ctor
		   0x010EC13C:  0500A0E1     MOV r0, r5
		   0x010EC140:  0010A0E3     MOV r1, 0x0
		   0x010EC144:  B2E400EB     BL $+0x392d0  // CALL → GameplayInterfaceManager.remove_onCurrentActivityChanged
		   0x010EC148:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010EC14C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC150:  000090E5     LDR r0, [r0]
		   0x010EC154:  9ABCF9EB     BL $-0x190d90
		   0x010EC158:  0050A0E1     MOV r5, r0
		   0x010EC15C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010EC160:  0410A0E1     MOV r1, r4
		   0x010EC164:  0030A0E3     MOV r3, 0x0
		   0x010EC168:  00009FE7     LDR r0, [pc, r0]
		   0x010EC16C:  002090E5     LDR r2, [r0]
		   0x010EC170:  0500A0E1     MOV r0, r5
		   0x010EC174:  65E252EB     BL $+0x14b899c  // CALL → Action<Int32Enum>..ctor
		   0x010EC178:  0500A0E1     MOV r0, r5
		   0x010EC17C:  0010A0E3     MOV r1, 0x0
		   0x010EC180:  677200EB     BL $+0x1c9a4  // CALL → ContainerDataStorage.remove_onEnergyConsumptionModeChanged
		   0x010EC184:  AC509FE5     LDR r5, [pc, 0xac]
		   0x010EC188:  05509FE7     LDR r5, [pc, r5]
		   0x010EC18C:  000095E5     LDR r0, [r5]
		   0x010EC190:  741090E5     LDR r1, [r0, 0x74]
		   0x010EC194:  000051E3     CMPS r0, r1, 0x0
		   0x010EC198:  0100001A     BNE $+0xc  // if (!=) goto 0x010EC1A4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EC19C:  3CBCF9EB     BL $-0x190f08
		   0x010EC1A0:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EC1A4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010EC1A8:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x010EC1AC:  00009FE7     LDR r0, [pc, r0]
		   0x010EC1B0:  105091E5     LDR r5, [r1, 0x10]
		   0x010EC1B4:  000090E5     LDR r0, [r0]
		   0x010EC1B8:  81BCF9EB     BL $-0x190df4
		   0x010EC1BC:  0060A0E1     MOV r6, r0
		   0x010EC1C0:  78009FE5     LDR r0, [pc, 0x78]
		   0x010EC1C4:  0410A0E1     MOV r1, r4
		   0x010EC1C8:  0030A0E3     MOV r3, 0x0
		   0x010EC1CC:  00009FE7     LDR r0, [pc, r0]
		   0x010EC1D0:  002090E5     LDR r2, [r0]
		   0x010EC1D4:  0600A0E1     MOV r0, r6
		   0x010EC1D8:  59047BEB     BL $+0x1ec116c  // CALL → Action..ctor
		   0x010EC1DC:  000055E3     CMPS r0, r5, 0x0
		   0x010EC1E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EC1E8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EC1E4:  79BCF9EB     BL $-0x190e14
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EC1E8:  54009FE5     LDR r0, [pc, 0x54]
		   0x010EC1EC:  0610A0E1     MOV r1, r6
		   0x010EC1F0:  00009FE7     LDR r0, [pc, r0]
		   0x010EC1F4:  002090E5     LDR r2, [r0]
		   0x010EC1F8:  0500A0E1     MOV r0, r5
		   0x010EC1FC:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EC200:  57D25FEA     B $+0x17f4964  // TAIL CALL → UnityEventsHelper.EventList<object>.Remove
		   0x010EC204:  37FC1303     TSTSEQ pc, r3, 0x3700
		   0x010EC208:  E0CDF802     RSCSEQ ip, r8, 0x3800
		   0x010EC20C:  34D3F802     RSCSEQ sp, r8, 0xd0000000
		   0x010EC210:  04A8F802     RSCSEQ r10, r8, 0x40000
		   0x010EC214:  9CCDF802     RSCSEQ ip, r8, 0x2700
		   0x010EC218:  18D3F802     RSCSEQ sp, r8, 0x60000000
		   0x010EC21C:  B8CDF802     RSCSEQ ip, r8, 0x2e00
		   0x010EC220:  B4CDF802     RSCSEQ ip, r8, 0x2d00
		   0x010EC224:  34B5F802     RSCSEQ fp, r8, 0xd000000
		   0x010EC228:  D8D2F802     RSCSEQ sp, r8, 0x8000000d
		   0x010EC22C:  C4D2F802     RSCSEQ sp, r8, 0x4000000c
		   0x010EC230:  3CCDF802     RSCSEQ ip, r8, 0xf00
		   0x010EC234:  3CCDF802     RSCSEQ ip, r8, 0xf00
		   0x010EC238:  A8B4F802     RSCSEQ fp, r8, 0xa8000000
		   0x010EC23C:  18A7F802     RSCSEQ r10, r8, 0x600000
		   0x010EC240:  D0CCF802     RSCSEQ ip, r8, 0xd000
		   0x010EC244:  78CCF802     RSCSEQ ip, r8, 0x7800
		*/
	}

	// RVA: 0x10EC248 Offset: 0x10EC248 VA: 0x10EC248
	private void CurrentQuestChanged(QuestData obj) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EC248:  701080E5     STR r1, [r0, 0x70]
		   0x010EC24C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10EC250 Offset: 0x10EC250 VA: 0x10EC250
	private void ClearFieldItems(bool canClear, string id) {
		/* Disassembly (ARM32, 74 instructions, 0x128 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EC250:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EC254:  F8609FE5     LDR r6, [pc, 0xf8]
		   0x010EC258:  0240A0E1     MOV r4, r2
		   0x010EC25C:  0150A0E1     MOV r5, r1
		   0x010EC260:  06608FE0     ADD r6, pc, r6
		   0x010EC264:  0000D6E5     LDRB r0, [r6]
		   0x010EC268:  000050E3     CMPS r0, r0, 0x0
		   0x010EC26C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010EC2A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EC270:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010EC274:  00009FE7     LDR r0, [pc, r0]
		   0x010EC278:  B8BBF9EB     BL $-0x191118
		   0x010EC27C:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010EC280:  00009FE7     LDR r0, [pc, r0]
		   0x010EC284:  B5BBF9EB     BL $-0x191124
		   0x010EC288:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010EC28C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC290:  B2BBF9EB     BL $-0x191130
		   0x010EC294:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010EC298:  00009FE7     LDR r0, [pc, r0]
		   0x010EC29C:  AFBBF9EB     BL $-0x19113c
		   0x010EC2A0:  0100A0E3     MOV r0, 0x1
		   0x010EC2A4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EC2A8:  000055E3     CMPS r0, r5, 0x0
		   0x010EC2AC:  0E00000A     BEQ $+0x40  // if (==) goto 0x010EC2EC
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010EC2B0:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x010EC2B4:  00009FE7     LDR r0, [pc, r0]
		   0x010EC2B8:  000090E5     LDR r0, [r0]
		   0x010EC2BC:  40BCF9EB     BL $-0x190ef8
		   0x010EC2C0:  0410A0E1     MOV r1, r4
		   0x010EC2C4:  0020A0E3     MOV r2, 0x0
		   0x010EC2C8:  0050A0E1     MOV r5, r0
		   0x010EC2CC:  39DF00EB     BL $+0x37cec  // CALL → GameStateSave..ctor
		   0x010EC2D0:  000055E3     CMPS r0, r5, 0x0
		   0x010EC2D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EC2DC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010EC2D8:  3CBCF9EB     BL $-0x190f08
		   // ──── Block 5 if (!=) ────────────────────
		   0x010EC2DC:  0500A0E1     MOV r0, r5
		   0x010EC2E0:  0010A0E3     MOV r1, 0x0
		   0x010EC2E4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EC2E8:  F13801EA     B $+0x4e3cc  // TAIL CALL → GameStateSave.DeleteFieldSave
		   // ──── Block 6 if (==) ────────────────────
		   0x010EC2EC:  78009FE5     LDR r0, [pc, 0x78]
		   0x010EC2F0:  0410A0E1     MOV r1, r4
		   0x010EC2F4:  0020A0E3     MOV r2, 0x0
		   0x010EC2F8:  00009FE7     LDR r0, [pc, r0]
		   0x010EC2FC:  000090E5     LDR r0, [r0]
		   0x010EC300:  0E7576EB     BL $+0x1d9d440  // CALL → String.Concat
		   0x010EC304:  0050A0E1     MOV r5, r0
		   0x010EC308:  60009FE5     LDR r0, [pc, 0x60]
		   0x010EC30C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC310:  000090E5     LDR r0, [r0]
		   0x010EC314:  2ABCF9EB     BL $-0x190f50
		   0x010EC318:  0510A0E1     MOV r1, r5
		   0x010EC31C:  0020A0E3     MOV r2, 0x0
		   0x010EC320:  0040A0E1     MOV r4, r0
		   0x010EC324:  44737EEB     BL $+0x1f9cd18  // CALL → Exception..ctor
		   0x010EC328:  44009FE5     LDR r0, [pc, 0x44]
		   0x010EC32C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC330:  000090E5     LDR r0, [r0]
		   0x010EC334:  741090E5     LDR r1, [r0, 0x74]
		   0x010EC338:  000051E3     CMPS r0, r1, 0x0
		   0x010EC33C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EC344
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EC340:  D3BBF9EB     BL $-0x1910ac
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EC344:  0400A0E1     MOV r0, r4
		   0x010EC348:  0010A0E3     MOV r1, 0x0
		   0x010EC34C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EC350:  8D2F3CEA     B $+0xf0be3c
		   0x010EC354:  6CFA1303     TSTSEQ pc, r3, 0x6c000
		   0x010EC358:  14A3F802     RSCSEQ r10, r8, 0x50000000
		   0x010EC35C:  6CA6F802     RSCSEQ r10, r8, 0x6c00000
		   0x010EC360:  18CAF802     RSCSEQ ip, r8, 0x18000
		   0x010EC364:  64D1F802     RSCSEQ sp, r8, 0x19
		   0x010EC368:  F0C9F802     RSCSEQ ip, r8, 0x3c0000
		   0x010EC36C:  04D1F802     RSCSEQ sp, r8, 0x1
		   0x010EC370:  E0A5F802     RSCSEQ r10, r8, 0x38000000
		   0x010EC374:  5CA2F802     RSCSEQ r10, r8, 0xc0000005
		*/
	}

	// RVA: 0x10E0608 Offset: 0x10E0608 VA: 0x10E0608
	private void ItemsDuplicateCheck(GameStateSave gameSave) {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E0608:  10402DE9     PUSH {r4, lr}
		   0x010E060C:  0140A0E1     MOV r4, r1
		   0x010E0610:  000051E3     CMPS r0, r1, 0x0
		   0x010E0614:  0000001A     BNE $+0x8  // if (!=) goto 0x010E061C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E0618:  6CEBF9EB     BL $-0x185248
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E061C:  0C1094E5     LDR r1, [r4, 0xc]
		   0x010E0620:  0400A0E1     MOV r0, r4
		   0x010E0624:  0120A0E3     MOV r2, 0x1
		   0x010E0628:  522F00EB     BL $+0xbd50  // CALL → GameState.<ItemsDuplicateCheck>g__Check|162_0
		   0x010E062C:  0400A0E1     MOV r0, r4
		   0x010E0630:  0010A0E3     MOV r1, 0x0
		   0x010E0634:  141001EB     BL $+0x44058  // CALL → GameStateSave.get_Inventory
		   0x010E0638:  0010A0E1     MOV r1, r0
		   0x010E063C:  0400A0E1     MOV r0, r4
		   0x010E0640:  0020A0E3     MOV r2, 0x0
		   0x010E0644:  1040BDE8     POP {r4, lr}
		   0x010E0648:  4A2F00EA     B $+0xbd30  // TAIL CALL → GameState.<ItemsDuplicateCheck>g__Check|162_0
		*/
	}

	// RVA: 0x10ECB28 Offset: 0x10ECB28 VA: 0x10ECB28
	private List<Item> GetFieldItems() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010ECB28:  540090E5     LDR r0, [r0, 0x54]
		   0x010ECB2C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10ECB30 Offset: 0x10ECB30 VA: 0x10ECB30
	public void UpdateChestsReminderAnimation() {
		/* Disassembly (ARM32, 267 instructions, 0x42C bytes):
		   // CFG: 52 blocks, 56 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ECB30:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010ECB34:  10D04DE2     SUB sp, sp, 0x10
		   0x010ECB38:  D0539FE5     LDR r5, [pc, 0x3d0]
		   0x010ECB3C:  0040A0E1     MOV r4, r0
		   0x010ECB40:  05508FE0     ADD r5, pc, r5
		   0x010ECB44:  0000D5E5     LDRB r0, [r5]
		   0x010ECB48:  000050E3     CMPS r0, r0, 0x0
		   0x010ECB4C:  1C00001A     BNE $+0x78  // if (!=) goto 0x010ECBC4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ECB50:  BC039FE5     LDR r0, [pc, 0x3bc]
		   0x010ECB54:  00009FE7     LDR r0, [pc, r0]
		   0x010ECB58:  80B9F9EB     BL $-0x1919f8
		   0x010ECB5C:  B4039FE5     LDR r0, [pc, 0x3b4]
		   0x010ECB60:  00009FE7     LDR r0, [pc, r0]
		   0x010ECB64:  7DB9F9EB     BL $-0x191a04
		   0x010ECB68:  AC039FE5     LDR r0, [pc, 0x3ac]
		   0x010ECB6C:  00009FE7     LDR r0, [pc, r0]
		   0x010ECB70:  7AB9F9EB     BL $-0x191a10
		   0x010ECB74:  A4039FE5     LDR r0, [pc, 0x3a4]
		   0x010ECB78:  00009FE7     LDR r0, [pc, r0]
		   0x010ECB7C:  77B9F9EB     BL $-0x191a1c
		   0x010ECB80:  9C039FE5     LDR r0, [pc, 0x39c]
		   0x010ECB84:  00009FE7     LDR r0, [pc, r0]
		   0x010ECB88:  74B9F9EB     BL $-0x191a28
		   0x010ECB8C:  94039FE5     LDR r0, [pc, 0x394]
		   0x010ECB90:  00009FE7     LDR r0, [pc, r0]
		   0x010ECB94:  71B9F9EB     BL $-0x191a34
		   0x010ECB98:  8C039FE5     LDR r0, [pc, 0x38c]
		   0x010ECB9C:  00009FE7     LDR r0, [pc, r0]
		   0x010ECBA0:  6EB9F9EB     BL $-0x191a40
		   0x010ECBA4:  84039FE5     LDR r0, [pc, 0x384]
		   0x010ECBA8:  00009FE7     LDR r0, [pc, r0]
		   0x010ECBAC:  6BB9F9EB     BL $-0x191a4c
		   0x010ECBB0:  7C039FE5     LDR r0, [pc, 0x37c]
		   0x010ECBB4:  00009FE7     LDR r0, [pc, r0]
		   0x010ECBB8:  68B9F9EB     BL $-0x191a58
		   0x010ECBBC:  0100A0E3     MOV r0, 0x1
		   0x010ECBC0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ECBC4:  6C739FE5     LDR r7, [pc, 0x36c]
		   0x010ECBC8:  0020A0E3     MOV r2, 0x0
		   0x010ECBCC:  07709FE7     LDR r7, [pc, r7]
		   0x010ECBD0:  544094E5     LDR r4, [r4, 0x54]
		   0x010ECBD4:  0C208DE5     STR r2, [sp, 0xc]
		   0x010ECBD8:  000097E5     LDR r0, [r7]
		   0x010ECBDC:  741090E5     LDR r1, [r0, 0x74]
		   0x010ECBE0:  000051E3     CMPS r0, r1, 0x0
		   0x010ECBE4:  0100001A     BNE $+0xc  // if (!=) goto 0x010ECBF0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ECBE8:  A9B9F9EB     BL $-0x191954
		   0x010ECBEC:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ECBF0:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010ECBF4:  445091E5     LDR r5, [r1, 0x44]
		   0x010ECBF8:  000055E3     CMPS r0, r5, 0x0
		   0x010ECBFC:  1500001A     BNE $+0x5c  // if (!=) goto 0x010ECC58
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010ECC00:  742090E5     LDR r2, [r0, 0x74]
		   0x010ECC04:  000052E3     CMPS r0, r2, 0x0
		   0x010ECC08:  0200001A     BNE $+0x10  // if (!=) goto 0x010ECC18
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010ECC0C:  A0B9F9EB     BL $-0x191978
		   0x010ECC10:  000097E5     LDR r0, [r7]
		   0x010ECC14:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x010ECC18:  1C039FE5     LDR r0, [pc, 0x31c]
		   0x010ECC1C:  00009FE7     LDR r0, [pc, r0]
		   0x010ECC20:  006091E5     LDR r6, [r1]
		   0x010ECC24:  000090E5     LDR r0, [r0]
		   0x010ECC28:  E5B9F9EB     BL $-0x191864
		   0x010ECC2C:  0050A0E1     MOV r5, r0
		   0x010ECC30:  08039FE5     LDR r0, [pc, 0x308]
		   0x010ECC34:  0610A0E1     MOV r1, r6
		   0x010ECC38:  0030A0E3     MOV r3, 0x0
		   0x010ECC3C:  00009FE7     LDR r0, [pc, r0]
		   0x010ECC40:  002090E5     LDR r2, [r0]
		   0x010ECC44:  0500A0E1     MOV r0, r5
		   0x010ECC48:  791C61EB     BL $+0x18471ec  // CALL → Func<object, bool>..ctor
		   0x010ECC4C:  000097E5     LDR r0, [r7]
		   0x010ECC50:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010ECC54:  445080E5     STR r5, [r0, 0x44]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010ECC58:  E4029FE5     LDR r0, [pc, 0x2e4]
		   0x010ECC5C:  0510A0E1     MOV r1, r5
		   0x010ECC60:  00009FE7     LDR r0, [pc, r0]
		   0x010ECC64:  002090E5     LDR r2, [r0]
		   0x010ECC68:  0400A0E1     MOV r0, r4
		   0x010ECC6C:  55D521EB     BL $+0x87555c  // CALL → Enumerable.Where<object>
		   0x010ECC70:  0040A0E1     MOV r4, r0
		   0x010ECC74:  000050E3     CMPS r0, r0, 0x0
		   0x010ECC78:  0000001A     BNE $+0x8  // if (!=) goto 0x010ECC80
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010ECC7C:  D3B9F9EB     BL $-0x1918ac
		   // ──── Block 10 if (!=) ────────────────────
		   0x010ECC80:  000094E5     LDR r0, [r4]
		   0x010ECC84:  BC129FE5     LDR r1, [pc, 0x2bc]
		   0x010ECC88:  01109FE7     LDR r1, [pc, r1]
		   0x010ECC8C:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010ECC90:  001091E5     LDR r1, [r1]
		   0x010ECC94:  000052E3     CMPS r0, r2, 0x0
		   0x010ECC98:  0700000A     BEQ $+0x24  // if (==) goto 0x010ECCBC
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010ECC9C:  583090E5     LDR r3, [r0, 0x58]
		   0x010ECCA0:  043083E2     ADD r3, r3, 0x4
		   0x010ECCA4:  047013E5     LDR r7, [r3, -0x4]
		   0x010ECCA8:  010057E1     CMPS r0, r7, r1
		   0x010ECCAC:  0600000A     BEQ $+0x20  // if (==) goto 0x010ECCCC
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x010ECCB0:  012052E2     SUBS r2, r2, 0x1
		   0x010ECCB4:  083083E2     ADD r3, r3, 0x8
		   0x010ECCB8:  F9FFFF1A     BNE $-0x14
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x010ECCBC:  0400A0E1     MOV r0, r4
		   0x010ECCC0:  0020A0E3     MOV r2, 0x0
		   0x010ECCC4:  6FA8FAEB     BL $-0x155e3c
		   0x010ECCC8:  020000EA     B $+0x10  // goto 0x010ECCD8
		   // ──── Block 14 if (==) ────────────────────
		   0x010ECCCC:  001093E5     LDR r1, [r3]
		   0x010ECCD0:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010ECCD4:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 15 ──────────────────────────────
		   0x010ECCD8:  D020C0E1     LDRD r2, r3, [r0]
		   0x010ECCDC:  0400A0E1     MOV r0, r4
		   0x010ECCE0:  0310A0E1     MOV r1, r3
		   0x010ECCE4:  32FF2FE1     BLX r2
		   0x010ECCE8:  0040A0E1     MOV r4, r0
		   0x010ECCEC:  0C008DE5     STR r0, [sp, 0xc]
		   0x010ECCF0:  0000A0E3     MOV r0, 0x0
		   0x010ECCF4:  0C808DE2     ADD r8, sp, 0xc
		   0x010ECCF8:  08808DE5     STR r8, [sp, 0x8]
		   0x010ECCFC:  04008DE5     STR r0, [sp, 0x4]
		   0x010ECD00:  44629FE5     LDR r6, [pc, 0x244]  // vtable: Object.Equals
		   0x010ECD04:  06609FE7     LDR r6, [pc, r6]
		   0x010ECD08:  40729FE5     LDR r7, [pc, 0x240]  // vtable: Object.Equals
		   0x010ECD0C:  07709FE7     LDR r7, [pc, r7]
		   0x010ECD10:  3C929FE5     LDR sb, [pc, 0x23c]  // vtable: Object.Equals
		   0x010ECD14:  09909FE7     LDR sb, [pc, sb]
		   0x010ECD18:  000054E3     CMPS r0, r4, 0x0
		   0x010ECD1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ECD24
		   // 
		   // ──── Block 16 else (r2 == r2, 0x1) ────────────────────
		   0x010ECD20:  AAB9F9EB     BL $-0x191950
		   // ──── Block 17 if (r2 != r2, 0x1) ────────────────────
		   0x010ECD24:  000094E5     LDR r0, [r4]
		   0x010ECD28:  001096E5     LDR r1, [r6]
		   0x010ECD2C:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010ECD30:  000052E3     CMPS r0, r2, 0x0
		   0x010ECD34:  0700000A     BEQ $+0x24  // if (==) goto 0x010ECD58
		   // 
		   // ──── Block 18 else (r2 != r2, 0x1) ────────────────────
		   0x010ECD38:  583090E5     LDR r3, [r0, 0x58]
		   0x010ECD3C:  043083E2     ADD r3, r3, 0x4
		   0x010ECD40:  045013E5     LDR r5, [r3, -0x4]
		   0x010ECD44:  010055E1     CMPS r0, r5, r1
		   0x010ECD48:  0600000A     BEQ $+0x20  // if (==) goto 0x010ECD68
		   // 
		   // ──── Block 19 else (r2 != r2, 0x1) ────────────────────
		   0x010ECD4C:  012052E2     SUBS r2, r2, 0x1
		   0x010ECD50:  083083E2     ADD r3, r3, 0x8
		   0x010ECD54:  F9FFFF1A     BNE $-0x14
		   // ──── Block 20 (from 2 paths) ──────────────────
		   0x010ECD58:  0400A0E1     MOV r0, r4
		   0x010ECD5C:  0020A0E3     MOV r2, 0x0
		   0x010ECD60:  48A8FAEB     BL $-0x155ed8
		   0x010ECD64:  020000EA     B $+0x10  // goto 0x010ECD74
		   // ──── Block 21 if (r2 == r2, 0x1) ────────────────────
		   0x010ECD68:  001093E5     LDR r1, [r3]
		   0x010ECD6C:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010ECD70:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 22 ──────────────────────────────
		   0x010ECD74:  D020C0E1     LDRD r2, r3, [r0]
		   0x010ECD78:  0400A0E1     MOV r0, r4
		   0x010ECD7C:  0310A0E1     MOV r1, r3
		   0x010ECD80:  32FF2FE1     BLX r2
		   0x010ECD84:  000050E3     CMPS r0, r0, 0x0
		   0x010ECD88:  2C00000A     BEQ $+0xb8  // if (==) goto 0x010ECE40
		   // 
		   // ──── Block 23 else (r2 != r2, 0x1) ────────────────────
		   0x010ECD8C:  0C409DE5     LDR r4, [sp, 0xc]
		   0x010ECD90:  000054E3     CMPS r0, r4, 0x0
		   0x010ECD94:  0000001A     BNE $+0x8  // if (!=) goto 0x010ECD9C
		   // 
		   // ──── Block 24 else (r2 == r2, 0x1) ────────────────────
		   0x010ECD98:  8CB9F9EB     BL $-0x1919c8
		   // ──── Block 25 if (r2 != r2, 0x1) ────────────────────
		   0x010ECD9C:  000094E5     LDR r0, [r4]
		   0x010ECDA0:  001097E5     LDR r1, [r7]
		   0x010ECDA4:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010ECDA8:  000052E3     CMPS r0, r2, 0x0
		   0x010ECDAC:  0700000A     BEQ $+0x24  // if (==) goto 0x010ECDD0
		   // 
		   // ──── Block 26 else (r2 != r2, 0x1) ────────────────────
		   0x010ECDB0:  583090E5     LDR r3, [r0, 0x58]
		   0x010ECDB4:  043083E2     ADD r3, r3, 0x4
		   0x010ECDB8:  045013E5     LDR r5, [r3, -0x4]
		   0x010ECDBC:  010055E1     CMPS r0, r5, r1
		   0x010ECDC0:  0600000A     BEQ $+0x20  // if (==) goto 0x010ECDE0
		   // 
		   // ──── Block 27 else (r2 != r2, 0x1) ────────────────────
		   0x010ECDC4:  012052E2     SUBS r2, r2, 0x1
		   0x010ECDC8:  083083E2     ADD r3, r3, 0x8
		   0x010ECDCC:  F9FFFF1A     BNE $-0x14
		   // ──── Block 28 (from 2 paths) ──────────────────
		   0x010ECDD0:  0400A0E1     MOV r0, r4
		   0x010ECDD4:  0020A0E3     MOV r2, 0x0
		   0x010ECDD8:  2AA8FAEB     BL $-0x155f50
		   0x010ECDDC:  020000EA     B $+0x10  // goto 0x010ECDEC
		   // ──── Block 29 if (r2 == r2, 0x1) ────────────────────
		   0x010ECDE0:  001093E5     LDR r1, [r3]
		   0x010ECDE4:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010ECDE8:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 30 ──────────────────────────────
		   0x010ECDEC:  D020C0E1     LDRD r2, r3, [r0]
		   0x010ECDF0:  0400A0E1     MOV r0, r4
		   0x010ECDF4:  0310A0E1     MOV r1, r3
		   0x010ECDF8:  32FF2FE1     BLX r2
		   0x010ECDFC:  000050E3     CMPS r0, r0, 0x0
		   0x010ECE00:  0C00000A     BEQ $+0x38  // if (==) goto 0x010ECE38
		   // 
		   // ──── Block 31 else (r2 != r2, 0x1) ────────────────────
		   0x010ECE04:  001099E5     LDR r1, [sb]
		   0x010ECE08:  002090E5     LDR r2, [r0]
		   0x010ECE0C:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010ECE10:  B850D2E5     LDRB r5, [r2, 0xb8]
		   0x010ECE14:  030055E1     CMPS r0, r5, r3
		   0x010ECE18:  0600003A     BLO $+0x20  // if (< (unsigned)) goto 0x010ECE38
		   // 
		   // ──── Block 32 else (r2 >= (unsigned) r2, 0x1) ────────────────────
		   0x010ECE1C:  642092E5     LDR r2, [r2, 0x64]
		   0x010ECE20:  032182E0     ADD r2, r2, r3, lsl 2
		   0x010ECE24:  042012E5     LDR r2, [r2, -0x4]
		   0x010ECE28:  010052E1     CMPS r0, r2, r1
		   0x010ECE2C:  0100001A     BNE $+0xc  // if (!=) goto 0x010ECE38
		   // 
		   // ──── Block 33 else (r2 == r2, 0x1) ────────────────────
		   0x010ECE30:  0010A0E3     MOV r1, 0x0
		   0x010ECE34:  F7AA00EB     BL $+0x2abe4  // CALL → ItemFiniteContainer.TryReminderAnimation
		   // ──── Block 34 (from 3 paths) ──────────────────
		   0x010ECE38:  0C409DE5     LDR r4, [sp, 0xc]
		   0x010ECE3C:  B5FFFFEA     B $-0x124
		   // ──── Block 35 if (r2 == r2, 0x1) ────────────────────
		   0x010ECE40:  0040A0E3     MOV r4, 0x0
		   0x010ECE44:  005098E5     LDR r5, [r8]
		   0x010ECE48:  000055E3     CMPS r0, r5, 0x0
		   0x010ECE4C:  1900000A     BEQ $+0x6c  // if (==) goto 0x010ECEB8
		   // 
		   // ──── Block 36 else (r2 != r2, 0x1) ────────────────────
		   0x010ECE50:  000095E5     LDR r0, [r5]
		   0x010ECE54:  FC109FE5     LDR r1, [pc, 0xfc]
		   0x010ECE58:  01109FE7     LDR r1, [pc, r1]
		   0x010ECE5C:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x010ECE60:  001091E5     LDR r1, [r1]
		   0x010ECE64:  000052E3     CMPS r0, r2, 0x0
		   0x010ECE68:  0700000A     BEQ $+0x24  // if (==) goto 0x010ECE8C
		   // 
		   // ──── Block 37 else (r2 != r2, 0x1) ────────────────────
		   0x010ECE6C:  583090E5     LDR r3, [r0, 0x58]
		   0x010ECE70:  043083E2     ADD r3, r3, 0x4
		   0x010ECE74:  047013E5     LDR r7, [r3, -0x4]
		   0x010ECE78:  010057E1     CMPS r0, r7, r1
		   0x010ECE7C:  0600000A     BEQ $+0x20  // if (==) goto 0x010ECE9C
		   // 
		   // ──── Block 38 else (r2 != r2, 0x1) ────────────────────
		   0x010ECE80:  012052E2     SUBS r2, r2, 0x1
		   0x010ECE84:  083083E2     ADD r3, r3, 0x8
		   0x010ECE88:  F9FFFF1A     BNE $-0x14
		   // ──── Block 39 (from 2 paths) ──────────────────
		   0x010ECE8C:  0500A0E1     MOV r0, r5
		   0x010ECE90:  0020A0E3     MOV r2, 0x0
		   0x010ECE94:  FBA7FAEB     BL $-0x15600c
		   0x010ECE98:  020000EA     B $+0x10  // goto 0x010ECEA8
		   // ──── Block 40 if (r2 == r2, 0x1) ────────────────────
		   0x010ECE9C:  001093E5     LDR r1, [r3]
		   0x010ECEA0:  810180E0     ADD r0, r0, r1, lsl 3
		   0x010ECEA4:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 41 ──────────────────────────────
		   0x010ECEA8:  D020C0E1     LDRD r2, r3, [r0]
		   0x010ECEAC:  0500A0E1     MOV r0, r5
		   0x010ECEB0:  0310A0E1     MOV r1, r3
		   0x010ECEB4:  32FF2FE1     BLX r2
		   // ──── Block 42 if (r2 == r2, 0x1) ────────────────────
		   0x010ECEB8:  000054E3     CMPS r0, r4, 0x0
		   0x010ECEBC:  0100000A     BEQ $+0xc  // if (==) goto 0x010ECEC8
		   // 
		   // ──── Block 43 else (r2 != r2, 0x1) ────────────────────
		   0x010ECEC0:  0400A0E1     MOV r0, r4
		   0x010ECEC4:  40B9F9EB     BL $-0x191af8
		   // ──── Block 44 if (r2 == r2, 0x1) ────────────────────
		   0x010ECEC8:  10D08DE2     ADD sp, sp, 0x10
		   0x010ECECC:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010ECED0:  020000EA     B $+0x10  // goto 0x010ECEE0
		   0x010ECED4:  010000EA     B $+0xc  // goto 0x010ECEE0
		   0x010ECED8:  000000EA     B $+0x8  // goto 0x010ECEE0
		   0x010ECEDC:  FFFFFFEA     B $+0x4  // goto 0x010ECEE0
		   // ──── Block 49 ──────────────────────────────
		   0x010ECEE0:  010051E3     CMPS r0, r1, 0x1
		   0x010ECEE4:  0500001A     BNE $+0x1c  // if (!=) goto 0x010ECF00
		   // 
		   // ──── Block 50 else (r2 == r2, 0x1) ────────────────────
		   0x010ECEE8:  F6DEFCEB     BL $-0xc8420
		   0x010ECEEC:  004090E5     LDR r4, [r0]
		   0x010ECEF0:  04408DE5     STR r4, [sp, 0x4]
		   0x010ECEF4:  27DFFCEB     BL $-0xc835c
		   0x010ECEF8:  08809DE5     LDR r8, [sp, 0x8]
		   0x010ECEFC:  D0FFFFEA     B $-0xb8
		   // ──── Block 51 if (r2 != r2, 0x1) ────────────────────
		   0x010ECF00:  04008DE2     ADD r0, sp, 0x4
		   0x010ECF04:  398BEDEB     BL $-0x49d314
		   0x010ECF08:  26DFFCEB     BL $-0xc8360
		   0x010ECF0C:  248BEDEB     BL $-0x49d368
		   0x010ECF10:  8DF11303     TSTSEQ pc, r3, 0x40000023
		   0x010ECF14:  CCC8F802     RSCSEQ ip, r8, 0xcc0000
		   0x010ECF18:  04C3F802     RSCSEQ ip, r8, 0x10000000
		   0x010ECF1C:  549AF802     RSCSEQ sb, r8, 0x54000
		   0x010ECF20:  ACC8F802     RSCSEQ ip, r8, 0xac0000
		   0x010ECF24:  A4C8F802     RSCSEQ ip, r8, 0xa40000
		   0x010ECF28:  649DF802     RSCSEQ sb, r8, 0x1900
		   0x010ECF2C:  58C3F802     RSCSEQ ip, r8, 0x60000001
		   0x010ECF30:  84C8F802     RSCSEQ ip, r8, 0x840000
		   0x010ECF34:  50C4F802     RSCSEQ ip, r8, 0x50000000
		   0x010ECF38:  38C4F802     RSCSEQ ip, r8, 0x38000000
		   0x010ECF3C:  48C2F802     RSCSEQ ip, r8, 0x80000004
		   0x010ECF40:  F0C7F802     RSCSEQ ip, r8, 0x3c00000
		   0x010ECF44:  C0C7F802     RSCSEQ ip, r8, 0x3000000
		   0x010ECF48:  9CC7F802     RSCSEQ ip, r8, 0x2700000
		   0x010ECF4C:  F09BF802     RSCSEQ sb, r8, 0x3c000
		   0x010ECF50:  1CC7F802     RSCSEQ ip, r8, 0x700000
		   0x010ECF54:  E0C1F802     RSCSEQ ip, r8, 0x38
		   0x010ECF58:  6897F802     RSCSEQ sb, r8, 0x1a00000
		*/
	}

	// RVA: 0x10ECF5C Offset: 0x10ECF5C VA: 0x10ECF5C
	public void .ctor() {
		/* Disassembly (ARM32, 86 instructions, 0x158 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ECF5C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010ECF60:  08D04DE2     SUB sp, sp, 0x8
		   0x010ECF64:  14519FE5     LDR r5, [pc, 0x114]
		   0x010ECF68:  0040A0E1     MOV r4, r0
		   0x010ECF6C:  05508FE0     ADD r5, pc, r5
		   0x010ECF70:  0000D5E5     LDRB r0, [r5]
		   0x010ECF74:  000050E3     CMPS r0, r0, 0x0
		   0x010ECF78:  1300001A     BNE $+0x54  // if (!=) goto 0x010ECFCC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ECF7C:  00019FE5     LDR r0, [pc, 0x100]
		   0x010ECF80:  00009FE7     LDR r0, [pc, r0]
		   0x010ECF84:  75B8F9EB     BL $-0x191e24
		   0x010ECF88:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x010ECF8C:  00009FE7     LDR r0, [pc, r0]
		   0x010ECF90:  72B8F9EB     BL $-0x191e30
		   0x010ECF94:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x010ECF98:  00009FE7     LDR r0, [pc, r0]
		   0x010ECF9C:  6FB8F9EB     BL $-0x191e3c
		   0x010ECFA0:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x010ECFA4:  00009FE7     LDR r0, [pc, r0]
		   0x010ECFA8:  6CB8F9EB     BL $-0x191e48
		   0x010ECFAC:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010ECFB0:  00009FE7     LDR r0, [pc, r0]
		   0x010ECFB4:  69B8F9EB     BL $-0x191e54
		   0x010ECFB8:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010ECFBC:  00009FE7     LDR r0, [pc, r0]
		   0x010ECFC0:  66B8F9EB     BL $-0x191e60
		   0x010ECFC4:  0100A0E3     MOV r0, 0x1
		   0x010ECFC8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ECFCC:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010ECFD0:  0010A0E3     MOV r1, 0x0
		   0x010ECFD4:  00009FE7     LDR r0, [pc, r0]
		   0x010ECFD8:  04108DE5     STR r1, [sp, 0x4]
		   0x010ECFDC:  00108DE5     STR r1, [sp]
		   0x010ECFE0:  0D10A0E1     MOV r1, sp
		   0x010ECFE4:  000090E5     LDR r0, [r0]
		   0x010ECFE8:  80B8F9EB     BL $-0x191df8
		   0x010ECFEC:  AC109FE5     LDR r1, [pc, 0xac]
		   0x010ECFF0:  01109FE7     LDR r1, [pc, r1]
		   0x010ECFF4:  400084E5     STR r0, [r4, 0x40]
		   0x010ECFF8:  001091E5     LDR r1, [r1]
		   0x010ECFFC:  0100A0E1     MOV r0, r1
		   0x010ED000:  EFB8F9EB     BL $-0x191c3c
		   0x010ED004:  0050A0E1     MOV r5, r0
		   0x010ED008:  94009FE5     LDR r0, [pc, 0x94]
		   0x010ED00C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED010:  001090E5     LDR r1, [r0]
		   0x010ED014:  0500A0E1     MOV r0, r5
		   0x010ED018:  E4146CEB     BL $+0x1b05398  // CALL → List<object>..ctor
		   0x010ED01C:  84009FE5     LDR r0, [pc, 0x84]
		   0x010ED020:  00009FE7     LDR r0, [pc, r0]
		   0x010ED024:  505084E5     STR r5, [r4, 0x50]
		   0x010ED028:  000090E5     LDR r0, [r0]
		   0x010ED02C:  E4B8F9EB     BL $-0x191c68
		   0x010ED030:  0050A0E1     MOV r5, r0
		   0x010ED034:  70009FE5     LDR r0, [pc, 0x70]
		   0x010ED038:  00009FE7     LDR r0, [pc, r0]
		   0x010ED03C:  001090E5     LDR r1, [r0]
		   0x010ED040:  0500A0E1     MOV r0, r5
		   0x010ED044:  D9146CEB     BL $+0x1b0536c  // CALL → List<object>..ctor
		   0x010ED048:  60009FE5     LDR r0, [pc, 0x60]
		   0x010ED04C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED050:  545084E5     STR r5, [r4, 0x54]
		   0x010ED054:  000090E5     LDR r0, [r0]
		   0x010ED058:  D9B8F9EB     BL $-0x191c94
		   0x010ED05C:  0010A0E3     MOV r1, 0x0
		   0x010ED060:  0050A0E1     MOV r5, r0
		   0x010ED064:  08DC01EB     BL $+0x77028  // CALL → MergeCounter..ctor
		   0x010ED068:  0400A0E1     MOV r0, r4
		   0x010ED06C:  0010A0E3     MOV r1, 0x0
		   0x010ED070:  785084E5     STR r5, [r4, 0x78]
		   0x010ED074:  8B2B3CEB     BL $+0xf0ae34  // CALL → sub_1FF7EA8
		   0x010ED078:  08D08DE2     ADD sp, sp, 0x8
		   0x010ED07C:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010ED080:  62ED1303     TSTSEQ lr, r3, 0x1880
		   0x010ED084:  20BCF802     RSCSEQ fp, r8, 0x2000
		   0x010ED088:  A4C4F802     RSCSEQ ip, r8, 0xa4000000
		   0x010ED08C:  D8BCF802     RSCSEQ fp, r8, 0xd800
		   0x010ED090:  D0BCF802     RSCSEQ fp, r8, 0xd000
		   0x010ED094:  64C1F802     RSCSEQ ip, r8, 0x19
		   0x010ED098:  78C4F802     RSCSEQ ip, r8, 0x78000000
		   0x010ED09C:  CCBBF802     RSCSEQ fp, r8, 0x33000
		   0x010ED0A0:  84BCF802     RSCSEQ fp, r8, 0x8400
		   0x010ED0A4:  64BCF802     RSCSEQ fp, r8, 0x6400
		   0x010ED0A8:  F4C0F802     RSCSEQ ip, r8, 0xf4
		   0x010ED0AC:  F8C3F802     RSCSEQ ip, r8, 0xe0000003
		   0x010ED0B0:  E8C3F802     RSCSEQ ip, r8, 0xa0000003
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED0B4 Offset: 0x10ED0B4 VA: 0x10ED0B4
	private List<ItemDataSave> <SetupSeasonsConfig>b__70_0() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED0B4:  10402DE9     PUSH {r4, lr}
		   0x010ED0B8:  3C4090E5     LDR r4, [r0, 0x3c]
		   0x010ED0BC:  000054E3     CMPS r0, r4, 0x0
		   0x010ED0C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED0C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED0C4:  C1B8F9EB     BL $-0x191cf4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED0C8:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010ED0CC:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED0D0 Offset: 0x10ED0D0 VA: 0x10ED0D0
	private List<ItemDataSave> <SetupSeasonsConfig>b__70_1() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED0D0:  10402DE9     PUSH {r4, lr}
		   0x010ED0D4:  3C4090E5     LDR r4, [r0, 0x3c]
		   0x010ED0D8:  000054E3     CMPS r0, r4, 0x0
		   0x010ED0DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED0E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED0E0:  BAB8F9EB     BL $-0x191d10
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED0E4:  0400A0E1     MOV r0, r4
		   0x010ED0E8:  0010A0E3     MOV r1, 0x0
		   0x010ED0EC:  1040BDE8     POP {r4, lr}
		   0x010ED0F0:  65DD00EA     B $+0x3759c  // TAIL CALL → GameStateSave.get_Inventory
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED0F4 Offset: 0x10ED0F4 VA: 0x10ED0F4
	private List<ItemDataSave> <SetupSeasonsConfig>b__70_2() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED0F4:  10402DE9     PUSH {r4, lr}
		   0x010ED0F8:  3C4090E5     LDR r4, [r0, 0x3c]
		   0x010ED0FC:  000054E3     CMPS r0, r4, 0x0
		   0x010ED100:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED108
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED104:  B1B8F9EB     BL $-0x191d34
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED108:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010ED10C:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED110 Offset: 0x10ED110 VA: 0x10ED110
	private List<ItemDataSave> <SetupSeasonsConfig>b__70_3() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED110:  10402DE9     PUSH {r4, lr}
		   0x010ED114:  3C4090E5     LDR r4, [r0, 0x3c]
		   0x010ED118:  000054E3     CMPS r0, r4, 0x0
		   0x010ED11C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED124
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED120:  AAB8F9EB     BL $-0x191d50
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED124:  0400A0E1     MOV r0, r4
		   0x010ED128:  0010A0E3     MOV r1, 0x0
		   0x010ED12C:  1040BDE8     POP {r4, lr}
		   0x010ED130:  55DD00EA     B $+0x3755c  // TAIL CALL → GameStateSave.get_Inventory
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED134 Offset: 0x10ED134 VA: 0x10ED134
	private void <Setup>b__72_0(Item i) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010ED134:  E8BDFFEA     B $-0x10858
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED138 Offset: 0x10ED138 VA: 0x10ED138
	private bool <RemoveWrongItems>b__85_0(ItemDataSave i) {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED138:  70432DE9     PUSH {r4, r5, r6, r8, sb, lr}
		   0x010ED13C:  18D04DE2     SUB sp, sp, 0x18
		   0x010ED140:  54619FE5     LDR r6, [pc, 0x154]
		   0x010ED144:  0050A0E1     MOV r5, r0
		   0x010ED148:  0140A0E1     MOV r4, r1
		   0x010ED14C:  06608FE0     ADD r6, pc, r6
		   0x010ED150:  0000D6E5     LDRB r0, [r6]
		   0x010ED154:  000050E3     CMPS r0, r0, 0x0
		   0x010ED158:  0700001A     BNE $+0x24  // if (!=) goto 0x010ED17C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED15C:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010ED160:  00009FE7     LDR r0, [pc, r0]
		   0x010ED164:  FDB7F9EB     BL $-0x192004
		   0x010ED168:  34019FE5     LDR r0, [pc, 0x134]
		   0x010ED16C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED170:  FAB7F9EB     BL $-0x192010
		   0x010ED174:  0100A0E3     MOV r0, 0x1
		   0x010ED178:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED17C:  5C5095E5     LDR r5, [r5, 0x5c]
		   0x010ED180:  0000A0E3     MOV r0, 0x0
		   0x010ED184:  000054E3     CMPS r0, r4, 0x0
		   0x010ED188:  0C008DE5     STR r0, [sp, 0xc]
		   0x010ED18C:  08008DE5     STR r0, [sp, 0x8]
		   0x010ED190:  10008DE5     STR r0, [sp, 0x10]
		   0x010ED194:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED19C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ED198:  8CB8F9EB     BL $-0x191dc8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ED19C:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010ED1A0:  000055E3     CMPS r0, r5, 0x0
		   0x010ED1A4:  244094E5     LDR r4, [r4, 0x24]
		   0x010ED1A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED1B0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010ED1AC:  87B8F9EB     BL $-0x191ddc
		   // ──── Block 6 if (!=) ────────────────────
		   0x010ED1B0:  0090A0E3     MOV sb, 0x0
		   0x010ED1B4:  0180A0E3     MOV r8, 0x1
		   0x010ED1B8:  0500A0E1     MOV r0, r5
		   0x010ED1BC:  0410A0E1     MOV r1, r4
		   0x010ED1C0:  0620A0E1     MOV r2, r6
		   0x010ED1C4:  0030A0E3     MOV r3, 0x0
		   0x010ED1C8:  F080CDE1     STRD r8, sb, [sp]
		   0x010ED1CC:  7A8A02EB     BL $+0xa29f0  // CALL → ResourcesPack.GetItemObject
		   0x010ED1D0:  0040A0E1     MOV r4, r0
		   0x010ED1D4:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010ED1D8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED1DC:  000090E5     LDR r0, [r0]
		   0x010ED1E0:  741090E5     LDR r1, [r0, 0x74]
		   0x010ED1E4:  000051E3     CMPS r0, r1, 0x0
		   0x010ED1E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED1F0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010ED1EC:  28B8F9EB     BL $-0x191f58
		   // ──── Block 8 if (!=) ────────────────────
		   0x010ED1F0:  0400A0E1     MOV r0, r4
		   0x010ED1F4:  0010A0E3     MOV r1, 0x0
		   0x010ED1F8:  0020A0E3     MOV r2, 0x0
		   0x010ED1FC:  262B3CEB     BL $+0xf0aca0  // CALL → sub_1FF7E9C
		   0x010ED200:  000050E3     CMPS r0, r0, 0x0
		   0x010ED204:  2100001A     BNE $+0x8c
		   0x010ED208:  000054E3     CMPS r0, r4, 0x0
		   0x010ED20C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED214
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010ED210:  6EB8F9EB     BL $-0x191e40
		   // ──── Block 11 if (!=) ────────────────────
		   0x010ED214:  185094E5     LDR r5, [r4, 0x18]
		   0x010ED218:  000055E3     CMPS r0, r5, 0x0
		   0x010ED21C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED224
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010ED220:  6AB8F9EB     BL $-0x191e50
		   // ──── Block 13 if (!=) ────────────────────
		   0x010ED224:  80409FE5     LDR r4, [pc, 0x80]
		   0x010ED228:  04409FE7     LDR r4, [pc, r4]
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED2B0 Offset: 0x10ED2B0 VA: 0x10ED2B0
	private bool <RemoveWrongItems>b__85_1(ItemDataSave i) {
		/* Disassembly (ARM32, 64 instructions, 0x100 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED2B0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010ED2B4:  18D04DE2     SUB sp, sp, 0x18
		   0x010ED2B8:  60619FE5     LDR r6, [pc, 0x160]
		   0x010ED2BC:  0050A0E1     MOV r5, r0
		   0x010ED2C0:  0140A0E1     MOV r4, r1
		   0x010ED2C4:  06608FE0     ADD r6, pc, r6
		   0x010ED2C8:  0000D6E5     LDRB r0, [r6]
		   0x010ED2CC:  000050E3     CMPS r0, r0, 0x0
		   0x010ED2D0:  0700001A     BNE $+0x24  // if (!=) goto 0x010ED2F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED2D4:  48019FE5     LDR r0, [pc, 0x148]
		   0x010ED2D8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED2DC:  9FB7F9EB     BL $-0x19217c
		   0x010ED2E0:  40019FE5     LDR r0, [pc, 0x140]
		   0x010ED2E4:  00009FE7     LDR r0, [pc, r0]
		   0x010ED2E8:  9CB7F9EB     BL $-0x192188
		   0x010ED2EC:  0100A0E3     MOV r0, 0x1
		   0x010ED2F0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED2F4:  5C5095E5     LDR r5, [r5, 0x5c]
		   0x010ED2F8:  0000A0E3     MOV r0, 0x0
		   0x010ED2FC:  000054E3     CMPS r0, r4, 0x0
		   0x010ED300:  0C008DE5     STR r0, [sp, 0xc]
		   0x010ED304:  08008DE5     STR r0, [sp, 0x8]
		   0x010ED308:  10008DE5     STR r0, [sp, 0x10]
		   0x010ED30C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED314
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ED310:  2EB8F9EB     BL $-0x191f40
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ED314:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010ED318:  000055E3     CMPS r0, r5, 0x0
		   0x010ED31C:  1C7094E5     LDR r7, [r4, 0x1c]
		   0x010ED320:  244094E5     LDR r4, [r4, 0x24]
		   0x010ED324:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED32C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010ED328:  28B8F9EB     BL $-0x191f58
		   // ──── Block 6 if (!=) ────────────────────
		   0x010ED32C:  050057E2     SUBS r0, r7, 0x5
		   0x010ED330:  0010A0E3     MOV r1, 0x0
		   0x010ED334:  01000013     MOVNE r0, 0x1
		   0x010ED338:  0620A0E1     MOV r2, r6
		   0x010ED33C:  F000CDE1     STRD r0, r1, [sp]
		   0x010ED340:  0500A0E1     MOV r0, r5
		   0x010ED344:  0410A0E1     MOV r1, r4
		   0x010ED348:  0030A0E3     MOV r3, 0x0
		   0x010ED34C:  1A8A02EB     BL $+0xa2870  // CALL → ResourcesPack.GetItemObject
		   0x010ED350:  0040A0E1     MOV r4, r0
		   0x010ED354:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010ED358:  00009FE7     LDR r0, [pc, r0]
		   0x010ED35C:  000090E5     LDR r0, [r0]
		   0x010ED360:  741090E5     LDR r1, [r0, 0x74]
		   0x010ED364:  000051E3     CMPS r0, r1, 0x0
		   0x010ED368:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED370
		   // 
		   // ──── Block 7 else (r0 == r7, 0x5) ────────────────────
		   0x010ED36C:  C8B7F9EB     BL $-0x1920d8
		   // ──── Block 8 if (r0 != r7, 0x5) ────────────────────
		   0x010ED370:  0400A0E1     MOV r0, r4
		   0x010ED374:  0010A0E3     MOV r1, 0x0
		   0x010ED378:  0020A0E3     MOV r2, 0x0
		   0x010ED37C:  C62A3CEB     BL $+0xf0ab20  // CALL → sub_1FF7E9C
		   0x010ED380:  0150A0E3     MOV r5, 0x1
		   0x010ED384:  000050E3     CMPS r0, r0, 0x0
		   0x010ED388:  2100001A     BNE $+0x8c
		   0x010ED38C:  000054E3     CMPS r0, r4, 0x0
		   0x010ED390:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED398
		   // 
		   // ──── Block 10 else (r0 == r7, 0x5) ────────────────────
		   0x010ED394:  0DB8F9EB     BL $-0x191fc4
		   // ──── Block 11 if (r0 != r7, 0x5) ────────────────────
		   0x010ED398:  185094E5     LDR r5, [r4, 0x18]
		   0x010ED39C:  000055E3     CMPS r0, r5, 0x0
		   0x010ED3A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED3A8
		   // 
		   // ──── Block 12 else (r0 == r7, 0x5) ────────────────────
		   0x010ED3A4:  09B8F9EB     BL $-0x191fd4
		   // ──── Block 13 if (r0 != r7, 0x5) ────────────────────
		   0x010ED3A8:  80409FE5     LDR r4, [pc, 0x80]
		   0x010ED3AC:  04409FE7     LDR r4, [pc, r4]
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10E0B2C Offset: 0x10E0B2C VA: 0x10E0B2C
	private void <CreateField>g__AddItemLocalSetup|86_1(ItemDataSave key, ItemData itemData, Cell targetCell) {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E0B2C:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010E0B30:  30D04DE2     SUB sp, sp, 0x30
		   0x010E0B34:  0380A0E1     MOV r8, r3
		   0x010E0B38:  0290A0E1     MOV sb, r2
		   0x010E0B3C:  0170A0E1     MOV r7, r1
		   0x010E0B40:  0060A0E1     MOV r6, r0
		   0x010E0B44:  000051E3     CMPS r0, r1, 0x0
		   0x010E0B48:  0000001A     BNE $+0x8  // if (!=) goto 0x010E0B50
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010E0B4C:  1FEAF9EB     BL $-0x18577c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010E0B50:  440096E5     LDR r0, [r6, 0x44]
		   0x010E0B54:  0050A0E3     MOV r5, 0x0
		   0x010E0B58:  1020D7E5     LDRB r2, [r7, 0x10]
		   0x010E0B5C:  081097E5     LDR r1, [r7, 0x8]
		   0x010E0B60:  3030D7E5     LDRB r3, [r7, 0x30]
		   0x010E0B64:  1840D7E5     LDRB r4, [r7, 0x18]
		   0x010E0B68:  347097E5     LDR r7, [r7, 0x34]
		   0x010E0B6C:  21008DE9     STMIA sp, {r0, r5}
		   0x010E0B70:  18008DE2     ADD r0, sp, 0x18
		   0x010E0B74:  9A0080E8     STM r0, {r1, r3, r4, r7}
		   0x010E0B78:  0600A0E1     MOV r0, r6
		   0x010E0B7C:  0910A0E1     MOV r1, sb
		   0x010E0B80:  0830A0E1     MOV r3, r8
		   0x010E0B84:  28508DE5     STR r5, [sp, 0x28]
		   0x010E0B88:  00508DE5     STR r5, [sp]
		   0x010E0B8C:  0C508DE5     STR r5, [sp, 0xc]
		   0x010E0B90:  10508DE5     STR r5, [sp, 0x10]
		   0x010E0B94:  14508DE5     STR r5, [sp, 0x14]
		   0x010E0B98:  DADEFFEB     BL $-0x8490
		   0x010E0B9C:  30D08DE2     ADD sp, sp, 0x30
		   0x010E0BA0:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED434 Offset: 0x10ED434 VA: 0x10ED434
	private ItemData <ConvertItemsFromConfig>b__124_0(ConfigItemID itm) {
		/* Disassembly (ARM32, 89 instructions, 0x164 bytes):
		   // CFG: 18 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED434:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010ED438:  34419FE5     LDR r4, [pc, 0x134]
		   0x010ED43C:  0060A0E1     MOV r6, r0
		   0x010ED440:  0150A0E1     MOV r5, r1
		   0x010ED444:  04408FE0     ADD r4, pc, r4
		   0x010ED448:  0000D4E5     LDRB r0, [r4]
		   0x010ED44C:  000050E3     CMPS r0, r0, 0x0
		   0x010ED450:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010ED48C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED454:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x010ED458:  00009FE7     LDR r0, [pc, r0]
		   0x010ED45C:  3FB7F9EB     BL $-0x1922fc
		   0x010ED460:  14019FE5     LDR r0, [pc, 0x114]
		   0x010ED464:  00009FE7     LDR r0, [pc, r0]
		   0x010ED468:  3CB7F9EB     BL $-0x192308
		   0x010ED46C:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x010ED470:  00009FE7     LDR r0, [pc, r0]
		   0x010ED474:  39B7F9EB     BL $-0x192314
		   0x010ED478:  04019FE5     LDR r0, [pc, 0x104]
		   0x010ED47C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED480:  36B7F9EB     BL $-0x192320
		   0x010ED484:  0100A0E3     MOV r0, 0x1
		   0x010ED488:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED48C:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x010ED490:  00009FE7     LDR r0, [pc, r0]
		   0x010ED494:  000090E5     LDR r0, [r0]
		   0x010ED498:  C9B7F9EB     BL $-0x1920d4
		   0x010ED49C:  0010A0E3     MOV r1, 0x0
		   0x010ED4A0:  0040A0E1     MOV r4, r0
		   0x010ED4A4:  900600EB     BL $+0x1a48  // CALL → <>c__DisplayClass124_0..ctor
		   0x010ED4A8:  000054E3     CMPS r0, r4, 0x0
		   0x010ED4AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED4B4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ED4B0:  C6B7F9EB     BL $-0x1920e0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ED4B4:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010ED4B8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED4BC:  386096E5     LDR r6, [r6, 0x38]
		   0x010ED4C0:  085084E5     STR r5, [r4, 0x8]
		   0x010ED4C4:  000090E5     LDR r0, [r0]
		   0x010ED4C8:  BDB7F9EB     BL $-0x192104
		   0x010ED4CC:  0050A0E1     MOV r5, r0
		   0x010ED4D0:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010ED4D4:  0410A0E1     MOV r1, r4
		   0x010ED4D8:  0030A0E3     MOV r3, 0x0
		   0x010ED4DC:  00009FE7     LDR r0, [pc, r0]
		   0x010ED4E0:  002090E5     LDR r2, [r0]
		   0x010ED4E4:  0500A0E1     MOV r0, r5
		   0x010ED4E8:  668233EB     BL $+0xce09a0  // CALL → Predicate<object>..ctor
		   0x010ED4EC:  000056E3     CMPS r0, r6, 0x0
		   0x010ED4F0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED4F8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010ED4F4:  B5B7F9EB     BL $-0x192124
		   // ──── Block 6 if (!=) ────────────────────
		   0x010ED4F8:  94009FE5     LDR r0, [pc, 0x94]
		   0x010ED4FC:  0510A0E1     MOV r1, r5
		   0x010ED500:  00009FE7     LDR r0, [pc, r0]
		   0x010ED504:  002090E5     LDR r2, [r0]
		   0x010ED508:  0600A0E1     MOV r0, r6
		   0x010ED50C:  5D176CEB     BL $+0x1b05d7c  // CALL → List<object>.Find
		   0x010ED510:  0050A0E1     MOV r5, r0
		   0x010ED514:  000050E3     CMPS r0, r0, 0x0
		   0x010ED518:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED520
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010ED51C:  ABB7F9EB     BL $-0x19214c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010ED520:  086094E5     LDR r6, [r4, 0x8]
		   0x010ED524:  284095E5     LDR r4, [r5, 0x28]
		   0x010ED528:  000056E3     CMPS r0, r6, 0x0
		   0x010ED52C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED534
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010ED530:  A6B7F9EB     BL $-0x192160
		   // ──── Block 10 if (!=) ────────────────────
		   0x010ED534:  0C5096E5     LDR r5, [r6, 0xc]
		   0x010ED538:  000054E3     CMPS r0, r4, 0x0
		   0x010ED53C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED544
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010ED540:  A2B7F9EB     BL $-0x192170
		   // ──── Block 12 if (!=) ────────────────────
		   0x010ED544:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010ED548:  015045E2     SUB r5, r5, 0x1
		   0x010ED54C:  050050E1     CMPS r0, r0, r5
		   0x010ED550:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010ED558
		   // 
		   // ──── Block 13 else (<= (unsigned)) ────────────────────
		   0x010ED554:  9EB7F9EB     BL $-0x192180
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x010ED558:  050184E0     ADD r0, r4, r5, lsl 2
		   0x010ED55C:  104090E5     LDR r4, [r0, 0x10]
		   0x010ED560:  000054E3     CMPS r0, r4, 0x0
		   0x010ED564:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED56C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010ED568:  98B7F9EB     BL $-0x192198
		   // ──── Block 16 if (!=) ────────────────────
		   0x010ED56C:  180094E5     LDR r0, [r4, 0x18]
		   0x010ED570:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010ED574:  8DE81303     TSTSEQ lr, r3, 0x8d0000
		   0x010ED578:  78BBF802     RSCSEQ fp, r8, 0x1e000
		   0x010ED57C:  70BBF802     RSCSEQ fp, r8, 0x1c000
		   0x010ED580:  C8BFF802     RSCSEQ fp, r8, 0x320
		   0x010ED584:  C0BFF802     RSCSEQ fp, r8, 0x300
		   0x010ED588:  ACBFF802     RSCSEQ fp, r8, 0x2b0
		   0x010ED58C:  1CBBF802     RSCSEQ fp, r8, 0x7000
		   0x010ED590:  5CBFF802     RSCSEQ fp, r8, 0x170
		   0x010ED594:  D0BAF802     RSCSEQ fp, r8, 0xd0000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED598 Offset: 0x10ED598 VA: 0x10ED598
	internal static void <SetGoalsCheck>g__SendException|128_0(string excText) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED598:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010ED59C:  7C509FE5     LDR r5, [pc, 0x7c]
		   0x010ED5A0:  0040A0E1     MOV r4, r0
		   0x010ED5A4:  05508FE0     ADD r5, pc, r5
		   0x010ED5A8:  0000D5E5     LDRB r0, [r5]
		   0x010ED5AC:  000050E3     CMPS r0, r0, 0x0
		   0x010ED5B0:  0700001A     BNE $+0x24  // if (!=) goto 0x010ED5D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED5B4:  68009FE5     LDR r0, [pc, 0x68]
		   0x010ED5B8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED5BC:  E7B6F9EB     BL $-0x19245c
		   0x010ED5C0:  60009FE5     LDR r0, [pc, 0x60]
		   0x010ED5C4:  00009FE7     LDR r0, [pc, r0]
		   0x010ED5C8:  E4B6F9EB     BL $-0x192468
		   0x010ED5CC:  0100A0E3     MOV r0, 0x1
		   0x010ED5D0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED5D4:  50009FE5     LDR r0, [pc, 0x50]
		   0x010ED5D8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED5DC:  000090E5     LDR r0, [r0]
		   0x010ED5E0:  77B7F9EB     BL $-0x19221c
		   0x010ED5E4:  0410A0E1     MOV r1, r4
		   0x010ED5E8:  0020A0E3     MOV r2, 0x0
		   0x010ED5EC:  0050A0E1     MOV r5, r0
		   0x010ED5F0:  916E7EEB     BL $+0x1f9ba4c  // CALL → Exception..ctor
		   0x010ED5F4:  34009FE5     LDR r0, [pc, 0x34]
		   0x010ED5F8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED5FC:  000090E5     LDR r0, [r0]
		   0x010ED600:  741090E5     LDR r1, [r0, 0x74]
		   0x010ED604:  000051E3     CMPS r0, r1, 0x0
		   0x010ED608:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED610
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ED60C:  20B7F9EB     BL $-0x192378
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ED610:  0500A0E1     MOV r0, r5
		   0x010ED614:  0010A0E3     MOV r1, 0x0
		   0x010ED618:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010ED61C:  DA2A3CEA     B $+0xf0ab70
		   0x010ED620:  2EE71303     TSTSEQ lr, r3, 0xb80000
		   0x010ED624:  D08FF802     RSCSEQ r8, r8, 0x340
		   0x010ED628:  2893F802     RSCSEQ sb, r8, 0xa0000000
		   0x010ED62C:  1493F802     RSCSEQ sb, r8, 0x50000000
		   0x010ED630:  908FF802     RSCSEQ r8, r8, 0x240
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10E6994 Offset: 0x10E6994 VA: 0x10E6994
	internal static void <SetGoalsCheck>g__CheckForItemList|128_1(List<GoalTarget> resTargets, List<Item> items, string errorText) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010E6994:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010E6998:  24D04DE2     SUB sp, sp, 0x24
		   0x010E699C:  90429FE5     LDR r4, [pc, 0x290]
		   0x010E69A0:  0080A0E1     MOV r8, r0
		   0x010E69A4:  0290A0E1     MOV sb, r2
		   0x010E69A8:  0170A0E1     MOV r7, r1
		   0x010E69AC:  04408FE0     ADD r4, pc, r4
		   0x010E69B0:  0000D4E5     LDRB r0, [r4]
		   0x010E69B4:  000050E3     CMPS r0, r0, 0x0
		   0x010E69B8:  1C00001A     BNE $+0x78
		   0x010E69BC:  74029FE5     LDR r0, [pc, 0x274]
		   0x010E69C0:  00009FE7     LDR r0, [pc, r0]
		   0x010E69C4:  E5D1F9EB     BL $-0x18b864
		   0x010E69C8:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x010E69CC:  00009FE7     LDR r0, [pc, r0]
		   0x010E69D0:  E2D1F9EB     BL $-0x18b870
		   0x010E69D4:  64029FE5     LDR r0, [pc, 0x264]
		   0x010E69D8:  00009FE7     LDR r0, [pc, r0]
		   0x010E69DC:  DFD1F9EB     BL $-0x18b87c
		   0x010E69E0:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x010E69E4:  00009FE7     LDR r0, [pc, r0]
		   0x010E69E8:  DCD1F9EB     BL $-0x18b888
		   0x010E69EC:  54029FE5     LDR r0, [pc, 0x254]
		   0x010E69F0:  00009FE7     LDR r0, [pc, r0]
		   0x010E69F4:  D9D1F9EB     BL $-0x18b894
		   0x010E69F8:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x010E69FC:  00009FE7     LDR r0, [pc, r0]
		   0x010E6A00:  D6D1F9EB     BL $-0x18b8a0
		   0x010E6A04:  44029FE5     LDR r0, [pc, 0x244]
		   0x010E6A08:  00009FE7     LDR r0, [pc, r0]
		   0x010E6A0C:  D3D1F9EB     BL $-0x18b8ac
		   0x010E6A10:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x010E6A14:  00009FE7     LDR r0, [pc, r0]
		   0x010E6A18:  D0D1F9EB     BL $-0x18b8b8
		   0x010E6A1C:  34029FE5     LDR r0, [pc, 0x234]
		   0x010E6A20:  00009FE7     LDR r0, [pc, r0]
		   0x010E6A24:  CDD1F9EB     BL $-0x18b8c4
		   0x010E6A28:  0100A0E3     MOV r0, 0x1
		   0x010E6A2C:  0000C4E5     STRB r0, [r4]
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED634 Offset: 0x10ED634 VA: 0x10ED634
	private ItemDataSave <GetRewardBoxItems>b__133_0(RewardItemData x) {
		/* Disassembly (ARM32, 42 instructions, 0xA8 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED634:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010ED638:  90609FE5     LDR r6, [pc, 0x90]
		   0x010ED63C:  0050A0E1     MOV r5, r0
		   0x010ED640:  0140A0E1     MOV r4, r1
		   0x010ED644:  06608FE0     ADD r6, pc, r6
		   0x010ED648:  0000D6E5     LDRB r0, [r6]
		   0x010ED64C:  000050E3     CMPS r0, r0, 0x0
		   0x010ED650:  0400001A     BNE $+0x18  // if (!=) goto 0x010ED668
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED654:  78009FE5     LDR r0, [pc, 0x78]
		   0x010ED658:  00009FE7     LDR r0, [pc, r0]
		   0x010ED65C:  BFB6F9EB     BL $-0x1924fc
		   0x010ED660:  0100A0E3     MOV r0, 0x1
		   0x010ED664:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED668:  68009FE5     LDR r0, [pc, 0x68]
		   0x010ED66C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED670:  000090E5     LDR r0, [r0]
		   0x010ED674:  52B7F9EB     BL $-0x1922b0
		   0x010ED678:  0010A0E3     MOV r1, 0x0
		   0x010ED67C:  0060A0E1     MOV r6, r0
		   0x010ED680:  F74601EB     BL $+0x51be4  // CALL → ItemDataSave..ctor
		   0x010ED684:  000054E3     CMPS r0, r4, 0x0
		   0x010ED688:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED690
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ED68C:  4FB7F9EB     BL $-0x1922bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ED690:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010ED694:  000056E3     CMPS r0, r6, 0x0
		   0x010ED698:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED6A0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010ED69C:  4BB7F9EB     BL $-0x1922cc
		   // ──── Block 6 if (!=) ────────────────────
		   0x010ED6A0:  0010A0E3     MOV r1, 0x0
		   0x010ED6A4:  100094E5     LDR r0, [r4, 0x10]
		   0x010ED6A8:  0C0086E5     STR r0, [r6, 0xc]
		   0x010ED6AC:  0500A0E1     MOV r0, r5
		   0x010ED6B0:  1810C6E5     STRB r1, [r6, 0x18]
		   0x010ED6B4:  1010C6E5     STRB r1, [r6, 0x10]
		   0x010ED6B8:  0410A0E1     MOV r1, r4
		   0x010ED6BC:  247086E5     STR r7, [r6, 0x24]
		   0x010ED6C0:  050000EB     BL $+0x1c  // CALL → GameState.<GetRewardBoxItems>g__GetItemType|133_1
		   0x010ED6C4:  1C0086E5     STR r0, [r6, 0x1c]
		   0x010ED6C8:  0600A0E1     MOV r0, r6
		   0x010ED6CC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010ED6D0:  90E61303     TSTSEQ lr, r3, 0x9000000
		   0x010ED6D4:  E8BDF802     RSCSEQ fp, r8, 0x3a00
		   0x010ED6D8:  D4BDF802     RSCSEQ fp, r8, 0x3500
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10ED6DC Offset: 0x10ED6DC VA: 0x10ED6DC
	private ItemType <GetRewardBoxItems>g__GetItemType|133_1(RewardItemData rewardItemData) {
		/* Disassembly (ARM32, 252 instructions, 0x3F0 bytes):
		   // CFG: 55 blocks, 53 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010ED6DC:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010ED6E0:  08D04DE2     SUB sp, sp, 0x8
		   0x010ED6E4:  8C439FE5     LDR r4, [pc, 0x38c]
		   0x010ED6E8:  0060A0E1     MOV r6, r0
		   0x010ED6EC:  0150A0E1     MOV r5, r1
		   0x010ED6F0:  04408FE0     ADD r4, pc, r4
		   0x010ED6F4:  0000D4E5     LDRB r0, [r4]
		   0x010ED6F8:  000050E3     CMPS r0, r0, 0x0
		   0x010ED6FC:  1C00001A     BNE $+0x78  // if (!=) goto 0x010ED774
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010ED700:  74039FE5     LDR r0, [pc, 0x374]
		   0x010ED704:  00009FE7     LDR r0, [pc, r0]
		   0x010ED708:  94B6F9EB     BL $-0x1925a8
		   0x010ED70C:  6C039FE5     LDR r0, [pc, 0x36c]
		   0x010ED710:  00009FE7     LDR r0, [pc, r0]
		   0x010ED714:  91B6F9EB     BL $-0x1925b4
		   0x010ED718:  64039FE5     LDR r0, [pc, 0x364]
		   0x010ED71C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED720:  8EB6F9EB     BL $-0x1925c0
		   0x010ED724:  5C039FE5     LDR r0, [pc, 0x35c]
		   0x010ED728:  00009FE7     LDR r0, [pc, r0]
		   0x010ED72C:  8BB6F9EB     BL $-0x1925cc
		   0x010ED730:  54039FE5     LDR r0, [pc, 0x354]
		   0x010ED734:  00009FE7     LDR r0, [pc, r0]
		   0x010ED738:  88B6F9EB     BL $-0x1925d8
		   0x010ED73C:  4C039FE5     LDR r0, [pc, 0x34c]
		   0x010ED740:  00009FE7     LDR r0, [pc, r0]
		   0x010ED744:  85B6F9EB     BL $-0x1925e4
		   0x010ED748:  44039FE5     LDR r0, [pc, 0x344]
		   0x010ED74C:  00009FE7     LDR r0, [pc, r0]
		   0x010ED750:  82B6F9EB     BL $-0x1925f0
		   0x010ED754:  3C039FE5     LDR r0, [pc, 0x33c]
		   0x010ED758:  00009FE7     LDR r0, [pc, r0]
		   0x010ED75C:  7FB6F9EB     BL $-0x1925fc
		   0x010ED760:  34039FE5     LDR r0, [pc, 0x334]
		   0x010ED764:  00009FE7     LDR r0, [pc, r0]
		   0x010ED768:  7CB6F9EB     BL $-0x192608
		   0x010ED76C:  0100A0E3     MOV r0, 0x1
		   0x010ED770:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010ED774:  24039FE5     LDR r0, [pc, 0x324]
		   0x010ED778:  00009FE7     LDR r0, [pc, r0]
		   0x010ED77C:  000090E5     LDR r0, [r0]
		   0x010ED780:  0FB7F9EB     BL $-0x1923bc
		   0x010ED784:  0010A0E3     MOV r1, 0x0
		   0x010ED788:  0040A0E1     MOV r4, r0
		   0x010ED78C:  8E0600EB     BL $+0x1a40  // CALL → <>c__DisplayClass133_0..ctor
		   0x010ED790:  000054E3     CMPS r0, r4, 0x0
		   0x010ED794:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED79C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010ED798:  0CB7F9EB     BL $-0x1923c8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010ED79C:  00039FE5     LDR r0, [pc, 0x300]
		   0x010ED7A0:  00009FE7     LDR r0, [pc, r0]
		   0x010ED7A4:  386096E5     LDR r6, [r6, 0x38]
		   0x010ED7A8:  085084E5     STR r5, [r4, 0x8]
		   0x010ED7AC:  000090E5     LDR r0, [r0]
		   0x010ED7B0:  03B7F9EB     BL $-0x1923ec
		   0x010ED7B4:  0050A0E1     MOV r5, r0
		   0x010ED7B8:  E8029FE5     LDR r0, [pc, 0x2e8]
		   0x010ED7BC:  0410A0E1     MOV r1, r4
		   0x010ED7C0:  0030A0E3     MOV r3, 0x0
		   0x010ED7C4:  00009FE7     LDR r0, [pc, r0]
		   0x010ED7C8:  002090E5     LDR r2, [r0]
		   0x010ED7CC:  0500A0E1     MOV r0, r5
		   0x010ED7D0:  AC8133EB     BL $+0xce06b8  // CALL → Predicate<object>..ctor
		   0x010ED7D4:  000056E3     CMPS r0, r6, 0x0
		   0x010ED7D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED7E0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010ED7DC:  FBB6F9EB     BL $-0x19240c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010ED7E0:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x010ED7E4:  0510A0E1     MOV r1, r5
		   0x010ED7E8:  00009FE7     LDR r0, [pc, r0]
		   0x010ED7EC:  002090E5     LDR r2, [r0]
		   0x010ED7F0:  0600A0E1     MOV r0, r6
		   0x010ED7F4:  A3166CEB     BL $+0x1b05a94  // CALL → List<object>.Find
		   0x010ED7F8:  B0829FE5     LDR r8, [pc, 0x2b0]
		   0x010ED7FC:  0050A0E1     MOV r5, r0
		   0x010ED800:  08809FE7     LDR r8, [pc, r8]
		   0x010ED804:  000098E5     LDR r0, [r8]
		   0x010ED808:  741090E5     LDR r1, [r0, 0x74]
		   0x010ED80C:  000051E3     CMPS r0, r1, 0x0
		   0x010ED810:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED818
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010ED814:  9EB6F9EB     BL $-0x192580
		   // ──── Block 8 if (!=) ────────────────────
		   0x010ED818:  0500A0E1     MOV r0, r5
		   0x010ED81C:  0010A0E3     MOV r1, 0x0
		   0x010ED820:  752A3CEB     BL $+0xf0a9dc  // CALL → sub_1FF81FC
		   0x010ED824:  000050E3     CMPS r0, r0, 0x0
		   0x010ED828:  3000000A     BEQ $+0xc8  // if (==) goto 0x010ED8F0
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010ED82C:  000055E3     CMPS r0, r5, 0x0
		   0x010ED830:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED838
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010ED834:  E5B6F9EB     BL $-0x192464
		   // ──── Block 11 if (!=) ────────────────────
		   0x010ED838:  287095E5     LDR r7, [r5, 0x28]
		   0x010ED83C:  000057E3     CMPS r0, r7, 0x0
		   0x010ED840:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED848
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010ED844:  E1B6F9EB     BL $-0x192474
		   // ──── Block 13 if (!=) ────────────────────
		   0x010ED848:  086094E5     LDR r6, [r4, 0x8]
		   0x010ED84C:  000056E3     CMPS r0, r6, 0x0
		   0x010ED850:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED858
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010ED854:  DDB6F9EB     BL $-0x192484
		   // ──── Block 15 if (!=) ────────────────────
		   0x010ED858:  100096E5     LDR r0, [r6, 0x10]
		   0x010ED85C:  0C1097E5     LDR r1, [r7, 0xc]
		   0x010ED860:  000051E1     CMPS r0, r1, r0
		   0x010ED864:  360000DA     BLE $+0xe0  // if (<=) goto 0x010ED944
		   // 
		   // ──── Block 16 else (>) ────────────────────
		   0x010ED868:  087094E5     LDR r7, [r4, 0x8]
		   0x010ED86C:  285095E5     LDR r5, [r5, 0x28]
		   0x010ED870:  000057E3     CMPS r0, r7, 0x0
		   0x010ED874:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED87C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010ED878:  D4B6F9EB     BL $-0x1924a8
		   // ──── Block 18 if (!=) ────────────────────
		   0x010ED87C:  107097E5     LDR r7, [r7, 0x10]
		   0x010ED880:  000055E3     CMPS r0, r5, 0x0
		   0x010ED884:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED88C
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010ED888:  D0B6F9EB     BL $-0x1924b8
		   // ──── Block 20 if (!=) ────────────────────
		   0x010ED88C:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010ED890:  070050E1     CMPS r0, r0, r7
		   0x010ED894:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010ED89C
		   // 
		   // ──── Block 21 else (<= (unsigned)) ────────────────────
		   0x010ED898:  CDB6F9EB     BL $-0x1924c4
		   // ──── Block 22 if (> (unsigned)) ────────────────────
		   0x010ED89C:  000098E5     LDR r0, [r8]
		   0x010ED8A0:  071185E0     ADD r1, r5, r7, lsl 2
		   0x010ED8A4:  105091E5     LDR r5, [r1, 0x10]
		   0x010ED8A8:  741090E5     LDR r1, [r0, 0x74]
		   0x010ED8AC:  000051E3     CMPS r0, r1, 0x0
		   0x010ED8B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED8B8
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010ED8B4:  76B6F9EB     BL $-0x192620
		   // ──── Block 24 if (!=) ────────────────────
		   0x010ED8B8:  0500A0E1     MOV r0, r5
		   0x010ED8BC:  0010A0E3     MOV r1, 0x0
		   0x010ED8C0:  4D2A3CEB     BL $+0xf0a93c  // CALL → sub_1FF81FC
		   0x010ED8C4:  000050E3     CMPS r0, r0, 0x0
		   0x010ED8C8:  3A00000A     BEQ $+0xf0  // if (==) goto 0x010ED9B8
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x010ED8CC:  000055E3     CMPS r0, r5, 0x0
		   0x010ED8D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED8D8
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010ED8D4:  BDB6F9EB     BL $-0x192504
		   // ──── Block 27 if (!=) ────────────────────
		   0x010ED8D8:  184095E5     LDR r4, [r5, 0x18]
		   0x010ED8DC:  000054E3     CMPS r0, r4, 0x0
		   0x010ED8E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED8E8
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010ED8E4:  B9B6F9EB     BL $-0x192514
		   // ──── Block 29 if (!=) ────────────────────
		   0x010ED8E8:  4C4094E5     LDR r4, [r4, 0x4c]
		   0x010ED8EC:  5E0000EA     B $+0x180  // goto 0x010EDA6C
		   // ──── Block 30 if (==) ────────────────────
		   0x010ED8F0:  084094E5     LDR r4, [r4, 0x8]
		   0x010ED8F4:  000054E3     CMPS r0, r4, 0x0
		   0x010ED8F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED900
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010ED8FC:  B3B6F9EB     BL $-0x19252c
		   // ──── Block 32 if (!=) ────────────────────
		   0x010ED900:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010ED904:  000054E3     CMPS r0, r4, 0x0
		   0x010ED908:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED910
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010ED90C:  AFB6F9EB     BL $-0x19253c
		   // ──── Block 34 if (!=) ────────────────────
		   0x010ED910:  000094E5     LDR r0, [r4]
		   0x010ED914:  D82DC0E1     LDRD r2, r3, [r0, 0xd8]
		   0x010ED918:  0400A0E1     MOV r0, r4
		   0x010ED91C:  0310A0E1     MOV r1, r3
		   0x010ED920:  32FF2FE1     BLX r2
		   0x010ED924:  0010A0E1     MOV r1, r0
		   0x010ED928:  84019FE5     LDR r0, [pc, 0x184]
		   0x010ED92C:  0020A0E3     MOV r2, 0x0
		   0x010ED930:  0040A0E3     MOV r4, 0x0
		   0x010ED934:  00009FE7     LDR r0, [pc, r0]
		   0x010ED938:  000090E5     LDR r0, [r0]
		   0x010ED93C:  7F6F76EB     BL $+0x1d9be04  // CALL → String.Concat
		   0x010ED940:  3D0000EA     B $+0xfc  // goto 0x010EDA3C
		   // ──── Block 35 if (<=) ────────────────────
		   0x010ED944:  085094E5     LDR r5, [r4, 0x8]
		   0x010ED948:  000055E3     CMPS r0, r5, 0x0
		   0x010ED94C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED954
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010ED950:  9EB6F9EB     BL $-0x192580
		   // ──── Block 37 if (!=) ────────────────────
		   0x010ED954:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010ED958:  000055E3     CMPS r0, r5, 0x0
		   0x010ED95C:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED964
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x010ED960:  9AB6F9EB     BL $-0x192590
		   // ──── Block 39 if (!=) ────────────────────
		   0x010ED964:  000095E5     LDR r0, [r5]
		   0x010ED968:  D82DC0E1     LDRD r2, r3, [r0, 0xd8]
		   0x010ED96C:  0500A0E1     MOV r0, r5
		   0x010ED970:  0310A0E1     MOV r1, r3
		   0x010ED974:  32FF2FE1     BLX r2
		   0x010ED978:  084094E5     LDR r4, [r4, 0x8]
		   0x010ED97C:  0050A0E1     MOV r5, r0
		   0x010ED980:  000054E3     CMPS r0, r4, 0x0
		   0x010ED984:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED98C
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x010ED988:  90B6F9EB     BL $-0x1925b8
		   // ──── Block 41 if (!=) ────────────────────
		   0x010ED98C:  101094E5     LDR r1, [r4, 0x10]
		   0x010ED990:  24019FE5     LDR r0, [pc, 0x124]
		   0x010ED994:  00009FE7     LDR r0, [pc, r0]
		   0x010ED998:  04108DE5     STR r1, [sp, 0x4]
		   0x010ED99C:  04108DE2     ADD r1, sp, 0x4
		   0x010ED9A0:  240090E5     LDR r0, [r0, 0x24]
		   0x010ED9A4:  3CB6F9EB     BL $-0x192708
		   0x010ED9A8:  0020A0E1     MOV r2, r0
		   0x010ED9AC:  0C019FE5     LDR r0, [pc, 0x10c]
		   0x010ED9B0:  00009FE7     LDR r0, [pc, r0]
		   0x010ED9B4:  1B0000EA     B $+0x74  // goto 0x010EDA28
		   // ──── Block 42 if (==) ────────────────────
		   0x010ED9B8:  085094E5     LDR r5, [r4, 0x8]
		   0x010ED9BC:  000055E3     CMPS r0, r5, 0x0
		   0x010ED9C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED9C8
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x010ED9C4:  81B6F9EB     BL $-0x1925f4
		   // ──── Block 44 if (!=) ────────────────────
		   0x010ED9C8:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010ED9CC:  000055E3     CMPS r0, r5, 0x0
		   0x010ED9D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010ED9D8
		   // 
		   // ──── Block 45 else (==) ────────────────────
		   0x010ED9D4:  7DB6F9EB     BL $-0x192604
		   // ──── Block 46 if (!=) ────────────────────
		   0x010ED9D8:  000095E5     LDR r0, [r5]
		   0x010ED9DC:  D82DC0E1     LDRD r2, r3, [r0, 0xd8]
		   0x010ED9E0:  0500A0E1     MOV r0, r5
		   0x010ED9E4:  0310A0E1     MOV r1, r3
		   0x010ED9E8:  32FF2FE1     BLX r2
		   0x010ED9EC:  084094E5     LDR r4, [r4, 0x8]
		   0x010ED9F0:  0050A0E1     MOV r5, r0
		   0x010ED9F4:  000054E3     CMPS r0, r4, 0x0
		   0x010ED9F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDA00
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x010ED9FC:  73B6F9EB     BL $-0x19262c
		   // ──── Block 48 if (!=) ────────────────────
		   0x010EDA00:  101094E5     LDR r1, [r4, 0x10]
		   0x010EDA04:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010EDA08:  00009FE7     LDR r0, [pc, r0]
		   0x010EDA0C:  00108DE5     STR r1, [sp]
		   0x010EDA10:  0D10A0E1     MOV r1, sp
		   0x010EDA14:  240090E5     LDR r0, [r0, 0x24]
		   0x010EDA18:  1FB6F9EB     BL $-0x19277c
		   0x010EDA1C:  0020A0E1     MOV r2, r0
		   0x010EDA20:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010EDA24:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 49 ──────────────────────────────
		   0x010EDA28:  000090E5     LDR r0, [r0]
		   0x010EDA2C:  0510A0E1     MOV r1, r5
		   0x010EDA30:  0030A0E3     MOV r3, 0x0
		   0x010EDA34:  0040A0E3     MOV r4, 0x0
		   0x010EDA38:  F1B076EB     BL $+0x1dac3cc  // CALL → String.Format
		   // ──── Block 50 ──────────────────────────────
		   0x010EDA3C:  0050A0E1     MOV r5, r0
		   0x010EDA40:  70009FE5     LDR r0, [pc, 0x70]
		   0x010EDA44:  00009FE7     LDR r0, [pc, r0]
		   0x010EDA48:  000090E5     LDR r0, [r0]
		   0x010EDA4C:  741090E5     LDR r1, [r0, 0x74]
		   0x010EDA50:  000051E3     CMPS r0, r1, 0x0
		   0x010EDA54:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDA5C
		   // 
		   // ──── Block 51 else (==) ────────────────────
		   0x010EDA58:  0DB6F9EB     BL $-0x1927c4
		   // ──── Block 52 if (!=) ────────────────────
		   0x010EDA5C:  1600A0E3     MOV r0, 0x16
		   0x010EDA60:  0510A0E1     MOV r1, r5
		   0x010EDA64:  0020A0E3     MOV r2, 0x0
		   0x010EDA68:  E9B310EB     BL $+0x42cfac  // CALL → DebugEx.LogException
		   // ──── Block 53 ──────────────────────────────
		   0x010EDA6C:  0400A0E1     MOV r0, r4
		   0x010EDA70:  08D08DE2     ADD sp, sp, 0x8
		   0x010EDA74:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010EDA78:  E5E51303     TSTSEQ lr, r3, 0x39400000
		   0x010EDA7C:  A4A0F802     RSCSEQ r10, r8, 0xa4
		   0x010EDA80:  C0B8F802     RSCSEQ fp, r8, 0xc00000
		   0x010EDA84:  1C8EF802     RSCSEQ r8, r8, 0x1c0
		   0x010EDA88:  ACB8F802     RSCSEQ fp, r8, 0xac0000
		   0x010EDA8C:  10BDF802     RSCSEQ fp, r8, 0x400
		   0x010EDA90:  08BDF802     RSCSEQ fp, r8, 0x200
		   0x010EDA94:  00BDF802     RSCSEQ fp, r8, 0x0
		   0x010EDA98:  F8BCF802     RSCSEQ fp, r8, 0xf800
		   0x010EDA9C:  F0BCF802     RSCSEQ fp, r8, 0xf000
		   0x010EDAA0:  D0BCF802     RSCSEQ fp, r8, 0xd000
		   0x010EDAA4:  34B8F802     RSCSEQ fp, r8, 0x340000
		   0x010EDAA8:  80BCF802     RSCSEQ fp, r8, 0x8000
		   0x010EDAAC:  E8B7F802     RSCSEQ fp, r8, 0x3a00000
		   0x010EDAB0:  388DF802     RSCSEQ r8, r8, 0xe00
		   0x010EDAB4:  1CBBF802     RSCSEQ fp, r8, 0x7000
		   0x010EDAB8:  649DF802     RSCSEQ sb, r8, 0x1900
		   0x010EDABC:  2C8DF802     RSCSEQ r8, r8, 0xb00
		   0x010EDAC0:  A4BAF802     RSCSEQ fp, r8, 0xa4000
		   0x010EDAC4:  B88CF802     RSCSEQ r8, r8, 0xb800
		   0x010EDAC8:  28BAF802     RSCSEQ fp, r8, 0x28000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10EDACC Offset: 0x10EDACC VA: 0x10EDACC
	private bool <GetNextLevelGoalsProgressFlashSale>b__153_0(Level l) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EDACC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EDAD0:  0140A0E1     MOV r4, r1
		   0x010EDAD4:  000051E3     CMPS r0, r1, 0x0
		   0x010EDAD8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDAE0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EDADC:  3BB6F9EB     BL $-0x19270c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EDAE0:  1DB6FFEB     BL $-0x12784
		   0x010EDAE4:  0050A0E1     MOV r5, r0
		   0x010EDAE8:  000050E3     CMPS r0, r0, 0x0
		   0x010EDAEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDAF4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EDAF0:  36B6F9EB     BL $-0x192720
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EDAF4:  2C1095E5     LDR r1, [r5, 0x2c]
		   0x010EDAF8:  2C0084E2     ADD r0, r4, 0x2c
		   0x010EDAFC:  0020A0E3     MOV r2, 0x0
		   0x010EDB00:  011081E2     ADD r1, r1, 0x1
		   0x010EDB04:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EDB08:  3F5A7DEA     B $+0x1f56904  // TAIL CALL → Int32.Equals
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10EDB0C Offset: 0x10EDB0C VA: 0x10EDB0C
	private int <Init>b__158_0() {
		/* Disassembly (ARM32, 89 instructions, 0x164 bytes):
		   // CFG: 16 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EDB0C:  4DB6FFEA     B $-0x126c4
		   0x010EDB10:  10402DE9     PUSH {r4, lr}
		   0x010EDB14:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x010EDB18:  04408FE0     ADD r4, pc, r4
		   0x010EDB1C:  0000D4E5     LDRB r0, [r4]
		   0x010EDB20:  000050E3     CMPS r0, r0, 0x0
		   0x010EDB24:  0400001A     BNE $+0x18  // if (!=) goto 0x010EDB3C
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x010EDB28:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010EDB2C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDB30:  8AB5F9EB     BL $-0x1929d0
		   0x010EDB34:  0100A0E3     MOV r0, 0x1
		   0x010EDB38:  0000C4E5     STRB r0, [r4]
		   // ──── Block 3 if (!=) ────────────────────
		   0x010EDB3C:  2C409FE5     LDR r4, [pc, 0x2c]
		   0x010EDB40:  04409FE7     LDR r4, [pc, r4]
		   0x010EDB44:  000094E5     LDR r0, [r4]
		   0x010EDB48:  741090E5     LDR r1, [r0, 0x74]
		   0x010EDB4C:  000051E3     CMPS r0, r1, 0x0
		   0x010EDB50:  0100001A     BNE $+0xc  // if (!=) goto 0x010EDB5C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010EDB54:  CEB5F9EB     BL $-0x1928c0
		   0x010EDB58:  000094E5     LDR r0, [r4]
		   // ──── Block 5 if (!=) ────────────────────
		   0x010EDB5C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EDB60:  040090E5     LDR r0, [r0, 0x4]
		   0x010EDB64:  1080BDE8     POP {r4, pc}
		   0x010EDB68:  CAE11303     TSTSEQ lr, r3, 0x80000032
		   0x010EDB6C:  34B8F802     RSCSEQ fp, r8, 0x340000
		   0x010EDB70:  20B8F802     RSCSEQ fp, r8, 0x200000
		   0x010EDB74:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010EDB78:  D8709FE5     LDR r7, [pc, 0xd8]
		   0x010EDB7C:  0050A0E1     MOV r5, r0
		   0x010EDB80:  0260A0E1     MOV r6, r2
		   0x010EDB84:  0140A0E1     MOV r4, r1
		   0x010EDB88:  07708FE0     ADD r7, pc, r7
		   0x010EDB8C:  0000D7E5     LDRB r0, [r7]
		   0x010EDB90:  000050E3     CMPS r0, r0, 0x0
		   0x010EDB94:  0700001A     BNE $+0x24  // if (!=) goto 0x010EDBB8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EDB98:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010EDB9C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDBA0:  6EB5F9EB     BL $-0x192a40
		   0x010EDBA4:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010EDBA8:  00009FE7     LDR r0, [pc, r0]
		   0x010EDBAC:  6BB5F9EB     BL $-0x192a4c
		   0x010EDBB0:  0100A0E3     MOV r0, 0x1
		   0x010EDBB4:  0000C7E5     STRB r0, [r7]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EDBB8:  000056E3     CMPS r0, r6, 0x0
		   0x010EDBBC:  1200001A     BNE $+0x50  // if (!=) goto 0x010EDC0C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EDBC0:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010EDBC4:  00009FE7     LDR r0, [pc, r0]
		   0x010EDBC8:  000090E5     LDR r0, [r0]
		   0x010EDBCC:  741090E5     LDR r1, [r0, 0x74]
		   0x010EDBD0:  000051E3     CMPS r0, r1, 0x0
		   0x010EDBD4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDBDC
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EDBD8:  ADB5F9EB     BL $-0x192944
		   // ──── Block 11 if (!=) ────────────────────
		   0x010EDBDC:  0000A0E3     MOV r0, 0x0
		   0x010EDBE0:  324B7BEB     BL $+0x1ed2cd0  // CALL → CultureInfo.get_InvariantCulture
		   0x010EDBE4:  0060A0E1     MOV r6, r0
		   0x010EDBE8:  000050E3     CMPS r0, r0, 0x0
		   0x010EDBEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDBF4
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010EDBF0:  F6B5F9EB     BL $-0x192820
		   // ──── Block 13 if (!=) ────────────────────
		   0x010EDBF4:  000096E5     LDR r0, [r6]
		   0x010EDBF8:  382190E5     LDR r2, [r0, 0x138]
		   0x010EDBFC:  3C1190E5     LDR r1, [r0, 0x13c]
		   0x010EDC00:  0600A0E1     MOV r0, r6
		   0x010EDC04:  32FF2FE1     BLX r2  // virtual call: vtable+0x138
		   0x010EDC08:  0060A0E1     MOV r6, r0
		   // ──── Block 14 if (!=) ────────────────────
		   0x010EDC0C:  0500A0E1     MOV r0, r5
		   0x010EDC10:  0410A0E1     MOV r1, r4
		   0x010EDC14:  0620A0E1     MOV r2, r6
		   0x010EDC18:  0030A0E3     MOV r3, 0x0
		   0x010EDC1C:  905A7DEB     BL $+0x1f56a48  // CALL → Int32.ToString
		   0x010EDC20:  0070A0E1     MOV r7, r0
		   0x010EDC24:  040085E2     ADD r0, r5, 0x4
		   0x010EDC28:  0410A0E1     MOV r1, r4
		   0x010EDC2C:  0620A0E1     MOV r2, r6
		   0x010EDC30:  0030A0E3     MOV r3, 0x0
		   0x010EDC34:  8A5A7DEB     BL $+0x1f56a30  // CALL → Int32.ToString
		   0x010EDC38:  0020A0E1     MOV r2, r0
		   0x010EDC3C:  24009FE5     LDR r0, [pc, 0x24]
		   0x010EDC40:  0710A0E1     MOV r1, r7
		   0x010EDC44:  0030A0E3     MOV r3, 0x0
		   0x010EDC48:  00009FE7     LDR r0, [pc, r0]
		   0x010EDC4C:  000090E5     LDR r0, [r0]
		   0x010EDC50:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010EDC54:  6AB076EA     B $+0x1dac1b0  // TAIL CALL → String.Format
		   0x010EDC58:  57E11303     TSTSEQ lr, r3, 0xc0000015
		   0x010EDC5C:  1094F802     RSCSEQ sb, r8, 0x10000000
		   0x010EDC60:  B0B8F802     RSCSEQ fp, r8, 0xb00000
		   0x010EDC64:  E893F802     RSCSEQ sb, r8, 0xa0000003
		   0x010EDC68:  10B8F802     RSCSEQ fp, r8, 0x100000
		   0x010EDC6C:  D4D4D4D4     LDRBLE sp, [r4], 0x4d4
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10EC378 Offset: 0x10EC378 VA: 0x10EC378
	internal static void <ItemsDuplicateCheck>g__Check|162_0(GameStateSave gameSaveValue, List<ItemDataSave> baseList, bool isField) {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EC378:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EC37C:  4CD04DE2     SUB sp, sp, 0x4c
		   0x010EC380:  00208DE5     STR r2, [sp]
		   0x010EC384:  0050A0E1     MOV r5, r0
		   0x010EC388:  08679FE5     LDR r6, [pc, 0x708]
		   0x010EC38C:  0140A0E1     MOV r4, r1
		   0x010EC390:  06608FE0     ADD r6, pc, r6
		   0x010EC394:  0000D6E5     LDRB r0, [r6]
		   0x010EC398:  000050E3     CMPS r0, r0, 0x0
		   0x010EC39C:  3100001A     BNE $+0xcc
		   0x010EC3A0:  F4069FE5     LDR r0, [pc, 0x6f4]
		   0x010EC3A4:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3A8:  6CBBF9EB     BL $-0x191248
		   0x010EC3AC:  EC069FE5     LDR r0, [pc, 0x6ec]
		   0x010EC3B0:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3B4:  69BBF9EB     BL $-0x191254
		   0x010EC3B8:  E4069FE5     LDR r0, [pc, 0x6e4]
		   0x010EC3BC:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3C0:  66BBF9EB     BL $-0x191260
		   0x010EC3C4:  DC069FE5     LDR r0, [pc, 0x6dc]
		   0x010EC3C8:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3CC:  63BBF9EB     BL $-0x19126c
		   0x010EC3D0:  D4069FE5     LDR r0, [pc, 0x6d4]
		   0x010EC3D4:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3D8:  60BBF9EB     BL $-0x191278
		   0x010EC3DC:  CC069FE5     LDR r0, [pc, 0x6cc]
		   0x010EC3E0:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3E4:  5DBBF9EB     BL $-0x191284
		   0x010EC3E8:  C4069FE5     LDR r0, [pc, 0x6c4]
		   0x010EC3EC:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3F0:  5ABBF9EB     BL $-0x191290
		   0x010EC3F4:  BC069FE5     LDR r0, [pc, 0x6bc]
		   0x010EC3F8:  00009FE7     LDR r0, [pc, r0]
		   0x010EC3FC:  57BBF9EB     BL $-0x19129c
		   0x010EC400:  B4069FE5     LDR r0, [pc, 0x6b4]
		   0x010EC404:  00009FE7     LDR r0, [pc, r0]
		   0x010EC408:  54BBF9EB     BL $-0x1912a8
		   0x010EC40C:  AC069FE5     LDR r0, [pc, 0x6ac]
		   0x010EC410:  00009FE7     LDR r0, [pc, r0]
		   0x010EC414:  51BBF9EB     BL $-0x1912b4
		   0x010EC418:  A4069FE5     LDR r0, [pc, 0x6a4]
		   0x010EC41C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC420:  4EBBF9EB     BL $-0x1912c0
		   0x010EC424:  9C069FE5     LDR r0, [pc, 0x69c]
		   0x010EC428:  00009FE7     LDR r0, [pc, r0]
		   0x010EC42C:  4BBBF9EB     BL $-0x1912cc
		   0x010EC430:  94069FE5     LDR r0, [pc, 0x694]
		   0x010EC434:  00009FE7     LDR r0, [pc, r0]
		   0x010EC438:  48BBF9EB     BL $-0x1912d8
		   0x010EC43C:  8C069FE5     LDR r0, [pc, 0x68c]
		   0x010EC440:  00009FE7     LDR r0, [pc, r0]
		   0x010EC444:  45BBF9EB     BL $-0x1912e4
		   0x010EC448:  84069FE5     LDR r0, [pc, 0x684]
		   0x010EC44C:  00009FE7     LDR r0, [pc, r0]
		   0x010EC450:  42BBF9EB     BL $-0x1912f0
		   0x010EC454:  7C069FE5     LDR r0, [pc, 0x67c]
		   0x010EC458:  00009FE7     LDR r0, [pc, r0]
		   0x010EC45C:  3FBBF9EB     BL $-0x1912fc
		   0x010EC460:  0100A0E3     MOV r0, 0x1
		   0x010EC464:  0000C6E5     STRB r0, [r6]
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
private class FieldStateException : Exception // TypeDefIndex: 1175
{

	// Fields
	[CompilerGenerated]
	private readonly string <Message>k__BackingField; // 0x48

	// Properties
	public override string Message { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10EDC70 Offset: 0x10EDC70 VA: 0x10EDC70 Slot: 5
	public override string get_Message() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EDC70:  480090E5     LDR r0, [r0, 0x48]
		   0x010EDC74:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10EDC78 Offset: 0x10EDC78 VA: 0x10EDC78
	public void .ctor(string message) {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EDC78:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EDC7C:  58609FE5     LDR r6, [pc, 0x58]
		   0x010EDC80:  0050A0E1     MOV r5, r0
		   0x010EDC84:  0140A0E1     MOV r4, r1
		   0x010EDC88:  06608FE0     ADD r6, pc, r6
		   0x010EDC8C:  0000D6E5     LDRB r0, [r6]
		   0x010EDC90:  000050E3     CMPS r0, r0, 0x0
		   0x010EDC94:  0400001A     BNE $+0x18  // if (!=) goto 0x010EDCAC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EDC98:  40009FE5     LDR r0, [pc, 0x40]
		   0x010EDC9C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDCA0:  2EB5F9EB     BL $-0x192b40
		   0x010EDCA4:  0100A0E3     MOV r0, 0x1
		   0x010EDCA8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EDCAC:  30009FE5     LDR r0, [pc, 0x30]
		   0x010EDCB0:  00009FE7     LDR r0, [pc, r0]
		   0x010EDCB4:  000090E5     LDR r0, [r0]
		   0x010EDCB8:  741090E5     LDR r1, [r0, 0x74]
		   0x010EDCBC:  000051E3     CMPS r0, r1, 0x0
		   0x010EDCC0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDCC8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EDCC4:  72B5F9EB     BL $-0x192a30
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EDCC8:  0500A0E1     MOV r0, r5
		   0x010EDCCC:  0410A0E1     MOV r1, r4
		   0x010EDCD0:  0020A0E3     MOV r2, 0x0
		   0x010EDCD4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EDCD8:  D76C7EEA     B $+0x1f9b364  // TAIL CALL → Exception..ctor
		   0x010EDCDC:  5CE01303     TSTSEQ lr, r3, 0x5c
		   0x010EDCE0:  508CF802     RSCSEQ r8, r8, 0x5000
		   0x010EDCE4:  3C8CF802     RSCSEQ r8, r8, 0x3c00
		*/
	}

	// RVA: 0x10EDCE8 Offset: 0x10EDCE8 VA: 0x10EDCE8
	public void .ctor(string reason, Item blockedItem, ItemData itemData, GameStateSave gameSave, ItemDataSave key) {
		/* Disassembly (ARM32, 399 instructions, 0x63C bytes):
		   // CFG: 85 blocks, 84 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EDCE8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010EDCEC:  08D04DE2     SUB sp, sp, 0x8
		   0x010EDCF0:  A4659FE5     LDR r6, [pc, 0x5a4]
		   0x010EDCF4:  0080A0E1     MOV r8, r0
		   0x010EDCF8:  0350A0E1     MOV r5, r3
		   0x010EDCFC:  0270A0E1     MOV r7, r2
		   0x010EDD00:  06608FE0     ADD r6, pc, r6
		   0x010EDD04:  01A0A0E1     MOV r10, r1
		   0x010EDD08:  0000D6E5     LDRB r0, [r6]
		   0x010EDD0C:  000050E3     CMPS r0, r0, 0x0
		   0x010EDD10:  3100001A     BNE $+0xcc  // if (!=) goto 0x010EDDDC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EDD14:  84059FE5     LDR r0, [pc, 0x584]
		   0x010EDD18:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD1C:  0FB5F9EB     BL $-0x192bbc
		   0x010EDD20:  7C059FE5     LDR r0, [pc, 0x57c]
		   0x010EDD24:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD28:  0CB5F9EB     BL $-0x192bc8
		   0x010EDD2C:  74059FE5     LDR r0, [pc, 0x574]
		   0x010EDD30:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD34:  09B5F9EB     BL $-0x192bd4
		   0x010EDD38:  6C059FE5     LDR r0, [pc, 0x56c]
		   0x010EDD3C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD40:  06B5F9EB     BL $-0x192be0
		   0x010EDD44:  64059FE5     LDR r0, [pc, 0x564]
		   0x010EDD48:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD4C:  03B5F9EB     BL $-0x192bec
		   0x010EDD50:  5C059FE5     LDR r0, [pc, 0x55c]
		   0x010EDD54:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD58:  00B5F9EB     BL $-0x192bf8
		   0x010EDD5C:  54059FE5     LDR r0, [pc, 0x554]
		   0x010EDD60:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD64:  FDB4F9EB     BL $-0x192c04
		   0x010EDD68:  4C059FE5     LDR r0, [pc, 0x54c]
		   0x010EDD6C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD70:  FAB4F9EB     BL $-0x192c10
		   0x010EDD74:  44059FE5     LDR r0, [pc, 0x544]
		   0x010EDD78:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD7C:  F7B4F9EB     BL $-0x192c1c
		   0x010EDD80:  3C059FE5     LDR r0, [pc, 0x53c]
		   0x010EDD84:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD88:  F4B4F9EB     BL $-0x192c28
		   0x010EDD8C:  34059FE5     LDR r0, [pc, 0x534]
		   0x010EDD90:  00009FE7     LDR r0, [pc, r0]
		   0x010EDD94:  F1B4F9EB     BL $-0x192c34
		   0x010EDD98:  2C059FE5     LDR r0, [pc, 0x52c]
		   0x010EDD9C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDDA0:  EEB4F9EB     BL $-0x192c40
		   0x010EDDA4:  24059FE5     LDR r0, [pc, 0x524]
		   0x010EDDA8:  00009FE7     LDR r0, [pc, r0]
		   0x010EDDAC:  EBB4F9EB     BL $-0x192c4c
		   0x010EDDB0:  1C059FE5     LDR r0, [pc, 0x51c]
		   0x010EDDB4:  00009FE7     LDR r0, [pc, r0]
		   0x010EDDB8:  E8B4F9EB     BL $-0x192c58
		   0x010EDDBC:  14059FE5     LDR r0, [pc, 0x514]
		   0x010EDDC0:  00009FE7     LDR r0, [pc, r0]
		   0x010EDDC4:  E5B4F9EB     BL $-0x192c64
		   0x010EDDC8:  0C059FE5     LDR r0, [pc, 0x50c]
		   0x010EDDCC:  00009FE7     LDR r0, [pc, r0]
		   0x010EDDD0:  E2B4F9EB     BL $-0x192c70
		   0x010EDDD4:  0100A0E3     MOV r0, 0x1
		   0x010EDDD8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EDDDC:  FC049FE5     LDR r0, [pc, 0x4fc]
		   0x010EDDE0:  0020A0E3     MOV r2, 0x0
		   0x010EDDE4:  00009FE7     LDR r0, [pc, r0]
		   0x010EDDE8:  04208DE5     STR r2, [sp, 0x4]
		   0x010EDDEC:  000090E5     LDR r0, [r0]
		   0x010EDDF0:  741090E5     LDR r1, [r0, 0x74]
		   0x010EDDF4:  000051E3     CMPS r0, r1, 0x0
		   0x010EDDF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDE00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EDDFC:  24B5F9EB     BL $-0x192b68
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EDE00:  0800A0E1     MOV r0, r8
		   0x010EDE04:  0010A0E3     MOV r1, 0x0
		   0x010EDE08:  846C7EEB     BL $+0x1f9b218  // CALL → Exception..ctor
		   0x010EDE0C:  D0049FE5     LDR r0, [pc, 0x4d0]
		   0x010EDE10:  00009FE7     LDR r0, [pc, r0]
		   0x010EDE14:  000090E5     LDR r0, [r0]
		   0x010EDE18:  C8149FE5     LDR r1, [pc, 0x4c8]
		   0x010EDE1C:  01109FE7     LDR r1, [pc, r1]
		   0x010EDE20:  009091E5     LDR sb, [r1]
		   0x010EDE24:  741090E5     LDR r1, [r0, 0x74]
		   0x010EDE28:  000051E3     CMPS r0, r1, 0x0
		   0x010EDE2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDE34
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EDE30:  17B5F9EB     BL $-0x192b9c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EDE34:  0700A0E1     MOV r0, r7
		   0x010EDE38:  0010A0E3     MOV r1, 0x0
		   0x010EDE3C:  0020A0E3     MOV r2, 0x0
		   0x010EDE40:  4BDBFCEB     BL $-0xc92cc
		   0x010EDE44:  000050E3     CMPS r0, r0, 0x0
		   0x010EDE48:  5300000A     BEQ $+0x154  // if (==) goto 0x010EDF9C
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010EDE4C:  000057E3     CMPS r0, r7, 0x0
		   0x010EDE50:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDE58
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EDE54:  5DB5F9EB     BL $-0x192a84
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EDE58:  840097E5     LDR r0, [r7, 0x84]
		   0x010EDE5C:  000050E3     CMPS r0, r0, 0x0
		   0x010EDE60:  4D00000A     BEQ $+0x13c  // if (==) goto 0x010EDF9C
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010EDE64:  80049FE5     LDR r0, [pc, 0x480]
		   0x010EDE68:  0610A0E3     MOV r1, 0x6
		   0x010EDE6C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDE70:  000090E5     LDR r0, [r0]
		   0x010EDE74:  DCB4F9EB     BL $-0x192c88
		   0x010EDE78:  0060A0E1     MOV r6, r0
		   0x010EDE7C:  000050E3     CMPS r0, r0, 0x0
		   0x010EDE80:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDE88
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010EDE84:  51B5F9EB     BL $-0x192ab4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010EDE88:  60049FE5     LDR r0, [pc, 0x460]
		   0x010EDE8C:  00009FE7     LDR r0, [pc, r0]
		   0x010EDE90:  004090E5     LDR r4, [r0]
		   0x010EDE94:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010EDE98:  000050E3     CMPS r0, r0, 0x0
		   0x010EDE9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDEA4
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010EDEA0:  4BB5F9EB     BL $-0x192acc
		   // ──── Block 14 if (!=) ────────────────────
		   0x010EDEA4:  104086E5     STR r4, [r6, 0x10]
		   0x010EDEA8:  844097E5     LDR r4, [r7, 0x84]
		   0x010EDEAC:  000054E3     CMPS r0, r4, 0x0
		   0x010EDEB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDEB8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EDEB4:  45B5F9EB     BL $-0x192ae4
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EDEB8:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010EDEBC:  784094E5     LDR r4, [r4, 0x78]
		   0x010EDEC0:  010050E3     CMPS r0, r0, 0x1
		   0x010EDEC4:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EDED0
		   // 
		   // ──── Block 17 else (<= (unsigned)) ────────────────────
		   0x010EDEC8:  41B5F9EB     BL $-0x192af4
		   0x010EDECC:  0C0096E5     LDR r0, [r6, 0xc]
		   // ──── Block 18 if (> (unsigned)) ────────────────────
		   0x010EDED0:  144086E5     STR r4, [r6, 0x14]
		   0x010EDED4:  020050E3     CMPS r0, r0, 0x2
		   0x010EDED8:  14149FE5     LDR r1, [pc, 0x414]
		   0x010EDEDC:  01109FE7     LDR r1, [pc, r1]
		   0x010EDEE0:  004091E5     LDR r4, [r1]
		   0x010EDEE4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EDEEC
		   // 
		   // ──── Block 19 else (<= (unsigned)) ────────────────────
		   0x010EDEE8:  39B5F9EB     BL $-0x192b14
		   // ──── Block 20 if (> (unsigned)) ────────────────────
		   0x010EDEEC:  184086E5     STR r4, [r6, 0x18]
		   0x010EDEF0:  844097E5     LDR r4, [r7, 0x84]
		   0x010EDEF4:  000054E3     CMPS r0, r4, 0x0
		   0x010EDEF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDF00
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010EDEFC:  33B5F9EB     BL $-0x192b2c
		   // ──── Block 22 if (!=) ────────────────────
		   0x010EDF00:  084094E5     LDR r4, [r4, 0x8]
		   0x010EDF04:  000054E3     CMPS r0, r4, 0x0
		   0x010EDF08:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDF10
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010EDF0C:  2FB5F9EB     BL $-0x192b3c
		   // ──── Block 24 if (!=) ────────────────────
		   0x010EDF10:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010EDF14:  184094E5     LDR r4, [r4, 0x18]
		   0x010EDF18:  030050E3     CMPS r0, r0, 0x3
		   0x010EDF1C:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EDF28
		   // 
		   // ──── Block 25 else (<= (unsigned)) ────────────────────
		   0x010EDF20:  2BB5F9EB     BL $-0x192b4c
		   0x010EDF24:  0C0096E5     LDR r0, [r6, 0xc]
		   // ──── Block 26 if (> (unsigned)) ────────────────────
		   0x010EDF28:  1C4086E5     STR r4, [r6, 0x1c]
		   0x010EDF2C:  040050E3     CMPS r0, r0, 0x4
		   0x010EDF30:  C0139FE5     LDR r1, [pc, 0x3c0]
		   0x010EDF34:  01109FE7     LDR r1, [pc, r1]
		   0x010EDF38:  004091E5     LDR r4, [r1]
		   0x010EDF3C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EDF44
		   // 
		   // ──── Block 27 else (<= (unsigned)) ────────────────────
		   0x010EDF40:  23B5F9EB     BL $-0x192b6c
		   // ──── Block 28 if (> (unsigned)) ────────────────────
		   0x010EDF44:  204086E5     STR r4, [r6, 0x20]
		   0x010EDF48:  847097E5     LDR r7, [r7, 0x84]
		   0x010EDF4C:  000057E3     CMPS r0, r7, 0x0
		   0x010EDF50:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDF58
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010EDF54:  1DB5F9EB     BL $-0x192b84
		   // ──── Block 30 if (!=) ────────────────────
		   0x010EDF58:  0700A0E1     MOV r0, r7
		   0x010EDF5C:  0010A0E3     MOV r1, 0x0
		   0x010EDF60:  A06F00EB     BL $+0x1be88  // CALL → ItemData.get_Order
		   0x010EDF64:  04008DE5     STR r0, [sp, 0x4]
		   0x010EDF68:  04008DE2     ADD r0, sp, 0x4
		   0x010EDF6C:  0010A0E3     MOV r1, 0x0
		   0x010EDF70:  2C597DEB     BL $+0x1f564b8  // CALL → Int32.ToString
		   0x010EDF74:  0070A0E1     MOV r7, r0
		   0x010EDF78:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010EDF7C:  050050E3     CMPS r0, r0, 0x5
		   0x010EDF80:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EDF88
		   // 
		   // ──── Block 31 else (<= (unsigned)) ────────────────────
		   0x010EDF84:  12B5F9EB     BL $-0x192bb0
		   // ──── Block 32 if (> (unsigned)) ────────────────────
		   0x010EDF88:  0600A0E1     MOV r0, r6
		   0x010EDF8C:  0010A0E3     MOV r1, 0x0
		   0x010EDF90:  247086E5     STR r7, [r6, 0x24]
		   0x010EDF94:  BBAE76EB     BL $+0x1dabaf4  // CALL → String.Concat
		   0x010EDF98:  0090A0E1     MOV sb, r0
		   // ──── Block 33 (from 2 paths) ──────────────────
		   0x010EDF9C:  58039FE5     LDR r0, [pc, 0x358]
		   0x010EDFA0:  1210A0E3     MOV r1, 0x12
		   0x010EDFA4:  00009FE7     LDR r0, [pc, r0]
		   0x010EDFA8:  000090E5     LDR r0, [r0]
		   0x010EDFAC:  8EB4F9EB     BL $-0x192dc0
		   0x010EDFB0:  0070A0E1     MOV r7, r0
		   0x010EDFB4:  000050E3     CMPS r0, r0, 0x0
		   0x010EDFB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EDFC0
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x010EDFBC:  03B5F9EB     BL $-0x192bec
		   // ──── Block 35 if (!=) ────────────────────
		   0x010EDFC0:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EDFC4:  000050E3     CMPS r0, r0, 0x0
		   0x010EDFC8:  0100001A     BNE $+0xc  // if (!=) goto 0x010EDFD4
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010EDFCC:  00B5F9EB     BL $-0x192bf8
		   0x010EDFD0:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 37 if (!=) ────────────────────
		   0x010EDFD4:  10A087E5     STR r10, [r7, 0x10]
		   0x010EDFD8:  010050E3     CMPS r0, r0, 0x1
		   0x010EDFDC:  1C139FE5     LDR r1, [pc, 0x31c]
		   0x010EDFE0:  2C609DE5     LDR r6, [sp, 0x2c]
		   0x010EDFE4:  01109FE7     LDR r1, [pc, r1]
		   0x010EDFE8:  004091E5     LDR r4, [r1]
		   0x010EDFEC:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EDFF4
		   // 
		   // ──── Block 38 else (<= (unsigned)) ────────────────────
		   0x010EDFF0:  F7B4F9EB     BL $-0x192c1c
		   // ──── Block 39 if (> (unsigned)) ────────────────────
		   0x010EDFF4:  000056E3     CMPS r0, r6, 0x0
		   0x010EDFF8:  144087E5     STR r4, [r7, 0x14]
		   0x010EDFFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE004
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x010EE000:  F2B4F9EB     BL $-0x192c30
		   // ──── Block 41 if (!=) ────────────────────
		   0x010EE004:  280086E2     ADD r0, r6, 0x28
		   0x010EE008:  0010A0E3     MOV r1, 0x0
		   0x010EE00C:  0020A0E3     MOV r2, 0x0
		   0x010EE010:  0030A0E3     MOV r3, 0x0
		   0x010EE014:  D6FEFFEB     BL $-0x4a0
		   0x010EE018:  0040A0E1     MOV r4, r0
		   0x010EE01C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE020:  020050E3     CMPS r0, r0, 0x2
		   0x010EE024:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE030
		   // 
		   // ──── Block 42 else (<= (unsigned)) ────────────────────
		   0x010EE028:  E9B4F9EB     BL $-0x192c54
		   0x010EE02C:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 43 if (> (unsigned)) ────────────────────
		   0x010EE030:  184087E5     STR r4, [r7, 0x18]
		   0x010EE034:  030050E3     CMPS r0, r0, 0x3
		   0x010EE038:  C4129FE5     LDR r1, [pc, 0x2c4]
		   0x010EE03C:  01109FE7     LDR r1, [pc, r1]
		   0x010EE040:  004091E5     LDR r4, [r1]
		   0x010EE044:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE04C
		   // 
		   // ──── Block 44 else (<= (unsigned)) ────────────────────
		   0x010EE048:  E1B4F9EB     BL $-0x192c74
		   // ──── Block 45 if (> (unsigned)) ────────────────────
		   0x010EE04C:  000056E3     CMPS r0, r6, 0x0
		   0x010EE050:  1C4087E5     STR r4, [r7, 0x1c]
		   0x010EE054:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE05C
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x010EE058:  DCB4F9EB     BL $-0x192c88
		   // ──── Block 47 if (!=) ────────────────────
		   0x010EE05C:  080086E2     ADD r0, r6, 0x8
		   0x010EE060:  0010A0E3     MOV r1, 0x0
		   0x010EE064:  EF587DEB     BL $+0x1f563c4  // CALL → Int32.ToString
		   0x010EE068:  0040A0E1     MOV r4, r0
		   0x010EE06C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE070:  040050E3     CMPS r0, r0, 0x4
		   0x010EE074:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE080
		   // 
		   // ──── Block 48 else (<= (unsigned)) ────────────────────
		   0x010EE078:  D5B4F9EB     BL $-0x192ca4
		   0x010EE07C:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 49 if (> (unsigned)) ────────────────────
		   0x010EE080:  204087E5     STR r4, [r7, 0x20]
		   0x010EE084:  050050E3     CMPS r0, r0, 0x5
		   0x010EE088:  78129FE5     LDR r1, [pc, 0x278]
		   0x010EE08C:  01109FE7     LDR r1, [pc, r1]
		   0x010EE090:  004091E5     LDR r4, [r1]
		   0x010EE094:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE09C
		   // 
		   // ──── Block 50 else (<= (unsigned)) ────────────────────
		   0x010EE098:  CDB4F9EB     BL $-0x192cc4
		   // ──── Block 51 if (> (unsigned)) ────────────────────
		   0x010EE09C:  000055E3     CMPS r0, r5, 0x0
		   0x010EE0A0:  244087E5     STR r4, [r7, 0x24]
		   0x010EE0A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE0AC
		   // 
		   // ──── Block 52 else (==) ────────────────────
		   0x010EE0A8:  C8B4F9EB     BL $-0x192cd8
		   // ──── Block 53 if (!=) ────────────────────
		   0x010EE0AC:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE0B0:  784095E5     LDR r4, [r5, 0x78]
		   0x010EE0B4:  060050E3     CMPS r0, r0, 0x6
		   0x010EE0B8:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE0C4
		   // 
		   // ──── Block 54 else (<= (unsigned)) ────────────────────
		   0x010EE0BC:  C4B4F9EB     BL $-0x192ce8
		   0x010EE0C0:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 55 if (> (unsigned)) ────────────────────
		   0x010EE0C4:  284087E5     STR r4, [r7, 0x28]
		   0x010EE0C8:  070050E3     CMPS r0, r0, 0x7
		   0x010EE0CC:  38129FE5     LDR r1, [pc, 0x238]
		   0x010EE0D0:  01109FE7     LDR r1, [pc, r1]
		   0x010EE0D4:  004091E5     LDR r4, [r1]
		   0x010EE0D8:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE0E0
		   // 
		   // ──── Block 56 else (<= (unsigned)) ────────────────────
		   0x010EE0DC:  BCB4F9EB     BL $-0x192d08
		   // ──── Block 57 if (> (unsigned)) ────────────────────
		   0x010EE0E0:  2C4087E5     STR r4, [r7, 0x2c]
		   0x010EE0E4:  084095E5     LDR r4, [r5, 0x8]
		   0x010EE0E8:  000054E3     CMPS r0, r4, 0x0
		   0x010EE0EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE0F4
		   // 
		   // ──── Block 58 else (==) ────────────────────
		   0x010EE0F0:  B6B4F9EB     BL $-0x192d20
		   // ──── Block 59 if (!=) ────────────────────
		   0x010EE0F4:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE0F8:  184094E5     LDR r4, [r4, 0x18]
		   0x010EE0FC:  080050E3     CMPS r0, r0, 0x8
		   0x010EE100:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE10C
		   // 
		   // ──── Block 60 else (<= (unsigned)) ────────────────────
		   0x010EE104:  B2B4F9EB     BL $-0x192d30
		   0x010EE108:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 61 if (> (unsigned)) ────────────────────
		   0x010EE10C:  304087E5     STR r4, [r7, 0x30]
		   0x010EE110:  090050E3     CMPS r0, r0, 0x9
		   0x010EE114:  F4119FE5     LDR r1, [pc, 0x1f4]
		   0x010EE118:  01109FE7     LDR r1, [pc, r1]
		   0x010EE11C:  004091E5     LDR r4, [r1]
		   0x010EE120:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE128
		   // 
		   // ──── Block 62 else (<= (unsigned)) ────────────────────
		   0x010EE124:  AAB4F9EB     BL $-0x192d50
		   // ──── Block 63 if (> (unsigned)) ────────────────────
		   0x010EE128:  0500A0E1     MOV r0, r5
		   0x010EE12C:  0010A0E3     MOV r1, 0x0
		   0x010EE130:  344087E5     STR r4, [r7, 0x34]
		   0x010EE134:  2B6F00EB     BL $+0x1bcb4  // CALL → ItemData.get_Order
		   0x010EE138:  04008DE5     STR r0, [sp, 0x4]
		   0x010EE13C:  04008DE2     ADD r0, sp, 0x4
		   0x010EE140:  0010A0E3     MOV r1, 0x0
		   0x010EE144:  B7587DEB     BL $+0x1f562e4  // CALL → Int32.ToString
		   0x010EE148:  0040A0E1     MOV r4, r0
		   0x010EE14C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE150:  0A0050E3     CMPS r0, r0, 0xa
		   0x010EE154:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE160
		   // 
		   // ──── Block 64 else (<= (unsigned)) ────────────────────
		   0x010EE158:  9DB4F9EB     BL $-0x192d84
		   0x010EE15C:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 65 if (> (unsigned)) ────────────────────
		   0x010EE160:  384087E5     STR r4, [r7, 0x38]
		   0x010EE164:  0B0050E3     CMPS r0, r0, 0xb
		   0x010EE168:  A4119FE5     LDR r1, [pc, 0x1a4]
		   0x010EE16C:  28609DE5     LDR r6, [sp, 0x28]
		   0x010EE170:  01109FE7     LDR r1, [pc, r1]
		   0x010EE174:  004091E5     LDR r4, [r1]
		   0x010EE178:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE180
		   // 
		   // ──── Block 66 else (<= (unsigned)) ────────────────────
		   0x010EE17C:  94B4F9EB     BL $-0x192da8
		   // ──── Block 67 if (> (unsigned)) ────────────────────
		   0x010EE180:  000056E3     CMPS r0, r6, 0x0
		   0x010EE184:  3C4087E5     STR r4, [r7, 0x3c]
		   0x010EE188:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE190
		   // 
		   // ──── Block 68 else (==) ────────────────────
		   0x010EE18C:  8FB4F9EB     BL $-0x192dbc
		   // ──── Block 69 if (!=) ────────────────────
		   0x010EE190:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE194:  084096E5     LDR r4, [r6, 0x8]
		   0x010EE198:  0C0050E3     CMPS r0, r0, 0xc
		   0x010EE19C:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE1A8
		   // 
		   // ──── Block 70 else (<= (unsigned)) ────────────────────
		   0x010EE1A0:  8BB4F9EB     BL $-0x192dcc
		   0x010EE1A4:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 71 if (> (unsigned)) ────────────────────
		   0x010EE1A8:  404087E5     STR r4, [r7, 0x40]
		   0x010EE1AC:  0D0050E3     CMPS r0, r0, 0xd
		   0x010EE1B0:  60119FE5     LDR r1, [pc, 0x160]
		   0x010EE1B4:  01109FE7     LDR r1, [pc, r1]
		   0x010EE1B8:  004091E5     LDR r4, [r1]
		   0x010EE1BC:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE1C4
		   // 
		   // ──── Block 72 else (<= (unsigned)) ────────────────────
		   0x010EE1C0:  83B4F9EB     BL $-0x192dec
		   // ──── Block 73 if (> (unsigned)) ────────────────────
		   0x010EE1C4:  444087E5     STR r4, [r7, 0x44]
		   0x010EE1C8:  B04085E2     ADD r4, r5, 0xb0
		   0x010EE1CC:  48019FE5     LDR r0, [pc, 0x148]
		   0x010EE1D0:  00009FE7     LDR r0, [pc, r0]
		   0x010EE1D4:  000090E5     LDR r0, [r0]
		   0x010EE1D8:  741090E5     LDR r1, [r0, 0x74]
		   0x010EE1DC:  000051E3     CMPS r0, r1, 0x0
		   0x010EE1E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE1E8
		   // 
		   // ──── Block 74 else (==) ────────────────────
		   0x010EE1E4:  2AB4F9EB     BL $-0x192f50
		   // ──── Block 75 if (!=) ────────────────────
		   0x010EE1E8:  0400A0E1     MOV r0, r4
		   0x010EE1EC:  0010A0E3     MOV r1, 0x0
		   0x010EE1F0:  CD2910EB     BL $+0x40a73c  // CALL → FieldGroup.get_Type
		   0x010EE1F4:  04008DE5     STR r0, [sp, 0x4]
		   0x010EE1F8:  04008DE2     ADD r0, sp, 0x4
		   0x010EE1FC:  0010A0E3     MOV r1, 0x0
		   0x010EE200:  88587DEB     BL $+0x1f56228  // CALL → Int32.ToString
		   0x010EE204:  0050A0E1     MOV r5, r0
		   0x010EE208:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE20C:  0E0050E3     CMPS r0, r0, 0xe
		   0x010EE210:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE21C
		   // 
		   // ──── Block 76 else (<= (unsigned)) ────────────────────
		   0x010EE214:  6EB4F9EB     BL $-0x192e40
		   0x010EE218:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 77 if (> (unsigned)) ────────────────────
		   0x010EE21C:  485087E5     STR r5, [r7, 0x48]
		   0x010EE220:  0F0050E3     CMPS r0, r0, 0xf
		   0x010EE224:  F4109FE5     LDR r1, [pc, 0xf4]
		   0x010EE228:  01109FE7     LDR r1, [pc, r1]
		   0x010EE22C:  005091E5     LDR r5, [r1]
		   0x010EE230:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE238
		   // 
		   // ──── Block 78 else (<= (unsigned)) ────────────────────
		   0x010EE234:  66B4F9EB     BL $-0x192e60
		   // ──── Block 79 if (> (unsigned)) ────────────────────
		   0x010EE238:  0400A0E1     MOV r0, r4
		   0x010EE23C:  0010A0E3     MOV r1, 0x0
		   0x010EE240:  4C5087E5     STR r5, [r7, 0x4c]
		   0x010EE244:  CBD70FEB     BL $+0x3f5f34  // CALL → FieldGroup.get_Subtype
		   0x010EE248:  04008DE5     STR r0, [sp, 0x4]
		   0x010EE24C:  04008DE2     ADD r0, sp, 0x4
		   0x010EE250:  0010A0E3     MOV r1, 0x0
		   0x010EE254:  73587DEB     BL $+0x1f561d4  // CALL → Int32.ToString
		   0x010EE258:  0040A0E1     MOV r4, r0
		   0x010EE25C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x010EE260:  100050E3     CMPS r0, r0, 0x10
		   0x010EE264:  0100008A     BHI $+0xc  // if (> (unsigned)) goto 0x010EE270
		   // 
		   // ──── Block 80 else (<= (unsigned)) ────────────────────
		   0x010EE268:  59B4F9EB     BL $-0x192e94
		   0x010EE26C:  0C0097E5     LDR r0, [r7, 0xc]
		   // ──── Block 81 if (> (unsigned)) ────────────────────
		   0x010EE270:  110050E3     CMPS r0, r0, 0x11
		   0x010EE274:  504087E5     STR r4, [r7, 0x50]
		   0x010EE278:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010EE280
		   // 
		   // ──── Block 82 else (<= (unsigned)) ────────────────────
		   0x010EE27C:  54B4F9EB     BL $-0x192ea8
		   // ──── Block 83 if (> (unsigned)) ────────────────────
		   0x010EE280:  0700A0E1     MOV r0, r7
		   0x010EE284:  0010A0E3     MOV r1, 0x0
		   0x010EE288:  549087E5     STR sb, [r7, 0x54]
		   0x010EE28C:  FDAD76EB     BL $+0x1dab7fc  // CALL → String.Concat
		   0x010EE290:  480088E5     STR r0, [r8, 0x48]
		   0x010EE294:  08D08DE2     ADD sp, sp, 0x8
		   0x010EE298:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010EE29C:  E5DF1303     TSTSEQ sp, r3, 0x394
		   0x010EE2A0:  D48BF802     RSCSEQ r8, r8, 0x35000
		   0x010EE2A4:  BCA7F802     RSCSEQ r10, r8, 0x2f00000
		   0x010EE2A8:  0888F802     RSCSEQ r8, r8, 0x80000
		   0x010EE2AC:  C48DF802     RSCSEQ r8, r8, 0x3100
		   0x010EE2B0:  14B7F802     RSCSEQ fp, r8, 0x500000
		   0x010EE2B4:  0CB7F802     RSCSEQ fp, r8, 0x300000
		   0x010EE2B8:  04B7F802     RSCSEQ fp, r8, 0x100000
		   0x010EE2BC:  FCB6F802     RSCSEQ fp, r8, 0xfc00000
		   0x010EE2C0:  F4B6F802     RSCSEQ fp, r8, 0xf400000
		   0x010EE2C4:  90B6F802     RSCSEQ fp, r8, 0x9000000
		   0x010EE2C8:  E0B6F802     RSCSEQ fp, r8, 0xe000000
		   0x010EE2CC:  D8B6F802     RSCSEQ fp, r8, 0xd800000
		   0x010EE2D0:  D0B6F802     RSCSEQ fp, r8, 0xd000000
		   0x010EE2D4:  8C8CF802     RSCSEQ r8, r8, 0x8c00
		   0x010EE2D8:  BCB6F802     RSCSEQ fp, r8, 0xbc00000
		   0x010EE2DC:  B4B6F802     RSCSEQ fp, r8, 0xb400000
		   0x010EE2E0:  088BF802     RSCSEQ r8, r8, 0x2000
		   0x010EE2E4:  2887F802     RSCSEQ r8, r8, 0xa00000
		   0x010EE2E8:  248CF802     RSCSEQ r8, r8, 0x2400
		   0x010EE2EC:  948CF802     RSCSEQ r8, r8, 0x9400
		   0x010EE2F0:  D4B5F802     RSCSEQ fp, r8, 0x35000000
		   0x010EE2F4:  98B5F802     RSCSEQ fp, r8, 0x26000000
		   0x010EE2F8:  28B5F802     RSCSEQ fp, r8, 0xa000000
		   0x010EE2FC:  5C8BF802     RSCSEQ r8, r8, 0x17000
		   0x010EE300:  84B4F802     RSCSEQ fp, r8, 0x84000000
		   0x010EE304:  28B4F802     RSCSEQ fp, r8, 0x28000000
		   0x010EE308:  F4B3F802     RSCSEQ fp, r8, 0xd0000003
		   0x010EE30C:  ACB3F802     RSCSEQ fp, r8, 0xb0000002
		   0x010EE310:  FCB2F802     RSCSEQ fp, r8, 0xc000000f
		   0x010EE314:  08B3F802     RSCSEQ fp, r8, 0x20000000
		   0x010EE318:  BCB2F802     RSCSEQ fp, r8, 0xc000000b
		   0x010EE31C:  10A3F802     RSCSEQ r10, r8, 0x40000000
		   0x010EE320:  44B2F802     RSCSEQ fp, r8, 0x40000004
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1176
{

	// Fields
	public static readonly GameState.<>c <>9; // 0x0
	public static Func<Cell, bool> <>9__73_0; // 0x4
	public static Func<ItemData, int> <>9__82_2; // 0x8
	public static Func<ItemData, int> <>9__82_3; // 0xC
	public static Comparison<ItemDataSave> <>9__86_0; // 0x10
	public static Predicate<ChainObject> <>9__96_5; // 0x14
	public static Predicate<ItemObject> <>9__98_0; // 0x18
	public static Predicate<Item> <>9__103_0; // 0x1C
	public static Func<Cell, bool> <>9__107_0; // 0x20
	public static Func<Cell, bool> <>9__107_1; // 0x24
	public static Func<Cell, int> <>9__107_2; // 0x28
	public static Func<Cell, bool> <>9__138_0; // 0x2C
	public static Predicate<Item> <>9__146_0; // 0x30
	public static Predicate<Item> <>9__147_0; // 0x34
	public static Predicate<Item> <>9__147_1; // 0x38
	public static Func<Goal, Goal> <>9__151_0; // 0x3C
	public static Func<Goal, Goal> <>9__153_1; // 0x40
	public static Func<Item, bool> <>9__164_0; // 0x44

	// Methods

	// RVA: 0x10EE324 Offset: 0x10EE324 VA: 0x10EE324
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE324:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EE328:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x010EE32C:  04408FE0     ADD r4, pc, r4
		   0x010EE330:  0000D4E5     LDRB r0, [r4]
		   0x010EE334:  000050E3     CMPS r0, r0, 0x0
		   0x010EE338:  0400001A     BNE $+0x18  // if (!=) goto 0x010EE350
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE33C:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010EE340:  00009FE7     LDR r0, [pc, r0]
		   0x010EE344:  85B3F9EB     BL $-0x1931e4
		   0x010EE348:  0100A0E3     MOV r0, 0x1
		   0x010EE34C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE350:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x010EE354:  05509FE7     LDR r5, [pc, r5]
		   0x010EE358:  000095E5     LDR r0, [r5]
		   0x010EE35C:  18B4F9EB     BL $-0x192f98
		   0x010EE360:  0010A0E3     MOV r1, 0x0
		   0x010EE364:  0040A0E1     MOV r4, r0
		   0x010EE368:  1F9C7EEB     BL $+0x1fa7084  // CALL → Object..ctor
		   0x010EE36C:  000095E5     LDR r0, [r5]
		   0x010EE370:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EE374:  004080E5     STR r4, [r0]
		   0x010EE378:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010EE37C:  BAD91303     TSTSEQ sp, r3, 0x2e8000
		   0x010EE380:  C4ACF802     RSCSEQ r10, r8, 0xc400
		   0x010EE384:  B0ACF802     RSCSEQ r10, r8, 0xb000
		*/
	}

	// RVA: 0x10EE388 Offset: 0x10EE388 VA: 0x10EE388
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EE388:  0010A0E3     MOV r1, 0x0
		   0x010EE38C:  169C7EEA     B $+0x1fa7060  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EE390 Offset: 0x10EE390 VA: 0x10EE390
	internal bool <FtueStorageCheck>b__73_0(Cell c) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE390:  10402DE9     PUSH {r4, lr}
		   0x010EE394:  0140A0E1     MOV r4, r1
		   0x010EE398:  000051E3     CMPS r0, r1, 0x0
		   0x010EE39C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE3A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE3A0:  0AB4F9EB     BL $-0x192fd0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE3A4:  2800D4E5     LDRB r0, [r4, 0x28]
		   0x010EE3A8:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10EE3AC Offset: 0x10EE3AC VA: 0x10EE3AC
	internal int <GetSourceContainers>b__82_2(ItemData x) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE3AC:  10402DE9     PUSH {r4, lr}
		   0x010EE3B0:  0140A0E1     MOV r4, r1
		   0x010EE3B4:  000051E3     CMPS r0, r1, 0x0
		   0x010EE3B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE3C0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE3BC:  03B4F9EB     BL $-0x192fec
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE3C0:  0400A0E1     MOV r0, r4
		   0x010EE3C4:  0010A0E3     MOV r1, 0x0
		   0x010EE3C8:  1040BDE8     POP {r4, lr}
		   0x010EE3CC:  856E00EA     B $+0x1ba1c  // TAIL CALL → ItemData.get_Order
		*/
	}

	// RVA: 0x10EE3D0 Offset: 0x10EE3D0 VA: 0x10EE3D0
	internal int <GetSourceContainers>b__82_3(ItemData x) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE3D0:  10402DE9     PUSH {r4, lr}
		   0x010EE3D4:  0140A0E1     MOV r4, r1
		   0x010EE3D8:  000051E3     CMPS r0, r1, 0x0
		   0x010EE3DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE3E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE3E0:  FAB3F9EB     BL $-0x193010
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE3E4:  0400A0E1     MOV r0, r4
		   0x010EE3E8:  0010A0E3     MOV r1, 0x0
		   0x010EE3EC:  1040BDE8     POP {r4, lr}
		   0x010EE3F0:  7C6E00EA     B $+0x1b9f8  // TAIL CALL → ItemData.get_Order
		*/
	}

	// RVA: 0x10EE3F4 Offset: 0x10EE3F4 VA: 0x10EE3F4
	internal int <CreateField>b__86_0(ItemDataSave it1, ItemDataSave it2) {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE3F4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EE3F8:  08D04DE2     SUB sp, sp, 0x8
		   0x010EE3FC:  0000A0E3     MOV r0, 0x0
		   0x010EE400:  0240A0E1     MOV r4, r2
		   0x010EE404:  0150A0E1     MOV r5, r1
		   0x010EE408:  000051E3     CMPS r0, r1, 0x0
		   0x010EE40C:  04008DE5     STR r0, [sp, 0x4]
		   0x010EE410:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE418
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE414:  EDB3F9EB     BL $-0x193044
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE418:  1000D5E5     LDRB r0, [r5, 0x10]
		   0x010EE41C:  000050E3     CMPS r0, r0, 0x0
		   0x010EE420:  0100000A     BEQ $+0xc  // if (==) goto 0x010EE42C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010EE424:  0050A0E3     MOV r5, 0x0
		   0x010EE428:  030000EA     B $+0x14  // goto 0x010EE43C
		   // ──── Block 4 if (==) ────────────────────
		   0x010EE42C:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x010EE430:  0150A0E3     MOV r5, 0x1
		   0x010EE434:  050050E3     CMPS r0, r0, 0x5
		   0x010EE438:  0050A003     MOVEQ r5, 0x0
		   // ──── Block 5 ──────────────────────────────
		   0x010EE43C:  000054E3     CMPS r0, r4, 0x0
		   0x010EE440:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE448
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EE444:  E1B3F9EB     BL $-0x193074
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EE448:  1000D4E5     LDRB r0, [r4, 0x10]
		   0x010EE44C:  000050E3     CMPS r0, r0, 0x0
		   0x010EE450:  0100000A     BEQ $+0xc  // if (==) goto 0x010EE45C
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x010EE454:  0000A0E3     MOV r0, 0x0
		   0x010EE458:  030000EA     B $+0x14  // goto 0x010EE46C
		   // ──── Block 9 if (==) ────────────────────
		   0x010EE45C:  1C1094E5     LDR r1, [r4, 0x1c]
		   0x010EE460:  0100A0E3     MOV r0, 0x1
		   0x010EE464:  050051E3     CMPS r0, r1, 0x5
		   0x010EE468:  0000A003     MOVEQ r0, 0x0
		   // ──── Block 10 ──────────────────────────────
		   0x010EE46C:  04008DE5     STR r0, [sp, 0x4]
		   0x010EE470:  04008DE2     ADD r0, sp, 0x4
		   0x010EE474:  0510A0E1     MOV r1, r5
		   0x010EE478:  0020A0E3     MOV r2, 0x0
		   0x010EE47C:  C7577DEB     BL $+0x1f55f24  // CALL → Int32.CompareTo
		   0x010EE480:  08D08DE2     ADD sp, sp, 0x8
		   0x010EE484:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10EE488 Offset: 0x10EE488 VA: 0x10EE488
	internal bool <AddItem>b__96_5(ChainObject x) {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE488:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EE48C:  4C509FE5     LDR r5, [pc, 0x4c]
		   0x010EE490:  0140A0E1     MOV r4, r1
		   0x010EE494:  05508FE0     ADD r5, pc, r5
		   0x010EE498:  0000D5E5     LDRB r0, [r5]
		   0x010EE49C:  000050E3     CMPS r0, r0, 0x0
		   0x010EE4A0:  0400001A     BNE $+0x18  // if (!=) goto 0x010EE4B8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE4A4:  38009FE5     LDR r0, [pc, 0x38]
		   0x010EE4A8:  00009FE7     LDR r0, [pc, r0]
		   0x010EE4AC:  2BB3F9EB     BL $-0x19334c
		   0x010EE4B0:  0100A0E3     MOV r0, 0x1
		   0x010EE4B4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE4B8:  000054E3     CMPS r0, r4, 0x0
		   0x010EE4BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE4C4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EE4C0:  C2B3F9EB     BL $-0x1930f0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EE4C4:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x010EE4C8:  0020A0E3     MOV r2, 0x0
		   0x010EE4CC:  00009FE7     LDR r0, [pc, r0]
		   0x010EE4D0:  001090E5     LDR r1, [r0]
		   0x010EE4D4:  180094E5     LDR r0, [r4, 0x18]
		   0x010EE4D8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EE4DC:  4B6176EA     B $+0x1d98534  // TAIL CALL → String.op_Equality
		   0x010EE4E0:  53D81303     TSTSEQ sp, r3, 0x530000
		   0x010EE4E4:  54AAF802     RSCSEQ r10, r8, 0x54000
		   0x010EE4E8:  30AAF802     RSCSEQ r10, r8, 0x30000
		*/
	}

	// RVA: 0x10EE4EC Offset: 0x10EE4EC VA: 0x10EE4EC
	internal bool <ItIsHighestLevelContainerOrPart>b__98_0(ItemObject item) {
		/* Disassembly (ARM32, 22 instructions, 0x58 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE4EC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EE4F0:  0140A0E1     MOV r4, r1
		   0x010EE4F4:  000051E3     CMPS r0, r1, 0x0
		   0x010EE4F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE500
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE4FC:  B3B3F9EB     BL $-0x19312c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE500:  185094E5     LDR r5, [r4, 0x18]
		   0x010EE504:  000055E3     CMPS r0, r5, 0x0
		   0x010EE508:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE510
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EE50C:  AFB3F9EB     BL $-0x19313c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EE510:  4C1095E5     LDR r1, [r5, 0x4c]
		   0x010EE514:  0100A0E3     MOV r0, 0x1
		   0x010EE518:  010051E3     CMPS r0, r1, 0x1
		   0x010EE51C:  0700000A     BEQ $+0x24  // if (==) goto 0x010EE540
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010EE520:  184094E5     LDR r4, [r4, 0x18]
		   0x010EE524:  000054E3     CMPS r0, r4, 0x0
		   0x010EE528:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE530
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EE52C:  A7B3F9EB     BL $-0x19315c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EE530:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010EE534:  080040E2     SUB r0, r0, 0x8
		   0x010EE538:  100F6FE1     CLZ r0, r0
		   0x010EE53C:  A002A0E1     MOV r0, r0, r0, lsr 5
		   // ──── Block 8 if (==) ────────────────────
		   0x010EE540:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10EE544 Offset: 0x10EE544 VA: 0x10EE544
	internal bool <TryToSpawnBubble>b__103_0(Item itm) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE544:  10402DE9     PUSH {r4, lr}
		   0x010EE548:  0140A0E1     MOV r4, r1
		   0x010EE54C:  000051E3     CMPS r0, r1, 0x0
		   0x010EE550:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE558
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE554:  9DB3F9EB     BL $-0x193184
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE558:  0400A0E1     MOV r0, r4
		   0x010EE55C:  0010A0E3     MOV r1, 0x0
		   0x010EE560:  1040BDE8     POP {r4, lr}
		   0x010EE564:  DB6B00EA     B $+0x1af74  // TAIL CALL → Item.get_isItBubble
		*/
	}

	// RVA: 0x10EE568 Offset: 0x10EE568 VA: 0x10EE568
	internal bool <TryRemoveItemsForFTUEEnergyContainer>b__107_0(Cell c) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE568:  10402DE9     PUSH {r4, lr}
		   0x010EE56C:  0140A0E1     MOV r4, r1
		   0x010EE570:  000051E3     CMPS r0, r1, 0x0
		   0x010EE574:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE57C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE578:  94B3F9EB     BL $-0x1931a8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE57C:  2800D4E5     LDRB r0, [r4, 0x28]
		   0x010EE580:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10EE584 Offset: 0x10EE584 VA: 0x10EE584
	internal bool <TryRemoveItemsForFTUEEnergyContainer>b__107_1(Cell c) {
		/* Disassembly (ARM32, 52 instructions, 0xD0 bytes):
		   // CFG: 24 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE584:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EE588:  0140A0E1     MOV r4, r1
		   0x010EE58C:  000051E3     CMPS r0, r1, 0x0
		   0x010EE590:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE598
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE594:  8DB3F9EB     BL $-0x1931c4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE598:  2800D4E5     LDRB r0, [r4, 0x28]
		   0x010EE59C:  000050E3     CMPS r0, r0, 0x0
		   0x010EE5A0:  2700001A     BNE $+0xa4  // if (!=) goto 0x010EE644
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EE5A4:  245094E5     LDR r5, [r4, 0x24]
		   0x010EE5A8:  000055E3     CMPS r0, r5, 0x0
		   0x010EE5AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE5B4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010EE5B0:  86B3F9EB     BL $-0x1931e0
		   // ──── Block 5 if (!=) ────────────────────
		   0x010EE5B4:  846095E5     LDR r6, [r5, 0x84]
		   0x010EE5B8:  000056E3     CMPS r0, r6, 0x0
		   0x010EE5BC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE5C4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EE5C0:  82B3F9EB     BL $-0x1931f0
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EE5C4:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x010EE5C8:  245094E5     LDR r5, [r4, 0x24]
		   0x010EE5CC:  000050E3     CMPS r0, r0, 0x0
		   0x010EE5D0:  0A00000A     BEQ $+0x30  // if (==) goto 0x010EE600
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x010EE5D4:  000055E3     CMPS r0, r5, 0x0
		   0x010EE5D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE5E0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EE5DC:  7BB3F9EB     BL $-0x19320c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010EE5E0:  845095E5     LDR r5, [r5, 0x84]
		   0x010EE5E4:  000055E3     CMPS r0, r5, 0x0
		   0x010EE5E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE5F0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010EE5EC:  77B3F9EB     BL $-0x19321c
		   // ──── Block 12 if (!=) ────────────────────
		   0x010EE5F0:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x010EE5F4:  020050E3     CMPS r0, r0, 0x2
		   0x010EE5F8:  1100001A     BNE $+0x4c  // if (!=) goto 0x010EE644
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010EE5FC:  245094E5     LDR r5, [r4, 0x24]
		   // ──── Block 14 if (==) ────────────────────
		   0x010EE600:  000055E3     CMPS r0, r5, 0x0
		   0x010EE604:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE60C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EE608:  70B3F9EB     BL $-0x193238
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EE60C:  845095E5     LDR r5, [r5, 0x84]
		   0x010EE610:  000055E3     CMPS r0, r5, 0x0
		   0x010EE614:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE61C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010EE618:  6CB3F9EB     BL $-0x193248
		   // ──── Block 18 if (!=) ────────────────────
		   0x010EE61C:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x010EE620:  000050E3     CMPS r0, r0, 0x0
		   0x010EE624:  0600001A     BNE $+0x20  // if (!=) goto 0x010EE644
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010EE628:  244094E5     LDR r4, [r4, 0x24]
		   0x010EE62C:  000054E3     CMPS r0, r4, 0x0
		   0x010EE630:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE638
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010EE634:  65B3F9EB     BL $-0x193264
		   // ──── Block 21 if (!=) ────────────────────
		   0x010EE638:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x010EE63C:  000050E3     CMPS r0, r0, 0x0
		   0x010EE640:  0100000A     BEQ $+0xc  // if (==) goto 0x010EE64C
		   // 
		   // ──── Block 22 (from 4 paths) ──────────────────
		   0x010EE644:  0000A0E3     MOV r0, 0x0
		   0x010EE648:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 23 if (==) ────────────────────
		   0x010EE64C:  0100A0E3     MOV r0, 0x1
		   0x010EE650:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x10EE654 Offset: 0x10EE654 VA: 0x10EE654
	internal int <TryRemoveItemsForFTUEEnergyContainer>b__107_2(Cell c) {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE654:  10402DE9     PUSH {r4, lr}
		   0x010EE658:  0140A0E1     MOV r4, r1
		   0x010EE65C:  000051E3     CMPS r0, r1, 0x0
		   0x010EE660:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE668
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE664:  59B3F9EB     BL $-0x193294
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE668:  244094E5     LDR r4, [r4, 0x24]
		   0x010EE66C:  000054E3     CMPS r0, r4, 0x0
		   0x010EE670:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE678
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EE674:  55B3F9EB     BL $-0x1932a4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EE678:  844094E5     LDR r4, [r4, 0x84]
		   0x010EE67C:  000054E3     CMPS r0, r4, 0x0
		   0x010EE680:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE688
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EE684:  51B3F9EB     BL $-0x1932b4
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EE688:  0400A0E1     MOV r0, r4
		   0x010EE68C:  0010A0E3     MOV r1, 0x0
		   0x010EE690:  1040BDE8     POP {r4, lr}
		   0x010EE694:  D36D00EA     B $+0x1b754  // TAIL CALL → ItemData.get_Order
		*/
	}

	// RVA: 0x10EE698 Offset: 0x10EE698 VA: 0x10EE698
	internal bool <CanMerge2ChargeableContainers>b__138_0(Cell c) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE698:  10402DE9     PUSH {r4, lr}
		   0x010EE69C:  0140A0E1     MOV r4, r1
		   0x010EE6A0:  000051E3     CMPS r0, r1, 0x0
		   0x010EE6A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE6AC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE6A8:  48B3F9EB     BL $-0x1932d8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE6AC:  2800D4E5     LDRB r0, [r4, 0x28]
		   0x010EE6B0:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10EE6B4 Offset: 0x10EE6B4 VA: 0x10EE6B4
	internal bool <CheckForChestUnlockFtue>b__146_0(Item itm) {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 16 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE6B4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EE6B8:  10D04DE2     SUB sp, sp, 0x10
		   0x010EE6BC:  E0509FE5     LDR r5, [pc, 0xe0]
		   0x010EE6C0:  0140A0E1     MOV r4, r1
		   0x010EE6C4:  05508FE0     ADD r5, pc, r5
		   0x010EE6C8:  0000D5E5     LDRB r0, [r5]
		   0x010EE6CC:  000050E3     CMPS r0, r0, 0x0
		   0x010EE6D0:  0400001A     BNE $+0x18  // if (!=) goto 0x010EE6E8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE6D4:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010EE6D8:  00009FE7     LDR r0, [pc, r0]
		   0x010EE6DC:  9FB2F9EB     BL $-0x19357c
		   0x010EE6E0:  0100A0E3     MOV r0, 0x1
		   0x010EE6E4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE6E8:  000054E3     CMPS r0, r4, 0x0
		   0x010EE6EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE6F4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EE6F0:  36B3F9EB     BL $-0x193320
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EE6F4:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x010EE6F8:  0050A0E3     MOV r5, 0x0
		   0x010EE6FC:  000050E3     CMPS r0, r0, 0x0
		   0x010EE700:  2400001A     BNE $+0x98  // if (!=) goto 0x010EE798
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EE704:  846094E5     LDR r6, [r4, 0x84]
		   0x010EE708:  000056E3     CMPS r0, r6, 0x0
		   0x010EE70C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE714
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EE710:  2EB3F9EB     BL $-0x193340
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EE714:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x010EE718:  050050E3     CMPS r0, r0, 0x5
		   0x010EE71C:  1D00000A     BEQ $+0x7c  // if (==) goto 0x010EE798
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x010EE720:  845094E5     LDR r5, [r4, 0x84]
		   0x010EE724:  000055E3     CMPS r0, r5, 0x0
		   0x010EE728:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE730
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EE72C:  27B3F9EB     BL $-0x19335c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010EE730:  085095E5     LDR r5, [r5, 0x8]
		   0x010EE734:  000055E3     CMPS r0, r5, 0x0
		   0x010EE738:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE740
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010EE73C:  23B3F9EB     BL $-0x19336c
		   // ──── Block 12 if (!=) ────────────────────
		   0x010EE740:  64009FE5     LDR r0, [pc, 0x64]
		   0x010EE744:  0B10A0E3     MOV r1, 0xb
		   0x010EE748:  00009FE7     LDR r0, [pc, r0]
		   0x010EE74C:  0C108DE5     STR r1, [sp, 0xc]
		   0x010EE750:  0010E0E3     MVN r1, r0, 0x0
		   0x010EE754:  186095E5     LDR r6, [r5, 0x18]
		   0x010EE758:  0050A0E3     MOV r5, 0x0
		   0x010EE75C:  000090E5     LDR r0, [r0]
		   0x010EE760:  03008DE9     STMIA sp, {r0, r1}
		   0x010EE764:  04008DE2     ADD r0, sp, 0x4
		   0x010EE768:  0010A0E3     MOV r1, 0x0
		   0x010EE76C:  61647EEB     BL $+0x1f9918c  // CALL → Enum.ToString
		   0x010EE770:  0010A0E1     MOV r1, r0
		   0x010EE774:  0600A0E1     MOV r0, r6
		   0x010EE778:  0020A0E3     MOV r2, 0x0
		   0x010EE77C:  A36076EB     BL $+0x1d98294  // CALL → String.op_Equality
		   0x010EE780:  000050E3     CMPS r0, r0, 0x0
		   0x010EE784:  0300000A     BEQ $+0x14  // if (==) goto 0x010EE798
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010EE788:  0400A0E1     MOV r0, r4
		   0x010EE78C:  0010A0E3     MOV r1, 0x0
		   0x010EE790:  396B00EB     BL $+0x1acec  // CALL → Item.get_interactable
		   0x010EE794:  0050A0E1     MOV r5, r0
		   // ──── Block 14 (from 3 paths) ──────────────────
		   0x010EE798:  0500A0E1     MOV r0, r5
		   0x010EE79C:  10D08DE2     ADD sp, sp, 0x10
		   0x010EE7A0:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010EE7A4:  24D61303     TSTSEQ sp, r3, 0x2400000
		   0x010EE7A8:  B8A5F802     RSCSEQ r10, r8, 0x2e000000
		   0x010EE7AC:  48A5F802     RSCSEQ r10, r8, 0x12000000
		*/
	}

	// RVA: 0x10EE7B0 Offset: 0x10EE7B0 VA: 0x10EE7B0
	internal bool <CheckForMergeFridgesFtues>b__147_0(Item i) {
		/* Disassembly (ARM32, 58 instructions, 0xE8 bytes):
		   // CFG: 15 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE7B0:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EE7B4:  D0509FE5     LDR r5, [pc, 0xd0]
		   0x010EE7B8:  0140A0E1     MOV r4, r1
		   0x010EE7BC:  05508FE0     ADD r5, pc, r5
		   0x010EE7C0:  0000D5E5     LDRB r0, [r5]
		   0x010EE7C4:  000050E3     CMPS r0, r0, 0x0
		   0x010EE7C8:  0400001A     BNE $+0x18  // if (!=) goto 0x010EE7E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE7CC:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010EE7D0:  00009FE7     LDR r0, [pc, r0]
		   0x010EE7D4:  61B2F9EB     BL $-0x193674
		   0x010EE7D8:  0100A0E3     MOV r0, 0x1
		   0x010EE7DC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE7E0:  000054E3     CMPS r0, r4, 0x0
		   0x010EE7E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE7EC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EE7E8:  F8B2F9EB     BL $-0x193418
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EE7EC:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x010EE7F0:  0050A0E3     MOV r5, 0x0
		   0x010EE7F4:  000050E3     CMPS r0, r0, 0x0
		   0x010EE7F8:  2100001A     BNE $+0x8c  // if (!=) goto 0x010EE884
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EE7FC:  0400A0E1     MOV r0, r4
		   0x010EE800:  0010A0E3     MOV r1, 0x0
		   0x010EE804:  736C00EB     BL $+0x1b1d4  // CALL → Item.get_chainName
		   0x010EE808:  84109FE5     LDR r1, [pc, 0x84]
		   0x010EE80C:  0020A0E3     MOV r2, 0x0
		   0x010EE810:  01109FE7     LDR r1, [pc, r1]
		   0x010EE814:  001091E5     LDR r1, [r1]
		   0x010EE818:  7C6076EB     BL $+0x1d981f8  // CALL → String.op_Equality
		   0x010EE81C:  000050E3     CMPS r0, r0, 0x0
		   0x010EE820:  1700000A     BEQ $+0x64  // if (==) goto 0x010EE884
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010EE824:  0400A0E1     MOV r0, r4
		   0x010EE828:  0010A0E3     MOV r1, 0x0
		   0x010EE82C:  0050A0E3     MOV r5, 0x0
		   0x010EE830:  116B00EB     BL $+0x1ac4c  // CALL → Item.get_interactable
		   0x010EE834:  000050E3     CMPS r0, r0, 0x0
		   0x010EE838:  1100000A     BEQ $+0x4c  // if (==) goto 0x010EE884
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010EE83C:  846094E5     LDR r6, [r4, 0x84]
		   0x010EE840:  000056E3     CMPS r0, r6, 0x0
		   0x010EE844:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE84C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EE848:  E0B2F9EB     BL $-0x193478
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EE84C:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x010EE850:  080050E3     CMPS r0, r0, 0x8
		   0x010EE854:  01005013     CMPSNE r0, r0, 0x1
		   0x010EE858:  0900001A     BNE $+0x2c  // if (!=) goto 0x010EE884
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EE85C:  844094E5     LDR r4, [r4, 0x84]
		   0x010EE860:  000054E3     CMPS r0, r4, 0x0
		   0x010EE864:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE86C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010EE868:  D8B2F9EB     BL $-0x193498
		   // ──── Block 12 if (!=) ────────────────────
		   0x010EE86C:  0400A0E1     MOV r0, r4
		   0x010EE870:  0010A0E3     MOV r1, 0x0
		   0x010EE874:  5B6D00EB     BL $+0x1b574  // CALL → ItemData.get_Order
		   0x010EE878:  030040E2     SUB r0, r0, 0x3
		   0x010EE87C:  100F6FE1     CLZ r0, r0
		   0x010EE880:  A052A0E1     MOV r5, r0, r0, lsr 5
		   // ──── Block 13 (from 4 paths) ──────────────────
		   0x010EE884:  0500A0E1     MOV r0, r5
		   0x010EE888:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010EE88C:  2DD51303     TSTSEQ sp, r3, 0xb400000
		   0x010EE890:  189EF802     RSCSEQ sb, r8, 0x180
		   0x010EE894:  D89DF802     RSCSEQ sb, r8, 0x3600
		*/
	}

	// RVA: 0x10EE898 Offset: 0x10EE898 VA: 0x10EE898
	internal bool <CheckForMergeFridgesFtues>b__147_1(Item i) {
		/* Disassembly (ARM32, 33 instructions, 0x84 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE898:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EE89C:  78509FE5     LDR r5, [pc, 0x78]
		   0x010EE8A0:  0140A0E1     MOV r4, r1
		   0x010EE8A4:  05508FE0     ADD r5, pc, r5
		   0x010EE8A8:  0000D5E5     LDRB r0, [r5]
		   0x010EE8AC:  000050E3     CMPS r0, r0, 0x0
		   0x010EE8B0:  0400001A     BNE $+0x18  // if (!=) goto 0x010EE8C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE8B4:  64009FE5     LDR r0, [pc, 0x64]
		   0x010EE8B8:  00009FE7     LDR r0, [pc, r0]
		   0x010EE8BC:  27B2F9EB     BL $-0x19375c
		   0x010EE8C0:  0100A0E3     MOV r0, 0x1
		   0x010EE8C4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE8C8:  0000A0E3     MOV r0, 0x0
		   0x010EE8CC:  000054E3     CMPS r0, r4, 0x0
		   0x010EE8D0:  1000000A     BEQ $+0x48  // if (==) goto 0x010EE918
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010EE8D4:  48109FE5     LDR r1, [pc, 0x48]
		   0x010EE8D8:  01109FE7     LDR r1, [pc, r1]
		   0x010EE8DC:  002094E5     LDR r2, [r4]
		   0x010EE8E0:  001091E5     LDR r1, [r1]
		   0x010EE8E4:  B850D2E5     LDRB r5, [r2, 0xb8]
		   0x010EE8E8:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010EE8EC:  030055E1     CMPS r0, r5, r3
		   0x010EE8F0:  0800003A     BLO $+0x28  // if (< (unsigned)) goto 0x010EE918
		   // 
		   // ──── Block 4 else (>= (unsigned)) ────────────────────
		   0x010EE8F4:  642092E5     LDR r2, [r2, 0x64]
		   0x010EE8F8:  032182E0     ADD r2, r2, r3, lsl 2
		   0x010EE8FC:  042012E5     LDR r2, [r2, -0x4]
		   0x010EE900:  010052E1     CMPS r0, r2, r1
		   0x010EE904:  3088BD18     POPNE {r4, r5, fp, pc}
		   0x010EE908:  0400A0E1     MOV r0, r4
		   0x010EE90C:  0010A0E3     MOV r1, 0x0
		   0x010EE910:  068900EB     BL $+0x22420  // CALL → ItemContainer.get_hasCapacity
		   0x010EE914:  010020E2     EOR r0, r0, 0x1
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x010EE918:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10EE928 Offset: 0x10EE928 VA: 0x10EE928
	internal Goal <GetCurrentLevelGoalsProgress>b__151_0(Goal goal) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EE928:  10402DE9     PUSH {r4, lr}
		   0x010EE92C:  0140A0E1     MOV r4, r1
		   0x010EE930:  000051E3     CMPS r0, r1, 0x0
		   0x010EE934:  0000001A     BNE $+0x8  // if (!=) goto 0x010EE93C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EE938:  A4B2F9EB     BL $-0x193568
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EE93C:  0400A0E1     MOV r0, r4
		   0x010EE940:  1040BDE8     POP {r4, lr}
		   0x010EE944:  FFFFFFEA     B $+0x4  // TAIL CALL → Goal.Clone
		*/
	}

	// RVA: 0x10EED44 Offset: 0x10EED44 VA: 0x10EED44
	internal Goal <GetNextLevelGoalsProgressFlashSale>b__153_1(Goal goal) {
		/* Disassembly (ARM32, 8 instructions, 0x20 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EED44:  10402DE9     PUSH {r4, lr}
		   0x010EED48:  0140A0E1     MOV r4, r1
		   0x010EED4C:  000051E3     CMPS r0, r1, 0x0
		   0x010EED50:  0000001A     BNE $+0x8  // if (!=) goto 0x010EED58
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EED54:  9DB1F9EB     BL $-0x193984
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EED58:  0400A0E1     MOV r0, r4
		   0x010EED5C:  1040BDE8     POP {r4, lr}
		   0x010EED60:  F8FEFFEA     B $-0x418
		*/
	}

	// RVA: 0x10EED64 Offset: 0x10EED64 VA: 0x10EED64
	internal bool <UpdateChestsReminderAnimation>b__164_0(Item item) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EED64:  10402DE9     PUSH {r4, lr}
		   0x010EED68:  0140A0E1     MOV r4, r1
		   0x010EED6C:  000051E3     CMPS r0, r1, 0x0
		   0x010EED70:  0000001A     BNE $+0x8  // if (!=) goto 0x010EED78
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EED74:  95B1F9EB     BL $-0x1939a4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EED78:  3810D4E5     LDRB r1, [r4, 0x38]
		   0x010EED7C:  0000A0E3     MOV r0, 0x0
		   0x010EED80:  000051E3     CMPS r0, r1, 0x0
		   0x010EED84:  1080BD18     POPNE {r4, pc}
		   0x010EED88:  0400A0E1     MOV r0, r4
		   0x010EED8C:  0010A0E3     MOV r1, 0x0
		   0x010EED90:  D06900EB     BL $+0x1a748  // CALL → Item.get_isItBubble
		   0x010EED94:  010020E2     EOR r0, r0, 0x1
		   0x010EED98:  1080BDE8     POP {r4, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass101_0 // TypeDefIndex: 1177
{

	// Fields
	public string inventory; // 0x8
	public string field; // 0xC

	// Methods

	// RVA: 0x10EED9C Offset: 0x10EED9C VA: 0x10EED9C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EED9C:  0010A0E3     MOV r1, 0x0
		   0x010EEDA0:  91997EEA     B $+0x1fa664c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EEDA4 Offset: 0x10EEDA4 VA: 0x10EEDA4
	internal void <TryMerge>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 32 instructions, 0x80 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EEDA4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EEDA8:  68609FE5     LDR r6, [pc, 0x68]
		   0x010EEDAC:  0040A0E1     MOV r4, r0
		   0x010EEDB0:  0150A0E1     MOV r5, r1
		   0x010EEDB4:  06608FE0     ADD r6, pc, r6
		   0x010EEDB8:  0000D6E5     LDRB r0, [r6]
		   0x010EEDBC:  000050E3     CMPS r0, r0, 0x0
		   0x010EEDC0:  0400001A     BNE $+0x18  // if (!=) goto 0x010EEDD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EEDC4:  50009FE5     LDR r0, [pc, 0x50]
		   0x010EEDC8:  00009FE7     LDR r0, [pc, r0]
		   0x010EEDCC:  E3B0F9EB     BL $-0x193c6c
		   0x010EEDD0:  0100A0E3     MOV r0, 0x1
		   0x010EEDD4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEDD8:  086094E5     LDR r6, [r4, 0x8]
		   0x010EEDDC:  000055E3     CMPS r0, r5, 0x0
		   0x010EEDE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EEDE8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EEDE4:  79B1F9EB     BL $-0x193a14
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EEDE8:  080085E2     ADD r0, r5, 0x8
		   0x010EEDEC:  0010A0E3     MOV r1, 0x0
		   0x010EEDF0:  8C557DEB     BL $+0x1f55638  // CALL → Int32.ToString
		   0x010EEDF4:  0010A0E1     MOV r1, r0
		   0x010EEDF8:  20009FE5     LDR r0, [pc, 0x20]
		   0x010EEDFC:  0030A0E3     MOV r3, 0x0
		   0x010EEE00:  00009FE7     LDR r0, [pc, r0]
		   0x010EEE04:  002090E5     LDR r2, [r0]
		   0x010EEE08:  0600A0E1     MOV r0, r6
		   0x010EEE0C:  C5A876EB     BL $+0x1daa31c  // CALL → String.Concat
		   0x010EEE10:  080084E5     STR r0, [r4, 0x8]
		   0x010EEE14:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010EEE18:  37CF1303     TSTSEQ ip, r3, 0xdc
		   0x010EEE1C:  0C7DF802     RSCSEQ r7, r8, 0x300
		   0x010EEE20:  D47CF802     RSCSEQ r7, r8, 0xd400
		*/
	}

	// RVA: 0x10EEE24 Offset: 0x10EEE24 VA: 0x10EEE24
	internal void <TryMerge>b__1(ItemDataSave x) {
		/* Disassembly (ARM32, 32 instructions, 0x80 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EEE24:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EEE28:  68609FE5     LDR r6, [pc, 0x68]
		   0x010EEE2C:  0040A0E1     MOV r4, r0
		   0x010EEE30:  0150A0E1     MOV r5, r1
		   0x010EEE34:  06608FE0     ADD r6, pc, r6
		   0x010EEE38:  0000D6E5     LDRB r0, [r6]
		   0x010EEE3C:  000050E3     CMPS r0, r0, 0x0
		   0x010EEE40:  0400001A     BNE $+0x18  // if (!=) goto 0x010EEE58
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EEE44:  50009FE5     LDR r0, [pc, 0x50]
		   0x010EEE48:  00009FE7     LDR r0, [pc, r0]
		   0x010EEE4C:  C3B0F9EB     BL $-0x193cec
		   0x010EEE50:  0100A0E3     MOV r0, 0x1
		   0x010EEE54:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEE58:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010EEE5C:  000055E3     CMPS r0, r5, 0x0
		   0x010EEE60:  0000001A     BNE $+0x8  // if (!=) goto 0x010EEE68
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EEE64:  59B1F9EB     BL $-0x193a94
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EEE68:  080085E2     ADD r0, r5, 0x8
		   0x010EEE6C:  0010A0E3     MOV r1, 0x0
		   0x010EEE70:  6C557DEB     BL $+0x1f555b8  // CALL → Int32.ToString
		   0x010EEE74:  0010A0E1     MOV r1, r0
		   0x010EEE78:  20009FE5     LDR r0, [pc, 0x20]
		   0x010EEE7C:  0030A0E3     MOV r3, 0x0
		   0x010EEE80:  00009FE7     LDR r0, [pc, r0]
		   0x010EEE84:  002090E5     LDR r2, [r0]
		   0x010EEE88:  0600A0E1     MOV r0, r6
		   0x010EEE8C:  A5A876EB     BL $+0x1daa29c  // CALL → String.Concat
		   0x010EEE90:  0C0084E5     STR r0, [r4, 0xc]
		   0x010EEE94:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010EEE98:  B8CE1303     TSTSEQ ip, r3, 0xb80
		   0x010EEE9C:  8C7CF802     RSCSEQ r7, r8, 0x8c00
		   0x010EEEA0:  547CF802     RSCSEQ r7, r8, 0x5400
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass105_0 // TypeDefIndex: 1178
{

	// Fields
	public RewardItemData data; // 0x8

	// Methods

	// RVA: 0x10EEEA4 Offset: 0x10EEEA4 VA: 0x10EEEA4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EEEA4:  0010A0E3     MOV r1, 0x0
		   0x010EEEA8:  4F997EEA     B $+0x1fa6544  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EEEAC Offset: 0x10EEEAC VA: 0x10EEEAC
	internal bool <DropRewardsItem>b__0(ChainObject x) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EEEAC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EEEB0:  0140A0E1     MOV r4, r1
		   0x010EEEB4:  0050A0E1     MOV r5, r0
		   0x010EEEB8:  000051E3     CMPS r0, r1, 0x0
		   0x010EEEBC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EEEC4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EEEC0:  42B1F9EB     BL $-0x193af0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEEC4:  085095E5     LDR r5, [r5, 0x8]
		   0x010EEEC8:  184094E5     LDR r4, [r4, 0x18]
		   0x010EEECC:  000055E3     CMPS r0, r5, 0x0
		   0x010EEED0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EEED8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EEED4:  3DB1F9EB     BL $-0x193b04
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EEED8:  0C1095E5     LDR r1, [r5, 0xc]
		   0x010EEEDC:  0400A0E1     MOV r0, r4
		   0x010EEEE0:  0020A0E3     MOV r2, 0x0
		   0x010EEEE4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EEEE8:  C85E76EA     B $+0x1d97b28  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass124_0 // TypeDefIndex: 1179
{

	// Fields
	public ConfigItemID itm; // 0x8

	// Methods

	// RVA: 0x10EEEEC Offset: 0x10EEEEC VA: 0x10EEEEC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EEEEC:  0010A0E3     MOV r1, 0x0
		   0x010EEEF0:  3D997EEA     B $+0x1fa64fc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EEEF4 Offset: 0x10EEEF4 VA: 0x10EEEF4
	internal bool <ConvertItemsFromConfig>b__1(ChainObject ch) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EEEF4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EEEF8:  0140A0E1     MOV r4, r1
		   0x010EEEFC:  0050A0E1     MOV r5, r0
		   0x010EEF00:  000051E3     CMPS r0, r1, 0x0
		   0x010EEF04:  0000001A     BNE $+0x8  // if (!=) goto 0x010EEF0C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EEF08:  30B1F9EB     BL $-0x193b38
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEF0C:  085095E5     LDR r5, [r5, 0x8]
		   0x010EEF10:  184094E5     LDR r4, [r4, 0x18]
		   0x010EEF14:  000055E3     CMPS r0, r5, 0x0
		   0x010EEF18:  0000001A     BNE $+0x8  // if (!=) goto 0x010EEF20
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EEF1C:  2BB1F9EB     BL $-0x193b4c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EEF20:  0500A0E1     MOV r0, r5
		   0x010EEF24:  040000EB     BL $+0x18  // CALL → ConfigItemID.GetChainName
		   0x010EEF28:  0010A0E1     MOV r1, r0
		   0x010EEF2C:  0400A0E1     MOV r0, r4
		   0x010EEF30:  0020A0E3     MOV r2, 0x0
		   0x010EEF34:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EEF38:  B45E76EA     B $+0x1d97ad8  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass125_0 // TypeDefIndex: 1180
{

	// Fields
	public ItemData iData; // 0x8

	// Methods

	// RVA: 0x10EEFC0 Offset: 0x10EEFC0 VA: 0x10EEFC0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EEFC0:  0010A0E3     MOV r1, 0x0
		   0x010EEFC4:  08997EEA     B $+0x1fa6428  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EEFC8 Offset: 0x10EEFC8 VA: 0x10EEFC8
	internal bool <RemoveItemsFromGoal>b__0(Item itm) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EEFC8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EEFCC:  84609FE5     LDR r6, [pc, 0x84]
		   0x010EEFD0:  0050A0E1     MOV r5, r0
		   0x010EEFD4:  0140A0E1     MOV r4, r1
		   0x010EEFD8:  06608FE0     ADD r6, pc, r6
		   0x010EEFDC:  0000D6E5     LDRB r0, [r6]
		   0x010EEFE0:  000050E3     CMPS r0, r0, 0x0
		   0x010EEFE4:  0400001A     BNE $+0x18  // if (!=) goto 0x010EEFFC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EEFE8:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x010EEFEC:  00009FE7     LDR r0, [pc, r0]
		   0x010EEFF0:  5AB0F9EB     BL $-0x193e90
		   0x010EEFF4:  0100A0E3     MOV r0, 0x1
		   0x010EEFF8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EEFFC:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x010EF000:  00009FE7     LDR r0, [pc, r0]
		   0x010EF004:  000090E5     LDR r0, [r0]
		   0x010EF008:  741090E5     LDR r1, [r0, 0x74]
		   0x010EF00C:  000051E3     CMPS r0, r1, 0x0
		   0x010EF010:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF018
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF014:  9EB0F9EB     BL $-0x193d80
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF018:  0400A0E1     MOV r0, r4
		   0x010EF01C:  0010A0E3     MOV r1, 0x0
		   0x010EF020:  75243CEB     BL $+0xf091dc  // CALL → sub_1FF81FC
		   0x010EF024:  000050E3     CMPS r0, r0, 0x0
		   0x010EF028:  0800000A     BEQ $+0x28  // if (==) goto 0x010EF050
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010EF02C:  085095E5     LDR r5, [r5, 0x8]
		   0x010EF030:  000054E3     CMPS r0, r4, 0x0
		   0x010EF034:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF03C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EF038:  E4B0F9EB     BL $-0x193c68
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EF03C:  0400A0E1     MOV r0, r4
		   0x010EF040:  0510A0E1     MOV r1, r5
		   0x010EF044:  0020A0E3     MOV r2, 0x0
		   0x010EF048:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EF04C:  206B00EA     B $+0x1ac88  // TAIL CALL → Item.CanBeUsedForGoal
		   // ──── Block 8 if (==) ────────────────────
		   0x010EF050:  0000A0E3     MOV r0, 0x0
		   0x010EF054:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010EF058:  15CD1303     TSTSEQ ip, r3, 0x540
		   0x010EF05C:  4C75F802     RSCSEQ r7, r8, 0x13000000
		   0x010EF060:  3875F802     RSCSEQ r7, r8, 0xe000000
		*/
	}

	// RVA: 0x10EF064 Offset: 0x10EF064 VA: 0x10EF064
	internal bool <RemoveItemsFromGoal>b__1(ItemDataSave s) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF064:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010EF068:  0140A0E1     MOV r4, r1
		   0x010EF06C:  0050A0E1     MOV r5, r0
		   0x010EF070:  000051E3     CMPS r0, r1, 0x0
		   0x010EF074:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF07C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF078:  D4B0F9EB     BL $-0x193ca8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF07C:  087095E5     LDR r7, [r5, 0x8]
		   0x010EF080:  246094E5     LDR r6, [r4, 0x24]
		   0x010EF084:  000057E3     CMPS r0, r7, 0x0
		   0x010EF088:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF090
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF08C:  CFB0F9EB     BL $-0x193cbc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF090:  087097E5     LDR r7, [r7, 0x8]
		   0x010EF094:  000057E3     CMPS r0, r7, 0x0
		   0x010EF098:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF0A0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EF09C:  CBB0F9EB     BL $-0x193ccc
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EF0A0:  181097E5     LDR r1, [r7, 0x18]
		   0x010EF0A4:  0600A0E1     MOV r0, r6
		   0x010EF0A8:  0020A0E3     MOV r2, 0x0
		   0x010EF0AC:  0070A0E3     MOV r7, 0x0
		   0x010EF0B0:  565E76EB     BL $+0x1d97960  // CALL → String.op_Equality
		   0x010EF0B4:  000050E3     CMPS r0, r0, 0x0
		   0x010EF0B8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010EF0E8
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010EF0BC:  085095E5     LDR r5, [r5, 0x8]
		   0x010EF0C0:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010EF0C4:  000055E3     CMPS r0, r5, 0x0
		   0x010EF0C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF0D0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EF0CC:  BFB0F9EB     BL $-0x193cfc
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EF0D0:  0500A0E1     MOV r0, r5
		   0x010EF0D4:  0010A0E3     MOV r1, 0x0
		   0x010EF0D8:  426B00EB     BL $+0x1ad10  // CALL → ItemData.get_Order
		   0x010EF0DC:  000044E0     SUB r0, r4, r0
		   0x010EF0E0:  100F6FE1     CLZ r0, r0
		   0x010EF0E4:  A072A0E1     MOV r7, r0, r0, lsr 5
		   // ──── Block 10 if (==) ────────────────────
		   0x010EF0E8:  0700A0E1     MOV r0, r7
		   0x010EF0EC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass128_0 // TypeDefIndex: 1181
{

	// Fields
	public Item item; // 0x8

	// Methods

	// RVA: 0x10EF0F0 Offset: 0x10EF0F0 VA: 0x10EF0F0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF0F0:  0010A0E3     MOV r1, 0x0
		   0x010EF0F4:  BC987EEA     B $+0x1fa62f8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF0F8 Offset: 0x10EF0F8 VA: 0x10EF0F8
	internal bool <SetGoalsCheck>b__2(GoalTarget t) {
		/* Disassembly (ARM32, 53 instructions, 0xD4 bytes):
		   // CFG: 21 blocks, 22 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF0F8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EF0FC:  086090E5     LDR r6, [r0, 0x8]
		   0x010EF100:  0150A0E1     MOV r5, r1
		   0x010EF104:  0040A0E1     MOV r4, r0
		   0x010EF108:  000056E3     CMPS r0, r6, 0x0
		   0x010EF10C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF114
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF110:  AEB0F9EB     BL $-0x193d40
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF114:  846096E5     LDR r6, [r6, 0x84]
		   0x010EF118:  000056E3     CMPS r0, r6, 0x0
		   0x010EF11C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF124
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF120:  AAB0F9EB     BL $-0x193d50
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF124:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x010EF128:  050050E3     CMPS r0, r0, 0x5
		   0x010EF12C:  0F00000A     BEQ $+0x44  // if (==) goto 0x010EF170
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010EF130:  086094E5     LDR r6, [r4, 0x8]
		   0x010EF134:  000056E3     CMPS r0, r6, 0x0
		   0x010EF138:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF140
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EF13C:  A3B0F9EB     BL $-0x193d6c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EF140:  0600A0E1     MOV r0, r6
		   0x010EF144:  0010A0E3     MOV r1, 0x0
		   0x010EF148:  E26800EB     BL $+0x1a390  // CALL → Item.get_isItBubble
		   0x010EF14C:  000050E3     CMPS r0, r0, 0x0
		   0x010EF150:  0600001A     BNE $+0x20  // if (!=) goto 0x010EF170
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EF154:  086094E5     LDR r6, [r4, 0x8]
		   0x010EF158:  000056E3     CMPS r0, r6, 0x0
		   0x010EF15C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF164
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EF160:  9AB0F9EB     BL $-0x193d90
		   // ──── Block 10 if (!=) ────────────────────
		   0x010EF164:  3800D6E5     LDRB r0, [r6, 0x38]
		   0x010EF168:  000050E3     CMPS r0, r0, 0x0
		   0x010EF16C:  0100000A     BEQ $+0xc  // if (==) goto 0x010EF178
		   // 
		   // ──── Block 11 (from 3 paths) ──────────────────
		   0x010EF170:  0000A0E3     MOV r0, 0x0
		   0x010EF174:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 12 if (==) ────────────────────
		   0x010EF178:  000055E3     CMPS r0, r5, 0x0
		   0x010EF17C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF184
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010EF180:  92B0F9EB     BL $-0x193db0
		   // ──── Block 14 if (!=) ────────────────────
		   0x010EF184:  085095E5     LDR r5, [r5, 0x8]
		   0x010EF188:  000055E3     CMPS r0, r5, 0x0
		   0x010EF18C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF194
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EF190:  8EB0F9EB     BL $-0x193dc0
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EF194:  086094E5     LDR r6, [r4, 0x8]
		   0x010EF198:  184095E5     LDR r4, [r5, 0x18]
		   0x010EF19C:  000056E3     CMPS r0, r6, 0x0
		   0x010EF1A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF1A8
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010EF1A4:  89B0F9EB     BL $-0x193dd4
		   // ──── Block 18 if (!=) ────────────────────
		   0x010EF1A8:  845096E5     LDR r5, [r6, 0x84]
		   0x010EF1AC:  000054E3     CMPS r0, r4, 0x0
		   0x010EF1B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF1B8
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010EF1B4:  85B0F9EB     BL $-0x193de4
		   // ──── Block 20 if (!=) ────────────────────
		   0x010EF1B8:  0400A0E1     MOV r0, r4
		   0x010EF1BC:  0510A0E1     MOV r1, r5
		   0x010EF1C0:  0020A0E3     MOV r2, 0x0
		   0x010EF1C4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010EF1C8:  9C9900EA     B $+0x26678  // TAIL CALL → ItemData.CompareChainAndOrder
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass133_0 // TypeDefIndex: 1182
{

	// Fields
	public RewardItemData rewardItemData; // 0x8

	// Methods

	// RVA: 0x10EF1CC Offset: 0x10EF1CC VA: 0x10EF1CC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF1CC:  0010A0E3     MOV r1, 0x0
		   0x010EF1D0:  85987EEA     B $+0x1fa621c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF1D4 Offset: 0x10EF1D4 VA: 0x10EF1D4
	internal bool <GetRewardBoxItems>b__2(ChainObject x) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF1D4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EF1D8:  0140A0E1     MOV r4, r1
		   0x010EF1DC:  0050A0E1     MOV r5, r0
		   0x010EF1E0:  000051E3     CMPS r0, r1, 0x0
		   0x010EF1E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF1EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF1E8:  78B0F9EB     BL $-0x193e18
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF1EC:  085095E5     LDR r5, [r5, 0x8]
		   0x010EF1F0:  184094E5     LDR r4, [r4, 0x18]
		   0x010EF1F4:  000055E3     CMPS r0, r5, 0x0
		   0x010EF1F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF200
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF1FC:  73B0F9EB     BL $-0x193e2c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF200:  0C1095E5     LDR r1, [r5, 0xc]
		   0x010EF204:  0400A0E1     MOV r0, r4
		   0x010EF208:  0020A0E3     MOV r2, 0x0
		   0x010EF20C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EF210:  FE5D76EA     B $+0x1d97800  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass154_0 // TypeDefIndex: 1183
{

	// Fields
	public int newID; // 0x8

	// Methods

	// RVA: 0x10EF214 Offset: 0x10EF214 VA: 0x10EF214
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF214:  0010A0E3     MOV r1, 0x0
		   0x010EF218:  73987EEA     B $+0x1fa61d4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF21C Offset: 0x10EF21C VA: 0x10EF21C
	internal bool <GetUnicID>b__0(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF21C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EF220:  0140A0E1     MOV r4, r1
		   0x010EF224:  0050A0E1     MOV r5, r0
		   0x010EF228:  000051E3     CMPS r0, r1, 0x0
		   0x010EF22C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF234
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF230:  66B0F9EB     BL $-0x193e60
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF234:  080095E5     LDR r0, [r5, 0x8]
		   0x010EF238:  081094E5     LDR r1, [r4, 0x8]
		   0x010EF23C:  000041E0     SUB r0, r1, r0
		   0x010EF240:  100F6FE1     CLZ r0, r0
		   0x010EF244:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010EF248:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10EF24C Offset: 0x10EF24C VA: 0x10EF24C
	internal bool <GetUnicID>b__1(ItemDataSave x) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF24C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EF250:  0140A0E1     MOV r4, r1
		   0x010EF254:  0050A0E1     MOV r5, r0
		   0x010EF258:  000051E3     CMPS r0, r1, 0x0
		   0x010EF25C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF264
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF260:  5AB0F9EB     BL $-0x193e90
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF264:  080095E5     LDR r0, [r5, 0x8]
		   0x010EF268:  081094E5     LDR r1, [r4, 0x8]
		   0x010EF26C:  000041E0     SUB r0, r1, r0
		   0x010EF270:  100F6FE1     CLZ r0, r0
		   0x010EF274:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010EF278:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass156_0 // TypeDefIndex: 1184
{

	// Fields
	public GameState <>4__this; // 0x8
	public Transform container; // 0xC
	public Item item; // 0x10
	public ItemFiniteContainer newItem; // 0x14

	// Methods

	// RVA: 0x10EF27C Offset: 0x10EF27C VA: 0x10EF27C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF27C:  0010A0E3     MOV r1, 0x0
		   0x010EF280:  59987EEA     B $+0x1fa616c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF284 Offset: 0x10EF284 VA: 0x10EF284
	internal void <SetupFiniteContainer>b__0(ItemData data, Cell cell) {
		/* Disassembly (ARM32, 143 instructions, 0x23C bytes):
		   // CFG: 24 blocks, 22 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF284:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EF288:  3CD04DE2     SUB sp, sp, 0x3c
		   0x010EF28C:  08429FE5     LDR r4, [pc, 0x208]
		   0x010EF290:  0090A0E1     MOV sb, r0
		   0x010EF294:  0280A0E1     MOV r8, r2
		   0x010EF298:  0160A0E1     MOV r6, r1
		   0x010EF29C:  04408FE0     ADD r4, pc, r4
		   0x010EF2A0:  0000D4E5     LDRB r0, [r4]
		   0x010EF2A4:  000050E3     CMPS r0, r0, 0x0
		   0x010EF2A8:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010EF2E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF2AC:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x010EF2B0:  00009FE7     LDR r0, [pc, r0]
		   0x010EF2B4:  A9AFF9EB     BL $-0x194154
		   0x010EF2B8:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x010EF2BC:  00009FE7     LDR r0, [pc, r0]
		   0x010EF2C0:  A6AFF9EB     BL $-0x194160
		   0x010EF2C4:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x010EF2C8:  00009FE7     LDR r0, [pc, r0]
		   0x010EF2CC:  A3AFF9EB     BL $-0x19416c
		   0x010EF2D0:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x010EF2D4:  00009FE7     LDR r0, [pc, r0]
		   0x010EF2D8:  A0AFF9EB     BL $-0x194178
		   0x010EF2DC:  0100A0E3     MOV r0, 0x1
		   0x010EF2E0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF2E4:  08B099E5     LDR fp, [sb, 0x8]
		   0x010EF2E8:  000056E3     CMPS r0, r6, 0x0
		   0x010EF2EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF2F4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF2F0:  36B0F9EB     BL $-0x193f20
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF2F4:  107099E5     LDR r7, [sb, 0x10]
		   0x010EF2F8:  0CA099E5     LDR r10, [sb, 0xc]
		   0x010EF2FC:  1C50D6E5     LDRB r5, [r6, 0x1c]
		   0x010EF300:  000057E3     CMPS r0, r7, 0x0
		   0x010EF304:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF30C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EF308:  30B0F9EB     BL $-0x193f38
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EF30C:  104097E5     LDR r4, [r7, 0x10]
		   0x010EF310:  000054E3     CMPS r0, r4, 0x0
		   0x010EF314:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF31C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EF318:  2CB0F9EB     BL $-0x193f48
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EF31C:  0400A0E1     MOV r0, r4
		   0x010EF320:  0010A0E3     MOV r1, 0x0
		   0x010EF324:  0070A0E3     MOV r7, 0x0
		   0x010EF328:  DF223CEB     BL $+0xf08b84  // CALL → sub_1FF7EAC
		   0x010EF32C:  0040A0E1     MOV r4, r0
		   0x010EF330:  000050E3     CMPS r0, r0, 0x0
		   0x010EF334:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF33C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EF338:  24B0F9EB     BL $-0x193f68
		   // ──── Block 10 if (!=) ────────────────────
		   0x010EF33C:  30008DE2     ADD r0, sp, 0x30
		   0x010EF340:  0410A0E1     MOV r1, r4
		   0x010EF344:  0020A0E3     MOV r2, 0x0
		   0x010EF348:  95233CEB     BL $+0xf08e5c  // CALL → sub_1FF81A4
		   0x010EF34C:  30109DE5     LDR r1, [sp, 0x30]
		   0x010EF350:  34209DE5     LDR r2, [sp, 0x34]
		   0x010EF354:  54019FE5     LDR r0, [pc, 0x154]
		   0x010EF358:  00009FE7     LDR r0, [pc, r0]
		   0x010EF35C:  34708DE5     STR r7, [sp, 0x34]
		   0x010EF360:  30708DE5     STR r7, [sp, 0x30]
		   0x010EF364:  003090E5     LDR r3, [r0]
		   0x010EF368:  30008DE2     ADD r0, sp, 0x30
		   0x010EF36C:  38708DE5     STR r7, [sp, 0x38]
		   0x010EF370:  1E2D31EB     BL $+0xc4b480  // CALL → Nullable<Vector2>..ctor
		   0x010EF374:  00005BE3     CMPS r0, fp, 0x0
		   0x010EF378:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF380
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010EF37C:  13B0F9EB     BL $-0x193fac
		   // ──── Block 12 if (!=) ────────────────────
		   0x010EF380:  30208DE2     ADD r2, sp, 0x30
		   0x010EF384:  000055E3     CMPS r0, r5, 0x0
		   0x010EF388:  0030A0E3     MOV r3, 0x0
		   0x010EF38C:  08C08DE2     ADD ip, sp, 0x8
		   0x010EF390:  070092E8     LDM r2, {r0, r1, r2}
		   0x010EF394:  01500013     MOVNE r5, 0x1
		   0x010EF398:  0070E0E3     MVN r7, r0, 0x0
		   0x010EF39C:  0140A0E3     MOV r4, 0x1
		   0x010EF3A0:  20308DE5     STR r3, [sp, 0x20]
		   0x010EF3A4:  97008CE8     STM ip, {r0, r1, r2, r4, r7}
		   0x010EF3A8:  0B00A0E1     MOV r0, fp
		   0x010EF3AC:  0610A0E1     MOV r1, r6
		   0x010EF3B0:  28308DE5     STR r3, [sp, 0x28]
		   0x010EF3B4:  0520A0E1     MOV r2, r5
		   0x010EF3B8:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010EF3BC:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010EF3C0:  0830A0E1     MOV r3, r8
		   0x010EF3C4:  24708DE5     STR r7, [sp, 0x24]
		   0x010EF3C8:  10048DE8     STM sp, {r4, r10}
		   0x010EF3CC:  CDA4FFEB     BL $-0x16cc4
		   0x010EF3D0:  0040A0E1     MOV r4, r0
		   0x010EF3D4:  000050E3     CMPS r0, r0, 0x0
		   0x010EF3D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF3E0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010EF3DC:  FBAFF9EB     BL $-0x19400c
		   // ──── Block 14 if (!=) ────────────────────
		   0x010EF3E0:  0400A0E1     MOV r0, r4
		   0x010EF3E4:  0010A0E3     MOV r1, 0x0
		   0x010EF3E8:  AF223CEB     BL $+0xf08ac4  // CALL → sub_1FF7EAC
		   0x010EF3EC:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010EF3F0:  00009FE7     LDR r0, [pc, r0]
		   0x010EF3F4:  000090E5     LDR r0, [r0]
		   0x010EF3F8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EF3FC:  004090E5     LDR r4, [r0]
		   0x010EF400:  000054E3     CMPS r0, r4, 0x0
		   0x010EF404:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF40C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EF408:  F0AFF9EB     BL $-0x194038
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EF40C:  0400A0E1     MOV r0, r4
		   0x010EF410:  0010A0E3     MOV r1, 0x0
		   0x010EF414:  8D0811EB     BL $+0x44223c  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   0x010EF418:  98409FE5     LDR r4, [pc, 0x98]
		   0x010EF41C:  04409FE7     LDR r4, [pc, r4]
		   0x010EF420:  000094E5     LDR r0, [r4]
		   0x010EF424:  741090E5     LDR r1, [r0, 0x74]
		   0x010EF428:  000051E3     CMPS r0, r1, 0x0
		   0x010EF42C:  0100001A     BNE $+0xc  // if (!=) goto 0x010EF438
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010EF430:  97AFF9EB     BL $-0x19419c
		   0x010EF434:  000094E5     LDR r0, [r4]
		   // ──── Block 18 if (!=) ────────────────────
		   0x010EF438:  7C109FE5     LDR r1, [pc, 0x7c]
		   0x010EF43C:  01109FE7     LDR r1, [pc, r1]
		   0x010EF440:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EF444:  001091E5     LDR r1, [r1]
		   0x010EF448:  384090E5     LDR r4, [r0, 0x38]
		   0x010EF44C:  742091E5     LDR r2, [r1, 0x74]
		   0x010EF450:  000052E3     CMPS r0, r2, 0x0
		   0x010EF454:  0100001A     BNE $+0xc  // if (!=) goto 0x010EF460
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010EF458:  0100A0E1     MOV r0, r1
		   0x010EF45C:  8CAFF9EB     BL $-0x1941c8
		   // ──── Block 20 if (!=) ────────────────────
		   0x010EF460:  0400A0E1     MOV r0, r4
		   0x010EF464:  FE15A0E3     MOV r1, 0x3f800000
		   0x010EF468:  0020A0E3     MOV r2, 0x0
		   0x010EF46C:  7CBD03EB     BL $+0xef5f8  // CALL → SoundController.PlaySound
		   0x010EF470:  085099E5     LDR r5, [sb, 0x8]
		   0x010EF474:  144099E5     LDR r4, [sb, 0x14]
		   0x010EF478:  000055E3     CMPS r0, r5, 0x0
		   0x010EF47C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF484
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010EF480:  D2AFF9EB     BL $-0x1940b0
		   // ──── Block 22 if (!=) ────────────────────
		   0x010EF484:  541095E5     LDR r1, [r5, 0x54]
		   0x010EF488:  0400A0E1     MOV r0, r4
		   0x010EF48C:  0020A0E3     MOV r2, 0x0
		   0x010EF490:  F8CD08EB     BL $+0x2337e8  // CALL → EventResourceOver.CheckContainersCharge
		   0x010EF494:  3CD08DE2     ADD sp, sp, 0x3c
		   0x010EF498:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010EF49C:  52CA1303     TSTSEQ ip, r3, 0x52000
		   0x010EF4A0:  309CF802     RSCSEQ sb, r8, 0x3000
		   0x010EF4A4:  3C9CF802     RSCSEQ sb, r8, 0x3c00
		   0x010EF4A8:  7894F802     RSCSEQ sb, r8, 0x78000000
		   0x010EF4AC:  7094F802     RSCSEQ sb, r8, 0x70000000
		   0x010EF4B0:  A09BF802     RSCSEQ sb, r8, 0x28000
		   0x010EF4B4:  F09AF802     RSCSEQ sb, r8, 0xf0000
		   0x010EF4B8:  2893F802     RSCSEQ sb, r8, 0xa0000000
		   0x010EF4BC:  0493F802     RSCSEQ sb, r8, 0x10000000
		*/
	}

	// RVA: 0x10EF4C0 Offset: 0x10EF4C0 VA: 0x10EF4C0
	internal void <SetupFiniteContainer>b__1(ItemData data, Cell cell) {
		/* Disassembly (ARM32, 155 instructions, 0x26C bytes):
		   // CFG: 26 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF4C0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010EF4C4:  40D04DE2     SUB sp, sp, 0x40
		   0x010EF4C8:  38429FE5     LDR r4, [pc, 0x238]
		   0x010EF4CC:  0060A0E1     MOV r6, r0
		   0x010EF4D0:  0280A0E1     MOV r8, r2
		   0x010EF4D4:  01A0A0E1     MOV r10, r1
		   0x010EF4D8:  04408FE0     ADD r4, pc, r4
		   0x010EF4DC:  0000D4E5     LDRB r0, [r4]
		   0x010EF4E0:  000050E3     CMPS r0, r0, 0x0
		   0x010EF4E4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010EF520
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF4E8:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x010EF4EC:  00009FE7     LDR r0, [pc, r0]
		   0x010EF4F0:  1AAFF9EB     BL $-0x194390
		   0x010EF4F4:  14029FE5     LDR r0, [pc, 0x214]
		   0x010EF4F8:  00009FE7     LDR r0, [pc, r0]
		   0x010EF4FC:  17AFF9EB     BL $-0x19439c
		   0x010EF500:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x010EF504:  00009FE7     LDR r0, [pc, r0]
		   0x010EF508:  14AFF9EB     BL $-0x1943a8
		   0x010EF50C:  04029FE5     LDR r0, [pc, 0x204]
		   0x010EF510:  00009FE7     LDR r0, [pc, r0]
		   0x010EF514:  11AFF9EB     BL $-0x1943b4
		   0x010EF518:  0100A0E3     MOV r0, 0x1
		   0x010EF51C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF520:  F4419FE5     LDR r4, [pc, 0x1f4]
		   0x010EF524:  04409FE7     LDR r4, [pc, r4]
		   0x010EF528:  000094E5     LDR r0, [r4]
		   0x010EF52C:  741090E5     LDR r1, [r0, 0x74]
		   0x010EF530:  000051E3     CMPS r0, r1, 0x0
		   0x010EF534:  0100001A     BNE $+0xc  // if (!=) goto 0x010EF540
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF538:  55AFF9EB     BL $-0x1942a4
		   0x010EF53C:  000094E5     LDR r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF540:  D8119FE5     LDR r1, [pc, 0x1d8]
		   0x010EF544:  01109FE7     LDR r1, [pc, r1]
		   0x010EF548:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EF54C:  001091E5     LDR r1, [r1]
		   0x010EF550:  4C4090E5     LDR r4, [r0, 0x4c]
		   0x010EF554:  742091E5     LDR r2, [r1, 0x74]
		   0x010EF558:  000052E3     CMPS r0, r2, 0x0
		   0x010EF55C:  0100001A     BNE $+0xc  // if (!=) goto 0x010EF568
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EF560:  0100A0E1     MOV r0, r1
		   0x010EF564:  4AAFF9EB     BL $-0x1942d0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EF568:  0400A0E1     MOV r0, r4
		   0x010EF56C:  FE15A0E3     MOV r1, 0x3f800000
		   0x010EF570:  0020A0E3     MOV r2, 0x0
		   0x010EF574:  3ABD03EB     BL $+0xef4f0  // CALL → SoundController.PlaySound
		   0x010EF578:  084096E5     LDR r4, [r6, 0x8]
		   0x010EF57C:  000054E3     CMPS r0, r4, 0x0
		   0x010EF580:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF588
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EF584:  91AFF9EB     BL $-0x1941b4
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EF588:  4C4094E5     LDR r4, [r4, 0x4c]
		   0x010EF58C:  000054E3     CMPS r0, r4, 0x0
		   0x010EF590:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF598
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EF594:  8DAFF9EB     BL $-0x1941c4
		   // ──── Block 10 if (!=) ────────────────────
		   0x010EF598:  0C2094E5     LDR r2, [r4, 0xc]
		   0x010EF59C:  141094E5     LDR r1, [r4, 0x14]
		   0x010EF5A0:  200094E5     LDR r0, [r4, 0x20]
		   0x010EF5A4:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x010EF5A8:  087096E5     LDR r7, [r6, 0x8]
		   0x010EF5AC:  144096E5     LDR r4, [r6, 0x14]
		   0x010EF5B0:  000057E3     CMPS r0, r7, 0x0
		   0x010EF5B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF5BC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010EF5B8:  84AFF9EB     BL $-0x1941e8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010EF5BC:  0000A0E3     MOV r0, 0x0
		   0x010EF5C0:  0410A0E1     MOV r1, r4
		   0x010EF5C4:  00008DE5     STR r0, [sp]
		   0x010EF5C8:  0020A0E3     MOV r2, 0x0
		   0x010EF5CC:  04008DE5     STR r0, [sp, 0x4]
		   0x010EF5D0:  0030A0E3     MOV r3, 0x0
		   0x010EF5D4:  08008DE5     STR r0, [sp, 0x8]
		   0x010EF5D8:  0C008DE5     STR r0, [sp, 0xc]
		   0x010EF5DC:  0700A0E1     MOV r0, r7
		   0x010EF5E0:  C8C6FFEB     BL $-0xe4d8
		   0x010EF5E4:  00005AE3     CMPS r0, r10, 0x0
		   0x010EF5E8:  3900000A     BEQ $+0xec  // if (==) goto 0x010EF6D4
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x010EF5EC:  104096E5     LDR r4, [r6, 0x10]
		   0x010EF5F0:  087096E5     LDR r7, [r6, 0x8]
		   0x010EF5F4:  0C9096E5     LDR sb, [r6, 0xc]
		   0x010EF5F8:  000054E3     CMPS r0, r4, 0x0
		   0x010EF5FC:  1C60DAE5     LDRB r6, [r10, 0x1c]
		   0x010EF600:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF608
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010EF604:  71AFF9EB     BL $-0x194234
		   // ──── Block 15 if (!=) ────────────────────
		   0x010EF608:  104094E5     LDR r4, [r4, 0x10]
		   0x010EF60C:  000054E3     CMPS r0, r4, 0x0
		   0x010EF610:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF618
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010EF614:  6DAFF9EB     BL $-0x194244
		   // ──── Block 17 if (!=) ────────────────────
		   0x010EF618:  0400A0E1     MOV r0, r4
		   0x010EF61C:  0010A0E3     MOV r1, 0x0
		   0x010EF620:  0050A0E3     MOV r5, 0x0
		   0x010EF624:  20223CEB     BL $+0xf08888  // CALL → sub_1FF7EAC
		   0x010EF628:  0040A0E1     MOV r4, r0
		   0x010EF62C:  000050E3     CMPS r0, r0, 0x0
		   0x010EF630:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF638
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010EF634:  65AFF9EB     BL $-0x194264
		   // ──── Block 19 if (!=) ────────────────────
		   0x010EF638:  30008DE2     ADD r0, sp, 0x30
		   0x010EF63C:  0410A0E1     MOV r1, r4
		   0x010EF640:  0020A0E3     MOV r2, 0x0
		   0x010EF644:  D6223CEB     BL $+0xf08b60  // CALL → sub_1FF81A4
		   0x010EF648:  30109DE5     LDR r1, [sp, 0x30]
		   0x010EF64C:  34209DE5     LDR r2, [sp, 0x34]
		   0x010EF650:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010EF654:  00009FE7     LDR r0, [pc, r0]
		   0x010EF658:  34508DE5     STR r5, [sp, 0x34]
		   0x010EF65C:  30508DE5     STR r5, [sp, 0x30]
		   0x010EF660:  003090E5     LDR r3, [r0]
		   0x010EF664:  30008DE2     ADD r0, sp, 0x30
		   0x010EF668:  38508DE5     STR r5, [sp, 0x38]
		   0x010EF66C:  5F2C31EB     BL $+0xc4b184  // CALL → Nullable<Vector2>..ctor
		   0x010EF670:  000057E3     CMPS r0, r7, 0x0
		   0x010EF674:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF67C
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010EF678:  54AFF9EB     BL $-0x1942a8
		   // ──── Block 21 if (!=) ────────────────────
		   0x010EF67C:  30208DE2     ADD r2, sp, 0x30
		   0x010EF680:  000056E3     CMPS r0, r6, 0x0
		   0x010EF684:  0030A0E3     MOV r3, 0x0
		   0x010EF688:  08C08DE2     ADD ip, sp, 0x8
		   0x010EF68C:  070092E8     LDM r2, {r0, r1, r2}
		   0x010EF690:  01600013     MOVNE r6, 0x1
		   0x010EF694:  0050E0E3     MVN r5, r0, 0x0
		   0x010EF698:  0140A0E3     MOV r4, 0x1
		   0x010EF69C:  20308DE5     STR r3, [sp, 0x20]
		   0x010EF6A0:  37008CE8     STM ip, {r0, r1, r2, r4, r5}
		   0x010EF6A4:  0700A0E1     MOV r0, r7
		   0x010EF6A8:  0A10A0E1     MOV r1, r10
		   0x010EF6AC:  28308DE5     STR r3, [sp, 0x28]
		   0x010EF6B0:  0620A0E1     MOV r2, r6
		   0x010EF6B4:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010EF6B8:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010EF6BC:  0830A0E1     MOV r3, r8
		   0x010EF6C0:  24508DE5     STR r5, [sp, 0x24]
		   0x010EF6C4:  10028DE8     STM sp, {r4, sb}
		   0x010EF6C8:  0EA4FFEB     BL $-0x16fc0
		   0x010EF6CC:  40D08DE2     ADD sp, sp, 0x40
		   0x010EF6D0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   // ──── Block 22 if (==) ────────────────────
		   0x010EF6D4:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010EF6D8:  00009FE7     LDR r0, [pc, r0]
		   0x010EF6DC:  000090E5     LDR r0, [r0]
		   0x010EF6E0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010EF6E4:  004090E5     LDR r4, [r0]
		   0x010EF6E8:  000054E3     CMPS r0, r4, 0x0
		   0x010EF6EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF6F4
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010EF6F0:  36AFF9EB     BL $-0x194320
		   // ──── Block 24 if (!=) ────────────────────
		   0x010EF6F4:  0400A0E1     MOV r0, r4
		   0x010EF6F8:  0010A0E3     MOV r1, 0x0
		   0x010EF6FC:  40D08DE2     ADD sp, sp, 0x40
		   0x010EF700:  F047BDE8     POP {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010EF704:  000811EA     B $+0x442008  // TAIL CALL → FTUERewardsBox.FieldCellFreed
		   0x010EF708:  17C81303     TSTSEQ ip, r3, 0x170000
		   0x010EF70C:  F499F802     RSCSEQ sb, r8, 0x3d0000
		   0x010EF710:  009AF802     RSCSEQ sb, r8, 0x0
		   0x010EF714:  3C92F802     RSCSEQ sb, r8, 0xc0000003
		   0x010EF718:  3492F802     RSCSEQ sb, r8, 0x40000003
		   0x010EF71C:  2092F802     RSCSEQ sb, r8, 0x2
		   0x010EF720:  FC91F802     RSCSEQ sb, r8, 0x3f
		   0x010EF724:  A498F802     RSCSEQ sb, r8, 0xa40000
		   0x010EF728:  0898F802     RSCSEQ sb, r8, 0x80000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass76_0 // TypeDefIndex: 1185
{

	// Fields
	public Item item; // 0x8

	// Methods

	// RVA: 0x10EF72C Offset: 0x10EF72C VA: 0x10EF72C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF72C:  0010A0E3     MOV r1, 0x0
		   0x010EF730:  2D977EEA     B $+0x1fa5cbc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF734 Offset: 0x10EF734 VA: 0x10EF734
	internal bool <GetSimilarUnchargedItem>b__0(Item i) {
		/* Disassembly (ARM32, 124 instructions, 0x1F0 bytes):
		   // CFG: 31 blocks, 36 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF734:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010EF738:  D0619FE5     LDR r6, [pc, 0x1d0]
		   0x010EF73C:  0050A0E1     MOV r5, r0
		   0x010EF740:  0140A0E1     MOV r4, r1
		   0x010EF744:  06608FE0     ADD r6, pc, r6
		   0x010EF748:  0000D6E5     LDRB r0, [r6]
		   0x010EF74C:  000050E3     CMPS r0, r0, 0x0
		   0x010EF750:  0700001A     BNE $+0x24  // if (!=) goto 0x010EF774
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF754:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x010EF758:  00009FE7     LDR r0, [pc, r0]
		   0x010EF75C:  7FAEF9EB     BL $-0x1945fc
		   0x010EF760:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x010EF764:  00009FE7     LDR r0, [pc, r0]
		   0x010EF768:  7CAEF9EB     BL $-0x194608
		   0x010EF76C:  0100A0E3     MOV r0, 0x1
		   0x010EF770:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF774:  000054E3     CMPS r0, r4, 0x0
		   0x010EF778:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF780
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF77C:  13AFF9EB     BL $-0x1943ac
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF780:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x010EF784:  0060A0E3     MOV r6, 0x0
		   0x010EF788:  000050E3     CMPS r0, r0, 0x0
		   0x010EF78C:  5D00001A     BNE $+0x17c  // if (!=) goto 0x010EF908
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EF790:  84019FE5     LDR r0, [pc, 0x184]
		   0x010EF794:  00009FE7     LDR r0, [pc, r0]
		   0x010EF798:  087095E5     LDR r7, [r5, 0x8]
		   0x010EF79C:  000090E5     LDR r0, [r0]
		   0x010EF7A0:  741090E5     LDR r1, [r0, 0x74]
		   0x010EF7A4:  000051E3     CMPS r0, r1, 0x0
		   0x010EF7A8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF7B0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EF7AC:  B8AEF9EB     BL $-0x194518
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EF7B0:  0400A0E1     MOV r0, r4
		   0x010EF7B4:  0710A0E1     MOV r1, r7
		   0x010EF7B8:  0020A0E3     MOV r2, 0x0
		   0x010EF7BC:  0060A0E3     MOV r6, 0x0
		   0x010EF7C0:  EBD4FCEB     BL $-0xcac4c
		   0x010EF7C4:  000050E3     CMPS r0, r0, 0x0
		   0x010EF7C8:  4E00000A     BEQ $+0x140  // if (==) goto 0x010EF908
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x010EF7CC:  0400A0E1     MOV r0, r4
		   0x010EF7D0:  0010A0E3     MOV r1, 0x0
		   0x010EF7D4:  0060A0E3     MOV r6, 0x0
		   0x010EF7D8:  7E6800EB     BL $+0x1a200  // CALL → Item.get_chainName
		   0x010EF7DC:  087095E5     LDR r7, [r5, 0x8]
		   0x010EF7E0:  0080A0E1     MOV r8, r0
		   0x010EF7E4:  000057E3     CMPS r0, r7, 0x0
		   0x010EF7E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF7F0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EF7EC:  F7AEF9EB     BL $-0x19441c
		   // ──── Block 10 if (!=) ────────────────────
		   0x010EF7F0:  0700A0E1     MOV r0, r7
		   0x010EF7F4:  0010A0E3     MOV r1, 0x0
		   0x010EF7F8:  766800EB     BL $+0x1a1e0  // CALL → Item.get_chainName
		   0x010EF7FC:  0010A0E1     MOV r1, r0
		   0x010EF800:  0800A0E1     MOV r0, r8
		   0x010EF804:  0020A0E3     MOV r2, 0x0
		   0x010EF808:  805C76EB     BL $+0x1d97208  // CALL → String.op_Equality
		   0x010EF80C:  000050E3     CMPS r0, r0, 0x0
		   0x010EF810:  3C00000A     BEQ $+0xf8  // if (==) goto 0x010EF908
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x010EF814:  0400A0E1     MOV r0, r4
		   0x010EF818:  0010A0E3     MOV r1, 0x0
		   0x010EF81C:  0060A0E3     MOV r6, 0x0
		   0x010EF820:  156700EB     BL $+0x19c5c  // CALL → Item.get_interactable
		   0x010EF824:  000050E3     CMPS r0, r0, 0x0
		   0x010EF828:  3600000A     BEQ $+0xe0  // if (==) goto 0x010EF908
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x010EF82C:  847094E5     LDR r7, [r4, 0x84]
		   0x010EF830:  000057E3     CMPS r0, r7, 0x0
		   0x010EF834:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF83C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010EF838:  E4AEF9EB     BL $-0x194468
		   // ──── Block 14 if (!=) ────────────────────
		   0x010EF83C:  088095E5     LDR r8, [r5, 0x8]
		   0x010EF840:  4C9097E5     LDR sb, [r7, 0x4c]
		   0x010EF844:  000058E3     CMPS r0, r8, 0x0
		   0x010EF848:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF850
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EF84C:  DFAEF9EB     BL $-0x19447c
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EF850:  847098E5     LDR r7, [r8, 0x84]
		   0x010EF854:  000057E3     CMPS r0, r7, 0x0
		   0x010EF858:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF860
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010EF85C:  DBAEF9EB     BL $-0x19448c
		   // ──── Block 18 if (!=) ────────────────────
		   0x010EF860:  4C0097E5     LDR r0, [r7, 0x4c]
		   0x010EF864:  000059E1     CMPS r0, sb, r0
		   0x010EF868:  2600001A     BNE $+0xa0  // if (!=) goto 0x010EF908
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010EF86C:  846094E5     LDR r6, [r4, 0x84]
		   0x010EF870:  000056E3     CMPS r0, r6, 0x0
		   0x010EF874:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF87C
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x010EF878:  D4AEF9EB     BL $-0x1944a8
		   // ──── Block 21 if (!=) ────────────────────
		   0x010EF87C:  0600A0E1     MOV r0, r6
		   0x010EF880:  0010A0E3     MOV r1, 0x0
		   0x010EF884:  576900EB     BL $+0x1a564  // CALL → ItemData.get_Order
		   0x010EF888:  085095E5     LDR r5, [r5, 0x8]
		   0x010EF88C:  0070A0E1     MOV r7, r0
		   0x010EF890:  000055E3     CMPS r0, r5, 0x0
		   0x010EF894:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF89C
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010EF898:  CCAEF9EB     BL $-0x1944c8
		   // ──── Block 23 if (!=) ────────────────────
		   0x010EF89C:  845095E5     LDR r5, [r5, 0x84]
		   0x010EF8A0:  000055E3     CMPS r0, r5, 0x0
		   0x010EF8A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF8AC
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010EF8A8:  C8AEF9EB     BL $-0x1944d8
		   // ──── Block 25 if (!=) ────────────────────
		   0x010EF8AC:  0500A0E1     MOV r0, r5
		   0x010EF8B0:  0010A0E3     MOV r1, 0x0
		   0x010EF8B4:  0060A0E3     MOV r6, 0x0
		   0x010EF8B8:  4A6900EB     BL $+0x1a530  // CALL → ItemData.get_Order
		   0x010EF8BC:  000057E1     CMPS r0, r7, r0
		   0x010EF8C0:  1000001A     BNE $+0x48  // if (!=) goto 0x010EF908
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010EF8C4:  54009FE5     LDR r0, [pc, 0x54]
		   0x010EF8C8:  00009FE7     LDR r0, [pc, r0]
		   0x010EF8CC:  001094E5     LDR r1, [r4]
		   0x010EF8D0:  000090E5     LDR r0, [r0]
		   0x010EF8D4:  B830D1E5     LDRB r3, [r1, 0xb8]
		   0x010EF8D8:  B820D0E5     LDRB r2, [r0, 0xb8]
		   0x010EF8DC:  020053E1     CMPS r0, r3, r2
		   0x010EF8E0:  0800003A     BLO $+0x28  // if (< (unsigned)) goto 0x010EF908
		   // 
		   // ──── Block 27 else (>= (unsigned)) ────────────────────
		   0x010EF8E4:  641091E5     LDR r1, [r1, 0x64]
		   0x010EF8E8:  021181E0     ADD r1, r1, r2, lsl 2
		   0x010EF8EC:  041011E5     LDR r1, [r1, -0x4]
		   0x010EF8F0:  000051E1     CMPS r0, r1, r0
		   0x010EF8F4:  0300001A     BNE $+0x14  // if (!=) goto 0x010EF908
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010EF8F8:  0400A0E1     MOV r0, r4
		   0x010EF8FC:  0010A0E3     MOV r1, 0x0
		   0x010EF900:  0A8500EB     BL $+0x21430  // CALL → ItemContainer.get_hasCapacity
		   0x010EF904:  016020E2     EOR r6, r0, 0x1
		   // ──── Block 29 (from 8 paths) ──────────────────
		   0x010EF908:  0600A0E1     MOV r0, r6
		   0x010EF90C:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x010EF910:  ACC51303     TSTSEQ ip, r3, 0x2b000000
		   0x010EF914:  7098F802     RSCSEQ sb, r8, 0x700000
		   0x010EF918:  D46DF802     RSCSEQ r6, r8, 0x3500
		   0x010EF91C:  A46DF802     RSCSEQ r6, r8, 0x2900
		   0x010EF920:  0097F802     RSCSEQ sb, r8, 0x0
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass80_0 // TypeDefIndex: 1186
{

	// Fields
	public GameState <>4__this; // 0x8
	public FieldGroup fieldGroup; // 0xC

	// Methods

	// RVA: 0x10EF924 Offset: 0x10EF924 VA: 0x10EF924
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF924:  0010A0E3     MOV r1, 0x0
		   0x010EF928:  AF967EEA     B $+0x1fa5ac4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF92C Offset: 0x10EF92C VA: 0x10EF92C
	internal void <SetGameStateAndLoadSeasonField>b__0() {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF92C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010EF930:  08D04DE2     SUB sp, sp, 0x8
		   0x010EF934:  087080E2     ADD r7, r0, 0x8
		   0x010EF938:  F00097E8     LDM r7, {r4, r5, r6, r7}
		   0x010EF93C:  000054E3     CMPS r0, r4, 0x0
		   0x010EF940:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF948
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF944:  A1AEF9EB     BL $-0x194574
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF948:  0000A0E3     MOV r0, 0x0
		   0x010EF94C:  0510A0E1     MOV r1, r5
		   0x010EF950:  00008DE5     STR r0, [sp]
		   0x010EF954:  0400A0E1     MOV r0, r4
		   0x010EF958:  0620A0E1     MOV r2, r6
		   0x010EF95C:  0730A0E1     MOV r3, r7
		   0x010EF960:  82C1FFEB     BL $-0xf9f0
		   0x010EF964:  08D08DE2     ADD sp, sp, 0x8
		   0x010EF968:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass81_0 // TypeDefIndex: 1187
{

	// Fields
	public ItemDataSave itemDataSave; // 0x8

	// Methods

	// RVA: 0x10EF96C Offset: 0x10EF96C VA: 0x10EF96C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF96C:  0010A0E3     MOV r1, 0x0
		   0x010EF970:  9D967EEA     B $+0x1fa5a7c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF974 Offset: 0x10EF974 VA: 0x10EF974
	internal bool <InitInventory>b__0(ChainObject x) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF974:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EF978:  0140A0E1     MOV r4, r1
		   0x010EF97C:  0050A0E1     MOV r5, r0
		   0x010EF980:  000051E3     CMPS r0, r1, 0x0
		   0x010EF984:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF98C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF988:  90AEF9EB     BL $-0x1945b8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF98C:  085095E5     LDR r5, [r5, 0x8]
		   0x010EF990:  184094E5     LDR r4, [r4, 0x18]
		   0x010EF994:  000055E3     CMPS r0, r5, 0x0
		   0x010EF998:  0000001A     BNE $+0x8  // if (!=) goto 0x010EF9A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF99C:  8BAEF9EB     BL $-0x1945cc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EF9A0:  241095E5     LDR r1, [r5, 0x24]
		   0x010EF9A4:  0400A0E1     MOV r0, r4
		   0x010EF9A8:  0020A0E3     MOV r2, 0x0
		   0x010EF9AC:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EF9B0:  165C76EA     B $+0x1d97060  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass82_0 // TypeDefIndex: 1188
{

	// Fields
	public List<string> sourcesChains; // 0x8
	public GameState <>4__this; // 0xC
	public Func<ItemData, bool> <>9__0; // 0x10

	// Methods

	// RVA: 0x10EF9B4 Offset: 0x10EF9B4 VA: 0x10EF9B4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EF9B4:  0010A0E3     MOV r1, 0x0
		   0x010EF9B8:  8B967EEA     B $+0x1fa5a34  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EF9BC Offset: 0x10EF9BC VA: 0x10EF9BC
	internal bool <GetSourceContainers>b__0(ItemData source) {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EF9BC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EF9C0:  78609FE5     LDR r6, [pc, 0x78]
		   0x010EF9C4:  0040A0E1     MOV r4, r0
		   0x010EF9C8:  0150A0E1     MOV r5, r1
		   0x010EF9CC:  06608FE0     ADD r6, pc, r6
		   0x010EF9D0:  0000D6E5     LDRB r0, [r6]
		   0x010EF9D4:  000050E3     CMPS r0, r0, 0x0
		   0x010EF9D8:  0400001A     BNE $+0x18  // if (!=) goto 0x010EF9F0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EF9DC:  60009FE5     LDR r0, [pc, 0x60]
		   0x010EF9E0:  00009FE7     LDR r0, [pc, r0]
		   0x010EF9E4:  DDADF9EB     BL $-0x194884
		   0x010EF9E8:  0100A0E3     MOV r0, 0x1
		   0x010EF9EC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EF9F0:  084094E5     LDR r4, [r4, 0x8]
		   0x010EF9F4:  000055E3     CMPS r0, r5, 0x0
		   0x010EF9F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFA00
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EF9FC:  73AEF9EB     BL $-0x19462c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFA00:  085095E5     LDR r5, [r5, 0x8]
		   0x010EFA04:  000055E3     CMPS r0, r5, 0x0
		   0x010EFA08:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFA10
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EFA0C:  6FAEF9EB     BL $-0x19463c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EFA10:  185095E5     LDR r5, [r5, 0x18]
		   0x010EFA14:  000054E3     CMPS r0, r4, 0x0
		   0x010EFA18:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFA20
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EFA1C:  6BAEF9EB     BL $-0x19464c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EFA20:  20009FE5     LDR r0, [pc, 0x20]
		   0x010EFA24:  0510A0E1     MOV r1, r5
		   0x010EFA28:  00009FE7     LDR r0, [pc, r0]
		   0x010EFA2C:  002090E5     LDR r2, [r0]
		   0x010EFA30:  0400A0E1     MOV r0, r4
		   0x010EFA34:  480D6CEB     BL $+0x1b03528  // CALL → List<object>.Contains
		   0x010EFA38:  010020E2     EOR r0, r0, 0x1
		   0x010EFA3C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010EFA40:  25C31303     TSTSEQ ip, r3, 0x94000000
		   0x010EFA44:  DC86F802     RSCSEQ r8, r8, 0xdc00000
		   0x010EFA48:  9486F802     RSCSEQ r8, r8, 0x9400000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass82_1 // TypeDefIndex: 1189
{

	// Fields
	public string chain; // 0x8
	public GameState.<>c__DisplayClass82_0 CS$<>8__locals1; // 0xC

	// Methods

	// RVA: 0x10EFA4C Offset: 0x10EFA4C VA: 0x10EFA4C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EFA4C:  0010A0E3     MOV r1, 0x0
		   0x010EFA50:  65967EEA     B $+0x1fa599c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EFA54 Offset: 0x10EFA54 VA: 0x10EFA54
	internal bool <GetSourceContainers>b__1(ItemData x) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFA54:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010EFA58:  0140A0E1     MOV r4, r1
		   0x010EFA5C:  0050A0E1     MOV r5, r0
		   0x010EFA60:  000051E3     CMPS r0, r1, 0x0
		   0x010EFA64:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFA6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EFA68:  58AEF9EB     BL $-0x194698
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EFA6C:  086094E5     LDR r6, [r4, 0x8]
		   0x010EFA70:  000056E3     CMPS r0, r6, 0x0
		   0x010EFA74:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFA7C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EFA78:  54AEF9EB     BL $-0x1946a8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFA7C:  180096E5     LDR r0, [r6, 0x18]
		   0x010EFA80:  0020A0E3     MOV r2, 0x0
		   0x010EFA84:  081095E5     LDR r1, [r5, 0x8]
		   0x010EFA88:  0060A0E3     MOV r6, 0x0
		   0x010EFA8C:  DF5B76EB     BL $+0x1d96f84  // CALL → String.op_Equality
		   0x010EFA90:  000050E3     CMPS r0, r0, 0x0
		   0x010EFA94:  0F00000A     BEQ $+0x44  // if (==) goto 0x010EFAD8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010EFA98:  0C6095E5     LDR r6, [r5, 0xc]
		   0x010EFA9C:  A05094E5     LDR r5, [r4, 0xa0]
		   0x010EFAA0:  000056E3     CMPS r0, r6, 0x0
		   0x010EFAA4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFAAC
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010EFAA8:  48AEF9EB     BL $-0x1946d8
		   // ──── Block 7 if (!=) ────────────────────
		   0x010EFAAC:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010EFAB0:  000054E3     CMPS r0, r4, 0x0
		   0x010EFAB4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFABC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EFAB8:  44AEF9EB     BL $-0x1946e8
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EFABC:  0400A0E1     MOV r0, r4
		   0x010EFAC0:  0010A0E3     MOV r1, 0x0
		   0x010EFAC4:  0060A0E3     MOV r6, 0x0
		   0x010EFAC8:  5EAEFFEB     BL $-0x14680
		   0x010EFACC:  010080E2     ADD r0, r0, 0x1
		   0x010EFAD0:  000055E1     CMPS r0, r5, r0
		   0x010EFAD4:  016000D3     MOVLE r6, 0x1
		   // ──── Block 10 if (==) ────────────────────
		   0x010EFAD8:  0600A0E1     MOV r0, r6
		   0x010EFADC:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass82_2 // TypeDefIndex: 1190
{

	// Fields
	public ItemData source; // 0x8

	// Methods

	// RVA: 0x10EFAE0 Offset: 0x10EFAE0 VA: 0x10EFAE0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EFAE0:  0010A0E3     MOV r1, 0x0
		   0x010EFAE4:  40967EEA     B $+0x1fa5908  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EFAE8 Offset: 0x10EFAE8 VA: 0x10EFAE8
	internal bool <GetSourceContainers>b__4(Item x) {
		/* Disassembly (ARM32, 58 instructions, 0xE8 bytes):
		   // CFG: 18 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFAE8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010EFAEC:  0140A0E1     MOV r4, r1
		   0x010EFAF0:  0050A0E1     MOV r5, r0
		   0x010EFAF4:  000051E3     CMPS r0, r1, 0x0
		   0x010EFAF8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFB00
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EFAFC:  33AEF9EB     BL $-0x19472c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EFB00:  0400A0E1     MOV r0, r4
		   0x010EFB04:  0010A0E3     MOV r1, 0x0
		   0x010EFB08:  B26700EB     BL $+0x19ed0  // CALL → Item.get_chainName
		   0x010EFB0C:  086095E5     LDR r6, [r5, 0x8]
		   0x010EFB10:  0070A0E1     MOV r7, r0
		   0x010EFB14:  000056E3     CMPS r0, r6, 0x0
		   0x010EFB18:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFB20
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EFB1C:  2BAEF9EB     BL $-0x19474c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFB20:  086096E5     LDR r6, [r6, 0x8]
		   0x010EFB24:  000056E3     CMPS r0, r6, 0x0
		   0x010EFB28:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFB30
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EFB2C:  27AEF9EB     BL $-0x19475c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EFB30:  181096E5     LDR r1, [r6, 0x18]
		   0x010EFB34:  0700A0E1     MOV r0, r7
		   0x010EFB38:  0020A0E3     MOV r2, 0x0
		   0x010EFB3C:  0060A0E3     MOV r6, 0x0
		   0x010EFB40:  B25B76EB     BL $+0x1d96ed0  // CALL → String.op_Equality
		   0x010EFB44:  000050E3     CMPS r0, r0, 0x0
		   0x010EFB48:  1600000A     BEQ $+0x60  // if (==) goto 0x010EFBA8
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010EFB4C:  000054E3     CMPS r0, r4, 0x0
		   0x010EFB50:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFB58
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EFB54:  1DAEF9EB     BL $-0x194784
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EFB58:  847094E5     LDR r7, [r4, 0x84]
		   0x010EFB5C:  000057E3     CMPS r0, r7, 0x0
		   0x010EFB60:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFB68
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EFB64:  19AEF9EB     BL $-0x194794
		   // ──── Block 11 if (!=) ────────────────────
		   0x010EFB68:  0700A0E1     MOV r0, r7
		   0x010EFB6C:  0010A0E3     MOV r1, 0x0
		   0x010EFB70:  0060A0E3     MOV r6, 0x0
		   0x010EFB74:  9B6800EB     BL $+0x1a274  // CALL → ItemData.get_Order
		   0x010EFB78:  085095E5     LDR r5, [r5, 0x8]
		   0x010EFB7C:  0070A0E1     MOV r7, r0
		   0x010EFB80:  000055E3     CMPS r0, r5, 0x0
		   0x010EFB84:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFB8C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010EFB88:  10AEF9EB     BL $-0x1947b8
		   // ──── Block 13 if (!=) ────────────────────
		   0x010EFB8C:  0500A0E1     MOV r0, r5
		   0x010EFB90:  0010A0E3     MOV r1, 0x0
		   0x010EFB94:  936800EB     BL $+0x1a254  // CALL → ItemData.get_Order
		   0x010EFB98:  000057E1     CMPS r0, r7, r0
		   0x010EFB9C:  3800D405     LDRBEQ r0, [r4, 0x38]
		   0x010EFBA0:  00005003     CMPSEQ r0, r0, 0x0
		   0x010EFBA4:  0100000A     BEQ $+0xc  // if (==) goto 0x010EFBB0
		   // 
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x010EFBA8:  0600A0E1     MOV r0, r6
		   0x010EFBAC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 15 if (==) ────────────────────
		   0x010EFBB0:  844094E5     LDR r4, [r4, 0x84]
		   0x010EFBB4:  000054E3     CMPS r0, r4, 0x0
		   0x010EFBB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFBC0
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010EFBBC:  03AEF9EB     BL $-0x1947ec
		   // ──── Block 17 if (!=) ────────────────────
		   0x010EFBC0:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010EFBC4:  056050E2     SUBS r6, r0, 0x5
		   0x010EFBC8:  01600013     MOVNE r6, 0x1
		   0x010EFBCC:  F5FFFFEA     B $-0x24
		*/
	}

	// RVA: 0x10EFBD0 Offset: 0x10EFBD0 VA: 0x10EFBD0
	internal bool <GetSourceContainers>b__5(ItemDataSave x) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFBD0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010EFBD4:  0140A0E1     MOV r4, r1
		   0x010EFBD8:  0050A0E1     MOV r5, r0
		   0x010EFBDC:  000051E3     CMPS r0, r1, 0x0
		   0x010EFBE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFBE8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EFBE4:  F9ADF9EB     BL $-0x194814
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EFBE8:  087095E5     LDR r7, [r5, 0x8]
		   0x010EFBEC:  246094E5     LDR r6, [r4, 0x24]
		   0x010EFBF0:  000057E3     CMPS r0, r7, 0x0
		   0x010EFBF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFBFC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EFBF8:  F4ADF9EB     BL $-0x194828
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFBFC:  087097E5     LDR r7, [r7, 0x8]
		   0x010EFC00:  000057E3     CMPS r0, r7, 0x0
		   0x010EFC04:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFC0C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EFC08:  F0ADF9EB     BL $-0x194838
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EFC0C:  181097E5     LDR r1, [r7, 0x18]
		   0x010EFC10:  0600A0E1     MOV r0, r6
		   0x010EFC14:  0020A0E3     MOV r2, 0x0
		   0x010EFC18:  0070A0E3     MOV r7, 0x0
		   0x010EFC1C:  7B5B76EB     BL $+0x1d96df4  // CALL → String.op_Equality
		   0x010EFC20:  000050E3     CMPS r0, r0, 0x0
		   0x010EFC24:  0A00000A     BEQ $+0x30  // if (==) goto 0x010EFC54
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010EFC28:  085095E5     LDR r5, [r5, 0x8]
		   0x010EFC2C:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010EFC30:  000055E3     CMPS r0, r5, 0x0
		   0x010EFC34:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFC3C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EFC38:  E4ADF9EB     BL $-0x194868
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EFC3C:  0500A0E1     MOV r0, r5
		   0x010EFC40:  0010A0E3     MOV r1, 0x0
		   0x010EFC44:  676800EB     BL $+0x1a1a4  // CALL → ItemData.get_Order
		   0x010EFC48:  000044E0     SUB r0, r4, r0
		   0x010EFC4C:  100F6FE1     CLZ r0, r0
		   0x010EFC50:  A072A0E1     MOV r7, r0, r0, lsr 5
		   // ──── Block 10 if (==) ────────────────────
		   0x010EFC54:  0700A0E1     MOV r0, r7
		   0x010EFC58:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass86_0 // TypeDefIndex: 1191
{

	// Fields
	public ItemDataSave itemDataSave; // 0x8

	// Methods

	// RVA: 0x10EFC5C Offset: 0x10EFC5C VA: 0x10EFC5C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EFC5C:  0010A0E3     MOV r1, 0x0
		   0x010EFC60:  E1957EEA     B $+0x1fa578c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EFC64 Offset: 0x10EFC64 VA: 0x10EFC64
	internal bool <CreateField>b__2(ChainObject x) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFC64:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EFC68:  0140A0E1     MOV r4, r1
		   0x010EFC6C:  0050A0E1     MOV r5, r0
		   0x010EFC70:  000051E3     CMPS r0, r1, 0x0
		   0x010EFC74:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFC7C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EFC78:  D4ADF9EB     BL $-0x1948a8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EFC7C:  085095E5     LDR r5, [r5, 0x8]
		   0x010EFC80:  184094E5     LDR r4, [r4, 0x18]
		   0x010EFC84:  000055E3     CMPS r0, r5, 0x0
		   0x010EFC88:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFC90
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EFC8C:  CFADF9EB     BL $-0x1948bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFC90:  241095E5     LDR r1, [r5, 0x24]
		   0x010EFC94:  0400A0E1     MOV r0, r4
		   0x010EFC98:  0020A0E3     MOV r2, 0x0
		   0x010EFC9C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EFCA0:  5A5B76EA     B $+0x1d96d70  // TAIL CALL → String.op_Equality
		*/
	}

	// RVA: 0x10EFCA4 Offset: 0x10EFCA4 VA: 0x10EFCA4
	internal bool <CreateField>b__3(ChainObject x) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFCA4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010EFCA8:  0140A0E1     MOV r4, r1
		   0x010EFCAC:  0050A0E1     MOV r5, r0
		   0x010EFCB0:  000051E3     CMPS r0, r1, 0x0
		   0x010EFCB4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFCBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EFCB8:  C4ADF9EB     BL $-0x1948e8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EFCBC:  085095E5     LDR r5, [r5, 0x8]
		   0x010EFCC0:  184094E5     LDR r4, [r4, 0x18]
		   0x010EFCC4:  000055E3     CMPS r0, r5, 0x0
		   0x010EFCC8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFCD0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EFCCC:  BFADF9EB     BL $-0x1948fc
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFCD0:  241095E5     LDR r1, [r5, 0x24]
		   0x010EFCD4:  0400A0E1     MOV r0, r4
		   0x010EFCD8:  0020A0E3     MOV r2, 0x0
		   0x010EFCDC:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010EFCE0:  4A5B76EA     B $+0x1d96d30  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass87_0 // TypeDefIndex: 1192
{

	// Fields
	public GameState <>4__this; // 0x8
	public FieldGroup fieldGroup; // 0xC
	public ItemData baseItem; // 0x18
	public ItemData[] questLevelItems; // 0x1C

	// Methods

	// RVA: 0x10EFCE4 Offset: 0x10EFCE4 VA: 0x10EFCE4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010EFCE4:  0010A0E3     MOV r1, 0x0
		   0x010EFCE8:  BF957EEA     B $+0x1fa5704  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10EFCEC Offset: 0x10EFCEC VA: 0x10EFCEC
	internal ItemData <GetItemSource>b__1(FieldData.FieldTileData t) {
		/* Disassembly (ARM32, 81 instructions, 0x144 bytes):
		   // CFG: 21 blocks, 22 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFCEC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x010EFCF0:  08D04DE2     SUB sp, sp, 0x8
		   0x010EFCF4:  0050A0E3     MOV r5, 0x0
		   0x010EFCF8:  000051E3     CMPS r0, r1, 0x0
		   0x010EFCFC:  4800000A     BEQ $+0x128  // if (==) goto 0x010EFE24
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x010EFD00:  0070A0E1     MOV r7, r0
		   0x010EFD04:  0C0091E5     LDR r0, [r1, 0xc]
		   0x010EFD08:  0140A0E1     MOV r4, r1
		   0x010EFD0C:  000050E3     CMPS r0, r0, 0x0
		   0x010EFD10:  4300000A     BEQ $+0x114  // if (==) goto 0x010EFE24
		   // 
		   // ──── Block 2 else (!=) ────────────────────
		   0x010EFD14:  085097E5     LDR r5, [r7, 0x8]
		   0x010EFD18:  000055E3     CMPS r0, r5, 0x0
		   0x010EFD1C:  0200000A     BEQ $+0x10  // if (==) goto 0x010EFD2C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010EFD20:  5C6095E5     LDR r6, [r5, 0x5c]
		   0x010EFD24:  0680A0E1     MOV r8, r6
		   0x010EFD28:  080000EA     B $+0x28  // goto 0x010EFD50
		   // ──── Block 4 if (==) ────────────────────
		   0x010EFD2C:  A7ADF9EB     BL $-0x19495c
		   0x010EFD30:  081097E5     LDR r1, [r7, 0x8]
		   0x010EFD34:  000051E3     CMPS r0, r1, 0x0
		   0x010EFD38:  0C009415     LDRNE r0, [r4, 0xc]
		   0x010EFD3C:  00005013     CMPSNE r0, r0, 0x0
		   0x010EFD40:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFD48
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EFD44:  A1ADF9EB     BL $-0x194974
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EFD48:  5C6091E5     LDR r6, [r1, 0x5c]
		   0x010EFD4C:  5C8095E5     LDR r8, [r5, 0x5c]
		   // ──── Block 7 ──────────────────────────────
		   0x010EFD50:  085090E5     LDR r5, [r0, 0x8]
		   0x010EFD54:  000056E3     CMPS r0, r6, 0x0
		   0x010EFD58:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFD60
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010EFD5C:  9BADF9EB     BL $-0x19498c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010EFD60:  0600A0E1     MOV r0, r6
		   0x010EFD64:  0510A0E1     MOV r1, r5
		   0x010EFD68:  0020A0E3     MOV r2, 0x0
		   0x010EFD6C:  197802EB     BL $+0x9e06c  // CALL → ResourcesPack.GetChainNameByItemCode
		   0x010EFD70:  085097E5     LDR r5, [r7, 0x8]
		   0x010EFD74:  0090A0E1     MOV sb, r0
		   0x010EFD78:  000055E3     CMPS r0, r5, 0x0
		   0x010EFD7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFD84
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EFD80:  92ADF9EB     BL $-0x1949b0
		   // ──── Block 11 if (!=) ────────────────────
		   0x010EFD84:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010EFD88:  5C7095E5     LDR r7, [r5, 0x5c]
		   0x010EFD8C:  000056E3     CMPS r0, r6, 0x0
		   0x010EFD90:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFD98
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010EFD94:  8DADF9EB     BL $-0x1949c4
		   // ──── Block 13 if (!=) ────────────────────
		   0x010EFD98:  085096E5     LDR r5, [r6, 0x8]
		   0x010EFD9C:  000057E3     CMPS r0, r7, 0x0
		   0x010EFDA0:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFDA8
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x010EFDA4:  89ADF9EB     BL $-0x1949d4
		   // ──── Block 15 if (!=) ────────────────────
		   0x010EFDA8:  0700A0E1     MOV r0, r7
		   0x010EFDAC:  0510A0E1     MOV r1, r5
		   0x010EFDB0:  0020A0E3     MOV r2, 0x0
		   0x010EFDB4:  3F7802EB     BL $+0x9e104  // CALL → ResourcesPack.GetChainOrderByItemCode
		   0x010EFDB8:  0C5094E5     LDR r5, [r4, 0xc]
		   0x010EFDBC:  0070A0E1     MOV r7, r0
		   0x010EFDC0:  000055E3     CMPS r0, r5, 0x0
		   0x010EFDC4:  0500A0E1     MOV r0, r5
		   0x010EFDC8:  0300001A     BNE $+0x14  // if (!=) goto 0x010EFDDC
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x010EFDCC:  7FADF9EB     BL $-0x1949fc
		   0x010EFDD0:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010EFDD4:  000050E3     CMPS r0, r0, 0x0
		   0x010EFDD8:  D9FFFF0A     BEQ $-0x94
		   // ──── Block 17 (from 2 paths) ──────────────────
		   0x010EFDDC:  0D60D0E5     LDRB r6, [r0, 0xd]
		   0x010EFDE0:  000058E3     CMPS r0, r8, 0x0
		   0x010EFDE4:  0C40D5E5     LDRB r4, [r5, 0xc]
		   0x010EFDE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFDF0
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x010EFDEC:  77ADF9EB     BL $-0x194a1c
		   // ──── Block 19 if (!=) ────────────────────
		   0x010EFDF0:  160F6FE1     CLZ r0, r6
		   0x010EFDF4:  000054E3     CMPS r0, r4, 0x0
		   0x010EFDF8:  01400013     MOVNE r4, 0x1
		   0x010EFDFC:  0050A0E3     MOV r5, 0x0
		   0x010EFE00:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010EFE04:  0910A0E1     MOV r1, sb
		   0x010EFE08:  21008DE8     STM sp, {r0, r5}
		   0x010EFE0C:  0800A0E1     MOV r0, r8
		   0x010EFE10:  0720A0E1     MOV r2, r7
		   0x010EFE14:  0430A0E1     MOV r3, r4
		   0x010EFE18:  677F02EB     BL $+0x9fda4  // CALL → ResourcesPack.GetItemObject
		   0x010EFE1C:  000050E3     CMPS r0, r0, 0x0
		   0x010EFE20:  18509015     LDRNE r5, [r0, 0x18]
		   // ──── Block 20 (from 2 paths) ──────────────────
		   0x010EFE24:  0500A0E1     MOV r0, r5
		   0x010EFE28:  08D08DE2     ADD sp, sp, 0x8
		   0x010EFE2C:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		*/
	}

	// RVA: 0x10EFE30 Offset: 0x10EFE30 VA: 0x10EFE30
	internal bool <GetItemSource>b__0(ItemObject x) {
		/* Disassembly (ARM32, 500 instructions, 0x7D0 bytes):
		   // CFG: 153 blocks, 166 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010EFE30:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010EFE34:  14D04DE2     SUB sp, sp, 0x14
		   0x010EFE38:  10008DE5     STR r0, [sp, 0x10]
		   0x010EFE3C:  0160A0E1     MOV r6, r1
		   0x010EFE40:  74479FE5     LDR r4, [pc, 0x774]
		   0x010EFE44:  04408FE0     ADD r4, pc, r4
		   0x010EFE48:  0000D4E5     LDRB r0, [r4]
		   0x010EFE4C:  000050E3     CMPS r0, r0, 0x0
		   0x010EFE50:  1900001A     BNE $+0x6c  // if (!=) goto 0x010EFEBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010EFE54:  64079FE5     LDR r0, [pc, 0x764]
		   0x010EFE58:  00009FE7     LDR r0, [pc, r0]
		   0x010EFE5C:  BFACF9EB     BL $-0x194cfc
		   0x010EFE60:  5C079FE5     LDR r0, [pc, 0x75c]
		   0x010EFE64:  00009FE7     LDR r0, [pc, r0]
		   0x010EFE68:  BCACF9EB     BL $-0x194d08
		   0x010EFE6C:  54079FE5     LDR r0, [pc, 0x754]
		   0x010EFE70:  00009FE7     LDR r0, [pc, r0]
		   0x010EFE74:  B9ACF9EB     BL $-0x194d14
		   0x010EFE78:  4C079FE5     LDR r0, [pc, 0x74c]
		   0x010EFE7C:  00009FE7     LDR r0, [pc, r0]
		   0x010EFE80:  B6ACF9EB     BL $-0x194d20
		   0x010EFE84:  44079FE5     LDR r0, [pc, 0x744]
		   0x010EFE88:  00009FE7     LDR r0, [pc, r0]
		   0x010EFE8C:  B3ACF9EB     BL $-0x194d2c
		   0x010EFE90:  3C079FE5     LDR r0, [pc, 0x73c]
		   0x010EFE94:  00009FE7     LDR r0, [pc, r0]
		   0x010EFE98:  B0ACF9EB     BL $-0x194d38
		   0x010EFE9C:  34079FE5     LDR r0, [pc, 0x734]
		   0x010EFEA0:  00009FE7     LDR r0, [pc, r0]
		   0x010EFEA4:  ADACF9EB     BL $-0x194d44
		   0x010EFEA8:  2C079FE5     LDR r0, [pc, 0x72c]
		   0x010EFEAC:  00009FE7     LDR r0, [pc, r0]
		   0x010EFEB0:  AAACF9EB     BL $-0x194d50
		   0x010EFEB4:  0100A0E3     MOV r0, 0x1
		   0x010EFEB8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010EFEBC:  1C079FE5     LDR r0, [pc, 0x71c]
		   0x010EFEC0:  00009FE7     LDR r0, [pc, r0]
		   0x010EFEC4:  000090E5     LDR r0, [r0]
		   0x010EFEC8:  3DADF9EB     BL $-0x194b04
		   0x010EFECC:  0010A0E3     MOV r1, 0x0
		   0x010EFED0:  0090A0E1     MOV sb, r0
		   0x010EFED4:  44957EEB     BL $+0x1fa5518  // CALL → Object..ctor
		   0x010EFED8:  000059E3     CMPS r0, sb, 0x0
		   0x010EFEDC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFEE4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010EFEE0:  3AADF9EB     BL $-0x194b10
		   // ──── Block 4 if (!=) ────────────────────
		   0x010EFEE4:  000056E3     CMPS r0, r6, 0x0
		   0x010EFEE8:  086089E5     STR r6, [sb, 0x8]
		   0x010EFEEC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFEF4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010EFEF0:  36ADF9EB     BL $-0x194b20
		   // ──── Block 6 if (!=) ────────────────────
		   0x010EFEF4:  184096E5     LDR r4, [r6, 0x18]
		   0x010EFEF8:  000054E3     CMPS r0, r4, 0x0
		   0x010EFEFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFF04
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010EFF00:  32ADF9EB     BL $-0x194b30
		   // ──── Block 8 if (!=) ────────────────────
		   0x010EFF04:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x010EFF08:  0060A0E3     MOV r6, 0x0
		   0x010EFF0C:  000050E3     CMPS r0, r0, 0x0
		   0x010EFF10:  A601001A     BNE $+0x6a0  // if (!=) goto 0x010F05B0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010EFF14:  084099E5     LDR r4, [sb, 0x8]
		   0x010EFF18:  000054E3     CMPS r0, r4, 0x0
		   0x010EFF1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFF24
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010EFF20:  2AADF9EB     BL $-0x194b50
		   // ──── Block 11 if (!=) ────────────────────
		   0x010EFF24:  184094E5     LDR r4, [r4, 0x18]
		   0x010EFF28:  000054E3     CMPS r0, r4, 0x0
		   0x010EFF2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFF34
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x010EFF30:  26ADF9EB     BL $-0x194b60
		   // ──── Block 13 if (!=) ────────────────────
		   0x010EFF34:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x010EFF38:  050050E3     CMPS r0, r0, 0x5
		   0x010EFF3C:  9B01000A     BEQ $+0x674  // if (==) goto 0x010F05B0
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x010EFF40:  084099E5     LDR r4, [sb, 0x8]
		   0x010EFF44:  000054E3     CMPS r0, r4, 0x0
		   0x010EFF48:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFF50
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010EFF4C:  1FADF9EB     BL $-0x194b7c
		   // ──── Block 16 if (!=) ────────────────────
		   0x010EFF50:  185094E5     LDR r5, [r4, 0x18]
		   0x010EFF54:  000055E3     CMPS r0, r5, 0x0
		   0x010EFF58:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFF60
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010EFF5C:  1BADF9EB     BL $-0x194b8c
		   // ──── Block 18 if (!=) ────────────────────
		   0x010EFF60:  7C869FE5     LDR r8, [pc, 0x67c]
		   0x010EFF64:  08809FE7     LDR r8, [pc, r8]
		   0x010EFF68:  10109DE5     LDR r1, [sp, 0x10]
		   0x010EFF6C:  B07095E5     LDR r7, [r5, 0xb0]
		   0x010EFF70:  000098E5     LDR r0, [r8]
		   0x010EFF74:  B4B095E5     LDR fp, [r5, 0xb4]
		   0x010EFF78:  0CA091E5     LDR r10, [r1, 0xc]
		   0x010EFF7C:  106091E5     LDR r6, [r1, 0x10]
		   0x010EFF80:  144091E5     LDR r4, [r1, 0x14]
		   0x010EFF84:  741090E5     LDR r1, [r0, 0x74]
		   0x010EFF88:  B85095E5     LDR r5, [r5, 0xb8]
		   0x010EFF8C:  000051E3     CMPS r0, r1, 0x0
		   0x010EFF90:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFF98
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010EFF94:  BEACF9EB     BL $-0x194d00
		   // ──── Block 20 if (!=) ────────────────────
		   0x010EFF98:  0000A0E3     MOV r0, 0x0
		   0x010EFF9C:  0B10A0E1     MOV r1, fp
		   0x010EFFA0:  08008DE5     STR r0, [sp, 0x8]
		   0x010EFFA4:  0700A0E1     MOV r0, r7
		   0x010EFFA8:  0520A0E1     MOV r2, r5
		   0x010EFFAC:  0A30A0E1     MOV r3, r10
		   0x010EFFB0:  00608DE5     STR r6, [sp]
		   0x010EFFB4:  04408DE5     STR r4, [sp, 0x4]
		   0x010EFFB8:  B62510EB     BL $+0x4096e0  // CALL → FieldGroup.op_Inequality
		   0x010EFFBC:  000050E3     CMPS r0, r0, 0x0
		   0x010EFFC0:  2600000A     BEQ $+0xa0  // if (==) goto 0x010F0060
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010EFFC4:  084099E5     LDR r4, [sb, 0x8]
		   0x010EFFC8:  000054E3     CMPS r0, r4, 0x0
		   0x010EFFCC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFFD4
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010EFFD0:  FEACF9EB     BL $-0x194c00
		   // ──── Block 23 if (!=) ────────────────────
		   0x010EFFD4:  184094E5     LDR r4, [r4, 0x18]
		   0x010EFFD8:  000054E3     CMPS r0, r4, 0x0
		   0x010EFFDC:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFFE4
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010EFFE0:  FAACF9EB     BL $-0x194c10
		   // ──── Block 25 if (!=) ────────────────────
		   0x010EFFE4:  000098E5     LDR r0, [r8]
		   0x010EFFE8:  B04084E2     ADD r4, r4, 0xb0
		   0x010EFFEC:  741090E5     LDR r1, [r0, 0x74]
		   0x010EFFF0:  000051E3     CMPS r0, r1, 0x0
		   0x010EFFF4:  0000001A     BNE $+0x8  // if (!=) goto 0x010EFFFC
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010EFFF8:  A5ACF9EB     BL $-0x194d64
		   // ──── Block 27 if (!=) ────────────────────
		   0x010EFFFC:  0400A0E1     MOV r0, r4
		   0x010F0000:  0010A0E3     MOV r1, 0x0
		   0x010F0004:  482210EB     BL $+0x408928  // CALL → FieldGroup.get_Type
		   0x010F0008:  010050E3     CMPS r0, r0, 0x1
		   0x010F000C:  1300000A     BEQ $+0x54  // if (==) goto 0x010F0060
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x010F0010:  084099E5     LDR r4, [sb, 0x8]
		   0x010F0014:  000054E3     CMPS r0, r4, 0x0
		   0x010F0018:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0020
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010F001C:  EBACF9EB     BL $-0x194c4c
		   // ──── Block 30 if (!=) ────────────────────
		   0x010F0020:  184094E5     LDR r4, [r4, 0x18]
		   0x010F0024:  000054E3     CMPS r0, r4, 0x0
		   0x010F0028:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0030
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x010F002C:  E7ACF9EB     BL $-0x194c5c
		   // ──── Block 32 if (!=) ────────────────────
		   0x010F0030:  000098E5     LDR r0, [r8]
		   0x010F0034:  B04084E2     ADD r4, r4, 0xb0
		   0x010F0038:  741090E5     LDR r1, [r0, 0x74]
		   0x010F003C:  000051E3     CMPS r0, r1, 0x0
		   0x010F0040:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0048
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x010F0044:  92ACF9EB     BL $-0x194db0
		   // ──── Block 34 if (!=) ────────────────────
		   0x010F0048:  0400A0E1     MOV r0, r4
		   0x010F004C:  0010A0E3     MOV r1, 0x0
		   0x010F0050:  0060A0E3     MOV r6, 0x0
		   0x010F0054:  342210EB     BL $+0x4088d8  // CALL → FieldGroup.get_Type
		   0x010F0058:  020050E3     CMPS r0, r0, 0x2
		   0x010F005C:  5301001A     BNE $+0x554  // if (!=) goto 0x010F05B0
		   // 
		   // ──── Block 35 (from 3 paths) ──────────────────
		   0x010F0060:  084099E5     LDR r4, [sb, 0x8]
		   0x010F0064:  000054E3     CMPS r0, r4, 0x0
		   0x010F0068:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0070
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010F006C:  D7ACF9EB     BL $-0x194c9c
		   // ──── Block 37 if (!=) ────────────────────
		   0x010F0070:  184094E5     LDR r4, [r4, 0x18]
		   0x010F0074:  000054E3     CMPS r0, r4, 0x0
		   0x010F0078:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0080
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x010F007C:  D3ACF9EB     BL $-0x194cac
		   // ──── Block 39 if (!=) ────────────────────
		   0x010F0080:  BC00D4E5     LDRB r0, [r4, 0xbc]
		   0x010F0084:  000050E3     CMPS r0, r0, 0x0
		   0x010F0088:  4501000A     BEQ $+0x51c  // if (==) goto 0x010F05A4
		   // 
		   // ──── Block 40 else (!=) ────────────────────
		   0x010F008C:  084099E5     LDR r4, [sb, 0x8]
		   0x010F0090:  000054E3     CMPS r0, r4, 0x0
		   0x010F0094:  0000001A     BNE $+0x8  // if (!=) goto 0x010F009C
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x010F0098:  CCACF9EB     BL $-0x194cc8
		   // ──── Block 42 if (!=) ────────────────────
		   0x010F009C:  184094E5     LDR r4, [r4, 0x18]
		   0x010F00A0:  000054E3     CMPS r0, r4, 0x0
		   0x010F00A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F00AC
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x010F00A8:  C8ACF9EB     BL $-0x194cd8
		   // ──── Block 44 if (!=) ────────────────────
		   0x010F00AC:  6000D4E5     LDRB r0, [r4, 0x60]
		   0x010F00B0:  000050E3     CMPS r0, r0, 0x0
		   0x010F00B4:  5100000A     BEQ $+0x14c  // if (==) goto 0x010F0200
		   // 
		   // ──── Block 45 else (!=) ────────────────────
		   0x010F00B8:  084099E5     LDR r4, [sb, 0x8]
		   0x010F00BC:  000054E3     CMPS r0, r4, 0x0
		   0x010F00C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F00C8
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x010F00C4:  C1ACF9EB     BL $-0x194cf4
		   // ──── Block 47 if (!=) ────────────────────
		   0x010F00C8:  184094E5     LDR r4, [r4, 0x18]
		   0x010F00CC:  000054E3     CMPS r0, r4, 0x0
		   0x010F00D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F00D8
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x010F00D4:  BDACF9EB     BL $-0x194d04
		   // ──── Block 49 if (!=) ────────────────────
		   0x010F00D8:  64A094E5     LDR r10, [r4, 0x64]
		   0x010F00DC:  00B0A0E3     MOV fp, 0x0
		   0x010F00E0:  10808AE2     ADD r8, r10, 0x10
		   0x010F00E4:  00005AE3     CMPS r0, r10, 0x0
		   0x010F00E8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F00F0
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x010F00EC:  B7ACF9EB     BL $-0x194d1c
		   // ──── Block 51 if (!=) ────────────────────
		   0x010F00F0:  0C009AE5     LDR r0, [r10, 0xc]
		   0x010F00F4:  00005BE1     CMPS r0, fp, r0
		   0x010F00F8:  400000AA     BGE $+0x108  // if (>=) goto 0x010F0200
		   // 
		   // ──── Block 52 else (<) ────────────────────
		   0x010F00FC:  0B0050E1     CMPS r0, r0, fp
		   0x010F0100:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010F0108
		   // 
		   // ──── Block 53 else (<= (unsigned)) ────────────────────
		   0x010F0104:  B2ACF9EB     BL $-0x194d30
		   // ──── Block 54 if (> (unsigned)) ────────────────────
		   0x010F0108:  0B5198E7     LDR r5, [r8, fp, lsl 2]
		   0x010F010C:  000055E3     CMPS r0, r5, 0x0
		   0x010F0110:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0118
		   // 
		   // ──── Block 55 else (==) ────────────────────
		   0x010F0114:  ADACF9EB     BL $-0x194d44
		   // ──── Block 56 if (!=) ────────────────────
		   0x010F0118:  184095E5     LDR r4, [r5, 0x18]
		   0x010F011C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0120:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0128
		   // 
		   // ──── Block 57 else (==) ────────────────────
		   0x010F0124:  A9ACF9EB     BL $-0x194d54
		   // ──── Block 58 if (!=) ────────────────────
		   0x010F0128:  0400A0E1     MOV r0, r4
		   0x010F012C:  0010A0E3     MOV r1, 0x0
		   0x010F0130:  F56500EB     BL $+0x197dc  // CALL → ItemData.get_activeData
		   0x010F0134:  0040A0E1     MOV r4, r0
		   0x010F0138:  000050E3     CMPS r0, r0, 0x0
		   0x010F013C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0144
		   // 
		   // ──── Block 59 else (==) ────────────────────
		   0x010F0140:  A2ACF9EB     BL $-0x194d70
		   // ──── Block 60 if (!=) ────────────────────
		   0x010F0144:  084094E5     LDR r4, [r4, 0x8]
		   0x010F0148:  000054E3     CMPS r0, r4, 0x0
		   0x010F014C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0154
		   // 
		   // ──── Block 61 else (==) ────────────────────
		   0x010F0150:  9EACF9EB     BL $-0x194d80
		   // ──── Block 62 if (!=) ────────────────────
		   0x010F0154:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F0158:  186094E5     LDR r6, [r4, 0x18]
		   0x010F015C:  187090E5     LDR r7, [r0, 0x18]
		   0x010F0160:  000057E3     CMPS r0, r7, 0x0
		   0x010F0164:  0000001A     BNE $+0x8  // if (!=) goto 0x010F016C
		   // 
		   // ──── Block 63 else (==) ────────────────────
		   0x010F0168:  98ACF9EB     BL $-0x194d98
		   // ──── Block 64 if (!=) ────────────────────
		   0x010F016C:  084097E5     LDR r4, [r7, 0x8]
		   0x010F0170:  000054E3     CMPS r0, r4, 0x0
		   0x010F0174:  0000001A     BNE $+0x8  // if (!=) goto 0x010F017C
		   // 
		   // ──── Block 65 else (==) ────────────────────
		   0x010F0178:  94ACF9EB     BL $-0x194da8
		   // ──── Block 66 if (!=) ────────────────────
		   0x010F017C:  181094E5     LDR r1, [r4, 0x18]
		   0x010F0180:  0600A0E1     MOV r0, r6
		   0x010F0184:  0020A0E3     MOV r2, 0x0
		   0x010F0188:  205A76EB     BL $+0x1d96888  // CALL → String.op_Equality
		   0x010F018C:  000050E3     CMPS r0, r0, 0x0
		   0x010F0190:  1800000A     BEQ $+0x68  // if (==) goto 0x010F01F8
		   // 
		   // ──── Block 67 else (!=) ────────────────────
		   0x010F0194:  184095E5     LDR r4, [r5, 0x18]
		   0x010F0198:  000054E3     CMPS r0, r4, 0x0
		   0x010F019C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F01A4
		   // 
		   // ──── Block 68 else (==) ────────────────────
		   0x010F01A0:  8AACF9EB     BL $-0x194dd0
		   // ──── Block 69 if (!=) ────────────────────
		   0x010F01A4:  0400A0E1     MOV r0, r4
		   0x010F01A8:  0010A0E3     MOV r1, 0x0
		   0x010F01AC:  D66500EB     BL $+0x19760  // CALL → ItemData.get_activeData
		   0x010F01B0:  0040A0E1     MOV r4, r0
		   0x010F01B4:  000050E3     CMPS r0, r0, 0x0
		   0x010F01B8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F01C0
		   // 
		   // ──── Block 70 else (==) ────────────────────
		   0x010F01BC:  83ACF9EB     BL $-0x194dec
		   // ──── Block 71 if (!=) ────────────────────
		   0x010F01C0:  0400A0E1     MOV r0, r4
		   0x010F01C4:  0010A0E3     MOV r1, 0x0
		   0x010F01C8:  066700EB     BL $+0x19c20  // CALL → ItemData.get_Order
		   0x010F01CC:  0040A0E1     MOV r4, r0
		   0x010F01D0:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F01D4:  185090E5     LDR r5, [r0, 0x18]
		   0x010F01D8:  000055E3     CMPS r0, r5, 0x0
		   0x010F01DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F01E4
		   // 
		   // ──── Block 72 else (==) ────────────────────
		   0x010F01E0:  7AACF9EB     BL $-0x194e10
		   // ──── Block 73 if (!=) ────────────────────
		   0x010F01E4:  0500A0E1     MOV r0, r5
		   0x010F01E8:  0010A0E3     MOV r1, 0x0
		   0x010F01EC:  FD6600EB     BL $+0x19bfc  // CALL → ItemData.get_Order
		   0x010F01F0:  000054E1     CMPS r0, r4, r0
		   0x010F01F4:  EC00000A     BEQ $+0x3b8  // if (==) goto 0x010F05AC
		   // 
		   // ──── Block 74 (from 2 paths) ──────────────────
		   0x010F01F8:  01B08BE2     ADD fp, fp, 0x1
		   0x010F01FC:  B8FFFFEA     B $-0x118
		   // ──── Block 75 (from 2 paths) ──────────────────
		   0x010F0200:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F0204:  1C7090E5     LDR r7, [r0, 0x1c]
		   0x010F0208:  000057E3     CMPS r0, r7, 0x0
		   0x010F020C:  1400000A     BEQ $+0x58  // if (==) goto 0x010F0264
		   // 
		   // ──── Block 76 else (!=) ────────────────────
		   0x010F0210:  D0039FE5     LDR r0, [pc, 0x3d0]
		   0x010F0214:  00009FE7     LDR r0, [pc, r0]
		   0x010F0218:  000090E5     LDR r0, [r0]
		   0x010F021C:  68ACF9EB     BL $-0x194e58
		   0x010F0220:  0040A0E1     MOV r4, r0
		   0x010F0224:  C0039FE5     LDR r0, [pc, 0x3c0]
		   0x010F0228:  0910A0E1     MOV r1, sb
		   0x010F022C:  0030A0E3     MOV r3, 0x0
		   0x010F0230:  0060A0E3     MOV r6, 0x0
		   0x010F0234:  00009FE7     LDR r0, [pc, r0]
		   0x010F0238:  002090E5     LDR r2, [r0]
		   0x010F023C:  0400A0E1     MOV r0, r4
		   0x010F0240:  107733EB     BL $+0xcddc48  // CALL → Predicate<object>..ctor
		   0x010F0244:  A4039FE5     LDR r0, [pc, 0x3a4]
		   0x010F0248:  0410A0E1     MOV r1, r4
		   0x010F024C:  00009FE7     LDR r0, [pc, r0]
		   0x010F0250:  002090E5     LDR r2, [r0]
		   0x010F0254:  0700A0E1     MOV r0, r7
		   0x010F0258:  A7E928EB     BL $+0xa3a6a4  // CALL → Array.Exists<object>
		   0x010F025C:  000050E3     CMPS r0, r0, 0x0
		   0x010F0260:  D200000A     BEQ $+0x350  // if (==) goto 0x010F05B0
		   // 
		   // ──── Block 77 (from 2 paths) ──────────────────
		   0x010F0264:  000059E3     CMPS r0, sb, 0x0
		   0x010F0268:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0270
		   // 
		   // ──── Block 78 else (==) ────────────────────
		   0x010F026C:  57ACF9EB     BL $-0x194e9c
		   // ──── Block 79 if (!=) ────────────────────
		   0x010F0270:  084099E5     LDR r4, [sb, 0x8]
		   0x010F0274:  000054E3     CMPS r0, r4, 0x0
		   0x010F0278:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0280
		   // 
		   // ──── Block 80 else (==) ────────────────────
		   0x010F027C:  53ACF9EB     BL $-0x194eac
		   // ──── Block 81 if (!=) ────────────────────
		   0x010F0280:  184094E5     LDR r4, [r4, 0x18]
		   0x010F0284:  000054E3     CMPS r0, r4, 0x0
		   0x010F0288:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0290
		   // 
		   // ──── Block 82 else (==) ────────────────────
		   0x010F028C:  4FACF9EB     BL $-0x194ebc
		   // ──── Block 83 if (!=) ────────────────────
		   0x010F0290:  68A094E5     LDR r10, [r4, 0x68]
		   0x010F0294:  00B0A0E3     MOV fp, 0x0
		   0x010F0298:  10008AE2     ADD r0, r10, 0x10
		   0x010F029C:  0C008DE5     STR r0, [sp, 0xc]
		   0x010F02A0:  00005AE3     CMPS r0, r10, 0x0
		   0x010F02A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F02AC
		   // 
		   // ──── Block 84 else (==) ────────────────────
		   0x010F02A8:  48ACF9EB     BL $-0x194ed8
		   // ──── Block 85 if (!=) ────────────────────
		   0x010F02AC:  0C009AE5     LDR r0, [r10, 0xc]
		   0x010F02B0:  0060A0E3     MOV r6, 0x0
		   0x010F02B4:  00005BE1     CMPS r0, fp, r0
		   0x010F02B8:  016000B3     MOVLT r6, 0x1
		   0x010F02BC:  BB0000AA     BGE $+0x2f4  // if (>=) goto 0x010F05B0
		   // 
		   // ──── Block 86 else (<) ────────────────────
		   0x010F02C0:  0B0050E1     CMPS r0, r0, fp
		   0x010F02C4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010F02CC
		   // 
		   // ──── Block 87 else (<= (unsigned)) ────────────────────
		   0x010F02C8:  41ACF9EB     BL $-0x194ef4
		   // ──── Block 88 if (> (unsigned)) ────────────────────
		   0x010F02CC:  0C009DE5     LDR r0, [sp, 0xc]
		   0x010F02D0:  0B8190E7     LDR r8, [r0, fp, lsl 2]
		   0x010F02D4:  000058E3     CMPS r0, r8, 0x0
		   0x010F02D8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F02E0
		   // 
		   // ──── Block 89 else (==) ────────────────────
		   0x010F02DC:  3BACF9EB     BL $-0x194f0c
		   // ──── Block 90 if (!=) ────────────────────
		   0x010F02E0:  080098E5     LDR r0, [r8, 0x8]
		   0x010F02E4:  000050E3     CMPS r0, r0, 0x0
		   0x010F02E8:  8700000A     BEQ $+0x224  // if (==) goto 0x010F050C
		   // 
		   // ──── Block 91 else (!=) ────────────────────
		   0x010F02EC:  184090E5     LDR r4, [r0, 0x18]
		   0x010F02F0:  000054E3     CMPS r0, r4, 0x0
		   0x010F02F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F02FC
		   // 
		   // ──── Block 92 else (==) ────────────────────
		   0x010F02F8:  34ACF9EB     BL $-0x194f28
		   // ──── Block 93 if (!=) ────────────────────
		   0x010F02FC:  0400A0E1     MOV r0, r4
		   0x010F0300:  0010A0E3     MOV r1, 0x0
		   0x010F0304:  806500EB     BL $+0x19608  // CALL → ItemData.get_activeData
		   0x010F0308:  0040A0E1     MOV r4, r0
		   0x010F030C:  000050E3     CMPS r0, r0, 0x0
		   0x010F0310:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0318
		   // 
		   // ──── Block 94 else (==) ────────────────────
		   0x010F0314:  2DACF9EB     BL $-0x194f44
		   // ──── Block 95 if (!=) ────────────────────
		   0x010F0318:  084094E5     LDR r4, [r4, 0x8]
		   0x010F031C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0320:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0328
		   // 
		   // ──── Block 96 else (==) ────────────────────
		   0x010F0324:  29ACF9EB     BL $-0x194f54
		   // ──── Block 97 if (!=) ────────────────────
		   0x010F0328:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F032C:  187094E5     LDR r7, [r4, 0x18]
		   0x010F0330:  185090E5     LDR r5, [r0, 0x18]
		   0x010F0334:  000055E3     CMPS r0, r5, 0x0
		   0x010F0338:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0340
		   // 
		   // ──── Block 98 else (==) ────────────────────
		   0x010F033C:  23ACF9EB     BL $-0x194f6c
		   // ──── Block 99 if (!=) ────────────────────
		   0x010F0340:  084095E5     LDR r4, [r5, 0x8]
		   0x010F0344:  000054E3     CMPS r0, r4, 0x0
		   0x010F0348:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0350
		   // 
		   // ──── Block 100 else (==) ────────────────────
		   0x010F034C:  1FACF9EB     BL $-0x194f7c
		   // ──── Block 101 if (!=) ────────────────────
		   0x010F0350:  181094E5     LDR r1, [r4, 0x18]
		   0x010F0354:  0700A0E1     MOV r0, r7
		   0x010F0358:  0020A0E3     MOV r2, 0x0
		   0x010F035C:  AB5976EB     BL $+0x1d966b4  // CALL → String.op_Equality
		   0x010F0360:  000050E3     CMPS r0, r0, 0x0
		   0x010F0364:  1C00000A     BEQ $+0x78  // if (==) goto 0x010F03DC
		   // 
		   // ──── Block 102 else (!=) ────────────────────
		   0x010F0368:  084098E5     LDR r4, [r8, 0x8]
		   0x010F036C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0370:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0378
		   // 
		   // ──── Block 103 else (==) ────────────────────
		   0x010F0374:  15ACF9EB     BL $-0x194fa4
		   // ──── Block 104 if (!=) ────────────────────
		   0x010F0378:  184094E5     LDR r4, [r4, 0x18]
		   0x010F037C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0380:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0388
		   // 
		   // ──── Block 105 else (==) ────────────────────
		   0x010F0384:  11ACF9EB     BL $-0x194fb4
		   // ──── Block 106 if (!=) ────────────────────
		   0x010F0388:  0400A0E1     MOV r0, r4
		   0x010F038C:  0010A0E3     MOV r1, 0x0
		   0x010F0390:  5D6500EB     BL $+0x1957c  // CALL → ItemData.get_activeData
		   0x010F0394:  0040A0E1     MOV r4, r0
		   0x010F0398:  000050E3     CMPS r0, r0, 0x0
		   0x010F039C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F03A4
		   // 
		   // ──── Block 107 else (==) ────────────────────
		   0x010F03A0:  0AACF9EB     BL $-0x194fd0
		   // ──── Block 108 if (!=) ────────────────────
		   0x010F03A4:  0400A0E1     MOV r0, r4
		   0x010F03A8:  0010A0E3     MOV r1, 0x0
		   0x010F03AC:  8D6600EB     BL $+0x19a3c  // CALL → ItemData.get_Order
		   0x010F03B0:  0040A0E1     MOV r4, r0
		   0x010F03B4:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F03B8:  185090E5     LDR r5, [r0, 0x18]
		   0x010F03BC:  000055E3     CMPS r0, r5, 0x0
		   0x010F03C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F03C8
		   // 
		   // ──── Block 109 else (==) ────────────────────
		   0x010F03C4:  01ACF9EB     BL $-0x194ff4
		   // ──── Block 110 if (!=) ────────────────────
		   0x010F03C8:  0500A0E1     MOV r0, r5
		   0x010F03CC:  0010A0E3     MOV r1, 0x0
		   0x010F03D0:  846600EB     BL $+0x19a18  // CALL → ItemData.get_Order
		   0x010F03D4:  000054E1     CMPS r0, r4, r0
		   0x010F03D8:  7400000A     BEQ $+0x1d8  // if (==) goto 0x010F05B0
		   // 
		   // ──── Block 111 (from 2 paths) ──────────────────
		   0x010F03DC:  084098E5     LDR r4, [r8, 0x8]
		   0x010F03E0:  000054E3     CMPS r0, r4, 0x0
		   0x010F03E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F03EC
		   // 
		   // ──── Block 112 else (==) ────────────────────
		   0x010F03E8:  F8ABF9EB     BL $-0x195018
		   // ──── Block 113 if (!=) ────────────────────
		   0x010F03EC:  184094E5     LDR r4, [r4, 0x18]
		   0x010F03F0:  000054E3     CMPS r0, r4, 0x0
		   0x010F03F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F03FC
		   // 
		   // ──── Block 114 else (==) ────────────────────
		   0x010F03F8:  F4ABF9EB     BL $-0x195028
		   // ──── Block 115 if (!=) ────────────────────
		   0x010F03FC:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x010F0400:  000050E3     CMPS r0, r0, 0x0
		   0x010F0404:  6400000A     BEQ $+0x198  // if (==) goto 0x010F059C
		   // 
		   // ──── Block 116 else (!=) ────────────────────
		   0x010F0408:  084098E5     LDR r4, [r8, 0x8]
		   0x010F040C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0410:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0418
		   // 
		   // ──── Block 117 else (==) ────────────────────
		   0x010F0414:  EDABF9EB     BL $-0x195044
		   // ──── Block 118 if (!=) ────────────────────
		   0x010F0418:  184094E5     LDR r4, [r4, 0x18]
		   0x010F041C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0420:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0428
		   // 
		   // ──── Block 119 else (==) ────────────────────
		   0x010F0424:  E9ABF9EB     BL $-0x195054
		   // ──── Block 120 if (!=) ────────────────────
		   0x010F0428:  0400A0E1     MOV r0, r4
		   0x010F042C:  0010A0E3     MOV r1, 0x0
		   0x010F0430:  356500EB     BL $+0x194dc  // CALL → ItemData.get_activeData
		   0x010F0434:  0040A0E1     MOV r4, r0
		   0x010F0438:  000050E3     CMPS r0, r0, 0x0
		   0x010F043C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0444
		   // 
		   // ──── Block 121 else (==) ────────────────────
		   0x010F0440:  E2ABF9EB     BL $-0x195070
		   // ──── Block 122 if (!=) ────────────────────
		   0x010F0444:  084094E5     LDR r4, [r4, 0x8]
		   0x010F0448:  000054E3     CMPS r0, r4, 0x0
		   0x010F044C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0454
		   // 
		   // ──── Block 123 else (==) ────────────────────
		   0x010F0450:  DEABF9EB     BL $-0x195080
		   // ──── Block 124 if (!=) ────────────────────
		   0x010F0454:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F0458:  187094E5     LDR r7, [r4, 0x18]
		   0x010F045C:  185090E5     LDR r5, [r0, 0x18]
		   0x010F0460:  000055E3     CMPS r0, r5, 0x0
		   0x010F0464:  0000001A     BNE $+0x8  // if (!=) goto 0x010F046C
		   // 
		   // ──── Block 125 else (==) ────────────────────
		   0x010F0468:  D8ABF9EB     BL $-0x195098
		   // ──── Block 126 if (!=) ────────────────────
		   0x010F046C:  084095E5     LDR r4, [r5, 0x8]
		   0x010F0470:  000054E3     CMPS r0, r4, 0x0
		   0x010F0474:  0000001A     BNE $+0x8  // if (!=) goto 0x010F047C
		   // 
		   // ──── Block 127 else (==) ────────────────────
		   0x010F0478:  D4ABF9EB     BL $-0x1950a8
		   // ──── Block 128 if (!=) ────────────────────
		   0x010F047C:  181094E5     LDR r1, [r4, 0x18]
		   0x010F0480:  0700A0E1     MOV r0, r7
		   0x010F0484:  0020A0E3     MOV r2, 0x0
		   0x010F0488:  605976EB     BL $+0x1d96588  // CALL → String.op_Equality
		   0x010F048C:  000050E3     CMPS r0, r0, 0x0
		   0x010F0490:  4100000A     BEQ $+0x10c  // if (==) goto 0x010F059C
		   // 
		   // ──── Block 129 else (!=) ────────────────────
		   0x010F0494:  084098E5     LDR r4, [r8, 0x8]
		   0x010F0498:  000054E3     CMPS r0, r4, 0x0
		   0x010F049C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F04A4
		   // 
		   // ──── Block 130 else (==) ────────────────────
		   0x010F04A0:  CAABF9EB     BL $-0x1950d0
		   // ──── Block 131 if (!=) ────────────────────
		   0x010F04A4:  184094E5     LDR r4, [r4, 0x18]
		   0x010F04A8:  000054E3     CMPS r0, r4, 0x0
		   0x010F04AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F04B4
		   // 
		   // ──── Block 132 else (==) ────────────────────
		   0x010F04B0:  C6ABF9EB     BL $-0x1950e0
		   // ──── Block 133 if (!=) ────────────────────
		   0x010F04B4:  0400A0E1     MOV r0, r4
		   0x010F04B8:  0010A0E3     MOV r1, 0x0
		   0x010F04BC:  126500EB     BL $+0x19450  // CALL → ItemData.get_activeData
		   0x010F04C0:  0040A0E1     MOV r4, r0
		   0x010F04C4:  000050E3     CMPS r0, r0, 0x0
		   0x010F04C8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F04D0
		   // 
		   // ──── Block 134 else (==) ────────────────────
		   0x010F04CC:  BFABF9EB     BL $-0x1950fc
		   // ──── Block 135 if (!=) ────────────────────
		   0x010F04D0:  0400A0E1     MOV r0, r4
		   0x010F04D4:  0010A0E3     MOV r1, 0x0
		   0x010F04D8:  426600EB     BL $+0x19910  // CALL → ItemData.get_Order
		   0x010F04DC:  0040A0E1     MOV r4, r0
		   0x010F04E0:  10009DE5     LDR r0, [sp, 0x10]
		   0x010F04E4:  185090E5     LDR r5, [r0, 0x18]
		   0x010F04E8:  000055E3     CMPS r0, r5, 0x0
		   0x010F04EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F04F4
		   // 
		   // ──── Block 136 else (==) ────────────────────
		   0x010F04F0:  B6ABF9EB     BL $-0x195120
		   // ──── Block 137 if (!=) ────────────────────
		   0x010F04F4:  0500A0E1     MOV r0, r5
		   0x010F04F8:  0010A0E3     MOV r1, 0x0
		   0x010F04FC:  396600EB     BL $+0x198ec  // CALL → ItemData.get_Order
		   0x010F0500:  000054E1     CMPS r0, r4, r0
		   0x010F0504:  2400001A     BNE $+0x98  // if (!=) goto 0x010F059C
		   // 
		   // ──── Block 138 else (==) ────────────────────
		   0x010F0508:  280000EA     B $+0xa8  // goto 0x010F05B0
		   // ──── Block 139 if (==) ────────────────────
		   0x010F050C:  000059E3     CMPS r0, sb, 0x0
		   0x010F0510:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0518
		   // 
		   // ──── Block 140 else (==) ────────────────────
		   0x010F0514:  ADABF9EB     BL $-0x195144
		   // ──── Block 141 if (!=) ────────────────────
		   0x010F0518:  084099E5     LDR r4, [sb, 0x8]
		   0x010F051C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0520:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0528
		   // 
		   // ──── Block 142 else (==) ────────────────────
		   0x010F0524:  A9ABF9EB     BL $-0x195154
		   // ──── Block 143 if (!=) ────────────────────
		   0x010F0528:  184094E5     LDR r4, [r4, 0x18]
		   0x010F052C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0530:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0538
		   // 
		   // ──── Block 144 else (==) ────────────────────
		   0x010F0534:  A5ABF9EB     BL $-0x195164
		   // ──── Block 145 if (!=) ────────────────────
		   0x010F0538:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010F053C:  0020A0E3     MOV r2, 0x0
		   0x010F0540:  00009FE7     LDR r0, [pc, r0]
		   0x010F0544:  781094E5     LDR r1, [r4, 0x78]
		   0x010F0548:  000090E5     LDR r0, [r0]
		   0x010F054C:  7B6476EB     BL $+0x1d991f4  // CALL → String.Concat
		   0x010F0550:  0040A0E1     MOV r4, r0
		   0x010F0554:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010F0558:  00009FE7     LDR r0, [pc, r0]
		   0x010F055C:  000090E5     LDR r0, [r0]
		   0x010F0560:  97ABF9EB     BL $-0x19519c
		   0x010F0564:  0410A0E1     MOV r1, r4
		   0x010F0568:  0020A0E3     MOV r2, 0x0
		   0x010F056C:  0060A0E1     MOV r6, r0
		   0x010F0570:  43B710EB     BL $+0x42dd14  // CALL → InfoException..ctor
		   0x010F0574:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F0578:  00009FE7     LDR r0, [pc, r0]
		   0x010F057C:  000090E5     LDR r0, [r0]
		   0x010F0580:  741090E5     LDR r1, [r0, 0x74]
		   0x010F0584:  000051E3     CMPS r0, r1, 0x0
		   0x010F0588:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0590
		   // 
		   // ──── Block 146 else (==) ────────────────────
		   0x010F058C:  40ABF9EB     BL $-0x1952f8
		   // ──── Block 147 if (!=) ────────────────────
		   0x010F0590:  0600A0E1     MOV r0, r6
		   0x010F0594:  0010A0E3     MOV r1, 0x0
		   0x010F0598:  FB1E3CEB     BL $+0xf07bf4  // CALL → sub_1FF818C
		   // ──── Block 148 (from 3 paths) ──────────────────
		   0x010F059C:  01B08BE2     ADD fp, fp, 0x1
		   0x010F05A0:  3EFFFFEA     B $-0x300
		   // ──── Block 149 if (==) ────────────────────
		   0x010F05A4:  0060A0E3     MOV r6, 0x0
		   0x010F05A8:  000000EA     B $+0x8  // goto 0x010F05B0
		   // ──── Block 150 if (==) ────────────────────
		   0x010F05AC:  0160A0E3     MOV r6, 0x1
		   // ──── Block 151 (from 6 paths) ──────────────────
		   0x010F05B0:  0600A0E1     MOV r0, r6
		   0x010F05B4:  14D08DE2     ADD sp, sp, 0x14
		   0x010F05B8:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010F05BC:  AEBE1303     TSTSEQ fp, r3, 0xae0
		   0x010F05C0:  5096F802     RSCSEQ sb, r8, 0x5000000
		   0x010F05C4:  2467F802     RSCSEQ r6, r8, 0x900000
		   0x010F05C8:  7086F802     RSCSEQ r8, r8, 0x7000000
		   0x010F05CC:  5078F802     RSCSEQ r7, r8, 0x500000
		   0x010F05D0:  D092F802     RSCSEQ sb, r8, 0xd
		   0x010F05D4:  1896F802     RSCSEQ sb, r8, 0x1800000
		   0x010F05D8:  1096F802     RSCSEQ sb, r8, 0x1000000
		   0x010F05DC:  0896F802     RSCSEQ sb, r8, 0x800000
		   0x010F05E0:  F095F802     RSCSEQ sb, r8, 0x3c000000
		   0x010F05E4:  7C85F802     RSCSEQ r8, r8, 0x1f000000
		   0x010F05E8:  448FF802     RSCSEQ r8, r8, 0x110
		   0x010F05EC:  7892F802     RSCSEQ sb, r8, 0x80000007
		   0x010F05F0:  5C92F802     RSCSEQ sb, r8, 0xc0000005
		   0x010F05F4:  748FF802     RSCSEQ r8, r8, 0x1d0
		   0x010F05F8:  7471F802     RSCSEQ r7, r8, 0x1d
		   0x010F05FC:  1060F802     RSCSEQ r6, r8, 0x10
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass87_1 // TypeDefIndex: 1193
{

	// Fields
	public ItemObject x; // 0x8

	// Methods

	// RVA: 0x10F0600 Offset: 0x10F0600 VA: 0x10F0600
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F0600:  0010A0E3     MOV r1, 0x0
		   0x010F0604:  78937EEA     B $+0x1fa4de8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F062C Offset: 0x10F062C VA: 0x10F062C
	internal bool <GetItemSource>b__2(ItemData itm) {
		/* Disassembly (ARM32, 64 instructions, 0x100 bytes):
		   // CFG: 18 blocks, 17 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F062C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F0630:  E8409FE5     LDR r4, [pc, 0xe8]
		   0x010F0634:  0080A0E1     MOV r8, r0
		   0x010F0638:  0150A0E1     MOV r5, r1
		   0x010F063C:  04408FE0     ADD r4, pc, r4
		   0x010F0640:  0000D4E5     LDRB r0, [r4]
		   0x010F0644:  000050E3     CMPS r0, r0, 0x0
		   0x010F0648:  0400001A     BNE $+0x18  // if (!=) goto 0x010F0660
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F064C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F0650:  00009FE7     LDR r0, [pc, r0]
		   0x010F0654:  C1AAF9EB     BL $-0x1954f4
		   0x010F0658:  0100A0E3     MOV r0, 0x1
		   0x010F065C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F0660:  000055E3     CMPS r0, r5, 0x0
		   0x010F0664:  2A00000A     BEQ $+0xb0  // if (==) goto 0x010F0714
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F0668:  084098E5     LDR r4, [r8, 0x8]
		   0x010F066C:  086095E5     LDR r6, [r5, 0x8]
		   0x010F0670:  000054E3     CMPS r0, r4, 0x0
		   0x010F0674:  0000001A     BNE $+0x8  // if (!=) goto 0x010F067C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F0678:  54ABF9EB     BL $-0x1952a8
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F067C:  184094E5     LDR r4, [r4, 0x18]
		   0x010F0680:  000054E3     CMPS r0, r4, 0x0
		   0x010F0684:  0000001A     BNE $+0x8  // if (!=) goto 0x010F068C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F0688:  50ABF9EB     BL $-0x1952b8
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F068C:  94009FE5     LDR r0, [pc, 0x94]
		   0x010F0690:  00009FE7     LDR r0, [pc, r0]
		   0x010F0694:  084094E5     LDR r4, [r4, 0x8]
		   0x010F0698:  000090E5     LDR r0, [r0]
		   0x010F069C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F06A0:  000051E3     CMPS r0, r1, 0x0
		   0x010F06A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F06AC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F06A8:  F9AAF9EB     BL $-0x195414
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F06AC:  0600A0E1     MOV r0, r6
		   0x010F06B0:  0410A0E1     MOV r1, r4
		   0x010F06B4:  0020A0E3     MOV r2, 0x0
		   0x010F06B8:  0070A0E3     MOV r7, 0x0
		   0x010F06BC:  F61D3CEB     BL $+0xf077e0  // CALL → sub_1FF7E9C
		   0x010F06C0:  000050E3     CMPS r0, r0, 0x0
		   0x010F06C4:  1300000A     BEQ $+0x54  // if (==) goto 0x010F0718
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x010F06C8:  0500A0E1     MOV r0, r5
		   0x010F06CC:  0010A0E3     MOV r1, 0x0
		   0x010F06D0:  C46500EB     BL $+0x19718  // CALL → ItemData.get_Order
		   0x010F06D4:  084098E5     LDR r4, [r8, 0x8]
		   0x010F06D8:  0050A0E1     MOV r5, r0
		   0x010F06DC:  000054E3     CMPS r0, r4, 0x0
		   0x010F06E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F06E8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F06E4:  39ABF9EB     BL $-0x195314
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F06E8:  184094E5     LDR r4, [r4, 0x18]
		   0x010F06EC:  000054E3     CMPS r0, r4, 0x0
		   0x010F06F0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F06F8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F06F4:  35ABF9EB     BL $-0x195324
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F06F8:  0400A0E1     MOV r0, r4
		   0x010F06FC:  0010A0E3     MOV r1, 0x0
		   0x010F0700:  B86500EB     BL $+0x196e8  // CALL → ItemData.get_Order
		   0x010F0704:  000045E0     SUB r0, r5, r0
		   0x010F0708:  100F6FE1     CLZ r0, r0
		   0x010F070C:  A072A0E1     MOV r7, r0, r0, lsr 5
		   0x010F0710:  000000EA     B $+0x8  // goto 0x010F0718
		   // ──── Block 15 if (==) ────────────────────
		   0x010F0714:  0070A0E3     MOV r7, 0x0
		   // ──── Block 16 if (==) ────────────────────
		   0x010F0718:  0700A0E1     MOV r0, r7
		   0x010F071C:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010F0720:  B7B61303     TSTSEQ fp, r3, 0xb700000
		   0x010F0724:  E85EF802     RSCSEQ r5, r8, 0xe80
		   0x010F0728:  A85EF802     RSCSEQ r5, r8, 0xa80
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass90_0 // TypeDefIndex: 1194
{

	// Fields
	public ItemData itemObject; // 0x8

	// Methods

	// RVA: 0x10F072C Offset: 0x10F072C VA: 0x10F072C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F072C:  0010A0E3     MOV r1, 0x0
		   0x010F0730:  2D937EEA     B $+0x1fa4cbc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F0734 Offset: 0x10F0734 VA: 0x10F0734
	internal bool <Unboxing>b__0(ChainObject x) {
		/* Disassembly (ARM32, 20 instructions, 0x50 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F0734:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F0738:  0140A0E1     MOV r4, r1
		   0x010F073C:  0050A0E1     MOV r5, r0
		   0x010F0740:  000051E3     CMPS r0, r1, 0x0
		   0x010F0744:  0000001A     BNE $+0x8  // if (!=) goto 0x010F074C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F0748:  20ABF9EB     BL $-0x195378
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F074C:  085095E5     LDR r5, [r5, 0x8]
		   0x010F0750:  184094E5     LDR r4, [r4, 0x18]
		   0x010F0754:  000055E3     CMPS r0, r5, 0x0
		   0x010F0758:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0760
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F075C:  1BABF9EB     BL $-0x19538c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F0760:  085095E5     LDR r5, [r5, 0x8]
		   0x010F0764:  000055E3     CMPS r0, r5, 0x0
		   0x010F0768:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0770
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F076C:  17ABF9EB     BL $-0x19539c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F0770:  181095E5     LDR r1, [r5, 0x18]
		   0x010F0774:  0400A0E1     MOV r0, r4
		   0x010F0778:  0020A0E3     MOV r2, 0x0
		   0x010F077C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F0780:  A25876EA     B $+0x1d96290  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass93_0 // TypeDefIndex: 1195
{

	// Fields
	public int id; // 0x8

	// Methods

	// RVA: 0x10F0784 Offset: 0x10F0784 VA: 0x10F0784
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F0784:  0010A0E3     MOV r1, 0x0
		   0x010F0788:  17937EEA     B $+0x1fa4c64  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F078C Offset: 0x10F078C VA: 0x10F078C
	internal bool <GetInventoryItemSave>b__0(ItemDataSave s) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F078C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F0790:  0140A0E1     MOV r4, r1
		   0x010F0794:  0050A0E1     MOV r5, r0
		   0x010F0798:  000051E3     CMPS r0, r1, 0x0
		   0x010F079C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F07A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F07A0:  0AABF9EB     BL $-0x1953d0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F07A4:  080095E5     LDR r0, [r5, 0x8]
		   0x010F07A8:  081094E5     LDR r1, [r4, 0x8]
		   0x010F07AC:  000041E0     SUB r0, r1, r0
		   0x010F07B0:  100F6FE1     CLZ r0, r0
		   0x010F07B4:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x010F07B8:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass94_0 // TypeDefIndex: 1196
{

	// Fields
	public Item item; // 0x8
	public Predicate<GoalTarget> <>9__1; // 0xC

	// Methods

	// RVA: 0x10F07BC Offset: 0x10F07BC VA: 0x10F07BC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F07BC:  0010A0E3     MOV r1, 0x0
		   0x010F07C0:  09937EEA     B $+0x1fa4c2c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F07C4 Offset: 0x10F07C4 VA: 0x10F07C4
	internal bool <GetItemFromInventory>b__0(Goal g) {
		/* Disassembly (ARM32, 68 instructions, 0x110 bytes):
		   // CFG: 14 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F07C4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F07C8:  E8609FE5     LDR r6, [pc, 0xe8]
		   0x010F07CC:  0040A0E1     MOV r4, r0
		   0x010F07D0:  0150A0E1     MOV r5, r1
		   0x010F07D4:  06608FE0     ADD r6, pc, r6
		   0x010F07D8:  0000D6E5     LDRB r0, [r6]
		   0x010F07DC:  000050E3     CMPS r0, r0, 0x0
		   0x010F07E0:  0A00001A     BNE $+0x30  // if (!=) goto 0x010F0810
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F07E4:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F07E8:  00009FE7     LDR r0, [pc, r0]
		   0x010F07EC:  5BAAF9EB     BL $-0x19568c
		   0x010F07F0:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010F07F4:  00009FE7     LDR r0, [pc, r0]
		   0x010F07F8:  58AAF9EB     BL $-0x195698
		   0x010F07FC:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010F0800:  00009FE7     LDR r0, [pc, r0]
		   0x010F0804:  55AAF9EB     BL $-0x1956a4
		   0x010F0808:  0100A0E3     MOV r0, 0x1
		   0x010F080C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F0810:  000055E3     CMPS r0, r5, 0x0
		   0x010F0814:  0400000A     BEQ $+0x18  // if (==) goto 0x010F082C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F0818:  0500A0E1     MOV r0, r5
		   0x010F081C:  2C0000EB     BL $+0xb8  // CALL → Goal.get_Completed
		   0x010F0820:  000050E3     CMPS r0, r0, 0x0
		   0x010F0824:  0500001A     BNE $+0x1c  // if (!=) goto 0x010F0840
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F0828:  070000EA     B $+0x24  // goto 0x010F084C
		   // ──── Block 5 if (==) ────────────────────
		   0x010F082C:  E7AAF9EB     BL $-0x19545c
		   0x010F0830:  0000A0E3     MOV r0, 0x0
		   0x010F0834:  260000EB     BL $+0xa0  // CALL → Goal.get_Completed
		   0x010F0838:  000050E3     CMPS r0, r0, 0x0
		   0x010F083C:  0100000A     BEQ $+0xc  // if (==) goto 0x010F0848
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x010F0840:  0000A0E3     MOV r0, 0x0
		   0x010F0844:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 7 if (==) ────────────────────
		   0x010F0848:  E0AAF9EB     BL $-0x195478
		   // ──── Block 8 ──────────────────────────────
		   0x010F084C:  0C6094E5     LDR r6, [r4, 0xc]
		   0x010F0850:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010F0854:  000056E3     CMPS r0, r6, 0x0
		   0x010F0858:  0C00001A     BNE $+0x38  // if (!=) goto 0x010F0890
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F085C:  64009FE5     LDR r0, [pc, 0x64]
		   0x010F0860:  00009FE7     LDR r0, [pc, r0]
		   0x010F0864:  000090E5     LDR r0, [r0]
		   0x010F0868:  D5AAF9EB     BL $-0x1954a4
		   0x010F086C:  0060A0E1     MOV r6, r0
		   0x010F0870:  54009FE5     LDR r0, [pc, 0x54]
		   0x010F0874:  0410A0E1     MOV r1, r4
		   0x010F0878:  0030A0E3     MOV r3, 0x0
		   0x010F087C:  00009FE7     LDR r0, [pc, r0]
		   0x010F0880:  002090E5     LDR r2, [r0]
		   0x010F0884:  0600A0E1     MOV r0, r6
		   0x010F0888:  7E7533EB     BL $+0xcdd600  // CALL → Predicate<object>..ctor
		   0x010F088C:  0C6084E5     STR r6, [r4, 0xc]
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F0890:  000055E3     CMPS r0, r5, 0x0
		   0x010F0894:  0000001A     BNE $+0x8  // if (!=) goto 0x010F089C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F0898:  CCAAF9EB     BL $-0x1954c8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F089C:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x010F08A0:  0610A0E1     MOV r1, r6
		   0x010F08A4:  00009FE7     LDR r0, [pc, r0]
		   0x010F08A8:  002090E5     LDR r2, [r0]
		   0x010F08AC:  0500A0E1     MOV r0, r5
		   0x010F08B0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010F08B4:  680A6CEA     B $+0x1b029a8  // TAIL CALL → List<object>.Exists
		   0x010F08B8:  20B51303     TSTSEQ fp, r3, 0x8000000
		   0x010F08BC:  348BF802     RSCSEQ r8, r8, 0xd000
		   0x010F08C0:  2C8BF802     RSCSEQ r8, r8, 0xb000
		   0x010F08C4:  B88CF802     RSCSEQ r8, r8, 0xb800
		   0x010F08C8:  C08AF802     RSCSEQ r8, r8, 0xc0000
		   0x010F08CC:  3C8CF802     RSCSEQ r8, r8, 0x3c00
		   0x010F08D0:  788AF802     RSCSEQ r8, r8, 0x78000
		*/
	}

	// RVA: 0x10F0A18 Offset: 0x10F0A18 VA: 0x10F0A18
	internal bool <GetItemFromInventory>b__1(GoalTarget gt) {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F0A18:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F0A1C:  0150A0E1     MOV r5, r1
		   0x010F0A20:  0040A0E1     MOV r4, r0
		   0x010F0A24:  000051E3     CMPS r0, r1, 0x0
		   0x010F0A28:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0A30
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F0A2C:  67AAF9EB     BL $-0x19565c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F0A30:  085095E5     LDR r5, [r5, 0x8]
		   0x010F0A34:  000055E3     CMPS r0, r5, 0x0
		   0x010F0A38:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0A40
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F0A3C:  63AAF9EB     BL $-0x19566c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F0A40:  086094E5     LDR r6, [r4, 0x8]
		   0x010F0A44:  184095E5     LDR r4, [r5, 0x18]
		   0x010F0A48:  000056E3     CMPS r0, r6, 0x0
		   0x010F0A4C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0A54
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F0A50:  5EAAF9EB     BL $-0x195680
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F0A54:  845096E5     LDR r5, [r6, 0x84]
		   0x010F0A58:  000054E3     CMPS r0, r4, 0x0
		   0x010F0A5C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0A64
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F0A60:  5AAAF9EB     BL $-0x195690
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F0A64:  0400A0E1     MOV r0, r4
		   0x010F0A68:  0510A0E1     MOV r1, r5
		   0x010F0A6C:  0020A0E3     MOV r2, 0x0
		   0x010F0A70:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010F0A74:  719300EA     B $+0x24dcc  // TAIL CALL → ItemData.CompareChainAndOrder
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass96_0 // TypeDefIndex: 1197
{

	// Fields
	public Item item; // 0x8
	public GameState <>4__this; // 0xC
	public Transform container; // 0x10

	// Methods

	// RVA: 0x10F0A78 Offset: 0x10F0A78 VA: 0x10F0A78
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F0A78:  0010A0E3     MOV r1, 0x0
		   0x010F0A7C:  5A927EEA     B $+0x1fa4970  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F0A80 Offset: 0x10F0A80 VA: 0x10F0A80
	internal void <AddItem>g__CreateCoin|0() {
		/* Disassembly (ARM32, 393 instructions, 0x624 bytes):
		   // CFG: 76 blocks, 74 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F0A80:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010F0A84:  44D04DE2     SUB sp, sp, 0x44
		   0x010F0A88:  9C459FE5     LDR r4, [pc, 0x59c]
		   0x010F0A8C:  0090A0E1     MOV sb, r0
		   0x010F0A90:  04408FE0     ADD r4, pc, r4
		   0x010F0A94:  0000D4E5     LDRB r0, [r4]
		   0x010F0A98:  000050E3     CMPS r0, r0, 0x0
		   0x010F0A9C:  2800001A     BNE $+0xa8  // if (!=) goto 0x010F0B44
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F0AA0:  88059FE5     LDR r0, [pc, 0x588]
		   0x010F0AA4:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AA8:  ACA9F9EB     BL $-0x195948
		   0x010F0AAC:  80059FE5     LDR r0, [pc, 0x580]
		   0x010F0AB0:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AB4:  A9A9F9EB     BL $-0x195954
		   0x010F0AB8:  78059FE5     LDR r0, [pc, 0x578]
		   0x010F0ABC:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AC0:  A6A9F9EB     BL $-0x195960
		   0x010F0AC4:  70059FE5     LDR r0, [pc, 0x570]
		   0x010F0AC8:  00009FE7     LDR r0, [pc, r0]
		   0x010F0ACC:  A3A9F9EB     BL $-0x19596c
		   0x010F0AD0:  68059FE5     LDR r0, [pc, 0x568]
		   0x010F0AD4:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AD8:  A0A9F9EB     BL $-0x195978
		   0x010F0ADC:  60059FE5     LDR r0, [pc, 0x560]
		   0x010F0AE0:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AE4:  9DA9F9EB     BL $-0x195984
		   0x010F0AE8:  58059FE5     LDR r0, [pc, 0x558]
		   0x010F0AEC:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AF0:  9AA9F9EB     BL $-0x195990
		   0x010F0AF4:  50059FE5     LDR r0, [pc, 0x550]
		   0x010F0AF8:  00009FE7     LDR r0, [pc, r0]
		   0x010F0AFC:  97A9F9EB     BL $-0x19599c
		   0x010F0B00:  48059FE5     LDR r0, [pc, 0x548]
		   0x010F0B04:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B08:  94A9F9EB     BL $-0x1959a8
		   0x010F0B0C:  40059FE5     LDR r0, [pc, 0x540]
		   0x010F0B10:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B14:  91A9F9EB     BL $-0x1959b4
		   0x010F0B18:  38059FE5     LDR r0, [pc, 0x538]
		   0x010F0B1C:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B20:  8EA9F9EB     BL $-0x1959c0
		   0x010F0B24:  30059FE5     LDR r0, [pc, 0x530]
		   0x010F0B28:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B2C:  8BA9F9EB     BL $-0x1959cc
		   0x010F0B30:  28059FE5     LDR r0, [pc, 0x528]
		   0x010F0B34:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B38:  88A9F9EB     BL $-0x1959d8
		   0x010F0B3C:  0100A0E3     MOV r0, 0x1
		   0x010F0B40:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F0B44:  18059FE5     LDR r0, [pc, 0x518]
		   0x010F0B48:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B4C:  000090E5     LDR r0, [r0]
		   0x010F0B50:  1BAAF9EB     BL $-0x19578c
		   0x010F0B54:  0010A0E3     MOV r1, 0x0
		   0x010F0B58:  00A0A0E1     MOV r10, r0
		   0x010F0B5C:  22927EEB     BL $+0x1fa4890  // CALL → Object..ctor
		   0x010F0B60:  084099E5     LDR r4, [sb, 0x8]
		   0x010F0B64:  000054E3     CMPS r0, r4, 0x0
		   0x010F0B68:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0B70
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F0B6C:  17AAF9EB     BL $-0x19579c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F0B70:  F0049FE5     LDR r0, [pc, 0x4f0]
		   0x010F0B74:  00009FE7     LDR r0, [pc, r0]
		   0x010F0B78:  105094E5     LDR r5, [r4, 0x10]
		   0x010F0B7C:  000090E5     LDR r0, [r0]
		   0x010F0B80:  741090E5     LDR r1, [r0, 0x74]
		   0x010F0B84:  000051E3     CMPS r0, r1, 0x0
		   0x010F0B88:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0B90
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F0B8C:  C0A9F9EB     BL $-0x1958f8
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F0B90:  0500A0E1     MOV r0, r5
		   0x010F0B94:  0010A0E3     MOV r1, 0x0
		   0x010F0B98:  0020A0E3     MOV r2, 0x0
		   0x010F0B9C:  BE1C3CEB     BL $+0xf07300  // CALL → sub_1FF7E9C
		   0x010F0BA0:  000050E3     CMPS r0, r0, 0x0
		   0x010F0BA4:  1600000A     BEQ $+0x60  // if (==) goto 0x010F0C04
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010F0BA8:  BC049FE5     LDR r0, [pc, 0x4bc]
		   0x010F0BAC:  00009FE7     LDR r0, [pc, r0]
		   0x010F0BB0:  000090E5     LDR r0, [r0]
		   0x010F0BB4:  02AAF9EB     BL $-0x1957f0
		   0x010F0BB8:  0040A0E1     MOV r4, r0
		   0x010F0BBC:  AC049FE5     LDR r0, [pc, 0x4ac]
		   0x010F0BC0:  0020A0E3     MOV r2, 0x0
		   0x010F0BC4:  00009FE7     LDR r0, [pc, r0]
		   0x010F0BC8:  001090E5     LDR r1, [r0]
		   0x010F0BCC:  0400A0E1     MOV r0, r4
		   0x010F0BD0:  ABB510EB     BL $+0x42d6b4  // CALL → InfoException..ctor
		   0x010F0BD4:  98049FE5     LDR r0, [pc, 0x498]
		   0x010F0BD8:  00009FE7     LDR r0, [pc, r0]
		   0x010F0BDC:  000090E5     LDR r0, [r0]
		   0x010F0BE0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F0BE4:  000051E3     CMPS r0, r1, 0x0
		   0x010F0BE8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0BF0
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F0BEC:  A8A9F9EB     BL $-0x195958
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F0BF0:  0400A0E1     MOV r0, r4
		   0x010F0BF4:  0010A0E3     MOV r1, 0x0
		   0x010F0BF8:  44D08DE2     ADD sp, sp, 0x44
		   0x010F0BFC:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010F0C00:  611D3CEA     B $+0xf0758c
		   // ──── Block 10 if (==) ────────────────────
		   0x010F0C04:  084099E5     LDR r4, [sb, 0x8]
		   0x010F0C08:  000054E3     CMPS r0, r4, 0x0
		   0x010F0C0C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0C14
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F0C10:  EEA9F9EB     BL $-0x195840
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F0C14:  844094E5     LDR r4, [r4, 0x84]
		   0x010F0C18:  000054E3     CMPS r0, r4, 0x0
		   0x010F0C1C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0C24
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F0C20:  EAA9F9EB     BL $-0x195850
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F0C24:  B0B084E2     ADD fp, r4, 0xb0
		   0x010F0C28:  000055E3     CMPS r0, r5, 0x0
		   0x010F0C2C:  80099BE8     LDM fp, {r7, r8, fp}
		   0x010F0C30:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0C38
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F0C34:  E5A9F9EB     BL $-0x195864
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F0C38:  0500A0E1     MOV r0, r5
		   0x010F0C3C:  0010A0E3     MOV r1, 0x0
		   0x010F0C40:  0020A0E3     MOV r2, 0x0
		   0x010F0C44:  0060A0E3     MOV r6, 0x0
		   0x010F0C48:  34508DE5     STR r5, [sp, 0x34]
		   0x010F0C4C:  0B70FFEB     BL $-0x23fcc
		   0x010F0C50:  D840C9E1     LDRD r4, r5, [sb, 0x8]
		   0x010F0C54:  000055E3     CMPS r0, r5, 0x0
		   0x010F0C58:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0C60
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F0C5C:  DBA9F9EB     BL $-0x19588c
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F0C60:  0500A0E1     MOV r0, r5
		   0x010F0C64:  0410A0E1     MOV r1, r4
		   0x010F0C68:  0020A0E3     MOV r2, 0x0
		   0x010F0C6C:  0030A0E3     MOV r3, 0x0
		   0x010F0C70:  00608DE5     STR r6, [sp]
		   0x010F0C74:  04608DE5     STR r6, [sp, 0x4]
		   0x010F0C78:  08608DE5     STR r6, [sp, 0x8]
		   0x010F0C7C:  0C608DE5     STR r6, [sp, 0xc]
		   0x010F0C80:  20C1FFEB     BL $-0xfb78
		   0x010F0C84:  086099E5     LDR r6, [sb, 0x8]
		   0x010F0C88:  000056E3     CMPS r0, r6, 0x0
		   0x010F0C8C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0C94
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010F0C90:  CEA9F9EB     BL $-0x1958c0
		   // ──── Block 20 if (!=) ────────────────────
		   0x010F0C94:  000096E5     LDR r0, [r6]
		   0x010F0C98:  0010A0E3     MOV r1, 0x0
		   0x010F0C9C:  0020A0E3     MOV r2, 0x0
		   0x010F0CA0:  085190E5     LDR r5, [r0, 0x108]
		   0x010F0CA4:  0C3190E5     LDR r3, [r0, 0x10c]
		   0x010F0CA8:  0600A0E1     MOV r0, r6
		   0x010F0CAC:  35FF2FE1     BLX r5  // virtual call: vtable+0x108
		   0x010F0CB0:  0C4099E5     LDR r4, [sb, 0xc]
		   0x010F0CB4:  000054E3     CMPS r0, r4, 0x0
		   0x010F0CB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0CC0
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010F0CBC:  C3A9F9EB     BL $-0x1958ec
		   // ──── Block 22 if (!=) ────────────────────
		   0x010F0CC0:  306094E5     LDR r6, [r4, 0x30]
		   0x010F0CC4:  000056E3     CMPS r0, r6, 0x0
		   0x010F0CC8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0CD0
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010F0CCC:  BFA9F9EB     BL $-0x1958fc
		   // ──── Block 24 if (!=) ────────────────────
		   0x010F0CD0:  0000A0E3     MOV r0, 0x0
		   0x010F0CD4:  0710A0E1     MOV r1, r7
		   0x010F0CD8:  00008DE5     STR r0, [sp]
		   0x010F0CDC:  0600A0E1     MOV r0, r6
		   0x010F0CE0:  0820A0E1     MOV r2, r8
		   0x010F0CE4:  0B30A0E1     MOV r3, fp
		   0x010F0CE8:  8960FFEB     BL $-0x27dd4
		   0x010F0CEC:  000050E3     CMPS r0, r0, 0x0
		   0x010F0CF0:  CB00000A     BEQ $+0x334  // if (==) goto 0x010F1024
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x010F0CF4:  0C4099E5     LDR r4, [sb, 0xc]
		   0x010F0CF8:  000054E3     CMPS r0, r4, 0x0
		   0x010F0CFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0D04
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010F0D00:  B2A9F9EB     BL $-0x195930
		   // ──── Block 27 if (!=) ────────────────────
		   0x010F0D04:  304094E5     LDR r4, [r4, 0x30]
		   0x010F0D08:  68639FE5     LDR r6, [pc, 0x368]
		   0x010F0D0C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0D10:  06609FE7     LDR r6, [pc, r6]
		   0x010F0D14:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0D1C
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010F0D18:  ACA9F9EB     BL $-0x195948
		   // ──── Block 29 if (!=) ────────────────────
		   0x010F0D1C:  305094E5     LDR r5, [r4, 0x30]
		   0x010F0D20:  00005AE3     CMPS r0, r10, 0x0
		   0x010F0D24:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0D2C
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010F0D28:  A8A9F9EB     BL $-0x195958
		   // ──── Block 31 if (!=) ────────────────────
		   0x010F0D2C:  0C4099E5     LDR r4, [sb, 0xc]
		   0x010F0D30:  08508AE5     STR r5, [r10, 0x8]
		   0x010F0D34:  000054E3     CMPS r0, r4, 0x0
		   0x010F0D38:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0D40
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x010F0D3C:  A3A9F9EB     BL $-0x19596c
		   // ──── Block 33 if (!=) ────────────────────
		   0x010F0D40:  34039FE5     LDR r0, [pc, 0x334]
		   0x010F0D44:  00009FE7     LDR r0, [pc, r0]
		   0x010F0D48:  384094E5     LDR r4, [r4, 0x38]
		   0x010F0D4C:  000090E5     LDR r0, [r0]
		   0x010F0D50:  9BA9F9EB     BL $-0x19598c
		   0x010F0D54:  0050A0E1     MOV r5, r0
		   0x010F0D58:  20039FE5     LDR r0, [pc, 0x320]
		   0x010F0D5C:  0A10A0E1     MOV r1, r10
		   0x010F0D60:  0030A0E3     MOV r3, 0x0
		   0x010F0D64:  00009FE7     LDR r0, [pc, r0]
		   0x010F0D68:  002090E5     LDR r2, [r0]
		   0x010F0D6C:  0500A0E1     MOV r0, r5
		   0x010F0D70:  447433EB     BL $+0xcdd118  // CALL → Predicate<object>..ctor
		   0x010F0D74:  000054E3     CMPS r0, r4, 0x0
		   0x010F0D78:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0D80
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x010F0D7C:  93A9F9EB     BL $-0x1959ac
		   // ──── Block 35 if (!=) ────────────────────
		   0x010F0D80:  FC029FE5     LDR r0, [pc, 0x2fc]
		   0x010F0D84:  0510A0E1     MOV r1, r5
		   0x010F0D88:  00009FE7     LDR r0, [pc, r0]
		   0x010F0D8C:  002090E5     LDR r2, [r0]
		   0x010F0D90:  0400A0E1     MOV r0, r4
		   0x010F0D94:  3B096CEB     BL $+0x1b024f4  // CALL → List<object>.Find
		   0x010F0D98:  0070A0E1     MOV r7, r0
		   0x010F0D9C:  000096E5     LDR r0, [r6]
		   0x010F0DA0:  741090E5     LDR r1, [r0, 0x74]
		   0x010F0DA4:  000051E3     CMPS r0, r1, 0x0
		   0x010F0DA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0DB0
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010F0DAC:  38A9F9EB     BL $-0x195b18
		   // ──── Block 37 if (!=) ────────────────────
		   0x010F0DB0:  0700A0E1     MOV r0, r7
		   0x010F0DB4:  0010A0E3     MOV r1, 0x0
		   0x010F0DB8:  0020A0E3     MOV r2, 0x0
		   0x010F0DBC:  361C3CEB     BL $+0xf070e0  // CALL → sub_1FF7E9C
		   0x010F0DC0:  000050E3     CMPS r0, r0, 0x0
		   0x010F0DC4:  0B00000A     BEQ $+0x34  // if (==) goto 0x010F0DF8
		   // 
		   // ──── Block 38 else (!=) ────────────────────
		   0x010F0DC8:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x010F0DCC:  00009FE7     LDR r0, [pc, r0]
		   0x010F0DD0:  000090E5     LDR r0, [r0]
		   0x010F0DD4:  7AA9F9EB     BL $-0x195a10
		   0x010F0DD8:  0040A0E1     MOV r4, r0
		   0x010F0DDC:  A8029FE5     LDR r0, [pc, 0x2a8]
		   0x010F0DE0:  0020A0E3     MOV r2, 0x0
		   0x010F0DE4:  00009FE7     LDR r0, [pc, r0]
		   0x010F0DE8:  001090E5     LDR r1, [r0]
		   0x010F0DEC:  0400A0E1     MOV r0, r4
		   0x010F0DF0:  91607EEB     BL $+0x1f9824c  // CALL → Exception..ctor
		   0x010F0DF4:  76FFFFEA     B $-0x220
		   // ──── Block 39 if (==) ────────────────────
		   0x010F0DF8:  000057E3     CMPS r0, r7, 0x0
		   0x010F0DFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0E04
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x010F0E00:  72A9F9EB     BL $-0x195a30
		   // ──── Block 41 if (!=) ────────────────────
		   0x010F0E04:  285097E5     LDR r5, [r7, 0x28]
		   0x010F0E08:  000055E3     CMPS r0, r5, 0x0
		   0x010F0E0C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0E14
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x010F0E10:  6EA9F9EB     BL $-0x195a40
		   // ──── Block 43 if (!=) ────────────────────
		   0x010F0E14:  08609AE5     LDR r6, [r10, 0x8]
		   0x010F0E18:  000056E3     CMPS r0, r6, 0x0
		   0x010F0E1C:  0640A0E1     MOV r4, r6
		   0x010F0E20:  0100001A     BNE $+0xc  // if (!=) goto 0x010F0E2C
		   // 
		   // ──── Block 44 else (==) ────────────────────
		   0x010F0E24:  69A9F9EB     BL $-0x195a54
		   0x010F0E28:  08409AE5     LDR r4, [r10, 0x8]
		   // ──── Block 45 if (!=) ────────────────────
		   0x010F0E2C:  180096E5     LDR r0, [r6, 0x18]
		   0x010F0E30:  0C1095E5     LDR r1, [r5, 0xc]
		   0x010F0E34:  000051E1     CMPS r0, r1, r0
		   0x010F0E38:  1A0000CA     BGT $+0x70  // if (>) goto 0x010F0EA8
		   // 
		   // ──── Block 46 else (<=) ────────────────────
		   0x010F0E3C:  000054E3     CMPS r0, r4, 0x0
		   0x010F0E40:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0E48
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x010F0E44:  61A9F9EB     BL $-0x195a74
		   // ──── Block 48 if (!=) ────────────────────
		   0x010F0E48:  40029FE5     LDR r0, [pc, 0x240]
		   0x010F0E4C:  0010A0E3     MOV r1, 0x0
		   0x010F0E50:  00009FE7     LDR r0, [pc, r0]
		   0x010F0E54:  181084E5     STR r1, [r4, 0x18]
		   0x010F0E58:  000090E5     LDR r0, [r0]
		   0x010F0E5C:  58A9F9EB     BL $-0x195a98
		   0x010F0E60:  0040A0E1     MOV r4, r0
		   0x010F0E64:  28029FE5     LDR r0, [pc, 0x228]
		   0x010F0E68:  0020A0E3     MOV r2, 0x0
		   0x010F0E6C:  00009FE7     LDR r0, [pc, r0]
		   0x010F0E70:  001090E5     LDR r1, [r0]
		   0x010F0E74:  0400A0E1     MOV r0, r4
		   0x010F0E78:  6F607EEB     BL $+0x1f981c4  // CALL → Exception..ctor
		   0x010F0E7C:  14029FE5     LDR r0, [pc, 0x214]
		   0x010F0E80:  00009FE7     LDR r0, [pc, r0]
		   0x010F0E84:  000090E5     LDR r0, [r0]
		   0x010F0E88:  741090E5     LDR r1, [r0, 0x74]
		   0x010F0E8C:  000051E3     CMPS r0, r1, 0x0
		   0x010F0E90:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0E98
		   // 
		   // ──── Block 49 else (==) ────────────────────
		   0x010F0E94:  FEA8F9EB     BL $-0x195c00
		   // ──── Block 50 if (!=) ────────────────────
		   0x010F0E98:  0400A0E1     MOV r0, r4
		   0x010F0E9C:  0010A0E3     MOV r1, 0x0
		   0x010F0EA0:  B91C3CEB     BL $+0xf072ec  // CALL → sub_1FF818C
		   0x010F0EA4:  08409AE5     LDR r4, [r10, 0x8]
		   // ──── Block 51 if (>) ────────────────────
		   0x010F0EA8:  285097E5     LDR r5, [r7, 0x28]
		   0x010F0EAC:  000054E3     CMPS r0, r4, 0x0
		   0x010F0EB0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0EB8
		   // 
		   // ──── Block 52 else (==) ────────────────────
		   0x010F0EB4:  45A9F9EB     BL $-0x195ae4
		   // ──── Block 53 if (!=) ────────────────────
		   0x010F0EB8:  184094E5     LDR r4, [r4, 0x18]
		   0x010F0EBC:  000055E3     CMPS r0, r5, 0x0
		   0x010F0EC0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0EC8
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x010F0EC4:  41A9F9EB     BL $-0x195af4
		   // ──── Block 55 if (!=) ────────────────────
		   0x010F0EC8:  0C0095E5     LDR r0, [r5, 0xc]
		   0x010F0ECC:  040050E1     CMPS r0, r0, r4
		   0x010F0ED0:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x010F0ED8
		   // 
		   // ──── Block 56 else (<= (unsigned)) ────────────────────
		   0x010F0ED4:  3EA9F9EB     BL $-0x195b00
		   // ──── Block 57 if (> (unsigned)) ────────────────────
		   0x010F0ED8:  040185E0     ADD r0, r5, r4, lsl 2
		   0x010F0EDC:  104090E5     LDR r4, [r0, 0x10]
		   0x010F0EE0:  000054E3     CMPS r0, r4, 0x0
		   0x010F0EE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0EEC
		   // 
		   // ──── Block 58 else (==) ────────────────────
		   0x010F0EE8:  38A9F9EB     BL $-0x195b18
		   // ──── Block 59 if (!=) ────────────────────
		   0x010F0EEC:  186094E5     LDR r6, [r4, 0x18]
		   0x010F0EF0:  0CB099E5     LDR fp, [sb, 0xc]
		   0x010F0EF4:  34509DE5     LDR r5, [sp, 0x34]
		   0x010F0EF8:  000056E3     CMPS r0, r6, 0x0
		   0x010F0EFC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0F04
		   // 
		   // ──── Block 60 else (==) ────────────────────
		   0x010F0F00:  32A9F9EB     BL $-0x195b30
		   // ──── Block 61 if (!=) ────────────────────
		   0x010F0F04:  10A099E5     LDR r10, [sb, 0x10]
		   0x010F0F08:  000055E3     CMPS r0, r5, 0x0
		   0x010F0F0C:  1C40D6E5     LDRB r4, [r6, 0x1c]
		   0x010F0F10:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0F18
		   // 
		   // ──── Block 62 else (==) ────────────────────
		   0x010F0F14:  2DA9F9EB     BL $-0x195b44
		   // ──── Block 63 if (!=) ────────────────────
		   0x010F0F18:  0500A0E1     MOV r0, r5
		   0x010F0F1C:  0010A0E3     MOV r1, 0x0
		   0x010F0F20:  0070A0E3     MOV r7, 0x0
		   0x010F0F24:  E01B3CEB     BL $+0xf06f88  // CALL → sub_1FF7EAC
		   0x010F0F28:  0050A0E1     MOV r5, r0
		   0x010F0F2C:  000050E3     CMPS r0, r0, 0x0
		   0x010F0F30:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0F38
		   // 
		   // ──── Block 64 else (==) ────────────────────
		   0x010F0F34:  25A9F9EB     BL $-0x195b64
		   // ──── Block 65 if (!=) ────────────────────
		   0x010F0F38:  38008DE2     ADD r0, sp, 0x38
		   0x010F0F3C:  0510A0E1     MOV r1, r5
		   0x010F0F40:  0020A0E3     MOV r2, 0x0
		   0x010F0F44:  961C3CEB     BL $+0xf07260  // CALL → sub_1FF81A4
		   0x010F0F48:  38109DE5     LDR r1, [sp, 0x38]
		   0x010F0F4C:  3C209DE5     LDR r2, [sp, 0x3c]
		   0x010F0F50:  44019FE5     LDR r0, [pc, 0x144]
		   0x010F0F54:  00009FE7     LDR r0, [pc, r0]
		   0x010F0F58:  3C708DE5     STR r7, [sp, 0x3c]
		   0x010F0F5C:  38708DE5     STR r7, [sp, 0x38]
		   0x010F0F60:  003090E5     LDR r3, [r0]
		   0x010F0F64:  38008DE2     ADD r0, sp, 0x38
		   0x010F0F68:  40708DE5     STR r7, [sp, 0x40]
		   0x010F0F6C:  1F2631EB     BL $+0xc49884  // CALL → Nullable<Vector2>..ctor
		   0x010F0F70:  00005BE3     CMPS r0, fp, 0x0
		   0x010F0F74:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0F7C
		   // 
		   // ──── Block 66 else (==) ────────────────────
		   0x010F0F78:  14A9F9EB     BL $-0x195ba8
		   // ──── Block 67 if (!=) ────────────────────
		   0x010F0F7C:  38208DE2     ADD r2, sp, 0x38
		   0x010F0F80:  0030A0E3     MOV r3, 0x0
		   0x010F0F84:  0070E0E3     MVN r7, r0, 0x0
		   0x010F0F88:  0150A0E3     MOV r5, 0x1
		   0x010F0F8C:  070092E8     LDM r2, {r0, r1, r2}
		   0x010F0F90:  08C08DE2     ADD ip, sp, 0x8
		   0x010F0F94:  000054E3     CMPS r0, r4, 0x0
		   0x010F0F98:  20308DE5     STR r3, [sp, 0x20]
		   0x010F0F9C:  01400013     MOVNE r4, 0x1
		   0x010F0FA0:  A7008CE8     STM ip, {r0, r1, r2, r5, r7}
		   0x010F0FA4:  0B00A0E1     MOV r0, fp
		   0x010F0FA8:  0610A0E1     MOV r1, r6
		   0x010F0FAC:  24708DE5     STR r7, [sp, 0x24]
		   0x010F0FB0:  0420A0E1     MOV r2, r4
		   0x010F0FB4:  28308DE5     STR r3, [sp, 0x28]
		   0x010F0FB8:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010F0FBC:  20048DE8     STM sp, {r5, r10}
		   0x010F0FC0:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010F0FC4:  34309DE5     LDR r3, [sp, 0x34]
		   0x010F0FC8:  CE9DFFEB     BL $-0x188c0
		   0x010F0FCC:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010F0FD0:  00009FE7     LDR r0, [pc, r0]
		   0x010F0FD4:  000090E5     LDR r0, [r0]
		   0x010F0FD8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F0FDC:  004090E5     LDR r4, [r0]
		   0x010F0FE0:  000054E3     CMPS r0, r4, 0x0
		   0x010F0FE4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F0FEC
		   // 
		   // ──── Block 68 else (==) ────────────────────
		   0x010F0FE8:  F8A8F9EB     BL $-0x195c18
		   // ──── Block 69 if (!=) ────────────────────
		   0x010F0FEC:  0400A0E1     MOV r0, r4
		   0x010F0FF0:  0010A0E3     MOV r1, 0x0
		   0x010F0FF4:  950111EB     BL $+0x44065c  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   0x010F0FF8:  0C4099E5     LDR r4, [sb, 0xc]
		   0x010F0FFC:  000054E3     CMPS r0, r4, 0x0
		   0x010F1000:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1008
		   // 
		   // ──── Block 70 else (==) ────────────────────
		   0x010F1004:  F1A8F9EB     BL $-0x195c34
		   // ──── Block 71 if (!=) ────────────────────
		   0x010F1008:  604094E5     LDR r4, [r4, 0x60]
		   0x010F100C:  000054E3     CMPS r0, r4, 0x0
		   0x010F1010:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1018
		   // 
		   // ──── Block 72 else (==) ────────────────────
		   0x010F1014:  EDA8F9EB     BL $-0x195c44
		   // ──── Block 73 if (!=) ────────────────────
		   0x010F1018:  0400A0E1     MOV r0, r4
		   0x010F101C:  0010A0E3     MOV r1, 0x0
		   0x010F1020:  210000EB     BL $+0x8c  // CALL → GoalsController.UpdateGoals
		   // ──── Block 74 if (==) ────────────────────
		   0x010F1024:  44D08DE2     ADD sp, sp, 0x44
		   0x010F1028:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x010F102C:  65B21303     TSTSEQ fp, r3, 0x50000006
		   0x010F1030:  E45AF802     RSCSEQ r5, r8, 0xe4000
		   0x010F1034:  3C5EF802     RSCSEQ r5, r8, 0x3c0
		   0x010F1038:  2484F802     RSCSEQ r8, r8, 0x24000000
		   0x010F103C:  046CF802     RSCSEQ r6, r8, 0x400
		   0x010F1040:  FC84F802     RSCSEQ r8, r8, 0xfc000000
		   0x010F1044:  1884F802     RSCSEQ r8, r8, 0x18000000
		   0x010F1048:  4C5AF802     RSCSEQ r5, r8, 0x4c000
		   0x010F104C:  DC84F802     RSCSEQ r8, r8, 0xdc000000
		   0x010F1050:  BC89F802     RSCSEQ r8, r8, 0x2f0000
		   0x010F1054:  B489F802     RSCSEQ r8, r8, 0x2d0000
		   0x010F1058:  AC89F802     RSCSEQ r8, r8, 0x2b0000
		   0x010F105C:  A489F802     RSCSEQ r8, r8, 0x290000
		   0x010F1060:  9C89F802     RSCSEQ r8, r8, 0x270000
		   0x010F1064:  7C89F802     RSCSEQ r8, r8, 0x1f0000
		   0x010F1068:  C459F802     RSCSEQ r5, r8, 0x310000
		   0x010F106C:  206BF802     RSCSEQ r6, r8, 0x8000
		   0x010F1070:  0C89F802     RSCSEQ r8, r8, 0x30000
		   0x010F1074:  B059F802     RSCSEQ r5, r8, 0x2c0000
		   0x010F1078:  2858F802     RSCSEQ r5, r8, 0x280000
		   0x010F107C:  9082F802     RSCSEQ r8, r8, 0x9
		   0x010F1080:  5C87F802     RSCSEQ r8, r8, 0x1700000
		   0x010F1084:  4882F802     RSCSEQ r8, r8, 0x80000004
		   0x010F1088:  205BF802     RSCSEQ r5, r8, 0x8000
		   0x010F108C:  E886F802     RSCSEQ r8, r8, 0xe800000
		   0x010F1090:  9C5AF802     RSCSEQ r5, r8, 0x9c000
		   0x010F1094:  5C86F802     RSCSEQ r8, r8, 0x5c00000
		   0x010F1098:  0857F802     RSCSEQ r5, r8, 0x200000
		   0x010F109C:  A47FF802     RSCSEQ r7, r8, 0x290
		   0x010F10A0:  107FF802     RSCSEQ r7, r8, 0x40
		*/
	}

	// RVA: 0x10F18B0 Offset: 0x10F18B0 VA: 0x10F18B0
	internal void <AddItem>b__4(ItemData data, Cell cell) {
		/* Disassembly (ARM32, 127 instructions, 0x1FC bytes):
		   // CFG: 20 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F18B0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F18B4:  40D04DE2     SUB sp, sp, 0x40
		   0x010F18B8:  C8419FE5     LDR r4, [pc, 0x1c8]
		   0x010F18BC:  0070A0E1     MOV r7, r0
		   0x010F18C0:  0280A0E1     MOV r8, r2
		   0x010F18C4:  0150A0E1     MOV r5, r1
		   0x010F18C8:  04408FE0     ADD r4, pc, r4
		   0x010F18CC:  0000D4E5     LDRB r0, [r4]
		   0x010F18D0:  000050E3     CMPS r0, r0, 0x0
		   0x010F18D4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010F1910
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F18D8:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x010F18DC:  00009FE7     LDR r0, [pc, r0]
		   0x010F18E0:  1EA6F9EB     BL $-0x196780
		   0x010F18E4:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x010F18E8:  00009FE7     LDR r0, [pc, r0]
		   0x010F18EC:  1BA6F9EB     BL $-0x19678c
		   0x010F18F0:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x010F18F4:  00009FE7     LDR r0, [pc, r0]
		   0x010F18F8:  18A6F9EB     BL $-0x196798
		   0x010F18FC:  94019FE5     LDR r0, [pc, 0x194]
		   0x010F1900:  00009FE7     LDR r0, [pc, r0]
		   0x010F1904:  15A6F9EB     BL $-0x1967a4
		   0x010F1908:  0100A0E3     MOV r0, 0x1
		   0x010F190C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F1910:  0CA097E5     LDR r10, [r7, 0xc]
		   0x010F1914:  000055E3     CMPS r0, r5, 0x0
		   0x010F1918:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1920
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F191C:  ABA6F9EB     BL $-0x19654c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F1920:  084097E5     LDR r4, [r7, 0x8]
		   0x010F1924:  109097E5     LDR sb, [r7, 0x10]
		   0x010F1928:  1C70D5E5     LDRB r7, [r5, 0x1c]
		   0x010F192C:  000054E3     CMPS r0, r4, 0x0
		   0x010F1930:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1938
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F1934:  A5A6F9EB     BL $-0x196564
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F1938:  104094E5     LDR r4, [r4, 0x10]
		   0x010F193C:  000054E3     CMPS r0, r4, 0x0
		   0x010F1940:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1948
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F1944:  A1A6F9EB     BL $-0x196574
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F1948:  0400A0E1     MOV r0, r4
		   0x010F194C:  0010A0E3     MOV r1, 0x0
		   0x010F1950:  0060A0E3     MOV r6, 0x0
		   0x010F1954:  54193CEB     BL $+0xf06558  // CALL → sub_1FF7EAC
		   0x010F1958:  0040A0E1     MOV r4, r0
		   0x010F195C:  000050E3     CMPS r0, r0, 0x0
		   0x010F1960:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1968
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F1964:  99A6F9EB     BL $-0x196594
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F1968:  30008DE2     ADD r0, sp, 0x30
		   0x010F196C:  0410A0E1     MOV r1, r4
		   0x010F1970:  0020A0E3     MOV r2, 0x0
		   0x010F1974:  0A1A3CEB     BL $+0xf06830  // CALL → sub_1FF81A4
		   0x010F1978:  30109DE5     LDR r1, [sp, 0x30]
		   0x010F197C:  34209DE5     LDR r2, [sp, 0x34]
		   0x010F1980:  14019FE5     LDR r0, [pc, 0x114]
		   0x010F1984:  00009FE7     LDR r0, [pc, r0]
		   0x010F1988:  34608DE5     STR r6, [sp, 0x34]
		   0x010F198C:  30608DE5     STR r6, [sp, 0x30]
		   0x010F1990:  003090E5     LDR r3, [r0]
		   0x010F1994:  30008DE2     ADD r0, sp, 0x30
		   0x010F1998:  38608DE5     STR r6, [sp, 0x38]
		   0x010F199C:  932331EB     BL $+0xc48e54  // CALL → Nullable<Vector2>..ctor
		   0x010F19A0:  00005AE3     CMPS r0, r10, 0x0
		   0x010F19A4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F19AC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F19A8:  88A6F9EB     BL $-0x1965d8
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F19AC:  30208DE2     ADD r2, sp, 0x30
		   0x010F19B0:  000057E3     CMPS r0, r7, 0x0
		   0x010F19B4:  0030A0E3     MOV r3, 0x0
		   0x010F19B8:  08C08DE2     ADD ip, sp, 0x8
		   0x010F19BC:  070092E8     LDM r2, {r0, r1, r2}
		   0x010F19C0:  01700013     MOVNE r7, 0x1
		   0x010F19C4:  0060E0E3     MVN r6, r0, 0x0
		   0x010F19C8:  0140A0E3     MOV r4, 0x1
		   0x010F19CC:  20308DE5     STR r3, [sp, 0x20]
		   0x010F19D0:  57008CE8     STM ip, {r0, r1, r2, r4, r6}
		   0x010F19D4:  0A00A0E1     MOV r0, r10
		   0x010F19D8:  0510A0E1     MOV r1, r5
		   0x010F19DC:  28308DE5     STR r3, [sp, 0x28]
		   0x010F19E0:  0720A0E1     MOV r2, r7
		   0x010F19E4:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010F19E8:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010F19EC:  0830A0E1     MOV r3, r8
		   0x010F19F0:  24608DE5     STR r6, [sp, 0x24]
		   0x010F19F4:  10028DE8     STM sp, {r4, sb}
		   0x010F19F8:  429BFFEB     BL $-0x192f0
		   0x010F19FC:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010F1A00:  00009FE7     LDR r0, [pc, r0]
		   0x010F1A04:  000090E5     LDR r0, [r0]
		   0x010F1A08:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1A0C:  004090E5     LDR r4, [r0]
		   0x010F1A10:  000054E3     CMPS r0, r4, 0x0
		   0x010F1A14:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1A1C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F1A18:  6CA6F9EB     BL $-0x196648
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F1A1C:  0400A0E1     MOV r0, r4
		   0x010F1A20:  0010A0E3     MOV r1, 0x0
		   0x010F1A24:  09FF10EB     BL $+0x43fc2c  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   0x010F1A28:  74409FE5     LDR r4, [pc, 0x74]
		   0x010F1A2C:  04409FE7     LDR r4, [pc, r4]
		   0x010F1A30:  000094E5     LDR r0, [r4]
		   0x010F1A34:  741090E5     LDR r1, [r0, 0x74]
		   0x010F1A38:  000051E3     CMPS r0, r1, 0x0
		   0x010F1A3C:  0100001A     BNE $+0xc  // if (!=) goto 0x010F1A48
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F1A40:  13A6F9EB     BL $-0x1967ac
		   0x010F1A44:  000094E5     LDR r0, [r4]
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F1A48:  58109FE5     LDR r1, [pc, 0x58]
		   0x010F1A4C:  01109FE7     LDR r1, [pc, r1]
		   0x010F1A50:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1A54:  001091E5     LDR r1, [r1]
		   0x010F1A58:  384090E5     LDR r4, [r0, 0x38]
		   0x010F1A5C:  742091E5     LDR r2, [r1, 0x74]
		   0x010F1A60:  000052E3     CMPS r0, r2, 0x0
		   0x010F1A64:  0100001A     BNE $+0xc  // if (!=) goto 0x010F1A70
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F1A68:  0100A0E1     MOV r0, r1
		   0x010F1A6C:  08A6F9EB     BL $-0x1967d8
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F1A70:  0400A0E1     MOV r0, r4
		   0x010F1A74:  FE15A0E3     MOV r1, 0x3f800000
		   0x010F1A78:  0020A0E3     MOV r2, 0x0
		   0x010F1A7C:  F8B303EB     BL $+0xecfe8  // CALL → SoundController.PlaySound
		   0x010F1A80:  40D08DE2     ADD sp, sp, 0x40
		   0x010F1A84:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F1A88:  2EA41303     TSTSEQ r10, r3, 0x2e000000
		   0x010F1A8C:  0476F802     RSCSEQ r7, r8, 0x400000
		   0x010F1A90:  1076F802     RSCSEQ r7, r8, 0x1000000
		   0x010F1A94:  4C6EF802     RSCSEQ r6, r8, 0x4c0
		   0x010F1A98:  446EF802     RSCSEQ r6, r8, 0x440
		   0x010F1A9C:  7475F802     RSCSEQ r7, r8, 0x1d000000
		   0x010F1AA0:  E074F802     RSCSEQ r7, r8, 0xe0000000
		   0x010F1AA4:  186DF802     RSCSEQ r6, r8, 0x600
		   0x010F1AA8:  F46CF802     RSCSEQ r6, r8, 0xf400
		*/
	}

	// RVA: 0x10F1AAC Offset: 0x10F1AAC VA: 0x10F1AAC
	internal void <AddItem>g__OnSpawnItem|6(ItemData data, Cell cell) {
		/* Disassembly (ARM32, 127 instructions, 0x1FC bytes):
		   // CFG: 20 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F1AAC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F1AB0:  40D04DE2     SUB sp, sp, 0x40
		   0x010F1AB4:  C8419FE5     LDR r4, [pc, 0x1c8]
		   0x010F1AB8:  0070A0E1     MOV r7, r0
		   0x010F1ABC:  0280A0E1     MOV r8, r2
		   0x010F1AC0:  0150A0E1     MOV r5, r1
		   0x010F1AC4:  04408FE0     ADD r4, pc, r4
		   0x010F1AC8:  0000D4E5     LDRB r0, [r4]
		   0x010F1ACC:  000050E3     CMPS r0, r0, 0x0
		   0x010F1AD0:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010F1B0C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F1AD4:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x010F1AD8:  00009FE7     LDR r0, [pc, r0]
		   0x010F1ADC:  9FA5F9EB     BL $-0x19697c
		   0x010F1AE0:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x010F1AE4:  00009FE7     LDR r0, [pc, r0]
		   0x010F1AE8:  9CA5F9EB     BL $-0x196988
		   0x010F1AEC:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x010F1AF0:  00009FE7     LDR r0, [pc, r0]
		   0x010F1AF4:  99A5F9EB     BL $-0x196994
		   0x010F1AF8:  94019FE5     LDR r0, [pc, 0x194]
		   0x010F1AFC:  00009FE7     LDR r0, [pc, r0]
		   0x010F1B00:  96A5F9EB     BL $-0x1969a0
		   0x010F1B04:  0100A0E3     MOV r0, 0x1
		   0x010F1B08:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F1B0C:  0CA097E5     LDR r10, [r7, 0xc]
		   0x010F1B10:  000055E3     CMPS r0, r5, 0x0
		   0x010F1B14:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1B1C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F1B18:  2CA6F9EB     BL $-0x196748
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F1B1C:  084097E5     LDR r4, [r7, 0x8]
		   0x010F1B20:  109097E5     LDR sb, [r7, 0x10]
		   0x010F1B24:  1C70D5E5     LDRB r7, [r5, 0x1c]
		   0x010F1B28:  000054E3     CMPS r0, r4, 0x0
		   0x010F1B2C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1B34
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F1B30:  26A6F9EB     BL $-0x196760
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F1B34:  104094E5     LDR r4, [r4, 0x10]
		   0x010F1B38:  000054E3     CMPS r0, r4, 0x0
		   0x010F1B3C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1B44
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F1B40:  22A6F9EB     BL $-0x196770
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F1B44:  0400A0E1     MOV r0, r4
		   0x010F1B48:  0010A0E3     MOV r1, 0x0
		   0x010F1B4C:  0060A0E3     MOV r6, 0x0
		   0x010F1B50:  D5183CEB     BL $+0xf0635c  // CALL → sub_1FF7EAC
		   0x010F1B54:  0040A0E1     MOV r4, r0
		   0x010F1B58:  000050E3     CMPS r0, r0, 0x0
		   0x010F1B5C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1B64
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F1B60:  1AA6F9EB     BL $-0x196790
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F1B64:  30008DE2     ADD r0, sp, 0x30
		   0x010F1B68:  0410A0E1     MOV r1, r4
		   0x010F1B6C:  0020A0E3     MOV r2, 0x0
		   0x010F1B70:  8B193CEB     BL $+0xf06634  // CALL → sub_1FF81A4
		   0x010F1B74:  30109DE5     LDR r1, [sp, 0x30]
		   0x010F1B78:  34209DE5     LDR r2, [sp, 0x34]
		   0x010F1B7C:  14019FE5     LDR r0, [pc, 0x114]
		   0x010F1B80:  00009FE7     LDR r0, [pc, r0]
		   0x010F1B84:  34608DE5     STR r6, [sp, 0x34]
		   0x010F1B88:  30608DE5     STR r6, [sp, 0x30]
		   0x010F1B8C:  003090E5     LDR r3, [r0]
		   0x010F1B90:  30008DE2     ADD r0, sp, 0x30
		   0x010F1B94:  38608DE5     STR r6, [sp, 0x38]
		   0x010F1B98:  142331EB     BL $+0xc48c58  // CALL → Nullable<Vector2>..ctor
		   0x010F1B9C:  00005AE3     CMPS r0, r10, 0x0
		   0x010F1BA0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1BA8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F1BA4:  09A6F9EB     BL $-0x1967d4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F1BA8:  30208DE2     ADD r2, sp, 0x30
		   0x010F1BAC:  000057E3     CMPS r0, r7, 0x0
		   0x010F1BB0:  0030A0E3     MOV r3, 0x0
		   0x010F1BB4:  08C08DE2     ADD ip, sp, 0x8
		   0x010F1BB8:  070092E8     LDM r2, {r0, r1, r2}
		   0x010F1BBC:  01700013     MOVNE r7, 0x1
		   0x010F1BC0:  0060E0E3     MVN r6, r0, 0x0
		   0x010F1BC4:  0140A0E3     MOV r4, 0x1
		   0x010F1BC8:  20308DE5     STR r3, [sp, 0x20]
		   0x010F1BCC:  57008CE8     STM ip, {r0, r1, r2, r4, r6}
		   0x010F1BD0:  0A00A0E1     MOV r0, r10
		   0x010F1BD4:  0510A0E1     MOV r1, r5
		   0x010F1BD8:  28308DE5     STR r3, [sp, 0x28]
		   0x010F1BDC:  0720A0E1     MOV r2, r7
		   0x010F1BE0:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010F1BE4:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010F1BE8:  0830A0E1     MOV r3, r8
		   0x010F1BEC:  24608DE5     STR r6, [sp, 0x24]
		   0x010F1BF0:  10028DE8     STM sp, {r4, sb}
		   0x010F1BF4:  C39AFFEB     BL $-0x194ec
		   0x010F1BF8:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010F1BFC:  00009FE7     LDR r0, [pc, r0]
		   0x010F1C00:  000090E5     LDR r0, [r0]
		   0x010F1C04:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1C08:  004090E5     LDR r4, [r0]
		   0x010F1C0C:  000054E3     CMPS r0, r4, 0x0
		   0x010F1C10:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1C18
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F1C14:  EDA5F9EB     BL $-0x196844
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F1C18:  0400A0E1     MOV r0, r4
		   0x010F1C1C:  0010A0E3     MOV r1, 0x0
		   0x010F1C20:  8AFE10EB     BL $+0x43fa30  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   0x010F1C24:  74409FE5     LDR r4, [pc, 0x74]
		   0x010F1C28:  04409FE7     LDR r4, [pc, r4]
		   0x010F1C2C:  000094E5     LDR r0, [r4]
		   0x010F1C30:  741090E5     LDR r1, [r0, 0x74]
		   0x010F1C34:  000051E3     CMPS r0, r1, 0x0
		   0x010F1C38:  0100001A     BNE $+0xc  // if (!=) goto 0x010F1C44
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F1C3C:  94A5F9EB     BL $-0x1969a8
		   0x010F1C40:  000094E5     LDR r0, [r4]
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F1C44:  58109FE5     LDR r1, [pc, 0x58]
		   0x010F1C48:  01109FE7     LDR r1, [pc, r1]
		   0x010F1C4C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1C50:  001091E5     LDR r1, [r1]
		   0x010F1C54:  384090E5     LDR r4, [r0, 0x38]
		   0x010F1C58:  742091E5     LDR r2, [r1, 0x74]
		   0x010F1C5C:  000052E3     CMPS r0, r2, 0x0
		   0x010F1C60:  0100001A     BNE $+0xc  // if (!=) goto 0x010F1C6C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F1C64:  0100A0E1     MOV r0, r1
		   0x010F1C68:  89A5F9EB     BL $-0x1969d4
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F1C6C:  0400A0E1     MOV r0, r4
		   0x010F1C70:  FE15A0E3     MOV r1, 0x3f800000
		   0x010F1C74:  0020A0E3     MOV r2, 0x0
		   0x010F1C78:  79B303EB     BL $+0xecdec  // CALL → SoundController.PlaySound
		   0x010F1C7C:  40D08DE2     ADD sp, sp, 0x40
		   0x010F1C80:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F1C84:  33A21303     TSTSEQ r10, r3, 0x30000003
		   0x010F1C88:  0874F802     RSCSEQ r7, r8, 0x8000000
		   0x010F1C8C:  1474F802     RSCSEQ r7, r8, 0x14000000
		   0x010F1C90:  506CF802     RSCSEQ r6, r8, 0x5000
		   0x010F1C94:  486CF802     RSCSEQ r6, r8, 0x4800
		   0x010F1C98:  7873F802     RSCSEQ r7, r8, 0xe0000001
		   0x010F1C9C:  E472F802     RSCSEQ r7, r8, 0x4000000e
		   0x010F1CA0:  1C6BF802     RSCSEQ r6, r8, 0x7000
		   0x010F1CA4:  F86AF802     RSCSEQ r6, r8, 0xf8000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass96_1 // TypeDefIndex: 1198
{

	// Fields
	public ConfigItemID configItem; // 0x8

	// Methods

	// RVA: 0x10F10A4 Offset: 0x10F10A4 VA: 0x10F10A4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F10A4:  0010A0E3     MOV r1, 0x0
		   0x010F10A8:  CF907EEA     B $+0x1fa4344  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F1CA8 Offset: 0x10F1CA8 VA: 0x10F1CA8
	internal bool <AddItem>b__1(ChainObject x) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F1CA8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F1CAC:  0140A0E1     MOV r4, r1
		   0x010F1CB0:  0050A0E1     MOV r5, r0
		   0x010F1CB4:  000051E3     CMPS r0, r1, 0x0
		   0x010F1CB8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1CC0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F1CBC:  C3A5F9EB     BL $-0x1968ec
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F1CC0:  085095E5     LDR r5, [r5, 0x8]
		   0x010F1CC4:  184094E5     LDR r4, [r4, 0x18]
		   0x010F1CC8:  000055E3     CMPS r0, r5, 0x0
		   0x010F1CCC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1CD4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F1CD0:  BEA5F9EB     BL $-0x196900
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F1CD4:  0500A0E1     MOV r0, r5
		   0x010F1CD8:  97F4FFEB     BL $-0x2d9c
		   0x010F1CDC:  0010A0E1     MOV r1, r0
		   0x010F1CE0:  0400A0E1     MOV r0, r4
		   0x010F1CE4:  0020A0E3     MOV r2, 0x0
		   0x010F1CE8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F1CEC:  475376EA     B $+0x1d94d24  // TAIL CALL → String.op_Equality
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass96_2 // TypeDefIndex: 1199
{

	// Fields
	public ItemContainer itemContainer; // 0x8
	public ItemConsumable consumable; // 0xC
	public GameState.<>c__DisplayClass96_0 CS$<>8__locals1; // 0x10

	// Methods

	// RVA: 0x10F1CF0 Offset: 0x10F1CF0 VA: 0x10F1CF0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F1CF0:  0010A0E3     MOV r1, 0x0
		   0x010F1CF4:  BC8D7EEA     B $+0x1fa36f8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F1CF8 Offset: 0x10F1CF8 VA: 0x10F1CF8
	internal void <AddItem>g__ItemContainerOnSpawnItem|2(ItemData data, Cell cell) {
		/* Disassembly (ARM32, 176 instructions, 0x2C0 bytes):
		   // CFG: 32 blocks, 32 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F1CF8:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010F1CFC:  3CD04DE2     SUB sp, sp, 0x3c
		   0x010F1D00:  84429FE5     LDR r4, [pc, 0x284]
		   0x010F1D04:  0090A0E1     MOV sb, r0
		   0x010F1D08:  0280A0E1     MOV r8, r2
		   0x010F1D0C:  01B0A0E1     MOV fp, r1
		   0x010F1D10:  04408FE0     ADD r4, pc, r4
		   0x010F1D14:  0000D4E5     LDRB r0, [r4]
		   0x010F1D18:  000050E3     CMPS r0, r0, 0x0
		   0x010F1D1C:  1000001A     BNE $+0x48  // if (!=) goto 0x010F1D64
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F1D20:  68029FE5     LDR r0, [pc, 0x268]
		   0x010F1D24:  00009FE7     LDR r0, [pc, r0]
		   0x010F1D28:  0CA5F9EB     BL $-0x196bc8
		   0x010F1D2C:  60029FE5     LDR r0, [pc, 0x260]
		   0x010F1D30:  00009FE7     LDR r0, [pc, r0]
		   0x010F1D34:  09A5F9EB     BL $-0x196bd4
		   0x010F1D38:  58029FE5     LDR r0, [pc, 0x258]
		   0x010F1D3C:  00009FE7     LDR r0, [pc, r0]
		   0x010F1D40:  06A5F9EB     BL $-0x196be0
		   0x010F1D44:  50029FE5     LDR r0, [pc, 0x250]
		   0x010F1D48:  00009FE7     LDR r0, [pc, r0]
		   0x010F1D4C:  03A5F9EB     BL $-0x196bec
		   0x010F1D50:  48029FE5     LDR r0, [pc, 0x248]
		   0x010F1D54:  00009FE7     LDR r0, [pc, r0]
		   0x010F1D58:  00A5F9EB     BL $-0x196bf8
		   0x010F1D5C:  0100A0E3     MOV r0, 0x1
		   0x010F1D60:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F1D64:  38029FE5     LDR r0, [pc, 0x238]
		   0x010F1D68:  00009FE7     LDR r0, [pc, r0]
		   0x010F1D6C:  000090E5     LDR r0, [r0]
		   0x010F1D70:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1D74:  004090E5     LDR r4, [r0]
		   0x010F1D78:  000054E3     CMPS r0, r4, 0x0
		   0x010F1D7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1D84
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F1D80:  92A5F9EB     BL $-0x1969b0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F1D84:  0400A0E1     MOV r0, r4
		   0x010F1D88:  0010A0E3     MOV r1, 0x0
		   0x010F1D8C:  59D210EB     BL $+0x43496c  // CALL → FTUEFirstController.TryCallAfterSpawnItem
		   0x010F1D90:  104099E5     LDR r4, [sb, 0x10]
		   0x010F1D94:  000054E3     CMPS r0, r4, 0x0
		   0x010F1D98:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1DA0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F1D9C:  8BA5F9EB     BL $-0x1969cc
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F1DA0:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010F1DA4:  00005BE3     CMPS r0, fp, 0x0
		   0x010F1DA8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1DB0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F1DAC:  87A5F9EB     BL $-0x1969dc
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F1DB0:  104099E5     LDR r4, [sb, 0x10]
		   0x010F1DB4:  1C50DBE5     LDRB r5, [fp, 0x1c]
		   0x010F1DB8:  000054E3     CMPS r0, r4, 0x0
		   0x010F1DBC:  0400A0E1     MOV r0, r4
		   0x010F1DC0:  0300001A     BNE $+0x14  // if (!=) goto 0x010F1DD4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F1DC4:  81A5F9EB     BL $-0x1969f4
		   0x010F1DC8:  100099E5     LDR r0, [sb, 0x10]
		   0x010F1DCC:  000050E3     CMPS r0, r0, 0x0
		   0x010F1DD0:  6C00000A     BEQ $+0x1b8  // if (==) goto 0x010F1F88
		   // 
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010F1DD4:  086090E5     LDR r6, [r0, 0x8]
		   0x010F1DD8:  10A094E5     LDR r10, [r4, 0x10]
		   0x010F1DDC:  000056E3     CMPS r0, r6, 0x0
		   0x010F1DE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1DE8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F1DE4:  79A5F9EB     BL $-0x196a14
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F1DE8:  104096E5     LDR r4, [r6, 0x10]
		   0x010F1DEC:  000054E3     CMPS r0, r4, 0x0
		   0x010F1DF0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1DF8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F1DF4:  75A5F9EB     BL $-0x196a24
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F1DF8:  0400A0E1     MOV r0, r4
		   0x010F1DFC:  0010A0E3     MOV r1, 0x0
		   0x010F1E00:  0060A0E3     MOV r6, 0x0
		   0x010F1E04:  28183CEB     BL $+0xf060a8  // CALL → sub_1FF7EAC
		   0x010F1E08:  0040A0E1     MOV r4, r0
		   0x010F1E0C:  000050E3     CMPS r0, r0, 0x0
		   0x010F1E10:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1E18
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F1E14:  6DA5F9EB     BL $-0x196a44
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F1E18:  30008DE2     ADD r0, sp, 0x30
		   0x010F1E1C:  0410A0E1     MOV r1, r4
		   0x010F1E20:  0020A0E3     MOV r2, 0x0
		   0x010F1E24:  DE183CEB     BL $+0xf06380  // CALL → sub_1FF81A4
		   0x010F1E28:  30109DE5     LDR r1, [sp, 0x30]
		   0x010F1E2C:  34209DE5     LDR r2, [sp, 0x34]
		   0x010F1E30:  70019FE5     LDR r0, [pc, 0x170]
		   0x010F1E34:  00009FE7     LDR r0, [pc, r0]
		   0x010F1E38:  34608DE5     STR r6, [sp, 0x34]
		   0x010F1E3C:  30608DE5     STR r6, [sp, 0x30]
		   0x010F1E40:  003090E5     LDR r3, [r0]
		   0x010F1E44:  30008DE2     ADD r0, sp, 0x30
		   0x010F1E48:  38608DE5     STR r6, [sp, 0x38]
		   0x010F1E4C:  672231EB     BL $+0xc489a4  // CALL → Nullable<Vector2>..ctor
		   0x010F1E50:  000057E3     CMPS r0, r7, 0x0
		   0x010F1E54:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1E5C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F1E58:  5CA5F9EB     BL $-0x196a88
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F1E5C:  30208DE2     ADD r2, sp, 0x30
		   0x010F1E60:  000055E3     CMPS r0, r5, 0x0
		   0x010F1E64:  0030A0E3     MOV r3, 0x0
		   0x010F1E68:  08C08DE2     ADD ip, sp, 0x8
		   0x010F1E6C:  070092E8     LDM r2, {r0, r1, r2}
		   0x010F1E70:  01500013     MOVNE r5, 0x1
		   0x010F1E74:  0060E0E3     MVN r6, r0, 0x0
		   0x010F1E78:  0140A0E3     MOV r4, 0x1
		   0x010F1E7C:  20308DE5     STR r3, [sp, 0x20]
		   0x010F1E80:  57008CE8     STM ip, {r0, r1, r2, r4, r6}
		   0x010F1E84:  0700A0E1     MOV r0, r7
		   0x010F1E88:  0B10A0E1     MOV r1, fp
		   0x010F1E8C:  28308DE5     STR r3, [sp, 0x28]
		   0x010F1E90:  0520A0E1     MOV r2, r5
		   0x010F1E94:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010F1E98:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010F1E9C:  0830A0E1     MOV r3, r8
		   0x010F1EA0:  24608DE5     STR r6, [sp, 0x24]
		   0x010F1EA4:  10048DE8     STM sp, {r4, r10}
		   0x010F1EA8:  169AFFEB     BL $-0x197a0
		   0x010F1EAC:  0040A0E1     MOV r4, r0
		   0x010F1EB0:  000050E3     CMPS r0, r0, 0x0
		   0x010F1EB4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1EBC
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010F1EB8:  44A5F9EB     BL $-0x196ae8
		   // ──── Block 20 if (!=) ────────────────────
		   0x010F1EBC:  0400A0E1     MOV r0, r4
		   0x010F1EC0:  0010A0E3     MOV r1, 0x0
		   0x010F1EC4:  F8173CEB     BL $+0xf05fe8  // CALL → sub_1FF7EAC
		   0x010F1EC8:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x010F1ECC:  00009FE7     LDR r0, [pc, r0]
		   0x010F1ED0:  000090E5     LDR r0, [r0]
		   0x010F1ED4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1ED8:  004090E5     LDR r4, [r0]
		   0x010F1EDC:  000054E3     CMPS r0, r4, 0x0
		   0x010F1EE0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1EE8
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x010F1EE4:  39A5F9EB     BL $-0x196b14
		   // ──── Block 22 if (!=) ────────────────────
		   0x010F1EE8:  0400A0E1     MOV r0, r4
		   0x010F1EEC:  0010A0E3     MOV r1, 0x0
		   0x010F1EF0:  D6FD10EB     BL $+0x43f760  // CALL → FTUERewardsBox.CheckIfFieldIsFull
		   0x010F1EF4:  B4409FE5     LDR r4, [pc, 0xb4]
		   0x010F1EF8:  04409FE7     LDR r4, [pc, r4]
		   0x010F1EFC:  000094E5     LDR r0, [r4]
		   0x010F1F00:  741090E5     LDR r1, [r0, 0x74]
		   0x010F1F04:  000051E3     CMPS r0, r1, 0x0
		   0x010F1F08:  0100001A     BNE $+0xc  // if (!=) goto 0x010F1F14
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x010F1F0C:  E0A4F9EB     BL $-0x196c78
		   0x010F1F10:  000094E5     LDR r0, [r4]
		   // ──── Block 24 if (!=) ────────────────────
		   0x010F1F14:  98109FE5     LDR r1, [pc, 0x98]
		   0x010F1F18:  01109FE7     LDR r1, [pc, r1]
		   0x010F1F1C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F1F20:  001091E5     LDR r1, [r1]
		   0x010F1F24:  384090E5     LDR r4, [r0, 0x38]
		   0x010F1F28:  742091E5     LDR r2, [r1, 0x74]
		   0x010F1F2C:  000052E3     CMPS r0, r2, 0x0
		   0x010F1F30:  0100001A     BNE $+0xc  // if (!=) goto 0x010F1F3C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x010F1F34:  0100A0E1     MOV r0, r1
		   0x010F1F38:  D5A4F9EB     BL $-0x196ca4
		   // ──── Block 26 if (!=) ────────────────────
		   0x010F1F3C:  0400A0E1     MOV r0, r4
		   0x010F1F40:  FE15A0E3     MOV r1, 0x3f800000
		   0x010F1F44:  0020A0E3     MOV r2, 0x0
		   0x010F1F48:  C5B203EB     BL $+0xecb1c  // CALL → SoundController.PlaySound
		   0x010F1F4C:  104099E5     LDR r4, [sb, 0x10]
		   0x010F1F50:  085099E5     LDR r5, [sb, 0x8]
		   0x010F1F54:  000054E3     CMPS r0, r4, 0x0
		   0x010F1F58:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1F60
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x010F1F5C:  1BA5F9EB     BL $-0x196b8c
		   // ──── Block 28 if (!=) ────────────────────
		   0x010F1F60:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F1F64:  000054E3     CMPS r0, r4, 0x0
		   0x010F1F68:  0000001A     BNE $+0x8  // if (!=) goto 0x010F1F70
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x010F1F6C:  17A5F9EB     BL $-0x196b9c
		   // ──── Block 30 if (!=) ────────────────────
		   0x010F1F70:  541094E5     LDR r1, [r4, 0x54]
		   0x010F1F74:  0500A0E1     MOV r0, r5
		   0x010F1F78:  0020A0E3     MOV r2, 0x0
		   0x010F1F7C:  3DC308EB     BL $+0x230cfc  // CALL → EventResourceOver.CheckContainersCharge
		   0x010F1F80:  3CD08DE2     ADD sp, sp, 0x3c
		   0x010F1F84:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 31 if (==) ────────────────────
		   0x010F1F88:  10A5F9EB     BL $-0x196bb8
		   0x010F1F8C:  E89F1303     TSTSEQ sb, r3, 0x3a0
		   0x010F1F90:  B871F802     RSCSEQ r7, r8, 0x2e
		   0x010F1F94:  B071F802     RSCSEQ r7, r8, 0x2c
		   0x010F1F98:  BC71F802     RSCSEQ r7, r8, 0x2f
		   0x010F1F9C:  F869F802     RSCSEQ r6, r8, 0x3e0000
		   0x010F1FA0:  F069F802     RSCSEQ r6, r8, 0x3c0000
		   0x010F1FA4:  7471F802     RSCSEQ r7, r8, 0x1d
		   0x010F1FA8:  C470F802     RSCSEQ r7, r8, 0xc4
		   0x010F1FAC:  1470F802     RSCSEQ r7, r8, 0x14
		   0x010F1FB0:  4C68F802     RSCSEQ r6, r8, 0x4c0000
		   0x010F1FB4:  2868F802     RSCSEQ r6, r8, 0x280000
		*/
	}

	// RVA: 0x10F1FB8 Offset: 0x10F1FB8 VA: 0x10F1FB8
	internal void <AddItem>b__3(Item consumptionItem) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F1FB8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass96_3 // TypeDefIndex: 1200
{

	// Fields
	public ItemChargeableContainer newItem; // 0x8
	public GameState.<>c__DisplayClass96_2 CS$<>8__locals2; // 0xC

	// Methods

	// RVA: 0x10F2244 Offset: 0x10F2244 VA: 0x10F2244
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F2244:  0010A0E3     MOV r1, 0x0
		   0x010F2248:  678C7EEA     B $+0x1fa31a4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F224C Offset: 0x10F224C VA: 0x10F224C
	internal void <AddItem>b__8() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F224C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F2250:  0C5090E5     LDR r5, [r0, 0xc]
		   0x010F2254:  0040A0E1     MOV r4, r0
		   0x010F2258:  000055E3     CMPS r0, r5, 0x0
		   0x010F225C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2264
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2260:  5AA4F9EB     BL $-0x196e90
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2264:  105095E5     LDR r5, [r5, 0x10]
		   0x010F2268:  000055E3     CMPS r0, r5, 0x0
		   0x010F226C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2274
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2270:  56A4F9EB     BL $-0x196ea0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F2274:  0C5095E5     LDR r5, [r5, 0xc]
		   0x010F2278:  000055E3     CMPS r0, r5, 0x0
		   0x010F227C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2284
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F2280:  52A4F9EB     BL $-0x196eb0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F2284:  084094E5     LDR r4, [r4, 0x8]
		   0x010F2288:  7C5095E5     LDR r5, [r5, 0x7c]
		   0x010F228C:  000054E3     CMPS r0, r4, 0x0
		   0x010F2290:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2298
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F2294:  4DA4F9EB     BL $-0x196ec4
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F2298:  104094E5     LDR r4, [r4, 0x10]
		   0x010F229C:  000055E3     CMPS r0, r5, 0x0
		   0x010F22A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F22A8
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F22A4:  49A4F9EB     BL $-0x196ed4
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F22A8:  0C3095E5     LDR r3, [r5, 0xc]
		   0x010F22AC:  0410A0E1     MOV r1, r4
		   0x010F22B0:  142095E5     LDR r2, [r5, 0x14]
		   0x010F22B4:  200095E5     LDR r0, [r5, 0x20]
		   0x010F22B8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F22BC:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10F22C0 Offset: 0x10F22C0 VA: 0x10F22C0
	internal void <AddItem>b__7(ItemData data, Cell cell) {
		/* Disassembly (ARM32, 195 instructions, 0x30C bytes):
		   // CFG: 46 blocks, 44 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F22C0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F22C4:  40D04DE2     SUB sp, sp, 0x40
		   0x010F22C8:  D8429FE5     LDR r4, [pc, 0x2d8]
		   0x010F22CC:  0060A0E1     MOV r6, r0
		   0x010F22D0:  0280A0E1     MOV r8, r2
		   0x010F22D4:  0190A0E1     MOV sb, r1
		   0x010F22D8:  04408FE0     ADD r4, pc, r4
		   0x010F22DC:  0000D4E5     LDRB r0, [r4]
		   0x010F22E0:  000050E3     CMPS r0, r0, 0x0
		   0x010F22E4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010F2320
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F22E8:  BC029FE5     LDR r0, [pc, 0x2bc]
		   0x010F22EC:  00009FE7     LDR r0, [pc, r0]
		   0x010F22F0:  9AA3F9EB     BL $-0x197190
		   0x010F22F4:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x010F22F8:  00009FE7     LDR r0, [pc, r0]
		   0x010F22FC:  97A3F9EB     BL $-0x19719c
		   0x010F2300:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x010F2304:  00009FE7     LDR r0, [pc, r0]
		   0x010F2308:  94A3F9EB     BL $-0x1971a8
		   0x010F230C:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x010F2310:  00009FE7     LDR r0, [pc, r0]
		   0x010F2314:  91A3F9EB     BL $-0x1971b4
		   0x010F2318:  0100A0E3     MOV r0, 0x1
		   0x010F231C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2320:  94429FE5     LDR r4, [pc, 0x294]
		   0x010F2324:  04409FE7     LDR r4, [pc, r4]
		   0x010F2328:  000094E5     LDR r0, [r4]
		   0x010F232C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F2330:  000051E3     CMPS r0, r1, 0x0
		   0x010F2334:  0100001A     BNE $+0xc  // if (!=) goto 0x010F2340
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2338:  D5A3F9EB     BL $-0x1970a4
		   0x010F233C:  000094E5     LDR r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F2340:  78129FE5     LDR r1, [pc, 0x278]
		   0x010F2344:  01109FE7     LDR r1, [pc, r1]
		   0x010F2348:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F234C:  001091E5     LDR r1, [r1]
		   0x010F2350:  4C4090E5     LDR r4, [r0, 0x4c]
		   0x010F2354:  742091E5     LDR r2, [r1, 0x74]
		   0x010F2358:  000052E3     CMPS r0, r2, 0x0
		   0x010F235C:  0100001A     BNE $+0xc  // if (!=) goto 0x010F2368
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F2360:  0100A0E1     MOV r0, r1
		   0x010F2364:  CAA3F9EB     BL $-0x1970d0
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F2368:  0400A0E1     MOV r0, r4
		   0x010F236C:  FE15A0E3     MOV r1, 0x3f800000
		   0x010F2370:  0020A0E3     MOV r2, 0x0
		   0x010F2374:  BAB103EB     BL $+0xec6f0  // CALL → SoundController.PlaySound
		   0x010F2378:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010F237C:  000054E3     CMPS r0, r4, 0x0
		   0x010F2380:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2388
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F2384:  11A4F9EB     BL $-0x196fb4
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F2388:  104094E5     LDR r4, [r4, 0x10]
		   0x010F238C:  000054E3     CMPS r0, r4, 0x0
		   0x010F2390:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2398
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F2394:  0DA4F9EB     BL $-0x196fc4
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F2398:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F239C:  000054E3     CMPS r0, r4, 0x0
		   0x010F23A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F23A8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F23A4:  09A4F9EB     BL $-0x196fd4
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F23A8:  4C4094E5     LDR r4, [r4, 0x4c]
		   0x010F23AC:  000054E3     CMPS r0, r4, 0x0
		   0x010F23B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F23B8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x010F23B4:  05A4F9EB     BL $-0x196fe4
		   // ──── Block 14 if (!=) ────────────────────
		   0x010F23B8:  0C2094E5     LDR r2, [r4, 0xc]
		   0x010F23BC:  141094E5     LDR r1, [r4, 0x14]
		   0x010F23C0:  200094E5     LDR r0, [r4, 0x20]
		   0x010F23C4:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x010F23C8:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010F23CC:  000054E3     CMPS r0, r4, 0x0
		   0x010F23D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F23D8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x010F23D4:  FDA3F9EB     BL $-0x197004
		   // ──── Block 16 if (!=) ────────────────────
		   0x010F23D8:  105094E5     LDR r5, [r4, 0x10]
		   0x010F23DC:  000055E3     CMPS r0, r5, 0x0
		   0x010F23E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F23E8
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x010F23E4:  F9A3F9EB     BL $-0x197014
		   // ──── Block 18 if (!=) ────────────────────
		   0x010F23E8:  0C7095E5     LDR r7, [r5, 0xc]
		   0x010F23EC:  084096E5     LDR r4, [r6, 0x8]
		   0x010F23F0:  000057E3     CMPS r0, r7, 0x0
		   0x010F23F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F23FC
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x010F23F8:  F4A3F9EB     BL $-0x197028
		   // ──── Block 20 if (!=) ────────────────────
		   0x010F23FC:  0000A0E3     MOV r0, 0x0
		   0x010F2400:  0410A0E1     MOV r1, r4
		   0x010F2404:  00008DE5     STR r0, [sp]
		   0x010F2408:  0020A0E3     MOV r2, 0x0
		   0x010F240C:  04008DE5     STR r0, [sp, 0x4]
		   0x010F2410:  0030A0E3     MOV r3, 0x0
		   0x010F2414:  08008DE5     STR r0, [sp, 0x8]
		   0x010F2418:  0C008DE5     STR r0, [sp, 0xc]
		   0x010F241C:  0700A0E1     MOV r0, r7
		   0x010F2420:  38BBFFEB     BL $-0x11318
		   0x010F2424:  000059E3     CMPS r0, sb, 0x0
		   0x010F2428:  5100000A     BEQ $+0x14c  // if (==) goto 0x010F2574
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x010F242C:  0C4096E5     LDR r4, [r6, 0xc]
		   0x010F2430:  000054E3     CMPS r0, r4, 0x0
		   0x010F2434:  0000001A     BNE $+0x8  // if (!=) goto 0x010F243C
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x010F2438:  E4A3F9EB     BL $-0x197068
		   // ──── Block 23 if (!=) ────────────────────
		   0x010F243C:  104094E5     LDR r4, [r4, 0x10]
		   0x010F2440:  000054E3     CMPS r0, r4, 0x0
		   0x010F2444:  0000001A     BNE $+0x8  // if (!=) goto 0x010F244C
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x010F2448:  E0A3F9EB     BL $-0x197078
		   // ──── Block 25 if (!=) ────────────────────
		   0x010F244C:  0C5096E5     LDR r5, [r6, 0xc]
		   0x010F2450:  1C70D9E5     LDRB r7, [sb, 0x1c]
		   0x010F2454:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F2458:  000055E3     CMPS r0, r5, 0x0
		   0x010F245C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2464
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x010F2460:  DAA3F9EB     BL $-0x197090
		   // ──── Block 27 if (!=) ────────────────────
		   0x010F2464:  105095E5     LDR r5, [r5, 0x10]
		   0x010F2468:  000055E3     CMPS r0, r5, 0x0
		   0x010F246C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2474
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x010F2470:  D6A3F9EB     BL $-0x1970a0
		   // ──── Block 29 if (!=) ────────────────────
		   0x010F2474:  0C6096E5     LDR r6, [r6, 0xc]
		   0x010F2478:  10A095E5     LDR r10, [r5, 0x10]
		   0x010F247C:  000056E3     CMPS r0, r6, 0x0
		   0x010F2480:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2488
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x010F2484:  D1A3F9EB     BL $-0x1970b4
		   // ──── Block 31 if (!=) ────────────────────
		   0x010F2488:  105096E5     LDR r5, [r6, 0x10]
		   0x010F248C:  000055E3     CMPS r0, r5, 0x0
		   0x010F2490:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2498
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x010F2494:  CDA3F9EB     BL $-0x1970c4
		   // ──── Block 33 if (!=) ────────────────────
		   0x010F2498:  085095E5     LDR r5, [r5, 0x8]
		   0x010F249C:  000055E3     CMPS r0, r5, 0x0
		   0x010F24A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F24A8
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x010F24A4:  C9A3F9EB     BL $-0x1970d4
		   // ──── Block 35 if (!=) ────────────────────
		   0x010F24A8:  106095E5     LDR r6, [r5, 0x10]
		   0x010F24AC:  000056E3     CMPS r0, r6, 0x0
		   0x010F24B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F24B8
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x010F24B4:  C5A3F9EB     BL $-0x1970e4
		   // ──── Block 37 if (!=) ────────────────────
		   0x010F24B8:  0600A0E1     MOV r0, r6
		   0x010F24BC:  0010A0E3     MOV r1, 0x0
		   0x010F24C0:  0050A0E3     MOV r5, 0x0
		   0x010F24C4:  78163CEB     BL $+0xf059e8  // CALL → sub_1FF7EAC
		   0x010F24C8:  0060A0E1     MOV r6, r0
		   0x010F24CC:  000050E3     CMPS r0, r0, 0x0
		   0x010F24D0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F24D8
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x010F24D4:  BDA3F9EB     BL $-0x197104
		   // ──── Block 39 if (!=) ────────────────────
		   0x010F24D8:  30008DE2     ADD r0, sp, 0x30
		   0x010F24DC:  0610A0E1     MOV r1, r6
		   0x010F24E0:  0020A0E3     MOV r2, 0x0
		   0x010F24E4:  2E173CEB     BL $+0xf05cc0  // CALL → sub_1FF81A4
		   0x010F24E8:  30109DE5     LDR r1, [sp, 0x30]
		   0x010F24EC:  34209DE5     LDR r2, [sp, 0x34]
		   0x010F24F0:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010F24F4:  00009FE7     LDR r0, [pc, r0]
		   0x010F24F8:  34508DE5     STR r5, [sp, 0x34]
		   0x010F24FC:  30508DE5     STR r5, [sp, 0x30]
		   0x010F2500:  003090E5     LDR r3, [r0]
		   0x010F2504:  30008DE2     ADD r0, sp, 0x30
		   0x010F2508:  38508DE5     STR r5, [sp, 0x38]
		   0x010F250C:  B72031EB     BL $+0xc482e4  // CALL → Nullable<Vector2>..ctor
		   0x010F2510:  000054E3     CMPS r0, r4, 0x0
		   0x010F2514:  0000001A     BNE $+0x8  // if (!=) goto 0x010F251C
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x010F2518:  ACA3F9EB     BL $-0x197148
		   // ──── Block 41 if (!=) ────────────────────
		   0x010F251C:  30208DE2     ADD r2, sp, 0x30
		   0x010F2520:  000057E3     CMPS r0, r7, 0x0
		   0x010F2524:  0030A0E3     MOV r3, 0x0
		   0x010F2528:  08C08DE2     ADD ip, sp, 0x8
		   0x010F252C:  070092E8     LDM r2, {r0, r1, r2}
		   0x010F2530:  01700013     MOVNE r7, 0x1
		   0x010F2534:  0060E0E3     MVN r6, r0, 0x0
		   0x010F2538:  0150A0E3     MOV r5, 0x1
		   0x010F253C:  20308DE5     STR r3, [sp, 0x20]
		   0x010F2540:  67008CE8     STM ip, {r0, r1, r2, r5, r6}
		   0x010F2544:  0400A0E1     MOV r0, r4
		   0x010F2548:  0910A0E1     MOV r1, sb
		   0x010F254C:  28308DE5     STR r3, [sp, 0x28]
		   0x010F2550:  0720A0E1     MOV r2, r7
		   0x010F2554:  2C308DE5     STR r3, [sp, 0x2c]
		   0x010F2558:  1C308DE5     STR r3, [sp, 0x1c]
		   0x010F255C:  0830A0E1     MOV r3, r8
		   0x010F2560:  24608DE5     STR r6, [sp, 0x24]
		   0x010F2564:  20048DE8     STM sp, {r5, r10}
		   0x010F2568:  6698FFEB     BL $-0x19e60
		   0x010F256C:  40D08DE2     ADD sp, sp, 0x40
		   0x010F2570:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   // ──── Block 42 if (==) ────────────────────
		   0x010F2574:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x010F2578:  00009FE7     LDR r0, [pc, r0]
		   0x010F257C:  000090E5     LDR r0, [r0]
		   0x010F2580:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F2584:  004090E5     LDR r4, [r0]
		   0x010F2588:  000054E3     CMPS r0, r4, 0x0
		   0x010F258C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2594
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x010F2590:  8EA3F9EB     BL $-0x1971c0
		   // ──── Block 44 if (!=) ────────────────────
		   0x010F2594:  0400A0E1     MOV r0, r4
		   0x010F2598:  0010A0E3     MOV r1, 0x0
		   0x010F259C:  40D08DE2     ADD sp, sp, 0x40
		   0x010F25A0:  F047BDE8     POP {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F25A4:  58FC10EA     B $+0x43f168  // TAIL CALL → FTUERewardsBox.FieldCellFreed
		   0x010F25A8:  229A1303     TSTSEQ sb, r3, 0x22000
		   0x010F25AC:  F46BF802     RSCSEQ r6, r8, 0x3d000
		   0x010F25B0:  006CF802     RSCSEQ r6, r8, 0x0
		   0x010F25B4:  3C64F802     RSCSEQ r6, r8, 0x3c000000
		   0x010F25B8:  3464F802     RSCSEQ r6, r8, 0x34000000
		   0x010F25BC:  2064F802     RSCSEQ r6, r8, 0x20000000
		   0x010F25C0:  FC63F802     RSCSEQ r6, r8, 0xf0000003
		   0x010F25C4:  046AF802     RSCSEQ r6, r8, 0x4000
		   0x010F25C8:  6869F802     RSCSEQ r6, r8, 0x1a0000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass98_0 // TypeDefIndex: 1201
{

	// Fields
	public ItemData itemData; // 0x8

	// Methods

	// RVA: 0x10F25CC Offset: 0x10F25CC VA: 0x10F25CC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F25CC:  0010A0E3     MOV r1, 0x0
		   0x010F25D0:  858B7EEA     B $+0x1fa2e1c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F25D4 Offset: 0x10F25D4 VA: 0x10F25D4
	internal bool <ItIsHighestLevelContainerOrPart>b__1(ItemDataSave item) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F25D4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F25D8:  0140A0E1     MOV r4, r1
		   0x010F25DC:  0050A0E1     MOV r5, r0
		   0x010F25E0:  000051E3     CMPS r0, r1, 0x0
		   0x010F25E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F25EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F25E8:  78A3F9EB     BL $-0x197218
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F25EC:  086095E5     LDR r6, [r5, 0x8]
		   0x010F25F0:  247094E5     LDR r7, [r4, 0x24]
		   0x010F25F4:  000056E3     CMPS r0, r6, 0x0
		   0x010F25F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2600
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F25FC:  73A3F9EB     BL $-0x19722c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F2600:  086096E5     LDR r6, [r6, 0x8]
		   0x010F2604:  000056E3     CMPS r0, r6, 0x0
		   0x010F2608:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2610
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F260C:  6FA3F9EB     BL $-0x19723c
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F2610:  181096E5     LDR r1, [r6, 0x18]
		   0x010F2614:  0700A0E1     MOV r0, r7
		   0x010F2618:  0020A0E3     MOV r2, 0x0
		   0x010F261C:  0060A0E3     MOV r6, 0x0
		   0x010F2620:  FA5076EB     BL $+0x1d943f0  // CALL → String.op_Equality
		   0x010F2624:  000050E3     CMPS r0, r0, 0x0
		   0x010F2628:  0A00000A     BEQ $+0x30  // if (==) goto 0x010F2658
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010F262C:  085095E5     LDR r5, [r5, 0x8]
		   0x010F2630:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F2634:  000055E3     CMPS r0, r5, 0x0
		   0x010F2638:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2640
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F263C:  63A3F9EB     BL $-0x19726c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F2640:  0500A0E1     MOV r0, r5
		   0x010F2644:  0010A0E3     MOV r1, 0x0
		   0x010F2648:  0060A0E3     MOV r6, 0x0
		   0x010F264C:  E55D00EB     BL $+0x1779c  // CALL → ItemData.get_Order
		   0x010F2650:  000054E1     CMPS r0, r4, r0
		   0x010F2654:  016000C3     MOVGT r6, 0x1
		   // ──── Block 10 if (==) ────────────────────
		   0x010F2658:  0600A0E1     MOV r0, r6
		   0x010F265C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x10F2660 Offset: 0x10F2660 VA: 0x10F2660
	internal bool <ItIsHighestLevelContainerOrPart>b__2(ItemDataSave item) {
		/* Disassembly (ARM32, 46 instructions, 0xB8 bytes):
		   // CFG: 13 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2660:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F2664:  0140A0E1     MOV r4, r1
		   0x010F2668:  0050A0E1     MOV r5, r0
		   0x010F266C:  000051E3     CMPS r0, r1, 0x0
		   0x010F2670:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2678
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2674:  55A3F9EB     BL $-0x1972a4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2678:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010F267C:  0060A0E3     MOV r6, 0x0
		   0x010F2680:  080050E3     CMPS r0, r0, 0x8
		   0x010F2684:  01005013     CMPSNE r0, r0, 0x1
		   0x010F2688:  0400001A     BNE $+0x18  // if (!=) goto 0x010F26A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F268C:  1000D4E5     LDRB r0, [r4, 0x10]
		   0x010F2690:  000050E3     CMPS r0, r0, 0x0
		   0x010F2694:  1800D405     LDRBEQ r0, [r4, 0x18]
		   0x010F2698:  00005003     CMPSEQ r0, r0, 0x0
		   0x010F269C:  0100000A     BEQ $+0xc  // if (==) goto 0x010F26A8
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x010F26A0:  0600A0E1     MOV r0, r6
		   0x010F26A4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 5 if (==) ────────────────────
		   0x010F26A8:  086095E5     LDR r6, [r5, 0x8]
		   0x010F26AC:  247094E5     LDR r7, [r4, 0x24]
		   0x010F26B0:  000056E3     CMPS r0, r6, 0x0
		   0x010F26B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F26BC
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F26B8:  44A3F9EB     BL $-0x1972e8
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F26BC:  086096E5     LDR r6, [r6, 0x8]
		   0x010F26C0:  000056E3     CMPS r0, r6, 0x0
		   0x010F26C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F26CC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F26C8:  40A3F9EB     BL $-0x1972f8
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F26CC:  181096E5     LDR r1, [r6, 0x18]
		   0x010F26D0:  0700A0E1     MOV r0, r7
		   0x010F26D4:  0020A0E3     MOV r2, 0x0
		   0x010F26D8:  0060A0E3     MOV r6, 0x0
		   0x010F26DC:  CB5076EB     BL $+0x1d94334  // CALL → String.op_Equality
		   0x010F26E0:  000050E3     CMPS r0, r0, 0x0
		   0x010F26E4:  EDFFFF0A     BEQ $-0x44
		   // ──── Block 10 else (!=) ────────────────────
		   0x010F26E8:  085095E5     LDR r5, [r5, 0x8]
		   0x010F26EC:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F26F0:  000055E3     CMPS r0, r5, 0x0
		   0x010F26F4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F26FC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F26F8:  34A3F9EB     BL $-0x197328
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F26FC:  0500A0E1     MOV r0, r5
		   0x010F2700:  0010A0E3     MOV r1, 0x0
		   0x010F2704:  0060A0E3     MOV r6, 0x0
		   0x010F2708:  B65D00EB     BL $+0x176e0  // CALL → ItemData.get_Order
		   0x010F270C:  000054E1     CMPS r0, r4, r0
		   0x010F2710:  016000C3     MOVGT r6, 0x1
		   0x010F2714:  E1FFFFEA     B $-0x74
		*/
	}

	// RVA: 0x10F2718 Offset: 0x10F2718 VA: 0x10F2718
	internal bool <ItIsHighestLevelContainerOrPart>b__3(ItemDataSave item) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F2718:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F271C:  0140A0E1     MOV r4, r1
		   0x010F2720:  0050A0E1     MOV r5, r0
		   0x010F2724:  000051E3     CMPS r0, r1, 0x0
		   0x010F2728:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2730
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F272C:  27A3F9EB     BL $-0x19735c
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2730:  087095E5     LDR r7, [r5, 0x8]
		   0x010F2734:  246094E5     LDR r6, [r4, 0x24]
		   0x010F2738:  000057E3     CMPS r0, r7, 0x0
		   0x010F273C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2744
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2740:  22A3F9EB     BL $-0x197370
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F2744:  087097E5     LDR r7, [r7, 0x8]
		   0x010F2748:  000057E3     CMPS r0, r7, 0x0
		   0x010F274C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2754
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F2750:  1EA3F9EB     BL $-0x197380
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F2754:  181097E5     LDR r1, [r7, 0x18]
		   0x010F2758:  0600A0E1     MOV r0, r6
		   0x010F275C:  0020A0E3     MOV r2, 0x0
		   0x010F2760:  0070A0E3     MOV r7, 0x0
		   0x010F2764:  A95076EB     BL $+0x1d942ac  // CALL → String.op_Equality
		   0x010F2768:  000050E3     CMPS r0, r0, 0x0
		   0x010F276C:  0A00000A     BEQ $+0x30  // if (==) goto 0x010F279C
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010F2770:  085095E5     LDR r5, [r5, 0x8]
		   0x010F2774:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F2778:  000055E3     CMPS r0, r5, 0x0
		   0x010F277C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2784
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F2780:  12A3F9EB     BL $-0x1973b0
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F2784:  0500A0E1     MOV r0, r5
		   0x010F2788:  0010A0E3     MOV r1, 0x0
		   0x010F278C:  955D00EB     BL $+0x1765c  // CALL → ItemData.get_Order
		   0x010F2790:  000044E0     SUB r0, r4, r0
		   0x010F2794:  100F6FE1     CLZ r0, r0
		   0x010F2798:  A072A0E1     MOV r7, r0, r0, lsr 5
		   // ──── Block 10 if (==) ────────────────────
		   0x010F279C:  0700A0E1     MOV r0, r7
		   0x010F27A0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x10F27A4 Offset: 0x10F27A4 VA: 0x10F27A4
	internal bool <ItIsHighestLevelContainerOrPart>b__4(ItemDataSave item) {
		/* Disassembly (ARM32, 46 instructions, 0xB8 bytes):
		   // CFG: 13 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F27A4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F27A8:  0140A0E1     MOV r4, r1
		   0x010F27AC:  0050A0E1     MOV r5, r0
		   0x010F27B0:  000051E3     CMPS r0, r1, 0x0
		   0x010F27B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F27BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F27B8:  04A3F9EB     BL $-0x1973e8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F27BC:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010F27C0:  0060A0E3     MOV r6, 0x0
		   0x010F27C4:  080050E3     CMPS r0, r0, 0x8
		   0x010F27C8:  01005013     CMPSNE r0, r0, 0x1
		   0x010F27CC:  0400001A     BNE $+0x18  // if (!=) goto 0x010F27E4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F27D0:  1000D4E5     LDRB r0, [r4, 0x10]
		   0x010F27D4:  000050E3     CMPS r0, r0, 0x0
		   0x010F27D8:  1800D405     LDRBEQ r0, [r4, 0x18]
		   0x010F27DC:  00005003     CMPSEQ r0, r0, 0x0
		   0x010F27E0:  0100000A     BEQ $+0xc  // if (==) goto 0x010F27EC
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x010F27E4:  0600A0E1     MOV r0, r6
		   0x010F27E8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 5 if (==) ────────────────────
		   0x010F27EC:  086095E5     LDR r6, [r5, 0x8]
		   0x010F27F0:  247094E5     LDR r7, [r4, 0x24]
		   0x010F27F4:  000056E3     CMPS r0, r6, 0x0
		   0x010F27F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2800
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F27FC:  F3A2F9EB     BL $-0x19742c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F2800:  086096E5     LDR r6, [r6, 0x8]
		   0x010F2804:  000056E3     CMPS r0, r6, 0x0
		   0x010F2808:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2810
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F280C:  EFA2F9EB     BL $-0x19743c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F2810:  181096E5     LDR r1, [r6, 0x18]
		   0x010F2814:  0700A0E1     MOV r0, r7
		   0x010F2818:  0020A0E3     MOV r2, 0x0
		   0x010F281C:  0060A0E3     MOV r6, 0x0
		   0x010F2820:  7A5076EB     BL $+0x1d941f0  // CALL → String.op_Equality
		   0x010F2824:  000050E3     CMPS r0, r0, 0x0
		   0x010F2828:  EDFFFF0A     BEQ $-0x44
		   // ──── Block 10 else (!=) ────────────────────
		   0x010F282C:  085095E5     LDR r5, [r5, 0x8]
		   0x010F2830:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F2834:  000055E3     CMPS r0, r5, 0x0
		   0x010F2838:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2840
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F283C:  E3A2F9EB     BL $-0x19746c
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F2840:  0500A0E1     MOV r0, r5
		   0x010F2844:  0010A0E3     MOV r1, 0x0
		   0x010F2848:  665D00EB     BL $+0x175a0  // CALL → ItemData.get_Order
		   0x010F284C:  000044E0     SUB r0, r4, r0
		   0x010F2850:  100F6FE1     CLZ r0, r0
		   0x010F2854:  A062A0E1     MOV r6, r0, r0, lsr 5
		   0x010F2858:  E1FFFFEA     B $-0x74
		*/
	}

	// RVA: 0x10F285C Offset: 0x10F285C VA: 0x10F285C
	internal bool <ItIsHighestLevelContainerOrPart>b__5(ItemDataSave item) {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F285C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F2860:  0140A0E1     MOV r4, r1
		   0x010F2864:  0050A0E1     MOV r5, r0
		   0x010F2868:  000051E3     CMPS r0, r1, 0x0
		   0x010F286C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2874
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F2870:  D6A2F9EB     BL $-0x1974a0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F2874:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010F2878:  080050E3     CMPS r0, r0, 0x8
		   0x010F287C:  01005013     CMPSNE r0, r0, 0x1
		   0x010F2880:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010F28BC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F2884:  085095E5     LDR r5, [r5, 0x8]
		   0x010F2888:  244094E5     LDR r4, [r4, 0x24]
		   0x010F288C:  000055E3     CMPS r0, r5, 0x0
		   0x010F2890:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2898
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F2894:  CDA2F9EB     BL $-0x1974c4
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F2898:  085095E5     LDR r5, [r5, 0x8]
		   0x010F289C:  000055E3     CMPS r0, r5, 0x0
		   0x010F28A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010F28A8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F28A4:  C9A2F9EB     BL $-0x1974d4
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F28A8:  181095E5     LDR r1, [r5, 0x18]
		   0x010F28AC:  0400A0E1     MOV r0, r4
		   0x010F28B0:  0020A0E3     MOV r2, 0x0
		   0x010F28B4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F28B8:  545076EA     B $+0x1d94158  // TAIL CALL → String.op_Equality
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F28BC:  0000A0E3     MOV r0, 0x0
		   0x010F28C0:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10F28C4 Offset: 0x10F28C4 VA: 0x10F28C4
	internal bool <ItIsHighestLevelContainerOrPart>b__6(ItemDataSave item) {
		/* Disassembly (ARM32, 46 instructions, 0xB8 bytes):
		   // CFG: 13 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F28C4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F28C8:  0140A0E1     MOV r4, r1
		   0x010F28CC:  0050A0E1     MOV r5, r0
		   0x010F28D0:  000051E3     CMPS r0, r1, 0x0
		   0x010F28D4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F28DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F28D8:  BCA2F9EB     BL $-0x197508
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F28DC:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x010F28E0:  0060A0E3     MOV r6, 0x0
		   0x010F28E4:  080050E3     CMPS r0, r0, 0x8
		   0x010F28E8:  01005013     CMPSNE r0, r0, 0x1
		   0x010F28EC:  0400001A     BNE $+0x18  // if (!=) goto 0x010F2904
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F28F0:  1800D4E5     LDRB r0, [r4, 0x18]
		   0x010F28F4:  000050E3     CMPS r0, r0, 0x0
		   0x010F28F8:  1000D405     LDRBEQ r0, [r4, 0x10]
		   0x010F28FC:  00005003     CMPSEQ r0, r0, 0x0
		   0x010F2900:  0100000A     BEQ $+0xc  // if (==) goto 0x010F290C
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x010F2904:  0600A0E1     MOV r0, r6
		   0x010F2908:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 5 if (==) ────────────────────
		   0x010F290C:  086095E5     LDR r6, [r5, 0x8]
		   0x010F2910:  247094E5     LDR r7, [r4, 0x24]
		   0x010F2914:  000056E3     CMPS r0, r6, 0x0
		   0x010F2918:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2920
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F291C:  ABA2F9EB     BL $-0x19754c
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F2920:  086096E5     LDR r6, [r6, 0x8]
		   0x010F2924:  000056E3     CMPS r0, r6, 0x0
		   0x010F2928:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2930
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x010F292C:  A7A2F9EB     BL $-0x19755c
		   // ──── Block 9 if (!=) ────────────────────
		   0x010F2930:  181096E5     LDR r1, [r6, 0x18]
		   0x010F2934:  0700A0E1     MOV r0, r7
		   0x010F2938:  0020A0E3     MOV r2, 0x0
		   0x010F293C:  0060A0E3     MOV r6, 0x0
		   0x010F2940:  325076EB     BL $+0x1d940d0  // CALL → String.op_Equality
		   0x010F2944:  000050E3     CMPS r0, r0, 0x0
		   0x010F2948:  EDFFFF0A     BEQ $-0x44
		   // ──── Block 10 else (!=) ────────────────────
		   0x010F294C:  085095E5     LDR r5, [r5, 0x8]
		   0x010F2950:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010F2954:  000055E3     CMPS r0, r5, 0x0
		   0x010F2958:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2960
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x010F295C:  9BA2F9EB     BL $-0x19758c
		   // ──── Block 12 if (!=) ────────────────────
		   0x010F2960:  0500A0E1     MOV r0, r5
		   0x010F2964:  0010A0E3     MOV r1, 0x0
		   0x010F2968:  0060A0E3     MOV r6, 0x0
		   0x010F296C:  1D5D00EB     BL $+0x1747c  // CALL → ItemData.get_Order
		   0x010F2970:  000054E1     CMPS r0, r4, r0
		   0x010F2974:  016000C3     MOVGT r6, 0x1
		   0x010F2978:  E1FFFFEA     B $-0x74
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <WaitForSendAppStart>d__155 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1202
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x10F297C Offset: 0x10F297C VA: 0x10F297C
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F297C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F2980:  0140A0E1     MOV r4, r1
		   0x010F2984:  0010A0E3     MOV r1, 0x0
		   0x010F2988:  0050A0E1     MOV r5, r0
		   0x010F298C:  968A7EEB     BL $+0x1fa2a60  // CALL → Object..ctor
		   0x010F2990:  084085E5     STR r4, [r5, 0x8]
		   0x010F2994:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10F2998 Offset: 0x10F2998 VA: 0x10F2998 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F2998:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10F299C Offset: 0x10F299C VA: 0x10F299C Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F299C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F29A0:  7C509FE5     LDR r5, [pc, 0x7c]
		   0x010F29A4:  0040A0E1     MOV r4, r0
		   0x010F29A8:  05508FE0     ADD r5, pc, r5
		   0x010F29AC:  0000D5E5     LDRB r0, [r5]
		   0x010F29B0:  000050E3     CMPS r0, r0, 0x0
		   0x010F29B4:  0400001A     BNE $+0x18  // if (!=) goto 0x010F29CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F29B8:  68009FE5     LDR r0, [pc, 0x68]
		   0x010F29BC:  00009FE7     LDR r0, [pc, r0]
		   0x010F29C0:  E6A1F9EB     BL $-0x197860
		   0x010F29C4:  0100A0E3     MOV r0, 0x1
		   0x010F29C8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F29CC:  080094E5     LDR r0, [r4, 0x8]
		   0x010F29D0:  0060A0E3     MOV r6, 0x0
		   0x010F29D4:  020050E3     CMPS r0, r0, 0x2
		   0x010F29D8:  0F00002A     BHS $+0x44  // if (>= (unsigned)) goto 0x010F2A1C
		   // 
		   // ──── Block 3 else (< (unsigned)) ────────────────────
		   0x010F29DC:  48009FE5     LDR r0, [pc, 0x48]
		   0x010F29E0:  0010E0E3     MVN r1, r0, 0x0
		   0x010F29E4:  00009FE7     LDR r0, [pc, r0]
		   0x010F29E8:  081084E5     STR r1, [r4, 0x8]
		   0x010F29EC:  000090E5     LDR r0, [r0]
		   0x010F29F0:  742090E5     LDR r2, [r0, 0x74]
		   0x010F29F4:  000052E3     CMPS r0, r2, 0x0
		   0x010F29F8:  0000001A     BNE $+0x8  // if (!=) goto 0x010F2A00
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F29FC:  24A2F9EB     BL $-0x197768
		   // ──── Block 5 if (!=) ────────────────────
		   0x010F2A00:  0000A0E3     MOV r0, 0x0
		   0x010F2A04:  0060A0E3     MOV r6, 0x0
		   0x010F2A08:  690BFEEB     BL $-0x7d254
		   0x010F2A0C:  000050E3     CMPS r0, r0, 0x0
		   0x010F2A10:  0160A003     MOVEQ r6, 0x1
		   0x010F2A14:  0070A003     MOVEQ r7, 0x0
		   0x010F2A18:  F860C401     STRDEQ r6, r7, [r4, 0x8]
		   // ──── Block 6 if (>= (unsigned)) ────────────────────
		   0x010F2A1C:  0600A0E1     MOV r0, r6
		   0x010F2A20:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010F2A24:  53931303     TSTSEQ sb, r3, 0x4c000001
		   0x010F2A28:  D44DF802     RSCSEQ r4, r8, 0x3500
		   0x010F2A2C:  AC4DF802     RSCSEQ r4, r8, 0x2b00
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10F2A30 Offset: 0x10F2A30 VA: 0x10F2A30 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F2A30:  0C0090E5     LDR r0, [r0, 0xc]
		   0x010F2A34:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10F2A38 Offset: 0x10F2A38 VA: 0x10F2A38 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F2A38:  10402DE9     PUSH {r4, lr}
		   0x010F2A3C:  30009FE5     LDR r0, [pc, 0x30]
		   0x010F2A40:  00009FE7     LDR r0, [pc, r0]
		   0x010F2A44:  C9A1F9EB     BL $-0x1978d4
		   0x010F2A48:  5DA2F9EB     BL $-0x197684
		   0x010F2A4C:  0010A0E3     MOV r1, 0x0
		   0x010F2A50:  0040A0E1     MOV r4, r0
		   0x010F2A54:  26607DEB     BL $+0x1f580a0  // CALL → NotSupportedException..ctor
		   0x010F2A58:  18009FE5     LDR r0, [pc, 0x18]
		   0x010F2A5C:  00009FE7     LDR r0, [pc, r0]
		   0x010F2A60:  C2A1F9EB     BL $-0x1978f0
		   0x010F2A64:  0010A0E1     MOV r1, r0
		   0x010F2A68:  0400A0E1     MOV r0, r4
		   0x010F2A6C:  03A2F9EB     BL $-0x1977ec
		   0x010F2A70:  A4A1F9EB     BL $-0x197968
		   0x010F2A74:  9C40F802     RSCSEQ r4, r8, 0x9c
		   0x010F2A78:  9C6AF802     RSCSEQ r6, r8, 0x9c000
		*/
	}

	[DebuggerHidden]
	// RVA: 0x10F2A7C Offset: 0x10F2A7C VA: 0x10F2A7C Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F2A7C:  0C0090E5     LDR r0, [r0, 0xc]
		   0x010F2A80:  1EFF2FE1     BX lr
		*/
	}
}
