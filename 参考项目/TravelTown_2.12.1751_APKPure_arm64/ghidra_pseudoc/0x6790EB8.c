/* Ghidra 12.1.2 native pseudocode; RVA 0x6790EB8; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.GetSkipCooldownPrice; status ok */


/* WARNING: Possible PIC construction at 0x06890ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06891240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06890efc) */
/* WARNING: Removing unreachable block (ram,0x06890f04) */
/* WARNING: Removing unreachable block (ram,0x06890f20) */
/* WARNING: Removing unreachable block (ram,0x06890f28) */
/* WARNING: Removing unreachable block (ram,0x06890f50) */
/* WARNING: Removing unreachable block (ram,0x06890f34) */
/* WARNING: Removing unreachable block (ram,0x06890f40) */
/* WARNING: Removing unreachable block (ram,0x06890f60) */
/* WARNING: Removing unreachable block (ram,0x06890f78) */
/* WARNING: Removing unreachable block (ram,0x06890f70) */
/* WARNING: Removing unreachable block (ram,0x06890f7c) */
/* WARNING: Removing unreachable block (ram,0x06891244) */
/* WARNING: Removing unreachable block (ram,0x068912d0) */
/* WARNING: Removing unreachable block (ram,0x06891248) */
/* WARNING: Removing unreachable block (ram,0x06891264) */
/* WARNING: Removing unreachable block (ram,0x0689126c) */
/* WARNING: Removing unreachable block (ram,0x06891294) */
/* WARNING: Removing unreachable block (ram,0x06891278) */
/* WARNING: Removing unreachable block (ram,0x06891284) */
/* WARNING: Removing unreachable block (ram,0x068912a4) */
/* WARNING: Removing unreachable block (ram,0x0689111c) */
/* WARNING: Removing unreachable block (ram,0x06891140) */
/* WARNING: Removing unreachable block (ram,0x06891154) */
/* WARNING: Removing unreachable block (ram,0x068911f8) */
/* WARNING: Removing unreachable block (ram,0x06891224) */
/* WARNING: Removing unreachable block (ram,0x06891238) */
/* WARNING: Removing unreachable block (ram,0x0689115c) */
/* WARNING: Removing unreachable block (ram,0x06891174) */
/* WARNING: Removing unreachable block (ram,0x0689117c) */
/* WARNING: Removing unreachable block (ram,0x068911a4) */
/* WARNING: Removing unreachable block (ram,0x06891188) */
/* WARNING: Removing unreachable block (ram,0x06891194) */
/* WARNING: Removing unreachable block (ram,0x068911b4) */
/* WARNING: Removing unreachable block (ram,0x068911c4) */
/* WARNING: Removing unreachable block (ram,0x068911e0) */
/* WARNING: Removing unreachable block (ram,0x068911c8) */
/* WARNING: Removing unreachable block (ram,0x068912d4) */
/* WARNING: Removing unreachable block (ram,0x068912f4) */
/* WARNING: Removing unreachable block (ram,0x06891308) */
/* WARNING: Removing unreachable block (ram,0x0689130c) */
/* WARNING: Removing unreachable block (ram,0x06891314) */
/* WARNING: Removing unreachable block (ram,0x06891328) */
/* WARNING: Removing unreachable block (ram,0x0689132c) */
/* WARNING: Removing unreachable block (ram,0x06891334) */
/* WARNING: Removing unreachable block (ram,0x06891340) */
/* WARNING: Removing unreachable block (ram,0x06891348) */
/* WARNING: Removing unreachable block (ram,0x0689134c) */
/* WARNING: Removing unreachable block (ram,0x06891384) */
/* WARNING: Removing unreachable block (ram,0x068913c4) */
/* WARNING: Removing unreachable block (ram,0x068913c8) */
/* WARNING: Removing unreachable block (ram,0x068913cc) */
/* WARNING: Removing unreachable block (ram,0x068913f0) */
/* WARNING: Removing unreachable block (ram,0x06891410) */
/* WARNING: Removing unreachable block (ram,0x0689141c) */
/* WARNING: Removing unreachable block (ram,0x0689142c) */
/* WARNING: Removing unreachable block (ram,0x06891444) */
/* WARNING: Removing unreachable block (ram,0x0689144c) */
/* WARNING: Removing unreachable block (ram,0x06891470) */
/* WARNING: Removing unreachable block (ram,0x06891474) */
/* WARNING: Removing unreachable block (ram,0x06891490) */
/* WARNING: Removing unreachable block (ram,0x06891494) */
/* WARNING: Removing unreachable block (ram,0x06891498) */
/* WARNING: Removing unreachable block (ram,0x068914c4) */
/* WARNING: Removing unreachable block (ram,0x0689149c) */
/* WARNING: Removing unreachable block (ram,0x06891478) */
/* WARNING: Removing unreachable block (ram,0x0689147c) */
/* WARNING: Removing unreachable block (ram,0x06891480) */
/* WARNING: Removing unreachable block (ram,0x068914b8) */
/* WARNING: Removing unreachable block (ram,0x06891484) */
/* WARNING: Removing unreachable block (ram,0x068914a4) */
/* WARNING: Removing unreachable block (ram,0x068914b0) */
/* WARNING: Removing unreachable block (ram,0x068914b4) */
/* WARNING: Removing unreachable block (ram,0x068914cc) */
/* WARNING: Removing unreachable block (ram,0x068914d8) */
/* WARNING: Removing unreachable block (ram,0x068914dc) */
/* WARNING: Removing unreachable block (ram,0x068914e4) */
/* WARNING: Removing unreachable block (ram,0x0689153c) */
/* WARNING: Removing unreachable block (ram,0x0689155c) */
/* WARNING: Removing unreachable block (ram,0x064a7540) */
/* WARNING: Removing unreachable block (ram,0x057da5fc) */
/* WARNING: Removing unreachable block (ram,0x06891548) */
/* WARNING: Removing unreachable block (ram,0x068914f0) */
/* WARNING: Removing unreachable block (ram,0x06891500) */
/* WARNING: Removing unreachable block (ram,0x0689138c) */
/* WARNING: Removing unreachable block (ram,0x06891350) */
/* WARNING: Removing unreachable block (ram,0x0689135c) */
/* WARNING: Removing unreachable block (ram,0x068913b4) */

