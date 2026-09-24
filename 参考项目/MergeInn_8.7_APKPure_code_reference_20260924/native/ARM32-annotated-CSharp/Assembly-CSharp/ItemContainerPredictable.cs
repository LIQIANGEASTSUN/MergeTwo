// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemContainerPredictable : ItemContainer // TypeDefIndex: 1309
{

	// Fields
	private PseudoRandom pseudoRandom; // 0x104

	// Methods

	// RVA: 0x1114974 Offset: 0x1114974 VA: 0x1114974 Slot: 10
	public override void SetItemData(ItemData data) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01114974:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		*/
	}

	// RVA: 0x1114B04 Offset: 0x1114B04 VA: 0x1114B04 Slot: 49
	protected override ItemData SelectItemToSpawn(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 110 instructions, 0x1B8 bytes):
		   // CFG: 29 blocks, 29 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114B04:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01114B08:  10D04DE2     SUB sp, sp, 0x10
		   0x01114B0C:  9C619FE5     LDR r6, [pc, 0x19c]
		   0x01114B10:  0040A0E1     MOV r4, r0
		   0x01114B14:  0150A0E1     MOV r5, r1
		   0x01114B18:  06608FE0     ADD r6, pc, r6
		   0x01114B1C:  0000D6E5     LDRB r0, [r6]
		   0x01114B20:  000050E3     CMPS r0, r0, 0x0
		   0x01114B24:  0400001A     BNE $+0x18  // if (!=) goto 0x01114B3C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114B28:  84019FE5     LDR r0, [pc, 0x184]
		   0x01114B2C:  00009FE7     LDR r0, [pc, r0]
		   0x01114B30:  8A19F9EB     BL $-0x1b99d0
		   0x01114B34:  0100A0E3     MOV r0, 0x1
		   0x01114B38:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114B3C:  3210D4E5     LDRB r1, [r4, 0x32]
		   0x01114B40:  0000A0E3     MOV r0, 0x0
		   0x01114B44:  0C008DE5     STR r0, [sp, 0xc]
		   0x01114B48:  000051E3     CMPS r0, r1, 0x0
		   0x01114B4C:  0B00CDE5     STRB r0, [sp, 0xb]
		   0x01114B50:  2500000A     BEQ $+0x9c  // if (==) goto 0x01114BEC
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01114B54:  B46094E5     LDR r6, [r4, 0xb4]
		   0x01114B58:  000056E3     CMPS r0, r6, 0x0
		   0x01114B5C:  0000001A     BNE $+0x8  // if (!=) goto 0x01114B64
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01114B60:  1A1AF9EB     BL $-0x1b9790
		   // ──── Block 5 if (!=) ────────────────────
		   0x01114B64:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01114B68:  000050E3     CMPS r0, r0, 0x0
		   0x01114B6C:  1E00000A     BEQ $+0x80  // if (==) goto 0x01114BEC
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01114B70:  341094E5     LDR r1, [r4, 0x34]
		   0x01114B74:  FAF6FFEB     BL $-0x2410
		   0x01114B78:  B47094E5     LDR r7, [r4, 0xb4]
		   0x01114B7C:  0060A0E1     MOV r6, r0
		   0x01114B80:  000057E3     CMPS r0, r7, 0x0
		   0x01114B84:  0000001A     BNE $+0x8  // if (!=) goto 0x01114B8C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01114B88:  101AF9EB     BL $-0x1b97b8
		   // ──── Block 8 if (!=) ────────────────────
		   0x01114B8C:  0C0097E5     LDR r0, [r7, 0xc]
		   0x01114B90:  000056E1     CMPS r0, r6, r0
		   0x01114B94:  140000AA     BGE $+0x58  // if (>=) goto 0x01114BEC
		   // 
		   // ──── Block 9 else (<) ────────────────────
		   0x01114B98:  341094E5     LDR r1, [r4, 0x34]
		   0x01114B9C:  F0F6FFEB     BL $-0x2438
		   0x01114BA0:  341094E5     LDR r1, [r4, 0x34]
		   0x01114BA4:  012080E2     ADD r2, r0, 0x1
		   0x01114BA8:  0050A0E1     MOV r5, r0
		   0x01114BAC:  19F7FFEB     BL $-0x2394
		   0x01114BB0:  B44094E5     LDR r4, [r4, 0xb4]
		   0x01114BB4:  000054E3     CMPS r0, r4, 0x0
		   0x01114BB8:  0000001A     BNE $+0x8  // if (!=) goto 0x01114BC0
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x01114BBC:  031AF9EB     BL $-0x1b97ec
		   // ──── Block 11 if (!=) ────────────────────
		   0x01114BC0:  0C0094E5     LDR r0, [r4, 0xc]
		   0x01114BC4:  050050E1     CMPS r0, r0, r5
		   0x01114BC8:  0000008A     BHI $+0x8  // if (> (unsigned)) goto 0x01114BD0
		   // 
		   // ──── Block 12 else (<= (unsigned)) ────────────────────
		   0x01114BCC:  001AF9EB     BL $-0x1b97f8
		   // ──── Block 13 if (> (unsigned)) ────────────────────
		   0x01114BD0:  050184E0     ADD r0, r4, r5, lsl 2
		   0x01114BD4:  104090E5     LDR r4, [r0, 0x10]
		   0x01114BD8:  000054E3     CMPS r0, r4, 0x0
		   0x01114BDC:  0000001A     BNE $+0x8  // if (!=) goto 0x01114BE4
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01114BE0:  FA19F9EB     BL $-0x1b9810
		   // ──── Block 15 if (!=) ────────────────────
		   0x01114BE4:  186094E5     LDR r6, [r4, 0x18]
		   0x01114BE8:  2D0000EA     B $+0xbc  // goto 0x01114CA4
		   // ──── Block 16 (from 3 paths) ──────────────────
		   0x01114BEC:  B06094E5     LDR r6, [r4, 0xb0]
		   0x01114BF0:  000056E3     CMPS r0, r6, 0x0
		   0x01114BF4:  0000001A     BNE $+0x8  // if (!=) goto 0x01114BFC
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01114BF8:  F419F9EB     BL $-0x1b9828
		   // ──── Block 18 if (!=) ────────────────────
		   0x01114BFC:  0C0096E5     LDR r0, [r6, 0xc]
		   0x01114C00:  000050E3     CMPS r0, r0, 0x0
		   0x01114C04:  0000001A     BNE $+0x8  // if (!=) goto 0x01114C0C
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x01114C08:  F119F9EB     BL $-0x1b9834
		   // ──── Block 20 if (!=) ────────────────────
		   0x01114C0C:  106096E5     LDR r6, [r6, 0x10]
		   0x01114C10:  000056E3     CMPS r0, r6, 0x0
		   0x01114C14:  0000001A     BNE $+0x8  // if (!=) goto 0x01114C1C
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x01114C18:  EC19F9EB     BL $-0x1b9848
		   // ──── Block 22 if (!=) ────────────────────
		   0x01114C1C:  047194E5     LDR r7, [r4, 0x104]
		   0x01114C20:  186096E5     LDR r6, [r6, 0x18]
		   0x01114C24:  000057E3     CMPS r0, r7, 0x0
		   0x01114C28:  0000001A     BNE $+0x8  // if (!=) goto 0x01114C30
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01114C2C:  E719F9EB     BL $-0x1b985c
		   // ──── Block 24 if (!=) ────────────────────
		   0x01114C30:  0700A0E1     MOV r0, r7
		   0x01114C34:  0010A0E3     MOV r1, 0x0
		   0x01114C38:  80070CEB     BL $+0x301e08  // CALL → PseudoRandom.GetNextIndex
		   0x01114C3C:  0070A0E1     MOV r7, r0
		   0x01114C40:  70009FE5     LDR r0, [pc, 0x70]
		   0x01114C44:  00009FE7     LDR r0, [pc, r0]
		   0x01114C48:  000090E5     LDR r0, [r0]
		   0x01114C4C:  741090E5     LDR r1, [r0, 0x74]
		   0x01114C50:  000051E3     CMPS r0, r1, 0x0
		   0x01114C54:  0000001A     BNE $+0x8  // if (!=) goto 0x01114C5C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01114C58:  8D19F9EB     BL $-0x1b99c4
		   // ──── Block 26 if (!=) ────────────────────
		   0x01114C5C:  0000A0E3     MOV r0, 0x0
		   0x01114C60:  EFCFFDEB     BL $-0x8c03c
		   0x01114C64:  0C208DE2     ADD r2, sp, 0xc
		   0x01114C68:  0B308DE2     ADD r3, sp, 0xb
		   0x01114C6C:  0400A0E1     MOV r0, r4
		   0x01114C70:  0710A0E1     MOV r1, r7
		   0x01114C74:  00508DE5     STR r5, [sp]
		   0x01114C78:  14F7FFEB     BL $-0x23a8
		   0x01114C7C:  0B10DDE5     LDRB r1, [sp, 0xb]
		   0x01114C80:  0040A0E1     MOV r4, r0
		   0x01114C84:  0700A0E3     MOV r0, 0x7
		   0x01114C88:  000051E3     CMPS r0, r1, 0x0
		   0x01114C8C:  0010A0E3     MOV r1, 0x0
		   0x01114C90:  04000003     MOVEQ r0, 0x4
		   0x01114C94:  C6A7FDEB     BL $-0x960e0
		   0x01114C98:  0C009DE5     LDR r0, [sp, 0xc]
		   0x01114C9C:  000054E3     CMPS r0, r4, 0x0
		   0x01114CA0:  0060A011     MOVNE r6, r0
		   // ──── Block 27 ──────────────────────────────
		   0x01114CA4:  0600A0E1     MOV r0, r6
		   0x01114CA8:  10D08DE2     ADD sp, sp, 0x10
		   0x01114CAC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01114CB0:  18731103     TSTSEQ r7, r1, 0x60000000
		   0x01114CB4:  E431F602     RSCSEQ r3, r6, 0x39
		   0x01114CB8:  CC30F602     RSCSEQ r3, r6, 0xcc
		*/
	}

	// RVA: 0x1114CBC Offset: 0x1114CBC VA: 0x1114CBC Slot: 18
	public override void PreDispose() {
		/* Disassembly (ARM32, 48 instructions, 0xC0 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01114CBC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01114CC0:  08D04DE2     SUB sp, sp, 0x8
		   0x01114CC4:  A4509FE5     LDR r5, [pc, 0xa4]
		   0x01114CC8:  0040A0E1     MOV r4, r0
		   0x01114CCC:  05508FE0     ADD r5, pc, r5
		   0x01114CD0:  0000D5E5     LDRB r0, [r5]
		   0x01114CD4:  000050E3     CMPS r0, r0, 0x0
		   0x01114CD8:  0400001A     BNE $+0x18  // if (!=) goto 0x01114CF0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01114CDC:  90009FE5     LDR r0, [pc, 0x90]
		   0x01114CE0:  00009FE7     LDR r0, [pc, r0]
		   0x01114CE4:  1D19F9EB     BL $-0x1b9b84
		   0x01114CE8:  0100A0E3     MOV r0, 0x1
		   0x01114CEC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01114CF0:  000094E5     LDR r0, [r4]
		   0x01114CF4:  582190E5     LDR r2, [r0, 0x158]
		   0x01114CF8:  5C1190E5     LDR r1, [r0, 0x15c]
		   0x01114CFC:  0000A0E3     MOV r0, 0x0
		   0x01114D00:  04008DE5     STR r0, [sp, 0x4]
		   0x01114D04:  0400A0E1     MOV r0, r4
		   0x01114D08:  32FF2FE1     BLX r2  // virtual call: vtable+0x158
		   0x01114D0C:  000094E5     LDR r0, [r4]
		   0x01114D10:  602190E5     LDR r2, [r0, 0x160]
		   0x01114D14:  641190E5     LDR r1, [r0, 0x164]
		   0x01114D18:  0400A0E1     MOV r0, r4
		   0x01114D1C:  32FF2FE1     BLX r2  // virtual call: vtable+0x160
		   0x01114D20:  0400A0E1     MOV r0, r4
		   0x01114D24:  93D8FFEB     BL $-0x9dac
		   0x01114D28:  340094E5     LDR r0, [r4, 0x34]
		   0x01114D2C:  0010A0E3     MOV r1, 0x0
		   0x01114D30:  04008DE5     STR r0, [sp, 0x4]
		   0x01114D34:  04008DE2     ADD r0, sp, 0x4
		   0x01114D38:  BABD7CEB     BL $+0x1f2f6f0  // CALL → Int32.ToString
		   0x01114D3C:  0040A0E1     MOV r4, r0
		   0x01114D40:  30009FE5     LDR r0, [pc, 0x30]
		   0x01114D44:  00009FE7     LDR r0, [pc, r0]
		   0x01114D48:  000090E5     LDR r0, [r0]
		   0x01114D4C:  741090E5     LDR r1, [r0, 0x74]
		   0x01114D50:  000051E3     CMPS r0, r1, 0x0
		   0x01114D54:  0000001A     BNE $+0x8  // if (!=) goto 0x01114D5C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01114D58:  4D19F9EB     BL $-0x1b9ac4
		   // ──── Block 4 if (!=) ────────────────────
		   0x01114D5C:  0400A0E1     MOV r0, r4
		   0x01114D60:  0010A0E3     MOV r1, 0x0
		   0x01114D64:  5DD0FDEB     BL $-0x8be84
		   0x01114D68:  08D08DE2     ADD sp, sp, 0x8
		   0x01114D6C:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01114D70:  65711103     TSTSEQ r7, r1, 0x40000019
		   0x01114D74:  3030F602     RSCSEQ r3, r6, 0x30
		   0x01114D78:  CC2FF602     RSCSEQ r2, r6, 0x330
		*/
	}

	// RVA: 0x1114D7C Offset: 0x1114D7C VA: 0x1114D7C
	public void .ctor() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01114D7C:  7DE7FFEA     B $-0x6204
		*/
	}
}
