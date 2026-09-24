
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032ab2f0(void)

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
  
  pcVar3 = (char *)(_UNK_032ab63c + 0x32ab300);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032ab640 + 0x32ab314));
    func_0x01438628(*(undefined4 *)(_UNK_032ab644 + 0x32ab320));
    func_0x01438628(*(undefined4 *)(_UNK_032ab648 + 0x32ab32c));
    func_0x01438628(*(undefined4 *)(_UNK_032ab64c + 0x32ab338));
    func_0x01438628(*(undefined4 *)(_UNK_032ab650 + 0x32ab344));
    func_0x01438628(*(undefined4 *)(_UNK_032ab654 + 0x32ab350));
    func_0x01438628(*(undefined4 *)(_UNK_032ab658 + 0x32ab35c));
    func_0x01438628(*(undefined4 *)(_UNK_032ab65c + 0x32ab368));
    func_0x01438628(*(undefined4 *)(_UNK_032ab660 + 0x32ab374));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x138d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x138d,0);
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
  piVar6 = *(int **)(_UNK_032ab664 + 0x32ab3c8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_032a3fc4();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar2 = 0;
  iVar1 = FUN_032a8ec4(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032a3fc4();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_032a4314(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_032ab668 + 0x32ab448) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar2 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_032a3fc4();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_032a7be8(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ee2b0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_032ab66c + 0x32ab4d0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032ab670 + 0x32ab4ec));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_032ab674 + 0x32ab50c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x03b72000(iVar1,0x15,**(undefined4 **)(_UNK_032ab678 + 0x32ab544));
        if (*(int *)(**(int **)(_UNK_032ab67c + 0x32ab558) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032ab680 + 0x32ab574));
        piVar6 = (int *)FUN_032a3fc4();
        if (piVar6 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar2 = (**(code **)(*piVar6 + 0x198))(piVar6,*(undefined4 *)(*piVar6 + 0x19c));
        iVar7 = **(int **)(_UNK_032ab684 + 0x32ab5b4);
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

