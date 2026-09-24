
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030d6f68(void)

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
  
  pcVar3 = (char *)(_UNK_030d72b4 + 0x30d6f78);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d72b8 + 0x30d6f8c));
    func_0x01438628(*(undefined4 *)(_UNK_030d72bc + 0x30d6f98));
    func_0x01438628(*(undefined4 *)(_UNK_030d72c0 + 0x30d6fa4));
    func_0x01438628(*(undefined4 *)(_UNK_030d72c4 + 0x30d6fb0));
    func_0x01438628(*(undefined4 *)(_UNK_030d72c8 + 0x30d6fbc));
    func_0x01438628(*(undefined4 *)(_UNK_030d72cc + 0x30d6fc8));
    func_0x01438628(*(undefined4 *)(_UNK_030d72d0 + 0x30d6fd4));
    func_0x01438628(*(undefined4 *)(_UNK_030d72d4 + 0x30d6fe0));
    func_0x01438628(*(undefined4 *)(_UNK_030d72d8 + 0x30d6fec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1541,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1541,0);
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
  piVar6 = *(int **)(_UNK_030d72dc + 0x30d7040);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_030ccbc4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_030d4930(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_030ccbc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_030ccf14(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_030d72e0 + 0x30d70c0) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_030ccbc4();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_030d2ca4(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026ef320(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_030d72e4 + 0x30d7148) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d72e8 + 0x30d7164));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_030d72ec + 0x30d7184));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b72000(iVar1,0x45,**(undefined4 **)(_UNK_030d72f0 + 0x30d71bc));
        if (*(int *)(**(int **)(_UNK_030d72f4 + 0x30d71d0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d72f8 + 0x30d71ec));
        piVar6 = (int *)FUN_030ccbc4();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_030d72fc + 0x30d722c);
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

