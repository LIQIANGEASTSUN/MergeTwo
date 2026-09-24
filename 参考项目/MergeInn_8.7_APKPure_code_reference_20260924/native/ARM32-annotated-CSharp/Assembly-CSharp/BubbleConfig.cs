// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class BubbleConfig : BaseBubbleConfig // TypeDefIndex: 1125
{

	// Fields
	private const string BUBBLED_DROPS_FREQUENCY_MULTIPLIER_KEY = "bubbled_drops_frequency_multiplier";
	private const string BUBBLED_DROPS_LIMIT_EXCEPTIONS_KEY = "bubbled_drops_limit_exceptions";
	private static float multiplier; // 0x0
	private static float frequencyMultiplier; // 0x4
	private static HashSet<string> exceptionsList; // 0x8
	[SerializeField]
	public ItemObject item; // 0x8
	[SerializeField]
	public int price; // 0xC
	[Range(0, 1)]
	[SerializeField]
	public float chance; // 0x10
	[SerializeField]
	public bool bubbleDropLimitException; // 0x14

	// Properties
	public override bool isItFtue { get; }
	public override DiscountCost DCost { get; }
	public override float Chance { get; }
	public override bool limitApplies { get; }

	// Methods

	// RVA: 0x10C8114 Offset: 0x10C8114 VA: 0x10C8114 Slot: 4
	public override bool get_isItFtue() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8114:  0000A0E3     MOV r0, 0x0
		   0x010C8118:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10C811C Offset: 0x10C811C VA: 0x10C811C Slot: 6
	public override DiscountCost get_DCost() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C811C:  10402DE9     PUSH {r4, lr}
		   0x010C8120:  08D04DE2     SUB sp, sp, 0x8
		   0x010C8124:  0040A0E1     MOV r4, r0
		   0x010C8128:  0D00A0E1     MOV r0, sp
		   0x010C812C:  030000EB     BL $+0x14  // CALL → BubbleConfig.GetPrice
		   0x010C8130:  03009DE8     LDM sp, {r0, r1}
		   0x010C8134:  F000C4E1     STRD r0, r1, [r4]
		   0x010C8138:  08D08DE2     ADD sp, sp, 0x8
		   0x010C813C:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x10C8290 Offset: 0x10C8290 VA: 0x10C8290 Slot: 7
	public override float get_Chance() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8290:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x10C830C Offset: 0x10C830C VA: 0x10C830C Slot: 5
	public override bool get_limitApplies() {
		/* Disassembly (ARM32, 54 instructions, 0xD8 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C830C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010C8310:  B8509FE5     LDR r5, [pc, 0xb8]
		   0x010C8314:  0040A0E1     MOV r4, r0
		   0x010C8318:  05508FE0     ADD r5, pc, r5
		   0x010C831C:  0000D5E5     LDRB r0, [r5]
		   0x010C8320:  000050E3     CMPS r0, r0, 0x0
		   0x010C8324:  0700001A     BNE $+0x24  // if (!=) goto 0x010C8348
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8328:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x010C832C:  00009FE7     LDR r0, [pc, r0]
		   0x010C8330:  8A4BFAEB     BL $-0x16d1d0
		   0x010C8334:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010C8338:  00009FE7     LDR r0, [pc, r0]
		   0x010C833C:  874BFAEB     BL $-0x16d1dc
		   0x010C8340:  0100A0E3     MOV r0, 0x1
		   0x010C8344:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C8348:  8C509FE5     LDR r5, [pc, 0x8c]
		   0x010C834C:  05509FE7     LDR r5, [pc, r5]
		   0x010C8350:  000095E5     LDR r0, [r5]
		   0x010C8354:  741090E5     LDR r1, [r0, 0x74]
		   0x010C8358:  000051E3     CMPS r0, r1, 0x0
		   0x010C835C:  0100001A     BNE $+0xc  // if (!=) goto 0x010C8368
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010C8360:  CB4BFAEB     BL $-0x16d0cc
		   0x010C8364:  000095E5     LDR r0, [r5]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010C8368:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010C836C:  087094E5     LDR r7, [r4, 0x8]
		   0x010C8370:  086090E5     LDR r6, [r0, 0x8]
		   0x010C8374:  000057E3     CMPS r0, r7, 0x0
		   0x010C8378:  0000001A     BNE $+0x8  // if (!=) goto 0x010C8380
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010C837C:  134CFAEB     BL $-0x16cfac
		   // ──── Block 6 if (!=) ────────────────────
		   0x010C8380:  0700A0E1     MOV r0, r7
		   0x010C8384:  0010A0E3     MOV r1, 0x0
		   0x010C8388:  0050A0E3     MOV r5, 0x0
		   0x010C838C:  49B500EB     BL $+0x2d52c  // CALL → ItemObject.GetItemCode
		   0x010C8390:  0070A0E1     MOV r7, r0
		   0x010C8394:  000056E3     CMPS r0, r6, 0x0
		   0x010C8398:  0000001A     BNE $+0x8  // if (!=) goto 0x010C83A0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010C839C:  0B4CFAEB     BL $-0x16cfcc
		   // ──── Block 8 if (!=) ────────────────────
		   0x010C83A0:  38009FE5     LDR r0, [pc, 0x38]
		   0x010C83A4:  0710A0E1     MOV r1, r7
		   0x010C83A8:  00009FE7     LDR r0, [pc, r0]
		   0x010C83AC:  002090E5     LDR r2, [r0]
		   0x010C83B0:  0600A0E1     MOV r0, r6
		   0x010C83B4:  FAFD62EB     BL $+0x18bf7f0  // CALL → HashSet<object>.Contains
		   0x010C83B8:  000050E3     CMPS r0, r0, 0x0
		   0x010C83BC:  1400D405     LDRBEQ r0, [r4, 0x14]
		   0x010C83C0:  100F6F01     CLZEQ r0, r0
		   0x010C83C4:  A052A001     MOVEQ r5, r0, r0, lsr 5
		   0x010C83C8:  0500A0E1     MOV r0, r5
		   0x010C83CC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010C83D0:  CC381603     TSTSEQ r3, r6, 0xcc0000
		   0x010C83D4:  7808FB02     RSCSEQ r0, fp, 0x780000
		   0x010C83D8:  7808FB02     RSCSEQ r0, fp, 0x780000
		   0x010C83DC:  5808FB02     RSCSEQ r0, fp, 0x580000
		   0x010C83E0:  0808FB02     RSCSEQ r0, fp, 0x80000
		*/
	}

	// RVA: 0x10C83E4 Offset: 0x10C83E4 VA: 0x10C83E4
	public static void FlexValuesUpdated() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C83E4:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x10C8140 Offset: 0x10C8140 VA: 0x10C8140
	private DiscountCost GetPrice() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C8140:  70402DE9     PUSH {r4, r5, r6, lr}
		*/
	}

	// RVA: 0x10C85E0 Offset: 0x10C85E0 VA: 0x10C85E0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010C85E0:  0010A0E3     MOV r1, 0x0
		   0x010C85E4:  80337FEA     B $+0x1fcce08  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10C85E8 Offset: 0x10C85E8 VA: 0x10C85E8
	private static void .cctor() {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010C85E8:  10402DE9     PUSH {r4, lr}
		   0x010C85EC:  78409FE5     LDR r4, [pc, 0x78]
		   0x010C85F0:  04408FE0     ADD r4, pc, r4
		   0x010C85F4:  0000D4E5     LDRB r0, [r4]
		   0x010C85F8:  000050E3     CMPS r0, r0, 0x0
		   0x010C85FC:  0A00001A     BNE $+0x30  // if (!=) goto 0x010C862C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010C8600:  68009FE5     LDR r0, [pc, 0x68]
		   0x010C8604:  00009FE7     LDR r0, [pc, r0]
		   0x010C8608:  D44AFAEB     BL $-0x16d4a8
		   0x010C860C:  60009FE5     LDR r0, [pc, 0x60]
		   0x010C8610:  00009FE7     LDR r0, [pc, r0]
		   0x010C8614:  D14AFAEB     BL $-0x16d4b4
		   0x010C8618:  58009FE5     LDR r0, [pc, 0x58]
		   0x010C861C:  00009FE7     LDR r0, [pc, r0]
		   0x010C8620:  CE4AFAEB     BL $-0x16d4c0
		   0x010C8624:  0100A0E3     MOV r0, 0x1
		   0x010C8628:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010C862C:  48009FE5     LDR r0, [pc, 0x48]
		   0x010C8630:  00009FE7     LDR r0, [pc, r0]
		   0x010C8634:  000090E5     LDR r0, [r0]
		   0x010C8638:  614BFAEB     BL $-0x16d274
		   0x010C863C:  0040A0E1     MOV r4, r0
		   0x010C8640:  38009FE5     LDR r0, [pc, 0x38]
		   0x010C8644:  00009FE7     LDR r0, [pc, r0]
		   0x010C8648:  001090E5     LDR r1, [r0]
		   0x010C864C:  0400A0E1     MOV r0, r4
		   0x010C8650:  81FB62EB     BL $+0x18bee0c  // CALL → HashSet<object>..ctor
		   0x010C8654:  28009FE5     LDR r0, [pc, 0x28]
		   0x010C8658:  00009FE7     LDR r0, [pc, r0]
		   0x010C865C:  000090E5     LDR r0, [r0]
		   0x010C8660:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010C8664:  084080E5     STR r4, [r0, 0x8]
		   0x010C8668:  1080BDE8     POP {r4, pc}
		   0x010C866C:  F7351603     TSTSEQ r3, r6, 0x3dc00000
		   0x010C8670:  A005FB02     RSCSEQ r0, fp, 0x28000000
		   0x010C8674:  80E8FA02     RSCSEQ lr, r10, 0x800000
		   0x010C8678:  78E8FA02     RSCSEQ lr, r10, 0x780000
		   0x010C867C:  64E8FA02     RSCSEQ lr, r10, 0x640000
		   0x010C8680:  4CE8FA02     RSCSEQ lr, r10, 0x4c0000
		   0x010C8684:  4C05FB02     RSCSEQ r0, fp, 0x13000000
		*/
	}
}
