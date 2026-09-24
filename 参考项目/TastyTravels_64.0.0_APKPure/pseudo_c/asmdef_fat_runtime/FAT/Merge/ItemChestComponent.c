/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemChestComponent$$get_isWaiting RVA 0x210f8ec =====

uint FUN_0211f8ec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x165a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x165a,0);
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
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x0211f9c8(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02141acc(iVar1,0);
    iVar4 = func_0x02123568(param_1,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = FUN_0210e5f4(iVar4);
    uVar3 = (uint)(iVar1 == iVar4);
  }
  return uVar3;
}



// ===== FAT.Merge.ItemChestComponent$$get_isNeedWait RVA 0x210f9c8 =====

uint FUN_0211f9c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x165b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x165b,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(0 < *(int *)(iVar1 + 0x34));
}



// ===== FAT.Merge.ItemChestComponent$$get_energyCost RVA 0x210fa38 =====

undefined4 FUN_0211fa38(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x162a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x162a,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x1c);
}



// ===== FAT.Merge.ItemChestComponent$$get_openWaitLeftMilli RVA 0x210fa9c =====

int FUN_0211fa9c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  iVar3 = 0;
  iVar1 = func_0x0229f06c(0x5e76,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e76,0);
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
  iVar1 = FUN_0211f8ec(param_1);
  if (iVar1 != 0) {
    iVar1 = func_0x0211fb6c(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 0x34);
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02141b20(iVar1,0);
    iVar3 = iVar4 * 1000 - iVar3;
  }
  return iVar3;
}



// ===== FAT.Merge.ItemChestComponent$$get_config RVA 0x210fb6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0211fb6c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e50,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e50,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02238080 + 0x2237fa0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238084 + 0x2237fb4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02238088 + 0x2238070));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.Merge.ItemChestComponent$$get_openWaitMilli RVA 0x210fbc0 =====

undefined4 FUN_0211fbc0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5edd,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0211f8ec(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_02116f08(iVar1);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x5e77,0);
    if (iVar1 == 0) {
      return *(undefined4 *)(param_1 + 0x44);
    }
    iVar1 = func_0x0229f13c(0x5e77,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5edd,0);
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



// ===== FAT.Merge.ItemChestComponent$$get_countLeft RVA 0x210fc68 =====

int FUN_0211fc68(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1474,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1474,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(iVar1 + 0x18) - *(int *)(param_1 + 0x38);
}



// ===== FAT.Merge.ItemChestComponent$$get_canUse RVA 0x210fcd4 =====

undefined4 FUN_0211fcd4(int param_1)

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
  iVar1 = func_0x0229f06c(0x1473,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1473,0);
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
  iVar1 = FUN_0211fc68(param_1);
  if ((0 < iVar1) && (uVar3 = 0, *(char *)(param_1 + 0x3c) != '\0')) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemChestComponent$$get_isOpenAndUsed RVA 0x210fd48 =====

uint FUN_0211fd48(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb37e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb37e,0);
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
  return (uint)(0 < *(int *)(param_1 + 0x38));
}



// ===== FAT.Merge.ItemChestComponent$$FAT.Merge.IEffectReceiver.WillReceiveEffect RVA 0x210fdac =====

uint FUN_0211fdac(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb37f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb37f,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  uVar2 = FUN_0211f8ec(param_1);
  return param_2 != 0 & uVar2;
}



// ===== FAT.Merge.ItemChestComponent$$Validate RVA 0x210fe18 =====

undefined4 FUN_0211fe18(int param_1)

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
  iVar1 = func_0x0229f06c(0xb380,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb380,0);
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
  if ((param_1 != 0) && (uVar3 = 0, *(int *)(param_1 + 0x14) != 0)) {
    uVar3 = 1;
  }
  return uVar3;
}



