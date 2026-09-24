
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a8464(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_017a8718 + 0x17a8478);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a871c + 0x17a848c));
    func_0x01438628(*(undefined4 *)(_UNK_017a8720 + 0x17a8498));
    func_0x01438628(*(undefined4 *)(_UNK_017a8724 + 0x17a84a4));
    func_0x01438628(*(undefined4 *)(_UNK_017a8728 + 0x17a84b0));
    func_0x01438628(*(undefined4 *)(_UNK_017a872c + 0x17a84bc));
    func_0x01438628(*(undefined4 *)(_UNK_017a8730 + 0x17a84c8));
    func_0x01438628(*(undefined4 *)(_UNK_017a8734 + 0x17a84d4));
    func_0x01438628(*(undefined4 *)(_UNK_017a8738 + 0x17a84e0));
    func_0x01438628(*(undefined4 *)(_UNK_017a873c + 0x17a84ec));
    func_0x01438628(*(undefined4 *)(_UNK_017a8740 + 0x17a84f8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8e87,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8e87,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar6,uVar5,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_017a8744 + 0x17a8550) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a8748 + 0x17a856c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  puVar9 = *(undefined4 **)(_UNK_017a874c + 0x17a8590);
  iVar1 = func_0x036c7bec(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar3 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017a8750 + 0x17a85c0));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017a8754 + 0x17a85d8));
  func_0x024f108c(iVar1,uVar3,**(undefined4 **)(_UNK_017a8758 + 0x17a85f0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar4) {
    puVar10 = *(undefined4 **)(_UNK_017a875c + 0x17a861c);
    puVar7 = *(undefined4 **)(_UNK_017a8760 + 0x17a8624);
    piVar8 = *(int **)(_UNK_017a8764 + 0x17a862c);
    do {
      if (*(int *)(**(int **)(_UNK_017a8768 + 0x17a8634) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_017a876c + 0x17a8650));
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x036c7bec(iVar6,*puVar9);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x30c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x0152983c(iVar1,uVar4,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x024f04d4(iVar6,uVar3,*puVar7);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = FUN_017a82a4(uVar3);
      if (iVar6 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        FUN_017a83b0(uVar3);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}

