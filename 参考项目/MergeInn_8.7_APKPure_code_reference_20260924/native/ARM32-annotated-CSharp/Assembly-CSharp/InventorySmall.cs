// Dll : Assembly-CSharp.dll
// Namespace: 
public class InventorySmall : PopupInstantiateAsync<InventorySmallWindow> // TypeDefIndex: 2706
{

	// Fields
	[CompilerGenerated]
	private Action<int, int> inventoryMoved; // 0x20
	[CompilerGenerated]
	private Action<Cell> itemDropped; // 0x24
	private InventorySmallWindow inventorySmallView; // 0x28
	private Camera camera; // 0x2C
	private Func<UIInventoryItem, int, Vector2, CreateItemResult> createFromInventory; // 0x30
	private Action<UIInventoryItem[]> openInventoryPopup; // 0x34
	private Item[] items; // 0x38
	private bool interactable; // 0x3C
	private bool visible; // 0x3D

	// Methods

	[CompilerGenerated]
	// RVA: 0x12F0C3C Offset: 0x12F0C3C VA: 0x12F0C3C
	public void add_inventoryMoved(Action<int, int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F0C3C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x012F0C40:  98409FE5     LDR r4, [pc, 0x98]
		   0x012F0C44:  0090A0E1     MOV sb, r0
		   0x012F0C48:  0180A0E1     MOV r8, r1
		   0x012F0C4C:  04408FE0     ADD r4, pc, r4
		   0x012F0C50:  0000D4E5     LDRB r0, [r4]
		   0x012F0C54:  000050E3     CMPS r0, r0, 0x0
		   0x012F0C58:  0400001A     BNE $+0x18  // if (!=) goto 0x012F0C70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F0C5C:  80009FE5     LDR r0, [pc, 0x80]
		   0x012F0C60:  00009FE7     LDR r0, [pc, r0]
		   0x012F0C64:  3DA9F1EB     BL $-0x395b04
		   0x012F0C68:  0100A0E3     MOV r0, 0x1
		   0x012F0C6C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F0C70:  2000B9E5     LDR r0, [sb, 0x20]!
		   0x012F0C74:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x012F0C78:  0AA09FE7     LDR r10, [pc, r10]
		   0x012F0C7C:  0810A0E1     MOV r1, r8
		   0x012F0C80:  0020A0E3     MOV r2, 0x0
		   0x012F0C84:  0060A0E1     MOV r6, r0
		   0x012F0C88:  0070A0E3     MOV r7, 0x0
		   0x012F0C8C:  29A276EB     BL $+0x1da88ac  // CALL → Delegate.Combine
		   0x012F0C90:  000050E3     CMPS r0, r0, 0x0
		   0x012F0C94:  0A00000A     BEQ $+0x30  // if (==) goto 0x012F0CC4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x012F0C98:  00509AE5     LDR r5, [r10]
		   0x012F0C9C:  0040A0E1     MOV r4, r0
		   0x012F0CA0:  0510A0E1     MOV r1, r5
		   0x012F0CA4:  7BA9F1EB     BL $-0x395a0c
		   0x012F0CA8:  0070A0E1     MOV r7, r0
		   0x012F0CAC:  000050E3     CMPS r0, r0, 0x0
		   0x012F0CB0:  0300001A     BNE $+0x14  // if (!=) goto 0x012F0CC4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x012F0CB4:  0400A0E1     MOV r0, r4
		   0x012F0CB8:  0510A0E1     MOV r1, r5
		   0x012F0CBC:  B1AAF1EB     BL $-0x395534
		   0x012F0CC0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x012F0CC4:  0900A0E1     MOV r0, sb
		   0x012F0CC8:  0710A0E1     MOV r1, r7
		   0x012F0CCC:  0620A0E1     MOV r2, r6
		   0x012F0CD0:  E895F2EB     BL $-0x35a858
		   0x012F0CD4:  060050E1     CMPS r0, r0, r6
		   0x012F0CD8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x012F0CDC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x012F0CE0:  27C1F302     RSCSEQ ip, r3, 0xc0000009
		   0x012F0CE4:  38F7D802     SBCSEQ pc, r8, 0xe00000
		   0x012F0CE8:  20F7D802     SBCSEQ pc, r8, 0x800000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x12F0CEC Offset: 0x12F0CEC VA: 0x12F0CEC
	public void remove_inventoryMoved(Action<int, int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F0CEC:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x012F0CF0:  98409FE5     LDR r4, [pc, 0x98]
		   0x012F0CF4:  0090A0E1     MOV sb, r0
		   0x012F0CF8:  0180A0E1     MOV r8, r1
		   0x012F0CFC:  04408FE0     ADD r4, pc, r4
		   0x012F0D00:  0000D4E5     LDRB r0, [r4]
		   0x012F0D04:  000050E3     CMPS r0, r0, 0x0
		   0x012F0D08:  0400001A     BNE $+0x18  // if (!=) goto 0x012F0D20
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F0D0C:  80009FE5     LDR r0, [pc, 0x80]
		   0x012F0D10:  00009FE7     LDR r0, [pc, r0]
		   0x012F0D14:  11A9F1EB     BL $-0x395bb4
		   0x012F0D18:  0100A0E3     MOV r0, 0x1
		   0x012F0D1C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F0D20:  2000B9E5     LDR r0, [sb, 0x20]!
		   0x012F0D24:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x012F0D28:  0AA09FE7     LDR r10, [pc, r10]
		   0x012F0D2C:  0810A0E1     MOV r1, r8
		   0x012F0D30:  0020A0E3     MOV r2, 0x0
		   0x012F0D34:  0060A0E1     MOV r6, r0
		   0x012F0D38:  0070A0E3     MOV r7, 0x0
		   0x012F0D3C:  7BA276EB     BL $+0x1da89f4  // CALL → Delegate.Remove
		   0x012F0D40:  000050E3     CMPS r0, r0, 0x0
		   0x012F0D44:  0A00000A     BEQ $+0x30  // if (==) goto 0x012F0D74
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x012F0D48:  00509AE5     LDR r5, [r10]
		   0x012F0D4C:  0040A0E1     MOV r4, r0
		   0x012F0D50:  0510A0E1     MOV r1, r5
		   0x012F0D54:  4FA9F1EB     BL $-0x395abc
		   0x012F0D58:  0070A0E1     MOV r7, r0
		   0x012F0D5C:  000050E3     CMPS r0, r0, 0x0
		   0x012F0D60:  0300001A     BNE $+0x14  // if (!=) goto 0x012F0D74
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x012F0D64:  0400A0E1     MOV r0, r4
		   0x012F0D68:  0510A0E1     MOV r1, r5
		   0x012F0D6C:  85AAF1EB     BL $-0x3955e4
		   0x012F0D70:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x012F0D74:  0900A0E1     MOV r0, sb
		   0x012F0D78:  0710A0E1     MOV r1, r7
		   0x012F0D7C:  0620A0E1     MOV r2, r6
		   0x012F0D80:  BC95F2EB     BL $-0x35a908
		   0x012F0D84:  060050E1     CMPS r0, r0, r6
		   0x012F0D88:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x012F0D8C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x012F0D90:  78C0F302     RSCSEQ ip, r3, 0x78
		   0x012F0D94:  88F6D802     SBCSEQ pc, r8, 0x8800000
		   0x012F0D98:  70F6D802     SBCSEQ pc, r8, 0x7000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x12F0D9C Offset: 0x12F0D9C VA: 0x12F0D9C
	public void add_itemDropped(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F0D9C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x012F0DA0:  98409FE5     LDR r4, [pc, 0x98]
		   0x012F0DA4:  0090A0E1     MOV sb, r0
		   0x012F0DA8:  0180A0E1     MOV r8, r1
		   0x012F0DAC:  04408FE0     ADD r4, pc, r4
		   0x012F0DB0:  0000D4E5     LDRB r0, [r4]
		   0x012F0DB4:  000050E3     CMPS r0, r0, 0x0
		   0x012F0DB8:  0400001A     BNE $+0x18  // if (!=) goto 0x012F0DD0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F0DBC:  80009FE5     LDR r0, [pc, 0x80]
		   0x012F0DC0:  00009FE7     LDR r0, [pc, r0]
		   0x012F0DC4:  E5A8F1EB     BL $-0x395c64
		   0x012F0DC8:  0100A0E3     MOV r0, 0x1
		   0x012F0DCC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F0DD0:  2400B9E5     LDR r0, [sb, 0x24]!
		   0x012F0DD4:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x012F0DD8:  0AA09FE7     LDR r10, [pc, r10]
		   0x012F0DDC:  0810A0E1     MOV r1, r8
		   0x012F0DE0:  0020A0E3     MOV r2, 0x0
		   0x012F0DE4:  0060A0E1     MOV r6, r0
		   0x012F0DE8:  0070A0E3     MOV r7, 0x0
		   0x012F0DEC:  D1A176EB     BL $+0x1da874c  // CALL → Delegate.Combine
		   0x012F0DF0:  000050E3     CMPS r0, r0, 0x0
		   0x012F0DF4:  0A00000A     BEQ $+0x30  // if (==) goto 0x012F0E24
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x012F0DF8:  00509AE5     LDR r5, [r10]
		   0x012F0DFC:  0040A0E1     MOV r4, r0
		   0x012F0E00:  0510A0E1     MOV r1, r5
		   0x012F0E04:  23A9F1EB     BL $-0x395b6c
		   0x012F0E08:  0070A0E1     MOV r7, r0
		   0x012F0E0C:  000050E3     CMPS r0, r0, 0x0
		   0x012F0E10:  0300001A     BNE $+0x14  // if (!=) goto 0x012F0E24
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x012F0E14:  0400A0E1     MOV r0, r4
		   0x012F0E18:  0510A0E1     MOV r1, r5
		   0x012F0E1C:  59AAF1EB     BL $-0x395694
		   0x012F0E20:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x012F0E24:  0900A0E1     MOV r0, sb
		   0x012F0E28:  0710A0E1     MOV r1, r7
		   0x012F0E2C:  0620A0E1     MOV r2, r6
		   0x012F0E30:  9095F2EB     BL $-0x35a9b8
		   0x012F0E34:  060050E1     CMPS r0, r0, r6
		   0x012F0E38:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x012F0E3C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x012F0E40:  C9BFF302     RSCSEQ fp, r3, 0x324
		   0x012F0E44:  CC7FD802     SBCSEQ r7, r8, 0x330
		   0x012F0E48:  B47FD802     SBCSEQ r7, r8, 0x2d0
		*/
	}

	[CompilerGenerated]
	// RVA: 0x12F0E4C Offset: 0x12F0E4C VA: 0x12F0E4C
	public void remove_itemDropped(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F0E4C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x012F0E50:  98409FE5     LDR r4, [pc, 0x98]
		   0x012F0E54:  0090A0E1     MOV sb, r0
		   0x012F0E58:  0180A0E1     MOV r8, r1
		   0x012F0E5C:  04408FE0     ADD r4, pc, r4
		   0x012F0E60:  0000D4E5     LDRB r0, [r4]
		   0x012F0E64:  000050E3     CMPS r0, r0, 0x0
		   0x012F0E68:  0400001A     BNE $+0x18  // if (!=) goto 0x012F0E80
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F0E6C:  80009FE5     LDR r0, [pc, 0x80]
		   0x012F0E70:  00009FE7     LDR r0, [pc, r0]
		   0x012F0E74:  B9A8F1EB     BL $-0x395d14
		   0x012F0E78:  0100A0E3     MOV r0, 0x1
		   0x012F0E7C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F0E80:  2400B9E5     LDR r0, [sb, 0x24]!
		   0x012F0E84:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x012F0E88:  0AA09FE7     LDR r10, [pc, r10]
		   0x012F0E8C:  0810A0E1     MOV r1, r8
		   0x012F0E90:  0020A0E3     MOV r2, 0x0
		   0x012F0E94:  0060A0E1     MOV r6, r0
		   0x012F0E98:  0070A0E3     MOV r7, 0x0
		   0x012F0E9C:  23A276EB     BL $+0x1da8894  // CALL → Delegate.Remove
		   0x012F0EA0:  000050E3     CMPS r0, r0, 0x0
		   0x012F0EA4:  0A00000A     BEQ $+0x30  // if (==) goto 0x012F0ED4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x012F0EA8:  00509AE5     LDR r5, [r10]
		   0x012F0EAC:  0040A0E1     MOV r4, r0
		   0x012F0EB0:  0510A0E1     MOV r1, r5
		   0x012F0EB4:  F7A8F1EB     BL $-0x395c1c
		   0x012F0EB8:  0070A0E1     MOV r7, r0
		   0x012F0EBC:  000050E3     CMPS r0, r0, 0x0
		   0x012F0EC0:  0300001A     BNE $+0x14  // if (!=) goto 0x012F0ED4
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x012F0EC4:  0400A0E1     MOV r0, r4
		   0x012F0EC8:  0510A0E1     MOV r1, r5
		   0x012F0ECC:  2DAAF1EB     BL $-0x395744
		   0x012F0ED0:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x012F0ED4:  0900A0E1     MOV r0, sb
		   0x012F0ED8:  0710A0E1     MOV r1, r7
		   0x012F0EDC:  0620A0E1     MOV r2, r6
		   0x012F0EE0:  6495F2EB     BL $-0x35aa68
		   0x012F0EE4:  060050E1     CMPS r0, r0, r6
		   0x012F0EE8:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x012F0EEC:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x012F0EF0:  1ABFF302     RSCSEQ fp, r3, 0x68
		   0x012F0EF4:  1C7FD802     SBCSEQ r7, r8, 0x70
		   0x012F0EF8:  047FD802     SBCSEQ r7, r8, 0x10
		*/
	}

	// RVA: 0x12F0EFC Offset: 0x12F0EFC VA: 0x12F0EFC
	public void SetInteractable(bool interactable) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F0EFC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F0F00:  88609FE5     LDR r6, [pc, 0x88]
		   0x012F0F04:  0050A0E1     MOV r5, r0
		   0x012F0F08:  0140A0E1     MOV r4, r1
		   0x012F0F0C:  06608FE0     ADD r6, pc, r6
		   0x012F0F10:  0000D6E5     LDRB r0, [r6]
		   0x012F0F14:  000050E3     CMPS r0, r0, 0x0
		   0x012F0F18:  0400001A     BNE $+0x18  // if (!=) goto 0x012F0F30
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F0F1C:  70009FE5     LDR r0, [pc, 0x70]
		   0x012F0F20:  00009FE7     LDR r0, [pc, r0]
		   0x012F0F24:  8DA8F1EB     BL $-0x395dc4
		   0x012F0F28:  0100A0E3     MOV r0, 0x1
		   0x012F0F2C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F0F30:  60009FE5     LDR r0, [pc, 0x60]
		   0x012F0F34:  00009FE7     LDR r0, [pc, r0]
		   0x012F0F38:  286095E5     LDR r6, [r5, 0x28]
		   0x012F0F3C:  000090E5     LDR r0, [r0]
		   0x012F0F40:  741090E5     LDR r1, [r0, 0x74]
		   0x012F0F44:  000051E3     CMPS r0, r1, 0x0
		   0x012F0F48:  0000001A     BNE $+0x8  // if (!=) goto 0x012F0F50
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F0F4C:  D0A8F1EB     BL $-0x395cb8
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F0F50:  0600A0E1     MOV r0, r6
		   0x012F0F54:  0010A0E3     MOV r1, 0x0
		   0x012F0F58:  0020A0E3     MOV r2, 0x0
		   0x012F0F5C:  04CFF4EB     BL $-0x2cc3e8
		   0x012F0F60:  000050E3     CMPS r0, r0, 0x0
		   0x012F0F64:  0700000A     BEQ $+0x24  // if (==) goto 0x012F0F88
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x012F0F68:  286095E5     LDR r6, [r5, 0x28]
		   0x012F0F6C:  000056E3     CMPS r0, r6, 0x0
		   0x012F0F70:  0000001A     BNE $+0x8  // if (!=) goto 0x012F0F78
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F0F74:  15A9F1EB     BL $-0x395ba4
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F0F78:  0600A0E1     MOV r0, r6
		   0x012F0F7C:  0410A0E1     MOV r1, r4
		   0x012F0F80:  0020A0E3     MOV r2, 0x0
		   0x012F0F84:  E53B00EB     BL $+0xef9c  // CALL → PanelWithCanvasGroup.set_interactable
		   // ──── Block 8 if (==) ────────────────────
		   0x012F0F88:  3C40C5E5     STRB r4, [r5, 0x3c]
		   0x012F0F8C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x012F0F90:  6BBEF302     RSCSEQ fp, r3, 0x6b0
		   0x012F0F94:  1856D802     SBCSEQ r5, r8, 0x1800000
		   0x012F0F98:  0456D802     SBCSEQ r5, r8, 0x400000
		*/
	}

	// RVA: 0x12F0F9C Offset: 0x12F0F9C VA: 0x12F0F9C
	public void Init(Camera camera, Func<UIInventoryItem, int, Vector2, CreateItemResult> createFromInventory, Action<UIInventoryItem[]> openInventoryPopup) {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x012F0F9C:  2C0080E2     ADD r0, r0, 0x2c
		   0x012F0FA0:  0E0080E8     STM r0, {r1, r2, r3}
		   0x012F0FA4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x12F0FA8 Offset: 0x12F0FA8 VA: 0x12F0FA8
	public void Show() {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 7 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F0FA8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x012F0FAC:  CC509FE5     LDR r5, [pc, 0xcc]
		   0x012F0FB0:  0040A0E1     MOV r4, r0
		   0x012F0FB4:  05508FE0     ADD r5, pc, r5
		   0x012F0FB8:  0000D5E5     LDRB r0, [r5]
		   0x012F0FBC:  000050E3     CMPS r0, r0, 0x0
		   0x012F0FC0:  0D00001A     BNE $+0x3c  // if (!=) goto 0x012F0FFC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F0FC4:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x012F0FC8:  00009FE7     LDR r0, [pc, r0]
		   0x012F0FCC:  63A8F1EB     BL $-0x395e6c
		   0x012F0FD0:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x012F0FD4:  00009FE7     LDR r0, [pc, r0]
		   0x012F0FD8:  60A8F1EB     BL $-0x395e78
		   0x012F0FDC:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x012F0FE0:  00009FE7     LDR r0, [pc, r0]
		   0x012F0FE4:  5DA8F1EB     BL $-0x395e84
		   0x012F0FE8:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x012F0FEC:  00009FE7     LDR r0, [pc, r0]
		   0x012F0FF0:  5AA8F1EB     BL $-0x395e90
		   0x012F0FF4:  0100A0E3     MOV r0, 0x1
		   0x012F0FF8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F0FFC:  90009FE5     LDR r0, [pc, 0x90]
		   0x012F1000:  00009FE7     LDR r0, [pc, r0]
		   0x012F1004:  285094E5     LDR r5, [r4, 0x28]
		   0x012F1008:  000090E5     LDR r0, [r0]
		   0x012F100C:  741090E5     LDR r1, [r0, 0x74]
		   0x012F1010:  000051E3     CMPS r0, r1, 0x0
		   0x012F1014:  0000001A     BNE $+0x8  // if (!=) goto 0x012F101C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F1018:  9DA8F1EB     BL $-0x395d84
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F101C:  0500A0E1     MOV r0, r5
		   0x012F1020:  0010A0E3     MOV r1, 0x0
		   0x012F1024:  0020A0E3     MOV r2, 0x0
		   0x012F1028:  D1CEF4EB     BL $-0x2cc4b4
		   0x012F102C:  000050E3     CMPS r0, r0, 0x0
		   0x012F1030:  3088BD18     POPNE {r4, r5, fp, pc}
		   0x012F1034:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x012F1038:  00009FE7     LDR r0, [pc, r0]
		   0x012F103C:  000090E5     LDR r0, [r0]
		   0x012F1040:  DFA8F1EB     BL $-0x395c7c
		   0x012F1044:  0050A0E1     MOV r5, r0
		   0x012F1048:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x012F104C:  0410A0E1     MOV r1, r4
		   0x012F1050:  0030A0E3     MOV r3, 0x0
		   0x012F1054:  00009FE7     LDR r0, [pc, r0]
		   0x012F1058:  002090E5     LDR r2, [r0]
		   0x012F105C:  0500A0E1     MOV r0, r5
		   0x012F1060:  78D54AEB     BL $+0x12b55e8  // CALL → Action<object>..ctor
		   0x012F1064:  34009FE5     LDR r0, [pc, 0x34]
		   0x012F1068:  0510A0E1     MOV r1, r5
		   0x012F106C:  00009FE7     LDR r0, [pc, r0]
		   0x012F1070:  002090E5     LDR r2, [r0]
		   0x012F1074:  0400A0E1     MOV r0, r4
		   0x012F1078:  3048BDE8     POP {r4, r5, fp, lr}
		   0x012F107C:  71622BEA     B $+0xad89cc  // TAIL CALL → PopupInstantiateAsync<object>.GetView
		   0x012F1080:  C4BDF302     RSCSEQ fp, r3, 0x3100
		   0x012F1084:  D4F3D802     SBCSEQ pc, r8, 0x50000003
		   0x012F1088:  CCF3D802     SBCSEQ pc, r8, 0x30000003
		   0x012F108C:  5855D802     SBCSEQ r5, r8, 0x16000000
		   0x012F1090:  B8F3D802     SBCSEQ pc, r8, 0xe0000002
		   0x012F1094:  3855D802     SBCSEQ r5, r8, 0xe000000
		   0x012F1098:  64F3D802     SBCSEQ pc, r8, 0x90000001
		   0x012F109C:  4CF3D802     SBCSEQ pc, r8, 0x30000001
		   0x012F10A0:  38F3D802     SBCSEQ pc, r8, 0xe0000000
		*/
	}

	// RVA: 0x12F10A4 Offset: 0x12F10A4 VA: 0x12F10A4
	public void SetInventory(Item[] items) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 9 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F10A4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F10A8:  84609FE5     LDR r6, [pc, 0x84]
		   0x012F10AC:  0050A0E1     MOV r5, r0
		   0x012F10B0:  0140A0E1     MOV r4, r1
		   0x012F10B4:  06608FE0     ADD r6, pc, r6
		   0x012F10B8:  0000D6E5     LDRB r0, [r6]
		   0x012F10BC:  000050E3     CMPS r0, r0, 0x0
		   0x012F10C0:  0400001A     BNE $+0x18  // if (!=) goto 0x012F10D8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F10C4:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x012F10C8:  00009FE7     LDR r0, [pc, r0]
		   0x012F10CC:  23A8F1EB     BL $-0x395f6c
		   0x012F10D0:  0100A0E3     MOV r0, 0x1
		   0x012F10D4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F10D8:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x012F10DC:  00009FE7     LDR r0, [pc, r0]
		   0x012F10E0:  286095E5     LDR r6, [r5, 0x28]
		   0x012F10E4:  384085E5     STR r4, [r5, 0x38]
		   0x012F10E8:  000090E5     LDR r0, [r0]
		   0x012F10EC:  741090E5     LDR r1, [r0, 0x74]
		   0x012F10F0:  000051E3     CMPS r0, r1, 0x0
		   0x012F10F4:  0000001A     BNE $+0x8  // if (!=) goto 0x012F10FC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F10F8:  65A8F1EB     BL $-0x395e64
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F10FC:  0600A0E1     MOV r0, r6
		   0x012F1100:  0010A0E3     MOV r1, 0x0
		   0x012F1104:  0020A0E3     MOV r2, 0x0
		   0x012F1108:  99CEF4EB     BL $-0x2cc594
		   0x012F110C:  000050E3     CMPS r0, r0, 0x0
		   0x012F1110:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x012F1114:  285095E5     LDR r5, [r5, 0x28]
		   0x012F1118:  000055E3     CMPS r0, r5, 0x0
		   0x012F111C:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1124
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F1120:  AAA8F1EB     BL $-0x395d50
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F1124:  0500A0E1     MOV r0, r5
		   0x012F1128:  0410A0E1     MOV r1, r4
		   0x012F112C:  7040BDE8     POP {r4, r5, r6, lr}
		   0x012F1130:  020000EA     B $+0x10  // TAIL CALL → InventorySmallWindow.SetInventory
		   0x012F1134:  C5BCF302     RSCSEQ fp, r3, 0xc500
		   0x012F1138:  7054D802     SBCSEQ r5, r8, 0x70000000
		   0x012F113C:  5C54D802     SBCSEQ r5, r8, 0x5c000000
		*/
	}

	// RVA: 0x12F14C4 Offset: 0x12F14C4 VA: 0x12F14C4
	public void UpdateItemsState(List<Goal> goalsToUpdate) {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 9 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F14C4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F14C8:  80609FE5     LDR r6, [pc, 0x80]
		   0x012F14CC:  0050A0E1     MOV r5, r0
		   0x012F14D0:  0140A0E1     MOV r4, r1
		   0x012F14D4:  06608FE0     ADD r6, pc, r6
		   0x012F14D8:  0000D6E5     LDRB r0, [r6]
		   0x012F14DC:  000050E3     CMPS r0, r0, 0x0
		   0x012F14E0:  0400001A     BNE $+0x18  // if (!=) goto 0x012F14F8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F14E4:  68009FE5     LDR r0, [pc, 0x68]
		   0x012F14E8:  00009FE7     LDR r0, [pc, r0]
		   0x012F14EC:  1BA7F1EB     BL $-0x39638c
		   0x012F14F0:  0100A0E3     MOV r0, 0x1
		   0x012F14F4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F14F8:  58009FE5     LDR r0, [pc, 0x58]
		   0x012F14FC:  00009FE7     LDR r0, [pc, r0]
		   0x012F1500:  286095E5     LDR r6, [r5, 0x28]
		   0x012F1504:  000090E5     LDR r0, [r0]
		   0x012F1508:  741090E5     LDR r1, [r0, 0x74]
		   0x012F150C:  000051E3     CMPS r0, r1, 0x0
		   0x012F1510:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1518
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F1514:  5EA7F1EB     BL $-0x396280
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F1518:  0600A0E1     MOV r0, r6
		   0x012F151C:  0010A0E3     MOV r1, 0x0
		   0x012F1520:  0020A0E3     MOV r2, 0x0
		   0x012F1524:  92CDF4EB     BL $-0x2cc9b0
		   0x012F1528:  000050E3     CMPS r0, r0, 0x0
		   0x012F152C:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x012F1530:  285095E5     LDR r5, [r5, 0x28]
		   0x012F1534:  000055E3     CMPS r0, r5, 0x0
		   0x012F1538:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1540
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F153C:  A3A7F1EB     BL $-0x39616c
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F1540:  0500A0E1     MOV r0, r5
		   0x012F1544:  0410A0E1     MOV r1, r4
		   0x012F1548:  7040BDE8     POP {r4, r5, r6, lr}
		   0x012F154C:  020000EA     B $+0x10  // TAIL CALL → InventorySmallWindow.UpdateItemsState
		   0x012F1550:  A6B8F302     RSCSEQ fp, r3, 0xa60000
		   0x012F1554:  5050D802     SBCSEQ r5, r8, 0x50
		   0x012F1558:  3C50D802     SBCSEQ r5, r8, 0x3c
		*/
	}

	// RVA: 0x12F16B0 Offset: 0x12F16B0 VA: 0x12F16B0
	public void AddItem(Item item, int place) {
		/* Disassembly (ARM32, 41 instructions, 0xA4 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F16B0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x012F16B4:  8C709FE5     LDR r7, [pc, 0x8c]
		   0x012F16B8:  0060A0E1     MOV r6, r0
		   0x012F16BC:  0240A0E1     MOV r4, r2
		   0x012F16C0:  0150A0E1     MOV r5, r1
		   0x012F16C4:  07708FE0     ADD r7, pc, r7
		   0x012F16C8:  0000D7E5     LDRB r0, [r7]
		   0x012F16CC:  000050E3     CMPS r0, r0, 0x0
		   0x012F16D0:  0400001A     BNE $+0x18  // if (!=) goto 0x012F16E8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F16D4:  70009FE5     LDR r0, [pc, 0x70]
		   0x012F16D8:  00009FE7     LDR r0, [pc, r0]
		   0x012F16DC:  9FA6F1EB     BL $-0x39657c
		   0x012F16E0:  0100A0E3     MOV r0, 0x1
		   0x012F16E4:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F16E8:  60009FE5     LDR r0, [pc, 0x60]
		   0x012F16EC:  00009FE7     LDR r0, [pc, r0]
		   0x012F16F0:  287096E5     LDR r7, [r6, 0x28]
		   0x012F16F4:  000090E5     LDR r0, [r0]
		   0x012F16F8:  741090E5     LDR r1, [r0, 0x74]
		   0x012F16FC:  000051E3     CMPS r0, r1, 0x0
		   0x012F1700:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1708
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F1704:  E2A6F1EB     BL $-0x396470
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F1708:  0700A0E1     MOV r0, r7
		   0x012F170C:  0010A0E3     MOV r1, 0x0
		   0x012F1710:  0020A0E3     MOV r2, 0x0
		   0x012F1714:  16CDF4EB     BL $-0x2ccba0
		   0x012F1718:  000050E3     CMPS r0, r0, 0x0
		   0x012F171C:  0800000A     BEQ $+0x28  // if (==) goto 0x012F1744
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x012F1720:  286096E5     LDR r6, [r6, 0x28]
		   0x012F1724:  000056E3     CMPS r0, r6, 0x0
		   0x012F1728:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1730
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F172C:  27A7F1EB     BL $-0x39635c
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F1730:  0600A0E1     MOV r0, r6
		   0x012F1734:  0510A0E1     MOV r1, r5
		   0x012F1738:  0420A0E1     MOV r2, r4
		   0x012F173C:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x012F1740:  030000EA     B $+0x14  // TAIL CALL → InventorySmallWindow.AddItem
		   // ──── Block 8 if (==) ────────────────────
		   0x012F1744:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x012F1748:  B7B6F302     RSCSEQ fp, r3, 0xb700000
		   0x012F174C:  604ED802     SBCSEQ r4, r8, 0x600
		   0x012F1750:  4C4ED802     SBCSEQ r4, r8, 0x4c0
		*/
	}

	// RVA: 0x12F19EC Offset: 0x12F19EC VA: 0x12F19EC
	public void RemoveGoalsItems(List<ItemDataSave> dataSaves) {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 9 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F19EC:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F19F0:  80609FE5     LDR r6, [pc, 0x80]
		   0x012F19F4:  0050A0E1     MOV r5, r0
		   0x012F19F8:  0140A0E1     MOV r4, r1
		   0x012F19FC:  06608FE0     ADD r6, pc, r6
		   0x012F1A00:  0000D6E5     LDRB r0, [r6]
		   0x012F1A04:  000050E3     CMPS r0, r0, 0x0
		   0x012F1A08:  0400001A     BNE $+0x18  // if (!=) goto 0x012F1A20
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F1A0C:  68009FE5     LDR r0, [pc, 0x68]
		   0x012F1A10:  00009FE7     LDR r0, [pc, r0]
		   0x012F1A14:  D1A5F1EB     BL $-0x3968b4
		   0x012F1A18:  0100A0E3     MOV r0, 0x1
		   0x012F1A1C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F1A20:  58009FE5     LDR r0, [pc, 0x58]
		   0x012F1A24:  00009FE7     LDR r0, [pc, r0]
		   0x012F1A28:  286095E5     LDR r6, [r5, 0x28]
		   0x012F1A2C:  000090E5     LDR r0, [r0]
		   0x012F1A30:  741090E5     LDR r1, [r0, 0x74]
		   0x012F1A34:  000051E3     CMPS r0, r1, 0x0
		   0x012F1A38:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1A40
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F1A3C:  14A6F1EB     BL $-0x3967a8
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F1A40:  0600A0E1     MOV r0, r6
		   0x012F1A44:  0010A0E3     MOV r1, 0x0
		   0x012F1A48:  0020A0E3     MOV r2, 0x0
		   0x012F1A4C:  48CCF4EB     BL $-0x2cced8
		   0x012F1A50:  000050E3     CMPS r0, r0, 0x0
		   0x012F1A54:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x012F1A58:  285095E5     LDR r5, [r5, 0x28]
		   0x012F1A5C:  000055E3     CMPS r0, r5, 0x0
		   0x012F1A60:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1A68
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F1A64:  59A6F1EB     BL $-0x396694
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F1A68:  0500A0E1     MOV r0, r5
		   0x012F1A6C:  0410A0E1     MOV r1, r4
		   0x012F1A70:  7040BDE8     POP {r4, r5, r6, lr}
		   0x012F1A74:  020000EA     B $+0x10  // TAIL CALL → InventorySmallWindow.RemoveGoalsItems
		   0x012F1A78:  80B3F302     RSCSEQ fp, r3, 0x2
		   0x012F1A7C:  284BD802     SBCSEQ r4, r8, 0xa000
		   0x012F1A80:  144BD802     SBCSEQ r4, r8, 0x5000
		*/
	}

	// RVA: 0x12F1CE4 Offset: 0x12F1CE4 VA: 0x12F1CE4
	public void RemoveItem(int itemId) {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 9 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F1CE4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F1CE8:  80609FE5     LDR r6, [pc, 0x80]
		   0x012F1CEC:  0050A0E1     MOV r5, r0
		   0x012F1CF0:  0140A0E1     MOV r4, r1
		   0x012F1CF4:  06608FE0     ADD r6, pc, r6
		   0x012F1CF8:  0000D6E5     LDRB r0, [r6]
		   0x012F1CFC:  000050E3     CMPS r0, r0, 0x0
		   0x012F1D00:  0400001A     BNE $+0x18  // if (!=) goto 0x012F1D18
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F1D04:  68009FE5     LDR r0, [pc, 0x68]
		   0x012F1D08:  00009FE7     LDR r0, [pc, r0]
		   0x012F1D0C:  13A5F1EB     BL $-0x396bac
		   0x012F1D10:  0100A0E3     MOV r0, 0x1
		   0x012F1D14:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F1D18:  58009FE5     LDR r0, [pc, 0x58]
		   0x012F1D1C:  00009FE7     LDR r0, [pc, r0]
		   0x012F1D20:  286095E5     LDR r6, [r5, 0x28]
		   0x012F1D24:  000090E5     LDR r0, [r0]
		   0x012F1D28:  741090E5     LDR r1, [r0, 0x74]
		   0x012F1D2C:  000051E3     CMPS r0, r1, 0x0
		   0x012F1D30:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1D38
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F1D34:  56A5F1EB     BL $-0x396aa0
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F1D38:  0600A0E1     MOV r0, r6
		   0x012F1D3C:  0010A0E3     MOV r1, 0x0
		   0x012F1D40:  0020A0E3     MOV r2, 0x0
		   0x012F1D44:  8ACBF4EB     BL $-0x2cd1d0
		   0x012F1D48:  000050E3     CMPS r0, r0, 0x0
		   0x012F1D4C:  7080BD08     POPEQ {r4, r5, r6, pc}
		   0x012F1D50:  285095E5     LDR r5, [r5, 0x28]
		   0x012F1D54:  000055E3     CMPS r0, r5, 0x0
		   0x012F1D58:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1D60
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F1D5C:  9BA5F1EB     BL $-0x39698c
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F1D60:  0500A0E1     MOV r0, r5
		   0x012F1D64:  0410A0E1     MOV r1, r4
		   0x012F1D68:  7040BDE8     POP {r4, r5, r6, lr}
		   0x012F1D6C:  020000EA     B $+0x10  // TAIL CALL → InventorySmallWindow.RemoveItem
		   0x012F1D70:  89B0F302     RSCSEQ fp, r3, 0x89
		   0x012F1D74:  3048D802     SBCSEQ r4, r8, 0x300000
		   0x012F1D78:  1C48D802     SBCSEQ r4, r8, 0x1c0000
		*/
	}

	// RVA: 0x12F1FA0 Offset: 0x12F1FA0 VA: 0x12F1FA0
	public void MoveItem(UIInventoryItem item, int place) {
		/* Disassembly (ARM32, 41 instructions, 0xA4 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F1FA0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x012F1FA4:  8C709FE5     LDR r7, [pc, 0x8c]
		   0x012F1FA8:  0060A0E1     MOV r6, r0
		   0x012F1FAC:  0240A0E1     MOV r4, r2
		   0x012F1FB0:  0150A0E1     MOV r5, r1
		   0x012F1FB4:  07708FE0     ADD r7, pc, r7
		   0x012F1FB8:  0000D7E5     LDRB r0, [r7]
		   0x012F1FBC:  000050E3     CMPS r0, r0, 0x0
		   0x012F1FC0:  0400001A     BNE $+0x18  // if (!=) goto 0x012F1FD8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F1FC4:  70009FE5     LDR r0, [pc, 0x70]
		   0x012F1FC8:  00009FE7     LDR r0, [pc, r0]
		   0x012F1FCC:  63A4F1EB     BL $-0x396e6c
		   0x012F1FD0:  0100A0E3     MOV r0, 0x1
		   0x012F1FD4:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F1FD8:  60009FE5     LDR r0, [pc, 0x60]
		   0x012F1FDC:  00009FE7     LDR r0, [pc, r0]
		   0x012F1FE0:  287096E5     LDR r7, [r6, 0x28]
		   0x012F1FE4:  000090E5     LDR r0, [r0]
		   0x012F1FE8:  741090E5     LDR r1, [r0, 0x74]
		   0x012F1FEC:  000051E3     CMPS r0, r1, 0x0
		   0x012F1FF0:  0000001A     BNE $+0x8  // if (!=) goto 0x012F1FF8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F1FF4:  A6A4F1EB     BL $-0x396d60
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F1FF8:  0700A0E1     MOV r0, r7
		   0x012F1FFC:  0010A0E3     MOV r1, 0x0
		   0x012F2000:  0020A0E3     MOV r2, 0x0
		   0x012F2004:  DACAF4EB     BL $-0x2cd490
		   0x012F2008:  000050E3     CMPS r0, r0, 0x0
		   0x012F200C:  0800000A     BEQ $+0x28  // if (==) goto 0x012F2034
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x012F2010:  286096E5     LDR r6, [r6, 0x28]
		   0x012F2014:  000056E3     CMPS r0, r6, 0x0
		   0x012F2018:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2020
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F201C:  EBA4F1EB     BL $-0x396c4c
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F2020:  0600A0E1     MOV r0, r6
		   0x012F2024:  0510A0E1     MOV r1, r5
		   0x012F2028:  0420A0E1     MOV r2, r4
		   0x012F202C:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x012F2030:  030000EA     B $+0x14  // TAIL CALL → InventorySmallWindow.MoveItem
		   // ──── Block 8 if (==) ────────────────────
		   0x012F2034:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x012F2038:  CAADF302     RSCSEQ r10, r3, 0x3280
		   0x012F203C:  7045D802     SBCSEQ r4, r8, 0x1c000000
		   0x012F2040:  5C45D802     SBCSEQ r4, r8, 0x17000000
		*/
	}

	// RVA: 0x12F2458 Offset: 0x12F2458 VA: 0x12F2458
	public bool TryAddItem(Item releasedItem, out int place) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F2458:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x012F245C:  98709FE5     LDR r7, [pc, 0x98]
		   0x012F2460:  0060A0E1     MOV r6, r0
		   0x012F2464:  0240A0E1     MOV r4, r2
		   0x012F2468:  0150A0E1     MOV r5, r1
		   0x012F246C:  07708FE0     ADD r7, pc, r7
		   0x012F2470:  0000D7E5     LDRB r0, [r7]
		   0x012F2474:  000050E3     CMPS r0, r0, 0x0
		   0x012F2478:  0400001A     BNE $+0x18  // if (!=) goto 0x012F2490
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F247C:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x012F2480:  00009FE7     LDR r0, [pc, r0]
		   0x012F2484:  35A3F1EB     BL $-0x397324
		   0x012F2488:  0100A0E3     MOV r0, 0x1
		   0x012F248C:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F2490:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x012F2494:  00009FE7     LDR r0, [pc, r0]
		   0x012F2498:  287096E5     LDR r7, [r6, 0x28]
		   0x012F249C:  000090E5     LDR r0, [r0]
		   0x012F24A0:  741090E5     LDR r1, [r0, 0x74]
		   0x012F24A4:  000051E3     CMPS r0, r1, 0x0
		   0x012F24A8:  0000001A     BNE $+0x8  // if (!=) goto 0x012F24B0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F24AC:  78A3F1EB     BL $-0x397218
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F24B0:  0700A0E1     MOV r0, r7
		   0x012F24B4:  0010A0E3     MOV r1, 0x0
		   0x012F24B8:  0020A0E3     MOV r2, 0x0
		   0x012F24BC:  ACC9F4EB     BL $-0x2cd948
		   0x012F24C0:  000050E3     CMPS r0, r0, 0x0
		   0x012F24C4:  0800000A     BEQ $+0x28  // if (==) goto 0x012F24EC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x012F24C8:  286096E5     LDR r6, [r6, 0x28]
		   0x012F24CC:  000056E3     CMPS r0, r6, 0x0
		   0x012F24D0:  0000001A     BNE $+0x8  // if (!=) goto 0x012F24D8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F24D4:  BDA3F1EB     BL $-0x397104
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F24D8:  0600A0E1     MOV r0, r6
		   0x012F24DC:  0510A0E1     MOV r1, r5
		   0x012F24E0:  0420A0E1     MOV r2, r4
		   0x012F24E4:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x012F24E8:  060000EA     B $+0x20  // TAIL CALL → InventorySmallWindow.TryAddItem
		   // ──── Block 8 if (==) ────────────────────
		   0x012F24EC:  0000E0E3     MVN r0, r0, 0x0
		   0x012F24F0:  000084E5     STR r0, [r4]
		   0x012F24F4:  0000A0E3     MOV r0, 0x0
		   0x012F24F8:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x012F24FC:  13A9F302     RSCSEQ r10, r3, 0x4c000
		   0x012F2500:  B840D802     SBCSEQ r4, r8, 0xb8
		   0x012F2504:  A440D802     SBCSEQ r4, r8, 0xa4
		*/
	}

