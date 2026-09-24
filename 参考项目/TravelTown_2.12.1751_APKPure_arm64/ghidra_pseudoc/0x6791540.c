/* Ghidra 12.1.2 native pseudocode; RVA 0x6791540; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.GetTimeLeft; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetTimeLeft(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  
  if (param_2 == 0) {
    auVar9 = func_0x03280cac();
    return auVar9;
  }
  plVar6 = *(long **)(param_2 + 0x18);
  plVar4 = *(long **)(param_2 + 0x38);
  if ((bRam0000000007e28d6d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809778);
    func_0x03280a18(PTR_DAT_07809780);
    bRam0000000007e28d6d = 1;
  }
  puVar1 = PTR_DAT_07809780;
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07809780) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_06891030;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_07809780,3);
LAB_06891030:
    uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if ((uVar7 & 1) != 0) {
      lVar5 = *plVar6;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06891108;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,1);
LAB_06891108:
      UNRECOVERED_JUMPTABLE = (code *)*puVar2;
      uVar3 = puVar2[1];
      plVar4 = plVar6;
      goto LAB_06891110;
    }
  }
  if (plVar4 == (long *)0x0) {
    return ZEXT816(0);
  }
  lVar5 = *plVar4;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07809778) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_068910ec;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(plVar4,*(long *)PTR_DAT_07809778,1);
LAB_068910ec:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  uVar3 = puVar2[1];
LAB_06891110:
                    /* WARNING: Could not recover jumptable at 0x06891118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar9 = (*UNRECOVERED_JUMPTABLE)(plVar4,uVar3);
  return auVar9;
}

