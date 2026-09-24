/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemMixSourceComponent$$get_outputCountToDead RVA 0x211f5ec =====

undefined4 FUN_0212f5ec(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9eae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eae,0);
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



// ===== FAT.Merge.ItemMixSourceComponent$$get_isDead RVA 0x211f640 =====

uint FUN_0212f640(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x9ead,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ead,0);
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
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0x40)) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0x40);
    iVar1 = FUN_0212f5ec(param_1);
    return (uint)(iVar4 <= iVar1);
  }
  return 0;
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_outputMilli RVA 0x211f6e0 =====

undefined4 FUN_0212f6e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed8,0);
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



// ===== FAT.Merge.ItemMixSourceComponent$$get_isOutputing RVA 0x211f734 =====

uint FUN_0212f734(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed2,0);
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
  return (uint)(0 < *(int *)(param_1 + 0x48));
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_isReviving RVA 0x211f798 =====

undefined4 FUN_0212f798(int param_1)

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
  iVar1 = func_0x0229f06c(0x5ed3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed3,0);
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
  iVar1 = func_0x0212f82c(param_1);
  if (0 < iVar1) {
    iVar1 = func_0x0212f8d4(param_1);
    iVar4 = *(int *)(param_1 + 0x3c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    if (iVar1 < *(int *)(iVar4 + 0x20)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_reviveTotalMilli RVA 0x211f82c =====

int FUN_0212f82c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed4,0);
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
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (*(char *)(param_1 + 0x54) != '\0') {
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar3 + 0x18)) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    }
  }
  return iVar1 * 1000;
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_totalItemCount RVA 0x211f8d4 =====

int FUN_0212f8d4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed5,0);
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
  iVar1 = func_0x0212f93c(param_1);
  iVar3 = func_0x0212f990(param_1);
  return iVar3 + iVar1;
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_itemInRechargeCount RVA 0x211f93c =====

undefined4 FUN_0212f93c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed6,0);
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
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_itemCount RVA 0x211f990 =====

undefined4 FUN_0212f990(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed1,0);
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



// ===== FAT.Merge.ItemMixSourceComponent$$get_reviveMilli RVA 0x211f9e4 =====

undefined4 FUN_0212f9e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed9,0);
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



// ===== FAT.Merge.ItemMixSourceComponent$$get_totalMixRequire RVA 0x211fa38 =====

undefined4 FUN_0212fa38(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.Merge.ItemMixSourceComponent$$set_totalMixRequire RVA 0x211fa40 =====

void FUN_0212fa40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_mixedCount RVA 0x211fa48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212fa48(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0212fad4 + 0x212fa5c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212fad8 + 0x212fa70));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa07e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa07e,0);
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
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_mixedItems RVA 0x211fadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212fadc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xac40,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac40,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_config RVA 0x211fb30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212fb30(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ed7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ed7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0223878c + 0x22386ac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238790 + 0x22386c0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02238794 + 0x223877c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.Merge.ItemMixSourceComponent$$get_mAllowCharging RVA 0x211fb84 =====

uint FUN_0212fb84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3e3,0);
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
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x1d) == '\0') {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x1d) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(*(int *)(param_1 + 0x44) == 0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemMixSourceComponent$$Validate RVA 0x211fc20 =====

undefined4 FUN_0212fc20(int param_1)

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
  iVar1 = func_0x0229f06c(0xb3ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ba,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x4c) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemMixSourceComponent$$OnSerialize RVA 0x211fc8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212fc8c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  
  pcVar7 = (char *)(_UNK_0212fdb0 + 0x212fca4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212fdb4 + 0x212fcb8));
    func_0x01384978(*(undefined4 *)(_UNK_0212fdb8 + 0x212fcc4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb3e4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3e4,0);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  FUN_02123514(param_1,param_2);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0212fdbc + 0x212fd2c));
  func_0x017a070c(iVar2,0);
  uVar9 = *(undefined4 *)(param_1 + 0x50);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x54);
  uVar10 = *(undefined4 *)(param_1 + 0x58);
  iVar8 = *(int *)(iVar2 + 0x24);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar3 = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(iVar2 + 0xc) = uVar9;
  *(undefined4 *)(iVar2 + 0x10) = uVar5;
  *(undefined4 *)(iVar2 + 0x14) = uVar4;
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x1c) = uVar6;
  *(undefined1 *)(iVar2 + 0x20) = uVar1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x0364bd24(iVar8,uVar10,**(undefined4 **)(_UNK_0212fdc0 + 0x212fd94));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  *(int *)(param_2 + 0x54) = iVar2;
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$OnDeserialize RVA 0x211fdc4 =====

