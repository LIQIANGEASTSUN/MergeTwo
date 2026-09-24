/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityFogScore$$get_EventConf RVA 0x288d6d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0289d6d8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x59ac,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59ac,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022310d4 + 0x2230ff4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022310d8 + 0x2231008),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022310dc + 0x22310c4));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.ActivityFogScore$$get_DetailConf RVA 0x288d72c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0289d72c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x59ad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59ad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_022311dc + 0x22310fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022311e0 + 0x2231110),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022311e4 + 0x22311cc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.ActivityFogScore$$get_TokenId RVA 0x288d780 =====

undefined4 FUN_0289d780(int param_1)

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
  iVar1 = func_0x0229f06c(0x7a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a1,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x24);
  }
  return uVar4;
}



// ===== FAT.ActivityFogScore$$get_BoardId RVA 0x288d7e4 =====

undefined4 FUN_0289d7e4(int param_1)

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
  iVar1 = func_0x0229f06c(0x59ae,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59ae,0);
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
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x14);
  }
  return uVar4;
}



// ===== FAT.ActivityFogScore$$get_CostId RVA 0x288d848 =====

undefined4 FUN_0289d848(int param_1)

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
  iVar1 = func_0x0229f06c(0x59af,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59af,0);
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
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x14);
  }
  return uVar4;
}



// ===== FAT.ActivityFogScore$$get_Valid RVA 0x288d8ac =====

uint FUN_0289d8ac(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x59b0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59b0,0);
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
    iVar2 = *(int *)(param_1 + 0x3c);
  }
  if (iVar4 != 0 && iVar2 != 0) {
    return (uint)(*(int *)(param_1 + 0x40) != 0);
  }
  return 0;
}



// ===== FAT.ActivityFogScore$$get_IsActive RVA 0x288d948 =====

undefined4 FUN_0289d948(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x59b1,0);
  if (iVar1 == 0) {
    uVar4 = 0;
    iVar1 = func_0x0229f06c(0x128,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      if (iVar1 != 0) {
        uVar6 = func_0x02b4cec4(param_1);
        iVar1 = (int)((ulonglong)uVar6 >> 0x20);
        bVar5 = (int)uVar6 != 0;
        uVar4 = 0;
        if ((int)-(iVar1 + (uint)bVar5) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar5)))
        {
          uVar4 = 1;
        }
      }
      return uVar4;
    }
    iVar1 = func_0x0229f13c(0x128,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x59b1,0);
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
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.ActivityFogScore$$get_Score RVA 0x288d9a4 =====

undefined4 FUN_0289d9a4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.ActivityFogScore$$set_Score RVA 0x288d9ac =====

void FUN_0289d9ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.ActivityFogScore$$get_GrantedRewardOrdinal RVA 0x288d9b4 =====

undefined4 FUN_0289d9b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.ActivityFogScore$$set_GrantedRewardOrdinal RVA 0x288d9bc =====

void FUN_0289d9bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.ActivityFogScore$$get_PendingRewardCount RVA 0x288d9c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0289d9c4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0289da50 + 0x289d9d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289da54 + 0x289d9ec));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x59b2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59b2,0);
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
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc);
  }
  return uVar5;
}



// ===== FAT.ActivityFogScore$$.ctor RVA 0x288da58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289da58(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0289dd48 + 0x289da74);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289dd4c + 0x289da88));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd50 + 0x289da94));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd54 + 0x289daa0));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd58 + 0x289daac));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd5c + 0x289dab8));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd60 + 0x289dac4));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd64 + 0x289dad0));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd68 + 0x289dadc));
    func_0x01384978(*(undefined4 *)(_UNK_0289dd6c + 0x289dae8));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0289dd70 + 0x289db00));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_0289dd74 + 0x289db1c));
  piVar4 = *(int **)(_UNK_0289dd78 + 0x289db30);
  iVar2 = *piVar4;
  iVar3 = *(int *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  uStack_24 = 0;
  uStack_28 = 0;
  func_0x02b644a0(&uStack_28,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc04),0);
  *(undefined4 *)(param_1 + 0x74) = uStack_24;
  *(undefined4 *)(param_1 + 0x70) = uStack_28;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (*(int *)(**(int **)(_UNK_0289dd7c + 0x289dbb8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_0289dd80 + 0x289dbd4));
  *(int *)(param_1 + 0x3c) = iVar2;
  if (iVar2 == 0) {
    piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0289dd84 + 0x289dc20),2);
    uStack_28 = func_0x02b449f8(param_1,0);
    puVar6 = *(undefined4 **)(_UNK_0289dd88 + 0x289dc44);
    iVar2 = func_0x01384abc(*puVar6,&uStack_28);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar2 != 0) && (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)
       ) {
      uVar1 = func_0x01384c10();
      func_0x01384aa0(uVar1,0);
    }
    if (piVar4[3] == 0) {
      func_0x01384bf4();
    }
    piVar4[4] = iVar2;
    uStack_2c = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
    iVar2 = func_0x01384abc(*puVar6,&uStack_2c);
    if ((iVar2 != 0) && (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar4 + 0x20)), iVar3 == 0)
       ) {
      uVar1 = func_0x01384c10();
      func_0x01384aa0(uVar1,0);
    }
    if ((uint)piVar4[3] < 2) {
      func_0x01384bf4();
    }
    piVar4[5] = iVar2;
    if (*(int *)(**(int **)(_UNK_0289dd8c + 0x289dd18) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2f28(**(undefined4 **)(_UNK_0289dd90 + 0x289dd3c),piVar4,0);
  }
  else {
    uStack_20 = *(undefined4 *)(param_1 + 0x70);
    uStack_1c = *(undefined4 *)(param_1 + 0x74);
    func_0x02b64540(&uStack_20,*(undefined4 *)(iVar2 + 0x1c),0);
    func_0x0289dd94(param_1);
  }
  return;
}



// ===== FAT.ActivityFogScore$$AddListeners RVA 0x288dd94 =====

