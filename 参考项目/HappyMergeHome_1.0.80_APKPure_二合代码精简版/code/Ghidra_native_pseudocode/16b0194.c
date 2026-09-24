
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c0194(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_016c04a8 + 0x16c01b4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c04ac + 0x16c01c8));
    func_0x01438628(*(undefined4 *)(_UNK_016c04b0 + 0x16c01d4));
    func_0x01438628(*(undefined4 *)(_UNK_016c04b4 + 0x16c01e0));
    func_0x01438628(*(undefined4 *)(_UNK_016c04b8 + 0x16c01ec));
    func_0x01438628(*(undefined4 *)(_UNK_016c04bc + 0x16c01f8));
    func_0x01438628(*(undefined4 *)(_UNK_016c04c0 + 0x16c0204));
    func_0x01438628(*(undefined4 *)(_UNK_016c04c4 + 0x16c0210));
    func_0x01438628(*(undefined4 *)(_UNK_016c04c8 + 0x16c021c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x892e,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_016c04cc + 0x16c028c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_016af738();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_016bffdc(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_016c04d0 + 0x16c02d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c04d4 + 0x16c02f0));
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
        puVar10 = *(undefined4 **)(_UNK_016c04d8 + 0x16c034c);
        puVar9 = *(undefined4 **)(_UNK_016c04dc + 0x16c0354);
        do {
          if (*(int *)(**(int **)(_UNK_016c04e0 + 0x16c035c) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_016c04e4 + 0x16c03c8) + 0x74) == 0) {
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
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x52) = 1;
            iVar5 = func_0x0152983c(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x016c04ec(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_016c04e8 + 0x16c048c);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x892e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}

