/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.Board$$get_world RVA 0x20c83c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020d83c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x262,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x262,0);
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
  return *(undefined4 *)(param_1 + 0x98);
}



// ===== FAT.Merge.Board$$get_boardId RVA 0x20c841c =====

undefined4 FUN_020d841c(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.Board$$set_boardId RVA 0x20c8424 =====

void FUN_020d8424(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.Merge.Board$$get_emptyGridCount RVA 0x20c842c =====

undefined4 FUN_020d842c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x875,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x875,0);
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
  return *(undefined4 *)(param_1 + 0x88);
}



// ===== FAT.Merge.Board$$add_onItemMerge RVA 0x20c8480 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8480(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8524 + 0x20d8498);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8528 + 0x20d84ac));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d852c + 0x20d84c4);
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0xc),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemMerge RVA 0x20c8530 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8530(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d85d4 + 0x20d8548);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d85d8 + 0x20d855c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d85dc + 0x20d8574);
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0xc),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemEat RVA 0x20c85e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d85e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8684 + 0x20d85f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8688 + 0x20d860c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d868c + 0x20d8624);
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x10),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemEat RVA 0x20c8690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8690(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8734 + 0x20d86a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8738 + 0x20d86bc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d873c + 0x20d86d4);
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x10),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemConsume RVA 0x20c8740 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8740(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d87e4 + 0x20d8758);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d87e8 + 0x20d876c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d87ec + 0x20d8784);
  iVar1 = *(int *)(param_1 + 0x14);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x14),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemConsume RVA 0x20c87f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d87f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8894 + 0x20d8808);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8898 + 0x20d881c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d889c + 0x20d8834);
  iVar1 = *(int *)(param_1 + 0x14);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x14),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemMove RVA 0x20c88a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d88a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8944 + 0x20d88b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8948 + 0x20d88cc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d894c + 0x20d88e4);
  iVar1 = *(int *)(param_1 + 0x18);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x18),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemMove RVA 0x20c8950 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8950(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d89f4 + 0x20d8968);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d89f8 + 0x20d897c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d89fc + 0x20d8994);
  iVar1 = *(int *)(param_1 + 0x18);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x18),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemStateChange RVA 0x20c8a00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8a00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8aa4 + 0x20d8a18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8aa8 + 0x20d8a2c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8aac + 0x20d8a44);
  iVar1 = *(int *)(param_1 + 0x1c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x1c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemStateChange RVA 0x20c8ab0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8b54 + 0x20d8ac8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8b58 + 0x20d8adc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8b5c + 0x20d8af4);
  iVar1 = *(int *)(param_1 + 0x1c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x1c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemDead RVA 0x20c8b60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8b60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8c04 + 0x20d8b78);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8c08 + 0x20d8b8c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8c0c + 0x20d8ba4);
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x20),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemDead RVA 0x20c8c10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8c10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8cb4 + 0x20d8c28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8cb8 + 0x20d8c3c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8cbc + 0x20d8c54);
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x20),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemSell RVA 0x20c8cc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8cc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8d64 + 0x20d8cd8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8d68 + 0x20d8cec));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8d6c + 0x20d8d04);
  iVar1 = *(int *)(param_1 + 0x24);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x24),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemSell RVA 0x20c8d70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8d70(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8e14 + 0x20d8d88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8e18 + 0x20d8d9c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8e1c + 0x20d8db4);
  iVar1 = *(int *)(param_1 + 0x24);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x24),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemSpawn RVA 0x20c8e20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8e20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8ec4 + 0x20d8e38);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8ec8 + 0x20d8e4c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8ecc + 0x20d8e64);
  iVar1 = *(int *)(param_1 + 0x28);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x28),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemSpawn RVA 0x20c8ed0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8ed0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d8f74 + 0x20d8ee8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d8f78 + 0x20d8efc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d8f7c + 0x20d8f14);
  iVar1 = *(int *)(param_1 + 0x28);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x28),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemSpawnFly RVA 0x20c8f80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d8f80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9024 + 0x20d8f98);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9028 + 0x20d8fac));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d902c + 0x20d8fc4);
  iVar1 = *(int *)(param_1 + 0x2c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x2c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemSpawnFly RVA 0x20c9030 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9030(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d90d4 + 0x20d9048);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d90d8 + 0x20d905c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d90dc + 0x20d9074);
  iVar1 = *(int *)(param_1 + 0x2c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x2c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemSpawnFlySmart RVA 0x20c90e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d90e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9184 + 0x20d90f8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9188 + 0x20d910c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d918c + 0x20d9124);
  iVar1 = *(int *)(param_1 + 0x30);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x30),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemSpawnFlySmart RVA 0x20c9190 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9190(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9234 + 0x20d91a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9238 + 0x20d91bc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d923c + 0x20d91d4);
  iVar1 = *(int *)(param_1 + 0x30);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x30),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemToInventory RVA 0x20c9240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9240(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d92e4 + 0x20d9258);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d92e8 + 0x20d926c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d92ec + 0x20d9284);
  iVar1 = *(int *)(param_1 + 0x34);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x34),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemToInventory RVA 0x20c92f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d92f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9394 + 0x20d9308);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9398 + 0x20d931c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d939c + 0x20d9334);
  iVar1 = *(int *)(param_1 + 0x34);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x34),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemFromInventory RVA 0x20c93a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d93a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9444 + 0x20d93b8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9448 + 0x20d93cc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d944c + 0x20d93e4);
  iVar1 = *(int *)(param_1 + 0x38);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x38),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemFromInventory RVA 0x20c9450 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9450(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d94f4 + 0x20d9468);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d94f8 + 0x20d947c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d94fc + 0x20d9494);
  iVar1 = *(int *)(param_1 + 0x38);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x38),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemComponentChange RVA 0x20c9500 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9500(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d95a4 + 0x20d9518);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d95a8 + 0x20d952c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d95ac + 0x20d9544);
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x3c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemComponentChange RVA 0x20c95b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d95b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9654 + 0x20d95c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9658 + 0x20d95dc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d965c + 0x20d95f4);
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x3c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onUseTimeSkipper RVA 0x20c9660 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9660(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9704 + 0x20d9678);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9708 + 0x20d968c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d970c + 0x20d96a4);
  iVar1 = *(int *)(param_1 + 0x40);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x40),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onUseTimeSkipper RVA 0x20c9710 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9710(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d97b4 + 0x20d9728);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d97b8 + 0x20d973c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d97bc + 0x20d9754);
  iVar1 = *(int *)(param_1 + 0x40);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x40),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onUseTimeScaleSource RVA 0x20c97c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d97c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9864 + 0x20d97d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9868 + 0x20d97ec));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d986c + 0x20d9804);
  iVar1 = *(int *)(param_1 + 0x44);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x44),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onUseTimeScaleSource RVA 0x20c9870 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9870(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9914 + 0x20d9888);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9918 + 0x20d989c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d991c + 0x20d98b4);
  iVar1 = *(int *)(param_1 + 0x44);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x44),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onJumpCDBegin RVA 0x20c9920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9920(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d99c4 + 0x20d9938);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d99c8 + 0x20d994c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d99cc + 0x20d9964);
  iVar1 = *(int *)(param_1 + 0x48);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x48),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onJumpCDBegin RVA 0x20c99d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d99d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9a74 + 0x20d99e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9a78 + 0x20d99fc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d9a7c + 0x20d9a14);
  iVar1 = *(int *)(param_1 + 0x48);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x48),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onJumpCDEnd RVA 0x20c9a80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9a80(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_020d9b14 + 0x20d9a98);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9b18 + 0x20d9aac));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_020d9b1c + 0x20d9ac4);
  iVar1 = *(int *)(param_1 + 0x4c);
  do {
    piVar2 = (int *)func_0x024507e8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_020d9af4:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_020d9af4;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x4c),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$remove_onJumpCDEnd RVA 0x20c9b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9b20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_020d9bb4 + 0x20d9b38);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9bb8 + 0x20d9b4c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_020d9bbc + 0x20d9b64);
  iVar1 = *(int *)(param_1 + 0x4c);
  do {
    piVar2 = (int *)func_0x024507f8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_020d9b94:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_020d9b94;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x4c),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$add_onTokenMultiBegin RVA 0x20c9bc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9bc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9c64 + 0x20d9bd8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9c68 + 0x20d9bec));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d9c6c + 0x20d9c04);
  iVar1 = *(int *)(param_1 + 0x50);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x50),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onTokenMultiBegin RVA 0x20c9c70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9c70(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020d9d14 + 0x20d9c88);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9d18 + 0x20d9c9c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020d9d1c + 0x20d9cb4);
  iVar1 = *(int *)(param_1 + 0x50);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x50),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onTokenMultiEnd RVA 0x20c9d20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9d20(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_020d9db4 + 0x20d9d38);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9db8 + 0x20d9d4c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_020d9dbc + 0x20d9d64);
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    piVar2 = (int *)func_0x024507e8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_020d9d94:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_020d9d94;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x54),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$remove_onTokenMultiEnd RVA 0x20c9dc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9dc0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_020d9e54 + 0x20d9dd8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9e58 + 0x20d9dec));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_020d9e5c + 0x20d9e04);
  iVar1 = *(int *)(param_1 + 0x54);
  do {
    piVar2 = (int *)func_0x024507f8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_020d9e34:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_020d9e34;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x54),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$add_onLackOfEnergy RVA 0x20c9e60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9e60(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_020d9ef4 + 0x20d9e78);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9ef8 + 0x20d9e8c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_020d9efc + 0x20d9ea4);
  iVar1 = *(int *)(param_1 + 0x58);
  do {
    piVar2 = (int *)func_0x024507e8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_020d9ed4:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_020d9ed4;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x58),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$remove_onLackOfEnergy RVA 0x20c9f00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9f00(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_020d9f94 + 0x20d9f18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020d9f98 + 0x20d9f2c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_020d9f9c + 0x20d9f44);
  iVar1 = *(int *)(param_1 + 0x58);
  do {
    piVar2 = (int *)func_0x024507f8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_020d9f74:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_020d9f74;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x58),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$add_onFeatureClicked RVA 0x20c9fa0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d9fa0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da044 + 0x20d9fb8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da048 + 0x20d9fcc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da04c + 0x20d9fe4);
  iVar1 = *(int *)(param_1 + 0x5c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x5c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onFeatureClicked RVA 0x20ca050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da050(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da0f4 + 0x20da068);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da0f8 + 0x20da07c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da0fc + 0x20da094);
  iVar1 = *(int *)(param_1 + 0x5c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x5c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onChoiceBoxWaiting RVA 0x20ca100 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da100(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da1a4 + 0x20da118);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da1a8 + 0x20da12c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da1ac + 0x20da144);
  iVar1 = *(int *)(param_1 + 0x60);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x60),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onChoiceBoxWaiting RVA 0x20ca1b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da1b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da254 + 0x20da1c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da258 + 0x20da1dc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da25c + 0x20da1f4);
  iVar1 = *(int *)(param_1 + 0x60);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x60),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemLeave RVA 0x20ca260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da260(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da304 + 0x20da278);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da308 + 0x20da28c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da30c + 0x20da2a4);
  iVar1 = *(int *)(param_1 + 100);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 100),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemLeave RVA 0x20ca310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da310(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da3b4 + 0x20da328);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da3b8 + 0x20da33c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da3bc + 0x20da354);
  iVar1 = *(int *)(param_1 + 100);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 100),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onItemEnter RVA 0x20ca3c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da3c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da464 + 0x20da3d8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da468 + 0x20da3ec));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da46c + 0x20da404);
  iVar1 = *(int *)(param_1 + 0x68);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x68),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onItemEnter RVA 0x20ca470 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da470(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da514 + 0x20da488);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da518 + 0x20da49c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da51c + 0x20da4b4);
  iVar1 = *(int *)(param_1 + 0x68);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x68),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$add_onEffectChange RVA 0x20ca520 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da520(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da5c4 + 0x20da538);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da5c8 + 0x20da54c));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da5cc + 0x20da564);
  iVar1 = *(int *)(param_1 + 0x6c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x6c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$remove_onEffectChange RVA 0x20ca5d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da5d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_020da674 + 0x20da5e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da678 + 0x20da5fc));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_020da67c + 0x20da614);
  iVar1 = *(int *)(param_1 + 0x6c);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x6c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Board$$get_size RVA 0x20ca680 =====

void FUN_020da680(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x57c,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0x8c);
    uStack_14 = *(undefined4 *)(param_2 + 0x90);
  }
  else {
    iVar1 = func_0x0229f13c(0x57c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218000c(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.Merge.Board$$get_ProduceReason RVA 0x20ca6f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020da6f4(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_020da798 + 0x20da708);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020da79c + 0x20da71c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9de0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_020da7a0 + 0x20da774));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(iVar1 + 0x10);
  pcVar3 = (char *)(_UNK_021626c8 + 0x21625d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021626cc + 0x21625e4),0);
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9de1,0);
  if (iVar1 == 0) {
    switch(uVar6) {
    case 1:
      iVar1 = 0x84;
      piVar4 = *(int **)(_UNK_021626d0 + 0x2162668);
      break;
    case 2:
      iVar1 = 0x88;
      piVar4 = *(int **)(&UNK_02162688 + _UNK_021626d4);
      break;
    case 3:
      iVar1 = 0x8c;
      piVar4 = *(int **)(&UNK_02162698 + _UNK_021626d8);
      break;
    case 4:
      iVar1 = 0x90;
      piVar4 = *(int **)(_UNK_021626dc + 0x21626a8);
      break;
    default:
      iVar1 = 0x80;
      piVar4 = *(int **)(&UNK_02162678 + _UNK_021626e0);
    }
    iVar5 = *piVar4;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar4;
    }
    return *(undefined4 *)(*(int *)(iVar5 + 0x5c) + iVar1);
  }
  iVar1 = func_0x0229f13c(0x9de1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_02285c1c + 0x2285b3c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02285c20 + 0x2285b50),uVar6,0);
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
  func_0x01485238(&uStack_30,uVar6,0);
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
  uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02285c24 + 0x2285c0c));
  return uVar6;
}



// ===== FAT.Merge.Board$$get_EquivalentToMain RVA 0x20ca7a4 =====

undefined1 FUN_020da7a4(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa0);
}



// ===== FAT.Merge.Board$$set_EquivalentToMain RVA 0x20ca7ac =====

void FUN_020da7ac(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa0) = param_2;
  return;
}



// ===== FAT.Merge.Board$$get_GiftBoxUnable RVA 0x20ca7b4 =====

undefined1 FUN_020da7b4(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa1);
}



// ===== FAT.Merge.Board$$set_GiftBoxUnable RVA 0x20ca7bc =====

void FUN_020da7bc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa1) = param_2;
  return;
}



// ===== FAT.Merge.Board$$get_LockCloudEmptyGrid RVA 0x20ca7c4 =====

undefined1 FUN_020da7c4(int param_1)

{
  return *(undefined1 *)(param_1 + 0xa2);
}



// ===== FAT.Merge.Board$$set_LockCloudEmptyGrid RVA 0x20ca7cc =====

void FUN_020da7cc(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xa2) = param_2;
  return;
}



// ===== FAT.Merge.Board$$.ctor RVA 0x20ca7d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020da7d4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_020dab18 + 0x20da7ec);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dab1c + 0x20da800));
    func_0x01384978(*(undefined4 *)(_UNK_020dab20 + 0x20da80c));
    func_0x01384978(*(undefined4 *)(_UNK_020dab24 + 0x20da818));
    func_0x01384978(*(undefined4 *)(_UNK_020dab28 + 0x20da824));
    func_0x01384978(*(undefined4 *)(_UNK_020dab2c + 0x20da830));
    func_0x01384978(*(undefined4 *)(_UNK_020dab30 + 0x20da83c));
    func_0x01384978(*(undefined4 *)(_UNK_020dab34 + 0x20da848));
    func_0x01384978(*(undefined4 *)(_UNK_020dab38 + 0x20da854));
    func_0x01384978(*(undefined4 *)(_UNK_020dab3c + 0x20da860));
    func_0x01384978(*(undefined4 *)(_UNK_020dab40 + 0x20da86c));
    func_0x01384978(*(undefined4 *)(_UNK_020dab44 + 0x20da878));
    func_0x01384978(*(undefined4 *)(_UNK_020dab48 + 0x20da884));
    func_0x01384978(*(undefined4 *)(_UNK_020dab4c + 0x20da890));
    func_0x01384978(*(undefined4 *)(_UNK_020dab50 + 0x20da89c));
    func_0x01384978(*(undefined4 *)(_UNK_020dab54 + 0x20da8a8));
    func_0x01384978(*(undefined4 *)(_UNK_020dab58 + 0x20da8b4));
    func_0x01384978(*(undefined4 *)(_UNK_020dab5c + 0x20da8c0));
    func_0x01384978(*(undefined4 *)(_UNK_020dab60 + 0x20da8cc));
    func_0x01384978(*(undefined4 *)(_UNK_020dab64 + 0x20da8d8));
    func_0x01384978(*(undefined4 *)(_UNK_020dab68 + 0x20da8e4));
    func_0x01384978(*(undefined4 *)(_UNK_020dab6c + 0x20da8f0));
    *pcVar5 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020dab70 + 0x20da904));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_020dab74 + 0x20da918));
  puVar2 = *(undefined4 **)(_UNK_020dab78 + 0x20da92c);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_020dab7c + 0x20da944));
  puVar2 = *(undefined4 **)(_UNK_020dab80 + 0x20da958);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_020dab84 + 0x20da970));
  puVar2 = *(undefined4 **)(_UNK_020dab88 + 0x20da984);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0210f2ec(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_020dab8c + 0x20da9a8);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = func_0x01384a00(*puVar2,0);
  puVar2 = *(undefined4 **)(_UNK_020dab90 + 0x20da9bc);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x01384a00(*puVar2,0);
  puVar2 = *(undefined4 **)(_UNK_020dab94 + 0x20da9d8);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450558(uVar1,**(undefined4 **)(_UNK_020dab98 + 0x20da9f4));
  puVar6 = *(undefined4 **)(_UNK_020dab9c + 0x20daa08);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  uVar1 = func_0x01384be4(*puVar6);
  puVar4 = *(undefined4 **)(_UNK_020daba0 + 0x20daa20);
  func_0x03258eb8(uVar1,*puVar4);
  puVar2 = *(undefined4 **)(_UNK_020daba4 + 0x20daa30);
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_020daba8 + 0x20daa48));
  uVar3 = *puVar6;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x03258eb8(uVar1,*puVar4);
  puVar2 = *(undefined4 **)(_UNK_020dabac + 0x20daa74);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_020dabb0 + 0x20daa8c));
  puVar2 = *(undefined4 **)(_UNK_020dabb4 + 0x20daaa0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0210c780(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_020dabb8 + 0x20daac0);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_020dabbc + 0x20daad8));
  puVar2 = *(undefined4 **)(_UNK_020dabc0 + 0x20daaec);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x021582e4(uVar1,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  return;
}



