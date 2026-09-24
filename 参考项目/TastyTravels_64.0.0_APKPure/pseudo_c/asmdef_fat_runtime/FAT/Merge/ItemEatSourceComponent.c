/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemEatSourceComponent$$get_state RVA 0x211bdd0 =====

uint FUN_0212bdd0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e78,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e78,0);
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
    uVar2 = func_0x0245498c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x0212be44(param_1);
  if (iVar1 < 1) {
    return (uint)(0 < *(int *)(param_1 + 0x4c));
  }
  return 2;
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_countLeft RVA 0x211be44 =====

undefined4 FUN_0212be44(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1479,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1479,0);
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
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_energyCost RVA 0x211be98 =====

undefined4 FUN_0212be98(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x162d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x162d,0);
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
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x24);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_eatItemNeeded RVA 0x211befc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212befc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9fc9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fc9,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 8);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_eatMilli RVA 0x211bf60 =====

uint FUN_0212bf60(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa088,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa088,0);
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
    uVar2 = func_0x0245498c(&uStack_30,0,0);
    return uVar2;
  }
  uVar2 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c);
  return uVar2 & ~((int)uVar2 >> 0x1f);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_eatLeftMilli RVA 0x211bfc0 =====

undefined4 FUN_0212bfc0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e79,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e79,0);
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
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_eatTotalMilli RVA 0x211c014 =====

undefined4 FUN_0212c014(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa087,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa087,0);
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
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_canUse RVA 0x211c068 =====

uint FUN_0212c068(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3d2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3d2,0);
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
  iVar1 = FUN_0212be44(param_1);
  return (uint)(0 < iVar1);
}



// ===== FAT.Merge.ItemEatSourceComponent$$get_config RVA 0x211c0d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212c0d0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa089,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa089,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0228ba2c + 0x228b94c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0228ba30 + 0x228b960),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0228ba34 + 0x228ba1c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.Merge.ItemEatSourceComponent$$Validate RVA 0x211c124 =====

undefined4 FUN_0212c124(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0xb3ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ae,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x18) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemEatSourceComponent$$OnStart RVA 0x211c190 =====

