/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.Item$$get_parent RVA 0x20fcd28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210cd28(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x249,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x249,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a7a0 + 0x217a6c0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a7a4 + 0x217a6d4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a7a8 + 0x217a790));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== FAT.Merge.Item$$get_coord RVA 0x20fcd7c =====

void FUN_0210cd7c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x247,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0x24);
    uStack_14 = *(undefined4 *)(param_2 + 0x28);
  }
  else {
    iVar1 = func_0x0229f13c(0x247,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218000c(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.Merge.Item$$HasComponent RVA 0x20fe250 =====

undefined4 FUN_0210e250(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x282,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02119a3c(param_1,param_2,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x282,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02181680(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Item$$get_tid RVA 0x20fe2d4 =====

undefined4 FUN_0210e2d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x246,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x246,0);
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
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.Merge.Item$$get_id RVA 0x20fe5f4 =====

undefined4 FUN_0210e5f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x24a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x24a,0);
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
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.Item$$get_isLocked RVA 0x210015c =====

uint FUN_0211015c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x26b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x26b,0);
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
  return (uint)*(byte *)(param_1 + 0x15);
}



// ===== FAT.Merge.Item$$UpdateInactive RVA 0x21062d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021162d4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar3 = (char *)(_UNK_021165e8 + 0x21162f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021165ec + 0x2116304));
    func_0x01384978(*(undefined4 *)(_UNK_021165f0 + 0x2116310));
    func_0x01384978(*(undefined4 *)(_UNK_021165f4 + 0x211631c));
    func_0x01384978(*(undefined4 *)(_UNK_021165f8 + 0x2116328));
    func_0x01384978(*(undefined4 *)(_UNK_021165fc + 0x2116334));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x5e5c,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar5 = *(undefined4 **)(_UNK_02116600 + 0x21163b0);
    iVar2 = func_0x03dcf090(iVar2,*puVar5);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_02116604 + 0x21163dc);
    func_0x03834d00(&uStack_48,iVar2,*puVar6);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    puVar4 = *(undefined4 **)(_UNK_02116608 + 0x21163f4);
    while (iVar2 = func_0x03fa8ea0(&uStack_38,*puVar4), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      iVar2 = (**(code **)(iVar2 + 0xe0))(piVar1,param_2,*(undefined4 *)(iVar2 + 0xe4));
      if (iVar2 < param_2) {
        param_2 = iVar2;
      }
    }
    func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_02116610 + 0x2116444));
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dcf090(iVar2,*puVar5);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_48,iVar2,*puVar6);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    while (iVar2 = func_0x03fa8ea0(&uStack_38,*puVar4), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x021275e4(piVar1,param_2,0);
    }
    func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_02116618 + 0x21164d4));
  }
  else {
    iVar2 = func_0x0229f13c(0x5e5c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Item$$get_config RVA 0x2106990 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02116990(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1651,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1651,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d0f40 + 0x21d0e60);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0f44 + 0x21d0e74),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0f48 + 0x21d0f30));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== FAT.Merge.Item$$get_grid RVA 0x21069e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021169e4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ece,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ece,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02238684 + 0x22385a4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238688 + 0x22385b8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223868c + 0x2238674));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.Merge.Item$$get_isFrozen RVA 0x2106a38 =====

uint FUN_02116a38(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x26a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x26a,0);
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
  return (uint)*(byte *)(param_1 + 0x16);
}



// ===== FAT.Merge.Item$$get_isDead RVA 0x2106a8c =====

uint FUN_02116a8c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xf43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf43,0);
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
  return (uint)*(byte *)(param_1 + 0x14);
}



// ===== FAT.Merge.Item$$get_isActive RVA 0x2106ae0 =====

uint FUN_02116ae0(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x269,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x269,0);
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
  iVar1 = FUN_02116a38(param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_0211015c(param_1), iVar1 == 0)) {
    uVar3 = func_0x02116b64(param_1);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// ===== FAT.Merge.Item$$get_isUnderCloud RVA 0x2106b64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02116b64(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar2 = func_0x0229f06c(0x26c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x26c,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  iVar2 = FUN_0210cd28(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0210cd28(param_1);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_020dd558 + 0x20dd478);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd55c + 0x20dd48c),uVar3,uVar5,0);
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar4 = func_0x0229f06c(0x26d,0);
  if (iVar4 == 0) {
    if (((*(int *)(iVar2 + 0x70) != 0) && (0 < *(int *)(*(int *)(iVar2 + 0x70) + 0xc))) &&
       (uVar1 = FUN_020db85c(iVar2,uVar3,uVar5), -1 < (int)uVar1)) {
      iVar2 = *(int *)(iVar2 + 0x84);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar1) {
        func_0x01384bf4();
      }
      uVar7 = 0;
      if (*(char *)(iVar2 + uVar1 + 0x10) != '\0') {
        uVar7 = 1;
      }
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x26d,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar7 = func_0x0217a5ac(iVar4,iVar2,uVar3,uVar5);
  }
  return uVar7;
}



// ===== FAT.Merge.Item$$get_isMovable RVA 0x2106c00 =====

uint FUN_02116c00(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7859,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02116ae0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 0;
    iVar1 = func_0x0229f06c(0x7858,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x30) != 0) {
        uVar2 = (uint)(*(char *)(*(int *)(param_1 + 0x30) + 0x41) == '\0');
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x7858,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7859,0);
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
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_30,0,0);
  return uVar2;
}



// ===== FAT.Merge.Item$$get_isDraggable RVA 0x2106c70 =====

uint FUN_02116c70(int param_1)

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
  iVar1 = func_0x0229f06c(0x7858,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar3 = (uint)(*(char *)(*(int *)(param_1 + 0x30) + 0x41) == '\0');
    }
    return uVar3;
  }
  iVar1 = func_0x0229f13c(0x7858,0);
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



// ===== FAT.Merge.Item$$get_isReachBoardLevel RVA 0x2106cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02116cdc(int param_1)

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
  
  pcVar7 = (char *)(_UNK_02116e3c + 0x2116cf0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02116e40 + 0x2116d04));
    func_0x01384978(*(undefined4 *)(_UNK_02116e44 + 0x2116d10));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1609,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1609,0);
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
    uVar9 = func_0x0245496c(&uStack_30,0,0);
    return uVar9;
  }
  uVar9 = 1;
  if (*(int *)(param_1 + 0x18) == 4) {
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02116e48 + 0x2116d78));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 0;
    iVar1 = func_0x01ddc484(iVar1,0);
    if (iVar1 == 0) {
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02116e4c + 0x2116dcc)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x1b0);
            goto LAB_02116e14;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02116e4c + 0x2116dcc),0x1e);
LAB_02116e14:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar9 = 0;
      if (*(int *)(param_1 + 0x1c) <= iVar1) {
        uVar9 = 1;
      }
    }
  }
  return uVar9;
}



// ===== FAT.Merge.Item$$get_unLockLevel RVA 0x2106e50 =====

undefined4 FUN_02116e50(int param_1)

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
  iVar1 = func_0x0229f06c(0x160f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160f,0);
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
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x18) == 4) {
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar3;
}



// ===== FAT.Merge.Item$$get_stateConfParam RVA 0x2106eb4 =====

undefined4 FUN_02116eb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x160d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160d,0);
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
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.Merge.Item$$get_world RVA 0x2106f08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02116f08(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x14a0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x14a0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a0d4 + 0x2179ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a0d8 + 0x217a008),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a0dc + 0x217a0c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.Merge.Item$$get_timeScale RVA 0x2106f5c =====

undefined4 FUN_02116f5c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa09e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa09e,0);
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
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.Item$$.ctor RVA 0x2106fb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02116fb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_021170c8 + 0x2116fcc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021170cc + 0x2116fe0));
    func_0x01384978(*(undefined4 *)(_UNK_021170d0 + 0x2116fec));
    func_0x01384978(*(undefined4 *)(_UNK_021170d4 + 0x2116ff8));
    func_0x01384978(*(undefined4 *)(_UNK_021170d8 + 0x2117004));
    func_0x01384978(*(undefined4 *)(_UNK_021170dc + 0x2117010));
    func_0x01384978(*(undefined4 *)(_UNK_021170e0 + 0x211701c));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_021170e4 + 0x2117034);
  *(undefined4 *)(param_1 + 0x10) = 1;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x03dce810(uVar2,**(undefined4 **)(_UNK_021170e8 + 0x211704c));
  puVar1 = *(undefined4 **)(_UNK_021170ec + 0x2117060);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_021170f0 + 0x2117078));
  puVar1 = *(undefined4 **)(_UNK_021170f4 + 0x211708c);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = func_0x01384be4(*puVar1);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_021170f8 + 0x21170a4));
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  return;
}



// ===== FAT.Merge.Item$$BeginDispose RVA 0x21070fc =====

void FUN_021170fc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x25e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x25e,0);
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
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



// ===== FAT.Merge.Item$$EndDispose RVA 0x2107154 =====

