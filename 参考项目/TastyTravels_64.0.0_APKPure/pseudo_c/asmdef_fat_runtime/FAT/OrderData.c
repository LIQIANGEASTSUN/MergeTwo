/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.OrderData$$get__innerRequires RVA 0x1e2e2f0 =====

undefined4 FUN_01e3e2f0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.OrderData$$set__innerRequires RVA 0x1e2e2f8 =====

void FUN_01e3e2f8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.OrderData$$get__innerRewards RVA 0x1e2e300 =====

undefined4 FUN_01e3e300(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.OrderData$$set__innerRewards RVA 0x1e2e308 =====

void FUN_01e3e308(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.OrderData$$get_State RVA 0x1e2e310 =====

undefined4 FUN_01e3e310(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.OrderData$$set_State RVA 0x1e2e318 =====

void FUN_01e3e318(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.OrderData$$get_Id RVA 0x1e2e320 =====

undefined4 FUN_01e3e320(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.OrderData$$set_Id RVA 0x1e2e328 =====

void FUN_01e3e328(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.OrderData$$get_OrderType RVA 0x1e2e330 =====

undefined4 FUN_01e3e330(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.OrderData$$set_OrderType RVA 0x1e2e338 =====

void FUN_01e3e338(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.OrderData$$get_ProviderType RVA 0x1e2e340 =====

undefined4 FUN_01e3e340(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.OrderData$$set_ProviderType RVA 0x1e2e348 =====

void FUN_01e3e348(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}



// ===== FAT.OrderData$$get_RoleId RVA 0x1e2e350 =====

undefined4 FUN_01e3e350(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== FAT.OrderData$$set_RoleId RVA 0x1e2e358 =====

void FUN_01e3e358(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



// ===== FAT.OrderData$$get_UnlockLevel RVA 0x1e2e360 =====

undefined4 FUN_01e3e360(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== FAT.OrderData$$set_UnlockLevel RVA 0x1e2e368 =====

void FUN_01e3e368(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== FAT.OrderData$$get_Requires RVA 0x1e2e370 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3e370(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x16c6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16c6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d23d0 + 0x21d22f0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d23d4 + 0x21d2304),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d23d8 + 0x21d23c0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.OrderData$$get_Rewards RVA 0x1e2e3c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3e3c4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5888,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5888,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022206e4 + 0x2220604);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022206e8 + 0x2220618),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022206ec + 0x22206d4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.OrderData$$get_Displayed RVA 0x1e2e418 =====

uint FUN_01e3e418(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4079,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4079,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar1 + 0x40);
}



// ===== FAT.OrderData$$set_Displayed RVA 0x1e2e47c =====

void FUN_01e3e47c(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa14c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa14c,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(char *)(iVar1 + 0x40) = (char)param_2;
  return;
}



// ===== FAT.OrderData$$get_DffyStrategy RVA 0x1e2e4e8 =====

undefined4 FUN_01e3e4e8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa14d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa14d,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x44);
}



// ===== FAT.OrderData$$set_DffyStrategy RVA 0x1e2e54c =====

void FUN_01e3e54c(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x407c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x407c,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0x44) = param_2;
  return;
}



// ===== FAT.OrderData$$GetValue RVA 0x1e2e5b8 =====

undefined4 FUN_01e3e5b8(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x66d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar1 + 0x30);
    iVar1 = func_0x0229f06c(0x66f,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c23250(param_2,uVar4,&stack0xffffffec);
      uVar4 = 0;
      if (iVar1 != 0) {
        func_0x01384bf0();
        uVar4 = uRam00000010;
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x66f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x02186284(iVar1,param_2,uVar4,0);
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x66d,0);
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



// ===== FAT.OrderData$$get_ConfRandomer RVA 0x1e2e630 =====

undefined4 FUN_01e3e630(int param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== FAT.OrderData$$set_ConfRandomer RVA 0x1e2e638 =====

void FUN_01e3e638(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



// ===== FAT.OrderData$$get_FallbackItemId RVA 0x1e2e640 =====

undefined4 FUN_01e3e640(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.OrderData$$set_FallbackItemId RVA 0x1e2e648 =====

void FUN_01e3e648(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== FAT.OrderData$$get_RewardDffyRange RVA 0x1e2e650 =====

void FUN_01e3e650(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.OrderData$$set_RewardDffyRange RVA 0x1e2e664 =====

void FUN_01e3e664(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return;
}



// ===== FAT.OrderData$$get_MagicHourTimeLifeMilli RVA 0x1e2e670 =====

undefined4 FUN_01e3e670(int param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.OrderData$$set_MagicHourTimeLifeMilli RVA 0x1e2e678 =====

void FUN_01e3e678(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



// ===== FAT.OrderData$$get_MagicHourTimeDurationMilli RVA 0x1e2e680 =====

undefined4 FUN_01e3e680(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.OrderData$$set_MagicHourTimeDurationMilli RVA 0x1e2e688 =====

void FUN_01e3e688(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.OrderData$$get_BonusID RVA 0x1e2e690 =====

undefined4 FUN_01e3e690(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.OrderData$$set_BonusID RVA 0x1e2e698 =====

void FUN_01e3e698(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.OrderData$$get_BonusEndTime RVA 0x1e2e6a0 =====

undefined4 FUN_01e3e6a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.OrderData$$set_BonusEndTime RVA 0x1e2e6a8 =====

void FUN_01e3e6a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.OrderData$$get_BonusPhase RVA 0x1e2e6b0 =====

undefined4 FUN_01e3e6b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.OrderData$$set_BonusPhase RVA 0x1e2e6b8 =====

void FUN_01e3e6b8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.OrderData$$get_BonusEventID RVA 0x1e2e6c0 =====

undefined4 FUN_01e3e6c0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.OrderData$$set_BonusEventID RVA 0x1e2e6c8 =====

void FUN_01e3e6c8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.OrderData$$get_needBonusAnim RVA 0x1e2e6d0 =====

undefined1 FUN_01e3e6d0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



// ===== FAT.OrderData$$set_needBonusAnim RVA 0x1e2e6d8 =====

void FUN_01e3e6d8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== FAT.OrderData$$get_HasScrollRequest RVA 0x1e2e6e0 =====

undefined1 FUN_01e3e6e0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x51);
}



// ===== FAT.OrderData$$set_HasScrollRequest RVA 0x1e2e6e8 =====

void FUN_01e3e6e8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x51) = param_2;
  return;
}



// ===== FAT.OrderData$$get_IsNewOrder RVA 0x1e2e6f0 =====

undefined1 FUN_01e3e6f0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x52);
}



// ===== FAT.OrderData$$set_IsNewOrder RVA 0x1e2e6f8 =====

void FUN_01e3e6f8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x52) = param_2;
  return;
}



// ===== FAT.OrderData$$get_ShouldNotChange RVA 0x1e2e700 =====

undefined1 FUN_01e3e700(int param_1)

{
  return *(undefined1 *)(param_1 + 0x53);
}



// ===== FAT.OrderData$$set_ShouldNotChange RVA 0x1e2e708 =====

void FUN_01e3e708(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x53) = param_2;
  return;
}



// ===== FAT.OrderData$$get_RemoteOrderResolver RVA 0x1e2e710 =====

undefined4 FUN_01e3e710(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.OrderData$$set_RemoteOrderResolver RVA 0x1e2e718 =====

void FUN_01e3e718(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== FAT.OrderData$$get_RequireIds RVA 0x1e2e720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3e720(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x406c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x406c,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x20);
}



// ===== FAT.OrderData$$get_RequireNums RVA 0x1e2e784 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3e784(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x406b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x406b,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x24);
}



// ===== FAT.OrderData$$get_RewardIds RVA 0x1e2e7e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3e7e8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4070,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4070,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x28);
}



// ===== FAT.OrderData$$get_RewardNums RVA 0x1e2e84c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3e84c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x4071,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4071,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x2c);
}



// ===== FAT.OrderData$$SyncFromRecord RVA 0x1e2e8b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3e8b0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01e3eea4 + 0x1e3e8c8);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3eea8 + 0x1e3e8dc));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eeac + 0x1e3e8e8));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eeb0 + 0x1e3e8f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eeb4 + 0x1e3e900));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eeb8 + 0x1e3e90c));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eebc + 0x1e3e918));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eec0 + 0x1e3e924));
    func_0x01384978(*(undefined4 *)(_UNK_01e3eec4 + 0x1e3e930));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa14e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa14e,0);
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
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar1 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar8,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar10) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar10,0);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar1 + 0xc);
  iVar13 = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar10) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar10,0);
  }
  piVar14 = *(int **)(_UNK_01e3eec8 + 0x1e3ea0c);
  do {
    piVar2 = (int *)FUN_01e3e720(param_1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e3eed8 + 0x1e3ea30)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01e3ea78;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01e3eed8 + 0x1e3ea30),0);
