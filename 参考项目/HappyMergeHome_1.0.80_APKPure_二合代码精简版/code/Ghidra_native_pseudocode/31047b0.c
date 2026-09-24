
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031147b0(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_03114ac0 + 0x31147d0);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03114ac4 + 0x31147e4));
    func_0x01438628(*(undefined4 *)(_UNK_03114ac8 + 0x31147f0));
    func_0x01438628(*(undefined4 *)(_UNK_03114acc + 0x31147fc));
    func_0x01438628(*(undefined4 *)(_UNK_03114ad0 + 0x3114808));
    func_0x01438628(*(undefined4 *)(_UNK_03114ad4 + 0x3114814));
    func_0x01438628(*(undefined4 *)(_UNK_03114ad8 + 0x3114820));
    func_0x01438628(*(undefined4 *)(_UNK_03114adc + 0x311482c));
    func_0x01438628(*(undefined4 *)(_UNK_03114ae0 + 0x3114838));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x78a0,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_03114ae4 + 0x31148a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03105aec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_031145f8(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_03114ae8 + 0x31148ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03114aec + 0x3114908));
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
        puVar10 = *(undefined4 **)(_UNK_03114af0 + 0x3114964);
        puVar9 = *(undefined4 **)(_UNK_03114af4 + 0x311496c);
        do {
          if (*(int *)(**(int **)(_UNK_03114af8 + 0x3114974) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_03114afc + 0x31149e0) + 0x74) == 0) {
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
            func_0x03114b04(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_03114b00 + 0x3114aa4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x78a0,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

