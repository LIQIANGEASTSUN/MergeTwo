// Dll : Assembly-CSharp.dll
// Namespace: 
public class GameBoardConstructor : MonoBehaviour // TypeDefIndex: 1172
{

	// Fields
	private Vector2 CELL_SIZE; // 0x10
	private const float BOTTOM_Y_DIFFERENCE_16_9 = 57;
	private const float CELL_SIZE_INITIAL = 160;
	private const float BORDER_SIZE = 20;
	private const float HORIZONTAL_GAP = 40;
	private const float MINIMAL_WIDGETS_SIZE = 250;
	private const float WIDGET_ZONE_INITIAL_Y = -14;
	[SerializeField]
	private RectTransform baseAnchor; // 0x18
	[SerializeField]
	private RectTransform widgetsZone; // 0x1C
	[SerializeField]
	private RectTransform infoZone; // 0x20
	[SerializeField]
	private Sprite[] borderSprites; // 0x24
	[SerializeField]
	private Sprite[] secondBorderSprites; // 0x28
	[SerializeField]
	private RectTransform bottomField; // 0x2C
	[SerializeField]
	private RectTransform topField; // 0x30
	[SerializeField]
	private RectTransform parentFieldObject; // 0x34
	[SerializeField]
	private CanvasGraphicRaycasterGroup canvasGraphicRaycasterGroup; // 0x38
	[SerializeField]
	private BorersCellsPool borersCellsPool; // 0x3C
	[SerializeField]
	private float standartRatioFieldShift; // 0x40
	[SerializeField]
	private float topBarSize; // 0x44
	[SerializeField]
	private float bottomBarSize; // 0x48
	[SerializeField]
	private WidgetsContainerView widgetsContainerView; // 0x4C
	private Vector2 fieldCenter; // 0x50
	private List<Image> borers; // 0x58
	private float fieldFactor; // 0x5C
	public object[] cells; // 0x60
	private LevelLayout level; // 0x64
	private float infoZoneInitialY; // 0x68
	private float topBarSizeProcessed; // 0x6C
	private float bottomBarSizeProcessed; // 0x70
	[CompilerGenerated]
	private Action<Cell> onPointerDown; // 0x74
	[CompilerGenerated]
	private Action<Cell> onPointerUp; // 0x78

	// Properties
	public Transform BottomFieldTransform { get; }
	public Transform TopFieldTransform { get; }

	// Methods