/* WARNING: Removing unreachable block (ram,0x0325ad8c) */
/* WARNING: Removing unreachable block (ram,0x0325ad9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212fdc4(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar14 = (char *)(_UNK_0212fef4 + 0x212fddc);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212fef8 + 0x212fdf0));
    func_0x01384978(*(undefined4 *)(_UNK_0212fefc + 0x212fdfc));
    *pcVar14 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb3e5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3e5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
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
    func_0x01485278(&uStack_38,param_2,0);
    iVar13 = *(int *)(iVar2 + 8);
    uVar15 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar13,uVar15,&uStack_38,uVar9,0,0);
    return;
  }
  FUN_021237d4(param_1,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_2 + 0x54);
  if (iVar2 == 0) {
    return;
  }
  piVar16 = *(int **)(param_1 + 0x58);
  uVar17 = *(undefined4 *)(iVar2 + 0xc);
  uVar15 = *(undefined4 *)(iVar2 + 0x10);
  uVar9 = *(undefined4 *)(iVar2 + 0x14);
  uVar8 = *(undefined4 *)(iVar2 + 0x18);
  uVar1 = *(undefined1 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x44) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = uVar9;
  *(undefined4 *)(param_1 + 0x4c) = uVar15;
  *(undefined4 *)(param_1 + 0x50) = uVar17;
  *(undefined1 *)(param_1 + 0x54) = uVar1;
  piVar12 = piVar16;
  if (piVar16 == (int *)0x0) {
    func_0x01384bf0();
    piVar12 = *(int **)(param_1 + 0x58);
  }
  piVar11 = *(int **)(iVar2 + 0x24);
  piVar16[3] = 0;
  piVar16[4] = piVar16[4] + 1;
  if (piVar12 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = piVar12[3];
  iVar2 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_0212ff00 + 0x212fee4) + 0x10) + 0x60) + 0x48);
  pcVar14 = (char *)(_UNK_0325ae98 + 0x325a8f8);
  if (*pcVar14 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0325ae9c + 0x325a910));
    func_0x01384978(*(undefined4 *)(_UNK_0325aea0 + 0x325a91c));
    *pcVar14 = '\x01';
  }
  if (piVar11 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)piVar12[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar13 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
    iVar13 = func_0x014001f0(iVar13);
  }
  piVar16 = (int *)func_0x01384ab8(piVar11,iVar13);
  if (piVar16 == (int *)0x0) {
    if ((int)uVar6 < piVar12[3]) {
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar13 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
        iVar13 = func_0x014001f0(iVar13);
      }
      iVar3 = *piVar11;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar16[-1] == iVar13) {
            puVar4 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
            goto LAB_0325abc8;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar13,0);
LAB_0325abc8:
      piVar16 = (int *)(*(code *)*puVar4)(piVar11,puVar4[1]);
      piVar11 = *(int **)(_UNK_0325aea4 + 0x325abe8);
      do {
        if (piVar16 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar13 = *piVar16;
        uVar7 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar11) {
              puVar4 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xc0);
              goto LAB_0325ac40;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar16,*piVar11,0);
LAB_0325ac40:
        iVar13 = (*(code *)*puVar4)(piVar16,puVar4[1]);
        if (iVar13 == 0) goto LAB_0325ad0c;
        if (piVar16 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
          iVar13 = func_0x014001f0(iVar13);
        }
        iVar3 = *piVar16;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar13) {
              puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
              goto LAB_0325acd4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar16,iVar13,0);
LAB_0325acd4:
        uVar15 = (*(code *)*puVar4)(piVar16,puVar4[1]);
        func_0x0325a680(piVar12,uVar6,uVar15,
                        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x0325b5f8(piVar12,piVar11,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x20))
    ;
  }
  else {
    iVar13 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
      iVar13 = func_0x014001f0(iVar13);
    }
    iVar3 = *piVar16;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar13) {
          puVar4 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
          goto LAB_0325aa70;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar16,iVar13,0);
LAB_0325aa70:
    iVar13 = (*(code *)*puVar4)(piVar16,puVar4[1]);
    if (0 < iVar13) {
      func_0x03259cec(piVar12,piVar12[3] + iVar13,
                      *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < piVar12[3]) {
        uStack_30 = piVar12[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(piVar12[2],uVar6,piVar12[2],iVar13 + uVar6);
      }
      if (piVar12 == piVar16) {
        uStack_2c = 0;
        uStack_30 = uVar6;
        func_0x0484e904(piVar12[2],0,piVar12[2],uVar6);
        uStack_30 = piVar12[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(piVar12[2],iVar13 + uVar6,piVar12[2],uVar6 << 1);
      }
      else {
        iVar3 = piVar12[2];
        iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x014001f0(iVar2);
        }
        iVar5 = *piVar16;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar2) {
              puVar4 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0xe8);
              goto LAB_0325ab94;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar16,iVar2,5);
LAB_0325ab94:
        (*(code *)*puVar4)(piVar16,iVar3,uVar6,puVar4[1]);
      }
      piVar12[3] = piVar12[3] + iVar13;
    }
  }
LAB_0325adbc:
  piVar12[4] = piVar12[4] + 1;
  return;
LAB_0325ad0c:
  if (piVar16 != (int *)0x0) {
    iVar2 = *piVar16;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_0325aea8 + 0x325ad2c)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_0325ad74;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar16,**(int **)(_UNK_0325aea8 + 0x325ad2c),0);
LAB_0325ad74:
    (*(code *)*puVar4)(piVar16,puVar4[1]);
  }
  goto LAB_0325adbc;
}



// ===== FAT.Merge.ItemMixSourceComponent$$IsNextItemReady RVA 0x211ff04 =====

undefined4 FUN_0212ff04(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x9e6f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e6f,0);
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
    iVar1 = FUN_0212f990(param_1);
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.Merge.ItemMixSourceComponent$$GetToastTypeForItem RVA 0x211ff9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0212ff9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_0213010c + 0x212ffbc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02130110 + 0x212ffd0));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9eac,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0212fb30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(char *)(iVar1 + 0x1c) != '\0') && (iVar1 = func_0x0216224c(0), iVar1 != 0)) {
      iVar1 = FUN_0212fb30(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0345efbc(iVar1,param_3,&uStack_1c,**(undefined4 **)(_UNK_02130114 + 0x21300a4))
      ;
      if (iVar1 != 0) {
        return uStack_1c;
      }
    }
    iVar1 = FUN_0212fb30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0345efbc(iVar1,param_2,&uStack_20,**(undefined4 **)(_UNK_02130118 + 0x21300f8));
  }
  else {
    iVar1 = func_0x0229f13c(0x9eac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = func_0x02286340(iVar1,param_1,param_2,param_3,0);
  }
  return uStack_20;
}



// ===== FAT.Merge.ItemMixSourceComponent$$CheckMixState RVA 0x212011c =====

/* WARNING: Removing unreachable block (ram,0x02130494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0213011c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_021305d4 + 0x2130138);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021305d8 + 0x213014c));
    func_0x01384978(*(undefined4 *)(_UNK_021305dc + 0x2130158));
    func_0x01384978(*(undefined4 *)(_UNK_021305e0 + 0x2130164));
    func_0x01384978(*(undefined4 *)(_UNK_021305e4 + 0x2130170));
    func_0x01384978(*(undefined4 *)(_UNK_021305e8 + 0x213017c));
    func_0x01384978(*(undefined4 *)(_UNK_021305ec + 0x2130188));
    func_0x01384978(*(undefined4 *)(_UNK_021305f0 + 0x2130194));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9eaa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9eaa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0228903c(&uStack_30,iVar1,param_2,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
    return;
  }
  iVar1 = FUN_0212fb30(param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_021305f4 + 0x2130228));
  piVar10 = *(int **)(_UNK_021305f8 + 0x2130240);
  piVar12 = *(int **)(_UNK_021305fc + 0x2130248);
  piVar13 = *(int **)(_UNK_02130600 + 0x2130250);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_021302a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_021302a8:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      iVar1 = 6;
      uVar4 = 0;
      uVar11 = 0;
      goto LAB_0213041c;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar12) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0213031c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_0213031c:
    uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar7 = (int *)func_0x021566f4(0);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar13) {
          puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x1d8);
          goto LAB_02130398;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar13,0x23);
LAB_02130398:
    iVar1 = (*(code *)*puVar3)(piVar7,uVar4,puVar3[1]);
  } while ((iVar1 == 0) ||
          (iVar1 = func_0x030020dc(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(param_2 + 0x58),
                                   **(undefined4 **)(_UNK_02130604 + 0x21303c0)), iVar1 != 8));
  uStack_2c = 0;
  uStack_30 = 0;
  func_0x038f0a20(&uStack_30,1,uVar4,**(undefined4 **)(_UNK_02130608 + 0x21303e4));
  iVar1 = 5;
  uVar4 = uStack_30;
  uVar11 = uStack_2c;
LAB_0213041c:
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_0213060c + 0x2130434)) {
          puVar3 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xc0);
          goto LAB_0213047c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0213060c + 0x2130434),0);
LAB_0213047c:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  if (iVar1 != 6) {
    if (iVar1 == 5) {
      *param_1 = uVar4;
      param_1[1] = uVar11;
      return;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  uVar4 = **(undefined4 **)(_UNK_02130610 + 0x21304c8);
  *param_1 = 0;
  param_1[1] = 0;
  func_0x038f0a20(param_1,0,0,uVar4);
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$CanMixItem RVA 0x2120618 =====

/* WARNING: Removing unreachable block (ram,0x02130aa0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02130618(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int aiStack_34 [4];
  
  pcVar9 = (char *)(_UNK_02130c48 + 0x2130634);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02130c4c + 0x2130648));
    func_0x01384978(*(undefined4 *)(_UNK_02130c50 + 0x2130654));
    func_0x01384978(*(undefined4 *)(_UNK_02130c54 + 0x2130660));
    func_0x01384978(*(undefined4 *)(_UNK_02130c58 + 0x213066c));
    func_0x01384978(*(undefined4 *)(_UNK_02130c5c + 0x2130678));
    func_0x01384978(*(undefined4 *)(_UNK_02130c60 + 0x2130684));
    func_0x01384978(*(undefined4 *)(_UNK_02130c64 + 0x2130690));
    func_0x01384978(*(undefined4 *)(_UNK_02130c68 + 0x213069c));
    func_0x01384978(*(undefined4 *)(_UNK_02130c6c + 0x21306a8));
    func_0x01384978(*(undefined4 *)(_UNK_02130c70 + 0x21306b4));
    *pcVar9 = '\x01';
  }
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  iVar1 = func_0x0229f06c(0x9e70,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02130c74 + 0x2130724) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_02130c78 + 0x2130760));
    iVar1 = aiStack_34[0];
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x0325992c(iVar1,uVar2,**(undefined4 **)(_UNK_02130c7c + 0x2130788));
    iVar1 = aiStack_34[0];
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_0210e2d4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    piVar4 = *(int **)(_UNK_02130c80 + 0x21307e0);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar8 = *piVar4;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      *(undefined4 *)(iVar10 + uVar7 * 4 + 0x10) = uVar2;
    }
    else {
      func_0x0325970c(iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = FUN_0212fb30(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02130c84 + 0x2130858));
    piVar11 = *(int **)(_UNK_02130c88 + 0x2130870);
    piVar12 = *(int **)(_UNK_02130c8c + 0x2130878);
    piVar13 = *(int **)(_UNK_02130c90 + 0x2130880);
    puVar14 = *(undefined4 **)(_UNK_02130c94 + 0x2130888);
LAB_02130884:
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_021308e0;
        }
        uVar7 = uVar7 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar4,*piVar11,0);
LAB_021308e0:
    iVar1 = (*(code *)*puVar3)(piVar4,puVar3[1]);
    if (iVar1 != 0) {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_02130954;
          }
          uVar7 = uVar7 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_02130954:
      uVar2 = (*(code *)*puVar3)(piVar4,puVar3[1]);
      piVar5 = (int *)func_0x021566f4(0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar13) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x1d8);
            goto LAB_021309d0;
          }
          uVar7 = uVar7 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0x23);
LAB_021309d0:
      iVar1 = (*(code *)*puVar3)(piVar5,uVar2,puVar3[1]);
      if (iVar1 != 0) {
        iVar1 = func_0x030020dc(*(undefined4 *)(iVar1 + 0x14),aiStack_34[0],*puVar14);
        uVar2 = 1;
        iVar8 = 6;
        if ((iVar1 == 4) || (iVar1 == 8)) goto LAB_02130a28;
      }
      goto LAB_02130884;
    }
    iVar8 = 7;
    uVar2 = 0;
LAB_02130a28:
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_02130c98 + 0x2130a40)) {
            puVar14 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_02130a88;
          }
          uVar7 = uVar7 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar7 != 0);
      }
      puVar14 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_02130c98 + 0x2130a40),0);
LAB_02130a88:
      (*(code *)*puVar14)(piVar4,puVar14[1]);
    }
    if (iVar8 == 7 || iVar8 == 0) {
      uVar2 = 0;
    }
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9e70,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.ItemMixSourceComponent$$TryMixItem RVA 0x2120ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02130ca0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar5 = (char *)(_UNK_02130de0 + 0x2130cb8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02130de4 + 0x2130ccc));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x9ea8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea8,0);
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
  iVar1 = FUN_0212ff04(param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_02130618(param_1,param_2), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_0210e2d4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(uint *)(iVar1 + 0xc);
    piVar2 = *(int **)(_UNK_02130de8 + 0x2130d90);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar4 = *piVar2;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (uVar8 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar8 + 1;
      *(undefined4 *)(iVar7 + uVar8 * 4 + 0x10) = uVar6;
    }
    else {
      func_0x0325970c(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
    }
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.Merge.ItemMixSourceComponent$$TryExtract RVA 0x2120dec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02130dec(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_02130ee0 + 0x2130e04);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02130ee4 + 0x2130e18));
    func_0x01384978(*(undefined4 *)(_UNK_02130ee8 + 0x2130e24));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xac4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xac4c,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0325a554(iVar1,param_2,**(undefined4 **)(_UNK_02130eec + 0x2130e94));
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0325b170(iVar3,iVar1,**(undefined4 **)(_UNK_02130ef0 + 0x2130ec8));
    return 1;
  }
  return 0;
}



// ===== FAT.Merge.ItemMixSourceComponent$$ConsumeNextItem RVA 0x2120ef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02130ef4(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iStack_24;
  
  pcVar9 = (char *)(_UNK_02131284 + 0x2130f14);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02131288 + 0x2130f28));
    func_0x01384978(*(undefined4 *)(_UNK_0213128c + 0x2130f34));
    *pcVar9 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9eab,0);
  if (iVar1 == 0) {
    *param_3 = 0;
    piVar3 = (int *)func_0x021566f4(0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    piVar10 = *(int **)(_UNK_02131290 + 0x2130fc4);
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar10) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x1d8);
          goto LAB_0213100c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0x23);
LAB_0213100c:
    iVar1 = (*(code *)*puVar4)(piVar3,param_2,puVar4[1]);
    iVar5 = FUN_0212ff04(param_1);
    iVar2 = 0;
    if (iVar1 != 0 && iVar5 != 0) {
      iVar5 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar1 + 0x18);
      if (0 < *(int *)(iVar2 + 0x40)) {
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
      }
      func_0x02131294(param_1,uVar6);
      iVar2 = FUN_02124444(param_1,&iStack_24,0);
      *param_3 = iVar2;
      if (0 < iVar2) {
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar1 + 0x1c) != '\0') {
          piVar3 = (int *)func_0x021566f4(0);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar3;
          uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar8[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x178);
                goto LAB_0213114c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 2;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0x17);
LAB_0213114c:
          iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if ((iVar1 != 0) && (iStack_24 - 5U < 2)) {
            piVar3 = (int *)func_0x021566f4(0);
            if (piVar3 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar3;
            uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar8[-1] == *piVar10) {
                  puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x180);
                  goto LAB_021311dc;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0x18);
LAB_021311dc:
            uVar6 = (*(code *)*puVar4)(piVar3,puVar4[1]);
            iVar1 = func_0x0215c4c8(uVar6,0);
            if (0 < iVar1) {
              piVar3 = (int *)func_0x021566f4(0);
              if (piVar3 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar5 = *piVar3;
              uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
                do {
                  if (piVar8[-1] == *piVar10) {
                    puVar4 = (undefined4 *)(iVar5 + *piVar8 * 8 + 0x188);
                    goto LAB_02131268;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 2;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0x19);
LAB_02131268:
              iVar2 = (*(code *)*puVar4)(piVar3,iVar2,iVar1,puVar4[1]);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9eab,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021f6b18(iVar1,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.Merge.ItemMixSourceComponent$$SpeedOutput RVA 0x21216cc =====

undefined4 FUN_021316cc(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  iVar1 = func_0x0229f06c(0xb3e6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3e6,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_0212f734(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(int *)(iVar1 + 0x30) * 1000 - *(int *)(param_1 + 0x4c);
    FUN_0212542c(param_1,uVar2 & ~((int)uVar2 >> 0x1f));
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.ItemMixSourceComponent$$SpeedRevive RVA 0x2121768 =====

undefined4 FUN_02131768(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
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
  iVar1 = func_0x0229f06c(0xb3e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3e7,0);
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
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_0212f798(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_0212f82c(param_1);
    uVar2 = iVar1 - *(int *)(param_1 + 0x50);
    FUN_0212542c(param_1,uVar2 & ~((int)uVar2 >> 0x1f));
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
  return uVar4;
}



// ===== FAT.Merge.ItemMixSourceComponent$$OnInitOutputSet RVA 0x2121844 =====

void FUN_02131844(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb3e8,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb3e8,0);
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



// ===== FAT.Merge.ItemMixSourceComponent$$OnPostMerge RVA 0x2121898 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02131898(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02131ab0 + 0x21318b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02131ab4 + 0x21318cc));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb3e9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3e9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0x18)) goto LAB_02131a98;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar5 = 0;
    iVar1 = FUN_02116a38(0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_0213198c;
    }
  }
  else {
    iVar5 = 0;
    iVar1 = FUN_02116a38(param_2,0);
    if (iVar1 == 0) {
LAB_0213198c:
      iVar4 = func_0x02feb690(param_2,&iStack_24,1,**(undefined4 **)(_UNK_02131ab8 + 0x21319a0));
      iVar1 = iStack_24;
      iVar5 = 0;
      if (iVar4 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar5 = FUN_0212f990(iVar1);
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 0x48) + iVar5;
      }
    }
  }
  if (param_3 == 0) {
    func_0x01384bf0();
    iVar4 = 0;
    iVar1 = FUN_02116a38(0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
      goto LAB_02131a2c;
    }
  }
  else {
    iVar4 = 0;
    iVar1 = FUN_02116a38(param_3,0);
    if (iVar1 == 0) {
LAB_02131a2c:
      iVar2 = func_0x02feb690(param_3,&iStack_24,1,**(undefined4 **)(_UNK_02131abc + 0x2131a40));
      iVar1 = iStack_24;
      iVar4 = 0;
      if (iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar4 = FUN_0212f990(iVar1);
        iVar1 = iStack_24;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0x48) + iVar4;
      }
    }
  }
  if (*(int *)(param_1 + 0x44) < iVar4 + iVar5) {
    *(int *)(param_1 + 0x44) = iVar4 + iVar5;
  }
LAB_02131a98:
  FUN_02125ffc(param_1,param_2,param_3);
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$OnPostAttach RVA 0x2121ac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02131ac0(int param_1)

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
  int *piVar10;
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
  
  pcVar7 = (char *)(_UNK_02131d3c + 0x2131ad4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02131d40 + 0x2131ae8));
    func_0x01384978(*(undefined4 *)(_UNK_02131d44 + 0x2131af4));
    func_0x01384978(*(undefined4 *)(_UNK_02131d48 + 0x2131b00));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb3ea,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ea,0);
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
  piVar10 = *(int **)(_UNK_02131d4c + 0x2131ba4);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar10;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02131bec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,10);
LAB_02131bec:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0x28);
  uVar9 = 0;
  if (*(int *)(iVar1 + 0x18) < 1) {
    uVar9 = *(undefined4 *)(iVar1 + 0x38);
  }
  *(undefined1 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar8 + 0xc)) {
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_02131d50 + 0x2131c94));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar8 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar8) {
          puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x1d8);
          goto LAB_02131cfc;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,0x23);
LAB_02131cfc:
    iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar1 + 0xc);
      goto LAB_02131d34;
    }
  }
  uVar9 = 0;
LAB_02131d34:
  *(undefined4 *)(param_1 + 0x38) = uVar9;
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$OnUpdateInactive RVA 0x2121d54 =====

/* WARNING: Possible PIC construction at 0x02131e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02131e98) */
/* WARNING: Removing unreachable block (ram,0x02131ea8) */
/* WARNING: Removing unreachable block (ram,0x02131eac) */
/* WARNING: Removing unreachable block (ram,0x02131ec8) */
/* WARNING: Removing unreachable block (ram,0x02131ecc) */
/* WARNING: Removing unreachable block (ram,0x02131ed8) */
/* WARNING: Removing unreachable block (ram,0x02131edc) */
/* WARNING: Removing unreachable block (ram,0x02131ef0) */
/* WARNING: Removing unreachable block (ram,0x02131ef4) */
/* WARNING: Removing unreachable block (ram,0x02131f04) */
/* WARNING: Removing unreachable block (ram,0x02131f08) */

