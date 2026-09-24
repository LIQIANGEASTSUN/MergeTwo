
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0300df48(void)

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
  
  pcVar3 = (char *)(_UNK_0300e294 + 0x300df58);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0300e298 + 0x300df6c));
    func_0x01438628(*(undefined4 *)(_UNK_0300e29c + 0x300df78));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2a0 + 0x300df84));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2a4 + 0x300df90));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2a8 + 0x300df9c));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2ac + 0x300dfa8));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2b0 + 0x300dfb4));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2b4 + 0x300dfc0));
    func_0x01438628(*(undefined4 *)(_UNK_0300e2b8 + 0x300dfcc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x159b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x159b,0);
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
  piVar6 = *(int **)(_UNK_0300e2bc + 0x300e020);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_03003ba4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_0300b910(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03003ba4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_03003ef4(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_0300e2c0 + 0x300e0a0) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_03003ba4();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_03009c84(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026ef320(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_0300e2c4 + 0x300e128) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300e2c8 + 0x300e144));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0300e2cc + 0x300e164));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b72000(iVar1,0x4a,**(undefined4 **)(_UNK_0300e2d0 + 0x300e19c));
        if (*(int *)(**(int **)(_UNK_0300e2d4 + 0x300e1b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0300e2d8 + 0x300e1cc));
        piVar6 = (int *)FUN_03003ba4();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_0300e2dc + 0x300e20c);
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

