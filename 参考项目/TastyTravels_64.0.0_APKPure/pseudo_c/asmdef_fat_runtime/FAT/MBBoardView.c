/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardView$$get_boardBg RVA 0x1ef8f90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f08f90(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x166d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x166d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d1790 + 0x21d16b0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d1794 + 0x21d16c4),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d1798 + 0x21d1780));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x18);
}



// ===== FAT.MBBoardView$$get_boardFg RVA 0x1ef8fe4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f08fe4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f51,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02239238 + 0x2239158);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0223923c + 0x223916c),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02239240 + 0x2239228));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}



// ===== FAT.MBBoardView$$get_boardSelector RVA 0x1ef9038 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f09038(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ee7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ee7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02238894 + 0x22387b4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238898 + 0x22387c8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223889c + 0x2238884));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x20);
}



// ===== FAT.MBBoardView$$get_boardDrag RVA 0x1ef908c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f0908c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e82,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e82,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02238254 + 0x2238174);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02238258 + 0x2238188),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223825c + 0x2238244));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== FAT.MBBoardView$$get_boardHolder RVA 0x1ef90e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f090e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x15f4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15f4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d007c + 0x21cff9c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0080 + 0x21cffb0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0084 + 0x21d006c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x28);
}



// ===== FAT.MBBoardView$$get_boardEffect RVA 0x1ef9134 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f09134(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x387b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x387b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0220cf8c + 0x220ceac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0220cf90 + 0x220cec0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0220cf94 + 0x220cf7c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.MBBoardView$$get_boardCloud RVA 0x1ef9188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f09188(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f52,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f52,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02239340 + 0x2239260);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02239344 + 0x2239274),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02239348 + 0x2239330));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.MBBoardView$$get_boardInd RVA 0x1ef91dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f091dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x166a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x166a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021d14f8 + 0x21d1418);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d14fc + 0x21d142c),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d1500 + 0x21d14e8));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== FAT.MBBoardView$$get_boardRoot RVA 0x1ef9230 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f09230(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ec1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ec1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021bb474 + 0x21bb394);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.MBBoardView$$get_moveRoot RVA 0x1ef9284 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f09284(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5b91,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5b91,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021bb474 + 0x21bb394);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x34);
}



// ===== FAT.MBBoardView$$get_pairRoot RVA 0x1ef92d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f092d8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5e8a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e8a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021bb474 + 0x21bb394);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x38);
}



// ===== FAT.MBBoardView$$get_topEffectRoot RVA 0x1ef932c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f0932c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f2b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f2b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021bb474 + 0x21bb394);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021bb478 + 0x21bb3a8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021bb47c + 0x21bb464));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.MBBoardView$$get_BoardRes RVA 0x1ef9380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01f09380(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5cf2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5cf2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02237000 + 0x2236f20);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02237004 + 0x2236f34),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02237008 + 0x2236ff0));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.MBBoardView$$get_cellSize RVA 0x1ef93d4 =====

undefined4 FUN_01f093d4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ebc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ebc,0);
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
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.MBBoardView$$Setup RVA 0x1ef9428 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f09428(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
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
  
  pcVar6 = (char *)(_UNK_01f09828 + 0x1f0943c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f0982c + 0x1f09450));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e98,0);
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
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return;
  }
  piVar7 = *(int **)(param_1 + 0x18);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  piVar10 = *(int **)(_UNK_01f09830 + 0x1f094bc);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f09504;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f09504:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x1c);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f09574;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f09574:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x30);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f095e4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f095e4:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x2c);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f09654;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f09654:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x24);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f096c4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f096c4:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x20);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f09734;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f09734:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x28);
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f097a4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f097a4:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  piVar7 = *(int **)(param_1 + 0x40);
  if (piVar7 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar7;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == *piVar10) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01f09814;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar7,*piVar10,0);
