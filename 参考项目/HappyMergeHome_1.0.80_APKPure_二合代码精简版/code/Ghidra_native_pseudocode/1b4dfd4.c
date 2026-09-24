
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b5dfd4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01b5e220 + 0x1b5dfe8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5e224 + 0x1b5dffc));
    func_0x01438628(*(undefined4 *)(_UNK_01b5e228 + 0x1b5e008));
    func_0x01438628(*(undefined4 *)(_UNK_01b5e22c + 0x1b5e014));
    func_0x01438628(*(undefined4 *)(_UNK_01b5e230 + 0x1b5e020));
    func_0x01438628(*(undefined4 *)(_UNK_01b5e234 + 0x1b5e02c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5e238 + 0x1b5e038));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar2 = func_0x02953fd4(0xa68c,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01b57f28(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_01b5ba14(param_1);
      iVar8 = 0;
      if (iVar2 != 0) {
        iVar8 = *(int *)(iVar2 + 0xc);
      }
      iVar7 = 0;
      iVar2 = FUN_01b5bae4(param_1);
      if (iVar2 != 0) {
        iVar7 = *(int *)(iVar2 + 0xc);
      }
      uVar6 = 1;
      if ((iVar7 + iVar8 < 1) && (iVar2 = func_0x01b81f98(0), iVar2 < 1)) {
        iVar2 = FUN_01b572ec(param_1);
        uVar6 = 0;
        if (iVar2 != 0) {
          piVar11 = *(int **)(_UNK_01b5e23c + 0x1b5e10c);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          puVar10 = *(undefined4 **)(_UNK_01b5e240 + 0x1b5e128);
          iVar8 = func_0x014e9518(*puVar10);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar8 = *(int *)(iVar8 + 0x14);
          iVar7 = 0;
          if ((iVar8 != 0) && (0 < *(int *)(iVar8 + 0xc))) {
            iVar7 = 0;
            puVar12 = *(undefined4 **)(_UNK_01b5e244 + 0x1b5e170);
            iVar3 = func_0x0152983c(iVar8,0,*puVar12);
            if (iVar3 != 0) {
              iVar8 = func_0x0152983c(iVar8,0,*puVar12);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              iVar7 = *(int *)(iVar8 + 0x10);
            }
          }
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          uVar6 = func_0x014e9518(*puVar10);
          if (uVar6 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(uVar6 + 0x40) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)(*(int *)(uVar6 + 0x40) + 0xc);
          }
          if (*(int *)(iVar2 + 0x1c) == 0) {
            iVar3 = 1;
          }
          else {
            iVar3 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
            if (iVar3 < 2) {
              iVar3 = 1;
            }
          }
          bVar14 = SBORROW4(iVar8,1);
          iVar1 = iVar8 + -1;
          bVar13 = iVar8 == 1;
          if (0 < iVar8) {
            uVar6 = 0;
            bVar14 = SBORROW4(iVar3,iVar8);
            iVar1 = iVar3 - iVar8;
            bVar13 = iVar3 == iVar8;
          }
          if (bVar13 || iVar1 < 0 != bVar14) {
            uVar6 = (uint)(iVar7 < *(int *)(iVar2 + 0x28));
          }
        }
      }
    }
    return uVar6;
  }
  iVar2 = func_0x029540a4(0xa68c,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar4,0,0);
  uVar6 = func_0x024f56e0(&uStack_30,0,0);
  return uVar6;
}