	// RVA: 0x12F2C04 Offset: 0x12F2C04 VA: 0x12F2C04
	public void SetVisible(bool visible) {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F2C04:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F2C08:  84609FE5     LDR r6, [pc, 0x84]
		   0x012F2C0C:  0050A0E1     MOV r5, r0
		   0x012F2C10:  0140A0E1     MOV r4, r1
		   0x012F2C14:  06608FE0     ADD r6, pc, r6
		   0x012F2C18:  0000D6E5     LDRB r0, [r6]
		   0x012F2C1C:  000050E3     CMPS r0, r0, 0x0
		   0x012F2C20:  0400001A     BNE $+0x18  // if (!=) goto 0x012F2C38
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F2C24:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x012F2C28:  00009FE7     LDR r0, [pc, r0]
		   0x012F2C2C:  4BA1F1EB     BL $-0x397acc
		   0x012F2C30:  0100A0E3     MOV r0, 0x1
		   0x012F2C34:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F2C38:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x012F2C3C:  00009FE7     LDR r0, [pc, r0]
		   0x012F2C40:  286095E5     LDR r6, [r5, 0x28]
		   0x012F2C44:  000090E5     LDR r0, [r0]
		   0x012F2C48:  741090E5     LDR r1, [r0, 0x74]
		   0x012F2C4C:  000051E3     CMPS r0, r1, 0x0
		   0x012F2C50:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2C58
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F2C54:  8EA1F1EB     BL $-0x3979c0
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F2C58:  0600A0E1     MOV r0, r6
		   0x012F2C5C:  0010A0E3     MOV r1, 0x0
		   0x012F2C60:  0020A0E3     MOV r2, 0x0
		   0x012F2C64:  C2C7F4EB     BL $-0x2ce0f0
		   0x012F2C68:  000050E3     CMPS r0, r0, 0x0
		   0x012F2C6C:  0600000A     BEQ $+0x20  // if (==) goto 0x012F2C8C
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x012F2C70:  286095E5     LDR r6, [r5, 0x28]
		   0x012F2C74:  000056E3     CMPS r0, r6, 0x0
		   0x012F2C78:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2C80
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F2C7C:  D3A1F1EB     BL $-0x3978ac
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F2C80:  0600A0E1     MOV r0, r6
		   0x012F2C84:  0410A0E1     MOV r1, r4
		   0x012F2C88:  040000EB     BL $+0x18  // CALL → InventorySmallWindow.SetVisible
		   // ──── Block 8 if (==) ────────────────────
		   0x012F2C8C:  3D40C5E5     STRB r4, [r5, 0x3d]
		   0x012F2C90:  7080BDE8     POP {r4, r5, r6, pc}
		   0x012F2C94:  6CA1F302     RSCSEQ r10, r3, 0x1b
		   0x012F2C98:  1039D802     SBCSEQ r3, r8, 0x40000
		   0x012F2C9C:  FC38D802     SBCSEQ r3, r8, 0xfc0000
		*/
	}