// ===== FAT.Merge.Board$$Reset RVA 0x20cabc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dabc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x5bbc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bbc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x02179c40(iVar1,param_1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  pcVar6 = (char *)(_UNK_020dae84 + 0x20dac6c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dae88 + 0x20dac80));
    func_0x01384978(*(undefined4 *)(_UNK_020dae8c + 0x20dac8c));
    func_0x01384978(*(undefined4 *)(_UNK_020dae90 + 0x20dac98));
    func_0x01384978(*(undefined4 *)(_UNK_020dae94 + 0x20daca4));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x5bbe,0);
  if (iVar1 == 0) {
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= (int)uVar7) {
        func_0x020eea64(param_1,param_3,param_4);
        iVar1 = *(int *)(param_1 + 0x78);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar4) {
          func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
        }
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0210d528(iVar1,param_3,param_4,param_1,0);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar7 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) != 0) break;
      uVar7 = uVar7 + 1;
    }
    func_0x020df144(param_1,uVar7,&stack0xffffffe4,&stack0xffffffe0);
    puVar5 = *(undefined4 **)(_UNK_020dae98 + 0x20dae10);
    uStack_24 = 0;
    uVar2 = func_0x01384abc(*puVar5,&uStack_24);
    uStack_28 = 0;
    uVar3 = func_0x01384abc(*puVar5,&uStack_28);
    uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_020dae9c + 0x20dae4c),uVar2,uVar3,0);
    if (*(int *)(**(int **)(_UNK_020daea0 + 0x20dae60) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5bbe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.Board$$_Reset RVA 0x20cac4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dac4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_020dae84 + 0x20dac6c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dae88 + 0x20dac80));
    func_0x01384978(*(undefined4 *)(_UNK_020dae8c + 0x20dac8c));
    func_0x01384978(*(undefined4 *)(_UNK_020dae90 + 0x20dac98));
    func_0x01384978(*(undefined4 *)(_UNK_020dae94 + 0x20daca4));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5bbe,0);
  if (iVar1 == 0) {
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= (int)uVar7) {
        func_0x020eea64(param_1,param_2,param_3);
        iVar1 = *(int *)(param_1 + 0x78);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 0xc);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (0 < iVar4) {
          func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
        }
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0210d528(iVar1,param_2,param_3,param_1,0);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar7 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) != 0) break;
      uVar7 = uVar7 + 1;
    }
    func_0x020df144(param_1,uVar7,&uStack_1c,&uStack_20);
    puVar5 = *(undefined4 **)(_UNK_020dae98 + 0x20dae10);
    uStack_24 = uStack_1c;
    uVar2 = func_0x01384abc(*puVar5,&uStack_24);
    uStack_28 = uStack_20;
    uVar3 = func_0x01384abc(*puVar5,&uStack_28);
    uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_020dae9c + 0x20dae4c),uVar2,uVar3,0);
    if (*(int *)(**(int **)(_UNK_020daea0 + 0x20dae60) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5bbe,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$SetBoardParam RVA 0x20caea4 =====

void FUN_020daea4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5bd1,0);
  if (iVar1 == 0) {
    *(char *)(param_1 + 0xa1) = (char)param_3;
    *(char *)(param_1 + 0xa0) = (char)param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x5bd1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02181e64(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$Deserialize RVA 0x20caf18 =====

/* WARNING: Removing unreachable block (ram,0x020db5b0) */
/* WARNING: Removing unreachable block (ram,0x020db5bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020daf18(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_020db7f0 + 0x20daf34);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020db7f4 + 0x20daf48));
    func_0x01384978(*(undefined4 *)(_UNK_020db7f8 + 0x20daf54));
    func_0x01384978(*(undefined4 *)(_UNK_020db7fc + 0x20daf60));
    func_0x01384978(*(undefined4 *)(_UNK_020db800 + 0x20daf6c));
    func_0x01384978(*(undefined4 *)(_UNK_020db804 + 0x20daf78));
    func_0x01384978(*(undefined4 *)(_UNK_020db808 + 0x20daf84));
    func_0x01384978(*(undefined4 *)(_UNK_020db80c + 0x20daf90));
    func_0x01384978(*(undefined4 *)(_UNK_020db810 + 0x20daf9c));
    func_0x01384978(*(undefined4 *)(_UNK_020db814 + 0x20dafa8));
    func_0x01384978(*(undefined4 *)(_UNK_020db818 + 0x20dafb4));
    func_0x01384978(*(undefined4 *)(_UNK_020db81c + 0x20dafc0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c66,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c66,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = iStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
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
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar7,0,0);
    return;
  }
  uVar9 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar9) break;
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar9) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + uVar9 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = uVar9 + 1;
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_020db820 + 0x20db094)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto LAB_020db0dc;
      }
      uVar9 = uVar9 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_020db820 + 0x20db094),0);
LAB_020db0dc:
  piStack_3c = param_2;
  piVar5 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
  piVar13 = *(int **)(_UNK_020db824 + 0x20db104);
LAB_020db100:
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar9 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar13) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_020db15c;
      }
      uVar9 = uVar9 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,*piVar13,0);
LAB_020db15c:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  piVar6 = piStack_3c;
  if (iVar1 != 0) {
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_020db828 + 0x20db190)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_020db1d8;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_020db828 + 0x20db190),0);
LAB_020db1d8:
    (*(code *)*puVar2)(&iStack_30,piVar5,puVar2[1]);
    iVar1 = iStack_2c;
    if (iStack_2c == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_30,iVar1,0);
    iVar10 = iStack_30;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&iStack_30,iVar1,0);
    uVar9 = func_0x020db85c(param_1,iVar10,iStack_2c);
    if ((int)uVar9 < 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_30,iVar1,0);
      iStack_34 = iStack_30;
      uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_020db82c + 0x20db3f4),&iStack_34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_30,iVar1,0);
      iStack_30 = iStack_2c;
      uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_020db830 + 0x20db430),&iStack_30);
      uVar11 = func_0x0244f690(**(undefined4 **)(_UNK_020db834 + 0x20db44c),uVar11,uVar7,0);
      if (*(int *)(**(int **)(_UNK_020db838 + 0x20db468) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar11,0);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x80);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar10 + 0xc) <= uVar9) {
        func_0x01384bf4();
      }
      iVar10 = *(int *)(iVar10 + uVar9 * 4 + 0x10);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar10 + 8) == 0) {
        iVar10 = *(int *)(param_1 + 0x80);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar9) {
          func_0x01384bf4();
        }
        iVar10 = *(int *)(iVar10 + uVar9 * 4 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(param_1 + 0x80);
        *(int *)(iVar10 + 8) = iVar1;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar12 + 0xc) <= uVar9) {
          func_0x01384bf4();
        }
        uVar11 = *(undefined4 *)(iVar12 + uVar9 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02117440(iVar1,param_1,uVar11,0);
        iVar10 = *(int *)(param_1 + 0x7c);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x0210d794(iVar10,iVar1,0);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_30,iVar1,0);
        iStack_34 = iStack_30;
        uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_020db83c + 0x20db2b8),&iStack_34);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_30,iVar1,0);
        iStack_30 = iStack_2c;
        uVar7 = func_0x01384abc(**(undefined4 **)(_UNK_020db840 + 0x20db2f4),&iStack_30);
        iVar1 = *(int *)(param_1 + 0x80);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar9) {
          func_0x01384bf4();
        }
        iVar1 = *(int *)(iVar1 + uVar9 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = func_0x0210e5f4(iVar1,0);
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_020db844 + 0x20db360),&uStack_38);
        uStack_40 = 0;
        uVar11 = func_0x02450228(**(undefined4 **)(_UNK_020db848 + 0x20db380),uVar11,uVar7,uVar3);
        if (*(int *)(**(int **)(_UNK_020db84c + 0x20db3a4) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar11,0);
      }
    }
    goto LAB_020db100;
  }
  if (piVar5 != (int *)0x0) {
    iVar1 = *piVar5;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar13[-1] == **(int **)(_UNK_020db850 + 0x20db550)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar13 * 8 + 0xc0);
          goto LAB_020db598;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_020db850 + 0x20db550),0);
LAB_020db598:
    (*(code *)*puVar2)(piVar5,puVar2[1]);
  }
  iVar1 = *(int *)(param_1 + 0x80);
  uVar9 = 0;
  piVar5 = *(int **)(_UNK_020db854 + 0x20db5d8);
  do {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar9) {
      func_0x020db8ec(param_1);
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar9) {
      func_0x01384bf4();
    }
    iVar12 = *(int *)(iVar1 + uVar9 * 4 + 0x10);
    iVar10 = 0;
    if (iVar12 != 0) {
      iVar10 = *(int *)(iVar12 + 8);
    }
    if (iVar12 != 0 && iVar10 != 0) {
      uVar11 = func_0x0210e5f4(iVar10,0);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar10 = *piVar6;
      uVar4 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar4 != 0) {
        piVar13 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar13[-1] == *piVar5) {
            puVar2 = (undefined4 *)(iVar10 + *piVar13 * 8 + 0xf0);
            goto LAB_020db678;
          }
          uVar4 = uVar4 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,*piVar5,6);
LAB_020db678:
      (*(code *)*puVar2)(piVar6,uVar11,puVar2[1]);
    }
    uVar9 = uVar9 + 1;
  } while( true );
}



// ===== FAT.Merge.Board$$_CalculateIdxByCoord RVA 0x20cb85c =====

int FUN_020db85c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = func_0x0229f06c(0x24c,0);
  if (iVar2 == 0) {
    iVar2 = -1;
    if (-1 < param_2 && -1 < param_3) {
      iVar3 = *(int *)(param_1 + 0x8c);
      bVar6 = SBORROW4(iVar3,param_2);
      iVar1 = iVar3 - param_2;
      bVar5 = iVar3 == param_2;
      if (param_2 < iVar3) {
        iVar4 = *(int *)(param_1 + 0x90);
        bVar6 = SBORROW4(iVar4,param_3);
        iVar1 = iVar4 - param_3;
        bVar5 = iVar4 == param_3;
      }
      if (!bVar5 && iVar1 < 0 == bVar6) {
        iVar2 = iVar3 * param_3 + param_2;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x24c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02180128(iVar2,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.Merge.Board$$_RefreshEmptyGridCount RVA 0x20cb8ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020db8ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
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
  
  pcVar3 = (char *)(_UNK_020dba08 + 0x20db900);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dba0c + 0x20db914));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x250,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    puVar7 = *(undefined4 **)(_UNK_020dba10 + 0x20db974);
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= (int)uVar4) break;
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar4) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar4 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) == 0) {
        iVar1 = *(int *)(param_1 + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450564(iVar1,uVar4,*puVar7);
        if (iVar1 == 0) {
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        }
      }
      uVar4 = uVar4 + 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x250,0);
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



// ===== FAT.Merge.Board$$WalkAllItem RVA 0x20cba14 =====

void FUN_020dba14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
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
  
  iVar1 = func_0x0229f06c(0x2a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2a8,0);
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
  iVar1 = 4;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = iVar1 - 4;
    if (*(int *)(iVar3 + 0xc) <= (int)uVar4) break;
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar4) {
      func_0x01384bf4();
    }
    iVar3 = *(int *)(iVar3 + iVar1 * 4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 8) != 0) {
      iVar3 = *(int *)(param_1 + 0x80);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar4) {
        func_0x01384bf4();
      }
      iVar3 = *(int *)(iVar3 + iVar1 * 4);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar3 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      (**(code **)(param_2 + 0xc))
                (*(undefined4 *)(param_2 + 0x20),uVar5,*(undefined4 *)(param_2 + 0x14));
    }
    iVar1 = iVar1 + 1;
  }
  return;
}



// ===== FAT.Merge.Board$$WalkAllGrid RVA 0x20cbb28 =====

void FUN_020dbb28(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0xb305,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb305,0);
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
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar5) break;
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    uVar4 = *(undefined4 *)(iVar1 + uVar5 * 4 + 0x10);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    (**(code **)(param_2 + 0xc))
              (*(undefined4 *)(param_2 + 0x20),uVar4,*(undefined4 *)(param_2 + 0x14));
    uVar5 = uVar5 + 1;
  }
  return;
}



// ===== FAT.Merge.Board$$WalkAllArea RVA 0x20cbbf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dbbf0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  
  pcVar3 = (char *)(_UNK_020dbce8 + 0x20dbc08);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dbcec + 0x20dbc1c));
    func_0x01384978(*(undefined4 *)(_UNK_020dbcf0 + 0x20dbc28));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x0229f06c(0xb306,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb306,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  puVar6 = *(undefined4 **)(_UNK_020dbcf4 + 0x20dbc88);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x74);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x74);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0328eea8(iVar1,iVar4,*puVar6);
      (**(code **)(param_2 + 0xc))
                (*(undefined4 *)(param_2 + 0x20),uVar5,*(undefined4 *)(param_2 + 0x14));
    }
    iVar4 = iVar4 + 1;
  }
  return;
}



// ===== FAT.Merge.Board$$GetGridTid RVA 0x20cbcf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dbcf8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_020dbdc8 + 0x20dbd18);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dbdcc + 0x20dbd2c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5ba4,0);
  if (iVar1 == 0) {
    uVar2 = FUN_020db85c(param_1,param_2,param_3);
    iVar1 = func_0x02f24418(*(undefined4 *)(param_1 + 0x80),uVar2,2,
                            **(undefined4 **)(_UNK_020dbdd0 + 0x20dbdac));
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0xc);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ba4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x02180128(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Board$$AddArea RVA 0x20cbdd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dbdd4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r1;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
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
  
  pcVar8 = (char *)(_UNK_020dbf9c + 0x20dbdec);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dbfa0 + 0x20dbe00));
    func_0x01384978(*(undefined4 *)(_UNK_020dbfa4 + 0x20dbe0c));
    func_0x01384978(*(undefined4 *)(_UNK_020dbfa8 + 0x20dbe18));
    func_0x01384978(*(undefined4 *)(_UNK_020dbfac + 0x20dbe24));
    func_0x01384978(*(undefined4 *)(_UNK_020dbfb0 + 0x20dbe30));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bd6,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020dbfb4 + 0x20dbe8c));
    func_0x0210ae38(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_020dbfb8 + 0x20dbeb4);
    *(int *)(iVar1 + 8) = param_1;
    iVar7 = func_0x01384be4(*puVar2);
    func_0x0244f5a0(iVar7,0);
    *(int *)(iVar7 + 8) = param_2;
    FUN_020d7aa4(iVar7);
    iVar5 = *(int *)(param_1 + 0x74);
    *(int *)(iVar1 + 0xc) = iVar7;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar5 + 8);
    uVar9 = *(uint *)(iVar5 + 0xc);
    piVar3 = *(int **)(_UNK_020dbfbc + 0x20dbf08);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    iVar11 = *piVar3;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar9 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar9 + 1;
      *(int *)(iVar6 + uVar9 * 4 + 0x10) = iVar7;
    }
    else {
      func_0x0328f170(iVar5,iVar7,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    }
    param_1 = *(int *)(iVar1 + 0xc);
    param_2 = func_0x01384be4(**(undefined4 **)(_UNK_020dbfc0 + 0x20dbf58));
    func_0x03db53a8(param_2,iVar1,**(undefined4 **)(_UNK_020dbfc4 + 0x20dbf78),0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_020d7f1c + 0x20d7cd0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020d7f20 + 0x20d7ce4));
      func_0x01384978(*(undefined4 *)(_UNK_020d7f24 + 0x20d7cf0));
      *pcVar8 = '\x01';
    }
    iVar7 = 0;
    iVar1 = func_0x0229f06c(0x5bdb,0);
    if (iVar1 == 0) {
      puVar2 = *(undefined4 **)(_UNK_020d7f28 + 0x20d7d54);
      piVar3 = *(int **)(_UNK_020d7f2c + 0x20d7d5c);
      while( true ) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) <= iVar7) break;
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0364c9b8(iVar1,iVar7,*puVar2);
        if (param_2 != 0 && iVar1 != 0) {
          if (*(char *)(_UNK_020d7f30 + 0x20d7dcc) == '\0') {
            func_0x01384978(piVar3);
            *(undefined1 *)(_UNK_020d7f34 + 0x20d7dec) = 1;
          }
          iVar1 = *(int *)(param_1 + 0xc);
          iVar5 = *(int *)(param_1 + 0x14);
          if (*(int *)(*piVar3 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iStack_28 = func_0x0148aaf8(iVar1,iVar5 + iVar1,0);
          uVar10 = *(undefined4 *)(param_1 + 0x14);
          if (*(char *)(_UNK_020d7f38 + 0x20d7e2c) == '\0') {
            func_0x01384978(piVar3);
            *(undefined1 *)(_UNK_020d7f3c + 0x20d7e4c) = 1;
          }
          iVar1 = *(int *)(param_1 + 0x10);
          iVar5 = *(int *)(param_1 + 0x18);
          if (*(int *)(*piVar3 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar1 = func_0x0148aaf8(iVar1,iVar5 + iVar1,0);
          iVar5 = *(int *)(param_1 + 8);
          uVar4 = *(undefined4 *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x18);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x01458344(iVar7,uVar10);
          iVar6 = func_0x01457ae8(iVar7,uVar4);
          puVar2 = *(undefined4 **)(_UNK_020d7f40 + 0x20d7ed8);
          uVar10 = func_0x0364c9b8(iVar5,iVar7,*puVar2);
          uStack_30 = *(undefined4 *)(param_2 + 0x14);
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),extraout_r1 + iStack_28,iVar6 + iVar1,uVar10);
          piVar3 = *(int **)(_UNK_020d7f44 + 0x20d7f10);
        }
        iVar7 = iVar7 + 1;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x5bdb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bd6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  iStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar7,uVar10,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.Merge.Board$$InitAllCloud RVA 0x20cbfc8 =====

/* WARNING: Removing unreachable block (ram,0x020dc3ec) */
/* WARNING: Removing unreachable block (ram,0x020dc3f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dbfc8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_020dc6c4 + 0x20dbfe0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dc6c8 + 0x20dbff4));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6cc + 0x20dc000));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6d0 + 0x20dc00c));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6d4 + 0x20dc018));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6d8 + 0x20dc024));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6dc + 0x20dc030));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6e0 + 0x20dc03c));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6e4 + 0x20dc048));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6e8 + 0x20dc054));
    func_0x01384978(*(undefined4 *)(_UNK_020dc6ec + 0x20dc060));
    *pcVar9 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_28 = 0;
  uStack_40 = 0;
  uStack_2c = 0;
  uStack_44 = 0;
  iVar2 = func_0x0229f06c(0x5bdc,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
    }
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x01ca724c(iVar2,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_020dc6f0 + 0x20dc160)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_020dc1a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020dc6f0 + 0x20dc160),0);
LAB_020dc1a8:
    piVar3 = (int *)(*(code *)*puVar4)(piVar3,puVar4[1]);
    piVar7 = *(int **)(_UNK_020dc6f4 + 0x20dc1c8);
    piVar10 = *(int **)(_UNK_020dc6f8 + 0x20dc1d0);
LAB_020dc1cc:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_020dc228;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_020dc228:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar8[-1] == *piVar10) {
            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
            goto LAB_020dc29c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_020dc29c:
      iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(iVar2 + 0x14) == *(int *)(param_1 + 8)) &&
         (iVar2 = func_0x0210b4bc(iVar2,0,&uStack_2c,0), uVar1 = uStack_2c, iVar2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x70);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar2 + 8);
        uVar6 = *(uint *)(iVar2 + 0xc);
        piVar8 = *(int **)(_UNK_020dc6fc + 0x20dc324);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar11 = *piVar8;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar1;
        }
        else {
          func_0x0328f170(iVar2,uVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
        }
      }
      goto LAB_020dc1cc;
    }
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_020dc700 + 0x20dc38c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_020dc3d4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020dc700 + 0x20dc38c),0);
LAB_020dc3d4:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    iVar5 = func_0x020dc720(param_1,&iStack_28);
    iVar2 = iStack_28;
    if (iVar5 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      func_0x0325a3b4(&uStack_58,iVar2,**(undefined4 **)(_UNK_020dc704 + 0x20dc438));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      puVar4 = *(undefined4 **)(_UNK_020dc708 + 0x20dc45c);
      while (iVar2 = func_0x03f597e0(&uStack_40,*puVar4), uVar1 = uStack_34, iVar2 != 0) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ca7b80(iVar2,uVar1,0);
        if ((iVar2 != 0) &&
           (iVar2 = func_0x0210bb64(iVar2,1,&uStack_44,0), uVar1 = uStack_44, iVar2 != 0)) {
          iVar2 = *(int *)(param_1 + 0x70);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar2 + 8);
          uVar6 = *(uint *)(iVar2 + 0xc);
          piVar3 = *(int **)(_UNK_020dc710 + 0x20dc500);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar5 = *piVar3;
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          if (uVar6 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar6 + 1;
            *(undefined4 *)(iVar11 + uVar6 * 4 + 0x10) = uVar1;
          }
          else {
            func_0x0328f170(iVar2,uVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x03f597dc(&uStack_40,**(undefined4 **)(_UNK_020dc714 + 0x20dc554));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5bdc,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.Merge.Board$$TryGetLvAreaId RVA 0x20cc720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020dc720(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
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
  
  pcVar3 = (char *)(_UNK_020dc7dc + 0x20dc738);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dc7e0 + 0x20dc74c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5be3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    *param_2 = 0;
    if (iVar1 == 1) {
      iVar1 = *(int *)(param_1 + 0xa4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      bVar7 = *(int *)(iVar1 + 0xc) != 0;
      uVar6 = 0;
      if (bVar7) {
        uVar6 = *(undefined4 *)(param_1 + 0xa4);
      }
      uVar4 = (uint)bVar7;
      if (bVar7) {
        *param_2 = uVar6;
      }
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x5be3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_02234640 + 0x2234528);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02234644 + 0x223453c),param_1,param_2,0);
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0);
  uStack_28 = uStack_40;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  func_0x01485278(&uStack_38,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x014852b8(&uStack_38,0,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,1,0);
  uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02234648 + 0x223461c));
  *param_2 = uVar6;
  uVar4 = func_0x0245496c(&uStack_38,1,0);
  return uVar4;
}



// ===== FAT.Merge.Board$$RefreshCloudInfo RVA 0x20cc7e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dc7e4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_020dc9ec + 0x20dc804);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f0 + 0x20dc818));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f4 + 0x20dc824));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9f8 + 0x20dc830));
    func_0x01384978(*(undefined4 *)(_UNK_020dc9fc + 0x20dc83c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x57b,0);
  if (iVar1 == 0) {
    FUN_020da680(auStack_38,param_1);
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
    puVar4 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
    while (iVar2 = func_0x03f5f428(&uStack_30,*puVar4), iVar1 = iStack_24, iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c12c(iVar1,iStack_34,param_2 - iStack_34,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210c518(iVar1,param_3,0);
    }
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
    func_0x020dca14(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x57b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$_RefreshCloudMark RVA 0x20cca14 =====

/* WARNING: Removing unreachable block (ram,0x020dcd1c) */
/* WARNING: Removing unreachable block (ram,0x020dcd30) */
/* WARNING: Removing unreachable block (ram,0x020dcd28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dca14(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_020dce74 + 0x20dca2c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dce78 + 0x20dca40));
    func_0x01384978(*(undefined4 *)(_UNK_020dce7c + 0x20dca4c));
    func_0x01384978(*(undefined4 *)(_UNK_020dce80 + 0x20dca58));
    func_0x01384978(*(undefined4 *)(_UNK_020dce84 + 0x20dca64));
    func_0x01384978(*(undefined4 *)(_UNK_020dce88 + 0x20dca70));
    func_0x01384978(*(undefined4 *)(_UNK_020dce8c + 0x20dca7c));
    func_0x01384978(*(undefined4 *)(_UNK_020dce90 + 0x20dca88));
    func_0x01384978(*(undefined4 *)(_UNK_020dce94 + 0x20dca94));
    func_0x01384978(*(undefined4 *)(_UNK_020dce98 + 0x20dcaa0));
    func_0x01384978(*(undefined4 *)(_UNK_020dce9c + 0x20dcaac));
    *pcVar3 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  iVar1 = func_0x0229f06c(0x584,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0245055c(iVar1,**(undefined4 **)(_UNK_020dcea0 + 0x20dcb34));
    iVar1 = 0x10;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x84);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar4 + 0xc) <= (int)(iVar1 - 0x10U)) break;
      iVar4 = *(int *)(param_1 + 0x84);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar4 + 0xc) <= iVar1 - 0x10U) {
        func_0x01384bf4();
      }
      *(undefined1 *)(iVar4 + iVar1) = 0;
      iVar1 = iVar1 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_68,iVar1,**(undefined4 **)(_UNK_020dcea4 + 0x20dcbb4));
    uStack_38 = uStack_68;
    uStack_34 = uStack_64;
    uStack_30 = uStack_60;
    iStack_2c = iStack_5c;
    puVar6 = *(undefined4 **)(_UNK_020dcea8 + 0x20dcbdc);
    puVar5 = *(undefined4 **)(_UNK_020dceac + 0x20dcbe4);
    while (iVar4 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_020dceb8 + 0x20dcbec)),
          iVar1 = iStack_2c, iVar4 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x10) == '\0') {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0245034c(&uStack_68,iVar1,**(undefined4 **)(_UNK_020dceb0 + 0x20dcc34));
        uStack_50 = uStack_68;
        uStack_4c = uStack_64;
        uStack_48 = uStack_60;
        iStack_44 = iStack_5c;
        uStack_40 = uStack_58;
        while (iVar1 = func_0x03f4a79c(&uStack_50,*puVar6), iVar1 != 0) {
          uVar2 = FUN_020db85c(param_1,iStack_44,uStack_40);
          if (-1 < (int)uVar2) {
            iVar1 = *(int *)(param_1 + 0x84);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if ((int)uVar2 < *(int *)(iVar1 + 0xc)) {
              iVar1 = *(int *)(param_1 + 0x84);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (*(uint *)(iVar1 + 0xc) <= uVar2) {
                func_0x01384bf4();
              }
              *(undefined1 *)(iVar1 + uVar2 + 0x10) = 1;
              if (*(char *)(param_1 + 0xa2) != '\0') {
                iVar1 = *(int *)(param_1 + 0x9c);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x02450560(iVar1,uVar2,*puVar5);
              }
            }
          }
        }
        func_0x03f4a798(&uStack_50,**(undefined4 **)(_UNK_020dceb4 + 0x20dcd0c));
      }
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_020dcebc + 0x20dcd74));
    FUN_020db8ec(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x584,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.Merge.Board$$FillCurShowCloud RVA 0x20cced0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dced0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_020dd110 + 0x20dceec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd114 + 0x20dcf00));
    func_0x01384978(*(undefined4 *)(_UNK_020dd118 + 0x20dcf0c));
    func_0x01384978(*(undefined4 *)(_UNK_020dd11c + 0x20dcf18));
    func_0x01384978(*(undefined4 *)(_UNK_020dd120 + 0x20dcf24));
    func_0x01384978(*(undefined4 *)(_UNK_020dd124 + 0x20dcf30));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x5cef,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_38,iVar1,**(undefined4 **)(_UNK_020dd128 + 0x20dcfb8));
      puVar7 = *(undefined4 **)(_UNK_020dd12c + 0x20dcfcc);
      piVar6 = *(int **)(_UNK_020dd130 + 0x20dcfd4);
      while (iVar2 = func_0x03f5f428(&uStack_38,*puVar7), iVar1 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0210b3cc(iVar1,0);
        if (iVar2 != 0) {
          iVar3 = *(int *)(param_2 + 8);
          uVar5 = *(uint *)(param_2 + 0xc);
          iVar2 = *piVar6;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (uVar5 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar5 + 1;
            *(int *)(iVar3 + uVar5 * 4 + 0x10) = iVar1;
          }
          else {
            func_0x0328f170(param_2,iVar1,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_020dd134 + 0x20dd074));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5cef,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Board$$CheckHasLockCloud RVA 0x20cd140 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020dd140(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_020dd244 + 0x20dd154);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd248 + 0x20dd168));
    func_0x01384978(*(undefined4 *)(_UNK_020dd24c + 0x20dd174));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b7d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b7d,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    uVar3 = func_0x0245496c(&uStack_30,0,0);
    return uVar3;
  }
  puVar9 = *(undefined4 **)(_UNK_020dd250 + 0x20dd1d0);
  iVar1 = 0;
  do {
    iVar6 = iVar1;
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 0xc);
    if (iVar8 <= iVar6) break;
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0328eea8(iVar1,iVar6,*puVar9);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0210b3cc(iVar1,0);
    iVar1 = iVar6 + 1;
  } while (iVar2 == 0);
  return (uint)(iVar6 < iVar8);
}



// ===== FAT.Merge.Board$$CheckAllCloudUnlocked RVA 0x20cd254 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dd254(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_020dd42c + 0x20dd26c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd430 + 0x20dd280));
    func_0x01384978(*(undefined4 *)(_UNK_020dd434 + 0x20dd28c));
    func_0x01384978(*(undefined4 *)(_UNK_020dd438 + 0x20dd298));
    func_0x01384978(*(undefined4 *)(_UNK_020dd43c + 0x20dd2a4));
    func_0x01384978(*(undefined4 *)(_UNK_020dd440 + 0x20dd2b0));
    *pcVar4 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x78ce,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    uVar2 = 1;
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      func_0x0328fe1c(&uStack_20,iVar1,**(undefined4 **)(_UNK_020dd444 + 0x20dd334));
      puVar5 = *(undefined4 **)(_UNK_020dd448 + 0x20dd348);
      do {
        iVar3 = func_0x03f5f428(&uStack_20,*puVar5);
        iVar1 = iStack_14;
        if (iVar3 == 0) {
          iVar1 = 8;
          goto LAB_020dd380;
        }
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
      } while (*(char *)(iVar1 + 0x10) != '\0');
      iVar1 = 7;
LAB_020dd380:
      func_0x03f5f424(&uStack_20,**(undefined4 **)(_UNK_020dd44c + 0x20dd38c));
      uVar2 = 0;
      if (iVar1 != 7) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x78ce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$HasCloud RVA 0x20cd458 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dd458(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_020dd558 + 0x20dd478);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd55c + 0x20dd48c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x26d,0);
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x70) != 0) && (0 < *(int *)(*(int *)(param_1 + 0x70) + 0xc))) &&
       (uVar2 = FUN_020db85c(param_1,param_2,param_3), -1 < (int)uVar2)) {
      iVar1 = *(int *)(param_1 + 0x84);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x01384bf4();
      }
      uVar4 = 0;
      if (*(char *)(iVar1 + uVar2 + 0x10) != '\0') {
        uVar4 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x26d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a5ac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Board$$DisposeItem RVA 0x20cd560 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dd560(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_020dd720 + 0x20dd580);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dd724 + 0x20dd594));
    func_0x01384978(*(undefined4 *)(_UNK_020dd728 + 0x20dd5a0));
    func_0x01384978(*(undefined4 *)(_UNK_020dd72c + 0x20dd5ac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x248,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x248,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021808e8(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0210cd28(0,0);
    if (iVar1 == param_1) goto LAB_020dd6e8;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x0210cd28(param_2,0);
    if (iVar1 == param_1) {
LAB_020dd6e8:
      func_0x020dd73c(param_1,param_2,1,param_3);
      func_0x020dd8f4(param_1,param_2,param_2,param_3);
      return 1;
    }
  }
  uStack_1c = func_0x0210e5f4(param_2,0);
  puVar4 = *(undefined4 **)(_UNK_020dd730 + 0x20dd65c);
  uVar2 = func_0x01384abc(*puVar4,&uStack_1c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = func_0x0210e2d4(param_2,0);
  uVar3 = func_0x01384abc(*puVar4,&uStack_20);
  uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_020dd734 + 0x20dd6b4),uVar2,uVar3,0);
  if (*(int *)(**(int **)(_UNK_020dd738 + 0x20dd6c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar2,0);
  return 0;
}



// ===== FAT.Merge.Board$$_DisposeItem RVA 0x20cd73c =====

void FUN_020dd73c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x24b,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    uVar2 = FUN_020db85c(param_1,uStack_28,uStack_24);
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 8) == param_2) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = 0;
      func_0x020df7b8(param_1,1);
    }
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02144518(iVar1,param_2,0);
    if (param_3 != 0) {
      iVar3 = *(int *)(param_1 + 0x20);
    }
    if (param_3 != 0 && iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))
                (*(undefined4 *)(iVar3 + 0x20),param_2,param_4,*(undefined4 *)(iVar3 + 0x14));
    }
    iVar3 = *(int *)(param_1 + 100);
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))
                (*(undefined4 *)(iVar3 + 0x20),param_2,*(undefined4 *)(iVar3 + 0x14));
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,param_2,2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x24b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02180514(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.Board$$_DisposeBonusProcess RVA 0x20cd8f4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x020ddd0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020dd8f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  
  pcVar9 = (char *)(iRam020ddd20 + 0x20dd914);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ddd24 + 0x20dd92c));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd28 + 0x20dd938));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd2c + 0x20dd944));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd30 + 0x20dd950));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd34 + 0x20dd95c));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd38 + 0x20dd968));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd3c + 0x20dd974));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd40 + 0x20dd980));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd44 + 0x20dd98c));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd48 + 0x20dd998));
    func_0x01384978(*(undefined4 *)(_UNK_020ddd4c + 0x20dd9a4));
    *pcVar9 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_24 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x260,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x260,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021807f4(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
  }
  piVar2 = (int *)func_0x021566f4(0);
  uVar10 = *(undefined4 *)(param_1 + 0xb4);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_020ddd50 + 0x20dda78)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0x228);
        goto LAB_020ddac0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_020ddd50 + 0x20dda78),0x2d);
LAB_020ddac0:
  (*(code *)*puVar3)(piVar2,uVar10,puVar3[1]);
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  uVar10 = FUN_020d83c8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(iVar1 + 8) = uVar10;
  if (iVar5 == 0) {
    func_0x01384bf0();
    iVar5 = *(int *)(param_1 + 0xb8);
    uRam0000000c = param_2;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar5 = *(int *)(param_1 + 0xb8);
      uRam00000010 = param_3;
      if (iVar5 == 0) {
        uVar11 = func_0x01384bf0();
        if ((int)((ulonglong)uVar11 >> 0x20) != 1) {
          func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020ddd74 + 0x20ddcfc));
          func_0x01459844((int)uVar11);
          func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        piVar2 = (int *)func_0x0145b008((int)uVar11);
        iVar1 = *piVar2;
        func_0x0145b0f8();
        func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020ddd70 + 0x20ddcc8));
        if (iVar1 == 0) {
          return;
        }
        func_0x01384bec(iVar1);
        return;
      }
      goto LAB_020ddb40;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0xc) = param_2;
  }
  *(undefined4 *)(iVar5 + 0x10) = param_3;
LAB_020ddb40:
  puVar3 = *(undefined4 **)(_UNK_020ddd54 + 0x20ddb4c);
  iVar1 = *(int *)(param_1 + 0xb4);
  *(undefined4 *)(iVar5 + 0x14) = param_4;
  uVar10 = func_0x01384be4(*puVar3);
  func_0x03c751dc(uVar10,param_1,**(undefined4 **)(_UNK_020ddd58 + 0x20ddb70),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03290edc(iVar1,uVar10,**(undefined4 **)(_UNK_020ddd5c + 0x20ddb94));
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_020ddd60 + 0x20ddbc0));
  puVar3 = *(undefined4 **)(_UNK_020ddd64 + 0x20ddbd4);
  piVar2 = *(int **)(_UNK_020ddd68 + 0x20ddbdc);
  do {
    iVar1 = func_0x03f5f428(&uStack_30,*puVar3);
    piVar7 = piStack_24;
    if (iVar1 == 0) {
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020ddd6c + 0x20ddc74));
      return;
    }
    uVar10 = *(undefined4 *)(param_1 + 0xb8);
    if (piStack_24 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar7;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar2) {
          puVar4 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
          goto LAB_020ddc50;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar7,*piVar2,1);
LAB_020ddc50:
    (*(code *)*puVar4)(piVar7,uVar10,puVar4[1]);
  } while( true );
}



// ===== FAT.Merge.Board$$DisposeItemInventory RVA 0x20cdd78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020ddd78(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_020ddf24 + 0x20ddd98);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ddf28 + 0x20dddac));
    func_0x01384978(*(undefined4 *)(_UNK_020ddf2c + 0x20dddb8));
    func_0x01384978(*(undefined4 *)(_UNK_020ddf30 + 0x20dddc4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2ba,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2ba,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021808e8(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0210cd28(0,0);
    if (iVar1 == 0) goto LAB_020ddf00;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x0210cd28(param_2,0);
    if (iVar1 == 0) {
LAB_020ddf00:
      FUN_020dd8f4(param_1,param_2,param_2,param_3);
      return 1;
    }
  }
  uStack_1c = func_0x0210e5f4(param_2,0);
  puVar5 = *(undefined4 **)(_UNK_020ddf34 + 0x20dde74);
  uVar2 = func_0x01384abc(*puVar5,&uStack_1c);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = func_0x0210e2d4(param_2,0);
  uVar3 = func_0x01384abc(*puVar5,&uStack_20);
  uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_020ddf38 + 0x20ddecc),uVar2,uVar3,0);
  if (*(int *)(**(int **)(_UNK_020ddf3c + 0x20ddee0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar2,0);
  return 0;
}



// ===== FAT.Merge.Board$$SpawnItem RVA 0x20cdf40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_020ddf40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_020de13c + 0x20ddf60);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020de140 + 0x20ddf78));
    func_0x01384978(*(undefined4 *)(_UNK_020de144 + 0x20ddf84));
    func_0x01384978(*(undefined4 *)(_UNK_020de148 + 0x20ddf90));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x264,0);
  if (iVar1 == 0) {
    uVar3 = FUN_020db85c(param_1,param_3,param_4);
    if (-1 < (int)uVar3) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar3) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar3 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) == 0) {
        uVar2 = func_0x020de158(param_1,param_2,uVar3,param_3,param_4,param_5,param_6,1);
        func_0x020de384(param_1,uVar2,0,0,0,0);
        return uVar2;
      }
    }
    puVar7 = *(undefined4 **)(_UNK_020de14c + 0x20de068);
    uStack_28 = param_3;
    uVar4 = func_0x01384abc(*puVar7,&uStack_28);
    uStack_2c = param_4;
    uVar5 = func_0x01384abc(*puVar7,&uStack_2c);
    uStack_30 = uVar3;
    uVar6 = func_0x01384abc(*puVar7,&uStack_30);
    uVar2 = 0;
    uVar4 = func_0x02450228(**(undefined4 **)(_UNK_020de150 + 0x20de0b4),uVar4,uVar5,uVar6,0);
    if (*(int *)(**(int **)(_UNK_020de154 + 0x20de0cc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x264,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021822d4(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_SpawnItem RVA 0x20ce158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020de158(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_020de378 + 0x20de178);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020de37c + 0x20de190));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x265,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021444bc(iVar1,0);
    uVar6 = *(undefined4 *)(param_1 + 0x98);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020de380 + 0x20de238));
    func_0x02116fb0(iVar1,uVar2,uVar6,0);
    iVar5 = *(int *)(param_1 + 0x80);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar5 + 0xc) <= param_3) {
      func_0x01384bf4();
    }
    uVar2 = *(undefined4 *)(iVar5 + param_3 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
      func_0x02117440(0,param_1,uVar2,0);
      func_0x01384bf0();
    }
    else {
      func_0x02117440(iVar1,param_1,uVar2,0);
    }
    func_0x021195d0(iVar1,param_2,0);
    func_0x020e8ab4(param_1,iVar1,0xffffffff,param_3,param_4,param_5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021177d0(iVar1,param_6,param_7,0);
    iVar5 = *(int *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x98);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),iVar1,*(undefined4 *)(iVar5 + 0x14));
    }
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar3,iVar1,3,0);
    if (param_8 != 0) {
      uVar2 = FUN_020d7f80();
      func_0x020df204(param_1,uVar2,iVar1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x265,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0218203c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0)
    ;
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$_SpawnBonusProcess RVA 0x20ce384 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020de384(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar10 = (char *)(_UNK_020de794 + 0x20de3a4);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020de798 + 0x20de3bc));
    func_0x01384978(*(undefined4 *)(_UNK_020de79c + 0x20de3c8));
    func_0x01384978(*(undefined4 *)(_UNK_020de7a0 + 0x20de3d4));
    func_0x01384978(*(undefined4 *)(_UNK_020de7a4 + 0x20de3e0));
    func_0x01384978(*(undefined4 *)(_UNK_020de7a8 + 0x20de3ec));
    func_0x01384978(*(undefined4 *)(_UNK_020de7ac + 0x20de3f8));
    func_0x01384978(*(undefined4 *)(_UNK_020de7b0 + 0x20de404));
    func_0x01384978(*(undefined4 *)(_UNK_020de7b4 + 0x20de410));
    func_0x01384978(*(undefined4 *)(_UNK_020de7b8 + 0x20de41c));
    func_0x01384978(*(undefined4 *)(_UNK_020de7bc + 0x20de428));
    func_0x01384978(*(undefined4 *)(_UNK_020de7c0 + 0x20de434));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x2a5,0);
  if (iVar1 == 0) {
    if (param_5 != 0) {
      iVar1 = *(int *)(param_1 + 0xbc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar6) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
      }
      piVar2 = (int *)func_0x021566f4(0);
      uVar11 = *(undefined4 *)(param_1 + 0xbc);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_020de7c4 + 0x20de51c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x220);
            goto LAB_020de564;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_020de7c4 + 0x20de51c),0x2c);
LAB_020de564:
      (*(code *)*puVar3)(piVar2,uVar11,puVar3[1]);
      iVar1 = *(int *)(param_1 + 0xbc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar1 = *(int *)(param_1 + 0xc0);
        uVar11 = FUN_020d83c8(param_1);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(param_1 + 0xbc);
        uVar4 = **(undefined4 **)(_UNK_020de7c8 + 0x20de5bc);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)(iVar1 + 0x1c) = param_4;
        *(int *)(iVar1 + 0x20) = param_5;
        *(char *)(iVar1 + 0x18) = (char)param_3;
        *(undefined4 *)(iVar1 + 8) = uVar11;
        *(undefined4 *)(iVar1 + 0x10) = param_6;
        *(undefined4 *)(iVar1 + 0x14) = param_2;
        uVar11 = func_0x01384be4(uVar4);
        func_0x03c751dc(uVar11,param_1,**(undefined4 **)(_UNK_020de7cc + 0x20de600),0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03290edc(iVar6,uVar11,**(undefined4 **)(_UNK_020de7d0 + 0x20de624));
        iVar6 = *(int *)(param_1 + 0xbc);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_38,iVar6,**(undefined4 **)(_UNK_020de7d4 + 0x20de650));
        puVar3 = *(undefined4 **)(_UNK_020de7d8 + 0x20de664);
        piVar2 = *(int **)(_UNK_020de7dc + 0x20de66c);
        while (iVar6 = func_0x03f5f428(&uStack_38,*puVar3), piVar8 = piStack_2c, iVar6 != 0) {
          if (piStack_2c == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = *piVar8;
          uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar2) {
                puVar5 = (undefined4 *)(iVar6 + *piVar9 * 8 + 200);
                goto LAB_020de6dc;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined4 *)func_0x014002dc(piVar8,*piVar2,1);
LAB_020de6dc:
          (*(code *)*puVar5)(piVar8,iVar1,puVar5[1]);
        }
        func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_020de7e0 + 0x20de700));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021821c0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.Merge.Board$$SpawnItemByConf RVA 0x20ce7ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020de7ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_020de9e8 + 0x20de80c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020de9ec + 0x20de824));
    func_0x01384978(*(undefined4 *)(_UNK_020de9f0 + 0x20de830));
    func_0x01384978(*(undefined4 *)(_UNK_020de9f4 + 0x20de83c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b7a,0);
  if (iVar1 == 0) {
    uVar2 = FUN_020db85c(param_1,param_2,param_3);
    if (-1 < (int)uVar2) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) == 0) {
        iVar1 = func_0x020dea04(param_1,uVar2,param_2,param_3,param_4,1);
        if (iVar1 != 0) {
          FUN_020de384(param_1,iVar1,0,0,0,0);
          return iVar1;
        }
        return 0;
      }
    }
    puVar6 = *(undefined4 **)(_UNK_020de9f8 + 0x20de904);
    uStack_24 = param_2;
    uVar3 = func_0x01384abc(*puVar6,&uStack_24);
    uStack_28 = param_3;
    uVar4 = func_0x01384abc(*puVar6,&uStack_28);
    uStack_2c = uVar2;
    uVar5 = func_0x01384abc(*puVar6,&uStack_2c);
    iVar1 = 0;
    uVar3 = func_0x02450228(**(undefined4 **)(_UNK_020de9fc + 0x20de950),uVar3,uVar4,uVar5,0);
    if (*(int *)(**(int **)(_UNK_020dea00 + 0x20de968) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b7a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02232f88(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$_SpawnItemByConf RVA 0x20cea04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020dea04(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar4 = (char *)(_UNK_020ded70 + 0x20dea24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ded74 + 0x20dea3c));
    func_0x01384978(*(undefined4 *)(_UNK_020ded78 + 0x20dea48));
    func_0x01384978(*(undefined4 *)(_UNK_020ded7c + 0x20dea54));
    func_0x01384978(*(undefined4 *)(_UNK_020ded80 + 0x20dea60));
    func_0x01384978(*(undefined4 *)(_UNK_020ded84 + 0x20dea6c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5b7b,0);
  if (iVar1 == 0) {
    if (param_5 != 0) {
      if (*(int *)(**(int **)(_UNK_020ded88 + 0x20deae8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02565ddc(param_5,0);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 8) < 1) {
          return 0;
        }
        iVar5 = *(int *)(param_1 + 0x98);
        uVar2 = *(int *)(iVar1 + 0xc) - 1;
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x021444bc(iVar5,0);
        uVar7 = *(undefined4 *)(param_1 + 0x98);
        iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_020ded98 + 0x20deb78));
        func_0x02116fb0(iVar5,uVar3,uVar7,0);
        iVar6 = *(int *)(param_1 + 0x80);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar6 + 0xc) <= param_2) {
          func_0x01384bf4();
        }
        uVar3 = *(undefined4 *)(iVar6 + param_2 * 4 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
          func_0x02117440(0,param_1,uVar3,0);
          uVar3 = *(undefined4 *)(iVar1 + 8);
          func_0x01384bf0();
        }
        else {
          func_0x02117440(iVar5,param_1,uVar3,0);
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        func_0x021195d0(iVar5,uVar3,0);
        func_0x020e8ab4(param_1,iVar5,0xffffffff,param_2,param_3,param_4,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x021177d0(iVar5,(uVar2 & 7) == 2 || 2 < uVar2,(uVar2 & 7) == 0 || 2 < uVar2,0);
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        uVar7 = *(undefined4 *)(iVar1 + 0x10);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x021178d8(iVar5,uVar3,uVar7,0);
        iVar1 = *(int *)(param_1 + 0x68);
        iVar6 = *(int *)(param_1 + 0x98);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),iVar5,*(undefined4 *)(iVar1 + 0x14));
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar6,iVar5,3,0);
        if (param_6 == 0) {
          return iVar5;
        }
        uVar3 = FUN_020d7f80();
        func_0x020df204(param_1,uVar3,iVar5);
        return iVar5;
      }
    }
    iVar1 = 0;
    uVar3 = func_0x0244f604(**(undefined4 **)(_UNK_020ded90 + 0x20dec1c),param_5,
                            **(undefined4 **)(_UNK_020ded8c + 0x20dec10),0);
    if (*(int *)(**(int **)(_UNK_020ded94 + 0x20dec30) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b7b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02232e24(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$SpawnItemMustWithReason RVA 0x20ced9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_020ded9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = param_5;
  pcVar6 = (char *)(_UNK_020defa8 + 0x20dedbc);
  uStack_28 = param_4;
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020defac + 0x20deddc));
    func_0x01384978(*(undefined4 *)(_UNK_020defb0 + 0x20dede8));
    func_0x01384978(*(undefined4 *)(_UNK_020defb4 + 0x20dedf4));
    *pcVar6 = '\x01';
  }
  uVar5 = param_7;
  uVar4 = param_6;
  iVar1 = func_0x0229f06c(0x1528,0);
  if (iVar1 == 0) {
    uVar3 = func_0x020defc4(param_1,param_4,uVar3,param_2,0,0,0,0);
    iVar1 = func_0x020df144(param_1,uVar3,&uStack_28,&param_5);
    if (iVar1 == 0) {
      puVar7 = *(undefined4 **)(_UNK_020defb8 + 0x20def18);
      uStack_2c = uStack_28;
      uVar4 = func_0x01384abc(*puVar7,&uStack_2c);
      uStack_30 = param_5;
      uVar5 = func_0x01384abc(*puVar7,&uStack_30);
      uStack_34 = uVar3;
      uVar3 = func_0x01384abc(*puVar7,&uStack_34);
      uVar2 = 0;
      uVar3 = func_0x02450228(**(undefined4 **)(_UNK_020defbc + 0x20def68),uVar4,uVar5,uVar3,0);
      if (*(int *)(**(int **)(_UNK_020defc0 + 0x20def80) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar3,0);
    }
    else {
      uVar2 = FUN_020de158(param_1,param_2,uVar3,uStack_28,param_5,uVar4,uVar5,0);
      FUN_020de384(param_1,uVar2,0,0,0,0);
      func_0x020df204(param_1,param_3,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1528,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cee38(iVar1,param_1,param_2,param_3,param_4,uVar3,uVar4,param_7,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_FindEmptyIdx RVA 0x20cefc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_020defc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_020df130 + 0x20defec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020df134 + 0x20df00c));
    func_0x01384978(*(undefined4 *)(_UNK_020df138 + 0x20df018));
    func_0x01384978(*(undefined4 *)(_UNK_020df13c + 0x20df024));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1497,0);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 0xac);
    iVar1 = iVar4;
    if (iVar4 == 0) {
      func_0x01384bf0(0,0);
      iVar1 = *(int *)(param_1 + 0xac);
    }
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    func_0x020ecf60(param_1,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    iVar1 = *(int *)(param_1 + 0xac);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 0xac);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x0484c9cc(0,0,**(undefined4 **)(_UNK_020df140 + 0x20df114));
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        func_0x01384bf4();
      }
      return *(undefined4 *)(iVar1 + 0x10);
    }
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = func_0x0229f13c(0x1497,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cbe04(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0)
    ;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_CalculateCoordByIdx RVA 0x20cf144 =====

undefined4 FUN_020df144(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x14a5,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01457ae8(param_2,*(undefined4 *)(param_1 + 0x8c));
    *param_4 = uVar2;
    func_0x01458344(param_2,*(undefined4 *)(param_1 + 0x8c));
    *param_3 = extraout_r1;
    if (-1 < param_2) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 0;
      if (param_2 < *(int *)(iVar1 + 0xc)) {
        uVar3 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14a5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.Merge.Board$$_OnItemSpawn RVA 0x20cf204 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020df204(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = func_0x0229f06c(0x2a1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
  }
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_02119024 + 0x2118e54);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02119028 + 0x2118e68),param_2,0);
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
    iVar1 = *(int *)(param_3 + 0x34);
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
    func_0x02174108(iVar1,param_3,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Board$$CheckIsEmptyRow RVA 0x20cf2b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020df2b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_020df42c + 0x20df2d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020df430 + 0x20df2e8));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7857,0);
  if (iVar1 == 0) {
    if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x90))) {
      if (0 < *(int *)(param_1 + 0x8c)) {
        iVar1 = 0;
        puVar6 = *(undefined4 **)(_UNK_020df434 + 0x20df380);
        do {
          uVar4 = FUN_020db85c(param_1,iVar1,param_2);
          iVar2 = func_0x03005894(*(undefined4 *)(param_1 + 0x80),uVar4,&iStack_28,*puVar6);
          iVar5 = iStack_28;
          if (iVar2 != 0) {
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar2 = iStack_28;
            if (*(int *)(iVar5 + 8) != 0) {
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              iVar5 = *(int *)(iVar2 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              if (param_3 == 0) {
                iVar5 = func_0x02116c00(iVar5,0);
              }
              else {
                iVar5 = func_0x02116c70();
              }
              if (iVar5 == 0) {
                return 0;
              }
            }
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(param_1 + 0x8c));
      }
      uVar4 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7857,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0218f738(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Board$$MoveItemToRewardBox RVA 0x20cf438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020df438(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  char *pcVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_020df794 + 0x20df458);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020df798 + 0x20df46c));
    func_0x01384978(*(undefined4 *)(_UNK_020df79c + 0x20df478));
    func_0x01384978(*(undefined4 *)(_UNK_020df7a0 + 0x20df484));
    func_0x01384978(*(undefined4 *)(_UNK_020df7a4 + 0x20df490));
    *pcVar8 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5b73,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x0210cd28(0,0);
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x0210cd28(param_2,0);
    }
    if (iVar1 == param_1) {
      func_0x0210cd7c(&uStack_30,param_2,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_30,param_2,0);
      uVar2 = FUN_020db85c(param_1,uStack_30,uStack_2c);
      iVar3 = func_0x03005894(*(undefined4 *)(param_1 + 0x80),uVar2,&iStack_24,
                              **(undefined4 **)(_UNK_020df7a8 + 0x20df588));
      iVar1 = iStack_24;
      if (iVar3 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar3 = iStack_24;
        if (*(int *)(iVar1 + 8) == param_2) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          *(undefined4 *)(iVar3 + 8) = 0;
          func_0x020df7b8(param_1,1);
          if (param_2 == 0) {
            func_0x01384bf0();
            func_0x021177d0(0,0,0,0);
            func_0x01384bf0();
          }
          else {
            func_0x021177d0(param_2,0,0,0);
          }
          func_0x02117440(param_2,0,0,0);
          iVar1 = *(int *)(param_1 + 100);
          if (iVar1 != 0) {
            (**(code **)(iVar1 + 0xc))
                      (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
          }
          iVar1 = *(int *)(param_1 + 0x98);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar7 = 0;
          iVar3 = func_0x02116990(param_2,0);
          if ((iVar3 != 0) && (uVar7 = 0, *(char *)(iVar3 + 0x45) != '\0')) {
            uVar7 = 1;
          }
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02144d84(iVar1,param_2,uVar7,0);
          if (param_3 == 0) {
            return 1;
          }
          iVar1 = FUN_020d83c8(param_1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ef8(iVar1,param_2,0xe,0);
          return 1;
        }
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
    }
    uStack_30 = func_0x0210e5f4(param_2,0);
    puVar6 = *(undefined4 **)(_UNK_020df7ac + 0x20df5dc);
    uVar4 = func_0x01384abc(*puVar6,&uStack_30);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    uStack_28 = func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(*puVar6,&uStack_28);
    uVar4 = func_0x0244f690(**(undefined4 **)(_UNK_020df7b0 + 0x20df634),uVar4,uVar5,0);
    if (*(int *)(**(int **)(_UNK_020df7b4 + 0x20df648) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5b73,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218d1f0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_ChangeEmptyGridCount RVA 0x20cf7b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020df7b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_020df8f4 + 0x20df7d4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020df8f8 + 0x20df7e8));
    func_0x01384978(*(undefined4 *)(_UNK_020df8fc + 0x20df7f4));
    func_0x01384978(*(undefined4 *)(_UNK_020df900 + 0x20df800));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x24f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x24f,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  param_2 = *(int *)(param_1 + 0x88) + param_2;
  *(int *)(param_1 + 0x88) = param_2;
  FUN_020db8ec(param_1);
  if (param_2 != *(int *)(param_1 + 0x88)) {
    puVar5 = *(undefined4 **)(_UNK_020df904 + 0x20df884);
    uVar6 = func_0x01384abc(*puVar5,&stack0xffffffec);
    uStack_18 = *(undefined4 *)(param_1 + 0x88);
    uVar2 = func_0x01384abc(*puVar5,&uStack_18);
    uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_020df908 + 0x20df8bc),uVar6,uVar2,0);
    if (*(int *)(**(int **)(_UNK_020df90c + 0x20df8d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar6,0);
  }
  return;
}



// ===== FAT.Merge.Board$$TryMoveItemToCoord RVA 0x20cf910 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_020df910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(iRam020dfad4 + 0x20df930);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dfad8 + 0x20df948));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iStack_24 = 0;
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x5b75,0);
  if (iVar2 == 0) {
    uVar3 = FUN_020db85c(param_1,param_2,param_3);
    puVar5 = *(undefined4 **)(_UNK_020dfadc + 0x20df9e0);
    iVar4 = func_0x03005894(*(undefined4 *)(param_1 + 0x80),uVar3,&iStack_24,*puVar5);
    iVar2 = iStack_24;
    if (iVar4 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 8) != 0) {
        uVar3 = FUN_020db85c(param_1,param_4,param_5);
        iVar4 = func_0x03005894(*(undefined4 *)(param_1 + 0x80),uVar3,&iStack_28,*puVar5);
        iVar2 = iStack_28;
        if (iVar4 != 0) {
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar4 = iStack_24;
          if (*(int *)(iVar2 + 8) == 0) {
            if ((iStack_24 == 0) && (func_0x01384bf0(), iStack_24 == 0)) {
              func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar2 = iStack_28;
            iVar4 = *(int *)(iVar4 + 8);
            *(undefined4 *)(iStack_24 + 8) = 0;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar1 = iStack_28;
            *(int *)(iVar2 + 8) = iVar4;
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x021197fc(iVar4,param_4,param_5,iVar1,0);
            uVar7 = 1;
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5b75,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x021ff944(iVar2,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar7;
}



// ===== FAT.Merge.Board$$TestSpawnItem RVA 0x20cfae0 =====

undefined4 FUN_020dfae0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  int iStack_1c;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0xb307,0);
  if (iVar1 == 0) {
    iStack_1c = *(int *)(param_1 + 0x8c) / 2;
    iStack_20 = *(int *)(param_1 + 0x90) / 2;
    iVar1 = func_0x020dfbc4(param_1,iStack_1c,iStack_20,0xffffffff);
    FUN_020df144(param_1,iVar1,&iStack_1c,&iStack_20);
    if (-1 < iVar1) {
      uVar2 = FUN_020de158(param_1,param_2,iVar1,iStack_1c,iStack_20,0,0,1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb307,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02182a58(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_FindEmptyIdx RVA 0x20cfbc4 =====

void FUN_020dfbc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb308,0);
  if (iVar1 == 0) {
    FUN_020defc4(param_1,param_2,param_3,0,0,0,0,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0xb308,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02176574(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.Board$$TestSpawnBox RVA 0x20cfc5c =====

undefined4 FUN_020dfc5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = 0;
  uStack_28 = param_4;
  uStack_24 = param_3;
  iVar1 = func_0x0229f06c(0xb309,0);
  if (iVar1 == 0) {
    iVar1 = FUN_020dfbc4(param_1,param_3,param_4,0xffffffff);
    FUN_020df144(param_1,iVar1,&uStack_24,&uStack_28);
    if (-1 < iVar1) {
      uVar2 = FUN_020de158(param_1,param_2,iVar1,uStack_24,uStack_28,1,1,1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb309,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229ba9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$FindItemById RVA 0x20cfd3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dfd3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x6e0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6e0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02182b6c + 0x2182a78);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02182b70 + 0x2182a8c),param_1,param_2,0);
      *pcVar7 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar4 = *(int *)(iVar1 + 0x10 + uVar5 * 4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar4 + 8) != 0) &&
       (iVar2 = func_0x0210e5f4(*(int *)(iVar4 + 8),0), iVar2 == param_2)) break;
    uVar5 = uVar5 + 1;
  }
  return *(undefined4 *)(iVar4 + 8);
}



// ===== FAT.Merge.Board$$FindAnyItemByConfigId RVA 0x20cfe04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dfe04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5cb8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cb8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02182b6c + 0x2182a78);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02182b70 + 0x2182a8c),param_1,param_2,0);
      *pcVar7 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  while( true ) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar4 = *(int *)(iVar1 + 0x10 + uVar5 * 4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar4 + 8) != 0) &&
       (iVar2 = func_0x0210e2d4(*(int *)(iVar4 + 8),0), iVar2 == param_2)) break;
    uVar5 = uVar5 + 1;
  }
  return *(undefined4 *)(iVar4 + 8);
}



// ===== FAT.Merge.Board$$EatSourceEatItem RVA 0x20cfecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020dfecc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_020e005c + 0x20dfeec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e0060 + 0x20dff00));
    func_0x01384978(*(undefined4 *)(_UNK_020e0064 + 0x20dff0c));
    func_0x01384978(*(undefined4 *)(_UNK_020e0068 + 0x20dff18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e8d,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e006c + 0x20dff8c));
    if ((iVar1 == 0) || (iVar1 = func_0x0212de24(iVar1,param_3,0), iVar1 == 0)) {
      uVar2 = 0;
      uVar3 = func_0x0244f690(**(undefined4 **)(_UNK_020e0070 + 0x20e0020),param_2,param_3,0);
      if (*(int *)(**(int **)(_UNK_020e0074 + 0x20e0034) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar3,0);
    }
    else {
      FUN_020dd73c(param_1,param_3,0,4);
      FUN_020dd8f4(param_1,param_3,param_2,4);
      iVar1 = *(int *)(param_1 + 0x10);
      uVar2 = 1;
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e8d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$EatItem RVA 0x20d0078 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e0078(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_020e0208 + 0x20e0098);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e020c + 0x20e00ac));
    func_0x01384978(*(undefined4 *)(_UNK_020e0210 + 0x20e00b8));
    func_0x01384978(*(undefined4 *)(_UNK_020e0214 + 0x20e00c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e97,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e0218 + 0x20e0138));
    if ((iVar1 == 0) || (iVar1 = func_0x0212b15c(iVar1,param_3,0), iVar1 == 0)) {
      uVar2 = 0;
      uVar3 = func_0x0244f690(**(undefined4 **)(_UNK_020e021c + 0x20e01cc),param_2,param_3,0);
      if (*(int *)(**(int **)(_UNK_020e0220 + 0x20e01e0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar3,0);
    }
    else {
      FUN_020dd73c(param_1,param_3,0,4);
      FUN_020dd8f4(param_1,param_3,param_2,4);
      iVar1 = *(int *)(param_1 + 0x10);
      uVar2 = 1;
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e97,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UseEatSource RVA 0x20d0224 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e0224(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_020e07c0 + 0x20e0244);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e07c4 + 0x20e0258));
    func_0x01384978(*(undefined4 *)(_UNK_020e07c8 + 0x20e0264));
    func_0x01384978(*(undefined4 *)(_UNK_020e07cc + 0x20e0270));
    func_0x01384978(*(undefined4 *)(_UNK_020e07d0 + 0x20e027c));
    func_0x01384978(*(undefined4 *)(_UNK_020e07d4 + 0x20e0288));
    func_0x01384978(*(undefined4 *)(_UNK_020e07d8 + 0x20e0294));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9e34,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02285d44(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e07dc + 0x20e0318));
  if ((iVar1 == 0) || (iVar3 = func_0x0212bdd0(iVar1,0), iVar3 != 2)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = func_0x0210e2d4(param_2,0);
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e07f8 + 0x20e03e4),&uStack_38);
    uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e07fc + 0x20e0408),uVar2,0);
    if (*(int *)(**(int **)(_UNK_020e0800 + 0x20e041c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar2,0);
    *param_3 = 1;
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 0;
    iVar1 = func_0x0212bdd0(iVar1,0);
    if (iVar1 != 1) {
      return 0;
    }
    uVar8 = 2;
  }
  else {
    iVar3 = func_0x0212be98(iVar1,0);
    if (0 < iVar3) {
      piVar4 = (int *)func_0x021566f4(0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *piVar4;
      uVar9 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020e07e0 + 0x20e0380)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0x160);
            goto LAB_020e0474;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_020e07e0 + 0x20e0380),0x14);
LAB_020e0474:
      iVar5 = (*(code *)*puVar6)(piVar4,iVar3,puVar6[1]);
      if (iVar5 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = func_0x0210e2d4(param_2,0);
        puVar6 = *(undefined4 **)(_UNK_020e07e4 + 0x20e05a4);
        uVar2 = func_0x01384abc(*puVar6,&uStack_38);
        iStack_30 = iVar3;
        uVar8 = func_0x01384abc(*puVar6,&iStack_30);
        uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_020e07e8 + 0x20e05dc),uVar2,uVar8,0);
        if (*(int *)(**(int **)(_UNK_020e07ec + 0x20e05f0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = 0;
        func_0x028c2874(uVar8,0);
        iVar1 = *(int *)(param_1 + 0x58);
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        }
        uVar8 = 5;
        goto LAB_020e07b0;
      }
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_38,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_38,param_2,0);
    iVar5 = FUN_020defc4(param_1,uStack_38,uStack_34,0,0,iVar1,0,0);
    if (iVar5 < 0) {
      uVar8 = 3;
      uVar2 = 0;
    }
    else {
      if (0 < iVar3) {
        piVar4 = (int *)func_0x021566f4(0);
        uVar2 = FUN_020da6f4(param_1);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar4;
        uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_020e07f0 + 0x20e0540)) {
              puVar6 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0x168);
              goto LAB_020e064c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_020e07f0 + 0x20e0540),0x15);
LAB_020e064c:
        (*(code *)*puVar6)(piVar4,iVar3,uVar2,puVar6[1]);
      }
      uVar2 = func_0x0212e31c(iVar1,0);
      FUN_020df144(param_1,iVar5,&uStack_28,&uStack_2c);
      uVar2 = FUN_020de158(param_1,uVar2,iVar5,uStack_28,uStack_2c,0,0,0);
      uVar8 = func_0x02123568(iVar1,0);
      FUN_020de384(param_1,uVar2,0,iVar3,6,uVar8);
      uVar8 = FUN_020d8024(param_2,1);
      FUN_020df204(param_1,uVar8,uVar2);
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148ef8(iVar1,param_2,1,0);
      piVar4 = (int *)func_0x021566f4(0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020e07f4 + 0x20e074c)) {
            puVar6 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x238);
            goto LAB_020e0794;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_020e07f4 + 0x20e074c),0x2f);
LAB_020e0794:
      (*(code *)*puVar6)(piVar4,param_2,0xd,puVar6[1]);
      uVar8 = 0;
    }
  }
LAB_020e07b0:
  *param_3 = uVar8;
  return uVar2;
}



// ===== FAT.Merge.Board$$UseToolSource RVA 0x20d0804 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e0804(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_020e0c64 + 0x20e0824);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e0c68 + 0x20e0838));
    func_0x01384978(*(undefined4 *)(_UNK_020e0c6c + 0x20e0844));
    func_0x01384978(*(undefined4 *)(_UNK_020e0c70 + 0x20e0850));
    func_0x01384978(*(undefined4 *)(_UNK_020e0c74 + 0x20e085c));
    func_0x01384978(*(undefined4 *)(_UNK_020e0c78 + 0x20e0868));
    func_0x01384978(*(undefined4 *)(_UNK_020e0c7c + 0x20e0874));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9e1e,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e0c80 + 0x20e08f8));
    if ((iVar1 == 0) || (iVar3 = func_0x02138134(iVar1,0), iVar3 == 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uStack_38 = func_0x0210e2d4(param_2,0);
      uVar12 = func_0x01384abc(**(undefined4 **)(_UNK_020e0c8c + 0x20e09b8),&uStack_38);
      uVar12 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e0c90 + 0x20e09dc),uVar12,0);
      if (*(int *)(**(int **)(_UNK_020e0c94 + 0x20e09f0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar12,0);
      uVar12 = 2;
    }
    else {
      iVar3 = func_0x02137c44(iVar1,0);
      iVar4 = func_0x02137c44(iVar1,0);
      if (iVar4 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_38,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_38,param_2,0);
        iVar4 = FUN_020defc4(param_1,uStack_38,uStack_34,0,0,iVar1,0,0);
      }
      else {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_38,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_38,param_2,0);
        iVar4 = FUN_020db85c(param_1,uStack_38,uStack_34);
      }
      if (iVar4 < 0) {
        uVar12 = 3;
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        iVar5 = func_0x02137c44(iVar1,0);
        uVar12 = 4;
        if (iVar5 != 0) {
          uVar12 = 5;
        }
        iVar5 = func_0x02138088(iVar1,0);
        if (0 < iVar5) {
          FUN_020df144(param_1,iVar4,&uStack_28,&uStack_2c);
          uVar2 = FUN_020de158(param_1,iVar5,iVar4,uStack_28,uStack_2c,0,0,0);
          uVar6 = func_0x02123568(iVar1,0);
          FUN_020de384(param_1,uVar2,0,0,7,uVar6);
          uVar6 = FUN_020d8024(param_2,5);
          FUN_020df204(param_1,uVar6,uVar2);
        }
        if (iVar3 != 0) {
          FUN_020dd73c(param_1,param_2,1,uVar12);
          FUN_020dd8f4(param_1,param_2,param_2,uVar12);
        }
        iVar1 = *(int *)(param_1 + 0x98);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar1,param_2,1,0);
        piVar7 = (int *)func_0x021566f4(0);
        if (piVar7 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar7;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_020e0c84 + 0x20e0bc0)) {
              puVar8 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x238);
              goto LAB_020e0c14;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_020e0c84 + 0x20e0bc0),0x2f);
LAB_020e0c14:
        (*(code *)*puVar8)(piVar7,param_2,0x10,puVar8[1]);
        if (*(int *)(**(int **)(_UNK_020e0c88 + 0x20e0c38) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x020e0c98(param_2);
        uVar12 = 0;
      }
    }
    *param_3 = uVar12;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e1e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02285d44(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_PlayToolUseSound RVA 0x20d0c98 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020e0c98(int param_1)

{
  char cVar1;
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
  undefined4 uStack_14;
  
  iVar3 = func_0x0229f06c(0x9e20,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9e20,0);
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
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x40);
  uVar7 = func_0x0210e2d4(param_1,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x01ce50a0(iVar3,uVar7,1,0);
  iVar3 = func_0x01489db8(uVar7,0);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar7,0);
    func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
    *pcVar6 = '\x01';
  }
  uStack_14 = 0;
  iVar5 = func_0x0229f06c(0x47,0);
  if (iVar5 == 0) {
    iVar5 = func_0x01489db8(uVar7,0);
    if (iVar5 == 0) {
      iVar5 = *(int *)(iVar3 + 0x18);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0244f844(iVar5,uVar7,&uStack_14,**(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350));
      if (iVar5 == 0) {
        iVar5 = func_0x018872a8(uVar7,0);
        if (iVar5 == 0) {
          return;
        }
        uVar7 = *(undefined4 *)(iVar5 + 0x18);
        if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x025550ec(uVar7,0);
        cVar1 = *(char *)(iVar5 + 0x1c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(iVar2 + 8);
        uVar7 = *(undefined4 *)(iVar2 + 0xc);
        if (cVar1 != '\0') {
          func_0x01bfe144(iVar3,uVar4,uVar7);
          return;
        }
      }
      else {
        uVar4 = *(undefined4 *)(iVar3 + 8);
        uVar7 = uStack_14;
      }
      func_0x01bfe078(iVar3,uVar4,uVar7);
    }
  }
  else {
    iVar5 = func_0x0229f13c(0x47,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar5,iVar3,uVar7,0);
  }
  return;
}



// ===== FAT.Merge.Board$$UseItemToolSourceAll RVA 0x20d0d8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020e0d8c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_020e1298 + 0x20e0dac);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e129c + 0x20e0dc0));
    func_0x01384978(*(undefined4 *)(_UNK_020e12a0 + 0x20e0dcc));
    func_0x01384978(*(undefined4 *)(_UNK_020e12a4 + 0x20e0dd8));
    func_0x01384978(*(undefined4 *)(_UNK_020e12a8 + 0x20e0de4));
    func_0x01384978(*(undefined4 *)(_UNK_020e12ac + 0x20e0df0));
    func_0x01384978(*(undefined4 *)(_UNK_020e12b0 + 0x20e0dfc));
    func_0x01384978(*(undefined4 *)(_UNK_020e12b4 + 0x20e0e08));
    func_0x01384978(*(undefined4 *)(_UNK_020e12b8 + 0x20e0e14));
    func_0x01384978(*(undefined4 *)(_UNK_020e12bc + 0x20e0e20));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e10,0);
  if (iVar1 == 0) {
    *param_3 = 1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e12c0 + 0x20e0ea0));
    if (iVar1 != 0) {
      piVar10 = *(int **)(_UNK_020e12c4 + 0x20e0ec4);
      iStack_28 = 0;
      while (iVar2 = func_0x02138134(iVar1,0), iVar2 != 0) {
        *param_3 = 0;
        iVar2 = func_0x02138088(iVar1,0);
        if (0 < iVar2) {
          piVar3 = (int *)func_0x021566f4(0);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar12 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar12 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar12 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar12 + *piVar6 * 8 + 0x110);
                goto LAB_020e0f68;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,10);
LAB_020e0f68:
          iVar12 = (*(code *)*puVar4)(piVar3,iVar2,puVar4[1]);
          if (iVar12 == 0) {
LAB_020e1014:
            iVar12 = func_0x01c24918(0);
            if (iVar12 == 0) {
              func_0x01384bf0();
            }
            piVar10 = *(int **)(_UNK_020e12cc + 0x20e1038);
            iVar9 = *(int *)(iVar12 + 0x40);
            iVar12 = *piVar10;
            if (*(int *)(iVar12 + 0x74) == 0) {
              func_0x01384ab4();
              iVar12 = *piVar10;
            }
            uVar8 = *(undefined4 *)(*(int *)(iVar12 + 0x5c) + 0x24);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01cdcbac(iVar9,iVar2,1,uVar8,0,0,0,0x348,
                                    **(undefined4 **)(_UNK_020e12d0 + 0x20e107c),
                                    **(undefined4 **)(_UNK_020e12d4 + 0x20e1088),0);
          }
          else {
            if (iVar12 == 0) {
              func_0x01384bf0();
            }
            iVar12 = *(int *)(iVar12 + 0xc);
            if (iVar12 == 0) goto LAB_020e1014;
            piVar10 = (int *)func_0x021566f4(0);
            uVar11 = *(undefined4 *)(iVar12 + 0x18);
            uVar8 = *(undefined4 *)(iVar12 + 0x1c);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar2 = *piVar10;
            uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
            if (uVar5 != 0) {
              piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
              do {
                if (piVar3[-1] == **(int **)(_UNK_020e12c8 + 0x20e0fd8)) {
                  puVar4 = (undefined4 *)(iVar2 + *piVar3 * 8 + 0x150);
                  goto LAB_020e10c0;
                }
                uVar5 = uVar5 - 1;
                piVar3 = piVar3 + 2;
              } while (uVar5 != 0);
            }
            puVar4 = (undefined4 *)
                     func_0x014002dc(piVar10,**(int **)(_UNK_020e12c8 + 0x20e0fd8),0x12);
LAB_020e10c0:
            iVar2 = (*(code *)*puVar4)(piVar10,uVar8,uVar11,puVar4[1]);
          }
          if (iVar2 != 0) {
            if (iStack_28 == 0) {
              iStack_28 = func_0x01384be4(**(undefined4 **)(_UNK_020e12d8 + 0x20e10fc));
              func_0x0328e950(iStack_28,**(undefined4 **)(_UNK_020e12dc + 0x20e1110));
              if (iStack_28 == 0) {
                func_0x01384bf0();
                iStack_28 = 0;
              }
            }
            iVar12 = *(int *)(iStack_28 + 8);
            uVar5 = *(uint *)(iStack_28 + 0xc);
            iVar9 = **(int **)(_UNK_020e12e0 + 0x20e1148);
            *(int *)(iStack_28 + 0x10) = *(int *)(iStack_28 + 0x10) + 1;
            if (iVar12 == 0) {
              func_0x01384bf0();
            }
            if (uVar5 < *(uint *)(iVar12 + 0xc)) {
              *(uint *)(iStack_28 + 0xc) = uVar5 + 1;
              *(int *)(iVar12 + uVar5 * 4 + 0x10) = iVar2;
            }
            else {
              func_0x0328f170(iStack_28,iVar2,
                              *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
            }
          }
          piVar10 = *(int **)(_UNK_020e12e4 + 0x20e11a4);
          iVar2 = *(int *)(param_1 + 0x98);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ef8(iVar2,param_2,1,0);
          piVar3 = (int *)func_0x021566f4(0);
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar2 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0x238);
                goto LAB_020e122c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0x2f);
LAB_020e122c:
          (*(code *)*puVar4)(piVar3,param_2,0x10,puVar4[1]);
        }
      }
      if ((iStack_28 != 0) && (0 < *(int *)(iStack_28 + 0xc))) {
        func_0x020e12e8(param_1,param_2);
      }
      FUN_020dd73c(param_1,param_2,1,5);
      FUN_020dd8f4(param_1,param_2,param_2,5);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e10,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02286b78(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$_OnItemSpawnFlySmart RVA 0x20d12e8 =====

void FUN_020e12e8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9e1d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020e1374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e1d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$UseTrigAutoSource RVA 0x20d1380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e1380(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iStack_64;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_020e1aa4 + 0x20e13a0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e1aa8 + 0x20e13b4));
    func_0x01384978(*(undefined4 *)(_UNK_020e1aac + 0x20e13c0));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ab0 + 0x20e13cc));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ab4 + 0x20e13d8));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ab8 + 0x20e13e4));
    func_0x01384978(*(undefined4 *)(_UNK_020e1abc + 0x20e13f0));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ac0 + 0x20e13fc));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ac4 + 0x20e1408));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ac8 + 0x20e1414));
    func_0x01384978(*(undefined4 *)(_UNK_020e1acc + 0x20e1420));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ad0 + 0x20e142c));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ad4 + 0x20e1438));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ad8 + 0x20e1444));
    func_0x01384978(*(undefined4 *)(_UNK_020e1adc + 0x20e1450));
    func_0x01384978(*(undefined4 *)(_UNK_020e1ae0 + 0x20e145c));
    *pcVar9 = '\x01';
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  iVar1 = func_0x0229f06c(0x9e3d,0);
  if (iVar1 == 0) {
    *param_3 = 1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e1ae4 + 0x20e1504));
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar3 = func_0x021392bc(iVar1,0);
      if (iVar3 != 0) {
        uVar2 = 0;
        iVar3 = func_0x02139324(iVar1,0);
        iVar4 = func_0x021393f0(iVar1,&uStack_28,0);
        if (iVar4 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cd7c(&uStack_58,param_2,0);
          iVar4 = iStack_54;
          uVar2 = uStack_58;
          if (iVar3 != 0) {
            uVar5 = FUN_020db85c(param_1,uStack_58,iStack_54);
            FUN_020dd73c(param_1,param_2,1,5);
            FUN_020dd8f4(param_1,param_2,param_2,5);
            iVar6 = func_0x0213938c(iVar1,0);
            if (0 < iVar6) {
              uVar5 = FUN_020de158(param_1,iVar6,uVar5,uVar2,iVar4,0,0,0);
              FUN_020de384(param_1,uVar5,0,0,0xf,param_2);
              uVar7 = FUN_020d8024(param_2,0x13);
              FUN_020df204(param_1,uVar7,uVar5);
            }
          }
          if (*(int *)(**(int **)(_UNK_020e1ae8 + 0x20e164c) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar6 = func_0x028c8d78(0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0302a5e8(&uStack_58,iVar6,**(undefined4 **)(_UNK_020e1aec + 0x20e168c));
          iVar6 = iStack_54;
          iStack_2c = iStack_54;
          uStack_30 = uStack_58;
          iVar1 = func_0x02139728(iVar1,uStack_28,uStack_58,iStack_54,0);
          if (iVar1 != 0) {
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0325a3b4(&uStack_58,iVar6,**(undefined4 **)(_UNK_020e1af0 + 0x20e16e0));
            uStack_40 = uStack_58;
            iStack_3c = iStack_54;
            uStack_38 = uStack_50;
            iStack_34 = iStack_4c;
            puVar12 = *(undefined4 **)(_UNK_020e1af4 + 0x20e1704);
            iStack_64 = 0;
            while (iVar6 = func_0x03f597e0(&uStack_40,*puVar12), iVar1 = iStack_34, iVar6 != 0) {
              if (0 < iStack_34) {
                uVar5 = FUN_020defc4(param_1,uVar2,iVar4,iStack_34,0,0,0,0);
                iVar6 = FUN_020df144(param_1,uVar5,&uStack_44,&uStack_48);
                if (iVar6 == 0) {
                  iVar6 = func_0x01c24918(0);
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  iVar11 = *(int *)(iVar6 + 0x40);
                  iVar6 = **(int **)(_UNK_020e1af8 + 0x20e17f0);
                  if (*(int *)(iVar6 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar6 = **(int **)(_UNK_020e1afc + 0x20e1810);
                  }
                  uVar5 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x30);
                  if (iVar11 == 0) {
                    func_0x01384bf0();
                  }
                  uVar5 = func_0x01cdcbac(iVar11,iVar1,1,uVar5,0,0,0,0x39e,
                                          **(undefined4 **)(_UNK_020e1b00 + 0x20e1834),
                                          **(undefined4 **)(_UNK_020e1b04 + 0x20e1840),0);
                  if (iStack_64 == 0) {
                    iStack_64 = func_0x01384be4(**(undefined4 **)(_UNK_020e1b08 + 0x20e188c));
                    func_0x0328e950(iStack_64,**(undefined4 **)(_UNK_020e1b0c + 0x20e189c));
                    if (iStack_64 == 0) {
                      iStack_64 = 0;
                      func_0x01384bf0();
                    }
                  }
                  iVar6 = *(int *)(iStack_64 + 8);
                  uVar10 = *(uint *)(iStack_64 + 0xc);
                  piVar8 = *(int **)(_UNK_020e1b10 + 0x20e18e0);
                  *(int *)(iStack_64 + 0x10) = *(int *)(iStack_64 + 0x10) + 1;
                  iVar1 = *piVar8;
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(iStack_64 + 0xc) = uVar10 + 1;
                    *(undefined4 *)(iVar6 + uVar10 * 4 + 0x10) = uVar5;
                  }
                  else {
                    func_0x0328f170(iStack_64,uVar5,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                }
                else {
                  uVar5 = FUN_020de158(param_1,iVar1,uVar5,uStack_44,uStack_48,0,0,0);
                  FUN_020de384(param_1,uVar5,0,0,0xf,param_2);
                  uVar7 = FUN_020d8024(param_2,0x13);
                  FUN_020df204(param_1,uVar7,uVar5);
                }
              }
            }
            func_0x03f597dc(&uStack_40,**(undefined4 **)(_UNK_020e1b14 + 0x20e1944));
            if ((iStack_64 != 0) && (0 < *(int *)(iStack_64 + 0xc))) {
              func_0x020e1b24(param_1,param_2);
            }
          }
          func_0x03633b24(&uStack_30,**(undefined4 **)(_UNK_020e1b1c + 0x20e1978));
          if (iVar3 != 0) {
            uVar5 = FUN_020d82a4(param_2,1);
            func_0x020e1bbc(param_1,uVar2,iVar4,uVar5);
          }
          iVar1 = *(int *)(param_1 + 0x98);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ef8(iVar1,param_2,0xd,0);
          uVar2 = 1;
          *param_3 = 0;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e3d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02286f8c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_OnItemSpawnFly RVA 0x20d1b24 =====

void FUN_020e1b24(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9e43,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020e1bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$_TriggerUnlockAround RVA 0x20d1bbc =====

void FUN_020e1bbc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x883a,0);
  if (iVar1 == 0) {
    func_0x020ec760(param_1,param_2,param_3 + -1,param_4);
    func_0x020ec760(param_1,param_2,param_3 + 1,param_4);
    func_0x020ec760(param_1,param_2 + -1,param_3,param_4);
    func_0x020ec760(param_1,param_2 + 1,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x883a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179974(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.Board$$FindEmptyIdx RVA 0x20d1c7c =====

void FUN_020e1c7c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x9e24,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123568(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_28,iVar1,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123568(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_28,iVar1,0);
      FUN_020defc4(param_1,uStack_28,uStack_24,0,0,param_2,0,0);
    }
    else {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123568(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_28,iVar1,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02123568(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_28,iVar1,0);
      FUN_020db85c(param_1,uStack_28,uStack_24);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e24,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02286c84(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$TryResolveMagicHourOutput RVA 0x20d1e10 =====

/* WARNING: Removing unreachable block (ram,0x020e223c) */
/* WARNING: Removing unreachable block (ram,0x020e224c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020e1e10(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  char *pcVar17;
  undefined4 uVar18;
  uint in_fpscr;
  float fVar19;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int aiStack_44 [3];
  
  pcVar17 = (char *)(_UNK_020e284c + 0x20e1e38);
  if (*pcVar17 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e2850 + 0x20e1e4c));
    func_0x01384978(*(undefined4 *)(_UNK_020e2854 + 0x20e1e58));
    func_0x01384978(*(undefined4 *)(_UNK_020e2858 + 0x20e1e64));
    func_0x01384978(*(undefined4 *)(_UNK_020e285c + 0x20e1e70));
    func_0x01384978(*(undefined4 *)(_UNK_020e2860 + 0x20e1e7c));
    *pcVar17 = '\x01';
  }
  aiStack_44[2] = 0;
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iVar3 = func_0x0229f06c(0x9f0e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x9f0e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02289a30(iVar3,param_1,param_2,param_3,0);
    return iVar3;
  }
  *param_3 = 0;
  iVar3 = FUN_020defc4(param_1,3,3,0,0,0,0,0);
  if (iVar3 < 0) {
    return 0;
  }
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x58);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01dc67e4(iVar4,0);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *param_2;
  uVar12 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar12 != 0) {
    piVar14 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar14[-1] == **(int **)(_UNK_020e2864 + 0x20e1f80)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar14 * 8 + 0xf0);
        goto LAB_020e1fc8;
      }
      uVar12 = uVar12 - 1;
      piVar14 = piVar14 + 2;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_020e2864 + 0x20e1f80),6);
LAB_020e1fc8:
  piVar14 = (int *)(*(code *)*puVar5)(param_2,puVar5[1]);
  if (piVar14 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar14;
  uVar12 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar12 != 0) {
    piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar15[-1] == **(int **)(_UNK_020e2868 + 0x20e1ff8)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xc0);
        goto LAB_020e2044;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_020e2868 + 0x20e1ff8),0);
LAB_020e2044:
  piVar14 = (int *)(*(code *)*puVar5)(piVar14,puVar5[1]);
  iVar4 = 0;
  piVar15 = *(int **)(_UNK_020e286c + 0x20e206c);
  do {
    if (piVar14 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar14;
    uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar16[-1] == *piVar15) {
          puVar5 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
          goto LAB_020e20c4;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar14,*piVar15,0);
LAB_020e20c4:
    iVar6 = (*(code *)*puVar5)(piVar14,puVar5[1]);
    if (iVar6 == 0) break;
    if (piVar14 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar14;
    uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar16[-1] == **(int **)(_UNK_020e2870 + 0x20e20f8)) {
          puVar5 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
          goto LAB_020e2140;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_020e2870 + 0x20e20f8),0);
LAB_020e2140:
    iVar6 = (*(code *)*puVar5)(piVar14,puVar5[1]);
    iVar7 = func_0x01c24918(0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x58);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar18 = *(undefined4 *)(iVar6 + 8);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    func_0x01dc688c(iVar7,uVar18,&uStack_48,aiStack_44,0);
    iVar4 = *(int *)(iVar6 + 0x10) * aiStack_44[0] + iVar4;
  } while( true );
  if (piVar14 != (int *)0x0) {
    iVar6 = *piVar14;
    uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(_UNK_020e2874 + 0x20e21dc)) {
          puVar5 = (undefined4 *)(iVar6 + *piVar15 * 8 + 0xc0);
          goto LAB_020e2224;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar14,**(int **)(_UNK_020e2874 + 0x20e21dc),0);
LAB_020e2224:
    (*(code *)*puVar5)(piVar14,puVar5[1]);
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar6 = *param_2;
  piVar14 = *(int **)(_UNK_020e2878 + 0x20e2270);
  uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
  iVar7 = *piVar14;
  if (uVar12 != 0) {
    piVar15 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar15[-1] == iVar7) {
        puVar5 = (undefined4 *)(iVar6 + *piVar15 * 8 + 0x238);
        goto LAB_020e22b8;
      }
      uVar12 = uVar12 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar12 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_2,iVar7,0x2f);
LAB_020e22b8:
  (*(code *)*puVar5)(&iStack_58,param_2,puVar5[1]);
  fVar2 = _UNK_020e2694;
  fVar1 = _UNK_020e2690;
  fVar19 = (float)VectorSignedToFloat(iStack_58 * iVar4,(byte)(in_fpscr >> 0x16) & 3);
  uVar12 = in_fpscr & 0xfffffff | (uint)(fVar19 / _UNK_020e2690 == _UNK_020e2694) << 0x1e;
  iVar6 = (int)(fVar19 / _UNK_020e2690);
  if (SUB41(uVar12 >> 0x1e,0)) {
    iVar6 = -0x80000000;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar7 = *param_2;
  iVar11 = *piVar14;
  uVar13 = (uint)*(ushort *)(iVar7 + 0xb6);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(int *)(iVar7 + 0x58) + 4);
    do {
      if (piVar14[-1] == iVar11) {
        puVar5 = (undefined4 *)(iVar7 + *piVar14 * 8 + 0x238);
        goto LAB_020e2358;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 2;
    } while (uVar13 != 0);
  }
  puVar5 = (undefined4 *)func_0x014002dc(param_2,iVar11,0x2f);
LAB_020e2358:
  (*(code *)*puVar5)(&iStack_58,param_2,puVar5[1]);
  fVar19 = (float)VectorSignedToFloat(iStack_54 * iVar4,(byte)(uVar12 >> 0x16) & 3);
  iVar4 = (int)(fVar19 / fVar1);
  if (fVar19 / fVar1 == fVar2) {
    iVar4 = -0x80000000;
  }
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar7 + 0x58);
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x4c);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar18 = func_0x01dbb4bc(iVar7,0);
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x68);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x01e6b664(iVar7,0);
  uVar9 = func_0x02acfdc4(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01dc5c94(iVar11,uVar18,uVar8,iVar6,iVar4,param_2,uVar9,param_3,aiStack_44 + 2,0);
  if (iVar4 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *param_2;
    uVar12 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar14[-1] == **(int **)(_UNK_020e287c + 0x20e2498)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar14 * 8 + 0x228);
          goto LAB_020e24e0;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_020e287c + 0x20e2498),0x2d);
LAB_020e24e0:
    aiStack_44[2] = (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar6 = aiStack_44[2];
  iVar4 = *(int *)(iVar4 + 0x58);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar7 = 0;
  func_0x01dc688c(iVar4,iVar6,&uStack_48,aiStack_44 + 1,0);
  if (0 < aiStack_44[2]) {
    FUN_020df144(param_1,iVar3,&uStack_4c,&uStack_50);
    iVar7 = FUN_020de158(param_1,aiStack_44[2],iVar3,uStack_4c,uStack_50,0,0,0);
    FUN_020de384(param_1,iVar7,0,0,0xe,0);
    uVar18 = FUN_020d80e4(0x12);
    FUN_020df204(param_1,uVar18,iVar7);
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *param_2;
    piVar14 = *(int **)(_UNK_020e2884 + 0x20e25e0);
    uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar14) {
          puVar5 = (undefined4 *)(iVar3 + *piVar15 * 8 + 0x130);
          goto LAB_020e2628;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_2,*piVar14,0xe);
LAB_020e2628:
    uVar18 = (*(code *)*puVar5)(param_2,1,puVar5[1]);
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *param_2;
    uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar14) {
          puVar5 = (undefined4 *)(iVar3 + *piVar15 * 8 + 0x130);
          goto LAB_020e26a4;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_2,*piVar14,0xe);
LAB_020e26a4:
    uVar8 = (*(code *)*puVar5)(param_2,0xe,puVar5[1]);
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *param_2;
    uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar14) {
          puVar5 = (undefined4 *)(iVar3 + *piVar15 * 8 + 200);
          goto LAB_020e2718;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(param_2,*piVar14,1);
LAB_020e2718:
    uVar9 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0210e2d4(iVar7,0);
    func_0x019a268c(uVar18,uVar8,uVar9,uVar10,0);
  }
  return iVar7;
}



// ===== FAT.Merge.Board$$TrySpawnItem RVA 0x20d2888 =====

undefined4 FUN_020e2888(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x3858,0);
  if (iVar1 == 0) {
    iVar1 = FUN_020defc4(param_1,3,3,0,0,0,0,0);
    if ((0 < param_2) && (-1 < iVar1)) {
      FUN_020df144(param_1,iVar1,&uStack_24,&uStack_28);
      uVar2 = FUN_020de158(param_1,param_2,iVar1,uStack_24,uStack_28,0,0,0);
      FUN_020de384(param_1,uVar2,0,0,param_3,0);
      FUN_020df204(param_1,param_4,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3858,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0220ca7c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UseActiveSource RVA 0x20d29b0 =====

/* WARNING: Removing unreachable block (ram,0x020e2df4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e29b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar12 = (char *)(_UNK_020e317c + 0x20e29d0);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e3180 + 0x20e29e4));
    func_0x01384978(*(undefined4 *)(_UNK_020e3184 + 0x20e29f0));
    func_0x01384978(*(undefined4 *)(_UNK_020e3188 + 0x20e29fc));
    func_0x01384978(*(undefined4 *)(_UNK_020e318c + 0x20e2a08));
    func_0x01384978(*(undefined4 *)(_UNK_020e3190 + 0x20e2a14));
    func_0x01384978(*(undefined4 *)(_UNK_020e3194 + 0x20e2a20));
    func_0x01384978(*(undefined4 *)(_UNK_020e3198 + 0x20e2a2c));
    func_0x01384978(*(undefined4 *)(_UNK_020e319c + 0x20e2a38));
    func_0x01384978(*(undefined4 *)(_UNK_020e31a0 + 0x20e2a44));
    func_0x01384978(*(undefined4 *)(_UNK_020e31a4 + 0x20e2a50));
    *pcVar12 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iVar1 = func_0x0229f06c(0x9e45,0);
  if (iVar1 == 0) {
    *param_3 = 1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e31a8 + 0x20e2ae8));
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar3 = func_0x0211b1e8(iVar1,0);
      if (iVar3 != 0) {
        uVar2 = 0;
        iVar3 = func_0x0211b24c(iVar1,0);
        iVar4 = FUN_020e1c7c(param_1,iVar1,iVar3);
        if (iVar4 < 0) {
          *param_3 = 3;
        }
        else {
          iVar13 = *(int *)(param_1 + 0x98);
          if (iVar13 == 0) {
            func_0x01384bf0();
          }
          piVar5 = (int *)func_0x02141e34(iVar13,0);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar13 = *piVar5;
          uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if (piVar9[-1] == **(int **)(_UNK_020e31ac + 0x20e2b80)) {
                puVar6 = (undefined4 *)(iVar13 + *piVar9 * 8 + 0xc0);
                goto LAB_020e2be0;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_020e31ac + 0x20e2b80),0);
LAB_020e2be0:
          piVar5 = (int *)(*(code *)*puVar6)(piVar5,puVar6[1]);
          piVar15 = *(int **)(_UNK_020e31b0 + 0x20e2c00);
          piVar14 = *(int **)(_UNK_020e31b4 + 0x20e2c08);
          piVar9 = *(int **)(_UNK_020e31b8 + 0x20e2c10);
          do {
            do {
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar13 = *piVar5;
              uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
                do {
                  if (piVar10[-1] == *piVar15) {
                    puVar6 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xc0);
                    goto LAB_020e2c68;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 2;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined4 *)func_0x014002dc(piVar5,*piVar15,0);
LAB_020e2c68:
              iVar13 = (*(code *)*puVar6)(piVar5,puVar6[1]);
              if (iVar13 == 0) {
                piVar10 = (int *)0x0;
                goto LAB_020e2d7c;
              }
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar13 = *piVar5;
              uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
              if (uVar8 != 0) {
                piVar10 = (int *)(*(int *)(iVar13 + 0x58) + 4);
                do {
                  if (piVar10[-1] == *piVar14) {
                    puVar6 = (undefined4 *)(iVar13 + *piVar10 * 8 + 0xc0);
                    goto LAB_020e2cdc;
                  }
                  uVar8 = uVar8 - 1;
                  piVar10 = piVar10 + 2;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined4 *)func_0x014002dc(piVar5,*piVar14,0);
LAB_020e2cdc:
              uVar2 = (*(code *)*puVar6)(piVar5,puVar6[1]);
              piVar10 = (int *)func_0x01384ab8(uVar2,*piVar9);
            } while (piVar10 == (int *)0x0);
            iVar13 = *piVar10;
            uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(int *)(iVar13 + 0x58) + 4);
              do {
                if (piVar11[-1] == *piVar9) {
                  puVar6 = (undefined4 *)(iVar13 + *piVar11 * 8 + 0xc0);
                  goto LAB_020e2d50;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar10,*piVar9,0);
LAB_020e2d50:
            iVar13 = (*(code *)*puVar6)(piVar10,param_2,puVar6[1]);
          } while (iVar13 == 0);
LAB_020e2d7c:
          if (piVar5 != (int *)0x0) {
            iVar13 = *piVar5;
            uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
            if (uVar8 != 0) {
              piVar14 = (int *)(*(int *)(iVar13 + 0x58) + 4);
              do {
                if (piVar14[-1] == **(int **)(_UNK_020e31bc + 0x20e2d94)) {
                  puVar6 = (undefined4 *)(iVar13 + *piVar14 * 8 + 0xc0);
                  goto LAB_020e2ddc;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 2;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(_UNK_020e31bc + 0x20e2d94),0);
LAB_020e2ddc:
            (*(code *)*puVar6)(piVar5,puVar6[1]);
          }
          if (piVar10 == (int *)0x0) {
            if (*(int *)(**(int **)(_UNK_020e31c0 + 0x20e2e5c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            puVar6 = *(undefined4 **)(_UNK_020e31c4 + 0x20e2e78);
          }
          else {
            iVar13 = *piVar10;
            uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
            if (uVar8 != 0) {
              piVar5 = (int *)(*(int *)(iVar13 + 0x58) + 4);
              do {
                if (piVar5[-1] == *piVar9) {
                  puVar6 = (undefined4 *)(iVar13 + *piVar5 * 8 + 200);
                  goto LAB_020e2e84;
                }
                uVar8 = uVar8 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined4 *)func_0x014002dc(piVar10,*piVar9,1);
LAB_020e2e84:
            iVar13 = (*(code *)*puVar6)(piVar10,param_2,&iStack_28,&iStack_2c,puVar6[1]);
            if (iVar13 != 0) {
              func_0x0211b304(iVar1,0);
              if (param_2 == 0) {
                func_0x01384bf0();
              }
              uVar2 = func_0x0210e2d4(param_2,0);
              func_0x02317ae0(uVar2,0);
              if (0 < iStack_28) {
                FUN_020df144(param_1,iVar4,&uStack_30,&uStack_34);
                uVar2 = FUN_020de158(param_1,iStack_28,iVar4,uStack_30,uStack_34,0,0,0);
                uVar7 = func_0x02123568(iVar1,0);
                FUN_020de384(param_1,uVar2,0,0,0x12,uVar7);
                if (iStack_2c == 0) {
                  iStack_2c = FUN_020d8024(param_2,0x16);
                }
                FUN_020df204(param_1,iStack_2c,uVar2);
              }
              if (iVar3 != 0) {
                FUN_020dd73c(param_1,param_2,1,5);
                FUN_020dd8f4(param_1,param_2,param_2,5);
              }
              iVar1 = *(int *)(param_1 + 0x98);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x02148ef8(iVar1,param_2,1,0);
              piVar5 = (int *)func_0x021566f4(0);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar9[-1] == **(int **)(_UNK_020e31d4 + 0x20e2ffc)) {
                    puVar6 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0x238);
                    goto LAB_020e307c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 2;
                } while (uVar8 != 0);
              }
              puVar6 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(_UNK_020e31d4 + 0x20e2ffc),0x2f);
LAB_020e307c:
              (*(code *)*puVar6)(piVar5,param_2,0x17,puVar6[1]);
              *param_3 = 0;
              return 1;
            }
            if (*(int *)(**(int **)(_UNK_020e31cc + 0x20e3044) + 0x74) == 0) {
              func_0x01384ab4();
            }
            puVar6 = *(undefined4 **)(_UNK_020e31d0 + 0x20e3060);
          }
          uVar2 = 0;
          func_0x028c2874(*puVar6,0);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9e45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02286f8c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UseSpecialBox RVA 0x20d31d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e31d8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_020e35f4 + 0x20e31f8);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e35f8 + 0x20e320c));
    func_0x01384978(*(undefined4 *)(_UNK_020e35fc + 0x20e3218));
    func_0x01384978(*(undefined4 *)(_UNK_020e3600 + 0x20e3224));
    func_0x01384978(*(undefined4 *)(_UNK_020e3604 + 0x20e3230));
    func_0x01384978(*(undefined4 *)(_UNK_020e3608 + 0x20e323c));
    func_0x01384978(*(undefined4 *)(_UNK_020e360c + 0x20e3248));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9e21,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e3610 + 0x20e32cc));
    if ((iVar1 == 0) || (iVar3 = func_0x02136cb8(iVar1,0), iVar3 == 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      uStack_30 = func_0x0210e2d4(param_2,0);
      uVar12 = func_0x01384abc(**(undefined4 **)(_UNK_020e3624 + 0x20e34bc),&uStack_30);
      uVar12 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e3628 + 0x20e34e0),uVar12,0);
      if (*(int *)(**(int **)(_UNK_020e362c + 0x20e34f4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar12,0);
      uVar12 = 2;
    }
    else {
      uVar2 = 0;
      iVar3 = func_0x02136c54(iVar1,0);
      iVar4 = FUN_020e1c7c(param_1,iVar1,0);
      if (iVar4 < 0) {
        uVar12 = 3;
      }
      else {
        uVar12 = 4;
        if (iVar3 != 0) {
          uVar12 = 5;
        }
        iVar5 = func_0x021370a4(iVar1,0);
        if (iVar5 < 1) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 0;
          uStack_30 = func_0x0210e2d4(param_2,0);
          puVar8 = *(undefined4 **)(_UNK_020e3614 + 0x20e3558);
          uVar12 = func_0x01384abc(*puVar8,&uStack_30);
          iStack_34 = iVar5;
          uVar6 = func_0x01384abc(*puVar8,&iStack_34);
          uVar12 = func_0x0244f690(**(undefined4 **)(_UNK_020e3618 + 0x20e3590),uVar12,uVar6,0);
          if (*(int *)(**(int **)(_UNK_020e361c + 0x20e35a4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar12,0);
          uVar12 = 1;
        }
        else {
          FUN_020df144(param_1,iVar4,&uStack_28,&uStack_2c);
          uVar2 = FUN_020de158(param_1,iVar5,iVar4,uStack_28,uStack_2c,0,0,0);
          uVar6 = func_0x02123568(iVar1,0);
          FUN_020de384(param_1,uVar2,0,0,0xc,uVar6);
          uVar6 = FUN_020d8024(param_2,0xe);
          FUN_020df204(param_1,uVar6,uVar2);
          if (iVar3 != 0) {
            FUN_020dd73c(param_1,param_2,1,uVar12);
            FUN_020dd8f4(param_1,param_2,param_2,uVar12);
          }
          iVar1 = *(int *)(param_1 + 0x98);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ef8(iVar1,param_2,1,0);
          piVar7 = (int *)func_0x021566f4(0);
          if (piVar7 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar7;
          uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar10[-1] == **(int **)(_UNK_020e3620 + 0x20e3458)) {
                puVar8 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0x238);
                goto LAB_020e35d4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_020e3620 + 0x20e3458),0x2f);
LAB_020e35d4:
          (*(code *)*puVar8)(piVar7,param_2,0x13,puVar8[1]);
          uVar12 = 0;
        }
      }
    }
    *param_3 = uVar12;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e21,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02285d44(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UseChoiceBox RVA 0x20d3630 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e3630(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  
  pcVar9 = (char *)(_UNK_020e3870 + 0x20e3650);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e3874 + 0x20e3664));
    func_0x01384978(*(undefined4 *)(_UNK_020e3878 + 0x20e3670));
    func_0x01384978(*(undefined4 *)(_UNK_020e387c + 0x20e367c));
    func_0x01384978(*(undefined4 *)(_UNK_020e3880 + 0x20e3688));
    func_0x01384978(*(undefined4 *)(_UNK_020e3884 + 0x20e3694));
    func_0x01384978(*(undefined4 *)(_UNK_020e3888 + 0x20e36a0));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e27,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e27,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02286f8c(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020e388c + 0x20e3704));
  func_0x0210af1c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0xc) = param_1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e3890 + 0x20e3748));
  iVar4 = FUN_020e1c7c(param_1,iVar3,0);
  if (iVar4 < 0) {
    *param_3 = 3;
    return 0;
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar5 = (int *)func_0x02121b80(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 == 0) goto LAB_020e3848;
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (piVar5 == (int *)0x0) {
LAB_020e37d8:
    piVar6 = (int *)func_0x01384be4();
    func_0x03258fdc(piVar6,piVar5,**(undefined4 **)(_UNK_020e3898 + 0x20e37f0));
    piVar5 = piVar6;
  }
  else {
    uVar8 = (uint)*(byte *)(**(int **)(_UNK_020e3894 + 0x20e37a8) + 0xb8);
    if ((*(byte *)(*piVar5 + 0xb8) < uVar8) ||
       (*(int *)(*(int *)(*piVar5 + 100) + uVar8 * 4 + -4) != **(int **)(_UNK_020e3894 + 0x20e37a8))
       ) goto LAB_020e37d8;
  }
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_020e389c + 0x20e3804));
  func_0x02450fe4(uVar7,iVar1,**(undefined4 **)(_UNK_020e38a0 + 0x20e3820),0);
  (**(code **)(iVar3 + 0xc))
            (*(undefined4 *)(iVar3 + 0x20),uVar2,piVar5,uVar7,*(undefined4 *)(iVar3 + 0x14));
LAB_020e3848:
  *param_3 = 0;
  return 1;
}



// ===== FAT.Merge.Board$$UseClickItemSource RVA 0x20d38a4 =====

void FUN_020e38a4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9df3,0);
  if (iVar1 == 0) {
    func_0x020e3924(param_1,param_2,0,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x9df3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02285d44(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$UseClickItemSourceWithConsume RVA 0x20d3924 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020e3924(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar11 = (char *)(_UNK_020e4730 + 0x20e3944);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e4734 + 0x20e395c));
    func_0x01384978(*(undefined4 *)(_UNK_020e4738 + 0x20e3968));
    func_0x01384978(*(undefined4 *)(_UNK_020e473c + 0x20e3974));
    func_0x01384978(*(undefined4 *)(_UNK_020e4740 + 0x20e3980));
    func_0x01384978(*(undefined4 *)(_UNK_020e4744 + 0x20e398c));
    func_0x01384978(*(undefined4 *)(_UNK_020e4748 + 0x20e3998));
    func_0x01384978(*(undefined4 *)(_UNK_020e474c + 0x20e39a4));
    func_0x01384978(*(undefined4 *)(_UNK_020e4750 + 0x20e39b0));
    func_0x01384978(*(undefined4 *)(_UNK_020e4754 + 0x20e39bc));
    func_0x01384978(*(undefined4 *)(_UNK_020e4758 + 0x20e39c8));
    func_0x01384978(*(undefined4 *)(_UNK_020e475c + 0x20e39d4));
    func_0x01384978(*(undefined4 *)(_UNK_020e4760 + 0x20e39e0));
    func_0x01384978(*(undefined4 *)(_UNK_020e4764 + 0x20e39ec));
    func_0x01384978(*(undefined4 *)(_UNK_020e4768 + 0x20e39f8));
    func_0x01384978(*(undefined4 *)(_UNK_020e476c + 0x20e3a04));
    func_0x01384978(*(undefined4 *)(_UNK_020e4770 + 0x20e3a10));
    *pcVar11 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9df4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9df4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02286558(iVar1,param_1,param_2,param_3,param_4,0);
    return iVar1;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e4774 + 0x20e3aa4));
  if ((iVar1 == 0) || (iVar2 = func_0x02124184(iVar1,0), iVar2 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iStack_48 = func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e47dc + 0x20e3b58),&iStack_48);
    uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e47e0 + 0x20e3b7c),uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e47e4 + 0x20e3b90) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
    uVar5 = 2;
    goto LAB_020e3bb0;
  }
  piVar3 = (int *)func_0x02122c08(iVar1,0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar3;
  uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_020e4778 + 0x20e3af4)) {
        puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
        goto LAB_020e3bcc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020e4778 + 0x20e3af4),0);
LAB_020e3bcc:
  iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar2 < 1) {
    iVar2 = FUN_020d842c(param_1);
    iVar7 = 0;
    if (-1 < iVar2) {
LAB_020e3cb4:
      iVar2 = 0;
      iVar8 = func_0x02123c00(iVar1,&uStack_28,0);
      if (0 < iVar8) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_48,param_2,0);
        iVar2 = iStack_48;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_48,param_2,0);
        iVar2 = FUN_020defc4(param_1,iVar2,uStack_44,0,0,iVar1,0,0);
        if (iVar2 < 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = 0;
          iStack_48 = func_0x0210e2d4(param_2,0);
          uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e47b4 + 0x20e3f7c),&iStack_48);
          uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e47b8 + 0x20e3fa0),uVar5,0);
          if (*(int *)(**(int **)(_UNK_020e47bc + 0x20e3fb4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar5,0);
        }
        else {
          FUN_020df144(param_1,iVar2,&uStack_2c,&uStack_30);
          uVar13 = uStack_2c;
          uVar5 = uStack_30;
          iVar6 = func_0x02123058(iVar1,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar2 = FUN_020de158(param_1,iVar8,iVar2,uVar13,uVar5,0,*(undefined1 *)(iVar6 + 0x2c),0);
          uVar5 = func_0x02123568(iVar1,0);
          FUN_020de384(param_1,iVar2,0,iVar7,2,uVar5);
          iVar6 = FUN_020d8024(param_2,1);
          uVar5 = func_0x02124ce4(iVar1,uStack_28,iVar8,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar5 = FUN_020d81f8(iVar6,uVar5);
          FUN_020df204(param_1,uVar5,iVar2);
        }
      }
      iVar8 = func_0x02122f9c(iVar1,0);
      if ((iVar8 < 1) && (iVar8 = func_0x02122f48(iVar1,0), iVar8 == 0)) {
        iVar8 = func_0x02123058(iVar1,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar8 + 0x58)) goto LAB_020e4020;
      }
      else {
LAB_020e4020:
        iVar8 = func_0x02122a10(iVar1,0);
        if (iVar8 == 0) goto LAB_020e4290;
      }
      FUN_020dd73c(param_1,param_2,1,5);
      FUN_020dd8f4(param_1,param_2,param_2,5);
      iVar8 = func_0x02123058(iVar1,0);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x20);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x0345fcc8(iVar8,**(undefined4 **)(_UNK_020e47c0 + 0x20e4094));
      if (0 < iVar8) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_48,param_2,0);
        iVar8 = iStack_48;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_48,param_2,0);
        iVar8 = FUN_020defc4(param_1,iVar8,uStack_44,0,0,iVar1,0,0);
        if (-1 < iVar8) {
          FUN_020df144(param_1,iVar8,&uStack_34,&uStack_38);
          uVar5 = FUN_020db85c(param_1,uStack_34,uStack_38);
          iVar8 = func_0x02123058(iVar1,0);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          piVar3 = *(int **)(_UNK_020e47c4 + 0x20e415c);
          uVar13 = *(undefined4 *)(iVar8 + 0x20);
          iVar8 = *piVar3;
          if (*(int *)(iVar8 + 0x74) == 0) {
            func_0x01384ab4();
            iVar8 = *piVar3;
          }
          iVar6 = *(int *)(*(int *)(iVar8 + 0x5c) + 4);
          if (iVar6 == 0) {
            if (*(int *)(iVar8 + 0x74) == 0) {
              func_0x01384ab4();
              iVar8 = *piVar3;
            }
            uVar12 = **(undefined4 **)(iVar8 + 0x5c);
            iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_020e47c8 + 0x20e41ac));
            func_0x03a06794(iVar6,uVar12,**(undefined4 **)(_UNK_020e47cc + 0x20e41cc),0);
            *(int *)(*(int *)(**(int **)(_UNK_020e47d0 + 0x20e41e0) + 0x5c) + 4) = iVar6;
          }
          func_0x02fbccf8(&iStack_48,uVar13,iVar6,0,**(undefined4 **)(_UNK_020e47d4 + 0x20e4204));
          if (0 < iStack_48) {
            iVar8 = FUN_020de158(param_1,iStack_48,uVar5,uStack_34,uStack_38,0,0,0);
            uVar5 = func_0x02123568(iVar1,0);
            FUN_020de384(param_1,iVar8,0,iVar7,8,uVar5);
            uVar5 = FUN_020d8024(0,0xd);
            FUN_020df204(param_1,uVar5,iVar8);
            if (iVar2 == 0) {
              iVar2 = iVar8;
            }
          }
        }
      }
LAB_020e4290:
      iVar7 = *(int *)(param_1 + 0x98);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      func_0x02148ef8(iVar7,param_2,1,0);
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020e47d8 + 0x20e42dc)) {
            puVar4 = (undefined4 *)(iVar7 + *piVar10 * 8 + 0x238);
            goto LAB_020e4324;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020e47d8 + 0x20e42dc),0x2f);
LAB_020e4324:
      (*(code *)*puVar4)(piVar3,param_2,2,puVar4[1]);
      func_0x02126e14(iVar1,0);
      *param_4 = 0;
      return iVar2;
    }
  }
  else {
    if (param_3 == 0) {
      piVar3 = (int *)func_0x021566f4(0);
      uVar5 = func_0x02122c08(iVar1,0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020e478c + 0x20e3e68)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x1e8);
            goto LAB_020e3f34;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020e478c + 0x20e3e68),0x25);
LAB_020e3f34:
      iVar2 = (*(code *)*puVar4)(piVar3,uVar5,puVar4[1]);
      param_3 = 0;
    }
    else {
      iVar2 = func_0x02116ae0(param_3,0);
      if ((iVar2 == 0) || (iVar2 = func_0x0210e250(param_3,6,0,0), iVar2 != 0)) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iStack_48 = func_0x0210e2d4(param_2,0);
        uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e477c + 0x20e3c44),&iStack_48);
        uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e4780 + 0x20e3c68),uVar5,0);
        if (*(int *)(**(int **)(_UNK_020e4784 + 0x20e3c7c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar5,0);
        uVar5 = 1;
        goto LAB_020e3bb0;
      }
      piVar3 = (int *)func_0x021566f4(0);
      iVar2 = func_0x02123058(iVar1,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0x18);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020e4788 + 0x20e3eec)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x1f0);
            goto LAB_020e4360;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020e4788 + 0x20e3eec),0x26);
LAB_020e4360:
      iVar2 = (*(code *)*puVar4)(piVar3,uVar5,param_3,puVar4[1]);
    }
    if (iVar2 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iStack_48 = func_0x0210e2d4(param_2,0);
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e4790 + 0x20e4448),&iStack_48);
      uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e4794 + 0x20e446c),uVar5,0);
      if (*(int *)(**(int **)(_UNK_020e4798 + 0x20e4480) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar5,0);
      uVar5 = 6;
      goto LAB_020e3bb0;
    }
    func_0x02131294(iVar1,*(undefined4 *)(iVar2 + 0x18),0);
    func_0x02126f48(iVar1,0);
    iVar7 = func_0x02122ab0(iVar1,0);
    if (0 < iVar7) {
      piVar3 = (int *)func_0x021566f4(0);
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = *piVar3;
      uVar9 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020e479c + 0x20e43e4)) {
            puVar4 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0x160);
            goto LAB_020e44b0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020e479c + 0x20e43e4),0x14);
LAB_020e44b0:
      iVar8 = (*(code *)*puVar4)(piVar3,iVar7,puVar4[1]);
      if (iVar8 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iStack_48 = func_0x0210e2d4(param_2,0);
        puVar4 = *(undefined4 **)(_UNK_020e47a0 + 0x20e4540);
        uVar5 = func_0x01384abc(*puVar4,&iStack_48);
        iStack_3c = iVar7;
        uVar13 = func_0x01384abc(*puVar4,&iStack_3c);
        uVar5 = func_0x0244f690(**(undefined4 **)(_UNK_020e47a4 + 0x20e4578),uVar5,uVar13,0);
        if (*(int *)(**(int **)(_UNK_020e47a8 + 0x20e458c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar5,0);
        iVar2 = *(int *)(param_1 + 0x58);
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *param_4 = 5;
        func_0x02126e84(iVar1,0);
        return 0;
      }
    }
    iVar8 = *(int *)(iVar2 + 0x18);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x0345fcc8(iVar8,**(undefined4 **)(_UNK_020e47ac + 0x20e44ec));
    if (iVar8 < 1) {
      uVar9 = 0;
    }
    else if (*(int *)(iVar2 + 0x14) == 0) {
      uVar9 = 1;
    }
    else {
      uVar9 = (uint)(*(int *)(iVar2 + 0x14) == 0x1f);
    }
    iVar8 = FUN_020d842c(param_1);
    if ((int)uVar9 <= iVar8) {
      if (iVar7 < 1) {
        if (0 < *(int *)(iVar2 + 0x14)) {
          if (param_3 == 0) {
            param_3 = func_0x020e47e8(param_1);
          }
          FUN_020dd73c(param_1,param_3,0,4);
          FUN_020dd8f4(param_1,param_3,param_2,4);
          iVar2 = *(int *)(param_1 + 0x14);
          if (iVar2 != 0) {
            (**(code **)(iVar2 + 0xc))
                      (*(undefined4 *)(iVar2 + 0x20),param_2,param_3,*(undefined4 *)(iVar2 + 0x14));
          }
        }
      }
      else {
        uVar5 = func_0x021626e4(iVar7,0);
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar10[-1] == **(int **)(_UNK_020e47b0 + 0x20e464c)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x168);
              goto LAB_020e470c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020e47b0 + 0x20e464c),0x15);
LAB_020e470c:
        (*(code *)*puVar4)(piVar3,iVar7,uVar5,puVar4[1]);
      }
      goto LAB_020e3cb4;
    }
  }
  uVar5 = 3;
LAB_020e3bb0:
  *param_4 = uVar5;
  return 0;
}



// ===== FAT.Merge.Board$$FindConsumableItemById RVA 0x20d47e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e47e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x7ba7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ba7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02182b6c + 0x2182a78);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02182b70 + 0x2182a8c),param_1,param_2,0);
      *pcVar7 = '\x01';
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182b74 + 0x2182b5c));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x80);
  do {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) {
      return 0;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar4 = *(int *)(iVar1 + 0x10 + uVar5 * 4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar4 + 8) != 0) &&
       (iVar2 = func_0x0210e2d4(*(int *)(iVar4 + 8),0), iVar2 == param_2)) {
      iVar2 = *(int *)(iVar4 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02116ae0(iVar2,0);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar4 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0210e250(iVar2,6,0,0);
        if (iVar2 == 0) {
          return *(undefined4 *)(iVar4 + 8);
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while( true );
}



// ===== FAT.Merge.Board$$MixSourceConsume RVA 0x20d4900 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e4900(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_020e4bf4 + 0x20e4920);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e4bf8 + 0x20e4938));
    func_0x01384978(*(undefined4 *)(_UNK_020e4bfc + 0x20e4944));
    func_0x01384978(*(undefined4 *)(_UNK_020e4c00 + 0x20e4950));
    func_0x01384978(*(undefined4 *)(_UNK_020e4c04 + 0x20e495c));
    func_0x01384978(*(undefined4 *)(_UNK_020e4c08 + 0x20e4968));
    func_0x01384978(*(undefined4 *)(_UNK_020e4c0c + 0x20e4974));
    *pcVar6 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x9ea7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02288f0c(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  *param_4 = 1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02116ae0(param_2,0);
  if ((param_3 == 0 || iVar1 == 0) || (iVar1 = func_0x0210cd28(param_3,0), iVar1 != param_1)) {
    puVar3 = *(undefined4 **)(_UNK_020e4c10 + 0x20e4a14);
  }
  else {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_020e4c14 + 0x20e4a9c));
    iVar1 = iStack_24;
    if (iVar5 == 0) {
      return (uint)(*param_4 == 0);
    }
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0212ff04(iVar1,0);
    iVar1 = iStack_24;
    if (iVar5 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = func_0x0210e2d4(param_2,0);
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_020e4c18 + 0x20e4b8c),&uStack_28);
      uVar4 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e4c1c + 0x20e4bb0),uVar4,0);
      if (*(int *)(**(int **)(_UNK_020e4c20 + 0x20e4bc4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
      iVar1 = 2;
      goto LAB_020e4a58;
    }
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02130ca0(iVar1,param_3,0);
    if (iVar1 != 0) {
      FUN_020dd73c(param_1,param_3,0,4);
      FUN_020dd8f4(param_1,param_3,param_2,4);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      }
      *param_4 = 0;
      return 1;
    }
    puVar3 = *(undefined4 **)(&UNK_020e4bf4 + _UNK_020e4c24);
  }
  uVar4 = func_0x0244f690(*puVar3,param_2,param_3,0);
  if (*(int *)(**(int **)(_UNK_020e4c28 + 0x20e4a38) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar4,0);
  iVar1 = 1;
LAB_020e4a58:
  *param_4 = iVar1;
  return 0;
}



// ===== FAT.Merge.Board$$MixSourceProduce RVA 0x20d4c2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020e4c2c(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  int iStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_020e5414 + 0x20e4c4c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e5418 + 0x20e4c60));
    func_0x01384978(*(undefined4 *)(_UNK_020e541c + 0x20e4c6c));
    func_0x01384978(*(undefined4 *)(_UNK_020e5420 + 0x20e4c78));
    func_0x01384978(*(undefined4 *)(_UNK_020e5424 + 0x20e4c84));
    func_0x01384978(*(undefined4 *)(_UNK_020e5428 + 0x20e4c90));
    func_0x01384978(*(undefined4 *)(_UNK_020e542c + 0x20e4c9c));
    func_0x01384978(*(undefined4 *)(_UNK_020e5430 + 0x20e4ca8));
    func_0x01384978(*(undefined4 *)(_UNK_020e5434 + 0x20e4cb4));
    func_0x01384978(*(undefined4 *)(_UNK_020e5438 + 0x20e4cc0));
    func_0x01384978(*(undefined4 *)(_UNK_020e543c + 0x20e4ccc));
    func_0x01384978(*(undefined4 *)(_UNK_020e5440 + 0x20e4cd8));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  iVar1 = func_0x0229f06c(0x9ea9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ea9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02285d44(iVar1,param_1,param_2,param_3,0);
    return iVar1;
  }
  iVar1 = FUN_020d842c(param_1);
  if (iVar1 < 1) {
    uVar3 = 3;
    iVar1 = 0;
    goto LAB_020e4e00;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = 0;
  iVar2 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_020e5444 + 0x20e4d84));
  iVar4 = iStack_28;
  if (iVar2 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0212ff04(iVar4,0);
    iVar4 = iStack_28;
    if (iVar2 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar1 = 0;
      func_0x0213011c(&uStack_48,iVar4,0);
      iVar4 = iStack_28;
      uVar3 = uStack_44;
      if ((uStack_48 & 1) == 0) {
        uVar3 = 6;
        goto LAB_020e4e00;
      }
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar2 = 0;
      iVar1 = func_0x02130ef4(iVar4,uVar3,&uStack_2c,0);
      if (0 < iVar1) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_48,param_2,0);
        uVar7 = uStack_48;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_48,param_2,0);
        iVar4 = FUN_020defc4(param_1,uVar7,uStack_44,0,0,iStack_28,0,0);
        if (iVar4 < 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = 0;
          uStack_48 = func_0x0210e2d4(param_2,0);
          puVar6 = *(undefined4 **)(_UNK_020e5448 + 0x20e4fc8);
          uVar3 = func_0x01384abc(*puVar6,&uStack_48);
          iStack_4c = iVar1;
          uVar12 = func_0x01384abc(*puVar6,&iStack_4c);
          uVar3 = func_0x0244f690(**(undefined4 **)(_UNK_020e544c + 0x20e5000),uVar3,uVar12,0);
          if (*(int *)(**(int **)(_UNK_020e5450 + 0x20e5014) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2944(uVar3,0);
        }
        else {
          FUN_020df144(param_1,iVar4,&uStack_30,&uStack_34);
          iVar2 = FUN_020de158(param_1,iVar1,iVar4,uStack_30,uStack_34,0,0,0);
          iVar4 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x02123568(iVar4,0);
          FUN_020de384(param_1,iVar2,0,0,2,uVar3);
          iVar5 = FUN_020d8024(param_2,0x10);
          iVar4 = iStack_28;
          uVar3 = uStack_2c;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x0212ff9c(iVar4,uVar3,iVar1,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar3 = FUN_020d81f8(iVar5,uVar3);
          FUN_020df204(param_1,uVar3,iVar2);
        }
      }
      iVar1 = iStack_28;
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0212f990(iVar1,0);
      iVar4 = iStack_28;
      iVar1 = iVar2;
      if (iVar5 < 1) {
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0212f93c(iVar4,0);
        iVar4 = iStack_28;
        if (iVar5 != 0) goto LAB_020e50b0;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0212fb30(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (0 < *(int *)(iVar4 + 0x3c)) goto LAB_020e50b0;
LAB_020e50d4:
        FUN_020dd73c(param_1,param_2,1,5);
        FUN_020dd8f4(param_1,param_2,param_2,5);
        iVar4 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0212fb30(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x14);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0345fcc8(iVar4,**(undefined4 **)(_UNK_020e5454 + 0x20e5144));
        if (0 < iVar4) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cd7c(&uStack_48,param_2,0);
          uVar7 = uStack_48;
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cd7c(&uStack_48,param_2,0);
          iVar4 = FUN_020defc4(param_1,uVar7,uStack_44,0,0,iStack_28,0,0);
          if (-1 < iVar4) {
            FUN_020df144(param_1,iVar4,&uStack_38,&uStack_3c);
            uVar3 = FUN_020db85c(param_1,uStack_38,uStack_3c);
            iVar4 = iStack_28;
            if (iStack_28 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x0212fb30(iVar4,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            piVar11 = *(int **)(_UNK_020e5458 + 0x20e5220);
            uVar12 = *(undefined4 *)(iVar4 + 0x14);
            iVar4 = *piVar11;
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x01384ab4();
              iVar4 = *piVar11;
            }
            iVar5 = *(int *)(*(int *)(iVar4 + 0x5c) + 8);
            if (iVar5 == 0) {
              if (*(int *)(iVar4 + 0x74) == 0) {
                func_0x01384ab4();
                iVar4 = *piVar11;
              }
              uVar10 = **(undefined4 **)(iVar4 + 0x5c);
              iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_020e545c + 0x20e526c));
              func_0x03a06794(iVar5,uVar10,**(undefined4 **)(_UNK_020e5460 + 0x20e528c),0);
              *(int *)(*(int *)(*piVar11 + 0x5c) + 8) = iVar5;
            }
            func_0x02fbccf8(&uStack_48,uVar12,iVar5,0,**(undefined4 **)(_UNK_020e5464 + 0x20e52bc));
            if (0 < (int)uStack_48) {
              iVar1 = FUN_020de158(param_1,uStack_48,uVar3,uStack_38,uStack_3c,0,0,0);
              iVar4 = iStack_28;
              if (iStack_28 == 0) {
                func_0x01384bf0();
              }
              uVar3 = func_0x02123568(iVar4,0);
              FUN_020de384(param_1,iVar1,0,0,8,uVar3);
              uVar3 = FUN_020d8024(0,0xd);
              FUN_020df204(param_1,uVar3,iVar1);
              if (iVar2 != 0) {
                iVar1 = iVar2;
              }
            }
          }
        }
      }
      else {
LAB_020e50b0:
        iVar4 = iStack_28;
        if (iStack_28 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x0212f640(iVar4,0);
        if (iVar4 != 0) goto LAB_020e50d4;
      }
      iVar4 = *(int *)(param_1 + 0x98);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02148ef8(iVar4,param_2,1,0);
      piVar11 = (int *)func_0x021566f4(0);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar11;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_020e5468 + 0x20e53ac)) {
            puVar6 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0x238);
            goto LAB_020e53f4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(_UNK_020e5468 + 0x20e53ac),0x2f);
LAB_020e53f4:
      (*(code *)*puVar6)(piVar11,param_2,0x15,puVar6[1]);
      uVar3 = 0;
      goto LAB_020e4e00;
    }
  }
  uVar3 = 2;
LAB_020e4e00:
  *param_3 = uVar3;
  return iVar1;
}



// ===== FAT.Merge.Board$$MixSourceExtract RVA 0x20d546c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e546c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_020e5694 + 0x20e548c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e5698 + 0x20e54a4));
    *pcVar5 = '\x01';
  }
  iStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0xac4b,0);
  if (iVar1 == 0) {
    *param_4 = 1;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar3 = func_0x02feb690(param_2,&iStack_24,0,**(undefined4 **)(_UNK_020e569c + 0x20e5540));
    iVar1 = iStack_24;
    if (iVar3 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      iVar1 = func_0x02130dec(iVar1,param_3,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_38,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_38,param_2,0);
        iVar1 = FUN_020defc4(param_1,uStack_38,uStack_34,0,0,iStack_24,0,0);
        if (iVar1 < 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02116f08(param_2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x02144c58(iVar1,param_3,1,0);
        }
        else {
          FUN_020df144(param_1,iVar1,&uStack_28,&uStack_2c);
          uVar2 = FUN_020de158(param_1,param_3,iVar1,uStack_28,uStack_2c,0,0,0);
          uVar4 = FUN_020d8024(param_2,0x11);
          FUN_020df204(param_1,uVar4,uVar2);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xac4b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02296764(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$ChangeItem RVA 0x20d56a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020e56a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_020e5a20 + 0x20e56c0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e5a24 + 0x20e56d8));
    func_0x01384978(*(undefined4 *)(_UNK_020e5a28 + 0x20e56e4));
    func_0x01384978(*(undefined4 *)(_UNK_020e5a2c + 0x20e56f0));
    func_0x01384978(*(undefined4 *)(_UNK_020e5a30 + 0x20e56fc));
    func_0x01384978(*(undefined4 *)(_UNK_020e5a34 + 0x20e5708));
    func_0x01384978(*(undefined4 *)(_UNK_020e5a38 + 0x20e5714));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e9c,0);
  if (iVar1 == 0) {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_020e5a3c + 0x20e5788),4);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((param_2 != 0) &&
       (iVar1 = func_0x01384ab8(param_2,*(undefined4 *)(*piVar2 + 0x20)), iVar1 == 0)) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = param_2;
    uStack_28 = param_3;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_020e5a40 + 0x20e57ec),&uStack_28);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x01384bf4();
    }
    piVar2[5] = iVar1;
    uStack_2c = param_4;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_020e5a44 + 0x20e5848),&uStack_2c);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x01384bf4();
    }
    piVar2[6] = iVar1;
    uStack_30 = param_5;
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_020e5a48 + 0x20e58a4),&uStack_30);
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x01384bf4();
    }
    piVar2[7] = iVar1;
    uVar3 = func_0x0244f708(**(undefined4 **)(_UNK_020e5a4c + 0x20e5904),piVar2,0);
    if (*(int *)(**(int **)(_UNK_020e5a50 + 0x20e5918) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar3,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_38,param_2,0);
    uVar3 = FUN_020db85c(param_1,uStack_38,uStack_34);
    FUN_020dd73c(param_1,param_2,0,param_4);
    FUN_020dd8f4(param_1,param_2,param_2,param_4);
    uVar3 = FUN_020de158(param_1,param_3,uVar3,uStack_38,uStack_34,0,0,0);
    FUN_020de384(param_1,uVar3,0,0,0,0);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_4,*(undefined4 *)(iVar1 + 0x14));
    }
    uVar5 = FUN_020d8024(param_2,param_5);
    FUN_020df204(param_1,uVar5,uVar3);
  }
  else {
    iVar1 = func_0x0229f13c(0x9e9c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022889f0(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.Merge.Board$$UseAutoItemSource RVA 0x20d5a54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e5a54(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_020e5fe0 + 0x20e5a74);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e5fe4 + 0x20e5a8c));
    func_0x01384978(*(undefined4 *)(_UNK_020e5fe8 + 0x20e5a98));
    func_0x01384978(*(undefined4 *)(_UNK_020e5fec + 0x20e5aa4));
    func_0x01384978(*(undefined4 *)(_UNK_020e5ff0 + 0x20e5ab0));
    func_0x01384978(*(undefined4 *)(_UNK_020e5ff4 + 0x20e5abc));
    func_0x01384978(*(undefined4 *)(_UNK_020e5ff8 + 0x20e5ac8));
    func_0x01384978(*(undefined4 *)(_UNK_020e5ffc + 0x20e5ad4));
    func_0x01384978(*(undefined4 *)(_UNK_020e6000 + 0x20e5ae0));
    func_0x01384978(*(undefined4 *)(_UNK_020e6004 + 0x20e5aec));
    func_0x01384978(*(undefined4 *)(_UNK_020e6008 + 0x20e5af8));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9e0b,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e600c + 0x20e5b7c));
    iVar3 = func_0x0216545c(param_2,0);
    if ((iVar1 == 0 || iVar3 == 0) || (iVar3 = func_0x0211c6c8(iVar1,0), iVar3 == 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iStack_38 = func_0x0210e2d4(param_2,0);
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_020e6028 + 0x20e5bc8),&iStack_38);
      uVar4 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e602c + 0x20e5bec),uVar4,0);
      if (*(int *)(**(int **)(_UNK_020e6030 + 0x20e5c00) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
      uVar4 = 2;
    }
    else {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_38,param_2,0);
      iVar3 = iStack_38;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_38,param_2,0);
      iVar3 = FUN_020defc4(param_1,iVar3,uStack_34,0,0,iVar1,0,param_4);
      if (-1 < iVar3) {
        uVar5 = func_0x0211c5b8(iVar1,0);
        FUN_020df144(param_1,iVar3,&uStack_28,&uStack_2c);
        uVar2 = uStack_28;
        uVar4 = uStack_2c;
        iVar6 = func_0x0211c0a0(iVar1,0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = FUN_020de158(param_1,uVar5,iVar3,uVar2,uVar4,0,*(undefined1 *)(iVar6 + 0x24),0);
        uVar2 = func_0x02123568(iVar1,0);
        FUN_020de384(param_1,uVar4,0,0,3,uVar2);
        iVar3 = FUN_020d8024(param_2,3);
        uVar2 = func_0x0211c954(iVar1,uVar5,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar2 = FUN_020d81f8(iVar3,uVar2);
        FUN_020df204(param_1,uVar2,uVar4);
        iVar3 = func_0x0211c0f4(iVar1,0);
        if (iVar3 != 0) {
          iVar3 = func_0x0211c0a0(iVar1,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x0345fcc8(iVar3,**(undefined4 **)(_UNK_020e6010 + 0x20e5df0));
          if (iVar3 < 1) {
            iVar3 = 0;
          }
          else {
            iVar3 = func_0x0211c0a0(iVar1,0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            piVar8 = *(int **)(_UNK_020e6014 + 0x20e5e28);
            uVar2 = *(undefined4 *)(iVar3 + 0x1c);
            iVar3 = *piVar8;
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar8;
            }
            iVar6 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xc);
            if (iVar6 == 0) {
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x01384ab4();
                iVar3 = *piVar8;
              }
              uVar5 = **(undefined4 **)(iVar3 + 0x5c);
              iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_020e6018 + 0x20e5e78));
              func_0x03a06794(iVar6,uVar5,**(undefined4 **)(_UNK_020e601c + 0x20e5e98),0);
              *(int *)(*(int *)(**(int **)(_UNK_020e6020 + 0x20e5eac) + 0x5c) + 0xc) = iVar6;
            }
            func_0x02fbccf8(&iStack_38,uVar2,iVar6,0,**(undefined4 **)(_UNK_020e6024 + 0x20e5ecc));
            iVar3 = iStack_38;
          }
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x0210cd7c(&iStack_38,param_2,0);
          FUN_020dd73c(param_1,param_2,1,4);
          FUN_020dd8f4(param_1,param_2,param_2,4);
          if (0 < iVar3) {
            uVar2 = FUN_020db85c(param_1,iStack_38,uStack_34);
            uVar2 = FUN_020de158(param_1,iVar3,uVar2,iStack_38,uStack_34,0,0,1);
            uVar5 = func_0x02123568(iVar1,0);
            FUN_020de384(param_1,uVar2,0,0,8,uVar5);
          }
        }
        iVar1 = *(int *)(param_1 + 0x98);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar1,param_2,1,0);
        *param_3 = 0;
        return uVar4;
      }
      uVar4 = 3;
    }
    uVar2 = 0;
    *param_3 = uVar4;
  }
  else {
    iVar1 = func_0x0229f13c(0x9e0b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022867a8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UseChest RVA 0x20d6034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e6034(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_020e6580 + 0x20e6054);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e6584 + 0x20e6068));
    func_0x01384978(*(undefined4 *)(_UNK_020e6588 + 0x20e6074));
    func_0x01384978(*(undefined4 *)(_UNK_020e658c + 0x20e6080));
    func_0x01384978(*(undefined4 *)(_UNK_020e6590 + 0x20e608c));
    func_0x01384978(*(undefined4 *)(_UNK_020e6594 + 0x20e6098));
    func_0x01384978(*(undefined4 *)(_UNK_020e6598 + 0x20e60a4));
    *pcVar12 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9ddf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ddf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02285d44(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e659c + 0x20e6128));
  if ((iVar1 == 0) || (iVar3 = func_0x0211fcd4(iVar1,0), iVar3 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = func_0x0210e2d4(param_2,0);
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e65b4 + 0x20e61f0),&uStack_38);
    uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e65b8 + 0x20e6214),uVar2,0);
    if (*(int *)(**(int **)(_UNK_020e65bc + 0x20e6228) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar2,0);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = func_0x0211f8ec(iVar1,0);
      uVar2 = 2;
      if (iVar1 == 0) {
        uVar2 = 1;
      }
    }
    *param_3 = uVar2;
LAB_020e6270:
    uVar2 = 0;
  }
  else {
    iVar3 = func_0x0211fa38(iVar1,0);
    if (iVar3 < 1) {
LAB_020e62a0:
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_38,param_2,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_38,param_2,0);
      iVar5 = FUN_020defc4(param_1,uStack_38,uStack_34,0,0,iVar1,0,0);
      if (iVar5 < 0) {
        *param_3 = 3;
        goto LAB_020e6270;
      }
      if (0 < iVar3) {
        piVar4 = (int *)func_0x021566f4(0);
        uVar2 = FUN_020da6f4(param_1);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar4;
        uVar10 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_020e65b0 + 0x20e634c)) {
              puVar6 = (undefined4 *)(iVar7 + *piVar11 * 8 + 0x168);
              goto LAB_020e6458;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_020e65b0 + 0x20e634c),0x15);
LAB_020e6458:
        (*(code *)*puVar6)(piVar4,iVar3,uVar2,puVar6[1]);
      }
      uVar8 = func_0x021215c4(iVar1,0);
      FUN_020df144(param_1,iVar5,&uStack_28,&uStack_2c);
      uVar9 = uStack_28;
      uVar2 = uStack_2c;
      iVar7 = func_0x0211fb6c(iVar1,0);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_020de158(param_1,uVar8,iVar5,uVar9,uVar2,0,*(undefined1 *)(iVar7 + 0x20),0);
      uVar9 = func_0x02123568(iVar1,0);
      FUN_020de384(param_1,uVar2,0,iVar3,4,uVar9);
      uVar9 = FUN_020d8024(param_2,0);
      FUN_020df204(param_1,uVar9,uVar2);
      iVar1 = func_0x0211fc68(iVar1,0);
      if (iVar1 < 1) {
        FUN_020dd73c(param_1,param_2,1,4);
        FUN_020dd8f4(param_1,param_2,param_2,4);
      }
      uVar9 = 0;
    }
    else {
      piVar4 = (int *)func_0x021566f4(0);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = *piVar4;
      uVar10 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_020e65a0 + 0x20e6190)) {
            puVar6 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0x160);
            goto LAB_020e6284;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_020e65a0 + 0x20e6190),0x14);
LAB_020e6284:
      iVar5 = (*(code *)*puVar6)(piVar4,iVar3,puVar6[1]);
      if (iVar5 != 0) goto LAB_020e62a0;
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = func_0x0210e2d4(param_2,0);
      puVar6 = *(undefined4 **)(_UNK_020e65a4 + 0x20e63b0);
      uVar2 = func_0x01384abc(*puVar6,&uStack_38);
      iStack_30 = iVar3;
      uVar9 = func_0x01384abc(*puVar6,&iStack_30);
      uVar9 = func_0x0244f690(**(undefined4 **)(_UNK_020e65a8 + 0x20e63e8),uVar2,uVar9,0);
      if (*(int *)(**(int **)(_UNK_020e65ac + 0x20e63fc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar2 = 0;
      func_0x028c2874(uVar9,0);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      uVar9 = 5;
    }
    *param_3 = uVar9;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UseFeatureEntry RVA 0x20d65c0 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020e65c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int unaff_r6;
  char *pcVar8;
  undefined4 uVar9;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r10;
  int unaff_lr;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  pcVar8 = (char *)(_UNK_020e66fc + 0x20e65d8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e6700 + 0x20e65ec));
    func_0x01384978(*(undefined4 *)(_UNK_020e6704 + 0x20e65f8));
    func_0x01384978(*(undefined4 *)(_UNK_020e6708 + 0x20e6604));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9e32,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e32,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&iStack_50,0,param_2,0);
    iStack_38 = iStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485278(&iStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar9,&iStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e670c + 0x20e6670));
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x5c);
    if (iVar5 != 0) {
      uVar9 = func_0x0212ec20(iVar1,0);
                    /* WARNING: Could not recover jumptable at 0x020e66ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar5 + 0xc))
                (*(undefined4 *)(iVar5 + 0x20),param_2,uVar9,*(undefined4 *)(iVar5 + 0x14));
      return;
    }
    return;
  }
  iVar1 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e6710 + 0x20e66c4),param_2,0);
  if (*(int *)(**(int **)(_UNK_020e6714 + 0x20e66d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar8 = (char *)(_UNK_028c2938 + 0x28c2888);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c293c + 0x28c289c),0);
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x199,0);
  if (iVar5 != 0) {
    iVar5 = func_0x0229f13c(0x199,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    iStack_20 = iStack_38;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar4 = *(int *)(iVar5 + 8);
    uVar9 = *(undefined4 *)(iVar5 + 0xc);
    iVar1 = *(int *)(iVar5 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    iStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar9,&uStack_30,uVar3);
    return;
  }
  piVar7 = *(int **)(_UNK_028c2940 + 0x28c28f4);
  iVar5 = *piVar7;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar7;
  }
  if (3 < *(int *)(*(int *)(iVar5 + 0x5c) + 4)) {
    return;
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar8 = (char *)(_UNK_028c2868 + 0x28c26ec);
  iStack_20 = unaff_r4;
  iStack_1c = unaff_r5;
  iStack_18 = unaff_r6;
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x14,0);
  if (iVar5 != 0) {
    iVar2 = func_0x0229f13c(0x14,0);
    iVar5 = iStack_20;
    iVar4 = iStack_1c;
    iVar6 = iStack_18;
    if (iVar2 == 0) {
      func_0x01384bf0();
      iVar5 = iStack_20;
      iVar4 = iStack_1c;
      iVar6 = iStack_18;
    }
    goto LAB_02174038;
  }
  piVar7 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar5 = *piVar7;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
    iVar5 = *piVar7;
  }
  if (**(int **)(iVar5 + 0x5c) < 1) {
LAB_028c2848:
    iVar4 = iVar1;
    iVar1 = iStack_20;
    iVar6 = iStack_1c;
    iVar2 = iStack_18;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = iStack_20;
      iVar6 = iStack_1c;
      iVar2 = iStack_18;
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar5 = *piVar7;
    }
    iVar4 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar7;
    }
    iVar6 = **(int **)(iVar5 + 0x5c);
    if (iVar4 <= iVar6) goto LAB_028c2848;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = **(int **)(*piVar7 + 0x5c);
    }
    iVar5 = *(int *)(iVar1 + 8);
    if (iVar5 < 1) {
      return;
    }
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    unaff_r7 = func_0x04673af4(iVar1,0,iVar6,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar4 = unaff_r7;
    iVar2 = 0;
    unaff_r8 = 3;
    unaff_r9 = piVar7;
    register0x00000054 = (BADSPACEBASE *)&iStack_20;
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = iVar2;
  *(int *)((int)register0x00000054 + -0xc) = iVar6;
  *(int *)((int)register0x00000054 + -0x10) = iVar1;
  pcVar8 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar8 = '\x01';
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
  iVar1 = iVar4;
  iVar5 = *(int *)((int)register0x00000054 + -0x10);
  iVar4 = *(int *)((int)register0x00000054 + -0xc);
  iVar6 = *(int *)((int)register0x00000054 + -8);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = iVar6;
  *(int *)((int)register0x00000054 + -0x1c) = iVar4;
  *(int *)((int)register0x00000054 + -0x20) = iVar5;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar1,0);
  iVar5 = *(int *)(iVar2 + 0x10);
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
  if (iVar5 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar5,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),3,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar5,uVar9,(undefined1 *)((int)register0x00000054 + -0x38),uVar3);
  return;
}



// ===== FAT.Merge.Board$$UseBox RVA 0x20d6718 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e6718(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_020e6c00 + 0x20e6734);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e6c04 + 0x20e6748));
    func_0x01384978(*(undefined4 *)(_UNK_020e6c08 + 0x20e6754));
    func_0x01384978(*(undefined4 *)(_UNK_020e6c0c + 0x20e6760));
    func_0x01384978(*(undefined4 *)(_UNK_020e6c10 + 0x20e676c));
    func_0x01384978(*(undefined4 *)(_UNK_020e6c14 + 0x20e6778));
    func_0x01384978(*(undefined4 *)(_UNK_020e6c18 + 0x20e6784));
    *pcVar12 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0x9e30,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e30,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022870a8(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e6c1c + 0x20e6828));
    if (iVar1 != 0) goto LAB_020e683c;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e6c2c + 0x20e67fc));
    if (iVar1 != 0) {
LAB_020e683c:
      iVar3 = func_0x0211df88(iVar1,0);
      if (0 < iVar3) {
        piVar4 = (int *)func_0x021566f4(0);
        if (piVar4 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *piVar4;
        uVar10 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar11[-1] == **(int **)(_UNK_020e6c30 + 0x20e687c)) {
              puVar6 = (undefined4 *)(iVar5 + *piVar11 * 8 + 0x160);
              goto LAB_020e693c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_020e6c30 + 0x20e687c),0x14);
LAB_020e693c:
        iVar5 = (*(code *)*puVar6)(piVar4,iVar3,puVar6[1]);
        if (iVar5 == 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uStack_38 = func_0x0210e2d4(param_2,0);
          puVar6 = *(undefined4 **)(_UNK_020e6c34 + 0x20e6a84);
          uVar2 = func_0x01384abc(*puVar6,&uStack_38);
          iStack_30 = iVar3;
          uVar9 = func_0x01384abc(*puVar6,&iStack_30);
          uVar2 = func_0x0244f690(**(undefined4 **)(_UNK_020e6c38 + 0x20e6abc),uVar2,uVar9,0);
          if (*(int *)(**(int **)(_UNK_020e6c3c + 0x20e6ad0) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar2,0);
          iVar1 = *(int *)(param_1 + 0x58);
          if (iVar1 == 0) {
            return 0;
          }
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
          return 0;
        }
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      func_0x0210cd7c(&uStack_38,param_2,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_38,param_2,0);
      iVar5 = FUN_020defc4(param_1,uStack_38,uStack_34,0,0,iVar1,0,0);
      if (-1 < iVar5) {
        uVar2 = 0;
        iVar7 = func_0x0211e34c(iVar1,0);
        if (0 < iVar7) {
          if (0 < iVar3) {
            piVar4 = (int *)func_0x021566f4(0);
            uVar2 = FUN_020da6f4(param_1);
            if (piVar4 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar8 = *piVar4;
            uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(int *)(iVar8 + 0x58) + 4);
              do {
                if (piVar11[-1] == **(int **)(_UNK_020e6c40 + 0x20e6a1c)) {
                  puVar6 = (undefined4 *)(iVar8 + *piVar11 * 8 + 0x168);
                  goto LAB_020e6b18;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 2;
              } while (uVar10 != 0);
            }
            puVar6 = (undefined4 *)
                     func_0x014002dc(piVar4,**(int **)(_UNK_020e6c40 + 0x20e6a1c),0x15);
LAB_020e6b18:
            (*(code *)*puVar6)(piVar4,iVar3,uVar2,puVar6[1]);
          }
          FUN_020df144(param_1,iVar5,&uStack_28,&uStack_2c);
          uVar2 = FUN_020de158(param_1,iVar7,iVar5,uStack_28,uStack_2c,0,0,0);
          uVar9 = func_0x02123568(iVar1,0);
          FUN_020de384(param_1,uVar2,0,iVar3,5,uVar9);
          uVar9 = FUN_020d8024(param_2,0);
          FUN_020df204(param_1,uVar9,uVar2);
        }
      }
      iVar1 = func_0x0211de94(iVar1,0);
      if (0 < iVar1) {
        return uVar2;
      }
      FUN_020dd73c(param_1,param_2,1,4);
      FUN_020dd8f4(param_1,param_2,param_2,4);
      return uVar2;
    }
  }
  uStack_38 = func_0x0210e2d4(param_2,0);
  uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e6c20 + 0x20e68d8),&uStack_38);
  uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e6c24 + 0x20e68fc),uVar2,0);
  if (*(int *)(**(int **)(_UNK_020e6c28 + 0x20e6910) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar2,0);
  return 0;
}



// ===== FAT.Merge.Board$$CanUseBonusItem RVA 0x20d6c44 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e6c44(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
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
  
  pcVar11 = (char *)(_UNK_020e6d74 + 0x20e6c5c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e6d78 + 0x20e6c70));
    *pcVar11 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x75e8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x75e8,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar12 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 3;
    if (iVar3 == 0) {
      uVar8 = 2;
    }
    func_0x0245495c(iVar9,uVar12,&uStack_38,uVar8,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar3 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e6d7c + 0x20e6d18));
    if (iVar3 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar9 = func_0x02116ae0(0,0);
    if (iVar9 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar3 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e6d80 + 0x20e6cd8));
    if (iVar3 == 0) {
      return 0;
    }
    iVar9 = func_0x02116ae0(param_2,0);
    if (iVar9 == 0) {
      return 0;
    }
  }
  iVar9 = func_0x02116a8c(param_2,0);
  if (iVar9 != 0) {
    return 0;
  }
  pcVar11 = (char *)(_UNK_0211dd58 + 0x211dc5c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211dd5c + 0x211dc70),0);
    *pcVar11 = '\x01';
  }
  uVar4 = 0;
  iVar9 = func_0x0229f06c(0x1664,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x1664,0);
    if (iVar9 == 0) {
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
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar3,0);
    iVar10 = *(int *)(iVar9 + 8);
    uVar12 = *(undefined4 *)(iVar9 + 0xc);
    iVar3 = *(int *)(iVar9 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar3 == 0) {
      uVar8 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar10,uVar12,&uStack_30,uVar8);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(iVar3 + 0x10) != 0) {
    iVar9 = func_0x01489db8(*(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x28),0);
    uVar4 = 1;
    if (iVar9 == 0) {
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0148d518(*(undefined4 *)(iVar3 + 0x28),
                              **(undefined4 **)(_UNK_0211dd60 + 0x211dd04),0);
      if (iVar3 != 0) {
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x60);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x0229f06c(0xf6,0,0);
        if (iVar9 == 0) {
          iVar9 = func_0x0229f06c(0xf7,0);
          if (iVar9 == 0) {
            iVar9 = func_0x01cc0400(iVar3,0x98);
            if (iVar9 != 0) {
              return 0;
            }
            pcVar11 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
            if (*pcVar11 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
              func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
              *pcVar11 = '\x01';
            }
            iVar9 = func_0x0229f06c(0xf9,0);
            if (iVar9 == 0) {
              iVar9 = *(int *)(iVar3 + 8);
              if (iVar9 == 0) {
                func_0x01384bf0();
              }
              iVar9 = func_0x02451990(iVar9,0x98,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
              uVar4 = 1;
              if (iVar9 != 0) {
                iVar9 = func_0x01c24918(0);
                if (iVar9 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = *(int *)(iVar3 + 8);
                iVar9 = *(int *)(iVar9 + 0x68);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar3 = func_0x02451948(iVar3,0x98,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                if (0 < *(int *)(iVar3 + 0x28)) {
                  iVar10 = func_0x01c24918(0);
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                  }
                  iVar10 = *(int *)(iVar10 + 0x9c);
                  uVar12 = *(undefined4 *)(iVar3 + 0x28);
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                  }
                  iVar10 = func_0x01c77708(iVar10,uVar12,0);
                  if (iVar10 != 0) {
                    return 1;
                  }
                }
                iVar10 = func_0x01c24918(0);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                iVar10 = *(int *)(iVar10 + 0x48);
                if (iVar10 == 0) {
                  func_0x01384bf0();
                }
                uVar4 = 0;
                iVar10 = func_0x01dd2b98(iVar10,0);
                iVar5 = *(int *)(iVar3 + 0x18);
                if (iVar5 <= iVar10) {
                  iVar5 = *(int *)(iVar3 + 0x3c);
                }
                if (iVar5 <= iVar10) {
                  iVar10 = *(int *)(iVar3 + 0x40);
                  if (iVar10 == 0) {
                    func_0x01384bf0();
                    iVar5 = iRam0000000c;
                    iVar10 = *(int *)(iVar3 + 0x40);
                    if (iVar10 == 0) {
                      func_0x01384bf0();
                      iVar10 = 0;
                    }
                  }
                  else {
                    iVar5 = *(int *)(iVar10 + 0xc);
                  }
                  uVar4 = (uint)(iVar5 < 1);
                  piVar1 = (int *)func_0x0364c2b4(iVar10,**(undefined4 **)
                                                           (_UNK_01cc09fc + 0x1cc0758));
                  piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
                  piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
                  do {
                    if (piVar1 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar3 = *piVar1;
                    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == *piVar13) {
                          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                          goto LAB_01cc07d0;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
                    iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
                    if (iVar3 == 0) goto LAB_01cc0884;
                    if (piVar1 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar3 = *piVar1;
                    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar6 != 0) {
                      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar7[-1] == *piVar14) {
                          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                          goto LAB_01cc0848;
                        }
                        uVar6 = uVar6 - 1;
                        piVar7 = piVar7 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
                    uVar12 = (*(code *)*puVar2)(piVar1,puVar2[1]);
                    if (iVar9 == 0) {
                      func_0x01384bf0();
                    }
                    iVar3 = func_0x01e6c0b0(iVar9,uVar12,0);
                  } while (iVar3 == 0);
                  uVar4 = 1;
LAB_01cc0884:
                  if (piVar1 != (int *)0x0) {
                    iVar3 = *piVar1;
                    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
                    if (uVar6 != 0) {
                      piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                      do {
                        if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                          puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                          goto LAB_01cc08e4;
                        }
                        uVar6 = uVar6 - 1;
                        piVar13 = piVar13 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0);
LAB_01cc08e4:
                    (*(code *)*puVar2)(piVar1,puVar2[1]);
                  }
                }
              }
              return uVar4;
            }
            iVar9 = func_0x0229f13c(0xf9,0);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
          }
          else {
            iVar9 = func_0x0229f13c(0xf7,0);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
          }
        }
        else {
          iVar9 = func_0x0229f13c(0xf6,0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,0x98,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar9 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar9 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar3,0);
        func_0x01485238(&uStack_38,0x98,0);
        iVar10 = *(int *)(iVar9 + 8);
        uVar12 = *(undefined4 *)(iVar9 + 0xc);
        iVar3 = *(int *)(iVar9 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar8 = 3;
        if (iVar3 == 0) {
          uVar8 = 2;
        }
        func_0x0245495c(iVar10,uVar12,&uStack_38,uVar8,0,0);
        uVar4 = func_0x0245496c(&uStack_38,0,0);
        return uVar4;
      }
    }
  }
  return uVar4;
}



// ===== FAT.Merge.Board$$UseBonusItem RVA 0x20d6d84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e6d84(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_020e6ee4 + 34500000);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e6ee8 + 0x20e6db4));
    func_0x01384978(*(undefined4 *)(_UNK_020e6eec + 0x20e6dc0));
    func_0x01384978(*(undefined4 *)(_UNK_020e6ef0 + 0x20e6dcc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x75e7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75e7,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_020e6c44(param_1,param_2);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e6ef4 + 0x20e6e84),&stack0xffffffec);
    uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e6ef8 + 0x20e6ea8),uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e6efc + 0x20e6ebc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021463e8(iVar1,param_2,0);
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$CanUseTapBonusItem RVA 0x20d6f00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e6f00(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_020e7024 + 0x20e6f18);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7028 + 0x20e6f2c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ddd,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ddd,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e702c + 0x20e6fdc));
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e7030 + 0x20e6f98));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x02116a8c(param_2,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.Board$$UseTapBonusItem RVA 0x20d7034 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e7034(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_020e7194 + 0x20e7050);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7198 + 0x20e7064));
    func_0x01384978(*(undefined4 *)(_UNK_020e719c + 0x20e7070));
    func_0x01384978(*(undefined4 *)(_UNK_020e71a0 + 0x20e707c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9ddc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9ddc,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_020e6f00(param_1,param_2);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e71a4 + 0x20e7134),&stack0xffffffec);
    uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e71a8 + 0x20e7158),uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e71ac + 0x20e716c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02146998(iVar1,param_2,0);
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$CanUseJumpCDItem RVA 0x20d71b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e71b0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_020e72d4 + 0x20e71c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e72d8 + 0x20e71dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1510,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1510,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e72dc + 0x20e728c));
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e72e0 + 0x20e7248));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x02116a8c(param_2,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.Board$$UseJumpCD RVA 0x20d72e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e72e4(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_020e7444 + 0x20e7300);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7448 + 0x20e7314));
    func_0x01384978(*(undefined4 *)(_UNK_020e744c + 0x20e7320));
    func_0x01384978(*(undefined4 *)(_UNK_020e7450 + 0x20e732c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x150f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x150f,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_020e71b0(param_1,param_2);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e7454 + 0x20e73e4),&stack0xffffffec);
    uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e7458 + 0x20e7408),uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e745c + 0x20e741c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02147034(iVar1,param_2,0);
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$CanUseTokenMultiItem RVA 0x20d7460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e7460(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_020e7584 + 0x20e7478);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7588 + 0x20e748c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1516,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1516,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e758c + 0x20e753c));
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e7590 + 0x20e74f8));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x02116a8c(param_2,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.Board$$UseTokenMulti RVA 0x20d7594 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e7594(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_020e76f4 + 0x20e75b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e76f8 + 0x20e75c4));
    func_0x01384978(*(undefined4 *)(_UNK_020e76fc + 0x20e75d0));
    func_0x01384978(*(undefined4 *)(_UNK_020e7700 + 0x20e75dc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1515,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1515,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_020e7460(param_1,param_2);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e7704 + 0x20e7694),&stack0xffffffec);
    uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e7708 + 0x20e76b8),uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e770c + 0x20e76cc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02147268(iVar1,param_2,0);
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$CanUseOrderBoxItem RVA 0x20d7710 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e7710(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_020e7834 + 0x20e7728);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7838 + 0x20e773c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e63,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e63,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e783c + 0x20e77ec));
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
    iVar1 = func_0x02116ae0(0,0);
    if (iVar1 == 0) {
      return 0;
    }
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e7840 + 0x20e77a8));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x02116ae0(param_2,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = func_0x02116a8c(param_2,0);
  return uVar2 ^ 1;
}



// ===== FAT.Merge.Board$$UseOrderBox RVA 0x20d7844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e7844(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_020e79a4 + 0x20e7860);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e79a8 + 0x20e7874));
    func_0x01384978(*(undefined4 *)(_UNK_020e79ac + 0x20e7880));
    func_0x01384978(*(undefined4 *)(_UNK_020e79b0 + 0x20e788c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e62,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e62,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_020e7710(param_1,param_2);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210e2d4(param_2,0);
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e79b4 + 0x20e7944),&stack0xffffffec);
    uVar5 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e79b8 + 0x20e7968),uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e79bc + 0x20e797c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02146ca8(iVar1,param_2,0);
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$UnleashBubbleItem RVA 0x20d79c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e79c0(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_020e7c24 + 0x20e79dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7c28 + 0x20e79f0));
    func_0x01384978(*(undefined4 *)(_UNK_020e7c2c + 0x20e79fc));
    func_0x01384978(*(undefined4 *)(_UNK_020e7c30 + 0x20e7a08));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb30a,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e7c34 + 0x20e7aa4));
      if (iVar1 == 0) {
        return 0;
      }
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e7c40 + 0x20e7a78));
      if (iVar1 == 0) {
        return 0;
      }
    }
    func_0x0210cd7c(&uStack_30,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
      uVar5 = func_0x0210e2d4(0,0);
      func_0x01384bf0();
    }
    else {
      uVar5 = func_0x0210e2d4(param_2,0);
    }
    iVar1 = func_0x02116f08(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,param_2,6,0);
    FUN_020dd73c(param_1,param_2,1,4);
    FUN_020dd8f4(param_1,param_2,param_2,10);
    uVar2 = FUN_020db85c(param_1,uStack_30,uStack_2c);
    uStack_48 = uStack_2c;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uVar5 = FUN_020de158(param_1,uVar5,uVar2,uStack_30);
    uStack_48 = 10;
    uStack_44 = 0;
    FUN_020de384(param_1,uVar5,0,0);
    uVar2 = FUN_020d80e4(8);
    FUN_020df204(param_1,uVar2,uVar5);
    if (*(int *)(**(int **)(_UNK_020e7c38 + 0x20e7bdc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_020e7c3c + 0x20e7bf8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0xb30a,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_022871bc + 0x22870c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022871c0 + 0x22870dc),param_1,param_2,0);
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
  uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_022871c4 + 0x22871ac));
  return uVar5;
}



// ===== FAT.Merge.Board$$ConvertItem RVA 0x20d7c44 =====

void FUN_020e7c44(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x153b,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    FUN_020dd73c(param_1,param_2,1,4);
    uVar2 = FUN_020db85c(param_1,uStack_28,uStack_24);
    FUN_020de158(param_1,param_3,uVar2,uStack_28,uStack_24,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x153b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021cefac(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$KillBubbleItem RVA 0x20d7d1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e7d1c(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_020e7fac + 0x20e7d3c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e7fb0 + 0x20e7d54));
    func_0x01384978(*(undefined4 *)(_UNK_020e7fb4 + 0x20e7d60));
    func_0x01384978(*(undefined4 *)(_UNK_020e7fb8 + 0x20e7d6c));
    func_0x01384978(*(undefined4 *)(_UNK_020e7fbc + 0x20e7d78));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb30b,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    if (param_2 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02feb4f8(0,0,**(undefined4 **)(_UNK_020e7fd0 + 0x20e7f18));
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e7fc0 + 0x20e7df0));
    }
    if (iVar1 == 0) {
      uVar2 = 0;
      uStack_34 = func_0x0210e5f4(param_2,0);
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_020e7fc4 + 0x20e7f4c),&uStack_34);
      uVar4 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e7fc8 + 0x20e7f70),uVar4,0);
      if (*(int *)(**(int **)(_UNK_020e7fcc + 0x20e7f84) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar4,0);
    }
    else {
      func_0x0210cd7c(&uStack_30,param_2,0);
      uVar2 = func_0x02168f50(param_3,0);
      *param_4 = uVar2;
      uVar4 = 0xf;
      if (param_3 == 1) {
        uVar4 = 5;
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02116f08(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148ef8(iVar1,param_2,uVar4,0);
      FUN_020dd73c(param_1,param_2,1,4);
      FUN_020dd8f4(param_1,param_2,param_2,0xb);
      uVar4 = FUN_020db85c(param_1,uStack_30,uStack_2c);
      uVar2 = FUN_020de158(param_1,uVar2,uVar4,uStack_30,uStack_2c,0,0,1);
      FUN_020de384(param_1,uVar2,0,0,0xb,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb30b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229bcac(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$KillBubbleItemManualToTarget RVA 0x20d7fd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e7fd4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_020e81c8 + 0x20e7ff4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e81cc + 0x20e8008));
    func_0x01384978(*(undefined4 *)(_UNK_020e81d0 + 0x20e8014));
    func_0x01384978(*(undefined4 *)(_UNK_020e81d4 + 0x20e8020));
    func_0x01384978(*(undefined4 *)(_UNK_020e81d8 + 0x20e802c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0xb30d,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_020e81dc + 0x20e80a4));
      if (iVar1 == 0) {
        uVar4 = 0;
        uStack_24 = func_0x0210e5f4(param_2,0);
        uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e81e0 + 0x20e8168),&uStack_24);
        uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_020e81e4 + 0x20e818c),uVar2,0);
        if (*(int *)(**(int **)(_UNK_020e81e8 + 0x20e81a0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar2,0);
      }
      else {
        func_0x0210cd7c(&uStack_30,param_2,0);
        FUN_020dd73c(param_1,param_2,1,0x11);
        FUN_020dd8f4(param_1,param_2,param_2,0x11);
        uVar4 = FUN_020db85c(param_1,uStack_30,uStack_2c);
        uVar4 = FUN_020de158(param_1,param_3,uVar4,uStack_30,uStack_2c,0,0,1);
        FUN_020de384(param_1,uVar4,0,0,0x13,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb30d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021cefac(iVar1,param_1,param_2,param_3,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Board$$GetItemByCoord RVA 0x20d81ec =====

undefined4 FUN_020e81ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0xa32,0);
  if (iVar1 == 0) {
    uVar2 = FUN_020db85c(param_1,param_2,param_3);
    if (-1 < (int)uVar2) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar1 + 8);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa32,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02182b78(iVar1,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.Merge.Board$$PutItemInInventory RVA 0x20d82b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e82b4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_020e86f0 + 0x20e82d0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e86f4 + 0x20e82e4));
    func_0x01384978(*(undefined4 *)(_UNK_020e86f8 + 0x20e82f0));
    func_0x01384978(*(undefined4 *)(_UNK_020e86fc + 0x20e82fc));
    func_0x01384978(*(undefined4 *)(_UNK_020e8700 + 0x20e8308));
    func_0x01384978(*(undefined4 *)(_UNK_020e8704 + 0x20e8314));
    *pcVar7 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x75eb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75eb,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0210cd28(0,0);
    if (iVar1 != param_1) {
      func_0x01384bf0();
      goto LAB_020e83c4;
    }
    iVar1 = func_0x021697d8(0,0);
    if (iVar1 != 0) goto LAB_020e8414;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x0210cd28(param_2,0);
    if (iVar1 != param_1) {
LAB_020e83c4:
      uStack_28 = func_0x0210e5f4(param_2,0);
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e8708 + 0x20e83e0),&uStack_28);
      puVar6 = *(undefined4 **)(_UNK_020e870c + 0x20e8400);
      goto LAB_020e86ac;
    }
    iVar1 = func_0x021697d8(param_2,0);
    if (iVar1 != 0) {
LAB_020e8414:
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02141880(iVar1,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02115514(iVar3,param_2,&uStack_1c,&uStack_20,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if (iVar3 != 0) {
        func_0x0210cd7c(&uStack_28,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_28,param_2,0);
        uVar4 = FUN_020db85c(param_1,uStack_28,uStack_24);
        if (-1 < (int)uVar4) {
          iVar3 = *(int *)(param_1 + 0x80);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar3 + 0xc) <= uVar4) {
            func_0x01384bf4();
          }
          iVar3 = *(int *)(iVar3 + uVar4 * 4 + 0x10);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar3 + 8) == param_2) {
            iVar3 = *(int *)(param_1 + 0x80);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar3 + 0xc) <= uVar4) {
              func_0x01384bf4();
            }
            iVar3 = *(int *)(iVar3 + uVar4 * 4 + 0x10);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            FUN_020df7b8(param_1,1);
          }
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x02117440(param_2,0,0,0);
        iVar3 = *(int *)(param_1 + 0x34);
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar3 + 0x20),param_2,*(undefined4 *)(iVar3 + 0x14));
        }
        iVar3 = *(int *)(param_1 + 100);
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar3 + 0x20),param_2,*(undefined4 *)(iVar3 + 0x14));
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar1,param_2,2,0);
        uVar2 = uStack_20;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0210e2d4(param_2,0);
        func_0x019a617c(uVar2,uVar5,1,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x74);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01c8f1f8(iVar1,0);
        return 1;
      }
      uStack_28 = func_0x0210e5f4(param_2,0);
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e8718 + 0x20e8650),&uStack_28);
      puVar6 = *(undefined4 **)(_UNK_020e871c + 0x20e8670);
      goto LAB_020e86ac;
    }
  }
  uStack_28 = func_0x0210e5f4(param_2,0);
  uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020e8710 + 0x20e8690),&uStack_28);
  puVar6 = *(undefined4 **)(_UNK_020e8714 + 0x20e86b0);
LAB_020e86ac:
  uVar2 = func_0x0244f6a0(*puVar6,uVar2,0);
  if (*(int *)(**(int **)(_UNK_020e8720 + 0x20e86c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar2,0);
  return 0;
}



// ===== FAT.Merge.Board$$GetItemFromInventory RVA 0x20d8724 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020e8724(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_020e8a8c + 0x20e8744);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e8a90 + 0x20e8758));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a94 + 0x20e8764));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a98 + 0x20e8770));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a9c + 0x20e877c));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iStack_2c = 0;
  iVar2 = func_0x0229f06c(0x1496,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x98);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02141880(iVar2,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x021138b0(iVar4,param_2,param_3,0);
    uStack_30 = param_2;
    if (iVar4 == 0) {
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aa0 + 0x20e8a08),&uStack_30);
      puVar7 = *(undefined4 **)(_UNK_020e8aa4 + 0x20e8a20);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x90) / 2;
      iVar1 = *(int *)(param_1 + 0x8c) / 2;
      iStack_2c = iVar1;
      iStack_28 = iVar9;
      uVar5 = func_0x0210e2d4(iVar4,0);
      uVar6 = FUN_020defc4(param_1,iVar1,iVar9,uVar5,0,0,0,0);
      FUN_020df144(param_1,uVar6,&iStack_2c,&iStack_28);
      if (-1 < (int)uVar6) {
        iVar9 = *(int *)(param_1 + 0x80);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar9 + 0xc) <= uVar6) {
          func_0x01384bf4();
        }
        func_0x02117440(iVar4,param_1,*(undefined4 *)(iVar9 + uVar6 * 4 + 0x10),0);
        func_0x020e8ab4(param_1,iVar4,0xffffffff,uVar6,iStack_2c,iStack_28,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x02141880(iVar2,0);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x02114c08(iVar9,param_2,param_3,0);
        iVar9 = *(int *)(param_1 + 0x38);
        if (iVar9 != 0) {
          (**(code **)(iVar9 + 0xc))
                    (*(undefined4 *)(iVar9 + 0x20),iVar4,*(undefined4 *)(iVar9 + 0x14));
        }
        iVar9 = *(int *)(param_1 + 0x68);
        if (iVar9 != 0) {
          (**(code **)(iVar9 + 0xc))
                    (*(undefined4 *)(iVar9 + 0x20),iVar4,*(undefined4 *)(iVar9 + 0x14));
        }
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar2,iVar4,3,0);
        uVar5 = func_0x0210e2d4(iVar4,0);
        func_0x019a617c(param_3,uVar5,0,0);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01c8f2dc(iVar2,0);
        return 1;
      }
      uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aac + 0x20e8a30),&uStack_30);
      puVar7 = *(undefined4 **)(_UNK_020e8ab0 + 0x20e8a48);
    }
    uVar3 = 0;
    uVar5 = func_0x0244f6a0(*puVar7,uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e8aa8 + 0x20e8a64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar5,0);
  }
  else {
    iVar2 = func_0x0229f13c(0x1496,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217a5ac(iVar2,param_1,param_2,param_3,0);
  }
  return uVar3;
}



// ===== FAT.Merge.Board$$_SetItemPos RVA 0x20d8ab4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020e8ab4(int param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar6 = (char *)(_UNK_020e8e08 + 0x20e8adc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e8e0c + 0x20e8af8));
    func_0x01384978(*(undefined4 *)(_UNK_020e8e10 + 0x20e8b04));
    func_0x01384978(*(undefined4 *)(_UNK_020e8e14 + 0x20e8b10));
    func_0x01384978(*(undefined4 *)(_UNK_020e8e18 + 0x20e8b1c));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x295,0);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar3 + 0xc) <= param_4) {
      func_0x01384bf4();
    }
    uVar7 = *(undefined4 *)(iVar3 + param_4 * 4 + 0x10);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    bVar2 = false;
    func_0x021197fc(param_2,param_5,param_6,uVar7,0);
    bVar1 = false;
    if (-1 < (int)param_3) {
      iVar3 = *(int *)(param_1 + 0x80);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= param_3) {
        func_0x01384bf4();
      }
      iVar3 = *(int *)(iVar3 + param_3 * 4 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      bVar1 = *(int *)(iVar3 + 8) == param_2;
    }
    if (-1 < (int)param_4) {
      iVar3 = *(int *)(param_1 + 0x80);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= param_4) {
        func_0x01384bf4();
      }
      iVar3 = *(int *)(iVar3 + param_4 * 4 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      bVar2 = *(int *)(iVar3 + 8) == 0;
    }
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 0x80);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= param_3) {
        func_0x01384bf4();
      }
      iVar3 = *(int *)(iVar3 + param_3 * 4 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar3 + 8) = 0;
    }
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar3 + 0xc) <= param_4) {
      func_0x01384bf4();
    }
    iVar3 = *(int *)(iVar3 + param_4 * 4 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar3 + 8) = param_2;
    if (((bVar2) && (uVar7 = 0xffffffff, !bVar1)) || (uVar7 = 1, (bool)(bVar1 & ~bVar2))) {
      FUN_020df7b8(param_1,uVar7);
    }
    piVar5 = *(int **)(_UNK_020e8e1c + 0x20e8d2c);
    iVar3 = *piVar5;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar5;
    }
    iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x14);
    if (iVar4 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar5;
      }
      uVar7 = **(undefined4 **)(iVar3 + 0x5c);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_020e8e20 + 0x20e8d78));
      func_0x03ccb96c(iVar4,uVar7,**(undefined4 **)(_UNK_020e8e24 + 0x20e8d98),0);
      *(int *)(*(int *)(*piVar5 + 0x5c) + 0x14) = iVar4;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02feb864(param_2,iVar4,**(undefined4 **)(_UNK_020e8e28 + 0x20e8dcc));
    if (param_7 != 0) {
      iVar3 = *(int *)(param_1 + 0x18);
    }
    if (param_7 != 0 && iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020e8e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0xc))
                (*(undefined4 *)(iVar3 + 0x20),param_2,*(undefined4 *)(iVar3 + 0x14));
      return;
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x295,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02181d3c(iVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  }
  return;
}



// ===== FAT.Merge.Board$$CanMerge RVA 0x20d8e2c =====

uint FUN_020e8e2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x5ba1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ba1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x02174cb0(iVar1,param_1,param_2,param_3);
    return uVar2;
  }
  iVar1 = func_0x0229f06c(0x5ba2,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ba2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_2,0);
    func_0x01485278(&uStack_38,param_3,0);
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
  iVar1 = func_0x02164ab0(param_2,param_3);
  return (uint)(iVar1 == 0);
}



// ===== FAT.Merge.Board$$Merge RVA 0x20d8eac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020e8eac(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  
  pcVar10 = (char *)(_UNK_020e96f8 + 0x20e8ecc);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e96fc + 0x20e8ee0));
    func_0x01384978(*(undefined4 *)(_UNK_020e9700 + 0x20e8eec));
    func_0x01384978(*(undefined4 *)(_UNK_020e9704 + 0x20e8ef8));
    func_0x01384978(*(undefined4 *)(_UNK_020e9708 + 0x20e8f04));
    func_0x01384978(*(undefined4 *)(_UNK_020e970c + 0x20e8f10));
    func_0x01384978(*(undefined4 *)(_UNK_020e9710 + 0x20e8f1c));
    func_0x01384978(*(undefined4 *)(_UNK_020e9714 + 0x20e8f28));
    func_0x01384978(*(undefined4 *)(_UNK_020e9718 + 0x20e8f34));
    func_0x01384978(*(undefined4 *)(_UNK_020e971c + 0x20e8f40));
    func_0x01384978(*(undefined4 *)(_UNK_020e9720 + 0x20e8f4c));
    func_0x01384978(*(undefined4 *)(_UNK_020e9724 + 0x20e8f58));
    func_0x01384978(*(undefined4 *)(_UNK_020e9728 + 0x20e8f64));
    func_0x01384978(*(undefined4 *)(_UNK_020e972c + 0x20e8f70));
    func_0x01384978(*(undefined4 *)(_UNK_020e9730 + 0x20e8f7c));
    func_0x01384978(*(undefined4 *)(_UNK_020e9734 + 0x20e8f88));
    func_0x01384978(*(undefined4 *)(_UNK_020e9738 + 0x20e8f94));
    func_0x01384978(*(undefined4 *)(_UNK_020e973c + 0x20e8fa0));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_2c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x9ea2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_020e8e2c(param_1,param_2,param_3);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (iVar1 == 0) {
      uStack_48 = func_0x0210e5f4(param_2,0);
      puVar11 = *(undefined4 **)(_UNK_020e9740 + 0x20e9204);
      uVar2 = func_0x01384abc(*puVar11,&uStack_48);
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uStack_3c = func_0x0210e5f4(param_3,0);
      uVar5 = func_0x01384abc(*puVar11,&uStack_3c);
      puVar11 = *(undefined4 **)(_UNK_020e9744 + 0x20e9254);
    }
    else {
      puVar11 = *(undefined4 **)(_UNK_020e9748 + 0x20e9044);
      uVar2 = func_0x02feb4f8(param_2,0,*puVar11);
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02feb4f8(param_3,0,*puVar11);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0212f278(iVar1,uVar2,0);
      if (0 < iVar1) {
        if (param_3 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_48,param_3,0);
        FUN_020dd73c(param_1,param_2,0,4);
        FUN_020dd73c(param_1,param_3,0,4);
        uVar2 = FUN_020db85c(param_1,uStack_48,uStack_44);
        iVar1 = FUN_020de158(param_1,iVar1,uVar2,uStack_48,uStack_44,0,0,0);
        FUN_020dd8f4(param_1,param_2,iVar1,4);
        FUN_020dd8f4(param_1,param_3,iVar1,4);
        FUN_020de384(param_1,iVar1,0,0,1,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02118c0c(iVar1,param_2,param_3,0);
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar3;
        piVar13 = *(int **)(_UNK_020e974c + 0x20e91ac);
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        iVar7 = *piVar13;
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar7) {
              puVar11 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0x230);
              goto LAB_020e9314;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar3,iVar7,0x2e);
LAB_020e9314:
        (*(code *)*puVar11)(piVar3,iVar1,puVar11[1]);
        iVar4 = *(int *)(param_1 + 0xa8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar7 = *(int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        if (0 < iVar7) {
          func_0x0145b1dc(*(undefined4 *)(iVar4 + 8),0,iVar7,0);
        }
        iVar4 = FUN_020d83c8(param_1);
        uVar2 = *(undefined4 *)(param_1 + 0xa8);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02142010(iVar4,uVar2,0);
        piVar3 = (int *)func_0x021566f4(0);
        uVar2 = *(undefined4 *)(param_1 + 0xa8);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = *piVar3;
        iVar7 = *piVar13;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar13[-1] == iVar7) {
              puVar11 = (undefined4 *)(iVar4 + *piVar13 * 8 + 0x218);
              goto LAB_020e9400;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 2;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined4 *)func_0x014002dc(piVar3,iVar7,0x2b);
LAB_020e9400:
        (*(code *)*puVar11)(piVar3,uVar2,puVar11[1]);
        piVar3 = *(int **)(_UNK_020e9750 + 0x20e9420);
        iVar7 = *(int *)(param_1 + 0xa8);
        iVar4 = *piVar3;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar3;
        }
        iVar12 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
        if (iVar12 == 0) {
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x01384ab4();
            iVar4 = *piVar3;
          }
          uVar2 = **(undefined4 **)(iVar4 + 0x5c);
          iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_020e9754 + 0x20e946c));
          func_0x03c751dc(iVar12,uVar2,**(undefined4 **)(_UNK_020e9758 + 0x20e948c),0);
          *(int *)(*(int *)(*piVar3 + 0x5c) + 0x10) = iVar12;
        }
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03290edc(iVar7,iVar12,**(undefined4 **)(_UNK_020e975c + 0x20e94bc));
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_020e9760 + 0x20e94d0));
        func_0x021409cc(iVar4,0);
        uVar2 = FUN_020d83c8(param_1);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)(iVar4 + 8) = uVar2;
        *(undefined4 *)(iVar4 + 0xc) = uVar5;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar7 = func_0x02116990(param_2,0);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        *(int *)(iVar4 + 0x1c) = param_3;
        *(int *)(iVar4 + 0x18) = param_2;
        iVar12 = *(int *)(param_1 + 0xa8);
        uVar2 = *(undefined4 *)(iVar7 + 0x10);
        *(int *)(iVar4 + 0x14) = iVar1;
        *(undefined4 *)(iVar4 + 0x10) = uVar2;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_38,iVar12,**(undefined4 **)(_UNK_020e9764 + 0x20e956c));
        puVar11 = *(undefined4 **)(_UNK_020e9768 + 0x20e9580);
        piVar3 = *(int **)(_UNK_020e976c + 0x20e9588);
        do {
          iVar7 = func_0x03f5f428(&uStack_38,*puVar11);
          piVar13 = piStack_2c;
          if (iVar7 == 0) {
            func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_020e9770 + 0x20e961c));
            FUN_020e1bbc(param_1,uStack_48,uStack_44,0);
            iVar4 = *(int *)(param_1 + 0xc);
            if (iVar4 == 0) {
              return iVar1;
            }
            (**(code **)(iVar4 + 0xc))
                      (*(undefined4 *)(iVar4 + 0x20),param_2,param_3,iVar1,
                       *(undefined4 *)(iVar4 + 0x14));
            return iVar1;
          }
          if (piStack_2c == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = *piVar13;
          uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar9[-1] == *piVar3) {
                puVar6 = (undefined4 *)(iVar7 + *piVar9 * 8 + 200);
                goto LAB_020e95f8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 2;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined4 *)func_0x014002dc(piVar13,*piVar3,1);
LAB_020e95f8:
          (*(code *)*puVar6)(piVar13,iVar4,puVar6[1]);
        } while( true );
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = func_0x0210e2d4(param_2,0);
      puVar11 = *(undefined4 **)(_UNK_020e977c + 0x20e927c);
      uVar2 = func_0x01384abc(*puVar11,&uStack_48);
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      uStack_3c = func_0x0210e2d4(param_3,0);
      uVar5 = func_0x01384abc(*puVar11,&uStack_3c);
      puVar11 = *(undefined4 **)(_UNK_020e9780 + 0x20e92cc);
    }
    iVar1 = 0;
    uVar2 = func_0x0244f690(*puVar11,uVar2,uVar5,0);
    if (*(int *)(**(int **)(_UNK_020e9784 + 0x20e92e8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x9ea2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02288dd8(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$GetMoveState RVA 0x20d9788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e9788(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_020e9a68 + 0x20e97a8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e9a6c + 0x20e97c0));
    func_0x01384978(*(undefined4 *)(_UNK_020e9a70 + 0x20e97cc));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9eb2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9eb2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02289260(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&iStack_30,param_2,0);
  iVar1 = iStack_2c;
  iVar2 = iStack_30;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x02116a8c(0,0);
    if (iVar4 != 0) {
      return 4;
    }
    func_0x01384bf0();
    iVar4 = func_0x02116ae0(0,0);
    if (iVar4 == 0) {
      return 4;
    }
    func_0x01384bf0();
    iVar4 = func_0x02116c00(0,0);
    if (iVar4 == 0) {
      return 3;
    }
    func_0x01384bf0();
  }
  else {
    iVar4 = func_0x02116a8c(param_2,0);
    if (iVar4 != 0) {
      return 4;
    }
    iVar4 = func_0x02116ae0(param_2,0);
    if (iVar4 == 0) {
      return 4;
    }
    iVar4 = func_0x02116c00(param_2,0);
    if (iVar4 == 0) {
      return 3;
    }
  }
  func_0x0210cd7c(&iStack_30,param_2,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&iStack_30,param_2,0);
  iVar4 = FUN_020dbcf8(param_1,iStack_30,iStack_2c);
  uVar3 = 2;
  if (iVar4 != 1) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0210e2d4(param_2,0);
    iVar4 = func_0x02165090(iVar4,uVar5,0);
    if (iVar4 != 0) {
      if (iVar2 != param_3 || iVar1 != param_4) {
        uVar3 = FUN_020db85c(param_1,param_3,param_4);
        FUN_020db85c(param_1,iVar2,iVar1);
        if (-1 < (int)uVar3) {
          iVar2 = *(int *)(param_1 + 0x9c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar2 + 0x10)) {
            iVar2 = *(int *)(param_1 + 0x9c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x02450564(iVar2,uVar3,**(undefined4 **)(_UNK_020e9a74 + 0x20e99e4));
            if (iVar2 != 0) {
              return 2;
            }
          }
          iVar2 = *(int *)(param_1 + 0x80);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar2 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          iVar2 = *(int *)(iVar2 + uVar3 * 4 + 0x10);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == param_2) {
            return 4;
          }
          if (iVar2 != 0) {
            uVar3 = func_0x02116c00(iVar2,0);
            return uVar3 ^ 1;
          }
          return 0;
        }
      }
      uVar3 = 4;
    }
  }
  return uVar3;
}



// ===== FAT.Merge.Board$$MoveItem RVA 0x20d9a78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020e9a78(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_020e9db4 + 0x20e9a98);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e9db8 + 0x20e9ab0));
    func_0x01384978(*(undefined4 *)(_UNK_020e9dbc + 0x20e9abc));
    func_0x01384978(*(undefined4 *)(_UNK_020e9dc0 + 0x20e9ac8));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9eb1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x9eb1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02289368(iVar2,param_1,param_2,param_3,param_4,param_5,0);
    return uVar3;
  }
  iVar2 = FUN_020e9788(param_1,param_2,param_3,param_4);
  *param_5 = iVar2;
  if (iVar2 != 0) {
    return 0;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&iStack_30,param_2,0);
  iVar1 = iStack_2c;
  iVar2 = iStack_30;
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x02116a8c(0,0);
    if (iVar4 != 0) goto LAB_020e9d9c;
    func_0x01384bf0();
  }
  else {
    iVar4 = func_0x02116a8c(param_2,0);
    if (iVar4 != 0) goto LAB_020e9d9c;
  }
  iVar4 = func_0x02116ae0(param_2,0);
  if ((iVar4 == 0) || (iVar2 == param_3 && iVar1 == param_4)) goto LAB_020e9d9c;
  uVar3 = FUN_020db85c(param_1,param_3,param_4);
  uVar5 = FUN_020db85c(param_1,iVar2,iVar1);
  if ((int)uVar3 < 0) {
    if (*(int *)(**(int **)(_UNK_020e9dcc + 0x20e9d2c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    puVar7 = *(undefined4 **)(_UNK_020e9dd0 + 0x20e9d48);
LAB_020e9d90:
    func_0x028c2874(*puVar7,0);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x80);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar3) {
      func_0x01384bf4();
    }
    iVar4 = *(int *)(iVar4 + uVar3 * 4 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 == param_2) goto LAB_020e9d9c;
    if (iVar4 != 0) {
      iVar6 = func_0x02116ae0(iVar4,0);
      if (iVar6 == 0) {
        if (*(int *)(**(int **)(_UNK_020e9dc4 + 0x20e9d78) + 0x74) == 0) {
          func_0x01384ab4();
        }
        puVar7 = *(undefined4 **)(_UNK_020e9dc8 + 0x20e9d94);
        goto LAB_020e9d90;
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_30,param_2,0);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&iStack_30,param_2,0);
      iVar6 = FUN_020e9788(param_1,iVar4,iStack_30,iStack_2c);
      if (iVar6 != 0) {
        return 0;
      }
      FUN_020e8ab4(param_1,iVar4,uVar3,uVar5,iVar2,iVar1,1);
    }
    FUN_020e8ab4(param_1,param_2,uVar5,uVar3,param_3,param_4,1);
  }
LAB_020e9d9c:
  return (uint)(*param_5 == 0);
}



// ===== FAT.Merge.Board$$SpawnNextRewardItem RVA 0x20d9dd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020e9dd4(int param_1)

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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int aiStack_1c [3];
  
  iVar1 = func_0x0229f06c(0xb30e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb30e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_02180ccc + 0x2180bec);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02180cd0 + 0x2180c00),param_1,0);
      *pcVar5 = '\x01';
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02180cd4 + 0x2180cbc));
    return iVar1;
  }
  pcVar5 = (char *)(_UNK_020ea0ec + 0x20e9e4c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ea0f0 + 0x20e9e60));
    func_0x01384978(*(undefined4 *)(_UNK_020ea0f4 + 0x20e9e6c));
    func_0x01384978(*(undefined4 *)(_UNK_020ea0f8 + 0x20e9e78));
    func_0x01384978(*(undefined4 *)(_UNK_020ea0fc + 0x20e9e84));
    *pcVar5 = '\x01';
  }
  aiStack_1c[0] = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x14a7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x020ea114(param_1,0,aiStack_1c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x02145464(iVar1,0,0);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uVar2 = FUN_020defc4(param_1,3,3,uVar6);
      if (((int)uVar2 < 0) ||
         (iVar4 = FUN_020df144(param_1,uVar2,&uStack_20,&uStack_24), iVar4 == 0)) {
        if (*(int *)(**(int **)(_UNK_020ea10c + 0x20ea05c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar6 = **(undefined4 **)(_UNK_020ea110 + 0x20ea07c);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02145620(iVar1,0,0);
        if (iVar1 != 0) {
          iVar4 = *(int *)(param_1 + 0x80);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar4 + 0xc) <= uVar2) {
            func_0x01384bf4();
          }
          func_0x02117440(iVar1,param_1,*(undefined4 *)(iVar4 + uVar2 * 4 + 0x10),0);
          uStack_40 = uStack_20;
          uStack_3c = uStack_24;
          uStack_38 = 0;
          FUN_020e8ab4(param_1,iVar1,0xffffffff,uVar2);
          iVar4 = *(int *)(param_1 + 0x68);
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 0xc))
                      (*(undefined4 *)(iVar4 + 0x20),iVar1,*(undefined4 *)(iVar4 + 0x14));
          }
          iVar4 = *(int *)(param_1 + 0x98);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ef8(iVar4,iVar1,8,0);
          func_0x020ea718(param_1,iVar1);
          return iVar1;
        }
        uStack_28 = 0;
        uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_020ea100 + 0x20ea0a0),&uStack_28);
        uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_020ea104 + 0x20ea0c0),uVar6,0);
        if (*(int *)(**(int **)(_UNK_020ea108 + 0x20ea0d4) + 0x74) == 0) {
          func_0x01384ab4();
        }
      }
      func_0x028c2874(uVar6,0);
      aiStack_1c[0] = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    aiStack_1c[0] = func_0x02182a58(iVar1,param_1,0,0);
  }
  return aiStack_1c[0];
}



// ===== FAT.Merge.Board$$SpawnRewardItemByIdx RVA 0x20d9e30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020e9e30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_020ea0ec + 0x20e9e4c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ea0f0 + 0x20e9e60));
    func_0x01384978(*(undefined4 *)(_UNK_020ea0f4 + 0x20e9e6c));
    func_0x01384978(*(undefined4 *)(_UNK_020ea0f8 + 0x20e9e78));
    func_0x01384978(*(undefined4 *)(_UNK_020ea0fc + 0x20e9e84));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x14a7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x020ea114(param_1,param_2,&iStack_1c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x02145464(iVar1,param_2,0);
      uVar3 = FUN_020defc4(param_1,3,3,uVar2,0,0,0,0);
      if (((int)uVar3 < 0) ||
         (iVar4 = FUN_020df144(param_1,uVar3,&uStack_20,&uStack_24), iVar4 == 0)) {
        if (*(int *)(**(int **)(_UNK_020ea10c + 0x20ea05c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar2 = **(undefined4 **)(_UNK_020ea110 + 0x20ea07c);
      }
      else {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02145620(iVar1,param_2,0);
        if (iVar1 != 0) {
          iVar4 = *(int *)(param_1 + 0x80);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar4 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          func_0x02117440(iVar1,param_1,*(undefined4 *)(iVar4 + uVar3 * 4 + 0x10),0);
          FUN_020e8ab4(param_1,iVar1,0xffffffff,uVar3,uStack_20,uStack_24,0);
          iVar4 = *(int *)(param_1 + 0x68);
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 0xc))
                      (*(undefined4 *)(iVar4 + 0x20),iVar1,*(undefined4 *)(iVar4 + 0x14));
          }
          iVar4 = *(int *)(param_1 + 0x98);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x02148ef8(iVar4,iVar1,8,0);
          func_0x020ea718(param_1,iVar1);
          return iVar1;
        }
        uStack_28 = param_2;
        uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_020ea100 + 0x20ea0a0),&uStack_28);
        uVar2 = func_0x0244f6a0(**(undefined4 **)(_UNK_020ea104 + 0x20ea0c0),uVar2,0);
        if (*(int *)(**(int **)(_UNK_020ea108 + 0x20ea0d4) + 0x74) == 0) {
          func_0x01384ab4();
        }
      }
      func_0x028c2874(uVar2,0);
      iStack_1c = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14a7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_1c = func_0x02182a58(iVar1,param_1,param_2,0);
  }
  return iStack_1c;
}



// ===== FAT.Merge.Board$$_TryConsumeRewardItemImmediately RVA 0x20da114 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020ea114(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(_UNK_020ea6e4 + 0x20ea134);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ea6e8 + 0x20ea148));
    func_0x01384978(*(undefined4 *)(_UNK_020ea6ec + 0x20ea154));
    func_0x01384978(*(undefined4 *)(_UNK_020ea6f0 + 0x20ea160));
    func_0x01384978(*(undefined4 *)(_UNK_020ea6f4 + 0x20ea16c));
    func_0x01384978(*(undefined4 *)(_UNK_020ea6f8 + 0x20ea178));
    *pcVar13 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar3 = func_0x0229f06c(0x14a8,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x14a8,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021ce7a0(iVar3,param_1,param_2,param_3,0);
    return uVar4;
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02145464(iVar3,param_2,0);
  if (0 < iVar5) {
    piVar6 = (int *)func_0x021566f4(0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar6;
    uVar11 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_020ea6fc + 0x20ea23c)) {
          puVar8 = (undefined4 *)(iVar7 + *piVar12 * 8 + 0x110);
          goto LAB_020ea284;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_020ea6fc + 0x20ea23c),10);
LAB_020ea284:
    iVar9 = (*(code *)*puVar8)(piVar6,iVar5,puVar8[1]);
    iVar7 = 0;
    if (iVar9 != 0) {
      iVar7 = *(int *)(iVar9 + 0x3c);
    }
    if (iVar9 != 0 && iVar7 != 0) {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02141928(iVar3,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0214ef48(iVar5,0);
      if (iVar5 == 0) {
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x02145620(iVar3,param_2,0);
        *param_3 = iVar5;
        if (iVar5 != 0) {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02141928(iVar3,0);
          iVar5 = *param_3;
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar4 = func_0x0210e2d4(iVar5,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02146eac(iVar3,uVar4,0,0);
          if (iVar3 != 0) {
            if (*(int *)(**(int **)(_UNK_020ea700 + 0x20ea464) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_020ea704 + 0x20ea480));
            iVar5 = *param_3;
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x0349eb38(iVar3,iVar5,**(undefined4 **)(_UNK_020ea708 + 0x20ea4a8));
          }
        }
        piVar6 = (int *)func_0x021566f4(0);
        iVar3 = *param_3;
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar5 = *piVar6;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_020ea70c + 0x20ea4dc)) {
              puVar8 = (undefined4 *)(iVar5 + *piVar12 * 8 + 0x238);
              goto LAB_020ea614;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_020ea70c + 0x20ea4dc),0x2f);
LAB_020ea614:
        (*(code *)*puVar8)(piVar6,iVar3,0x11,puVar8[1]);
        iVar3 = *(int *)(param_1 + 0x98);
        iVar5 = *param_3;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 8;
LAB_020ea64c:
        func_0x02148ef8(iVar3,iVar5,uVar4,0);
        return 1;
      }
    }
    else {
      iVar7 = func_0x02168818(iVar5,0);
      if (iVar7 != 0) {
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0xac);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar5 + 0x10) != '\0') {
          *param_3 = 0;
          return 1;
        }
        if (*(int *)(**(int **)(_UNK_020ea710 + 0x20ea524) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0205048c(6,&uStack_30,0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x02145620(iVar3,param_2,0);
        *param_3 = iVar3;
        iVar5 = *(int *)(param_1 + 0x98);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar5,iVar3,8,0);
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *param_3;
        iVar3 = *(int *)(iVar3 + 0xac);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar10 = func_0x0210e2d4(iVar5,0);
        uVar2 = uStack_28;
        uVar1 = uStack_2c;
        uVar4 = uStack_30;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x01ba14cc(iVar3,uVar10,uVar4,uVar1,uVar2,1,0);
        return 1;
      }
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar7 = func_0x02139cf4(iVar3,0);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 8) == 1)) {
        piVar6 = (int *)func_0x021566f4(0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar6;
        uVar11 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar12[-1] == **(int **)(_UNK_020ea714 + 0x20ea354)) {
              puVar8 = (undefined4 *)(iVar7 + *piVar12 * 8 + 0x108);
              goto LAB_020ea668;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_020ea714 + 0x20ea354),9);
LAB_020ea668:
        iVar5 = (*(code *)*puVar8)(piVar6,iVar5,puVar8[1]);
        if ((iVar5 != 0) && (1 < *(int *)(iVar5 + 0x1c))) {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x02145620(iVar3,param_2,0);
          *param_3 = iVar5;
          iVar3 = *(int *)(param_1 + 0x98);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0xc;
          goto LAB_020ea64c;
        }
      }
    }
  }
  *param_3 = 0;
  return 0;
}



// ===== FAT.Merge.Board$$_TryUseRewardItemImmediately RVA 0x20da718 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020ea718(undefined4 param_1,int param_2)

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
  code *pcVar10;
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
  
  pcVar7 = (char *)(_UNK_020ea9e0 + 0x20ea730);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ea9e4 + 0x20ea744));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x150d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x150d,0);
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
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0210e250(0,0x12,0,0);
    if (iVar1 != 0) goto LAB_020ea7dc;
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x0210e250(param_2,0x12,0,0);
    if (iVar1 != 0) {
LAB_020ea7dc:
      iVar1 = FUN_020d83c8(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0214197c(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02139a28(iVar1,0);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_020e72e4(param_1,param_2);
      if (iVar1 == 0) {
        return 1;
      }
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_020ea9ec + 0x20ea868)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x238);
            goto LAB_020ea99c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_020ea9ec + 0x20ea868),0x2f);
LAB_020ea99c:
      pcVar10 = (code *)*puVar3;
      uVar6 = puVar3[1];
      uVar9 = 0x12;
      goto LAB_020ea9d4;
    }
  }
  iVar1 = func_0x0210e250(param_2,0x19,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_020d83c8(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x021419d0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0215e684(iVar1,0);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_020e7594(param_1,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  piVar2 = (int *)func_0x021566f4(0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar2;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_020ea9e8 + 0x20ea954)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0x238);
        goto LAB_020ea9c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_020ea9e8 + 0x20ea954),0x2f);
LAB_020ea9c0:
  pcVar10 = (code *)*puVar3;
  uVar6 = puVar3[1];
  uVar9 = 0x19;
LAB_020ea9d4:
  (*pcVar10)(piVar2,param_2,uVar9,uVar6);
  return 1;
}



// ===== FAT.Merge.Board$$TriggerItemComponentChange RVA 0x20da9f0 =====

void FUN_020ea9f0(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x27e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x27e,0);
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
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020eaa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$SellItem RVA 0x20daa6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020eaa6c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  pcVar8 = (char *)(_UNK_020eae9c + 0x20eaa88);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020eaea0 + 0x20eaa9c));
    func_0x01384978(*(undefined4 *)(_UNK_020eaea4 + 0x20eaaa8));
    func_0x01384978(*(undefined4 *)(_UNK_020eaea8 + 0x20eaab4));
    func_0x01384978(*(undefined4 *)(_UNK_020eaeac + 0x20eaac0));
    func_0x01384978(*(undefined4 *)(_UNK_020eaeb0 + 0x20eaacc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb30f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb30f,0);
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
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_28,param_2,0);
  uVar2 = uStack_28;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0210cd7c(&uStack_28,param_2,0);
  uVar2 = FUN_020db85c(param_1,uVar2,iStack_24);
  if (-1 < (int)uVar2) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 8) == param_2) {
      iVar1 = *(int *)(param_1 + 0x98);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x0210e2d4(param_2,0);
      func_0x02167570(&uStack_28,uVar9,0);
      if (-1 < iStack_24) {
        iVar7 = *(int *)(param_1 + 0x80);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar2) {
          func_0x01384bf4();
        }
        iVar7 = *(int *)(iVar7 + uVar2 * 4 + 0x10);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar7 + 8) = 0;
        FUN_020df7b8(param_1,1);
        FUN_020dd8f4(param_1,param_2,param_2,1);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x02117440(param_2,0,0,0);
        iVar7 = *(int *)(param_1 + 100);
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 0xc))
                    (*(undefined4 *)(iVar7 + 0x20),param_2,*(undefined4 *)(iVar7 + 0x14));
        }
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar1,param_2,2,0);
        piVar3 = (int *)func_0x021566f4(0);
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar7 = *piVar3;
        uVar2 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar2 != 0) {
          piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(_UNK_020eaebc + 0x20ead78)) {
              puVar6 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0x158);
              goto LAB_020eae38;
            }
            uVar2 = uVar2 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar2 != 0);
        }
        puVar6 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020eaebc + 0x20ead78),0x13);
LAB_020eae38:
        uVar9 = (*(code *)*puVar6)(piVar3,uStack_28,iStack_24,puVar6[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x021447e0(iVar1,param_2,0);
        iVar1 = *(int *)(param_1 + 0x24);
        if (iVar1 == 0) {
          return 1;
        }
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,uVar9,*(undefined4 *)(iVar1 + 0x14));
        return 1;
      }
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_28 = func_0x0210e5f4(param_2,0);
      puVar6 = *(undefined4 **)(_UNK_020eaec0 + 0x20eaddc);
      uVar9 = func_0x01384abc(*puVar6,&uStack_28);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_2c = func_0x0210e2d4(param_2,0);
      uVar5 = func_0x01384abc(*puVar6,&uStack_2c);
      puVar6 = *(undefined4 **)(_UNK_020eaec4 + 0x20eae2c);
      goto LAB_020eac10;
    }
  }
  puVar6 = *(undefined4 **)(_UNK_020eaeb4 + 0x20eabc8);
  uStack_28 = uVar2;
  uVar9 = func_0x01384abc(*puVar6,&uStack_28);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = func_0x0210e5f4(param_2,0);
  uVar5 = func_0x01384abc(*puVar6,&uStack_2c);
  puVar6 = *(undefined4 **)(_UNK_020eaeb8 + 0x20eac14);
LAB_020eac10:
  uVar9 = func_0x0244f690(*puVar6,uVar9,uVar5,0);
  if (*(int *)(**(int **)(_UNK_020eaec8 + 0x20eac30) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2874(uVar9,0);
  return 0;
}



// ===== FAT.Merge.Board$$TriggerUseTimeSkipper RVA 0x20daecc =====

void FUN_020eaecc(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9e3a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e3a,0);
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
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020eaf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$UnfrozenItemByGem RVA 0x20daf48 =====

/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020eaf48(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int unaff_r4;
  int unaff_r5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 unaff_r6;
  undefined4 uVar11;
  int unaff_r7;
  undefined4 unaff_r8;
  int *unaff_r9;
  int *piVar12;
  undefined4 unaff_r10;
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
  
  pcVar6 = (char *)(_UNK_020eb230 + 0x20eaf64);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020eb234 + 0x20eaf78));
    func_0x01384978(*(undefined4 *)(_UNK_020eb238 + 0x20eaf84));
    func_0x01384978(*(undefined4 *)(_UNK_020eb23c + 0x20eaf90));
    func_0x01384978(*(undefined4 *)(_UNK_020eb240 + 0x20eaf9c));
    func_0x01384978(*(undefined4 *)(_UNK_020eb244 + 0x20eafa8));
    func_0x01384978(*(undefined4 *)(_UNK_020eb248 + 0x20eafb4));
    func_0x01384978(*(undefined4 *)(_UNK_020eb24c + 0x20eafc0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb310,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb310,0);
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
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar8,uVar11,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020eb250 + 0x20eb020));
  func_0x0210b2d0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_1;
  *(int *)(iVar1 + 0xc) = param_2;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar8 = func_0x0210cd28(param_2,0);
  if (iVar8 == param_1) {
    iVar8 = func_0x02168d48(*(undefined4 *)(iVar1 + 0xc),0);
    if (0 < iVar8) {
      piVar10 = (int *)func_0x021566f4(0);
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar7 = *piVar10;
      piVar12 = *(int **)(_UNK_020eb25c + 0x20eb0dc);
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      iVar9 = *piVar12;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar9) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 400);
            goto LAB_020eb124;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar10,iVar9,0x1a);
LAB_020eb124:
      iVar7 = (*(code *)*puVar2)(piVar10,iVar8,puVar2[1]);
      if (iVar7 != 0) {
        piVar10 = (int *)func_0x021566f4(0);
        piVar4 = *(int **)(_UNK_020eb260 + 0x20eb158);
        iVar7 = *piVar4;
        if (*(int *)(iVar7 + 0x74) == 0) {
          func_0x01384ab4();
          iVar7 = *piVar4;
        }
        uVar5 = *(undefined4 *)(*(int *)(iVar7 + 0x5c) + 0x28c);
        uVar11 = func_0x01384be4(**(undefined4 **)(_UNK_020eb264 + 0x20eb17c));
        func_0x024500b4(uVar11,iVar1,**(undefined4 **)(_UNK_020eb268 + 0x20eb19c),0);
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar10;
        iVar7 = *piVar12;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar7) {
              puVar2 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0x198);
              goto LAB_020eb200;
            }
            uVar3 = uVar3 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar10,iVar7,0x1b);
LAB_020eb200:
        uStack_24 = puVar2[1];
        uStack_28 = 0;
        (*(code *)*puVar2)(piVar10,iVar8,uVar5,uVar11);
      }
    }
    return;
  }
  if (*(int *)(**(int **)(_UNK_020eb254 + 0x20eb070) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = **(int **)(_UNK_020eb258 + 0x20eb090);
  pcVar6 = (char *)(_UNK_028c2938 + 0x28c2888);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c293c + 0x28c289c),0);
    *pcVar6 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x199,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x199,0);
    if (iVar8 == 0) {
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
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar1,0);
    iVar7 = *(int *)(iVar8 + 8);
    uVar11 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar7,uVar11,&uStack_30,uVar5);
    return;
  }
  piVar10 = *(int **)(_UNK_028c2940 + 0x28c28f4);
  iVar8 = *piVar10;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x01384ab4();
    iVar8 = *piVar10;
  }
  if (3 < *(int *)(*(int *)(iVar8 + 0x5c) + 4)) {
    return;
  }
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar6 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar6 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x14,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x14,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    goto LAB_02174038;
  }
  piVar10 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar8 = *piVar10;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x01384ab4();
    iVar8 = *piVar10;
  }
  if (**(int **)(iVar8 + 0x5c) < 1) {
LAB_028c2848:
    iVar7 = iVar1;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x01384ab4();
    }
  }
  else {
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar8 = *piVar10;
    }
    iVar7 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x01384ab4();
      iVar8 = *piVar10;
    }
    iVar9 = **(int **)(iVar8 + 0x5c);
    if (iVar7 <= iVar9) goto LAB_028c2848;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x01384ab4();
      iVar9 = **(int **)(*piVar10 + 0x5c);
    }
    iVar8 = *(int *)(iVar1 + 8);
    if (iVar8 < 1) {
      return;
    }
    unaff_r6 = 0;
    unaff_r5 = iVar9;
    if (iVar8 < iVar9) {
      unaff_r5 = iVar8;
    }
    unaff_r7 = func_0x04673af4(iVar1,0,unaff_r5,0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    unaff_lr = 0x28c2824;
    iVar7 = unaff_r7;
    unaff_r4 = iVar1;
    unaff_r8 = 3;
    unaff_r9 = piVar10;
    register0x00000054 = (BADSPACEBASE *)&stack0xffffffe0;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r6;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r4;
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
  iVar8 = func_0x0229f13c(0x15,0);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  unaff_r4 = *(int *)((int)register0x00000054 + -0x10);
  unaff_r5 = *(int *)((int)register0x00000054 + -0xc);
  unaff_r6 = *(undefined4 *)((int)register0x00000054 + -8);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  iVar1 = iVar7;
LAB_02174038:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
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
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar1,0);
  iVar7 = *(int *)(iVar8 + 0x10);
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
  if (iVar7 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),3,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  iVar7 = *(int *)(iVar8 + 8);
  uVar11 = *(undefined4 *)(iVar8 + 0xc);
  iVar1 = *(int *)(iVar8 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar1 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar7,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
}



// ===== FAT.Merge.Board$$UnfrozenItem RVA 0x20db26c =====

void FUN_020eb26c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x934f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x934f,0);
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
  func_0x021177d0(param_2,0,0,0);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020eb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_2,0,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$FreezeItem RVA 0x20db30c =====

void FUN_020eb30c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0xab3f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xab3f,0);
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
  func_0x021177d0(param_2,0,1,0);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020eb3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),param_2,0,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$UndoSellItem RVA 0x20db3ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020eb3ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_020eb9b0 + 0x20eb3c4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020eb9b4 + 0x20eb3d8));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9b8 + 0x20eb3e4));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9bc + 0x20eb3f0));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9c0 + 0x20eb3fc));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9c4 + 0x20eb408));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9c8 + 0x20eb414));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9cc + 0x20eb420));
    func_0x01384978(*(undefined4 *)(_UNK_020eb9d0 + 0x20eb42c));
    *pcVar8 = '\x01';
  }
  uStack_28 = 0;
  uStack_2c = 0;
  iVar1 = func_0x0229f06c(0xb316,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb316,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02141b74(iVar1,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_020eb9d4 + 0x20eb62c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = **(undefined4 **)(_UNK_020eb9d8 + 0x20eb64c);
    goto LAB_020eb888;
  }
  func_0x0210cd7c(&uStack_38,iVar3,0);
  uStack_28 = uStack_34;
  func_0x0210cd7c(&uStack_38,iVar3,0);
  uStack_2c = uStack_38;
  uVar4 = FUN_020db85c(param_1,uStack_38,uStack_28);
  uVar11 = uStack_28;
  uVar2 = uStack_2c;
  if (-1 < (int)uVar4) {
    uVar5 = func_0x0210e2d4(iVar3,0);
    uVar6 = FUN_020defc4(param_1,uVar2,uVar11,uVar5,0,0,0,0);
    if (-1 < (int)uVar6) {
      FUN_020df144(param_1,uVar6,&uStack_2c,&uStack_28);
      uVar4 = uVar6;
    }
    iVar9 = *(int *)(param_1 + 0x80);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar4) {
      func_0x01384bf4();
    }
    iVar9 = *(int *)(iVar9 + uVar4 * 4 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 8);
    if ((iVar9 != 0) &&
       (((iVar7 = func_0x0210e250(iVar9,1,0,0), iVar7 != 0 ||
         (iVar7 = func_0x0210e250(iVar9,2,0,0), iVar7 != 0)) ||
        (iVar7 = func_0x02116ae0(iVar9,0), iVar7 == 0)))) {
      puVar10 = *(undefined4 **)(_UNK_020eb9e8 + 0x20eb6ac);
      uStack_38 = uStack_2c;
      uVar2 = func_0x01384abc(*puVar10,&uStack_38);
      uStack_3c = uStack_28;
      uVar11 = func_0x01384abc(*puVar10,&uStack_3c);
      uStack_40 = func_0x0210e2d4(iVar9,0);
      uVar5 = func_0x01384abc(*puVar10,&uStack_40);
      uVar2 = func_0x02450228(**(undefined4 **)(_UNK_020eb9ec + 0x20eb70c),uVar2,uVar11,uVar5,0);
      if (*(int *)(**(int **)(_UNK_020eb9f0 + 0x20eb724) + 0x74) == 0) {
        func_0x01384ab4();
      }
      goto LAB_020eb888;
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar7 = func_0x02144860(0,0);
      if (iVar7 != iVar3) {
        func_0x01384bf0();
        goto LAB_020eb758;
      }
      if (iVar9 == 0) goto LAB_020eb8f4;
      uVar2 = func_0x0210e2d4(iVar9,0);
      func_0x01384bf0();
    }
    else {
      iVar7 = func_0x02144860(iVar1,0);
      if (iVar7 != iVar3) {
LAB_020eb758:
        uVar2 = 0;
        iVar3 = func_0x02141b74(iVar1,0);
        uVar5 = **(undefined4 **)(_UNK_020eb9f4 + 0x20eb778);
        if (iVar3 == 0) {
          uStack_34 = 0;
        }
        else {
          uVar2 = func_0x0210e5f4(iVar3,0);
          uStack_34 = 0;
          uStack_38 = 0;
          func_0x03507d38(&uStack_38,uVar2,**(undefined4 **)(_UNK_020eb9f8 + 0x20eb798));
          uVar2 = uStack_38;
        }
        puVar10 = *(undefined4 **)(_UNK_020eb9fc + 0x20eb7c4);
        uStack_38 = uVar2;
        uVar2 = func_0x01384abc(*puVar10,&uStack_38);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar11 = 0;
        iVar1 = func_0x02141b74(iVar1,0);
        if (iVar1 == 0) {
          uStack_34 = 0;
        }
        else {
          uVar11 = func_0x0210e2d4(iVar1,0);
          uStack_34 = 0;
          uStack_38 = 0;
          func_0x03507d38(&uStack_38,uVar11,**(undefined4 **)(_UNK_020eba00 + 0x20eb818));
          uVar11 = uStack_38;
        }
        uStack_38 = uVar11;
        uVar11 = func_0x01384abc(*puVar10,&uStack_38);
        goto LAB_020eb85c;
      }
      if (iVar9 == 0) goto LAB_020eb8f4;
      uVar2 = func_0x0210e2d4(iVar9,0);
    }
    func_0x02144c58(iVar1,uVar2,0,0);
    FUN_020dd73c(param_1,iVar9,1,4);
    FUN_020dd8f4(param_1,iVar9,iVar9,4);
LAB_020eb8f4:
    iVar9 = *(int *)(param_1 + 0x80);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar4) {
      func_0x01384bf4();
    }
    func_0x02117440(iVar3,param_1,*(undefined4 *)(iVar9 + uVar4 * 4 + 0x10),0);
    FUN_020e8ab4(param_1,iVar3,0xffffffff,uVar4,uStack_2c,uStack_28,0);
    uVar2 = FUN_020d80e4(7);
    FUN_020df204(param_1,uVar2,iVar3);
    iVar9 = *(int *)(param_1 + 0x68);
    if (iVar9 != 0) {
      (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar9 + 0x20),iVar3,*(undefined4 *)(iVar9 + 0x14));
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,iVar3,3,0);
    return 1;
  }
  puVar10 = *(undefined4 **)(_UNK_020eb9dc + 0x20eb660);
  uStack_38 = uStack_2c;
  uVar2 = func_0x01384abc(*puVar10,&uStack_38);
  uStack_3c = uStack_28;
  uVar11 = func_0x01384abc(*puVar10,&uStack_3c);
  uVar5 = **(undefined4 **)(_UNK_020eb9e0 + 0x20eb698);
LAB_020eb85c:
  uVar2 = func_0x0244f690(uVar5,uVar2,uVar11,0);
  if (*(int *)(**(int **)(_UNK_020eb9e4 + 0x20eb874) + 0x74) == 0) {
    func_0x01384ab4();
  }
LAB_020eb888:
  func_0x028c2874(uVar2,0);
  return 0;
}



// ===== FAT.Merge.Board$$TriggerLevelUnlock RVA 0x20dba04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020eba04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_020ebac4 + 0x20eba18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ebac8 + 0x20eba2c));
    func_0x01384978(*(undefined4 *)(_UNK_020ebacc + 0x20eba38));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa03b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa03b,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar2);
    return;
  }
  iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_020ebad0 + 0x20eba90));
  func_0x03ccb96c(iVar5,param_1,**(undefined4 **)(_UNK_020ebad4 + 0x20ebaac),0);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar1 = func_0x0229f06c(0x2a8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2a8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,iVar5,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = 4;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = iVar1 - 4;
    if (*(int *)(iVar3 + 0xc) <= (int)uVar6) break;
    iVar3 = *(int *)(param_1 + 0x80);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar6) {
      func_0x01384bf4();
    }
    iVar3 = *(int *)(iVar3 + iVar1 * 4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar3 + 8) != 0) {
      iVar3 = *(int *)(param_1 + 0x80);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar6) {
        func_0x01384bf4();
      }
      iVar3 = *(int *)(iVar3 + iVar1 * 4);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar3 + 8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),uVar7,*(undefined4 *)(iVar5 + 0x14));
    }
    iVar1 = iVar1 + 1;
  }
  return;
}



// ===== FAT.Merge.Board$$AddEffect RVA 0x20dbad8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ebad8(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
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
  
  pcVar4 = (char *)(_UNK_020ebbf0 + 0x20ebaf0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ebbf4 + 0x20ebb04));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb318,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb318,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  piVar2 = *(int **)(_UNK_020ebbf8 + 0x20ebb84);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ebbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$KillEffect RVA 0x20dbbfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ebbfc(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  pcVar5 = (char *)(_UNK_020ebcf8 + 0x20ebc14);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ebcfc + 0x20ebc28));
    func_0x01384978(*(undefined4 *)(_UNK_020ebd00 + 0x20ebc34));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb319,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328ffbc(iVar1,param_2,**(undefined4 **)(_UNK_020ebd04 + 0x20ebca4));
    if (param_2 != 0) {
      func_0x0210f7bc(param_2,0);
    }
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_020ebd08 + 0x20ebce0));
    pcVar5 = (char *)(_UNK_020ebe48 + 0x20ebd24);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020ebe4c + 0x20ebd38));
      func_0x01384978(*(undefined4 *)(_UNK_020ebe50 + 0x20ebd44));
      func_0x01384978(*(undefined4 *)(_UNK_020ebe54 + 0x20ebd50));
      func_0x01384978(*(undefined4 *)(_UNK_020ebe58 + 0x20ebd5c));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xb31b,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020ebe5c + 0x20ebdb8));
      func_0x0210b304(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar2 = *(undefined4 **)(_UNK_020ebe60 + 0x20ebde0);
      *(int *)(iVar1 + 8) = param_2;
      uVar6 = func_0x01384be4(*puVar2);
      func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_020ebe64 + 0x20ebe00),0);
      func_0x02f58498(param_1,uVar6,**(undefined4 **)(_UNK_020ebe68 + 0x20ebe18));
      iVar4 = *(int *)(param_1 + 0x6c);
      if (iVar4 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x020ebe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 0xc))
                (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(iVar4 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0xb31b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb319,0);
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
  return;
}



// ===== FAT.Merge.Board$$TriggerEffectChange RVA 0x20dbd0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ebd0c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  pcVar5 = (char *)(_UNK_020ebe48 + 0x20ebd24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ebe4c + 0x20ebd38));
    func_0x01384978(*(undefined4 *)(_UNK_020ebe50 + 0x20ebd44));
    func_0x01384978(*(undefined4 *)(_UNK_020ebe54 + 0x20ebd50));
    func_0x01384978(*(undefined4 *)(_UNK_020ebe58 + 0x20ebd5c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb31b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb31b,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_020ebe5c + 0x20ebdb8));
  func_0x0210b304(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar2 = *(undefined4 **)(_UNK_020ebe60 + 0x20ebde0);
  *(undefined4 *)(iVar1 + 8) = param_2;
  uVar6 = func_0x01384be4(*puVar2);
  func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_020ebe64 + 0x20ebe00),0);
  func_0x02f58498(param_1,uVar6,**(undefined4 **)(_UNK_020ebe68 + 0x20ebe18));
  iVar4 = *(int *)(param_1 + 0x6c);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ebe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar4 + 0xc))
              (*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar1 + 8),
               *(undefined4 *)(iVar4 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$CalculateIdxByCoord RVA 0x20dbe6c =====

int FUN_020ebe6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = func_0x0229f06c(0x147a,0);
  if (iVar2 == 0) {
    iVar2 = func_0x0229f06c(0x24c,0);
    if (iVar2 == 0) {
      iVar2 = -1;
      if (-1 < param_2 && -1 < param_3) {
        iVar3 = *(int *)(param_1 + 0x8c);
        bVar6 = SBORROW4(iVar3,param_2);
        iVar1 = iVar3 - param_2;
        bVar5 = iVar3 == param_2;
        if (param_2 < iVar3) {
          iVar4 = *(int *)(param_1 + 0x90);
          bVar6 = SBORROW4(iVar4,param_3);
          iVar1 = iVar4 - param_3;
          bVar5 = iVar4 == param_3;
        }
        if (!bVar5 && iVar1 < 0 == bVar6) {
          iVar2 = iVar3 * param_3 + param_2;
        }
      }
    }
    else {
      iVar2 = func_0x0229f13c(0x24c,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02180128(iVar2,param_1,param_2,param_3,0);
    }
    return iVar2;
  }
  iVar2 = func_0x0229f13c(0x147a,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02180128(iVar2,param_1,param_2,param_3,0);
  return iVar2;
}



// ===== FAT.Merge.Board$$WalkEffects RVA 0x20dbeec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ebeec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_020ec0f8 + 0x20ebf08);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ec0fc + 0x20ebf1c));
    func_0x01384978(*(undefined4 *)(_UNK_020ec100 + 0x20ebf28));
    func_0x01384978(*(undefined4 *)(_UNK_020ec104 + 0x20ebf34));
    func_0x01384978(*(undefined4 *)(_UNK_020ec108 + 0x20ebf40));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x271,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_020ec10c + 0x20ebfc0));
    puVar4 = *(undefined4 **)(_UNK_020ec110 + 0x20ebfd4);
    while (iVar2 = func_0x03f5f428(&uStack_28,*puVar4), iVar1 = iStack_1c, iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0210f434(iVar1,0);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x0210f488(iVar1,0);
        if (param_2 != 0 && iVar2 == 0) {
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),iVar1,*(undefined4 *)(param_2 + 0x14));
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
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Board$$TriggerItemStatusChange RVA 0x20dc120 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ec120(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
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
  
  iVar1 = func_0x0229f06c(0x9e36,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e36,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  pcVar3 = (char *)(_UNK_020ec318 + 0x20ec1a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ec31c + 0x20ec1bc));
    func_0x01384978(*(undefined4 *)(_UNK_020ec320 + 0x20ec1c8));
    func_0x01384978(*(undefined4 *)(_UNK_020ec324 + 0x20ec1d4));
    func_0x01384978(*(undefined4 *)(_UNK_020ec328 + 0x20ec1e0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x883d,0);
  if (iVar1 == 0) {
    piVar6 = *(int **)(_UNK_020ec32c + 0x20ec244);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar6;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_020ec330 + 0x20ec28c));
      func_0x03ccb96c(iVar4,uVar5,**(undefined4 **)(_UNK_020ec334 + 0x20ec2ac),0);
      *(int *)(*(int *)(*piVar6 + 0x5c) + 0x18) = iVar4;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02feb864(param_2,iVar4,**(undefined4 **)(_UNK_020ec338 + 0x20ec2dc));
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ec30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,0,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x883d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    func_0x02174858(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Board$$_TriggerItemStateChange RVA 0x20dc188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ec188(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  pcVar2 = (char *)(_UNK_020ec318 + 0x20ec1a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ec31c + 0x20ec1bc));
    func_0x01384978(*(undefined4 *)(_UNK_020ec320 + 0x20ec1c8));
    func_0x01384978(*(undefined4 *)(_UNK_020ec324 + 0x20ec1d4));
    func_0x01384978(*(undefined4 *)(_UNK_020ec328 + 0x20ec1e0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x883d,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_020ec32c + 0x20ec244);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar5;
      }
      uVar3 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_020ec330 + 0x20ec28c));
      func_0x03ccb96c(iVar4,uVar3,**(undefined4 **)(_UNK_020ec334 + 0x20ec2ac),0);
      *(int *)(*(int *)(*piVar5 + 0x5c) + 0x18) = iVar4;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x02feb864(param_2,iVar4,**(undefined4 **)(_UNK_020ec338 + 0x20ec2dc));
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ec30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,param_3,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x883d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Board$$CalcTimeScale RVA 0x20dc33c =====

/* WARNING: Possible PIC construction at 0x0210db44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0210db48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020ec33c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 unaff_r4;
  char *unaff_r5;
  int iVar12;
  int unaff_r6;
  undefined4 uVar13;
  undefined4 unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int iVar14;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  int iStack_30;
  int iStack_2c;
  int aiStack_28 [4];
  
  iVar2 = func_0x0229f06c(0x5e4a,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x7c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    unaff_r5 = (char *)(_UNK_0210e21c + 0x210dab0);
    if (*unaff_r5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0210e220 + 0x210dac4),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_0210e224 + 0x210dad0));
      func_0x01384978(*(undefined4 *)(_UNK_0210e228 + 0x210dadc));
      func_0x01384978(*(undefined4 *)(_UNK_0210e22c + 0x210dae8));
      func_0x01384978(*(undefined4 *)(_UNK_0210e230 + 0x210daf4));
      *unaff_r5 = '\x01';
    }
    aiStack_28[0] = 0;
    iVar2 = func_0x0229f06c(0x5e4b,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03d7a28c(iVar2,**(undefined4 **)(_UNK_0210e234 + 0x210db6c));
      uVar6 = 1;
      if (0 < iVar2) {
        if (param_2 == 0) {
          func_0x01384bf0();
          iVar2 = func_0x0210e250(0,0xb,0);
          if (iVar2 != 0) {
            return 1;
          }
          func_0x01384bf0();
        }
        else {
          iVar2 = func_0x0210e250(param_2,0xb,0);
          if (iVar2 != 0) {
            return 1;
          }
        }
        func_0x0210cd7c(&iStack_30,param_2);
        iVar2 = iStack_30;
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&iStack_30,param_2);
        uVar3 = func_0x0210d114(param_1,iVar2,iStack_2c);
        iVar2 = *(int *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar2 + 0xc) <= uVar3) {
          func_0x01384bf4();
        }
        uStack_3c = *(uint *)(iVar2 + uVar3 * 4 + 0x10);
        if (uStack_3c != 0) {
          iVar2 = *(int *)(param_1 + 0x18);
          if (iVar2 == 0) {
            func_0x01384bf0(uStack_3c);
          }
          if (*(uint *)(iVar2 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          iVar2 = *(int *)(iVar2 + uVar3 * 4 + 0x10);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar7 = func_0x0210e2d4(param_2);
          if (iVar2 == iVar7) {
            iVar2 = *(int *)(param_1 + 0x1c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (*(uint *)(iVar2 + 0xc) <= uVar3) {
              func_0x01384bf4();
            }
            if (0 < *(int *)(iVar2 + uVar3 * 4 + 0x10)) {
              iVar2 = *(int *)(param_1 + 0x1c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              if (*(uint *)(iVar2 + 0xc) <= uVar3) {
                func_0x01384bf4();
              }
              return *(uint *)(iVar2 + uVar3 * 4 + 0x10);
            }
          }
          uVar6 = 0xffffffff;
          uStack_34 = 1;
          uStack_40 = uVar3;
          while( true ) {
            iVar2 = *(int *)(param_1 + 0x10);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar3 = uStack_34;
            if (*(int *)(iVar2 + 0xc) <= (int)uStack_34) break;
            if ((uStack_3c >> (uStack_34 - 1 & 0x1f) & 1) != 0) {
              iVar2 = *(int *)(param_1 + 0x28);
              if (param_2 == 0) {
                func_0x01384bf0();
              }
              func_0x0210cd7c(&iStack_30,param_2);
              iVar7 = iStack_30;
              iVar12 = *(int *)(param_1 + 0x10);
              if (iVar12 == 0) {
                func_0x01384bf0();
              }
              if (*(uint *)(iVar12 + 0xc) <= uVar3) {
                func_0x01384bf4();
              }
              iVar12 = *(int *)(iVar12 + uVar3 * 8 + 0x10);
              uStack_38 = uVar6;
              if (param_2 == 0) {
                func_0x01384bf0();
              }
              func_0x0210cd7c(&iStack_30,param_2);
              iVar1 = iStack_2c;
              iVar14 = *(int *)(param_1 + 0x10);
              if (iVar14 == 0) {
                func_0x01384bf0();
              }
              if (*(uint *)(iVar14 + 0xc) <= uVar3) {
                func_0x01384bf4();
              }
              iVar14 = *(int *)(iVar14 + uVar3 * 8 + 0x14);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              iVar2 = FUN_020e81ec(iVar2,iVar12 + iVar7,iVar14 + iVar1,0);
              uVar3 = uStack_34;
              uVar6 = uStack_38;
              if ((iVar2 != 0) &&
                 (iVar7 = func_0x02feb690(iVar2,aiStack_28,0,
                                          **(undefined4 **)(_UNK_0210e238 + 0x210ddfc)),
                 iVar2 = aiStack_28[0], uVar3 = uStack_34, uVar6 = uStack_38, iVar7 != 0)) {
                if (aiStack_28[0] == 0) {
                  func_0x01384bf0();
                }
                iVar7 = func_0x0212f4e4(iVar2,0);
                iVar2 = aiStack_28[0];
                uVar3 = uStack_34;
                uVar6 = uStack_38;
                if (iVar7 == 6) {
                  if (aiStack_28[0] == 0) {
                    func_0x01384bf0();
                  }
                  piVar4 = (int *)func_0x02132544(iVar2,0);
                  if (piVar4 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *piVar4;
                  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_0210e23c + 0x210de7c)) {
                        puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                        goto LAB_0210dee8;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar8 != 0);
                  }
                  puVar5 = (undefined4 *)
                           func_0x014002dc(piVar4,**(int **)(_UNK_0210e23c + 0x210de7c),0);
LAB_0210dee8:
                  iVar7 = (*(code *)*puVar5)(piVar4,puVar5[1]);
                  iVar2 = aiStack_28[0];
                  if (0 < iVar7) {
                    if (aiStack_28[0] == 0) {
                      func_0x01384bf0();
                    }
                    piVar4 = (int *)func_0x02132544(iVar2,0);
                    piVar9 = (int *)func_0x021566f4(0);
                    if (param_2 == 0) {
                      func_0x01384bf0();
                    }
                    uVar13 = func_0x0210e2d4(param_2);
                    if (piVar9 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar9;
                    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar3 != 0) {
                      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar10[-1] == **(int **)(_UNK_0210e240 + 0x210df60)) {
                          puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0x118);
                          goto LAB_0210dfa8;
                        }
                        uVar3 = uVar3 - 1;
                        piVar10 = piVar10 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar5 = (undefined4 *)
                             func_0x014002dc(piVar9,**(int **)(_UNK_0210e240 + 0x210df60),0xb);
LAB_0210dfa8:
                    iVar2 = (*(code *)*puVar5)(piVar9,uVar13,puVar5[1]);
                    uVar3 = uStack_34;
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    uVar13 = *(undefined4 *)(iVar2 + 0x10);
                    if (piVar4 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar4;
                    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar9[-1] == **(int **)(_UNK_0210e244 + 0x210dff0)) {
                          puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xe0);
                          goto LAB_0210e038;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 2;
                      } while (uVar8 != 0);
                    }
                    puVar5 = (undefined4 *)
                             func_0x014002dc(piVar4,**(int **)(_UNK_0210e244 + 0x210dff0),4);
LAB_0210e038:
                    iVar2 = (*(code *)*puVar5)(piVar4,uVar13,puVar5[1]);
                    if (iVar2 == 0) goto LAB_0210dec8;
                  }
                  iVar2 = aiStack_28[0];
                  if (aiStack_28[0] == 0) {
                    func_0x01384bf0();
                  }
                  piVar4 = (int *)func_0x021325a8(iVar2,0);
                  if (piVar4 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar2 = *piVar4;
                  uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_0210e248 + 0x210e090)) {
                        puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                        goto LAB_0210e0d8;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar8 != 0);
                  }
                  puVar5 = (undefined4 *)
                           func_0x014002dc(piVar4,**(int **)(_UNK_0210e248 + 0x210e090),0);
LAB_0210e0d8:
                  iVar7 = (*(code *)*puVar5)(piVar4,0,puVar5[1]);
                  iVar2 = aiStack_28[0];
                  if ((int)uVar6 < iVar7) {
                    if (aiStack_28[0] == 0) {
                      func_0x01384bf0();
                    }
                    piVar4 = (int *)func_0x021325a8(iVar2,0);
                    if (piVar4 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar4;
                    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar6 != 0) {
                      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar9[-1] == **(int **)(_UNK_0210e24c + 0x210e130)) {
                          puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
                          goto LAB_0210e178;
                        }
                        uVar6 = uVar6 - 1;
                        piVar9 = piVar9 + 2;
                      } while (uVar6 != 0);
                    }
                    puVar5 = (undefined4 *)
                             func_0x014002dc(piVar4,**(int **)(_UNK_0210e24c + 0x210e130),0);
LAB_0210e178:
                    uVar6 = (*(code *)*puVar5)(piVar4,0,puVar5[1]);
                  }
                }
              }
            }
LAB_0210dec8:
            uStack_34 = uVar3 + 1;
          }
          iVar2 = *(int *)(param_1 + 0x18);
          if (0x7fffffff < uVar6) {
            uVar6 = 1;
          }
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          uVar13 = func_0x0210e2d4(param_2);
          uVar3 = uStack_40;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar2 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          iVar7 = *(int *)(param_1 + 0x1c);
          *(undefined4 *)(iVar2 + uVar3 * 4 + 0x10) = uVar13;
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          if (*(uint *)(iVar7 + 0xc) <= uVar3) {
            func_0x01384bf4();
          }
          *(uint *)(iVar7 + uStack_40 * 4 + 0x10) = uVar6;
        }
      }
      return uVar6;
    }
    iVar2 = func_0x0229f13c(0x5e4b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x210db48;
    unaff_r6 = iVar2;
    unaff_r8 = param_2;
    unaff_r9 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_40;
  }
  else {
    iVar2 = func_0x0229f13c(0x5e4a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(int *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(char **)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar7 = *(int *)(iVar2 + 0x10);
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
  if (iVar7 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar7,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar13 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar11 = 3;
  if (iVar2 == 0) {
    uVar11 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar7,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar11);
  uVar6 = func_0x0245498c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar6;
}



// ===== FAT.Merge.Board$$TriggerUseTimeScaleSource RVA 0x20dc3b4 =====

void FUN_020ec3b4(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x9e3b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9e3b,0);
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
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0210da30(iVar1,param_2,0);
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ec448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$TriggerJumpCDBegin RVA 0x20dc450 =====

void FUN_020ec450(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x1514,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1514,0);
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
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ec4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$TriggerJumpCDEnd RVA 0x20dc4cc =====

void FUN_020ec4cc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x256,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x256,0);
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
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ec534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$TriggerTokenMultiBegin RVA 0x20dc53c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ec53c(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_020ec648 + 0x20ec554);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ec64c + 0x20ec568));
    func_0x01384978(*(undefined4 *)(_UNK_020ec650 + 0x20ec574));
    func_0x01384978(*(undefined4 *)(_UNK_020ec654 + 0x20ec580));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1519,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1519,0);
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
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  }
  if (*(int *)(**(int **)(_UNK_020ec658 + 0x20ec5fc) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_020ec65c + 0x20ec618));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.Merge.Board$$TriggerTokenMultiEnd RVA 0x20dc664 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ec664(int param_1)

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
  
  pcVar3 = (char *)(_UNK_020ec74c + 0x20ec678);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ec750 + 0x20ec68c));
    func_0x01384978(*(undefined4 *)(_UNK_020ec754 + 0x20ec698));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x25b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    if (*(int *)(**(int **)(_UNK_020ec758 + 0x20ec70c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    param_1 = func_0x0300d558(**(undefined4 **)(_UNK_020ec75c + 0x20ec728));
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x3f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x25b,0);
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
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.Merge.Board$$_UnlockItem RVA 0x20dc760 =====

undefined4 FUN_020ec760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x883b,0);
  if (iVar1 == 0) {
    uVar2 = FUN_020db85c(param_1,param_2,param_3);
    if (-1 < (int)uVar2) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar2) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar2 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        uVar4 = 0;
        iVar3 = func_0x02165540(iVar1,0);
        if (iVar3 != 0) {
          uVar4 = func_0x02116a38(iVar1,0);
          func_0x021177d0(iVar1,0,uVar4,0);
          FUN_020ec188(param_1,iVar1,param_4);
          iVar1 = func_0x0211ac54(iVar1,0);
          uVar4 = 1;
          if (iVar1 != 0) {
            FUN_020e1bbc(param_1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x883b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0217a980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.Merge.Board$$ForceUnlockCloud RVA 0x20dc8ac =====

/* WARNING: Removing unreachable block (ram,0x020dcd28) */
/* WARNING: Removing unreachable block (ram,0x020dcd1c) */
/* WARNING: Removing unreachable block (ram,0x020dcd30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ec8ac(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar2 = func_0x0229f06c(0x8803,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8803,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3);
    return;
  }
  iVar2 = func_0x020ec92c(param_1,param_2);
  if (iVar2 != 0) {
    func_0x0210c584(iVar2,0);
    pcVar4 = (char *)(_UNK_020dce74 + 0x20dca2c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020dce78 + 0x20dca40));
      func_0x01384978(*(undefined4 *)(_UNK_020dce7c + 0x20dca4c));
      func_0x01384978(*(undefined4 *)(_UNK_020dce80 + 0x20dca58));
      func_0x01384978(*(undefined4 *)(_UNK_020dce84 + 0x20dca64));
      func_0x01384978(*(undefined4 *)(_UNK_020dce88 + 0x20dca70));
      func_0x01384978(*(undefined4 *)(_UNK_020dce8c + 0x20dca7c));
      func_0x01384978(*(undefined4 *)(_UNK_020dce90 + 0x20dca88));
      func_0x01384978(*(undefined4 *)(_UNK_020dce94 + 0x20dca94));
      func_0x01384978(*(undefined4 *)(_UNK_020dce98 + 0x20dcaa0));
      func_0x01384978(*(undefined4 *)(_UNK_020dce9c + 0x20dcaac));
      *pcVar4 = '\x01';
    }
    uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_44 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    iVar2 = func_0x0229f06c(0x584,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x9c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0245055c(iVar2,**(undefined4 **)(_UNK_020dcea0 + 0x20dcb34));
      iVar2 = 0x10;
      while( true ) {
        iVar5 = *(int *)(param_1 + 0x84);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar5 + 0xc) <= (int)(iVar2 - 0x10U)) break;
        iVar5 = *(int *)(param_1 + 0x84);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar5 + 0xc) <= iVar2 - 0x10U) {
          func_0x01384bf4();
        }
        *(undefined1 *)(iVar5 + iVar2) = 0;
        iVar2 = iVar2 + 1;
      }
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_68,iVar2,**(undefined4 **)(_UNK_020dcea4 + 0x20dcbb4));
      uStack_38 = uStack_68;
      uStack_34 = uStack_64;
      uStack_30 = uStack_60;
      iStack_2c = iStack_5c;
      puVar8 = *(undefined4 **)(_UNK_020dcea8 + 0x20dcbdc);
      puVar7 = *(undefined4 **)(_UNK_020dceac + 0x20dcbe4);
      while (iVar5 = func_0x03f5f428(&uStack_38,**(undefined4 **)(_UNK_020dceb8 + 0x20dcbec)),
            iVar2 = iStack_2c, iVar5 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        if (*(char *)(iVar2 + 0x10) == '\0') {
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x0245034c(&uStack_68,iVar2,**(undefined4 **)(_UNK_020dceb0 + 0x20dcc34));
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          iStack_44 = iStack_5c;
          uStack_40 = uStack_58;
          while (iVar2 = func_0x03f4a79c(&uStack_50,*puVar8), iVar2 != 0) {
            uVar1 = FUN_020db85c(param_1,iStack_44,uStack_40);
            if (-1 < (int)uVar1) {
              iVar2 = *(int *)(param_1 + 0x84);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              if ((int)uVar1 < *(int *)(iVar2 + 0xc)) {
                iVar2 = *(int *)(param_1 + 0x84);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                if (*(uint *)(iVar2 + 0xc) <= uVar1) {
                  func_0x01384bf4();
                }
                *(undefined1 *)(iVar2 + uVar1 + 0x10) = 1;
                if (*(char *)(param_1 + 0xa2) != '\0') {
                  iVar2 = *(int *)(param_1 + 0x9c);
                  if (iVar2 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x02450560(iVar2,uVar1,*puVar7);
                }
              }
            }
          }
          func_0x03f4a798(&uStack_50,**(undefined4 **)(_UNK_020dceb4 + 0x20dcd0c));
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_020dcebc + 0x20dcd74));
      FUN_020db8ec(param_1);
    }
    else {
      iVar2 = func_0x0229f13c(0x584,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02173f80(iVar2,param_1,0);
    }
    return;
  }
  return;
}



// ===== FAT.Merge.Board$$FindCloudByConfId RVA 0x20dc92c =====

/* WARNING: Possible PIC construction at 0x020ec9f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x020ec9fc) */
/* WARNING: Removing unreachable block (ram,0x020eca08) */
/* WARNING: Removing unreachable block (ram,0x020eca0c) */
/* WARNING: Removing unreachable block (ram,0x020eca28) */
/* WARNING: Removing unreachable block (ram,0x020eca34) */
/* WARNING: Removing unreachable block (ram,0x020eca38) */
/* WARNING: Removing unreachable block (ram,0x020eca18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020ec92c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
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
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_020eca4c + 0x20ec944);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020eca50 + 0x20ec958));
    func_0x01384978(*(undefined4 *)(_UNK_020eca54 + 0x20ec964));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8804,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8804,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0225c968 + 0x225c874);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225c96c + 0x225c888),param_1,param_2,0);
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
    uVar5 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225c970 + 0x225c958));
    return uVar5;
  }
  puVar6 = *(undefined4 **)(_UNK_020eca58 + 0x20ec9c4);
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = param_2;
    iStack_24 = param_1;
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x0484c9cc(0,0,*puVar6);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x01384bf4();
    }
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0;
}



// ===== FAT.Merge.Board$$TriggerUnlockAroundCloud RVA 0x20dca5c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020eca5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
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
  
  pcVar2 = (char *)(_UNK_020ecc8c + 0x20eca78);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ecc90 + 0x20eca8c));
    func_0x01384978(*(undefined4 *)(_UNK_020ecc94 + 0x20eca98));
    func_0x01384978(*(undefined4 *)(_UNK_020ecc98 + 0x20ecaa4));
    func_0x01384978(*(undefined4 *)(_UNK_020ecc9c + 0x20ecab0));
    func_0x01384978(*(undefined4 *)(_UNK_020ecca0 + 0x20ecabc));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x8839,0);
  if (iVar1 == 0) {
    iVar1 = FUN_020ec92c(param_1,param_2);
    if (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar3 + 0x10) == 0) {
        FUN_020da680(&uStack_48,param_1);
        func_0x0210c12c(iVar1,uStack_44,0,0);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0245034c(&uStack_48,iVar1,**(undefined4 **)(_UNK_020ecca4 + 0x20ecb9c));
      uStack_20 = uStack_38;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      uStack_24 = uStack_3c;
      puVar4 = *(undefined4 **)(_UNK_020ecca8 + 0x20ecbc8);
      while (iVar1 = func_0x03f4a79c(&uStack_30,*puVar4), iVar1 != 0) {
        FUN_020e1bbc(param_1,uStack_24,uStack_20,0);
      }
      func_0x03f4a798(&uStack_30,**(undefined4 **)(_UNK_020eccac + 0x20ecbf8));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8839,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Board$$CheckHasBonusItem RVA 0x20dccb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020eccb8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_020ece2c + 0x20eccd0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ece30 + 0x20ecce4));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x5b88,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b88,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
    return uVar2;
  }
  puVar7 = *(undefined4 **)(_UNK_020ece34 + 0x20ecd48);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar6) break;
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + uVar6 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((iVar1 != 0) && (iVar3 = func_0x02116ae0(iVar1,0), iVar3 != 0)) {
      iVar4 = func_0x02feb690(iVar1,&iStack_24,0,*puVar7);
      iVar3 = iStack_24;
      if (iVar4 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0211dc48(iVar3,0);
        if (iVar3 != 0) {
          return 1;
        }
      }
      iVar1 = func_0x0210e250(iVar1,5,0,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar6 = uVar6 + 1;
  }
  return 0;
}



// ===== FAT.Merge.Board$$CheckHasEmptyIdx RVA 0x20dce38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_020ece38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
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
  
  pcVar3 = (char *)(_UNK_020ecf54 + 0x20ece4c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ecf58 + 0x20ece60));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5b87,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b87,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  puVar7 = *(undefined4 **)(_UNK_020ecf5c + 0x20ecebc);
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 <= (int)uVar4) break;
    iVar5 = *(int *)(param_1 + 0x80);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar4) {
      func_0x01384bf4();
    }
    iVar5 = *(int *)(iVar5 + uVar4 * 4 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar5 + 8) == 0) {
      iVar5 = *(int *)(param_1 + 0x9c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x02450564(iVar5,uVar4,*puVar7);
      if (iVar5 == 0) break;
    }
    uVar4 = uVar4 + 1;
  }
  return (uint)((int)uVar4 < iVar1);
}



// ===== FAT.Merge.Board$$_FindEmptyIdxes RVA 0x20dcf60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_020ecf60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,int *param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_020ed240 + 0x20ecf80);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ed244 + 0x20ecf98));
    func_0x01384978(*(undefined4 *)(_UNK_020ed248 + 0x20ecfa4));
    func_0x01384978(*(undefined4 *)(_UNK_020ed24c + 0x20ecfb0));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1498,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1498,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cbc90(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,0);
    return uVar2;
  }
  iVar1 = param_5;
  if (param_8 != 0) {
    iVar1 = func_0x0210e2d4(param_8,0);
    iVar3 = func_0x0210e250(param_8,6,0,0);
    if (iVar3 != 0) {
      iVar1 = 0;
    }
  }
  if (param_6 == (int *)0x0) {
    piVar6 = (int *)0x0;
    if (iVar1 < 0) {
      return 1;
    }
  }
  else {
    iVar1 = *param_6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_020ed250 + 0x20ed084)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_020ed0e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(param_6,**(int **)(_UNK_020ed250 + 0x20ed084),0);
LAB_020ed0e0:
    piVar6 = (int *)(*(code *)*puVar4)(param_6,puVar4[1]);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_020ed254 + 0x20ed110)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_020ed158;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_020ed254 + 0x20ed110),0);
LAB_020ed158:
    iVar1 = (*(code *)*puVar4)(piVar6,puVar4[1]);
    if (iVar1 == 0) {
      return 1;
    }
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0(1);
    }
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_020ed258 + 0x20ed194)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_020ed1dc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_020ed258 + 0x20ed194),0);
LAB_020ed1dc:
    iVar1 = (*(code *)*puVar4)(piVar6,puVar4[1]);
    if (iVar1 < 0) {
      return 0;
    }
  }
  uVar2 = func_0x020ed25c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          iVar1,piVar6);
  return uVar2;
}



// ===== FAT.Merge.Board$$_WalkNearestFirstForEmptyIdxes RVA 0x20dd25c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_020ed25c(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10,
            int *param_11)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  bool bVar11;
  int iStack_4c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_020ed8f4 + 0x20ed280);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ed8f8 + 0x20ed294));
    func_0x01384978(*(undefined4 *)(_UNK_020ed8fc + 0x20ed2a0));
    func_0x01384978(*(undefined4 *)(_UNK_020ed900 + 0x20ed2ac));
    *pcVar10 = '\x01';
  }
  iStack_38 = param_10;
  iStack_28 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iVar1 = func_0x0229f06c(0x1499,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1499,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cbafc(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,param_10,param_11,0);
    return uVar2;
  }
  if (param_9 < 1) {
    param_9 = *(int *)(param_1 + 0x94) + -1;
  }
  iVar1 = FUN_020db85c(param_1,param_3,param_4);
  if ((-1 < iVar1) && (iVar1 = func_0x020edd9c(param_1,param_2,param_7,iVar1,param_10), iVar1 != 0))
  {
    if (param_11 == (int *)0x0) {
      return 1;
    }
    iVar1 = *param_11;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_020ed904 + 0x20ed3d8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_020ed428;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_11,**(int **)(_UNK_020ed904 + 0x20ed3d8),0);
LAB_020ed428:
    iVar1 = (*(code *)*puVar3)(param_11,puVar3[1]);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = *param_11;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_020ed908 + 0x20ed450)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_020ed4a0;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_11,**(int **)(_UNK_020ed908 + 0x20ed450),0);
LAB_020ed4a0:
    iStack_38 = (*(code *)*puVar3)(param_11,puVar3[1]);
    if (iStack_38 < 0) {
      return 0;
    }
  }
  if (param_9 < 1) {
    return 0;
  }
  iStack_4c = 1;
  do {
    uVar7 = 0;
    while( true ) {
      piVar9 = *(int **)(_UNK_020ed914 + 0x20ed4e4);
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= (int)uVar7) break;
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      iVar1 = **(int **)(iVar1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar7) {
        func_0x01384bf4();
      }
      iStack_28 = *(int *)(iVar1 + uVar7 * 4 + 0x10) * iStack_4c + param_3;
      iVar1 = **(int **)(*piVar9 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= (uVar7 | 1)) {
        func_0x01384bf4();
      }
      iStack_2c = *(int *)(iVar1 + (uVar7 | 1) * 4 + 0x10) * iStack_4c + param_4;
      iVar1 = **(int **)(*piVar9 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= (uVar7 | 2)) {
        func_0x01384bf4();
      }
      iStack_30 = *(int *)(iVar1 + (uVar7 | 2) * 4 + 0x10) * iStack_4c + param_3;
      iVar1 = **(int **)(*piVar9 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= (uVar7 | 3)) {
        func_0x01384bf4();
      }
      iStack_34 = *(int *)(iVar1 + (uVar7 | 3) * 4 + 0x10) * iStack_4c + param_4;
      if (iStack_28 < iStack_30) {
        iStack_28 = iStack_28 + 1;
        iVar1 = func_0x020edf8c(param_1,&iStack_28,&iStack_30,*(undefined4 *)(param_1 + 0x8c));
        if ((-1 < iStack_2c) && (iVar1 != 0)) {
          iVar4 = *(int *)(param_1 + 0x90);
          iVar1 = 1;
LAB_020ed6b8:
          if (iStack_2c < iVar4) {
LAB_020ed6c0:
            iVar4 = FUN_020db85c(param_1,iStack_28,iStack_2c);
            iVar5 = FUN_020db85c(param_1,iStack_30,iStack_34);
            if (iVar4 != iVar5 + iVar1) {
              do {
                iVar6 = func_0x020edd9c(param_1,param_2,param_7,iVar4,iStack_38);
                if (iVar6 != 0) {
                  if (param_11 == (int *)0x0) {
                    return 1;
                  }
                  iVar6 = *param_11;
                  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_020ed90c + 0x20ed730)) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
                        goto LAB_020ed778;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined4 *)
                           func_0x014002dc(param_11,**(int **)(_UNK_020ed90c + 0x20ed730),0);
LAB_020ed778:
                  iVar6 = (*(code *)*puVar3)(param_11,puVar3[1]);
                  if (iVar6 == 0) {
                    return 1;
                  }
                  iVar6 = *param_11;
                  uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_020ed910 + 0x20ed7a0)) {
                        puVar3 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
                        goto LAB_020ed7ec;
                      }
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar8 != 0);
                  }
                  puVar3 = (undefined4 *)
                           func_0x014002dc(param_11,**(int **)(_UNK_020ed910 + 0x20ed7a0),0);
LAB_020ed7ec:
                  iStack_38 = (*(code *)*puVar3)(param_11,puVar3[1]);
                  if (iStack_38 < 0) {
                    return 0;
                  }
                }
                bVar11 = iVar4 != iVar5;
                iVar4 = iVar4 + iVar1;
              } while (bVar11);
            }
          }
        }
      }
      else if (iStack_30 < iStack_28) {
        iStack_28 = iStack_28 + -1;
        iVar1 = func_0x020edf8c(param_1,&iStack_30,&iStack_28,*(undefined4 *)(param_1 + 0x8c));
        if ((-1 < iStack_2c) && (iVar1 != 0)) {
          iVar4 = *(int *)(param_1 + 0x90);
          iVar1 = -1;
          goto LAB_020ed6b8;
        }
      }
      else if (iStack_2c < iStack_34) {
        iStack_2c = iStack_2c + 1;
        iVar1 = func_0x020edf8c(param_1,&iStack_2c,&iStack_34,*(undefined4 *)(param_1 + 0x90));
        if (((-1 < iStack_28) && (iVar1 != 0)) &&
           (iVar1 = *(int *)(param_1 + 0x8c), iStack_28 < iVar1)) {
LAB_020ed8b0:
          if (iVar1 != 0) goto LAB_020ed6c0;
        }
      }
      else if (iStack_34 < iStack_2c) {
        iStack_2c = iStack_2c + -1;
        iVar1 = func_0x020edf8c(param_1,&iStack_34,&iStack_2c,*(undefined4 *)(param_1 + 0x90));
        if (((-1 < iStack_28) && (iVar1 != 0)) && (iStack_28 < *(int *)(param_1 + 0x8c))) {
          iVar1 = -*(int *)(param_1 + 0x8c);
          goto LAB_020ed8b0;
        }
      }
      uVar7 = uVar7 + 4;
    }
    iStack_4c = iStack_4c + 1;
    if (param_9 < iStack_4c) {
      return 0;
    }
  } while( true );
}



// ===== FAT.Merge.Board$$Update RVA 0x20dd918 =====

void FUN_020ed918(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e43,0);
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
  do {
    iVar1 = func_0x020ed9a4(param_1,param_2);
    func_0x020eda20(param_1,iVar1);
    func_0x020edca4(param_1,iVar1);
    param_2 = param_2 - iVar1;
  } while (0 < param_2);
  return;
}



// ===== FAT.Merge.Board$$_GetNextCheckPointDist RVA 0x20dd9a4 =====

int FUN_020ed9a4(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5e44,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e44,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0210e328(iVar1,0);
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$UpdateChest RVA 0x20dda20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020eda20(int param_1,int param_2)

{
  int iVar1;
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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_020edc80 + 0x20eda3c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020edc84 + 0x20eda50));
    func_0x01384978(*(undefined4 *)(_UNK_020edc88 + 0x20eda5c));
    func_0x01384978(*(undefined4 *)(_UNK_020edc8c + 0x20eda68));
    func_0x01384978(*(undefined4 *)(_UNK_020edc90 + 0x20eda74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e49,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e49,0);
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
    iVar1 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141acc(iVar1,0);
  if (0 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x02141acc(iVar1,0);
    iVar1 = FUN_020dfd3c(param_1,uVar6);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_1c = func_0x02141acc(iVar1,0);
      uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_020edc94 + 0x20edc04),&uStack_1c);
      uVar6 = func_0x0244f6a0(**(undefined4 **)(_UNK_020edc98 + 0x20edc28),uVar6,0);
      if (*(int *)(**(int **)(_UNK_020edc9c + 0x20edc3c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar6,0);
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02144730(iVar1,0,0);
    }
    else {
      iVar4 = FUN_020ec33c(param_1,iVar1);
      iVar2 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(_UNK_020edca0 + 0x20edb40));
      iVar1 = *(int *)(param_1 + 0x98);
      uVar6 = func_0x021621f0(iVar2,iVar4 * param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x021462f4(iVar1,uVar6,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211fb6c(iVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x34) * 1000;
      if (iVar1 - iVar4 == 0 || iVar1 < iVar4) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
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
          func_0x01485278(&uStack_30,iVar2,0);
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
          uStack_50 = 0;
          uStack_4c = 0;
          func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
          iVar1 = func_0x0245496c(&uStack_30,0,0);
          return iVar1;
        }
        if (*(char *)(iVar2 + 0x3c) == '\0') {
          *(undefined1 *)(iVar2 + 0x3c) = 1;
          iVar1 = func_0x02123568(iVar2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x0210e2d4(iVar1);
          func_0x023179f0(uVar6,0);
          iVar1 = func_0x02123568(iVar2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02116f08(iVar1);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x02141acc(iVar1,0);
          iVar4 = func_0x02123568(iVar2,0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = func_0x0210e5f4(iVar4);
          if (iVar1 == iVar4) {
            iVar1 = func_0x02123568(iVar2,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x02116f08(iVar1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02146358(iVar1,0);
          }
          iVar1 = func_0x02123568(iVar2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x02118aa0(iVar1);
        }
        return 1;
      }
    }
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$_Update RVA 0x20ddca4 =====

void FUN_020edca4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x5e55,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e55,0);
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
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) <= (int)uVar5) break;
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + uVar5 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (((iVar1 != 0) && (iVar3 = func_0x02116a8c(iVar1,0), iVar3 == 0)) &&
       (iVar3 = func_0x02116ae0(iVar1,0), iVar3 != 0)) {
      func_0x0211a5d0(iVar1,param_2,0);
    }
    uVar5 = uVar5 + 1;
  }
  return;
}



// ===== FAT.Merge.Board$$_TryAddEmptyIdx RVA 0x20ddd9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_020edd9c(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar4 = (char *)(_UNK_020edf78 + 0x20eddbc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020edf7c + 0x20eddd4));
    func_0x01384978(*(undefined4 *)(_UNK_020edf80 + 0x20edde0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x149a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar1 + 0xc) <= param_4) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar1 + param_4 * 4 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    if (*(int *)(iVar1 + 8) == 0) {
      iVar6 = *(int *)(param_1 + 0x9c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x02450564(iVar6,param_4,**(undefined4 **)(_UNK_020edf84 + 0x20edea4));
      if (iVar6 == 0) {
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        uVar2 = 0;
        iVar1 = func_0x02165090(uVar7,param_5,0);
        if (iVar1 != 0) {
          if ((param_3 != 0) && (iVar1 = func_0x02165100(uVar7,param_3,0), iVar1 == 0)) {
            return 0;
          }
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(param_2 + 8);
          uVar5 = *(uint *)(param_2 + 0xc);
          piVar3 = *(int **)(_UNK_020edf88 + 0x20edf24);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar6 = *piVar3;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (uVar5 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar5 + 1;
            *(uint *)(iVar1 + uVar5 * 4 + 0x10) = param_4;
          }
          else {
            func_0x0325970c(param_2,param_4,
                            *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
          }
          uVar2 = 1;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x149a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cb890(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_ClampRange RVA 0x20ddf8c =====

undefined4 FUN_020edf8c(undefined4 param_1,uint *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = func_0x0229f06c(0x14a4,0);
  if (iVar1 == 0) {
    uVar3 = *param_2;
    uVar2 = 0;
    if (0x7fffffff < uVar3) {
      uVar3 = 0;
      *param_2 = 0;
    }
    iVar1 = *param_3;
    if (param_4 <= iVar1) {
      iVar1 = param_4 + -1;
      *param_3 = iVar1;
      uVar3 = *param_2;
    }
    if ((int)uVar3 <= iVar1) {
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cb9a8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_DisposeBonusHandlerSort RVA 0x20de02c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020ee02c(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_020ee1a8 + 0x20ee04c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ee1ac + 0x20ee060));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x263,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    piVar7 = *(int **)(_UNK_020ee1b0 + 0x20ee0d4);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar3 = *piVar7;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_020ee11c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar3,0);
LAB_020ee11c:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *param_3;
    iVar4 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_020ee18c;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_3,iVar4,0);
LAB_020ee18c:
    iVar3 = (*(code *)*puVar2)(param_3,puVar2[1]);
    iVar1 = iVar1 - iVar3;
  }
  else {
    iVar1 = func_0x0229f13c(0x263,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$_SpawnBonusHandlerSort RVA 0x20de1b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020ee1b4(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_020ee330 + 0x20ee1d4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ee334 + 0x20ee1e8));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2a6,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    piVar7 = *(int **)(_UNK_020ee338 + 0x20ee25c);
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar3 = *piVar7;
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_020ee2a4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar3,0);
LAB_020ee2a4:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (param_3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *param_3;
    iVar4 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_020ee314;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_3,iVar4,0);
LAB_020ee314:
    iVar3 = (*(code *)*puVar2)(param_3,puVar2[1]);
    iVar1 = iVar1 - iVar3;
  }
  else {
    iVar1 = func_0x0229f13c(0x2a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$TrySpawnBubbleItem RVA 0x20de33c =====

undefined4 FUN_020ee33c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb31e,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210cd7c(&uStack_30,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_30,param_2,0);
    iVar1 = FUN_020defc4(param_1,uStack_30,uStack_2c,0,0,0,0,0);
    if ((-1 < iVar1) && (iVar3 = FUN_020df144(param_1,iVar1,&uStack_24,&uStack_28), iVar3 != 0)) {
      uVar2 = func_0x020ee4ac(param_1,param_3,iVar1,uStack_24,uStack_28,0);
      iVar1 = FUN_020d8024(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = FUN_020d8198(iVar1,param_4);
      FUN_020df204(param_1,uVar4,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb31e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229c034(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_SpawnBubbleItem RVA 0x20de4ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020ee4ac(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_020ee6c0 + 0x20ee4cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ee6c4 + 0x20ee4e4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb31f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021444bc(iVar1,0);
    uVar5 = *(undefined4 *)(param_1 + 0x98);
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_020ee6c8 + 0x20ee578));
    func_0x02116fb0(iVar2,uVar3,uVar5,0);
    iVar6 = *(int *)(param_1 + 0x80);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar6 + 0xc) <= param_3) {
      func_0x01384bf4();
    }
    uVar3 = *(undefined4 *)(iVar6 + param_3 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
      func_0x02117440(0,param_1,uVar3,0);
      func_0x01384bf0();
    }
    else {
      func_0x02117440(iVar2,param_1,uVar3,0);
    }
    uVar3 = 0;
    uVar5 = 0;
    func_0x02119054(iVar2,param_2,1);
    FUN_020de384(param_1,iVar2,1,0,9,0,uVar3,uVar5);
    FUN_020e8ab4(param_1,iVar2,0xffffffff,param_3,param_4,param_5,0);
    if (param_6 != 0) {
      uVar3 = FUN_020d7f80();
      FUN_020df204(param_1,uVar3,iVar2);
    }
    iVar6 = *(int *)(param_1 + 0x68);
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar6 + 0x20),iVar2,*(undefined4 *)(iVar6 + 0x14));
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,iVar2,3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb31f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229bed0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return iVar2;
}



// ===== FAT.Merge.Board$$TrySpawnFrozenItem RVA 0x20de6cc =====

undefined4
FUN_020ee6cc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb320,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x0210cd7c(&uStack_30,param_2,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_30,param_2,0);
    iVar1 = FUN_020defc4(param_1,uStack_30,uStack_2c,0,0,0,0,0);
    if ((-1 < iVar1) && (iVar3 = FUN_020df144(param_1,iVar1,&uStack_24,&uStack_28), iVar3 != 0)) {
      uVar2 = func_0x020ee834(param_1,uStack_28,param_5,param_6,param_3,iVar1,uStack_24,uStack_28,0)
      ;
      uVar4 = FUN_020d8024(param_2,0);
      FUN_020df204(param_1,uVar4,uVar2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb320,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0229c2f0(iVar1,param_1,param_2,param_3,param_5,param_6,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Board$$_SpawnFrozenItem RVA 0x20de834 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020ee834(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_020eea58 + 0x20ee854);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020eea5c + 0x20ee868));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb321,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021444bc(iVar1,0);
    uVar6 = *(undefined4 *)(param_1 + 0x98);
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_020eea60 + 0x20ee90c));
    func_0x02116fb0(iVar2,uVar3,uVar6,0);
    iVar5 = *(int *)(param_1 + 0x80);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar5 + 0xc) <= param_6) {
      func_0x01384bf4();
    }
    uVar3 = *(undefined4 *)(iVar5 + param_6 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
      func_0x02117440(0,param_1,uVar3,0);
      func_0x01384bf0();
    }
    else {
      func_0x02117440(iVar2,param_1,uVar3,0);
    }
    uVar3 = 0;
    uVar6 = 0;
    func_0x02119054(iVar2,param_5,2);
    FUN_020de384(param_1,iVar2,1,0,9,0,uVar3,uVar6);
    FUN_020e8ab4(param_1,iVar2,0xffffffff,param_6,param_7,param_8,0);
    if (param_9 != 0) {
      uVar3 = FUN_020d7f80();
      FUN_020df204(param_1,uVar3,iVar2);
    }
    iVar5 = *(int *)(param_1 + 0x68);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar5 + 0x20),iVar2,*(undefined4 *)(iVar5 + 0x14));
    }
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar1,iVar2,3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb321,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0229c178(iVar1,param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0)
    ;
  }
  return iVar2;
}



// ===== FAT.Merge.Board$$_SetSize RVA 0x20dea64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020eea64(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
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
  
  pcVar6 = (char *)(_UNK_020eec40 + 0x20eea84);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020eec44 + 0x20eea98));
    func_0x01384978(*(undefined4 *)(_UNK_020eec48 + 0x20eeaa4));
    func_0x01384978(*(undefined4 *)(_UNK_020eec4c + 0x20eeab0));
    func_0x01384978(*(undefined4 *)(_UNK_020eec50 + 0x20eeabc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5bbf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5bbf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar7 = *(int *)(param_1 + 0x9c);
  *(int *)(param_1 + 0x8c) = param_2;
  iVar1 = param_3;
  if (param_3 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x90) = param_3;
  *(int *)(param_1 + 0x94) = iVar1;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x0245055c(iVar7,**(undefined4 **)(_UNK_020eec54 + 0x20eeb4c));
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_020eec58 + 0x20eeb64),param_3 * param_2);
  *(int **)(param_1 + 0x80) = piVar2;
  puVar9 = *(undefined4 **)(_UNK_020eec5c + 0x20eeb80);
  uVar5 = 0;
  while( true ) {
    piVar8 = piVar2;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
      piVar8 = *(int **)(param_1 + 0x80);
    }
    if (piVar2[3] <= (int)uVar5) break;
    iVar1 = func_0x01384be4(*puVar9);
    func_0x0244f5a0(iVar1,0);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar7 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar8 + 0x20)), iVar7 == 0)
       ) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if ((uint)piVar8[3] <= uVar5) {
      func_0x01384bf4();
    }
    piVar8[uVar5 + 4] = iVar1;
    piVar2 = *(int **)(param_1 + 0x80);
    uVar5 = uVar5 + 1;
  }
  if (piVar8 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x01384a00(**(undefined4 **)(_UNK_020eec60 + 0x20eec24),piVar8[3]);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  pcVar6 = (char *)(_UNK_020dba08 + 0x20db900);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020dba0c + 0x20db914));
    *pcVar6 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x250,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    puVar9 = *(undefined4 **)(_UNK_020dba10 + 0x20db974);
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= (int)uVar5) break;
      iVar1 = *(int *)(param_1 + 0x80);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
        func_0x01384bf4();
      }
      iVar1 = *(int *)(iVar1 + uVar5 * 4 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 8) == 0) {
        iVar1 = *(int *)(param_1 + 0x9c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02450564(iVar1,uVar5,*puVar9);
        if (iVar1 == 0) {
          *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        }
      }
      uVar5 = uVar5 + 1;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x250,0);
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
  iVar7 = *(int *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar7,uVar3,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.Merge.Board$$SetLvAreaID RVA 0x20dec64 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_020eec64(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
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
  
  pcVar8 = (char *)(_UNK_020ef054 + 0x20eec80);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ef058 + 0x20eec94));
    func_0x01384978(*(undefined4 *)(_UNK_020ef05c + 0x20eeca0));
    func_0x01384978(*(undefined4 *)(_UNK_020ef060 + 0x20eecac));
    func_0x01384978(*(undefined4 *)(_UNK_020ef064 + 0x20eecb8));
    func_0x01384978(*(undefined4 *)(_UNK_020ef068 + 0x20eecc4));
    func_0x01384978(*(undefined4 *)(_UNK_020ef06c + 0x20eecd0));
    func_0x01384978(*(undefined4 *)(_UNK_020ef070 + 0x20eecdc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x601f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x601f,0);
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
    iVar1 = func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    return iVar1;
  }
  iVar1 = 0;
  if (((param_2 != 0) && (iVar1 = *(int *)(param_1 + 8), iVar1 == 1)) &&
     (iVar1 = 0, *(int *)(param_2 + 0xc) != 0)) {
    iVar1 = *(int *)(param_1 + 0xa4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_020ef074 + 0x20eed70);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    uVar9 = *puVar2;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    piVar3 = (int *)func_0x0364c2b4(param_2,uVar9);
    piVar10 = *(int **)(_UNK_020ef078 + 0x20eed98);
LAB_020eed94:
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_020eedf0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_020eedf0:
    iVar1 = (*(code *)*puVar2)(piVar3,puVar2[1]);
    if (iVar1 != 0) {
      if (piVar3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar3;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_020ef07c + 0x20eee24)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_020eee6c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020ef07c + 0x20eee24),0);
LAB_020eee6c:
      uVar9 = (*(code *)*puVar2)(piVar3,puVar2[1]);
      iVar1 = *(int *)(param_1 + 0xa4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      piVar5 = *(int **)(_UNK_020ef080 + 0x20eeeb0);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar11 = *piVar5;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar7 + uVar4 * 4 + 0x10) = uVar9;
      }
      else {
        func_0x0325970c(iVar1,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                       );
      }
      goto LAB_020eed94;
    }
    iVar1 = 0;
    if (piVar3 != (int *)0x0) {
      iVar1 = *piVar3;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_020ef084 + 0x20eef14)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_020eef5c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_020ef084 + 0x20eef14),0);
LAB_020eef5c:
      iVar1 = (*(code *)*puVar2)(piVar3,puVar2[1]);
    }
  }
  return iVar1;
}



// ===== FAT.Merge.Board$$.cctor RVA 0x20df08c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ef08c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_020ef118 + 0x20ef09c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020ef11c + 0x20ef0b0));
    func_0x01384978(*(undefined4 *)(_UNK_020ef120 + 0x20ef0bc));
    func_0x01384978(*(undefined4 *)(_UNK_020ef124 + 0x20ef0c8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384a00(**(undefined4 **)(_UNK_020ef128 + 0x20ef0e0),0x10);
  func_0x0244f590(uVar1,**(undefined4 **)(_UNK_020ef12c + 0x20ef0f8),0);
  **(undefined4 **)(**(int **)(_UNK_020ef130 + 0x20ef10c) + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.Board$$<TriggerLevelUnlock>b__197_0 RVA 0x20df134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020ef134(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x0211015c(0,0);
    if (iVar1 != 0) {
      func_0x01384bf0();
      iVar1 = func_0x02116e50(0,0);
      if (0 < iVar1) {
        func_0x01384bf0();
        iVar1 = func_0x02116cdc(0,0);
        if (iVar1 != 0) {
          func_0x01384bf0();
          uVar2 = func_0x02116a38(0,0);
          func_0x01384bf0();
          goto FUN_020ec188;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0211015c(param_2,0);
    if ((iVar1 != 0) && (iVar1 = func_0x02116e50(param_2,0), 0 < iVar1)) {
      iVar1 = func_0x02116cdc(param_2,0);
      if (iVar1 == 0) {
        return;
      }
      uVar2 = func_0x02116a38(param_2,0);
FUN_020ec188:
      func_0x021177d0(param_2,0,uVar2,0);
      pcVar3 = (char *)(_UNK_020ec318 + 0x20ec1a8);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_020ec31c + 0x20ec1bc));
        func_0x01384978(*(undefined4 *)(_UNK_020ec320 + 0x20ec1c8));
        func_0x01384978(*(undefined4 *)(_UNK_020ec324 + 0x20ec1d4));
        func_0x01384978(*(undefined4 *)(_UNK_020ec328 + 0x20ec1e0));
        *pcVar3 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x883d,0);
      if (iVar1 == 0) {
        piVar5 = *(int **)(_UNK_020ec32c + 0x20ec244);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar5;
        }
        iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
        if (iVar4 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar5;
          }
          uVar2 = **(undefined4 **)(iVar1 + 0x5c);
          iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_020ec330 + 0x20ec28c));
          func_0x03ccb96c(iVar4,uVar2,**(undefined4 **)(_UNK_020ec334 + 0x20ec2ac),0);
          *(int *)(*(int *)(*piVar5 + 0x5c) + 0x18) = iVar4;
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x02feb864(param_2,iVar4,**(undefined4 **)(_UNK_020ec338 + 0x20ec2dc));
        iVar1 = *(int *)(param_1 + 0x1c);
        if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020ec30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),param_2,0,*(undefined4 *)(iVar1 + 0x14));
          return;
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x883d,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02174858(iVar1,param_1,param_2,0,0);
      }
      return;
    }
  }
  return;
}



// ===== FAT.Merge.Board.<>c$$.cctor RVA 0x20faa78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210aa78(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0210aad0 + 0x210aa88);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210aad4 + 0x210aa9c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0210aad8 + 0x210aab0);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.Merge.Board.<>c$$.ctor RVA 0x20faadc =====

void FUN_0210aadc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.Board.<>c$$<UseClickItemSourceWithConsume>b__153_0 RVA 0x20faae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210aae4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0210ab1c + 0x210aaf8);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210ab20 + 0x210ab0c));
    *pcVar1 = '\x01';
  }
  return param_3;
}



// ===== FAT.Merge.Board.<>c$$<MixSourceProduce>b__155_0 RVA 0x20fab24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210ab24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0210ab5c + 0x210ab38);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210ab60 + 0x210ab4c));
    *pcVar1 = '\x01';
  }
  return param_3;
}



// ===== FAT.Merge.Board.<>c$$<UseAutoItemSource>b__158_0 RVA 0x20fab64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0210ab64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0210ab9c + 0x210ab78);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210aba0 + 0x210ab8c));
    *pcVar1 = '\x01';
  }
  return param_3;
}



// ===== FAT.Merge.Board.<>c$$<Merge>b__183_0 RVA 0x20faba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0210aba4(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = (char *)(_UNK_0210acc4 + 0x210abbc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210acc8 + 0x210abd0));
    *pcVar7 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  piVar8 = *(int **)(_UNK_0210accc + 0x210abf4);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar3 = *piVar8;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_0210ac3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar3,0);
LAB_0210ac3c:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *param_3;
  iVar4 = *piVar8;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
        goto LAB_0210acac;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_3,iVar4,0);
LAB_0210acac:
  iVar3 = (*(code *)*puVar2)(param_3,puVar2[1]);
  return iVar1 - iVar3;
}



// ===== FAT.Merge.Board.<>c$$<_SetItemPos>b__231_0 RVA 0x20facd0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210acd0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0210ad78 + 0x210ace4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210ad7c + 0x210acf8));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0210ad80 + 0x210ad1c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0210ad64;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0210ad80 + 0x210ad1c),0);
LAB_0210ad64:
                    /* WARNING: Could not recover jumptable at 0x0210ad74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.Merge.Board.<>c$$<_TriggerItemStateChange>b__255_0 RVA 0x20fad84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210ad84(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0210ae2c + 0x210ad98);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210ae30 + 0x210adac));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0210ae34 + 0x210add0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0210ae18;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0210ae34 + 0x210add0),0);
LAB_0210ae18:
                    /* WARNING: Could not recover jumptable at 0x0210ae28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,puVar2[1]);
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass120_0$$.ctor RVA 0x20fae38 =====

void FUN_0210ae38(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass120_0$$<AddArea>b__0 RVA 0x20fae40 =====

void FUN_0210ae40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = FUN_020db85c(iVar2,param_2,param_3,0);
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x80);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
      func_0x01384bf4();
    }
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    iVar2 = *(int *)(iVar2 + uVar1 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar3 + 0x80);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar1) {
      func_0x01384bf4();
    }
    iVar2 = *(int *)(iVar2 + uVar1 * 4 + 0x10);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 0xc) = param_4;
  }
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass151_0$$.ctor RVA 0x20faf1c =====

void FUN_0210af1c(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass151_0$$<UseChoiceBox>g__OnConfirmSelection|0 RVA 0x20faf24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0210af24(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_0210b20c + 0x210af40);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210b210 + 0x210af54));
    func_0x01384978(*(undefined4 *)(_UNK_0210b214 + 0x210af60));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 8);
  uStack_28 = 0;
  uStack_2c = 0;
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x02feb4f8(iVar9,0,**(undefined4 **)(_UNK_0210b218 + 0x210af94));
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar1 = FUN_020e1c7c(iVar10,iVar9,0,0);
  if (-1 < (int)uVar1) {
    if (0 < param_2) {
      iVar10 = *(int *)(param_1 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      FUN_020df144(iVar10,uVar1,&uStack_28,&uStack_2c,0);
      uVar3 = uStack_28;
      uVar2 = uStack_2c;
      iVar10 = *(int *)(param_1 + 0xc);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_020de158(iVar10,param_2,uVar1,uVar3,uVar2,0,0,0,0);
      iVar10 = *(int *)(param_1 + 0xc);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02123568(iVar9,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      FUN_020de384(iVar10,uVar2,0,0,0xd,uVar3,0);
      iVar10 = *(int *)(param_1 + 0xc);
      uVar3 = FUN_020d8024(*(undefined4 *)(param_1 + 8),0xf,0);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      FUN_020df204(iVar10,uVar3,uVar2,0);
    }
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0210b220(iVar9);
    iVar9 = *(int *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd73c(iVar9,uVar2,1,5,0);
    iVar9 = *(int *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    FUN_020dd8f4(iVar9,uVar2,uVar2,5,0);
    iVar9 = *(int *)(param_1 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar9 + 0x98);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x02148ef8(iVar9,uVar2,1,0);
    piVar4 = (int *)func_0x021566f4(0);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (piVar4 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar9 = *piVar4;
    uVar6 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0210b21c + 0x210b19c)) {
          puVar5 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0x238);
          goto LAB_0210b1e4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_0210b21c + 0x210b19c),0x2f);
LAB_0210b1e4:
    (*(code *)*puVar5)(piVar4,uVar2,0x14,puVar5[1]);
  }
  return ~uVar1 >> 0x1f;
}



// ===== FAT.Merge.Board.<>c__DisplayClass193_0$$.ctor RVA 0x20fb2d0 =====

void FUN_0210b2d0(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass193_0$$<UnfrozenItemByGem>b__0 RVA 0x20fb2d8 =====

void FUN_0210b2d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x934f,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x934f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar4,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar3,0);
    func_0x01485278(&uStack_38,iVar4,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar3 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x021177d0(iVar4,0,0,0);
  iVar3 = *(int *)(iVar3 + 0x1c);
  if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020eb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),iVar4,0,*(undefined4 *)(iVar3 + 0x14));
    return;
  }
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass202_0$$.ctor RVA 0x20fb304 =====

void FUN_0210b304(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.Board.<>c__DisplayClass202_0$$<TriggerEffectChange>b__0 RVA 0x20fb30c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210b30c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0210b3c0 + 0x210b324);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210b3c4 + 0x210b338));
    *pcVar6 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_1 + 8);
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0210b3c8 + 0x210b360)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0210b3a8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_0210b3c8 + 0x210b360),0);
LAB_0210b3a8:
                    /* WARNING: Could not recover jumptable at 0x0210b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_2,uVar5,puVar2[1]);
  return;
}



// ===== FAT.Merge.Board$$FindAnyNormalItemByComponent<object> RVA 0x2f483b4 =====

undefined4 FUN_02f583b4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    func_0x0140024c(param_2);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  uVar2 = 0;
  do {
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar2) {
      return 0;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    iVar4 = *(int *)(iVar3 + 0x10 + uVar2 * 4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar4 + 8) != 0) && (iVar1 = FUN_02116ae0(*(int *)(iVar4 + 8),0), iVar1 != 0)) {
      iVar1 = *(int *)(iVar4 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_02116a8c(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(iVar4 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x02feb4f8(iVar1,0,**(undefined4 **)(param_2 + 0x1c));
        if (iVar1 != 0) {
          return *(undefined4 *)(iVar4 + 8);
        }
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}



// ===== FAT.Merge.Board$$_NotifyItemComponents<object> RVA 0x2f48498 =====

void FUN_02f58498(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x0140024c(param_3);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  uVar2 = 0;
  while( true ) {
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar2) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar2) {
      func_0x01384bf4();
    }
    iVar1 = *(int *)(iVar3 + 0x10 + uVar2 * 4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      func_0x02feb864(iVar1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 4));
    }
    uVar2 = uVar2 + 1;
  }
  return;
}


