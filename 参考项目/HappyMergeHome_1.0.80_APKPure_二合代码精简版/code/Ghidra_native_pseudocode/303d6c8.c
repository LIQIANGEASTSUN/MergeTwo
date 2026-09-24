
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0304d6c8(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0304d9dc + 0x304d6e8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304d9e0 + 0x304d6fc));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9e4 + 0x304d708));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9e8 + 0x304d714));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9ec + 0x304d720));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9f0 + 0x304d72c));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9f4 + 0x304d738));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9f8 + 0x304d744));
    func_0x01438628(*(undefined4 *)(_UNK_0304d9fc + 0x304d750));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7424,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0304da00 + 0x304d7c0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0303cc6c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0304d510(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0304da04 + 0x304d804) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0304da08 + 0x304d824));
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
        puVar10 = *(undefined4 **)(_UNK_0304da0c + 0x304d880);
        puVar9 = *(undefined4 **)(_UNK_0304da10 + 0x304d888);
        do {
          if (*(int *)(**(int **)(_UNK_0304da14 + 0x304d890) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_0304da18 + 0x304d8fc) + 0x74) == 0) {
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
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x52) = 1;
            iVar5 = func_0x04cfd760(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x0304da20(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0304da1c + 0x304d9c0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7424,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

