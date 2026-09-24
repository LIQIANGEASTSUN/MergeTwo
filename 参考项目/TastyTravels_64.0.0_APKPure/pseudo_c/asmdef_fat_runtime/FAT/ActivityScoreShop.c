/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityScoreShop$$get_TokenId RVA 0x2a23be8 =====

undefined4 FUN_02a33be8(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x149,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x149,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 0x40);
  }
  return uVar4;
}



// ===== FAT.ActivityScoreShop$$get_TokenCount RVA 0x2a23c4c =====

undefined4 FUN_02a33c4c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a2c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a2c,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.ActivityScoreShop$$get_CurrentNodeIndex RVA 0x2a23ca0 =====

undefined4 FUN_02a33ca0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a2d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a2d,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.ActivityScoreShop$$get_NodeCount RVA 0x2a23cf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a33cf4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02a33d80 + 0x2a33d08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a33d84 + 0x2a33d1c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x6a2e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a2e,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0xc);
  }
  return uVar5;
}



// ===== FAT.ActivityScoreShop$$get_ThemeFontStyleId_Score RVA 0x2a23d88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a33d88(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02a33e0c + 0x2a33d9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a33e10 + 0x2a33db0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a2f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a2f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  return **(undefined4 **)(_UNK_02a33e14 + 0x2a33e08);
}



// ===== FAT.ActivityScoreShop$$get_NodeRewardData RVA 0x2a23e18 =====

undefined4 FUN_02a33e18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.ActivityScoreShop$$set_NodeRewardData RVA 0x2a23e20 =====

void FUN_02a33e20(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// ===== FAT.ActivityScoreShop$$get_Valid RVA 0x2a23e28 =====

uint FUN_02a33e28(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
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
  
  iVar2 = func_0x0229f06c(0x6a30,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6a30,0);
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
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = (**(code **)(*piVar5 + 0x130))(piVar5,*(undefined4 *)(*piVar5 + 0x134));
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  if (iVar4 != 0 && iVar2 != 0) {
    return (uint)(*(int *)(param_1 + 100) != 0);
  }
  return 0;
}



// ===== FAT.ActivityScoreShop$$get_HasEnd RVA 0x2a23ec4 =====

undefined1 FUN_02a33ec4(int param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



// ===== FAT.ActivityScoreShop$$set_HasEnd RVA 0x2a23ecc =====

void FUN_02a33ecc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x80) = param_2;
  return;
}



// ===== FAT.ActivityScoreShop$$get_ThemeId RVA 0x2a23ed4 =====

undefined4 FUN_02a33ed4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a31,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a31,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 0xffffffff;
}



// ===== FAT.ActivityScoreShop$$get_EventConf RVA 0x2a23f28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a33f28(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a32,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a32,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02245cc0 + 0x2245be0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02245cc4 + 0x2245bf4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02245cc8 + 0x2245cb0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.ActivityScoreShop$$get_VisualMain RVA 0x2a23f7c =====

void FUN_02a33f7c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x8c);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityScoreShop$$get_VisualHelp RVA 0x2a23f90 =====

void FUN_02a33f90(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x98);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityScoreShop$$get_VisualEnd RVA 0x2a23fa4 =====

void FUN_02a33fa4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xa4);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityScoreShop$$.ctor RVA 0x2a23fb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a33fb8(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02a34180 + 0x2a33fd4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a34184 + 0x2a33fe8));
    func_0x01384978(*(undefined4 *)(_UNK_02a34188 + 0x2a33ff4));
    func_0x01384978(*(undefined4 *)(_UNK_02a3418c + 0x2a34000));
    func_0x01384978(*(undefined4 *)(_UNK_02a34190 + 0x2a3400c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34194 + 0x2a34018));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02a34198 + 0x2a3402c));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02a3419c + 0x2a34040));
  piVar5 = *(int **)(_UNK_02a341a0 + 0x2a34054);
  iVar2 = *piVar5;
  iVar3 = *(int *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar2 = *piVar5;
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  func_0x02b64854(&uStack_28,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x9ac),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0x8c) = uStack_20;
  *(ulonglong *)(param_1 + 0x84) = CONCAT44(uStack_24,uStack_28);
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x02b64854(&uStack_38,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x9b0),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0x98) = uStack_30;
  *(ulonglong *)(param_1 + 0x90) = CONCAT44(uStack_34,uStack_38);
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x9b4),0);
  *(undefined4 *)(param_1 + 0xa4) = uStack_40;
  *(ulonglong *)(param_1 + 0x9c) = CONCAT44(uStack_44,uStack_48);
  func_0x02470cf8(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (*(int *)(**(int **)(_UNK_02a341a4 + 0x2a34148) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_02a341a8 + 0x2a34164));
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  func_0x02a341ac(param_1);
  return;
}



// ===== FAT.ActivityScoreShop$$RefreshTheme RVA 0x2a241ac =====