// ===== FAT.Merge.ItemChestComponent$$OnSerialize RVA 0x210fe84 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211fe84(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
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
  
  pcVar5 = (char *)(_UNK_0211ff78 + 0x211fe9c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211ff7c + 0x211feb0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xb381,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb381,0);
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
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  func_0x02123514(param_1,param_2,0);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0211ff80 + 0x211ff1c));
  func_0x0179e078(iVar2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x3c);
  *(int *)(param_2 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    func_0x01384bf0();
    iVar2 = *(int *)(param_2 + 0x2c);
    uRam0000000c = uVar1;
    if (iVar2 == 0) {
      func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0xc) = uVar1;
  }
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x38);
  return;
}



// ===== FAT.Merge.ItemChestComponent$$OnDeserialize RVA 0x210ff84 =====

void FUN_0211ff84(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xb382,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb382,0);
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
  func_0x021237d4(param_1,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    iVar1 = *(int *)(*(int *)(param_2 + 0x2c) + 0x10);
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 0x18) <= iVar1) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x18)) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(int *)(param_1 + 0x38) = *(int *)(iVar1 + 0x18) + -1;
      }
    }
    iVar1 = *(int *)(param_2 + 0x2c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(iVar1 + 0xc);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    iVar1 = func_0x0229f06c(0xb383,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0xb383,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,uVar4,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485238(&uStack_38,uVar4,0);
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
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    return;
  }
  return;
}



// ===== FAT.Merge.ItemChestComponent$$OnPostAttach RVA 0x211008c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212008c(int param_1)

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
  
  pcVar7 = (char *)(_UNK_021201fc + 0x21200a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02120200 + 0x21200b4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb384,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb384,0);
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
  piVar2 = (int *)func_0x021566f4(0);
  iVar1 = func_0x02123568(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar9 = FUN_0210e2d4(iVar1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02120204 + 0x2120150)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x110);
        goto LAB_02120198;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02120204 + 0x2120150),10);
LAB_02120198:
  iVar1 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0x14);
  func_0x021262e0(param_1,0);
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(bool *)(param_1 + 0x3c) = iVar1 < 1;
  return;
}



