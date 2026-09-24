
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03246c14(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_03246f74 + 0x3246c28);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03246f78 + 0x3246c3c));
    func_0x01438628(*(undefined4 *)(_UNK_03246f7c + 0x3246c48));
    func_0x01438628(*(undefined4 *)(_UNK_03246f80 + 0x3246c54));
    func_0x01438628(*(undefined4 *)(_UNK_03246f84 + 0x3246c60));
    func_0x01438628(*(undefined4 *)(_UNK_03246f88 + 0x3246c6c));
    func_0x01438628(*(undefined4 *)(_UNK_03246f8c + 0x3246c78));
    func_0x01438628(*(undefined4 *)(_UNK_03246f90 + 0x3246c84));
    func_0x01438628(*(undefined4 *)(_UNK_03246f94 + 0x3246c90));
    func_0x01438628(*(undefined4 *)(_UNK_03246f98 + 0x3246c9c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x16f7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x16f7,0);
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
  piVar10 = *(int **)(_UNK_03246f9c + 0x3246cf4);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032356b8();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_032369a4(iVar1);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar11 = *(int **)(_UNK_03246fa0 + 0x3246d38);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_03246fa4 + 0x3246d54);
    iVar1 = func_0x03b2c734(*puVar12);
    iVar7 = *piVar10;
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x014387a4();
      iVar7 = *piVar10;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar5,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_03246fa8 + 0x3246db4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03246fac + 0x3246dd0));
      piVar6 = *(int **)(_UNK_03246fb0 + 0x3246de4);
      iVar7 = *piVar6;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x014387a4();
        iVar7 = *piVar6;
      }
      iVar8 = **(int **)(_UNK_03246fb4 + 0x3246e04);
      iVar2 = *(int *)(iVar8 + 0x1c);
      uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xafc);
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
      uVar9 = **(undefined4 **)(iVar7 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      uVar5 = func_0x02b0c90c(iVar1,uVar5,uVar9,0);
      if (*(int *)(**(int **)(_UNK_03246fb8 + 0x3246e9c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar5,0,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x03b2c734(*puVar12);
        iVar7 = *piVar10;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
          iVar7 = *piVar10;
        }
        uVar3 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0xc);
        if (*(int *)(**(int **)(_UNK_03246fbc + 0x3246f08) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_03246fbc + 0x3246f08));
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
  }
  return uVar3;
}