LAB_01e3ea78:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 <= iVar13) {
      iVar1 = 0;
      puVar3 = *(undefined4 **)(_UNK_01e3eedc + 0x1e3ec60);
      do {
        piVar2 = (int *)FUN_01e3e7e8(param_1);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar10 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_01e3eee8 + 0x1e3ec84)) {
              puVar5 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
              goto LAB_01e3eccc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01e3eee8 + 0x1e3ec84),0);
LAB_01e3eccc:
        iVar10 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        if (iVar10 <= iVar1) {
          return;
        }
        iVar13 = *(int *)(param_1 + 0xc);
        iVar10 = func_0x01384be4(*puVar3);
        func_0x028ba15c(iVar10,0);
        piVar2 = (int *)FUN_01e3e7e8(param_1);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar14) {
              puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
              goto LAB_01e3ed64;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_01e3ed64:
        uVar11 = (*(code *)*puVar5)(piVar2,iVar1,puVar5[1]);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar10 + 8) = uVar11;
        piVar2 = (int *)FUN_01e3e84c(param_1);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar2;
        uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar14) {
              puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
              goto LAB_01e3edf4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_01e3edf4:
        uVar11 = (*(code *)*puVar5)(piVar2,iVar1,puVar5[1]);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar10 + 0xc) = uVar11;
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar13 + 8);
        uVar6 = *(uint *)(iVar13 + 0xc);
        piVar14 = *(int **)(_UNK_01e3eee0 + 0x1e3ee48);
        *(int *)(iVar13 + 0x10) = *(int *)(iVar13 + 0x10) + 1;
        iVar12 = *piVar14;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar13 + 0xc) = uVar6 + 1;
          *(int *)(iVar4 + uVar6 * 4 + 0x10) = iVar10;
        }
        else {
          func_0x0328f170(iVar13,iVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
        iVar1 = iVar1 + 1;
        piVar14 = *(int **)(_UNK_01e3eee4 + 0x1e3ee9c);
      } while( true );
    }
    iVar10 = *(int *)(param_1 + 8);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e3eecc + 0x1e3ea9c));
    func_0x0244f5a0(iVar1,0);
    piVar2 = (int *)FUN_01e3e720(param_1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar14) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
          goto LAB_01e3eb18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_01e3eb18:
    uVar11 = (*(code *)*puVar3)(piVar2,iVar13,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = uVar11;
    piVar2 = (int *)FUN_01e3e784(param_1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar2;
    uVar6 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar14) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
          goto LAB_01e3eba8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar14,0);
