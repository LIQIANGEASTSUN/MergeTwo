
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018056c8(void)

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
  
  pcVar2 = (char *)(_UNK_01805a50 + 0x18056d8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01805a54 + 0x18056ec));
    func_0x01438628(*(undefined4 *)(_UNK_01805a58 + 0x18056f8));
    func_0x01438628(*(undefined4 *)(_UNK_01805a5c + 0x1805704));
    func_0x01438628(*(undefined4 *)(_UNK_01805a60 + 0x1805710));
    func_0x01438628(*(undefined4 *)(_UNK_01805a64 + 0x180571c));
    func_0x01438628(*(undefined4 *)(_UNK_01805a68 + 0x1805728));
    func_0x01438628(*(undefined4 *)(_UNK_01805a6c + 0x1805734));
    func_0x01438628(*(undefined4 *)(_UNK_01805a70 + 0x1805740));
    func_0x01438628(*(undefined4 *)(_UNK_01805a74 + 0x180574c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13a4,0);
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
  piVar5 = *(int **)(_UNK_01805a78 + 0x18057a0);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_017faff8();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_01803064(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_017faff8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_017fb348(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01805a7c + 0x1805820) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_017faff8();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_018013d8(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026f1898(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_01805a80 + 0x18058a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01805a84 + 0x18058c4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01805a88 + 0x18058e4));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          func_0x024f05a8(0,0x13,**(undefined4 **)(_UNK_01805a90 + 0x180593c));
          func_0x014388e4();
        }
        else {
          func_0x024f05a8(iVar1,0x13,**(undefined4 **)(_UNK_01805a8c + 0x1805918));
        }
        func_0x024f05a8(iVar1,0x14,**(undefined4 **)(_UNK_01805a94 + 0x1805958));
        if (*(int *)(**(int **)(_UNK_01805a98 + 0x180596c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01805a9c + 0x1805988));
        piVar5 = (int *)FUN_017faff8();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_01805aa0 + 0x18059c8);
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

