// Dll : Assembly-CSharp.dll
// Namespace: 
[Serializable]
public class ItemPack // TypeDefIndex: 643
{

	// Fields
	public const string ENERGY = "energy";
	public const string ENDLESS_ENERGY = "endless_energy";
	public const string COINS = "coins";
	public const string GEMS = "gems";
	public const string EVENT_TOKENS = "event_tokens";
	public const string NO_ADS = "no_ads";
	public const string ALBUM_CHEST = "album_chest_basic";
	public const string ITEM_CODE = "Item Code";
	private const string CSTEP = "CSTEP";
	private const string GRAND_PRIZE = "grandPrize";
	public static ResourcesPack resourcesPack; // 0x0
	private static ItemObject fakeTokenObject; // 0x4
	[SerializeField]
	[JsonProperty("s")]
	private string s; // 0x8
	[SerializeField]
	[JsonProperty("x")]
	private int x; // 0xC
	private ItemPack.ShopOfferSlotType shopOfferSlotType; // 0x10

	// Properties
	[JsonIgnore]
	public int amount { get; }
	[JsonIgnore]
	public string itemCodeOrType { get; }

	// Methods

	// RVA: 0x14FA018 Offset: 0x14FA018 VA: 0x14FA018
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FA018:  0010A0E3     MOV r1, 0x0
		   0x014FA01C:  F26C6EEA     B $+0x1b9b3d0  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x14FA020 Offset: 0x14FA020 VA: 0x14FA020
	public int get_amount() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FA020:  0C0090E5     LDR r0, [r0, 0xc]
		   0x014FA024:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14FA028 Offset: 0x14FA028 VA: 0x14FA028
	public string get_itemCodeOrType() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FA028:  080090E5     LDR r0, [r0, 0x8]
		   0x014FA02C:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14FA030 Offset: 0x14FA030 VA: 0x14FA030
	public void .ctor(Reward reward, ResourcesPack resourcesPack) {
		/* Disassembly (ARM32, 63 instructions, 0xFC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FA030:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x014FA034:  08D04DE2     SUB sp, sp, 0x8
		   0x014FA038:  24729FE5     LDR r7, [pc, 0x224]
		   0x014FA03C:  0040A0E1     MOV r4, r0
		   0x014FA040:  0260A0E1     MOV r6, r2
		   0x014FA044:  0150A0E1     MOV r5, r1
		   0x014FA048:  07708FE0     ADD r7, pc, r7
		   0x014FA04C:  0000D7E5     LDRB r0, [r7]
		   0x014FA050:  000050E3     CMPS r0, r0, 0x0
		   0x014FA054:  2200001A     BNE $+0x90  // if (!=) goto 0x014FA0E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FA058:  08029FE5     LDR r0, [pc, 0x208]
		   0x014FA05C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA060:  3E84E9EB     BL $-0x59ef00
		   0x014FA064:  00029FE5     LDR r0, [pc, 0x200]
		   0x014FA068:  00009FE7     LDR r0, [pc, r0]
		   0x014FA06C:  3B84E9EB     BL $-0x59ef0c
		   0x014FA070:  F8019FE5     LDR r0, [pc, 0x1f8]
		   0x014FA074:  00009FE7     LDR r0, [pc, r0]
		   0x014FA078:  3884E9EB     BL $-0x59ef18
		   0x014FA07C:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x014FA080:  00009FE7     LDR r0, [pc, r0]
		   0x014FA084:  3584E9EB     BL $-0x59ef24
		   0x014FA088:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x014FA08C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA090:  3284E9EB     BL $-0x59ef30
		   0x014FA094:  E0019FE5     LDR r0, [pc, 0x1e0]
		   0x014FA098:  00009FE7     LDR r0, [pc, r0]
		   0x014FA09C:  2F84E9EB     BL $-0x59ef3c
		   0x014FA0A0:  D8019FE5     LDR r0, [pc, 0x1d8]
		   0x014FA0A4:  00009FE7     LDR r0, [pc, r0]
		   0x014FA0A8:  2C84E9EB     BL $-0x59ef48
		   0x014FA0AC:  D0019FE5     LDR r0, [pc, 0x1d0]
		   0x014FA0B0:  00009FE7     LDR r0, [pc, r0]
		   0x014FA0B4:  2984E9EB     BL $-0x59ef54
		   0x014FA0B8:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x014FA0BC:  00009FE7     LDR r0, [pc, r0]
		   0x014FA0C0:  2684E9EB     BL $-0x59ef60
		   0x014FA0C4:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x014FA0C8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA0CC:  2384E9EB     BL $-0x59ef6c
		   0x014FA0D0:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x014FA0D4:  00009FE7     LDR r0, [pc, r0]
		   0x014FA0D8:  2084E9EB     BL $-0x59ef78
		   0x014FA0DC:  0100A0E3     MOV r0, 0x1
		   0x014FA0E0:  0000C7E5     STRB r0, [r7]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FA0E4:  0400A0E1     MOV r0, r4
		   0x014FA0E8:  0010A0E3     MOV r1, 0x0
		   0x014FA0EC:  BE6C6EEB     BL $+0x1b9b300  // CALL → Object..ctor
		   0x014FA0F0:  000055E3     CMPS r0, r5, 0x0
		   0x014FA0F4:  0000001A     BNE $+0x8  // if (!=) goto 0x014FA0FC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FA0F8:  B484E9EB     BL $-0x59ed28
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FA0FC:  080095E5     LDR r0, [r5, 0x8]
		   0x014FA100:  090050E3     CMPS r0, r0, 0x9
		   0x014FA104:  3E00008A     BHI $+0x100
		   0x014FA108:  04108FE2     ADR r1, pc, 0x4
		   0x014FA10C:  000191E7     LDR r0, [r1, r0, lsl 2]
		   0x014FA110:  00F081E0     ADD pc, r1, r0
		   0x014FA114:  28000000     ANDEQ r0, r0, r8, lsr 0
		   0x014FA118:  B8000000     STRHEQ r0, [r0], -r8
		   0x014FA11C:  4C000000     ANDEQ r0, r0, ip, asr 0
		   0x014FA120:  58000000     ANDEQ r0, r0, r8, asr r0
		   0x014FA124:  34000000     ANDEQ r0, r0, r4, lsr r0
		   0x014FA128:  C4000000     ANDEQ r0, r0, r4, asr 1
		*/
	}

	// RVA: 0x14FA2C0 Offset: 0x14FA2C0 VA: 0x14FA2C0
	public void .ctor(RewardType rewardType, int amount, string itemCode = "") {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FA2C0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x014FA2C4:  BC419FE5     LDR r4, [pc, 0x1bc]
		   0x014FA2C8:  0050A0E1     MOV r5, r0
		   0x014FA2CC:  0360A0E1     MOV r6, r3
		   0x014FA2D0:  0280A0E1     MOV r8, r2
		   0x014FA2D4:  04408FE0     ADD r4, pc, r4
		   0x014FA2D8:  0170A0E1     MOV r7, r1
		   0x014FA2DC:  0000D4E5     LDRB r0, [r4]
		   0x014FA2E0:  000050E3     CMPS r0, r0, 0x0
		   0x014FA2E4:  2200001A     BNE $+0x90  // if (!=) goto 0x014FA374
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FA2E8:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x014FA2EC:  00009FE7     LDR r0, [pc, r0]
		   0x014FA2F0:  9A83E9EB     BL $-0x59f190
		   0x014FA2F4:  94019FE5     LDR r0, [pc, 0x194]
		   0x014FA2F8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA2FC:  9783E9EB     BL $-0x59f19c
		   0x014FA300:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x014FA304:  00009FE7     LDR r0, [pc, r0]
		   0x014FA308:  9483E9EB     BL $-0x59f1a8
		   0x014FA30C:  84019FE5     LDR r0, [pc, 0x184]
		   0x014FA310:  00009FE7     LDR r0, [pc, r0]
		   0x014FA314:  9183E9EB     BL $-0x59f1b4
		   0x014FA318:  7C019FE5     LDR r0, [pc, 0x17c]
		   0x014FA31C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA320:  8E83E9EB     BL $-0x59f1c0
		   0x014FA324:  74019FE5     LDR r0, [pc, 0x174]
		   0x014FA328:  00009FE7     LDR r0, [pc, r0]
		   0x014FA32C:  8B83E9EB     BL $-0x59f1cc
		   0x014FA330:  6C019FE5     LDR r0, [pc, 0x16c]
		   0x014FA334:  00009FE7     LDR r0, [pc, r0]
		   0x014FA338:  8883E9EB     BL $-0x59f1d8
		   0x014FA33C:  64019FE5     LDR r0, [pc, 0x164]
		   0x014FA340:  00009FE7     LDR r0, [pc, r0]
		   0x014FA344:  8583E9EB     BL $-0x59f1e4
		   0x014FA348:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x014FA34C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA350:  8283E9EB     BL $-0x59f1f0
		   0x014FA354:  54019FE5     LDR r0, [pc, 0x154]
		   0x014FA358:  00009FE7     LDR r0, [pc, r0]
		   0x014FA35C:  7F83E9EB     BL $-0x59f1fc
		   0x014FA360:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x014FA364:  00009FE7     LDR r0, [pc, r0]
		   0x014FA368:  7C83E9EB     BL $-0x59f208
		   0x014FA36C:  0100A0E3     MOV r0, 0x1
		   0x014FA370:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FA374:  0500A0E1     MOV r0, r5
		   0x014FA378:  0010A0E3     MOV r1, 0x0
		   0x014FA37C:  1A6C6EEB     BL $+0x1b9b070  // CALL → Object..ctor
		   0x014FA380:  090057E3     CMPS r0, r7, 0x9
		   0x014FA384:  2300008A     BHI $+0x94
		   0x014FA388:  04008FE2     ADR r0, pc, 0x4
		   0x014FA38C:  071190E7     LDR r1, [r0, r7, lsl 2]
		   0x014FA390:  01F080E0     ADD pc, r0, r1
		   0x014FA394:  48000000     ANDEQ r0, r0, r8, asr 0
		   0x014FA398:  54000000     ANDEQ r0, r0, r4, asr r0
		   0x014FA39C:  30000000     ANDEQ r0, r0, r0, lsr r0
		   0x014FA3A0:  28000000     ANDEQ r0, r0, r8, lsr 0
		   0x014FA3A4:  6C000000     ANDEQ r0, r0, ip, ror 0
		   0x014FA3A8:  78000000     ANDEQ r0, r0, r8, ror r0
		   0x014FA3AC:  60000000     ANDEQ r0, r0, r0, ror 0
		*/
	}

	// RVA: 0x14F20F4 Offset: 0x14F20F4 VA: 0x14F20F4
	public void .ctor(string s, int x) {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014F20F4:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014F20F8:  0160A0E1     MOV r6, r1
		   0x014F20FC:  0010A0E3     MOV r1, 0x0
		   0x014F2100:  0250A0E1     MOV r5, r2
		   0x014F2104:  0040A0E1     MOV r4, r0
		   0x014F2108:  B78C6EEB     BL $+0x1ba32e4  // CALL → Object..ctor
		   0x014F210C:  086084E5     STR r6, [r4, 0x8]
		   0x014F2110:  0C5084E5     STR r5, [r4, 0xc]
		   0x014F2114:  7080BDE8     POP {r4, r5, r6, pc}
		*/
	}

	// RVA: 0x14FA4E4 Offset: 0x14FA4E4 VA: 0x14FA4E4
	public void .ctor(LotUnit lotUnit) {
		/* Disassembly (ARM32, 228 instructions, 0x390 bytes):
		   // CFG: 34 blocks, 47 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FA4E4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014FA4E8:  18639FE5     LDR r6, [pc, 0x318]
		   0x014FA4EC:  0040A0E1     MOV r4, r0
		   0x014FA4F0:  0150A0E1     MOV r5, r1
		   0x014FA4F4:  06608FE0     ADD r6, pc, r6
		   0x014FA4F8:  0000D6E5     LDRB r0, [r6]
		   0x014FA4FC:  000050E3     CMPS r0, r0, 0x0
		   0x014FA500:  2800001A     BNE $+0xa8  // if (!=) goto 0x014FA5A8
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FA504:  00039FE5     LDR r0, [pc, 0x300]
		   0x014FA508:  00009FE7     LDR r0, [pc, r0]
		   0x014FA50C:  1383E9EB     BL $-0x59f3ac
		   0x014FA510:  F8029FE5     LDR r0, [pc, 0x2f8]
		   0x014FA514:  00009FE7     LDR r0, [pc, r0]
		   0x014FA518:  1083E9EB     BL $-0x59f3b8
		   0x014FA51C:  F0029FE5     LDR r0, [pc, 0x2f0]
		   0x014FA520:  00009FE7     LDR r0, [pc, r0]
		   0x014FA524:  0D83E9EB     BL $-0x59f3c4
		   0x014FA528:  E8029FE5     LDR r0, [pc, 0x2e8]
		   0x014FA52C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA530:  0A83E9EB     BL $-0x59f3d0
		   0x014FA534:  E0029FE5     LDR r0, [pc, 0x2e0]
		   0x014FA538:  00009FE7     LDR r0, [pc, r0]
		   0x014FA53C:  0783E9EB     BL $-0x59f3dc
		   0x014FA540:  D8029FE5     LDR r0, [pc, 0x2d8]
		   0x014FA544:  00009FE7     LDR r0, [pc, r0]
		   0x014FA548:  0483E9EB     BL $-0x59f3e8
		   0x014FA54C:  D0029FE5     LDR r0, [pc, 0x2d0]
		   0x014FA550:  00009FE7     LDR r0, [pc, r0]
		   0x014FA554:  0183E9EB     BL $-0x59f3f4
		   0x014FA558:  C8029FE5     LDR r0, [pc, 0x2c8]
		   0x014FA55C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA560:  FE82E9EB     BL $-0x59f400
		   0x014FA564:  C0029FE5     LDR r0, [pc, 0x2c0]
		   0x014FA568:  00009FE7     LDR r0, [pc, r0]
		   0x014FA56C:  FB82E9EB     BL $-0x59f40c
		   0x014FA570:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x014FA574:  00009FE7     LDR r0, [pc, r0]
		   0x014FA578:  F882E9EB     BL $-0x59f418
		   0x014FA57C:  B0029FE5     LDR r0, [pc, 0x2b0]
		   0x014FA580:  00009FE7     LDR r0, [pc, r0]
		   0x014FA584:  F582E9EB     BL $-0x59f424
		   0x014FA588:  A8029FE5     LDR r0, [pc, 0x2a8]
		   0x014FA58C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA590:  F282E9EB     BL $-0x59f430
		   0x014FA594:  A0029FE5     LDR r0, [pc, 0x2a0]
		   0x014FA598:  00009FE7     LDR r0, [pc, r0]
		   0x014FA59C:  EF82E9EB     BL $-0x59f43c
		   0x014FA5A0:  0100A0E3     MOV r0, 0x1
		   0x014FA5A4:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FA5A8:  0400A0E1     MOV r0, r4
		   0x014FA5AC:  0010A0E3     MOV r1, 0x0
		   0x014FA5B0:  8D6B6EEB     BL $+0x1b9ae3c  // CALL → Object..ctor
		   0x014FA5B4:  000055E3     CMPS r0, r5, 0x0
		   0x014FA5B8:  7100000A     BEQ $+0x1cc  // if (==) goto 0x014FA784
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014FA5BC:  7C029FE5     LDR r0, [pc, 0x27c]
		   0x014FA5C0:  00009FE7     LDR r0, [pc, r0]
		   0x014FA5C4:  001095E5     LDR r1, [r5]
		   0x014FA5C8:  000090E5     LDR r0, [r0]
		   0x014FA5CC:  B820D1E5     LDRB r2, [r1, 0xb8]
		   0x014FA5D0:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA5D4:  030052E1     CMPS r0, r2, r3
		   0x014FA5D8:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA5F0
		   // 
		   // ──── Block 4 else (>= (unsigned)) ────────────────────
		   0x014FA5DC:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA5E0:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA5E4:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA5E8:  000053E1     CMPS r0, r3, r0
		   0x014FA5EC:  7F00000A     BEQ $+0x204  // if (==) goto 0x014FA7F0
		   // 
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x014FA5F0:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x014FA5F4:  00009FE7     LDR r0, [pc, r0]
		   0x014FA5F8:  000090E5     LDR r0, [r0]
		   0x014FA5FC:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA600:  030052E1     CMPS r0, r2, r3
		   0x014FA604:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA61C
		   // 
		   // ──── Block 6 else (>= (unsigned)) ────────────────────
		   0x014FA608:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA60C:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA610:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA614:  000053E1     CMPS r0, r3, r0
		   0x014FA618:  5700000A     BEQ $+0x164  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x014FA61C:  24029FE5     LDR r0, [pc, 0x224]
		   0x014FA620:  00009FE7     LDR r0, [pc, r0]
		   0x014FA624:  000090E5     LDR r0, [r0]
		   0x014FA628:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA62C:  030052E1     CMPS r0, r2, r3
		   0x014FA630:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA648
		   // 
		   // ──── Block 8 else (>= (unsigned)) ────────────────────
		   0x014FA634:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA638:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA63C:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA640:  000053E1     CMPS r0, r3, r0
		   0x014FA644:  4C00000A     BEQ $+0x138  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x014FA648:  FC019FE5     LDR r0, [pc, 0x1fc]
		   0x014FA64C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA650:  000090E5     LDR r0, [r0]
		   0x014FA654:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA658:  030052E1     CMPS r0, r2, r3
		   0x014FA65C:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA674
		   // 
		   // ──── Block 10 else (>= (unsigned)) ────────────────────
		   0x014FA660:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA664:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA668:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA66C:  000053E1     CMPS r0, r3, r0
		   0x014FA670:  4100000A     BEQ $+0x10c  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 11 (from 2 paths) ──────────────────
		   0x014FA674:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x014FA678:  00009FE7     LDR r0, [pc, r0]
		   0x014FA67C:  000090E5     LDR r0, [r0]
		   0x014FA680:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA684:  030052E1     CMPS r0, r2, r3
		   0x014FA688:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA6A0
		   // 
		   // ──── Block 12 else (>= (unsigned)) ────────────────────
		   0x014FA68C:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA690:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA694:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA698:  000053E1     CMPS r0, r3, r0
		   0x014FA69C:  3600000A     BEQ $+0xe0  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 13 (from 2 paths) ──────────────────
		   0x014FA6A0:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x014FA6A4:  00009FE7     LDR r0, [pc, r0]
		   0x014FA6A8:  000090E5     LDR r0, [r0]
		   0x014FA6AC:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA6B0:  030052E1     CMPS r0, r2, r3
		   0x014FA6B4:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA6CC
		   // 
		   // ──── Block 14 else (>= (unsigned)) ────────────────────
		   0x014FA6B8:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA6BC:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA6C0:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA6C4:  000053E1     CMPS r0, r3, r0
		   0x014FA6C8:  2B00000A     BEQ $+0xb4  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 15 (from 2 paths) ──────────────────
		   0x014FA6CC:  84019FE5     LDR r0, [pc, 0x184]
		   0x014FA6D0:  00009FE7     LDR r0, [pc, r0]
		   0x014FA6D4:  000090E5     LDR r0, [r0]
		   0x014FA6D8:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA6DC:  030052E1     CMPS r0, r2, r3
		   0x014FA6E0:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA6F8
		   // 
		   // ──── Block 16 else (>= (unsigned)) ────────────────────
		   0x014FA6E4:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA6E8:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA6EC:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA6F0:  000053E1     CMPS r0, r3, r0
		   0x014FA6F4:  2000000A     BEQ $+0x88  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 17 (from 2 paths) ──────────────────
		   0x014FA6F8:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x014FA6FC:  00009FE7     LDR r0, [pc, r0]
		   0x014FA700:  000090E5     LDR r0, [r0]
		   0x014FA704:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA708:  030052E1     CMPS r0, r2, r3
		   0x014FA70C:  0400003A     BLO $+0x18  // if (< (unsigned)) goto 0x014FA724
		   // 
		   // ──── Block 18 else (>= (unsigned)) ────────────────────
		   0x014FA710:  647091E5     LDR r7, [r1, 0x64]
		   0x014FA714:  033187E0     ADD r3, r7, r3, lsl 2
		   0x014FA718:  043013E5     LDR r3, [r3, -0x4]
		   0x014FA71C:  000053E1     CMPS r0, r3, r0
		   0x014FA720:  1500000A     BEQ $+0x5c  // if (==) goto 0x014FA77C
		   // 
		   // ──── Block 19 (from 2 paths) ──────────────────
		   0x014FA724:  34619FE5     LDR r6, [pc, 0x134]
		   0x014FA728:  06609FE7     LDR r6, [pc, r6]
		   0x014FA72C:  000096E5     LDR r0, [r6]
		   0x014FA730:  B830D0E5     LDRB r3, [r0, 0xb8]
		   0x014FA734:  030052E1     CMPS r0, r2, r3
		   0x014FA738:  1200003A     BLO $+0x50  // if (< (unsigned)) goto 0x014FA788
		   // 
		   // ──── Block 20 else (>= (unsigned)) ────────────────────
		   0x014FA73C:  641091E5     LDR r1, [r1, 0x64]
		   0x014FA740:  031181E0     ADD r1, r1, r3, lsl 2
		   0x014FA744:  041011E5     LDR r1, [r1, -0x4]
		   0x014FA748:  000051E1     CMPS r0, r1, r0
		   0x014FA74C:  0D00001A     BNE $+0x3c  // if (!=) goto 0x014FA788
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x014FA750:  0C119FE5     LDR r1, [pc, 0x10c]
		   0x014FA754:  01109FE7     LDR r1, [pc, r1]
		   0x014FA758:  742090E5     LDR r2, [r0, 0x74]
		   0x014FA75C:  001091E5     LDR r1, [r1]
		   0x014FA760:  000052E3     CMPS r0, r2, 0x0
		   0x014FA764:  081084E5     STR r1, [r4, 0x8]
		   0x014FA768:  0100001A     BNE $+0xc  // if (!=) goto 0x014FA774
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x014FA76C:  C882E9EB     BL $-0x59f4d8
		   0x014FA770:  000096E5     LDR r0, [r6]
		   // ──── Block 23 if (!=) ────────────────────
		   0x014FA774:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FA778:  1F0000EA     B $+0x84  // goto 0x014FA7FC
		   // ──── Block 24 (from 7 paths) ──────────────────
		   0x014FA77C:  080095E5     LDR r0, [r5, 0x8]
		   0x014FA780:  1B0000EA     B $+0x74  // goto 0x014FA7F4
		   // ──── Block 25 if (==) ────────────────────
		   0x014FA784:  1183E9EB     BL $-0x59f3b4
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x014FA788:  D8009FE5     LDR r0, [pc, 0xd8]
		   0x014FA78C:  0020A0E3     MOV r2, 0x0
		   0x014FA790:  00009FE7     LDR r0, [pc, r0]
		   0x014FA794:  081095E5     LDR r1, [r5, 0x8]
		   0x014FA798:  000090E5     LDR r0, [r0]
		   0x014FA79C:  E73B66EB     BL $+0x198efa4  // CALL → String.Concat
		   0x014FA7A0:  0070A0E1     MOV r7, r0
		   0x014FA7A4:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x014FA7A8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA7AC:  000090E5     LDR r0, [r0]
		   0x014FA7B0:  0383E9EB     BL $-0x59f3ec
		   0x014FA7B4:  0710A0E1     MOV r1, r7
		   0x014FA7B8:  0020A0E3     MOV r2, 0x0
		   0x014FA7BC:  0060A0E1     MOV r6, r0
		   0x014FA7C0:  BC406DEB     BL $+0x1b502f8  // CALL → NotImplementedException..ctor
		   0x014FA7C4:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x014FA7C8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA7CC:  000090E5     LDR r0, [r0]
		   0x014FA7D0:  741090E5     LDR r1, [r0, 0x74]
		   0x014FA7D4:  000051E3     CMPS r0, r1, 0x0
		   0x014FA7D8:  0000001A     BNE $+0x8  // if (!=) goto 0x014FA7E0
		   // 
		   // ──── Block 27 else (==) ────────────────────
		   0x014FA7DC:  AC82E9EB     BL $-0x59f548
		   // ──── Block 28 if (!=) ────────────────────
		   0x014FA7E0:  0600A0E1     MOV r0, r6
		   0x014FA7E4:  0010A0E3     MOV r1, 0x0
		   0x014FA7E8:  67F62BEB     BL $+0xafd9a4  // CALL → sub_1FF818C
		   0x014FA7EC:  010000EA     B $+0xc  // goto 0x014FA7F8
		   // ──── Block 29 if (==) ────────────────────
		   0x014FA7F0:  140095E5     LDR r0, [r5, 0x14]
		   // ──── Block 30 ──────────────────────────────
		   0x014FA7F4:  080084E5     STR r0, [r4, 0x8]
		   // ──── Block 31 ──────────────────────────────
		   0x014FA7F8:  0C0085E2     ADD r0, r5, 0xc
		   // ──── Block 32 ──────────────────────────────
		   0x014FA7FC:  000090E5     LDR r0, [r0]
		   0x014FA800:  0C0084E5     STR r0, [r4, 0xc]
		   0x014FA804:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014FA808:  2D39D302     SBCSEQ r3, r3, 0xb4000
		   0x014FA80C:  80C0B702     ADCSEQ ip, r7, 0x80
		   0x014FA810:  F8FDB702     ADCSEQ pc, r7, 0x3e00
		   0x014FA814:  683DB802     ADCSEQ r3, r8, 0x1a00
		   0x014FA818:  E4FDB702     ADCSEQ pc, r7, 0x3900
		   0x014FA81C:  DCFDB702     ADCSEQ pc, r7, 0x3700
		   0x014FA820:  D4FDB702     ADCSEQ pc, r7, 0x3500
		   0x014FA824:  FCFDB702     ADCSEQ pc, r7, 0x3f00
		   0x014FA828:  F4FDB702     ADCSEQ pc, r7, 0x3d00
		   0x014FA82C:  2809B802     ADCSEQ r0, r8, 0xa0000
		   0x014FA830:  E0FDB702     ADCSEQ pc, r7, 0x3800
		   0x014FA834:  70D8B702     ADCSEQ sp, r7, 0x700000
		   0x014FA838:  FCF5B702     ADCSEQ pc, r7, 0x3f000000
		   0x014FA83C:  F8D2B802     ADCSEQ sp, r8, 0x8000000f
		   0x014FA840:  8CFDB702     ADCSEQ pc, r7, 0x2300
		   0x014FA844:  1CFDB702     ADCSEQ pc, r7, 0x700
		   0x014FA848:  683CB802     ADCSEQ r3, r8, 0x6800
		   0x014FA84C:  CCFCB702     ADCSEQ pc, r7, 0xcc00
		   0x014FA850:  94FCB702     ADCSEQ pc, r7, 0x9400
		   0x014FA854:  70FCB702     ADCSEQ pc, r7, 0x7000
		   0x014FA858:  84FCB702     ADCSEQ pc, r7, 0x8400
		   0x014FA85C:  54FCB702     ADCSEQ pc, r7, 0x5400
		   0x014FA860:  6807B802     ADCSEQ r0, r8, 0x1a00000
		   0x014FA864:  34F4B702     ADCSEQ pc, r7, 0x34000000
		   0x014FA868:  00D1B802     ADCSEQ sp, r8, 0x0
		   0x014FA86C:  48D6B702     ADCSEQ sp, r7, 0x4800000
		   0x014FA870:  C0BDB702     ADCSEQ fp, r7, 0x3000
		*/
	}

