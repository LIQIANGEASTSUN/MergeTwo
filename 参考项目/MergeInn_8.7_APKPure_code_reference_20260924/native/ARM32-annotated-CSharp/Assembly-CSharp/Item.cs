// Dll : Assembly-CSharp.dll
// Namespace: 
[RequireComponent]
public abstract class Item : MonoBehaviour // TypeDefIndex: 1295
{

	// Fields
	private const float MERGE_X_SCALE = 1.2;
	private const float MERGE_X_Move = 0.2;
	private const float MERGE_16_9_SCALE = 1.1;
	private const float MERGE_16_9_Move = 0.1;
	private const float BACKGROUND_ANIMATION_REPEAT_TIME = 0.15;
	protected static float SWAP_TIME; // 0x0
	protected Cell cell; // 0x10
	[SerializeField]
	private CanvasGroup itemCanvasGroup; // 0x14
	[SerializeField]
	private Image bubble; // 0x18
	[SerializeField]
	protected Image lockSprite; // 0x1C
	[SerializeField]
	private Image goalsCheck; // 0x20
	[SerializeField]
	private Image maxLevelMark; // 0x24
	[SerializeField]
	protected Image mainIconImage; // 0x28
	[SerializeField]
	private Sprite lockSpriteAsset; // 0x2C
	public bool placing; // 0x30
	public bool selected; // 0x31
	public bool isFtue; // 0x32
	[CompilerGenerated]
	private int <id>k__BackingField; // 0x34
	[CompilerGenerated]
	private bool <isLocked>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <goalsChecked>k__BackingField; // 0x39
	[CompilerGenerated]
	private int <bubbleTimer>k__BackingField; // 0x3C
	[CompilerGenerated]
	private bool <isMaxLevel>k__BackingField; // 0x40
	[CompilerGenerated]
	private bool <isAlive>k__BackingField; // 0x41
	[CompilerGenerated]
	private Func<Vector2, Cell, Cell> <GetNearestFreeCell>k__BackingField; // 0x44
	[CompilerGenerated]
	private Func<Cell, Cell> <GeFreeCellAround>k__BackingField; // 0x48
	[CompilerGenerated]
	private bool <isInited>k__BackingField; // 0x4C
	[CompilerGenerated]
	private Action<int> onBubbleTimerUpdate; // 0x50
	[CompilerGenerated]
	private Action<Cell> onBubbleTimerEnd; // 0x54
	protected Tween selectTween; // 0x58
	private Tween spawnMoveX; // 0x5C
	protected Sequence suggestedTween; // 0x60
	protected float mergeScale; // 0x64
	protected float mergeMove; // 0x68
	private bool isPaused; // 0x6C
	private Coroutine bubbleTimerCoroutine; // 0x70
	private Sequence bubbleTween; // 0x74
	private RectTransform itemRectTransform; // 0x78
	private string itemCode; // 0x7C
	private UISpriteAnimation backgroundAnimation; // 0x80
	[CompilerGenerated]
	private ItemData <itemData>k__BackingField; // 0x84

