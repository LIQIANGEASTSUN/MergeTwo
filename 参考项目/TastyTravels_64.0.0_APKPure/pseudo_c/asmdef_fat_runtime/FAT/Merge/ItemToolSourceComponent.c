/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemToolSourceComponent$$get_outputCountToDead RVA 0x2127bf0 =====

undefined4 FUN_02137bf0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb403,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb403,0);
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
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.Merge.ItemToolSourceComponent$$get_willDead RVA 0x2127c44 =====

uint FUN_02137c44(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e1f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e1f,0);
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
  return (uint)(*(int *)(param_1 + 0x40) < 2);
}



// ===== FAT.Merge.ItemToolSourceComponent$$get_energyCost RVA 0x2127ca8 =====

undefined4 FUN_02137ca8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb404,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb404,0);
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
  return 0;
}



// ===== FAT.Merge.ItemToolSourceComponent$$get_totalItemCount RVA 0x2127cfc =====

int FUN_02137cfc(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xb405,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb405,0);
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
  iVar1 = func_0x02137d64(param_1);
  iVar3 = func_0x02137db8(param_1);
  return iVar3 + iVar1;
}



// ===== FAT.Merge.ItemToolSourceComponent$$get_itemInRechargeCount RVA 0x2127d64 =====

undefined4 FUN_02137d64(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb406,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb406,0);
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
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.Merge.ItemToolSourceComponent$$get_itemCount RVA 0x2127db8 =====

undefined4 FUN_02137db8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e13,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e13,0);
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
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.Merge.ItemToolSourceComponent$$get_config RVA 0x2127e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02137e0c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e18,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02286b6c + 0x2286a8c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02286b70 + 0x2286aa0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02286b74 + 0x2286b5c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.Merge.ItemToolSourceComponent$$Validate RVA 0x2127e60 =====

undefined4 FUN_02137e60(int param_1)

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
  iVar1 = func_0x0229f06c(0xb3b6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3b6,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x38) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemToolSourceComponent$$OnSerialize RVA 0x2127ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02137ecc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02137fa0 + 0x2137ee4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02137fa4 + 0x2137ef8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb407,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb407,0);
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
  FUN_02123514(param_1,param_2);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02137fa8 + 0x2137f60));
  func_0x017a008c(iVar1,0);
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_2 + 0x4c) = iVar1;
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent$$OnDeserialize RVA 0x2127fac =====

void FUN_02137fac(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb408,0);
  if (iVar1 == 0) {
    FUN_021237d4(param_1,param_2);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x4c);
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)(param_1 + 0x40) = uVar4;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb408,0);
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



// ===== FAT.Merge.ItemToolSourceComponent$$OnInitOutputSet RVA 0x2128034 =====

void FUN_02138034(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb409,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb409,0);
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



// ===== FAT.Merge.ItemToolSourceComponent$$ConsumeNextItem RVA 0x2128088 =====