void FUN_02a341ac(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_28;
  int iStack_20;
  
  uStack_28 = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6a33,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    iVar2 = param_1[0x18];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b61a50(iVar1,uVar3,0,0);
    iVar1 = param_1[0x18];
    uStack_28 = *(undefined8 *)(param_1 + 0x21);
    iStack_20 = param_1[0x23];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x24),param_1,0,1,0);
    iVar1 = param_1[0x18];
    uStack_28 = *(undefined8 *)(param_1 + 0x24);
    iStack_20 = param_1[0x26];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x30),param_1,0,1,0);
    iVar1 = param_1[0x18];
    uStack_28 = *(undefined8 *)(param_1 + 0x27);
    iStack_20 = param_1[0x29];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x20),param_1,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6a33,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$SetupFresh RVA 0x2a2431c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a3431c(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  iVar1 = func_0x0229f06c(0x6a37,0);
  if (iVar1 == 0) {
    param_1[0x13] = 0;
    (**(code **)(*param_1 + 0x278))(param_1,0,*(undefined4 *)(*param_1 + 0x27c));
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = param_1[0x18];
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar7 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cf6408(iVar1,uVar9,0);
    param_1[0x15] = iVar1;
    pcVar5 = (char *)(_UNK_02a34914 + 0x2a34404);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02a34918 + 0x2a34418));
      func_0x01384978(*(undefined4 *)(_UNK_02a3491c + 0x2a34424));
      func_0x01384978(*(undefined4 *)(_UNK_02a34920 + 0x2a34430));
      func_0x01384978(*(undefined4 *)(_UNK_02a34924 + 0x2a3443c));
      func_0x01384978(*(undefined4 *)(_UNK_02a34928 + 0x2a34448));
      func_0x01384978(*(undefined4 *)(_UNK_02a3492c + 0x2a34454));
      func_0x01384978(*(undefined4 *)(_UNK_02a34930 + 0x2a34460));
      func_0x01384978(*(undefined4 *)(_UNK_02a34934 + 0x2a3446c));
      func_0x01384978(*(undefined4 *)(_UNK_02a34938 + 0x2a34478));
      func_0x01384978(*(undefined4 *)(_UNK_02a3493c + 0x2a34484));
      func_0x01384978(*(undefined4 *)(_UNK_02a34940 + 0x2a34490));
      func_0x01384978(*(undefined4 *)(_UNK_02a34944 + 0x2a3449c));
      func_0x01384978(*(undefined4 *)(_UNK_02a34948 + 0x2a344a8));
      func_0x01384978(*(undefined4 *)(_UNK_02a3494c + 0x2a344b4));
      func_0x01384978(*(undefined4 *)(_UNK_02a34950 + 0x2a344c0));
      func_0x01384978(*(undefined4 *)(_UNK_02a34954 + 0x2a344cc));
      func_0x01384978(*(undefined4 *)(_UNK_02a34958 + 0x2a344d8));
      func_0x01384978(*(undefined4 *)(_UNK_02a3495c + 0x2a344e4));
      func_0x01384978(*(undefined4 *)(_UNK_02a34960 + 0x2a344f0));
      func_0x01384978(*(undefined4 *)(_UNK_02a34964 + 0x2a344fc));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6a38,0);
    if (iVar1 == 0) {
      iVar1 = func_0x02a35878(param_1);
      param_1[0x1d] = iVar1;
      func_0x02a35990(param_1);
      iVar1 = param_1[0x15];
      if (*(int *)(**(int **)(_UNK_02a34968 + 0x2a3456c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar7 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_02a3496c + 0x2a3458c));
      param_1[0x19] = iVar7;
      iVar1 = 0;
      if (iVar7 != 0) {
        iStack_40 = *(int *)(iVar7 + 0x1c);
        iVar1 = iStack_40;
      }
      if (iVar7 != 0 && iVar1 != 0) {
        iVar7 = *(int *)(iStack_40 + 0xc);
        piStack_3c = param_1;
        iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02a34970 + 0x2a345c4));
        func_0x0328e9bc(iVar1,iVar7,**(undefined4 **)(_UNK_02a34974 + 0x2a345e4));
        piStack_3c[0x1a] = iVar1;
        if (0 < iVar7) {
          iVar1 = 0;
          puVar12 = *(undefined4 **)(_UNK_02a34978 + 0x2a34610);
          iStack_44 = iVar7;
          do {
            iVar7 = func_0x0364c9b8(iStack_40,iVar1,**(undefined4 **)(_UNK_02a3497c + 0x2a3461c));
            if (*(int *)(**(int **)(_UNK_02a34980 + 0x2a34634) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar2 = func_0x036a1750(iVar7,**(undefined4 **)(_UNK_02a34984 + 0x2a34650));
            if (iVar2 == 0) {
              puVar8 = *(undefined4 **)(_UNK_02a34988 + 0x2a34868);
              iStack_28 = iVar7;
              uVar9 = func_0x01384abc(*puVar8,&iStack_28);
              iStack_2c = piStack_3c[0x15];
              uVar4 = func_0x01384abc(*puVar8,&iStack_2c);
              iStack_48 = 0;
              uVar9 = func_0x0467277c(**(undefined4 **)(_UNK_02a3498c + 0x2a348a0),
                                      **(undefined4 **)(_UNK_02a34990 + 0x2a348ac),uVar9,uVar4);
              if (*(int *)(**(int **)(_UNK_02a34994 + 0x2a348c8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2944(uVar9,0);
            }
            else {
              iVar6 = *(int *)(iVar2 + 0x20);
              iStack_34 = iVar7;
              iStack_30 = iVar1;
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              uVar9 = *(undefined4 *)(iVar6 + 0xc);
              iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02a34998 + 0x2a34688));
              func_0x0328e9bc(iVar1,uVar9,**(undefined4 **)(_UNK_02a3499c + 0x2a346a4));
              iVar6 = 0;
              iVar7 = *(int *)(iVar2 + 0x20);
              iStack_38 = iVar2;
              while( true ) {
                if (iVar7 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar7 + 0xc) <= iVar6) break;
                uVar9 = func_0x03653d1c(iVar7,iVar6,*puVar12);
                iVar2 = func_0x0467229c(uVar9,0);
                if (iVar2 == 0) {
                  if (*(int *)(**(int **)(_UNK_02a349a0 + 0x2a34700) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  uVar9 = func_0x02565a88(uVar9,0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *(int *)(iVar1 + 8);
                  uVar10 = *(uint *)(iVar1 + 0xc);
                  piVar3 = *(int **)(_UNK_02a349a4 + 0x2a3474c);
                  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                  iVar11 = *piVar3;
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar10 < *(uint *)(iVar2 + 0xc)) {
                    *(uint *)(iVar1 + 0xc) = uVar10 + 1;
                    *(undefined4 *)(iVar2 + uVar10 * 4 + 0x10) = uVar9;
                  }
                  else {
                    func_0x0328f170(iVar1,uVar9,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                                   );
                  }
                }
                iVar6 = iVar6 + 1;
              }
              uVar9 = 0;
              iVar7 = *(int *)(iStack_38 + 0x1c);
              if (iVar7 < 1) {
                uVar9 = *(undefined4 *)(iStack_38 + 0x24);
              }
              iVar6 = piStack_3c[0x1a];
              iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02a349a8 + 0x2a347c0));
              func_0x04874ed4(iVar2,0);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              *(int *)(iVar2 + 0x1c) = iVar1;
              *(int *)(iVar2 + 8) = iStack_30;
              *(uint *)(iVar2 + 0xc) = (uint)(0 < iVar7);
              *(undefined4 *)(iVar2 + 0x10) = uVar9;
              *(int *)(iVar2 + 0x14) = iVar7;
              *(int *)(iVar2 + 0x18) = iStack_34;
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              iVar7 = *(int *)(iVar6 + 8);
              uVar10 = *(uint *)(iVar6 + 0xc);
              piVar3 = *(int **)(_UNK_02a349ac + 0x2a34828);
              *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
              iVar11 = *piVar3;
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              iVar1 = iStack_30;
              if (uVar10 < *(uint *)(iVar7 + 0xc)) {
                *(uint *)(iVar6 + 0xc) = uVar10 + 1;
                *(int *)(iVar7 + uVar10 * 4 + 0x10) = iVar2;
              }
              else {
                func_0x0328f170(iVar6,iVar2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
              }
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 != iStack_44);
        }
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6a38,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a37,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  iStack_20 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  iStack_2c = iStack_44;
  iStack_28 = iStack_40;
  uStack_24 = piStack_3c;
  iStack_20 = iStack_38;
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
  func_0x0245495c(iVar7,uVar9,&iStack_30,uVar4,0,0);
  return;
}



// ===== FAT.ActivityScoreShop$$Init RVA 0x2a243ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a343ec(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_02a34914 + 0x2a34404);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a34918 + 0x2a34418));
    func_0x01384978(*(undefined4 *)(_UNK_02a3491c + 0x2a34424));
    func_0x01384978(*(undefined4 *)(_UNK_02a34920 + 0x2a34430));
    func_0x01384978(*(undefined4 *)(_UNK_02a34924 + 0x2a3443c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34928 + 0x2a34448));
    func_0x01384978(*(undefined4 *)(_UNK_02a3492c + 0x2a34454));
    func_0x01384978(*(undefined4 *)(_UNK_02a34930 + 0x2a34460));
    func_0x01384978(*(undefined4 *)(_UNK_02a34934 + 0x2a3446c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34938 + 0x2a34478));
    func_0x01384978(*(undefined4 *)(_UNK_02a3493c + 0x2a34484));
    func_0x01384978(*(undefined4 *)(_UNK_02a34940 + 0x2a34490));
    func_0x01384978(*(undefined4 *)(_UNK_02a34944 + 0x2a3449c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34948 + 0x2a344a8));
    func_0x01384978(*(undefined4 *)(_UNK_02a3494c + 0x2a344b4));
    func_0x01384978(*(undefined4 *)(_UNK_02a34950 + 0x2a344c0));
    func_0x01384978(*(undefined4 *)(_UNK_02a34954 + 0x2a344cc));
    func_0x01384978(*(undefined4 *)(_UNK_02a34958 + 0x2a344d8));
    func_0x01384978(*(undefined4 *)(_UNK_02a3495c + 0x2a344e4));
    func_0x01384978(*(undefined4 *)(_UNK_02a34960 + 0x2a344f0));
    func_0x01384978(*(undefined4 *)(_UNK_02a34964 + 0x2a344fc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a38,0);
  if (iVar1 == 0) {
    uVar9 = func_0x02a35878(param_1);
    *(undefined4 *)(param_1 + 0x74) = uVar9;
    func_0x02a35990(param_1);
    uVar9 = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(**(int **)(_UNK_02a34968 + 0x2a3456c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02a3496c + 0x2a3458c));
    *(int *)(param_1 + 100) = iVar7;
    iVar1 = 0;
    if (iVar7 != 0) {
      iStack_40 = *(int *)(iVar7 + 0x1c);
      iVar1 = iStack_40;
    }
    if (iVar7 != 0 && iVar1 != 0) {
      iVar1 = *(int *)(iStack_40 + 0xc);
      iStack_3c = param_1;
      uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02a34970 + 0x2a345c4));
      func_0x0328e9bc(uVar9,iVar1,**(undefined4 **)(_UNK_02a34974 + 0x2a345e4));
      *(undefined4 *)(iStack_3c + 0x68) = uVar9;
      if (0 < iVar1) {
        iVar7 = 0;
        puVar12 = *(undefined4 **)(_UNK_02a34978 + 0x2a34610);
        iStack_44 = iVar1;
        do {
          iVar1 = func_0x0364c9b8(iStack_40,iVar7,**(undefined4 **)(_UNK_02a3497c + 0x2a3461c));
          if (*(int *)(**(int **)(_UNK_02a34980 + 0x2a34634) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_02a34984 + 0x2a34650));
          if (iVar2 == 0) {
            puVar8 = *(undefined4 **)(_UNK_02a34988 + 0x2a34868);
            iStack_28 = iVar1;
            uVar9 = func_0x01384abc(*puVar8,&iStack_28);
            uStack_2c = *(undefined4 *)(iStack_3c + 0x54);
            uVar4 = func_0x01384abc(*puVar8,&uStack_2c);
            iStack_48 = 0;
            uVar9 = func_0x0467277c(**(undefined4 **)(_UNK_02a3498c + 0x2a348a0),
                                    **(undefined4 **)(_UNK_02a34990 + 0x2a348ac),uVar9,uVar4);
            if (*(int *)(**(int **)(_UNK_02a34994 + 0x2a348c8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar9,0);
          }
          else {
            iVar6 = *(int *)(iVar2 + 0x20);
            iStack_34 = iVar1;
            iStack_30 = iVar7;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar9 = *(undefined4 *)(iVar6 + 0xc);
            iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02a34998 + 0x2a34688));
            func_0x0328e9bc(iVar1,uVar9,**(undefined4 **)(_UNK_02a3499c + 0x2a346a4));
            iVar6 = 0;
            iVar7 = *(int *)(iVar2 + 0x20);
            iStack_38 = iVar2;
            while( true ) {
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              if (*(int *)(iVar7 + 0xc) <= iVar6) break;
              uVar9 = func_0x03653d1c(iVar7,iVar6,*puVar12);
              iVar2 = func_0x0467229c(uVar9,0);
              if (iVar2 == 0) {
                if (*(int *)(**(int **)(_UNK_02a349a0 + 0x2a34700) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                uVar9 = func_0x02565a88(uVar9,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar1 + 8);
                uVar10 = *(uint *)(iVar1 + 0xc);
                piVar3 = *(int **)(_UNK_02a349a4 + 0x2a3474c);
                *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
                iVar11 = *piVar3;
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                if (uVar10 < *(uint *)(iVar2 + 0xc)) {
                  *(uint *)(iVar1 + 0xc) = uVar10 + 1;
                  *(undefined4 *)(iVar2 + uVar10 * 4 + 0x10) = uVar9;
                }
                else {
                  func_0x0328f170(iVar1,uVar9,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
              }
              iVar6 = iVar6 + 1;
            }
            uVar9 = 0;
            iVar7 = *(int *)(iStack_38 + 0x1c);
            if (iVar7 < 1) {
              uVar9 = *(undefined4 *)(iStack_38 + 0x24);
            }
            iVar6 = *(int *)(iStack_3c + 0x68);
            iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02a349a8 + 0x2a347c0));
            func_0x04874ed4(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            *(int *)(iVar2 + 0x1c) = iVar1;
            *(int *)(iVar2 + 8) = iStack_30;
            *(uint *)(iVar2 + 0xc) = (uint)(0 < iVar7);
            *(undefined4 *)(iVar2 + 0x10) = uVar9;
            *(int *)(iVar2 + 0x14) = iVar7;
            *(int *)(iVar2 + 0x18) = iStack_34;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar6 + 8);
            uVar10 = *(uint *)(iVar6 + 0xc);
            piVar3 = *(int **)(_UNK_02a349ac + 0x2a34828);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar11 = *piVar3;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar7 = iStack_30;
            if (uVar10 < *(uint *)(iVar1 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar10 + 1;
              *(int *)(iVar1 + uVar10 * 4 + 0x10) = iVar2;
            }
            else {
              func_0x0328f170(iVar6,iVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != iStack_44);
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x6a38,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_30 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = iStack_44;
  iStack_28 = iStack_40;
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
  func_0x0245495c(iVar7,uVar9,&iStack_30,uVar4,0,0);
  return;
}



// ===== FAT.ActivityScoreShop$$SaveSetup RVA 0x2a249b0 =====

/* WARNING: Possible PIC construction at 0x02a34a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02a34ab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02a34a84) */
/* WARNING: Removing unreachable block (ram,0x02a34aa0) */
/* WARNING: Removing unreachable block (ram,0x02a34aa4) */
/* WARNING: Removing unreachable block (ram,0x02a34ab4) */
/* WARNING: Removing unreachable block (ram,0x02a34ad0) */
/* WARNING: Removing unreachable block (ram,0x02a34ad4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a349b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_02a34ae8 + 0x2a349c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a34aec + 0x2a349dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a42,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
  func_0x024703f0(param_1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0x54),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_02a34af0 + 0x2a34a80);
  iVar3 = *piStack_24;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.ActivityScoreShop$$LoadSetup RVA 0x2a24af4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a34af4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  iVar2 = func_0x0229f06c(0x6a43,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6a43,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    uStack_2c = iStack_44;
    iStack_28 = iStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&iStack_38,uVar4,0,0);
    return;
  }
  func_0x02470508(param_1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar9 = func_0x01c23c30(3,uVar4,0);
  *(undefined4 *)(param_1 + 0x54) = uVar9;
  uVar9 = func_0x01c23c30(4,uVar4,0);
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  uVar9 = func_0x01c23c30(5,uVar4,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar9;
  pcVar5 = (char *)(_UNK_02a34914 + 0x2a34404);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a34918 + 0x2a34418));
    func_0x01384978(*(undefined4 *)(_UNK_02a3491c + 0x2a34424));
    func_0x01384978(*(undefined4 *)(_UNK_02a34920 + 0x2a34430));
    func_0x01384978(*(undefined4 *)(_UNK_02a34924 + 0x2a3443c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34928 + 0x2a34448));
    func_0x01384978(*(undefined4 *)(_UNK_02a3492c + 0x2a34454));
    func_0x01384978(*(undefined4 *)(_UNK_02a34930 + 0x2a34460));
    func_0x01384978(*(undefined4 *)(_UNK_02a34934 + 0x2a3446c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34938 + 0x2a34478));
    func_0x01384978(*(undefined4 *)(_UNK_02a3493c + 0x2a34484));
    func_0x01384978(*(undefined4 *)(_UNK_02a34940 + 0x2a34490));
    func_0x01384978(*(undefined4 *)(_UNK_02a34944 + 0x2a3449c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34948 + 0x2a344a8));
    func_0x01384978(*(undefined4 *)(_UNK_02a3494c + 0x2a344b4));
    func_0x01384978(*(undefined4 *)(_UNK_02a34950 + 0x2a344c0));
    func_0x01384978(*(undefined4 *)(_UNK_02a34954 + 0x2a344cc));
    func_0x01384978(*(undefined4 *)(_UNK_02a34958 + 0x2a344d8));
    func_0x01384978(*(undefined4 *)(_UNK_02a3495c + 0x2a344e4));
    func_0x01384978(*(undefined4 *)(_UNK_02a34960 + 0x2a344f0));
    func_0x01384978(*(undefined4 *)(_UNK_02a34964 + 0x2a344fc));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6a38,0);
  if (iVar2 == 0) {
    uVar9 = func_0x02a35878(param_1);
    *(undefined4 *)(param_1 + 0x74) = uVar9;
    func_0x02a35990(param_1);
    uVar9 = *(undefined4 *)(param_1 + 0x54);
    if (*(int *)(**(int **)(_UNK_02a34968 + 0x2a3456c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_02a3496c + 0x2a3458c));
    *(int *)(param_1 + 100) = iVar7;
    iVar2 = 0;
    if (iVar7 != 0) {
      iStack_40 = *(int *)(iVar7 + 0x1c);
      iVar2 = iStack_40;
    }
    if (iVar7 != 0 && iVar2 != 0) {
      iVar2 = *(int *)(iStack_40 + 0xc);
      iStack_3c = param_1;
      uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_02a34970 + 0x2a345c4));
      func_0x0328e9bc(uVar9,iVar2,**(undefined4 **)(_UNK_02a34974 + 0x2a345e4));
      *(undefined4 *)(iStack_3c + 0x68) = uVar9;
      if (0 < iVar2) {
        iVar7 = 0;
        puVar12 = *(undefined4 **)(_UNK_02a34978 + 0x2a34610);
        iStack_44 = iVar2;
        do {
          iVar2 = func_0x0364c9b8(iStack_40,iVar7,**(undefined4 **)(_UNK_02a3497c + 0x2a3461c));
          if (*(int *)(**(int **)(_UNK_02a34980 + 0x2a34634) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x036a1750(iVar2,**(undefined4 **)(_UNK_02a34984 + 0x2a34650));
          if (iVar1 == 0) {
            puVar8 = *(undefined4 **)(_UNK_02a34988 + 0x2a34868);
            iStack_28 = iVar2;
            uVar9 = func_0x01384abc(*puVar8,&iStack_28);
            uStack_2c = *(undefined4 *)(iStack_3c + 0x54);
            uVar4 = func_0x01384abc(*puVar8,&uStack_2c);
            iStack_48 = 0;
            uVar9 = func_0x0467277c(**(undefined4 **)(_UNK_02a3498c + 0x2a348a0),
                                    **(undefined4 **)(_UNK_02a34990 + 0x2a348ac),uVar9,uVar4);
            if (*(int *)(**(int **)(_UNK_02a34994 + 0x2a348c8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar9,0);
          }
          else {
            iVar6 = *(int *)(iVar1 + 0x20);
            iStack_34 = iVar2;
            iStack_30 = iVar7;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar9 = *(undefined4 *)(iVar6 + 0xc);
            iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02a34998 + 0x2a34688));
            func_0x0328e9bc(iVar2,uVar9,**(undefined4 **)(_UNK_02a3499c + 0x2a346a4));
            iVar6 = 0;
            iVar7 = *(int *)(iVar1 + 0x20);
            iStack_38 = iVar1;
            while( true ) {
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              if (*(int *)(iVar7 + 0xc) <= iVar6) break;
              uVar9 = func_0x03653d1c(iVar7,iVar6,*puVar12);
              iVar1 = func_0x0467229c(uVar9,0);
              if (iVar1 == 0) {
                if (*(int *)(**(int **)(_UNK_02a349a0 + 0x2a34700) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                uVar9 = func_0x02565a88(uVar9,0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar1 = *(int *)(iVar2 + 8);
                uVar10 = *(uint *)(iVar2 + 0xc);
                piVar3 = *(int **)(_UNK_02a349a4 + 0x2a3474c);
                *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
                iVar11 = *piVar3;
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                if (uVar10 < *(uint *)(iVar1 + 0xc)) {
                  *(uint *)(iVar2 + 0xc) = uVar10 + 1;
                  *(undefined4 *)(iVar1 + uVar10 * 4 + 0x10) = uVar9;
                }
                else {
                  func_0x0328f170(iVar2,uVar9,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
                }
              }
              iVar6 = iVar6 + 1;
            }
            uVar9 = 0;
            iVar7 = *(int *)(iStack_38 + 0x1c);
            if (iVar7 < 1) {
              uVar9 = *(undefined4 *)(iStack_38 + 0x24);
            }
            iVar6 = *(int *)(iStack_3c + 0x68);
            iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02a349a8 + 0x2a347c0));
            func_0x04874ed4(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            *(int *)(iVar1 + 0x1c) = iVar2;
            *(int *)(iVar1 + 8) = iStack_30;
            *(uint *)(iVar1 + 0xc) = (uint)(0 < iVar7);
            *(undefined4 *)(iVar1 + 0x10) = uVar9;
            *(int *)(iVar1 + 0x14) = iVar7;
            *(int *)(iVar1 + 0x18) = iStack_34;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar6 + 8);
            uVar10 = *(uint *)(iVar6 + 0xc);
            piVar3 = *(int **)(_UNK_02a349ac + 0x2a34828);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar11 = *piVar3;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar7 = iStack_30;
            if (uVar10 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar10 + 1;
              *(int *)(iVar2 + uVar10 * 4 + 0x10) = iVar1;
            }
            else {
              func_0x0328f170(iVar6,iVar1,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != iStack_44);
      }
    }
    return;
  }
  iVar2 = func_0x0229f13c(0x6a38,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  iStack_20 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = iStack_44;
  iStack_28 = iStack_40;
  uStack_24 = iStack_3c;
  iStack_20 = iStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  iStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar7,uVar9,&iStack_30,uVar4);
  return;
}



// ===== FAT.ActivityScoreShop$$WhenReset RVA 0x2a24bb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a34bb0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x0229f06c(0x6a44,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_02a34d64 + 0x2a34c1c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02a34d68 + 0x2a34c30));
      func_0x01384978(*(undefined4 *)(_UNK_02a34d6c + 0x2a34c3c));
      func_0x01384978(*(undefined4 *)(_UNK_02a34d70 + 0x2a34c48));
      func_0x01384978(*(undefined4 *)(_UNK_02a34d74 + 0x2a34c54));
      func_0x01384978(*(undefined4 *)(_UNK_02a34d78 + 0x2a34c60));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6a45,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_02a34d7c + 0x2a34cb8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02a34d80 + 0x2a34cd4));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02a34d84 + 0x2a34ce8));
      func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_02a34d88 + 0x2a34d04),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349ea64(iVar1,uVar6,**(undefined4 **)(_UNK_02a34d8c + 0x2a34d28));
      uVar2 = *(uint *)(param_1 + 0x74);
      if ((uVar2 | 2) == 2) {
        func_0x02a36fb8(param_1);
        uVar2 = *(uint *)(param_1 + 0x74);
      }
      if (1 < uVar2 - 1) {
        return;
      }
      iVar1 = func_0x0229f06c(0x6a41,0);
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0x70) != 0) {
          func_0x02af7520(*(int *)(param_1 + 0x70),0);
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
        return;
      }
      iVar1 = func_0x0229f13c(0x6a41,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x6a45,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a44,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.ActivityScoreShop$$RemoveTokenHandler RVA 0x2a24c08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a34c08(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_02a34d64 + 0x2a34c1c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a34d68 + 0x2a34c30));
    func_0x01384978(*(undefined4 *)(_UNK_02a34d6c + 0x2a34c3c));
    func_0x01384978(*(undefined4 *)(_UNK_02a34d70 + 0x2a34c48));
    func_0x01384978(*(undefined4 *)(_UNK_02a34d74 + 0x2a34c54));
    func_0x01384978(*(undefined4 *)(_UNK_02a34d78 + 0x2a34c60));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a45,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02a34d7c + 0x2a34cb8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02a34d80 + 0x2a34cd4));
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02a34d84 + 0x2a34ce8));
    func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_02a34d88 + 0x2a34d04),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349ea64(iVar1,uVar6,**(undefined4 **)(_UNK_02a34d8c + 0x2a34d28));
    uVar2 = *(uint *)(param_1 + 0x74);
    if ((uVar2 | 2) == 2) {
      func_0x02a36fb8(param_1);
      uVar2 = *(uint *)(param_1 + 0x74);
    }
    if (1 < uVar2 - 1) {
      return;
    }
    iVar1 = func_0x0229f06c(0x6a41,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x70) != 0) {
        func_0x02af7520(*(int *)(param_1 + 0x70),0);
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6a41,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a45,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
  return;
}



// ===== FAT.ActivityScoreShop$$WhenEnd RVA 0x2a24d90 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a34d90(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_24 [3];
  
  pcVar2 = (char *)(_UNK_02a35184 + 0x2a34da8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a35188 + 0x2a34dbc));
    func_0x01384978(*(undefined4 *)(_UNK_02a3518c + 0x2a34dc8));
    func_0x01384978(*(undefined4 *)(_UNK_02a35190 + 0x2a34dd4));
    func_0x01384978(*(undefined4 *)(_UNK_02a35194 + 0x2a34de0));
    func_0x01384978(*(undefined4 *)(_UNK_02a35198 + 0x2a34dec));
    func_0x01384978(*(undefined4 *)(_UNK_02a3519c + 0x2a34df8));
    func_0x01384978(*(undefined4 *)(_UNK_02a351a0 + 0x2a34e04));
    func_0x01384978(*(undefined4 *)(_UNK_02a351a4 + 0x2a34e10));
    *pcVar2 = '\x01';
  }
  aiStack_24[2] = 0;
  aiStack_24[1] = 0;
  aiStack_24[0] = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  iVar1 = func_0x0229f06c(0x6a46,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x80) = 1;
    FUN_02a34c08(param_1);
    bVar7 = *(int *)(param_1 + 100) != 0;
    iVar1 = 0;
    if (bVar7) {
      iVar1 = *(int *)(param_1 + 0x60);
    }
    if ((bVar7 && iVar1 != 0) && (0 < *(int *)(param_1 + 0x58))) {
      piVar6 = *(int **)(_UNK_02a351a8 + 0x2a34ec0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a45c(aiStack_24 + 1,iVar1,aiStack_24,**(undefined4 **)(_UNK_02a351ac + 0x2a34efc));
      iVar1 = aiStack_24[0];
      iVar4 = *(int *)(param_1 + 0x60);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      uVar5 = *(undefined4 *)(iVar4 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar1,uVar5,uVar3,**(undefined4 **)(_UNK_02a351b0 + 0x2a34f38));
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_40,iVar1,&iStack_34,**(undefined4 **)(_UNK_02a351b4 + 0x2a34f80));
      iVar1 = *(int *)(param_1 + 0x60);
      uStack_2c = uStack_3c;
      uStack_30 = uStack_40;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = iStack_34;
      piVar6 = *(int **)(_UNK_02a351b8 + 0x2a34fbc);
      uVar3 = *(undefined4 *)(iVar1 + 0x28);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      func_0x02b4aed4(uVar3,iVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x364),aiStack_24[0],0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x019a4b9c(*(undefined4 *)(iVar1 + 0x40),-*(int *)(param_1 + 0x58),0,
                      *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x368),0);
      iVar1 = iStack_34;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) < 1) {
        func_0x03633b24(&uStack_30,**(undefined4 **)(_UNK_02a351c0 + 0x2a350cc));
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(param_1 + 0xa4);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uStack_3c = uStack_2c;
        uStack_40 = uStack_30;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02a351bc + 0x2a35080),&uStack_40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar5,0,uVar3,0);
      }
      func_0x028c98a0(aiStack_24 + 1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$Open RVA 0x2a251c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a351c4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  int iStack_20;
  
  pcVar4 = (char *)(_UNK_02a35378 + 0x2a351dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a3537c + 0x2a351f0));
    func_0x01384978(*(undefined4 *)(_UNK_02a35380 + 0x2a351fc));
    func_0x01384978(*(undefined4 *)(_UNK_02a35384 + 0x2a35208));
    func_0x01384978(*(undefined4 *)(_UNK_02a35388 + 0x2a35214));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6a48,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if ((iVar1 == 0) || (iVar1 = func_0x02b48934(param_1,0), iVar1 == 0)) {
      uStack_29 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      puVar5 = *(undefined4 **)(_UNK_02a3538c + 0x2a352e8);
      uVar2 = func_0x01384abc(*puVar5,&uStack_29);
      uStack_2a = func_0x02b48934(param_1,0);
      uVar3 = func_0x01384abc(*puVar5,&uStack_2a);
      uVar2 = func_0x0467277c(**(undefined4 **)(_UNK_02a35390 + 0x2a35330),
                              **(undefined4 **)(_UNK_02a35394 + 0x2a3533c),uVar2,uVar3,0);
      if (*(int *)(**(int **)(_UNK_02a35398 + 0x2a35354) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar2,0);
    }
    else {
      iStack_20 = param_1[0x23];
      uStack_28 = *(undefined8 *)(param_1 + 0x21);
      func_0x02b64e08(&uStack_28,param_1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$TryPopup RVA 0x2a2539c =====

void FUN_02a3539c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x6a49,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(param_2,uVar2,param_3,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6a49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$TryPopup RVA 0x2a25434 =====

void FUN_02a35434(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a3d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a3d,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02a354b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))
            (param_1,*(undefined4 *)(iVar1 + 0xfc),0,*(undefined4 *)(*param_1 + 0x1e4));
  return;
}



// ===== FAT.ActivityScoreShop$$BoardEntryAsset RVA 0x2a254b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a354b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02a35600 + 0x2a354d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a35604 + 0x2a354e4));
    func_0x01384978(*(undefined4 *)(_UNK_02a35608 + 0x2a354f0));
    func_0x01384978(*(undefined4 *)(_UNK_02a3560c + 0x2a354fc));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6a4a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02a3561c(param_1);
    uVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02a35614 + 0x2a355c4),&uStack_14,
                      **(undefined4 **)(_UNK_02a35610 + 0x2a355b8));
      iVar1 = func_0x0467229c(uStack_14,0);
      uVar2 = uStack_14;
      if (iVar1 != 0) {
        uVar2 = **(undefined4 **)(_UNK_02a35618 + 0x2a355ec);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.ActivityScoreShop$$get_IsEntryNotOnBoard RVA 0x2a2561c =====

undefined4 FUN_02a3561c(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x4d7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4d7,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (uVar4 = 0, *(char *)(*(int *)(param_1 + 0x60) + 0x39) != '\0')) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.ActivityScoreShop$$get_IsEntryIconDisplayNum RVA 0x2a2568c =====

undefined4 FUN_02a3568c(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x6a4b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a4b,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (uVar4 = 0, *(char *)(*(int *)(param_1 + 0x60) + 0x38) != '\0')) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.ActivityScoreShop$$ConsumeClaimableFlag RVA 0x2a256fc =====

uint FUN_02a356fc(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar3 = func_0x0229f06c(0x6a3c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6a3c,0);
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
    iVar5 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  bVar1 = *(byte *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x78) = 0;
  return (uint)bVar1;
}



// ===== FAT.ActivityScoreShop$$TrackClaim RVA 0x2a25758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02a35758(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_50 [2];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(iRam02a35870 + 0x2a35774);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02a35874 + 0x2a35788));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    func_0x0245494c(auStack_50,0,param_2,0);
    uStack_30 = iStack_48;
    uStack_2c = iStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffc8,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffc8,param_1,0);
    func_0x01485278(&stack0xffffffc8,param_2,0);
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
    uStack_58 = 0;
    uStack_54 = 0;
    iVar1 = func_0x0245495c(iVar3,uVar4,&stack0xffffffc8,uVar2);
    return iVar1;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 100);
  }
  if (param_2 != 0 && iVar1 != 0) {
    iVar6 = *(int *)(param_1 + 0x68);
    iVar8 = *(int *)(param_1 + 0x5c);
    iVar1 = iVar6;
    iVar3 = iVar8;
    if (iVar6 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0x68);
      bVar10 = iVar1 == 0;
      bVar9 = true;
      if (bVar10) {
        iVar3 = func_0x01384bf0();
        iVar1 = 0;
        if (bVar10) {
          iVar1 = -((int)&uStack_30 + (uint)!bVar9);
          iVar3 = iVar8 - (!bVar9 + 0x100);
        }
        pcVar5 = (char *)(_UNK_02a35978 + 0x2a3588c);
        iStack_40 = param_1;
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02a3597c + 0x2a358a0));
          func_0x01384978(*(undefined4 *)(_UNK_02a35980 + 0x2a358ac));
          func_0x01384978(*(undefined4 *)(_UNK_02a35984 + 0x2a358b8));
          *pcVar5 = '\x01';
        }
        iVar6 = func_0x0229f06c(0x6a39,0);
        if (iVar6 == 0) {
          iVar1 = *(int *)(iVar3 + 0x60);
          if (iVar1 == 0) {
            if (*(int *)(**(int **)(_UNK_02a35988 + 0x2a3594c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2874(**(undefined4 **)(_UNK_02a3598c + 0x2a3596c),0);
          }
          else if ((*(int *)(iVar1 + 0x3c) != 0) && (0 < *(int *)(*(int *)(iVar1 + 0x3c) + 0xc))) {
            return (uint)(0 < *(int *)(iVar1 + 0x2c)) << 1;
          }
          return 1;
        }
        iVar6 = func_0x0229f13c(0x6a39,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iStack_48 = iStack_40;
        uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_60 = 0;
        auStack_50[0] = 0;
        iStack_44 = param_2;
        iStack_40 = iVar1;
        func_0x0245494c(&uStack_78,0,0);
        uStack_60 = uStack_78;
        uStack_5c = uStack_74;
        uStack_58 = uStack_70;
        uStack_54 = uStack_6c;
        auStack_50[0] = uStack_68;
        if (*(int *)(iVar6 + 0x10) != 0) {
          func_0x01485278(&uStack_60,*(int *)(iVar6 + 0x10),0);
        }
        func_0x01485278(&uStack_60,iVar3,0);
        iVar3 = *(int *)(iVar6 + 8);
        uVar4 = *(undefined4 *)(iVar6 + 0xc);
        iVar1 = *(int *)(iVar6 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 2;
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        func_0x0245495c(iVar3,uVar4,&uStack_60,uVar2,0,0);
        iVar1 = func_0x0245498c(&uStack_60,0,0);
        return iVar1;
      }
      iVar3 = *(int *)(param_1 + 0x5c);
    }
    iVar6 = *(int *)(iVar6 + 0xc);
    iVar7 = *(int *)(param_1 + 100);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = *(undefined4 *)(param_2 + 0x18);
    uStack_28 = 0;
    uStack_2c = (uint)(iVar6 + -1 <= iVar8);
    iVar1 = func_0x02313184(param_1,iVar3 + 1,uVar4,*(undefined4 *)(iVar7 + 0x18));
  }
  return iVar1;
}



// ===== FAT.ActivityScoreShop$$GetScoreGenerationType RVA 0x2a25878 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02a35878(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02a35978 + 0x2a3588c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a3597c + 0x2a358a0));
    func_0x01384978(*(undefined4 *)(_UNK_02a35980 + 0x2a358ac));
    func_0x01384978(*(undefined4 *)(_UNK_02a35984 + 0x2a358b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a39,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a39,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02a35988 + 0x2a3594c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(**(undefined4 **)(_UNK_02a3598c + 0x2a3596c),0);
  }
  else if ((*(int *)(iVar1 + 0x3c) != 0) && (0 < *(int *)(*(int *)(iVar1 + 0x3c) + 0xc))) {
    return (uint)(0 < *(int *)(iVar1 + 0x2c)) << 1;
  }
  return 1;
}



// ===== FAT.ActivityScoreShop$$AddTokenHandler RVA 0x2a25990 =====

/* WARNING: Removing unreachable block (ram,0x02a37358) */
/* WARNING: Removing unreachable block (ram,0x02a37348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a35990(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_r8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 unaff_lr;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_68;
  int iStack_64;
  int iStack_5c;
  int *piStack_58;
  int iStack_54;
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
  
  pcVar5 = (char *)(_UNK_02a35b44 + 0x2a359a4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a35b48 + 0x2a359b8));
    func_0x01384978(*(undefined4 *)(_UNK_02a35b4c + 0x2a359c4));
    func_0x01384978(*(undefined4 *)(_UNK_02a35b50 + 0x2a359d0));
    func_0x01384978(*(undefined4 *)(_UNK_02a35b54 + 0x2a359dc));
    func_0x01384978(*(undefined4 *)(_UNK_02a35b58 + 0x2a359e8));
    func_0x01384978(*(undefined4 *)(_UNK_02a35b5c + 0x2a359f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a3a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02a35b60 + 0x2a35a4c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar10 = *(undefined4 **)(_UNK_02a35b64 + 0x2a35a68);
    iVar1 = func_0x0300d558(*puVar10);
    puVar11 = *(undefined4 **)(_UNK_02a35b68 + 0x2a35a7c);
    uVar6 = func_0x01384be4(*puVar11);
    puVar7 = *(undefined4 **)(_UNK_02a35b6c + 0x2a35a98);
    func_0x03ccb96c(uVar6,param_1,*puVar7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349ea64(iVar1,uVar6,**(undefined4 **)(_UNK_02a35b70 + 0x2a35ab8));
    iVar1 = func_0x0300d558(*puVar10);
    uVar6 = func_0x01384be4(*puVar11);
    func_0x03ccb96c(uVar6,param_1,*puVar7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0349e80c(iVar1,uVar6,**(undefined4 **)(_UNK_02a35b74 + 0x2a35b04));
    uVar2 = param_1[0x1d];
    if ((uVar2 | 2) == 2) {
      func_0x02a370c4(param_1);
      uVar2 = param_1[0x1d];
    }
    if (1 < uVar2 - 1) {
      return;
    }
    pcVar5 = (char *)(iRam02a37340 + 0x2a371c8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02a37344 + 0x2a371dc));
      func_0x01384978(*(undefined4 *)(iRam02a37348 + 0x2a371e8));
      func_0x01384978(*(undefined4 *)(iRam02a3734c + 0x2a371f4));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6a40,0);
    if (iVar1 == 0) {
      func_0x02a37058(param_1);
      if ((param_1[0x18] != 0) && (0 < *(int *)(param_1[0x18] + 0x2c))) {
        iVar3 = func_0x01384be4(**(undefined4 **)(iRam02a37350 + 0x2a37270));
        func_0x02afb3e0(iVar3,0);
        iVar8 = param_1[0x18];
        unaff_r8 = param_1[0x16];
        param_1[0x1c] = iVar3;
        iVar1 = iVar8;
        if (iVar8 == 0) {
          func_0x01384bf0();
          iVar1 = param_1[0x18];
          bVar14 = iVar1 == 0;
          bVar13 = true;
          if (bVar14) {
            uVar15 = func_0x01384bf0();
            iVar1 = (int)((ulonglong)uVar15 >> 0x20);
            piVar12 = (int *)uVar15;
            if (bVar14) {
                    /* WARNING: Could not recover jumptable at 0x02a37344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(iVar3 - (!bVar13 + 0x780)))();
              return;
            }
            piStack_58 = param_1;
            iStack_54 = iVar3;
            iVar3 = func_0x0229f06c(0x6a3b,0);
            if (iVar3 != 0) {
              iVar3 = func_0x0229f13c(0x6a3b,0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iStack_64 = iStack_54;
              piStack_68 = piStack_58;
              uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_80 = 0;
              uStack_70 = 0;
              iStack_5c = iVar8;
              piStack_58 = (int *)unaff_r8;
              func_0x0245494c(&uStack_98,0,iVar1,0);
              uStack_80 = uStack_98;
              uStack_7c = uStack_94;
              uStack_78 = uStack_90;
              uStack_74 = uStack_8c;
              uStack_70 = uStack_88;
              if (*(int *)(iVar3 + 0x10) != 0) {
                func_0x01485278(&uStack_80,*(int *)(iVar3 + 0x10),0);
              }
              func_0x01485278(&uStack_80,piVar12,0);
              func_0x01485278(&uStack_80,iVar1,0);
              iVar8 = *(int *)(iVar3 + 8);
              uVar6 = *(undefined4 *)(iVar3 + 0xc);
              iVar1 = *(int *)(iVar3 + 0x10);
              if (iVar8 == 0) {
                func_0x01384bf0();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x0245495c(iVar8,uVar6,&uStack_80,uVar4,0,0);
              return;
            }
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if ((((*(int *)(iVar1 + 0x4c) == 0x50) &&
                 (*(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 0x10))) &&
                (iVar1 = (**(code **)(*piVar12 + 0x108))(piVar12,*(undefined4 *)(*piVar12 + 0x10c)),
                iVar1 != 0)) && (iVar1 = func_0x02b48934(piVar12,0), iVar1 != 0)) {
              if ((char)piVar12[0x20] != '\0') {
                return;
              }
              iVar1 = FUN_02a356fc(piVar12);
              if (iVar1 != 0) {
                iVar1 = func_0x0229f06c(0x6a3d,0);
                if (iVar1 == 0) {
                  iVar1 = func_0x01c24918(0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                    /* WARNING: Could not recover jumptable at 0x02a354b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*piVar12 + 0x1e0))
                            (piVar12,*(undefined4 *)(iVar1 + 0xfc),0,
                             *(undefined4 *)(*piVar12 + 0x1e4));
                  return;
                }
                iVar1 = func_0x0229f13c(0x6a3d,0);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                unaff_lr = 0x2a37340;
                register0x00000054 = (BADSPACEBASE *)&uStack_48;
                unaff_r7 = 0;
                param_1 = piVar12;
                unaff_r4 = piStack_58;
                unaff_r5 = iStack_54;
                goto SUB_02173f80;
              }
            }
            return;
          }
        }
        piVar12 = *(int **)(iRam02a37354 + 0x2a372b4);
        uVar6 = *(undefined4 *)(iVar1 + 0x2c);
        uVar4 = *(undefined4 *)(iVar8 + 0x40);
        iVar1 = *piVar12;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar12;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x36c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = **(undefined4 **)(iRam02a37358 + 0x2a372fc);
        uStack_34 = 6;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_3c = 1;
        uStack_38 = 1;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_48 = uVar6;
        uStack_44 = uVar9;
        func_0x02af6c48(iVar3,unaff_r8,param_1,uVar4);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6a40,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a3a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
SUB_02173f80:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
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
    func_0x01485278((undefined4 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined4 *)((int)register0x00000054 + -0x30),param_1,0);
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
  func_0x0245495c(iVar3,uVar6,(undefined4 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.ActivityScoreShop.Node$$.ctor RVA 0x2a25b78 =====

void FUN_02a35b78(void)

{
  return;
}



// ===== FAT.ActivityScoreShop$$TryAddToken RVA 0x2a25b80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a35b80(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  bool bVar8;
  
  iVar1 = func_0x0229f06c(0x148,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02a33be8(param_1);
    if ((((0 < param_3) && (iVar1 == param_2)) && (iVar1 = func_0x02b48934(param_1,0), iVar1 != 0))
       && (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)),
          iVar1 != 0)) {
      pcVar6 = (char *)(_UNK_02a35e68 + 0x2a35c70);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02a35e6c + 0x2a35c84));
        func_0x01384978(*(undefined4 *)(_UNK_02a35e70 + 0x2a35c90));
        func_0x01384978(*(undefined4 *)(_UNK_02a35e74 + 0x2a35c9c));
        func_0x01384978(*(undefined4 *)(_UNK_02a35e78 + 0x2a35ca8));
        func_0x01384978(*(undefined4 *)(_UNK_02a35e7c + 0x2a35cb4));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x14a,0);
      if (iVar1 == 0) {
        if (param_3 != 0) {
          uVar2 = func_0x02a35e94(param_1);
          iVar1 = param_1[0x16];
          if (*(int *)(**(int **)(_UNK_02a35e80 + 0x2a35d2c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = func_0x04825cf4(0,iVar1 + param_3,0);
          piVar7 = *(int **)(_UNK_02a35e84 + 0x2a35d60);
          param_1[0x16] = iVar3;
          iVar4 = *piVar7;
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x01384ab4();
            iVar4 = *piVar7;
          }
          iVar3 = iVar3 - iVar1;
          iVar1 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x36c);
          bVar8 = param_4 != iVar1;
          if (param_4 != iVar1) {
            uVar5 = FUN_02a33be8(param_1);
            iVar1 = param_1[0x16];
            if (param_4 == 0) {
              iVar4 = *piVar7;
              if (*(int *)(iVar4 + 0x74) == 0) {
                func_0x01384ab4();
                iVar4 = *piVar7;
              }
              param_4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x364);
            }
            uVar2 = uVar2 & bVar8;
            func_0x019a4b9c(uVar5,iVar3,iVar1,param_4,0);
          }
          if (*(int *)(**(int **)(_UNK_02a35e88 + 0x2a35df8) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02a35e8c + 0x2a35e14));
          iVar4 = param_1[0x16];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x034a0af8(iVar1,iVar4,iVar3,**(undefined4 **)(_UNK_02a35e90 + 0x2a35e40));
          iVar1 = func_0x02a35e94(param_1);
          if (iVar1 != 0 && uVar2 != 1) {
            *(undefined1 *)(param_1 + 0x1e) = 1;
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x14a,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0217ab90(iVar1,param_1,param_3,param_4,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8
                        ,unaff_r9);
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x148,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$AddTokenInternal RVA 0x2a25c50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a35c50(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  
  pcVar6 = (char *)(_UNK_02a35e68 + 0x2a35c70);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a35e6c + 0x2a35c84));
    func_0x01384978(*(undefined4 *)(_UNK_02a35e70 + 0x2a35c90));
    func_0x01384978(*(undefined4 *)(_UNK_02a35e74 + 0x2a35c9c));
    func_0x01384978(*(undefined4 *)(_UNK_02a35e78 + 0x2a35ca8));
    func_0x01384978(*(undefined4 *)(_UNK_02a35e7c + 0x2a35cb4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x14a,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      uVar2 = func_0x02a35e94(param_1);
      iVar1 = *(int *)(param_1 + 0x58);
      if (*(int *)(**(int **)(_UNK_02a35e80 + 0x2a35d2c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x04825cf4(0,iVar1 + param_2,0);
      piVar7 = *(int **)(_UNK_02a35e84 + 0x2a35d60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar4 = *piVar7;
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x01384ab4();
        iVar4 = *piVar7;
      }
      iVar3 = iVar3 - iVar1;
      iVar1 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x36c);
      bVar9 = param_3 != iVar1;
      if (param_3 != iVar1) {
        uVar5 = FUN_02a33be8(param_1);
        uVar8 = *(undefined4 *)(param_1 + 0x58);
        if (param_3 == 0) {
          iVar1 = *piVar7;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar7;
          }
          param_3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x364);
        }
        uVar2 = uVar2 & bVar9;
        func_0x019a4b9c(uVar5,iVar3,uVar8,param_3,0);
      }
      if (*(int *)(**(int **)(_UNK_02a35e88 + 0x2a35df8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02a35e8c + 0x2a35e14));
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x034a0af8(iVar1,uVar5,iVar3,**(undefined4 **)(_UNK_02a35e90 + 0x2a35e40));
      iVar1 = func_0x02a35e94(param_1);
      if (iVar1 != 0 && uVar2 != 1) {
        *(undefined1 *)(param_1 + 0x78) = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$CanClaimCurrent RVA 0x2a25e94 =====

uint FUN_02a35e94(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x14b,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      uVar4 = 0;
      iVar1 = func_0x02b48934(param_1,0);
      if ((iVar1 != 0) && ((char)param_1[0x20] == '\0')) {
        uVar7 = func_0x02a35f5c(param_1);
        iVar1 = (int)((ulonglong)uVar7 >> 0x20);
        iVar3 = (int)uVar7;
        bVar6 = iVar3 != 0;
        if (bVar6) {
          iVar1 = *(int *)(iVar3 + 0xc);
        }
        uVar4 = (uint)bVar6;
        if ((bVar6 && iVar1 != 1) && (uVar4 = 0, *(int *)(iVar3 + 0x10) <= param_1[0x16])) {
          uVar4 = 1;
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x14b,0);
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
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ActivityScoreShop$$get_CurrentNode RVA 0x2a25f5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a35f5c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02a36010 + 0x2a35f74);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a36014 + 0x2a35f88));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x14d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x03005894(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x5c),
                            &uStack_14,**(undefined4 **)(_UNK_02a36018 + 0x2a35fec));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0217aa88(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityScoreShop$$IsEntryRedDotOn RVA 0x2a2601c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02a3601c(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(_UNK_02a3613c + 0x2a3603c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a36140 + 0x2a36050));
    func_0x01384978(*(undefined4 *)(_UNK_02a36144 + 0x2a3605c));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x6a4d,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      uVar3 = 0;
      iVar1 = func_0x02b48934(param_1,0);
      if ((((iVar1 != 0) && ((char)param_1[0x20] == '\0')) &&
          (iVar1 = FUN_02a35f5c(param_1), iVar1 != 0)) && (*(int *)(iVar1 + 0xc) == 0)) {
        if ((param_2 & 0xff) == 0) {
          param_3 = param_1[0x16];
        }
        uVar3 = (uint)(*(int *)(iVar1 + 0x10) <= param_3);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a4d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02245d98(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.ActivityScoreShop$$TryClaimCurrentReward RVA 0x2a26148 =====

/* WARNING: Possible PIC construction at 0x02a362e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02a362ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a36148(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_r5;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int iVar12;
  undefined4 unaff_lr;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x6a4e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    iStack_34 = iStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485238(&iStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar8,uVar11,&iStack_38,uVar4);
    return;
  }
  if ((*(int *)(param_1 + 0x5c) != param_2) || (iVar1 = FUN_02a35f5c(param_1), iVar1 == 0)) {
    return;
  }
  if (*(int *)(iVar1 + 0xc) == 1) {
    pcVar5 = (char *)(_UNK_02a368ac + 0x2a366ec);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02a368b0 + 0x2a36700));
      func_0x01384978(*(undefined4 *)(_UNK_02a368b4 + 0x2a3670c));
      func_0x01384978(*(undefined4 *)(_UNK_02a368b8 + 0x2a36718));
      func_0x01384978(*(undefined4 *)(_UNK_02a368bc + 0x2a36724));
      func_0x01384978(*(undefined4 *)(_UNK_02a368c0 + 0x2a36730));
      *pcVar5 = '\x01';
    }
    iVar8 = func_0x0229f06c(0x6a52,0);
    if (iVar8 == 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x14) < 1) {
        uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02a368c4 + 0x2a36818),&stack0xffffffec);
        puVar3 = *(undefined4 **)(_UNK_02a368c8 + 0x2a36838);
      }
      else {
        iVar1 = func_0x018401f0(*(int *)(iVar1 + 0x14),0);
        if (iVar1 != 0) {
          iVar8 = func_0x01c24918(0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0xd8);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(iVar8 + 0x1c);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uStack_20 = 0;
          uStack_1c = 0;
          func_0x024d0eb0(iVar8,param_1,iVar1,0);
          return;
        }
        uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02a368d4 + 0x2a36848),&stack0xffffffe8);
        puVar3 = *(undefined4 **)(_UNK_02a368d8 + 0x2a36864);
      }
      uVar11 = func_0x0467272c(*puVar3,**(undefined4 **)(_UNK_02a368cc + 0x2a36874),uVar11,0);
      if (*(int *)(**(int **)(_UNK_02a368d0 + 0x2a36888) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar11,0);
      return;
    }
    iVar8 = func_0x0229f13c(0x6a52,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    if (*(int *)(iVar1 + 0xc) != 0) {
      return;
    }
    pcVar5 = (char *)(_UNK_02a36668 + 0x2a36208);
    iStack_4c = param_1;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02a3666c + 0x2a3621c));
      func_0x01384978(*(undefined4 *)(_UNK_02a36670 + 0x2a36228));
      func_0x01384978(*(undefined4 *)(_UNK_02a36674 + 0x2a36234));
      func_0x01384978(*(undefined4 *)(_UNK_02a36678 + 0x2a36240));
      func_0x01384978(*(undefined4 *)(_UNK_02a3667c + 0x2a3624c));
      func_0x01384978(*(undefined4 *)(_UNK_02a36680 + 0x2a36258));
      func_0x01384978(*(undefined4 *)(_UNK_02a36684 + 0x2a36264));
      func_0x01384978(*(undefined4 *)(_UNK_02a36688 + 0x2a36270));
      func_0x01384978(*(undefined4 *)(_UNK_02a3668c + 0x2a3627c));
      func_0x01384978(*(undefined4 *)(_UNK_02a36690 + 0x2a36288));
      func_0x01384978(*(undefined4 *)(_UNK_02a36694 + 0x2a36294));
      *pcVar5 = '\x01';
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    iVar8 = func_0x0229f06c(0x6a4f,0);
    if (iVar8 == 0) {
      iVar8 = *(int *)(iStack_4c + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 0x10);
      if (iVar6 <= iVar8) {
        piVar9 = *(int **)(_UNK_02a36698 + 0x2a3631c);
        iVar8 = *piVar9;
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x01384ab4();
          iVar8 = *piVar9;
        }
        iVar7 = iStack_4c;
        FUN_02a35c50(iStack_4c,-iVar6,*(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x364));
        iVar8 = *(int *)(iVar7 + 0x7c);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar8 + 0xc);
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
        if (0 < iVar6) {
          func_0x0484e5ec(*(undefined4 *)(iVar8 + 8),0,iVar6,0);
        }
        iVar8 = func_0x01c24918(0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0x1c) != 0) {
          iVar8 = *(int *)(iVar8 + 0x40);
          uVar11 = *(undefined4 *)(iVar1 + 0x18);
          if (*(int *)(**(int **)(_UNK_02a3669c + 0x2a363bc) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar6 = func_0x036a1750(uVar11,**(undefined4 **)(_UNK_02a366a0 + 0x2a363dc));
          iVar7 = *(int *)(iVar1 + 0x1c);
          iStack_50 = iVar1;
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x0328fe1c(&iStack_48,iVar7,**(undefined4 **)(_UNK_02a366a4 + 0x2a36410));
          iStack_38 = iStack_48;
          iStack_34 = uStack_44;
          iStack_30 = uStack_40;
          iStack_2c = iStack_3c;
          while (uVar2 = func_0x03f5f428(&iStack_38,**(undefined4 **)(_UNK_02a366c0 + 0x2a36434)),
                iVar1 = iStack_2c, uVar2 != 0) {
            if (iStack_2c == 0) {
              uVar2 = func_0x01384bf0();
            }
            uVar11 = *(undefined4 *)(iVar1 + 8);
            if (iVar6 != 0) {
              uVar2 = (uint)*(byte *)(iVar6 + 0x18);
            }
            uVar4 = *(undefined4 *)(iVar1 + 0xc);
            if (iVar6 != 0 && uVar2 != 0) {
              iVar7 = 0x20;
              iVar1 = **(int **)(_UNK_02a366ac + 0x2a364a0);
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                goto LAB_02a364b0;
              }
            }
            else {
              iVar7 = 0x364;
              iVar1 = **(int **)(_UNK_02a366a8 + 0x2a3647c);
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
LAB_02a364b0:
                iVar1 = **(int **)(_UNK_02a366b0 + 0x2a364bc);
              }
            }
            uVar10 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + iVar7);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            uStack_60 = **(undefined4 **)(_UNK_02a366b4 + 0x2a364dc);
            uStack_5c = **(undefined4 **)(_UNK_02a366b8 + 0x2a364e8);
            uStack_64 = 0x1b1;
            uStack_58 = 0;
            uStack_70 = 0;
            uStack_6c = 0;
            uStack_68 = 0;
            uVar11 = func_0x01cdcbac(iVar8,uVar11,uVar4,uVar10);
            iVar1 = *(int *)(iStack_4c + 0x7c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar1 + 8);
            uVar2 = *(uint *)(iVar1 + 0xc);
            piVar9 = *(int **)(_UNK_02a366bc + 0x2a36550);
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
            iVar12 = *piVar9;
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            if (uVar2 < *(uint *)(iVar7 + 0xc)) {
              *(uint *)(iVar1 + 0xc) = uVar2 + 1;
              *(undefined4 *)(iVar7 + uVar2 * 4 + 0x10) = uVar11;
            }
            else {
              func_0x0328f170(iVar1,uVar11,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          func_0x03f5f424(&iStack_38,**(undefined4 **)(_UNK_02a366c4 + 0x2a365a4));
          iVar1 = iStack_50;
        }
        iVar8 = iStack_4c;
        FUN_02a35758(iStack_4c,iVar1);
        func_0x02a368dc(iVar8);
      }
      return;
    }
    iVar8 = func_0x0229f13c(0x6a4f,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2a362ec;
    param_1 = iStack_4c;
    unaff_r4 = iVar8;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_70;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar1,0);
  iVar6 = *(int *)(iVar8 + 0x10);
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
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  iVar6 = *(int *)(iVar8 + 8);
  uVar11 = *(undefined4 *)(iVar8 + 0xc);
  iVar1 = *(int *)(iVar8 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.ActivityScoreShop$$ClaimTokenReward RVA 0x2a261ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a361ec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_02a36668 + 0x2a36208);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a3666c + 0x2a3621c));
    func_0x01384978(*(undefined4 *)(_UNK_02a36670 + 0x2a36228));
    func_0x01384978(*(undefined4 *)(_UNK_02a36674 + 0x2a36234));
    func_0x01384978(*(undefined4 *)(_UNK_02a36678 + 0x2a36240));
    func_0x01384978(*(undefined4 *)(_UNK_02a3667c + 0x2a3624c));
    func_0x01384978(*(undefined4 *)(_UNK_02a36680 + 0x2a36258));
    func_0x01384978(*(undefined4 *)(_UNK_02a36684 + 0x2a36264));
    func_0x01384978(*(undefined4 *)(_UNK_02a36688 + 0x2a36270));
    func_0x01384978(*(undefined4 *)(_UNK_02a3668c + 0x2a3627c));
    func_0x01384978(*(undefined4 *)(_UNK_02a36690 + 0x2a36288));
    func_0x01384978(*(undefined4 *)(_UNK_02a36694 + 0x2a36294));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x6a4f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 0x10);
    if (iVar4 <= iVar1) {
      piVar8 = *(int **)(_UNK_02a36698 + 0x2a3631c);
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      FUN_02a35c50(param_1,-iVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x364));
      iVar1 = *(int *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar4) {
        func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
      }
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(param_2 + 0x1c) != 0) {
        iVar1 = *(int *)(iVar1 + 0x40);
        uVar5 = *(undefined4 *)(param_2 + 0x18);
        if (*(int *)(**(int **)(_UNK_02a3669c + 0x2a363bc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_02a366a0 + 0x2a363dc));
        iVar6 = *(int *)(param_2 + 0x1c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_48,iVar6,**(undefined4 **)(_UNK_02a366a4 + 0x2a36410));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        while (uVar2 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_02a366c0 + 0x2a36434)),
              iVar6 = iStack_2c, uVar2 != 0) {
          if (iStack_2c == 0) {
            uVar2 = func_0x01384bf0();
          }
          uVar5 = *(undefined4 *)(iVar6 + 8);
          if (iVar4 != 0) {
            uVar2 = (uint)*(byte *)(iVar4 + 0x18);
          }
          uVar7 = *(undefined4 *)(iVar6 + 0xc);
          if (iVar4 != 0 && uVar2 != 0) {
            iVar9 = 0x20;
            iVar6 = **(int **)(_UNK_02a366ac + 0x2a364a0);
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x01384ab4();
              goto LAB_02a364b0;
            }
          }
          else {
            iVar9 = 0x364;
            iVar6 = **(int **)(_UNK_02a366a8 + 0x2a3647c);
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x01384ab4();
LAB_02a364b0:
              iVar6 = **(int **)(_UNK_02a366b0 + 0x2a364bc);
            }
          }
          uVar10 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + iVar9);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar5 = func_0x01cdcbac(iVar1,uVar5,uVar7,uVar10,0,0,0,0x1b1,
                                  **(undefined4 **)(_UNK_02a366b4 + 0x2a364dc),
                                  **(undefined4 **)(_UNK_02a366b8 + 0x2a364e8),0);
          iVar6 = *(int *)(param_1 + 0x7c);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar9 = *(int *)(iVar6 + 8);
          uVar2 = *(uint *)(iVar6 + 0xc);
          piVar8 = *(int **)(_UNK_02a366bc + 0x2a36550);
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
          iVar11 = *piVar8;
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          if (uVar2 < *(uint *)(iVar9 + 0xc)) {
            *(uint *)(iVar6 + 0xc) = uVar2 + 1;
            *(undefined4 *)(iVar9 + uVar2 * 4 + 0x10) = uVar5;
          }
          else {
            func_0x0328f170(iVar6,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02a366c4 + 0x2a365a4));
      }
      FUN_02a35758(param_1,param_2);
      func_0x02a368dc(param_1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a4f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$ClaimIAPReward RVA 0x2a266d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a366d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
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
  undefined4 uStack_18;
  
  pcVar6 = (char *)(_UNK_02a368ac + 0x2a366ec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a368b0 + 0x2a36700));
    func_0x01384978(*(undefined4 *)(_UNK_02a368b4 + 0x2a3670c));
    func_0x01384978(*(undefined4 *)(_UNK_02a368b8 + 0x2a36718));
    func_0x01384978(*(undefined4 *)(_UNK_02a368bc + 0x2a36724));
    func_0x01384978(*(undefined4 *)(_UNK_02a368c0 + 0x2a36730));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a52,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0x14) < 1) {
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02a368c4 + 0x2a36818),&stack0xffffffec);
      puVar2 = *(undefined4 **)(_UNK_02a368c8 + 0x2a36838);
    }
    else {
      iVar1 = func_0x018401f0(*(int *)(param_2 + 0x14),0);
      if (iVar1 != 0) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xd8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        uStack_1c = 0;
        func_0x024d0eb0(iVar4,param_1,iVar1,0);
        return;
      }
      uStack_18 = *(undefined4 *)(param_2 + 0x14);
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02a368d4 + 0x2a36848),&uStack_18);
      puVar2 = *(undefined4 **)(_UNK_02a368d8 + 0x2a36864);
    }
    uVar5 = func_0x0467272c(*puVar2,**(undefined4 **)(_UNK_02a368cc + 0x2a36874),uVar5,0);
    if (*(int *)(**(int **)(_UNK_02a368d0 + 0x2a36888) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar5,0);
    return;
  }
  iVar1 = func_0x0229f13c(0x6a52,0);
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
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.ActivityScoreShop$$ForwardToNextNode RVA 0x2a268dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a368dc(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_02a36a60 + 0x2a368f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a36a64 + 0x2a36904));
    func_0x01384978(*(undefined4 *)(_UNK_02a36a68 + 0x2a36910));
    func_0x01384978(*(undefined4 *)(_UNK_02a36a6c + 0x2a3691c));
    func_0x01384978(*(undefined4 *)(_UNK_02a36a70 + 0x2a36928));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a51,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x68);
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 < *(int *)(iVar5 + 0xc)) {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar1 = **(int **)(_UNK_02a36a74 + 0x2a369a0);
    *(int *)(param_1 + 0x5c) = iVar5 + 1;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02a36a78 + 0x2a369c8));
    uVar7 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a0af8(iVar1,iVar5,uVar7,**(undefined4 **)(_UNK_02a36a7c + 0x2a369f4));
    iVar5 = *(int *)(param_1 + 0x68);
    iVar1 = *(int *)(param_1 + 0x5c);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar1) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xd8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar6 = (char *)(_UNK_02b49454 + 0x2b49370);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
        *pcVar6 = '\x01';
      }
      iVar5 = func_0x0229f06c(0x19d,0);
      if (iVar5 == 0) {
        func_0x02b41428(iVar1,param_1,0);
        func_0x02b43478(iVar1,param_1);
        puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
        *(undefined1 *)(iVar1 + 0x34) = 1;
        iVar5 = func_0x03668dfc(*puVar3);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x01c36988(iVar5,0);
        if (iVar5 != 0) {
          pcVar6 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
            func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
            func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
            *pcVar6 = '\x01';
          }
          iVar5 = func_0x0229f06c(0x1a9,0);
          if (iVar5 == 0) {
            iVar5 = *(int *)(iVar1 + 0xc);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x03cd675c(iVar5,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
            if (0 < iVar5) {
              func_0x02b4558c(iVar1);
            }
            func_0x02b45d7c(iVar1,1);
            func_0x02b46034(iVar1);
            func_0x02b46318(iVar1);
            func_0x02b4639c(iVar1,0);
            func_0x02b467e4(iVar1,0);
            if (*(char *)(iVar1 + 0x34) != '\0') {
              piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
              *(undefined1 *)(iVar1 + 0x34) = 0;
              if (*(int *)(*piVar2 + 0x74) == 0) {
                func_0x01384ab4();
              }
              param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
              if (param_1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x0229f06c(0x3f,0);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 8);
                if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(iVar1 + 0xc))
                            (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
                  return;
                }
                return;
              }
              iVar1 = func_0x0229f13c(0x3f,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              goto SUB_02173f80;
            }
          }
          else {
            iVar5 = func_0x0229f13c(0x1a9,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uStack_20 = 0;
            func_0x0217f950(iVar5,iVar1,0,1);
          }
          return;
        }
      }
      else {
        iVar5 = func_0x0229f13c(0x19d,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x02175630(iVar5,iVar1,param_1,0);
      }
      return;
    }
  }
  return;
}



// ===== FAT.ActivityScoreShop$$PurchaseSuccess RVA 0x2a26a80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a36a80(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02a36bd8 + 0x2a36aa0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a36bdc + 0x2a36ab8));
    func_0x01384978(*(undefined4 *)(_UNK_02a36be0 + 0x2a36ac4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a53,0);
  if (iVar1 == 0) {
    if (((*(char *)(param_1 + 0x80) == '\0') && (iVar1 = FUN_02a35f5c(param_1), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x14) == param_2)) {
      FUN_02a35758(param_1,iVar1);
      if (param_4 == 0) {
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar4) {
          func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
        }
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0328f380(iVar1,param_3,**(undefined4 **)(_UNK_02a36be4 + 0x2a36bc0));
      }
      pcVar6 = (char *)(_UNK_02a36a60 + 0x2a368f0);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02a36a64 + 0x2a36904));
        func_0x01384978(*(undefined4 *)(_UNK_02a36a68 + 0x2a36910));
        func_0x01384978(*(undefined4 *)(_UNK_02a36a6c + 0x2a3691c));
        func_0x01384978(*(undefined4 *)(_UNK_02a36a70 + 0x2a36928));
        *pcVar6 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x6a51,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x6a51,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
SUB_02173f80:
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        func_0x0245494c(&uStack_48,0,0);
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        iStack_28 = uStack_40;
        uStack_24 = uStack_3c;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_30,param_1,0);
        iVar4 = *(int *)(iVar1 + 8);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 2;
        if (iVar1 == 0) {
          uVar5 = 1;
        }
        func_0x0245495c(iVar4,uVar7,&uStack_30,uVar5,0,0);
        return;
      }
      iVar4 = *(int *)(param_1 + 0x68);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 < *(int *)(iVar4 + 0xc)) {
        iVar4 = *(int *)(param_1 + 0x5c);
        iVar1 = **(int **)(_UNK_02a36a74 + 0x2a369a0);
        *(int *)(param_1 + 0x5c) = iVar4 + 1;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02a36a78 + 0x2a369c8));
        uVar7 = *(undefined4 *)(param_1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a0af8(iVar1,iVar4,uVar7,**(undefined4 **)(_UNK_02a36a7c + 0x2a369f4));
        iVar4 = *(int *)(param_1 + 0x68);
        iVar1 = *(int *)(param_1 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar4 + 0xc) <= iVar1) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0xd8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          pcVar6 = (char *)(_UNK_02b49454 + 0x2b49370);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
            *pcVar6 = '\x01';
          }
          iVar4 = func_0x0229f06c(0x19d,0);
          if (iVar4 == 0) {
            func_0x02b41428(iVar1,param_1,0);
            func_0x02b43478(iVar1,param_1);
            puVar3 = *(undefined4 **)(_UNK_02b4945c + 0x2b49408);
            *(undefined1 *)(iVar1 + 0x34) = 1;
            iVar4 = func_0x03668dfc(*puVar3);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x01c36988(iVar4,0);
            if (iVar4 != 0) {
              pcVar6 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
              if (*pcVar6 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
                func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
                func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
                *pcVar6 = '\x01';
              }
              iVar4 = func_0x0229f06c(0x1a9,0);
              if (iVar4 == 0) {
                iVar4 = *(int *)(iVar1 + 0xc);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                iVar4 = func_0x03cd675c(iVar4,**(undefined4 **)(_UNK_02b40ae0 + 0x2b40a1c));
                if (0 < iVar4) {
                  func_0x02b4558c(iVar1);
                }
                func_0x02b45d7c(iVar1,1);
                func_0x02b46034(iVar1);
                func_0x02b46318(iVar1);
                func_0x02b4639c(iVar1,0);
                func_0x02b467e4(iVar1,0);
                if (*(char *)(iVar1 + 0x34) != '\0') {
                  piVar2 = *(int **)(_UNK_02b40ae4 + 0x2b40a80);
                  *(undefined1 *)(iVar1 + 0x34) = 0;
                  if (*(int *)(*piVar2 + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  param_1 = func_0x0300d558(**(undefined4 **)(_UNK_02b40ae8 + 0x2b40aa0));
                  if (param_1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = func_0x0229f06c(0x3f,0);
                  if (iVar1 == 0) {
                    iVar1 = *(int *)(param_1 + 8);
                    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)(iVar1 + 0xc))
                                (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
                      return;
                    }
                    return;
                  }
                  iVar1 = func_0x0229f13c(0x3f,0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  goto SUB_02173f80;
                }
              }
              else {
                iVar4 = func_0x0229f13c(0x1a9,0);
                if (iVar4 == 0) {
                  func_0x01384bf0();
                }
                func_0x0217f950(iVar4,iVar1,0,1);
              }
              return;
            }
          }
          else {
            iVar4 = func_0x0229f13c(0x19d,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x02175630(iVar4,iVar1,param_1,0);
          }
          return;
        }
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a53,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x021c8e84(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$GetNodeState RVA 0x2a26be8 =====

undefined4 FUN_02a36be8(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x6a54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a54,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  if (param_2 < *(int *)(param_1 + 0x5c)) {
    return 0;
  }
  uVar4 = 2;
  if (*(int *)(param_1 + 0x5c) == param_2) {
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.ActivityScoreShop$$get_PackId RVA 0x2a26c5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a36c5c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_02a36d40 + 0x2a36c74);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a36d44 + 0x2a36c88));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6a55,0);
  if (iVar1 == 0) {
    iVar2 = func_0x03005894(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x5c),
                            &iStack_14,**(undefined4 **)(_UNK_02a36d48 + 0x2a36cf0));
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar2 = iStack_14;
      if (*(int *)(iVar1 + 0xc) == 1) {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(iVar2 + 0x14);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a55,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar4;
}



// ===== FAT.ActivityScoreShop$$set_PackId RVA 0x2a26d4c =====

void FUN_02a36d4c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x6a56,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x6a56,0);
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



// ===== FAT.ActivityScoreShop$$get_StockTotal RVA 0x2a26da0 =====

undefined4 FUN_02a36da0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a57,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a57,0);
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
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 0xffffffff;
}



// ===== FAT.ActivityScoreShop$$MatchPack RVA 0x2a26df4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a36df4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x0229f06c(0x6a58,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a58,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_022059c0 + 0x22058cc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022059c4 + 0x22058e0),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022059c8 + 0x22059b0));
    return uVar4;
  }
  uVar4 = func_0x018401f0(param_2,0);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01d0fbc8(iVar1,param_2,uVar4,0);
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.ActivityScoreShop$$GetNode RVA 0x2a26e84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a36e84(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02a36f34 + 0x2a36ea0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a36f38 + 0x2a36eb4));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6a59,0);
  if (iVar1 == 0) {
    func_0x03005894(*(undefined4 *)(param_1 + 0x68),param_2,&uStack_14,
                    **(undefined4 **)(_UNK_02a36f3c + 0x2a36f20));
  }
  else {
    iVar1 = func_0x0229f13c(0x6a59,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02245fb4(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityScoreShop$$OpenHelp RVA 0x2a26f40 =====

void FUN_02a36f40(int param_1)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6a5a,0);
  if (iVar1 == 0) {
    uStack_20 = *(undefined8 *)(param_1 + 0x90);
    uStack_18 = *(undefined4 *)(param_1 + 0x98);
    func_0x02b64e08(&uStack_20,param_1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6a5a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$UnregisterSpawnBonusHandler RVA 0x2a26fb8 =====

void FUN_02a36fb8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a3f,0);
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
  if (*(int *)(param_1 + 0x6c) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}



// ===== FAT.ActivityScoreShop$$ClearScoreEntity RVA 0x2a27058 =====

void FUN_02a37058(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6a41,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a41,0);
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
  if (*(int *)(param_1 + 0x70) != 0) {
    func_0x02af7520(*(int *)(param_1 + 0x70),0);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return;
}



// ===== FAT.ActivityScoreShop$$RegisterSpawnBonusHandler RVA 0x2a270c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a370c4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
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
  
  pcVar9 = (char *)(_UNK_02a371a4 + 0x2a370d8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a371a8 + 0x2a370ec));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6a3e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6a3e,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar10,&uStack_30,uVar5);
    return;
  }
  FUN_02a36fb8(param_1);
  uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_02a371ac + 0x2a3714c));
  func_0x020d715c(uVar10,param_1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar10;
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  piVar6 = *(int **)(param_1 + 0x6c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar9 = '\x01';
  }
  iVar7 = func_0x0229f06c(0x16b4,0);
  if (iVar7 != 0) {
    iVar7 = func_0x0229f13c(0x16b4,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar2,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar8 = *(int *)(iVar7 + 8);
    uVar10 = *(undefined4 *)(iVar7 + 0xc);
    iVar2 = *(int *)(iVar7 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x02f6252c(*(undefined4 *)(iVar2 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar2 == 0) {
    return;
  }
  iVar2 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,puVar1[1]);
  return;
}



// ===== FAT.ActivityScoreShop$$SetupScoreEntity RVA 0x2a271b0 =====

/* WARNING: Removing unreachable block (ram,0x02a37358) */
/* WARNING: Removing unreachable block (ram,0x02a37348) */

void FUN_02a371b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 uVar7;
  int unaff_r8;
  int *piVar8;
  undefined4 unaff_lr;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_68;
  int iStack_64;
  int iStack_5c;
  int *piStack_58;
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
  
  pcVar5 = (char *)(iRam02a37340 + 0x2a371c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02a37344 + 0x2a371dc));
    func_0x01384978(*(undefined4 *)(iRam02a37348 + 0x2a371e8));
    func_0x01384978(*(undefined4 *)(iRam02a3734c + 0x2a371f4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a40,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int **)((int)register0x00000054 + -0x18) = unaff_r4;
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
      func_0x01485278((undefined4 *)((int)register0x00000054 + -0x30),iVar3,0);
    }
    func_0x01485278((undefined4 *)((int)register0x00000054 + -0x30),param_1,0);
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
    func_0x0245495c(iVar3,uVar6,(undefined4 *)((int)register0x00000054 + -0x30),uVar4);
    return;
  }
  FUN_02a37058(param_1);
  if ((param_1[0x18] != 0) && (0 < *(int *)(param_1[0x18] + 0x2c))) {
    unaff_r5 = func_0x01384be4(**(undefined4 **)(iRam02a37350 + 0x2a37270));
    func_0x02afb3e0(unaff_r5,0);
    iVar3 = param_1[0x18];
    unaff_r8 = param_1[0x16];
    param_1[0x1c] = unaff_r5;
    iVar1 = iVar3;
    if (iVar3 == 0) {
      func_0x01384bf0();
      iVar1 = param_1[0x18];
      bVar10 = iVar1 == 0;
      bVar9 = true;
      if (bVar10) {
        uVar11 = func_0x01384bf0();
        iVar1 = (int)((ulonglong)uVar11 >> 0x20);
        piVar8 = (int *)uVar11;
        if (bVar10) {
                    /* WARNING: Could not recover jumptable at 0x02a37344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(unaff_r5 - (!bVar9 + 0x780)))();
          return;
        }
        piStack_58 = param_1;
        iVar2 = func_0x0229f06c(0x6a3b,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0x6a3b,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piStack_68 = piStack_58;
          uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_78 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_80 = 0;
          uStack_70 = 0;
          iStack_64 = unaff_r5;
          iStack_5c = iVar3;
          piStack_58 = (int *)unaff_r8;
          func_0x0245494c(&uStack_98,0,iVar1,0);
          uStack_80 = uStack_98;
          uStack_7c = uStack_94;
          uStack_78 = uStack_90;
          uStack_74 = uStack_8c;
          uStack_70 = uStack_88;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_80,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_80,piVar8,0);
          func_0x01485278(&uStack_80,iVar1,0);
          iVar3 = *(int *)(iVar2 + 8);
          uVar6 = *(undefined4 *)(iVar2 + 0xc);
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 3;
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          func_0x0245495c(iVar3,uVar6,&uStack_80,uVar4,0,0);
          return;
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if ((((*(int *)(iVar1 + 0x4c) == 0x50) && (*(int *)(iVar1 + 0xc) == *(int *)(iVar1 + 0x10)))
            && (iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c)),
               iVar1 != 0)) && (iVar1 = func_0x02b48934(piVar8,0), iVar1 != 0)) {
          if ((char)piVar8[0x20] != '\0') {
            return;
          }
          iVar1 = FUN_02a356fc(piVar8);
          if (iVar1 != 0) {
            iVar1 = func_0x0229f06c(0x6a3d,0);
            if (iVar1 == 0) {
              iVar1 = func_0x01c24918(0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
                    /* WARNING: Could not recover jumptable at 0x02a354b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*piVar8 + 0x1e0))
                        (piVar8,*(undefined4 *)(iVar1 + 0xfc),0,*(undefined4 *)(*piVar8 + 0x1e4));
              return;
            }
            iVar1 = func_0x0229f13c(0x6a3d,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            unaff_lr = 0x2a37340;
            register0x00000054 = (BADSPACEBASE *)&uStack_48;
            unaff_r7 = 0;
            param_1 = piVar8;
            unaff_r4 = piStack_58;
            goto SUB_02173f80;
          }
        }
        return;
      }
    }
    piVar8 = *(int **)(iRam02a37354 + 0x2a372b4);
    uVar6 = *(undefined4 *)(iVar1 + 0x2c);
    uVar4 = *(undefined4 *)(iVar3 + 0x40);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x36c);
    if (unaff_r5 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = **(undefined4 **)(iRam02a37358 + 0x2a372fc);
    uStack_34 = 6;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_3c = 1;
    uStack_38 = 1;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_48 = uVar6;
    uStack_44 = uVar7;
    func_0x02af6c48(unaff_r5,unaff_r8,param_1,uVar4);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$OnTokenFlyEnd RVA 0x2a2735c =====

void FUN_02a3735c(int *param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x6a3b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a3b,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if ((((*(int *)(param_2 + 0x4c) == 0x50) && (*(int *)(param_2 + 0xc) == *(int *)(param_2 + 0x10)))
      && (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)),
         iVar1 != 0)) && (iVar1 = func_0x02b48934(param_1,0), iVar1 != 0)) {
    if ((char)param_1[0x20] != '\0') {
      return;
    }
    iVar1 = FUN_02a356fc(param_1);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f06c(0x6a3d,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x6a3d,0);
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
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
                    /* WARNING: Could not recover jumptable at 0x02a354b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e0))
                (param_1,*(undefined4 *)(iVar1 + 0xfc),0,*(undefined4 *)(*param_1 + 0x1e4));
      return;
    }
  }
  return;
}



// ===== FAT.ActivityScoreShop$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x2a27434 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a37434(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02a37704 + 0x2a37454);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02a37708 + 0x2a3746c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a5b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a5b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (1 < *(int *)(param_1 + 0x74) - 1U) {
    return 0;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    return 0;
  }
  bVar8 = *(char *)(*(int *)(param_2 + 0x28) + 0x46) != '\0';
  iVar1 = 0;
  if (bVar8) {
    iVar1 = *(int *)(param_1 + 0x70);
  }
  if (!bVar8 || iVar1 == 0) {
    return 0;
  }
  piVar7 = *(int **)(_UNK_02a3770c + 0x2a37510);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar7;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01e4b23c(iVar1,param_2,0);
  if (iVar1 == 0) {
LAB_02a375a8:
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02af99d0(iVar1,param_2,param_4,0);
    uVar2 = 1;
  }
  else {
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x01e4b2b0(iVar1,param_2,0);
    iVar3 = func_0x02b449f8(param_1,0);
    if (iVar1 != iVar3) goto LAB_02a375a8;
  }
  uVar4 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x01e4b23c(0,param_2,0);
    if (iVar3 != 0) {
      func_0x01384bf0();
      goto LAB_02a37634;
    }
  }
  else {
    iVar3 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar3 != 0) {
LAB_02a37634:
      uVar4 = 0;
      iVar3 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar5 = func_0x02b449f8(param_1,0);
      if (iVar3 == iVar5) goto LAB_02a376e8;
    }
  }
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar7;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar3,param_2,0);
  uVar4 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar4,uStack_28,uStack_2c,0);
  uVar4 = 1;
LAB_02a376e8:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar4;
  }
  return uVar2;
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_get_Valid RVA 0x2a27710 =====

uint FUN_02a37710(int param_1)

{
  uint uVar1;
  int iVar2;
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
  
  iVar2 = func_0x0229f06c(0x2e65,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x2e65,0);
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
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  return (uint)(*(int *)(param_1 + 0x3c) != 0);
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_SetupFresh RVA 0x2a27718 =====

void FUN_02a37718(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
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



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_SaveSetup RVA 0x2a27720 =====

/* WARNING: Possible PIC construction at 0x024704b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x024704b4) */
/* WARNING: Removing unreachable block (ram,0x024704e4) */
/* WARNING: Removing unreachable block (ram,0x024704e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a37720(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar5 = (char *)(_UNK_024704fc + 0x2470408);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02470500 + 0x247041c),param_2,0);
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x274a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x274a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = uStack_48;
    iStack_2c = uStack_44;
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar4 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x4c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_02470504 + 0x24704b0);
  iVar3 = *piStack_24;
  pcVar5 = (char *)(_UNK_03652bac + 0x3652b1c);
  iStack_30 = param_1;
  iStack_2c = iVar1;
  uStack_28 = uVar4;
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar5 = '\x01';
  }
  func_0x03031dbc(uVar4,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x80));
  func_0x036529a8(iVar1,*(int *)(iVar1 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x3c));
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(uint *)(iVar1 + 0xc);
  *(uint *)(iVar1 + 0xc) = uVar6 + 1;
  if (iVar3 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar3 + uVar6 * 4 + 0x10) = uVar4;
  return;
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_LoadSetup RVA 0x2a27728 =====

void FUN_02a37728(int *param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x274f,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x274f,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  iVar1 = func_0x01c23c30(1,uVar4,0);
  param_1[0x13] = iVar1;
  iVar1 = func_0x01c23c30(2,uVar4,0);
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x278))(param_1,iVar1,*(undefined4 *)(*param_1 + 0x27c));
                    /* WARNING: Could not recover jumptable at 0x024705c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined4 *)(*param_1 + 0x2ac));
    return;
  }
  return;
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_WhenReset RVA 0x2a27730 =====

void FUN_02a37730(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_WhenEnd RVA 0x2a27738 =====

void FUN_02a37738(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_Open RVA 0x2a27740 =====

/* WARNING: Possible PIC construction at 0x019a8984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x019a8988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02a37740(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  char *pcVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
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
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x2e6c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2e6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
    *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar4 = *(int *)(iVar1 + 0x10);
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
    if (iVar4 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar4,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar4,uVar7,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    return;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x290))(param_1,*(undefined4 *)(*param_1 + 0x294));
  iVar1 = func_0x0229f06c(0x1724,0,0);
  if (iVar1 == 0) {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)piVar2[3];
    pcVar8 = (char *)(_UNK_02b4db08 + 0x2b4d9f0);
    uStack_18 = unaff_r4;
    iStack_14 = unaff_r5;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b4db0c + 0x2b4da04));
      func_0x01384978(*(undefined4 *)(_UNK_02b4db10 + 0x2b4da10));
      *pcVar8 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x13da,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02b4db14 + 0x2b4da6c));
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b4db18 + 0x2b4da84),1);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((param_1 != (int *)0x0) &&
         (iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
        uVar7 = func_0x01384c10();
        func_0x01384aa0(uVar7,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = (int)param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,piVar3,piVar2,0);
      iStack_1c = iStack_14;
      uStack_20 = uStack_18;
      pcVar8 = (char *)(_UNK_019a8b30 + 0x19a88e4);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019a8b34 + 0x19a88f8),0);
        func_0x01384978(*(undefined4 *)(_UNK_019a8b38 + 0x19a8904));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b3c + 0x19a8910));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b40 + 0x19a891c));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b44 + 0x19a8928));
        func_0x01384978(*(undefined4 *)(_UNK_019a8b48 + 0x19a8934));
        *pcVar8 = '\x01';
      }
      uStack_24 = 0;
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0x94b,0);
      if (iVar1 == 0) {
        piVar2 = *(int **)(_UNK_019a8b4c + 0x19a8998);
        if (*(int *)(*piVar2 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019a8b50 + 0x19a89b4));
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        func_0x02b489c0(&uStack_38,param_1,0);
        uVar5 = uStack_34;
        uVar7 = uStack_38;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0x54) = uStack_30;
        *(undefined4 *)(iVar1 + 0x48) = uVar7;
        *(undefined4 *)(iVar1 + 0x4c) = uVar5;
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar7 = func_0x02b3c4a4(param_1,0);
        *(undefined4 *)(iVar1 + 0x50) = uVar7;
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0xc);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar4 + 8) == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(**(int **)(_UNK_019a8b54 + 0x19a8a58) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x024500d4(&uStack_38,0);
        uStack_28 = uStack_38;
        uStack_24 = uStack_34;
        uVar7 = func_0x01486058(&uStack_28,**(undefined4 **)(_UNK_019a8b58 + 0x19a8a84),0);
        *(undefined4 *)(iVar1 + 0x58) = uVar7;
        if (param_1 == (int *)0x0) {
          func_0x01384bf0();
        }
        uVar6 = 0;
        uVar7 = func_0x02b449f8(param_1,0);
        if (*(int *)(**(int **)(_UNK_019a8b5c + 0x19a8ac8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = func_0x036a1750(uVar7,**(undefined4 **)(_UNK_019a8b60 + 0x19a8ae4));
        if ((iVar4 != 0) && (uVar6 = 0, *(char *)(iVar4 + 0x2c) != '\0')) {
          uVar6 = 1;
        }
        iVar4 = *(int *)(*piVar2 + 0x74);
        *(undefined1 *)(iVar1 + 0x5c) = uVar6;
        if (iVar4 == 0) {
          func_0x01384ab4();
        }
        func_0x019930d8(iVar1,0,0);
        return;
      }
      iVar1 = func_0x0229f13c(0x94b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x19a8988;
      unaff_r4 = uStack_18;
      unaff_r5 = iVar1;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
      goto SUB_02173f80;
    }
    iVar1 = func_0x0229f13c(0x13da,0);
    piVar2 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1724,0);
    piVar3 = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,piVar2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,piVar3,0);
  func_0x01485278(&uStack_38,piVar2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar4,uVar7,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_TryPopup RVA 0x2a27748 =====

void FUN_02a37748(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x2e68,0,param_3,0);
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(param_2,uVar2,param_3,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x2e68,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_PurchaseSuccess RVA 0x2a27750 =====

void FUN_02a37750(void)

{
  func_0x02470c28();
  return;
}



// ===== FAT.ActivityScoreShop$$<>iFixBaseProxy_MatchPack RVA 0x2a2776c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a3776c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x0229f06c(0x2e6f,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2e6f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_022059c0 + 0x22058cc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022059c4 + 0x22058e0),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
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
    uVar4 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022059c8 + 0x22059b0));
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.ActivityScoreShop.Node$$GetPackPrice RVA 0x2a27774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02a37774(int param_1)

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
  int iStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x6a5c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a5c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  iVar1 = func_0x018401f0(*(undefined4 *)(param_1 + 0x14),0);
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x30);
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0x20);
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01d14434 + 0x1d142c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01d14438 + 0x1d142d4),uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_01d1443c + 0x1d142e0));
    func_0x01384978(*(undefined4 *)(_UNK_01d14440 + 0x1d142ec));
    func_0x01384978(*(undefined4 *)(_UNK_01d14444 + 0x1d142f8));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x27de,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01d13ecc(iVar3,uVar5,&iStack_14);
    if (iVar1 != 0) {
      iVar1 = **(int **)(**(int **)(_UNK_01d14448 + 0x1d14378) + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = iStack_14;
      iVar1 = *(int *)(iVar1 + 0x30);
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar3 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0244f844(iVar1,uVar5,&iStack_18,**(undefined4 **)(_UNK_01d1444c + 0x1d143d4));
      iVar1 = iStack_18;
      if (iVar3 != 0) {
        if (iStack_18 == 0) {
          func_0x01384bf0();
        }
        return *(undefined4 *)(iVar1 + 0x18);
      }
    }
    if (*(int *)(**(int **)(_UNK_01d14450 + 0x1d14408) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x028c1350(**(undefined4 **)(_UNK_01d14454 + 0x1d14428),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x27de,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x02198e04(iVar1,iVar3,uVar5,0);
  }
  return uVar5;
}