LAB_01e3eba8:
    uVar11 = (*(code *)*puVar3)(piVar2,iVar13,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 0x10) = uVar11;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar10 + 8);
    uVar6 = *(uint *)(iVar10 + 0xc);
    piVar14 = *(int **)(_UNK_01e3eed0 + 0x1e3ebfc);
    *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
    iVar12 = *piVar14;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (uVar6 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar10 + 0xc) = uVar6 + 1;
      *(int *)(iVar4 + uVar6 * 4 + 0x10) = iVar1;
    }
    else {
      func_0x0328f170(iVar10,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar13 = iVar13 + 1;
    piVar14 = *(int **)(_UNK_01e3eed4 + 0x1e3ec50);
  } while( true );
}



// ===== FAT.OrderData$$AddRequire RVA 0x1e2eeec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3eeec(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 unaff_r4;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar11;
  undefined4 unaff_r8;
  int iVar12;
  
  iVar1 = func_0x0229f06c(0x4067,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4067,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  pcVar8 = (char *)(_UNK_01e3f3e8 + 0x1e3ef8c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3ec + 0x1e3efa0));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3f0 + 0x1e3efac));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3f4 + 0x1e3efb8));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3f8 + 0x1e3efc4));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3fc + 0x1e3efd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f400 + 0x1e3efdc));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f404 + 0x1e3efe8));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f408 + 0x1e3eff4));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f40c + 0x1e3f000));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4068,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4068,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e3f410 + 0x1e3f068));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01e3f414 + 0x1e3f090);
  iVar9 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x035b0208(uVar3,iVar1,**(undefined4 **)(_UNK_01e3f418 + 0x1e3f0b4),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0328fa8c(iVar9,uVar3,**(undefined4 **)(_UNK_01e3f41c + 0x1e3f0d8));
  iVar10 = *(int *)(param_1 + 8);
  if (iVar9 < 0) {
    iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01e3f428 + 0x1e3f1a0));
    func_0x0244f5a0(iVar9,0);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar9 + 0x10) = param_3;
    *(undefined4 *)(iVar9 + 8) = uVar3;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar10 + 8);
    uVar6 = *(uint *)(iVar10 + 0xc);
    piVar4 = *(int **)(_UNK_01e3f42c + 0x1e3f1f4);
    *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
    iVar12 = *piVar4;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar6 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar10 + 0xc) = uVar6 + 1;
      *(int *)(iVar5 + uVar6 * 4 + 0x10) = iVar9;
    }
    else {
      func_0x0328f170(iVar10,iVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    piVar4 = (int *)FUN_01e3e720(param_1);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    piVar11 = *(int **)(_UNK_01e3f430 + 0x1e3f308);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar9 = *piVar11;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd0);
          goto LAB_01e3f350;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar9,2);