/* WARNING: Possible PIC construction at 0x02117290: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02117294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02117154(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *unaff_r4;
  int unaff_r5;
  undefined4 *puVar4;
  undefined4 unaff_r6;
  undefined4 uVar5;
  undefined4 unaff_r7;
  int unaff_r8;
  int *piVar6;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x5e6e,0);
  if (iVar1 == 0) {
    unaff_r4 = (char *)(_UNK_02117400 + 0x21171c4);
    if (*unaff_r4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02117404 + 0x21171d8));
      func_0x01384978(*(undefined4 *)(_UNK_02117408 + 0x21171e4));
      func_0x01384978(*(undefined4 *)(_UNK_0211740c + 0x21171f0));
      func_0x01384978(*(undefined4 *)(_UNK_02117410 + 0x21171fc));
      func_0x01384978(*(undefined4 *)(_UNK_02117414 + 0x2117208));
      func_0x01384978(*(undefined4 *)(_UNK_02117418 + 0x2117214));
      func_0x01384978(*(undefined4 *)(_UNK_0211741c + 0x2117220));
      func_0x01384978(*(undefined4 *)(_UNK_02117420 + 0x211722c));
      *unaff_r4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_24 = 0;
    iStack_28 = 0;
    iVar1 = func_0x0229f06c(0x276,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf754(&uStack_38,iVar1,**(undefined4 **)(_UNK_02117424 + 0x21172b8));
      puVar4 = *(undefined4 **)(_UNK_02117428 + 0x21172d0);
      piVar6 = *(int **)(_UNK_0211742c + 0x21172d8);
      while (iVar2 = func_0x03fa87cc(&uStack_38,*puVar4), iVar1 = iStack_28, uVar5 = uStack_2c,
            iVar2 != 0) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        func_0x021274dc(iVar1,0,0);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02128fd8(uVar5,iVar1,0);
      }
      func_0x03fa890c(&uStack_38,**(undefined4 **)(_UNK_02117430 + 0x211733c));
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf444(iVar1,**(undefined4 **)(_UNK_02117438 + 0x2117360));
      func_0x0211acd0(param_1);
      return;
    }
    iVar1 = func_0x0229f13c(0x276,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2117294;
    unaff_r5 = iVar1;
    unaff_r8 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar1 = func_0x0229f13c(0x5e6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(char **)((int)register0x00000054 + -0x18) = unaff_r4;
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar2,uVar5,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.Merge.Item$$_ClearAllComponent RVA 0x21071ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021171ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02117400 + 0x21171c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02117404 + 0x21171d8));
    func_0x01384978(*(undefined4 *)(_UNK_02117408 + 0x21171e4));
    func_0x01384978(*(undefined4 *)(_UNK_0211740c + 0x21171f0));
    func_0x01384978(*(undefined4 *)(_UNK_02117410 + 0x21171fc));
    func_0x01384978(*(undefined4 *)(_UNK_02117414 + 0x2117208));
    func_0x01384978(*(undefined4 *)(_UNK_02117418 + 0x2117214));
    func_0x01384978(*(undefined4 *)(_UNK_0211741c + 0x2117220));
    func_0x01384978(*(undefined4 *)(_UNK_02117420 + 0x211722c));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_24 = 0;
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x276,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_38,iVar2,**(undefined4 **)(_UNK_02117424 + 0x21172b8));
    puVar5 = *(undefined4 **)(_UNK_02117428 + 0x21172d0);
    piVar6 = *(int **)(_UNK_0211742c + 0x21172d8);
    while (iVar3 = func_0x03fa87cc(&uStack_38,*puVar5), iVar2 = iStack_28, uVar1 = uStack_2c,
          iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x021274dc(iVar2,0,0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02128fd8(uVar1,iVar2,0);
    }
    func_0x03fa890c(&uStack_38,**(undefined4 **)(_UNK_02117430 + 0x211733c));
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf444(iVar2,**(undefined4 **)(_UNK_02117438 + 0x2117360));
    func_0x0211acd0(param_1);
  }
  else {
    iVar2 = func_0x0229f13c(0x276,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Merge.Item$$SetParent RVA 0x2107440 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02117440(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02117650 + 0x2117460);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02117654 + 0x2117474));
    func_0x01384978(*(undefined4 *)(_UNK_02117658 + 0x2117480));
    func_0x01384978(*(undefined4 *)(_UNK_0211765c + 0x211748c));
    func_0x01384978(*(undefined4 *)(_UNK_02117660 + 0x2117498));
    func_0x01384978(*(undefined4 *)(_UNK_02117664 + 0x21174a4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_1c = 0;
  piStack_20 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x267,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (param_2 == 0) {
      param_3 = 0;
    }
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_30,iVar2,**(undefined4 **)(_UNK_02117668 + 0x211754c));
    puVar4 = *(undefined4 **)(_UNK_0211766c + 0x2117564);
    while (iVar2 = func_0x03fa87cc(&uStack_30,*puVar4), piVar1 = piStack_20, iVar2 != 0) {
      if (piStack_20 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x110))(piVar1,*(undefined4 *)(iVar2 + 0x114));
    }
    func_0x03fa890c(&uStack_30,**(undefined4 **)(_UNK_02117670 + 0x21175a8));
    iVar2 = FUN_02116ae0(param_1);
    if (iVar2 != 0) {
      func_0x0211767c(param_1);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x267,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Item$$_RefreshEffectList RVA 0x210767c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211767c(int param_1)

{
  int iVar1;
  int iVar2;
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
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_021177b8 + 0x2117690);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021177bc + 0x21176a4));
    func_0x01384978(*(undefined4 *)(_UNK_021177c0 + 0x21176b0));
    func_0x01384978(*(undefined4 *)(_UNK_021177c4 + 0x21176bc));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x26e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x26e,0);
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
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
  }
  iVar2 = FUN_0210cd28(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0210cd28(param_1);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_021177c8 + 0x2117770));
    func_0x03ccb96c(iVar5,param_1,**(undefined4 **)(_UNK_021177cc + 0x211778c),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_020ec0f8 + 0x20ebf08);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020ec0fc + 0x20ebf1c),iVar5,0);
      func_0x01384978(*(undefined4 *)(_UNK_020ec100 + 0x20ebf28));
      func_0x01384978(*(undefined4 *)(_UNK_020ec104 + 0x20ebf34));
      func_0x01384978(*(undefined4 *)(_UNK_020ec108 + 0x20ebf40));
      *pcVar4 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x271,0);
    if (iVar1 == 0) {
      iVar2 = *(int *)(iVar2 + 0x78);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_020ec10c + 0x20ebfc0));
      puVar7 = *(undefined4 **)(_UNK_020ec110 + 0x20ebfd4);
      while (iVar1 = func_0x03f5f428(&uStack_28,*puVar7), iVar2 = iStack_1c, iVar1 != 0) {
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar1 = FUN_0210f434(iVar2,0);
        if (iVar1 == 0) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0210f488(iVar2,0);
          if (iVar5 != 0 && iVar1 == 0) {
            (**(code **)(iVar5 + 0xc))
                      (*(undefined4 *)(iVar5 + 0x20),iVar2,*(undefined4 *)(iVar5 + 0x14));
          }
        }
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_020ec118 + 0x20ec054));
    }
    else {
      iVar1 = func_0x0229f13c(0x271,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02174108(iVar1,iVar2,iVar5,0);
    }
    return;
  }
  return;
}



// ===== FAT.Merge.Item$$SetState RVA 0x21077d0 =====

/* WARNING: Possible PIC construction at 0x02117744: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021177d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
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
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_021178d0 + 0x21177f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021178d4 + 0x2117804));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x29f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x29f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02181e64(iVar2,param_1,param_2,param_3);
    return;
  }
  *(char *)(param_1 + 0x16) = (char)param_3;
  *(char *)(param_1 + 0x15) = (char)param_2;
  iVar2 = FUN_02116ae0(param_1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar4 < 1) {
      return;
    }
    uVar5 = *(undefined4 *)(iVar2 + 8);
  }
  else {
    pcVar7 = (char *)(_UNK_021177b8 + 0x2117690);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021177bc + 0x21176a4));
      func_0x01384978(*(undefined4 *)(_UNK_021177c0 + 0x21176b0));
      func_0x01384978(*(undefined4 *)(_UNK_021177c4 + 0x21176bc));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x26e,0);
    if (iVar2 != 0) {
      iVar2 = func_0x0229f13c(0x26e,0);
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
      return;
    }
    iVar2 = *(int *)(param_1 + 0x54);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (iVar4 < 1) {
      iVar2 = FUN_0210cd28(param_1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_0210cd28(param_1);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_021177c8 + 0x2117770));
      func_0x03ccb96c(iVar4,param_1,**(undefined4 **)(_UNK_021177cc + 0x211778c),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_020ec0f8 + 0x20ebf08);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_020ec0fc + 0x20ebf1c),iVar4,0);
        func_0x01384978(*(undefined4 *)(_UNK_020ec100 + 0x20ebf28));
        func_0x01384978(*(undefined4 *)(_UNK_020ec104 + 0x20ebf34));
        func_0x01384978(*(undefined4 *)(_UNK_020ec108 + 0x20ebf40));
        *pcVar7 = '\x01';
      }
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0x271,0);
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 0x78);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_020ec10c + 0x20ebfc0));
        puVar6 = *(undefined4 **)(_UNK_020ec110 + 0x20ebfd4);
        while (iVar1 = func_0x03f5f428(&uStack_28,*puVar6), iVar2 = iStack_1c, iVar1 != 0) {
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0210f434(iVar2,0);
          if (iVar1 == 0) {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0210f488(iVar2,0);
            if (iVar4 != 0 && iVar1 == 0) {
              (**(code **)(iVar4 + 0xc))
                        (*(undefined4 *)(iVar4 + 0x20),iVar2,*(undefined4 *)(iVar4 + 0x14));
            }
          }
        }
        func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_020ec118 + 0x20ec054));
      }
      else {
        iVar1 = func_0x0229f13c(0x271,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar1,iVar2,iVar4,0);
      }
      return;
    }
    uVar5 = *(undefined4 *)(iVar2 + 8);
  }
  (*(code *)&SUB_0484e5ec)(uVar5,0,iVar4,0);
  return;
}



// ===== FAT.Merge.Item$$SetStateConfParam RVA 0x21078d8 =====

void FUN_021178d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5b7c,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x5b7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Item$$GetStateConfParam RVA 0x210794c =====

void FUN_0211794c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb33c,0);
  if (iVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    *param_3 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    iVar1 = func_0x0229f13c(0xb33c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a30a4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Item$$_SerializeStateConfParam RVA 0x21079c8 =====

uint FUN_021179c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5c7b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c7b,0);
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
  return *(uint *)(param_1 + 0x1c) | *(int *)(param_1 + 0x18) << 0x10;
}



// ===== FAT.Merge.Item$$_DeserializeStateConfParam RVA 0x2107a24 =====

void FUN_02117a24(int param_1,uint param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c5a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c5a,0);
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
  *(int *)(param_1 + 0x18) = (int)param_2 >> 0x10;
  *(uint *)(param_1 + 0x1c) = param_2 & 0xffff;
  return;
}



// ===== FAT.Merge.Item$$_StateToSerializedState RVA 0x2107a8c =====

undefined4 FUN_02117a8c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c7a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c7a,0);
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
    func_0x01485228(&uStack_38,param_1,0);
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
    uVar4 = func_0x0245498c(&uStack_38,0,0);
    return uVar4;
  }
  if (param_2 != 0) {
    uVar4 = 1;
    if (param_1 != 0) {
      uVar4 = 2;
    }
    return uVar4;
  }
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = 3;
  }
  return uVar4;
}



// ===== FAT.Merge.Item$$_SerailizedStateToState RVA 0x2107b08 =====

void FUN_02117b08(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = func_0x0229f06c(0x5c59,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5c59,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x022357c8(iVar2,param_1,param_2,param_3,0);
    return;
  }
  switch(param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    *param_2 = 0;
    uVar1 = 1;
    goto LAB_02117bc0;
  default:
    uVar1 = 1;
    break;
  case 3:
    *param_2 = 1;
    uVar1 = 0;
    goto LAB_02117bc0;
  }
  *param_2 = uVar1;
LAB_02117bc0:
  *param_3 = uVar1;
  return;
}



// ===== FAT.Merge.Item$$OnStart RVA 0x2107bcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02117bcc(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  pcVar3 = (char *)(_UNK_02117db4 + 0x2117be4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02117db8 + 0x2117bf8));
    func_0x01384978(*(undefined4 *)(_UNK_02117dbc + 0x2117c04));
    func_0x01384978(*(undefined4 *)(_UNK_02117dc0 + 0x2117c10));
    func_0x01384978(*(undefined4 *)(_UNK_02117dc4 + 0x2117c1c));
    func_0x01384978(*(undefined4 *)(_UNK_02117dc8 + 0x2117c28));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_14 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar2 = func_0x0229f06c(0x293,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03dcf090(iVar2,**(undefined4 **)(_UNK_02117dcc + 0x2117c9c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_20,iVar2,**(undefined4 **)(_UNK_02117dd0 + 0x2117cc8));
    puVar4 = *(undefined4 **)(_UNK_02117dd4 + 0x2117cdc);
    while (iVar2 = func_0x03fa8ea0(&uStack_20,*puVar4), piVar1 = piStack_14, iVar2 != 0) {
      if (piStack_14 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0xf8))(piVar1,*(undefined4 *)(iVar2 + 0xfc));
    }
    func_0x03fa8e9c(&uStack_20,**(undefined4 **)(_UNK_02117dd8 + 0x2117d20));
  }
  else {
    iVar2 = func_0x0229f13c(0x293,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Merge.Item$$Serialize RVA 0x2107de4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02117de4(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  
  pcVar6 = (char *)(_UNK_02118198 + 0x2117e00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211819c + 0x2117e14));
    func_0x01384978(*(undefined4 *)(_UNK_021181a0 + 0x2117e20));
    func_0x01384978(*(undefined4 *)(_UNK_021181a4 + 0x2117e2c));
    func_0x01384978(*(undefined4 *)(_UNK_021181a8 + 0x2117e38));
    func_0x01384978(*(undefined4 *)(_UNK_021181ac + 0x2117e44));
    func_0x01384978(*(undefined4 *)(_UNK_021181b0 + 0x2117e50));
    func_0x01384978(*(undefined4 *)(_UNK_021181b4 + 0x2117e5c));
    func_0x01384978(*(undefined4 *)(_UNK_021181b8 + 0x2117e68));
    func_0x01384978(*(undefined4 *)(_UNK_021181bc + 0x2117e74));
    func_0x01384978(*(undefined4 *)(_UNK_021181c0 + 0x2117e80));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = iStack_2c;
  iVar3 = func_0x0229f06c(0x5c79,0);
  if (iVar3 == 0) {
    uVar7 = *(undefined4 *)(param_1 + 8);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = *(undefined1 *)(param_1 + 0x16);
    uVar2 = *(undefined1 *)(param_1 + 0x15);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_2 + 0xc) = uVar7;
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    uVar7 = FUN_02117a8c(uVar2,uVar1);
    *(undefined4 *)(param_2 + 0x14) = uVar7;
    uVar7 = FUN_021179c8(param_1);
    iVar3 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x48) = uVar7;
    if (iVar3 == 0) {
      uVar7 = 0xffffffff;
      *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x24);
    }
    *(undefined4 *)(param_2 + 0x20) = 0;
    iVar3 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_2 + 0x1c) = uVar7;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dcef70(iVar3,**(undefined4 **)(_UNK_021181c4 + 0x2117f68));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02452e14(&uStack_48,iVar3,**(undefined4 **)(_UNK_021181c8 + 0x2117f94));
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    puVar8 = *(undefined4 **)(_UNK_021181cc + 0x2117fb4);
    while (iVar3 = func_0x03fa8cd8(&uStack_28,*puVar8), iVar3 != 0) {
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1 << (uStack_1c & 0x1f);
    }
    func_0x03fa8cd4(&uStack_28,**(undefined4 **)(_UNK_021181d0 + 0x2117fe8));
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dcf090(iVar3,**(undefined4 **)(_UNK_021181d8 + 0x211800c));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_38,iVar3,**(undefined4 **)(_UNK_021181dc + 0x2118038));
    puVar8 = *(undefined4 **)(_UNK_021181e0 + 0x211804c);
    while (iVar4 = func_0x03fa8ea0(&uStack_38,*puVar8), iVar3 = iStack_2c, iVar4 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      func_0x02127664(iVar3,param_2,0);
    }
    func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_021181e8 + 0x211808c));
  }
  else {
    iVar3 = func_0x0229f13c(0x5c79,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Item$$DeserializeStateOnly RVA 0x21081f4 =====

void FUN_021181f4(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c58,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c58,0);
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
  FUN_02117b08(*(undefined4 *)(param_2 + 0x14),param_1 + 0x15,param_1 + 0x16);
  FUN_02117a24(param_1,*(undefined4 *)(param_2 + 0x48));
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  return;
}



// ===== FAT.Merge.Item$$Deserialize RVA 0x210828c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211828c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  bool bVar12;
  uint auStack_3c [3];
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar10 = (char *)(_UNK_02118768 + 0x21182a8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211876c + 0x21182bc));
    func_0x01384978(*(undefined4 *)(_UNK_02118770 + 0x21182c8));
    func_0x01384978(*(undefined4 *)(_UNK_02118774 + 0x21182d4));
    func_0x01384978(*(undefined4 *)(_UNK_02118778 + 0x21182e0));
    func_0x01384978(*(undefined4 *)(_UNK_0211877c + 0x21182ec));
    func_0x01384978(*(undefined4 *)(_UNK_02118780 + 0x21182f8));
    func_0x01384978(*(undefined4 *)(_UNK_02118784 + 0x2118304));
    func_0x01384978(*(undefined4 *)(_UNK_02118788 + 0x2118310));
    func_0x01384978(*(undefined4 *)(_UNK_0211878c + 0x211831c));
    func_0x01384978(*(undefined4 *)(_UNK_02118790 + 0x2118328));
    func_0x01384978(*(undefined4 *)(_UNK_02118794 + 0x2118334));
    *pcVar10 = '\x01';
  }
  auStack_3c[2] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  auStack_3c[1] = 0;
  iVar1 = func_0x0229f06c(0x5c60,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar5;
    piVar2 = (int *)func_0x021566f4(0);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    piVar11 = *(int **)(_UNK_02118798 + 0x21183dc);
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar6 = *piVar11;
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar6) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x108);
          goto LAB_02118424;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar6,9);
LAB_02118424:
    uVar5 = (*(code *)*puVar3)(piVar2,uVar5,puVar3[1]);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    FUN_02117b08(*(undefined4 *)(param_2 + 0x14),param_1 + 0x15,param_1 + 0x16);
    FUN_02117a24(param_1,*(undefined4 *)(param_2 + 0x48));
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar7 = *(uint *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    piVar2 = (int *)func_0x021566f4(0);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    iVar6 = *piVar11;
    uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == iVar6) {
          puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0x110);
          goto LAB_021184ec;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar6,10);
LAB_021184ec:
    uVar5 = (*(code *)*puVar3)(piVar2,uVar5,puVar3[1]);
    if (uVar7 != 0) {
      piVar2 = *(int **)(_UNK_0211879c + 0x2118524);
      uVar8 = 0;
      do {
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x02128b80(param_1,uVar5,uVar8,0);
          if (iVar1 == 0) {
            piVar11 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_021187a0 + 0x2118568),1);
            auStack_3c[0] = uVar8;
            iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_021187a4 + 0x2118580),auStack_3c);
            if (piVar11 == (int *)0x0) {
              func_0x01384bf0();
            }
            if ((iVar1 != 0) &&
               (iVar6 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar11 + 0x20)), iVar6 == 0)) {
              uVar4 = func_0x01384c10();
              func_0x01384aa0(uVar4,0);
            }
            if (piVar11[3] == 0) {
              func_0x01384bf4();
            }
            piVar11[4] = iVar1;
            if (*(int *)(**(int **)(_UNK_021187a8 + 0x21185e4) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c23bc(**(undefined4 **)(_UNK_021187ac + 0x2118608),piVar11,0);
          }
        }
        if (uVar7 >> 1 == 0) break;
        bVar12 = uVar8 < 0x19;
        uVar7 = uVar7 >> 1;
        uVar8 = uVar8 + 1;
      } while (bVar12);
    }
    func_0x021187c8(param_1,uVar5);
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf090(iVar1,**(undefined4 **)(_UNK_021187b0 + 0x2118654));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(auStack_3c + 1,iVar1,**(undefined4 **)(_UNK_021187b4 + 0x2118680));
    puVar3 = *(undefined4 **)(_UNK_021187b8 + 0x2118694);
    while (iVar6 = func_0x03fa8ea0(auStack_3c + 1,*puVar3), iVar1 = iStack_2c, iVar6 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      func_0x021276d4(iVar1,param_2,0);
    }
    func_0x03fa8e9c(auStack_3c + 1,**(undefined4 **)(_UNK_021187bc + 0x21186d4));
  }
  else {
    iVar1 = func_0x0229f13c(0x5c60,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Item$$_FillNeverDestroyNormalItemComponent RVA 0x21087c8 =====

/* WARNING: Possible PIC construction at 0x021188a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021188d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021188f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02118920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02118948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02118970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02118998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021189c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x021189e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02118a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02118a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02118a14) */
/* WARNING: Removing unreachable block (ram,0x021189ec) */
/* WARNING: Removing unreachable block (ram,0x021189c4) */
/* WARNING: Removing unreachable block (ram,0x0211899c) */
/* WARNING: Removing unreachable block (ram,0x02118974) */
/* WARNING: Removing unreachable block (ram,0x0211894c) */
/* WARNING: Removing unreachable block (ram,0x02118924) */
/* WARNING: Removing unreachable block (ram,0x021188fc) */
/* WARNING: Removing unreachable block (ram,0x021188d4) */
/* WARNING: Removing unreachable block (ram,0x02118a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021187c8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  
  pcVar4 = (char *)(_UNK_02118a90 + 0x21187e0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02118a94 + 0x21187f4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x281,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x281,0);
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
    iStack_2c = iStack_44;
    iStack_28 = uStack_40;
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
  iVar1 = FUN_0210e250(param_1,6,0);
  if (iVar1 != 0) {
    return;
  }
  uVar5 = FUN_0210e2d4(param_1);
  iVar1 = func_0x02167970(uVar5,0);
  if (iVar1 < 1) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(param_2 + 0x2c) == 0) || (*(int *)(*(int *)(param_2 + 0x2c) + 0x28) != 8)) {
      if (*(int *)(**(int **)(_UNK_02118a9c + 0x21188b0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar5 = 3;
      goto SUB_02128b80;
    }
  }
  if (*(int *)(**(int **)(_UNK_02118a98 + 0x2118880) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = 0;
SUB_02128b80:
  pcVar6 = (char *)(_UNK_02128ccc + 0x2128ba0);
  iStack_28 = param_2;
  iStack_24 = param_1;
  pcStack_20 = pcVar4;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02128cd0 + 0x2128bb4),param_2,uVar5,0);
    func_0x01384978(*(undefined4 *)(_UNK_02128cd4 + 0x2128bc0));
    *pcVar6 = '\x01';
  }
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x28c,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_02128cd8 + 0x2128c2c);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar7;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dd1078(iVar1,uVar5,&iStack_2c,**(undefined4 **)(_UNK_02128cdc + 0x2128c68));
    if (iStack_2c != 0 && iVar1 != 0) {
      iVar3 = (**(code **)(iStack_2c + 0xc))
                        (*(undefined4 *)(iStack_2c + 0x20),param_2,*(undefined4 *)(iStack_2c + 0x14)
                        );
      iVar1 = 0;
      if (iVar3 == 0) {
        return;
      }
    }
    if (param_1 == 0) {
      func_0x01384bf0(iVar1);
    }
    func_0x0211aa64(param_1,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x28c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    func_0x02181b50(iVar1,param_1,param_2,uVar5);
  }
  return;
}



// ===== FAT.Merge.Item$$SetEffectDirty RVA 0x2108aa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02118aa0(int param_1)

{
  int iVar1;
  int iVar2;
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
  int iStack_1c;
  
  iVar2 = func_0x0229f06c(0x5e54,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02116ae0(param_1);
    if (iVar2 == 0) {
      return;
    }
    pcVar4 = (char *)(_UNK_021177b8 + 0x2117690);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021177bc + 0x21176a4));
      func_0x01384978(*(undefined4 *)(_UNK_021177c0 + 0x21176b0));
      func_0x01384978(*(undefined4 *)(_UNK_021177c4 + 0x21176bc));
      *pcVar4 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x26e,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar5) {
        func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
      }
      iVar2 = FUN_0210cd28(param_1);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_0210cd28(param_1);
      iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_021177c8 + 0x2117770));
      func_0x03ccb96c(iVar5,param_1,**(undefined4 **)(_UNK_021177cc + 0x211778c),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar4 = (char *)(_UNK_020ec0f8 + 0x20ebf08);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_020ec0fc + 0x20ebf1c),iVar5,0);
        func_0x01384978(*(undefined4 *)(_UNK_020ec100 + 0x20ebf28));
        func_0x01384978(*(undefined4 *)(_UNK_020ec104 + 0x20ebf34));
        func_0x01384978(*(undefined4 *)(_UNK_020ec108 + 0x20ebf40));
        *pcVar4 = '\x01';
      }
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_28 = 0;
      iVar1 = func_0x0229f06c(0x271,0);
      if (iVar1 == 0) {
        iVar2 = *(int *)(iVar2 + 0x78);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_020ec10c + 0x20ebfc0));
        puVar7 = *(undefined4 **)(_UNK_020ec110 + 0x20ebfd4);
        while (iVar1 = func_0x03f5f428(&uStack_28,*puVar7), iVar2 = iStack_1c, iVar1 != 0) {
          if (iStack_1c == 0) {
            func_0x01384bf0();
          }
          iVar1 = FUN_0210f434(iVar2,0);
          if (iVar1 == 0) {
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar1 = FUN_0210f488(iVar2,0);
            if (iVar5 != 0 && iVar1 == 0) {
              (**(code **)(iVar5 + 0xc))
                        (*(undefined4 *)(iVar5 + 0x20),iVar2,*(undefined4 *)(iVar5 + 0x14));
            }
          }
        }
        func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_020ec118 + 0x20ec054));
      }
      else {
        iVar1 = func_0x0229f13c(0x271,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar1,iVar2,iVar5,0);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x26e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5e54,0);
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



// ===== FAT.Merge.Item$$ToString RVA 0x2108b08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02118b08(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_02118bf8 + 0x2118b20);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02118bfc + 0x2118b34));
    func_0x01384978(*(undefined4 *)(_UNK_02118c00 + 0x2118b40));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb33d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb33d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  uStack_14 = FUN_0210e2d4(param_1);
  puVar5 = *(undefined4 **)(_UNK_02118c04 + 0x2118ba8);
  uVar6 = func_0x01384abc(*puVar5,&uStack_14);
  uStack_18 = FUN_0210e5f4(param_1);
  uVar2 = func_0x01384abc(*puVar5,&uStack_18);
  func_0x0244f690(**(undefined4 **)(_UNK_02118c08 + 0x2118bec),uVar6,uVar2,0);
  return;
}



// ===== FAT.Merge.Item$$ProcessPostMerge RVA 0x2108c0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02118c0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02118e08 + 0x2118c2c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02118e0c + 0x2118c40));
    func_0x01384978(*(undefined4 *)(_UNK_02118e10 + 0x2118c4c));
    func_0x01384978(*(undefined4 *)(_UNK_02118e14 + 0x2118c58));
    func_0x01384978(*(undefined4 *)(_UNK_02118e18 + 0x2118c64));
    func_0x01384978(*(undefined4 *)(_UNK_02118e1c + 0x2118c70));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x9ea3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf090(iVar1,**(undefined4 **)(_UNK_02118e20 + 0x2118cf0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_28,iVar1,**(undefined4 **)(_UNK_02118e24 + 0x2118d1c));
    puVar4 = *(undefined4 **)(_UNK_02118e28 + 0x2118d30);
    while (iVar2 = func_0x03fa8ea0(&uStack_28,*puVar4), iVar1 = iStack_1c, iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      func_0x02127798(iVar1,param_2,param_3,0);
    }
    func_0x03fa8e9c(&uStack_28,**(undefined4 **)(_UNK_02118e2c + 0x2118d74));
  }
  else {
    iVar1 = func_0x0229f13c(0x9ea3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Item$$ProcessPostSpawn RVA 0x2108e38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02118e38(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02119024 + 0x2118e54);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119028 + 0x2118e68));
    func_0x01384978(*(undefined4 *)(_UNK_0211902c + 0x2118e74));
    func_0x01384978(*(undefined4 *)(_UNK_02119030 + 0x2118e80));
    func_0x01384978(*(undefined4 *)(_UNK_02119034 + 0x2118e8c));
    func_0x01384978(*(undefined4 *)(_UNK_02119038 + 0x2118e98));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x2a2,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf090(iVar1,**(undefined4 **)(_UNK_0211903c + 0x2118f10));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_28,iVar1,**(undefined4 **)(_UNK_02119040 + 0x2118f3c));
    puVar4 = *(undefined4 **)(_UNK_02119044 + 0x2118f50);
    while (iVar2 = func_0x03fa8ea0(&uStack_28,*puVar4), iVar1 = iStack_1c, iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      func_0x02127824(iVar1,param_2,0);
    }
    func_0x03fa8e9c(&uStack_28,**(undefined4 **)(_UNK_02119048 + 0x2118f90));
  }
  else {
    iVar1 = func_0x0229f13c(0x2a2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Item$$InitWithBubbleItem RVA 0x2109054 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02119054(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_021192c4 + 0x2119074);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021192c8 + 0x2119094));
    func_0x01384978(*(undefined4 *)(_UNK_021192cc + 0x21190a0));
    func_0x01384978(*(undefined4 *)(_UNK_021192d0 + 0x21190ac));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c5b,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xc) != param_2) {
      *(int *)(param_1 + 0xc) = param_2;
      *(undefined1 *)(param_1 + 0x50) = 1;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_021192d4 + 0x2119154)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x108);
            goto LAB_0211919c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021192d4 + 0x2119154),9);
LAB_0211919c:
      uVar4 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      FUN_021171ac(param_1);
      iVar1 = func_0x02febab8(param_1,**(undefined4 **)(_UNK_021192d8 + 0x21191c8));
      if (iVar1 != 0) {
        func_0x021192e4(iVar1,param_3,param_5,param_6,param_7);
      }
      if (param_3 == 2) {
        piVar2 = (int *)func_0x021566f4(0);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_021192dc + 0x211921c)) {
              puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0x110);
              goto LAB_02119264;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021192dc + 0x211921c),10);
LAB_02119264:
        uVar4 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
        if (*(int *)(**(int **)(_UNK_021192e0 + 0x2119288) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02128b80(param_1,uVar4,0,0);
      }
      *(undefined1 *)(param_1 + 0x50) = 0;
      pcVar7 = (char *)(_UNK_02117db4 + 0x2117be4);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02117db8 + 0x2117bf8));
        func_0x01384978(*(undefined4 *)(_UNK_02117dbc + 0x2117c04));
        func_0x01384978(*(undefined4 *)(_UNK_02117dc0 + 0x2117c10));
        func_0x01384978(*(undefined4 *)(_UNK_02117dc4 + 0x2117c1c));
        func_0x01384978(*(undefined4 *)(_UNK_02117dc8 + 0x2117c28));
        *pcVar7 = '\x01';
      }
      piVar2 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iVar1 = func_0x0229f06c(0x293,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x34);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x03dcf090(iVar1,**(undefined4 **)(_UNK_02117dcc + 0x2117c9c));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03834d00(&stack0xffffffe0,iVar1,**(undefined4 **)(_UNK_02117dd0 + 0x2117cc8));
        puVar3 = *(undefined4 **)(_UNK_02117dd4 + 0x2117cdc);
        while (iVar1 = func_0x03fa8ea0(&stack0xffffffe0,*puVar3), iVar1 != 0) {
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
        }
        func_0x03fa8e9c(&stack0xffffffe0,**(undefined4 **)(_UNK_02117dd8 + 0x2117d20));
      }
      else {
        iVar1 = func_0x0229f13c(0x293,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02173f80(iVar1,param_1,0);
      }
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5c5b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02235ad8(iVar1,param_1,param_2,param_3,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.Merge.Item$$AppendWithActivityComponent RVA 0x210936c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211936c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar4 = (char *)(_UNK_02119424 + 0x2119380);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119428 + 0x2119394));
    func_0x01384978(*(undefined4 *)(_UNK_0211942c + 0x21193a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb33e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb33e,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    iVar1 = func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3,0,0);
    return iVar1;
  }
  iVar1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_02119430 + 0x21193fc));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = **(int **)(_UNK_02119434 + 0x2119418);
  puVar2 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02febcc0 + 0x2febadc));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc4 + 0x2febae8));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc8 + 0x2febaf4));
    puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0140024c(iVar1);
      puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    }
  }
  uVar8 = *puVar2;
  if (*(int *)(**(int **)(_UNK_02febccc + 0x2febb18) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x04836854(uVar8,0);
  piVar6 = *(int **)(_UNK_02febcd0 + 0x2febb48);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x0212882c(uVar8,0);
  iVar5 = func_0x02119a3c(param_1,uVar8,1,0);
  if (iVar5 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x02febd14(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x021274dc(iVar5,param_1,0);
    iVar7 = *(int *)(param_1 + 0x34);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf268(iVar7,uVar8,iVar5,**(undefined4 **)(_UNK_02febcd4 + 0x2febbec));
    func_0x0211a0dc(param_1,uVar8,iVar5,0);
    func_0x0211a430(param_1,iVar5,0);
    iVar7 = *(int *)(param_1 + 0x58);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02147a8c(iVar7,uVar8,iVar5,0);
  }
  iVar7 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x014001f0(iVar7);
  }
  iVar5 = func_0x01384ab8(iVar5,iVar7);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = 0;
  if ((iVar5 != 0) && (iVar7 = func_0x01384ab8(iVar5,iVar1), iVar7 == 0)) {
    func_0x01384fb4(iVar5,iVar1);
    return 0;
  }
  return iVar7;
}



// ===== FAT.Merge.Item$$AppendWithActivityTokenComponent RVA 0x2109438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119438(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar4 = (char *)(_UNK_021194f0 + 0x211944c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021194f4 + 0x2119460));
    func_0x01384978(*(undefined4 *)(_UNK_021194f8 + 0x211946c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb33f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb33f,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    iVar1 = func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3,0,0);
    return iVar1;
  }
  iVar1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_021194fc + 0x21194c8));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = **(int **)(_UNK_02119500 + 0x21194e4);
  puVar2 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02febcc0 + 0x2febadc));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc4 + 0x2febae8));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc8 + 0x2febaf4));
    puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0140024c(iVar1);
      puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    }
  }
  uVar8 = *puVar2;
  if (*(int *)(**(int **)(_UNK_02febccc + 0x2febb18) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x04836854(uVar8,0);
  piVar6 = *(int **)(_UNK_02febcd0 + 0x2febb48);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x0212882c(uVar8,0);
  iVar5 = func_0x02119a3c(param_1,uVar8,1,0);
  if (iVar5 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x02febd14(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x021274dc(iVar5,param_1,0);
    iVar7 = *(int *)(param_1 + 0x34);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf268(iVar7,uVar8,iVar5,**(undefined4 **)(_UNK_02febcd4 + 0x2febbec));
    func_0x0211a0dc(param_1,uVar8,iVar5,0);
    func_0x0211a430(param_1,iVar5,0);
    iVar7 = *(int *)(param_1 + 0x58);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02147a8c(iVar7,uVar8,iVar5,0);
  }
  iVar7 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x014001f0(iVar7);
  }
  iVar5 = func_0x01384ab8(iVar5,iVar7);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = 0;
  if ((iVar5 != 0) && (iVar7 = func_0x01384ab8(iVar5,iVar1), iVar7 == 0)) {
    func_0x01384fb4(iVar5,iVar1);
    return 0;
  }
  return iVar7;
}



// ===== FAT.Merge.Item$$SetNoCoinUnfrozen RVA 0x2109504 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119504(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar4 = (char *)(_UNK_021195bc + 0x2119518);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021195c0 + 0x211952c));
    func_0x01384978(*(undefined4 *)(_UNK_021195c4 + 0x2119538));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb340,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb340,0);
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
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    iVar1 = func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3,0,0);
    return iVar1;
  }
  iVar1 = func_0x02feb4f8(param_1,0,**(undefined4 **)(_UNK_021195c8 + 0x2119594));
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = **(int **)(_UNK_021195cc + 0x21195b0);
  puVar2 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02febcc0 + 0x2febadc));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc4 + 0x2febae8));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc8 + 0x2febaf4));
    puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0140024c(iVar1);
      puVar2 = *(undefined4 **)(iVar1 + 0x1c);
    }
  }
  uVar8 = *puVar2;
  if (*(int *)(**(int **)(_UNK_02febccc + 0x2febb18) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x04836854(uVar8,0);
  piVar6 = *(int **)(_UNK_02febcd0 + 0x2febb48);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x0212882c(uVar8,0);
  iVar5 = func_0x02119a3c(param_1,uVar8,1,0);
  if (iVar5 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = func_0x02febd14(*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x021274dc(iVar5,param_1,0);
    iVar7 = *(int *)(param_1 + 0x34);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf268(iVar7,uVar8,iVar5,**(undefined4 **)(_UNK_02febcd4 + 0x2febbec));
    func_0x0211a0dc(param_1,uVar8,iVar5,0);
    func_0x0211a430(param_1,iVar5,0);
    iVar7 = *(int *)(param_1 + 0x58);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x02147a8c(iVar7,uVar8,iVar5,0);
  }
  iVar7 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = func_0x014001f0(iVar7);
  }
  iVar5 = func_0x01384ab8(iVar5,iVar7);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0(iVar1);
  }
  iVar7 = 0;
  if ((iVar5 != 0) && (iVar7 = func_0x01384ab8(iVar5,iVar1), iVar7 == 0)) {
    func_0x01384fb4(iVar5,iVar1);
    return 0;
  }
  return iVar7;
}



// ===== FAT.Merge.Item$$InitWithNormalItem RVA 0x21095d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021195d0(int param_1,int param_2)

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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_02119794 + 0x21195e8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119798 + 0x21195fc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x275,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x275,0);
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
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 0x50) = 1;
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  piVar10 = *(int **)(_UNK_0211979c + 0x2119690);
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar7 = *piVar10;
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x108);
        goto LAB_021196d8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar7,9);
LAB_021196d8:
  uVar9 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  FUN_021171ac(param_1);
  piVar2 = (int *)func_0x021566f4(0);
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
        puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x110);
        goto FUN_02117bcc;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,iVar7,10);
FUN_02117bcc:
  uVar9 = (*(code *)*puVar3)(piVar2,param_2,puVar3[1]);
  FUN_021187c8(param_1,uVar9);
  *(undefined1 *)(param_1 + 0x50) = 0;
  pcVar8 = (char *)(_UNK_02117db4 + 0x2117be4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02117db8 + 0x2117bf8));
    func_0x01384978(*(undefined4 *)(_UNK_02117dbc + 0x2117c04));
    func_0x01384978(*(undefined4 *)(_UNK_02117dc0 + 0x2117c10));
    func_0x01384978(*(undefined4 *)(_UNK_02117dc4 + 0x2117c1c));
    func_0x01384978(*(undefined4 *)(_UNK_02117dc8 + 0x2117c28));
    *pcVar8 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piVar2 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x293,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03dcf090(iVar1,**(undefined4 **)(_UNK_02117dcc + 0x2117c9c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_20,iVar1,**(undefined4 **)(_UNK_02117dd0 + 0x2117cc8));
    puVar3 = *(undefined4 **)(_UNK_02117dd4 + 0x2117cdc);
    while (iVar1 = func_0x03fa8ea0(&uStack_20,*puVar3), iVar1 != 0) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
    }
    func_0x03fa8e9c(&uStack_20,**(undefined4 **)(_UNK_02117dd8 + 0x2117d20));
  }
  else {
    iVar1 = func_0x0229f13c(0x293,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.Item$$InitWithDummyItem RVA 0x21097a0 =====

void FUN_021197a0(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xb341,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb341,0);
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
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.Merge.Item$$SetPosition RVA 0x21097fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021197fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02119a10 + 0x211981c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119a14 + 0x2119834));
    func_0x01384978(*(undefined4 *)(_UNK_02119a18 + 0x2119840));
    func_0x01384978(*(undefined4 *)(_UNK_02119a1c + 0x211984c));
    func_0x01384978(*(undefined4 *)(_UNK_02119a20 + 0x2119858));
    func_0x01384978(*(undefined4 *)(_UNK_02119a24 + 0x2119864));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_24 = 0;
  piStack_28 = (int *)0x0;
  iVar2 = func_0x0229f06c(0x296,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = param_4;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf754(&uStack_38,iVar2,**(undefined4 **)(_UNK_02119a28 + 0x211990c));
    puVar4 = *(undefined4 **)(_UNK_02119a2c + 0x2119924);
    while (iVar2 = func_0x03fa87cc(&uStack_38,*puVar4), piVar1 = piStack_28, iVar2 != 0) {
      if (piStack_28 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      (**(code **)(iVar2 + 0x110))(piVar1,*(undefined4 *)(iVar2 + 0x114));
    }
    func_0x03fa890c(&uStack_38,**(undefined4 **)(_UNK_02119a30 + 0x2119968));
    iVar2 = FUN_02116ae0(param_1);
    if (iVar2 != 0) {
      FUN_0211767c(param_1);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x296,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.Item$$GetItemComponent RVA 0x2109a3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119a3c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_02119bd4 + 0x2119a5c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119bd8 + 0x2119a70));
    *pcVar2 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x283,0);
  if (iVar1 == 0) {
    switch(param_2) {
    case 0:
      iStack_1c = func_0x02119c84(param_1,param_3);
      break;
    case 1:
      iStack_1c = func_0x02119e70(param_1,param_3);
      break;
    case 2:
      iStack_1c = func_0x02119dcc(param_1,param_3);
      break;
    case 3:
      iStack_1c = func_0x02119f14(param_1,param_3);
      break;
    default:
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03dd1078(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_02119bdc + 0x2119b7c));
      if (((iStack_1c != 0) && (param_3 == 0)) && (iVar1 = func_0x02127314(iStack_1c,0), iVar1 == 0)
         ) {
        iStack_1c = 0;
      }
      break;
    case 6:
      iStack_1c = func_0x02119be0(param_1,param_3);
      break;
    case 0xb:
      iStack_1c = func_0x02119d28(param_1,param_3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x283,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_1c = func_0x0218154c(iVar1,param_1,param_2,param_3,0);
  }
  return iStack_1c;
}



// ===== FAT.Merge.Item$$GetBubbleComponent RVA 0x2109be0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119be0(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02119c78 + 0x2119bf8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119c7c + 0x2119c0c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x284,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((param_2 == 0) &&
            (iVar3 = func_0x02127314(iVar1,0,**(undefined4 **)(_UNK_02119c80 + 0x2119c6c)),
            iVar3 == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x284,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02180fa0 + 0x2180eac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02180fa4 + 0x2180ec0),param_1,param_2,0);
    *pcVar4 = '\x01';
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
  func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02180fa8 + 0x2180f90));
  return iVar1;
}



// ===== FAT.Merge.Item$$GetMergeComponent RVA 0x2109c84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119c84(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02119d1c + 0x2119c9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119d20 + 0x2119cb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x285,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((param_2 == 0) &&
            (iVar3 = func_0x02127314(iVar1,0,**(undefined4 **)(_UNK_02119d24 + 0x2119d10)),
            iVar3 == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x285,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_021810c0 + 0x2180fcc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021810c4 + 0x2180fe0),param_1,param_2,0);
    *pcVar4 = '\x01';
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
  func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021810c8 + 0x21810b0));
  return iVar1;
}



// ===== FAT.Merge.Item$$GetSkillComponent RVA 0x2109d28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119d28(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02119dc0 + 0x2119d40);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119dc4 + 0x2119d54));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x286,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((param_2 == 0) &&
            (iVar3 = func_0x02127314(iVar1,0,**(undefined4 **)(_UNK_02119dc8 + 0x2119db4)),
            iVar3 == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x286,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_021811e0 + 0x21810ec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021811e4 + 0x2181100),param_1,param_2,0);
    *pcVar4 = '\x01';
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
  func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021811e8 + 0x21811d0));
  return iVar1;
}



// ===== FAT.Merge.Item$$GetClickSourceComponent RVA 0x2109dcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119dcc(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02119e64 + 0x2119de4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119e68 + 0x2119df8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x287,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((param_2 == 0) &&
            (iVar3 = func_0x02127314(iVar1,0,**(undefined4 **)(_UNK_02119e6c + 0x2119e58)),
            iVar3 == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x287,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02181300 + 0x218120c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02181304 + 0x2181220),param_1,param_2,0);
    *pcVar4 = '\x01';
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
  func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02181308 + 0x21812f0));
  return iVar1;
}



// ===== FAT.Merge.Item$$GetAutoSourceComponent RVA 0x2109e70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119e70(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02119f08 + 0x2119e88);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119f0c + 0x2119e9c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x288,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((param_2 == 0) &&
            (iVar3 = func_0x02127314(iVar1,0,**(undefined4 **)(_UNK_02119f10 + 0x2119efc)),
            iVar3 == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x288,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02181420 + 0x218132c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02181424 + 0x2181340),param_1,param_2,0);
    *pcVar4 = '\x01';
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
  func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02181428 + 0x2181410));
  return iVar1;
}



// ===== FAT.Merge.Item$$GetChestComponent RVA 0x2109f14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119f14(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02119fac + 0x2119f2c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119fb0 + 0x2119f40));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x289,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if ((param_2 == 0) &&
            (iVar3 = func_0x02127314(iVar1,0,**(undefined4 **)(_UNK_02119fb4 + 0x2119fa0)),
            iVar3 == 0)) {
      iVar1 = 0;
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x289,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_02181540 + 0x218144c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02181544 + 0x2181460),param_1,param_2,0);
    *pcVar4 = '\x01';
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
  func_0x01485228(&uStack_38,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02181548 + 0x2181530));
  return iVar1;
}



// ===== FAT.Merge.Item$$RemoveItemComponent RVA 0x2109fb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02119fb8(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_0211a0c8 + 0x2119fd0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211a0cc + 0x2119fe4));
    func_0x01384978(*(undefined4 *)(_UNK_0211a0d0 + 0x2119ff0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb342,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb342,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02181b44 + 0x2181a50);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02181b48 + 0x2181a64),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02181b4c + 0x2181b34));
    return iVar1;
  }
  iVar1 = func_0x02f7c2b0(*(undefined4 *)(param_1 + 0x34),param_2,0,
                          **(undefined4 **)(_UNK_0211a0d4 + 0x211a054));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x021274dc(iVar1,0,0);
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x03dd09a4(iVar3,param_2,**(undefined4 **)(_UNK_0211a0d8 + 0x211a09c));
  func_0x0211a0dc(param_1,param_2,0);
  func_0x0211a430(param_1,iVar1);
  return iVar1;
}



// ===== FAT.Merge.Item$$_SetCachedComponentRef RVA 0x210a0dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211a0dc(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0211a3fc + 0x211a0fc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211a400 + 0x211a110));
    func_0x01384978(*(undefined4 *)(_UNK_0211a404 + 0x211a11c));
    func_0x01384978(*(undefined4 *)(_UNK_0211a408 + 0x211a128));
    func_0x01384978(*(undefined4 *)(_UNK_0211a40c + 0x211a134));
    func_0x01384978(*(undefined4 *)(_UNK_0211a410 + 0x211a140));
    func_0x01384978(*(undefined4 *)(_UNK_0211a414 + 0x211a14c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x290,0);
  if (iVar1 == 0) {
    switch(param_2) {
    case 0:
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(**(int **)(&UNK_0211a204 + _UNK_0211a41c) + 0xb8);
        piVar3 = (int *)0x0;
        if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
           (piVar3 = param_3,
           *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) !=
           **(int **)(&UNK_0211a204 + _UNK_0211a41c))) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x3c) = piVar3;
      }
      break;
    case 1:
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(**(int **)(&UNK_0211a250 + _UNK_0211a428) + 0xb8);
        piVar3 = (int *)0x0;
        if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
           (piVar3 = param_3,
           *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) !=
           **(int **)(&UNK_0211a250 + _UNK_0211a428))) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x48) = piVar3;
      }
      break;
    case 2:
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(**(int **)(&UNK_0211a29c + _UNK_0211a424) + 0xb8);
        piVar3 = (int *)0x0;
        if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
           (piVar3 = param_3,
           *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) !=
           **(int **)(&UNK_0211a29c + _UNK_0211a424))) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x44) = piVar3;
      }
      break;
    case 3:
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(**(int **)(&UNK_0211a2e8 + _UNK_0211a42c) + 0xb8);
        piVar3 = (int *)0x0;
        if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
           (piVar3 = param_3,
           *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) !=
           **(int **)(&UNK_0211a2e8 + _UNK_0211a42c))) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x4c) = piVar3;
      }
      break;
    case 6:
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(**(int **)(&UNK_0211a334 + _UNK_0211a418) + 0xb8);
        piVar3 = (int *)0x0;
        if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
           (piVar3 = param_3,
           *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) !=
           **(int **)(&UNK_0211a334 + _UNK_0211a418))) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x38) = piVar3;
      }
      break;
    case 0xb:
      if (param_3 == (int *)0x0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      else {
        uVar2 = (uint)*(byte *)(**(int **)(&UNK_0211a380 + _UNK_0211a420) + 0xb8);
        piVar3 = (int *)0x0;
        if ((uVar2 <= *(byte *)(*param_3 + 0xb8)) &&
           (piVar3 = param_3,
           *(int *)(*(int *)(*param_3 + 100) + uVar2 * 4 + -4) !=
           **(int **)(&UNK_0211a380 + _UNK_0211a420))) {
          piVar3 = (int *)0x0;
        }
        *(int **)(param_1 + 0x40) = piVar3;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x290,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218194c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Item$$OnComponentChanged RVA 0x210a430 =====

void FUN_0211a430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
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
  
  iVar1 = func_0x0229f06c(0x27d,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x50) != '\0') {
      return;
    }
    iVar1 = FUN_0210cd28(param_1);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0210cd28(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x27e,0,0);
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x020eaa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar2 = func_0x0229f13c(0x27e,0);
    param_2 = param_1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x27d,0);
    iVar1 = param_1;
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
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



// ===== FAT.Merge.Item$$ExecuteAfterUpdate RVA 0x210a4d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211a4d0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_0211a5c4 + 0x211a4e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211a5c8 + 0x211a4fc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb343,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb343,0);
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
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_0211a5cc + 0x211a57c);
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



// ===== FAT.Merge.Item$$Update RVA 0x210a5d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211a5d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar4 = (char *)(_UNK_0211aa18 + 0x211a5ec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211aa1c + 0x211a600));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa20 + 0x211a60c));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa24 + 0x211a618));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa28 + 0x211a624));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa2c + 0x211a630));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa30 + 0x211a63c));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa34 + 0x211a648));
    func_0x01384978(*(undefined4 *)(_UNK_0211aa38 + 0x211a654));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x5e56,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0210cd28(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_020ec33c(iVar2,param_1,0);
    iVar6 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x10) = iVar2;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_0211aa3c + 0x211a704);
    iVar6 = func_0x03dcf090(iVar6,*puVar7);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_0211aa40 + 0x211a730);
    func_0x03834d00(&uStack_48,iVar6,*puVar8);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    puVar5 = *(undefined4 **)(_UNK_0211aa44 + 0x211a748);
    iVar2 = iVar2 * param_2;
    while (iVar6 = func_0x03fa8ea0(&uStack_38,*puVar5), piVar1 = piStack_2c, iVar6 != 0) {
      if (piStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar1;
      iVar6 = (**(code **)(iVar6 + 0xe0))(piVar1,iVar2,*(undefined4 *)(iVar6 + 0xe4));
      if (iVar6 < iVar2) {
        iVar2 = iVar6;
      }
    }
    func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_0211aa4c + 0x211a798));
    iVar6 = *(int *)(param_1 + 0x34);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x03dcf090(iVar6,*puVar7);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_48,iVar6,*puVar8);
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    while (iVar6 = func_0x03fa8ea0(&uStack_38,*puVar5), piVar1 = piStack_2c, iVar6 != 0) {
      if (piStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x0212542c(piVar1,iVar2,0);
    }
    func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_0211aa54 + 0x211a828));
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar2 = 0;
      puVar7 = *(undefined4 **)(_UNK_0211aa5c + 0x211a860);
      while( true ) {
        iVar6 = *(int *)(param_1 + 0x5c);
        if (iVar6 == 0) {
          func_0x01384bf0();
          iVar3 = iRam0000000c;
          iVar6 = *(int *)(param_1 + 0x5c);
          if (iVar6 == 0) {
            func_0x01384bf0();
            iVar6 = 0;
          }
        }
        else {
          iVar3 = *(int *)(iVar6 + 0xc);
        }
        if (iVar3 <= iVar2) break;
        iVar6 = func_0x0328eea8(iVar6,iVar2,*puVar7);
        if (iVar6 != 0) {
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x14));
        }
        iVar2 = iVar2 + 1;
      }
      iVar2 = *(int *)(iVar6 + 0xc);
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      if (0 < iVar2) {
        func_0x0145b1dc(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5e56,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Item$$AddComponent RVA 0x210aa64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211aa64(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x28d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02119a3c(param_1,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
    pcVar5 = (char *)(_UNK_0211ac40 + 0x211aaf8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0211ac44 + 0x211ab0c));
      func_0x01384978(*(undefined4 *)(_UNK_0211ac48 + 0x211ab18));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x28e,0);
    if (iVar1 == 0) {
      iVar1 = FUN_02119a3c(param_1,param_2,1);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_0211ac4c + 0x211ab90) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x02128904(param_2,0);
        iVar1 = 0;
        if (iVar3 != 0) {
          func_0x021274dc(iVar3,param_1,0);
          iVar1 = *(int *)(param_1 + 0x34);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03dcf268(iVar1,param_2,iVar3,**(undefined4 **)(_UNK_0211ac50 + 0x211abec));
          FUN_0211a0dc(param_1,param_2,iVar3);
          FUN_0211a430(param_1,iVar3);
          iVar1 = *(int *)(param_1 + 0x58);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02147a8c(iVar1,param_2,iVar3,0);
          iVar1 = iVar3;
        }
      }
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x28e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x28d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar5 = (char *)(_UNK_02181b44 + 0x2181a50);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02181b48 + 0x2181a64),param_1,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02181b4c + 0x2181b34));
  return iVar1;
}



// ===== FAT.Merge.Item$$_AddItemComponent RVA 0x210aae0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211aae0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_0211ac40 + 0x211aaf8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211ac44 + 0x211ab0c));
    func_0x01384978(*(undefined4 *)(_UNK_0211ac48 + 0x211ab18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x28e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x28e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02181b44 + 0x2181a50);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02181b48 + 0x2181a64),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02181b4c + 0x2181b34));
    return iVar1;
  }
  iVar1 = FUN_02119a3c(param_1,param_2,1);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0211ac4c + 0x211ab90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x02128904(param_2,0);
    iVar1 = 0;
    if (iVar3 != 0) {
      func_0x021274dc(iVar3,param_1,0);
      iVar1 = *(int *)(param_1 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03dcf268(iVar1,param_2,iVar3,**(undefined4 **)(_UNK_0211ac50 + 0x211abec));
      FUN_0211a0dc(param_1,param_2,iVar3);
      FUN_0211a430(param_1,iVar3);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02147a8c(iVar1,param_2,iVar3,0);
      iVar1 = iVar3;
    }
  }
  return iVar1;
}



// ===== FAT.Merge.Item$$CanUnlockAround RVA 0x210ac54 =====

uint FUN_0211ac54(undefined4 param_1)

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
  iVar1 = func_0x0229f06c(0x883e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x883e,0);
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
  iVar1 = FUN_02116a38(param_1);
  if (iVar1 == 0) {
    uVar3 = FUN_0210e250(param_1,0x16,0);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// ===== FAT.Merge.Item$$_ClearCachedComponentRefs RVA 0x210acd0 =====

void FUN_0211acd0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x280,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x280,0);
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  return;
}



// ===== FAT.Merge.Item$$<_RefreshEffectList>b__106_0 RVA 0x210ad38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0211ad38(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_0211b028 + 0x211ad54);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211b02c + 0x211ad68));
    func_0x01384978(*(undefined4 *)(_UNK_0211b030 + 0x211ad74));
    func_0x01384978(*(undefined4 *)(_UNK_0211b034 + 0x211ad80));
    func_0x01384978(*(undefined4 *)(_UNK_0211b038 + 0x211ad8c));
    func_0x01384978(*(undefined4 *)(_UNK_0211b03c + 0x211ad98));
    func_0x01384978(*(undefined4 *)(_UNK_0211b040 + 0x211ada4));
    func_0x01384978(*(undefined4 *)(_UNK_0211b044 + 0x211adb0));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  FUN_0210cd7c(&uStack_48,param_1);
  uVar2 = uStack_44;
  uVar1 = uStack_48;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_0210f684(param_2,uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03dcf090(iVar3,**(undefined4 **)(_UNK_0211b048 + 0x211ae18));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03834d00(&uStack_48,iVar3,**(undefined4 **)(_UNK_0211b04c + 0x211ae40));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar11 = *(undefined4 **)(_UNK_0211b050 + 0x211ae5c);
    piVar10 = *(int **)(_UNK_0211b054 + 0x211ae64);
    do {
      do {
        iVar3 = func_0x03fa8ea0(&uStack_38,*puVar11);
        if (iVar3 == 0) {
          func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_0211b058 + 0x211af74));
          return;
        }
        piVar4 = (int *)func_0x01384ab8(uStack_2c,*piVar10);
      } while (piVar4 == (int *)0x0);
      iVar3 = *piVar4;
      iVar6 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar6) {
            puVar5 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
            goto LAB_0211aedc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,iVar6,0);
LAB_0211aedc:
      iVar3 = (*(code *)*puVar5)(piVar4,param_2,puVar5[1]);
    } while (iVar3 == 0);
    func_0x03fa8e9c(&uStack_38,**(undefined4 **)(_UNK_0211b064 + 0x211af04));
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar3 + 8);
    uVar7 = *(uint *)(iVar3 + 0xc);
    piVar10 = *(int **)(_UNK_0211b068 + 0x211af3c);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    iVar12 = *piVar10;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar7 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar7 + 1;
      *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
    }
    else {
      func_0x0328f170(iVar3,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38)
                     );
    }
  }
  return;
}



// ===== FAT.Merge.Item$$<>iFixBaseProxy_ToString RVA 0x210b06c =====

void FUN_0211b06c(undefined4 param_1)

{
  (*(code *)&UNK_048868a4)(param_1,0);
  return;
}



// ===== FAT.Merge.Item$$FillAllEffects<__Il2CppFullySharedGenericType> RVA 0x2fdb1f0 =====

/* WARNING: Removing unreachable block (ram,0x02feb4b4) */