	// RVA: 0x14F775C Offset: 0x14F775C VA: 0x14F775C
	public ChestClaimPopupReward GetChestClaimPopupReward() {
		/* Disassembly (ARM32, 364 instructions, 0x5B0 bytes):
		   // CFG: 51 blocks, 53 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014F775C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x014F7760:  08D04DE2     SUB sp, sp, 0x8
		   0x014F7764:  18559FE5     LDR r5, [pc, 0x518]
		   0x014F7768:  0040A0E1     MOV r4, r0
		   0x014F776C:  05508FE0     ADD r5, pc, r5
		   0x014F7770:  0000D5E5     LDRB r0, [r5]
		   0x014F7774:  000050E3     CMPS r0, r0, 0x0
		   0x014F7778:  2B00001A     BNE $+0xb4  // if (!=) goto 0x014F782C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014F777C:  04059FE5     LDR r0, [pc, 0x504]
		   0x014F7780:  00009FE7     LDR r0, [pc, r0]
		   0x014F7784:  758EE9EB     BL $-0x59c624
		   0x014F7788:  FC049FE5     LDR r0, [pc, 0x4fc]
		   0x014F778C:  00009FE7     LDR r0, [pc, r0]
		   0x014F7790:  728EE9EB     BL $-0x59c630
		   0x014F7794:  F4049FE5     LDR r0, [pc, 0x4f4]
		   0x014F7798:  00009FE7     LDR r0, [pc, r0]
		   0x014F779C:  6F8EE9EB     BL $-0x59c63c
		   0x014F77A0:  EC049FE5     LDR r0, [pc, 0x4ec]
		   0x014F77A4:  00009FE7     LDR r0, [pc, r0]
		   0x014F77A8:  6C8EE9EB     BL $-0x59c648
		   0x014F77AC:  E4049FE5     LDR r0, [pc, 0x4e4]
		   0x014F77B0:  00009FE7     LDR r0, [pc, r0]
		   0x014F77B4:  698EE9EB     BL $-0x59c654
		   0x014F77B8:  DC049FE5     LDR r0, [pc, 0x4dc]
		   0x014F77BC:  00009FE7     LDR r0, [pc, r0]
		   0x014F77C0:  668EE9EB     BL $-0x59c660
		   0x014F77C4:  D4049FE5     LDR r0, [pc, 0x4d4]
		   0x014F77C8:  00009FE7     LDR r0, [pc, r0]
		   0x014F77CC:  638EE9EB     BL $-0x59c66c
		   0x014F77D0:  CC049FE5     LDR r0, [pc, 0x4cc]
		   0x014F77D4:  00009FE7     LDR r0, [pc, r0]
		   0x014F77D8:  608EE9EB     BL $-0x59c678
		   0x014F77DC:  C4049FE5     LDR r0, [pc, 0x4c4]
		   0x014F77E0:  00009FE7     LDR r0, [pc, r0]
		   0x014F77E4:  5D8EE9EB     BL $-0x59c684
		   0x014F77E8:  BC049FE5     LDR r0, [pc, 0x4bc]
		   0x014F77EC:  00009FE7     LDR r0, [pc, r0]
		   0x014F77F0:  5A8EE9EB     BL $-0x59c690
		   0x014F77F4:  B4049FE5     LDR r0, [pc, 0x4b4]
		   0x014F77F8:  00009FE7     LDR r0, [pc, r0]
		   0x014F77FC:  578EE9EB     BL $-0x59c69c
		   0x014F7800:  AC049FE5     LDR r0, [pc, 0x4ac]
		   0x014F7804:  00009FE7     LDR r0, [pc, r0]
		   0x014F7808:  548EE9EB     BL $-0x59c6a8
		   0x014F780C:  A4049FE5     LDR r0, [pc, 0x4a4]
		   0x014F7810:  00009FE7     LDR r0, [pc, r0]
		   0x014F7814:  518EE9EB     BL $-0x59c6b4
		   0x014F7818:  9C049FE5     LDR r0, [pc, 0x49c]
		   0x014F781C:  00009FE7     LDR r0, [pc, r0]
		   0x014F7820:  4E8EE9EB     BL $-0x59c6c0
		   0x014F7824:  0100A0E3     MOV r0, 0x1
		   0x014F7828:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014F782C:  8C049FE5     LDR r0, [pc, 0x48c]
		   0x014F7830:  0020A0E3     MOV r2, 0x0
		   0x014F7834:  00009FE7     LDR r0, [pc, r0]
		   0x014F7838:  085094E5     LDR r5, [r4, 0x8]
		   0x014F783C:  001090E5     LDR r1, [r0]
		   0x014F7840:  0000A0E3     MOV r0, 0x0
		   0x014F7844:  04008DE5     STR r0, [sp, 0x4]
		   0x014F7848:  0500A0E1     MOV r0, r5
		   0x014F784C:  6F3C66EB     BL $+0x198f1c4  // CALL → String.op_Equality
		   0x014F7850:  000050E3     CMPS r0, r0, 0x0
		   0x014F7854:  1500000A     BEQ $+0x5c  // if (==) goto 0x014F78B0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014F7858:  74049FE5     LDR r0, [pc, 0x474]
		   0x014F785C:  00009FE7     LDR r0, [pc, r0]
		   0x014F7860:  000090E5     LDR r0, [r0]
		   0x014F7864:  D68EE9EB     BL $-0x59c4a0
		   0x014F7868:  0010A0E3     MOV r1, 0x0
		   0x014F786C:  0050A0E1     MOV r5, r0
		   0x014F7870:  0060A0E3     MOV r6, 0x0
		   0x014F7874:  1F16F6EB     BL $-0x27a77c
		   0x014F7878:  0C4094E5     LDR r4, [r4, 0xc]
		   0x014F787C:  000055E3     CMPS r0, r5, 0x0
		   0x014F7880:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7888
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x014F7884:  D18EE9EB     BL $-0x59c4b4
		   // ──── Block 5 if (!=) ────────────────────
		   0x014F7888:  48049FE5     LDR r0, [pc, 0x448]
		   0x014F788C:  0910A0E3     MOV r1, 0x9
		   0x014F7890:  00009FE7     LDR r0, [pc, r0]
		   0x014F7894:  086085E5     STR r6, [r5, 0x8]
		   0x014F7898:  0C4085E5     STR r4, [r5, 0xc]
		   0x014F789C:  000090E5     LDR r0, [r0]
		   0x014F78A0:  100085E5     STR r0, [r5, 0x10]
		   0x014F78A4:  146085E5     STR r6, [r5, 0x14]
		   0x014F78A8:  181085E5     STR r1, [r5, 0x18]
		   0x014F78AC:  F10000EA     B $+0x3cc  // goto 0x014F7C78
		   // ──── Block 6 if (==) ────────────────────
		   0x014F78B0:  0C049FE5     LDR r0, [pc, 0x40c]
		   0x014F78B4:  0020A0E3     MOV r2, 0x0
		   0x014F78B8:  00009FE7     LDR r0, [pc, r0]
		   0x014F78BC:  001090E5     LDR r1, [r0]
		   0x014F78C0:  0500A0E1     MOV r0, r5
		   0x014F78C4:  513C66EB     BL $+0x198f14c  // CALL → String.op_Equality
		   0x014F78C8:  000050E3     CMPS r0, r0, 0x0
		   0x014F78CC:  1A00000A     BEQ $+0x70  // if (==) goto 0x014F793C
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x014F78D0:  04049FE5     LDR r0, [pc, 0x404]
		   0x014F78D4:  00009FE7     LDR r0, [pc, r0]
		   0x014F78D8:  000090E5     LDR r0, [r0]
		   0x014F78DC:  B88EE9EB     BL $-0x59c518
		   0x014F78E0:  0010A0E3     MOV r1, 0x0
		   0x014F78E4:  0050A0E1     MOV r5, r0
		   0x014F78E8:  0060A0E3     MOV r6, 0x0
		   0x014F78EC:  0116F6EB     BL $-0x27a7f4
		   0x014F78F0:  0C7094E5     LDR r7, [r4, 0xc]
		   0x014F78F4:  000055E3     CMPS r0, r5, 0x0
		   0x014F78F8:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7900
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014F78FC:  B38EE9EB     BL $-0x59c52c
		   // ──── Block 9 if (!=) ────────────────────
		   0x014F7900:  0400A0E1     MOV r0, r4
		   0x014F7904:  F860C5E1     STRD r6, r7, [r5, 0x8]
		   0x014F7908:  D90B00EB     BL $+0x2f6c  // CALL → ItemPack.GetRewardObject
		   0x014F790C:  0040A0E1     MOV r4, r0
		   0x014F7910:  000050E3     CMPS r0, r0, 0x0
		   0x014F7914:  0000001A     BNE $+0x8  // if (!=) goto 0x014F791C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x014F7918:  AC8EE9EB     BL $-0x59c548
		   // ──── Block 11 if (!=) ────────────────────
		   0x014F791C:  BC039FE5     LDR r0, [pc, 0x3bc]
		   0x014F7920:  103085E2     ADD r3, r5, 0x10
		   0x014F7924:  0010A0E3     MOV r1, 0x0
		   0x014F7928:  00009FE7     LDR r0, [pc, r0]
		   0x014F792C:  082094E5     LDR r2, [r4, 0x8]
		   0x014F7930:  000090E5     LDR r0, [r0]
		   0x014F7934:  070083E8     STM r3, {r0, r1, r2}
		   0x014F7938:  CE0000EA     B $+0x340  // goto 0x014F7C78
		   // ──── Block 12 if (==) ────────────────────
		   0x014F793C:  84039FE5     LDR r0, [pc, 0x384]
		   0x014F7940:  0020A0E3     MOV r2, 0x0
		   0x014F7944:  00009FE7     LDR r0, [pc, r0]
		   0x014F7948:  001090E5     LDR r1, [r0]
		   0x014F794C:  0500A0E1     MOV r0, r5
		   0x014F7950:  2E3C66EB     BL $+0x198f0c0  // CALL → String.op_Equality
		   0x014F7954:  000050E3     CMPS r0, r0, 0x0
		   0x014F7958:  2500000A     BEQ $+0x9c  // if (==) goto 0x014F79F4
		   // 
		   // ──── Block 13 else (!=) ────────────────────
		   0x014F795C:  68039FE5     LDR r0, [pc, 0x368]
		   0x014F7960:  00009FE7     LDR r0, [pc, r0]
		   0x014F7964:  000090E5     LDR r0, [r0]
		   0x014F7968:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F796C:  005090E5     LDR r5, [r0]
		   0x014F7970:  000055E3     CMPS r0, r5, 0x0
		   0x014F7974:  0000001A     BNE $+0x8  // if (!=) goto 0x014F797C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x014F7978:  948EE9EB     BL $-0x59c5a8
		   // ──── Block 15 if (!=) ────────────────────
		   0x014F797C:  285095E5     LDR r5, [r5, 0x28]
		   0x014F7980:  000055E3     CMPS r0, r5, 0x0
		   0x014F7984:  0000001A     BNE $+0x8  // if (!=) goto 0x014F798C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014F7988:  908EE9EB     BL $-0x59c5b8
		   // ──── Block 17 if (!=) ────────────────────
		   0x014F798C:  3C039FE5     LDR r0, [pc, 0x33c]
		   0x014F7990:  00009FE7     LDR r0, [pc, r0]
		   0x014F7994:  D862C5E1     LDRD r6, r7, [r5, 0x28]
		   0x014F7998:  000090E5     LDR r0, [r0]
		   0x014F799C:  888EE9EB     BL $-0x59c5d8
		   0x014F79A0:  0010A0E3     MOV r1, 0x0
		   0x014F79A4:  0050A0E1     MOV r5, r0
		   0x014F79A8:  D215F6EB     BL $-0x27a8b0
		   0x014F79AC:  0C9094E5     LDR sb, [r4, 0xc]
		   0x014F79B0:  000055E3     CMPS r0, r5, 0x0
		   0x014F79B4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F79BC
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x014F79B8:  848EE9EB     BL $-0x59c5e8
		   // ──── Block 19 if (!=) ────────────────────
		   0x014F79BC:  0400A0E1     MOV r0, r4
		   0x014F79C0:  086085E5     STR r6, [r5, 0x8]
		   0x014F79C4:  0C9085E5     STR sb, [r5, 0xc]
		   0x014F79C8:  A90B00EB     BL $+0x2eac  // CALL → ItemPack.GetRewardObject
		   0x014F79CC:  0040A0E1     MOV r4, r0
		   0x014F79D0:  000050E3     CMPS r0, r0, 0x0
		   0x014F79D4:  0000001A     BNE $+0x8  // if (!=) goto 0x014F79DC
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x014F79D8:  7C8EE9EB     BL $-0x59c608
		   // ──── Block 21 if (!=) ────────────────────
		   0x014F79DC:  0000A0E3     MOV r0, 0x0
		   0x014F79E0:  107085E5     STR r7, [r5, 0x10]  // vtable: Object.Equals
		   0x014F79E4:  140085E5     STR r0, [r5, 0x14]  // vtable: Object.Equals
		   0x014F79E8:  080094E5     LDR r0, [r4, 0x8]  // vtable: Object.Equals
		   0x014F79EC:  180085E5     STR r0, [r5, 0x18]
		   0x014F79F0:  A00000EA     B $+0x288  // goto 0x014F7C78
		   // ──── Block 22 if (==) ────────────────────
		   0x014F79F4:  081094E5     LDR r1, [r4, 0x8]
		   0x014F79F8:  04208DE2     ADD r2, sp, 0x4
		   0x014F79FC:  0400A0E1     MOV r0, r4
		   0x014F7A00:  8F0D00EB     BL $+0x3644  // CALL → ItemPack.TryConvertStringToChainOrder
		   0x014F7A04:  000050E3     CMPS r0, r0, 0x0
		   0x014F7A08:  3F00000A     BEQ $+0x104  // if (==) goto 0x014F7B0C
		   // 
		   // ──── Block 23 else (!=) ────────────────────
		   0x014F7A0C:  D0029FE5     LDR r0, [pc, 0x2d0]
		   0x014F7A10:  00009FE7     LDR r0, [pc, r0]
		   0x014F7A14:  000090E5     LDR r0, [r0]
		   0x014F7A18:  698EE9EB     BL $-0x59c654
		   0x014F7A1C:  0010A0E3     MOV r1, 0x0
		   0x014F7A20:  0060A0E1     MOV r6, r0
		   0x014F7A24:  0050A0E3     MOV r5, 0x0
		   0x014F7A28:  981200EB     BL $+0x4a68  // CALL → <>c__DisplayClass24_0..ctor
		   0x014F7A2C:  000056E3     CMPS r0, r6, 0x0
		   0x014F7A30:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7A38
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x014F7A34:  658EE9EB     BL $-0x59c664
		   // ──── Block 25 if (!=) ────────────────────
		   0x014F7A38:  04809DE5     LDR r8, [sp, 0x4]
		   0x014F7A3C:  085086E5     STR r5, [r6, 0x8]
		   0x014F7A40:  000058E3     CMPS r0, r8, 0x0
		   0x014F7A44:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7A4C
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x014F7A48:  608EE9EB     BL $-0x59c678
		   // ──── Block 27 if (!=) ────────────────────
		   0x014F7A4C:  94029FE5     LDR r0, [pc, 0x294]
		   0x014F7A50:  00009FE7     LDR r0, [pc, r0]
		   0x014F7A54:  185098E5     LDR r5, [r8, 0x18]
		   0x014F7A58:  000090E5     LDR r0, [r0]
		   0x014F7A5C:  588EE9EB     BL $-0x59c698
		   0x014F7A60:  0070A0E1     MOV r7, r0
		   0x014F7A64:  80029FE5     LDR r0, [pc, 0x280]
		   0x014F7A68:  0610A0E1     MOV r1, r6
		   0x014F7A6C:  0030A0E3     MOV r3, 0x0
		   0x014F7A70:  00009FE7     LDR r0, [pc, r0]
		   0x014F7A74:  002090E5     LDR r2, [r0]
		   0x014F7A78:  0700A0E1     MOV r0, r7
		   0x014F7A7C:  F1BA42EB     BL $+0x10aebcc  // CALL → Action<object>..ctor
		   0x014F7A80:  000055E3     CMPS r0, r5, 0x0
		   0x014F7A84:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7A8C
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x014F7A88:  508EE9EB     BL $-0x59c6b8
		   // ──── Block 29 if (!=) ────────────────────
		   0x014F7A8C:  0500A0E1     MOV r0, r5
		   0x014F7A90:  0710A0E1     MOV r1, r7
		   0x014F7A94:  0020A0E3     MOV r2, 0x0
		   0x014F7A98:  564BF0EB     BL $-0x3ed2a0
		   0x014F7A9C:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x014F7AA0:  00009FE7     LDR r0, [pc, r0]
		   0x014F7AA4:  000090E5     LDR r0, [r0]
		   0x014F7AA8:  458EE9EB     BL $-0x59c6e4
		   0x014F7AAC:  0010A0E3     MOV r1, 0x0
		   0x014F7AB0:  0050A0E1     MOV r5, r0
		   0x014F7AB4:  8F15F6EB     BL $-0x27a9bc
		   0x014F7AB8:  0C7094E5     LDR r7, [r4, 0xc]
		   0x014F7ABC:  000055E3     CMPS r0, r5, 0x0
		   0x014F7AC0:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7AC8
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x014F7AC4:  418EE9EB     BL $-0x59c6f4
		   // ──── Block 31 if (!=) ────────────────────
		   0x014F7AC8:  086096E5     LDR r6, [r6, 0x8]
		   0x014F7ACC:  0400A0E1     MOV r0, r4
		   0x014F7AD0:  F860C5E1     STRD r6, r7, [r5, 0x8]
		   0x014F7AD4:  660B00EB     BL $+0x2da0  // CALL → ItemPack.GetRewardObject
		   0x014F7AD8:  0040A0E1     MOV r4, r0
		   0x014F7ADC:  000050E3     CMPS r0, r0, 0x0
		   0x014F7AE0:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7AE8
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x014F7AE4:  398EE9EB     BL $-0x59c714
		   // ──── Block 33 if (!=) ────────────────────
		   0x014F7AE8:  186098E5     LDR r6, [r8, 0x18]
		   0x014F7AEC:  087094E5     LDR r7, [r4, 0x8]
		   0x014F7AF0:  000056E3     CMPS r0, r6, 0x0
		   0x014F7AF4:  F461C5E1     STRD r6, r7, [r5, 0x14]
		   0x014F7AF8:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7B00
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x014F7AFC:  338EE9EB     BL $-0x59c72c
		   // ──── Block 35 if (!=) ────────────────────
		   0x014F7B00:  780096E5     LDR r0, [r6, 0x78]
		   0x014F7B04:  100085E5     STR r0, [r5, 0x10]
		   0x014F7B08:  5A0000EA     B $+0x170  // goto 0x014F7C78
		   // ──── Block 36 if (==) ────────────────────
		   0x014F7B0C:  E0919FE5     LDR sb, [pc, 0x1e0]
		   0x014F7B10:  09909FE7     LDR sb, [pc, sb]
		   0x014F7B14:  085094E5     LDR r5, [r4, 0x8]
		   0x014F7B18:  000099E5     LDR r0, [sb]
		   0x014F7B1C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F7B20:  046090E5     LDR r6, [r0, 0x4]
		   0x014F7B24:  000056E3     CMPS r0, r6, 0x0
		   0x014F7B28:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7B30
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x014F7B2C:  278EE9EB     BL $-0x59c75c
		   // ──── Block 38 if (!=) ────────────────────
		   0x014F7B30:  0600A0E1     MOV r0, r6
		   0x014F7B34:  0510A0E1     MOV r1, r5
		   0x014F7B38:  0020A0E3     MOV r2, 0x0
		   0x014F7B3C:  A61CF2EB     BL $-0x378d60
		   0x014F7B40:  000050E3     CMPS r0, r0, 0x0
		   0x014F7B44:  2900000A     BEQ $+0xac  // if (==) goto 0x014F7BF0
		   // 
		   // ──── Block 39 else (!=) ────────────────────
		   0x014F7B48:  0080A0E1     MOV r8, r0
		   0x014F7B4C:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x014F7B50:  00009FE7     LDR r0, [pc, r0]
		   0x014F7B54:  000090E5     LDR r0, [r0]
		   0x014F7B58:  198EE9EB     BL $-0x59c794
		   0x014F7B5C:  0010A0E3     MOV r1, 0x0
		   0x014F7B60:  0050A0E1     MOV r5, r0
		   0x014F7B64:  6315F6EB     BL $-0x27aa6c
		   0x014F7B68:  0C7094E5     LDR r7, [r4, 0xc]
		   0x014F7B6C:  000055E3     CMPS r0, r5, 0x0
		   0x014F7B70:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7B78
		   // 
		   // ──── Block 40 else (==) ────────────────────
		   0x014F7B74:  158EE9EB     BL $-0x59c7a4
		   // ──── Block 41 if (!=) ────────────────────
		   0x014F7B78:  000099E5     LDR r0, [sb]
		   0x014F7B7C:  08A094E5     LDR r10, [r4, 0x8]
		   0x014F7B80:  0C7085E5     STR r7, [r5, 0xc]
		   0x014F7B84:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014F7B88:  046090E5     LDR r6, [r0, 0x4]
		   0x014F7B8C:  000056E3     CMPS r0, r6, 0x0
		   0x014F7B90:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7B98
		   // 
		   // ──── Block 42 else (==) ────────────────────
		   0x014F7B94:  0D8EE9EB     BL $-0x59c7c4
		   // ──── Block 43 if (!=) ────────────────────
		   0x014F7B98:  0600A0E1     MOV r0, r6
		   0x014F7B9C:  0A10A0E1     MOV r1, r10
		   0x014F7BA0:  0020A0E3     MOV r2, 0x0
		   0x014F7BA4:  0090A0E3     MOV sb, 0x0
		   0x014F7BA8:  EF2EF2EB     BL $-0x37443c
		   0x014F7BAC:  000050E3     CMPS r0, r0, 0x0
		   0x014F7BB0:  0010A0E3     MOV r1, 0x0
		   0x014F7BB4:  0400000A     BEQ $+0x18  // if (==) goto 0x014F7BCC
		   // 
		   // ──── Block 44 else (!=) ────────────────────
		   0x014F7BB8:  001090E5     LDR r1, [r0]
		   0x014F7BBC:  302191E5     LDR r2, [r1, 0x130]
		   0x014F7BC0:  341191E5     LDR r1, [r1, 0x134]
		   0x014F7BC4:  32FF2FE1     BLX r2  // virtual call: vtable+0x130
		   0x014F7BC8:  0010A0E1     MOV r1, r0
		   // ──── Block 45 if (==) ────────────────────
		   0x014F7BCC:  0800A0E3     MOV r0, 0x8
		   0x014F7BD0:  081085E5     STR r1, [r5, 0x8]  // this.s
		   0x014F7BD4:  180085E5     STR r0, [r5, 0x18]  // this.s
		   0x014F7BD8:  080094E5     LDR r0, [r4, 0x8]  // this.s
		   0x014F7BDC:  081098E5     LDR r1, [r8, 0x8]
		   0x014F7BE0:  149085E5     STR sb, [r5, 0x14]
		   0x014F7BE4:  101085E5     STR r1, [r5, 0x10]
		   0x014F7BE8:  1C0085E5     STR r0, [r5, 0x1c]
		   0x014F7BEC:  210000EA     B $+0x8c  // goto 0x014F7C78
		   // ──── Block 46 if (==) ────────────────────
		   0x014F7BF0:  D840C4E1     LDRD r4, r5, [r4, 0x8]
		   0x014F7BF4:  0D10A0E1     MOV r1, sp
		   0x014F7BF8:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x014F7BFC:  00009FE7     LDR r0, [pc, r0]
		   0x014F7C00:  00508DE5     STR r5, [sp]
		   0x014F7C04:  240090E5     LDR r0, [r0, 0x24]
		   0x014F7C08:  A38DE9EB     BL $-0x59c96c
		   0x014F7C0C:  0020A0E1     MOV r2, r0
		   0x014F7C10:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x014F7C14:  0410A0E1     MOV r1, r4
		   0x014F7C18:  0030A0E3     MOV r3, 0x0
		   0x014F7C1C:  0050A0E3     MOV r5, 0x0
		   0x014F7C20:  00009FE7     LDR r0, [pc, r0]
		   0x014F7C24:  000090E5     LDR r0, [r0]
		   0x014F7C28:  758866EB     BL $+0x19a21dc  // CALL → String.Format
		   0x014F7C2C:  0060A0E1     MOV r6, r0
		   0x014F7C30:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x014F7C34:  00009FE7     LDR r0, [pc, r0]
		   0x014F7C38:  000090E5     LDR r0, [r0]
		   0x014F7C3C:  E08DE9EB     BL $-0x59c878
		   0x014F7C40:  0610A0E1     MOV r1, r6
		   0x014F7C44:  0020A0E3     MOV r2, 0x0
		   0x014F7C48:  0040A0E1     MOV r4, r0
		   0x014F7C4C:  8C9900EB     BL $+0x26638  // CALL → InfoException..ctor
		   0x014F7C50:  B0009FE5     LDR r0, [pc, 0xb0]
		   0x014F7C54:  00009FE7     LDR r0, [pc, r0]
		   0x014F7C58:  000090E5     LDR r0, [r0]
		   0x014F7C5C:  741090E5     LDR r1, [r0, 0x74]
		   0x014F7C60:  000051E3     CMPS r0, r1, 0x0
		   0x014F7C64:  0000001A     BNE $+0x8  // if (!=) goto 0x014F7C6C
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x014F7C68:  898DE9EB     BL $-0x59c9d4
		   // ──── Block 48 if (!=) ────────────────────
		   0x014F7C6C:  0400A0E1     MOV r0, r4
		   0x014F7C70:  0010A0E3     MOV r1, 0x0
		   0x014F7C74:  44012CEB     BL $+0xb00518  // CALL → sub_1FF818C
		   // ──── Block 49 ──────────────────────────────
		   0x014F7C78:  0500A0E1     MOV r0, r5
		   0x014F7C7C:  08D08DE2     ADD sp, sp, 0x8
		   0x014F7C80:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x014F7C84:  B666D302     SBCSEQ r6, r3, 0xb600000
		   0x014F7C88:  5C0DB802     ADCSEQ r0, r8, 0x1700
		   0x014F7C8C:  B837B802     ADCSEQ r3, r8, 0x2e00000
		   0x014F7C90:  6404B802     ADCSEQ r0, r8, 0x64000000
		   0x014F7C94:  E4EDB702     ADCSEQ lr, r7, 0x3900
		   0x014F7C98:  1CFFB702     ADCSEQ pc, r7, 0x70
		   0x014F7C9C:  2C0DB802     ADCSEQ r0, r8, 0xb00
		   0x014F7CA0:  3800B902     ADCSEQ r0, sb, 0x38
		   0x014F7CA4:  3000B902     ADCSEQ r0, sb, 0x30
		   0x014F7CA8:  4410B802     ADCSEQ r1, r8, 0x44
		   0x014F7CAC:  340DB802     ADCSEQ r0, r8, 0xd00
		   0x014F7CB0:  1000B902     ADCSEQ r0, sb, 0x10
		   0x014F7CB4:  0800B902     ADCSEQ r0, sb, 0x8
		   0x014F7CB8:  986AB802     ADCSEQ r6, r8, 0x98000
		   0x014F7CBC:  BC28B802     ADCSEQ r2, r8, 0xbc0000
		   0x014F7CC0:  746AB802     ADCSEQ r6, r8, 0x74000
		   0x014F7CC4:  6C0FB802     ADCSEQ r0, r8, 0x1b0
		   0x014F7CC8:  9427B802     ADCSEQ r2, r8, 0x2500000
		   0x014F7CCC:  9C02B802     ADCSEQ r0, r8, 0xc0000009
		   0x014F7CD0:  B435B802     ADCSEQ r3, r8, 0x2d000000
		   0x014F7CD4:  E836B802     ADCSEQ r3, r8, 0xe800000
		   0x014F7CD8:  78FFB802     ADCSEQ pc, r8, 0x1e0
		   0x014F7CDC:  7036B802     ADCSEQ r3, r8, 0x7000000
		   0x014F7CE0:  F80BB802     ADCSEQ r0, r8, 0x3e000
		   0x014F7CE4:  F4FDB802     ADCSEQ pc, r8, 0x3d00
		   0x014F7CE8:  8C0AB802     ADCSEQ r0, r8, 0x8c000
		   0x014F7CEC:  90FDB802     ADCSEQ pc, r8, 0x2400
		   0x014F7CF0:  A434B802     ADCSEQ r3, r8, 0xa4000000
		   0x014F7CF4:  D809B802     ADCSEQ r0, r8, 0x360000
		   0x014F7CF8:  F433B802     ADCSEQ r3, r8, 0xd0000003
		   0x014F7CFC:  C4EAB702     ADCSEQ lr, r7, 0xc4000
		   0x014F7D00:  ECFBB802     ADCSEQ pc, r8, 0x3b000
		   0x014F7D04:  98FAB702     ADCSEQ pc, r7, 0x98000
		   0x014F7D08:  34E9B702     ADCSEQ lr, r7, 0xd0000
		*/
	}

