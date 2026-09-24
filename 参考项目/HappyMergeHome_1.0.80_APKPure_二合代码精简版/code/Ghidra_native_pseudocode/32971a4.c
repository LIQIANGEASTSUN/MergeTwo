
/* WARNING: Removing unreachable block (ram,0x029a9f14) */
/* WARNING: Removing unreachable block (ram,0x029a9f1c) */
/* WARNING: Removing unreachable block (ram,0x029a9f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_032a71a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
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
  
  pcVar7 = (char *)(_UNK_032a739c + 0x32a71c4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032a73a0 + 0x32a71e4));
    func_0x01438628(*(undefined4 *)(_UNK_032a73a4 + 0x32a71f0));
    func_0x01438628(*(undefined4 *)(_UNK_032a73a8 + 0x32a71fc));
    func_0x01438628(*(undefined4 *)(_UNK_032a73ac + 0x32a7208));
    func_0x01438628(*(undefined4 *)(_UNK_032a73b0 + 0x32a7214));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x826b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x826b,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = param_5;
    uStack_30 = param_6;
    uStack_2c = 0;
    uStack_38 = param_4;
    uVar3 = func_0x028bc180(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_032a73b4 + 0x32a7284) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = FUN_032a3fc4();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x032a73c8(iVar2,param_4,param_6);
  iVar2 = FUN_032a3fc4();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x032a74dc(iVar2);
  piVar6 = *(int **)(_UNK_032a73b8 + 0x32a72e0);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x014387a4();
    iVar2 = *piVar6;
  }
  iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar5 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x014387a4();
      iVar2 = *piVar6;
    }
    uVar3 = **(undefined4 **)(iVar2 + 0x5c);
    iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032a73bc + 0x32a7328));
    func_0x05096384(iVar5,uVar3,**(undefined4 **)(_UNK_032a73c0 + 0x32a7348),0);
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
    *piVar6 = iVar5;
    func_0x014385cc(piVar6,iVar5);
  }
  if (*(int *)(**(int **)(_UNK_032a73c4 + 0x32a7370) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar7 = (char *)(_UNK_029a9f38 + 0x29a9e2c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029a9f3c + 0x29a9e40),iVar5,0);
    func_0x01438628(*(undefined4 *)(_UNK_029a9f40 + 0x29a9e4c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x6ba,0);
  if (iVar2 == 0) {
    iVar2 = **(int **)(**(int **)(_UNK_029a9f44 + 0x29a9ebc) + 0x5c);
    if (*(int *)(**(int **)(_UNK_029a9f48 + 0x29a9ec8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x029a9b60(0x3e4ccccd,iVar5);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_02e76828 + 0x2e7675c);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar5,0);
      *pcVar7 = '\x01';
    }
    iVar1 = func_0x02953fd4(0x4cc,0);
    if (iVar1 == 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
      if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024ef144(uVar3,0,0);
      if (iVar5 != 0 && iVar1 != 0) {
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar3 = (*(code *)&UNK_05d3fe88)(iVar2,iVar5,0);
        return uVar3;
      }
      return 0;
    }
    iVar1 = func_0x029540a4(0x4cc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar7 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar2,iVar5,0);
      *pcVar7 = '\x01';
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
    func_0x01523a6c(&uStack_38,iVar2,0);
    func_0x01523a6c(&uStack_38,iVar5,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar3,&uStack_38,uVar4,0,0);
    uVar3 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
    return uVar3;
  }
  iVar2 = func_0x029540a4(0x6ba,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,iVar5,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a4c(&uStack_38,0x3e4ccccd,0);
  func_0x01523a6c(&uStack_38,iVar5,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  uVar3 = func_0x024f56d0(iVar5,uVar3,&uStack_38,uVar4,0,0);
  return uVar3;
}

