
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_01da64ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
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
  
  pcVar5 = (char *)(_UNK_01da66fc + 0x1da64cc);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da6700 + 0x1da64ec));
    func_0x01438628(*(undefined4 *)(_UNK_01da6704 + 0x1da64f8));
    func_0x01438628(*(undefined4 *)(_UNK_01da6708 + 0x1da6504));
    func_0x01438628(*(undefined4 *)(_UNK_01da670c + 0x1da6510));
    func_0x01438628(*(undefined4 *)(_UNK_01da6710 + 0x1da651c));
    func_0x01438628(*(undefined4 *)(_UNK_01da6714 + 0x1da6528));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3ecd,0);
  if (iVar1 == 0) {
    uStack_38 = param_5;
    uStack_34 = param_6;
    uStack_30 = 0;
    func_0x02bf15ac(param_1,param_2,param_3,param_4);
    if (*(int *)(**(int **)(_UNK_01da6718 + 0x1da65bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01da3ca8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x01da6730(iVar1,param_4,param_6);
    iVar1 = **(int **)(**(int **)(_UNK_01da671c + 0x1da65fc) + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0x8fd,0,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      piVar7 = *(int **)(_UNK_01da6720 + 0x1da6638);
      iVar1 = *piVar7;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar7;
      }
      iVar6 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar6 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar7;
        }
        uVar2 = **(undefined4 **)(iVar1 + 0x5c);
        iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_01da6724 + 0x1da6680));
        func_0x0152e3ec(iVar6,uVar2,**(undefined4 **)(_UNK_01da6728 + 0x1da66a0),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
        *piVar7 = iVar6;
        func_0x014385cc(piVar7,iVar6);
      }
      if (*(int *)(**(int **)(_UNK_01da672c + 0x1da66c8) + 0x74) == 0) {
        func_0x014387a4();
      }
      pcVar5 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),iVar6,0);
        func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
        *pcVar5 = '\x01';
      }
      iVar1 = func_0x02953fd4(0x6ba,0);
      if (iVar1 != 0) {
        iVar1 = func_0x029540a4(0x6ba,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x024f56c0(&uStack_50,0,iVar6,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01523a4c(&uStack_38,0x3e4ccccd,0);
        func_0x01523a6c(&uStack_38,iVar6,0);
        iVar6 = *(int *)(iVar1 + 8);
        uVar2 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar4 = 3;
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        uVar2 = func_0x024f56d0(iVar6,uVar2,&uStack_38,uVar4,0,0);
        return uVar2;
      }
      iVar1 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
      if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x029a9b60(0x3e4ccccd,iVar6);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      pcVar5 = (char *)(_UNK_02e76828 + 0x2e7675c);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar6,0);
        *pcVar5 = '\x01';
      }
      iVar3 = func_0x02953fd4(0x4cc,0);
      if (iVar3 != 0) {
        iVar3 = func_0x029540a4(0x4cc,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        pcVar5 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
        if (*pcVar5 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar6,0);
          *pcVar5 = '\x01';
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
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01523a6c(&uStack_38,iVar1,0);
        func_0x01523a6c(&uStack_38,iVar6,0);
        iVar6 = *(int *)(iVar3 + 8);
        uVar2 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar4 = 3;
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        func_0x024f56d0(iVar6,uVar2,&uStack_38,uVar4,0,0);
        uVar2 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
        return uVar2;
      }
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x024ef144(uVar2,0,0);
      if (iVar6 != 0 && iVar3 != 0) {
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar2 = (*(code *)&UNK_05d3fe88)(iVar1,iVar6,0);
        return uVar2;
      }
      return 0;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3ecd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = 0;
    uStack_38 = param_4;
    uVar2 = func_0x028bc180(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

