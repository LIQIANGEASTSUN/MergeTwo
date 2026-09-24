
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017acff0(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_017ad308 + 0x17ad004);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017ad30c + 0x17ad018));
    func_0x01438628(*(undefined4 *)(_UNK_017ad310 + 0x17ad024));
    func_0x01438628(*(undefined4 *)(_UNK_017ad314 + 0x17ad030));
    func_0x01438628(*(undefined4 *)(_UNK_017ad318 + 0x17ad03c));
    func_0x01438628(*(undefined4 *)(_UNK_017ad31c + 0x17ad048));
    func_0x01438628(*(undefined4 *)(_UNK_017ad320 + 0x17ad054));
    func_0x01438628(*(undefined4 *)(_UNK_017ad324 + 0x17ad060));
    func_0x01438628(*(undefined4 *)(_UNK_017ad328 + 0x17ad06c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x175e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x175e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar6,&uStack_30,uVar4,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  piVar9 = *(int **)(_UNK_017ad32c + 0x17ad0c4);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0179d7ec();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_0179ead8(iVar1);
  uVar4 = 0;
  if (iVar1 != 0) {
    piVar10 = *(int **)(_UNK_017ad330 + 0x17ad108);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_017ad334 + 0x17ad124);
    iVar1 = func_0x014e96a8(*puVar11);
    iVar8 = *piVar9;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar9;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar6,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_017ad338 + 0x17ad184) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017ad33c + 0x17ad1a0));
      piVar5 = *(int **)(_UNK_017ad340 + 0x17ad1b4);
      iVar8 = *piVar5;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_017ad344 + 0x17ad1d4);
      iVar2 = *(int *)(iVar7 + 0x1c);
      uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x7e4);
      if (iVar2 == 0) {
        func_0x014909d8(iVar7);
        iVar2 = *(int *)(iVar7 + 0x1c);
      }
      iVar8 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = func_0x0149097c();
      }
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = func_0x0149097c();
      }
      uVar6 = **(undefined4 **)(iVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b0c90c(iVar1,uVar4,uVar6,0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e96a8(*puVar11);
      iVar8 = *piVar9;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar9;
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xc);
      if (*(int *)(**(int **)(_UNK_017ad348 + 0x17ad29c) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_017ad348 + 0x17ad29c));
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,uVar4);
      uVar4 = 1;
    }
  }
  return uVar4;
}

