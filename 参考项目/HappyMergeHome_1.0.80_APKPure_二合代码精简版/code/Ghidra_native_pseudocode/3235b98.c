
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03245b98(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_03245eac + 0x3245bb8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03245eb0 + 0x3245bcc));
    func_0x01438628(*(undefined4 *)(_UNK_03245eb4 + 0x3245bd8));
    func_0x01438628(*(undefined4 *)(_UNK_03245eb8 + 0x3245be4));
    func_0x01438628(*(undefined4 *)(_UNK_03245ebc + 0x3245bf0));
    func_0x01438628(*(undefined4 *)(_UNK_03245ec0 + 0x3245bfc));
    func_0x01438628(*(undefined4 *)(_UNK_03245ec4 + 0x3245c08));
    func_0x01438628(*(undefined4 *)(_UNK_03245ec8 + 0x3245c14));
    func_0x01438628(*(undefined4 *)(_UNK_03245ecc + 0x3245c20));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7fec,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03245ed0 + 0x3245c90) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032356b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_032459e0(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_03245ed4 + 0x3245cd4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03245ed8 + 0x3245cf4));
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
        puVar10 = *(undefined4 **)(_UNK_03245edc + 0x3245d50);
        puVar9 = *(undefined4 **)(_UNK_03245ee0 + 0x3245d58);
        do {
          if (*(int *)(**(int **)(_UNK_03245ee4 + 0x3245d60) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_03245ee8 + 0x3245dcc) + 0x74) == 0) {
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
            func_0x03245ef0(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_03245eec + 0x3245e90);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7fec,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