undefined1  [16]
MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetSkipCooldownPrice
          (undefined8 param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *extraout_x1;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000007e28d68 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e548);
    bRam0000000007e28d68 = 1;
  }
  if (param_2 == 0) {
    func_0x03280cac();
    plVar3 = extraout_x1;
  }
  else {
    plVar3 = *(long **)(param_2 + 0x18);
    param_3 = *(long **)(param_2 + 0x38);
  }
  if ((bRam0000000007e28d6d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809778);
    func_0x03280a18(PTR_DAT_07809780);
    bRam0000000007e28d6d = 1;
  }
  puVar1 = PTR_DAT_07809780;
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07809780) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_06891030;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_07809780,3);
LAB_06891030:
    uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar6 & 1) != 0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_06891108;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar1,1);
LAB_06891108:
      UNRECOVERED_JUMPTABLE = (code *)*puVar2;
      uVar4 = puVar2[1];
      param_3 = plVar3;
      goto LAB_06891110;
    }
  }
  if (param_3 == (long *)0x0) {
    return ZEXT816(0);
  }
  lVar5 = *param_3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07809778) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_068910ec;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_07809778,1);
LAB_068910ec:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  uVar4 = puVar2[1];
LAB_06891110:
                    /* WARNING: Could not recover jumptable at 0x06891118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar8 = (*UNRECOVERED_JUMPTABLE)(param_3,uVar4);
  return auVar8;
}

