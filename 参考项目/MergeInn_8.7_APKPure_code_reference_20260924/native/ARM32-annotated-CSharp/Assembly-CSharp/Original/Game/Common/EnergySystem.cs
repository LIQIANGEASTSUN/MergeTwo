// Dll : Assembly-CSharp.dll
// Namespace: Original.Game.Common
public class EnergySystem : MonoBehaviour, ICurrencySystem // TypeDefIndex: 3501
{

	// Fields
	private const string TIMER = "EnergySystem_timer";
	private const string CURRENCY_SPENT = "spent_energy";
	private const string CURRENCY_EARNED = "earned_energy";
	private const string CURRENCY_PAID_EARNED = "earned_energy_paid";
	private const string ENERGY_ADS_TOTAL = "ads_energy_total";
	public const int INITIAL_ENERGY = 100;
	private const int TARGET_TIME_SEC = 120;
	private const int RENEWABLE_ENERGY_MAXIMUM = 100;
	private const int RENEWABLE_ENERGY_AMOUNT = 1;
	[CompilerGenerated]
	private Action<int> onEnergyUpdated; // 0x10
	[CompilerGenerated]
	private Action onEnergyDepleted; // 0x14
	[CompilerGenerated]
	private Action SkipAnimation; // 0x18
	[CompilerGenerated]
	private static Action onRefillEnergy; // 0x0
	[CompilerGenerated]
	private static Action<int> onEnergySpent; // 0x4
	[CompilerGenerated]
	private static Action<int> onEnergySpentOnSpeedUp; // 0x8
	[CompilerGenerated]
	private static Action<int> onEnergySpentOnSpawn; // 0xC
	[CompilerGenerated]
	private static EnergyEarnedAnalyticsDelegate onEnergyEarnedAnalytics; // 0x10
	[CompilerGenerated]
	private static Func<CurrentOpenedActivity> getCurrentOpenedActivity; // 0x14
	[CompilerGenerated]
	private Action<int> onTimerChanged; // 0x1C
	private int currentTime; // 0x20
	private readonly WaitForSeconds oneSecond; // 0x24
	private Coroutine timerCoroutine; // 0x28
	private bool isInited; // 0x2C
	private int currencySpent; // 0x30
	private int currencyFreeEarned; // 0x34
	private int currencyPaidEarned; // 0x38
	private int energyAdsTotal; // 0x3C
	private ConditionalNotificationEnergy conditionalNotificationEnergy; // 0x40
	private EnergySpendBatchReporter spendBatchReporter; // 0x44
	[CompilerGenerated]
	private Action onEnergyRequest; // 0x48

	// Methods

