
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b9fc94(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar6 = (char *)(_UNK_02b9febc + 0x2b9fca8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b9fec0 + 0x2b9fcbc));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fec4 + 0x2b9fcc8));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fec8 + 0x2b9fcd4));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fecc + 0x2b9fce0));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fed0 + 0x2b9fcec));
    func_0x01438628(*(undefined4 *)(_UNK_02b9fed4 + 0x2b9fcf8));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xe76,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xe76,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_02b9fed8 + 0x2b9fd50);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02b9fedc + 0x2b9fd6c);
  iVar3 = func_0x014e9518(*puVar9);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x02d0fe1c(iVar3,0);
  if (1 < iVar3) {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(*puVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02d0fe1c(iVar3,0);
    if (iVar3 < 4) {
      piVar8 = (int *)(param_1 + 0x18);
      iVar3 = *piVar8;
      if (iVar3 != 0) {
        iVar5 = **(int **)(**(int **)(_UNK_02b9fee0 + 0x2b9fdf0) + 0x5c);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        func_0x02e876b4(iVar5,iVar3,0);
      }
      iVar3 = **(int **)(**(int **)(_UNK_02b9fee4 + 0x2b9fe20) + 0x5c);
      uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02b9fee8 + 0x2b9fe30));
      func_0x0152e3ec(uVar7,param_1,**(undefined4 **)(_UNK_02b9feec + 0x2b9fe50),0);
      if (*(int *)(**(int **)(_UNK_02b9fef0 + 0x2b9fe64) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar7 = func_0x02ae4d4c(0x3f800000,uVar7,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x02e76744(iVar3,uVar7,0);
      *piVar8 = iVar3;
      if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
        puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)piVar8 >> 0x11) * 4);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)piVar8 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
  }
  return;
}

