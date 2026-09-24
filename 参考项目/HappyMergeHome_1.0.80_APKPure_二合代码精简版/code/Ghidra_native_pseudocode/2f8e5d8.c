
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f9e5d8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02f9e8e8 + 0x2f9e5f8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9e8ec + 0x2f9e60c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e8f0 + 0x2f9e618));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e8f4 + 0x2f9e624));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e8f8 + 0x2f9e630));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e8fc + 0x2f9e63c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e900 + 0x2f9e648));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e904 + 0x2f9e654));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e908 + 0x2f9e660));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6f8e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f9e90c + 0x2f9e6d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f8feac();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02f9e420(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_02f9e910 + 0x2f9e714) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9e914 + 0x2f9e730));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_02f9e918 + 0x2f9e78c);
        puVar9 = *(undefined4 **)(_UNK_02f9e91c + 0x2f9e794);
        do {
          if (*(int *)(**(int **)(_UNK_02f9e920 + 0x2f9e79c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar3 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_02f9e924 + 0x2f9e808) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar4 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            iVar5 = func_0x04cfd760(iVar1,iVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x02f9e92c(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_02f9e928 + 0x2f9e8cc);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x6f8e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

