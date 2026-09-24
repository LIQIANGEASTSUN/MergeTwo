
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bb0f80(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_02bb1800 + 0x2bb0fa4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb1804 + 0x2bb0fb8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1808 + 0x2bb0fc4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb180c + 0x2bb0fd0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1810 + 0x2bb0fdc));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1814 + 0x2bb0fe8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1818 + 0x2bb0ff4));
    func_0x01438628(*(undefined4 *)(_UNK_02bb181c + 0x2bb1000));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1820 + 0x2bb100c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1824 + 0x2bb1018));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1828 + 0x2bb1024));
    func_0x01438628(*(undefined4 *)(_UNK_02bb182c + 0x2bb1030));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1830 + 0x2bb103c));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1834 + 0x2bb1048));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1838 + 0x2bb1054));
    func_0x01438628(*(undefined4 *)(_UNK_02bb183c + 0x2bb1060));
    func_0x01438628(*(undefined4 *)(_UNK_02bb1840 + 0x2bb106c));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x02953fd4(0x3445,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x3445,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar3 = func_0x0289d560(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = func_0x046ccb14(iVar2,param_3,**(undefined4 **)(_UNK_02bb1844 + 0x2bb10f8));
  if (param_2 == 0 || iVar2 == 0) {
    return 0;
  }
  iVar2 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb1848 + 0x2bb112c));
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_02baf084(param_1,param_3);
  uVar4 = FUN_02baf304(param_1,param_3);
  uVar5 = FUN_02baf4fc(param_1,param_3);
  iVar2 = func_0x046c2140(param_2,**(undefined4 **)(_UNK_02bb184c + 0x2bb1180));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  func_0x04bb113c(&uStack_48,iVar2,**(undefined4 **)(_UNK_02bb1850 + 0x2bb11ac));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  while (iVar2 = func_0x048a4a78(&uStack_38,**(undefined4 **)(_UNK_02bb1854 + 0x2bb11d0)),
        uVar1 = uStack_2c, iVar2 != 0) {
    puVar10 = *(undefined4 **)(_UNK_02bb185c + 0x2bb1208);
    iVar2 = func_0x046c23f8(param_2,uStack_2c,**(undefined4 **)(_UNK_02bb1858 + 0x2bb11f4));
    if (*(int *)(**(int **)(_UNK_02bb1860 + 0x2bb1218) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x035e50e0(uVar3,uVar1,*puVar10);
    iVar7 = func_0x035e50e0(uVar4,uVar1,*puVar10);
    iVar8 = func_0x035e50e0(uVar5,uVar1,*puVar10);
    if ((iVar7 + iVar6 + iVar8 < iVar2) && (param_4 != 0)) {
      func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02bb1864 + 0x2bb1290));
      return 0;
    }
  }
  func_0x048a4a74(&uStack_38,**(undefined4 **)(_UNK_02bb186c + 0x2bb12ac));
  iVar2 = 0;
  puVar12 = *(undefined4 **)(_UNK_02bb1870 + 0x2bb12c8);
  puVar10 = *(undefined4 **)(_UNK_02bb1874 + 0x2bb12d0);
  puVar11 = *(undefined4 **)(_UNK_02bb1878 + 0x2bb12d8);
  while( true ) {
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b72148(iVar6,param_3,*puVar12);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar6 + 0xc) <= iVar2) break;
    iVar6 = *(int *)(param_1 + 0x14);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b72148(iVar6,param_3,*puVar12);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x03b780b0(iVar6,iVar2,*puVar10);
    iVar7 = FUN_02baf28c(param_1,iVar6);
    if (iVar7 != 0) {
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(**(int **)(_UNK_02bb1880 + 0x2bb13a0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x035e50e0(param_2,uVar3,**(undefined4 **)(_UNK_02bb1884 + 0x2bb13c4));
      if (0 < iVar7) {
        func_0x046c2488(param_2,*(undefined4 *)(iVar6 + 8),iVar7 + -1,*puVar11);
        iVar7 = func_0x046c23f8(param_2,*(undefined4 *)(iVar6 + 8),
                                **(undefined4 **)(_UNK_02bb1888 + 0x2bb13f8));
        if (iVar7 < 1) {
          func_0x046c3bd8(param_2,*(undefined4 *)(iVar6 + 8),
                          **(undefined4 **)(_UNK_02bb188c + 0x2bb1418));
        }
        func_0x02bb18c4(param_1,iVar2,0xffffffff,1,param_3,0xffffffff,1,0xffffffff,
                        **(undefined4 **)(_UNK_02bb1890 + 0x2bb1438));
      }
      iVar6 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb1894 + 0x2bb1468));
      if (iVar6 < 1) break;
    }
    iVar2 = iVar2 + 1;
  }
  iVar2 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb1898 + 0x2bb148c));
  puVar12 = *(undefined4 **)(_UNK_02bb189c + 0x2bb14a4);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar6 = FUN_02bad050(param_1,param_3);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar2) break;
      iVar6 = FUN_02bad050(param_1,param_3);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x14);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03b780b0(iVar6,iVar2,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(**(int **)(_UNK_02bb18a0 + 0x2bb1538) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x035e50e0(param_2,uVar3,**(undefined4 **)(_UNK_02bb18a4 + 0x2bb155c));
      if (0 < iVar7) {
        func_0x046c2488(param_2,*(undefined4 *)(iVar6 + 8),iVar7 + -1,*puVar11);
        iVar7 = func_0x046c23f8(param_2,*(undefined4 *)(iVar6 + 8),
                                **(undefined4 **)(_UNK_02bb18a8 + 0x2bb158c));
        if (iVar7 < 1) {
          func_0x046c3bd8(param_2,*(undefined4 *)(iVar6 + 8),*puVar12);
        }
        func_0x02bb33d4(param_1,iVar2,param_3);
        iVar2 = iVar2 + -1;
      }
      iVar6 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb18ac + 0x2bb15dc));
      iVar2 = iVar2 + 1;
    } while (0 < iVar6);
  }
  iVar2 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb18b0 + 0x2bb15fc));
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar6 = FUN_02bad050(param_1,param_3);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x4c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar6 + 0xc) <= iVar2) {
        return 1;
      }
      iVar6 = FUN_02bad050(param_1,param_3);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar6 + 0x4c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x03b780b0(iVar6,iVar2,*puVar10);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar3 = *(undefined4 *)(iVar6 + 8);
      if (*(int *)(**(int **)(_UNK_02bb18b4 + 0x2bb16a4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x035e50e0(param_2,uVar3,**(undefined4 **)(_UNK_02bb18b8 + 0x2bb16c8));
      if (0 < iVar7) {
        func_0x046c2488(param_2,*(undefined4 *)(iVar6 + 8),iVar7 + -1,*puVar11);
        iVar7 = func_0x046c23f8(param_2,*(undefined4 *)(iVar6 + 8),
                                **(undefined4 **)(_UNK_02bb18bc + 0x2bb16f8));
        if (iVar7 < 1) {
          func_0x046c3bd8(param_2,*(undefined4 *)(iVar6 + 8),*puVar12);
        }
        func_0x02bb34d8(param_1,iVar2,param_3);
        iVar2 = iVar2 + -1;
      }
      iVar6 = func_0x046c2130(param_2,**(undefined4 **)(_UNK_02bb18c0 + 0x2bb1748));
      iVar2 = iVar2 + 1;
    } while (0 < iVar6);
  }
  return 1;
}

