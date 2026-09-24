
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba49d4(undefined4 param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02ba4be0 + 0x2ba49ec);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba4be4 + 0x2ba4a00));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4be8 + 0x2ba4a0c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba4bec + 0x2ba4a18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xfde,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xfde,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_02ba4bf0 + 0x2ba4a74);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_02ba4bf4 + 0x2ba4a90);
  iVar1 = func_0x014e9518(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02e798a0(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02e7b158(iVar1,0);
    if (iVar1 != 0) {
      piVar8 = *(int **)(_UNK_02ba4bf8 + 0x2ba4b04);
      iVar1 = **(int **)(*piVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02b63a9c(iVar1,0x1f9,0,0);
      if (iVar1 == 0) {
        iVar1 = **(int **)(*piVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b67784(iVar1,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar7);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar10 = func_0x02e79bac(iVar1,0);
          uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
          iVar1 = **(int **)(*piVar8 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
            uVar6 = extraout_r1;
          }
          bVar9 = (int)uVar10 != 0;
          if (bVar9) {
            uVar6 = 0x1f9;
          }
          uStack_20 = 0;
          if (!bVar9) {
            uVar6 = 0x97;
          }
          func_0x02b6127c(iVar1,uVar6,0,0);
        }
      }
    }
  }
  return;
}