/* WARNING: Removing unreachable block (ram,0x0212c2ec) */
/* WARNING: Removing unreachable block (ram,0x0212c2f8) */
/* WARNING: Removing unreachable block (ram,0x0212c2fc) */
/* WARNING: Removing unreachable block (ram,0x0212c308) */
/* WARNING: Removing unreachable block (ram,0x0212c310) */
/* WARNING: Removing unreachable block (ram,0x0212c31c) */
/* WARNING: Removing unreachable block (ram,0x0212c320) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212c190(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  iVar1 = func_0x0229f06c(0xb3d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3d3,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar9,uVar11,&uStack_30,uVar7);
    return;
  }
  iVar1 = FUN_02127488(param_1);
  if (iVar1 == 0) {
    return;
  }
  pcVar10 = (char *)(_UNK_0212c634 + 0x212c214);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212c638 + 0x212c228));
    func_0x01384978(*(undefined4 *)(_UNK_0212c63c + 0x212c234));
    func_0x01384978(*(undefined4 *)(_UNK_0212c640 + 0x212c240));
    func_0x01384978(*(undefined4 *)(_UNK_0212c644 + 0x212c24c));
    func_0x01384978(*(undefined4 *)(_UNK_0212c648 + 0x212c258));
    func_0x01384978(*(undefined4 *)(_UNK_0212c64c + 0x212c264));
    func_0x01384978(*(undefined4 *)(_UNK_0212c650 + 0x212c270));
    func_0x01384978(*(undefined4 *)(_UNK_0212c654 + 0x212c27c));
    func_0x01384978(*(undefined4 *)(_UNK_0212c658 + 0x212c288));
    func_0x01384978(*(undefined4 *)(_UNK_0212c65c + 0x212c294));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e93,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,0xffffffff,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,0xffffffff,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar11 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar12 = *(int **)(_UNK_0212c660 + 0x212c39c);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar9 = *piVar12;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar9) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
          goto LAB_0212c3e4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0xb);
LAB_0212c3e4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *piVar2;
      iVar4 = *piVar12;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar12[-1] == iVar4) {
            puVar3 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0x208);
            goto LAB_0212c46c;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x29);
LAB_0212c46c:
      iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02f7c01c(*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar1 + 0x10),0,
                              **(undefined4 **)(_UNK_0212c664 + 0x212c49c));
      iVar8 = *(int *)(param_1 + 0x3c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (iVar4 < *(int *)(iVar8 + 0xc)) {
        iVar8 = *(int *)(iVar9 + 0x20);
        iVar9 = iVar4 + 1000;
        uVar11 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x0345f108(iVar8,uVar11,iVar4 + 1,**(undefined4 **)(_UNK_0212c668 + 0x212c4f4));
        if (iVar4 != -0x3e9 && -2 < iVar9) goto LAB_0212c5dc;
      }
    }
  }
  piVar2 = *(int **)(_UNK_0212c66c + 0x212c510);
  uVar11 = *(undefined4 *)(param_1 + 0x38);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar9 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    uVar7 = **(undefined4 **)(iVar1 + 0x5c);
    iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_0212c670 + 0x212c55c));
    func_0x03a071bc(iVar9,uVar7,**(undefined4 **)(_UNK_0212c674 + 0x212c57c),0);
    *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar9;
  }
  uVar11 = func_0x02fbf3cc(uVar11,iVar9,0,**(undefined4 **)(_UNK_0212c678 + 0x212c5a4));
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0328ffbc(iVar1,uVar11,**(undefined4 **)(_UNK_0212c67c + 0x212c5d0));
LAB_0212c5dc:
  if (iVar9 < 1000) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_0212c680 + 0x212c624);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = iVar9 + -1000;
    puVar3 = *(undefined4 **)(_UNK_0212c684 + 0x212c604);
  }
  uVar11 = func_0x0328eea8(iVar1,iVar9,*puVar3);
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$_SetEatGroup RVA 0x211c1fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212c1fc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  int *piVar12;
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
  
  pcVar10 = (char *)(_UNK_0212c634 + 0x212c214);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212c638 + 0x212c228));
    func_0x01384978(*(undefined4 *)(_UNK_0212c63c + 0x212c234));
    func_0x01384978(*(undefined4 *)(_UNK_0212c640 + 0x212c240));
    func_0x01384978(*(undefined4 *)(_UNK_0212c644 + 0x212c24c));
    func_0x01384978(*(undefined4 *)(_UNK_0212c648 + 0x212c258));
    func_0x01384978(*(undefined4 *)(_UNK_0212c64c + 0x212c264));
    func_0x01384978(*(undefined4 *)(_UNK_0212c650 + 0x212c270));
    func_0x01384978(*(undefined4 *)(_UNK_0212c654 + 0x212c27c));
    func_0x01384978(*(undefined4 *)(_UNK_0212c658 + 0x212c288));
    func_0x01384978(*(undefined4 *)(_UNK_0212c65c + 0x212c294));
    *pcVar10 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e93,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e93,0);
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  if (param_2 < 0) goto LAB_0212c330;
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (param_2 < *(int *)(iVar1 + 0xc)) {
LAB_0212c5dc:
    if (param_2 < 1000) {
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar3 = *(undefined4 **)(_UNK_0212c680 + 0x212c624);
      goto LAB_0212c620;
    }
  }
  else {
    if (param_2 < 1000) {
LAB_0212c330:
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        piVar2 = (int *)func_0x021566f4(0);
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar11 = FUN_0210e2d4(iVar1,0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        piVar12 = *(int **)(_UNK_0212c660 + 0x212c39c);
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        iVar9 = *piVar12;
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == iVar9) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
              goto LAB_0212c3e4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar9,0xb);
LAB_0212c3e4:
        iVar1 = (*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
        if (iVar1 != 0) {
          piVar2 = (int *)func_0x021566f4(0);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar2;
          iVar4 = *piVar12;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar12 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar12[-1] == iVar4) {
                puVar3 = (undefined4 *)(iVar9 + *piVar12 * 8 + 0x208);
                goto LAB_0212c46c;
              }
              uVar5 = uVar5 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,0x29);
LAB_0212c46c:
          iVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x02f7c01c(*(undefined4 *)(iVar9 + 0x20),*(undefined4 *)(iVar1 + 0x10),0,
                                  **(undefined4 **)(_UNK_0212c664 + 0x212c49c));
          iVar8 = *(int *)(param_1 + 0x3c);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          if (iVar4 < *(int *)(iVar8 + 0xc)) {
            iVar9 = *(int *)(iVar9 + 0x20);
            param_2 = iVar4 + 1000;
            uVar11 = *(undefined4 *)(iVar1 + 0x10);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            func_0x0345f108(iVar9,uVar11,iVar4 + 1,**(undefined4 **)(_UNK_0212c668 + 0x212c4f4));
            if (iVar4 != -0x3e9 && -2 < param_2) goto LAB_0212c5dc;
          }
        }
      }
      piVar2 = *(int **)(_UNK_0212c66c + 0x212c510);
      uVar11 = *(undefined4 *)(param_1 + 0x38);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
      if (iVar9 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar2;
        }
        uVar7 = **(undefined4 **)(iVar1 + 0x5c);
        iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_0212c670 + 0x212c55c));
        func_0x03a071bc(iVar9,uVar7,**(undefined4 **)(_UNK_0212c674 + 0x212c57c),0);
        *(int *)(*(int *)(*piVar2 + 0x5c) + 4) = iVar9;
      }
      uVar11 = func_0x02fbf3cc(uVar11,iVar9,0,**(undefined4 **)(_UNK_0212c678 + 0x212c5a4));
      iVar1 = *(int *)(param_1 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      param_2 = func_0x0328ffbc(iVar1,uVar11,**(undefined4 **)(_UNK_0212c67c + 0x212c5d0));
      goto LAB_0212c5dc;
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= param_2 + -1000) goto LAB_0212c330;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  param_2 = param_2 + -1000;
  puVar3 = *(undefined4 **)(_UNK_0212c684 + 0x212c604);
LAB_0212c620:
  uVar11 = func_0x0328eea8(iVar1,param_2,*puVar3);
  *(undefined4 *)(param_1 + 0x40) = uVar11;
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$OnSerialize RVA 0x211c688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212c688(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar2 = (char *)(_UNK_0212ca24 + 0x212c6a4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212ca28 + 0x212c6b8));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca2c + 0x212c6c4));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca30 + 0x212c6d0));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca34 + 0x212c6dc));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca38 + 0x212c6e8));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca3c + 0x212c6f4));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca40 + 0x212c700));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca44 + 0x212c70c));
    func_0x01384978(*(undefined4 *)(_UNK_0212ca48 + 0x212c718));
    *pcVar2 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb3d4,0);
  if (iVar1 == 0) {
    FUN_02123514(param_1,param_2);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0212ca4c + 0x212c7a0));
    func_0x0179f49c(iVar1,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_2 + 0x3c) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x44);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar4,**(undefined4 **)(_UNK_0212ca50 + 0x212c7fc));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar8 = *(undefined4 **)(_UNK_0212ca54 + 0x212c828);
    puVar6 = *(undefined4 **)(_UNK_0212ca58 + 0x212c830);
    while (iVar1 = func_0x03f9975c(&uStack_40,*puVar8), uVar3 = uStack_34, iVar1 != 0) {
      iVar1 = *(int *)(param_2 + 0x3c);
      uVar7 = (undefined4)uStack_30;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0345eca8(iVar1,uVar3,uVar7,*puVar6);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0212ca5c + 0x212c88c));
    iVar1 = *(int *)(param_2 + 0x3c);
    uVar3 = FUN_021235bc(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 0x3c);
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    uVar3 = FUN_02123628(param_1);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(param_2 + 0x3c);
    uVar7 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar4 + 0x1c) = uVar3;
    iVar1 = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_2 + 0x3c);
    }
    iVar4 = *(int *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar5 + 0x10) = uVar7;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_0212ca64 + 0x212c920);
    uVar3 = func_0x0328ffbc(iVar4,uVar3,*puVar6);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_2 + 0x3c);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0x20) < 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      uVar3 = *(undefined4 *)(param_1 + 0x40);
      iVar4 = *(int *)(param_2 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0328ffbc(iVar1,uVar3,*puVar6);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar4 + 0x20) = iVar1 + 1000;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb3d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$OnDeserialize RVA 0x211ca6c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0212ce7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212ca6c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_0212ce90 + 0x212ca88);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212ce94 + 0x212ca9c));
    func_0x01384978(*(undefined4 *)(_UNK_0212ce98 + 0x212caa8));
    func_0x01384978(*(undefined4 *)(_UNK_0212ce9c + 0x212cab4));
    func_0x01384978(*(undefined4 *)(_UNK_0212cea0 + 0x212cac0));
    func_0x01384978(*(undefined4 *)(_UNK_0212cea4 + 0x212cacc));
    func_0x01384978(*(undefined4 *)(_UNK_0212cea8 + 0x212cad8));
    func_0x01384978(*(undefined4 *)(_UNK_0212ceac + 0x212cae4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3d5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar7,0,0);
    return;
  }
  FUN_021237d4(param_1,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    return;
  }
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  uVar10 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  FUN_0212c1fc(param_1,uVar10);
  iVar1 = *(int *)(param_2 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  iStack_34 = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0345f9b0(iVar1,**(undefined4 **)(_UNK_0212ceb0 + 0x212cba8));
  piVar12 = *(int **)(_UNK_0212ceb4 + 0x212cbc4);
  puVar11 = *(undefined4 **)(_UNK_0212ceb8 + 0x212cbcc);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_0212cc24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_0212cc24:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_0212cebc + 0x212cc58)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_0212cca0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212cebc + 0x212cc58),0);
LAB_0212cca0:
    (*(code *)*puVar3)(&uStack_30,piVar2,puVar3[1]);
    uVar7 = uStack_2c;
    uVar10 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d7c(iVar1,uVar10,uVar7,*puVar11);
  } while( true );
  iVar1 = 6;
  iVar9 = 0;
  do {
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_0212cec0 + 0x212cd04)) {
            puVar11 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
            goto LAB_0212cd4c;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar5 != 0);
      }
      puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212cec0 + 0x212cd04),0);
LAB_0212cd4c:
      (*(code *)*puVar11)(piVar2,puVar11[1]);
    }
    if (iVar9 != 0) {
      func_0x01384bec(iVar9);
    }
    iVar9 = iStack_34;
    if (iVar1 != 6 && iVar1 != 0) {
      return;
    }
    if (iStack_34 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar9 + 0x3c);
    iVar1 = iVar4;
    if (iVar4 != 0) {
LAB_0212cda8:
      FUN_02123828(param_1,*(undefined4 *)(iVar4 + 0x1c),*(undefined4 *)(iVar1 + 0x18));
      return;
    }
    func_0x01384bf0();
    iVar1 = *(int *)(iVar9 + 0x3c);
    if (iVar1 != 0) goto LAB_0212cda8;
    uVar13 = func_0x01384bf0();
    if ((int)((ulonglong)uVar13 >> 0x20) != 1) break;
    piVar12 = (int *)func_0x0145b008((int)uVar13);
    iVar9 = *piVar12;
    iVar1 = 0;
    func_0x0145b0f8();
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_0212cec4 + 0x212ce1c)) {
          puVar11 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_0212ce64;
        }
        uVar5 = uVar5 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar5 != 0);
    }
    puVar11 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212cec4 + 0x212ce1c),0);
LAB_0212ce64:
    (*(code *)*puVar11)(piVar2,puVar11[1]);
  }
  func_0x01459844((int)uVar13);
  func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.Merge.ItemEatSourceComponent$$GetItemCountInStomach RVA 0x211cec8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212cec8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
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
  undefined4 auStack_1c [2];
  
  pcVar8 = (char *)(_UNK_0212cf64 + 0x212cee0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212cf68 + 0x212cef4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9fc8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9fc8,0);
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar5,0,0);
    uVar9 = func_0x0245498c(&uStack_38,0,0);
    return uVar9;
  }
  iVar1 = **(int **)(_UNK_0212cf6c + 0x212cf58);
  piVar2 = *(int **)(param_1 + 0x44);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x0140024c(iVar1);
  }
  auStack_1c[0] = 0;
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(iVar1 + 0x1c);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar1) {
        puVar3 = (undefined4 *)(iVar7 + *piVar6 * 8 + 0xf8);
        goto LAB_02f7c0c8;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar1,7);
LAB_02f7c0c8:
  iVar1 = (*(code *)*puVar3)(piVar2,param_2,auStack_1c,puVar3[1]);
  uVar9 = 0;
  if (iVar1 != 0) {
    uVar9 = auStack_1c[0];
  }
  return uVar9;
}



// ===== FAT.Merge.ItemEatSourceComponent$$GetProgress RVA 0x211cf70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212cf70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_0212d1b8 + 0x212cf90);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212d1bc + 0x212cfa4));
    func_0x01384978(*(undefined4 *)(_UNK_0212d1c0 + 0x212cfb0));
    func_0x01384978(*(undefined4 *)(_UNK_0212d1c4 + 0x212cfbc));
    func_0x01384978(*(undefined4 *)(_UNK_0212d1c8 + 0x212cfc8));
    func_0x01384978(*(undefined4 *)(_UNK_0212d1cc + 0x212cfd4));
    func_0x01384978(*(undefined4 *)(_UNK_0212d1d0 + 0x212cfe0));
    func_0x01384978(*(undefined4 *)(_UNK_0212d1d4 + 0x212cfec));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xb3d6,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x40);
    *param_3 = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar1,**(undefined4 **)(_UNK_0212d1d8 + 0x212d0a0));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar6 = *(undefined4 **)(_UNK_0212d1dc + 0x212d0cc);
    puVar5 = *(undefined4 **)(_UNK_0212d1e0 + 0x212d0d4);
    while (iVar1 = func_0x03f9975c(&uStack_40,*puVar6), iVar1 != 0) {
      uVar2 = *puVar5;
      *param_2 = *param_2 + (int)uStack_30;
      iVar3 = *param_3;
      iVar1 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x44),uStack_34,0,uVar2);
      *param_3 = iVar1 + iVar3;
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0212d1e4 + 0x212d124));
  }
  else {
    iVar1 = func_0x0229f13c(0xb3d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a30a4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$SetFTEEatTime RVA 0x211d1f0 =====

void FUN_0212d1f0(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb3d7,0);
  if (iVar1 == 0) {
    if (0 < *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x4c) = param_2 * 1000;
      *(int *)(param_1 + 0x50) = param_2 * 1000;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb3d7,0);
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



// ===== FAT.Merge.ItemEatSourceComponent$$OnPostAttach RVA 0x211d260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212d260(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_0212d724 + 0x212d278);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212d728 + 0x212d28c));
    func_0x01384978(*(undefined4 *)(_UNK_0212d72c + 0x212d298));
    func_0x01384978(*(undefined4 *)(_UNK_0212d730 + 0x212d2a4));
    func_0x01384978(*(undefined4 *)(_UNK_0212d734 + 0x212d2b0));
    func_0x01384978(*(undefined4 *)(_UNK_0212d738 + 0x212d2bc));
    func_0x01384978(*(undefined4 *)(_UNK_0212d73c + 0x212d2c8));
    func_0x01384978(*(undefined4 *)(_UNK_0212d740 + 0x212d2d4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3d8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3d8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0212d744 + 0x212d374)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0212d3bc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212d744 + 0x212d374),10);
LAB_0212d3bc:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0x18);
  FUN_021262e0(param_1);
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  iVar10 = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar8) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar8,0);
  }
  puVar3 = *(undefined4 **)(_UNK_0212d748 + 0x212d43c);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar10) break;
    iVar1 = *(int *)(param_1 + 0x48);
    iVar8 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03653d1c(iVar1,iVar10,*puVar3);
    uVar9 = func_0x0212d760();
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar8 + 8);
    uVar4 = *(uint *)(iVar8 + 0xc);
    piVar2 = *(int **)(_UNK_0212d74c + 0x212d4cc);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    iVar1 = *piVar2;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar11 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar11 + uVar4 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar8,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,iVar10,**(undefined4 **)(_UNK_0212d750 + 0x212d530));
    iVar8 = *(int *)(param_1 + 0x48);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x03003b84(*(undefined4 *)(iVar8 + 0x48),iVar10,2,
                            **(undefined4 **)(_UNK_0212d754 + 0x212d560));
    if (iVar8 < 2) {
      iVar8 = 1;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = iVar10 + 1;
    *(int *)(iVar1 + 0xc) = iVar8;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  iVar10 = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar8) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar8,0);
  }
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar10) break;
    iVar1 = *(int *)(param_1 + 0x48);
    iVar8 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03653d1c(iVar1,iVar10,*puVar3);
    uVar9 = func_0x0212d760();
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar8 + 8);
    uVar4 = *(uint *)(iVar8 + 0xc);
    piVar2 = *(int **)(_UNK_0212d758 + 0x212d63c);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    iVar11 = *piVar2;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar8,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,iVar10,**(undefined4 **)(_UNK_0212d75c + 0x212d6a4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = iVar10 + 1;
    *(undefined4 *)(iVar1 + 0xc) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x20) * 1000;
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent.EatGroup$$Parse RVA 0x211d760 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0212d760(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_0212d944 + 0x212d778);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212d948 + 0x212d78c));
    func_0x01384978(*(undefined4 *)(_UNK_0212d94c + 0x212d798));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar3 = func_0x0229f06c(0xb3d9,0);
  if (iVar3 == 0) {
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_0212d950 + 0x212d7fc));
    func_0x0212eb0c();
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 0;
    iVar4 = func_0x0244f8e4(param_1,0x3b,0,0);
    while( true ) {
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar8) break;
      if (*(uint *)(iVar4 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      iVar7 = *(int *)(iVar4 + 0x10 + uVar8 * 4);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x0244f8e4(iVar7,0x3a,0,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar7 + 0xc) == 2) &&
         (iVar5 = func_0x0245085c(*(undefined4 *)(iVar7 + 0x10),&uStack_28,0), iVar5 != 0)) {
        if (*(uint *)(iVar7 + 0xc) < 2) {
          func_0x01384bf4();
        }
        iVar7 = func_0x0245085c(*(undefined4 *)(iVar7 + 0x14),&uStack_2c,0);
        if (iVar7 != 0) {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar2 = uStack_28;
          uVar1 = uStack_2c;
          iVar7 = *(int *)(iVar3 + 8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar7,uVar2,uVar1,**(undefined4 **)(_UNK_0212d954 + 0x212d924));
        }
      }
      uVar8 = uVar8 + 1;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0xb3d9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0229cbe0(iVar3,param_1,0);
  }
  return iVar3;
}



// ===== FAT.Merge.ItemEatSourceComponent$$OnInitRandomList RVA 0x211d958 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212d958(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_0212dc74 + 0x212d974);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212dc78 + 0x212d988));
    func_0x01384978(*(undefined4 *)(_UNK_0212dc7c + 0x212d994));
    func_0x01384978(*(undefined4 *)(_UNK_0212dc80 + 0x212d9a0));
    func_0x01384978(*(undefined4 *)(_UNK_0212dc84 + 0x212d9ac));
    func_0x01384978(*(undefined4 *)(_UNK_0212dc88 + 0x212d9b8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3da,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3da,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_2c = param_2;
  uVar11 = FUN_0210e2d4(iVar1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_0212dc8c + 0x212da60)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_0212daa8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0212dc8c + 0x212da60),10);
LAB_0212daa8:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 0x20);
    param_2 = iVar1;
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    iVar1 = 0;
    iVar10 = 1;
    puVar3 = *(undefined4 **)(_UNK_0212dc90 + 0x212daec);
    while( true ) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = piVar2[0x12];
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar1) break;
      iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0212dc94 + 0x212db1c));
      func_0x0214337c(iVar8,0);
      iVar9 = *(int *)(param_2 + 0x20);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x48);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iStack_28 = iVar1;
      uVar11 = func_0x0364c9b8(iVar9,iVar1,*puVar3);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_2 + 0x20);
      *(undefined4 *)(iVar8 + 8) = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar1,iVar10 + -1,*puVar3);
      iVar1 = iStack_2c;
      iVar9 = *(int *)(param_2 + 0x20);
      *(undefined4 *)(iVar8 + 0xc) = uVar11;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x4c);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar11 = func_0x0364c9b8(iVar9,iVar10,*puVar3);
      *(undefined4 *)(iVar8 + 0x10) = uVar11;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      piVar2 = *(int **)(_UNK_0212dc98 + 0x212dc14);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar12 = *piVar2;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(int *)(iVar9 + uVar4 * 4 + 0x10) = iVar8;
      }
      else {
        func_0x0328f170(iVar1,iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                       );
      }
      piVar2 = *(int **)(param_2 + 0x20);
      iVar10 = iVar10 + 2;
      iVar1 = iStack_28 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$OnInitOutputSet RVA 0x211dc9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212dc9c(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  undefined4 unaff_r5;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
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
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0xb3db,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3db,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210e2d4(iVar1,0);
  pcVar7 = (char *)(_UNK_0216807c + 0x2167e7c);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02168080 + 0x2167e90),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_02168084 + 0x2167e9c));
    func_0x01384978(*(undefined4 *)(_UNK_02168088 + 0x2167ea8));
    func_0x01384978(*(undefined4 *)(_UNK_0216808c + 0x2167eb4));
    func_0x01384978(*(undefined4 *)(_UNK_02168090 + 0x2167ec0));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0xb3dc,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0xb3dc,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
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
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485238(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  piVar2 = (int *)func_0x021566f4();
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar8 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02168094 + 0x2167f38)) {
        puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0x110);
        goto LAB_02167f80;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02168094 + 0x2167f38),10);
LAB_02167f80:
  iVar8 = (*(code *)*puVar3)(piVar2,iVar1,puVar3[1]);
  if (iVar8 != 0) {
    pcVar7 = *(char **)(iVar8 + 0x18);
    iVar1 = iVar8;
  }
  if (iVar8 != 0 && pcVar7 != (char *)0x0) {
    iVar8 = 0;
    puVar3 = *(undefined4 **)(_UNK_02168098 + 0x2167fc0);
    puVar11 = *(undefined4 **)(_UNK_0216809c + 0x2167fc8);
    puVar12 = *(undefined4 **)(_UNK_021680a0 + 0x2167fd0);
    while( true ) {
      if (pcVar7 == (char *)0x0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(pcVar7 + 0x30);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar9 + 0xc) <= iVar8) break;
      iVar9 = *(int *)(iVar1 + 0x18);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x30);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0364c9b8(iVar9,iVar8,*puVar3);
      iVar9 = *(int *)(iVar1 + 0x18);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03003b84(*(undefined4 *)(iVar9 + 0x3c),iVar8,1,*puVar11);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d7c(param_2,uVar10,uVar6,*puVar12);
      pcVar7 = *(char **)(iVar1 + 0x18);
      iVar8 = iVar8 + 1;
    }
  }
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$CalculateSpeedEatCost RVA 0x211dd24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212dd24(int param_1)

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
  undefined4 uStack_18;
  
  pcVar3 = (char *)(_UNK_0212de18 + 0x212dd3c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212de1c + 0x212dd50));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa58e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa58e,0);
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
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x44);
  uVar5 = FUN_0212bfc0(param_1);
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (*(int *)(**(int **)(_UNK_0212de20 + 0x212dddc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uStack_18 = 0;
  func_0x028d41ac(0,uVar2,uVar5,iVar1 * 1000);
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$EatItem RVA 0x211de24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212de24(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x0229f06c(0x9e8e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0212bdd0(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    pcVar5 = (char *)(_UNK_0212e004 + 0x212deb4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0212e008 + 0x212dec8));
      func_0x01384978(*(undefined4 *)(_UNK_0212e00c + 0x212ded4));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9e8f,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = 0;
      iVar1 = FUN_02116ae0(param_2,0);
      if ((iVar1 != 0) && (iVar1 = func_0x0212e40c(param_1,param_2), iVar1 != 0)) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (param_2 == 0) {
          func_0x01384bf0();
          uVar6 = FUN_0210e2d4(0,0);
          uVar3 = *(undefined4 *)(param_1 + 0x44);
          func_0x01384bf0();
        }
        else {
          uVar6 = FUN_0210e2d4(param_2,0);
          uVar3 = *(undefined4 *)(param_1 + 0x44);
        }
        uVar2 = FUN_0210e2d4(param_2,0);
        iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0212e010 + 0x212dfbc));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar1,uVar6,iVar4 + 1,**(undefined4 **)(_UNK_0212e014 + 0x212dfe8));
        func_0x0212e6d8(param_1);
        uVar6 = 1;
      }
      return uVar6;
    }
    iVar1 = func_0x0229f13c(0x9e8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e8e,0);
    if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
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
  uVar6 = func_0x0245496c(&uStack_38,0,0);
  return uVar6;
}



// ===== FAT.Merge.ItemEatSourceComponent$$_EatItem RVA 0x211de9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212de9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
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
  
  pcVar5 = (char *)(_UNK_0212e004 + 0x212deb4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212e008 + 0x212dec8));
    func_0x01384978(*(undefined4 *)(_UNK_0212e00c + 0x212ded4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e8f,0);
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
    uVar6 = func_0x0245496c(&uStack_38,0,0);
    return uVar6;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 0;
  iVar1 = FUN_02116ae0(param_2,0);
  if ((iVar1 != 0) && (iVar1 = func_0x0212e40c(param_1,param_2), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar6 = FUN_0210e2d4(0,0);
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      func_0x01384bf0();
    }
    else {
      uVar6 = FUN_0210e2d4(param_2,0);
      uVar3 = *(undefined4 *)(param_1 + 0x44);
    }
    uVar2 = FUN_0210e2d4(param_2,0);
    iVar4 = func_0x02f7c01c(uVar3,uVar2,0,**(undefined4 **)(_UNK_0212e010 + 0x212dfbc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar1,uVar6,iVar4 + 1,**(undefined4 **)(_UNK_0212e014 + 0x212dfe8));
    func_0x0212e6d8(param_1);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.ItemEatSourceComponent$$SpeedEat RVA 0x211e018 =====

undefined4 FUN_0212e018(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3dd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3dd,0);
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
  iVar1 = FUN_0212bdd0(param_1);
  uVar4 = 1;
  if (iVar1 == 1) {
    iVar1 = func_0x0212e0f0(param_1);
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116f08(iVar1,0);
      uVar4 = FUN_02123568(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148ef8(iVar1,uVar4,0,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemEatSourceComponent$$_FinishEat RVA 0x211e0f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212e0f0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0212e20c + 0x212e104);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212e210 + 0x212e118));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e92,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e92,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x2c);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210cd28(iVar1,0);
  uVar5 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_020ec120(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_0212e214 + 0x212e1f0));
  FUN_0212c1fc(param_1,0xffffffff);
  return 1;
}



// ===== FAT.Merge.ItemEatSourceComponent$$OnUpdate RVA 0x211e218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0212e218(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_0212e310 + 0x212e230);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212e314 + 0x212e244));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3de,0);
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
    iVar1 = func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return iVar1;
  }
  FUN_02126b58(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 < 1) {
    if (0 < *(int *)(param_1 + 0x50)) {
      return *(int *)(param_1 + 0x50);
    }
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59a74(iVar1,**(undefined4 **)(_UNK_0212e318 + 0x212e2d4));
    if (iVar1 < 1) {
      return iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  iVar1 = iVar1 - param_2;
  *(int *)(param_1 + 0x4c) = iVar1;
  if (0 < iVar1) {
    return iVar1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  pcVar4 = (char *)(_UNK_0212e20c + 0x212e104);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212e210 + 0x212e118));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e92,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x2c);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210cd28(iVar1,0);
    uVar5 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_020ec120(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_0212e214 + 0x212e1f0));
    FUN_0212c1fc(param_1,0xffffffff);
    return 1;
  }
  iVar1 = func_0x0229f13c(0x9e92,0);
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
  iVar1 = func_0x0245496c(&uStack_30,0,0);
  return iVar1;
}



// ===== FAT.Merge.ItemEatSourceComponent$$ConsumeNextItem RVA 0x211e31c =====

undefined4 FUN_0212e31c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = 0;
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e35,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0212bdd0(param_1);
    if ((iVar1 == 2) && (0 < *(int *)(param_1 + 0x54))) {
      iVar1 = *(int *)(param_1 + 0x54) + -1;
      *(int *)(param_1 + 0x54) = iVar1;
      if (iVar1 == 0) {
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0210cd28(iVar1,0);
        uVar2 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_020ec120(iVar1,uVar2,0);
      }
      uVar2 = FUN_02124444(param_1,&uStack_14,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e35,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemEatSourceComponent$$_CanEatItem RVA 0x211e40c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0212e40c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined8 uStack_30;
  
  pcVar6 = (char *)(_UNK_0212e6a0 + 0x212e428);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212e6a4 + 0x212e43c));
    func_0x01384978(*(undefined4 *)(_UNK_0212e6a8 + 0x212e448));
    func_0x01384978(*(undefined4 *)(_UNK_0212e6ac + 0x212e454));
    func_0x01384978(*(undefined4 *)(_UNK_0212e6b0 + 0x212e460));
    func_0x01384978(*(undefined4 *)(_UNK_0212e6b4 + 0x212e46c));
    func_0x01384978(*(undefined4 *)(_UNK_0212e6b8 + 0x212e478));
    func_0x01384978(*(undefined4 *)(_UNK_0212e6bc + 0x212e484));
    *pcVar6 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x9e90,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar2,**(undefined4 **)(_UNK_0212e6c0 + 0x212e528));
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    iStack_34 = iStack_4c;
    uStack_30 = uStack_48;
    puVar8 = *(undefined4 **)(_UNK_0212e6c4 + 0x212e554);
    do {
      do {
        uVar3 = func_0x03f9975c(&uStack_40,*puVar8);
        iVar2 = iStack_34;
        if (uVar3 == 0) {
          iVar2 = 6;
          goto LAB_0212e5d8;
        }
        iVar1 = (int)uStack_30;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_0210e2d4(param_2,0);
      } while (iVar4 != iVar2);
      uVar7 = *(undefined4 *)(param_1 + 0x44);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = FUN_0210e2d4(param_2,0);
      iVar2 = func_0x02f7c01c(uVar7,uVar5,0,**(undefined4 **)(_UNK_0212e6c8 + 0x212e5b8));
    } while (iVar1 <= iVar2);
    iVar2 = 5;
LAB_0212e5d8:
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_0212e6cc + 0x212e5e4));
    uVar3 = uVar3 & iVar2 == 5;
  }
  else {
    iVar2 = func_0x0229f13c(0x9e90,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.Merge.ItemEatSourceComponent$$_StartEat RVA 0x211e6d8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0212e9b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212e6d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  pcVar6 = (char *)(_UNK_0212e9c8 + 0x212e6f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212e9cc + 0x212e704));
    func_0x01384978(*(undefined4 *)(_UNK_0212e9d0 + 0x212e710));
    func_0x01384978(*(undefined4 *)(_UNK_0212e9d4 + 0x212e71c));
    func_0x01384978(*(undefined4 *)(_UNK_0212e9d8 + 0x212e728));
    func_0x01384978(*(undefined4 *)(_UNK_0212e9dc + 0x212e734));
    func_0x01384978(*(undefined4 *)(_UNK_0212e9e0 + 0x212e740));
    func_0x01384978(*(undefined4 *)(_UNK_0212e9e4 + 0x212e74c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9e91,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d5a200(&uStack_50,iVar1,**(undefined4 **)(_UNK_0212e9e8 + 0x212e7f0));
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  puVar7 = *(undefined4 **)(_UNK_0212e9ec + 0x212e81c);
  puVar5 = *(undefined4 **)(_UNK_0212e9f0 + 0x212e824);
  while (iVar1 = func_0x03f9975c(&uStack_38,*puVar7), iVar1 != 0) {
    iVar1 = (int)uStack_28;
    iVar3 = func_0x02f7c01c(*(undefined4 *)(param_1 + 0x44),uStack_2c,0,*puVar5);
    if (iVar3 < iVar1) {
      func_0x03f9989c(&uStack_38,**(undefined4 **)(_UNK_0212e9f4 + 0x212e85c));
      return 0;
    }
  }
  func_0x03f9989c(&uStack_38,**(undefined4 **)(_UNK_0212e9fc + 0x212e878));
  while (iVar1 = *(int *)(param_1 + 0x48), iVar1 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x48);
    *(int *)(param_1 + 0x4c) = iRam00000020 * 1000;
    if (iVar1 != 0) goto LAB_0212e8c0;
    uVar8 = func_0x01384bf0();
    if ((int)((ulonglong)uVar8 >> 0x20) != 1) {
      func_0x03f9989c(&uStack_38,**(undefined4 **)(_UNK_0212ea00 + 0x212e9a4));
      func_0x01459844((int)uVar8);
      func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    piVar4 = (int *)func_0x0145b008((int)uVar8);
    iVar1 = *piVar4;
    func_0x0145b0f8();
    func_0x03f9989c(&uStack_38,**(undefined4 **)(_UNK_0212e9f8 + 0x212e970));
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
  }
  *(int *)(param_1 + 0x4c) = *(int *)(iVar1 + 0x20) * 1000;
LAB_0212e8c0:
  *(int *)(param_1 + 0x50) = *(int *)(iVar1 + 0x20) * 1000;
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_0210cd28(iVar1,0);
  uVar2 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_020ec120(iVar1,uVar2,0);
  if (*(int *)(param_1 + 0x50) < 1) {
    FUN_0212e0f0(param_1);
  }
  return 1;
}



// ===== FAT.Merge.ItemEatSourceComponent$$.ctor RVA 0x211ea04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212ea04(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_0212ead0 + 0x212ea18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212ead4 + 0x212ea2c));
    func_0x01384978(*(undefined4 *)(_UNK_0212ead8 + 0x212ea38));
    func_0x01384978(*(undefined4 *)(_UNK_0212eadc + 0x212ea44));
    func_0x01384978(*(undefined4 *)(_UNK_0212eae0 + 0x212ea50));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_0212eae4 + 0x212ea64);
  uVar1 = func_0x01384be4(*puVar4);
  puVar5 = *(undefined4 **)(_UNK_0212eae8 + 0x212ea78);
  func_0x0328e950(uVar1,*puVar5);
  uVar2 = *puVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  uVar1 = func_0x01384be4(uVar2);
  func_0x0328e950(uVar1,*puVar5);
  puVar4 = *(undefined4 **)(_UNK_0212eaec + 0x212eaa0);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_0212eaf0 + 0x212eab8));
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  pcVar3 = (char *)(_UNK_02127260 + 0x2127120);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02127264 + 0x2127134));
    func_0x01384978(*(undefined4 *)(_UNK_02127268 + 0x2127140));
    func_0x01384978(*(undefined4 *)(_UNK_0212726c + 0x212714c));
    func_0x01384978(*(undefined4 *)(_UNK_02127270 + 0x2127158));
    func_0x01384978(*(undefined4 *)(_UNK_02127274 + 0x2127164));
    func_0x01384978(*(undefined4 *)(_UNK_02127278 + 0x2127170));
    func_0x01384978(*(undefined4 *)(_UNK_0212727c + 0x212717c));
    func_0x01384978(*(undefined4 *)(_UNK_02127280 + 0x2127188));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02127284 + 0x212719c));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02127288 + 0x21271b0),extraout_r2,extraout_r3,
                  unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  puVar4 = *(undefined4 **)(_UNK_0212728c + 0x21271c4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02127290 + 0x21271dc));
  puVar4 = *(undefined4 **)(_UNK_02127294 + 0x21271f0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02127298 + 0x2127208));
  puVar4 = *(undefined4 **)(_UNK_0212729c + 0x212721c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar4);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_021272a0 + 0x2127234));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$<>iFixBaseProxy_OnStart RVA 0x211eaf4 =====

void thunk_FUN_0212774c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x294,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x294,0);
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



// ===== FAT.Merge.ItemEatSourceComponent$$<>iFixBaseProxy_OnSerialize RVA 0x211eaf8 =====

void thunk_FUN_02123514(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c7d,0);
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



// ===== FAT.Merge.ItemEatSourceComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x211eafc =====

void thunk_FUN_021237d4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5c62,0);
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



// ===== FAT.Merge.ItemEatSourceComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x211eb00 =====

/* WARNING: Possible PIC construction at 0x02135cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02135cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_021262e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_r4;
  char *pcVar8;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  int *piVar10;
  undefined4 unaff_r8;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [4];
  
  pcVar8 = (char *)(_UNK_02126554 + 0x21262f4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02126558 + 0x2126308));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb362,0);
  if (iVar1 == 0) {
    FUN_02127894(param_1);
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar10 = *(int **)(_UNK_0212655c + 0x21263ac);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x128);
          goto LAB_021263f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xd);
LAB_021263f4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    param_1[7] = iVar1;
    param_1[8] = 0;
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = FUN_0210e2d4(iVar1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x118);
          goto LAB_021264a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xb);
LAB_021264a4:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 != 0) {
      piVar2 = (int *)func_0x021566f4(0);
      uVar9 = *(undefined4 *)(iVar1 + 0x10);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x120);
            goto LAB_02126530;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0xc);
LAB_02126530:
      iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
      param_1[8] = iVar1;
    }
    pcVar8 = (char *)(_UNK_02136170 + 0x2135bfc);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02136174 + 0x2135c10));
      func_0x01384978(*(undefined4 *)(_UNK_02136178 + 0x2135c1c));
      func_0x01384978(*(undefined4 *)(_UNK_0213617c + 0x2135c28));
      func_0x01384978(*(undefined4 *)(_UNK_02136180 + 0x2135c34));
      func_0x01384978(*(undefined4 *)(_UNK_02136184 + 0x2135c40));
      func_0x01384978(*(undefined4 *)(_UNK_02136188 + 0x2135c4c));
      func_0x01384978(*(undefined4 *)(_UNK_0213618c + 0x2135c58));
      func_0x01384978(*(undefined4 *)(_UNK_02136190 + 0x2135c64));
      func_0x01384978(*(undefined4 *)(_UNK_02136194 + 0x2135c70));
      func_0x01384978(*(undefined4 *)(_UNK_02136198 + 0x2135c7c));
      func_0x01384978(*(undefined4 *)(_UNK_0213619c + 0x2135c88));
      func_0x01384978(*(undefined4 *)(_UNK_021361a0 + 0x2135c94));
      *pcVar8 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_28[0] = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    iVar1 = func_0x0229f06c(0xb363,0);
    if (iVar1 == 0) {
      iVar1 = param_1[4];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_021361a4 + 0x2135d18));
      (**(code **)(*param_1 + 0x140))(param_1,param_1[4],*(undefined4 *)(*param_1 + 0x144));
      uVar9 = func_0x02450044(param_1,0);
      uVar7 = **(undefined4 **)(_UNK_021361ac + 0x2135d60);
      if (*(int *)(**(int **)(_UNK_021361a8 + 0x2135d54) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar7 = func_0x0244ff60(uVar7,0);
      iVar1 = func_0x02450a48(uVar9,uVar7,0);
      if (iVar1 != 0) {
        iVar1 = FUN_02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02116f08(iVar1,0);
        iVar4 = FUN_02123568(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar9 = FUN_0210e2d4(iVar4,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02142c70(iVar1,uVar9,2,0);
        param_1[0xc] = iVar1;
      }
      piVar2 = *(int **)(_UNK_021361b0 + 0x2135e14);
      iVar1 = *piVar2;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_50,iVar1,aiStack_28,**(undefined4 **)(_UNK_021361b4 + 0x2135e54));
      uStack_2c = uStack_4c;
      uStack_30 = uStack_50;
      (**(code **)(*param_1 + 0x160))(param_1,aiStack_28[0],*(undefined4 *)(*param_1 + 0x164));
      iVar1 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_021361b8 + 0x2135ea8));
        func_0x02143214(iVar4,**(undefined4 **)(_UNK_021361bc + 0x2135ebc),0);
        iVar1 = aiStack_28[0];
        param_1[0xb] = iVar4;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02143384(iVar4,iVar1,0);
      }
      func_0x028c98a0(&uStack_30,0);
      (**(code **)(*param_1 + 0x148))(param_1,param_1[5],*(undefined4 *)(*param_1 + 0x14c));
      iVar1 = param_1[10];
      param_1[6] = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar11 = *(undefined4 **)(_UNK_021361c0 + 0x2135f3c);
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      puVar3 = *(undefined4 **)(_UNK_021361c4 + 0x2135f58);
      while (iVar4 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 = iStack_34, iVar4 != 0) {
        if (iStack_34 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361c8 + 0x2135f8c));
      iVar1 = param_1[10];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_50,iVar1,*puVar11);
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      uStack_38 = uStack_48;
      iStack_34 = iStack_44;
      while (iVar1 = func_0x03f5f428(&uStack_40,*puVar3), iVar1 != 0) {
        func_0x021361e0(param_1,iStack_34);
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_021361d4 + 0x2135fec));
      return;
    }
    iVar1 = func_0x0229f13c(0xb363,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2135cf8;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_50;
  }
  else {
    iVar1 = func_0x0229f13c(0xb362,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
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
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar9,(undefined1 *)((int)register0x00000054 + -0x30),uVar7);
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent$$<>iFixBaseProxy_OnInitRandomList RVA 0x211eb04 =====

void thunk_FUN_021272b0(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb364,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb364,0);
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



// ===== FAT.Merge.ItemEatSourceComponent$$<>iFixBaseProxy_OnUpdate RVA 0x211eb08 =====

void thunk_FUN_02126b58(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e59,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e59,0);
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



// ===== FAT.Merge.ItemEatSourceComponent.EatGroup$$.ctor RVA 0x211eb0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212eb0c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0212eb84 + 0x212eb20);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212eb88 + 0x212eb34));
    func_0x01384978(*(undefined4 *)(_UNK_0212eb8c + 0x212eb40));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0212eb90 + 0x212eb54));
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_0212eb94 + 0x212eb68));
  *(undefined4 *)(param_1 + 8) = uVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent.<>c$$.cctor RVA 0x211eb98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212eb98(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0212ebf0 + 0x212eba8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212ebf4 + 0x212ebbc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0212ebf8 + 0x212ebd0);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent.<>c$$.ctor RVA 0x211ebfc =====

void FUN_0212ebfc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemEatSourceComponent.<>c$$<_SetEatGroup>b__44_0 RVA 0x211ec04 =====

undefined4 FUN_0212ec04(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(param_2 + 0xc);
}