	// RVA: 0x12F2DB8 Offset: 0x12F2DB8 VA: 0x12F2DB8
	public Transform GetFtuePointer() {
		/* Disassembly (ARM32, 37 instructions, 0x94 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F2DB8:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x012F2DBC:  7C509FE5     LDR r5, [pc, 0x7c]
		   0x012F2DC0:  0040A0E1     MOV r4, r0
		   0x012F2DC4:  05508FE0     ADD r5, pc, r5
		   0x012F2DC8:  0000D5E5     LDRB r0, [r5]
		   0x012F2DCC:  000050E3     CMPS r0, r0, 0x0
		   0x012F2DD0:  0400001A     BNE $+0x18  // if (!=) goto 0x012F2DE8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F2DD4:  68009FE5     LDR r0, [pc, 0x68]
		   0x012F2DD8:  00009FE7     LDR r0, [pc, r0]
		   0x012F2DDC:  DFA0F1EB     BL $-0x397c7c
		   0x012F2DE0:  0100A0E3     MOV r0, 0x1
		   0x012F2DE4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F2DE8:  58009FE5     LDR r0, [pc, 0x58]
		   0x012F2DEC:  00009FE7     LDR r0, [pc, r0]
		   0x012F2DF0:  286094E5     LDR r6, [r4, 0x28]
		   0x012F2DF4:  000090E5     LDR r0, [r0]
		   0x012F2DF8:  741090E5     LDR r1, [r0, 0x74]
		   0x012F2DFC:  000051E3     CMPS r0, r1, 0x0
		   0x012F2E00:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2E08
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F2E04:  22A1F1EB     BL $-0x397b70
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F2E08:  0600A0E1     MOV r0, r6
		   0x012F2E0C:  0010A0E3     MOV r1, 0x0
		   0x012F2E10:  0020A0E3     MOV r2, 0x0
		   0x012F2E14:  0050A0E3     MOV r5, 0x0
		   0x012F2E18:  55C7F4EB     BL $-0x2ce2a4
		   0x012F2E1C:  000050E3     CMPS r0, r0, 0x0
		   0x012F2E20:  0400000A     BEQ $+0x18  // if (==) goto 0x012F2E38
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x012F2E24:  284094E5     LDR r4, [r4, 0x28]
		   0x012F2E28:  000054E3     CMPS r0, r4, 0x0
		   0x012F2E2C:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2E34
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x012F2E30:  66A1F1EB     BL $-0x397a60
		   // ──── Block 7 if (!=) ────────────────────
		   0x012F2E34:  285094E5     LDR r5, [r4, 0x28]
		   // ──── Block 8 if (==) ────────────────────
		   0x012F2E38:  0500A0E1     MOV r0, r5
		   0x012F2E3C:  7080BDE8     POP {r4, r5, r6, pc}
		   0x012F2E40:  BD9FF302     RSCSEQ sb, r3, 0x2f4
		   0x012F2E44:  6037D802     SBCSEQ r3, r8, 0x1800000
		   0x012F2E48:  4C37D802     SBCSEQ r3, r8, 0x1300000
		*/
	}

