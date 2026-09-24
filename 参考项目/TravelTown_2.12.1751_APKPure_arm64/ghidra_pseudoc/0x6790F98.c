/* Ghidra 12.1.2 native pseudocode; RVA 0x6790F98; MergeEngine.ECS.Systems.Items.SkipCooldownSystem.GetTimeLeft; status ok */


undefined1  [16]
MergeEngine_ECS_Systems_Items_SkipCooldownSystem__GetTimeLeft
          (undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000007e28d6d & 1) == 0) {
    func_0x03280a18(PTR_DAT_07809778);
    func_0x03280a18(PTR_DAT_07809780);
    bRam0000000007e28d6d = 1;
  }
  puVar1 = PTR_DAT_07809780;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07809780) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_06891030;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(param_2,*(long *)PTR_DAT_07809780,3);
LAB_06891030:
    uVar5 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      lVar4 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06891108;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,1);
LAB_06891108:
      UNRECOVERED_JUMPTABLE = (code *)*puVar2;
      uVar3 = puVar2[1];
      param_3 = param_2;
      goto LAB_06891110;
    }
  }
  if (param_3 == (long *)0x0) {
    return ZEXT816(0);
  }
  lVar4 = *param_3;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_07809778) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_068910ec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)func_0x03256b10(param_3,*(long *)PTR_DAT_07809778,1);
LAB_068910ec:
  UNRECOVERED_JUMPTABLE = (code *)*puVar2;
  uVar3 = puVar2[1];
LAB_06891110:
                    /* WARNING: Could not recover jumptable at 0x06891118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar7 = (*UNRECOVERED_JUMPTABLE)(param_3,uVar3);
  return auVar7;
}

