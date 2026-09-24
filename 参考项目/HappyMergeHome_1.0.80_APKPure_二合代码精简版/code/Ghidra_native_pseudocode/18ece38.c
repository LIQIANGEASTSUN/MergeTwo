
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018fce38(void)

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
  
  pcVar2 = (char *)(_UNK_018fd184 + 0x18fce48);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018fd188 + 0x18fce5c));
    func_0x01438628(*(undefined4 *)(_UNK_018fd18c + 0x18fce68));
    func_0x01438628(*(undefined4 *)(_UNK_018fd190 + 0x18fce74));
    func_0x01438628(*(undefined4 *)(_UNK_018fd194 + 0x18fce80));
    func_0x01438628(*(undefined4 *)(_UNK_018fd198 + 0x18fce8c));
    func_0x01438628(*(undefined4 *)(_UNK_018fd19c + 0x18fce98));
    func_0x01438628(*(undefined4 *)(_UNK_018fd1a0 + 0x18fcea4));
    func_0x01438628(*(undefined4 *)(_UNK_018fd1a4 + 0x18fceb0));
    func_0x01438628(*(undefined4 *)(_UNK_018fd1a8 + 0x18fcebc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x13f7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x13f7,0);
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
  piVar5 = *(int **)(_UNK_018fd1ac + 0x18fcf10);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018f5b04();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = 0;
  iVar1 = FUN_018faa04(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018f5b04();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_018f5e54(iVar1);
    if (iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_018fd1b0 + 0x18fcf90) + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = 0;
      iVar1 = func_0x02b67784(iVar1,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar5 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = FUN_018f5b04();
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = FUN_018f9728(iVar1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026ee2b0(iVar1,1,0);
        if (*(int *)(**(int **)(_UNK_018fd1b4 + 0x18fd018) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fd1b8 + 0x18fd034));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_018fd1bc + 0x18fd054));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f05a8(iVar1,0x18,**(undefined4 **)(_UNK_018fd1c0 + 0x18fd08c));
        if (*(int *)(**(int **)(_UNK_018fd1c4 + 0x18fd0a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018fd1c8 + 0x18fd0bc));
        piVar5 = (int *)FUN_018f5b04();
        if (piVar5 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar3 = (**(code **)(*piVar5 + 0x198))(piVar5,*(undefined4 *)(*piVar5 + 0x19c));
        iVar6 = **(int **)(_UNK_018fd1cc + 0x18fd0fc);
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