	[CompilerGenerated]
	// RVA: 0x1430F70 Offset: 0x1430F70 VA: 0x1430F70
	public void add_onEnergyUpdated(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01430F70:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01430F74:  98409FE5     LDR r4, [pc, 0x98]
		   0x01430F78:  0090A0E1     MOV sb, r0
		   0x01430F7C:  0180A0E1     MOV r8, r1
		   0x01430F80:  04408FE0     ADD r4, pc, r4
		   0x01430F84:  0000D4E5     LDRB r0, [r4]
		   0x01430F88:  000050E3     CMPS r0, r0, 0x0
		   0x01430F8C:  0400001A     BNE $+0x18  // if (!=) goto 0x01430FA4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01430F90:  80009FE5     LDR r0, [pc, 0x80]
		   0x01430F94:  00009FE7     LDR r0, [pc, r0]
		   0x01430F98:  70A8ECEB     BL $-0x4d5e38
		   0x01430F9C:  0100A0E3     MOV r0, 0x1
		   0x01430FA0:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01430FA4:  1000B9E5     LDR r0, [sb, 0x10]!
		   0x01430FA8:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01430FAC:  0AA09FE7     LDR r10, [pc, r10]
		   0x01430FB0:  0810A0E1     MOV r1, r8
		   0x01430FB4:  0020A0E3     MOV r2, 0x0
		   0x01430FB8:  0060A0E1     MOV r6, r0
		   0x01430FBC:  0070A0E3     MOV r7, 0x0
		   0x01430FC0:  5CA171EB     BL $+0x1c68578  // CALL → Delegate.Combine
		   0x01430FC4:  000050E3     CMPS r0, r0, 0x0
		   0x01430FC8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01430FF8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01430FCC:  00509AE5     LDR r5, [r10]
		   0x01430FD0:  0040A0E1     MOV r4, r0
		   0x01430FD4:  0510A0E1     MOV r1, r5
		   0x01430FD8:  AEA8ECEB     BL $-0x4d5d40
		   0x01430FDC:  0070A0E1     MOV r7, r0
		   0x01430FE0:  000050E3     CMPS r0, r0, 0x0
		   0x01430FE4:  0300001A     BNE $+0x14  // if (!=) goto 0x01430FF8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01430FE8:  0400A0E1     MOV r0, r4
		   0x01430FEC:  0510A0E1     MOV r1, r5
		   0x01430FF0:  E4A9ECEB     BL $-0x4d5868
		   0x01430FF4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01430FF8:  0900A0E1     MOV r0, sb
		   0x01430FFC:  0710A0E1     MOV r1, r7
		   0x01431000:  0620A0E1     MOV r2, r6
		   0x01431004:  1B95EDEB     BL $-0x49ab8c
		   0x01431008:  060050E1     CMPS r0, r0, r6
		   0x0143100C:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01431010:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431014:  79C7DF02     SBCSEQ ip, pc, 0x1e40000
		   0x01431018:  506CC402     SBCEQ r6, r4, 0x5000
		   0x0143101C:  386CC402     SBCEQ r6, r4, 0x3800
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431020 Offset: 0x1431020 VA: 0x1431020
	public void remove_onEnergyUpdated(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431020:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431024:  98409FE5     LDR r4, [pc, 0x98]
		   0x01431028:  0090A0E1     MOV sb, r0
		   0x0143102C:  0180A0E1     MOV r8, r1
		   0x01431030:  04408FE0     ADD r4, pc, r4
		   0x01431034:  0000D4E5     LDRB r0, [r4]
		   0x01431038:  000050E3     CMPS r0, r0, 0x0
		   0x0143103C:  0400001A     BNE $+0x18  // if (!=) goto 0x01431054
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431040:  80009FE5     LDR r0, [pc, 0x80]
		   0x01431044:  00009FE7     LDR r0, [pc, r0]
		   0x01431048:  44A8ECEB     BL $-0x4d5ee8
		   0x0143104C:  0100A0E3     MOV r0, 0x1
		   0x01431050:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431054:  1000B9E5     LDR r0, [sb, 0x10]!
		   0x01431058:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x0143105C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01431060:  0810A0E1     MOV r1, r8
		   0x01431064:  0020A0E3     MOV r2, 0x0
		   0x01431068:  0060A0E1     MOV r6, r0
		   0x0143106C:  0070A0E3     MOV r7, 0x0
		   0x01431070:  AEA171EB     BL $+0x1c686c0  // CALL → Delegate.Remove
		   0x01431074:  000050E3     CMPS r0, r0, 0x0
		   0x01431078:  0A00000A     BEQ $+0x30  // if (==) goto 0x014310A8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0143107C:  00509AE5     LDR r5, [r10]
		   0x01431080:  0040A0E1     MOV r4, r0
		   0x01431084:  0510A0E1     MOV r1, r5
		   0x01431088:  82A8ECEB     BL $-0x4d5df0
		   0x0143108C:  0070A0E1     MOV r7, r0
		   0x01431090:  000050E3     CMPS r0, r0, 0x0
		   0x01431094:  0300001A     BNE $+0x14  // if (!=) goto 0x014310A8
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01431098:  0400A0E1     MOV r0, r4
		   0x0143109C:  0510A0E1     MOV r1, r5
		   0x014310A0:  B8A9ECEB     BL $-0x4d5918
		   0x014310A4:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x014310A8:  0900A0E1     MOV r0, sb
		   0x014310AC:  0710A0E1     MOV r1, r7
		   0x014310B0:  0620A0E1     MOV r2, r6
		   0x014310B4:  EF94EDEB     BL $-0x49ac3c
		   0x014310B8:  060050E1     CMPS r0, r0, r6
		   0x014310BC:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x014310C0:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x014310C4:  CAC6DF02     SBCSEQ ip, pc, 0xca00000
		   0x014310C8:  A06BC402     SBCEQ r6, r4, 0x28000
		   0x014310CC:  886BC402     SBCEQ r6, r4, 0x22000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x14310D0 Offset: 0x14310D0 VA: 0x14310D0
	public void add_onEnergyDepleted(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014310D0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x014310D4:  88609FE5     LDR r6, [pc, 0x88]
		   0x014310D8:  0050A0E1     MOV r5, r0
		   0x014310DC:  0140A0E1     MOV r4, r1
		   0x014310E0:  06608FE0     ADD r6, pc, r6
		   0x014310E4:  0000D6E5     LDRB r0, [r6]
		   0x014310E8:  000050E3     CMPS r0, r0, 0x0
		   0x014310EC:  0400001A     BNE $+0x18  // if (!=) goto 0x01431104
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014310F0:  70009FE5     LDR r0, [pc, 0x70]
		   0x014310F4:  00009FE7     LDR r0, [pc, r0]
		   0x014310F8:  18A8ECEB     BL $-0x4d5f98
		   0x014310FC:  0100A0E3     MOV r0, 0x1
		   0x01431100:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431104:  1400B5E5     LDR r0, [r5, 0x14]!
		   0x01431108:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x0143110C:  08809FE7     LDR r8, [pc, r8]
		   0x01431110:  0410A0E1     MOV r1, r4
		   0x01431114:  0020A0E3     MOV r2, 0x0
		   0x01431118:  0060A0E1     MOV r6, r0
		   0x0143111C:  0070A0E3     MOV r7, 0x0
		   0x01431120:  04A171EB     BL $+0x1c68418  // CALL → Delegate.Combine
		   0x01431124:  000050E3     CMPS r0, r0, 0x0
		   0x01431128:  0600000A     BEQ $+0x20  // if (==) goto 0x01431148
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0143112C:  001098E5     LDR r1, [r8]
		   0x01431130:  002090E5     LDR r2, [r0]
		   0x01431134:  010052E1     CMPS r0, r2, r1
		   0x01431138:  0100000A     BEQ $+0xc  // if (==) goto 0x01431144
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x0143113C:  91A9ECEB     BL $-0x4d59b4
		   0x01431140:  000000EA     B $+0x8  // goto 0x01431148
		   // ──── Block 5 if (==) ────────────────────
		   0x01431144:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01431148:  0500A0E1     MOV r0, r5
		   0x0143114C:  0710A0E1     MOV r1, r7
		   0x01431150:  0620A0E1     MOV r2, r6
		   0x01431154:  C794EDEB     BL $-0x49acdc
		   0x01431158:  060050E1     CMPS r0, r0, r6
		   0x0143115C:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x01431160:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01431164:  1BC6DF02     SBCSEQ ip, pc, 0x1b00000
		   0x01431168:  D057C402     SBCEQ r5, r4, 0x3400000
		   0x0143116C:  B857C402     SBCEQ r5, r4, 0x2e00000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431170 Offset: 0x1431170 VA: 0x1431170
	public void remove_onEnergyDepleted(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431170:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01431174:  88609FE5     LDR r6, [pc, 0x88]
		   0x01431178:  0050A0E1     MOV r5, r0
		   0x0143117C:  0140A0E1     MOV r4, r1
		   0x01431180:  06608FE0     ADD r6, pc, r6
		   0x01431184:  0000D6E5     LDRB r0, [r6]
		   0x01431188:  000050E3     CMPS r0, r0, 0x0
		   0x0143118C:  0400001A     BNE $+0x18  // if (!=) goto 0x014311A4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431190:  70009FE5     LDR r0, [pc, 0x70]
		   0x01431194:  00009FE7     LDR r0, [pc, r0]
		   0x01431198:  F0A7ECEB     BL $-0x4d6038
		   0x0143119C:  0100A0E3     MOV r0, 0x1
		   0x014311A0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014311A4:  1400B5E5     LDR r0, [r5, 0x14]!
		   0x014311A8:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x014311AC:  08809FE7     LDR r8, [pc, r8]
		   0x014311B0:  0410A0E1     MOV r1, r4
		   0x014311B4:  0020A0E3     MOV r2, 0x0
		   0x014311B8:  0060A0E1     MOV r6, r0
		   0x014311BC:  0070A0E3     MOV r7, 0x0
		   0x014311C0:  5AA171EB     BL $+0x1c68570  // CALL → Delegate.Remove
		   0x014311C4:  000050E3     CMPS r0, r0, 0x0
		   0x014311C8:  0600000A     BEQ $+0x20  // if (==) goto 0x014311E8
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014311CC:  001098E5     LDR r1, [r8]
		   0x014311D0:  002090E5     LDR r2, [r0]
		   0x014311D4:  010052E1     CMPS r0, r2, r1
		   0x014311D8:  0100000A     BEQ $+0xc  // if (==) goto 0x014311E4
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x014311DC:  69A9ECEB     BL $-0x4d5a54
		   0x014311E0:  000000EA     B $+0x8  // goto 0x014311E8
		   // ──── Block 5 if (==) ────────────────────
		   0x014311E4:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x014311E8:  0500A0E1     MOV r0, r5
		   0x014311EC:  0710A0E1     MOV r1, r7
		   0x014311F0:  0620A0E1     MOV r2, r6
		   0x014311F4:  9F94EDEB     BL $-0x49ad7c
		   0x014311F8:  060050E1     CMPS r0, r0, r6
		   0x014311FC:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x01431200:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01431204:  7CC5DF02     SBCSEQ ip, pc, 0x1f000000
		   0x01431208:  3057C402     SBCEQ r5, r4, 0xc00000
		   0x0143120C:  1857C402     SBCEQ r5, r4, 0x600000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431210 Offset: 0x1431210 VA: 0x1431210
	public void add_SkipAnimation(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431210:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01431214:  88609FE5     LDR r6, [pc, 0x88]
		   0x01431218:  0050A0E1     MOV r5, r0
		   0x0143121C:  0140A0E1     MOV r4, r1
		   0x01431220:  06608FE0     ADD r6, pc, r6
		   0x01431224:  0000D6E5     LDRB r0, [r6]
		   0x01431228:  000050E3     CMPS r0, r0, 0x0
		   0x0143122C:  0400001A     BNE $+0x18  // if (!=) goto 0x01431244
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431230:  70009FE5     LDR r0, [pc, 0x70]
		   0x01431234:  00009FE7     LDR r0, [pc, r0]
		   0x01431238:  C8A7ECEB     BL $-0x4d60d8
		   0x0143123C:  0100A0E3     MOV r0, 0x1
		   0x01431240:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431244:  1800B5E5     LDR r0, [r5, 0x18]!
		   0x01431248:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x0143124C:  08809FE7     LDR r8, [pc, r8]
		   0x01431250:  0410A0E1     MOV r1, r4
		   0x01431254:  0020A0E3     MOV r2, 0x0
		   0x01431258:  0060A0E1     MOV r6, r0
		   0x0143125C:  0070A0E3     MOV r7, 0x0
		   0x01431260:  B4A071EB     BL $+0x1c682d8  // CALL → Delegate.Combine
		   0x01431264:  000050E3     CMPS r0, r0, 0x0
		   0x01431268:  0600000A     BEQ $+0x20  // if (==) goto 0x01431288
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0143126C:  001098E5     LDR r1, [r8]
		   0x01431270:  002090E5     LDR r2, [r0]
		   0x01431274:  010052E1     CMPS r0, r2, r1
		   0x01431278:  0100000A     BEQ $+0xc  // if (==) goto 0x01431284
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x0143127C:  41A9ECEB     BL $-0x4d5af4
		   0x01431280:  000000EA     B $+0x8  // goto 0x01431288
		   // ──── Block 5 if (==) ────────────────────
		   0x01431284:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01431288:  0500A0E1     MOV r0, r5
		   0x0143128C:  0710A0E1     MOV r1, r7
		   0x01431290:  0620A0E1     MOV r2, r6
		   0x01431294:  7794EDEB     BL $-0x49ae1c
		   0x01431298:  060050E1     CMPS r0, r0, r6
		   0x0143129C:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x014312A0:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x014312A4:  DDC4DF02     SBCSEQ ip, pc, 0xdd000000
		   0x014312A8:  9056C402     SBCEQ r5, r4, 0x9000000
		   0x014312AC:  7856C402     SBCEQ r5, r4, 0x7800000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x14312B0 Offset: 0x14312B0 VA: 0x14312B0
	public void remove_SkipAnimation(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014312B0:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x014312B4:  88609FE5     LDR r6, [pc, 0x88]
		   0x014312B8:  0050A0E1     MOV r5, r0
		   0x014312BC:  0140A0E1     MOV r4, r1
		   0x014312C0:  06608FE0     ADD r6, pc, r6
		   0x014312C4:  0000D6E5     LDRB r0, [r6]
		   0x014312C8:  000050E3     CMPS r0, r0, 0x0
		   0x014312CC:  0400001A     BNE $+0x18  // if (!=) goto 0x014312E4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014312D0:  70009FE5     LDR r0, [pc, 0x70]
		   0x014312D4:  00009FE7     LDR r0, [pc, r0]
		   0x014312D8:  A0A7ECEB     BL $-0x4d6178
		   0x014312DC:  0100A0E3     MOV r0, 0x1
		   0x014312E0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014312E4:  1800B5E5     LDR r0, [r5, 0x18]!
		   0x014312E8:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x014312EC:  08809FE7     LDR r8, [pc, r8]
		   0x014312F0:  0410A0E1     MOV r1, r4
		   0x014312F4:  0020A0E3     MOV r2, 0x0
		   0x014312F8:  0060A0E1     MOV r6, r0
		   0x014312FC:  0070A0E3     MOV r7, 0x0
		   0x01431300:  0AA171EB     BL $+0x1c68430  // CALL → Delegate.Remove
		   0x01431304:  000050E3     CMPS r0, r0, 0x0
		   0x01431308:  0600000A     BEQ $+0x20  // if (==) goto 0x01431328
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x0143130C:  001098E5     LDR r1, [r8]
		   0x01431310:  002090E5     LDR r2, [r0]
		   0x01431314:  010052E1     CMPS r0, r2, r1
		   0x01431318:  0100000A     BEQ $+0xc  // if (==) goto 0x01431324
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x0143131C:  19A9ECEB     BL $-0x4d5b94
		   0x01431320:  000000EA     B $+0x8  // goto 0x01431328
		   // ──── Block 5 if (==) ────────────────────
		   0x01431324:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01431328:  0500A0E1     MOV r0, r5
		   0x0143132C:  0710A0E1     MOV r1, r7
		   0x01431330:  0620A0E1     MOV r2, r6
		   0x01431334:  4F94EDEB     BL $-0x49aebc
		   0x01431338:  060050E1     CMPS r0, r0, r6
		   0x0143133C:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x01431340:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01431344:  3EC4DF02     SBCSEQ ip, pc, 0x3e000000
		   0x01431348:  F055C402     SBCEQ r5, r4, 0x3c000000
		   0x0143134C:  D855C402     SBCEQ r5, r4, 0x36000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431350 Offset: 0x1431350 VA: 0x1431350
	public static void add_onRefillEnergy(Action value) {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431350:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01431354:  D0509FE5     LDR r5, [pc, 0xd0]
		   0x01431358:  0040A0E1     MOV r4, r0
		   0x0143135C:  05508FE0     ADD r5, pc, r5
		   0x01431360:  0000D5E5     LDRB r0, [r5]
		   0x01431364:  000050E3     CMPS r0, r0, 0x0
		   0x01431368:  0700001A     BNE $+0x24  // if (!=) goto 0x0143138C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143136C:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01431370:  00009FE7     LDR r0, [pc, r0]
		   0x01431374:  79A7ECEB     BL $-0x4d6214
		   0x01431378:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x0143137C:  00009FE7     LDR r0, [pc, r0]
		   0x01431380:  76A7ECEB     BL $-0x4d6220
		   0x01431384:  0100A0E3     MOV r0, 0x1
		   0x01431388:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143138C:  A4709FE5     LDR r7, [pc, 0xa4]
		   0x01431390:  07709FE7     LDR r7, [pc, r7]
		   0x01431394:  000097E5     LDR r0, [r7]
		   0x01431398:  741090E5     LDR r1, [r0, 0x74]
		   0x0143139C:  000051E3     CMPS r0, r1, 0x0
		   0x014313A0:  0100001A     BNE $+0xc  // if (!=) goto 0x014313AC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x014313A4:  BAA7ECEB     BL $-0x4d6110
		   0x014313A8:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x014313AC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014313B0:  005090E5     LDR r5, [r0]
		   0x014313B4:  80809FE5     LDR r8, [pc, 0x80]
		   0x014313B8:  08809FE7     LDR r8, [pc, r8]
		   0x014313BC:  0500A0E1     MOV r0, r5
		   0x014313C0:  0410A0E1     MOV r1, r4
		   0x014313C4:  0020A0E3     MOV r2, 0x0
		   0x014313C8:  0060A0E3     MOV r6, 0x0
		   0x014313CC:  59A071EB     BL $+0x1c6816c  // CALL → Delegate.Combine
		   0x014313D0:  000050E3     CMPS r0, r0, 0x0
		   0x014313D4:  0600000A     BEQ $+0x20  // if (==) goto 0x014313F4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014313D8:  001098E5     LDR r1, [r8]
		   0x014313DC:  002090E5     LDR r2, [r0]
		   0x014313E0:  010052E1     CMPS r0, r2, r1
		   0x014313E4:  0100000A     BEQ $+0xc  // if (==) goto 0x014313F0
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x014313E8:  E6A8ECEB     BL $-0x4d5c60
		   0x014313EC:  000000EA     B $+0x8  // goto 0x014313F4
		   // ──── Block 7 if (==) ────────────────────
		   0x014313F0:  0060A0E1     MOV r6, r0
		   // ──── Block 8 if (==) ────────────────────
		   0x014313F4:  000097E5     LDR r0, [r7]
		   0x014313F8:  741090E5     LDR r1, [r0, 0x74]
		   0x014313FC:  000051E3     CMPS r0, r1, 0x0
		   0x01431400:  0100001A     BNE $+0xc  // if (!=) goto 0x0143140C
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01431404:  A2A7ECEB     BL $-0x4d6170
		   0x01431408:  000097E5     LDR r0, [r7]
		   // ──── Block 10 if (!=) ────────────────────
		   0x0143140C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431410:  0610A0E1     MOV r1, r6
		   0x01431414:  0520A0E1     MOV r2, r5
		   0x01431418:  1694EDEB     BL $-0x49afa0
		   0x0143141C:  050050E1     CMPS r0, r0, r5
		   0x01431420:  0050A0E1     MOV r5, r0
		   0x01431424:  E4FFFF1A     BNE $-0x68
		   // ──── Block 11 else (==) ────────────────────
		   0x01431428:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0143142C:  A3C3DF02     SBCSEQ ip, pc, 0x8c000002
		   0x01431430:  5455C402     SBCEQ r5, r4, 0x15000000
		   0x01431434:  909BC402     SBCEQ sb, r4, 0x24000
		   0x01431438:  7C9BC402     SBCEQ sb, r4, 0x1f000
		   0x0143143C:  0C55C402     SBCEQ r5, r4, 0x3000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431440 Offset: 0x1431440 VA: 0x1431440
	public static void remove_onRefillEnergy(Action value) {
		/* Disassembly (ARM32, 60 instructions, 0xF0 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431440:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01431444:  D0509FE5     LDR r5, [pc, 0xd0]
		   0x01431448:  0040A0E1     MOV r4, r0
		   0x0143144C:  05508FE0     ADD r5, pc, r5
		   0x01431450:  0000D5E5     LDRB r0, [r5]
		   0x01431454:  000050E3     CMPS r0, r0, 0x0
		   0x01431458:  0700001A     BNE $+0x24  // if (!=) goto 0x0143147C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143145C:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01431460:  00009FE7     LDR r0, [pc, r0]
		   0x01431464:  3DA7ECEB     BL $-0x4d6304
		   0x01431468:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x0143146C:  00009FE7     LDR r0, [pc, r0]
		   0x01431470:  3AA7ECEB     BL $-0x4d6310
		   0x01431474:  0100A0E3     MOV r0, 0x1
		   0x01431478:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143147C:  A4709FE5     LDR r7, [pc, 0xa4]
		   0x01431480:  07709FE7     LDR r7, [pc, r7]
		   0x01431484:  000097E5     LDR r0, [r7]
		   0x01431488:  741090E5     LDR r1, [r0, 0x74]
		   0x0143148C:  000051E3     CMPS r0, r1, 0x0
		   0x01431490:  0100001A     BNE $+0xc  // if (!=) goto 0x0143149C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431494:  7EA7ECEB     BL $-0x4d6200
		   0x01431498:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0143149C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014314A0:  005090E5     LDR r5, [r0]
		   0x014314A4:  80809FE5     LDR r8, [pc, 0x80]
		   0x014314A8:  08809FE7     LDR r8, [pc, r8]
		   0x014314AC:  0500A0E1     MOV r0, r5
		   0x014314B0:  0410A0E1     MOV r1, r4
		   0x014314B4:  0020A0E3     MOV r2, 0x0
		   0x014314B8:  0060A0E3     MOV r6, 0x0
		   0x014314BC:  9BA071EB     BL $+0x1c68274  // CALL → Delegate.Remove
		   0x014314C0:  000050E3     CMPS r0, r0, 0x0
		   0x014314C4:  0600000A     BEQ $+0x20  // if (==) goto 0x014314E4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014314C8:  001098E5     LDR r1, [r8]
		   0x014314CC:  002090E5     LDR r2, [r0]
		   0x014314D0:  010052E1     CMPS r0, r2, r1
		   0x014314D4:  0100000A     BEQ $+0xc  // if (==) goto 0x014314E0
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x014314D8:  AAA8ECEB     BL $-0x4d5d50
		   0x014314DC:  000000EA     B $+0x8  // goto 0x014314E4
		   // ──── Block 7 if (==) ────────────────────
		   0x014314E0:  0060A0E1     MOV r6, r0
		   // ──── Block 8 if (==) ────────────────────
		   0x014314E4:  000097E5     LDR r0, [r7]
		   0x014314E8:  741090E5     LDR r1, [r0, 0x74]
		   0x014314EC:  000051E3     CMPS r0, r1, 0x0
		   0x014314F0:  0100001A     BNE $+0xc  // if (!=) goto 0x014314FC
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x014314F4:  66A7ECEB     BL $-0x4d6260
		   0x014314F8:  000097E5     LDR r0, [r7]
		   // ──── Block 10 if (!=) ────────────────────
		   0x014314FC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431500:  0610A0E1     MOV r1, r6
		   0x01431504:  0520A0E1     MOV r2, r5
		   0x01431508:  DA93EDEB     BL $-0x49b090
		   0x0143150C:  050050E1     CMPS r0, r0, r5
		   0x01431510:  0050A0E1     MOV r5, r0
		   0x01431514:  E4FFFF1A     BNE $-0x68
		   // ──── Block 11 else (==) ────────────────────
		   0x01431518:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0143151C:  B4C2DF02     SBCSEQ ip, pc, 0x4000000b
		   0x01431520:  6454C402     SBCEQ r5, r4, 0x64000000
		   0x01431524:  A09AC402     SBCEQ sb, r4, 0xa0000
		   0x01431528:  8C9AC402     SBCEQ sb, r4, 0x8c000
		   0x0143152C:  1C54C402     SBCEQ r5, r4, 0x1c000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431530 Offset: 0x1431530 VA: 0x1431530
	public static void add_onEnergySpent(Action<int> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431530:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431534:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431538:  0080A0E1     MOV r8, r0
		   0x0143153C:  04408FE0     ADD r4, pc, r4
		   0x01431540:  0000D4E5     LDRB r0, [r4]
		   0x01431544:  000050E3     CMPS r0, r0, 0x0
		   0x01431548:  0700001A     BNE $+0x24  // if (!=) goto 0x0143156C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143154C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431550:  00009FE7     LDR r0, [pc, r0]
		   0x01431554:  01A7ECEB     BL $-0x4d63f4
		   0x01431558:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x0143155C:  00009FE7     LDR r0, [pc, r0]
		   0x01431560:  FEA6ECEB     BL $-0x4d6400
		   0x01431564:  0100A0E3     MOV r0, 0x1
		   0x01431568:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143156C:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431570:  09909FE7     LDR sb, [pc, sb]
		   0x01431574:  000099E5     LDR r0, [sb]
		   0x01431578:  741090E5     LDR r1, [r0, 0x74]
		   0x0143157C:  000051E3     CMPS r0, r1, 0x0
		   0x01431580:  0100001A     BNE $+0xc  // if (!=) goto 0x0143158C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431584:  42A7ECEB     BL $-0x4d62f0
		   0x01431588:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0143158C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431590:  045090E5     LDR r5, [r0, 0x4]
		   0x01431594:  94A09FE5     LDR r10, [pc, 0x94]
		   0x01431598:  0AA09FE7     LDR r10, [pc, r10]
		   0x0143159C:  0500A0E1     MOV r0, r5
		   0x014315A0:  0810A0E1     MOV r1, r8
		   0x014315A4:  0020A0E3     MOV r2, 0x0
		   0x014315A8:  0060A0E3     MOV r6, 0x0
		   0x014315AC:  E19F71EB     BL $+0x1c67f8c  // CALL → Delegate.Combine
		   0x014315B0:  000050E3     CMPS r0, r0, 0x0
		   0x014315B4:  0A00000A     BEQ $+0x30  // if (==) goto 0x014315E4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014315B8:  00409AE5     LDR r4, [r10]
		   0x014315BC:  0070A0E1     MOV r7, r0
		   0x014315C0:  0410A0E1     MOV r1, r4
		   0x014315C4:  33A7ECEB     BL $-0x4d632c
		   0x014315C8:  0060A0E1     MOV r6, r0
		   0x014315CC:  000050E3     CMPS r0, r0, 0x0
		   0x014315D0:  0300001A     BNE $+0x14  // if (!=) goto 0x014315E4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014315D4:  0700A0E1     MOV r0, r7
		   0x014315D8:  0410A0E1     MOV r1, r4
		   0x014315DC:  69A8ECEB     BL $-0x4d5e54
		   0x014315E0:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x014315E4:  000099E5     LDR r0, [sb]
		   0x014315E8:  741090E5     LDR r1, [r0, 0x74]
		   0x014315EC:  000051E3     CMPS r0, r1, 0x0
		   0x014315F0:  0100001A     BNE $+0xc  // if (!=) goto 0x014315FC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014315F4:  26A7ECEB     BL $-0x4d6360
		   0x014315F8:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x014315FC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431600:  0610A0E1     MOV r1, r6
		   0x01431604:  0520A0E1     MOV r2, r5
		   0x01431608:  040080E2     ADD r0, r0, 0x4
		   0x0143160C:  9993EDEB     BL $-0x49b194
		   0x01431610:  050050E1     CMPS r0, r0, r5
		   0x01431614:  0050A0E1     MOV r5, r0
		   0x01431618:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x0143161C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431620:  C5C1DF02     SBCSEQ ip, pc, 0x40000031
		   0x01431624:  9466C402     SBCEQ r6, r4, 0x9400000
		   0x01431628:  B099C402     SBCEQ sb, r4, 0x2c0000
		   0x0143162C:  9C99C402     SBCEQ sb, r4, 0x270000
		   0x01431630:  4C66C402     SBCEQ r6, r4, 0x4c00000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431634 Offset: 0x1431634 VA: 0x1431634
	public static void remove_onEnergySpent(Action<int> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431634:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431638:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x0143163C:  0080A0E1     MOV r8, r0
		   0x01431640:  04408FE0     ADD r4, pc, r4
		   0x01431644:  0000D4E5     LDRB r0, [r4]
		   0x01431648:  000050E3     CMPS r0, r0, 0x0
		   0x0143164C:  0700001A     BNE $+0x24  // if (!=) goto 0x01431670
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431650:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431654:  00009FE7     LDR r0, [pc, r0]
		   0x01431658:  C0A6ECEB     BL $-0x4d64f8
		   0x0143165C:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01431660:  00009FE7     LDR r0, [pc, r0]
		   0x01431664:  BDA6ECEB     BL $-0x4d6504
		   0x01431668:  0100A0E3     MOV r0, 0x1
		   0x0143166C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431670:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431674:  09909FE7     LDR sb, [pc, sb]
		   0x01431678:  000099E5     LDR r0, [sb]
		   0x0143167C:  741090E5     LDR r1, [r0, 0x74]
		   0x01431680:  000051E3     CMPS r0, r1, 0x0
		   0x01431684:  0100001A     BNE $+0xc  // if (!=) goto 0x01431690
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431688:  01A7ECEB     BL $-0x4d63f4
		   0x0143168C:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431690:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431694:  045090E5     LDR r5, [r0, 0x4]
		   0x01431698:  94A09FE5     LDR r10, [pc, 0x94]
		   0x0143169C:  0AA09FE7     LDR r10, [pc, r10]
		   0x014316A0:  0500A0E1     MOV r0, r5
		   0x014316A4:  0810A0E1     MOV r1, r8
		   0x014316A8:  0020A0E3     MOV r2, 0x0
		   0x014316AC:  0060A0E3     MOV r6, 0x0
		   0x014316B0:  1EA071EB     BL $+0x1c68080  // CALL → Delegate.Remove
		   0x014316B4:  000050E3     CMPS r0, r0, 0x0
		   0x014316B8:  0A00000A     BEQ $+0x30  // if (==) goto 0x014316E8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014316BC:  00409AE5     LDR r4, [r10]
		   0x014316C0:  0070A0E1     MOV r7, r0
		   0x014316C4:  0410A0E1     MOV r1, r4
		   0x014316C8:  F2A6ECEB     BL $-0x4d6430
		   0x014316CC:  0060A0E1     MOV r6, r0
		   0x014316D0:  000050E3     CMPS r0, r0, 0x0
		   0x014316D4:  0300001A     BNE $+0x14  // if (!=) goto 0x014316E8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014316D8:  0700A0E1     MOV r0, r7
		   0x014316DC:  0410A0E1     MOV r1, r4
		   0x014316E0:  28A8ECEB     BL $-0x4d5f58
		   0x014316E4:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x014316E8:  000099E5     LDR r0, [sb]
		   0x014316EC:  741090E5     LDR r1, [r0, 0x74]
		   0x014316F0:  000051E3     CMPS r0, r1, 0x0
		   0x014316F4:  0100001A     BNE $+0xc  // if (!=) goto 0x01431700
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014316F8:  E5A6ECEB     BL $-0x4d6464
		   0x014316FC:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431700:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431704:  0610A0E1     MOV r1, r6
		   0x01431708:  0520A0E1     MOV r2, r5
		   0x0143170C:  040080E2     ADD r0, r0, 0x4
		   0x01431710:  5893EDEB     BL $-0x49b298
		   0x01431714:  050050E1     CMPS r0, r0, r5
		   0x01431718:  0050A0E1     MOV r5, r0
		   0x0143171C:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431720:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431724:  C2C0DF02     SBCSEQ ip, pc, 0xc2
		   0x01431728:  9065C402     SBCEQ r6, r4, 0x24000000
		   0x0143172C:  AC98C402     SBCEQ sb, r4, 0xac0000
		   0x01431730:  9898C402     SBCEQ sb, r4, 0x980000
		   0x01431734:  4865C402     SBCEQ r6, r4, 0x12000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431738 Offset: 0x1431738 VA: 0x1431738
	public static void add_onEnergySpentOnSpeedUp(Action<int> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431738:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x0143173C:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431740:  0080A0E1     MOV r8, r0
		   0x01431744:  04408FE0     ADD r4, pc, r4
		   0x01431748:  0000D4E5     LDRB r0, [r4]
		   0x0143174C:  000050E3     CMPS r0, r0, 0x0
		   0x01431750:  0700001A     BNE $+0x24  // if (!=) goto 0x01431774
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431754:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431758:  00009FE7     LDR r0, [pc, r0]
		   0x0143175C:  7FA6ECEB     BL $-0x4d65fc
		   0x01431760:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01431764:  00009FE7     LDR r0, [pc, r0]
		   0x01431768:  7CA6ECEB     BL $-0x4d6608
		   0x0143176C:  0100A0E3     MOV r0, 0x1
		   0x01431770:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431774:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431778:  09909FE7     LDR sb, [pc, sb]
		   0x0143177C:  000099E5     LDR r0, [sb]
		   0x01431780:  741090E5     LDR r1, [r0, 0x74]
		   0x01431784:  000051E3     CMPS r0, r1, 0x0
		   0x01431788:  0100001A     BNE $+0xc  // if (!=) goto 0x01431794
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0143178C:  C0A6ECEB     BL $-0x4d64f8
		   0x01431790:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431794:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431798:  085090E5     LDR r5, [r0, 0x8]
		   0x0143179C:  94A09FE5     LDR r10, [pc, 0x94]
		   0x014317A0:  0AA09FE7     LDR r10, [pc, r10]
		   0x014317A4:  0500A0E1     MOV r0, r5
		   0x014317A8:  0810A0E1     MOV r1, r8
		   0x014317AC:  0020A0E3     MOV r2, 0x0
		   0x014317B0:  0060A0E3     MOV r6, 0x0
		   0x014317B4:  5F9F71EB     BL $+0x1c67d84  // CALL → Delegate.Combine
		   0x014317B8:  000050E3     CMPS r0, r0, 0x0
		   0x014317BC:  0A00000A     BEQ $+0x30  // if (==) goto 0x014317EC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014317C0:  00409AE5     LDR r4, [r10]
		   0x014317C4:  0070A0E1     MOV r7, r0
		   0x014317C8:  0410A0E1     MOV r1, r4
		   0x014317CC:  B1A6ECEB     BL $-0x4d6534
		   0x014317D0:  0060A0E1     MOV r6, r0
		   0x014317D4:  000050E3     CMPS r0, r0, 0x0
		   0x014317D8:  0300001A     BNE $+0x14  // if (!=) goto 0x014317EC
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014317DC:  0700A0E1     MOV r0, r7
		   0x014317E0:  0410A0E1     MOV r1, r4
		   0x014317E4:  E7A7ECEB     BL $-0x4d605c
		   0x014317E8:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x014317EC:  000099E5     LDR r0, [sb]
		   0x014317F0:  741090E5     LDR r1, [r0, 0x74]
		   0x014317F4:  000051E3     CMPS r0, r1, 0x0
		   0x014317F8:  0100001A     BNE $+0xc  // if (!=) goto 0x01431804
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x014317FC:  A4A6ECEB     BL $-0x4d6568
		   0x01431800:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431804:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431808:  0610A0E1     MOV r1, r6
		   0x0143180C:  0520A0E1     MOV r2, r5
		   0x01431810:  080080E2     ADD r0, r0, 0x8
		   0x01431814:  1793EDEB     BL $-0x49b39c
		   0x01431818:  050050E1     CMPS r0, r0, r5
		   0x0143181C:  0050A0E1     MOV r5, r0
		   0x01431820:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431824:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431828:  BFBFDF02     SBCSEQ fp, pc, 0x2fc
		   0x0143182C:  8C64C402     SBCEQ r6, r4, 0x8c000000
		   0x01431830:  A897C402     SBCEQ sb, r4, 0x2a00000
		   0x01431834:  9497C402     SBCEQ sb, r4, 0x2500000
		   0x01431838:  4464C402     SBCEQ r6, r4, 0x44000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x143183C Offset: 0x143183C VA: 0x143183C
	public static void remove_onEnergySpentOnSpeedUp(Action<int> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0143183C:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431840:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431844:  0080A0E1     MOV r8, r0
		   0x01431848:  04408FE0     ADD r4, pc, r4
		   0x0143184C:  0000D4E5     LDRB r0, [r4]
		   0x01431850:  000050E3     CMPS r0, r0, 0x0
		   0x01431854:  0700001A     BNE $+0x24  // if (!=) goto 0x01431878
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431858:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x0143185C:  00009FE7     LDR r0, [pc, r0]
		   0x01431860:  3EA6ECEB     BL $-0x4d6700
		   0x01431864:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01431868:  00009FE7     LDR r0, [pc, r0]
		   0x0143186C:  3BA6ECEB     BL $-0x4d670c
		   0x01431870:  0100A0E3     MOV r0, 0x1
		   0x01431874:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431878:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x0143187C:  09909FE7     LDR sb, [pc, sb]
		   0x01431880:  000099E5     LDR r0, [sb]
		   0x01431884:  741090E5     LDR r1, [r0, 0x74]
		   0x01431888:  000051E3     CMPS r0, r1, 0x0
		   0x0143188C:  0100001A     BNE $+0xc  // if (!=) goto 0x01431898
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431890:  7FA6ECEB     BL $-0x4d65fc
		   0x01431894:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431898:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0143189C:  085090E5     LDR r5, [r0, 0x8]
		   0x014318A0:  94A09FE5     LDR r10, [pc, 0x94]
		   0x014318A4:  0AA09FE7     LDR r10, [pc, r10]
		   0x014318A8:  0500A0E1     MOV r0, r5
		   0x014318AC:  0810A0E1     MOV r1, r8
		   0x014318B0:  0020A0E3     MOV r2, 0x0
		   0x014318B4:  0060A0E3     MOV r6, 0x0
		   0x014318B8:  9C9F71EB     BL $+0x1c67e78  // CALL → Delegate.Remove
		   0x014318BC:  000050E3     CMPS r0, r0, 0x0
		   0x014318C0:  0A00000A     BEQ $+0x30  // if (==) goto 0x014318F0
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014318C4:  00409AE5     LDR r4, [r10]
		   0x014318C8:  0070A0E1     MOV r7, r0
		   0x014318CC:  0410A0E1     MOV r1, r4
		   0x014318D0:  70A6ECEB     BL $-0x4d6638
		   0x014318D4:  0060A0E1     MOV r6, r0
		   0x014318D8:  000050E3     CMPS r0, r0, 0x0
		   0x014318DC:  0300001A     BNE $+0x14  // if (!=) goto 0x014318F0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014318E0:  0700A0E1     MOV r0, r7
		   0x014318E4:  0410A0E1     MOV r1, r4
		   0x014318E8:  A6A7ECEB     BL $-0x4d6160
		   0x014318EC:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x014318F0:  000099E5     LDR r0, [sb]
		   0x014318F4:  741090E5     LDR r1, [r0, 0x74]
		   0x014318F8:  000051E3     CMPS r0, r1, 0x0
		   0x014318FC:  0100001A     BNE $+0xc  // if (!=) goto 0x01431908
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01431900:  63A6ECEB     BL $-0x4d666c
		   0x01431904:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431908:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0143190C:  0610A0E1     MOV r1, r6
		   0x01431910:  0520A0E1     MOV r2, r5
		   0x01431914:  080080E2     ADD r0, r0, 0x8
		   0x01431918:  D692EDEB     BL $-0x49b4a0
		   0x0143191C:  050050E1     CMPS r0, r0, r5
		   0x01431920:  0050A0E1     MOV r5, r0
		   0x01431924:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431928:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0143192C:  BCBEDF02     SBCSEQ fp, pc, 0xbc0
		   0x01431930:  8863C402     SBCEQ r6, r4, 0x20000002
		   0x01431934:  A496C402     SBCEQ sb, r4, 0xa400000
		   0x01431938:  9096C402     SBCEQ sb, r4, 0x9000000
		   0x0143193C:  4063C402     SBCEQ r6, r4, 0x1
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431940 Offset: 0x1431940 VA: 0x1431940
	public static void add_onEnergySpentOnSpawn(Action<int> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431940:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431944:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431948:  0080A0E1     MOV r8, r0
		   0x0143194C:  04408FE0     ADD r4, pc, r4
		   0x01431950:  0000D4E5     LDRB r0, [r4]
		   0x01431954:  000050E3     CMPS r0, r0, 0x0
		   0x01431958:  0700001A     BNE $+0x24  // if (!=) goto 0x0143197C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143195C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431960:  00009FE7     LDR r0, [pc, r0]
		   0x01431964:  FDA5ECEB     BL $-0x4d6804
		   0x01431968:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x0143196C:  00009FE7     LDR r0, [pc, r0]
		   0x01431970:  FAA5ECEB     BL $-0x4d6810
		   0x01431974:  0100A0E3     MOV r0, 0x1
		   0x01431978:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143197C:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431980:  09909FE7     LDR sb, [pc, sb]
		   0x01431984:  000099E5     LDR r0, [sb]
		   0x01431988:  741090E5     LDR r1, [r0, 0x74]
		   0x0143198C:  000051E3     CMPS r0, r1, 0x0
		   0x01431990:  0100001A     BNE $+0xc  // if (!=) goto 0x0143199C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431994:  3EA6ECEB     BL $-0x4d6700
		   0x01431998:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0143199C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014319A0:  0C5090E5     LDR r5, [r0, 0xc]
		   0x014319A4:  94A09FE5     LDR r10, [pc, 0x94]
		   0x014319A8:  0AA09FE7     LDR r10, [pc, r10]
		   0x014319AC:  0500A0E1     MOV r0, r5
		   0x014319B0:  0810A0E1     MOV r1, r8
		   0x014319B4:  0020A0E3     MOV r2, 0x0
		   0x014319B8:  0060A0E3     MOV r6, 0x0
		   0x014319BC:  DD9E71EB     BL $+0x1c67b7c  // CALL → Delegate.Combine
		   0x014319C0:  000050E3     CMPS r0, r0, 0x0
		   0x014319C4:  0A00000A     BEQ $+0x30  // if (==) goto 0x014319F4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014319C8:  00409AE5     LDR r4, [r10]
		   0x014319CC:  0070A0E1     MOV r7, r0
		   0x014319D0:  0410A0E1     MOV r1, r4
		   0x014319D4:  2FA6ECEB     BL $-0x4d673c
		   0x014319D8:  0060A0E1     MOV r6, r0
		   0x014319DC:  000050E3     CMPS r0, r0, 0x0
		   0x014319E0:  0300001A     BNE $+0x14  // if (!=) goto 0x014319F4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x014319E4:  0700A0E1     MOV r0, r7
		   0x014319E8:  0410A0E1     MOV r1, r4
		   0x014319EC:  65A7ECEB     BL $-0x4d6264
		   0x014319F0:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x014319F4:  000099E5     LDR r0, [sb]
		   0x014319F8:  741090E5     LDR r1, [r0, 0x74]
		   0x014319FC:  000051E3     CMPS r0, r1, 0x0
		   0x01431A00:  0100001A     BNE $+0xc  // if (!=) goto 0x01431A0C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01431A04:  22A6ECEB     BL $-0x4d6770
		   0x01431A08:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431A0C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431A10:  0610A0E1     MOV r1, r6
		   0x01431A14:  0520A0E1     MOV r2, r5
		   0x01431A18:  0C0080E2     ADD r0, r0, 0xc
		   0x01431A1C:  9592EDEB     BL $-0x49b5a4
		   0x01431A20:  050050E1     CMPS r0, r0, r5
		   0x01431A24:  0050A0E1     MOV r5, r0
		   0x01431A28:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431A2C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431A30:  B9BDDF02     SBCSEQ fp, pc, 0x2e40
		   0x01431A34:  8462C402     SBCEQ r6, r4, 0x40000008
		   0x01431A38:  A095C402     SBCEQ sb, r4, 0x28000000
		   0x01431A3C:  8C95C402     SBCEQ sb, r4, 0x23000000
		   0x01431A40:  3C62C402     SBCEQ r6, r4, 0xc0000003
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431A44 Offset: 0x1431A44 VA: 0x1431A44
	public static void remove_onEnergySpentOnSpawn(Action<int> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431A44:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431A48:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431A4C:  0080A0E1     MOV r8, r0
		   0x01431A50:  04408FE0     ADD r4, pc, r4
		   0x01431A54:  0000D4E5     LDRB r0, [r4]
		   0x01431A58:  000050E3     CMPS r0, r0, 0x0
		   0x01431A5C:  0700001A     BNE $+0x24  // if (!=) goto 0x01431A80
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431A60:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431A64:  00009FE7     LDR r0, [pc, r0]
		   0x01431A68:  BCA5ECEB     BL $-0x4d6908
		   0x01431A6C:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01431A70:  00009FE7     LDR r0, [pc, r0]
		   0x01431A74:  B9A5ECEB     BL $-0x4d6914
		   0x01431A78:  0100A0E3     MOV r0, 0x1
		   0x01431A7C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431A80:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431A84:  09909FE7     LDR sb, [pc, sb]
		   0x01431A88:  000099E5     LDR r0, [sb]
		   0x01431A8C:  741090E5     LDR r1, [r0, 0x74]
		   0x01431A90:  000051E3     CMPS r0, r1, 0x0
		   0x01431A94:  0100001A     BNE $+0xc  // if (!=) goto 0x01431AA0
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431A98:  FDA5ECEB     BL $-0x4d6804
		   0x01431A9C:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431AA0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431AA4:  0C5090E5     LDR r5, [r0, 0xc]
		   0x01431AA8:  94A09FE5     LDR r10, [pc, 0x94]
		   0x01431AAC:  0AA09FE7     LDR r10, [pc, r10]
		   0x01431AB0:  0500A0E1     MOV r0, r5
		   0x01431AB4:  0810A0E1     MOV r1, r8
		   0x01431AB8:  0020A0E3     MOV r2, 0x0
		   0x01431ABC:  0060A0E3     MOV r6, 0x0
		   0x01431AC0:  1A9F71EB     BL $+0x1c67c70  // CALL → Delegate.Remove
		   0x01431AC4:  000050E3     CMPS r0, r0, 0x0
		   0x01431AC8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01431AF8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01431ACC:  00409AE5     LDR r4, [r10]
		   0x01431AD0:  0070A0E1     MOV r7, r0
		   0x01431AD4:  0410A0E1     MOV r1, r4
		   0x01431AD8:  EEA5ECEB     BL $-0x4d6840
		   0x01431ADC:  0060A0E1     MOV r6, r0
		   0x01431AE0:  000050E3     CMPS r0, r0, 0x0
		   0x01431AE4:  0300001A     BNE $+0x14  // if (!=) goto 0x01431AF8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01431AE8:  0700A0E1     MOV r0, r7
		   0x01431AEC:  0410A0E1     MOV r1, r4
		   0x01431AF0:  24A7ECEB     BL $-0x4d6368
		   0x01431AF4:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01431AF8:  000099E5     LDR r0, [sb]
		   0x01431AFC:  741090E5     LDR r1, [r0, 0x74]
		   0x01431B00:  000051E3     CMPS r0, r1, 0x0
		   0x01431B04:  0100001A     BNE $+0xc  // if (!=) goto 0x01431B10
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01431B08:  E1A5ECEB     BL $-0x4d6874
		   0x01431B0C:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431B10:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431B14:  0610A0E1     MOV r1, r6
		   0x01431B18:  0520A0E1     MOV r2, r5
		   0x01431B1C:  0C0080E2     ADD r0, r0, 0xc
		   0x01431B20:  5492EDEB     BL $-0x49b6a8
		   0x01431B24:  050050E1     CMPS r0, r0, r5
		   0x01431B28:  0050A0E1     MOV r5, r0
		   0x01431B2C:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431B30:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431B34:  B6BCDF02     SBCSEQ fp, pc, 0xb600
		   0x01431B38:  8061C402     SBCEQ r6, r4, 0x20
		   0x01431B3C:  9C94C402     SBCEQ sb, r4, 0x9c000000
		   0x01431B40:  8894C402     SBCEQ sb, r4, 0x88000000
		   0x01431B44:  3861C402     SBCEQ r6, r4, 0xe
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431B48 Offset: 0x1431B48 VA: 0x1431B48
	public static void add_onEnergyEarnedAnalytics(EnergyEarnedAnalyticsDelegate value) {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431B48:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01431B4C:  D4509FE5     LDR r5, [pc, 0xd4]
		   0x01431B50:  0040A0E1     MOV r4, r0
		   0x01431B54:  05508FE0     ADD r5, pc, r5
		   0x01431B58:  0000D5E5     LDRB r0, [r5]
		   0x01431B5C:  000050E3     CMPS r0, r0, 0x0
		   0x01431B60:  0700001A     BNE $+0x24  // if (!=) goto 0x01431B84
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431B64:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01431B68:  00009FE7     LDR r0, [pc, r0]
		   0x01431B6C:  7BA5ECEB     BL $-0x4d6a0c
		   0x01431B70:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01431B74:  00009FE7     LDR r0, [pc, r0]
		   0x01431B78:  78A5ECEB     BL $-0x4d6a18
		   0x01431B7C:  0100A0E3     MOV r0, 0x1
		   0x01431B80:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431B84:  A8709FE5     LDR r7, [pc, 0xa8]
		   0x01431B88:  07709FE7     LDR r7, [pc, r7]
		   0x01431B8C:  000097E5     LDR r0, [r7]
		   0x01431B90:  741090E5     LDR r1, [r0, 0x74]
		   0x01431B94:  000051E3     CMPS r0, r1, 0x0
		   0x01431B98:  0100001A     BNE $+0xc  // if (!=) goto 0x01431BA4
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431B9C:  BCA5ECEB     BL $-0x4d6908
		   0x01431BA0:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431BA4:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431BA8:  105090E5     LDR r5, [r0, 0x10]
		   0x01431BAC:  84809FE5     LDR r8, [pc, 0x84]
		   0x01431BB0:  08809FE7     LDR r8, [pc, r8]
		   0x01431BB4:  0500A0E1     MOV r0, r5
		   0x01431BB8:  0410A0E1     MOV r1, r4
		   0x01431BBC:  0020A0E3     MOV r2, 0x0
		   0x01431BC0:  0060A0E3     MOV r6, 0x0
		   0x01431BC4:  5B9E71EB     BL $+0x1c67974  // CALL → Delegate.Combine
		   0x01431BC8:  000050E3     CMPS r0, r0, 0x0
		   0x01431BCC:  0600000A     BEQ $+0x20  // if (==) goto 0x01431BEC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01431BD0:  001098E5     LDR r1, [r8]
		   0x01431BD4:  002090E5     LDR r2, [r0]
		   0x01431BD8:  010052E1     CMPS r0, r2, r1
		   0x01431BDC:  0100000A     BEQ $+0xc  // if (==) goto 0x01431BE8
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01431BE0:  E8A6ECEB     BL $-0x4d6458
		   0x01431BE4:  000000EA     B $+0x8  // goto 0x01431BEC
		   // ──── Block 7 if (==) ────────────────────
		   0x01431BE8:  0060A0E1     MOV r6, r0
		   // ──── Block 8 if (==) ────────────────────
		   0x01431BEC:  000097E5     LDR r0, [r7]
		   0x01431BF0:  741090E5     LDR r1, [r0, 0x74]
		   0x01431BF4:  000051E3     CMPS r0, r1, 0x0
		   0x01431BF8:  0100001A     BNE $+0xc  // if (!=) goto 0x01431C04
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01431BFC:  A4A5ECEB     BL $-0x4d6968
		   0x01431C00:  000097E5     LDR r0, [r7]
		   // ──── Block 10 if (!=) ────────────────────
		   0x01431C04:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431C08:  0610A0E1     MOV r1, r6
		   0x01431C0C:  0520A0E1     MOV r2, r5
		   0x01431C10:  100080E2     ADD r0, r0, 0x10
		   0x01431C14:  1792EDEB     BL $-0x49b79c
		   0x01431C18:  050050E1     CMPS r0, r0, r5
		   0x01431C1C:  0050A0E1     MOV r5, r0
		   0x01431C20:  E3FFFF1A     BNE $-0x6c
		   // ──── Block 11 else (==) ────────────────────
		   0x01431C24:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01431C28:  B3BBDF02     SBCSEQ fp, pc, 0x2cc00
		   0x01431C2C:  54F1C402     SBCEQ pc, r4, 0x15
		   0x01431C30:  9893C402     SBCEQ sb, r4, 0x60000002
		   0x01431C34:  8493C402     SBCEQ sb, r4, 0x10000002
		   0x01431C38:  0CF1C402     SBCEQ pc, r4, 0x3
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431C3C Offset: 0x1431C3C VA: 0x1431C3C
	public static void remove_onEnergyEarnedAnalytics(EnergyEarnedAnalyticsDelegate value) {
		/* Disassembly (ARM32, 61 instructions, 0xF4 bytes):
		   // CFG: 13 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431C3C:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x01431C40:  D4509FE5     LDR r5, [pc, 0xd4]
		   0x01431C44:  0040A0E1     MOV r4, r0
		   0x01431C48:  05508FE0     ADD r5, pc, r5
		   0x01431C4C:  0000D5E5     LDRB r0, [r5]
		   0x01431C50:  000050E3     CMPS r0, r0, 0x0
		   0x01431C54:  0700001A     BNE $+0x24  // if (!=) goto 0x01431C78
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431C58:  C0009FE5     LDR r0, [pc, 0xc0]
		   0x01431C5C:  00009FE7     LDR r0, [pc, r0]
		   0x01431C60:  3EA5ECEB     BL $-0x4d6b00
		   0x01431C64:  B8009FE5     LDR r0, [pc, 0xb8]
		   0x01431C68:  00009FE7     LDR r0, [pc, r0]
		   0x01431C6C:  3BA5ECEB     BL $-0x4d6b0c
		   0x01431C70:  0100A0E3     MOV r0, 0x1
		   0x01431C74:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431C78:  A8709FE5     LDR r7, [pc, 0xa8]
		   0x01431C7C:  07709FE7     LDR r7, [pc, r7]
		   0x01431C80:  000097E5     LDR r0, [r7]
		   0x01431C84:  741090E5     LDR r1, [r0, 0x74]
		   0x01431C88:  000051E3     CMPS r0, r1, 0x0
		   0x01431C8C:  0100001A     BNE $+0xc  // if (!=) goto 0x01431C98
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431C90:  7FA5ECEB     BL $-0x4d69fc
		   0x01431C94:  000097E5     LDR r0, [r7]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431C98:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431C9C:  105090E5     LDR r5, [r0, 0x10]
		   0x01431CA0:  84809FE5     LDR r8, [pc, 0x84]
		   0x01431CA4:  08809FE7     LDR r8, [pc, r8]
		   0x01431CA8:  0500A0E1     MOV r0, r5
		   0x01431CAC:  0410A0E1     MOV r1, r4
		   0x01431CB0:  0020A0E3     MOV r2, 0x0
		   0x01431CB4:  0060A0E3     MOV r6, 0x0
		   0x01431CB8:  9C9E71EB     BL $+0x1c67a78  // CALL → Delegate.Remove
		   0x01431CBC:  000050E3     CMPS r0, r0, 0x0
		   0x01431CC0:  0600000A     BEQ $+0x20  // if (==) goto 0x01431CE0
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01431CC4:  001098E5     LDR r1, [r8]
		   0x01431CC8:  002090E5     LDR r2, [r0]
		   0x01431CCC:  010052E1     CMPS r0, r2, r1
		   0x01431CD0:  0100000A     BEQ $+0xc  // if (==) goto 0x01431CDC
		   // 
		   // ──── Block 6 else (!=) ────────────────────
		   0x01431CD4:  ABA6ECEB     BL $-0x4d654c
		   0x01431CD8:  000000EA     B $+0x8  // goto 0x01431CE0
		   // ──── Block 7 if (==) ────────────────────
		   0x01431CDC:  0060A0E1     MOV r6, r0
		   // ──── Block 8 if (==) ────────────────────
		   0x01431CE0:  000097E5     LDR r0, [r7]
		   0x01431CE4:  741090E5     LDR r1, [r0, 0x74]
		   0x01431CE8:  000051E3     CMPS r0, r1, 0x0
		   0x01431CEC:  0100001A     BNE $+0xc  // if (!=) goto 0x01431CF8
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x01431CF0:  67A5ECEB     BL $-0x4d6a5c
		   0x01431CF4:  000097E5     LDR r0, [r7]
		   // ──── Block 10 if (!=) ────────────────────
		   0x01431CF8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431CFC:  0610A0E1     MOV r1, r6
		   0x01431D00:  0520A0E1     MOV r2, r5
		   0x01431D04:  100080E2     ADD r0, r0, 0x10
		   0x01431D08:  DA91EDEB     BL $-0x49b890
		   0x01431D0C:  050050E1     CMPS r0, r0, r5
		   0x01431D10:  0050A0E1     MOV r5, r0
		   0x01431D14:  E3FFFF1A     BNE $-0x6c
		   // ──── Block 11 else (==) ────────────────────
		   0x01431D18:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x01431D1C:  C0BADF02     SBCSEQ fp, pc, 0xc0000
		   0x01431D20:  60F0C402     SBCEQ pc, r4, 0x60
		   0x01431D24:  A492C402     SBCEQ sb, r4, 0x4000000a
		   0x01431D28:  9092C402     SBCEQ sb, r4, 0x9
		   0x01431D2C:  18F0C402     SBCEQ pc, r4, 0x18
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431D30 Offset: 0x1431D30 VA: 0x1431D30
	public static void add_getCurrentOpenedActivity(Func<CurrentOpenedActivity> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431D30:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431D34:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431D38:  0080A0E1     MOV r8, r0
		   0x01431D3C:  04408FE0     ADD r4, pc, r4
		   0x01431D40:  0000D4E5     LDRB r0, [r4]
		   0x01431D44:  000050E3     CMPS r0, r0, 0x0
		   0x01431D48:  0700001A     BNE $+0x24  // if (!=) goto 0x01431D6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431D4C:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431D50:  00009FE7     LDR r0, [pc, r0]
		   0x01431D54:  01A5ECEB     BL $-0x4d6bf4
		   0x01431D58:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01431D5C:  00009FE7     LDR r0, [pc, r0]
		   0x01431D60:  FEA4ECEB     BL $-0x4d6c00
		   0x01431D64:  0100A0E3     MOV r0, 0x1
		   0x01431D68:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431D6C:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431D70:  09909FE7     LDR sb, [pc, sb]
		   0x01431D74:  000099E5     LDR r0, [sb]
		   0x01431D78:  741090E5     LDR r1, [r0, 0x74]
		   0x01431D7C:  000051E3     CMPS r0, r1, 0x0
		   0x01431D80:  0100001A     BNE $+0xc  // if (!=) goto 0x01431D8C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431D84:  42A5ECEB     BL $-0x4d6af0
		   0x01431D88:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431D8C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431D90:  145090E5     LDR r5, [r0, 0x14]
		   0x01431D94:  94A09FE5     LDR r10, [pc, 0x94]
		   0x01431D98:  0AA09FE7     LDR r10, [pc, r10]
		   0x01431D9C:  0500A0E1     MOV r0, r5
		   0x01431DA0:  0810A0E1     MOV r1, r8
		   0x01431DA4:  0020A0E3     MOV r2, 0x0
		   0x01431DA8:  0060A0E3     MOV r6, 0x0
		   0x01431DAC:  E19D71EB     BL $+0x1c6778c  // CALL → Delegate.Combine
		   0x01431DB0:  000050E3     CMPS r0, r0, 0x0
		   0x01431DB4:  0A00000A     BEQ $+0x30  // if (==) goto 0x01431DE4
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01431DB8:  00409AE5     LDR r4, [r10]
		   0x01431DBC:  0070A0E1     MOV r7, r0
		   0x01431DC0:  0410A0E1     MOV r1, r4
		   0x01431DC4:  33A5ECEB     BL $-0x4d6b2c
		   0x01431DC8:  0060A0E1     MOV r6, r0
		   0x01431DCC:  000050E3     CMPS r0, r0, 0x0
		   0x01431DD0:  0300001A     BNE $+0x14  // if (!=) goto 0x01431DE4
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01431DD4:  0700A0E1     MOV r0, r7
		   0x01431DD8:  0410A0E1     MOV r1, r4
		   0x01431DDC:  69A6ECEB     BL $-0x4d6654
		   0x01431DE0:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01431DE4:  000099E5     LDR r0, [sb]
		   0x01431DE8:  741090E5     LDR r1, [r0, 0x74]
		   0x01431DEC:  000051E3     CMPS r0, r1, 0x0
		   0x01431DF0:  0100001A     BNE $+0xc  // if (!=) goto 0x01431DFC
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01431DF4:  26A5ECEB     BL $-0x4d6b60
		   0x01431DF8:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431DFC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431E00:  0610A0E1     MOV r1, r6
		   0x01431E04:  0520A0E1     MOV r2, r5
		   0x01431E08:  140080E2     ADD r0, r0, 0x14
		   0x01431E0C:  9991EDEB     BL $-0x49b994
		   0x01431E10:  050050E1     CMPS r0, r0, r5
		   0x01431E14:  0050A0E1     MOV r5, r0
		   0x01431E18:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431E1C:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431E20:  CDB9DF02     SBCSEQ fp, pc, 0x334000
		   0x01431E24:  BC91C402     SBCEQ sb, r4, 0x2f
		   0x01431E28:  A825C502     SBCEQ r2, r5, 0x2a000000
		   0x01431E2C:  9C91C402     SBCEQ sb, r4, 0x27
		   0x01431E30:  6C25C502     SBCEQ r2, r5, 0x1b000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431E34 Offset: 0x1431E34 VA: 0x1431E34
	public static void remove_getCurrentOpenedActivity(Func<CurrentOpenedActivity> value) {
		/* Disassembly (ARM32, 65 instructions, 0x104 bytes):
		   // CFG: 12 blocks, 11 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431E34:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431E38:  E4409FE5     LDR r4, [pc, 0xe4]
		   0x01431E3C:  0080A0E1     MOV r8, r0
		   0x01431E40:  04408FE0     ADD r4, pc, r4
		   0x01431E44:  0000D4E5     LDRB r0, [r4]
		   0x01431E48:  000050E3     CMPS r0, r0, 0x0
		   0x01431E4C:  0700001A     BNE $+0x24  // if (!=) goto 0x01431E70
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431E50:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01431E54:  00009FE7     LDR r0, [pc, r0]
		   0x01431E58:  C0A4ECEB     BL $-0x4d6cf8
		   0x01431E5C:  C8009FE5     LDR r0, [pc, 0xc8]
		   0x01431E60:  00009FE7     LDR r0, [pc, r0]
		   0x01431E64:  BDA4ECEB     BL $-0x4d6d04
		   0x01431E68:  0100A0E3     MOV r0, 0x1
		   0x01431E6C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431E70:  B8909FE5     LDR sb, [pc, 0xb8]
		   0x01431E74:  09909FE7     LDR sb, [pc, sb]
		   0x01431E78:  000099E5     LDR r0, [sb]
		   0x01431E7C:  741090E5     LDR r1, [r0, 0x74]
		   0x01431E80:  000051E3     CMPS r0, r1, 0x0
		   0x01431E84:  0100001A     BNE $+0xc  // if (!=) goto 0x01431E90
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01431E88:  01A5ECEB     BL $-0x4d6bf4
		   0x01431E8C:  000099E5     LDR r0, [sb]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01431E90:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431E94:  145090E5     LDR r5, [r0, 0x14]
		   0x01431E98:  94A09FE5     LDR r10, [pc, 0x94]
		   0x01431E9C:  0AA09FE7     LDR r10, [pc, r10]
		   0x01431EA0:  0500A0E1     MOV r0, r5
		   0x01431EA4:  0810A0E1     MOV r1, r8
		   0x01431EA8:  0020A0E3     MOV r2, 0x0
		   0x01431EAC:  0060A0E3     MOV r6, 0x0
		   0x01431EB0:  1E9E71EB     BL $+0x1c67880  // CALL → Delegate.Remove
		   0x01431EB4:  000050E3     CMPS r0, r0, 0x0
		   0x01431EB8:  0A00000A     BEQ $+0x30  // if (==) goto 0x01431EE8
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01431EBC:  00409AE5     LDR r4, [r10]
		   0x01431EC0:  0070A0E1     MOV r7, r0
		   0x01431EC4:  0410A0E1     MOV r1, r4
		   0x01431EC8:  F2A4ECEB     BL $-0x4d6c30
		   0x01431ECC:  0060A0E1     MOV r6, r0
		   0x01431ED0:  000050E3     CMPS r0, r0, 0x0
		   0x01431ED4:  0300001A     BNE $+0x14  // if (!=) goto 0x01431EE8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01431ED8:  0700A0E1     MOV r0, r7
		   0x01431EDC:  0410A0E1     MOV r1, r4
		   0x01431EE0:  28A6ECEB     BL $-0x4d6758
		   0x01431EE4:  0060A0E3     MOV r6, 0x0
		   // ──── Block 7 (from 2 paths) ──────────────────
		   0x01431EE8:  000099E5     LDR r0, [sb]
		   0x01431EEC:  741090E5     LDR r1, [r0, 0x74]
		   0x01431EF0:  000051E3     CMPS r0, r1, 0x0
		   0x01431EF4:  0100001A     BNE $+0xc  // if (!=) goto 0x01431F00
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01431EF8:  E5A4ECEB     BL $-0x4d6c64
		   0x01431EFC:  000099E5     LDR r0, [sb]
		   // ──── Block 9 if (!=) ────────────────────
		   0x01431F00:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01431F04:  0610A0E1     MOV r1, r6
		   0x01431F08:  0520A0E1     MOV r2, r5
		   0x01431F0C:  140080E2     ADD r0, r0, 0x14
		   0x01431F10:  5891EDEB     BL $-0x49ba98
		   0x01431F14:  050050E1     CMPS r0, r0, r5
		   0x01431F18:  0050A0E1     MOV r5, r0
		   0x01431F1C:  DFFFFF1A     BNE $-0x7c
		   // ──── Block 10 else (==) ────────────────────
		   0x01431F20:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431F24:  CAB8DF02     SBCSEQ fp, pc, 0xca0000
		   0x01431F28:  B890C402     SBCEQ sb, r4, 0xb8
		   0x01431F2C:  A424C502     SBCEQ r2, r5, 0xa4000000
		   0x01431F30:  9890C402     SBCEQ sb, r4, 0x98
		   0x01431F34:  6824C502     SBCEQ r2, r5, 0x68000000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431F38 Offset: 0x1431F38 VA: 0x1431F38
	public void add_onTimerChanged(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431F38:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431F3C:  98409FE5     LDR r4, [pc, 0x98]
		   0x01431F40:  0090A0E1     MOV sb, r0
		   0x01431F44:  0180A0E1     MOV r8, r1
		   0x01431F48:  04408FE0     ADD r4, pc, r4
		   0x01431F4C:  0000D4E5     LDRB r0, [r4]
		   0x01431F50:  000050E3     CMPS r0, r0, 0x0
		   0x01431F54:  0400001A     BNE $+0x18  // if (!=) goto 0x01431F6C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01431F58:  80009FE5     LDR r0, [pc, 0x80]
		   0x01431F5C:  00009FE7     LDR r0, [pc, r0]
		   0x01431F60:  7EA4ECEB     BL $-0x4d6e00
		   0x01431F64:  0100A0E3     MOV r0, 0x1
		   0x01431F68:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01431F6C:  1C00B9E5     LDR r0, [sb, 0x1c]!
		   0x01431F70:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01431F74:  0AA09FE7     LDR r10, [pc, r10]
		   0x01431F78:  0810A0E1     MOV r1, r8
		   0x01431F7C:  0020A0E3     MOV r2, 0x0
		   0x01431F80:  0060A0E1     MOV r6, r0
		   0x01431F84:  0070A0E3     MOV r7, 0x0
		   0x01431F88:  6A9D71EB     BL $+0x1c675b0  // CALL → Delegate.Combine
		   0x01431F8C:  000050E3     CMPS r0, r0, 0x0
		   0x01431F90:  0A00000A     BEQ $+0x30  // if (==) goto 0x01431FC0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01431F94:  00509AE5     LDR r5, [r10]
		   0x01431F98:  0040A0E1     MOV r4, r0
		   0x01431F9C:  0510A0E1     MOV r1, r5
		   0x01431FA0:  BCA4ECEB     BL $-0x4d6d08
		   0x01431FA4:  0070A0E1     MOV r7, r0
		   0x01431FA8:  000050E3     CMPS r0, r0, 0x0
		   0x01431FAC:  0300001A     BNE $+0x14  // if (!=) goto 0x01431FC0
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01431FB0:  0400A0E1     MOV r0, r4
		   0x01431FB4:  0510A0E1     MOV r1, r5
		   0x01431FB8:  F2A5ECEB     BL $-0x4d6830
		   0x01431FBC:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01431FC0:  0900A0E1     MOV r0, sb
		   0x01431FC4:  0710A0E1     MOV r1, r7
		   0x01431FC8:  0620A0E1     MOV r2, r6
		   0x01431FCC:  2991EDEB     BL $-0x49bb54
		   0x01431FD0:  060050E1     CMPS r0, r0, r6
		   0x01431FD4:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01431FD8:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x01431FDC:  C3B7DF02     SBCSEQ fp, pc, 0x30c0000
		   0x01431FE0:  885CC402     SBCEQ r5, r4, 0x8800
		   0x01431FE4:  705CC402     SBCEQ r5, r4, 0x7000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1431FE8 Offset: 0x1431FE8 VA: 0x1431FE8
	public void remove_onTimerChanged(Action<int> value) {
		/* Disassembly (ARM32, 44 instructions, 0xB0 bytes):
		   // CFG: 8 blocks, 7 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01431FE8:  F0472DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, lr}
		   0x01431FEC:  98409FE5     LDR r4, [pc, 0x98]
		   0x01431FF0:  0090A0E1     MOV sb, r0
		   0x01431FF4:  0180A0E1     MOV r8, r1
		   0x01431FF8:  04408FE0     ADD r4, pc, r4
		   0x01431FFC:  0000D4E5     LDRB r0, [r4]
		   0x01432000:  000050E3     CMPS r0, r0, 0x0
		   0x01432004:  0400001A     BNE $+0x18  // if (!=) goto 0x0143201C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01432008:  80009FE5     LDR r0, [pc, 0x80]
		   0x0143200C:  00009FE7     LDR r0, [pc, r0]
		   0x01432010:  52A4ECEB     BL $-0x4d6eb0
		   0x01432014:  0100A0E3     MOV r0, 0x1
		   0x01432018:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143201C:  1C00B9E5     LDR r0, [sb, 0x1c]!
		   0x01432020:  6CA09FE5     LDR r10, [pc, 0x6c]
		   0x01432024:  0AA09FE7     LDR r10, [pc, r10]
		   0x01432028:  0810A0E1     MOV r1, r8
		   0x0143202C:  0020A0E3     MOV r2, 0x0
		   0x01432030:  0060A0E1     MOV r6, r0
		   0x01432034:  0070A0E3     MOV r7, 0x0
		   0x01432038:  BC9D71EB     BL $+0x1c676f8  // CALL → Delegate.Remove
		   0x0143203C:  000050E3     CMPS r0, r0, 0x0
		   0x01432040:  0A00000A     BEQ $+0x30  // if (==) goto 0x01432070
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01432044:  00509AE5     LDR r5, [r10]
		   0x01432048:  0040A0E1     MOV r4, r0
		   0x0143204C:  0510A0E1     MOV r1, r5
		   0x01432050:  90A4ECEB     BL $-0x4d6db8
		   0x01432054:  0070A0E1     MOV r7, r0
		   0x01432058:  000050E3     CMPS r0, r0, 0x0
		   0x0143205C:  0300001A     BNE $+0x14  // if (!=) goto 0x01432070
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01432060:  0400A0E1     MOV r0, r4
		   0x01432064:  0510A0E1     MOV r1, r5
		   0x01432068:  C6A5ECEB     BL $-0x4d68e0
		   0x0143206C:  0070A0E3     MOV r7, 0x0
		   // ──── Block 5 (from 2 paths) ──────────────────
		   0x01432070:  0900A0E1     MOV r0, sb
		   0x01432074:  0710A0E1     MOV r1, r7
		   0x01432078:  0620A0E1     MOV r2, r6
		   0x0143207C:  FD90EDEB     BL $-0x49bc04
		   0x01432080:  060050E1     CMPS r0, r0, r6
		   0x01432084:  E7FFFF1A     BNE $-0x5c
		   // ──── Block 6 else (==) ────────────────────
		   0x01432088:  F087BDE8     POP {r4, r5, r6, r7, r8, sb, r10, pc}
		   0x0143208C:  14B7DF02     SBCSEQ fp, pc, 0x500000
		   0x01432090:  D85BC402     SBCEQ r5, r4, 0x36000
		   0x01432094:  C05BC402     SBCEQ r5, r4, 0x30000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1432098 Offset: 0x1432098 VA: 0x1432098
	public void add_onEnergyRequest(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01432098:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0143209C:  88609FE5     LDR r6, [pc, 0x88]
		   0x014320A0:  0050A0E1     MOV r5, r0
		   0x014320A4:  0140A0E1     MOV r4, r1
		   0x014320A8:  06608FE0     ADD r6, pc, r6
		   0x014320AC:  0000D6E5     LDRB r0, [r6]
		   0x014320B0:  000050E3     CMPS r0, r0, 0x0
		   0x014320B4:  0400001A     BNE $+0x18  // if (!=) goto 0x014320CC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014320B8:  70009FE5     LDR r0, [pc, 0x70]
		   0x014320BC:  00009FE7     LDR r0, [pc, r0]
		   0x014320C0:  26A4ECEB     BL $-0x4d6f60
		   0x014320C4:  0100A0E3     MOV r0, 0x1
		   0x014320C8:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014320CC:  4800B5E5     LDR r0, [r5, 0x48]!
		   0x014320D0:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x014320D4:  08809FE7     LDR r8, [pc, r8]
		   0x014320D8:  0410A0E1     MOV r1, r4
		   0x014320DC:  0020A0E3     MOV r2, 0x0
		   0x014320E0:  0060A0E1     MOV r6, r0
		   0x014320E4:  0070A0E3     MOV r7, 0x0
		   0x014320E8:  129D71EB     BL $+0x1c67450  // CALL → Delegate.Combine
		   0x014320EC:  000050E3     CMPS r0, r0, 0x0
		   0x014320F0:  0600000A     BEQ $+0x20  // if (==) goto 0x01432110
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014320F4:  001098E5     LDR r1, [r8]
		   0x014320F8:  002090E5     LDR r2, [r0]
		   0x014320FC:  010052E1     CMPS r0, r2, r1
		   0x01432100:  0100000A     BEQ $+0xc  // if (==) goto 0x0143210C
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x01432104:  9FA5ECEB     BL $-0x4d697c
		   0x01432108:  000000EA     B $+0x8  // goto 0x01432110
		   // ──── Block 5 if (==) ────────────────────
		   0x0143210C:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x01432110:  0500A0E1     MOV r0, r5
		   0x01432114:  0710A0E1     MOV r1, r7
		   0x01432118:  0620A0E1     MOV r2, r6
		   0x0143211C:  D590EDEB     BL $-0x49bca4
		   0x01432120:  060050E1     CMPS r0, r0, r6
		   0x01432124:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x01432128:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x0143212C:  65B6DF02     SBCSEQ fp, pc, 0x6500000
		   0x01432130:  0848C402     SBCEQ r4, r4, 0x80000
		   0x01432134:  F047C402     SBCEQ r4, r4, 0x3c00000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1432138 Offset: 0x1432138 VA: 0x1432138
	public void remove_onEnergyRequest(Action value) {
		/* Disassembly (ARM32, 40 instructions, 0xA0 bytes):
		   // CFG: 9 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01432138:  F0412DE9     PUSH {r4, r5, r6, r7, r8, lr}
		   0x0143213C:  88609FE5     LDR r6, [pc, 0x88]
		   0x01432140:  0050A0E1     MOV r5, r0
		   0x01432144:  0140A0E1     MOV r4, r1
		   0x01432148:  06608FE0     ADD r6, pc, r6
		   0x0143214C:  0000D6E5     LDRB r0, [r6]
		   0x01432150:  000050E3     CMPS r0, r0, 0x0
		   0x01432154:  0400001A     BNE $+0x18  // if (!=) goto 0x0143216C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01432158:  70009FE5     LDR r0, [pc, 0x70]
		   0x0143215C:  00009FE7     LDR r0, [pc, r0]
		   0x01432160:  FEA3ECEB     BL $-0x4d7000
		   0x01432164:  0100A0E3     MOV r0, 0x1
		   0x01432168:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143216C:  4800B5E5     LDR r0, [r5, 0x48]!
		   0x01432170:  5C809FE5     LDR r8, [pc, 0x5c]
		   0x01432174:  08809FE7     LDR r8, [pc, r8]
		   0x01432178:  0410A0E1     MOV r1, r4
		   0x0143217C:  0020A0E3     MOV r2, 0x0
		   0x01432180:  0060A0E1     MOV r6, r0
		   0x01432184:  0070A0E3     MOV r7, 0x0
		   0x01432188:  689D71EB     BL $+0x1c675a8  // CALL → Delegate.Remove
		   0x0143218C:  000050E3     CMPS r0, r0, 0x0
		   0x01432190:  0600000A     BEQ $+0x20  // if (==) goto 0x014321B0
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01432194:  001098E5     LDR r1, [r8]
		   0x01432198:  002090E5     LDR r2, [r0]
		   0x0143219C:  010052E1     CMPS r0, r2, r1
		   0x014321A0:  0100000A     BEQ $+0xc  // if (==) goto 0x014321AC
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x014321A4:  77A5ECEB     BL $-0x4d6a1c
		   0x014321A8:  000000EA     B $+0x8  // goto 0x014321B0
		   // ──── Block 5 if (==) ────────────────────
		   0x014321AC:  0070A0E1     MOV r7, r0
		   // ──── Block 6 if (==) ────────────────────
		   0x014321B0:  0500A0E1     MOV r0, r5
		   0x014321B4:  0710A0E1     MOV r1, r7
		   0x014321B8:  0620A0E1     MOV r2, r6
		   0x014321BC:  AD90EDEB     BL $-0x49bd44
		   0x014321C0:  060050E1     CMPS r0, r0, r6
		   0x014321C4:  EBFFFF1A     BNE $-0x4c
		   // ──── Block 7 else (==) ────────────────────
		   0x014321C8:  F081BDE8     POP {r4, r5, r6, r7, r8, pc}
		   0x014321CC:  C6B5DF02     SBCSEQ fp, pc, 0x31800000
		   0x014321D0:  6847C402     SBCEQ r4, r4, 0x1a00000
		   0x014321D4:  5047C402     SBCEQ r4, r4, 0x1400000
		*/
	}

	// RVA: 0x14321D8 Offset: 0x14321D8 VA: 0x14321D8
	public static void UnsubscribeAll() {
		/* Disassembly (ARM32, 67 instructions, 0x10C bytes):
		   // CFG: 12 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014321D8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014321DC:  C4419FE5     LDR r4, [pc, 0x1c4]
		   0x014321E0:  04408FE0     ADD r4, pc, r4
		   0x014321E4:  0000D4E5     LDRB r0, [r4]
		   0x014321E8:  000050E3     CMPS r0, r0, 0x0
		   0x014321EC:  1300001A     BNE $+0x54  // if (!=) goto 0x01432240
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014321F0:  B4019FE5     LDR r0, [pc, 0x1b4]
		   0x014321F4:  00009FE7     LDR r0, [pc, r0]
		   0x014321F8:  D8A3ECEB     BL $-0x4d7098
		   0x014321FC:  AC019FE5     LDR r0, [pc, 0x1ac]
		   0x01432200:  00009FE7     LDR r0, [pc, r0]
		   0x01432204:  D5A3ECEB     BL $-0x4d70a4
		   0x01432208:  A4019FE5     LDR r0, [pc, 0x1a4]
		   0x0143220C:  00009FE7     LDR r0, [pc, r0]
		   0x01432210:  D2A3ECEB     BL $-0x4d70b0
		   0x01432214:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x01432218:  00009FE7     LDR r0, [pc, r0]
		   0x0143221C:  CFA3ECEB     BL $-0x4d70bc
		   0x01432220:  94019FE5     LDR r0, [pc, 0x194]
		   0x01432224:  00009FE7     LDR r0, [pc, r0]
		   0x01432228:  CCA3ECEB     BL $-0x4d70c8
		   0x0143222C:  8C019FE5     LDR r0, [pc, 0x18c]
		   0x01432230:  00009FE7     LDR r0, [pc, r0]
		   0x01432234:  C9A3ECEB     BL $-0x4d70d4
		   0x01432238:  0100A0E3     MOV r0, 0x1
		   0x0143223C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01432240:  7C519FE5     LDR r5, [pc, 0x17c]
		   0x01432244:  05509FE7     LDR r5, [pc, r5]
		   0x01432248:  001095E5     LDR r1, [r5]
		   0x0143224C:  74019FE5     LDR r0, [pc, 0x174]
		   0x01432250:  00009FE7     LDR r0, [pc, r0]
		   0x01432254:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x01432258:  000090E5     LDR r0, [r0]
		   0x0143225C:  004091E5     LDR r4, [r1]
		   0x01432260:  742090E5     LDR r2, [r0, 0x74]
		   0x01432264:  000052E3     CMPS r0, r2, 0x0
		   0x01432268:  0000001A     BNE $+0x8  // if (!=) goto 0x01432270
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x0143226C:  08A4ECEB     BL $-0x4d6fd8
		   // ──── Block 4 if (!=) ────────────────────
		   0x01432270:  0400A0E1     MOV r0, r4
		   0x01432274:  0010A0E3     MOV r1, 0x0
		   0x01432278:  0020A0E3     MOV r2, 0x0
		   0x0143227C:  3CCAEFEB     BL $-0x40d708
		   0x01432280:  000050E3     CMPS r0, r0, 0x0
		   0x01432284:  0C00000A     BEQ $+0x38  // if (==) goto 0x014322BC
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x01432288:  000095E5     LDR r0, [r5]
		   0x0143228C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01432290:  004090E5     LDR r4, [r0]
		   0x01432294:  000054E3     CMPS r0, r4, 0x0
		   0x01432298:  0000001A     BNE $+0x8  // if (!=) goto 0x014322A0
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x0143229C:  4BA4ECEB     BL $-0x4d6ecc
		   // ──── Block 7 if (!=) ────────────────────
		   0x014322A0:  1C0094E5     LDR r0, [r4, 0x1c]
		   0x014322A4:  000050E3     CMPS r0, r0, 0x0
		   0x014322A8:  44009015     LDRNE r0, [r0, 0x44]
		   0x014322AC:  00005013     CMPSNE r0, r0, 0x0
		   0x014322B0:  0100000A     BEQ $+0xc  // if (==) goto 0x014322BC
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x014322B4:  0010A0E3     MOV r1, 0x0
		   0x014322B8:  CD9801EB     BL $+0x6633c  // CALL → EnergySpendBatchReporter.Flush
		   // ──── Block 9 (from 2 paths) ──────────────────
		   0x014322BC:  08619FE5     LDR r6, [pc, 0x108]
		   0x014322C0:  06609FE7     LDR r6, [pc, r6]
		   0x014322C4:  000096E5     LDR r0, [r6]
		   0x014322C8:  741090E5     LDR r1, [r0, 0x74]
		   0x014322CC:  000051E3     CMPS r0, r1, 0x0
		   0x014322D0:  0100001A     BNE $+0xc  // if (!=) goto 0x014322DC
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x014322D4:  EEA3ECEB     BL $-0x4d7040
		   0x014322D8:  000096E5     LDR r0, [r6]
		   // ──── Block 11 if (!=) ────────────────────
		   0x014322DC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014322E0:  0010A0E3     MOV r1, 0x0
		*/
	}

	// RVA: 0x14323F0 Offset: 0x14323F0 VA: 0x14323F0
	public void Init() {
		/* Disassembly (ARM32, 256 instructions, 0x400 bytes):
		   // CFG: 16 blocks, 14 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014323F0:  F04B2DE9     PUSH {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x014323F4:  68539FE5     LDR r5, [pc, 0x368]
		   0x014323F8:  0040A0E1     MOV r4, r0
		   0x014323FC:  05508FE0     ADD r5, pc, r5
		   0x01432400:  0000D5E5     LDRB r0, [r5]
		   0x01432404:  000050E3     CMPS r0, r0, 0x0
		   0x01432408:  3400001A     BNE $+0xd8  // if (!=) goto 0x014324E0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143240C:  54039FE5     LDR r0, [pc, 0x354]
		   0x01432410:  00009FE7     LDR r0, [pc, r0]
		   0x01432414:  51A3ECEB     BL $-0x4d72b4
		   0x01432418:  4C039FE5     LDR r0, [pc, 0x34c]
		   0x0143241C:  00009FE7     LDR r0, [pc, r0]
		   0x01432420:  4EA3ECEB     BL $-0x4d72c0
		   0x01432424:  44039FE5     LDR r0, [pc, 0x344]
		   0x01432428:  00009FE7     LDR r0, [pc, r0]
		   0x0143242C:  4BA3ECEB     BL $-0x4d72cc
		   0x01432430:  3C039FE5     LDR r0, [pc, 0x33c]
		   0x01432434:  00009FE7     LDR r0, [pc, r0]
		   0x01432438:  48A3ECEB     BL $-0x4d72d8
		   0x0143243C:  34039FE5     LDR r0, [pc, 0x334]
		   0x01432440:  00009FE7     LDR r0, [pc, r0]
		   0x01432444:  45A3ECEB     BL $-0x4d72e4
		   0x01432448:  2C039FE5     LDR r0, [pc, 0x32c]
		   0x0143244C:  00009FE7     LDR r0, [pc, r0]
		   0x01432450:  42A3ECEB     BL $-0x4d72f0
		   0x01432454:  24039FE5     LDR r0, [pc, 0x324]
		   0x01432458:  00009FE7     LDR r0, [pc, r0]
		   0x0143245C:  3FA3ECEB     BL $-0x4d72fc
		   0x01432460:  1C039FE5     LDR r0, [pc, 0x31c]
		   0x01432464:  00009FE7     LDR r0, [pc, r0]
		   0x01432468:  3CA3ECEB     BL $-0x4d7308
		   0x0143246C:  14039FE5     LDR r0, [pc, 0x314]
		   0x01432470:  00009FE7     LDR r0, [pc, r0]
		   0x01432474:  39A3ECEB     BL $-0x4d7314
		   0x01432478:  0C039FE5     LDR r0, [pc, 0x30c]
		   0x0143247C:  00009FE7     LDR r0, [pc, r0]
		   0x01432480:  36A3ECEB     BL $-0x4d7320
		   0x01432484:  04039FE5     LDR r0, [pc, 0x304]
		   0x01432488:  00009FE7     LDR r0, [pc, r0]
		   0x0143248C:  33A3ECEB     BL $-0x4d732c
		   0x01432490:  FC029FE5     LDR r0, [pc, 0x2fc]
		   0x01432494:  00009FE7     LDR r0, [pc, r0]
		   0x01432498:  30A3ECEB     BL $-0x4d7338
		   0x0143249C:  F4029FE5     LDR r0, [pc, 0x2f4]
		   0x014324A0:  00009FE7     LDR r0, [pc, r0]
		   0x014324A4:  2DA3ECEB     BL $-0x4d7344
		   0x014324A8:  EC029FE5     LDR r0, [pc, 0x2ec]
		   0x014324AC:  00009FE7     LDR r0, [pc, r0]
		   0x014324B0:  2AA3ECEB     BL $-0x4d7350
		   0x014324B4:  E4029FE5     LDR r0, [pc, 0x2e4]
		   0x014324B8:  00009FE7     LDR r0, [pc, r0]
		   0x014324BC:  27A3ECEB     BL $-0x4d735c
		   0x014324C0:  DC029FE5     LDR r0, [pc, 0x2dc]
		   0x014324C4:  00009FE7     LDR r0, [pc, r0]
		   0x014324C8:  24A3ECEB     BL $-0x4d7368
		   0x014324CC:  D4029FE5     LDR r0, [pc, 0x2d4]
		   0x014324D0:  00009FE7     LDR r0, [pc, r0]
		   0x014324D4:  21A3ECEB     BL $-0x4d7374
		   0x014324D8:  0100A0E3     MOV r0, 0x1
		   0x014324DC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014324E0:  C4729FE5     LDR r7, [pc, 0x2c4]
		   0x014324E4:  07709FE7     LDR r7, [pc, r7]
		   0x014324E8:  000097E5     LDR r0, [r7]
		   0x014324EC:  B4A3ECEB     BL $-0x4d7128
		   0x014324F0:  0050A0E1     MOV r5, r0
		   0x014324F4:  B4029FE5     LDR r0, [pc, 0x2b4]
		   0x014324F8:  0410A0E1     MOV r1, r4
		   0x014324FC:  0030A0E3     MOV r3, 0x0
		   0x01432500:  00009FE7     LDR r0, [pc, r0]
		   0x01432504:  002090E5     LDR r2, [r0]
		   0x01432508:  0500A0E1     MOV r0, r5
		   0x0143250C:  9EDD53EB     BL $+0x14f7680  // CALL → Func<int>..ctor
		   0x01432510:  9C029FE5     LDR r0, [pc, 0x29c]
		   0x01432514:  00009FE7     LDR r0, [pc, r0]
		   0x01432518:  000090E5     LDR r0, [r0]
		   0x0143251C:  A8A3ECEB     BL $-0x4d7158
		   0x01432520:  7810A0E3     MOV r1, 0x78
		   0x01432524:  0520A0E1     MOV r2, r5
		   0x01432528:  0030A0E3     MOV r3, 0x0
		   0x0143252C:  0060A0E1     MOV r6, r0
		   0x01432530:  D5D2F4EB     BL $-0x2cb4a4
		   0x01432534:  0400A0E1     MOV r0, r4
		   0x01432538:  406084E5     STR r6, [r4, 0x40]
		   0x0143253C:  AB0000EB     BL $+0x2b4  // CALL → EnergySystem.RestoreTimerAndEnergy
		   0x01432540:  70029FE5     LDR r0, [pc, 0x270]
		   0x01432544:  00009FE7     LDR r0, [pc, r0]
		   0x01432548:  000090E5     LDR r0, [r0]
		   0x0143254C:  741090E5     LDR r1, [r0, 0x74]
		   0x01432550:  000051E3     CMPS r0, r1, 0x0
		   0x01432554:  0000001A     BNE $+0x8  // if (!=) goto 0x0143255C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01432558:  4DA3ECEB     BL $-0x4d72c4
		   // ──── Block 4 if (!=) ────────────────────
		   0x0143255C:  58029FE5     LDR r0, [pc, 0x258]
		   0x01432560:  0010A0E3     MOV r1, 0x0
		   0x01432564:  0020A0E3     MOV r2, 0x0
		   0x01432568:  0030A0E3     MOV r3, 0x0
		   0x0143256C:  00009FE7     LDR r0, [pc, r0]
		   0x01432570:  000090E5     LDR r0, [r0]
		   0x01432574:  7E48F1EB     BL $-0x3ade00
		   0x01432578:  40129FE5     LDR r1, [pc, 0x240]
		   0x0143257C:  0020A0E3     MOV r2, 0x0
		   0x01432580:  0030A0E3     MOV r3, 0x0
		   0x01432584:  01109FE7     LDR r1, [pc, r1]
		   0x01432588:  300084E5     STR r0, [r4, 0x30]
		   0x0143258C:  001091E5     LDR r1, [r1]
		   0x01432590:  0100A0E1     MOV r0, r1
		   0x01432594:  0010A0E3     MOV r1, 0x0
		   0x01432598:  7548F1EB     BL $-0x3ade24
		   0x0143259C:  20129FE5     LDR r1, [pc, 0x220]
		   0x014325A0:  0020A0E3     MOV r2, 0x0
		   0x014325A4:  0030A0E3     MOV r3, 0x0
		   0x014325A8:  01109FE7     LDR r1, [pc, r1]
		   0x014325AC:  340084E5     STR r0, [r4, 0x34]
		   0x014325B0:  001091E5     LDR r1, [r1]
		   0x014325B4:  0100A0E1     MOV r0, r1
		   0x014325B8:  0010A0E3     MOV r1, 0x0
		   0x014325BC:  6C48F1EB     BL $-0x3ade48
		   0x014325C0:  00129FE5     LDR r1, [pc, 0x200]
		   0x014325C4:  0020A0E3     MOV r2, 0x0
		   0x014325C8:  0030A0E3     MOV r3, 0x0
		   0x014325CC:  01109FE7     LDR r1, [pc, r1]
		   0x014325D0:  380084E5     STR r0, [r4, 0x38]
		   0x014325D4:  001091E5     LDR r1, [r1]
		   0x014325D8:  0100A0E1     MOV r0, r1
		   0x014325DC:  0010A0E3     MOV r1, 0x0
		   0x014325E0:  6348F1EB     BL $-0x3ade6c
		   0x014325E4:  0010A0E1     MOV r1, r0
		   0x014325E8:  440094E5     LDR r0, [r4, 0x44]
		   0x014325EC:  3C1084E5     STR r1, [r4, 0x3c]
		   0x014325F0:  000050E3     CMPS r0, r0, 0x0
		   0x014325F4:  0100000A     BEQ $+0xc  // if (==) goto 0x01432600
		   // 
		   // ──── Block 5 else (!=) ────────────────────
		   0x014325F8:  0010A0E3     MOV r1, 0x0
		   0x014325FC:  809701EB     BL $+0x65e08  // CALL → EnergySpendBatchReporter.Stop
		   // ──── Block 6 if (==) ────────────────────
		   0x01432600:  000097E5     LDR r0, [r7]
		   0x01432604:  6EA3ECEB     BL $-0x4d7240
		   0x01432608:  0050A0E1     MOV r5, r0
		   0x0143260C:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x01432610:  0410A0E1     MOV r1, r4
		   0x01432614:  0030A0E3     MOV r3, 0x0
		   0x01432618:  00009FE7     LDR r0, [pc, r0]
		   0x0143261C:  002090E5     LDR r2, [r0]
		   0x01432620:  0500A0E1     MOV r0, r5
		   0x01432624:  58DD53EB     BL $+0x14f7568  // CALL → Func<int>..ctor
		   0x01432628:  A0019FE5     LDR r0, [pc, 0x1a0]
		   0x0143262C:  00009FE7     LDR r0, [pc, r0]
		   0x01432630:  000090E5     LDR r0, [r0]
		   0x01432634:  62A3ECEB     BL $-0x4d7270
		   0x01432638:  0070A0E1     MOV r7, r0
		   0x0143263C:  90019FE5     LDR r0, [pc, 0x190]
		   0x01432640:  0410A0E1     MOV r1, r4
		   0x01432644:  0030A0E3     MOV r3, 0x0
		   0x01432648:  00009FE7     LDR r0, [pc, r0]
		   0x0143264C:  002090E5     LDR r2, [r0]
		   0x01432650:  0700A0E1     MOV r0, r7
		   0x01432654:  DCDE53EB     BL $+0x14f7b78  // CALL → Func<object>..ctor
		   0x01432658:  78019FE5     LDR r0, [pc, 0x178]
		   0x0143265C:  00009FE7     LDR r0, [pc, r0]
		   0x01432660:  000090E5     LDR r0, [r0]
		   0x01432664:  56A3ECEB     BL $-0x4d72a0
		   0x01432668:  0510A0E1     MOV r1, r5
		   0x0143266C:  0720A0E1     MOV r2, r7
		   0x01432670:  0030A0E3     MOV r3, 0x0
		   0x01432674:  0060A0E1     MOV r6, r0
		   0x01432678:  CA9601EB     BL $+0x65b30  // CALL → EnergySpendBatchReporter..ctor
		   0x0143267C:  000056E3     CMPS r0, r6, 0x0
		   0x01432680:  446084E5     STR r6, [r4, 0x44]
		   0x01432684:  0000001A     BNE $+0x8  // if (!=) goto 0x0143268C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01432688:  50A3ECEB     BL $-0x4d72b8
		   // ──── Block 8 if (!=) ────────────────────
		   0x0143268C:  0600A0E1     MOV r0, r6
		   0x01432690:  0010A0E3     MOV r1, 0x0
		   0x01432694:  E09601EB     BL $+0x65b88  // CALL → EnergySpendBatchReporter.Start
		   0x01432698:  3C819FE5     LDR r8, [pc, 0x13c]
		   0x0143269C:  08809FE7     LDR r8, [pc, r8]
		   0x014326A0:  000098E5     LDR r0, [r8]
		   0x014326A4:  741090E5     LDR r1, [r0, 0x74]
		   0x014326A8:  000051E3     CMPS r0, r1, 0x0
		   0x014326AC:  0100001A     BNE $+0xc  // if (!=) goto 0x014326B8
		   // 
		   // ──── Block 9 else (==) ────────────────────
		   0x014326B0:  F7A2ECEB     BL $-0x4d741c
		   0x014326B4:  000098E5     LDR r0, [r8]
		   // ──── Block 10 if (!=) ────────────────────
		   0x014326B8:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x014326BC:  1C919FE5     LDR sb, [pc, 0x11c]
		   0x014326C0:  09909FE7     LDR sb, [pc, sb]
		   0x014326C4:  105091E5     LDR r5, [r1, 0x10]
		   0x014326C8:  000099E5     LDR r0, [sb]
		   0x014326CC:  3CA3ECEB     BL $-0x4d7308
		   0x014326D0:  0C719FE5     LDR r7, [pc, 0x10c]
		   0x014326D4:  0410A0E1     MOV r1, r4
		   0x014326D8:  0030A0E3     MOV r3, 0x0
		   0x014326DC:  0060A0E1     MOV r6, r0
		   0x014326E0:  07709FE7     LDR r7, [pc, r7]
		   0x014326E4:  002097E5     LDR r2, [r7]
		   0x014326E8:  15EB6DEB     BL $+0x1b7ac5c  // CALL → Action..ctor
		   0x014326EC:  000055E3     CMPS r0, r5, 0x0
		   0x014326F0:  0000001A     BNE $+0x8  // if (!=) goto 0x014326F8
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x014326F4:  35A3ECEB     BL $-0x4d7324
		   // ──── Block 12 if (!=) ────────────────────
		   0x014326F8:  E8009FE5     LDR r0, [pc, 0xe8]
		   0x014326FC:  0610A0E1     MOV r1, r6
		   0x01432700:  00009FE7     LDR r0, [pc, r0]
		   0x01432704:  002090E5     LDR r2, [r0]
		   0x01432708:  0500A0E1     MOV r0, r5
		   0x0143270C:  14B952EB     BL $+0x14ae458  // CALL → UnityEventsHelper.EventList<object>.Remove
		   0x01432710:  000098E5     LDR r0, [r8]
		   0x01432714:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01432718:  000099E5     LDR r0, [sb]
		   0x0143271C:  105091E5     LDR r5, [r1, 0x10]
		   0x01432720:  27A3ECEB     BL $-0x4d735c
		   0x01432724:  002097E5     LDR r2, [r7]
		   0x01432728:  0410A0E1     MOV r1, r4
		   0x0143272C:  0030A0E3     MOV r3, 0x0
		   0x01432730:  0060A0E1     MOV r6, r0
		   0x01432734:  02EB6DEB     BL $+0x1b7ac10  // CALL → Action..ctor
		   0x01432738:  000055E3     CMPS r0, r5, 0x0
		   0x0143273C:  0000001A     BNE $+0x8  // if (!=) goto 0x01432744
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01432740:  22A3ECEB     BL $-0x4d7370
		   // ──── Block 14 if (!=) ────────────────────
		   0x01432744:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x01432748:  0610A0E1     MOV r1, r6
		   0x0143274C:  0020A0E3     MOV r2, 0x0
		   0x01432750:  00009FE7     LDR r0, [pc, r0]
		   0x01432754:  003090E5     LDR r3, [r0]
		   0x01432758:  0500A0E1     MOV r0, r5
		   0x0143275C:  F04BBDE8     POP {r4, r5, r6, r7, r8, sb, fp, lr}
		   0x01432760:  B7B852EA     B $+0x14ae2e4  // TAIL CALL → UnityEventsHelper.EventList<object>.Add
		   0x01432764:  14B3DF02     SBCSEQ fp, pc, 0x50000000
		   0x01432768:  B444C402     SBCEQ r4, r4, 0xb4000000
		   0x0143276C:  4423C502     SBCEQ r2, r5, 0x10000001
		   0x01432770:  1052C402     SBCEQ r5, r4, 0x1
		   0x01432774:  3023C502     SBCEQ r2, r5, 0xc0000000
		   0x01432778:  2823C502     SBCEQ r2, r5, 0xa0000000
		   0x0143277C:  2023C502     SBCEQ r2, r5, 0x80000000
		   0x01432780:  1823C502     SBCEQ r2, r5, 0x60000000
		   0x01432784:  1023C502     SBCEQ r2, r5, 0x40000000
		   0x01432788:  7055C402     SBCEQ r5, r4, 0x1c000000
		   0x0143278C:  EC69C402     SBCEQ r6, r4, 0x3b0000
		   0x01432790:  A056C402     SBCEQ r5, r4, 0xa000000
		   0x01432794:  586FC402     SBCEQ r6, r4, 0x160
		   0x01432798:  9051C402     SBCEQ r5, r4, 0x24
		   0x0143279C:  84E8C402     SBCEQ lr, r4, 0x840000
		   0x014327A0:  C022C502     SBCEQ r2, r5, 0xc
		   0x014327A4:  B822C502     SBCEQ r2, r5, 0x8000000b
		   0x014327A8:  54E9C402     SBCEQ lr, r4, 0x150000
		   0x014327AC:  086FC402     SBCEQ r6, r4, 0x20
		   0x014327B0:  7022C502     SBCEQ r2, r5, 0x7
		   0x014327B4:  4C22C502     SBCEQ r2, r5, 0xc0000004
		   0x014327B8:  F450C402     SBCEQ r5, r4, 0xf4
		   0x014327BC:  B8E8C402     SBCEQ lr, r4, 0xb80000
		   0x014327C0:  F821C502     SBCEQ r2, r5, 0x3e
		   0x014327C4:  88E7C402     SBCEQ lr, r4, 0x2200000
		   0x014327C8:  AC21C502     SBCEQ r2, r5, 0x2b
		   0x014327CC:  5C21C502     SBCEQ r2, r5, 0x17
		   0x014327D0:  FC54C402     SBCEQ r5, r4, 0xfc000000
		   0x014327D4:  2021C502     SBCEQ r2, r5, 0x8
		   0x014327D8:  0821C502     SBCEQ r2, r5, 0x2
		   0x014327DC:  944FC402     SBCEQ r4, r4, 0x250
		   0x014327E0:  0442C402     SBCEQ r4, r4, 0x40000000
		   0x014327E4:  8C20C502     SBCEQ r2, r5, 0x8c
		   0x014327E8:  6867C402     SBCEQ r6, r4, 0x1a00000
		   0x014327EC:  9052C402     SBCEQ r5, r4, 0x9
		*/
	}

	// RVA: 0x14323DC Offset: 0x14323DC VA: 0x14323DC
	public void FlushEnergySpendBatch() {
		/* Disassembly (ARM32, 5 instructions, 0x14 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014323DC:  440090E5     LDR r0, [r0, 0x44]
		   0x014323E0:  000050E3     CMPS r0, r0, 0x0
		   0x014323E4:  1EFF2F01     BXEQ lr
		   0x014323E8:  0010A0E3     MOV r1, 0x0
		   0x014323EC:  809801EA     B $+0x66208  // TAIL CALL → EnergySpendBatchReporter.Flush
		*/
	}

	// RVA: 0x1432C18 Offset: 0x1432C18 VA: 0x1432C18
	public void EnergyRequest() {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01432C18:  480090E5     LDR r0, [r0, 0x48]
		   0x01432C1C:  000050E3     CMPS r0, r0, 0x0
		   0x01432C20:  1EFF2F01     BXEQ lr
		   0x01432C24:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01432C28:  141090E5     LDR r1, [r0, 0x14]
		   0x01432C2C:  200090E5     LDR r0, [r0, 0x20]
		   0x01432C30:  12FF2FE1     BX r2
		*/
	}

	// RVA: 0x1432C34 Offset: 0x1432C34 VA: 0x1432C34
	public void UpdateAfterSilentAddition() {
		/* Disassembly (ARM32, 12 instructions, 0x30 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01432C34:  10402DE9     PUSH {r4, lr}
		   0x01432C38:  104090E5     LDR r4, [r0, 0x10]
		   0x01432C3C:  000054E3     CMPS r0, r4, 0x0
		   0x01432C40:  1080BD08     POPEQ {r4, pc}
		   0x01432C44:  0000A0E3     MOV r0, 0x0
		   0x01432C48:  A41CF5EB     BL $-0x2b8d68
		   0x01432C4C:  0010A0E1     MOV r1, r0
		   0x01432C50:  0C3094E5     LDR r3, [r4, 0xc]
		   0x01432C54:  142094E5     LDR r2, [r4, 0x14]
		   0x01432C58:  200094E5     LDR r0, [r4, 0x20]
		   0x01432C5C:  1040BDE8     POP {r4, lr}
		   0x01432C60:  13FF2FE1     BX r3
		*/
	}

	// RVA: 0x1432C64 Offset: 0x1432C64 VA: 0x1432C64 Slot: 4
	public void SendUpdateEvent(int value) {
		/* Disassembly (ARM32, 52 instructions, 0xD0 bytes):
		   // CFG: 10 blocks, 8 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01432C64:  70402DE9     PUSH {r4, r5, r6, lr}
		   0x01432C68:  B0609FE5     LDR r6, [pc, 0xb0]
		   0x01432C6C:  0050A0E1     MOV r5, r0
		   0x01432C70:  0140A0E1     MOV r4, r1
		   0x01432C74:  06608FE0     ADD r6, pc, r6
		   0x01432C78:  0000D6E5     LDRB r0, [r6]
		   0x01432C7C:  000050E3     CMPS r0, r0, 0x0
		   0x01432C80:  0700001A     BNE $+0x24  // if (!=) goto 0x01432CA4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01432C84:  98009FE5     LDR r0, [pc, 0x98]
		   0x01432C88:  00009FE7     LDR r0, [pc, r0]
		   0x01432C8C:  33A1ECEB     BL $-0x4d7b2c
		   0x01432C90:  90009FE5     LDR r0, [pc, 0x90]
		   0x01432C94:  00009FE7     LDR r0, [pc, r0]
		   0x01432C98:  30A1ECEB     BL $-0x4d7b38
		   0x01432C9C:  0100A0E3     MOV r0, 0x1
		   0x01432CA0:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01432CA4:  100095E5     LDR r0, [r5, 0x10]
		   0x01432CA8:  000050E3     CMPS r0, r0, 0x0
		   0x01432CAC:  0400000A     BEQ $+0x18  // if (==) goto 0x01432CC4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01432CB0:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01432CB4:  0410A0E1     MOV r1, r4
		   0x01432CB8:  142090E5     LDR r2, [r0, 0x14]
		   0x01432CBC:  200090E5     LDR r0, [r0, 0x20]
		   0x01432CC0:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 4 if (==) ────────────────────
		   0x01432CC4:  60409FE5     LDR r4, [pc, 0x60]
		   0x01432CC8:  04409FE7     LDR r4, [pc, r4]
		   0x01432CCC:  000094E5     LDR r0, [r4]
		   0x01432CD0:  741090E5     LDR r1, [r0, 0x74]
		   0x01432CD4:  000051E3     CMPS r0, r1, 0x0
		   0x01432CD8:  0100001A     BNE $+0xc  // if (!=) goto 0x01432CE4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01432CDC:  6CA1ECEB     BL $-0x4d7a48
		   0x01432CE0:  000094E5     LDR r0, [r4]
		   // ──── Block 6 if (!=) ────────────────────
		   0x01432CE4:  44109FE5     LDR r1, [pc, 0x44]
		   0x01432CE8:  01109FE7     LDR r1, [pc, r1]
		   0x01432CEC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01432CF0:  001091E5     LDR r1, [r1]
		   0x01432CF4:  704090E5     LDR r4, [r0, 0x70]
		   0x01432CF8:  742091E5     LDR r2, [r1, 0x74]
		   0x01432CFC:  000052E3     CMPS r0, r2, 0x0
		   0x01432D00:  0100001A     BNE $+0xc  // if (!=) goto 0x01432D0C
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01432D04:  0100A0E1     MOV r0, r1
		   0x01432D08:  61A1ECEB     BL $-0x4d7a74
		   // ──── Block 8 if (!=) ────────────────────
		   0x01432D0C:  0400A0E1     MOV r0, r4
		   0x01432D10:  FE15A0E3     MOV r1, 0x3f800000
		   0x01432D14:  0020A0E3     MOV r2, 0x0
		   0x01432D18:  7040BDE8     POP {r4, r5, r6, lr}
		   0x01432D1C:  50AFF6EA     B $-0x2542b8
		   0x01432D20:  9DAADF02     SBCSEQ r10, pc, 0x9d000
		   0x01432D24:  B85AC402     SBCEQ r5, r4, 0xb8000
		   0x01432D28:  B05AC402     SBCEQ r5, r4, 0xb0000
		   0x01432D2C:  7C5AC402     SBCEQ r5, r4, 0x7c000
		   0x01432D30:  585AC402     SBCEQ r5, r4, 0x58000
		*/
	}

	// RVA: 0x1432D34 Offset: 0x1432D34 VA: 0x1432D34
	public void AddEnergy(int amount, EnumCurrencySourceType pathType, EnumCurrencySource path, string pathCustom = "", bool restore = false, bool silent = false, bool isFromAds = false, bool isFromIap = false, string activityVariant = "", int wsMilestone = -1) {
		/* Disassembly (ARM32, 421 instructions, 0x694 bytes):
		   // CFG: 58 blocks, 63 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01432D34:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01432D38:  5CD04DE2     SUB sp, sp, 0x5c
		   0x01432D3C:  50208DE5     STR r2, [sp, 0x50]
		   0x01432D40:  00B0A0E1     MOV fp, r0
		   0x01432D44:  00669FE5     LDR r6, [pc, 0x600]
		   0x01432D48:  84A08DE2     ADD r10, sp, 0x84
		   0x01432D4C:  94009DE5     LDR r0, [sp, 0x94]
		   0x01432D50:  0340A0E1     MOV r4, r3
		   0x01432D54:  98709DE5     LDR r7, [sp, 0x98]
		   0x01432D58:  06608FE0     ADD r6, pc, r6
		   0x01432D5C:  48008DE5     STR r0, [sp, 0x48]
		   0x01432D60:  0190A0E1     MOV sb, r1
		   0x01432D64:  90009DE5     LDR r0, [sp, 0x90]
		   0x01432D68:  4C008DE5     STR r0, [sp, 0x4c]
		   0x01432D6C:  01059AE8     LDM r10, {r0, r8, r10}
		   0x01432D70:  54008DE5     STR r0, [sp, 0x54]
		   0x01432D74:  0000D6E5     LDRB r0, [r6]
		   0x01432D78:  80509DE5     LDR r5, [sp, 0x80]
		   0x01432D7C:  000050E3     CMPS r0, r0, 0x0
		   0x01432D80:  2500001A     BNE $+0x9c  // if (!=) goto 0x01432E1C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01432D84:  C4059FE5     LDR r0, [pc, 0x5c4]
		   0x01432D88:  00009FE7     LDR r0, [pc, r0]
		   0x01432D8C:  F3A0ECEB     BL $-0x4d7c2c
		   0x01432D90:  BC059FE5     LDR r0, [pc, 0x5bc]
		   0x01432D94:  00009FE7     LDR r0, [pc, r0]
		   0x01432D98:  F0A0ECEB     BL $-0x4d7c38
		   0x01432D9C:  B4059FE5     LDR r0, [pc, 0x5b4]
		   0x01432DA0:  00009FE7     LDR r0, [pc, r0]
		   0x01432DA4:  EDA0ECEB     BL $-0x4d7c44
		   0x01432DA8:  AC059FE5     LDR r0, [pc, 0x5ac]
		   0x01432DAC:  00009FE7     LDR r0, [pc, r0]
		   0x01432DB0:  EAA0ECEB     BL $-0x4d7c50
		   0x01432DB4:  A4059FE5     LDR r0, [pc, 0x5a4]
		   0x01432DB8:  00009FE7     LDR r0, [pc, r0]
		   0x01432DBC:  E7A0ECEB     BL $-0x4d7c5c
		   0x01432DC0:  9C059FE5     LDR r0, [pc, 0x59c]
		   0x01432DC4:  00009FE7     LDR r0, [pc, r0]
		   0x01432DC8:  E4A0ECEB     BL $-0x4d7c68
		   0x01432DCC:  94059FE5     LDR r0, [pc, 0x594]
		   0x01432DD0:  00009FE7     LDR r0, [pc, r0]
		   0x01432DD4:  E1A0ECEB     BL $-0x4d7c74
		   0x01432DD8:  8C059FE5     LDR r0, [pc, 0x58c]
		   0x01432DDC:  00009FE7     LDR r0, [pc, r0]
		   0x01432DE0:  DEA0ECEB     BL $-0x4d7c80
		   0x01432DE4:  84059FE5     LDR r0, [pc, 0x584]
		   0x01432DE8:  00009FE7     LDR r0, [pc, r0]
		   0x01432DEC:  DBA0ECEB     BL $-0x4d7c8c
		   0x01432DF0:  7C059FE5     LDR r0, [pc, 0x57c]
		   0x01432DF4:  00009FE7     LDR r0, [pc, r0]
		   0x01432DF8:  D8A0ECEB     BL $-0x4d7c98
		   0x01432DFC:  74059FE5     LDR r0, [pc, 0x574]
		   0x01432E00:  00009FE7     LDR r0, [pc, r0]
		   0x01432E04:  D5A0ECEB     BL $-0x4d7ca4
		   0x01432E08:  6C059FE5     LDR r0, [pc, 0x56c]
		   0x01432E0C:  00009FE7     LDR r0, [pc, r0]
		   0x01432E10:  D2A0ECEB     BL $-0x4d7cb0
		   0x01432E14:  0100A0E3     MOV r0, 0x1
		   0x01432E18:  0000C6E5     STRB r0, [r6]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01432E1C:  000059E3     CMPS r0, sb, 0x0
		   0x01432E20:  2F0100DA     BLE $+0x4c4  // if (<=) goto 0x014332E4
		   // 
		   // ──── Block 3 else (>) ────────────────────
		   0x01432E24:  0000A0E3     MOV r0, 0x0
		   0x01432E28:  3C708DE5     STR r7, [sp, 0x3c]
		   0x01432E2C:  40508DE5     STR r5, [sp, 0x40]
		   0x01432E30:  2A1CF5EB     BL $-0x2b8f50
		   0x01432E34:  090080E0     ADD r0, r0, sb
		   0x01432E38:  0010A0E3     MOV r1, 0x0
		   0x01432E3C:  C07FC0E1     BIC r7, r0, r0, asr 31
		   0x01432E40:  0700A0E1     MOV r0, r7
		   0x01432E44:  B622F5EB     BL $-0x2b7520
		   0x01432E48:  3C059FE5     LDR r0, [pc, 0x53c]
		   0x01432E4C:  00009FE7     LDR r0, [pc, r0]
		   0x01432E50:  000090E5     LDR r0, [r0]
		   0x01432E54:  741090E5     LDR r1, [r0, 0x74]
		   0x01432E58:  000051E3     CMPS r0, r1, 0x0
		   0x01432E5C:  0000001A     BNE $+0x8  // if (!=) goto 0x01432E64
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01432E60:  0BA1ECEB     BL $-0x4d7bcc
		   // ──── Block 5 if (!=) ────────────────────
		   0x01432E64:  0000A0E3     MOV r0, 0x0
		   0x01432E68:  0010A0E3     MOV r1, 0x0
		   0x01432E6C:  CD5CF1EB     BL $-0x3a8cc4
		   0x01432E70:  0000A0E3     MOV r0, 0x0
		   0x01432E74:  191CF5EB     BL $-0x2b8f94
		   0x01432E78:  10159FE5     LDR r1, [pc, 0x510]
		   0x01432E7C:  01109FE7     LDR r1, [pc, r1]
		   0x01432E80:  58008DE5     STR r0, [sp, 0x58]
		   0x01432E84:  242091E5     LDR r2, [r1, 0x24]
		   0x01432E88:  58108DE2     ADD r1, sp, 0x58
		   0x01432E8C:  0200A0E1     MOV r0, r2
		   0x01432E90:  01A1ECEB     BL $-0x4d7bf4
		   0x01432E94:  0060A0E1     MOV r6, r0
		   0x01432E98:  F4049FE5     LDR r0, [pc, 0x4f4]
		   0x01432E9C:  0850A0E1     MOV r5, r8
		   0x01432EA0:  00009FE7     LDR r0, [pc, r0]
		   0x01432EA4:  000090E5     LDR r0, [r0]
		   0x01432EA8:  741090E5     LDR r1, [r0, 0x74]
		   0x01432EAC:  000051E3     CMPS r0, r1, 0x0
		   0x01432EB0:  0000001A     BNE $+0x8  // if (!=) goto 0x01432EB8
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01432EB4:  F6A0ECEB     BL $-0x4d7c20
		   // ──── Block 7 if (!=) ────────────────────
		   0x01432EB8:  D8049FE5     LDR r0, [pc, 0x4d8]
		   0x01432EBC:  0610A0E1     MOV r1, r6
		   0x01432EC0:  0020A0E3     MOV r2, 0x0
		   0x01432EC4:  00009FE7     LDR r0, [pc, r0]
		   0x01432EC8:  000090E5     LDR r0, [r0]
		   0x01432ECC:  357A01EB     BL $+0x5e8dc  // CALL → Analytics.AddParameter
		   0x01432ED0:  000055E3     CMPS r0, r5, 0x0
		   0x01432ED4:  0700001A     BNE $+0x24  // if (!=) goto 0x01432EF8
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01432ED8:  10009BE5     LDR r0, [fp, 0x10]
		   0x01432EDC:  000050E3     CMPS r0, r0, 0x0
		   0x01432EE0:  0400000A     BEQ $+0x18  // if (==) goto 0x01432EF8
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x01432EE4:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01432EE8:  0710A0E1     MOV r1, r7
		   0x01432EEC:  142090E5     LDR r2, [r0, 0x14]
		   0x01432EF0:  200090E5     LDR r0, [r0, 0x20]
		   0x01432EF4:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 10 (from 2 paths) ──────────────────
		   0x01432EF8:  640057E3     CMPS r0, r7, 0x64
		   0x01432EFC:  1F00003A     BLO $+0x84  // if (< (unsigned)) goto 0x01432F80
		   // 
		   // ──── Block 11 else (>= (unsigned)) ────────────────────
		   0x01432F00:  28609BE5     LDR r6, [fp, 0x28]
		   0x01432F04:  000056E3     CMPS r0, r6, 0x0
		   0x01432F08:  0C00000A     BEQ $+0x38  // if (==) goto 0x01432F40
		   // 
		   // ──── Block 12 else (!=) ────────────────────
		   0x01432F0C:  88049FE5     LDR r0, [pc, 0x488]
		   0x01432F10:  00009FE7     LDR r0, [pc, r0]
		   0x01432F14:  000090E5     LDR r0, [r0]
		   0x01432F18:  741090E5     LDR r1, [r0, 0x74]
		   0x01432F1C:  000051E3     CMPS r0, r1, 0x0
		   0x01432F20:  0000001A     BNE $+0x8  // if (!=) goto 0x01432F28
		   // 
		   // ──── Block 13 else (==) ────────────────────
		   0x01432F24:  DAA0ECEB     BL $-0x4d7c90
		   // ──── Block 14 if (!=) ────────────────────
		   0x01432F28:  0600A0E1     MOV r0, r6
		   0x01432F2C:  0010A0E3     MOV r1, 0x0
		   0x01432F30:  0050A0E3     MOV r5, 0x0
		   0x01432F34:  375479EB     BL $+0x1e550e4  // CALL → UnityEventsHelper.StopCoroutine
		   0x01432F38:  28508BE5     STR r5, [fp, 0x28]
		   0x01432F3C:  0850A0E1     MOV r5, r8
		   // ──── Block 15 if (==) ────────────────────
		   0x01432F40:  58049FE5     LDR r0, [pc, 0x458]
		   0x01432F44:  00009FE7     LDR r0, [pc, r0]
		   0x01432F48:  000090E5     LDR r0, [r0]
		   0x01432F4C:  741090E5     LDR r1, [r0, 0x74]
		   0x01432F50:  000051E3     CMPS r0, r1, 0x0
		   0x01432F54:  0000001A     BNE $+0x8  // if (!=) goto 0x01432F5C
		   // 
		   // ──── Block 16 else (==) ────────────────────
		   0x01432F58:  CDA0ECEB     BL $-0x4d7cc4
		   // ──── Block 17 if (!=) ────────────────────
		   0x01432F5C:  190100EB     BL $+0x46c  // CALL → EnergySystem.CancelTimer
		   0x01432F60:  1C009BE5     LDR r0, [fp, 0x1c]
		   0x01432F64:  000050E3     CMPS r0, r0, 0x0
		   0x01432F68:  0400000A     BEQ $+0x18  // if (==) goto 0x01432F80
		   // 
		   // ──── Block 18 else (!=) ────────────────────
		   0x01432F6C:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01432F70:  0010A0E3     MOV r1, 0x0
		   0x01432F74:  142090E5     LDR r2, [r0, 0x14]
		   0x01432F78:  200090E5     LDR r0, [r0, 0x20]
		   0x01432F7C:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 19 (from 2 paths) ──────────────────
		   0x01432F80:  50809DE5     LDR r8, [sp, 0x50]
		   0x01432F84:  010059E3     CMPS r0, sb, 0x1
		   0x01432F88:  1B00000A     BEQ $+0x74  // if (==) goto 0x01432FFC
		   // 
		   // ──── Block 20 else (!=) ────────────────────
		   0x01432F8C:  330057E3     CMPS r0, r7, 0x33
		   0x01432F90:  1900003A     BLO $+0x6c  // if (< (unsigned)) goto 0x01432FFC
		   // 
		   // ──── Block 21 else (>= (unsigned)) ────────────────────
		   0x01432F94:  40709BE5     LDR r7, [fp, 0x40]
		   0x01432F98:  000057E3     CMPS r0, r7, 0x0
		   0x01432F9C:  1600000A     BEQ $+0x60  // if (==) goto 0x01432FFC
		   // 
		   // ──── Block 22 else (!=) ────────────────────
		   0x01432FA0:  34A08DE5     STR r10, [sp, 0x34]
		   0x01432FA4:  04A0A0E1     MOV r10, r4
		   0x01432FA8:  F4439FE5     LDR r4, [pc, 0x3f4]
		   0x01432FAC:  0560A0E1     MOV r6, r5
		   0x01432FB0:  04409FE7     LDR r4, [pc, r4]
		   0x01432FB4:  000094E5     LDR r0, [r4]
		   0x01432FB8:  741090E5     LDR r1, [r0, 0x74]
		   0x01432FBC:  000051E3     CMPS r0, r1, 0x0
		   0x01432FC0:  0100001A     BNE $+0xc  // if (!=) goto 0x01432FCC
		   // 
		   // ──── Block 23 else (==) ────────────────────
		   0x01432FC4:  B2A0ECEB     BL $-0x4d7d30
		   0x01432FC8:  000094E5     LDR r0, [r4]
		   // ──── Block 24 if (!=) ────────────────────
		   0x01432FCC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01432FD0:  001097E5     LDR r1, [r7]
		   0x01432FD4:  D020C0E1     LDRD r2, r3, [r0]
		   0x01432FD8:  0700A0E1     MOV r0, r7
		   0x01432FDC:  D04FC1E1     LDRD r4, r5, [r1, 0xf0]
		   0x01432FE0:  0210A0E1     MOV r1, r2
		   0x01432FE4:  0320A0E1     MOV r2, r3
		   0x01432FE8:  0530A0E1     MOV r3, r5
		   0x01432FEC:  34FF2FE1     BLX r4
		   0x01432FF0:  0A40A0E1     MOV r4, r10
		   0x01432FF4:  34A09DE5     LDR r10, [sp, 0x34]
		   0x01432FF8:  0650A0E1     MOV r5, r6
		   // ──── Block 25 (from 3 paths) ──────────────────
		   0x01432FFC:  0B00A0E1     MOV r0, fp
		   0x01433000:  44508DE5     STR r5, [sp, 0x44]
		   0x01433004:  120100EB     BL $+0x450  // CALL → EnergySystem.TryToStartEnergyNotification
		   0x01433008:  4C209DE5     LDR r2, [sp, 0x4c]
		   0x0143300C:  0800A0E1     MOV r0, r8
		   0x01433010:  0410A0E1     MOV r1, r4
		   0x01433014:  0030A0E3     MOV r3, 0x0
		   0x01433018:  702803EB     BL $+0xca1c8  // CALL → MergeAnalytics.CheckFreePaymentType
		   0x0143301C:  84739FE5     LDR r7, [pc, 0x384]
		   0x01433020:  0060A0E1     MOV r6, r0
		   0x01433024:  07709FE7     LDR r7, [pc, r7]
		   0x01433028:  000097E5     LDR r0, [r7]
		   0x0143302C:  741090E5     LDR r1, [r0, 0x74]
		   0x01433030:  000051E3     CMPS r0, r1, 0x0
		   0x01433034:  0100001A     BNE $+0xc  // if (!=) goto 0x01433040
		   // 
		   // ──── Block 26 else (==) ────────────────────
		   0x01433038:  95A0ECEB     BL $-0x4d7da4
		   0x0143303C:  000097E5     LDR r0, [r7]
		   // ──── Block 27 if (!=) ────────────────────
		   0x01433040:  64539FE5     LDR r5, [pc, 0x364]
		   0x01433044:  05509FE7     LDR r5, [pc, r5]
		   0x01433048:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x0143304C:  54209DE5     LDR r2, [sp, 0x54]
		   0x01433050:  100090E5     LDR r0, [r0, 0x10]
		   0x01433054:  000050E3     CMPS r0, r0, 0x0
		   0x01433058:  0B00000A     BEQ $+0x34  // if (==) goto 0x0143308C
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x0143305C:  0C7090E5     LDR r7, [r0, 0xc]
		   0x01433060:  0A30A0E1     MOV r3, r10
		   0x01433064:  141090E5     LDR r1, [r0, 0x14]
		   0x01433068:  200090E5     LDR r0, [r0, 0x20]
		   0x0143306C:  00208DE5     STR r2, [sp]
		   0x01433070:  0620A0E1     MOV r2, r6
		   0x01433074:  04108DE5     STR r1, [sp, 0x4]
		   0x01433078:  0910A0E1     MOV r1, sb
		   0x0143307C:  37FF2FE1     BLX r7  // virtual call: Object.ToString
		   0x01433080:  28739FE5     LDR r7, [pc, 0x328]
		   0x01433084:  07709FE7     LDR r7, [pc, r7]
		   0x01433088:  54209DE5     LDR r2, [sp, 0x54]
		   // ──── Block 29 if (==) ────────────────────
		   0x0143308C:  000052E3     CMPS r0, r2, 0x0
		   0x01433090:  AB00001A     BNE $+0x2b4  // if (!=) goto 0x01433344
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x01433094:  3800A0E3     MOV r0, 0x38
		   0x01433098:  000056E3     CMPS r0, r6, 0x0
		   0x0143309C:  34000013     MOVNE r0, 0x34
		   0x014330A0:  00005AE3     CMPS r0, r10, 0x0
		   0x014330A4:  00109BE7     LDR r1, [fp, r0]
		   0x014330A8:  091081E0     ADD r1, r1, sb
		   0x014330AC:  00108BE7     STR r1, [fp, r0]
		   0x014330B0:  3C009B15     LDRNE r0, [fp, 0x3c]
		   0x014330B4:  09008010     ADDNE r0, r0, sb
		   0x014330B8:  3C008B15     STRNE r0, [fp, 0x3c]
		   0x014330BC:  0B00A0E1     MOV r0, fp
		   0x014330C0:  130100EB     BL $+0x454  // CALL → EnergySystem.Save
		   0x014330C4:  000095E5     LDR r0, [r5]
		   0x014330C8:  38408DE5     STR r4, [sp, 0x38]
		   0x014330CC:  741090E5     LDR r1, [r0, 0x74]
		   0x014330D0:  000051E3     CMPS r0, r1, 0x0
		   0x014330D4:  0100001A     BNE $+0xc  // if (!=) goto 0x014330E0
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x014330D8:  6DA0ECEB     BL $-0x4d7e44
		   0x014330DC:  000095E5     LDR r0, [r5]
		   // ──── Block 32 if (!=) ────────────────────
		   0x014330E0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014330E4:  084090E5     LDR r4, [r0, 0x8]
		   0x014330E8:  000054E3     CMPS r0, r4, 0x0
		   0x014330EC:  0000001A     BNE $+0x8  // if (!=) goto 0x014330F4
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x014330F0:  B6A0ECEB     BL $-0x4d7d20
		   // ──── Block 34 if (!=) ────────────────────
		   0x014330F4:  0C2094E5     LDR r2, [r4, 0xc]
		   0x014330F8:  141094E5     LDR r1, [r4, 0x14]
		   0x014330FC:  200094E5     LDR r0, [r4, 0x20]
		   0x01433100:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433104:  54008DE5     STR r0, [sp, 0x54]
		   0x01433108:  000095E5     LDR r0, [r5]
		   0x0143310C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433110:  0C4090E5     LDR r4, [r0, 0xc]
		   0x01433114:  000054E3     CMPS r0, r4, 0x0
		   0x01433118:  0000001A     BNE $+0x8  // if (!=) goto 0x01433120
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x0143311C:  ABA0ECEB     BL $-0x4d7d4c
		   // ──── Block 36 if (!=) ────────────────────
		   0x01433120:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433124:  141094E5     LDR r1, [r4, 0x14]
		   0x01433128:  200094E5     LDR r0, [r4, 0x20]
		   0x0143312C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433130:  4C008DE5     STR r0, [sp, 0x4c]
		   0x01433134:  000056E3     CMPS r0, r6, 0x0
		   0x01433138:  000097E5     LDR r0, [r7]
		   0x0143313C:  0940A0E1     MOV r4, sb
		   0x01433140:  34209BE5     LDR r2, [fp, 0x34]
		   0x01433144:  00400013     MOVNE r4, 0x0
		   0x01433148:  38109BE5     LDR r1, [fp, 0x38]
		   0x0143314C:  0960A011     MOVNE r6, sb
		   0x01433150:  30208DE5     STR r2, [sp, 0x30]
		   0x01433154:  34108DE5     STR r1, [sp, 0x34]
		   0x01433158:  741090E5     LDR r1, [r0, 0x74]
		   0x0143315C:  000051E3     CMPS r0, r1, 0x0
		   0x01433160:  0100001A     BNE $+0xc  // if (!=) goto 0x0143316C
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x01433164:  4AA0ECEB     BL $-0x4d7ed0
		   0x01433168:  000097E5     LDR r0, [r7]
		   // ──── Block 38 if (!=) ────────────────────
		   0x0143316C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433170:  147090E5     LDR r7, [r0, 0x14]
		   0x01433174:  000057E3     CMPS r0, r7, 0x0
		   0x01433178:  0000001A     BNE $+0x8  // if (!=) goto 0x01433180
		   // 
		   // ──── Block 39 else (==) ────────────────────
		   0x0143317C:  93A0ECEB     BL $-0x4d7dac
		   // ──── Block 40 if (!=) ────────────────────
		   0x01433180:  0C2097E5     LDR r2, [r7, 0xc]
		   0x01433184:  141097E5     LDR r1, [r7, 0x14]
		   0x01433188:  200097E5     LDR r0, [r7, 0x20]
		   0x0143318C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433190:  0080A0E1     MOV r8, r0
		   0x01433194:  3C709BE5     LDR r7, [fp, 0x3c]
		   0x01433198:  14029FE5     LDR r0, [pc, 0x214]
		   0x0143319C:  00009FE7     LDR r0, [pc, r0]
		   0x014331A0:  000090E5     LDR r0, [r0]
		   0x014331A4:  86A0ECEB     BL $-0x4d7de0
		   0x014331A8:  20708DE5     STR r7, [sp, 0x20]
		   0x014331AC:  0050A0E1     MOV r5, r0
		   0x014331B0:  48109DE5     LDR r1, [sp, 0x48]
		   0x014331B4:  0000A0E3     MOV r0, 0x0
		   0x014331B8:  24108DE5     STR r1, [sp, 0x24]
		   0x014331BC:  00005AE3     CMPS r0, r10, 0x0
		   0x014331C0:  3C109DE5     LDR r1, [sp, 0x3c]
		   0x014331C4:  0A90A001     MOVEQ sb, r10
		   0x014331C8:  28108DE5     STR r1, [sp, 0x28]
		   0x014331CC:  14108DE2     ADD r1, sp, 0x14
		   0x014331D0:  2C008DE5     STR r0, [sp, 0x2c]
		   0x014331D4:  0630A0E1     MOV r3, r6
		   0x014331D8:  00408DE5     STR r4, [sp]
		   0x014331DC:  30009DE5     LDR r0, [sp, 0x30]
		   0x014331E0:  04008DE5     STR r0, [sp, 0x4]
		   0x014331E4:  34009DE5     LDR r0, [sp, 0x34]
		   0x014331E8:  08008DE5     STR r0, [sp, 0x8]
		   0x014331EC:  50009DE5     LDR r0, [sp, 0x50]
		   0x014331F0:  0C008DE5     STR r0, [sp, 0xc]
		   0x014331F4:  38009DE5     LDR r0, [sp, 0x38]
		   0x014331F8:  10008DE5     STR r0, [sp, 0x10]
		   0x014331FC:  40009DE5     LDR r0, [sp, 0x40]
		   0x01433200:  010381E8     STM r1, {r0, r8, sb}
		   0x01433204:  0500A0E1     MOV r0, r5
		   0x01433208:  54109DE5     LDR r1, [sp, 0x54]
		   0x0143320C:  4C209DE5     LDR r2, [sp, 0x4c]
		   0x01433210:  359501EB     BL $+0x654dc  // CALL → EventCurrencyEnergyEarn..ctor
		   0x01433214:  9C019FE5     LDR r0, [pc, 0x19c]
		   0x01433218:  00009FE7     LDR r0, [pc, r0]
		   0x0143321C:  000090E5     LDR r0, [r0]
		   0x01433220:  741090E5     LDR r1, [r0, 0x74]
		   0x01433224:  000051E3     CMPS r0, r1, 0x0
		   0x01433228:  0000001A     BNE $+0x8  // if (!=) goto 0x01433230
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x0143322C:  18A0ECEB     BL $-0x4d7f98
		   // ──── Block 42 if (!=) ────────────────────
		   0x01433230:  0500A0E1     MOV r0, r5
		   0x01433234:  0010A0E3     MOV r1, 0x0
		   0x01433238:  3F7E01EB     BL $+0x5f904  // CALL → Analytics.SendEvent
		   0x0143323C:  78419FE5     LDR r4, [pc, 0x178]
		   0x01433240:  04409FE7     LDR r4, [pc, r4]
		   0x01433244:  000094E5     LDR r0, [r4]
		   0x01433248:  741090E5     LDR r1, [r0, 0x74]
		   0x0143324C:  000051E3     CMPS r0, r1, 0x0
		   0x01433250:  0100001A     BNE $+0xc  // if (!=) goto 0x0143325C
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x01433254:  0EA0ECEB     BL $-0x4d7fc0
		   0x01433258:  000094E5     LDR r0, [r4]
		   // ──── Block 44 if (!=) ────────────────────
		   0x0143325C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433260:  44409DE5     LDR r4, [sp, 0x44]
		   0x01433264:  000090E5     LDR r0, [r0]
		   0x01433268:  000050E3     CMPS r0, r0, 0x0
		   0x0143326C:  0300000A     BEQ $+0x14  // if (==) goto 0x01433280
		   // 
		   // ──── Block 45 else (!=) ────────────────────
		   0x01433270:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01433274:  141090E5     LDR r1, [r0, 0x14]
		   0x01433278:  200090E5     LDR r0, [r0, 0x20]
		   0x0143327C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 46 if (==) ────────────────────
		   0x01433280:  000054E3     CMPS r0, r4, 0x0
		   0x01433284:  2E00001A     BNE $+0xc0  // if (!=) goto 0x01433344
		   // 
		   // ──── Block 47 else (==) ────────────────────
		   0x01433288:  30419FE5     LDR r4, [pc, 0x130]
		   0x0143328C:  04409FE7     LDR r4, [pc, r4]
		   0x01433290:  000094E5     LDR r0, [r4]
		   0x01433294:  741090E5     LDR r1, [r0, 0x74]
		   0x01433298:  000051E3     CMPS r0, r1, 0x0
		   0x0143329C:  0100001A     BNE $+0xc  // if (!=) goto 0x014332A8
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x014332A0:  FB9FECEB     BL $-0x4d800c
		   0x014332A4:  000094E5     LDR r0, [r4]
		   // ──── Block 49 if (!=) ────────────────────
		   0x014332A8:  14119FE5     LDR r1, [pc, 0x114]
		   0x014332AC:  01109FE7     LDR r1, [pc, r1]
		   0x014332B0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014332B4:  001091E5     LDR r1, [r1]
		   0x014332B8:  704090E5     LDR r4, [r0, 0x70]
		   0x014332BC:  742091E5     LDR r2, [r1, 0x74]
		   0x014332C0:  000052E3     CMPS r0, r2, 0x0
		   0x014332C4:  0100001A     BNE $+0xc  // if (!=) goto 0x014332D0
		   // 
		   // ──── Block 50 else (==) ────────────────────
		   0x014332C8:  0100A0E1     MOV r0, r1
		   0x014332CC:  F09FECEB     BL $-0x4d8038
		   // ──── Block 51 if (!=) ────────────────────
		   0x014332D0:  0400A0E1     MOV r0, r4
		   0x014332D4:  FE15A0E3     MOV r1, 0x3f800000
		   0x014332D8:  0020A0E3     MOV r2, 0x0
		   0x014332DC:  E0ADF6EB     BL $-0x254878
		   0x014332E0:  170000EA     B $+0x64  // goto 0x01433344
		   // ──── Block 52 if (<=) ────────────────────
		   0x014332E4:  1600000A     BEQ $+0x60  // if (==) goto 0x01433344
		   // 
		   // ──── Block 53 else (!=) ────────────────────
		   0x014332E8:  90009FE5     LDR r0, [pc, 0x90]
		   0x014332EC:  00009FE7     LDR r0, [pc, r0]
		   0x014332F0:  000090E5     LDR r0, [r0]
		   0x014332F4:  32A0ECEB     BL $-0x4d7f30
		   0x014332F8:  0040A0E1     MOV r4, r0
		   0x014332FC:  80009FE5     LDR r0, [pc, 0x80]
		   0x01433300:  0020A0E3     MOV r2, 0x0
		   0x01433304:  00009FE7     LDR r0, [pc, r0]
		   0x01433308:  001090E5     LDR r1, [r0]
		   0x0143330C:  0400A0E1     MOV r0, r4
		   0x01433310:  DBAB03EB     BL $+0xeaf74  // CALL → InfoException..ctor
		   0x01433314:  6C009FE5     LDR r0, [pc, 0x6c]
		   0x01433318:  00009FE7     LDR r0, [pc, r0]
		   0x0143331C:  000090E5     LDR r0, [r0]
		   0x01433320:  741090E5     LDR r1, [r0, 0x74]
		   0x01433324:  000051E3     CMPS r0, r1, 0x0
		   0x01433328:  0000001A     BNE $+0x8  // if (!=) goto 0x01433330
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x0143332C:  D89FECEB     BL $-0x4d8098
		   // ──── Block 55 if (!=) ────────────────────
		   0x01433330:  0400A0E1     MOV r0, r4
		   0x01433334:  0010A0E3     MOV r1, 0x0
		   0x01433338:  5CD08DE2     ADD sp, sp, 0x5c
		   0x0143333C:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01433340:  91132FEA     B $+0xbc4e4c
		   // ──── Block 56 (from 3 paths) ──────────────────
		   0x01433344:  5CD08DE2     ADD sp, sp, 0x5c
		   0x01433348:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x0143334C:  BAA9DF02     SBCSEQ r10, pc, 0x2e8000
		   0x01433350:  AC48C402     SBCEQ r4, r4, 0xac0000
		   0x01433354:  7464C402     SBCEQ r6, r4, 0x74000000
		   0x01433358:  9848C402     SBCEQ r4, r4, 0x980000
		   0x0143335C:  DC37C402     SBCEQ r3, r4, 0x3700000
		   0x01433360:  5481C402     SBCEQ r8, r4, 0x15
		   0x01433364:  C019C502     SBCEQ r1, r5, 0x300000
		   0x01433368:  FC48C402     SBCEQ r4, r4, 0xfc0000
		   0x0143336C:  6459C402     SBCEQ r5, r4, 0x190000
		   0x01433370:  5C59C402     SBCEQ r5, r4, 0x170000
		   0x01433374:  3C48C402     SBCEQ r4, r4, 0x3c0000
		   0x01433378:  DC5EC402     SBCEQ r5, r4, 0xdc0
		   0x0143337C:  7C19C502     SBCEQ r1, r5, 0x1f0000
		   0x01433380:  E043C402     SBCEQ r4, r4, 0x80000003
		   0x01433384:  8414C502     SBCEQ r1, r5, 0x84000000
		   0x01433388:  7032C402     SBCEQ r3, r4, 0x7
		   0x0143338C:  EC47C402     SBCEQ r4, r4, 0x3b00000
		   0x01433390:  4438C402     SBCEQ r3, r4, 0x440000
		   0x01433394:  9447C402     SBCEQ r4, r4, 0x2500000
		   0x01433398:  185EC402     SBCEQ r5, r4, 0x180
		   0x0143339C:  2047C402     SBCEQ r4, r4, 0x800000
		   0x014333A0:  C87FC402     SBCEQ r7, r4, 0x320
		   0x014333A4:  5862C402     SBCEQ r6, r4, 0x80000005
		   0x014333A8:  E87EC402     SBCEQ r7, r4, 0xe80
		   0x014333AC:  F045C402     SBCEQ r4, r4, 0x3c000000
		   0x014333B0:  887EC402     SBCEQ r7, r4, 0x880
		   0x014333B4:  E815C502     SBCEQ r1, r5, 0x3a000000
		   0x014333B8:  1C44C402     SBCEQ r4, r4, 0x1c000000
		   0x014333BC:  CC7CC402     SBCEQ r7, r4, 0xcc00
		   0x014333C0:  B854C402     SBCEQ r5, r4, 0xb8000000
		   0x014333C4:  9454C402     SBCEQ r5, r4, 0x94000000
		*/
	}

	// RVA: 0x1433634 Offset: 0x1433634 VA: 0x1433634
	public void SpendEnergy(int amount, GameplayInterfaceState interfaceState, FieldGroup fieldGroup, CurrencySinkDataContainer sinkData) {
		/* Disassembly (ARM32, 496 instructions, 0x7C0 bytes):
		   // CFG: 78 blocks, 81 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433634:  F04F2DE9     PUSH {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x01433638:  3CD04DE2     SUB sp, sp, 0x3c
		   0x0143363C:  2C479FE5     LDR r4, [pc, 0x72c]
		   0x01433640:  0080A0E1     MOV r8, r0
		   0x01433644:  6C009DE5     LDR r0, [sp, 0x6c]
		   0x01433648:  0360A0E1     MOV r6, r3
		   0x0143364C:  04408FE0     ADD r4, pc, r4
		   0x01433650:  64A09DE5     LDR r10, [sp, 0x64]
		   0x01433654:  60509DE5     LDR r5, [sp, 0x60]
		   0x01433658:  0270A0E1     MOV r7, r2
		   0x0143365C:  70B09DE5     LDR fp, [sp, 0x70]
		   0x01433660:  0190A0E1     MOV sb, r1
		   0x01433664:  2C008DE5     STR r0, [sp, 0x2c]
		   0x01433668:  68009DE5     LDR r0, [sp, 0x68]
		   0x0143366C:  28008DE5     STR r0, [sp, 0x28]
		   0x01433670:  0000D4E5     LDRB r0, [r4]
		   0x01433674:  000050E3     CMPS r0, r0, 0x0
		   0x01433678:  2500001A     BNE $+0x9c  // if (!=) goto 0x01433714
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143367C:  F0069FE5     LDR r0, [pc, 0x6f0]
		   0x01433680:  00009FE7     LDR r0, [pc, r0]
		   0x01433684:  B59EECEB     BL $-0x4d8524
		   0x01433688:  E8069FE5     LDR r0, [pc, 0x6e8]
		   0x0143368C:  00009FE7     LDR r0, [pc, r0]
		   0x01433690:  B29EECEB     BL $-0x4d8530
		   0x01433694:  E0069FE5     LDR r0, [pc, 0x6e0]
		   0x01433698:  00009FE7     LDR r0, [pc, r0]
		   0x0143369C:  AF9EECEB     BL $-0x4d853c
		   0x014336A0:  D8069FE5     LDR r0, [pc, 0x6d8]
		   0x014336A4:  00009FE7     LDR r0, [pc, r0]
		   0x014336A8:  AC9EECEB     BL $-0x4d8548
		   0x014336AC:  D0069FE5     LDR r0, [pc, 0x6d0]
		   0x014336B0:  00009FE7     LDR r0, [pc, r0]
		   0x014336B4:  A99EECEB     BL $-0x4d8554
		   0x014336B8:  C8069FE5     LDR r0, [pc, 0x6c8]
		   0x014336BC:  00009FE7     LDR r0, [pc, r0]
		   0x014336C0:  A69EECEB     BL $-0x4d8560
		   0x014336C4:  C0069FE5     LDR r0, [pc, 0x6c0]
		   0x014336C8:  00009FE7     LDR r0, [pc, r0]
		   0x014336CC:  A39EECEB     BL $-0x4d856c
		   0x014336D0:  B8069FE5     LDR r0, [pc, 0x6b8]
		   0x014336D4:  00009FE7     LDR r0, [pc, r0]
		   0x014336D8:  A09EECEB     BL $-0x4d8578
		   0x014336DC:  B0069FE5     LDR r0, [pc, 0x6b0]
		   0x014336E0:  00009FE7     LDR r0, [pc, r0]
		   0x014336E4:  9D9EECEB     BL $-0x4d8584
		   0x014336E8:  A8069FE5     LDR r0, [pc, 0x6a8]
		   0x014336EC:  00009FE7     LDR r0, [pc, r0]
		   0x014336F0:  9A9EECEB     BL $-0x4d8590
		   0x014336F4:  A0069FE5     LDR r0, [pc, 0x6a0]
		   0x014336F8:  00009FE7     LDR r0, [pc, r0]
		   0x014336FC:  979EECEB     BL $-0x4d859c
		   0x01433700:  98069FE5     LDR r0, [pc, 0x698]
		   0x01433704:  00009FE7     LDR r0, [pc, r0]
		   0x01433708:  949EECEB     BL $-0x4d85a8
		   0x0143370C:  0100A0E3     MOV r0, 0x1
		   0x01433710:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01433714:  0000A0E3     MOV r0, 0x0
		   0x01433718:  000059E3     CMPS r0, sb, 0x0
		   0x0143371C:  38008DE5     STR r0, [sp, 0x38]
		   0x01433720:  120000DA     BLE $+0x50  // if (<=) goto 0x01433770
		   // 
		   // ──── Block 3 else (>) ────────────────────
		   0x01433724:  84069FE5     LDR r0, [pc, 0x684]
		   0x01433728:  00009FE7     LDR r0, [pc, r0]
		   0x0143372C:  000090E5     LDR r0, [r0]
		   0x01433730:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433734:  004090E5     LDR r4, [r0]
		   0x01433738:  000054E3     CMPS r0, r4, 0x0
		   0x0143373C:  0000001A     BNE $+0x8  // if (!=) goto 0x01433744
		   // 
		   // ──── Block 4 else (==) ────────────────────
		   0x01433740:  229FECEB     BL $-0x4d8370
		   // ──── Block 5 if (!=) ────────────────────
		   0x01433744:  204094E5     LDR r4, [r4, 0x20]
		   0x01433748:  000054E3     CMPS r0, r4, 0x0
		   0x0143374C:  0000001A     BNE $+0x8  // if (!=) goto 0x01433754
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01433750:  1E9FECEB     BL $-0x4d8380
		   // ──── Block 7 if (!=) ────────────────────
		   0x01433754:  2000D4E5     LDRB r0, [r4, 0x20]
		   0x01433758:  000050E3     CMPS r0, r0, 0x0
		   0x0143375C:  1B00000A     BEQ $+0x74  // if (==) goto 0x014337D0
		   // 
		   // ──── Block 8 else (!=) ────────────────────
		   0x01433760:  0000A0E3     MOV r0, 0x0
		   0x01433764:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01433768:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x0143376C:  20A7FBEA     B $-0x116378
		   // ──── Block 9 if (<=) ────────────────────
		   0x01433770:  5101000A     BEQ $+0x54c  // if (==) goto 0x01433CBC
		   // 
		   // ──── Block 10 else (!=) ────────────────────
		   0x01433774:  28069FE5     LDR r0, [pc, 0x628]
		   0x01433778:  00009FE7     LDR r0, [pc, r0]
		   0x0143377C:  000090E5     LDR r0, [r0]
		   0x01433780:  0F9FECEB     BL $-0x4d83bc
		   0x01433784:  0040A0E1     MOV r4, r0
		   0x01433788:  18069FE5     LDR r0, [pc, 0x618]
		   0x0143378C:  0020A0E3     MOV r2, 0x0
		   0x01433790:  00009FE7     LDR r0, [pc, r0]
		   0x01433794:  001090E5     LDR r1, [r0]
		   0x01433798:  0400A0E1     MOV r0, r4
		   0x0143379C:  B8AA03EB     BL $+0xeaae8  // CALL → InfoException..ctor
		   0x014337A0:  04069FE5     LDR r0, [pc, 0x604]
		   0x014337A4:  00009FE7     LDR r0, [pc, r0]
		   0x014337A8:  000090E5     LDR r0, [r0]
		   0x014337AC:  741090E5     LDR r1, [r0, 0x74]
		   0x014337B0:  000051E3     CMPS r0, r1, 0x0
		   0x014337B4:  0000001A     BNE $+0x8  // if (!=) goto 0x014337BC
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x014337B8:  B59EECEB     BL $-0x4d8524
		   // ──── Block 12 if (!=) ────────────────────
		   0x014337BC:  0400A0E1     MOV r0, r4
		   0x014337C0:  0010A0E3     MOV r1, 0x0
		   0x014337C4:  3CD08DE2     ADD sp, sp, 0x3c
		   0x014337C8:  F04FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, lr}
		   0x014337CC:  6E122FEA     B $+0xbc49c0
		   // ──── Block 13 if (==) ────────────────────
		   0x014337D0:  0000A0E3     MOV r0, 0x0
		   0x014337D4:  C119F5EB     BL $-0x2b98f4
		   0x014337D8:  094040E0     SUB r4, r0, sb
		   0x014337DC:  0010A0E3     MOV r1, 0x0
		   0x014337E0:  C40FC4E1     BIC r0, r4, r4, asr 31
		   0x014337E4:  24008DE5     STR r0, [sp, 0x24]
		   0x014337E8:  4D20F5EB     BL $-0x2b7ec4
		   0x014337EC:  C0059FE5     LDR r0, [pc, 0x5c0]
		   0x014337F0:  00009FE7     LDR r0, [pc, r0]
		   0x014337F4:  000090E5     LDR r0, [r0]
		   0x014337F8:  741090E5     LDR r1, [r0, 0x74]
		   0x014337FC:  000051E3     CMPS r0, r1, 0x0
		   0x01433800:  0000001A     BNE $+0x8  // if (!=) goto 0x01433808
		   // 
		   // ──── Block 14 else (==) ────────────────────
		   0x01433804:  A29EECEB     BL $-0x4d8570
		   // ──── Block 15 if (!=) ────────────────────
		   0x01433808:  0000A0E3     MOV r0, 0x0
		   0x0143380C:  0010A0E3     MOV r1, 0x0
		   0x01433810:  645AF1EB     BL $-0x3a9668
		   0x01433814:  000054E3     CMPS r0, r4, 0x0
		   0x01433818:  3C0000CA     BGT $+0xf8  // if (>) goto 0x01433910
		   // 
		   // ──── Block 16 else (<=) ────────────────────
		   0x0143381C:  20908DE5     STR sb, [sp, 0x20]
		   0x01433820:  90959FE5     LDR sb, [pc, 0x590]
		   0x01433824:  09909FE7     LDR sb, [pc, sb]
		   0x01433828:  000099E5     LDR r0, [sb]
		   0x0143382C:  741090E5     LDR r1, [r0, 0x74]
		   0x01433830:  000051E3     CMPS r0, r1, 0x0
		   0x01433834:  0100001A     BNE $+0xc  // if (!=) goto 0x01433840
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x01433838:  959EECEB     BL $-0x4d85a4
		   0x0143383C:  000099E5     LDR r0, [sb]
		   // ──── Block 18 if (!=) ────────────────────
		   0x01433840:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433844:  084090E5     LDR r4, [r0, 0x8]
		   0x01433848:  000054E3     CMPS r0, r4, 0x0
		   0x0143384C:  0000001A     BNE $+0x8  // if (!=) goto 0x01433854
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x01433850:  DE9EECEB     BL $-0x4d8480
		   // ──── Block 20 if (!=) ────────────────────
		   0x01433854:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433858:  141094E5     LDR r1, [r4, 0x14]
		   0x0143385C:  200094E5     LDR r0, [r4, 0x20]
		   0x01433860:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433864:  1C008DE5     STR r0, [sp, 0x1c]
		   0x01433868:  000099E5     LDR r0, [sb]
		   0x0143386C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433870:  0C4090E5     LDR r4, [r0, 0xc]
		   0x01433874:  000054E3     CMPS r0, r4, 0x0
		   0x01433878:  0000001A     BNE $+0x8  // if (!=) goto 0x01433880
		   // 
		   // ──── Block 21 else (==) ────────────────────
		   0x0143387C:  D39EECEB     BL $-0x4d84ac
		   // ──── Block 22 if (!=) ────────────────────
		   0x01433880:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433884:  141094E5     LDR r1, [r4, 0x14]
		   0x01433888:  200094E5     LDR r0, [r4, 0x20]
		   0x0143388C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433890:  0040A0E1     MOV r4, r0
		   0x01433894:  20059FE5     LDR r0, [pc, 0x520]
		   0x01433898:  00009FE7     LDR r0, [pc, r0]
		   0x0143389C:  000090E5     LDR r0, [r0]
		   0x014338A0:  C79EECEB     BL $-0x4d84dc
		   0x014338A4:  0090A0E1     MOV sb, r0
		   0x014338A8:  10059FE5     LDR r0, [pc, 0x510]
		   0x014338AC:  0010A0E3     MOV r1, 0x0
		   0x014338B0:  0420A0E1     MOV r2, r4
		   0x014338B4:  0030A0E3     MOV r3, 0x0
		   0x014338B8:  00009FE7     LDR r0, [pc, r0]
		   0x014338BC:  000090E5     LDR r0, [r0]
		   0x014338C0:  10008DE5     STR r0, [sp, 0x10]
		   0x014338C4:  0900A0E1     MOV r0, sb
		   0x014338C8:  00708DE5     STR r7, [sp]
		   0x014338CC:  04608DE5     STR r6, [sp, 0x4]
		   0x014338D0:  08508DE5     STR r5, [sp, 0x8]
		   0x014338D4:  0CA08DE5     STR r10, [sp, 0xc]
		   0x014338D8:  14108DE5     STR r1, [sp, 0x14]
		   0x014338DC:  1C109DE5     LDR r1, [sp, 0x1c]
		   0x014338E0:  F6BBFBEB     BL $-0x111020
		   0x014338E4:  0900A0E1     MOV r0, sb
		   0x014338E8:  0010A0E3     MOV r1, 0x0
		   0x014338EC:  927C01EB     BL $+0x5f250  // CALL → Analytics.SendEvent
		   0x014338F0:  140098E5     LDR r0, [r8, 0x14]
		   0x014338F4:  20909DE5     LDR sb, [sp, 0x20]
		   0x014338F8:  000050E3     CMPS r0, r0, 0x0
		   0x014338FC:  0300000A     BEQ $+0x14  // if (==) goto 0x01433910
		   // 
		   // ──── Block 23 else (!=) ────────────────────
		   0x01433900:  0C2090E5     LDR r2, [r0, 0xc]
		   0x01433904:  141090E5     LDR r1, [r0, 0x14]
		   0x01433908:  200090E5     LDR r0, [r0, 0x20]
		   0x0143390C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 24 (from 2 paths) ──────────────────
		   0x01433910:  0000A0E3     MOV r0, 0x0
		   0x01433914:  7119F5EB     BL $-0x2b9a34
		   0x01433918:  A4149FE5     LDR r1, [pc, 0x4a4]
		   0x0143391C:  01109FE7     LDR r1, [pc, r1]
		   0x01433920:  30008DE5     STR r0, [sp, 0x30]
		   0x01433924:  242091E5     LDR r2, [r1, 0x24]
		   0x01433928:  30108DE2     ADD r1, sp, 0x30
		   0x0143392C:  0200A0E1     MOV r0, r2
		   0x01433930:  599EECEB     BL $-0x4d8694
		   0x01433934:  8C549FE5     LDR r5, [pc, 0x48c]
		   0x01433938:  0060A0E1     MOV r6, r0
		   0x0143393C:  05509FE7     LDR r5, [pc, r5]
		   0x01433940:  24409DE5     LDR r4, [sp, 0x24]
		   0x01433944:  000095E5     LDR r0, [r5]
		   0x01433948:  741090E5     LDR r1, [r0, 0x74]
		   0x0143394C:  000051E3     CMPS r0, r1, 0x0
		   0x01433950:  0000001A     BNE $+0x8  // if (!=) goto 0x01433958
		   // 
		   // ──── Block 25 else (==) ────────────────────
		   0x01433954:  4E9EECEB     BL $-0x4d86c0
		   // ──── Block 26 if (!=) ────────────────────
		   0x01433958:  6C049FE5     LDR r0, [pc, 0x46c]
		   0x0143395C:  0610A0E1     MOV r1, r6
		   0x01433960:  0020A0E3     MOV r2, 0x0
		   0x01433964:  00009FE7     LDR r0, [pc, r0]
		   0x01433968:  000090E5     LDR r0, [r0]
		   0x0143396C:  8D7701EB     BL $+0x5de3c  // CALL → Analytics.AddParameter
		   0x01433970:  100098E5     LDR r0, [r8, 0x10]
		   0x01433974:  0870A0E1     MOV r7, r8
		   0x01433978:  000050E3     CMPS r0, r0, 0x0
		   0x0143397C:  0400000A     BEQ $+0x18  // if (==) goto 0x01433994
		   // 
		   // ──── Block 27 else (!=) ────────────────────
		   0x01433980:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01433984:  0410A0E1     MOV r1, r4
		   0x01433988:  142090E5     LDR r2, [r0, 0x14]
		   0x0143398C:  200090E5     LDR r0, [r0, 0x20]
		   0x01433990:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 28 if (==) ────────────────────
		   0x01433994:  630054E3     CMPS r0, r4, 0x63
		   0x01433998:  1100008A     BHI $+0x4c  // if (> (unsigned)) goto 0x014339E4
		   // 
		   // ──── Block 29 else (<= (unsigned)) ────────────────────
		   0x0143399C:  280097E5     LDR r0, [r7, 0x28]
		   0x014339A0:  000050E3     CMPS r0, r0, 0x0
		   0x014339A4:  0E00001A     BNE $+0x40  // if (!=) goto 0x014339E4
		   // 
		   // ──── Block 30 else (==) ────────────────────
		   0x014339A8:  0700A0E1     MOV r0, r7
		   0x014339AC:  7810A0E3     MOV r1, 0x78
		   0x014339B0:  0F0100EB     BL $+0x444  // CALL → EnergySystem.StartInGameTimer
		   0x014339B4:  0040A0E1     MOV r4, r0
		   0x014339B8:  10049FE5     LDR r0, [pc, 0x410]
		   0x014339BC:  00009FE7     LDR r0, [pc, r0]
		   0x014339C0:  000090E5     LDR r0, [r0]
		   0x014339C4:  741090E5     LDR r1, [r0, 0x74]
		   0x014339C8:  000051E3     CMPS r0, r1, 0x0
		   0x014339CC:  0000001A     BNE $+0x8  // if (!=) goto 0x014339D4
		   // 
		   // ──── Block 31 else (==) ────────────────────
		   0x014339D0:  2F9EECEB     BL $-0x4d873c
		   // ──── Block 32 if (!=) ────────────────────
		   0x014339D4:  0400A0E1     MOV r0, r4
		   0x014339D8:  0010A0E3     MOV r1, 0x0
		   0x014339DC:  505179EB     BL $+0x1e54548  // CALL → UnityEventsHelper.StartCoroutine
		   0x014339E0:  280087E5     STR r0, [r7, 0x28]
		   // ──── Block 33 (from 2 paths) ──────────────────
		   0x014339E4:  1D005BE3     CMPS r0, fp, 0x1d
		   0x014339E8:  5500000A     BEQ $+0x15c  // if (==) goto 0x01433B44
		   // 
		   // ──── Block 34 else (!=) ────────────────────
		   0x014339EC:  16005BE3     CMPS r0, fp, 0x16
		   0x014339F0:  3300000A     BEQ $+0xd4  // if (==) goto 0x01433AC4
		   // 
		   // ──── Block 35 else (!=) ────────────────────
		   0x014339F4:  15005BE3     CMPS r0, fp, 0x15
		   0x014339F8:  9C00001A     BNE $+0x278  // if (!=) goto 0x01433C70
		   // 
		   // ──── Block 36 else (==) ────────────────────
		   0x014339FC:  300097E5     LDR r0, [r7, 0x30]
		   0x01433A00:  090080E0     ADD r0, r0, sb
		   0x01433A04:  300087E5     STR r0, [r7, 0x30]
		   0x01433A08:  0700A0E1     MOV r0, r7
		   0x01433A0C:  C0FEFFEB     BL $-0x4f8
		   0x01433A10:  BC439FE5     LDR r4, [pc, 0x3bc]
		   0x01433A14:  04409FE7     LDR r4, [pc, r4]
		   0x01433A18:  000094E5     LDR r0, [r4]
		   0x01433A1C:  741090E5     LDR r1, [r0, 0x74]
		   0x01433A20:  000051E3     CMPS r0, r1, 0x0
		   0x01433A24:  0100001A     BNE $+0xc  // if (!=) goto 0x01433A30
		   // 
		   // ──── Block 37 else (==) ────────────────────
		   0x01433A28:  199EECEB     BL $-0x4d8794
		   0x01433A2C:  000094E5     LDR r0, [r4]
		   // ──── Block 38 if (!=) ────────────────────
		   0x01433A30:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433A34:  080090E5     LDR r0, [r0, 0x8]
		   0x01433A38:  000050E3     CMPS r0, r0, 0x0
		   0x01433A3C:  0400000A     BEQ $+0x18  // if (==) goto 0x01433A54
		   // 
		   // ──── Block 39 else (!=) ────────────────────
		   0x01433A40:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01433A44:  0910A0E1     MOV r1, sb
		   0x01433A48:  142090E5     LDR r2, [r0, 0x14]
		   0x01433A4C:  200090E5     LDR r0, [r0, 0x20]
		   0x01433A50:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 40 if (==) ────────────────────
		   0x01433A54:  000095E5     LDR r0, [r5]
		   0x01433A58:  741090E5     LDR r1, [r0, 0x74]
		   0x01433A5C:  000051E3     CMPS r0, r1, 0x0
		   0x01433A60:  0100001A     BNE $+0xc  // if (!=) goto 0x01433A6C
		   // 
		   // ──── Block 41 else (==) ────────────────────
		   0x01433A64:  0A9EECEB     BL $-0x4d87d0
		   0x01433A68:  000095E5     LDR r0, [r5]
		   // ──── Block 42 if (!=) ────────────────────
		   0x01433A6C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433A70:  086090E5     LDR r6, [r0, 0x8]
		   0x01433A74:  000056E3     CMPS r0, r6, 0x0
		   0x01433A78:  0000001A     BNE $+0x8  // if (!=) goto 0x01433A80
		   // 
		   // ──── Block 43 else (==) ────────────────────
		   0x01433A7C:  539EECEB     BL $-0x4d86ac
		   // ──── Block 44 if (!=) ────────────────────
		   0x01433A80:  0C2096E5     LDR r2, [r6, 0xc]
		   0x01433A84:  141096E5     LDR r1, [r6, 0x14]
		   0x01433A88:  200096E5     LDR r0, [r6, 0x20]
		   0x01433A8C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433A90:  0080A0E1     MOV r8, r0
		   0x01433A94:  000095E5     LDR r0, [r5]
		   0x01433A98:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433A9C:  0C5090E5     LDR r5, [r0, 0xc]
		   0x01433AA0:  000055E3     CMPS r0, r5, 0x0
		   0x01433AA4:  0000001A     BNE $+0x8  // if (!=) goto 0x01433AAC
		   // 
		   // ──── Block 45 else (==) ────────────────────
		   0x01433AA8:  489EECEB     BL $-0x4d86d8
		   // ──── Block 46 if (!=) ────────────────────
		   0x01433AAC:  0C2095E5     LDR r2, [r5, 0xc]
		   0x01433AB0:  141095E5     LDR r1, [r5, 0x14]
		   0x01433AB4:  200095E5     LDR r0, [r5, 0x20]
		   0x01433AB8:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433ABC:  00A0A0E1     MOV r10, r0
		   0x01433AC0:  410000EA     B $+0x10c  // goto 0x01433BCC
		   // ──── Block 47 if (==) ────────────────────
		   0x01433AC4:  300097E5     LDR r0, [r7, 0x30]
		   0x01433AC8:  090080E0     ADD r0, r0, sb
		   0x01433ACC:  300087E5     STR r0, [r7, 0x30]
		   0x01433AD0:  0700A0E1     MOV r0, r7
		   0x01433AD4:  8EFEFFEB     BL $-0x5c0
		   0x01433AD8:  F8429FE5     LDR r4, [pc, 0x2f8]
		   0x01433ADC:  04409FE7     LDR r4, [pc, r4]
		   0x01433AE0:  000094E5     LDR r0, [r4]
		   0x01433AE4:  741090E5     LDR r1, [r0, 0x74]
		   0x01433AE8:  000051E3     CMPS r0, r1, 0x0
		   0x01433AEC:  0100001A     BNE $+0xc  // if (!=) goto 0x01433AF8
		   // 
		   // ──── Block 48 else (==) ────────────────────
		   0x01433AF0:  E79DECEB     BL $-0x4d885c
		   0x01433AF4:  000094E5     LDR r0, [r4]
		   // ──── Block 49 if (!=) ────────────────────
		   0x01433AF8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433AFC:  0C0090E5     LDR r0, [r0, 0xc]
		   0x01433B00:  000050E3     CMPS r0, r0, 0x0
		   0x01433B04:  0400000A     BEQ $+0x18  // if (==) goto 0x01433B1C
		   // 
		   // ──── Block 50 else (!=) ────────────────────
		   0x01433B08:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01433B0C:  0910A0E1     MOV r1, sb
		   0x01433B10:  142090E5     LDR r2, [r0, 0x14]
		   0x01433B14:  200090E5     LDR r0, [r0, 0x20]
		   0x01433B18:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 51 if (==) ────────────────────
		   0x01433B1C:  440097E5     LDR r0, [r7, 0x44]
		   0x01433B20:  000050E3     CMPS r0, r0, 0x0
		   0x01433B24:  5100000A     BEQ $+0x14c  // if (==) goto 0x01433C70
		   // 
		   // ──── Block 52 else (!=) ────────────────────
		   0x01433B28:  0010A0E3     MOV r1, 0x0
		   0x01433B2C:  00108DE5     STR r1, [sp]
		   0x01433B30:  0910A0E1     MOV r1, sb
		   0x01433B34:  2C209DE5     LDR r2, [sp, 0x2c]
		   0x01433B38:  28309DE5     LDR r3, [sp, 0x28]
		   0x01433B3C:  B49201EB     BL $+0x64ad8  // CALL → EnergySpendBatchReporter.Report
		   0x01433B40:  4A0000EA     B $+0x130  // goto 0x01433C70
		   // ──── Block 53 if (==) ────────────────────
		   0x01433B44:  300097E5     LDR r0, [r7, 0x30]
		   0x01433B48:  090080E0     ADD r0, r0, sb
		   0x01433B4C:  300087E5     STR r0, [r7, 0x30]
		   0x01433B50:  0700A0E1     MOV r0, r7
		   0x01433B54:  6EFEFFEB     BL $-0x640
		   0x01433B58:  000095E5     LDR r0, [r5]
		   0x01433B5C:  741090E5     LDR r1, [r0, 0x74]
		   0x01433B60:  000051E3     CMPS r0, r1, 0x0
		   0x01433B64:  0100001A     BNE $+0xc  // if (!=) goto 0x01433B70
		   // 
		   // ──── Block 54 else (==) ────────────────────
		   0x01433B68:  C99DECEB     BL $-0x4d88d4
		   0x01433B6C:  000095E5     LDR r0, [r5]
		   // ──── Block 55 if (!=) ────────────────────
		   0x01433B70:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433B74:  084090E5     LDR r4, [r0, 0x8]
		   0x01433B78:  000054E3     CMPS r0, r4, 0x0
		   0x01433B7C:  0000001A     BNE $+0x8  // if (!=) goto 0x01433B84
		   // 
		   // ──── Block 56 else (==) ────────────────────
		   0x01433B80:  129EECEB     BL $-0x4d87b0
		   // ──── Block 57 if (!=) ────────────────────
		   0x01433B84:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433B88:  141094E5     LDR r1, [r4, 0x14]
		   0x01433B8C:  200094E5     LDR r0, [r4, 0x20]
		   0x01433B90:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433B94:  0080A0E1     MOV r8, r0
		   0x01433B98:  000095E5     LDR r0, [r5]
		   0x01433B9C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433BA0:  0C4090E5     LDR r4, [r0, 0xc]
		   0x01433BA4:  000054E3     CMPS r0, r4, 0x0
		   0x01433BA8:  0000001A     BNE $+0x8  // if (!=) goto 0x01433BB0
		   // 
		   // ──── Block 58 else (==) ────────────────────
		   0x01433BAC:  079EECEB     BL $-0x4d87dc
		   // ──── Block 59 if (!=) ────────────────────
		   0x01433BB0:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433BB4:  141094E5     LDR r1, [r4, 0x14]
		   0x01433BB8:  200094E5     LDR r0, [r4, 0x20]
		   0x01433BBC:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433BC0:  14429FE5     LDR r4, [pc, 0x214]
		   0x01433BC4:  00A0A0E1     MOV r10, r0
		   0x01433BC8:  04409FE7     LDR r4, [pc, r4]
		   // ──── Block 60 ──────────────────────────────
		   0x01433BCC:  000094E5     LDR r0, [r4]
		   0x01433BD0:  305097E5     LDR r5, [r7, 0x30]
		   0x01433BD4:  741090E5     LDR r1, [r0, 0x74]
		   0x01433BD8:  000051E3     CMPS r0, r1, 0x0
		   0x01433BDC:  0100001A     BNE $+0xc  // if (!=) goto 0x01433BE8
		   // 
		   // ──── Block 61 else (==) ────────────────────
		   0x01433BE0:  AB9DECEB     BL $-0x4d894c
		   0x01433BE4:  000094E5     LDR r0, [r4]
		   // ──── Block 62 if (!=) ────────────────────
		   0x01433BE8:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433BEC:  144090E5     LDR r4, [r0, 0x14]
		   0x01433BF0:  000054E3     CMPS r0, r4, 0x0
		   0x01433BF4:  0000001A     BNE $+0x8  // if (!=) goto 0x01433BFC
		   // 
		   // ──── Block 63 else (==) ────────────────────
		   0x01433BF8:  F49DECEB     BL $-0x4d8828
		   // ──── Block 64 if (!=) ────────────────────
		   0x01433BFC:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433C00:  141094E5     LDR r1, [r4, 0x14]
		   0x01433C04:  200094E5     LDR r0, [r4, 0x20]
		   0x01433C08:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433C0C:  0060A0E1     MOV r6, r0
		   0x01433C10:  C8019FE5     LDR r0, [pc, 0x1c8]
		   0x01433C14:  00009FE7     LDR r0, [pc, r0]
		   0x01433C18:  000090E5     LDR r0, [r0]
		   0x01433C1C:  E89DECEB     BL $-0x4d8858
		   0x01433C20:  00508DE5     STR r5, [sp]
		   0x01433C24:  0040A0E1     MOV r4, r0
		   0x01433C28:  28209DE5     LDR r2, [sp, 0x28]
		   0x01433C2C:  0000A0E3     MOV r0, 0x0
		   0x01433C30:  04208DE5     STR r2, [sp, 0x4]
		   0x01433C34:  0010E0E3     MVN r1, r0, 0x0
		   0x01433C38:  2C209DE5     LDR r2, [sp, 0x2c]
		   0x01433C3C:  0930A0E1     MOV r3, sb
		   0x01433C40:  08208DE5     STR r2, [sp, 0x8]
		   0x01433C44:  0A20A0E1     MOV r2, r10
		   0x01433C48:  14108DE5     STR r1, [sp, 0x14]
		   0x01433C4C:  0810A0E1     MOV r1, r8
		   0x01433C50:  10008DE5     STR r0, [sp, 0x10]
		   0x01433C54:  18008DE5     STR r0, [sp, 0x18]
		   0x01433C58:  0400A0E1     MOV r0, r4
		   0x01433C5C:  0C608DE5     STR r6, [sp, 0xc]
		   0x01433C60:  3A9401EB     BL $+0x650f0  // CALL → EventCurrencyEnergySpend..ctor
		   0x01433C64:  0400A0E1     MOV r0, r4
		   0x01433C68:  0010A0E3     MOV r1, 0x0
		   0x01433C6C:  B27B01EB     BL $+0x5eed0  // CALL → Analytics.SendEvent
		   // ──── Block 65 (from 2 paths) ──────────────────
		   0x01433C70:  0700A0E1     MOV r0, r7
		   0x01433C74:  F6FDFFEB     BL $-0x820
		   0x01433C78:  64419FE5     LDR r4, [pc, 0x164]
		   0x01433C7C:  04409FE7     LDR r4, [pc, r4]
		   0x01433C80:  000094E5     LDR r0, [r4]
		   0x01433C84:  741090E5     LDR r1, [r0, 0x74]
		   0x01433C88:  000051E3     CMPS r0, r1, 0x0
		   0x01433C8C:  0100001A     BNE $+0xc  // if (!=) goto 0x01433C98
		   // 
		   // ──── Block 66 else (==) ────────────────────
		   0x01433C90:  7F9DECEB     BL $-0x4d89fc
		   0x01433C94:  000094E5     LDR r0, [r4]
		   // ──── Block 67 if (!=) ────────────────────
		   0x01433C98:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433C9C:  040090E5     LDR r0, [r0, 0x4]
		   0x01433CA0:  000050E3     CMPS r0, r0, 0x0
		   0x01433CA4:  0400000A     BEQ $+0x18  // if (==) goto 0x01433CBC
		   // 
		   // ──── Block 68 else (!=) ────────────────────
		   0x01433CA8:  0C3090E5     LDR r3, [r0, 0xc]
		   0x01433CAC:  142090E5     LDR r2, [r0, 0x14]
		   0x01433CB0:  200090E5     LDR r0, [r0, 0x20]
		   0x01433CB4:  0910A0E1     MOV r1, sb
		   0x01433CB8:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   // ──── Block 69 (from 2 paths) ──────────────────
		   0x01433CBC:  3CD08DE2     ADD sp, sp, 0x3c
		   0x01433CC0:  F08FBDE8     POP {r4, r5, r6, r7, r8, sb, r10, fp, pc}
		   0x01433CC4:  FFFFFFEA     B $+0x4  // goto 0x01433CC8
		   // ──── Block 71 ──────────────────────────────
		   0x01433CC8:  010051E3     CMPS r0, r1, 0x1
		   0x01433CCC:  2500001A     BNE $+0x9c  // if (!=) goto 0x01433D68
		   // 
		   // ──── Block 72 else (==) ────────────────────
		   0x01433CD0:  7CC3EFEB     BL $-0x40f208
		   0x01433CD4:  0040A0E1     MOV r4, r0
		   0x01433CD8:  08019FE5     LDR r0, [pc, 0x108]
		   0x01433CDC:  00009FE7     LDR r0, [pc, r0]
		   0x01433CE0:  229DECEB     BL $-0x4d8b70
		   0x01433CE4:  001094E5     LDR r1, [r4]
		   0x01433CE8:  001091E5     LDR r1, [r1]
		   0x01433CEC:  D39EECEB     BL $-0x4d84ac
		   0x01433CF0:  000050E3     CMPS r0, r0, 0x0
		   0x01433CF4:  1200000A     BEQ $+0x50  // if (==) goto 0x01433D44
		   // 
		   // ──── Block 73 else (!=) ────────────────────
		   0x01433CF8:  38509DE5     LDR r5, [sp, 0x38]
		   0x01433CFC:  34008DE2     ADD r0, sp, 0x34
		   0x01433D00:  004094E5     LDR r4, [r4]
		   0x01433D04:  054180E7     STR r4, [r0, r5, lsl 2]
		   0x01433D08:  010085E2     ADD r0, r5, 0x1
		   0x01433D0C:  38008DE5     STR r0, [sp, 0x38]
		   0x01433D10:  A0C3EFEB     BL $-0x40f178
		   0x01433D14:  D0009FE5     LDR r0, [pc, 0xd0]
		   0x01433D18:  00009FE7     LDR r0, [pc, r0]
		   0x01433D1C:  139DECEB     BL $-0x4d8bac
		   0x01433D20:  741090E5     LDR r1, [r0, 0x74]
		   0x01433D24:  000051E3     CMPS r0, r1, 0x0
		   0x01433D28:  0000001A     BNE $+0x8  // if (!=) goto 0x01433D30
		   // 
		   // ──── Block 74 else (==) ────────────────────
		   0x01433D2C:  589DECEB     BL $-0x4d8a98
		   // ──── Block 75 if (!=) ────────────────────
		   0x01433D30:  0400A0E1     MOV r0, r4
		   0x01433D34:  0010A0E3     MOV r1, 0x0
		   0x01433D38:  13112FEB     BL $+0xbc4454  // CALL → sub_1FF818C
		   0x01433D3C:  38508DE5     STR r5, [sp, 0x38]
		   0x01433D40:  DDFFFFEA     B $-0x84
		   // ──── Block 76 if (==) ────────────────────
		   0x01433D44:  0400A0E3     MOV r0, 0x4
		   0x01433D48:  F7CFEFEB     BL $-0x40c01c
		   0x01433D4C:  002094E5     LDR r2, [r4]
		   0x01433D50:  98109FE5     LDR r1, [pc, 0x98]
		   0x01433D54:  002080E5     STR r2, [r0]
		   0x01433D58:  01108FE0     ADD r1, pc, r1
		   0x01433D5C:  0020A0E3     MOV r2, 0x0
		   0x01433D60:  F5CFEFEB     BL $-0x40c024
		   0x01433D64:  8BC3EFEB     BL $-0x40f1cc
		   // ──── Block 77 if (!=) ────────────────────
		   0x01433D68:  8EC3EFEB     BL $-0x40f1c0
		   0x01433D6C:  8C6FE0EB     BL $-0x7e41c8
		   0x01433D70:  C7A0DF02     SBCSEQ r10, pc, 0xc7
		   0x01433D74:  B43FC402     SBCEQ r3, r4, 0x2d0
		   0x01433D78:  7045C402     SBCEQ r4, r4, 0x1c000000
		   0x01433D7C:  A03FC402     SBCEQ r3, r4, 0x280
		   0x01433D80:  E42EC402     SBCEQ r2, r4, 0xe40
		   0x01433D84:  5C78C402     SBCEQ r7, r4, 0x5c0000
		   0x01433D88:  D410C502     SBCEQ r1, r5, 0xd4
		   0x01433D8C:  A4D7C402     SBCEQ sp, r4, 0x2900000
		   0x01433D90:  F83FC402     SBCEQ r3, r4, 0x3e0
		   0x01433D94:  503FC402     SBCEQ r3, r4, 0x140
		   0x01433D98:  A810C502     SBCEQ r1, r5, 0xa8
		   0x01433D9C:  503FC402     SBCEQ r3, r4, 0x140
		   0x01433DA0:  D855C402     SBCEQ r5, r4, 0x36000000
		   0x01433DA4:  543FC402     SBCEQ r3, r4, 0x150
		   0x01433DA8:  0410C502     SBCEQ r1, r5, 0x4
		   0x01433DAC:  E42DC402     SBCEQ r2, r4, 0x3900
		   0x01433DB0:  D444C402     SBCEQ r4, r4, 0xd4000000
		   0x01433DB4:  483EC402     SBCEQ r3, r4, 0x480
		   0x01433DB8:  103EC402     SBCEQ r3, r4, 0x100
		   0x01433DBC:  D4D5C402     SBCEQ sp, r4, 0x35000000
		   0x01433DC0:  903DC402     SBCEQ r3, r4, 0x2400
		   0x01433DC4:  A42DC402     SBCEQ r2, r4, 0x2900
		   0x01433DC8:  F83CC402     SBCEQ r3, r4, 0xf800
		   0x01433DCC:  7853C402     SBCEQ r5, r4, 0xe0000001
		   0x01433DD0:  743CC402     SBCEQ r3, r4, 0x7400
		   0x01433DD4:  F874C402     SBCEQ r7, r4, 0xf8000000
		   0x01433DD8:  3074C402     SBCEQ r7, r4, 0x30000000
		   0x01433DDC:  4473C402     SBCEQ r7, r4, 0x10000001
		   0x01433DE0:  7C0BC502     SBCEQ r0, r5, 0x1f000
		   0x01433DE4:  9072C402     SBCEQ r7, r4, 0x9
		   0x01433DE8:  102CC402     SBCEQ r2, r4, 0x1000
		   0x01433DEC:  7028C402     SBCEQ r2, r4, 0x700000
		   0x01433DF0:  0453AF02     ADCEQ r5, pc, 0x10000000
		*/
	}

	// RVA: 0x1433454 Offset: 0x1433454 VA: 0x1433454
	private void TryToStartEnergyNotification() {
		/* Disassembly (ARM32, 9 instructions, 0x24 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433454:  10402DE9     PUSH {r4, lr}
		   0x01433458:  400090E5     LDR r0, [r0, 0x40]
		   0x0143345C:  000050E3     CMPS r0, r0, 0x0
		   0x01433460:  1080BD08     POPEQ {r4, pc}
		   0x01433464:  001090E5     LDR r1, [r0]
		   0x01433468:  D82EC1E1     LDRD r2, r3, [r1, 0xe8]
		   0x0143346C:  0310A0E1     MOV r1, r3
		   0x01433470:  32FF2FE1     BLX r2
		   0x01433474:  1080BDE8     POP {r4, pc}
		*/
	}

	[IteratorStateMachine]
	// RVA: 0x1433DF4 Offset: 0x1433DF4 VA: 0x1433DF4
	private IEnumerator StartInGameTimer(int startTime) {
		/* Disassembly (ARM32, 29 instructions, 0x74 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433DF4:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01433DF8:  5C409FE5     LDR r4, [pc, 0x5c]
		   0x01433DFC:  0060A0E1     MOV r6, r0
		   0x01433E00:  0150A0E1     MOV r5, r1
		   0x01433E04:  04408FE0     ADD r4, pc, r4
		   0x01433E08:  0000D4E5     LDRB r0, [r4]
		   0x01433E0C:  000050E3     CMPS r0, r0, 0x0
		   0x01433E10:  0400001A     BNE $+0x18  // if (!=) goto 0x01433E28
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01433E14:  44009FE5     LDR r0, [pc, 0x44]
		   0x01433E18:  00009FE7     LDR r0, [pc, r0]
		   0x01433E1C:  CF9CECEB     BL $-0x4d8cbc
		   0x01433E20:  0100A0E3     MOV r0, 0x1
		   0x01433E24:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01433E28:  34009FE5     LDR r0, [pc, 0x34]
		   0x01433E2C:  00009FE7     LDR r0, [pc, r0]
		   0x01433E30:  000090E5     LDR r0, [r0]
		   0x01433E34:  629DECEB     BL $-0x4d8a70
		   0x01433E38:  0010A0E3     MOV r1, 0x0
		   0x01433E3C:  0040A0E1     MOV r4, r0
		   0x01433E40:  0070A0E3     MOV r7, 0x0
		   0x01433E44:  688571EB     BL $+0x1c615a8  // CALL → Object..ctor
		   0x01433E48:  0400A0E1     MOV r0, r4
		   0x01433E4C:  106084E5     STR r6, [r4, 0x10]
		   0x01433E50:  145084E5     STR r5, [r4, 0x14]
		   0x01433E54:  087084E5     STR r7, [r4, 0x8]
		   0x01433E58:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01433E5C:  1099DF02     SBCSEQ sb, pc, 0x40000
		   0x01433E60:  8009C502     SBCEQ r0, r5, 0x200000
		   0x01433E64:  6C09C502     SBCEQ r0, r5, 0x1b0000
		*/
	}

	// RVA: 0x1433E84 Offset: 0x1433E84 VA: 0x1433E84
	private string GetSpawnActivityVariant() {
		/* Disassembly (ARM32, 58 instructions, 0xE8 bytes):
		   // CFG: 11 blocks, 9 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433E84:  10402DE9     PUSH {r4, lr}
		   0x01433E88:  50D04DE2     SUB sp, sp, 0x50
		   0x01433E8C:  C4409FE5     LDR r4, [pc, 0xc4]
		   0x01433E90:  04408FE0     ADD r4, pc, r4
		   0x01433E94:  0000D4E5     LDRB r0, [r4]
		   0x01433E98:  000050E3     CMPS r0, r0, 0x0
		   0x01433E9C:  0700001A     BNE $+0x24  // if (!=) goto 0x01433EC0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01433EA0:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01433EA4:  00009FE7     LDR r0, [pc, r0]
		   0x01433EA8:  AC9CECEB     BL $-0x4d8d48
		   0x01433EAC:  AC009FE5     LDR r0, [pc, 0xac]
		   0x01433EB0:  00009FE7     LDR r0, [pc, r0]
		   0x01433EB4:  A99CECEB     BL $-0x4d8d54
		   0x01433EB8:  0100A0E3     MOV r0, 0x1
		   0x01433EBC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01433EC0:  0D00A0E1     MOV r0, sp
		   0x01433EC4:  5010A0E3     MOV r1, 0x50
		   0x01433EC8:  0FB8EFEB     BL $-0x411fbc
		   0x01433ECC:  90409FE5     LDR r4, [pc, 0x90]
		   0x01433ED0:  04409FE7     LDR r4, [pc, r4]
		   0x01433ED4:  000094E5     LDR r0, [r4]
		   0x01433ED8:  741090E5     LDR r1, [r0, 0x74]
		   0x01433EDC:  000051E3     CMPS r0, r1, 0x0
		   0x01433EE0:  0100001A     BNE $+0xc  // if (!=) goto 0x01433EEC
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01433EE4:  EA9CECEB     BL $-0x4d8c50
		   0x01433EE8:  000094E5     LDR r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x01433EEC:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01433EF0:  144090E5     LDR r4, [r0, 0x14]
		   0x01433EF4:  000054E3     CMPS r0, r4, 0x0
		   0x01433EF8:  0000001A     BNE $+0x8  // if (!=) goto 0x01433F00
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x01433EFC:  339DECEB     BL $-0x4d8b2c
		   // ──── Block 6 if (!=) ────────────────────
		   0x01433F00:  0C2094E5     LDR r2, [r4, 0xc]
		   0x01433F04:  141094E5     LDR r1, [r4, 0x14]
		   0x01433F08:  200094E5     LDR r0, [r4, 0x20]
		   0x01433F0C:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   0x01433F10:  000050E3     CMPS r0, r0, 0x0
		   0x01433F14:  0810D015     LDRBNE r1, [r0, 0x8]
		   0x01433F18:  00005113     CMPSNE r0, r1, 0x0
		   0x01433F1C:  0300001A     BNE $+0x14  // if (!=) goto 0x01433F30
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01433F20:  40009FE5     LDR r0, [pc, 0x40]
		   0x01433F24:  00009FE7     LDR r0, [pc, r0]
		   0x01433F28:  000090E5     LDR r0, [r0]
		   0x01433F2C:  070000EA     B $+0x24  // goto 0x01433F50
		   // ──── Block 8 if (!=) ────────────────────
		   0x01433F30:  101080E2     ADD r1, r0, 0x10
		   0x01433F34:  0D40A0E1     MOV r4, sp
		   0x01433F38:  0400A0E1     MOV r0, r4
		   0x01433F3C:  5020A0E3     MOV r2, 0x50
		   0x01433F40:  ECB7EFEB     BL $-0x412048
		   0x01433F44:  0400A0E1     MOV r0, r4
		   0x01433F48:  0010A0E3     MOV r1, 0x0
		   0x01433F4C:  3DA104EB     BL $+0x1284fc  // CALL → Activity.get_Variant
		   // ──── Block 9 ──────────────────────────────
		   0x01433F50:  50D08DE2     ADD sp, sp, 0x50
		   0x01433F54:  1080BDE8     POP {r4, pc}
		   0x01433F58:  8598DF02     SBCSEQ sb, pc, 0x850000
		   0x01433F5C:  6870C402     SBCEQ r7, r4, 0x68
		   0x01433F60:  902BC402     SBCEQ r2, r4, 0x24000
		   0x01433F64:  3C70C402     SBCEQ r7, r4, 0x3c
		   0x01433F68:  1C2BC402     SBCEQ r2, r4, 0x7000
		*/
	}

	// RVA: 0x1433F6C Offset: 0x1433F6C VA: 0x1433F6C
	private void OnUnpause() {
		/* Disassembly (ARM32, 4 instructions, 0x10 bytes):
		   // CFG: 2 blocks, 0 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433F6C:  2C10D0E5     LDRB r1, [r0, 0x2c]
		   0x01433F70:  000051E3     CMPS r0, r1, 0x0
		   0x01433F74:  1EFF2F01     BXEQ lr
		   0x01433F78:  1CFAFFEA     B $-0x1788
		*/
	}

	// RVA: 0x14327F0 Offset: 0x14327F0 VA: 0x14327F0
	private void RestoreTimerAndEnergy() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014327F0:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		*/
	}

	// RVA: 0x1433F7C Offset: 0x1433F7C VA: 0x1433F7C
	private static bool GetTimer(out Timer timer) {
		/* Disassembly (ARM32, 47 instructions, 0xBC bytes):
		   // CFG: 5 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433F7C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01433F80:  10D04DE2     SUB sp, sp, 0x10
		   0x01433F84:  08519FE5     LDR r5, [pc, 0x108]
		   0x01433F88:  0040A0E1     MOV r4, r0
		   0x01433F8C:  05508FE0     ADD r5, pc, r5
		   0x01433F90:  0000D5E5     LDRB r0, [r5]
		   0x01433F94:  000050E3     CMPS r0, r0, 0x0
		   0x01433F98:  0D00001A     BNE $+0x3c  // if (!=) goto 0x01433FD4
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01433F9C:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01433FA0:  00009FE7     LDR r0, [pc, r0]
		   0x01433FA4:  6D9CECEB     BL $-0x4d8e44
		   0x01433FA8:  EC009FE5     LDR r0, [pc, 0xec]
		   0x01433FAC:  00009FE7     LDR r0, [pc, r0]
		   0x01433FB0:  6A9CECEB     BL $-0x4d8e50
		   0x01433FB4:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x01433FB8:  00009FE7     LDR r0, [pc, r0]
		   0x01433FBC:  679CECEB     BL $-0x4d8e5c
		   0x01433FC0:  DC009FE5     LDR r0, [pc, 0xdc]
		   0x01433FC4:  00009FE7     LDR r0, [pc, r0]
		   0x01433FC8:  649CECEB     BL $-0x4d8e68
		   0x01433FCC:  0100A0E3     MOV r0, 0x1
		   0x01433FD0:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01433FD4:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01433FD8:  00009FE7     LDR r0, [pc, r0]
		   0x01433FDC:  481090E5     LDR r1, [r0, 0x48]
		   0x01433FE0:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x01433FE4:  00009FE7     LDR r0, [pc, r0]
		   0x01433FE8:  5C1091E5     LDR r1, [r1, 0x5c]
		   0x01433FEC:  000090E5     LDR r0, [r0]
		   0x01433FF0:  005091E5     LDR r5, [r1]
		   0x01433FF4:  742090E5     LDR r2, [r0, 0x74]
		   0x01433FF8:  000052E3     CMPS r0, r2, 0x0
		   0x01433FFC:  0000001A     BNE $+0x8  // if (!=) goto 0x01434004
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01434000:  A39CECEB     BL $-0x4d8d6c
		   // ──── Block 4 if (!=) ────────────────────
		   0x01434004:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01434008:  0010A0E3     MOV r1, 0x0
		   0x0143400C:  0520A0E1     MOV r2, r5
		   0x01434010:  0030A0E3     MOV r3, 0x0
		   0x01434014:  00009FE7     LDR r0, [pc, r0]
		   0x01434018:  000090E5     LDR r0, [r0]
		   0x0143401C:  D956F1EB     BL $-0x3aa494
		   0x01434020:  0010A0E3     MOV r1, 0x0
		   0x01434024:  0060A0E1     MOV r6, r0
		   0x01434028:  F29069EB     BL $+0x1a643d0  // CALL → String.IsNullOrEmpty
		   0x0143402C:  0050A0E1     MOV r5, r0
		   0x01434030:  000050E3     CMPS r0, r0, 0x0
		   0x01434034:  0200000A     BEQ $+0x10
		*/
	}

	// RVA: 0x14340BC Offset: 0x14340BC VA: 0x14340BC
	private static void SetTimer(int elapsedSeconds = 0) {
		/* Disassembly (ARM32, 26 instructions, 0x68 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014340BC:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014340C0:  30D04DE2     SUB sp, sp, 0x30
		   0x014340C4:  74519FE5     LDR r5, [pc, 0x174]
		   0x014340C8:  0040A0E1     MOV r4, r0
		   0x014340CC:  05508FE0     ADD r5, pc, r5
		   0x014340D0:  0000D5E5     LDRB r0, [r5]
		   0x014340D4:  000050E3     CMPS r0, r0, 0x0
		   0x014340D8:  1000001A     BNE $+0x48  // if (!=) goto 0x01434120
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014340DC:  60019FE5     LDR r0, [pc, 0x160]
		   0x014340E0:  00009FE7     LDR r0, [pc, r0]
		   0x014340E4:  1D9CECEB     BL $-0x4d8f84
		   0x014340E8:  58019FE5     LDR r0, [pc, 0x158]
		   0x014340EC:  00009FE7     LDR r0, [pc, r0]
		   0x014340F0:  1A9CECEB     BL $-0x4d8f90
		   0x014340F4:  50019FE5     LDR r0, [pc, 0x150]
		   0x014340F8:  00009FE7     LDR r0, [pc, r0]
		   0x014340FC:  179CECEB     BL $-0x4d8f9c
		   0x01434100:  48019FE5     LDR r0, [pc, 0x148]
		   0x01434104:  00009FE7     LDR r0, [pc, r0]
		   0x01434108:  149CECEB     BL $-0x4d8fa8
		   0x0143410C:  40019FE5     LDR r0, [pc, 0x140]
		   0x01434110:  00009FE7     LDR r0, [pc, r0]
		   0x01434114:  119CECEB     BL $-0x4d8fb4
		   0x01434118:  0100A0E3     MOV r0, 0x1
		   0x0143411C:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01434120:  30019FE5     LDR r0, [pc, 0x130]
		*/
	}

	// RVA: 0x14333C8 Offset: 0x14333C8 VA: 0x14333C8
	private static void CancelTimer() {
		/* Disassembly (ARM32, 35 instructions, 0x8C bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014333C8:  10402DE9     PUSH {r4, lr}
		   0x014333CC:  6C409FE5     LDR r4, [pc, 0x6c]
		   0x014333D0:  04408FE0     ADD r4, pc, r4
		   0x014333D4:  0000D4E5     LDRB r0, [r4]
		   0x014333D8:  000050E3     CMPS r0, r0, 0x0
		   0x014333DC:  0700001A     BNE $+0x24  // if (!=) goto 0x01433400
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014333E0:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x014333E4:  00009FE7     LDR r0, [pc, r0]
		   0x014333E8:  5C9FECEB     BL $-0x4d8288
		   0x014333EC:  54009FE5     LDR r0, [pc, 0x54]
		   0x014333F0:  00009FE7     LDR r0, [pc, r0]
		   0x014333F4:  599FECEB     BL $-0x4d8294
		   0x014333F8:  0100A0E3     MOV r0, 0x1
		   0x014333FC:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01433400:  44009FE5     LDR r0, [pc, 0x44]
		   0x01433404:  00009FE7     LDR r0, [pc, r0]
		   0x01433408:  000090E5     LDR r0, [r0]
		   0x0143340C:  741090E5     LDR r1, [r0, 0x74]
		   0x01433410:  000051E3     CMPS r0, r1, 0x0
		   0x01433414:  0000001A     BNE $+0x8  // if (!=) goto 0x0143341C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01433418:  9D9FECEB     BL $-0x4d8184
		   // ──── Block 4 if (!=) ────────────────────
		   0x0143341C:  2C009FE5     LDR r0, [pc, 0x2c]
		   0x01433420:  0010A0E3     MOV r1, 0x0
		   0x01433424:  00009FE7     LDR r0, [pc, r0]
		   0x01433428:  000090E5     LDR r0, [r0]
		   0x0143342C:  F59EF1EB     BL $-0x398424
		   0x01433430:  0000A0E3     MOV r0, 0x0
		   0x01433434:  0010A0E3     MOV r1, 0x0
		   0x01433438:  1040BDE8     POP {r4, lr}
		   0x0143343C:  595BF1EA     B $-0x3a9294
		   0x01433440:  49A3DF02     SBCSEQ r10, pc, 0x24000001
		   0x01433444:  5442C402     SBCEQ r4, r4, 0x40000005
		   0x01433448:  9C13C502     SBCEQ r1, r5, 0x70000002
		   0x0143344C:  3442C402     SBCEQ r4, r4, 0x40000003
		   0x01433450:  6813C502     SBCEQ r1, r5, 0xa0000001
		*/
	}

	// RVA: 0x143426C Offset: 0x143426C VA: 0x143426C
	private void OnDestroy() {
		/* Disassembly (ARM32, 80 instructions, 0x140 bytes):
		   // CFG: 14 blocks, 12 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0143426C:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x01434270:  10519FE5     LDR r5, [pc, 0x110]
		   0x01434274:  0040A0E1     MOV r4, r0
		   0x01434278:  05508FE0     ADD r5, pc, r5
		   0x0143427C:  0000D5E5     LDRB r0, [r5]
		   0x01434280:  000050E3     CMPS r0, r0, 0x0
		   0x01434284:  0D00001A     BNE $+0x3c  // if (!=) goto 0x014342C0
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01434288:  FC009FE5     LDR r0, [pc, 0xfc]
		   0x0143428C:  00009FE7     LDR r0, [pc, r0]
		   0x01434290:  B29BECEB     BL $-0x4d9130
		   0x01434294:  F4009FE5     LDR r0, [pc, 0xf4]
		   0x01434298:  00009FE7     LDR r0, [pc, r0]
		   0x0143429C:  AF9BECEB     BL $-0x4d913c
		   0x014342A0:  EC009FE5     LDR r0, [pc, 0xec]
		   0x014342A4:  00009FE7     LDR r0, [pc, r0]
		   0x014342A8:  AC9BECEB     BL $-0x4d9148
		   0x014342AC:  E4009FE5     LDR r0, [pc, 0xe4]
		   0x014342B0:  00009FE7     LDR r0, [pc, r0]
		   0x014342B4:  A99BECEB     BL $-0x4d9154
		   0x014342B8:  0100A0E3     MOV r0, 0x1
		   0x014342BC:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014342C0:  440094E5     LDR r0, [r4, 0x44]
		   0x014342C4:  000050E3     CMPS r0, r0, 0x0
		   0x014342C8:  0100000A     BEQ $+0xc  // if (==) goto 0x014342D4
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x014342CC:  0010A0E3     MOV r1, 0x0
		   0x014342D0:  4B9001EB     BL $+0x64134  // CALL → EnergySpendBatchReporter.Stop
		   // ──── Block 4 if (==) ────────────────────
		   0x014342D4:  C0709FE5     LDR r7, [pc, 0xc0]
		   0x014342D8:  07709FE7     LDR r7, [pc, r7]
		   0x014342DC:  000097E5     LDR r0, [r7]
		   0x014342E0:  741090E5     LDR r1, [r0, 0x74]
		   0x014342E4:  000051E3     CMPS r0, r1, 0x0
		   0x014342E8:  0100001A     BNE $+0xc  // if (!=) goto 0x014342F4
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x014342EC:  E89BECEB     BL $-0x4d9058
		   0x014342F0:  000097E5     LDR r0, [r7]
		   // ──── Block 6 if (!=) ────────────────────
		   0x014342F4:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x014342F8:  A0009FE5     LDR r0, [pc, 0xa0]
		   0x014342FC:  00009FE7     LDR r0, [pc, r0]
		   0x01434300:  105091E5     LDR r5, [r1, 0x10]
		   0x01434304:  000090E5     LDR r0, [r0]
		   0x01434308:  2D9CECEB     BL $-0x4d8f44
		   0x0143430C:  0060A0E1     MOV r6, r0
		   0x01434310:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x01434314:  0410A0E1     MOV r1, r4
		   0x01434318:  0030A0E3     MOV r3, 0x0
		   0x0143431C:  00009FE7     LDR r0, [pc, r0]
		   0x01434320:  002090E5     LDR r2, [r0]
		   0x01434324:  0600A0E1     MOV r0, r6
		   0x01434328:  05E46DEB     BL $+0x1b7901c  // CALL → Action..ctor
		   0x0143432C:  000055E3     CMPS r0, r5, 0x0
		   0x01434330:  0000001A     BNE $+0x8  // if (!=) goto 0x01434338
		   // 
		   // ──── Block 7 else (==) ────────────────────
		   0x01434334:  259CECEB     BL $-0x4d8f64
		   // ──── Block 8 if (!=) ────────────────────
		   0x01434338:  68009FE5     LDR r0, [pc, 0x68]
		   0x0143433C:  0610A0E1     MOV r1, r6
		   0x01434340:  00009FE7     LDR r0, [pc, r0]
		   0x01434344:  002090E5     LDR r2, [r0]
		   0x01434348:  0500A0E1     MOV r0, r5
		   0x0143434C:  04B252EB     BL $+0x14ac818  // CALL → UnityEventsHelper.EventList<object>.Remove
		   0x01434350:  285094E5     LDR r5, [r4, 0x28]
		   0x01434354:  000055E3     CMPS r0, r5, 0x0
		   0x01434358:  0900000A     BEQ $+0x2c  // if (==) goto 0x01434384
		   // 
		   // ──── Block 9 else (!=) ────────────────────
		   0x0143435C:  000097E5     LDR r0, [r7]
		   0x01434360:  741090E5     LDR r1, [r0, 0x74]
		   0x01434364:  000051E3     CMPS r0, r1, 0x0
		   0x01434368:  0000001A     BNE $+0x8  // if (!=) goto 0x01434370
		   // 
		   // ──── Block 10 else (==) ────────────────────
		   0x0143436C:  C89BECEB     BL $-0x4d90d8
		   // ──── Block 11 if (!=) ────────────────────
		   0x01434370:  0500A0E1     MOV r0, r5
		   0x01434374:  0010A0E3     MOV r1, 0x0
		   0x01434378:  0060A0E3     MOV r6, 0x0
		   0x0143437C:  254F79EB     BL $+0x1e53c9c  // CALL → UnityEventsHelper.StopCoroutine
		   0x01434380:  286084E5     STR r6, [r4, 0x28]
		   // ──── Block 12 if (==) ────────────────────
		   0x01434384:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01434388:  A294DF02     SBCSEQ sb, pc, 0xa2000000
		   0x0143438C:  3826C402     SBCEQ r2, r4, 0x3800000
		   0x01434390:  D404C502     SBCEQ r0, r5, 0xd4000000
		   0x01434394:  C44BC402     SBCEQ r4, r4, 0x31000
		   0x01434398:  8033C402     SBCEQ r3, r4, 0x2
		   0x0143439C:  5833C402     SBCEQ r3, r4, 0x60000001
		   0x014343A0:  C825C402     SBCEQ r2, r4, 0x32000000
		   0x014343A4:  5004C502     SBCEQ r0, r5, 0x50000000
		   0x014343A8:  284BC402     SBCEQ r4, r4, 0xa000
		*/
	}

	// RVA: 0x1433514 Offset: 0x1433514 VA: 0x1433514
	private void Save() {
		/* Disassembly (ARM32, 72 instructions, 0x120 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01433514:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01433518:  E8509FE5     LDR r5, [pc, 0xe8]
		   0x0143351C:  0040A0E1     MOV r4, r0
		   0x01433520:  05508FE0     ADD r5, pc, r5
		   0x01433524:  0000D5E5     LDRB r0, [r5]
		   0x01433528:  000050E3     CMPS r0, r0, 0x0
		   0x0143352C:  1000001A     BNE $+0x48  // if (!=) goto 0x01433574
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01433530:  D4009FE5     LDR r0, [pc, 0xd4]
		   0x01433534:  00009FE7     LDR r0, [pc, r0]
		   0x01433538:  089FECEB     BL $-0x4d83d8
		   0x0143353C:  CC009FE5     LDR r0, [pc, 0xcc]
		   0x01433540:  00009FE7     LDR r0, [pc, r0]
		   0x01433544:  059FECEB     BL $-0x4d83e4
		   0x01433548:  C4009FE5     LDR r0, [pc, 0xc4]
		   0x0143354C:  00009FE7     LDR r0, [pc, r0]
		   0x01433550:  029FECEB     BL $-0x4d83f0
		   0x01433554:  BC009FE5     LDR r0, [pc, 0xbc]
		   0x01433558:  00009FE7     LDR r0, [pc, r0]
		   0x0143355C:  FF9EECEB     BL $-0x4d83fc
		   0x01433560:  B4009FE5     LDR r0, [pc, 0xb4]
		   0x01433564:  00009FE7     LDR r0, [pc, r0]
		   0x01433568:  FC9EECEB     BL $-0x4d8408
		   0x0143356C:  0100A0E3     MOV r0, 0x1
		   0x01433570:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01433574:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01433578:  00009FE7     LDR r0, [pc, r0]
		   0x0143357C:  305094E5     LDR r5, [r4, 0x30]
		   0x01433580:  000090E5     LDR r0, [r0]
		   0x01433584:  741090E5     LDR r1, [r0, 0x74]
		   0x01433588:  000051E3     CMPS r0, r1, 0x0
		   0x0143358C:  0000001A     BNE $+0x8  // if (!=) goto 0x01433594
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01433590:  3F9FECEB     BL $-0x4d82fc
		   // ──── Block 4 if (!=) ────────────────────
		   0x01433594:  88009FE5     LDR r0, [pc, 0x88]
		   0x01433598:  0510A0E1     MOV r1, r5
		   0x0143359C:  0020A0E3     MOV r2, 0x0
		   0x014335A0:  0030A0E3     MOV r3, 0x0
		   0x014335A4:  00009FE7     LDR r0, [pc, r0]
		   0x014335A8:  000090E5     LDR r0, [r0]
		   0x014335AC:  5545F1EB     BL $-0x3aeaa4
		   0x014335B0:  70009FE5     LDR r0, [pc, 0x70]
		   0x014335B4:  0020A0E3     MOV r2, 0x0
		   0x014335B8:  0030A0E3     MOV r3, 0x0
		   0x014335BC:  00009FE7     LDR r0, [pc, r0]
		   0x014335C0:  341094E5     LDR r1, [r4, 0x34]
		   0x014335C4:  000090E5     LDR r0, [r0]
		   0x014335C8:  4E45F1EB     BL $-0x3aeac0
		   0x014335CC:  58009FE5     LDR r0, [pc, 0x58]
		   0x014335D0:  0020A0E3     MOV r2, 0x0
		   0x014335D4:  0030A0E3     MOV r3, 0x0
		   0x014335D8:  00009FE7     LDR r0, [pc, r0]
		   0x014335DC:  381094E5     LDR r1, [r4, 0x38]
		   0x014335E0:  000090E5     LDR r0, [r0]
		   0x014335E4:  4745F1EB     BL $-0x3aeadc
		   0x014335E8:  40009FE5     LDR r0, [pc, 0x40]
		   0x014335EC:  0020A0E3     MOV r2, 0x0
		   0x014335F0:  0030A0E3     MOV r3, 0x0
		   0x014335F4:  00009FE7     LDR r0, [pc, r0]
		   0x014335F8:  3C1094E5     LDR r1, [r4, 0x3c]
		   0x014335FC:  000090E5     LDR r0, [r0]
		   0x01433600:  3048BDE8     POP {r4, r5, fp, lr}
		   0x01433604:  3F45F1EA     B $-0x3aeafc
		   0x01433608:  FBA1DF02     SBCSEQ r10, pc, 0xc000003e
		   0x0143360C:  0441C402     SBCEQ r4, r4, 0x1
		   0x01433610:  F0D7C402     SBCEQ sp, r4, 0x3c00000
		   0x01433614:  2C12C502     SBCEQ r1, r5, 0xc0000002
		   0x01433618:  2412C502     SBCEQ r1, r5, 0x40000002
		   0x0143361C:  C0D8C402     SBCEQ sp, r4, 0xc00000
		   0x01433620:  C040C402     SBCEQ r4, r4, 0xc0
		   0x01433624:  80D8C402     SBCEQ sp, r4, 0x800000
		   0x01433628:  C011C502     SBCEQ r1, r5, 0x30
		   0x0143362C:  58D7C402     SBCEQ sp, r4, 0x1600000
		   0x01433630:  8411C502     SBCEQ r1, r5, 0x21
		*/
	}

	// RVA: 0x14343AC Offset: 0x14343AC VA: 0x14343AC
	public void .ctor() {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014343AC:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x014343B0:  58509FE5     LDR r5, [pc, 0x58]
		   0x014343B4:  0040A0E1     MOV r4, r0
		   0x014343B8:  05508FE0     ADD r5, pc, r5
		   0x014343BC:  0000D5E5     LDRB r0, [r5]
		   0x014343C0:  000050E3     CMPS r0, r0, 0x0
		   0x014343C4:  0400001A     BNE $+0x18  // if (!=) goto 0x014343DC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014343C8:  44009FE5     LDR r0, [pc, 0x44]
		   0x014343CC:  00009FE7     LDR r0, [pc, r0]
		   0x014343D0:  629BECEB     BL $-0x4d9270
		   0x014343D4:  0100A0E3     MOV r0, 0x1
		   0x014343D8:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014343DC:  34009FE5     LDR r0, [pc, 0x34]
		   0x014343E0:  00009FE7     LDR r0, [pc, r0]
		   0x014343E4:  000090E5     LDR r0, [r0]
		   0x014343E8:  F59BECEB     BL $-0x4d9024
		   0x014343EC:  FE15A0E3     MOV r1, 0x3f800000
		   0x014343F0:  0020A0E3     MOV r2, 0x0
		   0x014343F4:  0050A0E1     MOV r5, r0
		   0x014343F8:  910F2FEB     BL $+0xbc3e4c  // CALL → sub_1FF8244
		   0x014343FC:  245084E5     STR r5, [r4, 0x24]
		   0x01434400:  0400A0E1     MOV r0, r4
		   0x01434404:  0010A0E3     MOV r1, 0x0
		   0x01434408:  3048BDE8     POP {r4, r5, fp, lr}
		   0x0143440C:  A50E2FEA     B $+0xbc3a9c
		   0x01434410:  6493DF02     SBCSEQ sb, pc, 0x90000001
		   0x01434414:  3045C402     SBCEQ r4, r4, 0xc000000
		   0x01434418:  1C45C402     SBCEQ r4, r4, 0x7000000
		*/
	}

	// RVA: 0x143441C Offset: 0x143441C VA: 0x143441C
	private static void .cctor() {
		/* Disassembly (ARM32, 57 instructions, 0xE4 bytes):
		   // CFG: 6 blocks, 4 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0143441C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01434420:  B4409FE5     LDR r4, [pc, 0xb4]
		   0x01434424:  04408FE0     ADD r4, pc, r4
		   0x01434428:  0000D4E5     LDRB r0, [r4]
		   0x0143442C:  000050E3     CMPS r0, r0, 0x0
		   0x01434430:  0D00001A     BNE $+0x3c  // if (!=) goto 0x0143446C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01434434:  A4009FE5     LDR r0, [pc, 0xa4]
		   0x01434438:  00009FE7     LDR r0, [pc, r0]
		   0x0143443C:  479BECEB     BL $-0x4d92dc
		   0x01434440:  9C009FE5     LDR r0, [pc, 0x9c]
		   0x01434444:  00009FE7     LDR r0, [pc, r0]
		   0x01434448:  449BECEB     BL $-0x4d92e8
		   0x0143444C:  94009FE5     LDR r0, [pc, 0x94]
		   0x01434450:  00009FE7     LDR r0, [pc, r0]
		   0x01434454:  419BECEB     BL $-0x4d92f4
		   0x01434458:  8C009FE5     LDR r0, [pc, 0x8c]
		   0x0143445C:  00009FE7     LDR r0, [pc, r0]
		   0x01434460:  3E9BECEB     BL $-0x4d9300
		   0x01434464:  0100A0E3     MOV r0, 0x1
		   0x01434468:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143446C:  7C409FE5     LDR r4, [pc, 0x7c]
		   0x01434470:  04409FE7     LDR r4, [pc, r4]
		   0x01434474:  000094E5     LDR r0, [r4]
		   0x01434478:  741090E5     LDR r1, [r0, 0x74]
		   0x0143447C:  000051E3     CMPS r0, r1, 0x0
		   0x01434480:  0100001A     BNE $+0xc  // if (!=) goto 0x0143448C
		   // 
		   // ──── Block 3 else (==) ────────────────────
		   0x01434484:  829BECEB     BL $-0x4d91f0
		   0x01434488:  000094E5     LDR r0, [r4]
		   // ──── Block 4 if (!=) ────────────────────
		   0x0143448C:  5C1090E5     LDR r1, [r0, 0x5c]
		   0x01434490:  5C009FE5     LDR r0, [pc, 0x5c]
		   0x01434494:  00009FE7     LDR r0, [pc, r0]
		   0x01434498:  004091E5     LDR r4, [r1]
		   0x0143449C:  000090E5     LDR r0, [r0]
		   0x014344A0:  C79BECEB     BL $-0x4d90dc
		   0x014344A4:  0050A0E1     MOV r5, r0
		   0x014344A8:  48009FE5     LDR r0, [pc, 0x48]
		   0x014344AC:  0410A0E1     MOV r1, r4
		   0x014344B0:  0030A0E3     MOV r3, 0x0
		   0x014344B4:  00009FE7     LDR r0, [pc, r0]
		   0x014344B8:  002090E5     LDR r2, [r0]
		   0x014344BC:  0500A0E1     MOV r0, r5
		   0x014344C0:  41D753EB     BL $+0x14f5d0c  // CALL → Func<object>..ctor
		   0x014344C4:  30009FE5     LDR r0, [pc, 0x30]
		   0x014344C8:  00009FE7     LDR r0, [pc, r0]
		   0x014344CC:  000090E5     LDR r0, [r0]
		   0x014344D0:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x014344D4:  145080E5     STR r5, [r0, 0x14]
		   0x014344D8:  3088BDE8     POP {r4, r5, fp, pc}
		   0x014344DC:  F992DF02     SBCSEQ sb, pc, 0x9000000f
		   0x014344E0:  D46AC402     SBCEQ r6, r4, 0xd4000
		   0x014344E4:  C0FEC402     SBCEQ pc, r4, 0xc00
		   0x014344E8:  4C03C502     SBCEQ r0, r5, 0x30000001
		   0x014344EC:  0003C502     SBCEQ r0, r5, 0x0
		   0x014344F0:  EC02C502     SBCEQ r0, r5, 0xc000000e
		   0x014344F4:  70FEC402     SBCEQ pc, r4, 0x700
		   0x014344F8:  E802C502     SBCEQ r0, r5, 0x8000000e
		   0x014344FC:  446AC402     SBCEQ r6, r4, 0x44000
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1434500 Offset: 0x1434500 VA: 0x1434500
	private int <Init>b__53_0() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01434500:  200090E5     LDR r0, [r0, 0x20]
		   0x01434504:  1EFF2FE1     BX lr
		*/
	}

	[CompilerGenerated]
	// RVA: 0x1434508 Offset: 0x1434508 VA: 0x1434508
	private int <Init>b__53_1() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01434508:  300090E5     LDR r0, [r0, 0x30]
		   0x0143450C:  1EFF2FE1     BX lr
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
[Serializable]
private sealed class <>c // TypeDefIndex: 3499
{

	// Fields
	public static readonly EnergySystem.<>c <>9; // 0x0
	public static Func<CurrentOpenedActivity> <>9__52_0; // 0x4

	// Methods

	// RVA: 0x1434510 Offset: 0x1434510 VA: 0x1434510
	private static void .cctor() {
		/* Disassembly (ARM32, 25 instructions, 0x64 bytes):
		   // CFG: 4 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01434510:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01434514:  4C409FE5     LDR r4, [pc, 0x4c]
		   0x01434518:  04408FE0     ADD r4, pc, r4
		   0x0143451C:  0000D4E5     LDRB r0, [r4]
		   0x01434520:  000050E3     CMPS r0, r0, 0x0
		   0x01434524:  0400001A     BNE $+0x18  // if (!=) goto 0x0143453C
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01434528:  3C009FE5     LDR r0, [pc, 0x3c]
		   0x0143452C:  00009FE7     LDR r0, [pc, r0]
		   0x01434530:  0A9BECEB     BL $-0x4d93d0
		   0x01434534:  0100A0E3     MOV r0, 0x1
		   0x01434538:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x0143453C:  2C509FE5     LDR r5, [pc, 0x2c]
		   0x01434540:  05509FE7     LDR r5, [pc, r5]
		   0x01434544:  000095E5     LDR r0, [r5]
		   0x01434548:  9D9BECEB     BL $-0x4d9184
		   0x0143454C:  0010A0E3     MOV r1, 0x0
		   0x01434550:  0040A0E1     MOV r4, r0
		   0x01434554:  A48371EB     BL $+0x1c60e98  // CALL → Object..ctor
		   0x01434558:  000095E5     LDR r0, [r5]
		   0x0143455C:  5C0090E5     LDR r0, [r0, 0x5c]
		   0x01434560:  004080E5     STR r4, [r0]
		   0x01434564:  3088BDE8     POP {r4, r5, fp, pc}
		   0x01434568:  0692DF02     SBCSEQ sb, pc, 0x60000000
		   0x0143456C:  3002C502     SBCEQ r0, r5, 0x3
		   0x01434570:  1C02C502     SBCEQ r0, r5, 0xc0000001
		*/
	}

	// RVA: 0x1434574 Offset: 0x1434574 VA: 0x1434574
	public void .ctor() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01434574:  0010A0E3     MOV r1, 0x0
		   0x01434578:  9B8371EA     B $+0x1c60e74  // TAIL CALL → Object..ctor
		*/
	}

	// RVA: 0x143457C Offset: 0x143457C VA: 0x143457C
	internal CurrentOpenedActivity <UnsubscribeAll>b__52_0() {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x0143457C:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01434580:  A0D04DE2     SUB sp, sp, 0xa0
		   0x01434584:  88409FE5     LDR r4, [pc, 0x88]
		   0x01434588:  04408FE0     ADD r4, pc, r4
		   0x0143458C:  0000D4E5     LDRB r0, [r4]
		   0x01434590:  000050E3     CMPS r0, r0, 0x0
		   0x01434594:  0400001A     BNE $+0x18  // if (!=) goto 0x014345AC
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x01434598:  78009FE5     LDR r0, [pc, 0x78]
		   0x0143459C:  00009FE7     LDR r0, [pc, r0]
		   0x014345A0:  EE9AECEB     BL $-0x4d9440
		   0x014345A4:  0100A0E3     MOV r0, 0x1
		   0x014345A8:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x014345AC:  50508DE2     ADD r5, sp, 0x50
		   0x014345B0:  5010A0E3     MOV r1, 0x50
		   0x014345B4:  0500A0E1     MOV r0, r5
		   0x014345B8:  53B6EFEB     BL $-0x4126ac
		   0x014345BC:  58009FE5     LDR r0, [pc, 0x58]
		   0x014345C0:  00009FE7     LDR r0, [pc, r0]
		   0x014345C4:  000090E5     LDR r0, [r0]
		   0x014345C8:  7D9BECEB     BL $-0x4d9204
		   0x014345CC:  0040A0E1     MOV r4, r0
		   0x014345D0:  0000A0E3     MOV r0, 0x0
		   0x014345D4:  50209DE5     LDR r2, [sp, 0x50]
		   0x014345D8:  481000E3     MOV r1, 0x48
		   0x014345DC:  54309DE5     LDR r3, [sp, 0x54]
		   0x014345E0:  48008DE5     STR r0, [sp, 0x48]
		   0x014345E4:  080085E2     ADD r0, r5, 0x8
		   0x014345E8:  0D50A0E1     MOV r5, sp
		*/
	}

	// RVA: 0x1434620 Offset: 0x1434620 VA: 0x1434620
	internal CurrentOpenedActivity <.cctor>b__71_0() {
		/* Disassembly (ARM32, 28 instructions, 0x70 bytes):
		   // CFG: 3 blocks, 2 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x01434620:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01434624:  A0D04DE2     SUB sp, sp, 0xa0
		   0x01434628:  88409FE5     LDR r4, [pc, 0x88]
		   0x0143462C:  04408FE0     ADD r4, pc, r4
		   0x01434630:  0000D4E5     LDRB r0, [r4]
		   0x01434634:  000050E3     CMPS r0, r0, 0x0
		   0x01434638:  0400001A     BNE $+0x18  // if (!=) goto 0x01434650
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x0143463C:  78009FE5     LDR r0, [pc, 0x78]
		   0x01434640:  00009FE7     LDR r0, [pc, r0]
		   0x01434644:  C59AECEB     BL $-0x4d94e4
		   0x01434648:  0100A0E3     MOV r0, 0x1
		   0x0143464C:  0000C4E5     STRB r0, [r4]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01434650:  50508DE2     ADD r5, sp, 0x50
		   0x01434654:  5010A0E3     MOV r1, 0x50
		   0x01434658:  0500A0E1     MOV r0, r5
		   0x0143465C:  2AB6EFEB     BL $-0x412750
		   0x01434660:  58009FE5     LDR r0, [pc, 0x58]
		   0x01434664:  00009FE7     LDR r0, [pc, r0]
		   0x01434668:  000090E5     LDR r0, [r0]
		   0x0143466C:  549BECEB     BL $-0x4d92a8
		   0x01434670:  0040A0E1     MOV r4, r0
		   0x01434674:  0000A0E3     MOV r0, 0x0
		   0x01434678:  50209DE5     LDR r2, [sp, 0x50]
		   0x0143467C:  481000E3     MOV r1, 0x48
		   0x01434680:  54309DE5     LDR r3, [sp, 0x54]
		   0x01434684:  48008DE5     STR r0, [sp, 0x48]
		   0x01434688:  080085E2     ADD r0, r5, 0x8
		   0x0143468C:  0D50A0E1     MOV r5, sp
		*/
	}
}

// Dll : Assembly-CSharp.dll
// Namespace: 
[CompilerGenerated]
private sealed class <StartInGameTimer>d__61 : IEnumerator<object>, IEnumerator, IDisposable // TypeDefIndex: 3500
{

	// Fields
	private int <>1__state; // 0x8
	private object <>2__current; // 0xC
	public EnergySystem <>4__this; // 0x10
	public int startTime; // 0x14

	// Properties
	private object System.Collections.Generic.IEnumerator<System.Object>.Current { get; }
	private object System.Collections.IEnumerator.Current { get; }

	// Methods

	[DebuggerHidden]
	// RVA: 0x1433E68 Offset: 0x1433E68 VA: 0x1433E68
	public void .ctor(int <>1__state) {
		/* Disassembly (ARM32, 7 instructions, 0x1C bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01433E68:  30482DE9     PUSH {r4, r5, fp, lr}
		   0x01433E6C:  0140A0E1     MOV r4, r1
		   0x01433E70:  0010A0E3     MOV r1, 0x0
		   0x01433E74:  0050A0E1     MOV r5, r0
		   0x01433E78:  5B8571EB     BL $+0x1c61574  // CALL → Object..ctor
		   0x01433E7C:  084085E5     STR r4, [r5, 0x8]
		   0x01433E80:  3088BDE8     POP {r4, r5, fp, pc}
		*/
	}

	[DebuggerHidden]
	// RVA: 0x14346C4 Offset: 0x14346C4 VA: 0x14346C4 Slot: 5
	private void System.IDisposable.Dispose() {
		/* Disassembly (ARM32, 1 instructions, 0x4 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014346C4:  1EFF2FE1     BX lr
		*/
	}

	// RVA: 0x14346C8 Offset: 0x14346C8 VA: 0x14346C8 Slot: 6
	private bool MoveNext() {
		/* Disassembly (ARM32, 193 instructions, 0x304 bytes):
		   // CFG: 39 blocks, 42 branches
		   // ═══ Block 0 (entry) ══════════════════════════════
		   0x014346C8:  F0482DE9     PUSH {r4, r5, r6, r7, fp, lr}
		   0x014346CC:  20D04DE2     SUB sp, sp, 0x20
		   0x014346D0:  CC529FE5     LDR r5, [pc, 0x2cc]
		   0x014346D4:  0040A0E1     MOV r4, r0
		   0x014346D8:  05508FE0     ADD r5, pc, r5
		   0x014346DC:  0000D5E5     LDRB r0, [r5]
		   0x014346E0:  000050E3     CMPS r0, r0, 0x0
		   0x014346E4:  0700001A     BNE $+0x24  // if (!=) goto 0x01434708
		   // 
		   // ──── Block 1 else (==) ────────────────────
		   0x014346E8:  B8029FE5     LDR r0, [pc, 0x2b8]
		   0x014346EC:  00009FE7     LDR r0, [pc, r0]
		   0x014346F0:  9A9AECEB     BL $-0x4d9590
		   0x014346F4:  B0029FE5     LDR r0, [pc, 0x2b0]
		   0x014346F8:  00009FE7     LDR r0, [pc, r0]
		   0x014346FC:  979AECEB     BL $-0x4d959c
		   0x01434700:  0100A0E3     MOV r0, 0x1
		   0x01434704:  0000C5E5     STRB r0, [r5]
		   // ──── Block 2 if (!=) ────────────────────
		   0x01434708:  081094E5     LDR r1, [r4, 0x8]
		   0x0143470C:  105094E5     LDR r5, [r4, 0x10]
		   0x01434710:  020051E3     CMPS r0, r1, 0x2
		   0x01434714:  3000000A     BEQ $+0xc8  // if (==) goto 0x014347DC
		   // 
		   // ──── Block 3 else (!=) ────────────────────
		   0x01434718:  010051E3     CMPS r0, r1, 0x1
		   0x0143471C:  1600000A     BEQ $+0x60  // if (==) goto 0x0143477C
		   // 
		   // ──── Block 4 else (!=) ────────────────────
		   0x01434720:  0000A0E3     MOV r0, 0x0
		   0x01434724:  000051E3     CMPS r0, r1, 0x0
		   0x01434728:  7600001A     BNE $+0x1e0  // if (!=) goto 0x01434908
		   // 
		   // ──── Block 5 else (==) ────────────────────
		   0x0143472C:  147094E5     LDR r7, [r4, 0x14]
		   0x01434730:  0000E0E3     MVN r0, r0, 0x0
		   0x01434734:  000055E3     CMPS r0, r5, 0x0
		   0x01434738:  080084E5     STR r0, [r4, 0x8]
		   0x0143473C:  0760A0E1     MOV r6, r7
		   0x01434740:  0100001A     BNE $+0xc  // if (!=) goto 0x0143474C
		   // 
		   // ──── Block 6 else (==) ────────────────────
		   0x01434744:  219BECEB     BL $-0x4d9374
		   0x01434748:  146094E5     LDR r6, [r4, 0x14]
		   // ──── Block 7 if (!=) ────────────────────
		   0x0143474C:  5C029FE5     LDR r0, [pc, 0x25c]
		   0x01434750:  00009FE7     LDR r0, [pc, r0]
		   0x01434754:  207085E5     STR r7, [r5, 0x20]
		   0x01434758:  000090E5     LDR r0, [r0]
		   0x0143475C:  741090E5     LDR r1, [r0, 0x74]
		   0x01434760:  000051E3     CMPS r0, r1, 0x0
		   0x01434764:  0000001A     BNE $+0x8  // if (!=) goto 0x0143476C
		   // 
		   // ──── Block 8 else (==) ────────────────────
		   0x01434768:  C99AECEB     BL $-0x4d94d4
		   // ──── Block 9 if (!=) ────────────────────
		   0x0143476C:  780066E2     RSB r0, r6, 0x78
		   0x01434770:  51FEFFEB     BL $-0x6b4
		   0x01434774:  0070A0E3     MOV r7, 0x0
		   0x01434778:  060000EA     B $+0x20  // goto 0x01434798
		   // ──── Block 10 if (==) ────────────────────
		   0x0143477C:  0000E0E3     MVN r0, r0, 0x0
		   0x01434780:  0070A0E3     MOV r7, 0x0
		   0x01434784:  000055E3     CMPS r0, r5, 0x0
		   0x01434788:  080084E5     STR r0, [r4, 0x8]
		   0x0143478C:  0100001A     BNE $+0xc  // if (!=) goto 0x01434798
		   // 
		   // ──── Block 11 else (==) ────────────────────
		   0x01434790:  0E9BECEB     BL $-0x4d93c0
		   0x01434794:  0170A0E3     MOV r7, 0x1
		   // ──── Block 12 if (!=) ────────────────────
		   0x01434798:  201095E5     LDR r1, [r5, 0x20]
		   0x0143479C:  000051E3     CMPS r0, r1, 0x0
		   0x014347A0:  130000DA     BLE $+0x54  // if (<=) goto 0x014347F4
		   // 
		   // ──── Block 13 else (>) ────────────────────
		   0x014347A4:  1C0095E5     LDR r0, [r5, 0x1c]
		   0x014347A8:  000050E3     CMPS r0, r0, 0x0
		   0x014347AC:  0400000A     BEQ $+0x18  // if (==) goto 0x014347C4
		   // 
		   // ──── Block 14 else (!=) ────────────────────
		   0x014347B0:  0C3090E5     LDR r3, [r0, 0xc]
		   0x014347B4:  142090E5     LDR r2, [r0, 0x14]
		   0x014347B8:  200090E5     LDR r0, [r0, 0x20]
		   0x014347BC:  33FF2FE1     BLX r3  // virtual call: Object.ToString
		   0x014347C0:  201095E5     LDR r1, [r5, 0x20]
		   // ──── Block 15 if (==) ────────────────────
		   0x014347C4:  010041E2     SUB r0, r1, 0x1
		   0x014347C8:  241095E5     LDR r1, [r5, 0x24]
		   0x014347CC:  200085E5     STR r0, [r5, 0x20]
		   0x014347D0:  0100A0E3     MOV r0, 0x1
		   0x014347D4:  F800C4E1     STRD r0, r1, [r4, 0x8]
		   0x014347D8:  4A0000EA     B $+0x130  // goto 0x01434908
		   // ──── Block 16 if (==) ────────────────────
		   0x014347DC:  0000E0E3     MVN r0, r0, 0x0
		   0x014347E0:  000055E3     CMPS r0, r5, 0x0
		   0x014347E4:  080084E5     STR r0, [r4, 0x8]
		   0x014347E8:  3900001A     BNE $+0xec  // if (!=) goto 0x014348D4
		   // 
		   // ──── Block 17 else (==) ────────────────────
		   0x014347EC:  F79AECEB     BL $-0x4d941c
		   0x014347F0:  370000EA     B $+0xe4  // goto 0x014348D4
		   // ──── Block 18 if (<=) ────────────────────
		   0x014347F4:  B8019FE5     LDR r0, [pc, 0x1b8]
		   0x014347F8:  00009FE7     LDR r0, [pc, r0]
		   0x014347FC:  000090E5     LDR r0, [r0]
		   0x01434800:  741090E5     LDR r1, [r0, 0x74]
		   0x01434804:  000051E3     CMPS r0, r1, 0x0
		   0x01434808:  0000001A     BNE $+0x8  // if (!=) goto 0x01434810
		   // 
		   // ──── Block 19 else (==) ────────────────────
		   0x0143480C:  A09AECEB     BL $-0x4d9578
		   // ──── Block 20 if (!=) ────────────────────
		   0x01434810:  ECFAFFEB     BL $-0x1448
		   0x01434814:  000057E3     CMPS r0, r7, 0x0
		   0x01434818:  1200000A     BEQ $+0x50  // if (==) goto 0x01434868
		   // 
		   // ──── Block 21 else (!=) ────────────────────
		   0x0143481C:  EB9AECEB     BL $-0x4d944c
		   0x01434820:  94019FE5     LDR r0, [pc, 0x194]
		   0x01434824:  0010E0E3     MVN r1, r0, 0x0
		   0x01434828:  0130A0E3     MOV r3, 0x1
		   0x0143482C:  0020A0E3     MOV r2, 0x0
		   0x01434830:  00009FE7     LDR r0, [pc, r0]
		   0x01434834:  18108DE5     STR r1, [sp, 0x18]
		   0x01434838:  0110A0E3     MOV r1, 0x1
		   0x0143483C:  08208DE5     STR r2, [sp, 0x8]
		   0x01434840:  000090E5     LDR r0, [r0]
		   0x01434844:  14008DE5     STR r0, [sp, 0x14]
		   0x01434848:  09008DE8     STM sp, {r0, r3}
		   0x0143484C:  0500A0E1     MOV r0, r5
		   0x01434850:  0030A0E3     MOV r3, 0x0
		   0x01434854:  0C208DE5     STR r2, [sp, 0xc]
		   0x01434858:  10208DE5     STR r2, [sp, 0x10]
		   0x0143485C:  34F9FFEB     BL $-0x1b28
		   0x01434860:  DA9AECEB     BL $-0x4d9490
		   0x01434864:  0F0000EA     B $+0x44  // goto 0x014348A8
		   // ──── Block 22 if (==) ────────────────────
		   0x01434868:  48019FE5     LDR r0, [pc, 0x148]
		   0x0143486C:  0010E0E3     MVN r1, r0, 0x0
		   0x01434870:  0130A0E3     MOV r3, 0x1
		   0x01434874:  0020A0E3     MOV r2, 0x0
		   0x01434878:  00009FE7     LDR r0, [pc, r0]
		   0x0143487C:  18108DE5     STR r1, [sp, 0x18]
		   0x01434880:  0110A0E3     MOV r1, 0x1
		   0x01434884:  08208DE5     STR r2, [sp, 0x8]
		   0x01434888:  000090E5     LDR r0, [r0]
		   0x0143488C:  14008DE5     STR r0, [sp, 0x14]
		   0x01434890:  09008DE8     STM sp, {r0, r3}
		   0x01434894:  0500A0E1     MOV r0, r5
		   0x01434898:  0030A0E3     MOV r3, 0x0
		   0x0143489C:  0C208DE5     STR r2, [sp, 0xc]
		   0x014348A0:  10208DE5     STR r2, [sp, 0x10]
		   0x014348A4:  22F9FFEB     BL $-0x1b70
		   // ──── Block 23 ──────────────────────────────
		   0x014348A8:  180095E5     LDR r0, [r5, 0x18]
		   0x014348AC:  000050E3     CMPS r0, r0, 0x0
		   0x014348B0:  0300000A     BEQ $+0x14  // if (==) goto 0x014348C4
		   // 
		   // ──── Block 24 else (!=) ────────────────────
		   0x014348B4:  0C2090E5     LDR r2, [r0, 0xc]
		   0x014348B8:  141090E5     LDR r1, [r0, 0x14]
		   0x014348BC:  200090E5     LDR r0, [r0, 0x20]
		   0x014348C0:  32FF2FE1     BLX r2  // virtual call: Object.ToString
		   // ──── Block 25 if (==) ────────────────────
		   0x014348C4:  0000A0E3     MOV r0, 0x0
		   0x014348C8:  8415F5EB     BL $-0x2ba9e8
		   0x014348CC:  630050E3     CMPS r0, r0, 0x63
		   0x014348D0:  020000DA     BLE $+0x10  // if (<=) goto 0x014348E0
		   // 
		   // ──── Block 26 (from 2 paths) ──────────────────
		   0x014348D4:  0000A0E3     MOV r0, 0x0
		   0x014348D8:  280085E5     STR r0, [r5, 0x28]  // vtable: Object.Equals
		   0x014348DC:  090000EA     B $+0x2c  // goto 0x01434908
		   // ──── Block 27 if (<=) ────────────────────
		   0x014348E0:  000057E3     CMPS r0, r7, 0x0
		   0x014348E4:  0000000A     BEQ $+0x8  // if (==) goto 0x014348EC
		   // 
		   // ──── Block 28 else (!=) ────────────────────
		   0x014348E8:  B89AECEB     BL $-0x4d9518
		   // ──── Block 29 if (==) ────────────────────
		   0x014348EC:  0500A0E1     MOV r0, r5
		   0x014348F0:  7810A0E3     MOV r1, 0x78
		   0x014348F4:  3EFDFFEB     BL $-0xb00
		   0x014348F8:  0010A0E1     MOV r1, r0
		   0x014348FC:  0200A0E3     MOV r0, 0x2
		   0x01434900:  F800C4E1     STRD r0, r1, [r4, 0x8]
		   0x01434904:  0100A0E3     MOV r0, 0x1
		   // ──── Block 30 if (!=) ────────────────────
		   0x01434908:  20D08DE2     ADD sp, sp, 0x20
		   0x0143490C:  F088BDE8     POP {r4, r5, r6, r7, fp, pc}
		   0x01434910:  FFFFFFEA     B $+0x4  // goto 0x01434914
		   // ──── Block 32 ──────────────────────────────
		   0x01434914:  010051E3     CMPS r0, r1, 0x1
		   0x01434918:  1F00001A     BNE $+0x84  // if (!=) goto 0x0143499C
		   // 
		   // ──── Block 33 else (==) ────────────────────
		   0x0143491C:  69C0EFEB     BL $-0x40fe54
		   0x01434920:  0060A0E1     MOV r6, r0
		   0x01434924:  94009FE5     LDR r0, [pc, 0x94]
		   0x01434928:  00009FE7     LDR r0, [pc, r0]
		   0x0143492C:  0F9AECEB     BL $-0x4d97bc
		   0x01434930:  001096E5     LDR r1, [r6]
		   0x01434934:  001091E5     LDR r1, [r1]
		   0x01434938:  C09BECEB     BL $-0x4d90f8
		   0x0143493C:  000050E3     CMPS r0, r0, 0x0
		   0x01434940:  0C00000A     BEQ $+0x38  // if (==) goto 0x01434978
		   // 
		   // ──── Block 34 else (!=) ────────────────────
		   0x01434944:  006096E5     LDR r6, [r6]
		   0x01434948:  92C0EFEB     BL $-0x40fdb0
		   0x0143494C:  70009FE5     LDR r0, [pc, 0x70]
		   0x01434950:  00009FE7     LDR r0, [pc, r0]
		   0x01434954:  059AECEB     BL $-0x4d97e4
		   0x01434958:  741090E5     LDR r1, [r0, 0x74]
		   0x0143495C:  000051E3     CMPS r0, r1, 0x0
		   0x01434960:  0000001A     BNE $+0x8  // if (!=) goto 0x01434968
		   // 
		   // ──── Block 35 else (==) ────────────────────
		   0x01434964:  4A9AECEB     BL $-0x4d96d0
		   // ──── Block 36 if (!=) ────────────────────
		   0x01434968:  0600A0E1     MOV r0, r6
		   0x0143496C:  0010A0E3     MOV r1, 0x0
		   0x01434970:  050E2FEB     BL $+0xbc381c  // CALL → sub_1FF818C
		   0x01434974:  D2FFFFEA     B $-0xb0
		   // ──── Block 37 if (==) ────────────────────
		   0x01434978:  0400A0E3     MOV r0, 0x4
		   0x0143497C:  EACCEFEB     BL $-0x40cc50
		   0x01434980:  002096E5     LDR r2, [r6]
		   0x01434984:  3C109FE5     LDR r1, [pc, 0x3c]
		   0x01434988:  002080E5     STR r2, [r0]
		   0x0143498C:  01108FE0     ADD r1, pc, r1
		   0x01434990:  0020A0E3     MOV r2, 0x0
		   0x01434994:  E8CCEFEB     BL $-0x40cc58
		   0x01434998:  7EC0EFEB     BL $-0x40fe00
		   // ──── Block 38 if (!=) ────────────────────
		   0x0143499C:  81C0EFEB     BL $-0x40fdf4
		   0x014349A0:  7F6CE0EB     BL $-0x7e4dfc
		   0x014349A4:  4990DF02     SBCSEQ sb, pc, 0x49
		   0x014349A8:  2068C402     SBCEQ r6, r4, 0x200000
		   0x014349AC:  4823C402     SBCEQ r2, r4, 0x20000001
		   0x014349B0:  BC67C402     SBCEQ r6, r4, 0x2f00000
		   0x014349B4:  1467C402     SBCEQ r6, r4, 0x500000
		   0x014349B8:  C821C402     SBCEQ r2, r4, 0x32
		   0x014349BC:  1022C402     SBCEQ r2, r4, 0x1
		   0x014349C0:  C41FC402     SBCEQ r1, r4, 0x310
		   0x014349C4:  381CC402     SBCEQ r1, r4, 0x3800
		   0x014349C8:  D046AF02     ADCEQ r4, pc, 0xd000000
		*/
	}

	[DebuggerHidden]
	// RVA: 0x14349CC Offset: 0x14349CC VA: 0x14349CC Slot: 4
	private object System.Collections.Generic.IEnumerator<System.Object>.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014349CC:  0C0090E5     LDR r0, [r0, 0xc]
		   0x014349D0:  1EFF2FE1     BX lr
		*/
	}

	[DebuggerHidden]
	// RVA: 0x14349D4 Offset: 0x14349D4 VA: 0x14349D4 Slot: 8
	private void System.Collections.IEnumerator.Reset() {
		/* Disassembly (ARM32, 17 instructions, 0x44 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x014349D4:  10402DE9     PUSH {r4, lr}
		   0x014349D8:  30009FE5     LDR r0, [pc, 0x30]
		   0x014349DC:  00009FE7     LDR r0, [pc, r0]
		   0x014349E0:  E299ECEB     BL $-0x4d9870
		   0x014349E4:  769AECEB     BL $-0x4d9620
		   0x014349E8:  0010A0E3     MOV r1, 0x0
		   0x014349EC:  0040A0E1     MOV r4, r0
		   0x014349F0:  3F5870EB     BL $+0x1c16104  // CALL → NotSupportedException..ctor
		   0x014349F4:  18009FE5     LDR r0, [pc, 0x18]
		   0x014349F8:  00009FE7     LDR r0, [pc, r0]
		   0x014349FC:  DB99ECEB     BL $-0x4d988c
		   0x01434A00:  0010A0E1     MOV r1, r0
		   0x01434A04:  0400A0E1     MOV r0, r4
		   0x01434A08:  1C9AECEB     BL $-0x4d9788
		   0x01434A0C:  BD99ECEB     BL $-0x4d9904
		   0x01434A10:  0021C402     SBCEQ r2, r4, 0x0
		   0x01434A14:  A8FDC402     SBCEQ pc, r4, 0x2a00
		*/
	}

	[DebuggerHidden]
	// RVA: 0x1434A18 Offset: 0x1434A18 VA: 0x1434A18 Slot: 7
	private object System.Collections.IEnumerator.get_Current() {
		/* Disassembly (ARM32, 2 instructions, 0x8 bytes):
		   // CFG: 1 blocks, 0 branches
		   0x01434A18:  0C0090E5     LDR r0, [r0, 0xc]
		   0x01434A1C:  1EFF2FE1     BX lr
		*/
	}
}