	// RVA: 0x14FAD44 Offset: 0x14FAD44 VA: 0x14FAD44
	public bool CheckIfEligible() {
		/* Disassembly (ARM32, 192 instructions, 0x300 bytes):
		   // CFG: 35 blocks, 46 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FAD44:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014FAD48:  98529FE5     LDR r5, [pc, 0x298]
		   0x014FAD4C:  0040A0E1     MOV r4, r0
		   0x014FAD50:  05508FE0     ADD r5, pc, r5
		   0x014FAD54:  0000D5E5     LDRB r0, [r5]
		   0x014FAD58:  000050E3     CMPS r0, r0, 0x0
		   0x014FAD5C:  2200001A     BNE $+0x90  // if (!=) goto 0x014FADEC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FAD60:  84029FE5     LDR r0, [pc, 0x284]
		   0x014FAD64:  00009FE7     LDR r0, [pc, r0]
		   0x014FAD68:  FC80E9EB     BL $-0x59fc08
		   0x014FAD6C:  7C029FE5     LDR r0, [pc, 0x27c]
		   0x014FAD70:  00009FE7     LDR r0, [pc, r0]
		   0x014FAD74:  F980E9EB     BL $-0x59fc14
		   0x014FAD78:  74029FE5     LDR r0, [pc, 0x274]
		   0x014FAD7C:  00009FE7     LDR r0, [pc, r0]
		   0x014FAD80:  F680E9EB     BL $-0x59fc20
		   0x014FAD84:  6C029FE5     LDR r0, [pc, 0x26c]
		   0x014FAD88:  00009FE7     LDR r0, [pc, r0]
		   0x014FAD8C:  F380E9EB     BL $-0x59fc2c
		   0x014FAD90:  64029FE5     LDR r0, [pc, 0x264]
		   0x014FAD94:  00009FE7     LDR r0, [pc, r0]
		   0x014FAD98:  F080E9EB     BL $-0x59fc38
		   0x014FAD9C:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x014FADA0:  00009FE7     LDR r0, [pc, r0]
		   0x014FADA4:  ED80E9EB     BL $-0x59fc44
		   0x014FADA8:  54029FE5     LDR r0, [pc, 0x254]
		   0x014FADAC:  00009FE7     LDR r0, [pc, r0]
		   0x014FADB0:  EA80E9EB     BL $-0x59fc50
		   0x014FADB4:  4C029FE5     LDR r0, [pc, 0x24c]
		   0x014FADB8:  00009FE7     LDR r0, [pc, r0]
		   0x014FADBC:  E780E9EB     BL $-0x59fc5c
		   0x014FADC0:  44029FE5     LDR r0, [pc, 0x244]
		   0x014FADC4:  00009FE7     LDR r0, [pc, r0]
		   0x014FADC8:  E480E9EB     BL $-0x59fc68
		   0x014FADCC:  3C029FE5     LDR r0, [pc, 0x23c]
		   0x014FADD0:  00009FE7     LDR r0, [pc, r0]
		   0x014FADD4:  E180E9EB     BL $-0x59fc74
		   0x014FADD8:  34029FE5     LDR r0, [pc, 0x234]
		   0x014FADDC:  00009FE7     LDR r0, [pc, r0]
		   0x014FADE0:  DE80E9EB     BL $-0x59fc80
		   0x014FADE4:  0100A0E3     MOV r0, 0x1
		   0x014FADE8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FADEC:  0C0094E5     LDR r0, [r4, 0xc]
		   0x014FADF0:  010050E3     CMPS r0, r0, 0x1
		   0x014FADF4:  1A0000BA     BLT $+0x70  // if (<) goto 0x014FAE64
		   // 
		   // ──── Block 3 else (>=) ────────────────────
		   0x014FADF8:  080094E5     LDR r0, [r4, 0x8]
		   0x014FADFC:  0010A0E3     MOV r1, 0x0
		   0x014FAE00:  0050A0E3     MOV r5, 0x0
		   0x014FAE04:  7B7566EB     BL $+0x199d5f4  // CALL → String.IsNullOrEmpty
		   0x014FAE08:  000050E3     CMPS r0, r0, 0x0
		   0x014FAE0C:  5900001A     BNE $+0x16c  // if (!=) goto 0x014FAF78
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x014FAE10:  085094E5     LDR r5, [r4, 0x8]
		   0x014FAE14:  0010A0E3     MOV r1, 0x0
		   0x014FAE18:  0500A0E1     MOV r0, r5
		   0x014FAE1C:  B483FFEB     BL $-0x1f128
		   0x014FAE20:  C81902E3     MOV r1, 0x29c8
		   0x014FAE24:  CE1945E3     MOVT r1, 0x59ce
		   0x014FAE28:  010050E1     CMPS r0, r0, r1
		   0x014FAE2C:  0E00008A     BHI $+0x40  // if (> (unsigned)) goto 0x014FAE6C
		   // 
		   // ──── Block 5 else (<= (unsigned)) ────────────────────
		   0x014FAE30:  902E0AE3     MOV r2, 0xae90
		   0x014FAE34:  BD2543E3     MOVT r2, 0x35bd
		   0x014FAE38:  020050E1     CMPS r0, r0, r2
		   0x014FAE3C:  1700008A     BHI $+0x64  // if (> (unsigned)) goto 0x014FAEA0
		   // 
		   // ──── Block 6 else (<= (unsigned)) ────────────────────
		   0x014FAE40:  951005E3     MOV r1, 0x5095
		   0x014FAE44:  CC1942E3     MOVT r1, 0x29cc
		   0x014FAE48:  010050E1     CMPS r0, r0, r1
		   0x014FAE4C:  2700000A     BEQ $+0xa4  // if (==) goto 0x014FAEF0
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x014FAE50:  020050E1     CMPS r0, r0, r2
		   0x014FAE54:  3700001A     BNE $+0xe4  // if (!=) goto 0x014FAF38
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014FAE58:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x014FAE5C:  00009FE7     LDR r0, [pc, r0]
		   0x014FAE60:  2D0000EA     B $+0xbc  // goto 0x014FAF1C
		   // ──── Block 9 if (<) ────────────────────
		   0x014FAE64:  0050A0E3     MOV r5, 0x0
		   0x014FAE68:  420000EA     B $+0x110  // goto 0x014FAF78
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x014FAE6C:  ED1903E3     MOV r1, 0x39ed
		   0x014FAE70:  411E48E3     MOVT r1, 0x8e41
		   0x014FAE74:  010050E1     CMPS r0, r0, r1
		   0x014FAE78:  1100008A     BHI $+0x4c  // if (> (unsigned)) goto 0x014FAEC4
		   // 
		   // ──── Block 11 else (<= (unsigned)) ────────────────────
		   0x014FAE7C:  FD2F07E3     MOV r2, 0x7ffd
		   0x014FAE80:  FC2348E3     MOVT r2, 0x83fc
		   0x014FAE84:  020050E1     CMPS r0, r0, r2
		   0x014FAE88:  1B00000A     BEQ $+0x74  // if (==) goto 0x014FAEFC
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014FAE8C:  010050E1     CMPS r0, r0, r1
		   0x014FAE90:  2800001A     BNE $+0xa8  // if (!=) goto 0x014FAF38
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x014FAE94:  84019FE5     LDR r0, [pc, 0x184]
		   0x014FAE98:  00009FE7     LDR r0, [pc, r0]
		   0x014FAE9C:  1E0000EA     B $+0x80  // goto 0x014FAF1C
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x014FAEA0:  9F2508E3     MOV r2, 0x859f
		   0x014FAEA4:  232745E3     MOVT r2, 0x5723
		   0x014FAEA8:  020050E1     CMPS r0, r0, r2
		   0x014FAEAC:  1500000A     BEQ $+0x5c  // if (==) goto 0x014FAF08
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x014FAEB0:  010050E1     CMPS r0, r0, r1
		   0x014FAEB4:  1F00001A     BNE $+0x84  // if (!=) goto 0x014FAF38
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014FAEB8:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x014FAEBC:  00009FE7     LDR r0, [pc, r0]
		   0x014FAEC0:  150000EA     B $+0x5c  // goto 0x014FAF1C
		   // ──── Block 17 if (> (unsigned)) ────────────────────
		   0x014FAEC4:  EB140DE3     MOV r1, 0xd4eb
		   0x014FAEC8:  7E1F4AE3     MOVT r1, 0xaf7e
		   0x014FAECC:  010050E1     CMPS r0, r0, r1
		   0x014FAED0:  0F00000A     BEQ $+0x44  // if (==) goto 0x014FAF14
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x014FAED4:  921205E3     MOV r1, 0x5292
		   0x014FAED8:  8D174DE3     MOVT r1, 0xd78d
		   0x014FAEDC:  010050E1     CMPS r0, r0, r1
		   0x014FAEE0:  1400001A     BNE $+0x58  // if (!=) goto 0x014FAF38
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x014FAEE4:  38019FE5     LDR r0, [pc, 0x138]
		   0x014FAEE8:  00009FE7     LDR r0, [pc, r0]
		   0x014FAEEC:  0A0000EA     B $+0x30  // goto 0x014FAF1C
		   // ──── Block 20 if (==) ────────────────────
		   0x014FAEF0:  30019FE5     LDR r0, [pc, 0x130]
		   0x014FAEF4:  00009FE7     LDR r0, [pc, r0]
		   0x014FAEF8:  070000EA     B $+0x24  // goto 0x014FAF1C
		   // ──── Block 21 if (==) ────────────────────
		   0x014FAEFC:  28019FE5     LDR r0, [pc, 0x128]
		   0x014FAF00:  00009FE7     LDR r0, [pc, r0]
		   0x014FAF04:  040000EA     B $+0x18  // goto 0x014FAF1C
		   // ──── Block 22 if (==) ────────────────────
		   0x014FAF08:  20019FE5     LDR r0, [pc, 0x120]
		   0x014FAF0C:  00009FE7     LDR r0, [pc, r0]
		   0x014FAF10:  010000EA     B $+0xc  // goto 0x014FAF1C
		   // ──── Block 23 if (==) ────────────────────
		   0x014FAF14:  18019FE5     LDR r0, [pc, 0x118]
		   0x014FAF18:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 24 ──────────────────────────────
		   0x014FAF1C:  001090E5     LDR r1, [r0]
		   0x014FAF20:  0500A0E1     MOV r0, r5
		   0x014FAF24:  0020A0E3     MOV r2, 0x0
		   0x014FAF28:  B82E66EB     BL $+0x198bae8  // CALL → String.op_Equality
		   0x014FAF2C:  0150A0E3     MOV r5, 0x1
		   0x014FAF30:  000050E3     CMPS r0, r0, 0x0
		   0x014FAF34:  0F00001A     BNE $+0x44  // if (!=) goto 0x014FAF78
		   // 
		   // ──── Block 25 (from 5 paths) ──────────────────
		   0x014FAF38:  F8009FE5     LDR r0, [pc, 0xf8]
		   0x014FAF3C:  00009FE7     LDR r0, [pc, r0]
		   0x014FAF40:  085094E5     LDR r5, [r4, 0x8]
		   0x014FAF44:  000090E5     LDR r0, [r0]
		   0x014FAF48:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FAF4C:  046090E5     LDR r6, [r0, 0x4]
		   0x014FAF50:  000056E3     CMPS r0, r6, 0x0
		   0x014FAF54:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAF5C
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x014FAF58:  1C81E9EB     BL $-0x59fb88
		   // ──── Block 27 if (!=) ────────────────────
		   0x014FAF5C:  0600A0E1     MOV r0, r6
		   0x014FAF60:  0510A0E1     MOV r1, r5
		   0x014FAF64:  0020A0E3     MOV r2, 0x0
		   0x014FAF68:  9B0FF2EB     BL $-0x37c18c
		   0x014FAF6C:  0150A0E3     MOV r5, 0x1
		   0x014FAF70:  000050E3     CMPS r0, r0, 0x0
		   0x014FAF74:  0100000A     BEQ $+0xc  // if (==) goto 0x014FAF80
		   // 
		   // ──── Block 28 (from 3 paths) ──────────────────
		   0x014FAF78:  0500A0E1     MOV r0, r5
		   0x014FAF7C:  7080BDE8     POP {r4, r5, r6, pc}
		   // ──── Block 29 if (==) ────────────────────
		   0x014FAF80:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x014FAF84:  00009FE7     LDR r0, [pc, r0]
		   0x014FAF88:  084094E5     LDR r4, [r4, 0x8]
		   0x014FAF8C:  000090E5     LDR r0, [r0]
		   0x014FAF90:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FAF94:  005090E5     LDR r5, [r0]
		   0x014FAF98:  000055E3     CMPS r0, r5, 0x0
		   0x014FAF9C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAFA4
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x014FAFA0:  0A81E9EB     BL $-0x59fbd0
		   // ──── Block 31 if (!=) ────────────────────
		   0x014FAFA4:  0500A0E1     MOV r0, r5
		   0x014FAFA8:  0410A0E1     MOV r1, r4
		   0x014FAFAC:  0020A0E3     MOV r2, 0x0
		   0x014FAFB0:  4C49F2EB     BL $-0x36dac8
		   0x014FAFB4:  0040A0E1     MOV r4, r0
		   0x014FAFB8:  80009FE5     LDR r0, [pc, 0x80]
		   0x014FAFBC:  00009FE7     LDR r0, [pc, r0]
		   0x014FAFC0:  000090E5     LDR r0, [r0]
		   0x014FAFC4:  741090E5     LDR r1, [r0, 0x74]
		   0x014FAFC8:  000051E3     CMPS r0, r1, 0x0
		   0x014FAFCC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAFD4
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x014FAFD0:  AF80E9EB     BL $-0x59fd3c
		   // ──── Block 33 if (!=) ────────────────────
		   0x014FAFD4:  0400A0E1     MOV r0, r4
		   0x014FAFD8:  0010A0E3     MOV r1, 0x0
		   0x014FAFDC:  0020A0E3     MOV r2, 0x0
		   0x014FAFE0:  7040BDE8     POP {r4, r5, r6, lr}
		   0x014FAFE4:  E2A6ECEA     B $-0x4d6470
		   0x014FAFE8:  D330D302     SBCSEQ r3, r3, 0xd3
		   0x014FAFEC:  88D8B702     ADCSEQ sp, r7, 0x880000
		   0x014FAFF0:  C8B7B702     ADCSEQ fp, r7, 0x3200000
		   0x014FAFF4:  6CD7B702     ADCSEQ sp, r7, 0x1b00000
		   0x014FAFF8:  00EEB702     ADCSEQ lr, r7, 0x0
		   0x014FAFFC:  78DEB702     ADCSEQ sp, r7, 0x780
		   0x014FB000:  84DAB702     ADCSEQ sp, r7, 0x84000
		   0x014FB004:  D834B802     ADCSEQ r3, r8, 0xd8000000
		   0x014FB008:  24DFB702     ADCSEQ sp, r7, 0x90
		   0x014FB00C:  D4CAB802     ADCSEQ ip, r8, 0xd4000
		   0x014FB010:  D834B802     ADCSEQ r3, r8, 0xd8000000
		   0x014FB014:  FCF2B702     ADCSEQ pc, r7, 0xc000000f
		   0x014FB018:  3CCAB802     ADCSEQ ip, r8, 0x3c000
		   0x014FB01C:  C833B802     ADCSEQ r3, r8, 0x20000003
		   0x014FB020:  74DDB702     ADCSEQ sp, r7, 0x1d00
		   0x014FB024:  F0F1B702     ADCSEQ pc, r7, 0x3c
		   0x014FB028:  E8DDB702     ADCSEQ sp, r7, 0x3a00
		   0x014FB02C:  88ECB702     ADCSEQ lr, r7, 0x8800
		   0x014FB030:  18D9B702     ADCSEQ sp, r7, 0x60000
		   0x014FB034:  9033B802     ADCSEQ r3, r8, 0x40000002
		   0x014FB038:  ACD5B702     ADCSEQ sp, r7, 0x2b000000
		   0x014FB03C:  68D6B702     ADCSEQ sp, r7, 0x6800000
		   0x014FB040:  7CB5B702     ADCSEQ fp, r7, 0x1f000000
		*/
	}

	// RVA: 0x14EAE90 Offset: 0x14EAE90 VA: 0x14EAE90
	public ItemObject GetItemObject() {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014EAE90:  00482DE9     PUSH {fp, lr}
		   0x014EAE94:  08D04DE2     SUB sp, sp, 0x8
		   0x014EAE98:  0020A0E3     MOV r2, 0x0
		   0x014EAE9C:  081090E5     LDR r1, [r0, 0x8]
		   0x014EAEA0:  04208DE5     STR r2, [sp, 0x4]
		   0x014EAEA4:  04208DE2     ADD r2, sp, 0x4
		   0x014EAEA8:  654000EB     BL $+0x1019c  // CALL → ItemPack.TryConvertStringToChainOrder
		   0x014EAEAC:  04109DE5     LDR r1, [sp, 0x4]
		   0x014EAEB0:  000050E3     CMPS r0, r0, 0x0
		   0x014EAEB4:  0100A011     MOVNE r0, r1
		   0x014EAEB8:  08D08DE2     ADD sp, sp, 0x8
		   0x014EAEBC:  0088BDE8     POP {fp, pc}
		*/
	}

