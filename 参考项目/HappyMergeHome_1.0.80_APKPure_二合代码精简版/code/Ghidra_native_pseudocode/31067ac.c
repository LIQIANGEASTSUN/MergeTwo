
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031167ac(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_03116ac4 + 0x31167c0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03116ac8 + 0x31167d4));
    func_0x01438628(*(undefined4 *)(_UNK_03116acc + 0x31167e0));
    func_0x01438628(*(undefined4 *)(_UNK_03116ad0 + 0x31167ec));
    func_0x01438628(*(undefined4 *)(_UNK_03116ad4 + 0x31167f8));
    func_0x01438628(*(undefined4 *)(_UNK_03116ad8 + 0x3116804));
    func_0x01438628(*(undefined4 *)(_UNK_03116adc + 0x3116810));
    func_0x01438628(*(undefined4 *)(_UNK_03116ae0 + 0x311681c));
    func_0x01438628(*(undefined4 *)(_UNK_03116ae4 + 0x3116828));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1472,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1472,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar5,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar9 = *(int **)(_UNK_03116ae8 + 0x3116880);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03105aec();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_03106dd8(iVar1);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar10 = *(int **)(_UNK_03116aec + 0x31168c4);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_03116af0 + 0x31168e0);
    iVar1 = func_0x03b2c734(*puVar11);
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar9;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar5,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_03116af4 + 0x3116940) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03116af8 + 0x311695c));
      piVar6 = *(int **)(_UNK_03116afc + 0x3116970);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_03116b00 + 0x3116990);
      iVar2 = *(int *)(iVar8 + 0x1c);
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x8cc);
      if (iVar2 == 0) {
        func_0x014909d8(iVar8);
        iVar2 = *(int *)(iVar8 + 0x1c);
      }
      iVar7 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x0149097c();
      }
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
        iVar7 = func_0x0149097c();
      }
      uVar5 = **(undefined4 **)(iVar7 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b0c90c(iVar1,uVar3,uVar5,0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar11);
      iVar7 = *piVar9;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar9;
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
      if (*(int *)(**(int **)(_UNK_03116b04 + 0x3116a58) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_03116b04 + 0x3116a58));
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,uVar3);
      uVar3 = 1;
    }
  }
  return uVar3;
}