void FUN_02131d54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = func_0x0229f06c(0xb3ec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021773c4;
  }
  FUN_021265dc(param_1,param_2);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  iVar1 = func_0x0229f06c(0xb3ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ed,0);
    unaff_r4 = iStack_20;
    unaff_r5 = iStack_1c;
    unaff_r6 = iStack_18;
    if (iVar1 == 0) {
      func_0x01384bf0();
      unaff_r4 = iStack_20;
      unaff_r5 = iStack_1c;
      unaff_r6 = iStack_18;
    }
    goto SUB_021773c4;
  }
  iVar1 = FUN_0212f798(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_0212fb84(param_1), iVar1 == 0)) {
LAB_02131f54:
    iVar2 = param_2;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    iVar1 = FUN_0212f82c(param_1);
    if (param_2 < iVar1 - *(int *)(param_1 + 0x50)) {
LAB_02131f3c:
      iVar1 = FUN_0212f798(param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_2;
      }
      goto LAB_02131f54;
    }
    iVar1 = FUN_0212f8d4(param_1);
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x20) <= iVar1) goto LAB_02131f3c;
    iVar2 = FUN_0212f82c(param_1);
    unaff_r9 = iVar2 - *(int *)(param_1 + 0x50);
    unaff_lr = 0x2131e98;
    iVar2 = unaff_r9;
    iStack_20 = iVar3;
    iStack_1c = param_1;
    iStack_18 = iVar1;
    unaff_r8 = 0;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = iStack_18;
  *(int *)((int)register0x00000054 + -0x14) = iStack_1c;
  *(int *)((int)register0x00000054 + -0x18) = iStack_20;
  iVar1 = func_0x0229f06c(0xb3ee,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0212f734(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x30) < 1) {
        iVar1 = *(int *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x30) * 1000;
        iVar2 = *(int *)(param_1 + 0x4c) + iVar2;
        *(int *)(param_1 + 0x4c) = iVar2;
        if (iVar1 <= iVar2) {
          iVar3 = func_0x01457ae8(iVar2,iVar1);
          iVar6 = *(int *)(param_1 + 0x3c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar2 = *(int *)(param_1 + 0x4c);
          }
          iVar3 = *(int *)(iVar6 + 0x2c) * iVar3;
          func_0x01458344(iVar2,iVar1);
          iVar1 = *(int *)(param_1 + 0x48);
          uVar5 = extraout_r1;
          if (iVar1 <= iVar3) {
            uVar5 = 0;
            iVar3 = iVar1;
          }
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar3;
          *(int *)(param_1 + 0x48) = iVar1 - iVar3;
          *(undefined4 *)(param_1 + 0x4c) = uVar5;
          return;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb3ee,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
  unaff_r5 = *(int *)((int)register0x00000054 + -0x14);
  unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r7 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r8 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_2 = iVar2;
SUB_021773c4:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$_UpdateRecharge RVA 0x2121dc4 =====

/* WARNING: Possible PIC construction at 0x02131e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02131e98) */
/* WARNING: Removing unreachable block (ram,0x02131ea8) */
/* WARNING: Removing unreachable block (ram,0x02131eac) */
/* WARNING: Removing unreachable block (ram,0x02131ec8) */
/* WARNING: Removing unreachable block (ram,0x02131ecc) */
/* WARNING: Removing unreachable block (ram,0x02131ed8) */
/* WARNING: Removing unreachable block (ram,0x02131edc) */
/* WARNING: Removing unreachable block (ram,0x02131ef0) */
/* WARNING: Removing unreachable block (ram,0x02131ef4) */
/* WARNING: Removing unreachable block (ram,0x02131f04) */
/* WARNING: Removing unreachable block (ram,0x02131f08) */

void FUN_02131dc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  undefined4 unaff_r7;
  int iVar6;
  undefined4 unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  
  iVar1 = func_0x0229f06c(0xb3ed,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ed,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021773c4;
  }
  iVar1 = FUN_0212f798(param_1);
  if ((iVar1 == 0) || (iVar1 = FUN_0212fb84(param_1), iVar1 == 0)) {
LAB_02131f54:
    iVar2 = param_2;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    iVar1 = FUN_0212f82c(param_1);
    if (param_2 < iVar1 - *(int *)(param_1 + 0x50)) {
LAB_02131f3c:
      iVar1 = FUN_0212f798(param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_2;
      }
      goto LAB_02131f54;
    }
    iVar1 = FUN_0212f8d4(param_1);
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x20) <= iVar1) goto LAB_02131f3c;
    iVar2 = FUN_0212f82c(param_1);
    unaff_r9 = iVar2 - *(int *)(param_1 + 0x50);
    unaff_lr = 0x2131e98;
    iVar2 = unaff_r9;
    unaff_r4 = iVar3;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    unaff_r8 = 0;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  iVar1 = func_0x0229f06c(0xb3ee,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0212f734(param_1);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0x30) < 1) {
        iVar1 = *(int *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x30) * 1000;
        iVar2 = *(int *)(param_1 + 0x4c) + iVar2;
        *(int *)(param_1 + 0x4c) = iVar2;
        if (iVar1 <= iVar2) {
          iVar3 = func_0x01457ae8(iVar2,iVar1);
          iVar6 = *(int *)(param_1 + 0x3c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar2 = *(int *)(param_1 + 0x4c);
          }
          iVar3 = *(int *)(iVar6 + 0x2c) * iVar3;
          func_0x01458344(iVar2,iVar1);
          iVar1 = *(int *)(param_1 + 0x48);
          uVar5 = extraout_r1;
          if (iVar1 <= iVar3) {
            uVar5 = 0;
            iVar3 = iVar1;
          }
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar3;
          *(int *)(param_1 + 0x48) = iVar1 - iVar3;
          *(undefined4 *)(param_1 + 0x4c) = uVar5;
          return;
        }
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xb3ee,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
  unaff_r5 = *(int *)((int)register0x00000054 + -0x14);
  unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r7 = *(undefined4 *)((int)register0x00000054 + -0xc);
  unaff_r8 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  param_2 = iVar2;
SUB_021773c4:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
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
  iVar3 = *(int *)(iVar1 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$OnUpdate RVA 0x2121f70 =====

/* WARNING: Possible PIC construction at 0x02131e94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02131e98) */
/* WARNING: Removing unreachable block (ram,0x02131ea8) */
/* WARNING: Removing unreachable block (ram,0x02131eac) */
/* WARNING: Removing unreachable block (ram,0x02131ec8) */
/* WARNING: Removing unreachable block (ram,0x02131ecc) */
/* WARNING: Removing unreachable block (ram,0x02131ed8) */
/* WARNING: Removing unreachable block (ram,0x02131edc) */
/* WARNING: Removing unreachable block (ram,0x02131ef0) */
/* WARNING: Removing unreachable block (ram,0x02131ef4) */
/* WARNING: Removing unreachable block (ram,0x02131f04) */
/* WARNING: Removing unreachable block (ram,0x02131f08) */

void FUN_02131f70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int unaff_lr;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iVar2 = func_0x0229f06c(0xb3ef,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3ef,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021773c4;
  }
  iVar2 = FUN_02126964(param_1);
  if (iVar2 != 0) {
    return;
  }
  FUN_02126b58(param_1,param_2);
  param_2 = func_0x021621f0(param_1,param_2,0);
  func_0x02132010(param_1,param_2);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  iVar2 = func_0x0229f06c(0xb3ed,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb3ed,0);
    unaff_r4 = iStack_20;
    unaff_r5 = iStack_1c;
    unaff_r6 = iStack_18;
    if (iVar2 == 0) {
      func_0x01384bf0();
      unaff_r4 = iStack_20;
      unaff_r5 = iStack_1c;
      unaff_r6 = iStack_18;
    }
    goto SUB_021773c4;
  }
  iVar2 = FUN_0212f798(param_1);
  if ((iVar2 == 0) || (iVar2 = FUN_0212fb84(param_1), iVar2 == 0)) {
LAB_02131f54:
    iVar1 = param_2;
    if (param_2 < 1) {
      return;
    }
  }
  else {
    iVar2 = FUN_0212f82c(param_1);
    if (param_2 < iVar2 - *(int *)(param_1 + 0x50)) {
LAB_02131f3c:
      iVar2 = FUN_0212f798(param_1);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_2;
      }
      goto LAB_02131f54;
    }
    iVar2 = FUN_0212f8d4(param_1);
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x20) <= iVar2) goto LAB_02131f3c;
    iVar1 = FUN_0212f82c(param_1);
    unaff_r9 = iVar1 - *(int *)(param_1 + 0x50);
    unaff_lr = 0x2131e98;
    iVar1 = unaff_r9;
    iStack_20 = iVar3;
    iStack_1c = param_1;
    iStack_18 = iVar2;
    unaff_r8 = 0;
    unaff_r10 = param_2;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x10) = iStack_18;
  *(int *)((int)register0x00000054 + -0x14) = iStack_1c;
  *(int *)((int)register0x00000054 + -0x18) = iStack_20;
  iVar2 = func_0x0229f06c(0xb3ee,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0212f734(param_1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x30) < 1) {
        iVar2 = *(int *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar2;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x3c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x30) * 1000;
        iVar1 = *(int *)(param_1 + 0x4c) + iVar1;
        *(int *)(param_1 + 0x4c) = iVar1;
        if (iVar2 <= iVar1) {
          iVar3 = func_0x01457ae8(iVar1,iVar2);
          iVar6 = *(int *)(param_1 + 0x3c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar1 = *(int *)(param_1 + 0x4c);
          }
          iVar3 = *(int *)(iVar6 + 0x2c) * iVar3;
          func_0x01458344(iVar1,iVar2);
          iVar2 = *(int *)(param_1 + 0x48);
          uVar5 = extraout_r1;
          if (iVar2 <= iVar3) {
            uVar5 = 0;
            iVar3 = iVar2;
          }
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar3;
          *(int *)(param_1 + 0x48) = iVar2 - iVar3;
          *(undefined4 *)(param_1 + 0x4c) = uVar5;
          return;
        }
      }
    }
    return;
  }
  iVar2 = func_0x0229f13c(0xb3ee,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x18);
  unaff_r5 = *(int *)((int)register0x00000054 + -0x14);
  unaff_r6 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r7 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r8 = *(int *)((int)register0x00000054 + -8);
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  param_2 = iVar1;
SUB_021773c4:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$_UpdateJumpCD RVA 0x2122010 =====

