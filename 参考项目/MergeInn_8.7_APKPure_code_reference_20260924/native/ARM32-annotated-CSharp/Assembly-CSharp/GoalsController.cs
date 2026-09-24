// Dll : Assembly-CSharp.dll
// Namespace: 
public class GoalsController // TypeDefIndex: 1209
{

	// Fields
	[CompilerGenerated]
	private Action<List<Goal>> onGoalsUpdated; // 0x8
	[CompilerGenerated]
	private Action<List<Goal>> onGoalListChanged; // 0xC
	private GameState gameState; // 0x10
	private List<Goal> currentGoals; // 0x14

	// Properties
	public List<Goal> CurrentGoals { get; }
	public bool AllGoalsReady { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x10F3E50 Offset: 0x10F3E50 VA: 0x10F3E50
	public void add_onGoalsUpdated(Action<List<Goal>> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3E50:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F3E54:  98409FE5     LDR r4, [pc, 0x98]
		   0x010F3E58:  0090A0E1     MOV sb, r0
		   0x010F3E5C:  0180A0E1     MOV r8, r1
		   0x010F3E60:  04408FE0     ADD r4, pc, r4
		   0x010F3E64:  0000D4E5     LDRB r0, [r4]
		   0x010F3E68:  000050E3     CMPS r0, r0, 0x0
		   0x010F3E6C:  0400001A     BNE $+0x18  // if (!=) goto 0x010F3E84
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3E70:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F3E74:  00009FE7     LDR r0, [pc, r0]
		   0x010F3E78:  B89CF9EB     BL $-0x198d18
		   0x010F3E7C:  0100A0E3     MOV r0, 0x1
		   0x010F3E80:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3E84:  0800B9E5     LDR r0, [sb, 0x8]!
		   0x010F3E88:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010F3E8C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010F3E90:  0810A0E1     MOV r1, r8
		   0x010F3E94:  0020A0E3     MOV r2, 0x0
		   0x010F3E98:  0060A0E1     MOV r6, r0
		   0x010F3E9C:  0070A0E3     MOV r7, 0x0
		   0x010F3EA0:  A4957EEB     BL $+0x1fa5698  // CALL → Delegate.Combine
		   0x010F3EA4:  000050E3     CMPS r0, r0, 0x0
		   0x010F3EA8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010F3ED8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F3EAC:  00509AE5     LDR r5, [r10]
		   0x010F3EB0:  0040A0E1     MOV r4, r0
		   0x010F3EB4:  0510A0E1     MOV r1, r5
		   0x010F3EB8:  F69CF9EB     BL $-0x198c20
		   0x010F3EBC:  0070A0E1     MOV r7, r0
		   0x010F3EC0:  000050E3     CMPS r0, r0, 0x0
		   0x010F3EC4:  0300001A     BNE $+0x14  // if (!=) goto 0x010F3ED8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F3EC8:  0400A0E1     MOV r0, r4
		   0x010F3ECC:  0510A0E1     MOV r1, r5
		   0x010F3ED0:  2C9EF9EB     BL $-0x198748
		   0x010F3ED4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010F3ED8:  0900A0E1     MOV r0, sb
		   0x010F3EDC:  0710A0E1     MOV r1, r7
		   0x010F3EE0:  0620A0E1     MOV r2, r6
		   0x010F3EE4:  6389FAEB     BL $-0x15da6c
		   0x010F3EE8:  060050E1     CMPS r0, r0, r6
		   0x010F3EEC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010F3EF0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F3EF4:  AB7E1303     TSTSEQ r7, r3, 0xab0
		   0x010F3EF8:  BC56F802     RSCSEQ r5, r8, 0xbc00000
		   0x010F3EFC:  A456F802     RSCSEQ r5, r8, 0xa400000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10F3F00 Offset: 0x10F3F00 VA: 0x10F3F00
	public void remove_onGoalsUpdated(Action<List<Goal>> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3F00:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F3F04:  98409FE5     LDR r4, [pc, 0x98]
		   0x010F3F08:  0090A0E1     MOV sb, r0
		   0x010F3F0C:  0180A0E1     MOV r8, r1
		   0x010F3F10:  04408FE0     ADD r4, pc, r4
		   0x010F3F14:  0000D4E5     LDRB r0, [r4]
		   0x010F3F18:  000050E3     CMPS r0, r0, 0x0
		   0x010F3F1C:  0400001A     BNE $+0x18  // if (!=) goto 0x010F3F34
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3F20:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F3F24:  00009FE7     LDR r0, [pc, r0]
		   0x010F3F28:  8C9CF9EB     BL $-0x198dc8
		   0x010F3F2C:  0100A0E3     MOV r0, 0x1
		   0x010F3F30:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3F34:  0800B9E5     LDR r0, [sb, 0x8]!
		   0x010F3F38:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010F3F3C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010F3F40:  0810A0E1     MOV r1, r8
		   0x010F3F44:  0020A0E3     MOV r2, 0x0
		   0x010F3F48:  0060A0E1     MOV r6, r0
		   0x010F3F4C:  0070A0E3     MOV r7, 0x0
		   0x010F3F50:  F6957EEB     BL $+0x1fa57e0  // CALL → Delegate.Remove
		   0x010F3F54:  000050E3     CMPS r0, r0, 0x0
		   0x010F3F58:  0A00000A     BEQ $+0x30  // if (==) goto 0x010F3F88
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F3F5C:  00509AE5     LDR r5, [r10]
		   0x010F3F60:  0040A0E1     MOV r4, r0
		   0x010F3F64:  0510A0E1     MOV r1, r5
		   0x010F3F68:  CA9CF9EB     BL $-0x198cd0
		   0x010F3F6C:  0070A0E1     MOV r7, r0
		   0x010F3F70:  000050E3     CMPS r0, r0, 0x0
		   0x010F3F74:  0300001A     BNE $+0x14  // if (!=) goto 0x010F3F88
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F3F78:  0400A0E1     MOV r0, r4
		   0x010F3F7C:  0510A0E1     MOV r1, r5
		   0x010F3F80:  009EF9EB     BL $-0x1987f8
		   0x010F3F84:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010F3F88:  0900A0E1     MOV r0, sb
		   0x010F3F8C:  0710A0E1     MOV r1, r7
		   0x010F3F90:  0620A0E1     MOV r2, r6
		   0x010F3F94:  3789FAEB     BL $-0x15db1c
		   0x010F3F98:  060050E1     CMPS r0, r0, r6
		   0x010F3F9C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010F3FA0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F3FA4:  FC7D1303     TSTSEQ r7, r3, 0x3f00
		   0x010F3FA8:  0C56F802     RSCSEQ r5, r8, 0xc00000
		   0x010F3FAC:  F455F802     RSCSEQ r5, r8, 0x3d000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10F3FB0 Offset: 0x10F3FB0 VA: 0x10F3FB0
	public void add_onGoalListChanged(Action<List<Goal>> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F3FB0:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F3FB4:  98409FE5     LDR r4, [pc, 0x98]
		   0x010F3FB8:  0090A0E1     MOV sb, r0
		   0x010F3FBC:  0180A0E1     MOV r8, r1
		   0x010F3FC0:  04408FE0     ADD r4, pc, r4
		   0x010F3FC4:  0000D4E5     LDRB r0, [r4]
		   0x010F3FC8:  000050E3     CMPS r0, r0, 0x0
		   0x010F3FCC:  0400001A     BNE $+0x18  // if (!=) goto 0x010F3FE4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F3FD0:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F3FD4:  00009FE7     LDR r0, [pc, r0]
		   0x010F3FD8:  609CF9EB     BL $-0x198e78
		   0x010F3FDC:  0100A0E3     MOV r0, 0x1
		   0x010F3FE0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F3FE4:  0C00B9E5     LDR r0, [sb, 0xc]!
		   0x010F3FE8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010F3FEC:  0AA09FE7     LDR r10, [pc, r10]
		   0x010F3FF0:  0810A0E1     MOV r1, r8
		   0x010F3FF4:  0020A0E3     MOV r2, 0x0
		   0x010F3FF8:  0060A0E1     MOV r6, r0
		   0x010F3FFC:  0070A0E3     MOV r7, 0x0
		   0x010F4000:  4C957EEB     BL $+0x1fa5538  // CALL → Delegate.Combine
		   0x010F4004:  000050E3     CMPS r0, r0, 0x0
		   0x010F4008:  0A00000A     BEQ $+0x30  // if (==) goto 0x010F4038
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F400C:  00509AE5     LDR r5, [r10]
		   0x010F4010:  0040A0E1     MOV r4, r0
		   0x010F4014:  0510A0E1     MOV r1, r5
		   0x010F4018:  9E9CF9EB     BL $-0x198d80
		   0x010F401C:  0070A0E1     MOV r7, r0
		   0x010F4020:  000050E3     CMPS r0, r0, 0x0
		   0x010F4024:  0300001A     BNE $+0x14  // if (!=) goto 0x010F4038
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F4028:  0400A0E1     MOV r0, r4
		   0x010F402C:  0510A0E1     MOV r1, r5
		   0x010F4030:  D49DF9EB     BL $-0x1988a8
		   0x010F4034:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010F4038:  0900A0E1     MOV r0, sb
		   0x010F403C:  0710A0E1     MOV r1, r7
		   0x010F4040:  0620A0E1     MOV r2, r6
		   0x010F4044:  0B89FAEB     BL $-0x15dbcc
		   0x010F4048:  060050E1     CMPS r0, r0, r6
		   0x010F404C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010F4050:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F4054:  4D7D1303     TSTSEQ r7, r3, 0x1340
		   0x010F4058:  5C55F802     RSCSEQ r5, r8, 0x17000000
		   0x010F405C:  4455F802     RSCSEQ r5, r8, 0x11000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10F4060 Offset: 0x10F4060 VA: 0x10F4060
	public void remove_onGoalListChanged(Action<List<Goal>> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4060:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x010F4064:  98409FE5     LDR r4, [pc, 0x98]
		   0x010F4068:  0090A0E1     MOV sb, r0
		   0x010F406C:  0180A0E1     MOV r8, r1
		   0x010F4070:  04408FE0     ADD r4, pc, r4
		   0x010F4074:  0000D4E5     LDRB r0, [r4]
		   0x010F4078:  000050E3     CMPS r0, r0, 0x0
		   0x010F407C:  0400001A     BNE $+0x18  // if (!=) goto 0x010F4094
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F4080:  80009FE5     LDR r0, [pc, 0x80]
		   0x010F4084:  00009FE7     LDR r0, [pc, r0]
		   0x010F4088:  349CF9EB     BL $-0x198f28
		   0x010F408C:  0100A0E3     MOV r0, 0x1
		   0x010F4090:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F4094:  0C00B9E5     LDR r0, [sb, 0xc]!
		   0x010F4098:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x010F409C:  0AA09FE7     LDR r10, [pc, r10]
		   0x010F40A0:  0810A0E1     MOV r1, r8
		   0x010F40A4:  0020A0E3     MOV r2, 0x0
		   0x010F40A8:  0060A0E1     MOV r6, r0
		   0x010F40AC:  0070A0E3     MOV r7, 0x0
		   0x010F40B0:  9E957EEB     BL $+0x1fa5680  // CALL → Delegate.Remove
		   0x010F40B4:  000050E3     CMPS r0, r0, 0x0
		   0x010F40B8:  0A00000A     BEQ $+0x30  // if (==) goto 0x010F40E8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F40BC:  00509AE5     LDR r5, [r10]
		   0x010F40C0:  0040A0E1     MOV r4, r0
		   0x010F40C4:  0510A0E1     MOV r1, r5
		   0x010F40C8:  729CF9EB     BL $-0x198e30
		   0x010F40CC:  0070A0E1     MOV r7, r0
		   0x010F40D0:  000050E3     CMPS r0, r0, 0x0
		   0x010F40D4:  0300001A     BNE $+0x14  // if (!=) goto 0x010F40E8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x010F40D8:  0400A0E1     MOV r0, r4
		   0x010F40DC:  0510A0E1     MOV r1, r5
		   0x010F40E0:  A89DF9EB     BL $-0x198958
		   0x010F40E4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x010F40E8:  0900A0E1     MOV r0, sb
		   0x010F40EC:  0710A0E1     MOV r1, r7
		   0x010F40F0:  0620A0E1     MOV r2, r6
		   0x010F40F4:  DF88FAEB     BL $-0x15dc7c
		   0x010F40F8:  060050E1     CMPS r0, r0, r6
		   0x010F40FC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x010F4100:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x010F4104:  9E7C1303     TSTSEQ r7, r3, 0x9e00
		   0x010F4108:  AC54F802     RSCSEQ r5, r8, 0xac000000
		   0x010F410C:  9454F802     RSCSEQ r5, r8, 0x94000000
		*/
	}

	// RVA: 0x10F4110 Offset: 0x10F4110 VA: 0x10F4110
	public List<Goal> get_CurrentGoals() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F4110:  140090E5     LDR r0, [r0, 0x14]
		   0x010F4114:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x10F4118 Offset: 0x10F4118 VA: 0x10F4118
	public bool get_AllGoalsReady() {
		/* Disassembly (ARM32, 75 instructions, 0x12C bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4118:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x010F411C:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x010F4120:  0040A0E1     MOV r4, r0
		   0x010F4124:  05508FE0     ADD r5, pc, r5
		   0x010F4128:  0000D5E5     LDRB r0, [r5]
		   0x010F412C:  000050E3     CMPS r0, r0, 0x0
		   0x010F4130:  0D00001A     BNE $+0x3c  // if (!=) goto 0x010F416C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F4134:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x010F4138:  00009FE7     LDR r0, [pc, r0]
		   0x010F413C:  079CF9EB     BL $-0x198fdc
		   0x010F4140:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010F4144:  00009FE7     LDR r0, [pc, r0]
		   0x010F4148:  049CF9EB     BL $-0x198fe8
		   0x010F414C:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010F4150:  00009FE7     LDR r0, [pc, r0]
		   0x010F4154:  019CF9EB     BL $-0x198ff4
		   0x010F4158:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F415C:  00009FE7     LDR r0, [pc, r0]
		   0x010F4160:  FE9BF9EB     BL $-0x199000
		   0x010F4164:  0100A0E3     MOV r0, 0x1
		   0x010F4168:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F416C:  C0709FE5     LDR r7, [pc, 0xc0]
		   0x010F4170:  07709FE7     LDR r7, [pc, r7]
		   0x010F4174:  144094E5     LDR r4, [r4, 0x14]
		   0x010F4178:  000097E5     LDR r0, [r7]
		   0x010F417C:  741090E5     LDR r1, [r0, 0x74]
		   0x010F4180:  000051E3     CMPS r0, r1, 0x0
		   0x010F4184:  0100001A     BNE $+0xc  // if (!=) goto 0x010F4190
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F4188:  419CF9EB     BL $-0x198ef4
		   0x010F418C:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F4190:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x010F4194:  045091E5     LDR r5, [r1, 0x4]
		   0x010F4198:  000055E3     CMPS r0, r5, 0x0
		   0x010F419C:  1500001A     BNE $+0x5c  // if (!=) goto 0x010F41F8
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F41A0:  742090E5     LDR r2, [r0, 0x74]
		   0x010F41A4:  000052E3     CMPS r0, r2, 0x0
		   0x010F41A8:  0200001A     BNE $+0x10  // if (!=) goto 0x010F41B8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F41AC:  389CF9EB     BL $-0x198f18
		   0x010F41B0:  000097E5     LDR r0, [r7]
		   0x010F41B4:  5C1090E5     LDR r1, [r0, 0x5c]
		   // ──── Block 7 if (!=) ────────────────────
		   0x010F41B8:  78009FE5     LDR r0, [pc, 0x78]
		   0x010F41BC:  00009FE7     LDR r0, [pc, r0]
		   0x010F41C0:  006091E5     LDR r6, [r1]
		   0x010F41C4:  000090E5     LDR r0, [r0]
		   0x010F41C8:  7D9CF9EB     BL $-0x198e04
		   0x010F41CC:  0050A0E1     MOV r5, r0
		   0x010F41D0:  64009FE5     LDR r0, [pc, 0x64]
		   0x010F41D4:  0610A0E1     MOV r1, r6
		   0x010F41D8:  0030A0E3     MOV r3, 0x0
		   0x010F41DC:  00009FE7     LDR r0, [pc, r0]
		   0x010F41E0:  002090E5     LDR r2, [r0]
		   0x010F41E4:  0500A0E1     MOV r0, r5
		   0x010F41E8:  266733EB     BL $+0xcd9ca0  // CALL → Predicate<object>..ctor
		   0x010F41EC:  000097E5     LDR r0, [r7]
		   0x010F41F0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F41F4:  045080E5     STR r5, [r0, 0x4]
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F41F8:  000054E3     CMPS r0, r4, 0x0
		   0x010F41FC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4204
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F4200:  729CF9EB     BL $-0x198e30
		   // ──── Block 10 if (!=) ────────────────────
		   0x010F4204:  34009FE5     LDR r0, [pc, 0x34]
		   0x010F4208:  0510A0E1     MOV r1, r5
		   0x010F420C:  00009FE7     LDR r0, [pc, r0]
		   0x010F4210:  002090E5     LDR r2, [r0]
		   0x010F4214:  0400A0E1     MOV r0, r4
		   0x010F4218:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x010F421C:  07026CEA     B $+0x1b00824  // TAIL CALL → List<object>.TrueForAll
		   0x010F4220:  EB7B1303     TSTSEQ r7, r3, 0x3ac00
		   0x010F4224:  FC53F802     RSCSEQ r5, r8, 0xf0000003
		   0x010F4228:  D04DF802     RSCSEQ r4, r8, 0x3400
		   0x010F422C:  E853F802     RSCSEQ r5, r8, 0xa0000003
		   0x010F4230:  9053F802     RSCSEQ r5, r8, 0x40000002
		   0x010F4234:  7C53F802     RSCSEQ r5, r8, 0xf0000001
		   0x010F4238:  584DF802     RSCSEQ r4, r8, 0x1600
		   0x010F423C:  5C53F802     RSCSEQ r5, r8, 0x70000001
		   0x010F4240:  2853F802     RSCSEQ r5, r8, 0xa0000000
		*/
	}

	// RVA: 0x10F4244 Offset: 0x10F4244 VA: 0x10F4244
	public void .ctor(GameState gameStateRef) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F4244:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F4248:  0140A0E1     MOV r4, r1
		   0x010F424C:  0010A0E3     MOV r1, 0x0
		   0x010F4250:  0050A0E1     MOV r5, r0
		   0x010F4254:  64847EEB     BL $+0x1fa1198  // CALL → Object..ctor
		   0x010F4258:  104085E5     STR r4, [r5, 0x10]
		   0x010F425C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10F4260 Offset: 0x10F4260 VA: 0x10F4260
	public void SetCurrentGoals(List<Goal> goalsData) {
		/* Disassembly (ARM32, 78 instructions, 0x138 bytes):
		   // CFG: 8 blocks, 6 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4260:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x010F4264:  00619FE5     LDR r6, [pc, 0x100]
		   0x010F4268:  0040A0E1     MOV r4, r0
		   0x010F426C:  0150A0E1     MOV r5, r1
		   0x010F4270:  06608FE0     ADD r6, pc, r6
		   0x010F4274:  0000D6E5     LDRB r0, [r6]
		   0x010F4278:  000050E3     CMPS r0, r0, 0x0
		   0x010F427C:  1000001A     BNE $+0x48  // if (!=) goto 0x010F42C4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F4280:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x010F4284:  00009FE7     LDR r0, [pc, r0]
		   0x010F4288:  B49BF9EB     BL $-0x199128
		   0x010F428C:  E0009FE5     LDR r0, [pc, 0xe0]
		   0x010F4290:  00009FE7     LDR r0, [pc, r0]
		   0x010F4294:  B19BF9EB     BL $-0x199134
		   0x010F4298:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x010F429C:  00009FE7     LDR r0, [pc, r0]
		   0x010F42A0:  AE9BF9EB     BL $-0x199140
		   0x010F42A4:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F42A8:  00009FE7     LDR r0, [pc, r0]
		   0x010F42AC:  AB9BF9EB     BL $-0x19914c
		   0x010F42B0:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x010F42B4:  00009FE7     LDR r0, [pc, r0]
		   0x010F42B8:  A89BF9EB     BL $-0x199158
		   0x010F42BC:  0100A0E3     MOV r0, 0x1
		   0x010F42C0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F42C4:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x010F42C8:  00009FE7     LDR r0, [pc, r0]
		   0x010F42CC:  000090E5     LDR r0, [r0]
		   0x010F42D0:  3B9CF9EB     BL $-0x198f0c
		   0x010F42D4:  0060A0E1     MOV r6, r0
		   0x010F42D8:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010F42DC:  00009FE7     LDR r0, [pc, r0]
		   0x010F42E0:  001090E5     LDR r1, [r0]
		   0x010F42E4:  0600A0E1     MOV r0, r6
		   0x010F42E8:  30F86BEB     BL $+0x1afe0c8  // CALL → List<object>..ctor
		   0x010F42EC:  98009FE5     LDR r0, [pc, 0x98]
		   0x010F42F0:  00009FE7     LDR r0, [pc, r0]
		   0x010F42F4:  146084E5     STR r6, [r4, 0x14]
		   0x010F42F8:  000090E5     LDR r0, [r0]
		   0x010F42FC:  309CF9EB     BL $-0x198f38
		   0x010F4300:  0060A0E1     MOV r6, r0
		   0x010F4304:  84009FE5     LDR r0, [pc, 0x84]
		   0x010F4308:  0410A0E1     MOV r1, r4
		   0x010F430C:  0030A0E3     MOV r3, 0x0
		   0x010F4310:  00009FE7     LDR r0, [pc, r0]
		   0x010F4314:  002090E5     LDR r2, [r0]
		   0x010F4318:  0600A0E1     MOV r0, r6
		   0x010F431C:  C9C852EB     BL $+0x14b232c  // CALL → Action<object>..ctor
		   0x010F4320:  000055E3     CMPS r0, r5, 0x0
		   0x010F4324:  0000001A     BNE $+0x8  // if (!=) goto 0x010F432C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F4328:  289CF9EB     BL $-0x198f58
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F432C:  60009FE5     LDR r0, [pc, 0x60]
		   0x010F4330:  0610A0E1     MOV r1, r6
		   0x010F4334:  00009FE7     LDR r0, [pc, r0]
		   0x010F4338:  002090E5     LDR r2, [r0]
		   0x010F433C:  0500A0E1     MOV r0, r5
		   0x010F4340:  14FD6BEB     BL $+0x1aff458  // CALL → List<object>.ForEach
		   0x010F4344:  0C0094E5     LDR r0, [r4, 0xc]
		   0x010F4348:  000050E3     CMPS r0, r0, 0x0
		   0x010F434C:  0500000A     BEQ $+0x1c  // if (==) goto 0x010F4368
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010F4350:  0C3090E5     LDR r3, [r0, 0xc]
		   0x010F4354:  142090E5     LDR r2, [r0, 0x14]
		   0x010F4358:  200090E5     LDR r0, [r0, 0x20]
		   0x010F435C:  141094E5     LDR r1, [r4, 0x14]
		   0x010F4360:  7040BDE8     POP {r4, r5, r6, lr}
		   0x010F4364:  13FF2FE1     BX r3
		   // ──── Block 6 if (==) ────────────────────
		   0x010F4368:  7080BDE8     POP {r4, r5, r6, pc}
		   0x010F436C:  A07A1303     TSTSEQ r7, r3, 0xa0000
		   0x010F4370:  B852F802     RSCSEQ r5, r8, 0x8000000b
		   0x010F4374:  B052F802     RSCSEQ r5, r8, 0xb
		   0x010F4378:  A852F802     RSCSEQ r5, r8, 0x8000000a
		   0x010F437C:  8C45F802     RSCSEQ r4, r8, 0x23000000
		   0x010F4380:  8445F802     RSCSEQ r4, r8, 0x21000000
		   0x010F4384:  7045F802     RSCSEQ r4, r8, 0x1c000000
		   0x010F4388:  5845F802     RSCSEQ r4, r8, 0x16000000
		   0x010F438C:  4C52F802     RSCSEQ r5, r8, 0xc0000004
		   0x010F4390:  3052F802     RSCSEQ r5, r8, 0x3
		   0x010F4394:  1052F802     RSCSEQ r5, r8, 0x1
		*/
	}

	// RVA: 0x10F10AC Offset: 0x10F10AC VA: 0x10F10AC
	public void UpdateGoals(bool force = false) {
		/* Disassembly (ARM32, 78 instructions, 0x138 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F10AC:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x010F10B0:  54D04DE2     SUB sp, sp, 0x54
		   0x010F10B4:  08108DE5     STR r1, [sp, 0x8]
		   0x010F10B8:  0050A0E1     MOV r5, r0
		   0x010F10BC:  30479FE5     LDR r4, [pc, 0x730]
		   0x010F10C0:  04408FE0     ADD r4, pc, r4
		   0x010F10C4:  0000D4E5     LDRB r0, [r4]
		   0x010F10C8:  000050E3     CMPS r0, r0, 0x0
		   0x010F10CC:  4300001A     BNE $+0x114  // if (!=) goto 0x010F11E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F10D0:  20079FE5     LDR r0, [pc, 0x720]
		   0x010F10D4:  00009FE7     LDR r0, [pc, r0]
		   0x010F10D8:  20A8F9EB     BL $-0x195f78
		   0x010F10DC:  18079FE5     LDR r0, [pc, 0x718]
		   0x010F10E0:  00009FE7     LDR r0, [pc, r0]
		   0x010F10E4:  1DA8F9EB     BL $-0x195f84
		   0x010F10E8:  10079FE5     LDR r0, [pc, 0x710]
		   0x010F10EC:  00009FE7     LDR r0, [pc, r0]
		   0x010F10F0:  1AA8F9EB     BL $-0x195f90
		   0x010F10F4:  08079FE5     LDR r0, [pc, 0x708]
		   0x010F10F8:  00009FE7     LDR r0, [pc, r0]
		   0x010F10FC:  17A8F9EB     BL $-0x195f9c
		   0x010F1100:  00079FE5     LDR r0, [pc, 0x700]
		   0x010F1104:  00009FE7     LDR r0, [pc, r0]
		   0x010F1108:  14A8F9EB     BL $-0x195fa8
		   0x010F110C:  F8069FE5     LDR r0, [pc, 0x6f8]
		   0x010F1110:  00009FE7     LDR r0, [pc, r0]
		   0x010F1114:  11A8F9EB     BL $-0x195fb4
		   0x010F1118:  F0069FE5     LDR r0, [pc, 0x6f0]
		   0x010F111C:  00009FE7     LDR r0, [pc, r0]
		   0x010F1120:  0EA8F9EB     BL $-0x195fc0
		   0x010F1124:  E8069FE5     LDR r0, [pc, 0x6e8]
		   0x010F1128:  00009FE7     LDR r0, [pc, r0]
		   0x010F112C:  0BA8F9EB     BL $-0x195fcc
		   0x010F1130:  E0069FE5     LDR r0, [pc, 0x6e0]
		   0x010F1134:  00009FE7     LDR r0, [pc, r0]
		   0x010F1138:  08A8F9EB     BL $-0x195fd8
		   0x010F113C:  D8069FE5     LDR r0, [pc, 0x6d8]
		   0x010F1140:  00009FE7     LDR r0, [pc, r0]
		   0x010F1144:  05A8F9EB     BL $-0x195fe4
		   0x010F1148:  D0069FE5     LDR r0, [pc, 0x6d0]
		   0x010F114C:  00009FE7     LDR r0, [pc, r0]
		   0x010F1150:  02A8F9EB     BL $-0x195ff0
		   0x010F1154:  C8069FE5     LDR r0, [pc, 0x6c8]
		   0x010F1158:  00009FE7     LDR r0, [pc, r0]
		   0x010F115C:  FFA7F9EB     BL $-0x195ffc
		   0x010F1160:  C0069FE5     LDR r0, [pc, 0x6c0]
		   0x010F1164:  00009FE7     LDR r0, [pc, r0]
		   0x010F1168:  FCA7F9EB     BL $-0x196008
		   0x010F116C:  B8069FE5     LDR r0, [pc, 0x6b8]
		   0x010F1170:  00009FE7     LDR r0, [pc, r0]
		   0x010F1174:  F9A7F9EB     BL $-0x196014
		   0x010F1178:  B0069FE5     LDR r0, [pc, 0x6b0]
		   0x010F117C:  00009FE7     LDR r0, [pc, r0]
		   0x010F1180:  F6A7F9EB     BL $-0x196020
		   0x010F1184:  A8069FE5     LDR r0, [pc, 0x6a8]
		   0x010F1188:  00009FE7     LDR r0, [pc, r0]
		   0x010F118C:  F3A7F9EB     BL $-0x19602c
		   0x010F1190:  A0069FE5     LDR r0, [pc, 0x6a0]
		   0x010F1194:  00009FE7     LDR r0, [pc, r0]
		   0x010F1198:  F0A7F9EB     BL $-0x196038
		   0x010F119C:  98069FE5     LDR r0, [pc, 0x698]
		   0x010F11A0:  00009FE7     LDR r0, [pc, r0]
		   0x010F11A4:  EDA7F9EB     BL $-0x196044
		   0x010F11A8:  90069FE5     LDR r0, [pc, 0x690]
		   0x010F11AC:  00009FE7     LDR r0, [pc, r0]
		   0x010F11B0:  EAA7F9EB     BL $-0x196050
		   0x010F11B4:  88069FE5     LDR r0, [pc, 0x688]
		   0x010F11B8:  00009FE7     LDR r0, [pc, r0]
		   0x010F11BC:  E7A7F9EB     BL $-0x19605c
		   0x010F11C0:  80069FE5     LDR r0, [pc, 0x680]
		   0x010F11C4:  00009FE7     LDR r0, [pc, r0]
		   0x010F11C8:  E4A7F9EB     BL $-0x196068
		   0x010F11CC:  78069FE5     LDR r0, [pc, 0x678]
		   0x010F11D0:  00009FE7     LDR r0, [pc, r0]
		   0x010F11D4:  E1A7F9EB     BL $-0x196074
		   0x010F11D8:  0100A0E3     MOV r0, 0x1
		   0x010F11DC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F11E0:  68069FE5     LDR r0, [pc, 0x668]
		*/
	}

	// RVA: 0x10F4398 Offset: 0x10F4398 VA: 0x10F4398
	public bool CompleteGoal(string goalId, bool givingStars) {
		/* Disassembly (ARM32, 66 instructions, 0x108 bytes):
		   // CFG: 14 blocks, 15 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4398:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F439C:  08D04DE2     SUB sp, sp, 0x8
		   0x010F43A0:  EC409FE5     LDR r4, [pc, 0xec]
		   0x010F43A4:  0050A0E1     MOV r5, r0
		   0x010F43A8:  0280A0E1     MOV r8, r2
		   0x010F43AC:  0170A0E1     MOV r7, r1
		   0x010F43B0:  04408FE0     ADD r4, pc, r4
		   0x010F43B4:  0000D4E5     LDRB r0, [r4]
		   0x010F43B8:  000050E3     CMPS r0, r0, 0x0
		   0x010F43BC:  0400001A     BNE $+0x18  // if (!=) goto 0x010F43D4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F43C0:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x010F43C4:  00009FE7     LDR r0, [pc, r0]
		   0x010F43C8:  649BF9EB     BL $-0x199268
		   0x010F43CC:  0100A0E3     MOV r0, 0x1
		   0x010F43D0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F43D4:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x010F43D8:  0060A0E3     MOV r6, 0x0
		   0x010F43DC:  00009FE7     LDR r0, [pc, r0]
		   0x010F43E0:  04608DE5     STR r6, [sp, 0x4]
		   0x010F43E4:  000090E5     LDR r0, [r0]
		   0x010F43E8:  F59BF9EB     BL $-0x199024
		   0x010F43EC:  0040A0E1     MOV r4, r0
		   0x010F43F0:  ADFDFFEB     BL $-0x944
		   0x010F43F4:  04208DE2     ADD r2, sp, 0x4
		   0x010F43F8:  0500A0E1     MOV r0, r5
		   0x010F43FC:  0710A0E1     MOV r1, r7
		   0x010F4400:  04408DE5     STR r4, [sp, 0x4]
		   0x010F4404:  250000EB     BL $+0x9c  // CALL → GoalsController.HasValidGoal
		   0x010F4408:  000050E3     CMPS r0, r0, 0x0
		   0x010F440C:  1D00000A     BEQ $+0x7c  // if (==) goto 0x010F4488
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x010F4410:  04709DE5     LDR r7, [sp, 0x4]
		   0x010F4414:  000057E3     CMPS r0, r7, 0x0
		   0x010F4418:  0400000A     BEQ $+0x18  // if (==) goto 0x010F4430
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x010F441C:  0700A0E1     MOV r0, r7
		   0x010F4420:  7CFAFFEB     BL $-0x1608
		   0x010F4424:  000050E3     CMPS r0, r0, 0x0
		   0x010F4428:  0700001A     BNE $+0x24  // if (!=) goto 0x010F444C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F442C:  150000EA     B $+0x5c  // goto 0x010F4488
		   // ──── Block 6 if (==) ────────────────────
		   0x010F4430:  E69BF9EB     BL $-0x199060
		   0x010F4434:  0000A0E3     MOV r0, 0x0
		   0x010F4438:  0060A0E3     MOV r6, 0x0
		   0x010F443C:  75FAFFEB     BL $-0x1624
		   0x010F4440:  000050E3     CMPS r0, r0, 0x0
		   0x010F4444:  0F00000A     BEQ $+0x44  // if (==) goto 0x010F4488
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x010F4448:  E09BF9EB     BL $-0x199078
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F444C:  0700A0E1     MOV r0, r7
		   0x010F4450:  1FF1FFEB     BL $-0x3b7c
		   0x010F4454:  000050E3     CMPS r0, r0, 0x0
		   0x010F4458:  0060A0E3     MOV r6, 0x0
		   0x010F445C:  0900001A     BNE $+0x2c  // if (!=) goto 0x010F4488
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x010F4460:  105095E5     LDR r5, [r5, 0x10]
		   0x010F4464:  000055E3     CMPS r0, r5, 0x0
		   0x010F4468:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4470
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x010F446C:  D79BF9EB     BL $-0x19909c
		   // ──── Block 11 if (!=) ────────────────────
		   0x010F4470:  0500A0E1     MOV r0, r5
		   0x010F4474:  0710A0E1     MOV r1, r7
		   0x010F4478:  0820A0E1     MOV r2, r8
		   0x010F447C:  0030A0E3     MOV r3, 0x0
		   0x010F4480:  B5C8FFEB     BL $-0xdd24
		   0x010F4484:  0160A0E3     MOV r6, 0x1
		   // ──── Block 12 (from 3 paths) ──────────────────
		   0x010F4488:  0600A0E1     MOV r0, r6
		   0x010F448C:  08D08DE2     ADD sp, sp, 0x8
		   0x010F4490:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010F4494:  62791303     TSTSEQ r7, r3, 0x188000
		   0x010F4498:  C050F802     RSCSEQ r5, r8, 0xc0
		   0x010F449C:  A850F802     RSCSEQ r5, r8, 0xa8
		*/
	}

	// RVA: 0x10F44A0 Offset: 0x10F44A0 VA: 0x10F44A0
	private bool HasValidGoal(string goalId, ref Goal goal) {
		/* Disassembly (ARM32, 120 instructions, 0x1E0 bytes):
		   // CFG: 11 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F44A0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F44A4:  90419FE5     LDR r4, [pc, 0x190]
		   0x010F44A8:  0050A0E1     MOV r5, r0
		   0x010F44AC:  0280A0E1     MOV r8, r2
		   0x010F44B0:  0160A0E1     MOV r6, r1
		   0x010F44B4:  04408FE0     ADD r4, pc, r4
		   0x010F44B8:  0000D4E5     LDRB r0, [r4]
		   0x010F44BC:  000050E3     CMPS r0, r0, 0x0
		   0x010F44C0:  1900001A     BNE $+0x6c  // if (!=) goto 0x010F452C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F44C4:  74019FE5     LDR r0, [pc, 0x174]
		   0x010F44C8:  00009FE7     LDR r0, [pc, r0]
		   0x010F44CC:  239BF9EB     BL $-0x19936c
		   0x010F44D0:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x010F44D4:  00009FE7     LDR r0, [pc, r0]
		   0x010F44D8:  209BF9EB     BL $-0x199378
		   0x010F44DC:  64019FE5     LDR r0, [pc, 0x164]
		   0x010F44E0:  00009FE7     LDR r0, [pc, r0]
		   0x010F44E4:  1D9BF9EB     BL $-0x199384
		   0x010F44E8:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x010F44EC:  00009FE7     LDR r0, [pc, r0]
		   0x010F44F0:  1A9BF9EB     BL $-0x199390
		   0x010F44F4:  54019FE5     LDR r0, [pc, 0x154]
		   0x010F44F8:  00009FE7     LDR r0, [pc, r0]
		   0x010F44FC:  179BF9EB     BL $-0x19939c
		   0x010F4500:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x010F4504:  00009FE7     LDR r0, [pc, r0]
		   0x010F4508:  149BF9EB     BL $-0x1993a8
		   0x010F450C:  44019FE5     LDR r0, [pc, 0x144]
		   0x010F4510:  00009FE7     LDR r0, [pc, r0]
		   0x010F4514:  119BF9EB     BL $-0x1993b4
		   0x010F4518:  3C019FE5     LDR r0, [pc, 0x13c]
		   0x010F451C:  00009FE7     LDR r0, [pc, r0]
		   0x010F4520:  0E9BF9EB     BL $-0x1993c0
		   0x010F4524:  0100A0E3     MOV r0, 0x1
		   0x010F4528:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F452C:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x010F4530:  00009FE7     LDR r0, [pc, r0]
		   0x010F4534:  000090E5     LDR r0, [r0]
		   0x010F4538:  A19BF9EB     BL $-0x199174
		   0x010F453C:  0010A0E3     MOV r1, 0x0
		   0x010F4540:  0040A0E1     MOV r4, r0
		   0x010F4544:  0070A0E3     MOV r7, 0x0
		   0x010F4548:  A7837EEB     BL $+0x1fa0ea4  // CALL → Object..ctor
		   0x010F454C:  000054E3     CMPS r0, r4, 0x0
		   0x010F4550:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4558
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F4554:  9D9BF9EB     BL $-0x199184
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F4558:  145095E5     LDR r5, [r5, 0x14]
		   0x010F455C:  086084E5     STR r6, [r4, 0x8]
		   0x010F4560:  000055E3     CMPS r0, r5, 0x0
		   0x010F4564:  3200000A     BEQ $+0xd0  // if (==) goto 0x010F4634
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x010F4568:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x010F456C:  00009FE7     LDR r0, [pc, r0]
		   0x010F4570:  000090E5     LDR r0, [r0]
		   0x010F4574:  929BF9EB     BL $-0x1991b0
		   0x010F4578:  0060A0E1     MOV r6, r0
		   0x010F457C:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x010F4580:  0410A0E1     MOV r1, r4
		   0x010F4584:  0030A0E3     MOV r3, 0x0
		   0x010F4588:  00009FE7     LDR r0, [pc, r0]
		   0x010F458C:  002090E5     LDR r2, [r0]
		   0x010F4590:  0600A0E1     MOV r0, r6
		   0x010F4594:  3B6633EB     BL $+0xcd98f4  // CALL → Predicate<object>..ctor
		   0x010F4598:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x010F459C:  0610A0E1     MOV r1, r6
		   0x010F45A0:  00009FE7     LDR r0, [pc, r0]
		   0x010F45A4:  002090E5     LDR r2, [r0]
		   0x010F45A8:  0500A0E1     MOV r0, r5
		   0x010F45AC:  35FB6BEB     BL $+0x1afecdc  // CALL → List<object>.Find
		   0x010F45B0:  0170A0E3     MOV r7, 0x1
		   0x010F45B4:  000050E3     CMPS r0, r0, 0x0
		   0x010F45B8:  000088E5     STR r0, [r8]
		   0x010F45BC:  1C00001A     BNE $+0x78  // if (!=) goto 0x010F4634
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x010F45C0:  A8009FE5     LDR r0, [pc, 0xa8]
		   0x010F45C4:  0030A0E3     MOV r3, 0x0
		   0x010F45C8:  0070A0E3     MOV r7, 0x0
		   0x010F45CC:  00009FE7     LDR r0, [pc, r0]
		   0x010F45D0:  002090E5     LDR r2, [r0]
		   0x010F45D4:  98009FE5     LDR r0, [pc, 0x98]
		   0x010F45D8:  00009FE7     LDR r0, [pc, r0]
		   0x010F45DC:  081094E5     LDR r1, [r4, 0x8]
		   0x010F45E0:  000090E5     LDR r0, [r0]
		   0x010F45E4:  CF9276EB     BL $+0x1da4b44  // CALL → String.Concat
		   0x010F45E8:  0050A0E1     MOV r5, r0
		   0x010F45EC:  84009FE5     LDR r0, [pc, 0x84]
		   0x010F45F0:  00009FE7     LDR r0, [pc, r0]
		   0x010F45F4:  000090E5     LDR r0, [r0]
		   0x010F45F8:  719BF9EB     BL $-0x199234
		   0x010F45FC:  0510A0E1     MOV r1, r5
		   0x010F4600:  0020A0E3     MOV r2, 0x0
		   0x010F4604:  0040A0E1     MOV r4, r0
		   0x010F4608:  8B527EEB     BL $+0x1f94a34  // CALL → Exception..ctor
		   0x010F460C:  68009FE5     LDR r0, [pc, 0x68]
		   0x010F4610:  00009FE7     LDR r0, [pc, r0]
		   0x010F4614:  000090E5     LDR r0, [r0]
		   0x010F4618:  741090E5     LDR r1, [r0, 0x74]
		   0x010F461C:  000051E3     CMPS r0, r1, 0x0
		   0x010F4620:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4628
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F4624:  1A9BF9EB     BL $-0x199390
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F4628:  0400A0E1     MOV r0, r4
		   0x010F462C:  0010A0E3     MOV r1, 0x0
		   0x010F4630:  D50E3CEB     BL $+0xf03b5c  // CALL → sub_1FF818C
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x010F4634:  0700A0E1     MOV r0, r7
		   0x010F4638:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x010F463C:  5F781303     TSTSEQ r7, r3, 0x5f0000
		   0x010F4640:  C020F802     RSCSEQ r2, r8, 0xc0
		   0x010F4644:  1824F802     RSCSEQ r2, r8, 0x18000000
		   0x010F4648:  6850F802     RSCSEQ r5, r8, 0x68
		   0x010F464C:  284AF802     RSCSEQ r4, r8, 0x28000
		   0x010F4650:  5450F802     RSCSEQ r5, r8, 0x54
		   0x010F4654:  4C50F802     RSCSEQ r5, r8, 0x4c
		   0x010F4658:  4450F802     RSCSEQ r5, r8, 0x44
		   0x010F465C:  3C50F802     RSCSEQ r5, r8, 0x3c
		   0x010F4660:  2050F802     RSCSEQ r5, r8, 0x20
		   0x010F4664:  A849F802     RSCSEQ r4, r8, 0x2a0000
		   0x010F4668:  C44FF802     RSCSEQ r4, r8, 0x310
		   0x010F466C:  A84FF802     RSCSEQ r4, r8, 0x2a0
		   0x010F4670:  884FF802     RSCSEQ r4, r8, 0x220
		   0x010F4674:  804FF802     RSCSEQ r4, r8, 0x200
		   0x010F4678:  FC22F802     RSCSEQ r2, r8, 0xc000000f
		   0x010F467C:  781FF802     RSCSEQ r1, r8, 0x1e0
		*/
	}

	[CompilerGenerated]
	// RVA: 0x10F4688 Offset: 0x10F4688 VA: 0x10F4688
	private void <SetCurrentGoals>b__13_0(Goal g) {
		/* Disassembly (ARM32, 52 instructions, 0xD0 bytes):
		   // CFG: 12 blocks, 10 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4688:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x010F468C:  B8609FE5     LDR r6, [pc, 0xb8]
		   0x010F4690:  0040A0E1     MOV r4, r0
		   0x010F4694:  0150A0E1     MOV r5, r1
		   0x010F4698:  06608FE0     ADD r6, pc, r6
		   0x010F469C:  0000D6E5     LDRB r0, [r6]
		   0x010F46A0:  000050E3     CMPS r0, r0, 0x0
		   0x010F46A4:  0400001A     BNE $+0x18  // if (!=) goto 0x010F46BC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F46A8:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x010F46AC:  00009FE7     LDR r0, [pc, r0]
		   0x010F46B0:  AA9AF9EB     BL $-0x199550
		   0x010F46B4:  0100A0E3     MOV r0, 0x1
		   0x010F46B8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F46BC:  144094E5     LDR r4, [r4, 0x14]
		   0x010F46C0:  000055E3     CMPS r0, r5, 0x0
		   0x010F46C4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F46CC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F46C8:  409BF9EB     BL $-0x1992f8
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F46CC:  0500A0E1     MOV r0, r5
		   0x010F46D0:  9CE8FFEB     BL $-0x5d88
		   0x010F46D4:  0080A0E1     MOV r8, r0
		   0x010F46D8:  000054E3     CMPS r0, r4, 0x0
		   0x010F46DC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F46E4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x010F46E0:  3A9BF9EB     BL $-0x199310
		   // ──── Block 6 if (!=) ────────────────────
		   0x010F46E4:  100094E5     LDR r0, [r4, 0x10]
		   0x010F46E8:  086094E5     LDR r6, [r4, 0x8]
		   0x010F46EC:  0C7094E5     LDR r7, [r4, 0xc]
		   0x010F46F0:  010080E2     ADD r0, r0, 0x1
		   0x010F46F4:  58109FE5     LDR r1, [pc, 0x58]
		   0x010F46F8:  000056E3     CMPS r0, r6, 0x0
		   0x010F46FC:  01109FE7     LDR r1, [pc, r1]
		   0x010F4700:  100084E5     STR r0, [r4, 0x10]
		   0x010F4704:  005091E5     LDR r5, [r1]
		   0x010F4708:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4710
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x010F470C:  2F9BF9EB     BL $-0x19933c
		   // ──── Block 8 if (!=) ────────────────────
		   0x010F4710:  0C0096E5     LDR r0, [r6, 0xc]
		   0x010F4714:  000057E1     CMPS r0, r7, r0
		   0x010F4718:  0400002A     BHS $+0x18  // if (>= (unsigned)) goto 0x010F4730
		   // 
		   // ──── Block 9 else (< (unsigned)) ────────────────────
		   0x010F471C:  010087E2     ADD r0, r7, 0x1
		   0x010F4720:  0C0084E5     STR r0, [r4, 0xc]
		   0x010F4724:  070186E0     ADD r0, r6, r7, lsl 2
		   0x010F4728:  108080E5     STR r8, [r0, 0x10]
		   0x010F472C:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   // ──── Block 10 if (>= (unsigned)) ────────────────────
		   0x010F4730:  100095E5     LDR r0, [r5, 0x10]
		   0x010F4734:  0810A0E1     MOV r1, r8
		   0x010F4738:  600090E5     LDR r0, [r0, 0x60]
		   0x010F473C:  382090E5     LDR r2, [r0, 0x38]
		   0x010F4740:  0400A0E1     MOV r0, r4
		   0x010F4744:  F041BDE8     POP {r4, r5, r6, r7, r8, lr}
		   0x010F4748:  1BF96BEA     B $+0x1afe474  // TAIL CALL → List<object>.AddWithResize
		   0x010F474C:  7C761303     TSTSEQ r7, r3, 0x7c00000
		   0x010F4750:  B04EF802     RSCSEQ r4, r8, 0xb00
		   0x010F4754:  604EF802     RSCSEQ r4, r8, 0x600
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 1207
{

	// Fields
	public static readonly GoalsController.<>c <>9; // 0x0
	public static Predicate<Goal> <>9__9_0; // 0x4
	public static Comparison<GoalTarget> <>9__14_1; // 0x8
	public static Comparison<Goal> <>9__14_0; // 0xC

	// Methods

	// RVA: 0x10F4758 Offset: 0x10F4758 VA: 0x10F4758
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4758:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F475C:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x010F4760:  04408FE0     ADD r4, pc, r4
		   0x010F4764:  0000D4E5     LDRB r0, [r4]
		   0x010F4768:  000050E3     CMPS r0, r0, 0x0
		   0x010F476C:  0400001A     BNE $+0x18  // if (!=) goto 0x010F4784
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F4770:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x010F4774:  00009FE7     LDR r0, [pc, r0]
		   0x010F4778:  789AF9EB     BL $-0x199618
		   0x010F477C:  0100A0E3     MOV r0, 0x1
		   0x010F4780:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F4784:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x010F4788:  05509FE7     LDR r5, [pc, r5]
		   0x010F478C:  000095E5     LDR r0, [r5]
		   0x010F4790:  0B9BF9EB     BL $-0x1993cc
		   0x010F4794:  0010A0E3     MOV r1, 0x0
		   0x010F4798:  0040A0E1     MOV r4, r0
		   0x010F479C:  12837EEB     BL $+0x1fa0c50  // CALL → Object..ctor
		   0x010F47A0:  000095E5     LDR r0, [r5]
		   0x010F47A4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x010F47A8:  004080E5     STR r4, [r0]
		   0x010F47AC:  3088BDE8     POP {r4, r5, fp, pc}
		   0x010F47B0:  B5751303     TSTSEQ r7, r3, 0x2d400000
		   0x010F47B4:  784DF802     RSCSEQ r4, r8, 0x1e00
		   0x010F47B8:  644DF802     RSCSEQ r4, r8, 0x1900
		*/
	}

	// RVA: 0x10F47BC Offset: 0x10F47BC VA: 0x10F47BC
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F47BC:  0010A0E3     MOV r1, 0x0
		   0x010F47C0:  09837EEA     B $+0x1fa0c2c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F47C4 Offset: 0x10F47C4 VA: 0x10F47C4
	internal bool <get_AllGoalsReady>b__9_0(Goal g) {
		/* Disassembly (ARM32, 20 instructions, 0x50 bytes):
		   // CFG: 7 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F47C4:  10402DE9     PUSH {r4, lr}
		   0x010F47C8:  0140A0E1     MOV r4, r1
		   0x010F47CC:  000051E3     CMPS r0, r1, 0x0
		   0x010F47D0:  0400000A     BEQ $+0x18  // if (==) goto 0x010F47E8
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x010F47D4:  0400A0E1     MOV r0, r4
		   0x010F47D8:  3DF0FFEB     BL $-0x3f04
		   0x010F47DC:  000050E3     CMPS r0, r0, 0x0
		   0x010F47E0:  0500001A     BNE $+0x1c  // if (!=) goto 0x010F47FC
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x010F47E4:  070000EA     B $+0x24  // goto 0x010F4808
		   // ──── Block 3 if (==) ────────────────────
		   0x010F47E8:  F89AF9EB     BL $-0x199418
		   0x010F47EC:  0000A0E3     MOV r0, 0x0
		   0x010F47F0:  37F0FFEB     BL $-0x3f1c
		   0x010F47F4:  000050E3     CMPS r0, r0, 0x0
		   0x010F47F8:  0100000A     BEQ $+0xc  // if (==) goto 0x010F4804
		   // 
		   // ──── Block 4 (from 2 paths) ──────────────────
		   0x010F47FC:  0100A0E3     MOV r0, 0x1
		   0x010F4800:  1080BDE8     POP {r4, pc}
		   // ──── Block 5 if (==) ────────────────────
		   0x010F4804:  F19AF9EB     BL $-0x199434
		   // ──── Block 6 ──────────────────────────────
		   0x010F4808:  0400A0E1     MOV r0, r4
		   0x010F480C:  1040BDE8     POP {r4, lr}
		   0x010F4810:  80F9FFEA     B $-0x19f8
		*/
	}

	// RVA: 0x10F4814 Offset: 0x10F4814 VA: 0x10F4814
	internal int <UpdateGoals>b__14_1(GoalTarget a, GoalTarget b) {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4814:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F4818:  08D04DE2     SUB sp, sp, 0x8
		   0x010F481C:  0000A0E3     MOV r0, 0x0
		   0x010F4820:  0250A0E1     MOV r5, r2
		   0x010F4824:  0140A0E1     MOV r4, r1
		   0x010F4828:  000052E3     CMPS r0, r2, 0x0
		   0x010F482C:  04008DE5     STR r0, [sp, 0x4]
		   0x010F4830:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4838
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F4834:  E59AF9EB     BL $-0x199464
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F4838:  0500A0E1     MOV r0, r5
		   0x010F483C:  0010A0E3     MOV r1, 0x0
		   0x010F4840:  F78910EB     BL $+0x4227e4  // CALL → GoalTarget.get_Weight
		   0x010F4844:  000054E3     CMPS r0, r4, 0x0
		   0x010F4848:  04008DE5     STR r0, [sp, 0x4]
		   0x010F484C:  0000001A     BNE $+0x8  // if (!=) goto 0x010F4854
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F4850:  DE9AF9EB     BL $-0x199480
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F4854:  0400A0E1     MOV r0, r4
		   0x010F4858:  0010A0E3     MOV r1, 0x0
		   0x010F485C:  F08910EB     BL $+0x4227c8  // CALL → GoalTarget.get_Weight
		   0x010F4860:  0010A0E1     MOV r1, r0
		   0x010F4864:  04008DE2     ADD r0, sp, 0x4
		   0x010F4868:  0020A0E3     MOV r2, 0x0
		   0x010F486C:  CB3E7DEB     BL $+0x1f4fb34  // CALL → Int32.CompareTo
		   0x010F4870:  08D08DE2     ADD sp, sp, 0x8
		   0x010F4874:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x10F4878 Offset: 0x10F4878 VA: 0x10F4878
	internal int <UpdateGoals>b__14_0(Goal a, Goal b) {
		/* Disassembly (ARM32, 23 instructions, 0x5C bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F4878:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F487C:  08D04DE2     SUB sp, sp, 0x8
		   0x010F4880:  0000A0E3     MOV r0, 0x0
		   0x010F4884:  0250A0E1     MOV r5, r2
		   0x010F4888:  0140A0E1     MOV r4, r1
		   0x010F488C:  000052E3     CMPS r0, r2, 0x0
		   0x010F4890:  04008DE5     STR r0, [sp, 0x4]
		   0x010F4894:  0000001A     BNE $+0x8  // if (!=) goto 0x010F489C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F4898:  CC9AF9EB     BL $-0x1994c8
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F489C:  0500A0E1     MOV r0, r5
		   0x010F48A0:  A7F9FFEB     BL $-0x195c
		   0x010F48A4:  000054E3     CMPS r0, r4, 0x0
		   0x010F48A8:  04008DE5     STR r0, [sp, 0x4]
		   0x010F48AC:  0000001A     BNE $+0x8  // if (!=) goto 0x010F48B4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x010F48B0:  C69AF9EB     BL $-0x1994e0
		   // ──── Block 4 if (!=) ────────────────────
		   0x010F48B4:  0400A0E1     MOV r0, r4
		   0x010F48B8:  A1F9FFEB     BL $-0x1974
		   0x010F48BC:  0010A0E1     MOV r1, r0
		   0x010F48C0:  04008DE2     ADD r0, sp, 0x4
		   0x010F48C4:  0020A0E3     MOV r2, 0x0
		   0x010F48C8:  B43E7DEB     BL $+0x1f4fad8  // CALL → Int32.CompareTo
		   0x010F48CC:  08D08DE2     ADD sp, sp, 0x8
		   0x010F48D0:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass16_0 // TypeDefIndex: 1208
{

	// Fields
	public string goalId; // 0x8

	// Methods

	// RVA: 0x10F4680 Offset: 0x10F4680 VA: 0x10F4680
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x010F4680:  0010A0E3     MOV r1, 0x0
		   0x010F4684:  58837EEA     B $+0x1fa0d68  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x10F48D4 Offset: 0x10F48D4 VA: 0x10F48D4
	internal bool <HasValidGoal>b__0(Goal g) {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x010F48D4:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x010F48D8:  0140A0E1     MOV r4, r1
		   0x010F48DC:  0050A0E1     MOV r5, r0
		   0x010F48E0:  000051E3     CMPS r0, r1, 0x0
		   0x010F48E4:  0000001A     BNE $+0x8  // if (!=) goto 0x010F48EC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x010F48E8:  B89AF9EB     BL $-0x199518
		   // ──── Block 2 if (!=) ────────────────────
		   0x010F48EC:  081095E5     LDR r1, [r5, 0x8]
		   0x010F48F0:  0020A0E3     MOV r2, 0x0
		   0x010F48F4:  080094E5     LDR r0, [r4, 0x8]
		   0x010F48F8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x010F48FC:  434876EA     B $+0x1d92114  // TAIL CALL → String.op_Equality
		*/
	}
}
