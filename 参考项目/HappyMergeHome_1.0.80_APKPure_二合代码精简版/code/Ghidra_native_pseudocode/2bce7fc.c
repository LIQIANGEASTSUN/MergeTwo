
int FUN_02bde7fc(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iStack_34;
  int iStack_28;
  
  iVar3 = func_0x02953fd4(0x5d00,0);
  if (iVar3 == 0) {
    iVar4 = FUN_02bd0e74(param_1,param_3);
    iVar5 = func_0x014e5f78(param_2,iVar4);
    param_2 = param_2 - iVar5 * iVar4;
    iVar3 = iVar4 + -1;
    if (param_2 + 1 < iVar4 + -1) {
      iVar3 = param_2 + 1;
    }
    if (param_2 < 2) {
      param_2 = 1;
    }
    iStack_28 = param_2 + -1;
    iVar6 = FUN_02bd0fbc(param_1,param_3);
    iStack_34 = -1;
    if (iStack_28 <= iVar3) {
      uVar8 = iVar5 - 1U & ~((int)(iVar5 - 1U) >> 0x1f);
      iVar9 = iVar6 + -1;
      if (iVar5 + 1 < iVar6 + -1) {
        iVar9 = iVar5 + 1;
      }
      iStack_34 = -1;
      iVar5 = iVar4 * uVar8 + param_2 + -1;
      uVar1 = uVar8;
      iVar6 = iVar5;
joined_r0x02bde8fc:
      do {
        iVar2 = iStack_34;
        if ((int)uVar1 <= iVar9) {
          iVar7 = FUN_02bad204(param_1,iVar5,param_3);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar2 = iVar5;
          if (*(int *)(iVar7 + 8) != -1) {
            iVar5 = iVar5 + iVar4;
            uVar1 = uVar1 + 1;
            goto joined_r0x02bde8fc;
          }
        }
        iStack_34 = iVar2;
        iStack_28 = iStack_28 + 1;
        iVar5 = iVar6 + 1;
        uVar1 = uVar8;
        iVar6 = iVar5;
      } while (iStack_28 <= iVar3);
    }
  }
  else {
    iVar3 = func_0x029540a4(0x5d00,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iStack_34 = func_0x028b7e50(iVar3,param_1,param_2,param_3,0);
  }
  return iStack_34;
}