	// RVA: 0x14FAD38 Offset: 0x14FAD38 VA: 0x14FAD38
	public bool TryGetItemObject(out ItemObject itemObject) {
		/* Disassembly (ARM32, 3 instructions, 0xC bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FAD38:  0120A0E1     MOV r2, r1
		   0x014FAD3C:  081090E5     LDR r1, [r0, 0x8]
		   0x014FAD40:  BF0000EA     B $+0x304  // TAIL CALL → ItemPack.TryConvertStringToChainOrder
		*/
	}

	// RVA: 0x14FA874 Offset: 0x14FA874 VA: 0x14FA874
	public Reward GetRewardObject() {
		/* Disassembly (ARM32, 223 instructions, 0x37C bytes):
		   // CFG: 42 blocks, 48 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FA874:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014FA878:  08D04DE2     SUB sp, sp, 0x8
		   0x014FA87C:  48449FE5     LDR r4, [pc, 0x448]
		   0x014FA880:  0050A0E1     MOV r5, r0
		   0x014FA884:  04408FE0     ADD r4, pc, r4
		   0x014FA888:  0000D4E5     LDRB r0, [r4]
		   0x014FA88C:  000050E3     CMPS r0, r0, 0x0
		   0x014FA890:  2800001A     BNE $+0xa8  // if (!=) goto 0x014FA938
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FA894:  34049FE5     LDR r0, [pc, 0x434]
		   0x014FA898:  00009FE7     LDR r0, [pc, r0]
		   0x014FA89C:  2F82E9EB     BL $-0x59f73c
		   0x014FA8A0:  2C049FE5     LDR r0, [pc, 0x42c]
		   0x014FA8A4:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8A8:  2C82E9EB     BL $-0x59f748
		   0x014FA8AC:  24049FE5     LDR r0, [pc, 0x424]
		   0x014FA8B0:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8B4:  2982E9EB     BL $-0x59f754
		   0x014FA8B8:  1C049FE5     LDR r0, [pc, 0x41c]
		   0x014FA8BC:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8C0:  2682E9EB     BL $-0x59f760
		   0x014FA8C4:  14049FE5     LDR r0, [pc, 0x414]
		   0x014FA8C8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8CC:  2382E9EB     BL $-0x59f76c
		   0x014FA8D0:  0C049FE5     LDR r0, [pc, 0x40c]
		   0x014FA8D4:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8D8:  2082E9EB     BL $-0x59f778
		   0x014FA8DC:  04049FE5     LDR r0, [pc, 0x404]
		   0x014FA8E0:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8E4:  1D82E9EB     BL $-0x59f784
		   0x014FA8E8:  FC039FE5     LDR r0, [pc, 0x3fc]
		   0x014FA8EC:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8F0:  1A82E9EB     BL $-0x59f790
		   0x014FA8F4:  F4039FE5     LDR r0, [pc, 0x3f4]
		   0x014FA8F8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA8FC:  1782E9EB     BL $-0x59f79c
		   0x014FA900:  EC039FE5     LDR r0, [pc, 0x3ec]
		   0x014FA904:  00009FE7     LDR r0, [pc, r0]
		   0x014FA908:  1482E9EB     BL $-0x59f7a8
		   0x014FA90C:  E4039FE5     LDR r0, [pc, 0x3e4]
		   0x014FA910:  00009FE7     LDR r0, [pc, r0]
		   0x014FA914:  1182E9EB     BL $-0x59f7b4
		   0x014FA918:  DC039FE5     LDR r0, [pc, 0x3dc]
		   0x014FA91C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA920:  0E82E9EB     BL $-0x59f7c0
		   0x014FA924:  D4039FE5     LDR r0, [pc, 0x3d4]
		   0x014FA928:  00009FE7     LDR r0, [pc, r0]
		   0x014FA92C:  0B82E9EB     BL $-0x59f7cc
		   0x014FA930:  0100A0E3     MOV r0, 0x1
		   0x014FA934:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FA938:  C4039FE5     LDR r0, [pc, 0x3c4]
		   0x014FA93C:  00009FE7     LDR r0, [pc, r0]
		   0x014FA940:  000090E5     LDR r0, [r0]
		   0x014FA944:  9E82E9EB     BL $-0x59f580
		   0x014FA948:  0010A0E3     MOV r1, 0x0
		   0x014FA94C:  0040A0E1     MOV r4, r0
		   0x014FA950:  85B5F0EB     BL $-0x3d29e4
		   0x014FA954:  0C7095E5     LDR r7, [r5, 0xc]
		   0x014FA958:  000054E3     CMPS r0, r4, 0x0
		   0x014FA95C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FA964
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FA960:  9A82E9EB     BL $-0x59f590
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FA964:  086095E5     LDR r6, [r5, 0x8]
		   0x014FA968:  0010A0E3     MOV r1, 0x0
		   0x014FA96C:  187084E5     STR r7, [r4, 0x18]
		   0x014FA970:  0600A0E1     MOV r0, r6
		   0x014FA974:  DE84FFEB     BL $-0x1ec80
		   0x014FA978:  C81902E3     MOV r1, 0x29c8
		   0x014FA97C:  CE1945E3     MOVT r1, 0x59ce
		   0x014FA980:  010050E1     CMPS r0, r0, r1
		   0x014FA984:  1300008A     BHI $+0x54  // if (> (unsigned)) goto 0x014FA9D8
		   // 
		   // ──── Block 5 else (<= (unsigned)) ────────────────────
		   0x014FA988:  952005E3     MOV r2, 0x5095
		   0x014FA98C:  CC2942E3     MOVT r2, 0x29cc
		   0x014FA990:  020050E1     CMPS r0, r0, r2
		   0x014FA994:  4000000A     BEQ $+0x108  // if (==) goto 0x014FAA9C
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x014FA998:  9F2508E3     MOV r2, 0x859f
		   0x014FA99C:  232745E3     MOVT r2, 0x5723
		   0x014FA9A0:  020050E1     CMPS r0, r0, r2
		   0x014FA9A4:  3200000A     BEQ $+0xd0  // if (==) goto 0x014FAA74
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x014FA9A8:  010050E1     CMPS r0, r0, r1
		   0x014FA9AC:  5700001A     BNE $+0x164  // if (!=) goto 0x014FAB10
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014FA9B0:  50039FE5     LDR r0, [pc, 0x350]
		   0x014FA9B4:  0020A0E3     MOV r2, 0x0
		   0x014FA9B8:  00009FE7     LDR r0, [pc, r0]
		   0x014FA9BC:  001090E5     LDR r1, [r0]
		   0x014FA9C0:  0600A0E1     MOV r0, r6
		   0x014FA9C4:  113066EB     BL $+0x198c04c  // CALL → String.op_Equality
		   0x014FA9C8:  000050E3     CMPS r0, r0, 0x0
		   0x014FA9CC:  4F00000A     BEQ $+0x144  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x014FA9D0:  0400A0E3     MOV r0, 0x4
		   0x014FA9D4:  B80000EA     B $+0x2e8
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x014FA9D8:  ED1903E3     MOV r1, 0x39ed
		   0x014FA9DC:  411E48E3     MOVT r1, 0x8e41
		   0x014FA9E0:  010050E1     CMPS r0, r0, r1
		   0x014FA9E4:  1000008A     BHI $+0x48  // if (> (unsigned)) goto 0x014FAA2C
		   // 
		   // ──── Block 11 else (<= (unsigned)) ────────────────────
		   0x014FA9E8:  FD2F07E3     MOV r2, 0x7ffd
		   0x014FA9EC:  FC2348E3     MOVT r2, 0x83fc
		   0x014FA9F0:  020050E1     CMPS r0, r0, r2
		   0x014FA9F4:  3100000A     BEQ $+0xcc  // if (==) goto 0x014FAAC0
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014FA9F8:  010050E1     CMPS r0, r0, r1
		   0x014FA9FC:  4300001A     BNE $+0x114  // if (!=) goto 0x014FAB10
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x014FAA00:  04039FE5     LDR r0, [pc, 0x304]
		   0x014FAA04:  0020A0E3     MOV r2, 0x0
		   0x014FAA08:  0070A0E3     MOV r7, 0x0
		   0x014FAA0C:  00009FE7     LDR r0, [pc, r0]
		   0x014FAA10:  001090E5     LDR r1, [r0]
		   0x014FAA14:  0600A0E1     MOV r0, r6
		   0x014FAA18:  FC2F66EB     BL $+0x198bff8  // CALL → String.op_Equality
		   0x014FAA1C:  000050E3     CMPS r0, r0, 0x0
		   0x014FAA20:  3A00000A     BEQ $+0xf0  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x014FAA24:  087084E5     STR r7, [r4, 0x8]
		   0x014FAA28:  A40000EA     B $+0x298
		   // ──── Block 15 if (> (unsigned)) ────────────────────
		   0x014FAA2C:  EB140DE3     MOV r1, 0xd4eb
		   0x014FAA30:  7E1F4AE3     MOVT r1, 0xaf7e
		   0x014FAA34:  010050E1     CMPS r0, r0, r1
		   0x014FAA38:  2A00000A     BEQ $+0xb0  // if (==) goto 0x014FAAE8
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x014FAA3C:  921205E3     MOV r1, 0x5292
		   0x014FAA40:  8D174DE3     MOVT r1, 0xd78d
		   0x014FAA44:  010050E1     CMPS r0, r0, r1
		   0x014FAA48:  3000001A     BNE $+0xc8  // if (!=) goto 0x014FAB10
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x014FAA4C:  BC029FE5     LDR r0, [pc, 0x2bc]
		   0x014FAA50:  0020A0E3     MOV r2, 0x0
		   0x014FAA54:  00009FE7     LDR r0, [pc, r0]
		   0x014FAA58:  001090E5     LDR r1, [r0]
		   0x014FAA5C:  0600A0E1     MOV r0, r6
		   0x014FAA60:  EA2F66EB     BL $+0x198bfb0  // CALL → String.op_Equality
		   0x014FAA64:  000050E3     CMPS r0, r0, 0x0
		   0x014FAA68:  2800000A     BEQ $+0xa8  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x014FAA6C:  0600A0E3     MOV r0, 0x6
		   0x014FAA70:  910000EA     B $+0x24c
		   // ──── Block 19 if (==) ────────────────────
		   0x014FAA74:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x014FAA78:  0020A0E3     MOV r2, 0x0
		   0x014FAA7C:  00009FE7     LDR r0, [pc, r0]
		   0x014FAA80:  001090E5     LDR r1, [r0]
		   0x014FAA84:  0600A0E1     MOV r0, r6
		   0x014FAA88:  E02F66EB     BL $+0x198bf88  // CALL → String.op_Equality
		   0x014FAA8C:  000050E3     CMPS r0, r0, 0x0
		   0x014FAA90:  1E00000A     BEQ $+0x80  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 20 else (!=) ────────────────────
		   0x014FAA94:  0500A0E3     MOV r0, 0x5
		   0x014FAA98:  870000EA     B $+0x224
		   // ──── Block 21 if (==) ────────────────────
		   0x014FAA9C:  70029FE5     LDR r0, [pc, 0x270]
		   0x014FAAA0:  0020A0E3     MOV r2, 0x0
		   0x014FAAA4:  00009FE7     LDR r0, [pc, r0]
		   0x014FAAA8:  001090E5     LDR r1, [r0]
		   0x014FAAAC:  0600A0E1     MOV r0, r6
		   0x014FAAB0:  D62F66EB     BL $+0x198bf60  // CALL → String.op_Equality
		   0x014FAAB4:  000050E3     CMPS r0, r0, 0x0
		   0x014FAAB8:  1400000A     BEQ $+0x58  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x014FAABC:  7D0000EA     B $+0x1fc
		   // ──── Block 23 if (==) ────────────────────
		   0x014FAAC0:  58029FE5     LDR r0, [pc, 0x258]
		   0x014FAAC4:  0020A0E3     MOV r2, 0x0
		   0x014FAAC8:  00009FE7     LDR r0, [pc, r0]
		   0x014FAACC:  001090E5     LDR r1, [r0]
		   0x014FAAD0:  0600A0E1     MOV r0, r6
		   0x014FAAD4:  CD2F66EB     BL $+0x198bf3c  // CALL → String.op_Equality
		   0x014FAAD8:  000050E3     CMPS r0, r0, 0x0
		   0x014FAADC:  0B00000A     BEQ $+0x34  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x014FAAE0:  0100A0E3     MOV r0, 0x1
		   0x014FAAE4:  740000EA     B $+0x1d8
		   // ──── Block 25 if (==) ────────────────────
		   0x014FAAE8:  2C029FE5     LDR r0, [pc, 0x22c]
		   0x014FAAEC:  0020A0E3     MOV r2, 0x0
		   0x014FAAF0:  00009FE7     LDR r0, [pc, r0]
		   0x014FAAF4:  001090E5     LDR r1, [r0]
		   0x014FAAF8:  0600A0E1     MOV r0, r6
		   0x014FAAFC:  C32F66EB     BL $+0x198bf14  // CALL → String.op_Equality
		   0x014FAB00:  000050E3     CMPS r0, r0, 0x0
		   0x014FAB04:  0100000A     BEQ $+0xc  // if (==) goto 0x014FAB10
		   // 
		   // ──── Block 26 else (!=) ────────────────────
		   0x014FAB08:  0900A0E3     MOV r0, 0x9
		   0x014FAB0C:  6A0000EA     B $+0x1b0
		   // ──── Block 27 (from 10 paths) ──────────────────
		   0x014FAB10:  081095E5     LDR r1, [r5, 0x8]
		   0x014FAB14:  0000A0E3     MOV r0, 0x0
		   0x014FAB18:  04208DE2     ADD r2, sp, 0x4
		   0x014FAB1C:  04008DE5     STR r0, [sp, 0x4]
		   0x014FAB20:  0500A0E1     MOV r0, r5
		   0x014FAB24:  460100EB     BL $+0x520  // CALL → ItemPack.TryConvertStringToChainOrder
		   0x014FAB28:  0010A0E1     MOV r1, r0
		   0x014FAB2C:  F0019FE5     LDR r0, [pc, 0x1f0]
		   0x014FAB30:  000051E3     CMPS r0, r1, 0x0
		   0x014FAB34:  00009FE7     LDR r0, [pc, r0]
		   0x014FAB38:  04609DE5     LDR r6, [sp, 0x4]
		   0x014FAB3C:  0160A001     MOVEQ r6, r1
		   0x014FAB40:  000090E5     LDR r0, [r0]
		   0x014FAB44:  742090E5     LDR r2, [r0, 0x74]
		   0x014FAB48:  000052E3     CMPS r0, r2, 0x0
		   0x014FAB4C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAB54
		   // 
		   // ──── Block 28 else (==) ────────────────────
		   0x014FAB50:  CF81E9EB     BL $-0x59f8bc
		   // ──── Block 29 if (!=) ────────────────────
		   0x014FAB54:  0600A0E1     MOV r0, r6
		   0x014FAB58:  0010A0E3     MOV r1, 0x0
		   0x014FAB5C:  A6F52BEB     BL $+0xafd6a0  // CALL → sub_1FF81FC
		   0x014FAB60:  000050E3     CMPS r0, r0, 0x0
		   0x014FAB64:  2600000A     BEQ $+0xa0
		   0x014FAB68:  000056E3     CMPS r0, r6, 0x0
		   0x014FAB6C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAB74
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x014FAB70:  1682E9EB     BL $-0x59f7a0
		   // ──── Block 32 if (!=) ────────────────────
		   0x014FAB74:  185096E5     LDR r5, [r6, 0x18]
		   0x014FAB78:  000055E3     CMPS r0, r5, 0x0
		   0x014FAB7C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAB84
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x014FAB80:  1282E9EB     BL $-0x59f7b0
		   // ──── Block 34 if (!=) ────────────────────
		   0x014FAB84:  085095E5     LDR r5, [r5, 0x8]
		   0x014FAB88:  000055E3     CMPS r0, r5, 0x0
		   0x014FAB8C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FAB94
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x014FAB90:  0E82E9EB     BL $-0x59f7c0
		   // ──── Block 36 if (!=) ────────────────────
		   0x014FAB94:  187096E5     LDR r7, [r6, 0x18]
		   0x014FAB98:  180095E5     LDR r0, [r5, 0x18]
		   0x014FAB9C:  000057E3     CMPS r0, r7, 0x0
		   0x014FABA0:  100084E5     STR r0, [r4, 0x10]
		   0x014FABA4:  0750A0E1     MOV r5, r7
		   0x014FABA8:  0100001A     BNE $+0xc  // if (!=) goto 0x014FABB4
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x014FABAC:  0782E9EB     BL $-0x59f7dc
		   0x014FABB0:  185096E5     LDR r5, [r6, 0x18]
		   // ──── Block 38 if (!=) ────────────────────
		   0x014FABB4:  087097E5     LDR r7, [r7, 0x8]
		   0x014FABB8:  000057E3     CMPS r0, r7, 0x0
		   0x014FABBC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FABC4
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x014FABC0:  0282E9EB     BL $-0x59f7f0
		   // ──── Block 40 if (!=) ────────────────────
		   0x014FABC4:  0700A0E1     MOV r0, r7
		   0x014FABC8:  0510A0E1     MOV r1, r5
		   0x014FABCC:  0020A0E3     MOV r2, 0x0
		   0x014FABD0:  8D4AEFEB     BL $-0x42d5c4
		   0x014FABD4:  185096E5     LDR r5, [r6, 0x18]
		   0x014FABD8:  140084E5     STR r0, [r4, 0x14]
		   0x014FABDC:  0300A0E3     MOV r0, 0x3
		   0x014FABE0:  000055E3     CMPS r0, r5, 0x0
		   0x014FABE4:  080084E5     STR r0, [r4, 0x8]
		   0x014FABE8:  0000001A     BNE $+0x8
		   0x014FABEC:  F781E9EB     BL $-0x59f81c
		*/
	}

