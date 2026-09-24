// Dll : Assembly-CSharp.dll
// Namespace: Original
public class PseudoRandom // TypeDefIndex: 3462
{

	// Fields
	private readonly double[] probabilities; // 0x8
	private readonly object[] objects; // 0xC
	private readonly double maxMistakeChance; // 0x10
	private readonly Random random; // 0x18
	private Queue<int> distribution; // 0x1C
	private int randomState; // 0x20

	// Methods

	// RVA: 0x1415E84 Offset: 0x1415E84 VA: 0x1415E84
	public void .ctor(double[] probabilities, double maxMistakeChance = 0.01, Nullable<int> seed, PseudoRandom.State state) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01415E84:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01415E88:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	// RVA: 0x1416854 Offset: 0x1416854 VA: 0x1416854
	public void .ctor(double[] probabilities, object[] objects, double maxMistakeChance = 0.01, Nullable<int> seed, PseudoRandom.State state) {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 7 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01416854:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01416858:  10D04DE2     SUB sp, sp, 0x10
		   0x0141685C:  20C08DE2     ADD ip, sp, 0x20
		   0x01416860:  0160A0E1     MOV r6, r1
		   0x01416864:  0050A0E1     MOV r5, r0
		   0x01416868:  2C109DE5     LDR r1, [sp, 0x2c]
		   0x0141686C:  30009DE5     LDR r0, [sp, 0x30]
		   0x01416870:  0240A0E1     MOV r4, r2
		   0x01416874:  0C109CE8     LDM ip, {r2, r3, ip}
		   0x01416878:  04108DE5     STR r1, [sp, 0x4]
		   0x0141687C:  0610A0E1     MOV r1, r6
		   0x01416880:  08008DE5     STR r0, [sp, 0x8]
		   0x01416884:  0500A0E1     MOV r0, r5
		   0x01416888:  00C08DE5     STR ip, [sp]
		   0x0141688C:  7CFDFFEB     BL $-0xa08
		   0x01416890:  000054E3     CMPS r0, r4, 0x0
		   0x01416894:  1B00000A     BEQ $+0x74  // if (==) goto 0x01416908
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01416898:  000056E3     CMPS r0, r6, 0x0
		   0x0141689C:  0000001A     BNE $+0x8  // if (!=) goto 0x014168A4
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x014168A0:  CA12EDEB     BL $-0x4bb4d0
		   // ──── Block 3 if (!=) ────────────────────
		   0x014168A4:  0C0096E5     LDR r0, [r6, 0xc]
		   0x014168A8:  0C1094E5     LDR r1, [r4, 0xc]
		   0x014168AC:  000051E1     CMPS r0, r1, r0
		   0x014168B0:  0C408505     STREQ r4, [r5, 0xc]
		   0x014168B4:  10D08D02     ADDEQ sp, sp, 0x10
		   0x014168B8:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x014168BC:  84009FE5     LDR r0, [pc, 0x84]
		   0x014168C0:  00009FE7     LDR r0, [pc, r0]
		   0x014168C4:  2912EDEB     BL $-0x4bb754
		   0x014168C8:  BD12EDEB     BL $-0x4bb504
		   0x014168CC:  0040A0E1     MOV r4, r0
		   0x014168D0:  74009FE5     LDR r0, [pc, 0x74]
		   0x014168D4:  00009FE7     LDR r0, [pc, r0]
		   0x014168D8:  2412EDEB     BL $-0x4bb768
		   0x014168DC:  0010A0E1     MOV r1, r0
		   0x014168E0:  0400A0E1     MOV r0, r4
		   0x014168E4:  0020A0E3     MOV r2, 0x0
		   0x014168E8:  975C6EEB     BL $+0x1b97264  // CALL → ArgumentException..ctor
		   0x014168EC:  50009FE5     LDR r0, [pc, 0x50]
		   0x014168F0:  00009FE7     LDR r0, [pc, r0]
		   0x014168F4:  1D12EDEB     BL $-0x4bb784
		   0x014168F8:  0010A0E1     MOV r1, r0
		   0x014168FC:  0400A0E1     MOV r0, r4
		   0x01416900:  5E12EDEB     BL $-0x4bb680
		   0x01416904:  FF11EDEB     BL $-0x4bb7fc
		   // ──── Block 5 if (==) ────────────────────
		   0x01416908:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x0141690C:  00009FE7     LDR r0, [pc, r0]
		   0x01416910:  1612EDEB     BL $-0x4bb7a0
		   0x01416914:  AA12EDEB     BL $-0x4bb550
		   0x01416918:  0040A0E1     MOV r4, r0
		   0x0141691C:  1C009FE5     LDR r0, [pc, 0x1c]
		   0x01416920:  00009FE7     LDR r0, [pc, r0]
		   0x01416924:  1112EDEB     BL $-0x4bb7b4
		   0x01416928:  0010A0E1     MOV r1, r0
		   0x0141692C:  0400A0E1     MOV r0, r4
		   0x01416930:  0020A0E3     MOV r2, 0x0
		   0x01416934:  AFD070EB     BL $+0x1c342c4  // CALL → NullReferenceException..ctor
		   0x01416938:  EBFFFFEA     B $-0x4c
		   0x0141693C:  D81BC602     SBCEQ r1, r6, 0x36000
		   0x01416940:  B0D7C602     SBCEQ sp, r6, 0x2c00000
		   0x01416944:  E4D7C602     SBCEQ sp, r6, 0x3900000
		   0x01416948:  E0D7C602     SBCEQ sp, r6, 0x3800000
		   0x0141694C:  04D8C602     SBCEQ sp, r6, 0x40000
		*/
	}

