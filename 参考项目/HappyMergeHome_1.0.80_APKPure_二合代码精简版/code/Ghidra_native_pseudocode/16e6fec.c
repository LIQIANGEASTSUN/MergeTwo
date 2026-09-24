
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016f6fec(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_016f72cc + 0x16f700c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f72d0 + 0x16f7020));
    func_0x01438628(*(undefined4 *)(_UNK_016f72d4 + 0x16f702c));
    func_0x01438628(*(undefined4 *)(_UNK_016f72d8 + 0x16f7038));
    func_0x01438628(*(undefined4 *)(_UNK_016f72dc + 0x16f7044));
    func_0x01438628(*(undefined4 *)(_UNK_016f72e0 + 0x16f7050));
    func_0x01438628(*(undefined4 *)(_UNK_016f72e4 + 0x16f705c));
    func_0x01438628(*(undefined4 *)(_UNK_016f72e8 + 0x16f7068));
    func_0x01438628(*(undefined4 *)(_UNK_016f72ec + 0x16f7074));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8aad,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016f72f0 + 0x16f70e4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016ea198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_016f6e34(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_016f72f4 + 0x16f7128) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016f72f8 + 0x16f7144));
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
        puVar10 = *(undefined4 **)(_UNK_016f72fc + 0x16f71a0);
        puVar9 = *(undefined4 **)(_UNK_016f7300 + 0x16f71a8);
        do {
          if (*(int *)(**(int **)(_UNK_016f7304 + 0x16f71b0) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_016f7308 + 0x16f721c) + 0x74) == 0) {
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
    uVar2 = **(undefined4 **)(_UNK_016f730c + 0x16f72b0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x8aad,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