	// RVA: 0x14FB3B4 Offset: 0x14FB3B4 VA: 0x14FB3B4
	public bool TryGetRewardType(out RewardType rewardType) {
		/* Disassembly (ARM32, 278 instructions, 0x458 bytes):
		   // CFG: 40 blocks, 58 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FB3B4:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x014FB3B8:  08D04DE2     SUB sp, sp, 0x8
		   0x014FB3BC:  DC439FE5     LDR r4, [pc, 0x3dc]
		   0x014FB3C0:  0050A0E1     MOV r5, r0
		   0x014FB3C4:  0180A0E1     MOV r8, r1
		   0x014FB3C8:  04408FE0     ADD r4, pc, r4
		   0x014FB3CC:  0000D4E5     LDRB r0, [r4]
		   0x014FB3D0:  000050E3     CMPS r0, r0, 0x0
		   0x014FB3D4:  2800001A     BNE $+0xa8  // if (!=) goto 0x014FB47C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FB3D8:  C4039FE5     LDR r0, [pc, 0x3c4]
		   0x014FB3DC:  00009FE7     LDR r0, [pc, r0]
		   0x014FB3E0:  5E7FE9EB     BL $-0x5a0280
		   0x014FB3E4:  BC039FE5     LDR r0, [pc, 0x3bc]
		   0x014FB3E8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB3EC:  5B7FE9EB     BL $-0x5a028c
		   0x014FB3F0:  B4039FE5     LDR r0, [pc, 0x3b4]
		   0x014FB3F4:  00009FE7     LDR r0, [pc, r0]
		   0x014FB3F8:  587FE9EB     BL $-0x5a0298
		   0x014FB3FC:  AC039FE5     LDR r0, [pc, 0x3ac]
		   0x014FB400:  00009FE7     LDR r0, [pc, r0]
		   0x014FB404:  557FE9EB     BL $-0x5a02a4
		   0x014FB408:  A4039FE5     LDR r0, [pc, 0x3a4]
		   0x014FB40C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB410:  527FE9EB     BL $-0x5a02b0
		   0x014FB414:  9C039FE5     LDR r0, [pc, 0x39c]
		   0x014FB418:  00009FE7     LDR r0, [pc, r0]
		   0x014FB41C:  4F7FE9EB     BL $-0x5a02bc
		   0x014FB420:  94039FE5     LDR r0, [pc, 0x394]
		   0x014FB424:  00009FE7     LDR r0, [pc, r0]
		   0x014FB428:  4C7FE9EB     BL $-0x5a02c8
		   0x014FB42C:  8C039FE5     LDR r0, [pc, 0x38c]
		   0x014FB430:  00009FE7     LDR r0, [pc, r0]
		   0x014FB434:  497FE9EB     BL $-0x5a02d4
		   0x014FB438:  84039FE5     LDR r0, [pc, 0x384]
		   0x014FB43C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB440:  467FE9EB     BL $-0x5a02e0
		   0x014FB444:  7C039FE5     LDR r0, [pc, 0x37c]
		   0x014FB448:  00009FE7     LDR r0, [pc, r0]
		   0x014FB44C:  437FE9EB     BL $-0x5a02ec
		   0x014FB450:  74039FE5     LDR r0, [pc, 0x374]
		   0x014FB454:  00009FE7     LDR r0, [pc, r0]
		   0x014FB458:  407FE9EB     BL $-0x5a02f8
		   0x014FB45C:  6C039FE5     LDR r0, [pc, 0x36c]
		   0x014FB460:  00009FE7     LDR r0, [pc, r0]
		   0x014FB464:  3D7FE9EB     BL $-0x5a0304
		   0x014FB468:  64039FE5     LDR r0, [pc, 0x364]
		   0x014FB46C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB470:  3A7FE9EB     BL $-0x5a0310
		   0x014FB474:  0100A0E3     MOV r0, 0x1
		   0x014FB478:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FB47C:  086095E5     LDR r6, [r5, 0x8]
		   0x014FB480:  0010A0E3     MOV r1, 0x0
		   0x014FB484:  0600A0E1     MOV r0, r6
		   0x014FB488:  1982FFEB     BL $-0x1f794
		   0x014FB48C:  FD1F07E3     MOV r1, 0x7ffd
		   0x014FB490:  FC1348E3     MOVT r1, 0x83fc
		   0x014FB494:  010050E1     CMPS r0, r0, r1
		   0x014FB498:  1400008A     BHI $+0x58  // if (> (unsigned)) goto 0x014FB4F0
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x014FB49C:  9F2508E3     MOV r2, 0x859f
		   0x014FB4A0:  232745E3     MOVT r2, 0x5723
		   0x014FB4A4:  020050E1     CMPS r0, r0, r2
		   0x014FB4A8:  2500008A     BHI $+0x9c  // if (> (unsigned)) goto 0x014FB544
		   // 
		   // ──── Block 4 else (<= (unsigned)) ────────────────────
		   0x014FB4AC:  951005E3     MOV r1, 0x5095
		   0x014FB4B0:  CC1942E3     MOVT r1, 0x29cc
		   0x014FB4B4:  010050E1     CMPS r0, r0, r1
		   0x014FB4B8:  4500000A     BEQ $+0x11c  // if (==) goto 0x014FB5D4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014FB4BC:  020050E1     CMPS r0, r0, r2
		   0x014FB4C0:  6F00001A     BNE $+0x1c4  // if (!=) goto 0x014FB684
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014FB4C4:  0C039FE5     LDR r0, [pc, 0x30c]
		   0x014FB4C8:  0020A0E3     MOV r2, 0x0
		   0x014FB4CC:  00009FE7     LDR r0, [pc, r0]
		   0x014FB4D0:  001090E5     LDR r1, [r0]
		   0x014FB4D4:  0600A0E1     MOV r0, r6
		   0x014FB4D8:  4C2D66EB     BL $+0x198b538  // CALL → String.op_Equality
		   0x014FB4DC:  000050E3     CMPS r0, r0, 0x0
		   0x014FB4E0:  6700000A     BEQ $+0x1a4  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x014FB4E4:  0160A0E3     MOV r6, 0x1
		   0x014FB4E8:  0540A0E3     MOV r4, 0x5
		   0x014FB4EC:  A70000EA     B $+0x2a4  // goto 0x014FB790
		   // ──── Block 8 if (> (unsigned)) ────────────────────
		   0x014FB4F0:  ED1903E3     MOV r1, 0x39ed
		   0x014FB4F4:  411E48E3     MOVT r1, 0x8e41
		   0x014FB4F8:  010050E1     CMPS r0, r0, r1
		   0x014FB4FC:  2100008A     BHI $+0x8c  // if (> (unsigned)) goto 0x014FB588
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x014FB500:  972601E3     MOV r2, 0x1697
		   0x014FB504:  382E48E3     MOVT r2, 0x8e38
		   0x014FB508:  020050E1     CMPS r0, r0, r2
		   0x014FB50C:  3B00000A     BEQ $+0xf4  // if (==) goto 0x014FB600
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x014FB510:  010050E1     CMPS r0, r0, r1
		   0x014FB514:  5A00001A     BNE $+0x170  // if (!=) goto 0x014FB684
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x014FB518:  C0029FE5     LDR r0, [pc, 0x2c0]
		   0x014FB51C:  0020A0E3     MOV r2, 0x0
		   0x014FB520:  0040A0E3     MOV r4, 0x0
		   0x014FB524:  00009FE7     LDR r0, [pc, r0]
		   0x014FB528:  001090E5     LDR r1, [r0]
		   0x014FB52C:  0600A0E1     MOV r0, r6
		   0x014FB530:  362D66EB     BL $+0x198b4e0  // CALL → String.op_Equality
		   0x014FB534:  0160A0E3     MOV r6, 0x1
		   0x014FB538:  000050E3     CMPS r0, r0, 0x0
		   0x014FB53C:  5000000A     BEQ $+0x148  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014FB540:  920000EA     B $+0x250  // goto 0x014FB790
		   // ──── Block 13 if (> (unsigned)) ────────────────────
		   0x014FB544:  010050E1     CMPS r0, r0, r1
		   0x014FB548:  3700000A     BEQ $+0xe4  // if (==) goto 0x014FB62C
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x014FB54C:  C81902E3     MOV r1, 0x29c8
		   0x014FB550:  CE1945E3     MOVT r1, 0x59ce
		   0x014FB554:  010050E1     CMPS r0, r0, r1
		   0x014FB558:  4900001A     BNE $+0x12c  // if (!=) goto 0x014FB684
		   // 
		   // ──── Block 15 else (==) ────────────────────
		   0x014FB55C:  78029FE5     LDR r0, [pc, 0x278]
		   0x014FB560:  0020A0E3     MOV r2, 0x0
		   0x014FB564:  00009FE7     LDR r0, [pc, r0]
		   0x014FB568:  001090E5     LDR r1, [r0]
		   0x014FB56C:  0600A0E1     MOV r0, r6
		   0x014FB570:  262D66EB     BL $+0x198b4a0  // CALL → String.op_Equality
		   0x014FB574:  000050E3     CMPS r0, r0, 0x0
		   0x014FB578:  4100000A     BEQ $+0x10c  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 16 else (!=) ────────────────────
		   0x014FB57C:  0160A0E3     MOV r6, 0x1
		   0x014FB580:  0440A0E3     MOV r4, 0x4
		   0x014FB584:  810000EA     B $+0x20c  // goto 0x014FB790
		   // ──── Block 17 if (> (unsigned)) ────────────────────
		   0x014FB588:  EB140DE3     MOV r1, 0xd4eb
		   0x014FB58C:  7E1F4AE3     MOVT r1, 0xaf7e
		   0x014FB590:  010050E1     CMPS r0, r0, r1
		   0x014FB594:  2F00000A     BEQ $+0xc4  // if (==) goto 0x014FB658
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x014FB598:  921205E3     MOV r1, 0x5292
		   0x014FB59C:  8D174DE3     MOVT r1, 0xd78d
		   0x014FB5A0:  010050E1     CMPS r0, r0, r1
		   0x014FB5A4:  3600001A     BNE $+0xe0  // if (!=) goto 0x014FB684
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x014FB5A8:  34029FE5     LDR r0, [pc, 0x234]
		   0x014FB5AC:  0020A0E3     MOV r2, 0x0
		   0x014FB5B0:  00009FE7     LDR r0, [pc, r0]
		   0x014FB5B4:  001090E5     LDR r1, [r0]
		   0x014FB5B8:  0600A0E1     MOV r0, r6
		   0x014FB5BC:  132D66EB     BL $+0x198b454  // CALL → String.op_Equality
		   0x014FB5C0:  000050E3     CMPS r0, r0, 0x0
		   0x014FB5C4:  2E00000A     BEQ $+0xc0  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 20 else (!=) ────────────────────
		   0x014FB5C8:  0160A0E3     MOV r6, 0x1
		   0x014FB5CC:  0640A0E3     MOV r4, 0x6
		   0x014FB5D0:  6E0000EA     B $+0x1c0  // goto 0x014FB790
		   // ──── Block 21 if (==) ────────────────────
		   0x014FB5D4:  0C029FE5     LDR r0, [pc, 0x20c]
		   0x014FB5D8:  0020A0E3     MOV r2, 0x0
		   0x014FB5DC:  00009FE7     LDR r0, [pc, r0]
		   0x014FB5E0:  001090E5     LDR r1, [r0]
		   0x014FB5E4:  0600A0E1     MOV r0, r6
		   0x014FB5E8:  082D66EB     BL $+0x198b428  // CALL → String.op_Equality
		   0x014FB5EC:  000050E3     CMPS r0, r0, 0x0
		   0x014FB5F0:  2300000A     BEQ $+0x94  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x014FB5F4:  0160A0E3     MOV r6, 0x1
		   0x014FB5F8:  0240A0E3     MOV r4, 0x2
		   0x014FB5FC:  630000EA     B $+0x194  // goto 0x014FB790
		   // ──── Block 23 if (==) ────────────────────
		   0x014FB600:  E8019FE5     LDR r0, [pc, 0x1e8]
		   0x014FB604:  0020A0E3     MOV r2, 0x0
		   0x014FB608:  00009FE7     LDR r0, [pc, r0]
		   0x014FB60C:  001090E5     LDR r1, [r0]
		   0x014FB610:  0600A0E1     MOV r0, r6
		   0x014FB614:  FD2C66EB     BL $+0x198b3fc  // CALL → String.op_Equality
		   0x014FB618:  000050E3     CMPS r0, r0, 0x0
		   0x014FB61C:  1800000A     BEQ $+0x68  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x014FB620:  0160A0E3     MOV r6, 0x1
		   0x014FB624:  0740A0E3     MOV r4, 0x7
		   0x014FB628:  580000EA     B $+0x168  // goto 0x014FB790
		   // ──── Block 25 if (==) ────────────────────
		   0x014FB62C:  C0019FE5     LDR r0, [pc, 0x1c0]
		   0x014FB630:  0020A0E3     MOV r2, 0x0
		   0x014FB634:  00009FE7     LDR r0, [pc, r0]
		   0x014FB638:  001090E5     LDR r1, [r0]
		   0x014FB63C:  0600A0E1     MOV r0, r6
		   0x014FB640:  F22C66EB     BL $+0x198b3d0  // CALL → String.op_Equality
		   0x014FB644:  0140A0E3     MOV r4, 0x1
		   0x014FB648:  000050E3     CMPS r0, r0, 0x0
		   0x014FB64C:  0160A0E3     MOV r6, 0x1
		   0x014FB650:  0B00000A     BEQ $+0x34  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 26 else (!=) ────────────────────
		   0x014FB654:  4D0000EA     B $+0x13c  // goto 0x014FB790
		   // ──── Block 27 if (==) ────────────────────
		   0x014FB658:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x014FB65C:  0020A0E3     MOV r2, 0x0
		   0x014FB660:  00009FE7     LDR r0, [pc, r0]
		   0x014FB664:  001090E5     LDR r1, [r0]
		   0x014FB668:  0600A0E1     MOV r0, r6
		   0x014FB66C:  E72C66EB     BL $+0x198b3a4  // CALL → String.op_Equality
		   0x014FB670:  000050E3     CMPS r0, r0, 0x0
		   0x014FB674:  0200000A     BEQ $+0x10  // if (==) goto 0x014FB684
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x014FB678:  0160A0E3     MOV r6, 0x1
		   0x014FB67C:  0940A0E3     MOV r4, 0x9
		   0x014FB680:  420000EA     B $+0x110  // goto 0x014FB790
		   // ──── Block 29 (from 12 paths) ──────────────────
		   0x014FB684:  081095E5     LDR r1, [r5, 0x8]
		   0x014FB688:  0000A0E3     MOV r0, 0x0
		   0x014FB68C:  04208DE2     ADD r2, sp, 0x4
		   0x014FB690:  04008DE5     STR r0, [sp, 0x4]
		   0x014FB694:  0500A0E1     MOV r0, r5
		   0x014FB698:  69FEFFEB     BL $-0x654
		   0x014FB69C:  0010A0E1     MOV r1, r0
		   0x014FB6A0:  50019FE5     LDR r0, [pc, 0x150]
		   0x014FB6A4:  000051E3     CMPS r0, r1, 0x0
		   0x014FB6A8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB6AC:  04609DE5     LDR r6, [sp, 0x4]
		   0x014FB6B0:  0160A001     MOVEQ r6, r1
		   0x014FB6B4:  000090E5     LDR r0, [r0]
		   0x014FB6B8:  742090E5     LDR r2, [r0, 0x74]
		   0x014FB6BC:  000052E3     CMPS r0, r2, 0x0
		   0x014FB6C0:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB6C8
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x014FB6C4:  F27EE9EB     BL $-0x5a0430
		   // ──── Block 31 if (!=) ────────────────────
		   0x014FB6C8:  0600A0E1     MOV r0, r6
		   0x014FB6CC:  0010A0E3     MOV r1, 0x0
		   0x014FB6D0:  C9F22BEB     BL $+0xafcb2c  // CALL → sub_1FF81FC
		   0x014FB6D4:  0160A0E3     MOV r6, 0x1
		   0x014FB6D8:  0340A0E3     MOV r4, 0x3
		   0x014FB6DC:  000050E3     CMPS r0, r0, 0x0
		   0x014FB6E0:  2A00001A     BNE $+0xb0  // if (!=) goto 0x014FB790
		   // 
		   // ──── Block 32 else (==) ────────────────────
		   0x014FB6E4:  10019FE5     LDR r0, [pc, 0x110]
		   0x014FB6E8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB6EC:  087095E5     LDR r7, [r5, 0x8]
		   0x014FB6F0:  000090E5     LDR r0, [r0]
		   0x014FB6F4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FB6F8:  044090E5     LDR r4, [r0, 0x4]
		   0x014FB6FC:  000054E3     CMPS r0, r4, 0x0
		   0x014FB700:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB708
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x014FB704:  317FE9EB     BL $-0x5a0334
		   // ──── Block 34 if (!=) ────────────────────
		   0x014FB708:  0400A0E1     MOV r0, r4
		   0x014FB70C:  0710A0E1     MOV r1, r7
		   0x014FB710:  0020A0E3     MOV r2, 0x0
		   0x014FB714:  B00DF2EB     BL $-0x37c938
		   0x014FB718:  0840A0E3     MOV r4, 0x8
		   0x014FB71C:  000050E3     CMPS r0, r0, 0x0
		   0x014FB720:  1A00001A     BNE $+0x70  // if (!=) goto 0x014FB790
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x014FB724:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x014FB728:  0020A0E3     MOV r2, 0x0
		   0x014FB72C:  0060A0E3     MOV r6, 0x0
		   0x014FB730:  00009FE7     LDR r0, [pc, r0]
		   0x014FB734:  081095E5     LDR r1, [r5, 0x8]
		   0x014FB738:  000090E5     LDR r0, [r0]
		   0x014FB73C:  FF3766EB     BL $+0x198e004  // CALL → String.Concat
		   0x014FB740:  0040A0E1     MOV r4, r0
		   0x014FB744:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x014FB748:  00009FE7     LDR r0, [pc, r0]
		   0x014FB74C:  000090E5     LDR r0, [r0]
		   0x014FB750:  1B7FE9EB     BL $-0x5a038c
		   0x014FB754:  0410A0E1     MOV r1, r4
		   0x014FB758:  0020A0E3     MOV r2, 0x0
		   0x014FB75C:  0050A0E1     MOV r5, r0
		   0x014FB760:  35366EEB     BL $+0x1b8d8dc  // CALL → Exception..ctor
		   0x014FB764:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x014FB768:  00009FE7     LDR r0, [pc, r0]
		   0x014FB76C:  000090E5     LDR r0, [r0]
		   0x014FB770:  741090E5     LDR r1, [r0, 0x74]
		   0x014FB774:  000051E3     CMPS r0, r1, 0x0
		   0x014FB778:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB780
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x014FB77C:  C47EE9EB     BL $-0x5a04e8
		   // ──── Block 37 if (!=) ────────────────────
		   0x014FB780:  0500A0E1     MOV r0, r5
		   0x014FB784:  0010A0E3     MOV r1, 0x0
		   0x014FB788:  7FF22BEB     BL $+0xafca04  // CALL → sub_1FF818C
		   0x014FB78C:  0040E0E3     MVN r4, r0, 0x0
		   // ──── Block 38 (from 2 paths) ──────────────────
		   0x014FB790:  004088E5     STR r4, [r8]
		   0x014FB794:  0600A0E1     MOV r0, r6
		   0x014FB798:  08D08DE2     ADD sp, sp, 0x8
		   0x014FB79C:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x014FB7A0:  5D2AD302     SBCSEQ r2, r3, 0x5d000
		   0x014FB7A4:  ACB1B702     ADCSEQ fp, r7, 0x2b
		   0x014FB7A8:  04B5B702     ADCSEQ fp, r7, 0x1000000
		   0x014FB7AC:  44B1B702     ADCSEQ fp, r7, 0x11
		   0x014FB7B0:  E8D0B702     ADCSEQ sp, r7, 0xe8
		   0x014FB7B4:  88C4B802     ADCSEQ ip, r8, 0x88000000
		   0x014FB7B8:  70E7B702     ADCSEQ lr, r7, 0x1c00000
		   0x014FB7BC:  E8D7B702     ADCSEQ sp, r7, 0x3a00000
		   0x014FB7C0:  F4D3B702     ADCSEQ sp, r7, 0xd0000003
		   0x014FB7C4:  482EB802     ADCSEQ r2, r8, 0x480
		   0x014FB7C8:  94D8B702     ADCSEQ sp, r7, 0x940000
		   0x014FB7CC:  38C4B802     ADCSEQ ip, r8, 0x38000000
		   0x014FB7D0:  482EB802     ADCSEQ r2, r8, 0x480
		   0x014FB7D4:  6CECB702     ADCSEQ lr, r7, 0x6c00
		   0x014FB7D8:  58D3B702     ADCSEQ sp, r7, 0x60000001
		   0x014FB7DC:  202DB802     ADCSEQ r2, r8, 0x800
		   0x014FB7E0:  E8D6B702     ADCSEQ sp, r7, 0xe800000
		   0x014FB7E4:  28EBB702     ADCSEQ lr, r7, 0xa000
		   0x014FB7E8:  00D7B702     ADCSEQ sp, r7, 0x0
		   0x014FB7EC:  482CB802     ADCSEQ r2, r8, 0x4800
		   0x014FB7F0:  84C2B802     ADCSEQ ip, r8, 0x40000008
		   0x014FB7F4:  54E5B702     ADCSEQ lr, r7, 0x15000000
		   0x014FB7F8:  90AEB702     ADCSEQ r10, r7, 0x900
		   0x014FB7FC:  00CEB702     ADCSEQ ip, r7, 0x0
		   0x014FB800:  64C1B802     ADCSEQ ip, r8, 0x19
		   0x014FB804:  A4B1B702     ADCSEQ fp, r7, 0x29
		   0x014FB808:  20AEB702     ADCSEQ r10, r7, 0x200
		*/
	}

	// RVA: 0x14FB80C Offset: 0x14FB80C VA: 0x14FB80C
	public ConfigItemID ConvertToConfigItemID() {
		/* Disassembly (ARM32, 70 instructions, 0x118 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FB80C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014FB810:  08D04DE2     SUB sp, sp, 0x8
		   0x014FB814:  FC509FE5     LDR r5, [pc, 0xfc]
		   0x014FB818:  0040A0E1     MOV r4, r0
		   0x014FB81C:  05508FE0     ADD r5, pc, r5
		   0x014FB820:  0000D5E5     LDRB r0, [r5]
		   0x014FB824:  000050E3     CMPS r0, r0, 0x0
		   0x014FB828:  0400001A     BNE $+0x18  // if (!=) goto 0x014FB840
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FB82C:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x014FB830:  00009FE7     LDR r0, [pc, r0]
		   0x014FB834:  497EE9EB     BL $-0x5a06d4
		   0x014FB838:  0100A0E3     MOV r0, 0x1
		   0x014FB83C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FB840:  081094E5     LDR r1, [r4, 0x8]
		   0x014FB844:  0000A0E3     MOV r0, 0x0
		   0x014FB848:  04208DE2     ADD r2, sp, 0x4
		   0x014FB84C:  04008DE5     STR r0, [sp, 0x4]
		   0x014FB850:  0400A0E1     MOV r0, r4
		   0x014FB854:  FAFDFFEB     BL $-0x810
		   0x014FB858:  04709DE5     LDR r7, [sp, 0x4]
		   0x014FB85C:  000050E3     CMPS r0, r0, 0x0
		   0x014FB860:  0070A001     MOVEQ r7, r0
		   0x014FB864:  000057E3     CMPS r0, r7, 0x0
		   0x014FB868:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB870
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FB86C:  D77EE9EB     BL $-0x5a049c
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FB870:  185097E5     LDR r5, [r7, 0x18]
		   0x014FB874:  000055E3     CMPS r0, r5, 0x0
		   0x014FB878:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB880
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014FB87C:  D37EE9EB     BL $-0x5a04ac
		   // ──── Block 6 if (!=) ────────────────────
		   0x014FB880:  085095E5     LDR r5, [r5, 0x8]
		   0x014FB884:  000055E3     CMPS r0, r5, 0x0
		   0x014FB888:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB890
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014FB88C:  CF7EE9EB     BL $-0x5a04bc
		   // ──── Block 8 if (!=) ────────────────────
		   0x014FB890:  88009FE5     LDR r0, [pc, 0x88]
		   0x014FB894:  00009FE7     LDR r0, [pc, r0]
		   0x014FB898:  186095E5     LDR r6, [r5, 0x18]
		   0x014FB89C:  000090E5     LDR r0, [r0]
		   0x014FB8A0:  C77EE9EB     BL $-0x5a04dc
		   0x014FB8A4:  0610A0E1     MOV r1, r6
		   0x014FB8A8:  0020A0E3     MOV r2, 0x0
		   0x014FB8AC:  0050A0E1     MOV r5, r0
		   0x014FB8B0:  80F9EFEB     BL $-0x4019f8
		   0x014FB8B4:  0C6094E5     LDR r6, [r4, 0xc]
		   0x014FB8B8:  000055E3     CMPS r0, r5, 0x0
		   0x014FB8BC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB8C4
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x014FB8C0:  C27EE9EB     BL $-0x5a04f0
		   // ──── Block 10 if (!=) ────────────────────
		   0x014FB8C4:  184097E5     LDR r4, [r7, 0x18]
		   0x014FB8C8:  106085E5     STR r6, [r5, 0x10]
		   0x014FB8CC:  000054E3     CMPS r0, r4, 0x0
		   0x014FB8D0:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB8D8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x014FB8D4:  BD7EE9EB     BL $-0x5a0504
		   // ──── Block 12 if (!=) ────────────────────
		   0x014FB8D8:  0400A0E1     MOV r0, r4
		   0x014FB8DC:  0010A0E3     MOV r1, 0x0
		   0x014FB8E0:  4039F0EB     BL $-0x3f1af8
		   0x014FB8E4:  184097E5     LDR r4, [r7, 0x18]
		   0x014FB8E8:  180085E5     STR r0, [r5, 0x18]
		   0x014FB8EC:  000054E3     CMPS r0, r4, 0x0
		   0x014FB8F0:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB8F8
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x014FB8F4:  B57EE9EB     BL $-0x5a0524
		   // ──── Block 14 if (!=) ────────────────────
		   0x014FB8F8:  0400A0E1     MOV r0, r4
		   0x014FB8FC:  0010A0E3     MOV r1, 0x0
		   0x014FB900:  3839F0EB     BL $-0x3f1b18
		   0x014FB904:  010080E2     ADD r0, r0, 0x1
		   0x014FB908:  0C0085E5     STR r0, [r5, 0xc]
		   0x014FB90C:  0500A0E1     MOV r0, r5
		   0x014FB910:  08D08DE2     ADD sp, sp, 0x8
		   0x014FB914:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014FB918:  0A26D302     SBCSEQ r2, r3, 0xa00000
		   0x014FB91C:  D4D3B702     ADCSEQ sp, r7, 0x50000003
		   0x014FB920:  70D3B702     ADCSEQ sp, r7, 0xc0000001
		*/
	}

	// RVA: 0x14FB924 Offset: 0x14FB924 VA: 0x14FB924
	public GoalTarget ConvertToGoalTarget() {
		/* Disassembly (ARM32, 43 instructions, 0xAC bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FB924:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x014FB928:  08D04DE2     SUB sp, sp, 0x8
		   0x014FB92C:  90509FE5     LDR r5, [pc, 0x90]
		   0x014FB930:  0040A0E1     MOV r4, r0
		   0x014FB934:  05508FE0     ADD r5, pc, r5
		   0x014FB938:  0000D5E5     LDRB r0, [r5]
		   0x014FB93C:  000050E3     CMPS r0, r0, 0x0
		   0x014FB940:  0400001A     BNE $+0x18  // if (!=) goto 0x014FB958
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FB944:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x014FB948:  00009FE7     LDR r0, [pc, r0]
		   0x014FB94C:  037EE9EB     BL $-0x5a07ec
		   0x014FB950:  0100A0E3     MOV r0, 0x1
		   0x014FB954:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FB958:  081094E5     LDR r1, [r4, 0x8]
		   0x014FB95C:  04208DE2     ADD r2, sp, 0x4
		   0x014FB960:  0080A0E3     MOV r8, 0x0
		   0x014FB964:  0400A0E1     MOV r0, r4
		   0x014FB968:  04808DE5     STR r8, [sp, 0x4]
		   0x014FB96C:  B4FDFFEB     BL $-0x928
		   0x014FB970:  0050A0E1     MOV r5, r0
		   0x014FB974:  04709DE5     LDR r7, [sp, 0x4]
		   0x014FB978:  4C009FE5     LDR r0, [pc, 0x4c]
		   0x014FB97C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB980:  000090E5     LDR r0, [r0]
		   0x014FB984:  8E7EE9EB     BL $-0x5a05c0
		   0x014FB988:  0010A0E3     MOV r1, 0x0
		   0x014FB98C:  0060A0E1     MOV r6, r0
		   0x014FB990:  986D00EB     BL $+0x1b668  // CALL → GoalTarget..ctor
		   0x014FB994:  000056E3     CMPS r0, r6, 0x0
		   0x014FB998:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB9A0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FB99C:  8B7EE9EB     BL $-0x5a05cc
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FB9A0:  000055E3     CMPS r0, r5, 0x0
		   0x014FB9A4:  0C0094E5     LDR r0, [r4, 0xc]
		   0x014FB9A8:  0570A001     MOVEQ r7, r5
		   0x014FB9AC:  0C0086E5     STR r0, [r6, 0xc]
		   0x014FB9B0:  087086E5     STR r7, [r6, 0x8]
		   0x014FB9B4:  0600A0E1     MOV r0, r6
		   0x014FB9B8:  108086E5     STR r8, [r6, 0x10]
		   0x014FB9BC:  08D08DE2     ADD sp, sp, 0x8
		   0x014FB9C0:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x014FB9C4:  F324D302     SBCSEQ r2, r3, 0xf3000000
		   0x014FB9C8:  2CFDB702     ADCSEQ pc, r7, 0xb00
		   0x014FB9CC:  F8FCB702     ADCSEQ pc, r7, 0xf800
		*/
	}