int FUN_02feb1f0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int extraout_r2;
  int iVar6;
  code *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  int aiStack_6c [5];
  int aiStack_58 [2];
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_2c;
  
  iStack_2c = **(int **)(iRam02feb4c8 + 0x2feb214);
  piVar1 = *(int **)(param_3 + 0x1c);
  if (piVar1 == (int *)0x0) {
    func_0x01384978(*(undefined4 *)(iRam02feb4cc + 0x2feb230));
    func_0x01384978(*(undefined4 *)(iRam02feb4d0 + 0x2feb23c));
    func_0x01384978(*(undefined4 *)(iRam02feb4d4 + 0x2feb248));
    func_0x01384978(*(undefined4 *)(iRam02feb4d8 + 0x2feb254));
    piVar1 = *(int **)(param_3 + 0x1c);
    if (piVar1 == (int *)0x0) {
      func_0x0140024c(param_3);
      piVar1 = *(int **)(param_3 + 0x1c);
    }
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar9 = *(int *)(*piVar1 + 0x84);
  uVar2 = iVar9 + 7U & 0xfffffff8;
  aiStack_58[1] = (int)aiStack_58 - uVar2;
  puVar8 = (undefined4 *)(aiStack_58[1] - uVar2);
  iVar6 = (int)puVar8 - uVar2;
  puStack_40 = (undefined4 *)0x0;
  func_0x0145894c(iVar6,iVar9);
  pcVar7 = *(code **)(param_1 + 0x54);
  if (pcVar7 == (code *)0x0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&puStack_50,pcVar7,**(undefined4 **)(iRam02feb4dc + 0x2feb2d4));
  puStack_40 = puStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  while (iVar3 = func_0x03f5f428(&puStack_40,**(undefined4 **)(iRam02feb4e0 + 0x2feb2f4)),
        uVar4 = uStack_34, iVar3 != 0) {
    iVar3 = **(int **)(param_3 + 0x1c);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0(iVar3);
    }
    iVar3 = func_0x01384ab8(uVar4,iVar3);
    if (iVar3 != 0) {
      iVar3 = **(int **)(param_3 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0(iVar3);
      }
      uVar4 = func_0x01384ab8(uVar4,iVar3);
      iVar3 = **(int **)(param_3 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x014001f0(iVar3);
      }
      uVar4 = func_0x01384ac8(uVar4,iVar3,aiStack_58[1]);
      func_0x01458934(iVar6,uVar4,iVar9);
      func_0x01458934(puVar8,iVar6,iVar9);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      puVar5 = (undefined4 *)(*(int **)(param_3 + 0x1c))[2];
      puStack_50 = puVar8;
      if (-1 < *(int *)(**(int **)(param_3 + 0x1c) + 0x14)) {
        puStack_50 = (undefined4 *)*puVar8;
      }
      uVar4 = *puVar5;
      pcVar7 = (code *)puVar5[2];
      *(undefined4 **)(iVar6 + -8) = puStack_50;
      (*pcVar7)(uVar4,puVar5,param_2,&puStack_50);
    }
  }
  func_0x03f5f424(&puStack_40,**(undefined4 **)(iRam02feb4e4 + 0x2feb40c));
  piVar1 = *(int **)(iRam02feb4e8 + 0x2feb420);
  while( true ) {
    if (*piVar1 == iStack_2c) {
      return *piVar1;
    }
    uVar10 = func_0x0145b028();
    uVar4 = (undefined4)uVar10;
    if ((int)((ulonglong)uVar10 >> 0x20) != 1) break;
    piVar1 = (int *)func_0x0145b008(uVar4);
    iVar9 = *piVar1;
    func_0x0145b0f8();
    func_0x03f5f424(&puStack_40,**(undefined4 **)(iRam02feb4ec + 0x2feb468));
    piVar1 = *(int **)(iRam02feb4f0 + 0x2feb480);
    if (iVar9 != 0) {
      func_0x01384bec(iVar9);
    }
  }
  func_0x03f5f424(&puStack_40,**(undefined4 **)(iRam02feb4f4 + 0x2feb4a4));
  func_0x01459844(uVar4);
  uVar10 = func_0x01062280();
  *(undefined4 *)(iVar6 + -4) = 0x2feb4c8;
  *(code **)(iVar6 + -8) = pcVar7;
  *(undefined4 *)(iVar6 + -0xc) = 0;
  *(undefined4 *)(iVar6 + -0x10) = uVar4;
  puVar8 = *(undefined4 **)(extraout_r2 + 0x1c);
  if (puVar8 == (undefined4 *)0x0) {
    func_0x0140024c(extraout_r2);
    puVar8 = *(undefined4 **)(extraout_r2 + 0x1c);
  }
  uVar4 = *puVar8;
  *(undefined4 *)(iVar6 + -0x14) = 0;
  func_0x02feb690((int)uVar10,iVar6 + -0x14,(int)((ulonglong)uVar10 >> 0x20),uVar4);
  return *(int *)(iVar6 + -0x14);
}



