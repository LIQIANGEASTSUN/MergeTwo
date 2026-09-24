
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b4a748(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b4aa40 + 0x2b4a760);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa44 + 0x2b4a774));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa48 + 0x2b4a780));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa4c + 0x2b4a78c));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa50 + 0x2b4a798));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa54 + 0x2b4a7a4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa58 + 0x2b4a7b0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa5c + 0x2b4a7bc));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa60 + 0x2b4a7c8));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa64 + 0x2b4a7d4));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa68 + 0x2b4a7e0));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa6c + 0x2b4a7ec));
    func_0x01438628(*(undefined4 *)(_UNK_02b4aa70 + 0x2b4a7f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x19e8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x19e8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar6 = (char *)(_UNK_0287ab98 + 0x287aab8);
    if (*pcVar6 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0287ab9c + 0x287aacc),param_1,0);
      *pcVar6 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    iVar1 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0287aba0 + 0x287ab88));
    return iVar1;
  }
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02b4aa74 + 0x2b4a854));
  func_0x024f0510(iVar1,**(undefined4 **)(_UNK_02b4aa78 + 0x2b4a868));
  if (*(int *)(**(int **)(_UNK_02b4aa7c + 0x2b4a87c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02b4aa80 + 0x2b4a898));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  puVar11 = *(undefined4 **)(_UNK_02b4aa84 + 0x2b4a8bc);
  iVar5 = func_0x036c7bec(iVar5,*puVar11);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar5 + 0x130);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x047536e4(iVar5,**(undefined4 **)(_UNK_02b4aa88 + 0x2b4a8ec));
  iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02b4aa8c + 0x2b4a904));
  func_0x024f108c(iVar5,uVar7,**(undefined4 **)(_UNK_02b4aa90 + 0x2b4a91c));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar8 = *(int *)(iVar5 + 0xc) - 1;
  if (-1 < (int)uVar8) {
    puVar9 = *(undefined4 **)(_UNK_02b4aa94 + 0x2b4a948);
    puVar10 = *(undefined4 **)(_UNK_02b4aa98 + 0x2b4a950);
    do {
      if (*(int *)(**(int **)(_UNK_02b4aa9c + 0x2b4a958) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02b4aaa0 + 0x2b4a974));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x036c7bec(iVar2,*puVar11);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x130);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar5,uVar8,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x03b73d40(iVar2,uVar7,*puVar10);
      iVar3 = func_0x02b4aaa8();
      if (iVar3 != 0) {
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = *(undefined4 *)(iVar2 + 0x1c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024f1618(iVar1,uVar7,**(undefined4 **)(_UNK_02b4aaa4 + 0x2b4aa20));
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 < 0x80000000);
  }
  return iVar1;
}