	// RVA: 0x14FB9D0 Offset: 0x14FB9D0 VA: 0x14FB9D0
	public bool IsItCurrency() {
		/* Disassembly (ARM32, 131 instructions, 0x20C bytes):
		   // CFG: 27 blocks, 32 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FB9D0:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014FB9D4:  BC519FE5     LDR r5, [pc, 0x1bc]
		   0x014FB9D8:  0040A0E1     MOV r4, r0
		   0x014FB9DC:  05508FE0     ADD r5, pc, r5
		   0x014FB9E0:  0000D5E5     LDRB r0, [r5]
		   0x014FB9E4:  000050E3     CMPS r0, r0, 0x0
		   0x014FB9E8:  1900001A     BNE $+0x6c  // if (!=) goto 0x014FBA54
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FB9EC:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x014FB9F0:  00009FE7     LDR r0, [pc, r0]
		   0x014FB9F4:  D97DE9EB     BL $-0x5a0894
		   0x014FB9F8:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x014FB9FC:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA00:  D67DE9EB     BL $-0x5a08a0
		   0x014FBA04:  98019FE5     LDR r0, [pc, 0x198]
		   0x014FBA08:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA0C:  D37DE9EB     BL $-0x5a08ac
		   0x014FBA10:  90019FE5     LDR r0, [pc, 0x190]
		   0x014FBA14:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA18:  D07DE9EB     BL $-0x5a08b8
		   0x014FBA1C:  88019FE5     LDR r0, [pc, 0x188]
		   0x014FBA20:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA24:  CD7DE9EB     BL $-0x5a08c4
		   0x014FBA28:  80019FE5     LDR r0, [pc, 0x180]
		   0x014FBA2C:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA30:  CA7DE9EB     BL $-0x5a08d0
		   0x014FBA34:  78019FE5     LDR r0, [pc, 0x178]
		   0x014FBA38:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA3C:  C77DE9EB     BL $-0x5a08dc
		   0x014FBA40:  70019FE5     LDR r0, [pc, 0x170]
		   0x014FBA44:  00009FE7     LDR r0, [pc, r0]
		   0x014FBA48:  C47DE9EB     BL $-0x5a08e8
		   0x014FBA4C:  0100A0E3     MOV r0, 0x1
		   0x014FBA50:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FBA54:  084094E5     LDR r4, [r4, 0x8]
		   0x014FBA58:  0010A0E3     MOV r1, 0x0
		   0x014FBA5C:  0400A0E1     MOV r0, r4
		   0x014FBA60:  A380FFEB     BL $-0x1fd6c
		   0x014FBA64:  C81902E3     MOV r1, 0x29c8
		   0x014FBA68:  CE1945E3     MOVT r1, 0x59ce
		   0x014FBA6C:  010050E1     CMPS r0, r0, r1
		   0x014FBA70:  0C00008A     BHI $+0x38  // if (> (unsigned)) goto 0x014FBAA8
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x014FBA74:  902E0AE3     MOV r2, 0xae90
		   0x014FBA78:  BD2543E3     MOVT r2, 0x35bd
		   0x014FBA7C:  020050E1     CMPS r0, r0, r2
		   0x014FBA80:  1500008A     BHI $+0x5c  // if (> (unsigned)) goto 0x014FBADC
		   // 
		   // ──── Block 4 else (<= (unsigned)) ────────────────────
		   0x014FBA84:  951005E3     MOV r1, 0x5095
		   0x014FBA88:  CC1942E3     MOVT r1, 0x29cc
		   0x014FBA8C:  010050E1     CMPS r0, r0, r1
		   0x014FBA90:  2700000A     BEQ $+0xa4  // if (==) goto 0x014FBB34
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014FBA94:  020050E1     CMPS r0, r0, r2
		   0x014FBA98:  2300001A     BNE $+0x94  // if (!=) goto 0x014FBB2C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014FBA9C:  18019FE5     LDR r0, [pc, 0x118]
		   0x014FBAA0:  00009FE7     LDR r0, [pc, r0]
		   0x014FBAA4:  320000EA     B $+0xd0  // goto 0x014FBB74
		   // ──── Block 7 if (> (unsigned)) ────────────────────
		   0x014FBAA8:  ED1903E3     MOV r1, 0x39ed
		   0x014FBAAC:  411E48E3     MOVT r1, 0x8e41
		   0x014FBAB0:  010050E1     CMPS r0, r0, r1
		   0x014FBAB4:  1100008A     BHI $+0x4c  // if (> (unsigned)) goto 0x014FBB00
		   // 
		   // ──── Block 8 else (<= (unsigned)) ────────────────────
		   0x014FBAB8:  FD2F07E3     MOV r2, 0x7ffd
		   0x014FBABC:  FC2348E3     MOVT r2, 0x83fc
		   0x014FBAC0:  020050E1     CMPS r0, r0, r2
		   0x014FBAC4:  1D00000A     BEQ $+0x7c  // if (==) goto 0x014FBB40
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x014FBAC8:  010050E1     CMPS r0, r0, r1
		   0x014FBACC:  1600001A     BNE $+0x60  // if (!=) goto 0x014FBB2C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x014FBAD0:  EC009FE5     LDR r0, [pc, 0xec]
		   0x014FBAD4:  00009FE7     LDR r0, [pc, r0]
		   0x014FBAD8:  1A0000EA     B $+0x70  // goto 0x014FBB48
		   // ──── Block 11 if (> (unsigned)) ────────────────────
		   0x014FBADC:  9F2508E3     MOV r2, 0x859f
		   0x014FBAE0:  232745E3     MOVT r2, 0x5723
		   0x014FBAE4:  020050E1     CMPS r0, r0, r2
		   0x014FBAE8:  1C00000A     BEQ $+0x78  // if (==) goto 0x014FBB60
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014FBAEC:  010050E1     CMPS r0, r0, r1
		   0x014FBAF0:  0D00001A     BNE $+0x3c  // if (!=) goto 0x014FBB2C
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x014FBAF4:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x014FBAF8:  00009FE7     LDR r0, [pc, r0]
		   0x014FBAFC:  110000EA     B $+0x4c  // goto 0x014FBB48
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x014FBB00:  EB140DE3     MOV r1, 0xd4eb
		   0x014FBB04:  7E1F4AE3     MOVT r1, 0xaf7e
		   0x014FBB08:  010050E1     CMPS r0, r0, r1
		   0x014FBB0C:  1600000A     BEQ $+0x60  // if (==) goto 0x014FBB6C
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x014FBB10:  921205E3     MOV r1, 0x5292
		   0x014FBB14:  8D174DE3     MOVT r1, 0xd78d
		   0x014FBB18:  010050E1     CMPS r0, r0, r1
		   0x014FBB1C:  0200001A     BNE $+0x10  // if (!=) goto 0x014FBB2C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014FBB20:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x014FBB24:  00009FE7     LDR r0, [pc, r0]
		   0x014FBB28:  060000EA     B $+0x20  // goto 0x014FBB48
		   // ──── Block 17 (from 4 paths) ──────────────────
		   0x014FBB2C:  0050A0E3     MOV r5, 0x0
		   0x014FBB30:  160000EA     B $+0x60  // goto 0x014FBB90
		   // ──── Block 18 if (==) ────────────────────
		   0x014FBB34:  90009FE5     LDR r0, [pc, 0x90]
		   0x014FBB38:  00009FE7     LDR r0, [pc, r0]
		   0x014FBB3C:  010000EA     B $+0xc  // goto 0x014FBB48
		   // ──── Block 19 if (==) ────────────────────
		   0x014FBB40:  88009FE5     LDR r0, [pc, 0x88]
		   0x014FBB44:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 20 ──────────────────────────────
		   0x014FBB48:  001090E5     LDR r1, [r0]
		   0x014FBB4C:  0400A0E1     MOV r0, r4
		   0x014FBB50:  0020A0E3     MOV r2, 0x0
		   0x014FBB54:  AD2B66EB     BL $+0x198aebc  // CALL → String.op_Equality
		   0x014FBB58:  0150A0E3     MOV r5, 0x1
		   0x014FBB5C:  090000EA     B $+0x2c  // goto 0x014FBB88
		   // ──── Block 21 if (==) ────────────────────
		   0x014FBB60:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x014FBB64:  00009FE7     LDR r0, [pc, r0]
		   0x014FBB68:  010000EA     B $+0xc  // goto 0x014FBB74
		   // ──── Block 22 if (==) ────────────────────
		   0x014FBB6C:  64009FE5     LDR r0, [pc, 0x64]
		   0x014FBB70:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 23 ──────────────────────────────
		   0x014FBB74:  001090E5     LDR r1, [r0]
		   0x014FBB78:  0400A0E1     MOV r0, r4
		   0x014FBB7C:  0020A0E3     MOV r2, 0x0
		   0x014FBB80:  0050A0E3     MOV r5, 0x0
		   0x014FBB84:  A12B66EB     BL $+0x198ae8c  // CALL → String.op_Equality
		   // ──── Block 24 ──────────────────────────────
		   0x014FBB88:  000050E3     CMPS r0, r0, 0x0
		   0x014FBB8C:  0050A003     MOVEQ r5, 0x0
		   // ──── Block 25 ──────────────────────────────
		   0x014FBB90:  0500A0E1     MOV r0, r5
		   0x014FBB94:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014FBB98:  4C24D302     SBCSEQ r2, r3, 0x4c000000
		   0x014FBB9C:  98E1B702     ADCSEQ lr, r7, 0x26
		   0x014FBBA0:  10D2B702     ADCSEQ sp, r7, 0x1
		   0x014FBBA4:  1CCEB702     ADCSEQ ip, r7, 0x1c0
		   0x014FBBA8:  7028B802     ADCSEQ r2, r8, 0x700000
		   0x014FBBAC:  BCD2B702     ADCSEQ sp, r7, 0xc000000b
		   0x014FBBB0:  6CBEB802     ADCSEQ fp, r8, 0x6c0
		   0x014FBBB4:  7028B802     ADCSEQ r2, r8, 0x700000
		   0x014FBBB8:  94E6B702     ADCSEQ lr, r7, 0x9400000
		   0x014FBBBC:  F8BDB802     ADCSEQ fp, r8, 0x3e00
		   0x014FBBC0:  8C27B802     ADCSEQ r2, r8, 0x2300000
		   0x014FBBC4:  38D1B702     ADCSEQ sp, r7, 0xe
		   0x014FBBC8:  B4E5B702     ADCSEQ lr, r7, 0x2d000000
		   0x014FBBCC:  A4D1B702     ADCSEQ sp, r7, 0x29
		   0x014FBBD0:  44E0B702     ADCSEQ lr, r7, 0x44
		   0x014FBBD4:  C0CCB702     ADCSEQ ip, r7, 0xc000
		   0x014FBBD8:  3827B802     ADCSEQ r2, r8, 0xe00000
		*/
	}