// ===== FAT.Merge.ItemChestComponent$$OnPostMerge RVA 0x2110208 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02120208(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_02120378 + 0x2120228);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212037c + 0x212023c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb385,0);
  if (iVar1 == 0) {
    func_0x02125ffc(param_1,param_2,param_3,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_02120380 + 0x21202c8);
    iVar1 = func_0x02feb4f8(param_2,0,*puVar5);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb4f8(param_3,0,*puVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_0211fc68(iVar1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_0211fc68(iVar2);
    iVar6 = *(int *)(param_1 + 0x40);
    if (iVar6 == 0) {
      func_0x01384bf0();
      iVar6 = *(int *)(param_1 + 0x40);
      iVar3 = iRam00000018;
      if (iVar2 + iVar1 < iRam00000018) {
        iVar3 = iVar2 + iVar1;
      }
      if (iVar6 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x18);
      if (iVar2 + iVar1 < *(int *)(iVar6 + 0x18)) {
        iVar3 = iVar2 + iVar1;
      }
    }
    *(int *)(param_1 + 0x38) = *(int *)(iVar6 + 0x18) - iVar3;
  }
  else {
    iVar1 = func_0x0229f13c(0xb385,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemChestComponent$$OnInitOrderedOutput RVA 0x2110384 =====

/* WARNING: Removing unreachable block (ram,0x0325ad8c) */
/* WARNING: Removing unreachable block (ram,0x0325ad9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02120384(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
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
  
  pcVar12 = (char *)(_UNK_02120474 + 0x212039c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02120478 + 0x21203b0));
    func_0x01384978(*(undefined4 *)(_UNK_0212047c + 0x21203bc));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb386,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb386,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar13 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar1 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_38,uVar8,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar10 = *(int **)(iVar1 + 0x24);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(**(int **)(_UNK_02120480 + 0x2120464) + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_0325ae98 + 0x325a8f8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0325ae9c + 0x325a910));
    func_0x01384978(*(undefined4 *)(_UNK_0325aea0 + 0x325a91c));
    *pcVar12 = '\x01';
  }
  if (piVar10 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)param_2[3] < uVar6) {
    func_0x0484c9cc(0);
  }
  iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
    iVar11 = func_0x014001f0(iVar11);
  }
  piVar2 = (int *)func_0x01384ab8(piVar10,iVar11);
  if (piVar2 == (int *)0x0) {
    if ((int)uVar6 < param_2[3]) {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      iVar3 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar11) {
            puVar4 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
            goto LAB_0325abc8;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_0325abc8:
      piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
      piVar2 = *(int **)(_UNK_0325aea4 + 0x325abe8);
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_0325ac40;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*piVar2,0);
LAB_0325ac40:
        iVar11 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar11 == 0) goto LAB_0325ad0c;
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar3 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
              goto LAB_0325acd4;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar11,0);
LAB_0325acd4:
        uVar13 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        func_0x0325a680(param_2,uVar6,uVar13,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar6 = uVar6 + 1;
      } while( true );
    }
    func_0x0325b5f8(param_2,piVar10,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20))
    ;
  }
  else {
    iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar3 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar11) {
          puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_0325aa70;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325aa70:
    iVar11 = (*(code *)*puVar4)(piVar2,puVar4[1]);
    if (0 < iVar11) {
      func_0x03259cec(param_2,param_2[3] + iVar11,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar6 < param_2[3]) {
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],uVar6,param_2[2],iVar11 + uVar6);
      }
      if (param_2 == piVar2) {
        uStack_2c = 0;
        uStack_30 = uVar6;
        func_0x0484e904(param_2[2],0,param_2[2],uVar6);
        uStack_30 = param_2[3] - uVar6;
        uStack_2c = 0;
        func_0x0484e904(param_2[2],iVar11 + uVar6,param_2[2],uVar6 << 1);
      }
      else {
        iVar3 = param_2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar5 = *piVar2;
        uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar10[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0xe8);
              goto LAB_0325ab94;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,5);
LAB_0325ab94:
        (*(code *)*puVar4)(piVar2,iVar3,uVar6,puVar4[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0325adbc:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0325ad0c:
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_0325aea8 + 0x325ad2c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_0325ad74;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_0325aea8 + 0x325ad2c),0);
LAB_0325ad74:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  goto LAB_0325adbc;
}



// ===== FAT.Merge.ItemChestComponent$$OnInitOutputSet RVA 0x2110484 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02120e6c) */
/* WARNING: Removing unreachable block (ram,0x02120ffc) */
/* WARNING: Removing unreachable block (ram,0x0212106c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02120484(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02121080 + 0x21204a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02121084 + 0x21204b4));
    func_0x01384978(*(undefined4 *)(_UNK_02121088 + 0x21204c0));
    func_0x01384978(*(undefined4 *)(_UNK_0212108c + 0x21204cc));
    func_0x01384978(*(undefined4 *)(_UNK_02121090 + 0x21204d8));
    func_0x01384978(*(undefined4 *)(_UNK_02121094 + 0x21204e4));
    func_0x01384978(*(undefined4 *)(_UNK_02121098 + 0x21204f0));
    func_0x01384978(*(undefined4 *)(_UNK_0212109c + 0x21204fc));
    func_0x01384978(*(undefined4 *)(_UNK_021210a0 + 0x2120508));
    func_0x01384978(*(undefined4 *)(_UNK_021210a4 + 0x2120514));
    func_0x01384978(*(undefined4 *)(_UNK_021210a8 + 0x2120520));
    func_0x01384978(*(undefined4 *)(_UNK_021210ac + 0x212052c));
    func_0x01384978(*(undefined4 *)(_UNK_021210b0 + 0x2120538));
    func_0x01384978(*(undefined4 *)(_UNK_021210b4 + 0x2120544));
    func_0x01384978(*(undefined4 *)(_UNK_021210b8 + 0x2120550));
    func_0x01384978(*(undefined4 *)(_UNK_021210bc + 0x212055c));
    func_0x01384978(*(undefined4 *)(_UNK_021210c0 + 0x2120568));
    func_0x01384978(*(undefined4 *)(_UNK_021210c4 + 0x2120574));
    func_0x01384978(*(undefined4 *)(_UNK_021210c8 + 0x2120580));
    func_0x01384978(*(undefined4 *)(_UNK_021210cc + 0x212058c));
    func_0x01384978(*(undefined4 *)(_UNK_021210d0 + 0x2120598));
    func_0x01384978(*(undefined4 *)(_UNK_021210d4 + 0x21205a4));
    func_0x01384978(*(undefined4 *)(_UNK_021210d8 + 0x21205b0));
    func_0x01384978(*(undefined4 *)(_UNK_021210dc + 0x21205bc));
    func_0x01384978(*(undefined4 *)(_UNK_021210e0 + 0x21205c8));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0xb387,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb387,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_021210e4 + 0x2120638));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x40);
  *(int *)(iVar1 + 8) = param_1;
  if (iVar2 == 0) {
LAB_02120e7c:
    uVar19 = func_0x01384bf0();
    iVar1 = (int)((ulonglong)uVar19 >> 0x20);
    uVar3 = (undefined4)uVar19;
    if (iVar1 != 1) {
      func_0x028c98a0(&uStack_38,0);
      if (iVar1 != 1) {
        func_0x028c98a0(&uStack_30,0);
        func_0x01459844(uVar3);
        func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      piVar8 = (int *)func_0x0145b008(uVar3);
      iVar1 = *piVar8;
      func_0x0145b0f8();
      func_0x028c98a0(&uStack_30,0);
      if (iVar1 != 0) {
        func_0x01384bec(iVar1);
      }
      goto LAB_02120bd8;
    }
    piVar8 = (int *)func_0x0145b008(uVar3);
    iVar2 = *piVar8;
    iVar1 = 0;
    func_0x0145b0f8();
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x2c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar2 = 0;
      puVar18 = *(undefined4 **)(_UNK_021210e8 + 0x2120690);
      puVar13 = *(undefined4 **)(_UNK_021210ec + 0x2120698);
      puVar15 = *(undefined4 **)(_UNK_021210f0 + 0x21206a0);
      while( true ) {
        iVar9 = *(int *)(param_1 + 0x40);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar9 + 0x24);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar2) break;
        iVar9 = *(int *)(param_1 + 0x40);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar9 + 0x24);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0364c9b8(iVar9,iVar2,*puVar18);
        iVar9 = *(int *)(param_1 + 0x40);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar4 = func_0x03003b84(*(undefined4 *)(iVar9 + 0x2c),iVar2,1,*puVar13);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d7c(param_2,uVar3,uVar4,*puVar15);
        iVar2 = iVar2 + 1;
      }
    }
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_02120e7c;
    iVar2 = *(int *)(*(int *)(param_1 + 0x40) + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) < 1) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x40);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0364c9b8(iVar2,0,**(undefined4 **)(_UNK_021210f4 + 0x21207a8));
    piVar8 = *(int **)(_UNK_021210f8 + 0x21207c0);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_40,iVar2,iVar1 + 0xc,**(undefined4 **)(_UNK_021210fc + 0x212080c));
    uStack_2c = uStack_3c;
    uStack_30 = uStack_40;
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02121100 + 0x2120828));
    func_0x0244f5a0(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar8 = *(int **)(_UNK_02121104 + 0x212085c);
    iVar9 = *piVar8;
    iVar5 = *(int *)(iVar9 + 0x74);
    *(int *)(iVar2 + 0xc) = iVar1;
    if (iVar5 == 0) {
      func_0x01384ab4();
      iVar9 = *piVar8;
    }
    iVar1 = **(int **)(iVar9 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_40,iVar1,(int *)(iVar2 + 8),**(undefined4 **)(_UNK_02121108 + 0x2120898)
                   );
    iVar1 = *(int *)(iVar2 + 0xc);
    uStack_34 = uStack_3c;
    uStack_38 = uStack_40;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar1 + 0xc);
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e5f4(iVar1);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x028ced38(iVar9,uVar3,0,0);
    iVar1 = 0;
    while( true ) {
      iVar9 = *(int *)(param_1 + 0x40);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar9 + 0x28);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar9 + 0xc) <= iVar1) break;
      if (iVar5 == 0) {
        func_0x01384bf0();
        iVar9 = iRam00000024;
        iVar5 = *(int *)(param_1 + 0x40);
        if (iVar5 == 0) {
          iVar5 = 0;
          func_0x01384bf0();
        }
      }
      else {
        iVar9 = *(int *)(iVar5 + 0x24);
      }
      iVar5 = *(int *)(iVar5 + 0x28);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar5,iVar1,**(undefined4 **)(_UNK_0212110c + 0x2120994));
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      iVar9 = func_0x0364c54c(iVar9,uVar3,**(undefined4 **)(_UNK_02121110 + 0x21209bc));
      iVar5 = *(int *)(iVar2 + 8);
      if (iVar9 < 0) {
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar5 + 8);
        uVar16 = *(uint *)(iVar5 + 0xc);
        piVar8 = *(int **)(_UNK_0212111c + 0x2120a98);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        iVar10 = *piVar8;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar16 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar16 + 1;
          *(undefined4 *)(iVar9 + uVar16 * 4 + 0x10) = 0;
        }
        else {
          func_0x0325970c(iVar5,0,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x40);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 0x2c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x0364c9b8(iVar10,iVar9,**(undefined4 **)(_UNK_02121114 + 0x2120a04));
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar9 = *(int *)(iVar5 + 8);
        uVar16 = *(uint *)(iVar5 + 0xc);
        piVar8 = *(int **)(_UNK_02121118 + 0x2120a40);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
        iVar10 = *piVar8;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar16 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar5 + 0xc) = uVar16 + 1;
          *(undefined4 *)(iVar9 + uVar16 * 4 + 0x10) = uVar3;
        }
        else {
          func_0x0325970c(iVar5,uVar3,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar1 = iVar1 + 1;
    }
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar11 = *(undefined4 *)(iVar5 + 0x28);
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02121120 + 0x2120b20));
    func_0x03a07058(uVar3,iVar2,**(undefined4 **)(_UNK_02121124 + 0x2120b38),0);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02121128 + 0x2120b58));
    iVar2 = 0;
    func_0x024505a0(uVar4,uVar12,**(undefined4 **)(_UNK_0212112c + 0x2120b6c),0);
    iStack_48 = func_0x02fbeea0(uVar11,uVar3,uVar4,**(undefined4 **)(_UNK_02121130 + 0x2120b8c));
    iVar1 = 0xb;
    iStack_4c = param_1;
  }
  func_0x028c98a0(&uStack_38,0);
  if (iVar2 != 0) {
    func_0x01384bec(iVar2);
  }
  func_0x028c98a0(&uStack_30,0);
  if (iVar1 != 0 && iVar1 != 0xb) {
    return;
  }
LAB_02120bd8:
  iVar1 = *(int *)(iStack_4c + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar8 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02121134 + 0x2120c04));
  piVar14 = *(int **)(_UNK_02121138 + 0x2120c1c);
  piVar17 = *(int **)(_UNK_0212113c + 0x2120c24);
  puVar13 = *(undefined4 **)(_UNK_02121140 + 0x2120c2c);
LAB_02120c28:
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar8;
  uVar16 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar16 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar14) {
        puVar15 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_02120c84;
      }
      uVar16 = uVar16 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar16 != 0);
  }
  puVar15 = (undefined4 *)func_0x014002dc(piVar8,*piVar14,0);
LAB_02120c84:
  iVar1 = (*(code *)*puVar15)(piVar8,puVar15[1]);
  if (iVar1 != 0) {
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar16 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar16 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar17) {
          puVar15 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02120cf8;
        }
        uVar16 = uVar16 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar16 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar8,*piVar17,0);
LAB_02120cf8:
    iVar1 = (*(code *)*puVar15)(piVar8,puVar15[1]);
    if (iVar1 != iStack_48) {
      iVar2 = *(int *)(iStack_4c + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x28);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0364c54c(iVar2,iVar1,**(undefined4 **)(_UNK_02121144 + 0x2120d44));
      if (-1 < iVar2) {
        iVar2 = func_0x02f7c01c(param_2,iStack_48,0,*puVar13);
        iVar9 = func_0x02f7c01c(param_2,iVar1,0,*puVar13);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(param_2,iStack_48,iVar9 + iVar2,**(undefined4 **)(_UNK_02121148 + 0x2120db4)
                       );
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5b44c(param_2,iVar1,**(undefined4 **)(_UNK_0212114c + 0x2120dd8));
      }
    }
    goto LAB_02120c28;
  }
  if (piVar8 != (int *)0x0) {
    iVar1 = *piVar8;
    uVar16 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar16 != 0) {
      piVar14 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar14[-1] == **(int **)(_UNK_02121150 + 0x2120e0c)) {
          puVar13 = (undefined4 *)(iVar1 + *piVar14 * 8 + 0xc0);
          goto LAB_02120e54;
        }
        uVar16 = uVar16 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(_UNK_02121150 + 0x2120e0c),0);
LAB_02120e54:
    (*(code *)*puVar13)(piVar8,puVar13[1]);
  }
  return;
}



// ===== FAT.Merge.ItemChestComponent.<>c__DisplayClass28_0$$.ctor RVA 0x2111158 =====

void FUN_02121158(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemChestComponent.<>c__DisplayClass28_1$$.ctor RVA 0x2111160 =====

void FUN_02121160(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemChestComponent$$StartWait RVA 0x2111168 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02121168(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_02121438 + 0x2121180);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212143c + 0x2121194));
    func_0x01384978(*(undefined4 *)(_UNK_02121440 + 0x21211a0));
    func_0x01384978(*(undefined4 *)(_UNK_02121444 + 0x21211ac));
    func_0x01384978(*(undefined4 *)(_UNK_02121448 + 0x21211b8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dde,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dde,0);
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
    uVar6 = func_0x0245496c(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_0211fb6c(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x34) < 1) {
    uVar6 = 0;
  }
  else {
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1);
    func_0x021566f4(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02141acc(iVar1,0);
    if (iVar5 < 1) {
      uVar6 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02144730(iVar1,uVar6,0);
      iVar1 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02118aa0(iVar1);
      uVar6 = 1;
    }
    else {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0212144c + 0x212128c),2);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = func_0x02141acc(iVar1,0);
      puVar7 = *(undefined4 **)(_UNK_02121450 + 0x21212bc);
      iVar1 = func_0x01384abc(*puVar7,&uStack_1c);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar1;
      iVar1 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = FUN_0210e5f4(iVar1);
      iVar1 = func_0x01384abc(*puVar7,&uStack_20);
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if ((uint)piVar2[3] < 2) {
        func_0x01384bf4();
      }
      piVar2[5] = iVar1;
      if (*(int *)(**(int **)(_UNK_02121454 + 0x21213a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar6 = 0;
      func_0x028c23bc(**(undefined4 **)(_UNK_02121458 + 0x21213c8),piVar2,0);
    }
  }
  return uVar6;
}



// ===== FAT.Merge.ItemChestComponent$$SetOpen RVA 0x211145c =====

undefined4 FUN_0212145c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e51,0);
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
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = FUN_0210e2d4(iVar1);
    func_0x023179f0(uVar4,0);
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02141acc(iVar1,0);
    iVar3 = func_0x02123568(param_1,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = FUN_0210e5f4(iVar3);
    if (iVar1 == iVar3) {
      iVar1 = func_0x02123568(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116f08(iVar1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02146358(iVar1,0);
    }
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02118aa0(iVar1);
  }
  return 1;
}



// ===== FAT.Merge.ItemChestComponent$$ConsumeNextItem RVA 0x21115c4 =====

void FUN_021215c4(int param_1)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x9de2,0);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    func_0x02124444(param_1,&uStack_14,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9de2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217493c(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.ItemChestComponent$$CalculateSpeedOpenCost RVA 0x2111644 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02121644(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0212175c + 0x212165c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02121760 + 0x2121670));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb38c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb38c,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x34) < 1) {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
    uVar5 = FUN_0211fa9c(param_1);
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x34);
    if (*(int *)(**(int **)(_UNK_02121764 + 0x2121718) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_18 = 0;
    uVar5 = func_0x028d41ac(0,uVar2,uVar5,iVar1 * 1000);
  }
  return uVar5;
}



// ===== FAT.Merge.ItemChestComponent$$SpeedOpen RVA 0x2111768 =====

undefined4 FUN_02121768(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb38d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb38d,0);
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
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return 1;
  }
  iVar1 = FUN_0212145c(param_1);
  uVar4 = 0;
  if (iVar1 != 0) {
    iVar1 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02116f08(iVar1);
    uVar4 = func_0x02123568(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,uVar4,0,0);
    uVar4 = 1;
  }
  return uVar4;
}



// ===== FAT.Merge.ItemChestComponent$$.ctor RVA 0x211183c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0212183c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02127260 + 0x2127120);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02127264 + 0x2127134),0);
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



// ===== FAT.Merge.ItemChestComponent$$<>iFixBaseProxy_OnSerialize RVA 0x2111844 =====

void FUN_02121844(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7d,0,0);
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



// ===== FAT.Merge.ItemChestComponent$$<>iFixBaseProxy_OnDeserialize RVA 0x211184c =====

void FUN_0212184c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c62,0,0);
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



// ===== FAT.Merge.ItemChestComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x2111854 =====

/* WARNING: Possible PIC construction at 0x02135cf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02135cf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02121854(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar8;
  undefined4 unaff_r6;
  undefined4 uVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int *piVar10;
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
    func_0x01384978(*(undefined4 *)(_UNK_02126558 + 0x2126308),0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb362,0);
  if (iVar1 == 0) {
    func_0x02127894(param_1);
    piVar2 = (int *)func_0x021566f4(0);
    iVar1 = func_0x02123568(param_1);
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
    iVar1 = func_0x02123568(param_1);
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
        iVar1 = func_0x02123568(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_02116f08(iVar1,0);
        iVar4 = func_0x02123568(param_1);
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



// ===== FAT.Merge.ItemChestComponent$$<>iFixBaseProxy_OnPostMerge RVA 0x211185c =====

void FUN_0212185c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9ea5,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.ItemChestComponent$$<>iFixBaseProxy_OnInitOrderedOutput RVA 0x2111864 =====

void FUN_02121864(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb365,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xb365,0);
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



// ===== FAT.Merge.ItemChestComponent.<>c__DisplayClass28_0$$<OnInitOutputSet>b__1 RVA 0x211186c =====

undefined4 FUN_0212186c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x1250,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1250,0);
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
    func_0x01485278(&uStack_30,iVar3,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x0245498c(&uStack_30,0,0);
    return uVar6;
  }
  func_0x028ceb64(iVar3);
  iVar1 = *(int *)(iVar3 + 8);
  uVar4 = *(uint *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar4) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar1 + uVar4 * 4 + 0x10);
}



// ===== FAT.Merge.ItemChestComponent.<>c__DisplayClass28_1$$<OnInitOutputSet>b__0 RVA 0x2111890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02121890(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_02121958 + 0x21218a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0212195c + 0x21218bc));
    func_0x01384978(*(undefined4 *)(_UNK_02121960 + 0x21218c8));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x40);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x28);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364c54c(iVar5,param_2,**(undefined4 **)(_UNK_02121964 + 0x2121924));
  uVar2 = extraout_r3;
  if (iVar4 == 0) {
    func_0x01384bf0();
    uVar2 = extraout_r3_00;
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar1) {
    func_0x0484c9cc(0,uVar1,**(undefined4 **)(_UNK_02121968 + 0x212194c),uVar2,unaff_r4,unaff_r5);
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar1) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar4 + uVar1 * 4 + 0x10);
}