// ===== FAT.Merge.Item$$GetItemComponent<object> RVA 0x2fdb4f8 =====

undefined4 FUN_02feb4f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_14;
  
  puVar1 = *(undefined4 **)(param_3 + 0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    func_0x0140024c(param_3);
    puVar1 = *(undefined4 **)(param_3 + 0x1c);
  }
  uStack_14 = 0;
  func_0x02feb690(param_1,&uStack_14,param_2,*puVar1);
  return uStack_14;
}



// ===== FAT.Merge.Item$$RemoveItemComponent<object> RVA 0x2fdb54c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02feb54c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = *(undefined4 **)(param_2 + 0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02feb680 + 0x2feb570));
    func_0x01384978(*(undefined4 *)(_UNK_02feb684 + 0x2feb57c));
    puVar2 = *(undefined4 **)(param_2 + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0140024c(param_2);
      puVar2 = *(undefined4 **)(param_2 + 0x1c);
    }
  }
  uVar5 = *puVar2;
  if (*(int *)(**(int **)(_UNK_02feb688 + 0x2feb5a0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x04836854(uVar5,0);
  if (*(int *)(**(int **)(_UNK_02feb68c + 0x2feb5d0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = FUN_0212882c(uVar5,0);
  uVar5 = FUN_02119fb8(param_1,uVar5,0);
  iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x014001f0(iVar3);
  }
  iVar3 = func_0x01384ab8(uVar5,iVar3);
  iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_0x014001f0(iVar4);
  }
  if (iVar3 != 0) {
    iVar1 = func_0x01384ab8(iVar3,iVar4);
    if (iVar1 != 0) {
      return iVar1;
    }
    func_0x01384fb4(iVar3,iVar4);
  }
  return 0;
}



// ===== FAT.Merge.Item$$TryGetItemComponent<object> RVA 0x2fdb690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02feb690(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar2 = *(undefined4 **)(param_4 + 0x1c);
  if (puVar2 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02feb854 + 0x2feb6bc));
    func_0x01384978(*(undefined4 *)(_UNK_02feb858 + 0x2feb6c8));
    puVar2 = *(undefined4 **)(param_4 + 0x1c);
    if (puVar2 == (undefined4 *)0x0) {
      func_0x0140024c(param_4);
      puVar2 = *(undefined4 **)(param_4 + 0x1c);
    }
  }
  uVar4 = *puVar2;
  if (*(int *)(**(int **)(_UNK_02feb85c + 0x2feb6ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x04836854(uVar4,0);
  if (*(int *)(**(int **)(_UNK_02feb860 + 0x2feb71c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = FUN_0212882c(uVar4,0);
  uVar4 = FUN_02119a3c(param_1,uVar4,param_3,0);
  iVar3 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x014001f0(iVar3);
  }
  iVar3 = func_0x01384ab8(uVar4,iVar3);
  iVar5 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x014001f0(iVar5);
  }
  iVar1 = 0;
  if ((iVar3 != 0) && (iVar1 = func_0x01384ab8(iVar3,iVar5), iVar1 == 0)) {
    func_0x01384fb4(iVar3,iVar5);
    iVar1 = 0;
  }
  *param_2 = iVar1;
  iVar3 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_0x014001f0(iVar3);
  }
  iVar3 = func_0x01384ab8(uVar4,iVar3);
  iVar5 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x014001f0(iVar5);
  }
  if ((iVar3 != 0) && (iVar1 = func_0x01384ab8(iVar3,iVar5), iVar1 == 0)) {
    func_0x01384fb4(iVar3,iVar5);
  }
  return *param_2 != 0;
}



// ===== FAT.Merge.Item$$WalkAllComponents<object> RVA 0x2fdb864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02feb864(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(_UNK_02feba8c + 0x2feb890));
    func_0x01384978(*(undefined4 *)(_UNK_02feba90 + 0x2feb89c));
    func_0x01384978(*(undefined4 *)(_UNK_02feba94 + 0x2feb8a8));
    func_0x01384978(*(undefined4 *)(_UNK_02feba98 + 0x2feb8b4));
    func_0x01384978(*(undefined4 *)(_UNK_02feba9c + 0x2feb8c0));
    if (*(int *)(param_3 + 0x1c) == 0) {
      func_0x0140024c(param_3);
    }
  }
  iVar3 = *(int *)(param_1 + 0x34);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x03dcf090(iVar3,**(undefined4 **)(_UNK_02febaa0 + 0x2feb8fc));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x03834d00(&uStack_30,iVar3,**(undefined4 **)(_UNK_02febaa4 + 0x2feb928));
  puVar5 = *(undefined4 **)(_UNK_02febaa8 + 0x2feb93c);
  while (iVar3 = func_0x03fa8ea0(&uStack_30,*puVar5), uVar1 = uStack_24, iVar3 != 0) {
    iVar3 = **(int **)(param_3 + 0x1c);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_0x014001f0(iVar3);
    }
    iVar3 = func_0x01384ab8(uVar1,iVar3);
    iVar4 = **(int **)(param_3 + 0x1c);
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x014001f0(iVar4);
    }
    if (iVar3 != 0) {
      iVar2 = func_0x01384ab8(iVar3,iVar4);
      if (iVar2 == 0) {
        func_0x01384fb4(iVar3,iVar4);
      }
      else if (param_2 != 0) {
        (**(code **)(param_2 + 0xc))
                  (*(undefined4 *)(param_2 + 0x20),iVar2,*(undefined4 *)(param_2 + 0x14));
      }
    }
  }
  func_0x03fa8e9c(&uStack_30,**(undefined4 **)(_UNK_02febaac + 0x2feb9f4));
  return;
}



