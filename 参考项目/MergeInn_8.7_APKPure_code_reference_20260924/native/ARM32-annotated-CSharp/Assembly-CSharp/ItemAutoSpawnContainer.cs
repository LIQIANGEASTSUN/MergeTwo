// Dll : Assembly-CSharp.dll
// Namespace: 
public class ItemAutoSpawnContainer : ItemContainer // TypeDefIndex: 1298
{

	// Fields
	private const float SPAWN_PERIOD_TIME = 0.2;
	private const float AUTO_SPAWN_START_DELAY = 0.5;
	[SerializeField]
	private SpawnEffect spawnEffect; // 0x104
	private Tween startDelayTween; // 0x108
	private Tween spawnTween; // 0x10C
	private Sequence spawnAnimSequence; // 0x110
	private Tween scaleTween; // 0x114

	// Methods

	// RVA: 0x110D97C Offset: 0x110D97C VA: 0x110D97C Slot: 51
	public override void Restore() {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D97C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110D980:  0040A0E1     MOV r4, r0
		   0x0110D984:  270F00EB     BL $+0x3ca4  // CALL → ItemContainer.RestoreTimer
		   0x0110D988:  841094E5     LDR r1, [r4, 0x84]
		   0x0110D98C:  0400A0E1     MOV r0, r4
		   0x0110D990:  170000EB     BL $+0x64  // CALL → ItemAutoSpawnContainer.StartAutoSpawn
		   0x0110D994:  945094E5     LDR r5, [r4, 0x94]
		   0x0110D998:  000055E3     CMPS r0, r5, 0x0
		   0x0110D99C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D9A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110D9A0:  8A36F9EB     BL $-0x1b25d0
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110D9A4:  0500A0E1     MOV r0, r5
		   0x0110D9A8:  0010A0E3     MOV r1, 0x0
		   0x0110D9AC:  785010EB     BL $+0x4141e8  // CALL → SparklesEffect.Hide
		   0x0110D9B0:  EC5094E5     LDR r5, [r4, 0xec]
		   0x0110D9B4:  000055E3     CMPS r0, r5, 0x0
		   0x0110D9B8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D9C0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110D9BC:  8336F9EB     BL $-0x1b25ec
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110D9C0:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0110D9C4:  010050E3     CMPS r0, r0, 0x1
		   0x0110D9C8:  070000BA     BLT $+0x24  // if (<) goto 0x0110D9EC
		   // 
		   // ──── Block 5 else (>=) ────────────────────
		   0x0110D9CC:  944094E5     LDR r4, [r4, 0x94]
		   0x0110D9D0:  000054E3     CMPS r0, r4, 0x0
		   0x0110D9D4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110D9DC
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110D9D8:  7C36F9EB     BL $-0x1b2608
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110D9DC:  0400A0E1     MOV r0, r4
		   0x0110D9E0:  0010A0E3     MOV r1, 0x0
		   0x0110D9E4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110D9E8:  295010EA     B $+0x4140ac  // TAIL CALL → SparklesEffect.Show
		   // ──── Block 8 if (<) ────────────────────
		   0x0110D9EC:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x110DB28 Offset: 0x110DB28 VA: 0x110DB28 Slot: 14
	public override void Select(bool withAnim, Vector2 delta) {
		/* Disassembly (ARM32, 215 instructions, 0x35C bytes):
		   // CFG: 45 blocks, 48 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110DB28:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110DB2C:  14D04DE2     SUB sp, sp, 0x14
		   0x0110DB30:  18539FE5     LDR r5, [pc, 0x318]
		   0x0110DB34:  0040A0E1     MOV r4, r0
		   0x0110DB38:  0380A0E1     MOV r8, r3
		   0x0110DB3C:  0290A0E1     MOV sb, r2
		   0x0110DB40:  05508FE0     ADD r5, pc, r5
		   0x0110DB44:  0170A0E1     MOV r7, r1
		   0x0110DB48:  0000D5E5     LDRB r0, [r5]
		   0x0110DB4C:  000050E3     CMPS r0, r0, 0x0
		   0x0110DB50:  1000001A     BNE $+0x48  // if (!=) goto 0x0110DB98
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110DB54:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x0110DB58:  00009FE7     LDR r0, [pc, r0]
		   0x0110DB5C:  7F35F9EB     BL $-0x1b29fc
		   0x0110DB60:  F0029FE5     LDR r0, [pc, 0x2f0]
		   0x0110DB64:  00009FE7     LDR r0, [pc, r0]
		   0x0110DB68:  7C35F9EB     BL $-0x1b2a08
		   0x0110DB6C:  E8029FE5     LDR r0, [pc, 0x2e8]
		   0x0110DB70:  00009FE7     LDR r0, [pc, r0]
		   0x0110DB74:  7935F9EB     BL $-0x1b2a14
		   0x0110DB78:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x0110DB7C:  00009FE7     LDR r0, [pc, r0]
		   0x0110DB80:  7635F9EB     BL $-0x1b2a20
		   0x0110DB84:  D8029FE5     LDR r0, [pc, 0x2d8]
		   0x0110DB88:  00009FE7     LDR r0, [pc, r0]
		   0x0110DB8C:  7335F9EB     BL $-0x1b2a2c
		   0x0110DB90:  0100A0E3     MOV r0, 0x1
		   0x0110DB94:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110DB98:  0400A0E1     MOV r0, r4
		   0x0110DB9C:  0710A0E1     MOV r1, r7
		   0x0110DBA0:  3160D4E5     LDRB r6, [r4, 0x31]
		   0x0110DBA4:  A3F5FFEB     BL $-0x296c
		   0x0110DBA8:  B8B29FE5     LDR fp, [pc, 0x2b8]
		   0x0110DBAC:  0BB09FE7     LDR fp, [pc, fp]
		   0x0110DBB0:  00009BE5     LDR r0, [fp]
		   0x0110DBB4:  741090E5     LDR r1, [r0, 0x74]
		   0x0110DBB8:  000051E3     CMPS r0, r1, 0x0
		   0x0110DBBC:  0100001A     BNE $+0xc  // if (!=) goto 0x0110DBC8
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110DBC0:  B335F9EB     BL $-0x1b292c
		   0x0110DBC4:  00009BE5     LDR r0, [fp]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110DBC8:  9CA29FE5     LDR r10, [pc, 0x29c]
		   0x0110DBCC:  0AA09FE7     LDR r10, [pc, r10]
		   0x0110DBD0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110DBD4:  00109AE5     LDR r1, [r10]
		   0x0110DBD8:  0C5090E5     LDR r5, [r0, 0xc]
		   0x0110DBDC:  742091E5     LDR r2, [r1, 0x74]
		   0x0110DBE0:  000052E3     CMPS r0, r2, 0x0
		   0x0110DBE4:  0100001A     BNE $+0xc  // if (!=) goto 0x0110DBF0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110DBE8:  0100A0E1     MOV r0, r1
		   0x0110DBEC:  A835F9EB     BL $-0x1b2958
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110DBF0:  0500A0E1     MOV r0, r5
		   0x0110DBF4:  FE15A0E3     MOV r1, 0x3f800000
		   0x0110DBF8:  0020A0E3     MOV r2, 0x0
		   0x0110DBFC:  984303EB     BL $+0xd0e68  // CALL → SoundController.PlaySound
		   0x0110DC00:  000056E3     CMPS r0, r6, 0x0
		   0x0110DC04:  01600013     MOVNE r6, 0x1
		   0x0110DC08:  075006E0     AND r5, r6, r7
		   0x0110DC0C:  010055E3     CMPS r0, r5, 0x1
		   0x0110DC10:  1000001A     BNE $+0x48  // if (!=) goto 0x0110DC58
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110DC14:  EC6094E5     LDR r6, [r4, 0xec]
		   0x0110DC18:  000056E3     CMPS r0, r6, 0x0
		   0x0110DC1C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DC24
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110DC20:  EA35F9EB     BL $-0x1b2850
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110DC24:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110DC28:  010050E3     CMPS r0, r0, 0x1
		   0x0110DC2C:  090000BA     BLT $+0x2c  // if (<) goto 0x0110DC58
		   // 
		   // ──── Block 10 else (>=) ────────────────────
		   0x0110DC30:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x0110DC34:  000050E3     CMPS r0, r0, 0x0
		   0x0110DC38:  0600001A     BNE $+0x20  // if (!=) goto 0x0110DC58
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110DC3C:  846094E5     LDR r6, [r4, 0x84]
		   0x0110DC40:  000056E3     CMPS r0, r6, 0x0
		   0x0110DC44:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DC4C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x0110DC48:  E035F9EB     BL $-0x1b2878
		   // ──── Block 13 if (!=) ────────────────────
		   0x0110DC4C:  7400D6E5     LDRB r0, [r6, 0x74]
		   0x0110DC50:  000050E3     CMPS r0, r0, 0x0
		   0x0110DC54:  2A00000A     BEQ $+0xb0  // if (==) goto 0x0110DD04
		   // 
		   // ──── Block 14 (from 4 paths) ──────────────────
		   0x0110DC58:  EC6094E5     LDR r6, [r4, 0xec]
		   0x0110DC5C:  000056E3     CMPS r0, r6, 0x0
		   0x0110DC60:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DC68
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x0110DC64:  D935F9EB     BL $-0x1b2894
		   // ──── Block 16 if (!=) ────────────────────
		   0x0110DC68:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110DC6C:  000050E3     CMPS r0, r0, 0x0
		   0x0110DC70:  740000CA     BGT $+0x1d8  // if (>) goto 0x0110DE48
		   // 
		   // ──── Block 17 else (<=) ────────────────────
		   0x0110DC74:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x0110DC78:  000050E3     CMPS r0, r0, 0x0
		   0x0110DC7C:  7100001A     BNE $+0x1cc  // if (!=) goto 0x0110DE48
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x0110DC80:  844094E5     LDR r4, [r4, 0x84]
		   0x0110DC84:  000054E3     CMPS r0, r4, 0x0
		   0x0110DC88:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DC90
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0110DC8C:  CF35F9EB     BL $-0x1b28bc
		   // ──── Block 20 if (!=) ────────────────────
		   0x0110DC90:  7400D4E5     LDRB r0, [r4, 0x74]
		   0x0110DC94:  011025E2     EOR r1, r5, 0x1
		   0x0110DC98:  000050E3     CMPS r0, r0, 0x0
		   0x0110DC9C:  01000013     MOVNE r0, 0x1
		   0x0110DCA0:  000091E1     ORRS r0, r1, r0
		   0x0110DCA4:  6700001A     BNE $+0x1a4  // if (!=) goto 0x0110DE48
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0110DCA8:  00009BE5     LDR r0, [fp]
		   0x0110DCAC:  741090E5     LDR r1, [r0, 0x74]
		   0x0110DCB0:  000051E3     CMPS r0, r1, 0x0
		   0x0110DCB4:  0100001A     BNE $+0xc  // if (!=) goto 0x0110DCC0
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x0110DCB8:  7535F9EB     BL $-0x1b2a24
		   0x0110DCBC:  00009BE5     LDR r0, [fp]
		   // ──── Block 23 if (!=) ────────────────────
		   0x0110DCC0:  00109AE5     LDR r1, [r10]
		   0x0110DCC4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110DCC8:  742091E5     LDR r2, [r1, 0x74]
		   0x0110DCCC:  0C4090E5     LDR r4, [r0, 0xc]
		   0x0110DCD0:  000052E3     CMPS r0, r2, 0x0
		   0x0110DCD4:  0100001A     BNE $+0xc  // if (!=) goto 0x0110DCE0
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x0110DCD8:  0100A0E1     MOV r0, r1
		   0x0110DCDC:  6C35F9EB     BL $-0x1b2a48
		   // ──── Block 25 if (!=) ────────────────────
		   0x0110DCE0:  0400A0E1     MOV r0, r4
		   0x0110DCE4:  FE15A0E3     MOV r1, 0x3f800000
		   0x0110DCE8:  0020A0E3     MOV r2, 0x0
		   0x0110DCEC:  5C4303EB     BL $+0xd0d78  // CALL → SoundController.PlaySound
		   0x0110DCF0:  0100A0E3     MOV r0, 0x1
		   0x0110DCF4:  0010A0E3     MOV r1, 0x0
		   0x0110DCF8:  14D08DE2     ADD sp, sp, 0x14
		   0x0110DCFC:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110DD00:  ABC3FDEA     B $-0x8f14c
		   // ──── Block 26 if (==) ────────────────────
		   0x0110DD04:  445094E5     LDR r5, [r4, 0x44]
		   0x0110DD08:  107094E5     LDR r7, [r4, 0x10]
		   0x0110DD0C:  000055E3     CMPS r0, r5, 0x0
		   0x0110DD10:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DD18
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x0110DD14:  AD35F9EB     BL $-0x1b2944
		   // ──── Block 28 if (!=) ────────────────────
		   0x0110DD18:  0C6095E5     LDR r6, [r5, 0xc]
		   0x0110DD1C:  0820A0E1     MOV r2, r8
		   0x0110DD20:  200095E5     LDR r0, [r5, 0x20]
		   0x0110DD24:  0730A0E1     MOV r3, r7
		   0x0110DD28:  141095E5     LDR r1, [r5, 0x14]
		   0x0110DD2C:  00108DE5     STR r1, [sp]
		   0x0110DD30:  0910A0E1     MOV r1, sb
		   0x0110DD34:  36FF2FE1     BLX r6  // virtual call: Item.ToString
		   0x0110DD38:  0050A0E1     MOV r5, r0
		   0x0110DD3C:  2C019FE5     LDR r0, [pc, 0x12c]
		   0x0110DD40:  00009FE7     LDR r0, [pc, r0]
		   0x0110DD44:  000090E5     LDR r0, [r0]
		   0x0110DD48:  741090E5     LDR r1, [r0, 0x74]
		   0x0110DD4C:  000051E3     CMPS r0, r1, 0x0
		   0x0110DD50:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DD58
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x0110DD54:  4E35F9EB     BL $-0x1b2ac0
		   // ──── Block 30 if (!=) ────────────────────
		   0x0110DD58:  0500A0E1     MOV r0, r5
		   0x0110DD5C:  0010A0E3     MOV r1, 0x0
		   0x0110DD60:  25A93BEB     BL $+0xeea49c  // CALL → sub_1FF81FC
		   0x0110DD64:  000050E3     CMPS r0, r0, 0x0
		   0x0110DD68:  0500000A     BEQ $+0x1c  // if (==) goto 0x0110DD84
		   // 
		   // ──── Block 31 else (!=) ────────────────────
		   0x0110DD6C:  0400A0E1     MOV r0, r4
		   0x0110DD70:  0510A0E1     MOV r1, r5
		   0x0110DD74:  0120A0E3     MOV r2, 0x1
		   0x0110DD78:  14D08DE2     ADD sp, sp, 0x14
		   0x0110DD7C:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0110DD80:  3F0000EA     B $+0x104  // TAIL CALL → ItemAutoSpawnContainer.Spawn
		   // ──── Block 32 if (==) ────────────────────
		   0x0110DD84:  E8409FE5     LDR r4, [pc, 0xe8]
		   0x0110DD88:  04409FE7     LDR r4, [pc, r4]
		   0x0110DD8C:  000094E5     LDR r0, [r4]
		   0x0110DD90:  741090E5     LDR r1, [r0, 0x74]
		   0x0110DD94:  000051E3     CMPS r0, r1, 0x0
		   0x0110DD98:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DDA0
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x0110DD9C:  3C35F9EB     BL $-0x1b2b08
		   // ──── Block 34 if (!=) ────────────────────
		   0x0110DDA0:  D0509FE5     LDR r5, [pc, 0xd0]
		   0x0110DDA4:  05508FE0     ADD r5, pc, r5
		   0x0110DDA8:  0000D5E5     LDRB r0, [r5]
		   0x0110DDAC:  000050E3     CMPS r0, r0, 0x0
		   0x0110DDB0:  0400001A     BNE $+0x18  // if (!=) goto 0x0110DDC8
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x0110DDB4:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x0110DDB8:  00009FE7     LDR r0, [pc, r0]
		   0x0110DDBC:  E734F9EB     BL $-0x1b2c5c
		   0x0110DDC0:  0100A0E3     MOV r0, 0x1
		   0x0110DDC4:  0000C5E5     STRB r0, [r5]
		   // ──── Block 36 if (!=) ────────────────────
		   0x0110DDC8:  000094E5     LDR r0, [r4]
		   0x0110DDCC:  741090E5     LDR r1, [r0, 0x74]
		   0x0110DDD0:  000051E3     CMPS r0, r1, 0x0
		   0x0110DDD4:  0100001A     BNE $+0xc  // if (!=) goto 0x0110DDE0
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x0110DDD8:  2D35F9EB     BL $-0x1b2b44
		   0x0110DDDC:  000094E5     LDR r0, [r4]
		   // ──── Block 38 if (!=) ────────────────────
		   0x0110DDE0:  98109FE5     LDR r1, [pc, 0x98]
		   0x0110DDE4:  01109FE7     LDR r1, [pc, r1]
		   0x0110DDE8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110DDEC:  001091E5     LDR r1, [r1]
		   0x0110DDF0:  044090E5     LDR r4, [r0, 0x4]
		   0x0110DDF4:  742091E5     LDR r2, [r1, 0x74]
		   0x0110DDF8:  000052E3     CMPS r0, r2, 0x0
		   0x0110DDFC:  0100001A     BNE $+0xc  // if (!=) goto 0x0110DE08
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x0110DE00:  0100A0E1     MOV r0, r1
		   0x0110DE04:  2235F9EB     BL $-0x1b2b70
		   // ──── Block 40 if (!=) ────────────────────
		   0x0110DE08:  08008DE2     ADD r0, sp, 0x8
		   0x0110DE0C:  0010A0E3     MOV r1, 0x0
		   0x0110DE10:  0080A0E3     MOV r8, 0x0
		   0x0110DE14:  524DFDEB     BL $-0xacab0
		   0x0110DE18:  08708DE2     ADD r7, sp, 0x8
		   0x0110DE1C:  000054E3     CMPS r0, r4, 0x0
		   0x0110DE20:  E00097E8     LDM r7, {r5, r6, r7}
		   0x0110DE24:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DE2C
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x0110DE28:  6835F9EB     BL $-0x1b2a58
		   // ──── Block 42 if (!=) ────────────────────
		   0x0110DE2C:  0400A0E1     MOV r0, r4
		   0x0110DE30:  0510A0E1     MOV r1, r5
		   0x0110DE34:  0620A0E1     MOV r2, r6
		   0x0110DE38:  0730A0E1     MOV r3, r7
		   0x0110DE3C:  00808DE5     STR r8, [sp]
		   0x0110DE40:  04808DE5     STR r8, [sp, 0x4]
		   0x0110DE44:  E58209EB     BL $+0x260b9c  // CALL → UIPoppingAlert.ShowMessage
		   // ──── Block 43 (from 3 paths) ──────────────────
		   0x0110DE48:  14D08DE2     ADD sp, sp, 0x14
		   0x0110DE4C:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x0110DE50:  C2E21103     TSTSEQ lr, r1, 0x2000000c
		   0x0110DE54:  5C96F602     RSCSEQ sb, r6, 0x5c00000
		   0x0110DE58:  D489F602     RSCSEQ r8, r6, 0x350000
		   0x0110DE5C:  D0ABF602     RSCSEQ r10, r6, 0x34000
		   0x0110DE60:  C8ABF602     RSCSEQ r10, r6, 0x32000
		   0x0110DE64:  D8B7F602     RSCSEQ fp, r6, 0x3600000
		   0x0110DE68:  98ABF602     RSCSEQ r10, r6, 0x26000
		   0x0110DE6C:  74ABF602     RSCSEQ r10, r6, 0x1d000
		   0x0110DE70:  F887F602     RSCSEQ r8, r6, 0x3e00000
		   0x0110DE74:  D8B5F602     RSCSEQ fp, r6, 0x36000000
		   0x0110DE78:  3EDF1103     TSTSEQ sp, r1, 0xf8
		   0x0110DE7C:  A8B5F602     RSCSEQ fp, r6, 0x2a000000
		   0x0110DE80:  D093F602     RSCSEQ sb, r6, 0x40000003
		*/
	}

	// RVA: 0x110E160 Offset: 0x110E160 VA: 0x110E160 Slot: 12
	public override void SetLockedState(bool locked) {
		/* Disassembly (ARM32, 67 instructions, 0x10C bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E160:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110E164:  EC609FE5     LDR r6, [pc, 0xec]
		   0x0110E168:  0040A0E1     MOV r4, r0
		   0x0110E16C:  0150A0E1     MOV r5, r1
		   0x0110E170:  06608FE0     ADD r6, pc, r6
		   0x0110E174:  0000D6E5     LDRB r0, [r6]
		   0x0110E178:  000050E3     CMPS r0, r0, 0x0
		   0x0110E17C:  0700001A     BNE $+0x24  // if (!=) goto 0x0110E1A0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E180:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x0110E184:  00009FE7     LDR r0, [pc, r0]
		   0x0110E188:  F433F9EB     BL $-0x1b3028
		   0x0110E18C:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x0110E190:  00009FE7     LDR r0, [pc, r0]
		   0x0110E194:  F133F9EB     BL $-0x1b3034
		   0x0110E198:  0100A0E3     MOV r0, 0x1
		   0x0110E19C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E1A0:  0400A0E1     MOV r0, r4
		   0x0110E1A4:  0510A0E1     MOV r1, r5
		   0x0110E1A8:  C6F3FFEB     BL $-0x30e0
		   0x0110E1AC:  000094E5     LDR r0, [r4]
		   0x0110E1B0:  0510A0E1     MOV r1, r5
		   0x0110E1B4:  403290E5     LDR r3, [r0, 0x240]
		   0x0110E1B8:  442290E5     LDR r2, [r0, 0x244]
		   0x0110E1BC:  0400A0E1     MOV r0, r4
		   0x0110E1C0:  33FF2FE1     BLX r3  // virtual call: vtable+0x240
		   0x0110E1C4:  000055E3     CMPS r0, r5, 0x0
		   0x0110E1C8:  1D00001A     BNE $+0x7c  // if (!=) goto 0x0110E244
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110E1CC:  EC5094E5     LDR r5, [r4, 0xec]
		   0x0110E1D0:  000055E3     CMPS r0, r5, 0x0
		   0x0110E1D4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E1DC
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110E1D8:  7C34F9EB     BL $-0x1b2e08
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110E1DC:  0C0095E5     LDR r0, [r5, 0xc]
		   0x0110E1E0:  010050E3     CMPS r0, r0, 0x1
		   0x0110E1E4:  160000BA     BLT $+0x60  // if (<) goto 0x0110E244
		   // 
		   // ──── Block 6 else (>=) ────────────────────
		   0x0110E1E8:  080194E5     LDR r0, [r4, 0x108]
		   0x0110E1EC:  0010A0E3     MOV r1, 0x0
		   0x0110E1F0:  0020A0E3     MOV r2, 0x0
		   0x0110E1F4:  74A00FEB     BL $+0x3e81d8  // CALL → ExtensionMethods.SafeKill
		   0x0110E1F8:  64009FE5     LDR r0, [pc, 0x64]
		   0x0110E1FC:  00009FE7     LDR r0, [pc, r0]
		   0x0110E200:  000090E5     LDR r0, [r0]
		   0x0110E204:  6E34F9EB     BL $-0x1b2e40
		   0x0110E208:  0050A0E1     MOV r5, r0
		   0x0110E20C:  54009FE5     LDR r0, [pc, 0x54]
		   0x0110E210:  0410A0E1     MOV r1, r4
		   0x0110E214:  0030A0E3     MOV r3, 0x0
		   0x0110E218:  00009FE7     LDR r0, [pc, r0]
		   0x0110E21C:  002090E5     LDR r2, [r0]
		   0x0110E220:  0500A0E1     MOV r0, r5
		   0x0110E224:  32CB11EB     BL $+0x472cd0  // CALL → TweenCallback..ctor
		   0x0110E228:  3F04A0E3     MOV r0, 0x3f000000
		   0x0110E22C:  0510A0E1     MOV r1, r5
		   0x0110E230:  0120A0E3     MOV r2, 0x1
		   0x0110E234:  0030A0E3     MOV r3, 0x0
		   0x0110E238:  92E411EB     BL $+0x479250  // CALL → DOVirtual.DelayedCall
		   0x0110E23C:  080184E5     STR r0, [r4, 0x108]
		   0x0110E240:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x0110E244:  0C0194E5     LDR r0, [r4, 0x10c]
		   0x0110E248:  0010A0E3     MOV r1, 0x0
		   0x0110E24C:  0020A0E3     MOV r2, 0x0
		   0x0110E250:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110E254:  5CA00FEA     B $+0x3e8178  // TAIL CALL → ExtensionMethods.SafeKill
		   0x0110E258:  93DC1103     TSTSEQ sp, r1, 0x9300
		   0x0110E25C:  E8B7F602     RSCSEQ fp, r6, 0x3a00000
		   0x0110E260:  1C95F602     RSCSEQ sb, r6, 0x7000000
		   0x0110E264:  B094F602     RSCSEQ sb, r6, 0xb0000000
		   0x0110E268:  54B7F602     RSCSEQ fp, r6, 0x1500000
		*/
	}

	// RVA: 0x110E298 Offset: 0x110E298 VA: 0x110E298 Slot: 11
	public override void SetActiveBubble(bool isActive, int timer, Action createCoin) {
		/* Disassembly (ARM32, 18 instructions, 0x48 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E298:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110E29C:  08D04DE2     SUB sp, sp, 0x8
		   0x0110E2A0:  0150A0E1     MOV r5, r1
		   0x0110E2A4:  0040A0E1     MOV r4, r0
		   0x0110E2A8:  0C0000EB     BL $+0x38  // CALL → ItemContainer.SetActiveBubble
		   0x0110E2AC:  000055E3     CMPS r0, r5, 0x0
		   0x0110E2B0:  0500000A     BEQ $+0x1c  // if (==) goto 0x0110E2CC
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110E2B4:  0C0194E5     LDR r0, [r4, 0x10c]
		   0x0110E2B8:  0010A0E3     MOV r1, 0x0
		   0x0110E2BC:  0020A0E3     MOV r2, 0x0
		   0x0110E2C0:  08D08DE2     ADD sp, sp, 0x8
		   0x0110E2C4:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E2C8:  3FA00FEA     B $+0x3e8104  // TAIL CALL → ExtensionMethods.SafeKill
		   // ──── Block 2 if (==) ────────────────────
		   0x0110E2CC:  841094E5     LDR r1, [r4, 0x84]
		   0x0110E2D0:  0400A0E1     MOV r0, r4
		   0x0110E2D4:  08D08DE2     ADD sp, sp, 0x8
		   0x0110E2D8:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E2DC:  C4FDFFEA     B $-0x8e8
		*/
	}

	// RVA: 0x110D9F4 Offset: 0x110D9F4 VA: 0x110D9F4
	private void StartAutoSpawn(ItemData data) {
		/* Disassembly (ARM32, 41 instructions, 0xA4 bytes):
		   // CFG: 11 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110D9F4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110D9F8:  0C619FE5     LDR r6, [pc, 0x10c]
		   0x0110D9FC:  0040A0E1     MOV r4, r0
		   0x0110DA00:  0150A0E1     MOV r5, r1
		   0x0110DA04:  06608FE0     ADD r6, pc, r6
		   0x0110DA08:  0000D6E5     LDRB r0, [r6]
		   0x0110DA0C:  000050E3     CMPS r0, r0, 0x0
		   0x0110DA10:  0A00001A     BNE $+0x30  // if (!=) goto 0x0110DA40
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110DA14:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x0110DA18:  00009FE7     LDR r0, [pc, r0]
		   0x0110DA1C:  CF35F9EB     BL $-0x1b28bc
		   0x0110DA20:  EC009FE5     LDR r0, [pc, 0xec]
		   0x0110DA24:  00009FE7     LDR r0, [pc, r0]
		   0x0110DA28:  CC35F9EB     BL $-0x1b28c8
		   0x0110DA2C:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x0110DA30:  00009FE7     LDR r0, [pc, r0]
		   0x0110DA34:  C935F9EB     BL $-0x1b28d4
		   0x0110DA38:  0100A0E3     MOV r0, 0x1
		   0x0110DA3C:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110DA40:  0C0194E5     LDR r0, [r4, 0x10c]
		   0x0110DA44:  0010A0E3     MOV r1, 0x0
		   0x0110DA48:  B3F111EB     BL $+0x47c6d4  // CALL → TweenExtensions.IsActive
		   0x0110DA4C:  000050E3     CMPS r0, r0, 0x0
		   0x0110DA50:  0900001A     BNE $+0x2c  // if (!=) goto 0x0110DA7C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110DA54:  EC6094E5     LDR r6, [r4, 0xec]
		   0x0110DA58:  000056E3     CMPS r0, r6, 0x0
		   0x0110DA5C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DA64
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110DA60:  5A36F9EB     BL $-0x1b2690
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110DA64:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110DA68:  010050E3     CMPS r0, r0, 0x1
		   0x0110DA6C:  020000BA     BLT $+0x10  // if (<) goto 0x0110DA7C
		   // 
		   // ──── Block 6 else (>=) ────────────────────
		   0x0110DA70:  3800D4E5     LDRB r0, [r4, 0x38]
		   0x0110DA74:  000050E3     CMPS r0, r0, 0x0
		   0x0110DA78:  0000000A     BEQ $+0x8  // if (==) goto 0x0110DA80
		   // 
		   // ──── Block 7 (from 3 paths) ──────────────────
		   0x0110DA7C:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 8 if (==) ────────────────────
		   0x0110DA80:  000055E3     CMPS r0, r5, 0x0
		   0x0110DA84:  0000001A     BNE $+0x8  // if (!=) goto 0x0110DA8C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x0110DA88:  5036F9EB     BL $-0x1b26b8
		   // ──── Block 10 if (!=) ────────────────────
		   0x0110DA8C:  7400D5E5     LDRB r0, [r5, 0x74]
		   0x0110DA90:  000050E3     CMPS r0, r0, 0x0
		   0x0110DA94:  7080BD18     POPNE {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x110E338 Offset: 0x110E338 VA: 0x110E338
	private void Spawn() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E338:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x0110E33C:  486090E5     LDR r6, [r0, 0x48]
		   0x0110E340:  0040A0E1     MOV r4, r0
		   0x0110E344:  105090E5     LDR r5, [r0, 0x10]
		   0x0110E348:  000056E3     CMPS r0, r6, 0x0
		   0x0110E34C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E354
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E350:  1E34F9EB     BL $-0x1b2f80
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E354:  0C3096E5     LDR r3, [r6, 0xc]
		   0x0110E358:  0510A0E1     MOV r1, r5
		   0x0110E35C:  142096E5     LDR r2, [r6, 0x14]
		   0x0110E360:  200096E5     LDR r0, [r6, 0x20]
		   0x0110E364:  33FF2FE1     BLX r3  // virtual call: Item.ToString
		   0x0110E368:  0010A0E1     MOV r1, r0
		   0x0110E36C:  0400A0E1     MOV r0, r4
		   0x0110E370:  0020A0E3     MOV r2, 0x0
		   0x0110E374:  7040BDE8     POP {r4, r5, r6, lr}
		   0x0110E378:  C1FEFFEA     B $-0x4f4
		*/
	}

	// RVA: 0x110DE84 Offset: 0x110DE84 VA: 0x110DE84
	private void Spawn(Cell cell, bool manualSpawn) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110DE84:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		*/
	}

