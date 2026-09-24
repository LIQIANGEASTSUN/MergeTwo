
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01680a14(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
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
  
  pcVar2 = (char *)(_UNK_01680d60 + 0x1680a24);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01680d64 + 0x1680a38));
    func_0x01438628(*(undefined4 *)(_UNK_01680d68 + 0x1680a44));
    func_0x01438628(*(undefined4 *)(_UNK_01680d6c + 0x1680a50));
    func_0x01438628(*(undefined4 *)(_UNK_01680d70 + 0x1680a5c));
    func_0x01438628(*(undefined4 *)(_UNK_01680d74 + 0x1680a68));
    func_0x01438628(*(undefined4 *)(_UNK_01680d78 + 0x1680a74));
    func_0x01438628(*(undefined4 *)(_UNK_01680d7c + 0x1680a80));
    func_0x01438628(*(undefined4 *)(_UNK_01680d80 + 0x1680a8c));
    func_0x01438628(*(undefined4 *)(_UNK_01680d84 + 0x1680a98));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15f5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x15f5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar5 = *(int **)(_UNK_01680d88 + 0x1680aec);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01676670();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_0167e3dc(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01676670();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_016769c0(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01680d8c + 0x1680b6c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01676670();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_0167c750(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ef320(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_01680d90 + 0x1680bf4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01680d94 + 0x1680c10));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01680d98 + 0x1680c30));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05a8(iVar1,0x4f,**(undefined4 **)(_UNK_01680d9c + 0x1680c68));
        if (*(int *)(**(int **)(_UNK_01680da0 + 0x1680c7c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01680da4 + 0x1680c98));
        piVar5 = (int *)FUN_01676670();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_01680da8 + 0x1680cd8);
        iVar7 = *(int *)(iVar6 + 0x1c);
        if (iVar7 == 0) {
          func_0x014909d8(iVar6);
          iVar7 = *(int *)(iVar6 + 0x1c);
        }
        iVar7 = *(int *)(iVar7 + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar7 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar7 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar3,uVar4,0);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

