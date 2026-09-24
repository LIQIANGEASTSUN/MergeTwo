
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b1324(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 extraout_r2;
  undefined1 uVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar10 = (char *)(_UNK_032b1774 + 0x32b1340);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b1778 + 0x32b1354));
    func_0x01438628(*(undefined4 *)(_UNK_032b177c + 0x32b1360));
    func_0x01438628(*(undefined4 *)(_UNK_032b1780 + 0x32b136c));
    func_0x01438628(*(undefined4 *)(_UNK_032b1784 + 0x32b1378));
    func_0x01438628(*(undefined4 *)(_UNK_032b1788 + 0x32b1384));
    func_0x01438628(*(undefined4 *)(_UNK_032b178c + 0x32b1390));
    func_0x01438628(*(undefined4 *)(_UNK_032b1790 + 0x32b139c));
    func_0x01438628(*(undefined4 *)(_UNK_032b1794 + 0x32b13a8));
    func_0x01438628(*(undefined4 *)(_UNK_032b1798 + 0x32b13b4));
    func_0x01438628(*(undefined4 *)(_UNK_032b179c + 0x32b13c0));
    func_0x01438628(*(undefined4 *)(_UNK_032b17a0 + 0x32b13cc));
    func_0x01438628(*(undefined4 *)(_UNK_032b17a4 + 0x32b13d8));
    func_0x01438628(*(undefined4 *)(_UNK_032b17a8 + 0x32b13e4));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x02953fd4(0x829a,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_032b17ac + 0x32b1458) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b17b0 + 0x32b1474));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_48,iVar2,**(undefined4 **)(_UNK_032b17b4 + 0x32b14ac));
    iVar2 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar14 = *(undefined4 **)(_UNK_032b17b8 + 0x32b14d4);
    puVar13 = *(undefined4 **)(_UNK_032b17bc + 0x32b14dc);
    iStack_50 = 0;
    while (iVar3 = func_0x04878f14(&uStack_38,**(undefined4 **)(_UNK_032b17cc + 0x32b14e8)),
          iVar4 = iStack_2c, iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_032b17c0 + 0x32b1504) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032b17c4 + 0x32b1524));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar11 = *(undefined4 *)(iVar4 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x029b1058(iVar3,uVar11,0);
      if (iVar4 != 0) {
        iVar3 = *(int *)(iVar4 + 0xc);
        if (0 < iVar3) {
          iVar12 = 0;
          do {
            if (*(int *)(**(int **)(_UNK_032b17c8 + 0x32b1584) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x04e4a028(*puVar14);
            iVar5 = func_0x04cfd760(iVar4,iVar12,*puVar13);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar11 = *(undefined4 *)(iVar5 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar6 = func_0x02be153c(iVar3,uVar11,0);
            iVar3 = func_0x04e4a028(*puVar14);
            iVar5 = func_0x04cfd760(iVar4,iVar12,*puVar13);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            uVar11 = *(undefined4 *)(iVar5 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x02be1348(iVar3,uVar11,0);
            iVar12 = iVar12 + 1;
            uVar8 = uVar7 | uVar6 ^ 1;
            uVar9 = extraout_r2;
            uVar1 = uVar8;
            if (uVar8 == 0) {
              uVar9 = 1;
              uVar1 = param_2;
            }
            iVar2 = iVar2 + (uVar6 & uVar7);
            if (uVar8 == 0) {
              *(undefined1 *)(uVar1 + 0x4b) = uVar9;
            }
            iVar3 = *(int *)(iVar4 + 0xc);
          } while (iVar12 < iVar3);
        }
        iStack_50 = iVar3 + iStack_50;
      }
    }
    func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_032b17d0 + 0x32b167c));
    uVar11 = **(undefined4 **)(_UNK_032b17d8 + 0x32b1694);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar2,iStack_50,uVar11);
  }
  else {
    iVar2 = func_0x029540a4(0x829a,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x0291ffb4(&uStack_48,iVar2,param_2,0);
    *param_1 = uStack_48;
    param_1[1] = uStack_44;
  }
  return;
}