	// RVA: 0x110E384 Offset: 0x110E384 VA: 0x110E384
	private void SpawnItemAfterAnimation(ItemData selectedItemData, bool manualSpawn) {
		/* Disassembly (ARM32, 127 instructions, 0x1FC bytes):
		   // CFG: 17 blocks, 16 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E384:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110E388:  CC419FE5     LDR r4, [pc, 0x1cc]
		   0x0110E38C:  0080A0E1     MOV r8, r0
		   0x0110E390:  0250A0E1     MOV r5, r2
		   0x0110E394:  0190A0E1     MOV sb, r1
		   0x0110E398:  04408FE0     ADD r4, pc, r4
		   0x0110E39C:  0000D4E5     LDRB r0, [r4]
		   0x0110E3A0:  000050E3     CMPS r0, r0, 0x0
		   0x0110E3A4:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0110E3E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E3A8:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x0110E3AC:  00009FE7     LDR r0, [pc, r0]
		   0x0110E3B0:  6A33F9EB     BL $-0x1b3250
		   0x0110E3B4:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x0110E3B8:  00009FE7     LDR r0, [pc, r0]
		   0x0110E3BC:  6733F9EB     BL $-0x1b325c
		   0x0110E3C0:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x0110E3C4:  00009FE7     LDR r0, [pc, r0]
		   0x0110E3C8:  6433F9EB     BL $-0x1b3268
		   0x0110E3CC:  98019FE5     LDR r0, [pc, 0x198]
		   0x0110E3D0:  00009FE7     LDR r0, [pc, r0]
		   0x0110E3D4:  6133F9EB     BL $-0x1b3274
		   0x0110E3D8:  0100A0E3     MOV r0, 0x1
		   0x0110E3DC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E3E0:  88019FE5     LDR r0, [pc, 0x188]
		   0x0110E3E4:  00009FE7     LDR r0, [pc, r0]
		   0x0110E3E8:  000090E5     LDR r0, [r0]
		   0x0110E3EC:  F433F9EB     BL $-0x1b3028
		   0x0110E3F0:  0010A0E3     MOV r1, 0x0
		   0x0110E3F4:  0040A0E1     MOV r4, r0
		   0x0110E3F8:  FB1B7EEB     BL $+0x1f86ff4  // CALL → Object..ctor
		   0x0110E3FC:  000054E3     CMPS r0, r4, 0x0
		   0x0110E400:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E408
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110E404:  F133F9EB     BL $-0x1b3034
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110E408:  64019FE5     LDR r0, [pc, 0x164]
		   0x0110E40C:  00009FE7     LDR r0, [pc, r0]
		   0x0110E410:  FC80C4E1     STRD r8, sb, [r4, 0xc]
		   0x0110E414:  0850C4E5     STRB r5, [r4, 0x8]
		   0x0110E418:  000090E5     LDR r0, [r0]
		   0x0110E41C:  741090E5     LDR r1, [r0, 0x74]
		   0x0110E420:  000051E3     CMPS r0, r1, 0x0
		   0x0110E424:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E42C
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110E428:  9933F9EB     BL $-0x1b3194
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110E42C:  0000A0E3     MOV r0, 0x0
		   0x0110E430:  C9D911EB     BL $+0x47672c  // CALL → DOTween.Sequence
		   0x0110E434:  0050A0E1     MOV r5, r0
		   0x0110E438:  100188E5     STR r0, [r8, 0x110]
		   0x0110E43C:  0800A0E1     MOV r0, r8
		   0x0110E440:  0010A0E3     MOV r1, 0x0
		   0x0110E444:  98A63BEB     BL $+0xee9a68  // CALL → sub_1FF7EAC
		   0x0110E448:  331303E3     MOV r1, 0x3333
		   0x0110E44C:  CD2C0CE3     MOV r2, 0xcccd
		   0x0110E450:  331F43E3     MOVT r1, 0x3f33
		   0x0110E454:  CC2D43E3     MOVT r2, 0x3dcc
		   0x0110E458:  0030A0E3     MOV r3, 0x0
		   0x0110E45C:  FA1012EB     BL $+0x4843f0  // CALL → ShortcutExtensions.DOScaleX
		   0x0110E460:  0010A0E1     MOV r1, r0
		   0x0110E464:  140188E5     STR r0, [r8, 0x114]
		   0x0110E468:  0500A0E1     MOV r0, r5
		   0x0110E46C:  0020A0E3     MOV r2, 0x0
		   0x0110E470:  011B12EB     BL $+0x486c0c  // CALL → TweenSettingsExtensions.Append
		   0x0110E474:  0050A0E1     MOV r5, r0
		   0x0110E478:  000050E3     CMPS r0, r0, 0x0
		   0x0110E47C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E484
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110E480:  D233F9EB     BL $-0x1b30b0
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110E484:  EC909FE5     LDR sb, [pc, 0xec]
		   0x0110E488:  09909FE7     LDR sb, [pc, sb]
		   0x0110E48C:  4C6095E5     LDR r6, [r5, 0x4c]
		   0x0110E490:  000099E5     LDR r0, [sb]
		   0x0110E494:  CA33F9EB     BL $-0x1b30d0
		   0x0110E498:  0070A0E1     MOV r7, r0
		   0x0110E49C:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x0110E4A0:  0410A0E1     MOV r1, r4
		   0x0110E4A4:  0030A0E3     MOV r3, 0x0
		   0x0110E4A8:  00A0A0E3     MOV r10, 0x0
		   0x0110E4AC:  00009FE7     LDR r0, [pc, r0]
		   0x0110E4B0:  002090E5     LDR r2, [r0]
		   0x0110E4B4:  0700A0E1     MOV r0, r7
		   0x0110E4B8:  8DCA11EB     BL $+0x472a3c  // CALL → TweenCallback..ctor
		   0x0110E4BC:  0600A0E1     MOV r0, r6
		   0x0110E4C0:  0710A0E1     MOV r1, r7
		   0x0110E4C4:  0020A0E3     MOV r2, 0x0
		   0x0110E4C8:  1A2C7EEB     BL $+0x1f8b070  // CALL → Delegate.Combine
		   0x0110E4CC:  000050E3     CMPS r0, r0, 0x0
		   0x0110E4D0:  0900000A     BEQ $+0x2c  // if (==) goto 0x0110E4FC
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x0110E4D4:  0040A0E1     MOV r4, r0
		   0x0110E4D8:  001099E5     LDR r1, [sb]
		   0x0110E4DC:  000090E5     LDR r0, [r0]
		   0x0110E4E0:  010050E1     CMPS r0, r0, r1
		   0x0110E4E4:  0600000A     BEQ $+0x20  // if (==) goto 0x0110E504
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x0110E4E8:  0400A0E1     MOV r0, r4
		   0x0110E4EC:  A534F9EB     BL $-0x1b2d64
		   0x0110E4F0:  001099E5     LDR r1, [sb]
		   0x0110E4F4:  0000A0E3     MOV r0, 0x0
		   0x0110E4F8:  020000EA     B $+0x10  // goto 0x0110E508
		   // ──── Block 11 if (==) ────────────────────
		   0x0110E4FC:  4CA085E5     STR r10, [r5, 0x4c]
		   0x0110E500:  060000EA     B $+0x20  // goto 0x0110E520
		   // ──── Block 12 if (==) ────────────────────
		   0x0110E504:  0400A0E1     MOV r0, r4
		   // ──── Block 13 ──────────────────────────────
		   0x0110E508:  4C0085E5     STR r0, [r5, 0x4c]
		   0x0110E50C:  000094E5     LDR r0, [r4]
		   0x0110E510:  010050E1     CMPS r0, r0, r1
		   0x0110E514:  0100000A     BEQ $+0xc  // if (==) goto 0x0110E520
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x0110E518:  0400A0E1     MOV r0, r4
		   0x0110E51C:  9934F9EB     BL $-0x1b2d94
		   // ──── Block 15 if (==) ────────────────────
		   0x0110E520:  0800A0E1     MOV r0, r8
		   0x0110E524:  0010A0E3     MOV r1, 0x0
		   0x0110E528:  104198E5     LDR r4, [r8, 0x110]
		   0x0110E52C:  5EA63BEB     BL $+0xee9980  // CALL → sub_1FF7EAC
		   0x0110E530:  CD2C0CE3     MOV r2, 0xcccd
		   0x0110E534:  FE15A0E3     MOV r1, 0x3f800000
		   0x0110E538:  CC2D43E3     MOVT r2, 0x3dcc
		   0x0110E53C:  0030A0E3     MOV r3, 0x0
		   0x0110E540:  C11012EB     BL $+0x48430c  // CALL → ShortcutExtensions.DOScaleX
		   0x0110E544:  0010A0E1     MOV r1, r0
		   0x0110E548:  140188E5     STR r0, [r8, 0x114]
		   0x0110E54C:  0400A0E1     MOV r0, r4
		   0x0110E550:  0020A0E3     MOV r2, 0x0
		   0x0110E554:  F047BDE8     POP {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0110E558:  C71A12EA     B $+0x486b24  // TAIL CALL → TweenSettingsExtensions.Append
		   0x0110E55C:  6EDA1103     TSTSEQ sp, r1, 0x6e000
		   0x0110E560:  6493F602     RSCSEQ sb, r6, 0x90000001
		   0x0110E564:  F492F602     RSCSEQ sb, r6, 0x4000000f
		   0x0110E568:  ACB5F602     RSCSEQ fp, r6, 0x2b000000
		   0x0110E56C:  A4B5F602     RSCSEQ fp, r6, 0x29000000
		   0x0110E570:  90B5F602     RSCSEQ fp, r6, 0x24000000
		   0x0110E574:  0493F602     RSCSEQ sb, r6, 0x10000000
		   0x0110E578:  2492F602     RSCSEQ sb, r6, 0x40000002
		   0x0110E57C:  C4B4F602     RSCSEQ fp, r6, 0xc4000000
		*/
	}

