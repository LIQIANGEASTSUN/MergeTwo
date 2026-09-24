/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardViewManager$$get_moveRoot RVA 0x1dc9b34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd9b34(int param_1)

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
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01dd9c08 + 0x1dd9b48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9c0c + 0x1dd9b5c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b90,0);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x8c);
    if (*(int *)(**(int **)(_UNK_01dd9c10 + 0x1dd9bb4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar5,0,0);
    if (iVar1 != 0) {
      return *(undefined4 *)(param_1 + 0x8c);
    }
    param_1 = *(int *)(param_1 + 0x74);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5b91,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x34);
    }
    iVar1 = func_0x0229f13c(0x5b91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5b90,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar3 = (char *)(_UNK_021bb474 + 0x21bb394);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
  return uVar5;
}



// ===== FAT.BoardViewManager$$get_boardView RVA 0x1dcbed8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddbed8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1669,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1669,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d13f0 + 0x21d1310);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d13f4 + 0x21d1324),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d13f8 + 0x21d13e0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.BoardViewManager$$get_checker RVA 0x1dcc2c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddc2c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5b89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b89,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02233794 + 0x22336b4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02233798 + 0x22336c8),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223379c + 0x2233784));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.BoardViewManager$$get_inventoryEntryScreenPos RVA 0x1dcc314 =====

void FUN_01ddc314(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.BoardViewManager$$set_inventoryEntryScreenPos RVA 0x1dcc328 =====

void FUN_01ddc328(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



// ===== FAT.BoardViewManager$$get_ActiveBonusCache RVA 0x1dcc334 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddc334(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8234,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8234,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02216790 + 0x22166b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.BoardViewManager$$get_ActiveChestCache RVA 0x1dcc388 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddc388(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x949b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x949b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02216790 + 0x22166b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.BoardViewManager$$get_ActiveAutoSourceCache RVA 0x1dcc3dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddc3dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8236,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8236,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02216790 + 0x22166b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.BoardViewManager$$get_ActiveTapSourceCache RVA 0x1dcc430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddc430(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x949e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x949e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02216790 + 0x22166b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02216794 + 0x22166c4),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02216798 + 0x2216780));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.BoardViewManager$$get_IsLevelDirty RVA 0x1dcc484 =====

uint FUN_01ddc484(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x160a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160a,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)*(byte *)(param_1 + 0x5a);
}



// ===== FAT.BoardViewManager$$set_IsLevelDirty RVA 0x1dcc4d8 =====

void FUN_01ddc4d8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9e4a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e4a,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(char *)(param_1 + 0x5a) = (char)param_2;
  return;
}



// ===== FAT.BoardViewManager$$get_mCurrentBoardInfoItem RVA 0x1dcc534 =====

