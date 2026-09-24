
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f2790c(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
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
  
  pcVar3 = (char *)(_UNK_02f27c94 + 0x2f2791c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f27c98 + 0x2f27930));
    func_0x01438628(*(undefined4 *)(_UNK_02f27c9c + 0x2f2793c));
    func_0x01438628(*(undefined4 *)(_UNK_02f27ca0 + 0x2f27948));
    func_0x01438628(*(undefined4 *)(_UNK_02f27ca4 + 0x2f27954));
    func_0x01438628(*(undefined4 *)(_UNK_02f27ca8 + 0x2f27960));
    func_0x01438628(*(undefined4 *)(_UNK_02f27cac + 0x2f2796c));
    func_0x01438628(*(undefined4 *)(_UNK_02f27cb0 + 0x2f27978));
    func_0x01438628(*(undefined4 *)(_UNK_02f27cb4 + 0x2f27984));
    func_0x01438628(*(undefined4 *)(_UNK_02f27cb8 + 0x2f27990));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1326,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1326,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar6 = *(int **)(_UNK_02f27cbc + 0x2f279e4);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_02f1f154();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_02f25aac(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f1f154();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_02f1f4a4(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02f27cc0 + 0x2f27a64) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_02f1f154();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_02f23d18(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026f1898(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_02f27cc4 + 0x2f27aec) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f27cc8 + 0x2f27b08));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_02f27ccc + 0x2f27b28));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          func_0x03b72000(0,0xe,**(undefined4 **)(_UNK_02f27cd4 + 0x2f27b80));
          func_0x014388e4();
        }
        else {
          func_0x03b72000(iVar1,0xe,**(undefined4 **)(_UNK_02f27cd0 + 0x2f27b5c));
        }
        func_0x03b72000(iVar1,0xf,**(undefined4 **)(_UNK_02f27cd8 + 0x2f27b9c));
        if (*(int *)(**(int **)(_UNK_02f27cdc + 0x2f27bb0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f27ce0 + 0x2f27bcc));
        piVar6 = (int *)FUN_02f1f154();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_02f27ce4 + 0x2f27c0c);
        iVar5 = *(int *)(iVar7 + 0x1c);
        if (iVar5 == 0) {
          func_0x014909d8(iVar7);
          iVar5 = *(int *)(iVar7 + 0x1c);
        }
        iVar5 = *(int *)(iVar5 + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
        if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
          iVar5 = func_0x0149097c();
        }
        uVar4 = **(undefined4 **)(iVar5 + 0x5c);
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

