
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c4bc20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c4bfcc + 0x2c4bc3c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfd0 + 0x2c4bc50));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfd4 + 0x2c4bc5c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfd8 + 0x2c4bc68));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfdc + 0x2c4bc74));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfe0 + 0x2c4bc80));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfe4 + 0x2c4bc8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfe8 + 0x2c4bc98));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bfec + 0x2c4bca4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bff0 + 0x2c4bcb0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bff4 + 0x2c4bcbc));
    func_0x01438628(*(undefined4 *)(_UNK_02c4bff8 + 0x2c4bcc8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f09,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f09,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_02876c10 + 0x2876b1c);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02876c14 + 0x2876b30),param_1,param_2,0);
      *pcVar6 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar8,&uStack_38,uVar3,0,0);
    iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02876c18 + 0x2876c00));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02c4bffc + 0x2c4bd28));
  func_0x024eeca8(iVar1,0);
  piVar11 = (int *)(param_1 + 0x10);
  iVar5 = *piVar11;
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar5 + 0xc);
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
  if (0 < iVar2) {
    func_0x01523bec(*(undefined4 *)(iVar5 + 8),0,iVar2,0);
  }
  piVar9 = *(int **)(_UNK_02c4c000 + 0x2c4bd84);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar4 = *(undefined4 **)(_UNK_02c4c004 + 0x2c4bda0);
  iVar5 = func_0x014e9518(*puVar4);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = func_0x029a6fa8(iVar5,param_2,0);
  if (iVar5 != 0) {
    uVar8 = *(undefined4 *)(iVar5 + 0x30);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(*puVar4);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x029b0f58(iVar5,uVar8,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    piVar10 = *(int **)(_UNK_02c4c008 + 0x2c4be2c);
    uVar8 = *(undefined4 *)(iVar5 + 0x20);
    iVar2 = *piVar10;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar10;
    }
    iVar7 = *(int *)(*(int *)(iVar2 + 0x5c) + 8);
    if (iVar7 == 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x014387a4();
        iVar2 = *piVar10;
      }
      uVar3 = **(undefined4 **)(iVar2 + 0x5c);
      iVar7 = func_0x014388d4(**(undefined4 **)(_UNK_02c4c00c + 0x2c4be7c));
      func_0x045f8e0c(iVar7,uVar3,**(undefined4 **)(_UNK_02c4c010 + 0x2c4be9c),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
      *piVar10 = iVar7;
      func_0x014385cc(piVar10,iVar7);
      puVar4 = *(undefined4 **)(_UNK_02c4c014 + 0x2c4bec8);
    }
    func_0x0353cc14(uVar8,iVar7,**(undefined4 **)(_UNK_02c4c018 + 0x2c4bed4));
    iVar2 = *(int *)(iVar5 + 0x20);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      iVar5 = *(int *)(iVar5 + 0x20);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar5 + 0xc) == 0) {
        func_0x014388e8();
      }
      uVar8 = *(undefined4 *)(iVar5 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar5 = *piVar9;
      *(undefined4 *)(iVar1 + 8) = uVar8;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(*puVar4);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x10);
      uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02c4c01c + 0x2c4bf64));
      func_0x03a062d0(uVar8,iVar1,**(undefined4 **)(_UNK_02c4c020 + 0x2c4bf84),0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x024f0f0c(iVar5,uVar8,**(undefined4 **)(_UNK_02c4c024 + 0x2c4bfa8));
      *piVar11 = iVar1;
      func_0x014385cc(piVar11,iVar1);
    }
  }
  return *piVar11;
}