	// RVA: 0x12F2E4C Offset: 0x12F2E4C VA: 0x12F2E4C
	public void .ctor() {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F2E4C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x012F2E50:  44509FE5     LDR r5, [pc, 0x44]
		   0x012F2E54:  0040A0E1     MOV r4, r0
		   0x012F2E58:  05508FE0     ADD r5, pc, r5
		   0x012F2E5C:  0000D5E5     LDRB r0, [r5]
		   0x012F2E60:  000050E3     CMPS r0, r0, 0x0
		   0x012F2E64:  0400001A     BNE $+0x18  // if (!=) goto 0x012F2E7C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F2E68:  30009FE5     LDR r0, [pc, 0x30]
		   0x012F2E6C:  00009FE7     LDR r0, [pc, r0]
		   0x012F2E70:  BAA0F1EB     BL $-0x397d10
		   0x012F2E74:  0100A0E3     MOV r0, 0x1
		   0x012F2E78:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F2E7C:  20009FE5     LDR r0, [pc, 0x20]
		   0x012F2E80:  00009FE7     LDR r0, [pc, r0]
		   0x012F2E84:  001090E5     LDR r1, [r0]
		   0x012F2E88:  0100A0E3     MOV r0, 0x1
		   0x012F2E8C:  3C00C4E5     STRB r0, [r4, 0x3c]
		   0x012F2E90:  0400A0E1     MOV r0, r4
		   0x012F2E94:  3048BDE8     POP {r4, r5, fp, lr}
		   0x012F2E98:  675B2BEA     B $+0xad6da4  // TAIL CALL → PopupInstantiateAsync<object>..ctor
		   0x012F2E9C:  2A9FF302     RSCSEQ sb, r3, 0xa8
		   0x012F2EA0:  C4D5D802     SBCSEQ sp, r8, 0x31000000
		   0x012F2EA4:  B0D5D802     SBCSEQ sp, r8, 0x2c000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x12F2EA8 Offset: 0x12F2EA8 VA: 0x12F2EA8
	private void <Show>b__15_0(InventorySmallWindow view) {
		/* Disassembly (ARM32, 86 instructions, 0x158 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F2EA8:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x012F2EAC:  08D04DE2     SUB sp, sp, 0x8
		   0x012F2EB0:  34619FE5     LDR r6, [pc, 0x134]
		   0x012F2EB4:  0040A0E1     MOV r4, r0
		   0x012F2EB8:  0150A0E1     MOV r5, r1
		   0x012F2EBC:  06608FE0     ADD r6, pc, r6
		   0x012F2EC0:  0000D6E5     LDRB r0, [r6]
		   0x012F2EC4:  000050E3     CMPS r0, r0, 0x0
		   0x012F2EC8:  0700001A     BNE $+0x24  // if (!=) goto 0x012F2EEC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x012F2ECC:  1C019FE5     LDR r0, [pc, 0x11c]
		   0x012F2ED0:  00009FE7     LDR r0, [pc, r0]
		   0x012F2ED4:  A1A0F1EB     BL $-0x397d74
		   0x012F2ED8:  14019FE5     LDR r0, [pc, 0x114]
		   0x012F2EDC:  00009FE7     LDR r0, [pc, r0]
		   0x012F2EE0:  9EA0F1EB     BL $-0x397d80
		   0x012F2EE4:  0100A0E3     MOV r0, 0x1
		   0x012F2EE8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x012F2EEC:  206094E5     LDR r6, [r4, 0x20]
		   0x012F2EF0:  000055E3     CMPS r0, r5, 0x0
		   0x012F2EF4:  2C9094E5     LDR sb, [r4, 0x2c]
		   0x012F2EF8:  307094E5     LDR r7, [r4, 0x30]
		   0x012F2EFC:  348094E5     LDR r8, [r4, 0x34]
		   0x012F2F00:  285084E5     STR r5, [r4, 0x28]
		   0x012F2F04:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2F0C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x012F2F08:  30A1F1EB     BL $-0x397b38
		   // ──── Block 4 if (!=) ────────────────────
		   0x012F2F0C:  0500A0E1     MOV r0, r5
		   0x012F2F10:  0910A0E1     MOV r1, sb
		   0x012F2F14:  0720A0E1     MOV r2, r7
		   0x012F2F18:  0830A0E1     MOV r3, r8
		   0x012F2F1C:  00608DE5     STR r6, [sp]
		   0x012F2F20:  360000EB     BL $+0xe0  // CALL → InventorySmallWindow.Init
		   0x012F2F24:  285094E5     LDR r5, [r4, 0x28]
		   0x012F2F28:  386094E5     LDR r6, [r4, 0x38]
		   0x012F2F2C:  000055E3     CMPS r0, r5, 0x0
		   0x012F2F30:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2F38
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x012F2F34:  25A1F1EB     BL $-0x397b64
		   // ──── Block 6 if (!=) ────────────────────
		   0x012F2F38:  0500A0E1     MOV r0, r5
		   0x012F2F3C:  0610A0E1     MOV r1, r6
		   0x012F2F40:  7EF8FFEB     BL $-0x1e00
		   0x012F2F44:  286094E5     LDR r6, [r4, 0x28]
		   0x012F2F48:  3C50D4E5     LDRB r5, [r4, 0x3c]
		   0x012F2F4C:  000056E3     CMPS r0, r6, 0x0
		   0x012F2F50:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2F58
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x012F2F54:  1DA1F1EB     BL $-0x397b84
		   // ──── Block 8 if (!=) ────────────────────
		   0x012F2F58:  000055E3     CMPS r0, r5, 0x0
		   0x012F2F5C:  0600A0E1     MOV r0, r6
		   0x012F2F60:  01500013     MOVNE r5, 0x1
		   0x012F2F64:  0020A0E3     MOV r2, 0x0
		   0x012F2F68:  0510A0E1     MOV r1, r5
		   0x012F2F6C:  EB3300EB     BL $+0xcfb4  // CALL → PanelWithCanvasGroup.set_interactable
		   0x012F2F70:  286094E5     LDR r6, [r4, 0x28]
		   0x012F2F74:  3D50D4E5     LDRB r5, [r4, 0x3d]
		   0x012F2F78:  000056E3     CMPS r0, r6, 0x0
		   0x012F2F7C:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2F84
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x012F2F80:  12A1F1EB     BL $-0x397bb0
		   // ──── Block 10 if (!=) ────────────────────
		   0x012F2F84:  000055E3     CMPS r0, r5, 0x0
		   0x012F2F88:  0600A0E1     MOV r0, r6
		   0x012F2F8C:  01500013     MOVNE r5, 0x1
		   0x012F2F90:  0510A0E1     MOV r1, r5
		   0x012F2F94:  41FFFFEB     BL $-0x2f4
		   0x012F2F98:  285094E5     LDR r5, [r4, 0x28]
		   0x012F2F9C:  54009FE5     LDR r0, [pc, 0x54]
		   0x012F2FA0:  00009FE7     LDR r0, [pc, r0]
		   0x012F2FA4:  000090E5     LDR r0, [r0]
		   0x012F2FA8:  05A1F1EB     BL $-0x397be4
		   0x012F2FAC:  0060A0E1     MOV r6, r0
		   0x012F2FB0:  44009FE5     LDR r0, [pc, 0x44]
		   0x012F2FB4:  0410A0E1     MOV r1, r4
		   0x012F2FB8:  0030A0E3     MOV r3, 0x0
		   0x012F2FBC:  00009FE7     LDR r0, [pc, r0]
		   0x012F2FC0:  002090E5     LDR r2, [r0]
		   0x012F2FC4:  0600A0E1     MOV r0, r6
		   0x012F2FC8:  9ECD4AEB     BL $+0x12b3680  // CALL → Action<object>..ctor
		   0x012F2FCC:  000055E3     CMPS r0, r5, 0x0
		   0x012F2FD0:  0000001A     BNE $+0x8  // if (!=) goto 0x012F2FD8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x012F2FD4:  FDA0F1EB     BL $-0x397c04
		   // ──── Block 12 if (!=) ────────────────────
		   0x012F2FD8:  0500A0E1     MOV r0, r5
		   0x012F2FDC:  0610A0E1     MOV r1, r6
		   0x012F2FE0:  08D08DE2     ADD sp, sp, 0x8
		   0x012F2FE4:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x012F2FE8:  7B0000EA     B $+0x1f4  // TAIL CALL → InventorySmallWindow.add_itemDropped
		   0x012F2FEC:  C79EF302     RSCSEQ sb, r3, 0xc70
		   0x012F2FF0:  BC5ED802     SBCSEQ r5, r8, 0xbc0
		   0x012F2FF4:  58D5D802     SBCSEQ sp, r8, 0x16000000
		   0x012F2FF8:  EC5DD802     SBCSEQ r5, r8, 0x3b00
		   0x012F2FFC:  78D4D802     SBCSEQ sp, r8, 0x78000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x12F328C Offset: 0x12F328C VA: 0x12F328C
	private void <Show>b__15_1(Cell cell) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x012F328C:  240090E5     LDR r0, [r0, 0x24]
		   0x012F3290:  000050E3     CMPS r0, r0, 0x0
		   0x012F3294:  1EFF2F01     BXEQ lr
		   0x012F3298:  0C3090E5     LDR r3, [r0, 0xc]
		   0x012F329C:  142090E5     LDR r2, [r0, 0x14]
		   0x012F32A0:  200090E5     LDR r0, [r0, 0x20]
		   0x012F32A4:  13FF2FE1     BX r3
		*/
	}
}
