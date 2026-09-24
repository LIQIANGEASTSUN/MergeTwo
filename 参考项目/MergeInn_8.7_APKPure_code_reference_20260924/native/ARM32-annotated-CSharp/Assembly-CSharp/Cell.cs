// Dll : Assembly-CSharp.dll
// Namespace: 
public class Cell : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler // TypeDefIndex: 1139
{

	// Fields
	[SerializeField]
	private Image cellBG; // 0x10
	[CompilerGenerated]
	private Vector2Int <coordinates>k__BackingField; // 0x14
	[CompilerGenerated]
	private Transform <topField>k__BackingField; // 0x1C
	[CompilerGenerated]
	private Transform <bottomField>k__BackingField; // 0x20
	[CompilerGenerated]
	private Item <item>k__BackingField; // 0x24
	[CompilerGenerated]
	private bool <isEmpty>k__BackingField; // 0x28
	[CompilerGenerated]
	private float <sizeFactor>k__BackingField; // 0x2C
	[CompilerGenerated]
	private Action<Cell> onPointerDown; // 0x30
	[CompilerGenerated]
	private Action<Cell> onPointerUp; // 0x34
	private bool isInteractable; // 0x38
	private bool isSelectable; // 0x39

	// Properties
	public Vector2Int coordinates { get; set; }
	public Transform topField { get; set; }
	public Transform bottomField { get; set; }
	public Item item { get; set; }
	public bool isEmpty { get; set; }
	public float sizeFactor { get; set; }
	public bool selectable { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10CCF04 Offset: 0x10CCF04 VA: 0x10CCF04
	public Vector2Int get_coordinates() {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF04:  D421C1E1     LDRD r2, r3, [r1, 0x14]
		   0x010CCF08:  F020C0E1     STRD r2, r3, [r0]
		   0x010CCF0C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF10 Offset: 0x10CCF10 VA: 0x10CCF10
	private void set_coordinates(Vector2Int value) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF10:  0230A0E1     MOV r3, r2
		   0x010CCF14:  0120A0E1     MOV r2, r1
		   0x010CCF18:  F421C0E1     STRD r2, r3, [r0, 0x14]
		   0x010CCF1C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF20 Offset: 0x10CCF20 VA: 0x10CCF20
	public Transform get_topField() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF20:  1C0090E5     LDR r0, [r0, 0x1c]
		   0x010CCF24:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF28 Offset: 0x10CCF28 VA: 0x10CCF28
	private void set_topField(Transform value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF28:  1C1080E5     STR r1, [r0, 0x1c]
		   0x010CCF2C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF30 Offset: 0x10CCF30 VA: 0x10CCF30
	public Transform get_bottomField() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF30:  200090E5     LDR r0, [r0, 0x20]
		   0x010CCF34:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF38 Offset: 0x10CCF38 VA: 0x10CCF38
	private void set_bottomField(Transform value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF38:  201080E5     STR r1, [r0, 0x20]
		   0x010CCF3C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF40 Offset: 0x10CCF40 VA: 0x10CCF40
	public Item get_item() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF40:  240090E5     LDR r0, [r0, 0x24]
		   0x010CCF44:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF48 Offset: 0x10CCF48 VA: 0x10CCF48
	private void set_item(Item value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF48:  241080E5     STR r1, [r0, 0x24]
		   0x010CCF4C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF50 Offset: 0x10CCF50 VA: 0x10CCF50
	public bool get_isEmpty() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF50:  2800D0E5     LDRB r0, [r0, 0x28]
		   0x010CCF54:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF58 Offset: 0x10CCF58 VA: 0x10CCF58
	private void set_isEmpty(bool value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF58:  2810C0E5     STRB r1, [r0, 0x28]
		   0x010CCF5C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF60 Offset: 0x10CCF60 VA: 0x10CCF60
	public float get_sizeFactor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF60:  2C0090E5     LDR r0, [r0, 0x2c]
		   0x010CCF64:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF68 Offset: 0x10CCF68 VA: 0x10CCF68
	private void set_sizeFactor(float value) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CCF68:  2C1080E5     STR r1, [r0, 0x2c]
		   0x010CCF6C:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CCF70 Offset: 0x10CCF70 VA: 0x10CCF70
	public void add_onPointerDown(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CCF70:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010CCF74:  98409FE5     LDR r4, [pc, 0x98]
		   0x010CCF78:  0090A0E1     MOV sb, r0
		   0x010CCF7C:  0180A0E1     MOV r8, r1
		   0x010CCF80:  04408FE0     ADD r4, pc, r4
		   0x010CCF84:  0000D4E5     LDRB r0, [r4]
		   0x010CCF88:  000050E3     CMPS r0, r0, 0x0
		   0x010CCF8C:  0400001A     BNE $+0x18  // if (!=) goto 0x010CCFA4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CCF90:  80009FE5     LDR r0, [pc, 0x80]
		   0x010CCF94:  00009FE7     LDR r0, [pc, r0]
		   0x010CCF98:  7038FAEB     BL $-0x171e38
		   0x010CCF9C:  0100A0E3     MOV r0, 0x1
		   0x010CCFA0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CCFA4:  3000B9E5     LDR r0, [sb, 0x30]!
		   0x010CCFA8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010CCFAC:  0AA09FE7     LDR r10, [pc, r10]
		   0x010CCFB0:  0810A0E1     MOV r1, r8
		   0x010CCFB4:  0020A0E3     MOV r2, 0x0
		   0x010CCFB8:  0060A0E1     MOV r6, r0
		   0x010CCFBC:  0070A0E3     MOV r7, 0x0
		   0x010CCFC0:  5C317FEB     BL $+0x1fcc578  // CALL → Delegate.Combine
		   0x010CCFC4:  000050E3     CMPS r0, r0, 0x0
		   0x010CCFC8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010CCFF8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010CCFCC:  00509AE5     LDR r5, [r10]
		   0x010CCFD0:  0040A0E1     MOV r4, r0
		   0x010CCFD4:  0510A0E1     MOV r1, r5
		   0x010CCFD8:  AE38FAEB     BL $-0x171d40
		   0x010CCFDC:  0070A0E1     MOV r7, r0
		   0x010CCFE0:  000050E3     CMPS r0, r0, 0x0
		   0x010CCFE4:  0300001A     BNE $+0x14  // if (!=) goto 0x010CCFF8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010CCFE8:  0400A0E1     MOV r0, r4
		   0x010CCFEC:  0510A0E1     MOV r1, r5
		   0x010CCFF0:  E439FAEB     BL $-0x171868
		   0x010CCFF4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010CCFF8:  0900A0E1     MOV r0, sb
		   0x010CCFFC:  0710A0E1     MOV r1, r7
		   0x010CD000:  0620A0E1     MOV r2, r6
		   0x010CD004:  1B25FBEB     BL $-0x136b8c
		   0x010CD008:  060050E1     CMPS r0, r0, r6
		   0x010CD00C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010CD010:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010CD014:  8AEC1503     TSTSEQ lr, r5, 0x8a00
		   0x010CD018:  F8BDFA02     RSCSEQ fp, r10, 0x3e00
		   0x010CD01C:  E0BDFA02     RSCSEQ fp, r10, 0x3800
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CD020 Offset: 0x10CD020 VA: 0x10CD020
	public void remove_onPointerDown(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD020:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010CD024:  98409FE5     LDR r4, [pc, 0x98]
		   0x010CD028:  0090A0E1     MOV sb, r0
		   0x010CD02C:  0180A0E1     MOV r8, r1
		   0x010CD030:  04408FE0     ADD r4, pc, r4
		   0x010CD034:  0000D4E5     LDRB r0, [r4]
		   0x010CD038:  000050E3     CMPS r0, r0, 0x0
		   0x010CD03C:  0400001A     BNE $+0x18  // if (!=) goto 0x010CD054
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD040:  80009FE5     LDR r0, [pc, 0x80]
		   0x010CD044:  00009FE7     LDR r0, [pc, r0]
		   0x010CD048:  4438FAEB     BL $-0x171ee8
		   0x010CD04C:  0100A0E3     MOV r0, 0x1
		   0x010CD050:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD054:  3000B9E5     LDR r0, [sb, 0x30]!
		   0x010CD058:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010CD05C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010CD060:  0810A0E1     MOV r1, r8
		   0x010CD064:  0020A0E3     MOV r2, 0x0
		   0x010CD068:  0060A0E1     MOV r6, r0
		   0x010CD06C:  0070A0E3     MOV r7, 0x0
		   0x010CD070:  AE317FEB     BL $+0x1fcc6c0  // CALL → Delegate.Remove
		   0x010CD074:  000050E3     CMPS r0, r0, 0x0
		   0x010CD078:  0A00000A     BEQ $+0x30  // if (==) goto 0x010CD0A8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010CD07C:  00509AE5     LDR r5, [r10]
		   0x010CD080:  0040A0E1     MOV r4, r0
		   0x010CD084:  0510A0E1     MOV r1, r5
		   0x010CD088:  8238FAEB     BL $-0x171df0
		   0x010CD08C:  0070A0E1     MOV r7, r0
		   0x010CD090:  000050E3     CMPS r0, r0, 0x0
		   0x010CD094:  0300001A     BNE $+0x14  // if (!=) goto 0x010CD0A8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010CD098:  0400A0E1     MOV r0, r4
		   0x010CD09C:  0510A0E1     MOV r1, r5
		   0x010CD0A0:  B839FAEB     BL $-0x171918
		   0x010CD0A4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010CD0A8:  0900A0E1     MOV r0, sb
		   0x010CD0AC:  0710A0E1     MOV r1, r7
		   0x010CD0B0:  0620A0E1     MOV r2, r6
		   0x010CD0B4:  EF24FBEB     BL $-0x136c3c
		   0x010CD0B8:  060050E1     CMPS r0, r0, r6
		   0x010CD0BC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010CD0C0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010CD0C4:  DBEB1503     TSTSEQ lr, r5, 0x36c00
		   0x010CD0C8:  48BDFA02     RSCSEQ fp, r10, 0x1200
		   0x010CD0CC:  30BDFA02     RSCSEQ fp, r10, 0xc00
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CD0D0 Offset: 0x10CD0D0 VA: 0x10CD0D0
	public void add_onPointerUp(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD0D0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010CD0D4:  98409FE5     LDR r4, [pc, 0x98]
		   0x010CD0D8:  0090A0E1     MOV sb, r0
		   0x010CD0DC:  0180A0E1     MOV r8, r1
		   0x010CD0E0:  04408FE0     ADD r4, pc, r4
		   0x010CD0E4:  0000D4E5     LDRB r0, [r4]
		   0x010CD0E8:  000050E3     CMPS r0, r0, 0x0
		   0x010CD0EC:  0400001A     BNE $+0x18  // if (!=) goto 0x010CD104
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD0F0:  80009FE5     LDR r0, [pc, 0x80]
		   0x010CD0F4:  00009FE7     LDR r0, [pc, r0]
		   0x010CD0F8:  1838FAEB     BL $-0x171f98
		   0x010CD0FC:  0100A0E3     MOV r0, 0x1
		   0x010CD100:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD104:  3400B9E5     LDR r0, [sb, 0x34]!
		   0x010CD108:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010CD10C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010CD110:  0810A0E1     MOV r1, r8
		   0x010CD114:  0020A0E3     MOV r2, 0x0
		   0x010CD118:  0060A0E1     MOV r6, r0
		   0x010CD11C:  0070A0E3     MOV r7, 0x0
		   0x010CD120:  04317FEB     BL $+0x1fcc418  // CALL → Delegate.Combine
		   0x010CD124:  000050E3     CMPS r0, r0, 0x0
		   0x010CD128:  0A00000A     BEQ $+0x30  // if (==) goto 0x010CD158
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010CD12C:  00509AE5     LDR r5, [r10]
		   0x010CD130:  0040A0E1     MOV r4, r0
		   0x010CD134:  0510A0E1     MOV r1, r5
		   0x010CD138:  5638FAEB     BL $-0x171ea0
		   0x010CD13C:  0070A0E1     MOV r7, r0
		   0x010CD140:  000050E3     CMPS r0, r0, 0x0
		   0x010CD144:  0300001A     BNE $+0x14  // if (!=) goto 0x010CD158
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010CD148:  0400A0E1     MOV r0, r4
		   0x010CD14C:  0510A0E1     MOV r1, r5
		   0x010CD150:  8C39FAEB     BL $-0x1719c8
		   0x010CD154:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010CD158:  0900A0E1     MOV r0, sb
		   0x010CD15C:  0710A0E1     MOV r1, r7
		   0x010CD160:  0620A0E1     MOV r2, r6
		   0x010CD164:  C324FBEB     BL $-0x136cec
		   0x010CD168:  060050E1     CMPS r0, r0, r6
		   0x010CD16C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010CD170:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010CD174:  2CEB1503     TSTSEQ lr, r5, 0xb000
		   0x010CD178:  98BCFA02     RSCSEQ fp, r10, 0x9800
		   0x010CD17C:  80BCFA02     RSCSEQ fp, r10, 0x8000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10CD180 Offset: 0x10CD180 VA: 0x10CD180
	public void remove_onPointerUp(Action<Cell> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD180:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010CD184:  98409FE5     LDR r4, [pc, 0x98]
		   0x010CD188:  0090A0E1     MOV sb, r0
		   0x010CD18C:  0180A0E1     MOV r8, r1
		   0x010CD190:  04408FE0     ADD r4, pc, r4
		   0x010CD194:  0000D4E5     LDRB r0, [r4]
		   0x010CD198:  000050E3     CMPS r0, r0, 0x0
		   0x010CD19C:  0400001A     BNE $+0x18  // if (!=) goto 0x010CD1B4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD1A0:  80009FE5     LDR r0, [pc, 0x80]
		   0x010CD1A4:  00009FE7     LDR r0, [pc, r0]
		   0x010CD1A8:  EC37FAEB     BL $-0x172048
		   0x010CD1AC:  0100A0E3     MOV r0, 0x1
		   0x010CD1B0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD1B4:  3400B9E5     LDR r0, [sb, 0x34]!
		   0x010CD1B8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010CD1BC:  0AA09FE7     LDR r10, [pc, r10]
		   0x010CD1C0:  0810A0E1     MOV r1, r8
		   0x010CD1C4:  0020A0E3     MOV r2, 0x0
		   0x010CD1C8:  0060A0E1     MOV r6, r0
		   0x010CD1CC:  0070A0E3     MOV r7, 0x0
		   0x010CD1D0:  56317FEB     BL $+0x1fcc560  // CALL → Delegate.Remove
		   0x010CD1D4:  000050E3     CMPS r0, r0, 0x0
		   0x010CD1D8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010CD208
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010CD1DC:  00509AE5     LDR r5, [r10]
		   0x010CD1E0:  0040A0E1     MOV r4, r0
		   0x010CD1E4:  0510A0E1     MOV r1, r5
		   0x010CD1E8:  2A38FAEB     BL $-0x171f50
		   0x010CD1EC:  0070A0E1     MOV r7, r0
		   0x010CD1F0:  000050E3     CMPS r0, r0, 0x0
		   0x010CD1F4:  0300001A     BNE $+0x14  // if (!=) goto 0x010CD208
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010CD1F8:  0400A0E1     MOV r0, r4
		   0x010CD1FC:  0510A0E1     MOV r1, r5
		   0x010CD200:  6039FAEB     BL $-0x171a78
		   0x010CD204:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010CD208:  0900A0E1     MOV r0, sb
		   0x010CD20C:  0710A0E1     MOV r1, r7
		   0x010CD210:  0620A0E1     MOV r2, r6
		   0x010CD214:  9724FBEB     BL $-0x136d9c
		   0x010CD218:  060050E1     CMPS r0, r0, r6
		   0x010CD21C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010CD220:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010CD224:  7DEA1503     TSTSEQ lr, r5, 0x7d000
		   0x010CD228:  E8BBFA02     RSCSEQ fp, r10, 0x3a000
		   0x010CD22C:  D0BBFA02     RSCSEQ fp, r10, 0x34000
		*/
	}

	// RVA: 0x10CD230 Offset: 0x10CD230 VA: 0x10CD230
	public bool get_selectable() {
		/* Disassembly (ARM32, 21 instructions, 0x54 bytes):
		   // CFG: 6 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD230:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010CD234:  0040A0E1     MOV r4, r0
		   0x010CD238:  2800D0E5     LDRB r0, [r0, 0x28]
		   0x010CD23C:  0050A0E3     MOV r5, 0x0
		   0x010CD240:  000050E3     CMPS r0, r0, 0x0
		   0x010CD244:  0C00001A     BNE $+0x38  // if (!=) goto 0x010CD27C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD248:  246094E5     LDR r6, [r4, 0x24]
		   0x010CD24C:  000056E3     CMPS r0, r6, 0x0
		   0x010CD250:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD258
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x010CD254:  5D38FAEB     BL $-0x171e84
		   // ──── Block 3 if (!=) ────────────────────
		   0x010CD258:  0600A0E1     MOV r0, r6
		   0x010CD25C:  0010A0E3     MOV r1, 0x0
		   0x010CD260:  0050A0E3     MOV r5, 0x0
		   0x010CD264:  D2F100EB     BL $+0x3c750  // CALL → Item.get_selectable
		   0x010CD268:  000050E3     CMPS r0, r0, 0x0
		   0x010CD26C:  0200000A     BEQ $+0x10  // if (==) goto 0x010CD27C
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010CD270:  3950D4E5     LDRB r5, [r4, 0x39]
		   0x010CD274:  000055E3     CMPS r0, r5, 0x0
		   0x010CD278:  01500013     MOVNE r5, 0x1
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010CD27C:  0500A0E1     MOV r0, r5
		   0x010CD280:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x10CD284 Offset: 0x10CD284 VA: 0x10CD284
	public void SetupFields(Transform topField, Transform bottomField, float cellFactor) {
		/* Disassembly (ARM32, 6 instructions, 0x18 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD284:  0230A0E1     MOV r3, r2
		   0x010CD288:  0120A0E1     MOV r2, r1
		   0x010CD28C:  0110A0E3     MOV r1, 0x1
		   0x010CD290:  FC21C0E1     STRD r2, r3, [r0, 0x1c]
		   0x010CD294:  2810C0E5     STRB r1, [r0, 0x28]
		   0x010CD298:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10CCA20 Offset: 0x10CCA20 VA: 0x10CCA20
	public void UpdateCellSize(float cellFactor) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CCA20:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CCA24:  105090E5     LDR r5, [r0, 0x10]
		   0x010CCA28:  0040A0E1     MOV r4, r0
		   0x010CCA2C:  2C1080E5     STR r1, [r0, 0x2c]
		   0x010CCA30:  000055E3     CMPS r0, r5, 0x0
		   0x010CCA34:  0000001A     BNE $+0x8  // if (!=) goto 0x010CCA3C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CCA38:  643AFAEB     BL $-0x171668
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CCA3C:  0500A0E1     MOV r0, r5
		   0x010CCA40:  0010A0E3     MOV r1, 0x0
		   0x010CCA44:  FAAD3CEB     BL $+0xf2b7f0  // CALL → sub_1FF8234
		   0x010CCA48:  2C1094E5     LDR r1, [r4, 0x2c]
		   0x010CCA4C:  0020A0E3     MOV r2, 0x0
		   0x010CCA50:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010CCA54:  D1A410EA     B $+0x42934c  // TAIL CALL → ExtensionMethods.MultiplySize
		*/
	}

	// RVA: 0x10CCB84 Offset: 0x10CCB84 VA: 0x10CCB84
	public void SetBGSprite(Sprite newSprite) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CCB84:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CCB88:  105090E5     LDR r5, [r0, 0x10]
		   0x010CCB8C:  0140A0E1     MOV r4, r1
		   0x010CCB90:  000055E3     CMPS r0, r5, 0x0
		   0x010CCB94:  0000001A     BNE $+0x8  // if (!=) goto 0x010CCB9C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CCB98:  0C3AFAEB     BL $-0x1717c8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CCB9C:  0500A0E1     MOV r0, r5
		   0x010CCBA0:  0410A0E1     MOV r1, r4
		   0x010CCBA4:  0020A0E3     MOV r2, 0x0
		   0x010CCBA8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010CCBAC:  E8AC3CEA     B $+0xf2b3a8
		*/
	}

	// RVA: 0x10CCBB0 Offset: 0x10CCBB0 VA: 0x10CCBB0
	public void SetEnabled(bool isEnabled) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CCBB0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CCBB4:  105090E5     LDR r5, [r0, 0x10]
		   0x010CCBB8:  0140A0E1     MOV r4, r1
		   0x010CCBBC:  000055E3     CMPS r0, r5, 0x0
		   0x010CCBC0:  0000001A     BNE $+0x8  // if (!=) goto 0x010CCBC8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CCBC4:  013AFAEB     BL $-0x1717f4
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CCBC8:  0500A0E1     MOV r0, r5
		   0x010CCBCC:  0410A0E1     MOV r1, r4
		   0x010CCBD0:  0020A0E3     MOV r2, 0x0
		   0x010CCBD4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010CCBD8:  F7AC3CEA     B $+0xf2b3e4
		*/
	}

	// RVA: 0x10CD29C Offset: 0x10CD29C VA: 0x10CD29C
	public void SetPosition(Vector2 newPosition) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 9 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD29C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010CD2A0:  98709FE5     LDR r7, [pc, 0x98]
		   0x010CD2A4:  0060A0E1     MOV r6, r0
		   0x010CD2A8:  0240A0E1     MOV r4, r2
		   0x010CD2AC:  0150A0E1     MOV r5, r1
		   0x010CD2B0:  07708FE0     ADD r7, pc, r7
		   0x010CD2B4:  0000D7E5     LDRB r0, [r7]
		   0x010CD2B8:  000050E3     CMPS r0, r0, 0x0
		   0x010CD2BC:  0400001A     BNE $+0x18  // if (!=) goto 0x010CD2D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD2C0:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x010CD2C4:  00009FE7     LDR r0, [pc, r0]
		   0x010CD2C8:  A437FAEB     BL $-0x172168
		   0x010CD2CC:  0100A0E3     MOV r0, 0x1
		   0x010CD2D0:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD2D4:  0600A0E1     MOV r0, r6
		   0x010CD2D8:  0010A0E3     MOV r1, 0x0
		   0x010CD2DC:  F2AA3CEB     BL $+0xf2abd0  // CALL → sub_1FF7EAC
		   0x010CD2E0:  000050E3     CMPS r0, r0, 0x0
		   0x010CD2E4:  0D00000A     BEQ $+0x3c  // if (==) goto 0x010CD320
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010CD2E8:  58709FE5     LDR r7, [pc, 0x58]
		   0x010CD2EC:  0060A0E1     MOV r6, r0
		   0x010CD2F0:  07709FE7     LDR r7, [pc, r7]
		   0x010CD2F4:  001096E5     LDR r1, [r6]
		   0x010CD2F8:  000097E5     LDR r0, [r7]
		   0x010CD2FC:  000051E1     CMPS r0, r1, r0
		   0x010CD300:  0010A0E1     MOV r1, r0
		   0x010CD304:  0200000A     BEQ $+0x10  // if (==) goto 0x010CD314
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010CD308:  3038FAEB     BL $-0x171f38
		   0x010CD30C:  000096E5     LDR r0, [r6]
		   0x010CD310:  001097E5     LDR r1, [r7]
		   // ──── Block 5 if (==) ────────────────────
		   0x010CD314:  010050E1     CMPS r0, r0, r1
		   0x010CD318:  0060A013     MOVNE r6, 0x0
		   0x010CD31C:  010000EA     B $+0xc  // goto 0x010CD328
		   // ──── Block 6 if (==) ────────────────────
		   0x010CD320:  2A38FAEB     BL $-0x171f50
		   0x010CD324:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 ──────────────────────────────
		   0x010CD328:  0600A0E1     MOV r0, r6
		   0x010CD32C:  0510A0E1     MOV r1, r5
		   0x010CD330:  0420A0E1     MOV r2, r4
		   0x010CD334:  0030A0E3     MOV r3, 0x0
		   0x010CD338:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010CD33C:  FBAA3CEA     B $+0xf2abf4
		   0x010CD340:  5EE91503     TSTSEQ lr, r5, 0x178000
		   0x010CD344:  9C9CFA02     RSCSEQ sb, r10, 0x9c00
		   0x010CD348:  709CFA02     RSCSEQ sb, r10, 0x7000
		*/
	}

	// RVA: 0x10CCBDC Offset: 0x10CCBDC VA: 0x10CCBDC
	public void SetInteractable(bool isInteractable) {
		/* Disassembly (ARM32, 14 instructions, 0x38 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CCBDC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010CCBE0:  105090E5     LDR r5, [r0, 0x10]
		   0x010CCBE4:  0140A0E1     MOV r4, r1
		   0x010CCBE8:  3810C0E5     STRB r1, [r0, 0x38]
		   0x010CCBEC:  000055E3     CMPS r0, r5, 0x0
		   0x010CCBF0:  0000001A     BNE $+0x8  // if (!=) goto 0x010CCBF8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CCBF4:  F539FAEB     BL $-0x171824
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CCBF8:  000095E5     LDR r0, [r5]
		   0x010CCBFC:  0410A0E1     MOV r1, r4
		   0x010CCC00:  883190E5     LDR r3, [r0, 0x188]
		   0x010CCC04:  8C2190E5     LDR r2, [r0, 0x18c]
		   0x010CCC08:  0500A0E1     MOV r0, r5
		   0x010CCC0C:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010CCC10:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10CD34C Offset: 0x10CD34C VA: 0x10CD34C
	public void SetSelectable(bool isSelectable) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD34C:  3910C0E5     STRB r1, [r0, 0x39]
		   0x010CD350:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10CD354 Offset: 0x10CD354 VA: 0x10CD354 Slot: 4
	public void OnPointerDown(PointerEventData eventData) {
		/* Disassembly (ARM32, 10 instructions, 0x28 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD354:  0010A0E1     MOV r1, r0
		   0x010CD358:  3800D0E5     LDRB r0, [r0, 0x38]
		   0x010CD35C:  000050E3     CMPS r0, r0, 0x0
		   0x010CD360:  30009115     LDRNE r0, [r1, 0x30]
		   0x010CD364:  00005013     CMPSNE r0, r0, 0x0
		   0x010CD368:  1EFF2F01     BXEQ lr
		   0x010CD36C:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010CD370:  142090E5     LDR r2, [r0, 0x14]
		   0x010CD374:  200090E5     LDR r0, [r0, 0x20]
		   0x010CD378:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10CD37C Offset: 0x10CD37C VA: 0x10CD37C Slot: 5
	public void OnPointerUp(PointerEventData eventData) {
		/* Disassembly (ARM32, 41 instructions, 0xA4 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD37C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010CD380:  8C609FE5     LDR r6, [pc, 0x8c]
		   0x010CD384:  0040A0E1     MOV r4, r0
		   0x010CD388:  0150A0E1     MOV r5, r1
		   0x010CD38C:  06608FE0     ADD r6, pc, r6
		   0x010CD390:  0000D6E5     LDRB r0, [r6]
		   0x010CD394:  000050E3     CMPS r0, r0, 0x0
		   0x010CD398:  0400001A     BNE $+0x18  // if (!=) goto 0x010CD3B0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD39C:  74009FE5     LDR r0, [pc, 0x74]
		   0x010CD3A0:  00009FE7     LDR r0, [pc, r0]
		   0x010CD3A4:  6D37FAEB     BL $-0x172244
		   0x010CD3A8:  0100A0E3     MOV r0, 0x1
		   0x010CD3AC:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD3B0:  000055E3     CMPS r0, r5, 0x0
		   0x010CD3B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD3BC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CD3B8:  0438FAEB     BL $-0x171fe8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CD3BC:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x010CD3C0:  000050E3     CMPS r0, r0, 0x0
		   0x010CD3C4:  1100000A     BEQ $+0x4c  // if (==) goto 0x010CD410
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010CD3C8:  280095E5     LDR r0, [r5, 0x28]
		   0x010CD3CC:  000050E3     CMPS r0, r0, 0x0
		   0x010CD3D0:  0500000A     BEQ $+0x1c  // if (==) goto 0x010CD3EC
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x010CD3D4:  40109FE5     LDR r1, [pc, 0x40]
		   0x010CD3D8:  01109FE7     LDR r1, [pc, r1]
		   0x010CD3DC:  001091E5     LDR r1, [r1]
		   0x010CD3E0:  415E23EB     BL $+0x8d790c  // CALL → GameObject.GetComponent<object>
		   0x010CD3E4:  0010A0E1     MOV r1, r0
		   0x010CD3E8:  000000EA     B $+0x8  // goto 0x010CD3F0
		   // ──── Block 7 if (==) ────────────────────
		   0x010CD3EC:  0010A0E3     MOV r1, 0x0
		   // ──── Block 8 ──────────────────────────────
		   0x010CD3F0:  340094E5     LDR r0, [r4, 0x34]
		   0x010CD3F4:  000050E3     CMPS r0, r0, 0x0
		   0x010CD3F8:  0400000A     BEQ $+0x18  // if (==) goto 0x010CD410
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x010CD3FC:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010CD400:  142090E5     LDR r2, [r0, 0x14]
		   0x010CD404:  200090E5     LDR r0, [r0, 0x20]
		   0x010CD408:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010CD40C:  13FF2FE1     BX r3
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x010CD410:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010CD414:  83E81503     TSTSEQ lr, r5, 0x830000
		   0x010CD418:  F0B9FA02     RSCSEQ fp, r10, 0x3c0000
		   0x010CD41C:  B8B9FA02     RSCSEQ fp, r10, 0x2e0000
		*/
	}

	// RVA: 0x10CD420 Offset: 0x10CD420 VA: 0x10CD420
	public void SendOnPointerUpEvent(Cell cell) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD420:  340090E5     LDR r0, [r0, 0x34]
		   0x010CD424:  000050E3     CMPS r0, r0, 0x0
		   0x010CD428:  1EFF2F01     BXEQ lr
		   0x010CD42C:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010CD430:  142090E5     LDR r2, [r0, 0x14]
		   0x010CD434:  200090E5     LDR r0, [r0, 0x20]
		   0x010CD438:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x10CCC80 Offset: 0x10CCC80 VA: 0x10CCC80
	public void SetItem(Item itemNew) {
		/* Disassembly (ARM32, 30 instructions, 0x78 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CCC80:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010CCC84:  60609FE5     LDR r6, [pc, 0x60]
		   0x010CCC88:  0040A0E1     MOV r4, r0
		   0x010CCC8C:  0150A0E1     MOV r5, r1
		   0x010CCC90:  06608FE0     ADD r6, pc, r6
		   0x010CCC94:  0000D6E5     LDRB r0, [r6]
		   0x010CCC98:  000050E3     CMPS r0, r0, 0x0
		   0x010CCC9C:  0400001A     BNE $+0x18  // if (!=) goto 0x010CCCB4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CCCA0:  48009FE5     LDR r0, [pc, 0x48]
		   0x010CCCA4:  00009FE7     LDR r0, [pc, r0]
		   0x010CCCA8:  2C39FAEB     BL $-0x171b48
		   0x010CCCAC:  0100A0E3     MOV r0, 0x1
		   0x010CCCB0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CCCB4:  38009FE5     LDR r0, [pc, 0x38]
		   0x010CCCB8:  00009FE7     LDR r0, [pc, r0]
		   0x010CCCBC:  245084E5     STR r5, [r4, 0x24]
		   0x010CCCC0:  000090E5     LDR r0, [r0]
		   0x010CCCC4:  741090E5     LDR r1, [r0, 0x74]
		   0x010CCCC8:  000051E3     CMPS r0, r1, 0x0
		   0x010CCCCC:  0000001A     BNE $+0x8  // if (!=) goto 0x010CCCD4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CCCD0:  6F39FAEB     BL $-0x171a3c
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CCCD4:  0500A0E1     MOV r0, r5
		   0x010CCCD8:  0010A0E3     MOV r1, 0x0
		   0x010CCCDC:  0020A0E3     MOV r2, 0x0
		   0x010CCCE0:  6DAC3CEB     BL $+0xf2b1bc  // CALL → sub_1FF7E9C
		   0x010CCCE4:  2800C4E5     STRB r0, [r4, 0x28]
		   0x010CCCE8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010CCCEC:  80EF1503     TSTSEQ lr, r5, 0x200
		   0x010CCCF0:  9498FA02     RSCSEQ sb, r10, 0x940000
		   0x010CCCF4:  8098FA02     RSCSEQ sb, r10, 0x800000
		*/
	}

	// RVA: 0x10CD43C Offset: 0x10CD43C VA: 0x10CD43C
	public void SetCoordinates(int x, int y) {
		/* Disassembly (ARM32, 67 instructions, 0x10C bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD43C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010CD440:  10D04DE2     SUB sp, sp, 0x10
		   0x010CD444:  E0709FE5     LDR r7, [pc, 0xe0]
		   0x010CD448:  0040A0E1     MOV r4, r0
		   0x010CD44C:  0250A0E1     MOV r5, r2
		   0x010CD450:  0160A0E1     MOV r6, r1
		   0x010CD454:  07708FE0     ADD r7, pc, r7
		   0x010CD458:  08208DE5     STR r2, [sp, 0x8]
		   0x010CD45C:  0C108DE5     STR r1, [sp, 0xc]
		   0x010CD460:  0000D7E5     LDRB r0, [r7]
		   0x010CD464:  000050E3     CMPS r0, r0, 0x0
		   0x010CD468:  0A00001A     BNE $+0x30  // if (!=) goto 0x010CD498
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD46C:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x010CD470:  00009FE7     LDR r0, [pc, r0]
		   0x010CD474:  3937FAEB     BL $-0x172314
		   0x010CD478:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x010CD47C:  00009FE7     LDR r0, [pc, r0]
		   0x010CD480:  3637FAEB     BL $-0x172320
		   0x010CD484:  AC009FE5     LDR r0, [pc, 0xac]
		   0x010CD488:  00009FE7     LDR r0, [pc, r0]
		   0x010CD48C:  3337FAEB     BL $-0x17232c
		   0x010CD490:  0100A0E3     MOV r0, 0x1
		   0x010CD494:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD498:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x010CD49C:  00009FE7     LDR r0, [pc, r0]
		   0x010CD4A0:  146084E5     STR r6, [r4, 0x14]
		   0x010CD4A4:  185084E5     STR r5, [r4, 0x18]
		   0x010CD4A8:  000090E5     LDR r0, [r0]
		   0x010CD4AC:  741090E5     LDR r1, [r0, 0x74]
		   0x010CD4B0:  000051E3     CMPS r0, r1, 0x0
		   0x010CD4B4:  0000001A     BNE $+0x8  // if (!=) goto 0x010CD4BC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010CD4B8:  7537FAEB     BL $-0x172224
		   // ──── Block 4 if (!=) ────────────────────
		   0x010CD4BC:  0000A0E3     MOV r0, 0x0
		   0x010CD4C0:  0060A0E3     MOV r6, 0x0
		   0x010CD4C4:  62AB3CEB     BL $+0xf2ad90  // CALL → sub_1FF8254
		   0x010CD4C8:  000050E3     CMPS r0, r0, 0x0
		   0x010CD4CC:  1400000A     BEQ $+0x58  // if (==) goto 0x010CD524
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010CD4D0:  0C008DE2     ADD r0, sp, 0xc
		   0x010CD4D4:  0010A0E3     MOV r1, 0x0
		   0x010CD4D8:  D2DB7DEB     BL $+0x1f76f50  // CALL → Int32.ToString
		   0x010CD4DC:  0050A0E1     MOV r5, r0
		   0x010CD4E0:  08008DE2     ADD r0, sp, 0x8
		   0x010CD4E4:  0010A0E3     MOV r1, 0x0
		   0x010CD4E8:  CEDB7DEB     BL $+0x1f76f40  // CALL → Int32.ToString
		   0x010CD4EC:  0030A0E1     MOV r3, r0
		   0x010CD4F0:  48009FE5     LDR r0, [pc, 0x48]
		   0x010CD4F4:  00009FE7     LDR r0, [pc, r0]
		   0x010CD4F8:  000090E5     LDR r0, [r0]
		   0x010CD4FC:  40109FE5     LDR r1, [pc, 0x40]
		   0x010CD500:  01109FE7     LDR r1, [pc, r1]
		   0x010CD504:  00608DE5     STR r6, [sp]
		   0x010CD508:  002091E5     LDR r2, [r1]
		   0x010CD50C:  0510A0E1     MOV r1, r5
		   0x010CD510:  1D3177EB     BL $+0x1dcc47c  // CALL → String.Concat
		   0x010CD514:  0010A0E1     MOV r1, r0
		   0x010CD518:  0400A0E1     MOV r0, r4
		   0x010CD51C:  0020A0E3     MOV r2, 0x0
		   0x010CD520:  33AB3CEB     BL $+0xf2acd4  // CALL → sub_1FF81F4
		   // ──── Block 6 if (==) ────────────────────
		   0x010CD524:  10D08DE2     ADD sp, sp, 0x10
		   0x010CD528:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x010CD52C:  BDE71503     TSTSEQ lr, r5, 0x2f40000
		   0x010CD530:  1891FA02     RSCSEQ sb, r10, 0x6
		   0x010CD534:  18B9FA02     RSCSEQ fp, r10, 0x60000
		   0x010CD538:  F4A8FA02     RSCSEQ r10, r10, 0xf40000
		   0x010CD53C:  EC90FA02     RSCSEQ sb, r10, 0xec
		   0x010CD540:  A0B8FA02     RSCSEQ fp, r10, 0xa00000
		   0x010CD544:  7CA8FA02     RSCSEQ r10, r10, 0x7c0000
		*/
	}

	// RVA: 0x10CD548 Offset: 0x10CD548 VA: 0x10CD548 Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 39 instructions, 0x9C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010CD548:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010CD54C:  08D04DE2     SUB sp, sp, 0x8
		   0x010CD550:  7C509FE5     LDR r5, [pc, 0x7c]
		   0x010CD554:  0040A0E1     MOV r4, r0
		   0x010CD558:  05508FE0     ADD r5, pc, r5
		   0x010CD55C:  0000D5E5     LDRB r0, [r5]
		   0x010CD560:  000050E3     CMPS r0, r0, 0x0
		   0x010CD564:  0400001A     BNE $+0x18  // if (!=) goto 0x010CD57C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010CD568:  68009FE5     LDR r0, [pc, 0x68]
		   0x010CD56C:  00009FE7     LDR r0, [pc, r0]
		   0x010CD570:  FA36FAEB     BL $-0x172410
		   0x010CD574:  0100A0E3     MOV r0, 0x1
		   0x010CD578:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010CD57C:  141094E5     LDR r1, [r4, 0x14]
		   0x010CD580:  54609FE5     LDR r6, [pc, 0x54]
		   0x010CD584:  06609FE7     LDR r6, [pc, r6]
		   0x010CD588:  04108DE5     STR r1, [sp, 0x4]
		   0x010CD58C:  04108DE2     ADD r1, sp, 0x4
		   0x010CD590:  240096E5     LDR r0, [r6, 0x24]
		   0x010CD594:  4037FAEB     BL $-0x1722f8
		   0x010CD598:  0050A0E1     MOV r5, r0
		   0x010CD59C:  240096E5     LDR r0, [r6, 0x24]
		   0x010CD5A0:  181094E5     LDR r1, [r4, 0x18]
		   0x010CD5A4:  00108DE5     STR r1, [sp]
		   0x010CD5A8:  0D10A0E1     MOV r1, sp
		   0x010CD5AC:  3A37FAEB     BL $-0x172310
		   0x010CD5B0:  0020A0E1     MOV r2, r0
		   0x010CD5B4:  24009FE5     LDR r0, [pc, 0x24]
		   0x010CD5B8:  0510A0E1     MOV r1, r5
		   0x010CD5BC:  0030A0E3     MOV r3, 0x0
		   0x010CD5C0:  00009FE7     LDR r0, [pc, r0]
		   0x010CD5C4:  000090E5     LDR r0, [r0]
		   0x010CD5C8:  0D3277EB     BL $+0x1dcc83c  // CALL → String.Format
		   0x010CD5CC:  08D08DE2     ADD sp, sp, 0x8
		   0x010CD5D0:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010CD5D4:  BAE61503     TSTSEQ lr, r5, 0xba00000
		   0x010CD5D8:  2CB8FA02     RSCSEQ fp, r10, 0x2c0000
		   0x010CD5DC:  3C91FA02     RSCSEQ sb, r10, 0xf
		   0x010CD5E0:  D8B7FA02     RSCSEQ fp, r10, 0x3600000
		*/
	}

	// RVA: 0x10CD5E4 Offset: 0x10CD5E4 VA: 0x10CD5E4
	public void .ctor() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010CD5E4:  011100E3     MOV r1, 0x101
		   0x010CD5E8:  B813C0E1     STRH r1, [r0, 0x38]
		   0x010CD5EC:  0010A0E3     MOV r1, 0x0
		   0x010CD5F0:  2CAA3CEA     B $+0xf2a8b8
		*/
	}
}
