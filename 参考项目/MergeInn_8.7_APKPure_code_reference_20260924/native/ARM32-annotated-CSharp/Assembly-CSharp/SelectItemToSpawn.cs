// Dll : Assembly-CSharp.dll
// Namespace: 
public sealed class SelectItemToSpawn : MulticastDelegate // TypeDefIndex: 1278
{

	// Methods

	// RVA: 0x1105130 Offset: 0x1105130 VA: 0x1105130
	public void .ctor(object object, IntPtr method) {
		/* Disassembly (ARM32, 38 instructions, 0x98 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01105130:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01105134:  0040A0E1     MOV r4, r0
		   0x01105138:  142080E5     STR r2, [r0, 0x14]
		   0x0110513C:  040092E5     LDR r0, [r2, 0x4]
		   0x01105140:  0150A0E1     MOV r5, r1
		   0x01105144:  080084E5     STR r0, [r4, 0x8]
		   0x01105148:  0200A0E1     MOV r0, r2
		   0x0110514C:  2E60D2E5     LDRB r6, [r2, 0x2e]
		   0x01105150:  101084E5     STR r1, [r4, 0x10]
		   0x01105154:  204084E5     STR r4, [r4, 0x20]
		   0x01105158:  2858F9EB     BL $-0x1a9f58
		   0x0110515C:  000050E3     CMPS r0, r0, 0x0
		   0x01105160:  0500000A     BEQ $+0x1c  // if (==) goto 0x0110517C
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x01105164:  010056E3     CMPS r0, r6, 0x1
		   0x01105168:  0B00001A     BNE $+0x34  // if (!=) goto 0x0110519C
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x0110516C:  48009FE5     LDR r0, [pc, 0x48]
		   0x01105170:  00008FE0     ADD r0, pc, r0
		   0x01105174:  0C0084E5     STR r0, [r4, 0xc]
		   0x01105178:  0B0000EA     B $+0x34  // goto 0x011051AC
		   // ──── Block 3 if (==) ────────────────────
		   0x0110517C:  000055E3     CMPS r0, r5, 0x0
		   0x01105180:  0500001A     BNE $+0x1c  // if (!=) goto 0x0110519C
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01105184:  34109FE5     LDR r1, [pc, 0x34]
		   0x01105188:  0000A0E3     MOV r0, 0x0
		   0x0110518C:  01108FE0     ADD r1, pc, r1
		   0x01105190:  9458F9EB     BL $-0x1a9da8
		   0x01105194:  0010A0E3     MOV r1, 0x0
		   0x01105198:  3858F9EB     BL $-0x1a9f18
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x0110519C:  080094E5     LDR r0, [r4, 0x8]
		   0x011051A0:  101094E5     LDR r1, [r4, 0x10]
		   0x011051A4:  0C0084E5     STR r0, [r4, 0xc]
		   0x011051A8:  201084E5     STR r1, [r4, 0x20]
		   // ──── Block 6 ──────────────────────────────
		   0x011051AC:  10009FE5     LDR r0, [pc, 0x10]
		   0x011051B0:  00008FE0     ADD r0, pc, r0
		   0x011051B4:  1C0084E5     STR r0, [r4, 0x1c]
		   0x011051B8:  7080BDE8     POP {r4, r5, r6, pc}
		   0x011051BC:  20D2B4FF     CDP2 p2, ;, c13, c4, c0, 1
		   0x011051C0:  A5F067FF     CDP2 p0, 6, c15, c7, c5, 5
		   0x011051C4:  98D1B4FF     MRC2 p1, 5, sp, c4, c8, 4
		*/
	}

	// RVA: 0x11051C8 Offset: 0x11051C8 VA: 0x11051C8 Slot: 13
	public virtual ItemData Invoke(EnergyConsumptionMode energyConsumptionMode) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x011051C8:  0C3090E5     LDR r3, [r0, 0xc]
		   0x011051CC:  142090E5     LDR r2, [r0, 0x14]
		   0x011051D0:  200090E5     LDR r0, [r0, 0x20]
		   0x011051D4:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x11051D8 Offset: 0x11051D8 VA: 0x11051D8 Slot: 14
	public virtual IAsyncResult BeginInvoke(EnergyConsumptionMode energyConsumptionMode, AsyncCallback callback, object object) {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x011051D8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x011051DC:  10D04DE2     SUB sp, sp, 0x10
		   0x011051E0:  70709FE5     LDR r7, [pc, 0x70]
		   0x011051E4:  0060A0E1     MOV r6, r0
		   0x011051E8:  0340A0E1     MOV r4, r3
		   0x011051EC:  0250A0E1     MOV r5, r2
		   0x011051F0:  07708FE0     ADD r7, pc, r7
		   0x011051F4:  0C108DE5     STR r1, [sp, 0xc]
		   0x011051F8:  0000D7E5     LDRB r0, [r7]
		   0x011051FC:  000050E3     CMPS r0, r0, 0x0
		   0x01105200:  0400001A     BNE $+0x18  // if (!=) goto 0x01105218
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01105204:  50009FE5     LDR r0, [pc, 0x50]
		   0x01105208:  00009FE7     LDR r0, [pc, r0]
		   0x0110520C:  D357F9EB     BL $-0x1aa0ac
		   0x01105210:  0100A0E3     MOV r0, 0x1
		   0x01105214:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01105218:  40009FE5     LDR r0, [pc, 0x40]
		   0x0110521C:  0010A0E3     MOV r1, 0x0
		   0x01105220:  00009FE7     LDR r0, [pc, r0]
		   0x01105224:  04108DE5     STR r1, [sp, 0x4]
		   0x01105228:  00108DE5     STR r1, [sp]
		   0x0110522C:  0C108DE2     ADD r1, sp, 0xc
		   0x01105230:  000090E5     LDR r0, [r0]
		   0x01105234:  1858F9EB     BL $-0x1a9f98
		   0x01105238:  00008DE5     STR r0, [sp]
		   0x0110523C:  0D10A0E1     MOV r1, sp
		   0x01105240:  0600A0E1     MOV r0, r6
		   0x01105244:  0520A0E1     MOV r2, r5
		   0x01105248:  0430A0E1     MOV r3, r4
		   0x0110524C:  AE57F9EB     BL $-0x1aa140
		   0x01105250:  10D08DE2     ADD sp, sp, 0x10
		   0x01105254:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01105258:  C56B1203     TSTSEQ r6, r2, 0x31400
		   0x0110525C:  5446F702     RSCSEQ r4, r7, 0x5400000
		   0x01105260:  3C46F702     RSCSEQ r4, r7, 0x3c00000
		*/
	}

	// RVA: 0x1105264 Offset: 0x1105264 VA: 0x1105264 Slot: 15
	public virtual ItemData EndInvoke(IAsyncResult result) {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01105264:  0100A0E1     MOV r0, r1
		   0x01105268:  0010A0E3     MOV r1, 0x0
		   0x0110526C:  A757F9EA     B $-0x1aa15c
		*/
	}
}
