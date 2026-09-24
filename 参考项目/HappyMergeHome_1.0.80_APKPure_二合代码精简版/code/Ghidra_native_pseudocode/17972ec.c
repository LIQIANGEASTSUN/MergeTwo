
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017a72ec(void)

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
  
  pcVar2 = (char *)(_UNK_017a7674 + 0x17a72fc);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a7678 + 0x17a7310));
    func_0x01438628(*(undefined4 *)(_UNK_017a767c + 0x17a731c));
    func_0x01438628(*(undefined4 *)(_UNK_017a7680 + 0x17a7328));
    func_0x01438628(*(undefined4 *)(_UNK_017a7684 + 0x17a7334));
    func_0x01438628(*(undefined4 *)(_UNK_017a7688 + 0x17a7340));
    func_0x01438628(*(undefined4 *)(_UNK_017a768c + 0x17a734c));
    func_0x01438628(*(undefined4 *)(_UNK_017a7690 + 0x17a7358));
    func_0x01438628(*(undefined4 *)(_UNK_017a7694 + 0x17a7364));
    func_0x01438628(*(undefined4 *)(_UNK_017a7698 + 0x17a7370));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1737,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1737,0);
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
  piVar5 = *(int **)(_UNK_017a769c + 0x17a73c4);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_0179d7ec();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_017a4c74(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0179d7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_0179db3c(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_017a76a0 + 0x17a7444) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_0179d7ec();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_017a2fe8(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026cde0c(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_017a76a4 + 0x17a74cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a76a8 + 0x17a74e8));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017a76ac + 0x17a7508));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
          iVar1 = 0;
          func_0x024f05a8(0,0x26,**(undefined4 **)(_UNK_017a76b4 + 0x17a7560));
          func_0x014388e4();
        }
        else {
          func_0x024f05a8(iVar1,0x26,**(undefined4 **)(_UNK_017a76b0 + 0x17a753c));
        }
        func_0x024f05a8(iVar1,0x27,**(undefined4 **)(_UNK_017a76b8 + 0x17a757c));
        if (*(int *)(**(int **)(_UNK_017a76bc + 0x17a7590) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a76c0 + 0x17a75ac));
        piVar5 = (int *)FUN_0179d7ec();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_017a76c4 + 0x17a75ec);
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