	// RVA: 0x110E588 Offset: 0x110E588 VA: 0x110E588 Slot: 52
	protected override void ReadyToSpawn() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110E588:  10402DE9     PUSH {r4, lr}
		   0x0110E58C:  0040A0E1     MOV r4, r0
		   0x0110E590:  030000EB     BL $+0x14  // CALL → ItemContainer.ReadyToSpawn
		   0x0110E594:  841094E5     LDR r1, [r4, 0x84]
		   0x0110E598:  0400A0E1     MOV r0, r4
		   0x0110E59C:  1040BDE8     POP {r4, lr}
		   0x0110E5A0:  13FDFFEA     B $-0xbac
		*/
	}

	// RVA: 0x110E5E0 Offset: 0x110E5E0 VA: 0x110E5E0 Slot: 50
	protected override void ShowTimerIndicator() {
		/* Disassembly (ARM32, 11 instructions, 0x2C bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E5E0:  10402DE9     PUSH {r4, lr}
		   0x0110E5E4:  0040A0E1     MOV r4, r0
		   0x0110E5E8:  070000EB     BL $+0x24  // CALL → ItemContainer.ShowTimerIndicator
		   0x0110E5EC:  044194E5     LDR r4, [r4, 0x104]
		   0x0110E5F0:  000054E3     CMPS r0, r4, 0x0
		   0x0110E5F4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E5FC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E5F8:  7433F9EB     BL $-0x1b3228
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E5FC:  0400A0E1     MOV r0, r4
		   0x0110E600:  0010A0E3     MOV r1, 0x0
		   0x0110E604:  1040BDE8     POP {r4, lr}
		   0x0110E608:  3B5010EA     B $+0x4140f4  // TAIL CALL → SpawnEffect.Hide
		*/
	}

	// RVA: 0x110E694 Offset: 0x110E694 VA: 0x110E694 Slot: 48
	protected override void SetActiveContainerEffects(bool isLocked) {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110E694:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x110E7E8 Offset: 0x110E7E8 VA: 0x110E7E8 Slot: 32
	public override void Hide() {
		/* Disassembly (ARM32, 36 instructions, 0x90 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E7E8:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x0110E7EC:  0040A0E1     MOV r4, r0
		   0x0110E7F0:  200000EB     BL $+0x88  // CALL → ItemContainer.Hide
		   0x0110E7F4:  0400A0E1     MOV r0, r4
		   0x0110E7F8:  640000EB     BL $+0x198  // CALL → ItemContainer.RemoveTweensCorotines
		   0x0110E7FC:  0C0194E5     LDR r0, [r4, 0x10c]
		   0x0110E800:  0010A0E3     MOV r1, 0x0
		   0x0110E804:  0020A0E3     MOV r2, 0x0
		   0x0110E808:  EF9E0FEB     BL $+0x3e7bc4  // CALL → ExtensionMethods.SafeKill
		   0x0110E80C:  100194E5     LDR r0, [r4, 0x110]
		   0x0110E810:  0010A0E3     MOV r1, 0x0
		   0x0110E814:  0020A0E3     MOV r2, 0x0
		   0x0110E818:  EB9E0FEB     BL $+0x3e7bb4  // CALL → ExtensionMethods.SafeKill
		   0x0110E81C:  140194E5     LDR r0, [r4, 0x114]
		   0x0110E820:  0010A0E3     MOV r1, 0x0
		   0x0110E824:  0020A0E3     MOV r2, 0x0
		   0x0110E828:  E79E0FEB     BL $+0x3e7ba4  // CALL → ExtensionMethods.SafeKill
		   0x0110E82C:  045194E5     LDR r5, [r4, 0x104]
		   0x0110E830:  000055E3     CMPS r0, r5, 0x0
		   0x0110E834:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E83C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110E838:  E432F9EB     BL $-0x1b3468
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110E83C:  0500A0E1     MOV r0, r5
		   0x0110E840:  0010A0E3     MOV r1, 0x0
		   0x0110E844:  AC4F10EB     BL $+0x413eb8  // CALL → SpawnEffect.Hide
		   0x0110E848:  945094E5     LDR r5, [r4, 0x94]
		   0x0110E84C:  000055E3     CMPS r0, r5, 0x0
		   0x0110E850:  0000001A     BNE $+0x8  // if (!=) goto 0x0110E858
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110E854:  DD32F9EB     BL $-0x1b3484
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110E858:  0500A0E1     MOV r0, r5
		   0x0110E85C:  0010A0E3     MOV r1, 0x0
		   0x0110E860:  CB4C10EB     BL $+0x413334  // CALL → SparklesEffect.Hide
		   0x0110E864:  080194E5     LDR r0, [r4, 0x108]
		   0x0110E868:  0010A0E3     MOV r1, 0x0
		   0x0110E86C:  0020A0E3     MOV r2, 0x0
		   0x0110E870:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0110E874:  D49E0FEA     B $+0x3e7b58  // TAIL CALL → ExtensionMethods.SafeKill
		*/
	}

	// RVA: 0x110E9D8 Offset: 0x110E9D8 VA: 0x110E9D8 Slot: 20
	public override void RemoveTweensCorotines() {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110E9D8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x0110E9DC:  08D04DE2     SUB sp, sp, 0x8
		   0x0110E9E0:  0040A0E1     MOV r4, r0
		   0x0110E9E4:  E9FFFFEB     BL $-0x54
		   0x0110E9E8:  0C0194E5     LDR r0, [r4, 0x10c]
		   0x0110E9EC:  0010A0E3     MOV r1, 0x0
		   0x0110E9F0:  0020A0E3     MOV r2, 0x0
		   0x0110E9F4:  749E0FEB     BL $+0x3e79d8  // CALL → ExtensionMethods.SafeKill
		   0x0110E9F8:  100194E5     LDR r0, [r4, 0x110]
		   0x0110E9FC:  0010A0E3     MOV r1, 0x0
		   0x0110EA00:  0020A0E3     MOV r2, 0x0
		   0x0110EA04:  709E0FEB     BL $+0x3e79c8  // CALL → ExtensionMethods.SafeKill
		   0x0110EA08:  140194E5     LDR r0, [r4, 0x114]
		   0x0110EA0C:  0010A0E3     MOV r1, 0x0
		   0x0110EA10:  0020A0E3     MOV r2, 0x0
		   0x0110EA14:  6C9E0FEB     BL $+0x3e79b8  // CALL → ExtensionMethods.SafeKill
		   0x0110EA18:  045194E5     LDR r5, [r4, 0x104]
		   0x0110EA1C:  000055E3     CMPS r0, r5, 0x0
		   0x0110EA20:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EA28
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0110EA24:  6932F9EB     BL $-0x1b3654
		   // ──── Block 2 if (!=) ────────────────────
		   0x0110EA28:  0500A0E1     MOV r0, r5
		   0x0110EA2C:  0010A0E3     MOV r1, 0x0
		   0x0110EA30:  314F10EB     BL $+0x413ccc  // CALL → SpawnEffect.Hide
		   0x0110EA34:  945094E5     LDR r5, [r4, 0x94]
		   0x0110EA38:  000055E3     CMPS r0, r5, 0x0
		   0x0110EA3C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EA44
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0110EA40:  6232F9EB     BL $-0x1b3670
		   // ──── Block 4 if (!=) ────────────────────
		   0x0110EA44:  0500A0E1     MOV r0, r5
		   0x0110EA48:  0010A0E3     MOV r1, 0x0
		   0x0110EA4C:  504C10EB     BL $+0x413148  // CALL → SparklesEffect.Hide
		   0x0110EA50:  0400A0E1     MOV r0, r4
		   0x0110EA54:  0010A0E3     MOV r1, 0x0
		   0x0110EA58:  13A53BEB     BL $+0xee9454  // CALL → sub_1FF7EAC
		   0x0110EA5C:  6C509FE5     LDR r5, [pc, 0x6c]
		   0x0110EA60:  0040A0E1     MOV r4, r0
		   0x0110EA64:  05508FE0     ADD r5, pc, r5
		   0x0110EA68:  0000D5E5     LDRB r0, [r5]
		   0x0110EA6C:  000050E3     CMPS r0, r0, 0x0
		   0x0110EA70:  0400001A     BNE $+0x18  // if (!=) goto 0x0110EA88
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0110EA74:  58009FE5     LDR r0, [pc, 0x58]
		   0x0110EA78:  00009FE7     LDR r0, [pc, r0]
		   0x0110EA7C:  B731F9EB     BL $-0x1b391c
		   0x0110EA80:  0100A0E3     MOV r0, 0x1
		   0x0110EA84:  0000C5E5     STRB r0, [r5]
		   // ──── Block 6 if (!=) ────────────────────
		   0x0110EA88:  48009FE5     LDR r0, [pc, 0x48]
		   0x0110EA8C:  000054E3     CMPS r0, r4, 0x0
		   0x0110EA90:  00009FE7     LDR r0, [pc, r0]
		   0x0110EA94:  000090E5     LDR r0, [r0]
		   0x0110EA98:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110EA9C:  0C7080E2     ADD r7, r0, 0xc
		   0x0110EAA0:  E00097E8     LDM r7, {r5, r6, r7}
		   0x0110EAA4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EAAC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x0110EAA8:  4832F9EB     BL $-0x1b36d8
		   // ──── Block 8 if (!=) ────────────────────
		   0x0110EAAC:  0000A0E3     MOV r0, 0x0
		   0x0110EAB0:  0510A0E1     MOV r1, r5
		   0x0110EAB4:  00008DE5     STR r0, [sp]
		   0x0110EAB8:  0400A0E1     MOV r0, r4
		   0x0110EABC:  0620A0E1     MOV r2, r6
		   0x0110EAC0:  0730A0E1     MOV r3, r7
		   0x0110EAC4:  A9A53BEB     BL $+0xee96ac  // CALL → sub_1FF8170
		   0x0110EAC8:  08D08DE2     ADD sp, sp, 0x8
		   0x0110EACC:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x0110EAD0:  4FD11103     TSTSEQ sp, r1, 0xc0000013
		   0x0110EAD4:  B889F602     RSCSEQ r8, r6, 0x2e0000
		   0x0110EAD8:  A089F602     RSCSEQ r8, r6, 0x280000
		*/
	}

	// RVA: 0x110EADC Offset: 0x110EADC VA: 0x110EADC Slot: 53
	protected override void StartEnergyAnimation() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110EADC:  30482DE9     PUSH {r4, r5, fp, lr}
		*/
	}

	// RVA: 0x110EB74 Offset: 0x110EB74 VA: 0x110EB74
	public void .ctor() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110EB74:  FFFFFFEA     B $+0x4  // TAIL CALL → ItemContainer..ctor
		*/
	}

	[CompilerGenerated]
	// RVA: 0x110EBE0 Offset: 0x110EBE0 VA: 0x110EBE0
	private void <SetLockedState>b__9_0() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110EBE0:  841090E5     LDR r1, [r0, 0x84]
		   0x0110EBE4:  82FBFFEA     B $-0x11f0
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass13_0 // TypeDefIndex: 1296
{

	// Fields
	public float weightsSum; // 0x8

	// Methods

	// RVA: 0x110E37C Offset: 0x110E37C VA: 0x110E37C
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110E37C:  0010A0E3     MOV r1, 0x0
		   0x0110E380:  191C7EEA     B $+0x1f8706c  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x110EBE8 Offset: 0x110EBE8 VA: 0x110EBE8
	internal void <Spawn>b__0(float w) { }
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass14_0 // TypeDefIndex: 1297
{

	// Fields
	public bool manualSpawn; // 0x8
	public ItemAutoSpawnContainer <>4__this; // 0xC
	public ItemData selectedItemData; // 0x10

	// Methods

	// RVA: 0x110E580 Offset: 0x110E580 VA: 0x110E580
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x0110E580:  0010A0E3     MOV r1, 0x0
		   0x0110E584:  981B7EEA     B $+0x1f86e68  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x110EBFC Offset: 0x110EBFC VA: 0x110EBFC
	internal void <SpawnItemAfterAnimation>b__0() {
		/* Disassembly (ARM32, 122 instructions, 0x1E8 bytes):
		   // CFG: 33 blocks, 35 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0110EBFC:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0110EC00:  08D04DE2     SUB sp, sp, 0x8
		   0x0110EC04:  0090A0E1     MOV sb, r0
		   0x0110EC08:  0C6090E5     LDR r6, [r0, 0xc]
		   0x0110EC0C:  0800D0E5     LDRB r0, [r0, 0x8]
		   0x0110EC10:  000050E3     CMPS r0, r0, 0x0
		   0x0110EC14:  2400000A     BEQ $+0x98  // if (==) goto 0x0110ECAC
		   // 
		   // ──── Block 1 else (!=) ────────────────────
		   0x0110EC18:  000056E3     CMPS r0, r6, 0x0
		   0x0110EC1C:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EC24
		   // 
		   // ──── Block 2 else (==) ────────────────────
		   0x0110EC20:  EA31F9EB     BL $-0x1b3850
		   // ──── Block 3 if (!=) ────────────────────
		   0x0110EC24:  A0519FE5     LDR r5, [pc, 0x1a0]
		   0x0110EC28:  446096E5     LDR r6, [r6, 0x44]
		   0x0110EC2C:  05508FE0     ADD r5, pc, r5
		   0x0110EC30:  0000D5E5     LDRB r0, [r5]
		   0x0110EC34:  000050E3     CMPS r0, r0, 0x0
		   0x0110EC38:  0400001A     BNE $+0x18  // if (!=) goto 0x0110EC50
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x0110EC3C:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x0110EC40:  00009FE7     LDR r0, [pc, r0]
		   0x0110EC44:  4531F9EB     BL $-0x1b3ae4
		   0x0110EC48:  0100A0E3     MOV r0, 0x1
		   0x0110EC4C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 5 if (!=) ────────────────────
		   0x0110EC50:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x0110EC54:  00009FE7     LDR r0, [pc, r0]
		   0x0110EC58:  0C5099E5     LDR r5, [sb, 0xc]
		   0x0110EC5C:  000090E5     LDR r0, [r0]
		   0x0110EC60:  000055E3     CMPS r0, r5, 0x0
		   0x0110EC64:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110EC68:  008090E5     LDR r8, [r0]
		   0x0110EC6C:  047090E5     LDR r7, [r0, 0x4]
		   0x0110EC70:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EC78
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0110EC74:  D531F9EB     BL $-0x1b38a4
		   // ──── Block 7 if (!=) ────────────────────
		   0x0110EC78:  105095E5     LDR r5, [r5, 0x10]
		   0x0110EC7C:  000056E3     CMPS r0, r6, 0x0
		   0x0110EC80:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EC88
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x0110EC84:  D131F9EB     BL $-0x1b38b4
		   // ──── Block 9 if (!=) ────────────────────
		   0x0110EC88:  0C4096E5     LDR r4, [r6, 0xc]
		   0x0110EC8C:  0720A0E1     MOV r2, r7
		   0x0110EC90:  200096E5     LDR r0, [r6, 0x20]
		   0x0110EC94:  0530A0E1     MOV r3, r5
		   0x0110EC98:  141096E5     LDR r1, [r6, 0x14]
		   0x0110EC9C:  00108DE5     STR r1, [sp]
		   0x0110ECA0:  0810A0E1     MOV r1, r8
		   0x0110ECA4:  34FF2FE1     BLX r4  // virtual call: Object.ToString
		   0x0110ECA8:  100000EA     B $+0x48  // goto 0x0110ECF0
		   // ──── Block 10 if (==) ────────────────────
		   0x0110ECAC:  000056E3     CMPS r0, r6, 0x0
		   0x0110ECB0:  0600A0E1     MOV r0, r6
		   0x0110ECB4:  0300001A     BNE $+0x14  // if (!=) goto 0x0110ECC8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x0110ECB8:  C431F9EB     BL $-0x1b38e8
		   0x0110ECBC:  0C0099E5     LDR r0, [sb, 0xc]
		   0x0110ECC0:  000050E3     CMPS r0, r0, 0x0
		   0x0110ECC4:  3F00000A     BEQ $+0x104  // if (==) goto 0x0110EDC8
		   // 
		   // ──── Block 12 (from 2 paths) ──────────────────
		   0x0110ECC8:  486096E5     LDR r6, [r6, 0x48]
		   0x0110ECCC:  105090E5     LDR r5, [r0, 0x10]
		   0x0110ECD0:  000056E3     CMPS r0, r6, 0x0
		   0x0110ECD4:  0000001A     BNE $+0x8  // if (!=) goto 0x0110ECDC
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x0110ECD8:  BC31F9EB     BL $-0x1b3908
		   // ──── Block 14 if (!=) ────────────────────
		   0x0110ECDC:  0C3096E5     LDR r3, [r6, 0xc]
		   0x0110ECE0:  0510A0E1     MOV r1, r5
		   0x0110ECE4:  142096E5     LDR r2, [r6, 0x14]
		   0x0110ECE8:  200096E5     LDR r0, [r6, 0x20]
		   0x0110ECEC:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 15 ──────────────────────────────
		   0x0110ECF0:  0050A0E1     MOV r5, r0
		   0x0110ECF4:  000050E3     CMPS r0, r0, 0x0
		   0x0110ECF8:  3000000A     BEQ $+0xc8  // if (==) goto 0x0110EDC0
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x0110ECFC:  D4609FE5     LDR r6, [pc, 0xd4]
		   0x0110ED00:  06608FE0     ADD r6, pc, r6
		   0x0110ED04:  0000D6E5     LDRB r0, [r6]
		   0x0110ED08:  000050E3     CMPS r0, r0, 0x0
		   0x0110ED0C:  0400001A     BNE $+0x18  // if (!=) goto 0x0110ED24
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x0110ED10:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0110ED14:  00009FE7     LDR r0, [pc, r0]
		   0x0110ED18:  1031F9EB     BL $-0x1b3bb8
		   0x0110ED1C:  0100A0E3     MOV r0, 0x1
		   0x0110ED20:  0000C6E5     STRB r0, [r6]
		   // ──── Block 18 if (!=) ────────────────────
		   0x0110ED24:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x0110ED28:  00009FE7     LDR r0, [pc, r0]
		   0x0110ED2C:  000090E5     LDR r0, [r0]
		   0x0110ED30:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0110ED34:  000090E5     LDR r0, [r0]
		   0x0110ED38:  000050E3     CMPS r0, r0, 0x0
		   0x0110ED3C:  1F00000A     BEQ $+0x84  // if (==) goto 0x0110EDC0
		   // 
		   // ──── Block 19 else (!=) ────────────────────
		   0x0110ED40:  0C6099E5     LDR r6, [sb, 0xc]
		   0x0110ED44:  000056E3     CMPS r0, r6, 0x0
		   0x0110ED48:  0000001A     BNE $+0x8  // if (!=) goto 0x0110ED50
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x0110ED4C:  9F31F9EB     BL $-0x1b397c
		   // ──── Block 21 if (!=) ────────────────────
		   0x0110ED50:  EC6096E5     LDR r6, [r6, 0xec]
		   0x0110ED54:  000056E3     CMPS r0, r6, 0x0
		   0x0110ED58:  0000001A     BNE $+0x8  // if (!=) goto 0x0110ED60
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x0110ED5C:  9B31F9EB     BL $-0x1b398c
		   // ──── Block 23 if (!=) ────────────────────
		   0x0110ED60:  0C0096E5     LDR r0, [r6, 0xc]
		   0x0110ED64:  010050E3     CMPS r0, r0, 0x1
		   0x0110ED68:  140000BA     BLT $+0x58  // if (<) goto 0x0110EDC0
		   // 
		   // ──── Block 24 else (>=) ────────────────────
		   0x0110ED6C:  DC60C9E1     LDRD r6, r7, [sb, 0xc]
		   0x0110ED70:  000056E3     CMPS r0, r6, 0x0
		   0x0110ED74:  0000001A     BNE $+0x8  // if (!=) goto 0x0110ED7C
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x0110ED78:  9431F9EB     BL $-0x1b39a8
		   // ──── Block 26 if (!=) ────────────────────
		   0x0110ED7C:  E40096E5     LDR r0, [r6, 0xe4]
		   0x0110ED80:  000050E3     CMPS r0, r0, 0x0
		   0x0110ED84:  0500000A     BEQ $+0x1c  // if (==) goto 0x0110EDA0
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x0110ED88:  0C6090E5     LDR r6, [r0, 0xc]
		   0x0110ED8C:  0710A0E1     MOV r1, r7
		   0x0110ED90:  143090E5     LDR r3, [r0, 0x14]
		   0x0110ED94:  0520A0E1     MOV r2, r5
		   0x0110ED98:  200090E5     LDR r0, [r0, 0x20]
		   0x0110ED9C:  36FF2FE1     BLX r6  // virtual call: Object.ToString
		   // ──── Block 28 if (==) ────────────────────
		   0x0110EDA0:  0C4099E5     LDR r4, [sb, 0xc]
		   0x0110EDA4:  000054E3     CMPS r0, r4, 0x0
		   0x0110EDA8:  0000001A     BNE $+0x8  // if (!=) goto 0x0110EDB0
		   // 
		   // ──── Block 29 else (==) ────────────────────
		   0x0110EDAC:  8731F9EB     BL $-0x1b39dc
		   // ──── Block 30 if (!=) ────────────────────
		   0x0110EDB0:  0400A0E1     MOV r0, r4
		   0x0110EDB4:  08D08DE2     ADD sp, sp, 0x8
		   0x0110EDB8:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x0110EDBC:  0F0000EA     B $+0x44  // TAIL CALL → ItemContainer.ReduceContainerCapacity
		   // ──── Block 31 (from 3 paths) ──────────────────
		   0x0110EDC0:  08D08DE2     ADD sp, sp, 0x8
		   0x0110EDC4:  F08BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, pc}
		   // ──── Block 32 if (==) ────────────────────
		   0x0110EDC8:  8031F9EB     BL $-0x1b39f8
		   0x0110EDCC:  07CC1103     TSTSEQ ip, r1, 0x700
		   0x0110EDD0:  A081F602     RSCSEQ r8, r6, 0x28
		   0x0110EDD4:  8C81F602     RSCSEQ r8, r6, 0x23
		   0x0110EDD8:  B4CE1103     TSTSEQ ip, r1, 0xb40
		   0x0110EDDC:  B49AF602     RSCSEQ sb, r6, 0xb4000
		   0x0110EDE0:  A09AF602     RSCSEQ sb, r6, 0xa0000
		*/
	}
}