/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289dd94(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_r4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  pcVar7 = (char *)(_UNK_0289df44 + 0x289dda8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289df48 + 0x289ddbc));
    func_0x01384978(*(undefined4 *)(_UNK_0289df4c + 0x289ddc8));
    func_0x01384978(*(undefined4 *)(_UNK_0289df50 + 0x289ddd4));
    func_0x01384978(*(undefined4 *)(_UNK_0289df54 + 0x289dde0));
    func_0x01384978(*(undefined4 *)(_UNK_0289df58 + 0x289ddec));
    func_0x01384978(*(undefined4 *)(_UNK_0289df5c + 0x289ddf8));
    func_0x01384978(*(undefined4 *)(_UNK_0289df60 + 0x289de04));
    func_0x01384978(*(undefined4 *)(_UNK_0289df64 + 0x289de10));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59cb,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59cb,0);
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
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar4);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0289df68 + 0x289de68) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289df6c + 0x289de84));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0289df70 + 0x289de98));
  func_0x03cc77b8(uVar8,param_1,**(undefined4 **)(_UNK_0289df74 + 0x289deb4),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349bb14(iVar2,uVar8,**(undefined4 **)(_UNK_0289df78 + 0x289ded8));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289df7c + 0x289deec));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0289df80 + 0x289df00));
  func_0x0478dedc(uVar8,param_1,**(undefined4 **)(_UNK_0289df84 + 0x289df1c),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028be4f4 + 0x28be418);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar8,0);
    *pcVar7 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x10cb,0);
  if (iVar5 == 0) {
    piVar3 = (int *)func_0x0487907c(*(undefined4 *)(iVar2 + 8),uVar8,0);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(iVar2 + 8) = 0;
      return;
    }
    iVar5 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar3 == iVar5) {
      *(int **)(iVar2 + 8) = piVar3;
      if (*piVar3 == iVar5) {
        return;
      }
    }
    else {
      unaff_lr = 0x28be4bc;
      unaff_r4 = iVar2;
      register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
    }
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r4;
    func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar3 + 0x20),
                    iVar5);
    uVar1 = *(uint *)((int)register0x00000054 + -0xc);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
      uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
    }
    iVar2 = func_0x01419d2c(uVar1);
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    func_0x01418ff0(iVar2,0);
    if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
    }
    return;
  }
  iVar5 = func_0x0229f13c(0x10cb,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
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
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,uVar8,0);
  iVar6 = *(int *)(iVar5 + 8);
  uVar8 = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = *(int *)(iVar5 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.ActivityFogScore$$SetupFresh RVA 0x288df88 =====

/* WARNING: Possible PIC construction at 0x0289e85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0289e860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289df88(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 *puVar9;
  undefined4 unaff_r8;
  int iVar10;
  undefined4 unaff_lr;
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
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar2 = func_0x0229f06c(0x59b3,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = param_1[0xf];
    iVar2 = *(int *)(iVar2 + 0x2c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar3 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cf6408(iVar2,uVar6,0);
    param_1[0x11] = iVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[0x19] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[0x1a] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    param_1[0x1b] = 0;
    pcVar5 = (char *)(_UNK_0289e280 + 0x289e064);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0289e284 + 0x289e078));
      func_0x01384978(*(undefined4 *)(_UNK_0289e288 + 0x289e084));
      func_0x01384978(*(undefined4 *)(_UNK_0289e28c + 0x289e090));
      func_0x01384978(*(undefined4 *)(_UNK_0289e290 + 0x289e09c));
      func_0x01384978(*(undefined4 *)(_UNK_0289e294 + 0x289e0a8));
      func_0x01384978(*(undefined4 *)(_UNK_0289e298 + 0x289e0b4));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x59b6,0);
    if (iVar2 == 0) {
      iVar2 = param_1[0x11];
      if (*(int *)(**(int **)(_UNK_0289e29c + 0x289e110) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x036a1750(iVar2,**(undefined4 **)(_UNK_0289e2a0 + 0x289e130));
      param_1[0x10] = iVar2;
      if (iVar2 == 0) {
        piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0289e2a4 + 0x289e16c),2);
        iStack_1c = param_1[0x11];
        puVar9 = *(undefined4 **)(_UNK_0289e2a8 + 0x289e184);
        iVar2 = func_0x01384abc(*puVar9,&iStack_1c);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar2 != 0) &&
           (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
          uVar6 = func_0x01384c10();
          func_0x01384aa0(uVar6,0);
        }
        if (piVar7[3] == 0) {
          func_0x01384bf4();
        }
        piVar7[4] = iVar2;
        uStack_20 = func_0x02b449f8(param_1,0);
        iVar2 = func_0x01384abc(*puVar9,&uStack_20);
        if ((iVar2 != 0) &&
           (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
          uVar6 = func_0x01384c10();
          func_0x01384aa0(uVar6,0);
        }
        if ((uint)piVar7[3] < 2) {
          func_0x01384bf4();
        }
        piVar7[5] = iVar2;
        if (*(int *)(**(int **)(_UNK_0289e2ac + 0x289e250) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2f28(**(undefined4 **)(_UNK_0289e2b0 + 0x289e274),piVar7,0);
        return;
      }
      func_0x0289e5b4(param_1);
      pcVar5 = (char *)(_UNK_0289eae8 + 0x289e7c8);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_0289eaec + 0x289e7dc));
        func_0x01384978(*(undefined4 *)(_UNK_0289eaf0 + 0x289e7e8));
        func_0x01384978(*(undefined4 *)(_UNK_0289eaf4 + 0x289e7f4));
        func_0x01384978(*(undefined4 *)(_UNK_0289eaf8 + 0x289e800));
        func_0x01384978(*(undefined4 *)(_UNK_0289eafc + 0x289e80c));
        func_0x01384978(*(undefined4 *)(_UNK_0289eb00 + 0x289e818));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x59b9,0);
      if (iVar2 == 0) {
        func_0x0289ec7c(param_1);
        iVar2 = param_1[0x10];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0x30) != 0) {
          iVar2 = param_1[0x10];
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x30);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar2 + 0xc)) {
            iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb04 + 0x289e8c0));
            func_0x020d6914(iVar2,param_1,0);
            param_1[0x15] = iVar2;
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar2 + 0x4c);
            iVar2 = param_1[0x15];
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x01dbb930(iVar3,iVar2,0);
          }
        }
        iVar2 = param_1[0x10];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar2 + 0x24)) {
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb08 + 0x289e93c));
          func_0x02afb3e0(iVar2,0);
          auStack_28[0] = 0;
          param_1[0x14] = iVar2;
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 8) != 0) {
            iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar2 + 0x14) != 0) {
              iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = *(int *)(iVar2 + 8);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = *(int *)(iVar2 + 0x14);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              func_0x03470a60(iVar2,**(undefined4 **)(_UNK_0289eb10 + 0x289ea28),auStack_28,
                              **(undefined4 **)(_UNK_0289eb0c + 0x289ea1c));
            }
          }
          iVar3 = param_1[0x12];
          iVar10 = param_1[0x14];
          uVar6 = FUN_0289d780(param_1);
          iVar2 = param_1[0x10];
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          piVar7 = *(int **)(_UNK_0289eb14 + 0x289ea60);
          uVar4 = *(undefined4 *)(iVar2 + 0x24);
          iVar2 = *piVar7;
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar1 = auStack_28[0];
          uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x474);
          uStack_44 = FUN_0289d7e4(param_1);
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          uStack_3c = 0x3f;
          uStack_40 = 1;
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_48 = uVar1;
          uStack_50 = uVar4;
          uStack_4c = uVar8;
          func_0x02af6c48(iVar10,iVar3,param_1,uVar6);
        }
        return;
      }
      iVar2 = func_0x0229f13c(0x59b9,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      unaff_lr = 0x289e860;
      unaff_r4 = param_1;
      unaff_r5 = iVar2;
      register0x00000054 = (BADSPACEBASE *)&uStack_50;
    }
    else {
      iVar2 = func_0x0229f13c(0x59b6,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x59b3,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.ActivityFogScore$$Init RVA 0x288e04c =====

/* WARNING: Possible PIC construction at 0x0289e85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0289e860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289e04c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 *puVar9;
  undefined4 unaff_r8;
  int iVar10;
  undefined4 unaff_lr;
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
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_0289e280 + 0x289e064);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289e284 + 0x289e078));
    func_0x01384978(*(undefined4 *)(_UNK_0289e288 + 0x289e084));
    func_0x01384978(*(undefined4 *)(_UNK_0289e28c + 0x289e090));
    func_0x01384978(*(undefined4 *)(_UNK_0289e290 + 0x289e09c));
    func_0x01384978(*(undefined4 *)(_UNK_0289e294 + 0x289e0a8));
    func_0x01384978(*(undefined4 *)(_UNK_0289e298 + 0x289e0b4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59b6,0);
  if (iVar2 == 0) {
    iVar2 = param_1[0x11];
    if (*(int *)(**(int **)(_UNK_0289e29c + 0x289e110) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x036a1750(iVar2,**(undefined4 **)(_UNK_0289e2a0 + 0x289e130));
    param_1[0x10] = iVar2;
    if (iVar2 == 0) {
      piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0289e2a4 + 0x289e16c),2);
      iStack_1c = param_1[0x11];
      puVar9 = *(undefined4 **)(_UNK_0289e2a8 + 0x289e184);
      iVar2 = func_0x01384abc(*puVar9,&iStack_1c);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if (piVar7[3] == 0) {
        func_0x01384bf4();
      }
      piVar7[4] = iVar2;
      uStack_20 = func_0x02b449f8(param_1,0);
      iVar2 = func_0x01384abc(*puVar9,&uStack_20);
      if ((iVar2 != 0) &&
         (iVar3 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x01384bf4();
      }
      piVar7[5] = iVar2;
      if (*(int *)(**(int **)(_UNK_0289e2ac + 0x289e250) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2f28(**(undefined4 **)(_UNK_0289e2b0 + 0x289e274),piVar7,0);
      return;
    }
    func_0x0289e5b4(param_1);
    pcVar5 = (char *)(_UNK_0289eae8 + 0x289e7c8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0289eaec + 0x289e7dc));
      func_0x01384978(*(undefined4 *)(_UNK_0289eaf0 + 0x289e7e8));
      func_0x01384978(*(undefined4 *)(_UNK_0289eaf4 + 0x289e7f4));
      func_0x01384978(*(undefined4 *)(_UNK_0289eaf8 + 0x289e800));
      func_0x01384978(*(undefined4 *)(_UNK_0289eafc + 0x289e80c));
      func_0x01384978(*(undefined4 *)(_UNK_0289eb00 + 0x289e818));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x59b9,0);
    if (iVar2 == 0) {
      func_0x0289ec7c(param_1);
      iVar2 = param_1[0x10];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x30) != 0) {
        iVar2 = param_1[0x10];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x30);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar2 + 0xc)) {
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb04 + 0x289e8c0));
          func_0x020d6914(iVar2,param_1,0);
          param_1[0x15] = iVar2;
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar2 + 0x4c);
          iVar2 = param_1[0x15];
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x01dbb930(iVar3,iVar2,0);
        }
      }
      iVar2 = param_1[0x10];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0x24)) {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb08 + 0x289e93c));
        func_0x02afb3e0(iVar2,0);
        auStack_28[0] = 0;
        param_1[0x14] = iVar2;
        iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 8) != 0) {
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0x14) != 0) {
            iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x14);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x03470a60(iVar2,**(undefined4 **)(_UNK_0289eb10 + 0x289ea28),auStack_28,
                            **(undefined4 **)(_UNK_0289eb0c + 0x289ea1c));
          }
        }
        iVar3 = param_1[0x12];
        iVar10 = param_1[0x14];
        uVar6 = FUN_0289d780(param_1);
        iVar2 = param_1[0x10];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar7 = *(int **)(_UNK_0289eb14 + 0x289ea60);
        uVar4 = *(undefined4 *)(iVar2 + 0x24);
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar1 = auStack_28[0];
        uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x474);
        uStack_44 = FUN_0289d7e4(param_1);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_3c = 0x3f;
        uStack_40 = 1;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_48 = uVar1;
        uStack_50 = uVar4;
        uStack_4c = uVar8;
        func_0x02af6c48(iVar10,iVar3,param_1,uVar6);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x59b9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x289e860;
    unaff_r4 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_50;
  }
  else {
    iVar2 = func_0x0229f13c(0x59b6,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  return;
}



// ===== FAT.ActivityFogScore$$SetupClear RVA 0x288e2b4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289e2b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
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
  
  pcVar6 = (char *)(_UNK_0289e370 + 0x289e2c8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289e374 + 0x289e2dc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59bb,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar5 < 1) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x03409d30(*(undefined4 *)(iRam0484e708 + 0x484e654),0,iVar5,0);
    uVar4 = func_0x03409cd0();
    uVar7 = func_0x03409d30(*(undefined4 *)(iRam0484e70c + 0x484e668));
    func_0x04785e24(uVar4,uVar7,0);
  }
  else {
    if (iVar5 < 0) {
      func_0x03409d30(*(undefined4 *)(iRam0484e710 + 0x484e688),0,iVar5,0);
      uVar4 = func_0x03409cd0();
      uVar7 = *(undefined4 *)(iRam0484e714 + 0x484e69c);
    }
    else {
      iVar2 = func_0x0340a884(iVar1,0);
      if (iVar2 < 1) {
        iVar3 = func_0x048424dc(iVar1);
        if (-iVar2 <= iVar3 - iVar5) {
          (*(code *)&UNK_013c1aa4)(iVar1,-iVar2,iVar5);
          return;
        }
        func_0x03409d30(*(undefined4 *)(_UNK_0484e724 + 0x484e6c8));
        uVar4 = func_0x03409cd0();
        uVar7 = *(undefined4 *)(_UNK_0484e728 + 0x484e6dc);
      }
      else {
        func_0x03409d30(*(undefined4 *)(_UNK_0484e71c + 0x484e6a8));
        uVar4 = func_0x03409cd0();
        uVar7 = *(undefined4 *)(_UNK_0484e720 + 0x484e6bc);
      }
    }
    uVar7 = func_0x03409d30(uVar7);
    func_0x0481f540(uVar4,uVar7,0);
  }
  uVar7 = func_0x03409d30(*(undefined4 *)(_UNK_0484e718 + 0x484e6f8));
  func_0x03409d8c(uVar4,uVar7);
  func_0x03409d9c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.ActivityFogScore$$SaveSetup RVA 0x288e378 =====

/* WARNING: Possible PIC construction at 0x0289e438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0289e468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0289e43c) */
/* WARNING: Removing unreachable block (ram,0x0289e458) */
/* WARNING: Removing unreachable block (ram,0x0289e45c) */
/* WARNING: Removing unreachable block (ram,0x0289e46c) */
/* WARNING: Removing unreachable block (ram,0x0289e488) */
/* WARNING: Removing unreachable block (ram,0x0289e48c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289e378(int param_1,int param_2)

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
  
  pcVar5 = (char *)(_UNK_0289e4a0 + 0x289e390);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289e4a4 + 0x289e3a4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59bc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59bc,0);
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
  uVar4 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x44),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piStack_24 = *(int **)(_UNK_0289e4a8 + 0x289e438);
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



// ===== FAT.ActivityFogScore$$LoadSetup RVA 0x288e4ac =====

/* WARNING: Possible PIC construction at 0x0289e85c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0289e860) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289e4ac(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_r4;
  int iVar4;
  char *pcVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  int iVar10;
  undefined4 unaff_lr;
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
  int *piStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  int *piStack_18;
  
  iVar2 = func_0x0229f06c(0x59bd,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59bd,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  iVar2 = func_0x01c23c30(1,uVar6,0);
  param_1[0x11] = iVar2;
  iVar2 = func_0x01c23c30(2,uVar6,0);
  param_1[0x12] = iVar2;
  iVar2 = func_0x01c23c30(3,uVar6,0);
  param_1[0x13] = iVar2;
  if (param_1[0x11] == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = param_1[0xf];
    iVar2 = *(int *)(iVar2 + 0x2c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x18);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01cf6408(iVar2,uVar6,0);
    param_1[0x11] = iVar2;
  }
  pcVar5 = (char *)(_UNK_0289e280 + 0x289e064);
  piStack_18 = unaff_r4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289e284 + 0x289e078));
    func_0x01384978(*(undefined4 *)(_UNK_0289e288 + 0x289e084));
    func_0x01384978(*(undefined4 *)(_UNK_0289e28c + 0x289e090));
    func_0x01384978(*(undefined4 *)(_UNK_0289e290 + 0x289e09c));
    func_0x01384978(*(undefined4 *)(_UNK_0289e294 + 0x289e0a8));
    func_0x01384978(*(undefined4 *)(_UNK_0289e298 + 0x289e0b4));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59b6,0);
  if (iVar2 == 0) {
    iVar2 = param_1[0x11];
    if (*(int *)(**(int **)(_UNK_0289e29c + 0x289e110) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x036a1750(iVar2,**(undefined4 **)(_UNK_0289e2a0 + 0x289e130));
    param_1[0x10] = iVar2;
    if (iVar2 == 0) {
      piVar7 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0289e2a4 + 0x289e16c),2);
      iStack_1c = param_1[0x11];
      puVar9 = *(undefined4 **)(_UNK_0289e2a8 + 0x289e184);
      iVar2 = func_0x01384abc(*puVar9,&iStack_1c);
      if (piVar7 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar2 != 0) &&
         (iVar4 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if (piVar7[3] == 0) {
        func_0x01384bf4();
      }
      piVar7[4] = iVar2;
      uStack_20 = func_0x02b449f8(param_1,0);
      iVar2 = func_0x01384abc(*puVar9,&uStack_20);
      if ((iVar2 != 0) &&
         (iVar4 = func_0x01384ab8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar4 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if ((uint)piVar7[3] < 2) {
        func_0x01384bf4();
      }
      piVar7[5] = iVar2;
      if (*(int *)(**(int **)(_UNK_0289e2ac + 0x289e250) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2f28(**(undefined4 **)(_UNK_0289e2b0 + 0x289e274),piVar7,0);
      return;
    }
    func_0x0289e5b4(param_1);
    piStack_24 = piStack_18;
    pcVar5 = (char *)(_UNK_0289eae8 + 0x289e7c8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0289eaec + 0x289e7dc));
      func_0x01384978(*(undefined4 *)(_UNK_0289eaf0 + 0x289e7e8));
      func_0x01384978(*(undefined4 *)(_UNK_0289eaf4 + 0x289e7f4));
      func_0x01384978(*(undefined4 *)(_UNK_0289eaf8 + 0x289e800));
      func_0x01384978(*(undefined4 *)(_UNK_0289eafc + 0x289e80c));
      func_0x01384978(*(undefined4 *)(_UNK_0289eb00 + 0x289e818));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x59b9,0);
    if (iVar2 == 0) {
      func_0x0289ec7c(param_1);
      iVar2 = param_1[0x10];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0x30) != 0) {
        iVar2 = param_1[0x10];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x30);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar2 + 0xc)) {
          iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb04 + 0x289e8c0));
          func_0x020d6914(iVar2,param_1,0);
          param_1[0x15] = iVar2;
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar2 + 0x4c);
          iVar2 = param_1[0x15];
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x01dbb930(iVar4,iVar2,0);
        }
      }
      iVar2 = param_1[0x10];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0x24)) {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb08 + 0x289e93c));
        func_0x02afb3e0(iVar2,0);
        uStack_28 = 0;
        param_1[0x14] = iVar2;
        iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 8) != 0) {
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0x14) != 0) {
            iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x14);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x03470a60(iVar2,**(undefined4 **)(_UNK_0289eb10 + 0x289ea28),&uStack_28,
                            **(undefined4 **)(_UNK_0289eb0c + 0x289ea1c));
          }
        }
        iVar4 = param_1[0x12];
        iVar10 = param_1[0x14];
        uVar6 = FUN_0289d780(param_1);
        iVar2 = param_1[0x10];
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar7 = *(int **)(_UNK_0289eb14 + 0x289ea60);
        uVar3 = *(undefined4 *)(iVar2 + 0x24);
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar1 = uStack_28;
        uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x474);
        uStack_44 = FUN_0289d7e4(param_1);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_3c = 0x3f;
        uStack_40 = 1;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_48 = uVar1;
        uStack_50 = uVar3;
        uStack_4c = uVar8;
        func_0x02af6c48(iVar10,iVar4,param_1,uVar6);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x59b9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x289e860;
    piVar7 = param_1;
    unaff_r5 = iVar2;
    register0x00000054 = (BADSPACEBASE *)&uStack_50;
  }
  else {
    iVar2 = func_0x0229f13c(0x59b6,0);
    piVar7 = piStack_18;
    if (iVar2 == 0) {
      func_0x01384bf0();
      piVar7 = piStack_18;
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int **)((int)register0x00000054 + -0x18) = piVar7;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar4 = *(int *)(iVar2 + 0x10);
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
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar4,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar3);
  return;
}



// ===== FAT.ActivityFogScore$$RefreshDisplayScore RVA 0x288e5b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289e5b4(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_0289e7a0 + 0x289e5c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289e7a4 + 0x289e5dc));
    func_0x01384978(*(undefined4 *)(_UNK_0289e7a8 + 0x289e5e8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59b7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59b7,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    unaff_r5 = *(int *)(iVar1 + 0x2c);
  }
  if ((iVar1 != 0 && unaff_r5 != 0) && (0 < *(int *)(unaff_r5 + 0xc))) {
    iVar5 = 0;
    puVar7 = *(undefined4 **)(_UNK_0289e7ac + 0x289e678);
    iVar1 = 0;
    do {
      iVar2 = func_0x0364c9b8(unaff_r5,iVar5,*puVar7);
      iVar2 = iVar2 + iVar1;
      if (*(int *)(param_1 + 0x48) < iVar2) {
        uVar6 = *puVar7;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x48) - iVar1;
        goto LAB_0289e798;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar2;
    } while (iVar5 < *(int *)(unaff_r5 + 0xc));
    iVar1 = func_0x028a05f0(param_1);
    if (iVar1 == 0) {
      uVar6 = func_0x0364c9b8(unaff_r5,*(int *)(unaff_r5 + 0xc) + -1,*puVar7);
      iVar5 = *(int *)(unaff_r5 + 0xc);
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
      uVar6 = *puVar7;
      iVar5 = iVar5 + -1;
    }
    else {
      iVar1 = func_0x028a06e0(param_1);
      if (iVar1 < 1) {
LAB_0289e77c:
        uVar6 = 0;
        goto LAB_0289e64c;
      }
      iVar5 = *(int *)(param_1 + 0x40);
      func_0x01458344(*(int *)(param_1 + 0x48) - iVar2,iVar1);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      unaff_r5 = *(int *)(iVar5 + 0x1c);
      iVar5 = 0;
      iVar1 = 0;
      while( true ) {
        if (unaff_r5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(unaff_r5 + 0xc) <= iVar5) goto LAB_0289e77c;
        iVar2 = func_0x0364c9b8(unaff_r5,iVar5,*puVar7);
        if (extraout_r1 < iVar2 + iVar1) break;
        iVar5 = iVar5 + 1;
        iVar1 = iVar2 + iVar1;
      }
      *(int *)(param_1 + 0x5c) = extraout_r1 - iVar1;
      uVar6 = *puVar7;
    }
LAB_0289e798:
    uVar6 = func_0x0364c9b8(unaff_r5,iVar5,uVar6);
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x48);
LAB_0289e64c:
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  return;
}



// ===== FAT.ActivityFogScore$$RegisterScoreSources RVA 0x288e7b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289e7b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0289eae8 + 0x289e7c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289eaec + 0x289e7dc));
    func_0x01384978(*(undefined4 *)(_UNK_0289eaf0 + 0x289e7e8));
    func_0x01384978(*(undefined4 *)(_UNK_0289eaf4 + 0x289e7f4));
    func_0x01384978(*(undefined4 *)(_UNK_0289eaf8 + 0x289e800));
    func_0x01384978(*(undefined4 *)(_UNK_0289eafc + 0x289e80c));
    func_0x01384978(*(undefined4 *)(_UNK_0289eb00 + 0x289e818));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59b9,0);
  if (iVar2 == 0) {
    func_0x0289ec7c(param_1);
    iVar2 = param_1[0x10];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0x30) != 0) {
      iVar2 = param_1[0x10];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb04 + 0x289e8c0));
        func_0x020d6914(iVar2,param_1,0);
        param_1[0x15] = iVar2;
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar2 + 0x4c);
        iVar2 = param_1[0x15];
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbb930(iVar6,iVar2,0);
      }
    }
    iVar2 = param_1[0x10];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0x24)) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0289eb08 + 0x289e93c));
      func_0x02afb3e0(iVar2,0);
      uStack_28 = 0;
      param_1[0x14] = iVar2;
      iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 8) != 0) {
        iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0x14) != 0) {
          iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x14);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x03470a60(iVar2,**(undefined4 **)(_UNK_0289eb10 + 0x289ea28),&uStack_28,
                          **(undefined4 **)(_UNK_0289eb0c + 0x289ea1c));
        }
      }
      iVar6 = param_1[0x12];
      iVar10 = param_1[0x14];
      uVar3 = FUN_0289d780(param_1);
      iVar2 = param_1[0x10];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_0289eb14 + 0x289ea60);
      uVar9 = *(undefined4 *)(iVar2 + 0x24);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar7;
      }
      uVar1 = uStack_28;
      uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x474);
      uVar4 = FUN_0289d7e4(param_1);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      func_0x02af6c48(iVar10,iVar6,param_1,uVar3,uVar9,uVar8,uVar1,uVar4,1,0x3f,0,0,0,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x59b9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFogScore$$WhenActive RVA 0x288eb18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289eb18(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  
  iVar1 = func_0x0229f06c(0x59be,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59be,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = func_0x0229f06c(0x59bf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59bf,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4);
    return;
  }
  iVar1 = func_0x0289f430(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar7 = '\x01';
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
      pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar7 = '\x01';
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



// ===== FAT.ActivityFogScore$$TryEndActivityIfComplete RVA 0x288eb78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289eb78(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar1 = func_0x0229f06c(0x59bf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59bf,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x0289f430(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_02b49454 + 0x2b49370);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b49458 + 0x2b49384),param_1,0,0);
    *pcVar7 = '\x01';
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
      pcVar7 = (char *)(_UNK_02b40ad0 + 0x2b4097c);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad4 + 0x2b40990));
        func_0x01384978(*(undefined4 *)(_UNK_02b40ad8 + 0x2b4099c));
        func_0x01384978(*(undefined4 *)(_UNK_02b40adc + 0x2b409a8));
        *pcVar7 = '\x01';
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



// ===== FAT.ActivityFogScore$$WhenEnd RVA 0x288ec14 =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289ec14(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  iVar2 = func_0x0229f06c(0x59c0,0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    func_0x0289ec7c(param_1);
    pcVar7 = (char *)(_UNK_0289eee8 + 0x289ed4c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0289eeec + 0x289ed60));
      func_0x01384978(*(undefined4 *)(_UNK_0289eef0 + 0x289ed6c));
      func_0x01384978(*(undefined4 *)(_UNK_0289eef4 + 0x289ed78));
      func_0x01384978(*(undefined4 *)(_UNK_0289eef8 + 0x289ed84));
      func_0x01384978(*(undefined4 *)(_UNK_0289eefc + 0x289ed90));
      func_0x01384978(*(undefined4 *)(_UNK_0289ef00 + 0x289ed9c));
      func_0x01384978(*(undefined4 *)(_UNK_0289ef04 + 0x289eda8));
      func_0x01384978(*(undefined4 *)(_UNK_0289ef08 + 0x289edb4));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x59c1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_0289ef0c + 0x289ee0c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289ef10 + 0x289ee28));
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0289ef14 + 0x289ee3c));
      func_0x03cc77b8(uVar8,param_1,**(undefined4 **)(_UNK_0289ef18 + 0x289ee58),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0349bd6c(iVar2,uVar8,**(undefined4 **)(_UNK_0289ef1c + 0x289ee7c));
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289ef20 + 0x289ee90));
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0289ef24 + 0x289eea4));
      func_0x0478dedc(iVar6,param_1,**(undefined4 **)(_UNK_0289ef28 + 0x289eec0),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_028bebc4 + 0x28beae0);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar6,0);
        *pcVar7 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x10cd,0);
      if (iVar3 == 0) {
        if (iVar6 != 0) {
          piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
          if (piVar4 != (int *)0x0) {
            iVar6 = **(int **)(_UNK_028bebcc + 0x28beb78);
            if (*piVar4 == iVar6) {
              *(int **)(iVar2 + 8) = piVar4;
              if (*piVar4 == iVar6) {
                return;
              }
            }
            else {
              unaff_lr = 0x28beb8c;
              unaff_r4 = iVar2;
              register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
            }
            *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
            *(int *)((int)register0x00000054 + -8) = unaff_r4;
            func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                            *(undefined4 *)(*piVar4 + 0x20),iVar6);
            uVar1 = *(uint *)((int)register0x00000054 + -0xc);
            if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
              uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
            }
            iVar2 = func_0x01419d2c(uVar1);
            *(undefined4 *)(iVar2 + 0x1c) = 0;
            *(undefined4 *)(iVar2 + 0x20) = 0;
            func_0x01418ff0(iVar2,0);
            if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
              func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
            }
            return;
          }
          *(undefined4 *)(iVar2 + 8) = 0;
        }
        return;
      }
      iVar3 = func_0x0229f13c(0x10cd,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar6,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar2,0);
      func_0x01485278(&uStack_38,iVar6,0);
      iVar6 = *(int *)(iVar3 + 8);
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      iVar2 = *(int *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 3;
      if (iVar2 == 0) {
        uVar5 = 2;
      }
      func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
      return;
    }
    iVar2 = func_0x0229f13c(0x59c1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x59c0,0);
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
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5);
  return;
}



// ===== FAT.ActivityFogScore$$UnregisterScoreSources RVA 0x288ec7c =====

void FUN_0289ec7c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x59ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59ba,0);
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
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x02af7520(*(int *)(param_1 + 0x50),0);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}



// ===== FAT.ActivityFogScore$$RemoveListeners RVA 0x288ed38 =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289ed38(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  pcVar7 = (char *)(_UNK_0289eee8 + 0x289ed4c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289eeec + 0x289ed60));
    func_0x01384978(*(undefined4 *)(_UNK_0289eef0 + 0x289ed6c));
    func_0x01384978(*(undefined4 *)(_UNK_0289eef4 + 0x289ed78));
    func_0x01384978(*(undefined4 *)(_UNK_0289eef8 + 0x289ed84));
    func_0x01384978(*(undefined4 *)(_UNK_0289eefc + 0x289ed90));
    func_0x01384978(*(undefined4 *)(_UNK_0289ef00 + 0x289ed9c));
    func_0x01384978(*(undefined4 *)(_UNK_0289ef04 + 0x289eda8));
    func_0x01384978(*(undefined4 *)(_UNK_0289ef08 + 0x289edb4));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59c1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59c1,0);
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
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(**(int **)(_UNK_0289ef0c + 0x289ee0c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289ef10 + 0x289ee28));
  uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0289ef14 + 0x289ee3c));
  func_0x03cc77b8(uVar8,param_1,**(undefined4 **)(_UNK_0289ef18 + 0x289ee58),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349bd6c(iVar2,uVar8,**(undefined4 **)(_UNK_0289ef1c + 0x289ee7c));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289ef20 + 0x289ee90));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0289ef24 + 0x289eea4));
  func_0x0478dedc(iVar6,param_1,**(undefined4 **)(_UNK_0289ef28 + 0x289eec0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_028bebc4 + 0x28beae0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar6,0);
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x10cd,0);
  if (iVar3 == 0) {
    if (iVar6 != 0) {
      piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
      if (piVar4 != (int *)0x0) {
        iVar6 = **(int **)(_UNK_028bebcc + 0x28beb78);
        if (*piVar4 == iVar6) {
          *(int **)(iVar2 + 8) = piVar4;
          if (*piVar4 == iVar6) {
            return;
          }
        }
        else {
          unaff_lr = 0x28beb8c;
          unaff_r4 = iVar2;
          register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
        }
        *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
        *(int *)((int)register0x00000054 + -8) = unaff_r4;
        func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                        *(undefined4 *)(*piVar4 + 0x20),iVar6);
        uVar1 = *(uint *)((int)register0x00000054 + -0xc);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
          uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
        }
        iVar2 = func_0x01419d2c(uVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x20) = 0;
        func_0x01418ff0(iVar2,0);
        if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
          func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
        }
        return;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    return;
  }
  iVar3 = func_0x0229f13c(0x10cd,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar6,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar6,0);
  iVar6 = *(int *)(iVar3 + 8);
  uVar8 = *(undefined4 *)(iVar3 + 0xc);
  iVar2 = *(int *)(iVar3 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
  return;
}



// ===== FAT.ActivityFogScore$$WhenReset RVA 0x288ef2c =====

/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289ef2c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 unaff_lr;
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
  
  iVar2 = func_0x0229f06c(0x59c7,0);
  if (iVar2 == 0) {
    FUN_0289ec7c(param_1);
    pcVar7 = (char *)(_UNK_0289eee8 + 0x289ed4c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0289eeec + 0x289ed60));
      func_0x01384978(*(undefined4 *)(_UNK_0289eef0 + 0x289ed6c));
      func_0x01384978(*(undefined4 *)(_UNK_0289eef4 + 0x289ed78));
      func_0x01384978(*(undefined4 *)(_UNK_0289eef8 + 0x289ed84));
      func_0x01384978(*(undefined4 *)(_UNK_0289eefc + 0x289ed90));
      func_0x01384978(*(undefined4 *)(_UNK_0289ef00 + 0x289ed9c));
      func_0x01384978(*(undefined4 *)(_UNK_0289ef04 + 0x289eda8));
      func_0x01384978(*(undefined4 *)(_UNK_0289ef08 + 0x289edb4));
      *pcVar7 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x59c1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_0289ef0c + 0x289ee0c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289ef10 + 0x289ee28));
      uVar8 = func_0x01384be4(**(undefined4 **)(_UNK_0289ef14 + 0x289ee3c));
      func_0x03cc77b8(uVar8,param_1,**(undefined4 **)(_UNK_0289ef18 + 0x289ee58),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0349bd6c(iVar2,uVar8,**(undefined4 **)(_UNK_0289ef1c + 0x289ee7c));
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_0289ef20 + 0x289ee90));
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_0289ef24 + 0x289eea4));
      func_0x0478dedc(iVar6,param_1,**(undefined4 **)(_UNK_0289ef28 + 0x289eec0),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_028bebc4 + 0x28beae0);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),iVar6,0);
        *pcVar7 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x10cd,0);
      if (iVar3 == 0) {
        if (iVar6 != 0) {
          piVar4 = (int *)func_0x0487929c(*(undefined4 *)(iVar2 + 8),iVar6,0);
          if (piVar4 != (int *)0x0) {
            iVar6 = **(int **)(_UNK_028bebcc + 0x28beb78);
            if (*piVar4 == iVar6) {
              *(int **)(iVar2 + 8) = piVar4;
              if (*piVar4 == iVar6) {
                return;
              }
            }
            else {
              unaff_lr = 0x28beb8c;
              unaff_r4 = iVar2;
              register0x00000054 = (BADSPACEBASE *)&stack0xfffffff0;
            }
            *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
            *(int *)((int)register0x00000054 + -8) = unaff_r4;
            func_0x0142996c((undefined1 *)((int)register0x00000054 + -0x14),
                            *(undefined4 *)(*piVar4 + 0x20),iVar6);
            uVar1 = *(uint *)((int)register0x00000054 + -0xc);
            if ((*(byte *)((int)register0x00000054 + -0x14) & 1) == 0) {
              uVar1 = (uint)((int)register0x00000054 + -0x14) | 1;
            }
            iVar2 = func_0x01419d2c(uVar1);
            *(undefined4 *)(iVar2 + 0x1c) = 0;
            *(undefined4 *)(iVar2 + 0x20) = 0;
            func_0x01418ff0(iVar2,0);
            if ((*(byte *)((int)register0x00000054 + -0x14) & 1) != 0) {
              func_0x0148d9d4(*(undefined4 *)((int)register0x00000054 + -0xc));
            }
            return;
          }
          *(undefined4 *)(iVar2 + 8) = 0;
        }
        return;
      }
      iVar3 = func_0x0229f13c(0x10cd,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,iVar6,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar3 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
      }
      func_0x01485278(&uStack_38,iVar2,0);
      func_0x01485278(&uStack_38,iVar6,0);
      iVar6 = *(int *)(iVar3 + 8);
      uVar8 = *(undefined4 *)(iVar3 + 0xc);
      iVar2 = *(int *)(iVar3 + 0x10);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 3;
      if (iVar2 == 0) {
        uVar5 = 2;
      }
      func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
      return;
    }
    iVar2 = func_0x0229f13c(0x59c1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x59c7,0);
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
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5);
  return;
}



// ===== FAT.ActivityFogScore$$Open RVA 0x288ef8c =====

/* WARNING: Possible PIC construction at 0x0289f1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0289f1c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289ef8c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  int unaff_r5;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 *puVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_0289f158 + 0x289efa4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289f15c + 0x289efb8));
    func_0x01384978(*(undefined4 *)(_UNK_0289f160 + 0x289efc4));
    func_0x01384978(*(undefined4 *)(_UNK_0289f164 + 0x289efd0));
    func_0x01384978(*(undefined4 *)(_UNK_0289f168 + 0x289efdc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59c8,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if ((iVar1 == 0) || (iVar1 = func_0x02b48934(param_1,0), iVar1 == 0)) {
      uStack_19 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
      puVar7 = *(undefined4 **)(_UNK_0289f16c + 0x289f090);
      uVar6 = func_0x01384abc(*puVar7,&uStack_19);
      uStack_1a = func_0x02b48934(param_1,0);
      uVar4 = func_0x01384abc(*puVar7,&uStack_1a);
      func_0x02b489c0(&uStack_38,param_1,0);
      uStack_20 = uStack_30;
      uStack_28 = uStack_38;
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_0289f170 + 0x289f0ec),&uStack_38);
      uVar6 = func_0x0467277c(**(undefined4 **)(_UNK_0289f174 + 0x289f11c),uVar6,uVar4,uVar2,0);
      if (*(int *)(**(int **)(_UNK_0289f178 + 0x289f134) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar6,0);
      return;
    }
    iVar1 = func_0x0229f06c(0x59c9,0);
    if (iVar1 == 0) {
      func_0x02b64708(&stack0xffffffe8,param_1,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x59c9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x289f1c8;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe8;
  }
  else {
    iVar1 = func_0x0229f13c(0x59c8,0);
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
  return;
}



// ===== FAT.ActivityFogScore$$OpenUIMain RVA 0x288f17c =====

void FUN_0289f17c(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x59c9,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_1 + 0x70);
    uStack_14 = *(undefined4 *)(param_1 + 0x74);
    func_0x02b64708(&uStack_18,param_1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x59c9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFogScore$$TryAddScore RVA 0x288f1ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289f1ec(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0289f404 + 0x289f20c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289f408 + 0x289f220));
    func_0x01384978(*(undefined4 *)(_UNK_0289f40c + 0x289f22c));
    func_0x01384978(*(undefined4 *)(_UNK_0289f410 + 0x289f238));
    func_0x01384978(*(undefined4 *)(_UNK_0289f414 + 0x289f244));
    func_0x01384978(*(undefined4 *)(_UNK_0289f418 + 0x289f250));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a2,0);
  if (iVar1 == 0) {
    if ((((0 < param_2) &&
         (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)),
         iVar1 != 0)) && (iVar1 = func_0x02b48934(param_1,0), iVar1 != 0)) &&
       (iVar1 = func_0x0289f430(param_1), iVar1 == 0)) {
      iVar1 = param_1[0x12];
      iVar6 = iVar1 + param_2;
      if (param_1[0x14] != 0) {
        func_0x02af96e4(param_1[0x14],iVar6,0);
      }
      uVar2 = FUN_0289d780(param_1);
      if (param_3 == 0) {
        piVar4 = *(int **)(_UNK_0289f41c + 0x289f330);
        iVar3 = *piVar4;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar4;
        }
        param_3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x474);
      }
      func_0x019a4b9c(uVar2,param_2,iVar6,param_3,0);
      if (*(int *)(**(int **)(_UNK_0289f420 + 0x289f374) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_0289f424 + 0x289f390));
      uVar2 = FUN_0289d780(param_1);
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      func_0x03923edc(&uStack_30,iVar1,iVar6,uVar2,**(undefined4 **)(_UNK_0289f428 + 0x289f3b8));
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x0349be40(iVar3,uStack_30,uStack_2c,uStack_28,
                      **(undefined4 **)(_UNK_0289f42c + 0x289f3f0));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7a2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityFogScore$$HasComplete RVA 0x288f430 =====

undefined4 FUN_0289f430(int param_1)

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
  iVar1 = func_0x0229f06c(0x7a3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a3,0);
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
  if ((*(int *)(param_1 + 0x40) != 0) && (iVar1 = func_0x028a05f0(param_1), iVar1 == 0)) {
    iVar3 = *(int *)(param_1 + 0x4c);
    iVar1 = func_0x0289fd60(param_1);
    uVar4 = 0;
    if (iVar1 <= iVar3) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.ActivityFogScore$$OnUpdateScore RVA 0x288f4bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289f4bc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x59c2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59c2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x021de740(iVar2,param_1,param_2,param_3);
    return;
  }
  iVar2 = FUN_0289d780(param_1);
  if (param_4 != iVar2) {
    return;
  }
  iVar2 = FUN_0289f430(param_1);
  if (iVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  func_0x0289f56c(param_1);
  pcVar4 = (char *)(_UNK_0289e7a0 + 0x289e5c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289e7a4 + 0x289e5dc));
    func_0x01384978(*(undefined4 *)(_UNK_0289e7a8 + 0x289e5e8));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59b7,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59b7,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
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
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) {
    unaff_r5 = *(int *)(iVar2 + 0x2c);
  }
  if ((iVar2 != 0 && unaff_r5 != 0) && (0 < *(int *)(unaff_r5 + 0xc))) {
    iVar5 = 0;
    puVar7 = *(undefined4 **)(_UNK_0289e7ac + 0x289e678);
    iVar2 = 0;
    do {
      iVar1 = func_0x0364c9b8(unaff_r5,iVar5,*puVar7);
      iVar1 = iVar1 + iVar2;
      if (*(int *)(param_1 + 0x48) < iVar1) {
        uVar6 = *puVar7;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x48) - iVar2;
        goto LAB_0289e798;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar1;
    } while (iVar5 < *(int *)(unaff_r5 + 0xc));
    iVar2 = func_0x028a05f0(param_1);
    if (iVar2 == 0) {
      uVar6 = func_0x0364c9b8(unaff_r5,*(int *)(unaff_r5 + 0xc) + -1,*puVar7);
      iVar5 = *(int *)(unaff_r5 + 0xc);
      *(undefined4 *)(param_1 + 0x5c) = uVar6;
      uVar6 = *puVar7;
      iVar5 = iVar5 + -1;
    }
    else {
      iVar2 = func_0x028a06e0(param_1);
      if (iVar2 < 1) {
LAB_0289e77c:
        uVar6 = 0;
        goto LAB_0289e64c;
      }
      iVar5 = *(int *)(param_1 + 0x40);
      func_0x01458344(*(int *)(param_1 + 0x48) - iVar1,iVar2);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      unaff_r5 = *(int *)(iVar5 + 0x1c);
      iVar5 = 0;
      iVar2 = 0;
      while( true ) {
        if (unaff_r5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(unaff_r5 + 0xc) <= iVar5) goto LAB_0289e77c;
        iVar1 = func_0x0364c9b8(unaff_r5,iVar5,*puVar7);
        if (extraout_r1 < iVar1 + iVar2) break;
        iVar5 = iVar5 + 1;
        iVar2 = iVar1 + iVar2;
      }
      *(int *)(param_1 + 0x5c) = extraout_r1 - iVar2;
      uVar6 = *puVar7;
    }
LAB_0289e798:
    uVar6 = func_0x0364c9b8(unaff_r5,iVar5,uVar6);
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x48);
LAB_0289e64c:
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  return;
}



// ===== FAT.ActivityFogScore$$SettleMilestones RVA 0x288f56c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289f56c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  char cStack_25;
  
  pcVar9 = (char *)(_UNK_0289f9fc + 0x289f584);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289fa00 + 0x289f598));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa04 + 0x289f5a4));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa08 + 0x289f5b0));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa0c + 0x289f5bc));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa10 + 0x289f5c8));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa14 + 0x289f5d4));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa18 + 0x289f5e0));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa1c + 0x289f5ec));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa20 + 0x289f5f8));
    func_0x01384978(*(undefined4 *)(_UNK_0289fa24 + 0x289f604));
    *pcVar9 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  cStack_25 = '\0';
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x59c3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0289fb64(param_1,*(undefined4 *)(param_1 + 0x48));
    iVar2 = func_0x0289fd60(param_1);
    iVar3 = *(int *)(param_1 + 0x4c);
    if (iVar3 < iVar1) {
      puVar13 = *(undefined4 **)(_UNK_0289fa28 + 0x289f6a0);
      do {
        iVar3 = iVar3 + 1;
        iVar4 = func_0x0289fe54(param_1,iVar3,&cStack_25);
        if (iVar4 != 0) {
          func_0x0328fe1c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0289fa2c + 0x289f6cc));
          uStack_38 = uStack_48;
          uStack_34 = uStack_44;
          uStack_30 = uStack_40;
          iStack_2c = iStack_3c;
          while (iVar5 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_0289fa44 + 0x289f6f0)),
                iVar6 = iStack_2c, iVar5 != 0) {
            iVar5 = func_0x01c24918(0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar5 + 0x40);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar10 = *(undefined4 *)(iVar6 + 8);
            uVar14 = *(undefined4 *)(iVar6 + 0xc);
            iVar6 = **(int **)(_UNK_0289fa30 + 0x289f73c);
            if (*(int *)(iVar6 + 0x74) == 0) {
              func_0x01384ab4();
              iVar6 = **(int **)(_UNK_0289fa34 + 0x289f760);
            }
            uVar11 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x474);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar10 = func_0x01cdcbac(iVar5,uVar10,uVar14,uVar11,0,0,0,0x114,
                                     **(undefined4 **)(_UNK_0289fa38 + 0x289f780),
                                     **(undefined4 **)(_UNK_0289fa3c + 0x289f78c),0);
            iVar6 = *(int *)(param_1 + 0x58);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar6 + 8);
            uVar8 = *(uint *)(iVar6 + 0xc);
            piVar7 = *(int **)(_UNK_0289fa40 + 0x289f7f4);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar12 = *piVar7;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            if (uVar8 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar8 + 1;
              *(undefined4 *)(iVar5 + uVar8 * 4 + 0x10) = uVar10;
            }
            else {
              func_0x0328f170(iVar6,uVar10,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_0289fa48 + 0x289f848));
          if ((cStack_25 != '\0') && (0 < *(int *)(iVar4 + 0xc))) {
            iVar6 = func_0x0328eea8(iVar4,0,*puVar13);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar10 = *puVar13;
            *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar6 + 8);
            iVar4 = func_0x0328eea8(iVar4,0,uVar10);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar4 + 0xc);
          }
        }
        uVar10 = func_0x02b449f8(param_1,0);
        uVar14 = func_0x02b4762c(param_1,0);
        uVar11 = func_0x02b4429c(param_1,0);
        iVar4 = *(int *)(param_1 + 0x40);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x019a6e9c(uVar10,uVar14,uVar11,iVar3,iVar2,*(undefined4 *)(iVar4 + 0x20),
                        iVar3 == iVar2,cStack_25,0);
        iVar3 = *(int *)(param_1 + 0x4c) + 1;
        *(int *)(param_1 + 0x4c) = iVar3;
      } while (iVar3 < iVar1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x59c3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFogScore$$OnUpdateScoreByShop RVA 0x288fa54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289fa54(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_0289fb48 + 0x289fa68);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289fb4c + 0x289fa7c));
    func_0x01384978(*(undefined4 *)(_UNK_0289fb50 + 0x289fa88));
    func_0x01384978(*(undefined4 *)(_UNK_0289fb54 + 0x289fa94));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59c6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59c6,0);
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
    return;
  }
  iVar1 = FUN_0289f430(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_0289fb58 + 0x289fafc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_0289fb5c + 0x289fb18));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_1,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ActivityFogScore$$EligibleOrdinal RVA 0x288fb64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0289fb64(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
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
  
  pcVar4 = (char *)(_UNK_0289fd4c + 0x289fb80);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289fd50 + 0x289fb94));
    func_0x01384978(*(undefined4 *)(_UNK_0289fd54 + 0x289fba0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59c4,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      iVar6 = *(int *)(*(int *)(param_1 + 0x40) + 0x2c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(iVar6 + 0xc);
      iVar10 = 0;
      if (iVar12 < 1) {
        iVar5 = 0;
        iVar1 = iVar10;
      }
      else {
        iVar5 = 0;
        puVar7 = *(undefined4 **)(_UNK_0289fd58 + 0x289fc34);
        do {
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x0364c9b8(iVar6,iVar10,*puVar7);
          iVar5 = iVar1 + iVar5;
          iVar1 = iVar10;
        } while ((iVar5 <= param_2) && (iVar10 = iVar10 + 1, iVar1 = iVar12, iVar12 != iVar10));
      }
      iVar6 = func_0x028a05f0(param_1);
      if ((iVar12 <= iVar1) &&
         ((iVar6 != 0 && (iVar6 = func_0x028a06e0(param_1), iVar1 = iVar12, 0 < iVar6)))) {
        iVar1 = func_0x01457ae8(param_2 - iVar5,iVar6);
        iVar10 = *(int *)(param_1 + 0x40);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar10 = *(int *)(iVar10 + 0x1c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar13 = *(int *)(iVar10 + 0xc);
        if (iVar13 < 1) {
          iVar2 = 0;
        }
        else {
          iVar11 = 0;
          iVar8 = 0;
          puVar7 = *(undefined4 **)(_UNK_0289fd5c + 0x289fcf4);
          do {
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x0364c9b8(iVar10,iVar11,*puVar7);
            iVar8 = iVar2 + iVar8;
            iVar2 = iVar11;
          } while ((iVar8 <= (param_2 - iVar5) - iVar1 * iVar6) &&
                  (iVar11 = iVar11 + 1, iVar2 = iVar13, iVar13 != iVar11));
        }
        iVar1 = iVar13 * iVar1 + iVar12 + iVar2;
      }
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x59c4,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar6,uVar9,&uStack_38,uVar3,0,0);
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.ActivityFogScore$$get_StandardCount RVA 0x288fd60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0289fd60(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_0289fe40 + 0x289fd78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289fe44 + 0x289fd8c));
    func_0x01384978(*(undefined4 *)(_UNK_0289fe48 + 0x289fd98));
    func_0x01384978(*(undefined4 *)(_UNK_0289fe4c + 0x289fda4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7a6,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x2c);
    }
    uStack_14 = 0;
    if (iVar3 != 0 && iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 0xc),
                      **(undefined4 **)(_UNK_0289fe50 + 0x289fe18));
    }
    return uStack_14;
  }
  iVar1 = func_0x0229f13c(0x7a6,0);
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



// ===== FAT.ActivityFogScore$$RewardForOrdinal RVA 0x288fe54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0289fe54(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int extraout_r1;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
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
  
  pcVar9 = (char *)(_UNK_0289ffec + 0x289fe74);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0289fff0 + 0x289fe88));
    func_0x01384978(*(undefined4 *)(_UNK_0289fff4 + 0x289fe94));
    func_0x01384978(*(undefined4 *)(_UNK_0289fff8 + 0x289fea0));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59c5,0);
  if (iVar2 == 0) {
    *param_3 = 0;
    if ((0 < param_2) && (*(int *)(param_1 + 0x40) != 0)) {
      uVar4 = FUN_0289fd60(param_1);
      if (param_2 <= (int)uVar4) {
        iVar2 = *(int *)(param_1 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x28);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        param_2 = param_2 + -1;
        puVar5 = *(undefined4 **)(_UNK_0289fffc + 0x289ffb0);
LAB_0289ffac:
        iVar2 = func_0x03653d1c(iVar2,param_2,*puVar5);
        if (*(int *)(**(int **)(_UNK_028a0000 + 0x289ffc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        pcVar9 = (char *)(_UNK_02565db8 + 0x2565ca0);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02565dbc + 0x2565cb4),0);
          func_0x01384978(*(undefined4 *)(_UNK_02565dc0 + 0x2565cc0));
          func_0x01384978(*(undefined4 *)(_UNK_02565dc4 + 0x2565ccc));
          func_0x01384978(*(undefined4 *)(_UNK_02565dc8 + 0x2565cd8));
          *pcVar9 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x528,0);
        if (iVar1 == 0) {
          iVar1 = func_0x01489db8(iVar2,0);
          if (iVar1 == 0) {
            piVar8 = *(int **)(_UNK_02565dcc + 0x2565d74);
            iVar1 = *piVar8;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar8;
            }
            piVar8 = *(int **)(*(int *)(iVar1 + 0x5c) + 0x10);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = **(int **)(_UNK_02565dd0 + 0x2565dac);
            uStack_1c = 0;
            uVar3 = 0;
            if (iVar2 != 0) {
              iVar7 = piVar8[2];
              if (iVar7 == 0) {
                func_0x02457d50();
              }
              iVar7 = func_0x03e220bc(iVar7,iVar2,&uStack_1c,
                                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc)
                                     );
              uVar3 = uStack_1c;
              if (iVar7 == 0) {
                uStack_1c = func_0x02d921e0(*(undefined4 *)
                                             (*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14));
                iVar7 = (**(code **)(*piVar8 + 0xe0))
                                  (piVar8,iVar2,&uStack_1c,*(undefined4 *)(*piVar8 + 0xe4));
                uVar3 = uStack_1c;
                if (iVar7 != 0) {
                  iVar7 = piVar8[2];
                  if (iVar7 == 0) {
                    func_0x02457d50();
                  }
                  func_0x03e201a8(iVar7,iVar2,uVar3,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x1c));
                  uVar3 = uStack_1c;
                }
              }
            }
            return uVar3;
          }
          uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02565dd4 + 0x2565d44));
          func_0x0328e950(uVar3,**(undefined4 **)(_UNK_02565dd8 + 0x2565d58));
          return uVar3;
        }
        iVar1 = func_0x0229f13c(0x528,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        pcVar9 = (char *)(_UNK_0218d3e4 + 0x218d304);
        if (*pcVar9 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_0218d3e8 + 0x218d318),iVar2,0);
          *pcVar9 = '\x01';
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
        func_0x01485278(&uStack_30,iVar2,0);
        iVar7 = *(int *)(iVar1 + 8);
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        iVar2 = *(int *)(iVar1 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 2;
        if (iVar2 == 0) {
          uVar6 = 1;
        }
        func_0x0245495c(iVar7,uVar3,&uStack_30,uVar6,0,0);
        uVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0218d3ec + 0x218d3d4));
        return uVar3;
      }
      *param_3 = 1;
      iVar2 = *(int *)(param_1 + 0x40);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        func_0x01458344(~uVar4 + param_2);
        puVar5 = *(undefined4 **)(_UNK_028a0004 + 0x289ff74);
        param_2 = extraout_r1;
        goto LAB_0289ffac;
      }
    }
    uVar3 = 0;
  }
  else {
    iVar2 = func_0x0229f13c(0x59c5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar3 = func_0x0221f6ec(iVar2,param_1,param_2,param_3);
  }
  return uVar3;
}



// ===== FAT.ActivityFogScore$$TryGetCommitReward RVA 0x2890008 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028a0008(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_028a0230 + 0x28a0024);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a0234 + 0x28a0038));
    func_0x01384978(*(undefined4 *)(_UNK_028a0238 + 0x28a0044));
    func_0x01384978(*(undefined4 *)(_UNK_028a023c + 0x28a0050));
    func_0x01384978(*(undefined4 *)(_UNK_028a0240 + 0x28a005c));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar5 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x59cc,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 0xc);
      iVar5 = func_0x01c24918(0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 0x38) != 0) {
        func_0x01cd3734(&iStack_30,*(int *)(iVar5 + 0x38),iVar1,iVar6,0);
        iVar1 = iStack_30;
        iVar6 = iStack_2c;
      }
      iVar5 = *(int *)(param_1 + 0x58);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar5,**(undefined4 **)(_UNK_028a0244 + 0x28a0138));
      puVar4 = *(undefined4 **)(_UNK_028a0248 + 0x28a014c);
      do {
        iVar2 = func_0x03f5f428(&uStack_28,*puVar4);
        iVar5 = iStack_1c;
        if (iVar2 == 0) {
          iVar5 = 0;
          break;
        }
        if (iStack_1c == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar5 + 8);
        bVar7 = iVar2 != iVar1;
        if (!bVar7) {
          iVar2 = *(int *)(iVar5 + 0x10);
        }
      } while (bVar7 || iVar2 != iVar6);
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_028a024c + 0x28a0194));
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x59cc,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0218d3f0(iVar5,param_1,param_2,0);
  }
  return iVar5;
}



// ===== FAT.ActivityFogScore$$TryCommitReward RVA 0x2890258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028a0258(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_028a04a0 + 0x28a0270);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a04a4 + 0x28a0284));
    func_0x01384978(*(undefined4 *)(_UNK_028a04a8 + 0x28a0290));
    func_0x01384978(*(undefined4 *)(_UNK_028a04ac + 0x28a029c));
    func_0x01384978(*(undefined4 *)(_UNK_028a04b0 + 0x28a02a8));
    func_0x01384978(*(undefined4 *)(_UNK_028a04b4 + 0x28a02b4));
    func_0x01384978(*(undefined4 *)(_UNK_028a04b8 + 0x28a02c0));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x59cd,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar2,**(undefined4 **)(_UNK_028a04bc + 0x28a0358));
      puVar5 = *(undefined4 **)(_UNK_028a04c0 + 0x28a036c);
      while (iVar2 = func_0x03f5f428(&uStack_28,*puVar5), uVar1 = uStack_1c, iVar2 != 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01cdf088(iVar2,uVar1,0);
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_028a04c4 + 0x28a03c8));
      iVar2 = *(int *)(param_1 + 0x58);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (0 < iVar3) {
        func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar3,0);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x59cd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.ActivityFogScore$$TryCommitReward RVA 0x28904d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_028a04d0(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
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
  undefined4 uStack_18;
  
  pcVar7 = (char *)(_UNK_028a058c + 0x28a04e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a0590 + 0x28a04fc));
    func_0x01384978(*(undefined4 *)(_UNK_028a0594 + 0x28a0508));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59ce,0);
  if (iVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if ((uVar1 != 0) && (0 < *(int *)(uVar1 + 0xc))) {
      uStack_18 = *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_028a0598 +
                                                                           0x28a057c) + 0x10) + 0x60
                                                       ) + 0x5c) + 0x10) + 0x60) + 0xa0);
      uVar3 = func_0x030ffc18(*(undefined4 *)(uVar1 + 8),param_2,0,*(undefined4 *)(uVar1 + 0xc));
      if (-1 < (int)uVar3) {
        func_0x03290bd4(uVar1,uVar3);
      }
      return ~uVar3 >> 0x1f;
    }
    return uVar1;
  }
  iVar2 = func_0x0229f13c(0x59ce,0);
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
  iVar5 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  uVar1 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
  return uVar1;
}



// ===== FAT.ActivityFogScore$$GetCommitRewardList RVA 0x289059c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028a059c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x59cf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59cf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021cb2a0 + 0x21cb1c0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021cb2a4 + 0x21cb1d4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021cb2a8 + 0x21cb290));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.ActivityFogScore$$get_HasCycle RVA 0x28905f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028a05f0(int param_1)

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
  
  pcVar4 = (char *)(_UNK_028a06d4 + 0x28a0604);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a06d8 + 0x28a0618));
    func_0x01384978(*(undefined4 *)(_UNK_028a06dc + 0x28a0624));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x7a4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7a4,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x1c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = 0;
      if (0 < *(int *)(iVar1 + 0xc)) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}



// ===== FAT.ActivityFogScore$$get_RoundLen RVA 0x28906e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_028a06e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
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
  
  pcVar5 = (char *)(_UNK_028a07c0 + 0x28a06f4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a07c4 + 0x28a0708));
    func_0x01384978(*(undefined4 *)(_UNK_028a07c8 + 0x28a0714));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x59b8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59b8,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x1c);
  iVar4 = 0;
  iVar7 = 0;
  puVar8 = *(undefined4 **)(_UNK_028a07cc + 0x28a0788);
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar2 = func_0x0364c9b8(iVar1,iVar4,*puVar8);
    iVar7 = iVar2 + iVar7;
    iVar4 = iVar4 + 1;
  }
  return iVar7;
}



// ===== FAT.ActivityFogScore$$get_EntryVisible RVA 0x28907d0 =====

uint FUN_028a07d0(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x59d0,0);
  if (iVar2 == 0) {
    iVar2 = func_0x02b48934(param_1,0);
    if (((iVar2 == 0) ||
        (iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)),
        iVar2 == 0)) || (iVar2 = FUN_0289f430(param_1), iVar2 != 0)) {
      return 0;
    }
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1ae4,0);
    if (iVar2 == 0) {
      return (uint)(param_1[3] != 0);
    }
    iVar2 = func_0x0229f13c(0x1ae4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x59d0,0);
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



// ===== FAT.ActivityFogScore$$get_BoardEntryVisible RVA 0x2890898 =====

uint FUN_028a0898(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x59d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59d1,0);
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
  iVar1 = func_0x02b48934(param_1,0);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c)), iVar1 != 0
     )) {
    uVar4 = FUN_0289f430(param_1);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// ===== FAT.ActivityFogScore$$IsValidForBoard RVA 0x289092c =====

uint FUN_028a092c(undefined4 param_1,int param_2)

{
  uint uVar1;
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
  
  iVar2 = func_0x0229f06c(0x59d2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59d2,0);
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
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = FUN_0289d7e4(param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_0289d7e4(param_1);
    return (uint)(iVar2 == param_2);
  }
  return 1;
}



// ===== FAT.ActivityFogScore$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x28909b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028a09b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_028a0c84 + 0x28a09d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a0c88 + 0x28a09e8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x59d3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x59d3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021d2b64(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_2 + 0x28);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x46);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    return 0;
  }
  iVar2 = FUN_0289f430(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  piVar8 = *(int **)(_UNK_028a0c8c + 0x28a0a98);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar8;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01e4b23c(iVar2,param_2,0);
  if (iVar2 == 0) {
LAB_028a0b30:
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02af99d0(iVar2,param_2,param_4,0);
    uVar3 = 1;
  }
  else {
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    iVar2 = func_0x01e4b2b0(iVar2,param_2,0);
    iVar4 = func_0x02b449f8(param_1,0);
    if (iVar2 != iVar4) goto LAB_028a0b30;
  }
  uVar5 = func_0x02b449f8(param_1,0);
  iVar2 = func_0x01e4b758(param_2,uVar5,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_028a0bbc;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar2,param_2,0);
    if (iVar4 != 0) {
LAB_028a0bbc:
      uVar5 = 0;
      iVar4 = func_0x01e4b2b0(iVar2,param_2,0);
      iVar6 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar6) goto LAB_028a0c70;
    }
  }
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = **(int **)(iVar4 + 0x5c);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar4,param_2,0);
  uVar5 = func_0x02b449f8(param_1,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar2,param_2,uVar5,uStack_28,uStack_2c,0);
  uVar5 = 1;
LAB_028a0c70:
  iVar2 = func_0x01f2a218(0);
  if (iVar2 != 0) {
    uVar3 = uVar5;
  }
  return uVar3;
}



// ===== FAT.ActivityFogScore$$BoardEntryAsset RVA 0x2890c90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028a0c90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_028a0d78 + 0x28a0ca8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a0d7c + 0x28a0cbc));
    func_0x01384978(*(undefined4 *)(_UNK_028a0d80 + 0x28a0cc8));
    *pcVar4 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x59d4,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x74) + 8);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x14);
      }
      if ((iVar3 != 0 && iVar1 != 0) &&
         (iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_028a0d88 + 0x28a0d5c),&uStack_14,
                                  **(undefined4 **)(_UNK_028a0d84 + 0x28a0d50)), uVar2 = uStack_14,
         iVar1 == 0)) {
        uVar2 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x59d4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.ActivityFogScore$$SliderPrefabAsset RVA 0x2890d8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028a0d8c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_028a0e74 + 0x28a0da4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028a0e78 + 0x28a0db8));
    func_0x01384978(*(undefined4 *)(_UNK_028a0e7c + 0x28a0dc4));
    *pcVar4 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x59d5,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x74) + 8);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x14);
      }
      if ((iVar3 != 0 && iVar1 != 0) &&
         (iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_028a0e84 + 0x28a0e58),&uStack_14,
                                  **(undefined4 **)(_UNK_028a0e80 + 0x28a0e4c)), uVar2 = uStack_14,
         iVar1 == 0)) {
        uVar2 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x59d5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.ActivityFogScore$$get_VisualMain RVA 0x2890e88 =====

void FUN_028a0e88(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x74);
  *param_1 = *(undefined4 *)(param_2 + 0x70);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityFogScore$$get_Visual RVA 0x2890e94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_028a0e94(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x59d6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x59d6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_get_Valid RVA 0x2890ee8 =====

void FUN_028a0ee8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  iVar1 = func_0x0229f06c(0x127,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x127,0);
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
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 0x10);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
                    /* WARNING: Could not recover jumptable at 0x02b4cb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
  return;
}



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_SetupFresh RVA 0x2890ef0 =====

void FUN_028a0ef0(undefined4 param_1)

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



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_SetupClear RVA 0x2890ef8 =====

void FUN_028a0ef8(int param_1)

{
  int iVar1;
  int *piVar2;
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
  
  iVar1 = func_0x0229f06c(0x1a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1a8,0);
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
    return;
  }
  piVar2 = *(int **)(param_1 + 0x10);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02b4d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x168))(piVar2,*(undefined4 *)(*piVar2 + 0x16c));
    return;
  }
  return;
}



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_WhenActive RVA 0x2890f00 =====

void FUN_028a0f00(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x201,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x201,0);
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



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_WhenEnd RVA 0x2890f08 =====

void FUN_028a0f08(undefined4 param_1)

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



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_WhenReset RVA 0x2890f10 =====

void FUN_028a0f10(undefined4 param_1)

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



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_get_EntryVisible RVA 0x2890f18 =====

uint FUN_028a0f18(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x1ae3,0);
  if (iVar2 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229f06c(0x1ae4,0);
    if (iVar2 == 0) {
      return (uint)(param_1[3] != 0);
    }
    iVar2 = func_0x0229f13c(0x1ae4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1ae3,0);
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



// ===== FAT.ActivityFogScore$$<>iFixBaseProxy_get_Visual RVA 0x2890f20 =====

undefined4 FUN_028a0f20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


