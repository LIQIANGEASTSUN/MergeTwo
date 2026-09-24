/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ArchiveMan$$get_userType RVA 0x1e1bc74 =====

undefined4 FUN_01e2bc74(int param_1)

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
  iVar1 = func_0x0229f06c(0xe62,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe62,0);
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
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
  }
  return uVar3;
}



// ===== FAT.ArchiveMan$$get_accountCreated RVA 0x1e1bcd8 =====

uint FUN_01e2bcd8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa113,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa113,0);
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
  return (uint)*(byte *)(param_1 + 0x10);
}



// ===== FAT.ArchiveMan$$get_lastSyncTime RVA 0x1e1bd2c =====

undefined4 FUN_01e2bd2c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xe68,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe68,0);
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
    uVar4 = func_0x0245499c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== FAT.ArchiveMan$$get_lastUpdateTime RVA 0x1e1bd80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2bd80(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
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
  
  pcVar5 = (char *)(_UNK_01e2be1c + 0x1e2bd94);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2be20 + 0x1e2bda8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xe65,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe65,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar3,0,0);
    func_0x0245499c(&uStack_30,0,0);
    return;
  }
  piVar4 = *(int **)(param_1 + 0x30);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar6 = **(int **)(_UNK_01e2be24 + 0x1e2be10);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x02457d84();
  }
  iVar6 = piVar4[2];
  uVar7 = piVar4[3];
  uVar8 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
  if (iVar6 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar6 + 0xc) <= uVar7) {
    func_0x02457d5c();
  }
  iVar6 = iVar6 + uVar7 * 8;
  uStack_28 = *(undefined4 *)(iVar6 + 0x10);
  uStack_24 = *(undefined4 *)(iVar6 + 0x14);
  pcVar2 = *(code **)(*piVar4 + 0xe8);
  uStack_20 = *(undefined4 *)(*piVar4 + 0xec);
  (*pcVar2)(piVar4,pcVar2,uVar8,uVar3);
  return;
}



// ===== FAT.ArchiveMan$$get_isArchiveLoaded RVA 0x1e1be28 =====

uint FUN_01e2be28(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x58b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x58b,0);
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
  return (uint)*(byte *)(param_1 + 0x20);
}



// ===== FAT.ArchiveMan$$get_syncTask RVA 0x1e1be7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2be7c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xdb8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xdb8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021b1dec + 0x21b1d0c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021b1df0 + 0x21b1d20),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021b1df4 + 0x21b1ddc));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.ArchiveMan$$get_isNewUser RVA 0x1e1bed0 =====

undefined1 FUN_01e2bed0(int param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// ===== FAT.ArchiveMan$$set_isNewUser RVA 0x1e1bed8 =====

void FUN_01e2bed8(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ArchiveMan$$get_uploadCompleted RVA 0x1e1bee0 =====

uint FUN_01e2bee0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x27cd,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x5c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x27ce,0);
    if (iVar1 == 0) {
      return (uint)*(byte *)(param_1 + 9);
    }
    iVar1 = func_0x0229f13c(0x27ce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x27cd,0);
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



// ===== FAT.ArchiveMan.UploadHelper$$get_UploadRequestFulfilled RVA 0x1e1bf48 =====

uint FUN_01e2bf48(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x27ce,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x27ce,0);
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
  return (uint)*(byte *)(param_1 + 9);
}



// ===== FAT.ArchiveMan$$get_syncCountdown RVA 0x1e1bf9c =====

undefined4 FUN_01e2bf9c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa114,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa114,0);
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
    uVar4 = func_0x024549ac(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ArchiveMan$$get_LoginLevel RVA 0x1e1bff0 =====

undefined4 FUN_01e2bff0(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.ArchiveMan$$set_LoginLevel RVA 0x1e1bff8 =====

void FUN_01e2bff8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== FAT.ArchiveMan$$get_OfflineDays RVA 0x1e1c000 =====

undefined4 FUN_01e2c000(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.ArchiveMan$$set_OfflineDays RVA 0x1e1c008 =====

void FUN_01e2c008(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



// ===== FAT.ArchiveMan$$FAT.IGameModule.LoadConfig RVA 0x1e1c010 =====

void FUN_01e2c010(int param_1)

{
  char cVar1;
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
  
  iVar2 = func_0x0229f06c(0xa115,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01ca4338(iVar2,0);
    cVar1 = '\0';
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0xc);
      iVar2 = 0xc;
    }
    if (iVar4 == 0 || cVar1 == '\0') {
      iVar2 = 0xb;
    }
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(param_1 + 0xc) = iVar2;
    return;
  }
  iVar2 = func_0x0229f13c(0xa115,0);
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



// ===== FAT.ArchiveMan$$FAT.IGameModule.Reset RVA 0x1e1c0b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2c0b8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_01e2c228 + 0x1e2c0d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2c22c + 0x1e2c0e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c230 + 0x1e2c0f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c234 + 0x1e2c0fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c238 + 0x1e2c108));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa116,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa116,0);
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
    return;
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e2c23c + 0x1e2c168));
  func_0x0244f5a0(uVar6,0);
  puVar2 = *(undefined4 **)(_UNK_01e2c240 + 0x1e2c184);
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  uVar6 = func_0x01384be4(*puVar2);
  func_0x0244f5a0(uVar6,0);
  puVar2 = *(undefined4 **)(_UNK_01e2c244 + 0x1e2c1a4);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar3 = *puVar2;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
  iVar1 = func_0x01384be4(uVar3);
  func_0x028d21e0(iVar1,0);
  uVar6 = extraout_r1;
  if (iVar1 == 0) {
    func_0x01384bf0();
    uVar6 = extraout_r1_00;
  }
  uStack_18 = **(undefined4 **)(_UNK_01e2c248 + 0x1e2c1e8);
  uVar6 = func_0x02452518(iVar1,uVar6,0,0);
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// ===== FAT.ArchiveMan.UploadHelper$$.ctor RVA 0x1e1c24c =====

void FUN_01e2c24c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ArchiveMan$$FAT.IGameModule.Startup RVA 0x1e1c25c =====

void FUN_01e2c25c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa117,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa117,0);
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



// ===== FAT.ArchiveMan$$FAT.IUpdate.Update RVA 0x1e1c2a8 =====

