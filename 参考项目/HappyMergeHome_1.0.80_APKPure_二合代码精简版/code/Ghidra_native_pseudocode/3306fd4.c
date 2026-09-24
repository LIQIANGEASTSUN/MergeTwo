
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03316fd4(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_033172b4 + 0x3316ff4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033172b8 + 0x3317008));
    func_0x01438628(*(undefined4 *)(_UNK_033172bc + 0x3317014));
    func_0x01438628(*(undefined4 *)(_UNK_033172c0 + 0x3317020));
    func_0x01438628(*(undefined4 *)(_UNK_033172c4 + 0x331702c));
    func_0x01438628(*(undefined4 *)(_UNK_033172c8 + 0x3317038));
    func_0x01438628(*(undefined4 *)(_UNK_033172cc + 0x3317044));
    func_0x01438628(*(undefined4 *)(_UNK_033172d0 + 0x3317050));
    func_0x01438628(*(undefined4 *)(_UNK_033172d4 + 0x331705c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x853d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_033172d8 + 0x33170cc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0330a560();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_03316e1c(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_033172dc + 0x3317110) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_033172e0 + 0x331712c));
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
        puVar10 = *(undefined4 **)(_UNK_033172e4 + 0x3317188);
        puVar9 = *(undefined4 **)(_UNK_033172e8 + 0x3317190);
        do {
          if (*(int *)(**(int **)(_UNK_033172ec + 0x3317198) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_033172f0 + 0x3317204) + 0x74) == 0) {
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
          iVar4 = func_0x02be1348(iVar5,uVar2,0);
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar8 = iVar8 + iVar3;
          if (iVar4 == 0 && iVar3 == 1) {
            *(undefined1 *)(param_2 + 0x53) = 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_033172f4 + 0x3317298);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x853d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