LAB_01f09814:
                    /* WARNING: Could not recover jumptable at 0x01f09824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar7,puVar2[1]);
  return;
}



// ===== FAT.MBBoardView$$OnBoardEnter RVA 0x1ef9834 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f09834(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_01f099b0 + 0x1f09854);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f099b4 + 0x1f09868));
    func_0x01384978(*(undefined4 *)(_UNK_01f099b8 + 0x1f09874));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ea3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(param_2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01f046e8(iVar1,uVar4,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar1 + 8);
    if (*(int *)(**(int **)(_UNK_01f099bc + 0x1f0994c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01ddabc8(uVar4,0);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f099c0 + 0x1f0997c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ddc63c(iVar1,param_2,param_3,param_1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x5ea3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardView$$OnBoardLeave RVA 0x1ef99c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f099c4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_01f09a68 + 0x1f099d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f09a6c + 0x1f099ec));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5fd1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5fd1,0);
    if (iVar2 == 0) {
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
  param_1 = func_0x03668dfc(**(undefined4 **)(_UNK_01f09a70 + 0x1f09a44));
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01dded58 + 0x1dddf5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dded5c + 0x1dddf70),0);
    func_0x01384978(*(undefined4 *)(_UNK_01dded60 + 0x1dddf7c));
    func_0x01384978(*(undefined4 *)(_UNK_01dded64 + 0x1dddf88));
    func_0x01384978(*(undefined4 *)(_UNK_01dded68 + 0x1dddf94));
    func_0x01384978(*(undefined4 *)(_UNK_01dded6c + 0x1dddfa0));
    func_0x01384978(*(undefined4 *)(_UNK_01dded70 + 0x1dddfac));
    func_0x01384978(*(undefined4 *)(_UNK_01dded74 + 0x1dddfb8));
    func_0x01384978(*(undefined4 *)(_UNK_01dded78 + 0x1dddfc4));
    func_0x01384978(*(undefined4 *)(_UNK_01dded7c + 0x1dddfd0));
    func_0x01384978(*(undefined4 *)(_UNK_01dded80 + 0x1dddfdc));
    func_0x01384978(*(undefined4 *)(_UNK_01dded84 + 0x1dddfe8));
    func_0x01384978(*(undefined4 *)(_UNK_01dded88 + 0x1dddff4));
    func_0x01384978(*(undefined4 *)(_UNK_01dded8c + 0x1dde000));
    func_0x01384978(*(undefined4 *)(_UNK_01dded90 + 0x1dde00c));
    func_0x01384978(*(undefined4 *)(_UNK_01dded94 + 0x1dde018));
    func_0x01384978(*(undefined4 *)(_UNK_01dded98 + 0x1dde024));
    func_0x01384978(*(undefined4 *)(_UNK_01dded9c + 0x1dde030));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeda0 + 0x1dde03c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeda4 + 0x1dde048));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeda8 + 0x1dde054));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedac + 0x1dde060));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedb0 + 0x1dde06c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedb4 + 0x1dde078));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedb8 + 0x1dde084));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedbc + 0x1dde090));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedc0 + 0x1dde09c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedc4 + 0x1dde0a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedc8 + 0x1dde0b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedcc + 0x1dde0c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedd0 + 0x1dde0cc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedd4 + 0x1dde0d8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedd8 + 0x1dde0e4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddeddc + 0x1dde0f0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddede0 + 0x1dde0fc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddede4 + 0x1dde108));
    func_0x01384978(*(undefined4 *)(_UNK_01ddede8 + 0x1dde114));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedec + 0x1dde120));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedf0 + 0x1dde12c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedf4 + 0x1dde138));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedf8 + 0x1dde144));
    func_0x01384978(*(undefined4 *)(_UNK_01ddedfc + 0x1dde150));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee00 + 0x1dde15c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee04 + 0x1dde168));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee08 + 0x1dde174));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee0c + 0x1dde180));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee10 + 0x1dde18c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee14 + 0x1dde198));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee18 + 0x1dde1a4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee1c + 0x1dde1b0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee20 + 0x1dde1bc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee24 + 0x1dde1c8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee28 + 0x1dde1d4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee2c + 0x1dde1e0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee30 + 0x1dde1ec));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee34 + 0x1dde1f8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee38 + 0x1dde204));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee3c + 0x1dde210));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee40 + 0x1dde21c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddee44 + 0x1dde228));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5fd2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5fd2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  uVar6 = **(undefined4 **)(_UNK_01ddee48 + 0x1dde284);
  if ((*(int *)(param_1 + 0x78) != 0) &&
     (iVar2 = func_0x02139cf4(*(int *)(param_1 + 0x78),0), iVar2 != 0)) {
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x03507d38(&uStack_28,*(undefined4 *)(iVar2 + 8),
                    **(undefined4 **)(_UNK_01ddee4c + 0x1dde2b0));
    uStack_2c = uStack_24;
    if ((char)uStack_28 != '\0') goto LAB_01dde2dc;
  }
  uStack_2c = 0xffffffff;
LAB_01dde2dc:
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01ddee50 + 0x1dde2e8),&uStack_2c);
  uVar6 = func_0x0244f6a0(uVar6,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01ddee54 + 0x1dde314) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x0199d1cc(uVar6,0);
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01ddee58 + 0x1dde33c));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e09500(iVar2,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc9c4(iVar2,0,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbca98(iVar2,0,0);
  iVar2 = *(int *)(param_1 + 0x78);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddee5c + 0x1dde3dc));
  func_0x03cd4e0c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee60 + 0x1dde3f8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x021417d0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  puVar8 = *(undefined4 **)(_UNK_01ddee64 + 0x1dde42c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee68 + 0x1dde448),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020da470(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee6c + 0x1dde490),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020da310(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee70 + 0x1dde4d8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8950(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddee74 + 0x1dde50c));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01ddee78 + 0x1dde528),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8ab0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee7c + 0x1dde570),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d95b0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x78);
  puVar7 = *(undefined4 **)(_UNK_01ddee80 + 0x1dde5a4);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee84 + 0x1dde5c0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02140e50(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x78);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee88 + 0x1dde608),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x02140fb0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  puVar7 = *(undefined4 **)(_UNK_01ddee8c + 0x1dde63c);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddee90 + 0x1dde658),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9f00(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddee94 + 0x1dde68c));
  func_0x03cd4e0c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee98 + 0x1dde6a8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020da050(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddee9c + 0x1dde6f0),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9710(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddeea0 + 0x1dde738),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9870(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddeea4 + 0x1dde780),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d99d0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddeea8 + 0x1dde7c8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9b20(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar8);
  func_0x03ccb96c(uVar6,param_1,**(undefined4 **)(_UNK_01ddeeac + 0x1dde810),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9c70(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddeeb0 + 0x1dde858),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d9dc0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeeb4 + 0x1dde88c));
  func_0x03db6898(uVar6,param_1,**(undefined4 **)(_UNK_01ddeeb8 + 0x1dde8a8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020da1b0(iVar2,uVar6,0);
  iVar2 = *(int *)(param_1 + 0x7c);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeebc + 0x1dde8dc));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01ddeec0 + 0x1dde8f8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x020d8ed0(iVar2,uVar6,0);
  if (*(int *)(**(int **)(_UNK_01ddeec4 + 0x1dde928) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeec8 + 0x1dde944));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeecc + 0x1dde958));
  func_0x03ccca84(uVar6,param_1,**(undefined4 **)(_UNK_01ddeed0 + 0x1dde974),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349f188(iVar2,uVar6,**(undefined4 **)(_UNK_01ddeed4 + 0x1dde998));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeed8 + 0x1dde9ac));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeedc + 0x1dde9c0));
  func_0x03ccab14(uVar6,param_1,**(undefined4 **)(_UNK_01ddeee0 + 0x1dde9dc),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349e03c(iVar2,uVar6,**(undefined4 **)(_UNK_01ddeee4 + 0x1ddea00));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeee8 + 0x1ddea14));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddeeec + 0x1ddea28));
  func_0x03cd51ec(uVar6,param_1,**(undefined4 **)(_UNK_01ddeef0 + 0x1ddea44),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x034a2520(iVar2,uVar6,**(undefined4 **)(_UNK_01ddeef4 + 0x1ddea68));
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ddeef8 + 0x1ddea7c));
  uVar6 = func_0x01384be4(*puVar7);
  func_0x024500b4(uVar6,param_1,**(undefined4 **)(_UNK_01ddeefc + 0x1ddeaa4),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x028beac8(iVar2,uVar6,0);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ddef00 + 0x1ddead4));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddef04 + 0x1ddeae8));
  func_0x03cc7f44(uVar6,param_1,**(undefined4 **)(_UNK_01ddef08 + 0x1ddeb04),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349c45c(iVar2,uVar6,**(undefined4 **)(_UNK_01ddef0c + 0x1ddeb28));
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x021447e0(iVar2,0,0);
  iVar2 = *(int *)(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01e23ab8(iVar2,0);
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01ddef10 + 0x1ddeb98));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01ddef14 + 0x1ddebac));
  func_0x03ccc738(uVar6,param_1,**(undefined4 **)(_UNK_01ddef18 + 0x1ddebc8),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0349edc0(iVar2,uVar6,**(undefined4 **)(_UNK_01ddef1c + 0x1ddebec));
  func_0x01ddef28(param_1);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01ddef20 + 0x1ddec1c);
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar5) {
    func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar5,0);
  }
  iVar2 = *(int *)(param_1 + 0x44);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x48);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar2,*puVar8);
  piVar1 = *(int **)(_UNK_01ddef24 + 0x1dded34);
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01dd7d28();
  return;
}



// ===== FAT.MBBoardView$$.ctor RVA 0x1ef9a74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f09a74(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f09aec + 0x1f09a88);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f09af0 + 0x1f09a9c));
    func_0x01384978(*(undefined4 *)(_UNK_01f09af4 + 0x1f09aa8));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01f09af8 + 0x1f09abc));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01f09afc + 0x1f09ad0));
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