undefined4 FUN_01ddc534(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.BoardViewManager$$set_mCurrentBoardInfoItem RVA 0x1dcc53c =====

void FUN_01ddc53c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$get_world RVA 0x1dcc544 =====

undefined4 FUN_01ddc544(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.BoardViewManager$$set_world RVA 0x1dcc54c =====

void FUN_01ddc54c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$get_board RVA 0x1dcc554 =====

undefined4 FUN_01ddc554(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.BoardViewManager$$set_board RVA 0x1dcc55c =====

void FUN_01ddc55c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$get_IsReady RVA 0x1dcc564 =====

uint FUN_01ddc564(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x938c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x938c,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(*(int *)(param_1 + 0x78) != 0);
}



// ===== FAT.BoardViewManager$$get_IsFiltering RVA 0x1dcc5c0 =====

uint FUN_01ddc5c0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x167c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x167c,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(*(int *)(param_1 + 0x80) != 0);
}



// ===== FAT.BoardViewManager$$get_usable_check_filter RVA 0x1dcc61c =====

undefined4 FUN_01ddc61c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.BoardViewManager$$set_usable_check_filter RVA 0x1dcc624 =====

void FUN_01ddc624(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$get_ignore_filter RVA 0x1dcc62c =====

undefined4 FUN_01ddc62c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x84);
}



// ===== FAT.BoardViewManager$$set_ignore_filter RVA 0x1dcc634 =====

void FUN_01ddc634(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$OnBoardEnter RVA 0x1dcc63c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddc63c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01ddd3bc + 0x1ddc65c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3c0 + 0x1ddc674));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3c4 + 0x1ddc680));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3c8 + 0x1ddc68c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3cc + 0x1ddc698));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3d0 + 0x1ddc6a4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3d4 + 0x1ddc6b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3d8 + 0x1ddc6bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3dc + 0x1ddc6c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3e0 + 0x1ddc6d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3e4 + 0x1ddc6e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3e8 + 0x1ddc6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3ec + 0x1ddc6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3f0 + 0x1ddc704));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3f4 + 0x1ddc710));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3f8 + 0x1ddc71c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd3fc + 0x1ddc728));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd400 + 0x1ddc734));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd404 + 0x1ddc740));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd408 + 0x1ddc74c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd40c + 0x1ddc758));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd410 + 0x1ddc764));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd414 + 0x1ddc770));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd418 + 0x1ddc77c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd41c + 0x1ddc788));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd420 + 0x1ddc794));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd424 + 0x1ddc7a0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd428 + 0x1ddc7ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd42c + 0x1ddc7b8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd430 + 0x1ddc7c4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd434 + 0x1ddc7d0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd438 + 0x1ddc7dc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd43c + 0x1ddc7e8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd440 + 0x1ddc7f4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd444 + 0x1ddc800));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd448 + 0x1ddc80c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd44c + 0x1ddc818));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd450 + 0x1ddc824));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd454 + 0x1ddc830));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd458 + 0x1ddc83c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd45c + 0x1ddc848));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd460 + 0x1ddc854));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd464 + 0x1ddc860));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd468 + 0x1ddc86c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd46c + 0x1ddc878));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd470 + 0x1ddc884));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd474 + 0x1ddc890));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd478 + 0x1ddc89c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd47c + 0x1ddc8a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd480 + 0x1ddc8b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd484 + 0x1ddc8c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd488 + 0x1ddc8cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd48c + 0x1ddc8d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd490 + 0x1ddc8e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd494 + 0x1ddc8f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd498 + 0x1ddc8fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd49c + 0x1ddc908));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd4a0 + 0x1ddc914));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5eb1,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
    ;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01dbc9c4(iVar1,param_2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01dbca98(iVar1,param_3,0);
    *(undefined4 *)(param_1 + 0x74) = param_4;
    *(int *)(param_1 + 0x78) = param_2;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(param_2,0);
    *(int *)(param_1 + 0x7c) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da680(&uStack_28,iVar1,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 8) = uStack_28;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da680(&uStack_28,iVar1,0);
    *(undefined4 *)(param_1 + 0xc) = uStack_24;
    func_0x01ddd580(param_1);
    func_0x01ddd680(param_1);
    func_0x01ddd814(param_1);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02141ef4(param_2,0);
    if (iVar1 == 0) {
      func_0x01ddd968(param_1);
    }
    if (*(int *)(**(int **)(_UNK_01ddd4a4 + 0x1ddcaa8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01dd7d28();
    *(undefined1 *)(param_1 + 0x5a) = 1;
    puVar2 = *(undefined4 **)(_UNK_01ddd4a8 + 0x1ddcad4);
    iVar1 = *(int *)(param_1 + 0x78);
    *(undefined2 *)(param_1 + 0x58) = 0x101;
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03cd4e0c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4ac + 0x1ddcaf8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141720(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    puVar2 = *(undefined4 **)(_UNK_01ddd4b0 + 0x1ddcb2c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4b4 + 0x1ddcb48),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da3c0(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4b8 + 0x1ddcb90),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da260(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4bc + 0x1ddcbd8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d88a0(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd4c0 + 0x1ddcc0c));
    func_0x03cd51ec(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4c4 + 0x1ddcc28),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8a00(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4c8 + 0x1ddcc70),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9500(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x78);
    puVar6 = *(undefined4 **)(_UNK_01ddd4cc + 0x1ddcca4);
    uVar3 = func_0x01384be4(*puVar6);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4d0 + 0x1ddccc0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02140da0(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x78);
    uVar3 = func_0x01384be4(*puVar6);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4d4 + 0x1ddcd08),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02140f00(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    puVar6 = *(undefined4 **)(_UNK_01ddd4d8 + 0x1ddcd3c);
    uVar3 = func_0x01384be4(*puVar6);
    func_0x024500b4(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4dc + 0x1ddcd58),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9e60(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd4e0 + 0x1ddcd8c));
    func_0x03cd4e0c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4e4 + 0x1ddcda8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9fa0(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4e8 + 0x1ddcdf0),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9660(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4ec + 0x1ddce38),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d97c0(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4f0 + 0x1ddce80),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9920(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar6);
    func_0x024500b4(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4f4 + 0x1ddcec8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9a80(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x03ccb96c(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4f8 + 0x1ddcf10),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9bc0(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(*puVar6);
    func_0x024500b4(uVar3,param_1,**(undefined4 **)(_UNK_01ddd4fc + 0x1ddcf58),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d9d20(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd500 + 0x1ddcf8c));
    func_0x03db6898(uVar3,param_1,**(undefined4 **)(_UNK_01ddd504 + 0x1ddcfa8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020da100(iVar1,uVar3,0);
    iVar1 = *(int *)(param_1 + 0x7c);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd508 + 0x1ddcfdc));
    func_0x03cd51ec(uVar3,param_1,**(undefined4 **)(_UNK_01ddd50c + 0x1ddcff8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x020d8e20(iVar1,uVar3,0);
    if (*(int *)(**(int **)(_UNK_01ddd510 + 0x1ddd028) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddd514 + 0x1ddd044));
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd518 + 0x1ddd058));
    func_0x03ccca84(uVar3,param_1,**(undefined4 **)(_UNK_01ddd51c + 0x1ddd074),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349ef30(iVar1,uVar3,**(undefined4 **)(_UNK_01ddd520 + 0x1ddd098));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddd524 + 0x1ddd0ac));
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd528 + 0x1ddd0c0));
    func_0x03ccab14(uVar3,param_1,**(undefined4 **)(_UNK_01ddd52c + 0x1ddd0dc),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349dde4(iVar1,uVar3,**(undefined4 **)(_UNK_01ddd530 + 0x1ddd100));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddd534 + 0x1ddd114));
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd538 + 0x1ddd128));
    func_0x03cd51ec(uVar3,param_1,**(undefined4 **)(_UNK_01ddd53c + 0x1ddd144),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a22c8(iVar1,uVar3,**(undefined4 **)(_UNK_01ddd540 + 0x1ddd168));
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddd544 + 0x1ddd17c));
    uVar3 = func_0x01384be4(*puVar6);
    func_0x024500b4(uVar3,param_1,**(undefined4 **)(_UNK_01ddd548 + 0x1ddd1a4),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028be400(iVar1,uVar3,0);
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddd54c + 0x1ddd1d4));
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd550 + 0x1ddd1e8));
    func_0x03cc7f44(uVar3,param_1,**(undefined4 **)(_UNK_01ddd554 + 0x1ddd204),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349c204(iVar1,uVar3,**(undefined4 **)(_UNK_01ddd558 + 0x1ddd228));
    func_0x01dddabc(param_1);
    func_0x01dddcf0(param_1);
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e23960(iVar1,0);
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddd55c + 0x1ddd268));
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01ddd560 + 0x1ddd27c));
    func_0x03ccc738(uVar3,param_1,**(undefined4 **)(_UNK_01ddd564 + 0x1ddd298),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349ec34(iVar1,uVar3,**(undefined4 **)(_UNK_01ddd568 + 0x1ddd2bc));
    uVar3 = **(undefined4 **)(_UNK_01ddd56c + 0x1ddd2d4);
    uStack_28 = 0xffffffff;
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x78),0), iVar1 != 0)) {
      uStack_24 = 0;
      uStack_28 = 0;
      func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_01ddd570 + 0x1ddd300));
      bVar7 = (char)uStack_28 == '\0';
      uStack_28 = uStack_24;
      if (bVar7) {
        uStack_28 = 0xffffffff;
      }
    }
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01ddd574 + 0x1ddd334),&uStack_28);
    uVar3 = func_0x0244f6a0(uVar3,uVar4,0);
    if (*(int *)(**(int **)(_UNK_01ddd578 + 0x1ddd35c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(uVar3,0);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01ddd57c + 0x1ddd384));
    uVar4 = *(undefined4 *)(param_1 + 0x74);
    uVar3 = *(undefined4 *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e08dac(iVar1,uVar3,uVar4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5eb1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_CalcScaleCoe RVA 0x1dcd580 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddd580(int param_1)

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
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01ddd674 + 0x1ddd59c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddd678 + 0x1ddd5b0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5eb7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5eb7,0);
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
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244fc34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02450bec(&uStack_24,iVar1,0);
  if (*(int *)(**(int **)(_UNK_01ddd67c + 0x1ddd64c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd852c(uStack_24);
  return;
}



// ===== FAT.BoardViewManager$$_CalcSize RVA 0x1dcd680 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddd680(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01ddd800 + 0x1ddd698);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddd804 + 0x1ddd6ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd808 + 0x1ddd6b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ebb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ebb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  fVar2 = (float)func_0x01f093d4(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01ddd80c + 0x1ddd738) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd81a0(fVar2);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f09230(iVar1,0);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fe5c(iVar1,fVar2 * fVar7,fVar2 * fVar8,0);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01f09230(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01ddd810 + 0x1ddd7dc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  (*(code *)&UNK_0541c45c)(uVar6,0);
  return;
}



// ===== FAT.BoardViewManager$$_CalcOrigin RVA 0x1dcd814 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddd814(int param_1)

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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01ddd954 + 0x1ddd82c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddd958 + 0x1ddd840));
    func_0x01384978(*(undefined4 *)(_UNK_01ddd95c + 0x1ddd84c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ec2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ec2,0);
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
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f092d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar1,0);
  uVar2 = uStack_20;
  uVar5 = uStack_24;
  if (*(int *)(**(int **)(_UNK_01ddd960 + 0x1ddd8ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_30 = uStack_1c;
  uStack_2c = 0;
  func_0x0244fd4c(&uStack_24,0,uVar5,uVar2);
  if (*(int *)(**(int **)(_UNK_01ddd964 + 0x1ddd928) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd8334(uStack_24,uStack_20);
  return;
}



// ===== FAT.BoardViewManager$$_CalcOriginGuide RVA 0x1dcd968 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddd968(int param_1)

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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01dddaa8 + 0x1ddd980);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dddaac + 0x1ddd994));
    func_0x01384978(*(undefined4 *)(_UNK_01dddab0 + 0x1ddd9a0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ec5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ec5,0);
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
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f092d8(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar1,0);
  uVar2 = uStack_20;
  uVar5 = uStack_24;
  if (*(int *)(**(int **)(_UNK_01dddab4 + 0x1ddda40) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_30 = uStack_1c;
  uStack_2c = 0;
  func_0x0244fd4c(&uStack_24,0,uVar5,uVar2);
  if (*(int *)(**(int **)(_UNK_01dddab8 + 0x1ddda7c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd8430(uStack_24,uStack_20);
  return;
}



// ===== FAT.BoardViewManager$$_BindAllComponent RVA 0x1dcdabc =====

/* WARNING: Possible PIC construction at 0x01dddb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddbcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddbec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddc84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddcc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dddbb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dddc10) */
/* WARNING: Removing unreachable block (ram,0x01dddc6c) */
/* WARNING: Removing unreachable block (ram,0x01dddcc8) */
/* WARNING: Removing unreachable block (ram,0x01dddca8) */
/* WARNING: Removing unreachable block (ram,0x01dddccc) */
/* WARNING: Removing unreachable block (ram,0x01dddc88) */
/* WARNING: Removing unreachable block (ram,0x01dddcac) */
/* WARNING: Removing unreachable block (ram,0x01dddc90) */
/* WARNING: Removing unreachable block (ram,0x01dddc4c) */
/* WARNING: Removing unreachable block (ram,0x01dddc70) */
/* WARNING: Removing unreachable block (ram,0x01dddc2c) */
/* WARNING: Removing unreachable block (ram,0x01dddc50) */
/* WARNING: Removing unreachable block (ram,0x01dddc34) */
/* WARNING: Removing unreachable block (ram,0x01dddbf0) */
/* WARNING: Removing unreachable block (ram,0x01dddc14) */
/* WARNING: Removing unreachable block (ram,0x01dddbd0) */
/* WARNING: Removing unreachable block (ram,0x01dddbf4) */
/* WARNING: Removing unreachable block (ram,0x01dddbd8) */
/* WARNING: Removing unreachable block (ram,0x01dddb94) */
/* WARNING: Removing unreachable block (ram,0x01dddbb4) */
/* WARNING: Removing unreachable block (ram,0x01dddbb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dddabc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01dddce8 + 0x1dddad0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dddcec + 0x1dddae4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f4f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f4f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    iStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&iStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
    uVar7 = func_0x01f08f90(0,0);
  }
  else {
    uVar7 = func_0x01f08f90(iVar1,0);
  }
  pcVar4 = (char *)(_UNK_01ddf260 + 0x1ddf184);
  iStack_28 = param_1;
  iStack_24 = iVar1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddf264 + 0x1ddf198));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f50,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f50,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = iStack_24;
    iStack_30 = iStack_28;
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_48 = 0;
    uStack_38 = 0;
    func_0x0245494c(&uStack_60,0,uVar7,0);
    iStack_48 = uStack_60;
    uStack_44 = uStack_5c;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_48,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_48,param_1,0);
    func_0x01485278(&iStack_48,uVar7,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&iStack_48,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_01ddf268 + 0x1ddf218);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar6 + uVar8 * 4 + 0x10) = uVar7;
    return;
  }
  uVar8 = *(uint *)(iVar1 + 0xc);
  func_0x0328f754(iVar1,uVar8 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar5 = *(int *)(iVar1 + 8);
  *(uint *)(iVar1 + 0xc) = uVar8 + 1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar8) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar5 + uVar8 * 4 + 0x10) = uVar7;
  return;
}



// ===== FAT.BoardViewManager$$_SetupComponent RVA 0x1dcdcf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dddcf0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar6 = (char *)(_UNK_01dddf14 + 0x1dddd08);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dddf18 + 0x1dddd1c));
    func_0x01384978(*(undefined4 *)(_UNK_01dddf1c + 0x1dddd28));
    func_0x01384978(*(undefined4 *)(_UNK_01dddf20 + 0x1dddd34));
    func_0x01384978(*(undefined4 *)(_UNK_01dddf24 + 0x1dddd40));
    func_0x01384978(*(undefined4 *)(_UNK_01dddf28 + 0x1dddd4c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x5f53,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_38,iVar2,**(undefined4 **)(_UNK_01dddf2c + 0x1ddddc8));
    puVar9 = *(undefined4 **)(_UNK_01dddf30 + 0x1dddddc);
    piVar10 = *(int **)(_UNK_01dddf34 + 0x1dddde4);
    while (iVar2 = func_0x0145b12c(&uStack_38,*puVar9), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c != (int *)0x0) {
        iVar2 = *piStack_2c;
        uVar8 = *(undefined4 *)(param_1 + 8);
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        uVar7 = *(undefined4 *)(param_1 + 0xc);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 200);
              goto LAB_01ddde58;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piStack_2c,*piVar10,1);
LAB_01ddde58:
        (*(code *)*puVar3)(piVar1,uVar8,uVar7,puVar3[1]);
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01dddf38 + 0x1ddde80));
  }
  else {
    iVar2 = func_0x0229f13c(0x5f53,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$OnBoardLeave RVA 0x1dcdf44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dddf44(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01dded58 + 0x1dddf5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dded5c + 0x1dddf70));
    func_0x01384978(*(undefined4 *)(_UNK_01dded60 + 0x1dddf7c));
    func_0x01384978(*(undefined4 *)(_UNK_01dded64 + 0x1dddf88));
    func_0x01384978(*(undefined4 *)(_UNK_01dded68 + 0x1dddf94));
    func_0x01384978(*(undefined4 *)(_UNK_01dded6c + 0x1dddfa0));
    func_0x01384978(*(undefined4 *)(_UNK_01dded70 + 0x1dddfac));
    func_0x01384978(*(undefined4 *)(_UNK_01dded74 + 0x1dddfb8));
    func_0x01384978(*(undefined4 *)(_UNK_01dded78 + 0x1dddfc4));
    func_0x01384978(*(undefined4 *)(_UNK_01dded7c + 0x1dddfd0));
    func_0x01384978(*(undefined4 *)(_UNK_01dded80 + 0x1dddfdc));
    func_0x01384978(*(undefined4 *)(_UNK_01dded84 + 0x1dddfe8));
    func_0x01384978(*(undefined4 *)(_UNK_01dded88 + 0x1dddff4));
    func_0x01384978(*(undefined4 *)(_UNK_01dded8c + 0x1dde000));
    func_0x01384978(*(undefined4 *)(_UNK_01dded90 + 0x1dde00c));
    func_0x01384978(*(undefined4 *)(_UNK_01dded94 + 0x1dde018));
    func_0x01384978(*(undefined4 *)(_UNK_01dded98 + 0x1dde024));
    func_0x01384978(*(undefined4 *)(_UNK_01dded9c + 0x1dde030));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeda0 + 0x1dde03c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeda4 + 0x1dde048));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeda8 + 0x1dde054));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedac + 0x1dde060));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedb0 + 0x1dde06c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedb4 + 0x1dde078));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedb8 + 0x1dde084));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedbc + 0x1dde090));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedc0 + 0x1dde09c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedc4 + 0x1dde0a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedc8 + 0x1dde0b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedcc + 0x1dde0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedd0 + 0x1dde0cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedd4 + 0x1dde0d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedd8 + 0x1dde0e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeddc + 0x1dde0f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddede0 + 0x1dde0fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddede4 + 0x1dde108));
    func_0x01384978(*(undefined4 *)(_UNK_01ddede8 + 0x1dde114));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedec + 0x1dde120));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedf0 + 0x1dde12c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedf4 + 0x1dde138));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedf8 + 0x1dde144));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedfc + 0x1dde150));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee00 + 0x1dde15c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee04 + 0x1dde168));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee08 + 0x1dde174));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee0c + 0x1dde180));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee10 + 0x1dde18c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee14 + 0x1dde198));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee18 + 0x1dde1a4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee1c + 0x1dde1b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee20 + 0x1dde1bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee24 + 0x1dde1c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee28 + 0x1dde1d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee2c + 0x1dde1e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee30 + 0x1dde1ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee34 + 0x1dde1f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee38 + 0x1dde204));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee3c + 0x1dde210));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee40 + 0x1dde21c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee44 + 0x1dde228));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5fd2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5fd2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  uVar6 = **(undefined4 **)(_UNK_01ddee48 + 0x1dde284);
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x78),0), iVar1 != 0)) {
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 8),
                    **(undefined4 **)(_UNK_01ddee4c + 0x1dde2b0));
    uStack_2c = uStack_24;
    if ((char)uStack_28 != '\0') goto LAB_01dde2dc;
  }
  uStack_2c = 0xffffffff;
LAB_01dde2dc:
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01ddee50 + 0x1dde2e8),&uStack_2c);
  uVar6 = func_0x0244f6a0(uVar6,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01ddee54 + 0x1dde314) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0199d1cc(uVar6,0);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01ddee58 + 0x1dde33c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e09500(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01dbc9c4(iVar1,0,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01dbca98(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x78);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddee5c + 0x1dde3dc));
  func_0x03cd4e0c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee60 + 0x1dde3f8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021417d0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  puVar8 = *(undefined4 **)(_UNK_01ddee64 + 0x1dde42c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee68 + 0x1dde448),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da470(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee6c + 0x1dde490),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da310(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee70 + 0x1dde4d8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8950(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddee74 + 0x1dde50c));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01ddee78 + 0x1dde528),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8ab0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee7c + 0x1dde570),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d95b0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x78);
  puVar7 = *(undefined4 **)(_UNK_01ddee80 + 0x1dde5a4);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee84 + 0x1dde5c0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02140e50(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x78);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee88 + 0x1dde608),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02140fb0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  puVar7 = *(undefined4 **)(_UNK_01ddee8c + 0x1dde63c);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddee90 + 0x1dde658),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9f00(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddee94 + 0x1dde68c));
  func_0x03cd4e0c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee98 + 0x1dde6a8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da050(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee9c + 0x1dde6f0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9710(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddeea0 + 0x1dde738),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9870(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddeea4 + 0x1dde780),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d99d0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddeea8 + 0x1dde7c8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9b20(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddeeac + 0x1dde810),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9c70(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddeeb0 + 0x1dde858),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9dc0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeeb4 + 0x1dde88c));
  func_0x03db6898(uVar6,param_1,**(undefined4 **)(_UNK_01ddeeb8 + 0x1dde8a8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020da1b0(iVar1,uVar6,0);
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeebc + 0x1dde8dc));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01ddeec0 + 0x1dde8f8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8ed0(iVar1,uVar6,0);
  if (*(int *)(**(int **)(_UNK_01ddeec4 + 0x1dde928) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeec8 + 0x1dde944));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeecc + 0x1dde958));
  func_0x03ccca84(uVar6,param_1,**(undefined4 **)(_UNK_01ddeed0 + 0x1dde974),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349f188(iVar1,uVar6,**(undefined4 **)(_UNK_01ddeed4 + 0x1dde998));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeed8 + 0x1dde9ac));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeedc + 0x1dde9c0));
  func_0x03ccab14(uVar6,param_1,**(undefined4 **)(_UNK_01ddeee0 + 0x1dde9dc),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e03c(iVar1,uVar6,**(undefined4 **)(_UNK_01ddeee4 + 0x1ddea00));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeee8 + 0x1ddea14));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeeec + 0x1ddea28));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01ddeef0 + 0x1ddea44),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a2520(iVar1,uVar6,**(undefined4 **)(_UNK_01ddeef4 + 0x1ddea68));
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeef8 + 0x1ddea7c));
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddeefc + 0x1ddeaa4),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028beac8(iVar1,uVar6,0);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddef00 + 0x1ddead4));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddef04 + 0x1ddeae8));
  func_0x03cc7f44(uVar6,param_1,**(undefined4 **)(_UNK_01ddef08 + 0x1ddeb04),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349c45c(iVar1,uVar6,**(undefined4 **)(_UNK_01ddef0c + 0x1ddeb28));
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021447e0(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e23ab8(iVar1,0);
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ddef10 + 0x1ddeb98));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddef14 + 0x1ddebac));
  func_0x03ccc738(uVar6,param_1,**(undefined4 **)(_UNK_01ddef18 + 0x1ddebc8),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349edc0(iVar1,uVar6,**(undefined4 **)(_UNK_01ddef1c + 0x1ddebec));
  func_0x01ddef28(param_1);
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01ddef20 + 0x1ddec1c);
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,*puVar8);
  piVar2 = *(int **)(_UNK_01ddef24 + 0x1dded34);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_01dd7d28();
  return;
}



// ===== FAT.BoardViewManager$$_CleanupComponent RVA 0x1dcef28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddef28(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  
  pcVar6 = (char *)(_UNK_01ddf13c + 0x1ddef40);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddf140 + 0x1ddef54));
    func_0x01384978(*(undefined4 *)(_UNK_01ddf144 + 0x1ddef60));
    func_0x01384978(*(undefined4 *)(_UNK_01ddf148 + 0x1ddef6c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddf14c + 0x1ddef78));
    func_0x01384978(*(undefined4 *)(_UNK_01ddf150 + 0x1ddef84));
    *pcVar6 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_1c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x5fe8,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_01ddf154 + 0x1ddf000));
    puVar7 = *(undefined4 **)(_UNK_01ddf158 + 0x1ddf014);
    piVar8 = *(int **)(_UNK_01ddf15c + 0x1ddf01c);
    while (iVar2 = func_0x0145b12c(&uStack_28,*puVar7), piVar1 = piStack_1c, iVar2 != 0) {
      if (piStack_1c != (int *)0x0) {
        iVar2 = *piStack_1c;
        uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar8) {
              puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
              goto LAB_01ddf088;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piStack_1c,*piVar8,2);
LAB_01ddf088:
        (*(code *)*puVar3)(piVar1,puVar3[1]);
      }
    }
    func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01ddf160 + 0x1ddf0a8));
  }
  else {
    iVar2 = func_0x0229f13c(0x5fe8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_RegisterComponent RVA 0x1dcf16c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddf16c(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
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
  
  pcVar4 = (char *)(_UNK_01ddf260 + 0x1ddf184);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddf264 + 0x1ddf198));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f50,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f50,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_01ddf268 + 0x1ddf218);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    *(undefined4 *)(iVar6 + uVar8 * 4 + 0x10) = param_2;
    return;
  }
  uVar8 = *(uint *)(iVar1 + 0xc);
  func_0x0328f754(iVar1,uVar8 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar5 = *(int *)(iVar1 + 8);
  *(uint *)(iVar1 + 0xc) = uVar8 + 1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar8) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar5 + uVar8 * 4 + 0x10) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$SetMoveRootOverride RVA 0x1dcf26c =====

void FUN_01ddf26c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x7769,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7769,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$RefreshInventoryEntryScreenPos RVA 0x1dcf2c8 =====

void FUN_01ddf2c8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x76ea,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x14) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x76ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$OnInventoryClose RVA 0x1dcf33c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddf33c(int param_1)

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
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01ddf480 + 0x1ddf350);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddf484 + 0x1ddf364));
    func_0x01384978(*(undefined4 *)(_UNK_01ddf488 + 0x1ddf370));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15f3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15f3,0);
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
  uVar5 = *(undefined4 *)(param_1 + 0x74);
  if (*(int *)(**(int **)(_UNK_01ddf48c + 0x1ddf3c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar5,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f090e0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01e02b18(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01ddf490 + 0x1ddf46c),0);
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



// ===== FAT.BoardViewManager$$SetPause RVA 0x1dcf494 =====

void FUN_01ddf494(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5f20,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f20,0);
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
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(char *)(param_1 + 0x5b) = (char)param_2;
  return;
}



// ===== FAT.BoardViewManager$$IsDragItem RVA 0x1dcf4f0 =====

uint FUN_01ddf4f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7ca7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ca7,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  return (uint)(*(int *)(param_1 + 0x20) != 0);
}



// ===== FAT.BoardViewManager$$IsUserDragging RVA 0x1dcf54c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ddf54c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01ddf64c + 0x1ddf560);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddf650 + 0x1ddf574));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x970a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x970a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021742f8:
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = FUN_01ddc564(param_1);
  if (iVar1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    if (*(int *)(**(int **)(_UNK_01ddf654 + 0x1ddf5dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = func_0x01f0908c(iVar1,0);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x5e83,0);
      if (iVar1 == 0) {
        return (uint)*(byte *)(param_1 + 0x28);
      }
      iVar1 = func_0x0229f13c(0x5e83,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      goto SUB_021742f8;
    }
  }
  return 0;
}



// ===== FAT.BoardViewManager$$GetSecondsSinceLastUserActive RVA 0x1dcf658 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01ddf658(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01ddf764 + 0x1ddf670);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddf768 + 0x1ddf684));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9709,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9709,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    fVar2 = (float)func_0x024549ac(&uStack_30,0,0);
    return fVar2;
  }
  iVar1 = FUN_01ddc564(param_1);
  fVar2 = -1.0;
  if (iVar1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    if (*(int *)(**(int **)(_UNK_01ddf76c + 0x1ddf6f4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar6,0,0);
    if ((iVar1 == 0) && (0.0 < *(float *)(param_1 + 100))) {
      fVar2 = (float)func_0x02450ef4(0);
      fVar2 = fVar2 - *(float *)(param_1 + 100);
      if (fVar2 < 0.0) {
        fVar2 = _UNK_01ddf760;
      }
    }
  }
  return fVar2;
}



// ===== FAT.BoardViewManager$$IsItemInDrag RVA 0x1dcf770 =====

uint FUN_01ddf770(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x9e4b,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      uVar4 = (uint)(param_2 == *(int *)(param_1 + 0x20));
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x9e4b,0);
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
  func_0x01485278(&uStack_38,param_2,0);
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
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.BoardViewManager$$IsItemCanPutInInventory RVA 0x1dcf7e4 =====

/* WARNING: Possible PIC construction at 0x02169850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02169854) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddf7e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  int aiStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x9e4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021742f8:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar3 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    *(undefined4 *)((int)register0x00000054 + -0x20) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    if (iVar3 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
    uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
    return uVar6;
  }
  param_1 = *(int *)(param_1 + 0x20);
  if (param_1 == 0) {
    return 0;
  }
  pcVar5 = (char *)(_UNK_02169b48 + 0x21697f0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02169b4c + 0x2169804),0);
    *pcVar5 = '\x01';
  }
  aiStack_1c[0] = 0;
  iVar1 = func_0x0229f06c(0x75ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75ea,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2169854;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
    goto SUB_021742f8;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116f08(0,0);
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116f08(param_1,0);
  }
  iVar2 = func_0x02feb690(param_1,aiStack_1c,0,**(undefined4 **)(_UNK_02169b50 + 0x21698a4));
  iVar3 = aiStack_1c[0];
  uVar6 = 1;
  if (iVar2 != 0) {
    if (aiStack_1c[0] == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0212f4e4(iVar3,0);
    uVar6 = 0;
    if (iVar3 != 9) {
      uVar6 = 1;
    }
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0210e5f4(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141acc(iVar1,0);
  if (iVar3 != iVar1) {
    if (param_1 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x0210e250(0,6,0,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = func_0x0210e250(0,0x11,0,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
          iVar1 = func_0x0210e250(0,0x12,0,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
            iVar1 = func_0x0210e250(0,0x19,0,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
              goto LAB_02169b30;
            }
          }
        }
      }
    }
    else {
      iVar1 = func_0x0210e250(param_1,6,0,0);
      if ((((iVar1 == 0) && (iVar1 = func_0x0210e250(param_1,0x11,0,0), iVar1 == 0)) &&
          (iVar1 = func_0x0210e250(param_1,0x12,0,0), iVar1 == 0)) &&
         (iVar1 = func_0x0210e250(param_1,0x19,0,0), iVar1 == 0)) {
LAB_02169b30:
        iVar1 = func_0x02116ae0(param_1,0);
        if (iVar1 == 0) {
          uVar6 = 0;
        }
        goto LAB_02169a18;
      }
    }
  }
  uVar6 = 0;
LAB_02169a18:
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01cc0100(iVar1,0x98,0);
  uVar4 = uVar6;
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c946b8(iVar1,uVar4,0);
    uVar4 = 0;
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xc);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01ca4f6c(iVar1,uVar4,0);
      uVar4 = 0;
      if (iVar1 == 0) {
        uVar4 = uVar6;
      }
    }
  }
  return uVar4;
}



// ===== FAT.BoardViewManager$$OnUserActive RVA 0x1dcf850 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddf850(int param_1)

{
  int iVar1;
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
  
  iVar1 = func_0x0229f06c(0x5d29,0);
  if (iVar1 == 0) {
    uVar7 = func_0x02450ef4(0);
    iVar1 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 100) = uVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e23e44 + 0x1e23cf0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e23e48 + 0x1e23d04),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e23e4c + 0x1e23d10));
      func_0x01384978(*(undefined4 *)(_UNK_01e23e50 + 0x1e23d1c));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5b8d,0);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x2c) != 0) {
        func_0x02ce9e90(*(int *)(iVar1 + 0x2c),0,0);
      }
      *(undefined4 *)(iVar1 + 0x2c) = 0;
      uVar7 = func_0x02450ef4(0);
      puVar3 = *(undefined4 **)(_UNK_01e23e54 + 0x1e23d9c);
      *(undefined4 *)(iVar1 + 0x28) = uVar7;
      iVar2 = func_0x03668dfc(*puVar3);
      iVar6 = *(int *)(iVar1 + 8);
      iVar1 = *(int *)(iVar1 + 0xc);
      if (iVar6 != 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01de380c(iVar2,iVar6,0);
      }
      if (iVar1 != 0) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01de380c(iVar2,iVar1,0);
      }
      if (*(int *)(**(int **)(_UNK_01e23e58 + 0x1e23e04) + 0x74) == 0) {
        func_0x01384ab4();
      }
      param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01e23e5c + 0x1e23e20));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar2 = func_0x0229f13c(0x3f,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x5b8d,0);
      param_1 = iVar1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5d29,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.BoardViewManager$$OnBeginDragAtTile RVA 0x1dcf8c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddf8c8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  iVar1 = func_0x0229f06c(0x9e4d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e81ec(iVar1,param_2,param_3,0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    else {
      pcVar3 = (char *)(_UNK_01ddf9d8 + 0x1ddf97c);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ddf9dc + 0x1ddf990));
        *pcVar3 = '\x01';
      }
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01ddf9e0 + 0x1ddf9ac) + 0x5c);
      func_0x01ddf9e4(param_1,param_2,param_3,*puVar2,puVar2[1],param_4,param_5,iVar1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e4d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02287fc4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_TryGrabItem RVA 0x1dcf9e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddf9e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float param_7,int param_8)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  char *pcVar8;
  int *piVar9;
  float fVar10;
  uint in_fpscr;
  undefined4 uVar11;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01ddff24 + 0x1ddfa04);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddff28 + 0x1ddfa1c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddff2c + 0x1ddfa28));
    func_0x01384978(*(undefined4 *)(_UNK_01ddff30 + 0x1ddfa34));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x9e4e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9e4e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02287e3c(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    return;
  }
  if (param_8 != 0) {
    if ((0 < *(int *)(param_1 + 0x68)) &&
       (iVar2 = func_0x0210e2d4(param_8,0), iVar2 != *(int *)(param_1 + 0x68))) {
      return;
    }
    if ((0 < *(int *)(param_1 + 0x6c)) &&
       (iVar2 = func_0x0210e5f4(param_8,0), iVar2 != *(int *)(param_1 + 0x6c))) {
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x020dbcf8(iVar2,param_2,param_3,0);
  if (iVar2 == 1) {
    return;
  }
  if ((param_8 != 0) && (iVar2 = func_0x02116c00(param_8,0), iVar2 == 0)) {
    return;
  }
  piVar9 = *(int **)(_UNK_01ddff34 + 0x1ddfb68);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar9;
  }
  if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x5d) == '\0') {
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    uVar11 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    FUN_01dd8904(&fStack_30,uVar6,uVar11);
    fVar10 = fStack_2c;
    fVar7 = fStack_30;
    FUN_01dd8904(&fStack_30,uVar6,uVar11);
    pcVar8 = (char *)(_UNK_01ddff48 + 0x1ddfc7c);
    cVar1 = *pcVar8;
    *(float *)(param_1 + 0x94) = fStack_2c - param_7;
    *(float *)(param_1 + 0x90) = fStack_30 - param_6;
    if (cVar1 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddff4c + 0x1ddfc9c));
      *pcVar8 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_01ddff50 + 0x1ddfcb8) + 0x5c);
    uVar6 = puVar4[1];
    *(undefined4 *)(param_1 + 0x98) = *puVar4;
    *(undefined4 *)(param_1 + 0x9c) = uVar6;
  }
  else {
    if (*(char *)(_UNK_01ddff38 + 0x1ddfb98) == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddff3c + 0x1ddfbb0));
      *(undefined1 *)(_UNK_01ddff40 + 0x1ddfbc0) = 1;
    }
    pfVar3 = *(float **)(**(int **)(_UNK_01ddff44 + 0x1ddfbcc) + 0x5c);
    fVar7 = *pfVar3;
    *(float *)(param_1 + 0x94) = pfVar3[1];
    *(float *)(param_1 + 0x90) = fVar7;
    *(undefined4 *)(param_1 + 0x98) = param_4;
    *(undefined4 *)(param_1 + 0x9c) = param_5;
    fVar10 = param_7;
    fVar7 = param_6;
  }
  iVar2 = *(int *)(param_1 + 0x74);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01f090e0(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01e00f50(iVar2,param_8,fVar7,fVar10,0);
  if (iVar2 == 0) {
    if (param_8 == 0) {
      func_0x01384bf0();
      iVar2 = func_0x02116ae0(0,0);
      if (iVar2 == 0) {
        return;
      }
      func_0x01384bf0();
    }
    else {
      iVar2 = func_0x02116ae0(param_8,0);
      if (iVar2 == 0) {
        return;
      }
    }
    iVar2 = func_0x02116a8c(param_8,0);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x74);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01f090e0(iVar2,0);
    if (param_8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0210e5f4(param_8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x01e02548(iVar2,uVar6,0);
    if (*(int *)(**(int **)(_UNK_01ddff58 + 0x1ddfef8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0145b1cc(uVar6,0,0);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x24) = param_8;
    return;
  }
  *(int *)(param_1 + 0x20) = param_8;
  if (param_8 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0210e5f4(param_8,0);
  if (iVar2 != *(int *)(param_1 + 0x1c)) {
    func_0x01ddff5c(param_1,param_2,param_3);
  }
  func_0x01de0174(param_1);
  if (param_8 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02feb690(param_8,&iStack_28,0,**(undefined4 **)(_UNK_01ddff54 + 0x1ddfd88));
  iVar2 = iStack_28;
  if (iVar5 == 0) {
LAB_01ddfdec:
    iVar2 = func_0x01de0320(param_1,param_8);
    if (iVar2 == 0) goto LAB_01ddfe10;
    func_0x01de0410(param_1);
  }
  else {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021331a0(iVar2,0);
    if (iVar2 == 0) goto LAB_01ddfdec;
    func_0x01de0234(param_1,iStack_28);
  }
  func_0x01de0298(param_1);
LAB_01ddfe10:
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01f08f90(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01df9198(iVar2,0);
  func_0x01cf80d4(0);
  return;
}



// ===== FAT.BoardViewManager$$_RefreshInfo RVA 0x1dcff5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddff5c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01de0150 + 0x1ddff7c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de0154 + 0x1ddff90));
    func_0x01384978(*(undefined4 *)(_UNK_01de0158 + 0x1ddff9c));
    func_0x01384978(*(undefined4 *)(_UNK_01de015c + 0x1ddffa8));
    func_0x01384978(*(undefined4 *)(_UNK_01de0160 + 0x1ddffb4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7649,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e81ec(iVar1,param_2,param_3,0);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x78);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021447e0(iVar3,0,0);
      pcVar6 = (char *)(_UNK_01de465c + 0x1de440c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de4660 + 0x1de4420));
        func_0x01384978(*(undefined4 *)(_UNK_01de4664 + 0x1de442c));
        func_0x01384978(*(undefined4 *)(_UNK_01de4668 + 0x1de4438));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x764e,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x764e,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,iVar1,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485278(&uStack_38,iVar1,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
        return;
      }
      func_0x01de4678(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0210e5f4(iVar1,0);
      iVar3 = *(int *)(**(int **)(_UNK_01de466c + 0x1de44bc) + 0x74);
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
      if (iVar3 == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01de4670 + 0x1de44dc));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar3,iVar1,**(undefined4 **)(_UNK_01de4674 + 0x1de4500));
      iVar3 = *(int *)(param_1 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f09038(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      uVar5 = uStack_20;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      uVar2 = uStack_1c;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01e06fd0(iVar3,uVar5,uVar2,0);
      iVar3 = *(int *)(param_1 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f091dc(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01dfe620(iVar3,uStack_20,uStack_1c,0);
      iVar3 = *(int *)(param_1 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f090e0(iVar3,0);
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01e02940(iVar3,uVar5,0);
      func_0x02081ea0(iVar1,0);
      return;
    }
    func_0x01de1a84(param_1);
    if (*(int *)(**(int **)(_UNK_01de0164 + 0x1de0088) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = FUN_01dda0a4(param_2,param_3,0);
    if (0 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f09038(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e06dd4(iVar1,param_2,param_3,0);
      if (*(int *)(**(int **)(_UNK_01de0168 + 0x1de00fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01de016c + 0x1de0118));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0349f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7649,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.BoardViewManager$$_HideSelector RVA 0x1dd0174 =====

/* WARNING: Possible PIC construction at 0x01dfd870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dfd890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dfd874) */
/* WARNING: Removing unreachable block (ram,0x01dfd880) */
/* WARNING: Removing unreachable block (ram,0x01dfd884) */
/* WARNING: Removing unreachable block (ram,0x01dfd894) */
/* WARNING: Removing unreachable block (ram,0x01dfe92c) */
/* WARNING: Removing unreachable block (ram,0x01dfe980) */
/* WARNING: Removing unreachable block (ram,0x01dfe98c) */
/* WARNING: Removing unreachable block (ram,0x01dfe990) */
/* WARNING: Removing unreachable block (ram,0x01dfe9a8) */
/* WARNING: Removing unreachable block (ram,0x01dfe9ac) */
/* WARNING: Removing unreachable block (ram,0x01dfe94c) */
/* WARNING: Removing unreachable block (ram,0x01dfe964) */
/* WARNING: Removing unreachable block (ram,0x01dfe968) */
/* WARNING: Removing unreachable block (ram,0x021744a8) */
/* WARNING: Removing unreachable block (ram,0x02174500) */
/* WARNING: Removing unreachable block (ram,0x0217450c) */
/* WARNING: Removing unreachable block (ram,0x02174548) */
/* WARNING: Removing unreachable block (ram,0x0217454c) */
/* WARNING: Removing unreachable block (ram,0x02174558) */
/* WARNING: Removing unreachable block (ram,0x0217455c) */

void FUN_01de0174(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ee6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09038(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e06cb4(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f091dc(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5ee9,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&SUB_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x5ee9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ee6,0);
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



// ===== FAT.BoardViewManager$$_Setup_Filter_For_Skill RVA 0x1dd0234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0234(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x9e53,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e53,0);
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
    func_0x01485278(&uStack_38,param_2,0);
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
  pcVar4 = (char *)(_UNK_01de3058 + 0x1de2f74);
  uStack_18 = unaff_r4;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de305c + 0x1de2f88));
    func_0x01384978(*(undefined4 *)(_UNK_01de3060 + 0x1de2f94));
    func_0x01384978(*(undefined4 *)(_UNK_01de3064 + 0x1de2fa0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e54,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x26,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0x26,0);
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
  puVar6 = *(undefined4 **)(_UNK_01de3068 + 0x1de2ffc);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x0244f8d0(uVar5,param_1,**(undefined4 **)(_UNK_01de306c + 0x1de3018),0);
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  uVar5 = func_0x01384be4(uVar2);
  func_0x0244f8d0(uVar5,param_1,**(undefined4 **)(_UNK_01de3070 + 0x1de3044),0);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = 0x26;
  return;
}



// ===== FAT.BoardViewManager$$_ApplyFilter RVA 0x1dd0298 =====

/* WARNING: Possible PIC construction at 0x01e01c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e01c28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0298(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  char *pcVar4;
  undefined4 unaff_r6;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x9e5d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f090e0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e01d58 + 0x1e01b90);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e01d5c + 0x1e01ba4),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e01d60 + 0x1e01bb0));
      func_0x01384978(*(undefined4 *)(_UNK_01e01d64 + 0x1e01bbc));
      func_0x01384978(*(undefined4 *)(_UNK_01e01d68 + 0x1e01bc8));
      func_0x01384978(*(undefined4 *)(_UNK_01e01d6c + 0x1e01bd4));
      *pcVar4 = '\x01';
    }
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_20 = 0;
    iVar1 = func_0x0229f06c(0x9e5e,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01e01d70 + 0x1e01c48));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_20,iVar1,**(undefined4 **)(_UNK_01e01d74 + 0x1e01c74));
      puVar5 = *(undefined4 **)(_UNK_01e01d78 + 0x1e01c88);
      while (iVar2 = func_0x01475908(&uStack_20,*puVar5), iVar1 = iStack_14, iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        func_0x0229f988(iVar1,0);
      }
      func_0x02450874(&uStack_20,**(undefined4 **)(_UNK_01e01d7c + 0x1e01cc4));
      return;
    }
    iVar1 = func_0x0229f13c(0x9e5e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e01c28;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e5d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.BoardViewManager$$_IsEdible RVA 0x1dd0320 =====

undefined4 FUN_01de0320(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  iVar1 = func_0x0229f06c(0x9e5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e5f,0);
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
    func_0x01485278(&uStack_38,param_2,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = 0;
    do {
      if (0 < iVar3) {
        iVar1 = 0;
        do {
          iVar3 = *(int *)(param_1 + 0x7c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x020e81ec(iVar3,iVar4,iVar1,0);
          if ((iVar3 != 0) && (iVar3 = func_0x0216630c(param_2,iVar3,0), iVar3 != 0)) {
            return 1;
          }
          iVar3 = *(int *)(param_1 + 0xc);
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar3);
        iVar1 = *(int *)(param_1 + 8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}



// ===== FAT.BoardViewManager$$_Setup_Filter_For_Feed RVA 0x1dd0410 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0410(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x9e63,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e63,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  pcVar4 = (char *)(_UNK_01de3170 + 0x1de308c);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de3174 + 0x1de30a0));
    func_0x01384978(*(undefined4 *)(_UNK_01de3178 + 0x1de30ac));
    func_0x01384978(*(undefined4 *)(_UNK_01de317c + 0x1de30b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e64,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e64,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0x27,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0x27,0);
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
  puVar6 = *(undefined4 **)(_UNK_01de3180 + 0x1de3114);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x0244f8d0(uVar5,param_1,**(undefined4 **)(_UNK_01de3184 + 0x1de3130),0);
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  uVar5 = func_0x01384be4(uVar2);
  func_0x0244f8d0(uVar5,0,**(undefined4 **)(_UNK_01de3188 + 0x1de315c),0);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = 0x27;
  return;
}



// ===== FAT.BoardViewManager$$_CheckDragBehaviour RVA 0x1dd046c =====

void FUN_01de046c(undefined4 *param_1,int param_2,float param_3,float param_4)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = func_0x0229f06c(0x9e67,0);
  if (iVar1 == 0) {
    fVar3 = *(float *)(param_2 + 0x90);
    fVar4 = *(float *)(param_2 + 0x94);
    iVar1 = *(int *)(param_2 + 0x30);
    uVar2 = *(undefined4 *)(param_2 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e27ba8(&uStack_28,iVar1,fVar3 + param_3,fVar4 + param_4,uVar2,0);
    iVar1 = 0;
    if (iStack_24 == *(int *)(param_2 + 0x70)) {
      iVar1 = iStack_24;
    }
    if (*(int *)(param_2 + 0x70) == 0) {
      iVar1 = iStack_24;
    }
    *param_1 = uStack_28;
    param_1[1] = iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e67,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02288684(&uStack_28,iVar1,param_2,param_3,param_4,0);
    *param_1 = uStack_28;
    param_1[1] = iStack_24;
  }
  return;
}



// ===== FAT.BoardViewManager$$OnDrag RVA 0x1dd0558 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0558(int param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar2 = (char *)(_UNK_01de08a4 + 0x1de0578);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de08a8 + 0x1de0590));
    func_0x01384978(*(undefined4 *)(_UNK_01de08ac + 0x1de059c));
    func_0x01384978(*(undefined4 *)(_UNK_01de08b0 + 0x1de05a8));
    func_0x01384978(*(undefined4 *)(_UNK_01de08b4 + 0x1de05b4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e72,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e72,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bdcc0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    if (*(int *)(param_1 + 0x24) == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f090e0(iVar1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01e00dbc(iVar1,uVar3,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_30,iVar1,0);
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_30,iVar1,0);
    FUN_01ddf9e4(param_1,uStack_30,uStack_2c,param_2,param_3,param_4,param_5,
                 *(undefined4 *)(param_1 + 0x24));
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f090e0(iVar1,0);
  fVar5 = *(float *)(param_1 + 0x9c);
  fVar4 = *(float *)(param_1 + 0x98);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e0151c(iVar1,uVar3,param_2 - fVar4,param_3 - fVar5,0);
  FUN_01de046c(&uStack_30,param_1,param_4,param_5);
  switch(uStack_2c) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
    func_0x01de0aec(param_1);
    break;
  case 4:
    func_0x01de08d0(param_1);
    func_0x01de0968(param_1);
    goto code_r0x01de06f4;
  default:
    func_0x01de0968(param_1,uStack_30);
    break;
  case 8:
    if (*(int *)(**(int **)(&UNK_01de0848 + _UNK_01de08b8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(&UNK_01de0864 + _UNK_01de08bc));
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a301c(iVar1,param_4,param_5,uVar3,**(undefined4 **)(&UNK_01de0894 + _UNK_01de08c0));
    goto code_r0x01de06f4;
  }
  func_0x01de0d0c(param_1);
code_r0x01de06f4:
  if (*(int *)(**(int **)(_UNK_01de08c4 + 0x1de0700) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01de08c8 + 0x1de071c));
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x034a301c(iVar1,param_4,param_5,uVar3,**(undefined4 **)(_UNK_01de08cc + 0x1de074c));
  return;
}



// ===== FAT.BoardViewManager$$_ShowInventoryIndicator RVA 0x1dd08d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de08d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x9e75,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01dfa934 + 0x1dfa7b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dfa938 + 0x1dfa7c4),uVar3,uVar6,0);
      func_0x01384978(*(undefined4 *)(_UNK_01dfa93c + 0x1dfa7d0));
      *pcVar4 = '\x01';
    }
    uStack_1c = 0;
    uStack_20 = 0;
    iVar5 = func_0x0229f06c(0x7771,0);
    if (iVar5 == 0) {
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0244fc64(iVar1,0);
      if (*(int *)(**(int **)(_UNK_01dfa940 + 0x1dfa864) + 0x74) == 0) {
        func_0x01384ab4();
      }
      piVar7 = (int *)0x0;
      if ((piVar2 != (int *)0x0) &&
         (piVar7 = piVar2, *piVar2 != **(int **)(_UNK_01dfa944 + 0x1dfa888))) {
        piVar7 = (int *)0x0;
      }
      puStack_28 = &uStack_20;
      uStack_24 = 0;
      func_0x0244fd5c(piVar7,uVar3,uVar6,0);
      uVar3 = uStack_1c;
      uVar6 = uStack_20;
      if (iVar1 == 0) {
        func_0x01384bf0();
        func_0x0244fdbc(0,uVar6,uVar3,0);
        func_0x01384bf0();
      }
      else {
        func_0x0244fdbc(iVar1,uStack_20,uStack_1c,0);
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244ffe4(iVar1,1,0);
    }
    else {
      iVar5 = func_0x0229f13c(0x7771,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      puStack_28 = (undefined4 *)0x0;
      func_0x021bde10(iVar5,iVar1,uVar3,uVar6);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x9e75,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puStack_28 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  puStack_28 = (undefined4 *)uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.BoardViewManager$$_HideMergeHighlight RVA 0x1dd0968 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0968(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01de0ad0 + 0x1de097c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de0ad4 + 0x1de0990));
    func_0x01384978(*(undefined4 *)(_UNK_01de0ad8 + 0x1de099c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ef0,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01de0adc + 0x1de09f4);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01de0ae0 + 0x1de0a10);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de0ae4 + 0x1de0a24));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar1 + 0x34);
    if (*(int *)(**(int **)(_UNK_01de0ae8 + 0x1de0a64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar6,0,0);
    if (iVar1 != 0) {
      func_0x01de48c4(param_1);
    }
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f09134(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5ef6,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01dfa0a0(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&SUB_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x5ef6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ef0,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.BoardViewManager$$_ShowMergeHighlight RVA 0x1dd0aec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0aec(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01de0cf0 + 0x1de0b08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de0cf4 + 0x1de0b1c));
    func_0x01384978(*(undefined4 *)(_UNK_01de0cf8 + 0x1de0b28));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e76,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e76,0);
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
    func_0x01485278(&uStack_38,param_2,0);
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
  piVar6 = *(int **)(_UNK_01de0cfc + 0x1de0b88);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar4 = (char *)(_UNK_01de0d00 + 0x1de0ba4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de0d04 + 0x1de0bb8));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x34);
  if (*(int *)(**(int **)(_UNK_01de0d08 + 0x1de0bf8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar5,0,0);
  if (iVar1 != 0) {
    func_0x01de4788(param_1,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f09134(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  uVar5 = uStack_20;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  uVar2 = uStack_1c;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  FUN_01dd91fc(&uStack_20,uVar5,uVar2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dfa3ac(iVar1,uStack_20,uStack_1c,0);
  return;
}



// ===== FAT.BoardViewManager$$_HideInventoryIndicator RVA 0x1dd0d0c =====

void FUN_01de0d0c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ef8,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f09134(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5ef9,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&SUB_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x5ef9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ef8,0);
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



// ===== FAT.BoardViewManager$$OnEndDrag RVA 0x1dd0d94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de0d94(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01de16f0 + 0x1de0db4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de16f4 + 0x1de0dc8));
    func_0x01384978(*(undefined4 *)(_UNK_01de16f8 + 0x1de0dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01de16fc + 0x1de0de0));
    func_0x01384978(*(undefined4 *)(_UNK_01de1700 + 0x1de0dec));
    func_0x01384978(*(undefined4 *)(_UNK_01de1704 + 0x1de0df8));
    func_0x01384978(*(undefined4 *)(_UNK_01de1708 + 0x1de0e04));
    func_0x01384978(*(undefined4 *)(_UNK_01de170c + 0x1de0e10));
    func_0x01384978(*(undefined4 *)(_UNK_01de1710 + 0x1de0e1c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1714 + 0x1de0e28));
    func_0x01384978(*(undefined4 *)(_UNK_01de1718 + 0x1de0e34));
    func_0x01384978(*(undefined4 *)(_UNK_01de171c + 0x1de0e40));
    func_0x01384978(*(undefined4 *)(_UNK_01de1720 + 0x1de0e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01de1724 + 0x1de0e58));
    func_0x01384978(*(undefined4 *)(_UNK_01de1728 + 0x1de0e64));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0x9e7c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021bde10(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01de172c + 0x1de0edc));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_1 + 0x20);
  *(int *)(iVar1 + 8) = param_1;
  if (iVar10 == 0) {
    return;
  }
  FUN_01de046c(&iStack_40,param_1,param_2,param_3);
  iVar7 = iStack_40;
  piVar11 = (int *)(iVar1 + 0xc);
  *piVar11 = iStack_40;
  *(undefined4 *)(iVar1 + 0x10) = uStack_3c;
  switch(uStack_3c) {
  case 1:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar7,0);
    iVar7 = *(int *)(param_1 + 0x7c);
    iVar1 = *piVar11;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020e8eac(iVar7,iVar10,iVar1,0);
    FUN_01ddff5c(param_1,iStack_40,uStack_3c);
    func_0x01cf8720(0);
    break;
  case 2:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar7,0);
    uVar8 = uStack_3c;
    iVar1 = iStack_40;
    iVar2 = *(int *)(param_1 + 0x7c);
    iVar7 = *piVar11;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x020e3924(iVar2,iVar7,iVar10,&iStack_2c,0);
    if (iStack_2c != 0) {
LAB_01de1518:
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f090e0(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e01ff4(iVar1,iVar10,0);
      goto LAB_01de1554;
    }
    iVar10 = *piVar11;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar8;
    goto joined_r0x01de1284;
  case 3:
    if (iStack_40 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar7,0);
    uVar8 = uStack_3c;
    iVar1 = iStack_40;
    iVar2 = *(int *)(param_1 + 0x7c);
    iVar7 = *piVar11;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x020e4900(iVar2,iVar7,iVar10,&uStack_30,0);
    if (iVar7 == 0) {
      func_0x0216d2a8(*piVar11,uStack_30,0);
      goto LAB_01de1518;
    }
    iVar7 = *(int *)(param_1 + 0x7c);
    iVar10 = *piVar11;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x020e4c2c(iVar7,iVar10,&uStack_30,0);
    iVar10 = *piVar11;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x02116a8c(iVar10,0);
    uStack_3c = uVar8;
joined_r0x01de1284:
    if (iVar10 == 0) {
code_r0x01de1584:
      FUN_01ddff5c(param_1,iVar1,uStack_3c);
    }
    break;
  case 4:
    iVar1 = func_0x01de177c(param_1,iVar10);
    if (iVar1 != 0) {
      func_0x01de1a84(param_1);
      func_0x01de1b94(param_1);
      break;
    }
    goto code_r0x01de14c8;
  case 5:
    iVar1 = func_0x0216644c(iStack_40,iVar10,0);
    if (iVar1 != 0) break;
code_r0x01de1424:
    iVar1 = *piVar11;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_40,iVar1,0);
    iVar10 = *piVar11;
    iVar1 = iStack_40;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    goto code_r0x01de1570;
  case 6:
    puVar3 = *(undefined4 **)(&UNK_01de12f0 + _UNK_01de1730);
    *(int *)(iVar1 + 0x14) = iVar10;
    iVar7 = func_0x02feb690(iVar10,&iStack_28,0,*puVar3);
    iVar10 = iStack_28;
    if (iVar7 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x0212f4e4(iVar10,0);
      iVar10 = iStack_28;
      if (iVar7 == 3) {
        iVar10 = *(int *)(param_1 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar8 = *(undefined4 *)(iVar1 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar8,0);
        if (*(int *)(**(int **)(&UNK_01de1374 + _UNK_01de1734) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x028c1350(**(undefined4 **)(&UNK_01de1394 + _UNK_01de1738),0);
        uVar9 = func_0x01384be4(**(undefined4 **)(&UNK_01de13a8 + _UNK_01de173c));
        puVar3 = *(undefined4 **)(&UNK_01de13bc + _UNK_01de1740);
      }
      else {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x0212f4e4(iVar10,0);
        if (iVar10 != 7) {
          func_0x01de1d10(param_1,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0xc));
          break;
        }
        iVar10 = *(int *)(param_1 + 0x74);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x01f090e0(iVar10,0);
        uVar8 = *(undefined4 *)(iVar1 + 0x14);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar10,uVar8,0);
        if (*(int *)(**(int **)(&UNK_01de1608 + _UNK_01de1748) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar8 = func_0x028c1350(**(undefined4 **)(&UNK_01de1628 + _UNK_01de174c),0);
        uVar9 = func_0x01384be4(**(undefined4 **)(&UNK_01de163c + _UNK_01de1750));
        puVar3 = *(undefined4 **)(&UNK_01de1650 + _UNK_01de1754);
      }
      func_0x024500b4(uVar9,iVar1,*puVar3,0);
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0210e2d4(iVar1,0);
      iVar1 = *piVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0210e2d4(iVar1,0);
      if (*(int *)(**(int **)(&UNK_01de16b0 + _UNK_01de1744) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02085a2c(uVar8,uVar9,uVar4,uVar5,0);
    }
    break;
  case 7:
    iVar1 = func_0x021645c0(iVar10,iStack_40,0);
    if (iVar1 != 0) {
      iVar1 = func_0x02116a8c(iVar10,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x74);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f090e0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01ff4(iVar1,iVar10,0);
      }
      goto code_r0x01de1424;
    }
code_r0x01de14c8:
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f090e0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e01ff4(iVar1,iVar10,0);
    break;
  case 8:
    if (*(int *)(**(int **)(&UNK_01de1470 + _UNK_01de1758) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(&UNK_01de148c + _UNK_01de175c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a301c(iVar1,param_2,param_3,iVar10,**(undefined4 **)(&UNK_01de14b8 + _UNK_01de1760));
    break;
  default:
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01e284b0(iVar1,0);
    iVar7 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar9 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x020e81ec(iVar7,uVar8,uVar9,0);
    if (iVar7 != 0) {
      uVar8 = func_0x0210e5f4(iVar7,0);
      iVar7 = func_0x01de25b0(param_1,uVar8);
      if (*(int *)(**(int **)(_UNK_01de1764 + 0x1de1054) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0145b1cc(iVar7,0,0);
      if (iVar2 == 0) goto LAB_01de109c;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x022a0478(iVar7,0);
      if (iVar7 == 0) goto LAB_01de109c;
LAB_01de10e0:
      if (*(int *)(**(int **)(_UNK_01de1768 + 0x1de10ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar7 = func_0x0300d558(**(undefined4 **)(_UNK_01de176c + 0x1de1108));
      uVar9 = *(undefined4 *)(iVar1 + 0x1c);
      uVar8 = *(undefined4 *)(iVar1 + 0x20);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x034a301c(iVar7,uVar9,uVar8,iVar10,**(undefined4 **)(_UNK_01de1770 + 0x1de113c));
      goto LAB_01de1518;
    }
LAB_01de109c:
    iVar7 = *(int *)(param_1 + 0x7c);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    uVar9 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x020e9a78(iVar7,iVar10,uVar8,uVar9,&uStack_34,0);
    if (iVar7 == 0) goto LAB_01de10e0;
LAB_01de1554:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    iVar1 = iStack_40;
code_r0x01de1570:
    func_0x0210cd7c(&iStack_40,iVar10,0);
    goto code_r0x01de1584;
  }
  func_0x01de2644(param_1);
  return;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass97_0$$.ctor RVA 0x1dd1774 =====

void FUN_01de1774(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardViewManager$$_TryPutInInventory RVA 0x1dd177c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de177c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iStack_14;
  
  pcVar6 = (char *)(_UNK_01de1a6c + 0x1de1798);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de1a70 + 0x1de17ac));
    func_0x01384978(*(undefined4 *)(_UNK_01de1a74 + 0x1de17b8));
    *pcVar6 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e88,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_01de1a78 + 0x1de1834));
    if ((((iStack_14 == 0 || iVar1 == 0) ||
         (iVar1 = func_0x0211d880(iStack_14,0), iStack_14 == 0 || iVar1 == 0)) ||
        (iVar1 = func_0x0211dc48(iStack_14,0), iStack_14 == 0 || iVar1 == 0)) ||
       (iVar1 = func_0x0211dd64(iStack_14,0), iVar1 == 0)) {
      iVar1 = func_0x021697d8(param_2,0);
      if (iVar1 == 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0x10);
        iVar5 = **(int **)(_UNK_01de1a7c + 0x1de198c);
        iVar1 = *(int *)(iVar5 + 0x1c);
        if (iVar1 == 0) {
          func_0x0140024c(iVar5);
          iVar1 = *(int *)(iVar5 + 0x1c);
        }
        iVar1 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        uVar7 = **(undefined4 **)(iVar1 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 0x18;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x020e82b4(iVar1,param_2,0);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0x10);
        iVar5 = **(int **)(_UNK_01de1a80 + 0x1de18ec);
        iVar1 = *(int *)(iVar5 + 0x1c);
        if (iVar1 == 0) {
          func_0x0140024c(iVar5);
          iVar1 = *(int *)(iVar5 + 0x1c);
        }
        iVar1 = *(int *)(iVar1 + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0();
        }
        uVar7 = **(undefined4 **)(iVar1 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar3 = 0x17;
      }
      uVar2 = 0;
      func_0x01ca1c50(iVar4,uVar3,uVar7,0);
    }
    else {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0210cd28(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020e6d84(iVar1,param_2,0);
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e88,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$_CancelSelect RVA 0x1dd1a84 =====

/* WARNING: Possible PIC construction at 0x01dfd870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01dfd890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01dfd874) */
/* WARNING: Removing unreachable block (ram,0x01dfd880) */
/* WARNING: Removing unreachable block (ram,0x01dfd884) */
/* WARNING: Removing unreachable block (ram,0x01dfd894) */
/* WARNING: Removing unreachable block (ram,0x01dfe92c) */
/* WARNING: Removing unreachable block (ram,0x01dfe980) */
/* WARNING: Removing unreachable block (ram,0x01dfe98c) */
/* WARNING: Removing unreachable block (ram,0x01dfe990) */
/* WARNING: Removing unreachable block (ram,0x01dfe9a8) */
/* WARNING: Removing unreachable block (ram,0x01dfe9ac) */
/* WARNING: Removing unreachable block (ram,0x01dfe94c) */
/* WARNING: Removing unreachable block (ram,0x01dfe964) */
/* WARNING: Removing unreachable block (ram,0x01dfe968) */
/* WARNING: Removing unreachable block (ram,0x021744a8) */
/* WARNING: Removing unreachable block (ram,0x02174500) */
/* WARNING: Removing unreachable block (ram,0x0217450c) */
/* WARNING: Removing unreachable block (ram,0x02174548) */
/* WARNING: Removing unreachable block (ram,0x0217454c) */
/* WARNING: Removing unreachable block (ram,0x02174558) */
/* WARNING: Removing unreachable block (ram,0x0217455c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de1a84(int param_1)

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
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01de1b78 + 0x1de1a98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de1b7c + 0x1de1aac));
    func_0x01384978(*(undefined4 *)(_UNK_01de1b80 + 0x1de1ab8));
    func_0x01384978(*(undefined4 *)(_UNK_01de1b84 + 0x1de1ac4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ee1,0);
  if (iVar1 == 0) {
    func_0x01de4678(param_1);
    if (*(int *)(**(int **)(_UNK_01de1b88 + 0x1de1b24) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01de1b8c + 0x1de1b40));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar1,0,**(undefined4 **)(_UNK_01de1b90 + 0x1de1b64));
    iVar1 = func_0x0229f06c(0x5ee6,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f09038(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e06cb4(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = func_0x01f091dc(iVar1,0);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x5ee9,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&SUB_05189da8)(iVar1,0,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x5ee9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5ee6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ee1,0);
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



// ===== FAT.BoardViewManager$$_ShowInventoryPutInFeedback RVA 0x1dd1b94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de1b94(int param_1)

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
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01de1cf4 + 0x1de1ba8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de1cf8 + 0x1de1bbc));
    func_0x01384978(*(undefined4 *)(_UNK_01de1cfc + 0x1de1bc8));
    func_0x01384978(*(undefined4 *)(_UNK_01de1d00 + 0x1de1bd4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e8a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dfa948(iVar1,uVar2,uVar5,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01de1d04 + 0x1de1ca0),0);
    if (*(int *)(**(int **)(_UNK_01de1d08 + 0x1de1cb4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_01de1d0c + 0x1de1cd0));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e8a,0);
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



// ===== FAT.BoardViewManager$$_UseSkillToTarget RVA 0x1dd1d10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de1d10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_28;
  
  pcVar13 = (char *)(_UNK_01de254c + 0x1de1d30);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de2550 + 0x1de1d44));
    func_0x01384978(*(undefined4 *)(_UNK_01de2554 + 0x1de1d50));
    func_0x01384978(*(undefined4 *)(_UNK_01de2558 + 0x1de1d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01de255c + 0x1de1d68));
    func_0x01384978(*(undefined4 *)(_UNK_01de2560 + 0x1de1d74));
    func_0x01384978(*(undefined4 *)(_UNK_01de2564 + 0x1de1d80));
    func_0x01384978(*(undefined4 *)(_UNK_01de2568 + 0x1de1d8c));
    func_0x01384978(*(undefined4 *)(_UNK_01de256c + 0x1de1d98));
    func_0x01384978(*(undefined4 *)(_UNK_01de2570 + 0x1de1da4));
    func_0x01384978(*(undefined4 *)(_UNK_01de2574 + 0x1de1db0));
    func_0x01384978(*(undefined4 *)(_UNK_01de2578 + 0x1de1dbc));
    *pcVar13 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9e7f,0);
  if (iVar1 == 0) {
    if ((((param_2 != 0) && (iVar1 = func_0x0210cd28(param_2,0), param_3 != 0 && iVar1 != 0)) &&
        (iVar1 = func_0x0210cd28(param_3,0), iVar1 != 0)) &&
       (iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01de257c + 0x1de1e6c)),
       iVar1 = iStack_28, iVar2 != 0)) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02132670(iVar1,0);
      func_0x0210cd7c(&uStack_38,param_3,0);
      uVar7 = uStack_34;
      uVar5 = uStack_38;
      iVar2 = func_0x02166ad4(param_2,param_3,0);
      iVar1 = iStack_28;
      if (iVar2 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0212f4e4(iVar1,0);
        iVar1 = iStack_28;
        if (iVar2 == 3) {
          piVar4 = (int *)func_0x021566f4(0);
          uVar5 = func_0x0210e2d4(param_3,0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar4;
          uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01de2580 + 0x1de1f28)) {
                puVar6 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x118);
                goto LAB_01de214c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01de2580 + 0x1de1f28),0xb);
LAB_01de214c:
          iVar1 = (*(code *)*puVar6)(piVar4,uVar5,puVar6[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar1 + 0x44);
          uVar5 = func_0x0210e2d4(param_3,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0364c54c(iVar2,uVar5,**(undefined4 **)(_UNK_01de2584 + 0x1de21a0));
          if (iVar2 < 1) {
            uVar5 = 0xffffffff;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0x44);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar5 = func_0x0364c9b8(iVar1,iVar2 + -1,**(undefined4 **)(_UNK_01de2588 + 0x1de21d4));
          }
          uVar7 = func_0x0210e2d4(param_3,0);
          uVar7 = func_0x02157e88(uVar7,0);
          uVar3 = func_0x0210e2d4(param_2,0);
          iVar1 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x021328ac(iVar1,0);
          if (*(int *)(**(int **)(_UNK_01de258c + 0x1de2240) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01996fbc(param_3,uVar7,uVar3,uVar8,uVar5,0);
        }
        else {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0212f4e4(iVar1,0);
          iVar1 = iStack_28;
          if (iVar2 == 9) {
            func_0x0210cd7c(&uStack_38,param_3,0);
            func_0x01de2d7c(&uStack_38,param_1,uStack_38,uStack_34);
            uVar7 = uStack_34;
            uVar5 = uStack_38;
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar1 + 0x10);
            piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de2590 + 0x1de1fe8),1);
            iVar1 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            piVar11 = (int *)func_0x02132544(iVar1,0);
            if (piVar11 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar11;
            uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar12[-1] == **(int **)(_UNK_01de2594 + 0x1de2030)) {
                  puVar6 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
                  goto LAB_01de2340;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 2;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01de2594 + 0x1de2030),0);
LAB_01de2340:
            uStack_38 = (*(code *)*puVar6)(piVar11,0,puVar6[1]);
            iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01de2598 + 0x1de2360),&uStack_38);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar1 != 0) &&
               (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar9 == 0)) {
              uVar3 = func_0x01384c10();
              func_0x01384aa0(uVar3,0);
            }
            if (piVar4[3] == 0) {
              func_0x01384bf4();
            }
            piVar4[4] = iVar1;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01ca1770(iVar2,0x46,uVar5,uVar7,uStack_30,piVar4,0);
            uVar5 = func_0x0210e2d4(param_2,0);
            uVar7 = func_0x0210e2d4(param_3,0);
            func_0x0199f3dc(uVar5,uVar7,0);
          }
          else {
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0212f4e4(iVar1,0);
            iVar1 = iStack_28;
            if (iVar2 == 7) {
              iVar1 = *(int *)(param_1 + 0x7c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x020e81ec(iVar1,uVar5,uVar7,0);
              if (iVar1 != 0) {
                uVar5 = func_0x0210e2d4(iVar1,0);
                uVar5 = func_0x02157e88(uVar5,0);
                uVar7 = func_0x0210e2d4(param_2,0);
                iVar2 = iStack_28;
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                uVar3 = func_0x021328ac(iVar2,0);
                if (*(int *)(**(int **)(_UNK_01de259c + 0x1de2110) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x01997360(iVar1,uVar5,uVar7,uVar3,0);
              }
            }
            else {
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              uVar5 = 0;
              iVar1 = func_0x0212f4e4(iVar1,0);
              if (iVar1 == 8) {
                uVar7 = func_0x0210e2d4(param_3,0);
                uVar7 = func_0x02157e88(uVar7,0);
                uVar8 = func_0x0210e2d4(param_2,0);
                iVar2 = func_0x02116a8c(param_2,0);
                iVar1 = iStack_28;
                if (iVar2 == 0) {
                  if (iStack_28 == 0) {
                    func_0x01384bf0();
                  }
                  uVar5 = func_0x02132670(iVar1,0);
                }
                if (*(int *)(**(int **)(_UNK_01de25a0 + 0x1de2300) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x0199719c(param_3,uVar7,uVar8,uVar3,uVar5,0);
              }
            }
          }
        }
        iVar1 = func_0x02116a8c(param_2,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x74);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f090e0(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01e01ff4(iVar1,param_2,0);
          func_0x0210cd7c(&uStack_38,param_2,0);
          uVar5 = uStack_38;
          func_0x0210cd7c(&uStack_38,param_2,0);
        }
        else {
          func_0x0210cd7c(&uStack_38,param_3,0);
          uVar5 = uStack_38;
          func_0x0210cd7c(&uStack_38,param_3,0);
        }
        FUN_01ddff5c(param_1,uVar5,uStack_34);
        if (*(int *)(**(int **)(_UNK_01de25a4 + 0x1de24dc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01de25a8 + 0x1de24f8));
        iVar1 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0212f4e4(iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x034a2298(iVar2,param_2,uVar5,**(undefined4 **)(_UNK_01de25ac + 0x1de2540));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$GetItemView RVA 0x1dd25b0 =====

/* WARNING: Possible PIC construction at 0x01e025c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e025cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de25b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x5ef2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f090e0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e02614 + 0x1e02564);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02618 + 0x1e02578),param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_14 = 0;
    iVar1 = func_0x0229f06c(0x5b8f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d66780(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01e0261c + 0x1e025f4))
      ;
      if (iVar1 == 0) {
        uStack_14 = 0;
      }
      return uStack_14;
    }
    iVar1 = func_0x0229f13c(0x5b8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e025cc;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x5ef2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  pcVar5 = (char *)(_UNK_022338b4 + 0x22337c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022338b8 + 0x22337d4),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_022338bc + 0x22338a4));
  return uVar4;
}



// ===== FAT.BoardViewManager$$_OnDragFinish RVA 0x1dd2644 =====

void FUN_01de2644(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5eeb,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    func_0x01de26b4(param_1);
    FUN_01de0968(param_1);
    iVar1 = func_0x0229f06c(0x5ef8,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = func_0x01f09134(iVar1,0);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x5ef9,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&SUB_05189da8)(iVar1,0,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x5ef9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5ef8,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5eeb,0);
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



// ===== FAT.BoardViewManager$$_RemoveFilter RVA 0x1dd26b4 =====

/* WARNING: Possible PIC construction at 0x01e01e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e01e38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de26b4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  char *pcVar4;
  undefined4 unaff_r6;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x5eec,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ddc5c0(param_1);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f090e0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e01f68 + 0x1e01da0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e01f6c + 0x1e01db4),0);
      func_0x01384978(*(undefined4 *)(_UNK_01e01f70 + 0x1e01dc0));
      func_0x01384978(*(undefined4 *)(_UNK_01e01f74 + 0x1e01dcc));
      func_0x01384978(*(undefined4 *)(_UNK_01e01f78 + 0x1e01dd8));
      func_0x01384978(*(undefined4 *)(_UNK_01e01f7c + 0x1e01de4));
      *pcVar4 = '\x01';
    }
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_20 = 0;
    iVar1 = func_0x0229f06c(0x5eef,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_01e01f80 + 0x1e01e58));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_20,iVar1,**(undefined4 **)(_UNK_01e01f84 + 0x1e01e84));
      puVar5 = *(undefined4 **)(_UNK_01e01f88 + 0x1e01e98);
      while (iVar2 = func_0x01475908(&uStack_20,*puVar5), iVar1 = iStack_14, iVar2 != 0) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        func_0x0229fcf8(iVar1,0);
      }
      func_0x02450874(&uStack_20,**(undefined4 **)(_UNK_01e01f8c + 0x1e01ed4));
      return;
    }
    iVar1 = func_0x0229f13c(0x5eef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e01e38;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x5eec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar2,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.BoardViewManager$$OnClickAtTile RVA 0x1dd2758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de2758(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01de2d4c + 0x1de2778);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de2d50 + 0x1de278c));
    func_0x01384978(*(undefined4 *)(_UNK_01de2d54 + 0x1de2798));
    func_0x01384978(*(undefined4 *)(_UNK_01de2d58 + 0x1de27a4));
    func_0x01384978(*(undefined4 *)(_UNK_01de2d5c + 0x1de27b0));
    func_0x01384978(*(undefined4 *)(_UNK_01de2d60 + 0x1de27bc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eb3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e81ec(iVar1,param_2,param_3,0);
    if (iVar1 != 0) {
      iVar2 = func_0x0211015c(iVar1,0);
      if (iVar2 == 0) {
        iVar2 = func_0x02116a38(iVar1,0);
        if (iVar2 != 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          func_0x0210cd7c(&uStack_30,iVar1,0);
          uVar8 = uStack_2c;
          uVar9 = uStack_30;
          if (*(int *)(**(int **)(_UNK_01de2d64 + 0x1de2af8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_01dd876c(&uStack_30,uVar9,uVar8);
          uVar9 = uStack_30;
          iVar5 = **(int **)(_UNK_01de2d68 + 0x1de2b2c);
          iVar4 = *(int *)(iVar5 + 0x1c);
          if (iVar4 == 0) {
            func_0x0140024c(iVar5);
            iVar4 = *(int *)(iVar5 + 0x1c);
          }
          iVar4 = *(int *)(iVar4 + 8);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x014001f0();
          }
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar4 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x014001f0();
          }
          uVar8 = **(undefined4 **)(iVar4 + 0x5c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ca1770(iVar2,0x1b,uVar9,uStack_2c,uStack_28,uVar8,0);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01bf3284(iVar2,**(undefined4 **)(_UNK_01de2d6c + 0x1de2c00),0);
        }
        iVar2 = func_0x0210e5f4(iVar1,0);
        if ((iVar2 == *(int *)(param_1 + 0x1c)) ||
           (iVar2 = func_0x0210e250(iVar1,0xc,0,0), iVar2 != 0)) {
          iVar2 = *(int *)(param_1 + 0x74);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x01f090e0(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01e016c0(iVar2,iVar1,0);
        }
        iVar2 = *(int *)(param_1 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f090e0(iVar2,0);
        uVar9 = func_0x0210e5f4(iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01e02744(iVar2,uVar9,0,0);
      }
      else {
        iVar2 = func_0x02116cdc(iVar1,0);
        if (iVar2 == 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          func_0x0210cd7c(&uStack_30,iVar1,0);
          uVar8 = uStack_2c;
          uVar9 = uStack_30;
          if (*(int *)(**(int **)(_UNK_01de2d70 + 0x1de28a0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_01dd876c(&uStack_30,uVar9,uVar8);
          uVar8 = uStack_2c;
          uVar9 = uStack_30;
          piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de2d74 + 0x1de28ec),1);
          uStack_30 = func_0x02116e50(iVar1,0);
          iVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01de2d78 + 0x1de290c),&uStack_30);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar4 != 0) &&
             (iVar5 = func_0x01384ab8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
            uVar6 = func_0x01384c10();
            func_0x01384aa0(uVar6,0);
          }
          if (piVar3[3] == 0) {
            func_0x01384bf4();
          }
          piVar3[4] = iVar4;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ca1770(iVar2,0x1c,uVar9,uVar8,uStack_28,piVar3,0);
        }
        iVar2 = *(int *)(param_1 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f09134(iVar2,0);
        func_0x0210cd7c(&uStack_30,iVar1,0);
        uVar9 = uStack_30;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01dfac60(iVar2,uVar9,uStack_2c,0);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(param_1 + 0x74);
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01f09380(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar9 = *(undefined4 *)(iVar4 + 0x44);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01bf3284(iVar2,uVar9,0);
        iVar2 = *(int *)(param_1 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f090e0(iVar2,0);
        uVar9 = func_0x0210e5f4(iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01a8c(iVar2,uVar9,0);
      }
      iVar4 = *(int *)(param_1 + 0x1c);
      iVar2 = func_0x0210e5f4(iVar1,0);
      if (iVar4 != iVar2) {
        func_0x01cf80d4(0);
        iVar2 = *(int *)(param_1 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01f090e0(iVar2,0);
        uVar9 = func_0x0210e5f4(iVar1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01f98(iVar2,uVar9,0);
      }
    }
    FUN_01ddff5c(param_1,param_2,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x9eb3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$CoordToWorldPos RVA 0x1dd2d7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de2d7c(undefined8 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  pcVar2 = (char *)(_UNK_01de2f48 + 0x1de2da0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de2f4c + 0x1de2db8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d73,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01de2f50 + 0x1de2e1c);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01de2f54 + 0x1de2e38);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de2f58 + 0x1de2e4c));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    iVar3 = *(int *)(param_2 + 0x74);
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    fVar7 = (float)VectorSignedToFloat(-param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = func_0x01f090e0(iVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450158(iVar1,0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fc74(&uStack_58,iVar1,fVar5 * 0.5 + fVar5 * fVar6,fVar5 * fVar7 - fVar5 * 0.5,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5d73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02237c54(&uStack_58,iVar1,param_2,param_3,param_4,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_50;
  *param_1 = uStack_58;
  return;
}



// ===== FAT.BoardViewManager$$_Setup_Filter_Skill_Default RVA 0x1dd2f5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de2f5c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_01de3058 + 0x1de2f74);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de305c + 0x1de2f88));
    func_0x01384978(*(undefined4 *)(_UNK_01de3060 + 0x1de2f94));
    func_0x01384978(*(undefined4 *)(_UNK_01de3064 + 0x1de2fa0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e54,0);
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
  puVar6 = *(undefined4 **)(_UNK_01de3068 + 0x1de2ffc);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x0244f8d0(uVar5,param_1,**(undefined4 **)(_UNK_01de306c + 0x1de3018),0);
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  uVar5 = func_0x01384be4(uVar2);
  func_0x0244f8d0(uVar5,param_1,**(undefined4 **)(_UNK_01de3070 + 0x1de3044),0);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$_Setup_Filter_Feed RVA 0x1dd3074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de3074(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar4 = (char *)(_UNK_01de3170 + 0x1de308c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de3174 + 0x1de30a0));
    func_0x01384978(*(undefined4 *)(_UNK_01de3178 + 0x1de30ac));
    func_0x01384978(*(undefined4 *)(_UNK_01de317c + 0x1de30b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e64,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e64,0);
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
  puVar6 = *(undefined4 **)(_UNK_01de3180 + 0x1de3114);
  uVar5 = func_0x01384be4(*puVar6);
  func_0x0244f8d0(uVar5,param_1,**(undefined4 **)(_UNK_01de3184 + 0x1de3130),0);
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  uVar5 = func_0x01384be4(uVar2);
  func_0x0244f8d0(uVar5,0,**(undefined4 **)(_UNK_01de3188 + 0x1de315c),0);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$OnItemChangeState RVA 0x1dd318c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de318c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
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
  
  iVar1 = func_0x0229f06c(0x168c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x168c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x021d198c(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f08f90(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01df9274 + 0x1df91ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x166e,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar1 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x01deeff4(iVar2);
    piVar5 = *(int **)(_UNK_01df927c + 0x1df9230);
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar5;
    }
    if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x50) == '\0') {
      return;
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1671,0);
    if (iVar2 == 0) {
      iVar2 = func_0x0229f06c(0x1672,0);
      if (iVar2 == 0) {
        piVar5 = (int *)func_0x02452460(iVar1,0);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar5 + 0x1a0))(piVar5,*(undefined4 *)(*piVar5 + 0x1a4));
        return;
      }
      iVar2 = func_0x0229f13c(0x1672,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x1671,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x166e,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,iVar1,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.BoardViewManager$$OnItemFlagChange RVA 0x1dd3234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de3234(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x166c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f08f90(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_01df9274 + 0x1df91ac);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01df9278 + 0x1df91c0),0);
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x166e,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01deeff4(iVar1);
      piVar4 = *(int **)(_UNK_01df927c + 0x1df9230);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x50) == '\0') {
        return;
      }
      param_1 = *(int *)(param_1 + 0x2c);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x1671,0);
      if (iVar1 == 0) {
        iVar1 = func_0x0229f06c(0x1672,0);
        if (iVar1 == 0) {
          piVar4 = (int *)func_0x02452460(param_1,0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
                    /* WARNING: Could not recover jumptable at 0x01df0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar4 + 0x1a0))(piVar4,*(undefined4 *)(*piVar4 + 0x1a4));
          return;
        }
        iVar1 = func_0x0229f13c(0x1672,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x1671,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x166e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x166c,0);
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
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.BoardViewManager$$SetCheckerMask RVA 0x1dd32bc =====

void FUN_01de32bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ebf,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e23f44(iVar1,param_2,param_3,0);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ebf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$UnsetCheckerMask RVA 0x1dd3354 =====

void FUN_01de3354(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ec1,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e24068(iVar1,param_2,param_3,0);
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$SetCurrentBoardInfoItem RVA 0x1dd33ec =====

void FUN_01de33ec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x75a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75a4,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== FAT.BoardViewManager$$GetCurrentBoardInfoItem RVA 0x1dd3448 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de3448(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x94d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.BoardViewManager$$GetCurrentBoardInfoItemTid RVA 0x1dd349c =====

undefined4 FUN_01de349c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9426,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x60);
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x246,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0xc);
    }
    iVar1 = func_0x0229f13c(0x246,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9426,0);
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
  uVar4 = func_0x0245498c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.BoardViewManager$$RefreshInfo RVA 0x1dd3508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de3508(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x7648,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7648,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
    return;
  }
  pcVar6 = (char *)(_UNK_01de0150 + 0x1ddff7c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de0154 + 0x1ddff90));
    func_0x01384978(*(undefined4 *)(_UNK_01de0158 + 0x1ddff9c));
    func_0x01384978(*(undefined4 *)(_UNK_01de015c + 0x1ddffa8));
    func_0x01384978(*(undefined4 *)(_UNK_01de0160 + 0x1ddffb4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7649,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e81ec(iVar1,param_2,param_3,0);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x78);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x021447e0(iVar3,0,0);
      pcVar6 = (char *)(_UNK_01de465c + 0x1de440c);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de4660 + 0x1de4420));
        func_0x01384978(*(undefined4 *)(_UNK_01de4664 + 0x1de442c));
        func_0x01384978(*(undefined4 *)(_UNK_01de4668 + 0x1de4438));
        *pcVar6 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x764e,0);
      if (iVar3 != 0) {
        iVar3 = func_0x0229f13c(0x764e,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,iVar1,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar3 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485278(&uStack_38,iVar1,0);
        iVar4 = *(int *)(iVar3 + 8);
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        iVar1 = *(int *)(iVar3 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 3;
        if (iVar1 == 0) {
          uVar2 = 2;
        }
        func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
        return;
      }
      func_0x01de4678(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0210e5f4(iVar1,0);
      iVar3 = *(int *)(**(int **)(_UNK_01de466c + 0x1de44bc) + 0x74);
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
      if (iVar3 == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01de4670 + 0x1de44dc));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0349eb38(iVar3,iVar1,**(undefined4 **)(_UNK_01de4674 + 0x1de4500));
      iVar3 = *(int *)(param_1 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f09038(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      uVar5 = uStack_20;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      uVar2 = uStack_1c;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01e06fd0(iVar3,uVar5,uVar2,0);
      iVar3 = *(int *)(param_1 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f091dc(iVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_20,iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01dfe620(iVar3,uStack_20,uStack_1c,0);
      iVar3 = *(int *)(param_1 + 0x74);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01f090e0(iVar3,0);
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01e02940(iVar3,uVar5,0);
      func_0x02081ea0(iVar1,0);
      return;
    }
    FUN_01de1a84(param_1);
    if (*(int *)(**(int **)(_UNK_01de0164 + 0x1de0088) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = FUN_01dda0a4(param_2,param_3,0);
    if (0 < iVar1) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f09038(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e06dd4(iVar1,param_2,param_3,0);
      if (*(int *)(**(int **)(_UNK_01de0168 + 0x1de00fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01de016c + 0x1de0118));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0349f5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7649,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.BoardViewManager$$ReAnchorItemForDrag RVA 0x1dd3588 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de3588(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01de36e4 + 0x1de35a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de36e8 + 0x1de35c0));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x9e51,0);
  if (iVar2 == 0) {
    uVar3 = FUN_01dd9b34(param_2);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    func_0x024505b4(param_3,uVar3,0);
    uVar3 = FUN_01dd9b34(param_2);
    if (*(int *)(**(int **)(_UNK_01de36ec + 0x1de3678) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0244fd5c(uVar3,param_4,param_5,0,&uStack_28,0);
    uVar1 = uStack_24;
    uVar3 = uStack_28;
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fdbc(param_3,uVar3,uVar1,0);
    uStack_30 = uStack_28;
    uStack_2c = uStack_24;
  }
  else {
    iVar2 = func_0x0229f13c(0x9e51,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x022878f0(&uStack_30,iVar2,param_2,param_3,param_4,param_5,0);
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}



// ===== FAT.BoardViewManager$$ReAnchorItemForMove RVA 0x1dd36f0 =====

void FUN_01de36f0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9ec3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ec3,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  uVar4 = FUN_01dd9b34(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05197608)(param_2,uVar4,1,0);
  return;
}



// ===== FAT.BoardViewManager$$ReAnchorItemForPair RVA 0x1dd3774 =====

void FUN_01de3774(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5e89,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e89,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = func_0x01f092d8(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&SUB_05197608)(param_2,uVar4,1,0);
  return;
}



// ===== FAT.BoardViewManager$$HoldItemIfNotInMoveLayer RVA 0x1dd380c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de380c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
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
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01de3a70 + 0x1de3828);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de3a74 + 0x1de383c));
    func_0x01384978(*(undefined4 *)(_UNK_01de3a78 + 0x1de3848));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b8e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f090e0(iVar1,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x0210e5f4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01e02548(iVar1,uVar6,0);
    piVar7 = *(int **)(_UNK_01de3a7c + 0x1de3904);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0145b1cc(iVar1,0,0);
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0244fc34(iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0244fc64(iVar3,0);
      uVar2 = FUN_01dd9b34(param_1);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0145b1cc(uVar6,uVar2,0);
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 0x74);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01f090e0(iVar3,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_28,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_28,param_2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar7 = (int *)func_0x0244fc34(iVar1,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        piVar5 = (int *)0x0;
        if ((piVar7 != (int *)0x0) &&
           (piVar5 = piVar7, *piVar7 != **(int **)(_UNK_01de3a80 + 0x1de3a3c))) {
          piVar5 = (int *)0x0;
        }
        uStack_30 = 0;
        func_0x01e02104(iVar3,uStack_28,uStack_24,piVar5);
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x5b8e,0);
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
  func_0x01485278(&uStack_38,param_2,0);
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



// ===== FAT.BoardViewManager$$HoldItem RVA 0x1dd3a84 =====

void FUN_01de3a84(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ec4,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f090e0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e02104(iVar1,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$ReleaseItem RVA 0x1dd3b3c =====

/* WARNING: Possible PIC construction at 0x01e02440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e02444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de3b3c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  int aiStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x9ec5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f090e0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_01e0252c + 0x1e023c4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02530 + 0x1e023d8),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e02534 + 0x1e023e4));
      func_0x01384978(*(undefined4 *)(_UNK_01e02538 + 0x1e023f0));
      *pcVar4 = '\x01';
    }
    aiStack_1c[0] = 0;
    iVar1 = func_0x0229f06c(0x5d93,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x54) == '\0') {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03d66780(iVar1,param_2,aiStack_1c,
                                **(undefined4 **)(_UNK_01e0253c + 0x1e02478));
        iVar1 = aiStack_1c[0];
        if (iVar2 != 0) {
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          func_0x0229fb54(iVar1,0);
          iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_01e02540 + 0x1e024b0));
          iVar1 = aiStack_1c[0];
          uVar5 = *(undefined4 *)(param_1 + 0x5c);
          if (aiStack_1c[0] == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0244ffd4(iVar1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0244adcc(iVar2,uVar5,uVar3,0);
          iVar1 = *(int *)(param_1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_01e02544 + 0x1e0251c));
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5d93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e02444;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.BoardViewManager$$TakeoverItem RVA 0x1dd3bd0 =====

/* WARNING: Possible PIC construction at 0x01e026ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e026b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de3bd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_20 [4];
  undefined4 auStack_1c [3];
  
  iVar1 = func_0x0229f06c(0x9ec6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = func_0x01f090e0(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01e02730 + 0x1e0263c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e02734 + 0x1e02650),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_01e02738 + 0x1e0265c));
      *pcVar5 = '\x01';
    }
    auStack_1c[0] = 0;
    iVar1 = func_0x0229f06c(0x9ec7,0);
    if (iVar1 == 0) {
      uVar4 = 0;
      if (*(char *)(param_1 + 0x54) == '\0') {
        iVar1 = *(int *)(param_1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03d66780(iVar1,param_2,auStack_1c,
                                **(undefined4 **)(_UNK_01e0273c + 0x1e026e8));
        if (iVar1 != 0) {
          iVar1 = *(int *)(param_1 + 0x4c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_01e02740 + 0x1e02718));
          uVar4 = auStack_1c[0];
        }
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x9ec7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e026b0;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ec6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  pcVar5 = (char *)(_UNK_022338b4 + 0x22337c0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022338b8 + 0x22337d4),param_1,param_2,0);
    *pcVar5 = '\x01';
  }
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0);
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar2 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar2,uVar4,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  uVar4 = func_0x02f5db90((undefined1 *)((int)register0x00000054 + -0x38),0,
                          **(undefined4 **)(_UNK_022338bc + 0x22338a4));
  return uVar4;
}



// ===== FAT.BoardViewManager$$ShowUnlockNormalEffect RVA 0x1dd3c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de3c64(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01de3d7c + 0x1de3c84);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de3d80 + 0x1de3c98));
    *pcVar7 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x9ec8,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x9ec8,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0220cf98(iVar4,param_1,param_2,param_3,0);
    return;
  }
  iVar4 = *(int *)(param_1 + 0x74);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01f09134(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01dfae34(iVar4,param_2,param_3,0);
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = **(undefined4 **)(_UNK_01de3d84 + 0x1de3d6c);
  pcVar7 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x47,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01489db8(uVar5,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar4 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0244f844(iVar2,uVar5,&stack0xffffffec,
                              **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
      if (iVar2 == 0) {
        iVar2 = func_0x018872a8(uVar5,0);
        if (iVar2 == 0) {
          return;
        }
        uVar5 = *(undefined4 *)(iVar2 + 0x18);
        if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x025550ec(uVar5,0);
        cVar1 = *(char *)(iVar2 + 0x1c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar3 + 8);
        uVar6 = *(undefined4 *)(iVar3 + 0xc);
        if (cVar1 != '\0') {
          func_0x01bfe144(iVar4,uVar5,uVar6);
          return;
        }
      }
      else {
        uVar6 = 0;
        uVar5 = *(undefined4 *)(iVar4 + 8);
      }
      func_0x01bfe078(iVar4,uVar5,uVar6);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x47,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,iVar4,uVar5,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$ShowUnlockLevelEffect RVA 0x1dd3d88 =====

void FUN_01de3d88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9eca,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dfaec0(iVar1,param_2,param_3,param_4,param_5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9eca,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289604(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$ShowInstantEffect RVA 0x1dd3e48 =====

void FUN_01de3e48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9eda,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dfc450(iVar1,param_2,param_3,param_4,param_5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9eda,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0220d0bc(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$AddStateEffect RVA 0x1dd3f18 =====

void FUN_01de3f18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9edc,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dfab38(iVar1,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9edc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289748(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$RemoveStateEffect RVA 0x1dd3fd0 =====

void FUN_01de3fd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ee0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f09134(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dfabcc(iVar1,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02289748(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$ShowSellItemReward RVA 0x1dd4088 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de4088(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01de4198 + 0x1de40a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de419c + 0x1de40bc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ee3,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_24,param_2,0);
    func_0x01de41a4(&uStack_24,param_1,uStack_24,uStack_20);
    if (*(int *)(**(int **)(_UNK_01de41a0 + 0x1de4158) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0206de24(param_3,uStack_24,uStack_20,uStack_1c,0,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_CoordToWorldPos RVA 0x1dd41a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de41a4(undefined8 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  pcVar2 = (char *)(_UNK_01de4370 + 0x1de41c8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de4374 + 0x1de41e0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f05,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01de4378 + 0x1de4244);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01de437c + 0x1de4260);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de4380 + 0x1de4274));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    iVar3 = *(int *)(param_2 + 0x74);
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    fVar7 = (float)VectorSignedToFloat(-param_4,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    iVar1 = func_0x01f090e0(iVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450158(iVar1,0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fc74(&uStack_58,iVar1,fVar5 * 0.5 + fVar5 * fVar6,fVar5 * fVar7 - fVar5 * 0.5,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5f05,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02237c54(&uStack_58,iVar1,param_2,param_3,param_4,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_50;
  *param_1 = uStack_58;
  return;
}



// ===== FAT.BoardViewManager$$GetBoardItemHolder RVA 0x1dd4384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de4384(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x9ee4,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x74);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x15f4,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x28);
    }
    iVar1 = func_0x0229f13c(0x15f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021d007c + 0x21cff9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021d0080 + 0x21cffb0),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
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
  uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0084 + 0x21d006c));
  return uVar5;
}



// ===== FAT.BoardViewManager$$_SetSelectItem RVA 0x1dd43f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de43f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01de465c + 0x1de440c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de4660 + 0x1de4420));
    func_0x01384978(*(undefined4 *)(_UNK_01de4664 + 0x1de442c));
    func_0x01384978(*(undefined4 *)(_UNK_01de4668 + 0x1de4438));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x764e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x764e,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  func_0x01de4678(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0210e5f4(param_2,0);
  iVar1 = *(int *)(**(int **)(_UNK_01de466c + 0x1de44bc) + 0x74);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if (iVar1 == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01de4670 + 0x1de44dc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0349eb38(iVar1,param_2,**(undefined4 **)(_UNK_01de4674 + 0x1de4500));
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f09038(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  uVar5 = uStack_20;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  uVar2 = uStack_1c;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e06fd0(iVar1,uVar5,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f091dc(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dfe620(iVar1,uStack_20,uStack_1c,0);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f090e0(iVar1,0);
  uVar5 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e02940(iVar1,uVar5,0);
  func_0x02081ea0(param_2,0);
  return;
}



// ===== FAT.BoardViewManager$$_SetDeselectItem RVA 0x1dd4678 =====

void FUN_01de4678(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ee2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ee2,0);
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
  if (-1 < *(int *)(param_1 + 0x1c)) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01f090e0(iVar1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e02a2c(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}



// ===== FAT.BoardViewManager$$CancelSelectCurItem RVA 0x1dd471c =====

void FUN_01de471c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x75a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75a3,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
    return;
  }
  FUN_01de4678(param_1);
  FUN_01de0174(param_1);
  iVar1 = func_0x0229f06c(0x75a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,0,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}



// ===== FAT.BoardViewManager$$_TryAddInteractableHintToTarget RVA 0x1dd4788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de4788(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01de48b8 + 0x1de47a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de48bc + 0x1de47b4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e77,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e77,0);
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
    func_0x01485278(&uStack_38,param_2,0);
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
  if (*(int *)(param_1 + 0x28) != param_2) {
    func_0x01de48c4(param_1);
    if (param_2 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = func_0x0210e5f4(param_2,0);
    }
    iVar1 = FUN_01de25b0(param_1,uVar5);
    if (*(int *)(**(int **)(_UNK_01de48c0 + 0x1de4850) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0145b1cc(iVar1,0,0);
    if (iVar3 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
        func_0x022a0cf4(0,0);
        func_0x01384bf0();
      }
      else {
        func_0x022a0cf4(iVar1,0);
      }
      func_0x022a0a9c(iVar1,0);
    }
    *(int *)(param_1 + 0x28) = param_2;
  }
  return;
}



// ===== FAT.BoardViewManager$$_TryRemoveInteractableHint RVA 0x1dd48c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de48c4(int param_1)

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
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01de49d4 + 0x1de48d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de49d8 + 0x1de48ec));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ef1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ef1,0);
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
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar5 = func_0x0210e5f4(*(int *)(param_1 + 0x28),0);
    iVar1 = FUN_01de25b0(param_1,uVar5);
    if (*(int *)(**(int **)(_UNK_01de49dc + 0x1de4968) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar4 = func_0x0145b1cc(iVar1,0,0);
    if (iVar4 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
        func_0x022a0d5c(0,0);
        func_0x01384bf0();
      }
      else {
        func_0x022a0d5c(iVar1,0);
      }
      func_0x022a0b00(iVar1,0);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// ===== FAT.BoardViewManager$$SyncBoard RVA 0x1dd49e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de49e0(int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  undefined8 uVar17;
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
  int iStack_24;
  
  iVar2 = func_0x0229f06c(0x776b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x776b,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar12 = *(int *)(iVar2 + 8);
    uVar13 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar12,uVar13,&uStack_38,uVar9,0,0);
    return;
  }
  if (param_2 <= 0.0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar16 = (uint)(param_2 * _UNK_01de4a98);
  if (param_2 * _UNK_01de4a98 == _UNK_01de4a9c) {
    uVar16 = 0x80000000;
  }
  pcVar10 = (char *)(_UNK_0214622c + 0x2145de0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02146230 + 0x2145df4),uVar16,0);
    func_0x01384978(*(undefined4 *)(_UNK_02146234 + 0x2145e00));
    func_0x01384978(*(undefined4 *)(_UNK_02146238 + 0x2145e0c));
    func_0x01384978(*(undefined4 *)(_UNK_0214623c + 0x2145e18));
    func_0x01384978(*(undefined4 *)(_UNK_02146240 + 0x2145e24));
    func_0x01384978(*(undefined4 *)(_UNK_02146244 + 0x2145e30));
    func_0x01384978(*(undefined4 *)(_UNK_02146248 + 0x2145e3c));
    *pcVar10 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar12 = func_0x0229f06c(0x5e42,0);
  if (iVar12 == 0) {
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    piVar15 = *(int **)(_UNK_0214624c + 0x2145ec4);
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    iVar6 = *piVar15;
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar6) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_02145f0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0);
LAB_02145f0c:
    puVar14 = (uint *)(iVar2 + 0x80);
    uVar17 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    *(undefined8 *)(iVar2 + 0x78) = uVar17;
    if (0 < *(int *)(iVar2 + 0x8c)) {
      uVar16 = *(int *)(iVar2 + 0x8c) * 1000 + uVar16;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    if ((int)(uint)(*puVar14 == 0) <= *(int *)(iVar2 + 0x84)) {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *piVar3;
      iVar6 = *piVar15;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar15 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar15[-1] == iVar6) {
            puVar4 = (undefined4 *)(iVar12 + *piVar15 * 8 + 0xc0);
            goto LAB_02145fc4;
          }
          uVar7 = uVar7 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0);
LAB_02145fc4:
      uVar17 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      uVar7 = *puVar14;
      iVar12 = *(int *)(iVar2 + 0x84);
      lVar1 = (ulonglong)uVar7 * 0xfffffc18;
      uVar11 = (uint)lVar1;
      uVar5 = uVar11 + (uint)uVar17;
      *puVar14 = 0;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      iVar6 = iVar12 * -1000 + ((int)((ulonglong)lVar1 >> 0x20) - uVar7) +
              (int)((ulonglong)uVar17 >> 0x20) + (uint)CARRY4(uVar11,(uint)uVar17);
      iVar12 = ((int)uVar16 >> 0x1f) + iVar6 + (uint)CARRY4(uVar16,uVar5);
      uVar7 = uVar16 + uVar5;
      if ((int)-(iVar6 + (uint)(uVar5 != 0)) < 0 ==
          (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(uVar5 != 0)))) {
        uVar7 = uVar16;
        iVar12 = (int)uVar16 >> 0x1f;
      }
      uVar16 = uVar7;
      if ((int)(uint)(uVar16 < 0x40000000) <= iVar12) {
        uVar16 = 0x3fffffff;
      }
    }
    iVar12 = *(int *)(iVar2 + 0x4c);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x020ed918(iVar12,uVar16,0);
    iVar12 = *(int *)(iVar2 + 0x50);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x02114958(iVar12,uVar16,0);
    iVar12 = *(int *)(iVar2 + 0x54);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x02146264(iVar12,uVar16);
    iVar12 = *(int *)(iVar2 + 0x58);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x02139f7c(iVar12,uVar16);
    iVar12 = *(int *)(iVar2 + 0x5c);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x0215eb7c(iVar12,uVar16,0);
    iVar12 = *(int *)(iVar2 + 0x70);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar12 + 0xc)) {
      iVar12 = *(int *)(iVar2 + 0x70);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar12,**(undefined4 **)(_UNK_02146250 + 0x2146108));
      puVar4 = *(undefined4 **)(_UNK_02146254 + 0x214611c);
      while (iVar6 = func_0x03f5f428(&uStack_30,*puVar4), iVar12 = iStack_24, iVar6 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x02117154(iVar12,0);
      }
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02146258 + 0x2146158));
      iVar2 = *(int *)(iVar2 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar12) {
        func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar12,0);
      }
    }
  }
  else {
    iVar12 = func_0x0229f13c(0x5e42,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar12,iVar2,uVar16,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$ForceRefreshCache RVA 0x1dd4aa0 =====

/* WARNING: Possible PIC construction at 0x01de4bac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01de4bb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de4aa0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
  char *pcVar8;
  undefined4 unaff_r5;
  undefined4 *puVar9;
  undefined4 unaff_r6;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar11;
  undefined4 unaff_lr;
  undefined1 auStack_30 [4];
  int *piStack_2c;
  int aiStack_28 [3];
  
  iVar1 = func_0x0229f06c(0x9ee5,0);
  if (iVar1 == 0) {
    pcVar8 = (char *)(_UNK_01de4fac + 0x1de4b10);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01de4fb0 + 0x1de4b24));
      func_0x01384978(*(undefined4 *)(_UNK_01de4fb4 + 0x1de4b30));
      func_0x01384978(*(undefined4 *)(_UNK_01de4fb8 + 0x1de4b3c));
      func_0x01384978(*(undefined4 *)(_UNK_01de4fbc + 0x1de4b48));
      func_0x01384978(*(undefined4 *)(_UNK_01de4fc0 + 0x1de4b54));
      func_0x01384978(*(undefined4 *)(_UNK_01de4fc4 + 0x1de4b60));
      *pcVar8 = '\x01';
    }
    aiStack_28[0] = 0;
    iVar1 = func_0x0229f06c(0x5e73,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar9 = *(undefined4 **)(_UNK_01de4fc8 + 0x1de4bd8);
      func_0x03d59f58(iVar1,*puVar9);
      piVar11 = (int *)(param_1 + 0x38);
      iVar1 = *piVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,*puVar9);
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,*puVar9);
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,*puVar9);
      iVar1 = *(int *)(param_1 + 8);
      iVar6 = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      if (0 < iVar1) {
        iVar5 = *(int *)(param_1 + 0xc);
        piStack_2c = piVar11;
        do {
          if (0 < iVar5) {
            iVar1 = 0;
            do {
              iVar5 = *(int *)(param_1 + 0x7c);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x020e81ec(iVar5,iVar6,iVar1,0);
              if (iVar5 != 0) {
                iVar2 = func_0x02feb690(iVar5,aiStack_28,0,
                                        **(undefined4 **)(_UNK_01de4fcc + 0x1de4ca0));
                iVar3 = aiStack_28[0];
                if (iVar2 == 0) {
                  iVar3 = func_0x0211015c(iVar5,0);
                  if (((iVar3 != 0) || (iVar3 = func_0x02116a38(iVar5,0), iVar3 == 0)) ||
                     (iVar3 = func_0x02116b64(iVar5,0), iVar3 != 0)) {
                    iVar3 = func_0x02116ae0(iVar5,0);
                    if (iVar3 != 0) {
                      iVar3 = func_0x0210e250(iVar5,2,1,0);
                      if ((iVar3 != 0) && (iVar3 = func_0x0216ef48(iVar5,0), iVar3 == 0)) {
                        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
                      }
                      iVar3 = *(int *)(param_1 + 0x3c);
                      uVar10 = func_0x0210e2d4(iVar5,0);
                      if (iVar3 == 0) {
                        func_0x01384bf0();
                      }
                      iVar3 = func_0x03d59fc8(iVar3,uVar10,
                                              **(undefined4 **)(_UNK_01de4fe8 + 0x1de4e10));
                      iVar2 = *(int *)(param_1 + 0x3c);
                      uVar10 = func_0x0210e2d4(iVar5,0);
                      if (iVar3 == 0) {
                        if (iVar2 == 0) {
                          func_0x01384bf0();
                        }
                        func_0x03d59d7c(iVar2,uVar10,1,**(undefined4 **)(_UNK_01de4ff4 + 0x1de4f2c))
                        ;
                        piVar11 = piStack_2c;
                      }
                      else {
                        iVar3 = *(int *)(param_1 + 0x3c);
                        uVar7 = func_0x0210e2d4(iVar5,0);
                        if (iVar3 == 0) {
                          func_0x01384bf0();
                        }
                        iVar5 = func_0x03d59cc4(iVar3,uVar7,
                                                **(undefined4 **)(_UNK_01de4fec + 0x1de4e68));
                        if (iVar2 == 0) {
                          func_0x01384bf0();
                        }
                        func_0x03d59d54(iVar2,uVar10,iVar5 + 1,
                                        **(undefined4 **)(_UNK_01de4ff0 + 0x1de4e94));
                        piVar11 = piStack_2c;
                      }
                    }
                    goto LAB_01de4f3c;
                  }
                  iVar3 = *(int *)(param_1 + 0x40);
                  uVar10 = func_0x0210e2d4(iVar5,0);
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  iVar3 = func_0x03d59fc8(iVar3,uVar10,**(undefined4 **)(_UNK_01de4fe0 + 0x1de4f80))
                  ;
                  iVar2 = *(int *)(param_1 + 0x40);
                }
                else {
                  if (aiStack_28[0] == 0) {
                    func_0x01384bf0();
                  }
                  iVar3 = func_0x0211e720(iVar3,0);
                  piVar4 = piVar11;
                  if (iVar3 != 0) {
                    piVar4 = (int *)(param_1 + 0x34);
                  }
                  iVar2 = *piVar4;
                  uVar10 = func_0x0210e2d4(iVar5,0);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar3 = func_0x03d59fc8(iVar2,uVar10,**(undefined4 **)(_UNK_01de4fd0 + 0x1de4d08))
                  ;
                }
                uVar10 = func_0x0210e2d4(iVar5,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                  if (iVar3 == 0) goto LAB_01de4eec;
                  iVar5 = func_0x03d59cc4(0,uVar10,**(undefined4 **)(_UNK_01de4fd4 + 0x1de4ebc));
                  func_0x01384bf0();
                }
                else {
                  if (iVar3 == 0) {
LAB_01de4eec:
                    func_0x03d59d7c(iVar2,uVar10,1,**(undefined4 **)(_UNK_01de4fe4 + 0x1de4f00));
                    goto LAB_01de4f3c;
                  }
                  iVar5 = func_0x03d59cc4(iVar2,uVar10,**(undefined4 **)(_UNK_01de4fd8 + 0x1de4d44))
                  ;
                }
                func_0x03d59d54(iVar2,uVar10,iVar5 + 1,**(undefined4 **)(_UNK_01de4fdc + 0x1de4ee0))
                ;
              }
LAB_01de4f3c:
              iVar5 = *(int *)(param_1 + 0xc);
              iVar1 = iVar1 + 1;
            } while (iVar1 < iVar5);
            iVar1 = *(int *)(param_1 + 8);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5e73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1de4bb0;
    unaff_r4 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_30;
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar6 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar6,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.BoardViewManager$$_CacheBoardItem RVA 0x1dd4af8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de4af8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int iVar10;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01de4fac + 0x1de4b10);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de4fb0 + 0x1de4b24));
    func_0x01384978(*(undefined4 *)(_UNK_01de4fb4 + 0x1de4b30));
    func_0x01384978(*(undefined4 *)(_UNK_01de4fb8 + 0x1de4b3c));
    func_0x01384978(*(undefined4 *)(_UNK_01de4fbc + 0x1de4b48));
    func_0x01384978(*(undefined4 *)(_UNK_01de4fc0 + 0x1de4b54));
    func_0x01384978(*(undefined4 *)(_UNK_01de4fc4 + 0x1de4b60));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x5e73,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar9 = *(undefined4 **)(_UNK_01de4fc8 + 0x1de4bd8);
    func_0x03d59f58(iVar1,*puVar9);
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,*puVar9);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,*puVar9);
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,*puVar9);
    iVar1 = *(int *)(param_1 + 8);
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    if (0 < iVar1) {
      iVar7 = *(int *)(param_1 + 0xc);
      do {
        if (0 < iVar7) {
          iVar1 = 0;
          do {
            iVar7 = *(int *)(param_1 + 0x7c);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            iVar7 = func_0x020e81ec(iVar7,iVar10,iVar1,0);
            if (iVar7 != 0) {
              iVar2 = func_0x02feb690(iVar7,&iStack_28,0,
                                      **(undefined4 **)(_UNK_01de4fcc + 0x1de4ca0));
              iVar3 = iStack_28;
              if (iVar2 == 0) {
                iVar3 = func_0x0211015c(iVar7,0);
                if (((iVar3 != 0) || (iVar3 = func_0x02116a38(iVar7,0), iVar3 == 0)) ||
                   (iVar3 = func_0x02116b64(iVar7,0), iVar3 != 0)) {
                  iVar3 = func_0x02116ae0(iVar7,0);
                  if (iVar3 != 0) {
                    iVar3 = func_0x0210e250(iVar7,2,1,0);
                    if ((iVar3 != 0) && (iVar3 = func_0x0216ef48(iVar7,0), iVar3 == 0)) {
                      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
                    }
                    iVar3 = *(int *)(param_1 + 0x3c);
                    uVar5 = func_0x0210e2d4(iVar7,0);
                    if (iVar3 == 0) {
                      func_0x01384bf0();
                    }
                    iVar3 = func_0x03d59fc8(iVar3,uVar5,**(undefined4 **)(_UNK_01de4fe8 + 0x1de4e10)
                                           );
                    iVar2 = *(int *)(param_1 + 0x3c);
                    uVar5 = func_0x0210e2d4(iVar7,0);
                    if (iVar3 == 0) {
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      func_0x03d59d7c(iVar2,uVar5,1,**(undefined4 **)(_UNK_01de4ff4 + 0x1de4f2c));
                    }
                    else {
                      iVar3 = *(int *)(param_1 + 0x3c);
                      uVar6 = func_0x0210e2d4(iVar7,0);
                      if (iVar3 == 0) {
                        func_0x01384bf0();
                      }
                      iVar7 = func_0x03d59cc4(iVar3,uVar6,
                                              **(undefined4 **)(_UNK_01de4fec + 0x1de4e68));
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      func_0x03d59d54(iVar2,uVar5,iVar7 + 1,
                                      **(undefined4 **)(_UNK_01de4ff0 + 0x1de4e94));
                    }
                  }
                  goto LAB_01de4f3c;
                }
                iVar3 = *(int *)(param_1 + 0x40);
                uVar5 = func_0x0210e2d4(iVar7,0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x03d59fc8(iVar3,uVar5,**(undefined4 **)(_UNK_01de4fe0 + 0x1de4f80));
                iVar2 = *(int *)(param_1 + 0x40);
              }
              else {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x0211e720(iVar3,0);
                piVar4 = (int *)(param_1 + 0x38);
                if (iVar3 != 0) {
                  piVar4 = (int *)(param_1 + 0x34);
                }
                iVar2 = *piVar4;
                uVar5 = func_0x0210e2d4(iVar7,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x03d59fc8(iVar2,uVar5,**(undefined4 **)(_UNK_01de4fd0 + 0x1de4d08));
              }
              uVar5 = func_0x0210e2d4(iVar7,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
                if (iVar3 == 0) goto LAB_01de4eec;
                iVar7 = func_0x03d59cc4(0,uVar5,**(undefined4 **)(_UNK_01de4fd4 + 0x1de4ebc));
                func_0x01384bf0();
              }
              else {
                if (iVar3 == 0) {
LAB_01de4eec:
                  func_0x03d59d7c(iVar2,uVar5,1,**(undefined4 **)(_UNK_01de4fe4 + 0x1de4f00));
                  goto LAB_01de4f3c;
                }
                iVar7 = func_0x03d59cc4(iVar2,uVar5,**(undefined4 **)(_UNK_01de4fd8 + 0x1de4d44));
              }
              func_0x03d59d54(iVar2,uVar5,iVar7 + 1,**(undefined4 **)(_UNK_01de4fdc + 0x1de4ee0));
            }
LAB_01de4f3c:
            iVar7 = *(int *)(param_1 + 0xc);
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar7);
          iVar1 = *(int *)(param_1 + 8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5e73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$FindItem RVA 0x1dd4ff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de4ff8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_01de5144 + 0x1de5018);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5148 + 0x1de502c));
    func_0x01384978(*(undefined4 *)(_UNK_01de514c + 0x1de5038));
    func_0x01384978(*(undefined4 *)(_UNK_01de5150 + 0x1de5044));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ff0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01de5154 + 0x1de50a8));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01de5158 + 0x1de50d4);
    *(char *)(iVar1 + 0x10) = (char)param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_2;
    uVar4 = *puVar3;
    iVar5 = *(int *)(param_1 + 0x7c);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)(iVar1 + 8) = 0;
    uVar4 = func_0x01384be4(uVar4);
    func_0x03ccb96c(uVar4,iVar1,**(undefined4 **)(_UNK_01de515c + 0x1de5104),0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x020dba14(iVar5,uVar4,0);
    if (*(char *)(iVar1 + 8) != '\0') {
      uVar2 = *(undefined4 *)(iVar1 + 0x14);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ff0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021826b0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass148_0$$.ctor RVA 0x1dd5160 =====

void FUN_01de5160(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardViewManager$$FindBoostItem RVA 0x1dd5168 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de5168(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01de5290 + 0x1de517c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5294 + 0x1de5190));
    func_0x01384978(*(undefined4 *)(_UNK_01de5298 + 0x1de519c));
    func_0x01384978(*(undefined4 *)(_UNK_01de529c + 0x1de51a8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x932e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x932e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return uVar6;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01de52a0 + 0x1de5200));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01de52a4 + 0x1de522c);
  iVar5 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar6 = *puVar2;
  *(undefined1 *)(iVar1 + 8) = 0;
  uVar6 = func_0x01384be4(uVar6);
  func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_01de52a8 + 0x1de5254),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 0;
  func_0x020dba14(iVar5,uVar6,0);
  if (*(char *)(iVar1 + 8) != '\0') {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar3;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass149_0$$.ctor RVA 0x1dd52ac =====

void FUN_01de52ac(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardViewManager$$HasBubbleItem RVA 0x1dd52b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de52b4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01de556c + 0x1de52d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5570 + 0x1de52ec));
    func_0x01384978(*(undefined4 *)(_UNK_01de5574 + 0x1de52f8));
    func_0x01384978(*(undefined4 *)(_UNK_01de5578 + 0x1de5304));
    func_0x01384978(*(undefined4 *)(_UNK_01de557c + 0x1de5310));
    func_0x01384978(*(undefined4 *)(_UNK_01de5580 + 0x1de531c));
    func_0x01384978(*(undefined4 *)(_UNK_01de5584 + 0x1de5328));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_24 = 0;
  iStack_28 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x94c7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x94c7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0226a278(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  iVar1 = 0x38;
  if (param_2 == 1) {
    iVar1 = 0x34;
  }
  iVar1 = *(int *)(param_1 + iVar1);
  if (param_3 < 1) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59ba4(iVar1,**(undefined4 **)(_UNK_01de558c + 0x1de5418));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03829600(&uStack_48,iVar1,**(undefined4 **)(_UNK_01de5590 + 0x1de5444));
    iVar1 = 0;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar5 = *(undefined4 **)(_UNK_01de5594 + 0x1de5464);
    while (iVar3 = func_0x014756c8(&uStack_38,*puVar5), iVar3 != 0) {
      iVar1 = iStack_2c + iVar1;
    }
    func_0x02452410(&uStack_38,**(undefined4 **)(_UNK_01de5598 + 0x1de548c));
    iStack_24 = iVar1;
    if (param_4 < 1) goto LAB_01de54e0;
    iVar3 = iVar1 - param_4;
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (param_4 < 1) {
      iVar1 = func_0x03d5bb20(iVar1,param_3,&iStack_24,**(undefined4 **)(_UNK_01de5588 + 0x1de53cc))
      ;
      if (iVar1 == 0) {
        return 1;
      }
LAB_01de54e0:
      if (0 < iStack_24) {
        return 0;
      }
      return 1;
    }
    iVar1 = func_0x03d5bb20(iVar1,param_3,&iStack_28,**(undefined4 **)(_UNK_01de5588 + 0x1de53cc));
    if (iVar1 == 0) {
      return 0;
    }
    iVar3 = iStack_28 - param_4;
    iVar1 = iStack_28;
  }
  return (uint)(iVar3 < 0 == SBORROW4(iVar1,param_4));
}



// ===== FAT.BoardViewManager$$GetBubbleFrozenItemCount RVA 0x1dd55a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01de55a4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01de5780 + 0x1de55bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5784 + 0x1de55d0));
    func_0x01384978(*(undefined4 *)(_UNK_01de5788 + 0x1de55dc));
    func_0x01384978(*(undefined4 *)(_UNK_01de578c + 0x1de55e8));
    func_0x01384978(*(undefined4 *)(_UNK_01de5790 + 0x1de55f4));
    func_0x01384978(*(undefined4 *)(_UNK_01de5794 + 0x1de5600));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9ee6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59ba4(iVar1,**(undefined4 **)(_UNK_01de5798 + 0x1de5678));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03829600(&uStack_30,iVar1,**(undefined4 **)(_UNK_01de579c + 0x1de56a4));
    iVar1 = 0;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    uStack_18 = uStack_28;
    iStack_14 = iStack_24;
    puVar4 = *(undefined4 **)(_UNK_01de57a0 + 0x1de56c4);
    while (iVar2 = func_0x014756c8(&uStack_20,*puVar4), iVar2 != 0) {
      iVar1 = iStack_14 + iVar1;
    }
    func_0x02452410(&uStack_20,**(undefined4 **)(_UNK_01de57a4 + 0x1de56ec));
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217493c(iVar1,param_1,0);
  }
  return iVar1;
}



// ===== FAT.BoardViewManager$$GetFirstFrozenItemId RVA 0x1dd57b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de57b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  pcVar3 = (char *)(_UNK_01de59b8 + 0x1de57c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de59bc + 0x1de57dc));
    func_0x01384978(*(undefined4 *)(_UNK_01de59c0 + 0x1de57e8));
    func_0x01384978(*(undefined4 *)(_UNK_01de59c4 + 0x1de57f4));
    func_0x01384978(*(undefined4 *)(_UNK_01de59c8 + 0x1de5800));
    func_0x01384978(*(undefined4 *)(_UNK_01de59cc + 0x1de580c));
    func_0x01384978(*(undefined4 *)(_UNK_01de59d0 + 0x1de5818));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x931e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_40,iVar1,**(undefined4 **)(_UNK_01de59d4 + 0x1de58ac));
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    uStack_1c = uStack_34;
    uStack_18 = uStack_30;
    puVar4 = *(undefined4 **)(_UNK_01de59d8 + 0x1de58d8);
    do {
      iVar1 = func_0x01475638(&uStack_28,*puVar4);
      uVar2 = uStack_1c;
      if (iVar1 == 0) {
        func_0x0245059c(&uStack_28,**(undefined4 **)(_UNK_01de59dc + 0x1de591c));
        return 0;
      }
    } while ((int)uStack_18 < 1);
    func_0x0245059c(&uStack_28,**(undefined4 **)(_UNK_01de59e8 + 0x1de5904));
  }
  else {
    iVar1 = func_0x0229f13c(0x931e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$GetFirstBalloonItemId RVA 0x1dd59ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de59ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01de5c50 + 0x1de5a04);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5c54 + 0x1de5a18));
    func_0x01384978(*(undefined4 *)(_UNK_01de5c58 + 0x1de5a24));
    func_0x01384978(*(undefined4 *)(_UNK_01de5c5c + 0x1de5a30));
    func_0x01384978(*(undefined4 *)(_UNK_01de5c60 + 0x1de5a3c));
    func_0x01384978(*(undefined4 *)(_UNK_01de5c64 + 0x1de5a48));
    func_0x01384978(*(undefined4 *)(_UNK_01de5c68 + 0x1de5a54));
    func_0x01384978(*(undefined4 *)(_UNK_01de5c6c + 0x1de5a60));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_34 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x931f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01de5c70 + 0x1de5ad0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036ae6c0(**(undefined4 **)(_UNK_01de5c74 + 0x1de5aec));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar1,**(undefined4 **)(_UNK_01de5c78 + 0x1de5b14));
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    puVar4 = *(undefined4 **)(_UNK_01de5c7c + 0x1de5b34);
    puVar5 = *(undefined4 **)(_UNK_01de5c80 + 0x1de5b3c);
    do {
      iVar1 = func_0x01470118(&uStack_30,*puVar4);
      uVar2 = uStack_24;
      if (iVar1 == 0) {
        func_0x02450828(&uStack_30,**(undefined4 **)(_UNK_01de5c90 + 0x1de5bac));
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d5bb20(iVar1,uVar2,&iStack_34,*puVar5);
    } while ((iStack_34 < 1) || (iVar1 != 1));
    func_0x02450828(&uStack_30,**(undefined4 **)(_UNK_01de5c84 + 0x1de5b94));
  }
  else {
    iVar1 = func_0x0229f13c(0x931f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$HasInSandItem RVA 0x1dd5c94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de5c94(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01de5d80 + 0x1de5cb4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5d84 + 0x1de5cc8));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x94c5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5bb20(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_01de5d88 + 0x1de5d4c));
    uVar2 = 0;
    if (param_3 < 1) {
      if (iStack_1c < 1) {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = (uint)(param_3 <= iStack_1c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94c5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$HasActiveItem RVA 0x1dd5d8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de5d8c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01de5ee4 + 0x1de5dac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de5ee8 + 0x1de5dc0));
    func_0x01384978(*(undefined4 *)(_UNK_01de5eec + 0x1de5dcc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x228f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_01de5ef0 + 0x1de5e44));
    if (param_3 < 1) {
      uVar2 = 1;
      if (iVar3 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0(1);
        }
        iVar1 = func_0x03d59cc4(iVar1,param_2,**(undefined4 **)(_UNK_01de5ef4 + 0x1de5ec4));
        uVar2 = 0;
        if (iVar1 < 1) {
          uVar2 = 1;
        }
      }
    }
    else {
      uVar2 = 0;
      if (iVar3 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0(0);
        }
        iVar1 = func_0x03d59cc4(iVar1,param_2,**(undefined4 **)(_UNK_01de5ef8 + 0x1de5e80));
        uVar2 = (uint)(param_3 <= iVar1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x228f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$HasClickSourceReviving RVA 0x1dd5efc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de5efc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01de60ac + 0x1de5f18);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de60b0 + 0x1de5f2c));
    func_0x01384978(*(undefined4 *)(_UNK_01de60b4 + 0x1de5f38));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x94d9,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_01de60b8 + 0x1de5fb0));
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 8), 0 < iVar1)) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar6 = 0;
      puVar7 = *(undefined4 **)(_UNK_01de60bc + 0x1de5fec);
      do {
        if (0 < iVar3) {
          iVar1 = 0;
          do {
            iVar3 = *(int *)(param_1 + 0x7c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x020e81ec(iVar3,iVar6,iVar1,0);
            if ((((iVar3 != 0) && (iVar4 = func_0x0210e2d4(iVar3,0), iVar4 == param_2)) &&
                (iVar4 = func_0x02116ae0(iVar3,0), iVar4 != 0)) &&
               ((iVar3 = func_0x02feb690(iVar3,&uStack_24,0,*puVar7), iVar3 != 0 &&
                (iVar3 = func_0x02168c38(uStack_24,0), iVar3 != 0)))) {
              return 1;
            }
            iVar3 = *(int *)(param_1 + 0xc);
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar3);
          iVar1 = *(int *)(param_1 + 8);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94d9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$HasClickSourceCanOutput RVA 0x1dd60c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de60c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01de62e0 + 0x1de60dc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de62e4 + 0x1de60f0));
    func_0x01384978(*(undefined4 *)(_UNK_01de62e8 + 0x1de60fc));
    func_0x01384978(*(undefined4 *)(_UNK_01de62ec + 0x1de6108));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x94dc,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_01de62f0 + 0x1de6184));
    uVar2 = 0;
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 8), 0 < iVar1)) {
      iVar3 = *(int *)(param_1 + 0xc);
      iVar7 = 0;
      puVar8 = *(undefined4 **)(_UNK_01de62f4 + 0x1de61c4);
      do {
        if (0 < iVar3) {
          iVar1 = 0;
          do {
            iVar3 = *(int *)(param_1 + 0x7c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x020e81ec(iVar3,iVar7,iVar1,0);
            if (((iVar3 != 0) && (iVar4 = func_0x0210e2d4(iVar3,0), iVar4 == param_2)) &&
               (iVar4 = func_0x02116ae0(iVar3,0), iVar4 != 0)) {
              iVar5 = func_0x02feb690(iVar3,&iStack_28,0,*puVar8);
              iVar4 = iStack_28;
              if (iVar5 == 0) {
                iVar4 = func_0x02feb690(iVar3,&iStack_2c,0,
                                        **(undefined4 **)(_UNK_01de62f8 + 0x1de6278));
                iVar3 = iStack_2c;
                if (iVar4 != 0) {
                  if (iStack_2c == 0) {
                    func_0x01384bf0();
                  }
                  iVar3 = func_0x0212bdd0(iVar3,0);
                  if (iVar3 == 2) {
                    return 1;
                  }
                }
              }
              else {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x02122f9c(iVar4,0);
                if (0 < iVar3) {
                  return 1;
                }
              }
            }
            iVar3 = *(int *)(param_1 + 0xc);
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar3);
          iVar1 = *(int *)(param_1 + 8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
      uVar2 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x94dc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.BoardViewManager$$AllAutoGuideNeedItem RVA 0x1dd62fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de62fc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01de6838 + 0x1de6320);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de683c + 0x1de6334));
    func_0x01384978(*(undefined4 *)(_UNK_01de6840 + 0x1de6340));
    func_0x01384978(*(undefined4 *)(_UNK_01de6844 + 0x1de634c));
    func_0x01384978(*(undefined4 *)(_UNK_01de6848 + 0x1de6358));
    func_0x01384978(*(undefined4 *)(_UNK_01de684c + 0x1de6364));
    func_0x01384978(*(undefined4 *)(_UNK_01de6850 + 0x1de6370));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0x9ee7,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    if (0 < iVar1) {
      func_0x0145b1dc(*(undefined4 *)(param_2 + 8),0,iVar1,0);
    }
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_3 + 0xc);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    if (0 < iVar1) {
      func_0x0145b1dc(*(undefined4 *)(param_3 + 8),0,iVar1,0);
    }
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_4 + 0xc);
    *(undefined4 *)(param_4 + 0xc) = 0;
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
    if (0 < iVar1) {
      func_0x0145b1dc(*(undefined4 *)(param_4 + 8),0,iVar1,0);
    }
    iVar1 = *(int *)(param_1 + 8);
    if (0 < iVar1) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar7 = 0;
      do {
        if (0 < iVar2) {
          iVar1 = 0;
          do {
            iVar2 = *(int *)(param_1 + 0x7c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x020e81ec(iVar2,iVar7,iVar1,0);
            if ((iVar2 != 0) && (iVar3 = func_0x02116ae0(iVar2,0), iVar3 != 0)) {
              iVar4 = func_0x02feb690(iVar2,&iStack_28,0,
                                      **(undefined4 **)(_UNK_01de6854 + 0x1de6528));
              iVar3 = iStack_28;
              if (iVar4 != 0) {
                if (iStack_28 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x0211bf04(iVar3,0);
                if (0 < iVar3) {
                  if (param_3 == 0) {
                    func_0x01384bf0();
                  }
                  iVar4 = *(int *)(param_3 + 8);
                  uVar8 = *(uint *)(param_3 + 0xc);
                  piVar5 = *(int **)(_UNK_01de6858 + 0x1de6588);
                  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
                  iVar3 = *piVar5;
                  if (iVar4 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar8 < *(uint *)(iVar4 + 0xc)) {
                    *(uint *)(param_3 + 0xc) = uVar8 + 1;
                    *(int *)(iVar4 + uVar8 * 4 + 0x10) = iVar2;
                  }
                  else {
                    func_0x0328f170(param_3,iVar2,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                }
              }
              iVar4 = func_0x02feb690(iVar2,&iStack_2c,0,
                                      **(undefined4 **)(_UNK_01de685c + 0x1de65e4));
              iVar3 = iStack_2c;
              if (iVar4 != 0) {
                if (iStack_2c == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x0211f8ec(iVar3,0);
                if (iVar3 == 0) {
                  if (param_2 == 0) {
                    func_0x01384bf0();
                  }
                  iVar3 = *(int *)(param_2 + 8);
                  uVar8 = *(uint *)(param_2 + 0xc);
                  piVar5 = *(int **)(_UNK_01de6860 + 0x1de664c);
                  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
                  iVar4 = *piVar5;
                  if (iVar3 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar8 < *(uint *)(iVar3 + 0xc)) {
                    *(uint *)(param_2 + 0xc) = uVar8 + 1;
                    *(int *)(iVar3 + uVar8 * 4 + 0x10) = iVar2;
                  }
                  else {
                    func_0x0328f170(param_2,iVar2,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                }
              }
              iVar3 = func_0x02feb690(iVar2,&iStack_30,0,
                                      **(undefined4 **)(_UNK_01de6864 + 0x1de66a8));
              if ((iStack_30 != 0 && iVar3 != 0) &&
                 (iVar3 = func_0x0211dc48(iStack_30,0), iVar3 != 0)) {
                if (param_4 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(param_4 + 8);
                uVar8 = *(uint *)(param_4 + 0xc);
                piVar5 = *(int **)(_UNK_01de6868 + 0x1de6798);
                *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
                iVar4 = *piVar5;
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                if (uVar8 < *(uint *)(iVar3 + 0xc)) {
                  *(uint *)(param_4 + 0xc) = uVar8 + 1;
                  *(int *)(iVar3 + uVar8 * 4 + 0x10) = iVar2;
                }
                else {
                  func_0x0328f170(param_4,iVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
                }
              }
              iVar3 = func_0x02feb690(iVar2,&uStack_34,0,
                                      **(undefined4 **)(_UNK_01de686c + 0x1de66d8));
              if (iVar3 != 0) {
                if (param_5 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(param_5 + 8);
                uVar8 = *(uint *)(param_5 + 0xc);
                piVar5 = *(int **)(_UNK_01de6870 + 0x1de6724);
                *(int *)(param_5 + 0x10) = *(int *)(param_5 + 0x10) + 1;
                iVar4 = *piVar5;
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                if (uVar8 < *(uint *)(iVar3 + 0xc)) {
                  *(uint *)(param_5 + 0xc) = uVar8 + 1;
                  *(int *)(iVar3 + uVar8 * 4 + 0x10) = iVar2;
                }
                else {
                  func_0x0328f170(param_5,iVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
                }
              }
            }
            iVar2 = *(int *)(param_1 + 0xc);
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar2);
          iVar1 = *(int *)(param_1 + 8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9ee7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02178e2c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$CheckCDItemNumEnough RVA 0x1dd6874 =====

uint FUN_01de6874(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x9ee8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ee8,0);
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
  return (uint)(param_2 <= *(int *)(param_1 + 0x54));
}



// ===== FAT.BoardViewManager$$Update RVA 0x1dd68e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de68e0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  undefined4 uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  undefined4 uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pcVar18 = (char *)(_UNK_01de6b74 + 0x1de68fc);
  if (*pcVar18 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de6b78 + 0x1de6910));
    func_0x01384978(*(undefined4 *)(_UNK_01de6b7c + 0x1de691c));
    func_0x01384978(*(undefined4 *)(_UNK_01de6b80 + 0x1de6928));
    *pcVar18 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x5e40,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x5e40,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb0,0,param_2,0);
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485258(&stack0xffffffc8,param_2,0);
    iVar17 = *(int *)(iVar5 + 8);
    uVar19 = *(undefined4 *)(iVar5 + 0xc);
    iVar5 = *(int *)(iVar5 + 0x10);
    if (iVar17 == 0) {
      func_0x01384bf0();
    }
    uVar14 = 3;
    if (iVar5 == 0) {
      uVar14 = 2;
    }
    func_0x0245495c(iVar17,uVar19,&stack0xffffffc8,uVar14);
    return;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    if (*(char *)(param_1 + 0x5b) == '\0') {
      iVar5 = (int)(param_2 * _UNK_01de6b6c);
      if (param_2 * _UNK_01de6b6c == _UNK_01de6b70) {
        iVar5 = -0x80000000;
      }
      func_0x01de6b90(param_1,iVar5);
    }
    if (*(char *)(param_1 + 0x59) != '\0') {
      piVar6 = *(int **)(_UNK_01de6b84 + 0x1de69dc);
      *(undefined1 *)(param_1 + 0x59) = 0;
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01de6c04();
      iVar5 = *(int *)(param_1 + 0x74);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01f08f90(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x01df9198(iVar5,0);
    }
    if (*(char *)(param_1 + 0x58) != '\0') {
      iVar5 = *(int *)(param_1 + 0x2c);
      *(undefined1 *)(param_1 + 0x58) = 0;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x01e26878(iVar5,0,0);
      FUN_01de4af8(param_1);
      FUN_01c87144(0);
      if (*(int *)(**(int **)(_UNK_01de6b88 + 0x1de6a7c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_01de6b8c + 0x1de6a98));
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar5,0);
    }
    fVar7 = (float)func_0x02450ef4(0);
    if (*(float *)(param_1 + 100) + 1.0 < fVar7) {
      iVar5 = *(int *)(param_1 + 0x74);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01f0908c(iVar5,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01df9324(iVar5,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x2c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x01e2453c(iVar5,0);
        if (iVar5 != 0) {
          iVar5 = *(int *)(param_1 + 0x2c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          pcVar18 = (char *)(_UNK_01e250a8 + 0x1e24640);
          if (*pcVar18 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01e250ac + 0x1e24654),0);
            func_0x01384978(*(undefined4 *)(_UNK_01e250b0 + 0x1e24660));
            func_0x01384978(*(undefined4 *)(_UNK_01e250b4 + 0x1e2466c));
            func_0x01384978(*(undefined4 *)(_UNK_01e250b8 + 0x1e24678));
            func_0x01384978(*(undefined4 *)(_UNK_01e250bc + 0x1e24684));
            func_0x01384978(*(undefined4 *)(_UNK_01e250c0 + 0x1e24690));
            *pcVar18 = '\x01';
          }
          iVar17 = func_0x0229f06c(0x5e88,0);
          if (iVar17 != 0) {
            iVar17 = func_0x0229f13c(0x5e88,0);
            if (iVar17 == 0) {
              func_0x01384bf0();
            }
            func_0x0245494c(&stack0xffffffb8,0,0);
            if (*(int *)(iVar17 + 0x10) != 0) {
              func_0x01485278(&stack0xffffffd0,*(int *)(iVar17 + 0x10),0);
            }
            func_0x01485278(&stack0xffffffd0,iVar5,0);
            iVar16 = *(int *)(iVar17 + 8);
            uVar19 = *(undefined4 *)(iVar17 + 0xc);
            iVar5 = *(int *)(iVar17 + 0x10);
            if (iVar16 == 0) {
              func_0x01384bf0();
            }
            uVar14 = 2;
            if (iVar5 == 0) {
              uVar14 = 1;
            }
            func_0x0245495c(iVar16,uVar19,&stack0xffffffd0,uVar14);
            return;
          }
          puVar8 = *(undefined4 **)(_UNK_01e250c4 + 0x1e246fc);
          *(undefined4 *)(iVar5 + 0x28) = 0xbf800000;
          iVar17 = func_0x03668dfc(*puVar8);
          iVar16 = *(int *)(iVar5 + 8);
          iVar20 = *(int *)(iVar5 + 0xc);
          if (*(int *)(**(int **)(_UNK_01e250c8 + 0x1e24714) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x019961b8(iVar16,iVar20,0);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          iVar9 = FUN_01ddbed8(iVar17,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iVar9 = func_0x01f090e0(iVar9,0);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          uVar19 = func_0x0210e5f4(iVar16,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iVar9 = func_0x01e02548(iVar9,uVar19,0);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          iVar10 = FUN_01ddbed8(iVar17,0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x01f090e0(iVar10,0);
          if (iVar20 == 0) {
            func_0x01384bf0();
          }
          uVar19 = func_0x0210e5f4(iVar20,0);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          iVar10 = func_0x01e02548(iVar10,uVar19,0);
          piVar6 = *(int **)(_UNK_01e250cc + 0x1e2482c);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar11 = func_0x0244fb8c(iVar9,0,0);
          if (iVar11 == 0) {
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar11 = func_0x0244fb8c(iVar10,0,0);
            if (iVar11 == 0) {
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x0244fc34(iVar9,0);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              iVar12 = func_0x0244fc34(iVar10,0);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              uVar19 = func_0x0244fc34(iVar9,0);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              FUN_01de3774(iVar17,uVar19,0);
              if (iVar10 == 0) {
                func_0x01384bf0();
              }
              uVar19 = func_0x0244fc34(iVar10,0);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              FUN_01de3774(iVar17,uVar19,0);
              iVar17 = func_0x02166108(iVar16,iVar20,0);
              if (iVar17 != 0) {
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                iVar12 = func_0x0229f688(iVar10,0);
              }
              piVar15 = *(int **)(_UNK_01e250d0 + 0x1e24970);
              if (*(int *)(*piVar15 + 0x74) == 0) {
                func_0x01384ab4();
              }
              pcVar18 = (char *)(_UNK_01e250d4 + 0x1e2498c);
              if (*pcVar18 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_01e250d8 + 0x1e249a0));
                *pcVar18 = '\x01';
              }
              iVar17 = *piVar15;
              if (*(int *)(iVar17 + 0x74) == 0) {
                func_0x01384ab4();
                iVar17 = *piVar15;
              }
              iVar17 = *(int *)(*(int *)(iVar17 + 0x5c) + 0x54);
              if (iVar17 == 0) {
                func_0x01384bf0();
              }
              iVar17 = *(int *)(iVar17 + 0x30);
              if (*(int *)(*piVar6 + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar16 = func_0x0244fb8c(iVar17,0,0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar20 = func_0x0244fc64(iVar11,0);
              if (iVar16 == 0) {
                if (iVar17 == 0) {
                  func_0x01384bf0();
                }
                uVar19 = *(undefined4 *)(iVar17 + 0x30);
                if (iVar20 == 0) {
                  func_0x01384bf0();
                }
                func_0x024524fc(&fStack_74,iVar20,uVar19,0,0,0);
                fVar28 = fStack_6c;
                fVar24 = fStack_70;
                fVar7 = fStack_74;
                pcVar18 = (char *)(_UNK_01e25100 + 0x1e24c14);
                if (*pcVar18 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e25104 + 0x1e24c30));
                  *pcVar18 = '\x01';
                }
                piVar6 = *(int **)(_UNK_01e25108 + 0x1e24c44);
                if (*(int *)(*piVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar12,0);
                fVar27 = fStack_6c;
                fVar26 = fStack_70;
                fVar25 = fStack_74;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar11,0);
                fVar3 = fStack_6c;
                fVar2 = fStack_70;
                fVar1 = fStack_74;
                if (*pcVar18 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e2510c + 0x1e24cc8));
                  *pcVar18 = '\x01';
                }
                fVar7 = SQRT(fVar24 * fVar24 + fVar7 * fVar7 + fVar28 * fVar28);
                fVar27 = fVar27 - fVar3;
                fVar26 = fVar26 - fVar2;
                fVar25 = fVar25 - fVar1;
                if (*(int *)(*piVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                pcVar18 = (char *)(_UNK_01e25110 + 0x1e24d04);
                fVar28 = SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar27 * fVar27);
                fVar24 = fVar28 * _UNK_01e250a0;
                if (fVar7 < fVar28 * _UNK_01e250a0) {
                  fVar24 = fVar7;
                }
                if (*pcVar18 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e25114 + 0x1e24d38));
                  *pcVar18 = '\x01';
                }
                if (*(int *)(*piVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                if (fVar28 <= _UNK_01e250a4) {
                  pcVar18 = (char *)(_UNK_01e25118 + 0x1e24eec);
                  if (*pcVar18 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e2511c + 0x1e24f00));
                    *pcVar18 = '\x01';
                  }
                  pfVar13 = *(float **)(**(int **)(_UNK_01e25120 + 0x1e24f14) + 0x5c);
                  fVar25 = *pfVar13;
                  fVar26 = pfVar13[1];
                  fVar27 = pfVar13[2];
                }
                else {
                  fVar27 = fVar27 / fVar28;
                  fVar26 = fVar26 / fVar28;
                  fVar25 = fVar25 / fVar28;
                }
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar11,0);
                fVar1 = fStack_6c;
                fVar28 = fStack_70;
                fVar7 = fStack_74;
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar12,0);
                fVar4 = fStack_6c;
                fVar3 = fStack_70;
                fVar2 = fStack_74;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar11,0);
                fVar23 = fVar24 * fVar27 + fStack_6c;
                fVar22 = fVar24 * fVar26 + fStack_70;
                fVar21 = fVar24 * fVar25 + fStack_74;
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar12,0);
                uVar19 = func_0x01e256f0(iVar5,iVar11,iVar12,fVar7,fVar28,fVar1,fVar21,fVar22,fVar23
                                         ,fVar2,fVar3,fVar4,fStack_74 - fVar24 * fVar25,
                                         fStack_70 - fVar24 * fVar26,fStack_6c - fVar24 * fVar27);
              }
              else {
                if (iVar20 == 0) {
                  func_0x01384bf0();
                }
                func_0x024524fc(&fStack_74,iVar20,0x42200000,0,0,0);
                fVar28 = fStack_6c;
                fVar24 = fStack_70;
                fVar7 = fStack_74;
                pcVar18 = (char *)(_UNK_01e250dc + 0x1e24a68);
                if (*pcVar18 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e250e0 + 0x1e24a84));
                  *pcVar18 = '\x01';
                }
                piVar6 = *(int **)(_UNK_01e250e4 + 0x1e24a98);
                if (*(int *)(*piVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar12,0);
                fVar27 = fStack_6c;
                fVar26 = fStack_70;
                fVar25 = fStack_74;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar11,0);
                fVar3 = fStack_6c;
                fVar2 = fStack_70;
                fVar1 = fStack_74;
                if (*pcVar18 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e250e8 + 0x1e24b1c));
                  *pcVar18 = '\x01';
                }
                fVar7 = SQRT(fVar24 * fVar24 + fVar7 * fVar7 + fVar28 * fVar28);
                fVar27 = fVar27 - fVar3;
                fVar26 = fVar26 - fVar2;
                fVar25 = fVar25 - fVar1;
                if (*(int *)(*piVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                pcVar18 = (char *)(_UNK_01e250ec + 0x1e24b58);
                fVar28 = SQRT(fVar26 * fVar26 + fVar25 * fVar25 + fVar27 * fVar27);
                fVar24 = fVar28 * _UNK_01e24ed8;
                if (fVar7 < fVar28 * _UNK_01e24ed8) {
                  fVar24 = fVar7;
                }
                if (*pcVar18 == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_01e250f0 + 0x1e24b8c));
                  *pcVar18 = '\x01';
                }
                if (*(int *)(*piVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                if (fVar28 <= _UNK_01e24edc) {
                  pcVar18 = (char *)(_UNK_01e250f4 + 0x1e24d80);
                  if (*pcVar18 == '\0') {
                    func_0x01384978(*(undefined4 *)(_UNK_01e250f8 + 0x1e24d94));
                    *pcVar18 = '\x01';
                  }
                  pfVar13 = *(float **)(**(int **)(_UNK_01e250fc + 0x1e24da8) + 0x5c);
                  fVar25 = *pfVar13;
                  fVar26 = pfVar13[1];
                  fVar27 = pfVar13[2];
                }
                else {
                  fVar27 = fVar27 / fVar28;
                  fVar26 = fVar26 / fVar28;
                  fVar25 = fVar25 / fVar28;
                }
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar11,0);
                fVar1 = fStack_6c;
                fVar28 = fStack_70;
                fVar7 = fStack_74;
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar12,0);
                fVar4 = fStack_6c;
                fVar3 = fStack_70;
                fVar2 = fStack_74;
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar11,0);
                fVar23 = fVar24 * fVar27 + fStack_6c;
                fVar22 = fVar24 * fVar26 + fStack_70;
                fVar21 = fVar24 * fVar25 + fStack_74;
                if (iVar12 == 0) {
                  func_0x01384bf0();
                }
                func_0x0244fd3c(&fStack_74,iVar12,0);
                uVar19 = func_0x01e2512c(iVar5,iVar11,iVar12,fVar7,fVar28,fVar1,fVar21,fVar22,fVar23
                                         ,fVar2,fVar3,fVar4,fStack_74 - fVar24 * fVar25,
                                         fStack_70 - fVar24 * fVar26,fStack_6c - fVar24 * fVar27);
              }
              iVar17 = *(int *)(**(int **)(_UNK_01e25124 + 0x1e25050) + 0x74);
              *(undefined4 *)(iVar5 + 0x2c) = uVar19;
              if (iVar17 == 0) {
                func_0x01384ab4();
              }
              iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_01e25128 + 0x1e25070));
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x028c3fd8(iVar5,0);
            }
          }
          return;
        }
      }
    }
  }
  return;
}



// ===== FAT.BoardViewManager$$_SyncBoard RVA 0x1dd6b90 =====

/* WARNING: Possible PIC construction at 0x02145e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02145e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6b90(int param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 unaff_r4;
  char *unaff_r5;
  uint uVar10;
  int unaff_r6;
  undefined4 uVar11;
  undefined4 unaff_r7;
  uint *puVar12;
  undefined4 unaff_r8;
  int *piVar13;
  uint unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar14;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar2 = func_0x0229f06c(0x5e41,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      return;
    }
    unaff_r5 = (char *)(_UNK_0214622c + 0x2145de0);
    if (*unaff_r5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02146230 + 0x2145df4),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02146234 + 0x2145e00));
      func_0x01384978(*(undefined4 *)(_UNK_02146238 + 0x2145e0c));
      func_0x01384978(*(undefined4 *)(_UNK_0214623c + 0x2145e18));
      func_0x01384978(*(undefined4 *)(_UNK_02146240 + 0x2145e24));
      func_0x01384978(*(undefined4 *)(_UNK_02146244 + 0x2145e30));
      func_0x01384978(*(undefined4 *)(_UNK_02146248 + 0x2145e3c));
      *unaff_r5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x0229f06c(0x5e42,0);
    if (iVar2 == 0) {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      piVar13 = *(int **)(_UNK_0214624c + 0x2145ec4);
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      iVar6 = *piVar13;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar6) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_02145f0c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0);
LAB_02145f0c:
      puVar12 = (uint *)(param_1 + 0x80);
      uVar14 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      *(undefined8 *)(param_1 + 0x78) = uVar14;
      if (0 < *(int *)(param_1 + 0x8c)) {
        param_2 = *(int *)(param_1 + 0x8c) * 1000 + param_2;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      if ((int)(uint)(*puVar12 == 0) <= *(int *)(param_1 + 0x84)) {
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        iVar6 = *piVar13;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar13[-1] == iVar6) {
              puVar4 = (undefined4 *)(iVar2 + *piVar13 * 8 + 0xc0);
              goto LAB_02145fc4;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar6,0);
LAB_02145fc4:
        uVar14 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        uVar7 = *puVar12;
        iVar2 = *(int *)(param_1 + 0x84);
        lVar1 = (ulonglong)uVar7 * 0xfffffc18;
        uVar10 = (uint)lVar1;
        uVar5 = uVar10 + (uint)uVar14;
        *puVar12 = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
        iVar6 = iVar2 * -1000 + ((int)((ulonglong)lVar1 >> 0x20) - uVar7) +
                (int)((ulonglong)uVar14 >> 0x20) + (uint)CARRY4(uVar10,(uint)uVar14);
        iVar2 = ((int)param_2 >> 0x1f) + iVar6 + (uint)CARRY4(param_2,uVar5);
        uVar7 = param_2 + uVar5;
        if ((int)-(iVar6 + (uint)(uVar5 != 0)) < 0 ==
            (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)(uVar5 != 0)))) {
          uVar7 = param_2;
          iVar2 = (int)param_2 >> 0x1f;
        }
        param_2 = uVar7;
        if ((int)(uint)(param_2 < 0x40000000) <= iVar2) {
          param_2 = 0x3fffffff;
        }
      }
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x020ed918(iVar2,param_2,0);
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02114958(iVar2,param_2,0);
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02146264(iVar2,param_2);
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02139f7c(iVar2,param_2);
      iVar2 = *(int *)(param_1 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0215eb7c(iVar2,param_2,0);
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(param_1 + 0x70);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_02146250 + 0x2146108));
        puVar4 = *(undefined4 **)(_UNK_02146254 + 0x214611c);
        while (iVar6 = func_0x03f5f428(&uStack_30,*puVar4), iVar2 = iStack_24, iVar6 != 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          func_0x02117154(iVar2,0);
        }
        func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02146258 + 0x2146158));
        iVar2 = *(int *)(param_1 + 0x70);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        if (0 < iVar6) {
          func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar6,0);
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5e42,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2145e94;
    unaff_r6 = iVar2;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_30;
  }
  else {
    iVar2 = func_0x0229f13c(0x5e41,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(uint *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(char **)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar2 + 8);
  uVar11 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 3;
  if (iVar2 == 0) {
    uVar9 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar9);
  return;
}



// ===== FAT.BoardViewManager$$OverrideScaleCoe RVA 0x1dd6cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6cdc(undefined4 param_1,float param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_01de6d80 + 0x1de6cf4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de6d84 + 0x1de6d08));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9ee9,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9ee9,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01de6d88 + 0x1de6d64) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar6 = (char *)(_UNK_01dd8664 + 0x1dd8544);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8668 + 0x1dd8558));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5eb8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5eb8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485258(&uStack_30,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3);
    return;
  }
  piVar4 = *(int **)(_UNK_01dd866c + 0x1dd85b8);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar6 = (char *)(_UNK_01dd8670 + 0x1dd85d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8674 + 0x1dd85e8));
    *pcVar6 = '\x01';
  }
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  pcVar6 = (char *)(_UNK_01dd8678 + 0x1dd861c);
  cVar1 = *pcVar6;
  *(float *)(*(int *)(iVar2 + 0x5c) + 0xc) = param_2;
  if (cVar1 == '\0') {
    func_0x01384978(piVar4);
    iVar2 = *piVar4;
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  *(float *)(*(int *)(iVar2 + 0x5c) + 0x10) = 1.0 / param_2;
  return;
}



// ===== FAT.BoardViewManager$$CalcScaleCoe RVA 0x1dd6d8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6d8c(int param_1)

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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x852c,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01ddd674 + 0x1ddd59c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddd678 + 0x1ddd5b0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5eb7,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244fc34(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450bec(&uStack_24,iVar1,0);
      if (*(int *)(**(int **)(_UNK_01ddd67c + 0x1ddd64c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_01dd852c(uStack_24);
      return;
    }
    iVar1 = func_0x0229f13c(0x5eb7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x852c,0);
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



// ===== FAT.BoardViewManager$$CalcSize RVA 0x1dd6de4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6de4(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x852d,0);
  if (iVar2 == 0) {
    pcVar4 = (char *)(_UNK_01ddd800 + 0x1ddd698);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddd804 + 0x1ddd6ac));
      func_0x01384978(*(undefined4 *)(_UNK_01ddd808 + 0x1ddd6b8));
      *pcVar4 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x5ebb,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      fVar1 = (float)func_0x01f093d4(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01ddd80c + 0x1ddd738) + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_01dd81a0(fVar1);
      iVar2 = *(int *)(param_1 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01f09230(iVar2,0);
      fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3
                                        );
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fe5c(iVar2,fVar1 * fVar7,fVar1 * fVar8,0);
      iVar2 = *(int *)(param_1 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x01f09230(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01ddd810 + 0x1ddd7dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      (*(code *)&UNK_0541c45c)(uVar6,0);
      return;
    }
    iVar2 = func_0x0229f13c(0x5ebb,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x852d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.BoardViewManager$$CalcOrigin RVA 0x1dd6e3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6e3c(int param_1)

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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x852b,0);
  if (iVar1 == 0) {
    pcVar3 = (char *)(_UNK_01ddd954 + 0x1ddd82c);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddd958 + 0x1ddd840));
      func_0x01384978(*(undefined4 *)(_UNK_01ddd95c + 0x1ddd84c));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5ec2,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f092d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_24,iVar1,0);
      uVar2 = uStack_20;
      uVar5 = uStack_24;
      if (*(int *)(**(int **)(_UNK_01ddd960 + 0x1ddd8ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_30 = uStack_1c;
      uStack_2c = 0;
      func_0x0244fd4c(&uStack_24,0,uVar5,uVar2);
      if (*(int *)(**(int **)(_UNK_01ddd964 + 0x1ddd928) + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_01dd8334(uStack_24,uStack_20);
      return;
    }
    iVar1 = func_0x0229f13c(0x5ec2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x852b,0);
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



// ===== FAT.BoardViewManager$$CalcOriginGuide RVA 0x1dd6e94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6e94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
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
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01de6f9c + 0x1de6ea8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de6fa0 + 0x1de6ebc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eea,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_01de6fa4 + 0x1de6f14);
    uVar6 = *(undefined4 *)(param_1 + 0x74);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar6,0,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x01f092d8(iVar1,0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar6,0,0);
    if (iVar1 != 0) {
      return;
    }
    pcVar3 = (char *)(_UNK_01dddaa8 + 0x1ddd980);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dddaac + 0x1ddd994));
      func_0x01384978(*(undefined4 *)(_UNK_01dddab0 + 0x1ddd9a0));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5ec5,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f092d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&uStack_24,iVar1,0);
      uVar2 = uStack_20;
      uVar6 = uStack_24;
      if (*(int *)(**(int **)(_UNK_01dddab4 + 0x1ddda40) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uStack_30 = uStack_1c;
      uStack_2c = 0;
      func_0x0244fd4c(&uStack_24,0,uVar6,uVar2);
      if (*(int *)(**(int **)(_UNK_01dddab8 + 0x1ddda7c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_01dd8430(uStack_24,uStack_20);
      return;
    }
    iVar1 = func_0x0229f13c(0x5ec5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9eea,0);
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
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.BoardViewManager$$RefreshScreenLayoutCache RVA 0x1dd6fa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de6fa8(int param_1)

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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01de70b8 + 0x1de6fbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de70bc + 0x1de6fd0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eeb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eeb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
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
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x74);
    if (*(int *)(**(int **)(_UNK_01de70c0 + 0x1de7034) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar5,0,0);
    if (iVar1 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_01ddd580(param_1);
      FUN_01ddd680(param_1);
      FUN_01ddd814(param_1);
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02141ef4(iVar1,0);
      if (iVar1 == 0) {
        pcVar3 = (char *)(_UNK_01dddaa8 + 0x1ddd980);
        if (*pcVar3 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01dddaac + 0x1ddd994));
          func_0x01384978(*(undefined4 *)(_UNK_01dddab0 + 0x1ddd9a0));
          *pcVar3 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x5ec5,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x74);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01f092d8(iVar1,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0244fd3c(&uStack_24,iVar1,0);
          uVar2 = uStack_20;
          uVar5 = uStack_24;
          if (*(int *)(**(int **)(_UNK_01dddab4 + 0x1ddda40) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uStack_30 = uStack_1c;
          uStack_2c = 0;
          func_0x0244fd4c(&uStack_24,0,uVar5,uVar2);
          if (*(int *)(**(int **)(_UNK_01dddab8 + 0x1ddda7c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_01dd8430(uStack_24,uStack_20);
          return;
        }
        iVar1 = func_0x0229f13c(0x5ec5,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        goto SUB_02173f80;
      }
    }
  }
  return;
}



// ===== FAT.BoardViewManager$$OnScreenStateChanged RVA 0x1dd70c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de70c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  
  pcVar2 = (char *)(_UNK_01de72c4 + 0x1de70e4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de72c8 + 0x1de70fc));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f56,0);
  if (iVar1 == 0) {
    piVar4 = *(int **)(_UNK_01de72cc + 0x1de71b4);
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0145b1cc(uVar3,0,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01f090e0(iVar1,0);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0145b1cc(uVar3,0,0);
      if (iVar1 != 0) {
        iVar1 = *(int *)(param_1 + 0x74);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01f090e0(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e01200(iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11,param_12,param_13,param_14,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f56,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021eadcc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,param_11,param_12,param_13,param_14,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$IsOriginConsistentWithBoard RVA 0x1dd72d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de72d0(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_50 [4];
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  pcVar4 = (char *)(_UNK_01de7568 + 0x1de72f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de756c + 0x1de7304));
    func_0x01384978(*(undefined4 *)(_UNK_01de7570 + 0x1de7310));
    func_0x01384978(*(undefined4 *)(_UNK_01de7574 + 0x1de731c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(auStack_50,0,param_2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485258(&stack0xffffffc8,param_2,0);
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
    func_0x0245495c(iVar3,uVar5,&stack0xffffffc8,uVar2,0,0);
    uVar5 = func_0x0245496c(&stack0xffffffc8,0,0);
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_01de7578 + 0x1de7384);
  uVar5 = *(undefined4 *)(param_1 + 0x74);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(uVar5,0,0);
  uVar5 = 1;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01f092d8(iVar1,0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(uVar2,0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f092d8(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0244fd3c(&fStack_4c,iVar1,0);
      fVar8 = fStack_48;
      fVar7 = fStack_4c;
      if (*(int *)(**(int **)(_UNK_01de757c + 0x1de7450) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0244fd4c(&fStack_4c,0,fVar7,fVar8,uStack_44,0);
      piVar6 = *(int **)(_UNK_01de7580 + 0x1de748c);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar4 = (char *)(_UNK_01de7584 + 0x1de74b0);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de7588 + 0x1de74c4));
        *pcVar4 = '\x01';
      }
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      pcVar4 = (char *)(_UNK_01de758c + 0x1de74f4);
      fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x14);
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x18);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01de7590 + 0x1de7510));
        *pcVar4 = '\x01';
      }
      fVar8 = fStack_48 - fVar8;
      fVar7 = fStack_4c - fVar7;
      if (*(int *)(**(int **)(_UNK_01de7594 + 0x1de752c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = 0;
      if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) < param_2) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



// ===== FAT.BoardViewManager$$_OnItemStateChange RVA 0x1dd7598 =====

void FUN_01de7598(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5efb,0);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x58) = 0x101;
  }
  else {
    iVar1 = func_0x0229f13c(0x5efb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnItemEnter RVA 0x1dd760c =====

void FUN_01de760c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5ede,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ede,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  return;
}



// ===== FAT.BoardViewManager$$_OnItemLeave RVA 0x1dd766c =====

void FUN_01de766c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5edf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5edf,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0210e5f4(param_2,0);
  if (iVar1 == iVar3) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02141b74(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0210e5f4(iVar1,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0210e5f4(param_2,0);
      if (iVar1 == iVar3) {
        *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        FUN_01de0174(param_1);
        goto LAB_01de7758;
      }
    }
    FUN_01de1a84(param_1);
  }
LAB_01de7758:
  if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(param_1 + 0x20) != param_2)) {
    return;
  }
  iVar1 = func_0x0229f06c(0x5eeb,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_01de26b4(param_1);
    FUN_01de0968(param_1);
    iVar1 = func_0x0229f06c(0x5ef8,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_1 = func_0x01f09134(iVar1,0);
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x5ef9,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0244ffd4(iVar1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        (*(code *)&SUB_05189da8)(iVar1,0,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x5ef9,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x5ef8,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5eeb,0);
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
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.BoardViewManager$$_OnItemEvent RVA 0x1dd777c =====

/* WARNING: Possible PIC construction at 0x01bf3310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01bf3314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de777c(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar12;
  undefined4 unaff_r7;
  char *pcVar13;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar14;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  pcVar13 = (char *)(_UNK_01de799c + 0x1de779c);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de79a0 + 0x1de77b0));
    func_0x01384978(*(undefined4 *)(_UNK_01de79a4 + 0x1de77bc));
    func_0x01384978(*(undefined4 *)(_UNK_01de79a8 + 0x1de77c8));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5ec8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ec8,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02180430(iVar2,param_1,param_2,param_3);
    return;
  }
  if (param_3 < 7) {
    if (param_3 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_01de79b4 + 0x1de7954);
    }
    else {
      if (1 < param_3 - 5U) {
        return;
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_01de79ac + 0x1de7920);
    }
  }
  else {
    if (param_3 != 0xf) {
      if (param_3 != 0x11) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x78);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02139cf4(iVar2,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 8) != 1) {
        iVar2 = *(int *)(param_1 + 0x78);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02141ef4(iVar2,0);
        if (iVar2 == 0) {
          return;
        }
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x8c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar13 = (char *)(_UNK_01e370dc + 0x1e36fd0);
      if (*pcVar13 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e370e0 + 0x1e36fe4),param_2,0);
        func_0x01384978(*(undefined4 *)(_UNK_01e370e4 + 0x1e36ff0));
        func_0x01384978(*(undefined4 *)(_UNK_01e370e8 + 0x1e36ffc));
        *pcVar13 = '\x01';
      }
      iVar8 = func_0x0229f06c(0x5ec9,0);
      if (iVar8 == 0) {
        iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01e370ec + 0x1e37058));
        func_0x01e3aef0(iVar8,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar8 + 8) = param_2;
        if (param_2 == 0) {
          return;
        }
        iVar10 = func_0x02116a8c(param_2,0);
        if (iVar10 != 0) {
          return;
        }
        iVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01e370f0 + 0x1e370a0));
        func_0x024525bc(iVar10,iVar8,**(undefined4 **)(_UNK_01e370f4 + 0x1e370bc),0);
        pcVar13 = (char *)(_UNK_01e36678 + 0x1e3626c);
        if (*pcVar13 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e3667c + 0x1e36280));
          func_0x01384978(*(undefined4 *)(_UNK_01e36680 + 0x1e3628c));
          func_0x01384978(*(undefined4 *)(_UNK_01e36684 + 0x1e36298));
          func_0x01384978(*(undefined4 *)(_UNK_01e36688 + 0x1e362a4));
          func_0x01384978(*(undefined4 *)(_UNK_01e3668c + 0x1e362b0));
          func_0x01384978(*(undefined4 *)(_UNK_01e36690 + 0x1e362bc));
          func_0x01384978(*(undefined4 *)(_UNK_01e36694 + 0x1e362c8));
          *pcVar13 = '\x01';
        }
        aiStack_28[0] = 0;
        iVar8 = func_0x0229f06c(0x357e,0);
        if (iVar8 == 0) {
          iVar8 = func_0x034aaa34(**(undefined4 **)(_UNK_01e36698 + 0x1e36334));
          if (iVar8 == 0) {
            func_0x01384bf0();
            iVar3 = func_0x01ee76dc(0,0);
            if (0 < iVar3) {
              return;
            }
            func_0x01384bf0();
            iVar3 = func_0x01ee9300(0,0);
            if (iVar3 != 0) {
              return;
            }
            func_0x01384bf0();
          }
          else {
            iVar3 = func_0x01ee76dc(iVar8,0);
            if (0 < iVar3) {
              return;
            }
            iVar3 = func_0x01ee9300(iVar8,0);
            if (iVar3 != 0) {
              return;
            }
          }
          iVar3 = func_0x01ee77d0(iVar8,0);
          if (((iVar3 == 0) && (iVar3 = func_0x01e3612c(iVar2), iVar3 != 0)) &&
             (iVar3 = func_0x01e366b8(iVar2), iVar3 == 0)) {
            iVar3 = *(int *)(iVar2 + 0x14);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x03dd1078(iVar3,3,aiStack_28,**(undefined4 **)(_UNK_01e3669c + 0x1e363fc))
            ;
            if (iVar3 == 0) {
              uVar12 = func_0x01e34eb8(iVar2);
              uStack_38 = 3;
              uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_01e366a0 + 0x1e364c0),&uStack_38);
              uVar12 = func_0x0244f690(**(undefined4 **)(_UNK_01e366a4 + 0x1e364e0),uVar12,uVar11,0)
              ;
              if (*(int *)(**(int **)(_UNK_01e366a8 + 0x1e364f4) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2944(uVar12,0);
            }
            else {
              uVar14 = func_0x01c34eb8(0);
              iVar9 = (int)((ulonglong)uVar14 >> 0x20);
              uVar4 = (uint)uVar14;
              iVar5 = func_0x01e36810(iVar2,3);
              iVar3 = aiStack_28[0];
              if (aiStack_28[0] == 0) {
                func_0x01384bf0();
              }
              uVar6 = *(int *)(iVar3 + 0x14) + iVar5;
              iVar3 = (int)uVar6 >> 0x1f;
              if ((int)(iVar9 - (iVar3 + (uint)(uVar4 < uVar6))) < 0 ==
                  (SBORROW4(iVar9,iVar3) != SBORROW4(iVar9 - iVar3,(uint)(uVar4 < uVar6)))) {
                if (iVar10 == 0) {
                  iVar3 = 0;
                }
                else {
                  (**(code **)(iVar10 + 0xc))
                            (&uStack_38,*(undefined4 *)(iVar10 + 0x20),
                             *(undefined4 *)(iVar10 + 0x14));
                  if ((uStack_38 & 1) == 0) {
                    return;
                  }
                  iStack_34 = iStack_2c;
                  uStack_38 = uStack_30;
                  iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01e366ac + 0x1e3648c),&uStack_38);
                }
                func_0x01e368e4(&uStack_38,iVar2,3,aiStack_28[0]);
                uVar6 = uStack_38;
                if (uStack_38 != 0) {
                  iVar10 = iStack_34;
                }
                if (uStack_38 != 0 && iVar10 != 0) {
                  func_0x01e36bb0(iVar2);
                  func_0x01e36cc8(iVar2,3,uVar4);
                  piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01e366b0 + 0x1e36568),3);
                  if (piVar7 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = func_0x01384ab8(iVar10,*(undefined4 *)(*piVar7 + 0x20));
                  if (iVar2 == 0) {
                    uVar12 = func_0x01384c10();
                    func_0x01384aa0(uVar12,0);
                  }
                  if (piVar7[3] == 0) {
                    func_0x01384bf4();
                  }
                  piVar7[4] = iVar10;
                  uStack_38 = 3;
                  iVar2 = func_0x01384abc(**(undefined4 **)(_UNK_01e366b4 + 0x1e365c4),&uStack_38);
                  if ((iVar2 != 0) &&
                     (iVar10 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar10 == 0))
                  {
                    uVar12 = func_0x01384c10();
                    func_0x01384aa0(uVar12,0);
                  }
                  if ((uint)piVar7[3] < 2) {
                    func_0x01384bf4();
                  }
                  piVar7[5] = iVar2;
                  if ((iVar3 != 0) &&
                     (iVar2 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar7 + 0x20)), iVar2 == 0)) {
                    uVar12 = func_0x01384c10();
                    func_0x01384aa0(uVar12,0);
                  }
                  if ((uint)piVar7[3] < 3) {
                    func_0x01384bf4();
                  }
                  piVar7[6] = iVar3;
                  if (iVar8 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01ee858c(iVar8,uVar6,piVar7,0);
                }
              }
            }
          }
          return;
        }
        iVar8 = func_0x0229f13c(0x357e,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x0220aad0(iVar8,iVar2,3,iVar10,0);
        return;
      }
      iVar8 = func_0x0229f13c(0x5ec9,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02174108;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01de79b0 + 0x1de7988);
  }
  param_2 = *piVar7;
  pcVar13 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
    *pcVar13 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x47,0);
  if (iVar8 == 0) {
    iVar8 = func_0x01489db8(param_2,0);
    if (iVar8 != 0) {
      return;
    }
    iVar8 = *(int *)(iVar2 + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x0244f844(iVar8,param_2,&stack0xffffffec,
                            **(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
    if (iVar8 == 0) {
      iVar8 = func_0x018872a8(param_2,0);
      if (iVar8 == 0) {
        return;
      }
      uVar12 = *(undefined4 *)(iVar8 + 0x18);
      if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar10 = func_0x025550ec(uVar12,0);
      cVar1 = *(char *)(iVar8 + 0x1c);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar12 = *(undefined4 *)(iVar10 + 8);
      uVar11 = *(undefined4 *)(iVar10 + 0xc);
      if (cVar1 != '\0') {
        func_0x01bfe144(iVar2,uVar12,uVar11);
        return;
      }
    }
    else {
      uVar11 = 0;
      uVar12 = *(undefined4 *)(iVar2 + 8);
    }
    func_0x01bfe078(iVar2,uVar12,uVar11);
    return;
  }
  iVar8 = func_0x0229f13c(0x47,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  unaff_lr = 0x1bf3314;
  unaff_r4 = iVar2;
  unaff_r5 = param_2;
  unaff_r6 = iVar8;
  register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
SUB_02174108:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar10 = *(int *)(iVar8 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar10 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar10,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar2,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar10 = *(int *)(iVar8 + 8);
  uVar12 = *(undefined4 *)(iVar8 + 0xc);
  iVar2 = *(int *)(iVar8 + 0x10);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar11 = 3;
  if (iVar2 == 0) {
    uVar11 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar10,uVar12,(undefined1 *)((int)register0x00000054 + -0x38),uVar11);
  return;
}



// ===== FAT.BoardViewManager$$_OnItemMove RVA 0x1dd79b8 =====

void FUN_01de79b8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5efa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5efa,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined2 *)(param_1 + 0x58) = 0x101;
  return;
}



// ===== FAT.BoardViewManager$$_OnItemComponentChange RVA 0x1dd7a18 =====

void FUN_01de7a18(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5efc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5efc,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x59) = 1;
  return;
}



// ===== FAT.BoardViewManager$$_OnLackOfEnergy RVA 0x1dd7a78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7a78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  pcVar6 = (char *)(_UNK_01de7b10 + 0x1de7a8c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de7b14 + 0x1de7aa0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5f0c,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01de7b18 + 0x1de7af8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0229f06c(0x5f0d,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x5f0d,0);
      if (iVar2 == 0) {
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
      if (*(int *)(iVar2 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
        uVar8 = 0;
        if (*(int *)(iVar2 + 0x10) != 0) {
          uVar8 = 1;
        }
      }
      iVar7 = *(int *)(iVar2 + 8);
      uVar4 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x0245495c(iVar7,uVar4,&uStack_30,uVar8,0,0);
      return;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x9c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_01c77708(iVar2,0x10,0);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar2 + 0xfc);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x5f0e,0);
    if (iVar2 == 0) {
      pcVar6 = (char *)(_UNK_01e84410 + 0x1e841e8);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
        func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
        func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
        func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
        func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
        func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
        func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
        *pcVar6 = '\x01';
      }
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      iVar2 = func_0x0229f06c(0xf8e,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0xf8e,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0217bbe0(iVar2,param_1,1,0);
        return;
      }
      if (*(int *)(param_1 + 0x1c) != 1) {
        if (*(int *)(param_1 + 0x14) == 0) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01e843fc;
        }
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
        func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
        uVar8 = *(undefined4 *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar2 + 8);
        uVar5 = *(uint *)(iVar2 + 0xc);
        piVar3 = *(int **)(_UNK_01e84438 + 0x1e84330);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar9 = *piVar3;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar7 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar5 + 1;
          *(undefined4 *)(iVar7 + uVar5 * 4 + 0x10) = uVar8;
        }
        else {
          func_0x0328f170(iVar2,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
        func_0x0328f380(iVar2,*(undefined4 *)(param_1 + 8),
                        **(undefined4 **)(_UNK_01e8443c + 0x1e84380));
        uStack_38 = **(undefined4 **)(_UNK_01e84440 + 0x1e843a4);
        func_0x03934478(&uStack_30,iVar2,*(undefined4 *)(param_1 + 0x1c),
                        *(undefined4 *)(param_1 + 0x3c));
        func_0x01e83de0(param_1,0);
        uVar1 = uStack_28;
        uVar4 = uStack_2c;
        uVar8 = uStack_30;
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = **(undefined4 **)(_UNK_01e84444 + 0x1e843f0);
        func_0x03685b64(iVar2,uVar8,uVar4,uVar1);
      }
LAB_01e843fc:
      func_0x01e83ff8(param_1,1);
      return;
    }
    iVar2 = func_0x0229f13c(0x5f0e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5f0c,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar7,uVar8,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.BoardViewManager$$_OnFeatureClicked RVA 0x1dd7b1c =====

/* WARNING: Possible PIC construction at 0x01ab57d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01ab57d8) */
/* WARNING: Removing unreachable block (ram,0x01ab57f0) */
/* WARNING: Removing unreachable block (ram,0x01ab57f4) */
/* WARNING: Removing unreachable block (ram,0x01ab5810) */
/* WARNING: Removing unreachable block (ram,0x01ab5814) */
/* WARNING: Removing unreachable block (ram,0x0349eb38) */
/* WARNING: Removing unreachable block (ram,0x0349eb44) */
/* WARNING: Removing unreachable block (ram,0x0349eb40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7b1c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar6;
  int unaff_r6;
  undefined4 uVar7;
  int *piVar8;
  int *unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
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
  
  iVar3 = func_0x0229f06c(0x5f10,0);
  if (iVar3 == 0) {
    if (param_2 != 0) {
      if (param_3 == 0xa0) {
        pcVar5 = (char *)(_UNK_01b106f8 + 0x1b10544);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01b106fc + 0x1b10558));
          func_0x01384978(*(undefined4 *)(_UNK_01b10700 + 0x1b10564));
          func_0x01384978(*(undefined4 *)(_UNK_01b10704 + 0x1b10570));
          func_0x01384978(*(undefined4 *)(_UNK_01b10708 + 0x1b1057c));
          *pcVar5 = '\x01';
        }
        iVar3 = func_0x0229f06c(0x5f18,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0229f13c(0x5f18,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uVar7 = 0;
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
            uVar7 = 0;
            if (*(int *)(iVar3 + 0x10) != 0) {
              uVar7 = 1;
            }
          }
          iVar1 = *(int *)(iVar3 + 8);
          uVar4 = *(undefined4 *)(iVar3 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0245495c(iVar1,uVar4,&uStack_30,uVar7,0,0);
          return;
        }
        piVar8 = *(int **)(_UNK_01b1070c + 0x1b105d0);
        piVar2 = (int *)**(int **)(*piVar8 + 0x5c);
        if ((piVar2 != (int *)0x0) &&
           (iVar3 = (**(code **)(*piVar2 + 0x108))(piVar2,*(undefined4 *)(*piVar2 + 0x10c)),
           iVar3 != 0)) {
          iVar3 = **(int **)(*piVar8 + 0x5c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01b06874(iVar3,0);
          if (iVar3 != 0) {
            iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b10710 + 0x1b10630));
            piVar2 = *(int **)(_UNK_01b10714 + 0x1b10644);
            iVar3 = *piVar2;
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar2;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa20);
            piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b10718 + 0x1b10668),1);
            iVar3 = **(int **)(*piVar8 + 0x5c);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar3 != 0) &&
               (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar6 == 0)) {
              uVar4 = func_0x01384c10();
              func_0x01384aa0(uVar4,0);
            }
            if (piVar2[3] == 0) {
              func_0x01384bf4();
            }
            piVar2[4] = iVar3;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
SUB_01ee858c:
            *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
            *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
            *(int **)((int)register0x00000054 + -0xc) = unaff_r7;
            *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
            *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
            *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
            iVar3 = func_0x0229f06c(0xd,0,piVar2,0);
            if (iVar3 == 0) {
              func_0x01ee81d4(iVar1,uVar7,0,piVar2);
            }
            else {
              iVar3 = func_0x0229f13c(0xd,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
              func_0x02174858(iVar3,iVar1,uVar7,piVar2);
            }
            return;
          }
        }
        return;
      }
      if (param_3 == 0x36) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0xc4);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        pcVar5 = (char *)(_UNK_01ab5880 + 0x1ab55fc);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01ab5884 + 0x1ab5610),0);
          func_0x01384978(*(undefined4 *)(_UNK_01ab5888 + 0x1ab561c));
          func_0x01384978(*(undefined4 *)(_UNK_01ab588c + 0x1ab5628));
          func_0x01384978(*(undefined4 *)(_UNK_01ab5890 + 0x1ab5634));
          func_0x01384978(*(undefined4 *)(_UNK_01ab5894 + 0x1ab5640));
          func_0x01384978(*(undefined4 *)(_UNK_01ab5898 + 0x1ab564c));
          func_0x01384978(*(undefined4 *)(_UNK_01ab589c + 0x1ab5658));
          func_0x01384978(*(undefined4 *)(_UNK_01ab58a0 + 0x1ab5664));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x5f11,0);
        if (iVar1 == 0) {
          iVar1 = func_0x01ab54b0(iVar3);
          if ((iVar1 != 0) && (iVar1 = func_0x01ab4f24(iVar3), iVar1 != 0)) {
            iVar1 = func_0x01ab4e08(iVar3,*(int *)(iVar3 + 0x18) + 1);
            if (iVar1 == 0) {
              return;
            }
            unaff_r4 = func_0x01384be4(**(undefined4 **)(_UNK_01ab58ac + 0x1ab56f4));
            func_0x024509b4(unaff_r4,**(undefined4 **)(_UNK_01ab58b0 + 0x1ab5708));
            func_0x01ab58c8(iVar3,unaff_r4);
            iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ab58b4 + 0x1ab5728));
            iVar3 = *(int *)(iVar3 + 8);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x84);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            uVar7 = *(undefined4 *)(iVar3 + 0xc);
            piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ab58b8 + 0x1ab5760),1);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((unaff_r4 != 0) &&
               (iVar3 = func_0x01384ab8(unaff_r4,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)) {
              uVar4 = func_0x01384c10();
              func_0x01384aa0(uVar4,0);
            }
            if (piVar2[3] == 0) {
              func_0x01384bf4();
            }
            piVar2[4] = unaff_r4;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            unaff_lr = 0x1ab57d8;
            unaff_r5 = uVar7;
            unaff_r6 = iVar1;
            unaff_r7 = piVar2;
            register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
            goto SUB_01ee858c;
          }
          if (*(int *)(**(int **)(_UNK_01ab58a4 + 0x1ab583c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01ab58a8 + 0x1ab5858));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0229f06c(0x3f,0);
          if (iVar1 == 0) {
            iVar3 = *(int *)(iVar3 + 8);
            if (iVar3 == 0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
            return;
          }
          iVar1 = func_0x0229f13c(0x3f,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar1 = func_0x0229f13c(0x5f11,0);
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
        func_0x01485278(&uStack_30,iVar3,0);
        iVar6 = *(int *)(iVar1 + 8);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        iVar3 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 2;
        if (iVar3 == 0) {
          uVar4 = 1;
        }
        func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
        return;
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x5f10,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02238a10(iVar3,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnChoiceBoxWaiting RVA 0x1dd7bec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7bec(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_01de7de4 + 0x1de7c0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de7de8 + 0x1de7c24));
    func_0x01384978(*(undefined4 *)(_UNK_01de7dec + 0x1de7c30));
    func_0x01384978(*(undefined4 *)(_UNK_01de7df0 + 0x1de7c3c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01de7df4 + 0x1de7ca8));
  piVar5 = *(int **)(_UNK_01de7df8 + 0x1de7cbc);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar5;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x20c);
  piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de7dfc + 0x1de7ce0),3);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  if ((param_2 != 0) &&
     (iVar2 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if (piVar5[3] == 0) {
    func_0x01384bf4();
  }
  piVar5[4] = param_2;
  if ((param_3 != 0) &&
     (iVar2 = func_0x01384ab8(param_3,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar5[3] < 2) {
    func_0x01384bf4();
  }
  piVar5[5] = param_3;
  if ((param_4 != 0) &&
     (iVar2 = func_0x01384ab8(param_4,*(undefined4 *)(*piVar5 + 0x20)), iVar2 == 0)) {
    uVar3 = func_0x01384c10();
    func_0x01384aa0(uVar3,0);
  }
  if ((uint)piVar5[3] < 3) {
    func_0x01384bf4();
  }
  piVar5[6] = param_4;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0xd,0,piVar5,0);
  if (iVar2 == 0) {
    func_0x01ee81d4(iVar1,uVar6,0,piVar5);
  }
  else {
    iVar2 = func_0x0229f13c(0xd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,iVar1,uVar6,piVar5,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnItemSpawnLoginGift RVA 0x1dd7e00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7e00(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_01de80b8 + 0x1de7e20);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de80bc + 0x1de7e34));
    func_0x01384978(*(undefined4 *)(_UNK_01de80c0 + 0x1de7e40));
    func_0x01384978(*(undefined4 *)(_UNK_01de80c4 + 0x1de7e4c));
    func_0x01384978(*(undefined4 *)(_UNK_01de80c8 + 0x1de7e58));
    func_0x01384978(*(undefined4 *)(_UNK_01de80cc + 0x1de7e64));
    func_0x01384978(*(undefined4 *)(_UNK_01de80d0 + 0x1de7e70));
    func_0x01384978(*(undefined4 *)(_UNK_01de80d4 + 0x1de7e7c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f45,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01c77708(iVar1,0xf2,0);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      else {
        iVar1 = func_0x0210e2d4(param_3,0);
        if (iVar1 < 1) {
          return;
        }
      }
      uVar2 = func_0x0210e2d4(param_3,0);
      if (*(int *)(**(int **)(_UNK_01de80d8 + 0x1de7f54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x036a1750(uVar2,**(undefined4 **)(_UNK_01de80dc + 0x1de7f70));
      if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x14), 0 < iVar1)) {
        if (*(int *)(**(int **)(_UNK_01de80e0 + 0x1de7f98) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_01de80e4 + 0x1de7fb4));
        if (iVar1 != 0) {
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01de80e8 + 0x1de7fd0));
          piVar6 = *(int **)(_UNK_01de80ec + 0x1de7fe4);
          iVar3 = *piVar6;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
            iVar3 = *piVar6;
          }
          uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x3b0);
          piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de80f0 + 0x1de8008),1);
          if (param_3 == 0) {
            func_0x01384bf0();
          }
          uStack_1c = func_0x0210e2d4(param_3,0);
          iVar3 = func_0x014867c8(&uStack_1c,0);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          if ((iVar3 != 0) &&
             (iVar4 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
            uVar5 = func_0x01384c10();
            func_0x01384aa0(uVar5,0);
          }
          if (piVar6[3] == 0) {
            func_0x01384bf4();
          }
          piVar6[4] = iVar3;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x01ee858c(iVar1,uVar2,piVar6,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnCollectBonus RVA 0x1dd80f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de80f4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01de854c + 0x1de8110);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8550 + 0x1de8124));
    func_0x01384978(*(undefined4 *)(_UNK_01de8554 + 0x1de8130));
    func_0x01384978(*(undefined4 *)(_UNK_01de8558 + 0x1de813c));
    func_0x01384978(*(undefined4 *)(_UNK_01de855c + 0x1de8148));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar3 = func_0x0229f06c(0x5efe,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5efe,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(param_2 + 8);
  iVar3 = func_0x0214cf60(param_2,0);
  if (iVar10 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x0210cd28(0,0);
    if (iVar4 == 0) goto LAB_01de847c;
    func_0x01384bf0();
  }
  else {
    iVar4 = func_0x0210cd28(iVar10,0);
    if (iVar4 == 0) {
LAB_01de847c:
      if (iVar3 != 0) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x40);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar4,iVar3,0);
      }
      goto LAB_01de84bc;
    }
  }
  iVar4 = func_0x02feb690(iVar10,&iStack_28,0,**(undefined4 **)(_UNK_01de8560 + 0x1de8210));
  if (((iStack_28 != 0 && iVar4 != 0) &&
      (iVar4 = func_0x0211d7ac(iStack_28,0), iStack_28 != 0 && iVar4 != 0)) &&
     (iVar4 = func_0x0211dc48(iStack_28,0), iVar4 != 0)) {
    if (*(int *)(**(int **)(_UNK_01de8564 + 0x1de8530) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01de8570(iVar3);
    goto LAB_01de84bc;
  }
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0210e5f4(iVar10,0);
  iVar4 = FUN_01de25b0(param_1,uVar8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x022a03b4(iVar4,0);
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x74);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01f09134(iVar5,0);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_34,iVar10,0);
    uVar1 = uStack_30;
    uVar8 = uStack_34;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x01dfb6c4(iVar5,uVar8,uVar1,0);
  }
  if (iVar3 == 0) goto LAB_01de84bc;
  iVar5 = *(int *)(iVar3 + 8);
  if (iVar5 == 0x1f) {
LAB_01de8354:
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar7 = func_0x0244fc34(iVar4,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fd3c(&uStack_34,iVar7,0);
    uVar2 = uStack_2c;
    uVar1 = uStack_30;
    uVar8 = uStack_34;
    uVar11 = *(undefined4 *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01ca1ec8(iVar6,uVar8,uVar1,uVar2,iVar5,uVar11,0,0);
  }
  else {
    if (iVar5 == 0x28) goto LAB_01de84bc;
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x44);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01c9e4e4(iVar6,iVar5,0);
    if (iVar6 - 1U < 2) goto LAB_01de8354;
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244fc34(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_34,iVar4,0);
  if (*(int *)(**(int **)(_UNK_01de8568 + 0x1de8438) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0206de24(iVar3,uStack_34,uStack_30,uStack_2c,0,0,0,0);
LAB_01de84bc:
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x0210e2d4(iVar10,0);
  uVar8 = func_0x02157e88(uVar8,0);
  if (*(int *)(**(int **)(_UNK_01de856c + 0x1de84ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01995228(iVar10,uVar8,0);
  return;
}



// ===== FAT.BoardViewManager$$_OnCollectTapBonus RVA 0x1dd86a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de86a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_01de8900 + 0x1de86bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8904 + 0x1de86d0));
    func_0x01384978(*(undefined4 *)(_UNK_01de8908 + 0x1de86dc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f04,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(param_2 + 8);
    iVar1 = func_0x0214cf60(param_2,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0210cd28(iVar5,0);
    if (iVar2 == 0) {
      if (iVar1 != 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,iVar1,0);
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x74);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01f09134(iVar2,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_2c,iVar5,0);
      uVar3 = uStack_28;
      uVar6 = uStack_2c;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01dfb6c4(iVar2,uVar6,uVar3,0);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
      }
      if (iVar1 != 0 && iVar2 != 0x28) {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_2c,iVar5,0);
        FUN_01de41a4(&uStack_2c,param_1,uStack_2c,uStack_28);
        if (*(int *)(**(int **)(_UNK_01de890c + 0x1de8828) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uStack_40 = 0x15;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        func_0x02072a58(iVar1,uStack_2c,uStack_28,uStack_24);
      }
    }
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    uVar6 = func_0x0210e2d4(iVar5,0);
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(**(int **)(_UNK_01de8910 + 0x1de88d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199539c(uVar6,uVar3,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x5f04,0);
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
  func_0x01485278(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.BoardViewManager$$_CdItemNum RVA 0x1dd8914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01de8914(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01de8a28 + 0x1de8928);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8a2c + 0x1de893c));
    func_0x01384978(*(undefined4 *)(_UNK_01de8a30 + 0x1de8948));
    func_0x01384978(*(undefined4 *)(_UNK_01de8a34 + 0x1de8954));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f1c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f1c,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x0245498c(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01de8a38 + 0x1de89ac));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01de8a3c + 0x1de89d8);
  iVar5 = *(int *)(param_1 + 0x7c);
  *(undefined4 *)(iVar1 + 8) = 0;
  uVar6 = func_0x01384be4(*puVar2);
  func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_01de8a40 + 0x1de89fc),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar5,uVar6,0);
  return *(undefined4 *)(iVar1 + 8);
}



// ===== FAT.BoardViewManager.<>c__DisplayClass188_0$$.ctor RVA 0x1dd8a44 =====

void FUN_01de8a44(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardViewManager$$_OnUseTimeSkipper RVA 0x1dd8a4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de8a4c(int param_1,int param_2)

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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01de8b98 + 0x1de8a68);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8b9c + 0x1de8a7c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f1b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f1b,0);
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
    func_0x01485278(&uStack_38,param_2,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0210e2d4(param_2,0);
  uVar5 = func_0x02157e88(uVar5,0);
  uVar2 = FUN_01de8914(param_1);
  if (*(int *)(**(int **)(_UNK_01de8ba0 + 0x1de8b0c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x019967a4(param_2,uVar5,uVar2,0);
  iVar1 = *(int *)(param_1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01f09134(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_20,param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dfc4fc(iVar1,uStack_20,uStack_1c,0);
  return;
}



// ===== FAT.BoardViewManager$$_OnUseTimeScaleSource RVA 0x1dd8ba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de8ba4(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_01de8c84 + 0x1de8bbc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8c88 + 0x1de8bd0));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x5f22,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0210e2d4(param_2,0);
    uVar8 = func_0x02157e88(uVar8,0);
    uVar5 = FUN_01de8914(param_1);
    if (*(int *)(**(int **)(_UNK_01de8c8c + 0x1de8c5c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar7 = (char *)(_UNK_01996a38 + 0x199695c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01996a3c + 0x1996970),uVar8,uVar5,0);
      func_0x01384978(*(undefined4 *)(_UNK_01996a40 + 0x199697c));
      *pcVar7 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x89a,0);
    if (iVar3 != 0) {
      iVar3 = func_0x0229f13c(0x89a,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02179a68(iVar3,param_2,uVar8,uVar5);
      return;
    }
    if (*(int *)(**(int **)(_UNK_01996a44 + 0x19969e4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x02f74dec(**(undefined4 **)(_UNK_01996a48 + 0x1996a00));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x01996a4c(iVar3,param_2,uVar8,uVar5);
    pcVar7 = (char *)(_UNK_01993228 + 0x19930f0);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0199322c + 0x1993104));
      func_0x01384978(*(undefined4 *)(_UNK_01993230 + 0x1993110));
      *pcVar7 = '\x01';
    }
    iVar3 = func_0x0229f06c(0x27,0);
    if (iVar3 == 0) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar3 = *piVar2;
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_01993234 + 0x1993174) + 0xb8);
      if ((uVar4 <= *(byte *)(iVar3 + 0xb8)) &&
         (*(int *)(*(int *)(iVar3 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_01993234 + 0x1993174))
         ) {
        (**(code **)(iVar3 + 0xe0))(piVar2,*(undefined4 *)(iVar3 + 0xe4));
      }
      piVar1 = (int *)func_0x02450044(piVar2,0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      param_1 = (int *)(**(code **)(*piVar1 + 0x100))(piVar1,*(undefined4 *)(*piVar1 + 0x104));
      param_2 = func_0x02450054(piVar2,0);
      if (*(int *)(**(int **)(_UNK_01993238 + 0x1993204) + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar7 = (char *)(_UNK_01998f20 + 0x1998e0c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01998f24 + 0x1998e20));
        func_0x01384978(*(undefined4 *)(_UNK_01998f28 + 0x1998e2c));
        func_0x01384978(*(undefined4 *)(_UNK_01998f2c + 0x1998e38));
        *pcVar7 = '\x01';
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
            iVar6 = func_0x0229f06c(0x2b,0,param_2,0);
            if (iVar6 == 0) {
              iVar6 = func_0x020a3acc(iVar3,0,param_1,param_2);
              if (iVar6 == 0) {
                piVar2 = *(int **)(iVar3 + 0x24);
                if (piVar2 == (int *)0x0) {
                  func_0x01384bf0();
                }
                    /* WARNING: Could not recover jumptable at 0x020a3d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*piVar2 + 0x1e8))
                          (piVar2,param_1,param_2,*(undefined4 *)(*piVar2 + 0x1ec));
                return;
              }
            }
            else {
              iVar6 = func_0x0229f13c(0x2b,0);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              uStack_20 = 0;
              func_0x02174858(iVar6,iVar3,param_1,param_2);
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
      param_2 = 0;
      param_1 = piVar2;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x5f22,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
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
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.BoardViewManager$$_OnJumpCDBegin RVA 0x1dd8c90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de8c90(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar8 = (char *)(_UNK_01de8efc + 0x1de8cb4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de8f00 + 0x1de8cc8));
    *pcVar8 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x5f24,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5f24,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar4 + 8);
    uVar10 = *(undefined4 *)(iVar4 + 0xc);
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar4 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    return;
  }
  iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_01de8f04 + 0x1de8d30));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar10 = func_0x0210e5f4(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = FUN_01de25b0(iVar4,uVar10);
  if (iVar4 == 0) {
    func_0x01384bf0();
    func_0x0229ff30(0,0);
    func_0x01384bf0();
  }
  else {
    func_0x0229ff30(iVar4,0);
  }
  iVar4 = func_0x022a03b4(iVar4,0);
  uVar10 = _UNK_01de8ef4;
  if (iVar4 != 0) {
    uVar10 = _UNK_01de8ef8;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (0 < iVar4) {
    iVar9 = 0;
    iVar5 = *(int *)(param_1 + 0xc);
    iStack_44 = param_2;
    iStack_40 = param_1;
    do {
      if (0 < iVar5) {
        iVar4 = 0;
        iStack_3c = iVar9;
        do {
          iVar5 = *(int *)(param_1 + 0x7c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x020e81ec(iVar5,iVar9,iVar4,0);
          if ((iVar5 != 0) && (iVar6 = func_0x0216573c(iVar5,0), iVar6 != 0)) {
            iVar9 = *(int *)(param_1 + 0x74);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar9 = func_0x01f09134(iVar9,0);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            func_0x0210cd7c(&uStack_38,param_2,0);
            uVar2 = uStack_34;
            uVar7 = uStack_38;
            func_0x0210cd7c(&uStack_38,iVar5,0);
            uVar3 = uStack_34;
            uVar1 = uStack_38;
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            uStack_4c = 0;
            uStack_50 = uVar10;
            func_0x01dfb8f4(iVar9,uVar7,uVar2,uVar1,uVar3,iVar5);
            iVar9 = iStack_3c;
            param_1 = iStack_40;
            param_2 = iStack_44;
          }
          iVar5 = *(int *)(param_1 + 0xc);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
        iVar4 = *(int *)(param_1 + 8);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnJumpCDEnd RVA 0x1dd8f08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de8f08(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01de9088 + 0x1de8f1c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de908c + 0x1de8f30));
    func_0x01384978(*(undefined4 *)(_UNK_01de9090 + 0x1de8f3c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f2d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f2d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_01de9094 + 0x1de8fa8);
    piVar9 = *(int **)(_UNK_01de9098 + 0x1de8fb0);
    do {
      if (0 < iVar5) {
        iVar1 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x7c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x020e81ec(iVar5,iVar7,iVar1,0);
          if (iVar5 != 0) {
            iVar2 = func_0x03668dfc(*puVar8);
            uVar6 = func_0x0210e5f4(iVar5,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar5 = FUN_01de25b0(iVar2,uVar6);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x0145b1cc(iVar5,0,0);
            if (iVar2 != 0) {
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x0229ff30(iVar5,0);
            }
          }
          iVar5 = *(int *)(param_1 + 0xc);
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar5);
        iVar1 = *(int *)(param_1 + 8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnTokenMultiBegin RVA 0x1dd909c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de909c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  pcVar11 = (char *)(_UNK_01de93b0 + 0x1de90c0);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de93b4 + 0x1de90d4));
    func_0x01384978(*(undefined4 *)(_UNK_01de93b8 + 0x1de90e0));
    *pcVar11 = '\x01';
  }
  iStack_34 = 0;
  iVar5 = func_0x0229f06c(0x5f2f,0);
  if (iVar5 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02feb690(param_2,&iStack_34,0,**(undefined4 **)(_UNK_01de93bc + 0x1de9158));
    if (iVar5 != 0) {
      iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01de93c0 + 0x1de9174));
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x0210e5f4(param_2,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = FUN_01de25b0(iVar5,uVar6);
      if (iVar5 == 0) {
        func_0x01384bf0();
        func_0x0229ff94(0,0);
        func_0x01384bf0();
      }
      else {
        func_0x0229ff94(iVar5,0);
      }
      iVar7 = func_0x022a03b4(iVar5,0);
      uVar6 = _UNK_01de93a8;
      if (iVar7 != 0) {
        uVar6 = _UNK_01de93ac;
      }
      iVar7 = *(int *)(param_1 + 0x74);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x01f09134(iVar7,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x01dfc2e8(iVar7,iVar5,uVar6,0);
      iVar5 = iStack_34;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x02137b5c(iVar5,0);
      iVar5 = *(int *)(param_1 + 8);
      if (0 < iVar5) {
        iVar7 = *(int *)(param_1 + 0xc);
        iVar10 = 0;
        do {
          if (0 < iVar7) {
            iVar5 = 0;
            do {
              iVar7 = *(int *)(param_1 + 0x7c);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              iVar7 = func_0x020e81ec(iVar7,iVar10,iVar5,0);
              if ((iVar7 != 0) && (iVar9 = func_0x02165844(iStack_34,iVar7,0), iVar9 != 0)) {
                iVar9 = *(int *)(param_1 + 0x74);
                if (iVar9 == 0) {
                  func_0x01384bf0();
                }
                iVar9 = func_0x01f09134(iVar9,0);
                if (param_2 == 0) {
                  func_0x01384bf0();
                }
                func_0x0210cd7c(&uStack_3c,param_2,0);
                uVar3 = uStack_38;
                uVar1 = uStack_3c;
                func_0x0210cd7c(&uStack_3c,iVar7,0);
                uVar4 = uStack_38;
                uVar2 = uStack_3c;
                if (iVar9 == 0) {
                  func_0x01384bf0();
                }
                func_0x01dfbd70(iVar9,uVar1,uVar3,uVar2,uVar4,iVar7,uVar6,uVar8,0);
              }
              iVar7 = *(int *)(param_1 + 0xc);
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar7);
            iVar5 = *(int *)(param_1 + 8);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar5);
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x5f2f,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar5,param_1,param_2,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnTokenMultiEnd RVA 0x1dd93c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de93c4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01de9564 + 0x1de93d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9568 + 0x1de93ec));
    func_0x01384978(*(undefined4 *)(_UNK_01de956c + 0x1de93f8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f41,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f41,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar7 = 0;
    puVar8 = *(undefined4 **)(_UNK_01de9570 + 0x1de9464);
    piVar9 = *(int **)(_UNK_01de9574 + 0x1de946c);
    do {
      if (0 < iVar5) {
        iVar1 = 0;
        do {
          iVar5 = *(int *)(param_1 + 0x7c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x020e81ec(iVar5,iVar7,iVar1,0);
          if (iVar5 != 0) {
            iVar2 = func_0x03668dfc(*puVar8);
            uVar6 = func_0x0210e5f4(iVar5,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar5 = FUN_01de25b0(iVar2,uVar6);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x0145b1cc(iVar5,0,0);
            if (iVar2 != 0) {
              if (iVar5 == 0) {
                func_0x01384bf0();
                func_0x0229ff94(0,0);
                func_0x01384bf0();
              }
              else {
                func_0x0229ff94(iVar5,0);
              }
              func_0x022a005c(iVar5,0);
            }
          }
          iVar5 = *(int *)(param_1 + 0xc);
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar5);
        iVar1 = *(int *)(param_1 + 8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}



// ===== FAT.BoardViewManager$$Guide_OverrideDraggableItemBehaviour RVA 0x1dd9578 =====

void FUN_01de9578(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9313,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x68) = param_2;
    *(undefined4 *)(param_1 + 0x6c) = param_3;
    *(undefined4 *)(param_1 + 0x70) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x9313,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02268790(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnMessageFocused RVA 0x1dd95f4 =====

/* WARNING: Possible PIC construction at 0x02145e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02145e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de95f4(int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 unaff_r4;
  char *unaff_r5;
  uint uVar10;
  int iVar11;
  int unaff_r6;
  undefined4 uVar12;
  undefined4 unaff_r7;
  uint *puVar13;
  undefined4 unaff_r8;
  int *piVar14;
  uint unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar15;
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
  int iStack_24;
  
  iVar2 = func_0x0229f06c(0x5f47,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f47,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar9,0,0);
    return;
  }
  uVar6 = (int)param_2 * 1000;
  if (param_2 == _UNK_01de9678) {
    uVar6 = 0;
  }
  iVar2 = func_0x0229f06c(0x5e41,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x78);
    if (param_1 == 0) {
      return;
    }
    unaff_r5 = (char *)(_UNK_0214622c + 0x2145de0);
    if (*unaff_r5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02146230 + 0x2145df4),uVar6,0);
      func_0x01384978(*(undefined4 *)(_UNK_02146234 + 0x2145e00));
      func_0x01384978(*(undefined4 *)(_UNK_02146238 + 0x2145e0c));
      func_0x01384978(*(undefined4 *)(_UNK_0214623c + 0x2145e18));
      func_0x01384978(*(undefined4 *)(_UNK_02146240 + 0x2145e24));
      func_0x01384978(*(undefined4 *)(_UNK_02146244 + 0x2145e30));
      func_0x01384978(*(undefined4 *)(_UNK_02146248 + 0x2145e3c));
      *unaff_r5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iVar2 = func_0x0229f06c(0x5e42,0);
    if (iVar2 == 0) {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      piVar14 = *(int **)(_UNK_0214624c + 0x2145ec4);
      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
      iVar11 = *piVar14;
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar11) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_02145f0c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar11,0);
LAB_02145f0c:
      puVar13 = (uint *)(param_1 + 0x80);
      uVar15 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      *(undefined8 *)(param_1 + 0x78) = uVar15;
      if (0 < *(int *)(param_1 + 0x8c)) {
        uVar6 = *(int *)(param_1 + 0x8c) * 1000 + uVar6;
        *(undefined4 *)(param_1 + 0x8c) = 0;
      }
      if ((int)(uint)(*puVar13 == 0) <= *(int *)(param_1 + 0x84)) {
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        iVar11 = *piVar14;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar14 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar14[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar2 + *piVar14 * 8 + 0xc0);
              goto LAB_02145fc4;
            }
            uVar7 = uVar7 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,iVar11,0);
LAB_02145fc4:
        uVar15 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        uVar7 = *puVar13;
        iVar2 = *(int *)(param_1 + 0x84);
        lVar1 = (ulonglong)uVar7 * 0xfffffc18;
        uVar10 = (uint)lVar1;
        uVar5 = uVar10 + (uint)uVar15;
        *puVar13 = 0;
        *(undefined4 *)(param_1 + 0x84) = 0;
        iVar11 = iVar2 * -1000 + ((int)((ulonglong)lVar1 >> 0x20) - uVar7) +
                 (int)((ulonglong)uVar15 >> 0x20) + (uint)CARRY4(uVar10,(uint)uVar15);
        iVar2 = ((int)uVar6 >> 0x1f) + iVar11 + (uint)CARRY4(uVar6,uVar5);
        uVar7 = uVar6 + uVar5;
        if ((int)-(iVar11 + (uint)(uVar5 != 0)) < 0 ==
            (SBORROW4(0,iVar11) != SBORROW4(-iVar11,(uint)(uVar5 != 0)))) {
          uVar7 = uVar6;
          iVar2 = (int)uVar6 >> 0x1f;
        }
        uVar6 = uVar7;
        if ((int)(uint)(uVar6 < 0x40000000) <= iVar2) {
          uVar6 = 0x3fffffff;
        }
      }
      iVar2 = *(int *)(param_1 + 0x4c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x020ed918(iVar2,uVar6,0);
      iVar2 = *(int *)(param_1 + 0x50);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02114958(iVar2,uVar6,0);
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02146264(iVar2,uVar6);
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02139f7c(iVar2,uVar6);
      iVar2 = *(int *)(param_1 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0215eb7c(iVar2,uVar6,0);
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(param_1 + 0x70);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_30,iVar2,**(undefined4 **)(_UNK_02146250 + 0x2146108));
        puVar4 = *(undefined4 **)(_UNK_02146254 + 0x214611c);
        while (iVar11 = func_0x03f5f428(&uStack_30,*puVar4), iVar2 = iStack_24, iVar11 != 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          func_0x02117154(iVar2,0);
        }
        func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02146258 + 0x2146158));
        iVar2 = *(int *)(param_1 + 0x70);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        if (0 < iVar11) {
          func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar11,0);
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5e42,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2145e94;
    unaff_r6 = iVar2;
    unaff_r9 = uVar6;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_30;
  }
  else {
    iVar2 = func_0x0229f13c(0x5e41,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(uint *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(char **)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,uVar6,0);
  iVar11 = *(int *)(iVar2 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar11 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar11,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),uVar6,0);
  iVar11 = *(int *)(iVar2 + 8);
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = 3;
  if (iVar2 == 0) {
    uVar9 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar11,uVar12,(undefined1 *)((int)register0x00000054 + -0x38),uVar9);
  return;
}



// ===== FAT.BoardViewManager$$_OnMessageLevelChange RVA 0x1dd967c =====

void FUN_01de967c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x5f48,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f48,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x5a) = 1;
  return;
}



// ===== FAT.BoardViewManager$$_OnMessageOrderCompleted RVA 0x1dd96dc =====

void FUN_01de96dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5f49,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x5f49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$_OnMessageOrderDisplayChange RVA 0x1dd9750 =====

void FUN_01de9750(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f4a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f4a,0);
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
  *(undefined1 *)(param_1 + 0x59) = 1;
  return;
}



// ===== FAT.BoardViewManager$$_OnMessageFlyScore RVA 0x1dd97a8 =====

void FUN_01de97a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x5f4b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01489db8(param_4,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01f09134(iVar1,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_28,param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01dfa48c(iVar1,uStack_28,uStack_24,param_4,param_3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5f4b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021decdc(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.BoardViewManager$$RegisterBonusCache RVA 0x1dd989c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de989c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01de9960 + 0x1de98bc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9964 + 0x1de98d0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1647,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1647,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a8e0(iVar1,param_2,param_3,0,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01de9968 + 0x1de9950) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.BoardViewManager$$UnregisterBonusCache RVA 0x1dd996c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de996c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar12 = (char *)(_UNK_01de9a14 + 0x1de9984);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9a18 + 0x1de9998));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1648,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1648,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9a1c + 0x1de9a08);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = param_2;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar9,param_2,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03d5ba20:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03d5b6c0:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.BoardViewManager$$RegisterChestCache RVA 0x1dd9a20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de9a20(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01de9ae4 + 0x1de9a40);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9ae8 + 0x1de9a54));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a8e0(iVar1,param_2,param_3,0,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01de9aec + 0x1de9ad4) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.BoardViewManager$$UnregisterChestCache RVA 0x1dd9af0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de9af0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar12 = (char *)(_UNK_01de9b98 + 0x1de9b08);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9b9c + 0x1de9b1c));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eee,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9ba0 + 0x1de9b8c);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = param_2;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar9,param_2,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03d5ba20:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03d5b6c0:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.BoardViewManager$$RegisterAutoSourceCache RVA 0x1dd9ba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de9ba4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01de9c68 + 0x1de9bc4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9c6c + 0x1de9bd8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a8e0(iVar1,param_2,param_3,0,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01de9c70 + 0x1de9c58) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.BoardViewManager$$UnregisterAutoSourceCache RVA 0x1dd9c74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de9c74(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar12 = (char *)(_UNK_01de9d1c + 0x1de9c8c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9d20 + 0x1de9ca0));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ef0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ef0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9d24 + 0x1de9d10);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = param_2;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar9,param_2,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03d5ba20:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03d5b6c0:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.BoardViewManager$$RegisterTapSourceCache RVA 0x1dd9d28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de9d28(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01de9dec + 0x1de9d48);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9df0 + 0x1de9d5c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ef1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ef1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a8e0(iVar1,param_2,param_3,0,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01de9df4 + 0x1de9ddc) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.BoardViewManager$$UnregisterTapSourceCache RVA 0x1dd9df8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01de9df8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar7;
  int *piVar8;
  int extraout_r3;
  int extraout_r3_00;
  int *piVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar12 = (char *)(_UNK_01de9ea0 + 0x1de9e10);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de9ea4 + 0x1de9e24));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ef2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ef2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    iStack_58 = 0;
    uStack_54 = 0;
    uVar2 = func_0x0245495c(iVar10,uVar13,&uStack_38,uVar7);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = **(int **)(_UNK_01de9ea8 + 0x1de9e94);
  if (*(int *)(iVar1 + 8) != 0) {
    piVar9 = *(int **)(iVar1 + 0x20);
    iStack_30 = iVar1;
    auStack_28[0] = param_2;
    if (piVar9 == (int *)0x0) {
      uVar2 = func_0x04821a00(auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc4));
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x02457d84(iVar1);
      }
      iVar10 = *piVar9;
      uVar2 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar1) {
            puVar3 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
            goto LAB_03d5b514;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,1);
LAB_03d5b514:
      uVar2 = (*(code *)*puVar3)(piVar9,param_2,puVar3[1]);
      iVar1 = iStack_30;
    }
    uVar14 = *(uint *)(iVar1 + 8);
    uVar11 = uVar14;
    if (uVar14 == 0) {
      func_0x02457d50();
      uVar11 = *(uint *)(iStack_30 + 8);
      if (uVar11 == 0) {
        uVar15 = func_0x02457d50();
        uVar13 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar1 = (int)uVar15;
        uStack_54 = 0;
        if (*(int *)(iVar1 + 8) != 0) {
          piVar9 = *(int **)(iVar1 + 0x20);
          uStack_60 = uVar13;
          uStack_5c = uVar2;
          iStack_58 = uVar11;
          uStack_50 = uVar14;
          if (piVar9 == (int *)0x0) {
            uVar2 = func_0x04821a00(&uStack_60,
                                    *(undefined4 *)
                                     (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0xc4));
          }
          else {
            iVar10 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
              iVar10 = func_0x02457d84(iVar10);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar10) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 200);
                  goto LAB_03d5b878;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar10,1);
LAB_03d5b878:
            uVar2 = (*(code *)*puVar3)(piVar9,uVar13,puVar3[1]);
          }
          iVar4 = *(int *)(iVar1 + 8);
          iVar10 = iVar4;
          if (iVar4 == 0) {
            func_0x02457d50();
            iVar10 = *(int *)(iVar1 + 8);
            if (iVar10 == 0) {
              uVar15 = func_0x02457d50();
              uVar2 = func_0x03d5a510((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(extraout_r3_00 + 0x10) + 0x60) + 0x84));
              if ((int)uVar2 < 0) {
                uVar13 = 0;
              }
              else {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x02457d50();
                }
                if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                  func_0x02457d5c();
                }
                uVar13 = *(undefined4 *)(iVar1 + uVar2 * 0x10 + 0x1c);
              }
              *extraout_r2_00 = uVar13;
              return ~uVar2 >> 0x1f;
            }
          }
          func_0x02457e94(uVar2 & 0x7fffffff,*(undefined4 *)(iVar4 + 0xc));
          if (*(uint *)(iVar10 + 0xc) <= extraout_r1_00) {
            func_0x02457d5c();
          }
          uVar11 = *(int *)(iVar10 + extraout_r1_00 * 4 + 0x10) - 1;
          if (-1 < (int)uVar11) {
            uVar14 = 0xffffffff;
            do {
              uVar5 = uVar11;
              iVar10 = *(int *)(iVar1 + 0xc);
              if (iVar10 == 0) {
                func_0x02457d50();
              }
              if (*(uint *)(iVar10 + 0xc) <= uVar5) {
                func_0x02457d5c();
              }
              uVar13 = uStack_60;
              iVar10 = iVar10 + uVar5 * 0x10;
              if (*(uint *)(iVar10 + 0x10) == (uVar2 & 0x7fffffff)) {
                piVar9 = *(int **)(iVar1 + 0x20);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                                   (*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) +
                                                   0xc));
                  uVar13 = uStack_60;
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50(0,uVar7);
                  }
                  iVar4 = (**(code **)(*piVar9 + 0x100))
                                    (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
                }
                else {
                  uVar7 = *(undefined4 *)(iVar10 + 0x18);
                  if (piVar9 == (int *)0x0) {
                    func_0x02457d50();
                  }
                  iVar4 = *(int *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 4);
                  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
                    iVar4 = func_0x02457d84(iVar4);
                  }
                  iVar6 = *piVar9;
                  uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar11 != 0) {
                    piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == iVar4) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
                        goto LAB_03d5ba20;
                      }
                      uVar11 = uVar11 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar11 != 0);
                  }
                  puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar4,0);
LAB_03d5ba20:
                  iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
                }
                if (iVar4 != 0) {
                  if ((int)uVar14 < 0) {
                    iVar4 = *(int *)(iVar1 + 8);
                    iVar6 = *(int *)(iVar10 + 0x14);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    if (*(uint *)(iVar4 + 0xc) <= extraout_r1_00) {
                      func_0x02457d5c();
                    }
                    *(int *)(iVar4 + extraout_r1_00 * 4 + 0x10) = iVar6 + 1;
                  }
                  else {
                    iVar4 = *(int *)(iVar1 + 0xc);
                    if (iVar4 == 0) {
                      func_0x02457d50();
                    }
                    uVar13 = *(undefined4 *)(iVar10 + 0x14);
                    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                      func_0x02457d5c();
                    }
                    *(undefined4 *)(iVar4 + uVar14 * 0x10 + 0x14) = uVar13;
                  }
                  *extraout_r2 = *(undefined4 *)(iVar10 + 0x1c);
                  uVar13 = *(undefined4 *)(iVar1 + 0x14);
                  iVar4 = *(int *)(iVar1 + 0x18);
                  iVar6 = *(int *)(iVar1 + 0x1c);
                  *(uint *)(iVar10 + 0x10) = 0xffffffff;
                  *(int *)(iVar1 + 0x18) = iVar4 + 1;
                  *(int *)(iVar1 + 0x1c) = iVar6 + 1;
                  *(uint *)(iVar1 + 0x14) = uVar5;
                  *(undefined4 *)(iVar10 + 0x14) = uVar13;
                  return 1;
                }
              }
              uVar11 = *(uint *)(iVar10 + 0x14);
              uVar14 = uVar5;
            } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
          }
        }
        *extraout_r2 = 0;
        return 0;
      }
    }
    uStack_2c = uVar2 & 0x7fffffff;
    func_0x02457e94(uStack_2c,*(undefined4 *)(uVar14 + 0xc));
    if (*(uint *)(uVar11 + 0xc) <= extraout_r1) {
      func_0x02457d5c();
    }
    uVar2 = *(int *)(uVar11 + extraout_r1 * 4 + 0x10) - 1;
    if (-1 < (int)uVar2) {
      iVar1 = iStack_30;
      uVar11 = 0xffffffff;
      uStack_38 = extraout_r1;
      do {
        uVar14 = uVar2;
        iVar10 = *(int *)(iVar1 + 0xc);
        if (iVar10 == 0) {
          func_0x02457d50();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar14) {
          func_0x02457d5c();
        }
        uVar13 = auStack_28[0];
        iVar10 = iVar10 + uVar14 * 0x10;
        if (*(uint *)(iVar10 + 0x10) == uStack_2c) {
          piVar9 = *(int **)(iVar1 + 0x20);
          if (piVar9 == (int *)0x0) {
            piVar9 = (int *)func_0x02ecaf98(*(undefined4 *)
                                             (*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 0xc));
            uVar13 = auStack_28[0];
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50(0,uVar7);
            }
            iVar4 = (**(code **)(*piVar9 + 0x100))
                              (piVar9,uVar7,uVar13,*(undefined4 *)(*piVar9 + 0x104));
          }
          else {
            uVar7 = *(undefined4 *)(iVar10 + 0x18);
            if (piVar9 == (int *)0x0) {
              func_0x02457d50();
            }
            iVar1 = *(int *)(*(int *)(*(int *)(iStack_34 + 0x10) + 0x60) + 4);
            if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
              iVar1 = func_0x02457d84(iVar1);
            }
            iVar4 = *piVar9;
            uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
            if (uVar2 != 0) {
              piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar1) {
                  puVar3 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                  goto LAB_03d5b6c0;
                }
                uVar2 = uVar2 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar2 != 0);
            }
            puVar3 = (undefined4 *)func_0x02457d88(piVar9,iVar1,0);
LAB_03d5b6c0:
            iVar4 = (*(code *)*puVar3)(piVar9,uVar7,uVar13,puVar3[1]);
          }
          iVar1 = iStack_30;
          if (iVar4 != 0) {
            if ((int)uVar11 < 0) {
              iVar1 = *(int *)(iStack_30 + 8);
              iVar4 = *(int *)(iVar10 + 0x14);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar2 = uStack_38;
              if (*(uint *)(iVar1 + 0xc) <= uStack_38) {
                func_0x02457d5c();
              }
              *(int *)(iVar1 + uVar2 * 4 + 0x10) = iVar4 + 1;
            }
            else {
              iVar1 = *(int *)(iStack_30 + 0xc);
              if (iVar1 == 0) {
                func_0x02457d50();
              }
              uVar13 = *(undefined4 *)(iVar10 + 0x14);
              if (*(uint *)(iVar1 + 0xc) <= uVar11) {
                func_0x02457d5c();
              }
              *(undefined4 *)(iVar1 + uVar11 * 0x10 + 0x14) = uVar13;
            }
            *(uint *)(iVar10 + 0x10) = 0xffffffff;
            uVar13 = *(undefined4 *)(iStack_30 + 0x14);
            *(int *)(iStack_30 + 0x18) = *(int *)(iStack_30 + 0x18) + 1;
            *(uint *)(iStack_30 + 0x14) = uVar14;
            *(int *)(iStack_30 + 0x1c) = *(int *)(iStack_30 + 0x1c) + 1;
            *(undefined4 *)(iVar10 + 0x14) = uVar13;
            return 1;
          }
        }
        uVar2 = *(uint *)(iVar10 + 0x14);
        uVar11 = uVar14;
      } while (*(uint *)(iVar10 + 0x14) < 0x80000000);
    }
  }
  return 0;
}



// ===== FAT.BoardViewManager$$.ctor RVA 0x1dd9eac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01de9eac(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_01dea0e4 + 0x1de9ec0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea0e8 + 0x1de9ed4));
    func_0x01384978(*(undefined4 *)(_UNK_01dea0ec + 0x1de9ee0));
    func_0x01384978(*(undefined4 *)(_UNK_01dea0f0 + 0x1de9eec));
    func_0x01384978(*(undefined4 *)(_UNK_01dea0f4 + 0x1de9ef8));
    func_0x01384978(*(undefined4 *)(_UNK_01dea0f8 + 0x1de9f04));
    func_0x01384978(*(undefined4 *)(_UNK_01dea0fc + 0x1de9f10));
    func_0x01384978(*(undefined4 *)(_UNK_01dea100 + 0x1de9f1c));
    *pcVar5 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dea104 + 0x1de9f38));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01dea108 + 0x1de9f4c));
  puVar2 = *(undefined4 **)(_UNK_01dea10c + 0x1de9f64);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x01e27498(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_01dea110 + 0x1de9f88);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x01e28bb8(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_01dea114 + 0x1de9fa8);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  puVar6 = *(undefined4 **)(_UNK_01dea118 + 0x1de9fc0);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03d59324(uVar1,*puVar6);
  iVar4 = _UNK_01dea11c;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if (*(char *)(iVar4 + 0x1dea07c) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea120 + 0x1dea090));
    *(char *)(iVar4 + 0x1dea07c) = '\x01';
  }
  iVar4 = **(int **)(_UNK_01dea124 + 0x1dea0a4);
  puVar2 = *(undefined4 **)(iVar4 + 0x5c);
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x90) = *puVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  puVar2 = *(undefined4 **)(iVar4 + 0x5c);
  uVar1 = puVar2[1];
  *(undefined4 *)(param_1 + 0x98) = *puVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  return param_1;
}



// ===== FAT.BoardViewManager$$<_Setup_Filter_Feed>g___CanUse|106_0 RVA 0x1dda12c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dea12c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    pcVar4 = (char *)(_UNK_02166440 + 0x2166328);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02166444 + 0x216633c),param_2,0);
      *pcVar4 = '\x01';
    }
    uVar5 = 0;
    iStack_14 = 0;
    iVar2 = func_0x0229f06c(0x9e60,0);
    if (iVar2 == 0) {
      if (((iVar1 != param_2) && (iVar2 = func_0x0216545c(iVar1), iVar2 != 0)) &&
         (iVar2 = func_0x0216545c(param_2), iVar2 != 0)) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 0;
        iVar3 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_02166448 + 0x21663e4));
        iVar2 = iStack_14;
        if (iVar3 != 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x0210e2d4(iVar1,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x0212b3bc(iVar2,uVar5,0);
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x9e60,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x021734d8(iVar2,iVar1,param_2,0);
    }
    return uVar5;
  }
  return 0;
}



// ===== FAT.BoardViewManager$$<_Setup_Filter_Feed>g___Ignore|106_1 RVA 0x1dda144 =====

undefined4 FUN_01dea144(void)

{
  return 1;
}



// ===== FAT.BoardViewManager$$<_Setup_Filter_Skill_Default>g___CanUse|107_0 RVA 0x1dda14c =====

undefined4 FUN_01dea14c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_10 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_18 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x021669e4(*(int *)(param_1 + 0x20),param_2,&uStack_18,0);
  }
  return uVar1;
}



// ===== FAT.BoardViewManager$$<_Setup_Filter_Skill_Default>g___Ignore|107_1 RVA 0x1dda188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dea188(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int aiStack_24 [3];
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0210e5f4(param_2,0);
    iVar5 = *(int *)(param_1 + 0x20);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0210e5f4(iVar5,0);
    if (iVar1 != iVar5) {
      iVar1 = *(int *)(param_1 + 0x7c);
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x020e8e2c(iVar1,uVar3,param_2,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x20);
        pcVar4 = (char *)(_UNK_02164a38 + 0x21646bc);
        if (*pcVar4 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02164a3c + 0x21646d0),param_2,0);
          *pcVar4 = '\x01';
        }
        uVar3 = 0;
        aiStack_24[0] = 0;
        iStack_28 = 0;
        iVar5 = func_0x0229f06c(0x9e5b,0);
        if (iVar5 == 0) {
          if (iVar1 != param_2) {
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar3 = 0;
            iVar5 = func_0x0210e2d4(iVar1,0);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0210e2d4(param_2,0);
            if (iVar5 == iVar2) {
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar3 = 0;
              iVar5 = func_0x02116a8c(iVar1,0);
              if (iVar5 == 0) {
                if (param_2 == 0) {
                  func_0x01384bf0();
                }
                uVar3 = 0;
                iVar5 = func_0x02116a8c(param_2,0);
                if (iVar5 == 0) {
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  uVar3 = 0;
                  iVar5 = func_0x02116ae0(iVar1,0);
                  if (iVar5 != 0) {
                    if (param_2 == 0) {
                      func_0x01384bf0();
                      iVar5 = func_0x02116ae0(0,0);
                      if (iVar5 == 0) {
                        return 0;
                      }
                      func_0x01384bf0();
                      iVar5 = func_0x0211015c(0,0);
                      if (iVar5 != 0) {
                        return 0;
                      }
                      func_0x01384bf0();
                    }
                    else {
                      iVar5 = func_0x02116ae0(param_2,0);
                      if (iVar5 == 0) {
                        return 0;
                      }
                      iVar5 = func_0x0211015c(param_2,0);
                      if (iVar5 != 0) {
                        return 0;
                      }
                    }
                    uVar3 = 0;
                    iVar5 = func_0x02116b64(param_2,0);
                    if (iVar5 == 0) {
                      if (iVar1 == 0) {
                        func_0x01384bf0();
                      }
                      uVar3 = 0;
                      iVar5 = func_0x0210e250(iVar1,6,0,0);
                      if (iVar5 == 0) {
                        if (param_2 == 0) {
                          func_0x01384bf0();
                          iVar5 = func_0x0210e250(0,6,0,0);
                          if (iVar5 != 0) {
                            return 0;
                          }
                          func_0x01384bf0();
                          iVar5 = func_0x0210cd28(0,0);
                          func_0x01384bf0();
                        }
                        else {
                          iVar5 = func_0x0210e250(param_2,6,0,0);
                          if (iVar5 != 0) {
                            return 0;
                          }
                          iVar5 = func_0x0210cd28(param_2,0);
                        }
                        func_0x0210cd7c(&uStack_30,param_2,0);
                        if (param_2 == 0) {
                          func_0x01384bf0();
                        }
                        uVar3 = 0;
                        func_0x0210cd7c(&uStack_30,param_2,0);
                        if (iVar5 == 0) {
                          func_0x01384bf0();
                        }
                        iVar5 = func_0x020dbcf8(iVar5,uStack_30,uStack_2c,0);
                        if (iVar5 < 1) {
                          if (iVar1 == 0) {
                            func_0x01384bf0();
                          }
                          uVar3 = 0;
                          puVar6 = *(undefined4 **)(_UNK_02164a40 + 0x21649a0);
                          func_0x02feb690(iVar1,aiStack_24,0,*puVar6);
                          if (param_2 == 0) {
                            func_0x01384bf0();
                          }
                          func_0x02feb690(param_2,&iStack_28,0,*puVar6);
                          iVar1 = extraout_r1;
                          if (aiStack_24[0] != 0) {
                            iVar1 = iStack_28;
                          }
                          if (aiStack_24[0] != 0 && iVar1 != 0) {
                            uVar3 = 0;
                            iVar5 = func_0x0212f4e4(aiStack_24[0],0);
                            iVar1 = iStack_28;
                            if (iStack_28 == 0) {
                              func_0x01384bf0();
                            }
                            iVar2 = func_0x0212f4e4(iVar1,0);
                            iVar1 = aiStack_24[0];
                            if (iVar5 == iVar2) {
                              if (aiStack_24[0] == 0) {
                                func_0x01384bf0();
                              }
                              uVar3 = func_0x02132bec(iVar1,0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          iVar5 = func_0x0229f13c(0x9e5b,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x021734d8(iVar5,iVar1,param_2,0);
        }
        return uVar3;
      }
    }
  }
  return 1;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass148_0$$<FindItem>b__0 RVA 0x1dda22c =====

void FUN_01dea22c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 8) == '\0') {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0210e2d4(param_2,0);
    if (iVar2 == *(int *)(param_1 + 0xc)) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar2 = func_0x02116ae0(0,0);
        if (iVar2 == 0) {
          return;
        }
        bVar1 = *(byte *)(param_1 + 0x10);
        func_0x01384bf0();
      }
      else {
        iVar2 = func_0x02116ae0(param_2,0);
        if (iVar2 == 0) {
          return;
        }
        bVar1 = *(byte *)(param_1 + 0x10);
      }
      uVar3 = func_0x0210e250(param_2,6,0,0);
      if (bVar1 == uVar3) {
        *(int *)(param_1 + 0x14) = param_2;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      return;
    }
  }
  return;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass149_0$$<FindBoostItem>b__0 RVA 0x1dda2d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dea2d8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_01dea404 + 0x1dea2f0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dea408 + 0x1dea304));
    *pcVar8 = '\x01';
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02116ae0(param_2,0);
  if (iVar1 != 0) {
    piVar2 = (int *)func_0x021566f4(0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(param_2,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01dea40c + 0x1dea37c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x110);
          goto LAB_01dea3c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01dea40c + 0x1dea37c),10);
LAB_01dea3c4:
    iVar5 = (*(code *)*puVar4)(piVar2,uVar3,puVar4[1]);
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar5 + 0x20);
    }
    if (iVar5 != 0 && iVar1 != 0) {
      if (*(char *)(iVar1 + 0x2e) != '\0') {
        *(int *)(param_1 + 0xc) = param_2;
        *(undefined1 *)(param_1 + 8) = 1;
      }
      return;
    }
  }
  return;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass188_0$$<_CdItemNum>b__0 RVA 0x1dda410 =====

void FUN_01dea410(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return;
    }
  }
  iVar1 = func_0x0210e250(param_2,2,1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0216ef48(param_2,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass97_0$$<OnEndDrag>b__0 RVA 0x1dda494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dea494(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_28 [4];
  
  iVar14 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 0xc);
  iVar15 = *(int *)(param_1 + 0x14);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  pcVar16 = (char *)(_UNK_01de254c + 0x1de1d30);
  if (*pcVar16 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de2550 + 0x1de1d44));
    func_0x01384978(*(undefined4 *)(_UNK_01de2554 + 0x1de1d50));
    func_0x01384978(*(undefined4 *)(_UNK_01de2558 + 0x1de1d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01de255c + 0x1de1d68));
    func_0x01384978(*(undefined4 *)(_UNK_01de2560 + 0x1de1d74));
    func_0x01384978(*(undefined4 *)(_UNK_01de2564 + 0x1de1d80));
    func_0x01384978(*(undefined4 *)(_UNK_01de2568 + 0x1de1d8c));
    func_0x01384978(*(undefined4 *)(_UNK_01de256c + 0x1de1d98));
    func_0x01384978(*(undefined4 *)(_UNK_01de2570 + 0x1de1da4));
    func_0x01384978(*(undefined4 *)(_UNK_01de2574 + 0x1de1db0));
    func_0x01384978(*(undefined4 *)(_UNK_01de2578 + 0x1de1dbc));
    *pcVar16 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x0229f06c(0x9e7f,0);
  if (iVar1 == 0) {
    if ((((iVar15 != 0) && (iVar1 = func_0x0210cd28(iVar15,0), iVar13 != 0 && iVar1 != 0)) &&
        (iVar1 = func_0x0210cd28(iVar13,0), iVar1 != 0)) &&
       (iVar2 = func_0x02feb690(iVar15,aiStack_28,0,**(undefined4 **)(_UNK_01de257c + 0x1de1e6c)),
       iVar1 = aiStack_28[0], iVar2 != 0)) {
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02132670(iVar1,0);
      func_0x0210cd7c(&uStack_38,iVar13,0);
      uVar7 = uStack_34;
      uVar5 = uStack_38;
      iVar2 = func_0x02166ad4(iVar15,iVar13,0);
      iVar1 = aiStack_28[0];
      if (iVar2 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0212f4e4(iVar1,0);
        iVar1 = aiStack_28[0];
        if (iVar2 == 3) {
          piVar4 = (int *)func_0x021566f4(0);
          uVar5 = func_0x0210e2d4(iVar13,0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar4;
          uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01de2580 + 0x1de1f28)) {
                puVar6 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x118);
                goto LAB_01de214c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01de2580 + 0x1de1f28),0xb);
LAB_01de214c:
          iVar1 = (*(code *)*puVar6)(piVar4,uVar5,puVar6[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar1 + 0x44);
          uVar5 = func_0x0210e2d4(iVar13,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0364c54c(iVar2,uVar5,**(undefined4 **)(_UNK_01de2584 + 0x1de21a0));
          if (iVar2 < 1) {
            uVar5 = 0xffffffff;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0x44);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar5 = func_0x0364c9b8(iVar1,iVar2 + -1,**(undefined4 **)(_UNK_01de2588 + 0x1de21d4));
          }
          uVar7 = func_0x0210e2d4(iVar13,0);
          uVar7 = func_0x02157e88(uVar7,0);
          uVar3 = func_0x0210e2d4(iVar15,0);
          iVar1 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x021328ac(iVar1,0);
          if (*(int *)(**(int **)(_UNK_01de258c + 0x1de2240) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01996fbc(iVar13,uVar7,uVar3,uVar8,uVar5,0);
        }
        else {
          if (aiStack_28[0] == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0212f4e4(iVar1,0);
          iVar1 = aiStack_28[0];
          if (iVar2 == 9) {
            func_0x0210cd7c(&uStack_38,iVar13,0);
            FUN_01de2d7c(&uStack_38,iVar14,uStack_38,uStack_34);
            uVar7 = uStack_34;
            uVar5 = uStack_38;
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar1 + 0x10);
            piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de2590 + 0x1de1fe8),1);
            iVar1 = aiStack_28[0];
            if (aiStack_28[0] == 0) {
              func_0x01384bf0();
            }
            piVar11 = (int *)func_0x02132544(iVar1,0);
            if (piVar11 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar11;
            uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar12[-1] == **(int **)(_UNK_01de2594 + 0x1de2030)) {
                  puVar6 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
                  goto LAB_01de2340;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 2;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01de2594 + 0x1de2030),0);
LAB_01de2340:
            uStack_38 = (*(code *)*puVar6)(piVar11,0,puVar6[1]);
            iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01de2598 + 0x1de2360),&uStack_38);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar1 != 0) &&
               (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar9 == 0)) {
              uVar3 = func_0x01384c10();
              func_0x01384aa0(uVar3,0);
            }
            if (piVar4[3] == 0) {
              func_0x01384bf4();
            }
            piVar4[4] = iVar1;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01ca1770(iVar2,0x46,uVar5,uVar7,uStack_30,piVar4,0);
            uVar5 = func_0x0210e2d4(iVar15,0);
            uVar7 = func_0x0210e2d4(iVar13,0);
            func_0x0199f3dc(uVar5,uVar7,0);
          }
          else {
            if (aiStack_28[0] == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0212f4e4(iVar1,0);
            iVar1 = aiStack_28[0];
            if (iVar2 == 7) {
              iVar1 = *(int *)(iVar14 + 0x7c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x020e81ec(iVar1,uVar5,uVar7,0);
              if (iVar1 != 0) {
                uVar5 = func_0x0210e2d4(iVar1,0);
                uVar5 = func_0x02157e88(uVar5,0);
                uVar7 = func_0x0210e2d4(iVar15,0);
                iVar2 = aiStack_28[0];
                if (aiStack_28[0] == 0) {
                  func_0x01384bf0();
                }
                uVar3 = func_0x021328ac(iVar2,0);
                if (*(int *)(**(int **)(_UNK_01de259c + 0x1de2110) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x01997360(iVar1,uVar5,uVar7,uVar3,0);
              }
            }
            else {
              if (aiStack_28[0] == 0) {
                func_0x01384bf0();
              }
              uVar5 = 0;
              iVar1 = func_0x0212f4e4(iVar1,0);
              if (iVar1 == 8) {
                uVar7 = func_0x0210e2d4(iVar13,0);
                uVar7 = func_0x02157e88(uVar7,0);
                uVar8 = func_0x0210e2d4(iVar15,0);
                iVar2 = func_0x02116a8c(iVar15,0);
                iVar1 = aiStack_28[0];
                if (iVar2 == 0) {
                  if (aiStack_28[0] == 0) {
                    func_0x01384bf0();
                  }
                  uVar5 = func_0x02132670(iVar1,0);
                }
                if (*(int *)(**(int **)(_UNK_01de25a0 + 0x1de2300) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x0199719c(iVar13,uVar7,uVar8,uVar3,uVar5,0);
              }
            }
          }
        }
        iVar1 = func_0x02116a8c(iVar15,0);
        if (iVar1 == 0) {
          iVar13 = *(int *)(iVar14 + 0x74);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar13 = func_0x01f090e0(iVar13,0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          func_0x01e01ff4(iVar13,iVar15,0);
          func_0x0210cd7c(&uStack_38,iVar15,0);
          uVar5 = uStack_38;
          func_0x0210cd7c(&uStack_38,iVar15,0);
        }
        else {
          func_0x0210cd7c(&uStack_38,iVar13,0);
          uVar5 = uStack_38;
          func_0x0210cd7c(&uStack_38,iVar13,0);
        }
        FUN_01ddff5c(iVar14,uVar5,uStack_34);
        if (*(int *)(**(int **)(_UNK_01de25a4 + 0x1de24dc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar14 = func_0x0300d558(**(undefined4 **)(_UNK_01de25a8 + 0x1de24f8));
        iVar13 = aiStack_28[0];
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0212f4e4(iVar13,0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        func_0x034a2298(iVar14,iVar15,uVar5,**(undefined4 **)(_UNK_01de25ac + 0x1de2540));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,iVar14,iVar15,iVar13,0);
  }
  return;
}



// ===== FAT.BoardViewManager.<>c__DisplayClass97_0$$<OnEndDrag>b__1 RVA 0x1dda4c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dea4c4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int aiStack_28 [4];
  
  iVar14 = *(int *)(param_1 + 8);
  iVar13 = *(int *)(param_1 + 0xc);
  iVar15 = *(int *)(param_1 + 0x14);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  pcVar16 = (char *)(_UNK_01de254c + 0x1de1d30);
  if (*pcVar16 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01de2550 + 0x1de1d44));
    func_0x01384978(*(undefined4 *)(_UNK_01de2554 + 0x1de1d50));
    func_0x01384978(*(undefined4 *)(_UNK_01de2558 + 0x1de1d5c));
    func_0x01384978(*(undefined4 *)(_UNK_01de255c + 0x1de1d68));
    func_0x01384978(*(undefined4 *)(_UNK_01de2560 + 0x1de1d74));
    func_0x01384978(*(undefined4 *)(_UNK_01de2564 + 0x1de1d80));
    func_0x01384978(*(undefined4 *)(_UNK_01de2568 + 0x1de1d8c));
    func_0x01384978(*(undefined4 *)(_UNK_01de256c + 0x1de1d98));
    func_0x01384978(*(undefined4 *)(_UNK_01de2570 + 0x1de1da4));
    func_0x01384978(*(undefined4 *)(_UNK_01de2574 + 0x1de1db0));
    func_0x01384978(*(undefined4 *)(_UNK_01de2578 + 0x1de1dbc));
    *pcVar16 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x0229f06c(0x9e7f,0);
  if (iVar1 == 0) {
    if ((((iVar15 != 0) && (iVar1 = func_0x0210cd28(iVar15,0), iVar13 != 0 && iVar1 != 0)) &&
        (iVar1 = func_0x0210cd28(iVar13,0), iVar1 != 0)) &&
       (iVar2 = func_0x02feb690(iVar15,aiStack_28,0,**(undefined4 **)(_UNK_01de257c + 0x1de1e6c)),
       iVar1 = aiStack_28[0], iVar2 != 0)) {
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02132670(iVar1,0);
      func_0x0210cd7c(&uStack_38,iVar13,0);
      uVar7 = uStack_34;
      uVar5 = uStack_38;
      iVar2 = func_0x02166ad4(iVar15,iVar13,0);
      iVar1 = aiStack_28[0];
      if (iVar2 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0212f4e4(iVar1,0);
        iVar1 = aiStack_28[0];
        if (iVar2 == 3) {
          piVar4 = (int *)func_0x021566f4(0);
          uVar5 = func_0x0210e2d4(iVar13,0);
          if (piVar4 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar4;
          uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar11[-1] == **(int **)(_UNK_01de2580 + 0x1de1f28)) {
                puVar6 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x118);
                goto LAB_01de214c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 2;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01de2580 + 0x1de1f28),0xb);
LAB_01de214c:
          iVar1 = (*(code *)*puVar6)(piVar4,uVar5,puVar6[1]);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar1 + 0x44);
          uVar5 = func_0x0210e2d4(iVar13,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0364c54c(iVar2,uVar5,**(undefined4 **)(_UNK_01de2584 + 0x1de21a0));
          if (iVar2 < 1) {
            uVar5 = 0xffffffff;
          }
          else {
            iVar1 = *(int *)(iVar1 + 0x44);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar5 = func_0x0364c9b8(iVar1,iVar2 + -1,**(undefined4 **)(_UNK_01de2588 + 0x1de21d4));
          }
          uVar7 = func_0x0210e2d4(iVar13,0);
          uVar7 = func_0x02157e88(uVar7,0);
          uVar3 = func_0x0210e2d4(iVar15,0);
          iVar1 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x01384bf0();
          }
          uVar8 = func_0x021328ac(iVar1,0);
          if (*(int *)(**(int **)(_UNK_01de258c + 0x1de2240) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01996fbc(iVar13,uVar7,uVar3,uVar8,uVar5,0);
        }
        else {
          if (aiStack_28[0] == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x0212f4e4(iVar1,0);
          iVar1 = aiStack_28[0];
          if (iVar2 == 9) {
            func_0x0210cd7c(&uStack_38,iVar13,0);
            FUN_01de2d7c(&uStack_38,iVar14,uStack_38,uStack_34);
            uVar7 = uStack_34;
            uVar5 = uStack_38;
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar1 + 0x10);
            piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01de2590 + 0x1de1fe8),1);
            iVar1 = aiStack_28[0];
            if (aiStack_28[0] == 0) {
              func_0x01384bf0();
            }
            piVar11 = (int *)func_0x02132544(iVar1,0);
            if (piVar11 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar11;
            uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar12[-1] == **(int **)(_UNK_01de2594 + 0x1de2030)) {
                  puVar6 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
                  goto LAB_01de2340;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 2;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_01de2594 + 0x1de2030),0);
LAB_01de2340:
            uStack_38 = (*(code *)*puVar6)(piVar11,0,puVar6[1]);
            iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_01de2598 + 0x1de2360),&uStack_38);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar1 != 0) &&
               (iVar9 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar9 == 0)) {
              uVar3 = func_0x01384c10();
              func_0x01384aa0(uVar3,0);
            }
            if (piVar4[3] == 0) {
              func_0x01384bf4();
            }
            piVar4[4] = iVar1;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x01ca1770(iVar2,0x46,uVar5,uVar7,uStack_30,piVar4,0);
            uVar5 = func_0x0210e2d4(iVar15,0);
            uVar7 = func_0x0210e2d4(iVar13,0);
            func_0x0199f3dc(uVar5,uVar7,0);
          }
          else {
            if (aiStack_28[0] == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0212f4e4(iVar1,0);
            iVar1 = aiStack_28[0];
            if (iVar2 == 7) {
              iVar1 = *(int *)(iVar14 + 0x7c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x020e81ec(iVar1,uVar5,uVar7,0);
              if (iVar1 != 0) {
                uVar5 = func_0x0210e2d4(iVar1,0);
                uVar5 = func_0x02157e88(uVar5,0);
                uVar7 = func_0x0210e2d4(iVar15,0);
                iVar2 = aiStack_28[0];
                if (aiStack_28[0] == 0) {
                  func_0x01384bf0();
                }
                uVar3 = func_0x021328ac(iVar2,0);
                if (*(int *)(**(int **)(_UNK_01de259c + 0x1de2110) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x01997360(iVar1,uVar5,uVar7,uVar3,0);
              }
            }
            else {
              if (aiStack_28[0] == 0) {
                func_0x01384bf0();
              }
              uVar5 = 0;
              iVar1 = func_0x0212f4e4(iVar1,0);
              if (iVar1 == 8) {
                uVar7 = func_0x0210e2d4(iVar13,0);
                uVar7 = func_0x02157e88(uVar7,0);
                uVar8 = func_0x0210e2d4(iVar15,0);
                iVar2 = func_0x02116a8c(iVar15,0);
                iVar1 = aiStack_28[0];
                if (iVar2 == 0) {
                  if (aiStack_28[0] == 0) {
                    func_0x01384bf0();
                  }
                  uVar5 = func_0x02132670(iVar1,0);
                }
                if (*(int *)(**(int **)(_UNK_01de25a0 + 0x1de2300) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x0199719c(iVar13,uVar7,uVar8,uVar3,uVar5,0);
              }
            }
          }
        }
        iVar1 = func_0x02116a8c(iVar15,0);
        if (iVar1 == 0) {
          iVar13 = *(int *)(iVar14 + 0x74);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          iVar13 = func_0x01f090e0(iVar13,0);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          func_0x01e01ff4(iVar13,iVar15,0);
          func_0x0210cd7c(&uStack_38,iVar15,0);
          uVar5 = uStack_38;
          func_0x0210cd7c(&uStack_38,iVar15,0);
        }
        else {
          func_0x0210cd7c(&uStack_38,iVar13,0);
          uVar5 = uStack_38;
          func_0x0210cd7c(&uStack_38,iVar13,0);
        }
        FUN_01ddff5c(iVar14,uVar5,uStack_34);
        if (*(int *)(**(int **)(_UNK_01de25a4 + 0x1de24dc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar14 = func_0x0300d558(**(undefined4 **)(_UNK_01de25a8 + 0x1de24f8));
        iVar13 = aiStack_28[0];
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0212f4e4(iVar13,0);
        if (iVar14 == 0) {
          func_0x01384bf0();
        }
        func_0x034a2298(iVar14,iVar15,uVar5,**(undefined4 **)(_UNK_01de25ac + 0x1de2540));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e7f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,iVar14,iVar15,iVar13,0);
  }
  return;
}


