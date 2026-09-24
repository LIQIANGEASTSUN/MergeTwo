/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MergeEnergyMan$$get_Energy RVA 0x1db1368 =====

int FUN_01dc1368(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x232,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x232,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
  return iVar1 - *(int *)(param_1 + 0x20);
}



// ===== FAT.MergeEnergyMan$$get_EnergyAfterFly RVA 0x1db13cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc13cc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  iVar1 = func_0x0229f06c(0x6a7,0);
  if (iVar1 == 0) {
    param_1 = (int *)param_1[4];
    pcVar4 = (char *)(_UNK_028d1aec + 0x28d1a4c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028d1af0 + 0x28d1a60),0);
      func_0x01384978(*(undefined4 *)(_UNK_028d1af4 + 0x28d1a6c));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x86,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_028d1af8 + 0x28d1ac4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = **(int **)(_UNK_028d1afc + 0x28d1ae0);
      if (param_1 == (int *)0x0) {
        func_0x02457d50();
      }
      iVar3 = (**(code **)(*param_1 + 0xc0))(param_1,0,*(undefined4 *)(*param_1 + 0xc4));
      if (iVar3 == 0) {
        iVar1 = *(int *)(iVar1 + 0x10);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = **(int **)(iVar1 + 0x60);
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x02457d48();
        }
        iVar1 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x02457d84();
        }
        iVar3 = param_1[2];
        uVar6 = param_1[3];
        uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar6) {
          func_0x02457d5c();
        }
                    /* WARNING: Could not recover jumptable at 0x03f2ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*param_1 + 0xe8))
                          (param_1,uVar5,*(undefined4 *)(iVar3 + uVar6 * 4 + 0x10),
                           *(undefined4 *)(*param_1 + 0xec));
        return uVar5;
      }
      return 0;
    }
    iVar1 = func_0x0229f13c(0x86,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar5 = func_0x0245498c(&uStack_30,0,0);
  return uVar5;
}



// ===== FAT.MergeEnergyMan$$get_RecoverCD RVA 0x1db1428 =====

int FUN_01dc1428(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9d69,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d69,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  return *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x14);
}



// ===== FAT.MergeEnergyMan$$get_RecoverMax RVA 0x1db1484 =====

undefined4 FUN_01dc1484(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.MergeEnergyMan$$set_RecoverMax RVA 0x1db148c =====

void FUN_01dc148c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.MergeEnergyMan$$DebugAddEnergy RVA 0x1db1494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1494(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  uint uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x9d6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d6a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217ab90(iVar1,param_1,param_2,param_3);
    return;
  }
  func_0x01dc1520(param_1,param_2,param_3);
  pcVar4 = (char *)(_UNK_01dc181c + 0x1dc163c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc1820 + 0x1dc1650));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1824 + 0x1dc165c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1828 + 0x1dc1668));
    func_0x01384978(*(undefined4 *)(_UNK_01dc182c + 0x1dc1674));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1830 + 0x1dc1680));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1834 + 0x1dc168c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1838 + 0x1dc1698));
    func_0x01384978(*(undefined4 *)(_UNK_01dc183c + 0x1dc16a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x545,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x545,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = **(int **)(_UNK_01dc1840 + 0x1dc1704);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - param_2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc1844 + 0x1dc172c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e110(iVar1,param_2,**(undefined4 **)(_UNK_01dc1848 + 0x1dc1750));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc184c + 0x1dc1764));
  iVar3 = FUN_01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01dbb000(iVar3);
  uVar5 = 0xffffffff;
  if ((iVar3 != 0) && (iVar3 = func_0x02139cf4(iVar3,0), iVar3 != 0)) {
    uStack_1c = 0;
    uStack_20 = 0;
    func_0x03507d38(&uStack_20,*(undefined4 *)(iVar3 + 8),
                    **(undefined4 **)(_UNK_01dc1850 + 0x1dc17c8));
    uVar5 = uStack_1c;
    if ((uStack_20 & 0xff) == 0) {
      uVar5 = 0xffffffff;
    }
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a0af8(iVar1,param_2,uVar5,**(undefined4 **)(_UNK_01dc1854 + 0x1dc180c));
  return;
}



// ===== FAT.MergeEnergyMan$$AddFlyEnergy RVA 0x1db1520 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1520(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_01dc1614 + 0x1dc1540);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc1618 + 0x1dc1554));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7f9,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    iVar1 = func_0x028d1a38(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0245190c(iVar3,iVar1 + param_2,**(undefined4 **)(_UNK_01dc161c + 0x1dc15e0));
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
    func_0x019a4728(param_3,1,param_2,param_2 >> 0x1f,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MergeEnergyMan$$FinishFlyEnergy RVA 0x1db1620 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1620(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  uint uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01dc181c + 0x1dc163c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc1820 + 0x1dc1650));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1824 + 0x1dc165c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1828 + 0x1dc1668));
    func_0x01384978(*(undefined4 *)(_UNK_01dc182c + 0x1dc1674));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1830 + 0x1dc1680));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1834 + 0x1dc168c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1838 + 0x1dc1698));
    func_0x01384978(*(undefined4 *)(_UNK_01dc183c + 0x1dc16a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x545,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x545,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = **(int **)(_UNK_01dc1840 + 0x1dc1704);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - param_2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc1844 + 0x1dc172c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e110(iVar1,param_2,**(undefined4 **)(_UNK_01dc1848 + 0x1dc1750));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc184c + 0x1dc1764));
  iVar3 = FUN_01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01dbb000(iVar3);
  uVar5 = 0xffffffff;
  if ((iVar3 != 0) && (iVar3 = func_0x02139cf4(iVar3,0), iVar3 != 0)) {
    uStack_1c = 0;
    uStack_20 = 0;
    func_0x03507d38(&uStack_20,*(undefined4 *)(iVar3 + 8),
                    **(undefined4 **)(_UNK_01dc1850 + 0x1dc17c8));
    uVar5 = uStack_1c;
    if ((uStack_20 & 0xff) == 0) {
      uVar5 = 0xffffffff;
    }
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a0af8(iVar1,param_2,uVar5,**(undefined4 **)(_UNK_01dc1854 + 0x1dc180c));
  return;
}



// ===== FAT.MergeEnergyMan$$FAT.IUserDataHolder.FillData RVA 0x1db1858 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1858(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_01dc1b54 + 0x1dc1874);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b58 + 0x1dc1888));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b5c + 0x1dc1894));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b60 + 0x1dc18a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b64 + 0x1dc18ac));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b68 + 0x1dc18b8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b6c + 0x1dc18c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1b70 + 0x1dc18d0));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iVar2 = func_0x0229f06c(0x9d6b,0);
  if (iVar2 == 0) {
    uVar8 = FUN_01c34eb8(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 0x14);
    if (iVar6 == 0) {
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01dc1b74 + 0x1dc19a0));
      func_0x0178d49c(iVar6,0);
      *(int *)(iVar2 + 0x14) = iVar6;
    }
    uVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(uint *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = uVar3;
    *(uint *)(iVar6 + 0x10) = (uint)uVar8 - uVar4;
    *(uint *)(iVar6 + 0x14) =
         (int)((ulonglong)uVar8 >> 0x20) - (((int)uVar4 >> 0x1f) + (uint)((uint)uVar8 < uVar4));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_68,iVar2,**(undefined4 **)(_UNK_01dc1b78 + 0x1dc1a0c));
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    puVar7 = *(undefined4 **)(_UNK_01dc1b7c + 0x1dc1a40);
    while (iVar2 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01dc1b84 + 0x1dc1a48)),
          iVar2 != 0) {
      uStack_44 = (undefined4)uStack_30;
      uStack_48 = uStack_34;
      func_0x01484258(&uStack_48,&uStack_4c,&uStack_50,**(undefined4 **)(_UNK_01dc1b80 + 0x1dc1a68))
      ;
      uVar1 = uStack_4c;
      uVar3 = uStack_50;
      iVar2 = *(int *)(iVar6 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0345eca8(iVar2,uVar1,uVar3,*puVar7);
    }
    func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01dc1b88 + 0x1dc1abc));
  }
  else {
    iVar2 = func_0x0229f13c(0x9d6b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MergeEnergyMan$$ClearResetState RVA 0x1db1b94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1b94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01dc1c7c + 0x1dc1ba8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc1c80 + 0x1dc1bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc1c84 + 0x1dc1bc8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d6c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01dc1c88 + 0x1dc1c30));
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar1,0,**(undefined4 **)(_UNK_01dc1c8c + 0x1dc1c58));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar6 = FUN_01c34eb8(0);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  return;
}



// ===== FAT.MergeEnergyMan$$FAT.IUserDataHolder.SetData RVA 0x1db1c90 =====

/* WARNING: Removing unreachable block (ram,0x01dc2018) */
/* WARNING: Removing unreachable block (ram,0x01dc2024) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc1c90(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01dc2108 + 0x1dc1cac);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc210c + 0x1dc1cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2110 + 0x1dc1ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2114 + 0x1dc1cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2118 + 0x1dc1ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc211c + 0x1dc1cf0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2120 + 0x1dc1cfc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2124 + 0x1dc1d08));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2128 + 0x1dc1d14));
    *pcVar8 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x9d6d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d6d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 0) {
    func_0x01dc2150(param_1);
    return;
  }
  iVar9 = *(int *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x0245190c(iVar9,uVar7,**(undefined4 **)(_UNK_01dc212c + 0x1dc1dd4));
  iVar9 = *(int *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar9,**(undefined4 **)(_UNK_01dc2130 + 0x1dc1e00));
  iVar2 = *(int *)(iVar2 + 0x30);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0345f9b0(iVar2,**(undefined4 **)(_UNK_01dc2134 + 0x1dc1e24));
  puVar10 = *(undefined4 **)(_UNK_01dc2138 + 0x1dc1e44);
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dc2144 + 0x1dc1e5c)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01dc1ea4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dc2144 + 0x1dc1e5c),0);
LAB_01dc1ea4:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dc213c + 0x1dc1ed8)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01dc1f20;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dc213c + 0x1dc1ed8),0);
LAB_01dc1f20:
    (*(code *)*puVar4)(&uStack_40,piVar3,puVar4[1]);
    uStack_2c = uStack_3c;
    uStack_30 = uStack_40;
    func_0x01484258(&uStack_30,&uStack_34,&uStack_38,**(undefined4 **)(_UNK_01dc2140 + 0x1dc1f44));
    uVar1 = uStack_34;
    uVar7 = uStack_38;
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(iVar2,uVar1,uVar7,*puVar10);
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01dc2148 + 0x1dc1fac)) {
          puVar10 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01dc2000;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dc2148 + 0x1dc1fac),0);
LAB_01dc2000:
    (*(code *)*puVar10)(piVar3,puVar10[1]);
  }
  func_0x01dc2238(param_1);
  return;
}



// ===== FAT.MergeEnergyMan$$InitUserData RVA 0x1db2150 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01dc2150(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint unaff_r8;
  bool bVar8;
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
  
  pcVar5 = (char *)(_UNK_01dc222c + 0x1dc2164);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc2230 + 0x1dc2178));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d6e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    iVar1 = func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return iVar1;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar1 + 800);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = **(int **)(_UNK_01dc2234 + 0x1dc2220);
  iVar6 = piVar4[3];
  iVar1 = *(int *)(*(int *)(iVar2 + 0x10) + 0x60);
  piVar4[3] = iVar6 + 1;
  iVar1 = *(int *)(iVar1 + 0x14);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  bVar8 = iVar6 + 1 == **(int **)(iVar1 + 0x5c);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (bVar8) {
    unaff_r8 = 0;
  }
  iVar6 = piVar4[2];
  if (bVar8) {
    piVar4[3] = unaff_r8;
  }
  if (!bVar8) {
    unaff_r8 = piVar4[3];
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x14);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  uVar7 = (**(code **)(*piVar4 + 0xf0))
                    (piVar4,uVar7,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4),
                     *(undefined4 *)(*piVar4 + 0xf4));
  if (iVar6 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar6 + 0xc) <= unaff_r8) {
    func_0x02457d5c();
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)(iVar6 + unaff_r8 * 4 + 0x10) = uVar7;
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0x30);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84(iVar1);
  }
  iVar1 = func_0x02457d4c(piVar4,iVar1);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x30);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = func_0x02457d84(iVar6);
  }
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = func_0x02457d4c(iVar1,iVar6), iVar2 == 0)) {
    func_0x02457d64(iVar1,iVar6);
    return 0;
  }
  return iVar2;
}



// ===== FAT.MergeEnergyMan$$TryRecoverOffline RVA 0x1db2238 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc2238(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_01dc2654 + 0x1dc2250);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc2658 + 0x1dc2264));
    func_0x01384978(*(undefined4 *)(_UNK_01dc265c + 0x1dc2270));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2660 + 0x1dc227c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2664 + 0x1dc2288));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2668 + 0x1dc2294));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x92c6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x92c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar9,&iStack_30,uVar4);
    return;
  }
  piVar6 = (int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    if ((iVar1 < *(int *)(param_1 + 8)) && ((int)(uint)(*piVar6 == 0) <= *(int *)(param_1 + 0x1c)))
    {
      iVar1 = FUN_01c34eb8(0);
      iVar1 = iVar1 - *piVar6;
      iVar8 = *(int *)(param_1 + 0x14) + iVar1;
      iVar7 = func_0x01457ae8(iVar8,*(undefined4 *)(param_1 + 0x24));
      puVar2 = *(undefined4 **)(_UNK_01dc266c + 0x1dc23c8);
      *(int *)(param_1 + 0x14) = iVar8;
      uVar9 = *puVar2;
      *piVar6 = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      piVar6 = (int *)func_0x01384a00(uVar9,5);
      puVar2 = *(undefined4 **)(_UNK_01dc2670 + 0x1dc23ec);
      iStack_24 = iVar7;
      iVar8 = func_0x01384abc(*puVar2,&iStack_24);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar8 != 0) &&
         (iVar3 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar8;
      uStack_28 = *(undefined4 *)(param_1 + 0x14);
      iVar8 = func_0x01384abc(*puVar2,&uStack_28);
      if ((iVar8 != 0) &&
         (iVar3 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar8;
      uStack_2c = *(undefined4 *)(param_1 + 0x24);
      iVar8 = func_0x01384abc(*puVar2,&uStack_2c);
      if ((iVar8 != 0) &&
         (iVar3 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar6[3] < 3) {
        func_0x01384bf4();
      }
      piVar6[6] = iVar8;
      iStack_30 = iVar1;
      iVar8 = func_0x01384abc(*puVar2,&iStack_30);
      if ((iVar8 != 0) &&
         (iVar3 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar6[3] < 4) {
        func_0x01384bf4();
      }
      piVar6[7] = iVar8;
      func_0x01458344(iVar1,*(undefined4 *)(param_1 + 0x24));
      uStack_34 = extraout_r1;
      iVar8 = func_0x01384abc(*puVar2,&uStack_34);
      if ((iVar8 != 0) &&
         (iVar3 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
        uVar9 = func_0x01384c10();
        func_0x01384aa0(uVar9,0);
      }
      if ((uint)piVar6[3] < 5) {
        func_0x01384bf4();
      }
      piVar6[8] = iVar8;
      uVar9 = func_0x0244f708(**(undefined4 **)(_UNK_01dc2674 + 0x1dc25bc),piVar6,0);
      if (*(int *)(**(int **)(_UNK_01dc2678 + 0x1dc25d0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02450924(uVar9,0);
      if (0 < iVar7) {
        piVar6 = *(int **)(_UNK_01dc267c + 0x1dc2600);
        iVar8 = *piVar6;
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x01384ab4();
          iVar8 = *piVar6;
        }
        func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x74),iVar7,iVar7);
        func_0x01458344(iVar1,*(undefined4 *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x14) = extraout_r1_00;
      }
    }
  }
  else if ((0 < *(int *)(param_1 + 0x24)) && ((int)(uint)(*piVar6 == 0) <= *(int *)(param_1 + 0x1c))
          ) {
    uVar10 = FUN_01c34eb8(0);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    if (iVar1 < *(int *)(param_1 + 8)) {
      iVar1 = *piVar6;
      *piVar6 = 0;
      iVar1 = (int)uVar10 - iVar1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      pcVar5 = (char *)(_UNK_01dc2920 + 0x1dc27ec);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dc2924 + 0x1dc2800));
        *pcVar5 = '\x01';
      }
      iVar7 = func_0x0229f06c(0x92c8,0);
      if (iVar7 == 0) {
        iVar7 = iVar1;
        if (0 < iVar1) {
          iVar7 = *(int *)(param_1 + 0x24);
        }
        if (0 < iVar7) {
          iVar7 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
          if (iVar7 < *(int *)(param_1 + 8)) {
            iVar1 = *(int *)(param_1 + 0x14) + iVar1;
            *(int *)(param_1 + 0x14) = iVar1;
            iVar1 = func_0x01457ae8(iVar1,*(undefined4 *)(param_1 + 0x24));
            if (0 < iVar1) {
              piVar6 = *(int **)(_UNK_01dc2928 + 0x1dc28b4);
              iVar7 = *piVar6;
              if (*(int *)(iVar7 + 0x74) == 0) {
                func_0x01384ab4();
                iVar7 = *piVar6;
              }
              func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x74),iVar1,iVar1);
            }
            iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
            if (iVar1 < *(int *)(param_1 + 8)) {
              func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
              *(undefined4 *)(param_1 + 0x14) = extraout_r1_01;
            }
            else {
              *(undefined4 *)(param_1 + 0x14) = 0;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
        }
        return;
      }
      iVar7 = func_0x0229f13c(0x92c8,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar1,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      iStack_30 = iStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar7 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,iVar1,0);
      iVar8 = *(int *)(iVar7 + 8);
      uVar9 = *(undefined4 *)(iVar7 + 0xc);
      iVar1 = *(int *)(iVar7 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 3;
      if (iVar1 == 0) {
        uVar4 = 2;
      }
      func_0x0245495c(iVar8,uVar9,&uStack_38,uVar4,0,0);
      return;
    }
    *piVar6 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}



// ===== FAT.MergeEnergyMan$$ToBackground RVA 0x1db2680 =====

void FUN_01dc2680(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x92ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x92ae,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    bVar5 = *(int *)(param_1 + 0x18) != 0;
    if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5))) {
      return;
    }
    uVar6 = FUN_01c34eb8(0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    return;
  }
  uVar6 = FUN_01c34eb8(0);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  return;
}



// ===== FAT.MergeEnergyMan$$ToForeground RVA 0x1db270c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc270c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x92c5,0);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      piVar6 = (int *)(param_1 + 0x30);
      uVar10 = FUN_01c34eb8(0);
      if (*(int *)(param_1 + 0x24) < 1) {
LAB_01dc27c8:
        *(undefined8 *)piVar6 = uVar10;
        return;
      }
      if (*(int *)(param_1 + 0x1c) < (int)(uint)(*(int *)(param_1 + 0x18) == 0)) {
        iVar3 = *piVar6;
        iVar7 = *(int *)(param_1 + 0x34);
        if ((int)-(iVar7 + (uint)(iVar3 != 0)) < 0 ==
            (SBORROW4(0,iVar7) != SBORROW4(-iVar7,(uint)(iVar3 != 0)))) goto LAB_01dc27c8;
        *(undefined8 *)piVar6 = uVar10;
        iVar3 = (int)uVar10 - iVar3;
        if (iVar3 < 2) {
          return;
        }
        goto LAB_01dc27d0;
      }
    }
    pcVar5 = (char *)(_UNK_01dc2654 + 0x1dc2250);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc2658 + 0x1dc2264));
      func_0x01384978(*(undefined4 *)(_UNK_01dc265c + 0x1dc2270));
      func_0x01384978(*(undefined4 *)(_UNK_01dc2660 + 0x1dc227c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc2664 + 0x1dc2288));
      func_0x01384978(*(undefined4 *)(_UNK_01dc2668 + 0x1dc2294));
      *pcVar5 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x92c6,0);
    if (iVar3 == 0) {
      piVar6 = (int *)(param_1 + 0x18);
      if (*(char *)(param_1 + 0x28) == '\0') {
        iVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
        if ((iVar3 < *(int *)(param_1 + 8)) &&
           ((int)(uint)(*piVar6 == 0) <= *(int *)(param_1 + 0x1c))) {
          iVar3 = FUN_01c34eb8(0);
          iVar3 = iVar3 - *piVar6;
          iVar8 = *(int *)(param_1 + 0x14) + iVar3;
          iVar7 = func_0x01457ae8(iVar8,*(undefined4 *)(param_1 + 0x24));
          puVar1 = *(undefined4 **)(_UNK_01dc266c + 0x1dc23c8);
          *(int *)(param_1 + 0x14) = iVar8;
          uVar9 = *puVar1;
          *piVar6 = 0;
          *(undefined4 *)(param_1 + 0x1c) = 0;
          piVar6 = (int *)func_0x01384a00(uVar9,5);
          puVar1 = *(undefined4 **)(_UNK_01dc2670 + 0x1dc23ec);
          iStack_24 = iVar7;
          iVar8 = func_0x01384abc(*puVar1,&iStack_24);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar8 != 0) &&
             (iVar2 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if (piVar6[3] == 0) {
            func_0x01384bf4();
          }
          piVar6[4] = iVar8;
          uStack_28 = *(undefined4 *)(param_1 + 0x14);
          iVar8 = func_0x01384abc(*puVar1,&uStack_28);
          if ((iVar8 != 0) &&
             (iVar2 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if ((uint)piVar6[3] < 2) {
            func_0x01384bf4();
          }
          piVar6[5] = iVar8;
          uStack_2c = *(undefined4 *)(param_1 + 0x24);
          iVar8 = func_0x01384abc(*puVar1,&uStack_2c);
          if ((iVar8 != 0) &&
             (iVar2 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if ((uint)piVar6[3] < 3) {
            func_0x01384bf4();
          }
          piVar6[6] = iVar8;
          iStack_30 = iVar3;
          iVar8 = func_0x01384abc(*puVar1,&iStack_30);
          if ((iVar8 != 0) &&
             (iVar2 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if ((uint)piVar6[3] < 4) {
            func_0x01384bf4();
          }
          piVar6[7] = iVar8;
          func_0x01458344(iVar3,*(undefined4 *)(param_1 + 0x24));
          uStack_34 = extraout_r1;
          iVar8 = func_0x01384abc(*puVar1,&uStack_34);
          if ((iVar8 != 0) &&
             (iVar2 = func_0x01384ab8(iVar8,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
            uVar9 = func_0x01384c10();
            func_0x01384aa0(uVar9,0);
          }
          if ((uint)piVar6[3] < 5) {
            func_0x01384bf4();
          }
          piVar6[8] = iVar8;
          uVar9 = func_0x0244f708(**(undefined4 **)(_UNK_01dc2674 + 0x1dc25bc),piVar6,0);
          if (*(int *)(**(int **)(_UNK_01dc2678 + 0x1dc25d0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x02450924(uVar9,0);
          if (0 < iVar7) {
            piVar6 = *(int **)(_UNK_01dc267c + 0x1dc2600);
            iVar8 = *piVar6;
            if (*(int *)(iVar8 + 0x74) == 0) {
              func_0x01384ab4();
              iVar8 = *piVar6;
            }
            func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x74),iVar7,iVar7);
            func_0x01458344(iVar3,*(undefined4 *)(param_1 + 0x24));
            *(undefined4 *)(param_1 + 0x14) = extraout_r1_00;
          }
        }
      }
      else if ((0 < *(int *)(param_1 + 0x24)) &&
              ((int)(uint)(*piVar6 == 0) <= *(int *)(param_1 + 0x1c))) {
        uVar10 = FUN_01c34eb8(0);
        *(undefined8 *)(param_1 + 0x30) = uVar10;
        iVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
        if (iVar3 < *(int *)(param_1 + 8)) {
          iVar3 = *piVar6;
          *piVar6 = 0;
          iVar3 = (int)uVar10 - iVar3;
          *(undefined4 *)(param_1 + 0x1c) = 0;
LAB_01dc27d0:
          pcVar5 = (char *)(_UNK_01dc2920 + 0x1dc27ec);
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01dc2924 + 0x1dc2800));
            *pcVar5 = '\x01';
          }
          iVar7 = func_0x0229f06c(0x92c8,0);
          if (iVar7 != 0) {
            iVar7 = func_0x0229f13c(0x92c8,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_38 = 0;
            uStack_28 = 0;
            func_0x0245494c(&uStack_50,0,iVar3,0);
            uStack_38 = uStack_50;
            uStack_34 = uStack_4c;
            iStack_30 = iStack_48;
            uStack_2c = uStack_44;
            uStack_28 = uStack_40;
            if (*(int *)(iVar7 + 0x10) != 0) {
              func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
            }
            func_0x01485278(&uStack_38,param_1,0);
            func_0x01485238(&uStack_38,iVar3,0);
            iVar8 = *(int *)(iVar7 + 8);
            uVar9 = *(undefined4 *)(iVar7 + 0xc);
            iVar3 = *(int *)(iVar7 + 0x10);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uVar4 = 3;
            if (iVar3 == 0) {
              uVar4 = 2;
            }
            func_0x0245495c(iVar8,uVar9,&uStack_38,uVar4,0,0);
            return;
          }
          iVar7 = iVar3;
          if (0 < iVar3) {
            iVar7 = *(int *)(param_1 + 0x24);
          }
          if (0 < iVar7) {
            iVar7 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
            if (iVar7 < *(int *)(param_1 + 8)) {
              iVar3 = *(int *)(param_1 + 0x14) + iVar3;
              *(int *)(param_1 + 0x14) = iVar3;
              iVar3 = func_0x01457ae8(iVar3,*(undefined4 *)(param_1 + 0x24));
              if (0 < iVar3) {
                piVar6 = *(int **)(_UNK_01dc2928 + 0x1dc28b4);
                iVar7 = *piVar6;
                if (*(int *)(iVar7 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar7 = *piVar6;
                }
                func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x74),iVar3,iVar3);
              }
              iVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
              if (iVar3 < *(int *)(param_1 + 8)) {
                func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
                *(undefined4 *)(param_1 + 0x14) = extraout_r1_01;
              }
              else {
                *(undefined4 *)(param_1 + 0x14) = 0;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x14) = 0;
            }
          }
          return;
        }
        *piVar6 = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x92c6,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x92c5,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  iStack_24 = iStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar9 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar3 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar9,&iStack_30,uVar4);
  return;
}



// ===== FAT.MergeEnergyMan$$TryRecoverBySeconds_Fix RVA 0x1db27d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc27d0(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01dc2920 + 0x1dc27ec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc2924 + 0x1dc2800));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x92c8,0);
  if (iVar1 == 0) {
    iVar1 = param_2;
    if (0 < param_2) {
      iVar1 = *(int *)(param_1 + 0x24);
    }
    if (0 < iVar1) {
      iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
      if (iVar1 < *(int *)(param_1 + 8)) {
        param_2 = *(int *)(param_1 + 0x14) + param_2;
        *(int *)(param_1 + 0x14) = param_2;
        iVar1 = func_0x01457ae8(param_2,*(undefined4 *)(param_1 + 0x24));
        if (0 < iVar1) {
          piVar5 = *(int **)(_UNK_01dc2928 + 0x1dc28b4);
          iVar3 = *piVar5;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar5;
          }
          func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74),iVar1,iVar1);
        }
        iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
        if (iVar1 < *(int *)(param_1 + 8)) {
          func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
          *(undefined4 *)(param_1 + 0x14) = extraout_r1;
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x92c8,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.MergeEnergyMan$$FullRecoverCD RVA 0x1db292c =====

int FUN_01dc292c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0x357c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x357c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
  iVar5 = iVar5 - iVar1;
  if (0 < iVar5) {
    iVar5 = iVar5 + -1;
    iVar2 = *(int *)(param_1 + 0x24);
    iVar1 = iVar2 - *(int *)(param_1 + 0x14);
    iVar4 = iVar2 * iVar5;
    if (0 < iVar1) {
      iVar4 = iVar2 * iVar5 + iVar1;
    }
  }
  return iVar4;
}



// ===== FAT.MergeEnergyMan$$TickRecover RVA 0x1db29bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc29bc(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
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
  
  pcVar6 = (char *)(_UNK_01dc2bf0 + 0x1dc29d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc2bf4 + 0x1dc29ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2bf8 + 0x1dc29f8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9d6f,0);
  if (iVar2 != 0) {
    iVar3 = func_0x0229f13c(0x9d6f,0);
    iVar2 = param_2;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_021773c4:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,iVar2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar2 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar2 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    if (*(int *)(param_1 + 8) <= iVar2) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) < 1) {
      return;
    }
    piVar8 = (int *)(param_1 + 0x30);
    uVar9 = FUN_01c34eb8(0);
    iVar2 = *piVar8;
    iVar3 = *(int *)(param_1 + 0x34);
    if ((int)-(iVar3 + (uint)(iVar2 != 0)) < 0 ==
        (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)(iVar2 != 0)))) {
      *(undefined8 *)piVar8 = uVar9;
      iVar2 = (int)uVar9;
    }
    if ((int)(uint)(*(int *)(param_1 + 0x18) == 0) <= *(int *)(param_1 + 0x1c)) {
      FUN_01dc2238(param_1);
      *(undefined8 *)piVar8 = uVar9;
      return;
    }
    *(undefined8 *)piVar8 = uVar9;
    iVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    iVar2 = (int)uVar9 - iVar2;
    if (1 < iVar2) {
      if (*(int *)(param_1 + 8) <= iVar3) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        return;
      }
      pcVar6 = (char *)(_UNK_01dc2920 + 0x1dc27ec);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dc2924 + 0x1dc2800));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x92c8,0);
      if (iVar3 == 0) {
        iVar3 = iVar2;
        if (0 < iVar2) {
          iVar3 = *(int *)(param_1 + 0x24);
        }
        if (0 < iVar3) {
          iVar3 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
          if (iVar3 < *(int *)(param_1 + 8)) {
            iVar2 = *(int *)(param_1 + 0x14) + iVar2;
            *(int *)(param_1 + 0x14) = iVar2;
            iVar2 = func_0x01457ae8(iVar2,*(undefined4 *)(param_1 + 0x24));
            if (0 < iVar2) {
              piVar8 = *(int **)(_UNK_01dc2928 + 0x1dc28b4);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74),iVar2,iVar2);
            }
            iVar2 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
            if (iVar2 < *(int *)(param_1 + 8)) {
              func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
              *(undefined4 *)(param_1 + 0x14) = extraout_r1;
            }
            else {
              *(undefined4 *)(param_1 + 0x14) = 0;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
        }
        return;
      }
      iVar3 = func_0x0229f13c(0x92c8,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021773c4;
    }
    if (*(int *)(param_1 + 8) <= iVar3) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x24);
  param_2 = *(int *)(param_1 + 0x14) + param_2;
  *(int *)(param_1 + 0x14) = param_2;
  if (iVar2 <= param_2) {
    piVar8 = *(int **)(_UNK_01dc2bfc + 0x1dc2b04);
    iVar3 = *piVar8;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4(iVar3);
      param_2 = *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(param_1 + 0x24);
      iVar3 = *piVar8;
    }
    uVar7 = func_0x01457ae8(param_2,iVar2);
    iVar2 = func_0x01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x70),uVar7,1);
    if (iVar2 != 0) {
      func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x14) = extraout_r1_00;
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = **(undefined4 **)(_UNK_01dc2c00 + 0x1dc2b90);
      pcVar6 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar7,0);
        func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x47,0);
      if (iVar3 == 0) {
        iVar3 = func_0x01489db8(uVar7,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar2 + 0x18);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244f844(iVar3,uVar7,&stack0xffffffec,
                                  **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
          if (iVar3 == 0) {
            iVar3 = FUN_018872a8(uVar7,0);
            if (iVar3 == 0) {
              return;
            }
            uVar7 = *(undefined4 *)(iVar3 + 0x18);
            if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar5 = func_0x025550ec(uVar7,0);
            cVar1 = *(char *)(iVar3 + 0x1c);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar7 = *(undefined4 *)(iVar5 + 8);
            uVar4 = *(undefined4 *)(iVar5 + 0xc);
            if (cVar1 != '\0') {
              FUN_01bfe144(iVar2,uVar7,uVar4);
              return;
            }
          }
          else {
            uVar4 = 0;
            uVar7 = *(undefined4 *)(iVar2 + 8);
          }
          FUN_01bfe078(iVar2,uVar7,uVar4);
        }
      }
      else {
        iVar3 = func_0x0229f13c(0x47,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar3,iVar2,uVar7,0);
      }
      return;
    }
  }
  return;
}



// ===== FAT.MergeEnergyMan$$TryRecover RVA 0x1db2c04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc2c04(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_01dc3140 + 0x1dc2c24);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc3144 + 0x1dc2c3c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3148 + 0x1dc2c48));
    func_0x01384978(*(undefined4 *)(_UNK_01dc314c + 0x1dc2c54));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3150 + 0x1dc2c60));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3154 + 0x1dc2c6c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3158 + 0x1dc2c78));
    func_0x01384978(*(undefined4 *)(_UNK_01dc315c + 0x1dc2c84));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3160 + 0x1dc2c90));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3164 + 0x1dc2c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3168 + 0x1dc2ca8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc316c + 0x1dc2cb4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3170 + 0x1dc2cc0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3174 + 0x1dc2ccc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3178 + 0x1dc2cd8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc317c + 0x1dc2ce4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3180 + 0x1dc2cf0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x92c7,0);
  if (iVar1 == 0) {
    if (param_4 < (int)param_3) {
      piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dc3184 + 0x1dc2d64),4);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_01dc3188 + 0x1dc2d84);
      iVar1 = *piVar7;
      if ((iVar1 != 0) &&
         (iVar1 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar1 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      iVar1 = *piVar7;
      if (piVar3[3] == 0) {
        func_0x01384bf4();
      }
      piVar3[4] = iVar1;
      puVar9 = *(undefined4 **)(_UNK_01dc318c + 0x1dc2dd4);
      uStack_30 = param_3;
      iVar1 = func_0x01384abc(*puVar9,&uStack_30);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar3[3] < 2) {
        func_0x01384bf4();
      }
      piVar3[5] = iVar1;
      iStack_24 = param_4;
      iVar1 = func_0x01384abc(*puVar9,&iStack_24);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar3[3] < 3) {
        func_0x01384bf4();
      }
      piVar3[6] = iVar1;
      uStack_28 = *(undefined4 *)(param_1 + 0x14);
      iVar1 = func_0x01384abc(*puVar9,&uStack_28);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
        uVar4 = func_0x01384c10();
        func_0x01384aa0(uVar4,0);
      }
      if ((uint)piVar3[3] < 4) {
        func_0x01384bf4();
      }
      piVar3[7] = iVar1;
      uVar4 = func_0x0244f708(**(undefined4 **)(_UNK_01dc3190 + 0x1dc2ee0),piVar3,0);
      if (*(int *)(**(int **)(_UNK_01dc3194 + 0x1dc2ef4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar4,0);
    }
    if ((int)param_3 < 1) {
      uStack_30 = param_3;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01dc3198 + 0x1dc30d8),&uStack_30);
      uVar2 = 0;
      uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_01dc319c + 0x1dc30f8),
                              **(undefined4 **)(_UNK_01dc31a0 + 0x1dc3104),uVar4,0);
      if (*(int *)(**(int **)(_UNK_01dc31a4 + 0x1dc3118) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar4,0);
    }
    else {
      iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
      uVar4 = *(undefined4 *)(param_1 + 8);
      if (*(int *)(**(int **)(_UNK_01dc31a8 + 0x1dc2f34) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0148aaf8(iVar1 + param_3,uVar4,0);
      iVar5 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
      iVar8 = *(int *)(param_1 + 0x10);
      iVar5 = iVar1 - iVar5;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x0245190c(iVar8,iVar1,**(undefined4 **)(_UNK_01dc31ac + 0x1dc2f90));
      func_0x019a4728(param_2,1,iVar5,iVar5 >> 0x1f,0);
      if (*(int *)(**(int **)(_UNK_01dc31b0 + 0x1dc2fbc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc31b4 + 0x1dc2fd8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349e110(iVar1,iVar5,**(undefined4 **)(_UNK_01dc31b8 + 0x1dc2ffc));
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc31bc + 0x1dc3010));
      iVar8 = FUN_01c24918(0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x4c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x01dbb000(iVar8);
      uVar4 = 0xffffffff;
      if ((iVar8 != 0) && (iVar8 = func_0x02139cf4(iVar8,0), iVar8 != 0)) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar8 + 8),
                        **(undefined4 **)(_UNK_01dc31c0 + 0x1dc3074));
        uVar4 = uStack_2c;
        if ((uStack_30 & 0xff) == 0) {
          uVar4 = 0xffffffff;
        }
      }
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x034a0af8(iVar1,iVar5,uVar4,**(undefined4 **)(_UNK_01dc31c4 + 0x1dc30b8));
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x92c7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021bf524(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MergeEnergyMan$$CanUseEnergy RVA 0x1db31c8 =====

uint FUN_01dc31c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x9d70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d70,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
  return (uint)(param_2 <= iVar1);
}



// ===== FAT.MergeEnergyMan$$UseEnergy RVA 0x1db323c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc323c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_01dc35a0 + 0x1dc325c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc35a4 + 0x1dc3270));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35a8 + 0x1dc327c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35ac + 0x1dc3288));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35b0 + 0x1dc3294));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35b4 + 0x1dc32a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35b8 + 0x1dc32ac));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35bc + 0x1dc32b8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35c0 + 0x1dc32c4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35c4 + 0x1dc32d0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35c8 + 0x1dc32dc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35cc + 0x1dc32e8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35d0 + 0x1dc32f4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc35d4 + 0x1dc3300));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d71,0);
  if (iVar1 == 0) {
    if (param_2 < 0) {
      iStack_24 = param_2;
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01dc35d8 + 0x1dc3538),&iStack_24);
      uVar2 = 0;
      uVar5 = func_0x0244f690(**(undefined4 **)(_UNK_01dc35dc + 0x1dc3558),
                              **(undefined4 **)(_UNK_01dc35e0 + 0x1dc3564),uVar5,0);
      if (*(int *)(**(int **)(_UNK_01dc35e4 + 0x1dc3578) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar5,0);
    }
    else {
      uVar2 = 0;
      iVar1 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
      if (param_2 <= iVar1) {
        iVar4 = *(int *)(param_1 + 0x10);
        iVar1 = func_0x028d1a38(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0245190c(iVar4,iVar1 - param_2,**(undefined4 **)(_UNK_01dc35e8 + 0x1dc33ac));
        func_0x019a4728(param_3,0,param_2,0,0);
        func_0x01dc3604(param_1);
        if (*(int *)(**(int **)(_UNK_01dc35ec + 0x1dc33e0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc35f0 + 0x1dc33fc));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0349e110(iVar1,-param_2,**(undefined4 **)(_UNK_01dc35f4 + 0x1dc3424));
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc35f8 + 0x1dc3438));
        iVar4 = FUN_01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x4c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01dbb000(iVar4);
        uVar5 = 0xffffffff;
        if ((iVar4 != 0) && (iVar4 = func_0x02139cf4(iVar4,0), iVar4 != 0)) {
          uStack_2c = 0;
          uStack_30 = 0;
          func_0x03507d38(&uStack_30,*(undefined4 *)(iVar4 + 8),
                          **(undefined4 **)(_UNK_01dc35fc + 0x1dc349c));
          uVar5 = uStack_2c;
          if ((uStack_30 & 0xff) == 0) {
            uVar5 = 0xffffffff;
          }
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a0af8(iVar1,-param_2,uVar5,**(undefined4 **)(_UNK_01dc3600 + 0x1dc34e0));
        iVar1 = FUN_01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xac);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_01ba1208(iVar1,param_2,0);
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d71,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021846e8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.MergeEnergyMan$$TryTrackEnergyUnbalance RVA 0x1db3604 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc3604(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x9d72,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9d72,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar8,&uStack_30,uVar5);
    return;
  }
  iVar3 = FUN_01dc1368(param_1);
  if (-5 < iVar3) {
    return;
  }
  pcVar6 = (char *)(_UNK_019a49c8 + 0x19a4928);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019a49cc + 0x19a493c));
    func_0x01384978(*(undefined4 *)(_UNK_019a49d0 + 0x19a4948));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x923,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x923,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar8 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
      uVar8 = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar8 = 1;
      }
    }
    iVar7 = *(int *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar5,&uStack_30,uVar8);
    return;
  }
  if (*(int *)(**(int **)(_UNK_019a49d4 + 0x19a499c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  piVar2 = (int *)func_0x02f74dec(**(undefined4 **)(_UNK_019a49d8 + 0x19a49b8));
  pcVar6 = (char *)(_UNK_01993228 + 0x19930f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0199322c + 0x1993104));
    func_0x01384978(*(undefined4 *)(_UNK_01993230 + 0x1993110));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x27,0);
  if (iVar3 == 0) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar3 = *piVar2;
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_01993234 + 0x1993174) + 0xb8);
    if ((uVar4 <= *(byte *)(iVar3 + 0xb8)) &&
       (*(int *)(*(int *)(iVar3 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01993234 + 0x1993174)))
    {
      (**(code **)(iVar3 + 0xe0))(piVar2,*(undefined4 *)(iVar3 + 0xe4));
    }
    piVar1 = (int *)func_0x02450044(piVar2,0);
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar1 = (int *)(**(code **)(*piVar1 + 0x100))(piVar1,*(undefined4 *)(*piVar1 + 0x104));
    uVar8 = func_0x02450054(piVar2,0);
    if (*(int *)(**(int **)(_UNK_01993238 + 0x1993204) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar6 = (char *)(_UNK_01998f20 + 0x1998e0c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01998f24 + 0x1998e20));
      func_0x01384978(*(undefined4 *)(_UNK_01998f28 + 0x1998e2c));
      func_0x01384978(*(undefined4 *)(_UNK_01998f2c + 0x1998e38));
      *pcVar6 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x2a,0);
    if (iVar3 == 0) {
      iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01998f30 + 0x1998e94));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar3 + 9) != '\0') {
        piVar2 = *(int **)(_UNK_01998f34 + 0x1998ec0);
        iVar3 = *piVar2;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar2;
        }
        if (*(char *)(*(int *)(iVar3 + 0x5c) + 0xc) != '\0') {
          iVar3 = **(int **)(**(int **)(_UNK_01998f38 + 0x1998ef0) + 0x5c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0229f06c(0x2b,0,uVar8,0);
          if (iVar7 == 0) {
            iVar7 = func_0x020a3acc(iVar3,0,piVar1,uVar8);
            if (iVar7 == 0) {
              piVar2 = *(int **)(iVar3 + 0x24);
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
                    /* WARNING: Could not recover jumptable at 0x020a3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*piVar2 + 0x1e8))(piVar2,piVar1,uVar8,*(undefined4 *)(*piVar2 + 0x1ec));
              return;
            }
          }
          else {
            iVar7 = func_0x0229f13c(0x2b,0);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x02174858(iVar7,iVar3,piVar1,uVar8);
          }
          return;
        }
      }
      return;
    }
    iVar3 = func_0x0229f13c(0x2a,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x27,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 0;
    piVar1 = piVar2;
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar8,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,piVar1,0);
  func_0x01485278(&uStack_38,uVar8,0);
  iVar7 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.MergeEnergyMan$$ClaimCount RVA 0x1db366c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc366c(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01dc3738 + 0x1dc3688);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc373c + 0x1dc369c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x3574,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d5bb20(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01dc3740 + 0x1dc3718));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3574,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.MergeEnergyMan$$ClaimEnergy RVA 0x1db3744 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc3744(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01dc383c + 0x1dc3760);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc3840 + 0x1dc3774));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3844 + 0x1dc3780));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x3792,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5bb20(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01dc3848 + 0x1dc37fc));
    iVar1 = iStack_14;
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar2,param_2,iVar1 + 1,**(undefined4 **)(_UNK_01dc384c + 0x1dc382c));
  }
  else {
    iVar1 = func_0x0229f13c(0x3792,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.MergeEnergyMan$$FAT.IGameModule.Reset RVA 0x1db3850 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc3850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x9d73,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01dc1c7c + 0x1dc1ba8);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc1c80 + 0x1dc1bbc));
      func_0x01384978(*(undefined4 *)(_UNK_01dc1c84 + 0x1dc1bc8));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9d6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01dc1c88 + 0x1dc1c30));
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245190c(iVar1,0,**(undefined4 **)(_UNK_01dc1c8c + 0x1dc1c58));
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(param_1 + 0x1c) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(param_1 + 0x20) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uVar6 = FUN_01c34eb8(0);
      *(undefined8 *)(param_1 + 0x30) = uVar6;
      return;
    }
    iVar1 = func_0x0229f13c(0x9d6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9d73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MergeEnergyMan$$FAT.IGameModule.LoadConfig RVA 0x1db38a8 =====

void FUN_01dc38a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9d74,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d74,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(iVar1 + 800);
  uVar2 = *(undefined4 *)(iVar1 + 0x324);
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar4;
  return;
}



// ===== FAT.MergeEnergyMan$$FAT.IGameModule.Startup RVA 0x1db3948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc3948(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  pcVar3 = (char *)(_UNK_01dc3a94 + 0x1dc395c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc3a98 + 0x1dc3970));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3a9c + 0x1dc397c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3aa0 + 0x1dc3988));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3aa4 + 0x1dc3994));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d76,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d76,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01dc3aa8 + 0x1dc39ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01dc3aac + 0x1dc3a08));
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01dc3ab0 + 0x1dc3a1c));
  func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_01dc3ab4 + 0x1dc3a38),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028c3e6c(iVar1,uVar5,0);
  FUN_01dc2238(param_1);
  if (*(char *)(param_1 + 0x28) != '\0') {
    iVar1 = *(int *)(param_1 + 0x34);
    bVar6 = *(int *)(param_1 + 0x30) != 0;
    if ((int)-(iVar1 + (uint)bVar6) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar6))) {
      return;
    }
    uVar7 = FUN_01c34eb8(0);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
  }
  return;
}



// ===== FAT.MergeEnergyMan$$EnergyDbg_AgoSec RVA 0x1db3ab8 =====

uint FUN_01dc3ab8(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar1 = func_0x0229f06c(0x9d78,0);
  if (iVar1 == 0) {
    if (param_4 < (int)(uint)(param_3 == 0)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar3 = param_1 - param_3;
      param_2 = param_2 - (param_4 + (uint)(param_1 < param_3));
      uVar2 = 0x7fffffff;
      if (((int)-(param_2 + (uint)(0x7fffffff < uVar3)) < 0 ==
           (SBORROW4(0,param_2) != SBORROW4(-param_2,(uint)(0x7fffffff < uVar3)))) &&
         (uVar2 = uVar3,
         (int)(-1 - (param_2 + (uint)(0x7fffffff < uVar3))) < 0 ==
         (SBORROW4(-1,param_2) != SBORROW4(-1 - param_2,(uint)(0x7fffffff < uVar3))))) {
        uVar2 = 0x80000000;
      }
    }
  }
  else {
    uVar5 = func_0x0229f13c(0x9d78,0);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      func_0x01384bf0();
      uVar4 = extraout_r1;
    }
    uVar2 = func_0x02283138((int)uVar5,uVar4,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MergeEnergyMan$$EnergyDbg_AgoStr RVA 0x1db3b6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dc3b6c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint uStack_28;
  uint uStack_24;
  
  pcVar5 = (char *)(_UNK_01dc3da4 + 0x1dc3b8c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc3da8 + 0x1dc3ba4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3dac + 0x1dc3bb0));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3db0 + 0x1dc3bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3db4 + 0x1dc3bc8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3db8 + 0x1dc3bd4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc3dbc + 0x1dc3be0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d79,0);
  if (iVar1 == 0) {
    if ((int)-(param_4 + (uint)(param_3 != 0)) < 0 ==
        (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(param_3 != 0)))) {
      puVar6 = *(undefined4 **)(_UNK_01dc3dc0 + 0x1dc3cec);
    }
    else {
      uVar3 = FUN_01dc3ab8(param_1,param_2,param_3,param_4);
      if (-1 < (int)uVar3) {
        if (0x3b < (int)uVar3) {
          if ((int)uVar3 < 0xe10) {
            puVar6 = *(undefined4 **)(_UNK_01dc3dd0 + 0x1dc3d4c);
            uStack_24 = (uVar3 & 0xffff) / 0x3c;
            iVar1 = uStack_24 * 0x10;
            uVar2 = func_0x01384abc(*puVar6,&uStack_24);
            uStack_28 = uVar3 + (iVar1 - (uVar3 & 0xffff) / 0x3c) * -4 & 0xffff;
            uVar4 = func_0x01384abc(*puVar6,&uStack_28);
            puVar6 = *(undefined4 **)(_UNK_01dc3dd4 + 0x1dc3d94);
          }
          else {
            puVar6 = *(undefined4 **)(_UNK_01dc3dd8 + 0x1dc3c8c);
            uStack_24 = uVar3 / 0xe10;
            uVar2 = func_0x01384abc(*puVar6,&uStack_24);
            uStack_28 = (uVar3 % 0xe10) / 0x3c;
            uVar4 = func_0x01384abc(*puVar6,&uStack_28);
            puVar6 = *(undefined4 **)(_UNK_01dc3ddc + 0x1dc3ce0);
          }
          uVar2 = func_0x0244f690(*puVar6,uVar2,uVar4,0);
          return uVar2;
        }
        uStack_24 = uVar3;
        uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01dc3dc8 + 0x1dc3d0c),&uStack_24);
        uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_01dc3dcc + 0x1dc3d28),uVar2,0);
        return uVar2;
      }
      puVar6 = *(undefined4 **)(_UNK_01dc3dc4 + 0x1dc3cf8);
    }
    uVar2 = *puVar6;
  }
  else {
    uVar7 = func_0x0229f13c(0x9d79,0);
    uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r1;
    }
    uVar2 = func_0x021b0f78((int)uVar7,uVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.MergeEnergyMan$$Energy_DumpState RVA 0x1db3de0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc3de0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01dc43e4 + 0x1dc3df8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc43e8 + 0x1dc3e0c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc43ec + 0x1dc3e18));
    func_0x01384978(*(undefined4 *)(_UNK_01dc43f0 + 0x1dc3e24));
    func_0x01384978(*(undefined4 *)(_UNK_01dc43f4 + 0x1dc3e30));
    func_0x01384978(*(undefined4 *)(_UNK_01dc43f8 + 0x1dc3e3c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc43fc + 0x1dc3e48));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4400 + 0x1dc3e54));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4404 + 0x1dc3e60));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4408 + 0x1dc3e6c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc440c + 0x1dc3e78));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4410 + 0x1dc3e84));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4414 + 0x1dc3e90));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4418 + 0x1dc3e9c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc441c + 0x1dc3ea8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4420 + 0x1dc3eb4));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4424 + 0x1dc3ec0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d7a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = piStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    return;
  }
  piVar15 = (int *)(param_1 + 0x18);
  piVar13 = (int *)(param_1 + 0x30);
  uVar17 = FUN_01c34eb8(0);
  uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
  uVar12 = FUN_01dc1368(param_1);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x02451860(iVar1,**(undefined4 **)(_UNK_01dc4428 + 0x1dc3f50));
  uStack_44 = *(undefined4 *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uStack_48 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = FUN_01dc3b6c((int)uVar17,uVar7,*piVar15,*(undefined4 *)(param_1 + 0x1c));
  uVar7 = FUN_01dc3b6c((int)uVar17,uVar7,*piVar13,*(undefined4 *)(param_1 + 0x34));
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_01dc442c + 0x1dc3fac),0xe);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = **(undefined4 **)(_UNK_01dc4430 + 0x1dc3fcc);
  if (*(int *)(iVar1 + 0xc) == 0) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar9;
  uVar10 = (uint)*(byte *)(param_1 + 0x28);
  bVar16 = uVar10 == 0;
  if (bVar16) {
    uVar10 = 1;
  }
  puVar14 = *(undefined4 **)(_UNK_01dc4438 + 0x1dc4000);
  if (bVar16) {
    puVar14 = *(undefined4 **)(_UNK_01dc4434 + 0x1dc3ff8);
  }
  uVar4 = *(uint *)(iVar1 + 0xc);
  uVar9 = *puVar14;
  if (uVar4 <= uVar10) {
    func_0x01384bf4();
    uVar4 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + uVar10 * 4 + 0x10) = uVar9;
  uVar9 = **(undefined4 **)(_UNK_01dc443c + 0x1dc4034);
  piStack_40 = piVar13;
  if (uVar4 < 3) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar9;
  piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dc4440 + 0x1dc4050),4);
  puVar14 = *(undefined4 **)(_UNK_01dc4444 + 0x1dc4068);
  uStack_28 = uVar12;
  iVar11 = func_0x01384abc(*puVar14,&uStack_28);
  if (piVar13 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((iVar11 != 0) &&
     (iVar5 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar5 == 0)) {
    uVar12 = func_0x01384c10();
    func_0x01384aa0(uVar12,0);
  }
  if (piVar13[3] == 0) {
    func_0x01384bf4();
  }
  piVar13[4] = iVar11;
  uStack_2c = *(undefined4 *)(param_1 + 8);
  iVar11 = func_0x01384abc(*puVar14,&uStack_2c);
  if ((iVar11 != 0) &&
     (iVar5 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar5 == 0)) {
    uVar12 = func_0x01384c10();
    func_0x01384aa0(uVar12,0);
  }
  if ((uint)piVar13[3] < 2) {
    func_0x01384bf4();
  }
  piVar13[5] = iVar11;
  uStack_30 = uVar2;
  iVar11 = func_0x01384abc(*puVar14,&uStack_30);
  if ((iVar11 != 0) &&
     (iVar5 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar5 == 0)) {
    uVar12 = func_0x01384c10();
    func_0x01384aa0(uVar12,0);
  }
  if ((uint)piVar13[3] < 3) {
    func_0x01384bf4();
  }
  piVar13[6] = iVar11;
  uStack_34 = uVar6;
  iVar11 = func_0x01384abc(*puVar14,&uStack_34);
  if ((iVar11 != 0) &&
     (iVar5 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar5 == 0)) {
    uVar12 = func_0x01384c10();
    func_0x01384aa0(uVar12,0);
  }
  if ((uint)piVar13[3] < 4) {
    func_0x01384bf4();
  }
  piVar13[7] = iVar11;
  uVar12 = func_0x0244f708(**(undefined4 **)(_UNK_01dc4448 + 0x1dc41d8),piVar13,0);
  if (*(uint *)(iVar1 + 0xc) < 4) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar12;
  uStack_38 = uStack_48;
  uVar12 = func_0x01384abc(*puVar14,&uStack_38);
  uStack_3c = uStack_44;
  uVar2 = func_0x01384abc(*puVar14,&uStack_3c);
  uVar12 = func_0x0244f690(**(undefined4 **)(_UNK_01dc444c + 0x1dc4238),uVar12,uVar2,0);
  uVar10 = *(uint *)(iVar1 + 0xc);
  if (uVar10 < 5) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  piVar13 = piStack_40;
  *(undefined4 *)(iVar1 + 0x20) = uVar12;
  uVar12 = **(undefined4 **)(_UNK_01dc4450 + 0x1dc4268);
  if (uVar10 < 6) {
    func_0x01384bf4();
  }
  iVar11 = *piVar15;
  iVar5 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x24) = uVar12;
  if ((int)-(iVar5 + (uint)(iVar11 != 0)) < 0 ==
      (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar11 != 0)))) {
    uVar12 = **(undefined4 **)(_UNK_01dc4454 + 0x1dc42a8);
  }
  else {
    uVar12 = func_0x01486918(piVar15,0);
  }
  uVar10 = *(uint *)(iVar1 + 0xc);
  if (uVar10 < 7) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x28) = uVar12;
  puVar14 = *(undefined4 **)(_UNK_01dc4458 + 0x1dc42d4);
  uVar12 = *puVar14;
  if (uVar10 < 8) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar12;
  if (uVar10 < 9) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x30) = uVar3;
  uVar12 = **(undefined4 **)(_UNK_01dc445c + 0x1dc4308);
  if (uVar10 < 10) {
    func_0x01384bf4();
  }
  iVar11 = *piVar13;
  iVar5 = piVar13[1];
  *(undefined4 *)(iVar1 + 0x34) = uVar12;
  if ((int)-(iVar5 + (uint)(iVar11 != 0)) < 0 ==
      (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar11 != 0)))) {
    uVar12 = **(undefined4 **)(_UNK_01dc4460 + 0x1dc4344);
  }
  else {
    uVar12 = func_0x01486918(piVar13,0);
  }
  uVar10 = *(uint *)(iVar1 + 0xc);
  if (uVar10 < 0xb) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x38) = uVar12;
  uVar12 = *puVar14;
  if (uVar10 < 0xc) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x3c) = uVar12;
  if (uVar10 < 0xd) {
    func_0x01384bf4();
    uVar10 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x40) = uVar7;
  uVar12 = **(undefined4 **)(_UNK_01dc4464 + 0x1dc4398);
  if (uVar10 < 0xe) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x44) = uVar12;
  uVar12 = func_0x0245088c(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01dc4468 + 0x1dc43c0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02450924(uVar12,0);
  return;
}



// ===== FAT.MergeEnergyMan$$Energy_CallToBackground RVA 0x1db446c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc446c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_01dc4530 + 0x1dc4480);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc4534 + 0x1dc4494));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4538 + 0x1dc44a0));
    *pcVar10 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x9d7b,0);
  if (iVar5 == 0) {
    FUN_01dc2680(param_1);
    if (*(int *)(**(int **)(_UNK_01dc453c + 0x1dc4500) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450924(**(undefined4 **)(_UNK_01dc4540 + 0x1dc4520),0);
    pcVar10 = (char *)(_UNK_01dc43e4 + 0x1dc3df8);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc43e8 + 0x1dc3e0c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43ec + 0x1dc3e18));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f0 + 0x1dc3e24));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f4 + 0x1dc3e30));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f8 + 0x1dc3e3c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43fc + 0x1dc3e48));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4400 + 0x1dc3e54));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4404 + 0x1dc3e60));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4408 + 0x1dc3e6c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc440c + 0x1dc3e78));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4410 + 0x1dc3e84));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4414 + 0x1dc3e90));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4418 + 0x1dc3e9c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc441c + 0x1dc3ea8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4420 + 0x1dc3eb4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4424 + 0x1dc3ec0));
      *pcVar10 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x9d7a,0);
    if (iVar5 == 0) {
      piVar15 = (int *)(param_1 + 0x18);
      piVar13 = (int *)(param_1 + 0x30);
      uVar17 = FUN_01c34eb8(0);
      uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar12 = FUN_01dc1368(param_1);
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x02451860(iVar5,**(undefined4 **)(_UNK_01dc4428 + 0x1dc3f50));
      uStack_44 = *(undefined4 *)(param_1 + 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x20);
      uStack_48 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = FUN_01dc3b6c((int)uVar17,uVar7,*piVar15,*(undefined4 *)(param_1 + 0x1c));
      uVar7 = FUN_01dc3b6c((int)uVar17,uVar7,*piVar13,*(undefined4 *)(param_1 + 0x34));
      iVar5 = func_0x01384a00(**(undefined4 **)(_UNK_01dc442c + 0x1dc3fac),0xe);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar8 = **(undefined4 **)(_UNK_01dc4430 + 0x1dc3fcc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x10) = uVar8;
      uVar9 = (uint)*(byte *)(param_1 + 0x28);
      bVar16 = uVar9 == 0;
      if (bVar16) {
        uVar9 = 1;
      }
      puVar14 = *(undefined4 **)(_UNK_01dc4438 + 0x1dc4000);
      if (bVar16) {
        puVar14 = *(undefined4 **)(_UNK_01dc4434 + 0x1dc3ff8);
      }
      uVar3 = *(uint *)(iVar5 + 0xc);
      uVar8 = *puVar14;
      if (uVar3 <= uVar9) {
        func_0x01384bf4();
        uVar3 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + uVar9 * 4 + 0x10) = uVar8;
      uVar8 = **(undefined4 **)(_UNK_01dc443c + 0x1dc4034);
      piStack_40 = piVar13;
      if (uVar3 < 3) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x18) = uVar8;
      piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dc4440 + 0x1dc4050),4);
      puVar14 = *(undefined4 **)(_UNK_01dc4444 + 0x1dc4068);
      uStack_28 = uVar12;
      iVar11 = func_0x01384abc(*puVar14,&uStack_28);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if (piVar13[3] == 0) {
        func_0x01384bf4();
      }
      piVar13[4] = iVar11;
      uStack_2c = *(undefined4 *)(param_1 + 8);
      iVar11 = func_0x01384abc(*puVar14,&uStack_2c);
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if ((uint)piVar13[3] < 2) {
        func_0x01384bf4();
      }
      piVar13[5] = iVar11;
      uStack_30 = uVar1;
      iVar11 = func_0x01384abc(*puVar14,&uStack_30);
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if ((uint)piVar13[3] < 3) {
        func_0x01384bf4();
      }
      piVar13[6] = iVar11;
      uStack_34 = uVar6;
      iVar11 = func_0x01384abc(*puVar14,&uStack_34);
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if ((uint)piVar13[3] < 4) {
        func_0x01384bf4();
      }
      piVar13[7] = iVar11;
      uVar12 = func_0x0244f708(**(undefined4 **)(_UNK_01dc4448 + 0x1dc41d8),piVar13,0);
      if (*(uint *)(iVar5 + 0xc) < 4) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x1c) = uVar12;
      uStack_38 = uStack_48;
      uVar12 = func_0x01384abc(*puVar14,&uStack_38);
      uStack_3c = uStack_44;
      uVar1 = func_0x01384abc(*puVar14,&uStack_3c);
      uVar12 = func_0x0244f690(**(undefined4 **)(_UNK_01dc444c + 0x1dc4238),uVar12,uVar1,0);
      uVar9 = *(uint *)(iVar5 + 0xc);
      if (uVar9 < 5) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      piVar13 = piStack_40;
      *(undefined4 *)(iVar5 + 0x20) = uVar12;
      uVar12 = **(undefined4 **)(_UNK_01dc4450 + 0x1dc4268);
      if (uVar9 < 6) {
        func_0x01384bf4();
      }
      iVar11 = *piVar15;
      iVar4 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar5 + 0x24) = uVar12;
      if ((int)-(iVar4 + (uint)(iVar11 != 0)) < 0 ==
          (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar11 != 0)))) {
        uVar12 = **(undefined4 **)(_UNK_01dc4454 + 0x1dc42a8);
      }
      else {
        uVar12 = func_0x01486918(piVar15,0);
      }
      uVar9 = *(uint *)(iVar5 + 0xc);
      if (uVar9 < 7) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x28) = uVar12;
      puVar14 = *(undefined4 **)(_UNK_01dc4458 + 0x1dc42d4);
      uVar12 = *puVar14;
      if (uVar9 < 8) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x2c) = uVar12;
      if (uVar9 < 9) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x30) = uVar2;
      uVar12 = **(undefined4 **)(_UNK_01dc445c + 0x1dc4308);
      if (uVar9 < 10) {
        func_0x01384bf4();
      }
      iVar11 = *piVar13;
      iVar4 = piVar13[1];
      *(undefined4 *)(iVar5 + 0x34) = uVar12;
      if ((int)-(iVar4 + (uint)(iVar11 != 0)) < 0 ==
          (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar11 != 0)))) {
        uVar12 = **(undefined4 **)(_UNK_01dc4460 + 0x1dc4344);
      }
      else {
        uVar12 = func_0x01486918(piVar13,0);
      }
      uVar9 = *(uint *)(iVar5 + 0xc);
      if (uVar9 < 0xb) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x38) = uVar12;
      uVar12 = *puVar14;
      if (uVar9 < 0xc) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x3c) = uVar12;
      if (uVar9 < 0xd) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x40) = uVar7;
      uVar12 = **(undefined4 **)(_UNK_01dc4464 + 0x1dc4398);
      if (uVar9 < 0xe) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x44) = uVar12;
      uVar12 = func_0x0245088c(iVar5,0);
      if (*(int *)(**(int **)(_UNK_01dc4468 + 0x1dc43c0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02450924(uVar12,0);
      return;
    }
    iVar5 = func_0x0229f13c(0x9d7a,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x9d7b,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = piStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar11 = *(int *)(iVar5 + 8);
  uVar12 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar5 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
  return;
}



// ===== FAT.MergeEnergyMan$$Energy_CallToForeground RVA 0x1db4544 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4544(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_01dc4608 + 0x1dc4558);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc460c + 0x1dc456c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4610 + 0x1dc4578));
    *pcVar10 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x9d7c,0);
  if (iVar5 == 0) {
    FUN_01dc270c(param_1);
    if (*(int *)(**(int **)(_UNK_01dc4614 + 0x1dc45d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450924(**(undefined4 **)(_UNK_01dc4618 + 0x1dc45f8),0);
    pcVar10 = (char *)(_UNK_01dc43e4 + 0x1dc3df8);
    if (*pcVar10 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc43e8 + 0x1dc3e0c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43ec + 0x1dc3e18));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f0 + 0x1dc3e24));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f4 + 0x1dc3e30));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f8 + 0x1dc3e3c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43fc + 0x1dc3e48));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4400 + 0x1dc3e54));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4404 + 0x1dc3e60));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4408 + 0x1dc3e6c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc440c + 0x1dc3e78));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4410 + 0x1dc3e84));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4414 + 0x1dc3e90));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4418 + 0x1dc3e9c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc441c + 0x1dc3ea8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4420 + 0x1dc3eb4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4424 + 0x1dc3ec0));
      *pcVar10 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x9d7a,0);
    if (iVar5 == 0) {
      piVar15 = (int *)(param_1 + 0x18);
      piVar13 = (int *)(param_1 + 0x30);
      uVar17 = FUN_01c34eb8(0);
      uVar7 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar12 = FUN_01dc1368(param_1);
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x02451860(iVar5,**(undefined4 **)(_UNK_01dc4428 + 0x1dc3f50));
      uStack_44 = *(undefined4 *)(param_1 + 0x14);
      uVar6 = *(undefined4 *)(param_1 + 0x20);
      uStack_48 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = FUN_01dc3b6c((int)uVar17,uVar7,*piVar15,*(undefined4 *)(param_1 + 0x1c));
      uVar7 = FUN_01dc3b6c((int)uVar17,uVar7,*piVar13,*(undefined4 *)(param_1 + 0x34));
      iVar5 = func_0x01384a00(**(undefined4 **)(_UNK_01dc442c + 0x1dc3fac),0xe);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar8 = **(undefined4 **)(_UNK_01dc4430 + 0x1dc3fcc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x10) = uVar8;
      uVar9 = (uint)*(byte *)(param_1 + 0x28);
      bVar16 = uVar9 == 0;
      if (bVar16) {
        uVar9 = 1;
      }
      puVar14 = *(undefined4 **)(_UNK_01dc4438 + 0x1dc4000);
      if (bVar16) {
        puVar14 = *(undefined4 **)(_UNK_01dc4434 + 0x1dc3ff8);
      }
      uVar3 = *(uint *)(iVar5 + 0xc);
      uVar8 = *puVar14;
      if (uVar3 <= uVar9) {
        func_0x01384bf4();
        uVar3 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + uVar9 * 4 + 0x10) = uVar8;
      uVar8 = **(undefined4 **)(_UNK_01dc443c + 0x1dc4034);
      piStack_40 = piVar13;
      if (uVar3 < 3) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x18) = uVar8;
      piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dc4440 + 0x1dc4050),4);
      puVar14 = *(undefined4 **)(_UNK_01dc4444 + 0x1dc4068);
      uStack_28 = uVar12;
      iVar11 = func_0x01384abc(*puVar14,&uStack_28);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if (piVar13[3] == 0) {
        func_0x01384bf4();
      }
      piVar13[4] = iVar11;
      uStack_2c = *(undefined4 *)(param_1 + 8);
      iVar11 = func_0x01384abc(*puVar14,&uStack_2c);
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if ((uint)piVar13[3] < 2) {
        func_0x01384bf4();
      }
      piVar13[5] = iVar11;
      uStack_30 = uVar1;
      iVar11 = func_0x01384abc(*puVar14,&uStack_30);
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if ((uint)piVar13[3] < 3) {
        func_0x01384bf4();
      }
      piVar13[6] = iVar11;
      uStack_34 = uVar6;
      iVar11 = func_0x01384abc(*puVar14,&uStack_34);
      if ((iVar11 != 0) &&
         (iVar4 = func_0x01384ab8(iVar11,*(undefined4 *)(*piVar13 + 0x20)), iVar4 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if ((uint)piVar13[3] < 4) {
        func_0x01384bf4();
      }
      piVar13[7] = iVar11;
      uVar12 = func_0x0244f708(**(undefined4 **)(_UNK_01dc4448 + 0x1dc41d8),piVar13,0);
      if (*(uint *)(iVar5 + 0xc) < 4) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x1c) = uVar12;
      uStack_38 = uStack_48;
      uVar12 = func_0x01384abc(*puVar14,&uStack_38);
      uStack_3c = uStack_44;
      uVar1 = func_0x01384abc(*puVar14,&uStack_3c);
      uVar12 = func_0x0244f690(**(undefined4 **)(_UNK_01dc444c + 0x1dc4238),uVar12,uVar1,0);
      uVar9 = *(uint *)(iVar5 + 0xc);
      if (uVar9 < 5) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      piVar13 = piStack_40;
      *(undefined4 *)(iVar5 + 0x20) = uVar12;
      uVar12 = **(undefined4 **)(_UNK_01dc4450 + 0x1dc4268);
      if (uVar9 < 6) {
        func_0x01384bf4();
      }
      iVar11 = *piVar15;
      iVar4 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar5 + 0x24) = uVar12;
      if ((int)-(iVar4 + (uint)(iVar11 != 0)) < 0 ==
          (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar11 != 0)))) {
        uVar12 = **(undefined4 **)(_UNK_01dc4454 + 0x1dc42a8);
      }
      else {
        uVar12 = func_0x01486918(piVar15,0);
      }
      uVar9 = *(uint *)(iVar5 + 0xc);
      if (uVar9 < 7) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x28) = uVar12;
      puVar14 = *(undefined4 **)(_UNK_01dc4458 + 0x1dc42d4);
      uVar12 = *puVar14;
      if (uVar9 < 8) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x2c) = uVar12;
      if (uVar9 < 9) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x30) = uVar2;
      uVar12 = **(undefined4 **)(_UNK_01dc445c + 0x1dc4308);
      if (uVar9 < 10) {
        func_0x01384bf4();
      }
      iVar11 = *piVar13;
      iVar4 = piVar13[1];
      *(undefined4 *)(iVar5 + 0x34) = uVar12;
      if ((int)-(iVar4 + (uint)(iVar11 != 0)) < 0 ==
          (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar11 != 0)))) {
        uVar12 = **(undefined4 **)(_UNK_01dc4460 + 0x1dc4344);
      }
      else {
        uVar12 = func_0x01486918(piVar13,0);
      }
      uVar9 = *(uint *)(iVar5 + 0xc);
      if (uVar9 < 0xb) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x38) = uVar12;
      uVar12 = *puVar14;
      if (uVar9 < 0xc) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x3c) = uVar12;
      if (uVar9 < 0xd) {
        func_0x01384bf4();
        uVar9 = *(uint *)(iVar5 + 0xc);
      }
      *(undefined4 *)(iVar5 + 0x40) = uVar7;
      uVar12 = **(undefined4 **)(_UNK_01dc4464 + 0x1dc4398);
      if (uVar9 < 0xe) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar5 + 0x44) = uVar12;
      uVar12 = func_0x0245088c(iVar5,0);
      if (*(int *)(**(int **)(_UNK_01dc4468 + 0x1dc43c0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02450924(uVar12,0);
      return;
    }
    iVar5 = func_0x0229f13c(0x9d7a,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x9d7c,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = piStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar11 = *(int *)(iVar5 + 8);
  uVar12 = *(undefined4 *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar5 == 0) {
    uVar7 = 1;
  }
  func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
  return;
}



// ===== FAT.MergeEnergyMan$$Energy_TickOnce RVA 0x1db461c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc461c(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  int *piVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar12 = (char *)(_UNK_01dc46f4 + 0x1dc4630);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc46f8 + 0x1dc4644));
    func_0x01384978(*(undefined4 *)(_UNK_01dc46fc + 0x1dc4650));
    *pcVar12 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x9d7d,0);
  if (iVar6 == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x38) = 0;
    FUN_01dc29bc(param_1,1);
    piVar7 = *(int **)(_UNK_01dc4700 + 0x1dc46c0);
    *(undefined1 *)(param_1 + 0x38) = uVar1;
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450924(**(undefined4 **)(_UNK_01dc4704 + 0x1dc46e4),0);
    pcVar12 = (char *)(_UNK_01dc43e4 + 0x1dc3df8);
    if (*pcVar12 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dc43e8 + 0x1dc3e0c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43ec + 0x1dc3e18));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f0 + 0x1dc3e24));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f4 + 0x1dc3e30));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43f8 + 0x1dc3e3c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc43fc + 0x1dc3e48));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4400 + 0x1dc3e54));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4404 + 0x1dc3e60));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4408 + 0x1dc3e6c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc440c + 0x1dc3e78));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4410 + 0x1dc3e84));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4414 + 0x1dc3e90));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4418 + 0x1dc3e9c));
      func_0x01384978(*(undefined4 *)(_UNK_01dc441c + 0x1dc3ea8));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4420 + 0x1dc3eb4));
      func_0x01384978(*(undefined4 *)(_UNK_01dc4424 + 0x1dc3ec0));
      *pcVar12 = '\x01';
    }
    iVar6 = func_0x0229f06c(0x9d7a,0);
    if (iVar6 == 0) {
      piVar16 = (int *)(param_1 + 0x18);
      piVar7 = (int *)(param_1 + 0x30);
      uVar18 = FUN_01c34eb8(0);
      uVar9 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar14 = FUN_01dc1368(param_1);
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02451860(iVar6,**(undefined4 **)(_UNK_01dc4428 + 0x1dc3f50));
      uStack_44 = *(undefined4 *)(param_1 + 0x14);
      uVar8 = *(undefined4 *)(param_1 + 0x20);
      uStack_48 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = FUN_01dc3b6c((int)uVar18,uVar9,*piVar16,*(undefined4 *)(param_1 + 0x1c));
      uVar9 = FUN_01dc3b6c((int)uVar18,uVar9,*piVar7,*(undefined4 *)(param_1 + 0x34));
      iVar6 = func_0x01384a00(**(undefined4 **)(_UNK_01dc442c + 0x1dc3fac),0xe);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar10 = **(undefined4 **)(_UNK_01dc4430 + 0x1dc3fcc);
      if (*(int *)(iVar6 + 0xc) == 0) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar6 + 0x10) = uVar10;
      uVar11 = (uint)*(byte *)(param_1 + 0x28);
      bVar17 = uVar11 == 0;
      if (bVar17) {
        uVar11 = 1;
      }
      puVar15 = *(undefined4 **)(_UNK_01dc4438 + 0x1dc4000);
      if (bVar17) {
        puVar15 = *(undefined4 **)(_UNK_01dc4434 + 0x1dc3ff8);
      }
      uVar4 = *(uint *)(iVar6 + 0xc);
      uVar10 = *puVar15;
      if (uVar4 <= uVar11) {
        func_0x01384bf4();
        uVar4 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + uVar11 * 4 + 0x10) = uVar10;
      uVar10 = **(undefined4 **)(_UNK_01dc443c + 0x1dc4034);
      piStack_40 = piVar7;
      if (uVar4 < 3) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar6 + 0x18) = uVar10;
      piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01dc4440 + 0x1dc4050),4);
      puVar15 = *(undefined4 **)(_UNK_01dc4444 + 0x1dc4068);
      uStack_28 = uVar14;
      iVar13 = func_0x01384abc(*puVar15,&uStack_28);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar13 != 0) &&
         (iVar5 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar7[3] == 0) {
        func_0x01384bf4();
      }
      piVar7[4] = iVar13;
      uStack_2c = *(undefined4 *)(param_1 + 8);
      iVar13 = func_0x01384abc(*puVar15,&uStack_2c);
      if ((iVar13 != 0) &&
         (iVar5 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x01384bf4();
      }
      piVar7[5] = iVar13;
      uStack_30 = uVar2;
      iVar13 = func_0x01384abc(*puVar15,&uStack_30);
      if ((iVar13 != 0) &&
         (iVar5 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if ((uint)piVar7[3] < 3) {
        func_0x01384bf4();
      }
      piVar7[6] = iVar13;
      uStack_34 = uVar8;
      iVar13 = func_0x01384abc(*puVar15,&uStack_34);
      if ((iVar13 != 0) &&
         (iVar5 = func_0x01384ab8(iVar13,*(undefined4 *)(*piVar7 + 0x20)), iVar5 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if ((uint)piVar7[3] < 4) {
        func_0x01384bf4();
      }
      piVar7[7] = iVar13;
      uVar14 = func_0x0244f708(**(undefined4 **)(_UNK_01dc4448 + 0x1dc41d8),piVar7,0);
      if (*(uint *)(iVar6 + 0xc) < 4) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar6 + 0x1c) = uVar14;
      uStack_38 = uStack_48;
      uVar14 = func_0x01384abc(*puVar15,&uStack_38);
      uStack_3c = uStack_44;
      uVar2 = func_0x01384abc(*puVar15,&uStack_3c);
      uVar14 = func_0x0244f690(**(undefined4 **)(_UNK_01dc444c + 0x1dc4238),uVar14,uVar2,0);
      uVar11 = *(uint *)(iVar6 + 0xc);
      if (uVar11 < 5) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      piVar7 = piStack_40;
      *(undefined4 *)(iVar6 + 0x20) = uVar14;
      uVar14 = **(undefined4 **)(_UNK_01dc4450 + 0x1dc4268);
      if (uVar11 < 6) {
        func_0x01384bf4();
      }
      iVar13 = *piVar16;
      iVar5 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar6 + 0x24) = uVar14;
      if ((int)-(iVar5 + (uint)(iVar13 != 0)) < 0 ==
          (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar13 != 0)))) {
        uVar14 = **(undefined4 **)(_UNK_01dc4454 + 0x1dc42a8);
      }
      else {
        uVar14 = func_0x01486918(piVar16,0);
      }
      uVar11 = *(uint *)(iVar6 + 0xc);
      if (uVar11 < 7) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x28) = uVar14;
      puVar15 = *(undefined4 **)(_UNK_01dc4458 + 0x1dc42d4);
      uVar14 = *puVar15;
      if (uVar11 < 8) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x2c) = uVar14;
      if (uVar11 < 9) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x30) = uVar3;
      uVar14 = **(undefined4 **)(_UNK_01dc445c + 0x1dc4308);
      if (uVar11 < 10) {
        func_0x01384bf4();
      }
      iVar13 = *piVar7;
      iVar5 = piVar7[1];
      *(undefined4 *)(iVar6 + 0x34) = uVar14;
      if ((int)-(iVar5 + (uint)(iVar13 != 0)) < 0 ==
          (SBORROW4(0,iVar5) != SBORROW4(-iVar5,(uint)(iVar13 != 0)))) {
        uVar14 = **(undefined4 **)(_UNK_01dc4460 + 0x1dc4344);
      }
      else {
        uVar14 = func_0x01486918(piVar7,0);
      }
      uVar11 = *(uint *)(iVar6 + 0xc);
      if (uVar11 < 0xb) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x38) = uVar14;
      uVar14 = *puVar15;
      if (uVar11 < 0xc) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x3c) = uVar14;
      if (uVar11 < 0xd) {
        func_0x01384bf4();
        uVar11 = *(uint *)(iVar6 + 0xc);
      }
      *(undefined4 *)(iVar6 + 0x40) = uVar9;
      uVar14 = **(undefined4 **)(_UNK_01dc4464 + 0x1dc4398);
      if (uVar11 < 0xe) {
        func_0x01384bf4();
      }
      *(undefined4 *)(iVar6 + 0x44) = uVar14;
      uVar14 = func_0x0245088c(iVar6,0);
      if (*(int *)(**(int **)(_UNK_01dc4468 + 0x1dc43c0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02450924(uVar14,0);
      return;
    }
    iVar6 = func_0x0229f13c(0x9d7a,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar6 = func_0x0229f13c(0x9d7d,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = piStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar13 = *(int *)(iVar6 + 8);
  uVar14 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 2;
  if (iVar6 == 0) {
    uVar9 = 1;
  }
  func_0x0245495c(iVar13,uVar14,&uStack_30,uVar9,0,0);
  return;
}



// ===== FAT.MergeEnergyMan$$Energy_ClearLifecycleState RVA 0x1db4708 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4708(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  pcVar3 = (char *)(_UNK_01dc4838 + 0x1dc4720);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc483c + 0x1dc4734));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4840 + 0x1dc4740));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4844 + 0x1dc474c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d7e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d7e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20._0_4_ = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20._0_4_ = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  uStack_20 = FUN_01c34eb8(0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x30) = uStack_20;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01dc4848 + 0x1dc47d4),&uStack_20);
  uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_01dc484c + 0x1dc47f8),uVar5,0);
  if (*(int *)(**(int **)(_UNK_01dc4850 + 0x1dc480c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02450924(uVar5,0);
  FUN_01dc3de0(param_1);
  return;
}



// ===== FAT.MergeEnergyMan$$Energy_SetOfflineAgoSeconds RVA 0x1db4854 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4854(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  uint uStack_24;
  
  pcVar5 = (char *)(_UNK_01dc49e4 + 0x1dc4870);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc49e8 + 0x1dc4884));
    func_0x01384978(*(undefined4 *)(_UNK_01dc49ec + 0x1dc4890));
    func_0x01384978(*(undefined4 *)(_UNK_01dc49f0 + 0x1dc489c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc49f4 + 0x1dc48a8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc49f8 + 0x1dc48b4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d7f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  uVar7 = FUN_01c34eb8(0);
  if (*(int *)(**(int **)(_UNK_01dc49fc + 0x1dc4924) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_24 = func_0x0148ab08(0,param_2,0);
  puVar2 = *(undefined4 **)(_UNK_01dc4a00 + 0x1dc4958);
  *(uint *)(param_1 + 0x18) = (uint)uVar7 - uStack_24;
  *(uint *)(param_1 + 0x1c) =
       (int)((ulonglong)uVar7 >> 0x20) -
       (((int)uStack_24 >> 0x1f) + (uint)((uint)uVar7 < uStack_24));
  uVar6 = func_0x01384abc(*puVar2,&uStack_24);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01dc4a04 + 0x1dc4984),&uStack_30);
  uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_01dc4a08 + 0x1dc49a4),uVar6,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01dc4a0c + 0x1dc49b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02450924(uVar6,0);
  FUN_01dc3de0(param_1);
  return;
}



// ===== FAT.MergeEnergyMan$$Energy_SetLastActiveAgoSeconds RVA 0x1db4a10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4a10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  uint uStack_24;
  
  pcVar5 = (char *)(_UNK_01dc4ba0 + 0x1dc4a2c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc4ba4 + 0x1dc4a40));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4ba8 + 0x1dc4a4c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4bac + 0x1dc4a58));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4bb0 + 0x1dc4a64));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4bb4 + 0x1dc4a70));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9d80,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9d80,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  uVar7 = FUN_01c34eb8(0);
  if (*(int *)(**(int **)(_UNK_01dc4bb8 + 0x1dc4ae0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_24 = func_0x0148ab08(0,param_2,0);
  puVar2 = *(undefined4 **)(_UNK_01dc4bbc + 0x1dc4b14);
  *(uint *)(param_1 + 0x30) = (uint)uVar7 - uStack_24;
  *(uint *)(param_1 + 0x34) =
       (int)((ulonglong)uVar7 >> 0x20) -
       (((int)uStack_24 >> 0x1f) + (uint)((uint)uVar7 < uStack_24));
  uVar6 = func_0x01384abc(*puVar2,&uStack_24);
  uStack_30 = *(undefined4 *)(param_1 + 0x30);
  uStack_2c = *(undefined4 *)(param_1 + 0x34);
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01dc4bc0 + 0x1dc4b40),&uStack_30);
  uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_01dc4bc4 + 0x1dc4b60),uVar6,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01dc4bc8 + 0x1dc4b74) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02450924(uVar6,0);
  FUN_01dc3de0(param_1);
  return;
}



// ===== FAT.MergeEnergyMan$$SwitchDebugPauseTick RVA 0x1db4bcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4bcc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
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
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_01dc4cd0 + 0x1dc4be4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc4cd4 + 0x1dc4bf8));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4cd8 + 0x1dc4c04));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4cdc + 0x1dc4c10));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9d81,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d81,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x38);
  puVar3 = *(undefined4 **)(_UNK_01dc4ce0 + 0x1dc4c74);
  *(byte *)(param_1 + 0x38) = bVar1 ^ 1;
  uStack_14 = CONCAT13(bVar1,(undefined3)uStack_14) ^ 0x1000000;
  uVar7 = func_0x01384abc(*puVar3,(int)&uStack_14 + 3);
  uVar7 = func_0x0244f6a0(**(undefined4 **)(_UNK_01dc4ce4 + 0x1dc4c98),uVar7,0);
  if (*(int *)(**(int **)(_UNK_01dc4ce8 + 0x1dc4cac) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x02450924(uVar7,0);
  return;
}



// ===== FAT.MergeEnergyMan$$.ctor RVA 0x1db4cec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4cec(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01dc4dc8 + 0x1dc4d00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc4dcc + 0x1dc4d14));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4dd0 + 0x1dc4d20));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4dd4 + 0x1dc4d2c));
    func_0x01384978(*(undefined4 *)(_UNK_01dc4dd8 + 0x1dc4d38));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dc4ddc + 0x1dc4d4c));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_01dc4de0 + 0x1dc4d60));
  puVar2 = *(undefined4 **)(_UNK_01dc4de4 + 0x1dc4d74);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  iVar3 = func_0x01384be4(*puVar2);
  func_0x028d1b00(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0245190c(iVar3,0,**(undefined4 **)(_UNK_01dc4de8 + 0x1dc4da4));
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MergeEnergyMan$$<FAT.IGameModule.Startup>g__Tick|39_0 RVA 0x1db4dec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc4dec(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
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
  
  pcVar6 = (char *)(_UNK_01dc2bf0 + 0x1dc29d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dc2bf4 + 0x1dc29ec));
    func_0x01384978(*(undefined4 *)(_UNK_01dc2bf8 + 0x1dc29f8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9d6f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9d6f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = 1;
SUB_021773c4:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,iVar3,0);
    iVar3 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar3,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar2 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    if (*(int *)(param_1 + 8) <= iVar2) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) < 1) {
      return;
    }
    piVar8 = (int *)(param_1 + 0x30);
    uVar9 = FUN_01c34eb8(0);
    iVar3 = *piVar8;
    iVar2 = *(int *)(param_1 + 0x34);
    if ((int)-(iVar2 + (uint)(iVar3 != 0)) < 0 ==
        (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(iVar3 != 0)))) {
      *(undefined8 *)piVar8 = uVar9;
      iVar3 = (int)uVar9;
    }
    if ((int)(uint)(*(int *)(param_1 + 0x18) == 0) <= *(int *)(param_1 + 0x1c)) {
      FUN_01dc2238(param_1);
      *(undefined8 *)piVar8 = uVar9;
      return;
    }
    *(undefined8 *)piVar8 = uVar9;
    iVar2 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
    iVar3 = (int)uVar9 - iVar3;
    if (1 < iVar3) {
      if (*(int *)(param_1 + 8) <= iVar2) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        return;
      }
      pcVar6 = (char *)(_UNK_01dc2920 + 0x1dc27ec);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dc2924 + 0x1dc2800));
        *pcVar6 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x92c8,0);
      if (iVar2 == 0) {
        iVar2 = iVar3;
        if (0 < iVar3) {
          iVar2 = *(int *)(param_1 + 0x24);
        }
        if (0 < iVar2) {
          iVar2 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
          if (iVar2 < *(int *)(param_1 + 8)) {
            iVar3 = *(int *)(param_1 + 0x14) + iVar3;
            *(int *)(param_1 + 0x14) = iVar3;
            iVar2 = func_0x01457ae8(iVar3,*(undefined4 *)(param_1 + 0x24));
            if (0 < iVar2) {
              piVar8 = *(int **)(_UNK_01dc2928 + 0x1dc28b4);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              FUN_01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x74),iVar2,iVar2);
            }
            iVar2 = func_0x028d1a38(*(undefined4 *)(param_1 + 0x10),0);
            if (iVar2 < *(int *)(param_1 + 8)) {
              func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
              *(undefined4 *)(param_1 + 0x14) = extraout_r1;
            }
            else {
              *(undefined4 *)(param_1 + 0x14) = 0;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = 0;
          }
        }
        return;
      }
      iVar2 = func_0x0229f13c(0x92c8,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021773c4;
    }
    if (*(int *)(param_1 + 8) <= iVar2) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x14) + 1;
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar3 <= iVar2) {
    piVar8 = *(int **)(_UNK_01dc2bfc + 0x1dc2b04);
    iVar5 = *piVar8;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4(iVar5);
      iVar2 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(param_1 + 0x24);
      iVar5 = *piVar8;
    }
    uVar7 = func_0x01457ae8(iVar2,iVar3);
    iVar2 = FUN_01dc2c04(param_1,*(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x70),uVar7,1);
    if (iVar2 != 0) {
      func_0x01458344(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x14) = extraout_r1_00;
      iVar2 = FUN_01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = **(undefined4 **)(_UNK_01dc2c00 + 0x1dc2b90);
      pcVar6 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar7,0);
        func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x47,0);
      if (iVar3 == 0) {
        iVar3 = func_0x01489db8(uVar7,0);
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar2 + 0x18);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0244f844(iVar3,uVar7,&stack0xffffffec,
                                  **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
          if (iVar3 == 0) {
            iVar3 = FUN_018872a8(uVar7,0);
            if (iVar3 == 0) {
              return;
            }
            uVar7 = *(undefined4 *)(iVar3 + 0x18);
            if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar5 = func_0x025550ec(uVar7,0);
            cVar1 = *(char *)(iVar3 + 0x1c);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar7 = *(undefined4 *)(iVar5 + 8);
            uVar4 = *(undefined4 *)(iVar5 + 0xc);
            if (cVar1 != '\0') {
              FUN_01bfe144(iVar2,uVar7,uVar4);
              return;
            }
          }
          else {
            uVar4 = 0;
            uVar7 = *(undefined4 *)(iVar2 + 8);
          }
          FUN_01bfe078(iVar2,uVar7,uVar4);
        }
      }
      else {
        iVar3 = func_0x0229f13c(0x47,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar3,iVar2,uVar7,0);
      }
      return;
    }
  }
  return;
}