LAB_01e3f350:
    (*(code *)*puVar2)(piVar4,uVar3,puVar2[1]);
    piVar4 = (int *)FUN_01e3e784(param_1);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xd0);
          goto LAB_01e3f3cc;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar9,2);
LAB_01e3f3cc:
                    /* WARNING: Could not recover jumptable at 0x01e3f3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar4,param_3,puVar2[1]);
    return;
  }
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar10,iVar9,**(undefined4 **)(_UNK_01e3f420 + 0x1e3f10c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_3;
  piVar4 = (int *)FUN_01e3e784(param_1);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar4;
  piVar11 = *(int **)(_UNK_01e3f424 + 0x1e3f158);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar10 = *piVar11;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_01e3f22c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar10,0);
LAB_01e3f22c:
  iVar1 = (*(code *)*puVar2)(piVar4,iVar9,puVar2[1]);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar10 = *piVar4;
  iVar5 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar10 + *piVar11 * 8 + 200);
        goto LAB_01e3f2a4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar5,1);
LAB_01e3f2a4:
                    /* WARNING: Could not recover jumptable at 0x01e3f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar4,iVar9,iVar1 + param_3,puVar2[1]);
  return;
}



// ===== FAT.OrderData$$MergeRequire RVA 0x1e2ef6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3ef6c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  pcVar8 = (char *)(_UNK_01e3f3e8 + 0x1e3ef8c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3ec + 0x1e3efa0));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3f0 + 0x1e3efac));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3f4 + 0x1e3efb8));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3f8 + 0x1e3efc4));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f3fc + 0x1e3efd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f400 + 0x1e3efdc));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f404 + 0x1e3efe8));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f408 + 0x1e3eff4));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f40c + 0x1e3f000));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4068,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4068,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e3f410 + 0x1e3f068));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_01e3f414 + 0x1e3f090);
  iVar9 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar3 = func_0x01384be4(*puVar2);
  func_0x035b0208(uVar3,iVar1,**(undefined4 **)(_UNK_01e3f418 + 0x1e3f0b4),0);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0328fa8c(iVar9,uVar3,**(undefined4 **)(_UNK_01e3f41c + 0x1e3f0d8));
  iVar10 = *(int *)(param_1 + 8);
  if (iVar9 < 0) {
    iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01e3f428 + 0x1e3f1a0));
    func_0x0244f5a0(iVar9,0);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar9 + 0x10) = param_3;
    *(undefined4 *)(iVar9 + 8) = uVar3;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar10 + 8);
    uVar6 = *(uint *)(iVar10 + 0xc);
    piVar4 = *(int **)(_UNK_01e3f42c + 0x1e3f1f4);
    *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
    iVar12 = *piVar4;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar6 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar10 + 0xc) = uVar6 + 1;
      *(int *)(iVar5 + uVar6 * 4 + 0x10) = iVar9;
    }
    else {
      func_0x0328f170(iVar10,iVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    piVar4 = (int *)FUN_01e3e720(param_1);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    piVar11 = *(int **)(_UNK_01e3f430 + 0x1e3f308);
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar9 = *piVar11;
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd0);
          goto LAB_01e3f350;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar9,2);
LAB_01e3f350:
    (*(code *)*puVar2)(piVar4,uVar3,puVar2[1]);
    piVar4 = (int *)FUN_01e3e784(param_1);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar4;
    iVar9 = *piVar11;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar9) {
          puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xd0);
          goto LAB_01e3f3cc;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar9,2);
LAB_01e3f3cc:
                    /* WARNING: Could not recover jumptable at 0x01e3f3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar4,param_3,puVar2[1]);
    return;
  }
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328eea8(iVar10,iVar9,**(undefined4 **)(_UNK_01e3f420 + 0x1e3f10c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_3;
  piVar4 = (int *)FUN_01e3e784(param_1);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar4;
  piVar11 = *(int **)(_UNK_01e3f424 + 0x1e3f158);
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar10 = *piVar11;
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_01e3f22c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar10,0);
LAB_01e3f22c:
  iVar1 = (*(code *)*puVar2)(piVar4,iVar9,puVar2[1]);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar10 = *piVar4;
  iVar5 = *piVar11;
  uVar6 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (uVar6 != 0) {
    piVar11 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar11[-1] == iVar5) {
        puVar2 = (undefined4 *)(iVar10 + *piVar11 * 8 + 200);
        goto LAB_01e3f2a4;
      }
      uVar6 = uVar6 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar4,iVar5,1);
LAB_01e3f2a4:
                    /* WARNING: Could not recover jumptable at 0x01e3f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar4,iVar9,iVar1 + param_3,puVar2[1]);
  return;
}



// ===== FAT.OrderData.<>c__DisplayClass109_0$$.ctor RVA 0x1e2f434 =====

void FUN_01e3f434(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.OrderData$$ClearRequires RVA 0x1e2f43c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3f43c(int param_1)

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
  
  pcVar7 = (char *)(_UNK_01e3f5f8 + 0x1e3f450);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3f5fc + 0x1e3f464));
    func_0x01384978(*(undefined4 *)(_UNK_01e3f600 + 0x1e3f470));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa14f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa14f,0);
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar8) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar8,0);
  }
  piVar2 = (int *)FUN_01e3e720(param_1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar10 = *(int **)(_UNK_01e3f604 + 0x1e3f524);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar10;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_01e3f56c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,3);
LAB_01e3f56c:
  (*(code *)*puVar3)(piVar2,puVar3[1]);
  piVar2 = (int *)FUN_01e3e784(param_1);
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
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xd8);
        goto LAB_01e3f5e4;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,3);
LAB_01e3f5e4:
                    /* WARNING: Could not recover jumptable at 0x01e3f5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,puVar3[1]);
  return;
}



// ===== FAT.OrderData$$SortRequires RVA 0x1e2f608 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3f608(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01e3fab8 + 0x1e3f620);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3fabc + 0x1e3f634));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fac0 + 0x1e3f640));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fac4 + 0x1e3f64c));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fac8 + 0x1e3f658));
    func_0x01384978(*(undefined4 *)(_UNK_01e3facc + 0x1e3f664));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fad0 + 0x1e3f670));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fad4 + 0x1e3f67c));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fad8 + 0x1e3f688));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fadc + 0x1e3f694));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0xa150,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_01e3fae0 + 0x1e3f6f8);
    iVar8 = *(int *)(param_1 + 8);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar9 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar9 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar7;
      }
      uVar10 = **(undefined4 **)(iVar1 + 0x5c);
      iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01e3fae4 + 0x1e3f744));
      func_0x03c751dc(iVar9,uVar10,**(undefined4 **)(_UNK_01e3fae8 + 0x1e3f764),0);
      *(int *)(*(int *)(*piVar7 + 0x5c) + 4) = iVar9;
    }
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x03290edc(iVar8,iVar9,**(undefined4 **)(_UNK_01e3faec + 0x1e3f794));
    piVar7 = (int *)FUN_01e3e720(param_1);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    piVar11 = *(int **)(_UNK_01e3faf0 + 0x1e3f7c4);
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
          goto LAB_01e3f80c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,3);
LAB_01e3f80c:
    (*(code *)*puVar2)(piVar7,puVar2[1]);
    piVar7 = (int *)FUN_01e3e784(param_1);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
          goto LAB_01e3f884;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,3);
LAB_01e3f884:
    (*(code *)*puVar2)(piVar7,puVar2[1]);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_01e3faf4 + 0x1e3f8b8));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar2 = *(undefined4 **)(_UNK_01e3faf8 + 0x1e3f8d4);
    while (iVar8 = func_0x0145b12c(&uStack_38,*puVar2), iVar1 = iStack_2c, iVar8 != 0) {
      piVar7 = (int *)FUN_01e3e720(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar1 + 8);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
            goto LAB_01e3f960;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,2);
LAB_01e3f960:
      (*(code *)*puVar3)(piVar7,uVar10,puVar3[1]);
      piVar7 = (int *)FUN_01e3e784(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = *(undefined4 *)(iVar1 + 0x10);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
            goto LAB_01e3f9ec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar7,*piVar11,2);
LAB_01e3f9ec:
      (*(code *)*puVar3)(piVar7,uVar10,puVar3[1]);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e3fafc + 0x1e3fa10));
  }
  else {
    iVar1 = func_0x0229f13c(0xa150,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.OrderData$$InsertReward RVA 0x1e2fb08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3fb08(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  
  pcVar7 = (char *)(_UNK_01e3fd00 + 0x1e3fb28);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3fd04 + 0x1e3fb3c));
    func_0x01384978(*(undefined4 *)(_UNK_01e3fd08 + 0x1e3fb48));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x70b1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x70b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x032900e0(iVar1,param_2,param_3,**(undefined4 **)(_UNK_01e3fd0c + 0x1e3fbc8));
  piVar2 = (int *)FUN_01e3e7e8(param_1);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(param_3 + 8);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar9 = *(int **)(_UNK_01e3fd10 + 0x1e3fc08);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar4 = *piVar9;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
        goto LAB_01e3fc50;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,3);
LAB_01e3fc50:
  (*(code *)*puVar3)(piVar2,param_2,uVar8,puVar3[1]);
  piVar2 = (int *)FUN_01e3e84c(param_1);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(param_3 + 0xc);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  iVar4 = *piVar9;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xd8);
        goto LAB_01e3fce0;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar4,3);
LAB_01e3fce0:
                    /* WARNING: Could not recover jumptable at 0x01e3fcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,param_2,uVar8,puVar3[1]);
  return;
}



// ===== FAT.OrderData$$AddReward RVA 0x1e2fd14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3fd14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  pcVar5 = (char *)(_UNK_01e3ff68 + 0x1e3fd34);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e3ff6c + 0x1e3fd48));
    func_0x01384978(*(undefined4 *)(_UNK_01e3ff70 + 0x1e3fd54));
    func_0x01384978(*(undefined4 *)(_UNK_01e3ff74 + 0x1e3fd60));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x406e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x406e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar9 = *(int *)(param_1 + 0xc);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e3ff78 + 0x1e3fdc8));
  func_0x028ba15c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar9 + 8);
  uVar7 = *(uint *)(iVar9 + 0xc);
  piVar3 = *(int **)(_UNK_01e3ff7c + 0x1e3fe1c);
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  iVar10 = *piVar3;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar9 + 0xc) = uVar7 + 1;
    *(int *)(iVar8 + uVar7 * 4 + 0x10) = iVar1;
  }
  else {
    func_0x0328f170(iVar9,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
  }
  piVar3 = (int *)FUN_01e3e7e8(param_1);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  piVar6 = *(int **)(_UNK_01e3ff80 + 0x1e3fe88);
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar9 = *piVar6;
  if (uVar7 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == iVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01e3fed0;
      }
      uVar7 = uVar7 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar3,iVar9,2);
LAB_01e3fed0:
  (*(code *)*puVar2)(piVar3,param_2,puVar2[1]);
  piVar3 = (int *)FUN_01e3e84c(param_1);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar3;
  iVar9 = *piVar6;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar9) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
        goto LAB_01e3ff4c;
      }
      uVar7 = uVar7 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar3,iVar9,2);
LAB_01e3ff4c:
                    /* WARNING: Could not recover jumptable at 0x01e3ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar3,param_3,puVar2[1]);
  return;
}



// ===== FAT.OrderData$$RemoveRewardByIdx RVA 0x1e2ff84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e3ff84(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
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
  
  pcVar8 = (char *)(_UNK_01e40138 + 0x1e3ff9c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4013c + 0x1e3ffb0));
    func_0x01384978(*(undefined4 *)(_UNK_01e40140 + 0x1e3ffbc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x70b0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x70b0,0);
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
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03290bd4(iVar1,param_2,**(undefined4 **)(_UNK_01e40144 + 0x1e4002c));
  piVar2 = (int *)FUN_01e3e7e8(param_1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar10 = *(int **)(_UNK_01e40148 + 0x1e4005c);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar7 = *piVar10;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe0);
        goto LAB_01e400a4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar7,4);
LAB_01e400a4:
  (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  piVar2 = (int *)FUN_01e3e84c(param_1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  iVar7 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xe0);
        goto LAB_01e40120;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar7,4);
LAB_01e40120:
                    /* WARNING: Could not recover jumptable at 0x01e40134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  return;
}



// ===== FAT.OrderData$$ClearRewards RVA 0x1e3014c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e4014c(int param_1)

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
  
  pcVar7 = (char *)(_UNK_01e40308 + 0x1e40160);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e4030c + 0x1e40174));
    func_0x01384978(*(undefined4 *)(_UNK_01e40310 + 0x1e40180));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa154,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa154,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar8) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar8,0);
  }
  piVar2 = (int *)FUN_01e3e7e8(param_1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar10 = *(int **)(_UNK_01e40314 + 0x1e40234);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar10;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar8) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd8);
        goto LAB_01e4027c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,3);
LAB_01e4027c:
  (*(code *)*puVar3)(piVar2,puVar3[1]);
  piVar2 = (int *)FUN_01e3e84c(param_1);
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
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xd8);
        goto LAB_01e402f4;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar8,3);
LAB_01e402f4:
                    /* WARNING: Could not recover jumptable at 0x01e40304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(piVar2,puVar3[1]);
  return;
}



// ===== FAT.OrderData$$GetState RVA 0x1e30318 =====

/* WARNING: Removing unreachable block (ram,0x01e40584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e40318(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
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
  
  pcVar8 = (char *)(_UNK_01e40660 + 0x1e40330);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40664 + 0x1e40344));
    func_0x01384978(*(undefined4 *)(_UNK_01e40668 + 0x1e40350));
    func_0x01384978(*(undefined4 *)(_UNK_01e4066c + 0x1e4035c));
    func_0x01384978(*(undefined4 *)(_UNK_01e40670 + 0x1e40368));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x16d2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x16d2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_021d2b58 + 0x21d2a64);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d2b5c + 0x21d2a78),param_1,param_2,0);
      *pcVar8 = '\x01';
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
    iVar7 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021d2b60 + 0x21d2b48));
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_01e40674 + 0x1e403e4));
  piVar10 = *(int **)(_UNK_01e40678 + 0x1e403fc);
  piVar11 = *(int **)(_UNK_01e4067c + 0x1e40404);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01e4045c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01e4045c:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      iVar1 = 0;
      break;
    }
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01e404d0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01e404d0:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  } while (*(int *)(iVar1 + 0xc) != param_2);
  if (piVar2 != (int *)0x0) {
    iVar7 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01e40680 + 0x1e40524)) {
          puVar3 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0xc0);
          goto LAB_01e4056c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01e40680 + 0x1e40524),0);
LAB_01e4056c:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.OrderData$$AddTag RVA 0x1e30688 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40688(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
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
  
  iVar2 = func_0x0229f06c(0x2bc8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x2bc8,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar2 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar8,0,0);
    return;
  }
  uVar3 = FUN_01e3e5b8(param_1,0x20);
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = uVar3 | param_2;
  piVar6 = *(int **)(iVar2 + 0x30);
  pcVar9 = (char *)(_UNK_01c2387c + 0x1c23658);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23880 + 0x1c2366c),uVar3,piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01c23884 + 0x1c23678));
    *pcVar9 = '\x01';
  }
  iVar10 = 0;
  iVar2 = func_0x0229f06c(0x671,0);
  if (iVar2 == 0) {
    piVar12 = *(int **)(_UNK_01c23888 + 0x1c236e0);
    piVar13 = *(int **)(_UNK_01c2388c + 0x1c236e8);
    do {
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      iVar4 = *piVar12;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar4) {
            puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01c23740;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar6,iVar4,0);
LAB_01c23740:
      iVar2 = (*(code *)*puVar1)(piVar6,puVar1[1]);
      if (iVar2 <= iVar10) {
        uVar11 = func_0x01c23578(0x20,uVar3);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar6;
        iVar10 = *piVar12;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 == 0) goto LAB_01c23844;
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        goto LAB_01c2382c;
      }
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar13) {
            puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01c237b4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar6,*piVar13,0);
LAB_01c237b4:
      iVar2 = (*(code *)*puVar1)(piVar6,iVar10,puVar1[1]);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = iVar10 + 1;
    } while (*(int *)(iVar2 + 0xc) != 0x20);
    *(uint *)(iVar2 + 0x10) = uVar3;
  }
  else {
    iVar2 = func_0x0229f13c(0x671,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02177130(iVar2,0x20,uVar3,piVar6);
  }
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar12 = piVar12 + 2;
    if (uVar3 == 0) break;
LAB_01c2382c:
    if (piVar12[-1] == iVar10) {
      puVar1 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xd0);
      goto LAB_01c23860;
    }
  }
LAB_01c23844:
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,iVar10,2);
LAB_01c23860:
                    /* WARNING: Could not recover jumptable at 0x01c23878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,uVar11,puVar1[1]);
  return;
}



// ===== FAT.OrderData$$RemoveTag RVA 0x1e30714 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40714(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
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
  
  iVar2 = func_0x0229f06c(0x66c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x66c,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar2 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar8,0,0);
    return;
  }
  uVar3 = FUN_01e3e5b8(param_1,0x20);
  iVar2 = *(int *)(param_1 + 0x58);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = uVar3 & ~param_2;
  piVar6 = *(int **)(iVar2 + 0x30);
  pcVar9 = (char *)(_UNK_01c2387c + 0x1c23658);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23880 + 0x1c2366c),uVar3,piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01c23884 + 0x1c23678));
    *pcVar9 = '\x01';
  }
  iVar10 = 0;
  iVar2 = func_0x0229f06c(0x671,0);
  if (iVar2 == 0) {
    piVar12 = *(int **)(_UNK_01c23888 + 0x1c236e0);
    piVar13 = *(int **)(_UNK_01c2388c + 0x1c236e8);
    do {
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      iVar4 = *piVar12;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar4) {
            puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01c23740;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar6,iVar4,0);
LAB_01c23740:
      iVar2 = (*(code *)*puVar1)(piVar6,puVar1[1]);
      if (iVar2 <= iVar10) {
        uVar11 = func_0x01c23578(0x20,uVar3);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar6;
        iVar10 = *piVar12;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 == 0) goto LAB_01c23844;
        piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        goto LAB_01c2382c;
      }
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar6;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar13) {
            puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_01c237b4;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined4 *)func_0x014002dc(piVar6,*piVar13,0);
LAB_01c237b4:
      iVar2 = (*(code *)*puVar1)(piVar6,iVar10,puVar1[1]);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar10 = iVar10 + 1;
    } while (*(int *)(iVar2 + 0xc) != 0x20);
    *(uint *)(iVar2 + 0x10) = uVar3;
  }
  else {
    iVar2 = func_0x0229f13c(0x671,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02177130(iVar2,0x20,uVar3,piVar6);
  }
  return;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar12 = piVar12 + 2;
    if (uVar3 == 0) break;
LAB_01c2382c:
    if (piVar12[-1] == iVar10) {
      puVar1 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xd0);
      goto LAB_01c23860;
    }
  }
LAB_01c23844:
  puVar1 = (undefined4 *)func_0x014002dc(piVar6,iVar10,2);
LAB_01c23860:
                    /* WARNING: Could not recover jumptable at 0x01c23878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar6,uVar11,puVar1[1]);
  return;
}



// ===== FAT.OrderData$$get_Record RVA 0x1e307a0 =====

undefined4 FUN_01e407a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.OrderData$$set_Record RVA 0x1e307a8 =====

void FUN_01e407a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.OrderData$$.ctor RVA 0x1e307b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e407b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01e4086c + 0x1e407c4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e40870 + 0x1e407d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e40874 + 0x1e407e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e40878 + 0x1e407f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e4087c + 0x1e407fc));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e40880 + 0x1e40810));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e40884 + 0x1e40824));
  puVar2 = *(undefined4 **)(_UNK_01e40888 + 0x1e40838);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e4088c + 0x1e40850));
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.OrderData.<>c$$.cctor RVA 0x1e30890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e40890(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01e408e8 + 0x1e408a0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e408ec + 0x1e408b4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01e408f0 + 0x1e408c8);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.OrderData.<>c$$.ctor RVA 0x1e308f4 =====

void FUN_01e408f4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.OrderData.<>c$$<SortRequires>b__111_0 RVA 0x1e308fc =====

int FUN_01e408fc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 8);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  return iVar1 - *(int *)(param_3 + 8);
}



// ===== FAT.OrderData.<>c__DisplayClass109_0$$<MergeRequire>b__0 RVA 0x1e30930 =====

bool FUN_01e40930(int param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(int *)(param_2 + 8) == *(int *)(param_1 + 8);
}


