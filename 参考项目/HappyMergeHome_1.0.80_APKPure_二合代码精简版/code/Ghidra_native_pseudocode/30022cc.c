
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030122cc(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_030125dc + 0x30122ec);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030125e0 + 0x3012300));
    func_0x01438628(*(undefined4 *)(_UNK_030125e4 + 0x301230c));
    func_0x01438628(*(undefined4 *)(_UNK_030125e8 + 0x3012318));
    func_0x01438628(*(undefined4 *)(_UNK_030125ec + 0x3012324));
    func_0x01438628(*(undefined4 *)(_UNK_030125f0 + 0x3012330));
    func_0x01438628(*(undefined4 *)(_UNK_030125f4 + 0x301233c));
    func_0x01438628(*(undefined4 *)(_UNK_030125f8 + 0x3012348));
    func_0x01438628(*(undefined4 *)(_UNK_030125fc + 0x3012354));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x728f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03012600 + 0x30123c4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03003ba4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_03012114(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_03012604 + 0x3012408) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03012608 + 0x3012424));
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
        puVar10 = *(undefined4 **)(_UNK_0301260c + 0x3012480);
        puVar9 = *(undefined4 **)(_UNK_03012610 + 0x3012488);
        do {
          if (*(int *)(**(int **)(_UNK_03012614 + 0x3012490) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_03012618 + 0x30124fc) + 0x74) == 0) {
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
            func_0x03012620(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0301261c + 0x30125c0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x728f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

