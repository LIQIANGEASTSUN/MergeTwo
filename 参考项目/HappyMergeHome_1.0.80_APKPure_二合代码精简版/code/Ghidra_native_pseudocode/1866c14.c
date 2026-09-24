
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01876c14(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_01876ff8 + 0x1876c2c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01876ffc + 0x1876c40));
    func_0x01438628(*(undefined4 *)(_UNK_01877000 + 0x1876c4c));
    func_0x01438628(*(undefined4 *)(_UNK_01877004 + 0x1876c58));
    func_0x01438628(*(undefined4 *)(_UNK_01877008 + 0x1876c64));
    func_0x01438628(*(undefined4 *)(_UNK_0187700c + 0x1876c70));
    func_0x01438628(*(undefined4 *)(_UNK_01877010 + 0x1876c7c));
    func_0x01438628(*(undefined4 *)(_UNK_01877014 + 0x1876c88));
    func_0x01438628(*(undefined4 *)(_UNK_01877018 + 0x1876c94));
    func_0x01438628(*(undefined4 *)(_UNK_0187701c + 0x1876ca0));
    func_0x01438628(*(undefined4 *)(_UNK_01877020 + 0x1876cac));
    func_0x01438628(*(undefined4 *)(_UNK_01877024 + 0x1876cb8));
    func_0x01438628(*(undefined4 *)(_UNK_01877028 + 0x1876cc4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x93c2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x93c2,0);
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
  if (*(int *)(**(int **)(_UNK_0187702c + 0x1876d20) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01877030 + 0x1876d3c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01877034 + 0x1876d5c));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x2f0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x024ef08c(iVar1,**(undefined4 **)(_UNK_01877038 + 0x1876d90));
  iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0187703c + 0x1876da8));
  func_0x024f108c(iVar1,uVar7,**(undefined4 **)(_UNK_01877040 + 0x1876dc0));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar6 = *(int *)(iVar1 + 0xc) - 1;
  if (-1 < (int)uVar6) {
    puVar9 = *(undefined4 **)(_UNK_01877044 + 0x1876dec);
    puVar8 = *(undefined4 **)(_UNK_01877048 + 0x1876df4);
    do {
      if (*(int *)(**(int **)(_UNK_0187704c + 0x1876dfc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01877050 + 0x1876e18));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01877054 + 0x1876e38));
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0x2f0);
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
        iVar2 = func_0x024f109c(iVar2,**(undefined4 **)(_UNK_01877058 + 0x1876f10));
        if (iVar2 == 0) {
          iVar5 = *(int *)(iVar5 + 0x10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar5 + 0xc) == 0) {
            if (*(int *)(**(int **)(_UNK_0187705c + 0x1876f48) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01877060 + 0x1876f64));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = func_0x036c7bec(iVar5,**(undefined4 **)(_UNK_01877064 + 0x1876f84));
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            iVar5 = *(int *)(iVar5 + 0x2f0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uVar7 = func_0x0152983c(iVar1,uVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f050c(iVar5,uVar7,**(undefined4 **)(_UNK_01877068 + 0x1876fdc));
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 < 0x80000000);
  }
  return;
}

