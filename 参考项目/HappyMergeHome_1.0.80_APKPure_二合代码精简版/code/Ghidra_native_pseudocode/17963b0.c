
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017a63b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_017a6794 + 0x17a63c8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017a6798 + 0x17a63dc));
    func_0x01438628(*(undefined4 *)(_UNK_017a679c + 0x17a63e8));
    func_0x01438628(*(undefined4 *)(_UNK_017a67a0 + 0x17a63f4));
    func_0x01438628(*(undefined4 *)(_UNK_017a67a4 + 0x17a6400));
    func_0x01438628(*(undefined4 *)(_UNK_017a67a8 + 0x17a640c));
    func_0x01438628(*(undefined4 *)(_UNK_017a67ac + 0x17a6418));
    func_0x01438628(*(undefined4 *)(_UNK_017a67b0 + 0x17a6424));
    func_0x01438628(*(undefined4 *)(_UNK_017a67b4 + 0x17a6430));
    func_0x01438628(*(undefined4 *)(_UNK_017a67b8 + 0x17a643c));
    func_0x01438628(*(undefined4 *)(_UNK_017a67bc + 0x17a6448));
    func_0x01438628(*(undefined4 *)(_UNK_017a67c0 + 0x17a6454));
    func_0x01438628(*(undefined4 *)(_UNK_017a67c4 + 0x17a6460));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8e81,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8e81,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_017a67c8 + 0x17a64bc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017a67cc + 0x17a64d8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_017a67d0 + 0x17a64f8));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x30c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_017a67d4 + 0x17a652c));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_017a67d8 + 0x17a6544));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_017a67dc + 0x17a655c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_017a67e0 + 0x17a6588);
    puVar8 = *(undefined4 **)(_UNK_017a67e4 + 0x17a6590);
    do {
      if (*(int *)(**(int **)(_UNK_017a67e8 + 0x17a6598) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017a67ec + 0x17a65b4));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_017a67f0 + 0x17a65d4));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x30c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x024f04d4(iVar5,uVar7,*puVar8);
      iVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x014e9678(iVar2,uVar7,0);
      if (iVar2 == 0) {
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_017a67f4 + 0x17a66ac));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_017a67f8 + 0x17a66e4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_017a67fc + 0x17a6700));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_017a6800 + 0x17a6720));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x30c);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_017a6804 + 0x17a6778));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

