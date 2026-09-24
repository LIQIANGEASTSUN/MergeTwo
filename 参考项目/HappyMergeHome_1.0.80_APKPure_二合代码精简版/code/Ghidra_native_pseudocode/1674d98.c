
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01684d98(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_016850a8 + 0x1684db8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016850ac + 0x1684dcc));
    func_0x01438628(*(undefined4 *)(_UNK_016850b0 + 0x1684dd8));
    func_0x01438628(*(undefined4 *)(_UNK_016850b4 + 0x1684de4));
    func_0x01438628(*(undefined4 *)(_UNK_016850b8 + 0x1684df0));
    func_0x01438628(*(undefined4 *)(_UNK_016850bc + 0x1684dfc));
    func_0x01438628(*(undefined4 *)(_UNK_016850c0 + 0x1684e08));
    func_0x01438628(*(undefined4 *)(_UNK_016850c4 + 0x1684e14));
    func_0x01438628(*(undefined4 *)(_UNK_016850c8 + 0x1684e20));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87a5,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016850cc + 0x1684e90) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01676670();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_01684be0(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_016850d0 + 0x1684ed4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016850d4 + 0x1684ef0));
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
        puVar10 = *(undefined4 **)(_UNK_016850d8 + 0x1684f4c);
        puVar9 = *(undefined4 **)(_UNK_016850dc + 0x1684f54);
        do {
          if (*(int *)(**(int **)(_UNK_016850e0 + 0x1684f5c) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_016850e4 + 0x1684fc8) + 0x74) == 0) {
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
            func_0x016850ec(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_016850e8 + 0x168508c);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x87a5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

