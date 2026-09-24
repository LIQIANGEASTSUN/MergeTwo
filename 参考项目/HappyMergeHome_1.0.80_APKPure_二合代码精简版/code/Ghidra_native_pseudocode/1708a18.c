
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01718a18(void)

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
  
  pcVar2 = (char *)(_UNK_01718d64 + 0x1718a28);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01718d68 + 0x1718a3c));
    func_0x01438628(*(undefined4 *)(_UNK_01718d6c + 0x1718a48));
    func_0x01438628(*(undefined4 *)(_UNK_01718d70 + 0x1718a54));
    func_0x01438628(*(undefined4 *)(_UNK_01718d74 + 0x1718a60));
    func_0x01438628(*(undefined4 *)(_UNK_01718d78 + 0x1718a6c));
    func_0x01438628(*(undefined4 *)(_UNK_01718d7c + 0x1718a78));
    func_0x01438628(*(undefined4 *)(_UNK_01718d80 + 0x1718a84));
    func_0x01438628(*(undefined4 *)(_UNK_01718d84 + 0x1718a90));
    func_0x01438628(*(undefined4 *)(_UNK_01718d88 + 0x1718a9c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x164f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x164f,0);
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
  piVar5 = *(int **)(_UNK_01718d8c + 0x1718af0);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0170e674();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_017163e0(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0170e674();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0170e9c4(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01718d90 + 0x1718b70) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_0170e674();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_01714754(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ef320(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_01718d94 + 0x1718bf8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01718d98 + 0x1718c14));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01718d9c + 0x1718c34));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05a8(iVar1,0x54,**(undefined4 **)(_UNK_01718da0 + 0x1718c6c));
        if (*(int *)(**(int **)(_UNK_01718da4 + 0x1718c80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01718da8 + 0x1718c9c));
        piVar5 = (int *)FUN_0170e674();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_01718dac + 0x1718cdc);
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

