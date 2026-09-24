/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBItemAnimation$$SetData RVA 0x1dff774 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0f774(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_01e0f948 + 0x1e0f790);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0f94c + 0x1e0f7a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0f950 + 0x1e0f7b0));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  iStack_18 = 0;
  iVar1 = func_0x0229f06c(0x1662,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1662,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
    return;
  }
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0210e250(iVar1,6,0,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb690(iVar1,&iStack_14,0,**(undefined4 **)(_UNK_01e0f954 + 0x1e0f87c));
    if (((iStack_14 == 0 || iVar1 == 0) ||
        (iVar1 = func_0x0211d81c(iStack_14,0), iStack_14 == 0 || iVar1 == 0)) ||
       (iVar1 = func_0x0211dc48(iStack_14,0), iVar1 == 0)) {
      iVar1 = *(int *)(param_2 + 0x30);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02feb690(iVar1,&iStack_18,0,**(undefined4 **)(_UNK_01e0f958 + 0x1e0f8d8));
      iVar1 = iStack_18;
      if (iVar2 == 0) {
        return;
      }
      if (iStack_18 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211b194(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x18) == '\0') {
        return;
      }
    }
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  func_0x01e0f95c(param_1,uVar3);
  return;
}



// ===== FAT.MBItemAnimation$$AddHintType RVA 0x1dff95c =====

void FUN_01e0f95c(int param_1,uint param_2)

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
  
  iVar1 = func_0x0229f06c(0x1634,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1634,0);
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
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | (1 << (param_2 & 0x1f)) >> 1;
  return;
}



// ===== FAT.MBItemAnimation$$ClearData RVA 0x1dff9d0 =====

void FUN_01e0f9d0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5da1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5da1,0);
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
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  return;
}



// ===== FAT.MBItemAnimation$$PlayTap RVA 0x1dffa30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0fa30(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e0faf0 + 0x1e0fa44);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0faf4 + 0x1e0fa58));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96d1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96d1,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01e0faf8 + 0x1e0fab0);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar6 = **(undefined4 **)(iVar1 + 0x5c);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
  return;
}



// ===== FAT.MBItemAnimation$$PlayTapDelayHigh RVA 0x1dffafc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0fafc(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e0fbbc + 0x1e0fb10);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0fbc0 + 0x1e0fb24));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x96d4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x96d4,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01e0fbc4 + 0x1e0fb7c);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
  return;
}



// ===== FAT.MBItemAnimation$$PlaySpawn RVA 0x1dffbc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0fbc8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e0fc88 + 0x1e0fbdc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0fc8c + 0x1e0fbf0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa067,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa067,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01e0fc90 + 0x1e0fc48);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
  return;
}



// ===== FAT.MBItemAnimation$$PlayDropToGround RVA 0x1dffc94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0fc94(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01e0fd54 + 0x1e0fca8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0fd58 + 0x1e0fcbc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa068,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa068,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01e0fd5c + 0x1e0fd14);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0514e2c4)(iVar5,uVar6,0);
  return;
}



// ===== FAT.MBItemAnimation$$RemoveHintType RVA 0x1dffd60 =====

void FUN_01e0fd60(int param_1,uint param_2)

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
  
  iVar1 = func_0x0229f06c(0x163b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163b,0);
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
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & ~((1 << (param_2 & 0x1f)) >> 1);
  return;
}



// ===== FAT.MBItemAnimation$$UpdateEx RVA 0x1dffdd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0fdd4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar2 = func_0x0229f06c(0xa069,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
    pcVar7 = (char *)(_UNK_01e0ff7c + 0x1e0fe5c);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e0ff80 + 0x1e0fe70));
      *pcVar7 = '\x01';
    }
    iVar8 = 0;
    iVar2 = func_0x0229f06c(0xa06a,0);
    if (iVar2 == 0) {
      if (0 < (int)*(uint *)(param_1 + 0x18)) {
        iVar8 = 0;
        uVar3 = *(uint *)(param_1 + 0x18);
        do {
          iVar8 = iVar8 + 1;
          uVar1 = uVar3 >> 1;
          uVar3 = uVar3 >> 1;
        } while (uVar1 != 0);
      }
      iVar2 = func_0x0244ffd4(param_1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x02450114(iVar2,0);
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = *(int *)(param_1 + 0x1c);
      }
      if (iVar4 != 0 && iVar8 != iVar2) {
        puVar5 = *(undefined4 **)(_UNK_01e0ff84 + 0x1e0ff3c);
        iVar2 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x1c) = iVar8;
        uStack_1c = *puVar5;
        uStack_18 = 0xffffffff;
        iStack_14 = iVar8;
        uVar9 = func_0x0244f5f4(&uStack_1c,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02450104(iVar2,uVar9,0);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0xa06a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa069,0);
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
  iVar8 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.MBItemAnimation$$_UpdateAnim RVA 0x1dffe44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0fe44(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar7 = (char *)(_UNK_01e0ff7c + 0x1e0fe5c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0ff80 + 0x1e0fe70));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar2 = func_0x0229f06c(0xa06a,0);
  if (iVar2 == 0) {
    if (0 < (int)*(uint *)(param_1 + 0x18)) {
      iVar8 = 0;
      uVar3 = *(uint *)(param_1 + 0x18);
      do {
        iVar8 = iVar8 + 1;
        uVar1 = uVar3 >> 1;
        uVar3 = uVar3 >> 1;
      } while (uVar1 != 0);
    }
    iVar2 = func_0x0244ffd4(param_1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02450114(iVar2,0);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(param_1 + 0x1c);
    }
    if (iVar4 != 0 && iVar8 != iVar2) {
      puVar5 = *(undefined4 **)(_UNK_01e0ff84 + 0x1e0ff3c);
      iVar2 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x1c) = iVar8;
      uStack_1c = *puVar5;
      uStack_18 = 0xffffffff;
      iStack_14 = iVar8;
      uVar9 = func_0x0244f5f4(&uStack_1c,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450104(iVar2,uVar9,0);
    }
    return;
  }
  iVar2 = func_0x0229f13c(0xa06a,0);
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
  iVar8 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.MBItemAnimation$$.ctor RVA 0x1dfff88 =====

void FUN_01e0ff88(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.MBItemAnimation$$.cctor RVA 0x1dfff98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0ff98(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01e10050 + 0x1e0ffa8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e10054 + 0x1e0ffbc));
    func_0x01384978(*(undefined4 *)(_UNK_01e10058 + 0x1e0ffc8));
    func_0x01384978(*(undefined4 *)(_UNK_01e1005c + 0x1e0ffd4));
    func_0x01384978(*(undefined4 *)(_UNK_01e10060 + 0x1e0ffe0));
    func_0x01384978(*(undefined4 *)(_UNK_01e10064 + 0x1e0ffec));
    *pcVar5 = '\x01';
  }
  piVar1 = *(int **)(_UNK_01e10068 + 0x1e10000);
  **(undefined4 **)(*piVar1 + 0x5c) = **(undefined4 **)(_UNK_01e1006c + 0x1e10010);
  iVar2 = *(int *)(*piVar1 + 0x5c);
  uVar3 = **(undefined4 **)(_UNK_01e10070 + 0x1e10024);
  puVar4 = *(undefined4 **)(_UNK_01e10078 + 0x1e10040);
  *(undefined4 *)(iVar2 + 4) = **(undefined4 **)(_UNK_01e10074 + 0x1e10034);
  *(undefined4 *)(iVar2 + 8) = uVar3;
  *(undefined4 *)(iVar2 + 0xc) = *puVar4;
  return;
}