// ===== FAT.Merge.Item$$_AddItemComponent<object> RVA 0x2fdbab8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02febab8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar3 = *(undefined4 **)(param_2 + 0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x01384978(*(undefined4 *)(_UNK_02febcc0 + 0x2febadc));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc4 + 0x2febae8));
    func_0x01384978(*(undefined4 *)(_UNK_02febcc8 + 0x2febaf4));
    puVar3 = *(undefined4 **)(param_2 + 0x1c);
    if (puVar3 == (undefined4 *)0x0) {
      func_0x0140024c(param_2);
      puVar3 = *(undefined4 **)(param_2 + 0x1c);
    }
  }
  uVar6 = *puVar3;
  if (*(int *)(**(int **)(_UNK_02febccc + 0x2febb18) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x04836854(uVar6,0);
  piVar4 = *(int **)(_UNK_02febcd0 + 0x2febb48);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = FUN_0212882c(uVar6,0);
  iVar1 = FUN_02119a3c(param_1,uVar6,1,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x02febd14(*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_021274dc(iVar1,param_1,0);
    iVar5 = *(int *)(param_1 + 0x34);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x03dcf268(iVar5,uVar6,iVar1,**(undefined4 **)(_UNK_02febcd4 + 0x2febbec));
    FUN_0211a0dc(param_1,uVar6,iVar1,0);
    FUN_0211a430(param_1,iVar1,0);
    iVar5 = *(int *)(param_1 + 0x58);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    FUN_02147a8c(iVar5,uVar6,iVar1,0);
  }
  iVar5 = *(int *)(*(int *)(param_2 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x014001f0(iVar5);
  }
  iVar1 = func_0x01384ab8(iVar1,iVar5);
  iVar5 = *(int *)(*(int *)(param_2 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x014001f0(iVar5);
  }
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = func_0x01384ab8(iVar1,iVar5), iVar2 == 0)) {
    func_0x01384fb4(iVar1,iVar5);
    return 0;
  }
  return iVar2;
}



// ===== FAT.Merge.Item$$_GetCachedComponentRef<object> RVA 0x2fdbcd8 =====

int FUN_02febcd8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((param_2 == 0) && (iVar1 = FUN_02127314(param_1,0), iVar1 == 0)) {
    param_1 = 0;
  }
  return param_1;
}


