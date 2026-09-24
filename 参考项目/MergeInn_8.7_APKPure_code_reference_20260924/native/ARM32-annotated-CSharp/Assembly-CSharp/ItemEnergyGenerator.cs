// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemEnergyGenerator : ItemChargeableContainer // TypeDefIndex: 1282
{

	// Fields
	[SerializeField]
	private FXEnergyGenerator fxEnergyGenerator; // 0xE4

	// Methods

	// RVA: 0x11087FC Offset: 0x11087FC VA: 0x11087FC Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011087FC:  10402DE9     PUSH {r4, lr}
		   0x01108800:  0020A0E3     MOV r2, 0x0
		   0x01108804:  0040A0E1     MOV r4, r0
		   0x01108808:  90F3FFEB     BL $-0x31b8
		   0x0110880C:  0400A0E1     MOV r0, r4
		   0x01108810:  1040BDE8     POP {r4, lr}
		   0x01108814:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemEnergyGenerator.ReplaceFillEffect
		*/
	}

	// RVA: 0x11089C4 Offset: 0x11089C4 VA: 0x11089C4
	public void ForceRecharge() {
		/* Disassembly (ARM32, 20 instructions, 0x50 bytes):
		   // CFG: 7 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011089C4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x011089C8:  A45090E5     LDR r5, [r0, 0xa4]
		   0x011089CC:  0040A0E1     MOV r4, r0
		   0x011089D0:  000055E3     CMPS r0, r5, 0x0
		   0x011089D4:  0000001A     BNE $+0x8  // if (!=) goto 0x011089DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x011089D8:  7C4AF9EB     BL $-0x1ad608
		   // ──── Block 2 if (!=) ────────────────────
		   0x011089DC:  1C00D5E5     LDRB r0, [r5, 0x1c]
		   0x011089E0:  000050E3     CMPS r0, r0, 0x0
		   0x011089E4:  0900000A     BEQ $+0x2c  // if (==) goto 0x01108A10
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x011089E8:  345094E5     LDR r5, [r4, 0x34]
		   0x011089EC:  A44094E5     LDR r4, [r4, 0xa4]
		   0x011089F0:  000054E3     CMPS r0, r4, 0x0
		   0x011089F4:  0000001A     BNE $+0x8  // if (!=) goto 0x011089FC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x011089F8:  744AF9EB     BL $-0x1ad628
		   // ──── Block 5 if (!=) ────────────────────
		   0x011089FC:  0400A0E1     MOV r0, r4
		   0x01108A00:  0510A0E1     MOV r1, r5
		   0x01108A04:  0020A0E3     MOV r2, 0x0
		   0x01108A08:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01108A0C:  7FE6FFEA     B $-0x65fc
		   // ──── Block 6 if (==) ────────────────────
		   0x01108A10:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x1108818 Offset: 0x1108818 VA: 0x1108818
	private void ReplaceFillEffect() {
		/* Disassembly (ARM32, 107 instructions, 0x1AC bytes):
		   // CFG: 27 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01108818:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0110881C:  94519FE5     LDR r5, [pc, 0x194]
		   0x01108820:  0040A0E1     MOV r4, r0
		   0x01108824:  05508FE0     ADD r5, pc, r5
		   0x01108828:  0000D5E5     LDRB r0, [r5]
		   0x0110882C:  000050E3     CMPS r0, r0, 0x0
		   0x01108830:  0400001A     BNE $+0x18  // if (!=) goto 0x01108848
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01108834:  80019FE5     LDR r0, [pc, 0x180]
		   0x01108838:  00009FE7     LDR r0, [pc, r0]
		   0x0110883C:  474AF9EB     BL $-0x1ad6dc
		   0x01108840:  0100A0E3     MOV r0, 0x1
		   0x01108844:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01108848:  BC5094E5     LDR r5, [r4, 0xbc]
		   0x0110884C:  000055E3     CMPS r0, r5, 0x0
		   0x01108850:  0000001A     BNE $+0x8  // if (!=) goto 0x01108858
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01108854:  DD4AF9EB     BL $-0x1ad484
		   // ──── Block 4 if (!=) ────────────────────
		   0x01108858:  000095E5     LDR r0, [r5]
		   0x0110885C:  5C819FE5     LDR r8, [pc, 0x15c]
		   0x01108860:  08809FE7     LDR r8, [pc, r8]
		   0x01108864:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x01108868:  001098E5     LDR r1, [r8]
		   0x0110886C:  000052E3     CMPS r0, r2, 0x0
		   0x01108870:  0700000A     BEQ $+0x24  // if (==) goto 0x01108894
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01108874:  583090E5     LDR r3, [r0, 0x58]
		   0x01108878:  043083E2     ADD r3, r3, 0x4
		   0x0110887C:  046013E5     LDR r6, [r3, -0x4]
		   0x01108880:  010056E1     CMPS r0, r6, r1
		   0x01108884:  0600000A     BEQ $+0x20  // if (==) goto 0x011088A4
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01108888:  012052E2     SUBS r2, r2, 0x1
		   0x0110888C:  083083E2     ADD r3, r3, 0x8
		   0x01108890:  F9FFFF1A     BNE $-0x14
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01108894:  0500A0E1     MOV r0, r5
		   0x01108898:  0020A0E3     MOV r2, 0x0
		   0x0110889C:  7939FAEB     BL $-0x171a14
		   0x011088A0:  020000EA     B $+0x10  // goto 0x011088B0
		   // ──── Block 8 if (==) ────────────────────
		   0x011088A4:  001093E5     LDR r1, [r3]
		   0x011088A8:  810180E0     ADD r0, r0, r1, lsl 3
		   0x011088AC:  C00080E2     ADD r0, r0, 0xc0
		   // ──── Block 9 ──────────────────────────────
		   0x011088B0:  D020C0E1     LDRD r2, r3, [r0]
		   0x011088B4:  0500A0E1     MOV r0, r5
		   0x011088B8:  0310A0E1     MOV r1, r3
		   0x011088BC:  32FF2FE1     BLX r2
		   0x011088C0:  BC6094E5     LDR r6, [r4, 0xbc]
		   0x011088C4:  0050A0E1     MOV r5, r0
		   0x011088C8:  000056E3     CMPS r0, r6, 0x0
		   0x011088CC:  0000001A     BNE $+0x8  // if (!=) goto 0x011088D4
		   // 
		   // ──── Block 10 else (r2 == r2, 0x1) ────────────────────
		   0x011088D0:  BE4AF9EB     BL $-0x1ad500
		   // ──── Block 11 if (r2 != r2, 0x1) ────────────────────
		   0x011088D4:  000096E5     LDR r0, [r6]
		   0x011088D8:  001098E5     LDR r1, [r8]
		   0x011088DC:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x011088E0:  000052E3     CMPS r0, r2, 0x0
		   0x011088E4:  0700000A     BEQ $+0x24  // if (==) goto 0x01108908
		   // 
		   // ──── Block 12 else (r2 != r2, 0x1) ────────────────────
		   0x011088E8:  583090E5     LDR r3, [r0, 0x58]
		   0x011088EC:  043083E2     ADD r3, r3, 0x4
		   0x011088F0:  047013E5     LDR r7, [r3, -0x4]
		   0x011088F4:  010057E1     CMPS r0, r7, r1
		   0x011088F8:  0600000A     BEQ $+0x20  // if (==) goto 0x01108918
		   // 
		   // ──── Block 13 else (r2 != r2, 0x1) ────────────────────
		   0x011088FC:  012052E2     SUBS r2, r2, 0x1
		   0x01108900:  083083E2     ADD r3, r3, 0x8
		   0x01108904:  F9FFFF1A     BNE $-0x14
		   // ──── Block 14 (from 2 paths) ──────────────────
		   0x01108908:  0600A0E1     MOV r0, r6
		   0x0110890C:  0220A0E3     MOV r2, 0x2
		   0x01108910:  5C39FAEB     BL $-0x171a88
		   0x01108914:  020000EA     B $+0x10  // goto 0x01108924
		   // ──── Block 15 if (r2 == r2, 0x1) ────────────────────
		   0x01108918:  001093E5     LDR r1, [r3]
		   0x0110891C:  810180E0     ADD r0, r0, r1, lsl 3
		   0x01108920:  D00080E2     ADD r0, r0, 0xd0
		   // ──── Block 16 ──────────────────────────────
		   0x01108924:  D020C0E1     LDRD r2, r3, [r0]
		   0x01108928:  0600A0E1     MOV r0, r6
		   0x0110892C:  0310A0E1     MOV r1, r3
		   0x01108930:  32FF2FE1     BLX r2
		   0x01108934:  E46094E5     LDR r6, [r4, 0xe4]
		   0x01108938:  000055E3     CMPS r0, r5, 0x0
		   0x0110893C:  BC6084E5     STR r6, [r4, 0xbc]
		   0x01108940:  1300000A     BEQ $+0x54  // if (==) goto 0x01108994
		   // 
		   // ──── Block 17 else (r2 != r2, 0x1) ────────────────────
		   0x01108944:  000056E3     CMPS r0, r6, 0x0
		   0x01108948:  0000001A     BNE $+0x8  // if (!=) goto 0x01108950
		   // 
		   // ──── Block 18 else (r2 == r2, 0x1) ────────────────────
		   0x0110894C:  9F4AF9EB     BL $-0x1ad57c
		   // ──── Block 19 if (r2 != r2, 0x1) ────────────────────
		   0x01108950:  000096E5     LDR r0, [r6]
		   0x01108954:  001098E5     LDR r1, [r8]
		   0x01108958:  B62BD0E1     LDRH r2, [r0, 0xb6]
		   0x0110895C:  000052E3     CMPS r0, r2, 0x0
		   0x01108960:  0700000A     BEQ $+0x24  // if (==) goto 0x01108984
		   // 
		   // ──── Block 20 else (r2 != r2, 0x1) ────────────────────
		   0x01108964:  583090E5     LDR r3, [r0, 0x58]
		   0x01108968:  043083E2     ADD r3, r3, 0x4
		   0x0110896C:  047013E5     LDR r7, [r3, -0x4]
		   0x01108970:  010057E1     CMPS r0, r7, r1
		   0x01108974:  0700000A     BEQ $+0x24  // if (==) goto 0x01108998
		   // 
		   // ──── Block 21 else (r2 != r2, 0x1) ────────────────────
		   0x01108978:  012052E2     SUBS r2, r2, 0x1
		   0x0110897C:  083083E2     ADD r3, r3, 0x8
		   0x01108980:  F9FFFF1A     BNE $-0x14
		   // ──── Block 22 (from 2 paths) ──────────────────
		   0x01108984:  0600A0E1     MOV r0, r6
		   0x01108988:  0120A0E3     MOV r2, 0x1
		   0x0110898C:  3D39FAEB     BL $-0x171b04
		   0x01108990:  030000EA     B $+0x14  // goto 0x011089A4
		   // ──── Block 23 if (r2 == r2, 0x1) ────────────────────
		   0x01108994:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 24 if (r2 == r2, 0x1) ────────────────────
		   0x01108998:  001093E5     LDR r1, [r3]
		   0x0110899C:  810180E0     ADD r0, r0, r1, lsl 3
		   0x011089A0:  C80080E2     ADD r0, r0, 0xc8
		   // ──── Block 25 ──────────────────────────────
		   0x011089A4:  D020C0E1     LDRD r2, r3, [r0]
		   0x011089A8:  0600A0E1     MOV r0, r6
		   0x011089AC:  0310A0E1     MOV r1, r3
		   0x011089B0:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x011089B4:  12FF2FE1     BX r2
		   0x011089B8:  B0351203     TSTSEQ r3, r2, 0x2c000000
		   0x011089BC:  6410F702     RSCSEQ r1, r7, 0x64
		   0x011089C0:  3C10F702     RSCSEQ r1, r7, 0x3c
		*/
	}

	// RVA: 0x1108A14 Offset: 0x1108A14 VA: 0x1108A14
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01108A14:  0010A0E3     MOV r1, 0x0
		   0x01108A18:  55FEFFEA     B $-0x6a4
		*/
	}
}