	// RVA: 0x10DA7D0 Offset: 0x10DA7D0 VA: 0x10DA7D0
	public Transform get_BottomFieldTransform() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA7D0:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x010DA7D4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10DA7D8 Offset: 0x10DA7D8 VA: 0x10DA7D8
	public Transform get_TopFieldTransform() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DA7D8:  300090E5     LDR r0, [r0, 0x30]
		   0x010DA7DC:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D193C Offset: 0x10D193C VA: 0x10D193C
	public void add_onPointerDown(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D193C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010D1940:  98409FE5     LDR r4, [pc, 0x98]
		   0x010D1944:  0090A0E1     MOV sb, r0
		   0x010D1948:  0180A0E1     MOV r8, r1
		   0x010D194C:  04408FE0     ADD r4, pc, r4
		   0x010D1950:  0000D4E5     LDRB r0, [r4]
		   0x010D1954:  000050E3     CMPS r0, r0, 0x0
		   0x010D1958:  0400001A     BNE $+0x18  // if (!=) goto 0x010D1970
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D195C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010D1960:  00009FE7     LDR r0, [pc, r0]
		   0x010D1964:  FD25FAEB     BL $-0x176804
		   0x010D1968:  0100A0E3     MOV r0, 0x1
		   0x010D196C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D1970:  7400B9E5     LDR r0, [sb, 0x74]!
		   0x010D1974:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010D1978:  0AA09FE7     LDR r10, [pc, r10]
		   0x010D197C:  0810A0E1     MOV r1, r8
		   0x010D1980:  0020A0E3     MOV r2, 0x0
		   0x010D1984:  0060A0E1     MOV r6, r0
		   0x010D1988:  0070A0E3     MOV r7, 0x0
		   0x010D198C:  E91E7FEB     BL $+0x1fc7bac  // CALL → Delegate.Combine
		   0x010D1990:  000050E3     CMPS r0, r0, 0x0
		   0x010D1994:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D19C4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D1998:  00509AE5     LDR r5, [r10]
		   0x010D199C:  0040A0E1     MOV r4, r0
		   0x010D19A0:  0510A0E1     MOV r1, r5
		   0x010D19A4:  3B26FAEB     BL $-0x17670c
		   0x010D19A8:  0070A0E1     MOV r7, r0
		   0x010D19AC:  000050E3     CMPS r0, r0, 0x0
		   0x010D19B0:  0300001A     BNE $+0x14  // if (!=) goto 0x010D19C4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D19B4:  0400A0E1     MOV r0, r4
		   0x010D19B8:  0510A0E1     MOV r1, r5
		   0x010D19BC:  7127FAEB     BL $-0x176234
		   0x010D19C0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010D19C4:  0900A0E1     MOV r0, sb
		   0x010D19C8:  0710A0E1     MOV r1, r7
		   0x010D19CC:  0620A0E1     MOV r2, r6
		   0x010D19D0:  A812FBEB     BL $-0x13b558
		   0x010D19D4:  060050E1     CMPS r0, r0, r6
		   0x010D19D8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010D19DC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010D19E0:  14A31503     TSTSEQ r10, r5, 0x50000000
		   0x010D19E4:  2C74FA02     RSCSEQ r7, r10, 0x2c000000
		   0x010D19E8:  1474FA02     RSCSEQ r7, r10, 0x14000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DA7E0 Offset: 0x10DA7E0 VA: 0x10DA7E0
	public void remove_onPointerDown(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA7E0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DA7E4:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DA7E8:  0090A0E1     MOV sb, r0
		   0x010DA7EC:  0180A0E1     MOV r8, r1
		   0x010DA7F0:  04408FE0     ADD r4, pc, r4
		   0x010DA7F4:  0000D4E5     LDRB r0, [r4]
		   0x010DA7F8:  000050E3     CMPS r0, r0, 0x0
		   0x010DA7FC:  0400001A     BNE $+0x18  // if (!=) goto 0x010DA814
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA800:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DA804:  00009FE7     LDR r0, [pc, r0]
		   0x010DA808:  5402FAEB     BL $-0x17f6a8
		   0x010DA80C:  0100A0E3     MOV r0, 0x1
		   0x010DA810:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA814:  7400B9E5     LDR r0, [sb, 0x74]!
		   0x010DA818:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DA81C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DA820:  0810A0E1     MOV r1, r8
		   0x010DA824:  0020A0E3     MOV r2, 0x0
		   0x010DA828:  0060A0E1     MOV r6, r0
		   0x010DA82C:  0070A0E3     MOV r7, 0x0
		   0x010DA830:  BEFB7EEB     BL $+0x1fbef00  // CALL → Delegate.Remove
		   0x010DA834:  000050E3     CMPS r0, r0, 0x0
		   0x010DA838:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DA868
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DA83C:  00509AE5     LDR r5, [r10]
		   0x010DA840:  0040A0E1     MOV r4, r0
		   0x010DA844:  0510A0E1     MOV r1, r5
		   0x010DA848:  9202FAEB     BL $-0x17f5b0
		   0x010DA84C:  0070A0E1     MOV r7, r0
		   0x010DA850:  000050E3     CMPS r0, r0, 0x0
		   0x010DA854:  0300001A     BNE $+0x14  // if (!=) goto 0x010DA868
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DA858:  0400A0E1     MOV r0, r4
		   0x010DA85C:  0510A0E1     MOV r1, r5
		   0x010DA860:  C803FAEB     BL $-0x17f0d8
		   0x010DA864:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DA868:  0900A0E1     MOV r0, sb
		   0x010DA86C:  0710A0E1     MOV r1, r7
		   0x010DA870:  0620A0E1     MOV r2, r6
		   0x010DA874:  FFEEFAEB     BL $-0x1443fc
		   0x010DA878:  060050E1     CMPS r0, r0, r6
		   0x010DA87C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DA880:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DA884:  71141503     TSTSEQ r1, r5, 0x71000000
		   0x010DA888:  88E5F902     RSCSEQ lr, sb, 0x22000000
		   0x010DA88C:  70E5F902     RSCSEQ lr, sb, 0x1c000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10D19EC Offset: 0x10D19EC VA: 0x10D19EC
	public void add_onPointerUp(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D19EC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010D19F0:  98409FE5     LDR r4, [pc, 0x98]
		   0x010D19F4:  0090A0E1     MOV sb, r0
		   0x010D19F8:  0180A0E1     MOV r8, r1
		   0x010D19FC:  04408FE0     ADD r4, pc, r4
		   0x010D1A00:  0000D4E5     LDRB r0, [r4]
		   0x010D1A04:  000050E3     CMPS r0, r0, 0x0
		   0x010D1A08:  0400001A     BNE $+0x18  // if (!=) goto 0x010D1A20
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D1A0C:  80009FE5     LDR r0, [pc, 0x80]
		   0x010D1A10:  00009FE7     LDR r0, [pc, r0]
		   0x010D1A14:  D125FAEB     BL $-0x1768b4
		   0x010D1A18:  0100A0E3     MOV r0, 0x1
		   0x010D1A1C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D1A20:  7800B9E5     LDR r0, [sb, 0x78]!
		   0x010D1A24:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010D1A28:  0AA09FE7     LDR r10, [pc, r10]
		   0x010D1A2C:  0810A0E1     MOV r1, r8
		   0x010D1A30:  0020A0E3     MOV r2, 0x0
		   0x010D1A34:  0060A0E1     MOV r6, r0
		   0x010D1A38:  0070A0E3     MOV r7, 0x0
		   0x010D1A3C:  BD1E7FEB     BL $+0x1fc7afc  // CALL → Delegate.Combine
		   0x010D1A40:  000050E3     CMPS r0, r0, 0x0
		   0x010D1A44:  0A00000A     BEQ $+0x30  // if (==) goto 0x010D1A74
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010D1A48:  00509AE5     LDR r5, [r10]
		   0x010D1A4C:  0040A0E1     MOV r4, r0
		   0x010D1A50:  0510A0E1     MOV r1, r5
		   0x010D1A54:  0F26FAEB     BL $-0x1767bc
		   0x010D1A58:  0070A0E1     MOV r7, r0
		   0x010D1A5C:  000050E3     CMPS r0, r0, 0x0
		   0x010D1A60:  0300001A     BNE $+0x14  // if (!=) goto 0x010D1A74
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010D1A64:  0400A0E1     MOV r0, r4
		   0x010D1A68:  0510A0E1     MOV r1, r5
		   0x010D1A6C:  4527FAEB     BL $-0x1762e4
		   0x010D1A70:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010D1A74:  0900A0E1     MOV r0, sb
		   0x010D1A78:  0710A0E1     MOV r1, r7
		   0x010D1A7C:  0620A0E1     MOV r2, r6
		   0x010D1A80:  7C12FBEB     BL $-0x13b608
		   0x010D1A84:  060050E1     CMPS r0, r0, r6
		   0x010D1A88:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010D1A8C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010D1A90:  66A21503     TSTSEQ r10, r5, 0x60000006
		   0x010D1A94:  7C73FA02     RSCSEQ r7, r10, 0xf0000001
		   0x010D1A98:  6473FA02     RSCSEQ r7, r10, 0x90000001
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10DA890 Offset: 0x10DA890 VA: 0x10DA890
	public void remove_onPointerUp(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA890:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010DA894:  98409FE5     LDR r4, [pc, 0x98]
		   0x010DA898:  0090A0E1     MOV sb, r0
		   0x010DA89C:  0180A0E1     MOV r8, r1
		   0x010DA8A0:  04408FE0     ADD r4, pc, r4
		   0x010DA8A4:  0000D4E5     LDRB r0, [r4]
		   0x010DA8A8:  000050E3     CMPS r0, r0, 0x0
		   0x010DA8AC:  0400001A     BNE $+0x18  // if (!=) goto 0x010DA8C4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA8B0:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DA8B4:  00009FE7     LDR r0, [pc, r0]
		   0x010DA8B8:  2802FAEB     BL $-0x17f758
		   0x010DA8BC:  0100A0E3     MOV r0, 0x1
		   0x010DA8C0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA8C4:  7800B9E5     LDR r0, [sb, 0x78]!
		   0x010DA8C8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010DA8CC:  0AA09FE7     LDR r10, [pc, r10]
		   0x010DA8D0:  0810A0E1     MOV r1, r8
		   0x010DA8D4:  0020A0E3     MOV r2, 0x0
		   0x010DA8D8:  0060A0E1     MOV r6, r0
		   0x010DA8DC:  0070A0E3     MOV r7, 0x0
		   0x010DA8E0:  92FB7EEB     BL $+0x1fbee50  // CALL → Delegate.Remove
		   0x010DA8E4:  000050E3     CMPS r0, r0, 0x0
		   0x010DA8E8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010DA918
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010DA8EC:  00509AE5     LDR r5, [r10]
		   0x010DA8F0:  0040A0E1     MOV r4, r0
		   0x010DA8F4:  0510A0E1     MOV r1, r5
		   0x010DA8F8:  6602FAEB     BL $-0x17f660
		   0x010DA8FC:  0070A0E1     MOV r7, r0
		   0x010DA900:  000050E3     CMPS r0, r0, 0x0
		   0x010DA904:  0300001A     BNE $+0x14  // if (!=) goto 0x010DA918
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010DA908:  0400A0E1     MOV r0, r4
		   0x010DA90C:  0510A0E1     MOV r1, r5
		   0x010DA910:  9C03FAEB     BL $-0x17f188
		   0x010DA914:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010DA918:  0900A0E1     MOV r0, sb
		   0x010DA91C:  0710A0E1     MOV r1, r7
		   0x010DA920:  0620A0E1     MOV r2, r6
		   0x010DA924:  D3EEFAEB     BL $-0x1444ac
		   0x010DA928:  060050E1     CMPS r0, r0, r6
		   0x010DA92C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010DA930:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010DA934:  C3131503     TSTSEQ r1, r5, 0xc000003
		   0x010DA938:  D8E4F902     RSCSEQ lr, sb, 0xd8000000
		   0x010DA93C:  C0E4F902     RSCSEQ lr, sb, 0xc0000000
		*/
	}

	// RVA: 0x10D86D8 Offset: 0x10D86D8 VA: 0x10D86D8
	public int PosToIndex(int x, int y) {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010D86D8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010D86DC:  646090E5     LDR r6, [r0, 0x64]
		   0x010D86E0:  0240A0E1     MOV r4, r2
		   0x010D86E4:  0150A0E1     MOV r5, r1
		   0x010D86E8:  000056E3     CMPS r0, r6, 0x0
		   0x010D86EC:  0000001A     BNE $+0x8  // if (!=) goto 0x010D86F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010D86F0:  360BFAEB     BL $-0x17d320
		   // ──── Block 2 if (!=) ────────────────────
		   0x010D86F4:  0600A0E1     MOV r0, r6
		   0x010D86F8:  0010A0E3     MOV r1, 0x0
		   0x010D86FC:  8C780DEB     BL $+0x35e238  // CALL → LevelLayout.get_width
		   0x010D8700:  905420E0     MLA r0, r0, r4, r5
		   0x010D8704:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x10D20E8 Offset: 0x10D20E8 VA: 0x10D20E8
	public void CalculateFieldSize() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D20E8:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		*/
	}

	// RVA: 0x10D4A64 Offset: 0x10D4A64 VA: 0x10D4A64
	public void Show() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D4A64:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		*/
	}

	// RVA: 0x10D4F74 Offset: 0x10D4F74 VA: 0x10D4F74
	public void Hide(Action onHide) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D4F74:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D4F78:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10D5C2C Offset: 0x10D5C2C VA: 0x10D5C2C
	public void LoadLevel(LevelLayout levelLayout) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010D5C2C:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010D5C30:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x10DAF34 Offset: 0x10DAF34 VA: 0x10DAF34
	private void CellHandlerDown(Cell cell) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DAF34:  740090E5     LDR r0, [r0, 0x74]
		   0x010DAF38:  000050E3     CMPS r0, r0, 0x0
		   0x010DAF3C:  1EFF2F01     BXEQ lr
		   0x010DAF40:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010DAF44:  142090E5     LDR r2, [r0, 0x14]
		   0x010DAF48:  200090E5     LDR r0, [r0, 0x20]
		   0x010DAF4C:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10DAF50 Offset: 0x10DAF50 VA: 0x10DAF50
	private void CellHandlerUp(Cell cell) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DAF50:  780090E5     LDR r0, [r0, 0x78]
		   0x010DAF54:  000050E3     CMPS r0, r0, 0x0
		   0x010DAF58:  1EFF2F01     BXEQ lr
		   0x010DAF5C:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010DAF60:  142090E5     LDR r2, [r0, 0x14]
		   0x010DAF64:  200090E5     LDR r0, [r0, 0x20]
		   0x010DAF68:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10DAC58 Offset: 0x10DAC58 VA: 0x10DAC58
	private void SetEnabledBoard(bool isEnabled) {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DAC58:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DAC5C:  1CD04DE2     SUB sp, sp, 0x1c
		   0x010DAC60:  98429FE5     LDR r4, [pc, 0x298]
		   0x010DAC64:  00B0A0E1     MOV fp, r0
		   0x010DAC68:  0190A0E1     MOV sb, r1
		   0x010DAC6C:  04408FE0     ADD r4, pc, r4
		   0x010DAC70:  0000D4E5     LDRB r0, [r4]
		   0x010DAC74:  000050E3     CMPS r0, r0, 0x0
		   0x010DAC78:  1000001A     BNE $+0x48
		   0x010DAC7C:  80029FE5     LDR r0, [pc, 0x280]
		   0x010DAC80:  00009FE7     LDR r0, [pc, r0]
		   0x010DAC84:  3501FAEB     BL $-0x17fb24
		   0x010DAC88:  78029FE5     LDR r0, [pc, 0x278]
		   0x010DAC8C:  00009FE7     LDR r0, [pc, r0]
		   0x010DAC90:  3201FAEB     BL $-0x17fb30
		   0x010DAC94:  70029FE5     LDR r0, [pc, 0x270]
		   0x010DAC98:  00009FE7     LDR r0, [pc, r0]
		   0x010DAC9C:  2F01FAEB     BL $-0x17fb3c
		   0x010DACA0:  68029FE5     LDR r0, [pc, 0x268]
		   0x010DACA4:  00009FE7     LDR r0, [pc, r0]
		   0x010DACA8:  2C01FAEB     BL $-0x17fb48
		   0x010DACAC:  60029FE5     LDR r0, [pc, 0x260]
		   0x010DACB0:  00009FE7     LDR r0, [pc, r0]
		   0x010DACB4:  2901FAEB     BL $-0x17fb54
		   0x010DACB8:  0100A0E3     MOV r0, 0x1
		   0x010DACBC:  0000C4E5     STRB r0, [r4]
		*/
	}

	// RVA: 0x10DA940 Offset: 0x10DA940 VA: 0x10DA940
	private void UpdateFieldFactor(float factor) {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DA940:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010DA944:  24D04DE2     SUB sp, sp, 0x24
		   0x010DA948:  DC429FE5     LDR r4, [pc, 0x2dc]
		   0x010DA94C:  0050A0E1     MOV r5, r0
		   0x010DA950:  01B0A0E1     MOV fp, r1
		   0x010DA954:  04408FE0     ADD r4, pc, r4
		   0x010DA958:  0000D4E5     LDRB r0, [r4]
		   0x010DA95C:  000050E3     CMPS r0, r0, 0x0
		   0x010DA960:  1000001A     BNE $+0x48  // if (!=) goto 0x010DA9A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DA964:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x010DA968:  00009FE7     LDR r0, [pc, r0]
		   0x010DA96C:  FB01FAEB     BL $-0x17f80c
		   0x010DA970:  BC029FE5     LDR r0, [pc, 0x2bc]
		   0x010DA974:  00009FE7     LDR r0, [pc, r0]
		   0x010DA978:  F801FAEB     BL $-0x17f818
		   0x010DA97C:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x010DA980:  00009FE7     LDR r0, [pc, r0]
		   0x010DA984:  F501FAEB     BL $-0x17f824
		   0x010DA988:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x010DA98C:  00009FE7     LDR r0, [pc, r0]
		   0x010DA990:  F201FAEB     BL $-0x17f830
		   0x010DA994:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x010DA998:  00009FE7     LDR r0, [pc, r0]
		   0x010DA99C:  EF01FAEB     BL $-0x17f83c
		   0x010DA9A0:  0100A0E3     MOV r0, 0x1
		   0x010DA9A4:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DA9A8:  607095E5     LDR r7, [r5, 0x60]
		*/
	}

	// RVA: 0x10DAF6C Offset: 0x10DAF6C VA: 0x10DAF6C
	private void Awake() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DAF6C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010DAF70:  385090E5     LDR r5, [r0, 0x38]
		   0x010DAF74:  0040A0E1     MOV r4, r0
		   0x010DAF78:  000055E3     CMPS r0, r5, 0x0
		   0x010DAF7C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DAF84
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DAF80:  1201FAEB     BL $-0x17fbb0
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DAF84:  0500A0E1     MOV r0, r5
		   0x010DAF88:  0010A0E3     MOV r1, 0x0
		   0x010DAF8C:  0020A0E3     MOV r2, 0x0
		   0x010DAF90:  716506EB     BL $+0x1995cc  // CALL → CanvasGraphicRaycasterGroup.SetVisible
		   0x010DAF94:  3C4094E5     LDR r4, [r4, 0x3c]
		   0x010DAF98:  000054E3     CMPS r0, r4, 0x0
		   0x010DAF9C:  0000001A     BNE $+0x8  // if (!=) goto 0x010DAFA4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DAFA0:  0A01FAEB     BL $-0x17fbd0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DAFA4:  0400A0E1     MOV r0, r4
		   0x010DAFA8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010DAFAC:  1AC5FFEA     B $-0xeb90
		*/
	}

	// RVA: 0x10DAFB0 Offset: 0x10DAFB0 VA: 0x10DAFB0
	public void .ctor() {
		/* Disassembly (ARM32, 56 instructions, 0xE0 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DAFB0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010DAFB4:  08D04DE2     SUB sp, sp, 0x8
		   0x010DAFB8:  B4509FE5     LDR r5, [pc, 0xb4]
		   0x010DAFBC:  0040A0E1     MOV r4, r0
		   0x010DAFC0:  05508FE0     ADD r5, pc, r5
		   0x010DAFC4:  0000D5E5     LDRB r0, [r5]
		   0x010DAFC8:  000050E3     CMPS r0, r0, 0x0
		   0x010DAFCC:  0A00001A     BNE $+0x30  // if (!=) goto 0x010DAFFC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DAFD0:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010DAFD4:  00009FE7     LDR r0, [pc, r0]
		   0x010DAFD8:  6000FAEB     BL $-0x17fe78
		   0x010DAFDC:  98009FE5     LDR r0, [pc, 0x98]
		   0x010DAFE0:  00009FE7     LDR r0, [pc, r0]
		   0x010DAFE4:  5D00FAEB     BL $-0x17fe84
		   0x010DAFE8:  90009FE5     LDR r0, [pc, 0x90]
		   0x010DAFEC:  00009FE7     LDR r0, [pc, r0]
		   0x010DAFF0:  5A00FAEB     BL $-0x17fe90
		   0x010DAFF4:  0100A0E3     MOV r0, 0x1
		   0x010DAFF8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DAFFC:  80009FE5     LDR r0, [pc, 0x80]
		   0x010DB000:  001000E3     MOV r1, 0x0
		   0x010DB004:  201344E3     MOVT r1, 0x4320
		   0x010DB008:  00009FE7     LDR r0, [pc, r0]
		   0x010DB00C:  101084E5     STR r1, [r4, 0x10]
		   0x010DB010:  141084E5     STR r1, [r4, 0x14]
		   0x010DB014:  000090E5     LDR r0, [r0]
		   0x010DB018:  E900FAEB     BL $-0x17fc54
		   0x010DB01C:  0060A0E1     MOV r6, r0
		   0x010DB020:  60009FE5     LDR r0, [pc, 0x60]
		   0x010DB024:  00009FE7     LDR r0, [pc, r0]
		   0x010DB028:  001090E5     LDR r1, [r0]
		   0x010DB02C:  0600A0E1     MOV r0, r6
		   0x010DB030:  DE5C6CEB     BL $+0x1b17380  // CALL → List<object>..ctor
		   0x010DB034:  FE75A0E3     MOV r7, 0x3f800000
		   0x010DB038:  0010A0E3     MOV r1, 0x0
		   0x010DB03C:  F865C4E1     STRD r6, r7, [r4, 0x58]
		   0x010DB040:  44009FE5     LDR r0, [pc, 0x44]
		   0x010DB044:  00009FE7     LDR r0, [pc, r0]
		   0x010DB048:  04108DE5     STR r1, [sp, 0x4]
		   0x010DB04C:  00108DE5     STR r1, [sp]
		   0x010DB050:  0D10A0E1     MOV r1, sp
		   0x010DB054:  000090E5     LDR r0, [r0]
		   0x010DB058:  6400FAEB     BL $-0x17fe68
		   0x010DB05C:  600084E5     STR r0, [r4, 0x60]
		   0x010DB060:  0400A0E1     MOV r0, r4
		   0x010DB064:  0010A0E3     MOV r1, 0x0
		   0x010DB068:  8E733CEB     BL $+0xf1ce40  // CALL → sub_1FF7EA8
		   0x010DB06C:  08D08DE2     ADD sp, sp, 0x8
		   0x010DB070:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010DB074:  AA0C1503     TSTSEQ r0, r5, 0xaa00
		   0x010DB078:  CCDBF902     RSCSEQ sp, sb, 0x33000
		   0x010DB07C:  48E0F902     RSCSEQ lr, sb, 0x48
		   0x010DB080:  40E0F902     RSCSEQ lr, sb, 0x40
		   0x010DB084:  24E0F902     RSCSEQ lr, sb, 0x24
		   0x010DB088:  04E0F902     RSCSEQ lr, sb, 0x4
		   0x010DB08C:  5CDBF902     RSCSEQ sp, sb, 0x17000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass42_0 // TypeDefIndex: 1171
{

	// Fields
	public GameBoardConstructor <>4__this; // 0x8
	public Action onHide; // 0xC

	// Methods

	// RVA: 0x10DAF2C Offset: 0x10DAF2C VA: 0x10DAF2C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010DAF2C:  0010A0E3     MOV r1, 0x0
		   0x010DAF30:  2DE97EEA     B $+0x1fba4bc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10DB090 Offset: 0x10DB090 VA: 0x10DB090
	internal void <Hide>b__0() {
		/* Disassembly (ARM32, 34 instructions, 0x88 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010DB090:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010DB094:  085090E5     LDR r5, [r0, 0x8]
		   0x010DB098:  0040A0E1     MOV r4, r0
		   0x010DB09C:  000055E3     CMPS r0, r5, 0x0
		   0x010DB0A0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB0A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010DB0A4:  C900FAEB     BL $-0x17fcd4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010DB0A8:  385095E5     LDR r5, [r5, 0x38]
		   0x010DB0AC:  000055E3     CMPS r0, r5, 0x0
		   0x010DB0B0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB0B8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010DB0B4:  C500FAEB     BL $-0x17fce4
		   // ──── Block 4 if (!=) ────────────────────
		   0x010DB0B8:  145095E5     LDR r5, [r5, 0x14]
		   0x010DB0BC:  000055E3     CMPS r0, r5, 0x0
		   0x010DB0C0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB0C8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010DB0C4:  C100FAEB     BL $-0x17fcf4
		   // ──── Block 6 if (!=) ────────────────────
		   0x010DB0C8:  0500A0E1     MOV r0, r5
		   0x010DB0CC:  0010A0E3     MOV r1, 0x0
		   0x010DB0D0:  0020A0E3     MOV r2, 0x0
		   0x010DB0D4:  B8733CEB     BL $+0xf1cee8  // CALL → sub_1FF7FBC
		   0x010DB0D8:  085094E5     LDR r5, [r4, 0x8]
		   0x010DB0DC:  000055E3     CMPS r0, r5, 0x0
		   0x010DB0E0:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB0E8
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010DB0E4:  B900FAEB     BL $-0x17fd14
		   // ──── Block 8 if (!=) ────────────────────
		   0x010DB0E8:  0500A0E1     MOV r0, r5
		   0x010DB0EC:  0010A0E3     MOV r1, 0x0
		   0x010DB0F0:  D8FEFFEB     BL $-0x498
		   0x010DB0F4:  0C4094E5     LDR r4, [r4, 0xc]
		   0x010DB0F8:  000054E3     CMPS r0, r4, 0x0
		   0x010DB0FC:  0000001A     BNE $+0x8  // if (!=) goto 0x010DB104
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010DB100:  B200FAEB     BL $-0x17fd30
		   // ──── Block 10 if (!=) ────────────────────
		   0x010DB104:  0C2094E5     LDR r2, [r4, 0xc]
		   0x010DB108:  141094E5     LDR r1, [r4, 0x14]
		   0x010DB10C:  200094E5     LDR r0, [r4, 0x20]
		   0x010DB110:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010DB114:  12FF2FE1     BX r2
		*/
	}
}
