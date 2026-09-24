
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01daa734(void)

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
  
  pcVar2 = (char *)(_UNK_01daaa80 + 0x1daa744);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01daaa84 + 0x1daa758));
    func_0x01438628(*(undefined4 *)(_UNK_01daaa88 + 0x1daa764));
    func_0x01438628(*(undefined4 *)(_UNK_01daaa8c + 0x1daa770));
    func_0x01438628(*(undefined4 *)(_UNK_01daaa90 + 0x1daa77c));
    func_0x01438628(*(undefined4 *)(_UNK_01daaa94 + 0x1daa788));
    func_0x01438628(*(undefined4 *)(_UNK_01daaa98 + 0x1daa794));
    func_0x01438628(*(undefined4 *)(_UNK_01daaa9c + 0x1daa7a0));
    func_0x01438628(*(undefined4 *)(_UNK_01daaaa0 + 0x1daa7ac));
    func_0x01438628(*(undefined4 *)(_UNK_01daaaa4 + 0x1daa7b8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1312,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1312,0);
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
  piVar5 = *(int **)(_UNK_01daaaa8 + 0x1daa80c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01da3ca8();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_01da858c(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01da3ca8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_01da3ff8(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01daaaac + 0x1daa88c) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_01da3ca8();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_01da70cc(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026cd6d8(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_01daaab0 + 0x1daa914) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01daaab4 + 0x1daa930));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01daaab8 + 0x1daa950));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b72000(iVar1,0xd,**(undefined4 **)(_UNK_01daaabc + 0x1daa988));
        if (*(int *)(**(int **)(_UNK_01daaac0 + 0x1daa99c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01daaac4 + 0x1daa9b8));
        piVar5 = (int *)FUN_01da3ca8();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_01daaac8 + 0x1daa9f8);
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