	// RVA: 0x1416950 Offset: 0x1416950 VA: 0x1416950
	public PseudoRandom.State GetState() {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01416950:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01416954:  90509FE5     LDR r5, [pc, 0x90]
		   0x01416958:  0040A0E1     MOV r4, r0
		   0x0141695C:  05508FE0     ADD r5, pc, r5
		   0x01416960:  0000D5E5     LDRB r0, [r5]
		   0x01416964:  000050E3     CMPS r0, r0, 0x0
		   0x01416968:  0700001A     BNE $+0x24  // if (!=) goto 0x0141698C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0141696C:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x01416970:  00009FE7     LDR r0, [pc, r0]
		   0x01416974:  F911EDEB     BL $-0x4bb814
		   0x01416978:  74009FE5     LDR r0, [pc, 0x74]
		   0x0141697C:  00009FE7     LDR r0, [pc, r0]
		   0x01416980:  F611EDEB     BL $-0x4bb820
		   0x01416984:  0100A0E3     MOV r0, 0x1
		   0x01416988:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0141698C:  64009FE5     LDR r0, [pc, 0x64]
		   0x01416990:  00009FE7     LDR r0, [pc, r0]
		   0x01416994:  000090E5     LDR r0, [r0]
		   0x01416998:  8912EDEB     BL $-0x4bb5d4
		   0x0141699C:  0010A0E3     MOV r1, 0x0
		   0x014169A0:  0050A0E1     MOV r5, r0
		   0x014169A4:  90FA71EB     BL $+0x1c7ea48  // CALL → Object..ctor
		   0x014169A8:  1C6094E5     LDR r6, [r4, 0x1c]
		   0x014169AC:  000056E3     CMPS r0, r6, 0x0
		   0x014169B0:  0000001A     BNE $+0x8  // if (!=) goto 0x014169B8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014169B4:  8512EDEB     BL $-0x4bb5e4
		   // ──── Block 4 if (!=) ────────────────────
		   0x014169B8:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x014169BC:  00009FE7     LDR r0, [pc, r0]
		   0x014169C0:  001090E5     LDR r1, [r0]
		   0x014169C4:  0600A0E1     MOV r0, r6
		   0x014169C8:  4DA829EB     BL $+0xa6a13c  // CALL → Queue<int>.ToArray
		   0x014169CC:  0060A0E1     MOV r6, r0
		   0x014169D0:  000055E3     CMPS r0, r5, 0x0
		   0x014169D4:  0000001A     BNE $+0x8  // if (!=) goto 0x014169DC
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014169D8:  7C12EDEB     BL $-0x4bb608
		   // ──── Block 6 if (!=) ────────────────────
		   0x014169DC:  207094E5     LDR r7, [r4, 0x20]
		   0x014169E0:  0500A0E1     MOV r0, r5
		   0x014169E4:  F860C5E1     STRD r6, r7, [r5, 0x8]
		   0x014169E8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014169EC:  D66CE102     RSCEQ r6, r1, 0xd600
		   0x014169F0:  6CD7C602     SBCEQ sp, r6, 0x1b00000
		   0x014169F4:  64D7C602     SBCEQ sp, r6, 0x1900000
		   0x014169F8:  50D7C602     SBCEQ sp, r6, 0x1400000
		   0x014169FC:  20D7C602     SBCEQ sp, r6, 0x800000
		*/
	}

