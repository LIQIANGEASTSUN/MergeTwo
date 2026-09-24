// Dll : Assembly-CSharp.dll
// Namespace: 
public class ChargeableContainerCooldown : MonoBehaviour // TypeDefIndex: 1266
{

	// Fields
	[SerializeField]
	private FXClockAnimationController clockFX; // 0x10
	[CompilerGenerated]
	private Action onOpenTimerEnd; // 0x14
	[CompilerGenerated]
	private Action<int, bool> onOpenTimerUpdate; // 0x18
	[CompilerGenerated]
	private bool <inProgress>k__BackingField; // 0x1C
	private float currentTime; // 0x20
	private float containerSpeedupCostMultiplier; // 0x24
	private long containerSpeedupFreeThresholdEnergy; // 0x28
	private long containerSpeedupFreeThreshold; // 0x30
	private readonly WaitForEndOfFrame oneFrame; // 0x38
	private Coroutine timerCoroutine; // 0x3C
	private bool startPriceIsEnergy; // 0x40
	private int startEnergyCost; // 0x44
	private float fillCooldown; // 0x48
	private float cooldownBetweenCharges; // 0x4C
	private int fillTimerSpeedUpCost; // 0x50
	private int cooldownBetweenChargesSkipCost; // 0x54
	private Action<bool> pop; // 0x58
	private Action buttonSpeedUpEnergyTrigger; // 0x5C
	private Action setActiveContainerEffects; // 0x60
	private IsFullyFilled isItFillCooldown; // 0x64

