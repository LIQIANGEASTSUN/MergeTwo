
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032a74dc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 uVar8;
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
  
  pcVar5 = (char *)(_UNK_032a777c + 0x32a74f0);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a7780 + 0x32a7504));
    func_0x01438628(*(undefined4 *)(_UNK_032a7784 + 0x32a7510));
    func_0x01438628(*(undefined4 *)(_UNK_032a7788 + 0x32a751c));
    func_0x01438628(*(undefined4 *)(_UNK_032a778c + 0x32a7528));
    func_0x01438628(*(undefined4 *)(_UNK_032a7790 + 0x32a7534));
    func_0x01438628(*(undefined4 *)(_UNK_032a7794 + 0x32a7540));
    func_0x01438628(*(undefined4 *)(_UNK_032a7798 + 0x32a754c));
    func_0x01438628(*(undefined4 *)(_UNK_032a779c + 0x32a7558));
    func_0x01438628(*(undefined4 *)(_UNK_032a77a0 + 0x32a7564));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ddb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ddb,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x4a) == '\0') {
    piVar7 = *(int **)(_UNK_032a77a4 + 0x32a75c8);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar6 = FUN_032a7050();
    if (*(int *)(**(int **)(_UNK_032a77a8 + 0x32a75ec) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024ef144(uVar6,0,0);
    if (iVar1 != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = FUN_032a7050();
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x032b7874(iVar1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x032a7ee4(iVar1);
      if (iVar1 == 0) {
        return;
      }
      piVar7 = *(int **)(_UNK_032a77ac + 0x32a7678);
      *(undefined1 *)(param_1 + 0x4a) = 1;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032a77b0 + 0x32a7698));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x0202998c(iVar1,0x755,0,0);
      if (*(int *)(**(int **)(_UNK_032a77b4 + 0x32a76cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      piVar7 = (int *)func_0x04e4a028(**(undefined4 **)(_UNK_032a77b8 + 0x32a76e8));
      if (piVar7 == (int *)0x0) {
        func_0x014388e4();
      }
      (**(code **)(*piVar7 + 0x230))(piVar7,2,*(undefined4 *)(*piVar7 + 0x234));
      uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_032a77bc + 0x32a7720));
      func_0x033341c0(uVar6,param_1,**(undefined4 **)(_UNK_032a77c0 + 0x32a773c),0);
      if (*(int *)(**(int **)(_UNK_032a77c4 + 0x32a7750) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar5 = (char *)(_UNK_02af1c3c + 0x2af1b30);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02af1c40 + 0x2af1b44),uVar6,1,0);
        func_0x01438628(*(undefined4 *)(_UNK_02af1c44 + 0x2af1b50));
        func_0x01438628(*(undefined4 *)(_UNK_02af1c48 + 0x2af1b5c));
        *pcVar5 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x9f1,0);
      if (iVar1 == 0) {
        iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c4c + 0x2af1bc4));
        func_0x024eeca8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar1 + 8) = uVar6;
        func_0x014385cc((undefined4 *)(iVar1 + 8),uVar6);
        uVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c50 + 0x2af1bfc));
        func_0x033341c0(uVar6,iVar1,**(undefined4 **)(_UNK_02af1c54 + 0x2af1c18),0);
        pcVar5 = (char *)(_UNK_033397d0 + 0x33396f8);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_033397d4 + 0x333970c),uVar6,1,0);
          func_0x01438628(*(undefined4 *)(_UNK_033397d8 + 0x3339718));
          func_0x01438628(*(undefined4 *)(_UNK_033397dc + 0x3339724));
          func_0x01438628(*(undefined4 *)(_UNK_033397e0 + 0x3339730));
          *pcVar5 = '\x01';
        }
        if (*(int *)(**(int **)(_UNK_033397e4 + 0x3339744) + 0x74) == 0) {
          func_0x014387a4();
        }
        uVar8 = func_0x0333764c();
        uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
        iVar1 = (int)uVar8;
        if (iVar1 != 0) {
          uVar2 = (uint)*(byte *)(iVar1 + 0x90);
        }
        if ((iVar1 != 0 && uVar2 != 0) && (*(char *)(iVar1 + 0xa0) == '\0')) {
          *(float *)(iVar1 + 200) = *(float *)(iVar1 + 0x60);
          *(float *)(iVar1 + 0x60) = *(float *)(iVar1 + 0x60) + 0.5;
        }
        uVar6 = func_0x03734fd0(iVar1,uVar6,**(undefined4 **)(_UNK_033397e8 + 0x3339774));
        iVar1 = func_0x03735e5c(uVar6,0,1,**(undefined4 **)(_UNK_033397ec + 0x333978c));
        uVar2 = **(uint **)(_UNK_033397f0 + 0x33397a0);
        if (iVar1 != 0) {
          uVar2 = (uint)*(byte *)(iVar1 + 0x90);
        }
        if (iVar1 != 0 && uVar2 != 0) {
          if (*(char *)(iVar1 + 0xa0) == '\0') {
            *(undefined1 *)(iVar1 + 0x5c) = 1;
          }
          return;
        }
        return;
      }
      iVar1 = func_0x029540a4(0x9f1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_20 = 0;
      func_0x02889978(iVar1,0x3f000000,uVar6,1);
      return;
    }
  }
  return;
}