	// Properties
	public int id { get; set; }
	public bool interactable { get; }
	public bool isLocked { get; set; }
	public bool goalsChecked { get; set; }
	public bool isItBubble { get; }
	public int bubbleTimer { get; set; }
	public bool isMaxLevel { get; set; }
	public bool isAlive { get; set; }
	public bool maxLevelMarkEnabled { get; }
	public Vector2Int coordinates { get; }
	public Func<Vector2, Cell, Cell> GetNearestFreeCell { get; set; }
	public Func<Cell, Cell> GeFreeCellAround { get; set; }
	public virtual bool isInited { get; set; }
	public Cell Cell { get; }
	public ItemData activeData { get; }
	protected RectTransform mainIconRectTransform { get; }
	public ItemData itemData { get; set; }
	public bool selectable { get; }
	public string chainName { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x110946C Offset: 0x110946C VA: 0x110946C
	public int get_id() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110946C:  340090E5     LDR r0, [r0, 0x34]
		   0x01109470:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109474 Offset: 0x1109474 VA: 0x1109474
	protected void set_id(int value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109474:  341080E5     STR r1, [r0, 0x34]
		   0x01109478:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110947C Offset: 0x110947C VA: 0x110947C
	public bool get_interactable() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110947C:  3820D0E5     LDRB r2, [r0, 0x38]
		   0x01109480:  0010A0E1     MOV r1, r0
		   0x01109484:  0000A0E3     MOV r0, 0x0
		   0x01109488:  000052E3     CMPS r0, r2, 0x0
		   0x0110948C:  1EFF2F11     BXNE lr
		   0x01109490:  10402DE9     PUSH {r4, lr}
		   0x01109494:  844091E5     LDR r4, [r1, 0x84]
		   0x01109498:  000054E3     CMPS r0, r4, 0x0
		   0x0110949C:  0000001A     BNE $+0x8  // if (!=) goto 0x011094A4
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x011094A0:  CA47F9EB     BL $-0x1ae0d0
		   // ──── Block 3 if (!=) ────────────────────
		   0x011094A4:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x011094A8:  050050E2     SUBS r0, r0, 0x5
		   0x011094AC:  01000013     MOVNE r0, 0x1
		   0x011094B0:  1040BDE8     POP {r4, lr}
		   0x011094B4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11094B8 Offset: 0x11094B8 VA: 0x11094B8
	public bool get_isLocked() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011094B8:  3800D0E5     LDRB r0, [r0, 0x38]
		   0x011094BC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11094C0 Offset: 0x11094C0 VA: 0x11094C0
	private void set_isLocked(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011094C0:  3810C0E5     STRB r1, [r0, 0x38]
		   0x011094C4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11094C8 Offset: 0x11094C8 VA: 0x11094C8
	public bool get_goalsChecked() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011094C8:  3900D0E5     LDRB r0, [r0, 0x39]
		   0x011094CC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11094D0 Offset: 0x11094D0 VA: 0x11094D0
	internal void set_goalsChecked(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011094D0:  3910C0E5     STRB r1, [r0, 0x39]
		   0x011094D4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11094D8 Offset: 0x11094D8 VA: 0x11094D8
	public bool get_isItBubble() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011094D8:  10402DE9     PUSH {r4, lr}
		   0x011094DC:  844090E5     LDR r4, [r0, 0x84]
		   0x011094E0:  000054E3     CMPS r0, r4, 0x0
		   0x011094E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011094EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011094E8:  B847F9EB     BL $-0x1ae118
		   // ──── Block 2 if (!=) ────────────────────
		   0x011094EC:  7400D4E5     LDRB r0, [r4, 0x74]
		   0x011094F0:  1080BDE8     POP {r4, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11094F4 Offset: 0x11094F4 VA: 0x11094F4
	public int get_bubbleTimer() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011094F4:  3C0090E5     LDR r0, [r0, 0x3c]
		   0x011094F8:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11094FC Offset: 0x11094FC VA: 0x11094FC
	private void set_bubbleTimer(int value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011094FC:  3C1080E5     STR r1, [r0, 0x3c]
		   0x01109500:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109504 Offset: 0x1109504 VA: 0x1109504
	public bool get_isMaxLevel() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109504:  4000D0E5     LDRB r0, [r0, 0x40]
		   0x01109508:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110950C Offset: 0x110950C VA: 0x110950C
	private void set_isMaxLevel(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110950C:  4010C0E5     STRB r1, [r0, 0x40]
		   0x01109510:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109514 Offset: 0x1109514 VA: 0x1109514
	public bool get_isAlive() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109514:  4100D0E5     LDRB r0, [r0, 0x41]
		   0x01109518:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110951C Offset: 0x110951C VA: 0x110951C
	protected void set_isAlive(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110951C:  4110C0E5     STRB r1, [r0, 0x41]
		   0x01109520:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1109524 Offset: 0x1109524 VA: 0x1109524
	public bool get_maxLevelMarkEnabled() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109524:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01109528:  80509FE5     LDR r5, [pc, 0x80]
		   0x0110952C:  0040A0E1     MOV r4, r0
		   0x01109530:  05508FE0     ADD r5, pc, r5
		   0x01109534:  0000D5E5     LDRB r0, [r5]
		   0x01109538:  000050E3     CMPS r0, r0, 0x0
		   0x0110953C:  0400001A     BNE $+0x18  // if (!=) goto 0x01109554
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109540:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01109544:  00009FE7     LDR r0, [pc, r0]
		   0x01109548:  0447F9EB     BL $-0x1ae3e8
		   0x0110954C:  0100A0E3     MOV r0, 0x1
		   0x01109550:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109554:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01109558:  00009FE7     LDR r0, [pc, r0]
		   0x0110955C:  245094E5     LDR r5, [r4, 0x24]
		   0x01109560:  000090E5     LDR r0, [r0]
		   0x01109564:  741090E5     LDR r1, [r0, 0x74]
		   0x01109568:  000051E3     CMPS r0, r1, 0x0
		   0x0110956C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109574
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01109570:  4747F9EB     BL $-0x1ae2dc
		   // ──── Block 4 if (!=) ────────────────────
		   0x01109574:  0500A0E1     MOV r0, r5
		   0x01109578:  0010A0E3     MOV r1, 0x0
		   0x0110957C:  1EBB3BEB     BL $+0xeeec80  // CALL → sub_1FF81FC
		   0x01109580:  000050E3     CMPS r0, r0, 0x0
		   0x01109584:  0700000A     BEQ $+0x24  // if (==) goto 0x011095A8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01109588:  244094E5     LDR r4, [r4, 0x24]
		   0x0110958C:  000054E3     CMPS r0, r4, 0x0
		   0x01109590:  0000001A     BNE $+0x8  // if (!=) goto 0x01109598
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01109594:  8D47F9EB     BL $-0x1ae1c4
		   // ──── Block 7 if (!=) ────────────────────
		   0x01109598:  0400A0E1     MOV r0, r4
		   0x0110959C:  0010A0E3     MOV r1, 0x0
		   0x011095A0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x011095A4:  8ABA3BEA     B $+0xeeea30
		   // ──── Block 8 if (==) ────────────────────
		   0x011095A8:  0000A0E3     MOV r0, 0x0
		   0x011095AC:  3088BDE8     POP {r4, r5, fp, pc}
		   0x011095B0:  AE281203     TSTSEQ r2, r2, 0xae0000
		   0x011095B4:  F4CFF602     RSCSEQ ip, r6, 0x3d0
		   0x011095B8:  E0CFF602     RSCSEQ ip, r6, 0x380
		*/
	}

	// RVA: 0x11095BC Offset: 0x11095BC VA: 0x11095BC
	public Vector2Int get_coordinates() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011095BC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011095C0:  105091E5     LDR r5, [r1, 0x10]
		   0x011095C4:  0040A0E1     MOV r4, r0
		   0x011095C8:  000055E3     CMPS r0, r5, 0x0
		   0x011095CC:  0000001A     BNE $+0x8  // if (!=) goto 0x011095D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011095D0:  7E47F9EB     BL $-0x1ae200
		   // ──── Block 2 if (!=) ────────────────────
		   0x011095D4:  D401C5E1     LDRD r0, r1, [r5, 0x14]
		   0x011095D8:  F000C4E1     STRD r0, r1, [r4]
		   0x011095DC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11095E0 Offset: 0x11095E0 VA: 0x11095E0
	public Func<Vector2, Cell, Cell> get_GetNearestFreeCell() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011095E0:  440090E5     LDR r0, [r0, 0x44]
		   0x011095E4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11095E8 Offset: 0x11095E8 VA: 0x11095E8
	private void set_GetNearestFreeCell(Func<Vector2, Cell, Cell> value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011095E8:  441080E5     STR r1, [r0, 0x44]
		   0x011095EC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11095F0 Offset: 0x11095F0 VA: 0x11095F0
	public Func<Cell, Cell> get_GeFreeCellAround() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011095F0:  480090E5     LDR r0, [r0, 0x48]
		   0x011095F4:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11095F8 Offset: 0x11095F8 VA: 0x11095F8
	private void set_GeFreeCellAround(Func<Cell, Cell> value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011095F8:  481080E5     STR r1, [r0, 0x48]
		   0x011095FC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109600 Offset: 0x1109600 VA: 0x1109600 Slot: 4
	public virtual bool get_isInited() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109600:  4C00D0E5     LDRB r0, [r0, 0x4c]
		   0x01109604:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109608 Offset: 0x1109608 VA: 0x1109608 Slot: 5
	protected virtual void set_isInited(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109608:  4C10C0E5     STRB r1, [r0, 0x4c]
		   0x0110960C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109610 Offset: 0x1109610 VA: 0x1109610
	public void add_onBubbleTimerUpdate(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109610:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01109614:  98409FE5     LDR r4, [pc, 0x98]
		   0x01109618:  0090A0E1     MOV sb, r0
		   0x0110961C:  0180A0E1     MOV r8, r1
		   0x01109620:  04408FE0     ADD r4, pc, r4
		   0x01109624:  0000D4E5     LDRB r0, [r4]
		   0x01109628:  000050E3     CMPS r0, r0, 0x0
		   0x0110962C:  0400001A     BNE $+0x18  // if (!=) goto 0x01109644
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109630:  80009FE5     LDR r0, [pc, 0x80]
		   0x01109634:  00009FE7     LDR r0, [pc, r0]
		   0x01109638:  C846F9EB     BL $-0x1ae4d8
		   0x0110963C:  0100A0E3     MOV r0, 0x1
		   0x01109640:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109644:  5000B9E5     LDR r0, [sb, 0x50]!
		   0x01109648:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110964C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01109650:  0810A0E1     MOV r1, r8
		   0x01109654:  0020A0E3     MOV r2, 0x0
		   0x01109658:  0060A0E1     MOV r6, r0
		   0x0110965C:  0070A0E3     MOV r7, 0x0
		   0x01109660:  B43F7EEB     BL $+0x1f8fed8  // CALL → Delegate.Combine
		   0x01109664:  000050E3     CMPS r0, r0, 0x0
		   0x01109668:  0A00000A     BEQ $+0x30  // if (==) goto 0x01109698
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110966C:  00509AE5     LDR r5, [r10]
		   0x01109670:  0040A0E1     MOV r4, r0
		   0x01109674:  0510A0E1     MOV r1, r5
		   0x01109678:  0647F9EB     BL $-0x1ae3e0
		   0x0110967C:  0070A0E1     MOV r7, r0
		   0x01109680:  000050E3     CMPS r0, r0, 0x0
		   0x01109684:  0300001A     BNE $+0x14  // if (!=) goto 0x01109698
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109688:  0400A0E1     MOV r0, r4
		   0x0110968C:  0510A0E1     MOV r1, r5
		   0x01109690:  3C48F9EB     BL $-0x1adf08
		   0x01109694:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01109698:  0900A0E1     MOV r0, sb
		   0x0110969C:  0710A0E1     MOV r1, r7
		   0x011096A0:  0620A0E1     MOV r2, r6
		   0x011096A4:  7333FAEB     BL $-0x17322c
		   0x011096A8:  060050E1     CMPS r0, r0, r6
		   0x011096AC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x011096B0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x011096B4:  BF271203     TSTSEQ r2, r2, 0x2fc0000
		   0x011096B8:  B0E5F602     RSCSEQ lr, r6, 0x2c000000
		   0x011096BC:  98E5F602     RSCSEQ lr, r6, 0x26000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11096C0 Offset: 0x11096C0 VA: 0x11096C0
	public void remove_onBubbleTimerUpdate(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011096C0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x011096C4:  98409FE5     LDR r4, [pc, 0x98]
		   0x011096C8:  0090A0E1     MOV sb, r0
		   0x011096CC:  0180A0E1     MOV r8, r1
		   0x011096D0:  04408FE0     ADD r4, pc, r4
		   0x011096D4:  0000D4E5     LDRB r0, [r4]
		   0x011096D8:  000050E3     CMPS r0, r0, 0x0
		   0x011096DC:  0400001A     BNE $+0x18  // if (!=) goto 0x011096F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011096E0:  80009FE5     LDR r0, [pc, 0x80]
		   0x011096E4:  00009FE7     LDR r0, [pc, r0]
		   0x011096E8:  9C46F9EB     BL $-0x1ae588
		   0x011096EC:  0100A0E3     MOV r0, 0x1
		   0x011096F0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011096F4:  5000B9E5     LDR r0, [sb, 0x50]!
		   0x011096F8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x011096FC:  0AA09FE7     LDR r10, [pc, r10]
		   0x01109700:  0810A0E1     MOV r1, r8
		   0x01109704:  0020A0E3     MOV r2, 0x0
		   0x01109708:  0060A0E1     MOV r6, r0
		   0x0110970C:  0070A0E3     MOV r7, 0x0
		   0x01109710:  06407EEB     BL $+0x1f90020  // CALL → Delegate.Remove
		   0x01109714:  000050E3     CMPS r0, r0, 0x0
		   0x01109718:  0A00000A     BEQ $+0x30  // if (==) goto 0x01109748
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110971C:  00509AE5     LDR r5, [r10]
		   0x01109720:  0040A0E1     MOV r4, r0
		   0x01109724:  0510A0E1     MOV r1, r5
		   0x01109728:  DA46F9EB     BL $-0x1ae490
		   0x0110972C:  0070A0E1     MOV r7, r0
		   0x01109730:  000050E3     CMPS r0, r0, 0x0
		   0x01109734:  0300001A     BNE $+0x14  // if (!=) goto 0x01109748
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109738:  0400A0E1     MOV r0, r4
		   0x0110973C:  0510A0E1     MOV r1, r5
		   0x01109740:  1048F9EB     BL $-0x1adfb8
		   0x01109744:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01109748:  0900A0E1     MOV r0, sb
		   0x0110974C:  0710A0E1     MOV r1, r7
		   0x01109750:  0620A0E1     MOV r2, r6
		   0x01109754:  4733FAEB     BL $-0x1732dc
		   0x01109758:  060050E1     CMPS r0, r0, r6
		   0x0110975C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01109760:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01109764:  10271203     TSTSEQ r2, r2, 0x400000
		   0x01109768:  00E5F602     RSCSEQ lr, r6, 0x0
		   0x0110976C:  E8E4F602     RSCSEQ lr, r6, 0xe8000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109770 Offset: 0x1109770 VA: 0x1109770
	public void add_onBubbleTimerEnd(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109770:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01109774:  98409FE5     LDR r4, [pc, 0x98]
		   0x01109778:  0090A0E1     MOV sb, r0
		   0x0110977C:  0180A0E1     MOV r8, r1
		   0x01109780:  04408FE0     ADD r4, pc, r4
		   0x01109784:  0000D4E5     LDRB r0, [r4]
		   0x01109788:  000050E3     CMPS r0, r0, 0x0
		   0x0110978C:  0400001A     BNE $+0x18  // if (!=) goto 0x011097A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109790:  80009FE5     LDR r0, [pc, 0x80]
		   0x01109794:  00009FE7     LDR r0, [pc, r0]
		   0x01109798:  7046F9EB     BL $-0x1ae638
		   0x0110979C:  0100A0E3     MOV r0, 0x1
		   0x011097A0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011097A4:  5400B9E5     LDR r0, [sb, 0x54]!
		   0x011097A8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x011097AC:  0AA09FE7     LDR r10, [pc, r10]
		   0x011097B0:  0810A0E1     MOV r1, r8
		   0x011097B4:  0020A0E3     MOV r2, 0x0
		   0x011097B8:  0060A0E1     MOV r6, r0
		   0x011097BC:  0070A0E3     MOV r7, 0x0
		   0x011097C0:  5C3F7EEB     BL $+0x1f8fd78  // CALL → Delegate.Combine
		   0x011097C4:  000050E3     CMPS r0, r0, 0x0
		   0x011097C8:  0A00000A     BEQ $+0x30  // if (==) goto 0x011097F8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011097CC:  00509AE5     LDR r5, [r10]
		   0x011097D0:  0040A0E1     MOV r4, r0
		   0x011097D4:  0510A0E1     MOV r1, r5
		   0x011097D8:  AE46F9EB     BL $-0x1ae540
		   0x011097DC:  0070A0E1     MOV r7, r0
		   0x011097E0:  000050E3     CMPS r0, r0, 0x0
		   0x011097E4:  0300001A     BNE $+0x14  // if (!=) goto 0x011097F8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011097E8:  0400A0E1     MOV r0, r4
		   0x011097EC:  0510A0E1     MOV r1, r5
		   0x011097F0:  E447F9EB     BL $-0x1ae068
		   0x011097F4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x011097F8:  0900A0E1     MOV r0, sb
		   0x011097FC:  0710A0E1     MOV r1, r7
		   0x01109800:  0620A0E1     MOV r2, r6
		   0x01109804:  1B33FAEB     BL $-0x17338c
		   0x01109808:  060050E1     CMPS r0, r0, r6
		   0x0110980C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01109810:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01109814:  61261203     TSTSEQ r2, r2, 0x6100000
		   0x01109818:  F8F5F602     RSCSEQ pc, r6, 0x3e000000
		   0x0110981C:  E0F5F602     RSCSEQ pc, r6, 0x38000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1109820 Offset: 0x1109820 VA: 0x1109820
	public void remove_onBubbleTimerEnd(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109820:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01109824:  98409FE5     LDR r4, [pc, 0x98]
		   0x01109828:  0090A0E1     MOV sb, r0
		   0x0110982C:  0180A0E1     MOV r8, r1
		   0x01109830:  04408FE0     ADD r4, pc, r4
		   0x01109834:  0000D4E5     LDRB r0, [r4]
		   0x01109838:  000050E3     CMPS r0, r0, 0x0
		   0x0110983C:  0400001A     BNE $+0x18  // if (!=) goto 0x01109854
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109840:  80009FE5     LDR r0, [pc, 0x80]
		   0x01109844:  00009FE7     LDR r0, [pc, r0]
		   0x01109848:  4446F9EB     BL $-0x1ae6e8
		   0x0110984C:  0100A0E3     MOV r0, 0x1
		   0x01109850:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109854:  5400B9E5     LDR r0, [sb, 0x54]!
		   0x01109858:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110985C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01109860:  0810A0E1     MOV r1, r8
		   0x01109864:  0020A0E3     MOV r2, 0x0
		   0x01109868:  0060A0E1     MOV r6, r0
		   0x0110986C:  0070A0E3     MOV r7, 0x0
		   0x01109870:  AE3F7EEB     BL $+0x1f8fec0  // CALL → Delegate.Remove
		   0x01109874:  000050E3     CMPS r0, r0, 0x0
		   0x01109878:  0A00000A     BEQ $+0x30  // if (==) goto 0x011098A8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110987C:  00509AE5     LDR r5, [r10]
		   0x01109880:  0040A0E1     MOV r4, r0
		   0x01109884:  0510A0E1     MOV r1, r5
		   0x01109888:  8246F9EB     BL $-0x1ae5f0
		   0x0110988C:  0070A0E1     MOV r7, r0
		   0x01109890:  000050E3     CMPS r0, r0, 0x0
		   0x01109894:  0300001A     BNE $+0x14  // if (!=) goto 0x011098A8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109898:  0400A0E1     MOV r0, r4
		   0x0110989C:  0510A0E1     MOV r1, r5
		   0x011098A0:  B847F9EB     BL $-0x1ae118
		   0x011098A4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x011098A8:  0900A0E1     MOV r0, sb
		   0x011098AC:  0710A0E1     MOV r1, r7
		   0x011098B0:  0620A0E1     MOV r2, r6
		   0x011098B4:  EF32FAEB     BL $-0x17343c
		   0x011098B8:  060050E1     CMPS r0, r0, r6
		   0x011098BC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x011098C0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x011098C4:  B2251203     TSTSEQ r2, r2, 0x2c800000
		   0x011098C8:  48F5F602     RSCSEQ pc, r6, 0x12000000
		   0x011098CC:  30F5F602     RSCSEQ pc, r6, 0xc000000
		*/
	}

	// RVA: 0x11098D0 Offset: 0x11098D0 VA: 0x11098D0
	public Cell get_Cell() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011098D0:  100090E5     LDR r0, [r0, 0x10]
		   0x011098D4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11098D8 Offset: 0x11098D8 VA: 0x11098D8
	public ItemData get_activeData() {
		/* Disassembly (ARM32, 13 instructions, 0x34 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011098D8:  10402DE9     PUSH {r4, lr}
		   0x011098DC:  844090E5     LDR r4, [r0, 0x84]
		   0x011098E0:  000054E3     CMPS r0, r4, 0x0
		   0x011098E4:  0000001A     BNE $+0x8  // if (!=) goto 0x011098EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011098E8:  B846F9EB     BL $-0x1ae518
		   // ──── Block 2 if (!=) ────────────────────
		   0x011098EC:  1C00D4E5     LDRB r0, [r4, 0x1c]
		   0x011098F0:  000050E3     CMPS r0, r0, 0x0
		   0x011098F4:  0200000A     BEQ $+0x10  // if (==) goto 0x01109904
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011098F8:  0400A0E1     MOV r0, r4
		   0x011098FC:  1040BDE8     POP {r4, lr}
		   0x01109900:  F22D00EA     B $+0xb7d0  // TAIL CALL → ItemData.GetLockedData
		   // ──── Block 4 if (==) ────────────────────
		   0x01109904:  0400A0E1     MOV r0, r4
		   0x01109908:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x110991C Offset: 0x110991C VA: 0x110991C
	protected RectTransform get_mainIconRectTransform() {
		/* Disassembly (ARM32, 34 instructions, 0x88 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110991C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01109920:  70509FE5     LDR r5, [pc, 0x70]
		   0x01109924:  0040A0E1     MOV r4, r0
		   0x01109928:  05508FE0     ADD r5, pc, r5
		   0x0110992C:  0000D5E5     LDRB r0, [r5]
		   0x01109930:  000050E3     CMPS r0, r0, 0x0
		   0x01109934:  0400001A     BNE $+0x18  // if (!=) goto 0x0110994C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109938:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x0110993C:  00009FE7     LDR r0, [pc, r0]
		   0x01109940:  0646F9EB     BL $-0x1ae7e0
		   0x01109944:  0100A0E3     MOV r0, 0x1
		   0x01109948:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110994C:  285094E5     LDR r5, [r4, 0x28]
		   0x01109950:  000055E3     CMPS r0, r5, 0x0
		   0x01109954:  0000001A     BNE $+0x8  // if (!=) goto 0x0110995C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01109958:  9C46F9EB     BL $-0x1ae588
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110995C:  0500A0E1     MOV r0, r5
		   0x01109960:  0010A0E3     MOV r1, 0x0
		   0x01109964:  0040A0E3     MOV r4, 0x0
		   0x01109968:  4FB93BEB     BL $+0xeee544  // CALL → sub_1FF7EAC
		   0x0110996C:  000050E3     CMPS r0, r0, 0x0
		   0x01109970:  0600000A     BEQ $+0x20  // if (==) goto 0x01109990
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01109974:  24109FE5     LDR r1, [pc, 0x24]
		   0x01109978:  01109FE7     LDR r1, [pc, r1]
		   0x0110997C:  002090E5     LDR r2, [r0]
		   0x01109980:  001091E5     LDR r1, [r1]
		   0x01109984:  010052E1     CMPS r0, r2, r1
		   0x01109988:  0000A013     MOVNE r0, 0x0
		   0x0110998C:  0040A0E1     MOV r4, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01109990:  0400A0E1     MOV r0, r4
		   0x01109994:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01109998:  BB241203     TSTSEQ r2, r2, 0xbb000000
		   0x0110999C:  24D6F602     RSCSEQ sp, r6, 0x2400000
		   0x011099A0:  E8D5F602     RSCSEQ sp, r6, 0x3a000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11099A4 Offset: 0x11099A4 VA: 0x11099A4
	public ItemData get_itemData() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011099A4:  840090E5     LDR r0, [r0, 0x84]
		   0x011099A8:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11099AC Offset: 0x11099AC VA: 0x11099AC
	protected void set_itemData(ItemData value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011099AC:  841080E5     STR r1, [r0, 0x84]
		   0x011099B0:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11099B4 Offset: 0x11099B4 VA: 0x11099B4
	public bool get_selectable() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011099B4:  10402DE9     PUSH {r4, lr}
		   0x011099B8:  844090E5     LDR r4, [r0, 0x84]
		   0x011099BC:  000054E3     CMPS r0, r4, 0x0
		   0x011099C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011099C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011099C4:  8146F9EB     BL $-0x1ae5f4
		   // ──── Block 2 if (!=) ────────────────────
		   0x011099C8:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x011099CC:  050050E2     SUBS r0, r0, 0x5
		   0x011099D0:  01000013     MOVNE r0, 0x1
		   0x011099D4:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x11099D8 Offset: 0x11099D8 VA: 0x11099D8 Slot: 6
	public string get_chainName() {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 14 blocks, 13 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011099D8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011099DC:  10D04DE2     SUB sp, sp, 0x10
		   0x011099E0:  CC509FE5     LDR r5, [pc, 0xcc]
		   0x011099E4:  0040A0E1     MOV r4, r0
		   0x011099E8:  05508FE0     ADD r5, pc, r5
		   0x011099EC:  0000D5E5     LDRB r0, [r5]
		   0x011099F0:  000050E3     CMPS r0, r0, 0x0
		   0x011099F4:  0700001A     BNE $+0x24  // if (!=) goto 0x01109A18
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011099F8:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x011099FC:  00009FE7     LDR r0, [pc, r0]
		   0x01109A00:  D645F9EB     BL $-0x1ae8a0
		   0x01109A04:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x01109A08:  00009FE7     LDR r0, [pc, r0]
		   0x01109A0C:  D345F9EB     BL $-0x1ae8ac
		   0x01109A10:  0100A0E3     MOV r0, 0x1
		   0x01109A14:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109A18:  841094E5     LDR r1, [r4, 0x84]
		   0x01109A1C:  000051E3     CMPS r0, r1, 0x0
		   0x01109A20:  0D00000A     BEQ $+0x3c  // if (==) goto 0x01109A5C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01109A24:  94009FE5     LDR r0, [pc, 0x94]
		   0x01109A28:  00009FE7     LDR r0, [pc, r0]
		   0x01109A2C:  085091E5     LDR r5, [r1, 0x8]
		   0x01109A30:  000090E5     LDR r0, [r0]
		   0x01109A34:  741090E5     LDR r1, [r0, 0x74]
		   0x01109A38:  000051E3     CMPS r0, r1, 0x0
		   0x01109A3C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109A44
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109A40:  1346F9EB     BL $-0x1ae7ac
		   // ──── Block 5 if (!=) ────────────────────
		   0x01109A44:  0500A0E1     MOV r0, r5
		   0x01109A48:  0010A0E3     MOV r1, 0x0
		   0x01109A4C:  0020A0E3     MOV r2, 0x0
		   0x01109A50:  11B93BEB     BL $+0xeee44c  // CALL → sub_1FF7E9C
		   0x01109A54:  000050E3     CMPS r0, r0, 0x0
		   0x01109A58:  0A00000A     BEQ $+0x30  // if (==) goto 0x01109A88
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x01109A5C:  60009FE5     LDR r0, [pc, 0x60]
		   0x01109A60:  5E10A0E3     MOV r1, 0x5e
		   0x01109A64:  00009FE7     LDR r0, [pc, r0]
		   0x01109A68:  0C108DE5     STR r1, [sp, 0xc]
		   0x01109A6C:  0010E0E3     MVN r1, r0, 0x0
		   0x01109A70:  000090E5     LDR r0, [r0]
		   0x01109A74:  03008DE9     STMIA sp, {r0, r1}
		   0x01109A78:  04008DE2     ADD r0, sp, 0x4
		   0x01109A7C:  0010A0E3     MOV r1, 0x0
		   0x01109A80:  9CF77DEB     BL $+0x1f7de78  // CALL → Enum.ToString
		   0x01109A84:  080000EA     B $+0x28  // goto 0x01109AAC
		   // ──── Block 7 if (==) ────────────────────
		   0x01109A88:  844094E5     LDR r4, [r4, 0x84]
		   0x01109A8C:  000054E3     CMPS r0, r4, 0x0
		   0x01109A90:  0000001A     BNE $+0x8  // if (!=) goto 0x01109A98
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01109A94:  4D46F9EB     BL $-0x1ae6c4
		   // ──── Block 9 if (!=) ────────────────────
		   0x01109A98:  084094E5     LDR r4, [r4, 0x8]
		   0x01109A9C:  000054E3     CMPS r0, r4, 0x0
		   0x01109AA0:  0000001A     BNE $+0x8  // if (!=) goto 0x01109AA8
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01109AA4:  4946F9EB     BL $-0x1ae6d4
		   // ──── Block 11 if (!=) ────────────────────
		   0x01109AA8:  180094E5     LDR r0, [r4, 0x18]
		   // ──── Block 12 ──────────────────────────────
		   0x01109AAC:  10D08DE2     ADD sp, sp, 0x10
		   0x01109AB0:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01109AB4:  FC231203     TSTSEQ r2, r2, 0xf0000003
		   0x01109AB8:  94F2F602     RSCSEQ pc, r6, 0x40000009
		   0x01109ABC:  30CBF602     RSCSEQ ip, r6, 0xc000
		   0x01109AC0:  10CBF602     RSCSEQ ip, r6, 0x4000
		   0x01109AC4:  2CF2F602     RSCSEQ pc, r6, 0xc0000002
		*/
	}

	// RVA: 0x1109AC8 Offset: 0x1109AC8 VA: 0x1109AC8
	public void SetId(int newId) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01109AC8:  341080E5     STR r1, [r0, 0x34]
		   0x01109ACC:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1109AD0 Offset: 0x1109AD0 VA: 0x1109AD0
	public string GetItemCode() {
		/* Disassembly (ARM32, 116 instructions, 0x1D0 bytes):
		   // CFG: 24 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109AD0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01109AD4:  CC519FE5     LDR r5, [pc, 0x1cc]
		   0x01109AD8:  0040A0E1     MOV r4, r0
		   0x01109ADC:  05508FE0     ADD r5, pc, r5
		   0x01109AE0:  0000D5E5     LDRB r0, [r5]
		   0x01109AE4:  000050E3     CMPS r0, r0, 0x0
		   0x01109AE8:  1000001A     BNE $+0x48  // if (!=) goto 0x01109B30
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109AEC:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x01109AF0:  00009FE7     LDR r0, [pc, r0]
		   0x01109AF4:  9945F9EB     BL $-0x1ae994
		   0x01109AF8:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x01109AFC:  00009FE7     LDR r0, [pc, r0]
		   0x01109B00:  9645F9EB     BL $-0x1ae9a0
		   0x01109B04:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x01109B08:  00009FE7     LDR r0, [pc, r0]
		   0x01109B0C:  9345F9EB     BL $-0x1ae9ac
		   0x01109B10:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x01109B14:  00009FE7     LDR r0, [pc, r0]
		   0x01109B18:  9045F9EB     BL $-0x1ae9b8
		   0x01109B1C:  98019FE5     LDR r0, [pc, 0x198]
		   0x01109B20:  00009FE7     LDR r0, [pc, r0]
		   0x01109B24:  8D45F9EB     BL $-0x1ae9c4
		   0x01109B28:  0100A0E3     MOV r0, 0x1
		   0x01109B2C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109B30:  840094E5     LDR r0, [r4, 0x84]
		   0x01109B34:  000050E3     CMPS r0, r0, 0x0
		   0x01109B38:  1700001A     BNE $+0x64  // if (!=) goto 0x01109B9C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01109B3C:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x01109B40:  00009FE7     LDR r0, [pc, r0]
		   0x01109B44:  000090E5     LDR r0, [r0]
		   0x01109B48:  1D46F9EB     BL $-0x1ae784
		   0x01109B4C:  0050A0E1     MOV r5, r0
		   0x01109B50:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x01109B54:  0020A0E3     MOV r2, 0x0
		   0x01109B58:  00009FE7     LDR r0, [pc, r0]
		   0x01109B5C:  001090E5     LDR r1, [r0]
		   0x01109B60:  0500A0E1     MOV r0, r5
		   0x01109B64:  C65110EB     BL $+0x414720  // CALL → InfoException..ctor
		   0x01109B68:  58019FE5     LDR r0, [pc, 0x158]
		   0x01109B6C:  00009FE7     LDR r0, [pc, r0]
		   0x01109B70:  000090E5     LDR r0, [r0]
		   0x01109B74:  741090E5     LDR r1, [r0, 0x74]
		   0x01109B78:  000051E3     CMPS r0, r1, 0x0
		   0x01109B7C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109B84
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109B80:  C345F9EB     BL $-0x1ae8ec
		   // ──── Block 5 if (!=) ────────────────────
		   0x01109B84:  0500A0E1     MOV r0, r5
		   0x01109B88:  0010A0E3     MOV r1, 0x0
		   0x01109B8C:  7EB93BEB     BL $+0xeee600  // CALL → sub_1FF818C
		   0x01109B90:  840094E5     LDR r0, [r4, 0x84]
		   0x01109B94:  000050E3     CMPS r0, r0, 0x0
		   0x01109B98:  0400000A     BEQ $+0x18  // if (==) goto 0x01109BB0
		   // 
		   // ──── Block 6 (from 2 paths) ──────────────────
		   0x01109B9C:  140090E5     LDR r0, [r0, 0x14]
		   0x01109BA0:  0010A0E3     MOV r1, 0x0
		   0x01109BA4:  133A76EB     BL $+0x1d8e854  // CALL → String.IsNullOrEmpty
		   0x01109BA8:  000050E3     CMPS r0, r0, 0x0
		   0x01109BAC:  3500000A     BEQ $+0xdc  // if (==) goto 0x01109C88
		   // 
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01109BB0:  7C0094E5     LDR r0, [r4, 0x7c]
		   0x01109BB4:  0010A0E3     MOV r1, 0x0
		   0x01109BB8:  0E3A76EB     BL $+0x1d8e840  // CALL → String.IsNullOrEmpty
		   0x01109BBC:  000050E3     CMPS r0, r0, 0x0
		   0x01109BC0:  3600000A     BEQ $+0xe0
		   0x01109BC4:  0400A0E1     MOV r0, r4
		   0x01109BC8:  0010A0E3     MOV r1, 0x0
		   0x01109BCC:  89B93BEB     BL $+0xeee62c  // CALL → sub_1FF81F8
		   0x01109BD0:  0050A0E1     MOV r5, r0
		   0x01109BD4:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x01109BD8:  0110A0E3     MOV r1, 0x1
		   0x01109BDC:  00009FE7     LDR r0, [pc, r0]
		   0x01109BE0:  000090E5     LDR r0, [r0]
		   0x01109BE4:  8045F9EB     BL $-0x1ae9f8
		   0x01109BE8:  0060A0E1     MOV r6, r0
		   0x01109BEC:  000050E3     CMPS r0, r0, 0x0
		   0x01109BF0:  0000001A     BNE $+0x8  // if (!=) goto 0x01109BF8
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01109BF4:  F545F9EB     BL $-0x1ae824
		   // ──── Block 10 if (!=) ────────────────────
		   0x01109BF8:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01109BFC:  00009FE7     LDR r0, [pc, r0]
		   0x01109C00:  007090E5     LDR r7, [r0]
		   0x01109C04:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01109C08:  000050E3     CMPS r0, r0, 0x0
		   0x01109C0C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109C14
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01109C10:  EF45F9EB     BL $-0x1ae83c
		   // ──── Block 12 if (!=) ────────────────────
		   0x01109C14:  000055E3     CMPS r0, r5, 0x0
		   0x01109C18:  107086E5     STR r7, [r6, 0x10]
		   0x01109C1C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109C24
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01109C20:  EA45F9EB     BL $-0x1ae850
		   // ──── Block 14 if (!=) ────────────────────
		   0x01109C24:  0500A0E1     MOV r0, r5
		   0x01109C28:  0610A0E1     MOV r1, r6
		   0x01109C2C:  0120A0E3     MOV r2, 0x1
		   0x01109C30:  0030A0E3     MOV r3, 0x0
		   0x01109C34:  C14B76EB     BL $+0x1d92f0c  // CALL → String.Split
		   0x01109C38:  0050A0E1     MOV r5, r0
		   0x01109C3C:  000050E3     CMPS r0, r0, 0x0
		   0x01109C40:  0100001A     BNE $+0xc  // if (!=) goto 0x01109C4C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01109C44:  E145F9EB     BL $-0x1ae874
		   0x01109C48:  E045F9EB     BL $-0x1ae878
		   // ──── Block 16 if (!=) ────────────────────
		   0x01109C4C:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01109C50:  016040E2     SUB r6, r0, 0x1
		   0x01109C54:  000050E3     CMPS r0, r0, 0x0
		   0x01109C58:  0000001A     BNE $+0x8  // if (!=) goto 0x01109C60
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01109C5C:  DC45F9EB     BL $-0x1ae888
		   // ──── Block 18 if (!=) ────────────────────
		   0x01109C60:  060185E0     ADD r0, r5, r6, lsl 2
		   0x01109C64:  105090E5     LDR r5, [r0, 0x10]
		   0x01109C68:  000055E3     CMPS r0, r5, 0x0
		   0x01109C6C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109C74
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x01109C70:  D645F9EB     BL $-0x1ae8a0
		   // ──── Block 20 if (!=) ────────────────────
		   0x01109C74:  0500A0E1     MOV r0, r5
		   0x01109C78:  0010A0E3     MOV r1, 0x0
		   0x01109C7C:  384F76EB     BL $+0x1d93ce8  // CALL → String.ToLower
		   0x01109C80:  7C0084E5     STR r0, [r4, 0x7c]
		   0x01109C84:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 21 if (==) ────────────────────
		   0x01109C88:  844094E5     LDR r4, [r4, 0x84]
		   0x01109C8C:  000054E3     CMPS r0, r4, 0x0
		   0x01109C90:  0000001A     BNE $+0x8  // if (!=) goto 0x01109C98
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x01109C94:  CD45F9EB     BL $-0x1ae8c4
		   // ──── Block 23 if (!=) ────────────────────
		   0x01109C98:  140094E5     LDR r0, [r4, 0x14]
		   0x01109C9C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1109CD4 Offset: 0x1109CD4 VA: 0x1109CD4
	public bool CanBeUsedForGoal(ItemData goalTarget) {
		/* Disassembly (ARM32, 69 instructions, 0x114 bytes):
		   // CFG: 23 blocks, 26 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109CD4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01109CD8:  0140A0E1     MOV r4, r1
		   0x01109CDC:  0010A0E3     MOV r1, 0x0
		   0x01109CE0:  0050A0E1     MOV r5, r0
		   0x01109CE4:  0060A0E3     MOV r6, 0x0
		   0x01109CE8:  70B83BEB     BL $+0xeee1c8  // CALL → sub_1FF7EB0
		   0x01109CEC:  0070A0E1     MOV r7, r0
		   0x01109CF0:  000050E3     CMPS r0, r0, 0x0
		   0x01109CF4:  0000001A     BNE $+0x8  // if (!=) goto 0x01109CFC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109CF8:  B445F9EB     BL $-0x1ae928
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109CFC:  0700A0E1     MOV r0, r7
		   0x01109D00:  0010A0E3     MOV r1, 0x0
		   0x01109D04:  6BB93BEB     BL $+0xeee5b4  // CALL → sub_1FF82B8
		   0x01109D08:  000050E3     CMPS r0, r0, 0x0
		   0x01109D0C:  3300000A     BEQ $+0xd4  // if (==) goto 0x01109DE0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01109D10:  3800D5E5     LDRB r0, [r5, 0x38]
		   0x01109D14:  000050E3     CMPS r0, r0, 0x0
		   0x01109D18:  3000001A     BNE $+0xc8  // if (!=) goto 0x01109DE0
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01109D1C:  847095E5     LDR r7, [r5, 0x84]
		   0x01109D20:  000057E3     CMPS r0, r7, 0x0
		   0x01109D24:  0000001A     BNE $+0x8  // if (!=) goto 0x01109D2C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01109D28:  A845F9EB     BL $-0x1ae958
		   // ──── Block 6 if (!=) ────────────────────
		   0x01109D2C:  7400D7E5     LDRB r0, [r7, 0x74]
		   0x01109D30:  000050E3     CMPS r0, r0, 0x0
		   0x01109D34:  2900001A     BNE $+0xac  // if (!=) goto 0x01109DE0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01109D38:  847095E5     LDR r7, [r5, 0x84]
		   0x01109D3C:  000057E3     CMPS r0, r7, 0x0
		   0x01109D40:  0000001A     BNE $+0x8  // if (!=) goto 0x01109D48
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01109D44:  A145F9EB     BL $-0x1ae974
		   // ──── Block 9 if (!=) ────────────────────
		   0x01109D48:  4C0097E5     LDR r0, [r7, 0x4c]
		   0x01109D4C:  050050E3     CMPS r0, r0, 0x5
		   0x01109D50:  2200000A     BEQ $+0x90  // if (==) goto 0x01109DE0
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x01109D54:  846095E5     LDR r6, [r5, 0x84]
		   0x01109D58:  000056E3     CMPS r0, r6, 0x0
		   0x01109D5C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109D64
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01109D60:  9A45F9EB     BL $-0x1ae990
		   // ──── Block 12 if (!=) ────────────────────
		   0x01109D64:  086096E5     LDR r6, [r6, 0x8]
		   0x01109D68:  000056E3     CMPS r0, r6, 0x0
		   0x01109D6C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109D74
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01109D70:  9645F9EB     BL $-0x1ae9a0
		   // ──── Block 14 if (!=) ────────────────────
		   0x01109D74:  187096E5     LDR r7, [r6, 0x18]
		   0x01109D78:  000054E3     CMPS r0, r4, 0x0
		   0x01109D7C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109D84
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01109D80:  9245F9EB     BL $-0x1ae9b0
		   // ──── Block 16 if (!=) ────────────────────
		   0x01109D84:  086094E5     LDR r6, [r4, 0x8]
		   0x01109D88:  000056E3     CMPS r0, r6, 0x0
		   0x01109D8C:  0000001A     BNE $+0x8  // if (!=) goto 0x01109D94
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01109D90:  8E45F9EB     BL $-0x1ae9c0
		   // ──── Block 18 if (!=) ────────────────────
		   0x01109D94:  181096E5     LDR r1, [r6, 0x18]
		   0x01109D98:  0700A0E1     MOV r0, r7
		   0x01109D9C:  0020A0E3     MOV r2, 0x0
		   0x01109DA0:  0060A0E3     MOV r6, 0x0
		   0x01109DA4:  19F375EB     BL $+0x1d7cc6c  // CALL → String.op_Equality
		   0x01109DA8:  000050E3     CMPS r0, r0, 0x0
		   0x01109DAC:  0B00000A     BEQ $+0x34  // if (==) goto 0x01109DE0
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x01109DB0:  845095E5     LDR r5, [r5, 0x84]
		   0x01109DB4:  000055E3     CMPS r0, r5, 0x0
		   0x01109DB8:  0000001A     BNE $+0x8  // if (!=) goto 0x01109DC0
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x01109DBC:  8345F9EB     BL $-0x1ae9ec
		   // ──── Block 21 if (!=) ────────────────────
		   0x01109DC0:  0500A0E1     MOV r0, r5
		   0x01109DC4:  070000EB     BL $+0x24  // CALL → ItemData.get_Order
		   0x01109DC8:  0050A0E1     MOV r5, r0
		   0x01109DCC:  0400A0E1     MOV r0, r4
		   0x01109DD0:  040000EB     BL $+0x18  // CALL → ItemData.get_Order
		   0x01109DD4:  000045E0     SUB r0, r5, r0
		   0x01109DD8:  100F6FE1     CLZ r0, r0
		   0x01109DDC:  A062A0E1     MOV r6, r0, r0, lsr 5
		   // ──── Block 22 (from 5 paths) ──────────────────
		   0x01109DE0:  0600A0E1     MOV r0, r6
		   0x01109DE4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		*/
	}

	// RVA: 0x1109E80 Offset: 0x1109E80 VA: 0x1109E80 Slot: 7
	public virtual string GetLocTitle() {
		/* Disassembly (ARM32, 66 instructions, 0x108 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109E80:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01109E84:  E8509FE5     LDR r5, [pc, 0xe8]
		   0x01109E88:  0040A0E1     MOV r4, r0
		   0x01109E8C:  05508FE0     ADD r5, pc, r5
		   0x01109E90:  0000D5E5     LDRB r0, [r5]
		   0x01109E94:  000050E3     CMPS r0, r0, 0x0
		   0x01109E98:  0700001A     BNE $+0x24  // if (!=) goto 0x01109EBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109E9C:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x01109EA0:  00009FE7     LDR r0, [pc, r0]
		   0x01109EA4:  AD44F9EB     BL $-0x1aed44
		   0x01109EA8:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01109EAC:  00009FE7     LDR r0, [pc, r0]
		   0x01109EB0:  AA44F9EB     BL $-0x1aed50
		   0x01109EB4:  0100A0E3     MOV r0, 0x1
		   0x01109EB8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109EBC:  0400A0E1     MOV r0, r4
		   0x01109EC0:  84FEFFEB     BL $-0x5e8
		   0x01109EC4:  0040A0E1     MOV r4, r0
		   0x01109EC8:  000050E3     CMPS r0, r0, 0x0
		   0x01109ECC:  0000001A     BNE $+0x8  // if (!=) goto 0x01109ED4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01109ED0:  3E45F9EB     BL $-0x1aeb00
		   // ──── Block 4 if (!=) ────────────────────
		   0x01109ED4:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01109ED8:  00009FE7     LDR r0, [pc, r0]
		   0x01109EDC:  784094E5     LDR r4, [r4, 0x78]
		   0x01109EE0:  005090E5     LDR r5, [r0]
		   0x01109EE4:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x01109EE8:  000050E3     CMPS r0, r0, 0x0
		   0x01109EEC:  0200001A     BNE $+0x10  // if (!=) goto 0x01109EFC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01109EF0:  0500A0E1     MOV r0, r5
		   0x01109EF4:  0633FAEB     BL $-0x1733e0
		   0x01109EF8:  1C0095E5     LDR r0, [r5, 0x1c]
		   // ──── Block 6 if (!=) ────────────────────
		   0x01109EFC:  080090E5     LDR r0, [r0, 0x8]
		   0x01109F00:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01109F04:  010011E3     TSTS r0, r1, 0x1
		   0x01109F08:  0000001A     BNE $+0x8  // if (!=) goto 0x01109F10
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01109F0C:  E932FAEB     BL $-0x173454
		   // ──── Block 8 if (!=) ────────────────────
		   0x01109F10:  741090E5     LDR r1, [r0, 0x74]
		   0x01109F14:  000051E3     CMPS r0, r1, 0x0
		   0x01109F18:  0000001A     BNE $+0x8  // if (!=) goto 0x01109F20
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01109F1C:  DC44F9EB     BL $-0x1aec88
		   // ──── Block 10 if (!=) ────────────────────
		   0x01109F20:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x01109F24:  080090E5     LDR r0, [r0, 0x8]
		   0x01109F28:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x01109F2C:  010011E3     TSTS r0, r1, 0x1
		   0x01109F30:  0000001A     BNE $+0x8  // if (!=) goto 0x01109F38
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01109F34:  DF32FAEB     BL $-0x17347c
		   // ──── Block 12 if (!=) ────────────────────
		   0x01109F38:  44109FE5     LDR r1, [pc, 0x44]
		   0x01109F3C:  01109FE7     LDR r1, [pc, r1]
		   0x01109F40:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01109F44:  001091E5     LDR r1, [r1]
		   0x01109F48:  005090E5     LDR r5, [r0]
		   0x01109F4C:  742091E5     LDR r2, [r1, 0x74]
		   0x01109F50:  000052E3     CMPS r0, r2, 0x0
		   0x01109F54:  0100001A     BNE $+0xc  // if (!=) goto 0x01109F60
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01109F58:  0100A0E1     MOV r0, r1
		   0x01109F5C:  CC44F9EB     BL $-0x1aecc8
		   // ──── Block 14 if (!=) ────────────────────
		   0x01109F60:  0400A0E1     MOV r0, r4
		   0x01109F64:  0510A0E1     MOV r1, r5
		   0x01109F68:  0020A0E3     MOV r2, 0x0
		   0x01109F6C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01109F70:  76CA0FEA     B $+0x3f29e0  // TAIL CALL → MergeLocalization.GetLocalization
		   0x01109F74:  5A1F1203     TSTSEQ r1, r2, 0x168
		   0x01109F78:  00C7F602     RSCSEQ ip, r6, 0x0
		   0x01109F7C:  FCE7F602     RSCSEQ lr, r6, 0x3f00000
		   0x01109F80:  C8C6F602     RSCSEQ ip, r6, 0xc800000
		   0x01109F84:  6CE7F602     RSCSEQ lr, r6, 0x1b00000
		*/
	}

	// RVA: 0x1109F88 Offset: 0x1109F88 VA: 0x1109F88 Slot: 8
	public virtual string GetLocDescription() {
		/* Disassembly (ARM32, 285 instructions, 0x474 bytes):
		   // CFG: 63 blocks, 65 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01109F88:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01109F8C:  08D04DE2     SUB sp, sp, 0x8
		   0x01109F90:  2C549FE5     LDR r5, [pc, 0x42c]
		   0x01109F94:  0040A0E1     MOV r4, r0
		   0x01109F98:  05508FE0     ADD r5, pc, r5
		   0x01109F9C:  0000D5E5     LDRB r0, [r5]
		   0x01109FA0:  000050E3     CMPS r0, r0, 0x0
		   0x01109FA4:  0A00001A     BNE $+0x30  // if (!=) goto 0x01109FD4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01109FA8:  18049FE5     LDR r0, [pc, 0x418]
		   0x01109FAC:  00009FE7     LDR r0, [pc, r0]
		   0x01109FB0:  6A44F9EB     BL $-0x1aee50
		   0x01109FB4:  10049FE5     LDR r0, [pc, 0x410]
		   0x01109FB8:  00009FE7     LDR r0, [pc, r0]
		   0x01109FBC:  6744F9EB     BL $-0x1aee5c
		   0x01109FC0:  08049FE5     LDR r0, [pc, 0x408]
		   0x01109FC4:  00009FE7     LDR r0, [pc, r0]
		   0x01109FC8:  6444F9EB     BL $-0x1aee68
		   0x01109FCC:  0100A0E3     MOV r0, 0x1
		   0x01109FD0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01109FD4:  845094E5     LDR r5, [r4, 0x84]
		   0x01109FD8:  000055E3     CMPS r0, r5, 0x0
		   0x01109FDC:  0000001A     BNE $+0x8  // if (!=) goto 0x01109FE4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01109FE0:  FA44F9EB     BL $-0x1aec10
		   // ──── Block 4 if (!=) ────────────────────
		   0x01109FE4:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x01109FE8:  0D0050E3     CMPS r0, r0, 0xd
		   0x01109FEC:  E600008A     BHI $+0x3a0  // if (> (unsigned)) goto 0x0110A38C
		   // 
		   // ──── Block 5 else (<= (unsigned)) ────────────────────
		   0x01109FF0:  04108FE2     ADR r1, pc, 0x4
		   0x01109FF4:  000191E7     LDR r0, [r1, r0, lsl 2]
		   0x01109FF8:  00F081E0     ADD pc, r1, r0
		   0x01109FFC:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A000:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A004:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A008:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A00C:  D4020000     LDRDEQ r0, r1, [r0], -r4
		   0x0110A010:  2C010000     ANDEQ r0, r0, ip, lsr 2
		   0x0110A014:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A018:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A01C:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A020:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A024:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A028:  80010000     ANDEQ r0, r0, r0, lsl 3
		   0x0110A02C:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A030:  38000000     ANDEQ r0, r0, r8, lsr r0
		   0x0110A034:  0400A0E1     MOV r0, r4
		   0x0110A038:  26FEFFEB     BL $-0x760
		   0x0110A03C:  0050A0E1     MOV r5, r0
		   0x0110A040:  000050E3     CMPS r0, r0, 0x0
		   0x0110A044:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A04C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110A048:  E044F9EB     BL $-0x1aec78
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110A04C:  80039FE5     LDR r0, [pc, 0x380]
		   0x0110A050:  0110A0E3     MOV r1, 0x1
		   0x0110A054:  00009FE7     LDR r0, [pc, r0]
		   0x0110A058:  7C5095E5     LDR r5, [r5, 0x7c]
		   0x0110A05C:  000090E5     LDR r0, [r0]
		   0x0110A060:  6144F9EB     BL $-0x1aee74
		   0x0110A064:  0060A0E1     MOV r6, r0
		   0x0110A068:  0400A0E1     MOV r0, r4
		   0x0110A06C:  19FEFFEB     BL $-0x794
		   0x0110A070:  0040A0E1     MOV r4, r0
		   0x0110A074:  000050E3     CMPS r0, r0, 0x0
		   0x0110A078:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A080
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110A07C:  D344F9EB     BL $-0x1aecac
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110A080:  0400A0E1     MOV r0, r4
		   0x0110A084:  57FFFFEB     BL $-0x29c
		   0x0110A088:  011080E2     ADD r1, r0, 0x1
		   0x0110A08C:  44039FE5     LDR r0, [pc, 0x344]
		   0x0110A090:  00009FE7     LDR r0, [pc, r0]
		   0x0110A094:  04108DE5     STR r1, [sp, 0x4]
		   0x0110A098:  04108DE2     ADD r1, sp, 0x4
		   0x0110A09C:  240090E5     LDR r0, [r0, 0x24]
		   0x0110A0A0:  7D44F9EB     BL $-0x1aee04
		   0x0110A0A4:  0040A0E1     MOV r4, r0
		   0x0110A0A8:  000056E3     CMPS r0, r6, 0x0
		   0x0110A0AC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A0B4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110A0B0:  C644F9EB     BL $-0x1aece0
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110A0B4:  000054E3     CMPS r0, r4, 0x0
		   0x0110A0B8:  0800000A     BEQ $+0x28  // if (==) goto 0x0110A0E0
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x0110A0BC:  000096E5     LDR r0, [r6]
		   0x0110A0C0:  201090E5     LDR r1, [r0, 0x20]
		   0x0110A0C4:  0400A0E1     MOV r0, r4
		   0x0110A0C8:  7244F9EB     BL $-0x1aee30
		   0x0110A0CC:  000050E3     CMPS r0, r0, 0x0
		   0x0110A0D0:  0200001A     BNE $+0x10  // if (!=) goto 0x0110A0E0
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110A0D4:  C544F9EB     BL $-0x1aece4
		   0x0110A0D8:  0010A0E3     MOV r1, 0x0
		   0x0110A0DC:  6744F9EB     BL $-0x1aee5c
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x0110A0E0:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110A0E4:  000050E3     CMPS r0, r0, 0x0
		   0x0110A0E8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A0F0
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0110A0EC:  B844F9EB     BL $-0x1aed18
		   // ──── Block 16 if (!=) ────────────────────
		   0x0110A0F0:  104086E5     STR r4, [r6, 0x10]
		   0x0110A0F4:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x0110A0F8:  00009FE7     LDR r0, [pc, r0]
		   0x0110A0FC:  000090E5     LDR r0, [r0]
		   0x0110A100:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A104:  000051E3     CMPS r0, r1, 0x0
		   0x0110A108:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A110
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0110A10C:  6044F9EB     BL $-0x1aee78
		   // ──── Block 18 if (!=) ────────────────────
		   0x0110A110:  0500A0E1     MOV r0, r5
		   0x0110A114:  0610A0E1     MOV r1, r6
		   0x0110A118:  0020A0E3     MOV r2, 0x0
		   0x0110A11C:  0BCA0FEB     BL $+0x3f2834  // CALL → MergeLocalization.GetLocalization
		   0x0110A120:  08D08DE2     ADD sp, sp, 0x8
		   0x0110A124:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0110A128:  845094E5     LDR r5, [r4, 0x84]
		   0x0110A12C:  000055E3     CMPS r0, r5, 0x0
		   0x0110A130:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A138
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x0110A134:  A544F9EB     BL $-0x1aed64
		   // ──── Block 21 if (!=) ────────────────────
		   0x0110A138:  285095E5     LDR r5, [r5, 0x28]
		   0x0110A13C:  000055E3     CMPS r0, r5, 0x0
		   0x0110A140:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A148
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x0110A144:  A144F9EB     BL $-0x1aed74
		   // ──── Block 23 if (!=) ────────────────────
		   0x0110A148:  185095E5     LDR r5, [r5, 0x18]
		   0x0110A14C:  000055E3     CMPS r0, r5, 0x0
		   0x0110A150:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A158
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x0110A154:  9D44F9EB     BL $-0x1aed84
		   // ──── Block 25 if (!=) ────────────────────
		   0x0110A158:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0110A15C:  0D0050E3     CMPS r0, r0, 0xd
		   0x0110A160:  8900008A     BHI $+0x22c  // if (> (unsigned)) goto 0x0110A38C
		   // 
		   // ──── Block 26 else (<= (unsigned)) ────────────────────
		   0x0110A164:  0110A0E3     MOV r1, 0x1
		   0x0110A168:  EB2F03E3     MOV r2, 0x3feb
		   0x0110A16C:  110012E1     TSTS r0, r2, r1, lsl r0
		   0x0110A170:  AFFFFF1A     BNE $-0x13c
		   // ──── Block 27 else (==) ────────────────────
		   0x0110A174:  020050E3     CMPS r0, r0, 0x2
		   0x0110A178:  5400001A     BNE $+0x158  // if (!=) goto 0x0110A2D0
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x0110A17C:  0400A0E1     MOV r0, r4
		   0x0110A180:  D4FDFFEB     BL $-0x8a8
		   0x0110A184:  0050A0E1     MOV r5, r0
		   0x0110A188:  000050E3     CMPS r0, r0, 0x0
		   0x0110A18C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A194
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x0110A190:  8E44F9EB     BL $-0x1aedc0
		   // ──── Block 30 if (!=) ────────────────────
		   0x0110A194:  44029FE5     LDR r0, [pc, 0x244]
		   0x0110A198:  0210A0E3     MOV r1, 0x2
		   0x0110A19C:  00009FE7     LDR r0, [pc, r0]
		   0x0110A1A0:  7C8095E5     LDR r8, [r5, 0x7c]
		   0x0110A1A4:  000090E5     LDR r0, [r0]
		   0x0110A1A8:  0F44F9EB     BL $-0x1aefbc
		   0x0110A1AC:  0060A0E1     MOV r6, r0
		   0x0110A1B0:  0400A0E1     MOV r0, r4
		   0x0110A1B4:  C7FDFFEB     BL $-0x8dc
		   0x0110A1B8:  0070A0E1     MOV r7, r0
		   0x0110A1BC:  000050E3     CMPS r0, r0, 0x0
		   0x0110A1C0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A1C8
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x0110A1C4:  8144F9EB     BL $-0x1aedf4
		   // ──── Block 32 if (!=) ────────────────────
		   0x0110A1C8:  0700A0E1     MOV r0, r7
		   0x0110A1CC:  05FFFFEB     BL $-0x3e4
		   0x0110A1D0:  0C529FE5     LDR r5, [pc, 0x20c]
		   0x0110A1D4:  011080E2     ADD r1, r0, 0x1
		   0x0110A1D8:  05509FE7     LDR r5, [pc, r5]
		   0x0110A1DC:  04108DE5     STR r1, [sp, 0x4]
		   0x0110A1E0:  04108DE2     ADD r1, sp, 0x4
		   0x0110A1E4:  240095E5     LDR r0, [r5, 0x24]
		   0x0110A1E8:  2B44F9EB     BL $-0x1aef4c
		   0x0110A1EC:  0070A0E1     MOV r7, r0
		   0x0110A1F0:  000056E3     CMPS r0, r6, 0x0
		   0x0110A1F4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A1FC
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x0110A1F8:  7444F9EB     BL $-0x1aee28
		   // ──── Block 34 if (!=) ────────────────────
		   0x0110A1FC:  000057E3     CMPS r0, r7, 0x0
		   0x0110A200:  0800000A     BEQ $+0x28  // if (==) goto 0x0110A228
		   // 
		   // ──── Block 35 else (!=) ────────────────────
		   0x0110A204:  000096E5     LDR r0, [r6]
		   0x0110A208:  201090E5     LDR r1, [r0, 0x20]
		   0x0110A20C:  0700A0E1     MOV r0, r7
		   0x0110A210:  2044F9EB     BL $-0x1aef78
		   0x0110A214:  000050E3     CMPS r0, r0, 0x0
		   0x0110A218:  0200001A     BNE $+0x10  // if (!=) goto 0x0110A228
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x0110A21C:  7344F9EB     BL $-0x1aee2c
		   0x0110A220:  0010A0E3     MOV r1, 0x0
		   0x0110A224:  1544F9EB     BL $-0x1aefa4
		   // ──── Block 37 (from 2 paths) ──────────────────
		   0x0110A228:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110A22C:  000050E3     CMPS r0, r0, 0x0
		   0x0110A230:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A238
		   // 
		   // ──── Block 38 else (==) ────────────────────
		   0x0110A234:  6644F9EB     BL $-0x1aee60
		   // ──── Block 39 if (!=) ────────────────────
		   0x0110A238:  0400A0E1     MOV r0, r4
		   0x0110A23C:  107086E5     STR r7, [r6, 0x10]
		   0x0110A240:  A4FDFFEB     BL $-0x968
		   0x0110A244:  0040A0E1     MOV r4, r0
		   0x0110A248:  000050E3     CMPS r0, r0, 0x0
		   0x0110A24C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A254
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x0110A250:  5E44F9EB     BL $-0x1aee80
		   // ──── Block 41 if (!=) ────────────────────
		   0x0110A254:  240095E5     LDR r0, [r5, 0x24]
		   0x0110A258:  541094E5     LDR r1, [r4, 0x54]
		   0x0110A25C:  00108DE5     STR r1, [sp]
		   0x0110A260:  0D10A0E1     MOV r1, sp
		   0x0110A264:  0C44F9EB     BL $-0x1aefc8
		   0x0110A268:  0040A0E1     MOV r4, r0
		   0x0110A26C:  000050E3     CMPS r0, r0, 0x0
		   0x0110A270:  0800000A     BEQ $+0x28  // if (==) goto 0x0110A298
		   // 
		   // ──── Block 42 else (!=) ────────────────────
		   0x0110A274:  000096E5     LDR r0, [r6]
		   0x0110A278:  201090E5     LDR r1, [r0, 0x20]
		   0x0110A27C:  0400A0E1     MOV r0, r4
		   0x0110A280:  0444F9EB     BL $-0x1aefe8
		   0x0110A284:  000050E3     CMPS r0, r0, 0x0
		   0x0110A288:  0200001A     BNE $+0x10  // if (!=) goto 0x0110A298
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x0110A28C:  5744F9EB     BL $-0x1aee9c
		   0x0110A290:  0010A0E3     MOV r1, 0x0
		   0x0110A294:  F943F9EB     BL $-0x1af014
		   // ──── Block 44 (from 2 paths) ──────────────────
		   0x0110A298:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110A29C:  010050E3     CMPS r0, r0, 0x1
		   0x0110A2A0:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110A2A8
		   // 
		   // ──── Block 45 else (<= (unsigned)) ────────────────────
		   0x0110A2A4:  4A44F9EB     BL $-0x1aeed0
		   // ──── Block 46 if (> (unsigned)) ────────────────────
		   0x0110A2A8:  144086E5     STR r4, [r6, 0x14]
		   0x0110A2AC:  34019FE5     LDR r0, [pc, 0x134]
		   0x0110A2B0:  00009FE7     LDR r0, [pc, r0]
		   0x0110A2B4:  000090E5     LDR r0, [r0]
		   0x0110A2B8:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A2BC:  000051E3     CMPS r0, r1, 0x0
		   0x0110A2C0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A2C8
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x0110A2C4:  F243F9EB     BL $-0x1af030
		   // ──── Block 48 if (!=) ────────────────────
		   0x0110A2C8:  0800A0E1     MOV r0, r8
		   0x0110A2CC:  90FFFFEA     B $-0x1b8
		   // ──── Block 49 if (!=) ────────────────────
		   0x0110A2D0:  0400A0E1     MOV r0, r4
		   0x0110A2D4:  7FFDFFEB     BL $-0x9fc
		   0x0110A2D8:  0040A0E1     MOV r4, r0
		   0x0110A2DC:  000050E3     CMPS r0, r0, 0x0
		   0x0110A2E0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A2E8
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x0110A2E4:  3944F9EB     BL $-0x1aef14
		   // ──── Block 51 if (!=) ────────────────────
		   0x0110A2E8:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x0110A2EC:  00009FE7     LDR r0, [pc, r0]
		   0x0110A2F0:  7C4094E5     LDR r4, [r4, 0x7c]
		   0x0110A2F4:  005090E5     LDR r5, [r0]
		   0x0110A2F8:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x0110A2FC:  000050E3     CMPS r0, r0, 0x0
		   0x0110A300:  0200001A     BNE $+0x10  // if (!=) goto 0x0110A310
		   // 
		   // ──── Block 52 else (==) ────────────────────
		   0x0110A304:  0500A0E1     MOV r0, r5
		   0x0110A308:  0132FAEB     BL $-0x1737f4
		   0x0110A30C:  1C0095E5     LDR r0, [r5, 0x1c]
		   // ──── Block 53 if (!=) ────────────────────
		   0x0110A310:  080090E5     LDR r0, [r0, 0x8]
		   0x0110A314:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x0110A318:  010011E3     TSTS r0, r1, 0x1
		   0x0110A31C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A324
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x0110A320:  E431FAEB     BL $-0x173868
		   // ──── Block 55 if (!=) ────────────────────
		   0x0110A324:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A328:  000051E3     CMPS r0, r1, 0x0
		   0x0110A32C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A334
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x0110A330:  D743F9EB     BL $-0x1af09c
		   // ──── Block 57 if (!=) ────────────────────
		   0x0110A334:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x0110A338:  080090E5     LDR r0, [r0, 0x8]
		   0x0110A33C:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x0110A340:  010011E3     TSTS r0, r1, 0x1
		   0x0110A344:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A34C
		   // 
		   // ──── Block 58 else (==) ────────────────────
		   0x0110A348:  DA31FAEB     BL $-0x173890
		   // ──── Block 59 if (!=) ────────────────────
		   0x0110A34C:  9C109FE5     LDR r1, [pc, 0x9c]
		   0x0110A350:  01109FE7     LDR r1, [pc, r1]
		   0x0110A354:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110A358:  001091E5     LDR r1, [r1]
		   0x0110A35C:  005090E5     LDR r5, [r0]
		   0x0110A360:  742091E5     LDR r2, [r1, 0x74]
		   0x0110A364:  000052E3     CMPS r0, r2, 0x0
		   0x0110A368:  0100001A     BNE $+0xc  // if (!=) goto 0x0110A374
		   // 
		   // ──── Block 60 else (==) ────────────────────
		   0x0110A36C:  0100A0E1     MOV r0, r1
		   0x0110A370:  C743F9EB     BL $-0x1af0dc
		   // ──── Block 61 if (!=) ────────────────────
		   0x0110A374:  0400A0E1     MOV r0, r4
		   0x0110A378:  0510A0E1     MOV r1, r5
		   0x0110A37C:  0020A0E3     MOV r2, 0x0
		   0x0110A380:  08D08DE2     ADD sp, sp, 0x8
		   0x0110A384:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0110A388:  70C90FEA     B $+0x3f25c8  // TAIL CALL → MergeLocalization.GetLocalization
		   // ──── Block 62 (from 2 paths) ──────────────────
		   0x0110A38C:  60009FE5     LDR r0, [pc, 0x60]
		   0x0110A390:  00009FE7     LDR r0, [pc, r0]
		   0x0110A394:  7543F9EB     BL $-0x1af224
		   0x0110A398:  0944F9EB     BL $-0x1aefd4
		   0x0110A39C:  0010A0E3     MOV r1, 0x0
		   0x0110A3A0:  0040A0E1     MOV r4, r0
		   0x0110A3A4:  77947AEB     BL $+0x1ea51e4  // CALL → ArgumentOutOfRangeException..ctor
		   0x0110A3A8:  48009FE5     LDR r0, [pc, 0x48]
		   0x0110A3AC:  00009FE7     LDR r0, [pc, r0]
		   0x0110A3B0:  6E43F9EB     BL $-0x1af240
		   0x0110A3B4:  0010A0E1     MOV r1, r0
		   0x0110A3B8:  0400A0E1     MOV r0, r4
		   0x0110A3BC:  AF43F9EB     BL $-0x1af13c
		   0x0110A3C0:  5043F9EB     BL $-0x1af2b8
		   0x0110A3C4:  4F1E1203     TSTSEQ r1, r2, 0x4f0
		   0x0110A3C8:  F4C5F602     RSCSEQ ip, r6, 0x3d000000
		   0x0110A3CC:  F0E6F602     RSCSEQ lr, r6, 0xf000000
		   0x0110A3D0:  24C6F602     RSCSEQ ip, r6, 0x2400000
		   0x0110A3D4:  94C5F602     RSCSEQ ip, r6, 0x25000000
		   0x0110A3D8:  30C6F602     RSCSEQ ip, r6, 0x3000000
		   0x0110A3DC:  B0E5F602     RSCSEQ lr, r6, 0x2c000000
		   0x0110A3E0:  4CC4F602     RSCSEQ ip, r6, 0x4c000000
		   0x0110A3E4:  E8C4F602     RSCSEQ ip, r6, 0xe8000000
		   0x0110A3E8:  F8E3F602     RSCSEQ lr, r6, 0xe0000003
		   0x0110A3EC:  B4C2F602     RSCSEQ ip, r6, 0x4000000b
		   0x0110A3F0:  58E3F602     RSCSEQ lr, r6, 0x60000001
		   0x0110A3F4:  24CCF602     RSCSEQ ip, r6, 0x2400
		   0x0110A3F8:  60F5F602     RSCSEQ pc, r6, 0x18000000
		*/
	}

	// RVA: 0x110A3FC Offset: 0x110A3FC VA: 0x110A3FC Slot: 9
	public virtual void SetCell(Cell newCell, bool forcePositionChange = false) {
		/* Disassembly (ARM32, 113 instructions, 0x1C4 bytes):
		   // CFG: 28 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110A3FC:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110A400:  10D04DE2     SUB sp, sp, 0x10
		   0x0110A404:  A8719FE5     LDR r7, [pc, 0x1a8]
		   0x0110A408:  0040A0E1     MOV r4, r0
		   0x0110A40C:  0260A0E1     MOV r6, r2
		   0x0110A410:  0150A0E1     MOV r5, r1
		   0x0110A414:  07708FE0     ADD r7, pc, r7
		   0x0110A418:  0000D7E5     LDRB r0, [r7]
		   0x0110A41C:  000050E3     CMPS r0, r0, 0x0
		   0x0110A420:  0400001A     BNE $+0x18  // if (!=) goto 0x0110A438
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110A424:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x0110A428:  00009FE7     LDR r0, [pc, r0]
		   0x0110A42C:  4B43F9EB     BL $-0x1af2cc
		   0x0110A430:  0100A0E3     MOV r0, 0x1
		   0x0110A434:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110A438:  7C819FE5     LDR r8, [pc, 0x17c]
		   0x0110A43C:  08809FE7     LDR r8, [pc, r8]
		   0x0110A440:  107094E5     LDR r7, [r4, 0x10]
		   0x0110A444:  000098E5     LDR r0, [r8]
		   0x0110A448:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A44C:  000051E3     CMPS r0, r1, 0x0
		   0x0110A450:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A458
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110A454:  8E43F9EB     BL $-0x1af1c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110A458:  0700A0E1     MOV r0, r7
		   0x0110A45C:  0010A0E3     MOV r1, 0x0
		   0x0110A460:  0020A0E3     MOV r2, 0x0
		   0x0110A464:  8CB63BEB     BL $+0xeeda38  // CALL → sub_1FF7E9C
		   0x0110A468:  000050E3     CMPS r0, r0, 0x0
		   0x0110A46C:  2200000A     BEQ $+0x90  // if (==) goto 0x0110A4FC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110A470:  000098E5     LDR r0, [r8]
		   0x0110A474:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A478:  000051E3     CMPS r0, r1, 0x0
		   0x0110A47C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A484
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110A480:  8343F9EB     BL $-0x1af1ec
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110A484:  0500A0E1     MOV r0, r5
		   0x0110A488:  0010A0E3     MOV r1, 0x0
		   0x0110A48C:  0020A0E3     MOV r2, 0x0
		   0x0110A490:  B769FCEB     BL $-0xe591c
		   0x0110A494:  000050E3     CMPS r0, r0, 0x0
		   0x0110A498:  1700000A     BEQ $+0x64  // if (==) goto 0x0110A4FC
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0110A49C:  287094E5     LDR r7, [r4, 0x28]
		   0x0110A4A0:  000057E3     CMPS r0, r7, 0x0
		   0x0110A4A4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A4AC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110A4A8:  C843F9EB     BL $-0x1af0d8
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110A4AC:  000097E5     LDR r0, [r7]
		   0x0110A4B0:  282290E5     LDR r2, [r0, 0x228]
		   0x0110A4B4:  2C1290E5     LDR r1, [r0, 0x22c]
		   0x0110A4B8:  0700A0E1     MOV r0, r7
		   0x0110A4BC:  32FF2FE1     BLX r2  // virtual call: vtable+0x228
		   0x0110A4C0:  287094E5     LDR r7, [r4, 0x28]
		   0x0110A4C4:  000057E3     CMPS r0, r7, 0x0
		   0x0110A4C8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A4D0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110A4CC:  BF43F9EB     BL $-0x1af0fc
		   // ──── Block 12 if (!=) ────────────────────
		   0x0110A4D0:  0700A0E1     MOV r0, r7
		   0x0110A4D4:  0010A0E3     MOV r1, 0x0
		   0x0110A4D8:  55B73BEB     BL $+0xeedd5c  // CALL → sub_1FF8234
		   0x0110A4DC:  0070A0E1     MOV r7, r0
		   0x0110A4E0:  000055E3     CMPS r0, r5, 0x0
		   0x0110A4E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A4EC
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110A4E8:  B843F9EB     BL $-0x1af118
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110A4EC:  2C1095E5     LDR r1, [r5, 0x2c]
		   0x0110A4F0:  0700A0E1     MOV r0, r7
		   0x0110A4F4:  0020A0E3     MOV r2, 0x0
		   0x0110A4F8:  28AE0FEB     BL $+0x3eb8a8  // CALL → ExtensionMethods.MultiplySize
		   // ──── Block 15 (from 2 paths) ──────────────────
		   0x0110A4FC:  000056E3     CMPS r0, r6, 0x0
		   0x0110A500:  105084E5     STR r5, [r4, 0x10]
		   0x0110A504:  2800000A     BEQ $+0xa8  // if (==) goto 0x0110A5AC
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x0110A508:  000098E5     LDR r0, [r8]
		   0x0110A50C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A510:  000051E3     CMPS r0, r1, 0x0
		   0x0110A514:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A51C
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0110A518:  5D43F9EB     BL $-0x1af284
		   // ──── Block 18 if (!=) ────────────────────
		   0x0110A51C:  0500A0E1     MOV r0, r5
		   0x0110A520:  0010A0E3     MOV r1, 0x0
		   0x0110A524:  0020A0E3     MOV r2, 0x0
		   0x0110A528:  9169FCEB     BL $-0xe59b4
		   0x0110A52C:  000050E3     CMPS r0, r0, 0x0
		   0x0110A530:  1D00000A     BEQ $+0x7c  // if (==) goto 0x0110A5AC
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x0110A534:  0400A0E1     MOV r0, r4
		   0x0110A538:  0010A0E3     MOV r1, 0x0
		   0x0110A53C:  5AB63BEB     BL $+0xeed970  // CALL → sub_1FF7EAC
		   0x0110A540:  104094E5     LDR r4, [r4, 0x10]
		   0x0110A544:  0050A0E1     MOV r5, r0
		   0x0110A548:  000054E3     CMPS r0, r4, 0x0
		   0x0110A54C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A554
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x0110A550:  9E43F9EB     BL $-0x1af180
		   // ──── Block 21 if (!=) ────────────────────
		   0x0110A554:  0400A0E1     MOV r0, r4
		   0x0110A558:  0010A0E3     MOV r1, 0x0
		   0x0110A55C:  52B63BEB     BL $+0xeed950  // CALL → sub_1FF7EAC
		   0x0110A560:  0040A0E1     MOV r4, r0
		   0x0110A564:  000050E3     CMPS r0, r0, 0x0
		   0x0110A568:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A570
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x0110A56C:  9743F9EB     BL $-0x1af19c
		   // ──── Block 23 if (!=) ────────────────────
		   0x0110A570:  04008DE2     ADD r0, sp, 0x4
		   0x0110A574:  0410A0E1     MOV r1, r4
		   0x0110A578:  0020A0E3     MOV r2, 0x0
		   0x0110A57C:  0080A0E3     MOV r8, 0x0
		   0x0110A580:  07B73BEB     BL $+0xeedc24  // CALL → sub_1FF81A4
		   0x0110A584:  D0009DE9     LDMIA sp, {r4, r6, r7}
		   0x0110A588:  000055E3     CMPS r0, r5, 0x0
		   0x0110A58C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A594
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x0110A590:  8E43F9EB     BL $-0x1af1c0
		   // ──── Block 25 if (!=) ────────────────────
		   0x0110A594:  0500A0E1     MOV r0, r5
		   0x0110A598:  0410A0E1     MOV r1, r4
		   0x0110A59C:  0620A0E1     MOV r2, r6
		   0x0110A5A0:  0730A0E1     MOV r3, r7
		   0x0110A5A4:  00808DE5     STR r8, [sp]
		   0x0110A5A8:  1CB73BEB     BL $+0xeedc78  // CALL → sub_1FF8220
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x0110A5AC:  10D08DE2     ADD sp, sp, 0x10
		   0x0110A5B0:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0110A5B4:  D4191203     TSTSEQ r1, r2, 0x350000
		   0x0110A5B8:  10C1F602     RSCSEQ ip, r6, 0x4
		   0x0110A5BC:  FCC0F602     RSCSEQ ip, r6, 0xfc
		*/
	}

	// RVA: 0x110A5C0 Offset: 0x110A5C0 VA: 0x110A5C0 Slot: 10
	public virtual void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 142 instructions, 0x238 bytes):
		   // CFG: 13 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110A5C0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110A5C4:  F8619FE5     LDR r6, [pc, 0x1f8]
		   0x0110A5C8:  0040A0E1     MOV r4, r0
		   0x0110A5CC:  0150A0E1     MOV r5, r1
		   0x0110A5D0:  06608FE0     ADD r6, pc, r6
		   0x0110A5D4:  0000D6E5     LDRB r0, [r6]
		   0x0110A5D8:  000050E3     CMPS r0, r0, 0x0
		   0x0110A5DC:  1300001A     BNE $+0x54  // if (!=) goto 0x0110A630
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110A5E0:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x0110A5E4:  00009FE7     LDR r0, [pc, r0]
		   0x0110A5E8:  DC42F9EB     BL $-0x1af488
		   0x0110A5EC:  D8019FE5     LDR r0, [pc, 0x1d8]
		   0x0110A5F0:  00009FE7     LDR r0, [pc, r0]
		   0x0110A5F4:  D942F9EB     BL $-0x1af494
		   0x0110A5F8:  D0019FE5     LDR r0, [pc, 0x1d0]
		   0x0110A5FC:  00009FE7     LDR r0, [pc, r0]
		   0x0110A600:  D642F9EB     BL $-0x1af4a0
		   0x0110A604:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x0110A608:  00009FE7     LDR r0, [pc, r0]
		   0x0110A60C:  D342F9EB     BL $-0x1af4ac
		   0x0110A610:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x0110A614:  00009FE7     LDR r0, [pc, r0]
		   0x0110A618:  D042F9EB     BL $-0x1af4b8
		   0x0110A61C:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x0110A620:  00009FE7     LDR r0, [pc, r0]
		   0x0110A624:  CD42F9EB     BL $-0x1af4c4
		   0x0110A628:  0100A0E3     MOV r0, 0x1
		   0x0110A62C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110A630:  0400A0E1     MOV r0, r4
		   0x0110A634:  0010A0E3     MOV r1, 0x0
		   0x0110A638:  0060A0E3     MOV r6, 0x0
		   0x0110A63C:  1AB63BEB     BL $+0xeed870  // CALL → sub_1FF7EAC
		   0x0110A640:  000050E3     CMPS r0, r0, 0x0
		   0x0110A644:  0010A0E3     MOV r1, 0x0
		   0x0110A648:  0600000A     BEQ $+0x20  // if (==) goto 0x0110A668
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110A64C:  8C119FE5     LDR r1, [pc, 0x18c]
		   0x0110A650:  01109FE7     LDR r1, [pc, r1]
		   0x0110A654:  002090E5     LDR r2, [r0]
		   0x0110A658:  001091E5     LDR r1, [r1]
		   0x0110A65C:  010052E1     CMPS r0, r2, r1
		   0x0110A660:  0000A013     MOVNE r0, 0x0
		   0x0110A664:  0010A0E1     MOV r1, r0
		   // ──── Block 4 if (==) ────────────────────
		   0x0110A668:  74019FE5     LDR r0, [pc, 0x174]
		   0x0110A66C:  00009FE7     LDR r0, [pc, r0]
		   0x0110A670:  781084E5     STR r1, [r4, 0x78]
		   0x0110A674:  0110A0E3     MOV r1, 0x1
		   0x0110A678:  845084E5     STR r5, [r4, 0x84]
		   0x0110A67C:  000090E5     LDR r0, [r0]
		   0x0110A680:  4110C4E5     STRB r1, [r4, 0x41]
		   0x0110A684:  3860C4E5     STRB r6, [r4, 0x38]
		   0x0110A688:  B063C4E1     STRH r6, [r4, 0x30]
		   0x0110A68C:  4C43F9EB     BL $-0x1af2c8
		   0x0110A690:  0060A0E1     MOV r6, r0
		   0x0110A694:  000094E5     LDR r0, [r4]
		   0x0110A698:  0410A0E1     MOV r1, r4
		   0x0110A69C:  0030A0E3     MOV r3, 0x0
		   0x0110A6A0:  7C2190E5     LDR r2, [r0, 0x17c]
		   0x0110A6A4:  0600A0E1     MOV r0, r6
		   0x0110A6A8:  E66F52EB     BL $+0x149bfa0  // CALL → Action<object>..ctor
		   0x0110A6AC:  000055E3     CMPS r0, r5, 0x0
		   0x0110A6B0:  0300000A     BEQ $+0x14  // if (==) goto 0x0110A6C4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110A6B4:  0500A0E1     MOV r0, r5
		   0x0110A6B8:  0610A0E1     MOV r1, r6
		   0x0110A6BC:  4D0000EB     BL $+0x13c  // CALL → ItemData.GetSprite
		   0x0110A6C0:  040000EA     B $+0x18  // goto 0x0110A6D8
		   // ──── Block 6 if (==) ────────────────────
		   0x0110A6C4:  4143F9EB     BL $-0x1af2f4
		   0x0110A6C8:  0000A0E3     MOV r0, 0x0
		   0x0110A6CC:  0610A0E1     MOV r1, r6
		   0x0110A6D0:  480000EB     BL $+0x128  // CALL → ItemData.GetSprite
		   0x0110A6D4:  3D43F9EB     BL $-0x1af304
		   // ──── Block 7 ──────────────────────────────
		   0x0110A6D8:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x0110A6DC:  000050E3     CMPS r0, r0, 0x0
		   0x0110A6E0:  3400000A     BEQ $+0xd8  // if (==) goto 0x0110A7B8
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0110A6E4:  FC609FE5     LDR r6, [pc, 0xfc]
		   0x0110A6E8:  06609FE7     LDR r6, [pc, r6]
		   0x0110A6EC:  000096E5     LDR r0, [r6]
		   0x0110A6F0:  3343F9EB     BL $-0x1af32c
		   0x0110A6F4:  F0809FE5     LDR r8, [pc, 0xf0]
		   0x0110A6F8:  0410A0E1     MOV r1, r4
		   0x0110A6FC:  0030A0E3     MOV r3, 0x0
		   0x0110A700:  0050A0E1     MOV r5, r0
		   0x0110A704:  08809FE7     LDR r8, [pc, r8]
		   0x0110A708:  002098E5     LDR r2, [r8]
		   0x0110A70C:  0C8B7AEB     BL $+0x1ea2c38  // CALL → Action..ctor
		   0x0110A710:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x0110A714:  00009FE7     LDR r0, [pc, r0]
		   0x0110A718:  000090E5     LDR r0, [r0]
		   0x0110A71C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A720:  000051E3     CMPS r0, r1, 0x0
		   0x0110A724:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A72C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110A728:  D942F9EB     BL $-0x1af494
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110A72C:  0500A0E1     MOV r0, r5
		   0x0110A730:  0010A0E3     MOV r1, 0x0
		   0x0110A734:  92770DEB     BL $+0x35de50  // CALL → Ads.remove_onShow
		   0x0110A738:  000096E5     LDR r0, [r6]
		   0x0110A73C:  2043F9EB     BL $-0x1af378
		   0x0110A740:  AC709FE5     LDR r7, [pc, 0xac]
		   0x0110A744:  0410A0E1     MOV r1, r4
		   0x0110A748:  0030A0E3     MOV r3, 0x0
		   0x0110A74C:  0050A0E1     MOV r5, r0
		   0x0110A750:  07709FE7     LDR r7, [pc, r7]
		   0x0110A754:  002097E5     LDR r2, [r7]
		   0x0110A758:  F98A7AEB     BL $+0x1ea2bec  // CALL → Action..ctor
		   0x0110A75C:  0500A0E1     MOV r0, r5
		   0x0110A760:  0010A0E3     MOV r1, 0x0
		   0x0110A764:  00780DEB     BL $+0x35e008  // CALL → Ads.remove_onHidden
		   0x0110A768:  000096E5     LDR r0, [r6]
		   0x0110A76C:  1443F9EB     BL $-0x1af3a8
		   0x0110A770:  002098E5     LDR r2, [r8]
		   0x0110A774:  0410A0E1     MOV r1, r4
		   0x0110A778:  0030A0E3     MOV r3, 0x0
		   0x0110A77C:  0050A0E1     MOV r5, r0
		   0x0110A780:  EF8A7AEB     BL $+0x1ea2bc4  // CALL → Action..ctor
		   0x0110A784:  0500A0E1     MOV r0, r5
		   0x0110A788:  0010A0E3     MOV r1, 0x0
		   0x0110A78C:  3F770DEB     BL $+0x35dd04  // CALL → Ads.add_onShow
		   0x0110A790:  000096E5     LDR r0, [r6]
		   0x0110A794:  0A43F9EB     BL $-0x1af3d0
		   0x0110A798:  002097E5     LDR r2, [r7]
		   0x0110A79C:  0410A0E1     MOV r1, r4
		   0x0110A7A0:  0030A0E3     MOV r3, 0x0
		   0x0110A7A4:  0050A0E1     MOV r5, r0
		   0x0110A7A8:  E58A7AEB     BL $+0x1ea2b9c  // CALL → Action..ctor
		   0x0110A7AC:  0500A0E1     MOV r0, r5
		   0x0110A7B0:  0010A0E3     MOV r1, 0x0
		   0x0110A7B4:  AF770DEB     BL $+0x35dec4  // CALL → Ads.add_onHidden
		   // ──── Block 11 if (==) ────────────────────
		   0x0110A7B8:  0400A0E1     MOV r0, r4
		   0x0110A7BC:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0110A7C0:  340000EA     B $+0xd8  // TAIL CALL → Item.CheckMaxLevel
		   0x0110A7C4:  19181203     TSTSEQ r1, r2, 0x190000
		   0x0110A7C8:  F8DEF602     RSCSEQ sp, r6, 0xf80
		   0x0110A7CC:  D4C2F602     RSCSEQ ip, r6, 0x4000000d
		   0x0110A7D0:  84D9F602     RSCSEQ sp, r6, 0x210000
		   0x0110A7D4:  08F3F602     RSCSEQ pc, r6, 0x20000000
		   0x0110A7D8:  00F3F602     RSCSEQ pc, r6, 0x0
		   0x0110A7DC:  40C9F602     RSCSEQ ip, r6, 0x100000
		   0x0110A7E0:  10C9F602     RSCSEQ ip, r6, 0x40000
		   0x0110A7E4:  70DEF602     RSCSEQ sp, r6, 0x700
		   0x0110A7E8:  DCC1F602     RSCSEQ ip, r6, 0x37
		   0x0110A7EC:  0CF2F602     RSCSEQ pc, r6, 0xc0000000
		   0x0110A7F0:  6CD8F602     RSCSEQ sp, r6, 0x6c0000
		   0x0110A7F4:  C4F1F602     RSCSEQ pc, r6, 0x31
		*/
	}

	// RVA: 0x110AA44 Offset: 0x110AA44 VA: 0x110AA44 Slot: 11
	public virtual void SetActiveBubble(bool isActive, int timer = 0, Action createCoin) {
		/* Disassembly (ARM32, 201 instructions, 0x324 bytes):
		   // CFG: 31 blocks, 31 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110AA44:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110AA48:  1CD04DE2     SUB sp, sp, 0x1c
		   0x0110AA4C:  F0629FE5     LDR r6, [pc, 0x2f0]
		   0x0110AA50:  0040A0E1     MOV r4, r0
		   0x0110AA54:  0380A0E1     MOV r8, r3
		   0x0110AA58:  02B0A0E1     MOV fp, r2
		   0x0110AA5C:  06608FE0     ADD r6, pc, r6
		   0x0110AA60:  0150A0E1     MOV r5, r1
		   0x0110AA64:  0000D6E5     LDRB r0, [r6]
		   0x0110AA68:  000050E3     CMPS r0, r0, 0x0
		   0x0110AA6C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110AAA8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110AA70:  D0029FE5     LDR r0, [pc, 0x2d0]
		   0x0110AA74:  00009FE7     LDR r0, [pc, r0]
		   0x0110AA78:  B841F9EB     BL $-0x1af918
		   0x0110AA7C:  C8029FE5     LDR r0, [pc, 0x2c8]
		   0x0110AA80:  00009FE7     LDR r0, [pc, r0]
		   0x0110AA84:  B541F9EB     BL $-0x1af924
		   0x0110AA88:  C0029FE5     LDR r0, [pc, 0x2c0]
		   0x0110AA8C:  00009FE7     LDR r0, [pc, r0]
		   0x0110AA90:  B241F9EB     BL $-0x1af930
		   0x0110AA94:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x0110AA98:  00009FE7     LDR r0, [pc, r0]
		   0x0110AA9C:  AF41F9EB     BL $-0x1af93c
		   0x0110AAA0:  0100A0E3     MOV r0, 0x1
		   0x0110AAA4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110AAA8:  000055E3     CMPS r0, r5, 0x0
		   0x0110AAAC:  5600000A     BEQ $+0x160  // if (==) goto 0x0110AC0C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110AAB0:  186094E5     LDR r6, [r4, 0x18]
		   0x0110AAB4:  000056E3     CMPS r0, r6, 0x0
		   0x0110AAB8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AAC0
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110AABC:  4342F9EB     BL $-0x1af6ec
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110AAC0:  0600A0E1     MOV r0, r6
		   0x0110AAC4:  0110A0E3     MOV r1, 0x1
		   0x0110AAC8:  0020A0E3     MOV r2, 0x0
		   0x0110AACC:  3AB53BEB     BL $+0xeed4f0  // CALL → sub_1FF7FBC
		   0x0110AAD0:  847094E5     LDR r7, [r4, 0x84]
		   0x0110AAD4:  000057E3     CMPS r0, r7, 0x0
		   0x0110AAD8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AAE0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110AADC:  3B42F9EB     BL $-0x1af70c
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110AAE0:  70629FE5     LDR r6, [pc, 0x270]
		   0x0110AAE4:  06609FE7     LDR r6, [pc, r6]
		   0x0110AAE8:  7450C7E5     STRB r5, [r7, 0x74]
		   0x0110AAEC:  000096E5     LDR r0, [r6]
		   0x0110AAF0:  3342F9EB     BL $-0x1af72c
		   0x0110AAF4:  60929FE5     LDR sb, [pc, 0x260]
		   0x0110AAF8:  0410A0E1     MOV r1, r4
		   0x0110AAFC:  0030A0E3     MOV r3, 0x0
		   0x0110AB00:  0050A0E1     MOV r5, r0
		   0x0110AB04:  09909FE7     LDR sb, [pc, sb]
		   0x0110AB08:  002099E5     LDR r2, [sb]
		   0x0110AB0C:  0C8A7AEB     BL $+0x1ea2838  // CALL → Action..ctor
		   0x0110AB10:  48029FE5     LDR r0, [pc, 0x248]
		   0x0110AB14:  00009FE7     LDR r0, [pc, r0]
		   0x0110AB18:  000090E5     LDR r0, [r0]
		   0x0110AB1C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110AB20:  000051E3     CMPS r0, r1, 0x0
		   0x0110AB24:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AB2C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110AB28:  D941F9EB     BL $-0x1af894
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110AB2C:  0500A0E1     MOV r0, r5
		   0x0110AB30:  0010A0E3     MOV r1, 0x0
		   0x0110AB34:  92760DEB     BL $+0x35da50  // CALL → Ads.remove_onShow
		   0x0110AB38:  000096E5     LDR r0, [r6]
		   0x0110AB3C:  2042F9EB     BL $-0x1af778
		   0x0110AB40:  1CA29FE5     LDR r10, [pc, 0x21c]
		   0x0110AB44:  0410A0E1     MOV r1, r4
		   0x0110AB48:  0030A0E3     MOV r3, 0x0
		   0x0110AB4C:  0050A0E1     MOV r5, r0
		   0x0110AB50:  0AA09FE7     LDR r10, [pc, r10]
		   0x0110AB54:  00209AE5     LDR r2, [r10]
		   0x0110AB58:  F9897AEB     BL $+0x1ea27ec  // CALL → Action..ctor
		   0x0110AB5C:  0500A0E1     MOV r0, r5
		   0x0110AB60:  0010A0E3     MOV r1, 0x0
		   0x0110AB64:  00770DEB     BL $+0x35dc08  // CALL → Ads.remove_onHidden
		   0x0110AB68:  000096E5     LDR r0, [r6]
		   0x0110AB6C:  1442F9EB     BL $-0x1af7a8
		   0x0110AB70:  002099E5     LDR r2, [sb]
		   0x0110AB74:  0410A0E1     MOV r1, r4
		   0x0110AB78:  0030A0E3     MOV r3, 0x0
		   0x0110AB7C:  0050A0E1     MOV r5, r0
		   0x0110AB80:  EF897AEB     BL $+0x1ea27c4  // CALL → Action..ctor
		   0x0110AB84:  0500A0E1     MOV r0, r5
		   0x0110AB88:  0010A0E3     MOV r1, 0x0
		   0x0110AB8C:  3F760DEB     BL $+0x35d904  // CALL → Ads.add_onShow
		   0x0110AB90:  000096E5     LDR r0, [r6]
		   0x0110AB94:  0A42F9EB     BL $-0x1af7d0
		   0x0110AB98:  00209AE5     LDR r2, [r10]
		   0x0110AB9C:  0410A0E1     MOV r1, r4
		   0x0110ABA0:  0030A0E3     MOV r3, 0x0
		   0x0110ABA4:  0050A0E1     MOV r5, r0
		   0x0110ABA8:  E5897AEB     BL $+0x1ea279c  // CALL → Action..ctor
		   0x0110ABAC:  0500A0E1     MOV r0, r5
		   0x0110ABB0:  0010A0E3     MOV r1, 0x0
		   0x0110ABB4:  AF760DEB     BL $+0x35dac4  // CALL → Ads.add_onHidden
		   0x0110ABB8:  340094E5     LDR r0, [r4, 0x34]
		   0x0110ABBC:  0010A0E3     MOV r1, 0x0
		   0x0110ABC0:  13C401EB     BL $+0x71054  // CALL → ProfileStorage.GetBubbleTimer
		   0x0110ABC4:  701094E5     LDR r1, [r4, 0x70]
		   0x0110ABC8:  000050E3     CMPS r0, r0, 0x0
		   0x0110ABCC:  00B0A011     MOVNE fp, r0
		   0x0110ABD0:  000051E3     CMPS r0, r1, 0x0
		   0x0110ABD4:  0200000A     BEQ $+0x10  // if (==) goto 0x0110ABE4
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x0110ABD8:  0400A0E1     MOV r0, r4
		   0x0110ABDC:  0020A0E3     MOV r2, 0x0
		   0x0110ABE0:  E0B43BEB     BL $+0xeed388  // CALL → sub_1FF7F68
		   // ──── Block 11 if (==) ────────────────────
		   0x0110ABE4:  0400A0E1     MOV r0, r4
		   0x0110ABE8:  0B10A0E1     MOV r1, fp
		   0x0110ABEC:  0820A0E1     MOV r2, r8
		   0x0110ABF0:  5C0000EB     BL $+0x178  // CALL → Item.StartBubbleTimer
		   0x0110ABF4:  0010A0E1     MOV r1, r0
		   0x0110ABF8:  0400A0E1     MOV r0, r4
		   0x0110ABFC:  0020A0E3     MOV r2, 0x0
		   0x0110AC00:  D9B43BEB     BL $+0xeed36c  // CALL → sub_1FF7F6C
		   0x0110AC04:  700084E5     STR r0, [r4, 0x70]
		   0x0110AC08:  4A0000EA     B $+0x130  // goto 0x0110AD38
		   // ──── Block 12 if (==) ────────────────────
		   0x0110AC0C:  740094E5     LDR r0, [r4, 0x74]
		   0x0110AC10:  0010A0E3     MOV r1, 0x0
		   0x0110AC14:  0020A0E3     MOV r2, 0x0
		   0x0110AC18:  EBAD0FEB     BL $+0x3eb7b4  // CALL → ExtensionMethods.SafeKill
		   0x0110AC1C:  186094E5     LDR r6, [r4, 0x18]
		   0x0110AC20:  000056E3     CMPS r0, r6, 0x0
		   0x0110AC24:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AC2C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110AC28:  E841F9EB     BL $-0x1af858
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110AC2C:  0600A0E1     MOV r0, r6
		   0x0110AC30:  0010A0E3     MOV r1, 0x0
		   0x0110AC34:  E6B43BEB     BL $+0xeed3a0  // CALL → sub_1FF7FD4
		   0x0110AC38:  000050E3     CMPS r0, r0, 0x0
		   0x0110AC3C:  2400000A     BEQ $+0x98  // if (==) goto 0x0110ACD4
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x0110AC40:  186094E5     LDR r6, [r4, 0x18]
		   0x0110AC44:  000056E3     CMPS r0, r6, 0x0
		   0x0110AC48:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AC50
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x0110AC4C:  DF41F9EB     BL $-0x1af87c
		   // ──── Block 17 if (!=) ────────────────────
		   0x0110AC50:  0600A0E1     MOV r0, r6
		   0x0110AC54:  0010A0E3     MOV r1, 0x0
		   0x0110AC58:  93B43BEB     BL $+0xeed254  // CALL → sub_1FF7EAC
		   0x0110AC5C:  0060A0E1     MOV r6, r0
		   0x0110AC60:  000050E3     CMPS r0, r0, 0x0
		   0x0110AC64:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AC6C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0110AC68:  D841F9EB     BL $-0x1af898
		   // ──── Block 19 if (!=) ────────────────────
		   0x0110AC6C:  10008DE2     ADD r0, sp, 0x10
		   0x0110AC70:  0610A0E1     MOV r1, r6
		   0x0110AC74:  0020A0E3     MOV r2, 0x0
		   0x0110AC78:  0090A0E3     MOV sb, 0x0
		   0x0110AC7C:  48B53BEB     BL $+0xeed528  // CALL → sub_1FF81A4
		   0x0110AC80:  106094E5     LDR r6, [r4, 0x10]
		   0x0110AC84:  10A09DE5     LDR r10, [sp, 0x10]
		   0x0110AC88:  14709DE5     LDR r7, [sp, 0x14]
		   0x0110AC8C:  000056E3     CMPS r0, r6, 0x0
		   0x0110AC90:  18809DE5     LDR r8, [sp, 0x18]
		   0x0110AC94:  0600A0E1     MOV r0, r6
		   0x0110AC98:  0300001A     BNE $+0x14  // if (!=) goto 0x0110ACAC
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x0110AC9C:  CB41F9EB     BL $-0x1af8cc
		   0x0110ACA0:  100094E5     LDR r0, [r4, 0x10]
		   0x0110ACA4:  000050E3     CMPS r0, r0, 0x0
		   0x0110ACA8:  2400000A     BEQ $+0x98  // if (==) goto 0x0110AD40
		   // 
		   // ──── Block 21 (from 2 paths) ──────────────────
		   0x0110ACAC:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x0110ACB0:  0720A0E1     MOV r2, r7
		   0x0110ACB4:  1C1096E5     LDR r1, [r6, 0x1c]
		   0x0110ACB8:  0830A0E1     MOV r3, r8
		   0x0110ACBC:  00108DE5     STR r1, [sp]
		   0x0110ACC0:  0A10A0E1     MOV r1, r10
		   0x0110ACC4:  01028DE9     STMIA sp, {r0, sb}
		   0x0110ACC8:  0300A0E3     MOV r0, 0x3
		   0x0110ACCC:  0C908DE5     STR sb, [sp, 0xc]
		   0x0110ACD0:  8BD2FFEB     BL $-0xb5cc
		   // ──── Block 22 if (==) ────────────────────
		   0x0110ACD4:  186094E5     LDR r6, [r4, 0x18]
		   0x0110ACD8:  000056E3     CMPS r0, r6, 0x0
		   0x0110ACDC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110ACE4
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x0110ACE0:  BA41F9EB     BL $-0x1af910
		   // ──── Block 24 if (!=) ────────────────────
		   0x0110ACE4:  0600A0E1     MOV r0, r6
		   0x0110ACE8:  0010A0E3     MOV r1, 0x0
		   0x0110ACEC:  0020A0E3     MOV r2, 0x0
		   0x0110ACF0:  B1B43BEB     BL $+0xeed2cc  // CALL → sub_1FF7FBC
		   0x0110ACF4:  846094E5     LDR r6, [r4, 0x84]
		   0x0110ACF8:  000056E3     CMPS r0, r6, 0x0
		   0x0110ACFC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AD04
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x0110AD00:  B241F9EB     BL $-0x1af930
		   // ──── Block 26 if (!=) ────────────────────
		   0x0110AD04:  701094E5     LDR r1, [r4, 0x70]
		   0x0110AD08:  7450C6E5     STRB r5, [r6, 0x74]
		   0x0110AD0C:  000051E3     CMPS r0, r1, 0x0
		   0x0110AD10:  0400000A     BEQ $+0x18  // if (==) goto 0x0110AD28
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x0110AD14:  0400A0E1     MOV r0, r4
		   0x0110AD18:  0020A0E3     MOV r2, 0x0
		   0x0110AD1C:  0050A0E3     MOV r5, 0x0
		   0x0110AD20:  90B43BEB     BL $+0xeed248  // CALL → sub_1FF7F68
		   0x0110AD24:  705084E5     STR r5, [r4, 0x70]
		   // ──── Block 28 if (==) ────────────────────
		   0x0110AD28:  340094E5     LDR r0, [r4, 0x34]
		   0x0110AD2C:  0010A0E3     MOV r1, 0x0
		   0x0110AD30:  0020A0E3     MOV r2, 0x0
		   0x0110AD34:  85C301EB     BL $+0x70e1c  // CALL → ProfileStorage.SetBubbleTimer
		   // ──── Block 29 ──────────────────────────────
		   0x0110AD38:  1CD08DE2     ADD sp, sp, 0x1c
		   0x0110AD3C:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 30 if (==) ────────────────────
		   0x0110AD40:  A241F9EB     BL $-0x1af970
		   0x0110AD44:  8E131203     TSTSEQ r1, r2, 0x38000002
		   0x0110AD48:  50BEF602     RSCSEQ fp, r6, 0x500
		   0x0110AD4C:  00D5F602     RSCSEQ sp, r6, 0x0
		   0x0110AD50:  84EEF602     RSCSEQ lr, r6, 0x840
		   0x0110AD54:  7CEEF602     RSCSEQ lr, r6, 0x7c0
		   0x0110AD58:  E0BDF602     RSCSEQ fp, r6, 0x3800
		   0x0110AD5C:  0CEEF602     RSCSEQ lr, r6, 0xc0
		   0x0110AD60:  6CD4F602     RSCSEQ sp, r6, 0x6c000000
		   0x0110AD64:  C4EDF602     RSCSEQ lr, r6, 0x3100
		*/
	}

	// RVA: 0x110ADE4 Offset: 0x110ADE4 VA: 0x110ADE4
	public void HideBubble() {
		/* Disassembly (ARM32, 101 instructions, 0x194 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110ADE4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110ADE8:  64519FE5     LDR r5, [pc, 0x164]
		   0x0110ADEC:  0040A0E1     MOV r4, r0
		   0x0110ADF0:  05508FE0     ADD r5, pc, r5
		   0x0110ADF4:  0000D5E5     LDRB r0, [r5]
		   0x0110ADF8:  000050E3     CMPS r0, r0, 0x0
		   0x0110ADFC:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110AE38
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110AE00:  50019FE5     LDR r0, [pc, 0x150]
		   0x0110AE04:  00009FE7     LDR r0, [pc, r0]
		   0x0110AE08:  D440F9EB     BL $-0x1afca8
		   0x0110AE0C:  48019FE5     LDR r0, [pc, 0x148]
		   0x0110AE10:  00009FE7     LDR r0, [pc, r0]
		   0x0110AE14:  D140F9EB     BL $-0x1afcb4
		   0x0110AE18:  40019FE5     LDR r0, [pc, 0x140]
		   0x0110AE1C:  00009FE7     LDR r0, [pc, r0]
		   0x0110AE20:  CE40F9EB     BL $-0x1afcc0
		   0x0110AE24:  38019FE5     LDR r0, [pc, 0x138]
		   0x0110AE28:  00009FE7     LDR r0, [pc, r0]
		   0x0110AE2C:  CB40F9EB     BL $-0x1afccc
		   0x0110AE30:  0100A0E3     MOV r0, 0x1
		   0x0110AE34:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110AE38:  845094E5     LDR r5, [r4, 0x84]
		   0x0110AE3C:  000055E3     CMPS r0, r5, 0x0
		   0x0110AE40:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AE48
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110AE44:  6141F9EB     BL $-0x1afa74
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110AE48:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x0110AE4C:  000050E3     CMPS r0, r0, 0x0
		   0x0110AE50:  3E00000A     BEQ $+0x100  // if (==) goto 0x0110AF50
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110AE54:  0C619FE5     LDR r6, [pc, 0x10c]
		   0x0110AE58:  06609FE7     LDR r6, [pc, r6]
		   0x0110AE5C:  000096E5     LDR r0, [r6]
		   0x0110AE60:  5741F9EB     BL $-0x1afa9c
		   0x0110AE64:  0050A0E1     MOV r5, r0
		   0x0110AE68:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x0110AE6C:  0410A0E1     MOV r1, r4
		   0x0110AE70:  0030A0E3     MOV r3, 0x0
		   0x0110AE74:  00009FE7     LDR r0, [pc, r0]
		   0x0110AE78:  002090E5     LDR r2, [r0]
		   0x0110AE7C:  0500A0E1     MOV r0, r5
		   0x0110AE80:  2F897AEB     BL $+0x1ea24c4  // CALL → Action..ctor
		   0x0110AE84:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x0110AE88:  00009FE7     LDR r0, [pc, r0]
		   0x0110AE8C:  000090E5     LDR r0, [r0]
		   0x0110AE90:  741090E5     LDR r1, [r0, 0x74]
		   0x0110AE94:  000051E3     CMPS r0, r1, 0x0
		   0x0110AE98:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AEA0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110AE9C:  FC40F9EB     BL $-0x1afc08
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110AEA0:  0500A0E1     MOV r0, r5
		   0x0110AEA4:  0010A0E3     MOV r1, 0x0
		   0x0110AEA8:  0070A0E3     MOV r7, 0x0
		   0x0110AEAC:  B4750DEB     BL $+0x35d6d8  // CALL → Ads.remove_onShow
		   0x0110AEB0:  000096E5     LDR r0, [r6]
		   0x0110AEB4:  4241F9EB     BL $-0x1afaf0
		   0x0110AEB8:  0050A0E1     MOV r5, r0
		   0x0110AEBC:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x0110AEC0:  0410A0E1     MOV r1, r4
		   0x0110AEC4:  0030A0E3     MOV r3, 0x0
		   0x0110AEC8:  00009FE7     LDR r0, [pc, r0]
		   0x0110AECC:  002090E5     LDR r2, [r0]
		   0x0110AED0:  0500A0E1     MOV r0, r5
		   0x0110AED4:  1A897AEB     BL $+0x1ea2470  // CALL → Action..ctor
		   0x0110AED8:  0500A0E1     MOV r0, r5
		   0x0110AEDC:  0010A0E3     MOV r1, 0x0
		   0x0110AEE0:  21760DEB     BL $+0x35d88c  // CALL → Ads.remove_onHidden
		   0x0110AEE4:  701094E5     LDR r1, [r4, 0x70]
		   0x0110AEE8:  000051E3     CMPS r0, r1, 0x0
		   0x0110AEEC:  0300000A     BEQ $+0x14  // if (==) goto 0x0110AF00
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0110AEF0:  0400A0E1     MOV r0, r4
		   0x0110AEF4:  0020A0E3     MOV r2, 0x0
		   0x0110AEF8:  1AB43BEB     BL $+0xeed070  // CALL → sub_1FF7F68
		   0x0110AEFC:  707084E5     STR r7, [r4, 0x70]
		   // ──── Block 9 if (==) ────────────────────
		   0x0110AF00:  740094E5     LDR r0, [r4, 0x74]
		   0x0110AF04:  0010A0E3     MOV r1, 0x0
		   0x0110AF08:  0020A0E3     MOV r2, 0x0
		   0x0110AF0C:  2EAD0FEB     BL $+0x3eb4c0  // CALL → ExtensionMethods.SafeKill
		   0x0110AF10:  0400A0E1     MOV r0, r4
		   0x0110AF14:  170000EB     BL $+0x64  // CALL → Item.UnsubscribeBubble
		   0x0110AF18:  185094E5     LDR r5, [r4, 0x18]
		   0x0110AF1C:  000055E3     CMPS r0, r5, 0x0
		   0x0110AF20:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AF28
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110AF24:  2941F9EB     BL $-0x1afb54
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110AF28:  0500A0E1     MOV r0, r5
		   0x0110AF2C:  0010A0E3     MOV r1, 0x0
		   0x0110AF30:  0020A0E3     MOV r2, 0x0
		   0x0110AF34:  0060A0E3     MOV r6, 0x0
		   0x0110AF38:  1FB43BEB     BL $+0xeed084  // CALL → sub_1FF7FBC
		   0x0110AF3C:  844094E5     LDR r4, [r4, 0x84]
		   0x0110AF40:  000054E3     CMPS r0, r4, 0x0
		   0x0110AF44:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AF4C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0110AF48:  2041F9EB     BL $-0x1afb78
		   // ──── Block 13 if (!=) ────────────────────
		   0x0110AF4C:  7460C4E5     STRB r6, [r4, 0x74]
		   // ──── Block 14 if (==) ────────────────────
		   0x0110AF50:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0110AF54:  FB0F1203     TSTSEQ r0, r2, 0x3ec
		   0x0110AF58:  C0BAF602     RSCSEQ fp, r6, 0xc0000
		   0x0110AF5C:  70D1F602     RSCSEQ sp, r6, 0x1c
		   0x0110AF60:  F4EAF602     RSCSEQ lr, r6, 0xf4000
		   0x0110AF64:  ECEAF602     RSCSEQ lr, r6, 0xec000
		   0x0110AF68:  6CBAF602     RSCSEQ fp, r6, 0x6c000
		   0x0110AF6C:  9CEAF602     RSCSEQ lr, r6, 0x9c000
		   0x0110AF70:  F8D0F602     RSCSEQ sp, r6, 0xf8
		   0x0110AF74:  4CEAF602     RSCSEQ lr, r6, 0x4c000
		*/
	}

	// RVA: 0x110B09C Offset: 0x110B09C VA: 0x110B09C
	public void StopBubbleTimer() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B09C:  701090E5     LDR r1, [r0, 0x70]
		   0x0110B0A0:  000051E3     CMPS r0, r1, 0x0
		   0x0110B0A4:  1EFF2F01     BXEQ lr
		   0x0110B0A8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110B0AC:  0020A0E3     MOV r2, 0x0
		   0x0110B0B0:  0040A0E1     MOV r4, r0
		   0x0110B0B4:  0050A0E3     MOV r5, 0x0
		   0x0110B0B8:  AAB33BEB     BL $+0xeeceb0  // CALL → sub_1FF7F68
		   0x0110B0BC:  705084E5     STR r5, [r4, 0x70]
		   0x0110B0C0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110B0C4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110B0C8 Offset: 0x110B0C8 VA: 0x110B0C8 Slot: 12
	public virtual void SetLockedState(bool isLocked) {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B0C8:  000051E3     CMPS r0, r1, 0x0
		   0x0110B0CC:  3810C0E5     STRB r1, [r0, 0x38]
		   0x0110B0D0:  1EFF2F01     BXEQ lr
		   0x0110B0D4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110B0D8:  1C5090E5     LDR r5, [r0, 0x1c]
		   0x0110B0DC:  0040A0E1     MOV r4, r0
		   0x0110B0E0:  000055E3     CMPS r0, r5, 0x0
		   0x0110B0E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B0EC
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x0110B0E8:  B840F9EB     BL $-0x1afd18
		   // ──── Block 3 if (!=) ────────────────────
		   0x0110B0EC:  0500A0E1     MOV r0, r5
		   0x0110B0F0:  0110A0E3     MOV r1, 0x1
		   0x0110B0F4:  0020A0E3     MOV r2, 0x0
		   0x0110B0F8:  AFB33BEB     BL $+0xeecec4  // CALL → sub_1FF7FBC
		   0x0110B0FC:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x0110B100:  2C6094E5     LDR r6, [r4, 0x2c]
		   0x0110B104:  000055E3     CMPS r0, r5, 0x0
		   0x0110B108:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B110
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110B10C:  AF40F9EB     BL $-0x1afd3c
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110B110:  0500A0E1     MOV r0, r5
		   0x0110B114:  0610A0E1     MOV r1, r6
		   0x0110B118:  0020A0E3     MOV r2, 0x0
		   0x0110B11C:  8CB33BEB     BL $+0xeece38  // CALL → sub_1FF7F54
		   0x0110B120:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x0110B124:  000055E3     CMPS r0, r5, 0x0
		   0x0110B128:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B130
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110B12C:  A740F9EB     BL $-0x1afd5c
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110B130:  000095E5     LDR r0, [r5]
		   0x0110B134:  282290E5     LDR r2, [r0, 0x228]
		   0x0110B138:  2C1290E5     LDR r1, [r0, 0x22c]
		   0x0110B13C:  0500A0E1     MOV r0, r5
		   0x0110B140:  32FF2FE1     BLX r2  // virtual call: vtable+0x228
		   0x0110B144:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x0110B148:  000055E3     CMPS r0, r5, 0x0
		   0x0110B14C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B154
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110B150:  9E40F9EB     BL $-0x1afd80
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110B154:  0500A0E1     MOV r0, r5
		   0x0110B158:  0010A0E3     MOV r1, 0x0
		   0x0110B15C:  34B43BEB     BL $+0xeed0d8  // CALL → sub_1FF8234
		   0x0110B160:  104094E5     LDR r4, [r4, 0x10]
		   0x0110B164:  0050A0E1     MOV r5, r0
		   0x0110B168:  000054E3     CMPS r0, r4, 0x0
		   0x0110B16C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B174
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110B170:  9640F9EB     BL $-0x1afda0
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110B174:  2C1094E5     LDR r1, [r4, 0x2c]
		   0x0110B178:  0500A0E1     MOV r0, r5
		   0x0110B17C:  0020A0E3     MOV r2, 0x0
		   0x0110B180:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110B184:  05AB0FEA     B $+0x3eac1c  // TAIL CALL → ExtensionMethods.MultiplySize
		*/
	}

	// RVA: 0x110B188 Offset: 0x110B188 VA: 0x110B188 Slot: 13
	public virtual void SetGoalCheck(bool isChecked) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 9 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B188:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110B18C:  84609FE5     LDR r6, [pc, 0x84]
		   0x0110B190:  0050A0E1     MOV r5, r0
		   0x0110B194:  0140A0E1     MOV r4, r1
		   0x0110B198:  06608FE0     ADD r6, pc, r6
		   0x0110B19C:  0000D6E5     LDRB r0, [r6]
		   0x0110B1A0:  000050E3     CMPS r0, r0, 0x0
		   0x0110B1A4:  0400001A     BNE $+0x18  // if (!=) goto 0x0110B1BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110B1A8:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x0110B1AC:  00009FE7     LDR r0, [pc, r0]
		   0x0110B1B0:  EA3FF9EB     BL $-0x1b0050
		   0x0110B1B4:  0100A0E3     MOV r0, 0x1
		   0x0110B1B8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110B1BC:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x0110B1C0:  00009FE7     LDR r0, [pc, r0]
		   0x0110B1C4:  206095E5     LDR r6, [r5, 0x20]
		   0x0110B1C8:  3940C5E5     STRB r4, [r5, 0x39]
		   0x0110B1CC:  000090E5     LDR r0, [r0]
		   0x0110B1D0:  741090E5     LDR r1, [r0, 0x74]
		   0x0110B1D4:  000051E3     CMPS r0, r1, 0x0
		   0x0110B1D8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B1E0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110B1DC:  2C40F9EB     BL $-0x1aff48
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110B1E0:  0600A0E1     MOV r0, r6
		   0x0110B1E4:  0010A0E3     MOV r1, 0x0
		   0x0110B1E8:  03B43BEB     BL $+0xeed014  // CALL → sub_1FF81FC
		   0x0110B1EC:  000050E3     CMPS r0, r0, 0x0
		   0x0110B1F0:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x0110B1F4:  205095E5     LDR r5, [r5, 0x20]
		   0x0110B1F8:  000055E3     CMPS r0, r5, 0x0
		   0x0110B1FC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B204
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110B200:  7240F9EB     BL $-0x1afe30
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110B204:  0500A0E1     MOV r0, r5
		   0x0110B208:  0410A0E1     MOV r1, r4
		   0x0110B20C:  0020A0E3     MOV r2, 0x0
		   0x0110B210:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110B214:  68B33BEA     B $+0xeecda8
		   0x0110B218:  540C1203     TSTSEQ r0, r2, 0x5400
		   0x0110B21C:  8CB3F602     RSCSEQ fp, r6, 0x30000002
		   0x0110B220:  78B3F602     RSCSEQ fp, r6, 0xe0000001
		*/
	}

	// RVA: 0x110B224 Offset: 0x110B224 VA: 0x110B224 Slot: 14
	public virtual void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 5 instructions, 0x14 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110B224:  00482DE9     PUSH {fp, lr}
		   0x0110B228:  08D04DE2     SUB sp, sp, 0x8
		   0x0110B22C:  010000EB     BL $+0xc  // CALL → Item.BaseSelect
		   0x0110B230:  08D08DE2     ADD sp, sp, 0x8
		   0x0110B234:  0088BDE8     POP {fp, pc}
		*/
	}

	// RVA: 0x110B434 Offset: 0x110B434 VA: 0x110B434
	public Vector2 GetPosition() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B434:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110B438:  08D04DE2     SUB sp, sp, 0x8
		   0x0110B43C:  785091E5     LDR r5, [r1, 0x78]
		   0x0110B440:  0040A0E1     MOV r4, r0
		   0x0110B444:  000055E3     CMPS r0, r5, 0x0
		   0x0110B448:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B450
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110B44C:  DF3FF9EB     BL $-0x1b007c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110B450:  0D00A0E1     MOV r0, sp
		   0x0110B454:  0510A0E1     MOV r1, r5
		   0x0110B458:  0020A0E3     MOV r2, 0x0
		   0x0110B45C:  B4B23BEB     BL $+0xeecad8  // CALL → sub_1FF7F34
		   0x0110B460:  03009DE8     LDM sp, {r0, r1}
		   0x0110B464:  F000C4E1     STRD r0, r1, [r4]
		   0x0110B468:  08D08DE2     ADD sp, sp, 0x8
		   0x0110B46C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x110B470 Offset: 0x110B470 VA: 0x110B470
	public void SetPosition(Vector2 newPosition) {
		/* Disassembly (ARM32, 13 instructions, 0x34 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B470:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110B474:  786090E5     LDR r6, [r0, 0x78]
		   0x0110B478:  0240A0E1     MOV r4, r2
		   0x0110B47C:  0150A0E1     MOV r5, r1
		   0x0110B480:  000056E3     CMPS r0, r6, 0x0
		   0x0110B484:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B48C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110B488:  D03FF9EB     BL $-0x1b00b8
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110B48C:  0600A0E1     MOV r0, r6
		   0x0110B490:  0510A0E1     MOV r1, r5
		   0x0110B494:  0420A0E1     MOV r2, r4
		   0x0110B498:  0030A0E3     MOV r3, 0x0
		   0x0110B49C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110B4A0:  A2B23BEA     B $+0xeeca90
		*/
	}

	// RVA: 0x110B4A4 Offset: 0x110B4A4 VA: 0x110B4A4
	public void ResetPosition() {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B4A4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110B4A8:  10D04DE2     SUB sp, sp, 0x10
		   0x0110B4AC:  D8409FE5     LDR r4, [pc, 0xd8]
		   0x0110B4B0:  0050A0E1     MOV r5, r0
		   0x0110B4B4:  04408FE0     ADD r4, pc, r4
		   0x0110B4B8:  0000D4E5     LDRB r0, [r4]
		   0x0110B4BC:  000050E3     CMPS r0, r0, 0x0
		   0x0110B4C0:  0400001A     BNE $+0x18  // if (!=) goto 0x0110B4D8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110B4C4:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0110B4C8:  00009FE7     LDR r0, [pc, r0]
		   0x0110B4CC:  233FF9EB     BL $-0x1b036c
		   0x0110B4D0:  0100A0E3     MOV r0, 0x1
		   0x0110B4D4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110B4D8:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x0110B4DC:  00009FE7     LDR r0, [pc, r0]
		   0x0110B4E0:  104095E5     LDR r4, [r5, 0x10]
		   0x0110B4E4:  000090E5     LDR r0, [r0]
		   0x0110B4E8:  741090E5     LDR r1, [r0, 0x74]
		   0x0110B4EC:  000051E3     CMPS r0, r1, 0x0
		   0x0110B4F0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B4F8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110B4F4:  663FF9EB     BL $-0x1b0260
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110B4F8:  0400A0E1     MOV r0, r4
		   0x0110B4FC:  0010A0E3     MOV r1, 0x0
		   0x0110B500:  3DB33BEB     BL $+0xeeccfc  // CALL → sub_1FF81FC
		   0x0110B504:  000050E3     CMPS r0, r0, 0x0
		   0x0110B508:  1D00000A     BEQ $+0x7c  // if (==) goto 0x0110B584
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110B50C:  0500A0E1     MOV r0, r5
		   0x0110B510:  0010A0E3     MOV r1, 0x0
		   0x0110B514:  64B23BEB     BL $+0xeec998  // CALL → sub_1FF7EAC
		   0x0110B518:  105095E5     LDR r5, [r5, 0x10]
		   0x0110B51C:  0040A0E1     MOV r4, r0
		   0x0110B520:  000055E3     CMPS r0, r5, 0x0
		   0x0110B524:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B52C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110B528:  A83FF9EB     BL $-0x1b0158
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110B52C:  0500A0E1     MOV r0, r5
		   0x0110B530:  0010A0E3     MOV r1, 0x0
		   0x0110B534:  5CB23BEB     BL $+0xeec978  // CALL → sub_1FF7EAC
		   0x0110B538:  0050A0E1     MOV r5, r0
		   0x0110B53C:  000050E3     CMPS r0, r0, 0x0
		   0x0110B540:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B548
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110B544:  A13FF9EB     BL $-0x1b0174
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110B548:  04008DE2     ADD r0, sp, 0x4
		   0x0110B54C:  0510A0E1     MOV r1, r5
		   0x0110B550:  0020A0E3     MOV r2, 0x0
		   0x0110B554:  0080A0E3     MOV r8, 0x0
		   0x0110B558:  11B33BEB     BL $+0xeecc4c  // CALL → sub_1FF81A4
		   0x0110B55C:  E0009DE9     LDMIA sp, {r5, r6, r7}
		   0x0110B560:  000054E3     CMPS r0, r4, 0x0
		   0x0110B564:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B56C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110B568:  983FF9EB     BL $-0x1b0198
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110B56C:  0400A0E1     MOV r0, r4
		   0x0110B570:  0510A0E1     MOV r1, r5
		   0x0110B574:  0620A0E1     MOV r2, r6
		   0x0110B578:  0730A0E1     MOV r3, r7
		   0x0110B57C:  00808DE5     STR r8, [sp]
		   0x0110B580:  26B33BEB     BL $+0xeecca0  // CALL → sub_1FF8220
		   // ──── Block 12 if (==) ────────────────────
		   0x0110B584:  10D08DE2     ADD sp, sp, 0x10
		   0x0110B588:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0110B58C:  39091203     TSTSEQ r0, r2, 0xe4000
		   0x0110B590:  70B0F602     RSCSEQ fp, r6, 0x70
		   0x0110B594:  5CB0F602     RSCSEQ fp, r6, 0x5c
		*/
	}

	// RVA: 0x110B598 Offset: 0x110B598 VA: 0x110B598
	public void SetTransparency(float alpha) {
		/* Disassembly (ARM32, 5 instructions, 0x14 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110B598:  140090E5     LDR r0, [r0, 0x14]
		   0x0110B59C:  CD2C0CE3     MOV r2, 0xcccd
		   0x0110B5A0:  4C2E43E3     MOVT r2, 0x3e4c
		   0x0110B5A4:  0030A0E3     MOV r3, 0x0
		   0x0110B5A8:  7C5012EA     B $+0x4941f8  // TAIL CALL → DOTweenModuleUI.DOFade
		*/
	}

	// RVA: 0x110B5AC Offset: 0x110B5AC VA: 0x110B5AC Slot: 15
	public virtual void SetSuggestedMerge(bool suggest, Action soundCall) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110B5AC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110B5B0:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x110BBEC Offset: 0x110BBEC VA: 0x110BBEC
	public void Pop(bool pop) {
		/* Disassembly (ARM32, 113 instructions, 0x1C4 bytes):
		   // CFG: 27 blocks, 25 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110BBEC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110BBF0:  08D04DE2     SUB sp, sp, 0x8
		   0x0110BBF4:  9C619FE5     LDR r6, [pc, 0x19c]
		   0x0110BBF8:  0040A0E1     MOV r4, r0
		   0x0110BBFC:  0150A0E1     MOV r5, r1
		   0x0110BC00:  06608FE0     ADD r6, pc, r6
		   0x0110BC04:  0000D6E5     LDRB r0, [r6]
		   0x0110BC08:  000050E3     CMPS r0, r0, 0x0
		   0x0110BC0C:  0400001A     BNE $+0x18  // if (!=) goto 0x0110BC24
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110BC10:  84019FE5     LDR r0, [pc, 0x184]
		   0x0110BC14:  00009FE7     LDR r0, [pc, r0]
		   0x0110BC18:  503DF9EB     BL $-0x1b0ab8
		   0x0110BC1C:  0100A0E3     MOV r0, 0x1
		   0x0110BC20:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110BC24:  74719FE5     LDR r7, [pc, 0x174]
		   0x0110BC28:  07709FE7     LDR r7, [pc, r7]
		   0x0110BC2C:  106094E5     LDR r6, [r4, 0x10]
		   0x0110BC30:  000097E5     LDR r0, [r7]
		   0x0110BC34:  741090E5     LDR r1, [r0, 0x74]
		   0x0110BC38:  000051E3     CMPS r0, r1, 0x0
		   0x0110BC3C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BC44
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110BC40:  933DF9EB     BL $-0x1b09ac
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110BC44:  0600A0E1     MOV r0, r6
		   0x0110BC48:  0010A0E3     MOV r1, 0x0
		   0x0110BC4C:  0020A0E3     MOV r2, 0x0
		   0x0110BC50:  91B03BEB     BL $+0xeec24c  // CALL → sub_1FF7E9C
		   0x0110BC54:  000050E3     CMPS r0, r0, 0x0
		   0x0110BC58:  4C00001A     BNE $+0x138  // if (!=) goto 0x0110BD90
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110BC5C:  106094E5     LDR r6, [r4, 0x10]
		   0x0110BC60:  000055E3     CMPS r0, r5, 0x0
		   0x0110BC64:  0400000A     BEQ $+0x18  // if (==) goto 0x0110BC7C
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x0110BC68:  000056E3     CMPS r0, r6, 0x0
		   0x0110BC6C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BC74
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110BC70:  D63DF9EB     BL $-0x1b08a0
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110BC74:  1C0086E2     ADD r0, r6, 0x1c
		   0x0110BC78:  030000EA     B $+0x14  // goto 0x0110BC8C
		   // ──── Block 9 if (==) ────────────────────
		   0x0110BC7C:  000056E3     CMPS r0, r6, 0x0
		   0x0110BC80:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BC88
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110BC84:  D13DF9EB     BL $-0x1b08b4
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110BC88:  200086E2     ADD r0, r6, 0x20
		   // ──── Block 12 ──────────────────────────────
		   0x0110BC8C:  005090E5     LDR r5, [r0]
		   0x0110BC90:  0400A0E1     MOV r0, r4
		   0x0110BC94:  0010A0E3     MOV r1, 0x0
		   0x0110BC98:  83B03BEB     BL $+0xeec214  // CALL → sub_1FF7EAC
		   0x0110BC9C:  0060A0E1     MOV r6, r0
		   0x0110BCA0:  000050E3     CMPS r0, r0, 0x0
		   0x0110BCA4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BCAC
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110BCA8:  C83DF9EB     BL $-0x1b08d8
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110BCAC:  0600A0E1     MOV r0, r6
		   0x0110BCB0:  0010A0E3     MOV r1, 0x0
		   0x0110BCB4:  2FB13BEB     BL $+0xeec4c4  // CALL → sub_1FF8178
		   0x0110BCB8:  0060A0E1     MOV r6, r0
		   0x0110BCBC:  000097E5     LDR r0, [r7]
		   0x0110BCC0:  741090E5     LDR r1, [r0, 0x74]
		   0x0110BCC4:  000051E3     CMPS r0, r1, 0x0
		   0x0110BCC8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BCD0
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0110BCCC:  703DF9EB     BL $-0x1b0a38
		   // ──── Block 16 if (!=) ────────────────────
		   0x0110BCD0:  0600A0E1     MOV r0, r6
		   0x0110BCD4:  0510A0E1     MOV r1, r5
		   0x0110BCD8:  0020A0E3     MOV r2, 0x0
		   0x0110BCDC:  A463FCEB     BL $-0xe7168
		   0x0110BCE0:  000050E3     CMPS r0, r0, 0x0
		   0x0110BCE4:  0B00000A     BEQ $+0x34  // if (==) goto 0x0110BD18
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x0110BCE8:  0400A0E1     MOV r0, r4
		   0x0110BCEC:  0010A0E3     MOV r1, 0x0
		   0x0110BCF0:  6DB03BEB     BL $+0xeec1bc  // CALL → sub_1FF7EAC
		   0x0110BCF4:  0060A0E1     MOV r6, r0
		   0x0110BCF8:  000050E3     CMPS r0, r0, 0x0
		   0x0110BCFC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BD04
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0110BD00:  B23DF9EB     BL $-0x1b0930
		   // ──── Block 19 if (!=) ────────────────────
		   0x0110BD04:  0600A0E1     MOV r0, r6
		   0x0110BD08:  0510A0E1     MOV r1, r5
		   0x0110BD0C:  0120A0E3     MOV r2, 0x1
		   0x0110BD10:  0030A0E3     MOV r3, 0x0
		   0x0110BD14:  56B13BEB     BL $+0xeec560  // CALL → sub_1FF8274
		   // ──── Block 20 if (==) ────────────────────
		   0x0110BD18:  0400A0E1     MOV r0, r4
		   0x0110BD1C:  0010A0E3     MOV r1, 0x0
		   0x0110BD20:  61B03BEB     BL $+0xeec18c  // CALL → sub_1FF7EAC
		   0x0110BD24:  78509FE5     LDR r5, [pc, 0x78]
		   0x0110BD28:  0040A0E1     MOV r4, r0
		   0x0110BD2C:  05508FE0     ADD r5, pc, r5
		   0x0110BD30:  0000D5E5     LDRB r0, [r5]
		   0x0110BD34:  000050E3     CMPS r0, r0, 0x0
		   0x0110BD38:  0400001A     BNE $+0x18  // if (!=) goto 0x0110BD50
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0110BD3C:  64009FE5     LDR r0, [pc, 0x64]
		   0x0110BD40:  00009FE7     LDR r0, [pc, r0]
		   0x0110BD44:  053DF9EB     BL $-0x1b0be4
		   0x0110BD48:  0100A0E3     MOV r0, 0x1
		   0x0110BD4C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 22 if (!=) ────────────────────
		   0x0110BD50:  54009FE5     LDR r0, [pc, 0x54]
		   0x0110BD54:  000054E3     CMPS r0, r4, 0x0
		   0x0110BD58:  00009FE7     LDR r0, [pc, r0]
		   0x0110BD5C:  000090E5     LDR r0, [r0]
		   0x0110BD60:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110BD64:  0C7080E2     ADD r7, r0, 0xc
		   0x0110BD68:  E00097E8     LDM r7, {r5, r6, r7}
		   0x0110BD6C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110BD74
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x0110BD70:  963DF9EB     BL $-0x1b09a0
		   // ──── Block 24 if (!=) ────────────────────
		   0x0110BD74:  0000A0E3     MOV r0, 0x0
		   0x0110BD78:  0510A0E1     MOV r1, r5
		   0x0110BD7C:  00008DE5     STR r0, [sp]
		   0x0110BD80:  0400A0E1     MOV r0, r4
		   0x0110BD84:  0620A0E1     MOV r2, r6
		   0x0110BD88:  0730A0E1     MOV r3, r7
		   0x0110BD8C:  F7B03BEB     BL $+0xeec3e4  // CALL → sub_1FF8170
		   // ──── Block 25 if (!=) ────────────────────
		   0x0110BD90:  08D08DE2     ADD sp, sp, 0x8
		   0x0110BD94:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0110BD98:  EF011203     TSTSEQ r0, r2, 0xc000003b
		   0x0110BD9C:  24A9F602     RSCSEQ r10, r6, 0x90000
		   0x0110BDA0:  10A9F602     RSCSEQ r10, r6, 0x40000
		   0x0110BDA4:  87FE1103     TSTSEQ pc, r1, 0x870
		   0x0110BDA8:  F0B6F602     RSCSEQ fp, r6, 0xf000000
		   0x0110BDAC:  D8B6F602     RSCSEQ fp, r6, 0xd800000
		*/
	}

	// RVA: 0x110BDB0 Offset: 0x110BDB0 VA: 0x110BDB0 Slot: 16
	public virtual void StartSpawnFx(Nullable<Vector2> sourcePos) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110BDB0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110BDB4:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x110C3DC Offset: 0x110C3DC VA: 0x110C3DC
	public void StartBubbleFx() {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110C3DC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0110C3E0:  08D04DE2     SUB sp, sp, 0x8
		   0x0110C3E4:  20529FE5     LDR r5, [pc, 0x220]
		   0x0110C3E8:  0040A0E1     MOV r4, r0
		   0x0110C3EC:  05508FE0     ADD r5, pc, r5
		   0x0110C3F0:  0000D5E5     LDRB r0, [r5]
		   0x0110C3F4:  000050E3     CMPS r0, r0, 0x0
		   0x0110C3F8:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110C428
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110C3FC:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x0110C400:  00009FE7     LDR r0, [pc, r0]
		   0x0110C404:  553BF9EB     BL $-0x1b12a4
		   0x0110C408:  04029FE5     LDR r0, [pc, 0x204]
		   0x0110C40C:  00009FE7     LDR r0, [pc, r0]
		   0x0110C410:  523BF9EB     BL $-0x1b12b0
		   0x0110C414:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x0110C418:  00009FE7     LDR r0, [pc, r0]
		   0x0110C41C:  4F3BF9EB     BL $-0x1b12bc
		   0x0110C420:  0100A0E3     MOV r0, 0x1
		   0x0110C424:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110C428:  185094E5     LDR r5, [r4, 0x18]
		   0x0110C42C:  000055E3     CMPS r0, r5, 0x0
		   0x0110C430:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C438
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110C434:  E53BF9EB     BL $-0x1b1064
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110C438:  0500A0E1     MOV r0, r5
		   0x0110C43C:  0010A0E3     MOV r1, 0x0
		   0x0110C440:  E3AE3BEB     BL $+0xeebb94  // CALL → sub_1FF7FD4
		   0x0110C444:  000050E3     CMPS r0, r0, 0x0
		   0x0110C448:  6C00000A     BEQ $+0x1b8
		   0x0110C44C:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x0110C450:  00009FE7     LDR r0, [pc, r0]
		   0x0110C454:  000090E5     LDR r0, [r0]
		   0x0110C458:  741090E5     LDR r1, [r0, 0x74]
		   0x0110C45C:  000051E3     CMPS r0, r1, 0x0
		   0x0110C460:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C468
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110C464:  8A3BF9EB     BL $-0x1b11d0
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110C468:  0000A0E3     MOV r0, 0x0
		   0x0110C46C:  BAE111EB     BL $+0x4786f0  // CALL → DOTween.Sequence
		   0x0110C470:  186094E5     LDR r6, [r4, 0x18]
		   0x0110C474:  0050A0E1     MOV r5, r0
		   0x0110C478:  740084E5     STR r0, [r4, 0x74]
		   0x0110C47C:  000056E3     CMPS r0, r6, 0x0
		   0x0110C480:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C488
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110C484:  D13BF9EB     BL $-0x1b10b4
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110C488:  0600A0E1     MOV r0, r6
		   0x0110C48C:  0010A0E3     MOV r1, 0x0
		   0x0110C490:  0090A0E3     MOV sb, 0x0
		   0x0110C494:  84AE3BEB     BL $+0xeeba18  // CALL → sub_1FF7EAC
		   0x0110C498:  80719FE5     LDR r7, [pc, 0x180]
		   0x0110C49C:  0060A0E1     MOV r6, r0
		   0x0110C4A0:  07708FE0     ADD r7, pc, r7
		   0x0110C4A4:  0000D7E5     LDRB r0, [r7]
		   0x0110C4A8:  000050E3     CMPS r0, r0, 0x0
		   0x0110C4AC:  0400001A     BNE $+0x18  // if (!=) goto 0x0110C4C4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110C4B0:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x0110C4B4:  00009FE7     LDR r0, [pc, r0]
		   0x0110C4B8:  283BF9EB     BL $-0x1b1358
		   0x0110C4BC:  0100A0E3     MOV r0, 0x1
		   0x0110C4C0:  0000C7E5     STRB r0, [r7]
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110C4C4:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x0110C4C8:  0181A0E3     MOV r8, 0x40000000
		*/
	}

	// RVA: 0x110C634 Offset: 0x110C634 VA: 0x110C634
	public void SetupGetFreeCellAroundDelegate(Func<Cell, Cell> GetCell) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110C634:  481080E5     STR r1, [r0, 0x48]
		   0x0110C638:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110C63C Offset: 0x110C63C VA: 0x110C63C
	public void SetupGetFreeCellDelegate(Func<Vector2, Cell, Cell> GetFreeCellDelegate) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110C63C:  441080E5     STR r1, [r0, 0x44]
		   0x0110C640:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110C644 Offset: 0x110C644 VA: 0x110C644 Slot: 17
	public virtual void AnimatePlacing(Cell target, Action callback) {
		/* Disassembly (ARM32, 127 instructions, 0x1FC bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110C644:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110C648:  18D04DE2     SUB sp, sp, 0x18
		   0x0110C64C:  B8419FE5     LDR r4, [pc, 0x1b8]
		   0x0110C650:  0060A0E1     MOV r6, r0
		   0x0110C654:  0270A0E1     MOV r7, r2
		   0x0110C658:  0150A0E1     MOV r5, r1
		   0x0110C65C:  04408FE0     ADD r4, pc, r4
		   0x0110C660:  0000D4E5     LDRB r0, [r4]
		   0x0110C664:  000050E3     CMPS r0, r0, 0x0
		   0x0110C668:  1300001A     BNE $+0x54  // if (!=) goto 0x0110C6BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110C66C:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x0110C670:  00009FE7     LDR r0, [pc, r0]
		   0x0110C674:  B93AF9EB     BL $-0x1b1514
		   0x0110C678:  94019FE5     LDR r0, [pc, 0x194]
		   0x0110C67C:  00009FE7     LDR r0, [pc, r0]
		   0x0110C680:  B63AF9EB     BL $-0x1b1520
		   0x0110C684:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x0110C688:  00009FE7     LDR r0, [pc, r0]
		   0x0110C68C:  B33AF9EB     BL $-0x1b152c
		   0x0110C690:  84019FE5     LDR r0, [pc, 0x184]
		   0x0110C694:  00009FE7     LDR r0, [pc, r0]
		   0x0110C698:  B03AF9EB     BL $-0x1b1538
		   0x0110C69C:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x0110C6A0:  00009FE7     LDR r0, [pc, r0]
		   0x0110C6A4:  AD3AF9EB     BL $-0x1b1544
		   0x0110C6A8:  74019FE5     LDR r0, [pc, 0x174]
		   0x0110C6AC:  00009FE7     LDR r0, [pc, r0]
		   0x0110C6B0:  AA3AF9EB     BL $-0x1b1550
		   0x0110C6B4:  0100A0E3     MOV r0, 0x1
		   0x0110C6B8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110C6BC:  64019FE5     LDR r0, [pc, 0x164]
		   0x0110C6C0:  00009FE7     LDR r0, [pc, r0]
		   0x0110C6C4:  000090E5     LDR r0, [r0]
		   0x0110C6C8:  3D3BF9EB     BL $-0x1b1304
		   0x0110C6CC:  0010A0E3     MOV r1, 0x0
		   0x0110C6D0:  0040A0E1     MOV r4, r0
		   0x0110C6D4:  44237EEB     BL $+0x1f88d18  // CALL → Object..ctor
		   0x0110C6D8:  000054E3     CMPS r0, r4, 0x0
		   0x0110C6DC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C6E4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110C6E0:  3A3BF9EB     BL $-0x1b1310
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110C6E4:  0100A0E3     MOV r0, 0x1
		   0x0110C6E8:  0010A0E3     MOV r1, 0x0
		   0x0110C6EC:  3000C6E5     STRB r0, [r6, 0x30]
		   0x0110C6F0:  0600A0E1     MOV r0, r6
		   0x0110C6F4:  F860C4E1     STRD r6, r7, [r4, 0x8]
		   0x0110C6F8:  EBAD3BEB     BL $+0xeeb7b4  // CALL → sub_1FF7EAC
		   0x0110C6FC:  0110A0E3     MOV r1, 0x1
		   0x0110C700:  0020A0E3     MOV r2, 0x0
		   0x0110C704:  FD2C12EB     BL $+0x48b3fc  // CALL → ShortcutExtensions.DOKill
		   0x0110C708:  0600A0E1     MOV r0, r6
		   0x0110C70C:  0010A0E3     MOV r1, 0x0
		   0x0110C710:  E5AD3BEB     BL $+0xeeb79c  // CALL → sub_1FF7EAC
		   0x0110C714:  0080A0E1     MOV r8, r0
		   0x0110C718:  000055E3     CMPS r0, r5, 0x0
		   0x0110C71C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C724
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110C720:  2A3BF9EB     BL $-0x1b1350
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110C724:  0500A0E1     MOV r0, r5
		   0x0110C728:  0010A0E3     MOV r1, 0x0
		   0x0110C72C:  DEAD3BEB     BL $+0xeeb780  // CALL → sub_1FF7EAC
		   0x0110C730:  0050A0E1     MOV r5, r0
		   0x0110C734:  000050E3     CMPS r0, r0, 0x0
		   0x0110C738:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C740
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110C73C:  233BF9EB     BL $-0x1b136c
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110C740:  0C008DE2     ADD r0, sp, 0xc
		   0x0110C744:  0510A0E1     MOV r1, r5
		   0x0110C748:  0020A0E3     MOV r2, 0x0
		   0x0110C74C:  0090A0E3     MOV sb, 0x0
		   0x0110C750:  93AE3BEB     BL $+0xeeba54  // CALL → sub_1FF81A4
		   0x0110C754:  D0A09FE5     LDR r10, [pc, 0xd0]
		   0x0110C758:  0AA09FE7     LDR r10, [pc, r10]
		   0x0110C75C:  0C509DE5     LDR r5, [sp, 0xc]
		   0x0110C760:  10709DE5     LDR r7, [sp, 0x10]
		   0x0110C764:  00009AE5     LDR r0, [r10]
		   0x0110C768:  14609DE5     LDR r6, [sp, 0x14]
		   0x0110C76C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110C770:  000051E3     CMPS r0, r1, 0x0
		   0x0110C774:  0100001A     BNE $+0xc  // if (!=) goto 0x0110C780
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110C778:  C53AF9EB     BL $-0x1b14e4
		   0x0110C77C:  00009AE5     LDR r0, [r10]
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110C780:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110C784:  0510A0E1     MOV r1, r5
		   0x0110C788:  0720A0E1     MOV r2, r7
		   0x0110C78C:  0630A0E1     MOV r3, r6
		   0x0110C790:  000090E5     LDR r0, [r0]
		   0x0110C794:  08908DE5     STR sb, [sp, 0x8]
		   0x0110C798:  01028DE8     STM sp, {r0, sb}
		   0x0110C79C:  0800A0E1     MOV r0, r8
		   0x0110C7A0:  921112EB     BL $+0x484650  // CALL → ShortcutExtensions.DOMove
		   0x0110C7A4:  84109FE5     LDR r1, [pc, 0x84]
		   0x0110C7A8:  01109FE7     LDR r1, [pc, r1]
		   0x0110C7AC:  002091E5     LDR r2, [r1]
		   0x0110C7B0:  1510A0E3     MOV r1, 0x15
		   0x0110C7B4:  3BA927EB     BL $+0x9ea4f4  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x0110C7B8:  0050A0E1     MOV r5, r0
		   0x0110C7BC:  70009FE5     LDR r0, [pc, 0x70]
		   0x0110C7C0:  00009FE7     LDR r0, [pc, r0]
		   0x0110C7C4:  000090E5     LDR r0, [r0]
		   0x0110C7C8:  FD3AF9EB     BL $-0x1b1404
		   0x0110C7CC:  0060A0E1     MOV r6, r0
		   0x0110C7D0:  60009FE5     LDR r0, [pc, 0x60]
		   0x0110C7D4:  0410A0E1     MOV r1, r4
		   0x0110C7D8:  0030A0E3     MOV r3, 0x0
		   0x0110C7DC:  00009FE7     LDR r0, [pc, r0]
		   0x0110C7E0:  002090E5     LDR r2, [r0]
		   0x0110C7E4:  0600A0E1     MOV r0, r6
		   0x0110C7E8:  C1D111EB     BL $+0x47470c  // CALL → TweenCallback..ctor
		   0x0110C7EC:  48009FE5     LDR r0, [pc, 0x48]
		   0x0110C7F0:  0610A0E1     MOV r1, r6
		   0x0110C7F4:  00009FE7     LDR r0, [pc, r0]
		   0x0110C7F8:  002090E5     LDR r2, [r0]
		   0x0110C7FC:  0500A0E1     MOV r0, r5
		   0x0110C800:  77A727EB     BL $+0x9e9de4  // CALL → TweenSettingsExtensions.OnComplete<object>
		   0x0110C804:  18D08DE2     ADD sp, sp, 0x18
		   0x0110C808:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0110C80C:  96F71103     TSTSEQ pc, r1, 0x2580000
		   0x0110C810:  2CCFF602     RSCSEQ ip, r6, 0xb0
		   0x0110C814:  30B0F602     RSCSEQ fp, r6, 0x30
		   0x0110C818:  A0BFF602     RSCSEQ fp, r6, 0x280
		   0x0110C81C:  04B5F602     RSCSEQ fp, r6, 0x1000000
		   0x0110C820:  A0D2F602     RSCSEQ sp, r6, 0xa
		   0x0110C824:  98D2F602     RSCSEQ sp, r6, 0x80000009
		   0x0110C828:  84D2F602     RSCSEQ sp, r6, 0x40000008
		   0x0110C82C:  44CEF602     RSCSEQ ip, r6, 0x440
		   0x0110C830:  F0B3F602     RSCSEQ fp, r6, 0xc0000003
		   0x0110C834:  ECAEF602     RSCSEQ r10, r6, 0xec0
		   0x0110C838:  64D1F602     RSCSEQ sp, r6, 0x19
		   0x0110C83C:  34BEF602     RSCSEQ fp, r6, 0x340
		*/
	}

	// RVA: 0x11086A0 Offset: 0x11086A0 VA: 0x11086A0 Slot: 18
	public virtual void PreDispose() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011086A0:  10402DE9     PUSH {r4, lr}
		   0x011086A4:  0040A0E1     MOV r4, r0
		   0x011086A8:  000090E5     LDR r0, [r0]
		   0x011086AC:  582190E5     LDR r2, [r0, 0x158]
		   0x011086B0:  5C1190E5     LDR r1, [r0, 0x15c]
		   0x011086B4:  0400A0E1     MOV r0, r4
		   0x011086B8:  32FF2FE1     BLX r2  // virtual call: vtable+0x158
		   0x011086BC:  000094E5     LDR r0, [r4]
		   0x011086C0:  602190E5     LDR r2, [r0, 0x160]
		   0x011086C4:  641190E5     LDR r1, [r0, 0x164]
		   0x011086C8:  0400A0E1     MOV r0, r4
		   0x011086CC:  32FF2FE1     BLX r2  // virtual call: vtable+0x160
		   0x011086D0:  0400A0E1     MOV r0, r4
		   0x011086D4:  1040BDE8     POP {r4, lr}
		   0x011086D8:  260A00EA     B $+0x28a0  // TAIL CALL → Item.UnsubscribeBubble
		*/
	}

	// RVA: 0x110C848 Offset: 0x110C848 VA: 0x110C848 Slot: 19
	protected virtual void ReleaseTimers() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110C848:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110C84C Offset: 0x110C84C VA: 0x110C84C Slot: 20
	public virtual void RemoveTweensCorotines() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110C84C:  600090E5     LDR r0, [r0, 0x60]
		   0x0110C850:  0010A0E3     MOV r1, 0x0
		   0x0110C854:  0020A0E3     MOV r2, 0x0
		   0x0110C858:  DBA60FEA     B $+0x3e9b74  // TAIL CALL → ExtensionMethods.SafeKill
		*/
	}

	// RVA: 0x110C85C Offset: 0x110C85C VA: 0x110C85C Slot: 21
	public virtual void DestroyWithAnim(Vector3 mergePos) {
		/* Disassembly (ARM32, 141 instructions, 0x234 bytes):
		   // CFG: 12 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110C85C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110C860:  24D04DE2     SUB sp, sp, 0x24
		   0x0110C864:  FC519FE5     LDR r5, [pc, 0x1fc]
		   0x0110C868:  0040A0E1     MOV r4, r0
		   0x0110C86C:  0390A0E1     MOV sb, r3
		   0x0110C870:  02A0A0E1     MOV r10, r2
		   0x0110C874:  05508FE0     ADD r5, pc, r5
		   0x0110C878:  0170A0E1     MOV r7, r1
		   0x0110C87C:  0000D5E5     LDRB r0, [r5]
		   0x0110C880:  000050E3     CMPS r0, r0, 0x0
		   0x0110C884:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110C8B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110C888:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x0110C88C:  00009FE7     LDR r0, [pc, r0]
		   0x0110C890:  323AF9EB     BL $-0x1b1730
		   0x0110C894:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x0110C898:  00009FE7     LDR r0, [pc, r0]
		   0x0110C89C:  2F3AF9EB     BL $-0x1b173c
		   0x0110C8A0:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x0110C8A4:  00009FE7     LDR r0, [pc, r0]
		   0x0110C8A8:  2C3AF9EB     BL $-0x1b1748
		   0x0110C8AC:  0100A0E3     MOV r0, 0x1
		   0x0110C8B0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110C8B4:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x0110C8B8:  0010A0E3     MOV r1, 0x0
		   0x0110C8BC:  4110C4E5     STRB r1, [r4, 0x41]
		   0x0110C8C0:  000050E3     CMPS r0, r0, 0x0
		   0x0110C8C4:  2000000A     BEQ $+0x88  // if (==) goto 0x0110C94C
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110C8C8:  0400A0E1     MOV r0, r4
		   0x0110C8CC:  14708DE5     STR r7, [sp, 0x14]
		   0x0110C8D0:  75AD3BEB     BL $+0xeeb5dc  // CALL → sub_1FF7EAC
		   0x0110C8D4:  0050A0E1     MOV r5, r0
		   0x0110C8D8:  000050E3     CMPS r0, r0, 0x0
		   0x0110C8DC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110C8E4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110C8E0:  BA3AF9EB     BL $-0x1b1510
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110C8E4:  18008DE2     ADD r0, sp, 0x18
		   0x0110C8E8:  0510A0E1     MOV r1, r5
		   0x0110C8EC:  0020A0E3     MOV r2, 0x0
		   0x0110C8F0:  00B0A0E3     MOV fp, 0x0
		   0x0110C8F4:  2AAE3BEB     BL $+0xeeb8b0  // CALL → sub_1FF81A4
		   0x0110C8F8:  18708DE2     ADD r7, sp, 0x18
		   0x0110C8FC:  108094E5     LDR r8, [r4, 0x10]
		   0x0110C900:  E00097E8     LDM r7, {r5, r6, r7}
		   0x0110C904:  000058E3     CMPS r0, r8, 0x0
		   0x0110C908:  0800A0E1     MOV r0, r8
		   0x0110C90C:  0300001A     BNE $+0x14  // if (!=) goto 0x0110C920
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110C910:  AE3AF9EB     BL $-0x1b1540
		   0x0110C914:  100094E5     LDR r0, [r4, 0x10]
		   0x0110C918:  000050E3     CMPS r0, r0, 0x0
		   0x0110C91C:  5000000A     BEQ $+0x148  // if (==) goto 0x0110CA64
		   // 
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x0110C920:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x0110C924:  0620A0E1     MOV r2, r6
		   0x0110C928:  1C1098E5     LDR r1, [r8, 0x1c]
		   0x0110C92C:  0730A0E1     MOV r3, r7
		   0x0110C930:  00108DE5     STR r1, [sp]
		   0x0110C934:  0510A0E1     MOV r1, r5
		   0x0110C938:  01088DE9     STMIA sp, {r0, fp}
		   0x0110C93C:  0000A0E3     MOV r0, 0x0
		   0x0110C940:  0CB08DE5     STR fp, [sp, 0xc]
		   0x0110C944:  6ECBFFEB     BL $-0xd240
		   0x0110C948:  14709DE5     LDR r7, [sp, 0x14]
		   // ──── Block 8 if (==) ────────────────────
		   0x0110C94C:  0400A0E1     MOV r0, r4
		   0x0110C950:  0010A0E3     MOV r1, 0x0
		   0x0110C954:  00B0A0E3     MOV fp, 0x0
		   0x0110C958:  53AD3BEB     BL $+0xeeb554  // CALL → sub_1FF7EAC
		   0x0110C95C:  0010A0E3     MOV r1, 0x0
		   0x0110C960:  0020A0E3     MOV r2, 0x0
		   0x0110C964:  652C12EB     BL $+0x48b19c  // CALL → ShortcutExtensions.DOKill
		   0x0110C968:  0400A0E1     MOV r0, r4
		   0x0110C96C:  0010A0E3     MOV r1, 0x0
		   0x0110C970:  4DAD3BEB     BL $+0xeeb53c  // CALL → sub_1FF7EAC
		   0x0110C974:  FC609FE5     LDR r6, [pc, 0xfc]
		   0x0110C978:  0050A0E1     MOV r5, r0
		   0x0110C97C:  06608FE0     ADD r6, pc, r6
		   0x0110C980:  0000D6E5     LDRB r0, [r6]
		   0x0110C984:  000050E3     CMPS r0, r0, 0x0
		   0x0110C988:  0400001A     BNE $+0x18  // if (!=) goto 0x0110C9A0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110C98C:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x0110C990:  00009FE7     LDR r0, [pc, r0]
		   0x0110C994:  F139F9EB     BL $-0x1b1834
		   0x0110C998:  0100A0E3     MOV r0, 0x1
		   0x0110C99C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110C9A0:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x0110C9A4:  EC6105E3     MOV r6, 0x51ec
		   0x0110C9A8:  B86D43E3     MOVT r6, 0x3db8
		   0x0110C9AC:  00009FE7     LDR r0, [pc, r0]
		   0x0110C9B0:  000090E5     LDR r0, [r0]
		   0x0110C9B4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110C9B8:  0E0090E8     LDM r0, {r1, r2, r3}
		   0x0110C9BC:  0500A0E1     MOV r0, r5
		   0x0110C9C0:  40088DE8     STM sp, {r6, fp}
		   0x0110C9C4:  BE1612EB     BL $+0x485b00  // CALL → ShortcutExtensions.DOScale
		   0x0110C9C8:  B4509FE5     LDR r5, [pc, 0xb4]
		   0x0110C9CC:  1410A0E3     MOV r1, 0x14
		   0x0110C9D0:  05509FE7     LDR r5, [pc, r5]
		   0x0110C9D4:  002095E5     LDR r2, [r5]
		   0x0110C9D8:  B2A827EB     BL $+0x9ea2d0  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x0110C9DC:  0400A0E1     MOV r0, r4
		   0x0110C9E0:  0010A0E3     MOV r1, 0x0
		   0x0110C9E4:  30AD3BEB     BL $+0xeeb4c8  // CALL → sub_1FF7EAC
		   0x0110C9E8:  CD1C0CE3     MOV r1, 0xcccd
		   0x0110C9EC:  0A20A0E1     MOV r2, r10
		   0x0110C9F0:  CC1D43E3     MOVT r1, 0x3dcc
		   0x0110C9F4:  0930A0E1     MOV r3, sb
		   0x0110C9F8:  02088DE8     STM sp, {r1, fp}
		   0x0110C9FC:  0710A0E1     MOV r1, r7
		   0x0110CA00:  08B08DE5     STR fp, [sp, 0x8]
		   0x0110CA04:  F91012EB     BL $+0x4843ec  // CALL → ShortcutExtensions.DOMove
		   0x0110CA08:  002095E5     LDR r2, [r5]
		   0x0110CA0C:  1410A0E3     MOV r1, 0x14
		   0x0110CA10:  A4A827EB     BL $+0x9ea298  // CALL → TweenSettingsExtensions.SetEase<object>
		   0x0110CA14:  0050A0E1     MOV r5, r0
		   0x0110CA18:  68009FE5     LDR r0, [pc, 0x68]
		   0x0110CA1C:  00009FE7     LDR r0, [pc, r0]
		   0x0110CA20:  000090E5     LDR r0, [r0]
		   0x0110CA24:  663AF9EB     BL $-0x1b1660
		   0x0110CA28:  0060A0E1     MOV r6, r0
		   0x0110CA2C:  000094E5     LDR r0, [r4]
		   0x0110CA30:  0410A0E1     MOV r1, r4
		   0x0110CA34:  0030A0E3     MOV r3, 0x0
		   0x0110CA38:  742190E5     LDR r2, [r0, 0x174]
		   0x0110CA3C:  0600A0E1     MOV r0, r6
		   0x0110CA40:  2BD111EB     BL $+0x4744b4  // CALL → TweenCallback..ctor
		   0x0110CA44:  40009FE5     LDR r0, [pc, 0x40]
		   0x0110CA48:  0610A0E1     MOV r1, r6
		   0x0110CA4C:  00009FE7     LDR r0, [pc, r0]
		   0x0110CA50:  002090E5     LDR r2, [r0]
		   0x0110CA54:  0500A0E1     MOV r0, r5
		   0x0110CA58:  E1A627EB     BL $+0x9e9b8c  // CALL → TweenSettingsExtensions.OnComplete<object>
		   0x0110CA5C:  24D08DE2     ADD sp, sp, 0x24
		   0x0110CA60:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 11 if (==) ────────────────────
		   0x0110CA64:  593AF9EB     BL $-0x1b1694
		   0x0110CA68:  7FF51103     TSTSEQ pc, r1, 0x1fc00000
		   0x0110CA6C:  20AEF602     RSCSEQ r10, r6, 0x200
		   0x0110CA70:  90BDF602     RSCSEQ fp, r6, 0x2400
		   0x0110CA74:  F4B2F602     RSCSEQ fp, r6, 0x4000000f
		   0x0110CA78:  07F01103     TSTSEQ pc, r1, 0x7
		   0x0110CA7C:  A0AAF602     RSCSEQ r10, r6, 0xa0000
		   0x0110CA80:  84AAF602     RSCSEQ r10, r6, 0x84000
		   0x0110CA84:  C8B1F602     RSCSEQ fp, r6, 0x32
		   0x0110CA88:  90ACF602     RSCSEQ r10, r6, 0x9000
		   0x0110CA8C:  DCBBF602     RSCSEQ fp, r6, 0x37000
		*/
	}

	// RVA: 0x110CA90 Offset: 0x110CA90 VA: 0x110CA90 Slot: 22
	public virtual void ReturnToPool() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110CA90:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110CA94:  80509FE5     LDR r5, [pc, 0x80]
		   0x0110CA98:  0040A0E1     MOV r4, r0
		   0x0110CA9C:  05508FE0     ADD r5, pc, r5
		   0x0110CAA0:  0000D5E5     LDRB r0, [r5]
		   0x0110CAA4:  000050E3     CMPS r0, r0, 0x0
		   0x0110CAA8:  0400001A     BNE $+0x18  // if (!=) goto 0x0110CAC0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110CAAC:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x0110CAB0:  00009FE7     LDR r0, [pc, r0]
		   0x0110CAB4:  A939F9EB     BL $-0x1b1954
		   0x0110CAB8:  0100A0E3     MOV r0, 0x1
		   0x0110CABC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110CAC0:  000094E5     LDR r0, [r4]
		   0x0110CAC4:  602190E5     LDR r2, [r0, 0x160]
		   0x0110CAC8:  641190E5     LDR r1, [r0, 0x164]
		   0x0110CACC:  0000A0E3     MOV r0, 0x0
		   0x0110CAD0:  100084E5     STR r0, [r4, 0x10]  // vtable: Object.Equals
		   0x0110CAD4:  4100C4E5     STRB r0, [r4, 0x41]  // vtable: Object.Equals
		   0x0110CAD8:  0400A0E1     MOV r0, r4
		   0x0110CADC:  32FF2FE1     BLX r2  // virtual call: vtable+0x160
		   0x0110CAE0:  0400A0E1     MOV r0, r4
		   0x0110CAE4:  0010A0E3     MOV r1, 0x0
		   0x0110CAE8:  F0AC3BEB     BL $+0xeeb3c8  // CALL → sub_1FF7EB0
		   0x0110CAEC:  0040A0E1     MOV r4, r0
		   0x0110CAF0:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x0110CAF4:  00009FE7     LDR r0, [pc, r0]
		   0x0110CAF8:  000090E5     LDR r0, [r0]
		   0x0110CAFC:  741090E5     LDR r1, [r0, 0x74]
		   0x0110CB00:  000051E3     CMPS r0, r1, 0x0
		   0x0110CB04:  0000001A     BNE $+0x8  // if (!=) goto 0x0110CB0C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110CB08:  E139F9EB     BL $-0x1b1874
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110CB0C:  0400A0E1     MOV r0, r4
		   0x0110CB10:  0010A0E3     MOV r1, 0x0
		   0x0110CB14:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110CB18:  FAAC3BEA     B $+0xeeb3f0
		   0x0110CB1C:  58F31103     TSTSEQ pc, r1, 0x60000001
		   0x0110CB20:  889AF602     RSCSEQ sb, r6, 0x88000
		   0x0110CB24:  449AF602     RSCSEQ sb, r6, 0x44000
		*/
	}

	// RVA: 0x110AF78 Offset: 0x110AF78 VA: 0x110AF78
	private void UnsubscribeBubble() {
		/* Disassembly (ARM32, 73 instructions, 0x124 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110AF78:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110AF7C:  F4509FE5     LDR r5, [pc, 0xf4]
		   0x0110AF80:  0040A0E1     MOV r4, r0
		   0x0110AF84:  05508FE0     ADD r5, pc, r5
		   0x0110AF88:  0000D5E5     LDRB r0, [r5]
		   0x0110AF8C:  000050E3     CMPS r0, r0, 0x0
		   0x0110AF90:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110AFCC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110AF94:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x0110AF98:  00009FE7     LDR r0, [pc, r0]
		   0x0110AF9C:  6F40F9EB     BL $-0x1afe3c
		   0x0110AFA0:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x0110AFA4:  00009FE7     LDR r0, [pc, r0]
		   0x0110AFA8:  6C40F9EB     BL $-0x1afe48
		   0x0110AFAC:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x0110AFB0:  00009FE7     LDR r0, [pc, r0]
		   0x0110AFB4:  6940F9EB     BL $-0x1afe54
		   0x0110AFB8:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x0110AFBC:  00009FE7     LDR r0, [pc, r0]
		   0x0110AFC0:  6640F9EB     BL $-0x1afe60
		   0x0110AFC4:  0100A0E3     MOV r0, 0x1
		   0x0110AFC8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110AFCC:  840094E5     LDR r0, [r4, 0x84]
		   0x0110AFD0:  000050E3     CMPS r0, r0, 0x0
		   0x0110AFD4:  0200000A     BEQ $+0x10  // if (==) goto 0x0110AFE4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110AFD8:  7400D0E5     LDRB r0, [r0, 0x74]
		   0x0110AFDC:  000050E3     CMPS r0, r0, 0x0
		   0x0110AFE0:  2300000A     BEQ $+0x94  // if (==) goto 0x0110B074
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x0110AFE4:  A0609FE5     LDR r6, [pc, 0xa0]
		   0x0110AFE8:  06609FE7     LDR r6, [pc, r6]
		   0x0110AFEC:  000096E5     LDR r0, [r6]
		   0x0110AFF0:  F340F9EB     BL $-0x1afc2c
		   0x0110AFF4:  0050A0E1     MOV r5, r0
		   0x0110AFF8:  90009FE5     LDR r0, [pc, 0x90]
		   0x0110AFFC:  0410A0E1     MOV r1, r4
		   0x0110B000:  0030A0E3     MOV r3, 0x0
		   0x0110B004:  00009FE7     LDR r0, [pc, r0]
		   0x0110B008:  002090E5     LDR r2, [r0]
		   0x0110B00C:  0500A0E1     MOV r0, r5
		   0x0110B010:  CB887AEB     BL $+0x1ea2334  // CALL → Action..ctor
		   0x0110B014:  78009FE5     LDR r0, [pc, 0x78]
		   0x0110B018:  00009FE7     LDR r0, [pc, r0]
		   0x0110B01C:  000090E5     LDR r0, [r0]
		   0x0110B020:  741090E5     LDR r1, [r0, 0x74]
		   0x0110B024:  000051E3     CMPS r0, r1, 0x0
		   0x0110B028:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B030
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110B02C:  9840F9EB     BL $-0x1afd98
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110B030:  0500A0E1     MOV r0, r5
		   0x0110B034:  0010A0E3     MOV r1, 0x0
		   0x0110B038:  CB750DEB     BL $+0x35d734  // CALL → Ads.remove_onHidden
		   0x0110B03C:  000096E5     LDR r0, [r6]
		   0x0110B040:  DF40F9EB     BL $-0x1afc7c
		   0x0110B044:  0050A0E1     MOV r5, r0
		   0x0110B048:  48009FE5     LDR r0, [pc, 0x48]
		   0x0110B04C:  0410A0E1     MOV r1, r4
		   0x0110B050:  0030A0E3     MOV r3, 0x0
		   0x0110B054:  00009FE7     LDR r0, [pc, r0]
		   0x0110B058:  002090E5     LDR r2, [r0]
		   0x0110B05C:  0500A0E1     MOV r0, r5
		   0x0110B060:  B7887AEB     BL $+0x1ea22e4  // CALL → Action..ctor
		   0x0110B064:  0500A0E1     MOV r0, r5
		   0x0110B068:  0010A0E3     MOV r1, 0x0
		   0x0110B06C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110B070:  43750DEA     B $+0x35d514  // TAIL CALL → Ads.remove_onShow
		   // ──── Block 7 if (==) ────────────────────
		   0x0110B074:  7080BDE8     POP {r4, r5, r6, pc}
		   0x0110B078:  710E1203     TSTSEQ r0, r2, 0x710
		   0x0110B07C:  2CB9F602     RSCSEQ fp, r6, 0xb0000
		   0x0110B080:  DCCFF602     RSCSEQ ip, r6, 0x370
		   0x0110B084:  60E9F602     RSCSEQ lr, r6, 0x180000
		   0x0110B088:  58E9F602     RSCSEQ lr, r6, 0x160000
		   0x0110B08C:  DCB8F602     RSCSEQ fp, r6, 0xdc0000
		   0x0110B090:  10E9F602     RSCSEQ lr, r6, 0x40000
		   0x0110B094:  68CFF602     RSCSEQ ip, r6, 0x1a0
		   0x0110B098:  BCE8F602     RSCSEQ lr, r6, 0xbc0000
		*/
	}

	// RVA: 0x110CB28 Offset: 0x110CB28 VA: 0x110CB28
	public void AdaptAnimationForResolution() {
		/* Disassembly (ARM32, 56 instructions, 0xE0 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110CB28:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110CB2C:  B8509FE5     LDR r5, [pc, 0xb8]
		   0x0110CB30:  0040A0E1     MOV r4, r0
		   0x0110CB34:  05508FE0     ADD r5, pc, r5
		   0x0110CB38:  0000D5E5     LDRB r0, [r5]
		   0x0110CB3C:  000050E3     CMPS r0, r0, 0x0
		   0x0110CB40:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110CB70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110CB44:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x0110CB48:  00009FE7     LDR r0, [pc, r0]
		   0x0110CB4C:  8339F9EB     BL $-0x1b19ec
		   0x0110CB50:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x0110CB54:  00009FE7     LDR r0, [pc, r0]
		   0x0110CB58:  8039F9EB     BL $-0x1b19f8
		   0x0110CB5C:  94009FE5     LDR r0, [pc, 0x94]
		   0x0110CB60:  00009FE7     LDR r0, [pc, r0]
		   0x0110CB64:  7D39F9EB     BL $-0x1b1a04
		   0x0110CB68:  0100A0E3     MOV r0, 0x1
		   0x0110CB6C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110CB70:  84009FE5     LDR r0, [pc, 0x84]
		   0x0110CB74:  CD2C0CE3     MOV r2, 0xcccd
		   0x0110CB78:  4C2E43E3     MOVT r2, 0x3e4c
		   0x0110CB7C:  00009FE7     LDR r0, [pc, r0]
		   0x0110CB80:  000090E5     LDR r0, [r0]
		   0x0110CB84:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0110CB88:  70009FE5     LDR r0, [pc, 0x70]
		   0x0110CB8C:  00009FE7     LDR r0, [pc, r0]
		   0x0110CB90:  085091E5     LDR r5, [r1, 0x8]
		   0x0110CB94:  9A1909E3     MOV r1, 0x999a
		   0x0110CB98:  991F43E3     MOVT r1, 0x3f99
		   0x0110CB9C:  682084E5     STR r2, [r4, 0x68]
		   0x0110CBA0:  000090E5     LDR r0, [r0]
		   0x0110CBA4:  641084E5     STR r1, [r4, 0x64]
		   0x0110CBA8:  053AF9EB     BL $-0x1b17e4
		   0x0110CBAC:  0060A0E1     MOV r6, r0
		   0x0110CBB0:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x0110CBB4:  0410A0E1     MOV r1, r4
		   0x0110CBB8:  0030A0E3     MOV r3, 0x0
		   0x0110CBBC:  00009FE7     LDR r0, [pc, r0]
		   0x0110CBC0:  002090E5     LDR r2, [r0]
		   0x0110CBC4:  0600A0E1     MOV r0, r6
		   0x0110CBC8:  D05F52EB     BL $+0x1497f48  // CALL → Action<Int32Enum>..ctor
		   0x0110CBCC:  000055E3     CMPS r0, r5, 0x0
		   0x0110CBD0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110CBD8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110CBD4:  FD39F9EB     BL $-0x1b1804
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110CBD8:  0500A0E1     MOV r0, r5
		   0x0110CBDC:  0610A0E1     MOV r1, r6
		   0x0110CBE0:  0020A0E3     MOV r2, 0x0
		   0x0110CBE4:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110CBE8:  F2BC00EA     B $+0x2f3d0  // TAIL CALL → IPhoneXScale.add_onAspectRatioSelect
		   0x0110CBEC:  C2F21103     TSTSEQ pc, r1, 0x2000000c
		   0x0110CBF0:  00CEF602     RSCSEQ ip, r6, 0x0
		   0x0110CBF4:  6CC3F602     RSCSEQ ip, r6, 0xb0000001
		   0x0110CBF8:  ECCDF602     RSCSEQ ip, r6, 0x3b00
		   0x0110CBFC:  44C3F602     RSCSEQ ip, r6, 0x10000001
		   0x0110CC00:  BCCDF602     RSCSEQ ip, r6, 0x2f00
		   0x0110CC04:  90CDF602     RSCSEQ ip, r6, 0x2400
		*/
	}

	// RVA: 0x110CC08 Offset: 0x110CC08 VA: 0x110CC08
	public void TryToStartBackgroundAnimation() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110CC08:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x110CE14 Offset: 0x110CE14 VA: 0x110CE14
	public void TryToHideBackgroundAnimation() {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110CE14:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110CE18:  A0509FE5     LDR r5, [pc, 0xa0]
		   0x0110CE1C:  0040A0E1     MOV r4, r0
		   0x0110CE20:  05508FE0     ADD r5, pc, r5
		   0x0110CE24:  0000D5E5     LDRB r0, [r5]
		   0x0110CE28:  000050E3     CMPS r0, r0, 0x0
		   0x0110CE2C:  0700001A     BNE $+0x24  // if (!=) goto 0x0110CE50
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110CE30:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x0110CE34:  00009FE7     LDR r0, [pc, r0]
		   0x0110CE38:  C838F9EB     BL $-0x1b1cd8
		   0x0110CE3C:  84009FE5     LDR r0, [pc, 0x84]
		   0x0110CE40:  00009FE7     LDR r0, [pc, r0]
		   0x0110CE44:  C538F9EB     BL $-0x1b1ce4
		   0x0110CE48:  0100A0E3     MOV r0, 0x1
		   0x0110CE4C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110CE50:  74009FE5     LDR r0, [pc, 0x74]
		   0x0110CE54:  00009FE7     LDR r0, [pc, r0]
		   0x0110CE58:  805094E5     LDR r5, [r4, 0x80]
		   0x0110CE5C:  000090E5     LDR r0, [r0]
		   0x0110CE60:  741090E5     LDR r1, [r0, 0x74]
		   0x0110CE64:  000051E3     CMPS r0, r1, 0x0
		   0x0110CE68:  0000001A     BNE $+0x8  // if (!=) goto 0x0110CE70
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110CE6C:  0839F9EB     BL $-0x1b1bd8
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110CE70:  0500A0E1     MOV r0, r5
		   0x0110CE74:  0010A0E3     MOV r1, 0x0
		   0x0110CE78:  0020A0E3     MOV r2, 0x0
		   0x0110CE7C:  3C5FFCEB     BL $-0xe8308
		   0x0110CE80:  000050E3     CMPS r0, r0, 0x0
		   0x0110CE84:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x0110CE88:  40009FE5     LDR r0, [pc, 0x40]
		   0x0110CE8C:  00009FE7     LDR r0, [pc, r0]
		   0x0110CE90:  805094E5     LDR r5, [r4, 0x80]
		   0x0110CE94:  000090E5     LDR r0, [r0]
		   0x0110CE98:  741090E5     LDR r1, [r0, 0x74]
		   0x0110CE9C:  000051E3     CMPS r0, r1, 0x0
		   0x0110CEA0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110CEA8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110CEA4:  FA38F9EB     BL $-0x1b1c10
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110CEA8:  0500A0E1     MOV r0, r5
		   0x0110CEAC:  0010A0E3     MOV r1, 0x0
		   0x0110CEB0:  0060A0E3     MOV r6, 0x0
		   0x0110CEB4:  6C5710EB     BL $+0x415db8  // CALL → SpriteAnimationPool.ReturnToQueue
		   0x0110CEB8:  806084E5     STR r6, [r4, 0x80]
		   0x0110CEBC:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x110CED4 Offset: 0x110CED4 VA: 0x110CED4
	private void EndOfTheSpawnAnimation() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110CED4:  10402DE9     PUSH {r4, lr}
		   0x0110CED8:  0040A0E1     MOV r4, r0
		   0x0110CEDC:  3EFDFFEB     BL $-0xb00
		   0x0110CEE0:  0400A0E1     MOV r0, r4
		   0x0110CEE4:  0010A0E3     MOV r1, 0x0
		   0x0110CEE8:  3FFBFFEB     BL $-0x12fc
		   0x0110CEEC:  0400A0E1     MOV r0, r4
		   0x0110CEF0:  1040BDE8     POP {r4, lr}
		   0x0110CEF4:  6AF9FFEA     B $-0x1a50
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x110AD68 Offset: 0x110AD68 VA: 0x110AD68
	private IEnumerator StartBubbleTimer(int timer, Action createCoin) {
		/* Disassembly (ARM32, 31 instructions, 0x7C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110AD68:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110AD6C:  64709FE5     LDR r7, [pc, 0x64]
		   0x0110AD70:  0060A0E1     MOV r6, r0
		   0x0110AD74:  0240A0E1     MOV r4, r2
		   0x0110AD78:  0150A0E1     MOV r5, r1
		   0x0110AD7C:  07708FE0     ADD r7, pc, r7
		   0x0110AD80:  0000D7E5     LDRB r0, [r7]
		   0x0110AD84:  000050E3     CMPS r0, r0, 0x0
		   0x0110AD88:  0400001A     BNE $+0x18  // if (!=) goto 0x0110ADA0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110AD8C:  48009FE5     LDR r0, [pc, 0x48]
		   0x0110AD90:  00009FE7     LDR r0, [pc, r0]
		   0x0110AD94:  F140F9EB     BL $-0x1afc34
		   0x0110AD98:  0100A0E3     MOV r0, 0x1
		   0x0110AD9C:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110ADA0:  38009FE5     LDR r0, [pc, 0x38]
		   0x0110ADA4:  00009FE7     LDR r0, [pc, r0]
		   0x0110ADA8:  000090E5     LDR r0, [r0]
		   0x0110ADAC:  8441F9EB     BL $-0x1af9e8
		   0x0110ADB0:  0010A0E3     MOV r1, 0x0
		   0x0110ADB4:  0070A0E1     MOV r7, r0
		   0x0110ADB8:  0080A0E3     MOV r8, 0x0
		   0x0110ADBC:  8A297EEB     BL $+0x1f8a630  // CALL → Object..ctor
		   0x0110ADC0:  0700A0E1     MOV r0, r7
		   0x0110ADC4:  106087E5     STR r6, [r7, 0x10]
		   0x0110ADC8:  145087E5     STR r5, [r7, 0x14]
		   0x0110ADCC:  184087E5     STR r4, [r7, 0x18]
		   0x0110ADD0:  088087E5     STR r8, [r7, 0x8]
		   0x0110ADD4:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0110ADD8:  7D101203     TSTSEQ r1, r2, 0x7d
		   0x0110ADDC:  88EBF602     RSCSEQ lr, r6, 0x22000
		   0x0110ADE0:  74EBF602     RSCSEQ lr, r6, 0x1d000
		*/
	}

	// RVA: 0x110CF14 Offset: 0x110CF14 VA: 0x110CF14
	public void BubblePaused() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110CF14:  0110A0E3     MOV r1, 0x1
		   0x0110CF18:  6C10C0E5     STRB r1, [r0, 0x6c]
		   0x0110CF1C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110CF20 Offset: 0x110CF20 VA: 0x110CF20
	public void BubbleUnpaused() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110CF20:  0010A0E3     MOV r1, 0x0
		   0x0110CF24:  6C10C0E5     STRB r1, [r0, 0x6c]
		   0x0110CF28:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110CF2C Offset: 0x110CF2C VA: 0x110CF2C
	public void ShowMainIcon() {
		/* Disassembly (ARM32, 51 instructions, 0xCC bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110CF2C:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0110CF30:  08D04DE2     SUB sp, sp, 0x8
		   0x0110CF34:  B0509FE5     LDR r5, [pc, 0xb0]
		   0x0110CF38:  0040A0E1     MOV r4, r0
		   0x0110CF3C:  05508FE0     ADD r5, pc, r5
		   0x0110CF40:  0000D5E5     LDRB r0, [r5]
		   0x0110CF44:  000050E3     CMPS r0, r0, 0x0
		   0x0110CF48:  0400001A     BNE $+0x18  // if (!=) goto 0x0110CF60
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110CF4C:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x0110CF50:  00009FE7     LDR r0, [pc, r0]
		   0x0110CF54:  8138F9EB     BL $-0x1b1df4
		   0x0110CF58:  0100A0E3     MOV r0, 0x1
		   0x0110CF5C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110CF60:  285094E5     LDR r5, [r4, 0x28]
		   0x0110CF64:  000055E3     CMPS r0, r5, 0x0
		   0x0110CF68:  0000001A     BNE $+0x8  // if (!=) goto 0x0110CF70
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110CF6C:  1739F9EB     BL $-0x1b1b9c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110CF70:  0500A0E1     MOV r0, r5
		   0x0110CF74:  0110A0E3     MOV r1, 0x1
		   0x0110CF78:  0020A0E3     MOV r2, 0x0
		   0x0110CF7C:  0EAC3BEB     BL $+0xeeb040  // CALL → sub_1FF7FBC
		   0x0110CF80:  6C509FE5     LDR r5, [pc, 0x6c]
		   0x0110CF84:  05509FE7     LDR r5, [pc, r5]
		   0x0110CF88:  284094E5     LDR r4, [r4, 0x28]
		   0x0110CF8C:  000095E5     LDR r0, [r5]
		   0x0110CF90:  741090E5     LDR r1, [r0, 0x74]
		   0x0110CF94:  000051E3     CMPS r0, r1, 0x0
		   0x0110CF98:  0100001A     BNE $+0xc  // if (!=) goto 0x0110CFA4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110CF9C:  BC38F9EB     BL $-0x1b1d08
		   0x0110CFA0:  000095E5     LDR r0, [r5]
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110CFA4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110CFA8:  000054E3     CMPS r0, r4, 0x0
		   0x0110CFAC:  009090E5     LDR sb, [r0]
		   0x0110CFB0:  C00190E9     LDMIA r0, {r6, r7, r8}
		   0x0110CFB4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110CFBC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110CFB8:  0439F9EB     BL $-0x1b1be8
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110CFBC:  000094E5     LDR r0, [r4]
		   0x0110CFC0:  0620A0E1     MOV r2, r6
		   0x0110CFC4:  0730A0E1     MOV r3, r7
		   0x0110CFC8:  785190E5     LDR r5, [r0, 0x178]
		   0x0110CFCC:  7C1190E5     LDR r1, [r0, 0x17c]
		   0x0110CFD0:  0400A0E1     MOV r0, r4
		   0x0110CFD4:  00808DE5     STR r8, [sp]
		   0x0110CFD8:  04108DE5     STR r1, [sp, 0x4]
		   0x0110CFDC:  0910A0E1     MOV r1, sb
		   0x0110CFE0:  35FF2FE1     BLX r5  // virtual call: vtable+0x178
		   0x0110CFE4:  08D08DE2     ADD sp, sp, 0x8
		   0x0110CFE8:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   0x0110CFEC:  BEEE1103     TSTSEQ lr, r1, 0xbe0
		   0x0110CFF0:  E4B6F602     RSCSEQ fp, r6, 0xe400000
		   0x0110CFF4:  B0B6F602     RSCSEQ fp, r6, 0xb000000
		*/
	}

	// RVA: 0x110CFF8 Offset: 0x110CFF8 VA: 0x110CFF8
	protected void SetEnabled(bool val) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110CFF8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110CFFC:  186090E5     LDR r6, [r0, 0x18]
		   0x0110D000:  0140A0E1     MOV r4, r1
		   0x0110D004:  0050A0E1     MOV r5, r0
		   0x0110D008:  000056E3     CMPS r0, r6, 0x0
		   0x0110D00C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D014
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D010:  EE38F9EB     BL $-0x1b1c40
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D014:  0600A0E1     MOV r0, r6
		   0x0110D018:  0410A0E1     MOV r1, r4
		   0x0110D01C:  0020A0E3     MOV r2, 0x0
		   0x0110D020:  E5AB3BEB     BL $+0xeeaf9c  // CALL → sub_1FF7FBC
		   0x0110D024:  1C6095E5     LDR r6, [r5, 0x1c]
		   0x0110D028:  000056E3     CMPS r0, r6, 0x0
		   0x0110D02C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D034
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110D030:  E638F9EB     BL $-0x1b1c60
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110D034:  0600A0E1     MOV r0, r6
		   0x0110D038:  0410A0E1     MOV r1, r4
		   0x0110D03C:  0020A0E3     MOV r2, 0x0
		   0x0110D040:  DDAB3BEB     BL $+0xeeaf7c  // CALL → sub_1FF7FBC
		   0x0110D044:  206095E5     LDR r6, [r5, 0x20]
		   0x0110D048:  000056E3     CMPS r0, r6, 0x0
		   0x0110D04C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D054
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110D050:  DE38F9EB     BL $-0x1b1c80
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110D054:  0600A0E1     MOV r0, r6
		   0x0110D058:  0410A0E1     MOV r1, r4
		   0x0110D05C:  0020A0E3     MOV r2, 0x0
		   0x0110D060:  D5AB3BEB     BL $+0xeeaf5c  // CALL → sub_1FF7FBC
		   0x0110D064:  246095E5     LDR r6, [r5, 0x24]
		   0x0110D068:  000056E3     CMPS r0, r6, 0x0
		   0x0110D06C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D074
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110D070:  D638F9EB     BL $-0x1b1ca0
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110D074:  0600A0E1     MOV r0, r6
		   0x0110D078:  0410A0E1     MOV r1, r4
		   0x0110D07C:  0020A0E3     MOV r2, 0x0
		   0x0110D080:  CDAB3BEB     BL $+0xeeaf3c  // CALL → sub_1FF7FBC
		   0x0110D084:  285095E5     LDR r5, [r5, 0x28]
		   0x0110D088:  000055E3     CMPS r0, r5, 0x0
		   0x0110D08C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D094
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110D090:  CE38F9EB     BL $-0x1b1cc0
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110D094:  0500A0E1     MOV r0, r5
		   0x0110D098:  0410A0E1     MOV r1, r4
		   0x0110D09C:  0020A0E3     MOV r2, 0x0
		   0x0110D0A0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110D0A4:  C4AB3BEA     B $+0xeeaf18
		*/
	}

	// RVA: 0x110B238 Offset: 0x110B238 VA: 0x110B238
	protected void BaseSelect(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 86 instructions, 0x158 bytes):
		   // CFG: 15 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110B238:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110B23C:  0CD04DE2     SUB sp, sp, 0xc
		   0x0110B240:  C8619FE5     LDR r6, [pc, 0x1c8]
		   0x0110B244:  0040A0E1     MOV r4, r0
		   0x0110B248:  0150A0E1     MOV r5, r1
		   0x0110B24C:  06608FE0     ADD r6, pc, r6
		   0x0110B250:  0000D6E5     LDRB r0, [r6]
		   0x0110B254:  000050E3     CMPS r0, r0, 0x0
		   0x0110B258:  0700001A     BNE $+0x24  // if (!=) goto 0x0110B27C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110B25C:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x0110B260:  00009FE7     LDR r0, [pc, r0]
		   0x0110B264:  BD3FF9EB     BL $-0x1b0104
		   0x0110B268:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x0110B26C:  00009FE7     LDR r0, [pc, r0]
		   0x0110B270:  BA3FF9EB     BL $-0x1b0110
		   0x0110B274:  0100A0E3     MOV r0, 0x1
		   0x0110B278:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110B27C:  0400A0E1     MOV r0, r4
		   0x0110B280:  0010A0E3     MOV r1, 0x0
		   0x0110B284:  09B33BEB     BL $+0xeecc2c  // CALL → sub_1FF7EB0
		   0x0110B288:  0060A0E1     MOV r6, r0
		   0x0110B28C:  000050E3     CMPS r0, r0, 0x0
		   0x0110B290:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B298
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110B294:  4D40F9EB     BL $-0x1afec4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110B298:  0600A0E1     MOV r0, r6
		   0x0110B29C:  0010A0E3     MOV r1, 0x0
		   0x0110B2A0:  04B43BEB     BL $+0xeed018  // CALL → sub_1FF82B8
		   0x0110B2A4:  000050E3     CMPS r0, r0, 0x0
		   0x0110B2A8:  5500000A     BEQ $+0x15c
		   0x0110B2AC:  000055E3     CMPS r0, r5, 0x0
		   0x0110B2B0:  5100000A     BEQ $+0x14c
		   0x0110B2B4:  580094E5     LDR r0, [r4, 0x58]
		   0x0110B2B8:  0010A0E3     MOV r1, 0x0
		   0x0110B2BC:  96FB11EB     BL $+0x47ee60  // CALL → TweenExtensions.IsActive
		   0x0110B2C0:  000050E3     CMPS r0, r0, 0x0
		   0x0110B2C4:  0300000A     BEQ $+0x14  // if (==) goto 0x0110B2D8
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0110B2C8:  580094E5     LDR r0, [r4, 0x58]
		   0x0110B2CC:  0010A0E3     MOV r1, 0x0
		   0x0110B2D0:  0020A0E3     MOV r2, 0x0
		   0x0110B2D4:  B9F311EB     BL $+0x47ceec  // CALL → TweenExtensions.Kill
		   // ──── Block 8 if (==) ────────────────────
		   0x0110B2D8:  0400A0E1     MOV r0, r4
		   0x0110B2DC:  700000EB     BL $+0x1c8  // CALL → Item.ResetPosition
		   0x0110B2E0:  0400A0E1     MOV r0, r4
		   0x0110B2E4:  0010A0E3     MOV r1, 0x0
		   0x0110B2E8:  EFB23BEB     BL $+0xeecbc4  // CALL → sub_1FF7EAC
		   0x0110B2EC:  28919FE5     LDR sb, [pc, 0x128]
		   0x0110B2F0:  0050A0E1     MOV r5, r0
		   0x0110B2F4:  09908FE0     ADD sb, pc, sb
		   0x0110B2F8:  0000D9E5     LDRB r0, [sb]
		   0x0110B2FC:  000050E3     CMPS r0, r0, 0x0
		   0x0110B300:  0400001A     BNE $+0x18  // if (!=) goto 0x0110B318
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110B304:  14019FE5     LDR r0, [pc, 0x114]
		   0x0110B308:  00009FE7     LDR r0, [pc, r0]
		   0x0110B30C:  933FF9EB     BL $-0x1b01ac
		   0x0110B310:  0100A0E3     MOV r0, 0x1
		   0x0110B314:  0000C9E5     STRB r0, [sb]
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110B318:  04A19FE5     LDR r10, [pc, 0x104]
		   0x0110B31C:  000055E3     CMPS r0, r5, 0x0
		   0x0110B320:  0AA09FE7     LDR r10, [pc, r10]
		   0x0110B324:  00009AE5     LDR r0, [r10]
		   0x0110B328:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110B32C:  0C8080E2     ADD r8, r0, 0xc
		   0x0110B330:  C00198E8     LDM r8, {r6, r7, r8}
		   0x0110B334:  0000001A     BNE $+0x8  // if (!=) goto 0x0110B33C
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110B338:  2440F9EB     BL $-0x1aff68
		   // ──── Block 12 if (!=) ────────────────────
		   0x0110B33C:  00B0A0E3     MOV fp, 0x0
		   0x0110B340:  0500A0E1     MOV r0, r5
		   0x0110B344:  0610A0E1     MOV r1, r6
		   0x0110B348:  0720A0E1     MOV r2, r7
		   0x0110B34C:  0830A0E1     MOV r3, r8
		   0x0110B350:  00B08DE5     STR fp, [sp]
		   0x0110B354:  85B33BEB     BL $+0xeece1c  // CALL → sub_1FF8170
		   0x0110B358:  0400A0E1     MOV r0, r4
		   0x0110B35C:  0010A0E3     MOV r1, 0x0
		   0x0110B360:  D1B23BEB     BL $+0xeecb4c  // CALL → sub_1FF7EAC
		   0x0110B364:  0050A0E1     MOV r5, r0
		   0x0110B368:  0000D9E5     LDRB r0, [sb]
		   0x0110B36C:  000050E3     CMPS r0, r0, 0x0
		   0x0110B370:  0400001A     BNE $+0x18  // if (!=) goto 0x0110B388
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110B374:  AC009FE5     LDR r0, [pc, 0xac]
		   0x0110B378:  00009FE7     LDR r0, [pc, r0]
		   0x0110B37C:  773FF9EB     BL $-0x1b021c
		   0x0110B380:  0100A0E3     MOV r0, 0x1
		   0x0110B384:  0000C9E5     STRB r0, [sb]
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110B388:  00009AE5     LDR r0, [r10]
		   0x0110B38C:  CDAC0CE3     MOV r10, 0xcccd
		*/
	}

	// RVA: 0x110D0A8 Offset: 0x110D0A8 VA: 0x110D0A8
	public void Unselect() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D0A8:  0010A0E3     MOV r1, 0x0
		   0x0110D0AC:  3110C0E5     STRB r1, [r0, 0x31]
		   0x0110D0B0:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110A898 Offset: 0x110A898 VA: 0x110A898
	private void CheckMaxLevel() {
		/* Disassembly (ARM32, 107 instructions, 0x1AC bytes):
		   // CFG: 30 blocks, 31 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110A898:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110A89C:  94519FE5     LDR r5, [pc, 0x194]
		   0x0110A8A0:  0040A0E1     MOV r4, r0
		   0x0110A8A4:  05508FE0     ADD r5, pc, r5
		   0x0110A8A8:  0000D5E5     LDRB r0, [r5]
		   0x0110A8AC:  000050E3     CMPS r0, r0, 0x0
		   0x0110A8B0:  0400001A     BNE $+0x18  // if (!=) goto 0x0110A8C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110A8B4:  80019FE5     LDR r0, [pc, 0x180]
		   0x0110A8B8:  00009FE7     LDR r0, [pc, r0]
		   0x0110A8BC:  2742F9EB     BL $-0x1af75c
		   0x0110A8C0:  0100A0E3     MOV r0, 0x1
		   0x0110A8C4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110A8C8:  845094E5     LDR r5, [r4, 0x84]
		   0x0110A8CC:  000055E3     CMPS r0, r5, 0x0
		   0x0110A8D0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A8D8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110A8D4:  BD42F9EB     BL $-0x1af504
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110A8D8:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0110A8DC:  050050E3     CMPS r0, r0, 0x5
		   0x0110A8E0:  0800001A     BNE $+0x28  // if (!=) goto 0x0110A908
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110A8E4:  285095E5     LDR r5, [r5, 0x28]
		   0x0110A8E8:  000055E3     CMPS r0, r5, 0x0
		   0x0110A8EC:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A8F4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110A8F0:  B642F9EB     BL $-0x1af520
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110A8F4:  185095E5     LDR r5, [r5, 0x18]
		   0x0110A8F8:  000055E3     CMPS r0, r5, 0x0
		   0x0110A8FC:  0100001A     BNE $+0xc  // if (!=) goto 0x0110A908
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110A900:  B242F9EB     BL $-0x1af530
		   0x0110A904:  0050A0E3     MOV r5, 0x0
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x0110A908:  1C00D5E5     LDRB r0, [r5, 0x1c]
		   0x0110A90C:  0070A0E3     MOV r7, 0x0
		   0x0110A910:  000050E3     CMPS r0, r0, 0x0
		   0x0110A914:  0700000A     BEQ $+0x24  // if (==) goto 0x0110A938
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x0110A918:  0500A0E1     MOV r0, r5
		   0x0110A91C:  EB2900EB     BL $+0xa7b4  // CALL → ItemData.GetLockedData
		   0x0110A920:  0050A0E1     MOV r5, r0
		   0x0110A924:  000050E3     CMPS r0, r0, 0x0
		   0x0110A928:  0200001A     BNE $+0x10  // if (!=) goto 0x0110A938
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110A92C:  A742F9EB     BL $-0x1af55c
		   0x0110A930:  0050A0E3     MOV r5, 0x0
		   0x0110A934:  0170A0E3     MOV r7, 0x1
		   // ──── Block 12 (from 2 paths) ──────────────────
		   0x0110A938:  00819FE5     LDR r8, [pc, 0x100]
		   0x0110A93C:  08809FE7     LDR r8, [pc, r8]
		   0x0110A940:  086095E5     LDR r6, [r5, 0x8]
		   0x0110A944:  000098E5     LDR r0, [r8]
		   0x0110A948:  741090E5     LDR r1, [r0, 0x74]
		   0x0110A94C:  000051E3     CMPS r0, r1, 0x0
		   0x0110A950:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A958
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110A954:  4E42F9EB     BL $-0x1af6c0
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110A958:  0600A0E1     MOV r0, r6
		   0x0110A95C:  0010A0E3     MOV r1, 0x0
		   0x0110A960:  0020A0E3     MOV r2, 0x0
		   0x0110A964:  4CB53BEB     BL $+0xeed538  // CALL → sub_1FF7E9C
		   0x0110A968:  000050E3     CMPS r0, r0, 0x0
		   0x0110A96C:  3000001A     BNE $+0xc8  // if (!=) goto 0x0110AA34
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0110A970:  000057E3     CMPS r0, r7, 0x0
		   0x0110A974:  0500000A     BEQ $+0x1c  // if (==) goto 0x0110A990
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x0110A978:  9442F9EB     BL $-0x1af5a8
		   0x0110A97C:  0500A0E1     MOV r0, r5
		   0x0110A980:  18FDFFEB     BL $-0xb98
		   0x0110A984:  0060A0E1     MOV r6, r0
		   0x0110A988:  9042F9EB     BL $-0x1af5b8
		   0x0110A98C:  020000EA     B $+0x10  // goto 0x0110A99C
		   // ──── Block 17 if (==) ────────────────────
		   0x0110A990:  0500A0E1     MOV r0, r5
		   0x0110A994:  13FDFFEB     BL $-0xbac
		   0x0110A998:  0060A0E1     MOV r6, r0
		   // ──── Block 18 ──────────────────────────────
		   0x0110A99C:  085095E5     LDR r5, [r5, 0x8]
		   0x0110A9A0:  000055E3     CMPS r0, r5, 0x0
		   0x0110A9A4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A9AC
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0110A9A8:  8842F9EB     BL $-0x1af5d8
		   // ──── Block 20 if (!=) ────────────────────
		   0x0110A9AC:  285095E5     LDR r5, [r5, 0x28]
		   0x0110A9B0:  016086E2     ADD r6, r6, 0x1
		   0x0110A9B4:  000055E3     CMPS r0, r5, 0x0
		   0x0110A9B8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A9C0
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0110A9BC:  8342F9EB     BL $-0x1af5ec
		   // ──── Block 22 if (!=) ────────────────────
		   0x0110A9C0:  0C1095E5     LDR r1, [r5, 0xc]
		   0x0110A9C4:  000098E5     LDR r0, [r8]
		   0x0110A9C8:  011046E0     SUB r1, r6, r1
		   0x0110A9CC:  245094E5     LDR r5, [r4, 0x24]
		   0x0110A9D0:  111F6FE1     CLZ r1, r1
		   0x0110A9D4:  742090E5     LDR r2, [r0, 0x74]
		   0x0110A9D8:  A112A0E1     MOV r1, r0, r1, lsr 5
		   0x0110A9DC:  000052E3     CMPS r0, r2, 0x0
		   0x0110A9E0:  4010C4E5     STRB r1, [r4, 0x40]
		   0x0110A9E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110A9EC
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x0110A9E8:  2942F9EB     BL $-0x1af754
		   // ──── Block 24 if (!=) ────────────────────
		   0x0110A9EC:  0500A0E1     MOV r0, r5
		   0x0110A9F0:  0010A0E3     MOV r1, 0x0
		   0x0110A9F4:  0020A0E3     MOV r2, 0x0
		   0x0110A9F8:  5D68FCEB     BL $-0xe5e84
		   0x0110A9FC:  000050E3     CMPS r0, r0, 0x0
		   0x0110AA00:  0B00000A     BEQ $+0x34  // if (==) goto 0x0110AA34
		   // 
		   // ──── Block 25 else (!=) ────────────────────
		   0x0110AA04:  4050D4E5     LDRB r5, [r4, 0x40]
		   0x0110AA08:  244094E5     LDR r4, [r4, 0x24]
		   0x0110AA0C:  000054E3     CMPS r0, r4, 0x0
		   0x0110AA10:  0000001A     BNE $+0x8  // if (!=) goto 0x0110AA18
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x0110AA14:  6D42F9EB     BL $-0x1af644
		   // ──── Block 27 if (!=) ────────────────────
		   0x0110AA18:  000055E3     CMPS r0, r5, 0x0
		   0x0110AA1C:  0400A0E1     MOV r0, r4
		   0x0110AA20:  01500013     MOVNE r5, 0x1
		   0x0110AA24:  0020A0E3     MOV r2, 0x0
		   0x0110AA28:  0510A0E1     MOV r1, r5
		   0x0110AA2C:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x0110AA30:  61B53BEA     B $+0xeed58c
		   // ──── Block 28 (from 2 paths) ──────────────────
		   0x0110AA34:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0110AA38:  58151203     TSTSEQ r1, r2, 0x16000000
		   0x0110AA3C:  80BCF602     RSCSEQ fp, r6, 0x8000
		   0x0110AA40:  FCBBF602     RSCSEQ fp, r6, 0x3f000
		*/
	}

	// RVA: 0x110D0B4 Offset: 0x110D0B4 VA: 0x110D0B4
	protected void HideMaxLevelIcon() {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D0B4:  10402DE9     PUSH {r4, lr}
		   0x0110D0B8:  244090E5     LDR r4, [r0, 0x24]
		   0x0110D0BC:  000054E3     CMPS r0, r4, 0x0
		   0x0110D0C0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D0C8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D0C4:  C138F9EB     BL $-0x1b1cf4
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D0C8:  0400A0E1     MOV r0, r4
		   0x0110D0CC:  0010A0E3     MOV r1, 0x0
		   0x0110D0D0:  0020A0E3     MOV r2, 0x0
		   0x0110D0D4:  1040BDE8     POP {r4, lr}
		   0x0110D0D8:  B7AB3BEA     B $+0xeeaee4
		*/
	}

	// RVA: 0x110D0DC Offset: 0x110D0DC VA: 0x110D0DC Slot: 23
	protected virtual void SetMainSprite(Sprite s) {
		/* Disassembly (ARM32, 72 instructions, 0x120 bytes):
		   // CFG: 18 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D0DC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110D0E0:  08619FE5     LDR r6, [pc, 0x108]
		   0x0110D0E4:  0040A0E1     MOV r4, r0
		   0x0110D0E8:  0150A0E1     MOV r5, r1
		   0x0110D0EC:  06608FE0     ADD r6, pc, r6
		   0x0110D0F0:  0000D6E5     LDRB r0, [r6]
		   0x0110D0F4:  000050E3     CMPS r0, r0, 0x0
		   0x0110D0F8:  0400001A     BNE $+0x18  // if (!=) goto 0x0110D110
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D0FC:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x0110D100:  00009FE7     LDR r0, [pc, r0]
		   0x0110D104:  1538F9EB     BL $-0x1b1fa4
		   0x0110D108:  0100A0E3     MOV r0, 0x1
		   0x0110D10C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D110:  E0709FE5     LDR r7, [pc, 0xe0]
		   0x0110D114:  07709FE7     LDR r7, [pc, r7]
		   0x0110D118:  286094E5     LDR r6, [r4, 0x28]
		   0x0110D11C:  000097E5     LDR r0, [r7]
		   0x0110D120:  741090E5     LDR r1, [r0, 0x74]
		   0x0110D124:  000051E3     CMPS r0, r1, 0x0
		   0x0110D128:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D130
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110D12C:  5838F9EB     BL $-0x1b1e98
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110D130:  0600A0E1     MOV r0, r6
		   0x0110D134:  0010A0E3     MOV r1, 0x0
		   0x0110D138:  0020A0E3     MOV r2, 0x0
		   0x0110D13C:  8C5EFCEB     BL $-0xe85c8
		   0x0110D140:  000050E3     CMPS r0, r0, 0x0
		   0x0110D144:  1000000A     BEQ $+0x48  // if (==) goto 0x0110D18C
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110D148:  286094E5     LDR r6, [r4, 0x28]
		   0x0110D14C:  000056E3     CMPS r0, r6, 0x0
		   0x0110D150:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D158
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110D154:  9D38F9EB     BL $-0x1b1d84
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110D158:  0600A0E1     MOV r0, r6
		   0x0110D15C:  0510A0E1     MOV r1, r5
		   0x0110D160:  0020A0E3     MOV r2, 0x0
		   0x0110D164:  2CAC3BEB     BL $+0xeeb0b8  // CALL → sub_1FF821C
		   0x0110D168:  285094E5     LDR r5, [r4, 0x28]
		   0x0110D16C:  000055E3     CMPS r0, r5, 0x0
		   0x0110D170:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D178
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110D174:  9538F9EB     BL $-0x1b1da4
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110D178:  000095E5     LDR r0, [r5]
		   0x0110D17C:  282290E5     LDR r2, [r0, 0x228]
		   0x0110D180:  2C1290E5     LDR r1, [r0, 0x22c]
		   0x0110D184:  0500A0E1     MOV r0, r5
		   0x0110D188:  32FF2FE1     BLX r2  // virtual call: vtable+0x228
		   // ──── Block 10 if (==) ────────────────────
		   0x0110D18C:  000097E5     LDR r0, [r7]
		   0x0110D190:  105094E5     LDR r5, [r4, 0x10]
		   0x0110D194:  741090E5     LDR r1, [r0, 0x74]
		   0x0110D198:  000051E3     CMPS r0, r1, 0x0
		   0x0110D19C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D1A4
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110D1A0:  3B38F9EB     BL $-0x1b1f0c
		   // ──── Block 12 if (!=) ────────────────────
		   0x0110D1A4:  0500A0E1     MOV r0, r5
		   0x0110D1A8:  0010A0E3     MOV r1, 0x0
		   0x0110D1AC:  0020A0E3     MOV r2, 0x0
		   0x0110D1B0:  6F5EFCEB     BL $-0xe863c
		   0x0110D1B4:  000050E3     CMPS r0, r0, 0x0
		   0x0110D1B8:  0B00000A     BEQ $+0x34  // if (==) goto 0x0110D1EC
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x0110D1BC:  0400A0E1     MOV r0, r4
		   0x0110D1C0:  D5F1FFEB     BL $-0x38a4
		   0x0110D1C4:  104094E5     LDR r4, [r4, 0x10]
		   0x0110D1C8:  0050A0E1     MOV r5, r0
		   0x0110D1CC:  000054E3     CMPS r0, r4, 0x0
		   0x0110D1D0:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D1D8
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x0110D1D4:  7D38F9EB     BL $-0x1b1e04
		   // ──── Block 15 if (!=) ────────────────────
		   0x0110D1D8:  2C1094E5     LDR r1, [r4, 0x2c]
		   0x0110D1DC:  0500A0E1     MOV r0, r5
		   0x0110D1E0:  0020A0E3     MOV r2, 0x0
		   0x0110D1E4:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x0110D1E8:  ECA20FEA     B $+0x3e8bb8  // TAIL CALL → ExtensionMethods.MultiplySize
		   // ──── Block 16 if (==) ────────────────────
		   0x0110D1EC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0110D1F0:  11ED1103     TSTSEQ lr, r1, 0x440
		   0x0110D1F4:  3894F602     RSCSEQ sb, r6, 0x38000000
		   0x0110D1F8:  2494F602     RSCSEQ sb, r6, 0x24000000
		*/
	}

	// RVA: 0x110D1FC Offset: 0x110D1FC VA: 0x110D1FC
	protected void Fade(float duration) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D1FC:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x110D320 Offset: 0x110D320 VA: 0x110D320
	private void OnDisable() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D320:  0010A0E3     MOV r1, 0x0
		   0x0110D324:  701080E5     STR r1, [r0, 0x70]
		   0x0110D328:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110D32C Offset: 0x110D32C VA: 0x110D32C Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 160 instructions, 0x280 bytes):
		   // CFG: 37 blocks, 40 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D32C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110D330:  08D04DE2     SUB sp, sp, 0x8
		   0x0110D334:  50429FE5     LDR r4, [pc, 0x250]
		   0x0110D338:  0050A0E1     MOV r5, r0
		   0x0110D33C:  04408FE0     ADD r4, pc, r4
		   0x0110D340:  0000D4E5     LDRB r0, [r4]
		   0x0110D344:  000050E3     CMPS r0, r0, 0x0
		   0x0110D348:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110D378
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D34C:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x0110D350:  00009FE7     LDR r0, [pc, r0]
		   0x0110D354:  8137F9EB     BL $-0x1b21f4
		   0x0110D358:  34029FE5     LDR r0, [pc, 0x234]
		   0x0110D35C:  00009FE7     LDR r0, [pc, r0]
		   0x0110D360:  7E37F9EB     BL $-0x1b2200
		   0x0110D364:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x0110D368:  00009FE7     LDR r0, [pc, r0]
		   0x0110D36C:  7B37F9EB     BL $-0x1b220c
		   0x0110D370:  0100A0E3     MOV r0, 0x1
		   0x0110D374:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D378:  1C029FE5     LDR r0, [pc, 0x21c]
		   0x0110D37C:  0510A0E3     MOV r1, 0x5
		   0x0110D380:  00009FE7     LDR r0, [pc, r0]
		   0x0110D384:  000090E5     LDR r0, [r0]
		   0x0110D388:  9737F9EB     BL $-0x1b219c
		   0x0110D38C:  846095E5     LDR r6, [r5, 0x84]
		   0x0110D390:  0040A0E1     MOV r4, r0
		   0x0110D394:  000056E3     CMPS r0, r6, 0x0
		   0x0110D398:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D3A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110D39C:  0B38F9EB     BL $-0x1b1fcc
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110D3A0:  146096E5     LDR r6, [r6, 0x14]
		   0x0110D3A4:  000054E3     CMPS r0, r4, 0x0
		   0x0110D3A8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D3B0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110D3AC:  0738F9EB     BL $-0x1b1fdc
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110D3B0:  000056E3     CMPS r0, r6, 0x0
		   0x0110D3B4:  0800000A     BEQ $+0x28  // if (==) goto 0x0110D3DC
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0110D3B8:  000094E5     LDR r0, [r4]
		   0x0110D3BC:  201090E5     LDR r1, [r0, 0x20]
		   0x0110D3C0:  0600A0E1     MOV r0, r6
		   0x0110D3C4:  B337F9EB     BL $-0x1b212c
		   0x0110D3C8:  000050E3     CMPS r0, r0, 0x0
		   0x0110D3CC:  0200001A     BNE $+0x10  // if (!=) goto 0x0110D3DC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110D3D0:  0638F9EB     BL $-0x1b1fe0
		   0x0110D3D4:  0010A0E3     MOV r1, 0x0
		   0x0110D3D8:  A837F9EB     BL $-0x1b2158
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x0110D3DC:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110D3E0:  000050E3     CMPS r0, r0, 0x0
		   0x0110D3E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D3EC
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0110D3E8:  F937F9EB     BL $-0x1b2014
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110D3EC:  106084E5     STR r6, [r4, 0x10]
		   0x0110D3F0:  846095E5     LDR r6, [r5, 0x84]
		   0x0110D3F4:  000056E3     CMPS r0, r6, 0x0
		   0x0110D3F8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D400
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0110D3FC:  F337F9EB     BL $-0x1b202c
		   // ──── Block 13 if (!=) ────────────────────
		   0x0110D400:  4C1096E5     LDR r1, [r6, 0x4c]
		   0x0110D404:  94019FE5     LDR r0, [pc, 0x194]
		   0x0110D408:  00009FE7     LDR r0, [pc, r0]
		   0x0110D40C:  04108DE5     STR r1, [sp, 0x4]
		   0x0110D410:  04108DE2     ADD r1, sp, 0x4
		   0x0110D414:  000090E5     LDR r0, [r0]
		   0x0110D418:  9F37F9EB     BL $-0x1b217c
		   0x0110D41C:  0060A0E1     MOV r6, r0
		   0x0110D420:  000050E3     CMPS r0, r0, 0x0
		   0x0110D424:  0800000A     BEQ $+0x28  // if (==) goto 0x0110D44C
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x0110D428:  000094E5     LDR r0, [r4]
		   0x0110D42C:  201090E5     LDR r1, [r0, 0x20]
		   0x0110D430:  0600A0E1     MOV r0, r6
		   0x0110D434:  9737F9EB     BL $-0x1b219c
		   0x0110D438:  000050E3     CMPS r0, r0, 0x0
		   0x0110D43C:  0200001A     BNE $+0x10  // if (!=) goto 0x0110D44C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0110D440:  EA37F9EB     BL $-0x1b2050
		   0x0110D444:  0010A0E3     MOV r1, 0x0
		   0x0110D448:  8C37F9EB     BL $-0x1b21c8
		   // ──── Block 16 (from 2 paths) ──────────────────
		   0x0110D44C:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110D450:  010050E3     CMPS r0, r0, 0x1
		   0x0110D454:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110D45C
		   // 
		   // ──── Block 17 else (<= (unsigned)) ────────────────────
		   0x0110D458:  DD37F9EB     BL $-0x1b2084
		   // ──── Block 18 if (> (unsigned)) ────────────────────
		   0x0110D45C:  146084E5     STR r6, [r4, 0x14]
		   0x0110D460:  3810D5E5     LDRB r1, [r5, 0x38]
		   0x0110D464:  38719FE5     LDR r7, [pc, 0x138]
		   0x0110D468:  07709FE7     LDR r7, [pc, r7]
		   0x0110D46C:  0310CDE5     STRB r1, [sp, 0x3]
		   0x0110D470:  03108DE2     ADD r1, sp, 0x3
		   0x0110D474:  140097E5     LDR r0, [r7, 0x14]
		   0x0110D478:  8737F9EB     BL $-0x1b21dc
		   0x0110D47C:  0060A0E1     MOV r6, r0
		   0x0110D480:  000050E3     CMPS r0, r0, 0x0
		   0x0110D484:  0800000A     BEQ $+0x28  // if (==) goto 0x0110D4AC
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x0110D488:  000094E5     LDR r0, [r4]
		   0x0110D48C:  201090E5     LDR r1, [r0, 0x20]
		   0x0110D490:  0600A0E1     MOV r0, r6
		   0x0110D494:  7F37F9EB     BL $-0x1b21fc
		   0x0110D498:  000050E3     CMPS r0, r0, 0x0
		   0x0110D49C:  0200001A     BNE $+0x10  // if (!=) goto 0x0110D4AC
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x0110D4A0:  D237F9EB     BL $-0x1b20b0
		   0x0110D4A4:  0010A0E3     MOV r1, 0x0
		   0x0110D4A8:  7437F9EB     BL $-0x1b2228
		   // ──── Block 21 (from 2 paths) ──────────────────
		   0x0110D4AC:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110D4B0:  020050E3     CMPS r0, r0, 0x2
		   0x0110D4B4:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110D4BC
		   // 
		   // ──── Block 22 else (<= (unsigned)) ────────────────────
		   0x0110D4B8:  C537F9EB     BL $-0x1b20e4
		   // ──── Block 23 if (> (unsigned)) ────────────────────
		   0x0110D4BC:  186084E5     STR r6, [r4, 0x18]
		   0x0110D4C0:  846095E5     LDR r6, [r5, 0x84]
		   0x0110D4C4:  000056E3     CMPS r0, r6, 0x0
		   0x0110D4C8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D4D0
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x0110D4CC:  BF37F9EB     BL $-0x1b20fc
		   // ──── Block 25 if (!=) ────────────────────
		   0x0110D4D0:  7410D6E5     LDRB r1, [r6, 0x74]
		   0x0110D4D4:  140097E5     LDR r0, [r7, 0x14]
		   0x0110D4D8:  0210CDE5     STRB r1, [sp, 0x2]
		   0x0110D4DC:  02108DE2     ADD r1, sp, 0x2
		   0x0110D4E0:  6D37F9EB     BL $-0x1b2244
		   0x0110D4E4:  0060A0E1     MOV r6, r0
		   0x0110D4E8:  000050E3     CMPS r0, r0, 0x0
		   0x0110D4EC:  0800000A     BEQ $+0x28  // if (==) goto 0x0110D514
		   // 
		   // ──── Block 26 else (!=) ────────────────────
		   0x0110D4F0:  000094E5     LDR r0, [r4]
		   0x0110D4F4:  201090E5     LDR r1, [r0, 0x20]
		   0x0110D4F8:  0600A0E1     MOV r0, r6
		   0x0110D4FC:  6537F9EB     BL $-0x1b2264
		   0x0110D500:  000050E3     CMPS r0, r0, 0x0
		   0x0110D504:  0200001A     BNE $+0x10  // if (!=) goto 0x0110D514
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x0110D508:  B837F9EB     BL $-0x1b2118
		   0x0110D50C:  0010A0E3     MOV r1, 0x0
		   0x0110D510:  5A37F9EB     BL $-0x1b2290
		   // ──── Block 28 (from 2 paths) ──────────────────
		   0x0110D514:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110D518:  030050E3     CMPS r0, r0, 0x3
		   0x0110D51C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110D524
		   // 
		   // ──── Block 29 else (<= (unsigned)) ────────────────────
		   0x0110D520:  AB37F9EB     BL $-0x1b214c
		   // ──── Block 30 if (> (unsigned)) ────────────────────
		   0x0110D524:  1C6084E5     STR r6, [r4, 0x1c]
		   0x0110D528:  105095E5     LDR r5, [r5, 0x10]
		   0x0110D52C:  000055E3     CMPS r0, r5, 0x0
		   0x0110D530:  0800000A     BEQ $+0x28  // if (==) goto 0x0110D558
		   // 
		   // ──── Block 31 else (!=) ────────────────────
		   0x0110D534:  000094E5     LDR r0, [r4]
		   0x0110D538:  201090E5     LDR r1, [r0, 0x20]
		   0x0110D53C:  0500A0E1     MOV r0, r5
		   0x0110D540:  5437F9EB     BL $-0x1b22a8
		   0x0110D544:  000050E3     CMPS r0, r0, 0x0
		   0x0110D548:  0200001A     BNE $+0x10  // if (!=) goto 0x0110D558
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x0110D54C:  A737F9EB     BL $-0x1b215c
		   0x0110D550:  0010A0E3     MOV r1, 0x0
		   0x0110D554:  4937F9EB     BL $-0x1b22d4
		   // ──── Block 33 (from 2 paths) ──────────────────
		   0x0110D558:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110D55C:  040050E3     CMPS r0, r0, 0x4
		   0x0110D560:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x0110D568
		   // 
		   // ──── Block 34 else (<= (unsigned)) ────────────────────
		   0x0110D564:  9A37F9EB     BL $-0x1b2190
		   // ──── Block 35 if (> (unsigned)) ────────────────────
		   0x0110D568:  205084E5     STR r5, [r4, 0x20]
		   0x0110D56C:  0410A0E1     MOV r1, r4
		   0x0110D570:  30009FE5     LDR r0, [pc, 0x30]
		   0x0110D574:  0020A0E3     MOV r2, 0x0
		   0x0110D578:  00009FE7     LDR r0, [pc, r0]
		   0x0110D57C:  000090E5     LDR r0, [r0]
		   0x0110D580:  483276EB     BL $+0x1d8c928  // CALL → String.Format
		   0x0110D584:  08D08DE2     ADD sp, sp, 0x8
		   0x0110D588:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0110D58C:  C3EA1103     TSTSEQ lr, r1, 0xc3000
		   0x0110D590:  34BFF602     RSCSEQ fp, r6, 0xd0
		   0x0110D594:  8C92F602     RSCSEQ sb, r6, 0xc0000008
		   0x0110D598:  ECC5F602     RSCSEQ ip, r6, 0x3b000000
		   0x0110D59C:  6892F602     RSCSEQ sb, r6, 0x80000006
		   0x0110D5A0:  7CBEF602     RSCSEQ fp, r6, 0x7c0
		   0x0110D5A4:  5892F602     RSCSEQ sb, r6, 0x80000005
		   0x0110D5A8:  DCC3F602     RSCSEQ ip, r6, 0x70000003
		*/
	}

	// RVA: 0x110C2FC Offset: 0x110C2FC VA: 0x110C2FC
	public static float GetAnimationTimeByDistance(Vector3 sourcePos, Vector3 targetPos) {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110C2FC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110C300:  C8409FE5     LDR r4, [pc, 0xc8]
		   0x0110C304:  0060A0E1     MOV r6, r0
		   0x0110C308:  0350A0E1     MOV r5, r3
		   0x0110C30C:  02A0A0E1     MOV r10, r2
		   0x0110C310:  04408FE0     ADD r4, pc, r4
		   0x0110C314:  0170A0E1     MOV r7, r1
		   0x0110C318:  0000D4E5     LDRB r0, [r4]
		   0x0110C31C:  000050E3     CMPS r0, r0, 0x0
		   0x0110C320:  0400001A     BNE $+0x18  // if (!=) goto 0x0110C338
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110C324:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x0110C328:  00009FE7     LDR r0, [pc, r0]
		   0x0110C32C:  8B3BF9EB     BL $-0x1b11cc
		   0x0110C330:  0100A0E3     MOV r0, 0x1
		   0x0110C334:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110C338:  98009FE5     LDR r0, [pc, 0x98]
		   0x0110C33C:  24809DE5     LDR r8, [sp, 0x24]
		   0x0110C340:  20909DE5     LDR sb, [sp, 0x20]
		   0x0110C344:  00009FE7     LDR r0, [pc, r0]
		   0x0110C348:  000090E5     LDR r0, [r0]
		   0x0110C34C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110C350:  000051E3     CMPS r0, r1, 0x0
		   0x0110C354:  0000001A     BNE $+0x8
		   0x0110C358:  CD3BF9EB     BL $-0x1b10c4
		*/
	}

	// RVA: 0x110D5AC Offset: 0x110D5AC VA: 0x110D5AC
	protected void .ctor() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D5AC:  0110A0E3     MOV r1, 0x1
		   0x0110D5B0:  4110C0E5     STRB r1, [r0, 0x41]
		   0x0110D5B4:  0010A0E3     MOV r1, 0x0
		   0x0110D5B8:  3AAA3BEA     B $+0xeea8f0
		*/
	}

	// RVA: 0x110D5BC Offset: 0x110D5BC VA: 0x110D5BC
	private static void .cctor() {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D5BC:  10402DE9     PUSH {r4, lr}
		   0x0110D5C0:  3C409FE5     LDR r4, [pc, 0x3c]
		   0x0110D5C4:  04408FE0     ADD r4, pc, r4
		   0x0110D5C8:  0000D4E5     LDRB r0, [r4]
		   0x0110D5CC:  000050E3     CMPS r0, r0, 0x0
		   0x0110D5D0:  0400001A     BNE $+0x18  // if (!=) goto 0x0110D5E8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D5D4:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x0110D5D8:  00009FE7     LDR r0, [pc, r0]
		   0x0110D5DC:  DF36F9EB     BL $-0x1b247c
		   0x0110D5E0:  0100A0E3     MOV r0, 0x1
		   0x0110D5E4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D5E8:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x0110D5EC:  FA15A0E3     MOV r1, 0x3e800000
		   0x0110D5F0:  00009FE7     LDR r0, [pc, r0]
		   0x0110D5F4:  000090E5     LDR r0, [r0]
		   0x0110D5F8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110D5FC:  001080E5     STR r1, [r0]
		   0x0110D600:  1080BDE8     POP {r4, pc}
		   0x0110D604:  3CE81103     TSTSEQ lr, r1, 0x3c0000
		   0x0110D608:  C4BFF602     RSCSEQ fp, r6, 0x310
		   0x0110D60C:  ACBFF602     RSCSEQ fp, r6, 0x2b0
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110D610 Offset: 0x110D610 VA: 0x110D610
	private void <StartSpawnFx>b__111_0() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D610:  2FFEFFEA     B $-0x73c
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110D614 Offset: 0x110D614 VA: 0x110D614
	private void <StartSpawnFx>b__111_1() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D614:  2EFEFFEA     B $-0x740
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110D618 Offset: 0x110D618 VA: 0x110D618
	private void <AdaptAnimationForResolution>b__122_0(AspectRatio aspectRatio) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D618:  000051E3     CMPS r0, r1, 0x0
		   0x0110D61C:  1EFF2F11     BXNE lr
		   0x0110D620:  CD1C0CE3     MOV r1, 0xcccd
		   0x0110D624:  CD2C0CE3     MOV r2, 0xcccd
		   0x0110D628:  8C2F43E3     MOVT r2, 0x3f8c
		   0x0110D62C:  CC1D43E3     MOVT r1, 0x3dcc
		   0x0110D630:  642080E5     STR r2, [r0, 0x64]
		   0x0110D634:  681080E5     STR r1, [r0, 0x68]
		   0x0110D638:  1EFF2FE1     BX lr
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass109_0 // TypeDefIndex: 1292
{

	// Fields
	public Action soundCall; // 0x8

	// Methods

	// RVA: 0x110BBE4 Offset: 0x110BBE4 VA: 0x110BBE4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110BBE4:  0010A0E3     MOV r1, 0x0
		   0x0110BBE8:  FF257EEA     B $+0x1f89804  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x110D63C Offset: 0x110D63C VA: 0x110D63C
	internal void <SetSuggestedMerge>b__0() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D63C:  080090E5     LDR r0, [r0, 0x8]
		   0x0110D640:  000050E3     CMPS r0, r0, 0x0
		   0x0110D644:  1EFF2F01     BXEQ lr
		   0x0110D648:  0C2090E5     LDR r2, [r0, 0xc]
		   0x0110D64C:  141090E5     LDR r1, [r0, 0x14]
		   0x0110D650:  200090E5     LDR r0, [r0, 0x20]
		   0x0110D654:  12FF2FE1     BX r2
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass115_0 // TypeDefIndex: 1293
{

	// Fields
	public Item <>4__this; // 0x8
	public Action callback; // 0xC

	// Methods

	// RVA: 0x110C840 Offset: 0x110C840 VA: 0x110C840
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110C840:  0010A0E3     MOV r1, 0x0
		   0x0110C844:  E8227EEA     B $+0x1f88ba8  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x110D658 Offset: 0x110D658 VA: 0x110D658
	internal void <AnimatePlacing>b__0() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D658:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110D65C:  085090E5     LDR r5, [r0, 0x8]
		   0x0110D660:  0040A0E1     MOV r4, r0
		   0x0110D664:  000055E3     CMPS r0, r5, 0x0
		   0x0110D668:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D670
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D66C:  5737F9EB     BL $-0x1b229c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D670:  0500A0E1     MOV r0, r5
		   0x0110D674:  0010A0E3     MOV r1, 0x0
		   0x0110D678:  0060A0E3     MOV r6, 0x0
		   0x0110D67C:  5AF9FFEB     BL $-0x1a90
		   0x0110D680:  085094E5     LDR r5, [r4, 0x8]
		   0x0110D684:  000055E3     CMPS r0, r5, 0x0
		   0x0110D688:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D690
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110D68C:  4F37F9EB     BL $-0x1b22bc
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110D690:  0C0094E5     LDR r0, [r4, 0xc]
		   0x0110D694:  3060C5E5     STRB r6, [r5, 0x30]
		   0x0110D698:  000050E3     CMPS r0, r0, 0x0
		   0x0110D69C:  0400000A     BEQ $+0x18  // if (==) goto 0x0110D6B4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0110D6A0:  0C2090E5     LDR r2, [r0, 0xc]
		   0x0110D6A4:  141090E5     LDR r1, [r0, 0x14]
		   0x0110D6A8:  200090E5     LDR r0, [r0, 0x20]
		   0x0110D6AC:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110D6B0:  12FF2FE1     BX r2
		   // ──── Block 6 if (==) ────────────────────
		   0x0110D6B4:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <StartBubbleTimer>d__126 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1294
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public Item <>4__this; // 0x10
	public int timer; // 0x14
	public Action createCoin; // 0x18

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x110CEF8 Offset: 0x110CEF8 VA: 0x110CEF8
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110CEF8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110CEFC:  0140A0E1     MOV r4, r1
		   0x0110CF00:  0010A0E3     MOV r1, 0x0
		   0x0110CF04:  0050A0E1     MOV r5, r0
		   0x0110CF08:  37217EEB     BL $+0x1f884e4  // CALL → Object..ctor
		   0x0110CF0C:  084085E5     STR r4, [r5, 0x8]
		   0x0110CF10:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x110D6B8 Offset: 0x110D6B8 VA: 0x110D6B8 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D6B8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x110D6BC Offset: 0x110D6BC VA: 0x110D6BC Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 155 instructions, 0x26C bytes):
		   // CFG: 31 blocks, 35 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D6BC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110D6C0:  20D04DE2     SUB sp, sp, 0x20
		   0x0110D6C4:  48529FE5     LDR r5, [pc, 0x248]
		   0x0110D6C8:  0040A0E1     MOV r4, r0
		   0x0110D6CC:  05508FE0     ADD r5, pc, r5
		   0x0110D6D0:  0000D5E5     LDRB r0, [r5]
		   0x0110D6D4:  000050E3     CMPS r0, r0, 0x0
		   0x0110D6D8:  0700001A     BNE $+0x24  // if (!=) goto 0x0110D6FC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D6DC:  34029FE5     LDR r0, [pc, 0x234]
		   0x0110D6E0:  00009FE7     LDR r0, [pc, r0]
		   0x0110D6E4:  9D36F9EB     BL $-0x1b2584
		   0x0110D6E8:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x0110D6EC:  00009FE7     LDR r0, [pc, r0]
		   0x0110D6F0:  9A36F9EB     BL $-0x1b2590
		   0x0110D6F4:  0100A0E3     MOV r0, 0x1
		   0x0110D6F8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D6FC:  080094E5     LDR r0, [r4, 0x8]
		   0x0110D700:  106094E5     LDR r6, [r4, 0x10]
		   0x0110D704:  020050E3     CMPS r0, r0, 0x2
		   0x0110D708:  3200000A     BEQ $+0xd0  // if (==) goto 0x0110D7D8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110D70C:  010050E3     CMPS r0, r0, 0x1
		   0x0110D710:  0C00000A     BEQ $+0x38  // if (==) goto 0x0110D748
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x0110D714:  0080A0E3     MOV r8, 0x0
		   0x0110D718:  000050E3     CMPS r0, r0, 0x0
		   0x0110D71C:  7800001A     BNE $+0x1e8  // if (!=) goto 0x0110D904
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110D720:  145094E5     LDR r5, [r4, 0x14]
		   0x0110D724:  0000E0E3     MVN r0, r0, 0x0
		   0x0110D728:  000056E3     CMPS r0, r6, 0x0
		   0x0110D72C:  080084E5     STR r0, [r4, 0x8]
		   0x0110D730:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D738
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110D734:  2537F9EB     BL $-0x1b2364
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110D738:  0000A0E3     MOV r0, 0x0
		   0x0110D73C:  3C5086E5     STR r5, [r6, 0x3c]  // vtable: Object.Equals
		   0x0110D740:  6C00C6E5     STRB r0, [r6, 0x6c]  // vtable: Object.Equals
		   0x0110D744:  150000EA     B $+0x5c  // goto 0x0110D7A0
		   // ──── Block 8 if (==) ────────────────────
		   0x0110D748:  0000E0E3     MVN r0, r0, 0x0
		   0x0110D74C:  000056E3     CMPS r0, r6, 0x0
		   0x0110D750:  080084E5     STR r0, [r4, 0x8]
		   0x0110D754:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D75C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110D758:  1C37F9EB     BL $-0x1b2388
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110D75C:  6C00D6E5     LDRB r0, [r6, 0x6c]
		   0x0110D760:  000050E3     CMPS r0, r0, 0x0
		   0x0110D764:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110D7A0
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110D768:  3C1096E5     LDR r1, [r6, 0x3c]
		   0x0110D76C:  0020A0E3     MOV r2, 0x0
		   0x0110D770:  340096E5     LDR r0, [r6, 0x34]
		   0x0110D774:  011041E2     SUB r1, r1, 0x1
		   0x0110D778:  3C1086E5     STR r1, [r6, 0x3c]
		   0x0110D77C:  F3B801EB     BL $+0x6e3d4  // CALL → ProfileStorage.SetBubbleTimer
		   0x0110D780:  500096E5     LDR r0, [r6, 0x50]
		   0x0110D784:  000050E3     CMPS r0, r0, 0x0
		   0x0110D788:  0400000A     BEQ $+0x18  // if (==) goto 0x0110D7A0
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x0110D78C:  0C3090E5     LDR r3, [r0, 0xc]
		   0x0110D790:  142090E5     LDR r2, [r0, 0x14]
		   0x0110D794:  200090E5     LDR r0, [r0, 0x20]
		   0x0110D798:  3C1096E5     LDR r1, [r6, 0x3c]
		   0x0110D79C:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x0110D7A0:  3C0096E5     LDR r0, [r6, 0x3c]
		   0x0110D7A4:  000050E3     CMPS r0, r0, 0x0
		   0x0110D7A8:  510000DA     BLE $+0x14c  // if (<=) goto 0x0110D8F4
		   // 
		   // ──── Block 14 else (>) ────────────────────
		   0x0110D7AC:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x0110D7B0:  00009FE7     LDR r0, [pc, r0]
		   0x0110D7B4:  000090E5     LDR r0, [r0]
		   0x0110D7B8:  0137F9EB     BL $-0x1b23f4
		   0x0110D7BC:  FE15A0E3     MOV r1, 0x3f800000
		   0x0110D7C0:  0020A0E3     MOV r2, 0x0
		   0x0110D7C4:  0090A0E1     MOV sb, r0
		   0x0110D7C8:  E8A93BEB     BL $+0xeea7a8  // CALL → sub_1FF7F70
		   0x0110D7CC:  0180A0E3     MOV r8, 0x1
		   0x0110D7D0:  F880C4E1     STRD r8, sb, [r4, 0x8]
		   0x0110D7D4:  4A0000EA     B $+0x130  // goto 0x0110D904
		   // ──── Block 15 if (==) ────────────────────
		   0x0110D7D8:  0000E0E3     MVN r0, r0, 0x0
		   0x0110D7DC:  000056E3     CMPS r0, r6, 0x0
		   0x0110D7E0:  080084E5     STR r0, [r4, 0x8]
		   0x0110D7E4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D7EC
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x0110D7E8:  F836F9EB     BL $-0x1b2418
		   // ──── Block 17 if (!=) ────────────────────
		   0x0110D7EC:  740096E5     LDR r0, [r6, 0x74]
		   0x0110D7F0:  0010A0E3     MOV r1, 0x0
		   0x0110D7F4:  0020A0E3     MOV r2, 0x0
		   0x0110D7F8:  F3A20FEB     BL $+0x3e8bd4  // CALL → ExtensionMethods.SafeKill
		   0x0110D7FC:  185096E5     LDR r5, [r6, 0x18]
		   0x0110D800:  000055E3     CMPS r0, r5, 0x0
		   0x0110D804:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D80C
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0110D808:  F036F9EB     BL $-0x1b2438
		   // ──── Block 19 if (!=) ────────────────────
		   0x0110D80C:  0500A0E1     MOV r0, r5
		   0x0110D810:  0010A0E3     MOV r1, 0x0
		   0x0110D814:  A4A93BEB     BL $+0xeea698  // CALL → sub_1FF7EAC
		   0x0110D818:  0050A0E1     MOV r5, r0
		   0x0110D81C:  000050E3     CMPS r0, r0, 0x0
		   0x0110D820:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D828
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x0110D824:  E936F9EB     BL $-0x1b2454
		   // ──── Block 21 if (!=) ────────────────────
		   0x0110D828:  14008DE2     ADD r0, sp, 0x14
		   0x0110D82C:  0510A0E1     MOV r1, r5
		   0x0110D830:  0020A0E3     MOV r2, 0x0
		   0x0110D834:  0090A0E3     MOV sb, 0x0
		   0x0110D838:  59AA3BEB     BL $+0xeea96c  // CALL → sub_1FF81A4
		   0x0110D83C:  105096E5     LDR r5, [r6, 0x10]
		   0x0110D840:  14A09DE5     LDR r10, [sp, 0x14]
		   0x0110D844:  18809DE5     LDR r8, [sp, 0x18]
		   0x0110D848:  000055E3     CMPS r0, r5, 0x0
		   0x0110D84C:  1C709DE5     LDR r7, [sp, 0x1c]
		   0x0110D850:  0500A0E1     MOV r0, r5
		   0x0110D854:  0300001A     BNE $+0x14  // if (!=) goto 0x0110D868
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x0110D858:  DC36F9EB     BL $-0x1b2488
		   0x0110D85C:  100096E5     LDR r0, [r6, 0x10]
		   0x0110D860:  000050E3     CMPS r0, r0, 0x0
		   0x0110D864:  2900000A     BEQ $+0xac  // if (==) goto 0x0110D910
		   // 
		   // ──── Block 23 (from 2 paths) ──────────────────
		   0x0110D868:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x0110D86C:  0820A0E1     MOV r2, r8
		   0x0110D870:  1C1095E5     LDR r1, [r5, 0x1c]
		   0x0110D874:  0730A0E1     MOV r3, r7
		   0x0110D878:  00108DE5     STR r1, [sp]
		   0x0110D87C:  0A10A0E1     MOV r1, r10
		   0x0110D880:  01028DE9     STMIA sp, {r0, sb}
		   0x0110D884:  0300A0E3     MOV r0, 0x3
		   0x0110D888:  0C908DE5     STR sb, [sp, 0xc]
		   0x0110D88C:  9CC7FFEB     BL $-0xe188
		   0x0110D890:  180094E5     LDR r0, [r4, 0x18]
		   0x0110D894:  104096E5     LDR r4, [r6, 0x10]
		   0x0110D898:  000050E3     CMPS r0, r0, 0x0
		   0x0110D89C:  709086E5     STR sb, [r6, 0x70]
		   0x0110D8A0:  0300000A     BEQ $+0x14  // if (==) goto 0x0110D8B4
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x0110D8A4:  0C2090E5     LDR r2, [r0, 0xc]
		   0x0110D8A8:  141090E5     LDR r1, [r0, 0x14]
		   0x0110D8AC:  200090E5     LDR r0, [r0, 0x20]
		   0x0110D8B0:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 25 if (==) ────────────────────
		   0x0110D8B4:  540096E5     LDR r0, [r6, 0x54]
		   0x0110D8B8:  000050E3     CMPS r0, r0, 0x0
		   0x0110D8BC:  0400000A     BEQ $+0x18  // if (==) goto 0x0110D8D4
		   // 
		   // ──── Block 26 else (!=) ────────────────────
		   0x0110D8C0:  0C3090E5     LDR r3, [r0, 0xc]
		   0x0110D8C4:  0410A0E1     MOV r1, r4
		   0x0110D8C8:  142090E5     LDR r2, [r0, 0x14]
		   0x0110D8CC:  200090E5     LDR r0, [r0, 0x20]
		   0x0110D8D0:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 27 if (==) ────────────────────
		   0x0110D8D4:  48009FE5     LDR r0, [pc, 0x48]
		   0x0110D8D8:  0020A0E3     MOV r2, 0x0
		   0x0110D8DC:  0080A0E3     MOV r8, 0x0
		   0x0110D8E0:  00009FE7     LDR r0, [pc, r0]
		   0x0110D8E4:  001090E5     LDR r1, [r0]
		   0x0110D8E8:  840096E5     LDR r0, [r6, 0x84]
		   0x0110D8EC:  7DC00FEB     BL $+0x3f01fc  // CALL → MergeAnalytics.BubbleDropDisappear
		   0x0110D8F0:  030000EA     B $+0x14  // goto 0x0110D904
		   // ──── Block 28 if (<=) ────────────────────
		   0x0110D8F4:  0200A0E3     MOV r0, 0x2
		   0x0110D8F8:  0010A0E3     MOV r1, 0x0
		   0x0110D8FC:  F800C4E1     STRD r0, r1, [r4, 0x8]
		   0x0110D900:  0180A0E3     MOV r8, 0x1
		   // ──── Block 29 if (!=) ────────────────────
		   0x0110D904:  0800A0E1     MOV r0, r8
		   0x0110D908:  20D08DE2     ADD sp, sp, 0x20
		   0x0110D90C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   // ──── Block 30 if (==) ────────────────────
		   0x0110D910:  AE36F9EB     BL $-0x1b2540
		   0x0110D914:  35E71103     TSTSEQ lr, r1, 0xd40000
		   0x0110D918:  0898F602     RSCSEQ sb, r6, 0x80000
		   0x0110D91C:  6CC2F602     RSCSEQ ip, r6, 0xc0000006
		   0x0110D920:  3897F602     RSCSEQ sb, r6, 0xe00000
		   0x0110D924:  78C0F602     RSCSEQ ip, r6, 0x78
		*/
	}

	[DebuggerHidden]
	// RVA: 0x110D928 Offset: 0x110D928 VA: 0x110D928 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D928:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0110D92C:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x110D930 Offset: 0x110D930 VA: 0x110D930 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D930:  10402DE9     PUSH {r4, lr}
		   0x0110D934:  30009FE5     LDR r0, [pc, 0x30]
		   0x0110D938:  00009FE7     LDR r0, [pc, r0]
		   0x0110D93C:  0B36F9EB     BL $-0x1b27cc
		   0x0110D940:  9F36F9EB     BL $-0x1b257c
		   0x0110D944:  0010A0E3     MOV r1, 0x0
		   0x0110D948:  0040A0E1     MOV r4, r0
		   0x0110D94C:  68F47CEB     BL $+0x1f3d1a8  // CALL → NotSupportedException..ctor
		   0x0110D950:  18009FE5     LDR r0, [pc, 0x18]
		   0x0110D954:  00009FE7     LDR r0, [pc, r0]
		   0x0110D958:  0436F9EB     BL $-0x1b27e8
		   0x0110D95C:  0010A0E1     MOV r1, r0
		   0x0110D960:  0400A0E1     MOV r0, r4
		   0x0110D964:  4536F9EB     BL $-0x1b26e4
		   0x0110D968:  E635F9EB     BL $-0x1b2860
		   0x0110D96C:  A491F602     RSCSEQ sb, r6, 0x29
		   0x0110D970:  08C0F602     RSCSEQ ip, r6, 0x8
		*/
	}

	[DebuggerHidden]
	// RVA: 0x110D974 Offset: 0x110D974 VA: 0x110D974 Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110D974:  0C0090E5     LDR r0, [r0, 0xc]
		   0x0110D978:  1EFF2FE1     BX lr
		*/
	}
}
