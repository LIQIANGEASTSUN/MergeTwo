// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemTargetBooster : ItemMerging // TypeDefIndex: 1331
{

	// Methods

	// RVA: 0x111C598 Offset: 0x111C598 VA: 0x111C598 Slot: 33
	public virtual bool CanApply(Item item) {
		/* Disassembly (ARM32, 80 instructions, 0x140 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111C598:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0111C59C:  18619FE5     LDR r6, [pc, 0x118]
		   0x0111C5A0:  0050A0E1     MOV r5, r0
		   0x0111C5A4:  0140A0E1     MOV r4, r1
		   0x0111C5A8:  06608FE0     ADD r6, pc, r6
		   0x0111C5AC:  0000D6E5     LDRB r0, [r6]
		   0x0111C5B0:  000050E3     CMPS r0, r0, 0x0
		   0x0111C5B4:  0A00001A     BNE $+0x30  // if (!=) goto 0x0111C5E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111C5B8:  00019FE5     LDR r0, [pc, 0x100]
		   0x0111C5BC:  00009FE7     LDR r0, [pc, r0]
		   0x0111C5C0:  E6FAF8EB     BL $-0x1c1460
		   0x0111C5C4:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x0111C5C8:  00009FE7     LDR r0, [pc, r0]
		   0x0111C5CC:  E3FAF8EB     BL $-0x1c146c
		   0x0111C5D0:  F0009FE5     LDR r0, [pc, 0xf0]
		   0x0111C5D4:  00009FE7     LDR r0, [pc, r0]
		   0x0111C5D8:  E0FAF8EB     BL $-0x1c1478
		   0x0111C5DC:  0100A0E3     MOV r0, 0x1
		   0x0111C5E0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111C5E4:  846095E5     LDR r6, [r5, 0x84]
		   0x0111C5E8:  000056E3     CMPS r0, r6, 0x0
		   0x0111C5EC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C5F4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111C5F0:  76FBF8EB     BL $-0x1c1220
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111C5F4:  D00096E5     LDR r0, [r6, 0xd0]
		   0x0111C5F8:  010050E3     CMPS r0, r0, 0x1
		   0x0111C5FC:  0B00000A     BEQ $+0x34  // if (==) goto 0x0111C630
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0111C600:  020050E3     CMPS r0, r0, 0x2
		   0x0111C604:  0500000A     BEQ $+0x1c  // if (==) goto 0x0111C620
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x0111C608:  030050E3     CMPS r0, r0, 0x3
		   0x0111C60C:  0B00001A     BNE $+0x34  // if (!=) goto 0x0111C640
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111C610:  0500A0E1     MOV r0, r5
		   0x0111C614:  0410A0E1     MOV r1, r4
		   0x0111C618:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0111C61C:  2D0000EA     B $+0xbc  // TAIL CALL → ItemTargetBooster.CanApplyDivider
		   // ──── Block 8 if (==) ────────────────────
		   0x0111C620:  0500A0E1     MOV r0, r5
		   0x0111C624:  0410A0E1     MOV r1, r4
		   0x0111C628:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0111C62C:  630100EA     B $+0x594  // TAIL CALL → ItemTargetBooster.CanApplyWildcard
		   // ──── Block 9 if (==) ────────────────────
		   0x0111C630:  0500A0E1     MOV r0, r5
		   0x0111C634:  0410A0E1     MOV r1, r4
		   0x0111C638:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0111C63C:  010100EA     B $+0x40c  // TAIL CALL → ItemTargetBooster.CanApplySpeedup
		   // ──── Block 10 if (!=) ────────────────────
		   0x0111C640:  844095E5     LDR r4, [r5, 0x84]
		   0x0111C644:  000054E3     CMPS r0, r4, 0x0
		   0x0111C648:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C650
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0111C64C:  5FFBF8EB     BL $-0x1c127c
		   // ──── Block 12 if (!=) ────────────────────
		   0x0111C650:  74009FE5     LDR r0, [pc, 0x74]
		   0x0111C654:  0020A0E3     MOV r2, 0x0
		   0x0111C658:  00009FE7     LDR r0, [pc, r0]
		   0x0111C65C:  141094E5     LDR r1, [r4, 0x14]
		   0x0111C660:  000090E5     LDR r0, [r0]
		   0x0111C664:  35B475EB     BL $+0x1d6d0dc  // CALL → String.Concat
		   0x0111C668:  0050A0E1     MOV r5, r0
		   0x0111C66C:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x0111C670:  00009FE7     LDR r0, [pc, r0]
		   0x0111C674:  000090E5     LDR r0, [r0]
		   0x0111C678:  51FBF8EB     BL $-0x1c12b4
		   0x0111C67C:  0510A0E1     MOV r1, r5
		   0x0111C680:  0020A0E3     MOV r2, 0x0
		   0x0111C684:  0040A0E1     MOV r4, r0
		   0x0111C688:  FD0610EB     BL $+0x401bfc  // CALL → InfoException..ctor
		   0x0111C68C:  40009FE5     LDR r0, [pc, 0x40]
		   0x0111C690:  00009FE7     LDR r0, [pc, r0]
		   0x0111C694:  000090E5     LDR r0, [r0]
		   0x0111C698:  741090E5     LDR r1, [r0, 0x74]
		   0x0111C69C:  000051E3     CMPS r0, r1, 0x0
		   0x0111C6A0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C6A8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0111C6A4:  FAFAF8EB     BL $-0x1c1410
		   // ──── Block 14 if (!=) ────────────────────
		   0x0111C6A8:  0400A0E1     MOV r0, r4
		   0x0111C6AC:  0010A0E3     MOV r1, 0x0
		   0x0111C6B0:  B56E3BEB     BL $+0xedbadc  // CALL → sub_1FF818C
		   0x0111C6B4:  0000A0E3     MOV r0, 0x0
		   0x0111C6B8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x0111C6BC:  C9F81003     TSTSEQ pc, r0, 0xc90000
		   0x0111C6C0:  CC9FF502     RSCSEQ sb, r5, 0x330
		   0x0111C6C4:  04B1F502     RSCSEQ fp, r5, 0x1
		   0x0111C6C8:  1CD5F502     RSCSEQ sp, r5, 0x7000000
		   0x0111C6CC:  98D4F502     RSCSEQ sp, r5, 0x98000000
		   0x0111C6D0:  5CB0F502     RSCSEQ fp, r5, 0x5c
		   0x0111C6D4:  F89EF502     RSCSEQ sb, r5, 0xf80
		*/
	}

	// RVA: 0x111CBC0 Offset: 0x111CBC0 VA: 0x111CBC0
	private bool CanApplyWildcard(Item itemForCheck) {
		/* Disassembly (ARM32, 243 instructions, 0x3CC bytes):
		   // CFG: 56 blocks, 60 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111CBC0:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0111CBC4:  04D04DE2     SUB sp, sp, 0x4
		   0x0111CBC8:  7C439FE5     LDR r4, [pc, 0x37c]
		   0x0111CBCC:  0080A0E1     MOV r8, r0
		   0x0111CBD0:  0150A0E1     MOV r5, r1
		   0x0111CBD4:  04408FE0     ADD r4, pc, r4
		   0x0111CBD8:  0000D4E5     LDRB r0, [r4]
		   0x0111CBDC:  000050E3     CMPS r0, r0, 0x0
		   0x0111CBE0:  1600001A     BNE $+0x60  // if (!=) goto 0x0111CC40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111CBE4:  64039FE5     LDR r0, [pc, 0x364]
		   0x0111CBE8:  00009FE7     LDR r0, [pc, r0]
		   0x0111CBEC:  5BF9F8EB     BL $-0x1c1a8c
		   0x0111CBF0:  5C039FE5     LDR r0, [pc, 0x35c]
		   0x0111CBF4:  00009FE7     LDR r0, [pc, r0]
		   0x0111CBF8:  58F9F8EB     BL $-0x1c1a98
		   0x0111CBFC:  54039FE5     LDR r0, [pc, 0x354]
		   0x0111CC00:  00009FE7     LDR r0, [pc, r0]
		   0x0111CC04:  55F9F8EB     BL $-0x1c1aa4
		   0x0111CC08:  4C039FE5     LDR r0, [pc, 0x34c]
		   0x0111CC0C:  00009FE7     LDR r0, [pc, r0]
		   0x0111CC10:  52F9F8EB     BL $-0x1c1ab0
		   0x0111CC14:  44039FE5     LDR r0, [pc, 0x344]
		   0x0111CC18:  00009FE7     LDR r0, [pc, r0]
		   0x0111CC1C:  4FF9F8EB     BL $-0x1c1abc
		   0x0111CC20:  3C039FE5     LDR r0, [pc, 0x33c]
		   0x0111CC24:  00009FE7     LDR r0, [pc, r0]
		   0x0111CC28:  4CF9F8EB     BL $-0x1c1ac8
		   0x0111CC2C:  34039FE5     LDR r0, [pc, 0x334]
		   0x0111CC30:  00009FE7     LDR r0, [pc, r0]
		   0x0111CC34:  49F9F8EB     BL $-0x1c1ad4
		   0x0111CC38:  0100A0E3     MOV r0, 0x1
		   0x0111CC3C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111CC40:  000055E3     CMPS r0, r5, 0x0
		   0x0111CC44:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CC4C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111CC48:  E0F9F8EB     BL $-0x1c1878
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111CC4C:  844095E5     LDR r4, [r5, 0x84]
		   0x0111CC50:  000054E3     CMPS r0, r4, 0x0
		   0x0111CC54:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CC5C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111CC58:  DCF9F8EB     BL $-0x1c1888
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111CC5C:  084094E5     LDR r4, [r4, 0x8]
		   0x0111CC60:  000054E3     CMPS r0, r4, 0x0
		   0x0111CC64:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CC6C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0111CC68:  D8F9F8EB     BL $-0x1c1898
		   // ──── Block 8 if (!=) ────────────────────
		   0x0111CC6C:  F8A29FE5     LDR r10, [pc, 0x2f8]
		   0x0111CC70:  0AA09FE7     LDR r10, [pc, r10]
		   0x0111CC74:  284094E5     LDR r4, [r4, 0x28]
		   0x0111CC78:  00009AE5     LDR r0, [r10]
		   0x0111CC7C:  741090E5     LDR r1, [r0, 0x74]
		   0x0111CC80:  000051E3     CMPS r0, r1, 0x0
		   0x0111CC84:  0100001A     BNE $+0xc  // if (!=) goto 0x0111CC90
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0111CC88:  81F9F8EB     BL $-0x1c19f4
		   0x0111CC8C:  00009AE5     LDR r0, [r10]
		   // ──── Block 10 if (!=) ────────────────────
		   0x0111CC90:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0111CC94:  046091E5     LDR r6, [r1, 0x4]
		   0x0111CC98:  000056E3     CMPS r0, r6, 0x0
		   0x0111CC9C:  1500001A     BNE $+0x5c  // if (!=) goto 0x0111CCF8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0111CCA0:  742090E5     LDR r2, [r0, 0x74]
		   0x0111CCA4:  000052E3     CMPS r0, r2, 0x0
		   0x0111CCA8:  0200001A     BNE $+0x10  // if (!=) goto 0x0111CCB8
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0111CCAC:  78F9F8EB     BL $-0x1c1a18
		   0x0111CCB0:  00009AE5     LDR r0, [r10]
		   0x0111CCB4:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 13 if (!=) ────────────────────
		   0x0111CCB8:  B0029FE5     LDR r0, [pc, 0x2b0]
		   0x0111CCBC:  00009FE7     LDR r0, [pc, r0]
		   0x0111CCC0:  007091E5     LDR r7, [r1]
		   0x0111CCC4:  000090E5     LDR r0, [r0]
		   0x0111CCC8:  BDF9F8EB     BL $-0x1c1904
		   0x0111CCCC:  0060A0E1     MOV r6, r0
		   0x0111CCD0:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x0111CCD4:  0710A0E1     MOV r1, r7
		   0x0111CCD8:  0030A0E3     MOV r3, 0x0
		   0x0111CCDC:  00009FE7     LDR r0, [pc, r0]
		   0x0111CCE0:  002090E5     LDR r2, [r0]
		   0x0111CCE4:  0600A0E1     MOV r0, r6
		   0x0111CCE8:  66C432EB     BL $+0xcb11a0  // CALL → Predicate<object>..ctor
		   0x0111CCEC:  00009AE5     LDR r0, [r10]
		   0x0111CCF0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111CCF4:  046080E5     STR r6, [r0, 0x4]
		   // ──── Block 14 if (!=) ────────────────────
		   0x0111CCF8:  78B29FE5     LDR fp, [pc, 0x278]
		   0x0111CCFC:  0400A0E1     MOV r0, r4
		   0x0111CD00:  0610A0E1     MOV r1, r6
		   0x0111CD04:  0BB09FE7     LDR fp, [pc, fp]
		   0x0111CD08:  00209BE5     LDR r2, [fp]
		   0x0111CD0C:  1C3828EB     BL $+0xa0e078  // CALL → Array.Find<object>
		   0x0111CD10:  844095E5     LDR r4, [r5, 0x84]
		   0x0111CD14:  0090A0E1     MOV sb, r0
		   0x0111CD18:  000054E3     CMPS r0, r4, 0x0
		   0x0111CD1C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CD24
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0111CD20:  AAF9F8EB     BL $-0x1c1950
		   // ──── Block 16 if (!=) ────────────────────
		   0x0111CD24:  084094E5     LDR r4, [r4, 0x8]
		   0x0111CD28:  000054E3     CMPS r0, r4, 0x0
		   0x0111CD2C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CD34
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0111CD30:  A6F9F8EB     BL $-0x1c1960
		   // ──── Block 18 if (!=) ────────────────────
		   0x0111CD34:  00009AE5     LDR r0, [r10]
		   0x0111CD38:  284094E5     LDR r4, [r4, 0x28]
		   0x0111CD3C:  741090E5     LDR r1, [r0, 0x74]
		   0x0111CD40:  000051E3     CMPS r0, r1, 0x0
		   0x0111CD44:  0100001A     BNE $+0xc  // if (!=) goto 0x0111CD50
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0111CD48:  51F9F8EB     BL $-0x1c1ab4
		   0x0111CD4C:  00009AE5     LDR r0, [r10]
		   // ──── Block 20 if (!=) ────────────────────
		   0x0111CD50:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0111CD54:  087091E5     LDR r7, [r1, 0x8]
		   0x0111CD58:  000057E3     CMPS r0, r7, 0x0
		   0x0111CD5C:  1500001A     BNE $+0x5c  // if (!=) goto 0x0111CDB8
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0111CD60:  742090E5     LDR r2, [r0, 0x74]
		   0x0111CD64:  000052E3     CMPS r0, r2, 0x0
		   0x0111CD68:  0200001A     BNE $+0x10  // if (!=) goto 0x0111CD78
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x0111CD6C:  48F9F8EB     BL $-0x1c1ad8
		   0x0111CD70:  00009AE5     LDR r0, [r10]
		   0x0111CD74:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 23 if (!=) ────────────────────
		   0x0111CD78:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x0111CD7C:  00009FE7     LDR r0, [pc, r0]
		   0x0111CD80:  006091E5     LDR r6, [r1]
		   0x0111CD84:  000090E5     LDR r0, [r0]
		   0x0111CD88:  8DF9F8EB     BL $-0x1c19c4
		   0x0111CD8C:  0070A0E1     MOV r7, r0
		   0x0111CD90:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x0111CD94:  0610A0E1     MOV r1, r6
		   0x0111CD98:  0030A0E3     MOV r3, 0x0
		   0x0111CD9C:  00009FE7     LDR r0, [pc, r0]
		   0x0111CDA0:  002090E5     LDR r2, [r0]
		   0x0111CDA4:  0700A0E1     MOV r0, r7
		   0x0111CDA8:  36C432EB     BL $+0xcb10e0  // CALL → Predicate<object>..ctor
		   0x0111CDAC:  00009AE5     LDR r0, [r10]
		   0x0111CDB0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111CDB4:  087080E5     STR r7, [r0, 0x8]
		   // ──── Block 24 if (!=) ────────────────────
		   0x0111CDB8:  00209BE5     LDR r2, [fp]
		   0x0111CDBC:  0400A0E1     MOV r0, r4
		   0x0111CDC0:  0710A0E1     MOV r1, r7
		   0x0111CDC4:  EE3728EB     BL $+0xa0dfc0  // CALL → Array.Find<object>
		   0x0111CDC8:  844095E5     LDR r4, [r5, 0x84]
		   0x0111CDCC:  0070A0E1     MOV r7, r0
		   0x0111CDD0:  000054E3     CMPS r0, r4, 0x0
		   0x0111CDD4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CDDC
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x0111CDD8:  7CF9F8EB     BL $-0x1c1a08
		   // ──── Block 26 if (!=) ────────────────────
		   0x0111CDDC:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111CDE0:  0040A0E3     MOV r4, 0x0
		   0x0111CDE4:  050050E3     CMPS r0, r0, 0x5
		   0x0111CDE8:  3B00000A     BEQ $+0xf4  // if (==) goto 0x0111CEDC
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x0111CDEC:  3800D5E5     LDRB r0, [r5, 0x38]
		   0x0111CDF0:  000050E3     CMPS r0, r0, 0x0
		   0x0111CDF4:  3800001A     BNE $+0xe8  // if (!=) goto 0x0111CEDC
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x0111CDF8:  844095E5     LDR r4, [r5, 0x84]
		   0x0111CDFC:  000054E3     CMPS r0, r4, 0x0
		   0x0111CE00:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CE08
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x0111CE04:  71F9F8EB     BL $-0x1c1a34
		   // ──── Block 30 if (!=) ────────────────────
		   0x0111CE08:  084094E5     LDR r4, [r4, 0x8]
		   0x0111CE0C:  000054E3     CMPS r0, r4, 0x0
		   0x0111CE10:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CE18
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x0111CE14:  6DF9F8EB     BL $-0x1c1a44
		   // ──── Block 32 if (!=) ────────────────────
		   0x0111CE18:  64019FE5     LDR r0, [pc, 0x164]
		   0x0111CE1C:  0020A0E3     MOV r2, 0x0
		   0x0111CE20:  00009FE7     LDR r0, [pc, r0]
		   0x0111CE24:  001090E5     LDR r1, [r0]
		   0x0111CE28:  180094E5     LDR r0, [r4, 0x18]
		   0x0111CE2C:  0040A0E3     MOV r4, 0x0
		   0x0111CE30:  03E975EB     BL $+0x1d7a414  // CALL → String.op_Inequality
		   0x0111CE34:  000050E3     CMPS r0, r0, 0x0
		   0x0111CE38:  2700000A     BEQ $+0xa4  // if (==) goto 0x0111CEDC
		   // 
		   // ──── Block 33 else (!=) ────────────────────
		   0x0111CE3C:  846095E5     LDR r6, [r5, 0x84]
		   0x0111CE40:  000056E3     CMPS r0, r6, 0x0
		   0x0111CE44:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CE4C
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x0111CE48:  60F9F8EB     BL $-0x1c1a78
		   // ──── Block 35 if (!=) ────────────────────
		   0x0111CE4C:  D00096E5     LDR r0, [r6, 0xd0]
		   0x0111CE50:  020050E3     CMPS r0, r0, 0x2
		   0x0111CE54:  2000000A     BEQ $+0x88  // if (==) goto 0x0111CEDC
		   // 
		   // ──── Block 36 else (!=) ────────────────────
		   0x0111CE58:  846095E5     LDR r6, [r5, 0x84]
		   0x0111CE5C:  000056E3     CMPS r0, r6, 0x0
		   0x0111CE60:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CE68
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x0111CE64:  59F9F8EB     BL $-0x1c1a94
		   // ──── Block 38 if (!=) ────────────────────
		   0x0111CE68:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x0111CE6C:  020050E3     CMPS r0, r0, 0x2
		   0x0111CE70:  1900000A     BEQ $+0x6c  // if (==) goto 0x0111CEDC
		   // 
		   // ──── Block 39 else (!=) ────────────────────
		   0x0111CE74:  0C619FE5     LDR r6, [pc, 0x10c]
		   0x0111CE78:  06609FE7     LDR r6, [pc, r6]
		   0x0111CE7C:  000096E5     LDR r0, [r6]
		   0x0111CE80:  741090E5     LDR r1, [r0, 0x74]
		   0x0111CE84:  000051E3     CMPS r0, r1, 0x0
		   0x0111CE88:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CE90
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x0111CE8C:  00F9F8EB     BL $-0x1c1bf8
		   // ──── Block 41 if (!=) ────────────────────
		   0x0111CE90:  0900A0E1     MOV r0, sb
		   0x0111CE94:  0010A0E3     MOV r1, 0x0
		   0x0111CE98:  0040A0E3     MOV r4, 0x0
		   0x0111CE9C:  D66C3BEB     BL $+0xedb360  // CALL → sub_1FF81FC
		   0x0111CEA0:  000050E3     CMPS r0, r0, 0x0
		   0x0111CEA4:  0C00001A     BNE $+0x38  // if (!=) goto 0x0111CEDC
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x0111CEA8:  000096E5     LDR r0, [r6]
		   0x0111CEAC:  741090E5     LDR r1, [r0, 0x74]
		   0x0111CEB0:  000051E3     CMPS r0, r1, 0x0
		   0x0111CEB4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CEBC
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x0111CEB8:  F5F8F8EB     BL $-0x1c1c24
		   // ──── Block 44 if (!=) ────────────────────
		   0x0111CEBC:  0700A0E1     MOV r0, r7
		   0x0111CEC0:  0010A0E3     MOV r1, 0x0
		   0x0111CEC4:  0040A0E3     MOV r4, 0x0
		   0x0111CEC8:  CB6C3BEB     BL $+0xedb334  // CALL → sub_1FF81FC
		   0x0111CECC:  000050E3     CMPS r0, r0, 0x0
		   0x0111CED0:  4000D505     LDRBEQ r0, [r5, 0x40]
		   0x0111CED4:  00005003     CMPSEQ r0, r0, 0x0
		   0x0111CED8:  0200000A     BEQ $+0x10  // if (==) goto 0x0111CEE8
		   // 
		   // ──── Block 45 (from 7 paths) ──────────────────
		   0x0111CEDC:  0400A0E1     MOV r0, r4
		   0x0111CEE0:  04D08DE2     ADD sp, sp, 0x4
		   0x0111CEE4:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   // ──── Block 46 if (==) ────────────────────
		   0x0111CEE8:  844098E5     LDR r4, [r8, 0x84]
		   0x0111CEEC:  000054E3     CMPS r0, r4, 0x0
		   0x0111CEF0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CEF8
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x0111CEF4:  35F9F8EB     BL $-0x1c1b24
		   // ──── Block 48 if (!=) ────────────────────
		   0x0111CEF8:  D40094E5     LDR r0, [r4, 0xd4]
		   0x0111CEFC:  010070E3     CMNS r0, r0, 0x1
		   0x0111CF00:  0F00000A     BEQ $+0x44  // if (==) goto 0x0111CF44
		   // 
		   // ──── Block 49 else (!=) ────────────────────
		   0x0111CF04:  844095E5     LDR r4, [r5, 0x84]
		   0x0111CF08:  000054E3     CMPS r0, r4, 0x0
		   0x0111CF0C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CF14
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x0111CF10:  2EF9F8EB     BL $-0x1c1b40
		   // ──── Block 51 if (!=) ────────────────────
		   0x0111CF14:  0400A0E1     MOV r0, r4
		   0x0111CF18:  B2B3FFEB     BL $-0x13130
		   0x0111CF1C:  844098E5     LDR r4, [r8, 0x84]
		   0x0111CF20:  0050A0E1     MOV r5, r0
		   0x0111CF24:  000054E3     CMPS r0, r4, 0x0
		   0x0111CF28:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CF30
		   // 
		   // ──── Block 52 else (==) ────────────────────
		   0x0111CF2C:  27F9F8EB     BL $-0x1c1b5c
		   // ──── Block 53 if (!=) ────────────────────
		   0x0111CF30:  D40094E5     LDR r0, [r4, 0xd4]
		   0x0111CF34:  0040A0E3     MOV r4, 0x0
		   0x0111CF38:  000055E1     CMPS r0, r5, r0
		   0x0111CF3C:  014000D3     MOVLE r4, 0x1
		   0x0111CF40:  E5FFFFEA     B $-0x64
		   // ──── Block 54 if (==) ────────────────────
		   0x0111CF44:  0140A0E3     MOV r4, 0x1
		   0x0111CF48:  E3FFFFEA     B $-0x6c
		   0x0111CF4C:  9EF21003     TSTSEQ pc, r0, 0xe0000009
		   0x0111CF50:  68C6F502     RSCSEQ ip, r5, 0x6800000
		   0x0111CF54:  4499F502     RSCSEQ sb, r5, 0x110000
		   0x0111CF58:  A0C1F502     RSCSEQ ip, r5, 0x28
		   0x0111CF5C:  F4CEF502     RSCSEQ ip, r5, 0xf40
		   0x0111CF60:  ECCEF502     RSCSEQ ip, r5, 0xec0
		   0x0111CF64:  D4CEF502     RSCSEQ ip, r5, 0xd40
		   0x0111CF68:  CCCEF502     RSCSEQ ip, r5, 0xcc0
		   0x0111CF6C:  88CEF502     RSCSEQ ip, r5, 0x880
		   0x0111CF70:  E4C0F502     RSCSEQ ip, r5, 0xe4
		   0x0111CF74:  24CEF502     RSCSEQ ip, r5, 0x240
		   0x0111CF78:  4CC5F502     RSCSEQ ip, r5, 0x13000000
		   0x0111CF7C:  24C0F502     RSCSEQ ip, r5, 0x24
		   0x0111CF80:  68CDF502     RSCSEQ ip, r5, 0x1a00
		   0x0111CF84:  DCCCF502     RSCSEQ ip, r5, 0xdc00
		   0x0111CF88:  C096F502     RSCSEQ sb, r5, 0xc000000
		*/
	}

	// RVA: 0x111C6D8 Offset: 0x111C6D8 VA: 0x111C6D8
	private bool CanApplyDivider(Item itemForCheck) {
		/* Disassembly (ARM32, 220 instructions, 0x370 bytes):
		   // CFG: 59 blocks, 65 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111C6D8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0111C6DC:  30439FE5     LDR r4, [pc, 0x330]
		   0x0111C6E0:  0080A0E1     MOV r8, r0
		   0x0111C6E4:  01A0A0E1     MOV r10, r1
		   0x0111C6E8:  04408FE0     ADD r4, pc, r4
		   0x0111C6EC:  0000D4E5     LDRB r0, [r4]
		   0x0111C6F0:  000050E3     CMPS r0, r0, 0x0
		   0x0111C6F4:  1300001A     BNE $+0x54  // if (!=) goto 0x0111C748
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111C6F8:  18039FE5     LDR r0, [pc, 0x318]
		   0x0111C6FC:  00009FE7     LDR r0, [pc, r0]
		   0x0111C700:  96FAF8EB     BL $-0x1c15a0
		   0x0111C704:  10039FE5     LDR r0, [pc, 0x310]
		   0x0111C708:  00009FE7     LDR r0, [pc, r0]
		   0x0111C70C:  93FAF8EB     BL $-0x1c15ac
		   0x0111C710:  08039FE5     LDR r0, [pc, 0x308]
		   0x0111C714:  00009FE7     LDR r0, [pc, r0]
		   0x0111C718:  90FAF8EB     BL $-0x1c15b8
		   0x0111C71C:  00039FE5     LDR r0, [pc, 0x300]
		   0x0111C720:  00009FE7     LDR r0, [pc, r0]
		   0x0111C724:  8DFAF8EB     BL $-0x1c15c4
		   0x0111C728:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x0111C72C:  00009FE7     LDR r0, [pc, r0]
		   0x0111C730:  8AFAF8EB     BL $-0x1c15d0
		   0x0111C734:  F0029FE5     LDR r0, [pc, 0x2f0]
		   0x0111C738:  00009FE7     LDR r0, [pc, r0]
		   0x0111C73C:  87FAF8EB     BL $-0x1c15dc
		   0x0111C740:  0100A0E3     MOV r0, 0x1
		   0x0111C744:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111C748:  00005AE3     CMPS r0, r10, 0x0
		   0x0111C74C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C754
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111C750:  1EFBF8EB     BL $-0x1c1380
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111C754:  84509AE5     LDR r5, [r10, 0x84]
		   0x0111C758:  000055E3     CMPS r0, r5, 0x0
		   0x0111C75C:  0540A0E1     MOV r4, r5
		   0x0111C760:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C76C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111C764:  19FBF8EB     BL $-0x1c1394
		   0x0111C768:  84409AE5     LDR r4, [r10, 0x84]
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111C76C:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0111C770:  0190A0E3     MOV sb, 0x1
		   0x0111C774:  010050E3     CMPS r0, r0, 0x1
		   0x0111C778:  2200000A     BEQ $+0x90  // if (==) goto 0x0111C808
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0111C77C:  000054E3     CMPS r0, r4, 0x0
		   0x0111C780:  0450A0E1     MOV r5, r4
		   0x0111C784:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C790
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0111C788:  10FBF8EB     BL $-0x1c13b8
		   0x0111C78C:  84509AE5     LDR r5, [r10, 0x84]
		   // ──── Block 9 if (!=) ────────────────────
		   0x0111C790:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111C794:  080050E3     CMPS r0, r0, 0x8
		   0x0111C798:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C7A4
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0111C79C:  0540A0E1     MOV r4, r5
		   0x0111C7A0:  180000EA     B $+0x68  // goto 0x0111C808
		   // ──── Block 11 if (!=) ────────────────────
		   0x0111C7A4:  000055E3     CMPS r0, r5, 0x0
		   0x0111C7A8:  0540A0E1     MOV r4, r5
		   0x0111C7AC:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C7B8
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0111C7B0:  06FBF8EB     BL $-0x1c13e0
		   0x0111C7B4:  84409AE5     LDR r4, [r10, 0x84]
		   // ──── Block 13 if (!=) ────────────────────
		   0x0111C7B8:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0111C7BC:  030050E3     CMPS r0, r0, 0x3
		   0x0111C7C0:  1000000A     BEQ $+0x48  // if (==) goto 0x0111C808
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x0111C7C4:  000054E3     CMPS r0, r4, 0x0
		   0x0111C7C8:  0450A0E1     MOV r5, r4
		   0x0111C7CC:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C7D8
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0111C7D0:  FEFAF8EB     BL $-0x1c1400
		   0x0111C7D4:  84509AE5     LDR r5, [r10, 0x84]
		   // ──── Block 16 if (!=) ────────────────────
		   0x0111C7D8:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111C7DC:  090050E3     CMPS r0, r0, 0x9
		   0x0111C7E0:  EDFFFF0A     BEQ $-0x44
		   // ──── Block 17 else (!=) ────────────────────
		   0x0111C7E4:  000055E3     CMPS r0, r5, 0x0
		   0x0111C7E8:  0540A0E1     MOV r4, r5
		   0x0111C7EC:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C7F8
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0111C7F0:  F6FAF8EB     BL $-0x1c1420
		   0x0111C7F4:  84409AE5     LDR r4, [r10, 0x84]
		   // ──── Block 19 if (!=) ────────────────────
		   0x0111C7F8:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0111C7FC:  070040E2     SUB r0, r0, 0x7
		   0x0111C800:  100F6FE1     CLZ r0, r0
		   0x0111C804:  A092A0E1     MOV sb, r0, r0, lsr 5
		   // ──── Block 20 (from 2 paths) ──────────────────
		   0x0111C808:  000054E3     CMPS r0, r4, 0x0
		   0x0111C80C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C814
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0111C810:  EEFAF8EB     BL $-0x1c1440
		   // ──── Block 22 if (!=) ────────────────────
		   0x0111C814:  084094E5     LDR r4, [r4, 0x8]
		   0x0111C818:  000054E3     CMPS r0, r4, 0x0
		   0x0111C81C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C824
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x0111C820:  EAFAF8EB     BL $-0x1c1450
		   // ──── Block 24 if (!=) ────────────────────
		   0x0111C824:  04529FE5     LDR r5, [pc, 0x204]
		   0x0111C828:  05509FE7     LDR r5, [pc, r5]
		   0x0111C82C:  286094E5     LDR r6, [r4, 0x28]
		   0x0111C830:  000095E5     LDR r0, [r5]
		   0x0111C834:  741090E5     LDR r1, [r0, 0x74]
		   0x0111C838:  000051E3     CMPS r0, r1, 0x0
		   0x0111C83C:  0100001A     BNE $+0xc  // if (!=) goto 0x0111C848
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x0111C840:  93FAF8EB     BL $-0x1c15ac
		   0x0111C844:  000095E5     LDR r0, [r5]
		   // ──── Block 26 if (!=) ────────────────────
		   0x0111C848:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x0111C84C:  0C7091E5     LDR r7, [r1, 0xc]
		   0x0111C850:  000057E3     CMPS r0, r7, 0x0
		   0x0111C854:  1500001A     BNE $+0x5c  // if (!=) goto 0x0111C8B0
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x0111C858:  742090E5     LDR r2, [r0, 0x74]
		   0x0111C85C:  000052E3     CMPS r0, r2, 0x0
		   0x0111C860:  0200001A     BNE $+0x10  // if (!=) goto 0x0111C870
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x0111C864:  8AFAF8EB     BL $-0x1c15d0
		   0x0111C868:  000095E5     LDR r0, [r5]
		   0x0111C86C:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 29 if (!=) ────────────────────
		   0x0111C870:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x0111C874:  00009FE7     LDR r0, [pc, r0]
		   0x0111C878:  004091E5     LDR r4, [r1]
		   0x0111C87C:  000090E5     LDR r0, [r0]
		   0x0111C880:  CFFAF8EB     BL $-0x1c14bc
		   0x0111C884:  0070A0E1     MOV r7, r0
		   0x0111C888:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x0111C88C:  0410A0E1     MOV r1, r4
		   0x0111C890:  0030A0E3     MOV r3, 0x0
		   0x0111C894:  00009FE7     LDR r0, [pc, r0]
		   0x0111C898:  002090E5     LDR r2, [r0]
		   0x0111C89C:  0700A0E1     MOV r0, r7
		   0x0111C8A0:  78C532EB     BL $+0xcb15e8  // CALL → Predicate<object>..ctor
		   0x0111C8A4:  000095E5     LDR r0, [r5]
		   0x0111C8A8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111C8AC:  0C7080E5     STR r7, [r0, 0xc]
		   // ──── Block 30 if (!=) ────────────────────
		   0x0111C8B0:  84019FE5     LDR r0, [pc, 0x184]
		   0x0111C8B4:  0710A0E1     MOV r1, r7
		   0x0111C8B8:  00009FE7     LDR r0, [pc, r0]
		   0x0111C8BC:  002090E5     LDR r2, [r0]
		   0x0111C8C0:  0600A0E1     MOV r0, r6
		   0x0111C8C4:  2E3928EB     BL $+0xa0e4c0  // CALL → Array.Find<object>
		   0x0111C8C8:  84709AE5     LDR r7, [r10, 0x84]
		   0x0111C8CC:  0060A0E1     MOV r6, r0
		   0x0111C8D0:  000057E3     CMPS r0, r7, 0x0
		   0x0111C8D4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C8DC
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x0111C8D8:  BCFAF8EB     BL $-0x1c1508
		   // ──── Block 32 if (!=) ────────────────────
		   0x0111C8DC:  0700A0E1     MOV r0, r7
		   0x0111C8E0:  40B5FFEB     BL $-0x12af8
		   0x0111C8E4:  0070A0E3     MOV r7, 0x0
		   0x0111C8E8:  010050E3     CMPS r0, r0, 0x1
		   0x0111C8EC:  460000BA     BLT $+0x120  // if (<) goto 0x0111CA0C
		   // 
		   // ──── Block 33 else (>=) ────────────────────
		   0x0111C8F0:  84409AE5     LDR r4, [r10, 0x84]
		   0x0111C8F4:  000054E3     CMPS r0, r4, 0x0
		   0x0111C8F8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C900
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x0111C8FC:  B3FAF8EB     BL $-0x1c152c
		   // ──── Block 35 if (!=) ────────────────────
		   0x0111C900:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111C904:  050050E3     CMPS r0, r0, 0x5
		   0x0111C908:  3F00000A     BEQ $+0x104  // if (==) goto 0x0111CA0C
		   // 
		   // ──── Block 36 else (!=) ────────────────────
		   0x0111C90C:  84409AE5     LDR r4, [r10, 0x84]
		   0x0111C910:  000054E3     CMPS r0, r4, 0x0
		   0x0111C914:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C91C
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x0111C918:  ACFAF8EB     BL $-0x1c1548
		   // ──── Block 38 if (!=) ────────────────────
		   0x0111C91C:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111C920:  020050E3     CMPS r0, r0, 0x2
		   0x0111C924:  3800000A     BEQ $+0xe8  // if (==) goto 0x0111CA0C
		   // 
		   // ──── Block 39 else (!=) ────────────────────
		   0x0111C928:  3800DAE5     LDRB r0, [r10, 0x38]
		   0x0111C92C:  000050E3     CMPS r0, r0, 0x0
		   0x0111C930:  3500001A     BNE $+0xdc  // if (!=) goto 0x0111CA0C
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x0111C934:  84409AE5     LDR r4, [r10, 0x84]
		   0x0111C938:  000054E3     CMPS r0, r4, 0x0
		   0x0111C93C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C944
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x0111C940:  A2FAF8EB     BL $-0x1c1570
		   // ──── Block 42 if (!=) ────────────────────
		   0x0111C944:  084094E5     LDR r4, [r4, 0x8]
		   0x0111C948:  000054E3     CMPS r0, r4, 0x0
		   0x0111C94C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C954
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x0111C950:  9EFAF8EB     BL $-0x1c1580
		   // ──── Block 44 if (!=) ────────────────────
		   0x0111C954:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x0111C958:  0020A0E3     MOV r2, 0x0
		   0x0111C95C:  0070A0E3     MOV r7, 0x0
		   0x0111C960:  00009FE7     LDR r0, [pc, r0]
		   0x0111C964:  001090E5     LDR r1, [r0]
		   0x0111C968:  180094E5     LDR r0, [r4, 0x18]
		   0x0111C96C:  34EA75EB     BL $+0x1d7a8d8  // CALL → String.op_Inequality
		   0x0111C970:  000050E3     CMPS r0, r0, 0x0
		   0x0111C974:  2400000A     BEQ $+0x98  // if (==) goto 0x0111CA0C
		   // 
		   // ──── Block 45 else (!=) ────────────────────
		   0x0111C978:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0111C97C:  00009FE7     LDR r0, [pc, r0]
		   0x0111C980:  000090E5     LDR r0, [r0]
		   0x0111C984:  741090E5     LDR r1, [r0, 0x74]
		   0x0111C988:  000051E3     CMPS r0, r1, 0x0
		   0x0111C98C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C994
		   // 
		   // ──── Block 46 else (==) ────────────────────
		   0x0111C990:  3FFAF8EB     BL $-0x1c16fc
		   // ──── Block 47 if (!=) ────────────────────
		   0x0111C994:  0600A0E1     MOV r0, r6
		   0x0111C998:  0010A0E3     MOV r1, 0x0
		   0x0111C99C:  0070A0E3     MOV r7, 0x0
		   0x0111C9A0:  156E3BEB     BL $+0xedb85c  // CALL → sub_1FF81FC
		   0x0111C9A4:  090090E1     ORRS r0, r0, sb
		   0x0111C9A8:  1700001A     BNE $+0x64  // if (!=) goto 0x0111CA0C
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x0111C9AC:  844098E5     LDR r4, [r8, 0x84]
		   0x0111C9B0:  000054E3     CMPS r0, r4, 0x0
		   0x0111C9B4:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C9BC
		   // 
		   // ──── Block 49 else (==) ────────────────────
		   0x0111C9B8:  84FAF8EB     BL $-0x1c15e8
		   // ──── Block 50 if (!=) ────────────────────
		   0x0111C9BC:  D40094E5     LDR r0, [r4, 0xd4]
		   0x0111C9C0:  010070E3     CMNS r0, r0, 0x1
		   0x0111C9C4:  0F00000A     BEQ $+0x44  // if (==) goto 0x0111CA08
		   // 
		   // ──── Block 51 else (!=) ────────────────────
		   0x0111C9C8:  84509AE5     LDR r5, [r10, 0x84]
		   0x0111C9CC:  000055E3     CMPS r0, r5, 0x0
		   0x0111C9D0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C9D8
		   // 
		   // ──── Block 52 else (==) ────────────────────
		   0x0111C9D4:  7DFAF8EB     BL $-0x1c1604
		   // ──── Block 53 if (!=) ────────────────────
		   0x0111C9D8:  0500A0E1     MOV r0, r5
		   0x0111C9DC:  01B5FFEB     BL $-0x12bf4
		   0x0111C9E0:  844098E5     LDR r4, [r8, 0x84]
		   0x0111C9E4:  0050A0E1     MOV r5, r0
		   0x0111C9E8:  000054E3     CMPS r0, r4, 0x0
		   0x0111C9EC:  0000001A     BNE $+0x8  // if (!=) goto 0x0111C9F4
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x0111C9F0:  76FAF8EB     BL $-0x1c1620
		   // ──── Block 55 if (!=) ────────────────────
		   0x0111C9F4:  D40094E5     LDR r0, [r4, 0xd4]
		   0x0111C9F8:  0070A0E3     MOV r7, 0x0
		   0x0111C9FC:  000055E1     CMPS r0, r5, r0
		   0x0111CA00:  017000D3     MOVLE r7, 0x1
		   0x0111CA04:  000000EA     B $+0x8  // goto 0x0111CA0C
		   // ──── Block 56 if (==) ────────────────────
		   0x0111CA08:  0170A0E3     MOV r7, 0x1
		   // ──── Block 57 (from 6 paths) ──────────────────
		   0x0111CA0C:  0700A0E1     MOV r0, r7
		   0x0111CA10:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0111CA14:  8BF71003     TSTSEQ pc, r0, 0x22c0000
		   0x0111CA18:  54CBF502     RSCSEQ ip, r5, 0x15000
		   0x0111CA1C:  309EF502     RSCSEQ sb, r5, 0x300
		   0x0111CA20:  8CC6F502     RSCSEQ ip, r5, 0x8c00000
		   0x0111CA24:  D4D3F502     RSCSEQ sp, r5, 0x50000003
		   0x0111CA28:  CCD3F502     RSCSEQ sp, r5, 0x30000003
		   0x0111CA2C:  C4D3F502     RSCSEQ sp, r5, 0x10000003
		   0x0111CA30:  D0D2F502     RSCSEQ sp, r5, 0xd
		   0x0111CA34:  2CC5F502     RSCSEQ ip, r5, 0xb000000
		   0x0111CA38:  60D2F502     RSCSEQ sp, r5, 0x6
		   0x0111CA3C:  98C9F502     RSCSEQ ip, r5, 0x260000
		   0x0111CA40:  9CD1F502     RSCSEQ sp, r5, 0x27
		   0x0111CA44:  BC9BF502     RSCSEQ sb, r5, 0x2f000
		*/
	}

	// RVA: 0x111CA48 Offset: 0x111CA48 VA: 0x111CA48
	private bool CanApplySpeedup(Item itemForCheck) {
		/* Disassembly (ARM32, 94 instructions, 0x178 bytes):
		   // CFG: 28 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111CA48:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0111CA4C:  60619FE5     LDR r6, [pc, 0x160]
		   0x0111CA50:  0040A0E1     MOV r4, r0
		   0x0111CA54:  0150A0E1     MOV r5, r1
		   0x0111CA58:  06608FE0     ADD r6, pc, r6
		   0x0111CA5C:  0000D6E5     LDRB r0, [r6]
		   0x0111CA60:  000050E3     CMPS r0, r0, 0x0
		   0x0111CA64:  0400001A     BNE $+0x18  // if (!=) goto 0x0111CA7C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111CA68:  48019FE5     LDR r0, [pc, 0x148]
		   0x0111CA6C:  00009FE7     LDR r0, [pc, r0]
		   0x0111CA70:  BAF9F8EB     BL $-0x1c1910
		   0x0111CA74:  0100A0E3     MOV r0, 0x1
		   0x0111CA78:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111CA7C:  000055E3     CMPS r0, r5, 0x0
		   0x0111CA80:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CA88
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111CA84:  51FAF8EB     BL $-0x1c16b4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111CA88:  846095E5     LDR r6, [r5, 0x84]
		   0x0111CA8C:  000056E3     CMPS r0, r6, 0x0
		   0x0111CA90:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CA98
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0111CA94:  4DFAF8EB     BL $-0x1c16c4
		   // ──── Block 6 if (!=) ────────────────────
		   0x0111CA98:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x0111CA9C:  0060A0E3     MOV r6, 0x0
		   0x0111CAA0:  050050E3     CMPS r0, r0, 0x5
		   0x0111CAA4:  0200000A     BEQ $+0x10  // if (==) goto 0x0111CAB4
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x0111CAA8:  3800D5E5     LDRB r0, [r5, 0x38]
		   0x0111CAAC:  000050E3     CMPS r0, r0, 0x0
		   0x0111CAB0:  0100000A     BEQ $+0xc  // if (==) goto 0x0111CABC
		   // 
		   // ──── Block 8 (from 2 paths) ──────────────────
		   0x0111CAB4:  0600A0E1     MOV r0, r6
		   0x0111CAB8:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 9 if (==) ────────────────────
		   0x0111CABC:  F8809FE5     LDR r8, [pc, 0xf8]
		   0x0111CAC0:  0500A0E1     MOV r0, r5
		   0x0111CAC4:  08809FE7     LDR r8, [pc, r8]
		   0x0111CAC8:  001098E5     LDR r1, [r8]
		   0x0111CACC:  F1F9F8EB     BL $-0x1c1834
		   0x0111CAD0:  000050E3     CMPS r0, r0, 0x0
		   0x0111CAD4:  F6FFFF0A     BEQ $-0x20
		   // ──── Block 10 else (!=) ────────────────────
		   0x0111CAD8:  00C090E5     LDR ip, [r0]
		   0x0111CADC:  0070A0E1     MOV r7, r0
		   0x0111CAE0:  001098E5     LDR r1, [r8]
		   0x0111CAE4:  B62BDCE1     LDRH r2, [ip, 0xb6]
		   0x0111CAE8:  000052E3     CMPS r0, r2, 0x0
		   0x0111CAEC:  0700000A     BEQ $+0x24  // if (==) goto 0x0111CB10
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x0111CAF0:  58309CE5     LDR r3, [ip, 0x58]
		   0x0111CAF4:  043083E2     ADD r3, r3, 0x4
		   0x0111CAF8:  040013E5     LDR r0, [r3, -0x4]
		   0x0111CAFC:  010050E1     CMPS r0, r0, r1
		   0x0111CB00:  0600000A     BEQ $+0x20  // if (==) goto 0x0111CB20
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x0111CB04:  012052E2     SUBS r2, r2, 0x1
		   0x0111CB08:  083083E2     ADD r3, r3, 0x8
		   0x0111CB0C:  F9FFFF1A     BNE $-0x14
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x0111CB10:  0700A0E1     MOV r0, r7
		   0x0111CB14:  0220A0E3     MOV r2, 0x2
		   0x0111CB18:  DAE8F9EB     BL $-0x185c90
		   0x0111CB1C:  020000EA     B $+0x10  // goto 0x0111CB2C
		   // ──── Block 14 if (==) ────────────────────
		   0x0111CB20:  000093E5     LDR r0, [r3]
		   0x0111CB24:  80018CE0     ADD r0, ip, r0, lsl 3
		   0x0111CB28:  D00080E2     ADD r0, r0, 0xd0
		   // ──── Block 15 ──────────────────────────────
		   0x0111CB2C:  D020C0E1     LDRD r2, r3, [r0]
		   0x0111CB30:  0700A0E1     MOV r0, r7
		   0x0111CB34:  0310A0E1     MOV r1, r3
		   0x0111CB38:  32FF2FE1     BLX r2
		   0x0111CB3C:  000050E3     CMPS r0, r0, 0x0
		   0x0111CB40:  DBFFFF0A     BEQ $-0x8c
		   // ──── Block 16 else (r2 != r2, 0x1) ────────────────────
		   0x0111CB44:  846094E5     LDR r6, [r4, 0x84]
		   0x0111CB48:  000056E3     CMPS r0, r6, 0x0
		   0x0111CB4C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CB54
		   // 
		   // ──── Block 17 else (r2 == r2, 0x1) ────────────────────
		   0x0111CB50:  1EFAF8EB     BL $-0x1c1780
		   // ──── Block 18 if (r2 != r2, 0x1) ────────────────────
		   0x0111CB54:  D40096E5     LDR r0, [r6, 0xd4]
		   0x0111CB58:  010070E3     CMNS r0, r0, 0x1
		   0x0111CB5C:  1200000A     BEQ $+0x50  // if (==) goto 0x0111CBAC
		   // 
		   // ──── Block 19 else (r2 != r2, 0x1) ────────────────────
		   0x0111CB60:  000055E3     CMPS r0, r5, 0x0
		   0x0111CB64:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CB6C
		   // 
		   // ──── Block 20 else (r2 == r2, 0x1) ────────────────────
		   0x0111CB68:  18FAF8EB     BL $-0x1c1798
		   // ──── Block 21 if (r2 != r2, 0x1) ────────────────────
		   0x0111CB6C:  845095E5     LDR r5, [r5, 0x84]
		   0x0111CB70:  000055E3     CMPS r0, r5, 0x0
		   0x0111CB74:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CB7C
		   // 
		   // ──── Block 22 else (r2 == r2, 0x1) ────────────────────
		   0x0111CB78:  14FAF8EB     BL $-0x1c17a8
		   // ──── Block 23 if (r2 != r2, 0x1) ────────────────────
		   0x0111CB7C:  0500A0E1     MOV r0, r5
		   0x0111CB80:  98B4FFEB     BL $-0x12d98
		   0x0111CB84:  844094E5     LDR r4, [r4, 0x84]
		   0x0111CB88:  0050A0E1     MOV r5, r0
		   0x0111CB8C:  000054E3     CMPS r0, r4, 0x0
		   0x0111CB90:  0000001A     BNE $+0x8  // if (!=) goto 0x0111CB98
		   // 
		   // ──── Block 24 else (r2 == r2, 0x1) ────────────────────
		   0x0111CB94:  0DFAF8EB     BL $-0x1c17c4
		   // ──── Block 25 if (r2 != r2, 0x1) ────────────────────
		   0x0111CB98:  D40094E5     LDR r0, [r4, 0xd4]
		   0x0111CB9C:  0060A0E3     MOV r6, 0x0
		   0x0111CBA0:  000055E1     CMPS r0, r5, r0
		   0x0111CBA4:  016000D3     MOVLE r6, 0x1
		   0x0111CBA8:  C1FFFFEA     B $-0xf4
		   // ──── Block 26 if (r2 == r2, 0x1) ────────────────────
		   0x0111CBAC:  0160A0E3     MOV r6, 0x1
		   0x0111CBB0:  BFFFFFEA     B $-0xfc
		   0x0111CBB4:  1CF41003     TSTSEQ pc, r0, 0x1c000000
		   0x0111CBB8:  CCC7F502     RSCSEQ ip, r5, 0x3300000
		   0x0111CBBC:  74C7F502     RSCSEQ ip, r5, 0x1d00000
		*/
	}

	// RVA: 0x111CF8C Offset: 0x111CF8C VA: 0x111CF8C
	public void .ctor() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111CF8C:  7DC9FFEA     B $-0xda04
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1330
{

	// Fields
	public static readonly ItemTargetBooster.<>c <>9; // 0x0
	public static Predicate<ItemObject> <>9__1_0; // 0x4
	public static Predicate<ItemObject> <>9__1_1; // 0x8
	public static Predicate<ItemObject> <>9__2_0; // 0xC

	// Methods

	// RVA: 0x111CF90 Offset: 0x111CF90 VA: 0x111CF90
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111CF90:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0111CF94:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x0111CF98:  04408FE0     ADD r4, pc, r4
		   0x0111CF9C:  0000D4E5     LDRB r0, [r4]
		   0x0111CFA0:  000050E3     CMPS r0, r0, 0x0
		   0x0111CFA4:  0400001A     BNE $+0x18  // if (!=) goto 0x0111CFBC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111CFA8:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0111CFAC:  00009FE7     LDR r0, [pc, r0]
		   0x0111CFB0:  6AF8F8EB     BL $-0x1c1e50
		   0x0111CFB4:  0100A0E3     MOV r0, 0x1
		   0x0111CFB8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111CFBC:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x0111CFC0:  05509FE7     LDR r5, [pc, r5]
		   0x0111CFC4:  000095E5     LDR r0, [r5]
		   0x0111CFC8:  FDF8F8EB     BL $-0x1c1c04
		   0x0111CFCC:  0010A0E3     MOV r1, 0x0
		   0x0111CFD0:  0040A0E1     MOV r4, r0
		   0x0111CFD4:  04E17DEB     BL $+0x1f78418  // CALL → Object..ctor
		   0x0111CFD8:  000095E5     LDR r0, [r5]
		   0x0111CFDC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0111CFE0:  004080E5     STR r4, [r0]
		   0x0111CFE4:  3088BDE8     POP {r4, r5, fp, pc}
		   0x0111CFE8:  DDEE1003     TSTSEQ lr, r0, 0xdd0
		   0x0111CFEC:  4CCBF502     RSCSEQ ip, r5, 0x13000
		   0x0111CFF0:  38CBF502     RSCSEQ ip, r5, 0xe000
		*/
	}

	// RVA: 0x111CFF4 Offset: 0x111CFF4 VA: 0x111CFF4
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0111CFF4:  0010A0E3     MOV r1, 0x0
		   0x0111CFF8:  FBE07DEA     B $+0x1f783f4  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x111CFFC Offset: 0x111CFFC VA: 0x111CFFC
	internal bool <CanApplyWildcard>b__1_0(ItemObject item) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 18 blocks, 20 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111CFFC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0111D000:  0140A0E1     MOV r4, r1
		   0x0111D004:  000051E3     CMPS r0, r1, 0x0
		   0x0111D008:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D010
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111D00C:  EFF8F8EB     BL $-0x1c1c3c
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111D010:  185094E5     LDR r5, [r4, 0x18]
		   0x0111D014:  000055E3     CMPS r0, r5, 0x0
		   0x0111D018:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D020
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111D01C:  EBF8F8EB     BL $-0x1c1c4c
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111D020:  4C0095E5     LDR r0, [r5, 0x4c]
		   0x0111D024:  0150A0E3     MOV r5, 0x1
		   0x0111D028:  010050E3     CMPS r0, r0, 0x1
		   0x0111D02C:  1C00000A     BEQ $+0x78  // if (==) goto 0x0111D0A4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x0111D030:  186094E5     LDR r6, [r4, 0x18]
		   0x0111D034:  000056E3     CMPS r0, r6, 0x0
		   0x0111D038:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D040
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0111D03C:  E3F8F8EB     BL $-0x1c1c6c
		   // ──── Block 7 if (!=) ────────────────────
		   0x0111D040:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x0111D044:  080050E3     CMPS r0, r0, 0x8
		   0x0111D048:  1500000A     BEQ $+0x5c  // if (==) goto 0x0111D0A4
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x0111D04C:  186094E5     LDR r6, [r4, 0x18]
		   0x0111D050:  000056E3     CMPS r0, r6, 0x0
		   0x0111D054:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D05C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0111D058:  DCF8F8EB     BL $-0x1c1c88
		   // ──── Block 10 if (!=) ────────────────────
		   0x0111D05C:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x0111D060:  030050E3     CMPS r0, r0, 0x3
		   0x0111D064:  0E00000A     BEQ $+0x40  // if (==) goto 0x0111D0A4
		   // 
		   // ──── Block 11 else (!=) ────────────────────
		   0x0111D068:  186094E5     LDR r6, [r4, 0x18]
		   0x0111D06C:  000056E3     CMPS r0, r6, 0x0
		   0x0111D070:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D078
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0111D074:  D5F8F8EB     BL $-0x1c1ca4
		   // ──── Block 13 if (!=) ────────────────────
		   0x0111D078:  4C0096E5     LDR r0, [r6, 0x4c]
		   0x0111D07C:  090050E3     CMPS r0, r0, 0x9
		   0x0111D080:  0700000A     BEQ $+0x24  // if (==) goto 0x0111D0A4
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x0111D084:  184094E5     LDR r4, [r4, 0x18]
		   0x0111D088:  000054E3     CMPS r0, r4, 0x0
		   0x0111D08C:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D094
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0111D090:  CEF8F8EB     BL $-0x1c1cc0
		   // ──── Block 16 if (!=) ────────────────────
		   0x0111D094:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111D098:  070040E2     SUB r0, r0, 0x7
		   0x0111D09C:  100F6FE1     CLZ r0, r0
		   0x0111D0A0:  A052A0E1     MOV r5, r0, r0, lsr 5
		   // ──── Block 17 (from 4 paths) ──────────────────
		   0x0111D0A4:  0500A0E1     MOV r0, r5
		   0x0111D0A8:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x111D0AC Offset: 0x111D0AC VA: 0x111D0AC
	internal bool <CanApplyWildcard>b__1_1(ItemObject item) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111D0AC:  10402DE9     PUSH {r4, lr}
		   0x0111D0B0:  0140A0E1     MOV r4, r1
		   0x0111D0B4:  000051E3     CMPS r0, r1, 0x0
		   0x0111D0B8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D0C0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111D0BC:  C3F8F8EB     BL $-0x1c1cec
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111D0C0:  184094E5     LDR r4, [r4, 0x18]
		   0x0111D0C4:  000054E3     CMPS r0, r4, 0x0
		   0x0111D0C8:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D0D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111D0CC:  BFF8F8EB     BL $-0x1c1cfc
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111D0D0:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111D0D4:  0B0040E2     SUB r0, r0, 0xb
		   0x0111D0D8:  100F6FE1     CLZ r0, r0
		   0x0111D0DC:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0111D0E0:  1080BDE8     POP {r4, pc}
		*/
	}

	// RVA: 0x111D0E4 Offset: 0x111D0E4 VA: 0x111D0E4
	internal bool <CanApplyDivider>b__2_0(ItemObject item) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0111D0E4:  10402DE9     PUSH {r4, lr}
		   0x0111D0E8:  0140A0E1     MOV r4, r1
		   0x0111D0EC:  000051E3     CMPS r0, r1, 0x0
		   0x0111D0F0:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D0F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0111D0F4:  B5F8F8EB     BL $-0x1c1d24
		   // ──── Block 2 if (!=) ────────────────────
		   0x0111D0F8:  184094E5     LDR r4, [r4, 0x18]
		   0x0111D0FC:  000054E3     CMPS r0, r4, 0x0
		   0x0111D100:  0000001A     BNE $+0x8  // if (!=) goto 0x0111D108
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0111D104:  B1F8F8EB     BL $-0x1c1d34
		   // ──── Block 4 if (!=) ────────────────────
		   0x0111D108:  4C0094E5     LDR r0, [r4, 0x4c]
		   0x0111D10C:  0B0040E2     SUB r0, r0, 0xb
		   0x0111D110:  100F6FE1     CLZ r0, r0
		   0x0111D114:  A002A0E1     MOV r0, r0, r0, lsr 5
		   0x0111D118:  1080BDE8     POP {r4, pc}
		*/
	}
}