/* WARNING: Possible PIC construction at 0x01e2c4f8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2c2a8(int param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  int iVar6;
  char *unaff_r6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  uint in_fpscr;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
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
  
  iVar2 = func_0x0229f06c(0xa118,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa118,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
LAB_0218670c:
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    uVar10 = func_0x0245495c(iVar6,uVar10,&uStack_38,uVar5,0,0);
    return uVar10;
  }
  pcVar7 = (char *)(_UNK_01e2c950 + 0x1e2c328);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2c954 + 0x1e2c33c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c958 + 0x1e2c348));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c95c + 0x1e2c354));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c960 + 0x1e2c360));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c964 + 0x1e2c36c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c968 + 0x1e2c378));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c96c + 0x1e2c384));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c970 + 0x1e2c390));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c974 + 0x1e2c39c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c978 + 0x1e2c3a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c97c + 0x1e2c3b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c980 + 0x1e2c3c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c984 + 0x1e2c3cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c988 + 0x1e2c3d8));
    *pcVar7 = '\x01';
  }
  uVar14 = func_0x0229f06c(0xa119,0);
  iVar2 = (int)((ulonglong)uVar14 >> 0x20);
  if ((int)uVar14 != 0) {
    iVar2 = func_0x0229f13c(0xa119,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto LAB_0218670c;
  }
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x50);
  }
  uVar10 = unaff_r7;
  if (piVar3 != (int *)0x0 && iVar2 != 0) {
    iVar2 = (**(code **)(*piVar3 + 0xf8))(piVar3,*(undefined4 *)(*piVar3 + 0xfc));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x028bc4d8(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01e2c98c + 0x1e2c678) + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (iVar2 == 0) {
        func_0x0199d1cc(**(undefined4 **)(_UNK_01e2c9a0 + 0x1e2c850),0);
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01e2c9a4 + 0x1e2c864),1);
        piVar8 = *(int **)(param_1 + 0x18);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        pcVar7 = (char *)(**(code **)(*piVar8 + 0x110))(piVar8,*(undefined4 *)(*piVar8 + 0x114));
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((pcVar7 != (char *)0x0) &&
           (iVar2 = func_0x01384ab8(pcVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = (int)pcVar7;
        if (*(int *)(**(int **)(_UNK_01e2c9a8 + 0x1e2c8ec) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_01e2c9ac + 0x1e2c910),piVar3,0);
        *(undefined1 *)(param_1 + 0x21) = 1;
      }
      else {
        func_0x0199d1cc(**(undefined4 **)(_UNK_01e2c990 + 0x1e2c6a0),0);
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01e2ca28(iVar2);
        iVar2 = *(int *)(param_1 + 0x50);
        uVar10 = *(undefined4 *)(param_1 + 0x54);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar3 = *(int **)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(iVar2 + 0x10) = uVar10;
        *(undefined1 *)(param_1 + 0x21) = 0;
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)(**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
        if ((piVar3 != (int *)0x0) && (*piVar3 == **(int **)(_UNK_01e2c994 + 0x1e2c718))) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar2 + 0x2c);
          iVar2 = piVar3[3];
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          FUN_01cf55c4(iVar6,iVar2,0);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x30);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01d155e8(iVar2,0);
        }
        pcVar7 = *(char **)(_UNK_01e2c998 + 0x1e2c7a0);
        uVar5 = func_0x034aaa34(*(undefined4 *)pcVar7);
        if (*(int *)(**(int **)(_UNK_01e2c99c + 0x1e2c7b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar5,0,0);
        if (iVar2 != 0) {
          iVar2 = func_0x034aaa34(*(undefined4 *)pcVar7);
          iVar6 = func_0x01c24918(0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar6 + 0x48);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          pcVar7 = (char *)func_0x01dd2c04(iVar6,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ed90c4(iVar2,pcVar7,0);
        }
      }
      iVar2 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      fVar13 = (float)func_0x0145b18c(0);
      fVar13 = fVar13 - *(float *)(param_1 + 0x1c);
      uVar11 = in_fpscr & 0xfffffff | (uint)(fVar13 < _UNK_01e2c94c) << 0x1f |
               (uint)(fVar13 == _UNK_01e2c94c) << 0x1e;
      in_fpscr = uVar11 | (uint)(NAN(fVar13) || NAN(_UNK_01e2c94c)) << 0x1c;
      bVar1 = (byte)(uVar11 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_01e2c444;
      if (*(int *)(**(int **)(_UNK_01e2c9b0 + 0x1e2c570) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2c9b4 + 0x1e2c590),0);
      iVar6 = **(int **)(_UNK_01e2c9b8 + 0x1e2c5a0);
      iVar2 = *(int *)(iVar6 + 0x1c);
      if (iVar2 == 0) {
        func_0x0140024c(iVar6);
        iVar2 = *(int *)(iVar6 + 0x1c);
      }
      iVar2 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar5 = **(undefined4 **)(iVar2 + 0x5c);
      if (*(int *)(**(int **)(_UNK_01e2c9bc + 0x1e2c600) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01e2c9bc + 0x1e2c600));
      }
      pcVar7 = (char *)0x0;
      func_0x028c23bc(**(undefined4 **)(_UNK_01e2c9c0 + 0x1e2c634),uVar5,0);
      iVar2 = *(int *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x21) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01e2ca88(iVar2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
  }
LAB_01e2c444:
  fVar13 = *(float *)(param_1 + 0x14);
  uVar11 = in_fpscr & 0xfffffff | (uint)(fVar13 == 0.0) << 0x1e | (uint)(0.0 <= fVar13) << 0x1d;
  bVar1 = (byte)(uVar11 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    if (*(int *)(**(int **)(_UNK_01e2c9c4 + 0x1e2c460) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x024440d8(0);
    fVar13 = (float)VectorSignedToFloat(uVar5,(byte)(uVar11 >> 0x16) & 3);
    *(float *)(param_1 + 0x14) = fVar13;
  }
  uVar11 = uVar11 & 0xfffffff | (uint)(fVar13 < 0.0) << 0x1f | (uint)(fVar13 == 0.0) << 0x1e;
  uVar12 = uVar11 | (uint)NAN(fVar13) << 0x1c;
  bVar1 = (byte)(uVar11 >> 0x18);
  if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2c9c8 + 0x1e2c4a8));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if ((*(char *)(iVar2 + 10) == '\0') || (*(char *)(param_1 + 0x34) != '\0')) {
      param_2 = *(float *)(param_1 + 0x14) - param_2;
      uVar12 = uVar12 & 0xfffffff | (uint)(param_2 == 0.0) << 0x1e | (uint)(0.0 <= param_2) << 0x1d;
      *(float *)(param_1 + 0x14) = param_2;
      bVar1 = (byte)(uVar12 >> 0x18);
      if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
        *(undefined1 *)(param_1 + 0x4c) = 0;
        unaff_lr = 0x1e2c4fc;
        unaff_r4 = param_1;
        unaff_r5 = iVar2;
        unaff_r6 = pcVar7;
        unaff_r7 = uVar10;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
        goto SUB_01e2cadc;
      }
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
SUB_01e2cadc:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(char **)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  piVar3 = (int *)((int)register0x00000054 + -0x10);
  *piVar3 = unaff_r4;
  pcVar7 = (char *)(_UNK_01e2cfb8 + 0x1e2caf0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfbc + 0x1e2cb04));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc0 + 0x1e2cb10));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc4 + 0x1e2cb1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc8 + 0x1e2cb28));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfcc + 0x1e2cb34));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd0 + 0x1e2cb40));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd4 + 0x1e2cb4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd8 + 0x1e2cb58));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfdc + 0x1e2cb64));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe0 + 0x1e2cb70));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe4 + 0x1e2cb7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe8 + 0x1e2cb88));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfec + 0x1e2cb94));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa11c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa11c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar3;
    uVar10 = *(undefined4 *)((int)register0x00000054 + -0xc);
    iVar9 = *(int *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *piVar3 = iVar9;
    *(undefined4 *)((int)register0x00000054 + -0x14) = uVar10;
    *(int *)((int)register0x00000054 + -0x18) = iVar6;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar6 = *(int *)(iVar2 + 0x10);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar6,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    uVar10 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
    return uVar10;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2cff0 + 0x1e2cbec));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01c36988(iVar2,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01e2cff4 + 0x1e2cd00) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2cff8 + 0x1e2cd20),0);
    iVar6 = **(int **)(_UNK_01e2cffc + 0x1e2cd30);
    iVar2 = *(int *)(iVar6 + 0x1c);
    if (iVar2 == 0) {
      func_0x0140024c(iVar6);
      iVar2 = *(int *)(iVar6 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    uVar10 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e2d000 + 0x1e2cd90) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e2d000 + 0x1e2cd90));
    }
    puVar4 = *(undefined4 **)(_UNK_01e2d004 + 0x1e2cdb8);
  }
  else {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x6c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar2 + 8) != '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02793684(iVar2,0);
        }
        uVar10 = func_0x01e2ffc4(param_1,iVar2);
        if (*(int *)(**(int **)(_UNK_01e2d034 + 0x1e2ccb8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (iVar2 == 0) {
          func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d03c + 0x1e2cfa8),0);
        }
        else {
          func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d038 + 0x1e2cce0),0);
          func_0x01e3028c(param_1,uVar10);
        }
        return 1;
      }
      if (*(int *)(**(int **)(_UNK_01e2d020 + 0x1e2cecc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d024 + 0x1e2ceec),0);
      iVar6 = **(int **)(_UNK_01e2d028 + 0x1e2cefc);
      iVar2 = *(int *)(iVar6 + 0x1c);
      if (iVar2 == 0) {
        func_0x0140024c(iVar6);
        iVar2 = *(int *)(iVar6 + 0x1c);
      }
      iVar2 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar10 = **(undefined4 **)(iVar2 + 0x5c);
      if (*(int *)(**(int **)(_UNK_01e2d02c + 0x1e2cf5c) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01e2d02c + 0x1e2cf5c));
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01e2d030 + 0x1e2cf90),uVar10,0);
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_01e2d00c + 0x1e2cdc4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d010 + 0x1e2cde4),0);
    iVar6 = **(int **)(_UNK_01e2d014 + 0x1e2cdf4);
    iVar2 = *(int *)(iVar6 + 0x1c);
    if (iVar2 == 0) {
      func_0x0140024c(iVar6);
      iVar2 = *(int *)(iVar6 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    uVar10 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e2d018 + 0x1e2ce54) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e2d018 + 0x1e2ce54));
    }
    puVar4 = *(undefined4 **)(_UNK_01e2d01c + 0x1e2ce7c);
  }
  func_0x028c23bc(*puVar4,uVar10,0);
  if (*(int *)(**(int **)(_UNK_01e2d008 + 0x1e2ce98) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar10 = func_0x024440d8(0);
  uVar10 = VectorSignedToFloat(uVar10,(byte)(uVar12 >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x14) = uVar10;
  return 0;
}



// ===== FAT.ArchiveMan$$_Update RVA 0x1e1c30c =====

/* WARNING: Possible PIC construction at 0x01e2c4f8: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2c30c(int param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  int iVar6;
  char *unaff_r6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  uint in_fpscr;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined8 uVar14;
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
  
  pcVar7 = (char *)(_UNK_01e2c950 + 0x1e2c328);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2c954 + 0x1e2c33c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c958 + 0x1e2c348));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c95c + 0x1e2c354));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c960 + 0x1e2c360));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c964 + 0x1e2c36c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c968 + 0x1e2c378));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c96c + 0x1e2c384));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c970 + 0x1e2c390));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c974 + 0x1e2c39c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c978 + 0x1e2c3a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c97c + 0x1e2c3b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c980 + 0x1e2c3c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c984 + 0x1e2c3cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2c988 + 0x1e2c3d8));
    *pcVar7 = '\x01';
  }
  uVar14 = func_0x0229f06c(0xa119,0);
  iVar2 = (int)((ulonglong)uVar14 >> 0x20);
  if ((int)uVar14 != 0) {
    iVar2 = func_0x0229f13c(0xa119,0);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    uVar10 = func_0x0245495c(iVar6,uVar10,&uStack_38,uVar5,0,0);
    return uVar10;
  }
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x50);
  }
  uVar10 = unaff_r7;
  if (piVar3 != (int *)0x0 && iVar2 != 0) {
    iVar2 = (**(code **)(*piVar3 + 0xf8))(piVar3,*(undefined4 *)(*piVar3 + 0xfc));
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x028bc4d8(iVar2,0);
      if (*(int *)(**(int **)(_UNK_01e2c98c + 0x1e2c678) + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (iVar2 == 0) {
        func_0x0199d1cc(**(undefined4 **)(_UNK_01e2c9a0 + 0x1e2c850),0);
        piVar3 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01e2c9a4 + 0x1e2c864),1);
        piVar8 = *(int **)(param_1 + 0x18);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        pcVar7 = (char *)(**(code **)(*piVar8 + 0x110))(piVar8,*(undefined4 *)(*piVar8 + 0x114));
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((pcVar7 != (char *)0x0) &&
           (iVar2 = func_0x01384ab8(pcVar7,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
          uVar5 = func_0x01384c10();
          func_0x01384aa0(uVar5,0);
        }
        if (piVar3[3] == 0) {
          func_0x01384bf4();
        }
        piVar3[4] = (int)pcVar7;
        if (*(int *)(**(int **)(_UNK_01e2c9a8 + 0x1e2c8ec) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c23bc(**(undefined4 **)(_UNK_01e2c9ac + 0x1e2c910),piVar3,0);
        *(undefined1 *)(param_1 + 0x21) = 1;
      }
      else {
        func_0x0199d1cc(**(undefined4 **)(_UNK_01e2c990 + 0x1e2c6a0),0);
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01e2ca28(iVar2);
        iVar2 = *(int *)(param_1 + 0x50);
        uVar10 = *(undefined4 *)(param_1 + 0x54);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        piVar3 = *(int **)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x54) = 0;
        *(undefined4 *)(iVar2 + 0x10) = uVar10;
        *(undefined1 *)(param_1 + 0x21) = 0;
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)(**(code **)(*piVar3 + 0x130))(piVar3,*(undefined4 *)(*piVar3 + 0x134));
        if ((piVar3 != (int *)0x0) && (*piVar3 == **(int **)(_UNK_01e2c994 + 0x1e2c718))) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar2 + 0x2c);
          iVar2 = piVar3[3];
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          FUN_01cf55c4(iVar6,iVar2,0);
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x30);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01d155e8(iVar2,0);
        }
        pcVar7 = *(char **)(_UNK_01e2c998 + 0x1e2c7a0);
        uVar5 = func_0x034aaa34(*(undefined4 *)pcVar7);
        if (*(int *)(**(int **)(_UNK_01e2c99c + 0x1e2c7b4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x0145b1cc(uVar5,0,0);
        if (iVar2 != 0) {
          iVar2 = func_0x034aaa34(*(undefined4 *)pcVar7);
          iVar6 = func_0x01c24918(0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar6 + 0x48);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          pcVar7 = (char *)func_0x01dd2c04(iVar6,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x01ed90c4(iVar2,pcVar7,0);
        }
      }
      iVar2 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      fVar13 = (float)func_0x0145b18c(0);
      fVar13 = fVar13 - *(float *)(param_1 + 0x1c);
      uVar11 = in_fpscr & 0xfffffff | (uint)(fVar13 < _UNK_01e2c94c) << 0x1f |
               (uint)(fVar13 == _UNK_01e2c94c) << 0x1e;
      in_fpscr = uVar11 | (uint)(NAN(fVar13) || NAN(_UNK_01e2c94c)) << 0x1c;
      bVar1 = (byte)(uVar11 >> 0x18);
      if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_01e2c444;
      if (*(int *)(**(int **)(_UNK_01e2c9b0 + 0x1e2c570) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2c9b4 + 0x1e2c590),0);
      iVar6 = **(int **)(_UNK_01e2c9b8 + 0x1e2c5a0);
      iVar2 = *(int *)(iVar6 + 0x1c);
      if (iVar2 == 0) {
        func_0x0140024c(iVar6);
        iVar2 = *(int *)(iVar6 + 0x1c);
      }
      iVar2 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar5 = **(undefined4 **)(iVar2 + 0x5c);
      if (*(int *)(**(int **)(_UNK_01e2c9bc + 0x1e2c600) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01e2c9bc + 0x1e2c600));
      }
      pcVar7 = (char *)0x0;
      func_0x028c23bc(**(undefined4 **)(_UNK_01e2c9c0 + 0x1e2c634),uVar5,0);
      iVar2 = *(int *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0x21) = 1;
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01e2ca88(iVar2);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
    }
  }
LAB_01e2c444:
  fVar13 = *(float *)(param_1 + 0x14);
  uVar11 = in_fpscr & 0xfffffff | (uint)(fVar13 == 0.0) << 0x1e | (uint)(0.0 <= fVar13) << 0x1d;
  bVar1 = (byte)(uVar11 >> 0x18);
  if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
    if (*(int *)(**(int **)(_UNK_01e2c9c4 + 0x1e2c460) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar5 = func_0x024440d8(0);
    fVar13 = (float)VectorSignedToFloat(uVar5,(byte)(uVar11 >> 0x16) & 3);
    *(float *)(param_1 + 0x14) = fVar13;
  }
  uVar11 = uVar11 & 0xfffffff | (uint)(fVar13 < 0.0) << 0x1f | (uint)(fVar13 == 0.0) << 0x1e;
  uVar12 = uVar11 | (uint)NAN(fVar13) << 0x1c;
  bVar1 = (byte)(uVar11 >> 0x18);
  if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2c9c8 + 0x1e2c4a8));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if ((*(char *)(iVar2 + 10) == '\0') || (*(char *)(param_1 + 0x34) != '\0')) {
      param_2 = *(float *)(param_1 + 0x14) - param_2;
      uVar12 = uVar12 & 0xfffffff | (uint)(param_2 == 0.0) << 0x1e | (uint)(0.0 <= param_2) << 0x1d;
      *(float *)(param_1 + 0x14) = param_2;
      bVar1 = (byte)(uVar12 >> 0x18);
      if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
        *(undefined1 *)(param_1 + 0x4c) = 0;
        unaff_lr = 0x1e2c4fc;
        unaff_r4 = param_1;
        unaff_r5 = iVar2;
        unaff_r6 = pcVar7;
        unaff_r7 = uVar10;
        register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
        goto SUB_01e2cadc;
      }
    }
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
SUB_01e2cadc:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(char **)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  piVar3 = (int *)((int)register0x00000054 + -0x10);
  *piVar3 = unaff_r4;
  pcVar7 = (char *)(_UNK_01e2cfb8 + 0x1e2caf0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfbc + 0x1e2cb04));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc0 + 0x1e2cb10));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc4 + 0x1e2cb1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc8 + 0x1e2cb28));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfcc + 0x1e2cb34));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd0 + 0x1e2cb40));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd4 + 0x1e2cb4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd8 + 0x1e2cb58));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfdc + 0x1e2cb64));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe0 + 0x1e2cb70));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe4 + 0x1e2cb7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe8 + 0x1e2cb88));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfec + 0x1e2cb94));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xa11c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa11c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar3;
    uVar10 = *(undefined4 *)((int)register0x00000054 + -0xc);
    iVar9 = *(int *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *piVar3 = iVar9;
    *(undefined4 *)((int)register0x00000054 + -0x14) = uVar10;
    *(int *)((int)register0x00000054 + -0x18) = iVar6;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar6 = *(int *)(iVar2 + 0x10);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    func_0x0245495c(iVar6,uVar10,(undefined1 *)((int)register0x00000054 + -0x30),uVar5);
    uVar10 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
    return uVar10;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2cff0 + 0x1e2cbec));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01c36988(iVar2,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_01e2cff4 + 0x1e2cd00) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2cff8 + 0x1e2cd20),0);
    iVar6 = **(int **)(_UNK_01e2cffc + 0x1e2cd30);
    iVar2 = *(int *)(iVar6 + 0x1c);
    if (iVar2 == 0) {
      func_0x0140024c(iVar6);
      iVar2 = *(int *)(iVar6 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    uVar10 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e2d000 + 0x1e2cd90) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e2d000 + 0x1e2cd90));
    }
    puVar4 = *(undefined4 **)(_UNK_01e2d004 + 0x1e2cdb8);
  }
  else {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x6c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar2 + 8) != '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x6c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x02793684(iVar2,0);
        }
        uVar10 = func_0x01e2ffc4(param_1,iVar2);
        if (*(int *)(**(int **)(_UNK_01e2d034 + 0x1e2ccb8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (iVar2 == 0) {
          func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d03c + 0x1e2cfa8),0);
        }
        else {
          func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d038 + 0x1e2cce0),0);
          func_0x01e3028c(param_1,uVar10);
        }
        return 1;
      }
      if (*(int *)(**(int **)(_UNK_01e2d020 + 0x1e2cecc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d024 + 0x1e2ceec),0);
      iVar6 = **(int **)(_UNK_01e2d028 + 0x1e2cefc);
      iVar2 = *(int *)(iVar6 + 0x1c);
      if (iVar2 == 0) {
        func_0x0140024c(iVar6);
        iVar2 = *(int *)(iVar6 + 0x1c);
      }
      iVar2 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar10 = **(undefined4 **)(iVar2 + 0x5c);
      if (*(int *)(**(int **)(_UNK_01e2d02c + 0x1e2cf5c) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01e2d02c + 0x1e2cf5c));
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01e2d030 + 0x1e2cf90),uVar10,0);
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_01e2d00c + 0x1e2cdc4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d010 + 0x1e2cde4),0);
    iVar6 = **(int **)(_UNK_01e2d014 + 0x1e2cdf4);
    iVar2 = *(int *)(iVar6 + 0x1c);
    if (iVar2 == 0) {
      func_0x0140024c(iVar6);
      iVar2 = *(int *)(iVar6 + 0x1c);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    uVar10 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e2d018 + 0x1e2ce54) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e2d018 + 0x1e2ce54));
    }
    puVar4 = *(undefined4 **)(_UNK_01e2d01c + 0x1e2ce7c);
  }
  func_0x028c23bc(*puVar4,uVar10,0);
  if (*(int *)(**(int **)(_UNK_01e2d008 + 0x1e2ce98) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar10 = func_0x024440d8(0);
  uVar10 = VectorSignedToFloat(uVar10,(byte)(uVar12 >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x14) = uVar10;
  return 0;
}



// ===== FAT.ArchiveMan$$SetLoadArchiveFinishCb RVA 0x1e1c9cc =====

void FUN_01e2c9cc(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xe43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xe43,0);
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
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.ArchiveMan.UploadHelper$$TryResolve RVA 0x1e1ca28 =====

void FUN_01e2ca28(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa11a,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0xa11a,0);
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



// ===== FAT.ArchiveMan.UploadHelper$$get_HasPendingUploadRequest RVA 0x1e1ca88 =====

uint FUN_01e2ca88(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa11b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa11b,0);
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
  return (uint)*(byte *)(param_1 + 8);
}



// ===== FAT.ArchiveMan$$_SaveArchiveData RVA 0x1e1cadc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e2cadc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
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
  
  pcVar4 = (char *)(_UNK_01e2cfb8 + 0x1e2caf0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfbc + 0x1e2cb04));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc0 + 0x1e2cb10));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc4 + 0x1e2cb1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfc8 + 0x1e2cb28));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfcc + 0x1e2cb34));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd0 + 0x1e2cb40));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd4 + 0x1e2cb4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfd8 + 0x1e2cb58));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfdc + 0x1e2cb64));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe0 + 0x1e2cb70));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe4 + 0x1e2cb7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfe8 + 0x1e2cb88));
    func_0x01384978(*(undefined4 *)(_UNK_01e2cfec + 0x1e2cb94));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa11c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa11c,0);
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
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2cff0 + 0x1e2cbec));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01c36988(iVar1,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01e2cff4 + 0x1e2cd00) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2cff8 + 0x1e2cd20),0);
    iVar5 = **(int **)(_UNK_01e2cffc + 0x1e2cd30);
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
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e2d000 + 0x1e2cd90) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e2d000 + 0x1e2cd90));
    }
    puVar2 = *(undefined4 **)(_UNK_01e2d004 + 0x1e2cdb8);
  }
  else {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x6c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 8) != '\0') {
      if (*(char *)(param_1 + 0x20) != '\0') {
        iVar1 = 0;
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02793684(iVar1,0);
        }
        uVar6 = func_0x01e2ffc4(param_1,iVar1);
        if (*(int *)(**(int **)(_UNK_01e2d034 + 0x1e2ccb8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        if (iVar1 == 0) {
          func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d03c + 0x1e2cfa8),0);
        }
        else {
          func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d038 + 0x1e2cce0),0);
          func_0x01e3028c(param_1,uVar6);
        }
        return 1;
      }
      if (*(int *)(**(int **)(_UNK_01e2d020 + 0x1e2cecc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d024 + 0x1e2ceec),0);
      iVar5 = **(int **)(_UNK_01e2d028 + 0x1e2cefc);
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
      uVar6 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_01e2d02c + 0x1e2cf5c) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01e2d02c + 0x1e2cf5c));
      }
      func_0x028c23bc(**(undefined4 **)(_UNK_01e2d030 + 0x1e2cf90),uVar6,0);
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_01e2d00c + 0x1e2cdc4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d010 + 0x1e2cde4),0);
    iVar5 = **(int **)(_UNK_01e2d014 + 0x1e2cdf4);
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
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e2d018 + 0x1e2ce54) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e2d018 + 0x1e2ce54));
    }
    puVar2 = *(undefined4 **)(_UNK_01e2d01c + 0x1e2ce7c);
  }
  func_0x028c23bc(*puVar2,uVar6,0);
  if (*(int *)(**(int **)(_UNK_01e2d008 + 0x1e2ce98) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar6 = func_0x024440d8(0);
  uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  return 0;
}



// ===== FAT.ArchiveMan$$SendImmediately RVA 0x1e1d040 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e2d040(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  bool bVar8;
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
  
  pcVar6 = (char *)(_UNK_01e2d18c + 0x1e2d058);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2d190 + 0x1e2d06c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d194 + 0x1e2d078));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d198 + 0x1e2d084));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x327,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x327,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_0218506c + 0x2184f78);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02185070 + 0x2184f8c),param_1,param_2,0);
      *pcVar6 = '\x01';
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    iVar2 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02185074 + 0x218505c));
    return iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e2d1ac(iVar2);
  bVar8 = *(char *)(param_1 + 0x20) != '\0';
  cVar1 = '\0';
  if (bVar8) {
    cVar1 = *(char *)(param_1 + 0x10);
  }
  if (bVar8 && cVar1 != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
      func_0x01e2d204(param_1);
    }
    else {
      if (*(int *)(**(int **)(_UNK_01e2d19c + 0x1e2d154) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d1a0 + 0x1e2d174),0);
    }
    return *(int *)(param_1 + 0x18);
  }
  if (*(int *)(**(int **)(_UNK_01e2d1a4 + 0x1e2d10c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d1a8 + 0x1e2d12c),0);
  pcVar6 = (char *)(_UNK_028bcdbc + 0x28bcce4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028bcdc0 + 0x28bccf8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x32c,0);
  if (iVar2 == 0) {
    piVar5 = *(int **)(_UNK_028bcdc4 + 0x28bcd50);
    iVar2 = *(int *)(*(int *)(*piVar5 + 0x5c) + 4);
    if (iVar2 == 0) {
      iVar2 = func_0x01384be4();
      func_0x0244fedc(iVar2,0);
      *(int *)(*(int *)(*piVar5 + 0x5c) + 4) = iVar2;
      uVar7 = extraout_r1;
      if (iVar2 == 0) {
        func_0x01384bf0();
        uVar7 = extraout_r1_00;
      }
      uStack_20 = 0;
      uStack_1c = 0;
      func_0x028bcdc8(iVar2,uVar7,0,0);
      iVar2 = *(int *)(*(int *)(*piVar5 + 0x5c) + 4);
    }
    return iVar2;
  }
  iVar2 = func_0x0229f13c(0x32c,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_02184f4c + 0x2184e7c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02184f50 + 0x2184e90),0);
    *pcVar6 = '\x01';
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    uVar7 = 0;
    if (*(int *)(iVar2 + 0x10) != 0) {
      uVar7 = 1;
    }
  }
  iVar4 = *(int *)(iVar2 + 8);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar4,uVar3,&uStack_30,uVar7);
  iVar2 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02184f54 + 0x2184f3c));
  return iVar2;
}



// ===== FAT.ArchiveMan.UploadHelper$$TryStartUpload RVA 0x1e1d1ac =====

void FUN_01e2d1ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x328,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x328,0);
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
  *(undefined2 *)(param_1 + 8) = 1;
  return;
}



// ===== FAT.ArchiveMan$$RequestImmediateSave RVA 0x1e1d204 =====

void FUN_01e2d204(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x329,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x329,0);
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
  *(undefined1 *)(param_1 + 0x4c) = 1;
  return;
}



// ===== FAT.ArchiveMan$$DebugSetAutoSaveEnabled RVA 0x1e1d25c =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2d25c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int iVar4;
  int iVar5;
  int unaff_r6;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
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
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  pcVar6 = (char *)(_UNK_01e2d418 + 0x1e2d274);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2d41c + 0x1e2d288));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d420 + 0x1e2d294));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d424 + 0x1e2d2a0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d428 + 0x1e2d2ac));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d42c + 0x1e2d2b8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa121,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa121,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2d430 + 0x1e2d314));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 10) != '\0') {
    *(char *)(param_1 + 0x34) = (char)param_2;
    if (param_2 == 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01e2d440 + 0x1e2d34c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar7 = func_0x024440d8(0);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x14) = uVar7;
    return;
  }
  iVar4 = **(int **)(_UNK_01e2d434 + 0x1e2d380);
  iVar1 = *(int *)(iVar4 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(iVar4);
    iVar1 = *(int *)(iVar4 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  uVar7 = **(undefined4 **)(iVar1 + 0x5c);
  if (*(int *)(**(int **)(_UNK_01e2d438 + 0x1e2d3e0) + 0x74) == 0) {
    func_0x01384ab4(**(int **)(_UNK_01e2d438 + 0x1e2d3e0));
  }
  uVar3 = **(undefined4 **)(_UNK_01e2d43c + 0x1e2d410);
  pcVar6 = (char *)(_UNK_028c24a0 + 0x28c23d4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c24a4 + 0x28c23e8),uVar7,0);
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x11,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x11,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar7,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,uVar3,0);
    func_0x01485278(&uStack_38,uVar7,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_028c24a8 + 0x28c2444);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  if (3 < *(int *)(*(int *)(iVar1 + 0x5c) + 4)) {
    return;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2be4(uVar7);
  iVar1 = func_0x046727d0(uVar3,uVar7,0);
  pcVar6 = (char *)(_UNK_028c2868 + 0x28c26ec);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x14,0);
  if (iVar4 != 0) {
    iVar2 = func_0x0229f13c(0x14,0);
    iVar4 = iStack_20;
    iVar9 = iStack_1c;
    iVar5 = iStack_18;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar4 = iStack_20;
      iVar9 = iStack_1c;
      iVar5 = iStack_18;
    }
    goto LAB_02174038;
  }
  piVar8 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  if (**(int **)(iVar4 + 0x5c) < 1) {
LAB_028c2848:
    iVar9 = iVar1;
    iVar1 = iStack_20;
    iVar5 = iStack_1c;
    iVar2 = iStack_18;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = iStack_20;
      iVar5 = iStack_1c;
      iVar2 = iStack_18;
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar4 = *piVar8;
    }
    iVar9 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar5 = **(int **)(iVar4 + 0x5c);
    if (iVar9 <= iVar5) goto LAB_028c2848;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = **(int **)(*piVar8 + 0x5c);
    }
    iVar4 = *(int *)(iVar1 + 8);
    if (iVar4 < 1) {
      return;
    }
    if (iVar4 < iVar5) {
      iVar5 = iVar4;
    }
    unaff_r7 = func_0x04673af4(iVar1,0,iVar5,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar9 = unaff_r7;
    iVar2 = 0;
    unaff_r8 = 3;
    unaff_r9 = piVar8;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = iVar2;
  *(int *)((int)register0x00000054 + -0xc) = iVar5;
  *(int *)((int)register0x00000054 + -0x10) = iVar1;
  pcVar6 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x15,0);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_028c31a0 + _UNK_028c31a8))();
    return;
  }
  iVar2 = func_0x0229f13c(0x15,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  unaff_lr = *(int *)((int)register0x00000054 + -4);
  iVar1 = iVar9;
  iVar4 = *(int *)((int)register0x00000054 + -0x10);
  iVar9 = *(int *)((int)register0x00000054 + -0xc);
  iVar5 = *(int *)((int)register0x00000054 + -8);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = iVar5;
  *(int *)((int)register0x00000054 + -0x1c) = iVar9;
  *(int *)((int)register0x00000054 + -0x20) = iVar4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar1,0);
  iVar4 = *(int *)(iVar2 + 0x10);
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
  if (iVar4 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar4,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),3,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar4,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.ArchiveMan$$DebugIsAutoSaveEnabled RVA 0x1e1d444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e2d444(int param_1)

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
  
  pcVar4 = (char *)(_UNK_01e2d4fc + 0x1e2d458);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2d500 + 0x1e2d46c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa122,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa122,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2d504 + 0x1e2d4c4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 10) != '\0') {
    return (uint)(*(char *)(param_1 + 0x34) != '\0');
  }
  return 1;
}



// ===== FAT.ArchiveMan$$ExecuteAfterArchiveReady RVA 0x1e1d508 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2d508(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
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
  
  pcVar5 = (char *)(_UNK_01e2d624 + 0x1e2d520);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2d628 + 0x1e2d534));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1c52,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1c52,0);
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
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(uint *)(iVar1 + 0xc);
    piVar2 = *(int **)(_UNK_01e2d62c + 0x1e2d5dc);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar8 = *piVar2;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar7) {
      uVar7 = *(uint *)(iVar1 + 0xc);
      func_0x0328f754(iVar1,uVar7 + 1,
                      *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38) +
                                         0x10) + 0x60) + 0x3c));
      iVar4 = *(int *)(iVar1 + 8);
      *(uint *)(iVar1 + 0xc) = uVar7 + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar4 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
      return;
    }
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  }
  else if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01e2d5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0xc))(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x14));
    return;
  }
  return;
}



// ===== FAT.ArchiveMan$$OnReceiveServerArchive RVA 0x1e1d630 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2d630(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  pcVar5 = (char *)(_UNK_01e2d810 + 0x1e2d650);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2d814 + 0x1e2d664));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d818 + 0x1e2d670));
    func_0x01384978(*(undefined4 *)(_UNK_01e2d81c + 0x1e2d67c));
    *pcVar5 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xe7b,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    cVar1 = *(char *)(param_2 + 0x20);
    iVar3 = *(int *)(param_2 + 0xc);
    if (*(int *)(**(int **)(_UNK_01e2d820 + 0x1e2d6ec) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0199d1cc(**(undefined4 **)(_UNK_01e2d824 + 0x1e2d714),0);
    iVar6 = *(int *)(param_1 + 0x50);
    if (iVar6 == 0) {
      iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e2d828 + 0x1e2d730));
      func_0x0178e978(iVar6,0);
      *(int *)(param_1 + 0x50) = iVar6;
      if (iVar6 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    cVar2 = *(char *)(param_1 + 0x20);
    *(int *)(iVar6 + 0xc) = iVar3;
    *(undefined4 *)(iVar6 + 0x10) = param_3;
    *(char *)(param_1 + 8) = cVar1;
    if (cVar2 == '\0') {
      iVar4 = func_0x01c24918(0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(param_2 + 0x24);
      iVar4 = *(int *)(iVar4 + 0x94);
      cVar2 = *(char *)(param_2 + 0x21);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01cd67ac(iVar4,iVar6,cVar2 != '\0',uVar7,0);
      func_0x01e2d82c(param_1,iVar6,cVar1 != '\0');
    }
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x3c);
    uVar9 = FUN_01e2bd2c(param_1);
    iVar6 = (int)((ulonglong)uVar9 >> 0x20);
    iVar4 = *(int *)(iVar3 + 100);
    bVar8 = *(uint *)(iVar3 + 0x60) < (uint)uVar9;
    *(bool *)(param_1 + 0x21) =
         (int)(iVar4 - (iVar6 + (uint)bVar8)) < 0 !=
         (SBORROW4(iVar4,iVar6) != SBORROW4(iVar4 - iVar6,(uint)bVar8));
  }
  else {
    iVar3 = func_0x0229f13c(0xe7b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar3,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_InitializeGameArchive RVA 0x1e1d82c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2d82c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01e2de7c + 0x1e2d84c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2de80 + 0x1e2d860));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de84 + 0x1e2d86c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de88 + 0x1e2d878));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de8c + 0x1e2d884));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de90 + 0x1e2d890));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de94 + 0x1e2d89c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de98 + 0x1e2d8a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2de9c + 0x1e2d8b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2dea0 + 0x1e2d8c0));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0xe85,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x20) == 0) {
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e2dea4 + 0x1e2d968));
      func_0x0178add0(uVar2,0);
      *(undefined4 *)(iVar1 + 0x20) = uVar2;
    }
    if (*(int *)(iVar1 + 0x24) == 0) {
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e2dea8 + 0x1e2d994));
      func_0x0178b230(uVar2,0);
      *(undefined4 *)(iVar1 + 0x24) = uVar2;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    func_0x01e2dfb4(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    func_0x01e2e398(param_1,param_2);
    func_0x01e2e614(param_1,param_2,param_3);
    func_0x01e2ebbc(param_1,param_2);
    if (param_3 != 0) {
      func_0x01e2efa0(param_1,param_2);
    }
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 100);
    iVar3 = *(int *)(param_2 + 0x10);
    iVar6 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    if (iVar3 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r1;
    }
    uVar8 = *(undefined4 *)(iVar3 + 0x14);
    uVar4 = *(undefined4 *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
      uVar2 = extraout_r1_00;
    }
    func_0x02452518(iVar6,uVar2,uVar4,uVar8,**(undefined4 **)(_UNK_01e2deac + 0x1e2da60));
    func_0x01e2f380(param_1,param_2);
    iVar1 = **(int **)(**(int **)(_UNK_01e2deb0 + 0x1e2da90) + 0x5c);
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (iVar1 != 0) {
      func_0x020a2924(iVar1,0);
    }
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_38,iVar1,**(undefined4 **)(_UNK_01e2deb4 + 0x1e2dad0));
    puVar5 = *(undefined4 **)(_UNK_01e2deb8 + 0x1e2dae4);
    while (iVar1 = func_0x0145b12c(&uStack_38,*puVar5), iVar1 != 0) {
      if (iStack_2c != 0) {
        (**(code **)(iStack_2c + 0xc))
                  (*(undefined4 *)(iStack_2c + 0x20),*(undefined4 *)(iStack_2c + 0x14));
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e2ded0 + 0x1e2db20));
    iVar1 = *(int *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xe85,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$DiscardLocalArchiveNextLogin RVA 0x1e1dee0 =====

/* WARNING: Removing unreachable block (ram,0x0255d13c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2dee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
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
  
  pcVar6 = (char *)(_UNK_01e2dfa8 + 0x1e2df00);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2dfac + 0x1e2df14));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xd63,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xd63,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02197394(iVar1,param_1,param_3,param_4);
    return;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e2dfb0 + 0x1e2df7c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_0255d150 + 0x255d0a0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0255d154 + 0x255d0b4),1,0);
    func_0x01384978(*(undefined4 *)(_UNK_0255d158 + 0x255d0c0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xc89,0);
  if (iVar2 == 0) {
    func_0x02451800(**(undefined4 **)(_UNK_0255d15c + 0x255d120),
                    **(undefined4 **)(_UNK_0255d160 + 0x255d134),0);
    (*(code *)&UNK_05183f80)(0);
    return;
  }
  iVar2 = func_0x0229f13c(0xc89,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar1,0);
  func_0x01485228(&uStack_38,1,0);
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



// ===== FAT.ArchiveMan$$_Apply_OnPreSetUserData RVA 0x1e1dfb4 =====

/* WARNING: Removing unreachable block (ram,0x01e2e248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2dfb4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01e2e34c + 0x1e2dfd0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2e350 + 0x1e2dfe4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e354 + 0x1e2dff0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e358 + 0x1e2dffc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e35c + 0x1e2e008));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e360 + 0x1e2e014));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e364 + 0x1e2e020));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e368 + 0x1e2e02c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e36c + 0x1e2e038));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e370 + 0x1e2e044));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_24 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0xe86,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01e2e374 + 0x1e2e0bc);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_24,**(undefined4 **)(_UNK_01e2e378 + 0x1e2e0f8));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2e37c + 0x1e2e10c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c3548c(iVar2,0);
    iVar2 = iStack_24;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02fe1b64(iVar3,iVar2,**(undefined4 **)(_UNK_01e2e380 + 0x1e2e14c));
    iVar2 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar2,**(undefined4 **)(_UNK_01e2e384 + 0x1e2e174));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    piStack_34 = piStack_44;
    puVar9 = *(undefined4 **)(_UNK_01e2e388 + 0x1e2e198);
    piVar8 = *(int **)(_UNK_01e2e38c + 0x1e2e1a0);
    while (iVar2 = func_0x0145b12c(&uStack_40,*puVar9), piVar1 = piStack_34, iVar2 != 0) {
      if (piStack_34 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01e2e210;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar8,0);
LAB_01e2e210:
      (*(code *)*puVar4)(piVar1,param_2,puVar4[1]);
    }
    func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01e2e390 + 0x1e2e238));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xe86,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_ParseLoginProperty RVA 0x1e1e398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e398(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  undefined8 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01e2e600 + 0x1e2e3b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2e604 + 0x1e2e3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2e608 + 0x1e2e3d4));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0xe87,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar2 + 0x30);
    uVar6 = func_0x01c24918(0);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      func_0x01384bf0();
      uVar4 = extraout_r1;
    }
    iVar2 = *(int *)((int)uVar6 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
      uVar4 = extraout_r1_00;
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
      uVar4 = extraout_r1_01;
    }
    iVar5 = *(int *)(param_2 + 0x10);
    iVar2 = *(int *)(iVar2 + 0x42c);
    if (iVar5 == 0) {
      func_0x01384bf0();
      uVar4 = extraout_r1_02;
    }
    func_0x01c3600c(&uStack_40,uVar4,*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),0);
    uStack_2c = uStack_3c;
    uStack_30 = uStack_40;
    if (*(int *)(**(int **)(_UNK_01e2e60c + 0x1e2e4d8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = VectorSignedToFloat(-iVar2,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    func_0x01485e38(&uStack_40,&uStack_30,(int)uVar6,uVar4,0);
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    func_0x01c35534(&uStack_40,0);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    func_0x01485e38(&uStack_40,&uStack_30,(int)uVar6,uVar4,0);
    uStack_24 = uStack_3c;
    uStack_28 = uStack_40;
    func_0x01485ef8(&uStack_40,&uStack_28,0);
    uVar1 = uStack_3c;
    uVar4 = uStack_40;
    func_0x01485ef8(&uStack_40,&uStack_20,0);
    func_0x024515c8(&uStack_40,uStack_3c,uVar4,uVar1,uStack_40,uStack_3c,0);
    uStack_34 = uStack_3c;
    uStack_38 = uStack_40;
    if (*(int *)(**(int **)(_UNK_01e2e610 + 0x1e2e5c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x0245251c(&uStack_38,0);
    *(undefined4 *)(param_1 + 0x68) = uVar4;
  }
  else {
    iVar2 = func_0x0229f13c(0xe87,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_Apply_UserDataVersionUpgrader RVA 0x1e1e614 =====

/* WARNING: Removing unreachable block (ram,0x01e2e9e8) */
/* WARNING: Removing unreachable block (ram,0x01e2ea08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2e614(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *piStack_4c;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01e2eb58 + 0x1e2e634);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb5c + 0x1e2e648));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb60 + 0x1e2e654));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb64 + 0x1e2e660));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb68 + 0x1e2e66c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb6c + 0x1e2e678));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb70 + 0x1e2e684));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb74 + 0x1e2e690));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb78 + 0x1e2e69c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb7c + 0x1e2e6a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb80 + 0x1e2e6b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb84 + 0x1e2e6c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2eb88 + 0x1e2e6cc));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_40 = 0;
  iVar2 = func_0x0229f06c(0xe8a,0);
  if (iVar2 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = param_2[4];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (((iVar2 != 0) && (param_3 == 0)) && (iVar2 != *(int *)(param_1 + 0xc))) {
      puVar11 = *(undefined4 **)(_UNK_01e2eb8c + 0x1e2e790);
      iStack_58 = iVar2;
      uVar3 = func_0x01384abc(*puVar11,&iStack_58);
      uStack_44 = *(undefined4 *)(param_1 + 0xc);
      uVar4 = func_0x01384abc(*puVar11,&uStack_44);
      uVar3 = func_0x0244f690(**(undefined4 **)(_UNK_01e2eb90 + 0x1e2e7c8),uVar3,uVar4,0);
      if (*(int *)(**(int **)(_UNK_01e2eb94 + 0x1e2e7dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0199d1cc(uVar3,0);
      iVar5 = (**(code **)(*param_2 + 0x140))(param_2,*(undefined4 *)(*param_2 + 0x144));
      iVar12 = *(int *)(param_1 + 0x60);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x01e2fb44(iVar12,iVar5,param_2,iVar2,uVar3);
      piVar10 = *(int **)(_UNK_01e2eb98 + 0x1e2e848);
      iVar2 = *piVar10;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar10;
      }
      iVar2 = **(int **)(iVar2 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0359c380(&uStack_30,iVar2,&iStack_28,**(undefined4 **)(_UNK_01e2eb9c + 0x1e2e884));
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2eba0 + 0x1e2e898));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar12 = func_0x01c3548c(iVar2,0);
      iVar2 = iStack_28;
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x02fe1b64(iVar12,iVar2,**(undefined4 **)(_UNK_01e2eba4 + 0x1e2e8d8));
      iVar2 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&iStack_58,iVar2,**(undefined4 **)(_UNK_01e2eba8 + 0x1e2e904));
      iStack_40 = iStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      piStack_34 = piStack_4c;
      puVar11 = *(undefined4 **)(_UNK_01e2ebac + 0x1e2e928);
      piVar10 = *(int **)(_UNK_01e2ebb0 + 0x1e2e930);
      while (iVar2 = func_0x0145b12c(&iStack_40,*puVar11), piVar1 = piStack_34, iVar2 != 0) {
        if (piStack_34 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar10) {
              puVar6 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_01e2e9a0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar1,*piVar10,0);
LAB_01e2e9a0:
        (*(code *)*puVar6)(piVar1,iVar5,param_2,puVar6[1]);
      }
      func_0x0145b14c(&iStack_40,**(undefined4 **)(_UNK_01e2ebb4 + 0x1e2e9d4));
      func_0x028c98a0(&uStack_30,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      uVar4 = *(undefined4 *)(iVar2 + 0xc);
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      func_0x019a3ae0(uVar4,uVar3,iVar2,param_2[4],0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xe8a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02175630(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_Apply_UserDataHolder_SetData RVA 0x1e1ebbc =====

/* WARNING: Removing unreachable block (ram,0x01e2ee50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2ebbc(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01e2ef54 + 0x1e2ebd8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef58 + 0x1e2ebec));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef5c + 0x1e2ebf8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef60 + 0x1e2ec04));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef64 + 0x1e2ec10));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef68 + 0x1e2ec1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef6c + 0x1e2ec28));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef70 + 0x1e2ec34));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef74 + 0x1e2ec40));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ef78 + 0x1e2ec4c));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_24 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0xe8d,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01e2ef7c + 0x1e2ecc4);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_24,**(undefined4 **)(_UNK_01e2ef80 + 0x1e2ed00));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2ef84 + 0x1e2ed14));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c3548c(iVar2,0);
    iVar2 = iStack_24;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02fe1b64(iVar3,iVar2,**(undefined4 **)(_UNK_01e2ef88 + 0x1e2ed54));
    iVar2 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar2,**(undefined4 **)(_UNK_01e2ef8c + 0x1e2ed7c));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    piStack_34 = piStack_44;
    puVar9 = *(undefined4 **)(_UNK_01e2ef90 + 0x1e2eda0);
    piVar8 = *(int **)(_UNK_01e2ef94 + 0x1e2eda8);
    while (iVar2 = func_0x0145b12c(&uStack_40,*puVar9), piVar1 = piStack_34, iVar2 != 0) {
      if (piStack_34 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01e2ee18;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar8,0);
LAB_01e2ee18:
      (*(code *)*puVar4)(piVar1,param_2,puVar4[1]);
    }
    func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01e2ef98 + 0x1e2ee40));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xe8d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_Apply_UserDataInitializer RVA 0x1e1efa0 =====

/* WARNING: Removing unreachable block (ram,0x01e2f230) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2efa0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_01e2f334 + 0x1e2efbc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2f338 + 0x1e2efd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f33c + 0x1e2efdc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f340 + 0x1e2efe8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f344 + 0x1e2eff4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f348 + 0x1e2f000));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f34c + 0x1e2f00c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f350 + 0x1e2f018));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f354 + 0x1e2f024));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f358 + 0x1e2f030));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0xe8e,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01e2f35c + 0x1e2f0a8);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_28,iVar2,&iStack_1c,**(undefined4 **)(_UNK_01e2f360 + 0x1e2f0e4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2f364 + 0x1e2f0f8));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c3548c(iVar2,0);
    iVar2 = iStack_1c;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02fe1b64(iVar3,iVar2,**(undefined4 **)(_UNK_01e2f368 + 0x1e2f138));
    iVar2 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar2,**(undefined4 **)(_UNK_01e2f36c + 0x1e2f160));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    puVar9 = *(undefined4 **)(_UNK_01e2f370 + 0x1e2f184);
    piVar8 = *(int **)(_UNK_01e2f374 + 0x1e2f18c);
    while (iVar2 = func_0x0145b12c(&uStack_38,*puVar9), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01e2f1fc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar8,0);
LAB_01e2f1fc:
      (*(code *)*puVar4)(piVar1,puVar4[1]);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e2f378 + 0x1e2f220));
    func_0x028c98a0(&uStack_28,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xe8e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_Apply_PostSetUserDataListener RVA 0x1e1f380 =====

/* WARNING: Removing unreachable block (ram,0x01e2f610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2f380(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_01e2f714 + 0x1e2f39c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2f718 + 0x1e2f3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f71c + 0x1e2f3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f720 + 0x1e2f3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f724 + 0x1e2f3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f728 + 0x1e2f3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f72c + 0x1e2f3ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f730 + 0x1e2f3f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f734 + 0x1e2f404));
    func_0x01384978(*(undefined4 *)(_UNK_01e2f738 + 0x1e2f410));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_1c = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0xe8f,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01e2f73c + 0x1e2f488);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_28,iVar2,&iStack_1c,**(undefined4 **)(_UNK_01e2f740 + 0x1e2f4c4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2f744 + 0x1e2f4d8));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c3548c(iVar2,0);
    iVar2 = iStack_1c;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02fe1b64(iVar3,iVar2,**(undefined4 **)(_UNK_01e2f748 + 0x1e2f518));
    iVar2 = iStack_1c;
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar2,**(undefined4 **)(_UNK_01e2f74c + 0x1e2f540));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    piStack_2c = piStack_3c;
    puVar9 = *(undefined4 **)(_UNK_01e2f750 + 0x1e2f564);
    piVar8 = *(int **)(_UNK_01e2f754 + 0x1e2f56c);
    while (iVar2 = func_0x0145b12c(&uStack_38,*puVar9), piVar1 = piStack_2c, iVar2 != 0) {
      if (piStack_2c == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01e2f5dc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar8,0);
LAB_01e2f5dc:
      (*(code *)*puVar4)(piVar1,puVar4[1]);
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e2f758 + 0x1e2f600));
    func_0x028c98a0(&uStack_28,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xe8f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_Apply_OnReceiveServerData RVA 0x1e1f760 =====

/* WARNING: Removing unreachable block (ram,0x01e2f9f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2f760(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01e2faf8 + 0x1e2f77c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2fafc + 0x1e2f790));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb00 + 0x1e2f79c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb04 + 0x1e2f7a8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb08 + 0x1e2f7b4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb0c + 0x1e2f7c0));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb10 + 0x1e2f7cc));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb14 + 0x1e2f7d8));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb18 + 0x1e2f7e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e2fb1c + 0x1e2f7f0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_24 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0xa123,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01e2fb20 + 0x1e2f868);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_24,**(undefined4 **)(_UNK_01e2fb24 + 0x1e2f8a4));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2fb28 + 0x1e2f8b8));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c3548c(iVar2,0);
    iVar2 = iStack_24;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02fe1b64(iVar3,iVar2,**(undefined4 **)(_UNK_01e2fb2c + 0x1e2f8f8));
    iVar2 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar2,**(undefined4 **)(_UNK_01e2fb30 + 0x1e2f920));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    piStack_34 = piStack_44;
    puVar9 = *(undefined4 **)(_UNK_01e2fb34 + 0x1e2f944);
    piVar8 = *(int **)(_UNK_01e2fb38 + 0x1e2f94c);
    while (iVar2 = func_0x0145b12c(&uStack_40,*puVar9), piVar1 = piStack_34, iVar2 != 0) {
      if (piStack_34 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
            goto LAB_01e2f9bc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar8,0);
LAB_01e2f9bc:
      (*(code *)*puVar4)(piVar1,param_2,puVar4[1]);
    }
    func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01e2fb3c + 0x1e2f9e4));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xa123,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$_Apply_UserDataHolder_FillData RVA 0x1e1fbe0 =====

/* WARNING: Removing unreachable block (ram,0x01e2fe74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e2fbe0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int *piStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_01e2ff78 + 0x1e2fbfc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff7c + 0x1e2fc10));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff80 + 0x1e2fc1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff84 + 0x1e2fc28));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff88 + 0x1e2fc34));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff8c + 0x1e2fc40));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff90 + 0x1e2fc4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff94 + 0x1e2fc58));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff98 + 0x1e2fc64));
    func_0x01384978(*(undefined4 *)(_UNK_01e2ff9c + 0x1e2fc70));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_34 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_24 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0xa11e,0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(_UNK_01e2ffa0 + 0x1e2fce8);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar8;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0359c380(&uStack_30,iVar2,&iStack_24,**(undefined4 **)(_UNK_01e2ffa4 + 0x1e2fd24));
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01e2ffa8 + 0x1e2fd38));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x01c3548c(iVar2,0);
    iVar2 = iStack_24;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02fe1b64(iVar3,iVar2,**(undefined4 **)(_UNK_01e2ffac + 0x1e2fd78));
    iVar2 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_50,iVar2,**(undefined4 **)(_UNK_01e2ffb0 + 0x1e2fda0));
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    piStack_34 = piStack_44;
    puVar9 = *(undefined4 **)(_UNK_01e2ffb4 + 0x1e2fdc4);
    piVar8 = *(int **)(_UNK_01e2ffb8 + 0x1e2fdcc);
    while (iVar2 = func_0x0145b12c(&uStack_40,*puVar9), piVar1 = piStack_34, iVar2 != 0) {
      if (piStack_34 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar1;
      uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar8) {
            puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 200);
            goto LAB_01e2fe3c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar1,*piVar8,1);
LAB_01e2fe3c:
      (*(code *)*puVar4)(piVar1,param_2,puVar4[1]);
    }
    func_0x0145b14c(&uStack_40,**(undefined4 **)(_UNK_01e2ffbc + 0x1e2fe64));
    func_0x028c98a0(&uStack_30,0);
  }
  else {
    iVar2 = func_0x0229f13c(0xa11e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ArchiveMan$$SerializeArchive RVA 0x1e1ffc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e2ffc4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_01e30250 + 0x1e2ffe0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e30254 + 0x1e2fff4));
    func_0x01384978(*(undefined4 *)(_UNK_01e30258 + 0x1e30000));
    func_0x01384978(*(undefined4 *)(_UNK_01e3025c + 0x1e3000c));
    func_0x01384978(*(undefined4 *)(_UNK_01e30260 + 0x1e30018));
    func_0x01384978(*(undefined4 *)(_UNK_01e30264 + 0x1e30024));
    func_0x01384978(*(undefined4 *)(_UNK_01e30268 + 0x1e30030));
    func_0x01384978(*(undefined4 *)(_UNK_01e3026c + 0x1e3003c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa11d,0);
  if (iVar1 == 0) {
    uVar12 = 0;
    if (param_2 != 0) {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e30270 + 0x1e300ac));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar12 = func_0x01c359e8(iVar1,0);
    }
    iVar7 = (int)((ulonglong)uVar12 >> 0x20);
    uVar10 = (uint)uVar12;
    iStack_28 = param_2;
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e30274 + 0x1e300e4));
    func_0x0178e978(iVar1,0);
    iVar8 = *(int *)(param_1 + 0x50);
    if (iVar8 != 0) {
      pcVar4 = *(char **)(iVar8 + 0xc);
    }
    if (iVar8 == 0 || pcVar4 == (char *)0x0) {
      pcVar4 = *(char **)(param_1 + 0x58);
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01e30278 + 0x1e30120);
    *(char **)(iVar1 + 0xc) = pcVar4;
    iVar8 = func_0x01384be4(*puVar2);
    func_0x0178e19c(iVar8,0);
    puVar2 = *(undefined4 **)(_UNK_01e3027c + 0x1e30140);
    *(int *)(iVar1 + 0x10) = iVar8;
    uVar9 = func_0x01384be4(*puVar2);
    func_0x0178b230(uVar9,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01e30280 + 0x1e3016c);
    *(undefined4 *)(iVar8 + 0x24) = uVar9;
    uVar9 = func_0x01384be4(*puVar2);
    func_0x0178add0(uVar9,0);
    iVar5 = *(int *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(iVar8 + 0x20) = uVar9;
    *(undefined4 *)(iVar8 + 0xc) = uVar3;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_01e30284 + 0x1e301ac);
    uVar13 = func_0x02452514(iVar5,*puVar2);
    iVar5 = (int)((ulonglong)uVar13 >> 0x20);
    bVar11 = (uint)uVar13 < uVar10;
    if ((int)(iVar5 - (iVar7 + (uint)bVar11)) < 0 !=
        (SBORROW4(iVar5,iVar7) != SBORROW4(iVar5 - iVar7,(uint)bVar11))) {
      iVar6 = *(int *)(param_1 + 0x30);
      if (iVar6 == 0) {
        func_0x01384bf0();
        iVar5 = extraout_r1;
      }
      uStack_30 = **(undefined4 **)(_UNK_01e30288 + 0x1e301e0);
      func_0x02452518(iVar6,iVar5,uVar10,iVar7);
    }
    iVar7 = *(int *)(param_1 + 0x30);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar13 = func_0x02452514(iVar7,*puVar2);
    *(undefined8 *)(iVar8 + 0x10) = uVar13;
    FUN_01e2fbe0(param_1,iVar1);
    if ((iStack_28 != 0) && (*(char *)(param_1 + 0x21) == '\0')) {
      *(undefined8 *)(param_1 + 0x28) = uVar12;
    }
    uVar9 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar8 + 0x1c) = uVar9;
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0xa11d,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_0228c474 + 0x228c380);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0228c478 + 0x228c394),param_1,param_2,0);
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485228(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar9 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar8,uVar9,&uStack_38,uVar3,0,0);
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228c47c + 0x228c464));
  return iVar1;
}



// ===== FAT.ArchiveMan$$_UploadArchiveToRemote RVA 0x1e2028c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e3028c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
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
  
  pcVar5 = (char *)(_UNK_01e3048c + 0x1e302a4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e30490 + 0x1e302b8));
    func_0x01384978(*(undefined4 *)(_UNK_01e30494 + 0x1e302c4));
    func_0x01384978(*(undefined4 *)(_UNK_01e30498 + 0x1e302d0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa11f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa11f,0);
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
  piVar2 = *(int **)(param_1 + 0x18);
  if ((piVar2 == (int *)0x0) ||
     (iVar1 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc)), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x50) == 0) {
      uVar6 = 0;
    }
    else {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x6c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x02798120(iVar1,param_2,0);
      *(undefined4 *)(param_1 + 0x18) = uVar6;
      uVar6 = func_0x0145b18c(0);
      iVar1 = *(int *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e304a8(iVar1);
      uVar6 = 1;
    }
  }
  else {
    iVar4 = **(int **)(_UNK_01e3049c + 0x1e30350);
    iVar1 = *(int *)(iVar4 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar4);
      iVar1 = *(int *)(iVar4 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar3 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_01e304a0 + 0x1e303b0) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01e304a0 + 0x1e303b0));
    }
    uVar6 = 0;
    func_0x028c23bc(**(undefined4 **)(_UNK_01e304a4 + 0x1e303e4),uVar3,0);
  }
  return uVar6;
}



// ===== FAT.ArchiveMan.UploadHelper$$AfterUpload RVA 0x1e204a8 =====

void FUN_01e304a8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa120,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa120,0);
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
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.ArchiveMan$$.ctor RVA 0x1e20500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e30500(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01e30604 + 0x1e30518);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e30608 + 0x1e3052c));
    func_0x01384978(*(undefined4 *)(_UNK_01e3060c + 0x1e30538));
    func_0x01384978(*(undefined4 *)(_UNK_01e30610 + 0x1e30544));
    func_0x01384978(*(undefined4 *)(_UNK_01e30614 + 0x1e30550));
    *pcVar4 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_01e30618 + 0x1e3056c);
  *(undefined4 *)(param_1 + 0x14) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  iVar2 = func_0x01384be4(*puVar1);
  func_0x028d21e0(iVar2,0);
  uVar3 = extraout_r1;
  if (iVar2 == 0) {
    func_0x01384bf0();
    uVar3 = extraout_r1_00;
  }
  uVar3 = func_0x02452518(iVar2,uVar3,0,0,**(undefined4 **)(_UNK_01e3061c + 0x1e305a8));
  puVar1 = *(undefined4 **)(_UNK_01e30620 + 0x1e305c4);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined1 *)(param_1 + 0x34) = 1;
  uVar3 = func_0x01384be4(*puVar1);
  func_0x0328e950(uVar3,**(undefined4 **)(_UNK_01e30624 + 0x1e305e4));
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