	// RVA: 0x1416A08 Offset: 0x1416A08 VA: 0x1416A08
	public object GetNextObject() {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01416A08:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01416A0C:  0C5090E5     LDR r5, [r0, 0xc]
		   0x01416A10:  0A0000EB     BL $+0x30  // CALL → PseudoRandom.GetNextIndex
		   0x01416A14:  0040A0E1     MOV r4, r0
		   0x01416A18:  000055E3     CMPS r0, r5, 0x0
		   0x01416A1C:  0000001A     BNE $+0x8  // if (!=) goto 0x01416A24
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01416A20:  6A12EDEB     BL $-0x4bb650
		   // ──── Block 2 if (!=) ────────────────────
		   0x01416A24:  0C0095E5     LDR r0, [r5, 0xc]
		   0x01416A28:  040050E1     CMPS r0, r0, r4
		   0x01416A2C:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01416A34
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x01416A30:  6712EDEB     BL $-0x4bb65c
		   // ──── Block 4 if (> (unsigned)) ────────────────────
		   0x01416A34:  040185E0     ADD r0, r5, r4, lsl 2
		   0x01416A38:  100090E5     LDR r0, [r0, 0x10]
		   0x01416A3C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1416A40 Offset: 0x1416A40 VA: 0x1416A40
	public int GetNextIndex() {
		/* Disassembly (ARM32, 31 instructions, 0x7C bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01416A40:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01416A44:  08D04DE2     SUB sp, sp, 0x8
		   0x01416A48:  DC509FE5     LDR r5, [pc, 0xdc]
		   0x01416A4C:  0040A0E1     MOV r4, r0
		   0x01416A50:  05508FE0     ADD r5, pc, r5
		   0x01416A54:  0000D5E5     LDRB r0, [r5]
		   0x01416A58:  000050E3     CMPS r0, r0, 0x0
		   0x01416A5C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01416A98
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01416A60:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01416A64:  00009FE7     LDR r0, [pc, r0]
		   0x01416A68:  BC11EDEB     BL $-0x4bb908
		   0x01416A6C:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01416A70:  00009FE7     LDR r0, [pc, r0]
		   0x01416A74:  B911EDEB     BL $-0x4bb914
		   0x01416A78:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01416A7C:  00009FE7     LDR r0, [pc, r0]
		   0x01416A80:  B611EDEB     BL $-0x4bb920
		   0x01416A84:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x01416A88:  00009FE7     LDR r0, [pc, r0]
		   0x01416A8C:  B311EDEB     BL $-0x4bb92c
		   0x01416A90:  0100A0E3     MOV r0, 0x1
		   0x01416A94:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01416A98:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x01416A9C:  000055E3     CMPS r0, r5, 0x0
		   0x01416AA0:  0000001A     BNE $+0x8  // if (!=) goto 0x01416AA8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01416AA4:  4912EDEB     BL $-0x4bb6d4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01416AA8:  140095E5     LDR r0, [r5, 0x14]
		   0x01416AAC:  000050E3     CMPS r0, r0, 0x0
		   0x01416AB0:  0100000A     BEQ $+0xc
		   0x01416AB4:  1C5094E5     LDR r5, [r4, 0x1c]
		   0x01416AB8:  110000EA     B $+0x4c
		*/
	}

	// RVA: 0x1416334 Offset: 0x1416334 VA: 0x1416334
	private int RandomNext() {
		/* Disassembly (ARM32, 15 instructions, 0x3C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01416334:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01416338:  185090E5     LDR r5, [r0, 0x18]
		   0x0141633C:  0040A0E1     MOV r4, r0
		   0x01416340:  000055E3     CMPS r0, r5, 0x0
		   0x01416344:  0000001A     BNE $+0x8  // if (!=) goto 0x0141634C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01416348:  2014EDEB     BL $-0x4baf78
		   // ──── Block 2 if (!=) ────────────────────
		   0x0141634C:  000095E5     LDR r0, [r5]
		   0x01416350:  D82EC0E1     LDRD r2, r3, [r0, 0xe8]
		   0x01416354:  0500A0E1     MOV r0, r5
		   0x01416358:  0310A0E1     MOV r1, r3
		   0x0141635C:  32FF2FE1     BLX r2
		   0x01416360:  201094E5     LDR r1, [r4, 0x20]
		   0x01416364:  011081E2     ADD r1, r1, 0x1
		   0x01416368:  201084E5     STR r1, [r4, 0x20]
		   0x0141636C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1416370 Offset: 0x1416370 VA: 0x1416370
	private List<int> GetMinimalIndexesForDistribution(double[] p, double m = 0.01) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01416370:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01416374:  04D04DE2     SUB sp, sp, 0x4
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1416B4C Offset: 0x1416B4C VA: 0x1416B4C
	private int <GetMinimalIndexesForDistribution>b__12_0(int x) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01416B4C:  F8FDFFEA     B $-0x818
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class State // TypeDefIndex: 3460
{

	// Fields
	public int[] distribution; // 0x8
	public int step; // 0xC

	// Methods

	// RVA: 0x1416A00 Offset: 0x1416A00 VA: 0x1416A00
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01416A00:  0010A0E3     MOV r1, 0x0
		   0x01416A04:  78FA71EA     B $+0x1c7e9e8  // TAIL CALL → Object..ctor
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass6_0 // TypeDefIndex: 3461
{

	// Fields
	public double sum; // 0x8

	// Methods

	// RVA: 0x141632C Offset: 0x141632C VA: 0x141632C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0141632C:  0010A0E3     MOV r1, 0x0
		   0x01416330:  2DFC71EA     B $+0x1c7f0bc  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x1416B50 Offset: 0x1416B50 VA: 0x1416B50
	internal double <.ctor>b__0(double p) { }
}