void FUN_02132010(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb3f0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3f0,0);
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
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x1e) != '\0') {
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0210cd28(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020d83c8(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0214197c(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139a28(iVar1,0);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x3c);
      iVar1 = *(int *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (iVar1 < *(int *)(iVar3 + 0x20)) {
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar1 + 0x20);
      }
    }
  }
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$_TickRecharge RVA 0x2122148 =====

void FUN_02132148(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  iVar1 = func_0x0229f06c(0xb3ee,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3ee,0);
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
  iVar1 = FUN_0212f734(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x30) < 1) {
      iVar1 = *(int *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x30) * 1000;
      param_2 = *(int *)(param_1 + 0x4c) + param_2;
      *(int *)(param_1 + 0x4c) = param_2;
      if (iVar1 <= param_2) {
        iVar3 = func_0x01457ae8(param_2,iVar1);
        iVar5 = *(int *)(param_1 + 0x3c);
        if (iVar5 == 0) {
          func_0x01384bf0();
          param_2 = *(int *)(param_1 + 0x4c);
        }
        iVar3 = *(int *)(iVar5 + 0x2c) * iVar3;
        func_0x01458344(param_2,iVar1);
        iVar1 = *(int *)(param_1 + 0x48);
        uVar4 = extraout_r1;
        if (iVar1 <= iVar3) {
          uVar4 = 0;
          iVar3 = iVar1;
        }
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + iVar3;
        *(int *)(param_1 + 0x48) = iVar1 - iVar3;
        *(undefined4 *)(param_1 + 0x4c) = uVar4;
        return;
      }
    }
  }
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$.ctor RVA 0x2122278 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02132278(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_021322ec + 0x213228c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021322f0 + 0x21322a0));
    func_0x01384978(*(undefined4 *)(_UNK_021322f4 + 0x21322ac));
    *pcVar3 = '\x01';
  }
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_021322f8 + 0x21322c0));
  func_0x03258eb8(uVar2,**(undefined4 **)(_UNK_021322fc + 0x21322d4));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
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
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02127284 + 0x212719c));
  func_0x03d59324(uVar2,**(undefined4 **)(_UNK_02127288 + 0x21271b0),extraout_r2,extraout_r3,
                  unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  puVar1 = *(undefined4 **)(_UNK_0212728c + 0x21271c4);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x03258eb8(uVar2,**(undefined4 **)(_UNK_02127290 + 0x21271dc));
  puVar1 = *(undefined4 **)(_UNK_02127294 + 0x21271f0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_02127298 + 0x2127208));
  puVar1 = *(undefined4 **)(_UNK_0212729c + 0x212721c);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_021272a0 + 0x2127234));
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemMixSourceComponent$$<>iFixBaseProxy_OnSerialize RVA 0x2122300 =====

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



// ===== FAT.Merge.ItemMixSourceComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x2122304 =====

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



// ===== FAT.Merge.ItemMixSourceComponent$$<>iFixBaseProxy_OnPostMerge RVA 0x2122308 =====

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



// ===== FAT.Merge.ItemMixSourceComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x212230c =====

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



// ===== FAT.Merge.ItemMixSourceComponent$$<>iFixBaseProxy_OnUpdateInactive RVA 0x2122310 =====

void thunk_FUN_021265dc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e5e,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5e5e,0);
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



// ===== FAT.Merge.ItemMixSourceComponent$$<>iFixBaseProxy_OnUpdate RVA 0x2122314 =====

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


