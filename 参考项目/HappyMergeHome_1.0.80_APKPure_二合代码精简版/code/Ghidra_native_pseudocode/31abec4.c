
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031bbec4(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
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
  
  pcVar3 = (char *)(_UNK_031bc294 + 0x31bbed4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031bc298 + 0x31bbee8));
    func_0x01438628(*(undefined4 *)(_UNK_031bc29c + 0x31bbef4));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2a0 + 0x31bbf00));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2a4 + 0x31bbf0c));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2a8 + 0x31bbf18));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2ac + 0x31bbf24));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2b0 + 0x31bbf30));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2b4 + 0x31bbf3c));
    func_0x01438628(*(undefined4 *)(_UNK_031bc2b8 + 0x31bbf48));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1799,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1799,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
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
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar7 = *(int **)(_UNK_031bc2bc + 0x31bbf9c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_031b08c8();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_031b9814(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_031b08c8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_031b0c18(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_031bc2c0 + 0x31bc01c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_031b08c8();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_031b7b88(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026f0a50(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_031bc2c4 + 0x31bc0a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031bc2c8 + 0x31bc0c0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_031bc2cc + 0x31bc0e0));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          puVar5 = *(undefined4 **)(_UNK_031bc2d4 + 0x31bc15c);
          func_0x03b72000(0,0x22,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x23,*puVar5);
          func_0x014388e4();
          func_0x03b72000(0,0x24,*puVar5);
          func_0x014388e4();
        }
        else {
          puVar5 = *(undefined4 **)(_UNK_031bc2d0 + 0x31bc118);
          func_0x03b72000(iVar1,0x22,*puVar5);
          func_0x03b72000(iVar1,0x23,*puVar5);
          func_0x03b72000(iVar1,0x24,*puVar5);
        }
        func_0x03b72000(iVar1,0x25,**(undefined4 **)(_UNK_031bc2d8 + 0x31bc19c));
        if (*(int *)(**(int **)(_UNK_031bc2dc + 0x31bc1b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031bc2e0 + 0x31bc1cc));
        piVar7 = (int *)FUN_031b08c8();
        if (piVar7 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar7 + 0x198))(piVar7,*(undefined4 *)(*piVar7 + 0x19c));
        iVar8 = **(int **)(_UNK_031bc2e4 + 0x31bc20c);
        iVar6 = *(int *)(iVar8 + 0x1c);
        if (iVar6 == 0) {
          func_0x014909d8(iVar8);
          iVar6 = *(int *)(iVar8 + 0x1c);
        }
        iVar6 = *(int *)(iVar6 + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar6 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02b0c90c(iVar1,uVar2,uVar4,0);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