	// RVA: 0x14FBBDC Offset: 0x14FBBDC VA: 0x14FBBDC
	public bool IsTheSame(ItemPack itemPack) {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FBBDC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014FBBE0:  0140A0E1     MOV r4, r1
		   0x014FBBE4:  0050A0E1     MOV r5, r0
		   0x014FBBE8:  000051E3     CMPS r0, r1, 0x0
		   0x014FBBEC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBBF4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FBBF0:  F67DE9EB     BL $-0x5a0820
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FBBF4:  0C0095E5     LDR r0, [r5, 0xc]
		   0x014FBBF8:  0C1094E5     LDR r1, [r4, 0xc]
		   0x014FBBFC:  000051E1     CMPS r0, r1, r0
		   0x014FBC00:  0400001A     BNE $+0x18  // if (!=) goto 0x014FBC18
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FBC04:  081095E5     LDR r1, [r5, 0x8]
		   0x014FBC08:  0020A0E3     MOV r2, 0x0
		   0x014FBC0C:  080094E5     LDR r0, [r4, 0x8]
		   0x014FBC10:  3048BDE8     POP {r4, r5, fp, lr}
		   0x014FBC14:  7D2B66EA     B $+0x198adfc  // TAIL CALL → String.op_Equality
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FBC18:  0000A0E3     MOV r0, 0x0
		   0x014FBC1C:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	// RVA: 0x14FB044 Offset: 0x14FB044 VA: 0x14FB044
	private bool TryConvertStringToChainOrder(string itemCode, out ItemObject itemObject) {
		/* Disassembly (ARM32, 220 instructions, 0x370 bytes):
		   // CFG: 39 blocks, 47 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FB044:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014FB048:  08D04DE2     SUB sp, sp, 0x8
		   0x014FB04C:  FC629FE5     LDR r6, [pc, 0x2fc]
		   0x014FB050:  0240A0E1     MOV r4, r2
		   0x014FB054:  0150A0E1     MOV r5, r1
		   0x014FB058:  06608FE0     ADD r6, pc, r6
		   0x014FB05C:  0000D6E5     LDRB r0, [r6]
		   0x014FB060:  000050E3     CMPS r0, r0, 0x0
		   0x014FB064:  2200001A     BNE $+0x90  // if (!=) goto 0x014FB0F4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FB068:  E4029FE5     LDR r0, [pc, 0x2e4]
		   0x014FB06C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB070:  3A80E9EB     BL $-0x59ff10
		   0x014FB074:  DC029FE5     LDR r0, [pc, 0x2dc]
		   0x014FB078:  00009FE7     LDR r0, [pc, r0]
		   0x014FB07C:  3780E9EB     BL $-0x59ff1c
		   0x014FB080:  D4029FE5     LDR r0, [pc, 0x2d4]
		   0x014FB084:  00009FE7     LDR r0, [pc, r0]
		   0x014FB088:  3480E9EB     BL $-0x59ff28
		   0x014FB08C:  CC029FE5     LDR r0, [pc, 0x2cc]
		   0x014FB090:  00009FE7     LDR r0, [pc, r0]
		   0x014FB094:  3180E9EB     BL $-0x59ff34
		   0x014FB098:  C4029FE5     LDR r0, [pc, 0x2c4]
		   0x014FB09C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0A0:  2E80E9EB     BL $-0x59ff40
		   0x014FB0A4:  BC029FE5     LDR r0, [pc, 0x2bc]
		   0x014FB0A8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0AC:  2B80E9EB     BL $-0x59ff4c
		   0x014FB0B0:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x014FB0B4:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0B8:  2880E9EB     BL $-0x59ff58
		   0x014FB0BC:  AC029FE5     LDR r0, [pc, 0x2ac]
		   0x014FB0C0:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0C4:  2580E9EB     BL $-0x59ff64
		   0x014FB0C8:  A4029FE5     LDR r0, [pc, 0x2a4]
		   0x014FB0CC:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0D0:  2280E9EB     BL $-0x59ff70
		   0x014FB0D4:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x014FB0D8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0DC:  1F80E9EB     BL $-0x59ff7c
		   0x014FB0E0:  94029FE5     LDR r0, [pc, 0x294]
		   0x014FB0E4:  00009FE7     LDR r0, [pc, r0]
		   0x014FB0E8:  1C80E9EB     BL $-0x59ff88
		   0x014FB0EC:  0100A0E3     MOV r0, 0x1
		   0x014FB0F0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FB0F4:  0500A0E1     MOV r0, r5
		   0x014FB0F8:  0010A0E3     MOV r1, 0x0
		   0x014FB0FC:  FC82FFEB     BL $-0x1f408
		   0x014FB100:  C81902E3     MOV r1, 0x29c8
		   0x014FB104:  CE1945E3     MOVT r1, 0x59ce
		   0x014FB108:  010050E1     CMPS r0, r0, r1
		   0x014FB10C:  1D00008A     BHI $+0x7c  // if (> (unsigned)) goto 0x014FB188
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x014FB110:  902E0AE3     MOV r2, 0xae90
		   0x014FB114:  BD2543E3     MOVT r2, 0x35bd
		   0x014FB118:  020050E1     CMPS r0, r0, r2
		   0x014FB11C:  2600008A     BHI $+0xa0  // if (> (unsigned)) goto 0x014FB1BC
		   // 
		   // ──── Block 4 else (<= (unsigned)) ────────────────────
		   0x014FB120:  951005E3     MOV r1, 0x5095
		   0x014FB124:  CC1942E3     MOVT r1, 0x29cc
		   0x014FB128:  010050E1     CMPS r0, r0, r1
		   0x014FB12C:  3600000A     BEQ $+0xe0  // if (==) goto 0x014FB20C
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014FB130:  020050E1     CMPS r0, r0, r2
		   0x014FB134:  6A00001A     BNE $+0x1b0  // if (!=) goto 0x014FB2E4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014FB138:  40029FE5     LDR r0, [pc, 0x240]
		   0x014FB13C:  0020A0E3     MOV r2, 0x0
		   0x014FB140:  00009FE7     LDR r0, [pc, r0]
		   0x014FB144:  001090E5     LDR r1, [r0]
		   0x014FB148:  0500A0E1     MOV r0, r5
		   0x014FB14C:  2F2E66EB     BL $+0x198b8c4  // CALL → String.op_Equality
		   0x014FB150:  000050E3     CMPS r0, r0, 0x0
		   0x014FB154:  6200000A     BEQ $+0x190  // if (==) goto 0x014FB2E4
		   // 
		   // ──── Block 7 else (!=) ────────────────────
		   0x014FB158:  24029FE5     LDR r0, [pc, 0x224]
		   0x014FB15C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB160:  000090E5     LDR r0, [r0]
		   0x014FB164:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FB168:  005090E5     LDR r5, [r0]
		   0x014FB16C:  000055E3     CMPS r0, r5, 0x0
		   0x014FB170:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB178
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014FB174:  9580E9EB     BL $-0x59fda4
		   // ──── Block 9 if (!=) ────────────────────
		   0x014FB178:  08029FE5     LDR r0, [pc, 0x208]
		   0x014FB17C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB180:  001090E5     LDR r1, [r0]
		   0x014FB184:  340000EA     B $+0xd8  // goto 0x014FB25C
		   // ──── Block 10 if (> (unsigned)) ────────────────────
		   0x014FB188:  ED1903E3     MOV r1, 0x39ed
		   0x014FB18C:  411E48E3     MOVT r1, 0x8e41
		   0x014FB190:  010050E1     CMPS r0, r0, r1
		   0x014FB194:  1100008A     BHI $+0x4c  // if (> (unsigned)) goto 0x014FB1E0
		   // 
		   // ──── Block 11 else (<= (unsigned)) ────────────────────
		   0x014FB198:  FD2F07E3     MOV r2, 0x7ffd
		   0x014FB19C:  FC2348E3     MOVT r2, 0x83fc
		   0x014FB1A0:  020050E1     CMPS r0, r0, r2
		   0x014FB1A4:  1B00000A     BEQ $+0x74  // if (==) goto 0x014FB218
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014FB1A8:  010050E1     CMPS r0, r0, r1
		   0x014FB1AC:  4C00001A     BNE $+0x138  // if (!=) goto 0x014FB2E4
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x014FB1B0:  D8619FE5     LDR r6, [pc, 0x1d8]
		   0x014FB1B4:  06609FE7     LDR r6, [pc, r6]
		   0x014FB1B8:  180000EA     B $+0x68  // goto 0x014FB220
		   // ──── Block 14 if (> (unsigned)) ────────────────────
		   0x014FB1BC:  9F2508E3     MOV r2, 0x859f
		   0x014FB1C0:  232745E3     MOVT r2, 0x5723
		   0x014FB1C4:  020050E1     CMPS r0, r0, r2
		   0x014FB1C8:  2C00000A     BEQ $+0xb8  // if (==) goto 0x014FB280
		   // 
		   // ──── Block 15 else (!=) ────────────────────
		   0x014FB1CC:  010050E1     CMPS r0, r0, r1
		   0x014FB1D0:  4300001A     BNE $+0x114  // if (!=) goto 0x014FB2E4
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014FB1D4:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x014FB1D8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB1DC:  290000EA     B $+0xac  // goto 0x014FB288
		   // ──── Block 17 if (> (unsigned)) ────────────────────
		   0x014FB1E0:  EB140DE3     MOV r1, 0xd4eb
		   0x014FB1E4:  7E1F4AE3     MOVT r1, 0xaf7e
		   0x014FB1E8:  010050E1     CMPS r0, r0, r1
		   0x014FB1EC:  2F00000A     BEQ $+0xc4  // if (==) goto 0x014FB2B0
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x014FB1F0:  921205E3     MOV r1, 0x5292
		   0x014FB1F4:  8D174DE3     MOVT r1, 0xd78d
		   0x014FB1F8:  010050E1     CMPS r0, r0, r1
		   0x014FB1FC:  3800001A     BNE $+0xe8  // if (!=) goto 0x014FB2E4
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x014FB200:  90019FE5     LDR r0, [pc, 0x190]
		   0x014FB204:  00009FE7     LDR r0, [pc, r0]
		   0x014FB208:  1E0000EA     B $+0x80  // goto 0x014FB288
		   // ──── Block 20 if (==) ────────────────────
		   0x014FB20C:  90619FE5     LDR r6, [pc, 0x190]
		   0x014FB210:  06609FE7     LDR r6, [pc, r6]
		   0x014FB214:  010000EA     B $+0xc  // goto 0x014FB220
		   // ──── Block 21 if (==) ────────────────────
		   0x014FB218:  7C619FE5     LDR r6, [pc, 0x17c]
		   0x014FB21C:  06609FE7     LDR r6, [pc, r6]
		   // ──── Block 22 ──────────────────────────────
		   0x014FB220:  001096E5     LDR r1, [r6]
		   0x014FB224:  0500A0E1     MOV r0, r5
		   0x014FB228:  0020A0E3     MOV r2, 0x0
		   0x014FB22C:  F72D66EB     BL $+0x198b7e4  // CALL → String.op_Equality
		   0x014FB230:  000050E3     CMPS r0, r0, 0x0
		   0x014FB234:  2A00000A     BEQ $+0xb0  // if (==) goto 0x014FB2E4
		   // 
		   // ──── Block 23 else (!=) ────────────────────
		   0x014FB238:  54019FE5     LDR r0, [pc, 0x154]
		   0x014FB23C:  00009FE7     LDR r0, [pc, r0]
		   0x014FB240:  000090E5     LDR r0, [r0]
		   0x014FB244:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FB248:  005090E5     LDR r5, [r0]
		   0x014FB24C:  000055E3     CMPS r0, r5, 0x0
		   0x014FB250:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB258
		   // 
		   // ──── Block 24 else (==) ────────────────────
		   0x014FB254:  5D80E9EB     BL $-0x59fe84
		   // ──── Block 25 if (!=) ────────────────────
		   0x014FB258:  001096E5     LDR r1, [r6]
		   // ──── Block 26 ──────────────────────────────
		   0x014FB25C:  0070A0E3     MOV r7, 0x0
		   0x014FB260:  0160A0E3     MOV r6, 0x1
		   0x014FB264:  0500A0E1     MOV r0, r5
		   0x014FB268:  0020A0E3     MOV r2, 0x0
		   0x014FB26C:  0030A0E3     MOV r3, 0x0
		   0x014FB270:  F060CDE1     STRD r6, r7, [sp]
		   0x014FB274:  5052F2EB     BL $-0x36b6b8
		   0x014FB278:  000084E5     STR r0, [r4]
		   0x014FB27C:  150000EA     B $+0x5c  // goto 0x014FB2D8
		   // ──── Block 27 if (==) ────────────────────
		   0x014FB280:  28019FE5     LDR r0, [pc, 0x128]
		   0x014FB284:  00009FE7     LDR r0, [pc, r0]
		   // ──── Block 28 ──────────────────────────────
		   0x014FB288:  001090E5     LDR r1, [r0]
		   0x014FB28C:  0500A0E1     MOV r0, r5
		   0x014FB290:  0020A0E3     MOV r2, 0x0
		   0x014FB294:  DD2D66EB     BL $+0x198b77c  // CALL → String.op_Equality
		   0x014FB298:  000050E3     CMPS r0, r0, 0x0
		   0x014FB29C:  1000000A     BEQ $+0x48  // if (==) goto 0x014FB2E4
		   // 
		   // ──── Block 29 else (!=) ────────────────────
		   0x014FB2A0:  5E0200EB     BL $+0x980  // CALL → ItemPack.GetEventToken
		   0x014FB2A4:  000084E5     STR r0, [r4]
		   0x014FB2A8:  0160A0E3     MOV r6, 0x1
		   0x014FB2AC:  090000EA     B $+0x2c  // goto 0x014FB2D8
		   // ──── Block 30 if (==) ────────────────────
		   0x014FB2B0:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x014FB2B4:  0020A0E3     MOV r2, 0x0
		   0x014FB2B8:  0060A0E3     MOV r6, 0x0
		   0x014FB2BC:  00009FE7     LDR r0, [pc, r0]
		   0x014FB2C0:  001090E5     LDR r1, [r0]
		   0x014FB2C4:  0500A0E1     MOV r0, r5
		   0x014FB2C8:  D02D66EB     BL $+0x198b748  // CALL → String.op_Equality
		   0x014FB2CC:  000050E3     CMPS r0, r0, 0x0
		   0x014FB2D0:  0300000A     BEQ $+0x14  // if (==) goto 0x014FB2E4
		   // 
		   // ──── Block 31 else (!=) ────────────────────
		   0x014FB2D4:  006084E5     STR r6, [r4]
		   // ──── Block 32 ──────────────────────────────
		   0x014FB2D8:  0600A0E1     MOV r0, r6
		   0x014FB2DC:  08D08DE2     ADD sp, sp, 0x8
		   0x014FB2E0:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   // ──── Block 33 (from 8 paths) ──────────────────
		   0x014FB2E4:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x014FB2E8:  00009FE7     LDR r0, [pc, r0]
		   0x014FB2EC:  000090E5     LDR r0, [r0]
		   0x014FB2F0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FB2F4:  006090E5     LDR r6, [r0]
		   0x014FB2F8:  000056E3     CMPS r0, r6, 0x0
		   0x014FB2FC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB304
		   // 
		   // ──── Block 34 else (==) ────────────────────
		   0x014FB300:  3280E9EB     BL $-0x59ff30
		   // ──── Block 35 if (!=) ────────────────────
		   0x014FB304:  0600A0E1     MOV r0, r6
		   0x014FB308:  0510A0E1     MOV r1, r5
		   0x014FB30C:  0020A0E3     MOV r2, 0x0
		   0x014FB310:  7448F2EB     BL $-0x36de28
		   0x014FB314:  000084E5     STR r0, [r4]
		   0x014FB318:  0050A0E1     MOV r5, r0
		   0x014FB31C:  88009FE5     LDR r0, [pc, 0x88]
		   0x014FB320:  00009FE7     LDR r0, [pc, r0]
		   0x014FB324:  000090E5     LDR r0, [r0]
		   0x014FB328:  741090E5     LDR r1, [r0, 0x74]
		   0x014FB32C:  000051E3     CMPS r0, r1, 0x0
		   0x014FB330:  0000001A     BNE $+0x8  // if (!=) goto 0x014FB338
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x014FB334:  D67FE9EB     BL $-0x5a00a0
		   // ──── Block 37 if (!=) ────────────────────
		   0x014FB338:  0500A0E1     MOV r0, r5
		   0x014FB33C:  0010A0E3     MOV r1, 0x0
		   0x014FB340:  0020A0E3     MOV r2, 0x0
		   0x014FB344:  08D08DE2     ADD sp, sp, 0x8
		   0x014FB348:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x014FB34C:  08A6ECEA     B $-0x4d67d8
		   0x014FB350:  D12DD302     SBCSEQ r2, r3, 0x3440
		   0x014FB354:  80D5B702     ADCSEQ sp, r7, 0x20000000
		   0x014FB358:  C0B4B702     ADCSEQ fp, r7, 0xc0000000
		   0x014FB35C:  04EBB702     ADCSEQ lr, r7, 0x1000
		   0x014FB360:  7CDBB702     ADCSEQ sp, r7, 0x1f000
		   0x014FB364:  88D7B702     ADCSEQ sp, r7, 0x2200000
		   0x014FB368:  54DEB702     ADCSEQ sp, r7, 0x540
		   0x014FB36C:  D031B802     ADCSEQ r3, r8, 0x34
		   0x014FB370:  1CDCB702     ADCSEQ sp, r7, 0x1c00
		   0x014FB374:  CCC7B802     ADCSEQ ip, r8, 0x3300000
		   0x014FB378:  D031B802     ADCSEQ r3, r8, 0x34
		   0x014FB37C:  F4EFB702     ADCSEQ lr, r7, 0x3d0
		   0x014FB380:  58C7B802     ADCSEQ ip, r8, 0x1600000
		   0x014FB384:  90D4B702     ADCSEQ sp, r7, 0x90000000
		   0x014FB388:  80DDB702     ADCSEQ sp, r7, 0x2000
		   0x014FB38C:  AC30B802     ADCSEQ r3, r8, 0xac
		   0x014FB390:  58DAB702     ADCSEQ sp, r7, 0x58000
		   0x014FB394:  B0D3B702     ADCSEQ sp, r7, 0xc0000002
		   0x014FB398:  D4EEB702     ADCSEQ lr, r7, 0xd40
		   0x014FB39C:  6CE9B702     ADCSEQ lr, r7, 0x1b0000
		   0x014FB3A0:  EC2FB802     ADCSEQ r2, r8, 0x3b0
		   0x014FB3A4:  CCDAB702     ADCSEQ sp, r7, 0xcc000
		   0x014FB3A8:  04D3B702     ADCSEQ sp, r7, 0x10000000
		   0x014FB3AC:  18B2B702     ADCSEQ fp, r7, 0x80000001
		   0x014FB3B0:  A0D5B702     ADCSEQ sp, r7, 0x28000000
		*/
	}

	// RVA: 0x14FBC20 Offset: 0x14FBC20 VA: 0x14FBC20
	private ItemObject GetEventToken() {
		/* Disassembly (ARM32, 129 instructions, 0x204 bytes):
		   // CFG: 26 blocks, 24 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FBC20:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014FBC24:  08D04DE2     SUB sp, sp, 0x8
		   0x014FBC28:  C8419FE5     LDR r4, [pc, 0x1c8]
		   0x014FBC2C:  04408FE0     ADD r4, pc, r4
		   0x014FBC30:  0000D4E5     LDRB r0, [r4]
		   0x014FBC34:  000050E3     CMPS r0, r0, 0x0
		   0x014FBC38:  1000001A     BNE $+0x48  // if (!=) goto 0x014FBC80
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FBC3C:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x014FBC40:  00009FE7     LDR r0, [pc, r0]
		   0x014FBC44:  457DE9EB     BL $-0x5a0ae4
		   0x014FBC48:  B0019FE5     LDR r0, [pc, 0x1b0]
		   0x014FBC4C:  00009FE7     LDR r0, [pc, r0]
		   0x014FBC50:  427DE9EB     BL $-0x5a0af0
		   0x014FBC54:  A8019FE5     LDR r0, [pc, 0x1a8]
		   0x014FBC58:  00009FE7     LDR r0, [pc, r0]
		   0x014FBC5C:  3F7DE9EB     BL $-0x5a0afc
		   0x014FBC60:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x014FBC64:  00009FE7     LDR r0, [pc, r0]
		   0x014FBC68:  3C7DE9EB     BL $-0x5a0b08
		   0x014FBC6C:  98019FE5     LDR r0, [pc, 0x198]
		   0x014FBC70:  00009FE7     LDR r0, [pc, r0]
		   0x014FBC74:  397DE9EB     BL $-0x5a0b14
		   0x014FBC78:  0100A0E3     MOV r0, 0x1
		   0x014FBC7C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FBC80:  88619FE5     LDR r6, [pc, 0x188]
		   0x014FBC84:  06609FE7     LDR r6, [pc, r6]
		   0x014FBC88:  001096E5     LDR r1, [r6]
		   0x014FBC8C:  80019FE5     LDR r0, [pc, 0x180]
		   0x014FBC90:  00009FE7     LDR r0, [pc, r0]
		   0x014FBC94:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x014FBC98:  000090E5     LDR r0, [r0]
		   0x014FBC9C:  044091E5     LDR r4, [r1, 0x4]
		   0x014FBCA0:  742090E5     LDR r2, [r0, 0x74]
		   0x014FBCA4:  000052E3     CMPS r0, r2, 0x0
		   0x014FBCA8:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBCB0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FBCAC:  787DE9EB     BL $-0x5a0a18
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FBCB0:  0400A0E1     MOV r0, r4
		   0x014FBCB4:  0010A0E3     MOV r1, 0x0
		   0x014FBCB8:  0020A0E3     MOV r2, 0x0
		   0x014FBCBC:  76F02BEB     BL $+0xafc1e0  // CALL → sub_1FF7E9C
		   0x014FBCC0:  000050E3     CMPS r0, r0, 0x0
		   0x014FBCC4:  4600000A     BEQ $+0x120  // if (==) goto 0x014FBDE4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014FBCC8:  48019FE5     LDR r0, [pc, 0x148]
		   0x014FBCCC:  00009FE7     LDR r0, [pc, r0]
		   0x014FBCD0:  000090E5     LDR r0, [r0]
		   0x014FBCD4:  A14817EB     BL $+0x5d228c  // CALL → ScriptableObject.CreateInstance<object>
		   0x014FBCD8:  001096E5     LDR r1, [r6]
		   0x014FBCDC:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x014FBCE0:  004091E5     LDR r4, [r1]
		   0x014FBCE4:  040081E5     STR r0, [r1, 0x4]
		   0x014FBCE8:  000054E3     CMPS r0, r4, 0x0
		   0x014FBCEC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBCF4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014FBCF0:  B67DE9EB     BL $-0x5a0920
		   // ──── Block 7 if (!=) ────────────────────
		   0x014FBCF4:  20019FE5     LDR r0, [pc, 0x120]
		   0x014FBCF8:  0030A0E3     MOV r3, 0x0
		   0x014FBCFC:  0120A0E3     MOV r2, 0x1
		   0x014FBD00:  00009FE7     LDR r0, [pc, r0]
		   0x014FBD04:  F020CDE1     STRD r2, r3, [sp]
		   0x014FBD08:  0020A0E3     MOV r2, 0x0
		   0x014FBD0C:  001090E5     LDR r1, [r0]
		   0x014FBD10:  0400A0E1     MOV r0, r4
		   0x014FBD14:  A84FF2EB     BL $-0x36c158
		   0x014FBD18:  0040A0E1     MOV r4, r0
		   0x014FBD1C:  000050E3     CMPS r0, r0, 0x0
		   0x014FBD20:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBD28
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014FBD24:  A97DE9EB     BL $-0x5a0954
		   // ──── Block 9 if (!=) ────────────────────
		   0x014FBD28:  184094E5     LDR r4, [r4, 0x18]
		   0x014FBD2C:  000054E3     CMPS r0, r4, 0x0
		   0x014FBD30:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBD38
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x014FBD34:  A57DE9EB     BL $-0x5a0964
		   // ──── Block 11 if (!=) ────────────────────
		   0x014FBD38:  0400A0E1     MOV r0, r4
		   0x014FBD3C:  0010A0E3     MOV r1, 0x0
		   0x014FBD40:  2A66F0EB     BL $-0x3e6750
		   0x014FBD44:  D4509FE5     LDR r5, [pc, 0xd4]
		   0x014FBD48:  0040A0E1     MOV r4, r0
		   0x014FBD4C:  05509FE7     LDR r5, [pc, r5]
		   0x014FBD50:  000095E5     LDR r0, [r5]
		   0x014FBD54:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FBD58:  007090E5     LDR r7, [r0]
		   0x014FBD5C:  000057E3     CMPS r0, r7, 0x0
		   0x014FBD60:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBD68
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x014FBD64:  997DE9EB     BL $-0x5a0994
		   // ──── Block 13 if (!=) ────────────────────
		   0x014FBD68:  287097E5     LDR r7, [r7, 0x28]
		   0x014FBD6C:  000057E3     CMPS r0, r7, 0x0
		   0x014FBD70:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBD78
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x014FBD74:  957DE9EB     BL $-0x5a09a4
		   // ──── Block 15 if (!=) ────────────────────
		   0x014FBD78:  247097E5     LDR r7, [r7, 0x24]
		   0x014FBD7C:  000054E3     CMPS r0, r4, 0x0
		   0x014FBD80:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBD88
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014FBD84:  917DE9EB     BL $-0x5a09b4
		   // ──── Block 17 if (!=) ────────────────────
		   0x014FBD88:  000095E5     LDR r0, [r5]
		   0x014FBD8C:  9C7084E5     STR r7, [r4, 0x9c]
		   0x014FBD90:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FBD94:  005090E5     LDR r5, [r0]
		   0x014FBD98:  000055E3     CMPS r0, r5, 0x0
		   0x014FBD9C:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBDA4
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x014FBDA0:  8A7DE9EB     BL $-0x5a09d0
		   // ──── Block 19 if (!=) ────────────────────
		   0x014FBDA4:  285095E5     LDR r5, [r5, 0x28]
		   0x014FBDA8:  000055E3     CMPS r0, r5, 0x0
		   0x014FBDAC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBDB4
		   // 
		   // ──── Block 20 else (==) ────────────────────
		   0x014FBDB0:  867DE9EB     BL $-0x5a09e0
		   // ──── Block 21 if (!=) ────────────────────
		   0x014FBDB4:  000096E5     LDR r0, [r6]
		   0x014FBDB8:  2C1095E5     LDR r1, [r5, 0x2c]
		   0x014FBDBC:  781084E5     STR r1, [r4, 0x78]
		   0x014FBDC0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FBDC4:  045090E5     LDR r5, [r0, 0x4]
		   0x014FBDC8:  000055E3     CMPS r0, r5, 0x0
		   0x014FBDCC:  0000001A     BNE $+0x8  // if (!=) goto 0x014FBDD4
		   // 
		   // ──── Block 22 else (==) ────────────────────
		   0x014FBDD0:  7E7DE9EB     BL $-0x5a0a00
		   // ──── Block 23 if (!=) ────────────────────
		   0x014FBDD4:  0500A0E1     MOV r0, r5
		   0x014FBDD8:  0410A0E1     MOV r1, r4
		   0x014FBDDC:  0020A0E3     MOV r2, 0x0
		   0x014FBDE0:  9FE6EFEB     BL $-0x40657c
		   // ──── Block 24 if (==) ────────────────────
		   0x014FBDE4:  000096E5     LDR r0, [r6]
		   0x014FBDE8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014FBDEC:  040090E5     LDR r0, [r0, 0x4]
		   0x014FBDF0:  08D08DE2     ADD sp, sp, 0x8
		   0x014FBDF4:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014FBDF8:  FE21D302     SBCSEQ r2, r3, 0x8000003f
		   0x014FBDFC:  BCBFB702     ADCSEQ fp, r7, 0x2f0
		   0x014FBE00:  A0C9B702     ADCSEQ ip, r7, 0x280000
		   0x014FBE04:  E0A8B702     ADCSEQ r10, r7, 0xe00000
		   0x014FBE08:  2CD9B702     ADCSEQ sp, r7, 0xb0000
		   0x014FBE0C:  6CD0B702     ADCSEQ sp, r7, 0x6c
		   0x014FBE10:  68C9B702     ADCSEQ ip, r7, 0x1a0000
		   0x014FBE14:  A8A8B702     ADCSEQ r10, r7, 0xa80000
		   0x014FBE18:  C4D8B702     ADCSEQ sp, r7, 0xc40000
		   0x014FBE1C:  DCCFB702     ADCSEQ ip, r7, 0x370
		   0x014FBE20:  B0BEB702     ADCSEQ fp, r7, 0xb00
		*/
	}

	// RVA: 0x14FBE24 Offset: 0x14FBE24 VA: 0x14FBE24
	public string GetJsonObject() {
		/* Disassembly (ARM32, 52 instructions, 0xD0 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FBE24:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014FBE28:  08D04DE2     SUB sp, sp, 0x8
		   0x014FBE2C:  A0509FE5     LDR r5, [pc, 0xa0]
		   0x014FBE30:  0040A0E1     MOV r4, r0
		   0x014FBE34:  05508FE0     ADD r5, pc, r5
		   0x014FBE38:  0000D5E5     LDRB r0, [r5]
		   0x014FBE3C:  000050E3     CMPS r0, r0, 0x0
		   0x014FBE40:  0A00001A     BNE $+0x30  // if (!=) goto 0x014FBE70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FBE44:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x014FBE48:  00009FE7     LDR r0, [pc, r0]
		   0x014FBE4C:  C37CE9EB     BL $-0x5a0cec
		   0x014FBE50:  84009FE5     LDR r0, [pc, 0x84]
		   0x014FBE54:  00009FE7     LDR r0, [pc, r0]
		   0x014FBE58:  C07CE9EB     BL $-0x5a0cf8
		   0x014FBE5C:  7C009FE5     LDR r0, [pc, 0x7c]
		   0x014FBE60:  00009FE7     LDR r0, [pc, r0]
		   0x014FBE64:  BD7CE9EB     BL $-0x5a0d04
		   0x014FBE68:  0100A0E3     MOV r0, 0x1
		   0x014FBE6C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FBE70:  D840C4E1     LDRD r4, r5, [r4, 0x8]
		   0x014FBE74:  04108DE2     ADD r1, sp, 0x4
		   0x014FBE78:  64009FE5     LDR r0, [pc, 0x64]
		   0x014FBE7C:  00009FE7     LDR r0, [pc, r0]
		   0x014FBE80:  04508DE5     STR r5, [sp, 0x4]
		   0x014FBE84:  240090E5     LDR r0, [r0, 0x24]
		   0x014FBE88:  037DE9EB     BL $-0x5a0bec
		   0x014FBE8C:  0020A0E1     MOV r2, r0
		   0x014FBE90:  50009FE5     LDR r0, [pc, 0x50]
		   0x014FBE94:  0410A0E1     MOV r1, r4
		   0x014FBE98:  0030A0E3     MOV r3, 0x0
		   0x014FBE9C:  00009FE7     LDR r0, [pc, r0]
		   0x014FBEA0:  000090E5     LDR r0, [r0]
		   0x014FBEA4:  D67766EB     BL $+0x199df60  // CALL → String.Format
		   0x014FBEA8:  0010A0E1     MOV r1, r0
		   0x014FBEAC:  38009FE5     LDR r0, [pc, 0x38]
		   0x014FBEB0:  0030A0E3     MOV r3, 0x0
		   0x014FBEB4:  00009FE7     LDR r0, [pc, r0]
		   0x014FBEB8:  000090E5     LDR r0, [r0]
		   0x014FBEBC:  2C209FE5     LDR r2, [pc, 0x2c]
		   0x014FBEC0:  02209FE7     LDR r2, [pc, r2]
		   0x014FBEC4:  002092E5     LDR r2, [r2]
		   0x014FBEC8:  967466EB     BL $+0x199d260  // CALL → String.Concat
		   0x014FBECC:  08D08DE2     ADD sp, sp, 0x8
		   0x014FBED0:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014FBED4:  F71FD302     SBCSEQ r1, r3, 0x3dc
		   0x014FBED8:  BCACB702     ADCSEQ r10, r7, 0xbc00
		   0x014FBEDC:  B4ACB702     ADCSEQ r10, r7, 0xb400
		   0x014FBEE0:  3CBAB802     ADCSEQ fp, r8, 0x3c000
		   0x014FBEE4:  44A8B702     ADCSEQ r10, r7, 0x440000
		   0x014FBEE8:  00BAB802     ADCSEQ fp, r8, 0x0
		   0x014FBEEC:  50ACB702     ADCSEQ r10, r7, 0x5000
		   0x014FBEF0:  48ACB702     ADCSEQ r10, r7, 0x4800
		*/
	}

	// RVA: 0x14FBEF4 Offset: 0x14FBEF4 VA: 0x14FBEF4 Slot: 3
	public override string ToString() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FBEF4:  080090E5     LDR r0, [r0, 0x8]
		   0x014FBEF8:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14FBEFC Offset: 0x14FBEFC VA: 0x14FBEFC
	public void AddAmount(int value) {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FBEFC:  0C2090E5     LDR r2, [r0, 0xc]
		   0x014FBF00:  011082E0     ADD r1, r2, r1
		   0x014FBF04:  0C1080E5     STR r1, [r0, 0xc]
		   0x014FBF08:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14FBF0C Offset: 0x14FBF0C VA: 0x14FBF0C
	public ItemPack.ShopOfferSlotType GetShopOfferSlot() {
		/* Disassembly (ARM32, 146 instructions, 0x248 bytes):
		   // CFG: 22 blocks, 28 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FBF0C:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x014FBF10:  00529FE5     LDR r5, [pc, 0x200]
		   0x014FBF14:  0040A0E1     MOV r4, r0
		   0x014FBF18:  05508FE0     ADD r5, pc, r5
		   0x014FBF1C:  0000D5E5     LDRB r0, [r5]
		   0x014FBF20:  000050E3     CMPS r0, r0, 0x0
		   0x014FBF24:  1600001A     BNE $+0x60  // if (!=) goto 0x014FBF84
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FBF28:  EC019FE5     LDR r0, [pc, 0x1ec]
		   0x014FBF2C:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF30:  8A7CE9EB     BL $-0x5a0dd0
		   0x014FBF34:  E4019FE5     LDR r0, [pc, 0x1e4]
		   0x014FBF38:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF3C:  877CE9EB     BL $-0x5a0ddc
		   0x014FBF40:  DC019FE5     LDR r0, [pc, 0x1dc]
		   0x014FBF44:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF48:  847CE9EB     BL $-0x5a0de8
		   0x014FBF4C:  D4019FE5     LDR r0, [pc, 0x1d4]
		   0x014FBF50:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF54:  817CE9EB     BL $-0x5a0df4
		   0x014FBF58:  CC019FE5     LDR r0, [pc, 0x1cc]
		   0x014FBF5C:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF60:  7E7CE9EB     BL $-0x5a0e00
		   0x014FBF64:  C4019FE5     LDR r0, [pc, 0x1c4]
		   0x014FBF68:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF6C:  7B7CE9EB     BL $-0x5a0e0c
		   0x014FBF70:  BC019FE5     LDR r0, [pc, 0x1bc]
		   0x014FBF74:  00009FE7     LDR r0, [pc, r0]
		   0x014FBF78:  787CE9EB     BL $-0x5a0e18
		   0x014FBF7C:  0100A0E3     MOV r0, 0x1
		   0x014FBF80:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FBF84:  085094E5     LDR r5, [r4, 0x8]
		   0x014FBF88:  0000A0E3     MOV r0, 0x0
		   0x014FBF8C:  100084E5     STR r0, [r4, 0x10]  // vtable: Object.Equals
		   0x014FBF90:  0010A0E3     MOV r1, 0x0
		   0x014FBF94:  0500A0E1     MOV r0, r5
		   0x014FBF98:  557FFFEB     BL $-0x202a4
		   0x014FBF9C:  C81902E3     MOV r1, 0x29c8
		   0x014FBFA0:  CE1945E3     MOVT r1, 0x59ce
		   0x014FBFA4:  010050E1     CMPS r0, r0, r1
		   0x014FBFA8:  1100008A     BHI $+0x4c  // if (> (unsigned)) goto 0x014FBFF4
		   // 
		   // ──── Block 3 else (<= (unsigned)) ────────────────────
		   0x014FBFAC:  952005E3     MOV r2, 0x5095
		   0x014FBFB0:  CC2942E3     MOVT r2, 0x29cc
		   0x014FBFB4:  020050E1     CMPS r0, r0, r2
		   0x014FBFB8:  3700000A     BEQ $+0xe4  // if (==) goto 0x014FC09C
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x014FBFBC:  9F2508E3     MOV r2, 0x859f
		   0x014FBFC0:  232745E3     MOVT r2, 0x5723
		   0x014FBFC4:  020050E1     CMPS r0, r0, r2
		   0x014FBFC8:  2B00000A     BEQ $+0xb4  // if (==) goto 0x014FC07C
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014FBFCC:  010050E1     CMPS r0, r0, r1
		   0x014FBFD0:  4A00001A     BNE $+0x130  // if (!=) goto 0x014FC100
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014FBFD4:  5C019FE5     LDR r0, [pc, 0x15c]
		   0x014FBFD8:  0020A0E3     MOV r2, 0x0
		   0x014FBFDC:  00009FE7     LDR r0, [pc, r0]
		   0x014FBFE0:  001090E5     LDR r1, [r0]
		   0x014FBFE4:  0500A0E1     MOV r0, r5
		   0x014FBFE8:  882A66EB     BL $+0x198aa28  // CALL → String.op_Equality
		   0x014FBFEC:  0460A0E3     MOV r6, 0x4
		   0x014FBFF0:  400000EA     B $+0x108  // goto 0x014FC0F8
		   // ──── Block 7 if (> (unsigned)) ────────────────────
		   0x014FBFF4:  ED1903E3     MOV r1, 0x39ed
		   0x014FBFF8:  411E48E3     MOVT r1, 0x8e41
		   0x014FBFFC:  010050E1     CMPS r0, r0, r1
		   0x014FC000:  0D00008A     BHI $+0x3c  // if (> (unsigned)) goto 0x014FC03C
		   // 
		   // ──── Block 8 else (<= (unsigned)) ────────────────────
		   0x014FC004:  FD2F07E3     MOV r2, 0x7ffd
		   0x014FC008:  FC2348E3     MOVT r2, 0x83fc
		   0x014FC00C:  020050E1     CMPS r0, r0, r2
		   0x014FC010:  2900000A     BEQ $+0xac  // if (==) goto 0x014FC0BC
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x014FC014:  010050E1     CMPS r0, r0, r1
		   0x014FC018:  3800001A     BNE $+0xe8  // if (!=) goto 0x014FC100
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x014FC01C:  18019FE5     LDR r0, [pc, 0x118]
		   0x014FC020:  0020A0E3     MOV r2, 0x0
		   0x014FC024:  00009FE7     LDR r0, [pc, r0]
		   0x014FC028:  001090E5     LDR r1, [r0]
		   0x014FC02C:  0500A0E1     MOV r0, r5
		   0x014FC030:  762A66EB     BL $+0x198a9e0  // CALL → String.op_Equality
		   0x014FC034:  0160A0E3     MOV r6, 0x1
		   0x014FC038:  2E0000EA     B $+0xc0  // goto 0x014FC0F8
		   // ──── Block 11 if (> (unsigned)) ────────────────────
		   0x014FC03C:  EB140DE3     MOV r1, 0xd4eb
		   0x014FC040:  7E1F4AE3     MOVT r1, 0xaf7e
		   0x014FC044:  010050E1     CMPS r0, r0, r1
		   0x014FC048:  2300000A     BEQ $+0x94  // if (==) goto 0x014FC0DC
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x014FC04C:  921205E3     MOV r1, 0x5292
		   0x014FC050:  8D174DE3     MOVT r1, 0xd78d
		   0x014FC054:  010050E1     CMPS r0, r0, r1
		   0x014FC058:  2800001A     BNE $+0xa8  // if (!=) goto 0x014FC100
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x014FC05C:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x014FC060:  0020A0E3     MOV r2, 0x0
		   0x014FC064:  00009FE7     LDR r0, [pc, r0]
		   0x014FC068:  001090E5     LDR r1, [r0]
		   0x014FC06C:  0500A0E1     MOV r0, r5
		   0x014FC070:  662A66EB     BL $+0x198a9a0  // CALL → String.op_Equality
		   0x014FC074:  0D60A0E3     MOV r6, 0xd
		   0x014FC078:  1E0000EA     B $+0x80  // goto 0x014FC0F8
		   // ──── Block 14 if (==) ────────────────────
		   0x014FC07C:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x014FC080:  0020A0E3     MOV r2, 0x0
		   0x014FC084:  00009FE7     LDR r0, [pc, r0]
		   0x014FC088:  001090E5     LDR r1, [r0]
		   0x014FC08C:  0500A0E1     MOV r0, r5
		   0x014FC090:  5E2A66EB     BL $+0x198a980  // CALL → String.op_Equality
		   0x014FC094:  0C60A0E3     MOV r6, 0xc
		   0x014FC098:  160000EA     B $+0x60  // goto 0x014FC0F8
		   // ──── Block 15 if (==) ────────────────────
		   0x014FC09C:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x014FC0A0:  0020A0E3     MOV r2, 0x0
		   0x014FC0A4:  00009FE7     LDR r0, [pc, r0]
		   0x014FC0A8:  001090E5     LDR r1, [r0]
		   0x014FC0AC:  0500A0E1     MOV r0, r5
		   0x014FC0B0:  562A66EB     BL $+0x198a960  // CALL → String.op_Equality
		   0x014FC0B4:  0360A0E3     MOV r6, 0x3
		   0x014FC0B8:  0E0000EA     B $+0x40  // goto 0x014FC0F8
		   // ──── Block 16 if (==) ────────────────────
		   0x014FC0BC:  80009FE5     LDR r0, [pc, 0x80]
		   0x014FC0C0:  0020A0E3     MOV r2, 0x0
		   0x014FC0C4:  00009FE7     LDR r0, [pc, r0]
		   0x014FC0C8:  001090E5     LDR r1, [r0]
		   0x014FC0CC:  0500A0E1     MOV r0, r5
		   0x014FC0D0:  4E2A66EB     BL $+0x198a940  // CALL → String.op_Equality
		   0x014FC0D4:  0260A0E3     MOV r6, 0x2
		   0x014FC0D8:  060000EA     B $+0x20  // goto 0x014FC0F8
		   // ──── Block 17 if (==) ────────────────────
		   0x014FC0DC:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x014FC0E0:  0020A0E3     MOV r2, 0x0
		   0x014FC0E4:  0060A0E3     MOV r6, 0x0
		   0x014FC0E8:  00009FE7     LDR r0, [pc, r0]
		   0x014FC0EC:  001090E5     LDR r1, [r0]
		   0x014FC0F0:  0500A0E1     MOV r0, r5
		   0x014FC0F4:  452A66EB     BL $+0x198a91c  // CALL → String.op_Equality
		   // ──── Block 18 ──────────────────────────────
		   0x014FC0F8:  000050E3     CMPS r0, r0, 0x0
		   0x014FC0FC:  0200001A     BNE $+0x10  // if (!=) goto 0x014FC10C
		   // 
		   // ──── Block 19 (from 4 paths) ──────────────────
		   0x014FC100:  0400A0E1     MOV r0, r4
		   0x014FC104:  120000EB     BL $+0x50  // CALL → ItemPack.<GetShopOfferSlot>g__GetExactTypeOfItem|39_0
		   0x014FC108:  0060A0E1     MOV r6, r0
		   // ──── Block 20 if (!=) ────────────────────
		   0x014FC10C:  0600A0E1     MOV r0, r6
		   0x014FC110:  106084E5     STR r6, [r4, 0x10]
		   0x014FC114:  7080BDE8     POP {r4, r5, r6, pc}
		   0x014FC118:  141FD302     SBCSEQ r1, r3, 0x50
		   0x014FC11C:  5CDCB702     ADCSEQ sp, r7, 0x5c00
		   0x014FC120:  D4CCB702     ADCSEQ ip, r7, 0xd400
		   0x014FC124:  E0C8B702     ADCSEQ ip, r7, 0xe00000
		   0x014FC128:  3423B802     ADCSEQ r2, r8, 0xd0000000
		   0x014FC12C:  80CDB702     ADCSEQ ip, r7, 0x2000
		   0x014FC130:  4023B802     ADCSEQ r2, r8, 0x1
		   0x014FC134:  64E1B702     ADCSEQ lr, r7, 0x19
		   0x014FC138:  A822B802     ADCSEQ r2, r8, 0x8000000a
		   0x014FC13C:  E8CBB702     ADCSEQ ip, r7, 0x3a000
		   0x014FC140:  74E0B702     ADCSEQ lr, r7, 0x74
		   0x014FC144:  C4DAB702     ADCSEQ sp, r7, 0xc4000
		   0x014FC148:  38CCB702     ADCSEQ ip, r7, 0x3800
		   0x014FC14C:  A0C7B702     ADCSEQ ip, r7, 0x2800000
		   0x014FC150:  C021B802     ADCSEQ r2, r8, 0x30
		*/
	}

	// RVA: 0x14FC2F4 Offset: 0x14FC2F4 VA: 0x14FC2F4
	public void GetRewardSprite(CommonRewardConverter commonRewardConverter, Action<Sprite> complete) {
		/* Disassembly (ARM32, 103 instructions, 0x19C bytes):
		   // CFG: 20 blocks, 18 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FC2F4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014FC2F8:  08D04DE2     SUB sp, sp, 0x8
		   0x014FC2FC:  70419FE5     LDR r4, [pc, 0x170]
		   0x014FC300:  0050A0E1     MOV r5, r0
		   0x014FC304:  0270A0E1     MOV r7, r2
		   0x014FC308:  0160A0E1     MOV r6, r1
		   0x014FC30C:  04408FE0     ADD r4, pc, r4
		   0x014FC310:  0000D4E5     LDRB r0, [r4]
		   0x014FC314:  000050E3     CMPS r0, r0, 0x0
		   0x014FC318:  0A00001A     BNE $+0x30  // if (!=) goto 0x014FC348
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FC31C:  54019FE5     LDR r0, [pc, 0x154]
		   0x014FC320:  00009FE7     LDR r0, [pc, r0]
		   0x014FC324:  8D7BE9EB     BL $-0x5a11c4
		   0x014FC328:  4C019FE5     LDR r0, [pc, 0x14c]
		   0x014FC32C:  00009FE7     LDR r0, [pc, r0]
		   0x014FC330:  8A7BE9EB     BL $-0x5a11d0
		   0x014FC334:  44019FE5     LDR r0, [pc, 0x144]
		   0x014FC338:  00009FE7     LDR r0, [pc, r0]
		   0x014FC33C:  877BE9EB     BL $-0x5a11dc
		   0x014FC340:  0100A0E3     MOV r0, 0x1
		   0x014FC344:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FC348:  34019FE5     LDR r0, [pc, 0x134]
		   0x014FC34C:  00009FE7     LDR r0, [pc, r0]
		   0x014FC350:  000090E5     LDR r0, [r0]
		   0x014FC354:  1A7CE9EB     BL $-0x5a0f90
		   0x014FC358:  0010A0E3     MOV r1, 0x0
		   0x014FC35C:  0040A0E1     MOV r4, r0
		   0x014FC360:  4E0000EB     BL $+0x140  // CALL → <>c__DisplayClass40_0..ctor
		   0x014FC364:  000054E3     CMPS r0, r4, 0x0
		   0x014FC368:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC370
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FC36C:  177CE9EB     BL $-0x5a0f9c
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FC370:  000056E3     CMPS r0, r6, 0x0
		   0x014FC374:  087084E5     STR r7, [r4, 0x8]
		   0x014FC378:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC380
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014FC37C:  137CE9EB     BL $-0x5a0fac
		   // ──── Block 6 if (!=) ────────────────────
		   0x014FC380:  0600A0E1     MOV r0, r6
		   0x014FC384:  0510A0E1     MOV r1, r5
		   0x014FC388:  0020A0E3     MOV r2, 0x0
		   0x014FC38C:  CAAFEEEB     BL $-0x4540d0
		   0x014FC390:  0060A0E1     MOV r6, r0
		   0x014FC394:  000050E3     CMPS r0, r0, 0x0
		   0x014FC398:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC3A0
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014FC39C:  0B7CE9EB     BL $-0x5a0fcc
		   // ──── Block 8 if (!=) ────────────────────
		   0x014FC3A0:  087096E5     LDR r7, [r6, 0x8]
		   0x014FC3A4:  000057E3     CMPS r0, r7, 0x0
		   0x014FC3A8:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC3B0
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x014FC3AC:  077CE9EB     BL $-0x5a0fdc
		   // ──── Block 10 if (!=) ────────────────────
		   0x014FC3B0:  080097E5     LDR r0, [r7, 0x8]
		   0x014FC3B4:  030050E3     CMPS r0, r0, 0x3
		   0x014FC3B8:  2100001A     BNE $+0x8c  // if (!=) goto 0x014FC444
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x014FC3BC:  081095E5     LDR r1, [r5, 0x8]
		   0x014FC3C0:  0000A0E3     MOV r0, 0x0
		   0x014FC3C4:  04208DE2     ADD r2, sp, 0x4
		   0x014FC3C8:  04008DE5     STR r0, [sp, 0x4]
		   0x014FC3CC:  0500A0E1     MOV r0, r5
		   0x014FC3D0:  1BFBFFEB     BL $-0x138c
		   0x014FC3D4:  04509DE5     LDR r5, [sp, 0x4]
		   0x014FC3D8:  000050E3     CMPS r0, r0, 0x0
		   0x014FC3DC:  0050A001     MOVEQ r5, r0
		   0x014FC3E0:  000055E3     CMPS r0, r5, 0x0
		   0x014FC3E4:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC3EC
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x014FC3E8:  F87BE9EB     BL $-0x5a1018
		   // ──── Block 13 if (!=) ────────────────────
		   0x014FC3EC:  94009FE5     LDR r0, [pc, 0x94]
		   0x014FC3F0:  00009FE7     LDR r0, [pc, r0]
		   0x014FC3F4:  185095E5     LDR r5, [r5, 0x18]
		   0x014FC3F8:  000090E5     LDR r0, [r0]
		   0x014FC3FC:  F07BE9EB     BL $-0x5a1038
		   0x014FC400:  0060A0E1     MOV r6, r0
		   0x014FC404:  80009FE5     LDR r0, [pc, 0x80]
		   0x014FC408:  0410A0E1     MOV r1, r4
		   0x014FC40C:  0030A0E3     MOV r3, 0x0
		   0x014FC410:  00009FE7     LDR r0, [pc, r0]
		   0x014FC414:  002090E5     LDR r2, [r0]
		   0x014FC418:  0600A0E1     MOV r0, r6
		   0x014FC41C:  89A842EB     BL $+0x10aa22c  // CALL → Action<object>..ctor
		   0x014FC420:  000055E3     CMPS r0, r5, 0x0
		   0x014FC424:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC42C
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x014FC428:  E87BE9EB     BL $-0x5a1058
		   // ──── Block 15 if (!=) ────────────────────
		   0x014FC42C:  0500A0E1     MOV r0, r5
		   0x014FC430:  0610A0E1     MOV r1, r6
		   0x014FC434:  0020A0E3     MOV r2, 0x0
		   0x014FC438:  08D08DE2     ADD sp, sp, 0x8
		   0x014FC43C:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x014FC440:  EC38F0EA     B $-0x3f1c48
		   // ──── Block 16 if (!=) ────────────────────
		   0x014FC444:  080094E5     LDR r0, [r4, 0x8]
		   0x014FC448:  000050E3     CMPS r0, r0, 0x0
		   0x014FC44C:  0600000A     BEQ $+0x20  // if (==) goto 0x014FC46C
		   // 
		   // ──── Block 17 else (!=) ────────────────────
		   0x014FC450:  0C3090E5     LDR r3, [r0, 0xc]
		   0x014FC454:  142090E5     LDR r2, [r0, 0x14]
		   0x014FC458:  200090E5     LDR r0, [r0, 0x20]
		   0x014FC45C:  0C1096E5     LDR r1, [r6, 0xc]
		   0x014FC460:  08D08DE2     ADD sp, sp, 0x8
		   0x014FC464:  F048BDE8     POP {r4, r5, r6, r7, fp, lr}
		   0x014FC468:  13FF2FE1     BX r3
		   // ──── Block 18 if (==) ────────────────────
		   0x014FC46C:  08D08DE2     ADD sp, sp, 0x8
		   0x014FC470:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x014FC474:  211BD302     SBCSEQ r1, r3, 0x8400
		   0x014FC478:  BCC1B702     ADCSEQ ip, r7, 0x2f
		   0x014FC47C:  78B5B802     ADCSEQ fp, r8, 0x1e000000
		   0x014FC480:  70B5B802     ADCSEQ fp, r8, 0x1c000000
		   0x014FC484:  5CB5B802     ADCSEQ fp, r8, 0x17000000
		   0x014FC488:  ECC0B702     ADCSEQ ip, r7, 0xec
		   0x014FC48C:  94B4B802     ADCSEQ fp, r8, 0x94000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x14FC154 Offset: 0x14FC154 VA: 0x14FC154
	private ItemPack.ShopOfferSlotType <GetShopOfferSlot>g__GetExactTypeOfItem|39_0() {
		/* Disassembly (ARM32, 104 instructions, 0x1A0 bytes):
		   // CFG: 23 blocks, 21 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FC154:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014FC158:  08D04DE2     SUB sp, sp, 0x8
		   0x014FC15C:  74519FE5     LDR r5, [pc, 0x174]
		   0x014FC160:  0040A0E1     MOV r4, r0
		   0x014FC164:  05508FE0     ADD r5, pc, r5
		   0x014FC168:  0000D5E5     LDRB r0, [r5]
		   0x014FC16C:  000050E3     CMPS r0, r0, 0x0
		   0x014FC170:  0A00001A     BNE $+0x30  // if (!=) goto 0x014FC1A0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014FC174:  60019FE5     LDR r0, [pc, 0x160]
		   0x014FC178:  00009FE7     LDR r0, [pc, r0]
		   0x014FC17C:  F77BE9EB     BL $-0x5a101c
		   0x014FC180:  58019FE5     LDR r0, [pc, 0x158]
		   0x014FC184:  00009FE7     LDR r0, [pc, r0]
		   0x014FC188:  F47BE9EB     BL $-0x5a1028
		   0x014FC18C:  50019FE5     LDR r0, [pc, 0x150]
		   0x014FC190:  00009FE7     LDR r0, [pc, r0]
		   0x014FC194:  F17BE9EB     BL $-0x5a1034
		   0x014FC198:  0100A0E3     MOV r0, 0x1
		   0x014FC19C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014FC1A0:  081094E5     LDR r1, [r4, 0x8]
		   0x014FC1A4:  0000A0E3     MOV r0, 0x0
		   0x014FC1A8:  04208DE2     ADD r2, sp, 0x4
		   0x014FC1AC:  04008DE5     STR r0, [sp, 0x4]
		   0x014FC1B0:  0400A0E1     MOV r0, r4
		   0x014FC1B4:  A2FBFFEB     BL $-0x1170
		   0x014FC1B8:  04409DE5     LDR r4, [sp, 0x4]
		   0x014FC1BC:  000050E3     CMPS r0, r0, 0x0
		   0x014FC1C0:  0040A001     MOVEQ r4, r0
		   0x014FC1C4:  000054E3     CMPS r0, r4, 0x0
		   0x014FC1C8:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC1D0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014FC1CC:  7F7CE9EB     BL $-0x5a0dfc
		   // ──── Block 4 if (!=) ────────────────────
		   0x014FC1D0:  185094E5     LDR r5, [r4, 0x18]
		   0x014FC1D4:  000055E3     CMPS r0, r5, 0x0
		   0x014FC1D8:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC1E0
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014FC1DC:  7B7CE9EB     BL $-0x5a0e0c
		   // ──── Block 6 if (!=) ────────────────────
		   0x014FC1E0:  00019FE5     LDR r0, [pc, 0x100]
		   0x014FC1E4:  00009FE7     LDR r0, [pc, r0]
		   0x014FC1E8:  000090E5     LDR r0, [r0]
		   0x014FC1EC:  741090E5     LDR r1, [r0, 0x74]
		   0x014FC1F0:  000051E3     CMPS r0, r1, 0x0
		   0x014FC1F4:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC1FC
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x014FC1F8:  257CE9EB     BL $-0x5a0f64
		   // ──── Block 8 if (!=) ────────────────────
		   0x014FC1FC:  B00095E5     LDR r0, [r5, 0xb0]
		   0x014FC200:  011040E2     SUB r1, r0, 0x1
		   0x014FC204:  030051E3     CMPS r0, r1, 0x3
		   0x014FC208:  2F00008A     BHI $+0xc4  // if (> (unsigned)) goto 0x014FC2CC
		   // 
		   // ──── Block 9 else (<= (unsigned)) ────────────────────
		   0x014FC20C:  08208FE2     ADR r2, pc, 0x8
		   0x014FC210:  0800A0E3     MOV r0, 0x8
		   0x014FC214:  011192E7     LDR r1, [r2, r1, lsl 2]
		   0x014FC218:  01F082E0     ADD pc, r2, r1
		   0x014FC21C:  10000000     ANDEQ r0, r0, r0, lsl r0
		   0x014FC220:  5C000000     ANDEQ r0, r0, ip, asr r0
		   0x014FC224:  B4000000     STRHEQ r0, [r0], -r4
		   0x014FC228:  64000000     ANDEQ r0, r0, r4, ror 0
		   0x014FC22C:  184094E5     LDR r4, [r4, 0x18]
		   0x014FC230:  000054E3     CMPS r0, r4, 0x0
		   0x014FC234:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC23C
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x014FC238:  647CE9EB     BL $-0x5a0e68
		   // ──── Block 11 if (!=) ────────────────────
		   0x014FC23C:  084094E5     LDR r4, [r4, 0x8]
		   0x014FC240:  000054E3     CMPS r0, r4, 0x0
		   0x014FC244:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC24C
		   // 
		   // ──── Block 12 else (==) ────────────────────
		   0x014FC248:  607CE9EB     BL $-0x5a0e78
		   // ──── Block 13 if (!=) ────────────────────
		   0x014FC24C:  98009FE5     LDR r0, [pc, 0x98]
		   0x014FC250:  0020A0E3     MOV r2, 0x0
		   0x014FC254:  00009FE7     LDR r0, [pc, r0]
		   0x014FC258:  001090E5     LDR r1, [r0]
		   0x014FC25C:  180094E5     LDR r0, [r4, 0x18]
		   0x014FC260:  EA2966EB     BL $+0x198a7b0  // CALL → String.op_Equality
		   0x014FC264:  0010A0E1     MOV r1, r0
		   0x014FC268:  0B00A0E3     MOV r0, 0xb
		   0x014FC26C:  000051E3     CMPS r0, r1, 0x0
		   0x014FC270:  07000013     MOVNE r0, 0x7
		   0x014FC274:  150000EA     B $+0x5c  // goto 0x014FC2D0
		   0x014FC278:  0A00A0E3     MOV r0, 0xa
		   0x014FC27C:  130000EA     B $+0x54  // goto 0x014FC2D0
		   0x014FC280:  184094E5     LDR r4, [r4, 0x18]
		   0x014FC284:  000054E3     CMPS r0, r4, 0x0
		   0x014FC288:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC290
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x014FC28C:  4F7CE9EB     BL $-0x5a0ebc
		   // ──── Block 17 if (!=) ────────────────────
		   0x014FC290:  084094E5     LDR r4, [r4, 0x8]
		   0x014FC294:  000054E3     CMPS r0, r4, 0x0
		   0x014FC298:  0000001A     BNE $+0x8  // if (!=) goto 0x014FC2A0
		   // 
		   // ──── Block 18 else (==) ────────────────────
		   0x014FC29C:  4B7CE9EB     BL $-0x5a0ecc
		   // ──── Block 19 if (!=) ────────────────────
		   0x014FC2A0:  48009FE5     LDR r0, [pc, 0x48]
		   0x014FC2A4:  0020A0E3     MOV r2, 0x0
		   0x014FC2A8:  00009FE7     LDR r0, [pc, r0]
		   0x014FC2AC:  001090E5     LDR r1, [r0]
		   0x014FC2B0:  180094E5     LDR r0, [r4, 0x18]
		   0x014FC2B4:  D52966EB     BL $+0x198a75c  // CALL → String.op_Equality
		   0x014FC2B8:  0010A0E1     MOV r1, r0
		   0x014FC2BC:  0900A0E3     MOV r0, 0x9
		   0x014FC2C0:  000051E3     CMPS r0, r1, 0x0
		   0x014FC2C4:  06000013     MOVNE r0, 0x6
		   0x014FC2C8:  000000EA     B $+0x8  // goto 0x014FC2D0
		   // ──── Block 20 if (> (unsigned)) ────────────────────
		   0x014FC2CC:  0000A0E3     MOV r0, 0x0
		   // ──── Block 21 ──────────────────────────────
		   0x014FC2D0:  08D08DE2     ADD sp, sp, 0x8
		   0x014FC2D4:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014FC2D8:  CA1CD302     SBCSEQ r1, r3, 0xca00
		   0x014FC2DC:  68C3B702     ADCSEQ ip, r7, 0xa0000001
		   0x014FC2E0:  1CB7B802     ADCSEQ fp, r8, 0x700000
		   0x014FC2E4:  6CD9B702     ADCSEQ sp, r7, 0x1b0000
		   0x014FC2E8:  FCC2B702     ADCSEQ ip, r7, 0xc000000f
		   0x014FC2EC:  A8D8B702     ADCSEQ sp, r7, 0xa80000
		   0x014FC2F0:  F8B5B802     ADCSEQ fp, r8, 0x3e000000
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
public enum ShopOfferSlotType // TypeDefIndex: 640
{

	// Fields
	public int value__; // 0x0
	public const ItemPack.ShopOfferSlotType None = 0;
	public const ItemPack.ShopOfferSlotType coins = 1;
	public const ItemPack.ShopOfferSlotType gems = 2;
	public const ItemPack.ShopOfferSlotType energy = 3;
	public const ItemPack.ShopOfferSlotType endlessEnergy = 4;
	public const ItemPack.ShopOfferSlotType xp = 5;
	public const ItemPack.ShopOfferSlotType workshopXP = 6;
	public const ItemPack.ShopOfferSlotType boosterspeed = 7;
	public const ItemPack.ShopOfferSlotType sidejob = 8;
	public const ItemPack.ShopOfferSlotType workshop = 9;
	public const ItemPack.ShopOfferSlotType seasonsItems = 10;
	public const ItemPack.ShopOfferSlotType commonItems = 11;
	public const ItemPack.ShopOfferSlotType albumChest = 12;
	public const ItemPack.ShopOfferSlotType eventToken = 13;
	public const ItemPack.ShopOfferSlotType randomChest = 14;
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass24_0 // TypeDefIndex: 641
{

	// Fields
	public Sprite rewardIcon; // 0x8

	// Methods

	// RVA: 0x14FC490 Offset: 0x14FC490 VA: 0x14FC490
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FC490:  0010A0E3     MOV r1, 0x0
		   0x014FC494:  D4636EEA     B $+0x1b98f58  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x14FC498 Offset: 0x14FC498 VA: 0x14FC498
	internal void <GetChestClaimPopupReward>b__0(Sprite s) {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FC498:  081080E5     STR r1, [r0, 0x8]
		   0x014FC49C:  1EFF2FE1     BX lr
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <>c__DisplayClass40_0 // TypeDefIndex: 642
{

	// Fields
	public Action<Sprite> complete; // 0x8

	// Methods

	// RVA: 0x14FC4A0 Offset: 0x14FC4A0 VA: 0x14FC4A0
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014FC4A0:  0010A0E3     MOV r1, 0x0
		   0x014FC4A4:  D0636EEA     B $+0x1b98f48  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x14FC4A8 Offset: 0x14FC4A8 VA: 0x14FC4A8
	internal void <GetRewardSprite>b__0(Sprite s) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014FC4A8:  080090E5     LDR r0, [r0, 0x8]
		   0x014FC4AC:  000050E3     CMPS r0, r0, 0x0
		   0x014FC4B0:  1EFF2F01     BXEQ lr
		   0x014FC4B4:  0C3090E5     LDR r3, [r0, 0xc]
		   0x014FC4B8:  142090E5     LDR r2, [r0, 0x14]
		   0x014FC4BC:  200090E5     LDR r0, [r0, 0x20]
		   0x014FC4C0:  13FF2FE1     BX r3
		*/
	}
}
