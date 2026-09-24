
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030db2f0(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_030db600 + 0x30db310);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030db604 + 0x30db324));
    func_0x01438628(*(undefined4 *)(_UNK_030db608 + 0x30db330));
    func_0x01438628(*(undefined4 *)(_UNK_030db60c + 0x30db33c));
    func_0x01438628(*(undefined4 *)(_UNK_030db610 + 0x30db348));
    func_0x01438628(*(undefined4 *)(_UNK_030db614 + 0x30db354));
    func_0x01438628(*(undefined4 *)(_UNK_030db618 + 0x30db360));
    func_0x01438628(*(undefined4 *)(_UNK_030db61c + 0x30db36c));
    func_0x01438628(*(undefined4 *)(_UNK_030db620 + 0x30db378));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7728,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_030db624 + 0x30db3e8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_030ccbc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_030db138(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_030db628 + 0x30db42c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030db62c + 0x30db448));
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
        puVar10 = *(undefined4 **)(_UNK_030db630 + 0x30db4a4);
        puVar9 = *(undefined4 **)(_UNK_030db634 + 0x30db4ac);
        do {
          if (*(int *)(**(int **)(_UNK_030db638 + 0x30db4b4) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_030db63c + 0x30db520) + 0x74) == 0) {
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
            func_0x030db644(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_030db640 + 0x30db5e4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7728,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

