// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class InventorySave // TypeDefIndex: 1444
{

	// Fields
	public List<ItemDataSave> list; // 0x8

	// Methods

	// RVA: 0x113B678 Offset: 0x113B678 VA: 0x113B678
	private static void .cctor() {
		/* Disassembly (ARM32, 33 instructions, 0x84 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B678:  10402DE9     PUSH {r4, lr}
		   0x0113B67C:  64409FE5     LDR r4, [pc, 0x64]
		   0x0113B680:  04408FE0     ADD r4, pc, r4
		   0x0113B684:  0000D4E5     LDRB r0, [r4]
		   0x0113B688:  000050E3     CMPS r0, r0, 0x0
		   0x0113B68C:  0700001A     BNE $+0x24  // if (!=) goto 0x0113B6B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B690:  54009FE5     LDR r0, [pc, 0x54]
		   0x0113B694:  00009FE7     LDR r0, [pc, r0]
		   0x0113B698:  B07EF8EB     BL $-0x1e0538
		   0x0113B69C:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x0113B6A0:  00009FE7     LDR r0, [pc, r0]
		   0x0113B6A4:  AD7EF8EB     BL $-0x1e0544
		   0x0113B6A8:  0100A0E3     MOV r0, 0x1
		   0x0113B6AC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B6B0:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0113B6B4:  00009FE7     LDR r0, [pc, r0]
		   0x0113B6B8:  000090E5     LDR r0, [r0]
		   0x0113B6BC:  741090E5     LDR r1, [r0, 0x74]
		   0x0113B6C0:  000051E3     CMPS r0, r1, 0x0
		   0x0113B6C4:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B6CC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113B6C8:  F17EF8EB     BL $-0x1e0434
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113B6CC:  24009FE5     LDR r0, [pc, 0x24]
		   0x0113B6D0:  0010A0E3     MOV r1, 0x0
		   0x0113B6D4:  0020A0E3     MOV r2, 0x0
		   0x0113B6D8:  00009FE7     LDR r0, [pc, r0]
		   0x0113B6DC:  000090E5     LDR r0, [r0]
		   0x0113B6E0:  1040BDE8     POP {r4, lr}
		   0x0113B6E4:  987CFDEA     B $-0xa0d98
		   0x0113B6E8:  25090F03     MOVEQ r0, 0xf925
		   0x0113B6EC:  A4BFF302     RSCSEQ fp, r3, 0x290
		   0x0113B6F0:  D0EAF302     RSCSEQ lr, r3, 0xd0000
		   0x0113B6F4:  84BFF302     RSCSEQ fp, r3, 0x210
		   0x0113B6F8:  98EAF302     RSCSEQ lr, r3, 0x98000
		*/
	}

	// RVA: 0x113A5C4 Offset: 0x113A5C4 VA: 0x113A5C4
	public void Save() {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A5C4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0113A5C8:  C0509FE5     LDR r5, [pc, 0xc0]
		   0x0113A5CC:  0040A0E1     MOV r4, r0
		   0x0113A5D0:  05508FE0     ADD r5, pc, r5
		   0x0113A5D4:  0000D5E5     LDRB r0, [r5]
		   0x0113A5D8:  000050E3     CMPS r0, r0, 0x0
		   0x0113A5DC:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0113A618
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113A5E0:  AC009FE5     LDR r0, [pc, 0xac]
		   0x0113A5E4:  00009FE7     LDR r0, [pc, r0]
		   0x0113A5E8:  DC82F8EB     BL $-0x1df488
		   0x0113A5EC:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x0113A5F0:  00009FE7     LDR r0, [pc, r0]
		   0x0113A5F4:  D982F8EB     BL $-0x1df494
		   0x0113A5F8:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x0113A5FC:  00009FE7     LDR r0, [pc, r0]
		   0x0113A600:  D682F8EB     BL $-0x1df4a0
		   0x0113A604:  94009FE5     LDR r0, [pc, 0x94]
		   0x0113A608:  00009FE7     LDR r0, [pc, r0]
		   0x0113A60C:  D382F8EB     BL $-0x1df4ac
		   0x0113A610:  0100A0E3     MOV r0, 0x1
		   0x0113A614:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113A618:  84009FE5     LDR r0, [pc, 0x84]
		   0x0113A61C:  00009FE7     LDR r0, [pc, r0]
		   0x0113A620:  000090E5     LDR r0, [r0]
		   0x0113A624:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A628:  000051E3     CMPS r0, r1, 0x0
		   0x0113A62C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A634
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113A630:  1783F8EB     BL $-0x1df39c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113A634:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x0113A638:  0110A0E3     MOV r1, 0x1
		   0x0113A63C:  0020A0E3     MOV r2, 0x0
		   0x0113A640:  00009FE7     LDR r0, [pc, r0]
		   0x0113A644:  003090E5     LDR r3, [r0]
		   0x0113A648:  0400A0E1     MOV r0, r4
		   0x0113A64C:  7F1822EB     BL $+0x886204  // CALL → JsonUtil.Serialize<object>
		   0x0113A650:  0040A0E1     MOV r4, r0
		   0x0113A654:  50009FE5     LDR r0, [pc, 0x50]
		   0x0113A658:  00009FE7     LDR r0, [pc, r0]
		   0x0113A65C:  000090E5     LDR r0, [r0]
		   0x0113A660:  741090E5     LDR r1, [r0, 0x74]
		   0x0113A664:  000051E3     CMPS r0, r1, 0x0
		   0x0113A668:  0000001A     BNE $+0x8  // if (!=) goto 0x0113A670
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0113A66C:  0883F8EB     BL $-0x1df3d8
		   // ──── Block 6 if (!=) ────────────────────
		   0x0113A670:  38009FE5     LDR r0, [pc, 0x38]
		   0x0113A674:  0410A0E1     MOV r1, r4
		   0x0113A678:  0020A0E3     MOV r2, 0x0
		   0x0113A67C:  0030A0E3     MOV r3, 0x0
		   0x0113A680:  00009FE7     LDR r0, [pc, r0]
		   0x0113A684:  000090E5     LDR r0, [r0]
		   0x0113A688:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0113A68C:  193EFDEA     B $-0xb0794
		   0x0113A690:  D6190F03     MOVEQ r1, 0xf9d6
		   0x0113A694:  54D0F302     RSCSEQ sp, r3, 0x54
		   0x0113A698:  7CFBF302     RSCSEQ pc, r3, 0x1f000
		   0x0113A69C:  44D4F302     RSCSEQ sp, r3, 0x44000000
		   0x0113A6A0:  68FBF302     RSCSEQ pc, r3, 0x1a000
		   0x0113A6A4:  24D4F302     RSCSEQ sp, r3, 0x24000000
		   0x0113A6A8:  2CFBF302     RSCSEQ pc, r3, 0xb000
		   0x0113A6AC:  E0CFF302     RSCSEQ ip, r3, 0x380
		   0x0113A6B0:  F0FAF302     RSCSEQ pc, r3, 0xf0000
		*/
	}

	// RVA: 0x113A9F4 Offset: 0x113A9F4 VA: 0x113A9F4
	public void Load() {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113A9F4:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0113A9F8:  2CD04DE2     SUB sp, sp, 0x2c
		   0x0113A9FC:  84429FE5     LDR r4, [pc, 0x284]
		   0x0113AA00:  0080A0E1     MOV r8, r0
		   0x0113AA04:  04408FE0     ADD r4, pc, r4
		   0x0113AA08:  0000D4E5     LDRB r0, [r4]
		   0x0113AA0C:  000050E3     CMPS r0, r0, 0x0
		   0x0113AA10:  1C00001A     BNE $+0x78  // if (!=) goto 0x0113AA88
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113AA14:  70029FE5     LDR r0, [pc, 0x270]
		   0x0113AA18:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA1C:  CF81F8EB     BL $-0x1df8bc
		   0x0113AA20:  68029FE5     LDR r0, [pc, 0x268]
		   0x0113AA24:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA28:  CC81F8EB     BL $-0x1df8c8
		   0x0113AA2C:  60029FE5     LDR r0, [pc, 0x260]
		   0x0113AA30:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA34:  C981F8EB     BL $-0x1df8d4
		   0x0113AA38:  58029FE5     LDR r0, [pc, 0x258]
		   0x0113AA3C:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA40:  C681F8EB     BL $-0x1df8e0
		   0x0113AA44:  50029FE5     LDR r0, [pc, 0x250]
		   0x0113AA48:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA4C:  C381F8EB     BL $-0x1df8ec
		   0x0113AA50:  48029FE5     LDR r0, [pc, 0x248]
		   0x0113AA54:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA58:  C081F8EB     BL $-0x1df8f8
		   0x0113AA5C:  40029FE5     LDR r0, [pc, 0x240]
		   0x0113AA60:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA64:  BD81F8EB     BL $-0x1df904
		   0x0113AA68:  38029FE5     LDR r0, [pc, 0x238]
		   0x0113AA6C:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA70:  BA81F8EB     BL $-0x1df910
		   0x0113AA74:  30029FE5     LDR r0, [pc, 0x230]
		   0x0113AA78:  00009FE7     LDR r0, [pc, r0]
		   0x0113AA7C:  B781F8EB     BL $-0x1df91c
		   0x0113AA80:  0100A0E3     MOV r0, 0x1
		   0x0113AA84:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113AA88:  20029FE5     LDR r0, [pc, 0x220]
		*/
	}

	// RVA: 0x113B6FC Offset: 0x113B6FC VA: 0x113B6FC
	private InventorySave Validate(string saveData) {
		/* Disassembly (ARM32, 126 instructions, 0x1F8 bytes):
		   // CFG: 20 blocks, 19 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0113B6FC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0113B700:  04D04DE2     SUB sp, sp, 0x4
		   0x0113B704:  A8619FE5     LDR r6, [pc, 0x1a8]
		   0x0113B708:  0040A0E1     MOV r4, r0
		   0x0113B70C:  0150A0E1     MOV r5, r1
		   0x0113B710:  06608FE0     ADD r6, pc, r6
		   0x0113B714:  0000D6E5     LDRB r0, [r6]
		   0x0113B718:  000050E3     CMPS r0, r0, 0x0
		   0x0113B71C:  1900001A     BNE $+0x6c  // if (!=) goto 0x0113B788
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0113B720:  90019FE5     LDR r0, [pc, 0x190]
		   0x0113B724:  00009FE7     LDR r0, [pc, r0]
		   0x0113B728:  8C7EF8EB     BL $-0x1e05c8
		   0x0113B72C:  88019FE5     LDR r0, [pc, 0x188]
		   0x0113B730:  00009FE7     LDR r0, [pc, r0]
		   0x0113B734:  897EF8EB     BL $-0x1e05d4
		   0x0113B738:  80019FE5     LDR r0, [pc, 0x180]
		   0x0113B73C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B740:  867EF8EB     BL $-0x1e05e0
		   0x0113B744:  78019FE5     LDR r0, [pc, 0x178]
		   0x0113B748:  00009FE7     LDR r0, [pc, r0]
		   0x0113B74C:  837EF8EB     BL $-0x1e05ec
		   0x0113B750:  70019FE5     LDR r0, [pc, 0x170]
		   0x0113B754:  00009FE7     LDR r0, [pc, r0]
		   0x0113B758:  807EF8EB     BL $-0x1e05f8
		   0x0113B75C:  68019FE5     LDR r0, [pc, 0x168]
		   0x0113B760:  00009FE7     LDR r0, [pc, r0]
		   0x0113B764:  7D7EF8EB     BL $-0x1e0604
		   0x0113B768:  60019FE5     LDR r0, [pc, 0x160]
		   0x0113B76C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B770:  7A7EF8EB     BL $-0x1e0610
		   0x0113B774:  58019FE5     LDR r0, [pc, 0x158]
		   0x0113B778:  00009FE7     LDR r0, [pc, r0]
		   0x0113B77C:  777EF8EB     BL $-0x1e061c
		   0x0113B780:  0100A0E3     MOV r0, 0x1
		   0x0113B784:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0113B788:  48019FE5     LDR r0, [pc, 0x148]
		   0x0113B78C:  00009FE7     LDR r0, [pc, r0]
		   0x0113B790:  000090E5     LDR r0, [r0]
		   0x0113B794:  741090E5     LDR r1, [r0, 0x74]
		   0x0113B798:  000051E3     CMPS r0, r1, 0x0
		   0x0113B79C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B7A4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0113B7A0:  BB7EF8EB     BL $-0x1e050c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0113B7A4:  30019FE5     LDR r0, [pc, 0x130]
		   0x0113B7A8:  0110A0E3     MOV r1, 0x1
		   0x0113B7AC:  00009FE7     LDR r0, [pc, r0]
		   0x0113B7B0:  002090E5     LDR r2, [r0]
		   0x0113B7B4:  0500A0E1     MOV r0, r5
		   0x0113B7B8:  BE0B22EB     BL $+0x882f00  // CALL → JsonUtil.Deserialize<object>
		   0x0113B7BC:  085094E5     LDR r5, [r4, 0x8]
		   0x0113B7C0:  00008DE5     STR r0, [sp]
		   0x0113B7C4:  000055E3     CMPS r0, r5, 0x0
		   0x0113B7C8:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B7D0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0113B7CC:  FF7EF8EB     BL $-0x1e03fc
		   // ──── Block 6 if (!=) ────────────────────
		   0x0113B7D0:  0C6095E5     LDR r6, [r5, 0xc]
		   0x0113B7D4:  010056E2     SUBS r0, r6, 0x1
		   0x0113B7D8:  3300004A     BMI $+0xd4  // if (< 0) goto 0x0113B8AC
		   // 
		   // ──── Block 7 else (r0 < 0 r6, 0x1) ────────────────────
		   0x0113B7DC:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x0113B7E0:  05509FE7     LDR r5, [pc, r5]
		   0x0113B7E4:  F8909FE5     LDR sb, [pc, 0xf8]
		   0x0113B7E8:  09909FE7     LDR sb, [pc, sb]
		   0x0113B7EC:  F4A09FE5     LDR r10, [pc, 0xf4]
		   0x0113B7F0:  0AA09FE7     LDR r10, [pc, r10]
		   0x0113B7F4:  F0B09FE5     LDR fp, [pc, 0xf0]
		   0x0113B7F8:  0BB09FE7     LDR fp, [pc, fp]
		   0x0113B7FC:  EC809FE5     LDR r8, [pc, 0xec]
		   0x0113B800:  08809FE7     LDR r8, [pc, r8]
		   0x0113B804:  087094E5     LDR r7, [r4, 0x8]
		   0x0113B808:  000057E3     CMPS r0, r7, 0x0
		   0x0113B80C:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B814
		   // 
		   // ──── Block 8 else (r0 == r6, 0x1) ────────────────────
		   0x0113B810:  EE7EF8EB     BL $-0x1e0440
		   // ──── Block 9 if (r0 != r6, 0x1) ────────────────────
		   0x0113B814:  016046E2     SUB r6, r6, 0x1
		   0x0113B818:  002095E5     LDR r2, [r5]
		   0x0113B81C:  0700A0E1     MOV r0, r7
		   0x0113B820:  0610A0E1     MOV r1, r6
		   0x0113B824:  35DC6AEB     BL $+0x1ab70dc  // CALL → List<object>.get_Item
		   0x0113B828:  0070A0E1     MOV r7, r0
		   0x0113B82C:  000050E3     CMPS r0, r0, 0x0
		   0x0113B830:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B838
		   // 
		   // ──── Block 10 else (r0 == r6, 0x1) ────────────────────
		   0x0113B834:  E57EF8EB     BL $-0x1e0464
		   // ──── Block 11 if (r0 != r6, 0x1) ────────────────────
		   0x0113B838:  0700A0E1     MOV r0, r7
		   0x0113B83C:  0010A0E3     MOV r1, 0x0
		   0x0113B840:  690E00EB     BL $+0x39ac  // CALL → ItemDataSave.IsValid
		   0x0113B844:  000050E3     CMPS r0, r0, 0x0
		   0x0113B848:  1500001A     BNE $+0x5c  // if (!=) goto 0x0113B8A4
		   // 
		   // ──── Block 12 else (r0 == r6, 0x1) ────────────────────
		   0x0113B84C:  087094E5     LDR r7, [r4, 0x8]
		   0x0113B850:  000057E3     CMPS r0, r7, 0x0
		   0x0113B854:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B85C
		   // 
		   // ──── Block 13 else (r0 == r6, 0x1) ────────────────────
		   0x0113B858:  DC7EF8EB     BL $-0x1e0488
		   // ──── Block 14 if (r0 != r6, 0x1) ────────────────────
		   0x0113B85C:  002099E5     LDR r2, [sb]
		   0x0113B860:  0700A0E1     MOV r0, r7
		   0x0113B864:  0610A0E1     MOV r1, r6
		   0x0113B868:  3DE36AEB     BL $+0x1ab8cfc  // CALL → List<object>.RemoveAt
		   0x0113B86C:  00009AE5     LDR r0, [r10]
		   0x0113B870:  D37EF8EB     BL $-0x1e04ac
		   0x0113B874:  00109BE5     LDR r1, [fp]
		   0x0113B878:  0020A0E3     MOV r2, 0x0
		   0x0113B87C:  0070A0E1     MOV r7, r0
		   0x0113B880:  ED357DEB     BL $+0x1f4d7bc  // CALL → Exception..ctor
		   0x0113B884:  000098E5     LDR r0, [r8]
		   0x0113B888:  741090E5     LDR r1, [r0, 0x74]
		   0x0113B88C:  000051E3     CMPS r0, r1, 0x0
		   0x0113B890:  0000001A     BNE $+0x8  // if (!=) goto 0x0113B898
		   // 
		   // ──── Block 15 else (r0 == r6, 0x1) ────────────────────
		   0x0113B894:  7E7EF8EB     BL $-0x1e0600
		   // ──── Block 16 if (r0 != r6, 0x1) ────────────────────
		   0x0113B898:  0700A0E1     MOV r0, r7
		   0x0113B89C:  0010A0E3     MOV r1, 0x0
		   0x0113B8A0:  39F23AEB     BL $+0xebc8ec  // CALL → sub_1FF818C
		   // ──── Block 17 if (r0 != r6, 0x1) ────────────────────
		   0x0113B8A4:  000056E3     CMPS r0, r6, 0x0
		   0x0113B8A8:  D5FFFFCA     BGT $-0xa4
		   // ──── Block 18 (from 2 paths) ──────────────────
		   0x0113B8AC:  04009DE4     POP {r0}
		   0x0113B8B0:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x0113B8B4:  98080F03     MOVEQ r0, 0xf898
		   0x0113B8B8:  64AEF302     RSCSEQ r10, r3, 0x640
		   0x0113B8BC:  BCB1F302     RSCSEQ fp, r3, 0x2f
		   0x0113B8C0:  50EAF302     RSCSEQ lr, r3, 0x50000
		   0x0113B8C4:  F8C2F302     RSCSEQ ip, r3, 0x8000000f
		   0x0113B8C8:  78D9F302     RSCSEQ sp, r3, 0x1e0000
		   0x0113B8CC:  30D9F302     RSCSEQ sp, r3, 0xc0000
		   0x0113B8D0:  68D9F302     RSCSEQ sp, r3, 0x1a0000
		   0x0113B8D4:  18EAF302     RSCSEQ lr, r3, 0x18000
		   0x0113B8D8:  B4C2F302     RSCSEQ ip, r3, 0x4000000b
		   0x0113B8DC:  E0E9F302     RSCSEQ lr, r3, 0x380000
		   0x0113B8E0:  F4D8F302     RSCSEQ sp, r3, 0xf40000
		   0x0113B8E4:  E4D8F302     RSCSEQ sp, r3, 0xe40000
		   0x0113B8E8:  FCB0F302     RSCSEQ fp, r3, 0xfc
		   0x0113B8EC:  98E9F302     RSCSEQ lr, r3, 0x260000
		   0x0113B8F0:  88ADF302     RSCSEQ r10, r3, 0x2200
		*/
	}

	// RVA: 0x1138E94 Offset: 0x1138E94 VA: 0x1138E94
	public void .ctor() {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01138E94:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01138E98:  6C509FE5     LDR r5, [pc, 0x6c]
		   0x01138E9C:  0040A0E1     MOV r4, r0
		   0x01138EA0:  05508FE0     ADD r5, pc, r5
		   0x01138EA4:  0000D5E5     LDRB r0, [r5]
		   0x01138EA8:  000050E3     CMPS r0, r0, 0x0
		   0x01138EAC:  0700001A     BNE $+0x24  // if (!=) goto 0x01138ED0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01138EB0:  58009FE5     LDR r0, [pc, 0x58]
		   0x01138EB4:  00009FE7     LDR r0, [pc, r0]
		   0x01138EB8:  A888F8EB     BL $-0x1ddd58
		   0x01138EBC:  50009FE5     LDR r0, [pc, 0x50]
		   0x01138EC0:  00009FE7     LDR r0, [pc, r0]
		   0x01138EC4:  A588F8EB     BL $-0x1ddd64
		   0x01138EC8:  0100A0E3     MOV r0, 0x1
		   0x01138ECC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01138ED0:  40009FE5     LDR r0, [pc, 0x40]
		   0x01138ED4:  00009FE7     LDR r0, [pc, r0]
		   0x01138ED8:  000090E5     LDR r0, [r0]
		   0x01138EDC:  3889F8EB     BL $-0x1ddb18
		   0x01138EE0:  0050A0E1     MOV r5, r0
		   0x01138EE4:  30009FE5     LDR r0, [pc, 0x30]
		   0x01138EE8:  00009FE7     LDR r0, [pc, r0]
		   0x01138EEC:  001090E5     LDR r1, [r0]
		   0x01138EF0:  0500A0E1     MOV r0, r5
		   0x01138EF4:  2DE56AEB     BL $+0x1ab94bc  // CALL → List<object>..ctor
		   0x01138EF8:  085084E5     STR r5, [r4, 0x8]
		   0x01138EFC:  0400A0E1     MOV r0, r4
		   0x01138F00:  0010A0E3     MOV r1, 0x0
		   0x01138F04:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01138F08:  37717DEA     B $+0x1f5c4e4  // TAIL CALL → Object..ctor
		   0x01138F0C:  09310F03     MOVEQ r3, 0xf109
		   0x01138F10:  C404F402     RSCSEQ r0, r4, 0xc4000000
		   0x01138F14:  BC04F402     RSCSEQ r0, r4, 0xbc000000
		   0x01138F18:  A804F402     RSCSEQ r0, r4, 0xa8000000
		   0x01138F1C:  9004F402     RSCSEQ r0, r4, 0x90000000
		*/
	}
}
