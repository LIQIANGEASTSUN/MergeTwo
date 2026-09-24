
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171cd9c(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0171d0ac + 0x171cdbc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0171d0b0 + 0x171cdd0));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0b4 + 0x171cddc));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0b8 + 0x171cde8));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0bc + 0x171cdf4));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0c0 + 0x171ce00));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0c4 + 0x171ce0c));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0c8 + 0x171ce18));
    func_0x01438628(*(undefined4 *)(_UNK_0171d0cc + 0x171ce24));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8b8a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0171d0d0 + 0x171ce94) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0170e674();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0171cbe4(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0171d0d4 + 0x171ced8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0171d0d8 + 0x171cef4));
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
        puVar10 = *(undefined4 **)(_UNK_0171d0dc + 0x171cf50);
        puVar9 = *(undefined4 **)(_UNK_0171d0e0 + 0x171cf58);
        do {
          if (*(int *)(**(int **)(_UNK_0171d0e4 + 0x171cf60) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar3 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_0171d0e8 + 0x171cfcc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar4 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            iVar5 = func_0x0152983c(iVar1,iVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x0171d0f0(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0171d0ec + 0x171d090);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x8b8a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