int FUN_02138088(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = 0;
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9e11,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02138134(param_1);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      iVar2 = FUN_02124444(param_1,&uStack_14,0);
      if (iVar2 < 1) {
        iVar2 = func_0x021381cc(param_1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0217493c(iVar1,param_1,0);
  }
  return iVar2;
}



// ===== FAT.Merge.ItemToolSourceComponent$$IsNextItemReady RVA 0x2128134 =====

undefined4 FUN_02138134(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e12,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e12,0);
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
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar1 = FUN_02116ae0(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = FUN_02137db8(param_1);
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemToolSourceComponent$$SpawnTool RVA 0x21281cc =====

/* WARNING: Removing unreachable block (ram,0x0213864c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021381cc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02138878 + 0x21381e4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0213887c + 0x21381f8));
    func_0x01384978(*(undefined4 *)(_UNK_02138880 + 0x2138204));
    func_0x01384978(*(undefined4 *)(_UNK_02138884 + 0x2138210));
    func_0x01384978(*(undefined4 *)(_UNK_02138888 + 0x213821c));
    func_0x01384978(*(undefined4 *)(_UNK_0213888c + 0x2138228));
    func_0x01384978(*(undefined4 *)(_UNK_02138890 + 0x2138234));
    func_0x01384978(*(undefined4 *)(_UNK_02138894 + 0x2138240));
    func_0x01384978(*(undefined4 *)(_UNK_02138898 + 0x213824c));
    func_0x01384978(*(undefined4 *)(_UNK_0213889c + 0x2138258));
    func_0x01384978(*(undefined4 *)(_UNK_021388a0 + 0x2138264));
    func_0x01384978(*(undefined4 *)(_UNK_021388a4 + 0x2138270));
    *pcVar9 = '\x01';
  }
  uVar10 = 0;
  uStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9e14,0);
  if (iVar1 == 0) {
    uVar2 = FUN_02123568(param_1);
    iVar1 = func_0x0216b898(uVar2,&uStack_28,&iStack_2c,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = uStack_28;
      iVar1 = *(int *)(iVar1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01dd1474(iVar1,uVar10,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar3 + 0x1c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01db1884(iVar1,uVar10,0);
      if (iStack_2c < 1) {
        iVar1 = FUN_02137e0c(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x021388d4(param_1,*(undefined4 *)(iVar1 + 0x1c));
      }
      else {
        piVar11 = *(int **)(_UNK_021388a8 + 0x213837c);
        iVar4 = *piVar11;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar11;
        }
        iVar4 = **(int **)(iVar4 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c380(&uStack_38,iVar4,&iStack_30,**(undefined4 **)(_UNK_021388ac + 0x21383b8));
        iVar4 = FUN_02137e0c(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        piVar11 = (int *)func_0x0345f9b0(iVar4,**(undefined4 **)(_UNK_021388b0 + 0x21383f8));
        piVar13 = *(int **)(_UNK_021388b4 + 0x2138414);
LAB_02138410:
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar11;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
              goto LAB_0213846c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar11,*piVar13,0);
LAB_0213846c:
        iVar4 = (*(code *)*puVar5)(piVar11,puVar5[1]);
        if (iVar4 != 0) {
          if (piVar11 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar4 = *piVar11;
          uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar8[-1] == **(int **)(_UNK_021388b8 + 0x21384a0)) {
                puVar5 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xc0);
                goto LAB_021384e8;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_021388b8 + 0x21384a0),0);
LAB_021384e8:
          (*(code *)*puVar5)(&iStack_40,piVar11,puVar5[1]);
          uVar10 = uStack_3c;
          iVar4 = iStack_40;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar12 = *(int *)(iVar3 + 0x44);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0364c9b8(iVar12,iVar4 + -1,**(undefined4 **)(_UNK_021388bc + 0x213852c));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar6 = func_0x01dd151c(iVar1,uVar2,0);
          iVar12 = iStack_30;
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) <= iStack_2c)) {
            if (iStack_30 == 0) {
              func_0x01384bf0();
            }
            func_0x03d59d7c(iVar12,iVar4,uVar10,**(undefined4 **)(_UNK_021388c0 + 0x213858c));
          }
          goto LAB_02138410;
        }
        if (piVar11 != (int *)0x0) {
          iVar1 = *piVar11;
          uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar7 != 0) {
            piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar13[-1] == **(int **)(_UNK_021388c4 + 0x21385c0)) {
                puVar5 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
                goto LAB_02138634;
              }
              uVar7 = uVar7 - 1;
              piVar13 = piVar13 + 2;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_021388c4 + 0x21385c0),0);
LAB_02138634:
          (*(code *)*puVar5)(piVar11,puVar5[1]);
        }
        iVar1 = iStack_30;
        if (iStack_30 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03d59a74(iVar1,**(undefined4 **)(_UNK_021388c8 + 0x2138670));
        if (iVar1 < 1) {
          iVar1 = FUN_02137e0c(param_1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x021388d4(param_1,*(undefined4 *)(iVar1 + 0x1c));
        }
        else {
          iVar1 = func_0x021388d4(param_1,iStack_30);
        }
        func_0x028c98a0(&uStack_38,0);
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x0364c9b8(iVar3,iVar1 + -1,**(undefined4 **)(_UNK_021388d0 + 0x21386f0));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e14,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0217493c(iVar1,param_1,0);
  }
  return uVar10;
}



// ===== FAT.Merge.ItemToolSourceComponent$$ChooseOutputItemLevelByWeight RVA 0x21288d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021388d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
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
  undefined4 auStack_20 [2];
  
  pcVar4 = (char *)(_UNK_02138a40 + 0x21388f0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02138a44 + 0x2138904));
    func_0x01384978(*(undefined4 *)(_UNK_02138a48 + 0x2138910));
    func_0x01384978(*(undefined4 *)(_UNK_02138a4c + 0x213891c));
    func_0x01384978(*(undefined4 *)(_UNK_02138a50 + 0x2138928));
    func_0x01384978(*(undefined4 *)(_UNK_02138a54 + 0x2138934));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e19,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e19,0);
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
    uVar5 = func_0x0245498c(&uStack_38,0,0);
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_02138a58 + 0x2138994);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar3 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    uVar5 = **(undefined4 **)(iVar1 + 0x5c);
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02138a5c + 0x21389dc));
    func_0x03a06794(iVar3,uVar5,**(undefined4 **)(_UNK_02138a60 + 0x21389fc),0);
    *(int *)(*(int *)(*piVar6 + 0x5c) + 4) = iVar3;
  }
  uStack_28 = **(undefined4 **)(_UNK_02138a64 + 0x2138a28);
  func_0x02fbccf8(auStack_20,param_2,iVar3,0);
  return auStack_20[0];
}



// ===== FAT.Merge.ItemToolSourceComponent$$OnPostMerge RVA 0x2128a68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02138a68(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02138c34 + 0x2138a88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02138c38 + 0x2138a9c));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb40a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb40a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = 0;
    iVar1 = FUN_02116a38(0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02138b40;
    }
  }
  else {
    iVar5 = 0;
    iVar1 = FUN_02116a38(param_2,0);
    if (iVar1 == 0) {
LAB_02138b40:
      iVar4 = func_0x02feb690(param_2,&iStack_1c,1,**(undefined4 **)(_UNK_02138c3c + 0x2138b54));
      iVar1 = iStack_1c;
      iVar5 = 0;
      if (iVar4 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_02137db8(iVar1);
      }
    }
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar4 = 0;
    iVar1 = FUN_02116a38(0,0);
    if (iVar1 != 0) goto LAB_02138c0c;
    func_0x01384bf0();
  }
  else {
    iVar4 = 0;
    iVar1 = FUN_02116a38(param_3,0);
    if (iVar1 != 0) goto LAB_02138c0c;
  }
  iVar2 = func_0x02feb690(param_3,&iStack_1c,1,**(undefined4 **)(_UNK_02138c40 + 0x2138bdc));
  iVar1 = iStack_1c;
  iVar4 = 0;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_02137db8(iVar1);
  }
LAB_02138c0c:
  if (*(int *)(param_1 + 0x40) < iVar4 + iVar5) {
    *(int *)(param_1 + 0x40) = iVar4 + iVar5;
  }
  FUN_02125ffc(param_1,param_2,param_3);
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent$$OnPostAttach RVA 0x2128c44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02138c44(int param_1)

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
  
  pcVar7 = (char *)(_UNK_02138d9c + 0x2138c58);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02138da0 + 0x2138c6c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb40b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb40b,0);
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
  FUN_021262e0(param_1);
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
      if (piVar5[-1] == **(int **)(_UNK_02138da4 + 0x2138d10)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02138d58;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02138da4 + 0x2138d10),10);
LAB_02138d58:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0x14);
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent$$.ctor RVA 0x2128da8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_0212710c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
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
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02127288 + 0x21271b0));
  puVar2 = *(undefined4 **)(_UNK_0212728c + 0x21271c4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03258eb8(uVar1,**(undefined4 **)(_UNK_02127290 + 0x21271dc));
  puVar2 = *(undefined4 **)(_UNK_02127294 + 0x21271f0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02127298 + 0x2127208));
  puVar2 = *(undefined4 **)(_UNK_0212729c + 0x212721c);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_021272a0 + 0x2127234));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent$$<>iFixBaseProxy_OnSerialize RVA 0x2128dac =====

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



// ===== FAT.Merge.ItemToolSourceComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x2128db0 =====

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



// ===== FAT.Merge.ItemToolSourceComponent$$<>iFixBaseProxy_OnPostMerge RVA 0x2128db4 =====

void thunk_FUN_02125ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ea5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x2128db8 =====

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
        FUN_021361e0(param_1,iStack_34);
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



// ===== FAT.Merge.ItemToolSourceComponent.<>c$$.cctor RVA 0x2128dbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02138dbc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02138e14 + 0x2138dcc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02138e18 + 0x2138de0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02138e1c + 0x2138df4);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent.<>c$$.ctor RVA 0x2128e20 =====

void FUN_02138e20(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemToolSourceComponent.<>c$$<ChooseOutputItemLevelByWeight>b__24_0 RVA 0x2128e28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02138e28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_02138e60 + 0x2138e3c);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02138e64 + 0x2138e50));
    *pcVar1 = '\x01';
  }
  return param_3;
}