	// Properties
	public bool inProgress { get; set; }
	public int skipPrice { get; }
	private float maxTime { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x11017A0 Offset: 0x11017A0 VA: 0x11017A0
	public void add_onOpenTimerEnd(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011017A0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x011017A4:  88609FE5     LDR r6, [pc, 0x88]
		   0x011017A8:  0050A0E1     MOV r5, r0
		   0x011017AC:  0140A0E1     MOV r4, r1
		   0x011017B0:  06608FE0     ADD r6, pc, r6
		   0x011017B4:  0000D6E5     LDRB r0, [r6]
		   0x011017B8:  000050E3     CMPS r0, r0, 0x0
		   0x011017BC:  0400001A     BNE $+0x18  // if (!=) goto 0x011017D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011017C0:  70009FE5     LDR r0, [pc, 0x70]
		   0x011017C4:  00009FE7     LDR r0, [pc, r0]
		   0x011017C8:  6466F9EB     BL $-0x1a6668
		   0x011017CC:  0100A0E3     MOV r0, 0x1
		   0x011017D0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011017D4:  1400B5E5     LDR r0, [r5, 0x14]!
		   0x011017D8:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x011017DC:  08809FE7     LDR r8, [pc, r8]
		   0x011017E0:  0410A0E1     MOV r1, r4
		   0x011017E4:  0020A0E3     MOV r2, 0x0
		   0x011017E8:  0060A0E1     MOV r6, r0
		   0x011017EC:  0070A0E3     MOV r7, 0x0
		   0x011017F0:  505F7EEB     BL $+0x1f97d48  // CALL → Delegate.Combine
		   0x011017F4:  000050E3     CMPS r0, r0, 0x0
		   0x011017F8:  0600000A     BEQ $+0x20  // if (==) goto 0x01101818
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011017FC:  001098E5     LDR r1, [r8]
		   0x01101800:  002090E5     LDR r2, [r0]
		   0x01101804:  010052E1     CMPS r0, r2, r1
		   0x01101808:  0100000A     BEQ $+0xc  // if (==) goto 0x01101814
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x0110180C:  DD67F9EB     BL $-0x1a6084
		   0x01101810:  000000EA     B $+0x8  // goto 0x01101818
		   // ──── Block 5 if (==) ────────────────────
		   0x01101814:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01101818:  0500A0E1     MOV r0, r5
		   0x0110181C:  0710A0E1     MOV r1, r7
		   0x01101820:  0620A0E1     MOV r2, r6
		   0x01101824:  1353FAEB     BL $-0x16b3ac
		   0x01101828:  060050E1     CMPS r0, r0, r6
		   0x0110182C:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x01101830:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01101834:  E7A51203     TSTSEQ r10, r2, 0x39c00000
		   0x01101838:  0051F702     RSCSEQ r5, r7, 0x0
		   0x0110183C:  E850F702     RSCSEQ r5, r7, 0xe8
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1101840 Offset: 0x1101840 VA: 0x1101840
	public void remove_onOpenTimerEnd(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01101840:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01101844:  88609FE5     LDR r6, [pc, 0x88]
		   0x01101848:  0050A0E1     MOV r5, r0
		   0x0110184C:  0140A0E1     MOV r4, r1
		   0x01101850:  06608FE0     ADD r6, pc, r6
		   0x01101854:  0000D6E5     LDRB r0, [r6]
		   0x01101858:  000050E3     CMPS r0, r0, 0x0
		   0x0110185C:  0400001A     BNE $+0x18  // if (!=) goto 0x01101874
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01101860:  70009FE5     LDR r0, [pc, 0x70]
		   0x01101864:  00009FE7     LDR r0, [pc, r0]
		   0x01101868:  3C66F9EB     BL $-0x1a6708
		   0x0110186C:  0100A0E3     MOV r0, 0x1
		   0x01101870:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01101874:  1400B5E5     LDR r0, [r5, 0x14]!
		   0x01101878:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x0110187C:  08809FE7     LDR r8, [pc, r8]
		   0x01101880:  0410A0E1     MOV r1, r4
		   0x01101884:  0020A0E3     MOV r2, 0x0
		   0x01101888:  0060A0E1     MOV r6, r0
		   0x0110188C:  0070A0E3     MOV r7, 0x0
		   0x01101890:  A65F7EEB     BL $+0x1f97ea0  // CALL → Delegate.Remove
		   0x01101894:  000050E3     CMPS r0, r0, 0x0
		   0x01101898:  0600000A     BEQ $+0x20  // if (==) goto 0x011018B8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110189C:  001098E5     LDR r1, [r8]
		   0x011018A0:  002090E5     LDR r2, [r0]
		   0x011018A4:  010052E1     CMPS r0, r2, r1
		   0x011018A8:  0100000A     BEQ $+0xc  // if (==) goto 0x011018B4
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x011018AC:  B567F9EB     BL $-0x1a6124
		   0x011018B0:  000000EA     B $+0x8  // goto 0x011018B8
		   // ──── Block 5 if (==) ────────────────────
		   0x011018B4:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x011018B8:  0500A0E1     MOV r0, r5
		   0x011018BC:  0710A0E1     MOV r1, r7
		   0x011018C0:  0620A0E1     MOV r2, r6
		   0x011018C4:  EB52FAEB     BL $-0x16b44c
		   0x011018C8:  060050E1     CMPS r0, r0, r6
		   0x011018CC:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x011018D0:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x011018D4:  48A51203     TSTSEQ r10, r2, 0x12000000
		   0x011018D8:  6050F702     RSCSEQ r5, r7, 0x60
		   0x011018DC:  4850F702     RSCSEQ r5, r7, 0x48
		*/
	}

	[CompilerGenerated]
	// RVA: 0x11018E0 Offset: 0x11018E0 VA: 0x11018E0
	public void add_onOpenTimerUpdate(Action<int, bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011018E0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x011018E4:  98409FE5     LDR r4, [pc, 0x98]
		   0x011018E8:  0090A0E1     MOV sb, r0
		   0x011018EC:  0180A0E1     MOV r8, r1
		   0x011018F0:  04408FE0     ADD r4, pc, r4
		   0x011018F4:  0000D4E5     LDRB r0, [r4]
		   0x011018F8:  000050E3     CMPS r0, r0, 0x0
		   0x011018FC:  0400001A     BNE $+0x18  // if (!=) goto 0x01101914
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01101900:  80009FE5     LDR r0, [pc, 0x80]
		   0x01101904:  00009FE7     LDR r0, [pc, r0]
		   0x01101908:  1466F9EB     BL $-0x1a67a8
		   0x0110190C:  0100A0E3     MOV r0, 0x1
		   0x01101910:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01101914:  1800B9E5     LDR r0, [sb, 0x18]!
		   0x01101918:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0110191C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01101920:  0810A0E1     MOV r1, r8
		   0x01101924:  0020A0E3     MOV r2, 0x0
		   0x01101928:  0060A0E1     MOV r6, r0
		   0x0110192C:  0070A0E3     MOV r7, 0x0
		   0x01101930:  005F7EEB     BL $+0x1f97c08  // CALL → Delegate.Combine
		   0x01101934:  000050E3     CMPS r0, r0, 0x0
		   0x01101938:  0A00000A     BEQ $+0x30  // if (==) goto 0x01101968
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0110193C:  00509AE5     LDR r5, [r10]
		   0x01101940:  0040A0E1     MOV r4, r0
		   0x01101944:  0510A0E1     MOV r1, r5
		   0x01101948:  5266F9EB     BL $-0x1a66b0
		   0x0110194C:  0070A0E1     MOV r7, r0
		   0x01101950:  000050E3     CMPS r0, r0, 0x0
		   0x01101954:  0300001A     BNE $+0x14  // if (!=) goto 0x01101968
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01101958:  0400A0E1     MOV r0, r4
		   0x0110195C:  0510A0E1     MOV r1, r5
		   0x01101960:  8867F9EB     BL $-0x1a61d8
		   0x01101964:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01101968:  0900A0E1     MOV r0, sb
		   0x0110196C:  0710A0E1     MOV r1, r7
		   0x01101970:  0620A0E1     MOV r2, r6
		   0x01101974:  BF52FAEB     BL $-0x16b4fc
		   0x01101978:  060050E1     CMPS r0, r0, r6
		   0x0110197C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01101980:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01101984:  A9A41203     TSTSEQ r10, r2, 0xa9000000
		   0x01101988:  3875F702     RSCSEQ r7, r7, 0xe000000
		   0x0110198C:  2075F702     RSCSEQ r7, r7, 0x8000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1101990 Offset: 0x1101990 VA: 0x1101990
	public void remove_onOpenTimerUpdate(Action<int, bool> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01101990:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01101994:  98409FE5     LDR r4, [pc, 0x98]
		   0x01101998:  0090A0E1     MOV sb, r0
		   0x0110199C:  0180A0E1     MOV r8, r1
		   0x011019A0:  04408FE0     ADD r4, pc, r4
		   0x011019A4:  0000D4E5     LDRB r0, [r4]
		   0x011019A8:  000050E3     CMPS r0, r0, 0x0
		   0x011019AC:  0400001A     BNE $+0x18  // if (!=) goto 0x011019C4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011019B0:  80009FE5     LDR r0, [pc, 0x80]
		   0x011019B4:  00009FE7     LDR r0, [pc, r0]
		   0x011019B8:  E865F9EB     BL $-0x1a6858
		   0x011019BC:  0100A0E3     MOV r0, 0x1
		   0x011019C0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011019C4:  1800B9E5     LDR r0, [sb, 0x18]!
		   0x011019C8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x011019CC:  0AA09FE7     LDR r10, [pc, r10]
		   0x011019D0:  0810A0E1     MOV r1, r8
		   0x011019D4:  0020A0E3     MOV r2, 0x0
		   0x011019D8:  0060A0E1     MOV r6, r0
		   0x011019DC:  0070A0E3     MOV r7, 0x0
		   0x011019E0:  525F7EEB     BL $+0x1f97d50  // CALL → Delegate.Remove
		   0x011019E4:  000050E3     CMPS r0, r0, 0x0
		   0x011019E8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01101A18
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011019EC:  00509AE5     LDR r5, [r10]
		   0x011019F0:  0040A0E1     MOV r4, r0
		   0x011019F4:  0510A0E1     MOV r1, r5
		   0x011019F8:  2666F9EB     BL $-0x1a6760
		   0x011019FC:  0070A0E1     MOV r7, r0
		   0x01101A00:  000050E3     CMPS r0, r0, 0x0
		   0x01101A04:  0300001A     BNE $+0x14  // if (!=) goto 0x01101A18
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01101A08:  0400A0E1     MOV r0, r4
		   0x01101A0C:  0510A0E1     MOV r1, r5
		   0x01101A10:  5C67F9EB     BL $-0x1a6288
		   0x01101A14:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01101A18:  0900A0E1     MOV r0, sb
		   0x01101A1C:  0710A0E1     MOV r1, r7
		   0x01101A20:  0620A0E1     MOV r2, r6
		   0x01101A24:  9352FAEB     BL $-0x16b5ac
		   0x01101A28:  060050E1     CMPS r0, r0, r6
		   0x01101A2C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01101A30:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01101A34:  FAA31203     TSTSEQ r10, r2, 0xe8000003
		   0x01101A38:  8874F702     RSCSEQ r7, r7, 0x88000000
		   0x01101A3C:  7074F702     RSCSEQ r7, r7, 0x70000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1101A40 Offset: 0x1101A40 VA: 0x1101A40
	public bool get_inProgress() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101A40:  1C00D0E5     LDRB r0, [r0, 0x1c]
		   0x01101A44:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1101A48 Offset: 0x1101A48 VA: 0x1101A48
	private void set_inProgress(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101A48:  1C10C0E5     STRB r1, [r0, 0x1c]
		   0x01101A4C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1101A50 Offset: 0x1101A50 VA: 0x1101A50
	public int get_skipPrice() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01101A50:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01101A54:  645090E5     LDR r5, [r0, 0x64]
		   0x01101A58:  0040A0E1     MOV r4, r0
		   0x01101A5C:  000055E3     CMPS r0, r5, 0x0
		   0x01101A60:  0000001A     BNE $+0x8  // if (!=) goto 0x01101A68
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01101A64:  5966F9EB     BL $-0x1a6694
		   // ──── Block 2 if (!=) ────────────────────
		   0x01101A68:  0C2095E5     LDR r2, [r5, 0xc]
		   0x01101A6C:  141095E5     LDR r1, [r5, 0x14]
		   0x01101A70:  200095E5     LDR r0, [r5, 0x20]
		   0x01101A74:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01101A78:  5410A0E3     MOV r1, 0x54
		   0x01101A7C:  000050E3     CMPS r0, r0, 0x0
		   0x01101A80:  50100013     MOVNE r1, 0x50
		   0x01101A84:  010094E7     LDR r0, [r4, r1]  // this.fillTimerSpeedUpCost
		   0x01101A88:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1101A8C Offset: 0x1101A8C VA: 0x1101A8C
	private float get_maxTime() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01101A8C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01101A90:  645090E5     LDR r5, [r0, 0x64]
		   0x01101A94:  0040A0E1     MOV r4, r0
		   0x01101A98:  000055E3     CMPS r0, r5, 0x0
		   0x01101A9C:  0000001A     BNE $+0x8  // if (!=) goto 0x01101AA4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01101AA0:  4A66F9EB     BL $-0x1a66d0
		   // ──── Block 2 if (!=) ────────────────────
		   0x01101AA4:  0C2095E5     LDR r2, [r5, 0xc]
		   0x01101AA8:  141095E5     LDR r1, [r5, 0x14]
		   0x01101AAC:  200095E5     LDR r0, [r5, 0x20]
		   0x01101AB0:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01101AB4:  4C10A0E3     MOV r1, 0x4c
		   0x01101AB8:  000050E3     CMPS r0, r0, 0x0
		   0x01101ABC:  48100013     MOVNE r1, 0x48
		   0x01101AC0:  010094E7     LDR r0, [r4, r1]  // this.fillCooldown
		   0x01101AC4:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1101AC8 Offset: 0x1101AC8 VA: 0x1101AC8
	public void Init(Action buttonSpeedUpEnergyTrigger, Action setActiveContainerEffects, Action<bool> pop, IsFullyFilled isFilled, int order, string chainType, float fillCooldown, float cooldownBetweenCharges) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101AC8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x1101BE8 Offset: 0x1101BE8 VA: 0x1101BE8
	public bool TryStart(int id) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101BE8:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x1101D70 Offset: 0x1101D70 VA: 0x1101D70
	public void RestoreTimer(int id) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101D70:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x1101F94 Offset: 0x1101F94 VA: 0x1101F94
	public void UpdateAndPauseChargesTimers(int id, float boostSeconds) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101F94:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x1102070 Offset: 0x1102070 VA: 0x1102070
	public void UnpauseChargeTimers(int id, bool silent) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01102070:  70432DE9     PUSH {r4, r5, r6, r8, sb, lr}
		*/
	}

	// RVA: 0x1102224 Offset: 0x1102224 VA: 0x1102224
	private void StartClockAnimation(float time, Action onAnimationEnd, bool silent = false) {
		/* Disassembly (ARM32, 75 instructions, 0x12C bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102224:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01102228:  10D04DE2     SUB sp, sp, 0x10
		   0x0110222C:  00519FE5     LDR r5, [pc, 0x100]
		   0x01102230:  0060A0E1     MOV r6, r0
		   0x01102234:  0370A0E1     MOV r7, r3
		   0x01102238:  0290A0E1     MOV sb, r2
		   0x0110223C:  05508FE0     ADD r5, pc, r5
		   0x01102240:  01A0A0E1     MOV r10, r1
		   0x01102244:  0000D5E5     LDRB r0, [r5]
		   0x01102248:  000050E3     CMPS r0, r0, 0x0
		   0x0110224C:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110227C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01102250:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x01102254:  00009FE7     LDR r0, [pc, r0]
		   0x01102258:  C063F9EB     BL $-0x1a70f8
		   0x0110225C:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x01102260:  00009FE7     LDR r0, [pc, r0]
		   0x01102264:  BD63F9EB     BL $-0x1a7104
		   0x01102268:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x0110226C:  00009FE7     LDR r0, [pc, r0]
		   0x01102270:  BA63F9EB     BL $-0x1a7110
		   0x01102274:  0100A0E3     MOV r0, 0x1
		   0x01102278:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110227C:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01102280:  00009FE7     LDR r0, [pc, r0]
		   0x01102284:  000090E5     LDR r0, [r0]
		   0x01102288:  4D64F9EB     BL $-0x1a6ec4
		   0x0110228C:  0010A0E3     MOV r1, 0x0
		   0x01102290:  0050A0E1     MOV r5, r0
		   0x01102294:  544C7EEB     BL $+0x1f93158  // CALL → Object..ctor
		   0x01102298:  000055E3     CMPS r0, r5, 0x0
		   0x0110229C:  0000001A     BNE $+0x8  // if (!=) goto 0x011022A4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011022A0:  4A64F9EB     BL $-0x1a6ed0
		   // ──── Block 4 if (!=) ────────────────────
		   0x011022A4:  584096E5     LDR r4, [r6, 0x58]
		   0x011022A8:  086085E5     STR r6, [r5, 0x8]
		   0x011022AC:  000054E3     CMPS r0, r4, 0x0
		   0x011022B0:  0C9085E5     STR sb, [r5, 0xc]
		   0x011022B4:  0000001A     BNE $+0x8  // if (!=) goto 0x011022BC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x011022B8:  4464F9EB     BL $-0x1a6ee8
		   // ──── Block 6 if (!=) ────────────────────
		   0x011022BC:  0C3094E5     LDR r3, [r4, 0xc]
		   0x011022C0:  0110A0E3     MOV r1, 0x1
		   0x011022C4:  142094E5     LDR r2, [r4, 0x14]
		   0x011022C8:  200094E5     LDR r0, [r4, 0x20]
		   0x011022CC:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x011022D0:  106096E5     LDR r6, [r6, 0x10]
		   0x011022D4:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x011022D8:  00009FE7     LDR r0, [pc, r0]
		   0x011022DC:  000090E5     LDR r0, [r0]
		   0x011022E0:  3764F9EB     BL $-0x1a6f1c
		   0x011022E4:  0080A0E1     MOV r8, r0
		   0x011022E8:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x011022EC:  0510A0E1     MOV r1, r5
		   0x011022F0:  0030A0E3     MOV r3, 0x0
		   0x011022F4:  00009FE7     LDR r0, [pc, r0]
		   0x011022F8:  002090E5     LDR r2, [r0]
		   0x011022FC:  0800A0E1     MOV r0, r8
		   0x01102300:  0FAC7AEB     BL $+0x1eab044  // CALL → Action..ctor
		   0x01102304:  000056E3     CMPS r0, r6, 0x0
		   0x01102308:  0000001A     BNE $+0x8  // if (!=) goto 0x01102310
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110230C:  2F64F9EB     BL $-0x1a6f3c
		   // ──── Block 8 if (!=) ────────────────────
		   0x01102310:  0600A0E1     MOV r0, r6
		   0x01102314:  0A10A0E1     MOV r1, r10
		   0x01102318:  0020A0E3     MOV r2, 0x0
		   0x0110231C:  0030A0E3     MOV r3, 0x0
		   0x01102320:  00808DE5     STR r8, [sp]
		   0x01102324:  04708DE5     STR r7, [sp, 0x4]
		   0x01102328:  DBEBFFEB     BL $-0x508c
		   0x0110232C:  10D08DE2     ADD sp, sp, 0x10
		   0x01102330:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01102334:  609B1203     TSTSEQ sb, r2, 0x18000
		   0x01102338:  7046F702     RSCSEQ r4, r7, 0x7000000
		   0x0110233C:  4075F702     RSCSEQ r7, r7, 0x10000000
		   0x01102340:  3875F702     RSCSEQ r7, r7, 0xe000000
		   0x01102344:  2475F702     RSCSEQ r7, r7, 0x9000000
		   0x01102348:  EC45F702     RSCSEQ r4, r7, 0x3b000000
		   0x0110234C:  AC74F702     RSCSEQ r7, r7, 0xac000000
		*/
	}

	// RVA: 0x1102358 Offset: 0x1102358 VA: 0x1102358
	public void Hide() {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102358:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110235C:  3C1090E5     LDR r1, [r0, 0x3c]
		   0x01102360:  0040A0E1     MOV r4, r0
		   0x01102364:  000051E3     CMPS r0, r1, 0x0
		   0x01102368:  0400000A     BEQ $+0x18  // if (==) goto 0x01102380
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110236C:  0400A0E1     MOV r0, r4
		   0x01102370:  0020A0E3     MOV r2, 0x0
		   0x01102374:  0050A0E3     MOV r5, 0x0
		   0x01102378:  FAD63BEB     BL $+0xef5bf0  // CALL → sub_1FF7F68
		   0x0110237C:  3C5084E5     STR r5, [r4, 0x3c]
		   // ──── Block 2 if (==) ────────────────────
		   0x01102380:  105094E5     LDR r5, [r4, 0x10]
		   0x01102384:  0060A0E3     MOV r6, 0x0
		   0x01102388:  586084E5     STR r6, [r4, 0x58]
		   0x0110238C:  000055E3     CMPS r0, r5, 0x0
		   0x01102390:  5C6084E5     STR r6, [r4, 0x5c]
		   0x01102394:  606084E5     STR r6, [r4, 0x60]
		   0x01102398:  146084E5     STR r6, [r4, 0x14]
		   0x0110239C:  186084E5     STR r6, [r4, 0x18]
		   0x011023A0:  0000001A     BNE $+0x8  // if (!=) goto 0x011023A8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011023A4:  0964F9EB     BL $-0x1a6fd4
		   // ──── Block 4 if (!=) ────────────────────
		   0x011023A8:  0500A0E1     MOV r0, r5
		   0x011023AC:  80EAFFEB     BL $-0x55f8
		   0x011023B0:  6460C5E5     STRB r6, [r5, 0x64]
		   0x011023B4:  0500A0E1     MOV r0, r5
		   0x011023B8:  0010A0E3     MOV r1, 0x0
		   0x011023BC:  7040BDE8     POP {r4, r5, r6, lr}
		   0x011023C0:  CAE9FFEA     B $-0x58d0
		*/
	}

	// RVA: 0x11023C4 Offset: 0x11023C4 VA: 0x11023C4
	public void RemoveTimerListeners() {
		/* Disassembly (ARM32, 5 instructions, 0x14 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011023C4:  0010A0E3     MOV r1, 0x0
		   0x011023C8:  5C1080E5     STR r1, [r0, 0x5c]
		   0x011023CC:  141080E5     STR r1, [r0, 0x14]
		   0x011023D0:  181080E5     STR r1, [r0, 0x18]
		   0x011023D4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x11023D8 Offset: 0x11023D8 VA: 0x11023D8
	public void ReleaseTimers(int id) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011023D8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011023DC:  0050A0E3     MOV r5, 0x0
		   0x011023E0:  0040A0E1     MOV r4, r0
		   0x011023E4:  1C50C0E5     STRB r5, [r0, 0x1c]
		   0x011023E8:  0100A0E1     MOV r0, r1
		   0x011023EC:  73D7FFEB     BL $-0xa22c
		   0x011023F0:  3C1094E5     LDR r1, [r4, 0x3c]
		   0x011023F4:  000051E3     CMPS r0, r1, 0x0
		   0x011023F8:  0300000A     BEQ $+0x14  // if (==) goto 0x0110240C
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x011023FC:  0400A0E1     MOV r0, r4
		   0x01102400:  0020A0E3     MOV r2, 0x0
		   0x01102404:  D7D63BEB     BL $+0xef5b64  // CALL → sub_1FF7F68
		   0x01102408:  3C5084E5     STR r5, [r4, 0x3c]
		   // ──── Block 2 if (==) ────────────────────
		   0x0110240C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1102410 Offset: 0x1102410 VA: 0x1102410
	public void ForceRecharge(int id) {
		/* Disassembly (ARM32, 16 instructions, 0x40 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102410:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01102414:  10D04DE2     SUB sp, sp, 0x10
		   0x01102418:  646090E5     LDR r6, [r0, 0x64]
		   0x0110241C:  0150A0E1     MOV r5, r1
		   0x01102420:  0040A0E1     MOV r4, r0
		   0x01102424:  000056E3     CMPS r0, r6, 0x0
		   0x01102428:  0000001A     BNE $+0x8  // if (!=) goto 0x01102430
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110242C:  E763F9EB     BL $-0x1a705c
		   // ──── Block 2 if (!=) ────────────────────
		   0x01102430:  0C2096E5     LDR r2, [r6, 0xc]
		   0x01102434:  141096E5     LDR r1, [r6, 0x14]
		   0x01102438:  200096E5     LDR r0, [r6, 0x20]
		   0x0110243C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01102440:  4C10A0E3     MOV r1, 0x4c
		   0x01102444:  000050E3     CMPS r0, r0, 0x0
		   0x01102448:  48100013     MOVNE r1, 0x48
		   0x0110244C:  010084E0     ADD r0, r4, r1
		*/
	}

	// RVA: 0x11024B4 Offset: 0x11024B4 VA: 0x11024B4
	public void Recharge(Action<bool> canRecharge, int id) {
		/* Disassembly (ARM32, 254 instructions, 0x3F8 bytes):
		   // CFG: 35 blocks, 33 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011024B4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011024B8:  4CD04DE2     SUB sp, sp, 0x4c
		   0x011024BC:  9C439FE5     LDR r4, [pc, 0x39c]
		   0x011024C0:  0050A0E1     MOV r5, r0
		   0x011024C4:  0270A0E1     MOV r7, r2
		   0x011024C8:  0160A0E1     MOV r6, r1
		   0x011024CC:  04408FE0     ADD r4, pc, r4
		   0x011024D0:  0000D4E5     LDRB r0, [r4]
		   0x011024D4:  000050E3     CMPS r0, r0, 0x0
		   0x011024D8:  1600001A     BNE $+0x60  // if (!=) goto 0x01102538
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011024DC:  80039FE5     LDR r0, [pc, 0x380]
		   0x011024E0:  00009FE7     LDR r0, [pc, r0]
		   0x011024E4:  1D63F9EB     BL $-0x1a7384
		   0x011024E8:  78039FE5     LDR r0, [pc, 0x378]
		   0x011024EC:  00009FE7     LDR r0, [pc, r0]
		   0x011024F0:  1A63F9EB     BL $-0x1a7390
		   0x011024F4:  70039FE5     LDR r0, [pc, 0x370]
		   0x011024F8:  00009FE7     LDR r0, [pc, r0]
		   0x011024FC:  1763F9EB     BL $-0x1a739c
		   0x01102500:  68039FE5     LDR r0, [pc, 0x368]
		   0x01102504:  00009FE7     LDR r0, [pc, r0]
		   0x01102508:  1463F9EB     BL $-0x1a73a8
		   0x0110250C:  60039FE5     LDR r0, [pc, 0x360]
		   0x01102510:  00009FE7     LDR r0, [pc, r0]
		   0x01102514:  1163F9EB     BL $-0x1a73b4
		   0x01102518:  58039FE5     LDR r0, [pc, 0x358]
		   0x0110251C:  00009FE7     LDR r0, [pc, r0]
		   0x01102520:  0E63F9EB     BL $-0x1a73c0
		   0x01102524:  50039FE5     LDR r0, [pc, 0x350]
		   0x01102528:  00009FE7     LDR r0, [pc, r0]
		   0x0110252C:  0B63F9EB     BL $-0x1a73cc
		   0x01102530:  0100A0E3     MOV r0, 0x1
		   0x01102534:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01102538:  40039FE5     LDR r0, [pc, 0x340]
		   0x0110253C:  0010A0E3     MOV r1, 0x0
		   0x01102540:  00009FE7     LDR r0, [pc, r0]
		   0x01102544:  44108DE5     STR r1, [sp, 0x44]
		   0x01102548:  40108DE5     STR r1, [sp, 0x40]
		   0x0110254C:  000090E5     LDR r0, [r0]
		   0x01102550:  48108DE5     STR r1, [sp, 0x48]
		   0x01102554:  34108DE5     STR r1, [sp, 0x34]
		   0x01102558:  30108DE5     STR r1, [sp, 0x30]
		   0x0110255C:  38108DE5     STR r1, [sp, 0x38]
		   0x01102560:  9763F9EB     BL $-0x1a719c
		   0x01102564:  0010A0E3     MOV r1, 0x0
		   0x01102568:  0040A0E1     MOV r4, r0
		   0x0110256C:  9E4B7EEB     BL $+0x1f92e80  // CALL → Object..ctor
		   0x01102570:  000054E3     CMPS r0, r4, 0x0
		   0x01102574:  0000001A     BNE $+0x8  // if (!=) goto 0x0110257C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01102578:  9463F9EB     BL $-0x1a71a8
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110257C:  4000D5E5     LDRB r0, [r5, 0x40]
		   0x01102580:  107084E5     STR r7, [r4, 0x10]
		   0x01102584:  000050E3     CMPS r0, r0, 0x0
		   0x01102588:  0C5084E5     STR r5, [r4, 0xc]
		   0x0110258C:  086084E5     STR r6, [r4, 0x8]
		   0x01102590:  1100000A     BEQ $+0x4c  // if (==) goto 0x011025DC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01102594:  0000A0E3     MOV r0, 0x0
		   0x01102598:  0070A0E3     MOV r7, 0x0
		   0x0110259C:  4FDE01EB     BL $+0x77944  // CALL → ProfileStorage.get_numEnergy
		   0x011025A0:  441095E5     LDR r1, [r5, 0x44]
		   0x011025A4:  010050E1     CMPS r0, r0, r1
		   0x011025A8:  6E0000AA     BGE $+0x1c0  // if (>=) goto 0x01102768
		   // 
		   // ──── Block 6 else (<) ────────────────────
		   0x011025AC:  5C0095E5     LDR r0, [r5, 0x5c]
		   0x011025B0:  000050E3     CMPS r0, r0, 0x0
		   0x011025B4:  0300000A     BEQ $+0x14  // if (==) goto 0x011025C8
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x011025B8:  0C2090E5     LDR r2, [r0, 0xc]
		   0x011025BC:  141090E5     LDR r1, [r0, 0x14]
		   0x011025C0:  200090E5     LDR r0, [r0, 0x20]
		   0x011025C4:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 8 if (==) ────────────────────
		   0x011025C8:  0400A0E1     MOV r0, r4
		   0x011025CC:  0010A0E3     MOV r1, 0x0
		   0x011025D0:  4CD08DE2     ADD sp, sp, 0x4c
		   0x011025D4:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011025D8:  B50000EA     B $+0x2dc  // TAIL CALL → <>c__DisplayClass41_0.<Recharge>g__Spend|0
		   // ──── Block 9 if (==) ────────────────────
		   0x011025DC:  0010A0E3     MOV r1, 0x0
		   0x011025E0:  1A00A0E3     MOV r0, 0x1a
		   0x011025E4:  F000CDE1     STRD r0, r1, [sp]
		   0x011025E8:  30008DE2     ADD r0, sp, 0x30
		   0x011025EC:  0210A0E3     MOV r1, 0x2
		   0x011025F0:  0420A0E3     MOV r2, 0x4
		   0x011025F4:  0D30A0E3     MOV r3, 0xd
		   0x011025F8:  666308EB     BL $+0x218da0  // CALL → CurrencySinkDataContainer..ctor
		   0x011025FC:  90029FE5     LDR r0, [pc, 0x290]
		   0x01102600:  00009FE7     LDR r0, [pc, r0]
		   0x01102604:  000090E5     LDR r0, [r0]
		   0x01102608:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110260C:  007090E5     LDR r7, [r0]
		   0x01102610:  000057E3     CMPS r0, r7, 0x0
		   0x01102614:  0000001A     BNE $+0x8  // if (!=) goto 0x0110261C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01102618:  6C63F9EB     BL $-0x1a7248
		   // ──── Block 11 if (!=) ────────────────────
		   0x0110261C:  646095E5     LDR r6, [r5, 0x64]
		   0x01102620:  189097E5     LDR sb, [r7, 0x18]
		   0x01102624:  000056E3     CMPS r0, r6, 0x0
		   0x01102628:  0000001A     BNE $+0x8  // if (!=) goto 0x01102630
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0110262C:  6763F9EB     BL $-0x1a725c
		   // ──── Block 13 if (!=) ────────────────────
		   0x01102630:  0C2096E5     LDR r2, [r6, 0xc]
		   0x01102634:  141096E5     LDR r1, [r6, 0x14]
		   0x01102638:  200096E5     LDR r0, [r6, 0x20]
		   0x0110263C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01102640:  000050E3     CMPS r0, r0, 0x0
		   0x01102644:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x01102648:  5410A0E3     MOV r1, 0x54
		   0x0110264C:  50100013     MOVNE r1, 0x50
		   0x01102650:  00009FE7     LDR r0, [pc, r0]
		   0x01102654:  018095E7     LDR r8, [r5, r1]  // this.fillTimerSpeedUpCost
		   0x01102658:  000090E5     LDR r0, [r0]
		   0x0110265C:  5863F9EB     BL $-0x1a7298
		   0x01102660:  00A0A0E1     MOV r10, r0
		   0x01102664:  30029FE5     LDR r0, [pc, 0x230]
		   0x01102668:  0410A0E1     MOV r1, r4
		   0x0110266C:  0030A0E3     MOV r3, 0x0
		   0x01102670:  00009FE7     LDR r0, [pc, r0]
		   0x01102674:  002090E5     LDR r2, [r0]
		   0x01102678:  0A00A0E1     MOV r0, r10
		   0x0110267C:  A67E52EB     BL $+0x149faa0  // CALL → Action<bool>..ctor
		   0x01102680:  18029FE5     LDR r0, [pc, 0x218]
		   0x01102684:  00009FE7     LDR r0, [pc, r0]
		   0x01102688:  004090E5     LDR r4, [r0]
		   0x0110268C:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x01102690:  000050E3     CMPS r0, r0, 0x0
		   0x01102694:  0200001A     BNE $+0x10  // if (!=) goto 0x011026A4
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01102698:  0400A0E1     MOV r0, r4
		   0x0110269C:  1C51FAEB     BL $-0x16bb88
		   0x011026A0:  1C0094E5     LDR r0, [r4, 0x1c]
		   // ──── Block 15 if (!=) ────────────────────
		   0x011026A4:  080090E5     LDR r0, [r0, 0x8]
		   0x011026A8:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011026AC:  010011E3     TSTS r0, r1, 0x1
		   0x011026B0:  0000001A     BNE $+0x8  // if (!=) goto 0x011026B8
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x011026B4:  FF50FAEB     BL $-0x16bbfc
		   // ──── Block 17 if (!=) ────────────────────
		   0x011026B8:  741090E5     LDR r1, [r0, 0x74]
		   0x011026BC:  000051E3     CMPS r0, r1, 0x0
		   0x011026C0:  0000001A     BNE $+0x8  // if (!=) goto 0x011026C8
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x011026C4:  F262F9EB     BL $-0x1a7430
		   // ──── Block 19 if (!=) ────────────────────
		   0x011026C8:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x011026CC:  080090E5     LDR r0, [r0, 0x8]
		   0x011026D0:  BD1BD0E1     LDRH r1, [r0, 0xbd]
		   0x011026D4:  010011E3     TSTS r0, r1, 0x1
		   0x011026D8:  0000001A     BNE $+0x8  // if (!=) goto 0x011026E0
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x011026DC:  F550FAEB     BL $-0x16bc24
		   // ──── Block 21 if (!=) ────────────────────
		   0x011026E0:  BC119FE5     LDR r1, [pc, 0x1bc]
		   0x011026E4:  01109FE7     LDR r1, [pc, r1]
		   0x011026E8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011026EC:  001091E5     LDR r1, [r1]
		   0x011026F0:  004090E5     LDR r4, [r0]
		   0x011026F4:  742091E5     LDR r2, [r1, 0x74]
		   0x011026F8:  000052E3     CMPS r0, r2, 0x0
		   0x011026FC:  0100001A     BNE $+0xc  // if (!=) goto 0x01102708
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x01102700:  0100A0E1     MOV r0, r1
		   0x01102704:  E262F9EB     BL $-0x1a7470
		   // ──── Block 23 if (!=) ────────────────────
		   0x01102708:  98019FE5     LDR r0, [pc, 0x198]
		   0x0110270C:  0410A0E1     MOV r1, r4
		   0x01102710:  0020A0E3     MOV r2, 0x0
		   0x01102714:  00B0A0E3     MOV fp, 0x0
		   0x01102718:  00009FE7     LDR r0, [pc, r0]
		   0x0110271C:  000090E5     LDR r0, [r0]
		   0x01102720:  8AE80FEB     BL $+0x3fa230  // CALL → MergeLocalization.GetLocalization
		   0x01102724:  30609DE5     LDR r6, [sp, 0x30]
		   0x01102728:  0040A0E1     MOV r4, r0
		   0x0110272C:  34709DE5     LDR r7, [sp, 0x34]
		   0x01102730:  000059E3     CMPS r0, sb, 0x0
		   0x01102734:  38509DE5     LDR r5, [sp, 0x38]
		   0x01102738:  0000001A     BNE $+0x8  // if (!=) goto 0x01102740
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x0110273C:  2363F9EB     BL $-0x1a736c
		   // ──── Block 25 if (!=) ────────────────────
		   0x01102740:  0900A0E1     MOV r0, sb
		   0x01102744:  0810A0E1     MOV r1, r8
		   0x01102748:  0A20A0E1     MOV r2, r10
		   0x0110274C:  0430A0E1     MOV r3, r4
		   0x01102750:  C0008DE8     STM sp, {r6, r7}
		   0x01102754:  08508DE5     STR r5, [sp, 0x8]
		   0x01102758:  0CB08DE5     STR fp, [sp, 0xc]
		   0x0110275C:  10B08DE5     STR fp, [sp, 0x10]
		   0x01102760:  50CD0CEB     BL $+0x333548  // CALL → GemsSystem.SpendGems
		   0x01102764:  3B0000EA     B $+0xf4  // goto 0x01102858
		   // ──── Block 26 if (>=) ────────────────────
		   0x01102768:  40008DE2     ADD r0, sp, 0x40
		   0x0110276C:  1960A0E3     MOV r6, 0x19
		   0x01102770:  1510A0E3     MOV r1, 0x15
		   0x01102774:  0320A0E3     MOV r2, 0x3
		   0x01102778:  0C30A0E3     MOV r3, 0xc
		   0x0110277C:  F060CDE1     STRD r6, r7, [sp]
		   0x01102780:  046308EB     BL $+0x218c18  // CALL → CurrencySinkDataContainer..ctor
		   0x01102784:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x01102788:  00009FE7     LDR r0, [pc, r0]
		   0x0110278C:  000090E5     LDR r0, [r0]
		   0x01102790:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01102794:  006090E5     LDR r6, [r0]
		   0x01102798:  000056E3     CMPS r0, r6, 0x0
		   0x0110279C:  0000001A     BNE $+0x8  // if (!=) goto 0x011027A4
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x011027A0:  0A63F9EB     BL $-0x1a73d0
		   // ──── Block 28 if (!=) ────────────────────
		   0x011027A4:  DC709FE5     LDR r7, [pc, 0xdc]
		   0x011027A8:  440095E5     LDR r0, [r5, 0x44]
		   0x011027AC:  07708FE0     ADD r7, pc, r7
		   0x011027B0:  20008DE5     STR r0, [sp, 0x20]
		   0x011027B4:  1C6096E5     LDR r6, [r6, 0x1c]
		   0x011027B8:  0000D7E5     LDRB r0, [r7]
		   0x011027BC:  000050E3     CMPS r0, r0, 0x0
		   0x011027C0:  0400001A     BNE $+0x18  // if (!=) goto 0x011027D8
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x011027C4:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x011027C8:  00009FE7     LDR r0, [pc, r0]
		   0x011027CC:  6362F9EB     BL $-0x1a766c
		   0x011027D0:  0100A0E3     MOV r0, 0x1
		   0x011027D4:  0000C7E5     STRB r0, [r7]
		   // ──── Block 30 if (!=) ────────────────────
		   0x011027D8:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x011027DC:  0010A0E3     MOV r1, 0x0
		   0x011027E0:  00009FE7     LDR r0, [pc, r0]
		   0x011027E4:  000090E5     LDR r0, [r0]
		   0x011027E8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x011027EC:  080090E5     LDR r0, [r0, 0x8]
		   0x011027F0:  1C008DE5     STR r0, [sp, 0x1c]
		   0x011027F4:  24008DE2     ADD r0, sp, 0x24
		   0x011027F8:  D28B00EB     BL $+0x22f50  // CALL → GameplayInterfaceManager.get_currentFieldGroup
		   0x011027FC:  24B09DE5     LDR fp, [sp, 0x24]
		   0x01102800:  000056E3     CMPS r0, r6, 0x0
		   0x01102804:  28709DE5     LDR r7, [sp, 0x28]
		   0x01102808:  2C509DE5     LDR r5, [sp, 0x2c]
		   0x0110280C:  40909DE5     LDR sb, [sp, 0x40]
		   0x01102810:  44809DE5     LDR r8, [sp, 0x44]
		   0x01102814:  48A09DE5     LDR r10, [sp, 0x48]
		   0x01102818:  0000001A     BNE $+0x8  // if (!=) goto 0x01102820
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x0110281C:  EB62F9EB     BL $-0x1a744c
		   // ──── Block 32 if (!=) ────────────────────
		   0x01102820:  0000A0E3     MOV r0, 0x0
		   0x01102824:  00708DE5     STR r7, [sp]
		   0x01102828:  14008DE5     STR r0, [sp, 0x14]
		   0x0110282C:  0600A0E1     MOV r0, r6
		   0x01102830:  20028DE9     STMIA sp, {r5, sb}
		   0x01102834:  0B30A0E1     MOV r3, fp
		   0x01102838:  0C808DE5     STR r8, [sp, 0xc]
		   0x0110283C:  10A08DE5     STR r10, [sp, 0x10]
		   0x01102840:  20109DE5     LDR r1, [sp, 0x20]
		   0x01102844:  1C209DE5     LDR r2, [sp, 0x1c]
		   0x01102848:  79C30CEB     BL $+0x330dec  // CALL → EnergySystem.SpendEnergy
		   0x0110284C:  0400A0E1     MOV r0, r4
		   0x01102850:  0110A0E3     MOV r1, 0x1
		   0x01102854:  160000EB     BL $+0x60  // CALL → <>c__DisplayClass41_0.<Recharge>g__Spend|0
		   // ──── Block 33 ──────────────────────────────
		   0x01102858:  4CD08DE2     ADD sp, sp, 0x4c
		   0x0110285C:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x01102860:  D1981203     TSTSEQ sb, r2, 0xd10000
		   0x01102864:  B852F702     RSCSEQ r5, r7, 0x8000000b
		   0x01102868:  B440F702     RSCSEQ r4, r7, 0xb4
		   0x0110286C:  0457F702     RSCSEQ r5, r7, 0x100000
		   0x01102870:  A461F702     RSCSEQ r6, r7, 0x29
		   0x01102874:  9872F702     RSCSEQ r7, r7, 0x80000009
		   0x01102878:  9072F702     RSCSEQ r7, r7, 0x9
		   0x0110287C:  8872F702     RSCSEQ r7, r7, 0x80000008
		   0x01102880:  6C72F702     RSCSEQ r7, r7, 0xc0000006
		   0x01102884:  7454F702     RSCSEQ r5, r7, 0x74000000
		   0x01102888:  35951203     TSTSEQ sb, r2, 0xd400000
		   0x0110288C:  886BF702     RSCSEQ r6, r7, 0x22000
		   0x01102890:  706BF702     RSCSEQ r6, r7, 0x1c000
		   0x01102894:  FC55F702     RSCSEQ r5, r7, 0x3f000000
		   0x01102898:  4851F702     RSCSEQ r5, r7, 0x12
		   0x0110289C:  3871F702     RSCSEQ r7, r7, 0xe
		   0x011028A0:  1C3FF702     RSCSEQ r3, r7, 0x70
		   0x011028A4:  C45FF702     RSCSEQ r5, r7, 0x310
		   0x011028A8:  9870F702     RSCSEQ r7, r7, 0x98
		*/
	}

	// RVA: 0x1102ACC Offset: 0x1102ACC VA: 0x1102ACC
	public void CalculateAndSendOpenTimer() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01102ACC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x1101CC0 Offset: 0x1101CC0 VA: 0x1101CC0
	private void StopTimerCoroutine() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01101CC0:  3C1090E5     LDR r1, [r0, 0x3c]
		   0x01101CC4:  000051E3     CMPS r0, r1, 0x0
		   0x01101CC8:  1EFF2F01     BXEQ lr
		   0x01101CCC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01101CD0:  0020A0E3     MOV r2, 0x0
		   0x01101CD4:  0040A0E1     MOV r4, r0
		   0x01101CD8:  0050A0E3     MOV r5, 0x0
		   0x01101CDC:  A1D83BEB     BL $+0xef628c  // CALL → sub_1FF7F68
		   0x01101CE0:  3C5084E5     STR r5, [r4, 0x3c]
		   0x01101CE4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01101CE8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1101F24 Offset: 0x1101F24 VA: 0x1101F24
	private void TimerEndHandler(int id) {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01101F24:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01101F28:  0040A0E1     MOV r4, r0
		   0x01101F2C:  0100A0E1     MOV r0, r1
		   0x01101F30:  A2D8FFEB     BL $-0x9d70
		   0x01101F34:  140094E5     LDR r0, [r4, 0x14]
		   0x01101F38:  0010A0E3     MOV r1, 0x0
		   0x01101F3C:  1C10C4E5     STRB r1, [r4, 0x1c]
		   0x01101F40:  000050E3     CMPS r0, r0, 0x0
		   0x01101F44:  0300000A     BEQ $+0x14  // if (==) goto 0x01101F58
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01101F48:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01101F4C:  141090E5     LDR r1, [r0, 0x14]
		   0x01101F50:  200090E5     LDR r0, [r0, 0x20]
		   0x01101F54:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 2 if (==) ────────────────────
		   0x01101F58:  105094E5     LDR r5, [r4, 0x10]
		   0x01101F5C:  000055E3     CMPS r0, r5, 0x0
		   0x01101F60:  0000001A     BNE $+0x8  // if (!=) goto 0x01101F68
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01101F64:  1965F9EB     BL $-0x1a6b94
		   // ──── Block 4 if (!=) ────────────────────
		   0x01101F68:  0500A0E1     MOV r0, r5
		   0x01101F6C:  09ECFFEB     BL $-0x4fd4
		   0x01101F70:  604094E5     LDR r4, [r4, 0x60]
		   0x01101F74:  000054E3     CMPS r0, r4, 0x0
		   0x01101F78:  0000001A     BNE $+0x8  // if (!=) goto 0x01101F80
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01101F7C:  1365F9EB     BL $-0x1a6bac
		   // ──── Block 6 if (!=) ────────────────────
		   0x01101F80:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01101F84:  141094E5     LDR r1, [r4, 0x14]
		   0x01101F88:  200094E5     LDR r0, [r4, 0x20]
		   0x01101F8C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01101F90:  12FF2FE1     BX r2
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x1101CEC Offset: 0x1101CEC VA: 0x1101CEC
	private IEnumerator StartTimer(float startTime, int id) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01101CEC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x1102C34 Offset: 0x1102C34 VA: 0x1102C34
	private void CalculateCost() {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102C34:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01102C38:  10D04DE2     SUB sp, sp, 0x10
		   0x01102C3C:  F8509FE5     LDR r5, [pc, 0xf8]
		   0x01102C40:  0040A0E1     MOV r4, r0
		   0x01102C44:  05508FE0     ADD r5, pc, r5
		   0x01102C48:  0000D5E5     LDRB r0, [r5]
		   0x01102C4C:  000050E3     CMPS r0, r0, 0x0
		   0x01102C50:  0A00001A     BNE $+0x30  // if (!=) goto 0x01102C80
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01102C54:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x01102C58:  00009FE7     LDR r0, [pc, r0]
		   0x01102C5C:  3F61F9EB     BL $-0x1a7afc
		   0x01102C60:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x01102C64:  00009FE7     LDR r0, [pc, r0]
		   0x01102C68:  3C61F9EB     BL $-0x1a7b08
		   0x01102C6C:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x01102C70:  00009FE7     LDR r0, [pc, r0]
		   0x01102C74:  3961F9EB     BL $-0x1a7b14
		   0x01102C78:  0100A0E3     MOV r0, 0x1
		   0x01102C7C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01102C80:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x01102C84:  286084E2     ADD r6, r4, 0x28
		   0x01102C88:  308084E2     ADD r8, r4, 0x30
		   0x01102C8C:  00009FE7     LDR r0, [pc, r0]
		   0x01102C90:  000090E5     LDR r0, [r0]
		   0x01102C94:  741090E5     LDR r1, [r0, 0x74]
		   0x01102C98:  000051E3     CMPS r0, r1, 0x0
		   0x01102C9C:  0000001A     BNE $+0x8  // if (!=) goto 0x01102CA4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01102CA0:  7B61F9EB     BL $-0x1a7a0c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01102CA4:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01102CA8:  0070A0E3     MOV r7, 0x0
		   0x01102CAC:  0020A0E3     MOV r2, 0x0
		   0x01102CB0:  0030A0E3     MOV r3, 0x0
		   0x01102CB4:  00009FE7     LDR r0, [pc, r0]
		   0x01102CB8:  00708DE5     STR r7, [sp]
		   0x01102CBC:  04708DE5     STR r7, [sp, 0x4]
		   0x01102CC0:  000090E5     LDR r0, [r0]
		   0x01102CC4:  08708DE5     STR r7, [sp, 0x8]
		   0x01102CC8:  0C708DE5     STR r7, [sp, 0xc]
		   0x01102CCC:  F573FEEB     BL $-0x63024
		   0x01102CD0:  7C509FE5     LDR r5, [pc, 0x7c]
		*/
	}

	// RVA: 0x1102D58 Offset: 0x1102D58 VA: 0x1102D58
	public void .ctor() {
		/* Disassembly (ARM32, 27 instructions, 0x6C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102D58:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01102D5C:  54509FE5     LDR r5, [pc, 0x54]
		   0x01102D60:  0040A0E1     MOV r4, r0
		   0x01102D64:  05508FE0     ADD r5, pc, r5
		   0x01102D68:  0000D5E5     LDRB r0, [r5]
		   0x01102D6C:  000050E3     CMPS r0, r0, 0x0
		   0x01102D70:  0400001A     BNE $+0x18  // if (!=) goto 0x01102D88
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01102D74:  40009FE5     LDR r0, [pc, 0x40]
		   0x01102D78:  00009FE7     LDR r0, [pc, r0]
		   0x01102D7C:  F760F9EB     BL $-0x1a7c1c
		   0x01102D80:  0100A0E3     MOV r0, 0x1
		   0x01102D84:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01102D88:  30009FE5     LDR r0, [pc, 0x30]
		   0x01102D8C:  00009FE7     LDR r0, [pc, r0]
		   0x01102D90:  000090E5     LDR r0, [r0]
		   0x01102D94:  8A61F9EB     BL $-0x1a79d0
		   0x01102D98:  0010A0E3     MOV r1, 0x0
		   0x01102D9C:  0050A0E1     MOV r5, r0
		   0x01102DA0:  EDD43BEB     BL $+0xef53bc  // CALL → sub_1FF815C
		   0x01102DA4:  385084E5     STR r5, [r4, 0x38]
		   0x01102DA8:  0400A0E1     MOV r0, r4
		   0x01102DAC:  0010A0E3     MOV r1, 0x0
		   0x01102DB0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01102DB4:  3BD43BEA     B $+0xef50f4
		   0x01102DB8:  3C901203     TSTSEQ sb, r2, 0x3c
		   0x01102DBC:  FC46F702     RSCSEQ r4, r7, 0xfc00000
		   0x01102DC0:  E846F702     RSCSEQ r4, r7, 0xe800000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass35_0 // TypeDefIndex: 1262
{

	// Fields
	public ChargeableContainerCooldown <>4__this; // 0x8
	public int id; // 0xC

	// Methods

	// RVA: 0x110221C Offset: 0x110221C VA: 0x110221C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110221C:  0010A0E3     MOV r1, 0x0
		   0x01102220:  714C7EEA     B $+0x1f931cc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1102DC4 Offset: 0x1102DC4 VA: 0x1102DC4
	internal void <UnpauseChargeTimers>b__0() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102DC4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01102DC8:  D840C0E1     LDRD r4, r5, [r0, 0x8]
		   0x01102DCC:  000054E3     CMPS r0, r4, 0x0
		   0x01102DD0:  0000001A     BNE $+0x8  // if (!=) goto 0x01102DD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01102DD4:  7D61F9EB     BL $-0x1a7a04
		   // ──── Block 2 if (!=) ────────────────────
		   0x01102DD8:  0400A0E1     MOV r0, r4
		   0x01102DDC:  0510A0E1     MOV r1, r5
		   0x01102DE0:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01102DE4:  E1FBFFEA     B $-0x1074
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass36_0 // TypeDefIndex: 1263
{

	// Fields
	public ChargeableContainerCooldown <>4__this; // 0x8
	public Action onAnimationEnd; // 0xC

	// Methods

	// RVA: 0x1102350 Offset: 0x1102350 VA: 0x1102350
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01102350:  0010A0E3     MOV r1, 0x0
		   0x01102354:  244C7EEA     B $+0x1f93098  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1102DE8 Offset: 0x1102DE8 VA: 0x1102DE8
	internal void <StartClockAnimation>b__0() {
		/* Disassembly (ARM32, 24 instructions, 0x60 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01102DE8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01102DEC:  085090E5     LDR r5, [r0, 0x8]
		   0x01102DF0:  0040A0E1     MOV r4, r0
		   0x01102DF4:  000055E3     CMPS r0, r5, 0x0
		   0x01102DF8:  0000001A     BNE $+0x8  // if (!=) goto 0x01102E00
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01102DFC:  7361F9EB     BL $-0x1a7a2c
		   // ──── Block 2 if (!=) ────────────────────
		   0x01102E00:  585095E5     LDR r5, [r5, 0x58]
		   0x01102E04:  000055E3     CMPS r0, r5, 0x0
		   0x01102E08:  0000001A     BNE $+0x8  // if (!=) goto 0x01102E10
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01102E0C:  6F61F9EB     BL $-0x1a7a3c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01102E10:  0C3095E5     LDR r3, [r5, 0xc]
		   0x01102E14:  0010A0E3     MOV r1, 0x0
		   0x01102E18:  142095E5     LDR r2, [r5, 0x14]
		   0x01102E1C:  200095E5     LDR r0, [r5, 0x20]
		   0x01102E20:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x01102E24:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01102E28:  000050E3     CMPS r0, r0, 0x0
		   0x01102E2C:  0400000A     BEQ $+0x18  // if (==) goto 0x01102E44
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01102E30:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01102E34:  141090E5     LDR r1, [r0, 0x14]
		   0x01102E38:  200090E5     LDR r0, [r0, 0x20]
		   0x01102E3C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01102E40:  12FF2FE1     BX r2
		   // ──── Block 6 if (==) ────────────────────
		   0x01102E44:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass41_0 // TypeDefIndex: 1264
{

	// Fields
	public Action<bool> canRecharge; // 0x8
	public ChargeableContainerCooldown <>4__this; // 0xC
	public int id; // 0x10

	// Methods

	// RVA: 0x11028AC Offset: 0x11028AC VA: 0x11028AC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011028AC:  0010A0E3     MOV r1, 0x0
		   0x011028B0:  CD4A7EEA     B $+0x1f92b3c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x11028B4 Offset: 0x11028B4 VA: 0x11028B4
	internal void <Recharge>g__Spend|0(bool result) {
		/* Disassembly (ARM32, 90 instructions, 0x168 bytes):
		   // CFG: 26 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011028B4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x011028B8:  3CD04DE2     SUB sp, sp, 0x3c
		   0x011028BC:  FC619FE5     LDR r6, [pc, 0x1fc]
		   0x011028C0:  00B0A0E1     MOV fp, r0
		   0x011028C4:  0150A0E1     MOV r5, r1
		   0x011028C8:  06608FE0     ADD r6, pc, r6
		   0x011028CC:  0000D6E5     LDRB r0, [r6]
		   0x011028D0:  000050E3     CMPS r0, r0, 0x0
		   0x011028D4:  0400001A     BNE $+0x18  // if (!=) goto 0x011028EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011028D8:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x011028DC:  00009FE7     LDR r0, [pc, r0]
		   0x011028E0:  1E62F9EB     BL $-0x1a7780
		   0x011028E4:  0100A0E3     MOV r0, 0x1
		   0x011028E8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x011028EC:  08609BE5     LDR r6, [fp, 0x8]
		   0x011028F0:  000056E3     CMPS r0, r6, 0x0
		   0x011028F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011028FC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x011028F8:  B462F9EB     BL $-0x1a7528
		   // ──── Block 4 if (!=) ────────────────────
		   0x011028FC:  0C3096E5     LDR r3, [r6, 0xc]
		   0x01102900:  0510A0E1     MOV r1, r5
		   0x01102904:  142096E5     LDR r2, [r6, 0x14]
		   0x01102908:  200096E5     LDR r0, [r6, 0x20]
		   0x0110290C:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x01102910:  000055E3     CMPS r0, r5, 0x0
		   0x01102914:  6700000A     BEQ $+0x1a4
		   0x01102918:  0C609BE5     LDR r6, [fp, 0xc]
		   0x0110291C:  000056E3     CMPS r0, r6, 0x0
		   0x01102920:  0650A0E1     MOV r5, r6
		   0x01102924:  0100001A     BNE $+0xc  // if (!=) goto 0x01102930
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01102928:  A862F9EB     BL $-0x1a7558
		   0x0110292C:  0C509BE5     LDR r5, [fp, 0xc]
		   // ──── Block 7 if (!=) ────────────────────
		   0x01102930:  4000D6E5     LDRB r0, [r6, 0x40]
		   0x01102934:  0080A0E3     MOV r8, 0x0
		   0x01102938:  000050E3     CMPS r0, r0, 0x0
		   0x0110293C:  0100000A     BEQ $+0xc  // if (==) goto 0x01102948
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x01102940:  0560A0E1     MOV r6, r5
		   0x01102944:  0F0000EA     B $+0x44  // goto 0x01102988
		   // ──── Block 9 if (==) ────────────────────
		   0x01102948:  000055E3     CMPS r0, r5, 0x0
		   0x0110294C:  0000001A     BNE $+0x8  // if (!=) goto 0x01102954
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01102950:  9E62F9EB     BL $-0x1a7580
		   // ──── Block 11 if (!=) ────────────────────
		   0x01102954:  646095E5     LDR r6, [r5, 0x64]
		   0x01102958:  000056E3     CMPS r0, r6, 0x0
		   0x0110295C:  0000001A     BNE $+0x8  // if (!=) goto 0x01102964
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x01102960:  9A62F9EB     BL $-0x1a7590
		   // ──── Block 13 if (!=) ────────────────────
		   0x01102964:  0C2096E5     LDR r2, [r6, 0xc]
		   0x01102968:  141096E5     LDR r1, [r6, 0x14]
		   0x0110296C:  200096E5     LDR r0, [r6, 0x20]
		   0x01102970:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01102974:  5410A0E3     MOV r1, 0x54
		   0x01102978:  000050E3     CMPS r0, r0, 0x0
		   0x0110297C:  50100013     MOVNE r1, 0x50
		   0x01102980:  0C609BE5     LDR r6, [fp, 0xc]
		   0x01102984:  018095E7     LDR r8, [r5, r1]
		   // ──── Block 14 ──────────────────────────────
		   0x01102988:  000056E3     CMPS r0, r6, 0x0
		   0x0110298C:  0650A0E1     MOV r5, r6
		   0x01102990:  0100001A     BNE $+0xc  // if (!=) goto 0x0110299C
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x01102994:  8D62F9EB     BL $-0x1a75c4
		   0x01102998:  0C509BE5     LDR r5, [fp, 0xc]
		   // ──── Block 16 if (!=) ────────────────────
		   0x0110299C:  4000D6E5     LDRB r0, [r6, 0x40]
		   0x011029A0:  000050E3     CMPS r0, r0, 0x0
		   0x011029A4:  0600000A     BEQ $+0x20  // if (==) goto 0x011029C4
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x011029A8:  000055E3     CMPS r0, r5, 0x0
		   0x011029AC:  0560A0E1     MOV r6, r5
		   0x011029B0:  0100001A     BNE $+0xc  // if (!=) goto 0x011029BC
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x011029B4:  8562F9EB     BL $-0x1a75e4
		   0x011029B8:  0C609BE5     LDR r6, [fp, 0xc]
		   // ──── Block 19 if (!=) ────────────────────
		   0x011029BC:  449095E5     LDR sb, [r5, 0x44]
		   0x011029C0:  010000EA     B $+0xc  // goto 0x011029CC
		   // ──── Block 20 if (==) ────────────────────
		   0x011029C4:  0090A0E3     MOV sb, 0x0
		   0x011029C8:  0560A0E1     MOV r6, r5
		   // ──── Block 21 ──────────────────────────────
		   0x011029CC:  000056E3     CMPS r0, r6, 0x0
		   0x011029D0:  0000001A     BNE $+0x8  // if (!=) goto 0x011029D8
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x011029D4:  7D62F9EB     BL $-0x1a7604
		   // ──── Block 23 if (!=) ────────────────────
		   0x011029D8:  0600A0E1     MOV r0, r6
		   0x011029DC:  0010A0E3     MOV r1, 0x0
		   0x011029E0:  00A0A0E3     MOV r10, 0x0
		   0x011029E4:  30D53BEB     BL $+0xef54c8  // CALL → sub_1FF7EAC
		   0x011029E8:  0060A0E1     MOV r6, r0
		   0x011029EC:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x011029F0:  00009FE7     LDR r0, [pc, r0]
		   0x011029F4:  000090E5     LDR r0, [r0]
		   0x011029F8:  741090E5     LDR r1, [r0, 0x74]
		   0x011029FC:  000051E3     CMPS r0, r1, 0x0
		   0x01102A00:  0000001A     BNE $+0x8  // if (!=) goto 0x01102A08
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x01102A04:  2262F9EB     BL $-0x1a7770
		   // ──── Block 25 if (!=) ────────────────────
		   0x01102A08:  18508DE2     ADD r5, sp, 0x18
		   0x01102A0C:  0610A0E1     MOV r1, r6
		   0x01102A10:  0020A0E3     MOV r2, 0x0
		   0x01102A14:  0500A0E1     MOV r0, r5
		   0x01102A18:  0CF80FEB     BL $+0x3fe038  // CALL → ScreenUtils.ToScreenPos
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <StartTimer>d__45 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 1265
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public ChargeableContainerCooldown <>4__this; // 0x10
	public float startTime; // 0x14
	public int id; // 0x18

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x1102C18 Offset: 0x1102C18 VA: 0x1102C18
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01102C18:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01102C1C:  0140A0E1     MOV r4, r1
		   0x01102C20:  0010A0E3     MOV r1, 0x0
		   0x01102C24:  0050A0E1     MOV r5, r0
		   0x01102C28:  EF497EEB     BL $+0x1f927c4  // CALL → Object..ctor
		   0x01102C2C:  084085E5     STR r4, [r5, 0x8]
		   0x01102C30:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1102E48 Offset: 0x1102E48 VA: 0x1102E48 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01102E48:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x1102E4C Offset: 0x1102E4C VA: 0x1102E4C Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01102E4C:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1103280 Offset: 0x1103280 VA: 0x1103280 Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01103280:  0C0090E5     LDR r0, [r0, 0xc]
		   0x01103284:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1103288 Offset: 0x1103288 VA: 0x1103288 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01103288:  10402DE9     PUSH {r4, lr}
		   0x0110328C:  30009FE5     LDR r0, [pc, 0x30]
		   0x01103290:  00009FE7     LDR r0, [pc, r0]
		   0x01103294:  B55FF9EB     BL $-0x1a8124
		   0x01103298:  4960F9EB     BL $-0x1a7ed4
		   0x0110329C:  0010A0E3     MOV r1, 0x0
		   0x011032A0:  0040A0E1     MOV r4, r0
		   0x011032A4:  121E7DEB     BL $+0x1f47850  // CALL → NotSupportedException..ctor
		   0x011032A8:  18009FE5     LDR r0, [pc, 0x18]
		   0x011032AC:  00009FE7     LDR r0, [pc, r0]
		   0x011032B0:  AE5FF9EB     BL $-0x1a8140
		   0x011032B4:  0010A0E1     MOV r1, r0
		   0x011032B8:  0400A0E1     MOV r0, r4
		   0x011032BC:  EF5FF9EB     BL $-0x1a803c
		   0x011032C0:  905FF9EB     BL $-0x1a81b8
		   0x011032C4:  4C38F702     RSCSEQ r3, r7, 0x4c0000
		   0x011032C8:  1C65F702     RSCSEQ r6, r7, 0x7000000
		*/
	}

	[DebuggerHidden]
	// RVA: 0x11032CC Offset: 0x11032CC VA: 0x11032CC Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011032CC:  0C0090E5     LDR r0, [r0, 0xc]
		   0x011032D0:  1EFF2FE1     BX lr
		*/
	}
}
