
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314ed9c(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0314f0b0 + 0x314edbc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314f0b4 + 0x314edd0));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0b8 + 0x314eddc));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0bc + 0x314ede8));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0c0 + 0x314edf4));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0c4 + 0x314ee00));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0c8 + 0x314ee0c));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0cc + 0x314ee18));
    func_0x01438628(*(undefined4 *)(_UNK_0314f0d0 + 0x314ee24));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7a29,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0314f0d4 + 0x314ee94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0313e53c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0314ebe4(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0314f0d8 + 0x314eed8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0314f0dc + 0x314eef8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_0314f0e0 + 0x314ef54);
        puVar9 = *(undefined4 **)(_UNK_0314f0e4 + 0x314ef5c);
        do {
          if (*(int *)(**(int **)(_UNK_0314f0e8 + 0x314ef64) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_0314f0ec + 0x314efd0) + 0x74) == 0) {
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
            func_0x0314f0f4(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0314f0f0 + 0x314f094);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7a29,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

